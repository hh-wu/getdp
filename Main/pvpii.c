#define RCSID "$Id: pvpii.c,v 1.4 2000-10-30 01:29:48 geuzaine Exp $"

/usr/users52/meys/asmodee/...

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "base.h"
#include "Xbase.h"
#include "lucie.h"
#include "ddlmuE.h"
#include "temps.h"
#include "tools.h"
#include "Transfer.h"
#include "ddlmuMat.h"
#include "onde.h"
#include "complex.h"

static double arg1,arg2;
#define DMAX(a,b) (arg1=(a),arg2=(b),(arg1>arg2)?(arg1):(arg2))

double   Relax(int TypRelax, int NumIter);
complex  Pulsation_Propre_Cplx(void);

BASE_T   *lpBase;
XBASE_T  *lpXBase;

Ddlmu_T  *lpDdlmu1,*lpDdlmu2;
Matrix   A, J, K, M ;

double   *x, *xp, *B, *res, *dx;
double    *y, *yp, *C, *resy, *dy;


double t0,tpart;

float etime_(float *);

double cpu_tim(){
  float tarray[2];
  return ((double) etime_(tarray));
}


int main (int argc, char *argv[]){

  char           Name[256],Bibli[256],nl1[256],nl2[256];
  int            TypIterTemp, TypIterNonLin, TypRelax;
  int            NumIterTemp, NbIterTemp, NumIterNonLin, NbIterNonLin;
  int            FrequSauvegarde, Mouvement,ModelStatus,i;
  long           mun = -1;
  double         t, t_max, dt;
  double         TolNonLin, ErreurMoyenne, ErreurMoyenne1,ErreurMoyenne2, CoefRelax;
  double         shiftr,shifti,c1r,c1i,kcrold,kciold,kcr,kci;
  complex        omegacplx;
  clock_t        t1, t2, t3, t4, t5, t6;
  Solver_Params  p;
  FILE           *toto,*toto2;

  if ( argc < 2 ) {
    printf ("Pas d'argument !\n");
    return(0);
  }
  

  t1 = clock();
  
  print_arena("Debut du Calcul");
  time_writeI(MODEL_STATUS,STATUS_CAL);
  GetOptions(argc, argv, Name);

  strcpy(nl1,Name);
  strcat(nl1,".nldata1");
  strcpy(nl2,Name);
  strcat(nl2,".nldata2");

  time_readI(MODEL_STATUS,&ModelStatus);
  entete(); 

  fprintf(stderr,"parametre de shifting reel = ? \n");
  scanf("%lf",&shiftr);
  fprintf(stderr,"parametre de shifting imag = ? \n");
  scanf("%lf",&shifti);

  fprintf(stderr, "=  Lecture de la base de donnees            =\n");
  lpBase = BDCreate();
  if ( !BDRead(Name, ".LUC", lpBase,LECTURE_ALL)) exit(1);
  print_arena("Apres la lecture de la BD");

  fprintf(stderr, "=  Lecture de la base de donnees croisees   =\n");
  lpXBase = XBDCreate();
  if ( !XBDRead(Name, ".LUX", lpXBase)) exit(1);
  print_arena("Apres la lecture de la XBD");

  init_time(ModelStatus);

  time_writeF(SHIFT_REEL,shiftr);
  time_writeF(SHIFT_IMAG,shifti);
  time_writeF(VAL_PR_REEL,shiftr);
  time_writeF(VAL_PR_IMAG,shifti);
  kcrold = kcr = shiftr;
  kciold = kci = shifti;

  fprintf(stderr, "=  Lecture de la bibliotheque               =\n");
  if (!BIB_Read("BIBELE.BIB")) {
    cdbp001(Bibli,Bibli);
    printf("Librairie d'elements <%s>\n",Bibli);
    if (!BIB_Read(Bibli)) exit(1) ;
  }
  print_arena("Apres la lecture de la BIBLIO");

  lpDdlmu1 = Ddlmu_Create();
  Ddl_Ddlmu_Cur(lpDdlmu1);
  if (!ddlopn(Name,".20","r+")) exit(1) ;
  ddlerp();

  t0 = cpu_tim();
  
  time_readI(NB_ITER_TEMP, &NbIterTemp);
  init_results(NbIterTemp);

  init_solver(&p, "SOLVER.PAR");
  
  init_matrix(NbrEquNum, &K, p.Matrix_Format);
  init_vector(NbrEquNum, &B);
  init_vector(NbrEquNum, &x);
  init_solution(x);
  VecSolAct = x ;
  VecSecMem = B ;
  init_vector(NbrEquNum, &xp);
  init_solution(xp);

  time_readI(TYP_ITER_TEMP, &TypIterTemp);
  if (TypIterTemp != NONE) {
    fprintf(stderr, "=  Probleme transitoire                    =\n");
  }

  time_readF(T_MAX, &t_max);
  time_readI(FREQU_SAUVEGARDE, &FrequSauvegarde);
  toto = fopen(nl1,"w");
  toto2 = fopen(nl2,"w");

  
  time_readI(TYP_ITER_NON_LIN, &TypIterNonLin);
  if(TypIterNonLin == NR){
    fprintf(stderr,"=  Probleme Non Lineaire                    =\n");
    time_readF(TOL_NON_LIN, &TolNonLin);
    time_readI(NB_ITER_NON_LIN, &NbIterNonLin);
    time_readI(TYP_RELAX, &TypRelax);
    init_matrix(NbrEquNum, &M, p.Matrix_Format);
    init_vector(NbrEquNum, &dx);
    init_vector(NbrEquNum, &res);
  }
  
      
  time_readI(NUM_ITER_NON_LIN, &NumIterNonLin);
  
  /* initialiser x, shift, kc */ 
  
  random_vector(NbrEquNum,x);
  normation_vector(NbrEquNum,x);
  CoefRelax = Relax(TypRelax, NumIterNonLin);
  
  do {
    zero_matrix(&K);
    zero_matrix(&M);
    zero_vector(NbrEquNum, B);
    c1r = c1i = 0.0 ;
    fprintf(stderr, "=    Iteration de N-R %5d                 =\n", NumIterNonLin);
    fprintf(stderr, "=    Assemblage Du Jacobien                 =\n");
    pmatK = &K;
    pmatM = &M;
    VecSolAct = x;
    pvecK = B ;
    pvecM = B ;

    genere();
    

    prod_matrix_vector(&M, x, res);
    /*    copy_vector(NbrEquNum,x,res);*/
    
    fprintf(stderr, "=    Resolution du systeme                  =\n");
    solve_matrix(&K, &p, res, dx); 
    /*    print_vector(x,NbrEquNum);
    print_vector(dx,NbrEquNum);*/
    prodsc_vectorconj_vector(NbrEquNum,x,dx,&c1r,&c1i);
    kcrold = kcr ;
    kciold = kci ;
    kcr = shiftr + c1r / ( c1r*c1r + c1i*c1i ) ;
    kci = shifti - c1i / ( c1r*c1r + c1i*c1i ) ;
    if(kcr){
      ErreurMoyenne1 = fabs((kcrold-kcr)/kcr);
    } else {
      ErreurMoyenne1 = fabs(kcrold-kcr);
    }
    if(kci){
      ErreurMoyenne2 = fabs((kciold-kci)/kci);
    } else {
      ErreurMoyenne2 = fabs(kciold-kci);
    }
    /*ErreurMoyenne = DMAX(ErreurMoyenne1,ErreurMoyenne2); */
    ErreurMoyenne = ErreurMoyenne1; 

    normation_vector(NbrEquNum,dx);
    copy_vector(NbrEquNum,dx,x);
    if (NumIterNonLin > 4){
      shiftr = CoefRelax * shiftr + (1.0-CoefRelax) * kcr ;
      shifti = CoefRelax * shifti + (1.0-CoefRelax) * kci ; /* reshiftage eventuel */
    }
    omegacplx = Pulsation_Propre_Cplx();
    fprintf(stderr, "=    c1r   %12.5e                  =\n", c1r );
    fprintf(stderr, "=    c1i   %12.5e                  =\n", c1i );
    fprintf(stderr, "=    Re carre du nombre d onde   %12.5e                  =\n", kcr );
    fprintf(stderr, "=    Im carre du nombre d onde   %12.5e                  =\n", kci );
    if(kci!=0.0){
      fprintf(stderr, "=    Facteur de Qualite          %12.5e                  =\n", kcr/kci );
    }
    fprintf(stderr, "=    Pulsation complexe          %12.5e  %12.5e       =\n", omegacplx.r,omegacplx.i );
    fprintf(stderr, "=    Frequence de Resonance      %12.5e               =\n", omegacplx.r/2.0/Pi);
    fprintf(stderr, "=    Erreur moyenne1        N-R  %12.5e                  =\n", ErreurMoyenne1);
    fprintf(stderr, "=    Erreur moyenne2        N-R  %12.5e                  =\n", ErreurMoyenne2);
    fprintf(stderr, "=    Erreur prescrite      N-R  %12.5e                   =\n", TolNonLin);
    fprintf(stderr, "=    Facteur de Relaxation N-R  %12.5e                   =\n", CoefRelax);
    fprintf(stderr, "=    Re nouveau shift           %12.5e                   =\n", shiftr );
    fprintf(stderr, "=    Im nouveau shift           %12.5e                   =\n", shifti );


    fprintf(toto2, "=    Re carre du nombre d onde   %12.5e                  =\n", kcr );
    fprintf(toto2, "=    Im carre du nombre d onde   %12.5e                  =\n", kci );
    if(kci!=0.0){
      fprintf(toto2, "=    Facteur de Qualite          %12.5e                  =\n", kcr/kci );
    }
    fprintf(toto2, "=    Pulsation complexe          %12.5e  %12.5e       =\n", omegacplx.r,omegacplx.i );
    fprintf(toto2, "=    Frequence de Resonance      %12.5e               =\n", omegacplx.r/2.0/Pi);
    fprintf(toto2, "=    Erreur moyenne1        N-R  %12.5e                  =\n", ErreurMoyenne1);
    fprintf(toto2, "=    Erreur moyenne2        N-R  %12.5e                  =\n", ErreurMoyenne2);
    fprintf(toto2, "=    Erreur prescrite      N-R  %12.5e                   =\n", TolNonLin);
    fprintf(toto2, "=    Facteur de Relaxation N-R  %12.5e                   =\n", CoefRelax);
    fprintf(toto2, "=    Re nouveau shift           %12.5e                   =\n", shiftr );
    fprintf(toto2, "=    Im nouveau shift           %12.5e                   =\n", shifti );
    fflush(toto2);

    time_writeF(SHIFT_REEL,shiftr);
    time_writeF(SHIFT_IMAG,shifti);
    time_writeF(VAL_PR_REEL,kcr);
    time_writeF(VAL_PR_IMAG,kci);

    fprintf(toto,"%3d %12.5e %12.5e %12.5e %12.5e\n",NumIterNonLin,ErreurMoyenne1,ErreurMoyenne2,kcr,kci);
    fflush(toto);

    nlin_incr();
    time_readI(NUM_ITER_NON_LIN, &NumIterNonLin);
    tpart = cpu_tim();
    fprintf(stderr,"# ==> temps partiel(%.2f s) \n", (float) (tpart-t0));
  } while ((ErreurMoyenne >= TolNonLin)&&(NumIterNonLin <= NbIterNonLin));

  t2 = t3 = t4 = clock();
  
  
  

  TransferSolVec(x);
  fprintf(stderr, "=  Ecriture de la base de donnees           =\n");
  BDWrite(Name, ".LUC", lpBase);

  
  
  ddlclo();

  fprintf(stderr, "=  Fin Normale du Calcul                    =\n");

  t5 = clock();
  
  fprintf(stderr, "==> Temps Pour La Prepararion des donnees : %f sec.\n", (float)(t2-t1)/CLOCKS_PER_SEC);
  fprintf(stderr, "==> Temps Pour La Generation Du Systeme   : %f sec.\n", (float)(t3-t2)/CLOCKS_PER_SEC);
  fprintf(stderr, "==> Temps Pour La Resolution Du Systeme   : %f sec.\n", (float)(t4-t3)/CLOCKS_PER_SEC);
  fprintf(stderr, "==> Temps Pour La Cloture Des Fichiers    : %f sec.\n", (float)(t5-t4)/CLOCKS_PER_SEC);
  fprintf(stderr, "==> Temps Total Du Calcul                 : %f sec.\n", (float)(t5-t1)/CLOCKS_PER_SEC);

  print_arena("Fin du calcul");

}




