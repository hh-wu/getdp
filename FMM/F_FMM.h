/* $Id: F_FMM.h,v 1.3 2003-03-18 14:55:22 geuzaine Exp $ */
#ifndef _F_FMM_H_ 
#define _F_FMM_H_

#include "DofData.h"
#include "Data_Element.h"
#include "Data_FMM.h"

/* ------------------------------------------------------------------------- */ 
/*  GroupsFMM                                                                */ 
/* ------------------------------------------------------------------------- */ 

void   Geo_InitFMMData( struct FMMData *FMMData_P ) ;
void   InitFMMmatrix( int i_Src, int i_Obs, struct FMMmat *FMMmat_P ) ;
void   Init_CurrentFMMData ( int Dimension, double k0 ) ;

void   Get_RmaxGroups(int i_Obs, int i_Src) ;
double Geo_GetRmaxInFMMGroup( struct FMMData *FMMData_P) ;

void   Get_GroupNeighbours( int i_FMMEqu, int Dimension ) ;

void   Geo_SetCentroidCoordinates( int Num, double Centroid[3] ) ;

void   ReSet_FMMGroupCenters( ) ;
void   ReGenerate_FMMGroupNeighbours( ) ;

void   Geo_SetXYZmaxInElement(int Num, double *Xmax, double *Ymax, double *Zmax) ;
double Geo_SetMaxEdgeLength( int Num ) ;
double Geo_GetMaxDistance2Elms(int Numi, int Numj) ;

int    FMM_NbrSpectralDirections( double k0 ) ;
int    FMM_SetTruncation(double Rsrc, double Robs, double D, int Dimension) ;

int    NeighbouringGroups( int FMMGroupEObs, int FMMGroupESrc ) ;
int    Get_NextElementSourceNeighbour( struct Element *ElementSource ) ;
int    Get_NextElementSourceInGroup(struct Element *ElementSource) ;

void   Geo_CreateFMMGroup( int InSupport, struct GeoData *GeoData_P, double k0 ) ;
void   Get_InFMMGroupList( int Index_Formulation, struct GeoData *GeoData_P ) ;


/* --------------------------------------------------------------------------------------- */ 
/*  D T A x   m u l t i p l i c a t i o n s   f o r   i t e r a t i v e   s o l u t i o n  */ 
/* --------------------------------------------------------------------------------------- */ 

void FMMProd_AllLaplace2DNonAdaptive( struct FMMmat *, double *, double * ) ; 
void FMMProd_AllLaplace2D( struct FMMmat *, double *, double * ) ; 
void FMMProd_AllLaplace3D( struct FMMmat *, double *, double * ) ;

void FMMProd_AllHelmholtz( struct FMMmat *, double *, double * ) ;


/* -------------------------------------------------------------------------------- */ 
/*                               P r i n t_ F M M                                   */ 
/* -------------------------------------------------------------------------------- */ 

void  Geo_WriteFileFMMGroups(struct GeoData *GeoData_P, char * FileName) ;  
void  Geo_WriteFileFMMGroupsCenter( char * FileName ) ;
void  Geo_WriteFileMshFMMGroups( struct GeoData *GeoData_P, char * FileName ) ;
void  Print_FMMGroupInfo( char* FileName ) ;
void  Print_FMMGroupNeighbours( char* FileName ) ;
void  Print_FMM_Matrices( int DA, char* FileName ) ;
void  Print_FMM_Translation( char* FileName ) ;

void  FMM_DTAMatrix(int N, double ***DTA) ;
void  Print_FMM_MatrixDTA( int n, double **DTA, char* FileName ) ;


#endif













