#define RCSID "$Id: Lanczos.c,v 1.20 2004-07-03 06:03:23 geuzaine Exp $"
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to <getdp@geuz.org>.
 *
 * Contributor(s):
 *   Benoit Meys
 *   Andre Nicolet
 *   ohyeahq@yahoo.co.jp
 */

#include "GetDP.h"
#include "DofData.h"
#include "CurrentData.h"
#include "Numeric.h"

/* Version commentee par A. Nicolet de Lanczos.c le 2001/11/29 */

/* Bibliographie

   Numerical Linear Algebra, Trefethen & Bau, SIAM, Philadelphia,
   1997.  Tres recent et tres clair, excellent ouvrage introductif sur
   l'algebre lineaire numerique moderne!
   
   Y. Saad, Numerical Methods for Large Eigenvalue Problems,
   Manchester University Press Avantages: gratuit sur le Web
   (http://www.users.cs.umn.edu/~saad/books.html et le bouquin sur la
   resolution des systemes s'y trouve aussi maintenant!), assez recent
   (1992), tres cible sur le probleme comme son titre l'indique, tres
   clair avec peu de prerequis (le premier chapitre vous rememore tout
   ce que vous devez savoir sur les matrices pour commencer), bon
   niveau theorique sans abstraction stratospherique et decrit
   precisement les ALGORITHMES (dont par exemple la methode
   d'Arnoldi-Tchebychev conu par Saad lui-même).
   
   Golub & Van Loan, Matrix Computations, Johns Hopkins University
   Press, 3rd ed, 1996.  La troisieme edition de la bible du calcul
   matriciel applique!

   Valeurs propres des matrices, Franoise Chatelin, Masson, Paris,
   1988.  Bien cible et assez theorique, plutot court, un bon texte
   complementaire pour se faire un synthese.

   Analyse Numerique, sous la direction de Jacques Baranger, Hermann,
   Paris, 1991, Chapitre 7 par Franoise Chatelin. Bon chapitre
   synthetique par l'auteur de l'ouvrage precedent.

   M. Geradin, D. Rixen, Theorie des Vibrations, Masson, Paris, 2eme
   ed, 1996.  La reference utilisee par Benoit Meys. Introduction
   de la methode de Lanczos comme outil pour l'ingenieur donc approche
   tres pragmatique et tres instructive pour le passage aux
   applications.

   Isaacson & Keller, Analysis of Numerical Methods, Dover (edition
   originale 1966).  L'ouvrage general de reference en calcul
   numerique dans les annees 60.

   J. Stoer, R. Bulirsh, introduction to Numerical Analysis, Springer
   Verlag, 1979.  Un des meilleurs ouvrages generaux de reference en
   calcul numerique dans les annees 80. Entre Isaacson & Keller et
   Stoer & Bulirsh, il y a le Dahlquist et Bjork des annees 70 mais
   c'est un ouvrage beaucoup plus introductif.

   W.H. Press & al., Numerical Recipes, Cambridge University Press,
   ... Le best seller du calcul numerique des annees 90. Generation
   fast food oblige, c'est le fast programming. Indispensable en fait
   comme trousse de secours: un petit rappel theorique rapide ou une
   petite routine toute faite peuvent être des gestes qui
   sauvent...

   Et enfin, les Wilkinson: J. H. Wilkinson, Rounding Errors in
   Algebraic Processes, Dover Petit ouvrage sur l'analyse d'erreur
   comme son nom l'indique.

   J. H. Wilkinson, C. Reinsch, Linear Algebra, Springer Verlag, 1971.
   Un pre-Numerical Recipes plus pousse sur l'algebre lineaire et avec
   tous les algorithmes en Algol (Je vous parle d'un temps que les
   moins de vingt ans ne peuvent pas connaitre...).

   J. H. Wilkinson, Algebraic eigenvalue problem, Clarendon Press,
   1965.  Le livre sacre du calcul des valeurs propres... que je n'ai
   jamais eu en main. Il va falloir que je mette la main dessus...
*/


