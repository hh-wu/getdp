#define RCSID "$Id: BF_Edge_2.c,v 1.10 2006-02-26 00:42:53 geuzaine Exp $"
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

/* ------------------------------------------------------------------------ */
/*  B F _ E d g e _ 2                                                       */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(GERROR, "Wrong Edge number in 'BF_Edge_2E'")

void  BF_Edge_2E (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge");

  switch (Element->Type) {
  case LINE :
    switch(NumEntity) {
    case 1  : s[0] = u  ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;
    
  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = -2.0*u+1.0-v ; s[1] = -u           ; s[2] = 0. ; break ;
    case 2  : s[0] = -v           ; s[1] = -2.0*v+1.0-u ; s[2] = 0. ; break ;
    case 3  : s[0] =  v           ; s[1] =  u           ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(GERROR, "BF_Edge_2E not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] = -2.0*u+1.0-v-w ; s[1] = -u             ; s[2] = -u             ; break ;
    case 2  : s[0] = -v             ; s[1] = -2.0*v+1.0-u-w ; s[2] = -v             ; break ;
    case 3  : s[0] = -w             ; s[1] = -w             ; s[2] = -2.0*w+1.0-u-v ; break ;
    case 4  : s[0] =  v             ; s[1] =  u             ; s[2] =  0.            ; break ;
    case 5  : s[0] =  w             ; s[1] =  0.            ; s[2] =  u             ; break ;
    case 6  : s[0] =  0.            ; s[1] =  w             ; s[2] =  v             ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(GERROR, "BF_Edge_2E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(GERROR, "BF_Edge_2E not ready for PRISM");
    }
    break ;

  case PYRAMID :
    switch(NumEntity) {
    default : Msg(GERROR, "BF_Edge_2E not ready for PYRAMID");
    }
    break ;

  default :
    Msg(GERROR, "Unkown type of Element in BF_Edge_2E");
    break ;
  }

  GetDP_End ;
}

#undef WrongNumEntity

/* ------- */
/*  Faces  */
/* ------- */

#define WrongNumEntity   Msg(GERROR, "Wrong Face number in 'BF_Edge_2F'")

void  BF_Edge_2F (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge_2F");

  Msg(GERROR, "You should never end up here!") ;

  GetDP_End ;
}

#undef WrongNumEntity

/* -------- */
/*  Volume  */
/* -------- */

void  BF_Edge_2V (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge_2V");

  Msg(GERROR, "You should never end up here!") ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ C u r l E d g e _ 2                                               */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  BF_CurlEdge_2E (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlEdge_2E");

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; 

  GetDP_End ;
}

/* ------- */
/*  Faces  */
/* ------- */

void  BF_CurlEdge_2F (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlEdge_2F");

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; 

  GetDP_End ;
}

/* -------- */
/*  Volume  */
/* -------- */

void  BF_CurlEdge_2V (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlEdge_2V");

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; 

  GetDP_End ;
}
