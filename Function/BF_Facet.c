#define RCSID "$Id: BF_Facet.c,v 1.7 2002-03-06 09:24:48 trophime Exp $"
#include <stdio.h>

#include "GetDP.h"
#include "BF_Function.h"

#define NoFace   Msg(ERROR, "Missing Face Entity in Element %d", Element->Num)

/* ------------------------------------------------------------------------ */
/*  B F _ F a c e t                                                         */
/* ------------------------------------------------------------------------ */

#define WrongNumFacet   Msg(ERROR, "Wrong Facet number in 'BF_Facet'")

void  BF_Facet   (struct Element * Element, int NumFacet, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Facet");
  
  switch (Element->Type) {
  case LINE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case TRIANGLE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case QUADRANGLE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case PRISM :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case PYRAMID :
    if ( w == 1){
      switch(NumFacet) {
      case 1  : s[0] =  0. ; s[1] = -2. ; s[2] = 1. ; break ;
      case 2  : s[0] = -2. ; s[1] =  0. ; s[2] = 1. ; break ;
      case 3  : s[0] =  0. ; s[1] =  0. ; s[2] = 1. ; break ;
      case 4  : s[0] =  0. ; s[1] =  0. ; s[2] = 1. ; break ;
      case 5  : s[0] =  0. ; s[1] =  0. ; s[2] = 0. ; break ;
      default : WrongNumFacet ;
      }
    } else {
      switch(NumFacet) {
      case 1  : s[0] =      - u * w / (1. - w) ;
        	s[1] =   -2. + v + v / (1. -w) ;
        	s[2] =                      w  ; break ;
      case 2  : s[0] =  -2. + u + u / (1. - w) ;
        	s[1] =      - v * w / (1. - w) ;
        	s[2] =                      w  ; break ;
      case 3  : s[0] =         u + u / (1. -w) ;
        	s[1] =      - v * w / (1. - w) ;
        	s[2] =                      w  ; break ;
      case 4  : s[0] =      - u * w / (1. - w) ;
        	s[1] =        v + v / (1. - w) ;
        	s[2] =                      w  ; break ;
      case 5  : s[0] =                      u  ;
        	s[1] =                      v  ;
        	s[2] =                  w - 1. ; break ;
      default : WrongNumFacet ;
      }
    }
    break ;
    
  default :
    Msg(ERROR, "Unkown type of Element in BF_Facet");
    break;
  }

  if (!Element->GeoElement->NumFacets) NoFace ;

  if (Element->GeoElement->NumFacets[NumFacet-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

  GetDP_End ;
}

#undef WrongNumFacet

/* ------------------------------------------------------------------------ */
/*  B F _ D i v F a c e t                                                   */
/* ------------------------------------------------------------------------ */

#define WrongNumFacet   Msg(ERROR, "Wrong Facet number in 'BF_DivFacet'")

void  BF_DivFacet(struct Element * Element, int NumFacet, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_DivFacet");

  switch (Element->Type) {
  case LINE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case TRIANGLE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case QUADRANGLE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case PRISM :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case PYRAMID :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;
    
  default :
    Msg(ERROR, "Unkown type of Element in BF_DivFacet");
    break ;
  }

  if (!Element->GeoElement->NumFacets) NoFace ;

  if (Element->GeoElement->NumFacets[NumFacet-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

  GetDP_End ;
}

#undef WrongNumFacet

#undef NoFace
