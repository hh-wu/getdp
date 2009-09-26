// GetDP - Copyright (C) 1997-2009 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include "ProData.h"
#include "Message.h"

#define WrongElementType(A,B)  Msg::Error("Basis function A cannot be associated with B!")

/* ------------------------------------------------------------------------ */
/*  B F _ N o d e _ 2                                                       */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg::Error("Wrong Edge number in 'BF_Node_2E'")

void BF_Node_2E(struct Element * Element, int NumEntity, 
		double u, double v, double w,  double *s)
{
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
      /* faux
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
    case 1   : *s = 0.015625 * (1.-u*u) * (1.-v) * (1.-v)   * (1.-w) * (1.-w)   ; break ;
    case 2   : *s = 0.015625 * (1.-u)   * (1.-u) * (1.-v*v) * (1.-w) * (1.-w)   ; break ;
    case 3   : *s = 0.015625 * (1.-u)   * (1.-u) * (1.-v)   * (1.-v) * (1.-w*w) ; break ;
    case 4   : *s = 0.015625 * (1.+u)   * (1.+u) * (1.-v*v) * (1.-w) * (1.-w)   ; break ;
    case 5   : *s = 0.015625 * (1.+u)   * (1.+u) * (1.-v)   * (1.-v) * (1.-w*w) ; break ;
    case 6   : *s = 0.015625 * (1.-u*u) * (1.+v) * (1.+v)   * (1.-w) * (1.-w)   ; break ;
    case 7   : *s = 0.015625 * (1.+u)   * (1.+u) * (1.+v)   * (1.+v) * (1.-w*w) ; break ;
    case 8   : *s = 0.015625 * (1.-u)   * (1.-u) * (1.+v)   * (1.+v) * (1.-w*w) ; break ;
    case 9   : *s = 0.015625 * (1.-u*u) * (1.-v) * (1.-v)   * (1.+w) * (1.+w)   ; break ;
    case 10  : *s = 0.015625 * (1.-u)   * (1.-u) * (1.-v*v) * (1.+w) * (1.+w)   ; break ;
    case 11  : *s = 0.015625 * (1.+u)   * (1.+u) * (1.-v*v) * (1.+w) * (1.+w)   ; break ;
    case 12  : *s = 0.015625 * (1.-u*u) * (1.+v) * (1.+v)   * (1.+w) * (1.+w)   ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg::Error("BF_Node_2E not ready for PRISM");
    }
    break ;

  case PYRAMID :
    switch(NumEntity) {
    default : Msg::Error("BF_Node_2E not ready for PYRAMID");
    }
    break ;

  default :
    Msg::Error("Unkown type of Element in BF_Node_2E");
    break ;
  }
}

#undef WrongNumEntity


/* -------- */
/*  Facets  */
/* -------- */

void BF_Node_2F(struct Element * Element, int NumEntity, 
		double u, double v, double w,  double *s)
{
  switch (Element->Type) {

  case LINE :
    WrongElementType(Node_2F, LINE); break;
  case TRIANGLE :
    WrongElementType(Node_2F, TRIANGLE); break;
  case TETRAHEDRON :    
    WrongElementType(Node_2F, TETRAHEDRON); break;  
    
  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg::Error("BF_Node_2F not ready for QUADRANGLE");
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg::Error("BF_Node_2F not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg::Error("BF_Node_2F not ready for PRISM");
    }
    break ;

  case PYRAMID :
    switch(NumEntity) {
    default : Msg::Error("BF_Node_2F not ready for PYRAMID");
    }
    break ;

  default :
    Msg::Error("Unkown Element Type in BF_Node_2F");
    break ;
  }

  /* necessary in 3D */
  if (Element->GeoElement->NumFacets[NumEntity-1] < 0) 
    *s = -*s ;
}

/* -------- */
/*  Volume  */
/* -------- */

void BF_Node_2V(struct Element * Element, int NumEntity, 
		double u, double v, double w,  double *s)
{
  switch (Element->Type) {

  case LINE :
    WrongElementType(BF_Node_2V, LINE); break;
  case TRIANGLE :
    WrongElementType(BF_Node_2V, TRIANGLE); break;
  case QUADRANGLE :
    WrongElementType(BF_Node_2V, QUADRANGLE); break;
  case TETRAHEDRON :
    WrongElementType(BF_Node_2V, TETRAHEDRON); break;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg::Error("BF_Node_2V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg::Error("BF_Node_2V not ready for PRISM");
    }
    break ;

  case PYRAMID :
    switch(NumEntity) {
    default : Msg::Error("BF_Node_2V not ready for PYRAMID");
    }
    break ;

  default :
    Msg::Error("Unkown type of Element in BF_Node_2V");
    break ;
  }
 
}


/* ------------------------------------------------------------------------ */
/*  B F _ G r a d N o d e _ 2                                               */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg::Error("Wrong Edge number in 'BF_GradNode_2E'")

void  BF_GradNode_2E(struct Element * Element, int NumEntity, 
		     double u, double v, double w,  double s[])
{
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
    default : WrongNumEntity;
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
    case 1   : s[0] =    0.015625 *(-2.)*u  *    (1.-v) * (1.-v) *     (1.-w)  * (1.-w) ; 
               s[1] =    0.015625 *(1.-u*u) * 2.*(v-1.) * (1.-w) *     (1.-w)          ; 
               s[2] =    0.015625 *(1.-u*u) *    (1.-v) * (1.-v) * 2.* (w-1.)          ; break ;

    case 2   : s[0] =    0.015625 *2.*(u-1.) * (1.-v*v) * (1.-w)   * (1.-w)        ; 
               s[1] =    0.015625 *(1.-u)    * (1.-u)   * (-2.)*v  * (1.-w)    * (1.-w)         ; 
	       s[2] =    0.015625 *(1.-u)    * (1.-u)   * (1.-v*v) * 2.*(w-1.)       ; break ;

    case 3   : s[0] =    0.015625 *2.*(u-1.)  * (1.-v) * (1.-v)    * (1.-w*w)        ; 
               s[1] =    0.015625 *(1.-u)     * (1.-u) * 2.*(v-1.) * (1.-w*w)        ; 
	       s[2] =    0.015625 *(1.-u)     * (1.-u) * (1.-v)    * (1.-v)    * (-2.)*w        ; break ;

    case 4   : s[0] =    0.015625 * 2.*(1.+u) * (1.-v*v) * (1.-w)   * (1.-w)        ; 
               s[1] =    0.015625 * (1.+u)    * (1.+u)   * (-2.)*v  * (1.-w)   * (1.-w)        ; 
	       s[2] =    0.015625 * (1.+u)    * (1.+u)   * (1.-v*v) * 2.*(w-1.)       ; break ;


    case 5   : s[0] =    0.015625 *2.*(1.+u)  * (1.-v)   * (1.-v)    * (1.-w*w)        ; 
               s[1] =    0.015625 *(1.+u)     * (1.+u)   * 2.*(v-1.) * (1.-w*w)       ; 
	       s[2] =    0.015625 *(1.+u)     * (1.+u)   * (1.-v)    * (1.-v)  * (-2.)*w       ; break ;
 
    case 6   : s[0] =    0.015625 *(-2.)*u    * (1.+v)    * (1.+v)   * (1.-w)  * (1.-w)       ; 
               s[1] =    0.015625 *(1.-u*u)   * 2.*(1.+v) * (1.-w)   * (1.-w)        ; 
	       s[2] =    0.015625 *(1.-u*u)   * (1.+v)    * (1.+v)   * 2.*(w-1.)       ; break ;

    case 7   : s[0] =    0.015625 *2.*(1.+u)  * (1.+v)   * (1.+v) * (1.-w*w)        ; 
               s[1] =    0.015625 *(1.+u)     * (1.+u) * 2.*(1.+v) * (1.-w*w)       ; 
	       s[2] =    0.015625 *(1.+u)     * (1.+u) * (1.+v)   * (1.+v) * (-2.)*w    ; break ;

    case 8   : s[0] =    0.015625 *2.*(u-1.)  * (1.+v)   * (1.+v) * (1.-w*w)          ; 
               s[1] =    0.015625 *(1.-u)     * (1.-u) * 2.*(1.+v) * (1.-w*w)         ; 
	       s[2] =    0.015625 *(1.-u)     * (1.-u) * (1.+v)   * (1.+v) * (-2.)*w         ; break ;

    case 9   : s[0] =    0.015625 *(-2.)*u    * (1.-v) * (1.-v)   * (1.+w) * (1.+w)         ; 
               s[1] =    0.015625 *(1.-u*u)   * 2.*(v-1.) * (1.+w) * (1.+w)        ; 
	       s[2] =    0.015625 *(1.-u*u)   * (1.-v) * (1.-v)  * 2.*(1.+w)       ; break ;

    case 10  : s[0] =    0.015625 *2.*(u-1.)  * (1.-v*v) * (1.+w) * (1.+w)         ;
               s[1] =    0.015625 *(1.-u)     * (1.-u) * (-2.)*v * (1.+w) * (1.+w)         ; 
	       s[2] =    0.015625 *(1.-u)     * (1.-u) * (1.-v*v) * 2.*(1.+w)          ; break ;

    case 11  : s[0] =    0.015625 *2.*(1.+u)  * (1.-v*v) * (1.+w) * (1.+w)         ; 
               s[1] =    0.015625 *(1.+u)     * (1.+u) * (-2.)*v * (1.+w) * (1.+w)        ; 
	       s[2] =    0.015625 *(1.+u)     * (1.+u) * (1.-v*v) * 2.*(1.+w)        ; break ;

    case 12  : s[0] =    0.015625 *(-2.)*u    * (1.+v) * (1.+v)   * (1.+w) * (1.+w)          ; 
               s[1] =    0.015625 *(1.-u*u)   * 2.*(1.+v)  * (1.+w) * (1.+w)         ; 
	       s[2] =    0.015625 *(1.-u*u)   * (1.+v) * (1.+v)   * 2.*(1.+w)         ; break ;
	       
    default : WrongNumEntity ;
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg::Error("BF_GradNode_2E not ready for PRISM");
    }
    break ;

  default :
    Msg::Error("Unkown type of Element in BF_GradNode_2E");
    break ;
  }

}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

