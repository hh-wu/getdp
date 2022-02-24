%{
// GetDP - Copyright (C) 1997-2015 P. Dular, C. Geuzaine
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/getdp/getdp/issues.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "ProData.h"
#include "ProParser.h"
#include "ProParser.tab.hpp"
#include "MallocUtils.h"
#include "Message.h"

extern std::string getdp_yystring;

// Redefinition of YY_INPUT to allow input character count (this is
// slower than fread(), but the .pro files are never that big) and
// direct parsing from a string
#ifdef YY_INPUT
#undef YY_INPUT
#endif

#define YY_INPUT(buf,result,max_size) {		        \
  int c;                                                \
  if(getdp_yystring.size()){                            \
    c = getdp_yystring[0];                              \
    getdp_yystring = getdp_yystring.substr(1);          \
  }                                                     \
  else{                                                 \
    c = getc(getdp_yyin);				\
  }                                                     \
  getdp_yycolnum++;					\
  result = (c == EOF) ? YY_NULL : (buf[0] = c, 1);	\
}

// undefine register for C++11 compatibility of files generated with old
// versions of flex/bison
#define register

%}

alpha      [a-zA-Z\_]
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
"\'"                         { parseString('\''); return tBIGSTR; }
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
"::"                         return tSCOPE;
"##"                         return tSHOW;

#include                     return tInclude;

0D                           return t0D;
1D                           return t1D;
2D                           return t2D;
3D                           return t3D;

AbsolutePath                 return tAbsolutePath;
ACos                         return tAcos;
ASin                         return tAsin;
Acos                         return tAcos;
Adapt                        return tAdapt;
AddCorrection                return tAddCorrection ;
AddMHMoving                  return tAddMHMoving;
AddOppositeFullSolution      return tAddOppositeFullSolution ;
AddVector                    return tAddVector;
AlignedWith                  return tAlignedWith;
All                          return tAll;
Append                       return tAppend;
AppendTimeStepToFileName     return tAppendTimeStepToFileName;
AppendExpressionToFileName   return tAppendExpressionToFileName;
AppendExpressionFormat       return tAppendExpressionFormat;
AppendStringToFileName       return tAppendStringToFileName;
AppendToExistingFile         return tAppendToExistingFile;
Asin                         return tAsin;
AtAnteriorTimeStep           return tAtAnteriorTimeStep;
AtGaussPoints                return tAtGaussPoints;
MaxOverTime                  return tMaxOverTime;
FourierSteinmetz             return tFourierSteinmetz;
Atan                         return tAtan;
Atan2                        return tAtan2;
Atanh                        return tAtanh;
Auto                         return tAuto;

Barrier			     return tBarrier;
BaseFileName                 return tBaseFileName;
BasisFunction                return tBasisFunction;
Beta                         return tBeta;
Branch                       return tBranch;
Break                        return tBreak;
BroadcastFields              return tBroadcastFields;
BroadcastVariables           return tBroadcastVariables;

Call                         return tCall;
CallTest                     return tCallTest;
Case                         return tCase;
Ceil                         return tCeil;
ChangeOfCoordinates          return tChangeOfCoordinates;
ChangeOfCoordinates2         return tChangeOfCoordinates2;
ChangeOfState                return tChangeOfState;
ChangeOfValues               return tChangeOfValues;
CheckVariables               return tCheckVariables;
ClearVariables               return tClearVariables;
ClearVectors                 return tClearVectors;
CodeName                     return tCodeName;
Coefficient                  return tCoefficient;
Comma                        return tComma;
Const                        return tConstant;
Constant                     return tConstant;
Constraint                   return tConstraint;
CopyDofs                     return tCopyDofs;
CopyDegreesOfFreedom         return tCopyDofs;
CopyIncrement                return tCopyIncrement;
CopyResidual                 return tCopyResidual;
CopyRHS                      return tCopyRHS;
CopyRightHandSide            return tCopyRHS;
CopySolution                 return tCopySolution;
Cos                          return tCos;
Cosh                         return tCosh;
CosineTransform              return tCosineTransform;
CreateDir                    return tCreateDir;
CreateDirectory              return tCreateDir;
Criterion                    return tCriterion;
CreateSolution               return tCreateSolution;
Cross                        return tCrossProduct;
CrossProduct                 return tCrossProduct;
CurrentDirectory             return tCurrentDirectory;
CurrentDir                   return tCurrentDirectory;
CurrentFileName              return tCurrentFileName;

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
DimNameSpace                 return tDimNameSpace;
DirName                      return tDirName;
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
Eig                          return tEig;
EigenSolve                   return tEigenSolve;
EigenSolveAndExpand          return tEigenSolveAndExpand;
EigenSolveJac                return tEigenSolveJac;
EigenvalueLegend             return tEigenvalueLegend;
Else                         return tElse;
ElseIf                       return tElseIf;
EndFor                       return tEndFor;
EndIf                        return tEndIf;
Entity                       return tEntity;
EntitySubType                return tEntitySubType;
EntityType                   return tEntityType;
Error                        return tError;
Evaluate                     return tEvaluate;
Exit                         return tExit;
Exists                       return tExists;
Exp                          return tExp;

