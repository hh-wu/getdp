#include <stdio.h>

#include "BF_Function.h"


/* ------------------------------------------------------------------------ */
/*  H B F _ E d g e _ 2                                                     */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge Number in 'HBF_Edge_2E'")

void  HBF_Edge_2E (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  switch (Element->Type) {
  case LINE :
    switch(NumEntity) {
    case 1  : s[0] = u  ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;
    
  case TRIANGLE :
    switch(NumEntity) {
    case 1  : s[0] = -2.0*u+1.0-v ; s[1] = -u           ; s[2] = 0. ; break ;
    case 2  : s[0] = -v           ; s[1] = -2.0*v+1.0-u ; s[2] = 0. ; break ;
    case 3  : s[0] =  v           ; s[1] =  u           ; s[2] = 0. ; break ;
    default : WrongNumEntity ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Edge_2E not ready for QUADRANGLE");
    }
    break ;

  case TETRAHEDRON :
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

  case HEXAHEDRON :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Edge_2E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "HBF_Edge_2E not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in HBF_Edge_2E");
    break ;
  }

}

#undef WrongNumEntity


/* ------------------------------------------------------------------------ */
/*  H B F _ C u r l E d g e _ 2                                             */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_CurlEdge_2E (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; 

}



/* ------------------------------------------------------------------------ */
/*  H B F _ P e r p e n d i c u l a r F a c e t _ 2                         */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_PerpendicularFacet_2E (struct Element * Element, int NumEntity, 
				 double u, double v, double w,  double s[] ) {
  double ss ;

  HBF_Edge_2E (Element, NumEntity, u, v, w, s) ;
  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;

}


/* ------------------------------------------------------------------------ */
/*  H B F _ D i v P e r p e n d i c u l a r F a c e t _ 2                   */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  HBF_DivPerpendicularFacet_2E (struct Element * Element, int NumEntity, 
				    double u, double v, double w,  double s[] ) {

  HBF_CurlEdge_2E (Element, NumEntity, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;

}




