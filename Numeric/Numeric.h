/* $Id: Numeric.h,v 1.2 2000-09-07 18:47:27 geuzaine Exp $ */
#ifndef SOLVER_MISC_H
#define SOLVER_MISC_H

#include "nrutil.h"

void invert_singular_matrix(double **M, int n, double **I);

void hollowcyl(double x, double y, double *bx, double *by, double *phi, 
	       double b0, double mur, double r0, double r1);

#endif
