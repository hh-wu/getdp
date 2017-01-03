// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <string.h>
#include <math.h>
#include "GeoData.h"
#include "ProData.h"
#include "Pos_Search.h"
#include "MallocUtils.h"
#include "Message.h"
#include "OS.h"

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
    Message::Info("Loading Geometric data '%s'", Name_MshFile) ;
    i = List_Nbr(GeoData_L) ;
    Geo_InitGeoData(&GeoData_S, i, Name_MshFile) ;
    Geo_OpenFile(Name_MshFile, "rb") ;
    Geo_ReadFile(&GeoData_S) ;
    Geo_CloseFile() ;

    if (!Name_AdaptFile) Name_AdaptFile = Name_DefaultAdaptFile ;
    if (Name_AdaptFile) {
      Message::Info("Loading Adaptation data '%s'", Name_AdaptFile) ;
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
/*  G e o _ F r e e G e o D a t a                                           */
/* ------------------------------------------------------------------------ */

void Geo_FreeGeoData(struct GeoData * GeoData_P)
{
  Message::Debug("Freeing GeoData %d", GeoData_P->Num);
  List_Delete(GeoData_P->Nodes);
  if(GeoData_P->Elements){
    for(int i = 0; i < List_Nbr(GeoData_P->Elements); i++){
      Geo_Element *e = (Geo_Element*)List_Pointer(GeoData_P->Elements, i);
      Free(e->NumNodes);
      Free(e->NumEdges);
      Free(e->NumFacets);
    }
    List_Delete(GeoData_P->Elements);
  }
  if(GeoData_P->EdgesXNodes){
    Tree_Action(GeoData_P->EdgesXNodes, free_E2XE1);
    Tree_Delete(GeoData_P->EdgesXNodes);
  }
  if(GeoData_P->FacetsXEdges){
    Tree_Action(GeoData_P->FacetsXEdges, free_E2XE1);
    Tree_Delete(GeoData_P->FacetsXEdges);
  }
  if(GeoData_P->NodesXElements){
    Tree_Action(GeoData_P->NodesXElements, free_E2XE1);
    Tree_Delete(GeoData_P->NodesXElements);
  }
  Tree_Delete(GeoData_P->Normals);
  List_Delete(GeoData_P->GroupForPRE);
  Free_SearchGrid(&GeoData_P->Grid);
  Free(GeoData_P->H);
  Free(GeoData_P->P);
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
  File_GEO = FOpen(Name, Mode) ;

  if (!File_GEO) Message::Error("Unable to open file '%s'", Name);
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
    case 15 : return POINT;
    case 1  : return LINE;
    case 2  : return TRIANGLE;
    case 3  : return QUADRANGLE;
    case 4  : return TETRAHEDRON;
    case 5  : return HEXAHEDRON;
    case 6  : return PRISM;
    case 7  : return PYRAMID;
    case 8  : return LINE_2;
    case 9  : return TRIANGLE_2;
    case 10 : return QUADRANGLE_2;
    case 11 : return TETRAHEDRON_2;
    case 12 : return HEXAHEDRON_2;
    case 13 : return PRISM_2;
    case 14 : return PYRAMID_2;
    case 16 : return QUADRANGLE_2_8N;
    default :
      Message::Error("Unknown type of Element in Gmsh format (%d)", FORMAT_GMSH);
      return -1;
    }
    break ;
  default :
    Message::Error("Unknown mesh format (%d)", Format);
    return -1;
  }
}

int Geo_GetElementTypeInv(int Format, int Type)
{
  switch(Format){
  case FORMAT_GMSH :
    switch(Type){
    case POINT         : return 15;
    case LINE          : return 1;
    case TRIANGLE      : return 2;
    case QUADRANGLE    : return 3;
    case TETRAHEDRON   : return 4;
    case HEXAHEDRON    : return 5;
    case PRISM         : return 6;
    case PYRAMID       : return 7;
    case LINE_2        : return 8;
    case TRIANGLE_2    : return 9;
    case QUADRANGLE_2  : return 10;
    case TETRAHEDRON_2 : return 11;
    case HEXAHEDRON_2  : return 12;
    case PRISM_2       : return 13;
    case PYRAMID_2     : return 14;
    case QUADRANGLE_2_8N: return 16;
    default :
      Message::Error("Unknown type of Element in Gmsh format");
      return -1;
    }
    break ;
  default :
    Message::Error("Unknown mesh format");
    return -1;
  }
}

