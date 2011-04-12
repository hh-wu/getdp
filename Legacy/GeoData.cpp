// GetDP - Copyright (C) 1997-2011 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <string.h>
#include <math.h>
#include "GeoData.h"
#include "ProData.h"
#include "MallocUtils.h"
#include "Message.h"

#define SQU(a)     ((a)*(a)) 

extern double Flag_ORDER ;

FILE  * File_GEO ;

struct GeoData  * CurrentGeoData ;

static void swapBytes(char *array, int size, int n)
{
  int i, c;
  
  char *x = (char *)Malloc(size * sizeof(char)) ;
  for(i = 0; i < n; i++) {
    char *a = &array[i * size];
    memcpy(x, a, size);
    for(c = 0; c < size; c++)
      a[size - 1 - c] = x[c];
  }
  Free(x);
}

/* ------------------------------------------------------------------------ */
/*  G e o _ A d d G e o D a t a                                             */
/* ------------------------------------------------------------------------ */

int Geo_AddGeoData(List_T * GeoData_L,
		   char * Name_MshFile, char * Name_DefaultMshFile,
		   char * Name_AdaptFile, char * Name_DefaultAdaptFile)
{
  struct GeoData  GeoData_S ;
  int  i ;

  if (!Name_MshFile)  Name_MshFile = Name_DefaultMshFile ;

  if ((i = List_ISearchSeq(GeoData_L, Name_MshFile, fcmp_GeoData_Name)) < 0) {
    Msg::Info("Loading Geometric data '%s'", Name_MshFile) ;
    i = List_Nbr(GeoData_L) ;
    Geo_InitGeoData(&GeoData_S, i, Name_MshFile) ;
    Geo_OpenFile(Name_MshFile, "r") ;
    Geo_ReadFile(&GeoData_S) ;
    Geo_CloseFile() ;

    if (!Name_AdaptFile) Name_AdaptFile = Name_DefaultAdaptFile ;
    if (Name_AdaptFile) {
      Msg::Info("Loading Adaptation data '%s'", Name_AdaptFile) ;
      Geo_OpenFile(Name_AdaptFile, "r") ;
      Geo_SetCurrentGeoData(&GeoData_S) ;
      Geo_ReadFileAdapt(&GeoData_S) ;
      Geo_CloseFile() ;
    }
    List_Add(GeoData_L, &GeoData_S) ;
  }

  return(i) ;
}

