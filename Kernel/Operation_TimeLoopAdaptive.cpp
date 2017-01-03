// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Michael Asam

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
#include "Legendre.h"


#if !defined(F77NAME)
#define F77NAME(x) (x##_)
#endif

#if defined(HAVE_LAPACK)
extern "C" {
  void F77NAME(dgesv)(int *N, int *nrhs, double *A, int *lda, int *ipiv,
                      double *b, int *ldb, int *info);
}
#endif


extern struct CurrentData Current;
extern int Flag_IterativeLoopConverged;
extern int Flag_RESTART;


/* ------------------------------------------------------------------------ */
/*  C a l c I n t e g r a t i o n C o e f f i c i e n t s                   */
/* ------------------------------------------------------------------------ */

#if !defined(HAVE_LAPACK)

void CalcIntegrationCoefficients(Resolution  *Resolution_P,
                                 DofData     *DofData_P0,
                                 List_T      *TLAsystems_L,
                                 List_T      *TLAPostOp_L,
                                 int         Order)
{
  Message::Error("TimeLoopAdaptive requires Lapack");
}

#else

void CalcIntegrationCoefficients(Resolution  *Resolution_P,
                                 DofData     *DofData_P0,
                                 List_T      *TLAsystems_L,
                                 List_T      *TLAPostOp_L,
                                 int         Order)
{
  DefineSystem           *System_P=NULL;
  DofData                *DofData_P=NULL;
  Solution               *Solution_P;
  TimeLoopAdaptiveSystem TLAsystem;
  List_T                 *Solutions_L=NULL;
  PostOpSolutions        *PostOpSolutions_P0;
  int                    j, NbrOfRows, NbrOfSolutions=0;
  int                    Info, Pivots[7], NbrOfRightHandSides=1;
  double                 t[8], temp;
  double                 A[49], b[7];
  bool                   RecomputeTimeStep;


  // Initialization
  for (int i=0; i<7; i++)
    Current.aPredCoeff[i] = 0.0;
  for (int i=0; i<6; i++)
    Current.aCorrCoeff[i] = 0.0;
  Current.bCorrCoeff = 0.0;
  Current.PredErrorConst = 0.0;
  Current.CorrErrorConst = 0.0;

  if (Order < 1 || Order > 6)
    Message::Error("Order has to be in the range 1 .. 6");

  // First get the past time points
  // ------------------------------

  if (List_Nbr(TLAsystems_L)==0 && List_Nbr(TLAPostOp_L)==0) {
    Message::Error("Neither systems nor PostOperations are specified "
                       "for TimeLoopAdaptive");
  }
  if (List_Nbr(TLAsystems_L)) {
    List_Read(TLAsystems_L, 0, &TLAsystem);
    System_P = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
                                           TLAsystem.SystemIndex);
    DofData_P = DofData_P0 + TLAsystem.SystemIndex;
    Solutions_L = DofData_P->Solutions;
    NbrOfSolutions = List_Nbr(Solutions_L);
    if (!NbrOfSolutions)
      Message::Error("No initial solution for system %s", System_P->Name);
    if (NbrOfSolutions <= Order && Order > 1)
        Message::Error("Too few past solutions for system %s", System_P->Name);
  }
  if (List_Nbr(TLAPostOp_L)) {
    PostOpSolutions_P0 = (PostOpSolutions *)List_Pointer(Current.PostOpData_L, 0);
    Solutions_L = PostOpSolutions_P0->Solutions_L;
    NbrOfSolutions = List_Nbr(Solutions_L);
    if (!NbrOfSolutions)
      Message::Error("No initial PostOperations");
    if (NbrOfSolutions <= Order && Order > 1)
        Message::Error("Too few past PostOperations results");
  }

  // Set the predictor's and corrector's order
  // -----------------------------------------

  Solution_P = (struct Solution*)List_Pointer(Solutions_L, NbrOfSolutions-1);

  // Check if we recompute actual TimeStep
  RecomputeTimeStep = (Solution_P->TimeStep == (int)Current.TimeStep);

  if (NbrOfSolutions < (2 + (RecomputeTimeStep ? 1 : 0))){
    Current.PredOrder = 0;  // For 1st TimeStep just copy the initial solution
    Current.CorrOrder = 1;
  }
  else{
    Current.PredOrder = Order;
    Current.CorrOrder = Order;
  }

  // Time values
  // t_n+1 -> t[0]
  // t_n   -> t[1]
  // t_n-1 -> t[2]
  // ...
  // t_n-k -> t[k+1]    k=Order

  t[0] = Current.Time;
  for(int i=1; i <= Current.PredOrder+1; i++) {
    j = RecomputeTimeStep ? i+1 : i;
    Solution_P = (struct Solution*)List_Pointer(Solutions_L, NbrOfSolutions-j);
    t[i] = Solution_P->Time;
  }

  // Calculation of predictor integration constants
  // ----------------------------------------------

  /* The new solution is predicted by extrapolating the past solutions
   * by a polynom of order "PredOrder". The polynom coefficients
   * are calculated by solving a matrix equation A*coeff=b for the
   * exactness constraints.
   * E.g. for PredOder=3 we have:
   *
   *  _                                        _     _   _     _         _
   * | 1        1          1          1         |   | a_0 |   | 1         |
   * | (t_n)^1  (t_n-1)^1  (t_n-2)^1  (t_n-3)^1 |   | a_1 |   | (t_n+1)^1 |
   * | (t_n)^2  (t_n-1)^2  (t_n-2)^2  (t_n-3)^2 | * | a_2 | = | (t_n+1)^2 |
   * | (t_n)^3  (t_n-1)^3  (t_n-2)^3  (t_n-3)^3 |   | a_3 |   | (t_n+1)^3 |
   * |_                                        _|   |_   _|   |_         _|
   *
   */

  if (Current.PredOrder == 0)
    Current.aPredCoeff[0] = 1.0;
  else {
    NbrOfRows = Current.PredOrder + 1;
    for (int c=0; c <= Current.PredOrder; c++) {
      A[0 + c*NbrOfRows] = 1.0;
      for (int r=1; r <= Current.PredOrder; r++)
        A[r + c*NbrOfRows] = pow(t[c+1],r);
    }

    b[0] = 1.0;
    for (int r=1; r <= Current.PredOrder; r++)
      b[r] = pow(t[0],r);

    F77NAME(dgesv)(&NbrOfRows, &NbrOfRightHandSides, A, &NbrOfRows, Pivots, b, &NbrOfRows, &Info);
    if (Info != 0)
      Message::Error("Can't calculate predictor coefficients for TimeLoopAdaptive");

    for (int i=0; i<=Current.PredOrder; i++)
      Current.aPredCoeff[i] = b[i];
  }

  // Calculation of corrector integration constants
  // ----------------------------------------------

  /*
   * The coefficients for the Gear method (BDF) are also
   * calculated by solving a matrix equation A*coeff=b for the
   * exactness constraints.
   * E.g. for CorrOder=3 we have:
   *
   *  _                                                        _     _    _     _         _
   * | 1        1          1          0                         |   | a_0  |   | 1         |
   * | (t_n)^1  (t_n-1)^1  (t_n-2)^1  1*(t_n+1 - t_n)           |   | a_1  |   | (t_n+1)^1 |
   * | (t_n)^2  (t_n-1)^2  (t_n-2)^2  2*(t_n+1 - t_n)*(t_n+1)^1 | * | a_2  | = | (t_n+1)^2 |
   * | (t_n)^3  (t_n-1)^3  (t_n-2)^3  3*(t_n+1 - t_n)*(t_n+1)^2 |   | b_-1 |   | (t_n+1)^3 |
   * |_                                                        _|   |_    _|   |_         _|
   *
   */

  if (Current.TypeTime == TIME_GEAR) {
    NbrOfRows = Current.CorrOrder + 1;
    for (int c=0; c < Current.CorrOrder; c++) {
      A[0 + c*NbrOfRows] = 1.0;
      for (int r=1; r <= Current.CorrOrder; r++)
        A[r + c*NbrOfRows] = pow(t[c+1],r);
    }
    A[0 + (int)Current.CorrOrder*NbrOfRows] = 0.0;
    A[1 + (int)Current.CorrOrder*NbrOfRows] = t[0]-t[1];
    for (int r=2; r <= Current.CorrOrder; r++)
      A[r + (int)Current.CorrOrder*NbrOfRows] = r*pow(t[0],r-1)*(t[0]-t[1]);

    b[0] = 1.0;
    for (int r=1; r <= Current.CorrOrder; r++)
      b[r] = pow(t[0],r);

    F77NAME(dgesv)(&NbrOfRows, &NbrOfRightHandSides, A, &NbrOfRows, Pivots, b, &NbrOfRows, &Info);
    if (Info != 0)
      Message::Error("Can't calculate corrector coefficients for TimeLoopAdaptive");

    for (int i=0; i<Current.CorrOrder; i++)
      Current.aCorrCoeff[i] = b[i];
    Current.bCorrCoeff =  b[(int)Current.CorrOrder];
  }

  // Calculation of predictor error constant
  // ----------------------------------------------
  for (int i=1; i<=Current.PredOrder; i++)
    Current.PredErrorConst += Current.aPredCoeff[i] *
                              pow(t[1]-t[1+i], Current.PredOrder+1);
  Current.PredErrorConst *= pow(-1, Current.PredOrder) /
                            pow(t[0]-t[1], Current.PredOrder+1);
  Current.PredErrorConst += 1;
  Current.PredErrorConst /= Factorial(Current.PredOrder + 1);


  // Calculation of corrector error constant
  // ----------------------------------------------
  switch (Current.TypeTime) {
    case TIME_THETA:
      if (Current.CorrOrder == 1)
        Current.CorrErrorConst = -0.5;
      else if (Current.CorrOrder == 2)
        Current.CorrErrorConst = -1./12.;
      else
        Message::Error("Order %d not allowed for Theta scheme.",
                       Current.CorrOrder);
      break;

    case TIME_GEAR:
      Current.CorrErrorConst = 1 / Factorial(Current.CorrOrder + 1);

      temp = 0.0;
      for (int i=1; i<Current.CorrOrder; i++)
        temp += Current.aCorrCoeff[i] * pow(t[1]-t[1+i], Current.CorrOrder+1);
      temp *= pow(-1, Current.CorrOrder) / pow(t[0]-t[1], Current.CorrOrder+1);
      temp /= Factorial(Current.CorrOrder + 1);
      Current.CorrErrorConst += temp;

      Current.CorrErrorConst -= Current.bCorrCoeff /
                                Factorial(Current.CorrOrder);
      break;

    default:
      Message::Error("Unknown integration scheme for TimeLoopAdaptive");
      break;
  }
}
#endif


