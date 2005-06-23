#define RCSID "$Id: Gauss_Quadrangle.c,v 1.12 2005-06-23 01:45:01 geuzaine Exp $"
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to <getdp@geuz.org>.
 */

#include "GetDP.h"
#include "Quadrature.h"
#include "Gauss_Quadrangle.h"

/* Classic Gauss Integration over a quadrangle */

void  Gauss_Quadrangle (int Nbr_Points, int Num,
			double *u, double *v, double *w, double *wght) {

  GetDP_Begin("Gauss_Quadrangle");

  switch (Nbr_Points) {
  case  3 : *u= xq3 [Num] ; *v= yq3 [Num] ; *w= 0. ; *wght= pq3 [Num] ; break ;
  case  4 : *u= xq4 [Num] ; *v= yq4 [Num] ; *w= 0. ; *wght= pq4 [Num] ; break ;
  case  7 : *u= xq7 [Num] ; *v= yq7 [Num] ; *w= 0. ; *wght= pq7 [Num] ; break ;
  default : 
    Msg(DIRECT, ERROR_STR "Wrong number of Gauss points for Quadrangle");
    Msg(ERROR, "Valid choices: 3, 4, 7");
    break;
  }

  GetDP_End ;
}

/* Gauss-Legendre scheme to integrate over a quadrangle */

int glq[MAX_LINE_POINTS] = {-1};
double *glxq[MAX_LINE_POINTS], *glyq[MAX_LINE_POINTS], *glpq[MAX_LINE_POINTS];

void  GaussLegendre_Quadrangle (int Nbr_Points, int Num,
				double *u, double *v, double *w, double *wght) {
  int i,j,index=0,nb;
  double pt1,pt2,wt1,wt2,dum;

  GetDP_Begin("GaussLegendre_Quadrangle");

  nb = (int)sqrt((double)Nbr_Points);

  if(nb*nb != Nbr_Points || nb > MAX_LINE_POINTS)
    Msg(ERROR, "Number of points should be n^2 with n in [1,%d]", MAX_LINE_POINTS) ;

  if(glq[0] < 0) for(i=0 ; i < MAX_LINE_POINTS ; i++) glq[i] = 0 ;

  if(!glq[nb-1]){
    Msg(INFO, "Computing GaussLegendre %dX%d for Quadrangle", nb, nb);
    glxq[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glyq[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glpq[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
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

  *u = glxq[nb-1][Num] ; *v = glyq[nb-1][Num] ; *w = 0. ; *wght = glpq[nb-1][Num] ;

  GetDP_End ;
}

/* Gauss Integration over a quadrangle with a 1/R singularity over node (-1,-1,0) */

void  GaussSingularR_Quadrangle (int Nbr_Points, int Num,
				 double *u, double *v, double *w, double *wght) {

  GetDP_Begin("GaussSingularR_Quadrangle");

  switch (Nbr_Points) {
  case  1 : *u= xqs1 [Num] ; *v= yqs1 [Num] ; *w= 0. ; *wght= pqs1 [Num] ; break ;
  case  3 : *u= xqs3 [Num] ; *v= yqs3 [Num] ; *w= 0. ; *wght= pqs3 [Num] ; break ;
  case  4 : *u= xqs4 [Num] ; *v= yqs4 [Num] ; *w= 0. ; *wght= pqs4 [Num] ; break ;
  default : 
    Msg(DIRECT, ERROR_STR "Wrong number of (modified) Gauss Points for Quadrangle");
    Msg(ERROR, "Valid choices: 1, 3, 4");
    break;
  }

  GetDP_End ;
}

