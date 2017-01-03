// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Johan Gyselinck
//   Ruth Sabariego
//

#include <map>
#include <complex>
#include <string.h>
#include <math.h>
#include "GetDPVersion.h"
#include "ProData.h"
#include "DofData.h"
#include "GeoData.h"
#include "ExtendedGroup.h"
#include "ListUtils.h"
#include "TreeUtils.h"
#include "MallocUtils.h"
#include "Message.h"
#include "ProParser.h"
#include "OS.h"

#define TWO_PI             6.2831853071795865

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

FILE  * File_PRE = 0, * File_RES = 0, * File_TMP = 0 ;

struct DofData  * CurrentDofData ;

int fcmp_Dof(const void * a, const void * b)
{
  int Result ;

  if((Result = ((struct Dof *)a)->NumType  - ((struct Dof *)b)->NumType) != 0)
    return Result ;
  if((Result = ((struct Dof *)a)->Entity   - ((struct Dof *)b)->Entity)  != 0)
    return Result ;
  return        ((struct Dof *)a)->Harmonic - ((struct Dof *)b)->Harmonic ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ I n i t D o f D a t a                                           */
/* ------------------------------------------------------------------------ */

void Dof_InitDofData(struct DofData * DofData_P, int Num,
		     int ResolutionIndex, int SystemIndex,
		     char * Name_SolverDataFile)
{
  int  Index ;

  DofData_P->Num = Num ;

  DofData_P->ResolutionIndex = ResolutionIndex ;
  DofData_P->SystemIndex     = SystemIndex ;

  DofData_P->FunctionSpaceIndex = NULL ;
  DofData_P->TimeFunctionIndex  = List_Create(10, 5, sizeof(int)) ;
  Index = 0 ;  List_Add(DofData_P->TimeFunctionIndex, &Index) ;
  DofData_P->Pulsation = NULL ;  DofData_P->Val_Pulsation = NULL ;
  DofData_P->NbrHar = 1 ;

  DofData_P->NbrAnyDof = 0 ;  DofData_P->NbrDof = 0 ;
  DofData_P->DofTree = Tree_Create(sizeof(struct Dof), fcmp_Dof) ;
  DofData_P->DofList = NULL ;

  DofData_P->SolverDataFileName = Name_SolverDataFile ;
  DofData_P->Flag_RHS = 0 ;
  DofData_P->Flag_Init[0] = 0 ;
  DofData_P->Flag_Init[1] = 0 ;
  DofData_P->Flag_Init[2] = 0 ;
  DofData_P->Flag_Init[3] = 0 ;
  DofData_P->Flag_Init[4] = 0 ;
  DofData_P->Flag_Init[5] = 0 ;
  DofData_P->Flag_Init[6] = 0 ;

  DofData_P->Flag_Only = 0 ;
  DofData_P->Flag_InitOnly[0] = 0 ;
  DofData_P->Flag_InitOnly[1] = 0 ;
  DofData_P->Flag_InitOnly[2] = 0 ;

  DofData_P->OnlyTheseMatrices = NULL;

  DofData_P->Solutions = NULL ;
  DofData_P->CurrentSolution = NULL ;

  DofData_P->CorrectionSolutions.Flag = 0;
  DofData_P->CorrectionSolutions.AllSolutions = NULL;

  DofData_P->DummyDof = NULL ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ F r e e D o f D a t a                                           */
/* ------------------------------------------------------------------------ */

void Dof_FreeDofData(struct DofData * DofData_P)
{
  Message::Debug("Freeing DofData %d", DofData_P->Num);

  List_Delete(DofData_P->FunctionSpaceIndex);
  List_Delete(DofData_P->TimeFunctionIndex);
  List_Delete(DofData_P->Pulsation);
  Tree_Delete(DofData_P->DofTree);
  List_Delete(DofData_P->DofList);
  Free(DofData_P->DummyDof);

  if(DofData_P->Solutions){
    for(int i = 0; i < List_Nbr(DofData_P->Solutions); i++){
      Solution *Solution_P = (struct Solution*)List_Pointer(DofData_P->Solutions, i);
      if(Solution_P->SolutionExist){
	LinAlg_DestroyVector(&Solution_P->x);
	Free(Solution_P->TimeFunctionValues) ;
        Solution_P->TimeFunctionValues = NULL;
        Solution_P->SolutionExist = 0;
      }
    }
    List_Delete(DofData_P->Solutions);
  }

  List_Delete(DofData_P->OnlyTheseMatrices);

  if(DofData_P->Flag_Init[0] == 1 || DofData_P->Flag_Init[0] == 2){
    LinAlg_DestroyMatrix(&DofData_P->A);
    LinAlg_DestroyVector(&DofData_P->b);
    LinAlg_DestroyVector(&DofData_P->res);
    LinAlg_DestroyVector(&DofData_P->dx);
    LinAlg_DestroySolver(&DofData_P->Solver);
  }

  if(DofData_P->Flag_Init[0] == 2){
    LinAlg_DestroyMatrix(&DofData_P->Jac);
  }

  if(DofData_P->Flag_Init[1] == 1){
    LinAlg_DestroyMatrix(&DofData_P->M1);
    LinAlg_DestroyVector(&DofData_P->m1);
    for(int i = 0; i < List_Nbr(DofData_P->m1s); i++)
      LinAlg_DestroyVector((gVector*)List_Pointer(DofData_P->m1s, i));
    List_Delete(DofData_P->m1s);
  }

  if(DofData_P->Flag_Init[2] == 1){
    LinAlg_DestroyMatrix(&DofData_P->M2);
    LinAlg_DestroyVector(&DofData_P->m2);
    for(int i = 0; i < List_Nbr(DofData_P->m2s); i++)
      LinAlg_DestroyVector((gVector*)List_Pointer(DofData_P->m2s, i));
    List_Delete(DofData_P->m2s);
  }

  if(DofData_P->Flag_Init[3] == 1){
    LinAlg_DestroyMatrix(&DofData_P->M3);
    LinAlg_DestroyVector(&DofData_P->m3);
    for(int i = 0; i < List_Nbr(DofData_P->m3s); i++)
       LinAlg_DestroyVector((gVector*)List_Pointer(DofData_P->m3s, i));
    List_Delete(DofData_P->m3s);
  }

  if(DofData_P->Flag_Init[4] == 1){
    LinAlg_DestroyMatrix(&DofData_P->M4);
    LinAlg_DestroyVector(&DofData_P->m4);
    for(int i = 0; i < List_Nbr(DofData_P->m4s); i++)
       LinAlg_DestroyVector((gVector*)List_Pointer(DofData_P->m4s, i));
    List_Delete(DofData_P->m4s);
  }

  if(DofData_P->Flag_Init[5] == 1){
    LinAlg_DestroyMatrix(&DofData_P->M5);
    LinAlg_DestroyVector(&DofData_P->m5);
    for(int i = 0; i < List_Nbr(DofData_P->m5s); i++)
       LinAlg_DestroyVector((gVector*)List_Pointer(DofData_P->m5s, i));
    List_Delete(DofData_P->m5s);
  }

  if(DofData_P->Flag_Init[6] == 1){
    LinAlg_DestroyMatrix(&DofData_P->M6);
    LinAlg_DestroyVector(&DofData_P->m6);
    for(int i = 0; i < List_Nbr(DofData_P->m6s); i++)
       LinAlg_DestroyVector((gVector*)List_Pointer(DofData_P->m6s, i));
    List_Delete(DofData_P->m6s);
  }

  if(DofData_P->Flag_Only){
    if(DofData_P->Flag_InitOnly[0] == 1){
      LinAlg_DestroyMatrix(&DofData_P->A1);
      LinAlg_DestroyVector(&DofData_P->b1);
    }
    if(DofData_P->Flag_InitOnly[1] == 1){
      LinAlg_DestroyMatrix(&DofData_P->A2);
      LinAlg_DestroyVector(&DofData_P->b2);
    }
    if(DofData_P->Flag_InitOnly[2] == 1){
      LinAlg_DestroyMatrix(&DofData_P->A3);
      LinAlg_DestroyVector(&DofData_P->b3);
    }
  }

  // TODO: handle MH data and CorrectionSolutions
}

/* ------------------------------------------------------------------------ */
/*  D o f _ S e t C u r r e n t D o f D a t a                               */
/* ------------------------------------------------------------------------ */

void Dof_SetCurrentDofData(struct DofData * DofData_P)
{
  CurrentDofData = DofData_P ;
}

/* ------------------------------------------------------------------------ */
/*  F i l e s   . . .                                                       */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------------------ */
/*  D o f _ O p e n F i l e                                                 */
/* ------------------------------------------------------------------------ */

void Dof_OpenFile(int Type, char * Name, const char * Mode)
{
  if((Message::GetIsCommWorld() && Message::GetCommRank()) &&
     (Mode[0] == 'w' || Mode[0] == 'a')){
    switch (Type) {
    case DOF_PRE :  File_PRE = 0 ;  break ;
    case DOF_RES :  File_RES = 0 ;  break ;
    case DOF_TMP :  File_RES = 0 ;  break ;
    default      :  break ;
    }
    return;
  }

  const char  * Extension;
  char    FileName[256] ;
  FILE  * File_X ;

  switch (Type) {
  case DOF_PRE :  Extension = ".pre" ;  break ;
  case DOF_RES :  Extension = ""     ;  break ;
  case DOF_TMP :  Extension = ""     ;  break ;
  default      :  Extension = ".pre" ;  break ;
  }

  strcpy(FileName, Name) ; strcat(FileName, Extension) ;

  if(!(File_X = FOpen(FileName, Mode)))
    Message::Error("Unable to open file '%s'", FileName) ;

  switch (Type) {
  case DOF_PRE :  File_PRE = File_X ;  break ;
  case DOF_RES :  File_RES = File_X ;  break ;
  case DOF_TMP :  File_TMP = File_RES ; File_RES = File_X ;  break ;
  default      :  break ;
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ C l o s e F i l e                                               */
/* ------------------------------------------------------------------------ */

void Dof_CloseFile(int Type)
{
  switch (Type) {
  case DOF_PRE :  if(File_PRE) fclose(File_PRE) ;  break ;
  case DOF_RES :  if(File_RES) fclose(File_RES) ;  break ;
  case DOF_TMP :  if(File_RES) fclose(File_RES) ;  File_RES = File_TMP ; break ;
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ F l u s h F i l e                                               */
/* ------------------------------------------------------------------------ */

void Dof_FlushFile(int Type)
{
  switch (Type) {
  case DOF_PRE :  fflush(File_PRE) ;  break ;
  case DOF_RES :  fflush(File_RES) ;  break ;
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e P R E 0                                       */
/* ------------------------------------------------------------------------ */

void Dof_WriteFilePRE0(int Num_Resolution, char * Name_Resolution,
		       int Nbr_DofData)
{
  if(Message::GetIsCommWorld() && Message::GetCommRank()) return;

  fprintf(File_PRE, "$Resolution /* '%s' */\n", Name_Resolution) ;
  fprintf(File_PRE, "%d %d\n", Num_Resolution, Nbr_DofData) ;
  fprintf(File_PRE, "$EndResolution\n") ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ R e a d F i l e P R E 0                                         */
/* ------------------------------------------------------------------------ */

void Dof_ReadFilePRE0(int * Num_Resolution, int * Nbr_DofData)
{
  Message::Barrier();

  char  String[256] ;

  do {
    if(!fgets(String, sizeof(String), File_PRE)) break;
    if(feof(File_PRE))  break;
  } while (String[0] != '$');

  if(feof(File_PRE)){ Message::Error("$Resolution field not found in file"); return; }

  if(!strncmp(&String[1], "Resolution", 10)) {
    fscanf(File_PRE, "%d %d", Num_Resolution, Nbr_DofData) ;
  }

  do {
    if(!fgets(String, sizeof(String), File_PRE) || feof(File_PRE)){
      Message::Error("Premature end of file");
      break;
    }
  } while (String[0] != '$') ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e P R E                                         */
/* ------------------------------------------------------------------------ */

void Dof_WriteFilePRE(struct DofData * DofData_P)
{
  if(Message::GetIsCommWorld() && Message::GetCommRank()) return;

  int  i, Nbr_Index ;
  struct Dof  * Dof_P0 ;

  fprintf(File_PRE, "$DofData /* #%d */\n", DofData_P->Num) ;

  fprintf(File_PRE, "%d %d\n",
	  DofData_P->ResolutionIndex, DofData_P->SystemIndex) ;

  Nbr_Index = List_Nbr(DofData_P->FunctionSpaceIndex) ;
  fprintf(File_PRE, "%d", Nbr_Index) ;
  for(i = 0 ; i < Nbr_Index ; i++)
    fprintf(File_PRE, " %d",
	    *((int *)List_Pointer(DofData_P->FunctionSpaceIndex, i))) ;
  fprintf(File_PRE, "\n") ;

  Nbr_Index = List_Nbr(DofData_P->TimeFunctionIndex) ;
  fprintf(File_PRE, "%d", Nbr_Index) ;
  for(i = 0 ; i < Nbr_Index ; i++)
    fprintf(File_PRE, " %d",
	    *((int *)List_Pointer(DofData_P->TimeFunctionIndex, i))) ;
  fprintf(File_PRE, "\n") ;

  fprintf(File_PRE, "%d", 1) ;
  for(i = 0 ; i < 1 ; i++)
    fprintf(File_PRE, " %d", 0) ;
  fprintf(File_PRE, "\n") ;

  fprintf(File_PRE, "%d %d\n",
	  (DofData_P->DofTree)? Tree_Nbr(DofData_P->DofTree) : DofData_P->NbrAnyDof,
	  DofData_P->NbrDof) ;

  if(DofData_P->DofTree)
    Tree_Action(DofData_P->DofTree, Dof_WriteDofPRE) ;
  else {
    if(DofData_P->NbrAnyDof){
      Dof_P0 = (struct Dof *)List_Pointer(DofData_P->DofList, 0) ;
      for(i = 0 ; i < DofData_P->NbrAnyDof ; i++)
	Dof_WriteDofPRE(Dof_P0 + i, NULL) ;
    }
  }
  fprintf(File_PRE, "$EndDofData\n") ;
  fflush(File_PRE) ;
}

/* ------------------------------- */
/*  D o f _ W r i t e D o f P R E  */
/* ------------------------------- */

void Dof_WriteDofPRE(void * a, void * b)
{
  struct Dof  * Dof_P ;

  Dof_P = (struct Dof *) a ;

  fprintf(File_PRE, "%d %d %d %d ",
	  Dof_P->NumType, Dof_P->Entity, Dof_P->Harmonic, Dof_P->Type) ;

  switch (Dof_P->Type) {
  case DOF_UNKNOWN :
    fprintf(File_PRE, "%d %d\n", Dof_P->Case.Unknown.NumDof,
            Dof_P->Case.Unknown.NonLocal ? -1 : 1) ;
    break ;
  case DOF_FIXEDWITHASSOCIATE :
    fprintf(File_PRE, "%d ", Dof_P->Case.FixedAssociate.NumDof) ;
    LinAlg_PrintScalar(File_PRE, &Dof_P->Val);
    fprintf(File_PRE, " %d\n", Dof_P->Case.FixedAssociate.TimeFunctionIndex) ;
    break ;
  case DOF_FIXED :
    LinAlg_PrintScalar(File_PRE, &Dof_P->Val);
    fprintf(File_PRE, " %d\n", Dof_P->Case.FixedAssociate.TimeFunctionIndex) ;
    break ;
  case DOF_FIXED_SOLVE :
    fprintf(File_PRE, "%d\n", Dof_P->Case.FixedAssociate.TimeFunctionIndex) ;
    break ;
  case DOF_UNKNOWN_INIT :
    fprintf(File_PRE, "%d ", Dof_P->Case.Unknown.NumDof) ;
    LinAlg_PrintScalar(File_PRE, &Dof_P->Val);
    fprintf(File_PRE, " ") ;
    LinAlg_PrintScalar(File_PRE, &Dof_P->Val2);
    fprintf(File_PRE, " %d\n", Dof_P->Case.Unknown.NonLocal ? -1 : 1) ;
    break ;
  case DOF_LINK :
    fprintf(File_PRE, "%.16g %d\n",
	    Dof_P->Case.Link.Coef, Dof_P->Case.Link.EntityRef) ;
    break ;
  case DOF_LINKCPLX :
    fprintf(File_PRE, "%.16g %.16g %d\n",
	    Dof_P->Case.Link.Coef, Dof_P->Case.Link.Coef2,
	    Dof_P->Case.Link.EntityRef) ;
    break ;
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ R e a d F i l e P R E                                           */
/* ------------------------------------------------------------------------ */

void Dof_ReadFilePRE(struct DofData * DofData_P)
{
  Message::Barrier();

  int         i, Nbr_Index, Int, Dummy ;
  struct Dof  Dof ;
  char        String[256] ;

  do {
    if(!fgets(String, sizeof(String), File_PRE)) break;
    if(feof(File_PRE))  break;
  } while (String[0] != '$') ;

  if(feof(File_PRE)){ Message::Error("$DofData field not found in file"); return; }

  if(!strncmp(&String[1], "DofData", 7)) {

    fscanf(File_PRE, "%d %d",
	   &DofData_P->ResolutionIndex, &DofData_P->SystemIndex) ;

    fscanf(File_PRE, "%d", &Nbr_Index) ;
    DofData_P->FunctionSpaceIndex = List_Create(Nbr_Index, 1, sizeof(int)) ;
    for(i = 0 ; i < Nbr_Index ; i++) {
      fscanf(File_PRE, "%d", &Int) ;
      List_Add(DofData_P->FunctionSpaceIndex, &Int) ;
    }

    fscanf(File_PRE, "%d", &Nbr_Index) ;
    DofData_P->TimeFunctionIndex = List_Create(Nbr_Index, 1, sizeof(int)) ;
    for(i = 0 ; i < Nbr_Index ; i++) {
      fscanf(File_PRE, "%d", &Int) ;
      List_Add(DofData_P->TimeFunctionIndex, &Int) ;
    }

    fscanf(File_PRE, "%d", &Dummy) ;
    for(i = 0 ; i < 1 ; i++)
      fscanf(File_PRE, "%d", &Dummy) ;

    fscanf(File_PRE, "%d %d", &DofData_P->NbrAnyDof, &DofData_P->NbrDof) ;

    DofData_P->DofList = List_Create(DofData_P->NbrAnyDof, 1, sizeof(struct Dof)) ;
    Tree_Delete(DofData_P->DofTree);
    DofData_P->DofTree = NULL;

    for(i = 0 ; i < DofData_P->NbrAnyDof ; i++) {

      fscanf(File_PRE, "%d %d %d %d",
	     &Dof.NumType, &Dof.Entity, &Dof.Harmonic, &Dof.Type) ;

      switch (Dof.Type) {
      case DOF_UNKNOWN :
	fscanf(File_PRE, "%d", &Dof.Case.Unknown.NumDof) ;
	fscanf(File_PRE, "%d", &Dummy) ;
        Dof.Case.Unknown.NonLocal = (Dummy < 0) ? true : false;
        if(Dummy < 0)
          DofData_P->NonLocalEquations.push_back(Dof.Case.Unknown.NumDof);
	break ;
      case DOF_FIXEDWITHASSOCIATE :
	fscanf(File_PRE, "%d", &Dof.Case.FixedAssociate.NumDof) ;
	LinAlg_ScanScalar(File_PRE, &Dof.Val) ;
	fscanf(File_PRE, "%d", &Dof.Case.FixedAssociate.TimeFunctionIndex) ;
	break ;
      case DOF_FIXED :
	LinAlg_ScanScalar(File_PRE, &Dof.Val) ;
	fscanf(File_PRE, "%d", &Dof.Case.FixedAssociate.TimeFunctionIndex) ;
	break ;
      case DOF_FIXED_SOLVE :
	fscanf(File_PRE, "%d", &Dof.Case.FixedAssociate.TimeFunctionIndex) ;
	break ;
      case DOF_UNKNOWN_INIT :
	fscanf(File_PRE, "%d", &Dof.Case.Unknown.NumDof) ;
	LinAlg_ScanScalar(File_PRE, &Dof.Val) ;
	LinAlg_ScanScalar(File_PRE, &Dof.Val2) ;
	fscanf(File_PRE, "%d", &Dummy) ;
        Dof.Case.Unknown.NonLocal = (Dummy < 0) ? true : false;
        if(Dummy < 0)
          DofData_P->NonLocalEquations.push_back(Dof.Case.Unknown.NumDof);
	break ;
      case DOF_LINK :
	fscanf(File_PRE, "%lf %d",
	       &Dof.Case.Link.Coef, &Dof.Case.Link.EntityRef) ;
	Dof.Case.Link.Dof = NULL ;
	break ;
      case DOF_LINKCPLX :
	fscanf(File_PRE, "%lf %lf %d",
	       &Dof.Case.Link.Coef, &Dof.Case.Link.Coef2, &Dof.Case.Link.EntityRef) ;
	Dof.Case.Link.Dof = NULL ;
	break ;
      }

      List_Add(DofData_P->DofList, &Dof) ;
    }
  }

  do {
    if(!fgets(String, sizeof(String), File_PRE) || feof(File_PRE)){
      Message::Error("Premature end of file");
      break;
    }
  } while (String[0] != '$') ;

  Dof_InitDofType(DofData_P) ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e R E S 0                                       */
/* ------------------------------------------------------------------------ */

void Dof_WriteFileRES0(char * Name_File, int Format)
{
  if(Message::GetIsCommWorld() && Message::GetCommRank()) return;

  Dof_OpenFile(DOF_RES, Name_File, (char*)(Format ? "wb" : "w")) ;
  fprintf(File_RES, "$ResFormat /* GetDP %s, %s */\n", GETDP_VERSION,
	  Format ? "binary" : "ascii") ;
  fprintf(File_RES, "1.1 %d\n", Format) ;
  fprintf(File_RES, "$EndResFormat\n") ;
  Dof_CloseFile(DOF_RES) ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e R E S _ E x t e n d M H                       */
/* ------------------------------------------------------------------------ */

void Dof_WriteFileRES_ExtendMH(char * Name_File, struct DofData * DofData_P,
			       int Format, int NbrH)
{
  if(Message::GetIsCommWorld() && Message::GetCommRank()) return;

  if(!DofData_P->CurrentSolution){
    Message::Warning("No solution to save");
    return;
  }

  gVector x;
  double d;
  int i, inew;

  Dof_OpenFile(DOF_RES, Name_File, (char*)(Format ? "ab" : "a")) ;

  fprintf(File_RES, "$Solution  /* DofData #%d */\n", DofData_P->Num) ;
  fprintf(File_RES, "%d 0 0 0 \n", DofData_P->Num) ;

  LinAlg_CreateVector(&x, &DofData_P->Solver, (DofData_P->NbrDof / Current.NbrHar) * NbrH) ;

  LinAlg_ZeroVector(&x) ;

  for(i=0 ; i<DofData_P->NbrDof ; i++){
    LinAlg_GetDoubleInVector(&d, &DofData_P->CurrentSolution->x, i);
    inew = (i / Current.NbrHar) * NbrH + i % Current.NbrHar;
    LinAlg_SetDoubleInVector(d, &x, inew);
  }

  Format ?
    LinAlg_WriteVector(File_RES,&x) :
    LinAlg_PrintVector(File_RES,&x) ;

  fprintf(File_RES, "$EndSolution\n") ;

  Dof_CloseFile(DOF_RES) ;

  LinAlg_DestroyVector(&x) ;
}

void Dof_WriteFileRES_MHtoTime(char * Name_File, struct DofData * DofData_P,
			       int Format, List_T * Time_L)
{
  if(Message::GetIsCommWorld() && Message::GetCommRank()) return;

  if(!DofData_P->CurrentSolution){
    Message::Warning("No solution to save");
    return;
  }

  gVector x;
  double Time, d1, d2, d, *Pulsation;
  int iT, i, j, k;

  Dof_OpenFile(DOF_RES, Name_File, (char*)(Format ? "ab" : "a")) ;


  for(iT=0 ; iT<List_Nbr(Time_L) ; iT++){

    List_Read(Time_L, iT, &Time);

    fprintf(File_RES, "$Solution  /* DofData #%d */\n", DofData_P->Num) ;
    fprintf(File_RES, "%d %e 0 %d \n", DofData_P->Num,Time,iT) ;

    Pulsation = DofData_P->Val_Pulsation ;

    LinAlg_CreateVector(&x, &DofData_P->Solver, DofData_P->NbrDof/Current.NbrHar) ;

    LinAlg_ZeroVector(&x) ;

    for(i=0 ; i<DofData_P->NbrDof/Current.NbrHar ; i++) {
      d = 0;
      for(k=0 ; k<Current.NbrHar/2 ; k++) {
	j = i * Current.NbrHar + 2*k ;
	LinAlg_GetDoubleInVector(&d1, &DofData_P->CurrentSolution->x, j) ;
	LinAlg_GetDoubleInVector(&d2, &DofData_P->CurrentSolution->x, j+1) ;
	d += d1 * cos(Pulsation[k]*Time) - d2 * sin(Pulsation[k]*Time) ;
      }
      LinAlg_SetDoubleInVector(d, &x, i) ;
    }

    Format ?
      LinAlg_WriteVector(File_RES,&x) :
      LinAlg_PrintVector(File_RES,&x) ;

    fprintf(File_RES, "$EndSolution\n") ;
  }


  Dof_CloseFile(DOF_RES) ;

  LinAlg_DestroyVector(&x) ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e R E S                                         */
/* ------------------------------------------------------------------------ */

void Dof_WriteFileRES(char * Name_File, struct DofData * DofData_P, int Format,
		      double Val_Time, double Val_TimeImag, int Val_TimeStep)
{
  if(Message::GetIsCommWorld() && Message::GetCommRank()) return;

  if(!DofData_P->CurrentSolution){
    Message::Warning("No solution to save");
    return;
  }

  Dof_OpenFile(DOF_RES, Name_File, (char*)(Format ? "ab" : "a")) ;

  fprintf(File_RES, "$Solution  /* DofData #%d */\n", DofData_P->Num) ;
  fprintf(File_RES, "%d %.16g %.16g %d\n", DofData_P->Num, Val_Time,
          Val_TimeImag, Val_TimeStep) ;

  Format ?
    LinAlg_WriteVector(File_RES, &DofData_P->CurrentSolution->x) :
    LinAlg_PrintVector(File_RES, &DofData_P->CurrentSolution->x) ;

  fprintf(File_RES, "$EndSolution\n") ;

  Dof_CloseFile(DOF_RES) ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e R E S _ W i t h E n t i t y N u m             */
/* ------------------------------------------------------------------------ */

void Dof_WriteFileRES_WithEntityNum(char * Name_File, struct DofData * DofData_P,
                                    struct GeoData * GeoData_P0, struct Group *Group_P,
                                    bool saveFixed)
{
  if(Message::GetIsCommWorld() && Message::GetCommRank()) return;

  if(!DofData_P->CurrentSolution){
    Message::Warning("No solution to save");
    return;
  }

  std::map<int, std::map<int, std::complex<double> > > unknowns;

  List_T *l = !DofData_P->DofList ? Tree2List(DofData_P->DofTree) : 0;
  int N = l ? List_Nbr(l) : List_Nbr(DofData_P->DofList);
  for(int i = 0; i < N; i++){
    struct Dof *dof;
    if(l)
      dof = (Dof*)List_Pointer(l, i);
    else
      dof = (Dof*)List_Pointer(DofData_P->DofList, i);
    if(dof->Type == DOF_UNKNOWN || dof->Type == DOF_UNKNOWN_INIT){
      gScalar s;
      LinAlg_GetScalarInVector(&s, &DofData_P->CurrentSolution->x,
                               dof->Case.Unknown.NumDof - 1);
      unknowns[dof->NumType][dof->Entity] = s.s;
    }
    if(saveFixed && dof->Type == DOF_FIXED){
      unknowns[dof->NumType][dof->Entity] = dof->Val.s;
    }
  }

  for(std::map<int, std::map<int, std::complex<double> > >::iterator it =
        unknowns.begin(); it != unknowns.end(); it++){

    // create files that can be interpreted by ListFromFile and Value/VectorFromIndex
    char FileRe[256], FileIm[256] ;
    if(unknowns.size() > 1){
      sprintf(FileRe, "%s_%d", Name_File, it->first);
      sprintf(FileIm, "%s_%d", Name_File, it->first);
    }
    else{
      strcpy(FileRe, Name_File);
      strcpy(FileIm, Name_File);
    }
    if(Current.NbrHar > 1){
      strcat(FileRe, "_Re.txt");
      strcat(FileIm, "_Im.txt");
    }
    else{
      strcat(FileRe, ".txt");
      strcat(FileIm, ".txt");
    }
    FILE *fpRe = FOpen(FileRe, "w");
    if(!fpRe){
      Message::Error("Unable to open file '%s'", FileRe) ;
      return;
    }
    FILE *fpIm = 0;
    if(Current.NbrHar > 1){
      fpIm = FOpen(FileIm, "w");
      if(!fpIm){
        Message::Error("Unable to open file '%s'", FileIm) ;
        return;
      }
    }

    // create vectors that can be shared as lists
    std::vector<double> exportRe, exportIm;

    if(!Group_P){
      int n = (int)it->second.size();
      fprintf(fpRe, "%d\n", n);
      exportRe.push_back(n);
      if(fpIm){
        fprintf(fpIm, "%d\n", n);
        exportIm.push_back(n);
      }
      for(std::map<int, std::complex<double> >::iterator it2 = it->second.begin();
          it2 != it->second.end(); it2++){
        fprintf(fpRe, "%d %.16g\n", it2->first, it2->second.real());
        exportRe.push_back(it2->first);
        exportRe.push_back(it2->second.real());
        if(fpIm){
          fprintf(fpIm, "%d %.16g\n", it2->first, it2->second.imag());
          exportIm.push_back(it2->first);
          exportIm.push_back(it2->second.imag());
        }
      }
    }
    else{
      Message::Info("Writing solution for all entities in group '%s'", Group_P->Name) ;

      // force generation of extended list (necessary when using multiple
      // meshes)
      List_Delete(Group_P->ExtendedList);
      Generate_ExtendedGroup(Group_P) ;
      int n = List_Nbr(Group_P->ExtendedList);
      fprintf(fpRe, "%d\n", n);
      exportRe.push_back(n);
      if(fpIm){
        fprintf(fpIm, "%d\n", n);
        exportIm.push_back(n);
      }
      for(int i = 0; i < List_Nbr(Group_P->ExtendedList); i++){
        int num;
        List_Read(Group_P->ExtendedList, i, &num);
        if(!Group_P->InitialSuppList ||
           (!List_Search(Group_P->ExtendedSuppList, &num, fcmp_int))){
          // SuppList assumed to be "Not"!
          if(it->second.count(num)){
            std::complex<double> s = it->second[num];
            fprintf(fpRe, "%d %.16g\n", num, s.real());
            exportRe.push_back(num);
            exportRe.push_back(s.real());
            if(fpIm){
              fprintf(fpIm, "%d %.16g\n", num, s.imag());
              exportIm.push_back(num);
              exportIm.push_back(s.imag());
            }
          }
          else{
            // yes, write zero: that's on purpose for the iterative schemes
            fprintf(fpRe, "%d 0\n", num);
            exportRe.push_back(num);
            exportRe.push_back(0);
            if(fpIm){
              fprintf(fpIm, "%d 0\n", num);
              exportIm.push_back(num);
              exportIm.push_back(0);
            }
          }
        }
      }
    }
    fclose(fpRe);
    GetDPNumbers[FileRe] = exportRe;
    if(fpIm){
      fclose(fpIm);
      GetDPNumbers[FileIm] = exportIm;
    }
  }

  List_Delete(l);

}

/* ------------------------------------------------------------------------ */
/*  D o f _ R e a d F i l e R E S                                           */
/* ------------------------------------------------------------------------ */

void Dof_ReadFileRES(List_T * DofData_L, struct DofData * Read_DofData_P,
		     int Read_DofData, double *Time, double *TimeImag,
		     double *TimeStep)
{
  Message::Barrier();

  int             Num_DofData, Val_TimeStep, Format = 0, Read ;
  double          Val_Time, Val_TimeImag = 0., Version = 0.;
  struct DofData  * DofData_P = NULL ;
  struct Solution Solution_S ;
  char            String[256] ;

  while (1) {

    do {
      if(!fgets(String, sizeof(String), File_RES)) break;
      if(feof(File_RES))  break ;
    } while (String[0] != '$') ;

    if(feof(File_RES))  break ;

    /*  F o r m a t  */

    if(!strncmp(&String[1], "ResFormat", 9)) {
      fscanf(File_RES, "%lf %d\n", &Version, &Format) ;
    }

    /*  S o l u t i o n  */

    if(!strncmp(&String[1], "Solution", 8)) {

      /* don't use fscanf directly on the stream here: the data that
	 follows can be binary, and the first character could be
	 e.g. 0x0d, which would cause fscanf to eat-up one character
	 too much, leading to an offset in fread */
      fgets(String, sizeof(String), File_RES) ;
      if(Version <= 1.0)
	sscanf(String, "%d %lf %d", &Num_DofData, &Val_Time, &Val_TimeStep) ;
      else
	sscanf(String, "%d %lf %lf %d", &Num_DofData, &Val_Time, &Val_TimeImag,
	       &Val_TimeStep) ;

      if(Read_DofData < 0){
	Read = 1 ; DofData_P = (struct DofData*)List_Pointer(DofData_L, Num_DofData) ;
      }
      else if(Num_DofData == Read_DofData) {
	Read = 1 ; DofData_P = Read_DofData_P ;
      }
      else {
	Read = 0 ;
      }

      if(Read){
	Solution_S.Time = Val_Time ;
	Solution_S.TimeImag = Val_TimeImag ;
	Solution_S.TimeStep = Val_TimeStep ;
	Solution_S.SolutionExist = 1 ;
	Solution_S.TimeFunctionValues = NULL ;

	LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof) ;
	Format ?
	  LinAlg_ReadVector(File_RES, &Solution_S.x) :
	  LinAlg_ScanVector(File_RES, &Solution_S.x) ;

	if(DofData_P->Solutions == NULL)
	  DofData_P->Solutions = List_Create( 20, 20, sizeof(struct Solution)) ;
	List_Add(DofData_P->Solutions, &Solution_S) ;
      }
    }

    do {
      if(!fgets(String, sizeof(String), File_RES) || feof(File_RES)){
	Message::Warning("Premature end of file (Time Step %d)", Val_TimeStep);
        break;
      }
    } while (String[0] != '$') ;

  }   /* while 1 ... */

  *Time = Val_Time ;
  *TimeImag = Val_TimeImag ;
  *TimeStep = (double)Val_TimeStep ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ T r a n s f e r D o f T r e e T o L i s t                       */
/* ------------------------------------------------------------------------ */

void Dof_TransferDofTreeToList(struct DofData * DofData_P)
{
  if(DofData_P->DofTree) {
    DofData_P->DofList = Tree2List(DofData_P->DofTree) ;
    Tree_Delete(DofData_P->DofTree) ;
    DofData_P->DofTree = NULL ;
    DofData_P->NbrAnyDof = List_Nbr(DofData_P->DofList) ;
  }

  Dof_InitDofType(DofData_P) ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ I n i t D o f T y p e                                           */
/* ------------------------------------------------------------------------ */

void Dof_InitDofType(struct DofData * DofData_P)
{
  struct Dof  * Dof_P, * Dof_P0 ;
  int  i ;

  if(!DofData_P->NbrAnyDof){
    return;
  }

  Dof_P0 = (struct Dof *)List_Pointer(DofData_P->DofList, 0) ;

  for(i = 0 ; i < DofData_P->NbrAnyDof ; i++) {
    Dof_P = Dof_P0 + i ;

    switch (Dof_P->Type) {
    case DOF_LINK :
    case DOF_LINKCPLX :
      Dof_P->Case.Link.Dof =
	Dof_GetDofStruct(DofData_P, Dof_P->NumType,
			 Dof_P->Case.Link.EntityRef, Dof_P->Harmonic) ;
      if(Dof_P->Case.Link.Dof == NULL
          ||
          Dof_P->Case.Link.Dof ==
          Dof_GetDofStruct(DofData_P, Dof_P->NumType,
                           Dof_P->Entity, Dof_P->Harmonic)
          ) {
	Dof_P->Case.Link.Dof = /* Attention: bricolage ... */
	  Dof_GetDofStruct(DofData_P, Dof_P->NumType-1,
			   Dof_P->Case.Link.EntityRef, Dof_P->Harmonic) ;
	if(Dof_P->Case.Link.Dof == NULL)
	  Message::Error("Wrong Link Constraint: reference Dof (%d %d %d) does not exist",
                         Dof_P->NumType, Dof_P->Case.Link.EntityRef, Dof_P->Harmonic);
      }
      /*
      if(Dof_P->Case.Link.Dof == NULL)
	Message::Error("Wrong Link Constraint: reference Dof (%d %d %d) does not exist",
	               Dof_P->NumType, Dof_P->Case.Link.EntityRef, Dof_P->Harmonic);
      */
      break ;
    default :
      break ;
    }

  }
}

/* ------------------------------------------------------------------------ */
/*  P R E P R O C E S S I N G   ( C o d e s   i n   T r e e )               */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------------------ */
/*  D o f _ A d d F u n c t i o n S p a c e I n d e x                       */
/* ------------------------------------------------------------------------ */

void Dof_AddFunctionSpaceIndex(int Index_FunctionSpace)
{
  if(CurrentDofData->FunctionSpaceIndex == NULL)
    CurrentDofData->FunctionSpaceIndex = List_Create(10, 5, sizeof(int)) ;

  if(List_PQuery
      (CurrentDofData->FunctionSpaceIndex, &Index_FunctionSpace, fcmp_int) == NULL) {
    List_Add(CurrentDofData->FunctionSpaceIndex, &Index_FunctionSpace) ;
    List_Sort(CurrentDofData->FunctionSpaceIndex, fcmp_int) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ A d d T i m e F u n c t i o n I n d e x                         */
/* ------------------------------------------------------------------------ */

void Dof_AddTimeFunctionIndex(int Index_TimeFunction)
{
  if(List_PQuery
      (CurrentDofData->TimeFunctionIndex, &Index_TimeFunction, fcmp_int) == NULL) {
    List_Add(CurrentDofData->TimeFunctionIndex, &Index_TimeFunction) ;
    List_Sort(CurrentDofData->TimeFunctionIndex, fcmp_int) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ A d d P u l s a t i o n                                         */
/* ------------------------------------------------------------------------ */

void Dof_AddPulsation(struct DofData * DofData_P, double Val_Pulsation)
{
  if(DofData_P->Pulsation == NULL)
    DofData_P->Pulsation = List_Create(1, 2, sizeof(double)) ;
  List_Add(DofData_P->Pulsation, &Val_Pulsation) ;
  /*
  if(List_PQuery
      (DofData_P->Pulsation, &Val_Pulsation, fcmp_double) == NULL) {
    List_Add(DofData_P->Pulsation, &Val_Pulsation) ;
    List_Sort(DofData_P->Pulsation, fcmp_double) ;
  }
  */
}

/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e A s s i g n F i x e d D o f                         */
/* ------------------------------------------------------------------------ */

void Dof_DefineAssignFixedDof(int D1, int D2, int NbrHar, double *Val,
			      int Index_TimeFunction)
{
  struct Dof  Dof, * Dof_P ;
  int         k ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if(!(Dof_P = (struct Dof *)Tree_PQuery(CurrentDofData->DofTree, &Dof))) {
      Dof.Type = DOF_FIXED ;
      LinAlg_SetScalar(&Dof.Val, &Val[k]) ;
      Dof.Case.FixedAssociate.TimeFunctionIndex = Index_TimeFunction + 1 ;
      Dof_AddTimeFunctionIndex(Index_TimeFunction + 1) ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
    else if(Dof_P->Type == DOF_UNKNOWN) {
      if(Message::GetVerbosity() == 10)
	Message::Info("Overriding unknown Dof with fixed Dof");
      Dof_P->Type = DOF_FIXED ;
      LinAlg_SetScalar(&Dof_P->Val, &Val[k]) ;
      Dof_P->Case.FixedAssociate.TimeFunctionIndex = Index_TimeFunction + 1 ;
      Dof_AddTimeFunctionIndex(Index_TimeFunction + 1) ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e A s s i g n S o l v e D o f                         */
/* ------------------------------------------------------------------------ */

void Dof_DefineAssignSolveDof(int D1, int D2, int NbrHar, int Index_TimeFunction)
{
  struct Dof  Dof ;
  int         k ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if(!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_FIXED_SOLVE ;
      Dof.Case.FixedAssociate.TimeFunctionIndex = Index_TimeFunction + 1 ;
      Dof_AddTimeFunctionIndex(Index_TimeFunction + 1) ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e I n i t F i x e d D o f                             */
/* ------------------------------------------------------------------------ */

void Dof_DefineInitFixedDof(int D1, int D2, int NbrHar, double *Val,
                            double *Val2, bool NonLocal)
{
  struct Dof  Dof ;
  int         k ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if(!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_UNKNOWN_INIT ;
      LinAlg_SetScalar(&Dof.Val, &Val[k]) ;
      LinAlg_SetScalar(&Dof.Val2, &Val2[k]) ;
      Dof.Case.Unknown.NumDof = ++(CurrentDofData->NbrDof) ;
      Dof.Case.Unknown.NonLocal = NonLocal;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e I n i t S o l v e D o f                             */
/* ------------------------------------------------------------------------ */

void Dof_DefineInitSolveDof(int D1, int D2, int NbrHar)
{
  struct Dof  Dof ;
  int         k ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if(!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_UNKNOWN_INIT ;
      Dof.Case.Unknown.NumDof = ++(CurrentDofData->NbrDof) ;
      Dof.Case.Unknown.NonLocal = false ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e L i n k D o f                                       */
/* ------------------------------------------------------------------------ */

void Dof_DefineLinkDof(int D1, int D2, int NbrHar, double Value[], int D2_Link)
{
  struct Dof  Dof ;
  int         k ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if(!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_LINK ;
      Dof.Case.Link.Coef = Value[0] ;
      Dof.Case.Link.EntityRef = D2_Link ;
      Dof.Case.Link.Dof = NULL ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }
}

void Dof_DefineLinkCplxDof(int D1, int D2, int NbrHar, double Value[], int D2_Link)
{
  struct Dof  Dof ;
  int         k ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if(!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_LINKCPLX ;
      Dof.Case.Link.Coef = Value[0] ;
      Dof.Case.Link.Coef2 = Value[1] ;
      Dof.Case.Link.EntityRef = D2_Link ;
      Dof.Case.Link.Dof = NULL ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e U n k n o w n D o f                                 */
/* ------------------------------------------------------------------------ */

void Dof_DefineUnknownDof(int D1, int D2, int NbrHar, bool NonLocal)
{
  struct Dof  Dof ;
  int         k ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if(!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_UNKNOWN ;
      /* Dof.Case.Unknown.NumDof = ++(CurrentDofData->NbrDof) ; */
      Dof.Case.Unknown.NumDof = -1 ;
      Dof.Case.Unknown.NonLocal = NonLocal ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }
}

static void NumberUnknownDof (void *a, void *b)
{
  struct Dof * Dof_P ;

  Dof_P = (struct Dof *)a ;

  if(Dof_P->Type == DOF_UNKNOWN){
    if(Dof_P->Case.Unknown.NumDof == -1)
      Dof_P->Case.Unknown.NumDof = ++(CurrentDofData->NbrDof) ;
    if(Dof_P->Case.Unknown.NonLocal)
      CurrentDofData->NonLocalEquations.push_back(Dof_P->Case.Unknown.NumDof);
  }
}

void Dof_NumberUnknownDof(void)
{
  if(CurrentDofData->DofTree)
    Tree_Action(CurrentDofData->DofTree, NumberUnknownDof) ;
  else
    List_Action(CurrentDofData->DofList, NumberUnknownDof) ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e A s s o c i a t e D o f                             */
/* ------------------------------------------------------------------------ */

void Dof_DefineAssociateDof(int E1, int E2, int D1, int D2, int NbrHar,
                            int init, double *Val)
{
  struct Dof  Dof, Equ, * Equ_P ;
  int         k ;

  Equ.NumType = E1 ;  Equ.Entity = E2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Equ.Harmonic = k ;
    if((Equ_P = (struct Dof*)Tree_PQuery(CurrentDofData->DofTree, &Equ))) {
      switch (Equ_P->Type) {
      case DOF_FIXED :
	Equ_P->Type = DOF_FIXEDWITHASSOCIATE ;
	Equ_P->Case.FixedAssociate.NumDof = ++(CurrentDofData->NbrDof) ;
        /* To be modified (Patrick): strange to define a new NumDof for Equ if
           associate-Dof already exists */
	Dof.NumType = D1 ; Dof.Entity = D2 ; Dof.Harmonic = k ;
	if(!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
          if(!init) {
            Dof.Type = DOF_UNKNOWN ;
          }
          else {
            Dof.Type = DOF_UNKNOWN_INIT ;
            LinAlg_SetScalar(&Dof.Val, &Val[k]) ;
            LinAlg_ZeroScalar(&Dof.Val2) ;
          }
          Dof.Case.Unknown.NumDof = CurrentDofData->NbrDof ;
          Dof.Case.Unknown.NonLocal = true ;
          Tree_Add(CurrentDofData->DofTree, &Dof) ;
	}
	break ;
      case DOF_FIXED_SOLVE :
	Equ_P->Type = DOF_FIXEDWITHASSOCIATE_SOLVE ;
	Equ_P->Case.FixedAssociate.NumDof = ++(CurrentDofData->NbrDof) ;
	Dof.NumType = D1 ; Dof.Entity = D2 ; Dof.Harmonic = k ;
	if(!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
          if(!init) {
            Dof.Type = DOF_UNKNOWN ;
          }
          else {
            Dof.Type = DOF_UNKNOWN_INIT ;
            LinAlg_SetScalar(&Dof.Val, &Val[k]) ;
            LinAlg_ZeroScalar(&Dof.Val2) ;
          }
	  Dof.Case.Unknown.NumDof = CurrentDofData->NbrDof ;
	  Dof.Case.Unknown.NonLocal = true ;
	  Tree_Add(CurrentDofData->DofTree, &Dof) ;
	}
	break ;
      case DOF_UNKNOWN :  case DOF_UNKNOWN_INIT :
	Dof_DefineUnknownDof(D1, D2, NbrHar) ;
	break ;
      }
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  P R O C E S S I N G   ( C o d e s   i n   L i s t )                     */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------------------ */
/*  D o f _ G e t D o f S t r u c t                                         */
/* ------------------------------------------------------------------------ */

struct Dof *Dof_GetDofStruct(struct DofData * DofData_P, int D1, int D2, int D3)
{
  struct Dof  Dof ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;  Dof.Harmonic = D3 ;

  return (struct Dof *)List_PQuery(DofData_P->DofList, &Dof, fcmp_Dof);
}

/* ------------------------------------------------------------------------ */
/*  D o f _ U p d a t e A s s i g n F i x e d D o f                         */
/* ------------------------------------------------------------------------ */

void Dof_UpdateAssignFixedDof(int D1, int D2, int NbrHar, double *Val, double *Val2)
{
  struct Dof  Dof, * Dof_P ;
  int         k ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if(CurrentDofData->DofTree)
      Dof_P = (struct Dof *)Tree_PQuery(CurrentDofData->DofTree, &Dof);
    else
      Dof_P = (struct Dof *)List_PQuery(CurrentDofData->DofList, &Dof, fcmp_Dof);
    LinAlg_SetScalar(&Dof_P->Val, &Val[Dof_P->Harmonic]) ;
    LinAlg_SetScalar(&Dof_P->Val2, &Val2[Dof_P->Harmonic]) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ U p d a t e L i n k D o f                                       */
/* ------------------------------------------------------------------------ */

void Dof_UpdateLinkDof(int D1, int D2, int NbrHar, double Value[], int D2_Link)
{
  struct Dof  Dof, * Dof_P ;
  int         k ;

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if(CurrentDofData->DofTree)
      Dof_P = (struct Dof *)Tree_PQuery(CurrentDofData->DofTree, &Dof);
    else
      Dof_P = (struct Dof *)List_PQuery(CurrentDofData->DofList, &Dof, fcmp_Dof);

    if(Dof_P->Type == DOF_LINK || Dof_P->Type == DOF_LINKCPLX) {
      /*
        fprintf(stderr,"===> %d %d %.16g\n", Dof_P->NumType, Dof_P->Entity, Value[0]) ;
      */
      Dof_P->Case.Link.Coef = Value[0] ;
      if(Dof_P->Type == DOF_LINKCPLX)
	Dof_P->Case.Link.Coef2 = Value[1] ;
      Dof_P->Case.Link.EntityRef = D2_Link ;
      Dof_P->Case.Link.Dof = NULL ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ A s s e m b l e I n M a t                                       */
/* ------------------------------------------------------------------------ */

void Dof_AssembleInMat(struct Dof * Equ_P, struct Dof * Dof_P, int NbrHar,
		       double * Val, gMatrix * Mat, gVector * Vec,
                       List_T * Vecs)
{
  gScalar tmp, tmp2 ;
  double  valtmp[2], d1, d2 ;

  switch (Equ_P->Type) {
  case DOF_UNKNOWN :
  case DOF_FIXEDWITHASSOCIATE :

    switch (Dof_P->Type) {

    case DOF_UNKNOWN :
      if(Current.DofData->Flag_RHS) break;
      if(NbrHar==1){
        LinAlg_AddDoubleInMatrix
          (Val[0], Mat,
           Equ_P->Case.Unknown.NumDof-1, Dof_P->Case.Unknown.NumDof-1) ;
      }
      else
	LinAlg_AddComplexInMatrix
	  (Val[0], Val[1], Mat,
	   Equ_P->Case.Unknown.NumDof-1, Dof_P->Case.Unknown.NumDof-1,
	   (gSCALAR_SIZE==1)?((Equ_P+1)->Case.Unknown.NumDof-1):-1,
	   (gSCALAR_SIZE==1)?((Dof_P+1)->Case.Unknown.NumDof-1):-1) ;
      break ;

    case DOF_FIXED :
    case DOF_FIXEDWITHASSOCIATE :
      if(Vec){
	if(NbrHar==1){
	  if(Val[0]){
	    LinAlg_ProdScalarDouble
	      (&Dof_P->Val,
	       CurrentDofData->CurrentSolution->
	       TimeFunctionValues[Dof_P->Case.FixedAssociate.TimeFunctionIndex],
	       &tmp);
	    LinAlg_ProdScalarDouble(&tmp, -Val[0], &tmp) ;
            LinAlg_AddScalarInVector(&tmp, Vec, Equ_P->Case.Unknown.NumDof-1) ;
            if(Vecs){ // experimental
              int index = List_ISearchSeq(Current.DofData->TimeFunctionIndex,
                                          &Dof_P->Case.FixedAssociate.TimeFunctionIndex,
                                          fcmp_int);
              if(index >= 0 && index < List_Nbr(Vecs)){
                gVector *v = (gVector*)List_Pointer(Vecs, index);
                LinAlg_AddScalarInVector(&tmp, v, Equ_P->Case.Unknown.NumDof-1) ;
              }
              else{
                Message::Error("Something wrong in multi-vec assembly");
              }
            }
	  }
	}
	else{
	  LinAlg_ProdScalarDouble
	    (&Dof_P->Val,
	     CurrentDofData->CurrentSolution->
	     TimeFunctionValues[Dof_P->Case.FixedAssociate.TimeFunctionIndex],
	     &tmp);
	  if(gSCALAR_SIZE == 2){
	    LinAlg_ProdScalarComplex(&tmp, -Val[0], -Val[1], &valtmp[0], &valtmp[1]) ;
	  }
	  else{
	    LinAlg_GetDoubleInScalar(&d1, &tmp);
	    LinAlg_ProdScalarDouble
	      (&(Dof_P+1)->Val,
	       CurrentDofData->CurrentSolution->
	       TimeFunctionValues[Dof_P->Case.FixedAssociate.TimeFunctionIndex],
	       &tmp2);
	    LinAlg_GetDoubleInScalar(&d2, &tmp2);
	    valtmp[0] = -d1*Val[0] + d2*Val[1] ;
	    valtmp[1] = -d1*Val[1] - d2*Val[0] ;
	  }
	  LinAlg_AddComplexInVector
	    (valtmp[0], valtmp[1], Vec,
	     Equ_P->Case.Unknown.NumDof-1,
	     (gSCALAR_SIZE==1)?((Equ_P+1)->Case.Unknown.NumDof-1):-1) ;
	}
      }
      break ;

    case DOF_LINK :
      if(NbrHar==1)
	valtmp[0] = Val[0] * Dof_P->Case.Link.Coef ;
      else{
	valtmp[0] = Val[0] * Dof_P->Case.Link.Coef ;
	valtmp[1] = Val[1] * Dof_P->Case.Link.Coef ;
      }
      Dof_AssembleInMat(Equ_P, Dof_P->Case.Link.Dof, NbrHar, valtmp, Mat, Vec, Vecs) ;
      break ;

    case DOF_LINKCPLX :
      if(NbrHar==1)
	Message::Error("LinkCplx only valid for Complex systems") ;
      else{
	valtmp[0] = Val[0] * Dof_P->Case.Link.Coef - Val[1] * Dof_P->Case.Link.Coef2 ;
	valtmp[1] = Val[1] * Dof_P->Case.Link.Coef + Val[0] * Dof_P->Case.Link.Coef2 ;
      }
      Dof_AssembleInMat(Equ_P, Dof_P->Case.Link.Dof, NbrHar, valtmp, Mat, Vec, Vecs) ;
      break ;

    case DOF_FIXED_SOLVE :  case DOF_FIXEDWITHASSOCIATE_SOLVE :
      Message::Error("Wrong Constraints: "
                     "remaining Dof(s) waiting to be fixed by a Resolution");
      break;

    case DOF_UNKNOWN_INIT :
      Message::Error("Wrong Initial Constraints: "
                     "remaining Dof(s) with non-fixed initial conditions");
      break;
    }

    break ;

  case DOF_LINK :
    if(NbrHar==1)
      valtmp[0] = Val[0] * Equ_P->Case.Link.Coef ;
    else{
      valtmp[0] = Val[0] * Equ_P->Case.Link.Coef ;
      valtmp[1] = Val[1] * Equ_P->Case.Link.Coef ;
    }
    Dof_AssembleInMat(Equ_P->Case.Link.Dof, Dof_P, NbrHar, valtmp, Mat, Vec, Vecs) ;
    break ;

  case DOF_LINKCPLX :
    if(NbrHar==1)
      Message::Error("LinkCplx only valid for Complex systems") ;
    else{ /* Warning: conjugate! */
      valtmp[0] = Val[0] * Equ_P->Case.Link.Coef + Val[1] * Equ_P->Case.Link.Coef2 ;
      valtmp[1] = Val[1] * Equ_P->Case.Link.Coef - Val[0] * Equ_P->Case.Link.Coef2 ;
    }
    Dof_AssembleInMat(Equ_P->Case.Link.Dof, Dof_P, NbrHar, valtmp, Mat, Vec, Vecs) ;
    break ;

  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ A s s e m b l e I n V e c                                       */
/* ------------------------------------------------------------------------ */

void Dof_AssembleInVec(struct Dof * Equ_P, struct Dof * Dof_P, int NbrHar,
		       double * Val, struct Solution * OtherSolution,
		       gVector * Vec0, gVector * Vec)
{
  gScalar tmp ;
  double valtmp[2] ;
  double a, b, c, d ;

  switch (Equ_P->Type) {
  case DOF_UNKNOWN :
  case DOF_FIXEDWITHASSOCIATE :

    switch (Dof_P->Type) {

    case DOF_UNKNOWN :
      if(NbrHar==1){
	if(Val[0]){
	  LinAlg_GetDoubleInVector(&a, Vec0, Dof_P->Case.Unknown.NumDof-1) ;
	  a *= Val[0] ;
	  LinAlg_AddDoubleInVector(a, Vec, Equ_P->Case.Unknown.NumDof-1) ;
	}
      }
      else{
	LinAlg_GetComplexInVector(&a, &b, Vec0,
				  Dof_P->Case.Unknown.NumDof-1,
				  (gSCALAR_SIZE==1)?((Dof_P+1)->Case.Unknown.NumDof-1):-1) ;
	c = a * Val[0] - b * Val[1] ;
	d = a * Val[1] + b * Val[0] ;
	LinAlg_AddComplexInVector(c, d, Vec,
				  Equ_P->Case.Unknown.NumDof-1,
				  (gSCALAR_SIZE==1)?((Equ_P+1)->Case.Unknown.NumDof-1):-1) ;
      }
      break ;

    case DOF_FIXED :
    case DOF_FIXEDWITHASSOCIATE :
      if(NbrHar==1){
	if(Val[0]){
	  LinAlg_ProdScalarDouble
	    (&Dof_P->Val,
	     Val[0] * OtherSolution->
	     TimeFunctionValues[Dof_P->Case.FixedAssociate.TimeFunctionIndex],
	     &tmp) ;
	  LinAlg_AddScalarInVector(&tmp, Vec, Equ_P->Case.Unknown.NumDof-1) ;
	}
      }
      else{
	if(gSCALAR_SIZE == 2){
	  LinAlg_ProdScalarComplex
	    (&Dof_P->Val,
	     Val[0] * OtherSolution->
	     TimeFunctionValues[Dof_P->Case.FixedAssociate.TimeFunctionIndex],
	     Val[1] * OtherSolution->
	     TimeFunctionValues[Dof_P->Case.FixedAssociate.TimeFunctionIndex],
	     &a, &b) ;
	  LinAlg_AddComplexInVector(a, b, Vec,
				    Equ_P->Case.Unknown.NumDof-1,
				    (gSCALAR_SIZE==1)?((Equ_P+1)->Case.Unknown.NumDof-1):-1) ;
	}
	else{
	  Message::Error("Assemby in vectors with more than one harmonic not yet implemented") ;
	}
      }
      break ;

    case DOF_LINK :
      if(NbrHar==1)
	valtmp[0] = Val[0] * Dof_P->Case.Link.Coef ;
      else{
	valtmp[0] = Val[0] * Dof_P->Case.Link.Coef ;
	valtmp[1] = Val[1] * Dof_P->Case.Link.Coef ;
      }
      Dof_AssembleInVec(Equ_P, Dof_P->Case.Link.Dof, NbrHar,
			valtmp, OtherSolution, Vec0, Vec) ;
      break ;

    case DOF_LINKCPLX :
      if(NbrHar==1)
	Message::Error("LinkCplx only valid for Complex systems") ;
      else{
	valtmp[0] = Val[0] * Dof_P->Case.Link.Coef - Val[1] * Dof_P->Case.Link.Coef2 ;
	valtmp[1] = Val[1] * Dof_P->Case.Link.Coef + Val[0] * Dof_P->Case.Link.Coef2 ;
      }
      Dof_AssembleInVec(Equ_P, Dof_P->Case.Link.Dof, NbrHar,
			valtmp, OtherSolution, Vec0, Vec) ;
      break ;

    case DOF_FIXED_SOLVE :  case DOF_FIXEDWITHASSOCIATE_SOLVE :
      Message::Error("Wrong Constraints: "
                     "remaining Dof(s) waiting to be fixed by a Resolution");
      break;

    case DOF_UNKNOWN_INIT :
      Message::Error("Wrong Initial Constraints: "
                     "remaining Dof(s) with non-fixed initial conditions");
      break;
    }
    break ;

  case DOF_LINK :
    if(NbrHar==1)
      valtmp[0] = Val[0] * Equ_P->Case.Link.Coef ;
    else{
      valtmp[0] = Val[0] * Equ_P->Case.Link.Coef ;
      valtmp[1] = Val[1] * Equ_P->Case.Link.Coef ;
    }
    Dof_AssembleInVec(Equ_P->Case.Link.Dof, Dof_P, NbrHar,
		      valtmp, OtherSolution, Vec0, Vec) ;
    break ;

  case DOF_LINKCPLX :
    if(NbrHar==1)
      Message::Error("LinkCplx only valid for Complex systems") ;
    else{ /* Warning: conjugate! */
      valtmp[0] = Val[0] * Equ_P->Case.Link.Coef + Val[1] * Equ_P->Case.Link.Coef2 ;
      valtmp[1] = Val[1] * Equ_P->Case.Link.Coef - Val[0] * Equ_P->Case.Link.Coef2 ;
    }
    Dof_AssembleInVec(Equ_P->Case.Link.Dof, Dof_P, NbrHar,
		      valtmp, OtherSolution, Vec0, Vec) ;
    break ;

  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ T r a n s f e r S o l u t i o n T o C o n s t r a i n t         */
/* ------------------------------------------------------------------------ */

void Dof_TransferSolutionToConstraint(struct DofData * DofData_P)
{
  struct Dof * Dof_P, * Dof_P0 ;
  int  i ;

  if(!DofData_P->NbrAnyDof){
    return;
  }

  Dof_P0 = (struct Dof *)List_Pointer(DofData_P->DofList, 0) ;

  for(i = 0 ; i < DofData_P->NbrAnyDof ; i++) {
    Dof_P = Dof_P0 + i ;

    switch (Dof_P->Type) {

    case DOF_UNKNOWN :
      Dof_P->Type = DOF_FIXED ;
      LinAlg_GetScalarInVector(&Dof_P->Val,
			       &DofData_P->CurrentSolution->x,
			       Dof_P->Case.Unknown.NumDof-1) ;
      Dof_P->Case.FixedAssociate.TimeFunctionIndex = 0 ;
      break ;

    case DOF_FIXED :
    case DOF_FIXEDWITHASSOCIATE :
    case DOF_LINK :
    case DOF_LINKCPLX :
      break ;

    default :  break ;
    }
  }

  DofData_P->NbrDof = 0 ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ G e t D o f V a l u e                                           */
/* ------------------------------------------------------------------------ */

gScalar Dof_GetDofValue(struct DofData * DofData_P, struct Dof * Dof_P)
{
  gScalar tmp ;

  switch (Dof_P->Type) {

  case DOF_UNKNOWN :
    if(!DofData_P->CurrentSolution->SolutionExist)
      Message::Error("Empty solution in DofData %d", DofData_P->Num);
    else
      LinAlg_GetScalarInVector(&tmp, &DofData_P->CurrentSolution->x,
                               Dof_P->Case.Unknown.NumDof-1) ;
    break ;

  case DOF_FIXED :
  case DOF_FIXEDWITHASSOCIATE :
    LinAlg_ProdScalarDouble(&Dof_P->Val,
			    ((Dof_P->Case.FixedAssociate.TimeFunctionIndex)?
			     DofData_P->CurrentSolution->TimeFunctionValues
			     [Dof_P->Case.FixedAssociate.TimeFunctionIndex] :
			     1.),
			    &tmp);
    break ;

  case DOF_LINK :
    tmp = Dof_GetDofValue(DofData_P, Dof_P->Case.Link.Dof) ;
    LinAlg_ProdScalarDouble(&tmp, Dof_P->Case.Link.Coef, &tmp) ;
    break ;

  case DOF_LINKCPLX :
    /* Too soon to treat LinkCplx: we need the real and imaginary parts */
    Message::Error("Cannot call Dof_GetDofValue for LinkCplx");
    break ;

  default :
    LinAlg_ZeroScalar(&tmp) ;
    break ;
  }

  return tmp ;
}

void Dof_GetRealDofValue(struct DofData * DofData_P, struct Dof * Dof_P, double *d)
{
  gScalar tmp ;

  if(Dof_P->Type == DOF_LINKCPLX) {
    Message::Error("Cannot call Dof_GetRealDofValue for LinkCplx");
    return;
  }

  tmp = Dof_GetDofValue(DofData_P, Dof_P) ;
  LinAlg_GetDoubleInScalar(d, &tmp) ;
}

void Dof_GetComplexDofValue(struct DofData * DofData_P, struct Dof * Dof_P,
			    double *d1, double *d2)
{
  gScalar tmp1, tmp2 ;
  double valtmp[2] ;

  if(gSCALAR_SIZE == 1){
    if(Dof_P->Type == DOF_LINKCPLX) { /* Can only be done here */
      if(Dof_P->Case.Link.Dof->Type == DOF_LINKCPLX) { /* recurse */
	Dof_GetComplexDofValue(DofData_P, Dof_P->Case.Link.Dof, d1, d2);
      }
      else{
	tmp1 = Dof_GetDofValue(DofData_P, Dof_P->Case.Link.Dof) ;
	tmp2 = Dof_GetDofValue(DofData_P, (Dof_P+1)->Case.Link.Dof) ;
	LinAlg_GetDoubleInScalar(d1, &tmp1) ;
	LinAlg_GetDoubleInScalar(d2, &tmp2) ;
      }
    }
    else{
      tmp1 = Dof_GetDofValue(DofData_P, Dof_P) ;
      tmp2 = Dof_GetDofValue(DofData_P, Dof_P+1) ;
      LinAlg_GetDoubleInScalar(d1, &tmp1) ;
      LinAlg_GetDoubleInScalar(d2, &tmp2) ;
    }
  }
  else{
    if(Dof_P->Type == DOF_LINKCPLX) { /* Can only be done here */
      if(Dof_P->Case.Link.Dof->Type == DOF_LINKCPLX) { /* recurse */
	Dof_GetComplexDofValue(DofData_P, Dof_P->Case.Link.Dof, d1, d2);
      }
      else{
	tmp1 = Dof_GetDofValue(DofData_P, Dof_P->Case.Link.Dof) ;
	LinAlg_GetComplexInScalar(d1, d2, &tmp1) ;
      }
    }
    else{
      tmp1 = Dof_GetDofValue(DofData_P, Dof_P) ;
      LinAlg_GetComplexInScalar(d1, d2, &tmp1) ;
    }
  }

  if(Dof_P->Type == DOF_LINKCPLX){
    valtmp[0] = Dof_P->Case.Link.Coef*(*d1) - Dof_P->Case.Link.Coef2*(*d2) ;
    valtmp[1] = Dof_P->Case.Link.Coef*(*d2) + Dof_P->Case.Link.Coef2*(*d1) ;
    *d1 = valtmp[0] ;
    *d2 = valtmp[1] ;
  }
}

/* ------------------------------------------------------------------------- */
/*  D o f _ D e f i n e Unknown D o f F r o m Solve o r Init D o f           */
/* ------------------------------------------------------------------------- */

void Dof_DefineUnknownDofFromSolveOrInitDof(struct DofData ** DofData_P)
{
  int         i, Nbr_AnyDof ;
  struct Dof  * Dof_P ;

  Nbr_AnyDof = List_Nbr((*DofData_P)->DofList) ;

  for(i = 0 ; i < Nbr_AnyDof ; i++) {

    Dof_P = (struct Dof*)List_Pointer((*DofData_P)->DofList, i) ;

    switch (Dof_P->Type) {
    case DOF_FIXED_SOLVE :
    case DOF_FIXEDWITHASSOCIATE_SOLVE :
      Dof_P->Type = DOF_UNKNOWN ;
      Dof_P->Case.Unknown.NumDof = ++((*DofData_P)->NbrDof) ;
      break ;
    case DOF_UNKNOWN_INIT :
      Dof_P->Type = DOF_UNKNOWN ;
      break ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ T r a n s f e r D o f                                           */
/* ------------------------------------------------------------------------ */

void Dof_TransferDof(struct DofData  * DofData_P1,
		     struct DofData ** DofData_P2)
{
  int              i, Nbr_AnyDof ;
  struct Dof       Dof, * Dof_P ;
  struct Solution  * Solutions_P0 ;

  Nbr_AnyDof   = List_Nbr(DofData_P1->DofList) ;
  Solutions_P0 = (struct Solution*)List_Pointer(DofData_P1->Solutions, 0) ;
  DofData_P1->CurrentSolution = Solutions_P0 ;

  for(i = 0; i < Nbr_AnyDof; i++) {
    Dof = *(struct Dof *)List_Pointer(DofData_P1->DofList, i) ;
    if((Dof_P = (struct Dof*)Tree_PQuery((*DofData_P2)->DofTree, &Dof))){
      switch (Dof_P->Type) {
      case DOF_FIXED_SOLVE :
	Dof_P->Type = DOF_FIXED ;
	Dof_P->Val = Dof_GetDofValue(DofData_P1, &Dof) ;
	break ;
      case DOF_FIXEDWITHASSOCIATE_SOLVE :
	Dof_P->Type = DOF_FIXEDWITHASSOCIATE ;
	Dof_P->Val = Dof_GetDofValue(DofData_P1, &Dof) ;
	break ;
      case DOF_UNKNOWN_INIT :
	/* A DOF_UNKNOWN_INIT will always use the value obtained by
	   pre-resolution even if a simple Init contraint is given; we should
	   introduce DOF_UNKNOWN_INIT_SOLVE */
	Dof_P->Val = Dof_GetDofValue(DofData_P1, &Dof) ;
        if((DofData_P1->CurrentSolution - Solutions_P0) > 0){
          DofData_P1->CurrentSolution -= 1 ;
          Dof_P->Val2 = Dof_GetDofValue(DofData_P1, &Dof) ;
          DofData_P1->CurrentSolution += 1 ;
        }
        else{
          LinAlg_ZeroScalar(&Dof_P->Val2);
        }
	break ;
      }
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  D o f _ I n i t D o f F o r N o D o f                                   */
/* ------------------------------------------------------------------------ */

void Dof_InitDofForNoDof(struct Dof * DofForNoDof, int NbrHar)
{
  int k ;
  double Val[2] = {1.,0.} ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE) {
    int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
    struct Dof * D = DofForNoDof + incr;
    D->Type = DOF_FIXED ;
    LinAlg_SetScalar(&D->Val, &Val[k%2]) ;
    D->Case.FixedAssociate.TimeFunctionIndex = 0 ;
  }
}

/* ------------------------------------------------------- */
/*  P r i n t _  D o f N u m b e r                         */
/* ------------------------------------------------------- */

void Print_DofNumber(struct Dof *Dof_P)
{
  switch(Dof_P->Type){
  case DOF_UNKNOWN :
    printf("%d(%d) ", Dof_P->Case.Unknown.NumDof, Dof_P->Entity) ;
    break ;
  case DOF_FIXED   :
    printf("Fixed(%d) ", Dof_P->Entity) ;
    break ;
  case DOF_FIXEDWITHASSOCIATE :
    printf("Assoc-%d ", Dof_P->Case.FixedAssociate.NumDof) ;
    break ;
  case DOF_LINK :
    printf("Link-");
    Print_DofNumber(Dof_P->Case.Link.Dof);
    break ;
  case DOF_LINKCPLX :
    printf("LinkCplx-");
    Print_DofNumber(Dof_P->Case.Link.Dof);
    break ;
  default :
    printf(" ? ") ;
    break ;
  }
}

/* ------------------------------------------------------- */
/*  D u m m y  D o f s                                     */
/* ------------------------------------------------------- */

void Dof_GetDummies(struct DefineSystem * DefineSystem_P, struct DofData * DofData_P)
{
  struct Formulation      * Formulation_P ;
  struct DefineQuantity   * DefineQuantity_P ;
  struct FunctionSpace    * FunctionSpace_P ;
  struct BasisFunction    * BasisFunction_P ;
  struct GlobalQuantity   * GlobalQuantity_P ;
  struct Dof              * Dof_P ;

  int i, j, k, l, iDof, ii, iit, iNum, iHar;
  int Nbr_Formulation, Index_Formulation ;
  int *DummyDof;
  double FrequencySpectrum, *Val_Pulsation;

  if(!(Val_Pulsation = Current.DofData->Val_Pulsation)){
    Message::Error("Dof_GetDummies can only be used for harmonic problems");
    return;
  }

  DummyDof = DofData_P->DummyDof = (int *)Malloc(DofData_P->NbrDof*sizeof(int));
  for(iDof = 0 ; iDof < DofData_P->NbrDof ; iDof++) DummyDof[iDof]=0;

  Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex) ;

  for(i = 0 ; i < Nbr_Formulation ; i++) {
    List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation) ;
    Formulation_P = (struct Formulation*)
      List_Pointer(Problem_S.Formulation, Index_Formulation) ;
    for(j = 0 ; j < List_Nbr(Formulation_P->DefineQuantity) ; j++) {
      DefineQuantity_P = (struct DefineQuantity*)
	List_Pointer(Formulation_P->DefineQuantity, j) ;
      for(l = 0 ; l < List_Nbr(DefineQuantity_P->FrequencySpectrum) ; l++) {
	FrequencySpectrum = *(double *)List_Pointer(DefineQuantity_P->FrequencySpectrum, l) ;

	iHar=-1;
	for(k = 0 ; k < Current.NbrHar/2 ; k++)
	  if(fabs(Val_Pulsation[k]-TWO_PI*FrequencySpectrum) <= 1e-10*Val_Pulsation[k]) {
	    iHar = 2*k; break;
	  }
	if(iHar>=0) {
	  FunctionSpace_P = (struct FunctionSpace*)
	    List_Pointer(Problem_S.FunctionSpace, DefineQuantity_P->FunctionSpaceIndex) ;

	  for(k = 0 ; k < List_Nbr(FunctionSpace_P->BasisFunction) ; k++) {
	    BasisFunction_P = (struct BasisFunction *)
	      List_Pointer(FunctionSpace_P->BasisFunction, k) ;
	    iNum = ((struct BasisFunction *)BasisFunction_P)->Num;
	    ii=iit=0;
	    for(iDof = 0 ; iDof < List_Nbr(DofData_P->DofList) ; iDof++) {
	      Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, iDof) ;
	      if(Dof_P->Type == DOF_UNKNOWN && Dof_P->NumType == iNum) {
		iit++;
		if(Dof_P->Harmonic == iHar || Dof_P->Harmonic == iHar+1) {
		  DummyDof[Dof_P->Case.Unknown.NumDof-1]=1; ii++;
		}
	      }
	    }
            if(ii)
              Message::Info("Freq %4lg (%d/%d) Formulation %s Quantity %s "
                            "(BF %d)  #DofsFreqSpectrum %d/%d",
                            Val_Pulsation[iHar/2]/TWO_PI, iHar/2, Current.NbrHar/2,
                            Formulation_P->Name, DefineQuantity_P->Name,
                            ((struct BasisFunction *)BasisFunction_P)->Num, ii, iit) ;
	  }

	  for(k = 0 ; k < List_Nbr(FunctionSpace_P->GlobalQuantity) ; k++) {
	    GlobalQuantity_P = (struct GlobalQuantity *)
	      List_Pointer(FunctionSpace_P->GlobalQuantity, k) ;
	    iNum = ((struct GlobalQuantity *)GlobalQuantity_P)->Num;
	    ii=iit=0;
	    for(iDof = 0 ; iDof < List_Nbr(DofData_P->DofList) ; iDof++) {
	      Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, iDof) ;
	      if(Dof_P->Type == DOF_UNKNOWN && Dof_P->NumType == iNum) {
		iit++;
		if(Dof_P->Harmonic == iHar || Dof_P->Harmonic == iHar+1) {
		  DummyDof[Dof_P->Case.Unknown.NumDof-1]=1; ii++;
		}
	      }
	    }
            if(ii)
              Message::Info("Freq %4lg (%d/%d) Formulation %s  GlobalQuantity %s "
                            "(BF %d)  #DofsWithSpectrum %d/%d",
                            Val_Pulsation[iHar/2]/TWO_PI, iHar/2, Current.NbrHar/2,
                            Formulation_P->Name, GlobalQuantity_P->Name,
                            ((struct GlobalQuantity *)GlobalQuantity_P)->Num, ii, iit) ;
	  }

	}   /*  end FrequencySpectrum in DofData */
      }   /* end FrequencySpectrum in Quantity */
    }   /* end Quantity */
  }   /* end Formulation */

  i=0;
  for(iDof = 0 ; iDof < DofData_P->NbrDof ; iDof++) {
    if(DummyDof[iDof]) i++;

    if(Message::GetVerbosity() == 99){
      Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, iDof) ;
      Message::Debug("Dof Num iHar, Entity %d %d %d",
                     iDof, Dof_P->NumType, Dof_P->Harmonic, Dof_P->Entity);
     }
  }

  Message::Info("N: %d - N with FrequencySpectrum: %d", DofData_P->NbrDof, i) ;
}
