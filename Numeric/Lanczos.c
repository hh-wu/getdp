#define RCSID "$Id: Lanczos.c,v 1.13 2003-01-24 23:00:31 geuzaine Exp $"

/* Version commentée par A. Nicolet de Lanczos.c le 2001/11/29 */

/* Bibliographie

   Numerical Linear Algebra, Trefethen & Bau, SIAM, Philadelphia,
   1997.  Très récent et très clair, excellent ouvrage introductif sur
   l'algèbre linéaire numérique moderne !
   
   Y. Saad, Numerical Methods for Large Eigenvalue Problems,
   Manchester University Press Avantages : gratuit sur le Web
   (http://www.users.cs.umn.edu/~saad/books.html et le bouquin sur la
   résolution des systèmes s'y trouve aussi maintenant !), assez
   récent (1992), très ciblé sur le problème comme son titre
   l'indique, très clair avec peu de prérequis (le premier chapitre
   vous remémore tout ce que vous devez savoir sur les matrices pour
   commencer), bon niveau théorique sans abstraction stratosphérique
   et décrit précisément les ALGORITHMES (dont par exemple la méthode
   d'Arnoldi-Tchebychev conçu par Saad lui-même).
   
   Golub & Van Loan, Matrix Computations, Johns Hopkins University
   Press, 3rd ed, 1996.  La troisième édition de la bible du calcul
   matriciel appliqué !

   Valeurs propres des matrices, Françoise Chatelin, Masson, Paris,
   1988.  Bien ciblé et assez théorique, plutôt court, un bon texte
   complémentaire pour se faire un synthèse.

   Analyse Numérique, sous la direction de Jacques Baranger, Hermann,
   Paris, 1991, Chapitre 7 par Françoise Chatelin. Bon chapitre
   synthétique par l'auteur de l'ouvrage precedent.

   M. Géradin, D. Rixen, Théorie des Vibrations, Masson, Paris, 2ème
   ed, 1996.  La référence utilisée par Benoît Meys. Introduction de
   la méthode de Lanczos comme outil pour l'ingénieur donc approche
   très pragmatique et très instructive pour le passage aux
   applications.

   Isaacson & Keller, Analysis of Numerical Methods, Dover (édition
   originale 1966).  L'ouvrage général de référence en calcul
   numérique dans les années 60.

   J. Stoer, R. Bulirsh, introduction to Numerical Analysis, Springer
   Verlag, 1979.  Un des meilleurs ouvrages généraux de référence en
   calcul numérique dans les années 80. Entre Isaacson & Keller et
   Stoer & Bulirsh, il y a le Dahlquist et Bjork des années 70 mais
   c'est un ouvrage beaucoup plus introductif.

   W.H. Press & al., Numerical Recipes, Cambridge University Press,
   … Le best seller du calcul numérique des années 90. Génération
   fast food oblige, c'est le fast programming. Indispensable en fait
   comme trousse de secours : un petit rappel théorique rapide ou une
   petite routine toute faite peuvent être des gestes qui sauvent …

   Et enfin, les Wilkinson : J. H. Wilkinson, Rounding Errors in
   Algebraic Processes, Dover Petit ouvrage sur l'analyse d'erreur
   comme son nom l'indique.

   J. H. Wilkinson, C. Reinsch, Linear Algebra, Springer Verlag, 1971.
   Un pré-Numerical Recipes plus poussé sur l'algèbre linéaire et avec
   tous les algorithmes en Algol (Je vous parle d'un temps que les
   moins de vingt ans ne peuvent pas connaître … ).

   J. H. Wilkinson, Algebraic eigenvalue problem, Clarendon Press,
   1965.  Le livre sacré du calcul des valeurs propres … que je
   n'ai jamais eu en main. Il va falloir que je mette la main dessus
   …

*/


