%{
/* $Id: GetDP.l,v 1.20 2003-03-22 03:30:16 geuzaine Exp $ */
/*
 * Copyright (C) 1997-2003 P. Dular, C. Geuzaine
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 *
 * Please report all bugs and problems to "getdp@geuz.org".
 *
 * Contributor(s):
 *   Ruth Sabariego
 *   Johan Gyselinck
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "Data_Passive.h"
#include "Constant.h"
#include "Malloc.h"
#include "GetDP.tab.h"

extern long int  yylinenum ;
extern int       yycolnum, yyincludenum ;

/* 
   Redefinition of YY_INPUT to allow input character count. 
   This is slower than fread(), but the .pro files are
   never that big...
 */

#ifdef YY_INPUT
#undef YY_INPUT
#endif
#define YY_INPUT(buf,result,max_size) {			\
  int c = getc(yyin);					\
  yycolnum++;						\
  result = (c == EOF) ? YY_NULL : (buf[0] = c, 1);	\
}

char  tmpstring[2048];
void  parsestring(char endchar);
void  C_comments(void) ;
void  CC_comments(void) ;
char  *strsave(char *string) ;
%}

alpha      [a-zA-Z\_\.]
digit      [0-9]
exp        [Ee][-+]?{digit}+
string     {alpha}({alpha}|{digit})*

%e      2000
%p      6000
%n      1000
%k       150
%a      3000
%o      2500
%%

[\ \t\r\f]                   /* nothing to do */ ;
[\n]                         { yycolnum = 0 ; yylinenum++ ; }
<<EOF>>                      { yyincludenum = 0 ; return(0); }

";"                          return tEND ; 
"/*"                         C_comments() ;
"//"                         CC_comments() ;
"\""                         { parsestring('\"'); return tBIGSTR; }

"="                          return tDEF ;
"*^"                         return tCROSSPRODUCT ;
"/\\"                        return tCROSSPRODUCT ;
"||"                         return tOR ;
"&&"                         return tAND ;
"=="                         return tEQUAL ;
"!="                         return tNOTEQUAL ;
"~="                         return tAPPROXEQUAL ;
"<="                         return tLESSOREQUAL ;
">="                         return tGREATEROREQUAL ;
">>"                         return tGREATERGREATER ;
"<<"                         return tLESSLESS ;
"..."                        return tDOTS ;
":"                          return tDOTS ;
"##"                         return tSHOW ;

StrCat                       return tStrCat ;

Pi                           return tPi ;
0D                           return t0D ;
1D                           return t1D ;
2D                           return t2D ;
3D                           return t3D ;

Include                      return tInclude;
#include                     return tInclude;

Constant                     return tConstant ;
Const                        return tConstant ;

Group                        return tGroup ;
DefineGroup                  return tDefineGroup ;
All                          return tAll ;
InSupport                    return tInSupport ;
MovingBand2D                 return tMovingBand2D ;
SaveMesh                     return tSaveMesh ;

DefineFunction               return tDefineFunction ;
DefineVariable               return tDefineConstant ;
DefineConstant               return tDefineConstant ;

List                         return tList ;
ListAlt                      return tListAlt ;

Exp                          return tExp ;
Log                          return tLog ;
Log10                        return tLog10 ;
Sqrt                         return tSqrt ;
Sin                          return tSin ;
ASin                         return tAsin ;
Cos                          return tCos ;
ACos                         return tAcos ;
Tan                          return tTan ; 
Atan                         return tAtan ;
Atan2                        return tAtan2 ;
Sinh                         return tSinh ;
Cosh                         return tCosh ;
Tanh                         return tTanh ;
Fabs                         return tFabs ;
Floor                        return tFloor ;
Ceil                         return tCeil ;
Fmod                         return tFmod ;
Modulo                       return tModulo ;
Hypot                        return tHypot ;
Cross                        return tCrossProduct ;
CrossProduct                 return tCrossProduct ;
SolidAngle                   return tSolidAngle ;
Order                        return tOrder ;
Trace                        return tTrace ;
LinSpace                     return tLinSpace ;
LogSpace                     return tLogSpace ;

MHTransform                  return tMHTransform;
MHJacNL                      return tMHJacNL;

