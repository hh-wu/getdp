#include <stdlib.h>
#include <stdio.h>

#include "Message.h"
#include "Gauss_Line.h"

/* Gauss integration over a line */

void Gauss_Line (int Nbr_Points, int Num,
		 double *u, double *v, double *w, double *wght) {

  switch (Nbr_Points) {

  case  1 : *u = lx1 [Num] ; *v = 0. ; *w = 0. ; *wght = lp1 [Num] ; break ;
  case  2 : *u = lx2 [Num] ; *v = 0. ; *w = 0. ; *wght = lp2 [Num] ; break ;
  case  3 : *u = lx3 [Num] ; *v = 0. ; *w = 0. ; *wght = lp3 [Num] ; break ;
  case  4 : *u = lx4 [Num] ; *v = 0. ; *w = 0. ; *wght = lp4 [Num] ; break ;
  case  5 : *u = lx5 [Num] ; *v = 0. ; *w = 0. ; *wght = lp5 [Num] ; break ;
  case  6 : *u = lx6 [Num] ; *v = 0. ; *w = 0. ; *wght = lp6 [Num] ; break ;
  case  7 : *u = lx7 [Num] ; *v = 0. ; *w = 0. ; *wght = lp7 [Num] ; break ;
  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Line\n"
	       "Valid choices: 1, 2, 3, 4, 5, 6, 7");
    break;
  }

}

