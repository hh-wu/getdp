#define RCSID "$Id: Matrix.c,v 1.16 2001-11-22 15:39:57 ledinh Exp $"
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "Solver.h"
#include "Solver_F.h"
#include "Message.h"
#include "Malloc.h"

/* ------------------------------------------------------------------------ */
/*  i n i t                                                                 */
/* ------------------------------------------------------------------------ */

void init_matrix (int NbLines, Matrix *M, Solver_Params *p){
  int i, j=0;

  M->T = p->Matrix_Format;  
  M->N = NbLines;
  M->changed = 1 ;
  M->ILU_Exists = 0;
  M->notranspose = 0 ;

  switch (M->T) {
  case SPARSE :
    M->S.a    = List_Create (NbLines, NbLines, sizeof(double));
    M->S.ai   = List_Create (NbLines, NbLines, sizeof(int));
    M->S.ptr  = List_Create (NbLines, NbLines, sizeof(int));
    M->S.jptr = List_Create (NbLines+1, NbLines, sizeof(int)); 
    /* '+1' indispensable: csr_format ecrit 'nnz+1' dans jptr[NbLine] */
    for(i=0; i<NbLines; i++) List_Add (M->S.jptr, &j);
    break;
  case DENSE :
    M->F.LU_Exist = 0;
    /* Tous les algos iteratifs sont programmes pour resoudre 
       A^T x = b... C'est tres con, mais bon. L'algo LU est le seul
       qui demande la vraie matrice en entree... */
    if(M->T == DENSE && p->Algorithm == LU){
      M->F.lu   = (double*) Malloc (NbLines * NbLines * sizeof(double));
      M->notranspose = 1 ;
    }
    M->F.a    = (double*) Malloc (NbLines * NbLines * sizeof(double));
    break;
  default :
    Msg(ERROR, "Unknown type of matrix storage format: %d", M->T);
    break;
  }
}


void init_vector (int Nb, double **V){
  *V = (double*) Malloc (Nb * sizeof(double)); 
}


/* ------------------------------------------------------------------------ */
/*  z e r o                                                                 */
/* ------------------------------------------------------------------------ */

void zero_matrix (Matrix *M){
  int i,j=0;

  M->changed = 1 ;

  switch (M->T) {
  case SPARSE :
    List_Reset (M->S.a);
    List_Reset (M->S.ai);
    List_Reset (M->S.ptr);
    List_Reset (M->S.jptr);
    for (i=0; i<M->N; i++) List_Add (M->S.jptr, &j);
    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] = 0.0;
    break;    
  }
}

void zero_matrix2 (Matrix *M){
  int      i, iptr;
  int     *jptr, *ptr;
  double  *a;

  M->changed = 1 ;
  switch (M->T) {
  case SPARSE :
    jptr  = (int*) M->S.jptr->array;
    ptr = (int*) M->S.ptr->array;
    a   = (double*) M->S.a->array;
    for (i=0; i<M->N; i++) {
      iptr = jptr[i];
      while (iptr>0) {
	a[iptr-1]= 0. ; 
	iptr = ptr[iptr-1];
      }
    }
    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] = 0.0;
    break;    
  }
}

void zero_vector (int Nb, double *V){
  int i;
  for(i=0; i<Nb; i++) V[i] = 0.0;
}


/* ------------------------------------------------------------------------ */
/*  c o p y                                                                 */
/* ------------------------------------------------------------------------ */

void copy_vector (int Nb, double *U, double *V){
  int i;
  for(i=0; i<Nb; i++) V[i] = U[i];
}

/* ------------------------------------------------------------------------ */
/*  a d d                                                                   */
/* ------------------------------------------------------------------------ */

void add_vector_vector (int Nb, double *U, double *V){
  /* u+v -> u */
  int i;
  for(i=0; i<Nb; i++) U[i] += V[i];
}

void add_vector_prod_vector_double (int Nb, double *U, double *V, double d){
  /* u+v*d -> u */
  int i;
  for(i=0; i<Nb; i++) U[i] += d*V[i];
}

