static char *rcsid = "$Id: BF_Edge_2.c,v 1.2 2000-10-30 01:05:44 geuzaine Exp $" ;
#include <stdio.h>

#include "GetDP.h"
#include "BF_Function.h"

/* ------------------------------------------------------------------------ */
/*  B F _ E d g e _ 2                                                       */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Edge Number in 'BF_Edge_2E'")

void  BF_Edge_2E (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge");

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
    default : Msg(ERROR, "BF_Edge_2E not ready for QUADRANGLE");
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
    default : Msg(ERROR, "BF_Edge_2E not ready for HEXAHEDRON");
    }
    break ;

  case PRISM :
    switch(NumEntity) {
    default : Msg(ERROR, "BF_Edge_2E not ready for PRISM");
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in BF_Edge_2E");
    break ;
  }

  GetDP_End ;
}

#undef WrongNumEntity

/* ------- */
/*  Faces  */
/* ------- */

#define WrongNumEntity   Msg(ERROR, "Wrong Face Number in 'BF_Edge_2F'")

void  BF_Edge_2F (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge_2F");

  Msg(ERROR, "Should never be here") ;

  GetDP_End ;
}

#undef WrongNumEntity

/* -------- */
/*  Volume  */
/* -------- */

void  BF_Edge_2V (struct Element * Element, int NumEntity, 
		   double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Edge_2V");

  Msg(ERROR, "Should never be here") ;

  GetDP_End ;
}

/* ------------------------------------------------------------------------ */
/*  B F _ C u r l E d g e _ 2                                               */
/* ------------------------------------------------------------------------ */

/* ------- */
/*  Edges  */
/* ------- */

void  BF_CurlEdge_2E (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlEdge_2E");

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; 

  GetDP_End ;
}

/* ------- */
/*  Faces  */
/* ------- */

void  BF_CurlEdge_2F (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlEdge_2F");

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; 

  GetDP_End ;
}

/* -------- */
/*  Volume  */
/* -------- */

void  BF_CurlEdge_2V (struct Element * Element, int NumEntity, 
		       double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_CurlEdge_2V");

  s[0] = 0. ; s[1] = 0. ; s[2] = 0. ; 

  GetDP_End ;
}