int Geo_GetNbNodesPerElement(int Type)
{
  switch(Type){
  case POINT         : return 1;
  case LINE          : return 2;
  case TRIANGLE      : return 3;
  case QUADRANGLE    : return 4;
  case TETRAHEDRON   : return 4;
  case HEXAHEDRON    : return 8;
  case PRISM         : return 6;
  case PYRAMID       : return 5;
  case LINE_2        : return 3;
  case TRIANGLE_2    : return 6;
  case QUADRANGLE_2  : return 9;
  case TETRAHEDRON_2 : return 10;
  case HEXAHEDRON_2  : return 20;
  case PRISM_2       : return 15;
  case PYRAMID_2     : return 13;
  case QUADRANGLE_2_8N: return 8;
  default :
    Message::Error("Unknown type of Element");
    return -1;
  }
}

int Geo_GetDimOfElement(int Type)
{
  switch(Type){
  case POINT         : return 0;
  case LINE          : return 1;
  case TRIANGLE      : return 2;
  case QUADRANGLE    : return 2;
  case TETRAHEDRON   : return 3;
  case HEXAHEDRON    : return 3;
  case PRISM         : return 3;
  case PYRAMID       : return 3;
  case LINE_2        : return 1;
  case TRIANGLE_2    : return 2;
  case QUADRANGLE_2  : return 2;
  case TETRAHEDRON_2 : return 3;
  case HEXAHEDRON_2  : return 3;
  case PRISM_2       : return 3;
  case PYRAMID_2     : return 3;
  case QUADRANGLE_2_8N: return 2;
  default :
    Message::Error("Unknown type of Element");
    return -1;
  }
}

void Geo_ReverseElement(Geo_Element *Geo_Element)
{
  int tmp;
  switch(Geo_Element->Type){
  case LINE :
  case LINE_2 :
    tmp = Geo_Element->NumNodes[0];
    Geo_Element->NumNodes[0] = Geo_Element->NumNodes[1];
    Geo_Element->NumNodes[1] = tmp;
    break;
  case TRIANGLE :
    tmp = Geo_Element->NumNodes[1];
    Geo_Element->NumNodes[1] = Geo_Element->NumNodes[2];
    Geo_Element->NumNodes[2] = tmp;
    break;
  case TRIANGLE_2 :
    tmp = Geo_Element->NumNodes[1];
    Geo_Element->NumNodes[1] = Geo_Element->NumNodes[2];
    Geo_Element->NumNodes[2] = tmp;
    tmp = Geo_Element->NumNodes[3+0];
    Geo_Element->NumNodes[3] = Geo_Element->NumNodes[5];
    Geo_Element->NumNodes[5] = tmp;
    break;
  case QUADRANGLE :
    tmp = Geo_Element->NumNodes[1];
    Geo_Element->NumNodes[1] = Geo_Element->NumNodes[3];
    Geo_Element->NumNodes[3] = tmp;
    break;
  case QUADRANGLE_2 :
  case QUADRANGLE_2_8N:
    tmp = Geo_Element->NumNodes[1];
    Geo_Element->NumNodes[1] = Geo_Element->NumNodes[3];
    Geo_Element->NumNodes[3] = tmp;
    tmp = Geo_Element->NumNodes[4+0];
    Geo_Element->NumNodes[4] = Geo_Element->NumNodes[7];
    Geo_Element->NumNodes[7] = tmp;
    tmp = Geo_Element->NumNodes[5];
    Geo_Element->NumNodes[5] = Geo_Element->NumNodes[6];
    Geo_Element->NumNodes[6] = tmp;
    break;
  default :
    break;
  }
}

