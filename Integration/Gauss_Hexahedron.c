#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "Message.h"
#include "Quadrature.h"
#include "Gauss_Hexahedron.h"

#include "ualloc.h"

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

/* Gauss-Legendre scheme to integrate over a hexahedron */

int glhex[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
double *glxhex[20], *glyhex[20], *glzhex[20], *glphex[20];

void  GaussLegendre_Hexahedron (int Nbr_Points, int Num,
				double *u, double *v, double *w, double *wght) {
  int i,j,k,index,nb;
  double pt1,pt2,pt3,wt1,wt2,wt3,dJ,dum;

  nb = (int)cbrt((double)Nbr_Points);

  if(nb*nb*nb != Nbr_Points || nb > 20)
    Msg(ERROR, "Number of Points should be n^3 with n in [1,20]") ;

  if(!glhex[nb-1]){
    Msg(INFO, "Computing GaussLegendre %dx%dx%d for Hexahedron", nb, nb, nb);
    glxhex[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glyhex[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glzhex[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glphex[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    index = 0;
    for(i=0; i < nb; i++) {
      Gauss_Line(nb, i, &pt1, &dum, &dum, &wt1);
      for(j=0; j < nb; j++) {
	Gauss_Line(nb, j, &pt2, &dum, &dum, &wt2);
	for(k=0; k < nb; k++) {
	  Gauss_Line(nb, k, &pt3, &dum, &dum, &wt3);
	  glxhex[nb-1][index] = pt1;
	  glyhex[nb-1][index] = pt2;
	  glzhex[nb-1][index] = pt3;
	  glphex[nb-1][index++] = wt1*wt2*wt3;
	}
      }
    }
    glhex[nb-1] = 1;
  }
  *u= glxhex[nb-1][Num] ; *v= glyhex[nb-1][Num] ; *w= glzhex[nb-1][Num] ; 
  *wght= glphex[nb-1][Num] ;
}
