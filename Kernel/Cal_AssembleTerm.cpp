// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Johan Gyselinck
//

#include "ProData.h"
#include "DofData.h"
#include "Message.h"
#include <math.h>

#define SQU(a)     ((a)*(a))

extern struct CurrentData Current ;

static int Warning_Dt = 0, Warning_DtStatic = 0 ;
static int Warning_DtDt = 0, Warning_DtDtStatic = 0, Warning_DtDtFirstOrder = 0 ;

/* ------------------------------------------------------------------------ */
/*  No Time Derivative                                                      */
/* ------------------------------------------------------------------------ */

void Cal_AssembleTerm_NoDt(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k ;
  double  tmp[2] ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[1]) {
      Current.DofData->Flag_Init[1] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M1, &Current.DofData->Solver,
			  Current.DofData->NbrDof, Current.DofData->NbrDof) ;
      LinAlg_CreateVector(&Current.DofData->m1, &Current.DofData->Solver,
			  Current.DofData->NbrDof) ;
      LinAlg_ZeroMatrix(&Current.DofData->M1);
      LinAlg_ZeroVector(&Current.DofData->m1);
      Current.DofData->m1s = List_Create(10, 10, sizeof(gVector));
      for(int i = 0; i < List_Nbr(Current.DofData->TimeFunctionIndex); i++){
        gVector m;
        LinAlg_CreateVector(&m, &Current.DofData->Solver,
                            Current.DofData->NbrDof) ;
        LinAlg_ZeroVector(&m);
        List_Add(Current.DofData->m1s, &m);
      }
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2){
      int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
      Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			&Current.DofData->M1, &Current.DofData->m1,
                        Current.DofData->m1s) ;
    }
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	Dof_AssembleInMat(Equ, Dof, Current.NbrHar, &Val[0],
			  &Current.DofData->A, &Current.DofData->b) ;
	break ;
      case TIME_THETA :
	tmp[0] = Val[0]*Current.Theta ;
	Dof_AssembleInMat(Equ, Dof, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
	tmp[0] = Val[0]*(Current.Theta-1.) ;
	Dof_AssembleInVec(Equ, Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-1,
			  &(Current.DofData->CurrentSolution-1)->x,
			  &Current.DofData->b) ;
	break ;
      case TIME_NEWMARK :
	tmp[0] = Val[0]*Current.Beta ;
	Dof_AssembleInMat(Equ, Dof, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
	tmp[0] = Val[0]*(2*Current.Beta-Current.Gamma-0.5) ;
	Dof_AssembleInVec(Equ, Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-1,
			  &(Current.DofData->CurrentSolution-1)->x,
			  &Current.DofData->b) ;
	tmp[0] = Val[0]*(Current.Gamma-Current.Beta-0.5) ;
	Dof_AssembleInVec(Equ, Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-2,
			  &(Current.DofData->CurrentSolution-2)->x,
			  &Current.DofData->b) ;
	break ;
      case TIME_GEAR :
        Dof_AssembleInMat(Equ, Dof, Current.NbrHar, Val,
                          &Current.DofData->A, &Current.DofData->b) ;
        break ;
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2){
        int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
	Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			  &Current.DofData->A, &Current.DofData->b) ;
      }
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  First order Time Derivative                                             */
/* ------------------------------------------------------------------------ */

