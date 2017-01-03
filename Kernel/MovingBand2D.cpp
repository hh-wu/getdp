// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.
//
// Contributor(s):
//   Johan Gyselinck
//

#include <math.h>
#include "ProData.h"
#include "ExtendedGroup.h"
#include "GeoData.h"
#include "ListUtils.h"
#include "TreeUtils.h"
#include "MallocUtils.h"
#include "Message.h"
#include "Pos_Search.h"

#define SQU(a)     ((a)*(a))

extern struct CurrentData Current ;

/* ------------------------------------------------------------------------ */
/*              M o v i n g B a n d 2 D                                     */
/* ------------------------------------------------------------------------ */

struct ThreeInt { int  Int1, Int2, Int3 ; } ;

int  fcmp_int3(const void * a, const void * b)
{
  return  ((struct ThreeInt *)a)->Int1 - ((struct ThreeInt *)b)->Int1 ;
}

int  fcmp_int32(const void * a, const void * b)
{
  return  ((struct ThreeInt *)a)->Int2 - ((struct ThreeInt *)b)->Int2 ;
}

void Contour_MovingBand2D(List_T * InitialList, List_T ** ExtendedList,
			  int * NbrNodes, int ** NumNodes)
{
  Tree_T  * Element_Tr ;
  struct Geo_Element * GeoElement ;
  struct ThreeInt *ThreeInt, ThreeInt1 ;
  int *Nodes, LeftNode, RightNode, LeftInt, RightInt, i_El, i ;

  Element_Tr = Tree_Create(sizeof(struct ThreeInt), fcmp_int3) ;

  for (i_El = 0 ; i_El < Geo_GetNbrGeoElements() ; i_El++) {
    GeoElement = Geo_GetGeoElement(i_El) ;
    if (List_Search(InitialList, &GeoElement->Region, fcmp_int)) {
      if (GeoElement->Type != LINE)
	Message::Error("MovingBand2D contour must contain only line elements") ;
      ThreeInt1.Int1 = i_El; ThreeInt1.Int2 = 0; ThreeInt1.Int3 = 0;
      Tree_Add(Element_Tr, &ThreeInt1) ;
    }
  }

  *ExtendedList = Tree2List(Element_Tr) ; Tree_Delete(Element_Tr) ;
  if (!List_Nbr(*ExtendedList))
    Message::Error("MovingBand2D contour has no elements!") ;

  ThreeInt = (struct ThreeInt *)List_Pointer(*ExtendedList, 0) ;
  Nodes = Geo_GetGeoElement(ThreeInt->Int1)->NumNodes ;

  RightNode = Nodes[1] ; RightInt = 0 ;
  LeftNode  = Nodes[0] ; LeftInt = 0 ;
  ThreeInt->Int2 = 0 ; ThreeInt->Int3 = 1 ;

  for (i = 1 ; i < List_Nbr(*ExtendedList) ; i++) {
    for (i_El = 1 ; i_El < List_Nbr(*ExtendedList) ; i_El++) {
      if ( ((ThreeInt = (struct ThreeInt *)List_Pointer(*ExtendedList, i_El))->Int3) == 0) {
	Nodes = Geo_GetGeoElement(ThreeInt->Int1)->NumNodes;
	if (Nodes[0] == RightNode) {
	  ThreeInt->Int2 = ++RightInt ; ThreeInt->Int3 =  1 ; RightNode = Nodes[1] ;
	}
	else if (Nodes[1] == RightNode) {
	  ThreeInt->Int2 = ++RightInt ; ThreeInt->Int3 = -1 ; RightNode = Nodes[0] ;
	}
	else if (Nodes[0] == LeftNode) {
	  ThreeInt->Int2 = --LeftInt  ; ThreeInt->Int3 = -1 ; LeftNode  = Nodes[1] ;
	}
	else if (Nodes[1] == LeftNode) {
	  ThreeInt->Int2 = --LeftInt  ; ThreeInt->Int3 =  1 ; LeftNode  = Nodes[0] ;
	}
	if (ThreeInt->Int3) break;
      }
    }
    if (!ThreeInt->Int3) Message::Error("Moving Band contour is not connected") ;
  }

  List_Sort(*ExtendedList, fcmp_int32) ;
  *NbrNodes = List_Nbr(*ExtendedList)+1 ;
  *NumNodes = (int *)Malloc(*NbrNodes*sizeof(int)) ;

  ThreeInt = (struct ThreeInt *)List_Pointer(*ExtendedList, 0) ;
  if (ThreeInt->Int3 == 1) {
    (*NumNodes)[0] = (Geo_GetGeoElement(ThreeInt->Int1)->NumNodes)[0];
    (*NumNodes)[1] = (Geo_GetGeoElement(ThreeInt->Int1)->NumNodes)[1];
  }
  else {
    (*NumNodes)[0] = (Geo_GetGeoElement(ThreeInt->Int1)->NumNodes)[1];
    (*NumNodes)[1] = (Geo_GetGeoElement(ThreeInt->Int1)->NumNodes)[0];
  }

  for (i_El = 1 ; i_El < List_Nbr(*ExtendedList) ; i_El++) {
    ThreeInt = (struct ThreeInt *)List_Pointer(*ExtendedList, i_El) ;
    if (ThreeInt->Int3 == 1)
      (*NumNodes)[i_El+1] = (Geo_GetGeoElement(ThreeInt->Int1)->NumNodes)[1];
    else
      (*NumNodes)[i_El+1] = (Geo_GetGeoElement(ThreeInt->Int1)->NumNodes)[0];
  }
}

