// $Id: Scatterer.cpp,v 1.17 2002-05-31 00:52:13 geuzaine Exp $

#include "Utils.h"
#include "Tools.h"
#include "Scatterer.h"
#include "Function.h"
#include "nrutil.h"

#define TOL_LOOSE  1.e-3

int fcmp_CPoint(const void * a, const void * b) {
  double cmp ;
  
  cmp = ((CPoint*)a)->val - ((CPoint*)b)->val ;
  if      (cmp > TOL_LOOSE)  return  1 ;
  else if (cmp < -TOL_LOOSE) return -1 ;
  else                       return  0 ;
}

int fcmp_double_loose(const void *a, const void *b){
  double cmp ;
  
  cmp = *(double*)a - *(double*)b ;
  if      (cmp > TOL_LOOSE)  return  1 ;
  else if (cmp < -TOL_LOOSE) return -1 ;
  else                       return  0 ;
}

// Parametric definition of the scatterers. This is awfull c++, I
// know, thanks :-)

int Scatterer::dim(){
  switch(type){
  case CIRCLE :
  case ELLIPSE :
  case DROP :
  case KITE : return 2;
  default : return 3;
  }
}

void Scatterer::x(double u, double v, double *x){
  switch(type){
  case CIRCLE :
    x[0] = cos(u); 
    x[1] = sin(u); 
    x[2] = 0.; 
    break;
  case ELLIPSE :
    x[0] = a*cos(u); 
    x[1] = b*sin(u); 
    x[2] = 0.; 
    break;
  case DROP :
    x[0] = 2.*sin(u/2.) - 1.; // -1 to avoid r=0 polar parameterization
    x[1] = -sin(u); 
    x[2] = 0.; 
    break;
  case KITE :
    x[0] = cos(u) + 0.65*cos(2*u) -0.65;
    x[1] = 1.5*sin(u); 
    x[2] = 0.; 
    break;
  }
}

void Scatterer::dx(double u, double v, double *x){ 
  switch(type){
  case CIRCLE :
    x[0] = -sin(u); 
    x[1] = cos(u); 
    x[2] = 0.; 
    break;
  case ELLIPSE :
    x[0] = -a*sin(u); 
    x[1] = b*cos(u); 
    x[2] = 0.; 
    break;
  case DROP :
    x[0] = cos(u/2.); 
    x[1] = -cos(u); 
    x[2] = 0.; 
    break;
  case KITE :
    x[0] = -sin(u) - 2*0.65*sin(2*u);
    x[1] = 1.5*cos(u); 
    x[2] = 0.; 
    break;
  }
}

void Scatterer::ddx(double u, double v, double *x){ 
  switch(type){
  case CIRCLE :
    x[0] = -cos(u); 
    x[1] = -sin(u); 
    x[2] = 0.; 
    break;
  case ELLIPSE :
    x[0] = -a*cos(u); 
    x[1] = -b*sin(u); 
    x[2] = 0.; 
    break;
  case DROP :
    x[0] = -0.5*sin(u/2.); 
    x[1] = sin(u); 
    x[2] = 0.; 
    break;
  case KITE :
    x[0] = -cos(u) - 4*0.65*cos(2*u);
    x[1] = -1.5*sin(u); 
    x[2] = 0.; 
    break;
  }
}

void Scatterer::polar(double u, double *r, double *dr, double *ddr){
  double r2, cart[3], dcart[3], ddcart[3];

  x(u,-1,cart);
  r2 = SQU(cart[0])+SQU(cart[1]);
  *r = sqrt(r2);

  if(!r2){
    Msg(WARNING, "r==0 in polar transformation");
    *dr = *ddr = 0.;
    return;
  }

  dx(u,-1,dcart);
  *dr = (cart[0]*dcart[0]+cart[1]*dcart[1]) / *r;

  ddx(u,-1,ddcart);
  *ddr = - *dr / r2 + 
    (SQU(dcart[0]) + cart[0]*ddcart[0] + SQU(dcart[1]) + cart[1]*ddcart[1]) / *r ;
}

// Compute (hum!) the target point

void Scatterer::singularPoint(double t0, List_T *pts){
  CPoint pt;

  pt.degree = 1;
  pt.val = t0;
  List_Insert(pts, &pt, fcmp_CPoint);
}


//  Compute all critical points (i.e. for which gradient of the total
//  phase of the integral equation vanishes).

void Scatterer::criticalPoints(int index, List_T *pts){
  int i;
  double val;
  CPoint pt;

  pt.degree = 2;

  for(i=0; i<List_Nbr(criticalPointsList[index]); i++){
    List_Read(criticalPointsList[index],i,&val);
    pt.val = val;
    List_Insert(pts, &pt, fcmp_CPoint);
  }
}

#define TINY 1.0e-20;

