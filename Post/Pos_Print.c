/* $Id: Pos_Print.c,v 1.12 2000-10-17 07:20:54 geuzaine Exp $ */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#include "Data_Passive.h"
#include "Data_DefineE.h"
#include "Data_Numeric.h"

#include "Version.h"
#include "CurrentData.h"
#include "Magic.h"

#include "Pos_Iso.h"
#include "Pos_Print.h"
#include "Pos_Element.h"

#include "ualloc.h"

#define NBR_MAX_ISO  200

List_T *PostElement_L = NULL ;

/* ------------------------------------------------------------------------ */
/*  P r i n t _ P o s t F o r m a t / H e a d e r / F o o t e r             */
/* ------------------------------------------------------------------------ */

void  Print_PostFormat(int Format){
  switch(Format){
  case FORMAT_GMSH_NL :
    fprintf(PostStream, "$PostFormat /* GetDP v%g, %s */\n",
	    GETDP_VERSION, Flag_BIN ? "binary" : "ascii") ;
    fprintf(PostStream, "%g %d\n", GETDP_VERSION, Flag_BIN) ;
    fprintf(PostStream, "$EndPostFormat\n") ;
    break ;
  case FORMAT_GNUPLOT :
    fprintf(PostStream, "# GetDP v%g, %s\n",
	    GETDP_VERSION, Flag_BIN ? "binary" : "ascii") ;
    break ;
  }
}

void  Print_PostHeader(int Format, int Contour, 
		       int NbTimeStep, int HarmonicToTime,
		       int Type, int Order,
		       struct PostQuantity  *NCPQ_P,
		       struct PostQuantity  *CPQ_P){

  char name[MAX_STRING_LENGTH] ;

  if(Contour){
    if(!PostElement_L) 
      PostElement_L = List_Create(20, 20, sizeof(struct PostElement*));
    else
      List_Reset(PostElement_L);
  }

  if(NCPQ_P && CPQ_P) {
    strcpy(name, Order ? NCPQ_P->Name : CPQ_P->Name) ;
    strcat(name, Get_StringForDefine(PostSubOperation_CombinationType, Type)) ;
    strcat(name, Order ? CPQ_P->Name : NCPQ_P->Name) ;
  }
  else if(NCPQ_P)
    strcpy(name, NCPQ_P->Name) ;
  else
    strcpy(name, CPQ_P->Name) ;

  switch(Format){
  case FORMAT_GMSH :
    fprintf(PostStream, "View \"%s\" {\n", name) ;
    break ;
  case FORMAT_GMSH_NL :
    fprintf(PostStream, "$PostData /* %s */\n", name);
    fprintf(PostStream, "%s %d\n", name, NbTimeStep*HarmonicToTime);
    break ;
  case FORMAT_GNUPLOT :
    fprintf(PostStream, "# PostData '%s'\n", name);
    fprintf(PostStream, "# Type Num  X Y Z  N1 N2 N3  Values  <Values>...\n");
    break ;
  case FORMAT_ADAPT :
    fprintf(PostStream, "$Adapt /* %s */\n", name) ;
    break ;
  }
}

