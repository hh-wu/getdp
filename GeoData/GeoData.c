#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "GeoData.h"
#include "Data_Element.h"
#include "ualloc.h"

FILE  * File_GEO ;

struct GeoData  * CurrentGeoData ;


/* ------------------------------------------------------------------------ */
/*  G e o _ A d d G e o D a t a                                             */
/* ------------------------------------------------------------------------ */

int  Geo_AddGeoData(List_T * GeoData_L,
		    char * Name_MshFile, char * Name_DefaultMshFile) {

  struct GeoData  GeoData_S, * GeoData_P ;
  int  i ;

  int  fcmp_GeoData_Name(const void *a, const void *b) ;


  if (!Name_MshFile)  Name_MshFile = Name_DefaultMshFile ;

  if ((i = List_ISearchSeq(GeoData_L, Name_MshFile, fcmp_GeoData_Name)) < 0) {
    Msg(LOADING,"Geometric Data '%s'", Name_MshFile) ;
    i = List_Nbr(GeoData_L) ;
    Geo_InitGeoData(&GeoData_S, i, Name_MshFile) ;
    Geo_OpenFile(Name_MshFile, "r") ;
    Geo_ReadFile(&GeoData_S) ;
    Geo_CloseFile() ;
    List_Add(GeoData_L, &GeoData_S) ;
  }

  return (i) ;
}

int  fcmp_GeoData_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct GeoData *)b)->Name ) ) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ I n i t G e o D a t a                                           */
/* ------------------------------------------------------------------------ */

