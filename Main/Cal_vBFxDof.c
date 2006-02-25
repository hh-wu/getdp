#define RCSID "$Id: Cal_vBFxDof.c,v 1.14 2006-02-25 15:00:24 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "Cal_Quantity.h"
#include "Get_Geometry.h"
#include "Pos_Search.h"
#include "CurrentData.h"
#include "Data_DefineE.h"

/* ------------------------------------------------------------------------ */
/*  C a l _ v B F x D o f                                                   */
/* ------------------------------------------------------------------------ */

void Cal_vBFxDof(struct EquationTerm       * EquationTerm_P,
		 struct FemLocalTermActive * FI,
		 struct QuantityStorage    * QuantityStorage_P0,
		 struct QuantityStorage    * QuantityStorageDof_P,
		 int                         Nbr_Dof,			   
		 void (*xFunctionBFDof[NBR_MAX_BASISFUNCTIONS])
		 (struct Element * Element, int NumEntity, 
		  double u, double v, double w, double Value[]),
		 double vBFxEqu[][MAX_DIM],
		 struct Value vBFxDof[]){
  
  double         vBFuDof[NBR_MAX_BASISFUNCTIONS] [MAX_DIM] ;
  double         u, v, w ;
  struct Value   CoefPhys ;
  struct Element *E ;
  int  i, j ;

  GetDP_Begin("Cal_vBFxDof");
  
  if(EquationTerm_P->Case.LocalTerm.Term.DofInTrace){
    E = Current.Element->ElementTrace ;
    Current.x = Current.y = Current.z = 0. ;
    for (i = 0 ; i < Current.Element->GeoElement->NbrNodes ; i++) {
      Current.x += Current.Element->x[i] * Current.Element->n[i] ;
      Current.y += Current.Element->y[i] * Current.Element->n[i] ;
      Current.z += Current.Element->z[i] * Current.Element->n[i] ;
    }
    xyz2uvwInAnElement(E, Current.x, Current.y, Current.z, 
		       &Current.ut, &Current.vt, &Current.wt) ;	
    u = Current.ut ;
    v = Current.vt ;
    w = Current.wt ;
  }  
  else{
    E = Current.Element ;
    u = Current.u ;
    v = Current.v ;
    w = Current.w ;
  }

  /* shape functions, integral quantity or dummy */

  if (!FI->SymmetricalMatrix) {	  

    switch (FI->Type_DefineQuantityDof) {
    case LOCALQUANTITY :
      for (j = 0 ; j < Nbr_Dof ; j++) {
	xFunctionBFDof[j]
	  (E, 
	   QuantityStorageDof_P->BasisFunction[j].NumEntityInElement+1,
	   u, v, w, vBFuDof[j]) ;
	((void (*)(struct Element*, double*, double*))
	 FI->xChangeOfCoordinatesDof) (E, vBFuDof[j], vBFxDof[j].Val) ;
	vBFxDof[j].Type = FI->Type_ValueDof ;
	if(Current.NbrHar > 1) Cal_SetHarmonicValue(&vBFxDof[j]) ;
      }
      break ;
    case INTEGRALQUANTITY :
      if (FI->IntegralQuantityActive.IntegrationCase_P->Type == ANALYTIC)
	Cal_AnalyticIntegralQuantity (Current.Element, 
				      QuantityStorageDof_P, Nbr_Dof, 
				      (void (**)())xFunctionBFDof, vBFxDof) ;
      
      else
	Cal_NumericalIntegralQuantity (Current.Element, 
				       &FI->IntegralQuantityActive, 
				       QuantityStorage_P0, QuantityStorageDof_P, 
				       FI->Type_DefineQuantityDof, Nbr_Dof, 
				       (void (**)())xFunctionBFDof, vBFxDof) ;



      FI->Type_ValueDof = FI->Type_FormDof = vBFxDof[0].Type; /* now this type is correct */
      break ;
    case NODOF :  /* Supprimer le DofForNoDof_P de la structure dans Data_Active.h */
      /*      QuantityStorageDof_P->BasisFunction[0].Dof = FI->DofForNoDof_P ; */
      break ;
    }
  }  
  else {
    for (j = 0 ; j < Nbr_Dof ; j++){
      ((void (*)(struct Element*, double*, double*))
       FI->xChangeOfCoordinatesDof) (Current.Element, vBFxEqu[j], vBFxDof[j].Val) ;
      vBFxDof[j].Type = FI->Type_ValueDof ;
      if(Current.NbrHar > 1) Cal_SetHarmonicValue(&vBFxDof[j]) ;
    }
  }
  
  /* Compute remaining factors in the term */
  
  if (EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity == 
      CWQ_DOF) {
  }
  else if (EquationTerm_P->Case.LocalTerm.Term.CanonicalWholeQuantity == 
	   CWQ_EXP_TIME_DOF) {
    Get_ValueOfExpression
      (Problem_Expression0 +
       EquationTerm_P->Case.LocalTerm.Term.ExpressionIndexForCanonical,
       QuantityStorage_P0, Current.u, Current.v, Current.w, 
       &CoefPhys) ;
    for (j = 0 ; j < Nbr_Dof ; j++)
      Cal_ProductValue(&CoefPhys, &vBFxDof[j], &vBFxDof[j]) ;
  }
  else
    Cal_WholeQuantity
      (Current.Element, QuantityStorage_P0,
       EquationTerm_P->Case.LocalTerm.Term.WholeQuantity,
       Current.u, Current.v, Current.w,
       EquationTerm_P->Case.LocalTerm.Term.DofIndexInWholeQuantity,
       Nbr_Dof, vBFxDof) ;  

  GetDP_End ;
}
