#include <stdio.h>

#include "BF_Function.h"


/* ATTENTION: RESTRUCTURATION PAS ENCORE FAITE */

/* ------------------------------------------------------------------------ */
/*  H B F _ E d g e _ 3                                                     */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_Edge_3E (struct Element * Element, int NumEdge, 
		   double u, double v, double w, double s[] ) {

  switch (Element->Type) {
  case LINE :
    switch(NumEdge) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case 0 :
    s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
    break ;

  default :
    break ;
  }

  return ;
}

/* ------------ */
/*  Facets (a)  */
/* ------------ */

void  HBF_Edge_3F_a (struct Element * Element, int NumEntity, 
		     double u, double v, double w, double s[] ) {

  switch (Element->Type) {

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] =  0. ; s[1] = u-u*u-u*v ; s[2] = 0. ; break ;
    default : s[0] =  0. ; s[1] = 0.        ; s[2] = 0. ; break ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : s[0] =  0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] =  0.            ; s[1] = 0.            ; s[2] = u-u*u-u*v-u*w ; break ;
    case 2  : s[0] =  v-u*v-v*v-v*w ; s[1] = 0.            ; s[2] = 0.            ; break ;
    case 3  : s[0] =  0.            ; s[1] = w-u*w-v*w-w*w ; s[2] = 0.            ; break ;
    case 4  : s[0] =  0.            ; s[1] = 0.            ; s[2] = u*v           ; break ;
    default : s[0] =  0.            ; s[1] = 0.            ; s[2] = 0.            ; break ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case 0 :
    s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
    break ;

    default :
      break ;
  }

  return ;
}

/* ------------ */
/*  Facets (b)  */
/* ------------ */

void  HBF_Edge_3F_b (struct Element * Element, int NumEntity, 
		     double u, double v, double w, double s[] ) {

  switch (Element->Type) {
    
  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = v-u*v-v*v ; s[1] = 0. ; s[2] = 0. ; break ;
    default : s[0] = 0.        ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : s[0] =  0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] = w-u*w-v*w-w*w ; s[1] = 0.            ; s[2] = 0.            ; break ;
    case 2  : s[0] = 0.            ; s[1] = u-u*u-u*v-u*w ; s[2] = 0.            ; break ;
    case 3  : s[0] = 0.            ; s[1] = 0.            ; s[2] = v-u*v-v*v-v*w ; break ;
    case 4  : s[0] = 0.            ; s[1] = u*w           ; s[2] = 0.            ; break ;
    default : s[0] = 0.            ; s[1] = 0.            ; s[2] = 0.            ; break ;
    }
    break ;
    
  case HEXAHEDRON :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case 0 :
    s[0] = 0. ; s[1] = 0. ; s[2] = 0. ;
    break ;

    default :
      break ;
  }

  return ;
}


/* ------------------------------------------------------------------------ */
/*  H B F _ C u r l E d g e _ 3                                             */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_CurlEdge_3E (struct Element * Element, int NumEdge, 
		       double u, double v, double w, double s[] ) {

  switch (Element->Type) {
  case LINE :
    switch(NumEdge) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case 0 :
    s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;

    default :
      break ;
  }

  return ;
}

/* ----------- */
/*  Facets (a) */
/* ----------- */

void  HBF_CurlEdge_3F_a (struct Element * Element, int NumEntity, 
			 double u, double v, double w, double s[] ) {

  switch (Element->Type) {

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] = -2.0*u+1.0-v ; break ;
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0.           ; break ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] = -u            ; s[1] = 2.0*u-1.0+v+w ; s[2] = 0.            ; break ;
    case 2  : s[0] = 0.            ; s[1] = -v            ; s[2] = 2.0*v-1.0+u+w ; break ;
    case 3  : s[0] = 2.0*w-1.0+u+v ; s[1] = 0.            ; s[2] = -w            ; break ;
    case 4  : s[0] = u             ; s[1] = -v            ; s[2] = 0.            ; break ;
    default : s[0] = 0.            ; s[1] = 0.            ; s[2] = 0.            ; break ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case 0 :
    s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;

    default :
      break ;
  }

  return ;
}

/* ----------- */
/*  Facets (b) */
/* ----------- */

void  HBF_CurlEdge_3F_b (struct Element * Element, int NumEntity, 
			 double u, double v, double w, double s[] ) {

  switch (Element->Type) {

  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] = 2.0*v-1.0+u ; break ;
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0.          ; break ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEntity) {
    case 1  : s[0] = 0.             ; s[1] = -2.0*w+1.0-u-v ; s[2] = w              ; break ;
    case 2  : s[0] = u              ; s[1] = 0              ; s[2] = -2.0*u+1.0-v-w ; break ;
    case 3  : s[0] = -2.0*v+1.0-u-w ; s[1] = v              ; s[2] = 0.             ; break ;
    case 4  : s[0] = -u             ; s[1] = 0.             ; s[2] = w              ; break ;
    default : s[0] = 0.             ; s[1] = 0.             ; s[2] = 0.             ; break ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    }
    break ;

  case 0 :
    s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;

    default :
      break ;
  }

  return ;
}


/* ------------------------------------------------------------------------ */
/*  H B F _ P e r p e n d i c u l a r F a c e t _ 3                         */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_PerpendicularFacet_3E (struct Element * Element, int NumNode, 
				 double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_Edge_3E (Element, NumNode, u, v, w, s) ;
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;

  return ;
}

/* ------------ */
/*  Facets (a)  */
/* ------------ */

void  HBF_PerpendicularFacet_3F_a (struct Element * Element, int NumNode, 
				   double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_Edge_3F_a (Element, NumNode, u, v, w, s) ;
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;

  return ;
}

/* ------------ */
/*  Facets (b)  */
/* ------------ */

void  HBF_PerpendicularFacet_3F_b (struct Element * Element, int NumNode, 
				   double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_Edge_3F_b (Element, NumNode, u, v, w, s) ;
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;

  return ;
}

/* ------------------------------------------------------------------------ */
/*  H B F _ D i v P e r p e n d i c u l a r F a c e t _ 3                   */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_DivPerpendicularFacet_3E (struct Element * Element, int NumNode, 
				    double u, double v, double w,  double s[] ) {

  HBF_CurlEdge_3E (Element, NumNode, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;

  return ;
}

/* ------------ */
/*  Facets (a)  */
/* ------------ */

void  HBF_DivPerpendicularFacet_3F_a (struct Element * Element, int NumNode, 
				      double u, double v, double w,  double s[] ) {
  
  HBF_CurlEdge_3F_a (Element, NumNode, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;

  return ;
}

/* ------------ */
/*  Facets (b)  */
/* ------------ */

void  HBF_DivPerpendicularFacet_3F_b (struct Element * Element, int NumNode, 
				      double u, double v, double w,  double s[] ) {

  HBF_CurlEdge_3F_b (Element, NumNode, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;

  return ;
}

