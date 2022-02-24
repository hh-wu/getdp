// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.
//
// Contributor(s):
//   Johan Gyselinck
//   Ruth Sabariego
//

#include <string.h>
#include <math.h>
#include "GetDPConfig.h"
#include "ProData.h"
#include "ProDefine.h"
#include "ProParser.h"
#include "GeoData.h"
#include "DofData.h"
#include "Cal_Quantity.h"
#include "Cal_Value.h"
#include "MovingBand2D.h"
#include "EigenSolve.h"
#include "Treatment_Formulation.h"
#include "SolvingAnalyse.h"
#include "SolvingOperations.h"
#include "MallocUtils.h"
#include "OS.h"
#include "Message.h"

#if defined(HAVE_GMSH)
#include <gmsh/GmshGlobal.h>
#include <gmsh/PView.h>
#endif

#define TWO_PI 6.2831853071795865
#define GOLDENRATIO 1.6180339887498948482

extern struct Problem Problem_S;
extern struct CurrentData Current;

extern int TreatmentStatus;

extern int Flag_POS;
extern int Flag_RESTART;
extern int Flag_BIN, Flag_SPLIT;

extern char *Name_Generic, *Name_Path;
extern char *Name_MshFile, *Name_ResFile[NBR_MAX_RES];

extern List_T *GeoData_L;

static int Flag_IterativeLoop = 0; /* Attention: phase de test */

struct Group *Generate_Group = NULL;

static int Flag_Break = 0;

// For adaptive time stepper
int Flag_IterativeLoopConverged = 1;
int Flag_IterativeLoopN = 0;

// For IterativeTimeReduction (ugly also...)
int Flag_NextThetaFixed = 0;

// For Update
int Init_Update = 0;

// For multi-harmonic case
int Flag_RHS = 0, *DummyDof;
double **MH_Moving_Matrix = NULL;
int MHMoving_assemblyType = 0;
int Flag_AddMHMoving = 0; // one more :-)
Tree_T *DofTree_MH_moving;

// For extrapolation
int Flag_ExtrapolationOrder = 0;

/* ------------------------------------------------------------------------ */
/*  F r e e _ U n u s e d S o l u t i o n s                                 */
/* ------------------------------------------------------------------------ */

void Free_UnusedSolutions(struct DofData *DofData_P)
{
  struct Solution *Solution_P;
  int index = -1;

  // We store 1 solution too much (to allow for an imbricated iterative loop)

  if(!Flag_POS) {
    switch(Current.TypeTime) {
    case TIME_THETA:
      index = List_Nbr(DofData_P->Solutions) - 4;
      // For TimeLoopAdaptive (Trapezoidal) we need 3 past solutions for the
      // predictor
      index = Message::GetOperatingInTimeLoopAdaptive() ? index - 1 : index;
      break;
    case TIME_GEAR:
      // With -9 we store 7 past solutions (for Gear_6)
      index = List_Nbr(DofData_P->Solutions) - 9;
      break;
    case TIME_NEWMARK: index = List_Nbr(DofData_P->Solutions) - 4; break;
    default:
      // FIXME: when doing a handmade loop in the pro file - we (@julien.dular
      // :-) should clearly introduce a parameter for this.
      index = List_Nbr(DofData_P->Solutions) - (Flag_ExtrapolationOrder + 10);
      break;
    }

    if(index >= 0) {
      Solution_P = (struct Solution *)List_Pointer(DofData_P->Solutions, index);
      if(Solution_P->SolutionExist) {
        Message::Info("Freeing Solution %d", index);
        LinAlg_DestroyVector(&Solution_P->x);
        Free(Solution_P->TimeFunctionValues);
        Solution_P->SolutionExist = 0;
      }
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  I n i t _ S y s t e m D a t a                                           */
/* ------------------------------------------------------------------------ */

void Init_SystemData(struct DofData *DofData_P, int Flag_Jac)
{
  if(DofData_P->Flag_Init[0] < 1) {
    DofData_P->Flag_Init[0] = 1;
    LinAlg_CreateSolver(&DofData_P->Solver, DofData_P->SolverDataFileName);
    LinAlg_CreateMatrix(&DofData_P->A, &DofData_P->Solver, DofData_P->NbrDof,
                        DofData_P->NbrDof);
    LinAlg_CreateVector(&DofData_P->b, &DofData_P->Solver, DofData_P->NbrDof);
    LinAlg_CreateVector(&DofData_P->res, &DofData_P->Solver, DofData_P->NbrDof);
    LinAlg_CreateVector(&DofData_P->dx, &DofData_P->Solver, DofData_P->NbrDof);
  }

  /* GenerateOnly: Taking advantage of the invariant parts of the matrix in
     every time-step */

  if(DofData_P->Flag_InitOnly[0] == 1) {
    DofData_P->Flag_InitOnly[0] = 2;
    Message::Info("Initializing System {A1,b1}");
    LinAlg_CreateMatrix(&DofData_P->A1, &DofData_P->Solver, DofData_P->NbrDof,
                        DofData_P->NbrDof);
    LinAlg_CreateVector(&DofData_P->b1, &DofData_P->Solver, DofData_P->NbrDof);
  }

  if(DofData_P->Flag_InitOnly[1] == 1) {
    DofData_P->Flag_InitOnly[1] = 2;
    Message::Info("Initializing System {A2,b2}");
    LinAlg_CreateMatrix(&DofData_P->A2, &DofData_P->Solver, DofData_P->NbrDof,
                        DofData_P->NbrDof);
    LinAlg_CreateVector(&DofData_P->b2, &DofData_P->Solver, DofData_P->NbrDof);
  }

  if(DofData_P->Flag_InitOnly[2] == 1) {
    DofData_P->Flag_InitOnly[2] = 2;
    Message::Info("Initializing System {A3,b3}");
    LinAlg_CreateMatrix(&DofData_P->A3, &DofData_P->Solver, DofData_P->NbrDof,
                        DofData_P->NbrDof);
    LinAlg_CreateVector(&DofData_P->b3, &DofData_P->Solver, DofData_P->NbrDof);
  }

  if(DofData_P->Flag_Init[0] < 2 && Flag_Jac) {
    DofData_P->Flag_Init[0] = 2;
    LinAlg_CreateMatrix(&DofData_P->Jac, &DofData_P->Solver, DofData_P->NbrDof,
                        DofData_P->NbrDof);
  }
}

/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ S y s t e m                                           */
/* ------------------------------------------------------------------------ */

static void ZeroMatrix(gMatrix *M, gSolver *S, int N)
{
  // We destroy and recreate the matrix to avoid filling-in the mask when
  // generating systems on meshes with changing topologies (remeshing, moving
  // band, ..., e.g. in time loops) or when constraints are updated. Using
  // LinAlg_ZeroMatrix preserves the mask from iteration to iteration, which
  // increases memory every time we reassemble.
  LinAlg_DestroyMatrix(M);
  LinAlg_CreateMatrix(M, S, N, N);
}

void ExtrapolatingPolynomial(int degreewanted, struct DofData *DofData_P,
                             struct Solution *Solution_S)
{
  // Build Lagrange Interpolating Polynomial to predict current solution
  // ...
  // Polynomial degree:
  // degree 0 ==> initialization at the previous Time Solution
  // degree 1 ==> linear extrapolation from the 2 previous Time Solutions
  // degree 2 ==> quadratic extrapolation from the 3 previous Time Solutions
  // ...
  // NB: The more data points that are used in the interpolation,
  // the higher the degree of the resulting polynomial,
  // thus the greater oscillation it will exhibit between the data points,
  // and therefore the poorest the prediction may be ...

  double *xi;
  int *jvalid;
  double Pj = 1., x = Solution_S->Time;

  // Vector to save the valid previous Time Solutions that will be interpolated
  xi = new double[degreewanted + 1];
  jvalid = new int[degreewanted + 1];

  // Select the last Time Solution => degree 0 is achieved at least
  xi[0] = ((struct Solution *)List_Pointer(DofData_P->Solutions,
                                           List_Nbr(DofData_P->Solutions) - 1))
            ->Time;
  jvalid[0] = 0;
  Message::Info("ExtrapolatingPolynomial: Using previous "
                "Theta Time = %g s (TimeStep %d)",
                xi[0], Solution_S->TimeStep - 1 - jvalid[0]);
  int degree = 0, j = 1;

  // Found other valid Time Solutions in order to reach
  // the desired polynomial degree [degreewanted] (if possible)
  while(degree < degreewanted && j <= List_Nbr(DofData_P->Solutions) - 1) {
    xi[degree + 1] =
      ((struct Solution *)List_Pointer(DofData_P->Solutions,
                                       List_Nbr(DofData_P->Solutions) - 1 - j))
        ->Time;
    if(xi[degree + 1] < xi[degree]) {
      jvalid[degree + 1] = j;
      degree++;
      Message::Info("ExtrapolatingPolynomial: Using previous "
                    "Theta Time = %g s (TimeStep %d)",
                    xi[degree], Solution_S->TimeStep - 1 - jvalid[degree]);
    }
    else {
      Message::Info("ExtrapolatingPolynomial: Skipping previous "
                    "Theta Time = %g s (TimeStep %d) [Redundant]",
                    xi[degree + 1], Solution_S->TimeStep - 1 - j);
    }
    j++;
  }

  if(degree < degreewanted) {
    Message::Info("ExtrapolatingPolynomial: "
                  "Impossible to build polynomial of degree %d "
                  "(%d usable previous solution%s found "
                  "while %d needed for degree %d)",
                  degreewanted, degree + 1, ((degree + 1) == 1) ? "" : "s",
                  degreewanted + 1, degreewanted);
  }

  Message::Info("ExtrapolatingPolynomial: "
                ">> Polynomial of degree %d "
                "based on %d previous solution%s (out of %d existing)",
                degree, degree + 1, ((degree + 1) == 1) ? "" : "s",
                List_Nbr(DofData_P->Solutions));

  // Build Lagrange Interpolating Polynomial Coefficients
  // http://mathworld.wolfram.com/LagrangeInterpolatingPolynomial.html
  LinAlg_ZeroVector(&Solution_S->x);
  for(int j = 0; j <= degree; j++) {
    Pj = 1.;
    for(int k = 0; k <= degree; k++) {
      if(j != k) { Pj = Pj * (x - xi[k]) / (xi[j] - xi[k]); }
    }
    LinAlg_AddVectorProdVectorDouble(
      &Solution_S->x,
      &((struct Solution *)List_Pointer(
          DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1 - jvalid[j]))
         ->x,
      Pj, &Solution_S->x);
  }

  delete[] xi;
  delete[] jvalid;
}

void Generate_System(struct DefineSystem *DefineSystem_P,
                     struct DofData *DofData_P, struct DofData *DofData_P0,
                     int Flag_Jac, int Flag_Separate, int Flag_Cumulative = 0)
{
  int Nbr_Formulation, Index_Formulation, i_TimeStep, iMat;
  struct Solution *Solution_P, Solution_S;
  struct Formulation *Formulation_P;

  /* (Re)creation des liens entre FunctionSpace et DofData: seuls les FS
     n'intervenant pas dans le DD courant peuvent pointer vers un autre DD */
  Init_DofDataInFunctionSpace(1, DofData_P);

  if(!DofData_P->Solutions)
    DofData_P->Solutions = List_Create(20, 20, sizeof(struct Solution));

  i_TimeStep = (int)Current.TimeStep;

  if(!(Solution_P = (struct Solution *)List_PQuery(DofData_P->Solutions,
                                                   &i_TimeStep, fcmp_int))) {
    Solution_S.TimeStep = (int)Current.TimeStep;
    Solution_S.Time = Current.Time;
    Solution_S.TimeImag = Current.TimeImag;
    Solution_S.Frequency = Current.Frequency;
    Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P);
    Solution_S.SolutionExist = 1;
    LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof);
    if(List_Nbr(DofData_P->Solutions)) {
      if(Flag_ExtrapolationOrder <= 0) {
        LinAlg_CopyVector(
          &((struct Solution *)List_Pointer(DofData_P->Solutions,
                                            List_Nbr(DofData_P->Solutions) - 1))
             ->x,
          &Solution_S.x);
      }
      else {
        ExtrapolatingPolynomial(Flag_ExtrapolationOrder, DofData_P,
                                &Solution_S);
      }
    }
    else {
      LinAlg_ZeroVector(&Solution_S.x);
    }
    List_Add(DofData_P->Solutions, &Solution_S);
    DofData_P->CurrentSolution = (struct Solution *)List_Pointer(
      DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);
  }
  else if(Solution_P != DofData_P->CurrentSolution && !Flag_Separate) {
    /* the test on Flag_Separate is necessary for high order time schemes, where
       InitSolution[] gets called multiple times, resulting in multiple stored
       solutions with the same TimeStep number. Since GenerateSeparate[] is
       called outside the time loop (i.e. before TimeStep+=1), the List_PQuery
       may return (in an unpredictable way) any of the initial solutions. */
    Message::Error("Incompatible time");
  }
  else {
    // fix time values if we recompute the same step (with different time)
    Solution_P->Time = Current.Time;
    Solution_P->TimeImag = Current.TimeImag;
    Free(Solution_P->TimeFunctionValues);
    Solution_P->TimeFunctionValues = Get_TimeFunctionValues(DofData_P);
  }

  if(Flag_Separate) {
    for(int i = 0; i < List_Nbr(DofData_P->TimeFunctionIndex); i++)
      if(*(int *)List_Pointer(DofData_P->TimeFunctionIndex, i) > 0)
        Message::Warning(
          "Ignored TimeFunction in Constraint for GenerateSeparate");
    for(int i = 0; i < List_Nbr(Problem_S.Expression); i++) {
      DofData_P->CurrentSolution->TimeFunctionValues[i] = 1.;
    }
    if(Current.DofData->Flag_Init[1] && !Flag_Cumulative) {
      ZeroMatrix(&Current.DofData->M1, &Current.DofData->Solver,
                 Current.DofData->NbrDof);
      LinAlg_ZeroVector(&Current.DofData->m1);
      for(int i = 0; i < List_Nbr(DofData_P->m1s); i++)
        LinAlg_ZeroVector((gVector *)List_Pointer(DofData_P->m1s, i));
    }
    if(Current.DofData->Flag_Init[2] && !Flag_Cumulative) {
      ZeroMatrix(&Current.DofData->M2, &Current.DofData->Solver,
                 Current.DofData->NbrDof);
      LinAlg_ZeroVector(&Current.DofData->m2);
      for(int i = 0; i < List_Nbr(DofData_P->m2s); i++)
        LinAlg_ZeroVector((gVector *)List_Pointer(DofData_P->m2s, i));
    }
    if(Current.DofData->Flag_Init[3] && !Flag_Cumulative) {
      ZeroMatrix(&Current.DofData->M3, &Current.DofData->Solver,
                 Current.DofData->NbrDof);
      LinAlg_ZeroVector(&Current.DofData->m3);
      for(int i = 0; i < List_Nbr(DofData_P->m3s); i++)
        LinAlg_ZeroVector((gVector *)List_Pointer(DofData_P->m3s, i));
    }
    if(Current.DofData->Flag_Init[4] && !Flag_Cumulative) {
      ZeroMatrix(&Current.DofData->M4, &Current.DofData->Solver,
                 Current.DofData->NbrDof);
      LinAlg_ZeroVector(&Current.DofData->m4);
      for(int i = 0; i < List_Nbr(DofData_P->m4s); i++)
        LinAlg_ZeroVector((gVector *)List_Pointer(DofData_P->m4s, i));
    }
    if(Current.DofData->Flag_Init[5] && !Flag_Cumulative) {
      ZeroMatrix(&Current.DofData->M5, &Current.DofData->Solver,
                 Current.DofData->NbrDof);
      LinAlg_ZeroVector(&Current.DofData->m5);
      for(int i = 0; i < List_Nbr(DofData_P->m5s); i++)
        LinAlg_ZeroVector((gVector *)List_Pointer(DofData_P->m5s, i));
    }
    if(Current.DofData->Flag_Init[6] && !Flag_Cumulative) {
      ZeroMatrix(&Current.DofData->M6, &Current.DofData->Solver,
                 Current.DofData->NbrDof);
      LinAlg_ZeroVector(&Current.DofData->m6);
      for(int i = 0; i < List_Nbr(DofData_P->m6s); i++)
        LinAlg_ZeroVector((gVector *)List_Pointer(DofData_P->m6s, i));
    }
    if(Current.DofData->Flag_Init[7] && !Flag_Cumulative) {
      ZeroMatrix(&Current.DofData->M7, &Current.DofData->Solver,
                 Current.DofData->NbrDof);
      LinAlg_ZeroVector(&Current.DofData->m7);
      for(int i = 0; i < List_Nbr(DofData_P->m7s); i++)
        LinAlg_ZeroVector((gVector *)List_Pointer(DofData_P->m7s, i));
    }
  }
  else {
    if(!Current.DofData->Flag_RHS && !Flag_Cumulative) {
      ZeroMatrix(&Current.DofData->A, &Current.DofData->Solver,
                 Current.DofData->NbrDof);
    }
    if(!Flag_Cumulative) {
      LinAlg_ZeroVector(&Current.DofData->b);
      if(Current.DofData->Flag_ListOfRHS) {
        for(int i = 0; i < Current.DofData->TotalNumberOfRHS; i++) {
          gVector m;
          LinAlg_CreateVector(&m, &Current.DofData->Solver,
                              Current.DofData->NbrDof);
          LinAlg_ZeroVector(&m);
          Current.DofData->ListOfRHS.push_back(m);
        }
      }
    }
    if(DofData_P->Flag_Only) {
      for(int i = 0; i < List_Nbr(DofData_P->OnlyTheseMatrices); i++) {
        List_Read(DofData_P->OnlyTheseMatrices, i, &iMat);
        if(iMat && !Flag_Cumulative) {
          switch(iMat) {
          case 1:
            ZeroMatrix(&Current.DofData->A1, &Current.DofData->Solver,
                       Current.DofData->NbrDof);
            LinAlg_ZeroVector(&Current.DofData->b1);
            break;
          case 2:
            ZeroMatrix(&Current.DofData->A2, &Current.DofData->Solver,
                       Current.DofData->NbrDof);
            LinAlg_ZeroVector(&Current.DofData->b2);
            break;
          case 3:
            ZeroMatrix(&Current.DofData->A3, &Current.DofData->Solver,
                       Current.DofData->NbrDof);
            LinAlg_ZeroVector(&Current.DofData->b3);
            break;
          }
        }
      }
    }
  }

  if(Flag_Jac && !Flag_Cumulative)
    ZeroMatrix(&Current.DofData->Jac, &Current.DofData->Solver,
               Current.DofData->NbrDof);

  Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex);

  for(int i = 0; i < Nbr_Formulation; i++) {
    List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation);
    Formulation_P = (struct Formulation *)List_Pointer(Problem_S.Formulation,
                                                       Index_Formulation);

    Init_DofDataInDefineQuantity(DefineSystem_P, DofData_P0, Formulation_P);
    Treatment_Formulation(Formulation_P);
  }

  if(Flag_Separate) {
    DofData_P->CurrentSolution->TimeFunctionValues =
      Get_TimeFunctionValues(DofData_P);
    if(DofData_P->Flag_Init[1]) {
      LinAlg_AssembleMatrix(&DofData_P->M1);
      LinAlg_AssembleVector(&DofData_P->m1);
      for(int i = 0; i < List_Nbr(DofData_P->m1s); i++)
        LinAlg_AssembleVector((gVector *)List_Pointer(DofData_P->m1s, i));
    }
    if(DofData_P->Flag_Init[2]) {
      LinAlg_AssembleMatrix(&DofData_P->M2);
      LinAlg_AssembleVector(&DofData_P->m2);
      for(int i = 0; i < List_Nbr(DofData_P->m2s); i++)
        LinAlg_AssembleVector((gVector *)List_Pointer(DofData_P->m2s, i));
    }
    if(DofData_P->Flag_Init[3]) {
      LinAlg_AssembleMatrix(&DofData_P->M3);
      LinAlg_AssembleVector(&DofData_P->m3);
      for(int i = 0; i < List_Nbr(DofData_P->m3s); i++)
        LinAlg_AssembleVector((gVector *)List_Pointer(DofData_P->m3s, i));
    }
    if(DofData_P->Flag_Init[4]) {
      LinAlg_AssembleMatrix(&DofData_P->M4);
      LinAlg_AssembleVector(&DofData_P->m4);
      for(int i = 0; i < List_Nbr(DofData_P->m4s); i++)
        LinAlg_AssembleVector((gVector *)List_Pointer(DofData_P->m4s, i));
    }
    if(DofData_P->Flag_Init[5]) {
      LinAlg_AssembleMatrix(&DofData_P->M5);
      LinAlg_AssembleVector(&DofData_P->m5);
      for(int i = 0; i < List_Nbr(DofData_P->m5s); i++)
        LinAlg_AssembleVector((gVector *)List_Pointer(DofData_P->m5s, i));
    }
    if(DofData_P->Flag_Init[6]) {
      LinAlg_AssembleMatrix(&DofData_P->M6);
      LinAlg_AssembleVector(&DofData_P->m6);
      for(int i = 0; i < List_Nbr(DofData_P->m6s); i++)
        LinAlg_AssembleVector((gVector *)List_Pointer(DofData_P->m6s, i));
    }
    if(DofData_P->Flag_Init[7]) {
      LinAlg_AssembleMatrix(&DofData_P->M7);
      LinAlg_AssembleVector(&DofData_P->m7);
      for(int i = 0; i < List_Nbr(DofData_P->m7s); i++)
        LinAlg_AssembleVector((gVector *)List_Pointer(DofData_P->m7s, i));
    }
  }
  else {
    LinAlg_AssembleMatrix(&DofData_P->A);
    LinAlg_AssembleVector(&DofData_P->b);
    if(DofData_P->Flag_ListOfRHS) {
      LinAlg_CopyVector(&DofData_P->b,
                        &DofData_P->ListOfRHS[DofData_P->CounterOfRHS]);
      Message::Info("There are now %d RHS terms", DofData_P->CounterOfRHS + 1);
    }
    int i;
    LinAlg_GetVectorSize(&DofData_P->b, &i);
    if(!i) Message::Info("Generated system is of dimension zero");

    if(DofData_P->Flag_Only) {
      for(int i = 0; i < List_Nbr(DofData_P->OnlyTheseMatrices); i++) {
        List_Read(DofData_P->OnlyTheseMatrices, i, &iMat);
        switch(iMat) {
        case 1:
          LinAlg_AssembleMatrix(&Current.DofData->A1);
          LinAlg_AssembleVector(&Current.DofData->b1);
          break;
        case 2:
          LinAlg_AssembleMatrix(&Current.DofData->A2);
          LinAlg_AssembleVector(&Current.DofData->b2);
          break;
        case 3:
          LinAlg_AssembleMatrix(&Current.DofData->A3);
          LinAlg_AssembleVector(&Current.DofData->b3);
          break;
        }
      }
    }
  }

  if(Flag_Jac) {
    // This should in fact only be done if a JacNL term exists in the
    // formulation...
    LinAlg_AssembleMatrix(&DofData_P->Jac);
  }

  Free_UnusedSolutions(DofData_P);
}

