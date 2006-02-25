#define RCSID "$Id: BF_Facet.c,v 1.14 2006-02-25 15:00:23 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 */

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

#if defined(NEW_PYRAMIDS)
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
#endif
    
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

#if defined(NEW_PYRAMIDS)
  case PYRAMID :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;
#endif
    
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