void  Print_PostFooter(struct PostSubOperation *PSO_P){
  List_T  * Iso_L[NBR_MAX_ISO] ;
  double    IsoMin = 1.e200, IsoMax = -1.e200, IsoVal = 0.0 ;
  int       NbrIso = 0 ; 
  int       iPost, iNode, iIso ;
  struct PostElement *PE ;

  if(PSO_P->Iso){

    for(iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);
      for (iNode = 0 ; iNode < PE->NbrNodes ; iNode++ ){
	IsoMin = MIN(IsoMin, PE->Value[iNode].Val[0]) ;
	IsoMax = MAX(IsoMax, PE->Value[iNode].Val[0]) ;
      }
    }
    if((NbrIso = PSO_P->Iso) < 0)
      NbrIso = List_Nbr(PSO_P->Iso_L) ;
    if(NbrIso > NBR_MAX_ISO) 
      Msg(ERROR, "Too Many Iso Values");
    for(iIso = 0 ; iIso < NbrIso ; iIso++)
      Iso_L[iIso] = List_Create(10, 10, sizeof(struct PostElement*)) ;

    for(iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);
      for(iIso = 0 ; iIso < NbrIso ; iIso++){
	if(PSO_P->Iso > 0){
	  Cal_Iso(PE, Iso_L[iIso], IsoMin+iIso*(IsoMax-IsoMin)/(double)(NbrIso-1), 
		  IsoMin, IsoMax) ;
	}
	else{
	  List_Read(PSO_P->Iso_L, iIso, &IsoVal) ;
	  Cal_Iso(PE, Iso_L[iIso], IsoVal, IsoMin, IsoMax) ;
	}
      }
      if(1) Destroy_PostElement(PE);
    }

    for(iIso = 0 ; iIso < NbrIso ; iIso++){
      for(iPost = 0 ; iPost < List_Nbr(Iso_L[iIso]) ; iPost++){
	PE = *(struct PostElement**)List_Pointer(Iso_L[iIso], iPost) ;
	Print_PostElement(PSO_P->Format, 0, 0, 
			  Current.Time, 0, 1, 
			  Current.NbrHar, PSO_P->HarmonicToTime, 
			  NULL, PE);
	Destroy_PostElement(PE) ;
      }
      List_Delete(Iso_L[iIso]) ;
      fprintf(PostStream, "\n") ;
    }
  }

  switch(PSO_P->Format){
  case FORMAT_GMSH :
    fprintf(PostStream, "};\n") ;
    break ;
  case FORMAT_GMSH_NL :
    fprintf(PostStream, "0\n$EndPostData\n");
    break ;
  case FORMAT_ADAPT :
    fprintf(PostStream, "$EndAdapt\n");
    break ;
  }
}

/* ------------------------------------------------------------------------ */
/*  P r i n t _ X X X                                                       */
/* ------------------------------------------------------------------------ */

void  Print_Gmsh(int TimeStep, int NbTimeStep, int NbHarmonic, 
		 int HarmonicToTime, int Type, int Index, int NbrNodes, 
		 double *x, double *y, double *z, struct Value *Value){
  int     i,j,k;
  double  p;

  switch (Value[0].Type) {

  case SCALAR :

    if(TimeStep == 0){
      switch(Type){
      case POINT       : fprintf(PostStream, "SP("); break;
      case LINE        : fprintf(PostStream, "SL("); break;
      case TRIANGLE    : fprintf(PostStream, "ST("); break;
      case TETRAHEDRON : fprintf(PostStream, "SS("); break;
      }    
      for(i = 0 ; i < NbrNodes ; i++){
	if(i) fprintf(PostStream, ",");
	fprintf(PostStream, "%.8g,%.8g,%.8g", x[i], y[i], z[i]);
      }
      fprintf(PostStream, "){");
    }

    if(HarmonicToTime > 1){
      if(NbHarmonic == 2){
	for(k = 0 ; k < HarmonicToTime ; k++){
	  p = TWO_PI * k / (HarmonicToTime-1);
	  if(k || TimeStep) fprintf(PostStream, ",");
	  for(i = 0 ; i < NbrNodes ; i++){
	    if(i) fprintf(PostStream, ",");
	    fprintf(PostStream, "%.8g", Value[i].Val[MAX_DIM*0] * cos(p) - 
		                       Value[i].Val[MAX_DIM*1] * sin(p));
	  }
	}	
      }
      else{
	Msg(ERROR, "HarmonicToTime Conversion expects 2 Harmonics");
      }
    }
    else{
      for(k = 0 ; k < NbHarmonic ; k++) {
	if(k || TimeStep) fprintf(PostStream, ",");
	for(i = 0 ; i < NbrNodes ; i++){
	  if(i) fprintf(PostStream, ",");
	  fprintf(PostStream, "%.8g", Value[i].Val[MAX_DIM*k]);
	}
      }
    }

    if(TimeStep == NbTimeStep-1){
      fprintf(PostStream, "};\n") ;
    }
    break ;

  case VECTOR :

    if(TimeStep == 0){
      switch(Type){
      case POINT       : fprintf(PostStream, "VP("); break;
      case LINE        : fprintf(PostStream, "VL("); break;
      case TRIANGLE    : fprintf(PostStream, "VT("); break;
      case TETRAHEDRON : fprintf(PostStream, "VS("); break;
      }
      for(i = 0 ; i < NbrNodes ; i++){
	if(i) fprintf(PostStream, ",");
	fprintf(PostStream, "%.8g,%.8g,%.8g", x[i], y[i], z[i]);
      }
      fprintf(PostStream, "){");
    }
    
    if(HarmonicToTime > 1){
      if(NbHarmonic == 2){
	for(k = 0 ; k < HarmonicToTime ; k++){
	  p = TWO_PI * k / (HarmonicToTime-1);
	  if(k || TimeStep) fprintf(PostStream, ",");
	  for(i = 0 ; i < NbrNodes ; i++){
	    if(i) fprintf(PostStream, ",");
	    for(j = 0 ; j < 3 ; j++){
	      if(j) fprintf(PostStream, ",");
	      fprintf(PostStream, "%.8g", Value[i].Val[MAX_DIM*0+j] * cos(p) - 
		                         Value[i].Val[MAX_DIM*1+j] * sin(p));
	    }
	  }
	}	
      }
      else{
	Msg(ERROR, "HarmonicToTime Conversion expects 2 Harmonics");
      }
    }
    else{
      for(k = 0 ; k < NbHarmonic ; k++) {
	if(k || TimeStep) fprintf(PostStream, ",");
	for(i = 0 ; i < NbrNodes ; i++){
	  if(i) fprintf(PostStream, ",");
	  for(j = 0 ; j < 3 ; j++){
	    if(j) fprintf(PostStream, ",");
	    fprintf(PostStream, "%.8g", Value[i].Val[MAX_DIM*k+j]);
	  }
	}
      }
    }

    if(TimeStep == NbTimeStep-1){
      fprintf(PostStream, "};\n") ;
    }
    break ;

  case TENSOR_DIAG :
  case TENSOR_SYM :
  case TENSOR :
    Msg(ERROR, "Print_PostElement not done for Tensors");
    break;
    
  }
}

