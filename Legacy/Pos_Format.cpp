// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to <getdp@geuz.org>.

#include <strings.h>
#include <math.h>
#include "GetDPVersion.h"
#include "ProData.h"
#include "ProDefine.h"
#include "GeoData.h"
#include "DofData.h"
#include "Pos_Iso.h"
#include "Pos_Format.h"
#include "Pos_Element.h"
#include "Pos_Formulation.h"
#include "F.h"
#include "Cal_Value.h"
#include "Cal_Quantity.h"
#include "MallocUtils.h"
#include "Message.h"

#define TWO_PI             6.2831853071795865

#define NBR_MAX_ISO  200

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern int    Flag_BIN ;

extern FILE   *PostStream ;

/* bricolage: en attendant de trouver une meilleure solution pour les
   sorties ascii en format Gmsh (au niveau allocation memoire), je
   laisse la sortie GmshParsed par defaut. */

static List_T *PostElement_L = NULL ;
static List_T *TimeValue_L = NULL ;

static int     Gmsh_StartNewView = 0 ;
static int     NbSP, NbVP, NbTP, NbSL, NbVL, NbTL, NbST, NbVT, NbTT;
static int     NbSQ, NbVQ, NbTQ, NbSS, NbVS, NbTS, NbSH, NbVH, NbTH;
static int     NbSI, NbVI, NbTI, NbSY, NbVY, NbTY;
static int     NbT2;
static List_T *SP = NULL, *VP = NULL, *TP = NULL;
static List_T *SL = NULL, *VL = NULL, *TL = NULL;
static List_T *ST = NULL, *VT = NULL, *TT = NULL;
static List_T *SQ = NULL, *VQ = NULL, *TQ = NULL;
static List_T *SS = NULL, *VS = NULL, *TS = NULL;
static List_T *SH = NULL, *VH = NULL, *TH = NULL;
static List_T *SI = NULL, *VI = NULL, *TI = NULL;
static List_T *SY = NULL, *VY = NULL, *TY = NULL;
static List_T *T2D = NULL, *T2C = NULL;

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ P o s t F o r m a t / H e a d e r / F o o t e r           */
/* ------------------------------------------------------------------------ */

void  Format_PostFormat(int Format)
{
  switch(Format){
  case FORMAT_GMSH :
    if(Flag_BIN){/* bricolage */
      fprintf(PostStream, "$PostFormat /* Gmsh 1.2, %s */\n",
	      Flag_BIN ? "binary" : "ascii") ;
      fprintf(PostStream, "1.2 %d %d\n", Flag_BIN, (int)sizeof(double)) ;
      fprintf(PostStream, "$EndPostFormat\n") ;
    }
    break ;
  case FORMAT_GNUPLOT :
    fprintf(PostStream, "# GetDP %s, %s\n", GETDP_VERSION, 
	    Flag_BIN ? "binary" : "ascii") ;
    break ;
  }
}

