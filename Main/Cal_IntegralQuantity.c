#include <stdio.h>
#include <math.h>

#include "Treatment_Formulation.h"
#include "Get_Geometry.h"
#include "Get_Cells.h"
#include "BF_Function.h"
#include "CurrentData.h"
#include "Cal_Quantity.h"
#include "Data_DefineE.h"
#include "outil.h"
#include "Pos_Search.h" /* xyz2uvw */

#undef __DEB 

int            Nbr_deRhamCells;
struct Element deRhamCells[NBR_MAX_DERHAM_CELLS];
struct Value   deRhamCell_Vector[NBR_MAX_DERHAM_CELLS];
struct Value   deRhamCell_Value[NBR_MAX_BASISFUNCTIONS][NBR_MAX_DERHAM_CELLS];

int            Nbr_IntegrationCells;
struct Element IntegrationCells[NBR_MAX_INTEGRATION_CELLS];

/* ------------------------------------------------------------------------ */
/*  C a l _ I n i t I n t e g r a l Q u a n t i t y                         */
/* ------------------------------------------------------------------------ */

void Cal_InitIntegralQuantity(struct Element                *Element, 
			      struct IntegralQuantityActive *IQA,
			      struct QuantityStorage        *QuantityStorage_P) {

  struct Quadrature  *Quadrature_P ;
  struct Group       *Group_P ;
  int                 ElementSourceType, RelativeJacobianType ;
  int                 i,j ;


  /* Get de Rham cells in the source element if necessary */

  Group_P = (struct Group*)List_Pointer(Problem_S.Group, 
					QuantityStorage_P->DefineQuantity->
					IntegralQuantity.InIndex) ; 

  if(Group_P->FunctionType != REGION){
    Msg(WARNING, "Get de Rham cells in Integral Quantity");
    Get_deRhamCells(Element->ElementSource, QuantityStorage_P, Group_P,
		    &Nbr_deRhamCells, deRhamCells, deRhamCell_Vector, &RelativeJacobianType);
    ElementSourceType = deRhamCells[0].Type ;
  }
  else{
    ElementSourceType = Element->ElementSource->Type ;
    Nbr_deRhamCells = 0 ;
    RelativeJacobianType = 0 ;
  }


  /* Get integration method */

  IQA->IntegrationCase_P = Get_IntegrationCase(Element,
					       IQA->IntegrationCase_L, 
					       IQA->CriterionIndex);

  switch(IQA->IntegrationCase_P->Type) {

    /* Numerical Integration */

  case GAUSS :
  case NEWTONCOTES :
    Quadrature_P = (struct Quadrature*)
      List_PQuery(IQA->IntegrationCase_P->Case, &ElementSourceType, fcmp_int) ;

    if(!Quadrature_P)
      Msg(ERROR, "Unknown Type of Element (%s) for IntegrationMethod (%s)",
	  Get_StringForDefine(Element_Type, ElementSourceType),
	  ((struct IntegrationMethod *)
	   List_Pointer(Problem_S.IntegrationMethod,
			QuantityStorage_P->DefineQuantity->IntegralQuantity.
			IntegrationMethodIndex))->Name);

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
    
    if (i == List_Nbr(IQA->JacobianCase_L))
      Msg(ERROR, "Undefined Jacobian in Region %d", Element->ElementSource->Region);
    
    Element->ElementSource->JacobianCase =
      (struct JacobianCase*)List_Pointer(IQA->JacobianCase_L, i) ;
    
    IQA->Get_Jacobian = (double (*)())Get_JacobianFunction 
      (Element->ElementSource->JacobianCase->TypeJacobian + RelativeJacobianType,
       ElementSourceType, &IQA->Type_Dimension) ;


    if(QuantityStorage_P->DefineQuantity->IntegralQuantity.Symmetry)
      Msg(ERROR, "Symmetries of Integral Kernels not ready with numerical integration");
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
    default : Msg(ERROR, "Unrecognized IntegralQuantity to integrate analytically");
    }
    break ;

    
  default :
    Msg(ERROR, "Unknown Type of IntegrationMethod (%s) for IntegralQuantity", 
	((struct IntegrationMethod *)
	 List_Pointer(Problem_S.IntegrationMethod,
		      QuantityStorage_P->DefineQuantity->IntegralQuantity.
		      IntegrationMethodIndex))->Name);
  }
  
  IQA->Type_ValueDof = Get_ValueFromForm(IQA->Type_FormDof);
  
}


