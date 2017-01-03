// GetDP - Copyright (C) 1997-2017 P. Dular and C. Geuzaine, University of Liege
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@onelab.info>.

#include <sstream>
#include <map>
#include <vector>
#include <string.h>
#include <math.h>
#include <set>

#include "GetDPVersion.h"
#include "GetDPConfig.h"
#include "ProData.h"
#include "ProDefine.h"
#include "ProParser.h"
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
#include "kissfft.hh"

#if defined(HAVE_GMSH)
#include <gmsh/PView.h>
#include <gmsh/PViewDataList.h>
#include <gmsh/PViewDataGModel.h>
#endif

#define TWO_PI             6.2831853071795865

#define NBR_MAX_ISO  200

#define SQU(a)     ((a)*(a))

extern struct Problem Problem_S ;
extern struct CurrentData Current ;

extern int    Flag_BIN, Flag_GMSH_VERSION;

extern FILE   *PostStream ;

static List_T *PostElement_L = NULL ;
static List_T *TimeValue_L = NULL ;

/* ------------------------------------------------------------------------ */
/*  Gmsh formats                                                            */
/* ------------------------------------------------------------------------ */

// global static lists for new-style Gmsh output (cannot be saved incrementally
// for each element)
static int Gmsh_StartNewView = 0 ;
static int NbSP, NbVP, NbTP, NbSL, NbVL, NbTL, NbST, NbVT, NbTT;
static int NbSQ, NbVQ, NbTQ, NbSS, NbVS, NbTS, NbSH, NbVH, NbTH;
static int NbSI, NbVI, NbTI, NbSY, NbVY, NbTY;
static int NbT2;
static std::vector<double> SP, VP, TP, SL, VL, TL, ST, VT, TT, SQ, VQ, TQ;
static std::vector<double> SS, VS, TS1 /* for petsc */, SH, VH, TH;
static std::vector<double> SI, VI, TI, SY, VY, TY, T2D;
static std::vector<char> T2C;
static char CurrentName[256] = "";
static int CurrentPartitionNumber = 0;

static void Gmsh_ResetStaticLists()
{
  NbSP = NbVP = NbTP = NbSL = NbVL = NbTL = 0;
  NbST = NbVT = NbTT = NbSQ = NbVQ = NbTQ = 0;
  NbSS = NbVS = NbTS = NbSH = NbVH = NbTH = 0;
  NbSI = NbVI = NbTI = NbSY = NbVY = NbTY = 0;
  NbT2 = 0;
  SP.clear(); VP.clear(); TP.clear(); SL.clear(); VL.clear(); TL.clear();
  ST.clear(); VT.clear(); TT.clear(); SQ.clear(); VQ.clear(); TQ.clear();
  SS.clear(); VS.clear(); TS1.clear(); SH.clear(); VH.clear(); TH.clear();
  SI.clear(); VI.clear(); TI.clear(); SY.clear(); VY.clear(); TY.clear();
  T2D.clear(); T2C.clear();
  if(!TimeValue_L) TimeValue_L = List_Create(100,1000000,sizeof(double));
  else List_Reset(TimeValue_L);
}

static void Gmsh_StringStart(int Format, double x, double y, double style)
{
  if(Flag_BIN){ /* bricolage: should use Format instead */
    T2D.push_back(x);
    T2D.push_back(y);
    T2D.push_back(style);
    T2D.push_back(T2C.size());
    NbT2++;
  }
  else if(PostStream){
    fprintf(PostStream, "T2(%g,%g,%g){", x, y, style);
  }
}

static void Gmsh_StringAdd(int Format, int first, char *text)
{
  int i;
  if(Flag_BIN){ /* bricolage: should use Format instead */
    for(i = 0; i < (int)strlen(text)+1; i++)
      T2C.push_back(text[i]);
  }
  else if(PostStream){
    if(!first)
      fprintf(PostStream, ",");
    fprintf(PostStream, "\"%s\"", text);
  }
}

static void Gmsh_StringEnd(int Format)
{
  if(Flag_BIN){ /* bricolage: should use Format instead */
  }
  else if(PostStream){
    fprintf(PostStream, "};\n") ;
  }
}

static int Gmsh_GetElementType(int Type)
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
    Message::Error("Unknown type of element in Gmsh format") ;
    return(-1) ;
  }
}

static void Gmsh_PrintElementNodeData(struct PostSubOperation *PSO_P, int numTimeStep,
                                      int numComp, int Nb[8], std::vector<double> *L[8])
{
  if(!PostStream) return;
  int N = 0;
  for(int i = 0; i < 8; i++) N += Nb[i];
  if(!N) return;
  int step = 0;
  for (int ts = 0; ts < numTimeStep; ts++) {
    Pos_InitAllSolutions(PSO_P->TimeStep_L, ts);
    for(int har = 0; har < Current.NbrHar; har++){
      fprintf(PostStream, "$ElementNodeData\n");
      fprintf(PostStream, "1\n");
      fprintf(PostStream, "\"%s\"\n", CurrentName);
      fprintf(PostStream, "1\n");
      fprintf(PostStream, "%.16g\n", Current.Time);
      fprintf(PostStream, "4\n");
      fprintf(PostStream, "%d\n", (PSO_P->OverrideTimeStepValue >= 0) ?
              PSO_P->OverrideTimeStepValue : (Current.NbrHar > 1 ? step :
                                              (int)Current.TimeStep));
      fprintf(PostStream, "%d\n", numComp);
      fprintf(PostStream, "%d\n", N);
      fprintf(PostStream, "%d\n", CurrentPartitionNumber);
      for(int i = 0; i < 8; i++){
        if(!Nb[i]) continue;
        int stride = (*L[i]).size() / Nb[i];
        for(unsigned int j = 0; j < (*L[i]).size(); j += stride){
          double *tmp = &(*L[i])[j];
          int num = (int)tmp[0];
          int mult = (stride - 1) / numTimeStep / Current.NbrHar / numComp;
          if(Flag_BIN){
            fwrite(&num, sizeof(int), 1, PostStream);
            fwrite(&mult, sizeof(int), 1, PostStream);
            fwrite(&tmp[1 + step * mult * numComp], sizeof(double), mult * numComp,
                   PostStream);
          }
          else{
            fprintf(PostStream, "%d %d", num, mult);
            for(int k = 0; k < mult * numComp; k++)
              fprintf(PostStream, " %.16g", tmp[1 + step * mult * numComp + k]);
            fprintf(PostStream, "\n");
          }
        }
      }
      fprintf(PostStream, "$EndElementNodeData\n");
      step++;
    }
  }
}

