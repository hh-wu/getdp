// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#ifndef _GEODATA_H_
#define _GEODATA_H_

#include "ListUtils.h"
#include "TreeUtils.h"

struct Grid{
  int     Init;
  List_T  * Bricks;
  double  Xmin, Xmax, Ymin, Ymax, Zmin, Zmax;
  int     Nx, Ny, Nz;
};

struct GeoData {
  int     Num ;
  char    * Name ;
  List_T  * Nodes, * Elements ;
  int     NbrElementsWithEdges, NbrElementsWithFacets ;
  int     NumCurrentEdge,  NumCurrentFacet ;
  Tree_T  * EdgesXNodes ,  * FacetsXEdges ;

  Tree_T  * NodesXElements ;
  Tree_T  * Normals ;

  List_T  * GroupForPRE ;

  double  Xmin, Xmax, Ymin, Ymax, Zmin, Zmax ;
  double  Dimension, CharacteristicLength ;

  struct Grid Grid;

  double  * H, * P ;

} ;

int  Geo_AddGeoData(List_T * GeoData_L,
		    char * Name_MshFile, char * Name_DefaultMshFile,
		    char * Name_AdaptFile, char * Name_DefaultAdaptFile) ;
void  Geo_InitGeoData(struct GeoData * GeoData_P, int Num, char * Name) ;
void  Geo_FreeGeoData(struct GeoData * GeoData_P) ;

void  Geo_SetCurrentGeoData(struct GeoData * GeoData_P) ;

void  Geo_OpenFile(char * Name, const char * Mode) ;
void  Geo_CloseFile(void) ;
void  Geo_ReadFile(struct GeoData * GeoData_P) ;
void  Geo_ReadFileAdapt(struct GeoData * GeoData_P) ;

void  Geo_SaveMesh(struct GeoData * GeoData_P, List_T * InitialList, char * FileName) ;

int Geo_GetElementType(int Format, int Type);
int Geo_GetElementTypeInv(int Format, int Type);

int  Geo_GetNbrGeoElements(void) ;
struct Geo_Element  * Geo_GetGeoElement(int Index_Element) ;
int Geo_GetGeoElementIndex(struct Geo_Element * GeoElement) ;
struct Geo_Element  * Geo_GetGeoElementOfNum(int Num_Element) ;

int  Geo_GetNbrGeoNodes(void) ;
struct Geo_Node  * Geo_GetGeoNode(int Index_Node) ;
struct Geo_Node  * Geo_GetGeoNodeOfNum(int Num_Node) ;

void Geo_GetNodesCoordinates(int Nbr_Node, int * Num_Node,
			     double * x, double * y, double * z) ;
void Geo_SetNodesCoordinates(int Nbr_Node, int * Num_Node,
			     double * x, double * y, double * z) ;

void Geo_SetNodesCoordinatesX(int Nbr_Node, int * Num_Node,
			     double * x) ;
void Geo_SetNodesCoordinatesY(int Nbr_Node, int * Num_Node,
			     double * y) ;
void Geo_SetNodesCoordinatesZ(int Nbr_Node, int * Num_Node,
			     double * z) ;

double * Geo_GetNodes_uvw(int Type, int *nbn) ;
double * Geo_GetBarycenter_uvw(int Type) ;

void  Geo_CreateEdgesOfElement(struct Geo_Element * Geo_Element) ;
int  * Geo_GetNodesOfEdgeInElement(struct Geo_Element * Geo_Element, int Num_Edge) ;
void  Geo_CreateFacetsOfElement(struct Geo_Element * Geo_Element) ;
int  * Geo_GetNodesOfFacetInElement(struct Geo_Element * Geo_Element, int Num_Facet) ;

int  * Geo_GetIM_Den(int Type_Element, int * Nbe) ;
int  * Geo_GetIM_Dfe(int Type_Element, int * Nbf) ;
int  * Geo_GetIM_Dfn(int Type_Element, int * Nbf) ;
int  * Geo_GetIM_Den_Xp(int Type_Element, int *Nbe, int *Nbn) ;
int  * Geo_GetIM_Dfe_Xp(int Type_Element, int *Nbf, int *Nbe) ;

void  Geo_CreateEntitiesOfElement
  (int Nbr_Entities2, int * D_Element,
   int   Geo_Element_NbrEntities1, int  * Geo_Element_NumEntities1,
   int * Geo_Element_NbrEntities2, int ** Geo_Element_NumEntities2,
   int * Geo_NbrElementsWithEntities2,
   int * Geo_NumCurrentEntity2, Tree_T * Geo_Entities2XEntities1) ;


void  Geo_GenerateEdgesOfTree(List_T * InitialList, List_T * InitialSuppList,
                              List_T * InitialSuppList2,
			      List_T ** ExtendedList) ;
void  Geo_GenerateFacetsOfTree(List_T * InitialList, List_T * InitialSuppList,
                               List_T * InitialSuppList2,
			       List_T ** ExtendedList) ;
void  Geo_GenerateEdgesOfSubTree(List_T * InitialList, List_T * ExtendedList,
				 Tree_T * EntitiesInTree_T) ;
void  Geo_GenerateFacetsOfSubTree(List_T * InitialList, List_T * ExtendedList,
				  Tree_T * EntitiesInTree_T) ;
void  Geo_ChangeTreeIndex(void * a, void * b) ;

int  fcmp_GeoData_Name(const void * a, const void * b) ;
int  fcmp_Elm(const void * a, const void * b) ;
int  fcmp_Nod(const void * a, const void * b) ;
int  fcmp_E2XE1(const void * a, const void * b) ;
void free_E2XE1(void * a, void * b) ;
int  fcmp_EXVector(const void * a, const void * b) ;

void  Geo_WriteFilePRE(struct GeoData * GeoData_P, List_T * Group_L) ;
void  Geo_ReadFilePRE(struct GeoData * GeoData_P, int NbrGeoData, List_T * Group_L) ;

void  Geo_WriteEntities2XEntities1(void * a, void * b) ;

void  Geo_AddGroupForPRE(int Num) ;

void  Geo_CreateNodesXElements(int NumNode, int InIndex,
			       int *NbrElements, int **NumElements) ;

void  Geo_CreateNormal(int Type, double *x, double *y, double *z, double *N) ;

void  Geo_CreateNormalOfElement(struct Geo_Element *GeoElement, double *Normal) ;


#endif