/* Quelques modifications envisagées dans le futur (par ordre
   approximatif de difficulté et probablement par ordre chronologique de
   réalisation future … ) :

   1) Normer les vecteurs propres (valeur absolue max d'un élément = 1
   ) -> OK mais ne resout pas entierement le probleme de l'affichage
   dans le post.

   2) Examiner de plus près et éventuellement valider ou améliorer
   quelques détails comme par exemple je verrais bien le test if
   (fabs(shift) > 1.e-10) en relatif plutôt qu'en absolu. De toute
   façon, si on essaye d'imposer un shift si petit, il vaudrait mieux
   afficher un message d'avertissement !  CHANGER LES NOMS DE
   CERTAINES VARIABLES

   3) Faire fonctionner LinAlg correctement pour les complexes (au
   moins le produit scalaire ! !). En gros le codage des matrices et
   des vecteurs complexes du systeme est

   | Re Im |   et  | Re |
   |-Im Re |       | Im |

   Les matrices rectangulaires orthogonales sont stockees dans une
   liste de vecteurs Lan (Changer le nom en Q ou V ?).  Ce qui doit
   être fait est le passage a une matrice de Hessenberg complexe Hes
   -> HesR,HesI ... mais on ne peut pas utiliser le codage ci-dessus
   car on perdrait la structure de Hessenberg.

   4) Calculer le RESIDU associé à un couple : la theorie permet de
   calculer facilement ce résultat, voir plus loin -> OK utilisé pour
   selectionner les valeurs propres qui ont convergé.

   5) Améliorer les valeurs propres et les vecteurs propres a
   posteriori (il y a une méthode simple expliquée dans Numerical
   Recipes, je crois …) et éventuellemnt introduire un critère
   d'arrêt.

   6) Amélioration de l'algorithme : Préconditionner (il y a des trucs
   la dessus dans Saad, je crois).  Réorthogonaliser les colonnes de
   Qn -> OK mais n'apporte pas grand chose !  Faire des redémarrages
   ... a essayer, ce n'est pas un gros travail, par exemple prendre
   comme point de départ une combinaison linéaire (somme !)  des
   vecteurs (normés !) qui ont déjà plus ou moins convergés !  Hn
   incomplet etc. (cf. Golub & Van Loan, Chatelin) L'algorithme de
   Saad 'Arnoldi-Tchebyshev' semble un bon candidat ! !

   7)'Fixer omega et chercher gamma' conduit à un problème aux VP généralisé 
   du type : lambda^2 M1 v + lambda M2 v + M3 v = 0 
   On peut mettre ce problème sous la forme d'un problème généralisé de taille 
   'double' du type
   | M1 M2 | |v1| lambda +  | 0  M3 | |v1| = 0
   | 0  I  | |v2|           |-I  0  | |v2|
   Comme d'habitude, on n'a besoin que du produit Matrice Vecteur ce qui 
   revient à travailler avec les 'demi-vecteurs' v1, v2 de v et les 
   sous-matrices M1, M2, M3 : on doit calculer le vecteur 'double' :
   | -M1 v2 + M2 M3^-1 v1 | 
   | M3^-1 v1             | 
   Il sera surtout nécessaire d'avoir accès aux sous-matrices M1, M2, M3.
   On peut également envisager le problème des courbes de dispersion :
   Trouver des paires de nombres (omega,gamma) telles qu'il existe un 
   vecteur v vérifiant : gamma^2 M1 v + gamma M2 v + omega^2 M3 v + M4 v = 0
   Le jeu consiste à faire varier (pas trop vite) omega et calculer les 
   nouveaux gammas en utilisant si possible l'information fournie par les 
   résolutions précédentes …
   
   8) Autres méthodes (puissance inverse ?)
   
   Question : et si on utilisait une librairie comme ARPACK et son
   interface objet en C++ ARPACK++ ?
   http://www.caam.rice.edu/software/ARPACK/
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "GetDP.h"
#include "DofData.h"
#include "Data_Numeric.h"
#include "CurrentData.h"
#include "nrutil.h"

/* 
   calcul des vecteurs propres d'une matrice de Hessenberg réelle
   (**T) de taille N dont on donne la valeur propre valp résultat en
   sortie dans *v 
*/

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
     changer. problème à creuser d'une façon générale, considérer le
     raffinement des valeurs et vecteurs propres */

  /* résolution de (T - valp I) v = 0 système indéterminé car v n'est
     défini qu'à une constante multiplicative près on fixe donc v[N] à
     1 !!! pas toujours possible !!!!!  et on résout par substitution
     arrière grâce à la forme Hessenberg */
   
  v[N]=1.0;
  for(i=N;i>1;i--){
    v[i-1]=0.0;
    for(j=N;j>=i;j--) v[i-1]-=mat[i][j]*v[j];
    if(mat[i][i-1] != 0.0)
      v[i-1]/=mat[i][i-1];
    else {
      Msg(BIGINFO, " --- INVARIANT SUBSPACE FOUND ! --- ");
      /* vérifier que la manoeuvre de sortie est valide !!! */
      for(k=i;k<=N;k++)	v[k]=0.0;
      v[i-1]=1.0;
    }
  }

  /* fixer la norme L2 de v à 1 */
  for(i=1;i<=N;i++) norm+=v[i]*v[i];
  norm = sqrt(norm);
  for(i=1;i<=N;i++) v[i]/=norm;

  GetDP_End ;
}



