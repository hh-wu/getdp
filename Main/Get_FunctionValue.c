#include <stdio.h>
#include <math.h>

#include "Treatment_Formulation.h"
#include "Cal_Quantity.h"
#include "Get_Geometry.h"

#include "GeoData.h"

#include "CurrentData.h"
#include "outil.h"


/* ------------------------------------------------------------------------ */
/*  G e t _ V a l u e F r o m F o r m                                       */
/* ------------------------------------------------------------------------ */

int Get_ValueFromForm(int Form) {
  switch (Form) {
  case FORM0  :  
  case FORM3  : case FORM3P :  
  case SCALAR :
    return SCALAR ;
    
  case FORM1  : case FORM1P  : case FORM1S : 
  case FORM2  : case FORM2P  : case FORM2S :
  case VECTOR : case VECTORP :
    return VECTOR ;

  default :
    Msg(ERROR, "Unknown Form Type in 'Get_ValueFromForm'");
    return -1 ;
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

  if (CriterionIndex >= 0){    
    Current.Element = Element ;
    Current.ElementSource = Element->ElementSource ;
    Get_ValueOfExpression
      ((struct Expression *)
       List_Pointer(Problem_S.Expression, CriterionIndex),
       NULL, 0., 0., 0., &Criterion) ;
    if(Criterion.Val[0] < 0 || Criterion.Val[0] >= List_Nbr(IntegrationCase_L))
      Msg(ERROR, "Integration Criterion out of Range");
  }
  else {
    if(List_Nbr(IntegrationCase_L) > 1)
      Msg(ERROR, "Missing Integration Criterion");
    Criterion.Val[0] = 0;
  }

  return (struct IntegrationCase*) List_Pointer(IntegrationCase_L, (int)Criterion.Val[0]);
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

  case DXY :
    if (QuantityStorage_P->TypeQuantity == VECTOR) {
      *Type_Form = VECTOR ;
      for (i = 0 ; i < Nbr_Function ; i++)
	xFunctionBF[i] =
	  QuantityStorage_P->BasisFunction[i].BasisFunction->dFunction ;
    }
    break ;

  default :
    Msg(ERROR, "Unknown Operator in 'Get_FunctionValue'");
    break;
  }

}


/* ------------------------------------------------------------------------ */
/*  G e t _ I n i t F u n c t i o n V a l u e                               */
/* ------------------------------------------------------------------------ */

void  Get_InitFunctionValue(int Type_Operator,
			    struct QuantityStorage  * QuantityStorage_P,
			    int * Type_Form) {

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

  case DXY :
    if (QuantityStorage_P->TypeQuantity == VECTOR)
      *Type_Form = VECTOR ;
    else
      *Type_Form = VECTOR ;
    break ;

  default :
    Msg(ERROR, "Unknown Operator in 'Get_InitFunctionValue'");
    break;
  }

}

