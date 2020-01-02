// GetDP - Copyright (C) 1997-2020 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#ifndef NUMERIC_UTILS_H
#define NUMERIC_UTILS_H

// Numerical routines implemented using either the GSL or Numerical Recipes
double brent(double ax, double bx, double cx,
             double (*f)(double), double tol, double *xmin);
void mnbrak(double *ax, double *bx, double *cx, double *fa, double *fb,
            double *fc, double (*func)(double));

#endif