void add_matrix_double (Matrix *M, int ic, int il, double val){
  /* attention a la transposition ! */
  int     *ai, *pp, n, iptr, iptr2, jptr, *ptr, zero = 0;
  double   *a;

  M->changed = 1 ;

  switch (M->T) {

  case SPARSE :
    il--;
    pp  = (int*) M->S.jptr->array;
    ptr = (int*) M->S.ptr->array;
    ai  = (int*) M->S.ai->array;
    a   = (double*) M->S.a->array;
    
    iptr = pp[il];
    iptr2 = iptr-1;
    
    while(iptr>0){
      iptr2 = iptr-1;
      jptr = ai[iptr2];
      if(jptr == ic){
	a[iptr2] += val;
	return;
      }
      iptr = ptr[iptr2];
    }

    List_Add (M->S.a, &val);
    List_Add (M->S.ai, &ic);
    List_Add (M->S.ptr, &zero);
    
    /* Les pointeurs ont pu etre modifies
       s'il y a eu une reallocation dans List_Add */
    
    ptr = (int*) M->S.ptr->array;
    ai  = (int*) M->S.ai->array;
    a   = (double*) M->S.a->array;
    
    n = List_Nbr(M->S.a);
    if(!pp[il]) pp[il] = n;
    else ptr[iptr2] = n;
    break;

  case DENSE :
    if(M->notranspose)
      M->F.a[((M->N))*(il-1)+(ic-1)] += val;
    else
      M->F.a[((M->N))*(ic-1)+(il-1)] += val;
    break;

  }
}


void add_matrix_matrix (Matrix *M, Matrix *N){
  /* M+N -> M */
  int      i, *ai, iptr, *jptr, *ptr;
  double  *a;

  switch (M->T) {
  case SPARSE :
    jptr = (int*) N->S.jptr->array;
    ptr  = (int*) N->S.ptr->array;
    a    = (double*) N->S.a->array;
    ai   = (int*) N->S.ai->array;

    for (i=0; i<N->N; i++) {
      iptr = jptr[i];
      while (iptr>0) {
	add_matrix_double (M, ai[iptr-1], i+1, a[iptr-1]); 
	/* add_matrix_double transpose, donc pour additionner,
	   il faut transposer une seconde fois */
	iptr = ptr[iptr-1];
      }
    }

    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] += N->F.a[i];
    break;
    
  }
}

void add_matrix_prod_matrix_double (Matrix *M, Matrix *N, double d){
  /* M+N*d -> M */
  int      i, *ai, iptr, *jptr, *ptr;
  double  *a;

  switch (M->T) {
  case SPARSE :
    jptr = (int*) N->S.jptr->array;
    ptr  = (int*) N->S.ptr->array;
    a    = (double*) N->S.a->array;
    ai   = (int*) N->S.ai->array;

    for (i=0; i<N->N; i++) {
      iptr = jptr[i];
      while (iptr>0) {
	add_matrix_double (M, ai[iptr-1], i+1, d*a[iptr-1]); 
	/* add_matrix_double transpose, donc pour additionner,
	   il faut transposer une seconde fois */
	iptr = ptr[iptr-1];
      }
    }

    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] += d*N->F.a[i];
    break;
    
  }
}

/* ------------------------------------------------------------------------ */
/*  s u b                                                                   */
/* ------------------------------------------------------------------------ */

void sub_vector_vector_1 (int Nb, double *U, double *V){
  /* u-v -> u */
  int i;
  for(i=0; i<Nb; i++) U[i] -= V[i];
}


void sub_vector_vector_2 (int Nb, double *U , double *V ){
  /* u-v -> v */
  int i;
  for(i=0; i<Nb; i++) V[i] = U[i] - V[i];
}


/* ------------------------------------------------------------------------ */
/*  p r o d                                                                 */
/* ------------------------------------------------------------------------ */

void prod_vector_double (int Nb, double *U, double a){
  /* u*a -> u  */
  int i;
  for(i=0; i<Nb; i++) U[i] *= a;
}

void prodsc_vector_vector (int Nb, double *U, double *V, double *prosca){
  /* u*v -> prosca  */
  int i;
  *prosca = 0.0 ;
  for (i=0; i<Nb; i++) *prosca += U[i] * V[i];
}



