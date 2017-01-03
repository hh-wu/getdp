// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <math.h>
#include "ProData.h"
#include "ProDefine.h"
#include "BF.h"
#include "Cal_Quantity.h"
#include "Cal_Value.h"
#include "Get_Geometry.h"
#include "Get_FunctionValue.h"
#include "Message.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

/* ----------------------------------------------------------------------------- */
/*  C a l _ I n i t I n t e g r a l Q u a n t i t y                              */
/* ----------------------------------------------------------------------------- */

void Cal_InitIntegralQuantity(struct Element                *Element,
			      struct IntegralQuantityActive *IQA,
			      struct QuantityStorage        *QuantityStorage_P)
{
  struct Quadrature  *Quadrature_P ;
  int                 ElementSourceType ;
  int                 i,j ;

  ElementSourceType = Element->ElementSource->Type ;

  /* Get integration method */
  IQA->IntegrationCase_P = Get_IntegrationCase(Element,
					       IQA->IntegrationCase_L,
					       IQA->CriterionIndex);

  switch(IQA->IntegrationCase_P->Type) {
    /* Numerical Integration */
  case GAUSS :
  case GAUSSLEGENDRE :
    Quadrature_P = (struct Quadrature*)
      List_PQuery(IQA->IntegrationCase_P->Case, &ElementSourceType, fcmp_int) ;

    if(!Quadrature_P){
      Message::Error("Unknown type of Element (%s) for Integration method (%s)",
		 Get_StringForDefine(Element_Type, ElementSourceType),
		 ((struct IntegrationMethod *)
		  List_Pointer(Problem_S.IntegrationMethod,
			       QuantityStorage_P->DefineQuantity->IntegralQuantity.
			       IntegrationMethodIndex))->Name);
      return;
    }

    IQA->Nbr_IntPoints = Quadrature_P->NumberOfPoints ;
    IQA->Get_IntPoint  = Quadrature_P->Function ;
    IQA->xChangeOfCoordinates =
      (void (*)())Get_ChangeOfCoordinates(1, IQA->Type_FormDof) ;

    i = 0 ;
    while ((i < List_Nbr(IQA->JacobianCase_L)) &&
	   ((j = ((struct JacobianCase *)List_Pointer(IQA->JacobianCase_L, i))
	     ->RegionIndex) >= 0) &&
	   !List_Search
	   (((struct Group *)List_Pointer(Problem_S.Group, j)) ->InitialList,
	    &Element->ElementSource->Region, fcmp_int) )  i++ ;

    if (i == List_Nbr(IQA->JacobianCase_L)){
      Message::Error("Undefined Jacobian in Region %d", Element->ElementSource->Region);
      return;
    }

    Element->ElementSource->JacobianCase =
      (struct JacobianCase*)List_Pointer(IQA->JacobianCase_L, i) ;

    IQA->Get_Jacobian = (double (*)())Get_JacobianFunction
      (Element->ElementSource->JacobianCase->TypeJacobian,
       ElementSourceType, &IQA->Type_Dimension) ;

    if(QuantityStorage_P->DefineQuantity->IntegralQuantity.Symmetry){
      Message::Error("Symmetries of integral kernels not ready with numerical integration");
      return;
    }
    break;

    /* Analytical Integration (the jacobian method is not defined, since we also
       express the basis functions analytically) */

  case ANALYTIC :
    switch(QuantityStorage_P->DefineQuantity->IntegralQuantity.CanonicalWholeQuantity){
    case CWQ_GF :
    case CWQ_GF_PSCA_DOF :
    case CWQ_GF_PSCA_EXP :
    case CWQ_GF_PVEC_EXP :
    case CWQ_EXP_TIME_GF_PSCA_DOF :
      break ;
    case CWQ_GF_PVEC_DOF :
    case CWQ_EXP_TIME_GF_PVEC_DOF :
    default : Message::Error("Unrecognized Integral Quantity to integrate analytically");
      return;
    }
    break ;

  default :
    Message::Error("Unknown type of Integration method (%s) for Integral Quantity",
	       ((struct IntegrationMethod *)
		List_Pointer(Problem_S.IntegrationMethod,
			     QuantityStorage_P->DefineQuantity->IntegralQuantity.
			     IntegrationMethodIndex))->Name);
    return;
  }

  IQA->Type_ValueDof = Get_ValueFromForm(IQA->Type_FormDof);
}

/* ----------------------------------------------------------------------------- */
/*  A p p l y _ C o n s t a n t F a c t o r                                      */
/* ----------------------------------------------------------------------------- */