#define DEBUG_PRINT									\
    Msg(DEBUG, "Elt %d (%g,%g)(%g,%g)(%g,%g), EltSource %d (%g,%g)(%g,%g)(%g,%g)\n",	\
	Element->Num,									\
	Element->x[0],Element->y[0],							\
	Element->x[1],Element->y[1],							\
	Element->x[2],Element->y[2],							\
	Element->ElementSource->Num,							\
	Element->ElementSource->x[0],Element->ElementSource->y[0],			\
	Element->ElementSource->x[1],Element->ElementSource->y[1],			\
	Element->ElementSource->x[2],Element->ElementSource->y[2]);			\
    Msg(DEBUG, "IntTermVal = %g %g %g\n",						\
	vBFxDof[0].Val[0],vBFxDof[1].Val[0],vBFxDof[2].Val[0])


/* ------------------------------------------------------------------------ */
/*  C a l _ I n t e g r a l Q u a n t i t y                                 */
/* ------------------------------------------------------------------------ */



void Apply_ConstantFactor(struct QuantityStorage * QuantityStorage_P, 
			  struct Value           * vBFxDof, 
			  struct Value           * Val){

  switch(QuantityStorage_P->DefineQuantity->IntegralQuantity.CanonicalWholeQuantity){
  case CWQ_GF :
  case CWQ_GF_PSCA_DOF :
  case CWQ_GF_PVEC_DOF :
    break ;
  case CWQ_GF_PSCA_EXP :
  case CWQ_EXP_TIME_GF_PSCA_DOF :
  case CWQ_EXP_TIME_GF_PVEC_DOF : 
    Cal_ProductValue(vBFxDof, Val, vBFxDof);
    break;
  case CWQ_GF_PVEC_EXP :
    Cal_CrossProductValue(vBFxDof, Val, vBFxDof);
    break;
  default : Msg(ERROR, "Unknown Type of Canonical Whole Quantity");
  }

}

extern int Flag_RemoveSingularity ;

