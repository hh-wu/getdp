// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "GetDPConfig.h"


#include "ProData.h"
#include "DofData.h"
#include "SolvingOperations.h"
#include "SolvingAnalyse.h"
#include "Message.h"
#include "MallocUtils.h"

extern struct CurrentData Current;
extern struct Problem Problem_S;


/* ------------------------------------------------------------------------ */
/*  O p e r a t i o n _ P o s t O p e r a t i o n                           */
/* ------------------------------------------------------------------------ */


void Operation_PostOperation(Resolution  *Resolution_P,
                             DofData     *DofData_P0,
                             GeoData     *GeoData_P0,
                             List_T      *PostOperationNames)
{
  double  Save_Time, Save_TimeImag, Save_TimeStep;
  char    *str;
  int     i, j, k;
  Element *Save_Element;
  PostOperation  *PostOperation_P;
  PostProcessing *PostProcessing_P ;

  Save_Time = Current.Time ;
  Save_TimeImag = Current.TimeImag ;
  Save_TimeStep = Current.TimeStep ;
  Save_Element = Current.Element;

  for(int i=0 ; i<List_Nbr(PostOperationNames); i++){
    str = *(char**)List_Pointer(PostOperationNames, i);
    if((j = List_ISearchSeq(Problem_S.PostOperation, str, fcmp_PostOperation_Name)) < 0){
      Message::Warning("Unknown PostOperation '%s'", str) ;
    }
    else{
      PostOperation_P = (struct PostOperation*)
        List_Pointer(Problem_S.PostOperation, j) ;
      PostProcessing_P = (struct PostProcessing *)
        List_Pointer(Problem_S.PostProcessing, PostOperation_P->PostProcessingIndex) ;
      Current.PostOpDataIndex = i;
      Treatment_PostOperation(Resolution_P, DofData_P0,
         (struct DefineSystem *)List_Pointer(Resolution_P->DefineSystem, 0),
         GeoData_P0, PostProcessing_P, PostOperation_P) ;
    }
  }

  /* the post-processing can (and usually will) change the current
     timestep, current time and current solution pointers: we need
     to reset them */
  Current.Time = Save_Time ;
  Current.TimeImag = Save_TimeImag ;
  Current.TimeStep = Save_TimeStep ;
  for (k = 0 ; k < Current.NbrSystem ; k++){
    i = List_Nbr((Current.DofData_P0+k)->Solutions) - 1;
    if(i >= 0)
      (Current.DofData_P0+k)->CurrentSolution = (struct Solution*)
        List_Pointer((Current.DofData_P0+k)->Solutions, i);
  }
  Current.Element = Save_Element;
  Current.PostOpDataIndex = -1;
}


/* ------------------------------------------------------------------------ */
/*  I n i t L E P o s t O p e r a t i o n                                   */
/* ------------------------------------------------------------------------ */