void scale_matrix (int scaling, Matrix *M){
  int     i, *ai, *jptr ;
  double  *a, *rowscal, *colscal;
  int job0=0, job1=1,  ioff=0, len, *idiag, norm ;


  switch (M->T) {

  case SPARSE :

    jptr = (int*) M->S.jptr->array;
    a    = (double*) M->S.a->array;
    ai   = (int*) M->S.ai->array;

    switch (scaling) {

    case DIAG_SCALING :

      rowscal = colscal = (double*)Malloc(M->N * sizeof(double));

      /* extract diagonal */
      idiag = (int*)Malloc(M->N * sizeof(int));
      getdia_ (&M->N, &M->N, &job0, a, ai, jptr, &len, rowscal, idiag, &ioff) ;
      Free (idiag);

      for (i = 0 ; i < M->N ; i++){
	if (rowscal[i]){
	  rowscal[i] = 1./sqrt(fabs(rowscal[i])) ;
	  /* printf("  %d %e \n", i, rowscal[i] ); */
	}
	else {
	  Msg(WARNING, "Diagonal scaling aborted because of zero diagonal element (%d)",i+1) ;
	  Free (rowscal) ;
	  return ;
	}
      }
      diamua_ (&M->N, &job1, a, ai, jptr, rowscal, a, ai, jptr) ;
      amudia_ (&M->N, &job1, a, ai, jptr, colscal, a, ai, jptr) ;
      break ;
      
    case MAX_SCALING   :  case NORM1_SCALING :  case NORM2_SCALING :

      switch (scaling) {
      case MAX_SCALING   : norm = 0 ; break ;
      case NORM1_SCALING : norm = 1 ; break ;
      case NORM2_SCALING : norm = 2 ; break ;
      }

      rowscal = (double*)Malloc(M->N * sizeof(double));
      rnrms_ (&M->N, &norm, a, ai, jptr, rowscal); 
      for (i = 0 ; i < M->N ; i++){
	/* printf("  %d %e \n", i, rowscal[i] ); */
	if (rowscal[i])
	  rowscal[i] = 1./rowscal[i] ;
	else {
	  Msg(WARNING, "Scaling aborted because of zero row (%d)", i+1) ;
	  Free (rowscal) ;
	  return ;
	}
      }
      diamua_ (&M->N, &job1, a, ai, jptr, rowscal, a, ai, jptr) ;
      
      colscal = (double*)Malloc(M->N * sizeof(double));
      cnrms_ (&M->N, &norm, a, ai, jptr, colscal); 
      for (i = 0 ; i < M->N ; i++){

	if (colscal[i]){
	  colscal[i] = 1./colscal[i] ;
	  /* printf("  %d %e %e \n", i, 1./rowscal[i], 1./colscal[i] ); */
	}
	else {
	  Msg(WARNING, "Scaling aborted because of zero column (%d)", i+1) ;
	  Free (colscal) ;
	  return ;
	}
      }
      amudia_ (&M->N, &job1, a, ai, jptr, colscal, a, ai, jptr) ;
      break;

    default : 

      Msg(ERROR, "Unknown type of matrix scaling: %d", scaling);
      break;

    }

    M->scaled = 1 ; 
    M->rowscal = rowscal ;
    M->colscal = colscal ;
    break;

  case DENSE :
    Msg(WARNING, "Scaling is not implemented for dense matrices") ;
    break;
  }

}


void scale_vector (int ROW_or_COLUMN, Matrix *M, double *V){
  double *scal;
  int i;

  if (!M->scaled) return ;
  
  switch (ROW_or_COLUMN) {
  case 0  : scal =  M->rowscal ; break ;
  case 1  : scal =  M->colscal ; break ;
  }

  if (scal == NULL) Msg(ERROR, "scale_vector : no scaling factors available !") ;

  for (i = 0 ; i < M->N ; i++) V[i] *= scal[i] ; 
}