void Scatterer::ludcmp (double **a, int n, int *indx, double *d){
  int i, imax, j, k;
  double big, dum, sum, temp;
  double *vv;

  vv = dvector (1, n);
  *d = 1.0;
  for (i = 1; i <= n; i++) {
    big = 0.0;
    for (j = 1; j <= n; j++)
      if ((temp = fabs (a[i][j])) > big)
	big = temp;
    if (big == 0.0)
      nrerror ("Singular matrix in routine ludcmp");
    vv[i] = 1.0 / big;
  }
  for (j = 1; j <= n; j++) {
    for (i = 1; i < j; i++) {
      sum = a[i][j];
      for (k = 1; k < i; k++)
	sum -= a[i][k] * a[k][j];
      a[i][j] = sum;
    }
    big = 0.0;
    for (i = j; i <= n; i++) {
      sum = a[i][j];
      for (k = 1; k < j; k++)
	sum -= a[i][k] * a[k][j];
      a[i][j] = sum;
      if ((dum = vv[i] * fabs (sum)) >= big) {
	big = dum;
	imax = i;
      }
    }
    if (j != imax) {
      for (k = 1; k <= n; k++) {
	dum = a[imax][k];
	a[imax][k] = a[j][k];
	a[j][k] = dum;
      }
      *d = -(*d);
      vv[imax] = vv[j];
    }
    indx[j] = imax;
    if (a[j][j] == 0.0)
      a[j][j] = TINY;
    if (j != n) {
      dum = 1.0 / (a[j][j]);
      for (i = j + 1; i <= n; i++)
	a[i][j] *= dum;
    }
  }
  free_dvector (vv, 1, n);
}

#undef TINY

void Scatterer::lubksb (double **a, int n, int *indx, double b[]){
  int i, ii = 0, ip, j;
  double sum;

  for (i = 1; i <= n; i++) {
    ip = indx[i];
    sum = b[ip];
    b[ip] = b[i];
    if (ii)
      for (j = ii; j <= i - 1; j++)
	sum -= a[i][j] * b[j];
    else if (sum)
      ii = i;
    b[i] = sum;
  }
  for (i = n; i >= 1; i--) {
    sum = b[i];
    for (j = i + 1; j <= n; j++)
      sum -= a[i][j] * b[j];
    b[i] = sum / a[i][i];
  }
}

#define FREERETURN {free_dmatrix(fjac,1,n,1,n);free_dvector(fvec,1,n);\
	free_dvector(p,1,n);free_ivector(indx,1,n);}

// we should particularize for the 1d case...

int Scatterer::mnewt(int ntrial, double x[], int n, double tolx, double tolf){
  int k,i,*indx;
  double errx,errf,d,*fvec,**fjac,*p;
  
  indx=ivector(1,n);
  p=dvector(1,n);
  fvec=dvector(1,n);
  fjac=dmatrix(1,n,1,n);
  for (k=1;k<=ntrial;k++) {
    phase2D(x,n,fvec,fjac);
    errf=0.0;
    for (i=1;i<=n;i++) errf += fabs(fvec[i]);
    if (errf <= tolf){
      FREERETURN;
      return 0;
    }
    for (i=1;i<=n;i++) p[i] = -fvec[i];
    ludcmp(fjac,n,indx,&d);
    lubksb(fjac,n,indx,p);
    errx=0.0;
    for (i=1;i<=n;i++) {
      errx += fabs(p[i]);
      x[i] += p[i]; // should we relax?
    }
    if (errx <= tolx){
      FREERETURN;
      return 0;
    }
  }
  FREERETURN;
  return 1;
}

#undef FREERETURN

void Scatterer::phase2D(double *x, int n, double *fvec, double **fjac){
  double t = x[1], t0 = currentTargetU;
  double r0, dr0, ddr0, r, dr, ddr, tmp1, tmp2;

  polar(t,&r,&dr,&ddr);
  polar(t0,&r0,&dr0, &ddr0);

  tmp1 = 2.*r*dr - 2.*r0*dr*cos(-t+t0) - 2.*r0*r*sin(-t+t0) ;
  tmp2 = r0*r0 + r*r - 2*r0*r*cos(t-t0) ;

  // gradient of the phase
  fvec[1] = 0.5 * tmp1 / sqrt(tmp2) + dr*cos(t) - r*sin(t) ;

  // derivative for jacobian
  fjac[1][1] = -0.25* SQU(tmp1) / pow(tmp2, 3./2.)  +
    0.5 * (2.*dr*dr + 2.*r*ddr - 2.*r0*ddr*cos(-t+t0) - 4.*r0*dr*sin(-t+t0) + 
	   2.*r0*r*cos(-t+t0)) / sqrt(tmp2) +
    ddr * cos(t) - 2.*dr*sin(t) - r*cos(t);
}

#define NB_INITIAL_GUESS 1000

