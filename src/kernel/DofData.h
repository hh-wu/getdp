// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef DOFDATA_H
#define DOFDATA_H

#include <vector>
#include "ListUtils.h"
#include "TreeUtils.h"
#include "LinAlg.h"

#define DOF_PRE 1
#define DOF_RES 2
#define DOF_TMP 3

struct Solution {
  int TimeStep; /* Must be first member of struct (for
       searching purposes) */
  double Time, TimeImag;
  int SolutionExist;
  double *TimeFunctionValues, ExplicitTimeFunctionValue;
  double Frequency;
  gVector x;
};

struct Dof {
  int NumType; /* Key 1 */
  int Entity; /* Key 2 */
  int Harmonic; /* Key 3 */

  int Type;

  /* Val must be out of the union (a member with constructor (gScalar with
     PETSc) is not allowed in a union); Val holds the init value for
     Type==Unknown, and the assigned value for Type==FixedAssociate. Val is not
     used for Type==Link. Val2 potentially holds a second init value for
     Type==Unknown */
  gScalar Val, Val2;

  union {
    struct {
      int NumDof; /* Equation number - 1st position */
      bool NonLocal; /* Set to true if equation is non-local */
    } Unknown;
    struct {
      int NumDof; /* Equation number (Associate) - 1st position */
      int TimeFunctionIndex;
    } FixedAssociate;
    struct {
      int EntityRef;
      double Coef, Coef2;
      struct Dof *Dof;
    } Link;
  } Case;
};

/* Dof.Type */

/* definitive in preprocessing and processing */
#define DOF_UNKNOWN 1 /* unknown */
#define DOF_FIXED 2 /* spatial fixed */
#define DOF_FIXEDWITHASSOCIATE 3 /* associate */
#define DOF_LINK 7 /* link */
#define DOF_LINKCPLX 8 /* linkcplx */

/* definitive in a preprocessing */
#define DOF_UNKNOWN_INIT 5 /* initial condition */

/* temporary */
#define DOF_FIXED_SOLVE 4 /* waiting to be fixed by a resolution */
#define DOF_FIXEDWITHASSOCIATE_SOLVE                                           \
  6 /* waiting to be fixed by a resolution                                     \
     */

struct CorrectionSolutions {
  List_T *Solutions;
};

struct DofData {
  int Num;

  int ResolutionIndex, SystemIndex;
  int GeoDataIndex;
  List_T *FunctionSpaceIndex;
  List_T *TimeFunctionIndex;

  List_T *Pulsation;
  int NbrHar;
  double *Val_Pulsation;

  int NbrAnyDof, NbrDof;
  Tree_T *DofTree;
  List_T *DofList;

  int *DummyDof;

  char *SolverDataFileName;
  List_T *Solutions;
  struct Solution *CurrentSolution;
  struct Solution *Save_CurrentSolution;

  struct {
    int Flag;
    List_T *Save_FullSolutions;
    struct Solution *Save_CurrentFullSolution;
    List_T *AllSolutions;
  } CorrectionSolutions;

  int Flag_RHS; // only assemble RHS
  int Flag_ListOfRHS; // only assemble list of RHS
  int Flag_Init[8];
  int Flag_Only;
  int Flag_InitOnly[3];

  // For recalculating only the matrices that are required
  List_T *OnlyTheseMatrices;

  // Flag_Init[0] == 1 || Flag_Init[0] == 2
  gMatrix A;
  gVector b;
  gSolver Solver;

  // Flag_Init[0] == 2
  gMatrix Jac;
  gVector res, dx;

  // Flag_Init[0] == 3
  gVector df;

  // Flag_Init[1,2,3,4,5,6,7] == 1
  gMatrix M1, M2, M3, M4, M5, M6, M7;
  gVector m1, m2, m3, m4, m5, m6, m7;
  List_T *m1s, *m2s, *m3s, *m4s, *m5s, *m6s, *m7s;

  // Flag_Only and Flag_InitOnly[0,1,2]
  gMatrix A1, A2, A3;
  gVector b1, b2, b3;

  // Flag_ListOfRHS
  std::vector<gVector> ListOfRHS;
  int CounterOfRHS, TotalNumberOfRHS;

  gMatrix A_MH_moving;
  gVector b_MH_moving;

  std::vector<int> NonLocalEquations;
};

int fcmp_Dof(const void *a, const void *b);

void Dof_InitDofData(struct DofData *DofData_P, int Num, int ResolutionIndex,
                     int SystemIndex, char *Name_SolverDataFile);
void Dof_FreeDofData(struct DofData *DofData_P);

void Dof_SetCurrentDofData(struct DofData *DofData_P);

