#define RCSID "$Id: Parser.c,v 1.11 2001-06-26 11:44:28 gyselinc Exp $"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "Solver.h"
#include "Message.h"
#include "Malloc.h"

#define REEL    1
#define ENTIER  2

extern int Flag_SOCKET ;

typedef struct {
  char *str;
  int typeinfo;
  int defaultint;
  double defaultfloat;
  char *com;
  void (*action) ( Solver_Params *p , int i , double d );
}InfoSolver;

int compInfoSolver(const void *a, const void *b){
  return(strcmp(((InfoSolver*)a)->str, ((InfoSolver*)b)->str));
}

/* ------------------------------------------------------------------------ */
/*  C o m m e n t s                                                         */
/* ------------------------------------------------------------------------ */

static char comALGORITHM[] = 
"\n%s : \n\
    - 1  CG       Conjugate Gradient                    \n\
    - 2  CGNR     CG (Normal Residual equation)         \n\
    - 3  BCG      Bi-Conjugate Gradient                 \n\
    - 4  DBCG     BCG with partial pivoting             \n\
    - 5  BCGSTAB  BCG stabilized                        \n\
    - 6  TFQMR    Transpose-Free Quasi-Minimum Residual \n\
    - 7  FOM      Full Orthogonalization Method         \n\
    - 8  GMRES    Generalized Minimum RESidual          \n\
    - 9  FGMRES   Flexible version of GMRES             \n\
    - 10 DQGMRES  Direct versions of GMRES              \n\
    - 11 LU       LU Factorization                      \n\
    - 12 PGMRES   Alternative version of GMRES          \n\
    - default : %d\n";

static char comPRECONDITIONER[] = 
"\n%s : \n\
    - 0  NONE     No Factorization\n\
    - 1  ILUT     Incomplete LU factorization with dual truncation strategy \n\
    - 2  ILUTP    ILUT with column  pivoting                                \n\
    - 3  ILUD     ILU with single dropping + diagonal compensation (~MILUT) \n\
    - 4  ILUDP    ILUD with column pivoting                                 \n\
    - 5  ILUK     level-k ILU                                               \n\
    - 6  ILU0     simple ILU(0) preconditioning                             \n\
    - 7  MILU0    MILU(0) preconditioning                                   \n\
    - 8  DIAGONAL                                                           \n\
    - default : %d \n";

static char comPRECONDITIONER_POSITION[] = 
"\n%s : \n\
    - 0  No Preconditioner \n\
    - 1  Left Preconditioner \n\
    - 2  Right Preconditioner \n\
    - 3  Both Left and Right Preconditioner \n\
    - default : %d \n";

static char comRENUMBERING_TECHNIQUE[] = 
"\n%s : \n\
    - 0  No renumbering \n\
    - 1  Reverse Cuthill-Mc Kee \n\
    - default : %d \n";

static char comNB_ITER_MAX[] = 
"\n%s : Maximum number of iterations \n\
    - default : %d \n";

static char comMATRIX_FORMAT[] = 
"\n%s : \n\
    - 1  Sparse \n\
    - 2  Full \n\
    - default : %d\n";

static char comMATRIX_PRINTING[] = 
"\n%s : Disk write ('fort.*') \n\
    - 1  matrix (csr) \n\
    - 2  preconditioner (msr) \n\
    - 3  both \n\
    - default : %d\n";

static char comMATRIX_STORAGE[] = 
"\n%s : Disk Write or Read in internal format \n\
    - 0  none \n\
    - 1  write matrix (sparse) \n\
    - 2  read matrix (sparse) \n\
    - default : %d\n";

static char comNB_FILL[] = 
"\n%s : \n\
    - ILUT/ILUTP : maximum number of elements per line \n\
      of L and U (except diagonal element) \n\
    - ILUK : each element whose fill-in level is greater than NB_FILL \n\
      is dropped. \n\
    - default : %d\n";

