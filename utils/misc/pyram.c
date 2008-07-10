/* $Id: pyram.c,v 1.1 2008-07-10 10:27:47 geuzaine Exp $ */

/* 
   Calcul des points de Gauss pour une pyramide
   cf. ../Integration/Gauss_Pyramid.h

   ref.: Coulomb et al., IEEE tr.mag. 32(3) May 1996, p.1395 
   
   Note: Pyramid de reference de sommets [(0,0,0),(1,0,0),(0,1,0),(0,0,1)]
   a la difference de l'article de Coulomb
*/


#include "stdlib.h"
#include "math.h"

#include "../Integration/Gauss_Quadrangle.h"

/*
double x[1] = {0.75};
double b[1] = {0.33};
*/

double x[2] = {0.455848155988775, 0.877485177344559};
double b[2] = {0.100785882079825, 0.232547451253508};

/*
double x[4] = {0.204148582103227, 0.482952704895632, 0.761399262448138, 0.951499450553003};
double b[4] = {0.010352240749918, 0.068633887172923, 0.143458789799214, 0.110888415611278};
*/


void printout(int i, double * s, char * item){
  int m;
  
  printf("double %s%d[%d] = {",item,i,i);
  for(m=0 ; m<i ; m++) {
    if(m)printf(",");
    printf("%.16g",s[m]);
  }
  printf("};\n");
}

int main(void){

  int i,j,k;
  int m,n;
  double u[50],v[50],w[50],p[50];

  i = 0;

  /* 2 planes/4 nodes */
  for(k=0 ; k<2 ; k++){
    for(j=0 ; j<4 ; j++){
      u[i] = x[k] * (xq4[j] + 1.)/2. ;
      v[i] = x[k] * (yq4[j] + 1.)/2. ;
      w[i] = 1. - x[k] ;      
      p[i] = b[k] * (pq4[j] / 4.0) ;     
      i++;
    }
  }

  printout(i, u, "upyr");
  printout(i, v, "vpyr");
  printout(i, w, "wpyr");

  printout(i, p, "ppyr");

  return 0;
}