void Apply_ConstantFactor(struct QuantityStorage * QuantityStorage_P,
			  struct Value           * vBFxDof,
			  struct Value           * Val)
{
  switch(QuantityStorage_P->DefineQuantity->IntegralQuantity.CanonicalWholeQuantity){
  case CWQ_GF :
  case CWQ_GF_PSCA_DOF :
  case CWQ_GF_PVEC_DOF :
  case CWQ_DOF_PVEC_GF :
    break ;
  case CWQ_GF_PSCA_EXP :
  case CWQ_EXP_TIME_GF_PSCA_DOF :
  case CWQ_EXP_TIME_GF_PVEC_DOF :
  case CWQ_FCT_TIME_GF_PSCA_DOF :
  case CWQ_FCT_TIME_GF_PVEC_DOF :
    Cal_ProductValue(Val, vBFxDof, vBFxDof);
    break;
  case CWQ_GF_PVEC_EXP :
    Cal_CrossProductValue(vBFxDof, Val, vBFxDof);
    break;
  case CWQ_EXP_PVEC_GF :
  case CWQ_EXP_PVEC_GF_PSCA_DOF :
  case CWQ_EXP_PVEC_GF_PVEC_DOF :
  case CWQ_FCT_PVEC_GF_PSCA_DOF :
  case CWQ_FCT_PVEC_GF_PVEC_DOF :
    Cal_CrossProductValue(Val, vBFxDof, vBFxDof);
    break;
  default :
    Message::Error("Unknown type of canonical Integral Quantity");
    return;
  }
}

/* ------------------------------------------------------------------------------- */
/*  C a l _ N u m e r i c a l I n t e g r a l Q u a n t i t y                      */
/* ------------------------------------------------------------------------------- */

void Cal_NumericalIntegralQuantity(struct Element                 *Element,
				   struct IntegralQuantityActive  *IQA,
				   struct QuantityStorage         *QuantityStorage_P0,
				   struct QuantityStorage         *QuantityStorage_P,
				   int                             Type_DefineQuantity,
				   int                             Nbr_Dof,
				   void                          (*xFunctionBF[])(),
				   struct Value                    vBFxDof[])
{
  struct Value   vBFx[NBR_MAX_BASISFUNCTIONS] ;
  int            i, j, i_IntPoint ;
  double         Factor, weight ;
  double         vBFu[NBR_MAX_BASISFUNCTIONS] [MAX_DIM] ;
  struct Element *ES  ;

  /* This routine is valid for all QUADRATURE cases: GAUSS,
     GAUSSLEGENDRE */

  if (Element->Num != NO_ELEMENT) {
    Current.x = Current.y = Current.z = 0. ;
    for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
      Current.x += Element->x[i] * Element->n[i] ;
      Current.y += Element->y[i] * Element->n[i] ;
      Current.z += Element->z[i] * Element->n[i] ;
    }
  }

  Current.Element = Element ;
  Current.ElementSource = Element->ElementSource ;

  for (j = 0 ; j < Nbr_Dof ; j++) Cal_ZeroValue(&vBFxDof[j]);

  ES = Element->ElementSource ;

  for (i_IntPoint = 0 ; i_IntPoint < IQA->Nbr_IntPoints ; i_IntPoint++) {

    ((void (*)(int,int,double*,double*,double*,double*))
     IQA->Get_IntPoint) (IQA->Nbr_IntPoints, i_IntPoint,
			 &Current.us, &Current.vs, &Current.ws, &weight) ;

    Get_BFGeoElement (ES, Current.us, Current.vs, Current.ws) ;

    ES->DetJac =
      ((double (*)(struct Element*, MATRIX3x3*))
       IQA->Get_Jacobian) (ES, &ES->Jac) ;

    if(IQA->Type_FormDof == FORM1)
      Get_InverseMatrix(IQA->Type_Dimension, ES->Type,
			ES->DetJac, &ES->Jac, &ES->InvJac) ;

    Current.xs = Current.ys = Current.zs = 0. ;
    for (i = 0 ; i < ES->GeoElement->NbrNodes ; i++) {
      Current.xs += ES->x[i] * ES->n[i] ;
      Current.ys += ES->y[i] * ES->n[i] ;
      Current.zs += ES->z[i] * ES->n[i] ;
    }

    if(Type_DefineQuantity != NODOF){
      for (j = 0 ; j < Nbr_Dof ; j++) {
	((void (*)(struct Element*, int, double, double, double, double*))
	 xFunctionBF[j]) (Element->ElementSource,
			  QuantityStorage_P->BasisFunction[j].NumEntityInElement+1,
			  Current.us, Current.vs, Current.ws, vBFu[j]) ;

	((void (*)(struct Element*, double*, double*))
	 IQA->xChangeOfCoordinates) (Element->ElementSource, vBFu[j], vBFx[j].Val) ;

	vBFx[j].Type = IQA->Type_ValueDof ;
	Cal_SetHarmonicValue(&vBFx[j]);
      }
    }

    Factor = weight * fabs(ES->DetJac) ;

    Current.Region = Element->ElementSource->Region ;

    /* Il faudrait definir le cas canonique Function[] * Dof  */

    Cal_WholeQuantity
      (Element->ElementSource, QuantityStorage_P0,
       QuantityStorage_P->DefineQuantity->IntegralQuantity.WholeQuantity,
       Current.us, Current.vs, Current.ws,
       QuantityStorage_P->DefineQuantity->IntegralQuantity.DofIndexInWholeQuantity,
       Nbr_Dof, vBFx) ;

    Current.Region = Element->Region ;

    for (j = 0 ; j < Nbr_Dof ; j++) {
      vBFxDof[j].Type = vBFx[j].Type ;
      Cal_AddMultValue(&vBFxDof[j],&vBFx[j],Factor,&vBFxDof[j]);
    }

  }
}