static char comKRYLOV_SIZE[] = 
"\n%s : Krylov subspace size \n\
    - default : %d\n";

static char comSTOPPING_TEST[] = 
"\n%s : Target residual \n\
    - default : %12.5E \n";

static char comIC_ACCELERATION[] = 
"\n%s : IC accelerator\n\
    - default : %12.5E \n";

static char comITERATIVE_IMPROVEMENT[] =  
"\n%s : Iterative improvement of the solution obtained by a LU \n\
    - default : %d\n";

static char comDROPPING_TOLERANCE[] = 
"\n%s : \n\
    - ILUT/ILUTP/ILUK: a(i,j) is dropped if \n\
      abs(a(i,j)) < DROPPING_TOLERANCE * abs(diagonal element in U). \n\
    - ILUD/ILUDP : a(i,j) is dropped if \n\
      abs(a(i,j)) < DROPPING_TOLERANCE * [weighted norm of line i]. \n\
      Weighted norm = 1-norm / number of nonzero elements on the line. \n\
    - default : %12.5E\n";

static char comPERMUTATION_TOLERANCE[] = 
"\n%s : Tolerance for column permutation in ILUTP/ILUDP. \n\
    At stage i, columns i and j are permuted if \n\
    abs(a(i,j))*PERMUTATION_TOLERANCE > abs(a(i,i)). \n\
    - 0  no permutations \n\
    - 0.001 -> 0.1  classical \n\
    - default : %12.5E\n";

static char comRE_USE_LU[] =  
"\n%s : Reuse LU decomposition\n\
    - 0  no \n\
    - 1  yes \n\
    - default : %d\n";

static char comRE_USE_ILU[] =  
"\n%s : Reuse ILU decomposition (and renumbering if any)\n\
    - 0  no \n\
    - 1  yes \n\
    - default : %d\n";

static char comDIAGONAL_COMPENSATION[] = 
"\n%s : ILUD/ILUDP: the term 'DIAGONAL_COMPENSATION * (sum \n\
    of all dropped elements of the line)' is added to the diagonal element in U \n\
    - 0  ~ ILU with threshold \n\
      1  ~ MILU with threshold. \n\
    - default : %12.5E\n";

static char comSCALING[] = 
"\n%s : Scale system \n\
    - 0  no \n\
    - 1  on basis of diagonal elements  (no loss of possible symmetry) \n\
    - 2  on basis of inf. norm  of first rows and then columns  (asymmetric) \n\
    - 3  on basis of norm 1     of first rows and then columns  (asymmetric) \n\
    - 4  on basis of norm 2     of first rows and then columns  (asymmetric) \n\
    - default : %d\n";

/* ------------------------------------------------------------------------ */
/*  A c t i o n s                                                           */
/* ------------------------------------------------------------------------ */

#define act_ARGS     Solver_Params *p, int i, double d

void actALGORITHM               (act_ARGS){ p->Algorithm = i; }
void actPRECONDITIONER          (act_ARGS){ p->Preconditioner = i; }
void actPRECONDITIONER_POSITION (act_ARGS){ p->Preconditioner_Position = i; }
void actRENUMBERING_TECHNIQUE   (act_ARGS){ p->Renumbering_Technique = i; }
void actNB_ITER_MAX             (act_ARGS){ p->Nb_Iter_Max = i; }
void actMATRIX_FORMAT           (act_ARGS){ p->Matrix_Format = i; }
void actMATRIX_PRINTING         (act_ARGS){ p->Matrix_Printing = i; }
void actMATRIX_STORAGE          (act_ARGS){ p->Matrix_Storage = i; }
void actNB_FILL                 (act_ARGS){ p->Nb_Fill = i; }
void actKRYLOV_SIZE             (act_ARGS){ p->Krylov_Size = i; }
void actSTOPPING_TEST           (act_ARGS){ p->Stopping_Test = d; }
void actIC_ACCELERATION         (act_ARGS){ p->IC_Acceleration = d; }
void actITERATIVE_IMPROVEMENT   (act_ARGS){ p->Iterative_Improvement = i; }
void actRE_USE_LU               (act_ARGS){ p->Re_Use_LU = i; }
void actDROPPING_TOLERANCE      (act_ARGS){ p->Dropping_Tolerance = d; }
void actPERMUTATION_TOLERANCE   (act_ARGS){ p->Permutation_Tolerance = d; }
void actRE_USE_ILU              (act_ARGS){ p->Re_Use_ILU = i; }
void actDIAGONAL_COMPENSATION   (act_ARGS){ p->Diagonal_Compensation = d; }
void actSCALING                 (act_ARGS){ p->Scaling = i; }