/* ------------------------------------------------------------------------ */
/*  P r e d i c t o r                                                       */
/* ------------------------------------------------------------------------ */


void Predictor(Resolution  *Resolution_P,
               DofData     *DofData_P0,
               List_T      *TLAsystems_L,
               List_T      *TLAPostOp_L,
               int         Order,
               List_T      *xPredicted_L,
               List_T      *PostOpSolPredicted_L)
{
  DefineSystem           *System_P;
  DofData                *DofData_P;
  PostOpSolutions        *PostOpSolutions_P;
  Solution               *Solution_P, *PastSolution_P, Solution_S;
  TimeLoopAdaptiveSystem TLAsystem;
  gVector                *xPredicted_P;
  gVector                *x_NminusJ_P;              // past solution vector x_N-i
  gVector                *PostOpSolPredicted_P;
  int                    TimeStep, NbrSolutions, PostOpSolLength;


  // Loop through all given systems
  for(int i = 0; i < List_Nbr(TLAsystems_L); i++){
    List_Read(TLAsystems_L, i, &TLAsystem);
    System_P = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
                                      TLAsystem.SystemIndex);
    DofData_P = DofData_P0 + TLAsystem.SystemIndex;

    if (!List_Nbr(DofData_P->Solutions))
      Message::Error("No initial solution for system %s", System_P->Name);

    Solution_P = (struct Solution*)
      List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1);

    TimeStep = (int)Current.TimeStep;
    if (Solution_P->TimeStep != TimeStep) {     // if we compute a new time step
      Solution_S.TimeStep = TimeStep ;
      Solution_S.Time = Current.Time ;
      Solution_S.TimeImag = Current.TimeImag ;
      Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
      Solution_S.SolutionExist = 1 ;
      LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof);

      List_Add(DofData_P->Solutions, &Solution_S);
      DofData_P->CurrentSolution = (struct Solution*)
        List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
      Solution_P = DofData_P->CurrentSolution;
    }
    else {
      // fix time values if we recompute the same step (with different time)
      Solution_P->Time = Current.Time ;
      Solution_P->TimeImag = Current.TimeImag ;
      Free(Solution_P->TimeFunctionValues);
      Solution_P->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
    }

    NbrSolutions = List_Nbr(DofData_P->Solutions);
    if(NbrSolutions < Current.PredOrder + 2)
      Message::Error("Too few past solutions for system %s", System_P->Name);

    LinAlg_ZeroVector(&Solution_P->x);
    for (int j=0; j<=Current.PredOrder; j++) {
      PastSolution_P = (struct Solution*)List_Pointer(DofData_P->Solutions,
                                                      NbrSolutions-2-j);
      if (!PastSolution_P->SolutionExist)
        Message::Error("Too few past solutions for system %s", System_P->Name);

      x_NminusJ_P = &PastSolution_P->x;
      LinAlg_AddVectorProdVectorDouble(&Solution_P->x, x_NminusJ_P,
                                       Current.aPredCoeff[j], &Solution_P->x);
    }

    xPredicted_P = (gVector*)List_Pointer(xPredicted_L, i);
    LinAlg_CopyVector(&Solution_P->x, xPredicted_P);
  }

  // Loop through all specified PostOperations
  if (List_Nbr(TLAPostOp_L) != List_Nbr(Current.PostOpData_L))
    Message::Error("Current.PostOpData_L list is not up to date");
  for(int i = 0; i < List_Nbr(TLAPostOp_L); i++){

    PostOpSolutions_P = (struct PostOpSolutions*)
                           List_Pointer(Current.PostOpData_L, i);
    NbrSolutions = List_Nbr(PostOpSolutions_P->Solutions_L);
    if (!NbrSolutions)
      Message::Error("No initial result for PostOperation %s",
                     PostOpSolutions_P->PostOperation_P->Name);

    Solution_P = (struct Solution*)List_Pointer(PostOpSolutions_P->Solutions_L,
                                                NbrSolutions-1);

    TimeStep = (int)Current.TimeStep;
    if (Solution_P->TimeStep != TimeStep) {     // if we compute a new time step
      Solution_S.TimeStep = TimeStep ;
      Solution_S.Time = Current.Time ;
      Solution_S.TimeImag = Current.TimeImag ;
      Solution_S.SolutionExist = 1 ;
      Solution_S.TimeFunctionValues = NULL;
      LinAlg_GetVectorSize(&Solution_P->x, &PostOpSolLength);
      LinAlg_CreateVector(&Solution_S.x, &DofData_P0->Solver, PostOpSolLength);

      List_Add(PostOpSolutions_P->Solutions_L, &Solution_S);
      Solution_P = (struct Solution*)
                   List_Pointer(PostOpSolutions_P->Solutions_L,
                                List_Nbr(PostOpSolutions_P->Solutions_L)-1);
    }
    else {
      // fix time values if we recompute the same step (with different time)
      Solution_P->Time = Current.Time ;
      Solution_P->TimeImag = Current.TimeImag ;
    }

    NbrSolutions = List_Nbr(PostOpSolutions_P->Solutions_L);
    if(NbrSolutions < Current.PredOrder + 2)
      Message::Error("Too few past results for PostOperation %s",
                     PostOpSolutions_P->PostOperation_P->Name);

    PostOpSolPredicted_P = (gVector*)List_Pointer(PostOpSolPredicted_L, i);
    LinAlg_ZeroVector(PostOpSolPredicted_P);
    for (int j=0; j<=Current.PredOrder; j++) {
      PastSolution_P = (struct Solution*)List_Pointer(PostOpSolutions_P->Solutions_L,
                                                      NbrSolutions-2-j);
      if (!PastSolution_P->SolutionExist)
        Message::Error("Too few past results for PostOperation %s",
                             PostOpSolutions_P->PostOperation_P->Name);
      x_NminusJ_P = &PastSolution_P->x;
      LinAlg_AddVectorProdVectorDouble(PostOpSolPredicted_P, x_NminusJ_P,
                                       Current.aPredCoeff[j], PostOpSolPredicted_P);
    }
  }
}


