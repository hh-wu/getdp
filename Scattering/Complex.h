#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include<complex>
typedef std::complex<double> Complex;

extern Complex I;

// prototypes

#include "LinAlg.h"
void LinAlg_AddComplexInVector(Complex c, gVector *v, int i);
void LinAlg_SetComplexInVector(Complex c, gVector *v, int i);
void LinAlg_GetComplexInVector(Complex *c, gVector *v, int i);
void LinAlg_AddComplexInMatrix(Complex c, gMatrix *m, int i, int j);
void LinAlg_GetMatrixContext(gMatrix *A, void **ctx);
void LinAlg_CreateMatrixShell(gMatrix *A, gSolver *Solver, int nbdof, int nbdof, void *ctx, 
			      void (*myMult)(gMatrix *A, gVector *x, gVector *y));
void LinAlg_ReduceSum(Complex *loc, Complex *glo);

#include "List.h"
void List_PrintMatlabComplex(List_T *list);

#endif
