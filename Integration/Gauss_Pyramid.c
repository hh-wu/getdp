#define RCSID "$Id: Gauss_Pyramid.c,v 1.5 2001-03-03 19:21:20 geuzaine Exp $"
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
    Msg(ERROR, "Wrong number of Gauss points for Pyramid\n"
	       "Valid choice: 8");
    break;

  }

  GetDP_End ;
}

