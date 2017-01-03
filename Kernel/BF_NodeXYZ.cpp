// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "ProData.h"
#include "BF.h"
#include "Get_Geometry.h"
#include "Message.h"

#define ARGS					\
  struct Element * Element, int NumNode,	\
  double u, double v, double w,  double s[]

/* ------------------------------------------------------------------------ */
/*  B F _ N o d e X ,  Y ,  Z                                               */
/* ------------------------------------------------------------------------ */

#define BF(BF_NodeX_, BF_Node_, use_, dum1_, dum2_)	\
  s[dum1_] = s[dum2_] = 0. ;				\
  (BF_Node_)(Element, NumNode, u, v, w, &s[use_]);

void BF_NodeX(ARGS)    { BF("BF_NodeX", BF_Node, 0, 1, 2) ; }
void BF_NodeX_2E(ARGS) { BF("BF_NodeX_2E", BF_Node_2E, 0, 1, 2) ; }
void BF_NodeX_2F(ARGS) { BF("BF_NodeX_2F", BF_Node_2F, 0, 1, 2) ; }
void BF_NodeX_2V(ARGS) { BF("BF_NodeX_2V", BF_Node_2V, 0, 1, 2) ; }
void BF_NodeX_3E(ARGS) { BF("BF_NodeX_3E", BF_Node_3E, 0, 1, 2) ; }
void BF_NodeX_3F(ARGS) { BF("BF_NodeX_3F", BF_Node_3F, 0, 1, 2) ; }
void BF_NodeX_3V(ARGS) { BF("BF_NodeX_3V", BF_Node_3V, 0, 1, 2) ; }

void BF_NodeY(ARGS)    { BF("BF_NodeY", BF_Node, 1, 0, 2) ; }
void BF_NodeY_2E(ARGS) { BF("BF_NodeY_2E", BF_Node_2E, 1, 0, 2) ; }
void BF_NodeY_2F(ARGS) { BF("BF_NodeY_2F", BF_Node_2F, 1, 0, 2) ; }
void BF_NodeY_2V(ARGS) { BF("BF_NodeY_2V", BF_Node_2V, 1, 0, 2) ; }
void BF_NodeY_3E(ARGS) { BF("BF_NodeY_3E", BF_Node_3E, 1, 0, 2) ; }
void BF_NodeY_3F(ARGS) { BF("BF_NodeY_3F", BF_Node_3F, 1, 0, 2) ; }
void BF_NodeY_3V(ARGS) { BF("BF_NodeY_3V", BF_Node_3V, 1, 0, 2) ; }

void BF_NodeZ(ARGS)    { BF("BF_NodeZ", BF_Node, 2, 0, 1) ; }
void BF_NodeZ_2E(ARGS) { BF("BF_NodeZ_2E", BF_Node_2E, 2, 0, 1) ; }
void BF_NodeZ_2F(ARGS) { BF("BF_NodeZ_2F", BF_Node_2F, 2, 0, 1) ; }
void BF_NodeZ_2V(ARGS) { BF("BF_NodeZ_2V", BF_Node_2V, 2, 0, 1) ; }
void BF_NodeZ_3E(ARGS) { BF("BF_NodeZ_3E", BF_Node_3E, 2, 0, 1) ; }
void BF_NodeZ_3F(ARGS) { BF("BF_NodeZ_3F", BF_Node_3F, 2, 0, 1) ; }
void BF_NodeZ_3V(ARGS) { BF("BF_NodeZ_3V", BF_Node_3V, 2, 0, 1) ; }

#undef BF

/* ------------------------------------------------------------------------ */
/*  B F _ N o d e X ,  Y ,  Z _ D . . .                                     */
/* ------------------------------------------------------------------------ */

void BF_NodeX_D12(struct Element * Element, int NumNode,
		  double u, double v, double w,  double s[])
{
  double su[3] ;

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[1] ;
  s[1] = 0. ;
}

void BF_NodeY_D12(struct Element * Element, int NumNode,
		  double u, double v, double w,  double s[])
{
  double su[3] ;

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[0] ;
  s[0] = 0. ;
}

