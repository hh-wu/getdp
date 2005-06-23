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

#ifndef _NUMERIC_H_
#define _NUMERIC_H_

#include "List.h"

#ifdef MAX
#undef MAX
#endif
#ifdef MIN
#undef MIN
#endif

#define THESIGN(a) ((a)>=0 ? 1 : -1)
#define THEABS(a)  ((a)>=0 ? a : -a)
#define SQU(a)     ((a)*(a)) 
#define CUB(a)     ((a)*(a)*(a)) 
#define MIN(a,b)   ((a)<(b) ? (a) : (b))
#define MAX(a,b)   ((a)>(b) ? (a) : (b))
#define HYPOT(a,b) (sqrt((a)*(a)+(b)*(b)))
#define PSCA2(a,b) ((a)[0]*(b)[0] + (a)[1]*(b)[1])
#define PSCA3(a,b) ((a)[0]*(b)[0] + (a)[1]*(b)[1] + (a)[2]*(b)[2])
#define NORM2(a)   (sqrt((a)[0]*(a)[0]+(a)[1]*(a)[1])) 
#define NORM3(a)   (sqrt((a)[0]*(a)[0]+(a)[1]*(a)[1]+(a)[2]*(a)[2])) 

#define DSQU SQU
#define SQR  SQU
#define FSQR SQU
#define DSQR SQU

#define IMAX MAX
#define LMAX MAX
#define FMAX MAX
#define DMAX MAX

#define IMIN MIN
#define LMIN MIN
#define FMIN MIN
#define DMIN MIN

#define PI                 3.1415926535897932
#define TWO_PI             6.2831853071795865
#define ONE_OVER_TWO_PI    1.5915494309189534E-01
#define ONE_OVER_FOUR_PI   7.9577471545947668E-02
#define EULER              0.5772156649015329


#define SIGN(a,b) ((b) >= 0.0 ? fabs(a) : -fabs(a))

void hollowcyl(double x, double y, double *bx, double *by, double *phi, 
	       double b0, double mur, double r0, double r1);

int check_gsl();

/* Numerical routines implemented using either Numerical Recipes or
   the GSL */

double brent(double ax, double xx, double bx, 
	     double (*f)(double), double tol, double *xmin);
void mnbrak(double *ax, double *bx, double *cx, double *fa, double *fb, double *fc,
	    double (*func)(double));
void dsvdcmp(double **a, int m, int n, double w[], double **v);
double ran3(long *idum) ;
void hqr(double **a, int n, double wr[], double wi[]) ;

#endif