void  Format_PostHeader(int Format, int Contour, 
			int NbTimeStep, int HarmonicToTime,
			int Type, int Order,
			char *Name1, char *Name2)
{
  char name[256] ;

  if(Contour){
    if(!PostElement_L) 
      PostElement_L = List_Create(20, 20, sizeof(struct PostElement*));
    else
      List_Reset(PostElement_L);
  }

  if(Name1 && Name2) {
    strcpy(name, Order ? Name1 : Name2) ;
    strcat(name, Get_StringForDefine(PostSubOperation_CombinationType, Type)) ;
    strcat(name, Order ? Name2 : Name1) ;
  }
  else if(Name1)
    strcpy(name, Name1) ;
  else if(Name2)
    strcpy(name, Name2) ;
  else
    strcpy(name, "unnamed");

  switch(Format){
  case FORMAT_GMSH_PARSED :
    fprintf(PostStream, "View \"%s\" {\n", name) ;
    Gmsh_StartNewView = 1 ;
    break ;
  case FORMAT_GMSH :
    if(Flag_BIN){ /* bricolage */
      fprintf(PostStream, "$View /* %s */\n", name);
      fprintf(PostStream, "%s ", name);
    }
    else{
      fprintf(PostStream, "View \"%s\" {\n", name) ;
    }
    Gmsh_StartNewView = 1 ;
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

void Gmsh_StringStart(int Format, double x, double y, double style)
{
  double d;
  if(Flag_BIN){ /* bricolage: should use Format instead */
    List_Add(T2D, &x);
    List_Add(T2D, &y);
    List_Add(T2D, &style); 
    d = List_Nbr(T2C);
    List_Add(T2D, &d); 
    NbT2++;
  }
  else{
    fprintf(PostStream, "T2(%g,%g,%g){", x, y, style);
  }
}

void Gmsh_StringAdd(int Format, int first, char *text)
{
  int i;
  if(Flag_BIN){ /* bricolage: should use Format instead */
    for(i = 0; i < (int)strlen(text)+1; i++) 
      List_Add(T2C, &text[i]);
  }
  else{
    if(!first) 
      fprintf(PostStream, ",");
    fprintf(PostStream, "\"%s\"", text);
  }
}

void Gmsh_StringEnd(int Format)
{
  if(Flag_BIN){ /* bricolage: should use Format instead */
  }
  else{
    fprintf(PostStream, "};\n") ;
  }
}

void Format_PostFooter(struct PostSubOperation *PSO_P, int Store)
{
  List_T  * Iso_L[NBR_MAX_ISO] ;
  double    IsoMin = 1.e200, IsoMax = -1.e200, IsoVal = 0.0, freq, valr, vali ;
  int       NbrIso = 0 ; 
  int       iPost, iNode, iIso, f, iTime, One=1, i, j, NbTimeStep ;
  char      tmp[1024];
  struct PostElement *PE ;
  
  if ( (PSO_P->Format == FORMAT_GMSH || PSO_P->Format == FORMAT_GMSH_PARSED) ){
    
    if( !(NbTimeStep = List_Nbr(PSO_P->TimeStep_L)) )
      NbTimeStep = List_Nbr(Current.DofData->Solutions);
    
    switch(PSO_P->Legend){
      
    case LEGEND_TIME:
      Gmsh_StringStart(PSO_P->Format, PSO_P->LegendPosition[0],
		       PSO_P->LegendPosition[1], PSO_P->LegendPosition[2]);
      for (i = 0 ; i < NbTimeStep ; i++) {
	Pos_InitAllSolutions(PSO_P->TimeStep_L, i) ;
	valr = Current.DofData->CurrentSolution->Time ;
	for (j = 0 ; j < Current.NbrHar ; j++){
	  sprintf(tmp, "Step %d/%d: Time = %g", i+1, NbTimeStep, valr);
	  Gmsh_StringAdd(PSO_P->Format, (!i && !j), tmp);
	}
      }
      Gmsh_StringEnd(PSO_P->Format);
      break;
      
    case LEGEND_FREQUENCY:
      if(Current.NbrHar > 1) {
	Gmsh_StringStart(PSO_P->Format, PSO_P->LegendPosition[0],
			 PSO_P->LegendPosition[1], PSO_P->LegendPosition[2]);
	for (i = 0 ; i < NbTimeStep ; i++) {
	  Pos_InitAllSolutions(PSO_P->TimeStep_L, i) ;
	  for (j = 0 ; j < Current.NbrHar ; j+=2) { 
	    freq = 0.5*Current.DofData->Val_Pulsation[j/2]/M_PI ;
	    sprintf(tmp, "%g Hz (Real Part: COSINUS)", freq);
	    Gmsh_StringAdd(PSO_P->Format, (!i && !j), tmp);
	    sprintf(tmp, "%g Hz (Imaginary Part: -SINUS)", freq);
	    Gmsh_StringAdd(PSO_P->Format, 0, tmp);
	  } 
	}
	Gmsh_StringEnd(PSO_P->Format);
      }
      break;
      
    case LEGEND_EIGENVALUES:
      Gmsh_StringStart(PSO_P->Format, PSO_P->LegendPosition[0],
		       PSO_P->LegendPosition[1], PSO_P->LegendPosition[2]);
      for (i = 0 ; i < NbTimeStep ; i++) {
	Pos_InitAllSolutions(PSO_P->TimeStep_L, i) ;
	valr = Current.DofData->CurrentSolution->Time ;
	vali = Current.DofData->CurrentSolution->TimeImag ;
	for (j = 0 ; j < Current.NbrHar ; j+=2) { 
	  sprintf(tmp, "Eigenvalue %d/%d: %g %s i * %g (Real Part)", 
		  i+1, NbTimeStep, valr, (vali > 0) ? "+" : "-", 
		  (vali > 0) ? vali : -vali);
	  Gmsh_StringAdd(PSO_P->Format, (!i && !j), tmp);
	  sprintf(tmp, "Eigenvalue %d/%d: %g %s i * %g (Imaginary Part)", 
		  i+1, NbTimeStep, valr, (vali > 0) ? "+" : "-", 
		  (vali > 0) ? vali : -vali);
	  Gmsh_StringAdd(PSO_P->Format, 0, tmp);
	}
      }
      Gmsh_StringEnd(PSO_P->Format);
      break;
    }
  }

  if(PSO_P->Iso){

    for(iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);
      for (iNode = 0 ; iNode < PE->NbrNodes ; iNode++ ){
	IsoMin = std::min(IsoMin, PE->Value[iNode].Val[0]) ;
	IsoMax = std::max(IsoMax, PE->Value[iNode].Val[0]) ;
      }
    }

    if((NbrIso = PSO_P->Iso) < 0)
      NbrIso = List_Nbr(PSO_P->Iso_L) ;
    if(NbrIso > NBR_MAX_ISO) 
      Msg::Error("Too many Iso values");

    if(PSO_P->Format == FORMAT_GNUPLOT)
      fprintf(PostStream, "# NbIso = %d, Min = %g, Max = %g\n",
	      NbrIso, IsoMin, IsoMax) ;

    for(iIso = 0 ; iIso < NbrIso ; iIso++)
      Iso_L[iIso] = List_Create(10, 10, sizeof(struct PostElement*)) ;

    for(iPost = 0 ; iPost < List_Nbr(PostElement_L) ; iPost++){ 
      PE = *(struct PostElement**)List_Pointer(PostElement_L, iPost);
      for(iIso = 0 ; iIso < NbrIso ; iIso++){
	if(PSO_P->Iso > 0){
	  Cal_Iso(PE, Iso_L[iIso], IsoMin+iIso*(IsoMax-IsoMin)/(double)(NbrIso-1), 
		  IsoMin, IsoMax, PSO_P->DecomposeInSimplex) ;
	}
	else{
	  List_Read(PSO_P->Iso_L, iIso, &IsoVal) ;
	  Cal_Iso(PE, Iso_L[iIso], IsoVal, IsoMin, IsoMax, PSO_P->DecomposeInSimplex) ;
	}
      }
      if(!Store) Destroy_PostElement(PE);
    }

    for(iIso = 0 ; iIso < NbrIso ; iIso++){
      for(iPost = 0 ; iPost < List_Nbr(Iso_L[iIso]) ; iPost++){
	PE = *(struct PostElement**)List_Pointer(Iso_L[iIso], iPost) ;
	Format_PostElement(PSO_P->Format, 0, 0, 
			   Current.Time, 0, 1, 
			   Current.NbrHar, PSO_P->HarmonicToTime, 
			   NULL, PE,
			   PSO_P->ChangeOfCoordinates,
			   PSO_P->ChangeOfValues);
	Destroy_PostElement(PE) ;
      }
      List_Delete(Iso_L[iIso]) ;
      if(PSO_P->Format == FORMAT_GNUPLOT) fprintf(PostStream, "\n") ;
    }
  }

  switch(PSO_P->Format){
  case FORMAT_GMSH_PARSED :
    if(List_Nbr(TimeValue_L) > 1){
      fprintf(PostStream, "TIME{");
      for(iTime = 0; iTime < List_Nbr(TimeValue_L); iTime++){
	if(iTime) fprintf(PostStream, ",");
	fprintf(PostStream, "%g", *(double*)List_Pointer(TimeValue_L, iTime));
      }
      fprintf(PostStream, "};\n");
    }
    fprintf(PostStream, "};\n") ;
    break ;
  case FORMAT_GMSH :
    if(Flag_BIN){ /* bricolage */
      fprintf(PostStream, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d "
	      "%d %d %d %d %d %d %d %d %d %d %d 0 0\n",
	      List_Nbr(TimeValue_L),
	      NbSP, NbVP, NbTP, NbSL, NbVL, NbTL, NbST, NbVT, NbTT, 
	      NbSQ, NbVQ, NbTQ, NbSS, NbVS, NbTS, NbSH, NbVH, NbTH,
	      NbSI, NbVI, NbTI, NbSY, NbVY, NbTY, NbT2, List_Nbr(T2C));
      if(Flag_BIN){
	f = LIST_FORMAT_BINARY;
	fwrite(&One, sizeof(int), 1, PostStream);
      }
      else{
	f = LIST_FORMAT_ASCII;
      }
      List_WriteToFile(TimeValue_L, PostStream, f); 
      List_WriteToFile(SP, PostStream, f); List_WriteToFile(VP, PostStream, f);
      List_WriteToFile(TP, PostStream, f); 
      List_WriteToFile(SL, PostStream, f); List_WriteToFile(VL, PostStream, f); 
      List_WriteToFile(TL, PostStream, f);
      List_WriteToFile(ST, PostStream, f); List_WriteToFile(VT, PostStream, f);
      List_WriteToFile(TT, PostStream, f); 
      List_WriteToFile(SQ, PostStream, f); List_WriteToFile(VQ, PostStream, f);
      List_WriteToFile(TQ, PostStream, f); 
      List_WriteToFile(SS, PostStream, f); List_WriteToFile(VS, PostStream, f);
      List_WriteToFile(TS, PostStream, f);
      List_WriteToFile(SH, PostStream, f); List_WriteToFile(VH, PostStream, f);
      List_WriteToFile(TH, PostStream, f);
      List_WriteToFile(SI, PostStream, f); List_WriteToFile(VI, PostStream, f);
      List_WriteToFile(TI, PostStream, f);
      List_WriteToFile(SY, PostStream, f); List_WriteToFile(VY, PostStream, f);
      List_WriteToFile(TY, PostStream, f);
      List_WriteToFile(T2D, PostStream, f); List_WriteToFile(T2C, PostStream, f);
      fprintf(PostStream, "\n");
      fprintf(PostStream, "$EndView\n");
    }
    else{
      if(List_Nbr(TimeValue_L) > 1){
	fprintf(PostStream, "TIME{");
	for(iTime = 0; iTime < List_Nbr(TimeValue_L); iTime++){
	  if(iTime) fprintf(PostStream, ",");
	  fprintf(PostStream, "%g", *(double*)List_Pointer(TimeValue_L, iTime));
	}
	fprintf(PostStream, "};\n");
      }
      fprintf(PostStream, "};\n") ;
    }
    break ;
  case FORMAT_ADAPT :
    fprintf(PostStream, "$EndAdapt\n");
    break ;
  }
}

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ G m s h P a r s e d                                       */
/* ------------------------------------------------------------------------ */

void  Format_GmshParsed(double Time, int TimeStep, int NbTimeStep, int NbHarmonic, 
			int HarmonicToTime, int Type, int NbrNodes, 
			double *x, double *y, double *z, struct Value *Value)
{
  int     i,j,k;
  double  TimeMH ;
  struct Value  TmpValue ;

  if(Gmsh_StartNewView){
    Gmsh_StartNewView = 0 ;
    if(!TimeValue_L) TimeValue_L = List_Create(100,1000,sizeof(double));
    else List_Reset(TimeValue_L);
  }

  if (HarmonicToTime == 1)
    for(k = 0 ; k < NbHarmonic ; k++)
      List_Put(TimeValue_L, NbHarmonic*TimeStep+k, &Time);
  else
    for(k = 0 ; k < HarmonicToTime ; k++)
      List_Put(TimeValue_L, HarmonicToTime*TimeStep+k, &Time);	
  
  switch (Value[0].Type) {

  case SCALAR :

    if(TimeStep == 0){
      switch(Type){
      case POINT       : fprintf(PostStream, "SP("); break;
      case LINE        : fprintf(PostStream, "SL("); break;
      case TRIANGLE    : fprintf(PostStream, "ST("); break;
      case QUADRANGLE  : fprintf(PostStream, "SQ("); break;
      case TETRAHEDRON : fprintf(PostStream, "SS("); break;
      case HEXAHEDRON  : fprintf(PostStream, "SH("); break;
      case PRISM       : fprintf(PostStream, "SI("); break;
      case PYRAMID     : fprintf(PostStream, "SY("); break;
      case LINE_2      : fprintf(PostStream, "SL("); break;
      case TRIANGLE_2  : fprintf(PostStream, "ST("); break;
      case QUADRANGLE_2: fprintf(PostStream, "SQ("); break;
      case QUADRANGLE_2_8N: fprintf(PostStream, "SQ("); break;
      }    
      for(i = 0 ; i < NbrNodes ; i++){
	if(i) fprintf(PostStream, ",");
	fprintf(PostStream, "%.8g,%.8g,%.8g", x[i], y[i], z[i]);
      }
      fprintf(PostStream, "){");
    }

    if (HarmonicToTime == 1) {
      for(k = 0 ; k < NbHarmonic ; k++) {
	if(k || TimeStep) fprintf(PostStream, ",");
	for(i = 0 ; i < NbrNodes ; i++){
	  if(i) fprintf(PostStream, ",");
	  fprintf(PostStream, "%.8g", Value[i].Val[MAX_DIM*k]);
	}
      }
    }
    else {
      for(k = 0 ; k < HarmonicToTime ; k++){
	if(k || TimeStep) fprintf(PostStream, ",");
	for(i = 0 ; i < NbrNodes ; i++){
	  if(i) fprintf(PostStream, ",");
	  F_MHToTime0(k+i, &Value[i], &TmpValue, k, HarmonicToTime, &TimeMH) ;
	  fprintf(PostStream, "%.8g", TmpValue.Val[0]);
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
      case QUADRANGLE  : fprintf(PostStream, "VQ("); break;
      case TETRAHEDRON : fprintf(PostStream, "VS("); break;
      case HEXAHEDRON  : fprintf(PostStream, "VH("); break;
      case PRISM       : fprintf(PostStream, "VI("); break;
      case PYRAMID     : fprintf(PostStream, "VY("); break;
      case LINE_2      : fprintf(PostStream, "VL("); break;
      case TRIANGLE_2  : fprintf(PostStream, "VT("); break;
      case QUADRANGLE_2: fprintf(PostStream, "VQ("); break;
      case QUADRANGLE_2_8N: fprintf(PostStream, "VQ("); break;
      }
      for(i = 0 ; i < NbrNodes ; i++){
	if(i) fprintf(PostStream, ",");
	fprintf(PostStream, "%.8g,%.8g,%.8g", x[i], y[i], z[i]);
      }
      fprintf(PostStream, "){");
    }
    
    if (HarmonicToTime == 1) {
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
    else {
      for(k = 0 ; k < HarmonicToTime ; k++){
	if(k || TimeStep) fprintf(PostStream, ",");
	for(i = 0 ; i < NbrNodes ; i++){
	  if(i) fprintf(PostStream, ",");
	  F_MHToTime0(k+i, &Value[i], &TmpValue, k, HarmonicToTime, &TimeMH) ;
	  for(j = 0 ; j < 3 ; j++){
	    if(j) fprintf(PostStream, ",");
	    fprintf(PostStream, "%.8g", TmpValue.Val[j]);
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
    Msg::Error("Gmsh parsed format not done for Tensors");
    break;
    
  }
}

void  Format_Gmsh(double Time, int TimeStep, int NbTimeStep, int NbHarmonic, 
		  int HarmonicToTime, int Type, int NbrNodes, 
		  double *x, double *y, double *z, struct Value *Value)
{
  int            i,j,k;
  double         TimeMH ;
  struct Value   TmpValue ;
  static List_T *Current_L ;

  if(Gmsh_StartNewView){
    Gmsh_StartNewView = 0 ;
    NbSP = NbVP = NbTP = NbSL = NbVL = NbTL = 0;
    NbST = NbVT = NbTT = NbSQ = NbVQ = NbTQ = 0;
    NbSS = NbVS = NbTS = NbSH = NbVH = NbTH = 0;
    NbSI = NbVI = NbTI = NbSY = NbVY = NbTY = 0;
    NbT2 = 0;
    if(!SP) SP = List_Create(100,1000,sizeof(double)); else List_Reset(SP);
    if(!VP) VP = List_Create(100,1000,sizeof(double)); else List_Reset(VP);
    if(!TP) TP = List_Create(100,1000,sizeof(double)); else List_Reset(TP);
    if(!SL) SL = List_Create(100,1000,sizeof(double)); else List_Reset(SL);
    if(!VL) VL = List_Create(100,1000,sizeof(double)); else List_Reset(VL);
    if(!TL) TL = List_Create(100,1000,sizeof(double)); else List_Reset(TL);
    if(!ST) ST = List_Create(100,1000,sizeof(double)); else List_Reset(ST);
    if(!VT) VT = List_Create(100,1000,sizeof(double)); else List_Reset(VT);
    if(!TT) TT = List_Create(100,1000,sizeof(double)); else List_Reset(TT);
    if(!SQ) SQ = List_Create(100,1000,sizeof(double)); else List_Reset(SQ);
    if(!VQ) VQ = List_Create(100,1000,sizeof(double)); else List_Reset(VQ);
    if(!TQ) TQ = List_Create(100,1000,sizeof(double)); else List_Reset(TQ);
    if(!SS) SS = List_Create(100,1000,sizeof(double)); else List_Reset(SS);
    if(!VS) VS = List_Create(100,1000,sizeof(double)); else List_Reset(VS);
    if(!TS) TS = List_Create(100,1000,sizeof(double)); else List_Reset(TS);
    if(!SH) SH = List_Create(100,1000,sizeof(double)); else List_Reset(SH);
    if(!VH) VH = List_Create(100,1000,sizeof(double)); else List_Reset(VH);
    if(!TH) TH = List_Create(100,1000,sizeof(double)); else List_Reset(TH);
    if(!SI) SI = List_Create(100,1000,sizeof(double)); else List_Reset(SI);
    if(!VI) VI = List_Create(100,1000,sizeof(double)); else List_Reset(VI);
    if(!TI) TI = List_Create(100,1000,sizeof(double)); else List_Reset(TI);
    if(!SY) SY = List_Create(100,1000,sizeof(double)); else List_Reset(SY);
    if(!VY) VY = List_Create(100,1000,sizeof(double)); else List_Reset(VY);
    if(!TY) TY = List_Create(100,1000,sizeof(double)); else List_Reset(TY);
    if(!T2D) T2D = List_Create(100,1000,sizeof(double)); else List_Reset(T2D);
    if(!T2C) T2C = List_Create(100,1000,sizeof(char)); else List_Reset(T2C);
    if(!TimeValue_L) TimeValue_L = List_Create(100,1000,sizeof(double));
    else List_Reset(TimeValue_L);
  }

  switch (Value[0].Type) {

  case SCALAR :

    if(TimeStep == 0){
      switch(Type){
      case POINT       : Current_L = SP ; NbSP++ ; break ;
      case LINE        : Current_L = SL ; NbSL++ ; break ;
      case TRIANGLE    : Current_L = ST ; NbST++ ; break ;
      case QUADRANGLE  : Current_L = SQ ; NbSQ++ ; break ;
      case TETRAHEDRON : Current_L = SS ; NbSS++ ; break ;
      case HEXAHEDRON  : Current_L = SH ; NbSH++ ; break ;
      case PRISM       : Current_L = SI ; NbSI++ ; break ;
      case PYRAMID     : Current_L = SY ; NbSY++ ; break ;
      case LINE_2      : Current_L = SL ; NbSL++ ; break ;
      case TRIANGLE_2  : Current_L = ST ; NbST++ ; break ;
      case QUADRANGLE_2: Current_L = SQ ; NbSQ++ ; break ;
      case QUADRANGLE_2_8N: Current_L = SQ ; NbSQ++ ; break ;
      }
      for(i = 0 ; i < NbrNodes ; i++) List_Add(Current_L, &x[i]);
      for(i = 0 ; i < NbrNodes ; i++) List_Add(Current_L, &y[i]);
      for(i = 0 ; i < NbrNodes ; i++) List_Add(Current_L, &z[i]);
    }
    if (HarmonicToTime == 1)
      for(k = 0 ; k < NbHarmonic ; k++){
	List_Put(TimeValue_L, NbHarmonic*TimeStep+k, &Time);
	for(i = 0 ; i < NbrNodes ; i++)
	  List_Add(Current_L, &Value[i].Val[MAX_DIM*k]);
      }
    else
      for(k = 0 ; k < HarmonicToTime ; k++){
	List_Put(TimeValue_L, HarmonicToTime*TimeStep+k, &Time);	
	for(i = 0 ; i < NbrNodes ; i++){
	  F_MHToTime0(k+i, &Value[i], &TmpValue, k, HarmonicToTime, &TimeMH) ;
	  List_Add(Current_L, &TmpValue.Val[0]);
	}
      }
    break ;

  case VECTOR :

    if(TimeStep == 0){
      switch(Type){
      case POINT       : Current_L = VP ; NbVP++ ; break ;
      case LINE        : Current_L = VL ; NbVL++ ; break ;
      case TRIANGLE    : Current_L = VT ; NbVT++ ; break ;
      case QUADRANGLE  : Current_L = VQ ; NbVQ++ ; break ;
      case TETRAHEDRON : Current_L = VS ; NbVS++ ; break ;
      case HEXAHEDRON  : Current_L = VH ; NbVH++ ; break ;
      case PRISM       : Current_L = VI ; NbVI++ ; break ;
      case PYRAMID     : Current_L = VY ; NbVY++ ; break ;
      case LINE_2      : Current_L = VL ; NbVL++ ; break ;
      case TRIANGLE_2  : Current_L = VT ; NbVT++ ; break ;
      case QUADRANGLE_2: Current_L = VQ ; NbVQ++ ; break ;
      case QUADRANGLE_2_8N: Current_L = VQ ; NbVQ++ ; break ;
      }
      for(i = 0 ; i < NbrNodes ; i++) List_Add(Current_L, &x[i]);
      for(i = 0 ; i < NbrNodes ; i++) List_Add(Current_L, &y[i]);
      for(i = 0 ; i < NbrNodes ; i++) List_Add(Current_L, &z[i]);
    }
    if (HarmonicToTime == 1)
      for(k = 0 ; k < NbHarmonic ; k++){
	List_Put(TimeValue_L, NbHarmonic*TimeStep+k, &Time);
	for(i = 0 ; i < NbrNodes ; i++)
	  for(j = 0 ; j < 3 ; j++)
	    List_Add(Current_L, &Value[i].Val[MAX_DIM*k+j]);
      }
    else
      for(k = 0 ; k < HarmonicToTime ; k++){
	List_Put(TimeValue_L, HarmonicToTime*TimeStep+k, &Time);
	for(i = 0 ; i < NbrNodes ; i++){
	  F_MHToTime0(k+i, &Value[i], &TmpValue, k, HarmonicToTime, &TimeMH) ;
	  for(j = 0 ; j < 3 ; j++)
	    List_Add(Current_L, &TmpValue.Val[j]);
	}
      }
    break ;

  case TENSOR_DIAG :
  case TENSOR_SYM :
  case TENSOR :
    Msg::Error("Gmsh format not done for Tensors");
    break;
    
  }
}

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ G n u p l o t                                             */
/* ------------------------------------------------------------------------ */

int Get_GmshElementType(int Type)
{
  switch(Type){
  case POINT :         return(15) ; 
  case LINE :	       return(1)  ; 
  case TRIANGLE :      return(2)  ; 
  case QUADRANGLE :    return(3)  ; 
  case TETRAHEDRON :   return(4)  ;    
  case HEXAHEDRON :    return(5)  ; 
  case PRISM :	       return(6)  ; 
  case PYRAMID :       return(7)  ; 
  case LINE_2 :	       return(8)  ; 
  case TRIANGLE_2 :    return(9)  ; 
  case QUADRANGLE_2 :  return(10) ; 
  case TETRAHEDRON_2 : return(11) ;      
  case HEXAHEDRON_2 :  return(12) ; 
  case PRISM_2 :       return(13) ; 
  case PYRAMID_2 :     return(14) ; 
  case QUADRANGLE_2_8N : return(16) ; 
  default : 
    Msg::Error("Unknown type of element in Gmsh format") ;
    return(-1) ;
  }
}

void Format_Gnuplot(int Format, double Time, int TimeStep, int NbrTimeSteps,
		    int NbrHarmonics, int HarmonicToTime, 
		    int ElementType, int NumElement, int NbrNodes,
		    double *x, double *y, double *z, double *Dummy,
		    struct Value *Value)
{
  static int  Size, TmpIndex ;
  static double  * TmpValues ;
  int         i, j, k, t, i2, k2 ;
  double      TimeMH ;
  struct Value  TmpValue ;

  if(TimeStep == 0){
    switch(Value->Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : Size = 3 ; break ;
    case TENSOR_SYM  : Size = 6 ; break ;
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

    for(i = 0 ; i <= NbrNodes ; i++){ /* New line for each node, closed loop for tri/qua */
      
      if(i != NbrNodes)
	i2 = i ;
      else{
	if(NbrNodes < 3) break ;
	else i2 = 0 ;
      }

      fprintf(PostStream, "%d %d ", Get_GmshElementType(ElementType), NumElement);
      fprintf(PostStream, " %.16g %.16g %.16g ", x[i2], y[i2], z[i2]);
      if(Dummy){
	if(Dummy[3]<0){
	  if(!i)
	    fprintf(PostStream, " %.16g %.16g 0 ", Dummy[0], Dummy[2]);
	  else
	    fprintf(PostStream, " %.16g %.16g 0 ", Dummy[1], Dummy[2]);
	}
	else
	  fprintf(PostStream, " %.16g %.16g %.16g ", Dummy[0], Dummy[1], Dummy[2]);
      }
      else
	fprintf(PostStream, " 0 0 0 ");

      for(t = 0 ; t < NbrTimeSteps ; t++){

	if (HarmonicToTime == 1) {
	  for(k = 0 ; k < NbrHarmonics ; k++) {
	    for(j = 0 ; j < Size ; j++){
	      fprintf(PostStream, " %.16g", 
		      TmpValues[ t*NbrNodes*NbrHarmonics*Size
			       + i2*NbrHarmonics*Size
			       + k*Size
			       + j ]);
	    }
	    fprintf(PostStream, " ");
	  }
	}
	else {
	  TmpValue.Type = Value->Type ;
	  for(k = 0 ; k < HarmonicToTime ; k++){

	    for(k2 = 0 ; k2 < NbrHarmonics ; k2++)
	      for(j = 0 ; j < Size ; j++)
		TmpValue.Val[MAX_DIM*k2+j] =
		  TmpValues[ t*NbrNodes*NbrHarmonics*Size
			   + i2*NbrHarmonics*Size
			   + k2*Size
			   + j ] ;

	    F_MHToTime0(k, &TmpValue, &TmpValue, k, HarmonicToTime, &TimeMH) ;
	    for(j = 0 ; j < Size ; j++)
	      fprintf(PostStream, "%.16g", TmpValue.Val[0]);
	    fprintf(PostStream, " ");
	  }
	}
	fprintf(PostStream, " ");

      } /* for t */
      fprintf(PostStream, "\n");      

    } /* for i */
    if(NbrNodes > 1) fprintf(PostStream, "\n");

    Free(TmpValues);
  }
}

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ T a b u l a r                                             */
/* ------------------------------------------------------------------------ */

void  Format_Tabular(int Format, double Time, int TimeStep, int NbrTimeSteps,
		     int NbrHarmonics, int HarmonicToTime, 
		     int ElementType, int NumElement, int NbrNodes,
		     double *x, double *y, double *z, double *Dummy,
		     struct Value *Value)
{
  static int  Size ;
  int         i,j,k ;
  double      TimeMH ;
  struct Value  TmpValue ;

  if(TimeStep == 0){
    switch(Value->Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : Size = 3 ; break ;
    case TENSOR_SYM  : Size = 6 ; break ;
    case TENSOR      : Size = 9 ; break ;
    }
  }

  if(Format == FORMAT_SPACE_TABLE){
    if(TimeStep == 0){
      fprintf(PostStream, "%d %d ", Get_GmshElementType(ElementType), NumElement);
      for(i=0 ; i<NbrNodes ; i++)
	fprintf(PostStream, " %.16g %.16g %.16g ", x[i], y[i], z[i]);
      if(Dummy) 
	fprintf(PostStream, " %.16g %.16g %.16g ", Dummy[0], Dummy[1],  Dummy[2]);
      else
	fprintf(PostStream, " 0 0 0 ");
    }
  }

  if (HarmonicToTime == 1) {
    if(Format == FORMAT_TIME_TABLE){
      fprintf(PostStream, "%d %.16g ", TimeStep, Time);
      for(i=0 ; i<NbrNodes ; i++)
	fprintf(PostStream, " %.16g %.16g %.16g ", x[i], y[i], z[i]);
    }
    for(k = 0 ; k < NbrHarmonics ; k++) {
      for(i = 0 ; i < NbrNodes ; i++){
	for(j = 0 ; j < Size ; j++){
	  fprintf(PostStream, " %.16g", Value[i].Val[MAX_DIM*k+j]);
	}
	fprintf(PostStream, " ");
      }
      fprintf(PostStream, " ");
    }
  }
  else {
    for(k = 0 ; k < HarmonicToTime ; k++){
      for(i = 0 ; i < NbrNodes ; i++){
	F_MHToTime0(k+i, &Value[i], &TmpValue, k, HarmonicToTime, &TimeMH) ;
	if (!i && Format == FORMAT_TIME_TABLE) {
	  fprintf(PostStream, "%d %.16g ", TimeStep, TimeMH);
	  for(i=0 ; i<NbrNodes ; i++)
	    fprintf(PostStream, " %.16g %.16g %.16g ", x[i], y[i], z[i]);
	}
	for(j = 0 ; j < Size ; j++)
	  fprintf(PostStream, " %.16g", TmpValue.Val[j]) ;
	fprintf(PostStream, " ");
      }
      if(Format == FORMAT_TIME_TABLE)
	fprintf(PostStream, "\n");
    }
  }

  if(TimeStep == NbrTimeSteps-1 || Format == FORMAT_TIME_TABLE)
    fprintf(PostStream, "\n");
}

void  Format_Adapt(double * Dummy)
{
  if(Dummy[4]) fprintf(PostStream, "%d\n", (int)Dummy[4]) ;
  fprintf(PostStream, "%d %g %g %g\n", 
	  (int)Dummy[0], Dummy[1], Dummy[2], Dummy[3]);
}

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ P o s t E l e m e n t                                     */
/* ------------------------------------------------------------------------ */

void  Format_PostElement(int Format, int Contour, int Store, 
			 double Time, int TimeStep, int NbTimeStep, 
			 int NbrHarmonics, int HarmonicToTime, double *Dummy,
			 struct PostElement * PE, 
			 int *ChangeOfCoordinates,
			 List_T *ChangeOfValues)
{
  int    i, j, k, l, Num_Element ;
  struct PostElement  * PE2 ;
  struct Value          Value ;

  static int Warning_FirstHarmonic = 0 ;

  if(PE->Index != NO_ELEMENT)
    Num_Element = Geo_GetGeoElement(PE->Index)->Num ;
  else
    Num_Element = 0 ;

  if(Contour){
    if(PE->Value[0].Type != SCALAR)
      Msg::Error("Non scalar Element %d in contour creation", Num_Element);
    if(NbTimeStep != 1)
      Msg::Error("Contour creation not allowed for multiple time steps");
    if(Current.NbrHar != 1 && !Warning_FirstHarmonic){
      Msg::Warning("Contour creation done only for first harmonic (use Re[] or Im[])");
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

  if(ChangeOfCoordinates && ChangeOfCoordinates[0] >= 0){
    for(i=0 ; i<PE->NbrNodes ; i++){
      Current.x = PE->x[i];
      Current.y = PE->y[i];
      Current.z = PE->z[i];
      for(j = 0; j<9 ; j++) Current.Val[j] = PE->Value[i].Val[j];
      Get_ValueOfExpressionByIndex(ChangeOfCoordinates[0], NULL, 0., 0., 0., &Value) ; 
      PE->x[i] = Value.Val[0];
      Get_ValueOfExpressionByIndex(ChangeOfCoordinates[1], NULL, 0., 0., 0., &Value) ; 
      PE->y[i] = Value.Val[0];
      Get_ValueOfExpressionByIndex(ChangeOfCoordinates[2], NULL, 0., 0., 0., &Value) ; 
      PE->z[i] = Value.Val[0];
    }
  }

  if(ChangeOfValues && List_Nbr(ChangeOfValues) > 0){
    for(i=0 ; i<PE->NbrNodes ; i++){
      Current.x = PE->x[i];
      Current.y = PE->y[i];
      Current.z = PE->z[i];
      for(k=0 ; k<Current.NbrHar ; k++){
	for(j = 0; j<9 ; j++) Current.Val[j] = PE->Value[i].Val[MAX_DIM*k+j];
	for(l=0 ; l<List_Nbr(ChangeOfValues) ; l++){
	  Get_ValueOfExpressionByIndex(*(int*)List_Pointer(ChangeOfValues, l), 
				       NULL, 0., 0., 0., &Value) ; 
	  PE->Value[i].Val[MAX_DIM*k+l] = Value.Val[0];
	}
      }
    }
  }

  switch(Format){
  case FORMAT_GMSH_PARSED :
    Format_GmshParsed(Time, TimeStep, NbTimeStep, NbrHarmonics, HarmonicToTime,
		      PE->Type, PE->NbrNodes, PE->x, PE->y, PE->z, 
		      PE->Value) ;
    break ;
  case FORMAT_GMSH :
    if(Flag_BIN){/* bricolage */
      Format_Gmsh(Time, TimeStep, NbTimeStep, NbrHarmonics, HarmonicToTime,
		  PE->Type, PE->NbrNodes, PE->x, PE->y, PE->z, 
		  PE->Value) ;
    }
    else{
      Format_GmshParsed(Time, TimeStep, NbTimeStep, NbrHarmonics, HarmonicToTime,
			PE->Type, PE->NbrNodes, PE->x, PE->y, PE->z, 
			PE->Value) ;
    }
    break ;
  case FORMAT_GNUPLOT :
    Format_Gnuplot(Format, Time, TimeStep, NbTimeStep, NbrHarmonics, HarmonicToTime,
		   PE->Type, Num_Element, PE->NbrNodes, PE->x, PE->y, PE->z, Dummy, 
		   PE->Value) ;
    break ;
  case FORMAT_SPACE_TABLE :
  case FORMAT_TIME_TABLE :
    Format_Tabular(Format, Time, TimeStep, NbTimeStep, NbrHarmonics, HarmonicToTime,
		   PE->Type, Num_Element, PE->NbrNodes, PE->x, PE->y, PE->z, Dummy, 
		   PE->Value) ;
    break ;
  case FORMAT_ADAPT:
    Format_Adapt(Dummy) ;
    break ;
  default :
    Msg::Error("Unknown format in Format_PostElement");
  }
}


/* ------------------------------------------------------------------------ */
/*  F o r m a t _ P o s t V a l u e                                         */
/* ------------------------------------------------------------------------ */

void Format_PostValue(int Format, int Flag_Comma, int Group_FunctionType,
		      double Time, int iRegion, int numRegion, int NbrRegion,
		      int NbrHarmonics, int HarmonicToTime, int Flag_NoNewLine,
		      struct Value * Value)
{
  static int  Size ;
  int  j, k ;
  double TimeMH, Freq ;
  double x, y, z ;
  static struct Value  TmpValue, *TmpValues ;

  if(iRegion == 0){
    switch(Value->Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : Size = 3 ; break ;
    case TENSOR_SYM  : Size = 6 ; break ;
    case TENSOR      : Size = 9 ; break ;
    }
  }

  if (Format == FORMAT_REGION_TABLE) {
    if(iRegion == 0){
      fprintf(PostStream, "%d\n", NbrRegion) ;
    }
    fprintf(PostStream, "%d", numRegion) ;
    for (k = 0 ; k < NbrHarmonics ; k++) {
      for(j = 0 ; j < Size ; j++) {
	if (Flag_Comma) fprintf(PostStream, ",");
	fprintf(PostStream, " %.16g", Value->Val[MAX_DIM*k+j]) ;
      }
      fprintf(PostStream, "\n") ;
    }
  }

  else if (Format == FORMAT_GMSH) {
    if (Group_FunctionType == NODESOF)
      Geo_GetNodesCoordinates(1, &numRegion, &x, &y, &z) ;
    else {
      x=y=z=0.;
      Msg::Warning("Post Format \'Gmsh\' not adapted for global quantities supported"
		   " by Regions. Zero coordinates are considered.") ;
    }
    Format_GmshParsed(Time, 0, 1, NbrHarmonics, HarmonicToTime,
		      POINT, 1, &x, &y, &z,
		      Value) ;
  }

  else {

    if(iRegion == 0){
      TmpValues = (struct Value*) Malloc(NbrRegion*sizeof(struct Value)) ;
    }

    Cal_CopyValue(Value, &TmpValues[iRegion]) ;

    if (iRegion == NbrRegion-1) {

      if (HarmonicToTime == 1) {
	switch (Format) {
	case FORMAT_FREQUENCY_TABLE :
	  if (NbrHarmonics == 1)
	    Msg::Error("FrequencyTable format not allowed (only one harmonic)") ;
	  break ;
	default :
	  fprintf(PostStream, "%.16g ", Time) ;
	  break ;
	}
	for (iRegion = 0 ; iRegion < NbrRegion ; iRegion++)
	  for (k = 0 ; k < NbrHarmonics ; k++) {
	    if (Format == FORMAT_FREQUENCY_TABLE && !(k%2) && iRegion==0) {
	      Freq = Current.DofData->Val_Pulsation[0] / TWO_PI ;
	      fprintf(PostStream, "%.16g ", Freq) ;
	    }
	    for(j = 0 ; j < Size ; j++)
	      fprintf(PostStream, " %.16g", TmpValues[iRegion].Val[MAX_DIM*k+j]) ;
	  }
	if (Flag_NoNewLine)
	  fprintf(PostStream, "  ") ;
	else
	  fprintf(PostStream, "\n") ;
      }
      else {
	for(k = 0 ; k < HarmonicToTime ; k++) {
	  for (iRegion = 0 ; iRegion < NbrRegion ; iRegion++) {
	    F_MHToTime0(k+iRegion, &TmpValues[iRegion], &TmpValue, 
			k, HarmonicToTime, &TimeMH) ;
	    if (iRegion == 0)  fprintf(PostStream, "%.16g ", TimeMH) ;
	    for(j = 0 ; j < Size ; j++)
	      fprintf(PostStream, " %.16g", TmpValue.Val[j]) ;
	  }
	  fprintf(PostStream, "\n") ;
	}
      }

      Free(TmpValues) ;
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ O O 1                                                     */
/* ------------------------------------------------------------------------ */

void  Format_OO1(int Format, double Time, int TimeStep, int NbrTimeSteps,
		 int NbrHarmonics, int HarmonicToTime, 
		 int ElementType, int NumElement, int NbrNodes,
		 double *x, double *y, double *z, double *Dummy,
		 struct Value *Value)
{
  static int  Size ;
  int         i,j,k ;

  if(TimeStep == 0){
    switch(Value->Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : Size = 3 ; break ;
    case TENSOR_SYM  : Size = 6 ; break ;
    case TENSOR      : Size = 9 ; break ;
    }
  }

  if(Format == FORMAT_SPACE_TABLE){
    if(TimeStep == 0){
      fprintf(PostStream, "%d %d ", Get_GmshElementType(ElementType), NumElement);
      for(i=0 ; i<NbrNodes ; i++)
	fprintf(PostStream, " %.16g %.16g %.16g ", x[i], y[i], z[i]);
      if(Dummy) 
	fprintf(PostStream, " %.16g %.16g %.16g ", Dummy[0], Dummy[1],  Dummy[2]);
      else
	fprintf(PostStream, " 0 0 0 ");
    }
  }

  if (HarmonicToTime == 1) {
    if(Format == FORMAT_TIME_TABLE){
      fprintf(PostStream, "%d %.16g ", TimeStep, Time);
      for(i=0 ; i<NbrNodes ; i++)
	fprintf(PostStream, " %.16g %.16g %.16g ", x[i], y[i], z[i]);
    }
    for(k = 0 ; k < NbrHarmonics ; k++) {
      for(i = 0 ; i < NbrNodes ; i++){
	for(j = 0 ; j < Size ; j++){
	  fprintf(PostStream, " %.16g", Value[i].Val[MAX_DIM*k+j]);
	}
	fprintf(PostStream, " ");
      }
      fprintf(PostStream, " ");
    }
  }

  if(TimeStep == NbrTimeSteps-1 || Format == FORMAT_TIME_TABLE)
    fprintf(PostStream, "\n");
}
