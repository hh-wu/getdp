#ifndef _FFT_H_
#define _FFT_H_

#include <fftw.h>
#include "Complex.h"

class FFT {
private:
  int N;
  fftw_plan forwardPlan;
  fftw_plan backwardPlan;
  fftw_complex *tmp1, *tmp2;

public:
  FFT(int n);
  ~FFT() { 
    delete[] tmp1; 
    delete[] tmp2; 
    // destroy fftw stuff
  }

  void forward(Complex *f, Complex *F);
  void backward(Complex *F, Complex *f);
  Complex eval(double t, Complex *F);
  void print(Complex *f, Complex *F);
};

#endif