void  Geo_InitGeoData(struct GeoData * GeoData_P, int Num, char * Name) {

  GeoData_P->Num  = Num ;
  GeoData_P->Name = Name ;

  GeoData_P->Nodes = NULL ;
  GeoData_P->Elements = NULL ;

  GeoData_P->NbrElementsWithEdges = GeoData_P->NbrElementsWithFacets = 0 ;
  GeoData_P->NumCurrentEdge = GeoData_P->NumCurrentFacet = 0 ;
  GeoData_P->EdgesXNodes =
    Tree_Create(sizeof(struct Entity2XEntity1), fcmp_E2XE1) ;
  GeoData_P->FacetsXEdges =
    Tree_Create(sizeof(struct Entity2XEntity1), fcmp_E2XE1) ;

  GeoData_P->NodesXElements = NULL ;
  GeoData_P->Normals =
    Tree_Create(sizeof(struct EntityXVector), fcmp_EXVector) ;

  GeoData_P->GroupForPRE = NULL ;

  GeoData_P->Grid.Init = 0 ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ S e t C u r r e n t G e o D a t a B a s e                       */
/* ------------------------------------------------------------------------ */

void  Geo_SetCurrentGeoData(struct GeoData * GeoData_P) {
  CurrentGeoData = GeoData_P ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ O p e n F i l e                                                 */
/* ------------------------------------------------------------------------ */

void  Geo_OpenFile(char * Name, char * Mode) {

  File_GEO = fopen(Name, Mode) ;

  if (!File_GEO) Msg(ERROR, "Unable to Open File '%s'", Name);

}


/* ------------------------------------------------------------------------ */
/*  G e o _ C l o s e F i l e                                               */
/* ------------------------------------------------------------------------ */

void  Geo_CloseFile(void) {
  fclose(File_GEO) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ R e a d F i l e                                                 */
/* ------------------------------------------------------------------------ */

void  Geo_ReadFile(struct GeoData * GeoData_P) {

  int                 Nbr, i, j, iDummy ;
  struct Geo_Node     Geo_Node ;
  struct Geo_Element  Geo_Element ;
  char                String[256] ;

  while (1) {

    do { 
      fgets(String, 256, File_GEO) ; 
      if (feof(File_GEO))  break ;
    } while (String[0] != '$') ;  
    
    if (feof(File_GEO))  break ;

    /*  N O E  */

    if (!strncmp(&String[1], "NO", 2)) { /* $NOE or $NOD */

      fscanf(File_GEO, "%d", &Nbr) ;
      if (GeoData_P->Nodes == NULL)
	GeoData_P->Nodes = List_Create(Nbr, 1000, sizeof(struct Geo_Node)) ;

      for (i = 0 ; i < Nbr ; i++) {
	fscanf(File_GEO, "%d %lf %lf %lf",
	       &Geo_Node.Num, &Geo_Node.x, &Geo_Node.y, &Geo_Node.z) ;
	List_Add(GeoData_P->Nodes, &Geo_Node) ;
      }
    }

    /*  E L M  */

    else if (!strncmp(&String[1], "ELM", 3)) {

      fscanf(File_GEO, "%d", &Nbr) ;
      if (GeoData_P->Elements == NULL)
	GeoData_P->Elements =
	  List_Create(Nbr, 1000, sizeof(struct Geo_Element)) ;

      Geo_Element.NbrEdges = Geo_Element.NbrFacets = 0 ;
      Geo_Element.NumEdges = Geo_Element.NumFacets = NULL ;

      for (i = 0 ; i < Nbr ; i++) {
	fscanf(File_GEO, "%d %d %d %d %d",
	       &Geo_Element.Num, &Geo_Element.Type, &Geo_Element.Region,
	       &iDummy, &Geo_Element.NbrNodes) ;
	Geo_Element.NumNodes = (int *)Malloc(Geo_Element.NbrNodes * sizeof(int)) ;
	for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
	  fscanf(File_GEO, "%d", &Geo_Element.NumNodes[j]) ;

	List_Add(GeoData_P->Elements, &Geo_Element) ;
      }

      List_Tri(GeoData_P->Elements, fcmp_Elm) ;

    }

    do {
      fgets(String, 256, File_GEO) ;
      if (feof(File_GEO)) Msg(ERROR, "Prematured End of File");
    } while (String[0] != '$') ;

  }   /* while 1 ... */

}



/* ------------------------------------------------------------------------ */
/*  f c m p _ E l m   &   f c m p _ N o d                                   */
/* ------------------------------------------------------------------------ */

int  fcmp_Elm(const void * a, const void * b) {
  return  ((struct Geo_Element *)a)->Num - ((struct Geo_Element *)b)->Num ;
}

int  fcmp_Nod(const void * a, const void * b) {
  return  ((struct Geo_Node *)a)->Num - ((struct Geo_Node *)b)->Num ;
}



/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N b r G e o E l e m e n t s                               */
/* ------------------------------------------------------------------------ */

int  Geo_GetNbrGeoElements(void) {
  return  List_Nbr(CurrentGeoData->Elements) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o E l e m e n t                                       */
/* ------------------------------------------------------------------------ */

struct Geo_Element  * Geo_GetGeoElement(int Index_Element) {
  return
    (struct Geo_Element *)List_Pointer(CurrentGeoData->Elements, Index_Element) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o E l e m e n t O f N u m                             */
/* ------------------------------------------------------------------------ */

struct Geo_Element  * Geo_GetGeoElementOfNum(int Num_Element) {
  struct Geo_Element  elm ;

  elm.Num = Num_Element ;
  return (struct Geo_Element*)List_PQuery(CurrentGeoData->Elements, &elm, fcmp_Elm) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N b r G e o N o d e s                                     */
/* ------------------------------------------------------------------------ */

int  Geo_GetNbrGeoNodes(void) {
  return  List_Nbr(CurrentGeoData->Nodes) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o N o d e                                             */
/* ------------------------------------------------------------------------ */

struct Geo_Node  * Geo_GetGeoNode(int Index_Node) {
  return
    (struct Geo_Node *)List_Pointer(CurrentGeoData->Nodes, Index_Node) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o N o d e O f N u m                                   */
/* ------------------------------------------------------------------------ */

struct Geo_Node  * Geo_GetGeoNodeOfNum(int Num_Node) {
  struct Geo_Node  node ;

  node.Num = Num_Node ;
  return (struct Geo_Node*)List_PQuery(CurrentGeoData->Nodes, &node, fcmp_Nod) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N o d e s C o o r d i n a t e s                           */
/* ------------------------------------------------------------------------ */

void Geo_GetNodesCoordinates(int Nbr_Node, int * Num_Node,
			     double * x, double * y, double * z) {
  int    i ;
  struct Geo_Node  Geo_Node, * Geo_Node_P ;

  for (i = 0 ; i < Nbr_Node ; i++) {
    Geo_Node.Num = abs(Num_Node[i]) ;

    if(!(Geo_Node_P = (struct Geo_Node*)
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod)))
      Msg(ERROR, "Node %d does not exist", Geo_Node.Num) ;
    
    x[i] = Geo_Node_P->x ;  y[i] = Geo_Node_P->y ;  z[i] = Geo_Node_P->z ;
  }
}


/* ------------------------------------------------------------------------ */
/*  G e o _ S e t N o d e s C o o r d i n a t e s                           */
/* ------------------------------------------------------------------------ */

void Geo_SetNodesCoordinates(int Nbr_Node, int * Num_Node,
			     double * x, double * y, double * z) {
  int    i ;
  struct Geo_Node  Geo_Node, * Geo_Node_P ;

  for (i = 0 ; i < Nbr_Node ; i++) {
    Geo_Node.Num = abs(Num_Node[i]) ;

    if(!(Geo_Node_P = (struct Geo_Node*)
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod)))
      Msg(ERROR, "Node %d does not exist", Geo_Node.Num) ;
    
    Geo_Node_P->x = x[i] ;  Geo_Node_P->y = y[i] ;  Geo_Node_P->z = z[i] ;
  }
}
