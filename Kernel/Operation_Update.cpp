// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ProData.h"
#include "DofData.h"
#include "SolvingAnalyse.h"
#include "SolvingOperations.h"
#include "Cal_Quantity.h"
#include "Message.h"

extern struct CurrentData Current ;
extern int  Init_Update ;

#define SQU(a)     ((a)*(a))

void Cal_ThetaCoefficients(double *coef)
{
  coef[0] = 1./Current.DTime ;
  coef[1] = Current.Theta ;
  coef[2] = -1./Current.DTime ;
  coef[3] = 1.-Current.Theta ;
}

void Cal_ThetaMatrix(int *init, double *coef,
		     gMatrix *M1, gMatrix *M2, gMatrix *A)
{
  Message::Info("Generate Theta Iteration Matrix (Theta=%g, DTime=%g)",
                Current.Theta, Current.DTime) ;

  LinAlg_AssembleMatrix(A) ;
  LinAlg_ZeroMatrix(A);

  // A = c0 * M2 + c1 * M1
  if(init[2] && coef[0]) LinAlg_AddMatrixProdMatrixDouble(A, M2, coef[0], A) ;
  if(init[1] && coef[1]) LinAlg_AddMatrixProdMatrixDouble(A, M1, coef[1], A) ;
}

void Cal_ThetaRHS(int *init, double *coef,
		  gMatrix *M1, gMatrix *M2, gVector *m1, gVector *m2,
                  List_T *m1s, List_T *m2s,
		  gVector *tmp, gVector *b, bool explicitTimeFunction)
{
  double tfval, val ;

  LinAlg_ZeroVector(b) ;

  // b = [-c2 * M2 - c3 * M1 ] * x(n-1)
  if(init[2] && coef[2]){
    LinAlg_ProdMatrixVector(M2, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[2], b) ;
  }
  if(init[1] && coef[3]){
    LinAlg_ProdMatrixVector(M1, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[3], b) ;
  }

  if(explicitTimeFunction){
    //   + [ c0 * m2 + c1 * m1 ] * TimeFct(n)
    tfval = Current.DofData->CurrentSolution->ExplicitTimeFunctionValue ;
    if(init[2] && (val=coef[0]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
    if(init[1] && (val=coef[1]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;

    //   + [ c2 * m2 + c3 * m1 ] * TimeFct(n-1)
    tfval = (Current.DofData->CurrentSolution-1)->ExplicitTimeFunctionValue ;
    if(init[2] && (val=coef[2]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
    if(init[1] && (val=coef[3]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;
  }
  else{
    for(int i = 0; i < List_Nbr(Current.DofData->TimeFunctionIndex); i++){
      gVector *mm1 = 0, *mm2 = 0;
      if(init[1]) mm1 = (gVector*)List_Pointer(m1s, i);
      if(init[2]) mm2 = (gVector*)List_Pointer(m2s, i);

      int tfindex;
      List_Read(Current.DofData->TimeFunctionIndex, i, &tfindex) ;

      //   + [ c0 * m2 + c1 * m1 ] * TimeFct(n)
      tfval = Current.DofData->CurrentSolution->TimeFunctionValues[tfindex] ;
      if(init[2] && (val=coef[0]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm2, val, b) ;
      if(init[1] && (val=coef[1]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm1, val, b) ;

      //   + [ c2 * m2 + c3 * m1 ] * TimeFct(n-1)
      tfval = (Current.DofData->CurrentSolution-1)->TimeFunctionValues[tfindex] ;
      if(init[2] && (val=coef[2]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm2, val, b) ;
      if(init[1] && (val=coef[3]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm1, val, b) ;
    }
  }
}

void Cal_NewmarkCoefficients(double *coef)
{
  coef[0] = 1./SQU(Current.DTime) ;
  coef[1] = Current.Gamma/Current.DTime ;
  coef[2] = Current.Beta ;
  coef[3] = -2./SQU(Current.DTime) ;
  coef[4] = (1.-2.*Current.Gamma)/Current.DTime ;
  coef[5] = 0.5+Current.Gamma-2.*Current.Beta ;
  coef[6] = 1./SQU(Current.DTime) ;
  coef[7] = (Current.Gamma-1.)/Current.DTime ;
  coef[8] = 0.5-Current.Gamma+Current.Beta ;
}

void Cal_NewmarkMatrix(int *init, double *coef,
		       gMatrix *M1, gMatrix *M2, gMatrix *M3, gMatrix *A)
{
  Message::Info("Generate Newmark Iteration Matrix (Beta=%g, Gamma=%g, DTime=%g)",
                Current.Beta, Current.Gamma, Current.DTime) ;

  LinAlg_AssembleMatrix(A) ;
  LinAlg_ZeroMatrix(A);

  // A = c0 * M3 + c1 * M2 + c2 * M3
  if(init[3] && coef[0]) LinAlg_AddMatrixProdMatrixDouble(A, M3, coef[0], A);
  if(init[2] && coef[1]) LinAlg_AddMatrixProdMatrixDouble(A, M2, coef[1], A) ;
  if(init[1] && coef[2]) LinAlg_AddMatrixProdMatrixDouble(A, M1, coef[2], A) ;
}

void Cal_NewmarkRHS(int *init, double *coef,
		    gMatrix *M1, gMatrix *M2, gMatrix *M3,
		    gVector *m1, gVector *m2, gVector *m3,
                    List_T *m1s, List_T *m2s, List_T *m3s,
		    gVector *tmp, gVector *b, bool explicitTimeFunction)
{
  double tfval, val ;

  LinAlg_ZeroVector(b) ;

  // b = [-c3 * M3 - c4 * M2 - c5 * M1] * x(n-1)
  if(init[3] && coef[3]){
    LinAlg_ProdMatrixVector(M3, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[3], b) ;
  }
  if(init[2] && coef[4]){
    LinAlg_ProdMatrixVector(M2, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[4], b) ;
  }
  if(init[1] && coef[5]){
    LinAlg_ProdMatrixVector(M1, &(Current.DofData->CurrentSolution-1)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[5], b) ;
  }

  //   + [-c6 * M3 - c7 * M2 - c8 * M1] * x(n-2)
  if(init[3] && coef[6]){
    LinAlg_ProdMatrixVector(M3, &(Current.DofData->CurrentSolution-2)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[6], b) ;
  }
  if(init[2] && coef[7]){
    LinAlg_ProdMatrixVector(M2, &(Current.DofData->CurrentSolution-2)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[7], b) ;
  }
  if(init[1] && coef[8]){
    LinAlg_ProdMatrixVector(M1, &(Current.DofData->CurrentSolution-2)->x, tmp);
    LinAlg_AddVectorProdVectorDouble(b, tmp, -coef[8], b) ;
  }

  if(explicitTimeFunction){
    //   + [ c0 * m3 + c1 * m2 + c2 * m1 ] * TimeFct(n)
    tfval = Current.DofData->CurrentSolution->ExplicitTimeFunctionValue ;
    if(init[3] && (val=coef[0]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m3, val, b) ;
    if(init[2] && (val=coef[1]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
    if(init[1] && (val=coef[2]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;

    //   + [ c3 * m3 + c4 * m2 + c5 * m1 ] * TimeFct(n-1)
    tfval = (Current.DofData->CurrentSolution-1)->ExplicitTimeFunctionValue ;
    if(init[3] && (val=coef[3]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m3, val, b) ;
    if(init[2] && (val=coef[4]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
    if(init[1] && (val=coef[5]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;

    //   + [ c6 * m3 + c7 * m2 + c8 * m1 ] * TimeFct(n-2)
    tfval = (Current.DofData->CurrentSolution-2)->ExplicitTimeFunctionValue ;
    if(init[3] && (val=coef[6]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m3, val, b) ;
    if(init[2] && (val=coef[7]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m2, val, b) ;
    if(init[1] && (val=coef[8]*tfval)) LinAlg_AddVectorProdVectorDouble(b, m1, val, b) ;
  }
  else{
    for(int i = 0; i < List_Nbr(Current.DofData->TimeFunctionIndex); i++){
      gVector *mm1 = 0, *mm2 = 0, *mm3 = 0;
      if(init[1]) mm1 = (gVector*)List_Pointer(m1s, i);
      if(init[2]) mm2 = (gVector*)List_Pointer(m2s, i);
      if(init[3]) mm3 = (gVector*)List_Pointer(m3s, i);

      int tfindex;
      List_Read(Current.DofData->TimeFunctionIndex, i, &tfindex) ;

      //   + [ c0 * m3 + c1 * m2 + c2 * m1 ] * TimeFct(n)
      tfval = Current.DofData->CurrentSolution->TimeFunctionValues[tfindex] ;

      if(init[3] && (val=coef[0]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm3, val, b) ;
      if(init[2] && (val=coef[1]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm2, val, b) ;
      if(init[1] && (val=coef[2]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm1, val, b) ;

      //   + [ c3 * m3 + c4 * m2 + c5 * m1 ] * TimeFct(n-1)
      tfval = (Current.DofData->CurrentSolution-1)->TimeFunctionValues[tfindex] ;

      if(init[3] && (val=coef[3]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm3, val, b) ;
      if(init[2] && (val=coef[4]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm2, val, b) ;
      if(init[1] && (val=coef[5]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm1, val, b) ;

      //   + [ c6 * m3 + c7 * m2 + c8 * m1 ] * TimeFct(n-2)
      tfval = (Current.DofData->CurrentSolution-2)->TimeFunctionValues[tfindex] ;

      if(init[3] && (val=coef[6]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm3, val, b) ;
      if(init[2] && (val=coef[7]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm2, val, b) ;
      if(init[1] && (val=coef[8]*tfval)) LinAlg_AddVectorProdVectorDouble(b, mm1, val, b) ;
    }
  }
}

void Operation_Update(struct DefineSystem * DefineSystem_P,
                      struct DofData * DofData_P,
                      struct DofData * DofData_P0,
                      int TimeFunctionIndex)
{
  int     i, i_TimeStep ;
  struct  Solution  * Solution_P, Solution_S ;
  struct  Value Value ;

  static  gVector TmpVect ;
  static  double coef[9] ;
  static  double Save_Num, Save_DTime, Save_Theta, Save_Beta, Save_Gamma ;

  if (!DofData_P->Solutions)
    Message::Error("No initialized solution available for update") ;

  i_TimeStep = (int)Current.TimeStep ;
  if (!(Solution_P = (struct Solution*)
	List_PQuery(DofData_P->Solutions, &i_TimeStep, fcmp_int))) {

    Solution_S.TimeStep = (int)Current.TimeStep ;
    Solution_S.Time = Current.Time ;
    Solution_S.TimeImag = Current.TimeImag ;
    Solution_S.TimeFunctionValues = Get_TimeFunctionValues(DofData_P);

    if(TimeFunctionIndex >= 0){
      Get_ValueOfExpressionByIndex(TimeFunctionIndex, NULL, 0., 0., 0., &Value) ;
      Solution_S.ExplicitTimeFunctionValue = Value.Val[0] ;
    }

    Solution_S.SolutionExist = 1 ;
    LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, DofData_P->NbrDof) ;
    LinAlg_ZeroVector(&Solution_S.x) ;
    List_Add(DofData_P->Solutions, &Solution_S) ;
    DofData_P->CurrentSolution = (struct Solution*)
      List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;

  }
  else if (Solution_P != DofData_P->CurrentSolution) {
    Message::Error("Incompatible time") ;
  }

  switch (Current.TypeTime) {
  case TIME_THETA :

    if(!DofData_P->Flag_Init[1] && !DofData_P->Flag_Init[2])
      Message::Error("No system available for Update") ;

    if(!Init_Update){
      Init_Update = 1;

      /* bidouillage provisoire : a revoir qd les conditions initiales multiples
         seront mieux traitees */
      Current.Time -= Current.DTime ;
      Current.TimeStep -= 1. ;
      if(TimeFunctionIndex >= 0){
        Get_ValueOfExpressionByIndex(TimeFunctionIndex, NULL, 0., 0., 0., &Value) ;
        (DofData_P->CurrentSolution-1)->ExplicitTimeFunctionValue = Value.Val[0] ;
      }
      Current.Time += Current.DTime ;
      Current.TimeStep += 1. ;
      /* */

      LinAlg_CreateVector(&TmpVect, &DofData_P->Solver, DofData_P->NbrDof) ;

      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Theta = Current.Theta ;

      Cal_ThetaCoefficients(coef) ;
      Cal_ThetaMatrix(DofData_P->Flag_Init, coef,
		      &DofData_P->M1, &DofData_P->M2, &DofData_P->A) ;
      LinAlg_AssembleMatrix(&DofData_P->A) ;
    }

    if(Save_Num != DofData_P->Num || Current.DTime != Save_DTime ||
       Current.Theta != Save_Theta){
      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Theta = Current.Theta ;
      Cal_ThetaCoefficients(coef) ;
      Cal_ThetaMatrix(DofData_P->Flag_Init, coef,
		      &DofData_P->M1, &DofData_P->M2, &DofData_P->A) ;
      LinAlg_AssembleMatrix(&DofData_P->A) ;
    }

    Cal_ThetaRHS(DofData_P->Flag_Init, coef,
		 &DofData_P->M1, &DofData_P->M2, &DofData_P->m1, &DofData_P->m2,
                 DofData_P->m1s, DofData_P->m2s,
		 &TmpVect, &DofData_P->b, (TimeFunctionIndex >= 0));
    LinAlg_AssembleVector(&DofData_P->b) ;
    break ;

  case TIME_NEWMARK :

    if(!DofData_P->Flag_Init[1] && !DofData_P->Flag_Init[2] && !DofData_P->Flag_Init[3])
      Message::Error("No system available for Update") ;

    if(!Init_Update){
      Init_Update = 1;

      /* bidouillage provisoire : a revoir qd les conditions initiales multiples
         seront mieux traitees */
      Current.Time -= Current.DTime ;
      Current.TimeStep -= 1. ;
      if(TimeFunctionIndex >= 0){
        Get_ValueOfExpressionByIndex(TimeFunctionIndex, NULL, 0., 0., 0., &Value) ;
        (DofData_P->CurrentSolution-1)->ExplicitTimeFunctionValue = Value.Val[0] ;
        (DofData_P->CurrentSolution-2)->ExplicitTimeFunctionValue = Value.Val[0] ;
      }
      Current.Time += Current.DTime ;
      Current.TimeStep += 1. ;
      /* */

      LinAlg_CreateVector(&TmpVect, &DofData_P->Solver, DofData_P->NbrDof) ;

      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Beta  = Current.Beta ;
      Save_Gamma = Current.Gamma ;
      Cal_NewmarkCoefficients(coef) ;
      Cal_NewmarkMatrix(DofData_P->Flag_Init, coef,
			&DofData_P->M1, &DofData_P->M2, &DofData_P->M3, &DofData_P->A) ;
      LinAlg_AssembleMatrix(&DofData_P->A) ;
    }

    if(Save_Num != DofData_P->Num || Current.DTime != Save_DTime ||
       Current.Beta != Save_Beta  ||  Current.Gamma != Save_Gamma){
      Save_Num   = DofData_P->Num ;
      Save_DTime = Current.DTime ;
      Save_Beta  = Current.Beta ;
      Save_Gamma = Current.Gamma ;
      Cal_NewmarkCoefficients(coef) ;
      Cal_NewmarkMatrix(DofData_P->Flag_Init, coef,
			&DofData_P->M1, &DofData_P->M2, &DofData_P->M3, &DofData_P->A) ;
      LinAlg_AssembleMatrix(&DofData_P->A) ;
    }

    Cal_NewmarkRHS(DofData_P->Flag_Init, coef,
		   &DofData_P->M1, &DofData_P->M2, &DofData_P->M3,
		   &DofData_P->m1, &DofData_P->m2, &DofData_P->m3,
                   DofData_P->m1s, DofData_P->m2s, DofData_P->m3s,
		   &TmpVect, &DofData_P->b, (TimeFunctionIndex >= 0));
    LinAlg_AssembleVector(&DofData_P->b) ;
    break ;

  default :
    Message::Error("Wrong type of analysis for update") ;
  }

  LinAlg_GetVectorSize(&DofData_P->b, &i) ;
  if(!i) Message::Error("Generated system is of dimension zero");

  Free_UnusedSolutions(DofData_P);
}