void  Init_MovingBand2D (struct Group * Group_P)
{
  struct MovingBand2D * MB ;
  int i ;
  int Different_Sense_MB2D(int nth1, int nth2, int ntr1, int ntr2, int closed1, int closed2,
			   double x1[], double y1[], double x2[], double y2[]) ;

  MB = Group_P->MovingBand2D ;

  if (MB->ExtendedList1 && MB->ExtendedList2) {
    Message::Warning("Init_MovingBand has already been done!: Skipping") ;
    return ;
  }

  Contour_MovingBand2D(MB->InitialList1, &MB->ExtendedList1, &MB->NbrNodes1, &MB->NumNodes1) ;
  Contour_MovingBand2D(MB->InitialList2, &MB->ExtendedList2, &MB->NbrNodes2, &MB->NumNodes2) ;

  MB->x1 = (double *)Malloc(MB->NbrNodes1*sizeof(double)) ;
  MB->y1 = (double *)Malloc(MB->NbrNodes1*sizeof(double)) ;
  MB->z1 = (double *)Malloc(MB->NbrNodes1*sizeof(double)) ;

  MB->x2 = (double *)Malloc(MB->NbrNodes2*sizeof(double)) ;
  MB->y2 = (double *)Malloc(MB->NbrNodes2*sizeof(double)) ;
  MB->z2 = (double *)Malloc(MB->NbrNodes2*sizeof(double)) ;

  MB->Closed1 = MB->Closed2 = 0 ;
  if (MB->NumNodes1[0] == MB->NumNodes1[MB->NbrNodes1-1]) MB->Closed1 = 1 ;
  if (MB->NumNodes2[0] == MB->NumNodes2[MB->NbrNodes2-1]) MB->Closed2 = 1 ;

  MB->ntr1 = MB->NbrNodes1-1 ;
  MB->ntr2 = MB->NbrNodes2-1 ;
  if (MB->Period2 != 1) {
    if ((MB->NbrNodes2-1)%MB->Period2 != 0.)
      Message::Warning("Strange periodicity stuff  (%d %d)! Do you know what you're doing?",
                       MB->NbrNodes2-1, MB->Period2);
    MB->ntr2 = (MB->NbrNodes2-1)/MB->Period2;
    Message::Info("Periodicity data (%d %d %d %d)", MB->ntr1, MB->NbrNodes2-1, MB->Period2, MB->ntr2);
  }

  Geo_GetNodesCoordinates (MB->NbrNodes1, MB->NumNodes1, MB->x1, MB->y1, MB->z1) ;
  Geo_GetNodesCoordinates (MB->NbrNodes2, MB->NumNodes2, MB->x2, MB->y2, MB->z2) ;


  if (Different_Sense_MB2D(MB->NbrNodes1, MB->NbrNodes2, MB->ntr1, MB->ntr2,
                           MB->Closed1, MB->Closed2, MB->x1, MB->y1, MB->x2, MB->y2) ) {
    Message::Debug("Contours have a different sense: inverting!");
    for (i=0 ; i<MB->NbrNodes2/2 ; i++) {
      int dummy = MB->NumNodes2[i];
      MB->NumNodes2[i] = MB->NumNodes2[MB->NbrNodes2-1-i];
      MB->NumNodes2[MB->NbrNodes2-1-i] = dummy;
    }
  }

  Message::Debug("Moving Band Contour 1 has %d nodes :", MB->NbrNodes1);
  for (i=0 ; i<MB->NbrNodes1 ; i++) Message::Debug(" %d ", MB->NumNodes1[i]);
  if (MB->Closed1) Message::Debug("  (closed)"); else Message::Debug("  (open)");

  Message::Debug("Moving Band Contour 2 has %d nodes :", MB->NbrNodes2);
  for (i=0 ; i<MB->NbrNodes2 ; i++) Message::Debug(" %d ", MB->NumNodes2[i]);
  if (MB->Closed2) Message::Debug("  (closed, "); else Message::Debug("  (open, ");

  Message::Debug("periodicity 1/%d, ", MB->Period2);

  MB->b1_p1 = (int *)Malloc((MB->NbrNodes1-1)*sizeof(int)) ;
  MB->b1_p2 = (int *)Malloc((MB->NbrNodes1-1)*sizeof(int)) ;
  MB->b1_p3 = (int *)Malloc((MB->NbrNodes1-1)*sizeof(int)) ;

  MB->b2_p1 = (int *)Malloc((MB->NbrNodes2-1)*sizeof(int)) ;
  MB->b2_p2 = (int *)Malloc((MB->NbrNodes2-1)*sizeof(int)) ;
  MB->b2_p3 = (int *)Malloc((MB->NbrNodes2-1)*sizeof(int)) ;

  MB->StartIndexTr = Geo_GetNbrGeoElements() ;
  MB->StartNumTr = Geo_GetGeoElement(0)->Num ;
  for (i=1 ; i<MB->StartIndexTr ; i++)
    if (MB->StartNumTr < Geo_GetGeoElement(i)->Num)
      MB->StartNumTr = Geo_GetGeoElement(i)->Num ;
  (MB->StartNumTr)++;

  Message::Debug("StartNumTr %d  StartIndexTr %d", MB->StartNumTr, MB->StartIndexTr);
}

