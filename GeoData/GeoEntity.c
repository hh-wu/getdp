#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#include "GeoData.h"

#include "Data_Passive.h"
#include "GeoEntity.h"

#include "ualloc.h"
#include "outil.h"
#include "Magic.h"

extern FILE            * File_PRE ;
extern struct GeoData  * CurrentGeoData ;
extern int               Flag_XDATA ;


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N o d e s _ u v w                                         */
/* ------------------------------------------------------------------------ */

double * Geo_GetNodes_uvw(int Type, int *nbn){
  switch(Type){
  case POINT       : *nbn = NbrNodes_Point ;       return *Nodes_Point ;
  case LINE        : *nbn = NbrNodes_Line ;        return *Nodes_Line ;
  case TRIANGLE    : *nbn = NbrNodes_Triangle ;    return *Nodes_Triangle ;
  case QUADRANGLE  : *nbn = NbrNodes_Quadrangle ;  return *Nodes_Quadrangle ;
  case TETRAHEDRON : *nbn = NbrNodes_Tetrahedron ; return *Nodes_Tetrahedron ;
  case HEXAHEDRON  : *nbn = NbrNodes_Hexahedron ;  return *Nodes_Hexahedron ;
  case PRISM       : *nbn = NbrNodes_Prism ;       return *Nodes_Prism ;
  case PYRAMID     : *nbn = NbrNodes_Pyramid ;     return *Nodes_Pyramid ;
  default : 
    Msg(ERROR, "Unknown Element Type in Geo_GetNodes_uvw") ; return NULL ;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e o _ C r e a t e E d g e s O f E l e m e n t                         */
/* ------------------------------------------------------------------------ */

void  Geo_CreateEdgesOfElement(struct Geo_Element * Geo_Element) {

  int  Nbr_Entities2, * D_Element ;

  D_Element = Geo_GetIM_Den(Geo_Element->Type, &Nbr_Entities2) ;
  Geo_CreateEntitiesOfElement(Nbr_Entities2, D_Element,
			      Geo_Element->NbrNodes, Geo_Element->NumNodes,
			      &Geo_Element->NbrEdges, &Geo_Element->NumEdges,
			      &CurrentGeoData->NbrElementsWithEdges,
			      &CurrentGeoData->NumCurrentEdge,
			      CurrentGeoData->EdgesXNodes) ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t N o d e s O f E d g e I n E l e m e n t                   */
/* ------------------------------------------------------------------------ */

int  * Geo_GetNodesOfEdgeInElement(struct Geo_Element * Geo_Element, int Num_Edge) {
  int  Nbr_Entities2 ;

  return  Geo_GetIM_Den(Geo_Element->Type, &Nbr_Entities2) + 
            Num_Edge * NBR_MAX_SUBENTITIES_IN_ELEMENT ;
}

/* ------------------------------------------------------------------------ */
/*  G e o _ C r e a t e F a c e t s O f E l e m e n t                       */
/* ------------------------------------------------------------------------ */

void  Geo_CreateFacetsOfElement(struct Geo_Element * Geo_Element) {

  int  Nbr_Entities2, * D_Element ;

  D_Element = Geo_GetIM_Dfe(Geo_Element->Type, &Nbr_Entities2) ;
  Geo_CreateEntitiesOfElement(Nbr_Entities2, D_Element,
			      Geo_Element->NbrEdges, Geo_Element->NumEdges,
			      &Geo_Element->NbrFacets, &Geo_Element->NumFacets,
			      &CurrentGeoData->NbrElementsWithFacets,
			      &CurrentGeoData->NumCurrentFacet,
			      CurrentGeoData->FacetsXEdges) ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t I M _ D e n                                               */
/* ------------------------------------------------------------------------ */

int  * Geo_GetIM_Den(int Type_Element, int * Nbr_Entities2) {
  switch (Type_Element) {
  case LINE :
    *Nbr_Entities2 = NbrEdges_Line        ;  return  *Den_Line ;
  case TRIANGLE :
    *Nbr_Entities2 = NbrEdges_Triangle    ;  return  *Den_Triangle ;
  case QUADRANGLE :
    *Nbr_Entities2 = NbrEdges_Quadrangle  ;  return  *Den_Quadrangle ;
  case TETRAHEDRON :
    *Nbr_Entities2 = NbrEdges_Tetrahedron ;  return  *Den_Tetrahedron ;
  case HEXAHEDRON :
    *Nbr_Entities2 = NbrEdges_Hexahedron  ;  return  *Den_Hexahedron ;
  case PRISM :
    *Nbr_Entities2 = NbrEdges_Prism       ;  return  *Den_Prism ;
  case PYRAMID :
    *Nbr_Entities2 = NbrEdges_Pyramid     ;  return  *Den_Pyramid ;
  default :
    Msg(ERROR, "Unknown incidence matrix for element type %d", Type_Element);
    return NULL ;
  }
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t I M _ D f e                                               */
/* ------------------------------------------------------------------------ */

int  * Geo_GetIM_Dfe(int Type_Element, int * Nbr_Entities2) {
  switch (Type_Element) {
  case LINE :
    *Nbr_Entities2 = NbrFacets_Line        ;  return NULL ;
  case TRIANGLE :
    *Nbr_Entities2 = NbrFacets_Triangle    ;  return *Dfe_Triangle ;
  case QUADRANGLE :
    *Nbr_Entities2 = NbrFacets_Quadrangle  ;  return *Dfe_Quadrangle ;
  case TETRAHEDRON :
    *Nbr_Entities2 = NbrFacets_Tetrahedron ;  return *Dfe_Tetrahedron ;
  case HEXAHEDRON :
    *Nbr_Entities2 = NbrFacets_Hexahedron  ;  return *Dfe_Hexahedron ;
  case PRISM :
    *Nbr_Entities2 = NbrFacets_Prism       ;  return *Dfe_Prism ;
  case PYRAMID :
    *Nbr_Entities2 = NbrFacets_Pyramid     ;  return *Dfe_Pyramid ;
  default :
    Msg(ERROR, "Unknown incidence matrix for element type %d", Type_Element);
    return NULL ;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e o _ G e t I M _ D e n _ X p                                         */
/* ------------------------------------------------------------------------ */

int * Geo_GetIM_Den_Xp(int Type_Element, int * nbe, int * nbn) {
  switch (Type_Element) {
  case LINE :
    *nbe = NbrEdges_Line ; *nbn = NbrNodes_Line ; 
    return Den_Line_Xp ;
  case TRIANGLE :
    *nbe = NbrEdges_Triangle ; *nbn = NbrNodes_Triangle ; 
    return Den_Triangle_Xp ;
  case QUADRANGLE :
    *nbe = NbrEdges_Quadrangle ; *nbn = NbrNodes_Quadrangle ; 
    return Den_Quadrangle_Xp ;
  case TETRAHEDRON :
    *nbe = NbrEdges_Tetrahedron ; *nbn = NbrNodes_Tetrahedron ; 
    return Den_Tetrahedron_Xp ;
  case HEXAHEDRON :
    *nbe = NbrEdges_Hexahedron ; *nbn = NbrNodes_Hexahedron ; 
    return Den_Hexahedron_Xp ;
  case PRISM :
    *nbe = NbrEdges_Prism ; *nbn = NbrNodes_Prism ; 
    return Den_Prism_Xp ;
  case PYRAMID :
    *nbe = NbrEdges_Pyramid ; *nbn = NbrNodes_Pyramid ; 
    return Den_Pyramid_Xp ;
  default :
    Msg(ERROR, "Unknown incidence matrix for element type %d", Type_Element);
    return NULL ;
  }
}


/* ------------------------------------------------------------------------ */
/*  G e o _ G e t I M _ D f e _ X p                                         */
/* ------------------------------------------------------------------------ */

int * Geo_GetIM_Dfe_Xp(int Type_Element, int * nbf, int * nbe) {
  switch (Type_Element) {
  case LINE :
    *nbf = NbrFacets_Line ; *nbe = NbrEdges_Line ; 
    return NULL ;
  case TRIANGLE :
    *nbf = NbrFacets_Triangle ; *nbe = NbrEdges_Triangle ; 
    return Dfe_Triangle_Xp ;
  case QUADRANGLE :
    *nbf = NbrFacets_Quadrangle ; *nbe = NbrEdges_Quadrangle ; 
    return Dfe_Quadrangle_Xp ;
  case TETRAHEDRON :
    *nbf = NbrFacets_Tetrahedron ; *nbe = NbrEdges_Tetrahedron ; 
    return Dfe_Tetrahedron_Xp ;
  case HEXAHEDRON :
    *nbf = NbrFacets_Hexahedron ; *nbe = NbrEdges_Hexahedron ; 
    return Dfe_Hexahedron_Xp ;
  case PRISM :
    *nbf = NbrFacets_Prism ; *nbe = NbrEdges_Prism ; 
    return Dfe_Prism_Xp ;
  case PYRAMID :
    *nbf = NbrFacets_Pyramid ; *nbe = NbrEdges_Pyramid ; 
    return Dfe_Pyramid_Xp ;
  default :
    Msg(ERROR, "Unknown incidence matrix for element type %d", Type_Element);
    return NULL ;
  }
}

/* ------------------------------------------------------------------------ */
/*  G e o _ C r e a t e E n t i t i e s O f E l e m e n t                   */
/* ------------------------------------------------------------------------ */

void  Geo_CreateEntitiesOfElement
  (int Nbr_Entities2, int * D_Element,
   int   Geo_Element_NbrEntities1, int  * Geo_Element_NumEntities1,
   int * Geo_Element_NbrEntities2, int ** Geo_Element_NumEntities2,
   int * Geo_NbrElementsWithEntities2,
   int * Geo_NumCurrentEntity2, Tree_T * Geo_Entities2XEntities1) {

  int  i, j, Nbr_Entities1, Num_Entities1[NBR_MAX_SUBENTITIES_IN_ELEMENT], Sign_Entity2 ;
  int  * Entity_P, Entity ;
  struct Entity2XEntity1  Entity2XEntities1, * Entity2XEntities1_P ;


  *Geo_Element_NbrEntities2 = Nbr_Entities2 ;
  *Geo_Element_NumEntities2 = (int *)Malloc(Nbr_Entities2 * sizeof(int)) ;
  (*Geo_NbrElementsWithEntities2)++ ;

  for (i = 0 ; i < Nbr_Entities2 ; i++) {

    Entity_P = D_Element + i * NBR_MAX_SUBENTITIES_IN_ELEMENT ;
    Nbr_Entities1 = 0 ;
    while ((Entity = *(Entity_P++)))
      Num_Entities1[Nbr_Entities1++] = (Entity > 0)?
	Geo_Element_NumEntities1[Entity-1] : - Geo_Element_NumEntities1[-Entity-1] ;

    qsort(Num_Entities1, Nbr_Entities1, sizeof(int), fcmp_absint) ;

    if (Num_Entities1[0] < 0) {
      Sign_Entity2 = -1 ;
      for (j = 0 ; j < Nbr_Entities1 ; j++)  Num_Entities1[j] *= -1 ;
    }
    else
      Sign_Entity2 = 1 ;

    Entity2XEntities1.NbrEntities = Nbr_Entities1 ;
    Entity2XEntities1.NumEntities = Num_Entities1 ;

    if ((Entity2XEntities1_P = (struct Entity2XEntity1*)
	 Tree_PQuery(Geo_Entities2XEntities1, &Entity2XEntities1)) == NULL) {
      Entity2XEntities1.Num         = ++(*Geo_NumCurrentEntity2) ;
      Entity2XEntities1.NumEntities = (int *)Malloc(Nbr_Entities1*sizeof(int)) ;
      for (j = 0 ; j < Nbr_Entities1 ; j++)
	Entity2XEntities1.NumEntities[j] = Num_Entities1[j] ;

      Tree_Add(Geo_Entities2XEntities1, &Entity2XEntities1) ;
      (*Geo_Element_NumEntities2)[i] = Entity2XEntities1.Num    * Sign_Entity2 ;
    }
    else
      (*Geo_Element_NumEntities2)[i] = Entity2XEntities1_P->Num * Sign_Entity2 ;
  }

}



/* ------------------------------------------------------------------------ */
/*  f c m p _ E 2 X E 1                                                     */
/* ------------------------------------------------------------------------ */

int  fcmp_E2XE1(const void * a, const void * b) {

  int  i ;

  if (((struct Entity2XEntity1 *)a)->NbrEntities !=
      ((struct Entity2XEntity1 *)b)->NbrEntities)
    return
      ((struct Entity2XEntity1 *)a)->NbrEntities -
      ((struct Entity2XEntity1 *)b)->NbrEntities ;

  for (i = 0 ; i < ((struct Entity2XEntity1 *)a)->NbrEntities ; i++) {
    if (((struct Entity2XEntity1 *)a)->NumEntities[i] >
	((struct Entity2XEntity1 *)b)->NumEntities[i])   return  1 ;
    if (((struct Entity2XEntity1 *)a)->NumEntities[i] <
	((struct Entity2XEntity1 *)b)->NumEntities[i])   return -1 ;
  }

  return 0 ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ W r i t e F i l e P R E                                         */
/* ------------------------------------------------------------------------ */

void  Geo_WriteFilePRE(struct GeoData * GeoData_P, List_T * Group_L) {

  int  i, Nbr_Elements, j, Index_Group, Nbr_Entities, * Num_Entities ;
  struct Geo_Element  * Geo_Element_P0, * Geo_Element_P ;
  struct Group  * Group_P ;

  Nbr_Elements = List_Nbr(GeoData_P->Elements) ;

  /*  E l e m e n t s X E d g e s  */

  if (Nbr_Elements && GeoData_P->NumCurrentEdge) {
    fprintf(File_PRE, "$ElementsXEdges\n") ;
    fprintf(File_PRE, "%d %d\n", GeoData_P->Num, GeoData_P->NbrElementsWithEdges) ;
    Geo_Element_P0 = (struct Geo_Element*)List_Pointer(GeoData_P->Elements, 0) ;
    for (i = 0 ; i < Nbr_Elements ; i++) {
      if ((Geo_Element_P0 + i)->NbrEdges) {
	Geo_Element_P = Geo_Element_P0 + i ;
	fprintf(File_PRE, "%d %d", i, Geo_Element_P->NbrEdges) ;
	for (j = 0 ; j < Geo_Element_P->NbrEdges ; j++)
	  fprintf(File_PRE, " %d", Geo_Element_P->NumEdges[j]) ;
	fprintf(File_PRE, "\n") ;
      }
    }
    fprintf(File_PRE, "$EndElementsXEdges\n") ;

    if (Flag_XDATA) {
      fprintf(File_PRE, "$EdgesXNodes  /* Never used, only for test */\n") ;
      fprintf(File_PRE, "%d %d\n", GeoData_P->Num, Tree_Nbr(GeoData_P->EdgesXNodes)) ;
      Tree_Action(GeoData_P->EdgesXNodes, Geo_WriteEntities2XEntities1) ;
      fprintf(File_PRE, "$EndEdgesXNodes\n") ;
    }
  }

  /*  E l e m e n t s X F a c e t s  */

  if (Nbr_Elements && GeoData_P->NumCurrentFacet) {
    fprintf(File_PRE, "$ElementsXFacets\n") ;
    fprintf(File_PRE, "%d %d\n", GeoData_P->Num, GeoData_P->NbrElementsWithFacets) ;
    Geo_Element_P0 = (struct Geo_Element*)List_Pointer(GeoData_P->Elements, 0) ;
    for (i = 0 ; i < Nbr_Elements ; i++) {
      if ((Geo_Element_P0 + i)->NbrFacets) {
	Geo_Element_P = Geo_Element_P0 + i ;
	fprintf(File_PRE, "%d %d", i, Geo_Element_P->NbrFacets) ;
	for (j = 0 ; j < Geo_Element_P->NbrFacets ; j++)
	  fprintf(File_PRE, " %d", Geo_Element_P->NumFacets[j]) ;
	fprintf(File_PRE, "\n") ;
      }
    }
    fprintf(File_PRE, "$EndElementsXFacets\n") ;

    if (Flag_XDATA) {
      fprintf(File_PRE, "$FacetsXEdges  /* Never used, only for test */\n") ;
      fprintf(File_PRE, "%d %d\n", GeoData_P->Num, Tree_Nbr(GeoData_P->FacetsXEdges)) ;
      Tree_Action(GeoData_P->FacetsXEdges, Geo_WriteEntities2XEntities1) ;
      fprintf(File_PRE, "$EndFacetsXEdges\n") ;
    }
  }

  /*  E x t e n d e d G r o u p  */

  if (GeoData_P->GroupForPRE != NULL) {
    for (i = 0 ; i < List_Nbr(GeoData_P->GroupForPRE) ; i++) {
      List_Read(GeoData_P->GroupForPRE, i, &Index_Group) ;
      Group_P = (struct Group*)List_Pointer(Group_L, Index_Group) ;

      fprintf(File_PRE, "$ExtendedGroup  /* %s */\n", Group_P->Name) ;
      fprintf(File_PRE, "%d %d\n",
	      Index_Group, Nbr_Entities = List_Nbr(Group_P->ExtendedList)) ;
      if (Nbr_Entities) {
	Num_Entities = (int*)List_Pointer(Group_P->ExtendedList, 0) ;
	  for (j = 0 ; j < Nbr_Entities ; j++) {
	    fprintf(File_PRE, (j%10)? " %d" : "%d", Num_Entities[j]) ;
	    if (j%10 == 9)  fprintf(File_PRE, "\n") ;
	  }
	if (j%10)  fprintf(File_PRE, "\n") ;
	fprintf(File_PRE, "$EndExtendedGroup\n") ;
      }
    }
  }

}

/* --------------------------------------------------------- */
/*  G e o _ W r i t e E n t i t i e s 2 X E n t i t i e s 1  */
/* --------------------------------------------------------- */

void  Geo_WriteEntities2XEntities1(void * a, void * b) {
  int  i ;

  fprintf(File_PRE, "%d %d", ((struct Entity2XEntity1 *)a)->Num,
	  ((struct Entity2XEntity1 *)a)->NbrEntities) ;
  for (i = 0 ; i < ((struct Entity2XEntity1 *)a)->NbrEntities ; i++)
    fprintf(File_PRE, " %d", ((struct Entity2XEntity1 *)a)->NumEntities[i]) ;
  fprintf(File_PRE, "\n") ;
}


/* ------------------------------------------------------------------------ */
/*  G e o _ R e a d F i l e P R E                                           */
/* ------------------------------------------------------------------------ */

void  Geo_ReadFilePRE(struct GeoData * GeoData_P0, int NbrGeoData, 
		      List_T * Group_L) {

  struct GeoData      * GeoData_P ;
  struct Geo_Element  * Geo_Element_P0, * Geo_Element_P ;
  struct Group        * Group_P ;
  int   i, Index_Element, Nbr_Entities, j, Index_Group, Num_Entity ;
  int   GeoDataIndex ;
  char  String[MAX_STRING_LENGTH] ;

  for(GeoDataIndex = 0 ; GeoDataIndex < NbrGeoData ; GeoDataIndex++){    
    if(!(GeoData_P0 + GeoDataIndex)->Elements){
      Msg(WARNING, "No Element in GeoData %d", GeoDataIndex); 
      return;
    }
  }

  while (1) {

    do { 
      fgets(String, MAX_STRING_LENGTH, File_PRE) ; 
      if (feof(File_PRE))  break ;
    } while (String[0] != '$') ;  

    if (feof(File_PRE))  break ;

    /*  E l e m e n t s X E d g e s  */

    if (!strncmp(&String[1], "ElementsXEdges", 14)) {

      fscanf(File_PRE, "%d", &GeoDataIndex) ;
      if(GeoDataIndex > NbrGeoData-1) 
	Msg(ERROR, "Unknown GeoData: %d", GeoDataIndex);

      GeoData_P = GeoData_P0 + GeoDataIndex ;
      Geo_Element_P0 = (struct Geo_Element*)List_Pointer(GeoData_P->Elements, 0) ;

      fscanf(File_PRE, "%d", &GeoData_P->NbrElementsWithEdges) ;
      for (i = 0 ; i < GeoData_P->NbrElementsWithEdges ; i++) {
	fscanf(File_PRE, "%d %d", &Index_Element, &Nbr_Entities) ;
	Geo_Element_P = Geo_Element_P0 + Index_Element ;
	Geo_Element_P->NbrEdges = Nbr_Entities ;
	Geo_Element_P->NumEdges = (int *)Malloc(Nbr_Entities * sizeof(int)) ;
	for (j = 0 ; j < Geo_Element_P->NbrEdges ; j++)
	  fscanf(File_PRE, "%d", &Geo_Element_P->NumEdges[j]) ;
      }
    }

    /*  E l e m e n t s X F a c e t s  */

    else if (!strncmp(&String[1], "ElementsXFacets", 15)) {

      fscanf(File_PRE, "%d", &GeoDataIndex) ;
      if(GeoDataIndex > NbrGeoData-1)
	Msg(ERROR, "Unknown GeoData: %d", GeoDataIndex);

      GeoData_P = GeoData_P0 + GeoDataIndex ;
      Geo_Element_P0 = (struct Geo_Element*)List_Pointer(GeoData_P->Elements, 0) ;

      fscanf(File_PRE, "%d", &GeoData_P->NbrElementsWithFacets) ;
      for (i = 0 ; i < GeoData_P->NbrElementsWithFacets ; i++) {
	fscanf(File_PRE, "%d %d", &Index_Element, &Nbr_Entities) ;
	Geo_Element_P = Geo_Element_P0 + Index_Element ;
	Geo_Element_P->NbrFacets = Nbr_Entities ;
	Geo_Element_P->NumFacets = (int *)Malloc(Nbr_Entities * sizeof(int)) ;
	for (j = 0 ; j < Geo_Element_P->NbrFacets ; j++)
	  fscanf(File_PRE, "%d", &Geo_Element_P->NumFacets[j]) ;
      }
    }

    /*  E x t e  n d e d G r o u p  */

    else if (!strncmp(&String[1], "ExtendedGroup", 13)) {

      fscanf(File_PRE, "%d %d", &Index_Group, &Nbr_Entities) ;
      Group_P = (struct Group*)List_Pointer(Group_L, Index_Group) ;
      Group_P->ExtendedList = List_Create(Nbr_Entities, 1, sizeof(int)) ;
      for (i = 0 ; i < Nbr_Entities ; i++) {
	fscanf(File_PRE, "%d", &Num_Entity) ;
	List_Add(Group_P->ExtendedList, &Num_Entity) ;
      }
    }

    do {
      fgets(String, MAX_STRING_LENGTH, File_PRE) ;
      if (feof(File_PRE)) Msg(ERROR, "Prematured End of File");
    } while (String[0] != '$') ;

  }   /* while 1 ... */

}



/* ------------------------------------------------------------------------ */
/*  G e o  _ A d d G r o u p F o r P R E                                    */
/* ------------------------------------------------------------------------ */

void  Geo_AddGroupForPRE(int Num) {

  if (CurrentGeoData->GroupForPRE == NULL)
    CurrentGeoData->GroupForPRE = List_Create( 2, 2, sizeof(int)) ;

  List_Add(CurrentGeoData->GroupForPRE, &Num) ;
}