void BF_NodeZ_D12(struct Element * Element, int NumNode,
		   double u, double v, double w,  double s[])
{
  s[0] = s[1] = s[2] = 0. ;
}

void BF_NodeX_D12_2E(struct Element * Element, int NumEdge,
		     double u, double v, double w,  double s[])
{
  double su[3] ;

  BF_GradNode_2E(Element, NumEdge, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[1] ;
  s[1] = 0. ;
}

void BF_NodeY_D12_2E(struct Element * Element, int NumEdge,
		     double u, double v, double w,  double s[])
{
  double su[3] ;

  BF_GradNode_2E(Element, NumEdge, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;

  s[2] = s[0] ;
  s[0] = 0. ;
}

void BF_NodeZ_D12_2E(struct Element * Element, int NumEdge,
		     double u, double v, double w,  double s[])
{
  s[0] = s[1] = s[2] = 0. ;
}

void BF_GradNodeRealCoord(struct Element * Element, int NumNode,
                          double u, double v, double w,  double s[])
{
  double su[3] ;

  BF_GradNode(Element, NumNode, u, v, w, su) ;
  ChangeOfCoord_Form1(Element, su, s) ;
}

/* ------------------------------------------------------------------------ */

#define BF(BF_NodeX_D1_, BF_GradNode_, zero1_, zero2_)	\
  double su[3] ;					\
  (BF_GradNode_)(Element, NumNode, u, v, w, su) ;	\
  ChangeOfCoord_Form1(Element, su, s) ;			\
  s[zero1_] = s[zero2_] = 0;

void BF_NodeX_D1(ARGS)    { BF("BF_NodeX_D1", BF_GradNode, 1, 2) ; }
void BF_NodeX_D1_2E(ARGS) { BF("BF_NodeX_D1_2E", BF_GradNode_2E, 1, 2) ; }
void BF_NodeX_D1_2F(ARGS) { BF("BF_NodeX_D1_2F", BF_GradNode_2F, 1, 2) ; }
void BF_NodeX_D1_2V(ARGS) { BF("BF_NodeX_D1_2V", BF_GradNode_2V, 1, 2) ; }
void BF_NodeX_D1_3E(ARGS) { BF("BF_NodeX_D1_3E", BF_GradNode_3E, 1, 2) ; }
void BF_NodeX_D1_3F(ARGS) { BF("BF_NodeX_D1_3F", BF_GradNode_3F, 1, 2) ; }
void BF_NodeX_D1_3V(ARGS) { BF("BF_NodeX_D1_3V", BF_GradNode_3V, 1, 2) ; }

void BF_NodeY_D1(ARGS)    { BF("BF_NodeY_D1", BF_GradNode, 0, 2) ; }
void BF_NodeY_D1_2E(ARGS) { BF("BF_NodeY_D1_2E", BF_GradNode_2E, 0, 2) ; }
void BF_NodeY_D1_2F(ARGS) { BF("BF_NodeY_D1_2F", BF_GradNode_2F, 0, 2) ; }
void BF_NodeY_D1_2V(ARGS) { BF("BF_NodeY_D1_2V", BF_GradNode_2V, 0, 2) ; }
void BF_NodeY_D1_3E(ARGS) { BF("BF_NodeY_D1_3E", BF_GradNode_3E, 0, 2) ; }
void BF_NodeY_D1_3F(ARGS) { BF("BF_NodeY_D1_3F", BF_GradNode_3F, 0, 2) ; }
void BF_NodeY_D1_3V(ARGS) { BF("BF_NodeY_D1_3V", BF_GradNode_3V, 0, 2) ; }

void BF_NodeZ_D1(ARGS)    { BF("BF_NodeZ_D1", BF_GradNode, 0, 1) ; }
void BF_NodeZ_D1_2E(ARGS) { BF("BF_NodeZ_D1_2E", BF_GradNode_2E, 0, 1) ; }
void BF_NodeZ_D1_2F(ARGS) { BF("BF_NodeZ_D1_2F", BF_GradNode_2F, 0, 1) ; }
void BF_NodeZ_D1_2V(ARGS) { BF("BF_NodeZ_D1_2V", BF_GradNode_2V, 0, 1) ; }
void BF_NodeZ_D1_3E(ARGS) { BF("BF_NodeZ_D1_3E", BF_GradNode_3E, 0, 1) ; }
void BF_NodeZ_D1_3F(ARGS) { BF("BF_NodeZ_D1_3F", BF_GradNode_3F, 0, 1) ; }
void BF_NodeZ_D1_3V(ARGS) { BF("BF_NodeZ_D1_3V", BF_GradNode_3V, 0, 1) ; }

#undef BF

/* ------------------------------------------------------------------------ */

#define BF(BF_NodeX_D2_, BF_GradNode_, idx1_, idx2_)	\
  double su[3] ;					\
  (BF_GradNode_)(Element, NumNode, u, v, w, su) ;	\
  ChangeOfCoord_Form1(Element, su, s) ;			\
  s[idx1_] = s[idx2_] ; s[idx2_] = 0 ;

void BF_NodeX_D2(ARGS)    { BF("BF_NodeX_D2", BF_GradNode, 0, 1) ; }
void BF_NodeX_D2_2E(ARGS) { BF("BF_NodeX_D2_2E", BF_GradNode_2E, 0, 1) ; }
void BF_NodeX_D2_2F(ARGS) { BF("BF_NodeX_D2_2F", BF_GradNode_2F, 0, 1) ; }
void BF_NodeX_D2_2V(ARGS) { BF("BF_NodeX_D2_2V", BF_GradNode_2V, 0, 1) ; }
void BF_NodeX_D2_3E(ARGS) { BF("BF_NodeX_D2_3E", BF_GradNode_3E, 0, 1) ; }
void BF_NodeX_D2_3F(ARGS) { BF("BF_NodeX_D2_3F", BF_GradNode_3F, 0, 1) ; }
void BF_NodeX_D2_3V(ARGS) { BF("BF_NodeX_D2_3V", BF_GradNode_3V, 0, 1) ; }

void BF_NodeY_D2(ARGS)    { BF("BF_NodeY_D2", BF_GradNode, 1, 2) ; }
void BF_NodeY_D2_2E(ARGS) { BF("BF_NodeY_D2_2E", BF_GradNode_2E, 1, 2) ; }
void BF_NodeY_D2_2F(ARGS) { BF("BF_NodeY_D2_2F", BF_GradNode_2F, 1, 2) ; }
void BF_NodeY_D2_2V(ARGS) { BF("BF_NodeY_D2_2V", BF_GradNode_2V, 1, 2) ; }
void BF_NodeY_D2_3E(ARGS) { BF("BF_NodeY_D2_3E", BF_GradNode_3E, 1, 2) ; }
void BF_NodeY_D2_3F(ARGS) { BF("BF_NodeY_D2_3F", BF_GradNode_3F, 1, 2) ; }
void BF_NodeY_D2_3V(ARGS) { BF("BF_NodeY_D2_3V", BF_GradNode_3V, 1, 2) ; }

void BF_NodeZ_D2(ARGS)    { BF("BF_NodeZ_D2", BF_GradNode, 2, 0) ; }
void BF_NodeZ_D2_2E(ARGS) { BF("BF_NodeZ_D2_2E", BF_GradNode_2E, 2, 0) ; }
void BF_NodeZ_D2_2F(ARGS) { BF("BF_NodeZ_D2_2F", BF_GradNode_2F, 2, 0) ; }
void BF_NodeZ_D2_2V(ARGS) { BF("BF_NodeZ_D2_2V", BF_GradNode_2V, 2, 0) ; }
void BF_NodeZ_D2_3E(ARGS) { BF("BF_NodeZ_D2_3E", BF_GradNode_3E, 2, 0) ; }
void BF_NodeZ_D2_3F(ARGS) { BF("BF_NodeZ_D2_3F", BF_GradNode_3F, 2, 0) ; }
void BF_NodeZ_D2_3V(ARGS) { BF("BF_NodeZ_D2_3V", BF_GradNode_3V, 2, 0) ; }

#undef BF