int Different_Sense_MB2D(int nth1, int nth2, int ntr1, int ntr2, int closed1, int closed2,
			 double x1[], double y1[], double x2[], double y2[]){

  double xm = (x1[0]+x1[1])/2.;
  double ym = (y1[0]+y1[1])/2.;
  int imindist = 0;
  double mindist2 = SQU(xm-x2[0]) + SQU(ym-y2[0]);

  for (int i = 1 ; i < nth2 ; i++ ){
    double dist2 = SQU(xm-x2[i]) + SQU(ym-y2[i]) ;
    if (dist2 < mindist2) { imindist = i; mindist2 = dist2; }
  }

  int itry2 = (closed2==1) ? ((imindist+1) % (nth2-1))        : std::min(imindist+1, nth2) ;
  int itry4 = (closed2==1) ? ((imindist-1+nth2-1) % (nth2-1)) : std::max(imindist-1,0) ;

  double dist1 = SQU(x1[2]-x2[itry2]) + SQU(y1[2]-y2[itry2]);
  double dist2 = SQU(x1[2]-x2[itry4]) + SQU(y1[2]-y2[itry4]);

  return( (dist1 < dist2) ? 0. : 1.) ;
}

void Mesh_MB2D(int nth1, int nth2, int ntr1, int ntr2, int closed1, int closed2,
	       double x1[], double y1[], double x2[], double y2[],
	       double * area_moving_band,
	       int b1_p1[], int b1_p2[], int b1_p3[], int b2_p1[], int b2_p2[], int b2_p3[])
{

  double area_tr1,area_tr2;

  int Delauny_1234_MB(double, double, double, double, double, double, double, double,
		      double *, double * );

  double xm = (x1[0]+x1[1])/2.;
  double ym = (y1[0]+y1[1])/2.;
  int imindist = 0;
  double mindist2 = SQU(xm-x2[0]) + SQU(ym-y2[0]);
  for (int i = 1 ; i < nth2 ; i++ ){
    double dist2 = SQU(xm-x2[i]) + SQU(ym-y2[i]) ;
    if (dist2 < mindist2) { imindist = i; mindist2 = dist2; }
  }

  int itry2 = (closed2==1) ? ((imindist+1) % (nth2-1))        : std::min(imindist+1, nth2) ;
  int itry4 = (closed2==1) ? ((imindist-1+nth2-1) % (nth2-1)) : std::max(imindist-1,0) ;

  double dist1 = SQU(x1[2]-x2[itry2]) + SQU(y1[2]-y2[itry2]);
  double dist2 = SQU(x1[2]-x2[itry4]) + SQU(y1[2]-y2[itry4]);
  int d2 = (dist1 < dist2) ? 1 : -1 ;

  Message::Debug("+++++++++++++++++++++++++++++++++++++++++++++++++ %d",d2);

  *area_moving_band =
        fabs( (x2[imindist]-x1[0])*(y1[1]-y1[0])-(x1[1]-x1[0])*(y2[imindist]-y1[0]) )/2. ;
  int itry1 = 1 ;
  int itry3 = 2 ;
  itry2 = imindist ;
  itry4 = (closed2==1) ? ((imindist + d2) % (nth2-1)) : imindist + d2 ;

  int n1 = 0; int n2 = 0;
  b1_p1[n1] = 0; b1_p2[n1] = 1; b1_p3[n1] = itry2;
  n1++;

  for (int i = 1 ; i < ntr1 + ntr2  ; i++ ){
    if ( (Delauny_1234_MB (x1[itry1], y1[itry1], x2[itry2], y2[itry2],
			   x1[itry3], y1[itry3], x2[itry4], y2[itry4],
			   &area_tr1, &area_tr2) == 1) &&
	 itry1 < nth1 && itry1 ){
      b1_p1[n1] = itry1; b1_p2[n1] = itry3; b1_p3[n1] = itry2;
      itry1++; itry3++; if (closed1) {itry1 = itry1 % (nth1-1); itry3 = itry3 % (nth1-1) ;}
      *area_moving_band += area_tr1;
      n1++;
    } else{
      b2_p1[n2] = itry2; b2_p2[n2] = itry4; b2_p3[n2] = itry1;
      itry2+=d2; itry4+=d2;
      if (closed2) {
	itry2 = (nth2-1+itry2) % (nth2-1);
	itry4 = (nth2-1+itry4) % (nth2-1) ;
      }
      *area_moving_band += area_tr2;
      n2++;
    }
  }
  if(n1 != ntr1 || n2 != ntr2){
    Message::Error("Meshing of 2D Moving Band failed (%d != %d || %d != %d)",
                   n1, ntr1, n2, ntr2);
  }
}