void Dof_OpenFile(int Type, char *Name, const char *Mode);
void Dof_CloseFile(int Type);
void Dof_FlushFile(int Type);

void Dof_WriteFilePRE0(int Num_Resolution, char *Name_Resolution,
                       int Nbr_DofData);
void Dof_ReadFilePRE0(int *Num_Resolution, int *Nbr_DofData);
void Dof_WriteFilePRE(struct DofData *DofData_P);
void Dof_WriteDofPRE(void *a, void *b);
void Dof_ReadFilePRE(struct DofData *DofData_P);

void Dof_WriteFileRES0(char *Name_File, int Format);
void Dof_ReadFileRES0(void);
void Dof_WriteFileRES(char *Name_File, struct DofData *DofData_P, int Format,
                      double Val_Time, double Val_TimeImag, int Val_TimeStep, float Val_Frequency = 0.0);
void Dof_ReadFileRES(List_T *DofData_L, struct DofData *Read_DofData_P,
                     int Read_DofData, double *Time, double *TimeImag,
                     double *TimeStep);
void Dof_WriteFileRES_ExtendMH(char *Name_File, struct DofData *DofData_P,
                               int Format, int NbrH);
void Dof_WriteFileRES_MHtoTime(char *Name_File, struct DofData *DofData_P,
                               int Format, List_T *Time_L);
void Dof_WriteFileRES_WithEntityNum(char *Name_File, struct DofData *DofData_P,
                                    struct GeoData *GeoData_P0,
                                    struct Group *Group_P, bool saveFixed);

void Dof_TransferDofTreeToList(struct DofData *DofData_P);
void Dof_InitDofType(struct DofData *DofData_P);
void Dof_DeleteDofTree(struct DofData *DofData_P);

void Dof_AddFunctionSpaceIndex(int Index_FunctionSpace);
void Dof_AddTimeFunctionIndex(int Index_TimeFunction);
void Dof_AddPulsation(struct DofData *DofData_P, double Val_Pulsation);

void Dof_DefineAssignFixedDof(int D1, int D2, int NbrHar, double *Val,
                              int Index_TimeFunction);
void Dof_DefineInitFixedDof(int D1, int D2, int NbrHar, double *Val,
                            double *Val2, bool NonLocal = false);
void Dof_DefineAssignSolveDof(int D1, int D2, int NbrHar,
                              int Index_TimeFunction);
void Dof_DefineInitSolveDof(int D1, int D2, int NbrHar);
void Dof_DefineLinkDof(int D1, int D2, int NbrHar, double Value[], int D2_Link);
void Dof_DefineLinkCplxDof(int D1, int D2, int NbrHar, double Value[],
                           int D2_Link);
void Dof_DefineUnknownDof(int D1, int D2, int NbrHar, bool NonLocal = false);
void Dof_DefineAssociateDof(int E1, int E2, int D1, int D2, int NbrHar,
                            int init, double *Val);
void Dof_DefineUnknownDofFromSolveOrInitDof(struct DofData **DofData_P);

void Dof_NumberUnknownDof(void);

void Dof_UpdateAssignFixedDof(int D1, int D2, int NbrHar, double *Val,
                              double *Val2);
void Dof_UpdateLinkDof(int D1, int D2, int NbrHar, double Value[], int D2_Link);

void Dof_AssembleInMat(struct Dof *Equ_P, struct Dof *Dof_P, int NbrHar,
                       double *Val, gMatrix *Mat, gVector *Vec,
                       List_T *Vecs = 0);
void Dof_AssembleInVec(struct Dof *Equ_P, struct Dof *Dof_P, int NbrHar,
                       double *Val, struct Solution *OtherSolution,
                       gVector *Vec0, gVector *Vec);

void Dof_TransferSolutionToConstraint(struct DofData *DofData_P);
void Dof_TransferDof(struct DofData *DofData1_P, struct DofData **DofData2_P);

struct Dof *Dof_GetDofStruct(struct DofData *DofData_P, int D1, int D2, int D3);
gScalar Dof_GetDofValue(struct DofData *DofData_P, struct Dof *Dof_P);
void Dof_GetRealDofValue(struct DofData *DofData_P, struct Dof *Dof_P,
                         double *d);
void Dof_GetComplexDofValue(struct DofData *DofData_P, struct Dof *Dof_P,
                            double *d1, double *d2);

void Dof_GetDummies(struct DefineSystem *DefineSystem_P,
                    struct DofData *DofData_P);
void Dof_InitDofForNoDof(struct Dof *DofForNoDof, int NbrHar);

void Print_DofNumber(struct Dof *Dof_P);

#endif
