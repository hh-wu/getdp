/* $Id: BF_GroupOfEntities.c,v 1.3 2000-09-07 18:47:22 geuzaine Exp $ */
#include <stdio.h>
#include <stdlib.h> /* abs */
#include <math.h>

#include "BF_Function.h"
#include "Get_Geometry.h"


/* ------------------------------------------------------------------------ */
/*  B F _ G r o u p O f N o d e s                                           */
/* ------------------------------------------------------------------------ */

void  BF_GroupOfNodes(struct Element * Element, int NumGroup, 
		      double u, double v, double w,  double *s ) {
  int            i ;
  double         val ;

  *s = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    BF_Node(Element, 
	    Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, &val) ;
    *s += val ;
  }
}


/* ------------------------------------------------------------------------ */
/*  B F _ G r a d G r o u p O f N o d e s                                   */
/* ------------------------------------------------------------------------ */

void  BF_GradGroupOfNodes(struct Element * Element, int NumGroup, 
			  double u, double v, double w,  double s[] ) {
  int            i ;
  double         val[3] ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    BF_GradNode(Element, 
		Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, val) ;
    s[0] += val[0] ; s[1] += val[1] ; s[2] += val[2] ;
  }
}


/* ------------------------------------------------------------------------ */
/*  B F _ G r o u p O f P e r p e n d i c u l a r E d g e s                 */
/* ------------------------------------------------------------------------ */

void  BF_GroupOfPerpendicularEdges(struct Element * Element, int NumGroup, 
				   double u, double v, double w,  double *s ) {
  int            i ;
  double         val ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    BF_Node(Element, 
	    Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, &val) ;
    s[2] += val ;
  }
}


/* ------------------------------------------------------------------------ */
/*  B F _ C u r l G r o u p O f P e r p e n d i c u l a r E d g e s         */
/* ------------------------------------------------------------------------ */

void  BF_CurlGroupOfPerpendicularEdges
  (struct Element * Element, int NumGroup, 
   double u, double v, double w,  double s[] ) {
  int            i ;
  double         val[3] ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    BF_GradNode(Element, 
		Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, val) ;
    s[0] += val[1] ; s[1] += -val[0] ;
  }
}



/* ------------------------------------------------------------------------ */
/*  B F _ G r o u p O f E d g e s                                           */
/* ------------------------------------------------------------------------ */

void  BF_GroupOfEdges(struct Element * Element, int NumGroup, 
		      double u, double v, double w,  double s[] ) {
  int            i, Num ;
  double         val[3] ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    BF_Edge(Element, 
	    abs(Num = Element->NumEntitiesInGroups[NumGroup-1][i]),
	    u, v, w, val) ;
    if (Num > 0) { s[0] += val[0] ;  s[1] += val[1] ;  s[2] += val[2] ; }
    else         { s[0] -= val[0] ;  s[1] -= val[1] ;  s[2] -= val[2] ; }
  }
}


/* ------------------------------------------------------------------------ */
/*  B F _ C u r l G r o u p O f E d g e s                                   */
/* ------------------------------------------------------------------------ */

void  BF_CurlGroupOfEdges(struct Element * Element, int NumGroup, 
			  double u, double v, double w,  double s[] ) {
  int            i, Num ;
  double         val[3] ;

  s[0] = s[1] = s[2] = 0. ;

  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {
    BF_CurlEdge(Element, 
		abs(Num = Element->NumEntitiesInGroups[NumGroup-1][i]),
		u, v, w, val) ;
    if (Num > 0) { s[0] += val[0] ;  s[1] += val[1] ;  s[2] += val[2] ; }
    else         { s[0] -= val[0] ;  s[1] -= val[1] ;  s[2] -= val[2] ; }
  }
}


/* ------------------------------------------------------------------------ */
/*  B F _ G r o u p O f N o d e s X ,  Y ,  Z                               */
/* ------------------------------------------------------------------------ */

void  BF_GroupOfNodesX(struct Element * Element, int NumGroup, 
	       double u, double v, double w,  double s[] ) {
  s[1] = s[2] = 0. ;
  BF_GroupOfNodes(Element, NumGroup, u, v, w, &s[0]) ;
}

void  BF_GroupOfNodesY(struct Element * Element, int NumGroup, 
	       double u, double v, double w,  double s[] ) {
  s[0] = s[2] = 0. ;
  BF_GroupOfNodes(Element, NumGroup, u, v, w, &s[1]) ;
}

void  BF_GroupOfNodesZ(struct Element * Element, int NumGroup, 
	       double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  BF_GroupOfNodes(Element, NumGroup, u, v, w, &s[2]) ;
}


void  BF_DxyGNodesX(struct Element * Element, int NumGroup, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  BF_GradGroupOfNodes(Element, NumGroup, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[1] ;
  s[1] = 0. ;

}

void  BF_DxyGNodesY(struct Element * Element, int NumGroup, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  BF_GradGroupOfNodes(Element, NumGroup, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[0] ;
  s[0] = 0. ;

}
