#define RCSID "$Id: CSR.c,v 1.10 2003-03-23 05:54:21 geuzaine Exp $"
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
 *   Jean-Francois Remacle
 */

#include <stdio.h>
#include <stdlib.h>

#include "Solver.h"
#include "Message.h"
#include "Malloc.h"

static int cmpij(int ai,int aj,int bi,int bj){
  if(ai<bi)return -1;
  if(ai>bi)return 1;
  if(aj<bj)return -1;
  if(aj>bj)return 1;
  return 0;
}

static int *alloc_ivec(long nl, long nh){
  int *v;
  
  v=(int *)Malloc((size_t) ((nh-nl+1+1)*sizeof(int)));
  return v-nl+1;
}

static void free_ivec(int *v, long nl, long nh){
  Free(v+nl-1);
}

#define SWAP(a,b)  temp=(a);(a)=(b);(b)=temp;
#define SWAPI(a,b) tempi=(a);(a)=(b);(b)=tempi;
#define M          7
#define NSTACK     50
#define M1        -1

static void sort2(unsigned long n, double arr[], int ai[] , int aj []){
  unsigned long i,ir=n,j,k,l=1;
  int *istack,jstack=0,tempi;
  double a,temp;
  int    b,c;
    
  istack=alloc_ivec(1,NSTACK);
  for (;;) {
    if (ir-l < M) {
      for (j=l+1;j<=ir;j++) {
	a=arr[j M1];
	b=ai[j M1];
	c=aj[j M1];
	for (i=j-1;i>=1;i--) {
	  if (cmpij(ai[i M1],aj[i M1],b,c) <= 0) break;
	  arr[i+1 M1]=arr[i M1];
	  ai[i+1 M1]=ai[i M1];
	  aj[i+1 M1]=aj[i M1];
	}
	arr[i+1 M1]=a;
	ai[i+1 M1]=b;
	aj[i+1 M1]=c;
      }
      if (!jstack) {
	free_ivec(istack,1,NSTACK);
	return;
      }
      ir=istack[jstack];
      l=istack[jstack-1];
      jstack -= 2;
    } 
    else {
      k=(l+ir) >> 1;
      SWAP(arr[k M1],arr[l+1 M1])
      SWAPI(ai[k M1],ai[l+1 M1])
      SWAPI(aj[k M1],aj[l+1 M1])
      if (cmpij(ai[l+1 M1],aj[l+1 M1],ai[ir M1],aj[ir M1])>0){
	SWAP(arr[l+1 M1],arr[ir M1])
	SWAPI(ai[l+1 M1],ai[ir M1])
	SWAPI(aj[l+1 M1],aj[ir M1])
      }
      if (cmpij(ai[l M1],aj[l M1],ai[ir M1],aj[ir M1])>0){
	SWAP(arr[l M1],arr[ir M1])
	SWAPI(ai[l M1],ai[ir M1])
	SWAPI(aj[l M1],aj[ir M1])
      }
      if (cmpij(ai[l+1 M1],aj[l+1 M1],ai[l M1],aj[l M1])>0){
	SWAP(arr[l+1 M1],arr[l M1])
	SWAPI(ai[l+1 M1],ai[l M1])
	SWAPI(aj[l+1 M1],aj[l M1])
      }
      i=l+1;
      j=ir;
      a=arr[l M1];
      b=ai[l M1];
      c=aj[l M1];
      for (;;) {
	do i++; while (cmpij(ai[i M1],aj[i M1],b,c) < 0);
	do j--; while (cmpij(ai[j M1],aj[j M1],b,c) > 0);
	if (j < i) break;
	SWAP(arr[i M1],arr[j M1])
	SWAPI(ai[i M1],ai[j M1])
	SWAPI(aj[i M1],aj[j M1])
	}
      arr[l M1]=arr[j M1];
      arr[j M1]=a;
      ai[l M1]=ai[j M1];
      ai[j M1]=b;
      aj[l M1]=aj[j M1];
      aj[j M1]=c;
      jstack += 2;
      if (jstack > NSTACK) {
	Msg(ERROR, "NSTACK too small in sort2");
      }
      if (ir-i+1 >= j-l) {
	istack[jstack]=ir;
	istack[jstack-1]=i;
	ir=j-1;
      } 
      else {
	istack[jstack]=j-1;
	istack[jstack-1]=l;
	l=i;
      }
    }
  }
}

#undef M
#undef NSTACK
#undef SWAP
#undef SWAPI
#undef M1

static void deblign ( int nz , int *ptr , int *jptr , int *ai){
  int i,ilign;

  ilign = 1;

  jptr[0] = 1;
  for(i=1; i<nz; i++) {
    if (ai[i-1] < ai[i]) {
      jptr[ilign++]=i+1;
      ai[i-1] = 0;
    }    
    else{
      ai[i-1] = i+1;
    }
  }
  ai[nz-1] = 0;
}

void csr_format (Sparse_Matrix *MM, int N){
  int    i,*ptr,*jptr,*ai,n,iptr,iptr2;
  double *a;

  if(!N) return;

  ptr  = (int*)MM->ptr->array;
  jptr = (int*)MM->jptr->array;
  ai   = (int*)MM->ai->array;
  a    = (double*)MM->a->array;
  n    = N;
  for(i=0;i<n;i++){
    iptr = jptr[i];
    while(iptr){
      iptr2 = iptr - 1;
      iptr = ptr[iptr2];
      ptr[iptr2] = i+1;
    }
  }
  sort2(List_Nbr(MM->a),a,ai,ptr);
  deblign(List_Nbr(MM->a),ptr,jptr,ai);
  jptr[N]=List_Nbr(MM->a)+1;
} 


void restore_format (Sparse_Matrix *MM){    
  char *temp;

  temp  = MM->ptr->array;
  MM->ptr->array = MM->ai->array;
  MM->ai->array = temp;
} 


