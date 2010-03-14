// GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.
//
// Contributor(s):
//   Johan Gyselinck
//

#include "ProData.h"
#include "DofData.h"
#include "Message.h"

#define SQU(a)     ((a)*(a)) 

extern struct CurrentData Current ;

static int Warning_DtStatic = 0 ;
static int Warning_DtDtStatic = 0, Warning_DtDtFirstOrder = 0 ;

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
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2) 
      Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, &Val[k], 
			&Current.DofData->M1, &Current.DofData->m1) ;
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
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) 
	Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, &Val[k], 
			  &Current.DofData->A, &Current.DofData->b) ;
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
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2) 
      Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, &Val[k], 
			&Current.DofData->M2, &Current.DofData->m2) ;
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	if(!Warning_DtStatic){
	  Msg::Warning("First order time derivative in static problem (discarded)");
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
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	tmp[0] = -Val[k+1] * Current.DofData->Val_Pulsation[k/2] ;
	tmp[1] =  Val[k] * Current.DofData->Val_Pulsation[k/2] ;
	Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
      }
    }
  }
}

/* Attention ! !  Faux en non lineaire ! !  */

void Cal_AssembleTerm_Dt(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  Cal_AssembleTerm_DtDof(Equ, Dof, Val) ;
}

/* En preparation ... */
void Cal_AssembleTerm_DtNL(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  double  tmp[2] ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Msg::Error("DtNL not ready for separate assembly");
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	if(!Warning_DtStatic){
	  Msg::Warning("First order time derivative in static problem (discarded)");
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
	Msg::Error("DtNL not ready for separate assembly with TimeLoopNewmark");
	break ;
      }
    }
    else {
      Msg::Error("DtNL not ready for separate assembly for Complex type");
      /*
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	tmp[0] = -Val[k+1] * Current.DofData->Val_Pulsation[k/2] ;
	tmp[1] =  Val[k] * Current.DofData->Val_Pulsation[k/2] ;
	Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
      }
      */
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
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2) {
      Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, &Val[k], 
			&Current.DofData->M3, &Current.DofData->m3) ;
    }
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	if(!Warning_DtDtStatic){
	  Msg::Warning("Second order time derivative in static problem (discarded)");
	  Warning_DtDtStatic = 1 ;
	}
	break;
      case TIME_THETA :
	if(!Warning_DtDtFirstOrder){
	  Msg::Warning("Second order time derivative in first order time scheme (discarded)");
	  Warning_DtDtFirstOrder = 1 ;
	}
	break;
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
	Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
      }
    }
  }
}

void Cal_AssembleTerm_DtDt(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  Cal_AssembleTerm_DtDtDof(Equ, Dof, Val);
}

/* ------------------------------------------------------------------------ */
/*  Jacobian NonLinear                                                      */
/* ------------------------------------------------------------------------ */

void Cal_AssembleTerm_JacNL(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Msg::Error("JacNL not ready for separate assembly");
  }
  else{
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
      case TIME_THETA :
	Dof_AssembleInMat(Equ, Dof, Current.NbrHar, &Val[0], 
			  &Current.DofData->Jac, NULL) ;
	break ;
      case TIME_NEWMARK :
	Msg::Error("JacNL not ready for Newmark");
	break ;
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) 
	Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, &Val[k], 
			  &Current.DofData->Jac, NULL) ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  Never Time Derivative  (provisoire mais tres important ... Patrick)     */
/* ------------------------------------------------------------------------ */

void Cal_AssembleTerm_NeverDt(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Msg::Error("NeverDt not ready for separate assembly");
  }
  else{
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
      case TIME_THETA :
      case TIME_NEWMARK :
	Dof_AssembleInMat(Equ, Dof, Current.NbrHar, &Val[0],
			  &Current.DofData->A, &Current.DofData->b) ;
	break ;
      }
    }
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, &Val[k], 
			  &Current.DofData->A, &Current.DofData->b) ;
      }
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  Multi-Harmonic                                                          */
/* ------------------------------------------------------------------------ */

void Cal_AssembleTerm_MH_Moving_simple(struct Dof * Equ, struct Dof * Dof, double Val[])
{
  int     k, l ;
  double  tmp ;
  extern double ** MH_Moving_Matrix ; 

  for (k = 0 ; k < Current.NbrHar ; k++)
    for (l = 0 ; l < Current.NbrHar ; l++) {
      tmp = Val[0] * MH_Moving_Matrix[k][l] ;
      /* if (k==l) */
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
      /* if (k==l) */
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