Constraint                   return tConstraint ;
Region                       return tRegion ;
SubRegion                    return tSubRegion ;
RegionRef                    return tRegionRef ;
SubRegionRef                 return tSubRegionRef ;
Coefficient                  return tCoefficient ;
Filter                       return tFilter ;
Value                        return tValue ;
TimeFunction                 return tTimeFunction ;
Branch                       return tBranch ;
Loop                         return tLoop ;
Node                         return tNode ;
NameOfResolution             return tNameOfResolution ;

Jacobian                     return tJacobian ;
Case                         return tCase ;

Integration                  return tIntegration ;
FMMIntegration               return tFMMIntegration ;
Matrix                       return tMatrix ;
Criterion                    return tCriterion ;
GeoElement                   return tGeoElement ;
NumberOfPoints               return tNumberOfPoints ;
MaxNumberOfPoints            return tMaxNumberOfPoints ;
NumberOfDivisions            return tNumberOfDivisions ;
MaxNumberOfDivisions         return tMaxNumberOfDivisions ;
StoppingCriterion            return tStoppingCriterion ;

FunctionSpace                return tFunctionSpace ;
Name                         return tName ;
Type                         return tType ;
SubType                      return tSubType ;
BasisFunction                return tBasisFunction ;
NameOfCoef                   return tNameOfCoef ;
Function                     return tFunction ;
dFunction                    return tdFunction ;
SubFunction                  return tSubFunction ;
Support                      return tSupport ;
Entity                       return tEntity ;
SubSpace                     return tSubSpace ;
NameOfBasisFunction          return tNameOfBasisFunction ;
GlobalQuantity               return tGlobalQuantity ;
EntityType                   return tEntityType ;
EntitySubType                return tEntitySubType ;
NameOfConstraint             return tNameOfConstraint ;

Formulation                  return tFormulation ;
Quantity                     return tQuantity ;
NameOfSpace                  return tNameOfSpace ;
IndexOfSystem                return tIndexOfSystem ;
Symmetry                     return tSymmetry ;
Equation                     return tEquation ;
Galerkin                     return tGalerkin ;
deRham                       return tdeRham ;

Dt                           return tDt ;
DtDof                        return tDtDof ;
DtDt                         return tDtDt ;
DtDtDof                      return tDtDtDof ;
JacNL                        return tJacNL ;
NeverDt                      return tNeverDt ;
DtNL                         return tDtNL ;

In                           return tIn ;
GlobalTerm                   return tGlobalTerm ;
GlobalEquation               return tGlobalEquation ;

Resolution                   return tResolution ;
System                       return tDefineSystem ;
NameOfFormulation            return tNameOfFormulation ;
NameOfMesh                   return tNameOfMesh ;
Frequency                    return tFrequency ;
Solver                       return tSolver ;
OriginSystem                 return tOriginSystem ;
DestinationSystem            return tDestinationSystem ;

Operation                    return tOperation ;
OperationEnd                 return tOperationEnd ;
SetTime                      return tSetTime ;
SetFrequency                 return tSetFrequency ;
Update                       return tUpdate ;
UpdateConstraint             return tUpdateConstraint ;
Generate_FMMGroups           return tGenerateFMMGroups ;
GenerateOnly                 return tGenerateOnly ;
GenerateOnlyJac              return tGenerateOnlyJac ;
FourierTransform             return tFourierTransform ;
FourierTransformJ            return tFourierTransformJ ;
Lanczos                      return tLanczos ;
If                           return tIf ;
Else                         return tElse ;
Test                         return tIf ;
TimeLoopTheta                return tTimeLoopTheta ;
TimeLoopNewmark              return tTimeLoopNewmark ;
Time0                        return tTime0 ;
TimeMax                      return tTimeMax ;
DTime                        return tDTime ;
Theta                        return tTheta ;
Beta                         return tBeta ;
Gamma                        return tGamma ;
IterativeLoop                return tIterativeLoop ;
NbrMaxIteration              return tNbrMaxIteration ;
RelaxationFactor             return tRelaxationFactor ;
IterativeTimeReduction       return tIterativeTimeReduction ;
DivisionCoefficient          return tDivisionCoefficient ;
ChangeOfState                return tChangeOfState ;
ChangeOfCoordinates          return tChangeOfCoordinates ;
ChangeOfValues               return tChangeOfValues ;
SystemCommand                return tSystemCommand ;
Break                        return tBreak ;
SolveJac_AdaptRelax          return tSolveJac_AdaptRelax ;
SaveSolutionExtendedMH       return tSaveSolutionExtendedMH ;
Init_MovingBand2D            return tInit_MovingBand2D ;
Mesh_MovingBand2D            return tMesh_MovingBand2D ;
Generate_MH_Moving           return tGenerate_MH_Moving ;
GenerateGroup                return tGenerateGroup ;
GenerateJacGroup             return tGenerateJacGroup ;

