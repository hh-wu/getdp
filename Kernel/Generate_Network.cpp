// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <string.h>
#include "ProData.h"
#include "ListUtils.h"
#include "MallocUtils.h"
#include "Message.h"

extern int Flag_NETWORK_CACHE;
extern char *Name_Path ;

/* ------------------------------------------------------------------------ */
/*  G e n e r a t e _ N e t w o r k                                         */
/* ------------------------------------------------------------------------ */

/* Determination of the matrix 'Loop - Branch' from the matrix 'Node - Branch' */

struct ConstraintActive * Generate_Network(char *Name, List_T * ConstraintPerRegion_L)
{
  /* List of the Nodes of the Network */

  List_T *ListInt_L = List_Create(10, 10, sizeof(int)) ;
  int Nbr_Branch = List_Nbr(ConstraintPerRegion_L) ;
  if (!Nbr_Branch) Message::Error("No branch in Network") ;

  struct ConstraintPerRegion * CPR ;
  for (int j = 0 ; j < Nbr_Branch ; j++) {
    CPR = (struct ConstraintPerRegion *)List_Pointer(ConstraintPerRegion_L, j) ;
    List_Replace(ListInt_L, &(CPR->Case.Network.Node1), fcmp_int) ;
    List_Replace(ListInt_L, &(CPR->Case.Network.Node2), fcmp_int) ;
  }
  if (Nbr_Branch)  List_Sort(ListInt_L, fcmp_int) ;

  int n = List_Nbr(ListInt_L) - 1 ;  /* Nbr_Node - 1 */
  int Nbr_Loop = Nbr_Branch - n ;    /* Nbr of independent loops */

  Message::Info("Network has %d branch(es), %d node(s) and %d loop(s)",
                Nbr_Branch, n + 1, Nbr_Loop);

  /* Active data */

  struct ConstraintActive * Active =
    (struct ConstraintActive *)Malloc(sizeof(struct ConstraintActive)) ;

  Active->Case.Network.NbrNode = n ; Active->Case.Network.NbrBranch = Nbr_Branch ;
  Active->Case.Network.NbrLoop = Nbr_Loop ;

  int  ** MatNode, ** MatLoop ;
  Active->Case.Network.MatNode = MatNode = (int **)Malloc(n*sizeof(int *));
  for (int i=0 ; i<n ; i++)  MatNode[i] = (int *)Malloc(Nbr_Branch*sizeof(int)) ;
  Active->Case.Network.MatLoop = MatLoop = (int **)Malloc(Nbr_Loop*sizeof(int *));
  for (int i=0 ; i<Nbr_Loop ; i++){
    MatLoop[i] = (int *)Malloc(Nbr_Branch*sizeof(int)) ;
    for(int j = 0; j < Nbr_Branch; j++) MatLoop[i][j] = 0;
  }

  /* Fill matrix MatNode */

  for (int i=0 ; i<n ; i++)  for (int j=0 ; j<Nbr_Branch ; j++)  MatNode[i][j] = 0 ;

  for (int j = 0 ; j < Nbr_Branch ; j++) {
    CPR = (struct ConstraintPerRegion*)List_Pointer(ConstraintPerRegion_L, j) ;
    int i;
    if ((i = List_ISearch(ListInt_L, &(CPR->Case.Network.Node1), fcmp_int)) > 0)
      MatNode[i-1][j] = -1 ;  /* skip index 0, i.e. node 1 */
    if ((i = List_ISearch(ListInt_L, &(CPR->Case.Network.Node2), fcmp_int)) > 0)
      MatNode[i-1][j] =  1 ;
  }

  /* Transformation of MatNode -> MatA ... Welsh algorithm */

  int ** MatA = (int **)Malloc(n*sizeof(int *)) ;
  for (int i=0 ; i<n ; i++)  MatA[i] = (int *)Malloc(Nbr_Branch*sizeof(int)) ;