/* 
   Algorithme de Lanczos (IL S'AGIT EN FAIT d' A R N O L D I POUR LES
   SYSTEMES NON SYMETRIQUES)
   sont transmis :
   le pointeur d'un problèmes avec ses matrices DofData_P
   le nombre d'itérations à effectuer LanSize
   *LanSave structure de liste pour le sauvetage des vecteurs propres (voir DataStr/List.c)
   le décallage shift
*/

void Lanczos (struct DofData * DofData_P, int LanSize, List_T *LanSave, double shift){
  gVector  *Lan, *b, *x ;
  gMatrix  *K, *M ;
  int      i, j, k, ii, jj, NbrDof, Restart, ivmax, newsol = 0 ; 
  double   dum, dum1, dum2;
  double   **Hes, **IMatrix, *diag, *wr, *wi, *err ;
  long     mun = -1 ;
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
  /* valeurs par defaut */
  eigenpar.prec = 1.e-4; 
  eigenpar.reortho = 0;

  eigenpar.size = LanSize; /* A CHANGER */
  /* dans le .pro il faudrait changer la syntaxe. Enlever LanSize et
     remplacer le mot clef Lanczos par Eigenproblem */
  
  /* construction du nom de fichier global */  
  strcpy(EigenFileName, Name_Path);
  strcat(EigenFileName, "eigen.par");
  Msg(INFO, "Loading eigenproblem parameter file '%s'", EigenFileName);
  
  /* lecture des parametres */
  eigenf=fopen(EigenFileName,"r+t");
  if (eigenf) { /* le fichier existe ! */
    fscanf(eigenf,"%lg ",&eigenpar.prec); 
    Msg(INFO, "eigenpar.prec = %g", eigenpar.prec );
    fscanf(eigenf,"%d ",&eigenpar.reortho);
    Msg(INFO, "eigenpar.reortho = %d", eigenpar.reortho );
    fscanf(eigenf,"%d ",&eigenpar.size);
    Msg(INFO, "eigenpar.size = %d", eigenpar.size );
    /* tester la fin du fichier avec un entier standard */
    fclose(eigenf);
  }

  /* reecriture des parametres */
  eigenf=fopen(EigenFileName,"w+t");
  fprintf(eigenf,"%g \n",eigenpar.prec);
  fprintf(eigenf,"%d \n",eigenpar.reortho);
  fprintf(eigenf,"%d \n",eigenpar.size);
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

  /* LanSize = eigenpar.size */

  /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


  NbrDof = DofData_P->NbrDof ; /* taille du système */

  Lan = (gVector*)Malloc((LanSize+1)*sizeof(gVector)) ;
  for (i=0 ; i<LanSize+1 ; i++) 
    LinAlg_CreateVector(&Lan[i], &DofData_P->Solver, NbrDof,
		  DofData_P->NbrPart, DofData_P->Part);
  /* réservation de LanSize+1 vecteurs de taille NbrDof repérés par
     les adresses &Lan[i] dans la suite &Lan[i] sera noté q_i dans les
     commentaires (colonnes d'une matrice rectangulaire orthogonale) */

  /* résolution du PVP généralisé K v = valp M v */
  /* identifier les matrices avec des matrices du problème en cours */
  K = &DofData_P->M1 ; /* matrice des termes en DtDt */
  /*L = &DofData_P->M2 ;*/ /* matrice des termes en Dt pour le futur */
  M = &DofData_P->M3 ; /* matrice des autres termes  */
  b = &DofData_P->b  ; 
  x = &DofData_P->CurrentSolution->x ;


  /* Si on veut traiter le problème 'oméga fixé' en propagation, les
     valeurs propres sont dans ce cas associées à la constante de
     propagation et donc à la dérivation en z ! La notation Dt est donc
     mal choisie dans ce cas … */
  
  /* Cf également remarque sur les courbes de dispersion ! */
  
  /* On est ici dans un cas très particulier où tout est complexe sauf
     la matrice de Hessenberg et les valeurs propres. On fait Arnoldi
     car on construit une matrice de Hessenberg mais c'est en fait une
     matrice tridiagonale (-> beaucoup de calcul pour rien ! mais ça ne
     ralenti pas trop le calcul car ici c'est le NOMBRE DE RESOLUTIONS
     DU SYSTEME pour les itérations inverses qui est couteux). Par
     contre on ne considère que la partie réelle des produits scalaires
     de vecteurs et on construit une matrice de Hessenberg réelle -> Ce
     n'est pas assez général pour être du vrai Arnoldi sur une matrice
     quelconque !!!  */
  
  /* Construire une Hessenberg complexe !! */
  
  /* déclaration des espaces de travail */
  diag    = dvector(1, LanSize+1);
  wr      = dvector(1, LanSize+1);
  wi      = dvector(1, LanSize+1);
  err     = dvector(1, LanSize+1);
  IMatrix = dmatrix(1, LanSize+1, 1, LanSize+1);
  Hes     = dmatrix(1, LanSize+1, 1, LanSize+1);

  /* initial random vector b=q_o
     pas optimal pour la reproductibilité des résultats ! ! !
     pourquoi ne pas essayer des 1 partout
     Arnoldi-Tchebychev consiste à améliorer le vecteur de départ
     d'Arnoldi à l'aide de Tchebychev */
  for (i=0 ; i<NbrDof ; i++) LinAlg_SetDoubleInVector(ran3(&mun), &Lan[0], i) ;

  /* shifting */
  if (fabs(shift) > 1.e-10)
    LinAlg_AddMatrixProdMatrixDouble(K, M, -shift, K) ; 
  /* K = K - shift * M */
  /* DANGER DANGER dépend de la mise à l'échelle de K et M */
  /* les routines LinAlg_* sont l'interface standard avec les
     'Solver Toolkits' du type SparsKit ou PETSC (voir LinAlg.h) */


  /* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

  /* itérations d' A R N O L D I */

  /* 
     Soit le problème au vp : A v = lambda v avec A matrice m * m et
     soit un vecteur arbitraire b (choix ????)  Kn la matrice m*n de
     Krylov donnée par <b, Ab, A^2 b, ... A^(n-1)b> (espace de Krylov
     K_n(A,b) = espace généré par la combinaison linéaire de ces
     vecteurs = lin(b, Ab, A^2 b, ... A^(n-1)b)) A l'étape n des
     itérations d'Arnoldi, la matrice m*n orthogonale Qn est le
     facteur de la décomposition QR de Kn = Qn Rn (m*n = (m*n) *
     (n*n)) La matrice de Hessenberg Hn correspond à la projection Hn
     = Qn^* A Qn (n*n = (n*m) * (m*m) * (m*n) ) (^* conjugué hermitien
     ou adjoint - l'algorithme est valable pour les matrices COMPLEXES
     NON HERMITIENNES ) Les itérations successives sont reliées par A
     Qn = Qn+1 H'n où H'n est la matrice (n+1)*n obtenue en complétant
     Hn avec l'élément h_(n+1,n).

     La structure des itérations est (A est une matrice, b,v des
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

    (Que se passe-t'il si h_(n+1,n)=0 ? -> on a trouvé un sous espace
    invariant = un 'sous-espace propre')

    Les valeurs propres sont approximées par les valeurs propres de Hn
    dans le sens suivant : Une matrice A vérifie son polynôme
    caractéristique P(z) soit P(A) = 0 soit norme(P(A) b) = 0 pour
    tout vecteur b Soit pn(z) le polynôme caractéristique de Hn
    (polynôme d'Arnoldi) C'est le polynôme de degré n qui minimise
    norme(p(A) b) pour tout polynôme p(z) de degré n.  Remarque : le
    polynôme d'Arnoldi idéal ou polynôme de Tchebychev de A est le
    polynome p_Tcheb(z) de degré n qui minimise norme(p(A)) (norme
    matricielle) Ce polynôme ne dépend pas d'un vecteur b arbitraire
    mais il n'existe pas d'algorithme efficace pour le calculer

    Au cours des itérations on construit Hn et Qn : Hn = Qn* A Qn avec
    Qn* Qn = I et on réécrit A Qn = Qn+1 H'n comme A Qn = Qn Hn +
    h_(n+1,n) q_n+1 e^*_n (h_n+1,n prochain coefficient de Hn+1, q_n+1
    prochaine colonne de Qn+1, e_n base canonique de C^n)

    Si v est vecteur propre de Hn alors Hn v = lambda v.  On choisit
    Norme(v)=1.  v est un vecteur de Ritz et lambda une valeur de
    Ritz.  Ils constituent l'approximation au sens de Galerkine dans
    l'espace de Krylov K_n(A,b) du problème aux valeurs propres : <w,
    A v - lambda v> = 0 pour tout w dans K_n(A,b)

    Les coefficients de h sont les coefficients du développement de A
    dans la base orthogonale de K_n(A,b) constituées des colonnes de
    Qn
     
    Donc Qn* A Qn v = lambda v Malheureusement Qn n'est pas carrée et
    ce n'est pas une relation de similitude.  Néanmoins si on poursuit
    le processus jusque n=m (si possible) Qm diagonalise A et on a une
    relation de similitude.  Dans le cas d'une relation de similitude
    si v est vecteur propre de Q* A Q alors Q* A Q v = lambda v et
    comme Q Q* = I on a A Q v = lambda Q v et Q v est donc vecteur
    propre de A.  Ici on a Qn* Qn = I(n*n) mais pas Qn Qn* = I(m*m) Qn
    Qn* est le projecteur orthogonal de l'espace C^m (dimension m) (=
    vecteurs quelconques de m complexes) sur l'espace de Krylov
    K_n(A,b) (dimension n).  On estime le vecteur propre de A par un
    'relèvement' de v à l'aide de Qn : (estimation du vecteur propre
    de A) = Qn v.  La multiplication par Qn est donc un peu
    l'équivalent de l'interpolation.

    On obtient une approximation du résidu de la façon suivante On
    pose x = Qn v Norme(A x - lambda x)= Norme(A Qn v - lambda Qn v) =
    Norme(A Qn v - Qn Hn v). Norme((A Qn - Qn Hn) v) = Norme(h_(n+1,n)
    q_n+1 e^*_n v) =h_(n+1,n) v(n) car Norme(q_n+1)=1 =dernier coef de
    Hessenberg x dernière composante du vecteur de Ritz qu'il suffit
    de comparer à lambda pour avoir une estimation de l'erreur
    relative !

    Problème généralisé : K v = valp M v -> utiliser le produit
    scalaire <M x, y> où M joue le rôle de métrique.  Arnoldi/Lanczos
    donne les plus grandes valeurs propres -> utiliser la matrice
    inverse K*-1 -> on aboutit à une résolution de système.

    A venir, les PVP du second ordre du type 
    (M1 valp^2 + M2 valp + M3) v = 0

    Il faudra également voir si on ne peut pas améliorer le processus
    en utilisant un PRECONDITIONNEMENT pour les problèmes aux VP
    (différent de ceux pour la résolution des systèmes) Voir Y. Saad,
    Numerical Methods for Large Eigenvalue Problems disponible sur le
    Web un redémarrage implicite, voir doc ARPACK
      
    NOTATION du PROGRAMME
    Dans ce qui suit K et M portent ce nom
    Hes contient Hn ( Hes[i][j]=Hn_(i,j) )
    &Lan[i] est l'adresse de la colonne q_i
    Variable de boucle extérieure i à la place de n
                       intérieure j à la place de i
    L'indice i commence à zéro.
  */


  /* traitement spécial des premières itérations */
  /* ------------------------------------------- */

  /* étape 0 */
  LinAlg_ProdMatrixVector(M, &Lan[0], b); /* b = M q_o */
  LinAlg_ProdVectorVector(b, &Lan[0], &dum);/* dum = b^T q_o  avec  ^T = transposition */
  LinAlg_ProdVectorDouble(&Lan[0], 1./sqrt(dum), &Lan[0]); /* Lan[0] is built q_o = q_o/sqrt(dum) */

  Msg(BIGINFO, "Lanczos iteration 1/%d", LanSize);

  /* étape 1 */
  LinAlg_ProdMatrixVector(M, &Lan[0], b); /* b = M * Lan[0] b = M q_o */   
  LinAlg_Solve(K, b, &DofData_P->Solver, &Lan[1]); /* Lan[1] = K^-1 * b q_1 = K^-1 b */  
  /* pas d'inversion explicite, on utilise le solver bien sûr ! -> on a calculé K^-1 M q_o */  

  LinAlg_ProdVectorVector(b, &Lan[1], &dum1); /* alpha1 = Lan[0]^T * M * Lan[1] dum1 = b^T q_1*/  

  /* orthogonalization */
  LinAlg_AddVectorProdVectorDouble(&Lan[1], &Lan[0], -dum1, &Lan[1]); /* Lan[1] -= alpha1 * Lan[0] */
  /* q_1= q_1 - dum1 q_o */

  LinAlg_ProdMatrixVector(M, &Lan[1], b); /* b = M * Lan[1] in prevision */  
  /* b = M q_1 */
  LinAlg_ProdVectorVector(b, &Lan[1], &dum2); /* gama2 = beta1 = sqrt(Lan[1]^T * M * Lan[1]) */
  /* dum2 = b^T q_1 */

  dum2 = sqrt(dum2); 
  LinAlg_ProdVectorDouble(&Lan[1], 1./dum2, &Lan[1]); /* normation in the metric M: Lan[1] = q_1  is built */  
  LinAlg_ProdVectorDouble(b, 1./dum2, b); /* b = M * Lan[1] in prevision of next step   */

  /* début de construction de la matrice de Hessenberg pour l'approximation des vp */
  Hes[1][1] = dum1;
  Hes[2][1] = dum2;

  /* print_lanczos_to_file (1, NbrDof, Hes, Lan, shift, Name); */

  /* Début de la boucle principale des itérations d' A R N O L D I */
  /* ------------------------------------------------------------- */

  Restart = 2 ; /* à quoi ça sert ?  pour 'Arnoldi with restarting' cf Golub & Van Loan */
  for (i=Restart ; i<=LanSize ; i++){
    
    Msg(BIGINFO, "Lanczos iteration %d/%d", i, LanSize);

    LinAlg_Solve(K, b, &DofData_P->Solver, &Lan[i]);/* q_1 = K^-1 b  avec b déjà multiplié par M */

    
    for (j=1 ; j<=i ; j++){
      LinAlg_ProdMatrixVector(M, &Lan[j-1], x);/* x = M q_(j-1) */
      LinAlg_ProdVectorVector(x, &Lan[i], &Hes[j][i]);/* h_(j,i) = x^T q_i */
      LinAlg_AddVectorProdVectorDouble(&Lan[i], &Lan[j-1], -Hes[j][i], &Lan[i]); /* orthogonalization */ 
      /* q_i = q_i - h_(j,i) q_(j-1) */
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
	LinAlg_AddVectorProdVectorDouble(&Lan[i], &Lan[j-1], -diag[j], &Lan[i]); /* reorthogonalization */ 
	Hes[j][i]=Hes[j][i]+diag[j];
	Msg(INFO, " hes %d = %g corrected by %g ",j,Hes[j][i],diag[j]);
      }
    }

    LinAlg_ProdMatrixVector(M, &Lan[i], x); /* x = M q_i */
    LinAlg_ProdVectorVector(x, &Lan[i], &dum); /* dum  = x^T q_i */
    Hes[i+1][i] = sqrt(dum); 
    LinAlg_ProdVectorDouble(&Lan[i], 1./Hes[i+1][i], &Lan[i]); /* q_i = q_i / h_(j,i)*/ 
    LinAlg_ProdMatrixVector(M, &Lan[i], b); /* b = M * Lan[i] in prevision of next step */
    
    /* eigen value computation of the current Hes matrix
       On complète la matrice de Hessenberg par des zéros */
    for(ii=3 ; ii<=i ; ii++)
      for(jj=1 ; jj<=ii-2 ; jj++)
	Hes[ii][jj] = 0.0 ;
    
    for(ii=1 ; ii<=i ; ii++)
      for(jj=1 ; jj<=i ; jj++)
	IMatrix[ii][jj] = Hes[ii][jj] ;

    /* cette partie est pour info,
       elle n'est nécessaire que pour afficher les VP
       on pourrait imaginer de ne pas la calculer chaque fois !  */
    hqr(IMatrix, i, wr, wi) ;

    /* Algorithme QR pour une matrice de Hessenberg (from Numerical Recipes)
       Pour une MATRICE REELLE ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? ? 
       Ecrire l'algorithme correspondant en complexe : décomposition LR
       cf version Algol dans Wilkinson */

    /* 
       print_valpr_to_file(i,wr,wi,shift,Name);
       print_lanczos_to_file (i,NbrDof,Hes,Lan,shift,Name); 
    */

    /*
    Msg(INFO, "Lanczos eigenvalue of the transformed problem ");
    for(k=1 ; k<=i ; k++)
      Msg(INFO, "Lanczos eigenvalue %d = %g +I %g",k, 
	  wr[k], wi[k]);

    Msg(INFO, "Lanczos eigenvalue of the original problem ");
    for(k=1 ; k<=i ; k++)
      Msg(INFO, "Lanczos eigenvalue %d = %g (%g) %g",k, 
	  shift+1.0/wr[k], sqrt(shift+1.0/wr[k])/TWO_PI, wi[k]);
    */

    /* ATTENTION shift+1.0/wr[k] ne donne la VP réelle que si wr[i]
       est NEGLIGEABLE
       quid des VP complexes */

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
    cal_vec_pr_T(Hes, i, wr[ivmax], diag); /* compute the corresponding eigenvector */
    Msg(INFO, "Last eigenvector component = %g ", diag[i]);  
    Msg(BIGINFO, " ******** Residual estimate = %g ",
	Hes[i+1][i] * diag[i] / wr[ivmax] );

  }

  /* fin des itérations d' A R N O L D I */
  /* ----------------------------------- */

  Msg(INFO, "Final eigenvalue/eigenvector Computation");

  /* eigen value computation of the final
     Hes matrix Calcul final des valeurs propres = Euh ? Déjà fait en
     sortie de boucle principale, non ?? */

  for(ii=3 ; ii<=LanSize ; ii++)
    for(jj=1 ; jj<=ii-2 ; jj++)
      Hes[ii][jj] = 0.0 ;

  for(ii=1 ; ii<=LanSize ; ii++)
    for(jj=1 ; jj<=LanSize ; jj++)
      IMatrix[ii][jj] = Hes[ii][jj] ;

  hqr(IMatrix, LanSize, wr, wi);

  /* store the real eigen values */
  for (k=1 ; k<=LanSize ; k++) wi[k]=shift+1./wr[k]; 
  /* est-ce une bonne idée de stocker les VP réelles reconstituées
     dans la partie complexe ???? non ! */

  /* eigen vector computation of the final Hes matrix */
  /* Pour chacune des valeurs propres de Hn, calcul du vecteur propre
     à l'aide de la routine 'cal_vec_pr_T' */

  for(i=1 ; i<=LanSize ; i++){
    
    cal_vec_pr_T(Hes, LanSize, wr[i], diag);/* diag ne sert qu'ici, son nom est loufoque ! */
    
    /* estimation d'erreur et test de convergence */
    /* Msg(BIGINFO, "*********** estim %d = %g",i,Hes[LanSize+1][LanSize]*diag[LanSize]); */
    
    if (wr[i]>1e-20) 
      err[i] = Hes[LanSize+1][LanSize]*diag[LanSize]/wr[i];
    else
      err[i] = 1.e99; /* a changer! */

    /* copy the current eigen vector in IMatrix */
    for(j=1 ; j<=LanSize ; j++) IMatrix[j][i]=diag[j];
    
  }
  
  /* reconstruction of the global eigen vectors */
  
  for(i=0 ; i<List_Nbr(LanSave) ; i++){
    List_Read(LanSave, i, &ii) ;
    
    if(ii<1 || ii>LanSize){
      Msg(WARNING, "Eigenvalue index out of range") ;
      break ;
    }
    
    /* test de validite de la valeur propre */
    Msg(BIGINFO, "Eigenvalue %d = %g (f = %g)", ii, wi[ii], sqrt(wi[ii])/TWO_PI);

    /* if error smaller than required precision and non pathological eigenvalue ! */
    if ((err[ii] < eigenpar.prec ) && (wr[ii]>0.)) { 
      Msg(BIGINFO, "GOOD -> Eigenvalue %d = %g with error %g ", ii, wr[ii], err[ii]);
      
      /* if(i != 0){ */
      if (newsol != 0) {
	/* Msg(BIGINFO, "###########################  create new solution space"); */
	LinAlg_CreateVector(&Solution_S.x, &DofData_P->Solver, NbrDof,
			    DofData_P->NbrPart, DofData_P->Part);

	/* NbrPart,Part -> pour les multiprocesseurs */
	/* création d'un nouveau 'vecteur solution' associé au pas de temps en cours */

	List_Add(DofData_P->Solutions, &Solution_S) ;
	/* List_Add : manipulation des listes */
	
	DofData_P->CurrentSolution = (struct Solution*)
	List_Pointer(DofData_P->Solutions, List_Nbr(DofData_P->Solutions)-1) ;
      } 
      else 
	newsol = 1 ; /* peut-être pas à la bonne place ? */

      DofData_P->CurrentSolution->Time = wi[ii] ;
      /* Time = partie réelle de la vp ? récupération possible dans le
         Post ? J'ai vérifié dans l'affichage de Gmsh et ça semble
         bien être le cas */
      
      DofData_P->CurrentSolution->TimeStep = ii ;
      DofData_P->CurrentSolution->TimeFunctionValues = NULL ;

      DofData_P->CurrentSolution->SolutionExist = 1 ;
      LinAlg_ZeroVector(&DofData_P->CurrentSolution->x) ;
      /* mise à zéro du vecteur solution courant */

      for(k=0;k<NbrDof;k++){
	/* boucle de taille m = taille des matrices A,K,M du problème */
	/* calcul de la composant k du vecteur ii */
	
	for (j=1 ; j<=LanSize ; j++){
	  /* boucle de taille n = le nombre de vecteurs propres à estimer */
	  /* produit vecteur^T vecteur mais PAS avec un vecteur q */
	  /* on balaye Qn dans l'autre sens ! */
	  
	  LinAlg_GetDoubleInVector(&dum, &Lan[j-1], k) ;
	  /* dum = élément k de q_(j-1) */
	  
	  LinAlg_AddDoubleInVector(IMatrix[j][ii]*dum, &DofData_P->CurrentSolution->x, k) ;
	  /* x_k = x_k + q_(k,j-1)* v_j */
	  /* on a multiplié le 'ii ième' vecteur propre de Hn par Qn */  
	  /* v de taille n -> Qn v de taille (m*n) * n = m     */
	}
      }
      
      /* normation L infini : abs plus grand élément mis a un */
      /* Msg(BIGINFO, "normation du vecteur propre %d  ",ii); */
      /* détermination du maximum */
      dum = 0.; dum1 = 0.;
      for(k=0;k<NbrDof;k++){
	LinAlg_GetDoubleInVector(&dum,&DofData_P->CurrentSolution->x, k);
	if (fabs(dum)>dum1) dum1=dum;
      }
      /* division par le max */
      if (dum1 > 1.e-16) 
	LinAlg_ProdVectorDouble(&DofData_P->CurrentSolution->x,1./dum1,&DofData_P->CurrentSolution->x);
      
      /* estimation d'erreur et test de convergence */
      /* Msg(BIGINFO, "------------------ estim %d = %g  ",ii,Hes[ii+1][ii]); */
      
    } /* fin du test de validite */
    else{

      Msg(BIGINFO,"BAD! -> Eigenvalue %d = %g with error %g ", ii, wr[ii], err[ii]); 

    }
    
  }    
  
  /* c'est fini */
  
  /* tester newsol pour voir si au moins une solution a été trouvée ! */
  
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

