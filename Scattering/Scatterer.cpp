// $Id: Scatterer.cpp,v 1.24 2002-09-05 00:10:32 geuzaine Exp $

#include "Utils.h"
#include "Scatterer.h"
#include "Function.h"
#include "nrutil.h"

// Parametric definition of the scatterers. Should use virtual
// functions, blah blah.

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
  u = GetInInterval(u, 0., TWO_PI);
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
    x[0] = 2.*sin(u/2.);
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
  u = GetInInterval(u, 0., TWO_PI);
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
  u = GetInInterval(u, 0., TWO_PI);
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

void Scatterer::n(double u, double v, double *x){ 
  double tmp[3], arclength;

  u = GetInInterval(u, 0., TWO_PI);
  
  dx(u, v, tmp);
  arclength=sqrt(tmp[0]*tmp[0]+tmp[1]*tmp[1]);

  switch(type){
  case CIRCLE :
    x[0] = cos(u); 
    x[1] = sin(u); 
    x[2] = 0.; 
    break;
  case ELLIPSE :
    Msg(ERROR, "Not done");
    break;
  case DROP :
    x[0] = cos(u)/arclength;
    x[1] = -cos(u/2.)/arclength; 
    x[2] = 0.; 
    break;
  case KITE :
    x[0] = 1.5*cos(u)/arclength;
    x[1] = (sin(u)+1.3*sin(2*u))/arclength; 
    x[2] = 0.; 
    break;
  }
}

// Critical point comparison

#define TOL_POINT  1.e-6  // accuracy on critical point computation

int compareCPoint(const void * a, const void * b) {
  double cmp ;
  
  cmp = ((CPoint*)a)->val - ((CPoint*)b)->val ;
  if      (cmp > TOL_POINT)  return  1 ;
  else if (cmp < -TOL_POINT) return -1 ;
  else                       return  0 ;
}

int compareDouble(const void *a, const void *b){
  double cmp ;
  
  cmp = *(double*)a - *(double*)b ;
  if      (cmp > TOL_POINT)  return  1 ;
  else if (cmp < -TOL_POINT) return -1 ;
  else                       return  0 ;
}


// Compute (hum!) the target point

void Scatterer::singularPoint(double t0, List_T *pts){
  CPoint pt;

  pt.degree = 1;
  pt.val = t0;
  List_Insert(pts, &pt, compareCPoint);
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
    List_Insert(pts, &pt, compareCPoint);
  }
}

#define TINY 1.0e-20;

int ludcmp (double **a, int n, int *indx, double *d){
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
    if (big == 0.0){
      Msg(WARNING, "Singular matrix in routine ludcmp");
      return 1; // error
    }
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
  return 0; // OK
}

#undef TINY

int lubksb (double **a, int n, int *indx, double b[]){
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
  return 0; // OK
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
      return 0; // OK
    }
    for (i=1;i<=n;i++) p[i] = -fvec[i];
    if(ludcmp(fjac,n,indx,&d)){
      FREERETURN;
      return 2; //error in lu
    }
    if(lubksb(fjac,n,indx,p)){
      FREERETURN;
      return 3; //error in back substitution
    }
    errx=0.0;
    for (i=1;i<=n;i++) {
      errx += fabs(p[i]);
      x[i] += p[i]; // should we relax?
    }
    if (errx <= tolx){
      FREERETURN;
      return 0; // OK
    }
  }
  FREERETURN;
  return 1; // did not converge
}

#undef FREERETURN

