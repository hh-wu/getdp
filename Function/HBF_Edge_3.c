/* $Id: HBF_Edge_3.c,v 1.6 2000-09-07 18:47:23 geuzaine Exp $ */
#include <stdio.h>
#include <stdlib.h>

#include "Data_Passive.h"
#include "BF_Function.h"

/* The non-symmetric facets functions are selected according to the
   NumIndexth smallest global node number */

int fcmp_Int2(const void * a, const void * b){
  return ((struct TwoInt *)a)->Int2 - ((struct TwoInt *)b)->Int2 ;
}

int Get_FacetFunctionIndex(struct Element * Element, int NumEntity, int NumIndex){
  int    i, j, *NumNodes ;

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

  return Element->SortedNodesByFacet[NumEntity-1][NumIndex-1].Int1 ;
}


/* ------------------------------------------------------------------------ */
/*  H B F _ E d g e _ 3                                                     */
/* ------------------------------------------------------------------------ */

#define WrongNumEntity   Msg(ERROR, "Wrong Facet Number in 'HBF_Edge_3F'")

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_Edge_3F (struct Element * Element, int NumEntity, int Index,
		   double u, double v, double w, double s[] ) {

  switch (Element->Type) {

  case LINE :
    Msg(ERROR, "You Should Never be Here (HBF_Edge_3F)");
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
    default : Msg(ERROR, "HBF_Edge_3F not ready for QUADRANGLE");
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
    default : Msg(ERROR, "HBF_Edge_3F not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Edge_3F not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Edge_3F");
    break ;

  }

}

void  HBF_Edge_3F_a (struct Element * Element, int NumEntity, 
		     double u, double v, double w, double s[] ) {
  HBF_Edge_3F(Element, NumEntity, 1, u, v, w, s) ;
}

void  HBF_Edge_3F_b (struct Element * Element, int NumEntity, 
		     double u, double v, double w, double s[] ) {
  HBF_Edge_3F(Element, NumEntity, 2, u, v, w, s) ;
}

void  HBF_Edge_3F_c (struct Element * Element, int NumEntity, 
		     double u, double v, double w, double s[] ) {
  HBF_Edge_3F(Element, NumEntity, 3, u, v, w, s) ;
}


/* ------------------------------------------------------------------------ */
/*  H B F _ C u r l E d g e _ 3                                             */
/* ------------------------------------------------------------------------ */

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_CurlEdge_3F (struct Element * Element, int NumEntity, int Index,
		       double u, double v, double w, double s[] ) {

  switch (Element->Type) {

  case LINE :
    Msg(ERROR, "You Should Never be Here (HBF_CurlEdge_3F)");
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
    default : Msg(ERROR, "HBF_CurlEdge_3F not ready for QUADRANGLE");
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
    default : Msg(ERROR, "HBF_CurlEdge_3F not ready for HAXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_CurlEdge_3F not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_CurlEdge_3F");
    break ;

  }

}

void  HBF_CurlEdge_3F_a (struct Element * Element, int NumEntity,
			 double u, double v, double w, double s[] ) {
  HBF_CurlEdge_3F(Element, NumEntity, 1, u, v, w, s) ;
}

void  HBF_CurlEdge_3F_b (struct Element * Element, int NumEntity,
			 double u, double v, double w, double s[] ) {
  HBF_CurlEdge_3F(Element, NumEntity, 2, u, v, w, s) ;
}

void  HBF_CurlEdge_3F_c (struct Element * Element, int NumEntity,
			 double u, double v, double w, double s[] ) {
  HBF_CurlEdge_3F(Element, NumEntity, 3, u, v, w, s) ;
}

/* ------------------------------------------------------------------------ */
/*  H B F _ P e r p e n d i c u l a r F a c e t _ 3                         */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Facets */
/* ------- */

void  HBF_PerpendicularFacet_3F_a (struct Element * Element, int NumNode, 
				   double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_Edge_3F (Element, NumNode, 1, u, v, w, s) ;
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;
}
void  HBF_PerpendicularFacet_3F_b (struct Element * Element, int NumNode, 
				   double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_Edge_3F (Element, NumNode, 2, u, v, w, s) ;
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;
}
void  HBF_PerpendicularFacet_3F_c (struct Element * Element, int NumNode, 
				   double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_Edge_3F (Element, NumNode, 3, u, v, w, s) ;
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;
}

/* ------------------------------------------------------------------------ */
/*  H B F _ D i v P e r p e n d i c u l a r F a c e t _ 3                   */
/* ------------------------------------------------------------------------ */

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_DivPerpendicularFacet_3F_a (struct Element * Element, int NumNode, 
				      double u, double v, double w,  double s[] ) {
  
  HBF_CurlEdge_3F (Element, NumNode, 1, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;
}
void  HBF_DivPerpendicularFacet_3F_b (struct Element * Element, int NumNode, 
				      double u, double v, double w,  double s[] ) {
  
  HBF_CurlEdge_3F (Element, NumNode, 2, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;
}
void  HBF_DivPerpendicularFacet_3F_c (struct Element * Element, int NumNode, 
				      double u, double v, double w,  double s[] ) {
  
  HBF_CurlEdge_3F (Element, NumNode, 3, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;
}

