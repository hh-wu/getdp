static char *rcsid = "$Id: Gauss_Pyramid.c,v 1.3 2000-10-30 01:05:44 geuzaine Exp $" ;
#include <stdlib.h>
#include <stdio.h>

#include "GetDP.h"
#include "Gauss_Pyramid.h"

/* Gauss integration over a pyramid */

void  Gauss_Pyramid (int Nbr_Points, int Num,
		     double *u, double *v, double *w, double *wght) {

  GetDP_Begin("Gauss_Pyramid") ;

  switch (Nbr_Points) {

  case  8 : 
    *u = upyr8[Num]; *v = vpyr8[Num]; *w = wpyr8[Num]; *wght = ppyr8[Num]; 
    break ;

  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Pyramid\n"
	       "Valid choices: 8");
    break;

  }

  GetDP_End ;
}