/* ------------------------------------------------------------------------ */
/*  P a r a m e t e r s   w i t h   d e f a u l t   v a l u e s             */
/* ------------------------------------------------------------------------ */

static InfoSolver Tab_Params[] = 
{
  {"Matrix_Format",           ENTIER, 1,     0.,    comMATRIX_FORMAT,           actMATRIX_FORMAT},
  {"Matrix_Printing",         ENTIER, 0,     0.,    comMATRIX_PRINTING,         actMATRIX_PRINTING},
  {"Matrix_Storage",          ENTIER, 0,     0.,    comMATRIX_STORAGE,          actMATRIX_STORAGE},
  {"Scaling",                 ENTIER, 0,     0.,    comSCALING,                 actSCALING},
  {"Renumbering_Technique",   ENTIER, 1,     0.,    comRENUMBERING_TECHNIQUE,   actRENUMBERING_TECHNIQUE},
  {"Preconditioner",          ENTIER, 2,     0.,    comPRECONDITIONER,          actPRECONDITIONER},
  {"Preconditioner_Position", ENTIER, 2,     0.,    comPRECONDITIONER_POSITION, actPRECONDITIONER_POSITION},
  {"Nb_Fill",                 ENTIER, 20,    0.,    comNB_FILL,                 actNB_FILL},
  {"Permutation_Tolerance",   REEL,   0,     5.e-2, comPERMUTATION_TOLERANCE,   actPERMUTATION_TOLERANCE},
  {"Dropping_Tolerance",      REEL,   0,     0.,    comDROPPING_TOLERANCE,      actDROPPING_TOLERANCE},    
  {"Diagonal_Compensation",   REEL,   0,     0.,    comDIAGONAL_COMPENSATION,   actDIAGONAL_COMPENSATION},    
  {"Re_Use_ILU",              ENTIER, 0,     0.,    comRE_USE_ILU,              actRE_USE_ILU},
  {"Algorithm",               ENTIER, 8,     0.,    comALGORITHM,               actALGORITHM},
  {"Krylov_Size",             ENTIER, 40,    0.,    comKRYLOV_SIZE,             actKRYLOV_SIZE},
  {"IC_Acceleration",         REEL,   0,     1.,    comIC_ACCELERATION,         actIC_ACCELERATION},
  {"Re_Use_LU",               ENTIER, 0,     0.,    comRE_USE_LU,               actRE_USE_LU},
  {"Iterative_Improvement",   ENTIER, 0,     0.,    comITERATIVE_IMPROVEMENT,   actITERATIVE_IMPROVEMENT},
  {"Nb_Iter_Max",             ENTIER, 1000,  0.,    comNB_ITER_MAX,             actNB_ITER_MAX},
  {"Stopping_Test",           REEL,   0,     1.e-10,comSTOPPING_TEST,           actSTOPPING_TEST}
};


/* ------------------------------------------------------------------------ */
/*  i n i t _ s o l v e r                                                   */
/* ------------------------------------------------------------------------ */

#define NbInfosSolver (int)(sizeof(Tab_Params)/sizeof(Tab_Params[0]))