/* ------------------------------------------------------------------------ */
/*  C a l M a x L T E r a t i o                                             */
/* ------------------------------------------------------------------------ */

double CalcMaxLTEratio(Resolution  *Resolution_P,
		       DofData     *DofData_P0,
		       List_T      *TLAsystems_L,
		       List_T      *TLAPostOp_L,
		       int         Order,
		       List_T      *xPredicted_L,
		       List_T      *PostOpSolPredicted_L)
{
  DefineSystem           *DefineSystem_P;
  DofData                *DofData_P;
  PostOpSolutions        *PostOpSolutions_P;
  TimeLoopAdaptiveSystem TLAsystem;
  LoopErrorPostOperation TLAPostOp;
  Solution               *Solution_P;
  gVector                *xPredictor_P, *xCorrector_P;          // predicted and actual solution vector
  gVector                xLTE;                                  // Local Truncation Error vector
  gVector                *PostOpSolPred_P, *PostOpSolCorr_P;    // predicted and actual solution vector
  gVector                PostOpSolLTE;                          // Local Truncation Error vector
  double                 pec, cec;                              // predictor and corrector error constants
  double                 ErrorRatio, MaxErrorRatio;
  int                    NbrSolutions, PostOpSolLength;


  MaxErrorRatio = 0.;

  // Determine error constants
  pec = Current.PredErrorConst;     // Predictor error constant
  cec = Current.CorrErrorConst;     // Corrector error constant

  // Loop through all given systems
  for(int i = 0; i < List_Nbr(TLAsystems_L); i++) {
    List_Read(TLAsystems_L, i, &TLAsystem);
    DefineSystem_P = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
                                                 TLAsystem.SystemIndex);
    DofData_P = DofData_P0 + TLAsystem.SystemIndex;

    NbrSolutions = List_Nbr(DofData_P->Solutions);
    if(NbrSolutions < Order + 1)
      Message::Error("Too few past solutions for system %s", DefineSystem_P->Name);

    xPredictor_P = (gVector*)List_Pointer(xPredicted_L, i);
    xCorrector_P = &((struct Solution*)List_Pointer(DofData_P->Solutions,
                                                    NbrSolutions-1))->x;

    // Vector of all local truncation errors
    // xLTE = cec / (pec - cec) * (xCorrector - xPredictor)
    LinAlg_CreateVector(&xLTE, &DofData_P->Solver, DofData_P->NbrDof);
    LinAlg_CopyVector(xCorrector_P, &xLTE);
    LinAlg_SubVectorVector(&xLTE, xPredictor_P, &xLTE);
    LinAlg_ProdVectorDouble(&xLTE, cec / (pec - cec), &xLTE);

    Cal_SolutionErrorRatio(&xLTE, xCorrector_P,
        TLAsystem.SystemLTEreltol, TLAsystem.SystemLTEabstol,
        TLAsystem.NormType, &ErrorRatio);

    LinAlg_DestroyVector(&xLTE);

    if (ErrorRatio != ErrorRatio) {     // If ErrorRatio = NaN => There was no valid solution!
      MaxErrorRatio = ErrorRatio;
      break;
    }

    if (ErrorRatio > MaxErrorRatio)
      MaxErrorRatio = ErrorRatio;

    if(Message::GetVerbosity() > 5)
    {
      Message::Info("LTE %s of error ratio from system %s:  %.3g",
          TLAsystem.NormTypeString, DefineSystem_P->Name, ErrorRatio);
    }
  }

  // Loop through all given PostOperations
  if (List_Nbr(TLAPostOp_L) != List_Nbr(Current.PostOpData_L))
      Message::Error("Current PostOpData_L list is not up to date");
  for(int i = 0; i < List_Nbr(TLAPostOp_L); i++) {
    List_Read(TLAPostOp_L, i, &TLAPostOp);
    PostOpSolutions_P = (struct PostOpSolutions*)
                               List_Pointer(Current.PostOpData_L, i);
    NbrSolutions = List_Nbr(PostOpSolutions_P->Solutions_L);
    if(NbrSolutions < Order + 1)
      Message::Error("Too few past solutions for PostOperations %s",
                     PostOpSolutions_P->PostOperation_P->Name);
    Solution_P = (struct Solution*)
                    List_Pointer(PostOpSolutions_P->Solutions_L, NbrSolutions-1);

    PostOpSolPred_P = (gVector*)List_Pointer(PostOpSolPredicted_L, i);
    PostOpSolCorr_P = &Solution_P->x;

    // Vector of all local truncation errors
    // xLTE = cec / (pec - cec) * (xCorrector - xPredictor)
    LinAlg_GetVectorSize(PostOpSolCorr_P, &PostOpSolLength);
    LinAlg_CreateVector(&PostOpSolLTE, &DofData_P0->Solver, PostOpSolLength);
    LinAlg_CopyVector(PostOpSolCorr_P, &PostOpSolLTE);
    LinAlg_SubVectorVector(&PostOpSolLTE, PostOpSolPred_P, &PostOpSolLTE);
    LinAlg_ProdVectorDouble(&PostOpSolLTE, cec / (pec - cec), &PostOpSolLTE);

    Cal_SolutionErrorRatio(&PostOpSolLTE, PostOpSolCorr_P,
                           TLAPostOp.PostOperationReltol, TLAPostOp.PostOperationAbstol,
                           TLAPostOp.NormType, &ErrorRatio);

    LinAlg_DestroyVector(&PostOpSolLTE);

    if (ErrorRatio != ErrorRatio) {     // If ErrorRatio = NaN => There was no valid solution!
      MaxErrorRatio = ErrorRatio;
      break;
    }

    if (ErrorRatio > MaxErrorRatio)
      MaxErrorRatio = ErrorRatio;

    if(Message::GetVerbosity() > 5)
    {
      Message::Info("LTE %s of error ratio from PostOperation %s:  %.3g",
                    TLAPostOp.NormTypeString,
                    PostOpSolutions_P->PostOperation_P->Name, ErrorRatio);
    }
  }

  return MaxErrorRatio;
}


