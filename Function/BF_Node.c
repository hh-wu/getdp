/* $Id: BF_Node.c,v 1.3 2000-09-07 18:47:22 geuzaine Exp $ */
#include <stdio.h>

#include "BF_Function.h"
#include "Data_Numeric.h" /* DSQU */
#include "Get_Geometry.h"


/* ------------------------------------------------------------------------ */
/*  B F _ N o d e                                                           */
/* ------------------------------------------------------------------------ */

#define WrongNumNode   Msg(ERROR, "Wrong Node Number in 'BF_Node'")

void  BF_Node(struct Element * Element, int NumNode, 
	      double u, double v, double w,  double *s ) {
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

  default :
    Msg(ERROR, "Unknown Element Type in BF_Node");
    break;
  }

}

#undef WrongNumNode

/* ------------------------------------------------------------------------ */
/*  B F _ G r a d N o d e                                                   */
/* ------------------------------------------------------------------------ */

#define WrongNumNode   Msg(ERROR, "Wrong Node Number in 'BF_GradNode'")

void  BF_GradNode(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {

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
    Msg(ERROR, "Unknown Element Type in BF_GradNode");
    break;
  }

}

#undef WrongNumNode

/* ------------------------------------------------------------------------ */
/*  B F _ P e r p e n d i c u l a r E d g e                                 */
/* ------------------------------------------------------------------------ */

void  BF_PerpendicularEdge    (struct Element * Element, int NumNode, 
			       double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  BF_Node(Element, NumNode, u, v, w, &s[2]) ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ C u r l P e r p e n d i c u l a r E d g e                         */
/* ------------------------------------------------------------------------ */

void  BF_CurlPerpendicularEdge(struct Element * Element, int NumNode, 
			       double u, double v, double w,  double s[] ) {
  double ss ;

  BF_GradNode(Element, NumNode, u, v, w, s) ;
  ss = s[0] ;  s[0] = s[1] ;  s[1] = -ss ;
}



/* ------------------------------------------------------------------------ */
/*  B F _ N o d e X ,  Y ,  Z                                               */
/* ------------------------------------------------------------------------ */

void  BF_NodeX(struct Element * Element, int NumNode, 
	       double u, double v, double w,  double s[] ) {
  s[1] = s[2] = 0. ;
  BF_Node(Element, NumNode, u, v, w, &s[0]) ;
}

void  BF_NodeY(struct Element * Element, int NumNode, 
	       double u, double v, double w,  double s[] ) {
  s[0] = s[2] = 0. ;
  BF_Node(Element, NumNode, u, v, w, &s[1]) ;
}

void  BF_NodeZ(struct Element * Element, int NumNode, 
	       double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  BF_Node(Element, NumNode, u, v, w, &s[2]) ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ C u r l N o d e X ,  Y ,  Z                                       */
/* ------------------------------------------------------------------------ */

void  BF_CurlNodeX(struct Element * Element, int NumNode, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  /*
  s[0] = s[1] = s[2] = 0. ;
  */

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[1] ;
  s[1] = 0. ;
}

void  BF_CurlNodeY(struct Element * Element, int NumNode, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  /*
  s[0] = s[1] = s[2] = 0. ;
  */

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[0] ;
  s[0] = 0. ;
}

void  BF_CurlNodeZ(struct Element * Element, int NumNode, 
		   double u, double v, double w,  double s[] ) {
  s[0] = s[1] = s[2] = 0. ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ D i v N o d e X ,  Y ,  Z                                         */
/* ------------------------------------------------------------------------ */

void  BF_DivNodeX(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {
  *s = 0. ;
}

void  BF_DivNodeY(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {
  *s = 0. ;
}

void  BF_DivNodeZ(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {
  *s = 0. ;
}



/* ------------------------------------------------------------------------ */
/*  B F _ Z e r o                                                           */
/* ------------------------------------------------------------------------ */

void  BF_Zero(struct Element * Element, int Num,
	      double u, double v, double w,  double *s ) {

  s[0] = s[1] = s[2] = 0. ;
}

void  BF_One(struct Element * Element, int Num,
	     double u, double v, double w,  double *s ) {

  s[0] = 1. ; s[1] = s[2] = 0. ;
}
