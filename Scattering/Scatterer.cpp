// $Id: Scatterer.cpp,v 1.4 2002-04-23 00:46:10 geuzaine Exp $

#include "Utils.h"
#include "Tools.h"
#include "Scatterer.h"

int fcmp_CPoint(const void * a, const void * b) {
  double cmp ;
  
  cmp = ((CPoint*)a)->val - ((CPoint*)b)->val ;
  if      (cmp > 1.e-16)  return  1 ;
  else if (cmp < -1.e-16) return -1 ;
  else                    return  0 ;
}

// Parametric definition of the scatterers

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
    /*
  case RECTANGLE :
    if(u<TWO_PI/
    x[0] = a*cos(u); 
    x[1] = b*sin(u); 
    x[2] = 0.; 
    break;
    */
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
  }
}

// Compute (hum!) the target point

void Scatterer::singularPoint(double t0, List_T *pts){
  CPoint pt;

  pt.degree = 1;
  pt.val = t0;
  List_Insert(pts, &pt, fcmp_CPoint);
}


//  Compute all critical points (i.e. for which gradient of the total
//  phase of the integral equation vanishes) in the case of a
//  circle. They are given in closed form by, for an integer n:
//
//  0 <= t-t0 = Pi - 2*t0 + 4*n*PI <= 2*PI
//  0 <= t-t0 = (PI-2*t0)/3 + 4/3*PI*n

void Scatterer::criticalPoints(double t0, double k[3], List_T *pts){
  int n;
  CPoint pt;

  pt.degree = 2;

  switch(type){

  case CIRCLE :
    if(k[1] || k[2])
      Msg(ERROR, "Critical point computation not done in the general case");

    for(n=-2 ; n<=2 ; n++){
      pt.val = PI-t0+4.*n*PI;
      if((pt.val-t0>=0) && (pt.val-t0<=TWO_PI)){
	while(pt.val > TWO_PI) pt.val-=TWO_PI;
	List_Insert(pts, &pt, fcmp_CPoint);
      }
      pt.val = (PI+t0)/3.+4./3.*n*PI;
      if((pt.val-t0>=0) && (pt.val-t0<=TWO_PI)){
	while(pt.val > TWO_PI) pt.val-=TWO_PI;
	List_Insert(pts, &pt, fcmp_CPoint);
      }
    }
    break;

  default :
    
    //newt();
    


    Msg(ERROR, "Unknown type of scatterer for critical point computation");
    break;

  }
}


void Scatterer::shadowingPoints(double t, double shift, double k[3], List_T *pts){
  CPoint pt;

  pt.degree = 3;
   
  switch(type){

  case CIRCLE :
    if(k[1] || k[2])
      Msg(ERROR, "Shadowing point computation not done in the general case");

    //if(fabs(t-PI/2.) < 2*shift){
      pt.val = PI/2. + shift ;
      List_Insert(pts, &pt, fcmp_CPoint);
      //}

      //if(fabs(t-3*PI/2.) < 2*shift){
      pt.val = 3*PI/2. - shift ;
      List_Insert(pts, &pt, fcmp_CPoint);
      //}
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
