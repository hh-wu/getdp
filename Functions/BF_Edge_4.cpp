// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include "ProData.h"
#include "Message.h"

/* ------------------------------------------------------------------------ */
/*  B F _ E d g e _ 4                                                       */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Message::Error("Wrong Edge number in 'BF_Edge_4E'")

void BF_Edge_4E(struct Element * Element, int NumEntity,
		double u, double v, double w, double s[])
{
  switch (Element->Type) {
  case LINE   : case LINE_2 :
  case LINE_3 : case LINE_4 :
    switch(NumEntity) {
    case 1  : s[0] = u*u ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TRIANGLE   : case TRIANGLE_2 :
  case TRIANGLE_3 : case TRIANGLE_4 :
    switch(NumEntity) {
    case 1  : s[0] = -6.0*u+1.0-2.0*v+6.0*u*u+6.0*u*v+v*v ;
              s[1] = -2.0*u+3.0*u*u+2.0*u*v ;
	      s[2] = 0. ;
	      break ;
    case 2  : s[0] = -2.0*v+3.0*v*v+2.0*u*v ;
              s[1] = -6.0*v+1.0-2.0*u+6.0*u*v+u*u+6.0*v*v ;
	      s[2] = 0. ;
	      break ;
    case 3  : s[0] = 2.0*u*v-v*v ;
              s[1] = u*u-2.0*u*v ;
	      s[2] = 0. ;
	      break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE   : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
  case QUADRANGLE_3 : case QUADRANGLE_4 :
    switch(NumEntity) {
    default : Message::Error("BF_Edge_4E not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON   : case TETRAHEDRON_2 :
  case TETRAHEDRON_3 : case TETRAHEDRON_4 :
    switch(NumEntity) {
    case 1  : s[0] = -6.0*u+1.0-2.0*v-2.0*w+6.0*u*u+6.0*u*v+6.0*u*w+v*v+2.0*v*w+w*w;
              s[1] = -2.0*u+3.0*u*u+2.0*u*v+2.0*u*w;
	      s[2] = -2.0*u+3.0*u*u+2.0*u*v+2.0*u*w;
	      break ;
    case 2  : s[0] = -2.0*v+3.0*v*v+2.0*u*v+2.0*v*w;
              s[1] = -6.0*v+1.0-2.0*u-2.0*w+6.0*u*v+u*u+2.0*u*w+6.0*v*v+6.0*v*w+w*w;
	      s[2] = -2.0*v+3.0*v*v+2.0*u*v+2.0*v*w;
	      break ;
    case 3  : s[0] = -2.0*w+3.0*w*w+2.0*u*w+2.0*v*w;
              s[1] = -2.0*w+3.0*w*w+2.0*u*w+2.0*v*w;
	      s[2] = -6.0*w+1.0-2.0*u-2.0*v+6.0*u*w+u*u+2.0*u*v+6.0*v*w+v*v+6.0*w*w;
	      break ;
    case 4  : s[0] = 2.0*u*v-v*v;
              s[1] = u*u-2.0*u*v;
              s[2] = 0.0;
	      break ;
    case 5  : s[0] = 2.0*u*w-w*w;
              s[1] = 0.0;
	      s[2] = u*u-2.0*u*w;
	      break ;
    case 6  : s[0] = 0.0;
              s[1] = 2.0*v*w-w*w;
	      s[2] = v*v-2.0*v*w;
	      break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON   : case HEXAHEDRON_2 : case HEXAHEDRON_2_20N :
  case HEXAHEDRON_3 : case HEXAHEDRON_4 :
    switch(NumEntity) {
    default : Message::Error("BF_Edge_4E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM   : case PRISM_2 : case PRISM_2_15N :
  case PRISM_3 : case PRISM_4 :
    switch(NumEntity) {
    default : Message::Error("BF_Edge_4E not ready for PRISM");
    }
    break ;

  case PYRAMID : case PYRAMID_2 : case PYRAMID_2_13N :
  case PYRAMID_3 : // case PYRAMID_4
    switch(NumEntity) {
    default : Message::Error("BF_Edge_4E not ready for PYRAMID");
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_Edge_4E");
    break ;
  }

  if (Element->GeoElement->NumEdges[NumEntity-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }
}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

#define WrongNumEntity   Message::Error("Wrong Face number in 'BF_Edge_4F'")

void BF_Edge_4F(struct Element * Element, int NumEntity,
		double u, double v, double w,  double s[])
{
  switch (Element->Type) {

  case LINE   : case LINE_2 :
  case LINE_3 : case LINE_4 :
    Message::Error("You should never end up here!") ;
    break;

  case TRIANGLE   : case TRIANGLE_2 :
  case TRIANGLE_3 : case TRIANGLE_4 :
    switch(NumEntity) {
    case 1  : s[0] = v-2.0*u*v-v*v ; s[1] = u-u*u-2.0*u*v ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE   : case QUADRANGLE_2 : case QUADRANGLE_2_8N :
  case QUADRANGLE_3 : case QUADRANGLE_4 :
    switch(NumEntity) {
    default : Message::Error("BF_Edge_4F not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON   : case TETRAHEDRON_2 :
  case TETRAHEDRON_3 : case TETRAHEDRON_4 :
    switch(NumEntity) {
    case 1  : s[0] = w-2.0*u*w-v*w-w*w ;
              s[1] = -u*w ;
              s[2] = u-u*u-u*v-2.0*u*w ;
	      break ;
    case 2  : s[0] = v-2.0*u*v-v*v-v*w ;
              s[1] = u-u*u-2.0*u*v-u*w ;
              s[2] = -u*v ;
	      break ;
    case 3  : s[0] = -v*w ;
              s[1] = w-u*w-2.0*v*w-w*w ;
              s[2] = v-u*v-v*v-2.0*v*w ;
	      break ;
    case 4  : s[0] = v*w ;
              s[1] = u*w ;
              s[2] = u*v ;
	      break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON   : case HEXAHEDRON_2 : case HEXAHEDRON_2_20N :
  case HEXAHEDRON_3 : case HEXAHEDRON_4 :
    switch(NumEntity) {
    default : Message::Error("BF_Edge_4F not ready for QUADRANGLE");
    }
    break ;

  case PRISM   : case PRISM_2 : case PRISM_2_15N :
  case PRISM_3 : case PRISM_4 :
    switch(NumEntity) {
    default : Message::Error("BF_Edge_4F not ready for PRISM");
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_Edge_4F");
    break ;

  }
}

#undef WrongNumEntity

/* -------- */
/*  Volume  */
/* -------- */

void BF_Edge_4V(struct Element * Element, int NumEntity,
		double u, double v, double w,  double s[])
{
  Message::Error("You should never end up here!") ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ C u r l E d g e _ 4                                               */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void BF_CurlEdge_4E(struct Element * Element, int NumEntity,
		    double u, double v, double w,  double s[])
{
  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
}

/* -------- */
/*  Facets  */
/* -------- */

void BF_CurlEdge_4F(struct Element * Element, int NumEntity,
		    double u, double v, double w,  double s[])
{
  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
}

/* -------- */
/*  Volume  */
/* -------- */

void BF_CurlEdge_4V(struct Element * Element, int NumEntity,
		    double u, double v, double w,  double s[])
{
  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
}