#define POST_SCALAR_POINT           1
#define POST_SCALAR_LINE            2
#define POST_SCALAR_TRIANGLE        3
#define POST_SCALAR_QUADRANGLE      4
#define POST_SCALAR_TETRAHEDRON     5
#define POST_SCALAR_HEXAHEDRON      6
#define POST_SCALAR_PRISM           7
#define POST_SCALAR_PYRAMID         8

#define POST_VECTOR_POINT           11
#define POST_VECTOR_LINE            12
#define POST_VECTOR_TRIANGLE        13
#define POST_VECTOR_QUADRANGLE      14
#define POST_VECTOR_TETRAHEDRON     15
#define POST_VECTOR_HEXAHEDRON      16
#define POST_VECTOR_PRISM           17
#define POST_VECTOR_PYRAMID         18

#define POST_TENSOR_POINT           21
#define POST_TENSOR_LINE            22
#define POST_TENSOR_TRIANGLE        23
#define POST_TENSOR_QUADRANGLE      24
#define POST_TENSOR_TETRAHEDRON     25
#define POST_TENSOR_HEXAHEDRON      26
#define POST_TENSOR_PRISM           27
#define POST_TENSOR_PYRAMID         28

void  Print_NewGmsh(int TimeStep, int NbrTimeSteps, int NbrHarmonics, 
		    int HarmonicToTime, int ElementType, int ElementIndex, int NbrNodes,
		    double *x, double *y, double *z, struct Value *Value){

  static int      Index, OutSize, Type, Size ;
  static double  *Tmp ;
  int    i,j,k ;
  double p ;

  if(TimeStep == 0){

    switch(ElementType){
    case POINT :
      switch(Value->Type){
      case SCALAR      : Type = POST_SCALAR_POINT ; Size = 1 ; break ;
      case VECTOR      : Type = POST_VECTOR_POINT ; Size = 3 ; break ;
      case TENSOR_DIAG : 
      case TENSOR_SYM  : 
      case TENSOR      : Type = POST_TENSOR_POINT ; Size = 9 ; break ;
      }
      break ;
    case LINE :
      switch(Value->Type){
      case SCALAR      : Type = POST_SCALAR_LINE ; Size = 1 ; break ;
      case VECTOR      : Type = POST_VECTOR_LINE ; Size = 3 ; break ;
      case TENSOR_DIAG : 
      case TENSOR_SYM  : 
      case TENSOR      : Type = POST_TENSOR_LINE ; Size = 9 ; break ;
      }
      break ;
    case TRIANGLE :
      switch(Value->Type){
      case SCALAR      : Type = POST_SCALAR_TRIANGLE ; Size = 1 ; break ;
      case VECTOR      : Type = POST_VECTOR_TRIANGLE ; Size = 3 ; break ;
      case TENSOR_DIAG : 
      case TENSOR_SYM  : 
      case TENSOR      : Type = POST_TENSOR_TRIANGLE ; Size = 9 ; break ;
      }
      break ;
    case TETRAHEDRON :
      switch(Value->Type){
      case SCALAR      : Type = POST_SCALAR_TETRAHEDRON ; Size = 1 ; break ;
      case VECTOR      : Type = POST_VECTOR_TETRAHEDRON ; Size = 3 ; break ;
      case TENSOR_DIAG : 
      case TENSOR_SYM  : 
      case TENSOR      : Type = POST_TENSOR_TETRAHEDRON ; Size = 9 ; break ;
      }
      break ;
    default :
      Msg(ERROR, "Unkbown Type of Element in Print_NewGmshPostElement") ;
      break ;
    }

    fprintf(PostStream, "%d\n", Type);
    OutSize = Size * NbrNodes * NbrTimeSteps * NbrHarmonics * HarmonicToTime ;
    if(Flag_BIN){
      fwrite(x, sizeof(double), NbrNodes, PostStream);
      fwrite(y, sizeof(double), NbrNodes, PostStream);
      fwrite(z, sizeof(double), NbrNodes, PostStream);
      Tmp = (double*)Malloc(OutSize*sizeof(double));
      Index = 0 ;
    }
    else{
      for(i=0 ; i<NbrNodes ; i++) fprintf(PostStream, "%.8g ", x[i]);
      for(i=0 ; i<NbrNodes ; i++) fprintf(PostStream, "%.8g ", y[i]);
      for(i=0 ; i<NbrNodes ; i++) fprintf(PostStream, "%.8g ", z[i]);
    }
  }

  if(HarmonicToTime > 1){
    if(NbrHarmonics != 2){
      Msg(ERROR, "HarmonicToTime Conversion expects 2 Harmonics");
    }
    for(k = 0 ; k < HarmonicToTime ; k++){
      p = TWO_PI * k / (HarmonicToTime-1);
      for(i = 0 ; i < NbrNodes ; i++){
	for(j = 0 ; j < Size ; j++){
	  if(Flag_BIN){
	    Tmp[Index] = 
	      Value[i].Val[        j] * cos(p) - 
	      Value[i].Val[MAX_DIM+j] * sin(p);
	    Index++ ;
	  }
	  else{
	    fprintf(PostStream, "%.8g",
		    Value[i].Val[        j] * cos(p) - 
		    Value[i].Val[MAX_DIM+j] * sin(p));	    
	  }
	}
      }
    }
  }    
  else{
    for(k = 0 ; k < NbrHarmonics ; k++) {
      for(i = 0 ; i < NbrNodes ; i++){
	for(j = 0 ; j < Size ; j++){
	  if(Flag_BIN){
	    Tmp[Index] = Value[i].Val[MAX_DIM*k+j] ;
	    Index++ ;
	  }
	  else{
	    fprintf(PostStream, "%.8g ", Value[i].Val[MAX_DIM*k+j]);
	  }
	}
      }
    }
  }

  if(TimeStep == NbrTimeSteps-1){
    if(Flag_BIN) {
      fwrite(Tmp, sizeof(double), OutSize, PostStream);
      Free(Tmp);
    }
    fprintf(PostStream, "\n");
  }

}


