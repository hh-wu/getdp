#include <stdio.h>

#include "BF_Function.h"


/* ------------------------------------------------------------------------ */
/*  H B F _ N o d e _ 2                                                     */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge Number in 'HBF_Node_2E'")

void  HBF_Node_2E (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s ) {

  switch (Element->Type) {
  case LINE :
    switch(NumEntity) {
    case 1  : *s = 0.25 * (1.-u) * (1.+u) ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : *s = (1.-u-v) * u ; break ;
    case 2  : *s = (1.-u-v) * v ; break ;
    case 3  : *s = u * v        ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    case 1  : *s = 0.0625 * (1.-u*u) * (1.-v*v) ; break ;
    case 2  : *s = 0.0625 * (1.-u)*(1.-u) * (1.-v*v) ; break ;
    case 3  : *s = 0.0625 * (1.+u)*(1.+u) * (1.+v)*(1.+v) ; break ;
    case 4  : *s = 0.0625 * (1.-u*u) * (1.+v)*(1.+v) ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : *s = (1.-u-v-w) * u ; break ;
    case 2  : *s = (1.-u-v-w) * v ; break ;
    case 3  : *s = (1.-u-v-w) * w ; break ;
    case 4  : *s = u * v          ; break ;
    case 5  : *s = u * w          ; break ;
    case 6  : *s = v * w          ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_2E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_2E not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Node_2E");
    break ;
  }

}

#undef WrongNumEntity


/* -------- */
/*  Facets  */
/* -------- */

void  HBF_Node_2F (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s ) {

  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case TETRAHEDRON :
    break;
    
  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_2F not ready for QUADRANGLE");
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_2F not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_2F not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Node_2F");
    break ;
  }

  /* necessary in 3D */
  if (Element->GeoElement->NumFacets[NumEntity-1] < 0) 
    *s = -*s ;

}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_Node_2V (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double *s ) {

  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case QUADRANGLE :
  case TETRAHEDRON :
    break;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_2V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Node_2V not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Node_2V");
    break ;
  }
  
}


/* ------------------------------------------------------------------------ */
/*  H B F _ G r a d N o d e _ 2                                             */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge Number in 'HBF_GradNode_2E'")

void  HBF_GradNode_2E (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  switch (Element->Type) {
  case LINE :
    switch(NumEntity) {
    case 1  : s[0] = -0.5*u ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = 1.-2.*u-v ; s[1] = -u        ; s[2] = 0. ; break ;
    case 2  : s[0] = -v        ; s[1] = 1.-u-2.*v ; s[2] = 0. ; break ;
    case 3  : s[0] = v         ; s[1] = u         ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_2E not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] =  1.-2.*u-v-w ; s[1] = -u           ; s[2] = -u           ; break ;
    case 2  : s[0] = -v           ; s[1] =  1.-u-2.*v-w ; s[2] = -v           ; break ;
    case 3  : s[0] = -w           ; s[1] = -w           ; s[2] =  1.-u-v-2.*w ; break ;
    case 4  : s[0] =  v           ; s[1] =  u           ; s[2] =  0.          ; break ;
    case 5  : s[0] =  w           ; s[1] =  0.          ; s[2] =  u           ; break ;
    case 6  : s[0] =  0.          ; s[1] =  w           ; s[2] =  v           ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_2E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_2E not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_GradNode_2E");
    break ;
  }

}

#undef WrongNumEntity

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_GradNode_2F (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case TETRAHEDRON :
    break;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_2F not ready for QUADRANGLE");
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_2F not ready for HEXAHEDRON"); 
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_2F not ready for PRISM"); 
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_GradNode_2F");
    break ;
  }

  if (Element->GeoElement->NumFacets[NumEntity-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_GradNode_2V (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  switch (Element->Type) {

  case LINE :
  case TRIANGLE :
  case QUADRANGLE :
  case TETRAHEDRON :
    break;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_2V not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_GradNode_2V not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_GradNode_2V");
    break ;
  }

}


/* ------------------------------------------------------------------------ */
/*  H B F _ P e r p e n d i c u l a r E d g e _ 2                           */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_PerpendicularEdge_2E (struct Element * Element, int NumEntity, 
				double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_2E (Element, NumEntity, u, v, w, &s[2]) ;
}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_PerpendicularEdge_2F (struct Element * Element, int NumEntity, 
				double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_2F (Element, NumEntity, u, v, w, &s[2]) ;
}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_PerpendicularEdge_2V (struct Element * Element, int NumEntity, 
				double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_2V (Element, NumEntity, u, v, w, &s[2]) ;
}


/* ------------------------------------------------------------------------ */
/*  H B F _ C u r l P e r p e n d i c u l a r E d g e _ 2                   */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_CurlPerpendicularEdge_2E (struct Element * Element, int NumEntity, 
				    double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_GradNode_2E (Element, NumEntity, u, v, w, s) ;
  ss = s[0] ;  s[0] = s[1] ;  s[1] = -ss ;
}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_CurlPerpendicularEdge_2F (struct Element * Element, int NumEntity, 
				    double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_GradNode_2F (Element, NumEntity, u, v, w, s) ;
  ss = s[0] ;  s[0] = s[1] ;  s[1] = -ss ;
}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_CurlPerpendicularEdge_2V (struct Element * Element, int NumEntity, 
				    double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_GradNode_2V (Element, NumEntity, u, v, w, s) ;
  ss = s[0] ;  s[0] = s[1] ;  s[1] = -ss ;
 
}


/* ------------------------------------------------------------------------ */
/*  H B F _ N o d e X _ 2                                                   */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_NodeX_2E (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[1] = s[2] = 0. ;
  HBF_Node_2E (Element, NumEntity, u, v, w, &s[0]) ;
}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_NodeX_2F (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[1] = s[2] = 0. ;
  HBF_Node_2F (Element, NumEntity, u, v, w, &s[0]) ;
}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_NodeX_2V (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[1] = s[2] = 0. ;
  HBF_Node_2V (Element, NumEntity, u, v, w, &s[0]) ;
}


/* ------------------------------------------------------------------------ */
/*  H B F _ N o d e Y _ 2                                                   */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_NodeY_2E (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[2] = 0. ;
  HBF_Node_2E (Element, NumEntity, u, v, w, &s[1]) ;
}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_NodeY_2F (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[2] = 0. ;
  HBF_Node_2F (Element, NumEntity, u, v, w, &s[1]) ;
}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_NodeY_2V (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[2] = 0. ;
  HBF_Node_2V (Element, NumEntity, u, v, w, &s[1]) ;

  return ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ N o d e Z _ 2                                                     */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_NodeZ_2E (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_2E (Element, NumEntity, u, v, w, &s[2]) ;
}

/* -------- */
/*  Facets  */
/* -------- */

void  HBF_NodeZ_2F (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_2F (Element, NumEntity, u, v, w, &s[2]) ;
}

/* --------- */
/*  Volumes  */
/* --------- */

void  HBF_NodeZ_2V (struct Element * Element, int NumEntity, 
		    double u, double v, double w,  double s[] ) {
  s[0] = s[1] = 0. ;
  HBF_Node_2V (Element, NumEntity, u, v, w, &s[2]) ;
}



