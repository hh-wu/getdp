#include <stdlib.h>
#include <stdio.h>

#include "Message.h"
#include "Gauss_Triangle.h"

/* Classic Gauss Integration over a triangle */

void  Gauss_Triangle (int Nbr_Points, int Num,
		      double *u, double *v, double *w, double *wght) {

  switch (Nbr_Points) {
  case  1 : *u= xt1 [Num] ; *v= yt1 [Num] ; *w= 0. ; *wght= pt1 [Num] ; break ;
  case  3 : *u= xt3 [Num] ; *v= yt3 [Num] ; *w= 0. ; *wght= pt3 [Num] ; break ;
  case  4 : *u= xt4 [Num] ; *v= yt4 [Num] ; *w= 0. ; *wght= pt4 [Num] ; break ;
  case  6 : *u= xt6 [Num] ; *v= yt6 [Num] ; *w= 0. ; *wght= pt6 [Num] ; break ;
  case  7 : *u= xt7 [Num] ; *v= yt7 [Num] ; *w= 0. ; *wght= pt7 [Num] ; break ;
  case 12 : *u= xt12[Num] ; *v= yt12[Num] ; *w= 0. ; *wght= pt12[Num] ; break ;
  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Triangle\n"
	       "Valid choices: 1, 3, 4, 6, 7, 12");
    break;
  }

}

/* Gauss Integration over a triangle with a 1/R singularity over node (0,0,0) */

void  Gauss_Triangle_Singular (int Nbr_Points, int Num,
			       double *u, double *v, double *w, double *wght) {

  switch (Nbr_Points) {
  case  1 : *u= xts1 [Num] ; *v= yts1 [Num] ; *w= 0. ; *wght= pts1 [Num] ; break ;
  case  3 : *u= xts3 [Num] ; *v= yts3 [Num] ; *w= 0. ; *wght= pts3 [Num] ; break ;
  case  4 : *u= xts4 [Num] ; *v= yts4 [Num] ; *w= 0. ; *wght= pts4 [Num] ; break ;
  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Triangle_Singular\n"
	       "Valid choices: 1, 3, 4");
    break;
  }

}

