#define RCSID "$Id: BF_Edge_3.c,v 1.10 2006-02-25 15:00:23 geuzaine Exp $"
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
#include "Data_Passive.h"
#include "BF_Function.h"

/* The non-symmetric facet functions are selected according to the
   NumIndex^th smallest global node number */

int fcmp_Int2(const void * a, const void * b){
  return ((struct TwoInt *)a)->Int2 - ((struct TwoInt *)b)->Int2 ;
}

int Get_FacetFunctionIndex(struct Element * Element, int NumEntity, int NumIndex){
  int    i, j, *NumNodes ;

  GetDP_Begin("Get_FacetFunctionIndex");

  if(Element->NumLastElementForSortedNodesByFacet != Element->Num){

    for(i = 0 ; i < Element->GeoElement->NbrFacets ; i++){

      NumNodes = Geo_GetNodesOfFacetInElement(Element->GeoElement, i);
      j = 0 ;
      while(NumNodes[j]){
	Element->SortedNodesByFacet[i][j].Int1 = NumNodes[j] ;
	Element->SortedNodesByFacet[i][j].Int2 = 
	  Element->GeoElement->NumNodes[NumNodes[j]-1] ;
	j++ ;
      }
      qsort(Element->SortedNodesByFacet[i], j, sizeof(struct TwoInt), fcmp_Int2);
    }

    Element->NumLastElementForSortedNodesByFacet = Element->Num ;
  }

  GetDP_Return(Element->SortedNodesByFacet[NumEntity-1][NumIndex-1].Int1) ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ E d g e _ 3                                                       */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge number in 'BF_Edge_3E'")

void  BF_Edge_3E (struct Element * Element, int NumEntity,
		   double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_Edge_3E");

  Msg(ERROR, "You should never end up here!") ;

  GetDP_End ;
}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Face number in 'BF_Edge_3F'")

void  BF_Edge_3F (struct Element * Element, int NumEntity, int Index,
		   double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_Edge_3F");

  switch (Element->Type) {

  case LINE :
    Msg(ERROR, "You should never end up here!") ;
    break;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  :
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 3 : s[0] = 0. ; s[1] = (1-u-v)*u ; s[2] = 0. ; break ;
      case 1 : s[0] = -u*v ; s[1] = -u*v ; s[2] = 0. ; break ;
      case 2 : s[0] = (1-u-v)*v ; s[1] = 0. ; s[2] = 0. ; break ;
      }
      break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_3F not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : 
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 4: s[0] = 0. ; s[1] = 0. ; s[2] = u*(1.-u-v-w) ; break ;
      case 1: s[0] = -u*w ; s[1] = -u*w ; s[2] = -u*w ; break ;
      case 2: s[0] = (1.-u-v-w)*w ; s[1] = 0. ; s[2] = 0. ; break ;
      }
      break ;
    case 2  : 
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 2: s[0] = v*(1-u-v-w) ; s[1] = 0. ; s[2] = 0. ; break ;
      case 1: s[0] = -u*v ; s[1] = -u*v ; s[2] = -u*v ; break ;
      case 3: s[0] = 0. ; s[1] = u*(1.-u-v-w) ; s[2] = 0. ; break ;
      }
      break ;
    case 3  : 
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 3: s[0] = 0. ; s[1] = (1.-u-v-w)*w ; s[2] = 0. ; break ;
      case 1: s[0] = -v*w ; s[1] = -v*w ; s[2] = -v*w ; break ;
      case 4: s[0] = 0. ; s[1] = 0. ; s[2] = v*(1.-u-v-w) ; break ;
      }
      break ;
    case 4  : 
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 4: s[0] = 0. ; s[1] = 0. ; s[2] = u*v ; break ;
      case 2: s[0] = v*w ; s[1] = 0. ; s[2] = 0. ; break ;
      case 3: s[0] = 0. ; s[1] = u*w ; s[2] = 0. ; break ;
      }
      break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_3F not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_3F not ready for PRISM");
    }
    break ;

  case PYRAMID :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_3F not ready for PYRAMID");
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_Edge_3F");
    break ;

  }

  GetDP_End ;
}

#undef WrongNumEntity

void  BF_Edge_3F_a (struct Element * Element, int NumEntity, 
		     double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_Edge_3F_a");

  BF_Edge_3F(Element, NumEntity, 1, u, v, w, s) ;

  GetDP_End ;
}

