// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Michael Asam


#include <stdio.h>
#include "ProData.h"
#include "DofData.h"
#include "SolvingOperations.h"
#include "SolvingAnalyse.h"
#include "Message.h"
#include "Cal_Quantity.h"

extern struct CurrentData Current;
extern int    Flag_IterativeLoopN;
extern int    Flag_IterativeLoopConverged;

/* ------------------------------------------------------------------------ */
/*  C a l M a x E r r o r R a t i o                                         */
/* ------------------------------------------------------------------------ */

double CalcMaxErrorRatio(Resolution  *Resolution_P,
                         DofData     *DofData_P0,
                         List_T      *ILsystems_L,
                         List_T      *LEPostOp_L,
                         List_T      *xPrevious_L,
                         List_T      *PostOpSolutionPrevious_L)
{
  DofData                 *DofData_P=NULL;
  DefineSystem            *DefineSystem_P;
  IterativeLoopSystem     ILsystem;
  LoopErrorPostOperation  ILPostOp;
  PostOpSolutions         *PostOpSolutions_P;
  Solution                *Solution_P;
  gVector                 *xPrevious_P, *xCurrent_P;       // new and last solution vector
  gVector                 xError;                          // Local Truncation Error vector
  int                     NbrSolutions, PostOpSolLength;
  double                  ErrorRatio, MaxErrorRatio;

  MaxErrorRatio = 0.;

  // Loop through all given systems
  for(int i = 0; i < List_Nbr(ILsystems_L); i++){
    List_Read(ILsystems_L, i, &ILsystem);
    DofData_P = DofData_P0 + ILsystem.SystemIndex;
    DefineSystem_P = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
                                                 ILsystem.SystemIndex);
    xPrevious_P = (gVector*)List_Pointer(xPrevious_L, i);
    xCurrent_P  = &DofData_P->CurrentSolution->x;

    LinAlg_CreateVector(&xError, &DofData_P->Solver, DofData_P->NbrDof);

    switch (ILsystem.NormOf) {
      case SOLUTION:
        // Vector of errors: xError = xCurrent - xPrevious
        LinAlg_CopyVector(xCurrent_P, &xError);
        LinAlg_SubVectorVector(&xError, xPrevious_P, &xError);
        Cal_SolutionErrorRatio(&xError, xCurrent_P,
                               ILsystem.SystemILreltol, ILsystem.SystemILabstol,
                               ILsystem.NormType, &ErrorRatio);
        break;

      case RECALCRESIDUAL:
        // Calculating the actual residual: xError = b(xn)-A(xn)*xn
        // Works also for "Solve" but its computational expensive
        ReGenerate_System(DefineSystem_P, DofData_P, DofData_P0, 1);
        LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x, &xError);
        LinAlg_SubVectorVector(&DofData_P->b, &xError, &xError);
        Cal_SolutionErrorRatio(&xError, &DofData_P->b,
                               ILsystem.SystemILreltol, ILsystem.SystemILabstol,
                               ILsystem.NormType, &ErrorRatio);
        break;

      case RESIDUAL:
        // Or alternatively look at the old residual (from e.g. SolveJac)
        // -> More efficient but causes one extra iteration
        Cal_SolutionErrorRatio(&DofData_P->res, &DofData_P->b,
                               ILsystem.SystemILreltol, ILsystem.SystemILabstol,
                               ILsystem.NormType, &ErrorRatio);
        break;

      default:
        Message::Error("Unknown object for error norm");
        break;
    }

    LinAlg_DestroyVector(&xError);

    if (ErrorRatio != ErrorRatio) {      // If ErrorRatio = NaN
      MaxErrorRatio = ErrorRatio;
      break;
    }
    else if (ErrorRatio > MaxErrorRatio)
      MaxErrorRatio = ErrorRatio;

    Current.Residual = ErrorRatio;
    if (Message::GetVerbosity() > 5) {
      Message::Info("IterativeLoopN: %s of %s error ratio from system %s:  %.3g",
          ILsystem.NormTypeString, ILsystem.NormOfString, DefineSystem_P->Name,
          ErrorRatio);
    }
  }

  // Loop through all specified PostOperations
  for(int i = 0; i < List_Nbr(LEPostOp_L); i++){
    List_Read(LEPostOp_L, i, &ILPostOp);

    PostOpSolutions_P = (struct PostOpSolutions*)
                           List_Pointer(Current.PostOpData_L, i);
    NbrSolutions = List_Nbr(PostOpSolutions_P->Solutions_L);
    Solution_P = (struct Solution*)List_Pointer(PostOpSolutions_P->Solutions_L,
                                                NbrSolutions-1);
    xPrevious_P = (gVector*)List_Pointer(PostOpSolutionPrevious_L, i);
    xCurrent_P  = &Solution_P->x;
    LinAlg_AssembleVector(&Solution_P->x);

    LinAlg_GetVectorSize(xCurrent_P, &PostOpSolLength);
    LinAlg_CreateVector(&xError, &DofData_P0->Solver, PostOpSolLength);

    // Vector of errors: xError = xCurrent - xPrevious
    LinAlg_CopyVector(xCurrent_P, &xError);
    LinAlg_SubVectorVector(&xError, xPrevious_P, &xError);
    Cal_SolutionErrorRatio(&xError, xCurrent_P, ILPostOp.PostOperationReltol,
                           ILPostOp.PostOperationAbstol, ILPostOp.NormType,
                           &ErrorRatio);

    LinAlg_DestroyVector(&xError);

    if (ErrorRatio != ErrorRatio) {      // If ErrorRatio = NaN
      MaxErrorRatio = ErrorRatio;
      break;
    }
    else if (ErrorRatio > MaxErrorRatio)
      MaxErrorRatio = ErrorRatio;

    if (Message::GetVerbosity() > 5) {
      Message::Info("IterativeLoopN: %s error ratio from PostOperation %s:  %.3g",
          ILPostOp.NormTypeString, ILPostOp.PostOperationName,
          ErrorRatio);
    }
  }

  return MaxErrorRatio;
}