int fcmp_GeoData_Name(const void * a, const void * b)
{
  return ( strcmp((char *)a, ((struct GeoData *)b)->Name ) ) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ I n i t G e o D a t a                                           */
/* ------------------------------------------------------------------------ */

void Geo_InitGeoData(struct GeoData * GeoData_P, int Num, char * Name)
{
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
}

/* ------------------------------------------------------------------------ */
/*  G e o _ S e t C u r r e n t G e o D a t a B a s e                       */
/* ------------------------------------------------------------------------ */

void Geo_SetCurrentGeoData(struct GeoData * GeoData_P)
{
  CurrentGeoData = GeoData_P ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ O p e n F i l e                                                 */
/* ------------------------------------------------------------------------ */

void Geo_OpenFile(char * Name, const char * Mode)
{
  File_GEO = fopen(Name, Mode) ;

  if (!File_GEO) Msg::Error("Unable to open file '%s'", Name);
}

/* ------------------------------------------------------------------------ */
/*  G e o _ C l o s e F i l e                                               */
/* ------------------------------------------------------------------------ */

void Geo_CloseFile(void)
{
  fclose(File_GEO) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ R e a d F i l e                                                 */
/* ------------------------------------------------------------------------ */

int Geo_GetElementType(int Format, int Type)
{
  switch(Format){
  case FORMAT_GMSH :
    switch(Type){
    case 15 : return(POINT) ;
    case 1  : return(LINE) ;
    case 2  : return(TRIANGLE) ;
    case 3  : return(QUADRANGLE) ;
    case 4  : return(TETRAHEDRON) ;      
    case 5  : return(HEXAHEDRON) ;
    case 6  : return(PRISM) ;
    case 7  : return(PYRAMID) ;
    case 8  : return(LINE_2) ;
    case 9  : return(TRIANGLE_2) ;
    case 10 : return(QUADRANGLE_2) ;
    case 11 : return(TETRAHEDRON_2) ;      
    case 12 : return(HEXAHEDRON_2) ;
    case 13 : return(PRISM_2) ;
    case 14 : return(PYRAMID_2) ;
    case 16 : return(QUADRANGLE_2_8N) ;
    default : Msg::Error("Unkown type of Element in Gmsh format (%d)", 
			 FORMAT_GMSH) ; return(-1) ;
    }
    break ;
  default :
    Msg::Error("Unkown mesh format (%d)", Format) ;
    return(-1) ;
  }
}

int Geo_GetElementTypeInv(int Format, int Type)
{
  switch(Format){
  case FORMAT_GMSH :
    switch(Type){
    case POINT         : return(15) ;
    case LINE          : return(1) ;
    case TRIANGLE      : return(2) ;
    case QUADRANGLE    : return(3) ;
    case TETRAHEDRON   : return(4) ;      
    case HEXAHEDRON    : return(5) ;
    case PRISM         : return(6) ;
    case PYRAMID       : return(7) ;
    case LINE_2        : return(8) ;
    case TRIANGLE_2    : return(9) ;
    case QUADRANGLE_2  : return(10) ;
    case TETRAHEDRON_2 : return(11) ;      
    case HEXAHEDRON_2  : return(12) ;
    case PRISM_2       : return(13) ;
    case PYRAMID_2     : return(14) ;
    case QUADRANGLE_2_8N: return(16) ;
    default : Msg::Error("Unkown type of Element in Gmsh format") ; return(-1) ;
    }
    break ;
  default :
    Msg::Error("Unkown mesh format") ;
    return(-1) ;
  }

}

int Geo_GetNbNodesPerElement(int Type)
{
  switch(Type){
  case POINT         : return(1) ;
  case LINE          : return(2) ;
  case TRIANGLE      : return(3) ;
  case QUADRANGLE    : return(4) ;
  case TETRAHEDRON   : return(4) ;      
  case HEXAHEDRON    : return(8) ;
  case PRISM         : return(6) ;
  case PYRAMID       : return(5) ;
  case LINE_2        : return(3) ;
  case TRIANGLE_2    : return(6) ;
  case QUADRANGLE_2  : return(9) ;
  case TETRAHEDRON_2 : return(10) ;      
  case HEXAHEDRON_2  : return(20) ;
  case PRISM_2       : return(15) ;
  case PYRAMID_2     : return(13) ;
  case QUADRANGLE_2_8N: return(8) ;
  default : Msg::Error("Unkown type of Element") ; return(-1) ;
  }
}

void Geo_SaveMesh(struct GeoData * GeoData_P, List_T * InitialList, char * FileName)
{
  FILE * file;
  struct Geo_Node     Geo_Node ;
  struct Geo_Node   * Geo_Node_P ;
  struct Geo_Element  Geo_Element ;
  struct GeoData GeoData ;
  int i, j, Type, iDummy=0;
  int  fcmp_int(const void * a, const void * b);

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
  Msg::Info("Saving mesh in file \"%s\" (%d nodes, %d elements)", 
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
}

void Geo_ReadFile(struct GeoData * GeoData_P)
{
  int                 Nbr, i, j, Type, iDummy, Format, Size, NbTags ;
  double              Version = 1.0 ;
  struct Geo_Node     Geo_Node ;
  struct Geo_Element  Geo_Element ;
  char                String[256] ;
  int                 binary = 0, swap = 0;
  
  while (1) {

    do { 
      fgets(String, sizeof(String), File_GEO) ; 
      if (feof(File_GEO))  break ;
    } while (String[0] != '$') ;  
    
    if (feof(File_GEO))  break ;

    /*  F O R M A T  */

    if(!strncmp(&String[1], "MeshFormat", 10)) {

      fscanf(File_GEO, "%lf %d %d\n", &Version, &Format, &Size);
      if(Version < 2.0 || Version >= 3.0){
	Msg::Error("Unknown mesh file version (%g)", Version);
	return;
      }

      if(Format){
	binary = 1;
	Msg::Info("Mesh is in binary format");
	int one;
	if(fread(&one, sizeof(int), 1, File_GEO) != 1) return;
	if(one != 1){
	  swap = 1;
	  Msg::Info("Swapping bytes from binary file");
	}
      }
    }

    /*  N O D E S  */

    else if (!strncmp(&String[1], "NOE", 3) ||
	     !strncmp(&String[1], "NOD", 3) ||
	     !strncmp(&String[1], "Nodes", 5)) {

      fscanf(File_GEO, "%d", &Nbr) ;
      if(binary) {
	char c;
	if(fread(&c, sizeof(char), 1, File_GEO) != 1) return;
      }
      if (GeoData_P->Nodes == NULL)
	GeoData_P->Nodes = List_Create(Nbr, 1000, sizeof(struct Geo_Node)) ;

      for (i = 0 ; i < Nbr ; i++) {
	if (!binary){
	  fscanf(File_GEO, "%d %lf %lf %lf",
		 &Geo_Node.Num, &Geo_Node.x, &Geo_Node.y, &Geo_Node.z) ;
	} 
	else {
	  if(fread(&Geo_Node.Num, sizeof(int), 1, File_GEO) != 1) return;
	  if(swap) swapBytes((char*)&Geo_Node.Num, sizeof(int), 1);
	  double xyz[3];
	  if(fread(xyz, sizeof(double), 3, File_GEO) != 3) return;
	  if(swap) swapBytes((char*)xyz, sizeof(double), 3);
	  Geo_Node.x = xyz[0];
	  Geo_Node.y = xyz[1]; 
	  Geo_Node.z = xyz[2];
	}
	List_Add(GeoData_P->Nodes, &Geo_Node) ;
	if(!i){
	  GeoData_P->Xmin = GeoData_P->Xmax = Geo_Node.x;
	  GeoData_P->Ymin = GeoData_P->Ymax = Geo_Node.y;
	  GeoData_P->Zmin = GeoData_P->Zmax = Geo_Node.z; 
	}
	else{
	  GeoData_P->Xmin = std::min(GeoData_P->Xmin, Geo_Node.x);
	  GeoData_P->Xmax = std::max(GeoData_P->Xmax, Geo_Node.x);
	  GeoData_P->Ymin = std::min(GeoData_P->Ymin, Geo_Node.y);
	  GeoData_P->Ymax = std::max(GeoData_P->Ymax, Geo_Node.y);
	  GeoData_P->Zmin = std::min(GeoData_P->Zmin, Geo_Node.z); 
	  GeoData_P->Zmax = std::max(GeoData_P->Zmax, Geo_Node.z); 
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

    else if (!strncmp(&String[1], "ParametricNodes", 15)) {
      
      Msg::Error("Cannot read parametric nodes: please save mesh file with standard "
                 "nodes instead!");
      
    }

    /*  E L E M E N T S  */

    else if (!strncmp(&String[1], "ELM", 3) ||
	     !strncmp(&String[1], "Elements", 8)) {

      fscanf(File_GEO, "%d", &Nbr) ;
      if(binary) {
	char c;
	if(fread(&c, sizeof(char), 1, File_GEO) != 1) return;
      }

      if (GeoData_P->Elements == NULL)
	GeoData_P->Elements =
	  List_Create(Nbr, 1000, sizeof(struct Geo_Element)) ;

      Geo_Element.NbrEdges = Geo_Element.NbrFacets = 0 ;
      Geo_Element.NumEdges = Geo_Element.NumFacets = NULL ;

      if (!binary){
	for (i = 0 ; i < Nbr ; i++) {
	  if(Version == 1.0){
	    fscanf(File_GEO, "%d %d %d %d %d",
		   &Geo_Element.Num, &Type, &Geo_Element.Region,
		   &iDummy, &Geo_Element.NbrNodes) ;
	    Geo_Element.Type = Geo_GetElementType(FORMAT_GMSH, Type) ;
	  }
	  else{
	    fscanf(File_GEO, "%d %d %d", &Geo_Element.Num, &Type, &NbTags);
	    Geo_Element.Region = 1;
	    for(j = 0; j < NbTags; j++){
	      fscanf(File_GEO, "%d", &iDummy);
	      if(j == 0)
		Geo_Element.Region = iDummy;
	      /* ignore any other tags for now */
	    }
	    Geo_Element.Type = Geo_GetElementType(FORMAT_GMSH, Type) ;
	    Geo_Element.NbrNodes = Geo_GetNbNodesPerElement(Geo_Element.Type);
	  }
	  Geo_Element.NumNodes = (int *)Malloc(Geo_Element.NbrNodes * sizeof(int)) ;
	  for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
	    fscanf(File_GEO, "%d", &Geo_Element.NumNodes[j]) ;

	  List_Add(GeoData_P->Elements, &Geo_Element) ;
	}
      } 
      else {
	int numElementsPartial = 0;
	while(numElementsPartial < Nbr){
	  int header[3];
	  if(fread(header, sizeof(int), 3, File_GEO) != 3) return;
	  if(swap) swapBytes((char*)header, sizeof(int), 3);
	  Type = header[0];
	  int numElms = header[1];
	  int numTags = header[2];
	  Geo_Element.Type = Geo_GetElementType(FORMAT_GMSH, Type) ;
	  Geo_Element.NbrNodes = Geo_GetNbNodesPerElement(Geo_Element.Type);
	  unsigned int n = 1 + numTags + Geo_Element.NbrNodes;
	  int *data = (int *)Malloc(n * sizeof(int)) ;
	  for(i = 0; i < numElms; i++) {
	    if(fread(data, sizeof(int), n, File_GEO) != n) return;
	    if(swap) swapBytes((char*)data, sizeof(int), n);
	    Geo_Element.Num = data[0];
	    Geo_Element.Region = (numTags > 0) ? data[4 - numTags] : 0;
	    //int elementary = (numTags > 1) ? data[4 - numTags + 1] : 0;
	    Geo_Element.NumNodes = &data[numTags + 1];
	    Geo_Element.NumNodes = (int *)Malloc(Geo_Element.NbrNodes * sizeof(int)) ;
	    for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
	      Geo_Element.NumNodes[j] = data[numTags + 1 + j] ;

	    List_Add(GeoData_P->Elements, &Geo_Element) ;
	  }
	  Free(data);
	  numElementsPartial += numElms;
	}
      }
      
      List_Sort(GeoData_P->Elements, fcmp_Elm) ;
      
    }

    do {
      fgets(String, sizeof(String), File_GEO) ;
      if (feof(File_GEO)) Msg::Error("Prematured end of file");
    } while (String[0] != '$') ;

  }   /* while 1 ... */

}

void Geo_ReadFileAdapt(struct GeoData * GeoData_P)
{
  struct Geo_Element Geo_Element, * Geo_Element_P ;
  int        Nbr, i, Index_GeoElement ;
  double     E, H, P, Max_Order = -1.0 ;
  char       String[256] ;

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
      fgets(String, sizeof(String), File_GEO) ; 
      if (feof(File_GEO))  break ;
    } while (String[0] != '$') ;  
    
    if (feof(File_GEO))  break ;

    if (!strncmp(&String[1], "Adapt", 5)) {
      fscanf(File_GEO, "%d", &Nbr) ;
      for (i = 0 ; i < Nbr ; i++) {
	fscanf(File_GEO, "%d %lf %lf %lf", &Geo_Element.Num, &E, &H, &P) ;
	if(!(Geo_Element_P = (struct Geo_Element *)
	     List_PQuery(GeoData_P->Elements, &Geo_Element, fcmp_Elm)))
	  Msg::Error("Element %d not found in database", Geo_Element.Num) ;
	Index_GeoElement = Geo_GetGeoElementIndex(Geo_Element_P) ;
	GeoData_P->H[Index_GeoElement+1] = H ;
	GeoData_P->P[Index_GeoElement+1] = P ;
	if(P > Max_Order) Max_Order = P ;
      }
    }

    do {
      fgets(String, sizeof(String), File_GEO) ;
      if (feof(File_GEO)) Msg::Error("Prematured end of file");
    } while (String[0] != '$') ;

  }   /* while 1 ... */

  if(Flag_ORDER < 0) Flag_ORDER = Max_Order ;
 
  Msg::Info("Maximum interpolation order = %g", Flag_ORDER) ;
}

/* ------------------------------------------------------------------------ */
/*  f c m p _ E l m   &   f c m p _ N o d                                   */
/* ------------------------------------------------------------------------ */

int fcmp_Elm(const void * a, const void * b)
{
  return  ((struct Geo_Element *)a)->Num - ((struct Geo_Element *)b)->Num ;
}

int fcmp_Nod(const void * a, const void * b)
{
  return  ((struct Geo_Node *)a)->Num - ((struct Geo_Node *)b)->Num ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N b r G e o E l e m e n t s                               */
/* ------------------------------------------------------------------------ */

int Geo_GetNbrGeoElements(void)
{
  return(List_Nbr(CurrentGeoData->Elements)) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o E l e m e n t                                       */
/* ------------------------------------------------------------------------ */

struct Geo_Element *Geo_GetGeoElement(int Index_Element)
{
  return((struct Geo_Element *)List_Pointer(CurrentGeoData->Elements, 
						  Index_Element)) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o E l e m e n t I n d e x                             */
/* ------------------------------------------------------------------------ */

int Geo_GetGeoElementIndex(struct Geo_Element * GeoElement)
{
  return(GeoElement - 
	       (struct Geo_Element*)List_Pointer(CurrentGeoData->Elements, 0)) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o E l e m e n t O f N u m                             */
/* ------------------------------------------------------------------------ */

struct Geo_Element *Geo_GetGeoElementOfNum(int Num_Element)
{
  struct Geo_Element  elm ;

  elm.Num = Num_Element ;

  return((struct Geo_Element*)List_PQuery(CurrentGeoData->Elements,
						&elm, fcmp_Elm)) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N b r G e o N o d e s                                     */
/* ------------------------------------------------------------------------ */

int Geo_GetNbrGeoNodes(void){
  return(List_Nbr(CurrentGeoData->Nodes)) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o N o d e                                             */
/* ------------------------------------------------------------------------ */

struct Geo_Node *Geo_GetGeoNode(int Index_Node)
{
  return((struct Geo_Node *)List_Pointer(CurrentGeoData->Nodes, 
					       Index_Node)) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t G e o N o d e O f N u m                                   */
/* ------------------------------------------------------------------------ */

struct Geo_Node *Geo_GetGeoNodeOfNum(int Num_Node)
{
  struct Geo_Node  node ;

  node.Num = Num_Node ;

  return((struct Geo_Node*)List_PQuery(CurrentGeoData->Nodes,
					     &node, fcmp_Nod)) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N o d e s C o o r d i n a t e s                           */
/* ------------------------------------------------------------------------ */

void Geo_GetNodesCoordinates(int Nbr_Node, int * Num_Node,
			     double * x, double * y, double * z)
{
  int    i ;
  struct Geo_Node  Geo_Node, * Geo_Node_P ;

  for (i = 0 ; i < Nbr_Node ; i++) {
    Geo_Node.Num = abs(Num_Node[i]) ;

    if(!(Geo_Node_P = (struct Geo_Node*)
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod)))
      Msg::Error("Node %d does not exist", Geo_Node.Num) ;
    
    x[i] = Geo_Node_P->x ;  y[i] = Geo_Node_P->y ;  z[i] = Geo_Node_P->z ;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e o _ S e t N o d e s C o o r d i n a t e s                           */
/* ------------------------------------------------------------------------ */

void Geo_SetNodesCoordinates(int Nbr_Node, int * Num_Node,
			     double * x, double * y, double * z)
{
  int    i ;
  struct Geo_Node  Geo_Node, * Geo_Node_P ;

  for (i = 0 ; i < Nbr_Node ; i++) {
    Geo_Node.Num = abs(Num_Node[i]) ;

    if(!(Geo_Node_P = (struct Geo_Node*)
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod)))
      Msg::Error("Node %d does not exist", Geo_Node.Num) ;
    
    Geo_Node_P->x = x[i] ;  Geo_Node_P->y = y[i] ;  Geo_Node_P->z = z[i] ;
  }
}

void Geo_SetNodesCoordinatesX(int Nbr_Node, int * Num_Node,
			     double *x)
{
  int    i ;
  struct Geo_Node  Geo_Node, * Geo_Node_P ;

  for (i = 0 ; i < Nbr_Node ; i++) {
    Geo_Node.Num = abs(Num_Node[i]) ;

    if(!(Geo_Node_P = (struct Geo_Node*)
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod)))
      Msg::Error("Node %d does not exist", Geo_Node.Num) ;
    
    Geo_Node_P->x = x[i] ;
  }
}

void Geo_SetNodesCoordinatesY(int Nbr_Node, int * Num_Node,
			     double *y)
{
  int    i ;
  struct Geo_Node  Geo_Node, * Geo_Node_P ;

  for (i = 0 ; i < Nbr_Node ; i++) {
    Geo_Node.Num = abs(Num_Node[i]) ;

    if(!(Geo_Node_P = (struct Geo_Node*)
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod)))
      Msg::Error("Node %d does not exist", Geo_Node.Num) ;
    
    Geo_Node_P->y = y[i] ;
  }
}

void Geo_SetNodesCoordinatesZ(int Nbr_Node, int * Num_Node,
			     double *z)
{
  int    i ;
  struct Geo_Node  Geo_Node, * Geo_Node_P ;

  for (i = 0 ; i < Nbr_Node ; i++) {
    Geo_Node.Num = abs(Num_Node[i]) ;

    if(!(Geo_Node_P = (struct Geo_Node*)
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod)))
      Msg::Error("Node %d does not exist", Geo_Node.Num) ;
    
    Geo_Node_P->z = z[i] ;
  }
}
