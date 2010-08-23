// GetDP - Copyright (C) 1997-2010 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include "ProData.h"
#include "Message.h"

#define NoFace   Msg::Error("Missing Face Entity in Element %d", Element->Num)

/* ------------------------------------------------------------------------ */
/*  B F _ F a c e t                                                         */
/* ------------------------------------------------------------------------ */

#define WrongNumFacet   Msg::Error("Wrong Facet number in 'BF_Facet'")

void BF_Facet(struct Element * Element, int NumFacet, 
	      double u, double v, double w,  double s[])
{
  switch (Element->Type) {
  case LINE :
    switch(NumFacet) {
    case 1  : s[0] =  1. ; s[1] =  0. ; s[2] =  0.   ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case TRIANGLE :
    switch(NumFacet) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] = 2.  ; break ;
    default : WrongNumFacet ;
    }
    break ;

  default :
    Msg::Error("Unknown type of Element in BF_Facet");
    break;
  }

  if (!Element->GeoElement->NumFacets) NoFace ;

  if (Element->GeoElement->NumFacets[NumFacet-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }
}

#undef WrongNumFacet

/* ------------------------------------------------------------------------ */
/*  B F _ D i v F a c e t                                                   */
/* ------------------------------------------------------------------------ */

#define WrongNumFacet   Msg::Error("Wrong Facet number in 'BF_DivFacet'")

void BF_DivFacet(struct Element * Element, int NumFacet, 
		 double u, double v, double w,  double s[])
{
  switch (Element->Type) {
  case LINE :
    switch(NumFacet) {
    case 1  : s[0] =  0. ; s[1] =  0. ; s[2] =  0. ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case TRIANGLE :
    switch(NumFacet) {
    case 1  : s[0] =  0. ; s[1] =  0. ; s[2] =  0. ; break ;
    default : WrongNumFacet ;
    }
    break ;

  default :
    Msg::Error("Unkown type of Element in BF_DivFacet");
    break ;
  }

  if (!Element->GeoElement->NumFacets) NoFace ;

  if (Element->GeoElement->NumFacets[NumFacet-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }
}

#undef WrongNumFacet

#undef NoFace
