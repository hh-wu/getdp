#include <stdio.h>
#include <string.h>
#include <math.h>

#include "Treatment_Formulation.h"
#include "Pos_Formulation.h"
#include "Get_DofOfElement.h"
#include "GeoData.h"
#include "Cal_Quantity.h"
#include "Get_Geometry.h"
#include "Pos_Search.h"

#include "Data_Passive.h"
#include "Data_DefineE.h"

#include "CurrentData.h"
#include "outil.h"


/* ------------------------------------------------------------------------ */
/*  P o s _ E l e m e n t                                                   */
/* ------------------------------------------------------------------------ */

void Pos_Element(struct PostQuantity    *PostQuantity_P, 
		 struct DefineQuantity  *DefineQuantity_P0,
		 struct QuantityStorage *QuantityStorage_P0,
		 struct Element         *Element, 
		 double u, double v, double w, 
		 struct Value *Value) {

  struct PostQuantityTerm  PostQuantityTerm ;

  List_T   *InRegion_L ;
  int       i_PQT, Type_Quantity ;

  /* mettre tout a zero: on ne connait pas a priori le type de retour */

  Cal_ZeroValue(Value);

  /* default type and value returned if Type_Quantity == -1 */

  Value->Type = SCALAR; 

  /* Loop on PostQuantity Terms */
  /* ... with sum of results if common supports (In ...) */

  for (i_PQT = 0 ; i_PQT < List_Nbr(PostQuantity_P->PostQuantityTerm) ; i_PQT++) {
    
    List_Read(PostQuantity_P->PostQuantityTerm, i_PQT, &PostQuantityTerm) ;
    
    InRegion_L = (PostQuantityTerm.InIndex < 0)?  NULL :
      ((struct Group *)List_Pointer(Problem_S.Group, 
				    PostQuantityTerm.InIndex))->InitialList ;

    Type_Quantity = PostQuantityTerm.Type ;

    if (InRegion_L) {
      if (Element->Num != NO_ELEMENT) {
	if (!List_Search(InRegion_L, &Element->Region, fcmp_int)) { 
	  Type_Quantity = -1 ; 
	}
      }
      else {
	if (Type_Quantity == GLOBALQUANTITY) {
	  /* Plus de test ici... vu que le OnRegion de la PostOperation n'a rien
	     a voir avec le support d'une integration ...
	  if (!List_Search(InRegion_L, &Current.Region, fcmp_int)) {
	    Type_Quantity = -1 ;
	  }
	  */
	}
	else if (Type_Quantity != INTEGRALQUANTITY) {
	  Type_Quantity = -1 ;
	}
      }
    }

    /* ---------------------------- */
    /* Local or Integral quantities */
    /* ---------------------------- */

    if (Type_Quantity == LOCALQUANTITY || Type_Quantity == INTEGRALQUANTITY) {

      Pos_LocalOrIntegralQuantity(PostQuantity_P,
				  DefineQuantity_P0, QuantityStorage_P0,
				  &PostQuantityTerm, Element, Type_Quantity,
				  u, v, w, Value) ;
    }

    /* ----------------- */
    /* Global quantities */
    /* ----------------- */

    else if (Type_Quantity == GLOBALQUANTITY) {

      Pos_GlobalQuantity(PostQuantity_P,
			 DefineQuantity_P0, QuantityStorage_P0,
			 &PostQuantityTerm, Element, InRegion_L,
			 Current.Region, Value) ;
    }
   
  }  /* for i_PQT ... */

}


/* ------------------------------------------------------------------------ */
/*  P o s _ L o c a l O r I n t e g r a l Q u a n t i t y                   */
/* ------------------------------------------------------------------------ */

