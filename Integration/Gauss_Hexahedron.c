#define RCSID "$Id: Gauss_Hexahedron.c,v 1.11 2001-05-03 08:41:43 geuzaine Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Quadrature.h"
#include "Gauss_Hexahedron.h"

/* Gauss integration over a hexahedron */

void  Gauss_Hexahedron (int Nbr_Points, int Num,
			double *u, double *v, double *w, double *wght) {

  GetDP_Begin("Gauss_Hexehedron");

  switch (Nbr_Points) {

  case  6 : 
    *u = xhex6 [Num] ; *v = yhex6 [Num] ; *w = zhex6 [Num] ; 
    *wght = phex6 [Num] ; break ;

  case 34 : 
    *u = xhex34[Num] ; *v = yhex34[Num] ; *w = zhex34[Num] ;
    *wght = phex34[Num] ; break ;

  case 77 : 
    *u = xhex77[Num] ; *v = yhex77[Num] ; *w = zhex77[Num] ;
    *wght = phex77[Num] ; break ;

  default : 
    Msg(DIRECT, ERROR_STR "Wrong number of Gauss points for Hexahedron");
    Msg(ERROR, "Valid choices: 6, 34, 77");
    break;

  }

  GetDP_End ;
}

/* Gauss-Legendre scheme to integrate over a hexahedron */

int glhex[MAX_LINE_POINTS] = {-1};
double *glxhex[MAX_LINE_POINTS], *glyhex[MAX_LINE_POINTS];
double *glzhex[MAX_LINE_POINTS], *glphex[MAX_LINE_POINTS];

void  GaussLegendre_Hexahedron (int Nbr_Points, int Num,
				double *u, double *v, double *w, double *wght) {
  int i,j,k,index=0,nb;
  double pt1,pt2,pt3,wt1,wt2,wt3,dum;

  GetDP_Begin("GaussLegendre_Hexahedron");
  
#ifdef MSDOS
  nb = (int)pow((double)Nbr_Points, 1./3.);
#else
  nb = (int)cbrt((double)Nbr_Points);
#endif
  
  if(nb*nb*nb != Nbr_Points || nb > MAX_LINE_POINTS)
    Msg(ERROR, "Number of points should be n^3 with n in [1,%d]", MAX_LINE_POINTS) ;
  
  if(glhex[0] < 0) for(i=0 ; i < MAX_LINE_POINTS ; i++) glhex[i] = 0 ;
    
  if(!glhex[nb-1]){
    Msg(INFO, "Computing GaussLegendre %dx%dx%d for Hexahedron", nb, nb, nb);
    glxhex[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glyhex[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glzhex[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glphex[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
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

  *u = glxhex[nb-1][Num] ; *v = glyhex[nb-1][Num] ; *w = glzhex[nb-1][Num] ; 
  *wght = glphex[nb-1][Num] ;

  GetDP_End ;
}