  for (int i=0 ; i<n ; i++)
    for (int j=0 ; j<Nbr_Branch ; j++)  MatA[i][j] = MatNode[i][j] ;

  int *Flag_row = (int *) Malloc(n          * sizeof(int)) ;
  int *Num_col  = (int *) Malloc(Nbr_Branch * sizeof(int)) ;

  for (int i=0 ; i<n ; i++)  Flag_row[i] = 0 ;

  int j_col1 = 0, j_col2 = n ;

  for (int j=0 ; j<Nbr_Branch ; j++) {

    int i = 0 ;
    while ( i < n && (Flag_row[i] || MatA[i][j] == 0) ) { i++ ; } ;

    if (i < n) {
      Num_col[j_col1++] = j ;  /* Column for the regular part of the matrix */
      Flag_row[i] = 1 ;
      int vi = MatA[i][j], vk ;
      for (int k=0 ; k<n ; k++){
	if ( k != i && (vk = MatA[k][j]) != 0 ){
	  for (int l=0 ; l<Nbr_Branch ; l++){
	    if      (vk - vi == 0)  MatA[k][l] -= MatA[i][l] ;
	    else if (vk + vi == 0)  MatA[k][l] += MatA[i][l] ;
	    else                    Message::Error("Bad network") ;
	  }
	}
      }
    }
    else {
      if (j_col2 < Nbr_Branch)
	Num_col[j_col2++] = j ;  /* Column for the complementary part of the matrix */
      else  Message::Error("Bad network") ;
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

  char FileName[256];
  strcpy(FileName, Name_Path);
  strcat(FileName, Name);
  strcat(FileName, ".cache");

  if(Flag_NETWORK_CACHE){
    FILE *fp = fopen(FileName, "r");
    if(fp){
      Message::Info("Reading network cache '%s'", FileName);
      int n;
      if(fscanf(fp, "%d", &n) != 1){
        Message::Error("Bad cache file");
      }
      for(int l = 0; l < n; l++){
        int i, j, val;
        if(fscanf(fp, "%d %d %d", &i, &j, &val) != 3){
          Message::Error("Bad cache file");
        }
        if(i < Nbr_Loop && j < Nbr_Branch)
          MatLoop[i][j] = val;
        else
          Message::Error("Invalid network cache entry");
      }
      fclose(fp);
      return Active ;
    }
    else{
      Message::Info("Did not find network cache '%s': generating it", FileName);
    }
  }

  Message::ResetProgressMeter();
  int idx = 0;
  //#pragma omp parallel for
  for (int i=0 ; i<Nbr_Loop ; i++) {
    int ni = Num_col[n+i];
    for (int j=0 ; j<n ; j++) {  /* rectangular part */
      int nj = Num_col[j];
      int a, b, vsum = 0 ;
      for (int k=0 ; k<n ; k++){
        if((a = MatA[k][ni]) && (b = MatA[k][nj])) vsum += a * b ;
      }
      MatLoop[i][nj] = -vsum ;
    }
    for (int j=0 ; j<Nbr_Loop ; j++)  /* Unit matrix */
      MatLoop[i][Num_col[n+j]] = (j == i)? 1 : 0 ;
    Message::ProgressMeter(++idx, Nbr_Loop, "Processing (Generate Network)");
  }

  if(Flag_NETWORK_CACHE){
    FILE *fp = fopen(FileName, "w");
    if(fp){
      int n = 0;
      for(int i = 0; i < Nbr_Loop; i++){
        for(int j = 0; j < Nbr_Branch; j++){
          if(MatLoop[i][j]) n++;
        }
      }
      fprintf(fp, "%d\n", n);
      for(int i = 0; i < Nbr_Loop; i++){
        for(int j = 0; j < Nbr_Branch; j++){
          if(MatLoop[i][j]) fprintf(fp, "%d %d %d\n", i, j, MatLoop[i][j]);
        }
      }
      fclose(fp);
    }
    else{
      Message::Error("Could not create network cache '%s'", FileName);
    }
  }

  return Active ;
}
