static char *rcsid = "$Id: Gauss_Point.c,v 1.3 2000-10-30 01:05:44 geuzaine Exp $" ;

#include "stdlib.h"

#include "GetDP.h"

/* Gauss integration over a point (!) */

void Gauss_Point (int Nbr_Points, int Num,
		  double *u, double *v, double *w, double *wght) {

  GetDP_Begin("Gauss_Point") ;

  *u = 0. ; *v = 0. ; *w = 0. ; *wght = 1. ;

  GetDP_End ;
}
