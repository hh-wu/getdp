static char *rcsid = "$Id: BF_Facet.c,v 1.3 2000-10-30 01:05:44 geuzaine Exp $" ;
#include <stdio.h>

#include "GetDP.h"
#include "BF_Function.h"

#define NoFace   Msg(ERROR, "Missing Face Entity in Element %d", Element->Num)

/* ------------------------------------------------------------------------ */
/*  B F _ F a c e t                                                         */
/* ------------------------------------------------------------------------ */

#define WrongNumFacet   Msg(ERROR, "Wrong Facet Number in 'BF_Facet'")

void  BF_Facet   (struct Element * Element, int NumFacet, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Facet");
  
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

  case QUADRANGLE :
    switch(NumFacet) {
    case 2  : s[0] = -0.25 * (1. - v) ; s[1] =  0.               ;
              s[2] =  0.              ; break ;
    case 1  : s[0] =  0.              ; s[1] =  0.25 * (1. - u) ;
              s[2] =  0.              ; break ;
    case 4  : s[0] =  0.              ; s[1] = -0.25 * (1. + u) ;
              s[2] =  0.              ; break ;
    case 3  : s[0] =  0.25 * (1. + v) ; s[1] =  0.              ;
              s[2] =  0.              ; break ;
/*
    case 1  : s[0] =  0.25 * (1. - v) ; s[1] =  0.              ;
              s[2] =  0.              ; break ;
    case 2  : s[0] =  0.              ; s[1] =  0.25 * (1. - u) ;
              s[2] =  0.              ; break ;
    case 3  : s[0] =  0.              ; s[1] =  0.25 * (1. + u) ;
              s[2] =  0.              ; break ;
    case 4  : s[0] = -0.25 * (1. + v) ; s[1] =  0.              ;
              s[2] =  0.              ; break ;
*/
    default : WrongNumFacet ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumFacet) {
    case 1  : s[0] = 1. - v - w ; s[1] = u          ; s[2] = u          ; break ;
    case 2  : s[0] = v          ; s[1] = 1. - u - w ; s[2] = v          ; break ;
    case 3  : s[0] = w          ; s[1] = w          ; s[2] = 1. - u - v ; break ;
    case 4  : s[0] =    - v     ; s[1] =      u     ; s[2] = 0.         ; break ;
    case 5  : s[0] =        - w ; s[1] = 0.         ; s[2] = u          ; break ;
    case 6  : s[0] = 0.         ; s[1] =        - w ; s[2] = v          ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumFacet) {
    case 1  : s[0] =  0.125 * (1. - v) * (1. - w) ; s[1] =  0. ; s[2] =  0. ; break ;
    case 6  : s[0] = -0.125 * (1. + v) * (1. - w) ; s[1] =  0. ; s[2] =  0. ; break ;
    case 9  : s[0] =  0.125 * (1. - v) * (1. + w) ; s[1] =  0. ; s[2] =  0. ; break ;
    case 12 : s[0] = -0.125 * (1. + v) * (1. + w) ; s[1] =  0. ; s[2] =  0. ; break ;

    case 2  : s[0] =  0. ; s[1] =  0.125 * (1. - u) * (1. - w) ; s[2] =  0. ; break ;
    case 4  : s[0] =  0. ; s[1] =  0.125 * (1. + u) * (1. - w) ; s[2] =  0. ; break ;
    case 10 : s[0] =  0. ; s[1] =  0.125 * (1. - u) * (1. + w) ; s[2] =  0. ; break ;
    case 11 : s[0] =  0. ; s[1] =  0.125 * (1. + u) * (1. + w) ; s[2] =  0. ; break ;

    case 3  : s[0] =  0. ; s[1] =  0. ; s[2] =  0.125 * (1. - u) * (1. - v) ; break ;
    case 5  : s[0] =  0. ; s[1] =  0. ; s[2] =  0.125 * (1. + u) * (1. - v) ; break ;
    case 7  : s[0] =  0. ; s[1] =  0. ; s[2] =  0.125 * (1. + u) * (1. + v) ; break ;
    case 8  : s[0] =  0. ; s[1] =  0. ; s[2] =  0.125 * (1. - u) * (1. + v) ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case PRISM :
    switch(NumFacet) {
    case 1  : s[0] =  0.5 * (1. - v) * (1. - w) ;
              s[1] =  0.5 *       u  * (1. - w) ;
              s[2] =  0.                        ; break ;
    case 2  : s[0] =  0.5 *       v  * (1. - w) ;
              s[1] =  0.5 * (1. - u) * (1. - w) ;
              s[2] =  0.                        ; break ;
    case 3  : s[0] =  0.                        ;
              s[1] =  0.                        ;
              s[2] =  0.5 * (1. - u - v)        ; break ;
    case 4  : s[0] = -0.5 *       v  * (1. - w) ;
              s[1] =  0.5 *       u  * (1. - w) ;
              s[2] =  0.                        ; break ;
    case 5  : s[0] =  0.                        ;
              s[1] =  0.                        ;
              s[2] =  0.5 *       u             ; break ;
    case 6  : s[0] =  0.                        ;
              s[1] =  0.                        ;
              s[2] =  0.5 *           v         ; break ;
    case 7  : s[0] =  0.5 * (1. - v) * (1. + w) ;
              s[1] =  0.5 *       u  * (1. + w) ;
              s[2] =  0.                        ; break ;
    case 8  : s[0] =  0.5 *       v  * (1. + w) ;
              s[1] =  0.5 * (1. - u) * (1. + w) ;
              s[2] =  0.                        ; break ;
    case 9  : s[0] = -0.5 *       v  * (1. + w) ;
              s[1] =  0.5 *       u  * (1. + w) ;
              s[2] =  0.                        ; break ;
    default : WrongNumFacet ;
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in BF_Facet");
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

#define WrongNumFacet   Msg(ERROR, "Wrong Facet Number in 'BF_DivFacet'")

void  BF_DivFacet(struct Element * Element, int NumFacet, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_DivFacet");

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

  case QUADRANGLE :
    switch(NumFacet) {
    case 2  : s[0] = 0. ; s[1] = 0. ; s[2] = -0.25 ; break ;
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] = -0.25 ; break ;
    case 4  : s[0] = 0. ; s[1] = 0. ; s[2] = -0.25 ; break ;
    case 3  : s[0] = 0. ; s[1] = 0. ; s[2] = -0.25 ; break ;
/*
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] =  0.25 ; break ;
    case 2  : s[0] = 0. ; s[1] = 0. ; s[2] = -0.25 ; break ;
    case 3  : s[0] = 0. ; s[1] = 0. ; s[2] =  0.25 ; break ;
    case 4  : s[0] = 0. ; s[1] = 0. ; s[2] =  0.25 ; break ;
*/
    default : WrongNumFacet ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumFacet) {
    case 1  : s[0] =  0. ; s[1] = -2. ; s[2] =  2. ; break ;
    case 2  : s[0] =  2. ; s[1] =  0. ; s[2] = -2. ; break ;
    case 3  : s[0] = -2. ; s[1] =  2. ; s[2] =  0. ; break ;
    case 4  : s[0] =  0. ; s[1] =  0. ; s[2] =  2. ; break ;
    case 5  : s[0] =  0. ; s[1] = -2. ; s[2] =  0. ; break ;
    case 6  : s[0] =  2. ; s[1] =  0. ; s[2] =  0. ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumFacet) {
    case 1  : s[0] =  0. ; s[1] = 0.125*(v-1.) ; s[2] = 0.125*(1.-w) ; break ;
    case 6  : s[0] =  0. ; s[1] = 0.125*(v+1.) ; s[2] = 0.125*(1.-w) ; break ;
    case 9  : s[0] =  0. ; s[1] = 0.125*(1.-v) ; s[2] = 0.125*(1.+w) ; break ;
    case 12 : s[0] =  0. ; s[1] =-0.125*(v+1.) ; s[2] = 0.125*(1.+w) ; break ;

    case 2  : s[0] = 0.125*(1.-u) ; s[1] = 0. ; s[2] = 0.125*(w-1.) ; break ;
    case 4  : s[0] = 0.125*(1.+u) ; s[1] = 0. ; s[2] = 0.125*(1.-w) ; break ;
    case 10 : s[0] = 0.125*(u-1.) ; s[1] = 0. ; s[2] =-0.125*(w+1.) ; break ;
    case 11 : s[0] =-0.125*(1.+u) ; s[1] = 0. ; s[2] = 0.125*(w+1.) ; break ;

    case 3  : s[0] = 0.125*(u-1.) ; s[1] = 0.125*(1.-v) ; s[2] = 0. ; break ;
    case 5  : s[0] =-0.125*(u+1.) ; s[1] = 0.125*(v-1.) ; s[2] = 0. ; break ;
    case 7  : s[0] = 0.125*(u+1.) ; s[1] =-0.125*(1.+v) ; s[2] = 0. ; break ;
    case 8  : s[0] = 0.125*(1.-u) ; s[1] = 0.125*(1.+v) ; s[2] = 0. ; break ;
    default : WrongNumFacet ;
    }
    break ;

  case PRISM :
    switch(NumFacet) {
    case 1  : s[0] =  0.5*u      ; s[1] =  0.5*(v-1.) ; s[2] =  1.-w ; break ;
    case 2  : s[0] =  0.5*(1.-u) ; s[1] = -0.5*v      ; s[2] =  w-1. ; break ;
    case 3  : s[0] = -0.5        ; s[1] =  0.5        ; s[2] =  0.   ; break ;

    case 4  : s[0] =  0.5*u      ; s[1] =  0.5*v      ; s[2] =  1.-w ; break ;
    case 5  : s[0] =  0.         ; s[1] = -0.5        ; s[2] =  0.   ; break ;
    case 6  : s[0] =  0.5        ; s[1] =  0.         ; s[2] =  0.   ; break ;

    case 7  : s[0] = -0.5*u      ; s[1] =  0.5*(1.-v) ; s[2] =  1.+w ; break ;
    case 8  : s[0] =  0.5*(u-1.) ; s[1] =  0.5*v      ; s[2] = -1.-w ; break ;
    case 9  : s[0] = -0.5*u      ; s[1] = -0.5*v      ; s[2] =  1.+w ; break ;
    default : WrongNumFacet ;
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in BF_DivFacet");
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
