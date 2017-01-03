// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <math.h>
#include "Gauss.h"
#include "Gauss_Line.h"
#include "Message.h"
#include "MallocUtils.h"

/* Gauss integration over a line */

static int gll[MAX_LINE_POINTS] = {-1};
static double *glxl[MAX_LINE_POINTS], *glpl[MAX_LINE_POINTS];

void Gauss_Line(int Nbr_Points, int Num,
		double *u, double *v, double *w, double *wght)
{
  int i ;

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
    if(Nbr_Points <= MAX_LINE_POINTS){
      if(gll[0] < 0) for(i = 0; i < MAX_LINE_POINTS; i++) gll[i] = 0 ;
      if(!gll[Nbr_Points - 1]){
	Message::Info("Computing GaussLegendre %d for Line", Nbr_Points);
	glxl[Nbr_Points - 1] = (double*)Malloc(Nbr_Points * sizeof(double));
	glpl[Nbr_Points - 1] = (double*)Malloc(Nbr_Points * sizeof(double));
	GaussLegendre(-1., 1., glxl[Nbr_Points - 1], glpl[Nbr_Points - 1], Nbr_Points);
	gll[Nbr_Points - 1] = 1;
      }
      *u = glxl[Nbr_Points - 1][Num] ; *v = *w = 0. ; *wght = glpl[Nbr_Points - 1][Num] ;
    }
    else
      Message::Error("Maximum number of integration points exceeded (%d > %d)",
                     Nbr_Points, MAX_LINE_POINTS) ;
    break ;
  }
}

#define EPS 3.0e-11

void GaussLegendre(double x1, double x2, double x[], double w[], int n)
{
  int m, j, i;
  double z1, z, xm, xl, pp, p3, p2, p1;

  m = (n + 1) / 2;
  xm = 0.5 * (x2 + x1);
  xl = 0.5 * (x2 - x1);
  for (i = 1; i <= m; i++) {
    z = cos(3.141592654 * (i - 0.25) / (n + 0.5));
    do {
      p1 = 1.0;
      p2 = 0.0;
      for (j = 1; j <= n; j++) {
	p3 = p2;
	p2 = p1;
	p1 = ((2.0 * j - 1.0) * z * p2 - (j - 1.0) * p3) / j;
      }
      pp = n * (z * p1 - p2) / (z * z - 1.0);
      z1 = z;
      z = z1 - p1 / pp;
    } while (fabs(z - z1) > EPS);
    x[i - 1] = xm - xl * z;
    x[n - i] = xm + xl * z;
    w[i - 1] = 2.0 * xl/((1.0 - z * z) * pp * pp);
    w[n - i] = w[i - 1];
  }
}
