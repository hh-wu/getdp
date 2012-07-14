// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.
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
extern int    Flag_TimeLoopAdaptive_PETSc_Error;



/* ------------------------------------------------------------------------ */
/*  C a l M a x E r r o r R a t i o                                         */
/* ------------------------------------------------------------------------ */

double CalcMaxErrorRatio(Resolution  *Resolution_P,
                        DofData     *DofData_P0,
                        List_T      *ILsystems,
                        List_T      *xPrevious_L)
{
  DofData      *DofData_P;
  DefineSystem *DefineSystem_P;
  IterativeLoopSystem ILsystem;
  gVector      *xPrevious_P, *xCurrent_P;       // new and last solution vector
  gVector      xError;                          // Local Truncation Error vector
  double       ErrorRatio, MaxErrorRatio;


  MaxErrorRatio = 0.;

  // Loop through all given systems
  for(int i = 0; i < List_Nbr(ILsystems); i++){
    List_Read(ILsystems, i, &ILsystem);
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

    if (Message::GetVerbosity() >= 5) {
      Message::Info("IterativeLoopN: %s of %s error ratio from system %s:  %.3g",
          ILsystem.NormTypeString, ILsystem.NormOfString, DefineSystem_P->Name,
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
                              int         *Flag_Break)
{
  int       NbrMaxIteration, RelaxationFactorIndex;
  int       Num_Iteration;
  double    Save_Iteration, MaxErrorRatio;
  List_T    *ILsystems, *xPrevious_L;
  gVector   *xPrevious_P;
  Value     Value;
  DofData   *DofData_P;
  TimeLoopAdaptiveSystem ILsystem;


  NbrMaxIteration        = Operation_P->Case.IterativeLoop.NbrMaxIteration;
  RelaxationFactorIndex  = Operation_P->Case.IterativeLoop.RelaxationFactorIndex;
  ILsystems              = Operation_P->Case.IterativeLoop.IterativeLoopSystems;

  xPrevious_L = List_Create(4,4,sizeof(gVector));


  // Just some checks and initialization
  // -----------------------------------

  // Check if initial solutions for all specified systems are available
  for(int i = 0; i < List_Nbr(ILsystems); i++){
    List_Read(ILsystems, i, &ILsystem);
    DefineSystem *sys = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
                                                    ILsystem.SystemIndex);
    DofData_P = DofData_P0 + ILsystem.SystemIndex;

    if(!List_Nbr(DofData_P->Solutions))
      Message::Error("No initial solution for system %s", sys->Name);

    gVector xPrevious_S;
    LinAlg_CreateVector(&xPrevious_S, &DofData_P->Solver, DofData_P->NbrDof);
    List_Add(xPrevious_L, &xPrevious_S);
  }


  // Iterative loop
  // ----------------
  Save_Iteration = Current.Iteration ;

  for (Num_Iteration = 1; Num_Iteration <= NbrMaxIteration; Num_Iteration++) {

    Flag_IterativeLoopN = 1;

    if(Message::GetOnelabAction() == "stop") break;

    Current.Iteration = (double)Num_Iteration;
    Get_ValueOfExpressionByIndex(RelaxationFactorIndex, NULL, 0., 0., 0., &Value);
    Current.RelaxationFactor = Value.Val[0];

    // Store the current solutions in xPrevious_L
    for(int i = 0; i < List_Nbr(ILsystems); i++){
      List_Read(ILsystems, i, &ILsystem);
      DofData_P = DofData_P0 + ILsystem.SystemIndex;
      xPrevious_P = (gVector*)List_Pointer(xPrevious_L, i);
      LinAlg_CopyVector(&DofData_P->CurrentSolution->x, xPrevious_P);
    }

    Message::Info("IterativeLoopN: Non linear iteration %d (Relaxation = %g)",
                  (int)Current.Iteration, Current.RelaxationFactor) ;

    Treatment_Operation(Resolution_P, Operation_P->Case.IterativeLoop.Operation,
                        DofData_P0, GeoData_P0, NULL, NULL) ;
    if(*Flag_Break) {
      *Flag_Break = 0;
      Message::Info("Flag Break detected. Aborting IterativeLoop");
      break;
    }
#if defined(HAVE_PETSC)
    else if (Flag_TimeLoopAdaptive_PETSc_Error) {
      Message::Warning("No valid solution found (PETSc-Error: %d)!",
                    Flag_TimeLoopAdaptive_PETSc_Error);
      break;
    }
#endif
    // Check if converged
    MaxErrorRatio = CalcMaxErrorRatio(Resolution_P,DofData_P0, ILsystems, xPrevious_L);
    if (MaxErrorRatio != MaxErrorRatio) {      // If ErrorRatio = NaN => There was no valid solution!
      Flag_IterativeLoopConverged = 0;
      break;
    }


    Message::Info("IterativeLoopN: Largest error ratio: %.3g  (after %d iteration%s)", MaxErrorRatio,
                  (int)Current.Iteration, ((int)Current.Iteration==1)?"":"s");
    Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
        "/IterativeLoop/ILmaxErrorRatio", MaxErrorRatio);
    if (MaxErrorRatio < 1.) {
      Message::Info("IterativeLoopN: Converged after %d iteration%s",
          (int)Current.Iteration, ((int)Current.Iteration==1)?"":"s");
      break;
    }
  }

  if (Num_Iteration > NbrMaxIteration) {
    Num_Iteration = NbrMaxIteration;
    Flag_IterativeLoopConverged = 0;
    Message::Info("IterativeLoopN: Max iteration count reached! No convergence!");
  }
  Current.Iteration = Save_Iteration ;
  Flag_IterativeLoopN = 0;


  // Finally destroy vectors and delete Lists
  // ----------------------------------------

  for(int i = 0; i < List_Nbr(ILsystems); i++)
    LinAlg_DestroyVector((gVector*)List_Pointer(xPrevious_L, i));
  List_Delete(xPrevious_L);

}

