// GetDP - Copyright (C) 1997-2012 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.
//
// Contributor(s):
//   Michael Asam

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "GetDPConfig.h"

#if defined(HAVE_GSL)
#include <gsl/gsl_linalg.h>
#endif

#include "ProData.h"
#include "DofData.h"
#include "SolvingOperations.h"
#include "SolvingAnalyse.h"
#include "Message.h"
#include "Legendre.h"

extern struct CurrentData Current;
extern int Flag_IterativeLoopConverged;
extern int Flag_TimeLoopAdaptive;
extern int Flag_TimeLoopAdaptive_PETSc_Error;
extern int Flag_RESTART;

/* ------------------------------------------------------------------------ */
/*  C a l c I n t e g r a t i o n C o e f f i c i e n t s                   */
/* ------------------------------------------------------------------------ */

#if !defined(HAVE_GSL)

void CalcIntegrationCoefficients(Resolution  *Resolution_P,
                                 DofData     *DofData_P0,
                                 List_T      *TimeLoopAdaptiveSystems,
                                 int         Order)
{
  Message::Error("TimeLoopAdaptive requires the GSL");
}

#else

void CalcIntegrationCoefficients(Resolution  *Resolution_P,
                                 DofData     *DofData_P0,
                                 List_T      *TimeLoopAdaptiveSystems,
                                 int         Order)
{
  DefineSystem           *System_P;
  DofData                *DofData_P;
  Solution               *Solution_P;
  TimeLoopAdaptiveSystem TLAsystem;
  int                    NbrOfSolutions, j, s;
  double                 t[8], temp;
  double                 A_data[49], b_data[7];
  gsl_matrix_view        A;
  gsl_vector_view        b;
  gsl_vector             *coeff;
  gsl_permutation        *p;
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

  List_Read(TimeLoopAdaptiveSystems, 0, &TLAsystem);
  System_P = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
                                         TLAsystem.SystemIndex);
  DofData_P = DofData_P0 + TLAsystem.SystemIndex;
  NbrOfSolutions = List_Nbr(DofData_P->Solutions);
  if (!NbrOfSolutions)
    Message::Error("No initial solution for system %s", System_P->Name);

  if (NbrOfSolutions < Order)
    Message::Error("Too few past solutions for system %s", System_P->Name);

  if (Current.TimeStep < 1.5){
    Current.PredOrder = 0;  // For 1st TimeStep just copy the initial solution
    Current.CorrOrder = 1;
  }
  else{
    Current.PredOrder = Order;
    Current.CorrOrder = Order;
  }

  // Check if we recompute actual TimeStep
  Solution_P = (struct Solution*)List_Pointer(DofData_P->Solutions,
                                              List_Nbr(DofData_P->Solutions)-1);
  RecomputeTimeStep = (Solution_P->TimeStep == Current.TimeStep);

  // Time values
  // t_n+1 -> t[0]
  // t_n   -> t[1]
  // t_n-1 -> t[2]
  // ...
  // t_n-k -> t[k+1]    k=Order

  t[0] = Current.Time;
  for(int i=1; i <= Current.PredOrder+1; i++) {
    j = RecomputeTimeStep ? i+1 : i;
    Solution_P = (struct Solution*)List_Pointer(DofData_P->Solutions,
                                                List_Nbr(DofData_P->Solutions)-j);
    t[i] = Solution_P->Time;
  }

  // Calculation of predictor integration constants
  // ----------------------------------------------
  if (Current.PredOrder == 0)
    Current.aPredCoeff[0] = 1.0;
  else {
    for (int c=0; c <= Current.PredOrder; c++) {
      A_data[c] = 1.0;
      for (int r=1; r <= Current.PredOrder; r++)
        A_data[c + r*((int)Current.PredOrder+1)] = pow(t[c+1],r);
    }
    A = gsl_matrix_view_array(A_data, Current.PredOrder+1, Current.PredOrder+1);

    b_data[0] = 1.0;
    for (int r=1; r <= Current.PredOrder; r++)
      b_data[r] = pow(t[0],r);
    b = gsl_vector_view_array(b_data, Current.PredOrder+1);

    coeff = gsl_vector_alloc(Current.PredOrder+1);
    p = gsl_permutation_alloc(Current.PredOrder+1);
    gsl_linalg_LU_decomp(&A.matrix, p, &s);
    gsl_linalg_LU_solve(&A.matrix, p, &b.vector, coeff);

    for (int i=0; i<=Current.PredOrder; i++)
      Current.aPredCoeff[i] = gsl_vector_get(coeff, i);

    gsl_permutation_free(p);
    gsl_vector_free(coeff);
  }

  // Calculation of corrector integration constants
  // ----------------------------------------------
  if (Current.TypeTime == TIME_GEAR) {

    for (int c=0; c < Current.CorrOrder; c++) {
      A_data[c] = 1.0;
      for (int r=1; r <= Current.CorrOrder; r++)
        A_data[c + r*((int)Current.CorrOrder+1)] = pow(t[c+1],r);
    }
    A_data[(int)Current.CorrOrder] = 0.0;
    A_data[(int)Current.CorrOrder + 1*((int)Current.CorrOrder+1)] = t[0]-t[1];
    for (int r=2; r <= Current.CorrOrder; r++)
      A_data[(int)Current.CorrOrder + r*((int)Current.CorrOrder+1)] = r*pow(t[0],r-1)*(t[0]-t[1]);
    A = gsl_matrix_view_array(A_data, Current.CorrOrder+1, Current.CorrOrder+1);

    b_data[0] = 1.0;
    for (int r=1; r <= Current.CorrOrder; r++)
      b_data[r] = pow(t[0],r);
    b = gsl_vector_view_array(b_data, Current.CorrOrder+1);

    coeff = gsl_vector_alloc(Current.CorrOrder+1);
    p = gsl_permutation_alloc(Current.CorrOrder+1);
    gsl_linalg_LU_decomp(&A.matrix, p, &s);
    gsl_linalg_LU_solve(&A.matrix, p, &b.vector, coeff);

     for (int i=0; i<Current.CorrOrder; i++)
      Current.aCorrCoeff[i] = gsl_vector_get(coeff, i);
    Current.bCorrCoeff =  gsl_vector_get(coeff, Current.CorrOrder);

    gsl_permutation_free(p);
    gsl_vector_free(coeff);
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
               List_T      *TimeLoopAdaptiveSystems,
               int         Order,
               List_T      *xPredicted_L)
{
  DefineSystem           *System_P;
  DofData                *DofData_P;
  Solution               *Solution_P, Solution_S;
  TimeLoopAdaptiveSystem TLAsystem;
  gVector                *xPredicted_P;
  gVector                *x_Nminusi_P;              // past solution vector x_N-i
  int                    TimeStep, NbrSolutions;


  // Loop through all given systems
  for(int i = 0; i < List_Nbr(TimeLoopAdaptiveSystems); i++){
    List_Read(TimeLoopAdaptiveSystems, i, &TLAsystem);
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
      free(Solution_P->TimeFunctionValues);
      Solution_P->TimeFunctionValues = Get_TimeFunctionValues(DofData_P) ;
    }

    NbrSolutions = List_Nbr(DofData_P->Solutions);
    if(NbrSolutions < Current.PredOrder + 2)
      Message::Error("Too few past solutions for system %s", System_P->Name);


    LinAlg_ZeroVector(&Solution_P->x);
    for (int j=0; j<=Current.PredOrder; j++) {
      x_Nminusi_P = &((struct Solution*)List_Pointer(DofData_P->Solutions,
                                                     NbrSolutions-2-j))->x;
      LinAlg_AddVectorProdVectorDouble(&Solution_P->x, x_Nminusi_P,
                                       Current.aPredCoeff[j], &Solution_P->x);
    }

    xPredicted_P = (gVector*)List_Pointer(xPredicted_L, i);
    LinAlg_CopyVector(&Solution_P->x, xPredicted_P);
  }

}


