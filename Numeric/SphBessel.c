#define RCSID "$Id: SphBessel.c,v 1.8 2003-03-22 03:30:16 geuzaine Exp $"
/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to "getdp@geuz.org".
 *
 * Contributor(s):
 *   Ruth Sabariego
 */

#include "GetDP.h"
#include "Numeric.h"
#include "Amos_F.h"

#ifndef NBR_MAX_EXP
#define NBR_MAX_EXP 100
#endif


/* ------------------------------------------------------------------------ */
/*  SPHERICAL BESSEL functions of the FIRST kind                            */
/* ------------------------------------------------------------------------ */

double Spherical_j_n(int n, double x){
  /* Computes the Spherical Bessel function 'j' of order n and Real argument */
  
  double jsph, bjr, bji, fnu, xi = 0. ;
  int nz = 0, ierr, kode = 1, NB = 1 ;

  GetDP_Begin("Spherical_j_n");

  if (x == 0.)
    jsph = (n == 0) ? 1. : 0.; 
  else{
    fnu = n + 0.5;
    zbesj_(&x, &xi, &fnu, &kode, &NB, &bjr, &bji, &nz, &ierr) ;
    if(ierr) Msg(ERROR, "Exception caught in first kind Bessel function");
    jsph = sqrt(0.5*PI/x) * bjr;
  }
  
  GetDP_Return(jsph);  
}

void Spherical_j_nArray(int n, double x, int NB, double jsph[]){
  /* Computes NB Spherical Bessel function 'j' Real argument x
     n is the order of the first member of the sequence */

  double cte, fnu, xi = 0., jsphi[NBR_MAX_EXP] ;
  int i, nz = 0, ierr, kode = 1 ;

  GetDP_Begin("Spherical_j_n_Array");

  if (NB > NBR_MAX_EXP)
    Msg(ERROR, "The number of Spherical_j_n required exceeds the maximum "
	"defined: NBR_MAX_EXP = %d",NBR_MAX_EXP) ;
 
  if (x == 0.){
    jsph[0] = 1. ;
    for(i = 1 ; i < NB ; i++ ) jsph[i] = 0.; 
  }
  else{
    fnu = n + 0.5 ; /* From order n to (n+NB-1) */
    zbesj_(&x, &xi, &fnu, &kode, &NB, jsph, jsphi, &nz, &ierr) ;
    if(ierr) Msg(ERROR, "Exception caught in first kind Bessel function");
    cte = sqrt(0.5*PI/x);    
    for(i = 0 ; i < NB ; i++ ) jsph[i] *= cte ;
  }
  
  GetDP_End ;  
}

