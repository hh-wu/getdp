// $Id: Bessel.cpp,v 1.9 2002-04-23 00:41:19 geuzaine Exp $

#include "Utils.h"
#include "Complex.h"
#include "Amos_F.h"

void Bessel_error(int ierr, char *str){
  static int warn=0;
  switch(ierr){
  case 0 :
    break;
  case 1 :
    Msg(ERROR, "Input error in %s", str);
    break;
  case 2 :
    Msg(ERROR, "Overflow in %s", str);
    break;
  case 3 :
    if(!warn){
      Msg(WARNING, "Lose half machine accuracy in %s (large argument or order)", str);
      warn = 1;
    }
    break;
  case 4 :
    Msg(ERROR, "Complete loss of significance in %s (argument or order too large)", str);
    break;
  case 5 :
    Msg(ERROR, "Failed to converge in %s", str);
    break;
  }
}

// First kind Bessel function

Complex Bessel_j(int n, Complex x){
  double bjr, bji, fnu = (double)n, xr = x.real(), xi = x.imag();
  int nz = 0, ierr, kode = 1, NB = 1;

  if(x.real() == 0. && x.imag() == 0.) return 1.; 
  zbesj_(&xr, &xi, &fnu, &kode, &NB, &bjr, &bji, &nz, &ierr);
  Bessel_error(ierr, "Bessel_j");
  
  return Complex(bjr,bji);
}

// Second kind Bessel function

Complex Bessel_y(int n, Complex x){
  double byr, byi, auxbyr, auxbyi, fnu = (double)n, xr = x.real(), xi = x.imag();
  int nz = 0, ierr, kode = 1, NB = 1;

  zbesy_(&xr, &xi, &fnu, &kode, &NB, &byr, &byi, &nz, &auxbyr, &auxbyi, &ierr);
  Bessel_error(ierr, "Bessel_y");
  return Complex(byr,byi);
}

// Third kind Bessel function (Hankel function)

Complex Bessel_h(int type, int n, Complex x){
  double bhr, bhi, fnu = (double)n, xr = x.real(), xi = x.imag(); 
  int nz = 0, ierr, kode = 1, NB = 1;

  zbesh_(&xr, &xi, &fnu, &kode, &type, &NB, &bhr, &bhi, &nz, &ierr) ;
  Bessel_error(ierr, "Bessel_h");
  return Complex(bhr,bhi);
}