void Pos_LocalOrIntegralQuantity(struct PostQuantity    *PostQuantity_P, 
				 struct DefineQuantity  *DefineQuantity_P0,
				 struct QuantityStorage *QuantityStorage_P0,
				 struct PostQuantityTerm  *PostQuantityTerm_P,
				 struct Element         *Element, 
				 int    Type_Quantity,
				 double u, double v, double w, 
				 struct Value *Value) {

  struct FunctionSpace     *FunctionSpace_P ;
  struct DefineQuantity    *DefineQuantity_P ;
  struct QuantityStorage   *QuantityStorage_P ;
  struct Value              TermValue, tmpValue;
  struct JacobianCase      *JacobianCase_P0 ;
  struct IntegrationCase   *IntegrationCase_P ;
  struct Quadrature        *Quadrature_P ;

  List_T   *IntegrationCase_L, *JacobianCase_L ;
  double    ui, vi, wi, weight, Factor ;
  int       Index_DefineQuantity ;
  int       i, j, Type_Dimension ;
  int       CriterionIndex, Nbr_IntPoints, i_IntPoint ;

  double   (*Get_Jacobian) (struct Element * Element, MATRIX3x3 * Jac) ;
  void     (*Get_IntPoint) (int Nbr_Points, int Num,
			    double * u, double * v, double * w, double * wght) ;


  /* Get the functionspace (except for IntegralQuantities without DoF)
     Get the DoF for local quantities */

  for (i = 0 ; i < PostQuantityTerm_P->NbrQuantityIndex ; i++) {
    Index_DefineQuantity = PostQuantityTerm_P->QuantityIndexTable[i] ;
    DefineQuantity_P     = DefineQuantity_P0  + Index_DefineQuantity ;
    QuantityStorage_P    = QuantityStorage_P0 + Index_DefineQuantity ;
	
    if (QuantityStorage_P->NumLastElementForFunctionSpace != Element->Num) {

      QuantityStorage_P->NumLastElementForFunctionSpace = Element->Num ;

      if (Type_Quantity != INTEGRALQUANTITY){
	QuantityStorage_P->FunctionSpace = FunctionSpace_P = 
	  (struct FunctionSpace*)
	  List_Pointer(Problem_S.FunctionSpace,
		       DefineQuantity_P->FunctionSpaceIndex) ;
	if (DefineQuantity_P->Type == LOCALQUANTITY)
	  Get_DofOfElement(Element, FunctionSpace_P, QuantityStorage_P,
			   DefineQuantity_P->IndexInFunctionSpace) ;
      }

      if (Type_Quantity == INTEGRALQUANTITY &&
	  DefineQuantity_P->IntegralQuantity.DefineQuantityIndexDof >= 0){
	QuantityStorage_P->FunctionSpace = (struct FunctionSpace*)
	  List_Pointer(Problem_S.FunctionSpace,
		       DefineQuantity_P->FunctionSpaceIndex) ;
	/* Get the function space for the associated local quantity */
	Index_DefineQuantity = 
	  DefineQuantity_P->IntegralQuantity.DefineQuantityIndexDof ;
	DefineQuantity_P     = DefineQuantity_P0  + Index_DefineQuantity ;
	QuantityStorage_P    = QuantityStorage_P0 + Index_DefineQuantity ;
	QuantityStorage_P->FunctionSpace = (struct FunctionSpace*)
	  List_Pointer(Problem_S.FunctionSpace,
		       DefineQuantity_P->FunctionSpaceIndex) ;	    
      }

    }
  }

  /* get the jacobian */

  if (Element->Num != NO_ELEMENT) {
    if (PostQuantityTerm_P->JacobianMethodIndex >= 0) {	  
      JacobianCase_L = 
	((struct JacobianMethod *)
	 List_Pointer(Problem_S.JacobianMethod, 
		      PostQuantityTerm_P->JacobianMethodIndex))
	->JacobianPerRegion ;
      JacobianCase_P0 = (struct JacobianCase*)List_Pointer(JacobianCase_L, 0);

      i = 0 ;
      while ((i < List_Nbr(JacobianCase_L)) &&
	     ((j = (JacobianCase_P0 + i)->RegionIndex) >= 0) &&
	     !List_Search
	     (((struct Group *)List_Pointer(Problem_S.Group, j))
	      ->InitialList, &Element->Region, fcmp_int) )  i++ ;

      if (i == List_Nbr(JacobianCase_L))
	Msg(ERROR, "Undefined Jacobian in Region %d", Element->Region) ;

      Element->JacobianCase = JacobianCase_P0 + i ;
      Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
	Get_JacobianFunction(Element->JacobianCase->TypeJacobian,
			     Element->Type, &Type_Dimension) ;
    }
    else {
      Get_Jacobian = (double (*)(struct Element*, MATRIX3x3*))
	Get_JacobianFunction(JACOBIAN_VOL, Element->Type, &Type_Dimension) ;
    }

    Get_NodesCoordinatesOfElement(Element) ;
  }

  /* local evaluation on one point */

  if(PostQuantityTerm_P->EvaluationType == LOCAL){

    if (Element->Num != NO_ELEMENT) {
      Get_GeoElement(Element, u, v, w) ;
      Element->DetJac = Get_Jacobian(Element, &Element->Jac) ;
      if (Element->DetJac != 0.)
	Get_InverseMatrix(Type_Dimension, Element->Type, Element->DetJac,
			  &Element->Jac, &Element->InvJac) ;	  
    }

    Cal_WholeQuantity
      (Current.Element = Element,
       QuantityStorage_P0, PostQuantityTerm_P->WholeQuantity,
       Current.u = u, Current.v = v, Current.w = w, -1, -1, &TermValue) ;

  }

  /* integral evaluation over the element */

  else if(PostQuantityTerm_P->EvaluationType == INTEGRAL){

    if(Element->Num != NO_ELEMENT) {

      if(PostQuantityTerm_P->IntegrationMethodIndex < 0)
	Msg(ERROR, "Missing Integration Method in PostQuantity '%s'", 
	    PostQuantity_P->Name);

      IntegrationCase_L = 
	((struct IntegrationMethod *)
	 List_Pointer(Problem_S.IntegrationMethod, 
		      PostQuantityTerm_P->IntegrationMethodIndex))->Method ;

      CriterionIndex = 
	((struct IntegrationMethod *)
	 List_Pointer(Problem_S.IntegrationMethod, 
		      PostQuantityTerm_P->IntegrationMethodIndex))
	->CriterionIndex ;

      IntegrationCase_P = Get_IntegrationCase(Element, 
					      IntegrationCase_L,
					      CriterionIndex) ;

      if(IntegrationCase_P->Type != GAUSS && IntegrationCase_P->Type != NEWTONCOTES)
	Msg(ERROR, "Only Numerical Integration is Available "
	    "in Integral PostQuantities");
	  
      Quadrature_P = (struct Quadrature*)
	List_PQuery(IntegrationCase_P->Case, &Element->Type, fcmp_int);

      if(!Quadrature_P)
	Msg(ERROR, "Unknown Type of Element (%s) for IntegrationMethod (%s) "
	    " in PostQuantity (%s)", 
	    Get_StringForDefine(Element_Type, Element->Type),
	    ((struct IntegrationMethod *)
	     List_Pointer(Problem_S.IntegrationMethod,
			  PostQuantityTerm_P->IntegrationMethodIndex))->Name,
	    PostQuantity_P->Name);
	  
      Cal_ZeroValue(&TermValue);

      Nbr_IntPoints = Quadrature_P->NumberOfPoints ;
      Get_IntPoint = (void (*) (int,int,double*,double*,double*,double*))
	Quadrature_P->Function ;

      for (i_IntPoint = 0 ; i_IntPoint < Nbr_IntPoints ; i_IntPoint++) {

	Get_IntPoint(Nbr_IntPoints, i_IntPoint, &ui, &vi, &wi, &weight) ;
	    
	Get_GeoElement (Element, ui, vi, wi) ;
	Element->DetJac = Get_Jacobian(Element, &Element->Jac) ;
	if (Element->DetJac != 0.){
	  Get_InverseMatrix(Type_Dimension, Element->Type, Element->DetJac,
			    &Element->Jac, &Element->InvJac) ;	  
	}
	else{
	  Msg(WARNING, "Null Jacobian Determinant in 'Pos_Element'");
	}
	Current.x = Current.y = Current.z = 0. ;
	if (Type_Quantity == INTEGRALQUANTITY){
	  for (i = 0 ; i < Element->GeoElement->NbrNodes ; i++) {
	    Current.x += Element->x[i] * Element->n[i] ;
	    Current.y += Element->y[i] * Element->n[i] ;
	    Current.z += Element->z[i] * Element->n[i] ;
	  }
	}
	    
	Cal_WholeQuantity
	  (Current.Element = Element,
	   QuantityStorage_P0, PostQuantityTerm_P->WholeQuantity,
	   Current.u = ui, Current.v = vi, Current.w = wi, -1, -1, &tmpValue) ;

	Factor = weight * fabs(Element->DetJac) ;

	TermValue.Type = tmpValue.Type ;
	Cal_AddMultValue(&TermValue,&tmpValue,Factor,&TermValue);
      }
    }
  }
      
  Value->Type = TermValue.Type;
  Cal_AddValue(Value,&TermValue,Value);

}