void InitLEPostOperation(Resolution  *Resolution_P,
                         DofData     *DofData_P0,
                         GeoData     *GeoData_P0,
                         List_T      *LEPostOp_L,
                         List_T      *LEPostOpNames_L,
                         List_T      *PostOpSolution_L)
{
  int                    NbrPostOps, Index, NbrPostSubOperation, PostOpSolLength;
  int                    *Save_Format_P, *Save_LastTimeStepOnly_P;
  char                   **Save_FileOut_P;
  PostOpSolutions        *PostOpSolutions_P, PostOpSolutions_S;
  LoopErrorPostOperation *LEPostOp_P;
  PostSubOperation       *PostSubOperation_P;
  List_T                 *PostSubOperation_L;
  gVector                PostOpSolution_S;

  Current.PostOpData_L = NULL;
  NbrPostOps = List_Nbr(LEPostOp_L);
  if (NbrPostOps) {
    Current.PostOpData_L = List_Create(NbrPostOps,1,sizeof(PostOpSolutions));

    for (int i=0; i < NbrPostOps; i++) {
      LEPostOp_P = (struct LoopErrorPostOperation*)List_Pointer(LEPostOp_L, i);
      Index = List_ISearchSeq(Problem_S.PostOperation, LEPostOp_P->PostOperationName,
                              fcmp_PostOperation_Name);
      LEPostOp_P->PostOperationIndex = Index;
      if(Index < 0)
        Message::Error("Unknown PostOperation %s in TimeLoopAdaptive",
                       LEPostOp_P->PostOperationName);

      PostOpSolutions_S.PostOperation_P = (struct PostOperation*)
        List_Pointer(Problem_S.PostOperation, Index) ;

      PostSubOperation_L = PostOpSolutions_S.PostOperation_P->PostSubOperation;
      NbrPostSubOperation = List_Nbr(PostSubOperation_L);
      if (NbrPostSubOperation) {
        LEPostOp_P->Save_Format_L = List_Create(NbrPostSubOperation,2,
                                                 sizeof(int));
        LEPostOp_P->Save_LastTimeStepOnly_L = List_Create(NbrPostSubOperation,
                                                           2,sizeof(int));
        LEPostOp_P->Save_FileOut_L = List_Create(NbrPostSubOperation,
                                                  2,sizeof(char *));
      }
      for (int j=0; j<NbrPostSubOperation; j++) {
        PostSubOperation_P = (struct PostSubOperation*)
                              List_Pointer(PostSubOperation_L, j);
        Save_Format_P = &PostSubOperation_P->Format;
        Save_LastTimeStepOnly_P = &PostSubOperation_P->LastTimeStepOnly;
        Save_FileOut_P = &PostSubOperation_P->FileOut;
        List_Add(LEPostOp_P->Save_Format_L, Save_Format_P);
        List_Add(LEPostOp_P->Save_LastTimeStepOnly_L, Save_LastTimeStepOnly_P);
        List_Add(LEPostOp_P->Save_FileOut_L, Save_FileOut_P);
        *Save_Format_P = FORMAT_LOOP_ERROR;
        *Save_LastTimeStepOnly_P = 1;
        *Save_FileOut_P = NULL;
      }

      PostOpSolutions_S.Solutions_L = List_Create(2,2,sizeof(Solution));

      List_Add(Current.PostOpData_L, &PostOpSolutions_S);
      List_Add(LEPostOpNames_L, &LEPostOp_P->PostOperationName);
    }

    // Execute the PostOperations
    Operation_PostOperation(Resolution_P, DofData_P0, GeoData_P0, LEPostOpNames_L);

    // Creating vectors for the PostOperation-solution
    for (int i=0; i < NbrPostOps; i++) {
      PostOpSolutions_P = (struct PostOpSolutions*)
                          List_Pointer(Current.PostOpData_L, i);
      LinAlg_GetVectorSize
        (&((struct Solution*)List_Pointer(PostOpSolutions_P->Solutions_L, 0))->x,
         &PostOpSolLength);
      LinAlg_CreateVector(&PostOpSolution_S, &DofData_P0->Solver, PostOpSolLength);
      List_Add(PostOpSolution_L, &PostOpSolution_S);
    }
  }
}


/* ------------------------------------------------------------------------ */
/*  F r e e _ U n u s e d P o s t O p e r a t i o n R e s u l t s           */
/* ------------------------------------------------------------------------ */

void Free_UnusedPOresults()
{
  struct Solution *Solution_P;
  int             index = -1;
  PostOpSolutions *PostOpSolutions_P;

  for(int i = 0; i < List_Nbr(Current.PostOpData_L); i++) {
    PostOpSolutions_P = (struct PostOpSolutions*)
                                   List_Pointer(Current.PostOpData_L, i);
    // We store 1 solution too much (to allow for an imbricated iterative loop)
    switch (Current.TypeTime) {
    case TIME_THETA :
      index = List_Nbr(PostOpSolutions_P->Solutions_L)-4 ;
      // Fore TimeLoopAdaptive (Trapezoidal) we need 3 past solutions for the predictor
      index = Message::GetOperatingInTimeLoopAdaptive() ? index - 1 : index;
      break;
    case TIME_GEAR :
      // With -9 we store 7 past solutions (for Gear_6)
      index = List_Nbr(PostOpSolutions_P->Solutions_L)-9 ;
      break;
    case TIME_NEWMARK :
      index = List_Nbr(PostOpSolutions_P->Solutions_L)-4 ;
      break;
    }

    if(index >= 0){
      Solution_P = (struct Solution*)
                          List_Pointer(PostOpSolutions_P->Solutions_L, index);
      if(Solution_P->SolutionExist){
        Message::Info("Freeing PostOperationResult %d", index);
        LinAlg_DestroyVector(&Solution_P->x);
        if (Solution_P->TimeFunctionValues)
          Free(Solution_P->TimeFunctionValues);
        Solution_P->SolutionExist = 0 ;
      }
    }
  }
}


