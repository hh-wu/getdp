#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "Message.h"
#include "Quadrature.h"
#include "Gauss_Tetrahedron.h"

#include "ualloc.h"

/* Gauss integration over a tetrahedron */

void  Gauss_Tetrahedron (int Nbr_Points, int Num,
			 double *u, double *v, double *w, double *wght) {

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

  default : 
    Msg(ERROR, "Wrong Number of Integration Points in Gauss_Tetrahedron\n"
	       "Valid choices: 1, 4, 5, 15");
    break;
  }

}


/* Degenerate n1Xn2Xn3 Gauss-Legendre scheme to integrate over a tet */

int gltet[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
double *glxtet[20], *glytet[20], *glztet[20], *glptet[20];

void hexToTet(double xi,double eta, double zeta,
	      double *r, double *s, double *t, double *J) {
  double r1,rs1;
  *r = 0.5e0*(1.0e0+xi);
  r1 = 1.0e0-(*r);
  *s = 0.5e0*(1.0e0+eta)*r1;
  rs1 = 1.0e0-(*r)-(*s);
  *t = 0.5e0*(1.0e0+zeta)*rs1;
  *J = 0.125e0*r1*rs1;
}

void  GaussLegendre_Tetrahedron (int Nbr_Points, int Num,
				 double *u, double *v, double *w, double *wght) {

  int i,j,k,index,nb;
  double pt1,pt2,pt3,wt1,wt2,wt3,dJ,dum;

  nb = (int)cbrt((double)Nbr_Points);

  if(nb*nb*nb != Nbr_Points || nb > 20)
    Msg(ERROR, "Number of Points should be n^3 with n in [1,20]") ;

  if(!gltet[nb-1]){
    Msg(INFO, "Computing GaussLegendre %dx%dx%d for Tetrahedron", nb, nb, nb);
    glxtet[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glytet[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glztet[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    glptet[nb-1] = (double*)Malloc(Nbr_Points*sizeof(double));
    index = 0;
    for(i=0; i < nb; i++) {
      Gauss_Line(nb, i, &pt1, &dum, &dum, &wt1);
      for(j=0; j < nb; j++) {
	Gauss_Line(nb, j, &pt2, &dum, &dum, &wt2);
	for(k=0; k < nb; k++) {
	  Gauss_Line(nb, k, &pt3, &dum, &dum, &wt3);
	  hexToTet(pt1, pt2, pt3, &glxtet[nb-1][index], &glytet[nb-1][index], 
		   &glztet[nb-1][index], &dJ);
	  glptet[nb-1][index++] = dJ*wt1*wt2*wt3*6.0;
	}
      }
    }
    gltet[nb-1] = 1;
  }
  *u= glxtet[nb-1][Num] ; *v= glytet[nb-1][Num] ; *w=  glztet[nb-1][Num] ;
  *wght= glptet[nb-1][Num] ;
}