void prod_matrix_vector (Matrix *M, double *V , double *res ){
  /* M*V -> res  ou M est la transposee!! */
  int     k, i, j, *ai, *jptr ;
  double  *a;

  switch (M->T) {
  case SPARSE :
    /* csr_format transpose! 
       donc la matrice arrivant dans cette routine doit
       bel et bien etre la transposee !!! */
    if(M->changed){
      csr_format (&M->S, M->N);
      restore_format (&M->S);
      M->changed = 0 ;
    }
    jptr = (int*) M->S.jptr->array;
    a    = (double*) M->S.a->array;
    ai   = (int*) M->S.ai->array;

    for(i=0; i<M->N; i++){
      res[i] = 0.0 ;
      for(k=jptr[i]; k<=jptr[i+1]-1; k++){
	res[i] += V[ai[k-1]-1] * a[k-1];
      }
    }

    break;
  case DENSE :
    if(M->notranspose){
      for(i=0; i<M->N; i++){
	res[i] = 0.0 ;
	for(j=0; j<M->N; j++) res[i] += M->F.a[(M->N)*i+j] * V[j];
      }
    }
    else{
      for(i=0; i<M->N; i++){
	res[i] = 0.0 ;
	for(j=0; j<M->N; j++) res[i] += M->F.a[(M->N)*j+i] * V[j];
      }
    }
    break;
  }
}


void prod_matrix_double (Matrix *M, double v){  
  /* M*v -> M */
  int i;
  double *a;

  switch (M->T) {
  case SPARSE :
    a = (double*) M->S.a->array;
    for(i=0; i<List_Nbr(M->S.a); i++){
      a[i] *= v;
    }
    break;
  case DENSE :
    for(i=0; i<(M->N)*(M->N); i++) M->F.a[i] *= v;    
    break;
  }

}

void multi_prod_matrix_double(int n, Matrix **Mat, double *coef, Matrix *MatRes){
  int k;

  zero_matrix(MatRes);
  for(k=0;k<n;k++){
    if(coef[k]){
      prod_matrix_double(Mat[k],coef[k]);
      add_matrix_matrix(MatRes,Mat[k]);
      prod_matrix_double(Mat[k],1.0/coef[k]);
    }
  }

}

void multi_prod_vector_double(int n, int Sizevec, double **Vec, double *coef, double *VecRes ){
  int k;

  zero_vector(Sizevec,VecRes);
  for(k=0;k<n;k++){
    if (coef[k]){
      prod_vector_double(Sizevec,Vec[k],coef[k]);
      add_vector_vector(Sizevec,VecRes,Vec[k]);
      prod_vector_double(Sizevec,Vec[k],1.0/coef[k]);
    }
  }
}

void multi_prod_matrix_vector(int n, int Sizevec, Matrix **Mat, double **Vec, double *VecRes ){
  int k;
  double *work;

  init_vector(Sizevec,&work);

  zero_vector(Sizevec,VecRes);
  for(k=0;k<n;k++){
    prod_matrix_vector(Mat[k],Vec[k],work);
    add_vector_vector(Sizevec,VecRes,work);
  }
}

void prodsc_vectorconj_vector (int Nb, double *U , double *V, double *proscar, double *proscai ){
  /* uconjugue * v -> proscar + i prodscai  */
  int i;
  *proscar = *proscai = 0.0 ;
  for (i=0; i<Nb; i+=2){
    *proscar += U[i] * V[i]   + U[i+1] * V[i+1] ;
    *proscai += U[i] * V[i+1] - U[i+1] * V[i]   ;
  }
}

/* ------------------------------------------------------------------------ */
/*  n o r m                                                                 */
/* ------------------------------------------------------------------------ */

void normation_vector( int Nb , double *U ){
  double val;

  prodsc_vector_vector(Nb,U,U,&val);
  if(val > 0.0){
    printf(" norm : %g \n",val);
    prod_vector_double(Nb,U,1.0/sqrt(val));
  } else {
    printf("attention normation d'un vecteur nul \n");
  }
}

/* ------------------------------------------------------------------------ */
/*  i d e n t i t y                                                         */
/* ------------------------------------------------------------------------ */

void identity_matrix (Matrix *M){
  int i;
  zero_matrix(M);
  for (i=1;i<=M->N;i++) add_matrix_double(M,i,i,1.0);
}


/* ------------------------------------------------------------------------ */
/*  w r i t e                                                               */
/* ------------------------------------------------------------------------ */

