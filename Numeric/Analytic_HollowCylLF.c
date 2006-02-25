#define RCSID "$Id: Analytic_HollowCylLF.c,v 1.6 2006-02-25 15:00:24 geuzaine Exp $"
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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
 *
 * Contributor(s):
 *   Philippe Klinkenberg
 */

/* Solution analytique de l'induction magnetique dans le cas
   d'un cylindre creux de rayon interne r0 et de rayon externe r1.
   Le champ applique est dirige selon la direction horizontale de
   gauche a droite. */

/* L'angle theta est compte a partir de l'axe defini par la
   direction du champ applique */


/* fonction qui renvoie un tableau dont les trois composantes bxy[0], bxy[1]
et bxy[2] sont respectivement le potentiel scalaire magnetique phi et les
composantes de la densite d'induction magnetique b selon x et selon y */

#include "GetDP.h"
#include "Numeric.h"

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



