#define RCSID "$Id: SphBessel.c,v 1.1 2001-08-08 14:43:41 sabarieg Exp $"

#include <stdio.h>
#include <math.h>

#include "GetDP.h"
#include "Data_Numeric.h"
#include "Amos_F.h"


double Spherical_j_n(int n, double x){
  /* Computes the Spherical Bessel function 'j' of order n and Real argument */
  
  double jsph, bjr, bji, fnu, xi = 0. ;
  int nz = 0, ierr, kode = 1, NB = 1 ;

  GetDP_Begin("Spherical_j_n");

  if (x == 0.)
    jsph = (n == 0) ? 1. : 0.; 
  else{
    fnu = n + 0.5;
    zbesj_( &x, &xi, &fnu, &kode, &NB, &bjr, &bji, &nz, &ierr) ;
    jsph = sqrt(0.5*PI/x) * bjr;
  }
  
  GetDP_Return(jsph);  

}

void PrintSpherical_j_n(int n, char * FileName){

  double x, sjn ;
  int i ;

  FILE * file ;

  GetDP_Begin("PrintSpherical_j_n");

  Msg(INFO, "Writing Spherical Bessel j: '%s' ", FileName );
  file = fopen(FileName, "w");

  for (i = 0 ; i < 140 ; i++ ){
    x = i * 0.1 ;
    sjn = Spherical_j_n(n, x);
    fprintf(file, "%f %f \n", x, sjn);     
  }

  fclose(file);
  
  GetDP_End;
}



double AltSpherical_j_n(int n, double x){
  /* Computes the Alernative Spherical Bessel function 'j' of order n and Real argument */
  
  double ajsph, abjr, abji, fnu, xi = 0. ;
  int nz = 0, ierr, kode=1, NB=1 ;

  GetDP_Begin("AltSpherical_j_n");

  fnu = n + 0.5;
  zbesj_( &x, &xi, &fnu, &kode, &NB, &abjr, &abji, &nz, &ierr) ;

  ajsph = sqrt(0.5*PI*x) * abjr;
   
  GetDP_Return(ajsph);
      
}



double Spherical_y_n(int n, double x){
  /* Computes the Spherical Bessel function 'y' of order n and real argument */
  
  double ysph, byr, byi, auxbyr, auxbyi, fnu, xi = 0. ;
  int nz = 0,ierr, kode = 1, NB =1 ;

  GetDP_Begin("Spherical_y_n");

  if (x==0.) Msg(ERROR, "Singularity in Spherical_y_n");

  fnu = n+0.5;
  zbesy_( &x, &xi, &fnu, &kode, &NB, &byr, &byi, &nz, &auxbyr, &auxbyi,
	  &ierr);
  
  ysph = sqrt(0.5*PI/x) * byr;

  GetDP_Return(ysph);   
}



void PrintSpherical_y_n(int n, char * FileName){

  double x, syn ;
  int i ;

  FILE * file ;

  GetDP_Begin("PrintSpherical_y_n");

  Msg(INFO, "Writing Spherical Bessel y: '%s' ", FileName );
  file = fopen(FileName, "w");

  for (i = 0 ; i < 140 ; i++ ){
    x = i * 0.1+1e-9 ;
    syn = Spherical_y_n(n, x);
    fprintf(file, "%f %f \n", x, syn);     
  }

  fclose(file);
  
  GetDP_End;
}



double AltSpherical_y_n(int n, double x){
  /* Computes the Alternative Spherical Bessel function 'y' of order n and Real argument */
  
  double aysph, abyr, abyi, auxabyr, auxabyi, fnu, xi = 0. ;
  int nz = 0, ierr, kode = 1, NB = 1 ;

  GetDP_Begin("AltSpherical_y_n");

  fnu = n+0.5;
  zbesy_( &x, &xi, &fnu, &kode, &NB, &abyr, &abyi, &nz, &auxabyr, &auxabyi,
	    &ierr);
  aysph = sqrt(0.5*PI*x) * abyr;
   
  GetDP_Return(aysph);
      
}









