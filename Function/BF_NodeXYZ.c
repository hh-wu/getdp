/* $Id: BF_NodeXYZ.c,v 1.1 2000-09-12 20:21:06 geuzaine Exp $ */
#include <stdio.h>

#include "BF_Function.h"

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