/* ------------------------------------------------------------------------ */
/*  P o s _ G l o b a l Q u a n t i t y                                     */
/* ------------------------------------------------------------------------ */

void Pos_GlobalQuantity(struct PostQuantity    *PostQuantity_P,
			struct DefineQuantity  *DefineQuantity_P0,
			struct QuantityStorage *QuantityStorage_P0,
			struct PostQuantityTerm  *PostQuantityTerm_P,
			struct Element         *ElementEmpty, 
			List_T  *InRegion_L, int Num_Region,
			struct Value *Value) {

  struct DefineQuantity    *DefineQuantity_P ;
  struct QuantityStorage   *QuantityStorage_P ;
  struct FunctionSpace     *FunctionSpace_P ;
  struct GlobalQuantity    *GlobalQuantity_P ;
  struct Value              TermValue ;

  int  k, Index_DefineQuantity ;


  int    Nbr_Element, i_Element ;
  struct Element  Element ;
  int    Type_Quantity ;


  if (PostQuantityTerm_P->EvaluationType == LOCAL &&
      List_Search(InRegion_L, &Current.Region, fcmp_int)) {

    for (k = 0 ; k < PostQuantityTerm_P->NbrQuantityIndex ; k++) {	  
      Index_DefineQuantity = PostQuantityTerm_P->QuantityIndexTable[k] ;
      DefineQuantity_P     = DefineQuantity_P0  + Index_DefineQuantity ;
      QuantityStorage_P    = QuantityStorage_P0 + Index_DefineQuantity ;

      if (QuantityStorage_P->NumLastElementForFunctionSpace != Current.Region) {
	QuantityStorage_P->NumLastElementForFunctionSpace = Current.Region ;
	QuantityStorage_P->FunctionSpace = FunctionSpace_P =
	  (struct FunctionSpace*)
	  List_Pointer(Problem_S.FunctionSpace,
		       DefineQuantity_P->FunctionSpaceIndex) ;
	GlobalQuantity_P = (struct GlobalQuantity*)
	  List_Pointer
	  (QuantityStorage_P->FunctionSpace->GlobalQuantity,
	   *(int *)List_Pointer(DefineQuantity_P->IndexInFunctionSpace, 0)) ;

	if (DefineQuantity_P->Type == GLOBALQUANTITY)
	  Get_DofOfRegion(Current.Region, GlobalQuantity_P,
			  FunctionSpace_P, QuantityStorage_P) ;
      }
    }

    Cal_WholeQuantity
      (Current.Element = ElementEmpty,
       QuantityStorage_P0, PostQuantityTerm_P->WholeQuantity,
       Current.u = 0., Current.v = 0., Current.w = 0., -1, -1, &TermValue) ;

    Value->Type = TermValue.Type;
    Cal_AddValue(Value,&TermValue,Value);

  }  /* if LOCAL && ... */

  else if (PostQuantityTerm_P->EvaluationType == INTEGRAL) {

    Nbr_Element = Geo_GetNbrGeoElements() ;

    Type_Quantity = LOCALQUANTITY ; /* Attention... il faut se comprendre: */
    /* il s'agit de grandeurs locales qui seront integrees */
    for (i_Element = 0 ; i_Element < Nbr_Element; i_Element++) {
      Progress(i_Element, Nbr_Element, "") ;

      Element.GeoElement = Geo_GetGeoElement(i_Element) ;
      Element.Num    = Element.GeoElement->Num ;
      Element.Type   = Element.GeoElement->Type ;
      Current.Region = Element.Region = Element.GeoElement->Region ;

      if (List_Search(InRegion_L, &Element.Region, fcmp_int)) {
	Pos_LocalOrIntegralQuantity(PostQuantity_P,
				    DefineQuantity_P0, QuantityStorage_P0,
				    PostQuantityTerm_P, &Element, Type_Quantity,
				    0., 0., 0., Value) ;
      }
    }  /* for i_Element ... */
  }  /* if INTEGRAL ... */

}