void Commentaires (FILE *out){
  int i;
  InfoSolver *pI;

  for(i=0;i<NbInfosSolver;i++){
    pI = &Tab_Params[i];
    switch(pI->typeinfo){
    case REEL :
      fprintf(out,pI->com,pI->str,pI->defaultfloat);
      break;
    case ENTIER :
      fprintf(out,pI->com,pI->str,pI->defaultint);
      break;
    }
  }
  fprintf(out,"\n");
}

void init_solver (Solver_Params *p , char *name){

  char buff[200];
  FILE *pSOLVER_PAR;
  InfoSolver *pI,I;
  int i;
  double ff;
  int    ii;

  for(i=0;i<NbInfosSolver;i++){
    pI = &Tab_Params[i];
    (pI->action)(p,pI->defaultint,pI->defaultfloat);
  }

  if(!(pSOLVER_PAR = fopen(name,"r"))){
    pSOLVER_PAR = fopen(name,"w");
    fprintf(pSOLVER_PAR,"/*\n");
    Commentaires(pSOLVER_PAR);
    fprintf(pSOLVER_PAR,"*/\n\n");
    for(i=0;i<NbInfosSolver;i++){
      pI = &Tab_Params[i];
      switch(pI->typeinfo){
      case REEL :
	if(Flag_SOCKET>0)
	  strcpy(buff, "\n");
	else{
	  printf ( "%25s ( %12.5f ): ",pI->str,pI->defaultfloat);
	  fgets (buff, 128, stdin);
	}
	if(!strcmp(buff,"\n")){
	  fprintf(pSOLVER_PAR,"%25s %12.5E\n",pI->str,pI->defaultfloat);
	  (pI->action)(p,pI->defaultint,pI->defaultfloat);
	}
	else{
	  fprintf(pSOLVER_PAR,"%25s %12.5E\n",pI->str,atof(buff));
	  (pI->action)(p,pI->defaultint,atof(buff));
	}
	break;
      case ENTIER :
	if(Flag_SOCKET>0)
	  strcpy(buff, "\n");
	else{
	  printf ( "%25s ( %12d ): ",pI->str,pI->defaultint);
	  fgets (buff, 128, stdin);
	}
	if(!strcmp(buff,"\n")){
	  fprintf(pSOLVER_PAR,"%25s %12d\n",pI->str,pI->defaultint);
	  (pI->action)(p,pI->defaultint,pI->defaultfloat);
	}
	else{
	  fprintf(pSOLVER_PAR,"%25s %12d\n",pI->str,atoi(buff));
	  (pI->action)(p,atoi(buff),pI->defaultfloat);
	}
	break;
      }
    }    
    fprintf(stdout,"\n");
    fclose(pSOLVER_PAR);
  }
  else {
    qsort(Tab_Params, NbInfosSolver, sizeof(InfoSolver), compInfoSolver);
    rewind(pSOLVER_PAR);
    while (!feof(pSOLVER_PAR)){
      fscanf(pSOLVER_PAR,"%s",buff);
      I.str = buff;
      if(!(pI = (InfoSolver*)bsearch(&I,Tab_Params, NbInfosSolver, 
				     sizeof(InfoSolver),compInfoSolver))){
	if(buff[0] == '/' && buff[1] == '*'){
	  while(1){
	    if(feof(pSOLVER_PAR)){
	      Msg(WARNING, "End of Comment not Detected");
	      return;
	    }
	    if((getc(pSOLVER_PAR)=='*')&&(getc(pSOLVER_PAR)=='/')){
	      break;
	    }
	  }
	}
	else{
	  Msg(WARNING, "Unknown Parameter %s", buff);
	  fscanf(pSOLVER_PAR,"%s",buff);
	}
      }
      else{
	switch(pI->typeinfo){
	case REEL :
	  fscanf(pSOLVER_PAR,"%lf",&ff);
	  (pI->action)(p,ii,ff);
	  break;
	case ENTIER :
	  fscanf(pSOLVER_PAR,"%d",&ii);
	  (pI->action)(p,ii,ff);
	  break;
	}
      }
    }
  }
}