void Scatterer::criticalPoints(int nbnodes, double k[3]){
  int i_node, i, n, check;
  double pt, tmp[2], theta, theta0;

  if(k[1] || k[2])
    Msg(ERROR, "Critical point computation not done (yet) in the general case");

  criticalPointsList = new List_T*[nbnodes];

  for(i_node=0; i_node<nbnodes; i_node++){

    criticalPointsList[i_node] = List_Create(5,5,sizeof(double));
    theta0 = nodes[i_node];

    switch(type){

    case CIRCLE :
      // in the case of a circle, they are given in closed form by, for
      // an integer n:
      //
      //  0 <= t-theta0 = Pi - 2*theta0 + 4*n*PI <= 2*PI
      //  0 <= t-theta0 = (PI-2*theta0)/3 + 4/3*PI*n
      
      for(n=-2 ; n<=2 ; n++){
	pt = PI-theta0+4.*n*PI;
	if((pt-theta0>=0) && (pt-theta0<=TWO_PI)){
	  while(pt > TWO_PI) pt-=TWO_PI;
	  List_Insert(criticalPointsList[i_node], &pt, fcmp_CPoint);
	}
	pt = (PI+theta0)/3.+4./3.*n*PI;
	if((pt-theta0>=0) && (pt-theta0<=TWO_PI)){
	  while(pt > TWO_PI) pt-=TWO_PI;
	  List_Insert(criticalPointsList[i_node], &pt, fcmp_CPoint);
	}
      }
      break;

    case ELLIPSE:
    case DROP:
    case KITE:
      // solve the nonlinear system, using the exact jacobian

      currentTargetU = theta0;
      theta = 0.;
     
      for(i=0; i<NB_INITIAL_GUESS; i++){
	tmp[1] = theta;
	
	if(fabs(theta-theta0)>1*TOL_LOOSE){
	  //newt(tmp, 1, &check, phaseGradient, fdjac);
	  //newt(tmp, 1, &check, phaseGradient, phaseGradientDiff);
	  check = mnewt(200, tmp, 1, 1.e-6, 1.e-4);
	  if(!check){
	    tmp[1] = GetInInterval(tmp[1], 0., TWO_PI);
	    List_Insert(criticalPointsList[i_node], &tmp[1], fcmp_double_loose);
	  }
	  else
	    Msg(WARNING,"Newton did not converge for theta0=%g, theta=%g", 
		theta0, theta);
	}
	theta += TWO_PI/NB_INITIAL_GUESS;
      }
      break;
      
    default :
      // solve the nonlinear system in the general case, using a
      // finite difference approximation for the jacobian

      Msg(ERROR, "General newton with finite difference jac not done");
      break;

    }

  }
  
}


void Scatterer::shadowingPoints(double t, double shift, double k[3], List_T *pts){
  CPoint pt;

  pt.degree = 3;
   
  switch(type){

  case CIRCLE :
  case ELLIPSE :
  case DROP :
    if(k[1] || k[2])
      Msg(ERROR, "Shadowing point computation not done in the general case");

    pt.val = PI/2. + shift ;
    List_Insert(pts, &pt, fcmp_CPoint);

    pt.val = 3*PI/2. - shift ;
    List_Insert(pts, &pt, fcmp_CPoint);
    break;

  default :
    Msg(ERROR, "Unknown type of scatterer for shadowing point computation");
    break;

  }
}
  

void Scatterer::printPoints(double t, List_T *pts){
  static int first=1;
  static FILE *fp, *fp2;
  double coord[3];
  CPoint pt;
  int i;

  if(first){
    first = 0;
    fp = fopen("critpoints.pos", "w");
    fprintf(fp, "View.PointSize = 10;\n");
    fp2 = fopen("gradphase.dat", "w");
  }

  fprintf(fp, "View \"target=%g\" {\n", t);
  for(i=0; i<List_Nbr(pts); i++){
    List_Read(pts,i,&pt);
    x(pt.val,-1,coord);
    fprintf(fp, "SP(%g,%g,%g){%d};\n",coord[0],coord[1],coord[2],
	    pt.degree);
  }
  fprintf(fp, "};\n");

  int n = 1;
  double *xvec = dvector(1,n);
  double *fvec = dvector(1,n);
  double **fjac = dmatrix(1,n,1,n);
  for(i=0; i<100; i++){
    currentTargetU = t;
    xvec[1] = TWO_PI*i/100.;
    if(fabs(xvec[1]-t)>TOL_LOOSE){
      phase2D(xvec,n,fvec,fjac);
      fprintf(fp2,"%g %g\n", xvec[1],fvec[1]);
    }
  }
  fprintf(fp2,"\n\n");
  free_dvector(xvec,1,n);
  free_dvector(fvec,1,n);
  free_dmatrix(fjac,1,n,1,n);

}
