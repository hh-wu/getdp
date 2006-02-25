#define RCSID "$Id: BF_Edge_4.c,v 1.9 2006-02-25 15:00:23 geuzaine Exp $"
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
/*  B F _ E d g e _ 4                                                       */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge number in 'BF_Edge_4E'")

void  BF_Edge_4E (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge_4E");

  switch (Element->Type) {
  case LINE :
    switch(NumEntity) {
    case 1  : s[0] = u*u ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = -6.0*u+1.0-2.0*v+6.0*u*u+6.0*u*v+v*v ;
              s[1] = -2.0*u+3.0*u*u+2.0*u*v ; 
	      s[2] = 0. ; 
	      break ;
    case 2  : s[0] = -2.0*v+3.0*v*v+2.0*u*v ; 
              s[1] = -6.0*v+1.0-2.0*u+6.0*u*v+u*u+6.0*v*v ; 
	      s[2] = 0. ; 
	      break ;
    case 3  : s[0] = 2.0*u*v-v*v ; 
              s[1] = u*u-2.0*u*v ; 
	      s[2] = 0. ; 
	      break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_4E not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] = -6.0*u+1.0-2.0*v-2.0*w+6.0*u*u+6.0*u*v+6.0*u*w+v*v+2.0*v*w+w*w;
              s[1] = -2.0*u+3.0*u*u+2.0*u*v+2.0*u*w;
	      s[2] = -2.0*u+3.0*u*u+2.0*u*v+2.0*u*w;
	      break ;
    case 2  : s[0] = -2.0*v+3.0*v*v+2.0*u*v+2.0*v*w;
              s[1] = -6.0*v+1.0-2.0*u-2.0*w+6.0*u*v+u*u+2.0*u*w+6.0*v*v+6.0*v*w+w*w;
	      s[2] = -2.0*v+3.0*v*v+2.0*u*v+2.0*v*w;
	      break ;
    case 3  : s[0] = -2.0*w+3.0*w*w+2.0*u*w+2.0*v*w;
              s[1] = -2.0*w+3.0*w*w+2.0*u*w+2.0*v*w;
	      s[2] = -6.0*w+1.0-2.0*u-2.0*v+6.0*u*w+u*u+2.0*u*v+6.0*v*w+v*v+6.0*w*w;
	      break ;
    case 4  : s[0] = 2.0*u*v-v*v;
              s[1] = u*u-2.0*u*v;
              s[2] = 0.0;
	      break ;
    case 5  : s[0] = 2.0*u*w-w*w;
              s[1] = 0.0;
	      s[2] = u*u-2.0*u*w;
	      break ;
    case 6  : s[0] = 0.0;
              s[1] = 2.0*v*w-w*w;
	      s[2] = v*v-2.0*v*w;
	      break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_4E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_4E not ready for PRISM");
    }
    break ;

  case PYRAMID :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_4E not ready for PYRAMID");
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_Edge_4E");
    break ;
  }

  if (Element->GeoElement->NumEdges[NumEntity-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

  GetDP_End ;
}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Face number in 'BF_Edge_4F'")

void  BF_Edge_4F (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge_4F");

  switch (Element->Type) {

  case LINE :
    Msg(ERROR, "You should never end up here!") ;
    break;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = v-2.0*u*v-v*v ; s[1] = u-u*u-2.0*u*v ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_4F not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] = w-2.0*u*w-v*w-w*w ;
              s[1] = -u*w ;
              s[2] = u-u*u-u*v-2.0*u*w ;
	      break ;
    case 2  : s[0] = v-2.0*u*v-v*v-v*w ;
              s[1] = u-u*u-2.0*u*v-u*w ;
              s[2] = -u*v ;
	      break ;
    case 3  : s[0] = -v*w ;
              s[1] = w-u*w-2.0*v*w-w*w ;
              s[2] = v-u*v-v*v-2.0*v*w ;
	      break ;
    case 4  : s[0] = v*w ;
              s[1] = u*w ;
              s[2] = u*v ;
	      break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_4F not ready for QUADRANGLE");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_4F not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_Edge_4F");
    break ;

  }

  GetDP_End ;
}

#undef WrongNumEntity

/* -------- */
/*  Volume  */
/* -------- */

void  BF_Edge_4V (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge_4V");

  Msg(ERROR, "You should never end up here!") ;

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  B F _ C u r l E d g e _ 4                                               */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  BF_CurlEdge_4E (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlEdge_4E");

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;

  GetDP_End ;
}

/* -------- */
/*  Facets  */
/* -------- */

void  BF_CurlEdge_4F (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlEdge_4F");

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;

  GetDP_End ;
}

/* -------- */
/*  Volume  */
/* -------- */

void  BF_CurlEdge_4V (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlEdge_4V");

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;

  GetDP_End ;
}

