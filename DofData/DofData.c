#define RCSID "$Id: DofData.c,v 1.14 2001-03-03 19:21:20 geuzaine Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "GetDP.h"
#include "DofData.h"
#include "Version.h"
#include "Tools.h"
#include "Magic.h"
#include "CurrentData.h"

/* Il reste qques cas a terminer dans les routines d'assemblage en complexe
   -> cf. "not finished" 
*/

FILE  * File_PRE, * File_RES, * File_TMP ;

struct DofData  * CurrentDofData ;

int fcmp_Dof(const void * a, const void * b) {
  int Result ;

  if ((Result = ((struct Dof *)a)->NumType  - ((struct Dof *)b)->NumType) != 0)
    return Result ;
  if ((Result = ((struct Dof *)a)->Entity   - ((struct Dof *)b)->Entity)  != 0)
    return Result ;
  return        ((struct Dof *)a)->Harmonic - ((struct Dof *)b)->Harmonic ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ I n i t D o f D a t a                                           */
/* ------------------------------------------------------------------------ */

void  Dof_InitDofData(struct DofData * DofData_P, int Num,
		      int ResolutionIndex, int SystemIndex,
		      char * Name_SolverDataFile) {

  int  Index ;

  GetDP_Begin("Dof_InitDofData");

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

  DofData_P->NbrPart = 0 ;
  DofData_P->Nnz = NULL ;

  DofData_P->SolverDataFileName = Name_SolverDataFile ;
  DofData_P->Flag_Init[0] = 0 ;
  DofData_P->Flag_Init[1] = 0 ;
  DofData_P->Flag_Init[2] = 0 ;
  DofData_P->Flag_Init[3] = 0 ;
  DofData_P->Solutions = NULL ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ S e t C u r r e n t D o f D a t a                               */
/* ------------------------------------------------------------------------ */

void  Dof_SetCurrentDofData(struct DofData * DofData_P) {

  GetDP_Begin("Dof_SetCurrentDofData");

  CurrentDofData = DofData_P ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  F i l e s   . . .                                                       */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------------------ */
/*  D o f _ O p e n F i l e                                                 */
/* ------------------------------------------------------------------------ */

void  Dof_OpenFile(int Type, char * Name, char * Mode) {
  char  * Extension, FileName[MAX_FILE_NAME_LENGTH] ;
  FILE  * File_X ;

  GetDP_Begin("Dof_OpenFile");

  switch (Type) {
  case DOF_PRE :  Extension = ".pre" ;  break ;
  case DOF_RES :  Extension = ""     ;  break ;
  case DOF_TMP :  Extension = ""     ;  break ;
  default      :  Extension = ".pre" ;  break ;
  }

  strcpy(FileName, Name) ; strcat(FileName, Extension) ;

  if (!(File_X = fopen(FileName, Mode)))
    Msg(ERROR,"Unable to open file '%s'", FileName) ;

  switch (Type) {
  case DOF_PRE :  File_PRE = File_X ;  break ;
  case DOF_RES :  File_RES = File_X ;  break ;
  case DOF_TMP :  File_TMP = File_RES ; File_RES = File_X ;  break ;
  default      :  break ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ C l o s e F i l e                                               */
/* ------------------------------------------------------------------------ */

void  Dof_CloseFile(int Type) {

  GetDP_Begin("Dof_CloseFile");

  switch (Type) {
  case DOF_PRE :  fclose(File_PRE) ;  break ;
  case DOF_RES :  fclose(File_RES) ;  break ;
  case DOF_TMP :  fclose(File_RES) ;  File_RES = File_TMP ; break ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ F l u s h F i l e                                               */
/* ------------------------------------------------------------------------ */

void  Dof_FlushFile(int Type) {

  GetDP_Begin("Dof_FlushFile");

  switch (Type) {
  case DOF_PRE :  fflush(File_PRE) ;  break ;
  case DOF_RES :  fflush(File_RES) ;  break ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e P R E 0                                       */
/* ------------------------------------------------------------------------ */

void  Dof_WriteFilePRE0(int Num_Resolution, char * Name_Resolution,
			int Nbr_DofData) {

  GetDP_Begin("Dof_WriteFilePRE0");

  fprintf(File_PRE, "$Resolution /* '%s' */\n", Name_Resolution) ;
  fprintf(File_PRE, "%d %d\n", Num_Resolution, Nbr_DofData) ;
  fprintf(File_PRE, "$EndResolution\n") ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ R e a d F i l e P R E 0                                         */
/* ------------------------------------------------------------------------ */

void  Dof_ReadFilePRE0(int * Num_Resolution, int * Nbr_DofData) {
  char  String[MAX_STRING_LENGTH] ;

  GetDP_Begin("Dof_ReadFilePRE0");

  do { 
    fgets(String, MAX_STRING_LENGTH, File_PRE) ; 
    if (feof(File_PRE))  break ;
  } while (String[0] != '$') ;

  if (feof(File_PRE)) Msg(ERROR, "$Resolution field not found in file");

  if (!strncmp(&String[1], "Resolution", 10)) {
    fscanf(File_PRE, "%d %d", Num_Resolution, Nbr_DofData) ;
  }

  do {
    fgets(String, MAX_STRING_LENGTH, File_PRE) ;
    if (feof(File_PRE)) Msg(ERROR, "Prematured end of file");
  } while (String[0] != '$') ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e P R E                                         */
/* ------------------------------------------------------------------------ */

static int * Nnz ;

void  Dof_WriteFilePRE(struct DofData * DofData_P) {

  int  i, Nbr_Index ;
  struct Dof  * Dof_P0 ;

  GetDP_Begin("Dof_WriteFilePRE");

  fprintf(File_PRE, "$DofData /* #%d */\n", DofData_P->Num) ;

  fprintf(File_PRE, "%d %d\n",
	  DofData_P->ResolutionIndex, DofData_P->SystemIndex) ;

  Nbr_Index = List_Nbr(DofData_P->FunctionSpaceIndex) ;
  fprintf(File_PRE, "%d", Nbr_Index) ;
  for (i = 0 ; i < Nbr_Index ; i++)
    fprintf(File_PRE, " %d",
	    *((int *)List_Pointer(DofData_P->FunctionSpaceIndex, i))) ;
  fprintf(File_PRE, "\n") ;

  Nbr_Index = List_Nbr(DofData_P->TimeFunctionIndex) ;
  fprintf(File_PRE, "%d", Nbr_Index) ;
  for (i = 0 ; i < Nbr_Index ; i++)
    fprintf(File_PRE, " %d",
	    *((int *)List_Pointer(DofData_P->TimeFunctionIndex, i))) ;
  fprintf(File_PRE, "\n") ;

  fprintf(File_PRE, "%d", DofData_P->NbrPart) ;
  for(i = 0 ; i < DofData_P->NbrPart+1 ; i++)
    fprintf(File_PRE, " %d", DofData_P->Part[i]) ;
  fprintf(File_PRE, "\n") ;

  fprintf(File_PRE, "%d %d\n",
	  (DofData_P->DofTree)? Tree_Nbr(DofData_P->DofTree) : DofData_P->NbrAnyDof,
	  DofData_P->NbrDof) ;

  Nnz = DofData_P->Nnz ;

  if (DofData_P->DofTree)
    Tree_Action(DofData_P->DofTree, Dof_WriteDofPRE) ;
  else {
    if (DofData_P->NbrAnyDof)
      Dof_P0 = (struct Dof *)List_Pointer(DofData_P->DofList, 0) ;
    for (i = 0 ; i < DofData_P->NbrAnyDof ; i++)
      Dof_WriteDofPRE(Dof_P0 + i, NULL) ;
  }
  fprintf(File_PRE, "$EndDofData\n") ;
  fflush(File_PRE) ;

  GetDP_End ;
}

/* ------------------------------- */
/*  D o f _ W r i t e D o f P R E  */
/* ------------------------------- */

void  Dof_WriteDofPRE(void * a, void * b) {

  struct Dof  * Dof_P ;

  GetDP_Begin("Dof_WriteDofPRE");

  Dof_P = (struct Dof *) a ;

  fprintf(File_PRE, "%d %d %d %d ",
	  Dof_P->NumType, Dof_P->Entity, Dof_P->Harmonic, Dof_P->Type) ;

  switch (Dof_P->Type) {
  case DOF_UNKNOWN :
    fprintf(File_PRE, "%d %d\n", Dof_P->Case.Unknown.NumDof,
	    Nnz[Dof_P->Case.Unknown.NumDof-1]) ;
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
    fprintf(File_PRE, " %d\n", Nnz[Dof_P->Case.Unknown.NumDof-1]) ;
    break ;
  case DOF_LINK :
    fprintf(File_PRE, "%.16g %d\n",
	    Dof_P->Case.Link.Coef, Dof_P->Case.Link.EntityRef) ;
    break ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ R e a d F i l e P R E                                           */
/* ------------------------------------------------------------------------ */

void  Dof_ReadFilePRE(struct DofData * DofData_P) {

  int         i, Nbr_Index, Int ;
  struct Dof  Dof ;
  char        String[MAX_STRING_LENGTH] ;

  GetDP_Begin("Dof_ReadFilePRE");

  do { 
    fgets(String, MAX_STRING_LENGTH, File_PRE) ; 
    if (feof(File_PRE))  break ;
  } while (String[0] != '$') ;

  if (feof(File_PRE)) Msg(ERROR, "$DofData field not found in file");

  if (!strncmp(&String[1], "DofData", 7)) {

    fscanf(File_PRE, "%d %d",
	   &DofData_P->ResolutionIndex, &DofData_P->SystemIndex) ;

    fscanf(File_PRE, "%d", &Nbr_Index) ;
    DofData_P->FunctionSpaceIndex = List_Create(Nbr_Index, 1, sizeof(int)) ;
    for (i = 0 ; i < Nbr_Index ; i++) {
      fscanf(File_PRE, "%d", &Int) ;
      List_Add(DofData_P->FunctionSpaceIndex, &Int) ;
    }

    fscanf(File_PRE, "%d", &Nbr_Index) ;
    DofData_P->TimeFunctionIndex = List_Create(Nbr_Index, 1, sizeof(int)) ;
    for (i = 0 ; i < Nbr_Index ; i++) {
      fscanf(File_PRE, "%d", &Int) ;
      List_Add(DofData_P->TimeFunctionIndex, &Int) ;
    }

    fscanf(File_PRE, "%d", &DofData_P->NbrPart) ;
    for(i = 0 ; i < DofData_P->NbrPart+1 ; i++)
      fscanf(File_PRE, "%d", &DofData_P->Part[i]) ;

    fscanf(File_PRE, "%d %d", &DofData_P->NbrAnyDof, &DofData_P->NbrDof) ;

    DofData_P->DofList = List_Create(DofData_P->NbrAnyDof, 1, sizeof(struct Dof)) ;

    if(!DofData_P->Nnz)
      DofData_P->Nnz = (int*)Malloc(DofData_P->NbrDof * sizeof(int)) ;

    for (i = 0 ; i < DofData_P->NbrAnyDof ; i++) {

      fscanf(File_PRE, "%d %d %d %d",
	     &Dof.NumType, &Dof.Entity, &Dof.Harmonic, &Dof.Type) ;

      switch (Dof.Type) {
      case DOF_UNKNOWN :
	fscanf(File_PRE, "%d", &Dof.Case.Unknown.NumDof) ;
	fscanf(File_PRE, "%d", &DofData_P->Nnz[Dof.Case.Unknown.NumDof-1]) ;
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
	fscanf(File_PRE, "%d", &DofData_P->Nnz[Dof.Case.Unknown.NumDof-1]) ;
	break ;
      case DOF_LINK :
	fscanf(File_PRE, "%lf %d",
	       &Dof.Case.Link.Coef, &Dof.Case.Link.EntityRef) ;
	Dof.Case.Link.Dof = NULL ;
	break ;
      }

      List_Add(DofData_P->DofList, &Dof) ;
    }
  }

  do {
    fgets(String, MAX_STRING_LENGTH, File_PRE) ;
    if (feof(File_PRE)) Msg(ERROR, "Prematured end of file");
  } while (String[0] != '$') ;

  Dof_InitDofType(DofData_P) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e R E S 0                                       */
/* ------------------------------------------------------------------------ */

void  Dof_WriteFileRES0(char * Name_File, int Format) {

  GetDP_Begin("Dof_WriteFileRES0");

  LinAlg_SequentialBegin();

  Dof_OpenFile(DOF_RES, Name_File, "w") ;
  fprintf(File_RES, "$ResFormat /* GetDP v%g, %s */\n", 
	  GETDP_VERSION, Format ? "binary" : "ascii") ;
  fprintf(File_RES, "%g %d\n", GETDP_VERSION, Format) ;
  fprintf(File_RES, "$EndResFormat\n") ;
  Dof_CloseFile(DOF_RES) ;

  LinAlg_SequentialEnd();

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ W r i t e F i l e R E S                                         */
/* ------------------------------------------------------------------------ */


void  Dof_WriteFileRES(char * Name_File, struct DofData * DofData_P, int Format,
		       double Val_Time, int Val_TimeStep) {

  GetDP_Begin("Dof_WriteFileRES");

  LinAlg_SequentialBegin() ;

  Dof_OpenFile(DOF_RES, Name_File, "a") ;

  if(Current.RankCpu == 0){
    fprintf(File_RES, "$Solution  /* DofData #%d */\n", DofData_P->Num) ;
    fprintf(File_RES, "%d %.16g %d\n", DofData_P->Num, Val_Time, Val_TimeStep) ;
  }

  Format ? 
    LinAlg_WriteVector(File_RES, &DofData_P->CurrentSolution->x) :
    LinAlg_PrintVector(File_RES, &DofData_P->CurrentSolution->x) ;

  if(Current.RankCpu == Current.NbrCpu-1)
    fprintf(File_RES, "$EndSolution\n") ;

  Dof_CloseFile(DOF_RES) ;

  LinAlg_SequentialEnd() ;
  
  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ R e a d F i l e R E S                                           */
/* ------------------------------------------------------------------------ */

void  Dof_ReadFileRES(List_T * DofData_L, struct DofData * Read_DofData_P,
		      int Read_DofData, double *Time, double *TimeStep) {

  int             Num_DofData, Val_TimeStep, Format=0, Read ;
  double          Val_Time, Version ;
  struct DofData  * DofData_P ;
  struct Solution Solution_S ;
  char            String[MAX_STRING_LENGTH] ;

  GetDP_Begin("Dof_ReadFileRES");

  while (1) {

    do { 
      fgets(String, MAX_STRING_LENGTH, File_RES) ; 
      if (feof(File_RES))  break ;
    } while (String[0] != '$') ;  

    if (feof(File_RES))  break ;

    /*  F o r m a t  */

    if (!strncmp(&String[1], "ResFormat", 9)) {
      fscanf(File_RES, "%lf %d\n", &Version, &Format) ;
    }

    /*  S o l u t i o n  */

    if (!strncmp(&String[1], "Solution", 8)) {

      /* Warning: the '\n' character is needed for subsequent fread */
      fscanf(File_RES, "%d %lf %d\n", &Num_DofData, &Val_Time, &Val_TimeStep) ;

      if (Read_DofData < 0){
	Read = 1 ; DofData_P = (struct DofData*)List_Pointer(DofData_L, Num_DofData) ;
      }
      else if (Num_DofData == Read_DofData) {
	Read = 1 ; DofData_P = Read_DofData_P ; 
      }
      else {
	Read = 0 ;
      }

      if(Read){
	Solution_S.Time = Val_Time ;
	Solution_S.TimeStep = Val_TimeStep ;
	LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof,
		      DofData_P->NbrPart, DofData_P->Part) ;
	Format ? 
	  LinAlg_ReadVector(File_RES, &Solution_S.x) :
	  LinAlg_ScanVector(File_RES, &Solution_S.x) ;
	if (DofData_P->Solutions == NULL)
	  DofData_P->Solutions = List_Create( 20, 20, sizeof(struct Solution)) ;
	List_Add(DofData_P->Solutions, &Solution_S) ;
      }
    }

    do {
      fgets(String, MAX_STRING_LENGTH, File_RES) ;
      if (feof(File_RES)) Msg(ERROR,"Prematured end of file");
    } while (String[0] != '$') ;

  }   /* while 1 ... */

  *Time = Val_Time ;
  *TimeStep = (double)Val_TimeStep ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ T r a n s f e r D o f T r e e T o L i s t                       */
/* ------------------------------------------------------------------------ */

void  Dof_TransferDofTreeToList(struct DofData * DofData_P) {

  GetDP_Begin("Dof_TransferDofTreeToList");

  if (DofData_P->DofTree) {
    DofData_P->DofList = Tree2List(DofData_P->DofTree) ;
    Tree_Delete(DofData_P->DofTree) ;
    DofData_P->DofTree = NULL ;
    DofData_P->NbrAnyDof = List_Nbr(DofData_P->DofList) ;
  }

  Dof_InitDofType(DofData_P) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ I n i t D o f T y p e                                           */
/* ------------------------------------------------------------------------ */

void  Dof_InitDofType(struct DofData * DofData_P) {

  struct Dof  * Dof_P, * Dof_P0 ;
  int  i ;

  GetDP_Begin("Dof_InitDofType");

  if (DofData_P->NbrAnyDof)
    Dof_P0 = (struct Dof *)List_Pointer(DofData_P->DofList, 0) ;

  for (i = 0 ; i < DofData_P->NbrAnyDof ; i++) {
    Dof_P = Dof_P0 + i ;

    switch (Dof_P->Type) {
    case DOF_LINK :
      Dof_P->Case.Link.Dof =
	Dof_GetDofStruct(DofData_P, Dof_P->NumType,
			 Dof_P->Case.Link.EntityRef, Dof_P->Harmonic) ;
      if (Dof_P->Case.Link.Dof == NULL) {
	Dof_P->Case.Link.Dof = /* Attention: bricolage ... */
	  Dof_GetDofStruct(DofData_P, Dof_P->NumType-1,
			   Dof_P->Case.Link.EntityRef, Dof_P->Harmonic) ;
	if (Dof_P->Case.Link.Dof == NULL)
	  Msg(ERROR,"Wrong Link Constraint: reference Dof (%d %d %d) does not exist",
	      Dof_P->NumType, Dof_P->Case.Link.EntityRef, Dof_P->Harmonic);
      }
      /*
      if (Dof_P->Case.Link.Dof == NULL)
	Msg(ERROR,"Wrong Link Constraint: reference Dof (%d %d %d) does not exist",
	    Dof_P->NumType, Dof_P->Case.Link.EntityRef, Dof_P->Harmonic);
      */
      break ;
    default :
      break ;
    }

  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  P R E P R O C E S S I N G   ( C o d e s   i n   T r e e )               */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------------------ */
/*  D o f _ A d d F u n c t i o n S p a c e I n d e x                       */
/* ------------------------------------------------------------------------ */

void  Dof_AddFunctionSpaceIndex(int Index_FunctionSpace) {

  GetDP_Begin("Dof_AddFunctionSpaceIndex");

  if (CurrentDofData->FunctionSpaceIndex == NULL)
    CurrentDofData->FunctionSpaceIndex = List_Create(10, 5, sizeof(int)) ;

  if (List_PQuery
      (CurrentDofData->FunctionSpaceIndex, &Index_FunctionSpace, fcmp_int) == NULL) {
    List_Add(CurrentDofData->FunctionSpaceIndex, &Index_FunctionSpace) ;
    List_Sort(CurrentDofData->FunctionSpaceIndex, fcmp_int) ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ A d d T i m e F u n c t i o n I n d e x                         */
/* ------------------------------------------------------------------------ */

void  Dof_AddTimeFunctionIndex(int Index_TimeFunction) {

  GetDP_Begin("Dof_AddTimeFunctioIndex");

  if (List_PQuery
      (CurrentDofData->TimeFunctionIndex, &Index_TimeFunction, fcmp_int) == NULL) {
    List_Add(CurrentDofData->TimeFunctionIndex, &Index_TimeFunction) ;
    List_Sort(CurrentDofData->TimeFunctionIndex, fcmp_int) ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ A d d P u l s a t i o n                                         */
/* ------------------------------------------------------------------------ */

void  Dof_AddPulsation(struct DofData * DofData_P, double Val_Pulsation) {

  GetDP_Begin("Dof_AddPulsation");

  if (DofData_P->Pulsation == NULL)
    DofData_P->Pulsation = List_Create(1, 2, sizeof(double)) ;

  if (List_PQuery
      (DofData_P->Pulsation, &Val_Pulsation, fcmp_double) == NULL) {
    List_Add(DofData_P->Pulsation, &Val_Pulsation) ;
    List_Sort(DofData_P->Pulsation, fcmp_double) ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e A s s i g n F i x e d D o f                         */
/* ------------------------------------------------------------------------ */

void  Dof_DefineAssignFixedDof(int D1, int D2, int NbrHar, double *Val, 
			       int Index_TimeFunction) {
  struct Dof  Dof, * Dof_P ;
  int         k ;

  GetDP_Begin("Dof_DefineAssignedFixedDof");

  Dof.NumType = D1 ;  Dof.Entity = D2 ;  
  
  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if (!(Dof_P = (struct Dof *)Tree_PQuery(CurrentDofData->DofTree, &Dof))) {
      Dof.Type = DOF_FIXED ;
      LinAlg_SetScalar(&Dof.Val, &Val[k]) ;
      Dof.Case.FixedAssociate.TimeFunctionIndex = Index_TimeFunction + 1 ;
      Dof_AddTimeFunctionIndex(Index_TimeFunction + 1) ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
    else if(Dof_P->Type == DOF_UNKNOWN) {
      if(Flag_VERBOSE == 10)
	Msg(INFO, "Overriding unknown Dof with fixed Dof");
      Dof_P->Type = DOF_FIXED ;
      LinAlg_SetScalar(&Dof_P->Val, &Val[k]) ;
      Dof_P->Case.FixedAssociate.TimeFunctionIndex = Index_TimeFunction + 1 ;
      Dof_AddTimeFunctionIndex(Index_TimeFunction + 1) ;
    }
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e A s s i g n S o l v e D o f                         */
/* ------------------------------------------------------------------------ */

void  Dof_DefineAssignSolveDof(int D1, int D2, int NbrHar, int Index_TimeFunction) {
  struct Dof  Dof ;
  int         k ;
  
  GetDP_Begin("Dof_DefineAssignSolveDof");

  Dof.NumType = D1 ;  Dof.Entity = D2 ;  

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if (!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_FIXED_SOLVE ;
      Dof.Case.FixedAssociate.TimeFunctionIndex = Index_TimeFunction + 1 ;
      Dof_AddTimeFunctionIndex(Index_TimeFunction + 1) ; 
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e I n i t F i x e d D o f                             */
/* ------------------------------------------------------------------------ */

void  Dof_DefineInitFixedDof(int D1, int D2, int NbrHar, double *Val) {
  struct Dof  Dof ;
  int         k ;

  GetDP_Begin("Dof_DefineInitFixesDof");

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if (!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_UNKNOWN_INIT ;
      LinAlg_SetScalar(&Dof.Val, &Val[k]) ;
      Dof.Case.Unknown.NumDof = ++(CurrentDofData->NbrDof) ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e I n i t S o l v e D o f                             */
/* ------------------------------------------------------------------------ */

void  Dof_DefineInitSolveDof(int D1, int D2, int NbrHar) {
  struct Dof  Dof ;
  int         k ;

  GetDP_Begin("Dof_DefineInitSolveDof");

  Dof.NumType = D1 ;  Dof.Entity = D2 ; 

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if (!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_UNKNOWN_INIT ;
      Dof.Case.Unknown.NumDof = ++(CurrentDofData->NbrDof) ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e L i n k D o f                                       */
/* ------------------------------------------------------------------------ */

void  Dof_DefineLinkDof(int D1, int D2, int NbrHar, double Coef, int D2_Link) {
  struct Dof  Dof ;
  int         k ;

  GetDP_Begin("Dof_DefineLinkDof");

  Dof.NumType = D1 ;  Dof.Entity = D2 ;  
  
  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if (!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_LINK ;
      Dof.Case.Link.Coef = Coef ;
      Dof.Case.Link.EntityRef = D2_Link ;
      Dof.Case.Link.Dof = NULL ;
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e S y m m e t r i c a l D o f                         */
/* ------------------------------------------------------------------------ */

void  Dof_DefineUnknownDof(int D1, int D2, int NbrHar) {
  struct Dof  Dof ;
  int         k ;

  GetDP_Begin("Dof_DefineUnknownDof");

  Dof.NumType = D1 ;  Dof.Entity = D2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Dof.Harmonic = k ;
    if (!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
      Dof.Type = DOF_UNKNOWN ;
      Dof.Case.Unknown.NumDof = -1 ;
      /* Dof.Case.Unknown.NumDof = ++(CurrentDofData->NbrDof) ; */
      Tree_Add(CurrentDofData->DofTree, &Dof) ;
    }
  }

  GetDP_End ;
}

void NumberUnknownDof (void *a, void *b) {
  struct Dof * Dof_P ;
  
  GetDP_Begin("NumberSymmetericalDof");

  Dof_P = (struct Dof *)a ;

  if(Dof_P->Type == DOF_UNKNOWN && Dof_P->Case.Unknown.NumDof == -1)
    Dof_P->Case.Unknown.NumDof = ++(CurrentDofData->NbrDof) ;

  GetDP_End ;
}

void  Dof_NumberUnknownDof(void) {

  GetDP_Begin("Dof_NumberUnknownDof");

  if(CurrentDofData->DofTree)
    Tree_Action(CurrentDofData->DofTree, NumberUnknownDof) ;
  else
    List_Action(CurrentDofData->DofList, NumberUnknownDof) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ D e f i n e A s s o c i a t e D o f                             */
/* ------------------------------------------------------------------------ */

void  Dof_DefineAssociateDof(int E1, int E2, int D1, int D2, int NbrHar) {
  struct Dof  Dof, Equ, * Equ_P ;
  int         k ;

  GetDP_Begin("Dof_DefineAssociateDof");

  Equ.NumType = E1 ;  Equ.Entity = E2 ;

  for(k=0 ; k<NbrHar ; k+=gSCALAR_SIZE){
    Equ.Harmonic = k ;
    if ((Equ_P = (struct Dof*)Tree_PQuery(CurrentDofData->DofTree, &Equ))) {
      switch (Equ_P->Type) {
      case DOF_FIXED :
	Equ_P->Type = DOF_FIXEDWITHASSOCIATE ;
	Equ_P->Case.FixedAssociate.NumDof = ++(CurrentDofData->NbrDof) ;
	Dof.NumType = D1 ; Dof.Entity = D2 ; Dof.Harmonic = k ;
	if (!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
	  Dof.Type = DOF_UNKNOWN ;
	  Dof.Case.Unknown.NumDof = CurrentDofData->NbrDof ;
	  Tree_Add(CurrentDofData->DofTree, &Dof) ;
	}
	break ;
      case DOF_FIXED_SOLVE :
	Equ_P->Type = DOF_FIXEDWITHASSOCIATE_SOLVE ;
	Equ_P->Case.FixedAssociate.NumDof = ++(CurrentDofData->NbrDof) ;
	Dof.NumType = D1 ; Dof.Entity = D2 ; Dof.Harmonic = k ;
	if (!Tree_PQuery(CurrentDofData->DofTree, &Dof)) {
	  Dof.Type = DOF_UNKNOWN ;
	  Dof.Case.Unknown.NumDof = CurrentDofData->NbrDof ;
	  Tree_Add(CurrentDofData->DofTree, &Dof) ;
	}
	break ;
      case DOF_UNKNOWN :  case DOF_UNKNOWN_INIT :
	Dof_DefineUnknownDof(D1, D2, NbrHar) ;
	break ;
      }
    }
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  P R O C E S S I N G   ( C o d e s   i n   L i s t )                     */
/* ------------------------------------------------------------------------ */

/* ------------------------------------------------------------------------ */
/*  D o f _ G e t D o f S t r u c t                                         */
/* ------------------------------------------------------------------------ */

struct Dof  * Dof_GetDofStruct(struct DofData * DofData_P, int D1, int D2, int D3) {
  struct Dof  Dof ;

  GetDP_Begin("Dof_getDofStruct");

  Dof.NumType = D1 ;  Dof.Entity = D2 ;  Dof.Harmonic = D3 ;

  GetDP_Return((struct Dof *)List_PQuery(DofData_P->DofList, &Dof, fcmp_Dof)) ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ A s s e m b l e I n M a t                                       */
/* ------------------------------------------------------------------------ */

void  Dof_AssembleInMat(struct Dof * Equ_P, struct Dof * Dof_P, int NbrHar, 
			double * Val, gMatrix * Mat, gVector * Vec) {
  gScalar tmp, tmp2 ;
  double  valtmp[2], d1, d2 ;

  GetDP_Begin("Dof_AssembleInMat");

  switch (Equ_P->Type) {
  case DOF_UNKNOWN :
  case DOF_FIXEDWITHASSOCIATE :

    switch (Dof_P->Type) {
      
    case DOF_UNKNOWN :
      if(NbrHar==1){
	if(Val[0])
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
      Dof_AssembleInMat(Equ_P, Dof_P->Case.Link.Dof, NbrHar, valtmp, Mat, Vec) ;
      break ;

    case DOF_FIXED_SOLVE :  case DOF_FIXEDWITHASSOCIATE_SOLVE :
      Msg(ERROR,"Wrong Constraints: "
	  "remaining Dof(s) waiting to be fixed by a Resolution");
      break;

    case DOF_UNKNOWN_INIT :
      Msg(ERROR,"Wrong Initial Constraints: "
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
    Dof_AssembleInMat(Equ_P->Case.Link.Dof, Dof_P, NbrHar, valtmp, Mat, Vec) ;
    break ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ A s s e m b l e I n V e c                                       */
/* ------------------------------------------------------------------------ */

void  Dof_AssembleInVec(struct Dof * Equ_P, struct Dof * Dof_P, int NbrHar, 
			double * Val, struct Solution * OtherSolution,
			gVector * Vec0, gVector * Vec) {
  gScalar tmp ;
  double valtmp[2] ;
  double a, b, c, d ;

  GetDP_Begin("Dof_AssembleInVec");

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
	  Msg(ERROR, "Assemby in vectors with more than one harmonic not yet implemented") ;
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

    case DOF_FIXED_SOLVE :  case DOF_FIXEDWITHASSOCIATE_SOLVE :
      Msg(ERROR,"Wrong Constraints: "
	  "remaining Dof(s) waiting to be fixed by a Resolution");
      break;

    case DOF_UNKNOWN_INIT :
      Msg(ERROR,"Wrong Initial Constraints: "
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
		      Val, OtherSolution, Vec0, Vec) ;
    break ;
  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  D o f _ T r a n s f e r S o l u t i o n T o C o n s t r a i n t         */
/* ------------------------------------------------------------------------ */

void  Dof_TransferSolutionToConstraint(struct DofData * DofData_P) {

  struct Dof * Dof_P, * Dof_P0 ;
  int  i ;

  GetDP_Begin("Dof_TransferSolutionToConstraint");

  if (DofData_P->NbrAnyDof)
    Dof_P0 = (struct Dof *)List_Pointer(DofData_P->DofList, 0) ;

  for (i = 0 ; i < DofData_P->NbrAnyDof ; i++) {
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
      break ;

    default :  break ;
    }
  }

  DofData_P->NbrDof = 0 ;

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  D o f _ G e t D o f V a l u e                                           */
/* ------------------------------------------------------------------------ */

gScalar Dof_GetDofValue(struct DofData * DofData_P, struct Dof * Dof_P) {
  gScalar tmp ;
  
  GetDP_Begin("Dof_GetDofValue");

  switch (Dof_P->Type) {

  case DOF_UNKNOWN :
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

  default :
    LinAlg_ZeroScalar(&tmp) ;
    break ;
  }

  GetDP_Return(tmp) ;
}

void Dof_GetRealDofValue(struct DofData * DofData_P, struct Dof * Dof_P, double *d) {
  gScalar tmp ;

  GetDP_Begin("Dof_GetRealDofValue");

  tmp = Dof_GetDofValue(DofData_P, Dof_P) ;
  LinAlg_GetDoubleInScalar(d, &tmp) ;

  GetDP_End ;
}

void Dof_GetComplexDofValue(struct DofData * DofData_P, struct Dof * Dof_P, 
			    double *d1, double *d2) {
  gScalar tmp1, tmp2 ;

  GetDP_Begin("Dof_GetComplexDofValue");

  if(gSCALAR_SIZE == 1){
    tmp1 = Dof_GetDofValue(DofData_P, Dof_P) ; LinAlg_GetDoubleInScalar(d1, &tmp1) ;
    tmp2 = Dof_GetDofValue(DofData_P, Dof_P+1) ; LinAlg_GetDoubleInScalar(d2, &tmp2) ;
  }
  else{
    tmp1 = Dof_GetDofValue(DofData_P, Dof_P) ; LinAlg_GetComplexInScalar(d1, d2, &tmp1) ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ G e t D o f V a l u e D t                                       */
/* ------------------------------------------------------------------------ */
/*  N e v e r   u s e d . . .  */
gScalar Dof_GetDofValueDt(struct DofData * DofData_P, struct Dof * Dof_P) {
  gScalar t2, t1 ;

  GetDP_Begin("Dof_GetDofValueDt");

  if(DofData_P->NbrHar!=1 && gSCALAR_SIZE==2)
    Msg(ERROR, "'Dof_GetDofValueDt' is not ready for complex stored numbers");

  switch (Dof_P->Type) {

  case DOF_UNKNOWN :
    if (DofData_P->NbrHar == 1) {
      LinAlg_GetScalarInVector(&t1, &DofData_P->CurrentSolution->x, 
			 Dof_P->Case.Unknown.NumDof-1) ;
      LinAlg_GetScalarInVector(&t2, &(DofData_P->CurrentSolution-1)->x, 
			 Dof_P->Case.Unknown.NumDof-1) ;
      LinAlg_SubScalarScalar(&t1, &t2, &t1) ;
      LinAlg_DivScalarDouble
	(&t1, DofData_P->CurrentSolution->Time-(DofData_P->CurrentSolution-1)->Time,
	 &t1) ;
    }
    else {
      if(Dof_P->Harmonic%2 == 0){
	LinAlg_GetScalarInVector
	  (&t1, 
	   &DofData_P->CurrentSolution->x, (Dof_P+1)->Case.Unknown.NumDof-1) ;
	LinAlg_ProdScalarDouble(&t1, -DofData_P->Val_Pulsation[Dof_P->Harmonic/2], &t1) ;
      }
      else{
	LinAlg_GetScalarInVector
	  (&t1, 
	   &DofData_P->CurrentSolution->x, (Dof_P-1)->Case.Unknown.NumDof-1) ;
	LinAlg_ProdScalarDouble(&t1, DofData_P->Val_Pulsation[Dof_P->Harmonic/2], &t1) ;
      }
    }
    break ;

  case DOF_FIXED :
  case DOF_FIXEDWITHASSOCIATE :
    if (DofData_P->NbrHar == 1)
      LinAlg_ProdScalarDouble
	(&Dof_P->Val, 
	 (DofData_P->CurrentSolution->
	  TimeFunctionValues[Dof_P->Case.FixedAssociate.TimeFunctionIndex] -
	  (DofData_P->CurrentSolution-1)->
	  TimeFunctionValues[Dof_P->Case.FixedAssociate.TimeFunctionIndex])
	 / (DofData_P->CurrentSolution->Time - (DofData_P->CurrentSolution-1)->Time),
	 &t1) ;
    else {
      if(Dof_P->Harmonic%2 == 0)
	LinAlg_ProdScalarDouble
	  (&(Dof_P+1)->Val, 
	   -DofData_P->Val_Pulsation[Dof_P->Harmonic/2], &t1) ;
      else
	LinAlg_ProdScalarDouble
	  (&(Dof_P-1)->Val, 
	   DofData_P->Val_Pulsation[Dof_P->Harmonic/2], &t1) ;
    }
    break ;
    
  case DOF_LINK :
    /* to be completed... if needed... */
    break ;

  default :  
    LinAlg_ZeroScalar(&t1) ;
    break ;
  }

  GetDP_Return(t1) ;
}



/* ------------------------------------------------------------------------- */
/*  D o f _ D e f i n e Unknown D o f F r o m Solve o r Init D o f           */
/* ------------------------------------------------------------------------- */

void  Dof_DefineUnknownDofFromSolveOrInitDof(struct DofData ** DofData_P) {
  int         i, Nbr_AnyDof ;
  struct Dof  * Dof_P ;

  GetDP_Begin("Dof_DefineUnknownDofFromSolveOrInitDof");

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

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  D o f _ T r a n s f e r D o f                                           */
/* ------------------------------------------------------------------------ */

void  Dof_TransferDof(struct DofData  * DofData_P1, 
		      struct DofData ** DofData_P2) {

  int              i, Nbr_AnyDof ;
  struct Dof       Dof, * Dof_P ;
  struct Solution  * Solutions_P0 ;

  GetDP_Begin("Dof_TransferDof");

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
	Dof_P->Val = Dof_GetDofValue(DofData_P1, &Dof) ;
	break ;

	/* Un DOF_UNKNOWN_INIT prendra toujours une valeur obtenue par
	   pre-resolution, meme si on ne demande qu'une simple initialisation ...
	   Pourquoi pas definir un type DOF_UNKNOWN_INIT_SOLVE,
	   propre a Dof_DefineInitSolveDof() ? ... */

      }
    }
  }
  
  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  D o f _ I n i t D o f F o r N o D o f                                   */
/* ------------------------------------------------------------------------ */

void Dof_InitDofForNoDof(struct Dof * DofForNoDof, int NbrHar) {
  int k ;
  double Val[2] = {1.,0.} ;

  GetDP_Begin("Dof_InitDofForNoDof");

  for (k=0 ; k<NbrHar ; k+=gSCALAR_SIZE) {
    DofForNoDof[k].Type = DOF_FIXED ;
    LinAlg_SetScalar(&DofForNoDof[k].Val, &Val[k%2]) ;
    DofForNoDof[k].Case.FixedAssociate.TimeFunctionIndex = 0 ;
  }

  GetDP_End ;
}

/* ------------------------------------------------------- */
/*  P r i n t _  D o f N u m b e r                         */
/* ------------------------------------------------------- */

void Print_DofNumber(struct Dof *Dof_P, char *fmt){

  GetDP_Begin("Print_DofNumber");

  switch(Dof_P->Type){
  case DOF_UNKNOWN : printf(fmt, Dof_P->Case.Unknown.NumDof) ; break ;
  case DOF_FIXED   : printf(fmt, -1) ; break ;
  case DOF_FIXEDWITHASSOCIATE   :
    printf(fmt, Dof_P->Case.FixedAssociate.NumDof) ; break ;
  default              : printf(" ? ") ; break ;
  }

  GetDP_End ;
}
