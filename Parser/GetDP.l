%{
/* $Id: GetDP.l,v 1.53 2008-04-14 18:31:03 geuzaine Exp $ */
/*
 * Copyright (C) 1997-2006 P. Dular, C. Geuzaine
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
 * Please report all bugs and problems to <getdp@geuz.org>.
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
#include "Malloc.h"
#include "Parser.h"
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
Sprintf                      return tSprintf ;
Printf                       return tPrintf ;
Read                         return tRead ;
PrintConstants               return tPrintConstants;
StrCmp                       return tStrCmp ;
NbrRegions                   return tNbrRegions ;

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
DeformMesh                   return tDeformeMesh ;
DeformeMesh                  return tDeformeMesh ;

DefineFunction               return tDefineFunction ;
DefineVariable               return tDefineConstant ;
DefineConstant               return tDefineConstant ;

List                         return tList ;
ListAlt                      return tListAlt ;
ListFromFile                 return tListFromFile ;

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
DofValue                     return tDofValue ;
LinSpace                     return tLinSpace ;
LogSpace                     return tLogSpace ;
ChangeCurrentPosition        return tChangeCurrentPosition ;

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
SubdFunction                 return tSubdFunction ;
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
DiscreteGeometry             return tDiscreteGeometry ;

Dt                           return tDt ;
DtDof                        return tDtDof ;
DtDt                         return tDtDt ;
DtDtDof                      return tDtDtDof ;
JacNL                        return tJacNL ;
NeverDt                      return tNeverDt ;
DtNL                         return tDtNL ;
AtAnteriorTimeStep           return tAtAnteriorTimeStep ;

In                           return tIn ;
Full_Matrix                  return tFull_Matrix ;
GlobalTerm                   return tGlobalTerm ;
GlobalEquation               return tGlobalEquation ;

Resolution                   return tResolution ;
System                       return tDefineSystem ;
NameOfFormulation            return tNameOfFormulation ;
NameOfMesh                   return tNameOfMesh ;
Frequency                    return tFrequency ;
DummyFrequency               return tDummyFrequency ;
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
EigenSolve                   return tEigenSolve ;
EigenSolveJac                return tEigenSolveJac ;
Evaluate                     return tEvaluate ;
SelectCorrection             return tSelectCorrection ;
AddCorrection                return tAddCorrection ;
MultiplySolution             return tMultiplySolution ;
AddOppositeFullSolution      return tAddOppositeFullSolution ;
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
ChangeOfCoordinates2         return tChangeOfCoordinates2 ;
ChangeOfValues               return tChangeOfValues ;
SystemCommand                return tSystemCommand ;
Break                        return tBreak ;
SolveJac_AdaptRelax          return tSolveJac_AdaptRelax ;
SaveSolutionExtendedMH       return tSaveSolutionExtendedMH ;
SaveSolutionMHtoTime         return tSaveSolutionMHtoTime ;
Init_MovingBand2D            return tInit_MovingBand2D ;
Mesh_MovingBand2D            return tMesh_MovingBand2D ;
Generate_MH_Moving           return tGenerate_MH_Moving ;
Generate_MH_Moving_Separate  return tGenerate_MH_Moving_Separate ;
Add_MH_Moving                return tAdd_MH_Moving ;
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
Comma                        return tComma ;
HarmonicToTime               return tHarmonicToTime ;
TimeStep                     return tTimeStep ;
Target                       return tTarget ;
File                         return tFile ;
Sort                         return tSort ;
Iso                          return tIso ;
NoNewLine                    return tNoNewLine ;
TimeLegend                   return tTimeLegend ;
FrequencyLegend              return tFrequencyLegend ;
EigenvalueLegend             return tEigenvalueLegend ;
EvaluationPoints             return tEvaluationPoints ;
Store                        return tStore ;
LastTimeStepOnly             return tLastTimeStepOnly ;

If                           return tIf ;
Else                         return tElse ;
EndIf                        return tEndIf ;
For                          return tFor ;
EndFor                       return tEndFor ;

DecomposeInSimplex           return tDecomposeInSimplex ;
Str                          return tStr ;
Date                         return tDate ;

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

#ifndef yytext_ptr
#define yytext_ptr yytext
#endif

void  C_comments(void) {
  int c;

  while(1) {
    while((c = input()) != '*'){ 
      if(feof(yyin)) {
        fprintf(stderr, "Error: End of file in commented region\n") ;
        exit(1);
      }
      if(c == '\n') yylinenum++ ; 
    } 
    if((c = input()) == '/') return ;
    unput(c) ;
  }
}

void  CC_comments(void) {
  int c;
  while(1){ 	 
    c = input(); 	 
    if(feof(yyin) || c == '\n') break; 	 
  }
  yylinenum++ ; 
}

void  parsestring(char endchar) {
  int c, i;
  char tmp[2048];

  c = input();  
  i = 0;
  while(c != endchar){ 
    if(feof(yyin)) { 
      Msg(GERROR, "End of file in string") ;
      yycolnum=0 ; 
      break;
    }
    else if(c == '\n') { 
      yycolnum=0 ; 
    }
    else if(i >= (int)sizeof(tmp)-1) {
      Msg(GERROR, "String too long") ;
      break;
    }
    else { 
      tmp[i++] = c; 
    }
    c = input(); 
  }
  tmp[i] = '\0';
  yylval.c = strsave(tmp);
}

char *strsave(char *string) {
  return ((char *)strcpy((char *)Malloc(strlen(string)+1), string));
}

void skip_until(char *skip, char *until){
  int i, nb_skip;
  int l, l_skip, l_until;
  char chars[256];
  int c_next, c_next_skip, c_next_until;

  nb_skip = 0 ;

  if(skip)
    l_skip = strlen(skip);
  else
    l_skip = 0 ;

  l_until = strlen(until);

  while(1){
    while (1){
      chars[0] = input();
      if(chars[0] == '\n') yylinenum++ ; 
      if(feof(yyin)){
        Msg(GERROR, "Unexpected end of file") ;
	return;
      }
      if(chars[0] == '/'){
        c_next = input();
        if     (c_next ==  '*') C_comments();
        else if(c_next ==  '/') CC_comments();
        else unput(c_next);
      }
      if(chars[0] == until[0]) break;
      if(skip && chars[0] == skip[0]) break;
    }

    l = (l_skip > l_until) ? l_skip : l_until ;
    if(l >= (int)sizeof(chars)){
      Msg(GERROR, "Search pattern too long in skip_until");
      return;
    }
    for(i = 1 ; i < l ; i++){
      chars[i] = input();
      if(chars[i] == '\n') yylinenum++ ; 
      if(feof(yyin)){
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
      for(i = 1; i < l - 1; i++){
	unput(chars[l-i]);
        if(chars[l-i] == '\n') yylinenum-- ;
      }
    }

  }
}

void hack_fsetpos_printf(void) {
  char chars[5];
  int c = input(), c2 = input(), c3 = input();
  unput(c3); unput(c2); unput(c);
  chars[0] = c; chars[1] = c2; chars[2] = c3; chars[3] = 0;
  printf("++++++ c: %d %d %d /%s/\n", (int)c, (int)c2, (int)c3, chars);
}

void hack_fsetpos(void) {
  int c = input();
}