/* ------------------------------------------------------------------------ */
/*  G e t I n t e g r a t i o n S c h e m e                                 */
/* ------------------------------------------------------------------------ */

void GetIntegrationScheme(Operation   *Operation_P,
                          int         *TypeTime,
                          int         *MaxOrder)
{
  if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Euler")) {
    *TypeTime = TIME_THETA;
    *MaxOrder = 1;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Trapezoidal")) {
    *TypeTime = TIME_THETA;
    *MaxOrder = 2;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_2") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_2")) {
    *TypeTime = TIME_GEAR;
    *MaxOrder = 2;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_3") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_3")) {
    *TypeTime = TIME_GEAR;
    *MaxOrder = 3;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_4") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_4")) {
    *TypeTime = TIME_GEAR;
    *MaxOrder = 4;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_5") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_5")) {
    *TypeTime = TIME_GEAR;
    *MaxOrder = 5;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_6") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_6")) {
    *TypeTime = TIME_GEAR;
    *MaxOrder = 6;
  }
  else
    Message::Error("Unknown integration scheme: %s",
                   Operation_P->Case.TimeLoopAdaptive.Scheme);
}



/* ------------------------------------------------------------------------ */
/*  O p e r a t i o n _ T i m e L o o p A d a p t i v e                     */
/* ------------------------------------------------------------------------ */