void  BF_Edge_3F_b (struct Element * Element, int NumEntity, 
		     double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_Edge_3F_b");

  BF_Edge_3F(Element, NumEntity, 2, u, v, w, s) ;

  GetDP_End ;
}

void  BF_Edge_3F_c (struct Element * Element, int NumEntity, 
		     double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_Edge_3F_c");

  BF_Edge_3F(Element, NumEntity, 3, u, v, w, s) ;

  GetDP_End ;
}

/* -------- */
/*  Volume  */
/* -------- */

void  BF_Edge_3V (struct Element * Element, int NumEntity,
		   double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_Edge_3V");

  Msg(ERROR, "You should never end up here!") ;

  GetDP_End ;
}



/* ------------------------------------------------------------------------ */
/*  B F _ C u r l E d g e _ 3                                               */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge number in 'BF_CurlEdge_3E'")

void  BF_CurlEdge_3E (struct Element * Element, int NumEntity,
		   double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_CurlEdge_3E");

  Msg(ERROR, "You should never end up here!") ;

  GetDP_End ;
}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Face number in 'BF_CurlEdge_3F'")

void  BF_CurlEdge_3F (struct Element * Element, int NumEntity, int Index,
		       double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_CurlEdge_3F");

  switch (Element->Type) {

  case LINE :
    Msg(ERROR, "You should never end up here!") ;
    break;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : 
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 3 : s[0] = 0. ; s[1] = 0. ; s[2] = -2.0*u+1.0-v ; break ;
      case 1 : s[0] = 0. ; s[1] = 0. ; s[2] = -v+u; break ;
      case 2 : s[0] = 0. ; s[1] = 0. ; s[2] = 2.0*v-1.0+u ; break ;
      }
      break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_CurlEdge_3F not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : 
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 4: s[0] = -u ; s[1] = -1.+2.*u+v+w ; s[2] = 0. ; break ;
      case 1: s[0] = u ; s[1] = -u+w ; s[2] = -w ; break ;
      case 2: s[0] = 0. ; s[1] = 1.-u-v-2.*w ; s[2] = w ; break ;
      }
      break ;
    case 2  : 
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 2: s[0] = 0. ; s[1] = -v ; s[2] = -1.+u+2.*v+w ; break ;
      case 1: s[0] = -u ; s[1] = v ; s[2] = u-v ; break ;
      case 3: s[0] = u ; s[1] = 0. ; s[2] = 1.-2.*u-v-w ; break ;
      }
      break ;
    case 3  : 
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 3: s[0] = -1.+u+v+2.*w ; s[1] = 0. ; s[2] = -w ; break ;
      case 1: s[0] = v-w ; s[1] = -v ; s[2] = w ; break ;
      case 4: s[0] = 1.-u-2.*v-w ; s[1] = v ; s[2] = 0. ; break ;
      }
      break ;
    case 4  :
      switch(Get_FacetFunctionIndex(Element, NumEntity, Index)){
      case 4: s[0] = u ; s[1] = -v ; s[2] = 0. ; break ;
      case 2: s[0] = 0. ; s[1] = v ; s[2] = -w ; break ;
      case 3: s[0] = -u ; s[1] = 0. ; s[2] = w ; break ;
      }
      break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_CurlEdge_3F not ready for HAXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_CurlEdge_3F not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_CurlEdge_3F");
    break ;

  }

  GetDP_End ;
}

#undef WrongNumEntity

void  BF_CurlEdge_3F_a (struct Element * Element, int NumEntity,
			 double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_CurlEdge_3F_a");

  BF_CurlEdge_3F(Element, NumEntity, 1, u, v, w, s) ;

  GetDP_End ;
}

void  BF_CurlEdge_3F_b (struct Element * Element, int NumEntity,
			 double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_CurlEdge_3F_b");

  BF_CurlEdge_3F(Element, NumEntity, 2, u, v, w, s) ;

  GetDP_End ;
}

void  BF_CurlEdge_3F_c (struct Element * Element, int NumEntity,
			 double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_CurlEdge_3F_c");

  BF_CurlEdge_3F(Element, NumEntity, 3, u, v, w, s) ;

  GetDP_End ;
}

/* -------- */
/*  Volume  */
/* -------- */

void  BF_CurlEdge_3V (struct Element * Element, int NumEntity,
		   double u, double v, double w, double s[] ) {

  GetDP_Begin("BF_CurlEdge_3V");

  Msg(ERROR, "You should never end up here!") ;

  GetDP_End ;
}
