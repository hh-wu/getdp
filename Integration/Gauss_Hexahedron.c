#include <stdlib.h>
#include <stdio.h>

#include "Message.h"
#include "Gauss_Hexahedron.h"

/* Gauss integration over a hexahedron */

void  Gauss_Hexahedron (int Nbr_Points, int Num,
			double *u, double *v, double *w, double *wght) {

  switch (Nbr_Points) {

  case  6 : 
    *u = uhex6 [Num] ; *v = vhex6 [Num] ; *w = whex6 [Num] ;
    *wght = phex6 [Num] ; break ;

  case 34 : 
    *u = uhex34[Num] ; *v = vhex34[Num] ; *w = whex34[Num] ;
    *wght = phex34[Num] ; break ;

  case 77 : 
    *u = uhex77[Num] ; *v = vhex77[Num] ; *w = whex77[Num] ;
    *wght = phex77[Num] ; break ;

  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Hexahedron\n"
	       "Valid choices: 6, 34, 77");
    break;

  }

}