int Get_GmshElementType(int Type){
  switch(Type){
  case POINT :         return 15 ; 
  case LINE :	       return 1  ; 
  case TRIANGLE :      return 2  ; 
  case QUADRANGLE :    return 3  ; 
  case TETRAHEDRON :   return 4  ;    
  case HEXAHEDRON :    return 5  ; 
  case PRISM :	       return 6  ; 
  case PYRAMID :       return 7  ; 
  case LINE_2 :	       return 8  ; 
  case TRIANGLE_2 :    return 9  ; 
  case QUADRANGLE_2 :  return 10 ; 
  case TETRAHEDRON_2 : return 11 ;      
  case HEXAHEDRON_2 :  return 12 ; 
  case PRISM_2 :       return 13 ; 
  case PYRAMID_2 :     return 14 ; 
  default : 
    Msg(ERROR, "Unknown Type in Get_GmshElementType") ;
    return -1 ;
  }
}

void  Print_Gnuplot(int Format, double Time, int TimeStep, int NbrTimeSteps,
		    int NbrHarmonics, int HarmonicToTime, 
		    int ElementType, int Index, int NbrNodes,
		    double *x, double *y, double *z, double *Dummy,
		    struct Value *Value){
  static int  Size, TmpIndex ;
  int         i, j, k, t ;
  double      p ;
  double    * TmpValues ;

  if(TimeStep == 0){
    switch(Value->Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : 
    case TENSOR_SYM  : 
    case TENSOR      : Size = 9 ; break ;
    }
    TmpValues = (double*) Malloc(NbrTimeSteps*NbrNodes*NbrHarmonics*Size*sizeof(double));
    TmpIndex = 0;
  }

  for(i = 0 ; i < NbrNodes ; i++)
    for(k = 0 ; k < NbrHarmonics ; k++)
      for(j = 0 ; j < Size ; j++)
	TmpValues[TmpIndex++] = Value[i].Val[MAX_DIM*k+j];

  if(TimeStep == NbrTimeSteps-1){

    for(i = 0 ; i < NbrNodes ; i++){

      fprintf(PostStream, "%d %d  ", Get_GmshElementType(ElementType), Index);
      fprintf(PostStream, "%.8g %.8g %.8g  ", x[i], y[i], z[i]);
      if(Dummy){
	if(Dummy[3]<0){
	  if(!i)
	    fprintf(PostStream, "%.8g %.8g 0  ", Dummy[0], Dummy[2]);
	  else
	    fprintf(PostStream, "%.8g %.8g 0  ", Dummy[1], Dummy[2]);
	}
	else
	  fprintf(PostStream, "%.8g %.8g %.8g  ", Dummy[0], Dummy[1], Dummy[2]);
      }
      else
	fprintf(PostStream, "0 0 0  ");

      for(t = 0 ; t < NbrTimeSteps ; t++){
	
	if(HarmonicToTime > 1){
	  if(NbrHarmonics != 2){
	    Msg(ERROR, "HarmonicToTime Conversion expects 2 Harmonics");
	  }
	  for(k = 0 ; k < HarmonicToTime ; k++){
	    p = TWO_PI * k / (HarmonicToTime-1);
	    for(j = 0 ; j < Size ; j++){
	      fprintf(PostStream, "%.8g ",
		      TmpValues[ t*NbrNodes*NbrHarmonics*Size
			       + i*NbrHarmonics*Size
			       + 0*Size
			       + j ] * cos(p) -
		      TmpValues[ t*NbrNodes*NbrHarmonics*Size
			       + i*NbrHarmonics*Size
			       + 1*Size
			       + j ] * sin(p));
	    }
	    fprintf(PostStream, " ");
	  }
	  fprintf(PostStream, " ");
	}
	else{
	  for(k = 0 ; k < NbrHarmonics ; k++) {
	    for(j = 0 ; j < Size ; j++){
	      fprintf(PostStream, "%.8g ", 
		      TmpValues[ t*NbrNodes*NbrHarmonics*Size
			       + i*NbrHarmonics*Size
			       + k*Size
			       + j ]);
	    }
	    fprintf(PostStream, " ");
	  }
	  fprintf(PostStream, " ");
	}
	
      }
      fprintf(PostStream, "\n");      

    }
    if(NbrNodes > 1) fprintf(PostStream, "\n");

    free(TmpValues);
  }

}

