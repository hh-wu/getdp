/* $Id: fakecomplex.c,v 1.1 2002-02-07 17:19:05 geuzaine Exp $ */
#include "complex.h"

void cotofl(complex a, double b , double c)
{
  b = a.r;
  c = a.i;
}

complex fltoco(double a, double b)
{
  complex s;

  s.r = a;
  s.i = b;
  return(s);
}

complex Csum(complex a, complex b)
{
  complex s;

  s.r = a.r + b.r;
  s.i = a.i + b.i;
  return(s);
}

complex Csub(complex a, complex b)
{
  complex s;

  s.r = a.r - b.r;
  s.i = a.i - b.i;
  return(s);
}

complex Cprod(complex a, complex b)
{
  complex s;

  s.r = a.r * b.r - a.i * b.i;
  s.i = a.r * b.i + a.i * b.r;
  return(s);
}

complex Cdiv(complex a, complex b)
{
  complex s;
  double den;

  den = b.r * b.r + b.i * b.i;
  s.r = (a.r * b.r + a.i * b.i) / den;
  s.i = (a.i * b.r - a.r * b.i) / den;
  return(s);
}

complex Cconj(complex a)
{
  complex s;

  s.r = a.r;
  s.i = -a.i;
  return(s);
}

complex Cneg(complex a)
{
  complex s;

  s.r = -a.r;
  s.i = -a.i;
  return(s);
}

double Cmodu(complex a)
{
  return(sqrt(a.r * a.r + a.i * a.i));
}

complex Cpow(complex a, double b)
{
  complex s;
  double mod, arg;

  mod = a.r * a.r + a.i * a.i;
  arg = atan2(a.i,a.r);
  mod = pow(mod,0.5*b);
  arg *= b;
  s.r = mod * cos(arg);
  s.i = mod * sin(arg);

  return(s);
}

complex Cprodr(double a, complex b)
{
  complex s;

  s.r = a * b.r;
  s.i = a * b.i;
  return(s);
}

void Cisum(complex *a, complex b)
{
  (*a).r += b.r;
  (*a).i += b.i;
}

void Cisub(complex *a, complex b)
{
  (*a).r -= b.r;
  (*a).i -= b.i;
}

void Ciprod(complex *a, complex b)
{
  complex aa,d;

  aa.r=(*a).r;
  aa.i=(*a).i;

  d.r = aa.r * b.r - aa.i * b.i;
  d.i = aa.r * b.i + aa.i * b.r;

  (*a).r = d.r;
  (*a).i = d.i;
}