/* Quelques modifications envisagees dans le futur (par ordre
   approximatif de difficulte et probablement par ordre chronologique
   de realisation future...) :

   1) Normer les vecteurs propres (valeur absolue max d'un element =
   1) -> OK mais ne resout pas entierement le probleme de l'affichage
   dans le post.

   2) Examiner de plus pres et eventuellement valider ou ameliorer
   quelques details comme par exemple je verrais bien le test if
   (fabs(shift) > 1.e-10) en relatif plutot qu'en absolu. De toute
   facon, si on essaye d'imposer un shift si petit, il vaudrait mieux
   afficher un message d'avertissement!  CHANGER LES NOMS DE CERTAINES
   VARIABLES

   3) Faire fonctionner LinAlg correctement pour les complexes (au
   moins le produit scalaire!!). En gros le codage des matrices et des
   vecteurs complexes du systeme est

   | Re Im |   et  | Re |
   |-Im Re |       | Im |

   Les matrices rectangulaires orthogonales sont stockees dans une
   liste de vecteurs Lan (Changer le nom en Q ou V ?).  Ce qui doit
   tre fait est le passage a une matrice de Hessenberg complexe Hes ->
   HesR,HesI ... mais on ne peut pas utiliser le codage ci-dessus car
   on perdrait la structure de Hessenberg.

   4) Calculer le RESIDU associe a un couple : la theorie permet de
   calculer facilement ce resultat, voir plus loin -> OK utilise pour
   selectionner les valeurs propres qui ont converge.

   5) Ameliorer les valeurs propres et les vecteurs propres a
   posteriori (il y a une methode simple expliquee dans Numerical
   Recipes, je crois...) et eventuellemnt introduire un critere
   d'arrêt.

   6) Amelioration de l'algorithme: Preconditionner (il y a des trucs
   la dessus dans Saad, je crois).  Reorthogonaliser les colonnes de
   Qn -> OK mais n'apporte pas grand chose !  Faire des redemarrages
   ... a essayer, ce n'est pas un gros travail, par exemple prendre
   comme point de depart une combinaison lineaire (somme !)  des
   vecteurs (normes !) qui ont deja plus ou moins converges ! Hn
   incomplet etc. (cf. Golub & Van Loan, Chatelin) L'algorithme de
   Saad 'Arnoldi-Tchebyshev' semble un bon candidat !

   7) 'Fixer omega et chercher gamma' conduit a un probleme aux VP
   generalise du type: lambda^2 M1 v + lambda M2 v + M3 v = 0 On peut
   mettre ce probleme sous la forme d'un probleme generalise de taille
   'double' du type

   | M1 M2 | |v1| lambda +  | 0  M3 | |v1| = 0
   | 0  I  | |v2|           |-I  0  | |v2|

   Comme d'habitude, on n'a besoin que du produit Matrice Vecteur ce
   qui revient a travailler avec les 'demi-vecteurs' v1, v2 de v et
   les sous-matrices M1, M2, M3: on doit calculer le vecteur 'double':

   | -M1 v2 + M2 M3^-1 v1 | 
   | M3^-1 v1             | 

   Il sera surtout necessaire d'avoir acces aux sous-matrices M1, M2,
   M3.  On peut egalement envisager le probleme des courbes de
   dispersion: Trouver des paires de nombres (omega,gamma) telles
   qu'il existe un vecteur v verifiant: gamma^2 M1 v + gamma M2 v +
   omega^2 M3 v + M4 v = 0 Le jeu consiste a faire varier (pas trop
   vite) omega et calculer les nouveaux gammas en utilisant si
   possible l'information fournie par les resolutions precedentes ...
   
   8) Autres methodes(puissance inverse?)
   
   Question: et si on utilisait une librairie comme ARPACK et son
   interface objet en C++ ARPACK++?
   http://www.caam.rice.edu/software/ARPACK/
*/

#if !defined(HAVE_GSL)

#include "nrutil.h"

#else

#include <gsl/gsl_rng.h>

/* base-1 index: numerical recipes convention */
#define dvector(dummy, A) (double *)Malloc(sizeof(double) * ((A) + 1))
#define dmatrix(dummy, A, dummy2, B) newmatrix((A) + 1, (B) + 1)
#define free_dvector(A, dummy, dummy2) Free(A)
#define free_dmatrix(M, dummy, A, dummy2, dummy3) freematrix((M), (A))

double **newmatrix(int nrow, int ncol){ /* accessible as a[i][j] */
  int i;
  double **a;
 
  a = (double **)Malloc(sizeof(double *) * nrow);
  for (i = 0; i < nrow; i++)
    a[i] = (double *)Malloc(sizeof(double) * ncol);
  return a;
}

void freematrix(double **a, int nrow){
  int i;
  double **b;
  
  b = a;
  for (i = 0; i < nrow; i++) Free(*b++);
  Free(a);
}

double gsl_random(int isover){ /* uniform random numbers in range [0.0, 1.0) */
  double u;
  static const gsl_rng_type *T = NULL;
  static gsl_rng *r;
  
  if (T == NULL) { /* initialize */
    gsl_rng_env_setup();
    T = gsl_rng_default;
    r = gsl_rng_alloc(T);
  }
  else if (isover > 0) { /* finalize */
    gsl_rng_free(r);
    return 0.0;
  }
  u = gsl_rng_uniform(r);
  return u;
}

/* calc complex eigenvalues of Hessenberg form of real non-symmetrical
   matrix: GSL doesn't have it, so we use LAPACK's DHSEQR routine */

#if !defined(HAVE_LAPACK)

void hqr(double **hin, int nhess, double *wrout, double *wiout){
  Msg(ERROR, "Lanczos algorithm not available without LAPACK");
}

#else

#if defined(HAVE_UNDERSCORE)
#define dhseqr_ dhseqr
#endif

void dhseqr_(char *JOB, char *COMPZ, int *N, int *ILO, int *IHI, double *H, 
	     int *LDH, double WR[], double WI[], double Z[][], int *LDZ,
	     double *WORK, int *LWORK, int *IRET);