void  Print_Tabular(int Format, double Time, int TimeStep, int NbrTimeSteps,
		    int NbrHarmonics, int HarmonicToTime, 
		    int ElementType, int Index, int NbrNodes,
		    double *x, double *y, double *z, double *Dummy,
		    struct Value *Value){
  static int  Size ;
  int         i,j,k ;
  double      p ;

  if(TimeStep == 0){
    switch(Value->Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : 
    case TENSOR_SYM  : 
    case TENSOR      : Size = 9 ; break ;
    }
  }

  switch(Format){
  case FORMAT_SPACE_TABLE :
    if(TimeStep == 0){
      fprintf(PostStream, "%d %d  ", Get_GmshElementType(ElementType), Index);
      for(i=0 ; i<NbrNodes ; i++)
	fprintf(PostStream, "%.8g %.8g %.8g  ", x[i], y[i], z[i]);
      if(Dummy) 
	fprintf(PostStream, "%.8g %.8g %.8g  ", Dummy[0], Dummy[1],  Dummy[2]);
      else
	fprintf(PostStream, "0 0 0  ");
    }
    break ;
  case FORMAT_TIME_TABLE :
    fprintf(PostStream, "%d %.8g  ", TimeStep, Time);
    for(i=0 ; i<NbrNodes ; i++) 
      fprintf(PostStream, "%.8g %.8g %.8g  ", x[i], y[i], z[i]);
    break ;
  }
  
  if(HarmonicToTime > 1){
    if(NbrHarmonics != 2){
      Msg(ERROR, "HarmonicToTime Conversion expects 2 Harmonics");
    }
    for(k = 0 ; k < HarmonicToTime ; k++){
      p = TWO_PI * k / (HarmonicToTime-1);
      for(i = 0 ; i < NbrNodes ; i++){
	for(j = 0 ; j < Size ; j++){
	  fprintf(PostStream, "%.8g ",
		  Value[i].Val[        j] * cos(p) -
		  Value[i].Val[MAX_DIM+j] * sin(p));
	}
	fprintf(PostStream, " ");
      }
      fprintf(PostStream, " ");
    }
  }    
  else{
    for(k = 0 ; k < NbrHarmonics ; k++) {
      for(i = 0 ; i < NbrNodes ; i++){
	for(j = 0 ; j < Size ; j++){
	  fprintf(PostStream, "%.8g ", Value[i].Val[MAX_DIM*k+j]);
	}
	fprintf(PostStream, " ");
      }
      fprintf(PostStream, " ");
    }
  }

  if(TimeStep == NbrTimeSteps-1 || Format == FORMAT_TIME_TABLE){
    fprintf(PostStream, "\n");
  }

}

