/* $Id: HBF_GroupOfEntities_2.c,v 1.2 2000-09-07 18:47:23 geuzaine Exp $ */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "BF_Function.h"


/* ------------------------------------------------------------------------ */
/*  H B F _ G r o u p O f N o d e s _ 2 E                                   */
/* ------------------------------------------------------------------------ */

void  HBF_GroupOfNodes_2E(struct Element * Element, int NumGroup, 
			  double u, double v, double w,  double *s ) {
  int            i ;
  double         val ;

  *s = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    HBF_Node_2E(Element, 
		Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, &val) ;
    *s += val ;
  }
}


/* ------------------------------------------------------------------------ */
/*  H B F _ G r o u p O f N o d e s _ 2 F                                   */
/* ------------------------------------------------------------------------ */

void  HBF_GroupOfNodes_2F(struct Element * Element, int NumGroup, 
			  double u, double v, double w,  double *s ) {
  int            i ;
  double         val ;

  *s = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    HBF_Node_2F(Element, 
		Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, &val) ;
    *s += val ;
  }
}


/* ------------------------------------------------------------------------ */
/*  H B F _ G r o u p O f N o d e s _ 2 V                                   */
/* ------------------------------------------------------------------------ */

void  HBF_GroupOfNodes_2V(struct Element * Element, int NumGroup, 
			  double u, double v, double w,  double *s ) {
  int            i ;
  double         val ;

  *s = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    HBF_Node_2V(Element, 
		Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, &val) ;
    *s += val ;
  }
}


/* ------------------------------------------------------------------------ */
/*  H B F _ G r a d G r o u p O f N o d e s _ 2 E                           */
/* ------------------------------------------------------------------------ */

void  HBF_GradGroupOfNodes_2E(struct Element * Element, int NumGroup, 
			      double u, double v, double w,  double s[] ) {
  int            i ;
  double         val[3] ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    HBF_GradNode_2E(Element, 
		    Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, val) ;
    s[0] += val[0] ; s[1] += val[1] ; s[2] += val[2] ;
  }
}

/* ------------------------------------------------------------------------ */
/*  H B F _ G r a d G r o u p O f N o d e s _ 2 F                           */
/* ------------------------------------------------------------------------ */

void  HBF_GradGroupOfNodes_2F(struct Element * Element, int NumGroup, 
			      double u, double v, double w,  double s[] ) {
  int            i ;
  double         val[3] ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    HBF_GradNode_2F(Element, 
		    Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, val) ;
    s[0] += val[0] ; s[1] += val[1] ; s[2] += val[2] ;
  }
}

/* ------------------------------------------------------------------------ */
/*  H B F _ G r a d G r o u p O f N o d e s _ 2 V                           */
/* ------------------------------------------------------------------------ */

void  HBF_GradGroupOfNodes_2V(struct Element * Element, int NumGroup, 
			      double u, double v, double w,  double s[] ) {
  int            i ;
  double         val[3] ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    HBF_GradNode_2V(Element, 
		    Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, val) ;
    s[0] += val[0] ; s[1] += val[1] ; s[2] += val[2] ;
  }
}


/* ------------------------------------------------------------------------ */
/*  H B F _ G r o u p O f E d g e s _ 2 E                                   */
/* ------------------------------------------------------------------------ */

void  HBF_GroupOfEdges_2E(struct Element * Element, int NumGroup, 
			  double u, double v, double w,  double s[] ) {
  int            i, Num ;
  double         val[3] ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    HBF_Edge_2E(Element, 
		abs(Num = Element->NumEntitiesInGroups[NumGroup-1][i]),
		u, v, w, val) ;
    if (Num > 0) { s[0] += val[0] ;  s[1] += val[1] ;  s[2] += val[2] ; }
    else         { s[0] -= val[0] ;  s[1] -= val[1] ;  s[2] -= val[2] ; }
  }
}


/* ------------------------------------------------------------------------ */
/*  H B F _ C u r l G r o u p O f E d g e s _ 2 E                           */
/* ------------------------------------------------------------------------ */

void  HBF_CurlGroupOfEdges_2E(struct Element * Element, int NumGroup, 
			      double u, double v, double w,  double s[] ) {
  int            i, Num ;
  double         val[3] ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    HBF_CurlEdge_2E(Element, 
		    abs(Num = Element->NumEntitiesInGroups[NumGroup-1][i]),
		    u, v, w, val) ;
    if (Num > 0) { s[0] += val[0] ;  s[1] += val[1] ;  s[2] += val[2] ; }
    else         { s[0] -= val[0] ;  s[1] -= val[1] ;  s[2] -= val[2] ; }
  }
}
