#define RCSID "$Id: Cal_AssembleTerm.c,v 1.19 2005-07-16 21:41:52 geuzaine Exp $"
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 *   Johan Gyselinck
 */

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "DofData.h"
#include "Numeric.h"
#include "CurrentData.h"

static int Warning_DtStatic = 0 ;
static int Warning_DtDtStatic = 0, Warning_DtDtFirstOrder = 0 ;

/* ------------------------------------------------------------------------ */
/*  No Time Derivative                                                      */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_NoDt(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k ;
  double  tmp[2] ;

  GetDP_Begin("Cal_AssembleTerm_NoDt");

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[1]) {
      Current.DofData->Flag_Init[1] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M1, &Current.DofData->Solver, 
			  Current.DofData->NbrDof, Current.DofData->NbrDof,
			  Current.DofData->NbrPart, Current.DofData->Part, 
			  Current.DofData->Nnz) ;
      LinAlg_CreateVector(&Current.DofData->m1, &Current.DofData->Solver, 
			  Current.DofData->NbrDof, Current.DofData->NbrPart, 
			  Current.DofData->Part) ;
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

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  First order Time Derivative                                             */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_DtDof(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k ;
  double  tmp[2] ;

  GetDP_Begin("Cal_AssembleTerm_DtDof");

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[2]) {
      Current.DofData->Flag_Init[2] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M2, &Current.DofData->Solver, 
			  Current.DofData->NbrDof, Current.DofData->NbrDof,
			  Current.DofData->NbrPart, Current.DofData->Part, 
			  Current.DofData->Nnz) ;
      LinAlg_CreateVector(&Current.DofData->m2, &Current.DofData->Solver, 
			  Current.DofData->NbrDof, Current.DofData->NbrPart,
			  Current.DofData->Part) ;
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
	  Msg(WARNING, "First order time derivative in static problem (discarded)");
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

  GetDP_End ;
}

/* Attention ! !  Faux en non lineaire ! !  */

void  Cal_AssembleTerm_Dt(struct Dof * Equ, struct Dof * Dof, double Val[]) {

  GetDP_Begin("Cal_AssembleTerm_Dt");

  Cal_AssembleTerm_DtDof(Equ, Dof, Val) ;

  GetDP_End ;
}


