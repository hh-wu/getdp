/* $Id: HBF_Edge_4.c,v 1.4 2000-09-07 18:47:23 geuzaine Exp $ */
#include <stdio.h>

#include "BF_Function.h"


/* ------------------------------------------------------------------------ */
/*  H B F _ E d g e _ 4                                                     */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge Number in 'HBF_Edge_4E'")

void  HBF_Edge_4E (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

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
    default : Msg(ERROR, "HBF_Edge_4E not ready for QUADRANGLE");
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
    default : Msg(ERROR, "HBF_Edge_4E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Edge_4E not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Edge_4E");
    break ;
  }

  if (Element->GeoElement->NumEdges[NumEntity-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Face Number in 'HBF_Edge_4F'")

void  HBF_Edge_4F (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  switch (Element->Type) {

  case LINE :
    Msg(ERROR, "You Should Never be Here (HBF_Edge_4F)");
    break;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = v-2.0*u*v-v*v ; s[1] = u-u*u-2.0*u*v ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Edge_4F not ready for QUADRANGLE");
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
    default : Msg(ERROR, "HBF_Edge_4F not ready for QUADRANGLE");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Edge_4F not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Edge_4F");
    break ;

  }

}

#undef WrongNumEntity


/* ------------------------------------------------------------------------ */
/*  H B F _ C u r l E d g e _ 4                                             */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_CurlEdge_4E (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;

}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_CurlEdge_4F (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
}


/* ------------------------------------------------------------------------ */
/*  H B F _ P e r p e n d i c u l a r F a c e t _ 4                         */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_PerpendicularFacet_4E (struct Element * Element, int NumEntity, 
				 double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_Edge_4E (Element, NumEntity, u, v, w, s) ;
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;
}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_PerpendicularFacet_4F (struct Element * Element, int NumEntity, 
				 double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_Edge_4F (Element, NumEntity, u, v, w, s) ;
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;
}


/* ------------------------------------------------------------------------ */
/*  H B F _ D i v P e r p e n d i c u l a r F a c e t _ 4                   */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_DivPerpendicularFacet_4E (struct Element * Element, int NumEntity, 
				    double u, double v, double w,  double s[] ) {

  HBF_CurlEdge_4E (Element, NumEntity, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;
}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_DivPerpendicularFacet_4F (struct Element * Element, int NumEntity, 
				    double u, double v, double w,  double s[] ) {

  HBF_CurlEdge_4F (Element, NumEntity, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;
}

