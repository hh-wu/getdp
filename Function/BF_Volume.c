/* $Id: BF_Volume.c,v 1.2 2000-09-07 18:47:22 geuzaine Exp $ */
#include <stdio.h>

#include "BF_Function.h"


/* ------------------------------------------------------------------------ */
/*  B F _ V o l u m e                                                       */
/* ------------------------------------------------------------------------ */

#define WrongNumVolume   Msg(ERROR, "Wrong Volume Number in 'BF_Volume'")

void  BF_Volume  (struct Element * Element, int NumVolume,
		  double u, double v, double w,  double *s ) {

  switch (Element->Type) {
  case POINT :
    switch(NumVolume) {
    case 1  : *s = 1. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case LINE :
    switch(NumVolume) {
    case 1  : *s = 0.5 ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case TRIANGLE :
    switch(NumVolume) {
    case 1  : *s = 2. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case QUADRANGLE :
    switch(NumVolume) {
    case 1  : *s = 0.25 ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case TETRAHEDRON :
    switch(NumVolume) {
    case 1  : *s = 6. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case HEXAHEDRON :
    switch(NumVolume) {
    case 1  : *s = 0.125 ; break ;
    default : WrongNumVolume ;
    }
    break ;

  case PRISM :
    switch(NumVolume) {
    case 1  : *s = 1. ; break ;
    default : WrongNumVolume ;
    }
    break ;

  default :
    Msg(ERROR, "Unkown Element Type in BF_Volume");
    break ;
  }

}

#undef WrongNumVolume