void  Print_Adapt(double * Dummy){
  if(Dummy[4]) fprintf(PostStream, "%d\n", (int)Dummy[4]) ;
  fprintf(PostStream, "%d %g %g %g\n", 
	  (int)Dummy[0], Dummy[1], Dummy[2], Dummy[3]);
}

/* ------------------------------------------------------------------------ */
/*  P r i n t _ P o s t E l e m e n t                                       */
/* ------------------------------------------------------------------------ */

void  Print_PostElement(int Format, int Contour, int Store, 
			double Time, int TimeStep, int NbTimeStep, 
			int NbHarmonic, int HarmonicToTime, double *Dummy,
			struct PostElement * PE){

  static int Warning_FirstHarmonic = 0 ;
  struct PostElement *PE2 ;

  if(Contour){
    if(PE->Value[0].Type != SCALAR)
      Msg(ERROR, "Non Scalar Element %d in Contour Creation", PE->Index);
    if(NbTimeStep != 1)
      Msg(ERROR, "Contour Creation not Allowed for Multiple Time Steps");
    if(Current.NbrHar != 1 && !Warning_FirstHarmonic){
      Msg(WARNING, "Contour Creation done only for First Harmonic: Please use Re[] or Im[]");
      Warning_FirstHarmonic = 1 ;
    }
    if(Store)
      List_Add(PostElement_L, &PE) ;
    else{
      PE2 = PartialCopy_PostElement(PE) ;
      List_Add(PostElement_L, &PE2) ;
    }
    return ;
  }

  switch(Format){
  case FORMAT_GMSH :
    Print_Gmsh(TimeStep, NbTimeStep, NbHarmonic, HarmonicToTime,
	       PE->Type, PE->Index, PE->NbrNodes, PE->x, PE->y, PE->z, PE->Value) ;
    break ;
  case FORMAT_GMSH_NL :
    Print_NewGmsh(TimeStep, NbTimeStep, NbHarmonic, HarmonicToTime,
		  PE->Type, PE->Index, PE->NbrNodes, PE->x, PE->y, PE->z, PE->Value) ;
    break ;
  case FORMAT_GNUPLOT :
    Print_Gnuplot(Format, Time, TimeStep, NbTimeStep, NbHarmonic, HarmonicToTime,
		  PE->Type, PE->Index, PE->NbrNodes, PE->x, PE->y, PE->z, Dummy, PE->Value) ;
    break ;
  case FORMAT_SPACE_TABLE :
  case FORMAT_TIME_TABLE :
    Print_Tabular(Format, Time, TimeStep, NbTimeStep, NbHarmonic, HarmonicToTime,
		  PE->Type, PE->Index, PE->NbrNodes, PE->x, PE->y, PE->z, Dummy, PE->Value) ;
    break ;
  case FORMAT_ADAPT:
    Print_Adapt(Dummy) ;
    break ;
  default :
    Msg(ERROR, "Unknown Format in Print_PostElement");
  }
}


