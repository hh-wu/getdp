#ifndef _BESSEL_H_
#define _BESSEL_H_

#include <complex>

using namespace std;

extern complex<double> I;

complex<double> Bessel_j(int n, complex<double> x);
complex<double> Bessel_y(int n, complex<double> x);
complex<double> Bessel_h(int type, int n, complex<double> x);

#endif
