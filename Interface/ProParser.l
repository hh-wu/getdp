%{
// GetDP - Copyright (C) 1997-2008 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// bugs and problems to the public mailing list <getdp@geuz.org>.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "ProData.h"
#include "ProParser.h"
#include "ProParser.tab.hpp"
#include "MallocUtils.h"
#include "Message.h"

// Redefinition of YY_INPUT to allow input character count (this is
// slower than fread(), but the .pro files are never that big)
#ifdef YY_INPUT
#undef YY_INPUT
#endif
#define YY_INPUT(buf,result,max_size) {		        \
  int c = getc(getdp_yyin);				\
  getdp_yycolnum++;					\
  result = (c == EOF) ? YY_NULL : (buf[0] = c, 1);	\
}

%}

alpha      [a-zA-Z\_\.]
digit      [0-9]
exp        [Ee][-+]?{digit}+
string     {alpha}({alpha}|{digit})*

%%

[\ \t\r\f]                   /* nothing to do */;
[\n]                         { getdp_yycolnum = 0; getdp_yylinenum++; }
<<EOF>>                      { getdp_yyincludenum = 0; return(0); }

";"                          return tEND;
"/*"                         cStyleComments();
"//"                         cxxStyleComments();
"\""                         { parseString('\"'); return tBIGSTR; }

"="                          return tDEF;
"*^"                         return tCROSSPRODUCT;
"/\\"                        return tCROSSPRODUCT;
"||"                         return tOR;
"&&"                         return tAND;
"=="                         return tEQUAL;
"!="                         return tNOTEQUAL;
"~="                         return tAPPROXEQUAL;
"<="                         return tLESSOREQUAL;
">="                         return tGREATEROREQUAL;
">>"                         return tGREATERGREATER;
"<<"                         return tLESSLESS;
"..."                        return tDOTS;
":"                          return tDOTS;
"##"                         return tSHOW;

StrCat                       return tStrCat;
Sprintf                      return tSprintf;
Printf                       return tPrintf;
Read                         return tRead;
PrintConstants               return tPrintConstants;
StrCmp                       return tStrCmp ;
NbrRegions                   return tNbrRegions ;

Pi                           return tPi;
0D                           return t0D;
1D                           return t1D;
2D                           return t2D;
3D                           return t3D;
MPI_Rank                     return tMPI_Rank;
MPI_Size                     return tMPI_Size;

Include                      return tInclude;
#include                     return tInclude;

Constant                     return tConstant;
Const                        return tConstant;

Group                        return tGroup;
DefineGroup                  return tDefineGroup;
All                          return tAll;
InSupport                    return tInSupport;
MovingBand2D                 return tMovingBand2D;
SaveMesh                     return tSaveMesh;
DeformMesh                   return tDeformeMesh;
DeformeMesh                  return tDeformeMesh;

DefineFunction               return tDefineFunction;
DefineVariable               return tDefineConstant;
DefineConstant               return tDefineConstant;
UndefineConstant             return tUndefineConstant;

List                         return tList;
ListAlt                      return tListAlt;
ListFromFile                 return tListFromFile;

Exp                          return tExp;
Log                          return tLog;
Log10                        return tLog10;
Sqrt                         return tSqrt;
Sin                          return tSin;
ASin                         return tAsin;
Asin                         return tAsin;
Cos                          return tCos;
ACos                         return tAcos;
Acos                         return tAcos;
Tan                          return tTan;
Atan                         return tAtan;
Atan2                        return tAtan2;
Sinh                         return tSinh;
Cosh                         return tCosh;
Tanh                         return tTanh;
Fabs                         return tFabs;
Floor                        return tFloor;
Ceil                         return tCeil;
Round                        return tRound;
Sign                         return tSign;
Fmod                         return tFmod;
Modulo                       return tModulo;
Hypot                        return tHypot;
Rand                         return tRand;
Cross                        return tCrossProduct;
CrossProduct                 return tCrossProduct;
SolidAngle                   return tSolidAngle;
Order                        return tOrder;
Trace                        return tTrace;
DofValue                     return tDofValue;
LinSpace                     return tLinSpace;
LogSpace                     return tLogSpace;

MHTransform                  return tMHTransform;
MHJacNL                      return tMHJacNL;

Constraint                   return tConstraint;
Region                       return tRegion;
SubRegion                    return tSubRegion;
RegionRef                    return tRegionRef;
SubRegionRef                 return tSubRegionRef;
Coefficient                  return tCoefficient;
Filter                       return tFilter;
Value                        return tValue;
TimeFunction                 return tTimeFunction;
Branch                       return tBranch;
NameOfResolution             return tNameOfResolution;

