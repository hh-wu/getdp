// $Id: Scatterer.cpp,v 1.12 2002-05-14 01:15:47 geuzaine Exp $

#include "Utils.h"
#include "Tools.h"
#include "Scatterer.h"
#include "Function.h"
#include "Newton.h"

#define TOL_LOOSE  1.e-6

int fcmp_CPoint(const void * a, const void * b) {
  double cmp ;
  
  cmp = ((CPoint*)a)->val - ((CPoint*)b)->val ;
  if      (cmp > 1.e-16)  return  1 ;
  else if (cmp < -1.e-16) return -1 ;
  else                    return  0 ;
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

void Scatterer::x(double u, double *x){
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

void Scatterer::dx(double u, double *x){ 
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

void Scatterer::ddx(double u, double *x){ 
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

  x(u,cart);
  r2 = SQU(cart[0])+SQU(cart[1]);
  *r = sqrt(r2);

  if(!r2){
    Msg(WARNING, "r==0 in polar transformation");
    *dr = *ddr = 0.;
    return;
  }

  dx(u,dcart);
  *dr = (cart[0]*dcart[0]+cart[1]*dcart[1]) / *r;

  ddx(u,ddcart);
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

static Scatterer *TheScat;
static double     TheTarget;

void phaseGradient(int n, double *x, double *f){
  double theta0 = TheTarget, theta = x[1];
  double r0, dr0, ddr0, r, dr, ddr;

  TheScat->polar(theta,&r,&dr,&ddr);
  TheScat->polar(theta0,&r0,&dr0, &ddr0);

  //f[1] = x[1]*x[1]-2.;

  //f[1] = sin(theta-theta0) / sqrt(2*(1-cos(theta-theta0))) - sin(theta) ;

  f[1] = (r*dr - r0*dr*cos(theta-theta0) + r0*r*sin(theta-theta0)) /
    sqrt(r0*r0 + r*r - 2*r0*r*cos(theta-theta0)) +
    dr*cos(theta) - r*sin(theta) ;
  
}

void phaseGradientDiff(int n, double *x, double *f,
		       double **df, void (*vecfunc) (int, double[], double[])){
  double theta0 = TheTarget, theta = x[1];
  double r0, dr0, ddr0, r, dr, ddr;

  TheScat->polar(theta,&r,&dr,&ddr);
  TheScat->polar(theta0,&r0,&dr0, &ddr0);
  
  df[1][1] = 1;
}

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

#define NB_INITIAL_GUESS 100

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

    default :
      // solve the nonlinear system in the general case

      TheScat = this;
      TheTarget = theta0;
      theta = 0.;
      
      for(i=0; i<NB_INITIAL_GUESS; i++){
	tmp[1] = theta;
	
	if(fabs(theta-theta0)>1*TOL_LOOSE){
	  newt(tmp, 1, &check, phaseGradient, fdjac);
	  //newt(tmp, 1, &check, phaseGradient, phaseGradientDiff);
	  if(!check){
	    tmp[1] = GetInInterval(tmp[1], 0., TWO_PI);
	    List_Insert(criticalPointsList[i_node], &tmp[1], fcmp_double_loose);
	  }
	  else
	    Msg(WARNING,"Newton did not converge for theta0=%g, theta=%g", theta0, theta);
	}
	theta += TWO_PI/NB_INITIAL_GUESS;
      }
      
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
  static FILE *fp;
  double coord[3];
  CPoint pt;
  int i;

  if(first){
    first = 0;
    fp = fopen("points.pos", "w");
    fprintf(fp, "View.PointSize = 10;\n");
  }

  fprintf(fp, "View \"target=%g\" {\n", t);
  for(i=0; i<List_Nbr(pts); i++){
    List_Read(pts,i,&pt);
    x(pt.val,coord);
    fprintf(fp, "SP(%g,%g,%g){%d};\n",coord[0],coord[1],coord[2],
	    pt.degree);
  }
  fprintf(fp, "};\n");

}