void ReGenerate_System(struct DefineSystem *DefineSystem_P,
                       struct DofData *DofData_P, struct DofData *DofData_P0,
                       int Flag_Jac = 0)
{
  int Nbr_Formulation, Index_Formulation;
  struct Formulation *Formulation_P;

  ZeroMatrix(&Current.DofData->A, &Current.DofData->Solver,
             Current.DofData->NbrDof);
  LinAlg_ZeroVector(&Current.DofData->b);

  if(Flag_Jac)
    ZeroMatrix(&Current.DofData->Jac, &Current.DofData->Solver,
               Current.DofData->NbrDof);

  Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex);

  for(int i = 0; i < Nbr_Formulation; i++) {
    List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation);
    Formulation_P = (struct Formulation *)List_Pointer(Problem_S.Formulation,
                                                       Index_Formulation);

    Init_DofDataInDefineQuantity(DefineSystem_P, DofData_P0, Formulation_P);
    Treatment_Formulation(Formulation_P);
  }

  LinAlg_AssembleMatrix(&DofData_P->A);
  LinAlg_AssembleVector(&DofData_P->b);
  int i;
  LinAlg_GetVectorSize(&DofData_P->b, &i);
  if(!i) Message::Info("ReGenerated system is of dimension zero");

  if(Flag_Jac) {
    // This should in fact only be done if a JacNL term exists in the
    // formulation...
    LinAlg_AssembleMatrix(&DofData_P->Jac);
  }
}

void Generate_Residual(gVector *x, gVector *f)
{
  struct DefineSystem *DefineSystem_P;
  struct DofData *DofData_P;
  struct DofData *DofData_P0;

  if(Message::GetVerbosity() == 10)
    Message::Info("Generating Residual = b(xn)-A(xn)*xn");

  DofData_P = Current.DofData;
  DofData_P0 = Current.DofData_P0;
  DefineSystem_P = Current.DefineSystem_P;

  if(!DofData_P->CurrentSolution) {
    Message::Error("No current solution available");
    return;
  }

  // new trial solution
  LinAlg_CopyVector(x, &DofData_P->dx);
  LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x,
                                   &DofData_P->dx, -1.,
                                   &DofData_P->CurrentSolution->x);
  // calculate residual with new solution
  ReGenerate_System(DefineSystem_P, DofData_P, DofData_P0, 1);

  // calculate residual with new solution
  LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x,
                          &DofData_P->res);
  // res = b(xn)-A(xn)*xn
  LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res);

  if(Message::GetVerbosity() == 10) {
    Message::Info("dx");
    LinAlg_PrintVector(stdout, &DofData_P->dx);
    Message::Info("A");
    LinAlg_PrintMatrix(stdout, &DofData_P->A);
  }

  *f = DofData_P->res;
  LinAlg_AssembleVector(f);
}

void Generate_FullJacobian(gVector *x, gMatrix *Jac)
{
  struct DofData *DofData_P;

  Message::Debug("Generating Full Jacobian = A(x) + DofData_P->Jac");

  DofData_P = Current.DofData;

  if(!DofData_P->CurrentSolution) {
    Message::Error("No current solution available");
    return;
  }

  // LinAlg_CopyVector(x, &DofData_P->dx);
  LinAlg_AddVectorVector(
    &DofData_P->CurrentSolution->x, &DofData_P->dx,
    &DofData_P->CurrentSolution->x); // updating solution solution
  LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->Jac, &DofData_P->Jac);

  *Jac = DofData_P->Jac;
  LinAlg_AssembleMatrix(Jac);
}

/* ------------------------------------------------------------------------ */
/*  U p d a t e _ C o n s t r a i n t S y s t e m                           */
/* ------------------------------------------------------------------------ */

void UpdateConstraint_System(struct DefineSystem *DefineSystem_P,
                             struct DofData *DofData_P,
                             struct DofData *DofData_P0, int GroupIndex,
                             int Type_Constraint, int Flag_Jac)
{
  // Update constraints, i.e. new preprocessing of STATUS_CST type
  int Nbr_Formulation, Index_Formulation, Save_TreatmentStatus;
  struct Formulation *Formulation_P;

  // Incrementing Current.SubTimeStep, so that Generate_Link is re-triggered
  Current.SubTimeStep++;

  Save_TreatmentStatus = TreatmentStatus;
  TreatmentStatus = STATUS_CST;

  Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex);

  for(int k = 0; k < Nbr_Formulation; k++) {
    List_Read(DefineSystem_P->FormulationIndex, k, &Index_Formulation);
    Formulation_P = (struct Formulation *)List_Pointer(Problem_S.Formulation,
                                                       Index_Formulation);
    Message::Info("UpdateConstraint: Treatment Formulation '%s'",
                  Formulation_P->Name);

    Init_DofDataInDefineQuantity(DefineSystem_P, DofData_P0, Formulation_P);
    Treatment_Formulation(Formulation_P);
  }

  Dof_InitDofType(DofData_P); /* Attention: Init for only one DofData */

  TreatmentStatus = Save_TreatmentStatus;
}

/* ------------------------------------------------------------------------ */
/*  I n i t _ O p e r a t i o n O n S y s t e m                             */
/* ------------------------------------------------------------------------ */

void Init_OperationOnSystem(const char *Name, struct Resolution *Resolution_P,
                            struct Operation *Operation_P,
                            struct DofData *DofData_P0,
                            struct GeoData *GeoData_P0,
                            struct DefineSystem **DefineSystem_P,
                            struct DofData **DofData_P,
                            struct Resolution *Resolution2_P)
{
  *DefineSystem_P = (struct DefineSystem *)List_Pointer(
    Resolution_P->DefineSystem, Operation_P->DefineSystemIndex);
  Current.DefineSystem_P = *DefineSystem_P;

  *DofData_P = DofData_P0 + Operation_P->DefineSystemIndex;
  Dof_SetCurrentDofData(Current.DofData = *DofData_P);
  Current.NbrHar = Current.DofData->NbrHar;

  Geo_SetCurrentGeoData(Current.GeoData =
                          GeoData_P0 + (*DofData_P)->GeoDataIndex);

  if((*DefineSystem_P)->DestinationSystemName &&
     (*DefineSystem_P)->DestinationSystemIndex == -1) {
    int i;
    if(Resolution2_P) { /* pre-resolution */
      if((i = List_ISearchSeq(Resolution2_P->DefineSystem,
                              (*DefineSystem_P)->DestinationSystemName,
                              fcmp_DefineSystem_Name)) < 0) {
        Message::Error("Unknown DestinationSystem (%s) in System (%s)",
                       (*DefineSystem_P)->DestinationSystemName,
                       (*DefineSystem_P)->Name);
        return;
      }
      (*DefineSystem_P)->DestinationSystemIndex = i;
      Dof_DefineUnknownDofFromSolveOrInitDof(DofData_P);
    }
    else { /* a changer !!! */
      if((i = List_ISearchSeq(Resolution_P->DefineSystem,
                              (*DefineSystem_P)->DestinationSystemName,
                              fcmp_DefineSystem_Name)) < 0) {
        Message::Error("Unknown DestinationSystem (%s) in System (%s)",
                       (*DefineSystem_P)->DestinationSystemName,
                       (*DefineSystem_P)->Name);
        return;
      }
      (*DefineSystem_P)->DestinationSystemIndex = i;
    }
  }

  const char *str =
    Name ? Name : Get_StringForDefine(Operation_Type, Operation_P->Type);
  Message::Info("%s[%s]", str, (*DefineSystem_P)->Name);
  Message::ProgressMeter(0, 0, "Processing (%s)", str);
}

/* ------------------------------------------------------------------------ */
/*  T r e a t m e n t _ O p e r a t i o n                                   */
/* ------------------------------------------------------------------------ */

void Treatment_Operation(struct Resolution *Resolution_P, List_T *Operation_L,
                         struct DofData *DofData_P0, struct GeoData *GeoData_P0,
                         struct Resolution *Resolution2_P,
                         struct DofData *DofData2_P0)
{
  double d, d1, d2, *Scales;
  int Nbr_Operation, Nbr_Sol, i_Operation, Num_Iteration;
  int Flag_Jac, Flag_Binary = 0;
  int Save_TypeTime;
  double Save_Time, Save_DTime;
  double Save_Iteration;
  double MeanError, RelFactor_Modified;
  char ResName[256], ResNum[256];
  char FileName[256];
  char FileName_exMH[256];
  gScalar tmp;
  FILE *fp = stdout;

  struct Operation *Operation_P;
  struct DefineSystem *DefineSystem_P;
  struct DofData *DofData_P, *DofData2_P;
  struct Solution *Solution_P, Solution_S;
  struct Dof Dof, *Dof_P;
  struct Value Value;

  int N;

  static int RES0 = -1;

  /* adaptive relaxation */
  gVector x_Save;
  int NbrSteps_relax;
  double Norm;
  double Frelax, Frelax_Opt, Error_Prev, Frelax_Prev = 0., Fratio;
  int istep;

  int Nbr_Formulation, Index_Formulation;
  struct Formulation *Formulation_P;

  int iTime;
  double *Val_Pulsation;
  double hop[NBR_MAX_HARMONIC][NBR_MAX_HARMONIC];
  double DCfactor;

  int NbrHar1, NbrHar2, NbrDof1, NbrDof2;
  double dd;
  int NumDof, iMat;

  int row_old, row_new, col_old, col_new;

  double aii, ajj;
  int nnz__;
  double freq = 0.0;  
  
  List_T *DofList_MH_moving;
  static int NbrDof_MH_moving;
  static int *NumDof_MH_moving;
  static struct Dof **Dof_MH_moving;
  gMatrix A_MH_moving_tmp;
  // gVector b_MH_moving_tmp ;

  Nbr_Operation = List_Nbr(Operation_L);

  for(i_Operation = 0; i_Operation < Nbr_Operation; i_Operation++) {
    Operation_P = (struct Operation *)List_Pointer(Operation_L, i_Operation);

    Flag_Jac = 0;

    if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount()) break;

    switch(Operation_P->Type) {
      /*  -->  S y s t e m C o m m a n d              */
      /*  ------------------------------------------  */

    case OPERATION_SYSTEMCOMMAND:
      BlockingSystemCall(Operation_P->Case.SystemCommand.String);
      break;

      /*  -->  E r r o r                              */
      /*  ------------------------------------------  */

    case OPERATION_ERROR:
      Message::Error(Operation_P->Case.Error.String);
      break;

      /*  -->  G e n e r a t e L i s t O f R H S      */
      /*  ------------------------------------------  */

    case OPERATION_GENERATELISTOFRHS: {
      Init_OperationOnSystem(
        Get_StringForDefine(Operation_Type, Operation_P->Type), Resolution_P,
        Operation_P, DofData_P0, GeoData_P0, &DefineSystem_P, &DofData_P,
        Resolution2_P);
      Current.TypeAssembly = ASSEMBLY_AGGREGATE;
      DofData_P->TotalNumberOfRHS = Operation_P->Case.Generate.NumListOfRHS;
      Init_SystemData(DofData_P, 0);
      DofData_P->Flag_ListOfRHS = 1;
      // if(Operation_P->Case.Generate.GroupIndex >= 0){
      //   Generate_Group = (struct Group *)
      //     List_Pointer(Problem_S.Group,
      //                  Operation_P->Case.Generate.GroupIndex) ;
      // }
      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 0, 0);
      DofData_P->CounterOfRHS += 1;
    } break;

      /*  -->  G e n e r a t e                        */
      /*  ------------------------------------------  */

    case OPERATION_GENERATEJAC: Flag_Jac = 1;
    case OPERATION_GENERATEJAC_CUMULATIVE: Flag_Jac = 1;
    case OPERATION_GENERATERHS:
    case OPERATION_GENERATERHS_CUMULATIVE:
    case OPERATION_GENERATE:
    case OPERATION_GENERATE_CUMULATIVE: {
      int cumulative = (Operation_P->Type == OPERATION_GENERATEJAC_CUMULATIVE ||
                        Operation_P->Type == OPERATION_GENERATERHS_CUMULATIVE ||
                        Operation_P->Type == OPERATION_GENERATE_CUMULATIVE);

      Init_OperationOnSystem(
        Get_StringForDefine(Operation_Type, Operation_P->Type), Resolution_P,
        Operation_P, DofData_P0, GeoData_P0, &DefineSystem_P, &DofData_P,
        Resolution2_P);

      if(Operation_P->Type == OPERATION_GENERATERHS) DofData_P->Flag_RHS = 1;

      Current.TypeAssembly = ASSEMBLY_AGGREGATE;

      Init_SystemData(DofData_P, Flag_Jac);
      if(Operation_P->Case.Generate.GroupIndex >= 0) {
        Generate_Group = (struct Group *)List_Pointer(
          Problem_S.Group, Operation_P->Case.Generate.GroupIndex);
      }

      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 0,
                      cumulative);