void Cal_AssembleTerm_DtDof(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k ;
  double  tmp[2] ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[2]) {
      Current.DofData->Flag_Init[2] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M2, &Current.DofData->Solver,
			  Current.DofData->NbrDof, Current.DofData->NbrDof) ;
      LinAlg_CreateVector(&Current.DofData->m2, &Current.DofData->Solver,
			  Current.DofData->NbrDof) ;
      LinAlg_ZeroMatrix(&Current.DofData->M2);
      LinAlg_ZeroVector(&Current.DofData->m2);
      Current.DofData->m2s = List_Create(10, 10, sizeof(gVector));
      for(int i = 0; i < List_Nbr(Current.DofData->TimeFunctionIndex); i++){
        gVector m;
        LinAlg_CreateVector(&m, &Current.DofData->Solver,
                            Current.DofData->NbrDof) ;
        LinAlg_ZeroVector(&m);
        List_Add(Current.DofData->m2s, &m);
      }
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2){
      int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
      Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			&Current.DofData->M2, &Current.DofData->m2,
                        Current.DofData->m2s) ;
    }
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	if(!Warning_DtStatic){
	  Message::Info(3, "Discarded DtDof term in static analysis");
	  Warning_DtStatic = 1 ;
	}
	break;
      case TIME_THETA :
	tmp[0] = Val[0]/Current.DTime ;
	Dof_AssembleInMat(Equ,  Dof, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
	Dof_AssembleInVec(Equ,  Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-1,
			  &(Current.DofData->CurrentSolution-1)->x,
			  &Current.DofData->b) ;
	break ;
      case TIME_NEWMARK :
	tmp[0] = Val[0]*Current.Gamma/Current.DTime ;
	Dof_AssembleInMat(Equ,  Dof, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
	tmp[0] = Val[0]*(2.*Current.Gamma-1.)/Current.DTime ;
	Dof_AssembleInVec(Equ,  Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-1,
			  &(Current.DofData->CurrentSolution-1)->x,
			  &Current.DofData->b) ;
	tmp[0] = Val[0]*(1.-Current.Gamma)/Current.DTime ;
	Dof_AssembleInVec(Equ,  Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-2,
			  &(Current.DofData->CurrentSolution-2)->x,
			  &Current.DofData->b) ;
	break ;
      case TIME_GEAR :
        tmp[0] = Val[0]/(Current.bCorrCoeff*Current.DTime);
        Dof_AssembleInMat(Equ,  Dof, Current.NbrHar, tmp,
                          &Current.DofData->A, &Current.DofData->b) ;
        for (int i=0; i<Current.CorrOrder; i++) {
          tmp[0] = Val[0]*Current.aCorrCoeff[i]/(Current.bCorrCoeff*Current.DTime);
          Dof_AssembleInVec(Equ,  Dof, Current.NbrHar, tmp,
                            Current.DofData->CurrentSolution-1,
                            &(Current.DofData->CurrentSolution-1-i)->x,
                            &Current.DofData->b) ;
        }
        break ;
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
        //printf("====hola idiota=== k %d pul %g \n", k, Current.DofData->Val_Pulsation[k/2]);
        tmp[0] = -Val[k+1] * Current.DofData->Val_Pulsation[k/2] ;
        tmp[1] =  Val[k] * Current.DofData->Val_Pulsation[k/2] ;
        int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
        Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, tmp,
                          &Current.DofData->A, &Current.DofData->b) ;
      }
    }
  }
}

void Cal_AssembleTerm_Dt(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  if(!Warning_Dt){
    Message::Warning("Dt not implemented, using DtDof instead");
    Warning_Dt = 1 ;
  }
  Cal_AssembleTerm_DtDof(Equ, Dof, Val);
}

