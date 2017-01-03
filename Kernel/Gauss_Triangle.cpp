// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <math.h>
#include "Gauss.h"
#include "Gauss_Triangle.h"
#include "Message.h"
#include "MallocUtils.h"

/* Gauss Integration over a triangle */

void Gauss_Triangle(int Nbr_Points, int Num,
		    double *u, double *v, double *w, double *wght)
{
  switch (Nbr_Points) {
  case  1 : *u= xt1 [Num] ; *v= yt1 [Num] ; *w= 0. ; *wght= pt1 [Num] ; break ;
  case  3 : *u= xt3 [Num] ; *v= yt3 [Num] ; *w= 0. ; *wght= pt3 [Num] ; break ;
  case  4 : *u= xt4 [Num] ; *v= yt4 [Num] ; *w= 0. ; *wght= pt4 [Num] ; break ;
  case  6 : *u= xt6 [Num] ; *v= yt6 [Num] ; *w= 0. ; *wght= pt6 [Num] ; break ;
  case  7 : *u= xt7 [Num] ; *v= yt7 [Num] ; *w= 0. ; *wght= pt7 [Num] ; break ;
  case 12 : *u= xt12[Num] ; *v= yt12[Num] ; *w= 0. ; *wght= pt12[Num] ; break ;
  case 13 : *u= xt13[Num] ; *v= yt13[Num] ; *w= 0. ; *wght= pt13[Num] ; break ;
  case 16 : *u= xt16[Num] ; *v= yt16[Num] ; *w= 0. ; *wght= pt16[Num] ; break ;
  default :
    Message::Error("Wrong number of Gauss points for Triangle: "
                   "valid choices: 1, 3, 4, 6, 7, 12, 13, 16");
    break;
  }
}

/* Degenerate n1Xn2 Gauss-Legendre scheme to integrate over a tri */

static int glt[MAX_LINE_POINTS] = {-1};
static double *glxt[MAX_LINE_POINTS], *glyt[MAX_LINE_POINTS], *glpt[MAX_LINE_POINTS];

static void quadToTri(double xi,double eta,double *r, double *s, double *J)
{
  double r1;

  *r = 0.5e0 * (1.0e0 + xi);
  r1 = 1.0e0 - (*r);
  *s = 0.5e0 * (1.0e0 + eta) * r1;
  *J = 0.25e0 * r1;
}

void GaussLegendre_Triangle(int Nbr_Points, int Num,
			    double *u, double *v, double *w, double *wght)
{
  int i,j,index=0,nb;
  double pt1,pt2,wt1,wt2,dJ,dum;

  nb = (int)sqrt((double)Nbr_Points);

  if(nb*nb != Nbr_Points || nb > MAX_LINE_POINTS){
    Message::Error("Number of points should be n^2 with n in [1,%d]", MAX_LINE_POINTS) ;
    return;
  }

  if(glt[0] < 0) for(i=0 ; i < MAX_LINE_POINTS ; i++) glt[i] = 0 ;

  if(!glt[nb - 1]){
    Message::Info("Computing degenerate GaussLegendre %dX%d for Triangle", nb, nb);
    glxt[nb - 1] = (double*)Malloc(Nbr_Points * sizeof(double));
    glyt[nb - 1] = (double*)Malloc(Nbr_Points * sizeof(double));
    glpt[nb - 1] = (double*)Malloc(Nbr_Points * sizeof(double));
    for(i = 0; i < nb; i++) {
      Gauss_Line(nb, i, &pt1, &dum, &dum, &wt1);
      for(j = 0; j < nb; j++) {
	Gauss_Line(nb, j, &pt2, &dum, &dum, &wt2);
	quadToTri(pt1, pt2, &glxt[nb - 1][index], &glyt[nb - 1][index], &dJ);
	glpt[nb - 1][index++] = dJ * wt1 * wt2;
      }
    }
    glt[nb - 1] = 1;
  }

  *u = glxt[nb - 1][Num] ; *v = glyt[nb - 1][Num] ; *w = 0. ; *wght = glpt[nb - 1][Num] ;
}

/* Gauss Integration over a triangle with a 1/R singularity over node (0,0,0) */

void GaussSingularR_Triangle(int Nbr_Points, int Num,
			     double *u, double *v, double *w, double *wght)
{
  switch (Nbr_Points) {
  case  1 : *u= xts1 [Num] ; *v= yts1 [Num] ; *w= 0. ; *wght= pts1 [Num] ; break ;
  case  3 : *u= xts3 [Num] ; *v= yts3 [Num] ; *w= 0. ; *wght= pts3 [Num] ; break ;
  case  4 : *u= xts4 [Num] ; *v= yts4 [Num] ; *w= 0. ; *wght= pts4 [Num] ; break ;
  default :
    Message::Error("Wrong number of (modified) Gauss points for Triangle: "
                   "valid choices: 1, 3, 4");
    break;
  }
}