void BF_GradNode_2F(struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[])
{
  switch (Element->Type) {

  case LINE :
    WrongElementType(Node_2F, LINE); break;
  case TRIANGLE :
    WrongElementType(Node_2F, TRIANGLE); break;
  case TETRAHEDRON :    
    WrongElementType(Node_2F, TETRAHEDRON); break;
  

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg::Error("BF_GradNode_2F not ready for QUADRANGLE");
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg::Error("BF_GradNode_2F not ready for HEXAHEDRON"); 
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg::Error("BF_GradNode_2F not ready for PRISM"); 
    }
    break ;

  default :
    Msg::Error("Unkown type of Element in BF_GradNode_2F");
    break ;
  }

  if (Element->GeoElement->NumFacets[NumEntity-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

}

/* -------- */
/*  Volume  */
/* -------- */

void BF_GradNode_2V(struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[])
{
  switch (Element->Type) {

   case LINE :
    WrongElementType(BF_Node_2V, LINE); break;
  case TRIANGLE :
    WrongElementType(BF_Node_2V, TRIANGLE); break;
  case QUADRANGLE :
    WrongElementType(BF_Node_2V, QUADRANGLE); break;
  case TETRAHEDRON :
    WrongElementType(BF_Node_2V, TETRAHEDRON); break; 


  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg::Error("BF_GradNode_2V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg::Error("BF_GradNode_2V not ready for PRISM");
    }
    break ;

  default :
    Msg::Error("Unkown type of Element in BF_GradNode_2V");
    break ;
  }

}

#undef WrongElementType
