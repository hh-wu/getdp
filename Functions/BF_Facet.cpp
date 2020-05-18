// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include "ProData.h"
#include "Message.h"

#define NoFace   Message::Error("Missing Face Entity in Element %d", Element->Num)

/* ------------------------------------------------------------------------ */
/*  B F _ F a c e t                                                         */
/* ------------------------------------------------------------------------ */

#define WrongNumFacet   Message::Error("Wrong Facet number in 'BF_Facet'")

void BF_Facet(struct Element * Element, int NumFacet,
	      double u, double v, double w,  double s[])
{
  switch (Element->Type) {
  case LINE   : case LINE_2 :
  case LINE_3 : case LINE_4 :
    switch(NumFacet) {
    case 1  : s[0] =  1. ; s[1] =  0. ; s[2] =  0.   ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case TRIANGLE   : case TRIANGLE_2 :
  case TRIANGLE_3 : case TRIANGLE_4 :
    switch(NumFacet) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] = 2.  ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case QUADRANGLE   : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
  case QUADRANGLE_3 : case QUADRANGLE_4 :
    switch(NumFacet) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] = 0.5  ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case TETRAHEDRON   : case TETRAHEDRON_2 :
  case TETRAHEDRON_3 : case TETRAHEDRON_4 :
    switch(NumFacet) {
    case 1  : s[0] =  2. * u       ; s[1] = -2. * (1.- v) ; s[2] =  2. * w       ; break ;
    case 2  : s[0] =  2. * u       ; s[1] =  2. * v       ; s[2] = -2. * (1.- w) ; break ;
    case 3  : s[0] = -2. * (1.- u) ; s[1] =  2. * v       ; s[2] =  2. * w       ; break ;
    case 4  : s[0] =  2. * u       ; s[1] =  2. * v       ; s[2] =  2. * w       ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case HEXAHEDRON   : case HEXAHEDRON_2 : case HEXAHEDRON_2_20N :
  case HEXAHEDRON_3 : case HEXAHEDRON_4 :
    switch(NumFacet) {
    case 1  : s[0] =  0.              ; s[1] = -0.25 * (1. - v) ; s[2] =  0.               ; break ;
    case 2  : s[0] =  0.              ; s[1] =  0.              ; s[2] = -0.25 * (1. - w)  ; break ;
    case 3  : s[0] = -0.25 * (1. - u) ; s[1] =  0.              ; s[2] =  0.               ; break ;
    case 4  : s[0] =  0.25 * (1. + u) ; s[1] =  0.              ; s[2] =  0.               ; break ;
    case 5  : s[0] =  0.              ; s[1] =  0.25 * (1. + v) ; s[2] =  0.               ; break ;
    case 6  : s[0] =  0.              ; s[1] =  0.              ; s[2] =  0.25 * (1. + w)  ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case PRISM   : case PRISM_2 : case PRISM_2_15N :
  case PRISM_3 : case PRISM_4 :
    switch(NumFacet) {
    case 1  : s[0] =  u        ; s[1] = -(1. - v) ; s[2] =  0.       ; break ;
    case 2  : s[0] =  0.       ; s[1] =  0.       ; s[2] = -(1. - w) ; break ;
    case 3  : s[0] = -(1. - u) ; s[1] =  v        ; s[2] =  0.       ; break ;
    case 4  : s[0] =  u        ; s[1] =  v        ; s[2] =  0.       ; break ;
    case 5  : s[0] =  0.       ; s[1] =  0.       ; s[2] =  (1. + w) ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case PYRAMID : case PYRAMID_2 : case PYRAMID_2_13N :
  case PYRAMID_3 : // case PYRAMID_4
    if ( w == 1){
      switch(NumFacet) {
      case 1  : s[0] =  0.  ; s[1] = -0.5 ; s[2] = 0.25 ; break ;
      case 2  : s[0] =  0.  ; s[1] =  0.  ; s[2] = 0.   ; break ;
      case 3  : s[0] = -0.5 ; s[1] =  0.  ; s[2] = 0.25 ; break ;
      case 4  : s[0] =  0.5 ; s[1] =  0.  ; s[2] = 0.25 ; break ;
      case 5  : s[0] =  0.  ; s[1] =  0.5 ; s[2] = 0.25 ; break ;
      default : WrongNumFacet ;
      }
    }
    else {
      switch(NumFacet) {
      case 1  : s[0] = -0.25 * u * w / (1. - w) ;
	        s[1] =  0.25 * (-2. + v + v / (1. - w)) ;
        	s[2] =  0.25 * w ; break ;
      case 2  : s[0] =  0.25 * u ;
        	s[1] =  0.25 * v ;
        	s[2] = -0.25 * (1. - w) ; break ;
      case 3  : s[0] =  0.25 * (-2. + u + u / (1. - w)) ;
        	s[1] = -0.25 * v * w / (1. - w) ;
        	s[2] =  0.25 * w ; break ;
      case 4  : s[0] =  0.25 * ( 2. + u + u / (1. - w)) ;
        	s[1] = -0.25 * v * w / (1. - w);
        	s[2] =  0.25 * w ; break ;
      case 5  : s[0] = -0.25 * u * w / (1. - w) ;
        	s[1] =  0.25 * ( 2. + v + v / (1. - w)) ;
        	s[2] =  0.25 * w ; break ;
      default : WrongNumFacet ;
      }
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_Facet");
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

#define WrongNumFacet   Message::Error("Wrong Facet number in 'BF_DivFacet'")

void BF_DivFacet(struct Element * Element, int NumFacet,
		 double u, double v, double w,  double *s)
{
  switch (Element->Type) {
  case LINE   : case LINE_2 :
  case LINE_3 : case LINE_4 :
    switch(NumFacet) {
    case 1  : *s =  0. ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case TRIANGLE   : case TRIANGLE_2 :
  case TRIANGLE_3 : case TRIANGLE_4 :
    switch(NumFacet) {
    case 1  : *s =  0. ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case QUADRANGLE   : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
  case QUADRANGLE_3 : case QUADRANGLE_4 :
    switch(NumFacet) {
    case 1  : *s =  0. ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case TETRAHEDRON   : case TETRAHEDRON_2 :
  case TETRAHEDRON_3 : case TETRAHEDRON_4 :
    switch(NumFacet) {
    case 1  : *s =  6. ;  break ;
    case 2  : *s =  6. ;  break ;
    case 3  : *s =  6. ;  break ;
    case 4  : *s =  6. ;  break ;
    default : WrongNumFacet ;
    }
    break ;

  case HEXAHEDRON   : case HEXAHEDRON_2 : case HEXAHEDRON_2_20N :
  case HEXAHEDRON_3 : case HEXAHEDRON_4 :
    switch(NumFacet) {
    case 1  : *s =  0.25 ; break ;
    case 2  : *s =  0.25 ; break ;
    case 3  : *s =  0.25 ; break ;
    case 4  : *s =  0.25 ; break ;
    case 5  : *s =  0.25 ; break ;
    case 6  : *s =  0.25 ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case PRISM   : case PRISM_2 : case PRISM_2_15N :
  case PRISM_3 : case PRISM_4 :
    switch(NumFacet) {
    case 1  : *s = 2. ; break ;
    case 2  : *s = 1. ; break ;
    case 3  : *s = 2. ; break ;
    case 4  : *s = 2. ; break ;
    case 5  : *s = 1. ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case PYRAMID : case PYRAMID_2 : case PYRAMID_2_13N :
  case PYRAMID_3 : // case PYRAMID_4
    if ( w == 1){
      *s = 0.  ;
    }
    else {
      switch(NumFacet) {
      case 1  : *s =  -0.25 * w/(1. - w) + 0.25/(1. - w) + 0.5 ;  break ;
      case 2  : *s =   0.75                                    ;  break ;
      case 3  : *s =  -0.25 * w/(1. - w) + 0.25/(1. - w) + 0.5 ;  break ;
      case 4  : *s =  -0.25 * w/(1. - w) + 0.25/(1. - w) + 0.5 ;  break ;
      case 5  : *s =  -0.25 * w/(1. - w) + 0.25/(1. - w) + 0.5 ;  break ;
      default : WrongNumFacet ;
      }
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_DivFacet");
    break ;
  }

  if (!Element->GeoElement->NumFacets) NoFace ;

  if (Element->GeoElement->NumFacets[NumFacet-1] < 0) {
    *s = - *s ;
  }
}

#undef WrongNumFacet

#undef NoFace
