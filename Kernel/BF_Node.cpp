// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Christophe Trophime
//

#include "ProData.h"
#include "Message.h"

#define SQU(a)     ((a)*(a))

/* ------------------------------------------------------------------------ */
/*  B F _ N o d e                                                           */
/* ------------------------------------------------------------------------ */

#define WrongNumNode   Message::Error("Wrong Node number in 'BF_Node'")

void BF_Node(struct Element * Element, int NumNode,
	     double u, double v, double w,  double *s )
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

  default :
    Message::Error("Unknown type of Element in BF_Node");
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

  default :
    Message::Error("Unknown type of Element in BF_GradNode");
    break;
  }

}

#undef WrongNumNode
