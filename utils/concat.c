/* $Id: concat.c,v 1.2 2000-09-07 18:47:31 geuzaine Exp $ */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

void main(int argc, char *argv[]){

  FILE *pF1, *pF2, *pF3, *pF4, *pF5, *pF6;
  int i;
  double c1[10], c2[10], c3[10], c4[10], c5[10], c6[10];

  if(argc!=7){
    fprintf(stderr, "Wrong number of input files (%d instead of 6)\n", argc-1);
    exit(1);
  }
  
  if(!(pF1 = fopen(argv[1],"r+"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[1]);
    exit(1);
  }

  if(!(pF2 = fopen(argv[2],"r+"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[2]);
    exit(1);
  }

  if(!(pF3 = fopen(argv[3],"r+"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[3]);
    exit(1);
  }

  if(!(pF4 = fopen(argv[4],"r+"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[4]);
    exit(1);
  }

  if(!(pF5 = fopen(argv[5],"r+"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[5]);
    exit(1);
  }
  if(!(pF6 = fopen(argv[6],"r+"))){
    fprintf(stderr, "Unable to open file '%s'\n", argv[6]);
    exit(1);
  }

  fprintf(stdout, "# x [m]       b0[y=0.5m]   b0[y=1.0m]   b0[y=1.5m]   bS[y=0.5m]   "
	          "bS[y=1.0m]   bS[y=1.5m]   S[y=0.5m]    S[y=1.0m]    S[y=1.5m]\n");

  while(!feof(pF1) || !feof(pF2) || !feof(pF3) || 
	!feof(pF4) || !feof(pF5) || !feof(pF6)){

    fscanf(pF1, "%lf %lf %lf %lf %lf %lf \n", &c1[0],&c1[1],&c1[2],&c1[3],&c1[4],&c1[5]) ;
    fscanf(pF2, "%lf %lf %lf %lf %lf %lf \n", &c2[0],&c2[1],&c2[2],&c2[3],&c2[4],&c2[5]) ;
    fscanf(pF3, "%lf %lf %lf %lf %lf %lf \n", &c3[0],&c3[1],&c3[2],&c3[3],&c3[4],&c3[5]) ;
    fscanf(pF4, "%lf %lf %lf %lf %lf %lf \n", &c4[0],&c4[1],&c4[2],&c4[3],&c4[4],&c4[5]) ;
    fscanf(pF5, "%lf %lf %lf %lf %lf %lf \n", &c5[0],&c5[1],&c5[2],&c5[3],&c5[4],&c5[5]) ;
    fscanf(pF6, "%lf %lf %lf %lf %lf %lf \n", &c6[0],&c6[1],&c6[2],&c6[3],&c6[4],&c6[5]) ;

    fprintf(stdout, "%12.5e %12.5e %12.5e %12.5e %12.5e %12.5e %12.5e %12.5e %12.5e %12.5e\n", 
	    c1[0],c1[4],c2[4],c3[4],c4[4],c5[4],c6[4], 
	    20.*log(c1[4]/c4[4])/log(10.), 
	    20.*log(c2[4]/c5[4])/log(10.),
	    20.*log(c3[4]/c6[4])/log(10.));
  }

  fclose(pF1);
  fclose(pF2);
  fclose(pF3);
  fclose(pF4);
  fclose(pF5);
  fclose(pF6);

}
