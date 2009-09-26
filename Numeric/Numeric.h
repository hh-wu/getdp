// GetDP - Copyright (C) 1997-2009 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#ifndef _NUMERIC_H_
#define _NUMERIC_H_

int check_gsl();
void invert_singular_matrix3x3(double MM[3][3], double II[3][3]);

// Numerical routines implemented using either Numerical Recipes or
// the GSL
double brent(double ax, double bx, double cx,
             double (*f)(double), double tol, double *xmin);
void mnbrak(double *ax, double *bx, double *cx, double *fa, double *fb,
            double *fc, double (*func)(double));
void newt(double x[], int n, int *check,
          void (*vecfunc)(int, double [], double []));

#endif