/* En preparation ... */
void  Cal_AssembleTerm_DtNL(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  double  tmp[2] ;

  GetDP_Begin("Cal_AssembleTerm_DtNL");

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Msg(ERROR, "DtNL not ready for separate assembly");
  }
  else {
    if (Current.NbrHar == 1) {
      switch (Current.TypeTime) {
      case TIME_STATIC :
	if(!Warning_DtStatic){
	  Msg(WARNING, "First order time derivative in static problem (discarded)");
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
	Msg(ERROR, "DtNL not ready for separate assembly with TimeLoopNewmark");
	break ;
      }
    }
    else {
      Msg(ERROR, "DtNL not ready for separate assembly for Complex type");
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

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  Second order Time Derivative                                            */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_DtDtDof(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k ;
  double  tmp[2] ;

  GetDP_Begin("Cal_AssembleTerm_DtDtDof");

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    if (!Current.DofData->Flag_Init[3]) {
      Current.DofData->Flag_Init[3] = 1 ;
      LinAlg_CreateMatrix(&Current.DofData->M3, &Current.DofData->Solver, 
			  Current.DofData->NbrDof, Current.DofData->NbrDof,
			  Current.DofData->NbrPart, Current.DofData->Part, 
			  Current.DofData->Nnz) ;
      LinAlg_CreateVector(&Current.DofData->m3, &Current.DofData->Solver, 
			  Current.DofData->NbrDof, Current.DofData->NbrPart,
			  Current.DofData->Part) ;
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
	  Msg(WARNING, "Second order time derivative in static problem (discarded)");
	  Warning_DtDtStatic = 1 ;
	}
	break;
      case TIME_THETA :
	if(!Warning_DtDtFirstOrder){
	  Msg(WARNING, "Second order time derivative in first order time scheme (discarded)");
	  Warning_DtDtFirstOrder = 1 ;
	}
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

  GetDP_End ;
}

void  Cal_AssembleTerm_DtDt(struct Dof * Equ, struct Dof * Dof, double Val[]) {

  GetDP_Begin("Cal_AssembleTerm_DtDt"); 
  
  Cal_AssembleTerm_DtDtDof(Equ, Dof, Val);

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Jacobian NonLinear                                                      */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_JacNL(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k ;

  GetDP_Begin("Cal_AssembleTerm_JacNL");
  
  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Msg(ERROR, "JacNL not ready for separate assembly");
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
      for (k = 0 ; k < Current.NbrHar ; k += 2) 
	Dof_AssembleInMat(Equ+k, Dof+k, Current.NbrHar, &Val[k], 
			  &Current.DofData->Jac, NULL) ;
    }
  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  Never Time Derivative  (provisoire mais tres important ... Patrick)     */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_NeverDt(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k ;

  GetDP_Begin("Cal_AssembleTerm_NeverDt");

  if(Current.TypeAssembly == ASSEMBLY_SEPARATE){
    Msg(ERROR, "NeverDt not ready for separate assembly");
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

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  Multi-Harmonic                                                          */
/* ------------------------------------------------------------------------ */

void  Cal_AssembleTerm_MH_Moving_simple(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k, l ;
  double  tmp ;
  extern double ** MH_Moving_Matrix ; 

  GetDP_Begin("Cal_AssembleTerm_MH_Moving_simple");

  for (k = 0 ; k < Current.NbrHar ; k++)
    for (l = 0 ; l < Current.NbrHar ; l++) {
      tmp = Val[0] * MH_Moving_Matrix[k][l] ;
      /* if (k==l) */
      Dof_AssembleInMat(Equ+k, Dof+l, 1, &tmp, 
			&Current.DofData->A, &Current.DofData->b) ;
    }

  GetDP_End ;
}

void  Cal_AssembleTerm_MH_Moving_separate(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  int     k, l ;
  double  tmp ;
  extern double ** MH_Moving_Matrix ; 

  GetDP_Begin("Cal_AssembleTerm_MH_Moving_separate");

  for (k = 0 ; k < Current.NbrHar ; k++)
    for (l = 0 ; l < Current.NbrHar ; l++) {
      tmp = Val[0] * MH_Moving_Matrix[k][l] ;
      /* if (k==l) */
      Dof_AssembleInMat(Equ+k, Dof+l, 1, &tmp, 
			&Current.DofData->A_MH_moving, &Current.DofData->b_MH_moving) ;
    }

  GetDP_End ;
}

void  Cal_AssembleTerm_MH_Moving_probe(struct Dof * Equ, struct Dof * Dof, double Val[]) {
  extern Tree_T * DofTree_MH_moving ;
  /*
  int     k, l ;
  double  tmp ;
  extern double ** MH_Moving_Matrix ; 
  extern struct Dof **Dof_MH_moving ;
  extern int * DummyDof;
  */
  GetDP_Begin("Cal_AssembleTerm_MH_probe");

  if (Dof->Type == DOF_UNKNOWN && !Tree_PQuery(DofTree_MH_moving, Dof)) 
      Tree_Add(DofTree_MH_moving,Dof) ;
  else if (Dof->Type == DOF_LINK && !Tree_PQuery(DofTree_MH_moving, Dof->Case.Link.Dof))
      Tree_Add(DofTree_MH_moving,Dof->Case.Link.Dof) ;

  if (Equ->Type == DOF_UNKNOWN && !Tree_PQuery(DofTree_MH_moving, Equ))
      Tree_Add(DofTree_MH_moving,Equ) ; 
  else if (Equ->Type == DOF_LINK && !Tree_PQuery(DofTree_MH_moving, Equ->Case.Link.Dof))
      Tree_Add(DofTree_MH_moving,Equ->Case.Link.Dof) ;

  /*

  if (Dof->Type == DOF_UNKNOWN && !Tree_PQuery(DofTree_MH_moving, Dof)) 
    if(!DummyDof[Dof->Case.Unknown.NumDof-1])
      Tree_Add(DofTree_MH_moving,Dof) ;
  for (k = 0 ; k < Current.NbrHar ; k++) Tree_Add(DofTree_MH_moving,Dof+k) ;
  else if (Dof->Type == DOF_LINK && !Tree_PQuery(DofTree_MH_moving, Dof->Case.Link.Dof))
    if(!DummyDof[(Dof->Case.Link.Dof)->Case.Unknown.NumDof-1])
      Tree_Add(DofTree_MH_moving,Dof->Case.Link.Dof) ;
  for (k = 0 ; k < Current.NbrHar ; k++) Tree_Add(DofTree_MH_moving,(Dof+k)->Case.Link.Dof) ;

  if (Equ->Type == DOF_UNKNOWN && !Tree_PQuery(DofTree_MH_moving, Equ))
    if(!DummyDof[Equ->Case.Unknown.NumDof-1])
      Tree_Add(DofTree_MH_moving,Equ) ; 
  for (k = 0 ; k < Current.NbrHar ; k++) Tree_Add(DofTree_MH_moving,Equ+k) ;
  else if (Equ->Type == DOF_LINK && !Tree_PQuery(DofTree_MH_moving, Equ->Case.Link.Dof))
    if(!DummyDof[(Equ->Case.Link.Dof)->Case.Unknown.NumDof-1])
      Tree_Add(DofTree_MH_moving,Equ->Case.Link.Dof) ;
  for (k = 0 ; k < Current.NbrHar ; k++) Tree_Add(DofTree_MH_moving,(Equ+k)->Case.Link.Dof) ;
  */

  /*
  for (k = 0 ; k < Current.NbrHar ; k++) {
    if ((Dof+k)->Type == DOF_UNKNOWN) {
      if (!Tree_PQuery(DofTree_MH_moving, Dof+k)) Tree_Add(DofTree_MH_moving,Dof+k) ;
    } else if ((Dof+k)->Type == DOF_LINK) {
      if (!Tree_PQuery(DofTree_MH_moving, (Dof+k)->Case.Link.Dof)) 
	Tree_Add(DofTree_MH_moving,(Dof+k)->Case.Link.Dof) ;
    }
  }
  
  for (k = 0 ; k < Current.NbrHar ; k++) {
    if ((Equ+k)->Type == DOF_UNKNOWN) {
      if (!Tree_PQuery(DofTree_MH_moving, Equ+k)) Tree_Add(DofTree_MH_moving,Equ+k) ;
    } else if ((Equ+k)->Type == DOF_LINK) {
      if (!Tree_PQuery(DofTree_MH_moving, (Equ+k)->Case.Link.Dof)) 
	Tree_Add(DofTree_MH_moving,(Equ+k)->Case.Link.Dof) ;
    }
  }
  */

  GetDP_End ;
}
