// GetDP - Copyright (C) 1997-2019 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.
//
// Contributor(s):
//   Christophe Trophime
//

#include "ProData.h"
#include "Message.h"

#if defined(HAVE_GMSH)

#include <gmsh/BasisFactory.h>
#include <gmsh/nodalBasis.h>

static int getMshType(int Type)
{
  switch(Type){
  case POINT         : return 15;

  case LINE          : return 1;
  case TRIANGLE      : return 2;
  case QUADRANGLE    : return 3;
  case TETRAHEDRON   : return 4;
  case HEXAHEDRON    : return 5;
  case PRISM         : return 6;
  case PYRAMID       : return 7;

  case LINE_2        : return 8;
  case TRIANGLE_2    : return 9;
  case QUADRANGLE_2  : return 10;
  case TETRAHEDRON_2 : return 11;
  case HEXAHEDRON_2  : return 12;
  case PRISM_2       : return 13;
  case PYRAMID_2     : return 14;
  case QUADRANGLE_2_8N: return 16;

  case LINE_3        : return 26;
  case TRIANGLE_3    : return 21;
  case QUADRANGLE_3  : return 36;
  case TETRAHEDRON_3 : return 29;
  case HEXAHEDRON_3  : return 92;
  case PRISM_3       : return 90;
  case PYRAMID_3     : return 118;

  case LINE_4        : return 27;
  case TRIANGLE_4    : return 23;
  case QUADRANGLE_4  : return 37;
  case TETRAHEDRON_4 : return 30;
  case HEXAHEDRON_4  : return 93;
  case PRISM_4       : return 91;
  case PYRAMID_4     : return 119;

  default: return -1;
  }
}

#endif

#define SQU(a)     ((a)*(a))

/* ------------------------------------------------------------------------ */
/*  B F _ N o d e                                                           */
/* ------------------------------------------------------------------------ */

#define WrongNumNode   Message::Error("Wrong Node number in 'BF_Node'")

