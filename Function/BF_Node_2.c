#define RCSID "$Id: BF_Node_2.c,v 1.5 2001-06-14 16:02:48 dular Exp $"
#include <stdio.h>

#include "GetDP.h"
#include "BF_Function.h"


/* ------------------------------------------------------------------------ */
/*  B F _ N o d e _ 2                                                       */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge number in 'BF_Node_2E'")

void  BF_Node_2E (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_Node_2E");

  switch (Element->Type) {
  case LINE :
    switch(NumEntity) {
    case 1  : *s = 0.25 * (1.-u) * (1.+u) ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : *s = (1.-u-v) * u ; break ;
    case 2  : *s = (1.-u-v) * v ; break ;
    case 3  : *s = u * v        ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    case 1  : *s = 0.0625 * (1.-u*u) * (1.-v)*(1.-v) ; break ;
    case 2  : *s = 0.0625 * (1.-u)*(1.-u) * (1.-v*v) ; break ;
    case 3  : *s = 0.0625 * (1.+u)*(1.+u) * (1.-v*v) ; break ;
    case 4  : *s = 0.0625 * (1.-u*u) * (1.+v)*(1.+v) ; break ;
      /*
    case 1  : *s = 0.0625 * (1.-u*u) * (1.-v*v) ; break ;
    case 2  : *s = 0.0625 * (1.-u)*(1.-u) * (1.-v*v) ; break ;
    case 3  : *s = 0.0625 * (1.+u)*(1.+u) * (1.+v)*(1.+v) ; break ;
    case 4  : *s = 0.0625 * (1.-u*u) * (1.+v)*(1.+v) ; break ;
      */
    default : WrongNumEntity ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : *s = (1.-u-v-w) * u ; break ;
    case 2  : *s = (1.-u-v-w) * v ; break ;
    case 3  : *s = (1.-u-v-w) * w ; break ;
    case 4  : *s = u * v          ; break ;
    case 5  : *s = u * w          ; break ;
    case 6  : *s = v * w          ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Node_2E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Node_2E not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_Node_2E");
    break ;
  }

  GetDP_End ;
}

#undef WrongNumEntity


/* -------- */
/*  Facets  */
/* -------- */

void  BF_Node_2F (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_Node_2F");

  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case TETRAHEDRON :
    Msg(ERROR, "You should never end up here!") ;
    break;
    
  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Node_2F not ready for QUADRANGLE");
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Node_2F not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Node_2F not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in BF_Node_2F");
    break ;
  }

  /* necessary in 3D */
  if (Element->GeoElement->NumFacets[NumEntity-1] < 0) 
    *s = -*s ;

  GetDP_End ;
}

/* -------- */
/*  Volume  */
/* -------- */

void  BF_Node_2V (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s ) {

  GetDP_Begin("BF_Node_2V");

  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case QUADRANGLE :
  case TETRAHEDRON :
    Msg(ERROR, "You should never end up here!") ;
    break;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Node_2V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Node_2V not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_Node_2V");
    break ;
  }
  
  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ G r a d N o d e _ 2                                               */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge number in 'BF_GradNode_2E'")

void  BF_GradNode_2E (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_GradNode_2E");

  switch (Element->Type) {
  case LINE :
    switch(NumEntity) {
    case 1  : s[0] = -0.5*u ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = 1.-2.*u-v ; s[1] = -u        ; s[2] = 0. ; break ;
    case 2  : s[0] = -v        ; s[1] = 1.-u-2.*v ; s[2] = 0. ; break ;
    case 3  : s[0] = v         ; s[1] = u         ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    case 1  : s[0] = 0.0625 * (-2.*u) * (1.-v)*(1.-v) ;
      s[1] = 0.0625 * (1.-u*u) * (-2.)*(1.-v) ; s[2] = 0. ; break ;
    case 2  : s[0] = 0.0625 * (-2.)*(1.-u) * (1.-v*v) ;
      s[1] = 0.0625 * (1.-u)*(1.-u) * (-2.*v) ; s[2] = 0. ; break ;
    case 3  : s[0] = 0.0625 * (2.)*(1.+u) * (1.-v*v) ;
      s[1] = 0.0625 * (1.+u)*(1.+u) * (-2.*v) ; s[2] = 0. ; break ;
    case 4  : s[0] = 0.0625 * (-2.*u) * (1.+v)*(1.+v) ;
      s[1] = 0.0625 * (1.-u*u) * (2.)*(1.+v) ; s[2] = 0. ; break ;
      /*
    default : Msg(ERROR, "BF_GradNode_2E not ready for QUADRANGLE");
      */
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] =  1.-2.*u-v-w ; s[1] = -u           ; s[2] = -u           ; break ;
    case 2  : s[0] = -v           ; s[1] =  1.-u-2.*v-w ; s[2] = -v           ; break ;
    case 3  : s[0] = -w           ; s[1] = -w           ; s[2] =  1.-u-v-2.*w ; break ;
    case 4  : s[0] =  v           ; s[1] =  u           ; s[2] =  0.          ; break ;
    case 5  : s[0] =  w           ; s[1] =  0.          ; s[2] =  u           ; break ;
    case 6  : s[0] =  0.          ; s[1] =  w           ; s[2] =  v           ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_GradNode_2E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_GradNode_2E not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_GradNode_2E");
    break ;
  }

  GetDP_End ;
}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

void  BF_GradNode_2F (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_GradNode_2F");

  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case TETRAHEDRON :    
    Msg(ERROR, "You should never end up here!") ;
    break;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_GradNode_2F not ready for QUADRANGLE");
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_GradNode_2F not ready for HEXAHEDRON"); 
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_GradNode_2F not ready for PRISM"); 
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_GradNode_2F");
    break ;
  }

  if (Element->GeoElement->NumFacets[NumEntity-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

  GetDP_End ;
}

/* -------- */
/*  Volume  */
/* -------- */

void  BF_GradNode_2V (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_GradNode_2V");

  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case QUADRANGLE :
  case TETRAHEDRON :
    Msg(ERROR, "You should never end up here!") ;
    break;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_GradNode_2V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_GradNode_2V not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_GradNode_2V");
    break ;
  }

  GetDP_End ;
}

