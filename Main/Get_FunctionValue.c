#define RCSID "$Id: Get_FunctionValue.c,v 1.13 2003-03-22 03:30:13 geuzaine Exp $"
/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to "getdp@geuz.org".
 */

#include "GetDP.h"
#include "Treatment_Formulation.h"
#include "Cal_Quantity.h"
#include "Get_Geometry.h"
#include "GeoData.h"
#include "CurrentData.h"
#include "Numeric.h"
#include "Tools.h"

/* ------------------------------------------------------------------------ */
/*  G e t _ V a l u e F r o m F o r m                                       */
/* ------------------------------------------------------------------------ */

int Get_ValueFromForm(int Form) {
  
  GetDP_Begin("Get_ValueFromForm");

  switch (Form) {
  case FORM0  :  
  case FORM3  : case FORM3P :  
  case SCALAR :
    GetDP_Return(SCALAR) ;
    
  case FORM1  : case FORM1P  : case FORM1S : 
  case FORM2  : case FORM2P  : case FORM2S :
  case VECTOR : case VECTORP :
    GetDP_Return(VECTOR) ;

  default :
    Msg(ERROR, "Unknown Form type in 'Get_ValueFromForm'");
    GetDP_Return(-1) ;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e t _ I n t e g r a t i o n C a s e                                   */
/* ------------------------------------------------------------------------ */

/* 
   Il faudrait reorganiser les 'Current.XXX' 
   Ca devient un peu le bordel.
   */

struct IntegrationCase * Get_IntegrationCase (struct Element * Element, 
					      List_T *IntegrationCase_L, 
					      int     CriterionIndex) {
  struct Value Criterion ;

  GetDP_Begin("Get_IntegrationCase");

  if (CriterionIndex >= 0){    
    Current.Element = Element ;
    Current.ElementSource = Element->ElementSource ;
    Get_ValueOfExpression
      ((struct Expression *)
       List_Pointer(Problem_S.Expression, CriterionIndex),
       NULL, 0., 0., 0., &Criterion) ;
    if(Criterion.Val[0] < 0 || Criterion.Val[0] >= List_Nbr(IntegrationCase_L))
      Msg(ERROR, "Integration criterion out of range");
  }
  else {
    if(List_Nbr(IntegrationCase_L) > 1)
      Msg(ERROR, "Missing integration criterion");
    Criterion.Val[0] = 0;
  }

  GetDP_Return((struct IntegrationCase*) List_Pointer(IntegrationCase_L,
						      (int)Criterion.Val[0])) ;
}

/* ------------------------------------------------------------------------ */
/*  G e t _ F u n c t i o n V a l u e                                       */
/* ------------------------------------------------------------------------ */

void  Get_FunctionValue(int Nbr_Function,
			void (*xFunctionBF[])(),
			int Type_Operator,
			struct QuantityStorage  * QuantityStorage_P,
			int * Type_Form) {
  int  i ;

  GetDP_Begin("Get_FunctionValue");

  switch (Type_Operator) {

  case NOOP :
    *Type_Form = QuantityStorage_P->TypeQuantity ;
    for (i = 0 ; i < Nbr_Function ; i++)
      xFunctionBF[i] =
	QuantityStorage_P->BasisFunction[i].BasisFunction->Function ;
    break ;

  case EXTDER :
    *Type_Form = QuantityStorage_P->TypeQuantity + 1 ;
    for (i = 0 ; i < Nbr_Function ; i++)
      xFunctionBF[i] =
	QuantityStorage_P->BasisFunction[i].BasisFunction->dFunction ;
    break ;

  case EXTDERINV :
    *Type_Form = QuantityStorage_P->TypeQuantity - 1 ;
    for (i = 0 ; i < Nbr_Function ; i++)
      xFunctionBF[i] =
	QuantityStorage_P->BasisFunction[i].BasisFunction->dInvFunction ;
    break ;

  case GRAD :
    if (QuantityStorage_P->TypeQuantity == FORM0) {
      *Type_Form = QuantityStorage_P->TypeQuantity + 1 ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dFunction ;
    }
    else if (QuantityStorage_P->TypeQuantity == SCALAR) {
      *Type_Form = VECTOR ;
    }
    break ;

  case CURL :
    if ((QuantityStorage_P->TypeQuantity == FORM1) ||
	(QuantityStorage_P->TypeQuantity == FORM1P)) {
      *Type_Form = QuantityStorage_P->TypeQuantity + 1 ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dFunction ;
    }
    else if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = VECTOR ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dFunction ;
    }
    break ;

  case DIV :
    if (QuantityStorage_P->TypeQuantity == FORM2) {
      *Type_Form = QuantityStorage_P->TypeQuantity + 1 ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dFunction ;
    }
    else if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = SCALAR ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dInvFunction ;
    }
    break ;

  case GRADINV :
    if (QuantityStorage_P->TypeQuantity == FORM1) {
      *Type_Form = QuantityStorage_P->TypeQuantity - 1 ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dInvFunction ;
    }
    else if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = SCALAR ;
    }
    break ;

  case CURLINV :
    if (QuantityStorage_P->TypeQuantity == FORM2) {
      *Type_Form = QuantityStorage_P->TypeQuantity - 1 ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dInvFunction ;
    }
    else if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = VECTOR ;

    }
    break ;

  case DIVINV :
    if ((QuantityStorage_P->TypeQuantity == FORM3) ||
	(QuantityStorage_P->TypeQuantity == FORM3P)) {
      *Type_Form = QuantityStorage_P->TypeQuantity - 1 ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dInvFunction ;
    }
    else if (QuantityStorage_P->TypeQuantity == SCALAR) {
      *Type_Form = VECTOR ;
    }
    break ;

  case _D1 :
    if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = VECTOR ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dFunction ;
    }
    break ;

  case _D2 :
    if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = VECTOR ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dInvFunction ;
    }
    break ;

  default :
    Msg(ERROR, "Unknown operator in 'Get_FunctionValue'");
    break;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ I n i t F u n c t i o n V a l u e                               */