void binary_write_matrix (Matrix *M, char *name, char *ext){
  
  int   Nb;
  FILE *pfile;
  char  filename[256];

  if(!M->N){
    printf("No elements in matrix\n");
    return;
  }

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "w+") ;

  fprintf(pfile,"%d\n",M->T);

  switch (M->T) {
  case SPARSE :
    Nb = List_Nbr(M->S.a) ;

    fprintf(pfile,"%d %d\n", M->N, Nb);

    fprintf(pfile,"%d %d %d %d %d\n", M->S.ptr->nmax, M->S.ptr->size, 
	    M->S.ptr->incr, M->S.ptr->n, M->S.ptr->isorder);
    fprintf(pfile,"%d %d %d %d %d\n", M->S.ai->nmax, M->S.ai->size, 
	    M->S.ai->incr, M->S.ai->n, M->S.ai->isorder);
    fprintf(pfile,"%d %d %d %d %d\n", M->S.jptr->nmax, M->S.jptr->size, 
	    M->S.jptr->incr, M->S.jptr->n, M->S.jptr->isorder);
    fprintf(pfile,"%d %d %d %d %d\n", M->S.a->nmax, M->S.a->size, 
	    M->S.a->incr, M->S.a->n, M->S.a->isorder);

    fwrite(M->S.ptr->array, sizeof(int), Nb, pfile);
    fwrite(M->S.ai->array, sizeof(int), Nb, pfile);
    fwrite(M->S.jptr->array, sizeof(int), M->N, pfile);
    fwrite(M->S.a->array, sizeof(double), Nb, pfile);
    break;

  case DENSE :
    fprintf(pfile,"%d\n", M->N);
    fwrite(M->F.a, sizeof(double), M->N*M->N, pfile);
    break;
  }

  fclose(pfile) ;
}


void binary_write_vector (int Nb, double *V, char *name, char *ext){
  char filename[256];
  FILE *pfile;

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "w+") ;

  fwrite(V, sizeof(double), Nb, pfile);

  fclose(pfile) ;
}


void formatted_write_matrix (FILE *pfile, Matrix *M, int style){  
  int *ptr,*ai,i,j,*jptr, *ia, *ja, *ir, nnz, ierr;
  int  un=1;
  double *a;

  if(!M->N){
    Msg(WARNING, "No element in matrix");
    return;
  }

  switch (M->T) {

  case DENSE :
    if(M->notranspose)
      for(i=0 ; i<M->N ; i++)
	for(j=0 ; j<M->N ; j++)
	  fprintf(pfile,"%d %d %.16g\n", j+1, i+1, M->F.a[i*(M->N)+j]);
    else
      for(i=0 ; i<M->N ; i++)
	for(j=0 ; j<M->N ; j++)
	  fprintf(pfile,"%d %d %.16g\n", i+1, j+1, M->F.a[i*(M->N)+j]);
    break;

  case SPARSE :
    
    switch(style){
      
    case ELAP : 
      fprintf(pfile,"%d\n",M->T); 
      a = (double*)M->S.a->array;
      ai = (int*)M->S.ai->array;
      ptr = (int*)M->S.ptr->array;
      jptr = (int*)M->S.jptr->array;
      fprintf(pfile,"%d\n",M->N);
      fprintf(pfile,"%d\n",List_Nbr(M->S.a));
      for(i=0;i<M->N;i++)
	fprintf(pfile," %d",jptr[i]);
      fprintf(pfile,"\n");
      for(i=0;i<List_Nbr(M->S.a);i++)
	fprintf(pfile,"%d %d %.16g \n",ai[i],ptr[i],a[i]);
      break;
    
    case KUL :
      csr_format(&M->S, M->N);
      a  = (double*) M->S.a->array;
      ia = (int*) M->S.jptr->array;
      ja = (int*) M->S.ptr->array; 
      nnz = List_Nbr(M->S.a);
      ir = (int*) Malloc(nnz * sizeof(int));
      csrcoo_(&M->N, &un, &nnz, a, ja, ia, &nnz, a, ir, ja, &ierr);      
      for(i=0 ; i<nnz ; i++)
	fprintf(pfile,"%d  %d  %.16g\n", ir[i], ja[i], a[i]);
      restore_format(&M->S);
      break;
    
    default : 
      Msg(ERROR, "Unknown print style for formatted matrix output");
    }
    break ;
    
  default :
    Msg(ERROR, "Unknown matrix format for formatted matrix output");

  }
}