/* ------------------------------------------------------------------------ */
/*  C a l M a x L T E r a t i o                                             */
/* ------------------------------------------------------------------------ */

double CalcMaxLTEratio(Resolution  *Resolution_P,
		       DofData     *DofData_P0,
		       List_T      *TimeLoopAdaptiveSystems,
		       int         Order,
		       List_T      *xPredicted_L)
{
  DefineSystem           *DefineSystem_P;
  DofData                *DofData_P;
  TimeLoopAdaptiveSystem TLAsystem;
  gVector                *xPredictor_P, *xCorrector_P;    // predicted and actual solution vector
  gVector                xLTE;                            // Local Truncation Error vector
  double                 pec, cec;                        // predictor and corrector error constants
  double                 ErrorRatio, MaxErrorRatio;
  int                    NbrSolutions;


  MaxErrorRatio = 0.;

  // Loop through all given systems
  for(int i = 0; i < List_Nbr(TimeLoopAdaptiveSystems); i++) {
    List_Read(TimeLoopAdaptiveSystems, i, &TLAsystem);
    DefineSystem_P = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
                                                 TLAsystem.SystemIndex);
    DofData_P = DofData_P0 + TLAsystem.SystemIndex;

    NbrSolutions = List_Nbr(DofData_P->Solutions);
    if(NbrSolutions < Order + 1)
      Message::Error("Too few past solutions for system %s", DefineSystem_P->Name);

    xPredictor_P = (gVector*)List_Pointer(xPredicted_L, i);
    xCorrector_P = &((struct Solution*)List_Pointer(DofData_P->Solutions,
                                                    NbrSolutions-1))->x;

    // Determine error constants
    pec = Current.PredErrorConst;     // Predictor error constant
    cec = Current.CorrErrorConst;     // Corrector error constant

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

    if(Message::GetVerbosity() >= 5)
    {
      Message::Info("LTE %s of error ratio from system %s:  %.3g",
          TLAsystem.NormTypeString, DefineSystem_P->Name, ErrorRatio);
    }
  }

  return MaxErrorRatio;
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
  int    TypeTime, MaxOrder, Order;
  int    Try, BreakpointNum, NbrSolutions;
  double Save_Time, Save_DTime, Save_Theta, maxLTEratio, nextBreakpoint;
  double Save_TimeStep;
  bool   TimeStepAccepted, DTimeMinAtLastStep, BreakpointListCreated;
  bool   BreakpointAtThisStep, BreakpointAtNextStep;
  double Time0, TimeMax, DTimeInit, DTimeMin, DTimeMax;
  double s, DTimeMaxScal;
  List_T *Breakpoints, *TLAsystems, *xPredicted_L;
  TimeLoopAdaptiveSystem TLAsystem;
  DofData *DofData_P;


  // Some constants influencing the time stepping
  s = 0.8;               // target LTE ratio for next step (should be below 1)
  DTimeMaxScal = 2.0;    // maximum factor for increasing the time step DTime

  Time0    = Operation_P->Case.TimeLoopAdaptive.Time0;
  TimeMax  = Operation_P->Case.TimeLoopAdaptive.TimeMax;
  DTimeInit = Operation_P->Case.TimeLoopAdaptive.DTimeInit;
  DTimeMin = Operation_P->Case.TimeLoopAdaptive.DTimeMin;
  DTimeMax = Operation_P->Case.TimeLoopAdaptive.DTimeMax;
  Breakpoints = Operation_P->Case.TimeLoopAdaptive.Breakpoints;
  TLAsystems = Operation_P->Case.TimeLoopAdaptive.TimeLoopAdaptiveSystems;

  if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Euler")) {
    TypeTime = TIME_THETA;
    MaxOrder = 1;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Trapezoidal")) {
    TypeTime = TIME_THETA;
    MaxOrder = 2;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_2") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_2")) {
    TypeTime = TIME_GEAR;
    MaxOrder = 2;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_3") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_3")) {
    TypeTime = TIME_GEAR;
    MaxOrder = 3;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_4") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_4")) {
    TypeTime = TIME_GEAR;
    MaxOrder = 4;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_5") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_5")) {
    TypeTime = TIME_GEAR;
    MaxOrder = 5;
  }
  else if (!strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "Gear_6") ||
           !strcmp(Operation_P->Case.TimeLoopAdaptive.Scheme, "BDF_6")) {
    TypeTime = TIME_GEAR;
    MaxOrder = 6;
  }
  else
    Message::Error("Unknown integration scheme: %s",
                   Operation_P->Case.TimeLoopAdaptive.Scheme);


  xPredicted_L = List_Create(4,4,sizeof(gVector));


  // Just some checks
  // ----------------

  // Check if initial solutions for all specified systems are available
  for(int i = 0; i < List_Nbr(TLAsystems); i++){
    List_Read(TLAsystems, i, &TLAsystem);
    DefineSystem *System_P = (DefineSystem*)List_Pointer(Resolution_P->DefineSystem,
							 TLAsystem.SystemIndex);
    DofData_P = DofData_P0 + TLAsystem.SystemIndex;
    NbrSolutions = List_Nbr(DofData_P->Solutions);

    if(!NbrSolutions)
      Message::Error("No initial solution for system %s", System_P->Name);

    gVector xPredicted_S;
    LinAlg_CreateVector(&xPredicted_S, &DofData_P->Solver, DofData_P->NbrDof);
    List_Add(xPredicted_L, &xPredicted_S);
  }

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

  Flag_TimeLoopAdaptive = 1;
  Current.TimeStep += 1.0;
  // Starting with 1st order (Backward Euler corrector)
  Order = 1;
  if (TypeTime == TIME_THETA)
    Current.Theta = 1.0;

  BreakpointListCreated = !Breakpoints;
  if (BreakpointListCreated)
    Breakpoints = List_Create(1,1,sizeof(double));
  List_Add(Breakpoints, &TimeMax);
  List_Sort(Breakpoints, fcmp_double);
  BreakpointNum = 0;
  BreakpointAtNextStep = false;
  List_Read(Breakpoints, BreakpointNum, &nextBreakpoint);
  Try = 0;


  // Start the time loop
  // -------------------

  while (Current.Time < TimeMax) {

    if(Message::GetOnelabAction() == "stop") break;

    Current.TypeTime  = TypeTime;
    Current.Time     += Current.DTime;
    Save_DTime        = Current.DTime;
    Save_Time         = Current.Time;
    Save_TimeStep     = Current.TimeStep;
    Save_Theta        = Current.Theta;
    Try++;
    BreakpointAtThisStep = BreakpointAtNextStep;

#if defined(HAVE_PETSC)
    Flag_TimeLoopAdaptive_PETSc_Error = 0;
#endif

    Message::Info("Time step %d  Try %d  Time = %.8g s  Stepsize = %.8g s  Order = %d",
                  (int)Current.TimeStep, Try, Current.Time, Current.DTime, Order);
    Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                   "/TimeLoopAdaptive/Time", Current.Time);
    Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                   "/TimeLoopAdaptive/DTime", Current.DTime);

    // Calculate integration coefficients
    CalcIntegrationCoefficients(Resolution_P, DofData_P0,TLAsystems, Order);

    // Execute predictor
    Predictor(Resolution_P, DofData_P0,TLAsystems, Order, xPredicted_L);

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
    Flag_TimeLoopAdaptive = 1;

    if(*Flag_Break) {
      *Flag_Break = 0;
      Message::Info("Flag Break detected. Aborting TimeLoopAdaptive");
      break;
    }


    // Assessing the current time step and eventually
    // execute the 2nd set of operations
    // ----------------------------------------------
    if (Flag_IterativeLoopConverged != 1)
    {
      TimeStepAccepted = false;
      Message::Info("Time step %d  Try %d  Time = %.8g s  rejected (IterativeLoop not converged)",
                    (int)Current.TimeStep, Try, Current.Time);
    }
