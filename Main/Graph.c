#define RCSID "$Id: Graph.c,v 1.8 2000-11-10 16:05:32 colignon Exp $"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "GetDP.h"
#include "Graph.h"
#include "DofData.h"
#include "Compat.h"

#include "nrutil.h"


/*
  Si on est sur d'utiliser Metis tout le temps, on devrait definir 
  correctement la strcture de Graphe avec idxtype
*/

/* ------------------------------------------------------------------------ */
/*  private functions                                                       */
/* ------------------------------------------------------------------------ */

static int Graph_cmpij(int ai,int aj,int bi,int bj){
  if(ai<bi) return -1;
  if(ai>bi) return 1;
  if(aj<bj) return -1;
  if(aj>bj) return 1;
  return 0;
}

#define SWAP(a,b)  temp=(a);(a)=(b);(b)=temp;
#define SWAPI(a,b) tempi=(a);(a)=(b);(b)=tempi;
#define M          7
#define NSTACK     50
#define M1        -1

void Graph_sort(unsigned long n, int ai[] , int aj [] ){
  unsigned long i,ir=n,j,k,l=1;
  int *istack,jstack=0,tempi;
  int    b,c;

  GetDP_Begin("Graph_sort");
    
  istack=ivector(1,NSTACK);
  for (;;) {
    if (ir-l < M) {
      for (j=l+1;j<=ir;j++) {
	b=ai[j M1];
	c=aj[j M1];
	for (i=j-1;i>=1;i--) {
	  if (Graph_cmpij(ai[i M1],aj[i M1],b,c) <= 0) break;
	  ai[i+1 M1]=ai[i M1];
	  aj[i+1 M1]=aj[i M1];
	}
	ai[i+1 M1]=b;
	aj[i+1 M1]=c;
      }
      if (!jstack) {
	free_ivector(istack,1,NSTACK);
	GetDP_End;
      }
      ir=istack[jstack];
      l=istack[jstack-1];
      jstack -= 2;
    } 
    else {
      k=(l+ir) >> 1;
      SWAPI(ai[k M1],ai[l+1 M1])
      SWAPI(aj[k M1],aj[l+1 M1])
      if (Graph_cmpij(ai[l+1 M1],aj[l+1 M1],ai[ir M1],aj[ir M1])>0){
	SWAPI(ai[l+1 M1],ai[ir M1])
	SWAPI(aj[l+1 M1],aj[ir M1])
      }
      if (Graph_cmpij(ai[l M1],aj[l M1],ai[ir M1],aj[ir M1])>0){
	SWAPI(ai[l M1],ai[ir M1])
	SWAPI(aj[l M1],aj[ir M1])
      }
      if (Graph_cmpij(ai[l+1 M1],aj[l+1 M1],ai[l M1],aj[l M1])>0){
	SWAPI(ai[l+1 M1],ai[l M1])
	SWAPI(aj[l+1 M1],aj[l M1])
      }
      i=l+1;
      j=ir;
      b=ai[l M1];
      c=aj[l M1];
      for (;;) {
	do i++; while (Graph_cmpij(ai[i M1],aj[i M1],b,c) < 0);
	do j--; while (Graph_cmpij(ai[j M1],aj[j M1],b,c) > 0);
	if (j < i) break;
	SWAPI(ai[i M1],ai[j M1])
	SWAPI(aj[i M1],aj[j M1])
	}
      ai[l M1]=ai[j M1];
      ai[j M1]=b;
      aj[l M1]=aj[j M1];
      aj[j M1]=c;
      jstack += 2;
      if (jstack > NSTACK) {
	fprintf(stderr,"NSTACK too small in sort2.\n");
	exit(1);
      }
      if (ir-i+1 >= j-l) {
	istack[jstack]=ir;
	istack[jstack-1]=i;
	ir=j-1;
      } 
      else {
	istack[jstack]=j-1;
	istack[jstack-1]=l;
	l=i;
      }
    }
  }

  GetDP_End ;
}


#undef M
#undef NSTACK
#undef SWAP
#undef SWAPI
#undef M1

void Graph_ptr2i ( int n , int *ptr , int *jptr){
  int i,iptr,iptr2;

  GetDP_Begin("Graph_ptr2i");

  for(i=0;i<n;i++){
    iptr = jptr[i];
    while(iptr){
      iptr2 = ptr[iptr];
      ptr[iptr]=i+1;
      iptr = iptr2;      
    }
  }

  GetDP_End ;
}


void Graph_deblign ( int nz , int *ptr , int *jptr , int *ai){
  int i,ilign;

  GetDP_Begin("Graph_deblign");

  ilign = 1;
  jptr[0] = 1;
  for(i=1; i<nz; i++) {
    if (ai[i-1] < ai[i]) {
      jptr[ilign++]=i+1;
      ai[i-1] = 0;
    }    
    else{
      ai[i-1] = i+1;
    }
  }
  ai[nz-1] = 0;

  GetDP_End ;
}