void Geo_SaveMesh(struct GeoData * GeoData_P, List_T * InitialList, char * FileName)
{
  FILE * file;
  struct Geo_Node     Geo_Node ;
  struct Geo_Node   * Geo_Node_P ;
  struct Geo_Element  Geo_Element ;
  struct GeoData GeoData ;
  int i, j, Type;
  int  fcmp_int(const void * a, const void * b);

  GeoData.Nodes    = List_Create(1000, 1000, sizeof(struct Geo_Node)) ;
  GeoData.Elements = List_Create(1000, 1000, sizeof(struct Geo_Node)) ;

  for (i = 0 ; i < List_Nbr(GeoData_P->Elements) ; i++) {
    List_Read(GeoData_P->Elements, i, &Geo_Element) ;
    if (List_Search(InitialList, &Geo_Element.Region, fcmp_int) ) {
      List_Add(GeoData.Elements, &Geo_Element) ;
      for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
	if (!List_Search(GeoData.Nodes,
	 		 Geo_Node_P = Geo_GetGeoNodeOfNum(Geo_Element.NumNodes[j]),
                         fcmp_Nod) )
	  List_Add(GeoData.Nodes, Geo_Node_P) ;
    }
  }

  file = FOpen(FileName,"w");
  Message::Info("Saving mesh in file \"%s\" (%d nodes, %d elements)",
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
	    Geo_Element.Region, Geo_Element.NbrNodes) ;
    for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
      fprintf(file, "%d ", Geo_Element.NumNodes[j]) ;
    fprintf(file, "\n") ;
  }

  fprintf(file, "$ENDELM\n");

  fclose(file);
  List_Delete(GeoData.Nodes);
  List_Delete(GeoData.Elements);
}

static std::string ExtractDoubleQuotedString(const char *str, int len)
{
  char *c = strstr((char*)str, "\"");
  if(!c) return "";
  std::string ret;
  for(int i = 1; i < len; i++) {
    if(c[i] == '"' || c[i] == EOF || c[i] == '\n' || c[i] == '\r') break;
    ret.push_back(c[i]);
  }
  return ret;
}