void  Cal_IntegralQuantity (struct Element                 *Element, 
			    struct IntegralQuantityActive  *IQA,
			    struct QuantityStorage         *QuantityStorage_P0,
			    struct QuantityStorage         *QuantityStorage_P,
			    int                             Type_DefineQuantity, 
			    int                             Nbr_Dof, 
			    void                          (*xFunctionBF[])(),
			    struct Value                    vBFxDof[] ) {

  struct Value   vBFx[NBR_MAX_BASISFUNCTIONS], Val0 ;
  int            i, j, i_IntPoint, i_IntCell ;
  double         Factor, weight ;
  double         vBFu[NBR_MAX_BASISFUNCTIONS] [MAX_DIM] ;
  struct Element *ES ;

  if(Nbr_deRhamCells && Nbr_deRhamCells != Nbr_Dof)
    Msg(ERROR, "Incompatible de Rham Approximation of Integral Quantity");
  
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

  switch(IQA->IntegrationCase_P->Type) {

  /*  -------------------------------------  */
  /*  Q U A D R A T U R E                    */
  /*  -------------------------------------  */
  
  case GAUSS :
  case NEWTONCOTES :

    if(Nbr_deRhamCells)
      Msg(ERROR, "de Rham Approximation of Integral Kernels not done (yet) with Gauss");

    if(IQA->IntegrationCase_P->SubType == SINGULAR){
      Flag_RemoveSingularity = 1;
      Get_IntegrationCells(Element->ElementSource, Current.x, Current.y, Current.z, 
			   &Nbr_IntegrationCells, IntegrationCells) ;
    }
    else
      Nbr_IntegrationCells = 1 ;

    for (j = 0 ; j < Nbr_Dof ; j++)
      Cal_ZeroValue(&vBFxDof[j]);

    for(i_IntCell = 0 ; i_IntCell < Nbr_IntegrationCells ; i_IntCell++) {

      if(Nbr_IntegrationCells > 1) 
	ES = &IntegrationCells[i_IntCell] ;
      else
	ES = Element->ElementSource ;
      
      for (i_IntPoint = 0 ; i_IntPoint < IQA->Nbr_IntPoints ; i_IntPoint++) {

	((void (*)(int,int,double*,double*,double*,double*))
	 IQA->Get_IntPoint) (IQA->Nbr_IntPoints, i_IntPoint, 
			     &Current.us, &Current.vs, &Current.ws, &weight) ;

	Get_GeoElement (ES, Current.us, Current.vs, Current.ws) ;
	
	ES->DetJac =
	  ((double (*)(struct Element*, MATRIX3x3*))
	   IQA->Get_Jacobian) (ES, &ES->Jac) ;

#ifdef __DEB
	if(Nbr_IntegrationCells > 1) {
	  printf(" Det Jac Cell %d = %g\n", i_IntCell, ES->DetJac);
	  printf(" xyz        = %g %g %g\n", Current.x, Current.y, Current.z);
	  printf(" xyz source = %g %g %g\n", Current.xs, Current.ys, Current.zs);
	}
#endif

	if(IQA->Type_FormDof == FORM1)
	  Get_InverseMatrix(IQA->Type_Dimension, ES->Type, 
			    ES->DetJac, &ES->Jac, &ES->InvJac) ;
	
	Current.xs = Current.ys = Current.zs = 0. ;
	for (i = 0 ; i < ES->GeoElement->NbrNodes ; i++) {
	  Current.xs += ES->x[i] * ES->n[i] ;
	  Current.ys += ES->y[i] * ES->n[i] ;
	  Current.zs += ES->z[i] * ES->n[i] ;
	}

	if(Nbr_IntegrationCells > 1){
	  xyz2uvwInAnElement (Element->ElementSource, 
			      Current.xs, Current.ys, Current.zs,
			      &Current.us, &Current.vs, &Current.ws, 
			      (double (*)(struct Element*, MATRIX3x3*))
			      IQA->Get_Jacobian, IQA->Type_Dimension) ;
#ifdef __DEB
	  printf(" uvw source = %g %g %g\n", Current.us, Current.vs, Current.ws);
	  printf(" Det Jac Elt = %g\n", Element->ElementSource->DetJac);
#endif
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
		
	Current.Region = Element->ElementSource->Region ;

	/* Il faudrait definir le cas canonique Function[] * Dof  */

	Cal_WholeQuantity
	  (Element->ElementSource, QuantityStorage_P0,
	   QuantityStorage_P->DefineQuantity->IntegralQuantity.WholeQuantity,
	   Current.us, Current.vs, Current.ws, 
	   QuantityStorage_P->DefineQuantity->IntegralQuantity.DofIndexInWholeQuantity,
	   Nbr_Dof, vBFx) ;
	
	Current.Region = Element->Region ;
	
	/* TEST TEST */

	Factor = weight * fabs(ES->DetJac) / (double)Nbr_IntegrationCells ;

	for (j = 0 ; j < Nbr_Dof ; j++) {
	  vBFxDof[j].Type = vBFx[j].Type ;
	  Cal_AddMultValue(&vBFxDof[j],&vBFx[j],Factor,&vBFxDof[j]);	
	}
	
      }

#ifdef __DEB
      if(Nbr_IntegrationCells > 1) {
	printf(" Val = %g \n", vBFxDof[0].Val[0]);
      }
#endif

    }

    if(IQA->IntegrationCase_P->SubType == SINGULAR)
      Flag_RemoveSingularity = 0;


    DEBUG_PRINT;
    break;
  

  /*  -------------------------------------  */
  /*  A N A L Y T I C                        */
  /*  -------------------------------------  */

  case ANALYTIC :

    switch(QuantityStorage_P->DefineQuantity->IntegralQuantity.CanonicalWholeQuantity){
    case CWQ_GF :
    case CWQ_GF_PSCA_DOF :
      break ;
    case CWQ_GF_PVEC_DOF :
    case CWQ_EXP_TIME_GF_PVEC_DOF :
      Msg(ERROR, "Vector product of GF_Function and DoF not done for analytic integration");
      break ;
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
    default : Msg(ERROR, "Unknown Type of Canonical Whole Quantity");
    }

    for (j = 0 ; j < Nbr_Dof ; j++) {

      if(Nbr_deRhamCells) Element->ElementSource = &deRhamCells[j] ; 

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
    

    DEBUG_PRINT;
    
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
      Msg(ERROR, "Unknown Type of Symmetry in IntegralQuantity");
      break;
    }

    break;

  }

}


