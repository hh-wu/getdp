// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <math.h>
#include "Gauss.h"
#include "Gauss_Tetrahedron.h"
#include "Message.h"
#include "MallocUtils.h"

/* Gauss integration over a tetrahedron */

void Gauss_Tetrahedron(int Nbr_Points, int Num,
		       double *u, double *v, double *w, double *wght)
{
  switch (Nbr_Points) {

  case  1 :
    *u = xtet1 [Num] ; *v = ytet1 [Num] ; *w = ztet1 [Num] ;
    *wght = ptet1 [Num] ; break ;

  case  4 :
    *u = xtet4 [Num] ; *v = ytet4 [Num] ; *w = ztet4 [Num] ;
    *wght = ptet4 [Num] ; break ;

  case  5 :
    *u = xtet5 [Num] ; *v = ytet5 [Num] ; *w = ztet5 [Num] ;
    *wght = ptet5 [Num] ; break ;

  case 15 :
    *u = xtet15[Num] ; *v = ytet15[Num] ; *w = ztet15[Num] ;
    *wght = ptet15[Num] ; break ;

  case 16 :
    *u = xtet16[Num] ; *v = ytet16[Num] ; *w = ztet16[Num] ;
    *wght = ptet16[Num] ; break ;

  case 17 :
    *u = xtet17[Num] ; *v = ytet17[Num] ; *w = ztet17[Num] ;
    *wght = ptet17[Num] ; break ;

  case 29 :
    *u = xtet29[Num] ; *v = ytet29[Num] ; *w = ztet29[Num] ;
    *wght = ptet29[Num] ; break ;

  default :
    Message::Error("Wrong number of Gauss Points for Tetrahedron: "
                   "valid choices: 1, 4, 5, 15, 16, 17, 29");
    break;
  }
}


/* Degenerate n1Xn2Xn3 Gauss-Legendre scheme to integrate over a tet */

static int gltet[MAX_LINE_POINTS] = {-1};
static double *glxtet[MAX_LINE_POINTS], *glytet[MAX_LINE_POINTS] ;
static double *glztet[MAX_LINE_POINTS], *glptet[MAX_LINE_POINTS];

void hexToTet(double xi,double eta, double zeta,
	      double *r, double *s, double *t, double *J)
{
  double r1,rs1;

  *r = 0.5e0*(1.0e0+xi);
  r1 = 1.0e0-(*r);
  *s = 0.5e0*(1.0e0+eta)*r1;
  rs1 = 1.0e0-(*r)-(*s);
  *t = 0.5e0*(1.0e0+zeta)*rs1;
  *J = 0.125e0*r1*rs1;
}

void  GaussLegendre_Tetrahedron(int Nbr_Points, int Num,
				double *u, double *v, double *w, double *wght)
{
  int i,j,k,index=0,nb;
  double pt1,pt2,pt3,wt1,wt2,wt3,dJ,dum;

  nb = (int)pow((double)Nbr_Points, 1./3.);

  if(nb*nb*nb != Nbr_Points || nb > MAX_LINE_POINTS){
    Message::Error("Number of points should be n^3 with n in [1,%d]", MAX_LINE_POINTS) ;
    return;
  }

  if(gltet[0] < 0) for(i=0 ; i < MAX_LINE_POINTS ; i++) gltet[i] = 0 ;

  if(!gltet[nb-1]){
    Message::Info("Computing degenerate GaussLegendre %dX%dX%d for Tetrahedron",
                  nb, nb, nb);
    glxtet[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glytet[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glztet[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glptet[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    for(i=0; i < nb; i++) {
      Gauss_Line(nb, i, &pt1, &dum, &dum, &wt1);
      for(j=0; j < nb; j++) {
	Gauss_Line(nb, j, &pt2, &dum, &dum, &wt2);
	for(k=0; k < nb; k++) {
	  Gauss_Line(nb, k, &pt3, &dum, &dum, &wt3);
	  hexToTet(pt1, pt2, pt3, &glxtet[nb-1][index], &glytet[nb-1][index],
		   &glztet[nb-1][index], &dJ);
	  glptet[nb-1][index++] = dJ*wt1*wt2*wt3;
	}
      }
    }
    gltet[nb-1] = 1;
  }

  *u = glxtet[nb-1][Num] ; *v = glytet[nb-1][Num] ; *w = glztet[nb-1][Num] ;
  *wght = glptet[nb-1][Num] ;
}
