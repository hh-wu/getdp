#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <complex>

using namespace std;

#include "GetDP.h"
#include "LinAlg.h"
#include "Tools.h"
#include "Utils.h"
#include "Data_Numeric.h"
#include "Solve.h"

void List_PrintMatlab(List_T *list){
  complex<double> res;
  printf("out = [\n");
  for(int i=0; i<List_Nbr(list); i++){
    List_Read(list, i, &res);
    printf("%.15e + (%.15ei)\n", res.real(), res.imag());
  }
  printf("]\n");
}


// Forward map computation only

void ForwardSolve(int typ, Function *f, Scatterer *scat, 
		  double kv[3], int nbtarget, double t0, int nbpts, 
		  double prescribed_eps, double rise){

  List_T *reslist=List_Create(nbtarget,20,sizeof(complex<double>));
  complex<double> res;
  double t;
  int i;

  for(i=0 ; i<nbtarget ; i++){
    t = 2*PI*i/(double)nbtarget + t0;
    res = Integrate(typ, f, scat, kv, t, nbpts, prescribed_eps, rise); 
    Msg(INFO, "==> I(%d: %.7e) = %' '.15e %+.15e * i", i+1, t, res.real(), res.imag());
    List_Add(reslist, &res);
  }

  List_PrintMatlab(reslist);
  List_Delete(reslist);
}

// Full Matrix solver

void BuildSolve(int typ, Function *f, Scatterer *scat, 
		double kv[3], int nbtarget, double t0, int nbpts, 
		double prescribed_eps, double rise){

  gSolver Solver;
  gMatrix A;
  gVector b, x;
  List_T *reslist=List_Create(nbtarget,20,sizeof(complex<double>));
  complex<double> res;
  double t, xt[3], kr, d1, d2;
  int i, j, nbdof, localrange[2];

  if(!(nbtarget%2)) nbtarget++;
  
  nbdof = gCOMPLEX_INCREMENT*nbtarget;
  
  LinAlg_CreateSolver(&Solver, "solver.par") ;
  LinAlg_CreateMatrix(&A, &Solver, nbdof, nbdof, 0, localrange, NULL) ;
  LinAlg_CreateVector(&b, &Solver, nbdof, 1, NULL) ;
  LinAlg_CreateVector(&x, &Solver, nbdof, 1, NULL) ;
  LinAlg_ZeroMatrix(&A);
  LinAlg_ZeroVector(&b);
  
  Msg(INFO, "local range = %d %d", localrange[0], localrange[1]);
  
  for(i=localrange[0] ; i<localrange[1] ; i++){
    t = 2*PI*i/(double)nbtarget + t0;
    Msg(INFO, "Computing target %d", i);
    // assemble a line in the matrix
    for(j=0 ; j<nbtarget ; j++){
      f->num_bf = -nbtarget/2+j;
      res = Integrate(typ, f, scat, kv, t, nbpts, prescribed_eps, rise); 
      res *= (-I/2.); //warning
      if(gCOMPLEX_INCREMENT == 2)
	LinAlg_AddComplexInMatrix(res.real(), res.imag(), &A, 2*i, 2*j, 2*i+1, 2*j+1);
      else
	LinAlg_AddComplexInMatrix(res.real(), res.imag(), &A, i, j, -1, -1);
    }
    // assemble rhs, assume plane wave incident field
    scat->val(t,xt);
    kr = kv[0]*xt[0]+kv[1]*xt[1]+kv[2]*xt[2];
    res = cos(kr)+I*sin(kr);
    res *= 2; // warning
    res /= NORM3(kv); // warning
    if(gCOMPLEX_INCREMENT == 2)
      LinAlg_AddComplexInVector(res.real(), res.imag(), &b, 2*i, 2*i+1);
    else
      LinAlg_AddComplexInVector(res.real(), res.imag(), &b, i, -1);
  }
  
  LinAlg_AssembleMatrix(&A);
  LinAlg_AssembleVector(&b);
  LinAlg_Solve(&A, &b, &Solver, &x);
  
  if(NBRCPU > 1){
#ifndef _PETSC
    Msg(WARNING, "Postprocessing not done in parallel");
    LinAlg_PrintVector(stdout,&x);
#else
    /*
    Vec local;
    ISCreateGeneral(MPI_Comm comm,int n,const int idx[],IS *is);
    VecScatterCreate(Vec xin,IS ix,Vec yin,IS iy,VecScatter *newctx);
    VecScatterCreate(Vec xin,IS ix,Vec yin,IS iy,VecScatter *newctx);
    
    we now have the full solution on proc 1 (dummy stuff on otther nodes)
    */
#endif
  }
  else{
  
    // should do a scatter (gather) to get the full vector on one node
    for(i=0 ; i<nbtarget ; i++){
      if(gCOMPLEX_INCREMENT == 2)
	LinAlg_GetComplexInVector(&d1, &d2, &x, 2*i, 2*i+1);
      else
	LinAlg_GetComplexInVector(&d1, &d2, &x, i, -1);
      res = d1+I*d2;
      List_Add(reslist, &res);
    }
    //List_PrintMatlab(reslist);
    
    // the following should be done with a FFT (in parallel!)
    complex<double> phi; 
    for(i=0 ; i<100 ; i++){
      phi = 0.;
      t = 2*PI*i/100.;
      for(j=0 ; j<nbtarget ; j++){
	f->num_bf = -nbtarget/2+j;
	List_Read(reslist,j,&res);
	phi += res * f->bf(t);
      }
      printf("%g %g\n", phi.real(), phi.imag());
    }
    
  }
  
  LinAlg_DestroyMatrix(&A);
  LinAlg_DestroyVector(&b);
  LinAlg_DestroyVector(&x);
  LinAlg_DestroySolver(&Solver);
  
  List_Delete(reslist);
}


// Iterative solver

void IterSolve(int typ, Function *f, Scatterer *scat, 
	       double kv[3], int nbtarget, double t0, int nbpts, 
	       double prescribed_eps, double rise){

  

}

