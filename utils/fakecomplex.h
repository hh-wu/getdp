/* $Id: fakecomplex.h,v 1.1 2002-02-07 17:19:05 geuzaine Exp $ */
#ifndef _FAKECOMPLEX_H_
#define _FAKECOMPLEX_H_

#include <math.h>

typedef struct {
  double r;
  double i;
} complex;

void    cotofl(complex a, double b , double c);
complex fltoco(double a, double b);
complex Csum(complex a, complex b);
complex Csub(complex a, complex b);
complex Cprod(complex a, complex b);
complex Cdiv(complex a, complex b);
complex Cconj(complex a);
complex Cneg(complex a);
double  Cmodu(complex a);
complex Cpow(complex a, double b);
complex Cprodr(double a, complex b);
void    Cisum(complex *a, complex b);
void    Cisub(complex *a, complex b);
void    Ciprod(complex *a, complex b);
#endif