Fabs                         return tFabs;
File                         return tFile;
FileExists                   return tFileExists;
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
FrequencyValue               return tFrequencyValue;
DummyFrequencies             return tFrequencySpectrum;
Full_Matrix                  return tFull_Matrix;
Function                     return tFunction;
FunctionRef                  return tFunctionRef;
FunctionSpace                return tFunctionSpace;

Galerkin                     return tIntegral;
Gamma                        return tGamma;
GatherVariables              return tGatherVariables;
GenerateGroup                return tGenerateGroup;
GenerateGroupCumulative      return tGenerateGroupCumulative;
GenerateJacGroup             return tGenerateJacGroup;
GenerateJacGroupCumulative   return tGenerateJacGroupCumulative;
GenerateMHMoving             return tGenerateMHMoving;
GenerateMHMovingSeparate     return tGenerateMHMovingSeparate;
GenerateOnly                 return tGenerateOnly;
GenerateOnlyJac              return tGenerateOnlyJac;
GenerateListOfRHS            return tGenerateListOfRHS;
GenerateRHSGroup             return tGenerateRHSGroup;
GenerateRightHandSideGroup   return tGenerateRHSGroup;
GenerateRHSGroupCumulative   return tGenerateRHSGroupCumulative;
GenerateRightHandSideGroupCumulative return tGenerateRHSGroupCumulative;
GeoElement                   return tGeoElement;
GetForced                    return tGetForced;
GetForcedStr                 return tGetForcedStr;
GetNumber                    return tGetNumber;
GetRegion                    return tGetRegion ;
GetRegions                   return tGetRegions ;
GetResidual                  return tGetResidual;
GetNormSolution              return tGetNormSolution;
GetNormResidual              return tGetNormResidual;
GetNormRHS                   return tGetNormRHS;
GetNormRightHandSide         return tGetNormRHS;
GetNormIncrement             return tGetNormIncrement;
GetString                    return tGetString;
GlobalEquation               return tGlobalEquation;
GlobalQuantity               return tGlobalQuantity;
GlobalTerm                   return tGlobalTerm;
GmshClearAll                 return tGmshClearAll;
GmshMerge                    return tGmshMerge;
GmshOpen                     return tGmshOpen;
GmshRead                     return tGmshRead;
GmshWrite                    return tGmshWrite;
Group                        return tGroup;
GroupExists                  return tGroupExists;
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
Integral                     return tIntegral;
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
LevelInclude                 return tLevelInclude;
LevelTest                    return tLevelTest;
LinSpace                     return tLinSpace;
List                         return tList;
ListAlt                      return tListAlt;
ListFromFile                 return tListFromFile;
ListFromServer               return tListFromServer;
Log                          return tLog;
Log10                        return tLog10;
LogSpace                     return tLogSpace;

MHBilinear                   return tMHBilinear;
MHJacNL                      return tMHBilinear;
MHLinear                     return tMHTransform;
MHTransform                  return tMHTransform;
MPI_Barrier		     return tBarrier;
MPI_BroadcastFields          return tBroadcastFields;
MPI_BroadcastVariables       return tBroadcastVariables;
MPI_GatherVariables          return tGatherVariables;
MPI_ScatterVariables         return tScatterVariables;
MPI_Printf                   return tMPI_Printf;
MPI_Rank                     return tMPI_Rank;
MPI_SetCommSelf              return tSetCommSelf;
MPI_SetCommWorld             return tSetCommWorld;
MPI_Size                     return tMPI_Size;
Min                          return tMin;
Macro                        return tMacro;
Max                          return tMax;
MaxNumberOfDivisions         return tMaxNumberOfDivisions;
MaxNumberOfPoints            return tMaxNumberOfPoints;
MeshMovingBand2D             return tMeshMovingBand2D;
MetricTensor                 return tMetricTensor;
Modulo                       return tModulo;
MovingBand2D                 return tMovingBand2D;
MultiplySolution             return tMultiplySolution ;