Jacobian                     return tJacobian;
MetricTensor                 return tMetricTensor;
Case                         return tCase;

Integration                  return tIntegration;
Matrix                       return tMatrix;
Criterion                    return tCriterion;
GeoElement                   return tGeoElement;
NumberOfPoints               return tNumberOfPoints;
MaxNumberOfPoints            return tMaxNumberOfPoints;
NumberOfDivisions            return tNumberOfDivisions;
MaxNumberOfDivisions         return tMaxNumberOfDivisions;
StoppingCriterion            return tStoppingCriterion;

FunctionSpace                return tFunctionSpace;
Name                         return tName;
Type                         return tType;
SubType                      return tSubType;
BasisFunction                return tBasisFunction;
NameOfCoef                   return tNameOfCoef;
Function                     return tFunction;
dFunction                    return tdFunction;
SubFunction                  return tSubFunction;
SubdFunction                 return tSubdFunction;
Support                      return tSupport;
Entity                       return tEntity;
SubSpace                     return tSubSpace;
NameOfBasisFunction          return tNameOfBasisFunction;
GlobalQuantity               return tGlobalQuantity;
EntityType                   return tEntityType;
EntitySubType                return tEntitySubType;
NameOfConstraint             return tNameOfConstraint;

Formulation                  return tFormulation;
Quantity                     return tQuantity;
NameOfSpace                  return tNameOfSpace;
IndexOfSystem                return tIndexOfSystem;
Symmetry                     return tSymmetry;
Galerkin                     return tGalerkin;
deRham                       return tdeRham;

Dt                           return tDt;
DtDof                        return tDtDof;
DtDt                         return tDtDt;
DtDtDof                      return tDtDtDof;
JacNL                        return tJacNL;
DtDofJacNL                   return tDtDofJacNL;
NeverDt                      return tNeverDt;
DtNL                         return tDtNL;
AtAnteriorTimeStep           return tAtAnteriorTimeStep;

In                           return tIn;
Full_Matrix                  return tFull_Matrix;
GlobalTerm                   return tGlobalTerm;
GlobalEquation               return tGlobalEquation;

Resolution                   return tResolution;
System                       return tDefineSystem;
NameOfFormulation            return tNameOfFormulation;
NameOfMesh                   return tNameOfMesh;
Frequency                    return tFrequency;
DummyFrequency               return tDummyFrequency;
Solver                       return tSolver;
OriginSystem                 return tOriginSystem;
DestinationSystem            return tDestinationSystem;

Operation                    return tOperation;
OperationEnd                 return tOperationEnd;
SetTime                      return tSetTime;
SetFrequency                 return tSetFrequency;
Update                       return tUpdate;
UpdateConstraint             return tUpdateConstraint;
GenerateOnly                 return tGenerateOnly;
GenerateOnlyJac              return tGenerateOnlyJac;
FourierTransform             return tFourierTransform;
FourierTransformJ            return tFourierTransformJ;
Lanczos                      return tLanczos;
EigenSolve                   return tEigenSolve;
EigenSolveJac                return tEigenSolveJac;
Evaluate                     return tEvaluate;
SelectCorrection             return tSelectCorrection ;
AddCorrection                return tAddCorrection ;
MultiplySolution             return tMultiplySolution ;
AddOppositeFullSolution      return tAddOppositeFullSolution ;
SolveAgainWithOther          return tSolveAgainWithOther;
SetGlobalSolverOptions       return tSetGlobalSolverOptions;
Test                         return tIf;
TimeLoopTheta                return tTimeLoopTheta;
TimeLoopNewmark              return tTimeLoopNewmark;
TimeLoopRungeKutta           return tTimeLoopRungeKutta;
TimeLoopAdaptive             return tTimeLoopAdaptive;
Time0                        return tTime0;
TimeMax                      return tTimeMax;
DTime                        return tDTime;
Theta                        return tTheta;
Beta                         return tBeta;
Gamma                        return tGamma;
IterativeLoop                return tIterativeLoop;
IterativeLoopN               return tIterativeLoopN;
IterativeLinearSolver        return tIterativeLinearSolver;
NbrMaxIteration              return tNbrMaxIteration;
RelaxationFactor             return tRelaxationFactor;
IterativeTimeReduction       return tIterativeTimeReduction;
DivisionCoefficient          return tDivisionCoefficient;
ChangeOfState                return tChangeOfState;
ChangeOfCoordinates          return tChangeOfCoordinates;
ChangeOfCoordinates2         return tChangeOfCoordinates2;
ChangeOfValues               return tChangeOfValues;
SystemCommand                return tSystemCommand;
GmshRead                     return tGmshRead;
GmshMerge                    return tGmshMerge;
GmshOpen                     return tGmshOpen;
GmshWrite                    return tGmshWrite;
GmshClearAll                 return tGmshClearAll;
DeleteFile                   return tDeleteFile;
CreateDir                    return tCreateDir;
CreateDirectory              return tCreateDir;
Break                        return tBreak;
SolveJac_AdaptRelax          return tSolveJac_AdaptRelax;
TensorProductSolve           return tTensorProductSolve;
SaveSolutionWithEntityNum    return tSaveSolutionWithEntityNum;
SaveSolutionExtendedMH       return tSaveSolutionExtendedMH;
SaveSolutionMHtoTime         return tSaveSolutionMHtoTime;
InitMovingBand2D             return tInitMovingBand2D;
MeshMovingBand2D             return tMeshMovingBand2D;
Generate_MH_Moving           return tGenerate_MH_Moving;
Generate_MH_Moving_Separate  return tGenerate_MH_Moving_Separate;
Add_MH_Moving                return tAdd_MH_Moving;
GenerateGroup                return tGenerateGroup;
GenerateJacGroup             return tGenerateJacGroup;
GenerateRHSGroup             return tGenerateRHSGroup;
SetCommSelf                  return tSetCommSelf;
SetCommWorld                 return tSetCommWorld;
Barrier			     return tBarrier;
BroadcastFields              return tBroadcastFields;

