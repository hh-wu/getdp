/* $Id: Get_ElementSource.c,v 1.2 2000-09-07 18:47:26 geuzaine Exp $ */
#include <stdio.h>
#include <math.h>

#include "Treatment_Formulation.h"
#include "GeoData.h"
#include "ExtendedGroup.h"
#include "Get_Geometry.h"
#include "CurrentData.h"
#include "outil.h"

static int     Nbr_ElementSource, i_ElementSource ;
static List_T *RegionSource_L ;
static struct  Element  ElementSource , ElementTrace;

/* ------------------------------------------------------------------------ */
/*  G e t _ I n i t E l e m e n t S o u r c e                               */
/* ------------------------------------------------------------------------ */

void  Get_InitElementSource(struct Element *Element, int InIndex) {

  Element->ElementSource = &ElementSource ;

  Nbr_ElementSource = Geo_GetNbrGeoElements() ;
  i_ElementSource = -1 ;

  if(InIndex<0){
    Msg(ERROR, "Missing Support (Region Group) in Integral Quantity");
  }
  else{
    RegionSource_L = ((struct Group*)
		      List_Pointer(Problem_S.Group, InIndex))->InitialList ;
    Current.SourceIntegrationSupportIndex = InIndex ;
  }

}

/* ------------------------------------------------------------------------ */
/*  G e t _ N e x t E l e m e n t S o u r c e                               */
/* ------------------------------------------------------------------------ */

int  Get_NextElementSource(struct Element *ElementSource) {

  while (++i_ElementSource < Nbr_ElementSource) {

    ElementSource->GeoElement = Geo_GetGeoElement(i_ElementSource) ;
    ElementSource->Region = ElementSource->GeoElement->Region ;

    if (List_Search(RegionSource_L, &ElementSource->Region, fcmp_int)) {
      ElementSource->Num  = ElementSource->GeoElement->Num ;
      ElementSource->Type = ElementSource->GeoElement->Type ;
      return 1 ;
    }
  }
  return 0 ;
}


/* ------------------------------------------------------------------------ */
/*  G e t _ E l e m e n t S o u r c e I n t e r p o l a t i o n             */
/* ------------------------------------------------------------------------ */

int  Get_ElementSourceInterpolation(struct Element *ElementSource, 
				    struct PostSubOperation *PostSubOperation) {

  return 0 ;

}



/* ------------------------------------------------------------------------ */
/*  G e t _ E l e m e n t T r a c e                                         */
/* ------------------------------------------------------------------------ */

void  Get_ElementTrace(struct Element *Element, int InIndex) {
  struct Group   * Group_P ;
  struct TwoInt  * Pair_P ;

  Element->ElementTrace = &ElementTrace ;

  Group_P = (struct Group*)List_Pointer(Problem_S.Group, InIndex) ;
  
  if (!Group_P->ExtendedList) Generate_ExtendedGroup(Group_P) ;
  
  if(!(Pair_P = (struct TwoInt*)List_PQuery(Group_P->ExtendedList, 
					    &Element->Num, fcmp_int)))
    Msg(ERROR, "No Element Connected to Element %d: Check Group for Trace", 
	Element->Num) ;

  Element->ElementTrace = &ElementTrace ;
  Element->ElementTrace->GeoElement = Geo_GetGeoElement(Pair_P->Int2) ;
  Element->ElementTrace->Region = Element->ElementTrace->GeoElement->Region ;
  Element->ElementTrace->Num    = Element->ElementTrace->GeoElement->Num ;
  Element->ElementTrace->Type   = Element->ElementTrace->GeoElement->Type ;

  Get_NodesCoordinatesOfElement(Element->ElementTrace) ;

  /*
  Msg(INFO, "Element %d -> Trace %d", Element->Num, Element->ElementTrace->Num);
  */
}