Name                         return tName;
NameToString                 return tNameToString;
N2S                          return tNameToString;
NameOfBasisFunction          return tNameOfBasisFunction;
NameOfCoef                   return tNameOfCoef;
NameOfConstraint             return tNameOfConstraint;
NameOfFormulation            return tNameOfFormulation;
NameOfMesh                   return tNameOfMesh;
NameOfPostProcessing         return tNameOfPostProcessing;
NameOfResolution             return tNameOfResolution;
NameOfSpace                  return tNameOfSpace;
NameOfSystem                 return tNameOfSystem;
NameStruct                   return tNameStruct;
NbrMaxIteration              return tNbrMaxIteration;
NbrRegions                   return tNbrRegions ;
NeverDt                      return tNeverDt;
NoMesh                       return tNoMesh;
NoNewLine                    return tNoNewLine;
NoTitle                      return tNoTitle;
NumberOfDivisions            return tNumberOfDivisions;
NumberOfPoints               return tNumberOfPoints;
NumInclude                   return tNumInclude;

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
OptimizerInitialize          return tOptimizerInitialize;
OptimizerUpdate              return tOptimizerUpdate;
Order                        return tOrder;
OriginSystem                 return tOriginSystem;
OverrideTimeStepValue        return tOverrideTimeStepValue;

Parse                        return tParse;
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
Rational                     return tRational;
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
ScatterVariables             return tScatterVariables;
SelectCorrection             return tSelectCorrection ;
SendMergeFileRequest         return tSendMergeFileRequest;
SendToServer                 return tSendToServer;
SetCommSelf                  return tSetCommSelf;
SetCommWorld                 return tSetCommWorld;
SetDTime                     return tSetDTime;
SetExtrapolationOrder        return tSetExtrapolationOrder;
SetFrequency                 return tSetFrequency;
SetGlobalSolverOptions       return tSetGlobalSolverOptions;
SetNumber                    return tSetNumber;
SetString                    return tSetString;
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
StrPrefix                    return tStrPrefix;
StrRelative                  return tStrRelative;
StrCat                       return tStrCat;
StrChoice                    return tStrChoice;
StrCmp                       return tStrCmp;
StrFind                      return tStrFind;
StrLen                       return tStrLen;
StrList                      return tStrList;
StrSub                       return tStrSub;
StringToName                 return tStringToName;
S2N                          return tStringToName;
Struct                       return tDefineStruct;
SubFunction                  return tSubFunction;
SubRegion                    return tSubRegion;
SubRegion2                   return tSubRegion2;
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
Test                         return tTest;
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
TimeToHarmonic               return tTimeToHarmonic;
TimeValue                    return tTimeValue;
TimeImagValue                return tTimeImagValue;
TimeInterval                 return tTimeInterval;
ToleranceFactor              return tToleranceFactor;
TotalMemory                  return tTotalMemory;
Trace                        return tTrace;
Type                         return tType;

UndefineConstant             return tUndefineConstant;
UndefineFunction             return tUndefineFunction;
Update                       return tUpdate;
UpdateConstraint             return tUpdateConstraint;
UpperCase                    return tUpperCase;
LowerCase                    return tLowerCase;
LowerCaseIn                  return tLowerCaseIn;
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

char *strEmpty()
{
  char* s = (char *)Malloc(1); *s = 0;
  return s;
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
  std::string tmp;
  int c = input();
  while(c != endchar){
    if(feof(getdp_yyin)) {
      Message::Error("End of file in string");
      getdp_yycolnum = 0;
      break;
    }
    else if(c == '\n') {
      getdp_yylinenum++;
      getdp_yycolnum = 0;
    }
    else {
      tmp.push_back((char)c);
    }
    c = input();
  }
  tmp.push_back('\0');
  getdp_yylval.c = strSave(tmp.c_str());
}

static bool is_alpha(const int c)
{
  return (c>='a' && c<='z') || (c>='A' && c<='Z') || c=='_';
}