void Operation_TimeLoopAdaptive(Resolution  *Resolution_P,
                                Operation   *Operation_P,
                                DofData     *DofData_P0,
                                GeoData     *GeoData_P0,
                                int         *Flag_Break)
{
  int    TypeTime=0, MaxOrder=0, Order=0, TLATimeStep;
  int    Try, BreakpointNum, NbrSolutions=0, NbrPostOps;

  double Save_Time, Save_DTime, Save_Theta, maxLTEratio=0, nextBreakpoint;
  double Save_TimeStep, FirstTimePoint, DTimeBeforeBreakpoint=1.;
  bool   TimeStepAccepted=true, DTimeMinAtLastStep, BreakpointListCreated;
  bool   BreakpointAtThisStep, BreakpointAtNextStep;
  double Time0, TimeMax, DTimeInit, DTimeMin, DTimeMax;
  double LTEtarget, DTimeMaxScal, DTimeScal_NotConverged, DTimeScal_PETScError;
  double DTimeScal=1.0;
  List_T *Breakpoints_L, *TLAsystems_L, *LEPostOp_L;
  List_T *LEPostOpNames_L;
  List_T *xPredicted_L, *PostOpSolPredicted_L;
  TimeLoopAdaptiveSystem TLAsystem;
  DofData                *DofData_P=NULL;
  gVector                xPredicted_S;


  // Some default values for constants influencing the time stepping
  LTEtarget              = 0.8;    // target LTE ratio for next step (should be below 1)
  DTimeMaxScal           = 2.0;    // maximum factor for increasing the time step DTime
  DTimeScal_NotConverged = 0.25;   // step size scaling in case of a not converged iterative loop
  DTimeScal_PETScError   = 0.25;   // step size scaling in case of a PETSc error

  // Override default values if they are provided by the user
  LTEtarget = (Operation_P->Case.TimeLoopAdaptive.LTEtarget < 0) ?
      LTEtarget : Operation_P->Case.TimeLoopAdaptive.LTEtarget;
  DTimeMaxScal = (Operation_P->Case.TimeLoopAdaptive.DTimeMaxScal < 0 ) ?
      DTimeMaxScal : Operation_P->Case.TimeLoopAdaptive.DTimeMaxScal;
  DTimeScal_NotConverged =
      (Operation_P->Case.TimeLoopAdaptive.DTimeScal_NotConverged < 0) ?
      DTimeScal_NotConverged :
      Operation_P->Case.TimeLoopAdaptive.DTimeScal_NotConverged;
  DTimeScal_PETScError =
      (Operation_P->Case.TimeLoopAdaptive.DTimeScal_NotConverged < 0) ?
      DTimeScal_PETScError :
      Operation_P->Case.TimeLoopAdaptive.DTimeScal_NotConverged;

  Time0    = Operation_P->Case.TimeLoopAdaptive.Time0;
  TimeMax  = Operation_P->Case.TimeLoopAdaptive.TimeMax;
  DTimeInit = Operation_P->Case.TimeLoopAdaptive.DTimeInit;
  DTimeMin = Operation_P->Case.TimeLoopAdaptive.DTimeMin;
  DTimeMax = Operation_P->Case.TimeLoopAdaptive.DTimeMax;
  Breakpoints_L = Operation_P->Case.TimeLoopAdaptive.Breakpoints_L;
  TLAsystems_L = Operation_P->Case.TimeLoopAdaptive.TimeLoopAdaptiveSystems_L;
  LEPostOp_L = Operation_P->Case.TimeLoopAdaptive.TimeLoopAdaptivePOs_L;
  GetIntegrationScheme(Operation_P, &TypeTime, &MaxOrder);

  xPredicted_L = List_Create(4,4,sizeof(gVector));
  PostOpSolPredicted_L = List_Create(4,4,sizeof(gVector));


  // Just some checks
  // ----------------

  if (TLAsystems_L == NULL)
    TLAsystems_L = List_Create(1,1,sizeof(TimeLoopAdaptiveSystem));
  if (LEPostOp_L == NULL)
    LEPostOp_L = List_Create(1,1,sizeof(LoopErrorPostOperation));


  // Check the timing values
  if (Time0 > TimeMax)
    Message::Error("Time0 > TimeMax");
  if (DTimeInit < DTimeMin)
    Message::Error("DTimeInit < DTimeMin");
  if (DTimeInit > DTimeMax)
    Message::Error("DTimeInit > DTimeMax");
  if (DTimeInit > TimeMax - Time0)
      Message::Error("DTimeInit > (TimeMax - Time0");


  // Initialization before starting the time loop
  // --------------------------------------------

  // Check if initial solutions for all specified systems are available
  // and create vectors for the predicted solutions
  for(int i = 0; i < List_Nbr(TLAsystems_L); i++){
    List_Read(TLAsystems_L, i, &TLAsystem);
    DefineSystem *System_P = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
                                                         TLAsystem.SystemIndex);
    DofData_P = DofData_P0 + TLAsystem.SystemIndex;
    NbrSolutions = List_Nbr(DofData_P->Solutions);

    if(!NbrSolutions)
      Message::Error("No initial solution for system %s", System_P->Name);

    LinAlg_CreateVector(&xPredicted_S, &DofData_P->Solver, DofData_P->NbrDof);
    List_Add(xPredicted_L, &xPredicted_S);
  }

  // Initializing stuff for PostOperations
  NbrPostOps = List_Nbr(LEPostOp_L);
  LEPostOpNames_L = List_Create(NbrPostOps,1,sizeof(char *));
  InitLEPostOperation(Resolution_P, DofData_P0, GeoData_P0, LEPostOp_L,
                      LEPostOpNames_L, PostOpSolPredicted_L);

  // Some other necessary initializations
  if(Flag_RESTART && NbrSolutions > 1)
    Current.DTime = ((struct Solution*)List_Pointer(DofData_P->Solutions,
                                                    NbrSolutions-1))->Time -
                    ((struct Solution*)List_Pointer(DofData_P->Solutions,
                                                    NbrSolutions-2))->Time;
  else
    Current.DTime = DTimeInit;

  if(Flag_RESTART) {
    if (Current.Time < TimeMax)
      Flag_RESTART = 0 ;
  }
  else
    Current.Time = Time0 ;

  Current.TimeStep += 1.0;
  TLATimeStep = 1;
  // Starting with 1st order (Backward Euler corrector)
  Order = 1;
  if (TypeTime == TIME_THETA)
    Current.Theta = 1.0;

  BreakpointListCreated = !Breakpoints_L;
  if (BreakpointListCreated)
    Breakpoints_L = List_Create(1,1,sizeof(double));
  List_Add(Breakpoints_L, &TimeMax);
  List_Sort(Breakpoints_L, fcmp_double);
  BreakpointNum = 0;
  BreakpointAtNextStep = false;
  List_Read(Breakpoints_L, BreakpointNum, &nextBreakpoint);
  FirstTimePoint = Current.Time+Current.DTime;
  Current.Breakpoint = List_ISearchSeq(Breakpoints_L, &FirstTimePoint, fcmp_double);
  if (Current.Breakpoint >= 0) {
    BreakpointAtNextStep = true;
    DTimeBeforeBreakpoint = Current.DTime;
  }
  for (int i = 0; i < List_Nbr(Breakpoints_L); i++){
    List_Read(Breakpoints_L, i, &nextBreakpoint);
    if (nextBreakpoint > (FirstTimePoint + DTimeMin)) {
      BreakpointNum = i;
      break;
    }
  }
  Try = 0;


  // Start the time loop
  // -------------------

  while (Current.Time < TimeMax) {

    if(Message::GetOnelabAction() == "stop") break;

    Message::SetOperatingInTimeLoopAdaptive(true);

    Current.TypeTime  = TypeTime;
    Current.Time     += Current.DTime;
    Save_DTime        = Current.DTime;
    Save_Time         = Current.Time;
    Save_TimeStep     = Current.TimeStep;
    Save_Theta        = Current.Theta;
    Try++;
    BreakpointAtThisStep = BreakpointAtNextStep;

    Message::SetLastPETScError(0);

    Message::Info("Time step %d  Try %d  Time = %.8g s  Stepsize = %.8g s  Integr. Order = %d",
                  (int)Current.TimeStep, Try, Current.Time, Current.DTime, Order);
    if(Message::GetProgressMeterStep() > 0 && Message::GetProgressMeterStep() < 100){
      Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                     "/TimeLoopAdaptive/Time",
                                     std::vector<double>(1, Current.Time));
      Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                     "/TimeLoopAdaptive/DTime",
                                     std::vector<double>(1, Current.DTime));
    }

    // Calculate integration coefficients
    CalcIntegrationCoefficients(Resolution_P, DofData_P0,TLAsystems_L,
                                LEPostOp_L, Order);

    // Execute predictor
    Predictor(Resolution_P, DofData_P0, TLAsystems_L, LEPostOp_L, Order,
              xPredicted_L, PostOpSolPredicted_L);

    if (NbrPostOps && TimeStepAccepted)
      Free_UnusedPOresults();

    // Execute corrector
    // -----------------
    Flag_IterativeLoopConverged = 1;

    Treatment_Operation(Resolution_P,
                        Operation_P->Case.TimeLoopAdaptive.Operation,
                        DofData_P0, GeoData_P0, NULL, NULL) ;
    Current.Time     = Save_Time;
    Current.TypeTime = TypeTime;
    Current.DTime    = Save_DTime;
    Current.TimeStep = Save_TimeStep;
    Current.Theta    = Save_Theta;

    if(*Flag_Break) {
      *Flag_Break = 0;
      Message::Info("Flag Break detected. Aborting TimeLoopAdaptive");
      break;
    }


    // Assessing the current time step and eventually
    // execute the 2nd set of operations
    // ----------------------------------------------
    if (Flag_IterativeLoopConverged != 1){
      TimeStepAccepted = false;
      DTimeScal = DTimeScal_NotConverged;
      Message::Info("Time step %d  Try %d  Time = %.8g s  rejected (IterativeLoop not "
                    "converged)", (int)Current.TimeStep, Try, Current.Time);
    }
    else if (Message::GetLastPETScError()) {
      TimeStepAccepted = false;
      Flag_IterativeLoopConverged = 0;
      DTimeScal = DTimeScal_PETScError;
      Message::Warning("Time step %d  Try %d  Time = %.8g s  rejected:",
                       (int)Current.TimeStep, Try, Current.Time);
      Message::Warning("No valid solution found (PETSc-Error: %d)!",
                       Message::GetLastPETScError());
      Message::SetLastPETScError(0);
    }
    else{
      if (NbrPostOps) // Execute the PostOperations if necessary
        Operation_PostOperation(Resolution_P, DofData_P0, GeoData_P0, LEPostOpNames_L);
      maxLTEratio = CalcMaxLTEratio(Resolution_P, DofData_P0, TLAsystems_L, LEPostOp_L,
                                    Order, xPredicted_L, PostOpSolPredicted_L);
      if (maxLTEratio != maxLTEratio) { // If maxLTEratio = NaN => There was no valid solution!
        TimeStepAccepted = false;
        Flag_IterativeLoopConverged = 0;
        DTimeScal = DTimeScal_PETScError;
        Message::Info("Time step %d  Try %d  Time = %.8g s  rejected: No valid solution "
                      "found (NaN or Inf)!", (int)Current.TimeStep, Try, Current.Time);
      }
      else {
        if(Message::GetVerbosity() > 4)
          Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                       "/TimeLoopAdaptive/LTEmaxErrorRatio",
                                         std::vector<double>(1, maxLTEratio));
        if (maxLTEratio <= 1.0){
          TimeStepAccepted = true;
          Message::Info("Time step %d  Try %d  Time = %.8g s  accepted (max. LTE ratio = %.3g)",
                        (int)Current.TimeStep, Try, Current.Time, maxLTEratio);
        }
        else{
          TimeStepAccepted = false;
          Message::Info("Time step %d  Try %d  Time = %.8g s  rejected (max. LTE ratio = %.3g)",
                        (int)Current.TimeStep, Try, Current.Time, maxLTEratio);
        }
      }
    }

    if (TimeStepAccepted == true) {
      Treatment_Operation(Resolution_P,
                          Operation_P->Case.TimeLoopAdaptive.OperationEnd,
                          DofData_P0, GeoData_P0, NULL, NULL) ;
      Current.Time     = Save_Time;
      Current.TypeTime = TypeTime;
      Current.DTime    = Save_DTime;
      Current.TimeStep = Save_TimeStep;
      Current.Theta    = Save_Theta;
      Current.TimeStep += 1.;
      TLATimeStep      += 1;
      Try = 0;
    }
    else{
      if (BreakpointAtThisStep) {
        BreakpointNum = List_ISearchSeq(Breakpoints_L, &Current.Time, fcmp_double);
        List_Read(Breakpoints_L, BreakpointNum, &nextBreakpoint);
      }
      Current.Time -= Current.DTime;
      BreakpointAtThisStep = (bool) List_Search(Breakpoints_L, &Current.Time, fcmp_double);
    }

    if(*Flag_Break) {
      *Flag_Break = 0;
      Message::Info("Flag Break detected. Aborting TimeLoopAdaptive");
      break;
    }

    // Calculate new time step
    // -----------------------
    DTimeMinAtLastStep = Current.DTime <= DTimeMin;
    if (TimeStepAccepted == false &&
        DTimeMinAtLastStep &&
        Order < 2)
      Message::Error("Time step too small! Simulation aborted!");

    if (Flag_IterativeLoopConverged == 1){
      // Milne's estimate
      if (maxLTEratio <= 0)
        DTimeScal = DTimeMaxScal;
      else {
        if (Current.TimeStep < 1.5 || (NbrPostOps > 0 && TLATimeStep <= 2) )
          // linear adjustment because predictor is of order 0
          DTimeScal = LTEtarget/maxLTEratio;
        else
          DTimeScal = pow(LTEtarget/maxLTEratio, 1./(Order+1.));
      }
      if (DTimeScal >= DTimeMaxScal) {
        if (BreakpointAtThisStep) {
          double dt1, dt2, dtmax;
          dt1 = Current.DTime * DTimeMaxScal;
          dt2 = DTimeBeforeBreakpoint;
          dtmax = (dt1 > dt2) ? dt1 : dt2;
          DTimeScal = dtmax / Current.DTime;
        }
        else
          DTimeScal = DTimeMaxScal;
      }
    }
    Current.DTime *= DTimeScal;

    // Limit the max step size
    if (Current.DTime > DTimeMax)
      Current.DTime = DTimeMax;

    // Check that we do not jump over a breakpoint
    if ((Current.DTime + Current.Time >= nextBreakpoint - DTimeMin) &&
        (BreakpointNum >= 0)){
      DTimeBeforeBreakpoint = Current.DTime;
      Current.DTime = nextBreakpoint - Current.Time;
      BreakpointAtNextStep = true;
      Current.Breakpoint = BreakpointNum;
      if (BreakpointNum < List_Nbr(Breakpoints_L)-1){
        // There are further breakpoints
        BreakpointNum++;
        List_Read(Breakpoints_L, BreakpointNum, &nextBreakpoint);
      }
      else
        //No further breakpoint
        BreakpointNum = -1;
    }
    else {
      BreakpointAtNextStep = false;
      Current.Breakpoint = -1.;
    }

    // Limit the min step size
    if (Current.DTime < DTimeMin)
      Current.DTime = DTimeMin;


    // Adjust order
    // ------------
    if ( Flag_IterativeLoopConverged != 1 ||
         // BreakpointAtThisStep ||
         DTimeMinAtLastStep )
      Order = 1;
    else if ( TLATimeStep > 2 &&
              Current.DTime > DTimeMin &&
              TimeStepAccepted &&
              !BreakpointAtThisStep &&
              Order < MaxOrder )
      Order++;

    if (TypeTime == TIME_THETA)
      switch(Order){
        case 1:
          Current.Theta = 1.0;    // Corrector: Backward Euler
          break;
        case 2:
          Current.Theta = 0.5;    // Corrector: Trapezoidal Method
          break;
        default :
          Message::Error("Order %d not allowed for Theta scheme.", Order);
          break;
      }
  } // while loop

  Message::SetOperatingInTimeLoopAdaptive(false);

  Current.TimeStep -= 1.;       // Correct the time step counter

  // Finally clean up, destroy vectors and delete lists
  // --------------------------------------------------

  for(int i = 0; i < List_Nbr(TLAsystems_L); i++)
    LinAlg_DestroyVector((gVector*)List_Pointer(xPredicted_L, i));
  List_Delete(TLAsystems_L);
  List_Delete(xPredicted_L);

  ClearLEPostOperation(Resolution_P, DofData_P0, GeoData_P0, LEPostOp_L,
                            LEPostOpNames_L, PostOpSolPredicted_L, true);

  if (BreakpointListCreated)
    List_Delete(Breakpoints_L);
}
