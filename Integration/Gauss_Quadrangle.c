#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "Message.h"
#include "Quadrature.h"
#include "Gauss_Quadrangle.h"

#include "ualloc.h"

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

/* Gauss-Legendre scheme to integrate over a quadrangle */

int glq[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
double *glxq[20], *glyq[20], *glpq[20];

void  GaussLegendre_Quadrangle (int Nbr_Points, int Num,
				double *u, double *v, double *w, double *wght) {
  int i,j,index,nb;
  double pt1,pt2,wt1,wt2,dJ,dum;

  nb = (int)sqrt((double)Nbr_Points);

  if(nb*nb != Nbr_Points || nb > 20)
    Msg(ERROR, "Number of Points should be n^2 with n in [1,20]") ;

  if(!glq[nb-1]){
    Msg(INFO, "Computing GaussLegendre %dx%d for Quadrangle", nb, nb);
    glxq[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glyq[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glpq[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    index = 0;
    for(i=0; i < nb; i++) {
      Gauss_Line(nb, i, &pt1, &dum, &dum, &wt1);
      for(j=0; j < nb; j++) {
	Gauss_Line(nb, j, &pt2, &dum, &dum, &wt2);
	glxq[nb-1][index] = pt1;
	glyq[nb-1][index] = pt2;
	glpq[nb-1][index++] = wt1*wt2;
      }
    }
    glq[nb-1] = 1;
  }
  *u= glxq[nb-1][Num] ; *v= glyq[nb-1][Num] ; *w= 0. ; 
  *wght= glpq[nb-1][Num] ;
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

