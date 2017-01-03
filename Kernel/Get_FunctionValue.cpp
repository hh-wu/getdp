// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <stdlib.h>
#include <math.h>
#include "ProData.h"
#include "GeoData.h"
#include "DofData.h"
#include "Cal_Quantity.h"
#include "Get_Geometry.h"
#include "Message.h"

#define SQU(a)     ((a)*(a))

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*  G e t _ V a l u e F r o m F o r m                                       */
/* ------------------------------------------------------------------------ */

int Get_ValueFromForm(int Form)
{
  switch (Form) {
  case FORM0  :
  case FORM3  : case FORM3P :
  case SCALAR :
    return(SCALAR) ;

  case FORM1  : case FORM1P  : case FORM1S :
  case FORM2  : case FORM2P  : case FORM2S :
  case VECTOR : case VECTORP :
    return(VECTOR) ;

  default :
    Message::Error("Unknown Form type in 'Get_ValueFromForm'");
    return(-1) ;
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
					      int     CriterionIndex)
{
  struct Value Criterion ;

  if (CriterionIndex >= 0){
    Current.Element = Element ;
    Current.ElementSource = Element->ElementSource ;
    Get_ValueOfExpression
      ((struct Expression *)
       List_Pointer(Problem_S.Expression, CriterionIndex),
       NULL, 0., 0., 0., &Criterion) ;
    if(Criterion.Val[0] < 0 || Criterion.Val[0] >= List_Nbr(IntegrationCase_L))
      Message::Error("Integration criterion out of range");
  }
  else {
    if(List_Nbr(IntegrationCase_L) > 1)
      Message::Error("Missing integration criterion");
    Criterion.Val[0] = 0;
  }

  return((struct IntegrationCase*) List_Pointer(IntegrationCase_L,
						(int)Criterion.Val[0])) ;
}

/* ------------------------------------------------------------------------ */
/*  G e t _ F u n c t i o n V a l u e                                       */
/* ------------------------------------------------------------------------ */

void  Get_FunctionValue(int Nbr_Function,
			void (*xFunctionBF[])(),
			int Type_Operator,
			struct QuantityStorage  * QuantityStorage_P,
			int * Type_Form)
{
  int  i ;

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
    else{
      Message::Error("Cannot apply Grad operator to quantity type %d",
                     QuantityStorage_P->TypeQuantity);
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
    else{
      Message::Error("Cannot apply Curl operator to quantity type %d",
                     QuantityStorage_P->TypeQuantity);
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
    else{
      Message::Error("Cannot apply Div operator to quantity type %d",
                     QuantityStorage_P->TypeQuantity);
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
    else{
      Message::Error("Cannot apply GradInv operator to quantity type %d",
                     QuantityStorage_P->TypeQuantity);
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
    else{
      Message::Error("Cannot apply CurlInv operator to quantity type %d",
                     QuantityStorage_P->TypeQuantity);
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
    else{
      Message::Error("Cannot apply DivInv operator to quantity type %d",
                     QuantityStorage_P->TypeQuantity);
    }
    break ;

  case OP_D1 :
    if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = VECTOR ;
      for (i = 0 ; i < Nbr_Function ; i++)
        xFunctionBF[i] =
          QuantityStorage_P->BasisFunction[i].BasisFunction->dFunction ;
    }
    else{
      Message::Error("Cannot apply D1 operator to quantity type %d",
                     QuantityStorage_P->TypeQuantity);
    }
    break ;

  case OP_D2 :
    if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = VECTOR ;
      for (i = 0 ; i < Nbr_Function ; i++)
        xFunctionBF[i] =
          QuantityStorage_P->BasisFunction[i].BasisFunction->dInvFunction ;
    }
    else{
      Message::Error("Cannot apply D2 operator to quantity type %d",
                     QuantityStorage_P->TypeQuantity);
    }
    break ;

  case OP_D3 :
    if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = VECTOR ;
      for (i = 0 ; i < Nbr_Function ; i++)
        xFunctionBF[i] =
          QuantityStorage_P->BasisFunction[i].BasisFunction->dPlusFunction ;
    }
    else{
      Message::Error("Cannot apply D3 operator to quantity type %d",
                     QuantityStorage_P->TypeQuantity);
    }
    break ;

  default :
    Message::Error("Unknown operator in 'Get_FunctionValue'");
    break;
  }
}


/* ------------------------------------------------------------------------ */
/*  G e t _ I n i t F u n c t i o n V a l u e                               */
/* ------------------------------------------------------------------------ */

void  Get_InitFunctionValue(int Type_Operator,
			    struct QuantityStorage  * QuantityStorage_P,
			    int * Type_Form)
{
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

  case OP_D1 :
  case OP_D2 :
  case OP_D3 :
    if (QuantityStorage_P->TypeQuantity == VECTOR)
      *Type_Form = VECTOR ;
    else
      *Type_Form = VECTOR ;
    break ;

  default :
    Message::Error("Unknown operator in 'Get_InitFunctionValue'");
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  C a l _ I n t e r p o l a t i o n O r d e r                             */
/* ------------------------------------------------------------------------ */

double Cal_InterpolationOrder(struct Element * Element,
			      struct QuantityStorage * QuantityStorage)
{
  int i ;
  double Order = 0.0 ;

  for(i = 0 ; i < QuantityStorage->NbrElementaryBasisFunction ; i++)
    if(QuantityStorage->BasisFunction[i].Dof->Type == DOF_UNKNOWN)
      Order = std::max(QuantityStorage->BasisFunction[i].BasisFunction->Order, Order) ;

  return(Order) ;
}

/* ------------------------------------------------------------------------ */
/*  C a l _ M a x E d g e L e n g t h                                       */
/* ------------------------------------------------------------------------ */

double Cal_MaxEdgeLength(struct Element * Element)
{
  int    i, *IM, *N, NbrEdges ;
  double l, lmax = 0.0 ;

  IM = Geo_GetIM_Den(Element->Type, &NbrEdges) ;
  for(i = 0 ; i < NbrEdges ; i++){
    N = IM + i * NBR_MAX_SUBENTITIES_IN_ELEMENT ;
    l = sqrt(SQU(Element->x[abs(N[1])-1]-Element->x[abs(N[0])-1]) +
	     SQU(Element->y[abs(N[1])-1]-Element->y[abs(N[0])-1]) +
	     SQU(Element->z[abs(N[1])-1]-Element->z[abs(N[0])-1])) ;
    lmax = std::max(lmax, l) ;
  }

  return(lmax) ;
}
