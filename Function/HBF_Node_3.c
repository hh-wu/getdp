#include <stdio.h>

#include "BF_Function.h"


/* ------------------------------------------------------------------------ */
/*  H B F _ N o d e _ 3                                                     */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge Number in 'HBF_Node_3E'")

void  HBF_Node_3E (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s ) {

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
    default : Msg(ERROR, "HBF_Node_3E not ready for QUADRANGLE");
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
    default : Msg(ERROR, "HBF_Node_3E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_3E not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Node_3E");
    break ;
  }

  if (Element->GeoElement->NumEdges[NumEntity-1] < 0) 
    *s = -*s ;

}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Facet Number in 'HBF_Node_3F'")

void  HBF_Node_3F (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s ) {

  switch (Element->Type) {

  case LINE :
    Msg(ERROR, "You Should Never be Here (HBF_Node_3F)");
    break;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : *s = (1.-u-v) * u * v ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_3F not ready for QUADRANGLE");
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
    default : Msg(ERROR, "HBF_Node_3F not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_3F not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Node_3F");
    break ;
  }

}

#undef WrongNumEntity


/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_Node_3V (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s ) {

  switch (Element->Type) {
    
  case LINE :
  case TRIANGLE :
  case QUADRANGLE :
  case TETRAHEDRON :
    Msg(ERROR, "You Should Never be Here (HBF_Node_3V)");
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_3V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_3V not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Node_3V");
    break ;
  }

}


/* ------------------------------------------------------------------------ */
/*  H B F _ G r a d N o d e _ 3                                             */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge Number in 'HBF_GradNode_3E'")

void  HBF_GradNode_3E (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

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
    default : Msg(ERROR, "HBF_GradNode_3E not ready for QUADRANGLE");
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
    default : Msg(ERROR, "HBF_GradNode_3E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_3E not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_GradNode_3E");
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

#define WrongNumEntity   Msg(ERROR, "Wrong Facet Number in 'HBF_GradNode_3F'")

void  HBF_GradNode_3F (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  switch (Element->Type) {

  case LINE :
    Msg(ERROR, "You Should Never be Here (HBF_GradNode_3F)");
    break ;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = v-2.0*u*v-v*v ; s[1] = u-u*u-2.0*u*v ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_3F not ready for QUADRANGLE");
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
    default : Msg(ERROR, "HBF_GradNode_3F not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_3F not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_GradNode_3F");
    break ;
  }

}

#undef WrongNumEntity

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_GradNode_3V (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case QUADRANGLE :
  case TETRAHEDRON :
    Msg(ERROR, "You Should Never be Here (HBF_GradNode_3V)");
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_3V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_3V not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_GradNode_3V");
    break ;
  }

}


/* ------------------------------------------------------------------------ */
/*  H B F _ P e r p e n d i c u l a r E d g e _ 3                           */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_PerpendicularEdge_3E (struct Element * Element, int NumEntity, 
				double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_3E (Element, NumEntity, u, v, w, &s[2]) ;
  
}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_PerpendicularEdge_3F (struct Element * Element, int NumEntity, 
				double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_3F (Element, NumEntity, u, v, w, &s[2]) ;
  
}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_PerpendicularEdge_3V (struct Element * Element, int NumEntity, 
				double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_3V (Element, NumEntity, u, v, w, &s[2]) ;
  
}


/* ------------------------------------------------------------------------ */
/*  H B F _ C u r l P e r p e n d i c u l a r E d g e _ 3                   */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_CurlPerpendicularEdge_3E (struct Element * Element, int NumEntity, 
				    double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_GradNode_3E (Element, NumEntity, u, v, w, s) ;
  ss = s[0] ;  s[0] = s[1] ;  s[1] = -ss ;

}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_CurlPerpendicularEdge_3F (struct Element * Element, int NumEntity, 
				    double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_GradNode_3F (Element, NumEntity, u, v, w, s) ;
  ss = s[0] ;  s[0] = s[1] ;  s[1] = -ss ;

}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_CurlPerpendicularEdge_3V (struct Element * Element, int NumEntity, 
				    double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_GradNode_3V (Element, NumEntity, u, v, w, s) ;
  ss = s[0] ;  s[0] = s[1] ;  s[1] = -ss ;
  
}


/* ------------------------------------------------------------------------ */
/*  H B F _ N o d e X _ 3                                                   */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_NodeX_3E (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[1] = s[2] = 0. ;
  HBF_Node_3E (Element, NumEntity, u, v, w, &s[0]) ;

}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_NodeX_3F (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[1] = s[2] = 0. ;
  HBF_Node_3F (Element, NumEntity, u, v, w, &s[0]) ;

}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_NodeX_3V (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[1] = s[2] = 0. ;
  HBF_Node_3V (Element, NumEntity, u, v, w, &s[0]) ;

}


/* ------------------------------------------------------------------------ */
/*  H B F _ N o d e Y _ 3                                                   */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_NodeY_3E (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[2] = 0. ;
  HBF_Node_3E (Element, NumEntity, u, v, w, &s[1]) ;

}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_NodeY_3F (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[2] = 0. ;
  HBF_Node_3F (Element, NumEntity, u, v, w, &s[1]) ;

}

/* -------------------- */
/*  Degree 3 : Volumes  */
/* -------------------- */

void  HBF_NodeY_3V (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[2] = 0. ;
  HBF_Node_3V (Element, NumEntity, u, v, w, &s[1]) ;

}


/* ------------------------------------------------------------------------ */
/*  B F _ N o d e Z _ 3                                                     */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_NodeZ_3E (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_3E (Element, NumEntity, u, v, w, &s[2]) ;

}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_NodeZ_3F (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_3F (Element, NumEntity, u, v, w, &s[2]) ;

}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_NodeZ_3V (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_3V (Element, NumEntity, u, v, w, &s[2]) ;

}

