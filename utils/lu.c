/* $Id: lu.c,v 1.2 2000-09-07 18:47:31 geuzaine Exp $ */
/* Decomposition LU incomplete en vue de trouver la */
/* matrice d'incidence mailles-branches a partir de */
/* celle noeuds-branches.                           */

#include "stdio.h"
#include <math.h>

void declu (double **a, double **z, int n, int m);

void main (void)
{
  double **a;  
  double **y;
  double **yy;
  double **z;
  double **b;
  int n, m, i, j, k;
  
  
  printf ("Entrez le nombre de noeuds - 1: ");
  scanf("%2d", &n);
  
  printf ("Entrez le nombre de branches: ");
  scanf("%d",&m);

  
  a = (double**)malloc(n*sizeof(double*));
  for(i=0;i<n;i++) a[i] = (double*)malloc(m*sizeof(double));

  y = (double**)malloc(m*sizeof(double*));
  for(i=0;i<m;i++) y[i] = (double*)malloc(n*sizeof(double));
  
  yy = (double**)malloc(n*sizeof(double*));
  for(i=0;i<n;i++) yy[i] = (double*)malloc(n*sizeof(double));

  z = (double**)malloc(n*sizeof(double*));
  for(i=0;i<n;i++) z[i] = (double*)malloc(n*sizeof(double));
  
  b = (double**)malloc(n*sizeof(double*));
  for(i=0;i<n;i++) b[i] = (double*)malloc(m*sizeof(double));

  /* Initialisation Matrice A */

  for (i=0;i<n;i++)
    for (j=0;j<m;j++) {
      printf ("\nEntrez l'element a[%d][%d]: \n",i,j);
      scanf("   %lf", &a[i][j]);
    }


  /* Initialisation Matrice de droite a zero */


  for (i=0;i<n;i++)
    for (j=0;j<n;j++) {
      z[i][j]=0;
    }


  /* Generation des vecteurs unitaires dans le bas de la matrice des mailles */
  /* Correspond aux maillons */
  
  for(i=0;i<m;i++)
    for(j=0;j<n;j++) {
      y[i][j]=0;
      if (i == j+n) {y[i][j]=1;}
    }

    
  /* Passage de -(droite de A)*(bas de Y) au second membre */
  /* Y est la matrice recherchee des mailles */

  for (i=0; i<n; i++)
    for (j=0; j<n; j++) {
      z[i][j]=0;
      for (k=n; k<m; k++) {
	z[i][j]=z[i][j]-a[i][k]*y[k][j];
      }
    }



  
  printf ("\n\n\n\n\n\n\n\n\n\nVous avez rentre:\n");
  printf ("\nA:\n\n");
  
  for (i=0;i<n;i++) {
    for (j=0;j<m;j++){
      printf ("%lf   ",a[i][j]);
    }
    printf("\n");
  }
  
  
  printf ("\nY:\n\n");
  
  for (i=0;i<m;i++) {
    for (j=0;j<n;j++){
      printf ("%lf   ",y[i][j]);
    }
    printf("\n");
  }







  printf ("\nZ:\n");
  
  for (i=0;i<n;i++) {
    for (j=0;j<n;j++){
      printf ("%lf   ",z[i][j]);
    }
    printf("\n");
  }
  
  
  /* Decomposition LU de A */
  
  declu(a, z, n, m);
  
  /* Affichage du Resultat */
  
  
  printf ("\nLa decomposition LU donne ceci:\n");
  
  printf ("\nA:\n\n");
  
  for (i=0;i<n;i++) {
    for (j=0;j<m;j++){
      printf ("%lf   ",a[i][j]);
    }
    printf("\n");
  }
  printf ("\nZ:\n\n");
  
  for (i=0;i<n;i++) {
    for (j=0;j<n;j++){
      printf ("%lf   ",z[i][j]);
    }
    printf("\n");
    
  }

  /* yy est la matrice intermediaire pour resoudre L.U.Y=Z */
  /* D'apres L.YY=Z puis U.Y=YY ou on cherche Y */


  /* Initialisation de yy  */

  for(i=0;i<n;i++)
    for(j=0;j<n;j++) {
      yy[i][j]=0;
    }



  /* Resolution  */

  /* Resolution de L*yy=Z */



  for (j=0; j<n; j++)
    for (i=0; i<n; i++) {
      yy[i][j]=z[i][j];
      for (k=0; k<i; k++) {
	yy[i][j]=yy[i][j]-a[i][k]*yy[k][j];
      }
    }

  /* Resolution de U*y=yy */

  for (j=0; j<n; j++)
    for (i=n-1; i>=0; i--) {
      y[i][j]=yy[i][j];
      for (k=i+1; k<n; k++) {
	y[i][j]=y[i][j]-a[i][k]*y[k][j];
      }
      y[i][j]=y[i][j]/a[i][i];
    }

  /* Mise en forme de Y  */

  for (i=0; i<n; i++)
    for (j=0; j<n; j++) {
      if ((ceil(y[i][j])-y[i][j]) > 0.5)
	{ y[i][j]=floor(y[i][j]);}
      else {y[i][j]=ceil(y[i][j]);}
    }




  /* Affichage de yy */

  printf ("\n\nYY:\n\n");

  for (i=0;i<n;i++) {
    printf ("\n\n");
    for (j=0;j<n;j++){
      printf ("%lf   ",yy[i][j]);
    }
    printf("\n");
    
  }

  /* Affichage de y */

  printf ("\n\nY:\n\n");

  for (i=0;i<m;i++) {
    printf ("\n\n");
    for (j=0;j<n;j++){
      printf ("%lf   ",y[i][j]);
    }
    printf("\n");
    
  }


  /* Affichage de B */



  /* Transposition du haut de Y */

  for (i=0; i<n; i++)
    for (j=0; j<n; j++) {
      b[j][i]=y[i][j];
    }
  for (i=n; i<m; i++)
    for (j=0; j<n; j++) {
      b[i-n][j+n]=y[i][j];
    }

  printf ("\n\nB:\n\n");

  for (i=0;i<n;i++) {
    printf ("\n\n");
    for (j=0;j<m;j++){
      printf ("%lf   ",b[i][j]);
    }
    printf("\n");
    
  }










}
void declu (double **a, double **z, int n, int m)
    {  
  double *lignetmp;
  double max, tmp;
  int     i, j, k, pos, change;

  lignetmp = (double*) malloc(n * sizeof(double));

  for (k=0; k<n-1; k++) {
    max = a[k][k]; pos=k; change=0; 
    
    for (i=k+1; i<n; i++) {

      if (a[i][k]>=0) {tmp=a[i][k];}
    
      if (a[i][k]<0) {tmp=-a[i][k];}
    
      if ( tmp > max) {
	max=a[i][k]; pos=i; change=1; 
      }
    }


    if (change == 1) {

      for (j=0; j<n; j++) {
	lignetmp[j]=a[k][j]; a[k][j]=a[pos][j]; a[pos][j]=lignetmp[j];
      }
      for (j=0; j<n; j++) {
	lignetmp[j]=z[k][j]; z[k][j]=z[pos][j]; z[pos][j]=lignetmp[j];
      }
    }

    for (i=k+1; i<n; i++) {
      a[i][k] = a[i][k] / a[k][k];
      for (j=k+1; j<n; j++) {
	a[i][j] = a[i][j]-a[i][k]*a[k][j];
      }
    }

  }
  
}