#if defined(HAVE_PETSC)
    else if (Flag_TimeLoopAdaptive_PETSc_Error) {
      TimeStepAccepted = false;
      Flag_IterativeLoopConverged = 0;
      Message::Warning("Time step %d  Try %d  Time = %.8g s  rejected:",
                       (int)Current.TimeStep, Try, Current.Time);
      Message::Warning("No valid solution found (PETSc-Error: %d)!",
                       Flag_TimeLoopAdaptive_PETSc_Error);
      Flag_TimeLoopAdaptive_PETSc_Error = 0;
    }
#endif
    else
    {
      maxLTEratio = CalcMaxLTEratio(Resolution_P, DofData_P0,TLAsystems,
                                   Order, xPredicted_L);
      if (maxLTEratio != maxLTEratio) {         // If maxLTEratio = NaN => There was no valid solution!
        TimeStepAccepted = false;
        Flag_IterativeLoopConverged = 0;
        Message::Info("Time step %d  Try %d  Time = %.8g s  rejected: No valid solution found (NaN or Inf)!",
                      (int)Current.TimeStep, Try, Current.Time);
      }
      else {
        Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                       "/TimeLoopAdaptive/LTEmaxErrorRatio", maxLTEratio);
        if (maxLTEratio <= 1.0)
        {
          TimeStepAccepted = true;
          Message::Info("Time step %d  Try %d  Time = %.8g s  accepted (max. LTE ratio = %.3g)",
                        (int)Current.TimeStep, Try, Current.Time, maxLTEratio);
        }
        else
        {
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
      Flag_TimeLoopAdaptive = 1;
      Current.TimeStep += 1.;
      Try = 0;
    }
    else
    {
      if (BreakpointAtThisStep) {
        BreakpointNum = List_ISearchSeq(Breakpoints, &Current.Time, fcmp_double);
        List_Read(Breakpoints, BreakpointNum, &nextBreakpoint);
      }
      Current.Time -= Current.DTime;
      BreakpointAtThisStep = (bool) List_Search(Breakpoints, &Current.Time, fcmp_double);
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

    if (Flag_IterativeLoopConverged !=1)
    {
      Current.DTime /= 2.0;
    }
    else
    {
      // Milne's estimate
      if ( maxLTEratio < s / pow(DTimeMaxScal, Order + 1.) )
        // At most double DTime if maxLTEratio is small
        Current.DTime *= DTimeMaxScal;
      else
        if (Current.TimeStep > 1)
          Current.DTime *= pow(s/maxLTEratio, 1./(Order+1.));
        else
          // linear adjustment because predictor is of order 0
          Current.DTime *= s/maxLTEratio;
    }

    // Limit the max step size
    if (Current.DTime > DTimeMax)
      Current.DTime = DTimeMax;

    // Check that we do not jump over a breakpoint
    if ((Current.DTime + Current.Time >= nextBreakpoint - DTimeMin) &&
        (BreakpointNum >= 0))
    {
      Current.DTime = nextBreakpoint - Current.Time;
      BreakpointAtNextStep = true;
      if (BreakpointNum < List_Nbr(Breakpoints)-1)
      {
        // There are further breakpoints
        BreakpointNum++;
        List_Read(Breakpoints, BreakpointNum, &nextBreakpoint);
      }
      else
        //No further breakpoint
        BreakpointNum = -1;
    }
    else
      BreakpointAtNextStep = false;

    // Limit the min step size
    if (Current.DTime < DTimeMin)
      Current.DTime = DTimeMin;


    // Adjust order
    // ------------
    if ( Flag_IterativeLoopConverged != 1 ||
         BreakpointAtThisStep ||
         DTimeMinAtLastStep )
      Order = 1;
    else if ( Current.TimeStep > 2.5 &&
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

  Current.TimeStep -= 1.;       // Correct the time step counter
  Flag_TimeLoopAdaptive = 0;


  // Finally destroy vectors and delete Lists
  // ----------------------------------------

  for(int i = 0; i < List_Nbr(TLAsystems); i++)
    LinAlg_DestroyVector((gVector*)List_Pointer(xPredicted_L, i));
  List_Delete(xPredicted_L);
  if (BreakpointListCreated)
    List_Delete(Breakpoints);
}

