// $Id: Bessel.cpp,v 1.3 2002-02-10 23:05:59 geuzaine Exp $

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <complex>

#include "GetDP.h"
#include "Amos_F.h"

complex<double> I(0.0,1.0);

// First kind Bessel function
complex<double> Bessel_j(int n, complex<double> x){
  double bjr, bji, fnu = (double)n, xr = x.real(), xi = x.imag();
  int nz = 0, ierr, kode = 1, NB = 1;

  if(x.real() == 0. && x.imag() == 0.) return 1.; 
  zbesj_(&xr, &xi, &fnu, &kode, &NB, &bjr, &bji, &nz, &ierr);
  if(ierr) Msg(ERROR, "Exception caught in first kind Bessel function");
  return bjr + I*bji;
}

// Second kind Bessel function
complex<double> Bessel_y(int n, complex<double> x){
  double byr, byi, auxbyr, auxbyi, fnu = (double)n, xr = x.real(), xi = x.imag();
  int nz = 0, ierr, kode = 1, NB = 1;

  zbesy_(&xr, &xi, &fnu, &kode, &NB, &byr, &byi, &nz, &auxbyr, &auxbyi, &ierr);
  if(ierr) Msg(ERROR, "Exception caught in second kind Bessel function");
  return byr + I*byi;
}

// Third kind Bessel function (Hankel function)
complex<double> Bessel_h(int type, int n, complex<double> x){
  double bhr, bhi, fnu = (double)n, xr = x.real(), xi = x.imag(); 
  int nz = 0, ierr, kode = 1, NB = 1;

  zbesh_(&xr, &xi, &fnu, &kode, &type, &NB, &bhr, &bhi, &nz, &ierr) ;
  if(ierr) Msg(ERROR, "Exception caught in third kind Bessel function");     
  return bhr + I*bhi;
}
