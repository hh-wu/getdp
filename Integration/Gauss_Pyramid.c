#define RCSID "$Id: Gauss_Pyramid.c,v 1.6 2001-05-03 08:41:43 geuzaine Exp $"
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
    Msg(DIRECT, ERROR_STR "Wrong number of Gauss points for Pyramid");
    Msg(ERROR, "Valid choice: 8");
    break;

  }

  GetDP_End ;
}

