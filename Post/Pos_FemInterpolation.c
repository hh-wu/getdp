#include <stdio.h>
#include <math.h>

#include "Treatment_Formulation.h"
#include "Get_DofOfElement.h"
#include "Get_Geometry.h"
#include "GeoData.h"
#include "DofData.h"
#include "Pos_Search.h"

#include "CurrentData.h"
#include "outil.h"

extern  List_T  * GeoData_L ;

/* ------------------------------------------------------------------------ */
/*  P o s _ F e m I n t e r p o l a t i o n                                 */
/* ------------------------------------------------------------------------ */

int SearchType(int type){
  switch(type){
  case POINT       : return _ALL;
  case LINE        : return _1D ;
  case TRIANGLE    :
  case QUADRANGLE  : return _2D ;
  case TETRAHEDRON :
  case HEXAHEDRON  :
  case PRISM       :
  case PYRAMID     : return _3D ;
  default          : Msg(ERROR, "Unknown Type in 'SearchType'"); return -1 ;
  }
}

void  Pos_FemInterpolation(struct Element * Element, 
			   struct QuantityStorage * QuantityStorage_P0,
			   struct QuantityStorage * QuantityStorage_P,
			   int Type_Quantity, int Type_Operator, int UseXYZ, 
			   double u, double v, double w, 
			   double x, double y, double z, 
			   double Val[], int * Type_Value,
			   int Flag_ChangeOfCoordinates) {

  void (*xFunctionBF[NBR_MAX_BASISFUNCTIONS])
    (struct Element *, int, double, double, double, double []) ;
  void (*xChangeOfCoordinates) () ;

  struct IntegralQuantityActive    IQA ;
  struct Value                     vBFxDof[NBR_MAX_BASISFUNCTIONS] ;
  struct GeoData                 * GeoData_P ;
  struct Element                   TheElement, * TheElement_P ;

  double  vBFu[NBR_MAX_BASISFUNCTIONS][MAX_DIM] ;
  double  Val_Dof, Val_Dof_r, Val_Dof_i ;

  int  Type_DefineQuantity, SubType_DefineQuantity, Type_Form  ;
  int  i, j, k, Nbr_Dof ;
  int  GeoDataNum, UseNewGeo=0 ;


  /* -------------
     Quantity Type 
     ------------- */

  Type_DefineQuantity = QuantityStorage_P->DefineQuantity->Type ;

  if(Type_DefineQuantity == INTEGRALQUANTITY){
    
    if(QuantityStorage_P->DefineQuantity->IntegralQuantity.DefineQuantityIndexDof < 0){
      SubType_DefineQuantity = NODOF ; 
    }
    else{
      SubType_DefineQuantity = INTEGRALQUANTITY ;
    }
  }
  else{
    SubType_DefineQuantity = Type_DefineQuantity ;
  }


  /* ---------------
     Get The Element 
     --------------- */

  if(SubType_DefineQuantity != NODOF) {

    if(!QuantityStorage_P->FunctionSpace->DofData)
      Msg(ERROR, "No available DofData to interpolate this Quantity");

    GeoDataNum = QuantityStorage_P->FunctionSpace->DofData->GeoDataIndex;
    UseNewGeo = GeoDataNum != Current.GeoData->Num ;

    if(UseXYZ || UseNewGeo){
      if(UseNewGeo){
	GeoData_P = (struct GeoData *)List_Pointer(GeoData_L, GeoDataNum);
	GeoDataNum = Current.GeoData->Num ;
	Geo_SetCurrentGeoData(Current.GeoData = GeoData_P) ;
      }
      if(!UseXYZ){
	x = y = z = 0. ;
	for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
	  x += Element->x[i] * Element->n[i] ;
	  y += Element->y[i] * Element->n[i] ;
	  z += Element->z[i] * Element->n[i] ;
	}
      }
      Init_SearchGrid(&Current.GeoData->Grid);
      InWhichElement(Current.GeoData->Grid, NULL, &TheElement, SearchType(Element->Type),
		     x, y, z, &u, &v, &w) ;
      TheElement_P = &TheElement ;
      Get_InitDofOfElement(&TheElement) ;
      Get_DofOfElement
	(&TheElement, QuantityStorage_P->FunctionSpace, QuantityStorage_P,
	 QuantityStorage_P->DefineQuantity->IndexInFunctionSpace) ;
    }
    else{
      TheElement_P = Element ;
    }
  }
  else{
    TheElement_P = Element ;
  }


  /* ------------------
     Init LocalQuantity
     ------------------ */

  if (Type_DefineQuantity == LOCALQUANTITY) {
    if (TheElement_P->Num != NO_ELEMENT) {
      Nbr_Dof = QuantityStorage_P->NbrElementaryBasisFunction ;      
      Get_FunctionValue(Nbr_Dof, (void (**)())xFunctionBF, Type_Operator, 
			QuantityStorage_P, &Type_Form) ;
      xChangeOfCoordinates =
	(void (*)())Get_ChangeOfCoordinates
	((Flag_ChangeOfCoordinates && TheElement_P->Num != NO_ELEMENT),
	 Type_Form) ;
    }
    else {
      Msg(WARNING, "No Element Found in Mesh for LocalQuantity Interpolation");
      Nbr_Dof = 0 ;
      Type_Form = VECTOR ;
    }
  }

  /* ---------------------
     Init IntegralQuantity
     --------------------- */

  else if (Type_DefineQuantity == INTEGRALQUANTITY) {

    if(Type_Operator != NOOP){
      Msg(ERROR, "No Operator can act on an Integral Quantity");
    }
    Type_Form = VECTOR ;
    Get_InitElementSource(TheElement_P,
			  QuantityStorage_P->DefineQuantity->IntegralQuantity.InIndex) ;

    IQA.IntegrationCase_L =
      ((struct IntegrationMethod *)
       List_Pointer(Problem_S.IntegrationMethod,
		    QuantityStorage_P->DefineQuantity->
		    IntegralQuantity.IntegrationMethodIndex)) ->Method ;
    IQA.CriterionIndex =
      ((struct IntegrationMethod *)
       List_Pointer(Problem_S.IntegrationMethod,
		    QuantityStorage_P->DefineQuantity->
		    IntegralQuantity.IntegrationMethodIndex)) ->CriterionIndex ;
    IQA.JacobianCase_L =
      ((struct JacobianMethod *)
       List_Pointer(Problem_S.JacobianMethod,
		    QuantityStorage_P->DefineQuantity->
		    IntegralQuantity.JacobianMethodIndex)) ->JacobianPerRegion ;

    xChangeOfCoordinates = (void (*)())Get_ChangeOfCoordinates(0, Type_Form) ;
  }
  

  /* ----------------------
     Compute GlobalQuantity
     ---------------------- */
  
  if (Type_DefineQuantity == GLOBALQUANTITY) {
    if(Current.NbrHar==1){
      if (Type_Quantity == QUANTITY_BF)
	Val[0] = (QuantityStorage_P->BasisFunction[0].Dof->Entity ==
		  Current.SubRegion)? 1. : 0. ;
      else
	Dof_GetRealDofValue
	  (QuantityStorage_P->FunctionSpace->DofData,
	   QuantityStorage_P->BasisFunction[0].Dof,
	   &Val[0]) ;
    }
    else{	      
      for (k = 0 ; k < Current.NbrHar ; k+=2) {
	if (Type_Quantity == QUANTITY_BF) {
	  Val[MAX_DIM*k] = (QuantityStorage_P->BasisFunction[0].Dof->Entity ==
			    Current.SubRegion)? 1. : 0. ;
	  Val[MAX_DIM*(k+1)] = 0. ;
	}
	else {
	  Dof_GetComplexDofValue
	    (QuantityStorage_P->FunctionSpace->DofData,
	     QuantityStorage_P->BasisFunction[0].Dof + k*gCOMPLEX_INCREMENT,
	     &Val[MAX_DIM*k], &Val[MAX_DIM*(k+1)]) ;
	}
      }
    }
    *Type_Value = SCALAR ;
    return ;
  }
  

  /* -----------------------------------
     Compute Local / Integral Quantities
     ----------------------------------- */

  i = Current.NbrHar * MAX_DIM ;
  for (k = 0 ; k < i ; k++)  Val[k] =  0. ;
  
  while (1) {
    
    if (Type_DefineQuantity == INTEGRALQUANTITY) {
      
      if (Get_NextElementSource(TheElement_P->ElementSource)) {
	
	Get_NodesCoordinatesOfElement(TheElement_P->ElementSource) ;
	
	if(SubType_DefineQuantity != NODOF){
	  Get_DofOfElement(TheElement_P->ElementSource, 
			   QuantityStorage_P->FunctionSpace,
			   QuantityStorage_P,
			   QuantityStorage_P->DefineQuantity->IndexInFunctionSpace) ;	  
	  Nbr_Dof = QuantityStorage_P->NbrElementaryBasisFunction ;	  
	  Get_FunctionValue(Nbr_Dof, (void (**)())xFunctionBF,
			    QuantityStorage_P->DefineQuantity->IntegralQuantity.TypeOperatorDof,
			    QuantityStorage_P, &IQA.Type_FormDof) ;
	  Type_Form = IQA.Type_FormDof ; /* good form */
	}
	else{
	  Nbr_Dof = 1 ; 
	  xFunctionBF[0] = NULL ; /* for analytic integration tests */
	  Type_Form = IQA.Type_FormDof = VECTOR ; /* form type unknown */
	}
	
	Cal_InitIntegralQuantity (TheElement_P, &IQA, QuantityStorage_P);
	
      }
      else
	break ;
      
    }
    
    /* -----
       Local 
       ----- */
    
    if (Type_DefineQuantity == LOCALQUANTITY) {
      
      if (TheElement_P->Num != NO_ELEMENT) {
	for (j = 0 ; j < Nbr_Dof ; j++) {
	  xFunctionBF[j]
	    (TheElement_P, QuantityStorage_P->BasisFunction[j].NumEntityInElement+1,
	     u, v, w, vBFu[j]) ;
	  ((void (*)(struct Element*, double*, double*))
	   xChangeOfCoordinates) (TheElement_P, vBFu[j], vBFxDof[j].Val) ;
	}
      }
      
      /* interpolate (vBFxDof is real-valued) */
      
      switch (Type_Form) {
	
      case FORM0 :  case FORM3 :  case FORM3P :  case SCALAR :
	if(Current.NbrHar==1){
	  for (j = 0 ; j < Nbr_Dof ; j++){
	    if (Type_Quantity == QUANTITY_BF)
	      Val_Dof = (QuantityStorage_P->BasisFunction[j].Dof->Entity ==
			 Current.SubRegion)? 1. : 0. ;
	    else
	      Dof_GetRealDofValue
		(QuantityStorage_P->FunctionSpace->DofData,
		 QuantityStorage_P->BasisFunction[j].Dof,
		 &Val_Dof) ;
	    Val[0] += vBFxDof[j].Val[0] * Val_Dof ;
	  }
	}
	else{	
	  for (j = 0 ; j < Nbr_Dof ; j++){
	    for (k = 0 ; k < Current.NbrHar ; k+=2) {
	      if (Type_Quantity == QUANTITY_BF) {
		Val_Dof_r = (QuantityStorage_P->BasisFunction[j].Dof->Entity ==
			     Current.SubRegion)? 1. : 0. ;
		Val_Dof_i = 0. ;
	      }
	      else {
		Dof_GetComplexDofValue
		  (QuantityStorage_P->FunctionSpace->DofData,
		   QuantityStorage_P->BasisFunction[j].Dof + k*gCOMPLEX_INCREMENT,
		   &Val_Dof_r, &Val_Dof_i) ;
	      }
	      Val[MAX_DIM*k]     += vBFxDof[j].Val[0] * Val_Dof_r ;
	      Val[MAX_DIM*(k+1)] += vBFxDof[j].Val[0] * Val_Dof_i ;
	    }
	  }
	}
	*Type_Value = SCALAR ;
	break ;
	
      case FORM1  :  case FORM1P :  case FORM2  :  case FORM2P :
      case FORM1S :  case FORM2S :
      case VECTOR :  case VECTORP :
	if(Current.NbrHar==1){
	  for (j = 0 ; j < Nbr_Dof ; j++){
	    if (Type_Quantity == QUANTITY_BF)
	      Val_Dof = (QuantityStorage_P->BasisFunction[j].Dof->Entity ==
			 Current.SubRegion)? 1. : 0. ;
	    else
	      Dof_GetRealDofValue
		(QuantityStorage_P->FunctionSpace->DofData,
		 QuantityStorage_P->BasisFunction[j].Dof,
		 &Val_Dof) ;
	    Val[0] += vBFxDof[j].Val[0] * Val_Dof ;
	    Val[1] += vBFxDof[j].Val[1] * Val_Dof ;
	    Val[2] += vBFxDof[j].Val[2] * Val_Dof ;
	  }
	}
	else{		  
	  for (j = 0 ; j < Nbr_Dof ; j++){
	    for (k = 0 ; k < Current.NbrHar ; k+=2) {
	      if (Type_Quantity == QUANTITY_BF) {
		Val_Dof_r = (QuantityStorage_P->BasisFunction[j].Dof->Entity ==
			     Current.SubRegion)? 1. : 0. ;
		Val_Dof_i = 0. ;
	      }
	      else {
		Dof_GetComplexDofValue
		  (QuantityStorage_P->FunctionSpace->DofData,
		   QuantityStorage_P->BasisFunction[j].Dof + k*gCOMPLEX_INCREMENT,
		   &Val_Dof_r, &Val_Dof_i) ;
	      }
	      Val[MAX_DIM*k  ]     += vBFxDof[j].Val[0] * Val_Dof_r ;
	      Val[MAX_DIM*k+1]     += vBFxDof[j].Val[1] * Val_Dof_r ;
	      Val[MAX_DIM*k+2]     += vBFxDof[j].Val[2] * Val_Dof_r ;
	      Val[MAX_DIM*(k+1)  ] += vBFxDof[j].Val[0] * Val_Dof_i ;
	      Val[MAX_DIM*(k+1)+1] += vBFxDof[j].Val[1] * Val_Dof_i ;
	      Val[MAX_DIM*(k+1)+2] += vBFxDof[j].Val[2] * Val_Dof_i ;
	    }
	  }
	}
	*Type_Value = VECTOR ;
	break ;
	
      default :
	Msg(ERROR, "Unknown Form Type in 'Pos_FemInterpolation'");
	break;
      }
      
    }
    
    /* --------
       Integral
       -------- */

    /*
      Ceci, c'est nul a chier. Ce qu'il faut faire, c'est
      ne pas reinterpoler ici, mais laisser au Cal_Quantity dans Cal_IntegralQuantity
      le soin de reinterpoler directment la quantity local intervenant ds la qte integrale 
      s'il y a lieu !

      Mais, Ct faire avec l'integration anal ?
     
     */

    
    else { 
      
      Cal_IntegralQuantity (Current.Element = TheElement_P, &IQA, 
			    QuantityStorage_P0, QuantityStorage_P, 
			    SubType_DefineQuantity, Nbr_Dof, 
			    (void (**)())xFunctionBF, vBFxDof) ;

      Type_Form = vBFxDof[0].Type ;
      
      /* interpolate (vBFxDof can be complex-valued) */
      
      if(SubType_DefineQuantity == NODOF){
	
	switch (Type_Form) {
	  
	case FORM0 :  case FORM3 :  case FORM3P :  case SCALAR :
	  for (k = 0 ; k < Current.NbrHar ; k++) 
	    Val[MAX_DIM*k] += vBFxDof[0].Val[MAX_DIM*k] ;
	  *Type_Value = SCALAR ;
	  break ;
	  
	case FORM1  :  case FORM1P :  case FORM2  :  case FORM2P :
	case FORM1S :  case FORM2S :
	case VECTOR :  case VECTORP :
	  for (k = 0 ; k < Current.NbrHar ; k++) {
	    Val[MAX_DIM*k]   += vBFxDof[0].Val[MAX_DIM] ;
	    Val[MAX_DIM*k+1] += vBFxDof[0].Val[MAX_DIM*k+1] ;
	    Val[MAX_DIM*k+2] += vBFxDof[0].Val[MAX_DIM*k+2] ;
	  }
	  *Type_Value = VECTOR ;
	  break ;
	  
	default :
	  Msg(ERROR, "Unknown Form Type in 'Pos_FemInterpolation'");
	  break;
	}
	
      }
      else{
	
	switch (Type_Form) {
	  
	case FORM0 :  case FORM3 :  case FORM3P :  case SCALAR :
	  if(Current.NbrHar==1){
	    for (j = 0 ; j < Nbr_Dof ; j++){
	      Dof_GetRealDofValue
		(QuantityStorage_P->FunctionSpace->DofData,
		 QuantityStorage_P->BasisFunction[j].Dof,
		 &Val_Dof) ;
	      Val[0] += vBFxDof[j].Val[0] * Val_Dof ;
	    }
	  }
	  else{
	    for (j = 0 ; j < Nbr_Dof ; j++){
	      for (k = 0 ; k < Current.NbrHar ; k+=2) {
		Dof_GetComplexDofValue
		  (QuantityStorage_P->FunctionSpace->DofData,
		   QuantityStorage_P->BasisFunction[j].Dof + k*gCOMPLEX_INCREMENT,
		   &Val_Dof_r, &Val_Dof_i) ;
		Val[MAX_DIM*k]     += 
		  vBFxDof[j].Val[MAX_DIM*k]     * Val_Dof_r -
		  vBFxDof[j].Val[MAX_DIM*(k+1)] * Val_Dof_i ;
		Val[MAX_DIM*(k+1)] += 
		  vBFxDof[j].Val[MAX_DIM*k]     * Val_Dof_i +
		  vBFxDof[j].Val[MAX_DIM*(k+1)] * Val_Dof_r ;
	      }
	    }
	  }
	  *Type_Value = SCALAR ;
	  break ;
	  
	case FORM1  :  case FORM1P :  case FORM2  :  case FORM2P :
	case FORM1S :  case FORM2S :
	case VECTOR :  case VECTORP :
	  if(Current.NbrHar==1){
	    for (j = 0 ; j < Nbr_Dof ; j++){
	      Dof_GetRealDofValue
		(QuantityStorage_P->FunctionSpace->DofData,
		 QuantityStorage_P->BasisFunction[j].Dof,
		 &Val_Dof) ;
	      Val[0] += vBFxDof[j].Val[0] * Val_Dof ;
	      Val[1] += vBFxDof[j].Val[1] * Val_Dof ;
	      Val[2] += vBFxDof[j].Val[2] * Val_Dof ;
	    }
	  }
	  else{	  
	    for (j = 0 ; j < Nbr_Dof ; j++){
	      for (k = 0 ; k < Current.NbrHar ; k+=2) {
		Dof_GetComplexDofValue
		  (QuantityStorage_P->FunctionSpace->DofData,
		   QuantityStorage_P->BasisFunction[j].Dof + k*gCOMPLEX_INCREMENT,
		   &Val_Dof_r, &Val_Dof_i) ;
		Val[MAX_DIM*k]     += 
		  vBFxDof[j].Val[MAX_DIM*k]     * Val_Dof_r -
		  vBFxDof[j].Val[MAX_DIM*(k+1)] * Val_Dof_i ;
		Val[MAX_DIM*(k+1)] += 
		  vBFxDof[j].Val[MAX_DIM*k]     * Val_Dof_i +
		  vBFxDof[j].Val[MAX_DIM*(k+1)] * Val_Dof_r ;
		Val[MAX_DIM*k+1]     += 
		  vBFxDof[j].Val[MAX_DIM*k+1]     * Val_Dof_r -
		  vBFxDof[j].Val[MAX_DIM*(k+1)+1] * Val_Dof_i ;
		Val[MAX_DIM*(k+1)+1] += 
		  vBFxDof[j].Val[MAX_DIM*k+1]     * Val_Dof_i +
		  vBFxDof[j].Val[MAX_DIM*(k+1)+1] * Val_Dof_r ;
		Val[MAX_DIM*k+2]     += 
		  vBFxDof[j].Val[MAX_DIM*k+2]     * Val_Dof_r -
		  vBFxDof[j].Val[MAX_DIM*(k+1)+2] * Val_Dof_i ;
		Val[MAX_DIM*(k+1)+2] += 
		  vBFxDof[j].Val[MAX_DIM*k+2]     * Val_Dof_i +
		  vBFxDof[j].Val[MAX_DIM*(k+1)+2] * Val_Dof_r ;
	      }
	    }
	  }
	  *Type_Value = VECTOR ;
	  break ;
	  
	default :
	  Msg(ERROR, "Unknown Form Type in 'Pos_FemInterpolation'");
	  break;
	}
	
      }
      
    }
    
    
    if (Type_DefineQuantity != INTEGRALQUANTITY)  break ;
    
  }  /* while (1) ... */
  

  if(UseNewGeo){
    GeoData_P = (struct GeoData *)List_Pointer(GeoData_L, GeoDataNum);
    Geo_SetCurrentGeoData(Current.GeoData = GeoData_P) ;
  }

}

