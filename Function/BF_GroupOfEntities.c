static char *rcsid = "$Id: BF_GroupOfEntities.c,v 1.5 2000-10-30 01:05:44 geuzaine Exp $" ;
#include <stdio.h>
#include <stdlib.h> /* abs */
#include <math.h>

#include "GetDP.h"
#include "BF_Function.h"
#include "Get_Geometry.h"

#define ARGS 					\
  struct Element * Element, int NumGroup, 	\
  double u, double v, double w,  double *s 


/* ------------------------------------------------------------------------ */
/*  B F _ G r o u p O f N o d e s                                           */
/* ------------------------------------------------------------------------ */

#define BF(BF_GroupOfNodes_X,BF_Node_X)						\
  int            i ;								\
  double         val ;								\
										\
  GetDP_Begin(BF_GroupOfNodes_X) ;						\
										\
  *s = 0. ;									\
  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {		\
    (BF_Node_X)									\
      (Element, Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, &val) ;	\
    *s += val ;									\
  }										\
										\
  GetDP_End 

void  BF_GroupOfNodes(ARGS)    { BF("BF_GroupOfNodes",BF_Node) ; }
void  BF_GroupOfNodes_2E(ARGS) { BF("BF_GroupOfNodes_2E",BF_Node_2E) ; }
void  BF_GroupOfNodes_2F(ARGS) { BF("BF_GroupOfNodes_2F",BF_Node_2F) ; }
void  BF_GroupOfNodes_2V(ARGS) { BF("BF_GroupOfNodes_2V",BF_Node_2V) ; }
void  BF_GroupOfNodes_3E(ARGS) { BF("BF_GroupOfNodes_3E",BF_Node_3E) ; }
void  BF_GroupOfNodes_3F(ARGS) { BF("BF_GroupOfNodes_3F",BF_Node_3F) ; }
void  BF_GroupOfNodes_3V(ARGS) { BF("BF_GroupOfNodes_3V",BF_Node_3V) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ G r a d G r o u p O f N o d e s                                   */
/* ------------------------------------------------------------------------ */

#define BF(BF_GradGroupOfNodes_X,BF_GradNode_X)					\
  int            i ;								\
  double         val[3] ;							\
										\
  GetDP_Begin(BF_GradGroupOfNodes_X) ;						\
										\
  s[0] = s[1] = s[2] = 0. ;							\
  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {		\
    (BF_GradNode_X)								\
      (Element, Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, val) ;	\
    s[0] += val[0] ; s[1] += val[1] ; s[2] += val[2] ;				\
  }										\
										\
  GetDP_End 

void  BF_GradGroupOfNodes   (ARGS) { BF("BF_GradGroupOfNodes",BF_GradNode) ; }
void  BF_GradGroupOfNodes_2E(ARGS) { BF("BF_GradGroupOfNodes_2E",BF_GradNode_2E) ; }
void  BF_GradGroupOfNodes_2F(ARGS) { BF("BF_GradGroupOfNodes_2F",BF_GradNode_2F) ; }
void  BF_GradGroupOfNodes_2V(ARGS) { BF("BF_GradGroupOfNodes_2V",BF_GradNode_2V) ; }
void  BF_GradGroupOfNodes_3E(ARGS) { BF("BF_GradGroupOfNodes_3E",BF_GradNode_3E) ; }
void  BF_GradGroupOfNodes_3F(ARGS) { BF("BF_GradGroupOfNodes_3F",BF_GradNode_3F) ; }
void  BF_GradGroupOfNodes_3V(ARGS) { BF("BF_GradGroupOfNodes_3V",BF_GradNode_3V) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ G r o u p O f P e r p e n d i c u l a r E d g e s                 */
/* ------------------------------------------------------------------------ */

#define BF(BF_GroupOfPerpendicularEdges_X,BF_Node_X)				\
  int            i ;								\
  double         val ;								\
										\
  GetDP_Begin(BF_GroupOfPerpendicularEdges_X) ;					\
										\
  s[0] = s[1] = s[2] = 0. ;							\
  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {		\
    (BF_Node_X)									\
      (Element, Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, &val) ;	\
    s[2] += val ;								\
  }										\
										\
  GetDP_End

void  BF_GroupOfPerpendicularEdges   (ARGS){ BF("BF_GroupOfPerpendicularEdges",BF_Node) ; }
void  BF_GroupOfPerpendicularEdges_2E(ARGS){ BF("BF_GroupOfPerpendicularEdges_2E",BF_Node_2E) ; }
void  BF_GroupOfPerpendicularEdges_2F(ARGS){ BF("BF_GroupOfPerpendicularEdges_2F",BF_Node_2F) ; }
void  BF_GroupOfPerpendicularEdges_2V(ARGS){ BF("BF_GroupOfPerpendicularEdges_2V",BF_Node_2V) ; }
void  BF_GroupOfPerpendicularEdges_3E(ARGS){ BF("BF_GroupOfPerpendicularEdges_3E",BF_Node_3E) ; }
void  BF_GroupOfPerpendicularEdges_3F(ARGS){ BF("BF_GroupOfPerpendicularEdges_3F",BF_Node_3F) ; }
void  BF_GroupOfPerpendicularEdges_3V(ARGS){ BF("BF_GroupOfPerpendicularEdges_3V",BF_Node_3V) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ C u r l G r o u p O f P e r p e n d i c u l a r E d g e s         */
/* ------------------------------------------------------------------------ */

#define BF(BF_CurlGroupOfPerpendicularEdges_X,BF_GradNode_X)			\
  int            i ;								\
  double         val[3] ;							\
										\
  GetDP_Begin(BF_CurlGroupOfPerpendicularEdges_X) ;				\
										\
  s[0] = s[1] = s[2] = 0. ;							\
  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {		\
    (BF_GradNode_X)								\
      (Element, Element->NumEntitiesInGroups[NumGroup-1][i], u, v, w, val) ;	\
    s[0] += val[1] ; s[1] += -val[0] ;						\
  }										\
										\
  GetDP_End

void  BF_CurlGroupOfPerpendicularEdges   (ARGS){ BF("BF_CurlGroupOfPerpendicularEdges",BF_GradNode) ; }
void  BF_CurlGroupOfPerpendicularEdges_2E(ARGS){ BF("BF_CurlGroupOfPerpendicularEdges_2E",BF_GradNode_2E) ; }
void  BF_CurlGroupOfPerpendicularEdges_2F(ARGS){ BF("BF_CurlGroupOfPerpendicularEdges_2F",BF_GradNode_2F) ; }
void  BF_CurlGroupOfPerpendicularEdges_2V(ARGS){ BF("BF_CurlGroupOfPerpendicularEdges_2V",BF_GradNode_2V) ; }
void  BF_CurlGroupOfPerpendicularEdges_3E(ARGS){ BF("BF_CurlGroupOfPerpendicularEdges_3E",BF_GradNode_3E) ; }
void  BF_CurlGroupOfPerpendicularEdges_3F(ARGS){ BF("BF_CurlGroupOfPerpendicularEdges_3F",BF_GradNode_3F) ; }
void  BF_CurlGroupOfPerpendicularEdges_3V(ARGS){ BF("BF_CurlGroupOfPerpendicularEdges_3V",BF_GradNode_3V) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ G r o u p O f E d g e s                                           */
/* ------------------------------------------------------------------------ */

#define BF(BF_GroupOfEdges_X,BF_Edge_X)						\
  int            i, Num ;							\
  double         val[3] ;							\
										\
  GetDP_Begin(BF_GroupOfEdges_X) ;						\
										\
  s[0] = s[1] = s[2] = 0. ;							\
  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {		\
    (BF_Edge_X)									\
      (Element, abs(Num = Element->NumEntitiesInGroups[NumGroup-1][i]),		\
       u, v, w, val) ;								\
    if (Num > 0) { s[0] += val[0] ;  s[1] += val[1] ;  s[2] += val[2] ; }	\
    else         { s[0] -= val[0] ;  s[1] -= val[1] ;  s[2] -= val[2] ; }	\
  }										\
										\
  GetDP_End

void  BF_GroupOfEdges   (ARGS){ BF("BF_GroupOfEdges",BF_Edge) ; }
void  BF_GroupOfEdges_2E(ARGS){ BF("BF_GroupOfEdges_2E",BF_Edge_2E) ; }
void  BF_GroupOfEdges_2F(ARGS){ BF("BF_GroupOfEdges_2F",BF_Edge_2F) ; }
void  BF_GroupOfEdges_2V(ARGS){ BF("BF_GroupOfEdges_2V",BF_Edge_2V) ; }
void  BF_GroupOfEdges_3E(ARGS){ BF("BF_GroupOfEdges",BF_Edge_3E) ; }
void  BF_GroupOfEdges_3F_a(ARGS){ BF("BF_GroupOfEdges_3F_a",BF_Edge_3F_a) ; }
void  BF_GroupOfEdges_3F_b(ARGS){ BF("BF_GroupOfEdges_3F_b", BF_Edge_3F_b) ; }
void  BF_GroupOfEdges_3F_c(ARGS){ BF("BF_GroupOfEdges_3F_c", BF_Edge_3F_c) ; }
void  BF_GroupOfEdges_3V(ARGS){ BF("BF_GroupOfEdges_3V",BF_Edge_3V) ; }
void  BF_GroupOfEdges_4E(ARGS){ BF("BF_GroupOfEdges_4E",BF_Edge_4E) ; }
void  BF_GroupOfEdges_4F(ARGS){ BF("BF_GroupOfEdges_4F",BF_Edge_4F) ; }
void  BF_GroupOfEdges_4V(ARGS){ BF("BF_GroupOfEdges_4V",BF_Edge_4V) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ C u r l G r o u p O f E d g e s                                   */
/* ------------------------------------------------------------------------ */

#define BF(BF_CurlGroupOfEdges_X,BF_CurlEdge_X)					\
  int            i, Num ;							\
  double         val[3] ;							\
										\
  GetDP_Begin(BF_CurlGroupOfEdges_X) ;						\
										\
  s[0] = s[1] = s[2] = 0. ;							\
  for (i = 0; i < Element->NbrEntitiesInGroups[NumGroup-1]; i++) {		\
    (BF_CurlEdge_X)								\
       (Element, abs(Num = Element->NumEntitiesInGroups[NumGroup-1][i]),	\
	u, v, w, val) ;								\
    if (Num > 0) { s[0] += val[0] ;  s[1] += val[1] ;  s[2] += val[2] ; }	\
    else         { s[0] -= val[0] ;  s[1] -= val[1] ;  s[2] -= val[2] ; }	\
  }										\
										\
  GetDP_End

void  BF_CurlGroupOfEdges(ARGS){ BF("BF_CurlGroupOfEdges",BF_CurlEdge) ; }
void  BF_CurlGroupOfEdges_2E(ARGS){ BF("BF_CurlGroupOfEdges_2E",BF_CurlEdge_2E) ; }
void  BF_CurlGroupOfEdges_2F(ARGS){ BF("BF_CurlGroupOfEdges_2F",BF_CurlEdge_2F) ; }
void  BF_CurlGroupOfEdges_2V(ARGS){ BF("BF_CurlGroupOfEdges_2V",BF_CurlEdge_2V) ; }
void  BF_CurlGroupOfEdges_3E(ARGS){ BF("BF_CurlGroupOfEdges_3E",BF_CurlEdge_3E) ; }
void  BF_CurlGroupOfEdges_3F_a(ARGS){ BF("BF_CurlGroupOfEdges_3F_a",BF_CurlEdge_3F_a) ; }
void  BF_CurlGroupOfEdges_3F_b(ARGS){ BF("BF_CurlGroupOfEdges_3F_b",BF_CurlEdge_3F_b) ; }
void  BF_CurlGroupOfEdges_3F_c(ARGS){ BF("BF_CurlGroupOfEdges_3F_c",BF_CurlEdge_3F_c) ; }
void  BF_CurlGroupOfEdges_3V(ARGS){ BF("BF_CurlGroupOfEdges_3V",BF_CurlEdge_3V) ; }
void  BF_CurlGroupOfEdges_4E(ARGS){ BF("BF_CurlGroupOfEdges_4E",BF_CurlEdge_4E) ; }
void  BF_CurlGroupOfEdges_4F(ARGS){ BF("BF_CurlGroupOfEdges_4F",BF_CurlEdge_4F) ; }
void  BF_CurlGroupOfEdges_4V(ARGS){ BF("BF_CurlGroupOfEdges_4V",BF_CurlEdge_4V) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ G r o u p O f N o d e s X ,  Y ,  Z                               */
/* ------------------------------------------------------------------------ */

void  BF_GroupOfNodesX(struct Element * Element, int NumGroup, 
	       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_GroupOfNodesX");

  s[1] = s[2] = 0. ;
  BF_GroupOfNodes(Element, NumGroup, u, v, w, &s[0]) ;

  GetDP_End ;
}

void  BF_GroupOfNodesY(struct Element * Element, int NumGroup, 
	       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_GroupOfNodesY");

  s[0] = s[2] = 0. ;
  BF_GroupOfNodes(Element, NumGroup, u, v, w, &s[1]) ;

  GetDP_End ;
}

void  BF_GroupOfNodesZ(struct Element * Element, int NumGroup, 
	       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_GroupOfNodesZ");

  s[0] = s[1] = 0. ;
  BF_GroupOfNodes(Element, NumGroup, u, v, w, &s[2]) ;

  GetDP_End ;
}


void  BF_DxyGNodesX(struct Element * Element, int NumGroup, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_DxyGNodesX");

  BF_GradGroupOfNodes(Element, NumGroup, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[1] ;
  s[1] = 0. ;

  GetDP_End ;
}

void  BF_DxyGNodesY(struct Element * Element, int NumGroup, 
		   double u, double v, double w,  double s[] ) {
  double su[3] ;

  GetDP_Begin("BF_DxyGNodesY");

  BF_GradGroupOfNodes(Element, NumGroup, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[0] ;
  s[0] = 0. ;

  GetDP_End ;
}