void skipUntil(const char *skip, const char *until)
{
  int l_skip, l_until, l_max, l;
  char chars[256];
  int c_next, c_next_skip, c_next_until, c_previous = 0;

  int nb_skip = 0;

  l_skip = (skip)? strlen(skip) : 0;
  l_until = strlen(until);

  l_max = (l_skip > l_until) ? l_skip : l_until;
  if(l_max >= (int)sizeof(chars)){
    Message::Error("Search pattern too long in skipUntil");
    return;
  }

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
      if(!c_previous || !is_alpha(c_previous)){
        if(chars[0] == until[0]) break;
        if(skip && chars[0] == skip[0]) break;
      }
      c_previous = chars[0];
    }

    l = l_max;

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

    if(!strncmp(chars,until,l_until) && !is_alpha(c_next_until)){
      if(!nb_skip){
	return;
      }
      else{
	nb_skip--;
      }
    }
    else if(skip && !strncmp(chars,skip,l_skip) && !is_alpha(c_next_skip)){
      nb_skip++;
      // Attention: unput(.) should be applied a number of times equal to
      // l-l_skip (always >0 for skip="For" and until="EndFor", or skip="If" and
      // until="EndIf"); in particular, because "If" is followed by a minimum of
      // 3 chars (e.g., '(1)'), with a total lenght thus exactly equal to the
      // one of "EndIf", one avoid an error when looking then for
      // "EndIf". (Patrick)
    }
    else{
      for(int i = 1; i < l - 1; i++){
	unput(chars[l-i]);
        if(chars[l-i] == '\n') getdp_yylinenum--;
      }
    }

  }
}

void skipUntil_test(const char *skip, const char *until,
                    const char *until2, int l_until2_sub, int *type_until2)
{
  int l_skip, l_until, l_until2, l_max, l;
  char chars[256];
  int c_next, c_next_skip, c_next_until, c_next_until2, c_previous = 0, flag_EOL_EOF = 0;

  int nb_skip = 0;

  l_skip = (skip)? strlen(skip) : 0;
  l_until = strlen(until);
  l_until2 = (until2)? strlen(until2) : 0;

  l_max = (l_skip > l_until) ? l_skip : l_until;
  l_max = (l_until2 > l_max) ? l_until2 : l_max;
  if(l_max >= (int)sizeof(chars)){
    Message::Error("Search pattern too long in skipUntil_test");
    return;
  }

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
      if(chars[0] == '"'){
        parseString('"');
      }
      if(chars[0] == '\''){
        parseString('\'');
      }
      if(!c_previous || !is_alpha(c_previous)){
        if(chars[0] == until[0]) break;
        if(skip && chars[0] == skip[0]) break;
        if(!nb_skip && until2 && chars[0] == until2[0]) break;
        // Useless to search for until2 if nb_skip!=0
      }
      c_previous = chars[0];
    }

    l = l_max;
    flag_EOL_EOF = 0;

    for(int i = 1; i < l; i++){
      chars[i] = input();
      if(chars[i] == '\n'){
        // getdp_yylinenum++;
        unput(chars[i]); chars[i] = 0; l = i; flag_EOL_EOF = 1;
        break;
      }
      if(feof(getdp_yyin)){
	l = i; flag_EOL_EOF = 1;
	break;
      }
    }

    if(!flag_EOL_EOF){
      c_next = input(); unput(c_next);
      c_next_skip = (l_skip<l)? chars[l_skip] : c_next;
      c_next_until = (l_until<l)? chars[l_until] : c_next;
      if (!nb_skip)
        c_next_until2 = (l_until2<l)? chars[l_until2] : c_next;
    }
    else{
      c_next = 0; c_next_skip = 0; c_next_until = 0; c_next_until2 = 0;
    }

    if(!nb_skip && !strncmp(chars,until2,l_until2) && !is_alpha(c_next_until2)){
      *type_until2 = 1; // Found word is full until2 (e.g., "ElseIf")
      for(int i = 1; i <= l; i++){ // Only correct if l == l_until2
        unput(chars[l-i]);
        // if(chars[l-i] == '\n') getdp_yylinenum--;
      } // New file position points "ElseIf", that will be then analysed by the parser
      return;
    }
    else if(!nb_skip && !strncmp(chars,until2,l_until2_sub) && !is_alpha(chars[l_until2_sub])){
      *type_until2 = 2; // Found word is subword from until2 (e.g., "Else")
      for(int i = 1; i <= l-l_until2_sub; i++){ // Only correct if l_until2_sub < l
        unput(chars[l-i]);
        // if(chars[l-i] == '\n') getdp_yylinenum--;
      }
      return;
    }
    else if(!strncmp(chars,until,l_until) && !is_alpha(c_next_until)){
      for(int i = 1; i <= l-l_until; i++){
        unput(chars[l-i]);
        // if(chars[l-i] == '\n') getdp_yylinenum--;
      }
      if(!nb_skip){
	return;
      }
      else{
	nb_skip--;
      }
    }
    else if(skip && !strncmp(chars,skip,l_skip) && !is_alpha(c_next_skip)){
      nb_skip++;
    }
    else{
      for(int i = 1; i < l - 1; i++){
	unput(chars[l-i]);
        // if(chars[l-i] == '\n') getdp_yylinenum--;
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
