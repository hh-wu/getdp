#ifndef _FFT_H_
#define _FFT_H_

#include <fftw.h>
#include "Complex.h"

class FFT {
private:
  int N, expansionFactor, Nexp;
  Complex *fourierCoefs;
  Complex *expandedVals;
  fftw_plan forwardPlan;
  fftw_plan backwardPlan;
  fftw_complex *tmp1, *tmp2;

public:
  FFT(int n);
  ~FFT();

  void forward(Complex *f, Complex *F);
  void backward(Complex *F, Complex *f);
  void init(Complex *f);
  Complex eval(double t);
};

#endif