void BF_Node(struct Element * Element, int NumNode,
	     double u, double v, double w,  double *s)
{
  double r;

  switch (Element->Type) {
  case POINT :
    switch(NumNode) {
    case 1  : *s = 1. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case LINE :
    switch(NumNode) {
    case 1  : *s = 0.5 * (1.-u) ; break ;
    case 2  : *s = 0.5 * (1.+u) ; break ;
    default : WrongNumNode ;
    }
    break ;

  case TRIANGLE :
    switch(NumNode) {
    case 1  : *s = 1.-u-v ; break ;
    case 2  : *s =    u   ; break ;
    case 3  : *s =      v ; break ;
    default : WrongNumNode ;
    }
    break ;

  case QUADRANGLE :
    switch(NumNode) {
    case 1  : *s = 0.25 * (1.-u) * (1.-v) ; break ;
    case 2  : *s = 0.25 * (1.+u) * (1.-v) ; break ;
    case 3  : *s = 0.25 * (1.+u) * (1.+v) ; break ;
    case 4  : *s = 0.25 * (1.-u) * (1.+v) ; break ;
    default : WrongNumNode ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumNode) {
    case 1  : *s = 1.-u-v-w ; break ;
    case 2  : *s =    u     ; break ;
    case 3  : *s =      v   ; break ;
    case 4  : *s =        w ; break ;
    default : WrongNumNode ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumNode) {
    case 1  : *s = (1.-u) * (1.-v) * (1.-w) * 0.125 ; break ;
    case 2  : *s = (1.+u) * (1.-v) * (1.-w) * 0.125 ; break ;
    case 3  : *s = (1.+u) * (1.+v) * (1.-w) * 0.125 ; break ;
    case 4  : *s = (1.-u) * (1.+v) * (1.-w) * 0.125 ; break ;
    case 5  : *s = (1.-u) * (1.-v) * (1.+w) * 0.125 ; break ;
    case 6  : *s = (1.+u) * (1.-v) * (1.+w) * 0.125 ; break ;
    case 7  : *s = (1.+u) * (1.+v) * (1.+w) * 0.125 ; break ;
    case 8  : *s = (1.-u) * (1.+v) * (1.+w) * 0.125 ; break ;
    default : WrongNumNode ;
    }
    break ;

  case PRISM :
    switch(NumNode) {
    case 1  : *s = (1.-u-v) * (1.-w) * 0.5  ; break ;
    case 2  : *s =     u    * (1.-w) * 0.5  ; break ;
    case 3  : *s =       v  * (1.-w) * 0.5  ; break ;
    case 4  : *s = (1.-u-v) * (1.+w) * 0.5  ; break ;
    case 5  : *s =     u    * (1.+w) * 0.5  ; break ;
    case 6  : *s =       v  * (1.+w) * 0.5  ; break ;
    default : WrongNumNode ;
    }
    break ;

  case PYRAMID :
    if(w != 1. && NumNode != 5) r = u*v*w / (1.-w) ;
    else                        r = 0. ;
    switch(NumNode) {
    case 1  : *s = 0.25 * ((1.-u) * (1.-v) - w + r); break ;
    case 2  : *s = 0.25 * ((1.+u) * (1.-v) - w - r); break ;
    case 3  : *s = 0.25 * ((1.+u) * (1.+v) - w + r); break ;
    case 4  : *s = 0.25 * ((1.-u) * (1.+v) - w - r); break ;
    case 5  : *s = w                               ; break ;
    default : WrongNumNode ;
    }
    break ;

  case LINE_2 :
    switch(NumNode) {
    case 1  : *s = 0.5*u*(u-1.) ; break ;
    case 2  : *s = 0.5*u*(1.+u) ; break ;
    case 3  : *s = 1.-u*u       ; break ;
    default : WrongNumNode ;
    }
    break ;

  case TRIANGLE_2 :
    r = 1.-u-v ;
    switch(NumNode) {
    case 1  : *s = r*(2.*r-1.) ; break ;
    case 2  : *s = u*(2.*u-1.)    ; break ;
    case 3  : *s = v*(2.*v-1.)    ; break ;
    case 4  : *s = 4.*r*u ; break ;
    case 5  : *s = 4.*u*v ; break ;
    case 6  : *s = 4.*v*r ; break ;
    default : WrongNumNode ;
    }
    break ;

  case QUADRANGLE_2 :
    switch(NumNode) {
    case 1  : *s =  0.25 * (1.-u)  *  (1.-v)  * u * v  ; break ;
    case 2  : *s = -0.25 * (1.+u)  *  (1.-v)  * u * v  ; break ;
    case 3  : *s =  0.25 * (1.+u)  *  (1.+v)  * u * v  ; break ;
    case 4  : *s = -0.25 * (1.-u)  *  (1.+v)  * u * v  ; break ;
    case 5  : *s =  -0.5 * (1.-u*u)*  (1.-v)  * v      ; break ;
    case 6  : *s =   0.5 * (1.+u)  *  (1.-v*v)* u      ; break ;
    case 7  : *s =   0.5 * (1.-u*u)*  (1.+v)  * v      ; break ;
    case 8  : *s =  -0.5 * (1.-u)  *  (1.-v*v)* u      ; break ;
    case 9  : *s =         (1.-u*u)*  (1.-v*v)         ; break ;
    default : WrongNumNode ;
    }
    break ;

  case QUADRANGLE_2_8N :
    switch(NumNode) {
    case 1  : *s = -0.25 * (1.-u)  *  (1.-v)  * (1.+u+v)  ; break ;
    case 2  : *s = -0.25 * (1.+u)  *  (1.-v)  * (1.-u+v)  ; break ;
    case 3  : *s = -0.25 * (1.+u)  *  (1.+v)  * (1.-u-v)  ; break ;
    case 4  : *s = -0.25 * (1.-u)  *  (1.+v)  * (1.+u-v)  ; break ;
    case 5  : *s =   0.5 * (1.-u*u)*  (1.-v)              ; break ;
    case 6  : *s =   0.5 * (1.+u)  *  (1.-v*v)            ; break ;
    case 7  : *s =   0.5 * (1.-u*u)*  (1.+v)              ; break ;
    case 8  : *s =   0.5 * (1.-u)  *  (1.-v*v)            ; break ;
    default : WrongNumNode ;
    }
    break ;

  case TETRAHEDRON_2 :
    r = 1.-u-v-w ;
    switch(NumNode) {
    case 1  : *s = r*(2.*r-1.) ; break ;
    case 2  : *s = u*(2.*u-1.) ; break ;
    case 3  : *s = v*(2.*v-1.) ; break ;
    case 4  : *s = w*(2.*w-1.) ; break ;
    case 5  : *s = 4.*r*u ; break ;
    case 6  : *s = 4.*u*v ; break ;
    case 7  : *s = 4.*r*v ; break ;
    case 8  : *s = 4.*r*w ; break ;
    case 9  : *s = 4.*v*w ; break ;
    case 10 : *s = 4.*u*w ; break ;
    default : WrongNumNode ;
    }
    break ;

  default :
    {
#if defined(HAVE_GMSH)
      const nodalBasis *basis =
        BasisFactory::getNodalBasis(getMshType(Element->Type));
      if(basis)
        basis->f(u, v, w, NumNode - 1, s);
      else
#endif
        Message::Error("Unknown type of Element in BF_Node");
    }
    break;
  }

}

#undef WrongNumNode

/* ------------------------------------------------------------------------ */
/*  B F _ G r a d N o d e                                                   */
/* ------------------------------------------------------------------------ */

#define WrongNumNode   Message::Error("Wrong Node number in 'BF_GradNode'")

void BF_GradNode(struct Element * Element, int NumNode,
		 double u, double v, double w,  double s[])
{
  double r;

  switch (Element->Type) {
  case POINT :
    switch(NumNode) {
    case 1  : s[0] =  0. ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case LINE :
    switch(NumNode) {
    case 1  : s[0] = -0.5 ; s[1] = 0. ; s[2] = 0. ; break ;
    case 2  : s[0] =  0.5 ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case TRIANGLE :
    switch(NumNode) {
    case 1  : s[0] = -1. ; s[1] = -1. ; s[2] =  0. ; break ;
    case 2  : s[0] =  1. ; s[1] =  0. ; s[2] =  0. ; break ;
    case 3  : s[0] =  0. ; s[1] =  1. ; s[2] =  0. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case QUADRANGLE :
    switch(NumNode) {
    case 1  : s[0] = -0.25 * (1.-v) ; s[1] = -0.25 * (1.-u) ; s[2] = 0. ; break ;
    case 2  : s[0] =  0.25 * (1.-v) ; s[1] = -0.25 * (1.+u) ; s[2] = 0. ; break ;
    case 3  : s[0] =  0.25 * (1.+v) ; s[1] =  0.25 * (1.+u) ; s[2] = 0. ; break ;
    case 4  : s[0] = -0.25 * (1.+v) ; s[1] =  0.25 * (1.-u) ; s[2] = 0. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumNode) {
    case 1  : s[0] = -1. ; s[1] = -1. ; s[2] = -1. ; break ;
    case 2  : s[0] =  1. ; s[1] =  0. ; s[2] =  0. ; break ;
    case 3  : s[0] =  0. ; s[1] =  1. ; s[2] =  0. ; break ;
    case 4  : s[0] =  0. ; s[1] =  0. ; s[2] =  1. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumNode) {
    case 1  : s[0] = -0.125 * (1.-v) * (1.-w) ;
              s[1] = -0.125 * (1.-u) * (1.-w) ;
              s[2] = -0.125 * (1.-u) * (1.-v) ; break ;
    case 2  : s[0] =  0.125 * (1.-v) * (1.-w) ;
              s[1] = -0.125 * (1.+u) * (1.-w) ;
              s[2] = -0.125 * (1.+u) * (1.-v) ; break ;
    case 3  : s[0] =  0.125 * (1.+v) * (1.-w) ;
              s[1] =  0.125 * (1.+u) * (1.-w) ;
              s[2] = -0.125 * (1.+u) * (1.+v) ; break ;
    case 4  : s[0] = -0.125 * (1.+v) * (1.-w) ;
              s[1] =  0.125 * (1.-u) * (1.-w) ;
              s[2] = -0.125 * (1.-u) * (1.+v) ; break ;
    case 5  : s[0] = -0.125 * (1.-v) * (1.+w) ;
              s[1] = -0.125 * (1.-u) * (1.+w) ;
              s[2] =  0.125 * (1.-u) * (1.-v) ; break ;
    case 6  : s[0] =  0.125 * (1.-v) * (1.+w) ;
              s[1] = -0.125 * (1.+u) * (1.+w) ;
              s[2] =  0.125 * (1.+u) * (1.-v) ; break ;
    case 7  : s[0] =  0.125 * (1.+v) * (1.+w) ;
              s[1] =  0.125 * (1.+u) * (1.+w) ;
              s[2] =  0.125 * (1.+u) * (1.+v) ; break ;
    case 8  : s[0] = -0.125 * (1.+v) * (1.+w) ;
              s[1] =  0.125 * (1.-u) * (1.+w) ;
              s[2] =  0.125 * (1.-u) * (1.+v) ; break ;
    default : WrongNumNode ;
    }
    break ;

  case PRISM :
    switch(NumNode) {
    case 1  : s[0] = -0.5 * (1.-w)   ;
              s[1] = -0.5 * (1.-w)   ;
              s[2] = -0.5 * (1.-u-v) ; break ;
    case 2  : s[0] =  0.5 * (1.-w)   ;
              s[1] =  0.             ;
              s[2] = -0.5 * u        ; break ;
    case 3  : s[0] =  0.             ;
              s[1] =  0.5 * (1.-w)   ;
              s[2] = -0.5 * v        ; break ;
    case 4  : s[0] = -0.5 * (1.+w)   ;
              s[1] = -0.5 * (1.+w)   ;
              s[2] =  0.5 * (1.-u-v) ; break ;
    case 5  : s[0] =  0.5 * (1.+w)   ;
              s[1] =  0.             ;
              s[2] =  0.5 * u        ; break ;
    case 6  : s[0] =  0.             ;
              s[1] =  0.5 * (1.+w)   ;
              s[2] =  0.5 * v        ; break ;
    default : WrongNumNode ;
    }
    break ;

  case PYRAMID :
    if(w == 1. && NumNode != 5) {
      //When w = 1 => u=v=0
      switch(NumNode) {
      case 1 : s[0] = -0.25 ;
	       s[1] = -0.25 ;
	       s[2] = -0.25 ; break ;
      case 2 : s[0] =  0.25 ;
	       s[1] = -0.25 ;
	       s[2] = -0.25 ; break ;
      case 3 : s[0] =  0.25 ;
               s[1] =  0.25 ;
               s[2] = -0.25 ; break ;
      case 4 : s[0] = -0.25 ;
               s[1] =  0.25 ;
               s[2] = -0.25 ; break ;
      case 5 : s[0] =  0. ;
	       s[1] =  0. ;
	       s[2] =  1. ; break ;
      default : WrongNumNode ;
      }
    }
    else{
      switch(NumNode) {
      case 1  : s[0] = 0.25 * ( v/(1 - w) - 1) ;
                s[1] = 0.25 * ( u/(1 - w) - 1) ;
      	        s[2] = 0.25 * ( u*v/SQU(1 - w) - 1) ; break ;
      case 2  : s[0] = 0.25 * (-v/(1 - w) + 1) ;
                s[1] = 0.25 * (-u/(1 - w) - 1) ;
	        s[2] = 0.25 * (-u*v/SQU(1 - w) - 1) ; break ;
      case 3  : s[0] = 0.25 * ( v/(1 - w) + 1) ;
                s[1] = 0.25 * ( u/(1 - w) + 1) ;
                s[2] = 0.25 * ( u*v/SQU(1 - w) - 1) ; break ;
      case 4  : s[0] = 0.25 * (-v/(1 - w) - 1) ;
                s[1] = 0.25 * (-u/(1 - w) + 1) ;
                s[2] = 0.25 * (-u*v/SQU(1 - w) - 1) ; break ;
      case 5  : s[0] = 0. ;
                s[1] = 0. ;
                s[2] = 1. ; break ;
      default : WrongNumNode ;
      }
    }
    break ;

  case LINE_2 :
    switch(NumNode) {
    case 1  : s[0] = -0.5+u ; s[1] = 0. ; s[2] =  0. ; break ;
    case 2  : s[0] =  0.5+u ; s[1] = 0. ; s[2] =  0. ; break ;
    case 3  : s[0] = -2.*u  ; s[1] = 0. ; s[2] =  0. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case TRIANGLE_2 :
    r = 1.-u-v ;
    switch(NumNode) {
    case 1  : s[0] = 1.-4.*r ; s[1] = 1.-4.*r ; s[2] =  0. ; break ;
    case 2  : s[0] =-1.+4.*u ; s[1] = 0.      ; s[2] =  0. ; break ;
    case 3  : s[0] = 0.      ; s[1] =-1.+4.*v ; s[2] =  0. ; break ;
    case 4  : s[0] = 4.*(r-u); s[1] = -4.*u   ; s[2] =  0. ; break ;
    case 5  : s[0] = 4.*v    ; s[1] =  4.*u   ; s[2] =  0. ; break ;
    case 6  : s[0] =-4.*v    ; s[1] =  4.*(r-v); s[2] =  0. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case QUADRANGLE_2 :
    switch(NumNode) {
    case 1  : s[0] =  0.25 * (1.-2.*u) * (1.-v)  * v ; s[1] =  0.25 * (1.-u)   * (1.-2.*v) * u ; s[2] = 0. ; break ;
    case 2  : s[0] = -0.25 * (1.+2.*u) * (1.-v)  * v ; s[1] = -0.25 * (1.+u)   * (1.-2.*v) * u ; s[2] = 0. ; break ;
    case 3  : s[0] =  0.25 * (1.+2.*u) * (1.+v)  * v ; s[1] =  0.25 * (1.+u)   * (1.+2.*v) * u ; s[2] = 0. ; break ;
    case 4  : s[0] = -0.25 * (1.-2.*u) * (1.+v)  * v ; s[1] = -0.25 * (1.-u)   * (1.+2.*v) * u ; s[2] = 0. ; break ;
    case 5  : s[0] =         (1.-v)   *   u      * v ; s[1] =  -0.5 * (1.-u*u) * (1.-2.*v)     ; s[2] = 0. ; break ;
    case 6  : s[0] =   0.5 * (1.+2.*u) * (1.-v*v)    ; s[1] =        -(1.+u)   *  u        * v ; s[2] = 0. ; break ;
    case 7  : s[0] =        -(1.+v)   *   u      * v ; s[1] =   0.5 * (1.-u*u) * (1.+2.*v)     ; s[2] = 0. ; break ;
    case 8  : s[0] =  -0.5 * (1.-2.*u) * (1.-v*v)    ; s[1] =         (1.-u)   *  u        * v ; s[2] = 0. ; break ;
    case 9  : s[0] =   -2. * (1.-v*v) *   u          ; s[1] =   -2. * (1.-u*u) *  v            ; s[2] = 0. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case QUADRANGLE_2_8N :
    switch(NumNode) {
    case 1  : s[0] =   0.25 * (1.-v) * (2.*u+v) ; s[1] =  0.25 * (1.-u)  * (u+2.*v) ; s[2] = 0. ; break ;
    case 2  : s[0] =   0.25 * (1.-v) * (2.*u-v) ; s[1] = -0.25 * (1.+u)  * (u-2.*v) ; s[2] = 0. ; break ;
    case 3  : s[0] =   0.25 * (1.+v) * (2.*u+v) ; s[1] =  0.25 * (1.+u)  * (u+2.*v) ; s[2] = 0. ; break ;
    case 4  : s[0] =   0.25 * (1.+v) * (2.*u-v) ; s[1] = -0.25 * (1.-u)  * (u-2.*v) ; s[2] = 0. ; break ;
    case 5  : s[0] =         -(1.-v) *  u       ; s[1] =  -0.5 * (1.-u*u)           ; s[2] = 0. ; break ;
    case 6  : s[0] =    0.5 * (1.-v*v)          ; s[1] =        -(1.+u)  *  v       ; s[2] = 0. ; break ;
    case 7  : s[0] =         -(1.+v) *  u       ; s[1] =   0.5 * (1.-u*u)           ; s[2] = 0. ; break ;
    case 8  : s[0] =   -0.5 * (1.-v*v)          ; s[1] =        -(1.-u)  *  v       ; s[2] = 0. ; break ;
    default : WrongNumNode ;
    }
    break ;

  case TETRAHEDRON_2 :
    r = 1.-u-v-w ;
    switch(NumNode) {
    case 1  : s[0] = -(4.*r-1) ; s[1] = -(4.*r-1) ; s[2] = -(4.*r-1) ; break ;
    case 2  : s[0] = (4.*u-1)  ; s[1] = 0         ; s[2] = 0         ; break ;
    case 3  : s[0] = 0         ; s[1] = (4.*v-1)  ; s[2] = 0         ; break ;
    case 4  : s[0] = 0         ; s[1] = 0         ; s[2] = (4.*w-1)  ; break ;
    case 5  : s[0] = 4.*(r-u)  ; s[1] = -4.*u     ; s[2] = -4.*u     ; break ;
    case 6  : s[0] = 4.*v      ; s[1] = 4.*u      ; s[2] = 0         ; break ;
    case 7  : s[0] = -4.*v     ; s[1] = 4.*(r-v)  ; s[2] = -4.*v     ; break ;
    case 8  : s[0] = -4.*w     ; s[1] = -4.*w     ; s[2] = 4.*(r-w)  ; break ;
    case 9  : s[0] = 0         ; s[1] = 4.*w      ; s[2] = 4.*v      ; break ;
    case 10 : s[0] = 4.*w      ; s[1] = 0         ; s[2] = 4.*u      ; break ;
    default : WrongNumNode ;
    }
    break ;

  default :
    {
#if defined(HAVE_GMSH)
      const nodalBasis *basis =
        BasisFactory::getNodalBasis(getMshType(Element->Type));
      if(basis)
        basis->df(u, v, w, NumNode - 1, s);
      else
#endif
        Message::Error("Unknown type of Element in BF_GradNode");
    }
    break;
  }

}

#undef WrongNumNode
