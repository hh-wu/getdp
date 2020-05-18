// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include "ProData.h"
#include "Message.h"

/* ------------------------------------------------------------------------ */
/*  B F _ E d g e _ 2                                                       */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Message::Error("Wrong Edge number in 'BF_Edge_2E'")

void BF_Edge_2E(struct Element * Element, int NumEntity,
		double u, double v, double w,  double s[])
{
  switch (Element->Type) {
  case LINE   : case LINE_2 :
  case LINE_3 : case LINE_4 :
    switch(NumEntity) {
    case 1  : s[0] = u  ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TRIANGLE   : case TRIANGLE_2 :
  case TRIANGLE_3 : case TRIANGLE_4 :
    switch(NumEntity) {
    case 1  : s[0] = -2.0*u+1.0-v ; s[1] = -u           ; s[2] = 0. ; break ;
    case 2  : s[0] = -v           ; s[1] = -2.0*v+1.0-u ; s[2] = 0. ; break ;
    case 3  : s[0] =  v           ; s[1] =  u           ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE   : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
  case QUADRANGLE_3 : case QUADRANGLE_4 :
    switch(NumEntity) {
    default : Message::Error("BF_Edge_2E not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON   : case TETRAHEDRON_2 :
  case TETRAHEDRON_3 : case TETRAHEDRON_4 :
    switch(NumEntity) {
    case 1  : s[0] = -2.0*u+1.0-v-w ; s[1] = -u             ; s[2] = -u             ; break ;
    case 2  : s[0] = -v             ; s[1] = -2.0*v+1.0-u-w ; s[2] = -v             ; break ;
    case 3  : s[0] = -w             ; s[1] = -w             ; s[2] = -2.0*w+1.0-u-v ; break ;
    case 4  : s[0] =  v             ; s[1] =  u             ; s[2] =  0.            ; break ;
    case 5  : s[0] =  w             ; s[1] =  0.            ; s[2] =  u             ; break ;
    case 6  : s[0] =  0.            ; s[1] =  w             ; s[2] =  v             ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON   : case HEXAHEDRON_2 : case HEXAHEDRON_2_20N :
  case HEXAHEDRON_3 : case HEXAHEDRON_4 :
    switch(NumEntity) {
    default : Message::Error("BF_Edge_2E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM   : case PRISM_2 : case PRISM_2_15N :
  case PRISM_3 : case PRISM_4 :
    switch(NumEntity) {
    default : Message::Error("BF_Edge_2E not ready for PRISM");
    }
    break ;

  case PYRAMID : case PYRAMID_2 : case PYRAMID_2_13N :
  case PYRAMID_3 : // case PYRAMID_4
    switch(NumEntity) {
    default : Message::Error("BF_Edge_2E not ready for PYRAMID");
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_Edge_2E");
    break ;
  }
}

#undef WrongNumEntity

/* ------- */
/*  Faces  */
/* ------- */

#define WrongNumEntity   Message::Error("Wrong Face number in 'BF_Edge_2F'")

void BF_Edge_2F(struct Element * Element, int NumEntity,
		double u, double v, double w,  double s[])
{
  Message::Error("You should never end up here!") ;
}

#undef WrongNumEntity

/* -------- */
/*  Volume  */
/* -------- */

void BF_Edge_2V(struct Element * Element, int NumEntity,
		double u, double v, double w,  double s[])
{
  Message::Error("You should never end up here!") ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ C u r l E d g e _ 2                                               */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void BF_CurlEdge_2E(struct Element * Element, int NumEntity,
		    double u, double v, double w,  double s[])
{
  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
}

/* ------- */
/*  Faces  */
/* ------- */

void BF_CurlEdge_2F(struct Element * Element, int NumEntity,
		    double u, double v, double w,  double s[])
{
  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
}

/* -------- */
/*  Volume  */
/* -------- */

void BF_CurlEdge_2V(struct Element * Element, int NumEntity,
		    double u, double v, double w,  double s[])
{
  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
}