void  Mesh_MovingBand2D (struct Group * Group_P)
{
  struct MovingBand2D * MB ;
  struct Geo_Element Geo_Element ;
  struct GeoData  * GeoData ;
  int *n ;

  int *NumNodes1, *NumNodes2;
  int *b1_p1, *b1_p2, *b1_p3, *b2_p1, *b2_p2, *b2_p3;

  MB = Group_P->MovingBand2D ;
  if (!MB->ExtendedList1 || !MB->ExtendedList2) Init_MovingBand2D(Group_P) ;

  NumNodes1 = MB->NumNodes1; NumNodes2 = MB->NumNodes2;
  b1_p1 = MB->b1_p1; b1_p2 = MB->b1_p2; b1_p3 = MB->b1_p3;
  b2_p1 = MB->b2_p1; b2_p2 = MB->b2_p2; b2_p3 = MB->b2_p3;

  Geo_GetNodesCoordinates (MB->NbrNodes1, NumNodes1, MB->x1, MB->y1, MB->z1) ;
  Geo_GetNodesCoordinates (MB->NbrNodes2, NumNodes2, MB->x2, MB->y2, MB->z2) ;

  Mesh_MB2D(MB->NbrNodes1, MB->NbrNodes2, MB->ntr1, MB->ntr2, MB->Closed1, MB->Closed2,
	    MB->x1, MB->y1, MB->x2, MB->y2, &MB->Area,
	    b1_p1, b1_p2, b1_p3, b2_p1, b2_p2, b2_p3);

  GeoData = Current.GeoData ;

  Geo_Element.NbrEdges = Geo_Element.NbrFacets = 0 ;
  Geo_Element.NumEdges = Geo_Element.NumFacets = NULL ;
  Geo_Element.Region = MB->PhysNum ;
  Geo_Element.NbrNodes = 3 ; Geo_Element.Type = TRIANGLE ;

  int NbrGeo = Geo_GetNbrGeoElements();

  for (int i = 0 ; i < MB->ntr1 ; i++){
    int index = MB->StartIndexTr+i ;
    if (index < NbrGeo) {
      n = (int *)(((struct Geo_Element *)List_Pointer(GeoData->Elements, index))->NumNodes) ;
      n[0] = NumNodes1[b1_p1[i]] ; n[1] = NumNodes1[b1_p2[i]] ; n[2] = NumNodes2[b1_p3[i]] ;
    }
    else {
      Geo_Element.Num =  MB->StartNumTr + i ;
      Geo_Element.NumNodes = n = (int *)Malloc(3 * sizeof(int)) ;
      n[0] = NumNodes1[b1_p1[i]] ; n[1] = NumNodes1[b1_p2[i]] ; n[2] = NumNodes2[b1_p3[i]] ;
      List_Put(GeoData->Elements, index, &Geo_Element) ;
    }
    // printf("Tr1 %d : %d %d %d \n",MB->StartNumTr+i, n[0], n[1], n[2]);
  }

  for (int i = 0 ; i < MB->ntr2  ; i++){
    Geo_Element.Num =  MB->StartNumTr + MB->ntr1 +i ;
    int index = MB->StartIndexTr+MB->ntr1+i ;
    if (index < NbrGeo) {
      n = (int *)(((struct Geo_Element *)List_Pointer(GeoData->Elements, index))->NumNodes) ;
      n[0] = NumNodes2[b2_p1[i]] ; n[1] = NumNodes2[b2_p2[i]] ; n[2] = NumNodes1[b2_p3[i]] ;
    }
    else {
      Geo_Element.Num =  MB->StartNumTr + MB->ntr1 + i ;
      Geo_Element.NumNodes = n = (int *)Malloc(3 * sizeof(int)) ;
      n[0] = NumNodes2[b2_p1[i]] ; n[1] = NumNodes2[b2_p2[i]] ; n[2] = NumNodes1[b2_p3[i]] ;
      List_Put(GeoData->Elements, index, &Geo_Element) ;
    }
    Message::Debug("Tr2 %d : %d %d %d",MB->StartNumTr+MB->ntr1+i, n[0], n[1], n[2]);
  }

  Message::Debug("Moving band meshed (area = %e)", MB->Area);

  Free_SearchGrid(&Current.GeoData->Grid);
}

int Delauny_1234_MB (double x1, double y1, double x2, double y2,
		     double x3, double y3, double x4, double y4,
		     double * area1, double * area2)
{

  double Det1 = (x3-x1)*(y2-y1)-(x2-x1)*(y3-y1);
  double Det2 = (x4-x1)*(y2-y1)-(x2-x1)*(y4-y1);
  if( !Det1 || !Det2 ) {
    Message::Error("Colinear points in Delauny_1234 ("
                   "Det1 %g Det2 %g "
                   "x1 %e y1 %e x2 %e y2 %e x3 %e y3 %e x4 %e y4 %e)",
                   Det1, Det2, x1, y1, x2, y2, x3, y3, x4, y4);
  }
  double t1 = ( (x3-x1)*(x3-x2)+(y3-y1)*(y3-y2) ) / Det1 ;
  double t2 = ( (x4-x1)*(x4-x2)+(y4-y1)*(y4-y2) ) / Det2 ;
  if ( fabs(t1) < fabs(t2) ){
    *area1 = fabs(Det1)/2.;
    return (1);
  }
  else{
    *area2 = fabs(Det2)/2.;
    return (2);
  }
}
