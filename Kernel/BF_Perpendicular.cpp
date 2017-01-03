// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "ProData.h"
#include "BF.h"

#define ARGS 					\
  struct Element * Element, int NumEntity, 	\
  double u, double v, double w,  double *s 

/* ------------------------------------------------------------------------ */
/*  B F _ W i r e                                                           */
/* ------------------------------------------------------------------------ */
#define BF(BF_Wire_X,BF_Node_X)		\
  s[1] = s[2] = 0. ;					\
  (BF_Node_X)(Element, NumEntity, u, v, w, &s[0]) ;

void BF_Wire(ARGS) { BF("BF_Wire",BF_Node) ; }
#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ D i v W i r e                                                           */
/* ------------------------------------------------------------------------ */
#define BF(BF_DivWire_X,BF_GradNode_X)		       \
  (BF_GradNode_X)(Element, NumEntity, u, v, w, &s[0]) ;

void BF_DivWire(ARGS) { BF("BF_DivWire",BF_GradNode) ; }
#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ P e r p e n d i c u l a r E d g e                                 */
/* ------------------------------------------------------------------------ */

#define BF(BF_PerpendicularEdge_X,BF_Node_X)		\
  s[0] = s[1] = 0. ;					\
  (BF_Node_X)(Element, NumEntity, u, v, w, &s[2]) ;

