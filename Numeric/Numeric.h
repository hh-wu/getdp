/* $Id: Numeric.h,v 1.3 2000-10-21 12:18:30 geuzaine Exp $ */
#ifndef _NUMERIC_H_
#define _NUMERIC_H_

#include "nrutil.h"

void invert_singular_matrix(double **M, int n, double **I);

void hollowcyl(double x, double y, double *bx, double *by, double *phi, 
	       double b0, double mur, double r0, double r1);

#endif
