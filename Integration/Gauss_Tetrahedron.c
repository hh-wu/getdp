#include <stdlib.h>
#include <stdio.h>

#include "Message.h"
#include "Gauss_Tetrahedron.h"

/* Gauss integration over a tetrahedron */

void  Gauss_Tetrahedron (int Nbr_Points, int Num,
			 double *u, double *v, double *w, double *wght) {

  switch (Nbr_Points) {

  case  1 : 
    *u = xtt1 [Num] ; *v = ytt1 [Num] ; *w = ztt1 [Num] ;
    *wght = ptt1 [Num] ; break ;

  case  4 : 
    *u = xtt4 [Num] ; *v = ytt4 [Num] ; *w = ztt4 [Num] ;
    *wght = ptt4 [Num] ; break ;

  case  5 : 
    *u = xtt5 [Num] ; *v = ytt5 [Num] ; *w = ztt5 [Num] ;
    *wght = ptt5 [Num] ; break ;

  case 15 : 
    *u = xtt15[Num] ; *v = ytt15[Num] ; *w = ztt15[Num] ;
    *wght = ptt15[Num] ; break ;

  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Tetrahedron\n"
	       "Valid choices: 1, 4, 5, 15");
    break;
  }

}