/* ------------------------------------------------------------------------ */
/*  P r i n t _ V a l u e                                                   */
/* ------------------------------------------------------------------------ */

void  Print_PostValue(int Format, struct Value * Value, int NbHarmonic, double Time, 
		      int Flag_PrintTime, int Flag_NewLine) {

  int  k ;

  if (Flag_PrintTime) fprintf(PostStream, "%.8g", Time) ;

  switch (Value->Type) {
  case SCALAR :
    for (k = 0 ; k < NbHarmonic ; k++)
      fprintf(PostStream, " %.8g", Value->Val[MAX_DIM*k]) ;
    break ;
  case VECTOR :
  case TENSOR_DIAG :
    for (k = 0 ; k < NbHarmonic ; k++)
      fprintf(PostStream, " %.8g %.8g %.8g",
	      Value->Val[MAX_DIM*k  ], 
	      Value->Val[MAX_DIM*k+1],
	      Value->Val[MAX_DIM*k+2]) ;
    break ;
  case TENSOR_SYM :
    for (k = 0 ; k < NbHarmonic ; k++)
      fprintf(PostStream, " %.8g %.8g %.8g %.8g %.8g %.8g",
	      Value->Val[MAX_DIM*k  ], 
	      Value->Val[MAX_DIM*k+1],
	      Value->Val[MAX_DIM*k+2],
	      Value->Val[MAX_DIM*k+3],
	      Value->Val[MAX_DIM*k+4],
	      Value->Val[MAX_DIM*k+5]) ;
    break ;
  case TENSOR :
    for (k = 0 ; k < NbHarmonic ; k++)
      fprintf(PostStream, " %.8g %.8g %.8g %.8g %.8g %.8g %.8g %.8g %.8g",
	      Value->Val[MAX_DIM*k  ], 
	      Value->Val[MAX_DIM*k+1],
	      Value->Val[MAX_DIM*k+2],
	      Value->Val[MAX_DIM*k+3],
	      Value->Val[MAX_DIM*k+4],
	      Value->Val[MAX_DIM*k+5],
	      Value->Val[MAX_DIM*k+6],
	      Value->Val[MAX_DIM*k+7],
	      Value->Val[MAX_DIM*k+8]) ;
    break ;
  }
  if (Flag_NewLine) fprintf(PostStream, "\n") ;
}

