#define RCSID "$Id: GeoData.c,v 1.22 2003-03-18 00:55:27 geuzaine Exp $"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "GetDP.h"
#include "GeoData.h"
#include "Data_Passive.h"
#include "Data_Element.h"
#include "Numeric.h"
#include "Magic.h"

extern double Flag_ORDER ;

FILE  * File_GEO ;

struct GeoData  * CurrentGeoData ;


/* ------------------------------------------------------------------------ */
/*  G e o _ A d d G e o D a t a                                             */
/* ------------------------------------------------------------------------ */

int  Geo_AddGeoData(List_T * GeoData_L,
		    char * Name_MshFile, char * Name_DefaultMshFile,
		    char * Name_AdaptFile, char * Name_DefaultAdaptFile) {

  struct GeoData  GeoData_S ;
  int  i ;

  int  fcmp_GeoData_Name(const void *a, const void *b) ;

  GetDP_Begin("Geo_AddGeoData");

  if (!Name_MshFile)  Name_MshFile = Name_DefaultMshFile ;

  if ((i = List_ISearchSeq(GeoData_L, Name_MshFile, fcmp_GeoData_Name)) < 0) {
    Msg(LOADING,"Geometric data '%s'", Name_MshFile) ;
    i = List_Nbr(GeoData_L) ;
    Geo_InitGeoData(&GeoData_S, i, Name_MshFile) ;
    Geo_OpenFile(Name_MshFile, "r") ;
    Geo_ReadFile(&GeoData_S) ;
    Geo_CloseFile() ;

    if (!Name_AdaptFile) Name_AdaptFile = Name_DefaultAdaptFile ;
    if (Name_AdaptFile) {
      Msg(LOADING,"Adaptation data '%s'", Name_AdaptFile) ;
      Geo_OpenFile(Name_AdaptFile, "r") ;
      Geo_SetCurrentGeoData(&GeoData_S) ;
      Geo_ReadFileAdapt(&GeoData_S) ;
      Geo_CloseFile() ;
    }
    List_Add(GeoData_L, &GeoData_S) ;
  }

  GetDP_Return(i) ;
}

int  fcmp_GeoData_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct GeoData *)b)->Name ) ) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ I n i t G e o D a t a                                           */
/* ------------------------------------------------------------------------ */