/* En preparation ... */
void Cal_AssembleTerm_DtNL(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  double  tmp[2] ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Message::Error("DtNL not implemented for separate assembly");
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	if(!Warning_DtStatic){
	  Message::Info(3, "Discarded DtDof term in static analysis");
	  Warning_DtStatic = 1 ;
	}
	break;
      case TIME_THETA :
	tmp[0] = Val[0]/Current.DTime ;
	Dof_AssembleInMat(Equ,  Dof, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
	Dof_AssembleInVec(Equ,  Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-1,
			  &(Current.DofData->CurrentSolution-1)->x,
			  &Current.DofData->b) ;
	break ;
      case TIME_NEWMARK :
	Message::Error("DtNL not implemented for separate assembly with Newmark scheme");
	return ;
      case TIME_GEAR :
        Message::Error("DtNL not implemented for Gear's method");
        return ;
      }
    }
    else {
      Message::Error("DtNL not implemented for separate assembly in harmonic analysis");
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  Second order Time Derivative                                            */
/* ------------------------------------------------------------------------ */

void Cal_AssembleTerm_DtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k ;
  double  tmp[2] ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[3]) {
      Current.DofData->Flag_Init[3] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M3, &Current.DofData->Solver,
			  Current.DofData->NbrDof, Current.DofData->NbrDof) ;
      LinAlg_CreateVector(&Current.DofData->m3, &Current.DofData->Solver,
			  Current.DofData->NbrDof) ;
      LinAlg_ZeroMatrix(&Current.DofData->M3);
      LinAlg_ZeroVector(&Current.DofData->m3);
      Current.DofData->m3s = List_Create(10, 10, sizeof(gVector));
      for(int i = 0; i < List_Nbr(Current.DofData->TimeFunctionIndex); i++){
        gVector m;
        LinAlg_CreateVector(&m, &Current.DofData->Solver,
                            Current.DofData->NbrDof) ;
        LinAlg_ZeroVector(&m);
        List_Add(Current.DofData->m3s, &m);
      }
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2) {
      int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
      Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			&Current.DofData->M3, &Current.DofData->m3,
                        Current.DofData->m3s) ;
    }
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	if(!Warning_DtDtStatic){
	  Message::Info(3, "Discarded DtDtDof term in static analysis");
	  Warning_DtDtStatic = 1 ;
	}
	break;
      case TIME_THETA :
	if(!Warning_DtDtFirstOrder){
	  Message::Info(3, "Discarded DtDtDof term in Theta time scheme");
	  Warning_DtDtFirstOrder = 1 ;
	}
	break;
      case TIME_GEAR :
        Message::Error("DtDtDof not implemented for Gear's method");
        return ;
      case TIME_NEWMARK :
	tmp[0] = Val[0]/SQU(Current.DTime) ;
	Dof_AssembleInMat(Equ, Dof, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
	tmp[0] = 2*Val[0]/SQU(Current.DTime) ;
	Dof_AssembleInVec(Equ, Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-1,
			  &(Current.DofData->CurrentSolution-1)->x,
			  &Current.DofData->b) ;
	tmp[0] = -Val[0]/SQU(Current.DTime) ;
	Dof_AssembleInVec(Equ, Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-2,
			  &(Current.DofData->CurrentSolution-2)->x,
			  &Current.DofData->b) ;
	break ;
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	tmp[0] = - Val[k]   * SQU(Current.DofData->Val_Pulsation[k/2]) ;
	tmp[1] = - Val[k+1] * SQU(Current.DofData->Val_Pulsation[k/2]) ;
        int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
	Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
      }
    }
  }
}

void Cal_AssembleTerm_DtDt(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  if(!Warning_DtDt){
    Message::Warning("DtDt not implemented, using DtDtDof instead");
    Warning_DtDt = 1 ;
  }
  Cal_AssembleTerm_DtDtDof(Equ, Dof, Val);
}

/* ------------------------------------------------- */
/*  higher order Time Derivative for Polynomial EVP  */
/* ------------------------------------------------- */
void Cal_AssembleTerm_DtDtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int k ;
  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[4]) {
      Current.DofData->Flag_Init[4] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M4, &Current.DofData->Solver,
			  Current.DofData->NbrDof, Current.DofData->NbrDof) ;
      LinAlg_CreateVector(&Current.DofData->m4, &Current.DofData->Solver,
			  Current.DofData->NbrDof) ;
      LinAlg_ZeroMatrix(&Current.DofData->M4);
      LinAlg_ZeroVector(&Current.DofData->m4);
      Current.DofData->m4s = List_Create(10, 10, sizeof(gVector));
      for(int i = 0; i < List_Nbr(Current.DofData->TimeFunctionIndex); i++){
        gVector m;
        LinAlg_CreateVector(&m, &Current.DofData->Solver,
                            Current.DofData->NbrDof) ;
        LinAlg_ZeroVector(&m);
        List_Add(Current.DofData->m4s, &m);
      }
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2) {
      int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
      Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			&Current.DofData->M4, &Current.DofData->m4,
                        Current.DofData->m4s) ;
    }
  }
  else {
    Message::Error("DtDtDtDof only available with GenerateSeparate");
    return ;
  }
}

