#include <stdlib.h>
#include <stdio.h>

#include "Gauss_Quadrangle.h"
#include "Message.h"

/* Classic Gauss Integration over a quadrangle */

void  Gauss_Quadrangle (int Nbr_Points, int Num,
			double *u, double *v, double *w, double *wght) {

  switch (Nbr_Points) {
  case  3 : *u= xq3 [Num] ; *v= yq3 [Num] ; *w= 0. ; *wght= pq3 [Num] ; break ;
  case  4 : *u= xq4 [Num] ; *v= yq4 [Num] ; *w= 0. ; *wght= pq4 [Num] ; break ;
  case  7 : *u= xq7 [Num] ; *v= yq7 [Num] ; *w= 0. ; *wght= pq7 [Num] ; break ;
  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Quadrangle\n"
	       "Valid choices: 3, 4, 7");
    break;
  }

}

/* Gauss Integration over a quadrangle with a 1/R singularity over node (-1,-1,0) */

void  Gauss_Quadrangle_Singular (int Nbr_Points, int Num,
				 double *u, double *v, double *w, double *wght) {

  switch (Nbr_Points) {
  case  1 : *u= xqs1 [Num] ; *v= yqs1 [Num] ; *w= 0. ; *wght= pqs1 [Num] ; break ;
  case  3 : *u= xqs3 [Num] ; *v= yqs3 [Num] ; *w= 0. ; *wght= pqs3 [Num] ; break ;
  case  4 : *u= xqs4 [Num] ; *v= yqs4 [Num] ; *w= 0. ; *wght= pqs4 [Num] ; break ;
  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Quadrangle_Singular\n"
	       "Valid choices: 1, 3, 4");
    break;
  }

}

