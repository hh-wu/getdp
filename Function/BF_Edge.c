#define RCSID "$Id: BF_Edge.c,v 1.11 2004-01-19 16:51:13 geuzaine Exp $"
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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
 *
 * Contributor(s):
 *   Christophe Trophime
 */

#include "GetDP.h"
#include "BF_Function.h"

#define NoEdge  Msg(ERROR, "Missing Edge Entity in Element %d", Element->Num)

/* ------------------------------------------------------------------------ */
/*  B F _ E d g e                                                           */
/* ------------------------------------------------------------------------ */

#define WrongNumEdge   Msg(ERROR, "Wrong Edge number in 'BF_Edge'")

void  BF_Edge    (struct Element * Element, int NumEdge, 
		  double u, double v, double w,  double s[] ) {

#if defined(NEW_PYRAMIDS)
  double r, ru, rv, rw;
  double t;
#endif
  
  GetDP_Begin("BF_Edge");

  switch (Element->Type) {
  case LINE :
    switch(NumEdge) {
    case 1  : s[0] = 0.5 ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case TRIANGLE :
    switch(NumEdge) {
    case 1  : s[0] = 1.-v ; s[1] = u    ; s[2] = 0.  ; break ;
    case 2  : s[0] = v    ; s[1] = 1.-u ; s[2] = 0.  ; break ;
    case 3  : s[0] =   -v ; s[1] =    u ; s[2] = 0.  ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEdge) {
    case 1  : s[0] =  0.25 * (1.-v) ; s[1] = 0.            ; s[2] = 0. ; break ;
    case 2  : s[0] =  0.            ; s[1] = 0.25 * (1.-u) ; s[2] = 0. ; break ;
    case 3  : s[0] =  0.            ; s[1] = 0.25 * (1.+u) ; s[2] = 0. ; break ;
    case 4  : s[0] = -0.25 * (1.+v) ; s[1] = 0.            ; s[2] = 0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEdge) {
    case 1  : s[0] =  1.-v-w ; s[1] =  u      ; s[2] = u      ; break ;
    case 2  : s[0] =  v      ; s[1] =  1.-u-w ; s[2] = v      ; break ;
    case 3  : s[0] =  w      ; s[1] =  w      ; s[2] = 1.-u-v ; break ;
    case 4  : s[0] = -v      ; s[1] =  u      ; s[2] = 0.     ; break ;
    case 5  : s[0] = -w      ; s[1] =  0.     ; s[2] = u      ; break ;
    case 6  : s[0] =  0.     ; s[1] = -w      ; s[2] = v      ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEdge) {
    case 1  : s[0] =  0.125 * (1.-v) * (1.-w) ; s[1] = 0. ; s[2] = 0. ; break ;
    case 6  : s[0] = -0.125 * (1.+v) * (1.-w) ; s[1] = 0. ; s[2] = 0. ; break ;
    case 9  : s[0] =  0.125 * (1.-v) * (1.+w) ; s[1] = 0. ; s[2] = 0. ; break ;
    case 12 : s[0] = -0.125 * (1.+v) * (1.+w) ; s[1] = 0. ; s[2] = 0. ; break ;

    case 2  : s[0] = 0. ; s[1] = 0.125 * (1.-u) * (1.-w)  ; s[2] = 0. ; break ;
    case 4  : s[0] = 0. ; s[1] = 0.125 * (1.+u) * (1.-w)  ; s[2] = 0. ; break ;
    case 10 : s[0] = 0. ; s[1] = 0.125 * (1.-u) * (1.+w)  ; s[2] = 0. ; break ;
    case 11 : s[0] = 0. ; s[1] = 0.125 * (1.+u) * (1.+w)  ; s[2] = 0. ; break ;

    case 3  : s[0] = 0. ; s[1] = 0. ; s[2] = 0.125 * (1.-u) * (1.-v)  ; break ;
    case 5  : s[0] = 0. ; s[1] = 0. ; s[2] = 0.125 * (1.+u) * (1.-v)  ; break ;
    case 7  : s[0] = 0. ; s[1] = 0. ; s[2] = 0.125 * (1.+u) * (1.+v)  ; break ;
    case 8  : s[0] = 0. ; s[1] = 0. ; s[2] = 0.125 * (1.-u) * (1.+v)  ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case PRISM :
    switch(NumEdge) {
    case 1  : s[0] =  0.5 * (1.-v) * (1.-w) ;
              s[1] =  0.5 * u      * (1.-w) ;
              s[2] =  0.                    ; break ;
    case 2  : s[0] =  0.5 * v      * (1.-w) ;
              s[1] =  0.5 * (1.-u) * (1.-w) ;
              s[2] =  0.                    ; break ;
    case 3  : s[0] =  0.                    ;
              s[1] =  0.                    ;
              s[2] =  0.5 * (1.-u-v)        ; break ;
    case 4  : s[0] = -0.5 * v      * (1.-w) ;
              s[1] =  0.5 * u      * (1.-w) ;
              s[2] =  0.                    ; break ;
    case 5  : s[0] =  0.                    ;
              s[1] =  0.                    ;
              s[2] =  0.5 * u               ; break ;
    case 6  : s[0] =  0.                    ;
              s[1] =  0.                    ;
              s[2] =  0.5 * v               ; break ;
    case 7  : s[0] =  0.5 * (1.-v) * (1.+w) ;
              s[1] =  0.5 * u      * (1.+w) ;
              s[2] =  0.                    ; break ;
    case 8  : s[0] =  0.5 * v      * (1.+w) ;
              s[1] =  0.5 * (1.-u) * (1.+w) ;
              s[2] =  0.                    ; break ;
    case 9  : s[0] = -0.5 * v      * (1.+w) ;
              s[1] =  0.5 * u      * (1.+w) ;
              s[2] =  0.                    ; break ;
    default : WrongNumEdge ;
    }
    break ;

#if defined(NEW_PYRAMIDS)
  case PYRAMID :
    r  = 0. ;
    ru = 0. ;
    rv = 0. ;
    rw = 0. ;
    if ( w != 1){
       r  = u * v / ( 1. - w) ;
       t = w / ( 1. - w) ;

       ru = u * t ;
       rv = v * t ;
       rw = r * t ;
    } 
    switch(NumEdge) {
    case 1  : s[0] =  1. - w - v ;
              s[1] =  0. ;
              s[2] =  u - r ; break ;
    case 2  : s[0] =  0. ;
              s[1] =  u ;
              s[2] =  r ; break ;
    case 3  : s[0] =  v                    ;
              s[1] =  0.                    ;
              s[2] =  r ; break ;
    case 4  : s[0] =  0. ;
              s[1] =  1. - w - v ;
              s[2] =  v - r ; break ;
    case 5  : s[0] =  w - rv ;
              s[1] =  w - ru ;
              s[2] =  1. - u - v + r - rw ; break ;
    case 6  : s[0] = -w + rv ;
              s[1] =  ru ;
              s[2] =  u - r + rw ; break ;
    case 7  : s[0] =  rv ;
              s[1] = -w + ru ;
              s[2] =  v - r + rw ; break ;
    case 8  : s[0] = -rv ;
              s[1] = -ru ;
              s[2] =  r - rw ; break ;
    default : WrongNumEdge ;
    }
    break ;
#endif

  default :
    Msg(ERROR, "Unkown type of Element in BF_Edge");
    break;
  }

  if (!Element->GeoElement->NumEdges) NoEdge ;

  if (Element->GeoElement->NumEdges[NumEdge-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

  GetDP_End ;
}

#undef WrongNumEdge

/* ------------------------------------------------------------------------ */
/*  B F _ C u r l E d g e                                                   */
/* ------------------------------------------------------------------------ */

#define WrongNumEdge   Msg(ERROR, "Wrong Edge number in 'BF_CurlEdge'")

void  BF_CurlEdge(struct Element * Element, int NumEdge, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge");

  switch (Element->Type) {
  case LINE :
    switch(NumEdge) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case TRIANGLE :
    switch(NumEdge) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] =  2. ; break ;
    case 2  : s[0] = 0. ; s[1] = 0. ; s[2] = -2. ; break ;
    case 3  : s[0] = 0. ; s[1] = 0. ; s[2] =  2. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEdge) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] =  0.25 ; break ;
    case 2  : s[0] = 0. ; s[1] = 0. ; s[2] = -0.25 ; break ;
    case 3  : s[0] = 0. ; s[1] = 0. ; s[2] =  0.25 ; break ;
    case 4  : s[0] = 0. ; s[1] = 0. ; s[2] =  0.25 ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEdge) {
    case 1  : s[0] =  0. ; s[1] = -2. ; s[2] =  2. ; break ;
    case 2  : s[0] =  2. ; s[1] =  0. ; s[2] = -2. ; break ;
    case 3  : s[0] = -2. ; s[1] =  2. ; s[2] =  0. ; break ;
    case 4  : s[0] =  0. ; s[1] =  0. ; s[2] =  2. ; break ;
    case 5  : s[0] =  0. ; s[1] = -2. ; s[2] =  0. ; break ;
    case 6  : s[0] =  2. ; s[1] =  0. ; s[2] =  0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEdge) {
    case 1  : s[0] = 0. ; s[1] = 0.125*(v-1.) ; s[2] = 0.125*(1.-w) ; break ;
    case 6  : s[0] = 0. ; s[1] = 0.125*(v+1.) ; s[2] = 0.125*(1.-w) ; break ;
    case 9  : s[0] = 0. ; s[1] = 0.125*(1.-v) ; s[2] = 0.125*(1.+w) ; break ;
    case 12 : s[0] = 0. ; s[1] =-0.125*(v+1.) ; s[2] = 0.125*(1.+w) ; break ;

    case 2  : s[0] = 0.125*(1.-u) ; s[1] = 0. ; s[2] = 0.125*(w-1.) ; break ;
    case 4  : s[0] = 0.125*(1.+u) ; s[1] = 0. ; s[2] = 0.125*(1.-w) ; break ;
    case 10 : s[0] = 0.125*(u-1.) ; s[1] = 0. ; s[2] =-0.125*(w+1.) ; break ;
    case 11 : s[0] =-0.125*(1.+u) ; s[1] = 0. ; s[2] = 0.125*(w+1.) ; break ;

    case 3  : s[0] = 0.125*(u-1.) ; s[1] = 0.125*(1.-v) ; s[2] = 0. ; break ;
    case 5  : s[0] =-0.125*(u+1.) ; s[1] = 0.125*(v-1.) ; s[2] = 0. ; break ;
    case 7  : s[0] = 0.125*(u+1.) ; s[1] =-0.125*(1.+v) ; s[2] = 0. ; break ;
    case 8  : s[0] = 0.125*(1.-u) ; s[1] = 0.125*(1.+v) ; s[2] = 0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case PRISM :
    switch(NumEdge) {
    case 1  : s[0] =  0.5*u      ; s[1] =  0.5*(v-1.) ; s[2] =  1.-w ; break ;
    case 2  : s[0] =  0.5*(1.-u) ; s[1] = -0.5*v      ; s[2] =  w-1. ; break ;
    case 3  : s[0] = -0.5        ; s[1] =  0.5        ; s[2] =  0.   ; break ;

    case 4  : s[0] =  0.5*u      ; s[1] =  0.5*v      ; s[2] =  1.-w ; break ;
    case 5  : s[0] =  0.         ; s[1] = -0.5        ; s[2] =  0.   ; break ;
    case 6  : s[0] =  0.5        ; s[1] =  0.         ; s[2] =  0.   ; break ;

    case 7  : s[0] = -0.5*u      ; s[1] =  0.5*(1.-v) ; s[2] =  1.+w ; break ;
    case 8  : s[0] =  0.5*(u-1.) ; s[1] =  0.5*v      ; s[2] = -1.-w ; break ;
    case 9  : s[0] = -0.5*u      ; s[1] = -0.5*v      ; s[2] =  1.+w ; break ;
    default : WrongNumEdge ;
    }
    break ;

#if defined(NEW_PYRAMIDS)
  case PYRAMID :
    if ( w == 1){
      switch(NumEdge) {
      case 1  : s[0] = 0. ; s[1] = -2. ; s[2] = -1. ; break ;
      case 2  : s[0] = 0. ; s[1] =  0. ; s[2] =  1. ; break ;
      case 3  : s[0] = 0. ; s[1] =  0. ; s[2] = -1. ; break ;
      case 4  : s[0] = 2. ; s[1] =  0. ; s[2] = -1. ; break ;

      case 5  : s[0] = -2. ; s[1] =  0. ; s[2] = 0. ; break ;
      case 6  : s[0] =  0. ; s[1] = -2. ; s[2] = 0. ; break ;
      case 7  : s[0] =  2. ; s[1] =  0  ; s[2] = 0. ; break ;

      case 8  : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
      default : WrongNumEdge ;
      }
    } else {
      switch(NumEdge) {
      case 1  : s[0] =    -u / (1. - w) ; s[1] = -2. + v / (1. - w) ; s[2] = -1. ; break ;
      case 2  : s[0] =     u / (1. - w) ; s[1] =       v / (1. - w) ; s[2] =  1. ; break ;
      case 3  : s[0] =     u / (1. - w) ; s[1] =       v / (1. - w) ; s[2] = -1. ; break ;
      case 4  : s[0] = 2. -u / (1. - w) ; s[1] =       v / (1. - w) ; s[2] = -1. ; break ;

      case 5  : s[0] = -2. + u / (1. - w) + v / (1. - w) ; s[1] = 2. * ( 1. - v / (1. - w)) ; s[2] = 0. ; break ;
      case 6  : s[0] =                -2. * u / (1. - w) ; s[1] = 2. * (-1. + v / (1. - w)) ; s[2] = 0. ; break ;
      case 7  : s[0] =          2. * (1. - u / (1. - w)) ; s[1] =         2. * v / (1. - w) ; s[2] = 0. ; break ;

      case 8  : s[0] = 2. * u / (1. - w) ; s[1] = -2. * v / (1. - w); s[2] = 0. ; break ;
      default : WrongNumEdge ;
      }
    }
    break ;
#endif

  default :
    Msg(ERROR, "Unkown type of Element in BF_CurlEdge");
    break;
  }

  if (!Element->GeoElement->NumEdges) NoEdge ;

  if (Element->GeoElement->NumEdges[NumEdge-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

  GetDP_End ;
}

#undef WrongNumEdge

#undef NoEdge