void Cal_AssembleTerm_DtDtDtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int k ;
  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[5]) {
      Current.DofData->Flag_Init[5] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M5, &Current.DofData->Solver,
			  Current.DofData->NbrDof, Current.DofData->NbrDof) ;
      LinAlg_CreateVector(&Current.DofData->m5, &Current.DofData->Solver,
			  Current.DofData->NbrDof) ;
      LinAlg_ZeroMatrix(&Current.DofData->M5);
      LinAlg_ZeroVector(&Current.DofData->m5);
      Current.DofData->m5s = List_Create(10, 10, sizeof(gVector));
      for(int i = 0; i < List_Nbr(Current.DofData->TimeFunctionIndex); i++){
        gVector m;
        LinAlg_CreateVector(&m, &Current.DofData->Solver,
                            Current.DofData->NbrDof) ;
        LinAlg_ZeroVector(&m);
        List_Add(Current.DofData->m5s, &m);
      }
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2) {
      int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
      Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			&Current.DofData->M5, &Current.DofData->m5,
                        Current.DofData->m5s) ;
    }
  }
  else {
    Message::Error("DtDtDtDtDof only available with GenerateSeparate");
    return ;
  }
}

void Cal_AssembleTerm_DtDtDtDtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int k ;
  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
		if (!Current.DofData->Flag_Init[6]) {
			Current.DofData->Flag_Init[6] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M6, &Current.DofData->Solver,
			  Current.DofData->NbrDof, Current.DofData->NbrDof) ;
			LinAlg_CreateVector(&Current.DofData->m6, &Current.DofData->Solver,
			  Current.DofData->NbrDof) ;
      LinAlg_ZeroMatrix(&Current.DofData->M6);
      LinAlg_ZeroVector(&Current.DofData->m6);
      Current.DofData->m6s = List_Create(10, 10, sizeof(gVector));
      for(int i = 0; i < List_Nbr(Current.DofData->TimeFunctionIndex); i++){
        gVector m;
        LinAlg_CreateVector(&m, &Current.DofData->Solver,
                            Current.DofData->NbrDof) ;
        LinAlg_ZeroVector(&m);
        List_Add(Current.DofData->m6s, &m);
      }
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2) {
      int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
      Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			&Current.DofData->M6, &Current.DofData->m6,
                        Current.DofData->m6s) ;
    }
  }
  else {
    Message::Error("DtDtDtDtDtDof only available with GenerateSeparate");
    return ;
  }
}

/* ------------------------------------------------------------------------ */
/*  Jacobian NonLinear                                                      */
/* ------------------------------------------------------------------------ */

void Cal_AssembleTerm_JacNL(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Message::Error("JacNL not implemented for separate assembly");
  }
  else{
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
      case TIME_THETA :
        Dof_AssembleInMat(Equ, Dof, Current.NbrHar, &Val[0],
                          &Current.DofData->Jac, NULL) ;
        break ;
      case TIME_GEAR :
	Dof_AssembleInMat(Equ, Dof, Current.NbrHar, &Val[0],
			  &Current.DofData->Jac, NULL) ;
	break ;
      case TIME_NEWMARK :
	Message::Error("JacNL not implemented for Newmark's method");
	return ;
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2){
        int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
	Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			  &Current.DofData->Jac, NULL) ;
      }
    }
  }
}

