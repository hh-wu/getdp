/* $Id: Generate_Network.c,v 1.3 2000-09-28 22:14:39 geuzaine Exp $ */
#include <stdio.h>
#include <math.h>

#include "ualloc.h"

#include "Data_Active.h"
#include "Treatment_Formulation.h"
#include "outil.h"



/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ N e t w o r k                                         */
/* ------------------------------------------------------------------------ */

/* Determination of the matrix 'Loop - Branch' from the matrix 'Node - Branch' */

struct ConstraintActive * Generate_Network(List_T * ConstraintPerRegion_L) {

  struct ConstraintActive * Active ;
  struct ConstraintPerRegion * CPR ;
  List_T  * ListInt_L ;

  int  n, Nbr_Branch, Nbr_Loop,  i, j, k, l ;

  int  ** MatNode, ** MatLoop,  ** MatA ;

  int  * Flag_row, * Num_col, j_col1, j_col2 ;
  int  vi, vk, vsum ;


  /* List of the Nodes of the Network */

  ListInt_L = List_Create(10, 10, sizeof(int)) ;
  Nbr_Branch = List_Nbr(ConstraintPerRegion_L) ;

  for (j = 0 ; j < Nbr_Branch ; j++) {
    CPR = (struct ConstraintPerRegion *)List_Pointer(ConstraintPerRegion_L, j) ;
    List_Replace(ListInt_L, &(CPR->Case.Network.Node1), fcmp_int) ;
    List_Replace(ListInt_L, &(CPR->Case.Network.Node2), fcmp_int) ;
  }
  if (Nbr_Branch)  List_Sort(ListInt_L, fcmp_int) ;

  n = List_Nbr(ListInt_L) - 1 ;  /* Nbr_Node - 1 */
  Nbr_Loop = Nbr_Branch - n ;    /* Nbr of independent loops */


  /* Active data */

  Active = (struct ConstraintActive *)Malloc(sizeof(struct ConstraintActive)) ;
  
  Active->Case.Network.NbrNode = n ; Active->Case.Network.NbrBranch = Nbr_Branch ;
  Active->Case.Network.NbrLoop = Nbr_Loop ;

  Active->Case.Network.MatNode = MatNode = (int **)Malloc(n*sizeof(int *));
  for (i=0 ; i<n ; i++)  MatNode[i] = (int *)Malloc(Nbr_Branch*sizeof(int)) ;
  Active->Case.Network.MatLoop = MatLoop = (int **)Malloc(Nbr_Loop*sizeof(int *));
  for (i=0 ; i<Nbr_Loop ; i++)  MatLoop[i] = (int *)Malloc(Nbr_Branch*sizeof(int)) ;


  /* Fill matrix MatNode */

  for (i=0 ; i<n ; i++)  for (j=0 ; j<Nbr_Branch ; j++)  MatNode[i][j] = 0 ;

  for (j = 0 ; j < Nbr_Branch ; j++) {
    CPR = (struct ConstraintPerRegion*)List_Pointer(ConstraintPerRegion_L, j) ;
    if ((i = List_ISearch(ListInt_L, &(CPR->Case.Network.Node1), fcmp_int)) > 0)
      MatNode[i-1][j] = -1 ;  /* skip index 0, i.e. node 1 */
    if ((i = List_ISearch(ListInt_L, &(CPR->Case.Network.Node2), fcmp_int)) > 0)
      MatNode[i-1][j] =  1 ;
  }


  /* Transformation of MatNode -> MatA ... Welsh algorithm */

  MatA = (int **)Malloc(n*sizeof(int *)) ;
  for (i=0 ; i<n ; i++)  MatA[i] = (int *)Malloc(Nbr_Branch*sizeof(int)) ;

  for (i=0 ; i<n ; i++)
    for (j=0 ; j<Nbr_Branch ; j++)  MatA[i][j] = MatNode[i][j] ;

  Flag_row = (int *) Malloc(n          * sizeof(int)) ;
  Num_col  = (int *) Malloc(Nbr_Branch * sizeof(int)) ;

  for (i=0 ; i<n ; i++)  Flag_row[i] = 0 ;


  j_col1 = 0 ; j_col2 = n ;

  for (j=0 ; j<Nbr_Branch ; j++) {

    i = 0 ;
    while ( i < n && (Flag_row[i] || MatA[i][j] == 0) ) { i++ ; } ;

    if (i < n) {
      Num_col[j_col1++] = j ;  /* Column for the regular part of the matrix */
      Flag_row[i] = 1 ;
      vi = MatA[i][j] ;
      for (k=0 ; k<n ; k++){
	if ( k != i && (vk = MatA[k][j]) != 0 ){
	  for (l=0 ; l<Nbr_Branch ; l++){
	    if      (vk - vi == 0)  MatA[k][l] -= MatA[i][l] ;
	    else if (vk + vi == 0)  MatA[k][l] += MatA[i][l] ;
	    else                    Msg(ERROR, "Error: Bad Network") ;
	  }
	}
      }
    }
    else {
      if (j_col2 < Nbr_Branch)
	Num_col[j_col2++] = j ;  /* Column for the complementary part of the matrix */
      else  Msg(ERROR, "Error: Bad Network") ;
    }
  }
  
  /*
  printf ("\nMatNode transformed:\n\n") ;
  for (i=0 ; i<n ; i++) {
    for (j=0 ; j<Nbr_Branch ; j++)  printf ("%2d ", MatA[i][j]) ;
    printf("\n") ;
  }
  printf("\nIndex columns (the first %d columns define a tree in the graph)\n", n) ;
  for (j=0 ; j<Nbr_Branch ; j++)  printf ("%2d ", Num_col[j]) ;
  printf("\n\n") ;
  */

  /* Matrix Loop - Branch */

  for (i=0 ; i<Nbr_Loop ; i++) {
    for (j=0 ; j<n ; j++) {  /* rectangular part */
      vsum = 0 ;
      for (k=0 ; k<n ; k++)  vsum += MatA[k][Num_col[n+i]] * MatA[k][Num_col[j]] ;
      MatLoop[i][Num_col[j]] = - vsum ;
    }
    for (j=0 ; j<Nbr_Loop ; j++)  /* Unit matrix */
      MatLoop[i][Num_col[n+j]] = (j == i)? 1 : 0 ;
  }

  return Active ;
}