PostProcessing               return tPostProcessing ;
NameOfSystem                 return tNameOfSystem ;

PostOperation                return tPostOperation ;
NameOfPostProcessing         return tNameOfPostProcessing ;
UsingPost                    return tUsingPost ;
Append                       return tAppend ;
Plot                         return tPlot ;
Print                        return tPrint ;
PrintGroup                   return tPrintGroup ;
Echo                         return tEcho ;
Adapt                        return tAdapt ;
Write                        return tWrite ;
OnGlobal                     return tOnGlobal ;
OnRegion                     return tOnRegion ;
OnElementsOf                 return tOnElementsOf ;
OnGrid                       return tOnGrid ;
OnCut                        return tOnSection ;
OnSection                    return tOnSection ;
OnPoint                      return tOnPoint ;
OnLine                       return tOnLine ;
OnPlane                      return tOnPlane ;
OnBox                        return tOnBox ;
WithArgument                 return tWithArgument ;
Smoothing                    return tSmoothing ;
Skin                         return tSkin ;
Format                       return tFormat ;
Footer                       return tFooter ;
Header                       return tHeader ;
Depth                        return tDepth ;
Dimension                    return tDimension ;
HarmonicToTime               return tHarmonicToTime ;
TimeStep                     return tTimeStep ;
Target                       return tTarget ;
File                         return tFile ;
Sort                         return tSort ;
Iso                          return tIso ;
NoNewLine                    return tNoNewLine ;
DecomposeInSimplex           return tDecomposeInSimplex ;

Flag                         return tFlag ;

Help                         return tHelp ;
Check                        return tCheck ;
Cpu                          return tCpu ;

EquationTerm                 return tEquation ;
PostQuantity                 return tQuantity ;
Integral                     return tGalerkin ;

{digit}+                     { yylval.i = atoi(yytext) ; return tINT ; }

{digit}+"."{digit}*({exp})? |
{digit}*"."{digit}+({exp})? |
{digit}+{exp}                { yylval.d = atof(yytext) ; return tFLOAT ; }

{string}                     { yylval.c = strsave((char*)yytext) ; return tSTRING ; }

.                            return yytext[0] ;

%%

#undef yywrap

int yywrap() {
  return(1);
}

#ifdef __cplusplus
#define input yyinput
#endif

void  C_comments(void) {
  int c;

  while(1) {
    while((c = input()) != '*'){ 
      if(c == '\n') yylinenum++ ; 
      if(c == EOF) {
        fprintf(stderr, "Error: End of file in commented region\n") ;
        exit(1);
      }
    } 
    if((c = input()) == '/') return ;
    unput(c) ;
  }
}

void  CC_comments(void) {
  int c;
  while(1){ 	 
    c = input(); 	 
    if(c == '\n' || c == EOF) break; 	 
  }
  yylinenum++ ; 
}

void  parsestring(char endchar) {
  int c, i;
  
  c = input();  
  i = 0;
  while(c != endchar){ 
    if(c == EOF) { 
      yycolnum=0 ; 
      break;
    }
    else if(c == '\n') { 
      yycolnum=0 ; 
    }
    else { 
      tmpstring[i++] = c; 
    }
    c = input(); 
  }
  tmpstring[i++] = '\0';
  yylval.c = strsave(tmpstring);
}

#ifdef __cplusplus
#undef input 
#endif

char *strsave(char *string) {
  return ((char *)strcpy((char *)Malloc(strlen(string)+1), string));
}