void Cal_AssembleTerm_DtDofJacNL(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  double  tmp[2] ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE)
    Message::Error("DtDofJacNL not implemented for separate assembly");
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
        if(!Warning_DtStatic){
	  Message::Info(3, "Discarded DtDofJacNL term in static analysis");
          Warning_DtStatic = 1 ;
        }
        break;
      case TIME_THETA :
        if ( fabs(Current.Theta - 1.0) > 1e-3 ){
          Message::Error("Theta method not implemented for nonlinear problems when "
                         "Theta != 1.0");
          return;
        }
        tmp[0] = Val[0]/Current.DTime;
        Dof_AssembleInMat(Equ, Dof, Current.NbrHar, tmp,
                          &Current.DofData->Jac, NULL);
        break ;
      case TIME_NEWMARK :
        Message::Error("DtDofJacNL not implemented for Newmark scheme");
        return ;
      case TIME_GEAR :
        tmp[0] = Val[0] / (Current.bCorrCoeff * Current.DTime);
        Dof_AssembleInMat(Equ, Dof, Current.NbrHar, tmp,
                          &Current.DofData->Jac, NULL);
        break ;
      }
    }
    else
      Message::Error("DtDofJacNL not implemented for harmonic analysis");
  }
}

/* ------------------------------------------------------------------------ */
/*  Never Time Derivative  (provisoire mais tres important ... Patrick)     */
/* ------------------------------------------------------------------------ */

void Cal_AssembleTerm_NeverDt(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[1]) {
      Current.DofData->Flag_Init[1] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M1, &Current.DofData->Solver,
			  Current.DofData->NbrDof, Current.DofData->NbrDof) ;
      LinAlg_CreateVector(&Current.DofData->m1, &Current.DofData->Solver,
			  Current.DofData->NbrDof) ;
      LinAlg_ZeroMatrix(&Current.DofData->M1);
      LinAlg_ZeroVector(&Current.DofData->m1);
      Current.DofData->m1s = List_Create(10, 10, sizeof(gVector));
      for(int i = 0; i < List_Nbr(Current.DofData->TimeFunctionIndex); i++){
        gVector m;
        LinAlg_CreateVector(&m, &Current.DofData->Solver,
                            Current.DofData->NbrDof) ;
        LinAlg_ZeroVector(&m);
        List_Add(Current.DofData->m1s, &m);
      }
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2){
      int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
      Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			&Current.DofData->M1, &Current.DofData->m1,
                        Current.DofData->m1s) ;
    }
  }
  else{
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
      case TIME_THETA :
      case TIME_NEWMARK :
      case TIME_GEAR :
	Dof_AssembleInMat(Equ, Dof, Current.NbrHar, &Val[0],
			  &Current.DofData->A, &Current.DofData->b) ;
	break ;
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
        int incr = (gSCALAR_SIZE == 2) ? k / 2 : k;
	Dof_AssembleInMat(Equ + incr, Dof + incr, Current.NbrHar, &Val[k],
			  &Current.DofData->A, &Current.DofData->b) ;
      }
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  Multi-Harmonic with movement                                            */
/* ------------------------------------------------------------------------ */