      if(Flag_Jac && !DofData_P->Flag_Only) {
        if(Flag_AddMHMoving) {
          LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A_MH_moving,
                                 &DofData_P->A);
        }
        // compute full Jacobian J = A + JacNL, and store it in Jac
        LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->Jac, &DofData_P->Jac);

        // res = b(xn)-A(xn)*xn
        LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x,
                                &DofData_P->res);
        LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res);
        LinAlg_DummyVector(&DofData_P->res);
      }

      if(Operation_P->Case.Generate.GroupIndex >= 0) Generate_Group = NULL;

      DofData_P->Flag_RHS = 0;
    } break;

      /*  -->  G e n e r a t e S e p a r a t e        */
      /*  ------------------------------------------  */

    case OPERATION_GENERATESEPARATE:
      Init_OperationOnSystem("GenerateSeparate", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);

      if(Operation_P->Case.Generate.GroupIndex >= 0)
        Generate_Group = (struct Group *)List_Pointer(
          Problem_S.Group, Operation_P->Case.Generate.GroupIndex);
      Current.TypeAssembly = ASSEMBLY_SEPARATE;
      Init_Update = 0; /* modif... ! */

      Init_SystemData(DofData_P, Flag_Jac);
      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 1);

      if(Operation_P->Case.Generate.GroupIndex >= 0) Generate_Group = NULL;
      break;

      /*  -->  G e n e r a t e O n l y                */
      /*  ------------------------------------------  */

    case OPERATION_GENERATEONLYJAC: Flag_Jac = 1;
    case OPERATION_GENERATEONLY:
      Init_OperationOnSystem(
        Get_StringForDefine(Operation_Type, Operation_P->Type), Resolution_P,
        Operation_P, DofData_P0, GeoData_P0, &DefineSystem_P, &DofData_P,
        Resolution2_P);

      if(DofData_P->Flag_Only < 2) DofData_P->Flag_Only += 1;

      DofData_P->OnlyTheseMatrices =
        Operation_P->Case.GenerateOnly.MatrixIndex_L;

      if(DofData_P->Flag_Only <= 2)
        for(int i = 0; i < List_Nbr(DofData_P->OnlyTheseMatrices); i++) {
          List_Read(DofData_P->OnlyTheseMatrices, i, &iMat);
          switch(iMat) {
          case 1: DofData_P->Flag_InitOnly[0] = 1; break;
          case 2: DofData_P->Flag_InitOnly[1] = 1; break;
          case 3: DofData_P->Flag_InitOnly[2] = 1; break;
          }
        }

      Current.TypeAssembly = ASSEMBLY_AGGREGATE;

      Init_SystemData(DofData_P, Flag_Jac);
      Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 0);
      break;

      /*  -->  U p d a t e                            */
      /*  ------------------------------------------  */

    case OPERATION_UPDATE:
      Init_OperationOnSystem("Update", Resolution_P, Operation_P, DofData_P0,
                             GeoData_P0, &DefineSystem_P, &DofData_P,
                             Resolution2_P);
      Operation_Update(DefineSystem_P, DofData_P, DofData_P0,
                       Operation_P->Case.Update.ExpressionIndex);
      break;

      /*  -->  U p d a t e C o n s t r a i n t        */
      /*  ------------------------------------------  */

    case OPERATION_UPDATECONSTRAINT:
      Init_OperationOnSystem("UpdateConstraint", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      UpdateConstraint_System(DefineSystem_P, DofData_P, DofData_P0,
                              Operation_P->Case.UpdateConstraint.GroupIndex,
                              Operation_P->Case.UpdateConstraint.Type,
                              Flag_Jac);
      break;

      /*  -->  S e l e c t C o r r e c t i o n        */
      /*  ------------------------------------------  */

    case OPERATION_SELECTCORRECTION:
      Init_OperationOnSystem("SelectCorrection", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      if(!Operation_P->Case.SelectCorrection.Iteration) {
        /* Full solution to be considered again */
        Message::Info("  Full solution to be considered again");
        if(DofData_P->CorrectionSolutions.Flag) {
          DofData_P->CorrectionSolutions.Flag = 0;
          DofData_P->Solutions =
            DofData_P->CorrectionSolutions.Save_FullSolutions;
          DofData_P->CurrentSolution =
            DofData_P->CorrectionSolutions.Save_CurrentFullSolution;
        }
        else {
          Message::Error(
            "SelectCorrection: DofData #%d already selected as a full solution",
            DofData_P->Num);
        }
      }
      else {
        /* Last correction to be considered */
        if(!DofData_P->CorrectionSolutions.Flag) {
          DofData_P->CorrectionSolutions.Flag = 1;
          DofData_P->CorrectionSolutions.Save_FullSolutions =
            DofData_P->Solutions;
          DofData_P->CorrectionSolutions.Save_CurrentFullSolution =
            DofData_P->CurrentSolution;

          /* last correction solutions */
          int i;
          if((i = List_Nbr(DofData_P->CorrectionSolutions.AllSolutions) - 1) >=
             0) {
            List_Read(DofData_P->CorrectionSolutions.AllSolutions, i,
                      &DofData_P->Solutions);
          }
          else {
            DofData_P->CorrectionSolutions.AllSolutions =
              List_Create(10, 10, sizeof(List_T *));
            DofData_P->Solutions = List_Create(20, 20, sizeof(struct Solution));
            List_Add(DofData_P->CorrectionSolutions.AllSolutions,
                     &DofData_P->Solutions);
          }

          /* last time step correction */
          if((i = List_Nbr(DofData_P->Solutions) - 1) >= 0) {
            DofData_P->CurrentSolution =
              (struct Solution *)List_Pointer(DofData_P->Solutions, i);
          }
          else {
            DofData_P->CurrentSolution = NULL;
            /* CurrentSolution will be defined later */
          }
        }
        else {
          Message::Error(
            "SelectCorrection: DofData #%d already selected as a correction",
            DofData_P->Num);
        }
      }

      break;

      /*  -->  A d d C o r r e c t i o n              */
      /*  ------------------------------------------  */

    case OPERATION_ADDCORRECTION:
      Init_OperationOnSystem("AddCorrection", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);

      if(DofData_P->CorrectionSolutions.Flag) {
        if(DofData_P->CorrectionSolutions.Save_CurrentFullSolution->TimeStep !=
           DofData_P->CurrentSolution->TimeStep) {
          Solution_S.TimeStep = (int)Current.TimeStep;
          Solution_S.Time = Current.Time;
          Solution_S.TimeImag = Current.TimeImag;
          Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P);
          Solution_S.SolutionExist = 1;
          LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver,
                              DofData_P->NbrDof);
          LinAlg_ZeroVector(&Solution_S.x);

          List_Add(DofData_P->CorrectionSolutions.Save_FullSolutions,
                   &Solution_S);
          DofData_P->CorrectionSolutions.Save_CurrentFullSolution =
            (struct Solution *)List_Pointer(
              DofData_P->CorrectionSolutions.Save_FullSolutions,
              List_Nbr(DofData_P->CorrectionSolutions.Save_FullSolutions) - 1);
        }

        Cal_SolutionError(
          &DofData_P->CurrentSolution->x,
          &DofData_P->CorrectionSolutions.Save_CurrentFullSolution->x, 0,
          &MeanError);
        // LinAlg_VectorNorm2(&DofData_P->CurrentSolution->x, &MeanError);
        Message::Info("Mean error: %.3e  (after %d iteration%s)", MeanError,
                      (int)Current.Iteration,
                      ((int)Current.Iteration == 1) ? "" : "s");
        if(Message::GetProgressMeterStep() > 0 &&
           Message::GetProgressMeterStep() < 100)
          Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                           "/Residual",
                                         std::vector<double>(1, MeanError));

        Current.RelativeDifference +=
          MeanError * Operation_P->Case.AddCorrection.Alpha;

        LinAlg_AddVectorVector(
          &DofData_P->CorrectionSolutions.Save_CurrentFullSolution->x,
          &DofData_P->CurrentSolution->x,
          &DofData_P->CorrectionSolutions.Save_CurrentFullSolution->x);
      }
      else {
        Message::Error(
          "AddCorrection: DofData #%d is not selected as a correction",
          DofData_P->Num);
      }

      break;

      /*  -->  I n i t C o r r e c t i o n            */
      /*  ------------------------------------------  */

    case OPERATION_INITCORRECTION:
      Init_OperationOnSystem("InitCorrection", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);

      if(DofData_P->CorrectionSolutions.Flag) {
        Solution_S.TimeStep = (int)Current.TimeStep;
        Solution_S.Time = Current.Time;
        Solution_S.TimeImag = Current.TimeImag;
        Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P);
        Solution_S.SolutionExist = 1;
        LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver,
                            DofData_P->NbrDof);

        /* The last full solution, if any, initializes the current correction */
        if(List_Nbr(DofData_P->CorrectionSolutions.Save_FullSolutions)) {
          LinAlg_CopyVector(
            &((struct Solution *)List_Pointer(
                DofData_P->CorrectionSolutions.Save_FullSolutions,
                List_Nbr(DofData_P->CorrectionSolutions.Save_FullSolutions) -
                  1))
               ->x,
            &Solution_S.x);
        }
        else {
          LinAlg_ZeroVector(&Solution_S.x);
        }

        List_Add(DofData_P->Solutions, &Solution_S);
        DofData_P->CurrentSolution = (struct Solution *)List_Pointer(
          DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);
      }
      else {
        Message::Error(
          "InitCorrection: DofData #%d is not selected as a correction",
          DofData_P->Num);
      }

      break;

      /*  -->  M u l t i p l y S o l u t i o n        */
      /*  ------------------------------------------  */

    case OPERATION_MULTIPLYSOLUTION:
      Init_OperationOnSystem("MultiplySolution", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);

      LinAlg_ProdVectorDouble(&DofData_P->CurrentSolution->x,
                              Operation_P->Case.MultiplySolution.Alpha,
                              &DofData_P->CurrentSolution->x);
      break;

      /*  -->  A d d O p p o s i t e F u l l S o l u t i o n  */
      /*  --------------------------------------------------  */

    case OPERATION_ADDOPPOSITEFULLSOLUTION:
      Init_OperationOnSystem("AddOppositeFullSolution", Resolution_P,
                             Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P);
      LinAlg_AddVectorProdVectorDouble(
        &DofData_P->CurrentSolution->x,
        &DofData_P->CorrectionSolutions.Save_CurrentFullSolution->x, -1.,
        &DofData_P->CurrentSolution->x);
      break;

      /*  -->  S e t R H S A s S o l u t i o n      */
      /*  ----------------------------------------  */
    case OPERATION_SETRHSASSOLUTION: {
      /*  Compute : x <- b  */
      Init_OperationOnSystem("SetRHSAsSolution", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      if(DofData_P->CurrentSolution)
        LinAlg_CopyVector(&DofData_P->b, &DofData_P->CurrentSolution->x);
      else
        Message::Error("No current solution available");
    } break;

      /*  -->  S e t S o l u t i o n A s R H S      */
      /*  ----------------------------------------  */
    case OPERATION_SETSOLUTIONASRHS: {
      /*  Compute : b <- x  */
      Init_OperationOnSystem("SetSolutionAsRHS", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      if(DofData_P->CurrentSolution)
        LinAlg_CopyVector(&DofData_P->CurrentSolution->x, &DofData_P->b);
      else
        Message::Error("No current solution available");
    } break;

      /*  -->  S e t I n c r e m e n t A s S o l u t i o n      */
      /*  ----------------------------------------------------  */
    case OPERATION_SETINCREMENTASSOLUTION: {
      /*  Compute : x <- dx  */
      Init_OperationOnSystem("SetIncrementAsSolution", Resolution_P,
                             Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P);
      if(DofData_P->CurrentSolution)
        LinAlg_CopyVector(&DofData_P->dx, &DofData_P->CurrentSolution->x);
      else
        Message::Error("No current solution available");
    } break;

      /*  -->  S w a p S o l u t i o n              */
      /*  ----------------------------------------  */
    case OPERATION_SWAPSOLUTIONANDRHS: {
      Init_OperationOnSystem("SwapSolutionAndRHS", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      if(DofData_P->CurrentSolution)
        LinAlg_SwapVector(&DofData_P->CurrentSolution->x, &DofData_P->b);
      else
        Message::Error("No current solution available");
    } break;

    case OPERATION_SWAPSOLUTIONANDRESIDUAL: {
      Init_OperationOnSystem("SwapSolutionAndResidual", Resolution_P,
                             Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P);
      if(DofData_P->CurrentSolution)
        LinAlg_SwapVector(&DofData_P->CurrentSolution->x, &DofData_P->res);
      else
        Message::Error("No current solution available");
    } break;

      /*  -->  C o p y V e c t o r                  */
      /*  ----------------------------------------  */
    case OPERATION_COPYSOLUTION:
    case OPERATION_COPYRHS:
    case OPERATION_COPYRESIDUAL:
    case OPERATION_COPYINCREMENT:
      Init_OperationOnSystem(
        (Operation_P->Type == OPERATION_COPYSOLUTION) ? "CopySolution" :
        (Operation_P->Type == OPERATION_COPYRHS)      ? "CopyRightHandSide" :
        (Operation_P->Type == OPERATION_COPYRESIDUAL) ? "CopyResidual" :
                                                        "CopyIncrement",
        Resolution_P, Operation_P, DofData_P0, GeoData_P0, &DefineSystem_P,
        &DofData_P, Resolution2_P);
      Operation_CopyVector(Operation_P, DofData_P);
      break;

      /*  -->  A d d V e c t o r                    */
      /*  ----------------------------------------  */
    case OPERATION_ADDVECTOR:
      Init_OperationOnSystem("AddVector", Resolution_P, Operation_P, DofData_P0,
                             GeoData_P0, &DefineSystem_P, &DofData_P,
                             Resolution2_P);
      Operation_AddVector(Operation_P, DofData_P);
      break;

      /*  -->  C o p y D o f s                      */
      /*  ----------------------------------------  */
    case OPERATION_COPYDOFS:
      Init_OperationOnSystem("CopyDegreesOfFreedom", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      if(!Operation_P->Case.Copy.useList || !Operation_P->Case.Copy.to) {
        Message::Error("Degrees of freedom can only be copied to a list");
      }
      else {
        std::vector<double> v;
        for(int i = 0; i < List_Nbr(DofData_P->DofList); i++) {
          Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, i);
          v.push_back(Dof_P->NumType);
          v.push_back(Dof_P->Entity);
          v.push_back(Dof_P->Harmonic);
          v.push_back(Dof_P->Type);
          switch(Dof_P->Type) {
          case DOF_UNKNOWN: v.push_back(Dof_P->Case.Unknown.NumDof); break;
          case DOF_FIXEDWITHASSOCIATE:
            v.push_back(Dof_P->Case.FixedAssociate.NumDof);
            break;
          case DOF_FIXED:
          case DOF_FIXED_SOLVE: v.push_back(0); break;
          case DOF_UNKNOWN_INIT: v.push_back(Dof_P->Case.Unknown.NumDof); break;
          case DOF_LINK:
          case DOF_LINKCPLX: v.push_back(Dof_P->Case.Link.EntityRef); break;
          }
        }
        GetDPNumbers[Operation_P->Case.Copy.to] = v;
      }
      break;

      /*  -->  G e t N o r m                          */
      /*  ------------------------------------------  */
    case OPERATION_GETNORMSOLUTION:
    case OPERATION_GETNORMRHS:
    case OPERATION_GETNORMRESIDUAL:
    case OPERATION_GETNORMINCREMENT: {
      Init_OperationOnSystem(
        (Operation_P->Type == OPERATION_GETNORMSOLUTION) ? "GetNormSolution" :
        (Operation_P->Type == OPERATION_GETNORMRHS) ? "GetNormRightHandSide" :
        (Operation_P->Type == OPERATION_GETNORMRESIDUAL) ? "GetNormResidual" :
                                                           "GetNormIncrement",
        Resolution_P, Operation_P, DofData_P0, GeoData_P0, &DefineSystem_P,
        &DofData_P, Resolution2_P);
      double norm = 0.;
      if(DofData_P->CurrentSolution &&
         Operation_P->Type == OPERATION_GETNORMSOLUTION)
        LinAlg_VectorNorm2(&DofData_P->CurrentSolution->x, &norm);
      else if(Operation_P->Type == OPERATION_GETNORMRESIDUAL)
        LinAlg_VectorNorm2(&DofData_P->res, &norm);
      else if(Operation_P->Type == OPERATION_GETNORMRHS)
        LinAlg_VectorNorm2(&DofData_P->b, &norm);
      else if(Operation_P->Type == OPERATION_GETNORMINCREMENT)
        LinAlg_VectorNorm2(&DofData_P->dx, &norm);
      Cal_ZeroValue(&Value);
      Value.Type = SCALAR;
      Value.Val[0] = norm;
      Cal_StoreInVariable(&Value, Operation_P->Case.GetNorm.VariableName);
    } break;

      /*  -->  G e t R e s i d u a l                  */
      /*  ------------------------------------------  */
    case OPERATION_GETRESIDUAL: {
      /*  Compute : res = b - A x and return ||res||_2 */
      Init_OperationOnSystem("GetResidual", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      if(DofData_P->CurrentSolution) {
        LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x,
                                &DofData_P->res);
        LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res);
        double residual;
        LinAlg_VectorNorm2(&DofData_P->res, &residual);
        Cal_ZeroValue(&Value);
        Value.Type = SCALAR;
        Value.Val[0] = residual;
        Cal_StoreInVariable(&Value, Operation_P->Case.GetNorm.VariableName);
        if(Message::GetProgressMeterStep() > 0 &&
           Message::GetProgressMeterStep() < 100)
          Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                           "/Residual",
                                         std::vector<double>(1, residual));
      }
      else
        Message::Error("No current solution available");
    } break;

      /*  -->  A p p l y                              */
      /*  ------------------------------------------  */
    case OPERATION_APPLY: {
      /*  Compute : x <- A x  */
      Init_OperationOnSystem("Apply", Resolution_P, Operation_P, DofData_P0,
                             GeoData_P0, &DefineSystem_P, &DofData_P,
                             Resolution2_P);
      if(DofData_P->CurrentSolution) {
        LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x,
                                &DofData_P->res);
        LinAlg_CopyVector(&DofData_P->res, &DofData_P->CurrentSolution->x);
      }
      else
        Message::Error("No current solution available");
    } break;

      /*  -->  S e t S o l v e r O p t i o n s        */
      /*  ------------------------------------------  */
    case OPERATION_SETGLOBALSOLVEROPTIONS: {
      Message::Info("SetGlobalSolverOptions[\"%s\"]",
                    Operation_P->Case.SetGlobalSolverOptions.String);
      LinAlg_SetGlobalSolverOptions(
        Operation_P->Case.SetGlobalSolverOptions.String);
    } break;

      /*  -->  S o l v e                              */
      /*  ------------------------------------------  */
    case OPERATION_SOLVEAGAINWITHOTHER:
    case OPERATION_SOLVEAGAIN:
    case OPERATION_SOLVE: {
      int again = (Operation_P->Type == OPERATION_SOLVEAGAINWITHOTHER) ? 2 :
                  (Operation_P->Type == OPERATION_SOLVEAGAIN)          ? 1 :
                                                                         0;

      /*  Solve : A x = b  */
      Init_OperationOnSystem((again == 2) ? "SolveAgainWithOther" :
                             (again == 1) ? "SolveAgain" :
                                            "Solve",
                             Resolution_P, Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P);

      if(!DofData_P->CurrentSolution) {
        Message::Error("No current solution available");
        break;
      }

      if(DofData_P->Flag_Only) {
        // FIXME: this should move to a separate operation, so that solve
        // does just solve...
        if(DofData_P->Flag_InitOnly[0]) {
          LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A1, &DofData_P->A);
          LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b1, &DofData_P->b);
        }

        if(DofData_P->Flag_InitOnly[1]) {
          LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A2, &DofData_P->A);
          LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b2, &DofData_P->b);
        }
        if(DofData_P->Flag_InitOnly[2]) {
          LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A3, &DofData_P->A);
          LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b3, &DofData_P->b);
        }

        LinAlg_AssembleMatrix(&DofData_P->A);
        LinAlg_AssembleVector(&DofData_P->b);
      }

      // In prevision to build 'dx' in the following (needed for
      // "IterativeLoopPro")
      LinAlg_CopyVector(&DofData_P->CurrentSolution->x, &DofData_P->dx);

      if(!again) {
        LinAlg_Solve(&DofData_P->A, &DofData_P->b, &DofData_P->Solver,
                     &DofData_P->CurrentSolution->x,
                     (Operation_P->Flag < 0) ? 0 : Operation_P->Flag);
      }
      else {
        DofData *d =
          (again == 1) ?
            DofData_P :
            DofData_P0 +
              Operation_P->Case.SolveAgainWithOther.DefineSystemIndex;
        LinAlg_SolveAgain(&d->A, &DofData_P->b, &d->Solver,
                          &DofData_P->CurrentSolution->x,
                          (Operation_P->Flag < 0) ? 0 : Operation_P->Flag);
      }

      // In order to build 'dx' (needed for "IterativeLoopPro")
      LinAlg_SubVectorVector(&DofData_P->CurrentSolution->x, &DofData_P->dx,
                             &DofData_P->dx);
    } break;

      /*  -->  S o l v e N L                          */
      /*  ------------------------------------------  */
    case OPERATION_SOLVENL:
      Init_OperationOnSystem("Using PETSc SNES: SolveNL", Resolution_P,
                             Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P);
      Init_SystemData(DofData_P, 1);
      LinAlg_SolveNL(&DofData_P->A, &DofData_P->b, &DofData_P->Jac,
                     &DofData_P->res, &DofData_P->Solver, &DofData_P->dx,
                     (Operation_P->Flag < 0) ? 0 : Operation_P->Flag);
      break;

      /*  -->  S o l v e J a c                        */
      /*  ------------------------------------------  */

    case OPERATION_SOLVEJACAGAIN:
    case OPERATION_SOLVEJAC: {
      /*  SolveJac : J(xn) dx = b(xn) - A(xn) xn ;  x = xn + dx  */

      int again = (Operation_P->Type == OPERATION_SOLVEJACAGAIN) ? 1 : 0;

      Flag_Jac = 1;
      Init_OperationOnSystem(again ? "SolveJacAgain" : "SolveJac", Resolution_P,
                             Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P);

      if(DofData_P->Flag_Init[0] < 2) {
        Message::Error(
          "Jacobian system not initialized (missing GenerateJac?)");
        break;
      }

      if(!DofData_P->CurrentSolution) {
        Message::Error("No current solution available");
        break;
      }

      if(DofData_P->Flag_Only) {
        // FIXME: this should move to a separate operation, so that solve
        // does just solve...
        if(DofData_P->Flag_InitOnly[0]) {
          LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A1, &DofData_P->A);
          LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b1, &DofData_P->b);
        }

        if(DofData_P->Flag_InitOnly[1]) {
          LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A2, &DofData_P->A);
          LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b2, &DofData_P->b);
        }
        if(DofData_P->Flag_InitOnly[2]) {
          LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A3, &DofData_P->A);
          LinAlg_AddVectorVector(&DofData_P->b, &DofData_P->b3, &DofData_P->b);
        }
        LinAlg_AssembleMatrix(&DofData_P->A);
        LinAlg_AssembleVector(&DofData_P->b);

        // for normal (without Flag_Only) assemblies, the full Jacobian is
        // computed at the end of GenerateJac, as it should be.
        LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->Jac, &DofData_P->Jac);
        LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x,
                                &DofData_P->res);
        LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res);
        LinAlg_DummyVector(&DofData_P->res);
      }

      if(!again)
        LinAlg_Solve(&DofData_P->Jac, &DofData_P->res, &DofData_P->Solver,
                     &DofData_P->dx);
      else
        LinAlg_SolveAgain(&DofData_P->Jac, &DofData_P->res, &DofData_P->Solver,
                          &DofData_P->dx);

      if(!Flag_IterativeLoopN) {
        Cal_SolutionError(&DofData_P->dx, &DofData_P->CurrentSolution->x, 0,
                          &MeanError);
        Current.Residual = MeanError;

        if(MeanError != MeanError) {
          Message::Warning("No valid solution found (NaN or Inf)!");
        }
        else {
          Message::Info("%3ld Nonlinear Residual norm %14.12e",
                        (int)Current.Iteration, MeanError);
          if(Message::GetProgressMeterStep() > 0 &&
             Message::GetProgressMeterStep() < 100)
            Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                             "/Residual",
                                           std::vector<double>(1, MeanError));
        }
      }

      Current.RelativeDifference += MeanError;
      // NB: Current.RelativeDifference is what is used for classical
      // IterativeLoop stopping criterion, and is reset to 0 at the beginning of
      // every iteration; if only one SolveJac is done:
      // Current.RelativeDifference = MeanError = Current.Residual

      if(!Flag_IterativeLoop) {
        LinAlg_ProdVectorDouble(&DofData_P->dx, Current.RelaxationFactor,
                                &DofData_P->dx);
      }
      else { // Attention: phase test ... Technique bricolee ... provisoire
        if(Current.Iteration == 1. ||
           MeanError < Current.RelativeDifferenceOld) {
          LinAlg_ProdVectorDouble(&DofData_P->dx, Current.RelaxationFactor,
                                  &DofData_P->dx);
        }
        else {
          RelFactor_Modified = Current.RelaxationFactor /
                               (MeanError / Current.RelativeDifferenceOld);
          Message::Info("RelFactor modified = %g", RelFactor_Modified);
          LinAlg_ProdVectorDouble(&DofData_P->dx, RelFactor_Modified,
                                  &DofData_P->dx);
          Cal_SolutionError(&DofData_P->dx, &DofData_P->CurrentSolution->x, 0,
                            &MeanError);
          // LinAlg_VectorNorm2(&DofData_P->dx, &MeanError);
          Message::Info("Mean error: %.3e", MeanError);
        }
      }

      LinAlg_AddVectorVector(&DofData_P->CurrentSolution->x, &DofData_P->dx,
                             &DofData_P->CurrentSolution->x);
    } break;

      /*  -->  S o l v e J a c _ A d a p t R e l a x  */
      /*  ------------------------------------------  */

    case OPERATION_SOLVEJACADAPTRELAX:
      /*  get increment dx by solving : J(xn) dx = b(xn) - A(xn) xn */
      Flag_Jac = 1;
      Fratio = GOLDENRATIO;
      // Fratio   = 2;
      Init_OperationOnSystem("SolveJacAdaptRelax", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);

      if(DofData_P->Flag_Init[0] < 2) {
        Message::Error(
          "Jacobian system not initialized (missing GenerateJac?)");
        break;
      }

      if(!DofData_P->CurrentSolution) {
        Message::Error("No current solution available");
        break;
      }

      LinAlg_Solve(&DofData_P->Jac, &DofData_P->res, &DofData_P->Solver,
                   &DofData_P->dx);

      /* save CurrentSolution */
      LinAlg_CreateVector(&x_Save, &DofData_P->Solver, DofData_P->NbrDof);
      LinAlg_CopyVector(&DofData_P->CurrentSolution->x, &x_Save);

      Flag_RHS = 1;
      /* MHBilinear-terms do not contribute to the RHS and residual, and are
       * thus disregarded */

      /* init dummy values */
      Error_Prev = 1e99;
      Frelax_Opt = 1.;

      if(!(NbrSteps_relax =
             List_Nbr(Operation_P->Case.SolveJac_AdaptRelax.Factor_L))) {
        Message::Error("No factors provided for Adaptive Relaxation");
        break;
      }

      /* CheckAll Meaning:
          0 : try first relaxation factors (from the list) and stops when the
              residual goes up
          1 : try every relaxation factors (from the list) and keep the optimal
         one 2 : find the maximum relaxation factor that decreases the residual:
              - start with the relaxation factor from the previous time step or
                from the previous iteration
              - the relaxation factor is multiplied by a ratio as long as the
                residual decreases
              - the relaxation factor is decreased by a ratio until a decreasing
                residual is found */

      if(Operation_P->Case.SolveJac_AdaptRelax.CheckAll == 2) {
        Frelax = 1;
        if(Current.Iteration > 1) { Error_Prev = Current.Residual; }
        Frelax_Opt = Frelax;
        Frelax_Prev = Frelax;
      }

      for(istep = 0; istep < NbrSteps_relax; istep++) {
        if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount())
          break;

        /* set Frelax : */
        if(Operation_P->Case.SolveJac_AdaptRelax.CheckAll < 2)
          List_Read(Operation_P->Case.SolveJac_AdaptRelax.Factor_L, istep,
                    &Frelax);

        /* new trial solution = x + Frelax * dx */
        LinAlg_CopyVector(&x_Save, &DofData_P->CurrentSolution->x);
        LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x,
                                         &DofData_P->dx, Frelax,
                                         &DofData_P->CurrentSolution->x);

        /* calculate residual with trial solution */
        ReGenerate_System(DefineSystem_P, DofData_P, DofData_P0);
        if(Flag_AddMHMoving) { // Contribution of the moving band
                               // (precalculated)
          // Jac does not change (Flag_Jac = 0, default argument of
          // ReGenerate_System)
          LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A_MH_moving,
                                 &DofData_P->A);
        }
        LinAlg_ProdMatrixVector(&DofData_P->A, &DofData_P->CurrentSolution->x,
                                &DofData_P->res);
        LinAlg_SubVectorVector(&DofData_P->b, &DofData_P->res, &DofData_P->res);

        /* check whether norm of residual is smaller than previous ones */
        LinAlg_VectorNorm2(&DofData_P->res, &Norm);
        LinAlg_GetVectorSize(&DofData_P->res, &N);
        Norm /= (double)N;

        Current.Residual = Norm;
        Current.NbrTestedFac = istep + 1;

        if(Norm < Error_Prev) {
          // if the residual has decreased save the current relaxation factor as
          // optimal
          Error_Prev = Norm;
          Frelax_Opt = Frelax;
          if(Operation_P->Case.SolveJac_AdaptRelax.CheckAll == 2) {
            if(Frelax < Frelax_Prev && istep > 0) {
              // if the factor has been decreased ...  and a decreasing residual
              // has been found => break
              break;
            }
            // if the factor has been increased ...  => increase the factor (as
            // long as the residual decreases)
            Frelax_Prev = Frelax;
            Frelax = Frelax * Fratio;
          }
        }
        else if(Operation_P->Case.SolveJac_AdaptRelax.CheckAll == 2) {
          if(Frelax > Frelax_Prev && istep > 0) {
            // if the factor has been increased ...  but the residual has
            // increased => break
            break;
          }
          // if the factor has been decreased ...  => decrease the factor (until
          // a decreasing residual is found)
          Frelax_Prev = Frelax;
          Frelax = Frelax / Fratio;
        }
        else if(Operation_P->Case.SolveJac_AdaptRelax.CheckAll == 0 &&
                istep > 0) {
          // if the residual has increased ...  => break
          break;
        }
        if(istep == NbrSteps_relax - 1 &&
           Operation_P->Case.SolveJac_AdaptRelax.CheckAll != 1) {
          Message::Warning(
            "SolveJacAdapt: LineSearch failed at TimeStep %g iter %g",
            Current.TimeStep, Current.Iteration);
          Current.SolveJacAdaptFailed = 1;
        }
      }
      // Message::Info(" => optimal relaxation factor = %f", Frelax_Opt) ;

      /*  solution = x + Frelax_Opt * dx */
      LinAlg_CopyVector(&x_Save, &DofData_P->CurrentSolution->x);
      LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x,
                                       &DofData_P->dx, Frelax_Opt,
                                       &DofData_P->CurrentSolution->x);

      MeanError = Error_Prev;

      Current.RelaxFac = Frelax_Opt;

      // Residual computed here with SolveJacAdapt (useful to test stop
      // criterion
      //  in classical IterativeLoop then)
      Current.Residual = MeanError;
      Message::Info(
        "%3ld Nonlinear Residual norm %14.12e (optimal relaxation factor = %f)",
        (int)Current.Iteration, MeanError, Frelax_Opt);
      if(Message::GetProgressMeterStep() > 0 &&
         Message::GetProgressMeterStep() < 100)
        Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                         "/Residual",
                                       std::vector<double>(1, MeanError));

      // NB: Current.RelativeDifference is what is used for classical
      // IterativeLoop stop criterion here: Current.RelativeDifference =
      // MeanError = Current.Residual;
      Current.RelativeDifference = MeanError;
      Flag_RHS = 0;
      LinAlg_DestroyVector(&x_Save);
      break;

      /*  -->  EigenSolve                             */
      /*  ------------------------------------------  */

    case OPERATION_EIGENSOLVE:
      Init_OperationOnSystem("EigenSolve", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      DofData2_P0 =
        DofData_P0 + Operation_P->Case.EigenSolve.DefineOtherSystemIndex;
      EigenSolve(DofData_P, Operation_P->Case.EigenSolve.NumEigenvalues,
                 Operation_P->Case.EigenSolve.Shift_r,
                 Operation_P->Case.EigenSolve.Shift_i,
                 Operation_P->Case.EigenSolve.FilterExpressionIndex,
                 Operation_P->Case.EigenSolve.RationalCoefsNum,
                 Operation_P->Case.EigenSolve.RationalCoefsDen,
                 Operation_P->Case.EigenSolve.ApplyResolventRealFreqs,
                 DofData2_P0);
      break;

      /*  -->  EigenSolveJac                             */
      /*  ------------------------------------------  */

    case OPERATION_EIGENSOLVEJAC:
      Init_OperationOnSystem("EigenSolveJac", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      EigenSolve(DofData_P, Operation_P->Case.EigenSolve.NumEigenvalues,
                 Operation_P->Case.EigenSolve.Shift_r,
                 Operation_P->Case.EigenSolve.Shift_i,
                 Operation_P->Case.EigenSolve.FilterExpressionIndex, NULL, NULL,
                 NULL, NULL);
      /* Insert intelligent convergence test here :-) */
      Current.RelativeDifference = 1.0;
      break;

      /*  -->  S e t C u r r e n t S y s t e m        */
      /*  ------------------------------------------  */

    case OPERATION_SETCURRENTSYSTEM:
      Init_OperationOnSystem("SetCurrentSystem", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      break;

      /*  -->  C r e a t e S o l u t i o n            */
      /*  ------------------------------------------  */

    case OPERATION_CREATESOLUTION:
      Init_OperationOnSystem("CreateSolution", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);

      if(!DofData_P->Solutions)
        DofData_P->Solutions = List_Create(20, 20, sizeof(struct Solution));

      Solution_S.TimeStep = (int)Current.TimeStep;
      Solution_S.Time = Current.Time;
      Solution_S.TimeImag = Current.TimeImag;
      Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P);
      Solution_S.SolutionExist = 1;
      LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof);
      LinAlg_ZeroVector(&Solution_S.x);
      {
        int ts = Operation_P->Case.CreateSolution.CopyFromTimeStep;
        if(ts >= 0) { // FIXME Inno: maybe better to search for the actual
                      // timestep instead of assuming we provide an index
          if(ts < List_Nbr(DofData_P->Solutions)) {
            LinAlg_CopyVector(
              &((struct Solution *)List_Pointer(DofData_P->Solutions, ts))->x,
              &Solution_S.x);
          }
          else {
            Message::Error("Solution at step %d does not exist", ts);
          }
        }
      }
      LinAlg_AssembleVector(&Solution_S.x);
      List_Add(DofData_P->Solutions, &Solution_S);
      DofData_P->CurrentSolution = (struct Solution *)List_Pointer(
        DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);
      break;

      /*  -->  I n i t S o l u t i o n                */
      /*  ------------------------------------------  */

    case OPERATION_INITSOLUTION:
    case OPERATION_INITSOLUTION1:
      Init_OperationOnSystem("InitSolution", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);

      if(Flag_RESTART) {
        if(!DofData_P->Solutions) {
          Message::Error("No solution to restart the computation");
          break;
        }

        for(int i = 0; i < DofData_P->NbrAnyDof; i++) {
          Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, i);
          if(Dof_P->Type == DOF_UNKNOWN_INIT) Dof_P->Type = DOF_UNKNOWN;
        }

        for(int i = 0; i < List_Nbr(DofData_P->Solutions); i++) {
          Solution_P = (struct Solution *)List_Pointer(DofData_P->Solutions, i);
          Free(Solution_P->TimeFunctionValues);
          Solution_P->TimeFunctionValues = Get_TimeFunctionValues(DofData_P);
          /* The last solution is the current one */
          if(i == List_Nbr(DofData_P->Solutions) - 1)
            DofData_P->CurrentSolution = Solution_P;
        }
        RES0 = (int)Current.TimeStep;
      }
      else {
        if(!DofData_P->Solutions)
          DofData_P->Solutions = List_Create(20, 20, sizeof(struct Solution));

        Solution_S.TimeStep = (int)Current.TimeStep;
        Solution_S.Time = Current.Time;
        Solution_S.TimeImag = Current.TimeImag;
        Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P);
        Solution_S.SolutionExist = 1;
        LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver,
                            DofData_P->NbrDof);

        /* The last solution, if any, initializes the current one.  Otherwise a
           null solution is used.  a revoir qd les conditions initiales
           multiples seront mieux traitees
         */
        if(List_Nbr(DofData_P->Solutions)) {
          LinAlg_CopyVector(
            &((struct Solution *)List_Pointer(
                DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1))
               ->x,
            &Solution_S.x);
        }
        else {
          LinAlg_ZeroVector(&Solution_S.x);
        }

        for(int i = 0; i < DofData_P->NbrAnyDof; i++) {
          Dof_P = (struct Dof *)List_Pointer(DofData_P->DofList, i);
          if(Dof_P->Type == DOF_UNKNOWN_INIT) { /* Init values loaded */
            if(Operation_P->Type == OPERATION_INITSOLUTION) {
              Dof_P->Type = DOF_UNKNOWN;
              LinAlg_SetScalarInVector(&Dof_P->Val, &Solution_S.x,
                                       Dof_P->Case.Unknown.NumDof - 1);
            }
            else {
              LinAlg_SetScalarInVector(&Dof_P->Val2, &Solution_S.x,
                                       Dof_P->Case.Unknown.NumDof - 1);
            }
          }
        }
        LinAlg_AssembleVector(&Solution_S.x);
        List_Add(DofData_P->Solutions, &Solution_S);

        DofData_P->CurrentSolution = (struct Solution *)List_Pointer(
          DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);
      }
      break;

      /*  -->  S a v e S o l u t i o n                */
      /*  ------------------------------------------  */

    case OPERATION_SAVESOLUTION:
      Init_OperationOnSystem("SaveSolution", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      strcpy(ResName, Name_Generic);
      if(!Flag_SPLIT) {
        strcat(ResName, ".res");
        if(RES0 < 0) {
          Dof_WriteFileRES0(ResName, Flag_BIN);
          RES0 = 1;
        }
      }
      else {
        strcat(ResName, "-");
        sprintf(ResNum, "%d.res", (int)Current.TimeStep);
        for(int i = 0; i < 5 + 4 - (int)strlen(ResNum); i++)
          strcat(ResName, "0");
        strcat(ResName, ResNum);
        if(RES0 != (int)Current.TimeStep) {
          Dof_WriteFileRES0(ResName, Flag_BIN);
          RES0 = (int)Current.TimeStep;
        }
      }
      if(List_Nbr(DefineSystem_P->FrequencyValue) == 1)
        List_Read(DefineSystem_P->FrequencyValue, 0, &freq);
      Dof_WriteFileRES(ResName, DofData_P, Flag_BIN, Current.Time,
                       Current.TimeImag, (int)Current.TimeStep, freq);
      break;

      /*  -->  S a v e S o l u t i o n W i t h E n t i t y N u m  */
      /*  ------------------------------------------------  */

    case OPERATION_SAVESOLUTION_WITH_ENTITY_NUM:
      Init_OperationOnSystem("SaveSolutionWithEntityNum", Resolution_P,
                             Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P);
      strcpy(ResName, Name_Generic);
      // strcat(ResName, ".txt") ;
      {
        int num = Operation_P->Case.SaveSolutionWithEntityNum.GroupIndex;
        Group *g = 0;
        if(num >= 0) g = (Group *)List_Pointer(Problem_S.Group, num);
        bool saveFixed = Operation_P->Case.SaveSolutionWithEntityNum.SaveFixed;
        Dof_WriteFileRES_WithEntityNum(ResName, DofData_P, GeoData_P0, g,
                                       saveFixed);
      }
      break;

      /*  -->  S a v e S o l u t i o n s              */
      /*  ------------------------------------------  */

    case OPERATION_SAVESOLUTIONS:
      Init_OperationOnSystem("SaveSolutions", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      strcpy(ResName, Name_Generic);
      strcat(ResName, ".res");
      if(RES0 < 0) {
        Dof_WriteFileRES0(ResName, Flag_BIN);
        RES0 = 1;
      }
      for(int i = 0; i < List_Nbr(DofData_P->Solutions); i++) {
        DofData_P->CurrentSolution =
          (struct Solution *)List_Pointer(DofData_P->Solutions, i);
        if(!DofData_P->CurrentSolution->SolutionExist)
          Message::Warning("Solution #%d doesn't exist anymore: skipping", i);
        else {
          if(List_Nbr(DefineSystem_P->FrequencyValue) == 1)
            List_Read(DefineSystem_P->FrequencyValue, 0, &freq);
          Dof_WriteFileRES(ResName, DofData_P, Flag_BIN,
                           DofData_P->CurrentSolution->Time,
                           DofData_P->CurrentSolution->TimeImag, i, freq);
        }
      }
      break;

      /*  -->  M o v i n g   B a n d                  */
      /*  ------------------------------------------  */

    case OPERATION_INIT_MOVINGBAND2D:
      Message::Info("InitMovingBand2D");
      Init_MovingBand2D((struct Group *)List_Pointer(
        Problem_S.Group, Operation_P->Case.Init_MovingBand2D.GroupIndex));
      break;

    case OPERATION_MESH_MOVINGBAND2D:
      if(Message::GetVerbosity() == 10) // +++
        Message::Info("MeshMovingBand2D");
      Mesh_MovingBand2D((struct Group *)List_Pointer(
        Problem_S.Group, Operation_P->Case.Mesh_MovingBand2D.GroupIndex));
      break;

    case OPERATION_GENERATE_MH_MOVING:
      Init_OperationOnSystem("GenerateMHMoving", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);

      if(gSCALAR_SIZE == 2) {
        Message::Error(
          "FIXME: GenerateMHMoving will not work in complex arithmetic");
        break;
      }
      if(!(Val_Pulsation = Current.DofData->Val_Pulsation)) {
        Message::Error(
          "GenerateMHMoving can only be used for harmonic problems");
        break;
      }

      Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex);

      Generate_Group = (struct Group *)List_Pointer(
        Problem_S.Group, Operation_P->Case.Generate_MH_Moving.GroupIndex);

      MH_Moving_Matrix = (double **)Malloc(Current.NbrHar * sizeof(double *));
      for(int k = 0; k < Current.NbrHar; k++)
        MH_Moving_Matrix[k] = (double *)Malloc(Current.NbrHar * sizeof(double));

      for(int k = 0; k < Current.NbrHar; k++)
        for(int l = 0; l < Current.NbrHar; l++) hop[k][l] = 0.;

      Save_Time = Current.Time;
      Save_DTime = Current.DTime;

      MHMoving_assemblyType = 1; // Assembly done in current system: A, b
      for(iTime = 0; iTime < Operation_P->Case.Generate_MH_Moving.NbrStep;
          iTime++) {
        Current.Time = (double)iTime /
                       (double)Operation_P->Case.Generate_MH_Moving.NbrStep *
                       Operation_P->Case.Generate_MH_Moving.Period;
        Current.DTime = 1. /
                        (double)Operation_P->Case.Generate_MH_Moving.NbrStep *
                        Operation_P->Case.Generate_MH_Moving.Period;
        Current.TimeStep = iTime;
        if(Message::GetVerbosity() == 10)
          Message::Info("GenerateMHMoving: Step %d/%d (Time = %e  DTime %e)",
                        (int)(Current.TimeStep + 1),
                        Operation_P->Case.Generate_MH_Moving.NbrStep,
                        Current.Time, Current.DTime);

        Treatment_Operation(Resolution_P,
                            Operation_P->Case.Generate_MH_Moving.Operation,
                            DofData_P0, GeoData_P0, NULL, NULL);

        for(int k = 0; k < Current.NbrHar; k++)
          for(int l = 0; l < Current.NbrHar; l++) {
            if(Val_Pulsation[k / 2])
              DCfactor = 2.;
            else
              DCfactor = 1.;
            MH_Moving_Matrix[k][l] =
              DCfactor / (double)Operation_P->Case.Generate_MH_Moving.NbrStep *
              (fmod(k, 2) ? -sin(Val_Pulsation[k / 2] * Current.Time) :
                            cos(Val_Pulsation[k / 2] * Current.Time)) *
              (fmod(l, 2) ? -sin(Val_Pulsation[l / 2] * Current.Time) :
                            cos(Val_Pulsation[l / 2] * Current.Time));
            hop[k][l] += MH_Moving_Matrix[k][l];
          }

        for(int k = 0; k < Current.NbrHar / 2; k++)
          if(!Val_Pulsation[k]) MH_Moving_Matrix[2 * k + 1][2 * k + 1] = 1.;

        for(int i = 0; i < Nbr_Formulation; i++) {
          List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation);
          Formulation_P = (struct Formulation *)List_Pointer(
            Problem_S.Formulation, Index_Formulation);
          Treatment_Formulation(Formulation_P);
        }
      }

      Current.Time = Save_Time;
      Current.DTime = Save_DTime;

      for(int k = 0; k < Current.NbrHar; k++) Free(MH_Moving_Matrix[k]);
      Free(MH_Moving_Matrix);
      MH_Moving_Matrix = NULL;

      Generate_Group = NULL;

      LinAlg_AssembleMatrix(&DofData_P->A);
      LinAlg_AssembleVector(&DofData_P->b);
      LinAlg_AssembleMatrix(&DofData_P->Jac);

      MHMoving_assemblyType = 0;
      break;

    case OPERATION_GENERATE_MH_MOVING_S:
      Init_OperationOnSystem("GenerateMHMovingSeparate", Resolution_P,
                             Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P);

      if(gSCALAR_SIZE == 2) {
        Message::Error("FIXME: GenerateMHMovingSeparate will not work in "
                       "complex arithmetic");
        break;
      }
      if(!(Val_Pulsation = Current.DofData->Val_Pulsation)) {
        Message::Error(
          "GenerateMHMovingSeparate can only be used for harmonic problems");
        break;
      }

      Nbr_Formulation = List_Nbr(DefineSystem_P->FormulationIndex);

      Generate_Group = (struct Group *)List_Pointer(
        Problem_S.Group, Operation_P->Case.Generate_MH_Moving_S.GroupIndex);

      MH_Moving_Matrix = (double **)Malloc(Current.NbrHar * sizeof(double *));
      for(int k = 0; k < Current.NbrHar; k++)
        MH_Moving_Matrix[k] = (double *)Malloc(Current.NbrHar * sizeof(double));

      for(int k = 0; k < Current.NbrHar; k++)
        for(int l = 0; l < Current.NbrHar; l++) hop[k][l] = 0.;

      DummyDof = DofData_P->DummyDof;
      DofData_P->DummyDof = NULL;

      Save_Time = Current.Time;
      Save_DTime = Current.DTime;

      for(iTime = 0; iTime < Operation_P->Case.Generate_MH_Moving_S.NbrStep;
          iTime++) {
        Current.Time = (double)iTime /
                       (double)Operation_P->Case.Generate_MH_Moving_S.NbrStep *
                       Operation_P->Case.Generate_MH_Moving_S.Period;
        Current.DTime = 1. /
                        (double)Operation_P->Case.Generate_MH_Moving_S.NbrStep *
                        Operation_P->Case.Generate_MH_Moving_S.Period;
        Current.TimeStep = iTime;

        if(!iTime) {
          // Message::Info("GenerateMHMovingSeparate: probing for any degrees of
          // freedom");
          DofTree_MH_moving = Tree_Create(sizeof(struct Dof), fcmp_Dof);

          // probing assembly
          MHMoving_assemblyType = 3; // Constraints -  Dofs: Unknown or Link
          for(int i = 0; i < Nbr_Formulation; i++) {
            List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation);
            Formulation_P = (struct Formulation *)List_Pointer(
              Problem_S.Formulation, Index_Formulation);
            Treatment_Formulation(Formulation_P);
          }

          DofList_MH_moving = Tree2List(DofTree_MH_moving);
          Tree_Delete(DofTree_MH_moving);

          NbrDof_MH_moving = List_Nbr(DofList_MH_moving);
          Message::Info("GenerateMHMovingSeparate: NbrDof_MHMoving = %d",
                        NbrDof_MH_moving);

          Dof_MH_moving =
            (struct Dof **)Malloc(NbrDof_MH_moving * sizeof(struct Dof *));
          NumDof_MH_moving = (int *)Malloc(NbrDof_MH_moving * sizeof(int));

          for(int i = 0; i < NbrDof_MH_moving; i++) {
            Dof_P = (struct Dof *)List_Pointer(DofList_MH_moving, i);
            if(Dof_P->Type != DOF_UNKNOWN) {
              Message::Error("Dof_MH_moving not of type unknown !?");
              break;
            }
            NumDof_MH_moving[i] = Dof_P->Case.Unknown.NumDof;

            if(!(Dof_MH_moving[i] = (struct Dof *)List_PQuery(
                   Current.DofData->DofList, Dof_P, fcmp_Dof))) {
              Message::Error("GenerateMHMovingSeparate: Dof_MH_moving[%d]=%d "
                             "not in Current.DofData->DofList!!!",
                             i, Dof_MH_moving[i]);
              break;
            }
            for(int k = 0; k < Current.NbrHar; k++) {
              (Dof_MH_moving[i] + k)->Case.Unknown.NumDof =
                i * Current.NbrHar + k + 1;
            }
          } /* if (!iTime) */

          LinAlg_CreateMatrix(&DofData_P->A_MH_moving, &DofData_P->Solver,
                              NbrDof_MH_moving * Current.NbrHar,
                              NbrDof_MH_moving * Current.NbrHar);
          LinAlg_ZeroMatrix(&DofData_P->A_MH_moving);

          /*
          LinAlg_CreateVector(&DofData_P->b_MH_moving, &DofData_P->Solver,
                          NbrDof_MH_moving*Current.NbrHar) ;
          LinAlg_ZeroVector(&DofData_P->b_MH_moving) ;
          */
        }
        if(Message::GetVerbosity() == 10)
          Message::Info(
            "GenerateMHMovingSeparate : Step %d/%d (Time = %e  DTime %e)",
            (int)(Current.TimeStep + 1),
            Operation_P->Case.Generate_MH_Moving_S.NbrStep, Current.Time,
            Current.DTime);

        Treatment_Operation(Resolution_P,
                            Operation_P->Case.Generate_MH_Moving.Operation,
                            DofData_P0, GeoData_P0, NULL, NULL);

        for(int k = 0; k < Current.NbrHar; k++)
          for(int l = 0; l < Current.NbrHar; l++) {
            if(Val_Pulsation[k / 2])
              DCfactor = 2.;
            else
              DCfactor = 1.;
            MH_Moving_Matrix[k][l] =
              DCfactor / (double)Operation_P->Case.Generate_MH_Moving.NbrStep *
              (fmod(k, 2) ? -sin(Val_Pulsation[k / 2] * Current.Time) :
                            cos(Val_Pulsation[k / 2] * Current.Time)) *
              (fmod(l, 2) ? -sin(Val_Pulsation[l / 2] * Current.Time) :
                            cos(Val_Pulsation[l / 2] * Current.Time));
            hop[k][l] += MH_Moving_Matrix[k][l];
          }

        for(int k = 0; k < Current.NbrHar / 2; k++)
          if(!Val_Pulsation[k]) MH_Moving_Matrix[2 * k + 1][2 * k + 1] = 1.;

        // Assembly in dedicated system: A_MH_Moving, b_MH_moving
        MHMoving_assemblyType = 2;
        for(int i = 0; i < Nbr_Formulation; i++) {
          List_Read(DefineSystem_P->FormulationIndex, i, &Index_Formulation);
          Formulation_P = (struct Formulation *)List_Pointer(
            Problem_S.Formulation, Index_Formulation);
          Treatment_Formulation(Formulation_P);
        }

      } /* for iTime */

      LinAlg_AssembleMatrix(&DofData_P->A_MH_moving);
      // LinAlg_AssembleVector(&DofData_P->b_MH_moving) ;

      for(int k = 0; k < Current.NbrHar; k++) Free(MH_Moving_Matrix[k]);
      Free(MH_Moving_Matrix);
      MH_Moving_Matrix = NULL;

      Generate_Group = NULL;

      for(int i = 0; i < NbrDof_MH_moving; i++) {
        for(int k = 0; k < Current.NbrHar; k++)
          (Dof_MH_moving[i] + k)->Case.Unknown.NumDof = NumDof_MH_moving[i] + k;
      }

      LinAlg_CreateMatrix(&A_MH_moving_tmp, &DofData_P->Solver,
                          DofData_P->NbrDof, DofData_P->NbrDof);
      LinAlg_ZeroMatrix(&A_MH_moving_tmp);
      // LinAlg_CreateVector(&b_MH_moving_tmp, &DofData_P->Solver,
      //                     Current.DofData->NbrDof) ;
      // LinAlg_ZeroVector(&b_MH_moving_tmp) ;

      nnz__ = 0;
      for(int i = 0; i < NbrDof_MH_moving; i++) {
        for(int k = 0; k < Current.NbrHar; k++) {
          row_old = Current.NbrHar * i + k;
          row_new = NumDof_MH_moving[i] + k - 1;
          // LinAlg_GetDoubleInVector(&d, &DofData_P->b_MH_moving,  row_old) ;
          // LinAlg_SetDoubleInVector( d, &b_MH_moving_tmp, row_new) ;
          for(int j = 0; j < NbrDof_MH_moving; j++) {
            for(int l = 0; l < Current.NbrHar; l++) {
              col_old = Current.NbrHar * j + l;
              col_new = NumDof_MH_moving[j] + l - 1;

              LinAlg_GetDoubleInMatrix(&d, &DofData_P->A_MH_moving, col_old,
                                       row_old);
              LinAlg_GetDoubleInMatrix(&aii, &DofData_P->A_MH_moving, row_old,
                                       row_old);
              LinAlg_GetDoubleInMatrix(&ajj, &DofData_P->A_MH_moving, col_old,
                                       col_old);

              if(DummyDof == NULL) {
                if(d * d > 1e-12 * aii * ajj) {
                  LinAlg_AddDoubleInMatrix(d, &A_MH_moving_tmp, col_new,
                                           row_new);
                  nnz__++;
                }
              }
              else {
                if(d * d > 1e-12 * aii * ajj &&
                   ((DummyDof[row_new] == 0 && DummyDof[col_new] == 0) ||
                    (row_new == col_new))) {
                  LinAlg_AddDoubleInMatrix(d, &A_MH_moving_tmp, col_new,
                                           row_new);
                  nnz__++;
                }
              }
            }
          }
        }
      }

      LinAlg_DestroyMatrix(&DofData_P->A_MH_moving);
      // LinAlg_DestroyVector(&DofData_P->b_MH_moving);

      DofData_P->A_MH_moving = A_MH_moving_tmp;
      // DofData_P->b_MH_moving = b_MH_moving_tmp;

      LinAlg_AssembleMatrix(&DofData_P->A_MH_moving);
      // LinAlg_AssembleVector(&DofData_P->b_MH_moving);
      // LinAlg_PrintVector(stdout, &DofData_P->b_MH_moving);

      Current.Time = Save_Time;
      Current.DTime = Save_DTime;
      Current.TimeStep =
        0; // Inner time iteration for integral, no solution in time

      DofData_P->DummyDof = DummyDof;

      MHMoving_assemblyType = 0;

      Flag_AddMHMoving = 1;
      Message::Info("GenerateMHMovingSeparate, contrib. precalculated & "
                    "assembled: Flag_AddMHMoving = %d",
                    Flag_AddMHMoving);
      break;

    case OPERATION_DOFSFREQUENCYSPECTRUM:
      Dof_GetDummies(DefineSystem_P, DofData_P);
      Message::Info("DofsFrequencySpectrum... DummyDofs");
      // FIXME: Name is misleading
      // what is taken care of by this function is the Dofs linked to the
      // harmonics that are not considered in a particular region (e.g. when
      // rotor and stator have different spectrum) dummydofs ==
      // DOFS_NOT_IN_FREQUENCYSPECTRUM_OF_QUANTITY
      break;

    case OPERATION_ADDMHMOVING:
      Flag_AddMHMoving = 1;
      // I think this operation could be merged with GenerateMHMovingSeparate
      // LinAlg_AddMatrixMatrix(&DofData_P->A, &DofData_P->A_MH_moving,
      // &DofData_P->A) ;
      Message::Info("AddMHMoving: contribution of moving band precalculated");
      break;

      /*  -->  S a v e S o l u t i o n E x t e n d e d M H             */
      /*  -----------------------------------------------------------  */

    case OPERATION_SAVESOLUTIONEXTENDEDMH:
      if(Current.NbrHar == 1) {
        Message::Warning(
          "ExtendSolutionMH can only be used with multi-harmonics");
        break;
      }
      else if(!List_Nbr(DofData_P->Solutions)) {
        Message::Warning("No solution available for ExtendSolutionMH");
        break;
      }
      else if(List_Nbr(DofData_P->Solutions) > 1) {
        Message::Warning(
          "Only last solution will be extended multi-harmonically and saved");
      }

      Init_OperationOnSystem("SaveSolutionExtendedMH", Resolution_P,
                             Operation_P, DofData_P0, GeoData_P0,
                             &DefineSystem_P, &DofData_P, Resolution2_P);
      strcpy(FileName_exMH, Name_Generic);
      strcat(FileName_exMH, Operation_P->Case.SaveSolutionExtendedMH.ResFile);
      strcat(FileName_exMH, ".res");
      Dof_WriteFileRES0(FileName_exMH, Flag_BIN);
      Dof_WriteFileRES_ExtendMH(
        FileName_exMH, DofData_P, Flag_BIN,
        Current.NbrHar + 2 * Operation_P->Case.SaveSolutionExtendedMH.NbrFreq);

      Message::Direct("          > '%s'  (%d to %d frequencies)", FileName_exMH,
                      Current.NbrHar / 2,
                      Current.NbrHar / 2 +
                        Operation_P->Case.SaveSolutionExtendedMH.NbrFreq);

      DofData_P->CurrentSolution = (struct Solution *)List_Pointer(
        DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);

      break;

      /*  -->  S a v e S o l u t i o n M H T o T i m e                 */
      /*  -----------------------------------------------------------  */

    case OPERATION_SAVESOLUTIONMHTOTIME:
      if(Current.NbrHar == 1) {
        Message::Warning(
          "SaveSolutionMHtoTime can only to be used with multi-harmonics");
        break;
      }
      else if(!List_Nbr(DofData_P->Solutions)) {
        Message::Warning("No solution available for SaveSolutionMHtoTime");
        break;
      }
      else if(List_Nbr(DofData_P->Solutions) > 1) {
        Message::Warning(
          "Only last mult-harmonic solution will be saved for time X");
      }

      Init_OperationOnSystem("SaveSolutionMHtoTime", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      strcpy(FileName_exMH, Name_Generic);
      strcat(FileName_exMH, Operation_P->Case.SaveSolutionMHtoTime.ResFile);
      strcat(FileName_exMH, ".res");
      Dof_WriteFileRES0(FileName_exMH, Flag_BIN);
      Dof_WriteFileRES_MHtoTime(FileName_exMH, DofData_P, Flag_BIN,
                                Operation_P->Case.SaveSolutionMHtoTime.Time);

      Message::Direct("      > '%s'  (time = %e)", FileName_exMH,
                      Operation_P->Case.SaveSolutionMHtoTime.Time);

      DofData_P->CurrentSolution = (struct Solution *)List_Pointer(
        DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);
      break;

      /*  -->  R e a d S o l u t i o n                */
      /*  ------------------------------------------  */

    case OPERATION_READSOLUTION: {
      Init_OperationOnSystem("ReadSolution", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      int i = 0;
      while(Name_ResFile[i]) {
        Message::Info("Loading Processing data '%s'", Name_ResFile[i]);
        Dof_OpenFile(DOF_TMP, Name_ResFile[i], "rb");
        Dof_ReadFileRES(NULL, DofData_P, DofData_P->Num, &Current.Time,
                        &Current.TimeImag, &Current.TimeStep);
        Dof_CloseFile(DOF_TMP);
        i++;
      }
      if(!List_Nbr(DofData_P->Solutions)) {
        Message::Error("No valid data found for ReadSolution[%s]",
                       DefineSystem_P->Name);
        break;
      }

      DofData_P->CurrentSolution = (struct Solution *)List_Pointer(
        DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);
      Free(DofData_P->CurrentSolution->TimeFunctionValues);
      DofData_P->CurrentSolution->TimeFunctionValues =
        Get_TimeFunctionValues(DofData_P);
    } break;

      /*  -->  G m s h R e a d                        */
      /*  ------------------------------------------  */

    case OPERATION_GMSHREAD:
#if defined(HAVE_GMSH)
      if(Operation_P->Case.GmshRead.RunTimeVar) {
        // FIXME: well, this is reaaally ugly and unsafe - we should sanitize
        // the string and verify that it contains a valid format specification
        // :-)
        struct Value val;
        Cal_GetValueSaved(&val, Operation_P->Case.GmshRead.RunTimeVar);
        char tmp[256];
        sprintf(tmp, Operation_P->Case.GmshRead.FileName, val.Val[0]);
        Message::Info("GmshRead[%s]", tmp);
        GmshMergePostProcessingFile(tmp);
      }
      else {
        if(Operation_P->Case.GmshRead.ViewTag >= 0) {
          PView::setGlobalTag(Operation_P->Case.GmshRead.ViewTag);
          Message::Info("GmshRead[%s] -> View[%d]",
                        Operation_P->Case.GmshRead.FileName,
                        Operation_P->Case.GmshRead.ViewTag);
        }
        else {
          Message::Info("GmshRead[%s]", Operation_P->Case.GmshRead.FileName);
        }
        GmshMergePostProcessingFile(Operation_P->Case.GmshRead.FileName);
      }
#else
      Message::Error(
        "You need to compile GetDP with Gmsh support to use 'GmshRead'");
#endif
      break;

    case OPERATION_GMSHMERGE:
#if defined(HAVE_GMSH)
      if(Operation_P->Case.GmshRead.ViewTag >= 0) {
        PView::setGlobalTag(Operation_P->Case.GmshRead.ViewTag);
        Message::Info("GmshMerge[%s] -> View[%d]",
                      Operation_P->Case.GmshRead.FileName,
                      Operation_P->Case.GmshRead.ViewTag);
      }
      else {
        Message::Info("GmshMerge[%s]", Operation_P->Case.GmshRead.FileName);
      }
      GmshMergeFile(Operation_P->Case.GmshRead.FileName);
#else
      Message::Error(
        "You need to compile GetDP with Gmsh support to use 'GmshMerge'");
#endif
      break;

    case OPERATION_GMSHOPEN:
#if defined(HAVE_GMSH)
      if(Operation_P->Case.GmshRead.ViewTag >= 0) {
        PView::setGlobalTag(Operation_P->Case.GmshRead.ViewTag);
        Message::Info("GmshOpen[%s] -> View[%d]",
                      Operation_P->Case.GmshRead.FileName,
                      Operation_P->Case.GmshRead.ViewTag);
      }
      else {
        Message::Info("GmshOpen[%s]", Operation_P->Case.GmshRead.FileName);
      }
      GmshOpenProject(Operation_P->Case.GmshRead.FileName);
#else
      Message::Error(
        "You need to compile GetDP with Gmsh support to use 'GmshOpen'");
#endif
      break;

    case OPERATION_GMSHCLEARALL:
#if defined(HAVE_GMSH)
      Message::Info("GmshClearAll[]");
      while(PView::list.size()) delete PView::list[0];
      PView::setGlobalTag(0);
#else
      Message::Error(
        "You need to compile GetDP with Gmsh support to use 'GmshClearAll'");
#endif
      break;

    case OPERATION_GMSHWRITE:
#if defined(HAVE_GMSH)
    {
      Message::Info("GmshWrite[%s]", Operation_P->Case.GmshRead.FileName);
      PView *view = PView::getViewByTag(Operation_P->Case.GmshRead.ViewTag);
      if(view)
        view->write(Operation_P->Case.GmshRead.FileName, 10);
      else
        Message::Error("View %d does not exist");
    }
#else
      Message::Error(
        "You need to compile GetDP with Gmsh support to use 'GmshWrite'");
#endif
    break;

      /*  -->  S a v e M e s h                        */
      /*  ------------------------------------------  */

    case OPERATION_SAVEMESH:
      Init_OperationOnSystem("SaveMesh", Resolution_P, Operation_P, DofData_P0,
                             GeoData_P0, &DefineSystem_P, &DofData_P,
                             Resolution2_P);

      // FIXME: wrong on Windows -- see Fix_RelativePath
      if(Operation_P->Case.SaveMesh.FileName[0] == '/' ||
         Operation_P->Case.SaveMesh.FileName[0] == '\\') {
        strcpy(FileName, Operation_P->Case.SaveMesh.FileName);
      }
      else {
        strcpy(FileName, Name_Path);
        strcat(FileName, Operation_P->Case.SaveMesh.FileName);
      }

      if(Operation_P->Case.SaveMesh.ExprIndex >= 0) {
        Get_ValueOfExpressionByIndex(Operation_P->Case.SaveMesh.ExprIndex, NULL,
                                     0., 0., 0., &Value);
        char fmt[256];
        strcpy(fmt, FileName);
        sprintf(FileName, fmt, Value.Val[0]);
      }

      Geo_SaveMesh(Current.GeoData,
                   ((struct Group *)List_Pointer(
                      Problem_S.Group, Operation_P->Case.SaveMesh.GroupIndex))
                     ->InitialList,
                   FileName);
      break;

      /*  -->  T r a n s f e r S o l u t i o n        */
      /*  ------------------------------------------  */

    case OPERATION_TRANSFERSOLUTION:
      Init_OperationOnSystem("TransferSolution", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);

      if(Resolution2_P) { /* pre-resolution */
        DofData2_P = DofData2_P0 + DefineSystem_P->DestinationSystemIndex;
        Dof_TransferDof(DofData_P, &DofData2_P);
      }
      else {
        /* a changer!!! Il faut se mettre d'accord sur ce que doit faire
           Dof_TransferDof. Ceci sert a transferer la derniere solution d'un
           DofData dans un autre (ds la meme resolution), base sur le meme
           espace fonctionnel. */
        DofData2_P = DofData_P0 + DefineSystem_P->DestinationSystemIndex;

        if(DofData_P->NbrAnyDof != DofData2_P->NbrAnyDof) {
          Message::Error("Dimensions do not match for TransferSolution");
          break;
        }

        Solution_S.TimeStep = (int)Current.TimeStep;
        Solution_S.Time = Current.Time;
        Solution_S.TimeImag = Current.TimeImag;
        Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData2_P);
        Solution_S.SolutionExist = 1;
        LinAlg_CreateVector(&Solution_S.x, &DofData2_P->Solver,
                            DofData2_P->NbrDof);
        LinAlg_ZeroVector(&Solution_S.x);

        if(List_Nbr(DofData_P->Solutions)) {
          Solution_P = (struct Solution *)List_Pointer(
            DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);
          for(int i = 0; i < DofData_P->NbrAnyDof; i++) {
            Dof = *(struct Dof *)List_Pointer(DofData_P->DofList, i);
            if(Dof.Type == DOF_UNKNOWN) {
              LinAlg_GetScalarInVector(&tmp, &Solution_P->x,
                                       Dof.Case.Unknown.NumDof - 1);

              if((Dof_P = (struct Dof *)List_PQuery(DofData2_P->DofList, &Dof,
                                                    fcmp_Dof))) {
                LinAlg_SetScalarInVector(&tmp, &Solution_S.x,
                                         Dof_P->Case.Unknown.NumDof - 1);
                Dof_P->Type = DOF_UNKNOWN;
              }
              else {
                Message::Warning("Unknown Dof in TransferSolution");
              }
            }
            else {
              // Message::Warning("Trying to transfer a non symmetrical Dof
              // (type %d)", Dof.Type);
            }
          }
          LinAlg_AssembleVector(&Solution_S.x);

          if(!DofData2_P->Solutions)
            DofData2_P->Solutions =
              List_Create(20, 20, sizeof(struct Solution));

          List_Add(DofData2_P->Solutions, &Solution_S);
          DofData2_P->CurrentSolution = (struct Solution *)List_Pointer(
            DofData2_P->Solutions, List_Nbr(DofData2_P->Solutions) - 1);
        }
      }
      break;

    case OPERATION_REMOVELASTSOLUTION:
      Init_OperationOnSystem("RemoveLastSolution", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      if(List_Nbr(DofData_P->Solutions)) {
        Solution_P = (struct Solution *)List_Pointer(
          DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);
        if(Solution_P->SolutionExist) {
          Message::Info("Freeing Solution %d", Solution_P->TimeStep);
          LinAlg_DestroyVector(&Solution_P->x);
          Free(Solution_P->TimeFunctionValues);
          Solution_P->SolutionExist = 0;
        }
        List_Pop(DofData_P->Solutions);
        DofData_P->CurrentSolution = (struct Solution *)List_Pointer(
          DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 1);
      }
      else {
        DofData_P->CurrentSolution = 0;
      }
      break;

      /*  -->  E v a l u a t e                        */
      /*  ------------------------------------------  */

    case OPERATION_EVALUATE:
      for(int i = 0; i < List_Nbr(Operation_P->Case.Evaluate.Expressions);
          i++) {
        int j;
        List_Read(Operation_P->Case.Evaluate.Expressions, i, &j);
        Get_ValueOfExpressionByIndex(j, NULL, 0., 0., 0., &Value);
      }
      break;

      /*  -->  S e t T i m e                          */
      /*  ------------------------------------------  */

    case OPERATION_SETTIME:
      Get_ValueOfExpressionByIndex(Operation_P->Case.SetTime.ExpressionIndex,
                                   NULL, 0., 0., 0., &Value);
      Current.Time = Value.Val[0];
      break;

      /*  -->  S e t D T i m e                        */
      /*  ------------------------------------------  */

    case OPERATION_SETDTIME:
      Get_ValueOfExpressionByIndex(Operation_P->Case.SetTime.ExpressionIndex,
                                   NULL, 0., 0., 0., &Value);
      Current.DTime = Value.Val[0];
      break;

      /*  -->  S e t T i m e S t e p                  */
      /*  ------------------------------------------  */

    case OPERATION_SETTIMESTEP:
      Get_ValueOfExpressionByIndex(Operation_P->Case.SetTime.ExpressionIndex,
                                   NULL, 0., 0., 0., &Value);
      Current.TimeStep = Value.Val[0];
      break;

      /*  -->  S e t F r e q u e n c y                */
      /*  ------------------------------------------  */

    case OPERATION_SETFREQUENCY:
      DefineSystem_P = (struct DefineSystem *)List_Pointer(
        Resolution_P->DefineSystem, Operation_P->DefineSystemIndex);
      DofData_P = DofData_P0 + Operation_P->DefineSystemIndex;

      if(DefineSystem_P->Type == VAL_COMPLEX) {
        if(DefineSystem_P->FrequencyValue)
          List_Reset(DefineSystem_P->FrequencyValue);
        else
          DefineSystem_P->FrequencyValue = List_Create(1, 1, sizeof(double));
        /* Provisoire: une seule frequence */
        Get_ValueOfExpressionByIndex(
          Operation_P->Case.SetFrequency.ExpressionIndex, NULL, 0., 0., 0.,
          &Value);
        List_Add(DefineSystem_P->FrequencyValue, &Value.Val[0]);
        if(DofData_P->Pulsation == NULL)
          DofData_P->Pulsation = List_Create(1, 2, sizeof(double));
        List_Reset(DofData_P->Pulsation);
        Current.Frequency = Value.Val[0];
        Init_HarInDofData(DefineSystem_P, DofData_P);
      }
      else
        Message::Error("Invalid SetFrequency for real system '%s'",
                       DefineSystem_P->Name);
      break;

      /*  -->  T i m e L o o p T h e t a              */
      /*  ------------------------------------------  */

    case OPERATION_TIMELOOPTHETA:
      if(!List_Nbr(Current.DofData->Solutions)) {
        Message::Error("Not enough initial solutions for TimeLoopTheta");
        break;
      }

      Message::Info("TimeLoopTheta ...");

      Save_TypeTime = Current.TypeTime;
      Save_DTime = Current.DTime;
      Flag_NextThetaFixed = 0; /* Attention: Test */

      Current.TypeTime = TIME_THETA;
      if(Flag_RESTART) {
        if(Current.Time < Operation_P->Case.TimeLoopTheta.TimeMax * 0.999999)
          Flag_RESTART = 0;
      }
      else
        Current.Time = Operation_P->Case.TimeLoopTheta.Time0;

      Get_ValueOfExpressionByIndex(Operation_P->Case.TimeLoopTheta.ThetaIndex,
                                   NULL, 0., 0., 0., &Value);
      Current.Theta = Value.Val[0];
      Get_ValueOfExpressionByIndex(Operation_P->Case.TimeLoopTheta.DTimeIndex,
                                   NULL, 0., 0., 0., &Value);
      Current.DTime = Value.Val[0];

      while(Current.Time < Operation_P->Case.TimeLoopTheta.TimeMax * 0.999999) {
        if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount())
          break;

        if(!Flag_NextThetaFixed) { // Attention: Test
          Get_ValueOfExpressionByIndex(
            Operation_P->Case.TimeLoopTheta.ThetaIndex, NULL, 0., 0., 0.,
            &Value);
          Current.Theta = Value.Val[0];
        }

        Expression *DTimeExpr = (struct Expression *)List_Pointer(
          Problem_S.Expression, Operation_P->Case.TimeLoopTheta.DTimeIndex);
        // don't reevaluate if constant (it could have been changed via SetDTime
        // in a previous operation)
        if(!Is_ExpressionConstant(DTimeExpr) &&
           Flag_NextThetaFixed != 2) { // Attention: Test
          Get_ValueOfExpression(DTimeExpr, NULL, 0., 0., 0., &Value);
          Current.DTime = Value.Val[0];
        }
        Flag_NextThetaFixed = 0;

        Current.Time += Current.DTime;
        Current.TimeStep += 1.;
        Current.SolveJacAdaptFailed = 0;

        Message::Info(3, "Theta Time = %.8g s (TimeStep %d, DTime %g)",
                      Current.Time, (int)Current.TimeStep, Current.DTime);

        if(Message::GetProgressMeterStep() > 0 &&
           Message::GetProgressMeterStep() < 100)
          Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                           "/Time",
                                         std::vector<double>(1, Current.Time));

        // Save_Time = Current.Time ; // removed: prevents using SetTime in the
        // operation
        Treatment_Operation(Resolution_P,
                            Operation_P->Case.TimeLoopTheta.Operation,
                            DofData_P0, GeoData_P0, NULL, NULL);
        // Current.Time = Save_Time ; // removed: prevents using SetTime in the
        // operation

        if(Flag_Break) {
          Flag_Break = 0;
          break;
        }
      }

      Current.TypeTime = Save_TypeTime;
      Current.DTime = Save_DTime;
      break;

      /*  -->  T i m e L o o p N e w m a r k          */
      /*  ------------------------------------------  */

    case OPERATION_TIMELOOPNEWMARK:
      if(List_Nbr(Current.DofData->Solutions) < 2) {
        Message::Error("Not enough initial solutions for TimeLoopNewmark");
        break;
      }

      Message::Info("TimeLoopNewmark ...");

      Save_TypeTime = Current.TypeTime;
      Save_DTime = Current.DTime;

      Current.Beta = Operation_P->Case.TimeLoopNewmark.Beta;
      Current.Gamma = Operation_P->Case.TimeLoopNewmark.Gamma;
      Current.TypeTime = TIME_NEWMARK;
      if(Flag_RESTART) {
        if(Current.Time < Operation_P->Case.TimeLoopNewmark.TimeMax * 0.999999)
          Flag_RESTART = 0;
      }
      else
        Current.Time = Operation_P->Case.TimeLoopNewmark.Time0;

      while(Current.Time <
            Operation_P->Case.TimeLoopNewmark.TimeMax * 0.999999) {
        if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount())
          break;

        Get_ValueOfExpressionByIndex(
          Operation_P->Case.TimeLoopNewmark.DTimeIndex, NULL, 0., 0., 0.,
          &Value);
        Current.DTime = Value.Val[0];
        Current.Time += Current.DTime;
        Current.TimeStep += 1.;
        Current.SolveJacAdaptFailed = 0;

        Message::Info(3, "Newmark Time = %.8g s (TimeStep %d)", Current.Time,
                      (int)Current.TimeStep);
        if(Message::GetProgressMeterStep() > 0 &&
           Message::GetProgressMeterStep() < 100)
          Message::AddOnelabNumberChoice(Message::GetOnelabClientName() +
                                           "/Time",
                                         std::vector<double>(1, Current.Time));

        Treatment_Operation(Resolution_P,
                            Operation_P->Case.TimeLoopNewmark.Operation,
                            DofData_P0, GeoData_P0, NULL, NULL);

        if(Flag_Break) {
          Flag_Break = 0;
          break;
        }
      }

      Current.TypeTime = Save_TypeTime;
      Current.DTime = Save_DTime;
      break;

      /*  -->  I t e r a t i v e L o o p              */
      /*  ------------------------------------------  */

    case OPERATION_ITERATIVELOOP:
      Message::Info("IterativeLoop ...");

      Save_Iteration = Current.Iteration;

      for(Num_Iteration = 1;
          Num_Iteration <= Operation_P->Case.IterativeLoop.NbrMaxIteration;
          Num_Iteration++) {
        if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount())
          break;

        Current.Iteration = (double)Num_Iteration;
        Current.RelativeDifference = 0.;

        Get_ValueOfExpressionByIndex(
          Operation_P->Case.IterativeLoop.RelaxationFactorIndex, NULL, 0., 0.,
          0., &Value);
        if(Current.RelaxationFactor != Value.Val[0] || Num_Iteration == 1) {
          Current.RelaxationFactor = Value.Val[0];
          Message::Info("Nonlinear Iteration Relaxation %g",
                        Current.RelaxationFactor);
        }

        Flag_IterativeLoop =
          Operation_P->Case.IterativeLoop.Flag; /* Attention: Test */

        // NB: SolveJac OR SolveJacAdapt are called here
        //  Resolution2_P and DofData2_P0 added as arguments for allowing
        //  TransferSolution of a nonlinear resolution
        Treatment_Operation(Resolution_P,
                            Operation_P->Case.IterativeLoop.Operation,
                            DofData_P0, GeoData_P0, Resolution2_P, DofData2_P0);

        if(Current.RelaxFac == 0) {
          // SolveJacAdapt has not been called
          // ==> Copy the default RelaxationFactor in RelaxFac
          Current.RelaxFac = Current.RelaxationFactor;
        }

        // NB: Current.RelativeDifference is what is used for classical
        // IterativeLoop stop criterion NB: In SolveJac:
        // (Current.RelativeDifference+=Current.Residual) NB: In SolveJacAdapt:
        // (Current.RelativeDifference=Current.Residual)
        if((Current.RelativeDifference <=
            Operation_P->Case.IterativeLoop.Criterion) ||
           (Current.RelativeDifference !=
            Current.RelativeDifference)) // NaN or Inf
          break;

        if(Flag_Break) {
          Flag_Break = 0;
          break;
        }

        Current.RelativeDifferenceOld =
          Current.RelativeDifference; /* Attention: pt */
      }

      if((Num_Iteration > Operation_P->Case.IterativeLoop.NbrMaxIteration) ||
         (Current.RelativeDifference !=
          Current.RelativeDifference)) // NaN or Inf
      {
        // Num_Iteration = Operation_P->Case.IterativeLoop.NbrMaxIteration ;
        Flag_IterativeLoopConverged = 0;
        // Message::Info(3, "IterativeLoop did NOT converge (%d iterations,
        // residual %g)",
        Message::Warning(
          "IterativeLoop did NOT converge (%d iterations, residual %g)",
          Num_Iteration, Current.RelativeDifference);
        // Either it has reached the max num of iterations or a NaN at a given
        // iteration
        Num_Iteration = Operation_P->Case.IterativeLoop.NbrMaxIteration;
      }
      else {
        Message::Info(3,
                      "IterativeLoop converged (%d iteration%s, residual %g)",
                      Num_Iteration, Num_Iteration > 1 ? "s" : "",
                      Current.RelativeDifference);
      }
      Current.Iteration = Save_Iteration;
      break;

    case OPERATION_ITERATIVELINEARSOLVER:
      Message::Info("IterativeLinearSolver ...");
      Operation_IterativeLinearSolver(Resolution_P, Operation_P, DofData_P0,
                                      GeoData_P0);
      break;

    case OPERATION_BROADCASTFIELDS:
      Message::Info("BroadcastFields ...");
      Operation_BroadcastFields(Resolution_P, Operation_P, DofData_P0,
                                GeoData_P0);
      break;

    case OPERATION_BROADCASTVARIABLES:
      Message::Info("BroadcastVariables ...");
      Operation_BroadcastVariables(Resolution_P, Operation_P, DofData_P0,
                                   GeoData_P0);
      break;

    case OPERATION_GATHERVARIABLES:
      Message::Info("GatherVariables ...");
      Operation_GatherVariables(Resolution_P, Operation_P, DofData_P0,
                                GeoData_P0);
      break;

    case OPERATION_SCATTERVARIABLES:
      Message::Info("ScatterVariables ...");
      Operation_ScatterVariables(Resolution_P, Operation_P, DofData_P0,
                                 GeoData_P0);
      break;

    case OPERATION_CLEARVARIABLES: {
      Message::Info("ClearVariables ...");

      if(List_Nbr(Operation_P->Case.ClearVariables.Names) == 0) {
        Message::Info("ClearVariables: Clear All Run-time Variables");
        Get_AllValueSaved().clear();
      }
      else {
        std::map<std::string, struct Value> &values = Get_AllValueSaved();
        for(int i = 0; i < List_Nbr(Operation_P->Case.ClearVariables.Names);
            i++) {
          char *s;
          List_Read(Operation_P->Case.ClearVariables.Names, i, &s);
          if(values.find(s) != values.end()) {
            Message::Info("ClearVariables: Clear Run-time Variable %s", s);
            values.erase(s);
          }
          else
            Message::Info("ClearVariables: Unknown Run-time Variable %s", s);
        }
      }
    } break;

    case OPERATION_CHECKVARIABLES:
      Message::Info("CheckVariables ...");
      Operation_CheckVariables(Resolution_P, Operation_P, DofData_P0,
                               GeoData_P0);
      break;

    case OPERATION_CLEARVECTORS: {
      Message::Info("ClearVectors ...");
      Operation_ClearVectors(Operation_P, DofData_P);
    } break;

      /*  -->  I t e r a t i v e T i m e R e d u c t i o n  */
      /*  ------------------------------------------------  */

    case OPERATION_ITERATIVETIMEREDUCTION:
      Message::Info("IterativeTimeReduction ...");

      Operation_IterativeTimeReduction(Resolution_P, Operation_P, DofData_P0,
                                       GeoData_P0);
      break;

      /*  -->  T e s t                                */
      /*  ------------------------------------------  */

    case OPERATION_TEST:
      Message::Info("Test");
      Get_ValueOfExpressionByIndex(Operation_P->Case.Test.ExpressionIndex, NULL,
                                   0., 0., 0., &Value);
      if(Value.Val[0]) {
        Treatment_Operation(Resolution_P, Operation_P->Case.Test.Operation_True,
                            DofData_P0, GeoData_P0, NULL, NULL);
      }
      else {
        if(Operation_P->Case.Test.Operation_False)
          Treatment_Operation(Resolution_P,
                              Operation_P->Case.Test.Operation_False,
                              DofData_P0, GeoData_P0, NULL, NULL);
      }
      break;

      /*  -->  W h i l e                              */
      /*  ------------------------------------------  */

    case OPERATION_WHILE:
      Message::Info("While...");
      while(1) {
        if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount())
          break;

        Get_ValueOfExpressionByIndex(Operation_P->Case.While.ExpressionIndex,
                                     NULL, 0., 0., 0., &Value);
        if(!Value.Val[0]) break;
        Treatment_Operation(Resolution_P, Operation_P->Case.While.Operation,
                            DofData_P0, GeoData_P0, NULL, NULL);
        if(Flag_Break) {
          Flag_Break = 0;
          break;
        }
      }
      break;

      /*  -->  F o u r i e r T r a n s f o r m        */
      /*  ------------------------------------------  */

    case OPERATION_FOURIERTRANSFORM2:
      Message::Info("FourierTransform");

      if(gSCALAR_SIZE == 2) {
        Message::Error(
          "FIXME: FourierTransform2 will not work in complex arithmetic");
        break;
      }

      DofData_P =
        DofData_P0 + Operation_P->Case.FourierTransform2.DefineSystemIndex[0];
      DofData2_P =
        DofData_P0 + Operation_P->Case.FourierTransform2.DefineSystemIndex[1];

      NbrHar1 = DofData_P->NbrHar;
      NbrDof1 = List_Nbr(DofData_P->DofList);
      NbrHar2 = DofData2_P->NbrHar;
      NbrDof2 = List_Nbr(DofData2_P->DofList);

      if(NbrHar1 != 1 || NbrHar2 < 2 || NbrDof2 != (NbrDof1 * NbrHar2)) {
        Message::Error("Uncompatible System definitions for FourierTransform"
                       " (NbrHar = %d|%d   NbrDof = %d|%d)",
                       NbrHar1, NbrHar2, NbrDof1, NbrDof2);
        break;
      }
      if(!DofData2_P->Solutions) {
        DofData2_P->Solutions = List_Create(1, 1, sizeof(struct Solution));
        Operation_P->Case.FourierTransform2.Scales =
          (double *)Malloc(NbrHar2 * sizeof(double));
      }

      Nbr_Sol = List_Nbr(DofData2_P->Solutions);
      Scales = Operation_P->Case.FourierTransform2.Scales;

      if((Operation_P->Case.FourierTransform2.Period_sofar + Current.DTime >
          Operation_P->Case.FourierTransform2.Period) &&
         Nbr_Sol) {
        Message::Info("Normalizing and finalizing Fourier Analysis"
                      " (solution  %d) (Period: %e out of %e)",
                      Nbr_Sol, Operation_P->Case.FourierTransform2.Period_sofar,
                      Operation_P->Case.FourierTransform2.Period);
        for(int i = 0; i < NbrHar2; i++)
          Message::Info("Har  %d : Scales %e ", i, Scales[i]);

        Solution_P =
          (struct Solution *)List_Pointer(DofData2_P->Solutions, Nbr_Sol - 1);

        for(int j = 0; j < DofData2_P->NbrDof; j += NbrHar2) {
          NumDof = ((struct Dof *)List_Pointer(DofData2_P->DofList, j))
                     ->Case.Unknown.NumDof -
                   1;
          for(int k = 0; k < NbrHar2; k++) {
            LinAlg_GetDoubleInVector(&d1, &Solution_P->x, NumDof + k);
            if(Scales[k]) d1 /= Scales[k];
            LinAlg_SetDoubleInVector(d1, &Solution_P->x, NumDof + k);
          }
        }
        Operation_P->Case.FourierTransform2.Period_sofar = 0;
        break;
      }

      if(Operation_P->Case.FourierTransform2.Period_sofar == 0) {
        Message::Info("Starting new Fourier Analysis : solution %d ", Nbr_Sol);
        Solution_S.TimeStep = Nbr_Sol;
        Solution_S.Time = Nbr_Sol;
        Solution_S.TimeFunctionValues = NULL;
        Solution_S.SolutionExist = 1;
        LinAlg_CreateVector(&Solution_S.x, &DofData2_P->Solver,
                            DofData2_P->NbrDof);
        LinAlg_ZeroVector(&Solution_S.x);
        List_Add(DofData2_P->Solutions, &Solution_S);
        Nbr_Sol++;
        for(int k = 0; k < NbrHar2; k++) Scales[k] = 0;
      }

      DofData2_P->CurrentSolution = Solution_P =
        (struct Solution *)List_Pointer(DofData2_P->Solutions, Nbr_Sol - 1);

      for(int k = 0; k < NbrHar2; k += 2) {
        d = DofData2_P->Val_Pulsation[k / 2] * Current.Time;
        Scales[k] += cos(d) * cos(d) * Current.DTime;
        Scales[k + 1] += sin(d) * sin(d) * Current.DTime;
      }

      for(int j = 0; j < NbrDof1; j++) {
        Dof_GetRealDofValue(
          DofData_P, (struct Dof *)List_Pointer(DofData_P->DofList, j), &dd);
        NumDof = ((struct Dof *)List_Pointer(DofData2_P->DofList, j * NbrHar2))
                   ->Case.Unknown.NumDof -
                 1;

        if(((struct Dof *)List_Pointer(DofData2_P->DofList, j * NbrHar2))
             ->Type != DOF_UNKNOWN)
          Message::Info("Dof not unknown %d", j);

        for(int k = 0; k < NbrHar2; k += 2) {
          d = DofData2_P->Val_Pulsation[k / 2] * Current.Time;
          LinAlg_AddDoubleInVector(dd * cos(d) * Current.DTime, &Solution_P->x,
                                   NumDof + k);
          LinAlg_AddDoubleInVector(-dd * sin(d) * Current.DTime, &Solution_P->x,
                                   NumDof + k + 1);
        }
      }

      Operation_P->Case.FourierTransform2.Period_sofar += Current.DTime;
      break;

    case OPERATION_FOURIERTRANSFORM:
      Message::Info("FourierTransform");

      DofData_P =
        DofData_P0 + Operation_P->Case.FourierTransform.DefineSystemIndex[0];
      DofData2_P =
        DofData_P0 + Operation_P->Case.FourierTransform.DefineSystemIndex[1];

      if(!DofData2_P->Solutions) {
        int k = List_Nbr(Operation_P->Case.FourierTransform.Frequency);

        if(DofData2_P->NbrDof != gCOMPLEX_INCREMENT * DofData_P->NbrDof) {
          Message::Error(
            "Uncompatible System definitions for FourierTransform");
          break;
        }
        DofData2_P->Solutions = List_Create(k, 1, sizeof(struct Solution));

        for(int i = 0; i < k; i++) {
          List_Read(Operation_P->Case.FourierTransform.Frequency, i, &d);
          Solution_S.TimeStep = i;
          Solution_S.Time = TWO_PI * d;
          Solution_S.TimeImag = 0.;
          Solution_S.TimeFunctionValues = NULL;
          Solution_S.SolutionExist = 1;
          LinAlg_CreateVector(&Solution_S.x, &DofData2_P->Solver,
                              DofData2_P->NbrDof);
          LinAlg_ZeroVector(&Solution_S.x);
          List_Add(DofData2_P->Solutions, &Solution_S);
        }
        DofData2_P->CurrentSolution =
          (struct Solution *)List_Pointer(DofData2_P->Solutions, k / 2);
      }

      for(int i = 0; i < List_Nbr(DofData2_P->Solutions); i++) {
        Solution_P = (struct Solution *)List_Pointer(DofData2_P->Solutions, i);
        d = Solution_P->Time * Current.Time;
        for(int j = 0, k = 0; j < DofData_P->NbrDof;
            j++, k += gCOMPLEX_INCREMENT) {
          LinAlg_GetDoubleInVector(&d2, &DofData_P->CurrentSolution->x, j);
          LinAlg_AddComplexInVector(d2 * cos(d) * Current.DTime,
                                    -d2 * sin(d) * Current.DTime,
                                    &Solution_P->x, k, k + 1);
        }
      }
      break;

      /*  -->  P r i n t / W r i t e                  */
      /*  ------------------------------------------  */

    case OPERATION_WRITE: Flag_Binary = 1;
    case OPERATION_PRINT:
      if(Operation_P->Case.Print.FileOut) {
        if(Operation_P->Case.Print.FileOut[0] == '/' ||
           Operation_P->Case.Print.FileOut[0] == '\\') {
          strcpy(FileName, Operation_P->Case.Print.FileOut);
        }
        else {
          strcpy(FileName, Name_Path);
          strcat(FileName, Operation_P->Case.Print.FileOut);
        }
        if(!(fp = FOpen(FileName, "ab"))) {
          Message::Error("Unable to open file '%s'", FileName);
          break;
        }
        Message::Info("Print -> '%s'", FileName);
      }
      else {
        fp = stdout;
        Message::Info("Print");
      }

      if(Operation_P->Case.Print.Expressions) {
        List_T *list = 0;
        if(Operation_P->Case.Print.FormatString)
          list = List_Create(10, 10, sizeof(double));
        for(int i = 0; i < List_Nbr(Operation_P->Case.Print.Expressions); i++) {
          int j;
          List_Read(Operation_P->Case.Print.Expressions, i, &j);
          Get_ValueOfExpressionByIndex(j, NULL, 0., 0., 0., &Value);
          if(list)
            List_Add(list, &Value.Val[0]);
          else
            Print_Value(&Value, fp);
        }
        if(list) {
          char buffer[1024];
          Print_ListOfDouble(Operation_P->Case.Print.FormatString, list,
                             buffer);
          Message::Direct(3, buffer);
          if(fp != stdout) fprintf(fp, "%s\n", buffer);
          List_Delete(list);
        }
      }
      else if(Operation_P->Case.Print.DofNumber) {
        DofData_P = DofData_P0 + Operation_P->DefineSystemIndex;
        for(int i = 0; i < List_Nbr(Operation_P->Case.Print.DofNumber); i++) {
          int j = *(int *)List_Pointer(Operation_P->Case.Print.DofNumber, i);
          if(j >= 0 && j < DofData_P->NbrDof) {
            if(Operation_P->Case.Print.TimeStep)
              for(int k = 0; k < List_Nbr(Operation_P->Case.Print.TimeStep);
                  k++) {
                int l =
                  *(int *)List_Pointer(Operation_P->Case.Print.TimeStep, k);
                if(l >= 0 && l < List_Nbr(DofData_P->Solutions)) {
                  Solution_P =
                    (struct Solution *)List_Pointer(DofData_P->Solutions, l);
                  LinAlg_GetScalarInVector(&tmp, &Solution_P->x, j);
                  if(Flag_Binary) { LinAlg_WriteScalar(fp, &tmp); }
                  else {
                    LinAlg_PrintScalar(fp, &tmp);
                    fprintf(fp, " ");
                  }
                }
                else
                  Message::Warning("Print of Dof out of TimeStep range [0,%d]",
                                   List_Nbr(DofData_P->Solutions) - 1);
              }
            else {
              LinAlg_GetScalarInVector(&tmp, &DofData_P->CurrentSolution->x, j);
              if(Flag_Binary) { LinAlg_WriteScalar(fp, &tmp); }
              else {
                LinAlg_PrintScalar(fp, &tmp);
                fprintf(fp, " ");
              }
            }
          }
          else
            Message::Warning(
              "Wrong number of Dof to Print (%d is out of [0,%d])", j,
              DofData_P->NbrDof - 1);
        }
        fprintf(fp, "\n");
      }
      else {
        DofData_P = DofData_P0 + Operation_P->DefineSystemIndex;
        if(Flag_Binary) {
          LinAlg_WriteMatrix(fp, &DofData_P->A);
          LinAlg_WriteVector(fp, &DofData_P->b);
        }
        else {
          // use matlab format if available
          DefineSystem_P = (struct DefineSystem *)List_Pointer(
            Resolution_P->DefineSystem, Operation_P->DefineSystemIndex);
          std::string path(Name_Path), file("file_");
          std::string mat("mat_"), vec("vec_"), sol("sol_");
          std::string jac("jac_"), res("res_"), dx("dx_");
          std::string name(Operation_P->Case.Print.FileOut ?
                             Operation_P->Case.Print.FileOut :
                             DefineSystem_P->Name);
          if(DofData_P->Flag_Init[1] || DofData_P->Flag_Init[2] ||
             DofData_P->Flag_Init[3] || DofData_P->Flag_Init[4] ||
             DofData_P->Flag_Init[5] || DofData_P->Flag_Init[6] ||
             DofData_P->Flag_Init[7]) {
            if(DofData_P->Flag_Init[1]) {
              std::string name1 = name + "1";
              LinAlg_PrintMatrix(fp, &DofData_P->M1, true,
                                 (path + file + mat + name1 + ".m").c_str(),
                                 (mat + name).c_str());
              LinAlg_PrintVector(fp, &DofData_P->m1, true,
                                 (path + file + vec + name1 + ".m").c_str(),
                                 (vec + name1).c_str());
            }
            if(DofData_P->Flag_Init[2]) {
              std::string name1 = name + "2";
              LinAlg_PrintMatrix(fp, &DofData_P->M2, true,
                                 (path + file + mat + name1 + ".m").c_str(),
                                 (mat + name1).c_str());
              LinAlg_PrintVector(fp, &DofData_P->m2, true,
                                 (path + file + vec + name1 + ".m").c_str(),
                                 (vec + name1).c_str());
            }
            if(DofData_P->Flag_Init[3]) {
              std::string name1 = name + "3";
              LinAlg_PrintMatrix(fp, &DofData_P->M3, true,
                                 (path + file + mat + name1 + ".m").c_str(),
                                 (mat + name1).c_str());
              LinAlg_PrintVector(fp, &DofData_P->m3, true,
                                 (path + file + vec + name1 + ".m").c_str(),
                                 (vec + name1).c_str());
            }
            if(DofData_P->Flag_Init[4]) {
              std::string name1 = name + "4";
              LinAlg_PrintMatrix(fp, &DofData_P->M4, true,
                                 (path + file + mat + name1 + ".m").c_str(),
                                 (mat + name1).c_str());
              LinAlg_PrintVector(fp, &DofData_P->m4, true,
                                 (path + file + vec + name1 + ".m").c_str(),
                                 (vec + name1).c_str());
            }
            if(DofData_P->Flag_Init[5]) {
              std::string name1 = name + "5";
              LinAlg_PrintMatrix(fp, &DofData_P->M5, true,
                                 (path + file + mat + name1 + ".m").c_str(),
                                 (mat + name1).c_str());
              LinAlg_PrintVector(fp, &DofData_P->m5, true,
                                 (path + file + vec + name1 + ".m").c_str(),
                                 (vec + name1).c_str());
            }
            if(DofData_P->Flag_Init[6]) {
              std::string name1 = name + "6";
              LinAlg_PrintMatrix(fp, &DofData_P->M6, true,
                                 (path + file + mat + name1 + ".m").c_str(),
                                 (mat + name1).c_str());
              LinAlg_PrintVector(fp, &DofData_P->m6, true,
                                 (path + file + vec + name1 + ".m").c_str(),
                                 (vec + name1).c_str());
            }
            if(DofData_P->Flag_Init[7]) {
              std::string name1 = name + "7";
              LinAlg_PrintMatrix(fp, &DofData_P->M7, true,
                                 (path + file + mat + name1 + ".m").c_str(),
                                 (mat + name1).c_str());
              LinAlg_PrintVector(fp, &DofData_P->m7, true,
                                 (path + file + vec + name1 + ".m").c_str(),
                                 (vec + name1).c_str());
            }
          }
          else {
            if(DofData_P->Flag_Init[0]) {
              LinAlg_PrintMatrix(fp, &DofData_P->A, true,
                                 (path + file + mat + name + ".m").c_str(),
                                 (mat + name).c_str());
              LinAlg_PrintVector(fp, &DofData_P->b, true,
                                 (path + file + vec + name + ".m").c_str(),
                                 (vec + name).c_str());
            }
            if(DofData_P->Flag_Init[0] == 2) {
              LinAlg_PrintMatrix(fp, &DofData_P->Jac, true,
                                 (path + file + jac + name + ".m").c_str(),
                                 (jac + name).c_str());
              LinAlg_PrintVector(fp, &DofData_P->res, true,
                                 (path + file + res + name + ".m").c_str(),
                                 (res + name).c_str());
              LinAlg_PrintVector(fp, &DofData_P->dx, true,
                                 (path + file + dx + name + ".m").c_str(),
                                 (dx + name).c_str());
            }
          }
          if(DofData_P->CurrentSolution)
            LinAlg_PrintVector(fp, &DofData_P->CurrentSolution->x, true,
                               (path + file + sol + name + ".m").c_str(),
                               (sol + name).c_str());
        }
      }
      fflush(fp);
      if(Operation_P->Case.Print.FileOut) {
        fclose(fp);
        fp = stdout;
      }
      Flag_Binary = 0;
      break;

    case OPERATION_DEBUG:
      Init_OperationOnSystem("Debug", Resolution_P, Operation_P, DofData_P0,
                             GeoData_P0, &DefineSystem_P, &DofData_P,
                             Resolution2_P);
      Operation_Debug(Operation_P, DofData_P);
      break;

      /*  -->  C h a n g e O f C o o r d i n a t e s */
      /*  ------------------------------------------ */

    case OPERATION_CHANGEOFCOORDINATES:
      if(Message::GetVerbosity() == 10) // +++
        Message::Info("ChangeOfCoordinates");
      /* Geo_SetCurrentGeoData(Current.GeoData = GeoData_P0) ; */
      Operation_ChangeOfCoordinates(Resolution_P, Operation_P, DofData_P0,
                                    GeoData_P0);
      break;

      /*  -->  D e f o r m e M e s h                 */
      /*  ------------------------------------------ */

    case OPERATION_DEFORMMESH: {
      if(Operation_P->Case.DeformMesh.Name_MshFile == NULL)
        Operation_P->Case.DeformMesh.Name_MshFile = Name_MshFile;
      Message::Info(
        "DeformMesh[%s, %s, '%s']",
        ((struct DefineSystem *)List_Pointer(Resolution_P->DefineSystem,
                                             Operation_P->DefineSystemIndex))
          ->Name,
        Operation_P->Case.DeformMesh.Quantity,
        Operation_P->Case.DeformMesh.Name_MshFile);
      int i;
      if((i = List_ISearchSeq(GeoData_L,
                              Operation_P->Case.DeformMesh.Name_MshFile,
                              fcmp_GeoData_Name)) < 0) {
        Message::Error("DeformMesh: Wrong NameOfMeshFile %s",
                       Operation_P->Case.DeformMesh.Name_MshFile);
        break;
      }
      Operation_P->Case.DeformMesh.GeoDataIndex = i;

      Operation_DeformMesh(Resolution_P, Operation_P, DofData_P0, GeoData_P0);
    } break;

      /*  -->  P o s t O p e r a t i o n  */
      /*  ------------------------------- */

    case OPERATION_POSTOPERATION:
      Message::Info("PostOperation");
      Operation_PostOperation(Resolution_P, DofData_P0, GeoData_P0,
                              Operation_P->Case.PostOperation.PostOperations);
      break;

      /*  -->  D e l e t e F i l e  */
      /*  ------------------------- */

    case OPERATION_DELETEFILE:
      Message::Info("DeleteFile[%s]", Operation_P->Case.DeleteFile.FileName);
      RemoveFile(Operation_P->Case.DeleteFile.FileName);
      break;

      /*  -->  R e n a m e F i l e  */
      /*  ------------------------- */

    case OPERATION_RENAMEFILE:
      Message::Info("RenameFile[%s, %s]",
                    Operation_P->Case.RenameFile.OldFileName,
                    Operation_P->Case.RenameFile.NewFileName);
      RenameFile(Operation_P->Case.RenameFile.OldFileName,
                 Operation_P->Case.RenameFile.NewFileName);
      break;

      /*  -->  C r e a t e D i r   */
      /*  ------------------------ */

    case OPERATION_CREATEDIR:
      Message::Info("CreateDir[%s]", Operation_P->Case.CreateDir.DirName);
      CreateDirs(Operation_P->Case.CreateDir.DirName);
      break;

      /*  -->  T i m e L o o p A d a p t i v e  */
      /*  ------------------------------------- */

    case OPERATION_TIMELOOPADAPTIVE:
      Message::Info("TimeLoopAdaptve ...");
      Save_TypeTime = Current.TypeTime;
      Save_DTime = Current.DTime;
      Operation_TimeLoopAdaptive(Resolution_P, Operation_P, DofData_P0,
                                 GeoData_P0, &Flag_Break);
      Current.TypeTime = Save_TypeTime;
      Current.DTime = Save_DTime;
      break;

      /*  -->  I t e r a t i v e L o o p N            */
      /*  ------------------------------------------  */

    case OPERATION_ITERATIVELOOPN:
      Message::Info("IterativeLoopN ...");
      Save_Iteration = Current.Iteration;
      Operation_IterativeLoopN(Resolution_P, Operation_P, DofData_P0,
                               GeoData_P0, Resolution2_P, DofData2_P0,
                               &Flag_Break);
      Current.Iteration = Save_Iteration;
      break;

      /*  -->  S e t E x t r a p o l a t i o n O r d e r */
      /*  ---------------------------------------------  */

    case OPERATION_SETEXTRAPOLATIONORDER:
      Message::Info("SetExtrapolationOrder [%d]...",
                    Operation_P->Case.SetExtrapolationOrder.order);
      Flag_ExtrapolationOrder = Operation_P->Case.SetExtrapolationOrder.order;
      if(Flag_ExtrapolationOrder < 0) Flag_ExtrapolationOrder = 0;
      break;

      /*  -->  T i m e L o o p R u n g e K u t t a  */
      /*  ----------------------------------------- */

    case OPERATION_TIMELOOPRUNGEKUTTA: {
      Init_OperationOnSystem("TimeLoopRungeKutta", Resolution_P, Operation_P,
                             DofData_P0, GeoData_P0, &DefineSystem_P,
                             &DofData_P, Resolution2_P);
      int numStepRK = List_Nbr(Operation_P->Case.TimeLoopRungeKutta.ButcherC);
      if(numStepRK != List_Nbr(Operation_P->Case.TimeLoopRungeKutta.ButcherB) ||
         numStepRK * numStepRK !=
           List_Nbr(Operation_P->Case.TimeLoopRungeKutta.ButcherA)) {
        Message::Error("Incompatible sizes of Butcher Tableaux");
        break;
      }
      Current.Time = Operation_P->Case.TimeLoopRungeKutta.Time0;
      gVector xn, rhs;
      LinAlg_CreateVector(&xn, &DofData_P->Solver, Current.DofData->NbrDof);
      LinAlg_CreateVector(&rhs, &DofData_P->Solver, Current.DofData->NbrDof);
      std::vector<gVector> ki(numStepRK);
      for(int i = 0; i < numStepRK; i++)
        LinAlg_CreateVector(&ki[i], &DofData_P->Solver,
                            Current.DofData->NbrDof);

      while(Current.Time <
            Operation_P->Case.TimeLoopRungeKutta.TimeMax * 0.9999999) {
        if(Message::GetOnelabAction() == "stop" || Message::GetErrorCount())
          break;

        double tn = Current.Time;
        LinAlg_CopyVector(&DofData_P->CurrentSolution->x, &xn);
        Get_ValueOfExpressionByIndex(
          Operation_P->Case.TimeLoopRungeKutta.DTimeIndex, NULL, 0., 0., 0.,
          &Value);
        Current.DTime = Value.Val[0];
        Current.TimeStep += 1.;
        for(int i = 0; i < numStepRK; i++) {
          double ci;
          List_Read(Operation_P->Case.TimeLoopRungeKutta.ButcherC, i, &ci);
          Current.Time = tn + ci * Current.DTime;
          LinAlg_CopyVector(&xn, &DofData_P->CurrentSolution->x);
          // FIXME: warning, this assumes an explicit RK scheme!
          for(int j = 0; j < i; j++) {
            double aij;
            List_Read(Operation_P->Case.TimeLoopRungeKutta.ButcherA,
                      i * numStepRK + j, &aij);
            LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x,
                                             &ki[j], aij,
                                             &DofData_P->CurrentSolution->x);
          }
          Current.TypeAssembly = ASSEMBLY_SEPARATE;
          Init_SystemData(DofData_P, Flag_Jac);
          Generate_System(DefineSystem_P, DofData_P, DofData_P0, Flag_Jac, 1);
          LinAlg_ProdMatrixVector(&DofData_P->M1,
                                  &DofData_P->CurrentSolution->x, &rhs);
          LinAlg_ProdVectorDouble(&rhs, -1., &rhs);
          LinAlg_AddVectorProdVectorDouble(&rhs, &DofData_P->b, 1., &rhs);
          LinAlg_ProdVectorDouble(&rhs, Current.DTime, &rhs);
          LinAlg_Solve(&DofData_P->M2, &rhs, &DofData_P->Solver, &ki[i]);
        }
        // restore previous time step
        LinAlg_CopyVector(
          &xn, &((struct Solution *)List_Pointer(
                   DofData_P->Solutions, List_Nbr(DofData_P->Solutions) - 2))
                  ->x);
        LinAlg_CopyVector(&xn, &DofData_P->CurrentSolution->x);
        for(int i = 0; i < numStepRK; i++) {
          double bi;
          List_Read(Operation_P->Case.TimeLoopRungeKutta.ButcherB, i, &bi);
          LinAlg_AddVectorProdVectorDouble(&DofData_P->CurrentSolution->x,
                                           &ki[i], bi,
                                           &DofData_P->CurrentSolution->x);
        }

        Current.Time = tn + Current.DTime;

        if(Flag_Break) {
          Flag_Break = 0;
          break;
        }
      }
    } break;

    case OPERATION_BREAK: Flag_Break = 1; break;

    case OPERATION_EXIT: Message::Exit(0); break;

    case OPERATION_SLEEP:
      Get_ValueOfExpressionByIndex(Operation_P->Case.Sleep.ExpressionIndex,
                                   NULL, 0., 0., 0., &Value);
      Message::Info("Sleeping for %g seconds", Value.Val[0]);
      SleepSeconds(Value.Val[0]);
      break;

      /*  -->  P a r a l l e l   C o m p u t i n g	  */
      /*  ------------------------------------------  */

    case OPERATION_SETCOMMSELF: LinAlg_SetCommSelf(); break;

    case OPERATION_SETCOMMWORLD: LinAlg_SetCommWorld(); break;

    case OPERATION_BARRIER:
#if defined(HAVE_PETSC)
      Message::Info("Barrier: waiting");
      MPI_Barrier(PETSC_COMM_WORLD);
      Message::Info("Barrier: let's continue");
#endif
      break;

      /*  -->  O p t i m i z e r                      */
      /*  ------------------------------------------  */

    case OPERATION_OPTIMIZER_INITIALIZE:
      Operation_OptimizerInitialize(Operation_P);
      break;

    case OPERATION_OPTIMIZER_UPDATE:
      Operation_OptimizerUpdate(Operation_P);
      break;

    case OPERATION_OPTIMIZER_FINALIZE:
      Operation_OptimizerFinalize(Operation_P);
      break;

      /*  -->  O t h e r                              */
      /*  ------------------------------------------  */

    default: Message::Warning("Operation: ? ? ?"); break;
    }
  }

  Message::Barrier();
}