/* ------------------------------------------------------------------------ */
/*  O p e r a t i o n _ I t e r a t i v e L o o p N                         */
/* ------------------------------------------------------------------------ */

void Operation_IterativeLoopN(Resolution  *Resolution_P,
                              Operation   *Operation_P,
                              DofData     *DofData_P0,
                              GeoData     *GeoData_P0,
                              Resolution  *Resolution2_P,
                              DofData     *DofData2_P0,
                              int         *Flag_Break)
{
  int       NbrMaxIteration, RelaxationFactorIndex;
  int       Num_Iteration, NbrPostOps, SavePostOpDataIndex, NbrSolutions;
  double    Save_Iteration, MaxErrorRatio = 0.;
  List_T    *ILsystems_L, *LEPostOp_L, *xPrevious_L;
  List_T    *LEPostOpNames_L, *PostOpSolutionPrevious_L;
  List_T    *SavePostOpData_L;
  gVector   *xPrevious_P, *PostOpResultPrevious_P;
  Value     Value;
  DofData   *DofData_P=NULL;
  IterativeLoopSystem    ILsystem;
  PostOpSolutions        *PostOpSolutions_P;
  Solution               *Solution_P;


  NbrMaxIteration        = Operation_P->Case.IterativeLoop.NbrMaxIteration;
  RelaxationFactorIndex  = Operation_P->Case.IterativeLoop.RelaxationFactorIndex;
  ILsystems_L            = Operation_P->Case.IterativeLoop.IterativeLoopSystems_L;
  LEPostOp_L             = Operation_P->Case.IterativeLoop.IterativeLoopPOs_L;

  if (ILsystems_L == NULL)
    ILsystems_L = List_Create(1,1,sizeof(TimeLoopAdaptiveSystem));
  if (LEPostOp_L == NULL)
    LEPostOp_L = List_Create(1,1,sizeof(LoopErrorPostOperation));

  xPrevious_L = List_Create(4,4,sizeof(gVector));
  PostOpSolutionPrevious_L = List_Create(4,4,sizeof(gVector));


  // Just some checks and initialization
  // -----------------------------------

  // Check if initial solutions for all specified systems are available
  for(int i = 0; i < List_Nbr(ILsystems_L); i++){
    List_Read(ILsystems_L, i, &ILsystem);
    DefineSystem *sys = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
                                                    ILsystem.SystemIndex);
    DofData_P = DofData_P0 + ILsystem.SystemIndex;

    if(!List_Nbr(DofData_P->Solutions))
      Message::Error("No initial solution for system %s", sys->Name);

    gVector xPrevious_S;
    LinAlg_CreateVector(&xPrevious_S, &DofData_P->Solver, DofData_P->NbrDof);
    List_Add(xPrevious_L, &xPrevious_S);
  }

  // Initializing stuff for PostOperations
  SavePostOpData_L = Current.PostOpData_L;
  Current.PostOpData_L = NULL;
  SavePostOpDataIndex = Current.PostOpDataIndex;
  Current.PostOpDataIndex = -1;
  NbrPostOps = List_Nbr(LEPostOp_L);
  LEPostOpNames_L = List_Create(NbrPostOps,1,sizeof(char *));
  InitLEPostOperation(Resolution_P, DofData_P0, GeoData_P0, LEPostOp_L,
                      LEPostOpNames_L, PostOpSolutionPrevious_L);


  // Iterative loop
  // ----------------
  Save_Iteration = Current.Iteration ;

  for (Num_Iteration = 1; Num_Iteration <= NbrMaxIteration; Num_Iteration++) {

    Flag_IterativeLoopN = 1;

    if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount()) break;

    Current.Iteration = (double)Num_Iteration;
    Get_ValueOfExpressionByIndex(RelaxationFactorIndex, NULL, 0., 0., 0., &Value);
    Current.RelaxationFactor = Value.Val[0];

    // Store the current solutions in xPrevious_L
    for(int i = 0; i < List_Nbr(ILsystems_L); i++){
      List_Read(ILsystems_L, i, &ILsystem);
      DofData_P = DofData_P0 + ILsystem.SystemIndex;
      xPrevious_P = (gVector*)List_Pointer(xPrevious_L, i);
      LinAlg_CopyVector(&DofData_P->CurrentSolution->x, xPrevious_P);
    }

    // Store the current PostOperation results in PostOpSolutionPrevious_L
    if (NbrPostOps != List_Nbr(Current.PostOpData_L))
        Message::Error("Current.PostOpData_L list is not up to date");
    for(int i = 0; i < NbrPostOps; i++){
      PostOpSolutions_P = (struct PostOpSolutions*)
                                 List_Pointer(Current.PostOpData_L, i);
      NbrSolutions = List_Nbr(PostOpSolutions_P->Solutions_L);
      if (!NbrSolutions)
        Message::Error("No initial result for PostOperation %s",
                       PostOpSolutions_P->PostOperation_P->Name);
      Solution_P = (struct Solution*)List_Pointer(PostOpSolutions_P->Solutions_L,
                                                  NbrSolutions-1);
      PostOpResultPrevious_P = (gVector*)List_Pointer(PostOpSolutionPrevious_L, i);
      LinAlg_AssembleVector(&Solution_P->x);
      LinAlg_CopyVector(&Solution_P->x, PostOpResultPrevious_P);
    }

    Message::Info("IterativeLoopN: Non linear iteration %d (Relaxation = %g)",
                  (int)Current.Iteration, Current.RelaxationFactor) ;

    Treatment_Operation(Resolution_P, Operation_P->Case.IterativeLoop.Operation,
                        DofData_P0, GeoData_P0, Resolution2_P, DofData2_P0) ;
    if(*Flag_Break) {
      *Flag_Break = 0;
      Message::Info("Flag Break detected. Aborting IterativeLoop");
      break;
    }
    else if (Message::GetLastPETScError()) {
      Message::Warning("No valid solution found (PETSc-Error: %d)! "
                       "Aborting IterativeLoopN", Message::GetLastPETScError());
      break;
    }
    else if (NbrPostOps) // Execute the PostOperations if necessary
      Operation_PostOperation(Resolution_P, DofData_P0, GeoData_P0, LEPostOpNames_L);


    // Check if converged
    MaxErrorRatio = CalcMaxErrorRatio(Resolution_P,DofData_P0, ILsystems_L, LEPostOp_L,
                                      xPrevious_L, PostOpSolutionPrevious_L);
    if (MaxErrorRatio != MaxErrorRatio) { // If ErrorRatio = NaN => There was no valid solution!
      Flag_IterativeLoopConverged = 0;
      break;
    }

    Message::Info("IterativeLoopN: Largest error ratio: %.3g  (after %d iteration%s)",
                  MaxErrorRatio, (int)Current.Iteration,
                  ((int)Current.Iteration == 1) ? "" : "s");
    if(Message::GetProgressMeterStep() > 0 && Message::GetProgressMeterStep() < 100)
      Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                   "/IterativeLoop/ILmaxErrorRatio",
                                     std::vector<double>(1, MaxErrorRatio));
    if (MaxErrorRatio < 1.) {
      Message::Info(3, "IterativeLoopN converged (%d iterations, error ratio %g)",
                    (int)Current.Iteration, MaxErrorRatio);
      break;
    }
  }

  if (Num_Iteration > NbrMaxIteration) {
    Num_Iteration = NbrMaxIteration;
    Flag_IterativeLoopConverged = 0;
    Message::Info(3, "IterativeLoopN did NOT converge (%d iterations, error ratio %g)",
                  (int)Current.Iteration, MaxErrorRatio);
  }
  Current.Iteration = Save_Iteration ;
  Flag_IterativeLoopN = 0;


  // Finally destroy vectors and delete Lists
  // ----------------------------------------

  for(int i = 0; i < List_Nbr(ILsystems_L); i++)
    LinAlg_DestroyVector((gVector*)List_Pointer(xPrevious_L, i));
  List_Delete(xPrevious_L);

  ClearLEPostOperation(Resolution_P, DofData_P0, GeoData_P0, LEPostOp_L,
                            LEPostOpNames_L, PostOpSolutionPrevious_L, false);

  Current.PostOpData_L = SavePostOpData_L;
  Current.PostOpDataIndex = SavePostOpDataIndex;
}
