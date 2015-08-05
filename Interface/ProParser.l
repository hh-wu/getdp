%{
// GetDP - Copyright (C) 1997-2015 P. Dular, C. Geuzaine
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

#include                     return tInclude;

0D                           return t0D;
1D                           return t1D;
2D                           return t2D;
3D                           return t3D;

ACos                         return tAcos;
ASin                         return tAsin;
Acos                         return tAcos;
Adapt                        return tAdapt;
AddCorrection                return tAddCorrection ;
AddMHMoving                  return tAddMHMoving;
AddOppositeFullSolution      return tAddOppositeFullSolution ;
All                          return tAll;
Append                       return tAppend;
AppendTimeStepToFileName     return tAppendTimeStepToFileName;
AppendExpressionToFileName   return tAppendExpressionToFileName;
AppendExpressionFormat       return tAppendExpressionFormat;
AppendStringToFileName       return tAppendStringToFileName;
AppendToExistingFile         return tAppendToExistingFile;
Asin                         return tAsin;
AtAnteriorTimeStep           return tAtAnteriorTimeStep;
MaxOverTime                  return tMaxOverTime;
FourierSteinmetz             return tFourierSteinmetz;
Atan                         return tAtan;
Atan2                        return tAtan2;

Barrier			     return tBarrier;
BasisFunction                return tBasisFunction;
Beta                         return tBeta;
Branch                       return tBranch;
Break                        return tBreak;
BroadcastFields              return tBroadcastFields;

Call                         return tCall;
Case                         return tCase;
Ceil                         return tCeil;
ChangeOfCoordinates          return tChangeOfCoordinates;
ChangeOfCoordinates2         return tChangeOfCoordinates2;
ChangeOfState                return tChangeOfState;
ChangeOfValues               return tChangeOfValues;
Coefficient                  return tCoefficient;
Color                        return tColor;
Comma                        return tComma;
Const                        return tConstant;
Constant                     return tConstant;
Constraint                   return tConstraint;
Cos                          return tCos;
Cosh                         return tCosh;
CosineTransform              return tCosineTransform;
CreateDir                    return tCreateDir;
CreateDirectory              return tCreateDir;
Criterion                    return tCriterion;
Cross                        return tCrossProduct;
CrossProduct                 return tCrossProduct;
CurrentDirectory             return tCurrentDirectory;
CurrentDir                   return tCurrentDirectory;

DTime                        return tDTime;
Date                         return tDate;
DecomposeInSimplex           return tDecomposeInSimplex;
DefineConstant               return tDefineConstant;
DefineFunction               return tDefineFunction;
DefineGroup                  return tDefineGroup;
DefineNumber                 return tDefineNumber;
DefineString                 return tDefineString;
DefineVariable               return tDefineConstant;
DeformMesh                   return tDeformMesh;
DeformeMesh                  return tDeformMesh;
Delete                       return tDelete;
DeleteFile                   return tDeleteFile;
Depth                        return tDepth;
deRham                       return tdeRham;
DestinationSystem            return tDestinationSystem;
dFunction                    return tdFunction;
Dimension                    return tDimension;
DivisionCoefficient          return tDivisionCoefficient;
DofValue                     return tDofValue;
Dt                           return tDt;
DtDof                        return tDtDof;
DtDofJacNL                   return tDtDofJacNL;
DtDt                         return tDtDt;
DtDtDof                      return tDtDtDof;
DtDtDtDof                    return tDtDtDtDof;
DtDtDtDtDof                  return tDtDtDtDtDof;
DtDtDtDtDtDof                return tDtDtDtDtDtDof;
DtNL                         return tDtNL;

Echo                         return tEcho;
EigenSolve                   return tEigenSolve;
EigenSolveJac                return tEigenSolveJac;
EigenvalueLegend             return tEigenvalueLegend;
Else                         return tElse;
EndFor                       return tEndFor;
EndIf                        return tEndIf;
Entity                       return tEntity;
EntitySubType                return tEntitySubType;
EntityType                   return tEntityType;
Error                        return tError;
Evaluate                     return tEvaluate;
EvaluationPoints             return tEvaluationPoints;
Exp                          return tExp;

Fabs                         return tFabs;
File                         return tFile;
Filter                       return tFilter;
FixRelativePath              return tFixRelativePath;
Flag                         return tFlag;
Floor                        return tFloor;
Fmod                         return tFmod;
Footer                       return tFooter;
For                          return tFor;
Format                       return tFormat;
Formulation                  return tFormulation;
FourierTransform             return tFourierTransform;
FourierTransformJ            return tFourierTransformJ;
Frequency                    return tFrequency;
FrequencyLegend              return tFrequencyLegend;
FrequencySpectrum            return tFrequencySpectrum;
Full_Matrix                  return tFull_Matrix;
Function                     return tFunction;
FunctionSpace                return tFunctionSpace;

Galerkin                     return tGalerkin;
Gamma                        return tGamma;
GenerateGroup                return tGenerateGroup;
GenerateGroupCumulative      return tGenerateGroupCumulative;
GenerateJacGroup             return tGenerateJacGroup;
GenerateJacGroupCumulative   return tGenerateJacGroupCumulative;
GenerateMHMoving             return tGenerateMHMoving;
GenerateMHMovingSeparate     return tGenerateMHMovingSeparate;
GenerateOnly                 return tGenerateOnly;
GenerateOnlyJac              return tGenerateOnlyJac;
GenerateRHSGroup             return tGenerateRHSGroup;
GenerateRHSGroupCumulative   return tGenerateRHSGroupCumulative;
GeoElement                   return tGeoElement;
GetRegion                    return tGetRegion ;
GetResidual                  return tGetResidual;
GlobalEquation               return tGlobalEquation;
GlobalQuantity               return tGlobalQuantity;
GlobalTerm                   return tGlobalTerm;
GmshClearAll                 return tGmshClearAll;
GmshMerge                    return tGmshMerge;
GmshOpen                     return tGmshOpen;
GmshRead                     return tGmshRead;
GmshWrite                    return tGmshWrite;
Group                        return tGroup;
GETDP_MAJOR_VERSION          return tGETDP_MAJOR_VERSION;
GETDP_MINOR_VERSION          return tGETDP_MINOR_VERSION;
GETDP_PATCH_VERSION          return tGETDP_PATCH_VERSION;

HarmonicToTime               return tHarmonicToTime;
Header                       return tHeader;
Hidden                       return tHidden;
Hypot                        return tHypot;

If                           return tIf;
In                           return tIn;
InSupport                    return tInSupport;
Include                      return tInclude;
IndexOfSystem                return tIndexOfSystem;
InitMovingBand2D             return tInitMovingBand2D;
Integral                     return tGalerkin;
Integration                  return tIntegration;
Iso                          return tIso;
IterativeLinearSolver        return tIterativeLinearSolver;
IterativeLoop                return tIterativeLoop;
IterativeLoopN               return tIterativeLoopN;
IterativeTimeReduction       return tIterativeTimeReduction;

JacNL                        return tJacNL;
Jacobian                     return tJacobian;

Lanczos                      return tLanczos;
LastTimeStepOnly             return tLastTimeStepOnly;
LinSpace                     return tLinSpace;
List                         return tList;
ListAlt                      return tListAlt;
ListFromFile                 return tListFromFile;
Log                          return tLog;
Log10                        return tLog10;
LogSpace                     return tLogSpace;

MHJacNL                      return tMHJacNL;
MHTransform                  return tMHTransform;
MPI_Printf                   return tMPI_Printf;
MPI_Rank                     return tMPI_Rank;
MPI_Size                     return tMPI_Size;
Macro                        return tMacro;
MaxNumberOfDivisions         return tMaxNumberOfDivisions;
MaxNumberOfPoints            return tMaxNumberOfPoints;
MeshMovingBand2D             return tMeshMovingBand2D;
MetricTensor                 return tMetricTensor;
Modulo                       return tModulo;
MovingBand2D                 return tMovingBand2D;
MultiplySolution             return tMultiplySolution ;

Name                         return tName;
NameFromString               return tNameFromString;
NameOfBasisFunction          return tNameOfBasisFunction;
NameOfCoef                   return tNameOfCoef;
NameOfConstraint             return tNameOfConstraint;
NameOfFormulation            return tNameOfFormulation;
NameOfMesh                   return tNameOfMesh;
NameOfPostProcessing         return tNameOfPostProcessing;
NameOfResolution             return tNameOfResolution;
NameOfSpace                  return tNameOfSpace;
NameOfSystem                 return tNameOfSystem;
NbrMaxIteration              return tNbrMaxIteration;
NbrRegions                   return tNbrRegions ;
NeverDt                      return tNeverDt;
NewCoordinates               return tNewCoordinates;
NoMesh                       return tNoMesh;
NoNewLine                    return tNoNewLine;
NoTitle                      return tNoTitle;
NumberOfDivisions            return tNumberOfDivisions;
NumberOfPoints               return tNumberOfPoints;

OnBox                        return tOnBox;
OnCut                        return tOnSection;
OnElementsOf                 return tOnElementsOf;
OnelabAction                 return tOnelabAction;
OnGlobal                     return tOnGlobal;
OnGrid                       return tOnGrid;
OnLine                       return tOnLine;
OnPlane                      return tOnPlane;
OnPoint                      return tOnPoint;
OnRegion                     return tOnRegion;
OnSection                    return tOnSection;
Operation                    return tOperation;
OperationEnd                 return tOperationEnd;
Order                        return tOrder;
OriginSystem                 return tOriginSystem;
OverrideTimeStepValue        return tOverrideTimeStepValue;

Pi                           return tPi;
Plot                         return tPlot;
PostOperation                return tPostOperation;
PostProcessing               return tPostProcessing;
PostQuantity                 return tQuantity;
Print                        return tPrint;
PrintConstants               return tPrintConstants;
PrintGroup                   return tPrintGroup;
Printf                       return tPrintf;

Quantity                     return tQuantity;

Rand                         return tRand;
Read                         return tRead;
Region                       return tRegion;
RegionRef                    return tRegionRef;
RelaxationFactor             return tRelaxationFactor;
RenameFile                   return tRenameFile;
ResampleTime                 return tResampleTime;
Resolution                   return tResolution;
Return                       return tReturn;
Round                        return tRound;

SaveMesh                     return tSaveMesh;
SaveSolutionExtendedMH       return tSaveSolutionExtendedMH;
SaveSolutionMHtoTime         return tSaveSolutionMHtoTime;
SaveSolutionWithEntityNum    return tSaveSolutionWithEntityNum;
SelectCorrection             return tSelectCorrection ;
SendMergeFileRequest         return tSendMergeFileRequest;
SendToServer                 return tSendToServer;
SetCommSelf                  return tSetCommSelf;
SetCommWorld                 return tSetCommWorld;
SetFrequency                 return tSetFrequency;
SetGlobalSolverOptions       return tSetGlobalSolverOptions;
SetTime                      return tSetTime;
SetTimeStep                  return tSetTimeStep;
Sign                         return tSign;
Sin                          return tSin;
Sinh                         return tSinh;
Skin                         return tSkin;
Sleep                        return tSleep;
Smoothing                    return tSmoothing;
SolidAngle                   return tSolidAngle;
SolveAgainWithOther          return tSolveAgainWithOther;
SolveJac_AdaptRelax          return tSolveJac_AdaptRelax;
Solver                       return tSolver;
Sort                         return tSort;
Sprintf                      return tSprintf;
Sqrt                         return tSqrt;
StoppingCriterion            return tStoppingCriterion;
Store                        return tStoreInRegister;
StoreInVariable              return tStoreInVariable;
StoreInField                 return tStoreInField;
StoreInMeshBasedField        return tStoreInMeshBasedField;
StoreInRegister              return tStoreInRegister;
StoreMaxInRegister           return tStoreMaxInRegister;
StoreMaxXinRegister          return tStoreMaxXinRegister;
StoreMaxYinRegister          return tStoreMaxYinRegister;
StoreMaxZinRegister          return tStoreMaxZinRegister;
StoreMinInRegister           return tStoreMinInRegister;
StoreMinXinRegister          return tStoreMinXinRegister;
StoreMinYinRegister          return tStoreMinYinRegister;
StoreMinZinRegister          return tStoreMinZinRegister;
Str                          return tStr;
StrCat                       return tStrCat;
StrChoice                    return tStrChoice;
StrCmp                       return tStrCmp ;
StringFromName               return tStringFromName;
SubFunction                  return tSubFunction;
SubRegion                    return tSubRegion;
SubRegionRef                 return tSubRegionRef;
SubSpace                     return tSubSpace;
SubType                      return tSubType;
SubdFunction                 return tSubdFunction;
Support                      return tSupport;
Symmetry                     return tSymmetry;
System                       return tDefineSystem;
SystemCommand                return tSystemCommand;

Tan                          return tTan;
Tanh                         return tTanh;
Target                       return tTarget;
Test                         return tIf;
Theta                        return tTheta;
Time0                        return tTime0;
TimeFunction                 return tTimeFunction;
TimeLegend                   return tTimeLegend;
TimeLoopAdaptive             return tTimeLoopAdaptive;
TimeLoopNewmark              return tTimeLoopNewmark;
TimeLoopRungeKutta           return tTimeLoopRungeKutta;
TimeLoopTheta                return tTimeLoopTheta;
TimeMax                      return tTimeMax;
TimeStep                     return tTimeStep;
TimeValue                    return tTimeValue;
TimeImagValue                return tTimeImagValue;
ToleranceFactor              return tToleranceFactor;
TotalMemory                  return tTotalMemory;
Trace                        return tTrace;
Type                         return tType;

UndefineConstant             return tUndefineConstant;
Update                       return tUpdate;
UpdateConstraint             return tUpdateConstraint;
UsingPost                    return tUsingPost;

Value                        return tValue;
ValueIndex                   return tValueIndex;
ValueName                    return tValueName;

WithArgument                 return tWithArgument;
While                        return tWhile;
Write                        return tWrite;

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