PostProcessing               return tPostProcessing;
NameOfSystem                 return tNameOfSystem;

PostOperation                return tPostOperation;
NameOfPostProcessing         return tNameOfPostProcessing;
UsingPost                    return tUsingPost;
Append                       return tAppend;
ResampleTime                 return tResampleTime;
Plot                         return tPlot;
Print                        return tPrint;
PrintGroup                   return tPrintGroup;
Echo                         return tEcho;
Adapt                        return tAdapt;
Write                        return tWrite;
OnGlobal                     return tOnGlobal;
OnRegion                     return tOnRegion;
OnElementsOf                 return tOnElementsOf;
OnGrid                       return tOnGrid;
OnCut                        return tOnSection;
OnSection                    return tOnSection;
OnPoint                      return tOnPoint;
OnLine                       return tOnLine;
OnPlane                      return tOnPlane;
OnBox                        return tOnBox;
WithArgument                 return tWithArgument;
Smoothing                    return tSmoothing;
Skin                         return tSkin;
Format                       return tFormat;
Footer                       return tFooter;
Header                       return tHeader;
Depth                        return tDepth;
Dimension                    return tDimension;
Comma                        return tComma;
ValueIndex                   return tValueIndex;
ValueName                    return tValueName;
HarmonicToTime               return tHarmonicToTime;
TimeStep                     return tTimeStep;
Target                       return tTarget;
File                         return tFile;
Sort                         return tSort;
Iso                          return tIso;
NoNewLine                    return tNoNewLine;
NoTitle                      return tNoTitle;
TimeLegend                   return tTimeLegend;
FrequencyLegend              return tFrequencyLegend;
EigenvalueLegend             return tEigenvalueLegend;
EvaluationPoints             return tEvaluationPoints;
StoreInRegister              return tStoreInRegister;
StoreMinInRegister           return tStoreMinInRegister;
StoreMinXinRegister          return tStoreMinXinRegister;
StoreMinYinRegister          return tStoreMinYinRegister;
StoreMinZinRegister          return tStoreMinZinRegister;
StoreMaxInRegister           return tStoreMaxInRegister;
StoreMaxXinRegister          return tStoreMaxXinRegister;
StoreMaxYinRegister          return tStoreMaxYinRegister;
StoreMaxZinRegister          return tStoreMaxZinRegister;
Store                        return tStoreInRegister;
StoreInField                 return tStoreInField;
StoreInMeshBasedField        return tStoreInMeshBasedField;
LastTimeStepOnly             return tLastTimeStepOnly;
AppendTimeStepToFileName     return tAppendTimeStepToFileName;
OverrideTimeStepValue        return tOverrideTimeStepValue;
SendToServer                 return tSendToServer;
Color                        return tColor;
NewCoordinates               return tNewCoordinates;
NoMesh                       return tNoMesh;

If                           return tIf;
Else                         return tElse;
EndIf                        return tEndIf;
For                          return tFor;
EndFor                       return tEndFor;

DecomposeInSimplex           return tDecomposeInSimplex;
Str                          return tStr;
Date                         return tDate;