void Graph_csr_format (gGraph *GG, int N){
  int    i,*ptr,*jptr,*ai,n,iptr,iptr2;

  GetDP_Begin("Graph_csr_format");

  ptr  = (int*)GG->ptr->array;
  jptr = (int*)GG->jptr->array;
  ai   = (int*)GG->ai->array;
  n    = N;
  for(i=0;i<n;i++){
    iptr = jptr[i];
    while(iptr){
      iptr2 = iptr - 1;
      iptr = ptr[iptr2];
      ptr[iptr2] = i+1;
    }
  }
  Graph_sort(List_Nbr(GG->ai),ai,ptr);
  Graph_deblign(List_Nbr(GG->ai),ptr,jptr,ai);
  jptr[N]=List_Nbr(GG->ai)+1;

  GetDP_End ;
} 


void Graph_restore_format (gGraph *GG){    
  char *temp;

  GetDP_Begin("Graph_restore_format");

  temp  = GG->ptr->array;
  GG->ptr->array = GG->ai->array;
  GG->ai->array = temp;

  GetDP_End ;
} 


/* ------------------------------------------------------------------------ */
/*  public functions                                                        */
/* ------------------------------------------------------------------------ */

void InitGraph (int NbLines, gGraph *G){
  int i, j=0;

  GetDP_Begin("InitGraph");

  G->ai   = List_Create (NbLines, NbLines, sizeof(int));
  G->ptr  = List_Create (NbLines, NbLines, sizeof(int));
  G->jptr = List_Create (NbLines+1, NbLines, sizeof(int)); 
  /* '+1' indispensable: csr_format ecrit 'nnz+1' dans jptr[NbLine] */
  for(i=0; i<NbLines; i++) List_Add (G->jptr, &j);

  GetDP_End ;
}

/* attention a la transposition ! */

void AddEdgeInGraph (gGraph *G, int ic, int il){
  int     *ai, *pp, n, iptr, iptr2, jptr, *ptr, zero = 0;

  GetDP_Begin("AddEdgeInGraph");

  il--;
  pp  = (int*) G->jptr->array;
  ptr = (int*) G->ptr->array;
  ai  = (int*) G->ai->array;
  
  iptr = pp[il];
  iptr2 = iptr-1;
  
  while(iptr>0){
    iptr2 = iptr-1;
    jptr = ai[iptr2];
    if(jptr == ic){
      GetDP_End;
    }
    iptr = ptr[iptr2];
  }
  
  List_Add (G->ai, &ic);
  List_Add (G->ptr, &zero);
  
  /* Les pointeurs ont pu etre modifies s'il y a eu une reallocation dans List_Add */
  
  ptr = (int*) G->ptr->array;
  ai  = (int*) G->ai->array;
  
  n = List_Nbr(G->ai);
  if(!pp[il]) pp[il] = n;
  else ptr[iptr2] = n;

  GetDP_End ;
}


#ifdef _METIS

EXTERN_C_BEGIN
#include "metis.h"
EXTERN_C_END

