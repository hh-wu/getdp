/* $Id: Gauss_Pyramid.c,v 1.2 2000-09-07 18:47:25 geuzaine Exp $ */
#include <stdlib.h>
#include <stdio.h>

#include "Message.h"
#include "Gauss_Pyramid.h"

/* Gauss integration over a pyramid */

void  Gauss_Pyramid (int Nbr_Points, int Num,
		     double *u, double *v, double *w, double *wght) {

  switch (Nbr_Points) {

  case  8 : 
    *u = upyr8[Num]; *v = vpyr8[Num]; *w = wpyr8[Num]; *wght = ppyr8[Num]; 
    break ;

  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Pyramid\n"
	       "Valid choices: 8");
    break;

  }

}

