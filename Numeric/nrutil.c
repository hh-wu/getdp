#define RCSID "$Id: nrutil.c,v 1.6 2001-08-10 08:40:13 ledinh Exp $"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <malloc.h>

/* This is a reduced/slightly modified version of nrutil.c */

#include "Message.h"

#define NR_END 1
#define FREE_ARG char*

void nrerror(char error_text[])
/* Numerical Recipes standard error handler */
{
  Msg(ERROR, "%s", error_text);
}

float *vector(long nl,long nh)   /* pour Tuan */
{
   /* allocate an float vector with subscript range v[nl..nh] */
	float *v;
	v=(float *)malloc((unsigned) (nh-nl+1)*sizeof(float));
	if (!v) nrerror("allocation failure in vector()");
	return v-nl+1;
}

int *ivector(long nl, long nh){
  /* allocate an int vector with subscript range v[nl..nh] */
  int *v;
  
  v=(int *)malloc((size_t) ((nh-nl+2)*sizeof(int)));
  if (!v) fprintf(stderr, "allocation failure in ivector()\n");
  return v-nl+1;
}

void free_vector(float *v,long nl,long nh)  /*pour Tuan */
  /* free an int vector allocated with vector() */
{
	free((char*) (v+nl-1));
}


void free_ivector(int *v, long nl, long nh){
  /* free an int vector allocated with ivector() */
  free((char*)(v+nl-1));
}


double *dvector(long nl, long nh)
/* allocate a double vector with subscript range v[nl..nh] */
{
  double *v;
  
  v=(double *)malloc((size_t) ((nh-nl+1+NR_END)*sizeof(double)));
  if (!v) nrerror("allocation failure in dvector()");
  return v-nl+NR_END;
}

double **dmatrix(long nrl, long nrh, long ncl, long nch)
/* allocate a double matrix with subscript range m[nrl..nrh][ncl..nch] */
{
  long i, nrow=nrh-nrl+1,ncol=nch-ncl+1;
  double **m;
  
  /* allocate pointers to rows */
  m=(double **) malloc((size_t)((nrow+NR_END)*sizeof(double*)));
  if (!m) nrerror("allocation failure 1 in matrix()");
  m += NR_END;
  m -= nrl;
  
  /* allocate rows and set pointers to them */
  m[nrl]=(double *) malloc((size_t)((nrow*ncol+NR_END)*sizeof(double)));
  if (!m[nrl]) nrerror("allocation failure 2 in matrix()");
  m[nrl] += NR_END;
  m[nrl] -= ncl;
  
  for(i=nrl+1;i<=nrh;i++) m[i]=m[i-1]+ncol;
  
  /* return pointer to array of pointers to rows */
  return m;
}

void free_dvector(double *v, long nl, long nh)
/* free a double vector allocated with dvector() */
{
  free((FREE_ARG) (v+nl-NR_END));
}

void free_dmatrix(double **m, long nrl, long nrh, long ncl, long nch)
/* free a double matrix allocated by dmatrix() */
{
  free((FREE_ARG) (m[nrl]+ncl-NR_END));
  free((FREE_ARG) (m+nrl-NR_END));
}

