#ifndef _GSL_BRENT_H_
#define _GSL_BRENT_H_

double brent(double ax, double xx, double bx, 
	     double (*f)(double), double tol, double *xmin);
void mnbrak(double *ax, double *bx, double *cx, double *fa, double *fb, double *fc,
	    double (*func)(double));

#endif
