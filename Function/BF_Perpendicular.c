/* $Id: BF_Perpendicular.c,v 1.1 2000-09-12 20:21:06 geuzaine Exp $ */
#include <stdio.h>

#include "BF_Function.h"

#define ARGS 					\
  struct Element * Element, int NumEntity, 	\
  double u, double v, double w,  double *s 

/* ------------------------------------------------------------------------ */
/*  B F _ P e r p e n d i c u l a r E d g e                                 */
/* ------------------------------------------------------------------------ */

#define BF_PerpendicularEdge_X(BF_Node_X)		\
  s[0] = s[1] = 0. ;					\
  (BF_Node_X)(Element, NumEntity, u, v, w, &s[2]) ;

void  BF_PerpendicularEdge(ARGS) { BF_PerpendicularEdge_X(BF_Node) ; }
void  BF_PerpendicularEdge_2E(ARGS) { BF_PerpendicularEdge_X(BF_Node_2E) ; }
void  BF_PerpendicularEdge_2F(ARGS) { BF_PerpendicularEdge_X(BF_Node_2F) ; }
void  BF_PerpendicularEdge_2V(ARGS) { BF_PerpendicularEdge_X(BF_Node_2V) ; }
void  BF_PerpendicularEdge_3E(ARGS) { BF_PerpendicularEdge_X(BF_Node_2E) ; }
void  BF_PerpendicularEdge_3F(ARGS) { BF_PerpendicularEdge_X(BF_Node_2F) ; }
void  BF_PerpendicularEdge_3V(ARGS) { BF_PerpendicularEdge_X(BF_Node_2V) ; }

#undef BF_PerpendicularEdge_X

/* ------------------------------------------------------------------------ */
/*  B F _ C u r l P e r p e n d i c u l a r E d g e                         */
/* ------------------------------------------------------------------------ */

#define BF_CurlPerpendicularEdge_X(BF_GradNode_X)	\
  double ss ;						\
  (BF_GradNode_X)(Element, NumEntity, u, v, w, s) ;	\
  ss = s[0] ;  s[0] = s[1] ;  s[1] = -ss ;

void  BF_CurlPerpendicularEdge(ARGS) { BF_CurlPerpendicularEdge_X(BF_GradNode) ; }
void  BF_CurlPerpendicularEdge_2E(ARGS) { BF_CurlPerpendicularEdge_X(BF_GradNode_2E) ; }
void  BF_CurlPerpendicularEdge_2F(ARGS) { BF_CurlPerpendicularEdge_X(BF_GradNode_2F) ; }
void  BF_CurlPerpendicularEdge_2V(ARGS) { BF_CurlPerpendicularEdge_X(BF_GradNode_2V) ; }
void  BF_CurlPerpendicularEdge_3E(ARGS) { BF_CurlPerpendicularEdge_X(BF_GradNode_3E) ; }
void  BF_CurlPerpendicularEdge_3F(ARGS) { BF_CurlPerpendicularEdge_X(BF_GradNode_3F) ; }
void  BF_CurlPerpendicularEdge_3V(ARGS) { BF_CurlPerpendicularEdge_X(BF_GradNode_3V) ; }

#undef BF_CurlPerpendicularEdge_X

/* ------------------------------------------------------------------------ */
/*  B F _ P e r p e n d i c u l a r F a c e t                               */
/* ------------------------------------------------------------------------ */

#define BF_PerpendicularFacet_X(BF_Edge_X)	\
  double ss ;					\
  (BF_Edge_X)(Element, NumEntity, u, v, w, s) ;	\
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;

void  BF_PerpendicularFacet(ARGS) { BF_PerpendicularFacet_X(BF_Edge) ; }
void  BF_PerpendicularFacet_2E(ARGS) { BF_PerpendicularFacet_X(BF_Edge_2E) ; }
void  BF_PerpendicularFacet_2F(ARGS) { BF_PerpendicularFacet_X(BF_Edge_2F) ; }
void  BF_PerpendicularFacet_2V(ARGS) { BF_PerpendicularFacet_X(BF_Edge_2V) ; }
void  BF_PerpendicularFacet_3E(ARGS) { BF_PerpendicularFacet_X(BF_Edge_3E) ; }
void  BF_PerpendicularFacet_3F_a(ARGS) { BF_PerpendicularFacet_X(BF_Edge_3F_a) ; }
void  BF_PerpendicularFacet_3F_b(ARGS) { BF_PerpendicularFacet_X(BF_Edge_3F_b) ; }
void  BF_PerpendicularFacet_3F_c(ARGS) { BF_PerpendicularFacet_X(BF_Edge_3F_c) ; }
void  BF_PerpendicularFacet_3V(ARGS) { BF_PerpendicularFacet_X(BF_Edge_3V) ; }
void  BF_PerpendicularFacet_4E(ARGS) { BF_PerpendicularFacet_X(BF_Edge_4E) ; }
void  BF_PerpendicularFacet_4F(ARGS) { BF_PerpendicularFacet_X(BF_Edge_4F) ; }
void  BF_PerpendicularFacet_4V(ARGS) { BF_PerpendicularFacet_X(BF_Edge_4V) ; }

#undef BF_PerpendicularFacet_X

/* ------------------------------------------------------------------------ */
/*  B F _ D i v P e r p e n d i c u l a r F a c e t                         */
/* ------------------------------------------------------------------------ */

#define BF_DivPerpendicularFacet_X(BF_CurlEdge_X)	\
  (BF_CurlEdge_X)(Element, NumEntity, u, v, w, s) ;	\
  s[0] = -s[2] ; s[2] = 0. ;

void  BF_DivPerpendicularFacet(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge) ; }
void  BF_DivPerpendicularFacet_2E(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_2E) ; }
void  BF_DivPerpendicularFacet_2F(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_2F) ; }
void  BF_DivPerpendicularFacet_2V(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_2V) ; }
void  BF_DivPerpendicularFacet_3E(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_3E) ; }
void  BF_DivPerpendicularFacet_3F_a(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_3F_a) ; }
void  BF_DivPerpendicularFacet_3F_b(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_3F_b) ; }
void  BF_DivPerpendicularFacet_3F_c(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_3F_c) ; }
void  BF_DivPerpendicularFacet_3V(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_3V) ; }
void  BF_DivPerpendicularFacet_4E(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_4E) ; }
void  BF_DivPerpendicularFacet_4F(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_4F) ; }
void  BF_DivPerpendicularFacet_4V(ARGS){ BF_DivPerpendicularFacet_X(BF_CurlEdge_4V) ; }

#undef BF_DivPerpendicularFacet_X



#undef ARGS
