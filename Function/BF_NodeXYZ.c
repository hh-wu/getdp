#define RCSID "$Id: BF_NodeXYZ.c,v 1.6 2003-03-22 03:30:09 geuzaine Exp $"
/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to "getdp@geuz.org".
 */

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
