#define RCSID "$Id: BF_NodeXYZ.c,v 1.4 2000-10-30 01:29:46 geuzaine Exp $"
#include <stdio.h>

#include "GetDP.h"
#include "Get_Geometry.h"
#include "BF_Function.h"

/* ------------------------------------------------------------------------ */
/*  B F _ N o d e X ,  Y ,  Z                                               */
/* ------------------------------------------------------------------------ */

void  BF_NodeX(struct Element * Element, int NumNode, 
	       double u, double v, double w,  double s[] ) {
  
  GetDP_Begin("BF_NodeX");

  s[1] = s[2] = 0. ;
  BF_Node(Element, NumNode, u, v, w, &s[0]) ;

  GetDP_End ;
}

void  BF_NodeY(struct Element * Element, int NumNode, 
	       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_NodeY");

  s[0] = s[2] = 0. ;
  BF_Node(Element, NumNode, u, v, w, &s[1]) ;

  GetDP_End ;
}

void  BF_NodeZ(struct Element * Element, int NumNode, 
	       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_NodeZ");

  s[0] = s[1] = 0. ;
  BF_Node(Element, NumNode, u, v, w, &s[2]) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ C u r l N o d e X ,  Y ,  Z                                       */
/* ------------------------------------------------------------------------ */

void  BF_CurlNodeX(struct Element * Element, int NumNode, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_CurlNodeX");

  /*
  s[0] = s[1] = s[2] = 0. ;
  */

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[1] ;
  s[1] = 0. ;

  GetDP_End ;
}

void  BF_CurlNodeY(struct Element * Element, int NumNode, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_CurlNodeY");

  /*
  s[0] = s[1] = s[2] = 0. ;
  */

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[0] ;
  s[0] = 0. ;

  GetDP_End ;
}

void  BF_CurlNodeZ(struct Element * Element, int NumNode, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlNodeZ");

  s[0] = s[1] = s[2] = 0. ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ D i v N o d e X ,  Y ,  Z                                         */
/* ------------------------------------------------------------------------ */

void  BF_DivNodeX(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_DivNodeX");

  *s = 0. ;

  GetDP_End ;
}

void  BF_DivNodeY(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_NodeY");

  *s = 0. ;

  GetDP_End ;
}

void  BF_DivNodeZ(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_DivNodeZ");

  *s = 0. ;

  GetDP_End ;
}