static void GmshParsed_PrintElement(double Time, int TimeStep, int NbTimeStep, int NbHarmonic,
                                    int HarmonicToTime, int Type, int NbrNodes,
                                    double *x, double *y, double *z, struct Value *Value)
{
  int     i,j,k,jj ;
  double  TimeMH ;
  struct Value  TmpValue ;
  int symIndex[9] = {0, 1, 2, 1, 3, 4, 2, 4, 5} ;
  int diagIndex[9] = {0, -1, -1, -1, 1, -1, -1, -1, 2} ;

  if(Gmsh_StartNewView){
    Gmsh_StartNewView = 0 ;
    Gmsh_ResetStaticLists();
  }

  if (HarmonicToTime == 1){
    if(NbHarmonic == 2 && NbTimeStep == 1){ // classical complex case
      double zero = 0., one = 1.;
      List_Put(TimeValue_L, 0, &zero);
      List_Put(TimeValue_L, 1, &one);
    }
    else{
      for(k = 0 ; k < NbHarmonic ; k++)
        List_Put(TimeValue_L, NbHarmonic*TimeStep+k, &Time);
    }
  }
  else
    for(k = 0 ; k < HarmonicToTime ; k++)
      List_Put(TimeValue_L, HarmonicToTime*TimeStep+k, &Time);

  if(!PostStream) return;

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
	fprintf(PostStream, "%.16g,%.16g,%.16g", x[i], y[i], z[i]);
      }
      fprintf(PostStream, "){");
    }

    if (HarmonicToTime == 1) {
      for(k = 0 ; k < NbHarmonic ; k++) {
	if(k || TimeStep) fprintf(PostStream, ",");
	for(i = 0 ; i < NbrNodes ; i++){
	  if(i) fprintf(PostStream, ",");
	  fprintf(PostStream, "%.16g", Value[i].Val[MAX_DIM*k]);
	}
      }
    }
    else {
      for(k = 0 ; k < HarmonicToTime ; k++){
	if(k || TimeStep) fprintf(PostStream, ",");
	for(i = 0 ; i < NbrNodes ; i++){
	  if(i) fprintf(PostStream, ",");
	  F_MHToTime0(k+i, &Value[i], &TmpValue, k, HarmonicToTime, &TimeMH) ;
	  fprintf(PostStream, "%.16g", TmpValue.Val[0]);
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
	fprintf(PostStream, "%.16g,%.16g,%.16g", x[i], y[i], z[i]);
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
	    fprintf(PostStream, "%.16g", Value[i].Val[MAX_DIM*k+j]);
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
	    fprintf(PostStream, "%.16g", TmpValue.Val[j]);
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

    if(TimeStep == 0){
      switch(Type){
      case POINT       : fprintf(PostStream, "TP("); break;
      case LINE        : fprintf(PostStream, "TL("); break;
      case TRIANGLE    : fprintf(PostStream, "TT("); break;
      case QUADRANGLE  : fprintf(PostStream, "TQ("); break;
      case TETRAHEDRON : fprintf(PostStream, "TS("); break;
      case HEXAHEDRON  : fprintf(PostStream, "TH("); break;
      case PRISM       : fprintf(PostStream, "TI("); break;
      case PYRAMID     : fprintf(PostStream, "TY("); break;
      case LINE_2      : fprintf(PostStream, "TL("); break;
      case TRIANGLE_2  : fprintf(PostStream, "TT("); break;
      case QUADRANGLE_2: fprintf(PostStream, "TQ("); break;
      case QUADRANGLE_2_8N: fprintf(PostStream, "TQ("); break;
      }
      for(i = 0 ; i < NbrNodes ; i++){
	if(i) fprintf(PostStream, ",");
	fprintf(PostStream, "%.16g,%.16g,%.16g", x[i], y[i], z[i]);
      }
      fprintf(PostStream, "){");
    }

    if (HarmonicToTime == 1) {
      for(k = 0 ; k < NbHarmonic ; k++) {
	if(k || TimeStep) fprintf(PostStream, ",");
	for(i = 0 ; i < NbrNodes ; i++){
          if(i) fprintf(PostStream, ",");
          for(j = 0 ; j < 9 ; j++){
	    if(j) fprintf(PostStream, ",");
	    if(Value[0].Type != TENSOR_DIAG) {
              if(Value[0].Type == TENSOR_SYM) jj = symIndex[j];
              else jj = j;
              fprintf(PostStream, "%.16g", Value[i].Val[MAX_DIM*k+jj]);
            }
            else {
              jj = diagIndex[j];
              if(jj == -1) fprintf(PostStream, "%.16g", 0.);
              else fprintf(PostStream, "%.16g", Value[i].Val[MAX_DIM*k+jj]);
            }
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
          for(j = 0 ; j < 9 ; j++){
	    if(j) fprintf(PostStream, ",");
            if(Value[0].Type != TENSOR_DIAG) {
              if(Value[0].Type == TENSOR_SYM) jj = symIndex[j];
              else jj = j;
              jj = symIndex[j];
              fprintf(PostStream, "%.16g", TmpValue.Val[jj]);
            }
            else {
              jj = diagIndex[j];
              if(jj == -1) fprintf(PostStream, "%.16g", 0.);
              else fprintf(PostStream, "%.16g", TmpValue.Val[jj]);
            }
	  }
        }
      }
    }

    if(TimeStep == NbTimeStep-1){
      fprintf(PostStream, "};\n") ;
    }
    break ;

  }

}

static void Gmsh_PrintElement(double Time, int TimeStep, int NbTimeStep, int NbHarmonic,
                              int HarmonicToTime, int Type, int ElementNum, int NbrNodes,
                              double *x, double *y, double *z, struct Value *Value,
                              struct PostSubOperation *PSO_P, int Store)
{
  int            i,j,k,jj ;
  double         TimeMH ;
  struct Value   TmpValue ;
  static std::vector<double> *Current_L ;
  int symIndex[9] = {0, 1, 2, 1, 3, 4, 2, 4, 5} ;
  int diagIndex[9] = {0, -1, -1, -1, 1, -1, -1, -1, 2} ;

  if(Gmsh_StartNewView){
    Gmsh_StartNewView = 0 ;
    Gmsh_ResetStaticLists();
  }

  switch (Value[0].Type) {

  case SCALAR :

    if(TimeStep == 0){
      switch(Type){
      case POINT       : Current_L = &SP ; NbSP++ ; break ;
      case LINE        : Current_L = &SL ; NbSL++ ; break ;
      case TRIANGLE    : Current_L = &ST ; NbST++ ; break ;
      case QUADRANGLE  : Current_L = &SQ ; NbSQ++ ; break ;
      case TETRAHEDRON : Current_L = &SS ; NbSS++ ; break ;
      case HEXAHEDRON  : Current_L = &SH ; NbSH++ ; break ;
      case PRISM       : Current_L = &SI ; NbSI++ ; break ;
      case PYRAMID     : Current_L = &SY ; NbSY++ ; break ;
      case LINE_2      : Current_L = &SL ; NbSL++ ; break ;
      case TRIANGLE_2  : Current_L = &ST ; NbST++ ; break ;
      case QUADRANGLE_2: Current_L = &SQ ; NbSQ++ ; break ;
      case QUADRANGLE_2_8N: Current_L = &SQ ; NbSQ++ ; break ;
      }
      if(Flag_GMSH_VERSION != 2){
        for(i = 0 ; i < NbrNodes ; i++) Current_L->push_back(x[i]);
        for(i = 0 ; i < NbrNodes ; i++) Current_L->push_back(y[i]);
        for(i = 0 ; i < NbrNodes ; i++) Current_L->push_back(z[i]);
      }
      else{
        double tmp = ElementNum;
        Current_L->push_back(tmp);
      }
    }
    if (HarmonicToTime == 1)
      for(k = 0 ; k < NbHarmonic ; k++){
	List_Put(TimeValue_L, NbHarmonic*TimeStep+k, &Time);
	for(i = 0 ; i < NbrNodes ; i++)
	  Current_L->push_back(Value[i].Val[MAX_DIM*k]);
      }
    else
      for(k = 0 ; k < HarmonicToTime ; k++){
	List_Put(TimeValue_L, HarmonicToTime*TimeStep+k, &Time);
	for(i = 0 ; i < NbrNodes ; i++){
	  F_MHToTime0(k+i, &Value[i], &TmpValue, k, HarmonicToTime, &TimeMH) ;
	  Current_L->push_back(TmpValue.Val[0]);
	}
      }
    break ;

  case VECTOR :

    if(TimeStep == 0){
      switch(Type){
      case POINT       : Current_L = &VP ; NbVP++ ; break ;
      case LINE        : Current_L = &VL ; NbVL++ ; break ;
      case TRIANGLE    : Current_L = &VT ; NbVT++ ; break ;
      case QUADRANGLE  : Current_L = &VQ ; NbVQ++ ; break ;
      case TETRAHEDRON : Current_L = &VS ; NbVS++ ; break ;
      case HEXAHEDRON  : Current_L = &VH ; NbVH++ ; break ;
      case PRISM       : Current_L = &VI ; NbVI++ ; break ;
      case PYRAMID     : Current_L = &VY ; NbVY++ ; break ;
      case LINE_2      : Current_L = &VL ; NbVL++ ; break ;
      case TRIANGLE_2  : Current_L = &VT ; NbVT++ ; break ;
      case QUADRANGLE_2: Current_L = &VQ ; NbVQ++ ; break ;
      case QUADRANGLE_2_8N: Current_L = &VQ ; NbVQ++ ; break ;
      }
      if(Flag_GMSH_VERSION != 2){
        for(i = 0 ; i < NbrNodes ; i++) Current_L->push_back(x[i]);
        for(i = 0 ; i < NbrNodes ; i++) Current_L->push_back(y[i]);
        for(i = 0 ; i < NbrNodes ; i++) Current_L->push_back(z[i]);
      }
      else{
        double tmp = ElementNum;
        Current_L->push_back(tmp);
      }
    }
    if (HarmonicToTime == 1)
      for(k = 0 ; k < NbHarmonic ; k++){
	List_Put(TimeValue_L, NbHarmonic*TimeStep+k, &Time);
	for(i = 0 ; i < NbrNodes ; i++)
	  for(j = 0 ; j < 3 ; j++)
	    Current_L->push_back(Value[i].Val[MAX_DIM*k+j]);
      }
    else
      for(k = 0 ; k < HarmonicToTime ; k++){
	List_Put(TimeValue_L, HarmonicToTime*TimeStep+k, &Time);
	for(i = 0 ; i < NbrNodes ; i++){
	  F_MHToTime0(k+i, &Value[i], &TmpValue, k, HarmonicToTime, &TimeMH) ;
	  for(j = 0 ; j < 3 ; j++)
	    Current_L->push_back(TmpValue.Val[j]);
	}
      }
    break ;

  case TENSOR_DIAG :
  case TENSOR_SYM :
  case TENSOR :

    if(TimeStep == 0){
      switch(Type){
      case POINT       : Current_L = &TP ; NbTP++ ; break ;
      case LINE        : Current_L = &TL ; NbTL++ ; break ;
      case TRIANGLE    : Current_L = &TT ; NbTT++ ; break ;
      case QUADRANGLE  : Current_L = &TQ ; NbTQ++ ; break ;
      case TETRAHEDRON : Current_L = &TS1 ; NbTS++ ; break ;
      case HEXAHEDRON  : Current_L = &TH ; NbTH++ ; break ;
      case PRISM       : Current_L = &TI ; NbTI++ ; break ;
      case PYRAMID     : Current_L = &TY ; NbTY++ ; break ;
      case LINE_2      : Current_L = &TL ; NbTL++ ; break ;
      case TRIANGLE_2  : Current_L = &TT ; NbTT++ ; break ;
      case QUADRANGLE_2: Current_L = &TQ ; NbTQ++ ; break ;
      case QUADRANGLE_2_8N: Current_L = &TQ ; NbTQ++ ; break ;
      }
      if(Flag_GMSH_VERSION != 2){
        for(i = 0 ; i < NbrNodes ; i++) Current_L->push_back(x[i]);
        for(i = 0 ; i < NbrNodes ; i++) Current_L->push_back(y[i]);
        for(i = 0 ; i < NbrNodes ; i++) Current_L->push_back(z[i]);
      }
      else{
        double tmp = ElementNum;
        Current_L->push_back(tmp);
      }
    }
    if (HarmonicToTime == 1)
      for(k = 0 ; k < NbHarmonic ; k++){
	List_Put(TimeValue_L, NbHarmonic*TimeStep+k, &Time);
	for(i = 0 ; i < NbrNodes ; i++){
	  for(j = 0 ; j < 9 ; j++){
            if(Value[0].Type != TENSOR_DIAG) {
              if(Value[0].Type == TENSOR_SYM) jj = symIndex[j];
              else jj = j;
              Current_L->push_back(Value[i].Val[MAX_DIM*k+jj]);
            }
            else {
              jj = diagIndex[j];
              if(jj == -1) Current_L->push_back(0.);
              else Current_L->push_back(Value[i].Val[MAX_DIM*k+jj]);
            }
          }
        }
      }
    else
      for(k = 0 ; k < HarmonicToTime ; k++){
	List_Put(TimeValue_L, HarmonicToTime*TimeStep+k, &Time);
	for(i = 0 ; i < NbrNodes ; i++){
	  F_MHToTime0(k+i, &Value[i], &TmpValue, k, HarmonicToTime, &TimeMH) ;
	  for(j = 0 ; j < 9 ; j++) {
            if(Value[0].Type != TENSOR_DIAG) {
              if(Value[0].Type == TENSOR_SYM) jj = symIndex[j];
              else jj = j;
              Current_L->push_back(TmpValue.Val[jj]);
            }
            else {
              jj = diagIndex[j];
              if(jj == -1) Current_L->push_back(0.);
              else Current_L->push_back(TmpValue.Val[jj]);
            }
          }
	}
      }

  }

  // reduce memory requirements by automatically partitioning large
  // output views into chunks not larger than 1Gb
  if(Flag_GMSH_VERSION == 2 && TimeStep == NbTimeStep - 1 &&
     Current_L->size() > (int)(1024 * 1024 * 1024 / sizeof(double))){
    Format_PostFooter(PSO_P, Store);
    CurrentPartitionNumber++;
    Gmsh_StartNewView = 1;
  }

}

static void dVecWrite(std::vector<double> &v, FILE *fp, bool binary)
{
  if(v.empty()) return;
  if(binary)
    fwrite(&v[0], sizeof(double), v.size(), fp);
  else
    for(unsigned i = 0; i < v.size(); i++)
      fprintf(fp, " %.16g", v[i]);
}

static void cVecWrite(std::vector<char> &v, FILE *fp, bool binary)
{
  if(v.empty()) return;
  if(binary)
    fwrite(&v[0], sizeof(char), v.size(), fp);
  else
    for(unsigned i = 0; i < v.size(); i++)
      fputc(v[i], fp);
}

/* ------------------------------------------------------------------------ */
/*  Gnuplot format                                                          */
/* ------------------------------------------------------------------------ */

static void Gnuplot_PrintElement(int Format, double Time, int TimeStep, int NbrTimeSteps,
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

  if(!PostStream) return;

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

      fprintf(PostStream, "%d %d ", Gmsh_GetElementType(ElementType), NumElement);
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
/*  Tabular format                                                          */
/* ------------------------------------------------------------------------ */

static void Tabular_PrintElement(struct PostSubOperation *PSO_P,
                                 int Format, double Time, int TimeStep, int NbrTimeSteps,
                                 int NbrHarmonics, int HarmonicToTime,
                                 int ElementType, int NumElement, int NbrNodes,
                                 double *x, double *y, double *z, double *Dummy,
                                 struct Value *Value)
{
  static int  Size ;
  int         i,j,k ;
  double      TimeMH ;
  struct Value  TmpValue ;

  if(!PostStream) return;

  if(TimeStep == 0){
    switch(Value->Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : Size = 3 ; break ;
    case TENSOR_SYM  : Size = 6 ; break ;
    case TENSOR      : Size = 9 ; break ;
    }
  }

  if(Format == FORMAT_SPACE_TABLE || Format == FORMAT_SIMPLE_SPACE_TABLE
     || Format == FORMAT_VALUE_ONLY){
    if(TimeStep == 0){
      if(Format != FORMAT_SIMPLE_SPACE_TABLE && Format != FORMAT_VALUE_ONLY)
        fprintf(PostStream, "%d %d  ", Gmsh_GetElementType(ElementType), NumElement);
      if(Format != FORMAT_VALUE_ONLY)
        for(i=0 ; i<NbrNodes ; i++)
          fprintf(PostStream, "%.16g %.16g %.16g  ", x[i], y[i], z[i]);
      if(Format != FORMAT_SIMPLE_SPACE_TABLE && Format != FORMAT_VALUE_ONLY){
        if(Dummy)
          fprintf(PostStream, "%.16g %.16g %.16g  ", Dummy[0], Dummy[1],  Dummy[2]);
        else
          fprintf(PostStream, "0 0 0  ");
      }
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
          if (Format != FORMAT_VALUE_ONLY)
            fprintf(PostStream, " %.16g", Value[i].Val[MAX_DIM*k+j]);
          else{
            fprintf(PostStream, " %s_%d_%d = %.16g",
                    PSO_P->ValueName, j, PSO_P->ValueIndex, Value[i].Val[MAX_DIM*k+j]);
            if (j<Size-1)
              fprintf(PostStream, "\n");
          }
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

/* ------------------------------------------------------------------------ */
/*  NodeTable format                                                        */
/* ------------------------------------------------------------------------ */

// global static map for node table output (cannot be saved incrementally for
// each element)
static int NodeTable_StartNew = 0;
static std::map<int, std::vector<double> > NodeTable;

static void NodeTable_PrintElement(int TimeStep, int NbTimeStep, int NbrHarmonics,
                                   struct PostElement *PE)
{
  if(NodeTable_StartNew){
    NodeTable_StartNew = 0 ;
    NodeTable.clear();
  }
  for(int i = 0 ; i < PE->NbrNodes ; i++){
    int n = PE->NumNodes[i];
    int Size = 0;
    switch(PE->Value[0].Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : Size = 3 ; break ;
    case TENSOR_SYM  : Size = 6 ; break ;
    case TENSOR      : Size = 9 ; break ;
    }
    if(n > 0 && Size){ // we have data on an actual node
      NodeTable[n].resize(NbTimeStep * NbrHarmonics * Size, 0.);
      for(int k = 0 ; k < NbrHarmonics ; k++){
        for(int j = 0 ; j < Size ; j++){
          double val = PE->Value[i].Val[MAX_DIM * k + j];
          int idx = NbrHarmonics * Size * TimeStep + k * Size + j;
          NodeTable[n][idx] = val;
        }
      }
    }
  }

}

/* ------------------------------------------------------------------------ */
/*  S t o r e P o s t O p R e s u l t                                       */
/* ------------------------------------------------------------------------ */

static List_T *PostOpResults_L=NULL;

static void StorePostOpResult(int NbrHarmonics, struct PostElement *PE)
{
  int    Size;
  double val;

  if(!PostOpResults_L)
    PostOpResults_L = List_Create(1000,1000,sizeof(double));

  for(int i = 0 ; i < PE->NbrNodes ; i++){
    Size = 0;
    switch(PE->Value[0].Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : Size = 3 ; break ;
    case TENSOR_SYM  : Size = 6 ; break ;
    case TENSOR      : Size = 9 ; break ;
    }
    if(Size){ // we have data
      for(int k = 0 ; k < NbrHarmonics ; k++){
        for(int j = 0 ; j < Size ; j++){
          val = PE->Value[i].Val[MAX_DIM * k + j];
          List_Add(PostOpResults_L, &val);
        }
      }
    }
  }
}

static void StorePostOpResult(int NbrHarmonics, struct Value *Value)
{
  int    Size;
  double val;

  if(!PostOpResults_L)
    PostOpResults_L = List_Create(1000,1000,sizeof(double));

  Size = 0;
  switch(Value[0].Type){
  case SCALAR      : Size = 1 ; break ;
  case VECTOR      : Size = 3 ; break ;
  case TENSOR_DIAG : Size = 3 ; break ;
  case TENSOR_SYM  : Size = 6 ; break ;
  case TENSOR      : Size = 9 ; break ;
  }
  if(Size){ // we have data
    for(int k = 0 ; k < NbrHarmonics ; k++){
      for(int j = 0 ; j < Size ; j++){
        val = Value[0].Val[MAX_DIM * k + j];
        List_Add(PostOpResults_L, &val);
      }
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  UNV format                                                              */
/* ------------------------------------------------------------------------ */

#if !defined(HAVE_NX)
#define NX { Message::Error("UNV export not available in this version"); }
#else
#define NX ;
#endif

void Unv_PrintHeader(FILE *PostStream, char *name, int SubType, double Time, int TimeStep) NX
void Unv_PrintFooter(FILE *PostStream) NX
void Unv_PrintElement(FILE *PostStream, int Num_Element, int NbrNodes, struct Value *Value) NX
void Unv_PrintRegion(FILE *PostStream, int Flag_Comma, int numRegion, int NbrHarmonics,
                     int Size, struct Value *Value) NX

#undef NX

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ P o s t F o r m a t                                       */
/* ------------------------------------------------------------------------ */

void  Format_PostFormat(struct PostSubOperation *PSO_P)
{
  if(!PostStream || PSO_P->Type == POP_EXPRESSION) return;

  int Format = PSO_P->Format;
  int NoMesh = PSO_P->NoMesh;

  switch(Format){
  case FORMAT_GMSH :
    if((PSO_P->StoreInField >= 0 || PSO_P->StoreInMeshBasedField >= 0) &&
       !PSO_P->FileOut) break;
    if(Flag_GMSH_VERSION == 2){
      fprintf(PostStream, "$MeshFormat\n") ;
      fprintf(PostStream, "2.2 %d %d\n", Flag_BIN, (int)sizeof(double)) ;
      if(Flag_BIN){
        int one=1;
        fwrite(&one, sizeof(int), 1, PostStream);
        fprintf(PostStream, "\n");
      }
      fprintf(PostStream, "$EndMeshFormat\n") ;
      if(!NoMesh){
        std::vector<Geo_Element*> elements;
        std::set<int> nodes;
        if(PSO_P->SubType == PRINT_ONELEMENTSOF){
          List_T *Region_L =
            ((struct Group *)List_Pointer(Problem_S.Group,
                                          PSO_P->Case.OnRegion.RegionIndex))->InitialList ;
          for(int i = 0 ; i < Geo_GetNbrGeoElements() ; i++) {
            Geo_Element *Geo_Element = Geo_GetGeoElement(i) ;
            if(List_Search(Region_L, &Geo_Element->Region, fcmp_int)){
              elements.push_back(Geo_Element);
              for (int j = 0 ; j < Geo_Element->NbrNodes ; j++)
                nodes.insert(Geo_Element->NumNodes[j]) ;
            }
          }
        }
        else{
          for(int i = 0 ; i < Geo_GetNbrGeoElements() ; i++) {
            Geo_Element *Geo_Element = Geo_GetGeoElement(i) ;
            elements.push_back(Geo_Element);
            for (int j = 0 ; j < Geo_Element->NbrNodes ; j++)
              nodes.insert(Geo_Element->NumNodes[j]) ;
          }
        }
        fprintf(PostStream, "$Nodes\n%d\n", (int)nodes.size());
        for (int i = 0 ; i < Geo_GetNbrGeoNodes() ; i++) {
          Geo_Node *Geo_Node = Geo_GetGeoNode(i);
          if(nodes.find(Geo_Node->Num) != nodes.end()){
            if(Flag_BIN){
              fwrite(&Geo_Node->Num, sizeof(int), 1, PostStream);
              double data[3] = {Geo_Node->x, Geo_Node->y, Geo_Node->z};
              fwrite(data, sizeof(double), 3, PostStream);
            }
            else{
              fprintf(PostStream, "%d %.16g %.16g %.16g\n",
                      Geo_Node->Num, Geo_Node->x, Geo_Node->y, Geo_Node->z) ;
            }
          }
        }
        fprintf(PostStream, "$EndNodes\n$Elements\n%d\n", (int)elements.size());
        for (unsigned int i = 0 ; i < elements.size() ; i++) {
          Geo_Element *Geo_Element = elements[i];
          int Type = Geo_GetElementTypeInv(FORMAT_GMSH, Geo_Element->Type) ;
          if(Flag_BIN){
            int blob[6] = {Type, 1, 2, Geo_Element->Num, Geo_Element->Region,
                           Geo_Element->ElementaryRegion};
            fwrite(blob, sizeof(int), 6, PostStream);
            std::vector<int> verts(Geo_Element->NbrNodes);
            for (int j = 0 ; j < Geo_Element->NbrNodes ; j++)
              verts[j] = Geo_Element->NumNodes[j] ;
            fwrite(&verts[0], sizeof(int), Geo_Element->NbrNodes, PostStream);
          }
          else{
            fprintf(PostStream, "%d %d 2 %d %d ", Geo_Element->Num,
                    Type, Geo_Element->Region, Geo_Element->ElementaryRegion) ;
            for (int j = 0 ; j < Geo_Element->NbrNodes ; j++)
              fprintf(PostStream, "%d ", Geo_Element->NumNodes[j]) ;
            fprintf(PostStream, "\n") ;
          }
        }
        fprintf(PostStream, "$EndElements\n");
      }
    }
    else if(PostStream && Flag_BIN){/* bricolage */
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

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ P o s t H e a d e r                                       */
/* ------------------------------------------------------------------------ */

void  Format_PostHeader(struct PostSubOperation *PSO_P, int NbTimeStep,
			int Order, char *Name1, char *Name2)
{
  int Format = PSO_P->Format;
  int SubType = PSO_P->SubType;
  double Time = Current.Time;
  int TimeStep = Current.TimeStep;
  int Contour = PSO_P->Iso;
  int Type = PSO_P->CombinationType;

  char name[256] ;

  CurrentPartitionNumber = 0;

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

  strcpy(CurrentName, name);

  switch(Format){
  case FORMAT_GMSH_PARSED :
    if(PostStream) fprintf(PostStream, "View \"%s\" {\n", name) ;
    Gmsh_StartNewView = 1 ;
    break ;
  case FORMAT_GMSH :
    Gmsh_StartNewView = 1 ;
    if((PSO_P->StoreInField >= 0 || PSO_P->StoreInMeshBasedField >= 0) &&
       !PSO_P->FileOut) break;
    if(PostStream && Flag_GMSH_VERSION != 2){
      if(Flag_BIN){ /* bricolage */
        fprintf(PostStream, "$View /* %s */\n", name);
        fprintf(PostStream, "%s ", name);
      }
      else {
        fprintf(PostStream, "View \"%s\" {\n", name) ;
      }
    }
    break ;
  case FORMAT_NXUNV :
    if(PostStream) Unv_PrintHeader(PostStream, name, SubType, Time, TimeStep);
    break ;
  case FORMAT_GNUPLOT :
    if(PostStream){
      fprintf(PostStream, "# PostData '%s'\n", name);
      fprintf(PostStream, "# Type Num  X Y Z  N1 N2 N3  Values  <Values>...\n");
    }
    break ;
  case FORMAT_NODE_TABLE :
    NodeTable_StartNew = 1 ;
    break ;
  case FORMAT_ADAPT :
    if(PostStream) fprintf(PostStream, "$Adapt /* %s */\n", name) ;
    break ;
  }
}

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ P o s t F o o t e r                                       */
/* ------------------------------------------------------------------------ */

void Format_PostFooter(struct PostSubOperation *PSO_P, int Store)
{
  List_T    *Iso_L[NBR_MAX_ISO], *Solutions_L;
  double    IsoMin = 1.e200, IsoMax = -1.e200, IsoVal = 0.0, freq, valr, vali ;
  int       NbrIso = 0 ;
  int       iPost, iNode, iIso, iTime, One=1, i, j, NbTimeStep ;
  char      tmp[1024];
  bool      PostOpSolutionGenerated;
  struct PostElement     *PE ;
  struct Solution        *Solution_P=NULL, Solution_S;


  if( !(NbTimeStep = List_Nbr(PSO_P->TimeStep_L)) )
    NbTimeStep = List_Nbr(Current.DofData->Solutions);

  if ( (PSO_P->Format == FORMAT_GMSH || PSO_P->Format == FORMAT_GMSH_PARSED) &&
       Flag_GMSH_VERSION != 2 ){

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
        if(Current.NbrHar == 1){
          sprintf(tmp, "Eigenvalue %d/%d: %g",
                  i+1, NbTimeStep, valr);
          Gmsh_StringAdd(PSO_P->Format, !i, tmp);
        }
        else{
          for (j = 0 ; j < Current.NbrHar ; j++) {
            if(!(j % 2)){
              sprintf(tmp, "Eigenvalue %d/%d: %g %s i * %g (Real Part)",
                      i+1, NbTimeStep, valr, (vali > 0) ? "+" : "-",
                      (vali > 0) ? vali : -vali);
              Gmsh_StringAdd(PSO_P->Format, (!i && !j), tmp);
            }
            else{
              sprintf(tmp, "Eigenvalue %d/%d: %g %s i * %g (Imaginary Part)",
                      i+1, NbTimeStep, valr, (vali > 0) ? "+" : "-",
                      (vali > 0) ? vali : -vali);
              Gmsh_StringAdd(PSO_P->Format, 0, tmp);
            }
          }
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
    if(NbrIso > NBR_MAX_ISO){
      Message::Error("Too many Iso values");
      NbrIso = NBR_MAX_ISO;
    }

    if(PostStream && PSO_P->Format == FORMAT_GNUPLOT)
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
	Format_PostElement(PSO_P, 0, 0,
			   Current.Time, 0, 1,
			   Current.NbrHar, PSO_P->HarmonicToTime,
			   NULL, PE);
	Destroy_PostElement(PE) ;
      }
      List_Delete(Iso_L[iIso]) ;
      if(PostStream && PSO_P->Format == FORMAT_GNUPLOT) fprintf(PostStream, "\n") ;
    }
  }

  switch(PSO_P->Format){
  case FORMAT_GMSH_PARSED :
    if(PostStream && List_Nbr(TimeValue_L) > 1){
      fprintf(PostStream, "TIME{");
      for(iTime = 0; iTime < List_Nbr(TimeValue_L); iTime++){
	if(iTime) fprintf(PostStream, ",");
	fprintf(PostStream, "%.16g", *(double*)List_Pointer(TimeValue_L, iTime));
      }
      fprintf(PostStream, "};\n");
    }
    fprintf(PostStream, "};\n") ;
    break ;
  case FORMAT_GMSH :
    if(Gmsh_StartNewView) Gmsh_ResetStaticLists(); // nothing to print!
    if(PSO_P->StoreInField >= 0 || PSO_P->StoreInMeshBasedField >= 0){
#if defined(HAVE_GMSH)
      int field = (PSO_P->StoreInField >= 0) ? PSO_P->StoreInField :
        PSO_P->StoreInMeshBasedField;
      Message::Info("Storing data in field %d (%s)", field,
                    PSO_P->StoreInField >= 0 ? "list-based" : "mesh-based");
      int NS[24] = {NbSP, NbVP, NbTP,  NbSL, NbVL, NbTL,  NbST, NbVT, NbTT,
                    NbSQ, NbVQ, NbTQ,  NbSS, NbVS, NbTS,  NbSH, NbVH, NbTH,
                    NbSI, NbVI, NbTI,  NbSY, NbVY, NbTY};
      std::vector<double> *LS[24] = {&SP, &VP, &TP,  &SL, &VL, &TL,  &ST, &VT, &TT,
                                     &SQ, &VQ, &TQ,  &SS, &VS, &TS1,  &SH, &VH, &TH,
                                     &SI, &VI, &TI,  &SY, &VY, &TY};
      PViewData *data;
      if(PSO_P->StoreInField >= 0)
        data = new PViewDataList();
      else
        data = new PViewDataGModel(PViewDataGModel::ElementNodeData);
      data->importLists(NS, LS);
      new PView(data, field);
#else
      Message::Error("GetDP must be compiled with Gmsh support to store data as field");
#endif
      if(!PSO_P->FileOut) break;
    }
    if(Flag_GMSH_VERSION == 2){
      int NS[8] = {NbSP, NbSL, NbST, NbSQ, NbSS, NbSH, NbSI, NbSY};
      std::vector<double> *LS[8] = {&SP, &SL, &ST, &SQ, &SS, &SH, &SI, &SY};
      Gmsh_PrintElementNodeData(PSO_P, NbTimeStep, 1, NS, LS);

      int NV[8] = {NbVP, NbVL, NbVT, NbVQ, NbVS, NbVH, NbVI, NbVY};
      std::vector<double> *LV[8] = {&VP, &VL, &VT, &VQ, &VS, &VH, &VI, &VY};
      Gmsh_PrintElementNodeData(PSO_P, NbTimeStep, 3, NV, LV);

      int NT[8] = {NbTP, NbTL, NbTT, NbTQ, NbTS, NbTH, NbTI, NbTY};
      std::vector<double> *LT[8] = {&TP, &TL, &TT, &TQ, &TS1, &TH, &TI, &TY};
      Gmsh_PrintElementNodeData(PSO_P, NbTimeStep, 9, NT, LT);
    }
    else if(PostStream && Flag_BIN){ /* bricolage */
      fprintf(PostStream, "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d "
	      "%d %d %d %d %d %d %d %d %d %d %d 0 0\n",
	      List_Nbr(TimeValue_L),
	      NbSP, NbVP, NbTP, NbSL, NbVL, NbTL, NbST, NbVT, NbTT,
	      NbSQ, NbVQ, NbTQ, NbSS, NbVS, NbTS, NbSH, NbVH, NbTH,
	      NbSI, NbVI, NbTI, NbSY, NbVY, NbTY, NbT2, (int)T2C.size());
      fwrite(&One, sizeof(int), 1, PostStream);
      List_WriteToFile(TimeValue_L, PostStream, LIST_FORMAT_BINARY);
      bool f = true;
      dVecWrite(SP, PostStream, f); dVecWrite(VP, PostStream, f);
      dVecWrite(TP, PostStream, f);
      dVecWrite(SL, PostStream, f); dVecWrite(VL, PostStream, f);
      dVecWrite(TL, PostStream, f);
      dVecWrite(ST, PostStream, f); dVecWrite(VT, PostStream, f);
      dVecWrite(TT, PostStream, f);
      dVecWrite(SQ, PostStream, f); dVecWrite(VQ, PostStream, f);
      dVecWrite(TQ, PostStream, f);
      dVecWrite(SS, PostStream, f); dVecWrite(VS, PostStream, f);
      dVecWrite(TS1, PostStream, f);
      dVecWrite(SH, PostStream, f); dVecWrite(VH, PostStream, f);
      dVecWrite(TH, PostStream, f);
      dVecWrite(SI, PostStream, f); dVecWrite(VI, PostStream, f);
      dVecWrite(TI, PostStream, f);
      dVecWrite(SY, PostStream, f); dVecWrite(VY, PostStream, f);
      dVecWrite(TY, PostStream, f);
      dVecWrite(T2D, PostStream, f); cVecWrite(T2C, PostStream, f);
      fprintf(PostStream, "\n");
      fprintf(PostStream, "$EndView\n");
    }
    else if(PostStream){
      if(List_Nbr(TimeValue_L) > 1){
	fprintf(PostStream, "TIME{");
	for(iTime = 0; iTime < List_Nbr(TimeValue_L); iTime++){
	  if(iTime) fprintf(PostStream, ",");
	  fprintf(PostStream, "%.16g", *(double*)List_Pointer(TimeValue_L, iTime));
	}
	fprintf(PostStream, "};\n");
      }
      fprintf(PostStream, "};\n") ;
    }
    break ;
  case FORMAT_ADAPT :
    if(PostStream) fprintf(PostStream, "$EndAdapt\n");
    break ;
  case FORMAT_NXUNV :
    if(PostStream) Unv_PrintFooter(PostStream);
    break ;
  case FORMAT_NODE_TABLE :
    if(PostStream){
      fprintf(PostStream, "%d\n", (int)NodeTable.size());
      for(std::map<int, std::vector<double> >::iterator it = NodeTable.begin();
          it != NodeTable.end(); it++){
        fprintf(PostStream, "%d", it->first);
        for(unsigned int i = 0; i < it->second.size(); i++)
          fprintf(PostStream, " %.16g", it->second[i]);
        fprintf(PostStream, "\n");
      }
    }
    {
      std::vector<double> exp;
      exp.push_back(NodeTable.size());
      for(std::map<int, std::vector<double> >::iterator it = NodeTable.begin();
          it != NodeTable.end(); it++){
        exp.push_back(it->first);
        for(unsigned int i = 0; i < it->second.size(); i++)
          exp.push_back(it->second[i]);
      }
      GetDPNumbers[CurrentName] = exp;
      if(PSO_P->SendToServer && strcmp(PSO_P->SendToServer, "No"))
        Message::AddOnelabNumberChoice(PSO_P->SendToServer, exp, PSO_P->Color,
                                       PSO_P->Units);
    }
    break;
  case FORMAT_LOOP_ERROR :
    Solutions_L = ((struct PostOpSolutions*)
      List_Pointer(Current.PostOpData_L, Current.PostOpDataIndex))->Solutions_L;
    PostOpSolutionGenerated = false;
    if(List_Nbr(Solutions_L)>0) {
      Solution_P = (struct Solution*)List_Pointer(Solutions_L, List_Nbr(Solutions_L)-1);
      PostOpSolutionGenerated = (Solution_P->TimeStep == (int)Current.TimeStep);
    }
    if (!PostOpSolutionGenerated) {
      Solution_S.Time = Current.Time;
      Solution_S.TimeImag = Current.TimeImag;
      Solution_S.TimeStep = Current.TimeStep;
      Solution_S.SolutionExist = 1;
      Solution_S.TimeFunctionValues = NULL;
      LinAlg_CreateVector(&Solution_S.x, &Current.DofData->Solver,
                          List_Nbr(PostOpResults_L));
      for(int i=0; i<List_Nbr(PostOpResults_L); i++){
        List_Read(PostOpResults_L, i, &valr);
        LinAlg_SetDoubleInVector(valr, &Solution_S.x, i);
      }
      List_Add(Solutions_L, &Solution_S);
    }
    else
      for(int i=0; i<List_Nbr(PostOpResults_L); i++){
        List_Read(PostOpResults_L, i, &valr);
        LinAlg_SetDoubleInVector(valr, &Solution_P->x, i);
      }

    List_Delete(PostOpResults_L);
    PostOpResults_L = NULL;
    break;
  }
}

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ P o s t E l e m e n t                                     */
/* ------------------------------------------------------------------------ */

void  Format_PostElement(struct PostSubOperation *PSO_P, int Contour, int Store,
			 double Time, int TimeStep, int NbTimeStep,
			 int NbrHarmonics, int HarmonicToTime, double *Dummy,
			 struct PostElement * PE)
{
  static int  Size ;
  int    i, j, k, l, Num_Element ;
  struct PostElement  * PE2 ;
  struct Value          Value ;

  static int Warning_FirstHarmonic = 0 ;

  int flag_storeAllTimeResults; //, indexInTmpValues;
  /* Added soon
  static struct Value  TmpValue, *TmpValues ;
  static double *Times ;
  struct Value *FourierValues;
  */

  flag_storeAllTimeResults = PSO_P->TimeToHarmonic ;
  //  indexInTmpValues = flag_storeAllTimeResults? iTime * NbrRegion : 0 ;

  if(1){
    switch(PE->Value[0].Type){
    case SCALAR      : Size = 1 ; break ;
    case VECTOR      : Size = 3 ; break ;
    case TENSOR_DIAG : Size = 3 ; break ;
    case TENSOR_SYM  : Size = 6 ; break ;
    case TENSOR      : Size = 9 ; break ;
    default          : Size = 9 ; break ;
    }
  }

  if(PE->Index != NO_ELEMENT)
    Num_Element = Geo_GetGeoElement(PE->Index)->Num ;
  else
    Num_Element = 0 ;

  if(Contour){
    if(PE->Value[0].Type != SCALAR){
      Message::Error("Non scalar Element %d in contour creation", Num_Element);
      return;
    }
    if(NbTimeStep != 1){
      Message::Error("Contour creation not allowed for multiple time steps");
      return;
    }
    if(Current.NbrHar != 1 && !Warning_FirstHarmonic){
      Message::Warning("Contour creation done only for first harmonic (use Re[] or Im[])");
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

  if(PSO_P->ChangeOfCoordinates[0] >= 0){
    for(i=0 ; i<PE->NbrNodes ; i++){
      Current.x = PE->x[i];
      Current.y = PE->y[i];
      Current.z = PE->z[i];
      for(j = 0; j<9 ; j++) Current.Val[j] = PE->Value[i].Val[j];
      Get_ValueOfExpressionByIndex(PSO_P->ChangeOfCoordinates[0], NULL, 0., 0., 0., &Value) ;
      PE->x[i] = Value.Val[0];
      Get_ValueOfExpressionByIndex(PSO_P->ChangeOfCoordinates[1], NULL, 0., 0., 0., &Value) ;
      PE->y[i] = Value.Val[0];
      Get_ValueOfExpressionByIndex(PSO_P->ChangeOfCoordinates[2], NULL, 0., 0., 0., &Value) ;
      PE->z[i] = Value.Val[0];
    }
  }

  if(PSO_P->ChangeOfValues && List_Nbr(PSO_P->ChangeOfValues) > 0){
    for(i=0 ; i < PE->NbrNodes ; i++){
      Current.x = PE->x[i];
      Current.y = PE->y[i];
      Current.z = PE->z[i];
      for(k=0 ; k<Current.NbrHar ; k++){
	for(j = 0; j<9 ; j++) Current.Val[j] = PE->Value[i].Val[MAX_DIM*k+j];
	for(l=0 ; l<List_Nbr(PSO_P->ChangeOfValues) ; l++){
	  Get_ValueOfExpressionByIndex(*(int*)List_Pointer(PSO_P->ChangeOfValues, l),
				       NULL, 0., 0., 0., &Value) ;
	  PE->Value[i].Val[MAX_DIM*k+l] = Value.Val[0];
	}
      }
    }
  }

  switch(PSO_P->Format){
  case FORMAT_GMSH_PARSED :
    GmshParsed_PrintElement(Time, TimeStep, NbTimeStep, NbrHarmonics, HarmonicToTime,
                            PE->Type, PE->NbrNodes, PE->x, PE->y, PE->z,
                            PE->Value) ;
    break ;
  case FORMAT_NXUNV :
    if(PostStream) Unv_PrintElement(PostStream, Num_Element, PE->NbrNodes, PE->Value) ;
    break ;
  case FORMAT_GMSH :
    if(PSO_P->StoreInField >= 0 || PSO_P->StoreInMeshBasedField >= 0){
      Gmsh_PrintElement(Time, TimeStep, NbTimeStep, NbrHarmonics, HarmonicToTime,
                        PE->Type, Num_Element, PE->NbrNodes, PE->x, PE->y, PE->z,
                        PE->Value, PSO_P, Store) ;
      if(!PSO_P->FileOut || Flag_GMSH_VERSION == 2 || Flag_BIN) break;
    }
    if(Flag_GMSH_VERSION == 2 || Flag_BIN){ /* bricolage */
      Gmsh_PrintElement(Time, TimeStep, NbTimeStep, NbrHarmonics, HarmonicToTime,
                        PE->Type, Num_Element, PE->NbrNodes, PE->x, PE->y, PE->z,
                        PE->Value, PSO_P, Store) ;
    }
    else{
      GmshParsed_PrintElement(Time, TimeStep, NbTimeStep, NbrHarmonics, HarmonicToTime,
                              PE->Type, PE->NbrNodes, PE->x, PE->y, PE->z,
                              PE->Value) ;
    }
    break ;
  case FORMAT_GNUPLOT :
    Gnuplot_PrintElement(PSO_P->Format, Time, TimeStep, NbTimeStep, NbrHarmonics,
                         HarmonicToTime, PE->Type, Num_Element, PE->NbrNodes,
                         PE->x, PE->y, PE->z, Dummy, PE->Value) ;
    break ;
  case FORMAT_SPACE_TABLE :
  case FORMAT_TIME_TABLE :
  case FORMAT_SIMPLE_SPACE_TABLE :
  case FORMAT_VALUE_ONLY :
    Tabular_PrintElement(PSO_P, PSO_P->Format, Time, TimeStep, NbTimeStep,
                         NbrHarmonics, HarmonicToTime, PE->Type, Num_Element,
                         PE->NbrNodes, PE->x, PE->y, PE->z, Dummy, PE->Value) ;
    break ;
  case FORMAT_NODE_TABLE :
    NodeTable_PrintElement(TimeStep, NbTimeStep, NbrHarmonics, PE);
    break;
  case FORMAT_LOOP_ERROR :
    StorePostOpResult(NbrHarmonics, PE);
    break;
  case FORMAT_ADAPT:
    if(PostStream){
      if(Dummy[4]) fprintf(PostStream, "%d\n", (int)Dummy[4]) ;
      fprintf(PostStream, "%d %g %g %g\n",
              (int)Dummy[0], Dummy[1], Dummy[2], Dummy[3]);
    }
    break ;
  default :
    Message::Error("Unknown format in Format_PostElement");
  }

  if (PE->NbrNodes == 1 && PSO_P->Format != FORMAT_NODE_TABLE){
    if(PSO_P->SendToServer && strcmp(PSO_P->SendToServer, "No")){
      std::vector<double> v;
      Export_Value(&PE->Value[0], v, PSO_P->SendToServerList);
      Message::AddOnelabNumberChoice(PSO_P->SendToServer, v, PSO_P->Color,
                                     PSO_P->Units);
    }
  }
}

/* ------------------------------------------------------------------------ */
/*  F o r m a t _ P o s t V a l u e                                         */
/* ------------------------------------------------------------------------ */

void Format_PostValue(struct PostQuantity  *PQ_P,
                      struct PostSubOperation *PSO_P,
                      int Format, int Flag_Comma, int Group_FunctionType,
		      int iTime, double Time, int NbrTimeStep,
                      int iRegion, int numRegion, int NbrRegion,
		      int NbrHarmonics, int HarmonicToTime, int FourierTransform,
                      int Flag_NoNewLine,
		      struct Value * Value)
{
  static int  Size ;
  int  j, k ;
  double TimeMH, Freq ;
  double x, y, z ;
  int  flag_storeAllTimeResults, indexInTmpValues ;
  static struct Value  TmpValue, *TmpValues ;
  static double *Times ;

  flag_storeAllTimeResults = FourierTransform || PSO_P->TimeToHarmonic ;
  indexInTmpValues = flag_storeAllTimeResults? iTime * NbrRegion : 0 ;

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
      if(PostStream == stdout || PostStream == stderr)
        Message::Direct("%d", NbrRegion);
      else if(PostStream)
        fprintf(PostStream, "%d\n", NbrRegion) ;
    }
    std::ostringstream sstream;
    sstream.precision(16);
    sstream << numRegion;
    for (k = 0 ; k < NbrHarmonics ; k++) {
      for(j = 0 ; j < Size ; j++) {
	if (Flag_Comma) sstream << ",";
	sstream << " " << Value->Val[MAX_DIM*k+j] ;
      }
    }
    if(PostStream == stdout || PostStream == stderr)
      Message::Direct(sstream.str().c_str());
    else if(PostStream)
      fprintf(PostStream, "%s\n", sstream.str().c_str()) ;
  }
  else if (Format == FORMAT_GETDP) {
    std::ostringstream sstream;
    sstream.precision(16);
    sstream << (PSO_P->ValueName? PSO_P->ValueName : PQ_P->Name);
    if (numRegion != NO_REGION) sstream << "~{" << numRegion << "}";

    if (NbrHarmonics >= 2 || Size > 1) sstream << "() = {";
    else sstream << " =";

    for (k = 0 ; k < NbrHarmonics ; k++) {
      for(j = 0 ; j < Size ; j++) {
	if (k || j) sstream << ",";
	sstream << " " << Value->Val[MAX_DIM*k+j] ;
      }
    }

    if (NbrHarmonics >= 2 || Size > 1) sstream << " };";

    if(PostStream == stdout || PostStream == stderr)
      Message::Direct(sstream.str().c_str());
    else if(PostStream)
      fprintf(PostStream, "%s\n", sstream.str().c_str()) ;
  }
  else if (Format == FORMAT_GMSH && Flag_GMSH_VERSION != 2) {
    if (Group_FunctionType == NODESOF)
      Geo_GetNodesCoordinates(1, &numRegion, &x, &y, &z) ;
    else {
      x = y = z = 0.;
      Message::Warning("Post Format \'Gmsh\' not adapted for global quantities supported"
                       " by Regions. Zero coordinates are considered.") ;
    }
    GmshParsed_PrintElement(Time, 0, 1, NbrHarmonics, HarmonicToTime,
                            POINT, 1, &x, &y, &z,
                            Value) ;
  }
  else if (Format == FORMAT_NXUNV) {
    if(PostStream)
      Unv_PrintRegion(PostStream, Flag_Comma, numRegion, NbrHarmonics, Size, Value);
  }
  else if (Format == FORMAT_LOOP_ERROR) {
    StorePostOpResult(NbrHarmonics, Value);
  }
  // else, for other FORMATs, e.g., FORMAT_FREQUENCY_TABLE
  else {
    if(iRegion == 0){
      if (!flag_storeAllTimeResults)
        TmpValues = (struct Value*) Malloc(NbrRegion*sizeof(struct Value)) ;
      else{
        if (iTime == 0){
          TmpValues = (struct Value*) Malloc(NbrTimeStep*NbrRegion*sizeof(struct Value)) ;
          Times     = (double*) Malloc(NbrTimeStep*sizeof(double)) ;
        }
        Times[iTime] = Time ;
      }
    }

    Cal_CopyValue(Value, &TmpValues[indexInTmpValues+iRegion]) ;

    if (!flag_storeAllTimeResults && iRegion == NbrRegion-1) {

      if (PostStream && HarmonicToTime == 1) {
	switch (Format) {
	case FORMAT_FREQUENCY_TABLE :
	case FORMAT_FREQUENCY_REGION_VALUE :
	  if (NbrHarmonics == 1){
	    Message::Error("FrequencyTable format not allowed (only one harmonic)") ;
            return;
          }
	  break ;
        case FORMAT_VALUE_ONLY :
          break;
	default :
	  fprintf(PostStream, "%.16g ", Time) ;
	  break ;
	}
	for (iRegion = 0 ; iRegion < NbrRegion ; iRegion++)
	  for (k = 0 ; k < NbrHarmonics ; k++) {
	    if ((Format == FORMAT_FREQUENCY_TABLE ||
                 Format == FORMAT_FREQUENCY_REGION_VALUE)
                && !(k%2) && iRegion==0) {
	      Freq = Current.DofData->Val_Pulsation[0] / TWO_PI ;
	      fprintf(PostStream, "%.16g ", Freq) ;
	    }
	    for(j = 0 ; j < Size ; j++)
              if (Format != FORMAT_REGION_VALUE &&
                  Format != FORMAT_FREQUENCY_REGION_VALUE)
	      fprintf(PostStream, " %.16g",
                      TmpValues[indexInTmpValues+iRegion].Val[MAX_DIM*k+j]) ;
	  }
	if (Flag_NoNewLine ||
            Format == FORMAT_REGION_VALUE || Format == FORMAT_FREQUENCY_REGION_VALUE)
	  fprintf(PostStream, " ") ;
	else
	  fprintf(PostStream, "\n") ;
      }
      else if(PostStream){
	for(k = 0 ; k < HarmonicToTime ; k++) {
	  for (iRegion = 0 ; iRegion < NbrRegion ; iRegion++) {
	    F_MHToTime0(k+iRegion, &TmpValues[indexInTmpValues+iRegion], &TmpValue,
			k, HarmonicToTime, &TimeMH) ;
	    if (iRegion == 0)  fprintf(PostStream, "%.16g ", TimeMH) ;
	    for(j = 0 ; j < Size ; j++)
	      fprintf(PostStream, " %.16g", TmpValue.Val[j]) ;
	  }
	  fprintf(PostStream, "\n") ;
	}
      }

      if (flag_storeAllTimeResults) Free(Times) ;
      Free(TmpValues) ;
    }

    else if (flag_storeAllTimeResults &&
             iTime == NbrTimeStep-1 && iRegion == NbrRegion-1) {

      Pos_FourierTransform(NbrTimeStep, NbrRegion, Times, TmpValues, Size,
                           1, PSO_P->TimeToHarmonic, NULL, NULL, NULL);

      Free(Times);
      Free(TmpValues) ;
    }

  }
}


/* ------------------------------------------------------------------------ */
/*  P o s _ F o u r i e r T r a n s f o r m                                 */
/* ------------------------------------------------------------------------ */

void Pos_FourierTransform(int NbrTimeStep, int NbrRegion,
                          double *Times, struct Value *TmpValues, int Size,
                          int TypeOutput, int Nb_Freq_Select_0,
                          int *NbrFreq, double **Frequencies, struct Value **OutValues)
{
#if NEW_CODE
  *NbrFreq = (NbrTimeStep-1)/2+1;
  *Frequencies = (double *)Malloc(*NbrFreq*sizeof(double));
  *OutValues = (struct Value *)Malloc(*NbrFreq*sizeof(struct Value));

  int nfft = *NbrFreq;
  kissfft<double> fft(nfft, false);
  std::vector<std::complex<double> > inbuf(nfft);
  std::vector<std::complex<double> > outbuf(nfft);
  for (int k = 0; k < nfft; ++k)
    inbuf[k]= std::complex<double>(rand()/(double)RAND_MAX - .5,
                                   rand()/(double)RAND_MAX - .5);
  fft.transform(&inbuf[0], &outbuf[0]);
#else

  int iTime, iRegion, k_fc, i_k, j, k;
  int N, Nhalf, NbrFourierComps;
  double *val_FourierComps;
  double val, val_r, val_i, norm, Period, w, v_cos, v_sin;

  N = NbrTimeStep-1;
  Nhalf = N/2;
  //  Nhalf = 2;
  NbrFourierComps = Nhalf*2;

  Period = Times[NbrTimeStep-1] - Times[0];
  w = TWO_PI/Period;

  val_FourierComps = (double*) Malloc(NbrFourierComps*MAX_DIM*2*sizeof(double)) ;

  for (k_fc=-Nhalf; k_fc<Nhalf; k_fc++){
    i_k = Nhalf+k_fc;
    for (k=0; k<2; k++){
      for (j = 0 ; j < Size ; j++){
        val_FourierComps[(2*i_k+k)*MAX_DIM + j] = 0.;
      }
    }
  }

  for (iTime=0; iTime<N; iTime++){
    iRegion = 0; // only for 1 region now!

    for (k_fc=-Nhalf; k_fc<Nhalf; k_fc++){
      i_k = Nhalf+k_fc;

      v_cos = cos( k_fc*w*Times[iTime]);
      v_sin = sin(-k_fc*w*Times[iTime]);

      for (j = 0 ; j < Size ; j++){
        val = TmpValues[iTime*NbrRegion+iRegion].Val[j];

        val_FourierComps[(2*i_k+0)*MAX_DIM + j] += val * v_cos;
        val_FourierComps[(2*i_k+1)*MAX_DIM + j] += val * v_sin;
      }
    }

  }

  for (k_fc=-Nhalf; k_fc<Nhalf; k_fc++){
    i_k = Nhalf+k_fc;
    for (k=0; k<2; k++){
      for (j = 0 ; j < Size ; j++){
        val_FourierComps[(2*i_k+k)*MAX_DIM + j] /= N;
      }
    }
  }

  if(!PostStream) TypeOutput = 2;

  int Nb_Freq_Select = (Nb_Freq_Select_0>0)? Nb_Freq_Select_0 : Nhalf-1;

  // Limited to cosine transform now
  if (TypeOutput == 2){
    *NbrFreq = Nhalf+1;
    *Frequencies = (double *)Malloc(*NbrFreq*sizeof(double));
    *OutValues = (struct Value *)Malloc(*NbrFreq*sizeof(struct Value));
  }

  //  for (k_fc=-Nhalf; k_fc<Nhalf; k_fc++){
  for (k_fc=0; k_fc<=Nb_Freq_Select; k_fc++){
    i_k = Nhalf+k_fc;

    if (TypeOutput == 1) {
      fprintf(PostStream, "%.16g", k_fc*w/TWO_PI) ;
    }
    else if (TypeOutput == 2) {
      (*Frequencies)[k_fc] = k_fc*w/TWO_PI;
      (*OutValues)[k_fc].Type = TmpValues[0].Type;
    }

    for (k=0; k<2; k++){
      for(j = 0 ; j < Size ; j++){
        /*
        if (k_fc != 0)
          val = ((k==0)?1:-1) * 2 * val_FourierComps[(2*i_k+k)*MAX_DIM + j];
        else
          val = val_FourierComps[(2*i_k+k)*MAX_DIM + j];
        */

        if (k_fc != 0) {
          val_r =  2 * val_FourierComps[(2*i_k+0)*MAX_DIM + j];
          val_i = -2 * val_FourierComps[(2*i_k+1)*MAX_DIM + j];
          norm = sqrt(SQU(val_r) + SQU(val_i));
          val = (k==0)? norm : -asin(val_i/norm);
        }
        else {
          val = (k==0)? val_FourierComps[(2*i_k+k)*MAX_DIM + j] : 0.;
        }

        if (TypeOutput == 1) {
          fprintf(PostStream, " %.16g", val);
        }
        if (k == 0 && TypeOutput == 2) {
          (*OutValues)[k_fc].Val[j] = val;
        }

      }
    }
    if (TypeOutput == 1) {
      fprintf(PostStream, "\n") ;
    }
  }

  Free(val_FourierComps);
#endif
}
