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
  case  8 : *u = lx8 [Num] ; *v = 0. ; *w = 0. ; *wght = lp8 [Num] ; break ;
  case  9 : *u = lx9 [Num] ; *v = 0. ; *w = 0. ; *wght = lp9 [Num] ; break ;
  case 10 : *u = lx10[Num] ; *v = 0. ; *w = 0. ; *wght = lp10[Num] ; break ;
  case 11 : *u = lx11[Num] ; *v = 0. ; *w = 0. ; *wght = lp11[Num] ; break ;
  case 12 : *u = lx12[Num] ; *v = 0. ; *w = 0. ; *wght = lp12[Num] ; break ;
  case 13 : *u = lx13[Num] ; *v = 0. ; *w = 0. ; *wght = lp13[Num] ; break ;
  case 14 : *u = lx14[Num] ; *v = 0. ; *w = 0. ; *wght = lp14[Num] ; break ;
  case 15 : *u = lx15[Num] ; *v = 0. ; *w = 0. ; *wght = lp15[Num] ; break ;
  case 16 : *u = lx16[Num] ; *v = 0. ; *w = 0. ; *wght = lp16[Num] ; break ;
  case 17 : *u = lx17[Num] ; *v = 0. ; *w = 0. ; *wght = lp17[Num] ; break ;
  case 18 : *u = lx18[Num] ; *v = 0. ; *w = 0. ; *wght = lp18[Num] ; break ;
  case 19 : *u = lx19[Num] ; *v = 0. ; *w = 0. ; *wght = lp19[Num] ; break ;
  case 20 : *u = lx20[Num] ; *v = 0. ; *w = 0. ; *wght = lp20[Num] ; break ;
  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Line\n"
	       "Valid choices: 1--20");
    break;
  }

}

