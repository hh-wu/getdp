#define RCSID "$Id: BF_NodeXYZ.c,v 1.5 2000-12-06 14:26:05 dular Exp $"
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
/*  B F _ N o d e X ,  Y ,  Z _ D . . .                                     */
/* ------------------------------------------------------------------------ */

void  BF_NodeX_D12(struct Element * Element, int NumNode, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_NodeX_D12");

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[1] ;
  s[1] = 0. ;

  GetDP_End ;
}

void  BF_NodeY_D12(struct Element * Element, int NumNode, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_NodeY_D12");

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[0] ;
  s[0] = 0. ;

  GetDP_End ;
}

void  BF_NodeZ_D12(struct Element * Element, int NumNode, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_NodeZ_D12");

  s[0] = s[1] = s[2] = 0. ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */

void  BF_NodeX_D1(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_NodeX_D1");

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[1] = s[2] = 0;

  GetDP_End ;
}

void  BF_NodeY_D1(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_NodeY_D1");

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[0] = s[2] = 0;

  GetDP_End ;
}

void  BF_NodeZ_D1(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_NodeZ_D1");

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[0] = s[1] = 0;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */

void  BF_NodeX_D2(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_NodeX_D2");

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[0] = s[1] ; s[1] = 0 ;

  GetDP_End ;
}

void  BF_NodeY_D2(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_NodeY_D2");

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[1] = s[2] ; s[2] = 0 ;

  GetDP_End ;
}

void  BF_NodeZ_D2(struct Element * Element, int NumNode, 
		  double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_NodeZ_D2");

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[0] ; s[0] = 0 ;

  GetDP_End ;
}
