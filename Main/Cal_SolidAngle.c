#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "GeoData.h"
#include "Cal_Quantity.h"

#include "CurrentData.h"
#include "Data_Numeric.h"


/* ------------------------------------------------------------------------ */
/*  C a l _ S o l i d A n g l e                                             */
/* ------------------------------------------------------------------------ */

void  Cal_SolidAngle(int Source, struct Element *Element,
		     struct QuantityStorage *QuantityStorage,
		     int Nbr_Dof, int Index,
		     struct Value Stack[NBR_MAX_BASISFUNCTIONS][MAX_STACK_SIZE]){
  
  struct Element     *Elt ;
  struct Geo_Element *GeoElement ;
  struct Geo_Node    *GeoNode1, *GeoNode2, *GeoNode3 ;

  double X, Y, Atan ;
  int    In, TypEnt, NumNode, NbrElements, *NumElements ;
  int    i, j ;


  if(Nbr_Dof != QuantityStorage->NbrElementaryBasisFunction)
    Msg(ERROR, "Uncompatible Quantity (%s) in Solid Angle Computation",
	QuantityStorage->DefineQuantity->Name);


  if(Source){
    Elt = Element->ElementSource ;
    In  = Current.SourceIntegrationSupportIndex ;
  }
  else{
    Elt = Element ;
    In  = Current.IntegrationSupportIndex ;
  }


  if (Elt->NumLastElementForSolidAngle == Elt->Num) {
    for(i=0 ; i<Nbr_Dof ; i++) {
      Stack[i][Index].Type = SCALAR ;
      Stack[i][Index].Val[0] = Elt->angle[i] ;
    }
    return ;
  }


  for(i=0 ; i<Nbr_Dof ; i++){

    Stack[i][Index].Type = SCALAR ;

    TypEnt = ((struct Group*)
	      List_Pointer(Problem_S.Group, 
			   QuantityStorage->BasisFunction[i].
			   BasisFunction->EntityIndex))->FunctionType ;


    if(TypEnt != NODESOF){

      if(Elt->Type == LINE){
	Stack[i][Index].Val[0] = PI ;
      }
      else{
	Stack[i][Index].Val[0] = TWO_PI ;
      }

    }

    else{

      NumNode = Elt->GeoElement->
	NumNodes[QuantityStorage->BasisFunction[i].NumEntityInElement] ;

      Geo_CreateNodesXElements(NumNode, In, &NbrElements, &NumElements) ;

      if(NbrElements != 2)
	Msg(ERROR, "Solid Angle not done for incidence != 2 (%d)", NbrElements);

      GeoNode2 = Geo_GetGeoNodeOfNum(NumNode) ;
      GeoElement = Geo_GetGeoElementOfNum(abs(NumElements[0])) ;

      if(GeoElement->Type != LINE)
	Msg(ERROR, "Solid Angle not done for Element Type != LINE (%d)", GeoElement->Type);
      
      if(NumElements[0]>0){
	GeoNode1 = Geo_GetGeoNodeOfNum(GeoElement->NumNodes[0]) ;
	GeoElement = Geo_GetGeoElementOfNum(abs(NumElements[1])) ;
	GeoNode3 = Geo_GetGeoNodeOfNum(GeoElement->NumNodes[1]) ;

      }
      else{
	GeoNode3 = Geo_GetGeoNodeOfNum(GeoElement->NumNodes[1]) ;
	GeoElement = Geo_GetGeoElementOfNum(NumElements[1]) ;
	GeoNode1 = Geo_GetGeoNodeOfNum(GeoElement->NumNodes[0]) ;
      }

      Y = (GeoNode1->y - GeoNode2->y) * (GeoNode3->x - GeoNode2->x) - 
	  (GeoNode1->x - GeoNode2->x) * (GeoNode3->y - GeoNode2->y) ;
      X = (GeoNode1->x - GeoNode2->x) * (GeoNode3->x - GeoNode2->x) +
	  (GeoNode1->y - GeoNode2->y) * (GeoNode3->y - GeoNode2->y) ;

      Atan = atan2(Y,X) ;
      
      Stack[i][Index].Val[0] = (Atan >= 0) ? Atan : (Atan+TWO_PI) ;

      if(Flag_VERBOSE == 3){
	printf("Solid angle=%g node=%d, region=%s, elms=", 
	       Stack[i][Index].Val[0] * 180/PI, NumNode, 
	       ((struct Group*)List_Pointer(Problem_S.Group, In))->Name);
	for(j=0 ; j<NbrElements ; j++) printf("%d ", NumElements[j]);
	printf("\n");
      }

    }

  }


  if (Elt->NumLastElementForSolidAngle != Elt->Num) {
    Elt->NumLastElementForSolidAngle = Elt->Num ;    
    for(i=0 ; i<Nbr_Dof ; i++) Elt->angle[i] = Stack[i][Index].Val[0] ;
  }

  
}
