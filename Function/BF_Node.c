#define RCSID "$Id: BF_Node.c,v 1.8 2001-03-03 19:21:20 geuzaine Exp $"
#include <stdio.h>

#include "GetDP.h"
#include "BF_Function.h"
#include "Data_Numeric.h" /* DSQU */


/* ------------------------------------------------------------------------ */
/*  B F _ N o d e                                                           */
/* ------------------------------------------------------------------------ */

#define WrongNumNode   Msg(ERROR, "Wrong Node number in 'BF_Node'")

void  BF_Node(struct Element * Element, int NumNode, 
	      double u, double v, double w,  double *s ) {
  double r;

  GetDP_Begin("BF_Node");

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

  default :
    Msg(ERROR, "Unknown type of Element in BF_Node");
    break;
  }

  GetDP_End ;
}

#undef WrongNumNode

/* ------------------------------------------------------------------------ */
/*  B F _ G r a d N o d e                                                   */
/* ------------------------------------------------------------------------ */

#define WrongNumNode   Msg(ERROR, "Wrong Node number in 'BF_GradNode'")

void  BF_GradNode(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_GradNode");

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
      s[0] =  0.25 ; 
      s[1] =  0.25 ;
      s[2] = -0.25 ; 
    }
    else{
      switch(NumNode) {
      case 1  : s[0] = 0.25 * ( -(1.-v) + v*w/(1.-w) ) ;            
	        s[1] = 0.25 * ( -(1.-u) + u*w/(1.-w) ) ;            
      	        s[2] = 0.25 * ( -1.     + u*v/DSQU(1.-w) ) ; break ;
      case 2  : s[0] = 0.25 * (  (1.-v) + v*w/(1.-w) ) ;            
	        s[1] = 0.25 * ( -(1.+u) + u*w/(1.-w) ) ;            
	        s[2] = 0.25 * ( -1.     + u*v/DSQU(1.-w) ) ; break ;
      case 3  : s[0] = 0.25 * (  (1.+v) + v*w/(1.-w) ) ; 
                s[1] = 0.25 * (  (1.+u) + u*w/(1.-w) ) ;
                s[2] = 0.25 * ( -1.     + u*v/DSQU(1.-w) ) ; break ;
      case 4  : s[0] = 0.25 * ( -(1.+v) + v*w/(1.-w) ) ;
                s[1] = 0.25 * (  (1.-u) + u*w/(1.-w) ) ;
                s[2] = 0.25 * ( -1.     + u*v/DSQU(1.-w) ) ; break ;
      case 5  : s[0] = 0. ; 
                s[1] = 0. ;
                s[2] = 1. ; break ;
      default : WrongNumNode ;
      }
    }
    break ;

  default :
    Msg(ERROR, "Unknown type of Element in BF_GradNode");
    break;
  }

  GetDP_End ;
}

#undef WrongNumNode

