#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "DofData.h"
#include "Data_Numeric.h"
#include "CurrentData.h"
#include "nrutil.h"
#include "ualloc.h"

void cal_vec_pr_T(double **T, int N, double valp, double *v){
  int      i,j,k;
  double **mat,norm=0.0;

  mat = dmatrix(1,N,1,N);
  
  for(i=1;i<=N;i++){
    for(j=1;j<=N;j++){
      if(i==j)
	mat[i][j]=T[i][j]-valp;
      else
	mat[i][j]=T[i][j];
    }
  }
  
  /* totalement instable si mat[][] est tres petit.
     a changer.
   */

  v[N]=1.0;
  for(i=N;i>1;i--){
    v[i-1]=0.0;
    for(j=N;j>=i;j--) v[i-1]-=mat[i][j]*v[j];
    if(mat[i][i-1] != 0.0)
      v[i-1]/=mat[i][i-1];
    else {
      for(k=i;k<=N;k++)	v[k]=0.0;
      v[i-1]=1.0;
    }
  }

  for(i=1;i<=N;i++) norm+=v[i]*v[i];
  norm = sqrt(norm);
  for(i=1;i<=N;i++) v[i]/=norm;
}

void Lanczos (struct DofData * DofData_P, int LanSize, List_T *LanSave, double shift){
  gVector  *Lan, *b, *x ;
  gMatrix  *K, *M ;
  int      i, j, k, ii, jj, NbrDof, Restart ; 
  double   dum, dum1, dum2;
  double   **Hes, **IMatrix, *diag, *wr, *wi ;
  long     mun = -1 ;
  struct Solution Solution_S ;

  if(!DofData_P->Flag_Init[1] || !DofData_P->Flag_Init[3])
    Msg(ERROR, "No System Available for Lanczos: Check 'DtDt' and 'GenerateSeparate'") ;

  NbrDof = DofData_P->NbrDof ;

  Lan = (gVector*)Malloc((LanSize+1)*sizeof(gVector)) ;
  for (i=0 ; i<LanSize+1 ; i++) 
    gCreateVector(&Lan[i], &DofData_P->Solver, NbrDof,
		  DofData_P->NbrPart, DofData_P->Part);

  K = &DofData_P->M1 ;
  M = &DofData_P->M3 ;
  b = &DofData_P->b  ; 
  x = &DofData_P->CurrentSolution->x ;

  diag    = dvector(1, LanSize+1);
  wr      = dvector(1, LanSize+1);
  wi      = dvector(1, LanSize+1);
  IMatrix = dmatrix(1, LanSize+1, 1, LanSize+1);
  Hes     = dmatrix(1, LanSize+1, 1, LanSize+1);

  /* initial random vector */
  for (i=0 ; i<NbrDof ; i++) gSetDoubleInVector(ran3(&mun), &Lan[0], i) ;

  /* shifting */
  if (fabs(shift) > 1.e-10)
    gAddMatrixProdMatrixDouble(K, M, -shift, K) ; /* K = K - shift * M */

  gProdMatrixVector(M, &Lan[0], b);
  gProdVectorVector(b, &Lan[0], &dum);
  gProdVectorDouble(&Lan[0], 1./sqrt(dum), &Lan[0]); /* Lan[0] is built */

  Msg(BIGINFO, "Lanczos Iteration 1/%d", LanSize);

  gProdMatrixVector(M, &Lan[0], b); /* b = M * Lan[0] */   
  gSolve(K, b, &DofData_P->Solver, &Lan[1]); /* Lan[1] = K^-1 * b */  
  gProdVectorVector(b, &Lan[1], &dum1); /* alpha1 = Lan[0]^T * M * Lan[1] */  

  /* orthogonalization */
  gAddVectorProdVectorDouble(&Lan[1], &Lan[0], -dum1, &Lan[1]); /* Lan[1] -= alpha1 * Lan[0] */

  gProdMatrixVector(M, &Lan[1], b); /* b = M * Lan[1] in prevision */
  gProdVectorVector(b, &Lan[1], &dum2); /* gama2 = beta1 = sqrt(Lan[1]^T * M * Lan[1]) */
  dum2 = sqrt(dum2); 
  gProdVectorDouble(&Lan[1], 1./dum2, &Lan[1]); /* normation in the metric M: Lan[1] is built */  
  gProdVectorDouble(b, 1./dum2, b); /* b = M * Lan[1] in prevision */
  Hes[1][1] = dum1;
  Hes[2][1] = dum2;

  /* print_lanczos_to_file (1, NbrDof, Hes, Lan, shift, Name); */

  Restart = 2 ; 

  for (i=Restart ; i<=LanSize ; i++){
    
    Msg(BIGINFO, "Lanczos Iteration %d/%d", i, LanSize);

    gSolve(K, b, &DofData_P->Solver, &Lan[i]);
    
    for (j=1 ; j<=i ; j++){
      gProdMatrixVector(M, &Lan[j-1], x);
      gProdVectorVector(x, &Lan[i], &Hes[j][i]);
      gAddVectorProdVectorDouble(&Lan[i], &Lan[j-1], -Hes[j][i], &Lan[i]); /* orthogonalization */ 
    }

    gProdMatrixVector(M, &Lan[i], x);
    gProdVectorVector(x, &Lan[i], &dum);
    Hes[i+1][i] = sqrt(dum);
    gProdVectorDouble(&Lan[i], 1./Hes[i+1][i], &Lan[i]);
    gProdMatrixVector(M, &Lan[i], b); /* b = M * Lan[i] in prevision */

    /* eigen value computation of the current Hes matrix */

    for(ii=3 ; ii<=i ; ii++)
      for(jj=1 ; jj<=ii-2 ; jj++)
	Hes[ii][jj] = 0.0 ;
    
    for(ii=1 ; ii<=i ; ii++)
      for(jj=1 ; jj<=i ; jj++)
	IMatrix[ii][jj] = Hes[ii][jj] ;
    
    hqr(IMatrix, i, wr, wi) ;

    /* print_valpr_to_file(i,wr,wi,shift,Name); */
    /* print_lanczos_to_file (i,NbrDof,Hes,Lan,shift,Name); */

    for(k=1 ; k<=i ; k++)
      Msg(INFO, "Lanczos Eigen Value %d = %g %g",k, shift+1.0/wr[k], wi[k]);
    
    /* store the real eigen values */
    for (k=1 ; k<=i ; k++)
      wi[k] = shift+1.0/wr[k];
        

    /* comment tester la convergence des differents modes ? */

  }

  Msg(INFO, "Final Eigen Values/Vectors Computation");

  /* eigen value computation of the final Hes matrix */

  for(ii=3 ; ii<=LanSize ; ii++)
    for(jj=1 ; jj<=ii-2 ; jj++)
      Hes[ii][jj] = 0.0 ;

  for(ii=1 ; ii<=LanSize ; ii++)
    for(jj=1 ; jj<=LanSize ; jj++)
      IMatrix[ii][jj] = Hes[ii][jj] ;

  hqr(IMatrix, LanSize, wr, wi);

  /* store the real eigen values */
  for (k=1 ; k<=LanSize ; k++) wi[k]=shift+1./wr[k]; 

  /* eigen vector computation of the final Hes matrix */

  for(i=1 ; i<=LanSize ; i++){
    cal_vec_pr_T(Hes, LanSize, wr[i], diag);
    for(j=1 ; j<=LanSize ; j++) IMatrix[j][i]=diag[j];
  }

  /* interaction problem and reconstruction of the global eigen vectors */

  for(i=0 ; i<List_Nbr(LanSave) ; i++){
    List_Read(LanSave, i, &ii) ;

    if(ii<1 || ii>LanSize){
      Msg(WARNING, "Eigen Value Index Out of Range") ;
      break ;
    }

    Msg(BIGINFO, "Eigen Value %d = %g", ii, wi[ii]);

    if(i != 0){
      gCreateVector(&Solution_S.x, &DofData_P->Solver, NbrDof,
		    DofData_P->NbrPart, DofData_P->Part);
      List_Add(DofData_P->Solutions, &Solution_S) ;
      DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
    }

    DofData_P->CurrentSolution->Time = wi[ii] ;
    DofData_P->CurrentSolution->TimeFunctionValues = NULL ;
    gZeroVector(&DofData_P->CurrentSolution->x) ;

    for(k=0;k<NbrDof;k++){
      for (j=1 ; j<=LanSize ; j++){
	gGetDoubleInVector(&dum, &Lan[j-1], k) ;
	gAddDoubleInVector(IMatrix[j][ii]*dum, &DofData_P->CurrentSolution->x, k) ;
      }
    }

  }
  
  /* desallocation */

  for (i=0 ; i<LanSize ; i++) gDestroyVector(&Lan[i]);
  Free(Lan) ;

  free_dvector(diag, 1, LanSize);
  free_dvector(wr, 1, LanSize);
  free_dvector(wi, 1, LanSize);
  free_dmatrix(IMatrix, 1, LanSize, 1, LanSize);
  free_dmatrix(Hes, 1, LanSize, 1, LanSize);

}

