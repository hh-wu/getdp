/*
Move this file to ../NR/aa.c and compile with

gcc -I../Main -I../Numeric -I../include -I../DataStr aa.c dsvdcmp.c dpythag.c nrutil.c -lm

This is the test matrix from Ruth:
c11 3.286487835346685e-19 c12 0 c13 -3.055555555555552e-05
c21 -3.055555555555552e-05 c22 0 c23 -3.218725199566341e-19
c31 0 c32 0 c33 0

This is the result of the SVD on the DECs, using cc:

w1 3.055555555555552e-05 w2 3.055555555555552e-05 w3 0

v11 0.7071067811865477 v12 0.7071067811865475 v13 0
v21 0 v22 0 v23 -1
v31 0.7071067811865475 v32 -0.7071067811865477 v33 0

On Linux, various versions of gcc return different results, depending
on the optimization level:
- gcc "2.96" (red hat) fails to converge with anything else that -O0
- gcc 3.2 converges, but returns different results with -O0 and -O3
*/

#include "../include/GetDP.h"
#include <signal.h>
#include <stdarg.h>
#define NRANSI
#include "nrutil.h"

int main(void){
  double **M, **V, *W;

  M = dmatrix(1,3,1,3);
  V = dmatrix(1,3,1,3);
  W = dvector(1,3);

  M[1][1] =  3.286487835346685e-19 ; M[1][2] = 0. ; M[1][3] = -3.055555555555552e-05 ;
  M[2][1] = -3.055555555555552e-05 ; M[2][2] = 0. ; M[2][3] = -3.218725199566341e-19 ;
  M[3][1] = 0. ; M[3][2] = 0. ; M[3][3] = 0. ;

  printf("M=\n");
  printf("%.16e %.16e %.16e\n", M[1][1], M[1][2], M[1][3]);
  printf("%.16e %.16e %.16e\n", M[2][1], M[2][2], M[2][3]);
  printf("%.16e %.16e %.16e\n", M[3][1], M[3][2], M[3][3]);

  dsvdcmp(M, 3, 3, W, V);

  printf("M=\n");
  printf("%.16e %.16e %.16e\n", M[1][1], M[1][2], M[1][3]);
  printf("%.16e %.16e %.16e\n", M[2][1], M[2][2], M[2][3]);
  printf("%.16e %.16e %.16e\n", M[3][1], M[3][2], M[3][3]);

  printf("V=\n");
  printf("%.16e %.16e %.16e\n", V[1][1], V[1][2], V[1][3]);
  printf("%.16e %.16e %.16e\n", V[2][1], V[2][2], V[2][3]);
  printf("%.16e %.16e %.16e\n", V[3][1], V[3][2], V[3][3]);

  printf("W=\n");
  printf("%.16e %.16e %.16e\n", W[1], W[2], W[3]);

  return 0;
}

void Msg(int level, char *fmt, ...)
{
  va_list args;
  va_start(args, fmt);
  vfprintf(stderr, fmt, args);
  fprintf(stderr, "\n");
  va_end(args);
}