void formatted_write_vector (FILE *pfile, int Nb, double *V, int style){
  int  i;

  /* for(i=0 ; i<Nb ; i++) fprintf(pfile,"%d %.16g\n", i+1, V[i]); */
  for(i=0 ; i<Nb ; i++) fprintf(pfile,"%.16g\n", V[i]);
}


/* ------------------------------------------------------------------------ */
/*  r e a d                                                                 */
/* ------------------------------------------------------------------------ */


void binary_read_matrix (Matrix *M, char *name , char *ext){
  
  int   Nb;
  FILE *pfile;
  char  filename[256];
  
  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "r") ;

  if (pfile == NULL) {
    Msg(ERROR,"Error opening file '%s'", filename);    
  }
  
  fscanf(pfile,"%d",&M->T);
  M->ILU_Exists  = 0;

  switch (M->T) {
  case SPARSE :
    fscanf(pfile,"%d %d\n", &M->N, &Nb);

    M->S.ptr  = List_Create (Nb, 1, sizeof(int));
    M->S.ai   = List_Create (Nb, 1, sizeof(int));
    M->S.jptr = List_Create (M->N, 1, sizeof(int));
    M->S.a    = List_Create (Nb, 1, sizeof(double));

    fscanf(pfile,"%d %d %d %d %d\n", &M->S.ptr->nmax, &M->S.ptr->size, 
	   &M->S.ptr->incr, &M->S.ptr->n, &M->S.ptr->isorder);
    fscanf(pfile,"%d %d %d %d %d\n", &M->S.ai->nmax, &M->S.ai->size, 
	   &M->S.ai->incr, &M->S.ai->n, &M->S.ai->isorder);
    fscanf(pfile,"%d %d %d %d %d\n", &M->S.jptr->nmax, &M->S.jptr->size, 
	   &M->S.jptr->incr, &M->S.jptr->n, &M->S.jptr->isorder);
    fscanf(pfile,"%d %d %d %d %d\n", &M->S.a->nmax, &M->S.a->size, 
	   &M->S.a->incr, &M->S.a->n, &M->S.a->isorder);

    fread(M->S.ptr->array, sizeof(int), Nb, pfile);
    fread(M->S.ai->array, sizeof(int), Nb, pfile);
    fread(M->S.jptr->array, sizeof(int), M->N, pfile);
    fread(M->S.a->array, sizeof(double), Nb, pfile);
    break;
    
  case DENSE :
    fscanf(pfile,"%d\n", &M->N);
    M->F.LU_Exist = 0;
    M->F.a  = (double*) Malloc(M->N * M->N * sizeof(double));
    M->F.lu  = (double*) Malloc(M->N * M->N * sizeof(double));
    fread(M->F.a, sizeof(double), M->N * M->N, pfile);
    break ;
  }

  fclose(pfile) ;

}


void binary_read_vector (int Nb, double **V, char *name, char *ext){
  char filename[256];
  FILE *pfile;

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "r") ;

  if (pfile == NULL) {
    Msg(ERROR, "Error opening file %s", filename);
  }

  init_vector(Nb, V);
  fread(*V, sizeof(double), Nb, pfile);

  fclose(pfile) ;
}


void formatted_read_matrix (Matrix *M, char *name , char *ext, int style){  
  int i,nnz,inb,inb2;
  double nb;
  FILE *pfile;
  char filename[256];
  
  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "r+") ;

  if (pfile == NULL) {
    Msg(ERROR,"Error opening file  %s", filename);
  }
  
  fscanf(pfile,"%d",&M->T);
  switch (M->T) {
  case SPARSE :
    List_Reset(M->S.jptr);
    fscanf(pfile,"%d",&M->N);
    fscanf(pfile,"%d",&nnz);
    for(i=0;i<M->N;i++){
      fscanf(pfile," %d",&inb);
      List_Add(M->S.jptr,&inb);
    }
    for(i=0;i<nnz;i++){
      fscanf(pfile,"%d %d %lf \n",&inb,&inb2,&nb);
      List_Add(M->S.ai,&inb);
      List_Add(M->S.ptr,&inb2);
      List_Add(M->S.a,&nb);
    }
    
    break;
    
  case DENSE :
    fscanf(pfile,"%d",&M->N);
    for(i=0;i<(M->N)*(M->N);i++){
      fscanf(pfile,"%d %lf ", &inb, &M->F.a[i]);
    }
    break;
  }
  fclose(pfile) ;

}