void hqr(double **hin, int nhess, double *wrout, double *wiout){
  int n, ilo, ihi, ldh, ldz, lwork, info, i, j, k;
  double *h, *wr, *wi, *work, dummy[1][1];
  char job[] = "E", compz[] = "N";
  
  n = nhess;
  ilo = 1;
  ihi = n;
  ldh = n;
  ldz = n;
  lwork = n;
  
  wr = (double *)Malloc(sizeof(double) * n);
  wi = (double *)Malloc(sizeof(double) * n);
  work = (double *)Malloc(sizeof(double) * n);
  
  h = (double *)Malloc(sizeof(double) * (n * n));
  
  /* C to F77 interface: Fortran uses "column-major ordering" in
     arrays, so transpose matrix and pack into h[] (or h[][]).  This
     may or may not work with other systems.  "cfortran.h" would be a
     better way */
  k = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      h[k++] = hin[j + 1][i + 1]; /* hin: base-1 index */
    }
  }
  
  dhseqr_(job, compz, &n, &ilo, &ihi, h, &ldh, wr, wi, dummy, &ldz, work, 
	  &lwork, &info);
  if (info != 0)
    Msg(ERROR, "Lanczos/lapack dhseqr error = %d", info);
  
  for (i = 0; i < n; i++) {
    wrout[i + 1] = wr[i]; /* base-1 */
    wiout[i + 1] = wi[i];
  }
}

#endif

#endif /* if !HAVE_GSL */

/* calcul des vecteurs propres d'une matrice de Hessenberg reelle
   (**T) de taille N dont on donne la valeur propre valp resultat en
   sortie dans *v */

void cal_vec_pr_T(double **T, int N, double valp, double *v){
  int      i,j,k;
  double **mat,norm=0.0;

  GetDP_Begin("cal_vec_pr_T");

  /* cette procedure devra etre reecrite pour une matrice de
     Hessenberg COMPLEXE */

  mat = dmatrix(1,N,1,N);
  
  for(i=1;i<=N;i++){
    for(j=1;j<=N;j++){
      if(i==j)
	mat[i][j]=T[i][j]-valp;
      else
	mat[i][j]=T[i][j];
    }
  }
  
  /* totalement instable si mat[][] est tres petit.  a
     changer. probleme a creuser d'une facon generale, considerer le
     raffinement des valeurs et vecteurs propres */

  /* resolution de (T - valp I) v = 0 systeme indetermine car v n'est
     defini qu'a une constante multiplicative pres on fixe donc v[N] a
     1 !!! pas toujours possible !!!!!  et on resout par substitution
     arriere grace a la forme Hessenberg */
   
  v[N]=1.0;
  for(i=N;i>1;i--){
    v[i-1]=0.0;
    for(j=N;j>=i;j--) v[i-1]-=mat[i][j]*v[j];
    if(mat[i][i-1] != 0.0)
      v[i-1]/=mat[i][i-1];
    else {
      Msg(BIGINFO, " --- INVARIANT SUBSPACE FOUND ! --- ");
      /* verifier que la manoeuvre de sortie est valide !!! */
      for(k=i;k<=N;k++)	v[k]=0.0;
      v[i-1]=1.0;
    }
  }

  /* fixer la norme L2 de v a 1 */
  for(i=1;i<=N;i++) norm+=v[i]*v[i];
  norm = sqrt(norm);
  for(i=1;i<=N;i++) v[i]/=norm;

  GetDP_End ;
}

/* Algorithme de Lanczos (IL S'AGIT EN FAIT d' A R N O L D I POUR LES
   SYSTEMES NON SYMETRIQUES)

   sont transmis :
   - le pointeur d'un problemes avec ses matrices DofData_P
   - le nombre d'iterations a effectuer LanSize
   - une liste donnant les indexes des vecteurs propres a sauvegarder
   - le decallage shift
*/

