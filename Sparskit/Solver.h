#ifndef _SOLVER_H_
#define _SOLVER_H_

#include "listman.h"

#define ELAP      1
#define KUL       2

#define NONE      0

#define SPARSE    1
#define DENSE     2

#define CSR       1  /* Compressed Sparse Row */
#define CSC       2  /* Compressed Sparse Column */
#define MSR       3  /* Modified Sparse Row */
#define COO       4  /* Coordinate */

#define CG        1
#define CGNR      2
#define BCG       3
#define DBCG      4
#define BCGSTAB   5
#define TFQMR     6
#define FOM       7
#define GMRES     8
#define FGMRES    9
#define DQGMRES   10
#define LU        11
#define PGMRES    12

#define ILUT      1
#define ILUTP     2
#define ILUD      3
#define ILUDP     4
#define ILUK      5
#define ILU0      6
#define MILU0     7
#define DIAGONAL  8

#define RCMK      1

#ifdef _ILU_FLOAT
#define scalar float
#else
#define scalar double
#endif

typedef struct {
  /* sparse matrix */
  List_T  *a;
  List_T  *jptr, *ai, *ptr;

  /* permuted matrix */
  double  *a_rcmk ;
  int     *ia_rcmk, *ja_rcmk;

  /* permutation vectors */
  int     *permr, *permp, *rpermr;

  /* ILU decomposition */
  scalar  *alu;
  int     *jlu, *ju;
}Sparse_Matrix;

typedef struct {
  int      LU_Exist;
  double  *a, *lu;
}Dense_Matrix;

/* Il n'y a plus d'union, car le transfert du format Dense au
   format Sparse peut etre effectue au cours d'une resolution */

typedef struct{
  int T, N, changed, ILU_Exists, notranspose;
  Sparse_Matrix   S; 
  Dense_Matrix    F;
}Matrix;

typedef struct {
  int    Matrix_Format;
  int    Matrix_Printing;
  int    Matrix_Storage;
  int    Renumbering_Technique;
  int    Preconditioner;
  int    Preconditioner_Position;
  int    Nb_Fill;
  double Dropping_Tolerance;
  double Permutation_Tolerance;
  double Diagonal_Compensation;
  int    Re_Use_ILU;
  int    Algorithm;
  int    Krylov_Size;
  double IC_Acceleration;
  int    Iterative_Improvement;
  int    Re_Use_LU;
  int    Nb_Iter_Max;
  double Stopping_Test;
}Solver_Params;


/* matrix.c */

void init_matrix (int Nb, Matrix *M, Solver_Params *p);
void init_vector (int Nb, double **V);
void init_solver (Solver_Params *p , char *name) ;

void zero_matrix (Matrix *M);
void zero_vector (int Nb, double *V);

void copy_vector (int Nb, double *U , double *V );

void add_vector_vector (int Nb, double *U , double *V );
void add_vector_prod_vector_double (int Nb, double *U, double *V, double d);
void add_matrix_double (Matrix *M, int il, int ic, double val);
void add_matrix_matrix (Matrix *M, Matrix *N);
void add_matrix_prod_matrix_double (Matrix *M, Matrix *N, double d);

void sub_vector_vector_1 (int Nb, double *U, double *V);
void sub_vector_vector_2 (int Nb, double *U, double *V);

void prod_vector_double (int Nb, double *U, double a);
void prodsc_vector_vector (int Nb, double *U, double *V, double *prosca);
void prodsc_vectorconj_vector (int Nb, double *U, double *V, double *proscar, double *proscai);
void prod_matrix_vector (Matrix *M, double *v, double *res);
void prod_matrix_double (Matrix *M, double v);
void multi_prod_matrix_double(int n, Matrix **Mat, double *coef, Matrix *MatRes);
void multi_prod_vector_double(int n, int Sizevec, double **Vec, double *coef, double *VecRes);
void multi_prod_matrix_vector(int n, int Sizevec, Matrix **Mat, double **Vec, double *VecRes);

void normation_vector(int Nb, double *U);

void identity_matrix (Matrix *M);

void formatted_write_matrix (Matrix *M, char *name, char *ext, int style);
void formatted_write_vector (int Nb, double *V, char *name, char *ext, int style);
void formatted_read_matrix (Matrix *M, char *name, char *ext, int style);
void formatted_read_vector (int Nb, double *V, char *name, char *ext, int style);

void binary_write_matrix (Matrix *M, char *name, char *ext);
void binary_write_vector (int Nb, double *V, char *name, char *ext);
void binary_read_matrix (Matrix *M, char *name, char *ext);
void binary_read_vector (int Nb, double **V, char *name, char *ext);

void print_matrix (Matrix *M);
void print_vector (double *v, int N);
void print_vector_int (int *v, int N);

void print_matrix_info_CSR (int N, int *jptr, int *ai);
void print_matrix_info_MSR (int N, scalar *a, int *jptr);
void print_matrix_info_DENSE (int N);

/* sort.c */

void csr_format (Sparse_Matrix *M, int N);
void restore_format (Sparse_Matrix *M);

/* solver.c */

void solve_matrix (Matrix *M, Solver_Params *p, double *b, double *x);
void solve_complex_matrix (Sparse_Matrix *M, int N, Solver_Params *p, double *b, double *x);

void print_parametres (Solver_Params *p);



#endif

/*

Pour le futur ? non...

typedef struct {
  List_T  *a, *ja, *ia, *ptr;
}DynamicMatrix;

typedef struct {
  double  *a;
  int     *ja, ia;
}StaticMatrix;

struct matrix{
  int   F, N, NNZ;
  int  *permr, *permp, *rpermr;
  union {
    DynamicMatrix S;
    StaticMatrix  F;
  } M;
  struct matrix *LU;
};

typedef matrix Matrix;
*/