void PartitionGraph(struct DofData * DofData_P, int NbPartition){

  int  i;
  int  n9, wgtflag9, numflag9, options9[5];
  int  edgecut9;
  int  *part_P, *cptr_P, *start_P;
  /*  int  kd, kf, kk, cptr, options8[8] ; 
  int  *ia, *ja, *ia_N, *ja_N, trente=30, zero=0, trenteetun=31, trentedeux=32; */

  idxtype *xadj9, *adjncy9, *part9, *perm9, *iperm9;
  struct Dof  * Dof_P ;

  GetDP_Begin("PartitionGraph");

  Graph_csr_format (&DofData_P->Graph, List_Nbr(DofData_P->Graph.jptr));
  Graph_restore_format (&DofData_P->Graph);
  n9 = List_Nbr(DofData_P->Graph.jptr);

  /*
    ia = (int*) DofData_P->Graph.jptr->array;
    ja = (int*) DofData_P->Graph.ai->array;  
    psplot_(&n9, ja, ia, &trente, &zero);
  */

  xadj9 = (idxtype*) DofData_P->Graph.jptr->array;
  adjncy9 = (idxtype*) DofData_P->Graph.ai->array;  
  numflag9 = 1;
  perm9 =  (idxtype*) Malloc( n9 * sizeof(idxtype));
  iperm9 = (idxtype*) Malloc( n9 * sizeof(idxtype));

  /* si Flag_PAR = 1, on n'arrive meme pas jusqu'ici car if (Flag_PAR > 1) dans SolvingAnalyse
    if ( NbPartition == 1 ) {
    options8[0] = 0 ;
    METIS_NodeND( &n9, xadj9, adjncy9, &numflag9, options8, perm9, iperm9);
    Msg(PETSC, "METIS Renumbering done") ;   
    DofData_P->NbrPart = NbPartition ;
    DofData_P->Part[0] = 1  ;
    DofData_P->Part[1] = DofData_P->NbrDof+1 ;
    }
    else {
  */

    wgtflag9 = 0;
    options9[0] = 0;
    part9 = (idxtype*) Malloc( n9 * sizeof(idxtype));
    METIS_PartGraphRecursive( &n9, xadj9, adjncy9, NULL, NULL, 
			      &wgtflag9, &numflag9, &NbPartition, options9, &edgecut9, part9);
    Msg(PETSC, "METIS Partitionning done. Edgecut : %d ", edgecut9) ;
    Free(adjncy9);
    part_P  = (int*) Malloc( (NbPartition) * sizeof(int));
    cptr_P  = (int*) Malloc( (NbPartition) * sizeof(int));
    for ( i = 1 ; i <= NbPartition ; i++ ) {
      part_P[i-1] = 0; /* Taille de la partition */
      cptr_P[i-1] = 0;
    }
    for ( i = 1 ; i <= n9 ; i++ ) {
      part_P[part9[i-1]-1]++;
      iperm9[i-1] = 0;
    }
    start_P = (int*) Malloc( (NbPartition) * sizeof(int));
    start_P[0] = 0;
    for ( i = 2 ; i <= NbPartition ; i++ ) start_P[i-1] = start_P[i-1-1]+part_P[i-1-1];
    for ( i = 1 ; i <= n9 ; i++ ) {
      cptr_P[part9[i-1]-1]++;
      iperm9[i-1] = start_P[part9[i-1]-1]+cptr_P[part9[i-1]-1];
      perm9[iperm9[i-1]-1] = i;
    }
    Free(part9);
    Free(cptr_P);
    DofData_P->NbrPart = NbPartition ;
    for (i=1 ; i <= NbPartition ; i++) {
      DofData_P->Part[i-1] = start_P[i-1]+1  ;
      Msg(PETSC, "Length Part %d = %d ",i,part_P[i-1]);
    }
    DofData_P->Part[NbPartition] = DofData_P->NbrDof+1 ;
    Free(part_P);
    Free(start_P);
    /* 
  }
    */

  /* Si on veut imprimer le masque de la matrice, il faut retrier le graphe ...

     ia_N = (int*) Malloc( (n9+1) * sizeof(int));
     ja_N = (int*) Malloc( (List_Nbr(DofData_P->Graph.ai)) * sizeof(int));
     cptr = 1 ;
     for (i = 1 ; i <= n9 ; i++) {
       ia_N[i-1] = cptr;
       kd = ia[perm9[i-1]-1];
       kf = ia[perm9[i-1]+1-1]-1;
       for (kk = 1 ; kk <= (kf-kd+1) ; kk++) {
         if (NbPartition == 1 ) ja_N[cptr+kk-1-1] = iperm9[ja[kd+kk-1-1]-1];
         else  ja_N[cptr+kk-1-1] = ja[kd+kk-1-1];
       }
       cptr = cptr+kf-kd+1;
     }
     ia_N[i-1] = cptr;
     psplot_(&n9, ja_N, ia_N, &trenteetun, &zero); 
  */
 
  for (i = 0 ; i < List_Nbr(DofData_P->DofList) ; i++) {
    Dof_P=(struct Dof *) List_Pointer(DofData_P->DofList,i);
    switch (Dof_P->Type) {
    case DOF_UNKNOWN : 
      Dof_P->Case.Unknown.NumDof = iperm9[Dof_P->Case.Unknown.NumDof-1];
      break;
    case DOF_FIXED :
    case DOF_FIXEDWITHASSOCIATE :
      break;
    default :
      Msg(ERROR,"Strange stuff in Partitioning");
      break;
    }
  }
  for(i = 1 ; i<=DofData_P->NbrDof ; i++){
    DofData_P->Nnz[i-1] = xadj9[perm9[i-1]-1+1] - xadj9[perm9[i-1]-1] + 1 ;
  }
  Free(perm9);
  Free(iperm9);
  Free(xadj9);
  /* free le reste */

  GetDP_End ;
}


#else

void PartitionGraph(struct DofData * DofData_P, int NbPartition){

  GetDP_Begin("PartitionGraph");

  Msg(ERROR, "Impossible to partition (GetDP was not compiled with -D_METIS)");

  GetDP_End ;
}

#endif

