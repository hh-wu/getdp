// $Id: Bessel.cpp,v 1.7 2002-03-04 17:11:20 geuzaine Exp $

#include "GetDP.h"
#include "Complex.h"
#include "Amos_F.h"

// First kind Bessel function

Complex Bessel_j(int n, Complex x){
  double bjr, bji, fnu = (double)n, xr = x.real(), xi = x.imag();
  int nz = 0, ierr, kode = 1, NB = 1;

  if(x.real() == 0. && x.imag() == 0.) return 1.; 
  zbesj_(&xr, &xi, &fnu, &kode, &NB, &bjr, &bji, &nz, &ierr);
  if(ierr) Msg(ERROR, "Exception caught in first kind Bessel function");
  return bjr + I*bji;
}

// Second kind Bessel function

Complex Bessel_y(int n, Complex x){
  double byr, byi, auxbyr, auxbyi, fnu = (double)n, xr = x.real(), xi = x.imag();
  int nz = 0, ierr, kode = 1, NB = 1;

  zbesy_(&xr, &xi, &fnu, &kode, &NB, &byr, &byi, &nz, &auxbyr, &auxbyi, &ierr);
  if(ierr) Msg(ERROR, "Exception caught in second kind Bessel function");
  return byr + I*byi;
}

// Third kind Bessel function (Hankel function)

Complex Bessel_h(int type, int n, Complex x){
  double bhr, bhi, fnu = (double)n, xr = x.real(), xi = x.imag(); 
  int nz = 0, ierr, kode = 1, NB = 1;

  zbesh_(&xr, &xi, &fnu, &kode, &type, &NB, &bhr, &bhi, &nz, &ierr) ;
  if(ierr) Msg(ERROR, "Exception caught in third kind Bessel function");     
  return bhr + I*bhi;
}