void BF_PerpendicularEdge(ARGS) { BF("BF_PerpendicularEdge",BF_Node) ; }
void BF_PerpendicularEdge_2E(ARGS) { BF("BF_PerpendicularEdge_2E",BF_Node_2E) ; }
void BF_PerpendicularEdge_2F(ARGS) { BF("BF_PerpendicularEdge_2F",BF_Node_2F) ; }
void BF_PerpendicularEdge_2V(ARGS) { BF("BF_PerpendicularEdge_2V",BF_Node_2V) ; }
void BF_PerpendicularEdge_3E(ARGS) { BF("BF_PerpendicularEdge_3E",BF_Node_3E) ; }
void BF_PerpendicularEdge_3F(ARGS) { BF("BF_PerpendicularEdge_3F",BF_Node_3F) ; }
void BF_PerpendicularEdge_3V(ARGS) { BF("BF_PerpendicularEdge_3V",BF_Node_3V) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ C u r l P e r p e n d i c u l a r E d g e                         */
/* ------------------------------------------------------------------------ */

#define BF(BF_CurlPerpendicularEdge_X,BF_GradNode_X)	\
  double ss ;						\
  (BF_GradNode_X)(Element, NumEntity, u, v, w, s) ;	\
  ss = s[0] ;  s[0] = s[1] ;  s[1] = -ss ;

void BF_CurlPerpendicularEdge(ARGS) { BF("BF_CurlPerpendicularEdge",BF_GradNode) ; }
void BF_CurlPerpendicularEdge_2E(ARGS) { BF("BF_CurlPerpendicularEdge_2E",BF_GradNode_2E) ; }
void BF_CurlPerpendicularEdge_2F(ARGS) { BF("BF_CurlPerpendicularEdge_2F",BF_GradNode_2F) ; }
void BF_CurlPerpendicularEdge_2V(ARGS) { BF("BF_CurlPerpendicularEdge_2V",BF_GradNode_2V) ; }
void BF_CurlPerpendicularEdge_3E(ARGS) { BF("BF_CurlPerpendicularEdge_3E",BF_GradNode_3E) ; }
void BF_CurlPerpendicularEdge_3F(ARGS) { BF("BF_CurlPerpendicularEdge_3F",BF_GradNode_3F) ; }
void BF_CurlPerpendicularEdge_3V(ARGS) { BF("BF_CurlPerpendicularEdge_3V",BF_GradNode_3V) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ P e r p e n d i c u l a r F a c e t                               */
/* ------------------------------------------------------------------------ */

#define BF(BF_PerpendicularFacet_X,BF_Edge_X)	\
  double ss ;					\
  (BF_Edge_X)(Element, NumEntity, u, v, w, s) ;	\
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;

void BF_PerpendicularFacet(ARGS) { BF("BF_PerpendicularFacet",BF_Edge) ; }
void BF_PerpendicularFacet_2E(ARGS) { BF("BF_PerpendicularFacet_2E",BF_Edge_2E) ; }
void BF_PerpendicularFacet_2F(ARGS) { BF("BF_PerpendicularFacet_2F",BF_Edge_2F) ; }
void BF_PerpendicularFacet_2V(ARGS) { BF("BF_PerpendicularFacet_2V",BF_Edge_2V) ; }
void BF_PerpendicularFacet_3E(ARGS) { BF("BF_PerpendicularFacet_3E",BF_Edge_3E) ; }
void BF_PerpendicularFacet_3F_a(ARGS) { BF("BF_PerpendicularFacet_3F_a",BF_Edge_3F_a) ; }
void BF_PerpendicularFacet_3F_b(ARGS) { BF("BF_PerpendicularFacet_3F_b",BF_Edge_3F_b) ; }
void BF_PerpendicularFacet_3F_c(ARGS) { BF("BF_PerpendicularFacet_3F_c",BF_Edge_3F_c) ; }
void BF_PerpendicularFacet_3V(ARGS) { BF("BF_PerpendicularFacet_3V",BF_Edge_3V) ; }
void BF_PerpendicularFacet_4E(ARGS) { BF("BF_PerpendicularFacet_4E",BF_Edge_4E) ; }
void BF_PerpendicularFacet_4F(ARGS) { BF("BF_PerpendicularFacet_4F",BF_Edge_4F) ; }
void BF_PerpendicularFacet_4V(ARGS) { BF("BF_PerpendicularFacet_4V",BF_Edge_4V) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ D i v P e r p e n d i c u l a r F a c e t                         */
/* ------------------------------------------------------------------------ */

#define BF(BF_DivPerpendicularFacet_X,BF_CurlEdge_X)	\
  (BF_CurlEdge_X)(Element, NumEntity, u, v, w, s) ;	\
  s[0] = -s[2] ; s[2] = 0. ;

void BF_DivPerpendicularFacet(ARGS){ BF("BF_DivPerpendicularFacet",BF_CurlEdge) ; }
void BF_DivPerpendicularFacet_2E(ARGS){ BF("BF_DivPerpendicularFacet_2E",BF_CurlEdge_2E) ; }
void BF_DivPerpendicularFacet_2F(ARGS){ BF("BF_DivPerpendicularFacet_2F",BF_CurlEdge_2F) ; }
void BF_DivPerpendicularFacet_2V(ARGS){ BF("BF_DivPerpendicularFacet_2V",BF_CurlEdge_2V) ; }
void BF_DivPerpendicularFacet_3E(ARGS){ BF("BF_DivPerpendicularFacet_3E",BF_CurlEdge_3E) ; }
void BF_DivPerpendicularFacet_3F_a(ARGS){ BF("BF_DivPerpendicularFacet_3F_a",BF_CurlEdge_3F_a) ; }
void BF_DivPerpendicularFacet_3F_b(ARGS){ BF("BF_DivPerpendicularFacet_3F_b",BF_CurlEdge_3F_b) ; }
void BF_DivPerpendicularFacet_3F_c(ARGS){ BF("BF_DivPerpendicularFacet_3F_c",BF_CurlEdge_3F_c) ; }
void BF_DivPerpendicularFacet_3V(ARGS){ BF("BF_DivPerpendicularFacet_3V",BF_CurlEdge_3V) ; }
void BF_DivPerpendicularFacet_4E(ARGS){ BF("BF_DivPerpendicularFacet_4E",BF_CurlEdge_4E) ; }
void BF_DivPerpendicularFacet_4F(ARGS){ BF("BF_DivPerpendicularFacet_4F",BF_CurlEdge_4F) ; }
void BF_DivPerpendicularFacet_4V(ARGS){ BF("BF_DivPerpendicularFacet_4V",BF_CurlEdge_4V) ; }

#undef BF

#undef ARGS