void Lanczos (struct DofData * DofData_P, int LanSize, List_T *LanSave, double shift){
  gVector  *Lan, *b, *x ;
  gMatrix  *K, *M ;
  int      i, j, k, ii, jj, NbrDof, Restart, ivmax, newsol ; 
  double   dum, dum1, dum2;
  double   **Hes, **IMatrix, *diag, *wr, *wi, *err ;
#if !defined(HAVE_GSL)
  long     mun = -1 ;
#endif
  struct Solution Solution_S ;

  /* declaration pour les parametres de eigen.par */
  
  struct eigenpro {
    double prec;
    int    size; /* remplacer LanSize par eigenpar.size */
    int    reortho;
  } eigenpar ;

  char EigenFileName[MAX_FILE_NAME_LENGTH];
  FILE * eigenf;

  GetDP_Begin("Lanczos");

  /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

  Msg(BIGINFO, "Lanczos - December 2001 - beta 0.2 A. Nicolet - Marseille ");

  if(!DofData_P->Flag_Init[1] || !DofData_P->Flag_Init[3])
    Msg(ERROR, "No System available for Lanczos: check 'DtDt' and 'GenerateSeparate'") ;

  /* lecture des parametres dans le fichier 'eigen.par' */
  eigenpar.prec = 1.e-4; 
  eigenpar.reortho = 0;
  eigenpar.size = LanSize; /* FIXME: dans le .pro il faudrait changer
			      la syntaxe. Enlever LanSize et remplacer
			      le mot clef Lanczos par Eigenproblem */
  strcpy(EigenFileName, Name_Path);
  strcat(EigenFileName, "eigen.par");
  Msg(INFO, "Loading eigenproblem parameter file '%s'", EigenFileName);
  eigenf = fopen(EigenFileName, "r+t");
  if (eigenf) { /* le fichier existe ! */
    fscanf(eigenf, "%lg ", &eigenpar.prec); 
    Msg(INFO, "eigenpar.prec = %g", eigenpar.prec);
    fscanf(eigenf, "%d ", &eigenpar.reortho);
    Msg(INFO, "eigenpar.reortho = %d", eigenpar.reortho);
    fscanf(eigenf, "%d ", &eigenpar.size);
    Msg(INFO, "eigenpar.size = %d", eigenpar.size);
    /* tester la fin du fichier avec un entier standard */
    fclose(eigenf);
  }

  /* reecriture des parametres */
  eigenf=fopen(EigenFileName, "w+t");
  fprintf(eigenf, "%g \n", eigenpar.prec);
  fprintf(eigenf, "%d \n", eigenpar.reortho);
  fprintf(eigenf, "%d \n", eigenpar.size);
  fprintf(eigenf,
	  "/*\n"
	  "   The numbers above are the parameters for the numerical\n"
	  "   eigenvalue problem:\n"
	  "\n"
	  "   prec = aimed accuracy for eigenvectors (default=1.e-4)\n"
	  "   reortho = reorthogonalisation of Krylov basis: yes=1, no=0 (default=0) \n"
	  "   size = number of iterations and max size of the Krylov basis\n"
	  "\n"
	  "   The shift is given in the .pro file because its choice relies\n"
	  "   on physical considerations...\n"
	  "*/");
  fclose(eigenf);

  /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

  NbrDof = DofData_P->NbrDof ; /* taille du systeme */

  /* reservation de LanSize+1 vecteurs de taille NbrDof reperes par
     les adresses &Lan[i] dans la suite &Lan[i] sera note q_i dans les
     commentaires (colonnes d'une matrice rectangulaire
     orthogonale) */
  Lan = (gVector*)Malloc((LanSize+1)*sizeof(gVector)) ;
  for (i=0 ; i<LanSize+1 ; i++) 
    LinAlg_CreateVector(&Lan[i], &DofData_P->Solver, NbrDof,
			DofData_P->NbrPart, DofData_P->Part);

  /* resolution du PVP generalise K v = valp M v */
  /* identifier les matrices avec des matrices du probleme en cours */
  K = &DofData_P->M1 ; /* matrice des termes en DtDt */
  /* L = &DofData_P->M2 ; */ /* matrice des termes en Dt pour le futur */
  M = &DofData_P->M3 ; /* matrice des autres termes  */
  b = &DofData_P->b  ; 
  x = &DofData_P->CurrentSolution->x ;

  /* Si on veut traiter le probleme 'omega fixe' en propagation, les
     valeurs propres sont dans ce cas associees a la constante de
     propagation et donc a la derivation en z! La notation Dt est donc
     mal choisie dans ce cas ... */
  
  /* Cf. egalement remarque sur les courbes de dispersion! */
  
  /* On est ici dans un cas tres particulier ou tout est complexe sauf
     la matrice de Hessenberg et les valeurs propres. On fait Arnoldi
     car on construit une matrice de Hessenberg mais c'est en fait une
     matrice tridiagonale (-> beaucoup de calcul pour rien !  mais a
     ne ralenti pas trop le calcul car ici c'est le NOMBRE DE
     RESOLUTIONS DU SYSTEME pour les iterations inverses qui est
     couteux). Par contre on ne considere que la partie reelle des
     produits scalaires de vecteurs et on construit une matrice de
     Hessenberg reelle -> Ce n'est pas assez general pour être du
     vrai Arnoldi sur une matrice quelconque !!!  */
  
  /* Construire une Hessenberg complexe !! */
  
  /* declaration des espaces de travail */
  diag    = dvector(1, LanSize+1);
  wr      = dvector(1, LanSize+1);
  wi      = dvector(1, LanSize+1);
  err     = dvector(1, LanSize+1);
  IMatrix = dmatrix(1, LanSize+1, 1, LanSize+1);
  Hes     = dmatrix(1, LanSize+1, 1, LanSize+1);

  /* initial random vector b=q_o pas optimal pour la reproductibilite
     des resultats ! ! !  pourquoi ne pas essayer des 1 partout ?
     Arnoldi-Tchebychev consiste a ameliorer le vecteur de depart
     d'Arnoldi a l'aide de Tchebychev */
#if defined(HAVE_GSL)
  for (i = 0; i < NbrDof; i++)
    LinAlg_SetDoubleInVector(gsl_random(0), &Lan[0], i);
  gsl_random(1); /* finish it */
#else
  for (i=0 ; i<NbrDof ; i++) 
    LinAlg_SetDoubleInVector(ran3(&mun), &Lan[0], i) ;
#endif

  /* shifting: K = K - shift * M */
  /* DANGER DANGER depend de la mise a l'echelle de K et M */
  if (fabs(shift) > 1.e-10)
    LinAlg_AddMatrixProdMatrixDouble(K, M, -shift, K) ; 

  /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

  /* iterations d' A R N O L D I */

  /* Soit le probleme au vp : A v = lambda v avec A matrice m * m et
     soit un vecteur arbitraire b (choix ????)  Kn la matrice m*n de
     Krylov donnee par <b, Ab, A^2 b, ... A^(n-1)b> (espace de Krylov
     K_n(A,b) = espace genere par la combinaison lineaire de ces
     vecteurs = lin(b, Ab, A^2 b, ... A^(n-1)b)) A l'etape n des
     iterations d'Arnoldi, la matrice m*n orthogonale Qn est le
     facteur de la decomposition QR de Kn = Qn Rn (m*n = (m*n) *
     (n*n)) La matrice de Hessenberg Hn correspond a la projection Hn
     = Qn^* A Qn (n*n = (n*m) * (m*m) * (m*n) ) (^* conjugue hermitien
     ou adjoint - l'algorithme est valable pour les matrices COMPLEXES
     NON HERMITIENNES ) Les iterations successives sont reliees par A
     Qn = Qn+1 H'n ou H'n est la matrice (n+1)*n obtenue en completant
     Hn avec l'element h_(n+1,n).

     La structure des iterations est (A est une matrice, b,v des
     vecteurs colonnes et les q des vecteurs colonnes de Qn, les h
     sont les coefficients de Hn)

     b arbitraire, q1 = b/norme(b)
     POUR n=1,2,3,...
          |v = A q_n
          |POUR j = 1,n 
          |     |h_(j,n) = q_j^* v
          |     |v = v - h_(j,n) q_j
          |h_(n+1,n)=norme(v)               
          |q_(n+1) = v/h_(n+1,n)     

    (Que se passe-t'il si h_(n+1,n)=0 ? -> on a trouve un sous espace
    invariant = un 'sous-espace propre')

    Les valeurs propres sont approximees par les valeurs propres de Hn
    dans le sens suivant : Une matrice A verifie son polynome
    caracteristique P(z) soit P(A) = 0 soit norme(P(A) b) = 0 pour
    tout vecteur b Soit pn(z) le polynome caracteristique de Hn
    (polynome d'Arnoldi) C'est le polynome de degre n qui minimise
    norme(p(A) b) pour tout polynome p(z) de degre n.  Remarque : le
    polynome d'Arnoldi ideal ou polynome de Tchebychev de A est le
    polynome p_Tcheb(z) de degre n qui minimise norme(p(A)) (norme
    matricielle) Ce polynome ne depend pas d'un vecteur b arbitraire
    mais il n'existe pas d'algorithme efficace pour le calculer

    Au cours des iterations on construit Hn et Qn : Hn = Qn* A Qn avec
    Qn* Qn = I et on reecrit A Qn = Qn+1 H'n comme A Qn = Qn Hn +
    h_(n+1,n) q_n+1 e^*_n (h_n+1,n prochain coefficient de Hn+1, q_n+1
    prochaine colonne de Qn+1, e_n base canonique de C^n)

    Si v est vecteur propre de Hn alors Hn v = lambda v.  On choisit
    Norme(v)=1.  v est un vecteur de Ritz et lambda une valeur de
    Ritz.  Ils constituent l'approximation au sens de Galerkine dans
    l'espace de Krylov K_n(A,b) du probleme aux valeurs propres : <w,
    A v - lambda v> = 0 pour tout w dans K_n(A,b)

    Les coefficients de h sont les coefficients du developpement de A
    dans la base orthogonale de K_n(A,b) constituees des colonnes de
    Qn
     
    Donc Qn* A Qn v = lambda v Malheureusement Qn n'est pas carree et
    ce n'est pas une relation de similitude.  Neanmoins si on poursuit
    le processus jusque n=m (si possible) Qm diagonalise A et on a une
    relation de similitude.  Dans le cas d'une relation de similitude
    si v est vecteur propre de Q* A Q alors Q* A Q v = lambda v et
    comme Q Q* = I on a A Q v = lambda Q v et Q v est donc vecteur
    propre de A.  Ici on a Qn* Qn = I(n*n) mais pas Qn Qn* = I(m*m) Qn
    Qn* est le projecteur orthogonal de l'espace C^m (dimension m) (=
    vecteurs quelconques de m complexes) sur l'espace de Krylov
    K_n(A,b) (dimension n).  On estime le vecteur propre de A par un
    'relevement' de v a l'aide de Qn: (estimation du vecteur propre de
    A) = Qn v.  La multiplication par Qn est donc un peu l'equivalent
    de l'interpolation.

    On obtient une approximation du residu de la facon suivante On
    pose x = Qn v Norme(A x - lambda x)= Norme(A Qn v - lambda Qn v) =
    Norme(A Qn v - Qn Hn v). Norme((A Qn - Qn Hn) v) = Norme(h_(n+1,n)
    q_n+1 e^*_n v) =h_(n+1,n) v(n) car Norme(q_n+1)=1 =dernier coef de
    Hessenberg x derniere composante du vecteur de Ritz qu'il suffit
    de comparer a lambda pour avoir une estimation de l'erreur
    relative !

    Probleme generalise : K v = valp M v -> utiliser le produit
    scalaire <M x, y> ou M joue le role de metrique.  Arnoldi/Lanczos
    donne les plus grandes valeurs propres -> utiliser la matrice
    inverse K*-1 -> on aboutit a une resolution de systeme.

    A venir, les PVP du second ordre du type (M1 valp^2 + M2 valp +
    M3) v = 0

    Il faudra egalement voir si on ne peut pas ameliorer le processus
    en utilisant un PRECONDITIONNEMENT pour les problemes aux VP
    (different de ceux pour la resolution des systemes) Voir Y. Saad,
    Numerical Methods for Large Eigenvalue Problems disponible sur le
    Web un redemarrage implicite, voir doc ARPACK
      
    NOTATION du PROGRAMME
    Dans ce qui suit K et M portent ce nom
    Hes contient Hn ( Hes[i][j]=Hn_(i,j) )
    &Lan[i] est l'adresse de la colonne q_i
    Variable de boucle exterieure i a la place de n
                       interieure j a la place de i
    L'indice i commence a zero. */


  /* traitement special des premieres iterations */
  /* ------------------------------------------- */

  /* etape 0 */

  /* b = M q_o */
  LinAlg_ProdMatrixVector(M, &Lan[0], b);
  /* dum = b^T q_o  (^T = transposition) */
  LinAlg_ProdVectorVector(b, &Lan[0], &dum);
  /* Lan[0] is built: q_o = q_o/sqrt(dum) */
  LinAlg_ProdVectorDouble(&Lan[0], 1./sqrt(dum), &Lan[0]);

  Msg(BIGINFO, "Lanczos iteration 1/%d", LanSize);

  /* etape 1 */

  /* b = M * Lan[0]: b = M q_o */
  LinAlg_ProdMatrixVector(M, &Lan[0], b); 
  /* Lan[1] = K^-1 * b: q_1 = K^-1 b */  
  LinAlg_Solve(K, b, &DofData_P->Solver, &Lan[1]);

  /* pas d'inversion explicite, on utilise le solver bien sur ! -> on
     a calcule K^-1 M q_o */  

  /* alpha1 = Lan[0]^T * M * Lan[1]: dum1 = b^T q_1*/
  LinAlg_ProdVectorVector(b, &Lan[1], &dum1); 

  /* orthogonalization: Lan[1] -= alpha1 * Lan[0]: q_1 = q_1 - dum1 q_o */
  LinAlg_AddVectorProdVectorDouble(&Lan[1], &Lan[0], -dum1, &Lan[1]); 

  /* b = M * Lan[1] in prevision: b = M q_1 */
  LinAlg_ProdMatrixVector(M, &Lan[1], b); 
  /* gama2 = beta1 = sqrt(Lan[1]^T * M * Lan[1]): dum2 = b^T q_1 */
  LinAlg_ProdVectorVector(b, &Lan[1], &dum2);

  /* normation in the metric M: Lan[1] = q_1  is built */  
  dum2 = sqrt(dum2); 
  LinAlg_ProdVectorDouble(&Lan[1], 1./dum2, &Lan[1]); 
  /* b = M * Lan[1] in prevision of next step */
  LinAlg_ProdVectorDouble(b, 1./dum2, b);

  /* debut de construction de la matrice de Hessenberg pour
     l'approximation des vp */
  Hes[1][1] = dum1;
  Hes[2][1] = dum2;

  /* print_lanczos_to_file (1, NbrDof, Hes, Lan, shift, Name); */

  /* Debut de la boucle principale des iterations d' A R N O L D I */
  /* ------------------------------------------------------------- */

  Restart = 2 ; /* pour 'Arnoldi with restarting', cf. Golub & Van Loan */
  for (i=Restart ; i<=LanSize ; i++){
    
    Msg(BIGINFO, "Lanczos iteration %d/%d", i, LanSize);

    /* q_1 = K^-1 b  avec b deja multiplie par M */
    LinAlg_Solve(K, b, &DofData_P->Solver, &Lan[i]);
    
    for (j=1 ; j<=i ; j++){
      /* x = M q_(j-1) */
      LinAlg_ProdMatrixVector(M, &Lan[j-1], x);
      /* h_(j,i) = x^T q_i */
      LinAlg_ProdVectorVector(x, &Lan[i], &Hes[j][i]);
      /* orthogonalization: q_i = q_i - h_(j,i) q_(j-1) */
      LinAlg_AddVectorProdVectorDouble(&Lan[i], &Lan[j-1], -Hes[j][i], &Lan[i]);
    }

    /* OPTIONNAL PART : re-orthogonalization DGKS */
    if (eigenpar.reortho == 1) {
      Msg(BIGINFO, " *** reorthogonalization *** ");
      for (j=1 ; j<=i ; j++) {
	LinAlg_ProdMatrixVector(M, &Lan[j-1], x);
	LinAlg_ProdVectorVector(x, &Lan[i], &dum);
	diag[j]=dum;
      }
      /* two separate loops so that &Lan[i] is not modified in the first one */
      for (j=1 ; j<=i ; j++) {
	/* reorthogonalization */ 
	LinAlg_AddVectorProdVectorDouble(&Lan[i], &Lan[j-1], -diag[j], &Lan[i]);
	Hes[j][i]=Hes[j][i]+diag[j];
	Msg(INFO, " hes %d = %g corrected by %g ",j,Hes[j][i],diag[j]);
      }
    }

    /* x = M q_i */
    LinAlg_ProdMatrixVector(M, &Lan[i], x);
    /* dum  = x^T q_i */
    LinAlg_ProdVectorVector(x, &Lan[i], &dum);
    Hes[i+1][i] = sqrt(dum); 
    /* q_i = q_i / h_(j,i)*/ 
    LinAlg_ProdVectorDouble(&Lan[i], 1./Hes[i+1][i], &Lan[i]);
    /* b = M * Lan[i] in prevision of next step */
    LinAlg_ProdMatrixVector(M, &Lan[i], b);
    
    /* eigen value computation of the current Hes matrix (On complete
       la matrice de Hessenberg par des zeros) */
    for(ii=3 ; ii<=i ; ii++)
      for(jj=1 ; jj<=ii-2 ; jj++)
	Hes[ii][jj] = 0.0 ;
    
    for(ii=1 ; ii<=i ; ii++)
      for(jj=1 ; jj<=i ; jj++)
	IMatrix[ii][jj] = Hes[ii][jj] ;

    /* cette partie est pour info, elle n'est necessaire que pour
       afficher les VP on pourrait imaginer de ne pas la calculer
       chaque fois! */
    hqr(IMatrix, i, wr, wi) ;

    /* Algorithme QR pour une matrice de Hessenberg (from Numerical
       Recipes) Pour une MATRICE REELLE ???????????????????  Ecrire
       l'algorithme correspondant en complexe : decomposition LR cf
       version Algol dans Wilkinson */

#if 0 
    print_valpr_to_file(i,wr,wi,shift,Name);
    print_lanczos_to_file (i,NbrDof,Hes,Lan,shift,Name);

    Msg(INFO, "Lanczos eigenvalue of the transformed problem ");
    for(k=1 ; k<=i ; k++)
      Msg(INFO, "Lanczos eigenvalue %d = %g +I %g",k, 
	  wr[k], wi[k]);

    Msg(INFO, "Lanczos eigenvalue of the original problem ");
    for(k=1 ; k<=i ; k++)
      Msg(INFO, "Lanczos eigenvalue %d = %g (%g) %g",k, 
	  shift+1.0/wr[k], sqrt(shift+1.0/wr[k])/TWO_PI, wi[k]);
#endif

    /* ATTENTION shift+1.0/wr[k] ne donne la VP reelle que si wr[i]
       est NEGLIGEABLE. Quid des VP complexes ? */

    /* store the real eigen values */
    for (k=1 ; k<=i ; k++)
      wi[k] = shift+1.0/wr[k];

    /* estimation d'erreur et test de convergence */
    Msg(BIGINFO, "------------------ hessenberg coeff %d = %g  ",i,Hes[i+1][i]);
    if (Hes[i+1][i] < 1e-20) 
      Msg(BIGINFO, " --- INVARIANT SUBSPACE FOUND ! --- ");
    
    /* search the largest eigenvalue */
    dum = 0. ; ivmax =1 ;
    for (k=1 ; k<=i ; k++)
      if (wr[k] > dum) {ivmax = k; dum = wr[k];};
    
    if (wr[ivmax] == 0.) Msg(BIGINFO," OOOPS !! - no positive eigen value ? - ");
    
    Msg(INFO, "Max eigenvalue = %g on %d ", dum, ivmax);  

    /* compute the corresponding eigenvector */
    cal_vec_pr_T(Hes, i, wr[ivmax], diag);
    Msg(INFO, "Last eigenvector component = %g ", diag[i]);  
    Msg(BIGINFO, " ******** Residual estimate = %g ",
	Hes[i+1][i] * diag[i] / wr[ivmax] );
  }

  /* fin des iterations d' A R N O L D I */
  /* ----------------------------------- */

  Msg(INFO, "Final eigenvalue/eigenvector Computation");

  /* eigen value computation of the final Hes matrix (Calcul final des
     valeurs propres = Euh ? Deja fait en sortie de boucle principale,
     non ??) */

  for(ii=3 ; ii<=LanSize ; ii++)
    for(jj=1 ; jj<=ii-2 ; jj++)
      Hes[ii][jj] = 0.0 ;

  for(ii=1 ; ii<=LanSize ; ii++)
    for(jj=1 ; jj<=LanSize ; jj++)
      IMatrix[ii][jj] = Hes[ii][jj] ;

  hqr(IMatrix, LanSize, wr, wi);

  /* store the real eigen values (est-ce une bonne idee de stocker les
     VP reelles reconstituees dans la partie complexe ???? non!) */
  for (k=1 ; k<=LanSize ; k++)
    wi[k] = shift+1./wr[k]; 

  /* eigen vector computation of the final Hes matrix (Pour chacune
     des valeurs propres de Hn, calcul du vecteur propre a l'aide de
     la routine 'cal_vec_pr_T') */
  for(i=1 ; i<=LanSize ; i++){
    /* diag ne sert qu'ici, son nom est loufoque ! */
    cal_vec_pr_T(Hes, LanSize, wr[i], diag);
    
    /* estimation d'erreur et test de convergence */
    /* Msg(BIGINFO, "*********** estim %d = %g", i, 
       Hes[LanSize+1][LanSize]*diag[LanSize]); */
    if (wr[i]>1e-20) 
      err[i] = Hes[LanSize+1][LanSize]*diag[LanSize]/wr[i];
    else
      err[i] = 1.e99; /* a changer! */

    /* copy the current eigen vector in IMatrix */
    for(j=1 ; j<=LanSize ; j++)
      IMatrix[j][i]=diag[j];
  }
  
  /* reconstruction of the global eigen vectors */
  
  newsol = 0;

  for(i=0 ; i<List_Nbr(LanSave) ; i++){
    List_Read(LanSave, i, &ii) ;
    
    if(ii<1 || ii>LanSize){
      Msg(WARNING, "Eigenvalue index out of range") ;
      break ;
    }
    
    /* test de validite de la valeur propre */
    Msg(BIGINFO, "Eigenvalue %d = %.16g (f = %.16g)",
	ii, wi[ii], sqrt(wi[ii])/TWO_PI);

    /* if error smaller than required precision and non pathological
       eigenvalue ! */
    if ((err[ii] < eigenpar.prec ) && (wr[ii]>0.)) { 
      Msg(BIGINFO, "GOOD -> Eigenvalue %d = %g with error %g ",
	  ii, wr[ii], err[ii]);
      
      if (newsol) {
	/* create new solution */
	LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, NbrDof,
			    DofData_P->NbrPart, DofData_P->Part);
	List_Add(DofData_P->Solutions, &Solution_S) ;
	DofData_P->CurrentSolution = (struct Solution*)
	  List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
      } 
      newsol = 1;

      /* Time = partie reelle de la vp ? recuperation possible dans le
         Post ? J'ai verifie dans l'affichage de Gmsh et a semble bien
         tre le cas */
      DofData_P->CurrentSolution->Time = wi[ii] ;
      DofData_P->CurrentSolution->TimeStep = ii ;
      DofData_P->CurrentSolution->TimeFunctionValues = NULL ;
      DofData_P->CurrentSolution->SolutionExist = 1 ;
      LinAlg_ZeroVector(&DofData_P->CurrentSolution->x) ;

      /* boucle de taille m = taille des matrices A,K,M du probleme */
      /* calcul de la composant k du vecteur ii */
      for(k=0; k<NbrDof; k++){
	
	/* boucle de taille n = le nombre de vecteurs propres a estimer */
	/* produit vecteur^T vecteur mais PAS avec un vecteur q */
	/* on balaye Qn dans l'autre sens ! */
	for (j=1 ; j<=LanSize ; j++){
	  /* dum = element k de q_(j-1) */	  
	  LinAlg_GetDoubleInVector(&dum, &Lan[j-1], k) ;

	  /* x_k = x_k + q_(k,j-1)* v_j */
	  /* on a multiplie le 'ii ieme' vecteur propre de Hn par Qn */  
	  /* v de taille n -> Qn v de taille (m*n) * n = m     */
	  LinAlg_AddDoubleInVector(IMatrix[j][ii]*dum, 
				   &DofData_P->CurrentSolution->x, k) ;
	}
      }
      
      /* normation L infini : abs plus grand element mis a un */
      /* Msg(BIGINFO, "normation du vecteur propre %d  ",ii); */
      /* determination du maximum */
      dum = 0.; dum1 = 0.;
      for(k=0; k<NbrDof; k++){
	LinAlg_GetDoubleInVector(&dum,&DofData_P->CurrentSolution->x, k);
	if (fabs(dum)>dum1)
	  dum1 = dum;
      }
      /* division par le max */
      if (dum1 > 1.e-16) 
	LinAlg_ProdVectorDouble(&DofData_P->CurrentSolution->x,1./dum1,
				&DofData_P->CurrentSolution->x);
      
      /* estimation d'erreur et test de convergence */
      /* Msg(BIGINFO, "------------------ estim %d = %g  ",ii,Hes[ii+1][ii]); */
      
    } /* fin du test de validite */
    else{
      Msg(BIGINFO,"BAD! -> Eigenvalue %d = %g with error %g ", ii, wr[ii], err[ii]); 
    }
    
  }    
  
  /* c'est fini */
  
  /* tester newsol pour voir si au moins une solution a ete trouvee ! */
  
  /* desallocation */
  
  for (i=0 ; i<LanSize ; i++) LinAlg_DestroyVector(&Lan[i]);
  Free(Lan) ;
  
  free_dvector(diag, 1, LanSize);
  free_dvector(wr, 1, LanSize);
  free_dvector(wi, 1, LanSize);
  free_dvector(err, 1, LanSize);
  free_dmatrix(IMatrix, 1, LanSize, 1, LanSize);
  free_dmatrix(Hes, 1, LanSize, 1, LanSize);

  GetDP_End ;
}