void  Geo_InitGeoData(struct GeoData * GeoData_P, int Num, char * Name) {

  GetDP_Begin("Geo_InitGeoData");

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

  GeoData_P->H = GeoData_P->P = NULL ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ S e t C u r r e n t G e o D a t a B a s e                       */
/* ------------------------------------------------------------------------ */

void  Geo_SetCurrentGeoData(struct GeoData * GeoData_P) {

  GetDP_Begin("Geo_SetCurrentGeoData");

  CurrentGeoData = GeoData_P ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ O p e n F i l e                                                 */
/* ------------------------------------------------------------------------ */

void  Geo_OpenFile(char * Name, char * Mode) {

  GetDP_Begin("Geo_OpenFile");

  File_GEO = fopen(Name, Mode) ;

  if (!File_GEO) Msg(ERROR, "Unable to open file '%s'", Name);

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ C l o s e F i l e                                               */
/* ------------------------------------------------------------------------ */

void  Geo_CloseFile(void) {

  GetDP_Begin("Geo_CloseFile");
  
  fclose(File_GEO) ;

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ R e a d F i l e                                                 */
/* ------------------------------------------------------------------------ */

int Geo_GetElementType(int Format, int Type){

  GetDP_Begin("Geo_GetElementType");

  switch(Format){
  case FORMAT_GMSH :
    switch(Type){
    case 15 : GetDP_Return(POINT) ;
    case 1  : GetDP_Return(LINE) ;
    case 2  : GetDP_Return(TRIANGLE) ;
    case 3  : GetDP_Return(QUADRANGLE) ;
    case 4  : GetDP_Return(TETRAHEDRON) ;      
    case 5  : GetDP_Return(HEXAHEDRON) ;
    case 6  : GetDP_Return(PRISM) ;
    case 7  : GetDP_Return(PYRAMID) ;
    case 8  : GetDP_Return(LINE_2) ;
    case 9  : GetDP_Return(TRIANGLE_2) ;
    case 10 : GetDP_Return(QUADRANGLE_2) ;
    case 11 : GetDP_Return(TETRAHEDRON_2) ;      
    case 12 : GetDP_Return(HEXAHEDRON_2) ;
    case 13 : GetDP_Return(PRISM_2) ;
    case 14 : GetDP_Return(PYRAMID_2) ;
    default : Msg(ERROR, "Unkown type of Element in Gmsh format") ; GetDP_Return(-1) ;
    }
    break ;
  default :
    Msg(ERROR, "Unkown mesh format") ;
    GetDP_Return(-1) ;
  }

}


int Geo_GetElementTypeInv(int Format, int Type){

  GetDP_Begin("Geo_GetElementTypeInv");

  switch(Format){
  case FORMAT_GMSH :
    switch(Type){
    case POINT         : GetDP_Return(15) ;
    case LINE          : GetDP_Return(1) ;
    case TRIANGLE      : GetDP_Return(2) ;
    case QUADRANGLE    : GetDP_Return(3) ;
    case TETRAHEDRON   : GetDP_Return(4) ;      
    case HEXAHEDRON    : GetDP_Return(5) ;
    case PRISM         : GetDP_Return(6) ;
    case PYRAMID       : GetDP_Return(7) ;
    case LINE_2        : GetDP_Return(8) ;
    case TRIANGLE_2    : GetDP_Return(9) ;
    case QUADRANGLE_2  : GetDP_Return(10) ;
    case TETRAHEDRON_2 : GetDP_Return(11) ;      
    case HEXAHEDRON_2  : GetDP_Return(12) ;
    case PRISM_2       : GetDP_Return(13) ;
    case PYRAMID_2     : GetDP_Return(14) ;
    default : Msg(ERROR, "Unkown type of Element in Gmsh format") ; GetDP_Return(-1) ;
    }
    break ;
  default :
    Msg(ERROR, "Unkown mesh format") ;
    GetDP_Return(-1) ;
  }

}


void  Geo_SaveMesh(struct GeoData * GeoData_P, List_T * InitialList, char * FileName) {

  FILE * file;
  struct Geo_Node     Geo_Node ;
  struct Geo_Node   * Geo_Node_P ;
  struct Geo_Element  Geo_Element ;
  struct GeoData GeoData ;
  int i, j, Type, iDummy=0;
  int  fcmp_int(const void * a, const void * b);

  GetDP_Begin("Geo_SaveMesh");

  GeoData.Nodes    = List_Create(1000, 1000, sizeof(struct Geo_Node)) ;
  GeoData.Elements = List_Create(1000, 1000, sizeof(struct Geo_Node)) ;

  for (i = 0 ; i < List_Nbr(GeoData_P->Elements) ; i++) {
    List_Read(GeoData_P->Elements, i, &Geo_Element) ;
    if (List_Search(InitialList, &Geo_Element.Region, fcmp_int) ) {
      List_Add(GeoData.Elements, &Geo_Element) ;
      for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
	if (!List_Search(GeoData.Nodes, 
	 		 Geo_Node_P = Geo_GetGeoNodeOfNum(Geo_Element.NumNodes[j]), fcmp_Nod) ) 
	  List_Add(GeoData.Nodes, Geo_Node_P) ;
    }
  }
 
  file = fopen(FileName,"w");
  Msg(INFO,"Saving mesh in file \"%s\" (%d nodes, %d elements)", 
      FileName, List_Nbr(GeoData.Nodes), List_Nbr(GeoData.Elements));

  fprintf(file, "$NOD\n%d\n", List_Nbr(GeoData.Nodes));

  for (i = 0 ; i < List_Nbr(GeoData.Nodes) ; i++) {
    List_Read(GeoData.Nodes, i, &Geo_Node) ;
    fprintf(file, "%d %.16g %.16g %.16g\n",
	   Geo_Node.Num, Geo_Node.x, Geo_Node.y, Geo_Node.z) ;
  }

  fprintf(file, "$ENDNOD\n$ELM\n%d\n", List_Nbr(GeoData.Elements));

  for (i = 0 ; i < List_Nbr(GeoData.Elements) ; i++) {
    List_Read(GeoData.Elements, i, &Geo_Element) ;
    Type = Geo_GetElementTypeInv(FORMAT_GMSH, Geo_Element.Type) ;
    fprintf(file, "%d %d %d %d %d ",
	    Geo_Element.Num, Type, Geo_Element.Region,
	    iDummy, Geo_Element.NbrNodes) ;
    for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
      fprintf(file, "%d ", Geo_Element.NumNodes[j]) ;
    fprintf(file, "\n") ;
  }
    
  fprintf(file, "$ENDELM\n");

  fclose(file);
  List_Delete(GeoData.Nodes);
  List_Delete(GeoData.Elements);
  GetDP_End ;
}


void  Geo_ReadFile(struct GeoData * GeoData_P) {

  int                 Nbr, i, j, Type, iDummy ;
  struct Geo_Node     Geo_Node ;
  struct Geo_Element  Geo_Element ;
  char                String[MAX_STRING_LENGTH] ;

  GetDP_Begin("Geo_ReadFile");

  while (1) {

    do { 
      fgets(String, MAX_STRING_LENGTH, File_GEO) ; 
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
	if(!i){
	  GeoData_P->Xmin = GeoData_P->Xmax = Geo_Node.x;
	  GeoData_P->Ymin = GeoData_P->Ymax = Geo_Node.y;
	  GeoData_P->Zmin = GeoData_P->Zmax = Geo_Node.z; 
	}
	else{
	  GeoData_P->Xmin = MIN(GeoData_P->Xmin, Geo_Node.x);
	  GeoData_P->Xmax = MAX(GeoData_P->Xmax, Geo_Node.x);
	  GeoData_P->Ymin = MIN(GeoData_P->Ymin, Geo_Node.y);
	  GeoData_P->Ymax = MAX(GeoData_P->Ymax, Geo_Node.y);
	  GeoData_P->Zmin = MIN(GeoData_P->Zmin, Geo_Node.z); 
	  GeoData_P->Zmax = MAX(GeoData_P->Zmax, Geo_Node.z); 
	}
      }

      if(GeoData_P->Xmin != GeoData_P->Xmax && 
	 GeoData_P->Ymin != GeoData_P->Ymax && 
	 GeoData_P->Zmin != GeoData_P->Zmax)
	GeoData_P->Dimension = _3D;
      else if(GeoData_P->Xmin != GeoData_P->Xmax && GeoData_P->Ymin != GeoData_P->Ymax)
	GeoData_P->Dimension = _2D;
      else if(GeoData_P->Xmin != GeoData_P->Xmax && GeoData_P->Zmin != GeoData_P->Zmax)
	GeoData_P->Dimension = _2D;
      else if(GeoData_P->Ymin != GeoData_P->Ymax && GeoData_P->Zmin != GeoData_P->Zmax)
	GeoData_P->Dimension = _2D;
      else if(GeoData_P->Xmin != GeoData_P->Xmax)
	GeoData_P->Dimension = _1D;
      else if(GeoData_P->Ymin != GeoData_P->Ymax)
	GeoData_P->Dimension = _1D;
      else if(GeoData_P->Zmin != GeoData_P->Zmax)
	GeoData_P->Dimension = _1D;
      else
	GeoData_P->Dimension = _0D;
      
      GeoData_P->CharacteristicLength = 
	sqrt(SQU(GeoData_P->Xmax - GeoData_P->Xmin) + 
	     SQU(GeoData_P->Ymax - GeoData_P->Ymin) + 
	     SQU(GeoData_P->Zmax - GeoData_P->Zmin));
      if(!GeoData_P->CharacteristicLength) 
	GeoData_P->CharacteristicLength = 1.;
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
	       &Geo_Element.Num, &Type, &Geo_Element.Region,
	       &iDummy, &Geo_Element.NbrNodes) ;

	Geo_Element.FMMGroup = Geo_Element.Region ;
	Geo_Element.Type = Geo_GetElementType(FORMAT_GMSH, Type) ;
	Geo_Element.NumNodes = (int *)Malloc(Geo_Element.NbrNodes * sizeof(int)) ;
	for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
	  fscanf(File_GEO, "%d", &Geo_Element.NumNodes[j]) ;

	List_Add(GeoData_P->Elements, &Geo_Element) ;
      }

      List_Sort(GeoData_P->Elements, fcmp_Elm) ;
      
    }

    do {
      fgets(String, MAX_STRING_LENGTH, File_GEO) ;
      if (feof(File_GEO)) Msg(ERROR, "Prematured end of file");
    } while (String[0] != '$') ;

  }   /* while 1 ... */

  GetDP_End ;
}


void  Geo_ReadFileAdapt(struct GeoData * GeoData_P) {

  struct Geo_Element Geo_Element, * Geo_Element_P ;
  int        Nbr, i, Index_GeoElement ;
  double     E, H, P, Max_Order = -1.0 ;
  char       String[MAX_STRING_LENGTH] ;

  GetDP_Begin("Geo_ReadFileAdapt");

  Nbr = List_Nbr(GeoData_P->Elements) ;

  if(!GeoData_P->H){
    GeoData_P->H = (double*)Malloc((Nbr+2)*sizeof(double)) ;
    for (i = 0 ; i < Nbr ; i++) GeoData_P->H[i+1] = -1.0 ;
  }
  if(!GeoData_P->P){
    GeoData_P->P = (double*)Malloc((Nbr+2)*sizeof(double)) ;
    for (i = 0 ; i < Nbr ; i++) GeoData_P->P[i+1] = -1.0 ;
  }

  while (1) {

    do { 
      fgets(String, MAX_STRING_LENGTH, File_GEO) ; 
      if (feof(File_GEO))  break ;
    } while (String[0] != '$') ;  
    
    if (feof(File_GEO))  break ;

    if (!strncmp(&String[1], "Adapt", 5)) {
      fscanf(File_GEO, "%d", &Nbr) ;
      for (i = 0 ; i < Nbr ; i++) {
	fscanf(File_GEO, "%d %lf %lf %lf", &Geo_Element.Num, &E, &H, &P) ;
	if(!(Geo_Element_P = (struct Geo_Element *)
	     List_PQuery(GeoData_P->Elements, &Geo_Element, fcmp_Elm)))
	  Msg(ERROR, "Element %d not found in database", Geo_Element.Num) ;
	Index_GeoElement = Geo_GetGeoElementIndex(Geo_Element_P) ;
	GeoData_P->H[Index_GeoElement+1] = H ;
	GeoData_P->P[Index_GeoElement+1] = P ;
	if(P > Max_Order) Max_Order = P ;
      }
    }

    do {
      fgets(String, MAX_STRING_LENGTH, File_GEO) ;
      if (feof(File_GEO)) Msg(ERROR, "Prematured end of file");
    } while (String[0] != '$') ;

  }   /* while 1 ... */

  if(Flag_ORDER < 0) Flag_ORDER = Max_Order ;
 
  Msg(INFO, "Maximum interpolation order = %g", Flag_ORDER) ;

  GetDP_End ;
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

  GetDP_Begin("Geo_GetNbrGeoElements");

  GetDP_Return(List_Nbr(CurrentGeoData->Elements)) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o E l e m e n t                                       */
/* ------------------------------------------------------------------------ */

struct Geo_Element  * Geo_GetGeoElement(int Index_Element) {

  GetDP_Begin("Geo_GetGeoElement");

  GetDP_Return((struct Geo_Element *)List_Pointer(CurrentGeoData->Elements, 
						  Index_Element)) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o E l e m e n t I n d e x                             */
/* ------------------------------------------------------------------------ */

int Geo_GetGeoElementIndex(struct Geo_Element * GeoElement) {

  GetDP_Begin("Geo_GetGeoElementIndex");

  GetDP_Return(GeoElement - 
	       (struct Geo_Element*)List_Pointer(CurrentGeoData->Elements, 0)) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o E l e m e n t O f N u m                             */
/* ------------------------------------------------------------------------ */

struct Geo_Element  * Geo_GetGeoElementOfNum(int Num_Element) {
  struct Geo_Element  elm ;

  GetDP_Begin("Geo_GetGeoElementOfNum");

  elm.Num = Num_Element ;

  GetDP_Return((struct Geo_Element*)List_PQuery(CurrentGeoData->Elements,
						&elm, fcmp_Elm)) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N b r G e o N o d e s                                     */
/* ------------------------------------------------------------------------ */

int  Geo_GetNbrGeoNodes(void) {

  GetDP_Begin("Geo_GetNbrGeoNodes");

  GetDP_Return(List_Nbr(CurrentGeoData->Nodes)) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o N o d e                                             */
/* ------------------------------------------------------------------------ */

struct Geo_Node  * Geo_GetGeoNode(int Index_Node) {

  GetDP_Begin("Geo_GetGeoNode");

  GetDP_Return((struct Geo_Node *)List_Pointer(CurrentGeoData->Nodes, 
					       Index_Node)) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o N o d e O f N u m                                   */
/* ------------------------------------------------------------------------ */

struct Geo_Node  * Geo_GetGeoNodeOfNum(int Num_Node) {
  struct Geo_Node  node ;

  GetDP_Begin("Geo_GetGeoNodeOfNum");

  node.Num = Num_Node ;

  GetDP_Return((struct Geo_Node*)List_PQuery(CurrentGeoData->Nodes,
					     &node, fcmp_Nod)) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N o d e s C o o r d i n a t e s                           */
/* ------------------------------------------------------------------------ */

void Geo_GetNodesCoordinates(int Nbr_Node, int * Num_Node,
			     double * x, double * y, double * z) {
  int    i ;
  struct Geo_Node  Geo_Node, * Geo_Node_P ;

  GetDP_Begin("Geo_GetNodesCoordinates");

  for (i = 0 ; i < Nbr_Node ; i++) {
    Geo_Node.Num = abs(Num_Node[i]) ;

    if(!(Geo_Node_P = (struct Geo_Node*)
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod)))
      Msg(ERROR, "Node %d does not exist", Geo_Node.Num) ;
    
    x[i] = Geo_Node_P->x ;  y[i] = Geo_Node_P->y ;  z[i] = Geo_Node_P->z ;
  }

  GetDP_End ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ S e t N o d e s C o o r d i n a t e s                           */
/* ------------------------------------------------------------------------ */

void Geo_SetNodesCoordinates(int Nbr_Node, int * Num_Node,
			     double * x, double * y, double * z) {
  int    i ;
  struct Geo_Node  Geo_Node, * Geo_Node_P ;

  GetDP_Begin("Geo_SetNodesCoordinates");

  for (i = 0 ; i < Nbr_Node ; i++) {
    Geo_Node.Num = abs(Num_Node[i]) ;

    if(!(Geo_Node_P = (struct Geo_Node*)
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod)))
      Msg(ERROR, "Node %d does not exist", Geo_Node.Num) ;
    
    Geo_Node_P->x = x[i] ;  Geo_Node_P->y = y[i] ;  Geo_Node_P->z = z[i] ;
  }

  GetDP_End ;
}




