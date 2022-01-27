// GetDP - Copyright (C) 1997-2022 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include "ProData.h"
#include "GeoData.h"
#include "ExtendedGroup.h"
#include "Get_Geometry.h"
#include "Message.h"
#include "MallocUtils.h"

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

static int     Nbr_ElementSource, i_ElementSource ;
static List_T *RegionSource_L ;
static struct  Element  ElementSource;

/* ------------------------------------------------------------------------ */
/*  G e t _ I n i t E l e m e n t S o u r c e                               */
/* ------------------------------------------------------------------------ */

void Get_InitElementSource(struct Element *Element, int InIndex)
{
  Element->ElementSource = &ElementSource ;

  Nbr_ElementSource = Geo_GetNbrGeoElements() ;
  i_ElementSource = -1 ;

  if(InIndex<0){
    Message::Error("Missing support (Region Group) in Integral Quantity");
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

int Get_NextElementSource(struct Element *ElementSource)
{
  while (++i_ElementSource < Nbr_ElementSource) {

    ElementSource->GeoElement = Geo_GetGeoElement(i_ElementSource) ;
    ElementSource->Region = ElementSource->GeoElement->Region ;

    if (List_Search(RegionSource_L, &ElementSource->Region, fcmp_int)) {
      ElementSource->Num  = ElementSource->GeoElement->Num ;
      ElementSource->Type = ElementSource->GeoElement->Type ;
      return(1) ;
    }
  }
  return(0) ;
}

/* ------------------------------------------------------------------------ */
/*  G e t _ E l e m e n t T r a c e                                         */
/* ------------------------------------------------------------------------ */

static int i_ElementTrace = -1;

void Get_InitElementTrace(struct Element *Element, int InIndex)
{
  struct Group   * Group_P ;
  struct TwoInt  * Pair_P ;

  for(std::size_t i = 0; i < Element->ElementTraceCandidates.size(); i++) {
    Free(Element->ElementTraceCandidates[i]);
  }
  Element->ElementTraceCandidates.clear();
  Element->ElementTrace = nullptr;

  Group_P = (struct Group*)List_Pointer(Problem_S.Group, InIndex) ;

  if(Group_P->Type == ELEMENTLIST && Group_P->SuppListType == SUPPLIST_CONNECTEDTO) {
    if (!Group_P->ExtendedList) Generate_ExtendedGroup(Group_P) ;
    if(!(Pair_P = (struct TwoInt*)List_PQuery(Group_P->ExtendedList,
                                              &Element->Num, fcmp_int))) {
      Message::Error("No Element connected to Element %d: check Group for Trace",
                     Element->Num) ;
      return;
    }
    Element->ElementTraceCandidates.resize(1);
    Element->ElementTraceCandidates[0] = (struct Element*)Malloc(sizeof(struct Element));
    Element->ElementTraceCandidates[0]->GeoElement = Geo_GetGeoElement(Pair_P->Int2) ;
  }
  else {
    // always generate elements (even if the group is simply a region), so that
    // we don't have to define Trace explicitly on "ElementsOf"
    if (!Group_P->ExtendedList) {
      Generate_Elements(Group_P->InitialList, SUPPLIST_NONE, nullptr, SUPPLIST_NONE,
                        nullptr, &Group_P->ExtendedList) ;
    }
    int N = List_Nbr(Group_P->ExtendedList);
    if(!N) return;
    // TODO: prune the element list based on which elements intersect the
    // bounding box of Element
    Element->ElementTraceCandidates.resize(N);
    for(int i = 0; i < N; i++) {
      int num; List_Read(Group_P->ExtendedList, i, &num);
      Element->ElementTraceCandidates[i] = (struct Element*)Malloc(sizeof(struct Element));
      Element->ElementTraceCandidates[i]->GeoElement = Geo_GetGeoElementOfNum(num);
    }
  }

  if(Element->ElementTraceCandidates.empty()) {
    Message::Error("Found no candidate elements for Trace calculation");
    return;
  }

  for(std::size_t i = 0; i < Element->ElementTraceCandidates.size(); i++) {
    Element->ElementTraceCandidates[i]->Region =
      Element->ElementTraceCandidates[i]->GeoElement->Region ;
    Element->ElementTraceCandidates[i]->Num =
      Element->ElementTraceCandidates[i]->GeoElement->Num ;
    Element->ElementTraceCandidates[i]->Type =
      Element->ElementTraceCandidates[i]->GeoElement->Type ;
    Get_NodesCoordinatesOfElement(Element->ElementTraceCandidates[i]) ;
  }

  i_ElementTrace = 0;
  Element->ElementTrace = Element->ElementTraceCandidates[i_ElementTrace];
  Message::Debug("First element trace: %d -> %d", Element->Num,
                 Element->ElementTrace->Num);
}

int Get_NextElementTrace(Element *Element)
{
  if(!Element->ElementTrace || Element->ElementTraceCandidates.size() < 2) return 0;
  i_ElementTrace++;
  if(i_ElementTrace >= Element->ElementTraceCandidates.size()) return 0;
  Element->ElementTrace = Element->ElementTraceCandidates[i_ElementTrace];
  Message::Debug("Next element trace: %d -> %d", Element->Num,
                 Element->ElementTrace->Num);
  return 1;
}
