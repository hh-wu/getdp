// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include "ProData.h"
#include "Message.h"

/* ------------------------------------------------------------------------ */
/*  B F _ N o d e _ 3                                                       */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Message::Error("Wrong Edge number in 'BF_Node_3E'")

void  BF_Node_3E(struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s)
{
  switch (Element->Type) {
  case LINE :
    switch(NumEntity) {
    case 1  : *s = 0.25 * (1.-u) * (1.+u) * (-u) ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : *s = (1.-u-v) * u * (1.-2*u-v) ; break ;
    case 2  : *s = (1.-u-v) * v * (1.-u-2*v) ; break ;
    case 3  : *s = u * v * (u-v)             ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Message::Error("BF_Node_3E not ready for QUADRANGLE");
    }
    break ;
    
  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : *s = (1.-u-v-w) * u * (1.-2*u-v-w) ; break ;
    case 2  : *s = (1.-u-v-w) * v * (1.-u-2*v-w) ; break ;
    case 3  : *s = (1.-u-v-w) * w * (1.-u-v-2*w) ; break ;
    case 4  : *s = u * v * (u-v)                 ; break ;
    case 5  : *s = u * w * (u-w)                 ; break ;
    case 6  : *s = v * w * (v-w)                 ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Message::Error("BF_Node_3E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Message::Error("BF_Node_3E not ready for PRISM");
    }
    break ;

  case PYRAMID :
    switch(NumEntity) {
    default : Message::Error("BF_Node_3E not ready for PYRAMID");
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_Node_3E");
    break ;
  }

  if (Element->GeoElement->NumEdges[NumEntity-1] < 0) 
    *s = -*s ;

}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

#define WrongNumEntity   Message::Error("Wrong Face number in 'BF_Node_3F'")

void  BF_Node_3F(struct Element * Element, int NumEntity, 
		 double u, double v, double w,  double *s)
{
  switch (Element->Type) {

  case LINE :
    Message::Error("BF_Node_3F cannot be associated with this type of element");
    break;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : *s = (1.-u-v) * u * v ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Message::Error("BF_Node_3F not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : *s = (1.-u-v-w) * u * w ; break ;
    case 2  : *s = (1.-u-v-w) * v * u ; break ;
    case 3  : *s = (1.-u-v-w) * w * v ; break ;
    case 4  : *s = u * v * w          ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Message::Error("BF_Node_3F not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Message::Error("BF_Node_3F not ready for PRISM");
    }
    break ;

  default :
    Message::Error("Unknown Element Type in BF_Node_3F");
    break ;
  }

}

#undef WrongNumEntity

/* -------- */
/*  Volume  */
/* -------- */

void  BF_Node_3V(struct Element * Element, int NumEntity, 
		 double u, double v, double w,  double *s)
{
  switch (Element->Type) {
    
  case LINE :
  case TRIANGLE :
  case QUADRANGLE :
  case TETRAHEDRON :
    Message::Error("BF_Node_3V cannot be associated with this type of element");
    break;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Message::Error("BF_Node_3V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Message::Error("BF_Node_3V not ready for PRISM");
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_Node_3V");
    break ;
  }

}


/* ------------------------------------------------------------------------ */
/*  B F _ G r a d N o d e _ 3                                               */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Message::Error("Wrong Edge number in 'BF_GradNode_3E'")

void BF_GradNode_3E(struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[])
{
  switch (Element->Type) {
  case LINE :
    switch(NumEntity) {
    case 1  : s[0] = -0.25 + 0.75 * u * u ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = 1.0-6.0*u-2.0*v+6.0*u*u+6.0*u*v+v*v ;
              s[1] = -2.0*u+3.0*u*u+2.0*u*v ;  
	      s[2] = 0. ; 
	      break ;
    case 2  : s[0] = -2.0*v+2.0*u*v+3.0*v*v ;
              s[1] = 1.0-2.0*u-6.0*v+u*u+6.0*u*v+6.0*v*v ;
              s[2] = 0. ; 
	      break ;
    case 3  : s[0] = 2.0*u*v-v*v ;
              s[1] = u*u-2.0*u*v ;
              s[2] = 0. ; 
	      break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Message::Error("BF_GradNode_3E not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] = 1.0-6.0*u-2.0*v-2.0*w+6.0*u*u+6.0*u*v+6.0*u*w+v*v+2.0*v*w+w*w ;
              s[1] = -2.0*u+3.0*u*u+2.0*u*v+2.0*u*w ;
              s[2] = -2.0*u+3.0*u*u+2.0*u*v+2.0*u*w ;
	      break ;
    case 2  : s[0] = -2.0*v+2.0*u*v+3.0*v*v+2.0*v*w ;
              s[1] =  1.0-2.0*u-6.0*v-2.0*w+u*u+6.0*u*v+2.0*u*w+6.0*v*v+6.0*v*w+w*w ;
              s[2] = -2.0*v+2.0*u*v+3.0*v*v+2.0*v*w ;
	      break ;
    case 3  : s[0] = -2.0*w+2.0*u*w+2.0*v*w+3.0*w*w ;
              s[1] = -2.0*w+2.0*u*w+2.0*v*w+3.0*w*w ; 
              s[2] = 1.0-2.0*u-2.0*v-6.0*w+u*u+2.0*u*v+6.0*u*w+v*v+6.0*v*w+6.0*w*w ;
	      break ;
    case 4  : s[0] = 2.0*u*v-v*v ;
              s[1] = u*u-2.0*u*v ;
              s[2] = 0.0 ;
	      break ;
    case 5  : s[0] = 2.0*u*w-w*w ;
              s[1] = 0.0 ;
              s[2] = u*u-2.0*u*w ;
	      break ;
    case 6  : s[0] = 0.0 ;
              s[1] = 2.0*v*w-w*w ;
              s[2] = v*v-2.0*v*w ;
	      break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Message::Error("BF_GradNode_3E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Message::Error("BF_GradNode_3E not ready for PRISM");
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_GradNode_3E");
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

#define WrongNumEntity   Message::Error("Wrong Face number in 'BF_GradNode_3F'")

void BF_GradNode_3F(struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[])
{
  switch (Element->Type) {

  case LINE :
    Message::Error("BF_GradNode_3F cannot be associated with this type of element");
    break ;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = v-2.0*u*v-v*v ; s[1] = u-u*u-2.0*u*v ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Message::Error("BF_GradNode_3F not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] = w-2.0*u*w-v*w-w*w ; s[1] = -u*w ; s[2] = u-u*u-u*v-2.0*u*w ; break ;
    case 2  : s[0] = v-2.0*u*v-v*v-v*w ; s[1] = u-u*u-2.0*u*v-u*w ; s[2] = -u*v ; break ;
    case 3  : s[0] = -v*w ; s[1] = w-u*w-2.0*v*w-w*w ; s[2] = v-u*v-v*v-2.0*v*w ; break ;
    case 4  : s[0] = v*w ; s[1] = u*w ; s[2] = u*v ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Message::Error("BF_GradNode_3F not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Message::Error("BF_GradNode_3F not ready for PRISM");
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_GradNode_3F");
    break ;
  }

}

#undef WrongNumEntity

/* -------- */
/*  Volume  */
/* -------- */

void BF_GradNode_3V(struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[])
{
  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case QUADRANGLE :
  case TETRAHEDRON :
    Message::Error("BF_GradNode_3V cannot be associated with this type of element");
    break;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Message::Error("BF_GradNode_3V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Message::Error("BF_GradNode_3V not ready for PRISM");
    }
    break ;

  default :
    Message::Error("Unknown type of Element in BF_GradNode_3V");
    break ;
  }
}