/* ------------------------------------------------------------------------ */
/*  F r e e _ A l l P o s t O p e r a t i o n R e s u l t s           */
/* ------------------------------------------------------------------------ */

void Free_AllPOresults()
{
  PostOpSolutions        *PostOpSolutions_P;
  Solution               *Solution_P;

  for (int i=0; i < List_Nbr(Current.PostOpData_L); i++) {
    PostOpSolutions_P = (struct PostOpSolutions*)List_Pointer(Current.PostOpData_L, i);
    for (int j=0; j < List_Nbr(PostOpSolutions_P->Solutions_L); j++) {
      Solution_P = (struct Solution*)List_Pointer(PostOpSolutions_P->Solutions_L, j);
      if (Solution_P->SolutionExist)
        LinAlg_DestroyVector(&Solution_P->x);
      if (Solution_P->TimeFunctionValues)
        Free(Solution_P->TimeFunctionValues);
    }
    List_Delete(PostOpSolutions_P->Solutions_L);
  }
  List_Delete(Current.PostOpData_L);
  Current.PostOpData_L = NULL;
  Current.PostOpDataIndex = -1;
}


/* ------------------------------------------------------------------------ */
/*  C l e a r L E P o s t O p e r a t i o n                                   */
/* ------------------------------------------------------------------------ */


void ClearLEPostOperation(Resolution  *Resolution_P,
                          DofData     *DofData_P0,
                          GeoData     *GeoData_P0,
                          List_T      *LEPostOp_L,
                          List_T      *LEPostOpNames_L,
                          List_T      *PostOpSolution_L,
                          bool        Delete_LEPostOp_L)
{
  int                    Index, NbrPostSubOperation;
  int                    *Format_P, *LastTimeStepOnly_P;
  char                   **FileOut_P;
  LoopErrorPostOperation *LEPostOp_P;
  PostSubOperation       *PostSubOperation_P;
  List_T                 *PostSubOperation_L;

  for(int i = 0; i < List_Nbr(LEPostOp_L); i++) {
    LEPostOp_P = (struct LoopErrorPostOperation*)List_Pointer(LEPostOp_L, i);
    NbrPostSubOperation = List_Nbr(LEPostOp_P->Save_Format_L);

    Index = LEPostOp_P->PostOperationIndex;
    PostSubOperation_L = ((struct PostOperation*)
                          List_Pointer(Problem_S.PostOperation, Index))
                            ->PostSubOperation;

    // Restore variables Format, LastTimeStepOnly and FileOut of all used PostOperations
    for (int j=0; j<NbrPostSubOperation; j++) {
      PostSubOperation_P = (struct PostSubOperation*)List_Pointer(PostSubOperation_L, j);
      Format_P = &PostSubOperation_P->Format;
      LastTimeStepOnly_P = &PostSubOperation_P->LastTimeStepOnly;
      FileOut_P = &PostSubOperation_P->FileOut;
      List_Read(LEPostOp_P->Save_Format_L, j, Format_P);
      List_Read(LEPostOp_P->Save_LastTimeStepOnly_L, j, LastTimeStepOnly_P);
      List_Read(LEPostOp_P->Save_FileOut_L, j, FileOut_P);
    }

    if (Delete_LEPostOp_L)
      free(LEPostOp_P->PostOperationName);
    LinAlg_DestroyVector((gVector*)List_Pointer(PostOpSolution_L, i));
  }
  if (Delete_LEPostOp_L)
    List_Delete(LEPostOp_L);
  List_Delete(PostOpSolution_L);

  Free_AllPOresults();

  List_Delete(LEPostOpNames_L);
}
