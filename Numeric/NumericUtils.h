// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _NUMERIC_UTILS_H_
#define _NUMERIC_UTILS_H_

// Numerical routines implemented using either the GSL or Numerical Recipes
double brent(double ax, double bx, double cx,
             double (*f)(double), double tol, double *xmin);
void mnbrak(double *ax, double *bx, double *cx, double *fa, double *fb,
            double *fc, double (*func)(double));

#endif
