// $Id: Complex.cpp,v 1.3 2004-03-05 18:18:05 geuzaine Exp $

#include "Utils.h"
#include "Complex.h"
#include "LinAlg.h"

Complex I(0.0,1.0);

// stuff that should go into LinAlg

void LinAlg_AddComplexInVector(Complex c, gVector *v, int i){
  if(gCOMPLEX_INCREMENT == 2)
    LinAlg_AddComplexInVector(c.real(), c.imag(), v, 2*i, 2*i+1);
  else
    LinAlg_AddComplexInVector(c.real(), c.imag(), v, i, -1);
}

void LinAlg_SetComplexInVector(Complex c, gVector *v, int i){
  if(gCOMPLEX_INCREMENT == 2)
    LinAlg_SetComplexInVector(c.real(), c.imag(), v, 2*i, 2*i+1);
  else
    LinAlg_SetComplexInVector(c.real(), c.imag(), v, i, -1);
}

void LinAlg_GetComplexInVector(Complex *c, gVector *v, int i){
  double d1, d2;
  if(gCOMPLEX_INCREMENT == 2)
    LinAlg_GetComplexInVector(&d1, &d2, v, 2*i, 2*i+1);
  else
    LinAlg_GetComplexInVector(&d1, &d2, v, i, -1);
  *c = d1+I*d2;
}

void LinAlg_AddComplexInMatrix(Complex c, gMatrix *m, int i, int j){
  if(gCOMPLEX_INCREMENT == 2)
    LinAlg_AddComplexInMatrix(c.real(), c.imag(), m, 2*i, 2*j, 2*i+1, 2*j+1);
  else
    LinAlg_AddComplexInMatrix(c.real(), c.imag(), m, i, j, -1, -1);
}

#if defined(HAVE_PETSC)

void LinAlg_ReduceSum(Complex *local, Complex *global){
  MPI_Allreduce(local,global,1,MPIU_SCALAR,PetscSum_Op,PETSC_COMM_WORLD);
}

#else

void LinAlg_ReduceSum(Complex *local, Complex *global){
  *global = *local;
}

#endif


// stuff for List.c

void List_PrintMatlabComplex(List_T *list){
  Complex res;
  printf("out = [\n");
  for(int i=0; i<List_Nbr(list); i++){
    List_Read(list, i, &res);
    printf("%.15e + (%.15ei)\n", res.real(), res.imag());
  }
  printf("]\n");
}

