// $Id: FFT.cpp,v 1.1 2002-04-12 17:11:02 geuzaine Exp $

#include "Utils.h"
#include "FFT.h"

// packing order for F: n=[0,1...m/2-1,-m/2,...,-1]

#if 0 // Slow DFT

FFT::FFT(int n){
  N = n;
}

void FFT::forward(Complex *f, Complex *F){
  int k, n;
  for(n=0 ; n<N ; n++){
    F[n] = 0.;
    for(k=0 ; k<N ; k++){
      F[n] += f[k] * (cos(-TWO_PI*n*k/(double)N)+I*sin(-TWO_PI*n*k/(double)N));
    }
  }
  print(f, F);
}

void FFT::backward(Complex *F, Complex *f){
  int k, n;
  for(k=0 ; k<N ; k++){
    f[k] = 0.;
    for(n=0 ; n<N ; n++){
      f[k] += 1./(double)N * F[n] * (cos(TWO_PI*n*k/(double)N)+I*sin(TWO_PI*n*k/(double)N));
    }
  }
}

Complex FFT::eval(double t, Complex *F){
  int i, j;
  Complex sum;

  sum = 0.;
  for(i=0 ; i<N ; i++){
    if(i<=N/2) j = i;
    else j = -N+i;
    sum += (cos(j*t)+I*sin(j*t)) * F[i] / (double)N;
  }

  return sum;
}

#else

FFT::FFT(int n){
  N = n;
  forwardPlan = fftw_create_plan(n,FFTW_FORWARD,FFTW_ESTIMATE);
  backwardPlan = fftw_create_plan(n,FFTW_BACKWARD,FFTW_ESTIMATE);
  tmp1 = new fftw_complex[n];
  tmp2 = new fftw_complex[n];
}

void FFT::forward(Complex *f, Complex *F){
  int i;
  for(i=0; i<N; i++){
    tmp1[i].re = f[i].real();
    tmp1[i].im = f[i].imag();
  }
  fftw_one(forwardPlan,tmp1,tmp2);
  for(i=0; i<N; i++){
    F[i] = Complex(tmp2[i].re,tmp2[i].im);
  }
  print(f, F);
}

void FFT::backward(Complex *F, Complex *f){
  int i;
  for(i=0; i<N; i++){
    tmp1[i].re = F[i].real();
    tmp1[i].im = F[i].imag();
  }
  fftw_one(backwardPlan,tmp1,tmp2);
  for(i=0; i<N; i++){
    f[i] = Complex(tmp2[i].re,tmp2[i].im);
  }
}

Complex FFT::eval(double t, Complex *F){
  int i, j;
  Complex sum;

  // backward on expanded grid
  // polynomial interpolation
  
  sum = 0.;
  for(i=0 ; i<N ; i++){
    if(i<=N/2) j = i;
    else j = -N+i;
    sum += (cos(j*t)+I*sin(j*t)) * F[i] / (double)N;
  }

  return sum;
}

#endif

void FFT::print(Complex *f, Complex *F){
  int k, n;
  printf("t = [ \n");
  for(k=0 ; k<N ; k++) printf("%.15e + (%.15ei)\n", f[k].real(), f[k].imag());
  printf("] \n");

  printf("f = [ \n");
  for(n=0 ; n<N ; n++) printf("%.15e + (%.15ei)\n", F[n].real(), F[n].imag());
  printf("] \n");
}