Flag                         return tFlag;

PostQuantity                 return tQuantity;
Integral                     return tGalerkin;

{digit}+                     { getdp_yylval.i = atoi(yytext); return tINT; }

{digit}+"."{digit}*({exp})? |
{digit}*"."{digit}+({exp})? |
{digit}+{exp}                { getdp_yylval.d = atof(yytext); return tFLOAT; }

{string}                     { getdp_yylval.c = strSave(yytext); return tSTRING; }

.                            return yytext[0];

%%

#undef getdp_yywrap

int getdp_yywrap()
{
  return 1;
}

#ifdef __cplusplus
#define input yyinput
#endif

#ifndef yytext_ptr
#define yytext_ptr yytext
#endif

char *strSave(const char *string)
{
  return ((char *)strcpy((char *)Malloc(strlen(string)+1), string));
}

void cStyleComments()
{
  int c;
  while(1) {
    while((c = input()) != '*'){
      if(c == '\n') getdp_yylinenum++;
      if(feof(getdp_yyin)) {
	Message::Error("End of file in commented region");
        exit(1);
      }
    }
    if((c = input()) == '/') return;
    unput(c);
  }
}

void cxxStyleComments()
{
  int c;
  while(1){
    c = input();
    if(c == '\n' || feof(getdp_yyin)) break;
  }
  getdp_yylinenum++;
}

void parseString(char endchar)
{
  char tmp[2048];

  int c = input();
  int i = 0;
  while(c != endchar){
    if(feof(getdp_yyin)) {
      Message::Error("End of file in string");
      getdp_yycolnum = 0;
      break;
    }
    else if(c == '\n') {
      getdp_yycolnum = 0;
    }
    else if(i >= (int)sizeof(tmp)-1) {
      Message::Error("String too long");
      break;
    }
    else {
      tmp[i++] = c;
    }
    c = input();
  }
  tmp[i] = '\0';
  getdp_yylval.c = strSave(tmp);
}

void skipUntil(const char *skip, const char *until)
{
  int l, l_skip, l_until;
  char chars[256];
  int c_next, c_next_skip, c_next_until;

  int nb_skip = 0;

  if(skip)
    l_skip = strlen(skip);
  else
    l_skip = 0;

  l_until = strlen(until);

  while(1){
    while (1){
      chars[0] = input();
      if(chars[0] == '\n') getdp_yylinenum++;
      if(feof(getdp_yyin)){
	Message::Error("Unexpected end of file");
	return;
      }
      if(chars[0] == '/'){
        c_next = input();
        if     (c_next ==  '*') cStyleComments();
        else if(c_next ==  '/') cxxStyleComments();
        else unput(c_next);
      }
      if(chars[0] == until[0]) break;
      if(skip && chars[0] == skip[0]) break;
    }

    l = (l_skip > l_until) ? l_skip : l_until;
    if(l >= (int)sizeof(chars)){
      Message::Error("Search pattern too long in skip_until");
      return;
    }
    for(int i = 1; i < l; i++){
      chars[i] = input();
      if(chars[i] == '\n') getdp_yylinenum++;
      if(feof(getdp_yyin)){
	l = i;
	break;
      }
    }

    c_next = input(); unput(c_next);
    c_next_skip = (l_skip<l)? chars[l_skip] : c_next;
    c_next_until = (l_until<l)? chars[l_until] : c_next;

    if(!strncmp(chars,until,l_until)
       && (!(c_next_until>='a' && c_next_until<='z')
           && !(c_next_until>='A' && c_next_until<='Z')
           && c_next_until!='_' )
      ){
      if(!nb_skip){
	return;
      }
      else{
	nb_skip--;
      }
    }
    else if(skip && !strncmp(chars,skip,l_skip)
       && (!(c_next_skip>='a' && c_next_skip<='z')
           && !(c_next_skip>='A' && c_next_skip<='Z')
           && c_next_skip!='_' )
    ){
      nb_skip++;
    }
    else{
      for(int i = 1; i < l - 1; i++){
	unput(chars[l-i]);
        if(chars[l-i] == '\n') getdp_yylinenum--;
      }
    }

  }
}

void hack_fsetpos_printf()
{
  char chars[5];
  int c = input(), c2 = input(), c3 = input();
  unput(c3); unput(c2); unput(c);
  chars[0] = c; chars[1] = c2; chars[2] = c3; chars[3] = 0;
  printf("++++++ c: %d %d %d /%s/\n", (int)c, (int)c2, (int)c3, chars);
}

void hack_fsetpos()
{
  input();
}