void formatted_read_vector (int Nb, double *V, char *name, char *ext, int style){
  int i;
  FILE *pfile;
  char filename[256];

  strcpy(filename, name);
  strcat(filename, ext);
  pfile = fopen(filename, "r") ;

  if (pfile == NULL) {
    Msg(ERROR,"Error opening file %s", filename);
  }

  for(i=0 ; i<Nb ; i++) fscanf(pfile, "%lf", &V[i]);

  fclose(pfile) ;
}

/* ------------------------------------------------------------------------ */
/*  p r i n t _ m a t r i x _ i n f o _ X X X                               */
/* ------------------------------------------------------------------------ */

int maximum (int a, int b) {
  if (a>b) 
    return(a);
  else
    return(b);
}


void print_matrix_info_CSR (int N, int *jptr, int *ai){
  int i, j, k, l, m, n;
  
  l = n = 0;
  j = jptr[N]-1 ;
  for (i=0; i<N; i++) {
    k = jptr[i+1] - jptr[i];	  
    m = ai[jptr[i+1]-2] - ai[jptr[i]-1] + 1;
    if (l<k) l = k;
    if (n<m) n = m;
  }

  Msg(SPARSKIT, "N: %d, NZ: %d, BW max/avg: %d/%d, SW max: %d\n", 
      N, j, l, (int)(j/N), n);
}

void print_matrix_info_MSR (int N, scalar *a, int *jptr){
  int i, j, k, l, m, n;

  l = n = 0;
  j = jptr[N]-2;
  for (i=0; i<N; i++) {
    k = jptr[i+1] - jptr[i] + (a[i]?1:0) ; 
    if((jptr[i+1] - jptr[i]) == 0)
      m = (a[i]?1:0);
    else
      m = maximum ( jptr[jptr[i+1]-2] - jptr[jptr[i]-1] + 1,
		    maximum (jptr[jptr[i+1]-2] - (i+1) + 1, (i+1) - jptr[jptr[i]-1] + 1) );
    if (l<k) l = k;
    if (n<m) n = m;
  }

  Msg(SPARSKIT, "N: %d, NZ: %d, BW max/avg: %d/%d, SW max: %d\n", 
      N, j, l, (int)(j/N), n);

}

void print_matrix_info_DENSE (int N){
  Msg(SPARSKIT, "N: %d\n", N);
}


/* ------------------------------------------------------------------------ */
/*  get _ column _ in _ m a t r i x                                         */
/* ------------------------------------------------------------------------ */

void get_column_in_matrix (Matrix *M, int col, double *V){

  int     k, i, j, *ai, *jptr ;
  double  *a;
  int found;

  switch (M->T) {
  case SPARSE :
    /* csr_format transpose! 
       donc la matrice arrivant dans cette routine doit
       bel et bien etre la transposee !!! */
    if(M->changed){
      csr_format (&M->S, M->N);
      restore_format (&M->S);
      M->changed = 0 ;
    }
    jptr = (int*) M->S.jptr->array;
    a    = (double*) M->S.a->array;
    ai   = (int*) M->S.ai->array;

    for(i=0; i<M->N; i++){  /* lignes */
      found=0;
      for(k=jptr[i]-1;k<jptr[i+1]-1;k++){ /*colonne */
         if(ai[k]-1==col) { 
	   V[i]=a[k]; found=1; break; 
	 }
	 else if (ai[k]-1 > col) { 
	   break; 
	 }
       }
      if (!found) V[i]=0; 
    printf(" V[%d] = %g \n",i, V[i]); 
    } 
    break;
  case DENSE :
    if(M->notranspose){
	for(j=0; j<M->N; j++) V[j] = M->F.a[(M->N)*col+j];
    }
    else{
      for(i=0; i<M->N; i++){
	for(j=0; j<M->N; j++) V[j] = M->F.a[(M->N)*j+col];
      }
    }
    break;
  }
}