void Cal_AssembleTerm_MHMoving(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  // MHMoving_assemblyType = 1 => Use current system A,b
  // MHMoving_assemblyType = 2 => Use dedicated system A_MH_Moving, b_MH_Moving
  // MHMoving_assemblyType = 3 => Look for unknowns and constraints in Moving Group

  extern int MHMoving_assemblyType ;
  extern double ** MH_Moving_Matrix ;
  extern Tree_T  * DofTree_MH_moving ;

  // FIX to check!

  if(MHMoving_assemblyType==1){
    for (int k = 0 ; k < Current.NbrHar ; k++)
      for (int l = 0 ; l < Current.NbrHar ; l++) {
        double tmp = Val[0] * MH_Moving_Matrix[k][l] ;
        /* if (k==l) */
        Dof_AssembleInMat(Equ+k/2*gCOMPLEX_INCREMENT, Dof+l/2*gCOMPLEX_INCREMENT, 1, &tmp,
                          &Current.DofData->A, &Current.DofData->b) ;
      }
  }

  if(MHMoving_assemblyType==2){
    for (int k = 0 ; k < Current.NbrHar ; k++)
      for (int l = 0 ; l < Current.NbrHar ; l++) {
        double tmp = Val[0] * MH_Moving_Matrix[k][l] ;
        // if (k==l)
        Dof_AssembleInMat(Equ+k/2*gCOMPLEX_INCREMENT, Dof+l/2*gCOMPLEX_INCREMENT, 1, &tmp,
                          &Current.DofData->A_MH_moving, &Current.DofData->b_MH_moving) ;
      }
  }

  if(MHMoving_assemblyType==3){
    if (Dof->Type == DOF_UNKNOWN && !Tree_PQuery(DofTree_MH_moving, Dof))
      Tree_Add(DofTree_MH_moving,Dof) ;
    else if (Dof->Type == DOF_LINK && !Tree_PQuery(DofTree_MH_moving, Dof->Case.Link.Dof))
      Tree_Add(DofTree_MH_moving,Dof->Case.Link.Dof) ;

    if (Equ->Type == DOF_UNKNOWN && !Tree_PQuery(DofTree_MH_moving, Equ))
      Tree_Add(DofTree_MH_moving,Equ) ;
    else if (Equ->Type == DOF_LINK && !Tree_PQuery(DofTree_MH_moving, Equ->Case.Link.Dof))
      Tree_Add(DofTree_MH_moving,Equ->Case.Link.Dof) ;
  }
}

/*
void Cal_AssembleTerm_MH_Moving_simple(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k, l ;
  double  tmp ;
  extern double ** MH_Moving_Matrix ;

  for (k = 0 ; k < Current.NbrHar ; k++)
    for (l = 0 ; l < Current.NbrHar ; l++) {
      tmp = Val[0] * MH_Moving_Matrix[k][l] ;
      // if (k==l)
      Dof_AssembleInMat(Equ+k, Dof+l, 1, &tmp,
			&Current.DofData->A, &Current.DofData->b) ;
    }
}

void Cal_AssembleTerm_MH_Moving_separate(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k, l ;
  double  tmp ;
  extern double ** MH_Moving_Matrix ;

  for (k = 0 ; k < Current.NbrHar ; k++)
    for (l = 0 ; l < Current.NbrHar ; l++) {
      tmp = Val[0] * MH_Moving_Matrix[k][l] ;
      // if (k==l)
      Dof_AssembleInMat(Equ+k, Dof+l, 1, &tmp,
			&Current.DofData->A_MH_moving, &Current.DofData->b_MH_moving) ;
    }
}

void Cal_AssembleTerm_MH_Moving_probe(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  extern Tree_T  * DofTree_MH_moving ;

  if (Dof->Type == DOF_UNKNOWN && !Tree_PQuery(DofTree_MH_moving, Dof))
      Tree_Add(DofTree_MH_moving,Dof) ;
  else if (Dof->Type == DOF_LINK && !Tree_PQuery(DofTree_MH_moving, Dof->Case.Link.Dof))
      Tree_Add(DofTree_MH_moving,Dof->Case.Link.Dof) ;

  if (Equ->Type == DOF_UNKNOWN && !Tree_PQuery(DofTree_MH_moving, Equ))
      Tree_Add(DofTree_MH_moving,Equ) ;
  else if (Equ->Type == DOF_LINK && !Tree_PQuery(DofTree_MH_moving, Equ->Case.Link.Dof))
      Tree_Add(DofTree_MH_moving,Equ->Case.Link.Dof) ;

}
*/