void Scatterer::phase2D(double *xvec, int n, double *fvec, double **fjac){
  double t=xvec[1], t0=currentTargetU;
  double tmp[3], y1, y2, dy1, dy2, ddy1, ddy2, x1, x2, k1, k2, tmp1, tmp2;
  
  // incident wave direction
  k1 = normalizedWaveNum[0];
  k2 = normalizedWaveNum[1];

  // source point x
  x(t,-1,tmp); y1=tmp[0]; y2=tmp[1];
  dx(t,-1,tmp); dy1=tmp[0]; dy2=tmp[1];
  ddx(t,-1,tmp); ddy1=tmp[0]; ddy2=tmp[1];

  // targt point y
  x(t0,-1,tmp); x1=tmp[0]; x2=tmp[1];

  tmp1 = 2.*(y1-x1)*dy1 + 2.*(y2-x2)*dy2 ;
  tmp2 = SQU(y1-x1)+SQU(y2-x2) ;

  // gradient of the phase
  fvec[1] = 0.5 * tmp1 / sqrt(tmp2) + k1*dy1 + k2*dy2 ;

  // derivative for jacobian
  fjac[1][1] = -0.25* SQU(tmp1) / pow(tmp2, 3./2.)  +
    0.5 * (2.*SQU(dy1) + 2.*(y1-x1)*ddy1 + 2.*SQU(dy2) + 2.*(y2-x2)*ddy2) / sqrt(tmp2) +
    k1*ddy1 + k2*ddy2;
}

#define NB_INITIAL_GUESS 1000

void Scatterer::criticalPoints(int nbnodes, double k[3]){
  int i_node, i, n, check;
  double pt, tmp[2], t, t0, normk=NORM3(k);

  criticalPointsList = new List_T*[nbnodes];

  for(i_node=0; i_node<nbnodes; i_node++){

    criticalPointsList[i_node] = List_Create(5,5,sizeof(double));
    t0 = nodes[i_node];

    switch(type){

    case CIRCLE :
      // in the case of a circle, they are given in closed form by, for
      // an integer n:
      //
      //  0 <= t-t0 = Pi - 2*t0 + 4*n*PI <= 2*PI
      //  0 <= t-t0 = (PI-2*t0)/3 + 4/3*PI*n
      
      if(k[1] || k[2])
	Msg(ERROR, "Analytical critical point computation only for k=(kx,0,0)");

      for(n=-2 ; n<=2 ; n++){
	pt = PI-t0+4.*n*PI;
	if((pt-t0>=0) && (pt-t0<=TWO_PI)){
	  while(pt > TWO_PI) pt-=TWO_PI;
	  List_Insert(criticalPointsList[i_node], &pt, compareDouble);
	}
	pt = (PI+t0)/3.+4./3.*n*PI;
	if((pt-t0>=0) && (pt-t0<=TWO_PI)){
	  while(pt > TWO_PI) pt-=TWO_PI;
	  List_Insert(criticalPointsList[i_node], &pt, compareDouble);
	}
      }
      break;

    case ELLIPSE:
    case DROP:
    case KITE:
      // solve the nonlinear system, using the exact jacobian

      currentTargetU = t0;
      normalizedWaveNum[0] = k[0]/normk;
      normalizedWaveNum[1] = k[1]/normk;
      t = 0.;
     
      for(i=0; i<NB_INITIAL_GUESS; i++){
	tmp[1] = t;
	
	if(fabs(t-t0) > TOL_POINT){
	  check = mnewt(200, tmp, 1, 0.1*TOL_POINT /* tolx */, 1.e-12 /* tolf */);
	  if(!check){
	    tmp[1] = GetInInterval(tmp[1], 0., TWO_PI);
	    List_Insert(criticalPointsList[i_node], &tmp[1], compareDouble);
	  }
	  else
	    Msg(WARNING,"Newton did not converge for t0=%g, t=%g", t0, t);
	}
	t += TWO_PI/NB_INITIAL_GUESS;
      }
      break;
      
    default :
      // solve the nonlinear system in the general case, using a
      // finite difference approximation for the jacobian

      Msg(ERROR, "General Newton with finite difference jac not done");
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
    List_Insert(pts, &pt, compareCPoint);

    pt.val = 3*PI/2. - shift ;
    List_Insert(pts, &pt, compareCPoint);
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
    if(fabs(xvec[1]-t)>TOL_POINT){
      phase2D(xvec,n,fvec,fjac);
      fprintf(fp2,"%g %g %g\n", xvec[1],fvec[1],fjac[1][1]);
    }
  }
  fprintf(fp2,"\n\n");
  free_dvector(xvec,1,n);
  free_dvector(fvec,1,n);
  free_dmatrix(fjac,1,n,1,n);


  fflush(fp);
  fflush(fp2);
}
