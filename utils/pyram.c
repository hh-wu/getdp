
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


void main(void){

  int i,j,k;
  int m,n;
  double u[50],v[50],w[50],p[50];

  i = 0;

  /* 2 planes/4 nodes */
  for(k=0 ; k<2 ; k++){
    for(j=0 ; j<4 ; j++){
      u[i] = x[k] * xq4[j] ;
      v[i] = x[k] * yq4[j] ;
      w[i] = 1. - x[k] ;      
      p[i] = b[k] * pq4[j] ;     
      i++;
    }
  }

  printf("double upyr%d[%d] = {",i,i);
  for(m=0 ; m<i ; m++) {
    if(m)printf(",");
    printf("%.16g",u[m]);
  }
  printf("};\n");

  printf("double vpyr%d[%d] = {",i,i);
  for(m=0 ; m<i ; m++) {
    if(m)printf(",");
    printf("%.16g",v[m]);
  }
  printf("};\n");

  printf("double wpyr%d[%d] = {",i,i);
  for(m=0 ; m<i ; m++) {
    if(m)printf(",");
    printf("%.16g",w[m]);
  }
  printf("};\n");

  printf("double ppyr%d[%d] = {",i,i);
  for(m=0 ; m<i ; m++) {
    if(m)printf(",");
    printf("%.16g",p[m]);
  }
  printf("};\n");


}
