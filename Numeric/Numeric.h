/* $Id: Numeric.h,v 1.6 2003-03-18 00:19:19 geuzaine Exp $ */
#ifndef _NUMERIC_H_
#define _NUMERIC_H_

#include "Data_Numeric.h"

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

#define SIGN(a,b) ((b) >= 0.0 ? fabs(a) : -fabs(a))

void hollowcyl(double x, double y, double *bx, double *by, double *phi, 
	       double b0, double mur, double r0, double r1);


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