void Geo_ReadFile(struct GeoData * GeoData_P)
{
  int                 Nbr, i, j, Type, iDummy, Format, Size, NbTags ;
  double              Version = 1.0 ;
  struct Geo_Node     Geo_Node ;
  struct Geo_Element  Geo_Element ;
  char                String[256] = "" ;
  int                 binary = 0, swap = 0;
  std::map<int, std::vector<int> > entities[4];

  while (1) {

    do {
      if(!fgets(String, sizeof(String), File_GEO) || feof(File_GEO))
        break;
    } while (String[0] != '$') ;

    if (feof(File_GEO))
      break ;

    /*  F O R M A T  */

    if(!strncmp(&String[1], "MeshFormat", 10)) {

      if(!fgets(String, sizeof(String), File_GEO)) return;
      if(sscanf(String, "%lf %d %d", &Version, &Format, &Size) != 3) return;
      if(Version < 2.0 || Version >= 3.1){
	Message::Error("Unsupported or unknown mesh file version (%g)", Version);
	return;
      }

      if(Format){
	binary = 1;
	Message::Info("Mesh is in binary format");
	int one;
	if(fread(&one, sizeof(int), 1, File_GEO) != 1) return;
	if(one != 1){
	  swap = 1;
	  Message::Info("Swapping bytes from binary file");
	}
      }
    }

    /* P H Y S I C A L   N A M E S */

    else if(!strncmp(&String[1], "PhysicalNames", 13)) {

      // GetDP does not currently use the name information

      if(!fgets(String, sizeof(String), File_GEO)) return ;
      int numNames;
      if(sscanf(String, "%d", &numNames) != 1) return ;
      for(int i = 0; i < numNames; i++) {
        int dim = -1, num;
        if(Version > 2.0){
          if(fscanf(File_GEO, "%d", &dim) != 1) return ;
        }
        if(fscanf(File_GEO, "%d", &num) != 1) return ;
        if(!fgets(String, sizeof(String), File_GEO)) return ;
        std::string name = ExtractDoubleQuotedString(String, 256);
        Message::Debug("Physical group %d (dim %d) has name %s",
                       num, dim, name.c_str());
      }
    }

    /* E N T I T I E S */

    else if(!strncmp(&String[1], "Entities", 8)) {
      if(!fgets(String, sizeof(String), File_GEO)) return;
      int num[4];
      if(sscanf(String, "%d %d %d %d", &num[0], &num[1], &num[2], &num[3]) != 4) return;
      for(int dim = 0; dim < 4; dim++) {
        for(int j = 0; j < num[dim]; j++) {
          int num;
          if(fscanf(File_GEO, "%d", &num) != 1) return;
          int nbound = 0;
          if(dim > 0){
            if(fscanf(File_GEO, "%d", &nbound) != 1) return;
            for(int k = 0; k < nbound; k++){
              int dummy;
              if(fscanf(File_GEO, "%d", &dummy) != 1) return;
            }
          }
          int nphys;
          if(fscanf(File_GEO, "%d", &nphys) != 1) return;
          std::vector<int> physicals(nphys);
          for(int k = 0; k < nphys; k++){
            if(fscanf(File_GEO, "%d", &physicals[k]) != 1) return;
          }
          entities[dim][num] = physicals;
          if(nphys > 1){
            Message::Error("GetDP does not support multiple physical groups per element:"
                           " elementary entity %d belongs to %d physical groups",
                           num, nphys);
            return;
          }
        }
      }
    }

    /*  N O D E S  */

    else if (!strncmp(&String[1], "NOE", 3) ||
	     !strncmp(&String[1], "NOD", 3) ||
	     !strncmp(&String[1], "Nodes", 5) ||
             !strncmp(&String[1], "ParametricNodes", 15)) {

      bool parametric =
        !strncmp(&String[1], "ParametricNodes", 15) || (Version >= 3.0);

      if(!fgets(String, sizeof(String), File_GEO)) return;
      if(sscanf(String, "%d", &Nbr) != 1) return;
      Message::Debug("%d nodes", Nbr);

      if (GeoData_P->Nodes == NULL)
	GeoData_P->Nodes = List_Create(Nbr, 1000, sizeof(struct Geo_Node)) ;

      for (i = 0 ; i < Nbr ; i++) {
        if(!parametric){
          if(!binary){
            if(fscanf(File_GEO, "%d %lf %lf %lf",
                      &Geo_Node.Num, &Geo_Node.x, &Geo_Node.y, &Geo_Node.z) != 4) return;
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
        }
        else{
          int dim = -1, entity;
          if(!binary){
            if(Version < 3.0){
              if(fscanf(File_GEO, "%d %lf %lf %lf %d %d",
                        &Geo_Node.Num, &Geo_Node.x, &Geo_Node.y, &Geo_Node.z,
                        &dim, &entity) != 6) return;
            }
            else{
              if(fscanf(File_GEO, "%d %lf %lf %lf %d",
                        &Geo_Node.Num, &Geo_Node.x, &Geo_Node.y, &Geo_Node.z,
                        &entity) != 5) return;
              if(entity){
                if(fscanf(File_GEO, "%d", &dim) != 1) return;
              }
            }
          }
          else{
            if(fread(&Geo_Node.Num, sizeof(int), 1, File_GEO) != 1) return;
            if(swap) swapBytes((char*)&Geo_Node.Num, sizeof(int), 1);
            double xyz[3];
            if(fread(xyz, sizeof(double), 3, File_GEO) != 3) return;
            if(swap) swapBytes((char*)xyz, sizeof(double), 3);
            if(Version < 3.0){
              if(fread(&dim, sizeof(int), 1, File_GEO) != 1) return;
              if(swap) swapBytes((char*)&dim, sizeof(int), 1);
              if(fread(&entity, sizeof(int), 1, File_GEO) != 1) return;
              if(swap) swapBytes((char*)&entity, sizeof(int), 1);
            }
            else{
              if(fread(&entity, sizeof(int), 1, File_GEO) != 1) return;
              if(swap) swapBytes((char*)&entity, sizeof(int), 1);
              if(entity){
                if(fread(&dim, sizeof(int), 1, File_GEO) != 1) return;
                if(swap) swapBytes((char*)&dim, sizeof(int), 1);
              }
            }
            Geo_Node.x = xyz[0];
            Geo_Node.y = xyz[1];
            Geo_Node.z = xyz[2];
          }
          if(dim == 1 && (Version < 3.0 || entity)){
            double u[1];
            if(!binary){
              if(fscanf(File_GEO, "%lf", &u[0]) != 1) return;
            }
            else{
              if(fread(u, sizeof(double), 1, File_GEO) != 1) return;
              if(swap) swapBytes((char*)u, sizeof(double), 1);
            }
          }
          else if(dim == 2 && (Version < 3.0 || entity)){
            double uv[2];
            if(!binary){
              if(fscanf(File_GEO, "%lf %lf", &uv[0], &uv[1]) != 2) return;
            }
            else{
              if(fread(uv, sizeof(double), 2, File_GEO) != 2) return;
              if(swap) swapBytes((char*)uv, sizeof(double), 2);
            }
          }
          else if(dim == 3 && Version >= 3.0 && entity){
            double uvw[3];
            if(!binary){
              if(fscanf(File_GEO, "%lf %lf %lf", &uvw[0], &uvw[1], &uvw[2]) != 3) return;
            }
            else{
              if(fread(uvw, sizeof(double), 3, File_GEO) != 2) return;
              if(swap) swapBytes((char*)uvw, sizeof(double), 3);
            }
          }
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

    /*  E L E M E N T S  */

    else if (!strncmp(&String[1], "ELM", 3) ||
	     !strncmp(&String[1], "Elements", 8)) {

      if(!fgets(String, sizeof(String), File_GEO)) return;
      if(sscanf(String, "%d", &Nbr) != 1) return;
      Message::Debug("%d elements", Nbr);

      if (GeoData_P->Elements == NULL)
	GeoData_P->Elements =
	  List_Create(Nbr, 1000, sizeof(struct Geo_Element)) ;

      Geo_Element.NbrEdges = Geo_Element.NbrFacets = 0 ;
      Geo_Element.NumEdges = Geo_Element.NumFacets = NULL ;

      if (!binary){
	for (i = 0 ; i < Nbr ; i++) {
	  if(Version == 1.0){
	    if(fscanf(File_GEO, "%d %d %d %d %d",
                      &Geo_Element.Num, &Type, &Geo_Element.Region,
                      &Geo_Element.ElementaryRegion, &Geo_Element.NbrNodes) != 5)
              return;
	    Geo_Element.Type = Geo_GetElementType(FORMAT_GMSH, Type) ;
	  }
	  else if(Version < 3.0){
	    if(fscanf(File_GEO, "%d %d %d", &Geo_Element.Num, &Type, &NbTags) != 3)
              return;
	    Geo_Element.Region = Geo_Element.ElementaryRegion = 1;
	    for(j = 0; j < NbTags; j++){
	      if(fscanf(File_GEO, "%d", &iDummy) != 1) return;
	      if(j == 0)
		Geo_Element.Region = iDummy;
              else if(j == 1)
                Geo_Element.ElementaryRegion = iDummy;
	      /* ignore any other tags for now */
	    }
	    Geo_Element.Type = Geo_GetElementType(FORMAT_GMSH, Type) ;
	    Geo_Element.NbrNodes = Geo_GetNbNodesPerElement(Geo_Element.Type);
	  }
          else{
            int numData;
	    if(fscanf(File_GEO, "%d %d %d %d", &Geo_Element.Num, &Type,
                      &Geo_Element.ElementaryRegion, &numData) != 4) return;
	    Geo_Element.Type = Geo_GetElementType(FORMAT_GMSH, Type) ;
	    Geo_Element.NbrNodes = Geo_GetNbNodesPerElement(Geo_Element.Type);
            std::vector<int> phys = entities[Geo_GetDimOfElement(Geo_Element.Type)]
              [Geo_Element.ElementaryRegion];
            if(phys.empty()){
              Message::Error("No physical group provided for element %d",
                             Geo_Element.Num);
              return;
            }
            else
              Geo_Element.Region = phys[0];

            /* ignore any other tags for now */
            for(j = 0; j < numData - Geo_Element.NbrNodes; j++){
              if(fscanf(File_GEO, "%d", &iDummy) != 1) return;
            }
          }

	  Geo_Element.NumNodes = (int *)Malloc(Geo_Element.NbrNodes * sizeof(int)) ;
	  for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
	    fscanf(File_GEO, "%d", &Geo_Element.NumNodes[j]) ;

          if(Geo_Element.Region < 0){
            Geo_ReverseElement(&Geo_Element);
            Geo_Element.Region = -Geo_Element.Region;
          }

	  List_Add(GeoData_P->Elements, &Geo_Element) ;
	}
      }
      else {
        if(Version < 3.0){
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
              Geo_Element.Region = (numTags > 0) ? data[1] : 0;
              Geo_Element.ElementaryRegion = (numTags > 1) ? data[2] : 0;
              Geo_Element.NumNodes = (int *)Malloc(Geo_Element.NbrNodes * sizeof(int)) ;
              for (j = 0 ; j < Geo_Element.NbrNodes ; j++)
                Geo_Element.NumNodes[j] = data[numTags + 1 + j] ;
              List_Add(GeoData_P->Elements, &Geo_Element) ;
            }
            Free(data);
            numElementsPartial += numElms;
          }
        }
        else{
          for (i = 0 ; i < Nbr ; i++) {
            int numData;
            if(fread(&Geo_Element.Num, sizeof(int), 1, File_GEO) != 1) return;
            if(swap) swapBytes((char*)&Geo_Element.Num, sizeof(int), 1);
            if(fread(&Type, sizeof(int), 1, File_GEO) != 1) return;
            if(swap) swapBytes((char*)&Type, sizeof(int), 1);
            if(fread(&Geo_Element.ElementaryRegion, sizeof(int), 1, File_GEO) != 1) return;
            if(swap) swapBytes((char*)&Geo_Element.ElementaryRegion, sizeof(int), 1);
            if(fread(&numData, sizeof(int), 1, File_GEO) != 1) return;
            if(swap) swapBytes((char*)&numData, sizeof(int), 1);
            std::vector<int> data;
            if(numData > 0){
              data.resize(numData);
              if((int)fread(&data[0], sizeof(int), numData, File_GEO) != numData) return;
              if(swap) swapBytes((char*)&data[0], sizeof(int), numData);
            }
            Geo_Element.Type = Geo_GetElementType(FORMAT_GMSH, Type) ;
            Geo_Element.NbrNodes = Geo_GetNbNodesPerElement(Geo_Element.Type);
            Geo_Element.NumNodes = (int *)Malloc(Geo_Element.NbrNodes * sizeof(int)) ;
            if((int)data.size() >= Geo_Element.NbrNodes){
              for (j = 0 ; j < Geo_Element.NbrNodes ; j++){
                Geo_Element.NumNodes[j] = data[numData - Geo_Element.NbrNodes + j] ;
              }
            }
            else{
              Message::Error("Missing node tags in element %d",
                             Geo_Element.Num);
              return;
            }
            std::vector<int> phys = entities[Geo_GetDimOfElement(Geo_Element.Type)]
              [Geo_Element.ElementaryRegion];
            if(phys.empty()){
              Message::Error("No physical group provided for element %d",
                             Geo_Element.Num);
              return;
            }
            else
              Geo_Element.Region = phys[0];

            if(Geo_Element.Region < 0){
              Geo_ReverseElement(&Geo_Element);
              Geo_Element.Region = -Geo_Element.Region;
            }

            List_Add(GeoData_P->Elements, &Geo_Element) ;
          }
        }
      }

      List_Sort(GeoData_P->Elements, fcmp_Elm) ;

    }

    do {
      if(!fgets(String, sizeof(String), File_GEO) || feof(File_GEO))
        break;
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
      if(!fgets(String, sizeof(String), File_GEO) || feof(File_GEO))
        break ;
    } while (String[0] != '$') ;

    if (feof(File_GEO))  break ;

    if (!strncmp(&String[1], "Adapt", 5)) {
      fscanf(File_GEO, "%d", &Nbr) ;
      for (i = 0 ; i < Nbr ; i++) {
	fscanf(File_GEO, "%d %lf %lf %lf", &Geo_Element.Num, &E, &H, &P) ;
	if(!(Geo_Element_P = (struct Geo_Element *)
	     List_PQuery(GeoData_P->Elements, &Geo_Element, fcmp_Elm))){
	  Message::Error("Element %d not found in database", Geo_Element.Num) ;
          break;
        }
	Index_GeoElement = Geo_GetGeoElementIndex(Geo_Element_P) ;
	GeoData_P->H[Index_GeoElement+1] = H ;
	GeoData_P->P[Index_GeoElement+1] = P ;
	if(P > Max_Order) Max_Order = P ;
      }
    }

    do {
      if(!fgets(String, sizeof(String), File_GEO) || feof(File_GEO))
        break;
    } while (String[0] != '$') ;

  }   /* while 1 ... */

  if(Flag_ORDER < 0) Flag_ORDER = Max_Order ;

  Message::Info("Maximum interpolation order = %g", Flag_ORDER) ;
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

int Geo_GetNbrGeoNodes(void)
{
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
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod))){
      Message::Error("Node %d does not exist", Geo_Node.Num) ;
      break;
    }

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
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod))){
      Message::Error("Node %d does not exist", Geo_Node.Num) ;
      break;
    }

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
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod))){
      Message::Error("Node %d does not exist", Geo_Node.Num) ;
      break;
    }

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
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod))){
      Message::Error("Node %d does not exist", Geo_Node.Num) ;
      break;
    }

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
	 List_PQuery(CurrentGeoData->Nodes, &Geo_Node, fcmp_Nod))){
      Message::Error("Node %d does not exist", Geo_Node.Num) ;
      break;
    }

    Geo_Node_P->z = z[i] ;
  }
}
