/* $Id: hollowcyl.c,v 1.2 2000-09-07 18:47:27 geuzaine Exp $ */
/* Solution analytique de l'induction magnetique dans le cas
   d'un cylindre creux de rayon interne r0 et de rayon externe r1.
   Le champ applique est dirige selon la direction horizontale de
   gauche a droite. */

/* L'angle theta est compte a partir de l'axe defini par la
   direction du champ applique */


/* fonction qui renvoie un tableau dont les trois composantes bxy[0], bxy[1]
et bxy[2] sont respectivement le potentiel scalaire magnetique phi et les
composantes de la densite d'induction magnetique b selon x et selon y */

#include <stdlib.h>
#include <math.h>
#include "nrdefs.h"

void hollowcyl(double x, double y, double *bx, double *by, double *phi, 
	       double b0, double mur, double r0, double r1) {

  double r,theta,mu0 ;
  double kp,km,a,b,c,d ;
  double brt[2] ; 

  mu0 = 4.e-7 * 3.1415926536 ;

  kp = 1./mur + 1. ;
  km = 1./mur - 1. ;

  b = 2. * kp * b0 / (mur*mu0*(km*DSQR(r0/r1)*(2.-kp)+DSQR(kp))) ;
  d = mur/2. * (DSQR(r0)*(2.-kp)+DSQR(r1)*km) * b ;
  a = 2. * b / kp ;
  c = DSQR(r0) * (a-b) ;
							   
  r = sqrt(x*x + y*y) ;
  theta = atan2(y,x) ;

  if (r <= r0) { 
    *phi   = a * r * sin(theta) ;
    brt[0] = mu0 * a * sin(theta) ;
    brt[1] = mu0 * a * cos(theta) ; 
  }
  else if (r <= r1) { 
    *phi   = (b*r + c/r) * sin(theta) ;
    brt[0] = mur * mu0 * (b - c/DSQR(r)) * sin(theta) ;
    brt[1] = mur * mu0 * (b + c/DSQR(r)) * cos(theta) ; 
  }
  else { 
    *phi   = (b0/mu0*r + d/r) * sin(theta) ;
    brt[0] = (b0 - mu0*d/DSQR(r)) * sin(theta) ;
    brt[1] = (b0 + mu0*d/DSQR(r)) * cos(theta) ; 
  }

  *bx = brt[0] * cos(theta) - brt[1] * sin(theta) ;
  *by = brt[0] * sin(theta) + brt[1] * cos(theta) ;

}



