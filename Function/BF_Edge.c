#include <stdio.h>

#include "BF_Function.h"

#define NoEdge  Msg(ERROR, "Missing Edge Entity in Element %d", Element->Num)

/* ------------------------------------------------------------------------ */
/*  B F _ E d g e                                                           */
/* ------------------------------------------------------------------------ */

#define WrongNumEdge   Msg(ERROR, "Wrong Edge Number in 'BF_Edge'")

void  BF_Edge    (struct Element * Element, int NumEdge, 
		  double u, double v, double w,  double s[] ) {

  switch (Element->Type) {
  case LINE :
    switch(NumEdge) {
    case 1  : s[0] = 0.5 ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case TRIANGLE :
    switch(NumEdge) {
    case 1  : s[0] = 1.-v ; s[1] = u    ; s[2] = 0.  ; break ;
    case 2  : s[0] = v    ; s[1] = 1.-u ; s[2] = 0.  ; break ;
    case 3  : s[0] =   -v ; s[1] =    u ; s[2] = 0.  ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEdge) {
    case 1  : s[0] =  0.25 * (1.-v) ; s[1] = 0.            ; s[2] = 0. ; break ;
    case 2  : s[0] =  0.            ; s[1] = 0.25 * (1.-u) ; s[2] = 0. ; break ;
    case 3  : s[0] =  0.            ; s[1] = 0.25 * (1.+u) ; s[2] = 0. ; break ;
    case 4  : s[0] = -0.25 * (1.+v) ; s[1] = 0.            ; s[2] = 0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEdge) {
    case 1  : s[0] =  1.-v-w ; s[1] =  u      ; s[2] = u      ; break ;
    case 2  : s[0] =  v      ; s[1] =  1.-u-w ; s[2] = v      ; break ;
    case 3  : s[0] =  w      ; s[1] =  w      ; s[2] = 1.-u-v ; break ;
    case 4  : s[0] = -v      ; s[1] =  u      ; s[2] = 0.     ; break ;
    case 5  : s[0] = -w      ; s[1] =  0.     ; s[2] = u      ; break ;
    case 6  : s[0] =  0.     ; s[1] = -w      ; s[2] = v      ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEdge) {
    case 1  : s[0] =  0.125 * (1.-v) * (1.-w) ; s[1] = 0. ; s[2] = 0. ; break ;
    case 6  : s[0] = -0.125 * (1.+v) * (1.-w) ; s[1] = 0. ; s[2] = 0. ; break ;
    case 9  : s[0] =  0.125 * (1.-v) * (1.+w) ; s[1] = 0. ; s[2] = 0. ; break ;
    case 12 : s[0] = -0.125 * (1.+v) * (1.+w) ; s[1] = 0. ; s[2] = 0. ; break ;

    case 2  : s[0] = 0. ; s[1] = 0.125 * (1.-u) * (1.-w)  ; s[2] = 0. ; break ;
    case 4  : s[0] = 0. ; s[1] = 0.125 * (1.+u) * (1.-w)  ; s[2] = 0. ; break ;
    case 10 : s[0] = 0. ; s[1] = 0.125 * (1.-u) * (1.+w)  ; s[2] = 0. ; break ;
    case 11 : s[0] = 0. ; s[1] = 0.125 * (1.+u) * (1.+w)  ; s[2] = 0. ; break ;

    case 3  : s[0] = 0. ; s[1] = 0. ; s[2] = 0.125 * (1.-u) * (1.-v)  ; break ;
    case 5  : s[0] = 0. ; s[1] = 0. ; s[2] = 0.125 * (1.+u) * (1.-v)  ; break ;
    case 7  : s[0] = 0. ; s[1] = 0. ; s[2] = 0.125 * (1.+u) * (1.+v)  ; break ;
    case 8  : s[0] = 0. ; s[1] = 0. ; s[2] = 0.125 * (1.-u) * (1.+v)  ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case PRISM :
    switch(NumEdge) {
    case 1  : s[0] =  0.5 * (1.-v) * (1.-w) ;
              s[1] =  0.5 * u      * (1.-w) ;
              s[2] =  0.                    ; break ;
    case 2  : s[0] =  0.5 * v      * (1.-w) ;
              s[1] =  0.5 * (1.-u) * (1.-w) ;
              s[2] =  0.                    ; break ;
    case 3  : s[0] =  0.                    ;
              s[1] =  0.                    ;
              s[2] =  0.5 * (1.-u-v)        ; break ;
    case 4  : s[0] = -0.5 * v      * (1.-w) ;
              s[1] =  0.5 * u      * (1.-w) ;
              s[2] =  0.                    ; break ;
    case 5  : s[0] =  0.                    ;
              s[1] =  0.                    ;
              s[2] =  0.5 * u               ; break ;
    case 6  : s[0] =  0.                    ;
              s[1] =  0.                    ;
              s[2] =  0.5 * v               ; break ;
    case 7  : s[0] =  0.5 * (1.-v) * (1.+w) ;
              s[1] =  0.5 * u      * (1.+w) ;
              s[2] =  0.                    ; break ;
    case 8  : s[0] =  0.5 * v      * (1.+w) ;
              s[1] =  0.5 * (1.-u) * (1.+w) ;
              s[2] =  0.                    ; break ;
    case 9  : s[0] = -0.5 * v      * (1.+w) ;
              s[1] =  0.5 * u      * (1.+w) ;
              s[2] =  0.                    ; break ;
    default : WrongNumEdge ;
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in BF_Edge");
    break;
  }

  if (!Element->GeoElement->NumEdges) NoEdge ;

  if (Element->GeoElement->NumEdges[NumEdge-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

}

#undef WrongNumEdge

/* ------------------------------------------------------------------------ */
/*  B F _ C u r l E d g e                                                   */
/* ------------------------------------------------------------------------ */

#define WrongNumEdge   Msg(ERROR, "Wrong Edge Number in 'BF_CurlEdge'")

void  BF_CurlEdge(struct Element * Element, int NumEdge, 
		  double u, double v, double w,  double s[] ) {

  switch (Element->Type) {
  case LINE :
    switch(NumEdge) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case TRIANGLE :
    switch(NumEdge) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] =  2. ; break ;
    case 2  : s[0] = 0. ; s[1] = 0. ; s[2] = -2. ; break ;
    case 3  : s[0] = 0. ; s[1] = 0. ; s[2] =  2. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case QUADRANGLE :
    switch(NumEdge) {
    case 1  : s[0] = 0. ; s[1] = 0. ; s[2] =  0.25 ; break ;
    case 2  : s[0] = 0. ; s[1] = 0. ; s[2] = -0.25 ; break ;
    case 3  : s[0] = 0. ; s[1] = 0. ; s[2] =  0.25 ; break ;
    case 4  : s[0] = 0. ; s[1] = 0. ; s[2] =  0.25 ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumEdge) {
    case 1  : s[0] =  0. ; s[1] = -2. ; s[2] =  2. ; break ;
    case 2  : s[0] =  2. ; s[1] =  0. ; s[2] = -2. ; break ;
    case 3  : s[0] = -2. ; s[1] =  2. ; s[2] =  0. ; break ;
    case 4  : s[0] =  0. ; s[1] =  0. ; s[2] =  2. ; break ;
    case 5  : s[0] =  0. ; s[1] = -2. ; s[2] =  0. ; break ;
    case 6  : s[0] =  2. ; s[1] =  0. ; s[2] =  0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumEdge) {
    case 1  : s[0] = 0. ; s[1] = 0.125*(v-1.) ; s[2] = 0.125*(1.-w) ; break ;
    case 6  : s[0] = 0. ; s[1] = 0.125*(v+1.) ; s[2] = 0.125*(1.-w) ; break ;
    case 9  : s[0] = 0. ; s[1] = 0.125*(1.-v) ; s[2] = 0.125*(1.+w) ; break ;
    case 12 : s[0] = 0. ; s[1] =-0.125*(v+1.) ; s[2] = 0.125*(1.+w) ; break ;

    case 2  : s[0] = 0.125*(1.-u) ; s[1] = 0. ; s[2] = 0.125*(w-1.) ; break ;
    case 4  : s[0] = 0.125*(1.+u) ; s[1] = 0. ; s[2] = 0.125*(1.-w) ; break ;
    case 10 : s[0] = 0.125*(u-1.) ; s[1] = 0. ; s[2] =-0.125*(w+1.) ; break ;
    case 11 : s[0] =-0.125*(1.+u) ; s[1] = 0. ; s[2] = 0.125*(w+1.) ; break ;

    case 3  : s[0] = 0.125*(u-1.) ; s[1] = 0.125*(1.-v) ; s[2] = 0. ; break ;
    case 5  : s[0] =-0.125*(u+1.) ; s[1] = 0.125*(v-1.) ; s[2] = 0. ; break ;
    case 7  : s[0] = 0.125*(u+1.) ; s[1] =-0.125*(1.+v) ; s[2] = 0. ; break ;
    case 8  : s[0] = 0.125*(1.-u) ; s[1] = 0.125*(1.+v) ; s[2] = 0. ; break ;
    default : WrongNumEdge ;
    }
    break ;

  case PRISM :
    switch(NumEdge) {
    case 1  : s[0] =  0.5*u      ; s[1] =  0.5*(v-1.) ; s[2] =  1.-w ; break ;
    case 2  : s[0] =  0.5*(1.-u) ; s[1] = -0.5*v      ; s[2] =  w-1. ; break ;
    case 3  : s[0] = -0.5        ; s[1] =  0.5        ; s[2] =  0.   ; break ;

    case 4  : s[0] =  0.5*u      ; s[1] =  0.5*v      ; s[2] =  1.-w ; break ;
    case 5  : s[0] =  0.         ; s[1] = -0.5        ; s[2] =  0.   ; break ;
    case 6  : s[0] =  0.5        ; s[1] =  0.         ; s[2] =  0.   ; break ;

    case 7  : s[0] = -0.5*u      ; s[1] =  0.5*(1.-v) ; s[2] =  1.+w ; break ;
    case 8  : s[0] =  0.5*(u-1.) ; s[1] =  0.5*v      ; s[2] = -1.-w ; break ;
    case 9  : s[0] = -0.5*u      ; s[1] = -0.5*v      ; s[2] =  1.+w ; break ;
    default : WrongNumEdge ;
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in BF_CurlEdge");
    break;
  }

  if (!Element->GeoElement->NumEdges) NoEdge ;

  if (Element->GeoElement->NumEdges[NumEdge-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

}

#undef WrongNumEdge

/* ------------------------------------------------------------------------ */
/*  B F _ P e r p e n d i c u l a r F a c e t                               */
/* ------------------------------------------------------------------------ */

void  BF_PerpendicularFacet(struct Element * Element, int NumEdge, 
			    double u, double v, double w,  double s[] ) {
  double ss ;

  BF_Edge(Element, NumEdge, u, v, w, s) ;

  ss = s[0] ;  s[0] = -s[1] ;  s[1] = ss ;
}


/* ------------------------------------------------------------------------ */
/*  B F _ D i v P e r p e n d i c u l a r F a c e t                         */
/* ------------------------------------------------------------------------ */

void  BF_DivPerpendicularFacet(struct Element * Element, int NumEdge, 
			       double u, double v, double w,  double s[] ) {

  BF_CurlEdge(Element, NumEdge, u, v, w, s) ;
  s[0] = -s[2] ; s[2] = 0. ;
}



#undef NoEdge
