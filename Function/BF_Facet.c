#define RCSID "$Id: BF_Facet.c,v 1.6 2002-01-18 22:58:48 geuzaine Exp $"
#include <stdio.h>

#include "GetDP.h"
#include "BF_Function.h"

#define NoFace   Msg(ERROR, "Missing Face Entity in Element %d", Element->Num)

/* ------------------------------------------------------------------------ */
/*  B F _ F a c e t                                                         */
/* ------------------------------------------------------------------------ */

#define WrongNumFacet   Msg(ERROR, "Wrong Facet number in 'BF_Facet'")

void  BF_Facet   (struct Element * Element, int NumFacet, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_Facet");
  
  switch (Element->Type) {
  case LINE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case TRIANGLE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case QUADRANGLE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case PRISM :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_Facet");
    break;
  }

  if (!Element->GeoElement->NumFacets) NoFace ;

  if (Element->GeoElement->NumFacets[NumFacet-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

  GetDP_End ;
}

#undef WrongNumFacet

/* ------------------------------------------------------------------------ */
/*  B F _ D i v F a c e t                                                   */
/* ------------------------------------------------------------------------ */

#define WrongNumFacet   Msg(ERROR, "Wrong Facet number in 'BF_DivFacet'")

void  BF_DivFacet(struct Element * Element, int NumFacet, 
		  double u, double v, double w,  double s[] ) {

  GetDP_Begin("BF_DivFacet");

  switch (Element->Type) {
  case LINE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case TRIANGLE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case QUADRANGLE :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  case PRISM :
    switch(NumFacet) {
    default : WrongNumFacet ;
    }
    break ;

  default :
    Msg(ERROR, "Unkown type of Element in BF_DivFacet");
    break ;
  }

  if (!Element->GeoElement->NumFacets) NoFace ;

  if (Element->GeoElement->NumFacets[NumFacet-1] < 0) {
    s[0] = - s[0] ; s[1] = - s[1] ; s[2] = - s[2] ;
  }

  GetDP_End ;
}

#undef WrongNumFacet

#undef NoFace