double AltSpherical_j_n(int n, double x){
  /* Computes the Alernative Spherical Bessel function 'j' of order n
     and Real argument */
  
  double ajsph, abjr, abji, fnu, xi = 0. ;
  int nz = 0, ierr, kode=1, NB=1 ;

  GetDP_Begin("AltSpherical_j_n");

  fnu = n + 0.5;
  zbesj_(&x, &xi, &fnu, &kode, &NB, &abjr, &abji, &nz, &ierr) ;
  if(ierr) Msg(ERROR, "Exception caught in first kind Bessel function");
  ajsph = sqrt(0.5*PI*x) * abjr;
   
  GetDP_Return(ajsph);
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


/* ------------------------------------------------------------------------ */
/*  SPHERICAL BESSEL functions of the SECOND kind                           */
/* ------------------------------------------------------------------------ */

double Spherical_y_n(int n, double x){
  /* Computes the Spherical Bessel function 'y' of order n and real
     argument */
  
  double ysph, byr, byi, auxbyr, auxbyi, fnu, xi = 0. ;
  int nz = 0,ierr, kode = 1, NB =1 ;

  GetDP_Begin("Spherical_y_n");

  if (x==0.) Msg(ERROR, "Singularity in Spherical_y_n");

  fnu = n+0.5;
  zbesy_(&x, &xi, &fnu, &kode, &NB, &byr, &byi, &nz, &auxbyr, &auxbyi, &ierr);
  if(ierr) Msg(ERROR, "Exception caught in second kind Bessel function");

  ysph = sqrt(0.5*PI/x) * byr;

  GetDP_Return(ysph);   
}

void Spherical_y_nArray(int n, double x, int NB, double ysph[]){
  /* Computes NB Spherical Bessel function 'y' Real argument x n is
     the order of the first member of the sequence */

  double cte, fnu, xi = 0., ysphi[NBR_MAX_EXP], auxbyr[NBR_MAX_EXP], auxbyi[NBR_MAX_EXP] ;
  int i, nz = 0, ierr, kode = 1 ;

  GetDP_Begin("Spherical_y_n_Array");

  if (NB > NBR_MAX_EXP)
    Msg(ERROR, "The number of Spherical_y_n required exceeds the maximum "
	"defined: NBR_MAX_EXP = %d",NBR_MAX_EXP) ;

  if (x == 0.){
    ysph[0] = 1. ;
    for(i = 1 ; i < NB ; i++ ) ysphi[i] = 0.; 
  }
  else{
    fnu = n + 0.5 ; /* From order n to (n+NB-1) */
    zbesy_(&x, &xi, &fnu, &kode, &NB, ysph, ysphi, &nz, auxbyr, auxbyi, &ierr);
    if(ierr) Msg(ERROR, "Exception caught in second kind Bessel function");
    cte = sqrt(0.5*PI/x);
    for(i = 0 ; i < NB ; i++ ) ysph[i] *= cte ;
  }
  
  GetDP_End ;  
}

double AltSpherical_y_n(int n, double x){
  /* Computes the Alternative Spherical Bessel function 'y' of order n
     and Real argument */
  
  double aysph, abyr, abyi, auxabyr, auxabyi, fnu, xi = 0. ;
  int nz = 0, ierr, kode = 1, NB = 1 ;

  GetDP_Begin("AltSpherical_y_n");

  fnu = n+0.5;
  zbesy_(&x, &xi, &fnu, &kode, &NB, &abyr, &abyi, &nz, &auxabyr, &auxabyi, &ierr);
  if(ierr) Msg(ERROR, "Exception caught in second kind Bessel function");
  aysph = sqrt(0.5*PI*x) * abyr;
   
  GetDP_Return(aysph);      
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

/* ---------------------------------------------------------------------------------- */
/*  SPHERICAL BESSEL functions of the THIRD kind  (First and second HANKEL functions) */
/* ---------------------------------------------------------------------------------- */

void Spherical_h_n(int type, int n, double x, double *hr, double *hi){
  /* Computes the Spherical first or second Hankel function of order n
     and Real argument */
  
  double fact, bhr, bhi, fnu, xi = 0. ;
  int nz = 0, ierr, kode = 1, NB = 1 ;

  GetDP_Begin("Spherical_h_n");

  fnu = n + 0.5;
  zbesh_(&x, &xi, &fnu, &kode, &type, &NB, &bhr, &bhi, &nz, &ierr) ;
  if(ierr) Msg(ERROR, "Exception caught in third kind Bessel function");     
  fact = sqrt(0.5*PI/x); 
  *hr = fact * bhr;
  *hi = fact * bhi;

  GetDP_End;  
}

void Spherical_h_nArray(int type, int n, double x, int NB, double hr[], double hi[]){
  /* Computes the Spherical first or second Hankel function of order n
     and Real argument */
  
  double fact, fnu, xi = 0. ;
  int nz = 0, ierr, kode = 1, i;

  GetDP_Begin("Spherical_h_n");

  if (NB > NBR_MAX_EXP)
    Msg(ERROR, "The number of Spherical_h_n required exceeds the maximum "
	"defined: NBR_MAX_EXP = %d",NBR_MAX_EXP) ;

  fnu = n + 0.5;
  zbesh_(&x, &xi, &fnu, &kode, &type, &NB, hr, hi, &nz, &ierr) ;
  if(ierr) Msg(ERROR, "Exception caught in third kind Bessel function");     
  fact = sqrt(0.5*PI/x); 
  for(i=0 ; i<NB ; i++){
    hr[i] *= fact;
    hi[i] *= fact;
  }

  GetDP_End;  
}
