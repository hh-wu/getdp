/* $Id: Cal_AssembleTerm.c,v 1.2 2000-09-07 18:47:25 geuzaine Exp $ */
#include <stdio.h>
#include <math.h>

#include "Treatment_Formulation.h"
#include "DofData.h"
#include "Data_Numeric.h"
#include "CurrentData.h"

/* ------------------------------------------------------------------------ */
/*  No Time Derivative                                                      */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_NoDt(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k ;
  double  tmp[2] ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[1]) {
      Current.DofData->Flag_Init[1] = 1 ;
      gCreateMatrix(&Current.DofData->M1, &Current.DofData->Solver, 
		    Current.DofData->NbrDof, Current.DofData->NbrDof,
		    Current.DofData->NbrPart, Current.DofData->Part, 
		    Current.DofData->Nnz) ;
      gCreateVector(&Current.DofData->m1, &Current.DofData->Solver, 
		    Current.DofData->NbrDof, Current.DofData->NbrPart, 
		    Current.DofData->Part) ;
      gZeroMatrix(&Current.DofData->M1);
      gZeroVector(&Current.DofData->m1);
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

void  Cal_AssembleTerm_DtDof(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k ;
  double  tmp[2] ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[2]) {
      Current.DofData->Flag_Init[2] = 1 ;
      gCreateMatrix(&Current.DofData->M2, &Current.DofData->Solver, 
		    Current.DofData->NbrDof, Current.DofData->NbrDof,
		    Current.DofData->NbrPart, Current.DofData->Part, 
		    Current.DofData->Nnz) ;
      gCreateVector(&Current.DofData->m2, &Current.DofData->Solver, 
		    Current.DofData->NbrDof, Current.DofData->NbrPart,
		    Current.DofData->Part) ;
      gZeroMatrix(&Current.DofData->M2);
      gZeroVector(&Current.DofData->m2);
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2) 
      Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, &Val[k], 
			&Current.DofData->M2, &Current.DofData->m2) ;
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	/*
	Msg(ERROR, "First Order Time Derivative in Static Problem");
	*/
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

void  Cal_AssembleTerm_Dt(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  Cal_AssembleTerm_DtDof(Equ, Dof, Val) ;
}



/* ------------------------------------------------------------------------ */
/*  Second order Time Derivative                                            */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_DtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k ;
  double  tmp[2] ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[3]) {
      Current.DofData->Flag_Init[3] = 1 ;
      gCreateMatrix(&Current.DofData->M3, &Current.DofData->Solver, 
		    Current.DofData->NbrDof, Current.DofData->NbrDof,
		    Current.DofData->NbrPart, Current.DofData->Part, 
		    Current.DofData->Nnz) ;
      gCreateVector(&Current.DofData->m3, &Current.DofData->Solver, 
		    Current.DofData->NbrDof, Current.DofData->NbrPart,
		    Current.DofData->Part) ;
      gZeroMatrix(&Current.DofData->M3);
      gZeroVector(&Current.DofData->m3);
    }
    for (k = 0 ; k < Current.NbrHar ; k += 2) 
      Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, &Val[k], 
			&Current.DofData->M3, &Current.DofData->m3) ;
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	/*
	Msg(ERROR, "Second Order Time Derivative in Static Problem");
	*/
	break;
      case TIME_THETA :
	/*
	Msg(ERROR, "Second Order Time Derivative with Theta Time Integration");
	*/
	break;
      case TIME_NEWMARK :
	tmp[0] = Val[0]/DSQU(Current.DTime) ;
	Dof_AssembleInMat(Equ, Dof, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
	tmp[0] = 2*Val[0]/DSQU(Current.DTime) ;
	Dof_AssembleInVec(Equ, Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-1,
			  &(Current.DofData->CurrentSolution-1)->x, 
			  &Current.DofData->b) ;
	tmp[0] = -Val[0]/DSQU(Current.DTime) ;
	Dof_AssembleInVec(Equ, Dof, Current.NbrHar, tmp,
			  Current.DofData->CurrentSolution-2,
			  &(Current.DofData->CurrentSolution-2)->x, 
			  &Current.DofData->b) ;
	break ;
      }
    }    
    else {
      for (k = 0 ; k < Current.NbrHar ; k += 2) {
	tmp[0] = - Val[k]   * DSQU(Current.DofData->Val_Pulsation[k/2]) ;
	tmp[1] = - Val[k+1] * DSQU(Current.DofData->Val_Pulsation[k/2]) ; 
	Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, tmp,
			  &Current.DofData->A, &Current.DofData->b) ;
      }
    }
  }
}

void  Cal_AssembleTerm_DtDt(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  Cal_AssembleTerm_DtDtDof(Equ, Dof, Val);
}

/* ------------------------------------------------------------------------ */
/*  Jacobian NonLinear                                                      */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_JacNL(struct Dof * Equ, struct Dof * Dof, double Val[]) {

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Msg(ERROR, "JacNL not ready for Separate Assembly");
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
	Msg(ERROR, "JacNL not ready for Newmark");
	break ;
      }
    }
    else {
      Msg(ERROR, "JacNL not ready for Complex");
    }
  }

}




/* ------------------------------------------------------------------------ */
/*  Never Time Derivative  (provisoire mais tres important ... Patrick)     */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_NeverDt(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k ;

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Msg(ERROR, "JacNL not ready for Separate Assembly");
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