/* ------------------------------------------------------------------------------- */
/*  C a l _ A n a l y t i c I n t e g r a l Q u a n t i t y                        */
/* ------------------------------------------------------------------------------- */

void Cal_AnalyticIntegralQuantity(struct Element         *Element,
				  struct QuantityStorage *QuantityStorage_P,
				  int                     Nbr_Dof,
				  void                  (*xFunctionBF[])(),
				  struct Value            vBFxDof[])
{
  struct Value   Val0 ;
  int            i, j ;

  if (Element->Num != NO_ELEMENT) {
    Current.x = Current.y = Current.z = 0. ;
    for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
      Current.x += Element->x[i] * Element->n[i] ;
      Current.y += Element->y[i] * Element->n[i] ;
      Current.z += Element->z[i] * Element->n[i] ;
    }
  }

  Current.Element = Element ;
  Current.ElementSource = Element->ElementSource ;

  switch(QuantityStorage_P->DefineQuantity->IntegralQuantity.CanonicalWholeQuantity){
  case CWQ_GF :
  case CWQ_GF_PSCA_DOF :
    break ;
  case CWQ_GF_PVEC_DOF :
  case CWQ_EXP_TIME_GF_PVEC_DOF :
    Message::Error("Vector product of GF_Function and Dof{} not done for analytic integration");
    return ;
  case CWQ_GF_PSCA_EXP :
  case CWQ_GF_PVEC_EXP :
  case CWQ_EXP_TIME_GF_PSCA_DOF :
    Current.ElementSource = Element->ElementSource ;
    Current.Region = Element->ElementSource->Region ;
    Get_ValueOfExpression((struct Expression *)
			  List_Pointer(Problem_S.Expression,
				       QuantityStorage_P->DefineQuantity->IntegralQuantity.
				       ExpressionIndexForCanonical),
			  NULL, 0., 0., 0., &Val0) ;
    Current.Region = Element->Region ;
    break ;
  default :
    Message::Error("Unknown type of canonical Integral Quantity");
    return;
  }


  for (j = 0 ; j < Nbr_Dof ; j++) {

    ((void (*)(struct Element*, struct Function *, void(*)(), int,
	       double, double, double, struct Value *))
     QuantityStorage_P->DefineQuantity->IntegralQuantity.FunctionForCanonical.Fct)
      (Element,
       &QuantityStorage_P->DefineQuantity->IntegralQuantity.FunctionForCanonical,
       xFunctionBF[j],
       QuantityStorage_P->BasisFunction[j].NumEntityInElement+1,
       Current.x, Current.y, Current.z,
       &vBFxDof[j]) ;

    Apply_ConstantFactor(QuantityStorage_P, &vBFxDof[j], &Val0) ;
  }

  switch(QuantityStorage_P->DefineQuantity->IntegralQuantity.Symmetry) {
  case 0 : /* No Symmetry */
    break;

  case 1 : /* y -> -y */
    for (i = 0 ; i < Element->ElementSource->GeoElement->NbrNodes ; i++)
      Element->ElementSource->y[i] *= -1. ;

    for (j = 0 ; j < Nbr_Dof ; j++) {

      ((void (*)(struct Element*, struct Function *, void(*)(), int,
		 double, double, double, struct Value *))
       QuantityStorage_P->DefineQuantity->IntegralQuantity.FunctionForCanonical.Fct)
	(Element,
	 &QuantityStorage_P->DefineQuantity->IntegralQuantity.FunctionForCanonical,
	 xFunctionBF[j],
	 QuantityStorage_P->BasisFunction[j].NumEntityInElement+1,
	 Current.x, Current.y, Current.z,
	 &Val0) ;

      Apply_ConstantFactor(QuantityStorage_P, &vBFxDof[j], &Val0) ;

      if (vBFxDof[j].Type == SCALAR) {
	vBFxDof[j].Val[0] -= Val0.Val[0] ;
      }
      else {
	vBFxDof[j].Val[0] -= Val0.Val[0] ;
	vBFxDof[j].Val[1] -= Val0.Val[1] ;
	vBFxDof[j].Val[2] -= Val0.Val[2] ;
      }

    }

    for (i = 0 ; i < Element->ElementSource->GeoElement->NbrNodes ; i++)
      Element->ElementSource->y[i] *= -1. ;

    break;

  default:
    Message::Error("Unknown type of symmetry in Integral Quantity");
    break;
  }
}