/* ------------------------------------------------------------------------ */

void  Get_InitFunctionValue(int Type_Operator,
			    struct QuantityStorage  * QuantityStorage_P,
			    int * Type_Form) {

  GetDP_Begin("Get_InitFunctionValue");

  switch (Type_Operator) {

  case NOOP :
    *Type_Form = QuantityStorage_P->TypeQuantity ;  break ;

  case EXTDER :
    *Type_Form = QuantityStorage_P->TypeQuantity + 1 ;  break ;

  case EXTDERINV :
    *Type_Form = QuantityStorage_P->TypeQuantity - 1 ;  break ;


  case GRAD :
    if (QuantityStorage_P->TypeQuantity == FORM0)
      *Type_Form = QuantityStorage_P->TypeQuantity + 1 ;
    else if (QuantityStorage_P->TypeQuantity == SCALAR)  *Type_Form = VECTOR ;
    break ;

  case CURL :
    if ((QuantityStorage_P->TypeQuantity == FORM1) ||
	(QuantityStorage_P->TypeQuantity == FORM1P))
      *Type_Form = QuantityStorage_P->TypeQuantity + 1 ;
    else if (QuantityStorage_P->TypeQuantity == VECTOR)  *Type_Form = VECTOR ;
    break ;

  case DIV  :
    if (QuantityStorage_P->TypeQuantity == FORM2)
      *Type_Form = QuantityStorage_P->TypeQuantity + 1 ;
    else if (QuantityStorage_P->TypeQuantity == VECTOR)  *Type_Form = SCALAR ;
    break ;

  case GRADINV :
    if (QuantityStorage_P->TypeQuantity == FORM1) 
      *Type_Form = QuantityStorage_P->TypeQuantity - 1 ;
    else if (QuantityStorage_P->TypeQuantity == VECTOR)  *Type_Form = SCALAR ;
    break ;

  case CURLINV :
    if (QuantityStorage_P->TypeQuantity == FORM2) 
      *Type_Form = QuantityStorage_P->TypeQuantity - 1 ;
    else if (QuantityStorage_P->TypeQuantity == VECTOR)  *Type_Form = VECTOR ;
    break ;

  case DIVINV :
    if ((QuantityStorage_P->TypeQuantity == FORM3) ||
	(QuantityStorage_P->TypeQuantity == FORM3P))
      *Type_Form = QuantityStorage_P->TypeQuantity - 1 ;
    else if (QuantityStorage_P->TypeQuantity == SCALAR)  *Type_Form = VECTOR ;
    break ;

  case _D1 :
  case _D2 :
    if (QuantityStorage_P->TypeQuantity == VECTOR)
      *Type_Form = VECTOR ;
    else
      *Type_Form = VECTOR ;
    break ;

  default :
    Msg(ERROR, "Unknown operator in 'Get_InitFunctionValue'");
    break;
  }

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  C a l _ I n t e r p o l a t i o n O r d e r                             */
/* ------------------------------------------------------------------------ */

double Cal_InterpolationOrder(struct Element * Element,
			      struct QuantityStorage * QuantityStorage){
  int i ;
  double Order = 0.0 ;

  GetDP_Begin("Cal_InterpolationOrder");

  for(i = 0 ; i < QuantityStorage->NbrElementaryBasisFunction ; i++)
    if(QuantityStorage->BasisFunction[i].Dof->Type == DOF_UNKNOWN)
      Order = MAX(QuantityStorage->BasisFunction[i].BasisFunction->Order, Order) ;

  GetDP_Return(Order) ;
}


/* ------------------------------------------------------------------------ */
/*  C a l _ M a x E d g e L e n g t h                                       */
/* ------------------------------------------------------------------------ */

double Cal_MaxEdgeLength(struct Element * Element){
  int    i, *IM, *N, NbrEdges ;
  double l, lmax = 0.0 ;
  
  GetDP_Begin("Cal_MaxEdgeLength");

  IM = Geo_GetIM_Den(Element->Type, &NbrEdges) ;
  for(i = 0 ; i < NbrEdges ; i++){
    N = IM + i * NBR_MAX_SUBENTITIES_IN_ELEMENT ;
    l = sqrt(SQU(Element->x[abs(N[1])-1]-Element->x[abs(N[0])-1]) +
	     SQU(Element->y[abs(N[1])-1]-Element->y[abs(N[0])-1]) +
	     SQU(Element->z[abs(N[1])-1]-Element->z[abs(N[0])-1])) ;
    lmax = MAX(lmax, l) ;
  }

  GetDP_Return(lmax) ;
}
