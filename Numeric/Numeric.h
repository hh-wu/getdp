/* $Id: Numeric.h,v 1.4 2000-10-27 22:06:52 geuzaine Exp $ */
#ifndef _NUMERIC_H_
#define _NUMERIC_H_

#include "nrutil.h"

void dsvdcmp(double **a, int m, int n, double w[], double **v);

void hollowcyl(double x, double y, double *bx, double *by, double *phi, 
	       double b0, double mur, double r0, double r1);

#endif
