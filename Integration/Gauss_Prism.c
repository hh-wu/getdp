#include <stdlib.h>
#include <stdio.h>

#include "Message.h"
#include "Gauss_Prism.h"

/* Gauss integration over a prism */

void  Gauss_Prism      (int Nbr_Points, int Num,
			double *u, double *v, double *w, double *wght) {

  switch (Nbr_Points) {

  case  6 : 
    *u = upri6 [Num] ; *v = vpri6 [Num] ; *w = wpri6 [Num] ;
    *wght = ppri6 [Num] ; break ;

  case  9 : 
    *u = upri9 [Num] ; *v = vpri9 [Num] ; *w = wpri9 [Num] ;
    *wght = ppri9 [Num] ; break ;

  case 21 : 
    *u = upri21[Num] ; *v = vpri21[Num] ; *w = wpri21[Num] ;
    *wght = ppri21[Num] ; break ;

  case 42 : 
    *u = upri42[Num] ; *v = vpri42[Num] ; *w = wpri42[Num] ;
    *wght = ppri42[Num] ; break ;
    
  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Prism\n"
	       "Valid choices: 6, 9, 21, 42");
    break;

  }

}
