// $Id: Spline.cpp,v 1.4 2002-06-19 00:37:30 geuzaine Exp $

#include "Utils.h"
#include "Spline.h"

Spline::Spline(int n, double *nodes){
  N = n; 
  xx = new double[N+1];
  yr = new double[N+1];
  yi = new double[N+1];
  dyr = new double[N+1];
  dyi = new double[N+1];
  
  for(int i=0; i<N; i++){
    xx[i+1] = nodes[i];
  }
  
}
  
Spline::~Spline(){ 
  delete[] xx;
  delete[] yr;
  delete[] yi;
  delete[] dyr;
  delete[] dyi;
}

void Spline::init(Complex *vals){
  // slope forced to be 0: OK for circle scat from 0->2PI, or with POUs
  // double yp1 = 0., ypn = 0.;

  // natural splines
  double yp1 = 1.e100, ypn = 1.e100;

  for(int i=0; i<N; i++){
    yr[i+1] = vals[i].real();
    yi[i+1] = vals[i].imag();
  }
  spline(xx,yr,N,yp1,ypn,dyr);
  spline(xx,yi,N,yp1,ypn,dyi);
}

Complex Spline::eval(double x){
  double tmp1, tmp2;
  splint(xx,yr,dyr,N,x,&tmp1);
  splint(xx,yi,dyi,N,x,&tmp2);
  return Complex(tmp1,tmp2);
}

// (C) Copr. 1986-92 Numerical Recipes Software J!0.

void Spline::spline(double x[], double y[], int n, double yp1, double ypn, double y2[]){
  int i,k;
  double p,qn,sig,un,*u;
  
  u = new double[n];
  if (yp1 > 0.99e30)
    y2[1]=u[1]=0.0;
  else {
    y2[1] = -0.5;
    u[1]=(3.0/(x[2]-x[1]))*((y[2]-y[1])/(x[2]-x[1])-yp1);
  }
  for (i=2;i<=n-1;i++) {
    sig=(x[i]-x[i-1])/(x[i+1]-x[i-1]);
    p=sig*y2[i-1]+2.0;
    y2[i]=(sig-1.0)/p;
    u[i]=(y[i+1]-y[i])/(x[i+1]-x[i]) - (y[i]-y[i-1])/(x[i]-x[i-1]);
    u[i]=(6.0*u[i]/(x[i+1]-x[i-1])-sig*u[i-1])/p;
  }
  if (ypn > 0.99e30)
    qn=un=0.0;
  else {
    qn=0.5;
    un=(3.0/(x[n]-x[n-1]))*(ypn-(y[n]-y[n-1])/(x[n]-x[n-1]));
  }
  y2[n]=(un-qn*u[n-1])/(qn*y2[n-1]+1.0);
  for (k=n-1;k>=1;k--)
    y2[k]=y2[k]*y2[k+1]+u[k];
  
  delete[] u;
}

void Spline::splint(double xa[], double ya[], double y2a[], int n, double x, double *y){
  double h,b,a;
  int klo,khi,k;

#define TEST_LAST 1

#if TEST_LAST
  static int klo_stored=1, khi_stored=2;
  if(x>=xa[klo_stored] && x<=xa[khi_stored]){
    klo = klo_stored;
    khi = khi_stored;
  }
  else{
#endif
    klo=1;
    khi=n;
    while (khi-klo > 1) {
      k=(khi+klo) >> 1;
      if (xa[k] > x) khi=k;
      else klo=k;
    }
#if TEST_LAST
    klo_stored = klo;
    khi_stored = khi;
  }
#endif

  h=xa[khi]-xa[klo];
  if (h == 0.0){
    Msg(WARNING, "Identical interpolation points (xa=%.16g)!",xa[klo]);
    *y=ya[klo];
  }
  else{
    a=(xa[khi]-x)/h;
    b=(x-xa[klo])/h;
    *y=a*ya[klo]+b*ya[khi]+((a*a*a-a)*y2a[klo]+(b*b*b-b)*y2a[khi])*(h*h)/6.0;
  }
}

