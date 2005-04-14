/* A Bison parser, made by GNU Bison 1.875b.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tINT = 258,
     tFLOAT = 259,
     tSTRING = 260,
     tBIGSTR = 261,
     tEND = 262,
     tDOTS = 263,
     tStrCat = 264,
     tSprintf = 265,
     tPrintf = 266,
     tRead = 267,
     tFor = 268,
     tEndFor = 269,
     tIf = 270,
     tElse = 271,
     tEndIf = 272,
     tFlag = 273,
     tHelp = 274,
     tCpu = 275,
     tCheck = 276,
     tInclude = 277,
     tConstant = 278,
     tList = 279,
     tListAlt = 280,
     tLinSpace = 281,
     tLogSpace = 282,
     tListFromFile = 283,
     tDefineConstant = 284,
     tPi = 285,
     t0D = 286,
     t1D = 287,
     t2D = 288,
     t3D = 289,
     tExp = 290,
     tLog = 291,
     tLog10 = 292,
     tSqrt = 293,
     tSin = 294,
     tAsin = 295,
     tCos = 296,
     tAcos = 297,
     tTan = 298,
     tAtan = 299,
     tAtan2 = 300,
     tSinh = 301,
     tCosh = 302,
     tTanh = 303,
     tFabs = 304,
     tFloor = 305,
     tCeil = 306,
     tFmod = 307,
     tModulo = 308,
     tHypot = 309,
     tSolidAngle = 310,
     tTrace = 311,
     tOrder = 312,
     tCrossProduct = 313,
     tDofValue = 314,
     tMHTransform = 315,
     tMHJacNL = 316,
     tGroup = 317,
     tDefineGroup = 318,
     tAll = 319,
     tInSupport = 320,
     tMovingBand2D = 321,
     tDefineFunction = 322,
     tConstraint = 323,
     tRegion = 324,
     tSubRegion = 325,
     tRegionRef = 326,
     tSubRegionRef = 327,
     tFilter = 328,
     tCoefficient = 329,
     tValue = 330,
     tTimeFunction = 331,
     tBranch = 332,
     tNode = 333,
     tLoop = 334,
     tNameOfResolution = 335,
     tJacobian = 336,
     tCase = 337,
     tIntegration = 338,
     tFMMIntegration = 339,
     tMatrix = 340,
     tType = 341,
     tSubType = 342,
     tCriterion = 343,
     tGeoElement = 344,
     tNumberOfPoints = 345,
     tMaxNumberOfPoints = 346,
     tNumberOfDivisions = 347,
     tMaxNumberOfDivisions = 348,
     tStoppingCriterion = 349,
     tFunctionSpace = 350,
     tName = 351,
     tBasisFunction = 352,
     tNameOfCoef = 353,
     tFunction = 354,
     tdFunction = 355,
     tSubFunction = 356,
     tSubdFunction = 357,
     tSupport = 358,
     tEntity = 359,
     tSubSpace = 360,
     tNameOfBasisFunction = 361,
     tGlobalQuantity = 362,
     tEntityType = 363,
     tEntitySubType = 364,
     tNameOfConstraint = 365,
     tFormulation = 366,
     tQuantity = 367,
     tNameOfSpace = 368,
     tIndexOfSystem = 369,
     tSymmetry = 370,
     tEquation = 371,
     tGalerkin = 372,
     tdeRham = 373,
     tGlobalTerm = 374,
     tGlobalEquation = 375,
     tDiscreteGeometry = 376,
     tDt = 377,
     tDtDof = 378,
     tDtDt = 379,
     tDtDtDof = 380,
     tJacNL = 381,
     tNeverDt = 382,
     tDtNL = 383,
     tAtAnteriorTimeStep = 384,
     tIn = 385,
     tFull_Matrix = 386,
     tResolution = 387,
     tDefineSystem = 388,
     tNameOfFormulation = 389,
     tNameOfMesh = 390,
     tFrequency = 391,
     tSolver = 392,
     tOriginSystem = 393,
     tDestinationSystem = 394,
     tOperation = 395,
     tOperationEnd = 396,
     tSetTime = 397,
     tDTime = 398,
     tSetFrequency = 399,
     tFourierTransform = 400,
     tFourierTransformJ = 401,
     tLanczos = 402,
     tPerturbation = 403,
     tUpdate = 404,
     tUpdateConstraint = 405,
     tBreak = 406,
     tTimeLoopTheta = 407,
     tTime0 = 408,
     tTimeMax = 409,
     tTheta = 410,
     tTimeLoopNewmark = 411,
     tBeta = 412,
     tGamma = 413,
     tIterativeLoop = 414,
     tNbrMaxIteration = 415,
     tRelaxationFactor = 416,
     tIterativeTimeReduction = 417,
     tDivisionCoefficient = 418,
     tChangeOfState = 419,
     tChangeOfCoordinates = 420,
     tChangeOfCoordinates2 = 421,
     tSystemCommand = 422,
     tGenerateFMMGroups = 423,
     tGenerateOnly = 424,
     tGenerateOnlyJac = 425,
     tSolveJac_AdaptRelax = 426,
     tSaveSolutionExtendedMH = 427,
     tSaveSolutionMHtoTime = 428,
     tInit_MovingBand2D = 429,
     tMesh_MovingBand2D = 430,
     tGenerate_MH_Moving = 431,
     tGenerate_MH_Moving_Separate = 432,
     tAdd_MH_Moving = 433,
     tGenerateGroup = 434,
     tGenerateJacGroup = 435,
     tSaveMesh = 436,
     tDeformeMesh = 437,
     tDummyFrequency = 438,
     tPostProcessing = 439,
     tNameOfSystem = 440,
     tPostOperation = 441,
     tNameOfPostProcessing = 442,
     tUsingPost = 443,
     tAppend = 444,
     tPlot = 445,
     tPrint = 446,
     tPrintGroup = 447,
     tEcho = 448,
     tWrite = 449,
     tAdapt = 450,
     tOnGlobal = 451,
     tOnRegion = 452,
     tOnElementsOf = 453,
     tOnGrid = 454,
     tOnSection = 455,
     tOnPoint = 456,
     tOnLine = 457,
     tOnPlane = 458,
     tOnBox = 459,
     tWithArgument = 460,
     tFile = 461,
     tDepth = 462,
     tDimension = 463,
     tTimeStep = 464,
     tHarmonicToTime = 465,
     tFormat = 466,
     tHeader = 467,
     tFooter = 468,
     tSkin = 469,
     tSmoothing = 470,
     tTarget = 471,
     tSort = 472,
     tIso = 473,
     tNoNewLine = 474,
     tDecomposeInSimplex = 475,
     tChangeOfValues = 476,
     tFrequencyLegend = 477,
     tEvaluationPoints = 478,
     tStr = 479,
     tDate = 480,
     tDEF = 481,
     tOR = 482,
     tAND = 483,
     tAPPROXEQUAL = 484,
     tNOTEQUAL = 485,
     tEQUAL = 486,
     tGREATERGREATER = 487,
     tLESSLESS = 488,
     tGREATEROREQUAL = 489,
     tLESSOREQUAL = 490,
     tCROSSPRODUCT = 491,
     UNARYPREC = 492,
     tSHOW = 493
   };
#endif
#define tINT 258
#define tFLOAT 259
#define tSTRING 260
#define tBIGSTR 261
#define tEND 262
#define tDOTS 263
#define tStrCat 264
#define tSprintf 265
#define tPrintf 266
#define tRead 267
#define tFor 268
#define tEndFor 269
#define tIf 270
#define tElse 271
#define tEndIf 272
#define tFlag 273
#define tHelp 274
#define tCpu 275
#define tCheck 276
#define tInclude 277
#define tConstant 278
#define tList 279
#define tListAlt 280
#define tLinSpace 281
#define tLogSpace 282
#define tListFromFile 283
#define tDefineConstant 284
#define tPi 285
#define t0D 286
#define t1D 287
#define t2D 288
#define t3D 289
#define tExp 290
#define tLog 291
#define tLog10 292
#define tSqrt 293
#define tSin 294
#define tAsin 295
#define tCos 296
#define tAcos 297
#define tTan 298
#define tAtan 299
#define tAtan2 300
#define tSinh 301
#define tCosh 302
#define tTanh 303
#define tFabs 304
#define tFloor 305
#define tCeil 306
#define tFmod 307
#define tModulo 308
#define tHypot 309
#define tSolidAngle 310
#define tTrace 311
#define tOrder 312
#define tCrossProduct 313
#define tDofValue 314
#define tMHTransform 315
#define tMHJacNL 316
#define tGroup 317
#define tDefineGroup 318
#define tAll 319
#define tInSupport 320
#define tMovingBand2D 321
#define tDefineFunction 322
#define tConstraint 323
#define tRegion 324
#define tSubRegion 325
#define tRegionRef 326
#define tSubRegionRef 327
#define tFilter 328
#define tCoefficient 329
#define tValue 330
#define tTimeFunction 331
#define tBranch 332
#define tNode 333
#define tLoop 334
#define tNameOfResolution 335
#define tJacobian 336
#define tCase 337
#define tIntegration 338
#define tFMMIntegration 339
#define tMatrix 340
#define tType 341
#define tSubType 342
#define tCriterion 343
#define tGeoElement 344
#define tNumberOfPoints 345
#define tMaxNumberOfPoints 346
#define tNumberOfDivisions 347
#define tMaxNumberOfDivisions 348
#define tStoppingCriterion 349
#define tFunctionSpace 350
#define tName 351
#define tBasisFunction 352
#define tNameOfCoef 353
#define tFunction 354
#define tdFunction 355
#define tSubFunction 356
#define tSubdFunction 357
#define tSupport 358
#define tEntity 359
#define tSubSpace 360
#define tNameOfBasisFunction 361
#define tGlobalQuantity 362
#define tEntityType 363
#define tEntitySubType 364
#define tNameOfConstraint 365
#define tFormulation 366
#define tQuantity 367
#define tNameOfSpace 368
#define tIndexOfSystem 369
#define tSymmetry 370
#define tEquation 371
#define tGalerkin 372
#define tdeRham 373
#define tGlobalTerm 374
#define tGlobalEquation 375
#define tDiscreteGeometry 376
#define tDt 377
#define tDtDof 378
#define tDtDt 379
#define tDtDtDof 380
#define tJacNL 381
#define tNeverDt 382
#define tDtNL 383
#define tAtAnteriorTimeStep 384
#define tIn 385
#define tFull_Matrix 386
#define tResolution 387
#define tDefineSystem 388
#define tNameOfFormulation 389
#define tNameOfMesh 390
#define tFrequency 391
#define tSolver 392
#define tOriginSystem 393
#define tDestinationSystem 394
#define tOperation 395
#define tOperationEnd 396
#define tSetTime 397
#define tDTime 398
#define tSetFrequency 399
#define tFourierTransform 400
#define tFourierTransformJ 401
#define tLanczos 402
#define tPerturbation 403
#define tUpdate 404
#define tUpdateConstraint 405
#define tBreak 406
#define tTimeLoopTheta 407
#define tTime0 408
#define tTimeMax 409
#define tTheta 410
#define tTimeLoopNewmark 411
#define tBeta 412
#define tGamma 413
#define tIterativeLoop 414
#define tNbrMaxIteration 415
#define tRelaxationFactor 416
#define tIterativeTimeReduction 417
#define tDivisionCoefficient 418
#define tChangeOfState 419
#define tChangeOfCoordinates 420
#define tChangeOfCoordinates2 421
#define tSystemCommand 422
#define tGenerateFMMGroups 423
#define tGenerateOnly 424
#define tGenerateOnlyJac 425
#define tSolveJac_AdaptRelax 426
#define tSaveSolutionExtendedMH 427
#define tSaveSolutionMHtoTime 428
#define tInit_MovingBand2D 429
#define tMesh_MovingBand2D 430
#define tGenerate_MH_Moving 431
#define tGenerate_MH_Moving_Separate 432
#define tAdd_MH_Moving 433
#define tGenerateGroup 434
#define tGenerateJacGroup 435
#define tSaveMesh 436
#define tDeformeMesh 437
#define tDummyFrequency 438
#define tPostProcessing 439
#define tNameOfSystem 440
#define tPostOperation 441
#define tNameOfPostProcessing 442
#define tUsingPost 443
#define tAppend 444
#define tPlot 445
#define tPrint 446
#define tPrintGroup 447
#define tEcho 448
#define tWrite 449
#define tAdapt 450
#define tOnGlobal 451
#define tOnRegion 452
#define tOnElementsOf 453
#define tOnGrid 454
#define tOnSection 455
#define tOnPoint 456
#define tOnLine 457
#define tOnPlane 458
#define tOnBox 459
#define tWithArgument 460
#define tFile 461
#define tDepth 462
#define tDimension 463
#define tTimeStep 464
#define tHarmonicToTime 465
#define tFormat 466
#define tHeader 467
#define tFooter 468
#define tSkin 469
#define tSmoothing 470
#define tTarget 471
#define tSort 472
#define tIso 473
#define tNoNewLine 474
#define tDecomposeInSimplex 475
#define tChangeOfValues 476
#define tFrequencyLegend 477
#define tEvaluationPoints 478
#define tStr 479
#define tDate 480
#define tDEF 481
#define tOR 482
#define tAND 483
#define tAPPROXEQUAL 484
#define tNOTEQUAL 485
#define tEQUAL 486
#define tGREATERGREATER 487
#define tLESSLESS 488
#define tGREATEROREQUAL 489
#define tLESSOREQUAL 490
#define tCROSSPRODUCT 491
#define UNARYPREC 492
#define tSHOW 493




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.73 2005-04-14 07:36:48 dular Exp $ */
/*
 * Copyright (C) 1997-2004 P. Dular, C. Geuzaine
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

/* Modifs a faire:

   Patrick: definir des structures avec valeurs par defaut,
   e.g. BasisFunction_D = ...  (dans un fichier a part).

   Christophe: introduire les listes au sein des expressions (comme
   c'est fait dans les expression-cst), afin de gerer les vecteurs,
   tenseurs, etc., directement, et pas par l'intermediaire d'une
   fonction de creation. */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <time.h>

#include "Data_Passive.h"
#include "Data_Active.h"
#include "Data_DefineE.h"
#include "Malloc.h"
#include "Tools.h"
#include "Init_Problem.h"
#include "Print_ProblemStructure.h"
#include "BF_Function.h"
#include "Quadrature.h"
#include "Cal_Value.h"
#include "Constant.h"
#include "Message.h"
#include "Magic.h"

#define MAX_OPEN_FILES  256 

char  tmp[MAX_STRING_LENGTH] ;


void  Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				 int (*fcmp)(const void *a, const void *b)) ;

int  fcmp_Constant                 (const void *a, const void *b) ;
int  fcmp_Expression_Name          (const void *a, const void *b) ;
int  fcmp_Group_Name               (const void *a, const void *b) ;
int  fcmp_Constraint_Name          (const void *a, const void *b) ;
int  fcmp_JacobianMethod_Name      (const void *a, const void *b) ;
int  fcmp_IntegrationMethod_Name   (const void *a, const void *b) ;
int  fcmp_BasisFunction_Name       (const void *a, const void *b) ;
int  fcmp_FunctionSpace_Name       (const void *a, const void *b) ;
int  fcmp_BasisFunction_NameOfCoef (const void *a, const void *b) ;
int  fcmp_SubSpace_Name            (const void *a, const void *b) ;
int  fcmp_GlobalQuantity_Name      (const void *a, const void *b) ;
int  fcmp_Formulation_Name         (const void *a, const void *b) ;
int  fcmp_DefineQuantity_Name      (const void *a, const void *b) ;
int  fcmp_DefineSystem_Name        (const void *a, const void *b) ;
int  fcmp_Resolution_Name          (const void *a, const void *b) ;
int  fcmp_PostProcessing_Name      (const void *a, const void *b) ;
int  fcmp_PostQuantity_Name        (const void *a, const void *b) ;
int  fcmp_PostOperation_Name       (const void *a, const void *b) ;
int  fcmp_PostSave_Name            (const void *a, const void *b) ;

struct Value *  Add_PostSave(char * Name) ;

int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) ;
int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) ;
int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) ;
int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) ;
int  Add_Expression(struct Expression * Expression_P, char * Name, int Flag_Plus) ;
void Pro_DefineQuantityIndex(List_T * WholeQuantity_L,int DefineQuantityIndexEqu,
			     int * NbrQuantityIndex, int ** QuantityIndexTable,
			     int ** QuantityTraceGroupIndexTable) ;
void Pro_DefineQuantityIndex_1(List_T * WholeQuantity_L, int TraceGroupIndex) ;
void Help(char *topic) ;
int  Print_ListOfDouble(char *format, List_T *list, char *buffer) ;

char  *strsave(char *string) ;
void  yyerror(char *s) ;
void  vyyerror(char *fmt, ...) ;
int   yylex();
void  skip_until (char *skip, char *until);

extern FILE            *yyin ;
extern long int         yylinenum ;
extern char             yyname[MAX_FILE_NAME_LENGTH], yyincludename[MAX_FILE_NAME_LENGTH] ;
extern int              yycolnum, yyincludenum ;
extern char            *yytext ;

extern int                     ErrorLevel, InteractiveLevel ;
extern struct Problem          Problem_S ;
extern struct PostProcessing   InteractivePostProcessing_S ;
extern struct PostSubOperation InteractivePostSubOperation_S ;
extern int                     InteractiveCompute ;

List_T  * ConstantTable_L, * ListDummy_L ;
List_T  * ListOfInt_L, * ListOfTwoInt_L ;
List_T  * ListOfPointer_L, * ListOfPointer2_L, * ListOfChar_L ;
List_T  * Current_BasisFunction_L, * Current_SubSpace_L, * Current_GlobalQuantity_L ;
List_T  * Current_WholeQuantity_L, * Current_System_L ;
List_T  * Operation_L ;

int      Nbr_Index, Flag_MultipleIndex, Save_Nbr_Index ;
List_T  * ListOfInitialList0_L, * InitialList0_L ;
List_T  * ListOfInitialList2_L, * InitialList2_L ;
List_T  * ListOfInitialList_L, * ListOfInitialSuppList_L ;
List_T  * ListOfDefineSystem, * ListOfListOfFormulation ;
List_T  * ListOfConstraintPerRegion, * ListOfRegionIndex, * ListOfSubRegionIndex ;
List_T  * ListOfFormulation ;
List_T  * ListOfBasisFunction, * ListOfSupportIndex, * ListOfEntityIndex ;
List_T  * ListOfConstraintInFS, * ListOfConstraintIndex ;
List_T  * ListOfDefineQuantity, * ListOfFunctionSpaceIndex, * ListOfEquationTerm ;

List_T  * ListOfInt_Lnew ;
int     * ListOfInt_P ;

char     StringAux1[255], * Save_Name ;
static char  tmpstring[1024] ;

int      i, j, k, l, FlagError ;
int      Num_BasisFunction = 1 ;
int      YaccLevel = 0 ;
int      Type_TermOperator, Type_Function, Type_SuppList ;
int      Quantity_TypeOperator, Quantity_Index ;
int      Current_DofIndexInWholeQuantity, Last_DofIndexInWholeQuantity ;
int      Current_NoDofIndexInWholeQuantity ;
int      Current_System ;
int      Nbr_Arguments ;
int      Constraint_Index ;
int      TypeOperatorDofInTrace, DefineQuantityIndexDofInTrace ;
double   d, Value ;


struct Constant  Constant_S, Constant1_S, Constant2_S ;

struct Expression             Expression_S, * Expression_P ;
struct ExpressionPerRegion      ExpressionPerRegion_S ;

struct Group                  Group_S ;

struct Constraint             Constraint_S, * Constraint_P ;
struct ConstraintPerRegion      ConstraintPerRegion_S, * ConstraintPerRegion_P ;
struct MultiConstraintPerRegion MultiConstraintPerRegion_S ;

struct JacobianMethod         JacobianMethod_S ;
struct JacobianCase             JacobianCase_S ;

struct IntegrationMethod      IntegrationMethod_S ;
struct IntegrationCase          IntegrationCase_S ;
struct Quadrature               QuadratureCase_S ;

struct FunctionSpace          FunctionSpace_S ;
struct BasisFunction            BasisFunction_S ;
void  (*FunctionDummy)();
struct GlobalBasisFunction        GlobalBasisFunction_S ;
struct SubSpace                 SubSpace_S ;
struct GlobalQuantity           GlobalQuantity_S ;
struct ConstraintInFS           ConstraintInFS_S ;

struct Formulation            Formulation_S ;
struct DefineQuantity           DefineQuantity_S ;
struct EquationTerm             EquationTerm_S ;
struct WholeQuantity            WholeQuantity_S, *WholeQuantity_P ;

struct GlobalEquationTerm       GlobalEquationTerm_S ;

struct Resolution             Resolution_S ;
struct DefineSystem             DefineSystem_S ;
struct Operation                Operation_S, * Operation_P ;
struct ChangeOfState            ChangeOfState_S ;

struct PostProcessing         PostProcessing_S ;
struct PostQuantity             PostQuantity_S ;
struct PostQuantityTerm           PostQuantityTerm_S ;

struct PostOperation          PostOperation_S ;
struct PostSubOperation         PostSubOperation_S ;


static int ImbricatedLoop = 0;
static fpos_t yyposImbricatedLoopsTab[10];
static int yylinenoImbricatedLoopsTab[10];
static double LoopControlVariablesTab[10][3];
static char *LoopControlVariablesNameTab[10];

time_t date_info;

char   buff[128];

FILE* File;
double _value;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 220 "GetDP.y"
typedef union YYSTYPE {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 778 "GetDP.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 790 "GetDP.tab.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6225

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  261
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  195
/* YYNRULES -- Number of rules. */
#define YYNRULES  741
/* YYNRULES -- Number of states. */
#define YYNSTATES  2008

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   493

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   245,     2,   253,   254,   243,     2,     2,
     248,   249,   241,   239,   258,   240,   252,   242,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     233,     2,   234,   227,   259,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   250,     2,   251,   247,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   256,     2,   257,   260,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   228,   229,   230,   231,   232,   235,   236,   237,
     238,   244,   246,   255
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     4,     7,     8,     9,    13,    18,    23,
      28,    33,    38,    43,    48,    53,    58,    63,    65,    67,
      70,    72,    75,    79,    83,    87,    91,    95,    99,   102,
     105,   109,   113,   117,   121,   125,   129,   133,   137,   141,
     145,   149,   150,   153,   154,   155,   159,   164,   170,   171,
     178,   184,   186,   192,   194,   196,   197,   198,   217,   218,
     219,   227,   230,   232,   235,   237,   239,   241,   243,   244,
     248,   253,   255,   257,   261,   262,   266,   271,   273,   277,
     281,   287,   289,   293,   294,   298,   305,   306,   308,   313,
     314,   317,   321,   322,   325,   331,   338,   346,   348,   350,
     351,   355,   360,   365,   366,   369,   370,   374,   376,   380,
     381,   384,   386,   387,   388,   396,   400,   404,   411,   415,
     419,   423,   427,   431,   435,   439,   443,   447,   451,   455,
     459,   463,   467,   470,   473,   476,   480,   482,   486,   489,
     491,   494,   495,   501,   502,   510,   511,   523,   533,   538,
     543,   544,   552,   559,   562,   565,   568,   571,   575,   578,
     582,   586,   593,   597,   600,   604,   606,   610,   611,   615,
     622,   623,   628,   629,   632,   636,   641,   642,   647,   648,
     651,   655,   659,   664,   665,   670,   671,   674,   678,   682,
     687,   688,   693,   694,   697,   701,   705,   710,   711,   716,
     717,   720,   724,   728,   732,   736,   740,   744,   745,   747,
     750,   754,   756,   757,   760,   764,   769,   773,   778,   784,
     785,   790,   793,   794,   797,   801,   805,   809,   813,   817,
     821,   829,   833,   837,   841,   845,   849,   857,   865,   873,
     874,   877,   881,   883,   885,   886,   889,   893,   898,   902,
     907,   912,   917,   922,   923,   928,   929,   932,   936,   940,
     945,   950,   958,   962,   966,   970,   974,   975,   976,   977,
     996,   997,  1002,  1003,  1006,  1010,  1014,  1018,  1020,  1024,
    1025,  1029,  1031,  1035,  1036,  1040,  1041,  1046,  1047,  1050,
    1054,  1058,  1062,  1063,  1068,  1069,  1072,  1076,  1080,  1084,
    1089,  1090,  1093,  1097,  1099,  1101,  1102,  1105,  1109,  1114,
    1118,  1123,  1128,  1129,  1134,  1137,  1138,  1141,  1145,  1149,
    1153,  1157,  1161,  1162,  1168,  1169,  1177,  1181,  1182,  1188,
    1192,  1196,  1200,  1204,  1208,  1209,  1213,  1214,  1217,  1220,
    1223,  1228,  1233,  1238,  1243,  1244,  1247,  1251,  1255,  1259,
    1260,  1263,  1267,  1271,  1275,  1279,  1280,  1283,  1284,  1285,
    1295,  1299,  1303,  1307,  1310,  1314,  1320,  1321,  1324,  1328,
    1329,  1330,  1340,  1341,  1343,  1345,  1347,  1349,  1351,  1353,
    1355,  1360,  1364,  1365,  1368,  1372,  1374,  1376,  1377,  1380,
    1384,  1389,  1394,  1395,  1401,  1403,  1404,  1409,  1412,  1413,
    1416,  1420,  1424,  1428,  1432,  1436,  1440,  1444,  1448,  1450,
    1453,  1457,  1458,  1462,  1464,  1468,  1469,  1473,  1474,  1477,
    1481,  1485,  1490,  1495,  1500,  1505,  1511,  1517,  1520,  1528,
    1540,  1548,  1562,  1574,  1584,  1592,  1600,  1608,  1618,  1628,
    1638,  1650,  1668,  1682,  1698,  1710,  1724,  1725,  1733,  1734,
    1742,  1750,  1762,  1768,  1774,  1784,  1794,  1804,  1810,  1816,
    1828,  1838,  1853,  1868,  1876,  1889,  1900,  1908,  1916,  1924,
    1926,  1928,  1930,  1931,  1934,  1938,  1942,  1945,  1946,  1949,
    1953,  1957,  1961,  1965,  1970,  1971,  1974,  1978,  1982,  1986,
    1990,  1994,  1999,  2000,  2003,  2007,  2011,  2015,  2019,  2024,
    2025,  2028,  2032,  2036,  2040,  2044,  2048,  2053,  2058,  2063,
    2064,  2069,  2070,  2073,  2077,  2081,  2085,  2089,  2093,  2097,
    2098,  2101,  2105,  2107,  2108,  2111,  2115,  2120,  2125,  2129,
    2134,  2135,  2140,  2143,  2146,  2147,  2150,  2154,  2159,  2160,
    2166,  2172,  2173,  2176,  2177,  2184,  2188,  2189,  2194,  2198,
    2202,  2203,  2206,  2210,  2212,  2214,  2215,  2218,  2222,  2226,
    2230,  2234,  2239,  2240,  2249,  2250,  2251,  2255,  2263,  2271,
    2284,  2293,  2305,  2306,  2317,  2319,  2326,  2330,  2337,  2339,
    2341,  2343,  2345,  2346,  2350,  2352,  2355,  2358,  2371,  2374,
    2390,  2395,  2408,  2426,  2449,  2462,  2463,  2466,  2470,  2475,
    2480,  2484,  2487,  2490,  2494,  2498,  2502,  2506,  2510,  2514,
    2518,  2522,  2526,  2530,  2534,  2538,  2544,  2547,  2550,  2554,
    2564,  2568,  2578,  2584,  2585,  2588,  2595,  2604,  2613,  2624,
    2626,  2631,  2633,  2639,  2644,  2649,  2657,  2662,  2670,  2676,
    2684,  2690,  2699,  2700,  2704,  2710,  2716,  2718,  2720,  2722,
    2724,  2726,  2728,  2730,  2732,  2734,  2736,  2738,  2740,  2742,
    2744,  2746,  2748,  2750,  2752,  2754,  2756,  2758,  2760,  2764,
    2767,  2770,  2774,  2778,  2782,  2786,  2790,  2794,  2798,  2802,
    2806,  2810,  2814,  2818,  2822,  2826,  2831,  2836,  2841,  2846,
    2851,  2856,  2861,  2866,  2871,  2876,  2883,  2888,  2893,  2898,
    2903,  2908,  2913,  2920,  2927,  2934,  2940,  2943,  2945,  2947,
    2949,  2951,  2953,  2955,  2957,  2959,  2960,  2962,  2964,  2968,
    2970,  2972,  2976,  2980,  2984,  2990,  2994,  2999,  3004,  3011,
    3020,  3029,  3035,  3041,  3043,  3045,  3047,  3049,  3051,  3056,
    3063,  3065
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     262,     0,    -1,    -1,   263,   264,    -1,    -1,    -1,   264,
     265,   266,    -1,    62,   256,   269,   257,    -1,    99,   256,
     292,   257,    -1,    68,   256,   327,   257,    -1,    81,   256,
     312,   257,    -1,    83,   256,   318,   257,    -1,    95,   256,
     334,   257,    -1,   111,   256,   357,   257,    -1,   132,   256,
     384,   257,    -1,   184,   256,   414,   257,    -1,   186,   256,
     426,   257,    -1,   430,    -1,   444,    -1,    22,   454,    -1,
     267,    -1,    19,     7,    -1,    19,   191,     7,    -1,    19,
      21,     7,    -1,    19,    36,     7,    -1,    19,    20,     7,
      -1,    19,    19,     7,    -1,    19,     5,     7,    -1,    20,
       7,    -1,    21,     7,    -1,    21,    62,     7,    -1,    21,
      99,     7,    -1,    21,    68,     7,    -1,    21,    81,     7,
      -1,    21,    83,     7,    -1,    21,    95,     7,    -1,    21,
     111,     7,    -1,    21,   132,     7,    -1,    21,   184,     7,
      -1,    21,   186,     7,    -1,    21,     3,     7,    -1,    -1,
     268,   434,    -1,    -1,    -1,   269,   270,   271,    -1,   453,
     226,   276,     7,    -1,     5,   291,   226,   276,     7,    -1,
      -1,     5,   289,   226,   272,   276,     7,    -1,    63,   250,
     287,   251,     7,    -1,   273,    -1,   453,   239,   226,   276,
       7,    -1,   444,    -1,   443,    -1,    -1,    -1,   453,   250,
     447,   251,   226,    66,   274,   250,   253,   284,   275,   258,
     253,   284,   258,   447,   251,     7,    -1,    -1,    -1,   280,
     250,   277,   281,   278,   282,   251,    -1,   253,   284,    -1,
     276,    -1,   453,   290,    -1,    69,    -1,     5,    -1,   284,
      -1,    64,    -1,    -1,   288,   283,   284,    -1,   288,    65,
     453,   290,    -1,     5,    -1,   286,    -1,   256,   285,   257,
      -1,    -1,   285,   288,   286,    -1,   285,   288,   240,   286,
      -1,     3,    -1,   259,   450,   259,    -1,     3,     8,   447,
      -1,     3,     8,     3,     8,   447,    -1,   453,    -1,     5,
     256,   257,    -1,    -1,   287,   288,     5,    -1,   287,   288,
       5,   256,   447,   257,    -1,    -1,   258,    -1,   256,   253,
     447,   257,    -1,    -1,   256,   257,    -1,   256,     3,   257,
      -1,    -1,   292,   293,    -1,    67,   250,   294,   251,     7,
      -1,     5,   250,   251,   226,   295,     7,    -1,     5,   250,
     279,   251,   226,   295,     7,    -1,   444,    -1,   443,    -1,
      -1,   294,   288,     5,    -1,    23,   250,   447,   251,    -1,
      99,   250,     5,   251,    -1,    -1,   296,   299,    -1,    -1,
     256,   298,   257,    -1,   295,    -1,   298,   258,   295,    -1,
      -1,   300,   301,    -1,   304,    -1,    -1,    -1,   301,   227,
     302,   301,     8,   303,   301,    -1,   301,   241,   301,    -1,
     301,   244,   301,    -1,    58,   250,   301,   258,   301,   251,
      -1,   301,   242,   301,    -1,   301,   239,   301,    -1,   301,
     240,   301,    -1,   301,   243,   301,    -1,   301,   247,   301,
      -1,   301,   233,   301,    -1,   301,   234,   301,    -1,   301,
     238,   301,    -1,   301,   237,   301,    -1,   301,   232,   301,
      -1,   301,   231,   301,    -1,   301,   230,   301,    -1,   301,
     229,   301,    -1,   301,   228,   301,    -1,   240,   301,    -1,
     239,   301,    -1,   245,   301,    -1,   248,   301,   249,    -1,
     448,    -1,   446,   309,   311,    -1,     5,   383,    -1,   383,
      -1,   383,   309,    -1,    -1,   122,   305,   250,   299,   251,
      -1,    -1,   129,   306,   250,   299,   258,     3,   251,    -1,
      -1,    60,   250,     5,   250,   307,   299,   251,   251,   256,
     447,   257,    -1,    61,   250,     5,   251,   256,   447,   258,
     447,   257,    -1,    55,   250,   383,   251,    -1,    57,   250,
     383,   251,    -1,    -1,    56,   308,   250,   299,   258,   279,
     251,    -1,   233,     5,   234,   250,   299,   251,    -1,   254,
       5,    -1,   254,   209,    -1,   254,   143,    -1,   254,     3,
      -1,   304,   253,     3,    -1,   253,     3,    -1,   254,   254,
     453,    -1,   304,   255,   447,    -1,    59,   250,     5,   258,
       3,   251,    -1,   250,   252,   251,    -1,   250,   251,    -1,
     250,   310,   251,    -1,   301,    -1,   310,   258,   301,    -1,
      -1,   256,   450,   257,    -1,   256,    69,   250,   279,   251,
     257,    -1,    -1,   312,   256,   313,   257,    -1,    -1,   313,
     314,    -1,    96,     5,     7,    -1,    82,   256,   315,   257,
      -1,    -1,   315,   256,   316,   257,    -1,    -1,   316,   317,
      -1,    69,   279,     7,    -1,    69,    64,     7,    -1,    81,
       5,   311,     7,    -1,    -1,   318,   256,   319,   257,    -1,
      -1,   319,   320,    -1,    96,     5,     7,    -1,    88,   295,
       7,    -1,    82,   256,   321,   257,    -1,    -1,   321,   256,
     322,   257,    -1,    -1,   322,   323,    -1,    86,     5,     7,
      -1,    87,     5,     7,    -1,    82,   256,   324,   257,    -1,
      -1,   324,   256,   325,   257,    -1,    -1,   325,   326,    -1,
      89,     5,     7,    -1,    90,   447,     7,    -1,    91,   447,
       7,    -1,    92,   447,     7,    -1,    93,   447,     7,    -1,
      94,   447,     7,    -1,    -1,   443,    -1,   327,   328,    -1,
     256,   329,   257,    -1,   444,    -1,    -1,   329,   330,    -1,
      96,   453,     7,    -1,    96,   453,   289,     7,    -1,    86,
       5,     7,    -1,    82,   256,   331,   257,    -1,    82,     5,
     256,   331,   257,    -1,    -1,   331,   256,   332,   257,    -1,
     331,   443,    -1,    -1,   332,   333,    -1,    86,     5,     7,
      -1,    69,   279,     7,    -1,    70,   279,     7,    -1,    76,
     295,     7,    -1,    75,   295,     7,    -1,    80,     5,     7,
      -1,    77,   256,   448,   288,   448,   257,     7,    -1,    71,
     279,     7,    -1,    72,   279,     7,    -1,    99,   295,     7,
      -1,    74,   295,     7,    -1,    73,   295,     7,    -1,    99,
     250,   295,   258,   295,   251,     7,    -1,    74,   250,   295,
     258,   295,   251,     7,    -1,    73,   250,   295,   258,   295,
     251,     7,    -1,    -1,   334,   335,    -1,   256,   336,   257,
      -1,   444,    -1,   443,    -1,    -1,   336,   337,    -1,    96,
     453,     7,    -1,    96,     5,   289,     7,    -1,    86,     5,
       7,    -1,    97,   256,   338,   257,    -1,   105,   256,   344,
     257,    -1,   107,   256,   351,   257,    -1,    68,   256,   354,
     257,    -1,    -1,   338,   256,   339,   257,    -1,    -1,   339,
     340,    -1,    96,     5,     7,    -1,    98,     5,     7,    -1,
      98,     5,   289,     7,    -1,    99,     5,   341,     7,    -1,
     100,   256,     5,   288,     5,   257,     7,    -1,   101,   297,
       7,    -1,   102,   297,     7,    -1,   103,   279,     7,    -1,
     104,   279,     7,    -1,    -1,    -1,    -1,   256,   112,     5,
       7,   111,     5,   289,     7,   342,    62,   279,     7,   343,
     132,     5,   290,     7,   257,    -1,    -1,   344,   256,   345,
     257,    -1,    -1,   345,   346,    -1,    96,     5,     7,    -1,
     106,   347,     7,    -1,    98,   349,     7,    -1,     5,    -1,
     256,   348,   257,    -1,    -1,   348,   288,     5,    -1,     5,
      -1,   256,   350,   257,    -1,    -1,   350,   288,     5,    -1,
      -1,   351,   256,   352,   257,    -1,    -1,   352,   353,    -1,
      96,   453,     7,    -1,    86,     5,     7,    -1,    98,     5,
       7,    -1,    -1,   354,   256,   355,   257,    -1,    -1,   355,
     356,    -1,    98,     5,     7,    -1,   108,   280,     7,    -1,
     109,   283,     7,    -1,   110,   453,   290,     7,    -1,    -1,
     357,   358,    -1,   256,   359,   257,    -1,   444,    -1,   443,
      -1,    -1,   359,   360,    -1,    96,   453,     7,    -1,    96,
       5,   289,     7,    -1,    86,     5,     7,    -1,   112,   256,
     361,   257,    -1,   116,   256,   368,   257,    -1,    -1,   361,
     256,   362,   257,    -1,   361,   443,    -1,    -1,   362,   363,
      -1,    96,   453,     7,    -1,    86,   107,     7,    -1,    86,
     117,     7,    -1,    86,     5,     7,    -1,   183,   449,     7,
      -1,    -1,   113,   453,   364,   367,     7,    -1,    -1,   113,
       5,   256,   257,   365,   367,     7,    -1,   114,     3,     7,
      -1,    -1,   250,   366,   299,   251,     7,    -1,   130,   279,
       7,    -1,    83,     5,     7,    -1,    84,     5,     7,    -1,
      81,     5,     7,    -1,   115,     3,     7,    -1,    -1,   250,
     453,   251,    -1,    -1,   368,   369,    -1,   368,   444,    -1,
     368,   443,    -1,   117,   256,   374,   257,    -1,   118,   256,
     374,   257,    -1,   119,   256,   378,   257,    -1,   120,   256,
     370,   257,    -1,    -1,   370,   371,    -1,    86,     5,     7,
      -1,   110,     5,     7,    -1,   256,   372,   257,    -1,    -1,
     372,   373,    -1,    78,   383,     7,    -1,    79,   383,     7,
      -1,   116,   383,     7,    -1,   130,   279,     7,    -1,    -1,
     374,   375,    -1,    -1,    -1,   382,   250,   376,   299,   377,
     258,   299,   251,     7,    -1,   130,   279,     7,    -1,    81,
       5,     7,    -1,    83,     5,     7,    -1,   131,     7,    -1,
      84,     5,     7,    -1,    85,   250,     3,   251,     7,    -1,
      -1,   378,   379,    -1,   130,   279,     7,    -1,    -1,    -1,
     382,   250,   380,   299,   381,   258,   383,   251,     7,    -1,
      -1,   122,    -1,   123,    -1,   124,    -1,   125,    -1,   126,
      -1,   127,    -1,   128,    -1,   256,     5,   453,   257,    -1,
     256,   453,   257,    -1,    -1,   384,   385,    -1,   256,   386,
     257,    -1,   444,    -1,   443,    -1,    -1,   386,   387,    -1,
      96,   453,     7,    -1,    96,     5,   289,     7,    -1,   133,
     256,   389,   257,    -1,    -1,   140,   388,   256,   396,   257,
      -1,   443,    -1,    -1,   389,   256,   390,   257,    -1,   389,
     443,    -1,    -1,   390,   391,    -1,    96,   453,     7,    -1,
      86,     5,     7,    -1,   134,   392,     7,    -1,   135,   454,
       7,    -1,   138,   394,     7,    -1,   139,     5,     7,    -1,
     136,   449,     7,    -1,   137,   454,     7,    -1,   443,    -1,
     453,   290,    -1,   256,   393,   257,    -1,    -1,   393,   288,
     453,    -1,   453,    -1,   256,   395,   257,    -1,    -1,   395,
     288,   453,    -1,    -1,   396,   397,    -1,     5,   453,     7,
      -1,   142,   295,     7,    -1,   152,   256,   403,   257,    -1,
     156,   256,   405,   257,    -1,   159,   256,   407,   257,    -1,
     162,   256,   409,   257,    -1,     5,   250,   453,   251,     7,
      -1,   142,   250,   295,   251,     7,    -1,   151,     7,    -1,
      15,   250,   295,   251,   256,   396,   257,    -1,    15,   250,
     295,   251,   256,   396,   257,    16,   256,   396,   257,    -1,
     144,   250,     5,   258,   295,   251,     7,    -1,   168,   250,
       5,   258,   295,   258,   295,   258,   295,   258,   295,   251,
       7,    -1,   168,   250,     5,   258,   295,   258,   295,   258,
     295,   251,     7,    -1,   168,   250,     5,   258,   295,   258,
     295,   251,     7,    -1,   169,   250,     5,   258,   449,   251,
       7,    -1,   170,   250,     5,   258,   449,   251,     7,    -1,
     149,   250,     5,   258,   295,   251,     7,    -1,   150,   250,
       5,   258,   279,   258,     5,   251,     7,    -1,   145,   250,
       5,   258,     5,   258,   449,   251,     7,    -1,   146,   250,
       5,   258,     5,   258,   447,   251,     7,    -1,   147,   250,
       5,   258,   447,   258,   449,   258,   447,   251,     7,    -1,
     148,   250,     5,   258,     5,   258,     5,   258,   447,   258,
     449,   258,   447,   258,   447,   251,     7,    -1,   152,   250,
     447,   258,   447,   258,   295,   258,   295,   251,   256,   396,
     257,    -1,   156,   250,   447,   258,   447,   258,   295,   258,
     447,   258,   447,   251,   256,   396,   257,    -1,   159,   250,
     447,   258,   447,   258,   295,   251,   256,   396,   257,    -1,
     159,   250,   447,   258,   447,   258,   295,   258,   447,   251,
     256,   396,   257,    -1,    -1,   191,   398,   250,   400,   401,
     251,     7,    -1,    -1,   194,   399,   250,   400,   401,   251,
       7,    -1,   165,   250,   279,   258,   295,   251,     7,    -1,
     165,   250,   279,   258,   295,   258,   447,   258,   295,   251,
       7,    -1,   186,   250,   453,   251,     7,    -1,   167,   250,
     454,   251,     7,    -1,   171,   250,     5,   258,   449,   258,
     447,   251,     7,    -1,   172,   250,     5,   258,   447,   258,
     454,   251,     7,    -1,   173,   250,     5,   258,   449,   258,
     454,   251,     7,    -1,   174,   256,   453,   257,     7,    -1,
     175,   256,   453,   257,     7,    -1,   181,   256,   453,   258,
     279,   258,   454,   258,   295,   257,     7,    -1,   181,   256,
     453,   258,   279,   258,   454,   257,     7,    -1,   176,   250,
       5,   258,     5,   258,   447,   258,   447,   251,   256,   396,
     257,     7,    -1,   177,   250,     5,   258,     5,   258,   447,
     258,   447,   251,   256,   396,   257,     7,    -1,   178,   250,
       5,   258,   447,   251,     7,    -1,   182,   256,     5,   258,
       5,   258,   135,   454,   258,     4,   257,     7,    -1,   182,
     256,     5,   258,     5,   258,   135,   454,   257,     7,    -1,
     182,   256,     5,   258,     5,   257,     7,    -1,   179,   250,
       5,   258,     5,   251,     7,    -1,   180,   250,     5,   258,
       5,   251,     7,    -1,   443,    -1,   297,    -1,     5,    -1,
      -1,   401,   402,    -1,   258,   206,   454,    -1,   258,   209,
     449,    -1,   258,   449,    -1,    -1,   403,   404,    -1,   153,
     447,     7,    -1,   154,   447,     7,    -1,   143,   295,     7,
      -1,   155,   295,     7,    -1,   140,   256,   396,   257,    -1,
      -1,   405,   406,    -1,   153,   447,     7,    -1,   154,   447,
       7,    -1,   143,   295,     7,    -1,   157,   447,     7,    -1,
     158,   447,     7,    -1,   140,   256,   396,   257,    -1,    -1,
     407,   408,    -1,   160,   447,     7,    -1,    88,   447,     7,
      -1,   161,   295,     7,    -1,    18,   447,     7,    -1,   140,
     256,   396,   257,    -1,    -1,   409,   410,    -1,   160,   447,
       7,    -1,   163,   447,     7,    -1,    88,   447,     7,    -1,
      18,   447,     7,    -1,   133,     5,     7,    -1,   164,   256,
     411,   257,    -1,   140,   256,   396,   257,    -1,   141,   256,
     396,   257,    -1,    -1,   411,   256,   412,   257,    -1,    -1,
     412,   413,    -1,    86,     5,     7,    -1,   112,     5,     7,
      -1,   130,   279,     7,    -1,    88,   447,     7,    -1,    99,
     295,     7,    -1,    18,     5,     7,    -1,    -1,   414,   415,
      -1,   256,   416,   257,    -1,   444,    -1,    -1,   416,   417,
      -1,    96,   453,     7,    -1,    96,     5,   289,     7,    -1,
     134,   453,   290,     7,    -1,   185,     5,     7,    -1,   112,
     256,   418,   257,    -1,    -1,   418,   256,   419,   257,    -1,
     418,   444,    -1,   418,   443,    -1,    -1,   419,   420,    -1,
      96,   453,     7,    -1,    75,   256,   421,   257,    -1,    -1,
     421,   117,   256,   422,   257,    -1,   421,     5,   256,   422,
     257,    -1,    -1,   422,   423,    -1,    -1,   382,   250,   424,
     299,   251,     7,    -1,    86,     5,     7,    -1,    -1,   130,
     425,   279,     7,    -1,    81,     5,     7,    -1,    83,     5,
       7,    -1,    -1,   426,   427,    -1,   256,   428,   257,    -1,
     444,    -1,   443,    -1,    -1,   428,   429,    -1,    96,   453,
       7,    -1,   187,     5,     7,    -1,   211,     5,     7,    -1,
     189,   454,     7,    -1,   140,   256,   432,   257,    -1,    -1,
     186,   453,   188,   453,   431,   256,   432,   257,    -1,    -1,
      -1,   432,   433,   434,    -1,   190,   250,   436,   439,   440,
     251,     7,    -1,   191,   250,   436,   439,   440,   251,     7,
      -1,   191,   250,   436,   439,   440,   251,   240,   234,   254,
     254,   453,     7,    -1,   191,   250,     6,   258,   447,   440,
     251,     7,    -1,   191,   250,     6,   258,   224,   250,   454,
     251,   440,   251,     7,    -1,    -1,   192,   250,   279,   435,
     258,   130,   279,   440,   251,     7,    -1,   443,    -1,   193,
     250,     6,   440,   251,     7,    -1,   453,   438,   258,    -1,
     453,   438,   437,     5,   438,   258,    -1,   241,    -1,   242,
      -1,   239,    -1,   240,    -1,    -1,   250,   279,   251,    -1,
     196,    -1,   197,   279,    -1,   198,   279,    -1,   200,   256,
     256,   450,   257,   256,   450,   257,   256,   450,   257,   257,
      -1,   199,   279,    -1,   199,   256,   295,   258,   295,   258,
     295,   257,   256,   449,   258,   449,   258,   449,   257,    -1,
     201,   256,   450,   257,    -1,   202,   256,   256,   450,   257,
     256,   450,   257,   257,   256,   447,   257,    -1,   203,   256,
     256,   450,   257,   256,   450,   257,   256,   450,   257,   257,
     256,   447,   258,   447,   257,    -1,   204,   256,   256,   450,
     257,   256,   450,   257,   256,   450,   257,   256,   450,   257,
     257,   256,   447,   258,   447,   258,   447,   257,    -1,   197,
     279,   205,     5,   256,   447,   258,   447,   257,   256,   447,
     257,    -1,    -1,   440,   441,    -1,   258,   206,   454,    -1,
     258,   206,   234,   454,    -1,   258,   206,   235,   454,    -1,
     258,   207,   447,    -1,   258,   214,    -1,   258,   215,    -1,
     258,   210,   447,    -1,   258,   211,     5,    -1,   258,   212,
     442,    -1,   258,   213,   442,    -1,   258,   211,   442,    -1,
     258,   208,   447,    -1,   258,   209,   449,    -1,   258,   195,
       5,    -1,   258,   217,     5,    -1,   258,   216,   447,    -1,
     258,    75,   449,    -1,   258,   218,   447,    -1,   258,   218,
     256,   450,   257,    -1,   258,   219,    -1,   258,   220,    -1,
     258,   136,   449,    -1,   258,   165,   256,   295,   258,   295,
     258,   295,   257,    -1,   258,   221,   297,    -1,   258,   222,
     256,   447,   258,   447,   258,   447,   257,    -1,   258,   223,
     256,   450,   257,    -1,    -1,   442,     6,    -1,    13,   248,
     447,     8,   447,   249,    -1,    13,   248,   447,     8,   447,
       8,   447,   249,    -1,    13,     5,   130,   256,   447,     8,
     447,   257,    -1,    13,     5,   130,   256,   447,     8,   447,
       8,   447,   257,    -1,    14,    -1,    15,   248,   447,   249,
      -1,    17,    -1,    29,   250,   445,   251,     7,    -1,   453,
     226,   449,     7,    -1,   453,   226,     6,     7,    -1,   453,
     226,   224,   250,   454,   251,     7,    -1,   453,   226,   455,
       7,    -1,   453,   226,    28,   250,   454,   251,     7,    -1,
      11,   248,     6,   249,     7,    -1,    11,   248,     6,   258,
     450,   249,     7,    -1,    12,   248,   453,   249,     7,    -1,
      12,   248,   453,   249,   250,   447,   251,     7,    -1,    -1,
     445,   288,     5,    -1,   445,   288,     5,   226,   447,    -1,
     445,   288,     5,   226,     6,    -1,    35,    -1,    36,    -1,
      37,    -1,    38,    -1,    39,    -1,    40,    -1,    41,    -1,
      42,    -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,
      47,    -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,
      52,    -1,    53,    -1,    54,    -1,   453,    -1,   448,    -1,
     248,   447,   249,    -1,   240,   447,    -1,   245,   447,    -1,
     447,   240,   447,    -1,   447,   239,   447,    -1,   447,   241,
     447,    -1,   447,   242,   447,    -1,   447,   243,   447,    -1,
     447,   247,   447,    -1,   447,   233,   447,    -1,   447,   234,
     447,    -1,   447,   238,   447,    -1,   447,   237,   447,    -1,
     447,   232,   447,    -1,   447,   231,   447,    -1,   447,   229,
     447,    -1,   447,   228,   447,    -1,    35,   250,   447,   251,
      -1,    36,   250,   447,   251,    -1,    37,   250,   447,   251,
      -1,    38,   250,   447,   251,    -1,    39,   250,   447,   251,
      -1,    40,   250,   447,   251,    -1,    41,   250,   447,   251,
      -1,    42,   250,   447,   251,    -1,    43,   250,   447,   251,
      -1,    44,   250,   447,   251,    -1,    45,   250,   447,   258,
     447,   251,    -1,    46,   250,   447,   251,    -1,    47,   250,
     447,   251,    -1,    48,   250,   447,   251,    -1,    49,   250,
     447,   251,    -1,    50,   250,   447,   251,    -1,    51,   250,
     447,   251,    -1,    52,   250,   447,   258,   447,   251,    -1,
      53,   250,   447,   258,   447,   251,    -1,    54,   250,   447,
     258,   447,   251,    -1,   447,   227,   447,     8,   447,    -1,
     447,   253,    -1,     4,    -1,     3,    -1,    30,    -1,    31,
      -1,    32,    -1,    33,    -1,    34,    -1,   453,    -1,    -1,
     447,    -1,   451,    -1,   256,   450,   257,    -1,   447,    -1,
     451,    -1,   450,   258,   447,    -1,   450,   258,   451,    -1,
     447,     8,   447,    -1,   447,     8,   447,     8,   447,    -1,
       5,   256,   257,    -1,     5,   256,   450,   257,    -1,    24,
     250,     5,   251,    -1,    25,   250,     5,   258,     5,   251,
      -1,    26,   250,   447,   258,   447,   258,   447,   251,    -1,
      27,   250,   447,   258,   447,   258,   447,   251,    -1,     5,
     260,   256,   447,   257,    -1,   452,   260,   256,   447,   257,
      -1,     5,    -1,   452,    -1,     6,    -1,     5,    -1,   455,
      -1,    10,   248,   454,   249,    -1,    10,   248,   454,   258,
     450,   249,    -1,   225,    -1,     9,   250,   454,   258,   454,
     251,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   373,   373,   373,   446,   450,   449,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   468,   470,   472,
     477,   487,   489,   491,   493,   495,   497,   499,   501,   503,
     505,   507,   509,   511,   513,   515,   517,   519,   521,   523,
     525,   528,   528,   550,   553,   553,   559,   561,   567,   566,
     571,   573,   575,   578,   580,   586,   596,   585,   613,   618,
     612,   638,   649,   654,   691,   694,   707,   708,   725,   727,
     730,   781,   794,   818,   826,   838,   856,   879,   883,   895,
     904,   918,   952,   972,   976,   986,  1003,  1003,  1008,  1014,
    1015,  1022,  1031,  1034,  1039,  1041,  1061,  1105,  1107,  1111,
    1114,  1134,  1140,  1147,  1147,  1157,  1161,  1167,  1170,  1177,
    1177,  1190,  1193,  1206,  1192,  1234,  1240,  1246,  1252,  1258,
    1264,  1270,  1276,  1282,  1288,  1294,  1300,  1306,  1312,  1318,
    1324,  1330,  1337,  1343,  1345,  1356,  1358,  1364,  1438,  1472,
    1481,  1494,  1493,  1508,  1507,  1522,  1521,  1537,  1549,  1555,
    1562,  1561,  1592,  1616,  1629,  1635,  1642,  1648,  1655,  1662,
    1670,  1677,  1695,  1696,  1697,  1702,  1703,  1709,  1711,  1714,
    1731,  1735,  1743,  1745,  1751,  1756,  1764,  1766,  1774,  1777,
    1783,  1786,  1789,  1828,  1833,  1841,  1847,  1853,  1860,  1863,
    1871,  1873,  1881,  1886,  1892,  1902,  1912,  1920,  1922,  1930,
    1939,  1945,  1993,  1996,  1999,  2002,  2005,  2017,  2021,  2022,
    2027,  2047,  2053,  2060,  2066,  2072,  2079,  2088,  2091,  2116,
    2130,  2150,  2160,  2167,  2173,  2183,  2208,  2233,  2238,  2246,
    2254,  2264,  2281,  2289,  2296,  2303,  2312,  2321,  2330,  2352,
    2357,  2362,  2383,  2385,  2392,  2398,  2404,  2410,  2417,  2426,
    2429,  2432,  2435,  2443,  2458,  2508,  2522,  2528,  2531,  2536,
    2541,  2555,  2575,  2580,  2585,  2609,  2664,  2670,  2673,  2668,
    2748,  2751,  2759,  2761,  2767,  2772,  2775,  2782,  2798,  2805,
    2807,  2826,  2838,  2845,  2847,  2863,  2866,  2876,  2880,  2886,
    2891,  2901,  2915,  2929,  3004,  3013,  3019,  3052,  3055,  3058,
    3105,  3109,  3114,  3134,  3136,  3143,  3148,  3154,  3160,  3167,
    3177,  3179,  3186,  3199,  3213,  3220,  3236,  3242,  3245,  3249,
    3252,  3263,  3270,  3269,  3310,  3309,  3376,  3382,  3381,  3698,
    3703,  3712,  3721,  3730,  3735,  3738,  3779,  3793,  3817,  3822,
    3831,  3834,  3837,  3840,  3852,  3857,  3862,  3872,  3882,  3897,
    3903,  3908,  3910,  3912,  3914,  3923,  3941,  3948,  3956,  3947,
    4080,  4104,  4113,  4122,  4127,  4136,  4148,  4162,  4176,  4201,
    4209,  4200,  4281,  4282,  4283,  4284,  4285,  4286,  4287,  4288,
    4294,  4315,  4340,  4344,  4349,  4368,  4370,  4377,  4382,  4388,
    4395,  4402,  4406,  4405,  4410,  4416,  4430,  4445,  4456,  4469,
    4475,  4478,  4487,  4490,  4495,  4500,  4505,  4510,  4514,  4520,
    4557,  4565,  4567,  4579,  4589,  4596,  4598,  4611,  4618,  4631,
    4653,  4660,  4666,  4672,  4678,  4686,  4708,  4715,  4721,  4732,
    4743,  4756,  4771,  4786,  4801,  4821,  4842,  4854,  4874,  4891,
    4910,  4931,  4965,  4978,  4992,  5005,  5019,  5018,  5028,  5027,
    5036,  5047,  5059,  5069,  5077,  5090,  5103,  5117,  5127,  5137,
    5151,  5165,  5183,  5202,  5213,  5228,  5243,  5258,  5273,  5288,
    5299,  5304,  5315,  5320,  5324,  5327,  5337,  5354,  5363,  5369,
    5373,  5377,  5381,  5386,  5398,  5408,  5414,  5418,  5422,  5426,
    5430,  5435,  5447,  5456,  5461,  5465,  5469,  5473,  5477,  5489,
    5501,  5506,  5510,  5514,  5518,  5523,  5533,  5539,  5545,  5556,
    5558,  5564,  5576,  5581,  5591,  5620,  5623,  5626,  5634,  5652,
    5658,  5663,  5682,  5687,  5696,  5700,  5707,  5715,  5761,  5766,
    5773,  5775,  5778,  5780,  5787,  5792,  5797,  5800,  5807,  5811,
    5817,  5832,  5841,  5846,  5845,  5880,  5891,  5891,  5897,  5906,
    5924,  5930,  5935,  5938,  5940,  5945,  5952,  5956,  5963,  5975,
    5986,  5991,  5998,  5997,  6025,  6028,  6027,  6044,  6048,  6054,
    6060,  6067,  6076,  6075,  6086,  6091,  6100,  6112,  6136,  6137,
    6138,  6139,  6145,  6146,  6152,  6158,  6165,  6172,  6196,  6203,
    6215,  6228,  6248,  6274,  6307,  6329,  6353,  6357,  6364,  6371,
    6378,  6382,  6386,  6390,  6394,  6404,  6409,  6414,  6434,  6441,
    6450,  6459,  6468,  6475,  6483,  6487,  6496,  6500,  6504,  6512,
    6518,  6523,  6530,  6546,  6551,  6601,  6611,  6621,  6635,  6649,
    6675,  6679,  6693,  6695,  6710,  6716,  6722,  6728,  6739,  6744,
    6756,  6766,  6782,  6785,  6791,  6797,  6809,  6810,  6811,  6812,
    6813,  6814,  6815,  6816,  6817,  6818,  6819,  6820,  6821,  6822,
    6823,  6824,  6825,  6826,  6827,  6828,  6829,  6833,  6834,  6835,
    6836,  6837,  6838,  6839,  6840,  6841,  6842,  6843,  6844,  6845,
    6846,  6847,  6848,  6849,  6850,  6851,  6852,  6853,  6854,  6855,
    6856,  6857,  6858,  6859,  6860,  6861,  6862,  6863,  6864,  6865,
    6866,  6867,  6868,  6869,  6870,  6871,  6872,  6877,  6878,  6879,
    6880,  6881,  6882,  6883,  6901,  6920,  6922,  6928,  6931,  6938,
    6944,  6947,  6950,  6962,  6968,  6979,  6995,  7017,  7032,  7070,
    7078,  7090,  7098,  7110,  7112,  7119,  7122,  7137,  7142,  7147,
    7166,  7184
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINT", "tFLOAT", "tSTRING", "tBIGSTR", 
  "tEND", "tDOTS", "tStrCat", "tSprintf", "tPrintf", "tRead", "tFor", 
  "tEndFor", "tIf", "tElse", "tEndIf", "tFlag", "tHelp", "tCpu", "tCheck", 
  "tInclude", "tConstant", "tList", "tListAlt", "tLinSpace", "tLogSpace", 
  "tListFromFile", "tDefineConstant", "tPi", "t0D", "t1D", "t2D", "t3D", 
  "tExp", "tLog", "tLog10", "tSqrt", "tSin", "tAsin", "tCos", "tAcos", 
  "tTan", "tAtan", "tAtan2", "tSinh", "tCosh", "tTanh", "tFabs", "tFloor", 
  "tCeil", "tFmod", "tModulo", "tHypot", "tSolidAngle", "tTrace", 
  "tOrder", "tCrossProduct", "tDofValue", "tMHTransform", "tMHJacNL", 
  "tGroup", "tDefineGroup", "tAll", "tInSupport", "tMovingBand2D", 
  "tDefineFunction", "tConstraint", "tRegion", "tSubRegion", "tRegionRef", 
  "tSubRegionRef", "tFilter", "tCoefficient", "tValue", "tTimeFunction", 
  "tBranch", "tNode", "tLoop", "tNameOfResolution", "tJacobian", "tCase", 
  "tIntegration", "tFMMIntegration", "tMatrix", "tType", "tSubType", 
  "tCriterion", "tGeoElement", "tNumberOfPoints", "tMaxNumberOfPoints", 
  "tNumberOfDivisions", "tMaxNumberOfDivisions", "tStoppingCriterion", 
  "tFunctionSpace", "tName", "tBasisFunction", "tNameOfCoef", "tFunction", 
  "tdFunction", "tSubFunction", "tSubdFunction", "tSupport", "tEntity", 
  "tSubSpace", "tNameOfBasisFunction", "tGlobalQuantity", "tEntityType", 
  "tEntitySubType", "tNameOfConstraint", "tFormulation", "tQuantity", 
  "tNameOfSpace", "tIndexOfSystem", "tSymmetry", "tEquation", "tGalerkin", 
  "tdeRham", "tGlobalTerm", "tGlobalEquation", "tDiscreteGeometry", "tDt", 
  "tDtDof", "tDtDt", "tDtDtDof", "tJacNL", "tNeverDt", "tDtNL", 
  "tAtAnteriorTimeStep", "tIn", "tFull_Matrix", "tResolution", 
  "tDefineSystem", "tNameOfFormulation", "tNameOfMesh", "tFrequency", 
  "tSolver", "tOriginSystem", "tDestinationSystem", "tOperation", 
  "tOperationEnd", "tSetTime", "tDTime", "tSetFrequency", 
  "tFourierTransform", "tFourierTransformJ", "tLanczos", "tPerturbation", 
  "tUpdate", "tUpdateConstraint", "tBreak", "tTimeLoopTheta", "tTime0", 
  "tTimeMax", "tTheta", "tTimeLoopNewmark", "tBeta", "tGamma", 
  "tIterativeLoop", "tNbrMaxIteration", "tRelaxationFactor", 
  "tIterativeTimeReduction", "tDivisionCoefficient", "tChangeOfState", 
  "tChangeOfCoordinates", "tChangeOfCoordinates2", "tSystemCommand", 
  "tGenerateFMMGroups", "tGenerateOnly", "tGenerateOnlyJac", 
  "tSolveJac_AdaptRelax", "tSaveSolutionExtendedMH", 
  "tSaveSolutionMHtoTime", "tInit_MovingBand2D", "tMesh_MovingBand2D", 
  "tGenerate_MH_Moving", "tGenerate_MH_Moving_Separate", "tAdd_MH_Moving", 
  "tGenerateGroup", "tGenerateJacGroup", "tSaveMesh", "tDeformeMesh", 
  "tDummyFrequency", "tPostProcessing", "tNameOfSystem", "tPostOperation", 
  "tNameOfPostProcessing", "tUsingPost", "tAppend", "tPlot", "tPrint", 
  "tPrintGroup", "tEcho", "tWrite", "tAdapt", "tOnGlobal", "tOnRegion", 
  "tOnElementsOf", "tOnGrid", "tOnSection", "tOnPoint", "tOnLine", 
  "tOnPlane", "tOnBox", "tWithArgument", "tFile", "tDepth", "tDimension", 
  "tTimeStep", "tHarmonicToTime", "tFormat", "tHeader", "tFooter", 
  "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", "tNoNewLine", 
  "tDecomposeInSimplex", "tChangeOfValues", "tFrequencyLegend", 
  "tEvaluationPoints", "tStr", "tDate", "tDEF", "'?'", "tOR", "tAND", 
  "tAPPROXEQUAL", "tNOTEQUAL", "tEQUAL", "'<'", "'>'", "tGREATERGREATER", 
  "tLESSLESS", "tGREATEROREQUAL", "tLESSOREQUAL", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", 
  "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", "'@'", 
  "'~'", "$accept", "Stats", "@1", "ProblemDefinitions", "@2", 
  "ProblemDefinition", "Interactive", "@3", "Groups", "@4", "Group", "@5", 
  "MovingBand2DGroup", "@6", "@7", "ReducedGroupRHS", "@8", "@9", 
  "GroupRHS", "FunctionForGroup", "ListOfRegionOrAll", "SuppListOfRegion", 
  "SuppListTypeForGroup", "ListOfRegion", "RecursiveListOfRegion", 
  "IRegion", "DefineGroups", "Comma", "DefineDimension", "MultipleIndex", 
  "Index", "Functions", "Function", "DefineFunctions", "Expression", 
  "@10", "ListOfExpression", "RecursiveListOfExpression", 
  "WholeQuantityExpression", "@11", "WholeQuantity", "@12", "@13", 
  "WholeQuantity_Single", "@14", "@15", "@16", "@17", 
  "ArgumentsForFunction", "RecursiveListOfQuantity", 
  "ParametersForFunction", "JacobianMethods", "JacobianMethod", 
  "JacobianMethodTerm", "JacobianCases", "JacobianCase", 
  "JacobianCaseTerm", "IntegrationMethods", "IntegrationMethod", 
  "IntegrationMethodTerm", "IntegrationCases", "IntegrationCase", 
  "IntegrationCaseTerm", "QuadratureCases", "QuadratureCase", 
  "QuadratureCaseTerm", "Constraints", "BracedConstraint", "Constraint", 
  "ConstraintTerm", "ConstraintCases", "ConstraintCase", 
  "ConstraintCaseTerm", "FunctionSpaces", "BracedFunctionSpace", 
  "FunctionSpace", "FunctionSpaceTerm", "BasisFunctions", "BasisFunction", 
  "BasisFunctionTerm", "OptionalParametersForBasisFunction", "@18", "@19", 
  "SubSpaces", "SubSpace", "SubSpaceTerm", "ListOfBasisFunction", 
  "RecursiveListOfBasisFunction", "ListOfBasisFunctionCoef", 
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", 
  "GlobalQuantity", "GlobalQuantityTerm", "ConstraintInFSs", 
  "ConstraintInFS", "ConstraintInFSTerm", "Formulations", 
  "BracedFormulation", "Formulation", "FormulationTerm", 
  "DefineQuantities", "DefineQuantity", "DefineQuantityTerm", "@20", 
  "@21", "@22", "IndexInFunctionSpace", "Equations", "EquationTerm", 
  "GlobalEquation", "GlobalEquationTerm", "GlobalEquationTermTerm", 
  "GlobalEquationTermTermTerm", "LocalTerm", "LocalTermTerm", "@23", 
  "@24", "GlobalTerm", "GlobalTermTerm", "@25", "@26", "TermOperator", 
  "Quantity_Def", "Resolutions", "BracedResolution", "Resolution", 
  "ResolutionTerm", "@27", "DefineSystems", "DefineSystem", 
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation", 
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm", 
  "@28", "@29", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@30", "@31", 
  "PostOperations", "BracedPostOperation", "PostOperation", 
  "PostOperationTerm", "SeparatePostOperation", "@32", 
  "PostSubOperations", "@33", "PostSubOperation", "@34", 
  "PostQuantitiesToPrint", "Combination", "PostQuantitySupport", 
  "PrintSubType", "PrintOptions", "PrintOption", "ParsedStrings", "Loop", 
  "Affectation", "DefineConstants", "NameForFunction", "FExpr", 
  "OneFExpr", "ListOfFExpr", "RecursiveListOfFExpr", "MultiFExpr", 
  "StringIndex", "String__Index", "CharExpr", "StrCat", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,    63,   482,   483,
     484,   485,   486,    60,    62,   487,   488,   489,   490,    43,
      45,    42,    47,    37,   491,    33,   492,    94,    40,    41,
      91,    93,    46,    35,    36,   493,   123,   125,    44,    64,
     126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   261,   263,   262,   264,   265,   264,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   268,   267,   269,   270,   269,   271,   271,   272,   271,
     271,   271,   271,   271,   271,   274,   275,   273,   277,   278,
     276,   276,   279,   279,   280,   280,   281,   281,   282,   282,
     282,   283,   284,   284,   285,   285,   285,   286,   286,   286,
     286,   286,   286,   287,   287,   287,   288,   288,   289,   290,
     290,   291,   292,   292,   293,   293,   293,   293,   293,   294,
     294,   295,   295,   296,   295,   297,   297,   298,   298,   300,
     299,   301,   302,   303,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   304,   304,   304,   304,   304,
     304,   305,   304,   306,   304,   307,   304,   304,   304,   304,
     308,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   309,   309,   309,   310,   310,   311,   311,   311,
     312,   312,   313,   313,   314,   314,   315,   315,   316,   316,
     317,   317,   317,   318,   318,   319,   319,   320,   320,   320,
     321,   321,   322,   322,   323,   323,   323,   324,   324,   325,
     325,   326,   326,   326,   326,   326,   326,   327,   327,   327,
     328,   328,   329,   329,   330,   330,   330,   330,   330,   331,
     331,   331,   332,   332,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   334,
     334,   335,   335,   335,   336,   336,   337,   337,   337,   337,
     337,   337,   337,   338,   338,   339,   339,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   341,   342,   343,   341,
     344,   344,   345,   345,   346,   346,   346,   347,   347,   348,
     348,   349,   349,   350,   350,   351,   351,   352,   352,   353,
     353,   353,   354,   354,   355,   355,   356,   356,   356,   356,
     357,   357,   358,   358,   358,   359,   359,   360,   360,   360,
     360,   360,   361,   361,   361,   362,   362,   363,   363,   363,
     363,   363,   364,   363,   365,   363,   363,   366,   363,   363,
     363,   363,   363,   363,   367,   367,   368,   368,   368,   368,
     369,   369,   369,   369,   370,   370,   371,   371,   371,   372,
     372,   373,   373,   373,   373,   374,   374,   376,   377,   375,
     375,   375,   375,   375,   375,   375,   378,   378,   379,   380,
     381,   379,   382,   382,   382,   382,   382,   382,   382,   382,
     383,   383,   384,   384,   385,   385,   385,   386,   386,   387,
     387,   387,   388,   387,   387,   389,   389,   389,   390,   390,
     391,   391,   391,   391,   391,   391,   391,   391,   391,   392,
     392,   393,   393,   394,   394,   395,   395,   396,   396,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   398,   397,   399,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     400,   400,   401,   401,   402,   402,   402,   403,   403,   404,
     404,   404,   404,   404,   405,   405,   406,   406,   406,   406,
     406,   406,   407,   407,   408,   408,   408,   408,   408,   409,
     409,   410,   410,   410,   410,   410,   410,   410,   410,   411,
     411,   412,   412,   413,   413,   413,   413,   413,   413,   414,
     414,   415,   415,   416,   416,   417,   417,   417,   417,   417,
     418,   418,   418,   418,   419,   419,   420,   420,   421,   421,
     421,   422,   422,   424,   423,   423,   425,   423,   423,   423,
     426,   426,   427,   427,   427,   428,   428,   429,   429,   429,
     429,   429,   431,   430,   432,   433,   432,   434,   434,   434,
     434,   434,   435,   434,   434,   434,   436,   436,   437,   437,
     437,   437,   438,   438,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   440,   440,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   442,   442,   443,   443,   443,   443,   443,
     443,   443,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   445,   445,   445,   445,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,   446,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   448,   448,   448,
     448,   448,   448,   448,   448,   449,   449,   449,   449,   450,
     450,   450,   450,   451,   451,   451,   451,   451,   451,   451,
     451,   452,   452,   453,   453,   454,   454,   454,   454,   454,
     454,   455
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     0,     0,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     1,     1,     2,
       1,     2,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     2,     0,     0,     3,     4,     5,     0,     6,
       5,     1,     5,     1,     1,     0,     0,    18,     0,     0,
       7,     2,     1,     2,     1,     1,     1,     1,     0,     3,
       4,     1,     1,     3,     0,     3,     4,     1,     3,     3,
       5,     1,     3,     0,     3,     6,     0,     1,     4,     0,
       2,     3,     0,     2,     5,     6,     7,     1,     1,     0,
       3,     4,     4,     0,     2,     0,     3,     1,     3,     0,
       2,     1,     0,     0,     7,     3,     3,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     1,     3,     2,     1,
       2,     0,     5,     0,     7,     0,    11,     9,     4,     4,
       0,     7,     6,     2,     2,     2,     2,     3,     2,     3,
       3,     6,     3,     2,     3,     1,     3,     0,     3,     6,
       0,     4,     0,     2,     3,     4,     0,     4,     0,     2,
       3,     3,     4,     0,     4,     0,     2,     3,     3,     4,
       0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
       2,     3,     3,     3,     3,     3,     3,     0,     1,     2,
       3,     1,     0,     2,     3,     4,     3,     4,     5,     0,
       4,     2,     0,     2,     3,     3,     3,     3,     3,     3,
       7,     3,     3,     3,     3,     3,     7,     7,     7,     0,
       2,     3,     1,     1,     0,     2,     3,     4,     3,     4,
       4,     4,     4,     0,     4,     0,     2,     3,     3,     4,
       4,     7,     3,     3,     3,     3,     0,     0,     0,    18,
       0,     4,     0,     2,     3,     3,     3,     1,     3,     0,
       3,     1,     3,     0,     3,     0,     4,     0,     2,     3,
       3,     3,     0,     4,     0,     2,     3,     3,     3,     4,
       0,     2,     3,     1,     1,     0,     2,     3,     4,     3,
       4,     4,     0,     4,     2,     0,     2,     3,     3,     3,
       3,     3,     0,     5,     0,     7,     3,     0,     5,     3,
       3,     3,     3,     3,     0,     3,     0,     2,     2,     2,
       4,     4,     4,     4,     0,     2,     3,     3,     3,     0,
       2,     3,     3,     3,     3,     0,     2,     0,     0,     9,
       3,     3,     3,     2,     3,     5,     0,     2,     3,     0,
       0,     9,     0,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     0,     2,     3,     1,     1,     0,     2,     3,
       4,     4,     0,     5,     1,     0,     4,     2,     0,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       3,     0,     3,     1,     3,     0,     3,     0,     2,     3,
       3,     4,     4,     4,     4,     5,     5,     2,     7,    11,
       7,    13,    11,     9,     7,     7,     7,     9,     9,     9,
      11,    17,    13,    15,    11,    13,     0,     7,     0,     7,
       7,    11,     5,     5,     9,     9,     9,     5,     5,    11,
       9,    14,    14,     7,    12,    10,     7,     7,     7,     1,
       1,     1,     0,     2,     3,     3,     2,     0,     2,     3,
       3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
       3,     4,     0,     2,     3,     3,     3,     3,     4,     0,
       2,     3,     3,     3,     3,     3,     4,     4,     4,     0,
       4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
       2,     3,     1,     0,     2,     3,     4,     4,     3,     4,
       0,     4,     2,     2,     0,     2,     3,     4,     0,     5,
       5,     0,     2,     0,     6,     3,     0,     4,     3,     3,
       0,     2,     3,     1,     1,     0,     2,     3,     3,     3,
       3,     4,     0,     8,     0,     0,     3,     7,     7,    12,
       8,    11,     0,    10,     1,     6,     3,     6,     1,     1,
       1,     1,     0,     3,     1,     2,     2,    12,     2,    15,
       4,    12,    17,    22,    12,     0,     2,     3,     4,     4,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     2,     2,     3,     9,
       3,     9,     5,     0,     2,     6,     8,     8,    10,     1,
       4,     1,     5,     4,     4,     7,     4,     7,     5,     7,
       5,     8,     0,     3,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     4,     4,     4,     4,
       4,     4,     6,     6,     6,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     3,     1,
       1,     3,     3,     3,     5,     3,     4,     4,     6,     8,
       8,     5,     5,     1,     1,     1,     1,     1,     4,     6,
       1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     4,     1,     5,    41,   733,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    20,     0,    17,    18,   734,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,    28,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   736,   735,     0,     0,   740,    19,
     737,   642,    43,   207,   170,   183,   239,    92,   300,   382,
     519,   550,     0,     0,   629,     0,   631,     0,     0,     0,
       0,    42,   574,     0,   715,     0,     0,     0,    27,    26,
      25,    23,    24,    22,    40,    30,    32,    33,    34,    35,
      31,    36,    37,    38,    39,     0,     0,    86,    44,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   708,   707,
     733,     0,     0,     0,     0,     0,     0,   709,   710,   711,
     712,   713,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   716,   667,     0,
     717,   714,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     7,     0,   212,     9,   209,   211,   172,    10,
     185,    11,   244,    12,   240,   243,   242,   733,     0,     8,
      93,    98,    97,   305,    13,   301,   304,   303,   387,    14,
     383,   386,   385,   523,    15,   520,   522,   555,    16,   551,
     554,   553,   562,     0,     0,     0,     0,   582,     0,     0,
     733,    64,     0,    62,   572,     0,    89,   595,     0,     0,
     634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   669,   670,     0,
     719,     0,   720,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   706,
     633,   636,   731,   638,     0,   640,     0,     0,   738,     0,
     632,   643,   733,     0,    45,    51,    54,    53,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,   630,   584,     0,     0,     0,     0,     0,     0,
       0,     0,   595,     0,     0,     0,   595,    77,   733,    74,
       0,    61,    72,    81,     0,    58,     0,    63,     0,   732,
     725,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   668,   718,
       0,   723,     0,   684,   683,   682,   681,   677,   678,   680,
     679,   672,   671,   673,   674,   675,   676,     0,     0,     0,
       0,     0,     0,     0,     0,    83,   715,     0,     0,     0,
       0,     0,   210,   213,     0,     0,   171,   173,     0,   103,
       0,   184,   186,     0,     0,     0,     0,     0,     0,   241,
     245,     0,     0,    86,     0,     0,     0,     0,   302,   306,
       0,     0,   392,   384,   388,   394,     0,     0,     0,     0,
     521,   524,     0,     0,     0,     0,     0,   552,   556,   564,
       0,     0,   585,   586,   103,   588,     0,     0,     0,     0,
       0,     0,     0,   580,   581,   578,   579,   576,     0,     0,
     595,     0,     0,     0,    86,     0,     0,     0,    90,     0,
       0,   596,   726,   727,     0,     0,     0,     0,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,     0,   696,
     697,   698,   699,   700,   701,     0,     0,     0,     0,   721,
     722,     0,     0,   639,     0,   741,   739,   645,   644,     0,
       0,    48,     0,    86,   733,     0,     0,     0,     0,   219,
       0,     0,   176,     0,   190,     0,     0,     0,   109,     0,
     292,     0,   733,     0,   253,   270,   285,   103,     0,     0,
       0,     0,   733,     0,   312,   336,   733,     0,   395,     0,
     733,     0,   530,    89,     0,     0,   564,     0,     0,     0,
     565,     0,     0,   625,     0,     0,     0,     0,     0,     0,
       0,     0,   583,   582,     0,     0,     0,   708,    79,    82,
      73,     0,    78,     0,    67,    59,    66,   575,   715,   715,
       0,     0,     0,     0,     0,   715,     0,   623,   623,   623,
     601,   602,     0,     0,     0,   616,   617,   105,     0,     0,
       0,     0,     0,   637,     0,     0,     0,     0,   635,   724,
     705,   641,    91,     0,     0,    65,     0,     0,     0,    46,
       0,     0,   219,     0,   216,   214,     0,     0,     0,   174,
       0,     0,     0,   188,   104,     0,   187,     0,   248,     0,
     246,     0,     0,     0,     0,   103,    94,   100,   309,     0,
     307,     0,     0,     0,   389,     0,   417,     0,   525,     0,
       0,   528,   557,   565,   558,   560,   559,   563,     0,     0,
       0,     0,   103,     0,   590,     0,     0,     0,   567,     0,
       0,     0,   568,     0,     0,     0,    75,   595,    86,   613,
     618,   103,   610,     0,     0,   597,   600,   608,   609,   603,
     604,   607,   605,   606,   612,   611,     0,   614,   103,   620,
       0,     0,   728,     0,     0,   695,   702,   703,   704,    88,
       0,    47,    50,    84,    52,     0,     0,   222,   217,   221,
     215,   178,   175,   192,   189,     0,     0,   733,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,     0,   150,
       0,     0,     0,     0,     0,   141,   143,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   111,   139,     0,   136,
     714,   294,   252,   247,   255,   249,   272,   250,   287,   251,
      95,     0,   308,   315,   310,   314,     0,     0,     0,     0,
     311,   337,   339,   338,   390,   398,   391,   397,     0,   526,
     534,   529,   533,   532,   527,   561,   566,     0,   627,   626,
       0,     0,     0,     0,     0,     0,   577,   595,   570,     0,
      80,    76,     0,     0,     0,     0,   598,   599,   624,     0,
     107,     0,     0,     0,     0,     0,    49,     0,    55,   218,
       0,     0,     0,   101,   102,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   133,   132,   134,     0,
     158,   156,   153,   155,   154,     0,   733,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   140,   167,
       0,     0,     0,     0,    96,     0,   355,   355,   366,   344,
       0,     0,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   446,   448,   393,   418,   469,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
      60,    71,     0,     0,   103,   615,   106,   103,     0,   622,
     729,   730,     0,     0,     0,     0,     0,     0,   103,   103,
     103,   103,     0,     0,     0,   103,   220,   223,     0,     0,
     177,   179,     0,     0,     0,   191,   193,     0,   109,     0,
       0,     0,     0,     0,   109,   109,     0,   135,   159,     0,
     381,     0,   131,   130,   129,   128,   127,   123,   124,   126,
     125,   119,   120,   115,   118,   121,   116,   122,   157,   160,
     163,     0,   165,     0,     0,   137,     0,     0,     0,     0,
     293,   295,     0,     0,     0,     0,   105,   105,     0,     0,
     254,   256,     0,     0,     0,   271,   273,     0,     0,     0,
     286,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   715,   327,   313,   316,   372,   372,   372,     0,     0,
       0,     0,     0,   715,     0,     0,     0,   396,   399,   408,
       0,     0,   103,   103,     0,     0,     0,     0,     0,     0,
       0,     0,   427,     0,   477,     0,   484,     0,   492,   499,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   531,   535,   628,     0,     0,     0,     0,     0,
       0,     0,     0,   573,    89,    69,     0,   108,     0,    85,
       0,     0,     0,     0,     0,   103,     0,   103,     0,     0,
       0,     0,     0,     0,   103,     0,     0,     0,   167,   197,
       0,     0,   148,     0,   149,     0,     0,   145,     0,     0,
       0,   109,   380,     0,   162,   164,     0,     0,     0,     0,
       0,     0,    89,     0,     0,   266,     0,     0,     0,     0,
       0,     0,   281,   283,     0,   277,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   733,   322,
       0,     0,     0,     0,   109,     0,     0,     0,     0,   373,
     374,   375,   376,   377,   378,   379,     0,     0,   340,   356,
       0,   341,     0,   342,   367,     0,     0,     0,   349,   343,
     345,     0,     0,   411,     0,    89,     0,     0,     0,   415,
       0,   413,     0,     0,   419,     0,     0,   420,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,   105,   538,     0,     0,     0,     0,     0,     0,     0,
     571,     0,    70,   103,     0,     0,   225,   226,   231,   232,
       0,   235,     0,   234,   228,   227,    86,   229,   224,     0,
     233,   181,   180,     0,     0,   194,   195,     0,     0,     0,
     109,     0,   142,     0,     0,   113,   166,     0,   168,   296,
     297,   298,     0,   257,   258,     0,     0,     0,    86,   262,
     263,   264,   265,   274,    86,   276,    86,   275,   290,   289,
     291,   332,   330,   331,   320,   318,   319,   317,     0,   334,
     326,   333,   329,   321,     0,     0,     0,     0,     0,     0,
     363,   357,     0,   369,     0,     0,     0,   401,   400,    86,
     402,   409,   403,   406,   407,    86,   404,   405,     0,     0,
       0,   103,     0,     0,     0,     0,   103,     0,     0,     0,
     103,     0,     0,   103,   421,   478,     0,     0,   103,     0,
       0,     0,     0,   422,   485,     0,     0,     0,     0,     0,
     103,   423,   493,     0,     0,     0,     0,     0,     0,     0,
       0,   424,   500,   103,     0,   103,   715,   715,   715,     0,
     715,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   471,   470,   472,   472,     0,   536,     0,   715,     0,
       0,     0,     0,   569,     0,     0,    56,   103,   103,     0,
     103,   182,   199,   196,     0,   117,   161,     0,     0,     0,
     152,     0,     0,   299,   259,     0,   260,     0,   282,     0,
     278,     0,   324,     0,     0,     0,   361,   362,   364,     0,
     360,   109,   368,   109,   346,   347,     0,     0,     0,     0,
     348,   350,   410,     0,   414,     0,   425,   417,   426,     0,
       0,     0,     0,     0,     0,     0,     0,   417,     0,     0,
       0,     0,     0,   417,     0,     0,     0,     0,     0,     0,
       0,     0,   417,     0,     0,     0,     0,     0,   417,   417,
       0,     0,   509,     0,   453,     0,     0,     0,     0,     0,
       0,   457,   458,     0,     0,     0,     0,     0,     0,     0,
     452,     0,     0,     0,     0,   537,     0,     0,     0,     0,
       0,     0,   619,   621,     0,     0,     0,     0,     0,     0,
     151,     0,     0,   144,   114,     0,     0,     0,   284,   280,
     334,     0,   323,   328,     0,   358,   370,     0,     0,     0,
       0,   412,   416,     0,     0,   715,     0,   715,     0,     0,
       0,   103,     0,   481,   479,   480,   482,   103,     0,   488,
     486,   487,   489,   490,   103,   497,   495,     0,   494,   496,
     504,   503,   505,     0,     0,   501,   502,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   715,   473,     0,   541,   541,
       0,   715,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   198,   200,     0,
       0,   169,     0,     0,     0,   335,   365,     0,     0,   351,
     352,   353,   354,   428,   430,     0,     0,     0,     0,   436,
       0,     0,   483,     0,   491,     0,   498,   507,   508,   511,
     506,   450,     0,     0,   434,   435,     0,     0,     0,     0,
       0,   463,   467,   468,     0,   466,     0,   447,     0,   715,
     476,   449,   372,   372,   594,     0,   587,   591,     0,     0,
       0,   238,   237,   230,   236,     0,     0,     0,     0,     0,
       0,     0,   147,     0,   261,   325,   109,     0,     0,     0,
       0,     0,     0,     0,   103,     0,     0,     0,     0,   103,
       0,   103,     0,     0,     0,     0,     0,     0,   103,     0,
     474,   475,     0,     0,     0,   546,   540,     0,   542,   539,
     715,     0,     0,     0,   201,   202,   203,   204,   205,   206,
       0,     0,     0,     0,   417,   438,   439,     0,     0,   437,
       0,     0,   417,     0,     0,     0,     0,   103,     0,     0,
     510,   512,     0,   433,     0,   454,   455,   456,     0,     0,
     460,     0,     0,     0,     0,     0,     0,     0,   543,     0,
       0,     0,     0,   146,     0,     0,     0,     0,     0,   715,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   103,     0,     0,     0,   465,     0,   548,   549,
     545,     0,   109,   589,     0,     0,     0,   267,   359,   371,
     429,   440,     0,   417,     0,   444,   417,   518,   513,   516,
     517,   514,   515,   451,   432,     0,   417,   417,   459,     0,
     547,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   464,     0,   592,     0,    57,     0,     0,
     442,   417,   445,   431,     0,     0,   544,     0,     0,     0,
       0,   461,   462,     0,   268,     0,   443,     0,     0,     0,
       0,     0,   441,   593,    89,     0,     0,   269
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    26,   108,   183,
     304,   644,   305,  1003,  1634,   233,   487,   718,   234,   235,
     605,   863,   993,   341,   484,   342,   533,   181,   403,   347,
     404,   114,   200,   433,   547,   548,  1502,   871,   664,   665,
     805,  1041,  1531,   806,   893,   894,  1370,   887,   928,  1063,
    1065,   111,   310,   417,   658,   881,  1021,   112,   311,   422,
     660,   882,  1026,  1364,  1639,  1738,   109,   186,   309,   413,
     653,   880,  1017,   113,   194,   312,   430,   671,   931,  1081,
    1387,  1965,  1998,   672,   932,  1086,  1237,  1396,  1234,  1394,
     673,   933,  1091,   667,   930,  1071,   115,   205,   315,   439,
     681,   935,  1104,  1409,  1650,  1254,  1544,   682,   831,  1108,
    1280,  1426,  1561,  1105,  1269,  1551,  1747,  1107,  1274,  1553,
    1748,  1270,   807,   116,   210,   316,   444,   569,   685,   940,
    1118,  1284,  1429,  1290,  1435,   838,   977,  1158,  1159,  1503,
    1621,  1716,  1306,  1455,  1308,  1464,  1310,  1472,  1311,  1482,
    1697,  1828,  1881,   117,   215,   317,   451,   689,   979,  1163,
    1505,  1792,  1848,  1932,  1897,   118,   219,   318,   458,    27,
     319,   580,   698,    81,   344,   226,   478,   334,   332,   348,
     491,   731,   978,    28,   107,   808,   270,   168,   169,   271,
     272,    29,   171,    59,    60
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1442
static const short yypact[] =
{
   -1442,   102, -1442, -1442,   107,  3861,  -211,  -182,  -119,   637,
     137,  1013,   480,   -78,   -69,   -24,   -10,    27,    30,   123,
     147,   149,   170,     9, -1442, -1442,  1015, -1442, -1442,   -92,
      96,   186,   449,   473,   497, -1442,   502,   524,   547,   553,
     577, -1442,   590, -1442,   592,   603,   606,   609,   615,   620,
     629,   638,   657,   678, -1442, -1442,   230,   293, -1442, -1442,
   -1442, -1442, -1442,   801, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442,   503,    51, -1442,   304, -1442,   418,   461,   466,
     468, -1442, -1442,   440,  2202,  3743,   -88,   476, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442,   480,   480,  -130,   477,    59,
   -1442,  -166,   -27,   188,   455,   483,   534,    94,   563,   473,
     613,  3743,  3743,   473,   348,   164,   744,  3743, -1442, -1442,
    -100,   759,   522,   525,   558,   571,   587, -1442, -1442, -1442,
   -1442, -1442,   635,   644,   647,   652,   671,   688,   691,   694,
     701,   709,   711,   715,   722,   726,   728,   739,   741,   760,
     767,   776,   777,  3743,  3743,  3743,  3639,  3790, -1442,   763,
   -1442, -1442,   806,  4588,   848,  3639,    67,   506,   100,   921,
   -1442,   962, -1442,  1216, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442,  -188,   783, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442,   730,  3853,  4939,  2016,   784,   779,  2016,
    -115, -1442,    32, -1442, -1442,   785,   789, -1442,  4615,  1349,
   -1442,   992,  1036,  3743,  3743,   480,  3743,  3743,  3743,  3743,
    3743,  3743,  3743,  3743,  3743,  3743,  3743,  3743,  3743,  3743,
    3743,  3743,  3743,  3743,  3743,  3743,   480,   -63,   -63,  4962,
    3790,   249, -1442,  3743,  3743,  3743,  3743,  3743,  3743,  3743,
    3743,  3743,  3743,  3743,  3743,  3743,  3743,  3743,  3743, -1442,
   -1442, -1442, -1442, -1442,   155, -1442,  3743,   480, -1442,  3639,
   -1442,   824,   -44,   809, -1442, -1442, -1442, -1442,  -150,   325,
      45,   383,   857,   157, -1442,    38,   460,   447,   929,   795,
    3743,  3743, -1442, -1442,   164,   164,    53,   804,   807,   814,
     816,   820, -1442,   164,   295,  3691, -1442,  1057,    58, -1442,
    3639, -1442, -1442, -1442,   813, -1442,   821, -1442,    36, -1442,
   -1442,   260,   826,   827,  3921,  3944,   828,  2909,  4985,  5012,
    5039,  5066,  5093,  5120,  5147,  5174,  5201,  3967,  5228,  5255,
    5282,  5309,  5336,  5363,  3990,  4013,  4036,   831, -1442, -1442,
    3639,  3870,  3887,  1520,  1676,  1830,  1830,  1017,  1017,  1017,
    1017,   364,   364,   -63,   -63,   -63,   -63,  1077,  5390,   835,
     169,  2434,    37,   861,   862, -1442,  1470,   863,  3743,    17,
    1092,   473, -1442, -1442,   842,  1094, -1442, -1442,   845,   126,
    1097, -1442, -1442,   851,  1099,  1104,   864,   865,   866, -1442,
   -1442,   887,   868,   171,  1112,  1118,   870,   878, -1442, -1442,
    1131,   881, -1442, -1442, -1442, -1442,  1133,   883,   473,  1136,
   -1442, -1442,   473,   886,  1141,   480,  1142, -1442, -1442, -1442,
    3904,  1303,   944, -1442,   126, -1442,   895,  3639,   897,   898,
     899,   181,   915, -1442, -1442, -1442, -1442, -1442,  1164,   920,
    5926,   195,  3806,   919,   272,   311,  1042,    33, -1442,  1170,
    3789, -1442, -1442, -1442,  1190,  3743,  3743,  1189, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  3743, -1442,
   -1442, -1442, -1442, -1442, -1442,  3743,  3743,  3743,  1194,  3790,
   -1442,  3743,  3743, -1442,  1195, -1442, -1442, -1442,  5926,   946,
    3743, -1442,   201,   225,   231,  1202,   201,  5417,   956, -1442,
    1206,    13, -1442,  1208, -1442,   966,   967,  1211, -1442,  1213,
   -1442,  1225,   359,  1227, -1442, -1442, -1442,   126,   997,  1228,
    1235,  1234,   359,  1237, -1442, -1442,   359,  1240, -1442,   986,
     359,  1245, -1442,   789,  1255,  1256, -1442,  1258,  1259,  1261,
    1012,  3743,  3743, -1442,  1266,  1014,  3639,   314,  3639,  3639,
    3639,  1267, -1442,   784,   480,   241,     2,  1265,  5926, -1442,
   -1442,     5, -1442,   164, -1442, -1442, -1442, -1442,  2314,  2314,
    1019,  1271,   661,  3743,  3743,  2314,  3743,  1272, -1442, -1442,
   -1442, -1442,  3743,  1284,  1610, -1442, -1442,  1038,  1039,  1047,
    1053,  4059,  4082, -1442,  5444,  5471,  5498,  5525, -1442,  5926,
    5926, -1442, -1442,  4642,   201, -1442,  1298,  1300,  1304, -1442,
    1301,  1087, -1442,    70, -1442, -1442,  1062,  1313,   426, -1442,
     446,  3743,  1316, -1442, -1442,  2140, -1442,   451, -1442,  1315,
   -1442,   457,   485,   499,  1318,   126, -1442, -1442, -1442,  1319,
   -1442,   168,   162,  1320, -1442,   194, -1442,  1321, -1442,   574,
    1323, -1442, -1442,  1066, -1442, -1442, -1442, -1442,  1015,   520,
    5552,  1075,   126,   540, -1442,   549,   567,   575, -1442,  1074,
    1082,  1327, -1442,  1102,  3743,    41, -1442, -1442,   250, -1442,
   -1442,   126, -1442,   480,   480, -1442,  5926,  5926, -1442,  5926,
   -1442,  1333,  1333,  1333,  5926, -1442,  3639,  5926,   126, -1442,
    3743,  3639, -1442,  3743,  3743, -1442, -1442, -1442, -1442, -1442,
    1334, -1442, -1442,  1086, -1442,  1277,   423, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442,  5575,  1093,   395, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  1105, -1442,
    1115,  1116,  1120,  1121,  1127, -1442, -1442,  1344,  2140,  2140,
    2140,  2140,  1364,    98,  1363,  5978,  -192,  1128,  1128, -1442,
    1157, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442,  1402, -1442, -1442, -1442, -1442,  1154,  1155,  1156,  1158,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  2369, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442,  3743, -1442, -1442,
    3743,  1159,  1162,  1163,  1165,  1167, -1442, -1442, -1442,  1166,
    5926, -1442,   252,  1173,    50,  1178, -1442, -1442, -1442,   585,
   -1442,   594,  4105,   601,  5602,  5629, -1442,  3743, -1442, -1442,
    1088,   -39,    66, -1442, -1442, -1442,  1169,  1187,  1169,  2140,
    1433,  1442,  1443,  1210,  1214,  1222,  1215,  1215,  1215,  3522,
   -1442, -1442, -1442, -1442, -1442,   473,     8,  1201, -1442,  2140,
    2140,  2140,  2140,  2140,  2140,  2140,  2140,  2140,  2140,  2140,
    2140,  2140,  2140,  2140,  2140,  1458,  3743,  2081, -1442,  1207,
     415,   680,    90,   363, -1442,  1233, -1442, -1442, -1442, -1442,
     994,    22,   -35,    34,  1217,  1218,  1219,  1220,  1221,  1230,
    1231,  1459,   -61,    47,   202,  1226,  1236,  1238,  1239,  1241,
    1242,  1249,  1275,  1278,  1229,  1273,  1283,  1297,  1299,  1309,
    1326,  1292,  1295,  1331, -1442, -1442, -1442, -1442, -1442,    68,
    4669,  4128,   126,  3639,  3639,  3639,  3639,   299,  1223,  1465,
   -1442, -1442,   473,    32,   126, -1442, -1442,   126,  3743, -1442,
   -1442, -1442,  4696,  1338,   164,   164,   164,   164,   132,   213,
     126,   126,  1307,  1473,  1482,   214, -1442, -1442,   175,  1522,
   -1442, -1442,  1310,  1548,  1550, -1442, -1442,  1317, -1442,  1339,
    3830,  1312,  1343,  1345, -1442, -1442,  1348, -1442, -1442,  1347,
   -1442,  2140,  1922,  2167,  3363,  3363,  3363,  1117,  1117,  1117,
    1117,   545,   545,  1215,  1215,  1215,  1215,  1215, -1442, -1442,
   -1442,  1356,  5978,   307,  3587, -1442,  1572,   141,  1579,   473,
   -1442, -1442,  1590,  1604,  1605,  1355,  1038,  1038,   164,   164,
   -1442, -1442,  1607,    18,    29, -1442, -1442,  1611,   473,  1612,
   -1442, -1442,  1613,  1614,  1615,    87,   473,  1617,  1621,  1623,
     164,  2314, -1442, -1442, -1442,  1606,  1754,  1305,   128,  1622,
     473,    48,   480,  2314,   480,    49,  1624, -1442, -1442, -1442,
     473,  1625,   126,   126,  1627,  1630,  1631,  1633,  1660,  1661,
    1662,  1663, -1442,  3743, -1442,  3743, -1442,  3743, -1442, -1442,
     164,   480,  1665,  1666,  1667,  1668,  1670,  1671,   473,   473,
    1672,  1674,  1675,  1677,  1678,   473,  1679,   473,  1378,  1435,
    1432,   473, -1442, -1442, -1442,  3743,  1436,   618,   631,   634,
     641,  1685,   473, -1442,   789, -1442,  1437, -1442,  4151, -1442,
    1444,  1689,  1692,  1693,  1694,   126,  1695,   126,  1696,  1698,
    1699,  1250,  1701,  1702,   126,  1709,  1710,  1712,  1207, -1442,
    1713,  1714, -1442,  1464, -1442,  2140,  1721, -1442,  1469,  1476,
    1480, -1442, -1442,  3470, -1442, -1442,  2140,  1490,   666,  1734,
    1736,  1737,   789,  1740,    19,  1494,  1751,  1757,  1758,  1762,
    1763,  1764, -1442, -1442,  1765, -1442, -1442,  1767,  1768,  1769,
    1770,  1774,  1775,  1776,  1777,  1778,  1779,  1783,   403, -1442,
    1789,  1797,  1799,  1801, -1442,  1804,  1805,  1806,  1564, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442,   164,  1808, -1442, -1442,
    1567, -1442,   164, -1442, -1442,  1568,  1816,  1817, -1442, -1442,
   -1442,  1818,  1819, -1442,  1822,   789,  1823,  1824,  1825, -1442,
    1826, -1442,  1829,  1573, -1442,  1589,  1591, -1442,  1565,  1583,
    1585,  1586,  1593,  1594,  1595,  4174,   546,  4197,   566,  4220,
     514,   605,  1596,  1608,  1598,  1599,  1602,  1603,  1609,  1628,
    1616,  1618,  1629,  1632,  1635,  1636,  1637,  1638,  1639,  1619,
      55,    55, -1442,  1855,  4723,  1642,  1644,  1626,  1645,  1647,
   -1442,  1857, -1442,   126,  3743,    32, -1442, -1442, -1442, -1442,
    1646, -1442,  1648, -1442, -1442, -1442,  1653, -1442, -1442,  1664,
   -1442, -1442, -1442,  1858,   608, -1442, -1442,   164,  5953,  1620,
   -1442,  3743, -1442,  1865,  1640, -1442,  5978,   164, -1442, -1442,
   -1442, -1442,  1862, -1442, -1442,  1881,  1760,  1882,  1653, -1442,
   -1442, -1442, -1442, -1442,   669, -1442,   675, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  1669,  1680,
   -1442, -1442, -1442, -1442,  1681,  1913,  1914,  1918,  1924,  1926,
   -1442, -1442,  1929, -1442,  1930,  1932,   560, -1442, -1442,   677,
   -1442, -1442, -1442, -1442, -1442,   699, -1442, -1442,  1934,  1686,
    1936,   126,  1939,  1940,  3743,  1941,   126,   164,  3743,  1691,
     126,  3743,  3743,   126, -1442, -1442,  3743,  1697,   126,  3743,
    3743,  3743,  3743, -1442, -1442,  3743,  3743,  3743,  1716,  3743,
     126, -1442, -1442,  3743,  3743,  1945,  1718,  1720,  3743,  3743,
    1722, -1442, -1442,   126,  1944,   126,  2314,  2314,  2314,  3743,
    2314,  1947,  1951,  1972,  1974,  3743,  1975,  1977,   164,  1978,
    1987, -1442, -1442, -1442, -1442,    14, -1442,  1729,  2314,  3639,
    1739,  3639,  3639, -1442,  1727,  4750, -1442,   126,   126,  1250,
     126, -1442, -1442, -1442,  1752, -1442, -1442,  1753,  4243,  1756,
   -1442,  2140,  1766, -1442, -1442,  2000, -1442,  2003, -1442,  2004,
   -1442,  2005, -1442,   473,  2006,  2007, -1442, -1442, -1442,  1772,
   -1442, -1442, -1442, -1442, -1442, -1442,  1169,  1169,  1169,   164,
   -1442, -1442, -1442,   473, -1442,   473, -1442, -1442, -1442,  1782,
    1673,  1761,  4266,  1784,  1792,  1786,  4289, -1442,  2009,   607,
     640,  2011,  4312, -1442,  2013,   815,   951,  1059,  1212,  4335,
    1560,  1728, -1442,  1759,  2014,  1798,  2892,  2021, -1442, -1442,
    3186,  3213, -1442,   332, -1442,  1788,  1803,  1807,  1791,  4358,
    1802, -1442, -1442,  1820,  1838,  5656,  1810,  1811,  1840,   712,
   -1442,   343,   367,  1800,  1809, -1442,  3743,  1841,   717,  3743,
     736,   738, -1442, -1442,  1843,  1831,  1836,  1846,  1837,   891,
   -1442,  1853,  3743, -1442,  5978,  1849,  2027,  1850, -1442, -1442,
    1680,  1895, -1442, -1442,  2048, -1442, -1442,  2067,  2068,  2073,
    2074, -1442, -1442,  2431,  2101,  2314,  3743,  2314,  2104,  2141,
    2142,   126,  2490, -1442, -1442, -1442, -1442,   126,  2551, -1442,
   -1442, -1442, -1442, -1442,   126, -1442, -1442,  2616, -1442, -1442,
   -1442, -1442, -1442,  2672,  2736, -1442, -1442,   747,  2150,  3743,
     126,  2151,  2160,  3743,   480,   480,  3743,  3743,  2161,  2195,
    2197,   480,  2214,  2087,  2216,  2254, -1442,  2218, -1442, -1442,
    4777,  2314,  1892,  4804,  1952,  2008,  2010,  2224,  2253,  2258,
    2259,  2256,  3743,  3743,  3743,  3743,  3743, -1442, -1442,  2012,
    4831, -1442,  2156,  2263,  2264, -1442, -1442,  2015,  2017, -1442,
   -1442, -1442, -1442,  2260, -1442,  2023,  5683,  2019,  2024, -1442,
    2032,  2051, -1442,  2052, -1442,   373, -1442, -1442, -1442, -1442,
   -1442, -1442,  4381,   390, -1442, -1442,  5710,  2060,  2061,  4404,
    4427, -1442, -1442, -1442,   748, -1442,   480, -1442,   480,  2314,
   -1442, -1442,  1967,  2295, -1442,  2055, -1442, -1442,  2059,  3639,
      32, -1442, -1442, -1442, -1442,  2265,  3230,  3253,  3276,  3299,
    3329,  3743, -1442,  2311, -1442, -1442, -1442,  1169,  2066,  2316,
    2317,  3743,  3743,  2318,   126,  3743,  2071,  3743,   843,   126,
    2321,   126,  2323,  2324,  2329,  3743,  3743,  2335,   126,   757,
   -1442, -1442,  2338,  2364,  2365, -1442, -1442,  2121, -1442, -1442,
    2314,  3743,   764,  2114, -1442, -1442, -1442, -1442, -1442, -1442,
    4858,  2119,  2126,  2136, -1442, -1442, -1442,  5737,  4450, -1442,
    2138,  4473, -1442,  5764,  2385,  2386,  3743,   126,  2387,   164,
   -1442, -1442,  2144, -1442,   430, -1442, -1442, -1442,  5791,  5818,
   -1442,  2145,  2396,  1948,  2405,  2406,  2408,   164, -1442,  2159,
    4496,  2170,  3743, -1442,  2417,  2421,  2422,  2798,  2423,  2314,
    2175,  3743,  2854,  2176,  2426,  2427,  3346,  2428,  2436,  2442,
    2444,  2445,   126,  2185,  2198,  2446, -1442,  2199, -1442, -1442,
   -1442,  2448, -1442, -1442,  3743,  2201,  5845, -1442, -1442, -1442,
   -1442, -1442,  2203, -1442,  5872, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442,  2208, -1442, -1442, -1442,  2455,
   -1442,  2238,  4885,  3743,  2483,  2429,  3743,  2918,  2236,  3036,
    2486,  3100,  3153, -1442,  2489, -1442,  4519, -1442,   164,  4542,
   -1442, -1442, -1442, -1442,  2491,  2493, -1442,  3743,  2494,  3743,
    3218, -1442, -1442,  4565, -1442,  5899, -1442,  3743,  2374,  2501,
    4912,  2492, -1442, -1442,   789,  2502,  2255, -1442
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442,  -289, -1442, -1442,  -274,  1455,
   -1442, -1442,  1456,  -482, -1442,  -556, -1442,  -417,  -537,  -570,
   -1442, -1442, -1442, -1442,   228, -1442,  -620, -1442,  -987, -1442,
    -661, -1442, -1442, -1442, -1442, -1442, -1442, -1442,  1715, -1442,
    1328, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
    1875, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442,   879, -1442, -1442, -1442,
   -1442, -1442, -1442,  1634, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1095,  -756, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1441, -1442, -1442, -1442,  1199,
    1028, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442,   834, -1442, -1442, -1442, -1442, -1442, -1442, -1442, -1442,
   -1442,  1957, -1442,  1859, -1442,  2411, -1442,  1965,  2332,  -315,
   -1442,   405,   -20,   -36, -1442, -1442,   113,  -579,  -540,  -174,
     -82, -1442,    -5,   -74,   -60
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -667
static const short yytable[] =
{
      30,   294,   170,   690,   657,   606,    82,   739,   337,   712,
     338,   885,  1275,     6,     6,   669,   560,   471,    72,  1623,
     655,   481,   538,  1232,   172,   679,  1384,     6,    87,   683,
    1018,   177,   178,   687,  1235,   337,   337,   338,   338,   432,
     529,  1203,  1019,   110,   337,   716,   338,  1209,  1210,    31,
     462,   463,   465,     6,     6,   991,   120,   545,   230,   472,
    1501,   925,   313,   926,     6,   351,    32,   601,   719,   720,
       7,     8,    31,   187,   295,   728,   406,   196,   202,   207,
     212,   216,   221,    73,    74,    75,   809,    76,    13,   407,
     188,   189,  1244,   195,   201,   206,   211,   604,   220,     6,
     408,   901,     3,   902,    30,     7,     8,    -3,    30,    30,
      30,    30,    30,    30,   222,   992,   648,   535,   227,   227,
     236,   179,   231,    13,   434,   400,  1663,   414,   180,    33,
    1027,  1624,  1029,   546,   435,   -65,  1672,   896,   897,   898,
     899,   415,  1678,  1160,    41,    31,   645,   307,  1022,   545,
     436,  1687,  1023,  1024,   437,   545,   239,  1693,  1694,   861,
      31,   174,   230,   306,  1161,   595,   485,     6,    83,   230,
     175,   356,    61,     7,     8,    73,    74,    75,   308,    76,
     230,    73,    74,    75,   288,    76,  1082,    62,  1083,  1133,
     289,    13,   377,     6,  1245,  1134,  1084,   167,   173,     7,
       8,    73,    74,    75,  1246,    76,   645,    73,    74,    75,
     231,    76,   402,   122,  1276,  1122,    31,    13,  1020,   809,
     809,   809,   809,   399,  1374,   546,   231,   343,  1030,   190,
     191,   546,    63,   231,   224,   225,   545,   545,  1277,  1196,
     238,   903,   713,   646,   231,   715,    64,   650,  1042,  1043,
    1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,
    1054,  1055,  1056,  1057,   340,    71,  1062,  1414,    31,   656,
     231,  1625,  1120,   539,  1233,   656,   267,   268,   269,   826,
     827,   828,   829,    65,  1123,  1236,    66,   489,   339,   339,
     530,   340,   340,   587,   490,   438,   445,  1135,   520,   121,
     340,   864,   416,  1136,  1283,  1289,   232,   904,   236,   464,
     809,   738,   546,   546,   483,   184,   185,   296,    31,   236,
     236,   236,    84,  1025,   170,  1162,   757,   758,   236,   717,
     809,   809,   809,   809,   809,   809,   809,   809,   809,   809,
     809,   809,   809,   809,   809,   809,   172,  1085,   809,   298,
     213,   214,   905,     6,   228,   750,   354,   355,   299,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,    67,
    1213,   578,  1185,  1527,  1278,  1279,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   862,    68,   397,    69,   541,   409,   431,   398,
     232,   410,   703,   380,   705,   706,   707,   232,   526,   830,
     553,   411,   559,  1907,   823,   824,    70,   380,   232,   180,
     563,  1912,   591,   460,   461,   567,    73,    74,    75,   490,
      76,   571,    85,   573,   192,   193,   596,   575,   480,  1087,
     835,   836,  1137,   490,   232,    86,  1227,  1228,  1138,  1088,
     197,  1089,   809,  1187,  1194,   418,     7,     8,    73,    74,
      75,   419,    76,    73,    74,    75,   647,    76,     6,   420,
     105,   -65,   343,   180,    13,    54,    55,   239,     6,    56,
      57,    31,   711,   519,     7,     8,    73,    74,    75,   490,
      76,   -68,  1967,   989,    88,  1969,   379,   380,   180,    89,
     490,  1175,    13,  1066,   528,  1971,  1972,   492,   380,   167,
     710,   537,   198,  1067,  1068,  1069,   170,   170,   847,   600,
     180,    90,  1466,   170,   473,   474,   475,   476,   725,     6,
    1990,   106,   987,   446,  1368,     7,     8,    73,    74,    75,
    1171,    76,   122,   477,    91,  1376,   440,   490,  1215,   447,
      92,  1253,   869,    13,  1655,  1216,  1656,   873,     6,   380,
     602,   704,   380,  1287,     7,     8,    73,    74,    75,     6,
      76,   448,   412,  1698,    93,     7,     8,    73,    74,    75,
    1699,    76,    13,   441,  1714,   598,   343,    94,   236,    95,
     442,  1715,  1467,    13,  1342,   285,   286,   287,   631,   632,
      96,   288,  1356,    97,  1674,   656,    98,   289,  1717,    31,
    1090,   634,    99,  1473,  1826,  1715,   809,   100,   635,   636,
     637,  1827,   449,   759,   639,   640,   101,   809,  1556,  1557,
     421,  1830,    34,   643,    35,   102,   833,  1675,  1831,   866,
     867,   804,  1382,   843,  1468,    31,    36,    37,    38,  1408,
     810,   825,   832,    31,   103,   837,    54,    55,   123,   842,
      56,    57,  1070,    39,  1469,  1470,  1558,    30,    82,   757,
     879,  1921,   761,   762,    30,   104,  1449,  1385,  1922,  1450,
    1559,   119,   585,  1474,   699,   700,   127,  1847,  1847,  1451,
    1452,  1453,   763,   764,   450,    58,  1457,   811,   812,  1458,
     343,   124,   199,   814,   815,  1431,   125,   443,   126,  1459,
    1460,   167,   167,  1461,  1462,   176,   726,   727,   167,   729,
    1181,  1182,  1183,  1184,   182,   734,   759,   737,  1475,   203,
     204,   816,   817,   223,  1197,  1476,  1477,   274,   275,   276,
     237,   277,   278,   279,   280,   818,   819,   281,   282,   283,
     284,   285,   286,   287,   297,  1478,   240,   288,  1479,  1480,
     290,  1471,   241,   289,   765,   242,  1072,   848,  1073,  1074,
    1075,  1076,  1077,  1078,  1079,   674,   920,   921,   922,   923,
     208,   209,   924,   810,   810,   810,   810,   852,   380,   907,
    1657,  1658,  1659,  1454,  1229,  1230,   853,   380,   243,  1167,
    1168,  1169,  1170,   291,    73,    74,    75,  1560,    76,   217,
     218,   244,  1680,  1463,   854,   380,  1252,   860,    40,  1862,
     840,   841,   855,   380,   274,   275,   276,   245,   277,   278,
     279,   280,   995,   380,   281,   282,   283,   284,   285,   286,
     287,   996,   997,   872,   288,   293,   874,   875,   999,   380,
     289,  1874,  1481,  1516,  1522,  1523,  1312,   274,   275,   276,
    1644,   277,   278,   279,   280,  1336,   380,   281,   282,   283,
     284,   285,   286,   287,   810,   246,    58,   288,  1337,   380,
    1218,  1338,   380,   289,   247,   723,   724,   248,  1339,   380,
    1038,  1039,   249,   821,   810,   810,   810,   810,   810,   810,
     810,   810,   810,   810,   810,   810,   810,   810,   810,   810,
    1119,   250,   810,  1378,   380,   423,  1538,   180,   300,  1875,
     851,  1876,  1540,   180,  1562,   180,  1121,  1080,   251,  1519,
    1637,   252,  1877,   424,   253,  1961,  1606,  1607,  1608,   865,
    1610,   254,   809,   425,   426,  1878,  1564,   180,  1681,   255,
     980,   256,   427,   981,   428,   257,   870,   301,  1627,  1712,
    1713,  1537,   258,  1879,  1722,   380,   259,  1539,   260,  1541,
    1731,  1732,  1733,  1734,  1735,  1736,   320,  1174,   343,   261,
    1002,   262,  1419,  1724,   380,  1725,   380,   352,  1422,   236,
     236,   236,   236,  1769,  1770,  1837,  1838,    73,    74,    75,
     263,    76,  1563,   236,  1892,  1893,    42,   264,  1565,   170,
      43,  1901,   380,   732,   733,   452,   265,   266,    73,    74,
      75,   170,    76,   314,   333,   345,   810,   335,  1286,  1059,
    1288,   353,   274,   275,   276,   346,   277,   278,   279,   280,
     401,   459,   281,   282,   283,   284,   285,   286,   287,   405,
     466,  1863,   288,   467,  1222,   482,  1682,  1313,   289,   453,
     468,   486,   469,   236,   236,    44,   470,   493,   488,   497,
    1109,    45,   518,  1239,   523,   494,   525,   531,   532,   536,
    1110,  1247,  1249,  1524,    46,   236,    47,   540,   542,   543,
    1880,   544,   549,  1532,   551,  1282,  1285,   550,    48,   552,
    1291,  1178,    49,   557,   429,  1293,   454,   561,   455,   558,
     554,   555,   556,   562,    50,  1755,   564,  1757,  1111,  1112,
    1113,  1114,  1115,  1116,   565,   236,   566,   568,   570,   572,
     456,   574,   576,  1320,  1321,    51,   577,   579,  1737,   584,
    1327,   586,  1329,   588,   589,   590,  1333,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,   592,  1341,  1013,   593,
     594,  1124,   603,  1575,  1014,  1790,   599,   607,   274,   275,
     276,  1795,   277,   278,   279,   280,   457,  1015,   281,   282,
     283,   284,   285,   286,   287,   630,   633,    52,   288,    53,
     810,   638,   641,   642,   289,    77,    78,    79,    80,   649,
    1166,   810,   652,   654,   167,   659,   661,   662,   663,  1683,
     666,   302,  1176,   675,  1618,  1177,   167,     7,     8,    73,
      74,    75,   668,    76,   670,   676,  1186,  1188,  1189,  1190,
     677,   678,   686,  1195,   680,    13,  1305,   684,  1307,  1841,
    1309,  1117,   688,   128,   129,     6,   283,   284,   285,   286,
     287,   236,   691,   692,   288,   694,   695,   236,   696,   697,
     289,   701,   702,   714,   708,   721,   722,   730,  1334,   303,
     137,   138,   139,   140,   141,  1660,   274,   275,   276,   735,
     277,   278,   279,   280,   738,   740,   281,   282,   283,   284,
     285,   286,   287,   741,   742,   751,   288,   752,   754,   753,
    1899,   582,   289,   755,  1092,   530,  1093,  1094,  1853,  1095,
     760,   766,   813,   845,  1904,   820,   822,   834,   839,  1096,
     844,   850,   856,   857,   858,  1628,   859,  1630,  1631,   868,
     343,   876,   877,   878,   884,  1016,  1097,  1098,  1099,   895,
    1295,  1296,   128,   129,   130,   886,   918,   919,   920,   921,
     922,   923,   236,  1100,   924,   888,   889,   900,   906,  1942,
     890,   891,   236,   132,   133,   134,   135,   892,   927,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   170,   170,   170,  -666,   170,   934,
     936,   937,   938,  1350,   939,  1352,  1101,   982,   983,   984,
     988,   985,  1359,   986,   990,   804,   170,  1259,  1260,  1261,
    1262,  1263,  1264,  1265,  2005,  1272,   994,  1028,  1031,   274,
     275,   276,   236,   277,   278,   279,   280,  1032,  1033,   281,
     282,   283,   284,   285,   286,   287,  1036,  1515,  1040,   288,
    1034,  1058,   924,  1064,  1035,   289,  1132,  1125,  1126,  1127,
    1128,  1129,  1173,   128,   129,   534,   131,  1172,  1192,    56,
    1130,  1131,  1139,  1102,  1528,  1148,  1140,  1193,  1141,  1142,
    1103,  1143,  1144,   236,   132,   133,   134,   135,   136,  1145,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,  1146,   810,  1198,  1147,  1149,
     274,   275,   276,  1150,   277,   278,   279,   280,  1651,   231,
     281,   282,   283,   284,   285,   286,   287,  1151,  1155,  1152,
     288,  1156,   583,  1200,   236,  1201,   289,  1572,  1661,  1153,
    1662,  1576,  1273,  1191,  1579,  1580,  1199,  1685,  1202,  1582,
    1206,  1514,  1585,  1586,  1587,  1588,  1154,  1219,  1589,  1590,
    1591,  1157,  1593,   170,   991,   170,  1595,  1596,  1180,   163,
    1204,  1600,  1601,  1207,   164,  1223,  1208,   165,  1211,   167,
     167,   167,  1609,   167,  1212,  1919,   350,  1214,  1615,  1224,
    1225,  1226,  1231,   128,   129,     6,  1238,  1240,  1241,  1242,
    1243,   167,  1248,  1931,  1250,  1852,  1251,  1281,  1330,  1292,
    1777,  1778,  1294,   170,  1297,  1298,  1299,  1784,  1300,   170,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,  1301,  1302,  1303,  1304,  1569,
    1314,  1315,  1316,  1317,  1574,  1318,  1319,  1322,  1578,  1323,
    1324,  1581,  1325,  1326,  1328,  1331,  1584,  1255,  1332,  1256,
    1257,  1258,  1340,  1335,   162,  1343,  1346,  1345,  1594,  1347,
    1348,  1349,  1351,  1353,  1988,  1354,  1355,   170,  1357,  1358,
     163,  1603,  1839,  1605,  1840,   164,  1360,  1361,   165,  1362,
    1365,  1366,  1367,   232,  1369,  1371,   166,  1372,  1259,  1260,
    1261,  1262,  1263,  1264,  1265,  1686,  1266,  1267,  1373,  1720,
    1377,  1379,  1723,  1380,  1381,  1635,  1636,  1383,  1638,   276,
    1386,   277,   278,   279,   280,  1740,  1388,   281,   282,   283,
     284,   285,   286,   287,  1389,  1390,  1688,   288,   170,  1391,
    1392,  1393,  1395,   289,  1397,  1398,  1399,  1400,   167,  1756,
     167,  1401,  1402,  1403,  1404,  1405,  1406,   274,   275,   276,
    1407,   277,   278,   279,   280,   343,  1410,   281,   282,   283,
     284,   285,   286,   287,  1411,  1690,  1412,   288,  1413,  1415,
    1416,  1417,  1772,   289,  1418,  1420,  1776,  1421,  1423,  1779,
    1780,  1424,  1425,  1441,  1438,  1427,  1428,   170,   167,  1430,
    1432,  1433,  1434,  1436,   167,  1255,  1437,  1256,  1257,  1258,
    1439,  1442,  1440,  1443,  1444,  1806,  1807,  1808,  1809,  1810,
     163,  1445,  1446,  1447,  1483,   164,  1485,  1486,   165,  1484,
    1487,  1488,  1506,  1268,  1513,  1521,   736,  1489,  1529,  1533,
    1500,  1526,  1535,  1491,   236,  1492,  1259,  1260,  1261,  1262,
    1263,  1264,  1265,  1510,  1266,  1267,  1490,  1493,  1534,  1536,
    1494,  1530,   236,  1495,  1496,  1497,  1498,  1499,  1508,  1761,
    1509,  1511,   167,  1512,  1517,  1763,  1518,   277,   278,   279,
     280,   180,  1765,   281,   282,   283,   284,   285,   286,   287,
    1546,  1547,  1520,   288,  1860,  1548,  1542,  1549,  1773,   289,
    1543,  1665,  1545,  1550,  1867,  1868,  1552,  1554,  1871,  1555,
    1873,  1566,  1567,  1568,  1570,  1571,  1573,  1577,  1888,  1889,
    1597,  1604,  1927,  1583,  1611,   274,   275,   276,  1612,   277,
     278,   279,   280,   167,  1900,   281,   282,   283,   284,   285,
     286,   287,  1592,   236,  1598,   288,  1599,  1613,  1602,  1614,
    1616,   289,  1617,  1619,  1632,  1626,   274,   275,   276,  1916,
     277,   278,   279,   280,  1620,  1629,   281,   282,   283,   284,
     285,   286,   287,  1640,  1641,  1646,   288,  1643,  1647,  1648,
    1649,  1271,   289,  1652,  1653,  1936,  1673,  1645,  1676,  1666,
    1679,  1689,   167,  1654,  1944,   274,   275,   276,  1692,   277,
     278,   279,   280,  1664,  1742,   281,   282,   283,   284,   285,
     286,   287,  1668,  1669,  1670,   288,  1700,  1962,  1842,  1703,
    1843,   289,  1870,  1844,  1701,  1746,  1718,  1882,  1702,  1884,
    1705,  1709,  1710,   279,   280,  1719,  1891,   281,   282,   283,
     284,   285,   286,   287,  1749,  1750,  1976,   288,  1706,  1979,
    1751,  1752,  1727,   289,   128,   129,   767,  1728,  1730,  1259,
    1260,  1261,  1262,  1263,  1264,  1265,  1707,  1845,  1711,  1721,
    1993,  1726,  1995,  1729,  1739,  1917,  1741,  1743,  1754,  1758,
    2000,   137,   138,   139,   140,   141,   768,   769,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   793,   794,   128,   129,   767,  1745,  1760,  1759,  1796,
    1955,   910,   911,   912,   913,   914,   915,  1771,  1774,   916,
     917,   918,   919,   920,   921,   922,   923,  1775,  1781,   924,
     137,   138,   139,   140,   141,   768,   769,   770,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,  1782,   795,  1783,   128,   129,   130,   131,  1798,
     796,    56,   323,   324,   325,   326,   327,   328,   329,   330,
     331,  1785,  1786,  1787,  1846,  1791,   132,   133,   134,   135,
     136,  1801,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   128,   129,   130,
    1802,  1805,   795,  1800,  1799,  1803,  1804,  1813,  1811,   796,
    1814,  1815,  1854,  1816,  1819,  1817,  1818,  1821,   132,   133,
     134,   135,  1822,  1823,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,  1824,
    1825,  1833,  1834,  1850,   797,  1851,  1861,   128,   129,   130,
     798,   799,  1864,  1865,  1866,  1869,   800,  1872,  1883,   801,
    1885,  1886,  1060,  1061,   802,   803,  1887,   804,   132,   133,
     134,   135,  1890,  1894,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,  1895,
    1896,  1898,  1902,   797,   941,   656,  1842,  1905,  1843,   798,
     799,  1844,    73,    74,   942,   800,    76,  1906,   801,  1910,
    1914,  1915,  1918,   802,   803,  1920,   804,   911,   912,   913,
     914,   915,  1925,  1926,   916,   917,   918,   919,   920,   921,
     922,   923,  1928,  1929,   924,  1930,  1933,  1259,  1260,  1261,
    1262,  1263,  1264,  1265,  1937,  1845,   162,  1935,  1938,  1939,
    1941,  1943,  1946,  1947,  1948,  1950,   941,   128,   129,     6,
     527,  1956,   163,  1951,    73,    74,   942,   164,    76,  1952,
     165,  1953,  1954,  1958,  1957,  1960,  1959,  1963,   166,  1970,
    1788,  1966,  1973,  1789,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,  1974,
    1977,  1978,  1981,  1983,   163,   941,  1986,  2004,  1991,   164,
    1992,  1994,   165,    73,    74,   942,  2001,    76,  2002,  2006,
     166,   943,  2007,   944,   945,   946,   947,   948,   949,   950,
     951,   952,  1220,   929,  1221,   953,  1363,   756,   954,  1744,
    1504,   955,  1622,   693,   956,   229,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,  1849,  1793,   163,   973,   941,   846,   709,   164,
     974,   336,   165,   975,    73,    74,   942,     0,    76,     0,
     166,  1106,     0,   943,     0,   944,   945,   946,   947,   948,
     949,   950,   951,   952,     0,     0,     0,   953,     0,     0,
     954,     0,     0,   955,     0,     0,   956,     0,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,     0,     0,     0,   973,     0,     0,
       0,   941,   974,     0,     0,   975,   976,     0,     0,    73,
      74,   942,   943,    76,   944,   945,   946,   947,   948,   949,
     950,   951,   952,     0,     0,     0,   953,     0,     0,   954,
       0,     0,   955,     0,     0,   956,     0,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,     0,   163,     0,   973,   941,     0,   164,
       0,   974,   165,     0,   975,    73,    74,   942,  1753,    76,
       0,     0,     0,   943,     0,   944,   945,   946,   947,   948,
     949,   950,   951,   952,     0,     0,     0,   953,     0,     0,
     954,     0,     0,   955,     0,     0,   956,     0,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,     0,     0,     0,   973,     0,     0,
       0,   941,   974,     0,     0,   975,     0,  1762,     0,    73,
      74,   942,     0,    76,     0,     0,     0,     0,   943,     0,
     944,   945,   946,   947,   948,   949,   950,   951,   952,     0,
       0,     0,   953,     0,     0,   954,     0,     0,   955,     0,
       0,   956,     0,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,     0,
       0,     0,   973,   941,     0,     0,     0,   974,  1764,     0,
     975,    73,    74,   942,   943,    76,   944,   945,   946,   947,
     948,   949,   950,   951,   952,     0,     0,     0,   953,     0,
       0,   954,     0,     0,   955,     0,     0,   956,     0,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,     0,     0,     0,   973,   941,
       0,     0,     0,   974,     0,     0,   975,    73,    74,   942,
       0,    76,     0,  1766,     0,     0,     0,     0,   943,     0,
     944,   945,   946,   947,   948,   949,   950,   951,   952,     0,
       0,     0,   953,     0,     0,   954,     0,     0,   955,  1691,
       0,   956,     0,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,     0,
       0,     0,   973,   941,     0,     0,     0,   974,     0,  1767,
     975,    73,    74,   942,     0,    76,     0,     0,     0,     0,
     943,     0,   944,   945,   946,   947,   948,   949,   950,   951,
     952,     0,     0,     0,   953,     0,     0,   954,     0,     0,
     955,     0,     0,   956,     0,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,     0,     0,     0,   973,     0,     0,     0,     0,   974,
       0,     0,   975,  1768,     0,     0,   943,     0,   944,   945,
     946,   947,   948,   949,   950,   951,   952,     0,     0,     0,
     953,     0,     0,   954,     0,     0,   955,     0,     0,   956,
       0,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     966,   967,   968,   969,   970,   971,   972,     0,     0,     0,
     973,   941,     0,     0,     0,   974,     0,     0,   975,    73,
      74,   942,     0,    76,     0,  1940,     0,     0,     0,     0,
     943,     0,   944,   945,   946,   947,   948,   949,   950,   951,
     952,     0,     0,     0,   953,     0,     0,   954,     0,     0,
     955,     0,     0,   956,     0,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,     0,     0,     0,   973,   941,     0,     0,     0,   974,
       0,  1945,   975,    73,    74,   942,     0,    76,     0,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,   274,   275,   276,   288,
     277,   278,   279,   280,     0,   289,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,   941,     0,
     498,     0,   289,     0,     0,     0,    73,    74,   942,     0,
      76,     0,     0,     0,     0,  1980,     0,     0,   943,     0,
     944,   945,   946,   947,   948,   949,   950,   951,   952,     0,
       0,     0,   953,  1695,     0,   954,     0,     0,   955,     0,
       0,   956,     0,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,     0,
    1696,     0,   973,   941,     0,     0,     0,   974,     0,     0,
     975,    73,    74,   942,     0,    76,     0,  1855,     0,     0,
       0,     0,   943,     0,   944,   945,   946,   947,   948,   949,
     950,   951,   952,     0,     0,     0,   953,     0,     0,   954,
    1856,     0,   955,     0,     0,   956,     0,   957,   958,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,  1857,     0,     0,   973,     0,     0,     0,
       0,   974,     0,  1982,   975,   943,     0,   944,   945,   946,
     947,   948,   949,   950,   951,   952,  1858,     0,     0,   953,
       0,     0,   954,     0,     0,   955,     0,     0,   956,     0,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,  1859,     0,     0,   973,
       0,     0,     0,     0,   974,     0,     0,   975,     0,     0,
       0,     0,     0,  1949,     0,     0,     0,  1984,     0,     0,
     943,     0,   944,   945,   946,   947,   948,   949,   950,   951,
     952,     0,     0,     0,   953,     0,     0,   954,     0,     0,
     955,     0,     0,   956,     0,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,     0,     0,     0,   973,     0,     0,     0,     0,   974,
    1985,     0,   975,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,     0,     0,   289,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,   274,   275,   276,
     288,   277,   278,   279,   280,     0,   289,   281,   282,   283,
     284,   285,   286,   287,     0,  1996,     0,   288,  1375,     0,
     274,   275,   276,   289,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,   274,   275,   276,   289,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,   274,   275,   276,   289,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
       0,     0,   289,     0,     0,     0,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,   274,   275,   276,   288,   277,   278,   279,
     280,     0,   289,   281,   282,   283,   284,   285,   286,   287,
     128,   129,   130,   288,     0,     0,   914,   915,     0,   289,
     916,   917,   918,   919,   920,   921,   922,   923,     0,     0,
     924,   132,   133,   134,   135,     0,     0,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   128,   129,   130,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1217,     0,     0,     0,
       0,     0,     0,   132,   133,   134,   135,     0,     0,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   128,   129,     6,   908,   909,   910,
     911,   912,   913,   914,   915,     0,     0,   916,   917,   918,
     919,   920,   921,   922,   923,     0,     0,   924,     0,     0,
       0,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   128,   129,     6,   908,
     909,   910,   911,   912,   913,   914,   915,     0,     0,   916,
     917,   918,   919,   920,   921,   922,   923,     0,     0,   924,
       0,  1037,     0,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   273,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   597,
     129,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,     0,     0,
       0,     0,   164,     0,     0,   165,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   321,     0,     0,   608,     0,     6,     0,     0,     0,
       0,     0,     7,     8,     0,     0,     0,     0,   521,   163,
       9,    10,    11,    12,   164,     0,     0,   165,     0,     0,
      13,     0,     0,     0,     0,   522,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   581,     0,     0,   479,     0,     0,     0,     0,
       0,     0,     0,    14,     0,   609,     0,     0,     0,    15,
       0,   163,     0,     0,     0,     0,   164,     0,     0,   165,
       0,     0,    16,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   610,     0,    18,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   611,     0,     0,     0,   164,     0,
       0,   165,     0,    21,     0,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   629,     0,     0,     0,     0,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,     0,    22,   163,    23,     0,     0,
       0,   164,     0,     0,   165,     0,     0,   908,   909,   910,
     911,   912,   913,   914,   915,     0,     0,   916,   917,   918,
     919,   920,   921,   922,   923,     0,     0,   924,     0,     0,
     274,   275,   276,     0,   277,   278,   279,   280,  1205,     0,
     281,   282,   283,   284,   285,   286,   287,   274,   275,   276,
     288,   277,   278,   279,   280,     0,   289,   281,   282,   283,
     284,   285,   286,   287,   274,   275,   276,   288,   277,   278,
     279,   280,     0,   289,   281,   282,   283,   284,   285,   286,
     287,   274,   275,   276,   288,   277,   278,   279,   280,     0,
     289,   281,   282,   283,   284,   285,   286,   287,   274,   275,
     276,   288,   277,   278,   279,   280,     0,   289,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,   274,   275,   276,   289,   277,   278,   279,   280,   495,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,   274,   275,   276,   289,   277,   278,
     279,   280,   496,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,   274,   275,   276,
     289,   277,   278,   279,   280,   508,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
     274,   275,   276,   289,   277,   278,   279,   280,   515,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,   274,   275,   276,   289,   277,   278,   279,
     280,   516,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,   274,   275,   276,   289,
     277,   278,   279,   280,   517,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,   274,
     275,   276,   289,   277,   278,   279,   280,   743,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,   274,   275,   276,   289,   277,   278,   279,   280,
     744,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,   274,   275,   276,   289,   277,
     278,   279,   280,   998,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,   274,   275,
     276,   289,   277,   278,   279,   280,  1165,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,   274,   275,   276,   289,   277,   278,   279,   280,  1344,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,   274,   275,   276,   289,   277,   278,
     279,   280,  1448,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,   274,   275,   276,
     289,   277,   278,   279,   280,  1456,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
     274,   275,   276,   289,   277,   278,   279,   280,  1465,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,   274,   275,   276,   289,   277,   278,   279,
     280,  1642,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,   274,   275,   276,   289,
     277,   278,   279,   280,  1667,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,   274,
     275,   276,   289,   277,   278,   279,   280,  1671,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,   274,   275,   276,   289,   277,   278,   279,   280,
    1677,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,   274,   275,   276,   289,   277,
     278,   279,   280,  1684,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,   274,   275,
     276,   289,   277,   278,   279,   280,  1704,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,   274,   275,   276,   289,   277,   278,   279,   280,  1829,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,   274,   275,   276,   289,   277,   278,
     279,   280,  1835,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,   274,   275,   276,
     289,   277,   278,   279,   280,  1836,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
     274,   275,   276,   289,   277,   278,   279,   280,  1909,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,   274,   275,   276,   289,   277,   278,   279,
     280,  1911,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,   274,   275,   276,   289,
     277,   278,   279,   280,  1934,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,   274,
     275,   276,   289,   277,   278,   279,   280,  1987,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,   274,   275,   276,   289,   277,   278,   279,   280,
    1989,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,   274,   275,   276,   289,   277,
     278,   279,   280,  1997,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,     0,
       0,   289,   274,   275,   276,   292,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,     0,     0,   289,   274,
     275,   276,   349,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,   274,   275,   276,   749,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
       0,     0,   289,   274,   275,   276,  1164,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,     0,     0,   289,
     274,   275,   276,  1179,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,     0,     0,   289,   274,   275,   276,
    1507,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,   274,   275,   276,  1633,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,   274,   275,   276,  1794,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,     0,     0,   289,   274,   275,
     276,  1797,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,   274,   275,   276,  1812,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,     0,
       0,   289,   274,   275,   276,  1903,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,     0,     0,   289,   274,
     275,   276,  1975,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,   274,   275,   276,  2003,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,   322,   274,
     275,   276,   289,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,   378,   274,   275,   276,   289,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   499,     0,   289,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   500,     0,   289,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
     501,     0,   289,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   502,     0,   289,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,   503,     0,   289,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   504,     0,   289,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   505,     0,
     289,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   506,     0,   289,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,   507,     0,   289,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   509,
       0,   289,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   510,     0,   289,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   511,     0,   289,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
     512,     0,   289,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   513,     0,   289,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,   514,     0,   289,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   524,     0,   289,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   651,     0,
     289,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   745,     0,   289,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,   746,     0,   289,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   747,
       0,   289,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   748,     0,   289,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,   849,   274,   275,   276,   289,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   883,     0,   289,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,  1000,     0,   289,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
    1001,     0,   289,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,  1708,     0,   289,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,  1820,     0,   289,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,  1832,     0,   289,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,  1908,     0,
     289,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,  1913,     0,   289,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,  1923,     0,   289,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,  1924,
       0,   289,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,  1964,     0,   289,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,  1968,     0,   289,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
    1999,     0,   289,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,     0,     0,   289,
     908,   909,   910,   911,   912,   913,   914,   915,     0,     0,
     916,   917,   918,   919,   920,   921,   922,   923,     0,     0,
     924,     0,     0,     0,  1525,   908,   909,   910,   911,   912,
     913,   914,   915,     0,     0,   916,   917,   918,   919,   920,
     921,   922,   923,     0,     0,   924
};

static const short yycheck[] =
{
       5,   175,    84,   573,   541,   487,    26,   627,     3,     7,
       5,   767,  1107,     5,     5,   552,   433,   332,    23,     5,
       7,   336,     5,     5,    84,   562,     7,     5,    33,   566,
      69,   105,   106,   570,     5,     3,     3,     5,     5,   313,
       3,  1028,    81,    63,     3,   601,     5,  1034,  1035,   260,
     324,   325,   326,     5,     5,     5,     5,    23,     5,   333,
       5,   253,   250,   255,     5,   239,   248,   484,   608,   609,
      11,    12,   260,   109,     7,   615,   226,   113,   114,   115,
     116,   117,   118,    13,    14,    15,   665,    17,    29,   239,
     256,   257,     5,   113,   114,   115,   116,    64,   118,     5,
     250,     3,     0,     5,   109,    11,    12,     0,   113,   114,
     115,   116,   117,   118,   119,    65,   533,   406,   123,   124,
     125,   251,    69,    29,    86,   299,  1567,    82,   258,   248,
     886,   117,   888,    99,    96,   250,  1577,   798,   799,   800,
     801,    96,  1583,    75,     7,   260,     5,   183,    82,    23,
     112,  1592,    86,    87,   116,    23,   256,  1598,  1599,   715,
     260,   249,     5,   183,    96,   480,   340,     5,   260,     5,
     258,   245,   250,    11,    12,    13,    14,    15,   183,    17,
       5,    13,    14,    15,   247,    17,    96,   256,    98,   250,
     253,    29,   266,     5,   107,   256,   106,    84,    85,    11,
      12,    13,    14,    15,   117,    17,     5,    13,    14,    15,
      69,    17,   256,   248,    86,   250,   260,    29,   257,   798,
     799,   800,   801,   297,  1211,    99,    69,   232,   889,   256,
     257,    99,   256,    69,   121,   122,    23,    23,   110,    64,
     127,   143,   240,   532,    69,   240,   256,   536,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   922,   923,   924,   259,   256,   927,  1254,   260,   256,
      69,   257,   250,   256,   256,   256,   163,   164,   165,   117,
     118,   119,   120,   256,   250,   256,   256,   251,   256,   256,
     253,   259,   259,   467,   258,   257,   316,   250,   380,   248,
     259,   718,   257,   256,   256,   256,   253,   209,   313,   256,
     889,   256,    99,    99,   256,   256,   257,   250,   260,   324,
     325,   326,   226,   257,   406,   257,   256,   257,   333,   603,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   406,   257,   927,   249,
     256,   257,   254,     5,     6,   644,   243,   244,   258,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   256,
    1041,   455,   250,  1370,   256,   257,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   717,   256,   249,   256,   411,    82,   251,   296,
     253,    86,   586,   258,   588,   589,   590,   253,   249,   257,
     425,    96,   251,  1864,   256,   257,   256,   258,   253,   258,
     435,  1872,   251,   320,   321,   440,    13,    14,    15,   258,
      17,   446,   256,   448,   256,   257,   251,   452,   335,    86,
     256,   257,   250,   258,   253,     6,  1076,  1077,   256,    96,
       5,    98,  1041,   250,   250,    82,    11,    12,    13,    14,
      15,    88,    17,    13,    14,    15,   251,    17,     5,    96,
     250,   250,   487,   258,    29,     5,     6,   256,     5,     9,
      10,   260,   251,   380,    11,    12,    13,    14,    15,   258,
      17,   251,  1943,   251,     7,  1946,   257,   258,   258,     7,
     258,   993,    29,    98,   401,  1956,  1957,   257,   258,   406,
     594,   408,    67,   108,   109,   110,   608,   609,     8,   257,
     258,     7,    18,   615,   239,   240,   241,   242,   612,     5,
    1981,   248,   857,    96,  1205,    11,    12,    13,    14,    15,
     251,    17,   248,   258,     7,  1216,    96,   258,   251,   112,
       7,  1101,   736,    29,  1551,   258,  1553,   741,     5,   258,
     259,   257,   258,  1113,    11,    12,    13,    14,    15,     5,
      17,   134,   257,   251,     7,    11,    12,    13,    14,    15,
     258,    17,    29,   133,   251,   482,   601,     7,   603,     7,
     140,   258,    88,    29,  1174,   241,   242,   243,   495,   496,
       7,   247,  1191,     7,     7,   256,     7,   253,   251,   260,
     257,   508,     7,    18,   251,   258,  1205,     7,   515,   516,
     517,   258,   185,   653,   521,   522,     7,  1216,    78,    79,
     257,   251,     5,   530,     7,     7,   682,     7,   258,   723,
     724,   256,  1222,   689,   140,   260,    19,    20,    21,   256,
     665,   681,   682,   260,     7,   685,     5,     6,   250,   689,
       9,    10,   257,    36,   160,   161,   116,   682,   698,   256,
     257,   251,   256,   257,   689,     7,   140,  1224,   258,   143,
     130,   188,   464,    88,   581,   582,   256,  1792,  1793,   153,
     154,   155,   256,   257,   257,   225,   140,   256,   257,   143,
     715,   250,   257,   256,   257,  1285,   250,   257,   250,   153,
     154,   608,   609,   157,   158,   249,   613,   614,   615,   616,
    1004,  1005,  1006,  1007,   257,   622,   756,   624,   133,   256,
     257,   256,   257,   130,  1018,   140,   141,   227,   228,   229,
       6,   231,   232,   233,   234,   256,   257,   237,   238,   239,
     240,   241,   242,   243,   258,   160,     7,   247,   163,   164,
       7,   257,   250,   253,   661,   250,    96,   257,    98,    99,
     100,   101,   102,   103,   104,   557,   241,   242,   243,   244,
     256,   257,   247,   798,   799,   800,   801,   257,   258,   804,
    1556,  1557,  1558,   257,  1078,  1079,   257,   258,   250,   983,
     984,   985,   986,     7,    13,    14,    15,   257,    17,   256,
     257,   250,     7,   257,   257,   258,  1100,   714,   191,  1816,
     256,   257,   257,   258,   227,   228,   229,   250,   231,   232,
     233,   234,   257,   258,   237,   238,   239,   240,   241,   242,
     243,   257,   258,   740,   247,     7,   743,   744,   257,   258,
     253,    18,   257,  1345,   256,   257,  1140,   227,   228,   229,
    1531,   231,   232,   233,   234,   257,   258,   237,   238,   239,
     240,   241,   242,   243,   889,   250,   225,   247,   257,   258,
    1064,   257,   258,   253,   250,   234,   235,   250,   257,   258,
     905,   906,   250,   675,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     940,   250,   927,   257,   258,    68,   257,   258,     7,    86,
     702,    88,   257,   258,   257,   258,   941,   257,   250,  1356,
    1519,   250,    99,    86,   250,  1932,  1486,  1487,  1488,   721,
    1490,   250,  1531,    96,    97,   112,   257,   258,     7,   250,
     847,   250,   105,   850,   107,   250,   738,     5,  1508,   257,
     258,  1388,   250,   130,   257,   258,   250,  1394,   250,  1396,
      89,    90,    91,    92,    93,    94,   256,   992,   993,   250,
     877,   250,  1266,   257,   258,   257,   258,     5,  1272,  1004,
    1005,  1006,  1007,   256,   257,   257,   258,    13,    14,    15,
     250,    17,  1429,  1018,   257,   258,     3,   250,  1435,  1101,
       7,   257,   258,   618,   619,    96,   250,   250,    13,    14,
      15,  1113,    17,   250,   250,   250,  1041,   258,  1112,   926,
    1114,     5,   227,   228,   229,   256,   231,   232,   233,   234,
     226,   256,   237,   238,   239,   240,   241,   242,   243,   250,
     256,  1817,   247,   256,  1069,     8,     7,  1141,   253,   140,
     256,   258,   256,  1078,  1079,    62,   256,   251,   257,   251,
      86,    68,   251,  1088,     7,   258,   251,   226,   226,   226,
      96,  1096,  1097,  1367,    81,  1100,    83,     5,   256,     5,
     257,   256,     5,  1377,     5,  1110,  1111,   256,    95,     5,
    1115,   998,    99,   226,   257,  1120,   187,     5,   189,   251,
     256,   256,   256,     5,   111,  1665,   256,  1667,   134,   135,
     136,   137,   138,   139,   256,  1140,     5,   256,     5,   256,
     211,     5,   256,  1148,  1149,   132,     5,     5,   257,   205,
    1155,   256,  1157,   256,   256,   256,  1161,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   251,  1172,    80,     5,
     250,   943,   130,  1447,    86,  1715,   257,     7,   227,   228,
     229,  1721,   231,   232,   233,   234,   257,    99,   237,   238,
     239,   240,   241,   242,   243,     5,     7,   184,   247,   186,
    1205,     7,     7,   257,   253,   190,   191,   192,   193,     7,
     982,  1216,   256,     7,  1101,     7,   250,   250,     7,     7,
       7,     5,   994,   226,  1498,   997,  1113,    11,    12,    13,
      14,    15,     7,    17,     7,     7,  1008,  1009,  1010,  1011,
       5,     7,   256,  1015,     7,    29,  1133,     7,  1135,  1789,
    1137,   257,     7,     3,     4,     5,   239,   240,   241,   242,
     243,  1266,     7,     7,   247,     7,     7,  1272,     7,   257,
     253,     5,   258,     8,     7,   256,     5,     5,  1165,    63,
      30,    31,    32,    33,    34,  1559,   227,   228,   229,     5,
     231,   232,   233,   234,   256,   256,   237,   238,   239,   240,
     241,   242,   243,   256,   251,     7,   247,     7,     7,     5,
    1850,     8,   253,   226,    81,   253,    83,    84,  1800,    86,
       7,     5,     7,   257,  1861,     7,     7,     7,     7,    96,
       7,   256,   258,   251,     7,  1509,   234,  1511,  1512,     6,
    1345,     7,   256,    66,   251,   257,   113,   114,   115,     5,
    1122,  1123,     3,     4,     5,   250,   239,   240,   241,   242,
     243,   244,  1367,   130,   247,   250,   250,     3,     5,  1909,
     250,   250,  1377,    24,    25,    26,    27,   250,   250,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,  1486,  1487,  1488,   250,  1490,     7,
     256,   256,   256,  1185,   256,  1187,   183,   258,   256,   256,
     254,   256,  1194,   256,   251,   256,  1508,   122,   123,   124,
     125,   126,   127,   128,  2004,   130,   258,   250,     5,   227,
     228,   229,  1447,   231,   232,   233,   234,     5,     5,   237,
     238,   239,   240,   241,   242,   243,   234,  1344,   257,   247,
     250,     3,   247,   256,   250,   253,     7,   250,   250,   250,
     250,   250,     7,     3,     4,     5,     6,   254,     5,     9,
     250,   250,   256,   250,  1371,   256,   250,     5,   250,   250,
     257,   250,   250,  1498,    24,    25,    26,    27,    28,   250,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   250,  1531,     5,   250,   256,
     227,   228,   229,   250,   231,   232,   233,   234,  1543,    69,
     237,   238,   239,   240,   241,   242,   243,   250,   256,   250,
     247,   256,   249,     5,  1559,     5,   253,  1444,  1563,   250,
    1565,  1448,   257,   256,  1451,  1452,   256,     7,   251,  1456,
     258,  1343,  1459,  1460,  1461,  1462,   250,     5,  1465,  1466,
    1467,   250,  1469,  1665,     5,  1667,  1473,  1474,   250,   240,
     251,  1478,  1479,   250,   245,     5,   251,   248,   250,  1486,
    1487,  1488,  1489,  1490,   257,  1879,   257,   251,  1495,     5,
       5,   256,     5,     3,     4,     5,     5,     5,     5,     5,
       5,  1508,     5,  1897,     3,  1799,     3,     5,   250,     5,
    1704,  1705,     7,  1715,     7,     5,     5,  1711,     5,  1721,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     5,     5,     5,     5,  1441,
       5,     5,     5,     5,  1446,     5,     5,     5,  1450,     5,
       5,  1453,     5,     5,     5,   250,  1458,    81,   256,    83,
      84,    85,     7,   257,   224,   258,     7,   253,  1470,     7,
       7,     7,     7,     7,  1978,     7,     7,  1789,     7,     7,
     240,  1483,  1786,  1485,  1788,   245,     7,     7,   248,     7,
       7,     7,   258,   253,     3,   256,   256,   251,   122,   123,
     124,   125,   126,   127,   128,     7,   130,   131,   258,  1626,
     250,     7,  1629,     7,     7,  1517,  1518,     7,  1520,   229,
     256,   231,   232,   233,   234,  1642,     5,   237,   238,   239,
     240,   241,   242,   243,     7,     7,     7,   247,  1850,     7,
       7,     7,     7,   253,     7,     7,     7,     7,  1665,  1666,
    1667,     7,     7,     7,     7,     7,     7,   227,   228,   229,
       7,   231,   232,   233,   234,  1800,     7,   237,   238,   239,
     240,   241,   242,   243,     7,     7,     7,   247,     7,     5,
       5,     5,  1699,   253,   250,     7,  1703,   250,   250,  1706,
    1707,     5,     5,   258,   251,     7,     7,  1909,  1715,     7,
       7,     7,     7,     7,  1721,    81,     7,    83,    84,    85,
     251,   258,   251,   258,   258,  1732,  1733,  1734,  1735,  1736,
     240,   258,   258,   258,   258,   245,   258,   258,   248,   251,
     258,   258,     7,   257,     7,     7,   256,   258,     3,     7,
     251,   251,   112,   257,  1879,   257,   122,   123,   124,   125,
     126,   127,   128,   257,   130,   131,   258,   258,     7,     7,
     258,   251,  1897,   258,   258,   258,   258,   258,   256,  1671,
     256,   256,  1789,   256,   258,  1677,   258,   231,   232,   233,
     234,   258,  1684,   237,   238,   239,   240,   241,   242,   243,
       7,     7,   258,   247,  1811,     7,   257,     3,  1700,   253,
     250,   258,   251,     7,  1821,  1822,     7,     7,  1825,     7,
    1827,     7,   256,     7,     5,     5,     5,   256,  1835,  1836,
       5,     7,     4,   256,     7,   227,   228,   229,     7,   231,
     232,   233,   234,  1850,  1851,   237,   238,   239,   240,   241,
     242,   243,   256,  1978,   256,   247,   256,     5,   256,     5,
       5,   253,     5,     5,   257,   256,   227,   228,   229,  1876,
     231,   232,   233,   234,     7,   256,   237,   238,   239,   240,
     241,   242,   243,   251,   251,     5,   247,   251,     5,     5,
       5,   257,   253,     7,     7,  1902,     7,   251,     7,   258,
       7,     7,  1909,   251,  1911,   227,   228,   229,     7,   231,
     232,   233,   234,   251,     7,   237,   238,   239,   240,   241,
     242,   243,   258,   251,   258,   247,   258,  1934,    81,   258,
      83,   253,  1824,    86,   251,     7,   256,  1829,   251,  1831,
     258,   251,   251,   233,   234,   256,  1838,   237,   238,   239,
     240,   241,   242,   243,     7,     7,  1963,   247,   258,  1966,
       7,     7,   251,   253,     3,     4,     5,   251,   251,   122,
     123,   124,   125,   126,   127,   128,   258,   130,   258,   258,
    1987,   258,  1989,   257,   251,  1877,   257,   257,     7,     5,
    1997,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,     3,     4,     5,   251,     5,     7,   257,
    1922,   229,   230,   231,   232,   233,   234,     7,     7,   237,
     238,   239,   240,   241,   242,   243,   244,     7,     7,   247,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     7,   122,     7,     3,     4,     5,     6,   257,
     129,     9,   196,   197,   198,   199,   200,   201,   202,   203,
     204,     7,   135,     7,   257,     7,    24,    25,    26,    27,
      28,     7,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     3,     4,     5,
       7,     5,   122,   253,   256,     7,     7,   111,   256,   129,
       7,     7,     7,   258,   251,   258,    16,   258,    24,    25,
      26,    27,   258,   251,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   258,
     258,   251,   251,   258,   233,   256,     5,     3,     4,     5,
     239,   240,   256,     7,     7,     7,   245,   256,     7,   248,
       7,     7,   251,   252,   253,   254,     7,   256,    24,    25,
      26,    27,     7,     5,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     5,
       5,   250,   258,   233,     5,   256,    81,   251,    83,   239,
     240,    86,    13,    14,    15,   245,    17,   251,   248,   251,
       5,     5,     5,   253,   254,   251,   256,   230,   231,   232,
     233,   234,   257,     7,   237,   238,   239,   240,   241,   242,
     243,   244,     7,     7,   247,     7,   257,   122,   123,   124,
     125,   126,   127,   128,     7,   130,   224,   257,     7,     7,
       7,   256,   256,     7,     7,     7,     5,     3,     4,     5,
       6,   256,   240,     7,    13,    14,    15,   245,    17,     7,
     248,     7,     7,     7,   256,     7,   257,   256,   256,   251,
     206,   258,     7,   209,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   251,
       7,    62,   256,     7,   240,     5,     7,     5,     7,   245,
       7,     7,   248,    13,    14,    15,   132,    17,     7,     7,
     256,   142,   257,   144,   145,   146,   147,   148,   149,   150,
     151,   152,  1067,   808,  1068,   156,  1198,   652,   159,  1650,
    1331,   162,  1504,   576,   165,   124,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   257,  1719,   240,   186,     5,   698,   593,   245,
     191,   229,   248,   194,    13,    14,    15,    -1,    17,    -1,
     256,   937,    -1,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,    -1,    -1,   156,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,    -1,    -1,   186,    -1,    -1,
      -1,     5,   191,    -1,    -1,   194,   257,    -1,    -1,    13,
      14,    15,   142,    17,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,    -1,    -1,   156,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    -1,   240,    -1,   186,     5,    -1,   245,
      -1,   191,   248,    -1,   194,    13,    14,    15,   257,    17,
      -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,    -1,    -1,    -1,   156,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,    -1,    -1,    -1,   186,    -1,    -1,
      -1,     5,   191,    -1,    -1,   194,    -1,   257,    -1,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
      -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
      -1,    -1,   186,     5,    -1,    -1,    -1,   191,   257,    -1,
     194,    13,    14,    15,   142,    17,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    -1,    -1,   156,    -1,
      -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,    -1,    -1,   186,     5,
      -1,    -1,    -1,   191,    -1,    -1,   194,    13,    14,    15,
      -1,    17,    -1,   257,    -1,    -1,    -1,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
      -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,     7,
      -1,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
      -1,    -1,   186,     5,    -1,    -1,    -1,   191,    -1,   257,
     194,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,   191,
      -1,    -1,   194,   257,    -1,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,    -1,    -1,
     156,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,    -1,    -1,
     186,     5,    -1,    -1,    -1,   191,    -1,    -1,   194,    13,
      14,    15,    -1,    17,    -1,   257,    -1,    -1,    -1,    -1,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,    -1,    -1,   186,     5,    -1,    -1,    -1,   191,
      -1,   257,   194,    13,    14,    15,    -1,    17,    -1,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,   227,   228,   229,   247,
     231,   232,   233,   234,    -1,   253,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,     5,    -1,
     251,    -1,   253,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,   257,    -1,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
      -1,    -1,   156,     7,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,    -1,
       7,    -1,   186,     5,    -1,    -1,    -1,   191,    -1,    -1,
     194,    13,    14,    15,    -1,    17,    -1,     7,    -1,    -1,
      -1,    -1,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,    -1,    -1,   156,    -1,    -1,   159,
       7,    -1,   162,    -1,    -1,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,     7,    -1,    -1,   186,    -1,    -1,    -1,
      -1,   191,    -1,   257,   194,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,     7,    -1,    -1,   156,
      -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,     7,    -1,    -1,   186,
      -1,    -1,    -1,    -1,   191,    -1,    -1,   194,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    -1,   257,    -1,    -1,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,   191,
     257,    -1,   194,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
     227,   228,   229,    -1,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,   242,   243,   227,   228,   229,
     247,   231,   232,   233,   234,    -1,   253,   237,   238,   239,
     240,   241,   242,   243,    -1,   257,    -1,   247,     8,    -1,
     227,   228,   229,   253,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,   227,   228,   229,   253,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,   227,   228,   229,   253,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   242,   243,   227,   228,   229,   247,   231,   232,   233,
     234,    -1,   253,   237,   238,   239,   240,   241,   242,   243,
       3,     4,     5,   247,    -1,    -1,   233,   234,    -1,   253,
     237,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
     247,    24,    25,    26,    27,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     3,     4,     5,   227,   228,   229,
     230,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,   247,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     3,     4,     5,   227,
     228,   229,   230,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,   247,
      -1,   249,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,
      -1,    -1,   245,    -1,    -1,   248,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     8,    -1,    -1,    75,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    -1,     8,   240,
      19,    20,    21,    22,   245,    -1,    -1,   248,    -1,    -1,
      29,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     8,    -1,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,   136,    -1,    -1,    -1,    68,
      -1,   240,    -1,    -1,    -1,    -1,   245,    -1,    -1,   248,
      -1,    -1,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    95,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   195,    -1,    -1,    -1,   245,    -1,
      -1,   248,    -1,   132,    -1,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   227,   228,   229,
      -1,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,   184,   240,   186,    -1,    -1,
      -1,   245,    -1,    -1,   248,    -1,    -1,   227,   228,   229,
     230,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,   247,    -1,    -1,
     227,   228,   229,    -1,   231,   232,   233,   234,   258,    -1,
     237,   238,   239,   240,   241,   242,   243,   227,   228,   229,
     247,   231,   232,   233,   234,    -1,   253,   237,   238,   239,
     240,   241,   242,   243,   227,   228,   229,   247,   231,   232,
     233,   234,    -1,   253,   237,   238,   239,   240,   241,   242,
     243,   227,   228,   229,   247,   231,   232,   233,   234,    -1,
     253,   237,   238,   239,   240,   241,   242,   243,   227,   228,
     229,   247,   231,   232,   233,   234,    -1,   253,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,   227,   228,   229,   253,   231,   232,   233,   234,   258,
      -1,   237,   238,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,   227,   228,   229,   253,   231,   232,
     233,   234,   258,    -1,   237,   238,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,   227,   228,   229,
     253,   231,   232,   233,   234,   258,    -1,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
     227,   228,   229,   253,   231,   232,   233,   234,   258,    -1,
     237,   238,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,   227,   228,   229,   253,   231,   232,   233,
     234,   258,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,   227,   228,   229,   253,
     231,   232,   233,   234,   258,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,   227,
     228,   229,   253,   231,   232,   233,   234,   258,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,   227,   228,   229,   253,   231,   232,   233,   234,
     258,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,   227,   228,   229,   253,   231,
     232,   233,   234,   258,    -1,   237,   238,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,   227,   228,
     229,   253,   231,   232,   233,   234,   258,    -1,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,   227,   228,   229,   253,   231,   232,   233,   234,   258,
      -1,   237,   238,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,   227,   228,   229,   253,   231,   232,
     233,   234,   258,    -1,   237,   238,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,   227,   228,   229,
     253,   231,   232,   233,   234,   258,    -1,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
     227,   228,   229,   253,   231,   232,   233,   234,   258,    -1,
     237,   238,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,   227,   228,   229,   253,   231,   232,   233,
     234,   258,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,   227,   228,   229,   253,
     231,   232,   233,   234,   258,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,   227,
     228,   229,   253,   231,   232,   233,   234,   258,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,   227,   228,   229,   253,   231,   232,   233,   234,
     258,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,   227,   228,   229,   253,   231,
     232,   233,   234,   258,    -1,   237,   238,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,   227,   228,
     229,   253,   231,   232,   233,   234,   258,    -1,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,   227,   228,   229,   253,   231,   232,   233,   234,   258,
      -1,   237,   238,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,   227,   228,   229,   253,   231,   232,
     233,   234,   258,    -1,   237,   238,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,   227,   228,   229,
     253,   231,   232,   233,   234,   258,    -1,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
     227,   228,   229,   253,   231,   232,   233,   234,   258,    -1,
     237,   238,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,   227,   228,   229,   253,   231,   232,   233,
     234,   258,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,   227,   228,   229,   253,
     231,   232,   233,   234,   258,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,   227,
     228,   229,   253,   231,   232,   233,   234,   258,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,   227,   228,   229,   253,   231,   232,   233,   234,
     258,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,   227,   228,   229,   253,   231,
     232,   233,   234,   258,    -1,   237,   238,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,   253,   227,   228,   229,   257,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,   227,
     228,   229,   257,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,   227,   228,   229,   257,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,   227,   228,   229,   257,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
     227,   228,   229,   257,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   253,   227,   228,   229,
     257,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,   227,   228,   229,   257,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,   227,   228,   229,   257,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,   253,   227,   228,
     229,   257,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,   227,   228,   229,   257,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,   253,   227,   228,   229,   257,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,   227,
     228,   229,   257,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,   227,   228,   229,   257,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,   249,   227,
     228,   229,   253,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,   249,   227,   228,   229,   253,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     251,    -1,   253,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,
     227,   228,   229,    -1,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,
      -1,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   251,    -1,   253,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,
     253,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,   251,    -1,   253,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,
      -1,   253,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     251,    -1,   253,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,
     227,   228,   229,    -1,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,
      -1,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   251,    -1,   253,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,
     253,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,   251,    -1,   253,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,
      -1,   253,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,   249,   227,   228,   229,   253,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     251,    -1,   253,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,
     227,   228,   229,    -1,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,   242,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,
      -1,   231,   232,   233,   234,    -1,    -1,   237,   238,   239,
     240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,   251,    -1,   253,   227,   228,   229,    -1,   231,   232,
     233,   234,    -1,    -1,   237,   238,   239,   240,   241,   242,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,
     253,   227,   228,   229,    -1,   231,   232,   233,   234,    -1,
      -1,   237,   238,   239,   240,   241,   242,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,   228,
     229,    -1,   231,   232,   233,   234,    -1,    -1,   237,   238,
     239,   240,   241,   242,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,   251,    -1,   253,   227,   228,   229,    -1,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
     242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,
      -1,   253,   227,   228,   229,    -1,   231,   232,   233,   234,
      -1,    -1,   237,   238,   239,   240,   241,   242,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,   251,    -1,   253,   227,
     228,   229,    -1,   231,   232,   233,   234,    -1,    -1,   237,
     238,   239,   240,   241,   242,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,   251,    -1,   253,   227,   228,   229,    -1,
     231,   232,   233,   234,    -1,    -1,   237,   238,   239,   240,
     241,   242,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     251,    -1,   253,   227,   228,   229,    -1,   231,   232,   233,
     234,    -1,    -1,   237,   238,   239,   240,   241,   242,   243,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
     227,   228,   229,   230,   231,   232,   233,   234,    -1,    -1,
     237,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
     247,    -1,    -1,    -1,   251,   227,   228,   229,   230,   231,
     232,   233,   234,    -1,    -1,   237,   238,   239,   240,   241,
     242,   243,   244,    -1,    -1,   247
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   262,   263,     0,   264,   265,     5,    11,    12,    19,
      20,    21,    22,    29,    62,    68,    81,    83,    95,    99,
     111,   132,   184,   186,   266,   267,   268,   430,   444,   452,
     453,   260,   248,   248,     5,     7,    19,    20,    21,    36,
     191,     7,     3,     7,    62,    68,    81,    83,    95,    99,
     111,   132,   184,   186,     5,     6,     9,    10,   225,   454,
     455,   250,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   453,    13,    14,    15,    17,   190,   191,   192,
     193,   434,   443,   260,   226,   256,     6,   453,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,   250,   248,   445,   269,   327,
     443,   312,   318,   334,   292,   357,   384,   414,   426,   188,
       5,   248,   248,   250,   250,   250,   250,   256,     3,     4,
       5,     6,    24,    25,    26,    27,    28,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   224,   240,   245,   248,   256,   447,   448,   449,
     451,   453,   455,   447,   249,   258,   249,   454,   454,   251,
     258,   288,   257,   270,   256,   257,   328,   444,   256,   257,
     256,   257,   256,   257,   335,   443,   444,     5,    67,   257,
     293,   443,   444,   256,   257,   358,   443,   444,   256,   257,
     385,   443,   444,   256,   257,   415,   444,   256,   257,   427,
     443,   444,   453,   130,   447,   447,   436,   453,     6,   436,
       5,    69,   253,   276,   279,   280,   453,     6,   447,   256,
       7,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   447,   447,   447,
     447,   450,   451,     8,   227,   228,   229,   231,   232,   233,
     234,   237,   238,   239,   240,   241,   242,   243,   247,   253,
       7,     7,   257,     7,   450,     7,   250,   258,   249,   258,
       7,     5,     5,    63,   271,   273,   443,   444,   453,   329,
     313,   319,   336,   250,   250,   359,   386,   416,   428,   431,
     256,     8,   249,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   439,   250,   438,   258,   439,     3,     5,   256,
     259,   284,   286,   453,   435,   250,   256,   290,   440,   257,
     257,   450,     5,     5,   447,   447,   454,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   454,   249,   257,
     258,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   249,   447,   454,
     450,   226,   256,   289,   291,   250,   226,   239,   250,    82,
      86,    96,   257,   330,    82,    96,   257,   314,    82,    88,
      96,   257,   320,    68,    86,    96,    97,   105,   107,   257,
     337,   251,   279,   294,    86,    96,   112,   116,   257,   360,
      96,   133,   140,   257,   387,   443,    96,   112,   134,   185,
     257,   417,    96,   140,   187,   189,   211,   257,   429,   256,
     447,   447,   279,   279,   256,   279,   256,   256,   256,   256,
     256,   440,   279,   239,   240,   241,   242,   258,   437,   224,
     447,   440,     8,   256,   285,   450,   258,   277,   257,   251,
     258,   441,   257,   251,   258,   258,   258,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   258,   251,
     251,   251,   251,   251,   251,   258,   258,   258,   251,   447,
     451,     8,     8,     7,   251,   251,   249,     6,   447,     3,
     253,   226,   226,   287,     5,   276,   226,   447,     5,   256,
       5,   453,   256,     5,   256,    23,    99,   295,   296,     5,
     256,     5,     5,   453,   256,   256,   256,   226,   251,   251,
     288,     5,     5,   453,   256,   256,     5,   453,   256,   388,
       5,   453,   256,   453,     5,   453,   256,     5,   454,     5,
     432,     8,     8,   249,   205,   295,   256,   450,   256,   256,
     256,   251,   251,     5,   250,   440,   251,     3,   447,   257,
     257,   288,   259,   130,    64,   281,   284,     7,    75,   136,
     165,   195,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
       5,   447,   447,     7,   447,   447,   447,   447,     7,   447,
     447,     7,   257,   447,   272,     5,   276,   251,   288,     7,
     276,   251,   256,   331,     7,     7,   256,   289,   315,     7,
     321,   250,   250,     7,   299,   300,     7,   354,     7,   289,
       7,   338,   344,   351,   295,   226,     7,     5,     7,   289,
       7,   361,   368,   289,     7,   389,   256,   289,     7,   418,
     290,     7,     7,   432,     7,     7,     7,   257,   433,   447,
     447,     5,   258,   450,   257,   450,   450,   450,     7,   438,
     454,   251,     7,   240,     8,   240,   286,   279,   278,   449,
     449,   256,     5,   234,   235,   454,   447,   447,   449,   447,
       5,   442,   442,   442,   447,     5,   256,   447,   256,   297,
     256,   256,   251,   258,   258,   251,   251,   251,   251,   257,
     276,     7,     7,     5,     7,   226,   331,   256,   257,   443,
       7,   256,   257,   256,   257,   447,     5,     5,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   122,   129,   233,   239,   240,
     245,   248,   253,   254,   256,   301,   304,   383,   446,   448,
     453,   256,   257,     7,   256,   257,   256,   257,   256,   257,
       7,   295,     7,   256,   257,   443,   117,   118,   119,   120,
     257,   369,   443,   444,     7,   256,   257,   443,   396,     7,
     256,   257,   443,   444,     7,   257,   434,     8,   257,   249,
     256,   295,   257,   257,   257,   257,   258,   251,     7,   234,
     447,   286,   440,   282,   288,   295,   454,   454,     6,   450,
     295,   298,   447,   450,   447,   447,     7,   256,    66,   257,
     332,   316,   322,   251,   251,   383,   250,   308,   250,   250,
     250,   250,   250,   305,   306,     5,   301,   301,   301,   301,
       3,     3,     5,   143,   209,   254,     5,   453,   227,   228,
     229,   230,   231,   232,   233,   234,   237,   238,   239,   240,
     241,   242,   243,   244,   247,   253,   255,   250,   309,   309,
     355,   339,   345,   352,     7,   362,   256,   256,   256,   256,
     390,     5,    15,   142,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   156,   159,   162,   165,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   186,   191,   194,   257,   397,   443,   419,
     447,   447,   258,   256,   256,   256,   256,   440,   254,   251,
     251,     5,    65,   283,   258,   257,   257,   258,   258,   257,
     251,   251,   447,   274,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    80,    86,    99,   257,   333,    69,    81,
     257,   317,    82,    86,    87,   257,   323,   383,   250,   383,
     301,     5,     5,     5,   250,   250,   234,   249,   453,   453,
     257,   302,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,     3,   447,
     251,   252,   301,   310,   256,   311,    98,   108,   109,   110,
     257,   356,    96,    98,    99,   100,   101,   102,   103,   104,
     257,   340,    96,    98,   106,   257,   346,    86,    96,    98,
     257,   353,    81,    83,    84,    86,    96,   113,   114,   115,
     130,   183,   250,   257,   363,   374,   374,   378,   370,    86,
      96,   134,   135,   136,   137,   138,   139,   257,   391,   443,
     250,   453,   250,   250,   295,   250,   250,   250,   250,   250,
     250,   250,     7,   250,   256,   250,   256,   250,   256,   256,
     250,   250,   250,   250,   250,   250,   250,   250,   256,   256,
     250,   250,   250,   250,   250,   256,   256,   250,   398,   399,
      75,    96,   257,   420,   257,   258,   295,   450,   450,   450,
     450,   251,   254,     7,   453,   284,   295,   295,   447,   257,
     250,   279,   279,   279,   279,   250,   295,   250,   295,   295,
     295,   256,     5,     5,   250,   295,    64,   279,     5,   256,
       5,     5,   251,   299,   251,   258,   258,   250,   251,   299,
     299,   250,   257,   301,   251,   251,   258,    69,   450,     5,
     280,   283,   453,     5,     5,     5,   256,   297,   297,   279,
     279,     5,     5,   256,   349,     5,   256,   347,     5,   453,
       5,     5,     5,     5,     5,   107,   117,   453,     5,   453,
       3,     3,   279,   449,   366,    81,    83,    84,    85,   122,
     123,   124,   125,   126,   127,   128,   130,   131,   257,   375,
     382,   257,   130,   257,   379,   382,    86,   110,   256,   257,
     371,     5,   453,   256,   392,   453,   454,   449,   454,   256,
     394,   453,     5,   453,     7,   295,   295,     7,     5,     5,
       5,     5,     5,     5,     5,   447,   403,   447,   405,   447,
     407,   409,   279,   454,     5,     5,     5,     5,     5,     5,
     453,   453,     5,     5,     5,     5,     5,   453,     5,   453,
     250,   250,   256,   453,   447,   257,   257,   257,   257,   257,
       7,   453,   290,   258,   258,   253,     7,     7,     7,     7,
     295,     7,   295,     7,     7,     7,   448,     7,     7,   295,
       7,     7,     7,   311,   324,     7,     7,   258,   301,     3,
     307,   256,   251,   258,   299,     8,   301,   250,   257,     7,
       7,     7,   290,     7,     7,   289,   256,   341,     5,     7,
       7,     7,     7,     7,   350,     7,   348,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,   256,   364,
       7,     7,     7,     7,   299,     5,     5,     5,   250,   279,
       7,   250,   279,   250,     5,     5,   372,     7,     7,   393,
       7,   290,     7,     7,     7,   395,     7,     7,   251,   251,
     251,   258,   258,   258,   258,   258,   258,   258,   258,   140,
     143,   153,   154,   155,   257,   404,   258,   140,   143,   153,
     154,   157,   158,   257,   406,   258,    18,    88,   140,   160,
     161,   257,   408,    18,    88,   133,   140,   141,   160,   163,
     164,   257,   410,   258,   251,   258,   258,   258,   258,   258,
     258,   257,   257,   258,   258,   258,   258,   258,   258,   258,
     251,     5,   297,   400,   400,   421,     7,   257,   256,   256,
     257,   256,   256,     7,   295,   447,   284,   258,   258,   288,
     258,     7,   256,   257,   279,   251,   251,   299,   447,     3,
     251,   303,   279,     7,     7,   112,     7,   288,   257,   288,
     257,   288,   257,   250,   367,   251,     7,     7,     7,     3,
       7,   376,     7,   380,     7,     7,    78,    79,   116,   130,
     257,   373,   257,   288,   257,   288,     7,   256,     7,   295,
       5,     5,   447,     5,   295,   279,   447,   256,   295,   447,
     447,   295,   447,   256,   295,   447,   447,   447,   447,   447,
     447,   447,   256,   447,   295,   447,   447,     5,   256,   256,
     447,   447,   256,   295,     7,   295,   449,   449,   449,   447,
     449,     7,     7,     5,     5,   447,     5,     5,   279,     5,
       7,   401,   401,     5,   117,   257,   256,   449,   450,   256,
     450,   450,   257,   257,   275,   295,   295,   448,   295,   325,
     251,   251,   258,   251,   301,   251,     5,     5,     5,     5,
     365,   453,     7,     7,   251,   299,   299,   383,   383,   383,
     279,   453,   453,   396,   251,   258,   258,   258,   258,   251,
     258,   258,   396,     7,     7,     7,     7,   258,   396,     7,
       7,     7,     7,     7,   258,     7,     7,   396,     7,     7,
       7,     7,     7,   396,   396,     7,     7,   411,   251,   258,
     258,   251,   251,   258,   258,   258,   258,   258,   251,   251,
     251,   258,   257,   258,   251,   258,   402,   251,   256,   256,
     447,   258,   257,   447,   257,   257,   258,   251,   251,   257,
     251,    89,    90,    91,    92,    93,    94,   257,   326,   251,
     447,   257,     7,   257,   367,   251,     7,   377,   381,     7,
       7,     7,     7,   257,     7,   449,   447,   449,     5,     7,
       5,   295,   257,   295,   257,   295,   257,   257,   257,   256,
     257,     7,   447,   295,     7,     7,   447,   454,   454,   447,
     447,     7,     7,     7,   454,     7,   135,     7,   206,   209,
     449,     7,   422,   422,   257,   449,   257,   257,   257,   256,
     253,     7,     7,     7,     7,     5,   447,   447,   447,   447,
     447,   256,   257,   111,     7,     7,   258,   258,    16,   251,
     251,   258,   258,   251,   258,   258,   251,   258,   412,   258,
     251,   258,   251,   251,   251,   258,   258,   257,   258,   454,
     454,   449,    81,    83,    86,   130,   257,   382,   423,   257,
     258,   256,   450,   284,     7,     7,     7,     7,     7,     7,
     447,     5,   299,   383,   256,     7,     7,   447,   447,     7,
     295,   447,   256,   447,    18,    86,    88,    99,   112,   130,
     257,   413,   295,     7,   295,     7,     7,     7,   447,   447,
       7,   295,   257,   258,     5,     5,     5,   425,   250,   449,
     447,   257,   258,   257,   289,   251,   251,   396,   251,   258,
     251,   258,   396,   251,     5,     5,   447,   295,     5,   279,
     251,   251,   258,   251,   251,   257,     7,     4,     7,     7,
       7,   279,   424,   257,   258,   257,   447,     7,     7,     7,
     257,     7,   449,   256,   447,   257,   256,     7,     7,     7,
       7,     7,     7,     7,     7,   295,   256,   256,     7,   257,
       7,   299,   447,   256,   251,   342,   258,   396,   251,   396,
     251,   396,   396,     7,   251,   257,   447,     7,    62,   447,
     257,   256,   257,     7,   257,   257,     7,   258,   279,   258,
     396,     7,     7,   447,     7,   447,   257,   258,   343,   251,
     447,   132,     7,   257,     5,   290,     7,   257
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 373 "GetDP.y"
    { if (++YaccLevel == 1) {
	ConstantTable_L = List_Create(20, 10, sizeof(struct Constant)) ;
	ListDummy_L     = List_Create( 1, 1, sizeof(int)) ; /* Do not delete */
	ListOfInt_L     = List_Create(20, 10, sizeof(int)) ;
	ListOfTwoInt_L  = List_Create(20, 10, sizeof(struct TwoInt)) ;
	ListOfPointer_L = List_Create(10, 10, sizeof(void *)) ;
	ListOfPointer2_L= List_Create(10, 10, sizeof(void *)) ;
	ListOfChar_L    = List_Create(128, 128, sizeof(char)) ;

	ListOfInitialList0_L    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfInitialList_L     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfInitialSuppList_L = List_Create(5,5, sizeof(List_T *)) ;

	ListOfDefineSystem      = List_Create(5,5, sizeof(List_T *)) ;
	ListOfListOfFormulation = List_Create(5,5, sizeof(List_T *)) ;

	ListOfConstraintPerRegion = List_Create(5,5, sizeof(List_T *)) ;
	ListOfRegionIndex       = List_Create(5,5, sizeof(int)) ;
	ListOfSubRegionIndex    = List_Create(5,5, sizeof(int)) ;

	ListOfFormulation       = List_Create(5,5, sizeof(int)) ;

	ListOfBasisFunction     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfSupportIndex      = List_Create(5,5, sizeof(int)) ;
	ListOfEntityIndex       = List_Create(5,5, sizeof(int)) ;
	ListOfConstraintInFS    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfConstraintIndex   = List_Create(5,5, sizeof(List_T *)) ;

	ListOfDefineQuantity    = List_Create(5,5, sizeof(List_T *)) ;
	ListOfFunctionSpaceIndex= List_Create(5,5, sizeof(int *)) ;
	ListOfEquationTerm      = List_Create(5,5, sizeof(List_T *)) ;
      }
    ;}
    break;

  case 3:
#line 407 "GetDP.y"
    { if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfPointer_L) ; List_Delete(ListOfPointer2_L) ; 
	List_Delete(ListOfChar_L) ;

	List_Delete(ListOfInitialList0_L) ;

	List_Delete(ListOfInitialList_L) ;
	List_Delete(ListOfInitialSuppList_L) ;

	List_Delete(ListOfDefineSystem) ;
	List_Delete(ListOfListOfFormulation) ;

	List_Delete(ListOfConstraintPerRegion) ;
	List_Delete(ListOfRegionIndex) ;
	List_Delete(ListOfSubRegionIndex) ;

	List_Delete(ListOfFormulation) ;

	List_Delete(ListOfBasisFunction) ;
	List_Delete(ListOfSupportIndex) ;
	List_Delete(ListOfEntityIndex) ;
	List_Delete(ListOfConstraintInFS) ;
	List_Delete(ListOfConstraintIndex) ;

	List_Delete(ListOfDefineQuantity) ;
	List_Delete(ListOfFunctionSpaceIndex) ;
	List_Delete(ListOfEquationTerm) ;
      }
    ;}
    break;

  case 5:
#line 450 "GetDP.y"
    { Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;}
    break;

  case 19:
#line 473 "GetDP.y"
    {            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;}
    break;

  case 21:
#line 488 "GetDP.y"
    { Help(NULL); ;}
    break;

  case 22:
#line 490 "GetDP.y"
    { Help("Print"); ;}
    break;

  case 23:
#line 492 "GetDP.y"
    { Help("Check"); ;}
    break;

  case 24:
#line 494 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 25:
#line 496 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 26:
#line 498 "GetDP.y"
    { Help("Help"); ;}
    break;

  case 27:
#line 500 "GetDP.y"
    { Help(yyvsp[-1].c); ;}
    break;

  case 28:
#line 502 "GetDP.y"
    { Msg(RESOURCES, ""); ;}
    break;

  case 29:
#line 504 "GetDP.y"
    { Print_ProblemStructure(&Problem_S); ;}
    break;

  case 30:
#line 506 "GetDP.y"
    { Print_Group(&Problem_S); ;}
    break;

  case 31:
#line 508 "GetDP.y"
    { Print_Expression(&Problem_S); ;}
    break;

  case 32:
#line 510 "GetDP.y"
    { Print_Constraint(&Problem_S); ;}
    break;

  case 33:
#line 512 "GetDP.y"
    { Print_Jacobian(&Problem_S); ;}
    break;

  case 34:
#line 514 "GetDP.y"
    { Print_Integration(&Problem_S); ;}
    break;

  case 35:
#line 516 "GetDP.y"
    { Print_FunctionSpace(&Problem_S); ;}
    break;

  case 36:
#line 518 "GetDP.y"
    { Print_Formulation(&Problem_S); ;}
    break;

  case 37:
#line 520 "GetDP.y"
    { Print_Resolution(&Problem_S); ;}
    break;

  case 38:
#line 522 "GetDP.y"
    { Print_PostProcessing(&Problem_S); ;}
    break;

  case 39:
#line 524 "GetDP.y"
    { Print_PostOperation(&Problem_S); ;}
    break;

  case 40:
#line 526 "GetDP.y"
    { Print_Object(yyvsp[-1].i, &Problem_S); ;}
    break;

  case 41:
#line 528 "GetDP.y"
    {
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 42:
#line 536 "GetDP.y"
    {
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;}
    break;

  case 44:
#line 553 "GetDP.y"
    { Nbr_Index = 0 ; ;}
    break;

  case 46:
#line 560 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;}
    break;

  case 47:
#line 562 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;}
    break;

  case 48:
#line 567 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ; ;}
    break;

  case 49:
#line 569 "GetDP.y"
    { Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;}
    break;

  case 52:
#line 576 "GetDP.y"
    { Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;}
    break;

  case 55:
#line 586 "GetDP.y"
    { 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      i = (int)yyvsp[-3].d ;
      List_Add(Group_S.InitialList, &i) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;}
    break;

  case 56:
#line 596 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;}
    break;

  case 57:
#line 603 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;}
    break;

  case 58:
#line 613 "GetDP.y"
    {
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;}
    break;

  case 59:
#line 618 "GetDP.y"
    {
      Group_S.FunctionType = yyvsp[-3].i ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      if (!Nbr_Index)  Group_S.InitialList = yyvsp[0].l ;
      else             Group_S.InitialList = yyvsp[0].l ;

      ListOfInitialList2_L = ListOfInitialSuppList_L ;  /* Init pour SuppListOfRegion */
    ;}
    break;

  case 60:
#line 630 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;}
    break;

  case 61:
#line 639 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;}
    break;

  case 62:
#line 650 "GetDP.y"
    {
      yyval.i = yyvsp[0].i ;
    ;}
    break;

  case 63:
#line 655 "GetDP.y"
    {
      if (!Flag_MultipleIndex) {
	if ( !strcmp(yyvsp[-1].c, "All") ) {
	  yyval.i = -3;
	}
	else if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[-1].c, fcmp_Group_Name)) < 0 ) {
	  yyval.i = -2 ; vyyerror("Unknown Group: %s", yyvsp[-1].c) ;
	}
	else {
	  List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
	}
      }
      else {
	List_Reset(ListOfInt_L) ;  /* For list of multiple region */

	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(StringAux1, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1,
				    fcmp_Group_Name)) < 0 ) {
	    yyval.i = -2 ; vyyerror("Unknown Group: %s {%d}", yyvsp[-1].c, k+1) ;
	  }
	  else {
	    if (k == 0) {
	      List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
	    }
	  }
	  List_Add(ListOfInt_L, &i) ;
	}
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 64:
#line 692 "GetDP.y"
    { yyval.i = REGION ; ;}
    break;

  case 65:
#line 695 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 66:
#line 707 "GetDP.y"
    { yyval.l = yyvsp[0].l ; ;}
    break;

  case 67:
#line 709 "GetDP.y"
    { 
      if (!Nbr_Index)
	yyval.l = NULL ;
      else {
	List_Reset(ListOfInitialList2_L) ;
	InitialList2_L = NULL ;
	for (k = 0 ; k < Nbr_Index ; k++)
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
      }
    ;}
    break;

  case 68:
#line 725 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;}
    break;

  case 69:
#line 728 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;}
    break;

  case 70:
#line 731 "GetDP.y"
    {
      Type_SuppList = SUPPLIST_INSUPPORT ;
      if (!Flag_MultipleIndex) {
	if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[-1].c, fcmp_Group_Name)) >= 0 ) {
	  if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type == 
	       ELEMENTLIST ) {
	    if (!Nbr_Index) {
	      yyval.l = List_Create( 1, 5, sizeof(int)) ;
	      List_Add(yyval.l, &i) ;
	    }
	    else {
	      List_Reset(ListOfInitialList2_L) ;
	      for (k = 0 ; k < Nbr_Index ; k++) {
		InitialList2_L = List_Create( 1, 5, sizeof(int)) ;
		List_Add(ListOfInitialList2_L, &InitialList2_L) ;
		List_Add(InitialList2_L, &i) ;
	      }
	    }
	  }
	  else  vyyerror("Not a Support of Element Type: %s", yyvsp[-1].c) ;
	}
	else  vyyerror("Unknown Region for Support: %s", yyvsp[-1].c) ;
      }
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(StringAux1, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1, fcmp_Group_Name))
	       >= 0 ) {
	    if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type ==
		 ELEMENTLIST ) {
	      if (!Nbr_Index)
		vyyerror("Multiple Group out of context: %s {}", yyvsp[-1].c) ;
	      else {
		InitialList2_L = List_Create( 1, 5, sizeof(int)) ;
		List_Add(ListOfInitialList2_L, &InitialList2_L) ;
		List_Add(InitialList2_L, &i) ;
	      }
	    }
	    else  vyyerror("Not a Support of Element Type: %s", yyvsp[-1].c) ;
	  }
	  else  vyyerror("Unknown Region for Support: %s {%d}", yyvsp[-1].c, k+1) ;
	}
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 71:
#line 782 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 72:
#line 795 "GetDP.y"
    {
      if (!Nbr_Index) {
	yyval.l = List_Create(((List_Nbr(yyvsp[0].l) > 0)? List_Nbr(yyvsp[0].l) : 1), 5, sizeof(int)) ;
	for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	  List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
      }
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = yyvsp[0].l ;
	  InitialList2_L =
	    List_Create(((List_Nbr(InitialList0_L) > 0)? List_Nbr(yyvsp[0].l) : 1), 5,
			sizeof(int)) ;
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Add(InitialList2_L, (int *)List_Pointer(InitialList0_L, i) ) ;
	}
      }
    ;}
    break;

  case 73:
#line 819 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 74:
#line 826 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = List_Create( 5, 5, sizeof(int)) ;
      else {
	List_Reset(ListOfInitialList2_L) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  InitialList2_L = List_Create( 5, 5, sizeof(int)) ;
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
	}
      }
    ;}
    break;

  case 75:
#line 839 "GetDP.y"
    { yyval.l = yyvsp[-2].l ;
      if (!Nbr_Index)
	for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	  List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
      else {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = yyvsp[0].l ;
	  List_Read(ListOfInitialList2_L, k, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Add(InitialList2_L, (int *)List_Pointer(InitialList0_L, i) ) ;
	}
      }
    ;}
    break;

  case 76:
#line 857 "GetDP.y"
    { yyval.l = yyvsp[-3].l ;
      if (!Nbr_Index)
	for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	  List_Suppress(yyval.l, (int *)List_Pointer(yyvsp[0].l, i), fcmp_int ) ;
      else {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (Flag_MultipleIndex)
	    List_Read(ListOfInitialList0_L, k, &InitialList0_L) ;
	  else
	    InitialList0_L = yyvsp[0].l ;
	  List_Read(ListOfInitialList2_L, k, &InitialList2_L) ;
	  for (i = 0 ; i < List_Nbr(InitialList0_L) ; i++)
	    List_Suppress(InitialList2_L,
			  (int *)List_Pointer(InitialList0_L, i), fcmp_int) ;
	}
      }
    ;}
    break;

  case 77:
#line 880 "GetDP.y"
    { Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 78:
#line 884 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	List_Read(yyvsp[-1].l, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      yyval.l = ListOfInt_L;
    ;}
    break;

  case 79:
#line 896 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 80:
#line 905 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || (yyvsp[-4].i<yyvsp[-2].i && (int)yyvsp[0].d<0) || (yyvsp[-4].i>yyvsp[-2].i && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", yyvsp[-4].i, yyvsp[-2].i, (int)yyvsp[0].d) ;
	List_Add(ListOfInt_L, &(yyvsp[-4].i)) ;
      }
      else
	for(j=yyvsp[-4].i ; ((int)yyvsp[0].d>0)?(j<=yyvsp[-2].i):(j>=yyvsp[-2].i) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 81:
#line 919 "GetDP.y"
    {
      Flag_MultipleIndex = 0 ;
      if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	/* Si ce n'est pas un nom de groupe, est-ce un nom de constante ? : */
	Constant_S.Name = yyvsp[0].c ;
	if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	  vyyerror("Unknown Constant: %s", yyvsp[0].c) ;
	  i = 0 ;
	  List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
	}
	else
	  if (Constant_S.Type == VAR_FLOAT) {
	    i = (int)Constant_S.Value.Float ;
	    List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
	  }
	  else if (Constant_S.Type == VAR_LISTOFFLOAT) {
	    List_Reset(yyval.l = ListOfInt_L) ;
	    for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ; j = (int)d ;
	      List_Add(ListOfInt_L, &j) ;
	    }
	  }
	  else {
	    vyyerror("Unknown type of Constant: %s", yyvsp[0].c) ;
	    i = 0 ;
	    List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
	  }
      }
      else   /* Si c'est un nom de groupe : */
	yyval.l = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 82:
#line 953 "GetDP.y"
    {
      Flag_MultipleIndex = 1 ;
      List_Reset(ListOfInitialList0_L) ;
      yyval.l = ListOfInitialList0_L ;
      for (k = 1 ; k <= Nbr_Index ; k++) {
	sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, k) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1, fcmp_Group_Name)) < 0 ) {
	  vyyerror("Unknown Group: %s {%d}", yyvsp[-2].c, k) ;  break ;
	}
	else
	  List_Add(ListOfInitialList0_L, 
		   &(((struct Group *)
		      List_Pointer(Problem_S.Group, i))->InitialList)) ;
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 84:
#line 977 "GetDP.y"
    { if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;}
    break;

  case 85:
#line 987 "GetDP.y"
    { 
      for (k = 0 ; k < (int)yyvsp[-1].d ; k++) {
	sprintf(StringAux1, "%s_%d_", yyvsp[-3].c, k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1,
				  fcmp_Group_Name)) < 0 ) {
	  Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	  Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	  Group_S.InitialList = ListDummy_L ;
	  Add_Group(&Group_S, yyvsp[-3].c, 2, k+1) ;
	}
      }
      Free(yyvsp[-3].c) ;
    ;}
    break;

  case 88:
#line 1009 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].d ; ;}
    break;

  case 89:
#line 1014 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 90:
#line 1015 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 91:
#line 1022 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].i ; ;}
    break;

  case 95:
#line 1042 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[-5].c, fcmp_Expression_Name)) >= 0 ) {
	if (((struct Expression *)List_Pointer(Problem_S.Expression, i))->Type ==
	    UNDEFINED_EXP) {
	  Free(((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name) ;
	  List_Read (Problem_S.Expression, yyvsp[-1].i, &Expression_S) ;
	  List_Write(Problem_S.Expression,  i, &Expression_S) ;
	  ((struct Expression *)List_Pointer(Problem_S.Expression, i))->Name = yyvsp[-5].c ;
	  List_Pop(Problem_S.Expression) ;
	}
	else  { vyyerror("Redefinition of Function: %s", yyvsp[-5].c) ; }
      }
      else {  /* new identifier */
	Free(((struct Expression *)List_Pointer(Problem_S.Expression, yyvsp[-1].i))->Name) ;
	((struct Expression *)List_Pointer(Problem_S.Expression, yyvsp[-1].i))->Name = yyvsp[-5].c ;
      }
    ;}
    break;

  case 96:
#line 1062 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[-6].c, fcmp_Expression_Name)) < 0 ) {
	/* Si le nom n'existe pas : */
	i = List_Nbr(Problem_S.Expression) ;
	Expression_S.Type = PIECEWISEFUNCTION ;
	Expression_S.Case.PieceWiseFunction.ExpressionPerRegion =
	  List_Create( 5, 5, sizeof(struct ExpressionPerRegion)) ;
	Expression_S.Case.PieceWiseFunction.NumLastRegion = -1 ;
	Add_Expression(&Expression_S, yyvsp[-6].c, 0) ;
	Expression_P = (struct Expression*)List_Pointer(Problem_S.Expression, i) ;
      }
      else {
	Expression_P = (struct Expression*)List_Pointer(Problem_S.Expression, i) ;
	if (Expression_P->Type == UNDEFINED_EXP) {
	  Expression_P->Type = PIECEWISEFUNCTION ;
	  Expression_P->Case.PieceWiseFunction.ExpressionPerRegion =
	    List_Create( 5, 5, sizeof(struct ExpressionPerRegion)) ;
	  Expression_P->Case.PieceWiseFunction.NumLastRegion = -1 ;
	}
	else if (Expression_P->Type != PIECEWISEFUNCTION)
	  vyyerror("Not piece-wise Expression: %s", yyvsp[-6].c) ;
	Free(yyvsp[-6].c) ;
      }

      if (yyvsp[-4].i >= 0 || yyvsp[-4].i == -1) {
	ExpressionPerRegion_S.ExpressionIndex = yyvsp[-1].i ;
	for (i = 0 ; i < List_Nbr(Group_S.InitialList) ; i++) {
	  List_Read(Group_S.InitialList, i, &ExpressionPerRegion_S.RegionIndex) ;

	  if (List_Search(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
			  &ExpressionPerRegion_S.RegionIndex, fcmp_int))
	    vyyerror("Redefinition of piece-wise Function: %s [%d]",
		     Expression_P->Name, ExpressionPerRegion_S.RegionIndex) ;
	  else
	    List_Add(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
		     &ExpressionPerRegion_S) ;
	}
	if (yyvsp[-4].i == -1) { List_Delete(Group_S.InitialList) ; }
      }
      else  vyyerror("Bad Group right hand side") ;
    ;}
    break;

  case 100:
#line 1115 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;}
    break;

  case 101:
#line 1135 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 102:
#line 1141 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;}
    break;

  case 103:
#line 1147 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 104:
#line 1150 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 105:
#line 1157 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 107:
#line 1168 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 108:
#line 1171 "GetDP.y"
    { List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 109:
#line 1177 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 110:
#line 1181 "GetDP.y"
    { yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 112:
#line 1193 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_TEST ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(Current_WholeQuantity_L, List_Nbr(Current_WholeQuantity_L)-1);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 113:
#line 1206 "GetDP.y"
    {
      WholeQuantity_P = 
	*((struct WholeQuantity**)
	  List_Pointer(ListOfPointer2_L, List_Nbr(ListOfPointer2_L)-1)) ;
      List_Pop(ListOfPointer2_L) ;

      WholeQuantity_P->Case.Test.WholeQuantity_True =
	*((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 114:
#line 1220 "GetDP.y"
    {
      WholeQuantity_P = 
	*((struct WholeQuantity**)
	  List_Pointer(ListOfPointer2_L, List_Nbr(ListOfPointer2_L)-1)) ;
      List_Pop(ListOfPointer2_L) ;

      WholeQuantity_P->Case.Test.WholeQuantity_False =
	*((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
    ;}
    break;

  case 115:
#line 1235 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 116:
#line 1241 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1247 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1253 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1259 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1265 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1271 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1277 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1283 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1289 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1295 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1301 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1307 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1313 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1319 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1325 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1331 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1338 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 134:
#line 1346 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 136:
#line 1359 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 137:
#line 1365 "GetDP.y"
    {

      /* Expression */

      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-2].c,fcmp_Expression_Name)) >= 0) {  
	WholeQuantity_S.Type = WQ_EXPRESSION ;
	WholeQuantity_S.Case.Expression.Index = i ;
	WholeQuantity_S.Case.Expression.NbrArguments = yyvsp[-1].i ;
	if (yyvsp[-1].i < 0)  vyyerror("Uncompatible argument for Function: %s", yyvsp[-2].c) ;
      }

      /* Built in functions */

      else { 
	Get_Function2NbrForString(F_Function, yyvsp[-2].c, &FlagError,
				  &WholeQuantity_S.Case.Function.Fct,
				  &WholeQuantity_S.Case.Function.NbrParameters,
				  &WholeQuantity_S.Case.Function.NbrArguments) ;
	WholeQuantity_S.Case.Function.Active = NULL ;
	if (!FlagError) {

	  /* arguments */
	  if (yyvsp[-1].i >= 0) {
	    if (yyvsp[-1].i == WholeQuantity_S.Case.Function.NbrArguments) {
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	    }
	    else if (WholeQuantity_S.Case.Function.NbrArguments == -1  ||
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 )) { 
	      /* && ($2)%2 == 0)) { */
	      WholeQuantity_S.Type = WQ_BUILTINFUNCTION ;
	      WholeQuantity_S.Case.Function.NbrArguments = yyvsp[-1].i ;
	    }
	    else {
	      vyyerror("Wrong number of arguments for Function '%s' (%d instead of %d)", 
		       yyvsp[-2].c, yyvsp[-1].i, WholeQuantity_S.Case.Function.NbrArguments) ;
	    }
	  }
	  else {
	    WholeQuantity_S.Type = WQ_EXTERNBUILTINFUNCTION ;
	  }

	  /* parameters */
	  if (WholeQuantity_S.Case.Function.NbrParameters >= 0 &&
	      WholeQuantity_S.Case.Function.NbrParameters != List_Nbr(yyvsp[0].l)) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)", 
		     yyvsp[-2].c, List_Nbr(yyvsp[0].l), WholeQuantity_S.Case.Function.NbrParameters) ;
	  }
	  else if (WholeQuantity_S.Case.Function.NbrParameters == -2 && List_Nbr(yyvsp[0].l)%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d is not even)",
		     yyvsp[-2].c, List_Nbr(yyvsp[0].l)) ;
	  }
	  else {
	    WholeQuantity_S.Case.Function.NbrParameters = List_Nbr(yyvsp[0].l) ;
	    if (WholeQuantity_S.Case.Function.NbrParameters > 0) {
	      WholeQuantity_S.Case.Function.Para =
		(double *)Malloc
		(WholeQuantity_S.Case.Function.NbrParameters * sizeof(double)) ;
	      for (i = 0 ; i < WholeQuantity_S.Case.Function.NbrParameters ; i++)
		List_Read(yyvsp[0].l, i, &WholeQuantity_S.Case.Function.Para[i]) ;
	    }
	  }

	}

	else {
	  vyyerror("Unknown Function: %s", yyvsp[-2].c) ;
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 138:
#line 1439 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of discrete Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(QuantityFromFS_Type) ;
      }
      Free(yyvsp[-1].c) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;

      switch(WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity) {
      case QUANTITY_DOF :
	if (Current_DofIndexInWholeQuantity == -1)
	  Current_DofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else if (Current_DofIndexInWholeQuantity == -2)
	  vyyerror("Dof{} definition out of context") ;
	else
	  vyyerror("More than one Dof definition in Expression") ;
	break ;
      case QUANTITY_NODOF :
	if (Current_DofIndexInWholeQuantity == -2)
	  vyyerror("NoDof definition out of context") ;
	else if (Current_NoDofIndexInWholeQuantity == -1)
	  Current_NoDofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else
	  vyyerror("More than one NoDof definition in Expression") ;
	break ;
      }
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 139:
#line 1473 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 140:
#line 1482 "GetDP.y"
    { 
      if(yyvsp[0].i!=1 && yyvsp[0].i!=3 && yyvsp[0].i!=4) /* Modification for using the previous result of a Quantity */
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", yyvsp[0].i) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = yyvsp[0].i ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[-1].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 141:
#line 1494 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 142:
#line 1496 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 143:
#line 1508 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1510 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ATANTERIORTIMESTEP ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.TimeStep = yyvsp[-1].i ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 145:
#line 1522 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1524 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-8].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHTransform", yyvsp[-8].c) ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition cannot be used in MHTransform") ;
      WholeQuantity_S.Type = WQ_MHTRANSFORM ; 
      WholeQuantity_S.Case.MHTransform.Index = i ;
      WholeQuantity_S.Case.MHTransform.WholeQuantity = yyvsp[-5].l ;
      WholeQuantity_S.Case.MHTransform.NbrPoints = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 147:
#line 1538 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-6].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHJacNL", yyvsp[-6].c) ;
      WholeQuantity_S.Type = WQ_MHJACNL ; 
      WholeQuantity_S.Case.MHJacNL.Index = i ;
      WholeQuantity_S.Case.MHJacNL.NbrPoints = (int)yyvsp[-3].d ;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 148:
#line 1550 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 149:
#line 1556 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 150:
#line 1562 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 151:
#line 1564 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TRACE ;
      WholeQuantity_S.Case.Trace.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.Trace.InIndex = Num_Group(&Group_S, "WQ_Trace_In", yyvsp[-1].i) ;

      if(Group_S.Type != ELEMENTLIST || Group_S.SuppListType != SUPPLIST_CONNECTEDTO)
	vyyerror("Group for Trace should be of Type 'ElementsOf[x, ConnectedTo y]'");

      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = -1 ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity){
	for(i=0 ; i<List_Nbr(yyvsp[-3].l) ; i++){
	  WholeQuantity_P = (struct WholeQuantity*)List_Pointer(yyvsp[-3].l, i) ;
	  if(WholeQuantity_P->Type == WQ_OPERATORANDQUANTITY)
	    if(WholeQuantity_P->Case.OperatorAndQuantity.TypeQuantity == QUANTITY_DOF){
	      WholeQuantity_S.Case.Trace.DofIndexInWholeQuantity = i ;
	      Current_DofIndexInWholeQuantity = -4 ;
	      TypeOperatorDofInTrace = WholeQuantity_P->Case.OperatorAndQuantity.TypeOperator ;
	      DefineQuantityIndexDofInTrace = WholeQuantity_P->Case.OperatorAndQuantity.Index ;
	    }
	}
	if(Current_DofIndexInWholeQuantity != -4)
	  vyyerror("Dof{} definition out of context in Trace operator");
      }

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 152:
#line 1593 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CAST ;
      WholeQuantity_S.Case.Cast.WholeQuantity = yyvsp[-1].l ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-4].c,
			       fcmp_DefineQuantity_Name)) < 0) {
	if (!strcmp(yyvsp[-4].c, "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1 ;
	else
	  vyyerror("Unknown Cast: %s", yyvsp[-4].c) ;
      }
      else {
	WholeQuantity_S.Case.Cast.NbrHar = 0 ;
	WholeQuantity_S.Case.Cast.FunctionSpaceIndexForType =
	  ((struct DefineQuantity *)List_Pointer(Formulation_S.DefineQuantity, i))
	    ->FunctionSpaceIndex ;
      }
      Free(yyvsp[-4].c) ;

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 153:
#line 1617 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError){
	vyyerror("Unknown current value: $%s", yyvsp[0].c);
	Get_Valid_SXP(Current_Value);
      }
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 154:
#line 1630 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 155:
#line 1636 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1643 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1649 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1656 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1663 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_POSTSAVE ;
      WholeQuantity_S.Case.PostSave.Value = (struct Value *)Add_PostSave(yyvsp[0].c) ;
      printf("PostSave %p\n", (struct Value *)Add_PostSave(yyvsp[0].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1671 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 161:
#line 1678 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-3].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("DofValue : Unknown System: %s", yyvsp[-3].c) ;
      /* Free($3) ; */
      WholeQuantity_S.Case.DofValue.DefineSystemIndex = i ;
      WholeQuantity_S.Type = WQ_DOFVALUE ;
      WholeQuantity_S.Case.DofValue.SystemName = yyvsp[-3].c ;
      WholeQuantity_S.Case.DofValue.DofNumber = yyvsp[-1].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 162:
#line 1695 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 163:
#line 1696 "GetDP.y"
    { yyval.i = 0 ; ;}
    break;

  case 164:
#line 1697 "GetDP.y"
    { yyval.i = yyvsp[-1].i ; ;}
    break;

  case 165:
#line 1702 "GetDP.y"
    { yyval.i = 1 ; ;}
    break;

  case 166:
#line 1703 "GetDP.y"
    { yyval.i = yyvsp[-2].i + 1 ; ;}
    break;

  case 167:
#line 1709 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 168:
#line 1712 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 169:
#line 1715 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;}
    break;

  case 170:
#line 1731 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 171:
#line 1736 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 172:
#line 1743 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 174:
#line 1752 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;}
    break;

  case 175:
#line 1757 "GetDP.y"
    { JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;}
    break;

  case 176:
#line 1764 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 177:
#line 1767 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;}
    break;

  case 178:
#line 1774 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 180:
#line 1784 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;}
    break;

  case 181:
#line 1787 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 182:
#line 1790 "GetDP.y"
    { JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, yyvsp[-2].c, &FlagError,
				&JacobianCase_S.NbrParameters) ;
      if (!FlagError) {
	if (JacobianCase_S.NbrParameters == -2 && (List_Nbr(yyvsp[-1].l))%2 != 0)
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d is not even)",
		   yyvsp[-2].c, List_Nbr(yyvsp[-1].l)) ;
	if (JacobianCase_S.NbrParameters < 0)
	  JacobianCase_S.NbrParameters = List_Nbr(yyvsp[-1].l);
	if (List_Nbr(yyvsp[-1].l) == JacobianCase_S.NbrParameters) {
	  if (JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double)) ;
	    for (i = 0 ; i < JacobianCase_S.NbrParameters ; i++)
	      List_Read(yyvsp[-1].l, i, &JacobianCase_S.Para[i]) ;
	  }
	}
	else
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)", 
		   yyvsp[-2].c, List_Nbr(yyvsp[-1].l), JacobianCase_S.NbrParameters) ;
      }
      else{
	vyyerror("Unknown type of Jacobian: %s", yyvsp[-2].c);
	Get_Valid_SXD1N(Jacobian_Type);
      }
      Free(yyvsp[-2].c);
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 183:
#line 1828 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 184:
#line 1834 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 185:
#line 1841 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 187:
#line 1854 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 188:
#line 1861 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;}
    break;

  case 189:
#line 1864 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;}
    break;

  case 190:
#line 1871 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 191:
#line 1874 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;}
    break;

  case 192:
#line 1881 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 194:
#line 1893 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 195:
#line 1903 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 196:
#line 1913 "GetDP.y"
    { IntegrationCase_S.Case = yyvsp[-1].l ; ;}
    break;

  case 197:
#line 1920 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 198:
#line 1923 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;}
    break;

  case 199:
#line 1930 "GetDP.y"
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;}
    break;

  case 201:
#line 1946 "GetDP.y"
    { QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Element: %s", yyvsp[-1].c);
	Get_Valid_SXD(Element_Type);
      }

      switch(IntegrationCase_S.SubType) {

      case STANDARD :
	switch (IntegrationCase_S.Type) {
	case GAUSS :
	  Get_FunctionForDefine
	    (FunctionForGauss, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	case GAUSSLEGENDRE :
	  Get_FunctionForDefine
	    (FunctionForGaussLegendre, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	default : 
	  vyyerror("Incompatible type of Integration method") ;
	  break ;
	}
	break ;

      case SINGULAR :
	switch (IntegrationCase_S.Type) {
	case GAUSS :
	  Get_FunctionForDefine
	    (FunctionForSingularGauss, QuadratureCase_S.ElementType,
	     &FlagError, (void (**)())&QuadratureCase_S.Function) ;
	  break ;
	default : 
	  vyyerror("Incompatible type of Integration method") ;
	  break ;
	}
	break ;
      default :
	vyyerror("Incompatible type of Integration method") ;
	break ;
      }

      if (FlagError)  vyyerror("Bad type of Integration method for Element: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 202:
#line 1994 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 203:
#line 1997 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 204:
#line 2000 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 205:
#line 2003 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 206:
#line 2006 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;}
    break;

  case 207:
#line 2017 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 210:
#line 2028 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Constraint, &Constraint_S) ;
      else {
	Save_Name = strsave(Constraint_S.Name) ;  Free(Constraint_S.Name) ;
	if (List_Nbr(ListOfConstraintPerRegion))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				       StringAux1, fcmp_Constraint_Name) ;
	    Constraint_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfConstraintPerRegion, k,
		      &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Problem_S.Constraint, &Constraint_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 212:
#line 2053 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 214:
#line 2067 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;}
    break;

  case 215:
#line 2073 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;}
    break;

  case 216:
#line 2080 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 217:
#line 2089 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;}
    break;

  case 218:
#line 2092 "GetDP.y"
    {
      if (!Nbr_Index) {
	if (!Constraint_S.MultiConstraintPerRegion)
	  Constraint_S.MultiConstraintPerRegion =
	    List_Create( 5, 5, sizeof(struct MultiConstraintPerRegion)) ;

	MultiConstraintPerRegion_S.Name = yyvsp[-3].c ;
	MultiConstraintPerRegion_S.ConstraintPerRegion = yyvsp[-1].l ;
	MultiConstraintPerRegion_S.Active = NULL ;

	List_Add(Constraint_S.MultiConstraintPerRegion, 
		 &MultiConstraintPerRegion_S) ;
      }
      else
	vyyerror("Multiple Constraint not allowed for Case Constraint") ;
    ;}
    break;

  case 219:
#line 2116 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
      else {
	List_Reset(ListOfConstraintPerRegion) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Constraint_S.ConstraintPerRegion =
	    List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
	  List_Add(ListOfConstraintPerRegion, &Constraint_S.ConstraintPerRegion) ;
	}
	yyval.l = Constraint_S.ConstraintPerRegion ;
      }
    ;}
    break;

  case 220:
#line 2131 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(yyval.l = yyvsp[-3].l, &ConstraintPerRegion_S) ;
      else {
	if (List_Nbr(ListOfRegionIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfRegionIndex, k, &ConstraintPerRegion_S.RegionIndex) ;
	    if (List_Nbr(ListOfSubRegionIndex))
	      List_Read
		(ListOfSubRegionIndex, k, &ConstraintPerRegion_S.SubRegionIndex) ;

	    List_Read
	      (ListOfConstraintPerRegion, k, &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Constraint_S.ConstraintPerRegion, &ConstraintPerRegion_S) ;
	  }
	yyval.l = Constraint_S.ConstraintPerRegion ;
      }
    ;}
    break;

  case 221:
#line 2151 "GetDP.y"
    { 
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 222:
#line 2160 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 224:
#line 2174 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 225:
#line 2184 "GetDP.y"
    { 
      if (!Nbr_Index){
	ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
      }
      else {
	List_Reset(ListOfRegionIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfRegionIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "CO_Region", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfRegionIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 226:
#line 2209 "GetDP.y"
    { 
      if (!Nbr_Index)
	ConstraintPerRegion_S.SubRegionIndex =
	  Num_Group(&Group_S, "CO_SubRegion", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSubRegionIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSubRegionIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "CO_SubRegion", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSubRegionIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 227:
#line 2234 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;}
    break;

  case 228:
#line 2239 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2247 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2255 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2265 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.RegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex = -1 ;

	ConstraintPerRegion_S.Case.Link.FilterIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.CoefIndex = -1 ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = -1 ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = -1 ;
      }
      else  vyyerror("RegionRef incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2282 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2290 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2297 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2304 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2313 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 237:
#line 2322 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 238:
#line 2331 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 239:
#line 2352 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 241:
#line 2363 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
      else {
	Save_Name = strsave(FunctionSpace_S.Name) ;  Free(FunctionSpace_S.Name) ;
	if (List_Nbr(ListOfBasisFunction))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				       StringAux1, fcmp_FunctionSpace_Name) ;
	    FunctionSpace_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfBasisFunction , k, &FunctionSpace_S.BasisFunction) ;
	    if (List_Nbr(ListOfConstraintInFS))
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	    List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 244:
#line 2392 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 246:
#line 2405 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;}
    break;

  case 247:
#line 2411 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;}
    break;

  case 248:
#line 2418 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 249:
#line 2427 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;}
    break;

  case 250:
#line 2430 "GetDP.y"
    { FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;}
    break;

  case 251:
#line 2433 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;}
    break;

  case 252:
#line 2436 "GetDP.y"
    { FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;}
    break;

  case 253:
#line 2443 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = Current_BasisFunction_L =
	  List_Create(6, 6, sizeof (struct BasisFunction)) ;
      else {
	List_Reset(ListOfBasisFunction) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  FunctionSpace_S.BasisFunction =
	    List_Create(6, 6, sizeof (struct BasisFunction)) ;
	  List_Add(ListOfBasisFunction, &FunctionSpace_S.BasisFunction) ;
	}
	yyval.l = Current_BasisFunction_L = FunctionSpace_S.BasisFunction ;
      }
    ;}
    break;

  case 254:
#line 2459 "GetDP.y"
    {
      if (!Nbr_Index) {
	if ( (i = List_ISearchSeq(yyvsp[-3].l, BasisFunction_S.Name, 
				  fcmp_BasisFunction_Name)) < 0 ) {
	  /*
	  BasisFunction_S.Num = Num_BasisFunction++ ;
	  */
	  BasisFunction_S.Num = Num_BasisFunction ;
	  Num_BasisFunction += (BasisFunction_S.SubFunction)?
	    List_Nbr(BasisFunction_S.SubFunction) : 1 ;
	}
	else  /* BasisFunction definie par morceaux => meme Num */
	  BasisFunction_S.Num = ((struct BasisFunction *)List_Pointer(yyvsp[-3].l, i))->Num ;
	
	List_Add(yyval.l = yyvsp[-3].l, &BasisFunction_S) ;
      }
      else {
	if (List_Nbr(ListOfSupportIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfSupportIndex, k, &BasisFunction_S.SupportIndex) ;
	    List_Read(ListOfEntityIndex , k, &BasisFunction_S.EntityIndex ) ;
	    List_Read(ListOfBasisFunction, k, &FunctionSpace_S.BasisFunction) ;

	    if ( (i = List_ISearchSeq(FunctionSpace_S.BasisFunction,
				      BasisFunction_S.Name, 
				      fcmp_BasisFunction_Name)) < 0 ) {
	      /*
	      BasisFunction_S.Num = Num_BasisFunction++ ;
	      */
	      BasisFunction_S.Num = Num_BasisFunction ;
	      Num_BasisFunction += (BasisFunction_S.SubFunction)?
		List_Nbr(BasisFunction_S.SubFunction) : 1 ;
	    }
	    else  /* BasisFunction definie par morceaux => meme Num */
	      BasisFunction_S.Num =
		((struct BasisFunction *)
		 List_Pointer(FunctionSpace_S.BasisFunction, i))->Num ;

	    List_Add(FunctionSpace_S.BasisFunction, &BasisFunction_S) ;
	  }
	yyval.l = FunctionSpace_S.BasisFunction ;
      }
    ;}
    break;

  case 255:
#line 2508 "GetDP.y"
    { 
      BasisFunction_S.Name = NULL ; 
      BasisFunction_S.NameOfCoef = NULL ;
      BasisFunction_S.Num = 0 ;
      BasisFunction_S.GlobalBasisFunction = NULL ;
      BasisFunction_S.Function = NULL ; 
      BasisFunction_S.dFunction = NULL ;
      BasisFunction_S.dInvFunction = NULL ;
      BasisFunction_S.SubFunction = NULL ; 
      BasisFunction_S.SubdFunction = NULL ; 
      BasisFunction_S.SupportIndex = -1 ; 
      BasisFunction_S.EntityIndex  = -1 ;
    ;}
    break;

  case 257:
#line 2529 "GetDP.y"
    { BasisFunction_S.Name = yyvsp[-1].c ; ;}
    break;

  case 258:
#line 2532 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 259:
#line 2537 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;}
    break;

  case 260:
#line 2542 "GetDP.y"
    {
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Order,
	 &BasisFunction_S.ElementType) ;
      if (FlagError){
	vyyerror("Unknown Function for BasisFunction: %s", yyvsp[-2].c);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 261:
#line 2556 "GetDP.y"
    {
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-4].c, &FlagError,
	 &BasisFunction_S.dFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (1) for BasisFunction: %s", yyvsp[-4].c);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free(yyvsp[-4].c) ;
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.dInvFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError){
	vyyerror("Unknown dFunction (2) for BasisFunction: %s", yyvsp[-2].c);
	Get_Valid_SX3F2N(BF_Function);
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 262:
#line 2576 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 263:
#line 2581 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 264:
#line 2586 "GetDP.y"
    {
      if (!Nbr_Index)
	BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "BF_Support", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 265:
#line 2610 "GetDP.y"
    {
      if (!Nbr_Index) {
	if (yyvsp[-1].i >= 0) {
	  BasisFunction_S.EntityIndex = yyvsp[-1].i ;
	  if (Group_S.InitialList)
	    List_Sort(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	}
	else if (yyvsp[-1].i == -1) {
	  if (Group_S.InitialList)
	    List_Sort(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	  BasisFunction_S.EntityIndex = Add_Group(&Group_S, "BF_Entity", 1, 0) ;
	}
	else  vyyerror("Bad Group right hand side") ;

	if (BasisFunction_S.GlobalBasisFunction) {
	  if (Group_S.FunctionType == GLOBAL) {
	    if (List_Nbr(BasisFunction_S.GlobalBasisFunction) ==
		List_Nbr(Group_S.InitialList)) {
	      for (k = 0 ; k < List_Nbr(Group_S.InitialList) ; k++)
		if (*((int*)List_Pointer(Group_S.InitialList, k)) !=
		    *((int*)List_Pointer(BasisFunction_S.GlobalBasisFunction, k))) {
		  vyyerror("Bad correspondance between Group and Entity") ;
		  break ;
		}
	    }
	    else if (List_Nbr(Group_S.InitialList) != 0 ||
		     GlobalBasisFunction_S.EntityIndex != -1)
	      vyyerror("Bad correspondance between Group and Entity") ;
	  }
	  else  vyyerror("Bad correspondance between Group and Entity") ;
	}
      }
      else {
	List_Reset(ListOfEntityIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfEntityIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "BF_Entity", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfEntityIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 267:
#line 2670 "GetDP.y"
    { Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;}
    break;

  case 268:
#line 2673 "GetDP.y"
    {
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;}
    break;

  case 269:
#line 2682 "GetDP.y"
    {
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for multiple Formulation: %s {}", yyvsp[-12].c) ;

      for (k = 0 ; k < yyvsp[-11].i ; k++) {

	List_Read(ListOfInt_L, k, &i) ;
	List_Read(Problem_S.Group, i, &Group_S) ;
	if (List_Nbr(Group_S.InitialList) == 1) {
	  List_Read(Group_S.InitialList, 0, &i) ;
	  GlobalBasisFunction_S.EntityIndex = i ;
	}
	else if (List_Nbr(Group_S.InitialList) == 0) {
	  GlobalBasisFunction_S.EntityIndex = -1 ;
	}
	else
	  vyyerror("Only one Region needed in Group: %s", Group_S.Name) ;

	sprintf(StringAux1, "%s_%d_", yyvsp[-12].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, StringAux1,
				 fcmp_Formulation_Name)) < 0)
	  vyyerror("Unknown Formulation: %s {%d}", yyvsp[-12].c, k+1) ;
	else {
	  GlobalBasisFunction_S.FormulationIndex = i ;

	  sprintf(StringAux1, "%s_%d_", yyvsp[-3].c, k+1) ;
	  if ((i = List_ISearchSeq(Problem_S.Resolution, StringAux1,
				   fcmp_Resolution_Name)) < 0)
	    vyyerror("Unknown Resolution: %s {%d}", yyvsp[-3].c, k+1) ;
	  else {
	    GlobalBasisFunction_S.ResolutionIndex = i ;

	    GlobalBasisFunction_S.DefineQuantityIndex = -1 ;
	    GlobalBasisFunction_S.QuantityStorage = NULL ;
	    List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S) ;
	  }
	}
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;


      for (k = 0 ; k < yyvsp[-11].i ; k++) {
	List_Read(BasisFunction_S.GlobalBasisFunction, k, &GlobalBasisFunction_S) ;
	List_Read(Problem_S.Formulation,
		  GlobalBasisFunction_S.FormulationIndex, &Formulation_S) ;
	if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-15].c, 
				 fcmp_DefineQuantity_Name)) < 0) {
	  vyyerror("Unknown Quantity '%s' in Formulation '%s'", yyvsp[-15].c,
		   Formulation_S.Name) ;
	  break ;
	}
	else {
	  GlobalBasisFunction_S.DefineQuantityIndex = i ;
	  List_Write(BasisFunction_S.GlobalBasisFunction, k,
		     &GlobalBasisFunction_S) ;
	}
      }

      Free(yyvsp[-15].c) ; Free(yyvsp[-12].c) ; Free(yyvsp[-3].c) ;
    ;}
    break;

  case 270:
#line 2748 "GetDP.y"
    { yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;}
    break;

  case 271:
#line 2752 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;}
    break;

  case 272:
#line 2759 "GetDP.y"
    { SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;}
    break;

  case 274:
#line 2768 "GetDP.y"
    { Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;}
    break;

  case 275:
#line 2773 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 276:
#line 2776 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 277:
#line 2783 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", yyvsp[0].c) ;
      else {
	List_Add(yyval.l, &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   yyvsp[0].c, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add(yyval.l, &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 278:
#line 2799 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 279:
#line 2805 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 280:
#line 2808 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_Name)) < 0)
	vyyerror("Unknown BasisFunction: %s", yyvsp[0].c) ;
      else {
	List_Add(yyvsp[-2].l, &i) ; j = i+1 ;
	while ((i = List_ISearchSeqPartial(Current_BasisFunction_L,
					   yyvsp[0].c, j, fcmp_BasisFunction_Name)) >= 0) {
	  List_Add(yyvsp[-2].l, &i) ; j = i+1 ;  /* for piecewise defined basis functions */
	}
      }
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 281:
#line 2827 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", yyvsp[0].c) ;
      else {
	List_Add(yyval.l, &i) ; j = i+1 ;
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 282:
#line 2839 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 283:
#line 2845 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 284:
#line 2848 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", yyvsp[0].c) ;
      else {
	List_Add(yyvsp[-2].l, &i) ; j = i+1 ;
      }
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 285:
#line 2863 "GetDP.y"
    { yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;}
    break;

  case 286:
#line 2867 "GetDP.y"
    { GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;}
    break;

  case 287:
#line 2876 "GetDP.y"
    { GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 289:
#line 2887 "GetDP.y"
    { Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 290:
#line 2892 "GetDP.y"
    { GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 291:
#line 2902 "GetDP.y"
    { if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 292:
#line 2915 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
      else {
	List_Reset(ListOfConstraintInFS) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  FunctionSpace_S.Constraint =
	    List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
	  List_Add(ListOfConstraintInFS, &FunctionSpace_S.Constraint) ;
	}
	yyval.l = FunctionSpace_S.Constraint ;
      }
    ;}
    break;

  case 293:
#line 2930 "GetDP.y"
    {
      Group_S.FunctionType = Type_Function ;
      Group_S.SuppListType = Type_SuppList ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }

      if (!Nbr_Index && Constraint_Index >= 0) {
	Constraint_P = (struct Constraint *)
	  List_Pointer(Problem_S.Constraint, Constraint_Index) ;

	for (i = 0 ; i < List_Nbr(Constraint_P->ConstraintPerRegion) ; i++) {
	  ConstraintPerRegion_P = (struct ConstraintPerRegion *)
	    List_Pointer(Constraint_P->ConstraintPerRegion, i) ;

	  if (ConstraintPerRegion_P->RegionIndex >= 0) {
	    Group_S.InitialList =
	      ((struct Group *)
	       List_Pointer(Problem_S.Group, ConstraintPerRegion_P->RegionIndex))
	      ->InitialList ;
	    Group_S.InitialSuppList =
	      (ConstraintPerRegion_P->SubRegionIndex >= 0)?
	      ((struct Group *)
	       List_Pointer(Problem_S.Group,
			    ConstraintPerRegion_P->SubRegionIndex))
	      ->InitialList : NULL ;
	    ConstraintInFS_S.EntityIndex = Add_Group(&Group_S, "CO_Entity", 1, 0) ;
	    ConstraintInFS_S.ConstraintPerRegion = ConstraintPerRegion_P ;
	    
	    List_Add(yyval.l = yyvsp[-3].l, &ConstraintInFS_S) ;
	  }
	}
      }

      else if (Nbr_Index && List_Nbr(ListOfConstraintIndex)) {
	for (k = 0 ; k < Nbr_Index ; k++) {
	  List_Read(ListOfConstraintIndex, k, &Constraint_Index) ;
	  /* same as above... */
	  Constraint_P = (struct Constraint *)
	    List_Pointer(Problem_S.Constraint, Constraint_Index) ;

	  for (i = 0 ; i < List_Nbr(Constraint_P->ConstraintPerRegion) ; i++) {
	    ConstraintPerRegion_P = (struct ConstraintPerRegion *)
	      List_Pointer(Constraint_P->ConstraintPerRegion, i) ;

	    if (ConstraintPerRegion_P->RegionIndex >= 0) {
	      Group_S.InitialList =
		((struct Group *)
		 List_Pointer(Problem_S.Group, ConstraintPerRegion_P->RegionIndex))
		->InitialList ;
	      Group_S.InitialSuppList =
		(ConstraintPerRegion_P->SubRegionIndex >= 0)?
		((struct Group *)
		 List_Pointer(Problem_S.Group,
			      ConstraintPerRegion_P->SubRegionIndex))
		->InitialList : NULL ;
	      ConstraintInFS_S.EntityIndex = Add_Group(&Group_S, "CO_Entity", 1, 0) ;
	      ConstraintInFS_S.ConstraintPerRegion = ConstraintPerRegion_P ;
	      /* ... same */
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	      List_Add(FunctionSpace_S.Constraint, &ConstraintInFS_S) ;
	    }
	  }
	}
      }

    ;}
    break;

  case 294:
#line 3004 "GetDP.y"
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;}
    break;

  case 296:
#line 3020 "GetDP.y"
    { if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) {
	if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, yyvsp[-1].c,
				 fcmp_GlobalQuantity_Name)) < 0)
	  vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
	else {
	  ConstraintInFS_S.QuantityType   = GLOBALQUANTITY ;
	  ConstraintInFS_S.ReferenceIndex = i ;
	}
      }
      else {
	ConstraintInFS_S.QuantityType   = LOCALQUANTITY ;
	ConstraintInFS_S.ReferenceIndex = i ;
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 297:
#line 3053 "GetDP.y"
    { Type_Function = yyvsp[-1].i ; ;}
    break;

  case 298:
#line 3056 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; ;}
    break;

  case 299:
#line 3059 "GetDP.y"
    {
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex) {
	  Constraint_Index =
	    List_ISearchSeq(Problem_S.Constraint, yyvsp[-2].c, fcmp_Constraint_Name) ;
	}
	else {
	  vyyerror("Multiple Constraint out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfConstraintIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-2].c,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfConstraintIndex, &i) ;
	      Constraint_Index = i ;
	    }
	  }
	  else {
	    sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Constraint, StringAux1,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s {%d}", StringAux1, k+1) ;
	    else {
	      List_Add(ListOfConstraintIndex, &i) ;
	      Constraint_Index = i ;
	    }
	  }
	}
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 300:
#line 3105 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 302:
#line 3115 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Formulation, &Formulation_S) ;
      else {
	Save_Name = strsave(Formulation_S.Name) ;  Free(Formulation_S.Name) ;
	if (List_Nbr(ListOfDefineQuantity))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       StringAux1, fcmp_Formulation_Name) ;
	    Formulation_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Read(ListOfEquationTerm  , k, &Formulation_S.Equation      ) ;
	    List_Add(Problem_S.Formulation, &Formulation_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 305:
#line 3143 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 307:
#line 3155 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;}
    break;

  case 308:
#line 3161 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;}
    break;

  case 309:
#line 3168 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 311:
#line 3180 "GetDP.y"
    { Formulation_S.Equation = yyvsp[-1].l ; ;}
    break;

  case 312:
#line 3186 "GetDP.y"
    {
      if (!Nbr_Index)
	Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
      else {
	List_Reset(ListOfDefineQuantity) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Formulation_S.DefineQuantity =
	    List_Create(6, 6, sizeof (struct DefineQuantity)) ;
	  List_Add(ListOfDefineQuantity, &Formulation_S.DefineQuantity) ;
	}
      }
    ;}
    break;

  case 313:
#line 3200 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
      else {
	if (List_Nbr(ListOfFunctionSpaceIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfFunctionSpaceIndex, k, &DefineQuantity_S.FunctionSpaceIndex) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
	  }
      }
    ;}
    break;

  case 315:
#line 3220 "GetDP.y"
    { DefineQuantity_S.Name = NULL ;
      DefineQuantity_S.Type = LOCALQUANTITY ;
      DefineQuantity_S.IndexInFunctionSpace = NULL ;
      DefineQuantity_S.FunctionSpaceIndex = -1 ;
      DefineQuantity_S.DofDataIndex = -1 ;
      DefineQuantity_S.DofData = NULL ;
      DefineQuantity_S.DummyFrequency = NULL ;

      DefineQuantity_S.IntegralQuantity.InIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.Symmetry = 0 ;
      DefineQuantity_S.IntegralQuantity.WholeQuantity = NULL ;
    ;}
    break;

  case 317:
#line 3243 "GetDP.y"
    { DefineQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 318:
#line 3246 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 319:
#line 3250 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 320:
#line 3253 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 321:
#line 3264 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;}
    break;

  case 322:
#line 3270 "GetDP.y"
    {
      if (!Nbr_Index) {
	if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[0].c,
				 fcmp_FunctionSpace_Name)) < 0)
	  vyyerror("Unknown FunctionSpace: %s", yyvsp[0].c) ;
	else
	  DefineQuantity_S.FunctionSpaceIndex = i ;
      }
      else{ 
	vyyerror("Multiple Formulation out of context: %s {}", yyvsp[0].c) ;
      }
    ;}
    break;

  case 323:
#line 3283 "GetDP.y"
    { 
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == GLOBALQUANTITY &&
	    !DefineQuantity_S.IndexInFunctionSpace) {
	  if (DefineQuantity_S.Name) {
	    List_Read(Problem_S.FunctionSpace,
		      DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S) ;
	    if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, 
				     DefineQuantity_S.Name,
				     fcmp_GlobalQuantity_Name)) < 0) {
	      vyyerror("Unknown GlobalQuantity: %s", DefineQuantity_S.Name) ;
	    }
	    else {
	      DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	      List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	    }
	  }
	  else  vyyerror("No Name pre-defined for GlobalQuantity") ;
	}
      }
     
    ;}
    break;

  case 324:
#line 3310 "GetDP.y"
    {
      Flag_MultipleIndex = 1 ;

      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-2].c,
				   fcmp_FunctionSpace_Name)) < 0)
	    vyyerror("Unknown FunctionSpace: %s", yyvsp[-2].c) ;
	  else
	    DefineQuantity_S.FunctionSpaceIndex = i ;
	}
	else{ 
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfFunctionSpaceIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-2].c,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	  else {
	    sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, StringAux1,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s {%d}", StringAux1, k+1) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	}
      }
    ;}
    break;

  case 325:
#line 3351 "GetDP.y"
    { /* attention : doit disparaitre. */
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == GLOBALQUANTITY &&
	    !DefineQuantity_S.IndexInFunctionSpace) {
	  if (DefineQuantity_S.Name) {
	    List_Read(Problem_S.FunctionSpace,
		      DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S) ;
	    if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, 
				     DefineQuantity_S.Name,
				     fcmp_GlobalQuantity_Name)) < 0) {
	      vyyerror("Unknown GlobalQuantity: %s", DefineQuantity_S.Name) ;
	    }
	    else {
	      DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	      List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	    }
	  }
	  else  vyyerror("No Name pre-defined for GlobalQuantity") ;
	}
      }
      Free(yyvsp[-5].c) ;
    ;}
    break;

  case 326:
#line 3377 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;}
    break;

  case 327:
#line 3382 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 328:
#line 3388 "GetDP.y"
    { 
      DefineQuantity_S.IntegralQuantity.WholeQuantity = yyvsp[-2].l ;
      DefineQuantity_S.IntegralQuantity.DofIndexInWholeQuantity = 
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(DefineQuantity_S.IntegralQuantity.WholeQuantity, 0) ;

      /* Ce qui suit ne suffit pas : il faudrait aussi gerer des
	Quantity_def sans Dof */

      if (Current_DofIndexInWholeQuantity >= 0) {
	DefineQuantity_S.IntegralQuantity.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator ;
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
	DefineQuantity_S.FunctionSpaceIndex = 
	  ((struct DefineQuantity*)
	   List_Pointer(Formulation_S.DefineQuantity,
			DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof))->
	  FunctionSpaceIndex ;
      }
      else { /* No Dof{} */
	DefineQuantity_S.IntegralQuantity.TypeOperatorDof = NOOP ;
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexDof = -1 ;
      }

      if (Current_NoDofIndexInWholeQuantity >= 0) {
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No NoDof{} */
	DefineQuantity_S.IntegralQuantity.DefineQuantityIndexNoDof = -1 ;
      }

      /* Check if the WholeQuantity is a Canonical Form */

      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_NONE ;

      if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 1){

	/* GF_FUNCTION */	
	if ( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION ) {
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	   	  
	  if (!FlagError){	   
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }

	  DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF ;

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	    
	  
	}
      }

      else if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 3){
	
	/* GF_FUNCTION  OPER  DOF */
	if     ( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 1 ) {
	  
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	  
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }
	  
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_DOF ;
	    
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;
	}

	/* DOF OPER GF_FUNCTION */
	else if( (WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 0 ) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	    
	  }

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;/* Scalar Prod Transitive */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_DOF_PVEC_GF ;
	  
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;	 
	}

	/* GF_FUNCTION  OPER  EXPR */
	else if( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION &&
		 (WholeQuantity_P+1)->Type == WQ_EXPRESSION      &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR  ) {
	 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+0)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);
		  
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+1)->Case.Expression.Index ;
	    
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP ;
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_EXP ;
	  /*
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	  */
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	}	  
      
	/* EXPR OPER GF_FUNCTION */
	else if( (WholeQuantity_P+0)->Type == WQ_EXPRESSION      &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR  ) {
	 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct) ;
	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index ;
	  
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_EXP ;/* Transitive product */
	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF ;
	     
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;	 
	}
      }

      else if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 5){
	
	/* EXPR  OPER  GF_FUNCTION  OPER  DOF */
	if     ( (WholeQuantity_P+0)->Type == WQ_EXPRESSION          &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 (WholeQuantity_P+3)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+4)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 3 ) {

	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	  
	  }

	  DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
	    (WholeQuantity_P+0)->Case.Expression.Index ;

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PVEC_DOF ;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_PVEC_GF_PVEC_DOF ;
	  } 
	}

	/* FCT OPER  GF_FUNCTION  OPER  DOF */	
	else if( (WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+1)->Type == WQ_BUILTINFUNCTION     &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR      &&
		 (WholeQuantity_P+3)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+4)->Type == WQ_BINARYOPERATOR      &&
		 Current_DofIndexInWholeQuantity == 3 ) {
 
	  Get_FunctionForFunction(GF_Function,
				  (WholeQuantity_P+1)->Case.Function.Fct,
				  &FlagError,
				  &DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Fct);

	  if (!FlagError){
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+1)->Case.Function.Para ;	    
	  }

	  DefineQuantity_S.IntegralQuantity.AnyFunction.Fct =
	    (WholeQuantity_P+0)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.AnyFunction.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	

	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Fct =
	    (WholeQuantity_P+1)->Case.Function.Fct ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.NbrParameters =
	    (WholeQuantity_P+1)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForFMM.Para =
	    (WholeQuantity_P+1)->Case.Function.Para ;

	  if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_TIME_GF_PVEC_DOF ;
	  }
	  else if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT){
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PSCA_DOF ;
	    if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_FCT_PVEC_GF_PVEC_DOF ;
	  } 
	}
      }

      Pro_DefineQuantityIndex
	(DefineQuantity_S.IntegralQuantity.WholeQuantity,
	 -1,
	 &DefineQuantity_S.IntegralQuantity.NbrQuantityIndex,
	 &DefineQuantity_S.IntegralQuantity.QuantityIndexTable,
	 &DefineQuantity_S.IntegralQuantity.QuantityTraceGroupIndexTable) ;
      if(DefineQuantity_S.IntegralQuantity.NbrQuantityIndex > 1)
	vyyerror("More than one LocalQuantity in IntegralQuantity");

    ;}
    break;

  case 329:
#line 3699 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;}
    break;

  case 330:
#line 3704 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 331:
#line 3713 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 332:
#line 3722 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 333:
#line 3731 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;}
    break;

  case 335:
#line 3739 "GetDP.y"
    {
      if (DefineQuantity_S.FunctionSpaceIndex >= 0) {
	if (DefineQuantity_S.Type == LOCALQUANTITY) {
	  if ((i = List_ISearchSeq
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, yyvsp[-1].c,
		fcmp_SubSpace_Name)) < 0)
	    vyyerror("Unknown SubSpace: %s", yyvsp[-1].c) ;
	  else {
	    DefineQuantity_S.IndexInFunctionSpace =
	      ((struct SubSpace *)
	       List_Pointer
	       (((struct FunctionSpace *)
		 List_Pointer(Problem_S.FunctionSpace,
			      DefineQuantity_S.FunctionSpaceIndex))->SubSpace, i))
		->BasisFunction ;
	  }
	}
	else if (DefineQuantity_S.Type == GLOBALQUANTITY) {
	  List_Read(Problem_S.FunctionSpace,
		    DefineQuantity_S.FunctionSpaceIndex, &FunctionSpace_S) ;
	  if ((i = List_ISearchSeq(FunctionSpace_S.GlobalQuantity, 
				   yyvsp[-1].c, fcmp_GlobalQuantity_Name)) < 0) {
	    vyyerror("Unknown GlobalQuantity: %s", yyvsp[-1].c) ;
	  }
	  else {
	    DefineQuantity_S.IndexInFunctionSpace = List_Create(1, 1, sizeof(int));
	    List_Add(DefineQuantity_S.IndexInFunctionSpace, &i) ;
	  }
	}
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 336:
#line 3779 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = List_Create(6, 6, sizeof(struct EquationTerm)) ;
      else {
	List_Reset(ListOfEquationTerm) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Formulation_S.Equation =
	    List_Create(6, 6, sizeof (struct EquationTerm)) ;
	  List_Add(ListOfEquationTerm, &Formulation_S.Equation) ;
	}
	yyval.l = Formulation_S.Equation ;
      }
    ;}
    break;

  case 337:
#line 3794 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(yyval.l = yyvsp[-1].l, &EquationTerm_S) ;
      else {
	if (List_Nbr(ListOfSupportIndex))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (EquationTerm_S.Type == GALERKIN || EquationTerm_S.Type == DERHAM)
	      List_Read(ListOfSupportIndex, k,
			&EquationTerm_S.Case.LocalTerm.InIndex) ;
	    else if (EquationTerm_S.Type == GLOBALTERM)
	      List_Read(ListOfSupportIndex, k,
			&EquationTerm_S.Case.GlobalTerm.InIndex) ;
	    else if (EquationTerm_S.Type == GLOBALEQUATION)  /* Attention: Pas fait ! */
	      vyyerror("Multiple GlobalEquation not yet implemented in parser ...") ; 

	    List_Read(ListOfEquationTerm, k, &Formulation_S.Equation) ;

	    List_Add(Formulation_S.Equation, &EquationTerm_S) ;
	  }
	yyval.l = Formulation_S.Equation ;
      }
    ;}
    break;

  case 338:
#line 3818 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 339:
#line 3823 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 340:
#line 3832 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 341:
#line 3835 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 342:
#line 3838 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 343:
#line 3841 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 344:
#line 3852 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 346:
#line 3863 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 347:
#line 3873 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 348:
#line 3883 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 349:
#line 3897 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 351:
#line 3909 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;}
    break;

  case 352:
#line 3911 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;}
    break;

  case 353:
#line 3913 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;}
    break;

  case 354:
#line 3915 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;}
    break;

  case 355:
#line 3923 "GetDP.y"
    { EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = NODT_ ;
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = NOOP ;
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = NOOP ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = NULL ;
      EquationTerm_S.Case.LocalTerm.Term.DofIndexInWholeQuantity = -1 ;
      EquationTerm_S.Case.LocalTerm.Term.DofInTrace = 0 ;
      EquationTerm_S.Case.LocalTerm.InIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.MatrixIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.Active = NULL ;
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 0 ;
    ;}
    break;

  case 357:
#line 3948 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 358:
#line 3956 "GetDP.y"
    { EquationTerm_S.Case.LocalTerm.Term.WholeQuantity = yyvsp[0].l ;

      EquationTerm_S.Case.LocalTerm.Term.DofIndexInWholeQuantity =
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity, 0) ;

      if (Current_DofIndexInWholeQuantity == -4){
	EquationTerm_S.Case.LocalTerm.Term.DofInTrace = 1 ;
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = 
	  TypeOperatorDofInTrace ;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = 
	  DefineQuantityIndexDofInTrace ;
      }
      else if (Current_DofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator ;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No Dof{} */
	EquationTerm_S.Case.LocalTerm.Term.TypeOperatorDof = NOOP ;
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof = -1 ;
      }

      if (Current_NoDofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No NoDof{} */
	EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      }

      /* Check if the WholeQuantity is a Canonical Form of type 'expr[] * Dof{}'*/

      if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_EXPRESSION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity =
	  CWQ_EXP_TIME_DOF ;
	EquationTerm_S.Case.LocalTerm.Term.ExpressionIndexForCanonical =
	  (WholeQuantity_P+0)->Case.Expression.Index ;
      }
      else if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_BUILTINFUNCTION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	if ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_TIME_DOF ;
	if ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	  EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_FCT_PVEC_DOF ;
	    
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Fct =
	  (WholeQuantity_P+0)->Case.Function.Fct ;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.NbrParameters =
	  (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	EquationTerm_S.Case.LocalTerm.Term.FunctionForCanonical.Para =
	  (WholeQuantity_P+0)->Case.Function.Para ;
      }
      else if ((List_Nbr(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity) == 1) &&
	       ((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY) &&
	       (Current_DofIndexInWholeQuantity == 0)) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_DOF ;
      }
      else {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity = CWQ_NONE ;
      }

    ;}
    break;

  case 359:
#line 4035 "GetDP.y"
    { 
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE ;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer(yyvsp[-2].l, 0) ;

      if (List_Nbr(yyvsp[-2].l) == 1){
	if ((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  vyyerror("Missing Quantity in Equation");
      }
      else if (List_Nbr(yyvsp[-2].l) == 3 &&
	       ( (WholeQuantity_P+0)->Type == WQ_EXPRESSION &&
		 (WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY &&
		 (WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR ) ) {
	EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = 
	  CWQ_EXP_TIME_DOF ;
	EquationTerm_S.Case.LocalTerm.Term.ExpressionIndexForCanonical_Equ = 
	  (WholeQuantity_P+0)->Case.Expression.Index ;
	EquationTerm_S.Case.LocalTerm.Term.OperatorTypeForCanonical_Equ =
	  (WholeQuantity_P+2)->Case.Operator.TypeOperator ;
      }
      else{
	vyyerror("Unrecognized quantity structure in Equation");
      }

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.LocalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.LocalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.LocalTerm.Term.QuantityTraceGroupIndexTable) ;

      EquationTerm_S.Case.LocalTerm.Term.QuantityIndexPost = 0 ;
      for (i = 0 ; i < EquationTerm_S.Case.LocalTerm.Term.NbrQuantityIndex ; i++) {
	if ((EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable[i] !=
	     EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu) &&
	    (EquationTerm_S.Case.LocalTerm.Term.QuantityIndexTable[i] !=
	     EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexDof)) {
	  EquationTerm_S.Case.LocalTerm.Term.QuantityIndexPost = 1 ;
	  break ;
	}
      }
    ;}
    break;

  case 360:
#line 4081 "GetDP.y"
    {
      if (!Nbr_Index)
	EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "FO_In", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 361:
#line 4105 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 362:
#line 4114 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 363:
#line 4123 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 364:
#line 4128 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 365:
#line 4137 "GetDP.y"
    { if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;}
    break;

  case 366:
#line 4148 "GetDP.y"
    { EquationTerm_S.Case.GlobalTerm.TypeTimeDerivative = NODT_ ;
      EquationTerm_S.Case.GlobalTerm.DefineQuantityIndex = -1 ;

      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = NODT_ ;
      EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = NOOP ;
      EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof = NOOP ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = -1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof = -1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = NULL ;
      EquationTerm_S.Case.GlobalTerm.Term.DofIndexInWholeQuantity = -1 ;
      EquationTerm_S.Case.GlobalTerm.InIndex = -1 ;
    ;}
    break;

  case 368:
#line 4177 "GetDP.y"
    {
      if (!Nbr_Index)
	EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
      else {
	List_Reset(ListOfSupportIndex) ;
	if (yyvsp[-1].i >= 0) {
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    if (Flag_MultipleIndex)  List_Read(ListOfInt_L, k, &i) ;
	    else                     i = yyvsp[-1].i ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else if (yyvsp[-1].i == -1) {
	  Add_Group_Index(&Group_S, "FO_In", 1) ;
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfInt_L, k, &i) ;
	    List_Add(ListOfSupportIndex, &i) ;
	  }
	}
	else  vyyerror("Bad Group right hand side") ;
      }
    ;}
    break;

  case 369:
#line 4201 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 370:
#line 4209 "GetDP.y"
    { EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity = yyvsp[0].l ;

      EquationTerm_S.Case.GlobalTerm.Term.DofIndexInWholeQuantity =
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity, 0) ;

      if (Current_DofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.TypeOperator ;
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof =
	  (WholeQuantity_P+Current_DofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No Dof{} */
	EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorDof = NOOP ;
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexDof = -1 ;
      }

      if (Current_NoDofIndexInWholeQuantity >= 0) {
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof =
	  (WholeQuantity_P+Current_NoDofIndexInWholeQuantity)->
	    Case.OperatorAndQuantity.Index ;
      }
      else { /* No NoDof{} */
	EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexNoDof = -1 ;
      }

      /* Check if the WholeQuantity is a Canonical Form of type 'expr[] * Dof{}'*/

      if ((List_Nbr(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity) == 3) &&
	  ((WholeQuantity_P+0)->Type == WQ_EXPRESSION) &&
	  ((WholeQuantity_P+1)->Type == WQ_OPERATORANDQUANTITY) &&
	  ((WholeQuantity_P+2)->Type == WQ_BINARYOPERATOR) &&
	  ((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME) &&
	  (Current_DofIndexInWholeQuantity == 1)) {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity =
	  CWQ_EXP_TIME_DOF ;
	EquationTerm_S.Case.GlobalTerm.Term.ExpressionIndexForCanonical =
	  (WholeQuantity_P+0)->Case.Expression.Index ;
      }
      else if ((List_Nbr(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity) == 1) &&
	       ((WholeQuantity_P+0)->Type == WQ_OPERATORANDQUANTITY) &&
	       (Current_DofIndexInWholeQuantity == 0)) {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity = CWQ_DOF ;
      }
      else {
	EquationTerm_S.Case.GlobalTerm.Term.CanonicalWholeQuantity = CWQ_NONE ;
      }

    ;}
    break;

  case 371:
#line 4264 "GetDP.y"
    { EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = yyvsp[-2].t.Int1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = yyvsp[-2].t.Int2 ;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable) ;
    ;}
    break;

  case 372:
#line 4281 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 373:
#line 4282 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 374:
#line 4283 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 375:
#line 4284 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 376:
#line 4285 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 377:
#line 4286 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 378:
#line 4287 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 379:
#line 4288 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 380:
#line 4295 "GetDP.y"
    { yyval.t.Int1 = Get_DefineForString(Operator_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown Operator for discrete Quantity: %s", yyvsp[-2].c);
	Get_Valid_SXD(Operator_Type);
      }
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", yyvsp[-1].c) ;
      yyval.t.Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = yyval.t.Int1 ;
      Quantity_Index = yyval.t.Int2 ;

      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 381:
#line 4316 "GetDP.y"
    { yyval.t.Int1 = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown discrete Quantity: %s", yyvsp[-1].c) ;
      yyval.t.Int2 = i ;

      /* the following should be suppressed as soon as the test
         function part in the formulations is correctly treated */
      Quantity_TypeOperator = yyval.t.Int1 ;
      Quantity_Index = yyval.t.Int2 ;

      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 382:
#line 4340 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 384:
#line 4350 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Resolution, &Resolution_S) ;
      else {
	Save_Name = strsave(Resolution_S.Name) ;  Free(Resolution_S.Name) ;
	if (List_Nbr(ListOfDefineSystem))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				       StringAux1, fcmp_Resolution_Name) ;
	    Resolution_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Problem_S.Resolution, &Resolution_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 387:
#line 4377 "GetDP.y"
    { Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 389:
#line 4389 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 390:
#line 4396 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;}
    break;

  case 391:
#line 4403 "GetDP.y"
    { Resolution_S.DefineSystem = yyvsp[-1].l ; ;}
    break;

  case 392:
#line 4406 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 393:
#line 4408 "GetDP.y"
    { Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;}
    break;

  case 395:
#line 4416 "GetDP.y"
    {
      if (!Nbr_Index)
	yyval.l = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
      else {
	List_Reset(ListOfDefineSystem) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  Resolution_S.DefineSystem =
	    List_Create(6, 6, sizeof (struct DefineSystem)) ;
	  List_Add(ListOfDefineSystem, &Resolution_S.DefineSystem) ;
	}
	yyval.l = Current_System_L = Resolution_S.DefineSystem ;
      }
    ;}
    break;

  case 396:
#line 4431 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(yyval.l = Current_System_L = yyvsp[-3].l, &DefineSystem_S) ;
      else {
	if (List_Nbr(ListOfListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    List_Read(ListOfListOfFormulation, k, &DefineSystem_S.FormulationIndex) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Resolution_S.DefineSystem, &DefineSystem_S) ;
	  }
	yyval.l = Current_System_L = Resolution_S.DefineSystem ;
      }
    ;}
    break;

  case 397:
#line 4446 "GetDP.y"
    {
       yyval.l = yyvsp[-1].l ;
     ;}
    break;

  case 398:
#line 4456 "GetDP.y"
    { DefineSystem_S.Name = NULL ;  
      DefineSystem_S.Type = VAL_REAL ;
      DefineSystem_S.FormulationIndex = NULL ;
      DefineSystem_S.MeshName = NULL ;
      DefineSystem_S.AdaptName = NULL ;
      DefineSystem_S.FrequencyValue = NULL ;
      DefineSystem_S.SolverDataFileName = NULL ;
      DefineSystem_S.OriginSystemIndex = NULL ;
      DefineSystem_S.DestinationSystemName = NULL ;
      DefineSystem_S.DestinationSystemIndex = -1 ;
      DefineSystem_S.Flag_FMM = 0 ;
    ;}
    break;

  case 400:
#line 4476 "GetDP.y"
    { DefineSystem_S.Name = yyvsp[-1].c ; ;}
    break;

  case 401:
#line 4479 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 402:
#line 4488 "GetDP.y"
    { DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;}
    break;

  case 403:
#line 4491 "GetDP.y"
    {
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;}
    break;

  case 404:
#line 4496 "GetDP.y"
    { 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;}
    break;

  case 405:
#line 4501 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;}
    break;

  case 406:
#line 4506 "GetDP.y"
    { DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 407:
#line 4511 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;}
    break;

  case 409:
#line 4521 "GetDP.y"
    {
      if (!Nbr_Index) {
	yyval.l = List_Create(1, 1, sizeof(int)) ;
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-1].c, fcmp_Formulation_Name)) < 0)
	    vyyerror("Unknown Formulation: %s", yyvsp[-1].c) ;
	  else  List_Add(yyval.l, &i) ;
	}
	else{
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-1].c) ;
	}
      }
      else {
	List_Reset(ListOfListOfFormulation) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  DefineSystem_S.FormulationIndex = List_Create(1, 1, sizeof(int)) ;
	  List_Add(ListOfListOfFormulation, &DefineSystem_S.FormulationIndex) ;

	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-1].c,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s", yyvsp[-1].c) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	  else {
	    sprintf(StringAux1, "%s_%d_", yyvsp[-1].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, StringAux1,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", yyvsp[-1].c, k+1) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	}
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 410:
#line 4558 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 411:
#line 4565 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 412:
#line 4568 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 413:
#line 4580 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 414:
#line 4590 "GetDP.y"
    { yyval.l = yyvsp[-1].l ;  ;}
    break;

  case 415:
#line 4596 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 416:
#line 4599 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 417:
#line 4611 "GetDP.y"
    { 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 418:
#line 4619 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 419:
#line 4632 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", yyvsp[-2].c);
	Get_Valid_SXD(Operation_Type);
      }
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;      
    ;}
    break;

  case 420:
#line 4654 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;}
    break;

  case 421:
#line 4661 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 422:
#line 4667 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 423:
#line 4673 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 424:
#line 4679 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 425:
#line 4687 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-4].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Operation: %s", yyvsp[-4].c);
	Get_Valid_SXD(Operation_Type);
      }
      Free(yyvsp[-4].c) ;
      
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-2].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->DefineSystemIndex = i ;

      if (Operation_P->Type == OPERATION_GENERATE || 
	  Operation_P->Type == OPERATION_GENERATEJAC ||
	  Operation_P->Type == OPERATION_GENERATESEPARATE)
	Operation_P->Case.Generate.GroupIndex = -1 ;
    ;}
    break;

  case 426:
#line 4709 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;}
    break;

  case 427:
#line 4716 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 428:
#line 4722 "GetDP.y"
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = yyvsp[-4].i ;
      Operation_P->Case.Test.Operation_True = yyvsp[-1].l ;
      Operation_P->Case.Test.Operation_False = NULL ;
    ;}
    break;

  case 429:
#line 4733 "GetDP.y"
    { 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = yyvsp[-8].i ;
      Operation_P->Case.Test.Operation_True = yyvsp[-5].l ;
      Operation_P->Case.Test.Operation_False = yyvsp[-1].l ;
    ;}
    break;

  case 430:
#line 4744 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = yyvsp[-2].i ;
    ;}
    break;

  case 431:
#line 4757 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-8].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-6].i;
      Operation_P->Case.GenerateFMMGroups.Precision = yyvsp[-4].i;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = yyvsp[-2].i;      
    ;}
    break;

  case 432:
#line 4772 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-6].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-4].i;
      Operation_P->Case.GenerateFMMGroups.Precision = yyvsp[-2].i;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;}
    break;

  case 433:
#line 4787 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEFMMGROUPS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateFMMGroups.DivXYZIndex = yyvsp[-4].i;      
      Operation_P->Case.GenerateFMMGroups.Dfar = yyvsp[-2].i;
      Operation_P->Case.GenerateFMMGroups.Precision = -1;
      Operation_P->Case.GenerateFMMGroups.FlagDTA = -1;      
    ;}
    break;

  case 434:
#line 4802 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr(yyvsp[-2].l),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr(yyvsp[-2].l) ; i++){
	List_Read(yyvsp[-2].l,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete(yyvsp[-2].l); 
    ;}
    break;

  case 435:
#line 4822 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_GENERATEONLYJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.GenerateOnly.MatrixIndex_L =
	List_Create(List_Nbr(yyvsp[-2].l),1,sizeof(int));
     
      for(i=0 ; i<List_Nbr(yyvsp[-2].l) ; i++){
	List_Read(yyvsp[-2].l,i,&d);
	j = (int)d ;
	List_Add(Operation_P->Case.GenerateOnly.MatrixIndex_L, &j);
      }
      List_Delete(yyvsp[-2].l); 
    ;}
    break;

  case 436:
#line 4843 "GetDP.y"
    { Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
                               fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Update.ExpressionIndex = yyvsp[-2].i ;
    ;}
    break;

  case 437:
#line 4855 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
    Operation_P->Type = OPERATION_UPDATECONSTRAINT ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.UpdateConstraint.GroupIndex =
	Num_Group(&Group_S, "OP_UpdateCst", yyvsp[-4].i) ;
      Operation_P->Case.UpdateConstraint.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-2].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 438:
#line 4875 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform.Frequency = yyvsp[-2].l;
    ;}
    break;

  case 439:
#line 4892 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM2 ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform2.Period = yyvsp[-2].d;
      Operation_P->Case.FourierTransform2.Period_sofar = 0.;
      Operation_P->Case.FourierTransform2.Scales = NULL;
    ;}
    break;

  case 440:
#line 4911 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_LANCZOS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Lanczos.Size = (int)yyvsp[-6].d ;
      Operation_P->Case.Lanczos.Save = 
	List_Create(List_Nbr(yyvsp[-4].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[-4].l) ; i++) {
	List_Read(yyvsp[-4].l, i, &Value) ;
	j = (int)Value ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      List_Delete(yyvsp[-4].l);
      Operation_P->Case.Lanczos.Shift = yyvsp[-2].d ;
    ;}
    break;

  case 441:
#line 4933 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PERTURBATION ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-14].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-14].c) ;
      Free(yyvsp[-14].c) ;
      Operation_P->DefineSystemIndex = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-12].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-12].c) ;
      Free(yyvsp[-12].c) ;
      Operation_P->Case.Perturbation.DefineSystemIndex2 = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->Case.Perturbation.DefineSystemIndex3 = i ;
      Operation_P->Case.Perturbation.Size = (int)yyvsp[-8].d ;
      Operation_P->Case.Perturbation.Save = 
	List_Create(List_Nbr(yyvsp[-6].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[-6].l) ; i++) {
	List_Read(yyvsp[-6].l, i, &Value) ;
	j = (int)Value ;
	List_Add(Operation_P->Case.Perturbation.Save, &j) ;
      }
      List_Delete(yyvsp[-6].l);
      Operation_P->Case.Perturbation.Shift = yyvsp[-4].d ;
      Operation_P->Case.Perturbation.PertFreq = (int)yyvsp[-2].d ;
    ;}
    break;

  case 442:
#line 4967 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
      Operation_P->Case.TimeLoopTheta.Time0 = yyvsp[-10].d ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-8].d ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-6].i ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-4].i ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 443:
#line 4980 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
      Operation_P->Case.TimeLoopNewmark.Time0 = yyvsp[-12].d ; 
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-10].d ; 
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-8].i ; 
      Operation_P->Case.TimeLoopNewmark.Beta = yyvsp[-6].d ; 
      Operation_P->Case.TimeLoopNewmark.Gamma = yyvsp[-4].d ; 
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 444:
#line 4994 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-6].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-4].i ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 445:
#line 5007 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-10].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-6].i ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-4].d ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 446:
#line 5019 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 448:
#line 5028 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 450:
#line 5037 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = -1 ; 
    ;}
    break;

  case 451:
#line 5048 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-8].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-6].i ;
      Operation_P->Case.ChangeOfCoordinates.NumNode = (int)yyvsp[-4].d ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = yyvsp[-2].i ; 
    ;}
    break;

  case 452:
#line 5060 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;}
    break;

  case 453:
#line 5070 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;}
    break;

  case 454:
#line 5078 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SOLVEJACADAPTRELAX ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SolveJac_AdaptRelax.CheckAll = (int)yyvsp[-2].d ;
      Operation_P->Case.SolveJac_AdaptRelax.Factor_L = yyvsp[-4].l ; 
    ;}
    break;

  case 455:
#line 5091 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = (int)yyvsp[-4].d ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = yyvsp[-2].c ;
    ;}
    break;

  case 456:
#line 5104 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONMHTOTIME ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionMHtoTime.Time = yyvsp[-4].l ;
      Operation_P->Case.SaveSolutionMHtoTime.ResFile = yyvsp[-2].c ;
    ;}
    break;

  case 457:
#line 5118 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 458:
#line 5128 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 459:
#line 5138 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-6].i) ;
      Operation_P->Case.SaveMesh.FileName = yyvsp[-4].c ;
      Operation_P->Case.SaveMesh.ExprIndex = yyvsp[-2].i ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;}
    break;

  case 460:
#line 5152 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-4].i) ;
      Operation_P->Case.SaveMesh.FileName = yyvsp[-2].c ;
      Operation_P->Case.SaveMesh.ExprIndex = -1 ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;}
    break;

  case 461:
#line 5166 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-11].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-9].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING ;
      Operation_P->Case.Generate_MH_Moving.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving.Period  = yyvsp[-7].d ;
      Operation_P->Case.Generate_MH_Moving.NbrStep = (int)yyvsp[-5].d ;
      Operation_P->Case.Generate_MH_Moving.Operation = yyvsp[-2].l ;
    ;}
    break;

  case 462:
#line 5185 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-11].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-9].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING_S ;
      Operation_P->Case.Generate_MH_Moving_S.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving_S.Period  = yyvsp[-7].d ;
      Operation_P->Case.Generate_MH_Moving_S.NbrStep = (int)yyvsp[-5].d ;
      Operation_P->Case.Generate_MH_Moving_S.Operation = yyvsp[-2].l ;
    ;}
    break;

  case 463:
#line 5203 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Type = OPERATION_ADD_MH_MOVING ;
      Operation_P->Case.Add_MH_Moving.dummy = yyvsp[-2].d ;
    ;}
    break;

  case 464:
#line 5214 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-9].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-7].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = yyvsp[-4].c ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = yyvsp[-2].d ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 465:
#line 5229 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-7].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-7].c) ;
      Free(yyvsp[-7].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-5].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = yyvsp[-2].c ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 466:
#line 5244 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.DeformeMesh.Quantity = yyvsp[-2].c ;
      Operation_P->Case.DeformeMesh.Name_MshFile = NULL ;
      Operation_P->Case.DeformeMesh.GeoDataIndex = -1 ;
      Operation_P->Case.DeformeMesh.Factor = 1 ;
      Operation_P->Type = OPERATION_DEFORMEMESH ;
    ;}
    break;

  case 467:
#line 5259 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;}
    break;

  case 468:
#line 5274 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATEJAC ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;}
    break;

  case 469:
#line 5289 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 470:
#line 5300 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 471:
#line 5305 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 472:
#line 5315 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 474:
#line 5325 "GetDP.y"
    { Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;}
    break;

  case 475:
#line 5328 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 476:
#line 5338 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 477:
#line 5354 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 479:
#line 5370 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;}
    break;

  case 480:
#line 5374 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 481:
#line 5378 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 482:
#line 5382 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;}
    break;

  case 483:
#line 5387 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 484:
#line 5398 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = 0. ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = 1. ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopNewmark.Beta   = 0.25 ;
      Operation_P->Case.TimeLoopNewmark.Gamma  = 0.5 ;
      Operation_P->Case.TimeLoopNewmark.Operation = NULL ;
    ;}
    break;

  case 486:
#line 5415 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;}
    break;

  case 487:
#line 5419 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 488:
#line 5423 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 489:
#line 5427 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;}
    break;

  case 490:
#line 5431 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;}
    break;

  case 491:
#line 5436 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 492:
#line 5447 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 494:
#line 5462 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 495:
#line 5466 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;}
    break;

  case 496:
#line 5470 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;}
    break;

  case 497:
#line 5474 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 498:
#line 5478 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 499:
#line 5489 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration     = 20 ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = 2. ;
      Operation_P->Case.IterativeTimeReduction.Criterion           = 1.e-3 ;
      Operation_P->Case.IterativeTimeReduction.Flag                = 0 ;
      Current_System = Operation_P->DefineSystemIndex              = -1 ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState       = NULL ;
      Operation_P->Case.IterativeTimeReduction.Operation           = NULL ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd        = NULL ;
    ;}
    break;

  case 501:
#line 5507 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 502:
#line 5511 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;}
    break;

  case 503:
#line 5515 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;}
    break;

  case 504:
#line 5519 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 505:
#line 5524 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 506:
#line 5534 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;}
    break;

  case 507:
#line 5540 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 508:
#line 5546 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;}
    break;

  case 509:
#line 5556 "GetDP.y"
    { yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 510:
#line 5559 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;}
    break;

  case 511:
#line 5564 "GetDP.y"
    {
      ChangeOfState_S.Type = CHANGEOFSTATE_CHANGESIGN ;
      ChangeOfState_S.QuantityIndex       = -1 ;
      ChangeOfState_S.FormulationIndex    = -1 ;
      ChangeOfState_S.InIndex             = -1 ;
      ChangeOfState_S.Criterion           = 1.e-2 ;
      ChangeOfState_S.ExpressionIndex = ChangeOfState_S.ExpressionIndex2 = -1 ;
      ChangeOfState_S.FlagIndex           = -1 ;
      ChangeOfState_S.ActiveList[0]       = NULL ;
      ChangeOfState_S.ActiveList[1]       = NULL ;
    ;}
    break;

  case 513:
#line 5582 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 514:
#line 5592 "GetDP.y"
    {
      if (Current_System >= 0) {
	ListOfInt_Lnew =
	  ((struct DefineSystem *)List_Pointer(Resolution_S.DefineSystem,
					       Current_System))->FormulationIndex ;
	ListOfInt_P =(int *)List_Pointer(ListOfInt_Lnew, 0) ;

	for (j=0 ; j<List_Nbr(ListOfInt_Lnew) ; j++) {
	  Formulation_S.DefineQuantity =
	    ((struct Formulation *)
	     List_Pointer(Problem_S.Formulation, ListOfInt_P[j]))->DefineQuantity ;

	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
				   fcmp_DefineQuantity_Name)) >= 0)
	    break ;
	}
	if (j<List_Nbr(ListOfInt_Lnew)) {
	  ChangeOfState_S.FormulationIndex = ListOfInt_P[j] ;
	  ChangeOfState_S.QuantityIndex = i ;
	}
	else
	  vyyerror("Unknown discrete Quantity: %s", yyvsp[-1].c) ;
      }
      else
	vyyerror("System undefined for Quantity: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 515:
#line 5621 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;}
    break;

  case 516:
#line 5624 "GetDP.y"
    { ChangeOfState_S.Criterion = yyvsp[-1].d ; ;}
    break;

  case 517:
#line 5627 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;}
    break;

  case 518:
#line 5635 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 519:
#line 5652 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 521:
#line 5664 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
      else {
	Save_Name = strsave(PostProcessing_S.Name) ;  Free(PostProcessing_S.Name) ;
	if (List_Nbr(ListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(StringAux1, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       StringAux1, fcmp_Formulation_Name) ;
	    PostProcessing_S.Name = strsave(StringAux1) ;
	    List_Read(ListOfFormulation, k, &PostProcessing_S.FormulationIndex) ;
	    List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 523:
#line 5687 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 525:
#line 5701 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 526:
#line 5708 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;}
    break;

  case 527:
#line 5716 "GetDP.y"
    { 
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-2].c,
				   fcmp_Formulation_Name)) < 0){
	    vyyerror("Unknown Formulation: %s", yyvsp[-2].c) ;
	  }
	  else {
	    PostProcessing_S.FormulationIndex = i ;
	    List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	  }
	}
	else{
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-2].c) ;
	}
      }
      else {
	List_Reset(ListOfFormulation) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-2].c,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s", yyvsp[-2].c) ;
	    else {
	      List_Add(ListOfFormulation, &i) ;
	      PostProcessing_S.FormulationIndex = i ;
	      List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	    }
	  }
	  else {
	    sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, StringAux1,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", yyvsp[-2].c, k+1) ;
	    else {
	      List_Add(ListOfFormulation, &i) ;
	      PostProcessing_S.FormulationIndex = i ;
	      List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	    }
	  }
	}
      }
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 528:
#line 5762 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;}
    break;

  case 529:
#line 5767 "GetDP.y"
    { PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;}
    break;

  case 530:
#line 5773 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 531:
#line 5776 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;}
    break;

  case 532:
#line 5779 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 533:
#line 5781 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 534:
#line 5787 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 536:
#line 5798 "GetDP.y"
    { PostQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 537:
#line 5801 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;}
    break;

  case 538:
#line 5807 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 539:
#line 5812 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;}
    break;

  case 540:
#line 5818 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, yyvsp[-3].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s", yyvsp[-3].c);
	Get_Valid_SXD(PostQuantityTerm_EvaluationType);
      }
      Free(yyvsp[-3].c) ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;}
    break;

  case 541:
#line 5832 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 543:
#line 5846 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 544:
#line 5853 "GetDP.y"
    { PostQuantityTerm_S.WholeQuantity = yyvsp[-2].l ;

      Pro_DefineQuantityIndex
	(PostQuantityTerm_S.WholeQuantity, -1,
	 &PostQuantityTerm_S.NbrQuantityIndex, 
	 &PostQuantityTerm_S.QuantityIndexTable,
	 &PostQuantityTerm_S.QuantityTraceGroupIndexTable) ;
      if (!PostQuantityTerm_S.Type) {
	PostQuantityTerm_S.Type = 0 ;
	for (i = 0 ; i < PostQuantityTerm_S.NbrQuantityIndex ; i++) {
	  if (PostQuantityTerm_S.QuantityIndexTable[i] >= 0)
	    j = ((struct DefineQuantity *)
		 List_Pointer
		 (((struct Formulation *)
		   List_Pointer(Problem_S.Formulation,
				PostProcessing_S.FormulationIndex))->DefineQuantity,
		  PostQuantityTerm_S.QuantityIndexTable[i])) -> Type ;
	  if (PostQuantityTerm_S.Type == 0)
	    PostQuantityTerm_S.Type = j ;
	  else if (PostQuantityTerm_S.Type != j)	  
	    yyerror("Mixed discrete Quantity types in term (should be split in separate terms)") ;
	}
	if (PostQuantityTerm_S.Type == 0)  PostQuantityTerm_S.Type = LOCALQUANTITY ;
      }

    ;}
    break;

  case 545:
#line 5881 "GetDP.y"
    { /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError){
       vyyerror("Unknown type of Operation: %s", yyvsp[-1].c);
       Get_Valid_SXD(DefineQuantity_Type);
     }
     Free(yyvsp[-1].c) ;
   ;}
    break;

  case 546:
#line 5891 "GetDP.y"
    { Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;}
    break;

  case 547:
#line 5892 "GetDP.y"
    { 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;}
    break;

  case 548:
#line 5898 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 549:
#line 5907 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 550:
#line 5924 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 552:
#line 5936 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 555:
#line 5945 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 557:
#line 5957 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 558:
#line 5964 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, yyvsp[-1].c,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", yyvsp[-1].c) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 559:
#line 5976 "GetDP.y"
    { 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", yyvsp[-1].c);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 560:
#line 5987 "GetDP.y"
    { 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;}
    break;

  case 561:
#line 5992 "GetDP.y"
    { PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;}
    break;

  case 562:
#line 5998 "GetDP.y"
    {
      PostOperation_S.PostProcessingIndex = -1 ;
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, yyvsp[0].c,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", yyvsp[0].c) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
	if (!Problem_S.PostOperation)
	  Problem_S.PostOperation = List_Create(5, 5, sizeof (struct PostOperation)) ;
	PostOperation_S.Name = yyvsp[-2].c ;
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 563:
#line 6015 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 564:
#line 6025 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 565:
#line 6028 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 566:
#line 6032 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 567:
#line 6045 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 568:
#line 6049 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;}
    break;

  case 569:
#line 6055 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;}
    break;

  case 570:
#line 6061 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 571:
#line 6068 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 572:
#line 6076 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 573:
#line 6082 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;}
    break;

  case 574:
#line 6087 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 575:
#line 6092 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;}
    break;

  case 576:
#line 6101 "GetDP.y"
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-2].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-2].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      PostSubOperation_S.PostQuantitySupport[0] = yyvsp[-1].i ;
      PostSubOperation_S.PostQuantitySupport[1] = -1 ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 577:
#line 6113 "GetDP.y"
    {
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-5].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-5].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantitySupport[0] = yyvsp[-4].i ;

      if ((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-2].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-2].c) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;
      PostSubOperation_S.PostQuantitySupport[1] = yyvsp[-1].i ;

      if ((yyvsp[-4].i<0 && yyvsp[-1].i<0) || (yyvsp[-4].i>=0 && yyvsp[-1].i>=0)) {
	vyyerror("Postprocessing Quantities '%s' and '%s' of same type (%s)", 
		 yyvsp[-5].c, yyvsp[-2].c, (yyvsp[-4].i>0)? "with Support":"without Support") ;
      }      
      Free(yyvsp[-5].c) ; Free(yyvsp[-2].c) ;
    ;}
    break;

  case 578:
#line 6136 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 579:
#line 6137 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 580:
#line 6138 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 581:
#line 6139 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 582:
#line 6145 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 583:
#line 6147 "GetDP.y"
    { yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;}
    break;

  case 584:
#line 6153 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 585:
#line 6159 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;}
    break;

  case 586:
#line 6166 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;}
    break;

  case 587:
#line 6175 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONSECTION_2D ;
      if(List_Nbr(yyvsp[-8].l)!=3 || List_Nbr(yyvsp[-5].l)!=3 || List_Nbr(yyvsp[-2].l)!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr(yyvsp[-8].l), List_Nbr(yyvsp[-5].l), List_Nbr(yyvsp[-2].l));
      else{
	List_Read(yyvsp[-8].l, 0, &PostSubOperation_S.Case.OnSection.x[0]);
	List_Read(yyvsp[-8].l, 1, &PostSubOperation_S.Case.OnSection.y[0]);
	List_Read(yyvsp[-8].l, 2, &PostSubOperation_S.Case.OnSection.z[0]);
	List_Read(yyvsp[-5].l, 0, &PostSubOperation_S.Case.OnSection.x[1]);
	List_Read(yyvsp[-5].l, 1, &PostSubOperation_S.Case.OnSection.y[1]);
	List_Read(yyvsp[-5].l, 2, &PostSubOperation_S.Case.OnSection.z[1]);
	List_Read(yyvsp[-2].l, 0, &PostSubOperation_S.Case.OnSection.x[2]);
	List_Read(yyvsp[-2].l, 1, &PostSubOperation_S.Case.OnSection.y[2]);
	List_Read(yyvsp[-2].l, 2, &PostSubOperation_S.Case.OnSection.z[2]);
      }
      List_Delete(yyvsp[-8].l);
      List_Delete(yyvsp[-5].l);
      List_Delete(yyvsp[-2].l);
    ;}
    break;

  case 588:
#line 6197 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;}
    break;

  case 589:
#line 6205 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = yyvsp[-12].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = yyvsp[-10].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = yyvsp[-8].i ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] = yyvsp[-5].l ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] = yyvsp[-3].l ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[2] = yyvsp[-1].l ;
    ;}
    break;

  case 590:
#line 6216 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      if(List_Nbr(yyvsp[-1].l)!=3)
	vyyerror("Expected {3} coordinates, got {%d}", List_Nbr(yyvsp[-1].l));
      else{
	List_Read(yyvsp[-1].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-1].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-1].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 591:
#line 6230 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_1D ;
      if(List_Nbr(yyvsp[-8].l)!=3 || List_Nbr(yyvsp[-5].l)!=3)
	vyyerror("Expected {3}{3} coordinates, got {%d}{%d}", 
		 List_Nbr(yyvsp[-8].l), List_Nbr(yyvsp[-5].l));
      else{
	List_Read(yyvsp[-8].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-8].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-8].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read(yyvsp[-5].l, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(yyvsp[-5].l, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(yyvsp[-5].l, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-1].d ;
      List_Delete(yyvsp[-8].l);
      List_Delete(yyvsp[-5].l);
    ;}
    break;

  case 592:
#line 6251 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_2D ;
      if(List_Nbr(yyvsp[-13].l)!=3 || List_Nbr(yyvsp[-10].l)!=3 || List_Nbr(yyvsp[-7].l)!=3)
	vyyerror("Expected {3}{3}{3} coordinates, got {%d}{%d}{%d}", 
		 List_Nbr(yyvsp[-13].l), List_Nbr(yyvsp[-10].l), List_Nbr(yyvsp[-7].l));
      else{
	List_Read(yyvsp[-13].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-13].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-13].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read(yyvsp[-10].l, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(yyvsp[-10].l, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(yyvsp[-10].l, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read(yyvsp[-7].l, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read(yyvsp[-7].l, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read(yyvsp[-7].l, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-1].d ;
      List_Delete(yyvsp[-13].l);
      List_Delete(yyvsp[-10].l);
      List_Delete(yyvsp[-7].l);
    ;}
    break;

  case 593:
#line 6278 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID_3D ;
      if(List_Nbr(yyvsp[-18].l)!=3 || List_Nbr(yyvsp[-15].l)!=3 || List_Nbr(yyvsp[-12].l)!=3 || List_Nbr(yyvsp[-9].l)!=3)
	vyyerror("Expected {3}{3}{3}{3} coordinates, got {%d}{%d}{%d}{%d}", 
		 List_Nbr(yyvsp[-18].l), List_Nbr(yyvsp[-15].l), List_Nbr(yyvsp[-12].l), List_Nbr(yyvsp[-9].l));
      else{
	List_Read(yyvsp[-18].l, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(yyvsp[-18].l, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(yyvsp[-18].l, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
	List_Read(yyvsp[-15].l, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(yyvsp[-15].l, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(yyvsp[-15].l, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
	List_Read(yyvsp[-12].l, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read(yyvsp[-12].l, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read(yyvsp[-12].l, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
	List_Read(yyvsp[-9].l, 0, &PostSubOperation_S.Case.OnGrid.x[3]);
	List_Read(yyvsp[-9].l, 1, &PostSubOperation_S.Case.OnGrid.y[3]);
	List_Read(yyvsp[-9].l, 2, &PostSubOperation_S.Case.OnGrid.z[3]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)yyvsp[-1].d ;
      List_Delete(yyvsp[-18].l);
      List_Delete(yyvsp[-15].l);
      List_Delete(yyvsp[-12].l);
      List_Delete(yyvsp[-9].l);
    ;}
    break;

  case 594:
#line 6309 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_WITHARGUMENT ;

      PostSubOperation_S.Case.WithArgument.RegionIndex = 
	Num_Group(&Group_S, "PO_On", yyvsp[-10].i) ;

      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-8].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i ;
      PostSubOperation_S.Case.WithArgument.x[0] = yyvsp[-6].d ;
      PostSubOperation_S.Case.WithArgument.x[1] = yyvsp[-4].d ;
      PostSubOperation_S.Case.WithArgument.n = (int)yyvsp[-1].d ;
    ;}
    break;

  case 595:
#line 6329 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
      PostSubOperation_S.Dimension = _ALL ;
      PostSubOperation_S.Adapt = 0 ;
      PostSubOperation_S.Target = -1. ;
      PostSubOperation_S.HarmonicToTime = 1 ;
      PostSubOperation_S.TimeStep_L = List_Create(10,10,sizeof(int)); ;
      PostSubOperation_S.Frequency_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Value_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Iso = 0 ;
      PostSubOperation_S.Iso_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Sort = 0 ;
      PostSubOperation_S.NoNewLine = 0 ;
      PostSubOperation_S.DecomposeInSimplex = 0 ;
      PostSubOperation_S.ChangeOfCoordinates[0] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[1] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[2] = -1 ;
      PostSubOperation_S.ChangeOfValues = NULL ;
      PostSubOperation_S.FrequencyLegend[0] = -1 ;
      PostSubOperation_S.EvaluationPoints = NULL ;
    ;}
    break;

  case 597:
#line 6358 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;}
    break;

  case 598:
#line 6365 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;}
    break;

  case 599:
#line 6372 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;}
    break;

  case 600:
#line 6379 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;}
    break;

  case 601:
#line 6383 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 602:
#line 6387 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 603:
#line 6391 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;}
    break;

  case 604:
#line 6395 "GetDP.y"
    { 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 605:
#line 6405 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 606:
#line 6410 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 607:
#line 6415 "GetDP.y"
    {
      PostSubOperation_S.FormatChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FormatTag_L  = List_Copy(ListOfInt_L) ;

      printf("--> string: \"");
      for(i=0;i<List_Nbr(PostSubOperation_S.FormatChar_L);i++){
	List_Read(PostSubOperation_S.FormatChar_L, i, &tmp[0]) ;
	printf("%c", tmp[0]);
      }
      printf("\"\n");
      
      printf("--> tags: ");
      for(i=0;i<List_Nbr(PostSubOperation_S.FormatTag_L);i+=2){
	List_Read(PostSubOperation_S.FormatTag_L, i, &j) ;
	List_Read(PostSubOperation_S.FormatTag_L, i+1, &k) ;
	printf("%d:%d ", j, k);
      }
      printf("\n");
    ;}
    break;

  case 608:
#line 6435 "GetDP.y"
    { 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 609:
#line 6442 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 610:
#line 6451 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 611:
#line 6460 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 612:
#line 6469 "GetDP.y"
    { 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 613:
#line 6476 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 614:
#line 6484 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;}
    break;

  case 615:
#line 6488 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 616:
#line 6497 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 617:
#line 6501 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 618:
#line 6505 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 619:
#line 6513 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;}
    break;

  case 620:
#line 6519 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 621:
#line 6524 "GetDP.y"
    { 
      PostSubOperation_S.FrequencyLegend[0] = yyvsp[-5].d ;
      PostSubOperation_S.FrequencyLegend[1] = yyvsp[-3].d ;
      PostSubOperation_S.FrequencyLegend[2] = yyvsp[-1].d ;
    ;}
    break;

  case 622:
#line 6531 "GetDP.y"
    { 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", 
		 List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;}
    break;

  case 623:
#line 6546 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 624:
#line 6552 "GetDP.y"
    {
      i = 0 ;
      do{
	if(yyvsp[0].c[i] == '%'){ 
	  i++ ; j=i ;
	  do{
	    if(yyvsp[0].c[i] == '+'  || yyvsp[0].c[i] == '-'  || yyvsp[0].c[i] == '*'  || yyvsp[0].c[i] == '%'  ||
	       yyvsp[0].c[i] == '>'  || yyvsp[0].c[i] == '<'  || yyvsp[0].c[i] == '|'  || yyvsp[0].c[i] == '&'  ||
	       yyvsp[0].c[i] == '$'  || yyvsp[0].c[i] == '\'' || yyvsp[0].c[i] == '\\' || yyvsp[0].c[i] == '/'  || 
	       yyvsp[0].c[i] == '{'  ||	yyvsp[0].c[i] == '}'  || yyvsp[0].c[i] == '('  || yyvsp[0].c[i] == ')'  ||
	       yyvsp[0].c[i] == '['  || yyvsp[0].c[i] == ']'  || yyvsp[0].c[i] == '!'  || yyvsp[0].c[i] == ','  ||
	       yyvsp[0].c[i] == '^'  || yyvsp[0].c[i] == '.'  || yyvsp[0].c[i] == ';'  || yyvsp[0].c[i] == '~'  || 
	       yyvsp[0].c[i] == ' '  || yyvsp[0].c[i] == '\n' || yyvsp[0].c[i] == '\t' || yyvsp[0].c[i] == '#'  ||
               yyvsp[0].c[i] == '`'  || yyvsp[0].c[i] == ':'  ){
              break ;
            }
	    i++ ;
	  } while(i<(int)strlen(yyvsp[0].c)) ;
	  strncpy(tmp, &yyvsp[0].c[j], i-j); 
	  tmp[i-j] = '\0'; 
	  k = Get_DefineForString(PostSubOperation_FormatTag, tmp, &FlagError) ;
	  if (FlagError){
	    vyyerror("Unknown Tag in Format: %s", tmp);
	    Get_Valid_SXD(PostSubOperation_FormatTag) ;
	  }
	  else {
	    l = List_Nbr(ListOfChar_L) ;
	    List_Add(ListOfInt_L, &l);
	    List_Add(ListOfInt_L, &k);
	  }
        }
	else{
	  List_Add(ListOfChar_L, &yyvsp[0].c[i]);
	  i++ ;
	}
      } while (i<(int)strlen(yyvsp[0].c)) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 625:
#line 6602 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;}
    break;

  case 626:
#line 6612 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;}
    break;

  case 627:
#line 6622 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-6].c ;      
      Constant_S.Name = yyvsp[-6].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-3].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;}
    break;

  case 628:
#line 6636 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-8].c ;      
      Constant_S.Name = yyvsp[-8].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-5].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
    ;}
    break;

  case 629:
#line 6650 "GetDP.y"
    {
      if(LoopControlVariablesTab[ImbricatedLoop-1][1] >  
	 LoopControlVariablesTab[ImbricatedLoop-1][0]){
	LoopControlVariablesTab[ImbricatedLoop-1][0] +=
	  LoopControlVariablesTab[ImbricatedLoop-1][2];
		
	if(strlen(LoopControlVariablesNameTab[ImbricatedLoop-1])){
	  Constant_S.Name = LoopControlVariablesNameTab[ImbricatedLoop-1] ; 
	  Constant_S.Type = VAR_FLOAT ;
	  Constant_S.Value.Float = LoopControlVariablesTab[ImbricatedLoop-1][0] ;

	  if ((i=List_ISearchSeq(ConstantTable_L, &Constant_S, fcmp_Constant))<0) 
	    vyyerror("Something wrong with For loop starting ") ;

	  List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;      
	}

	fsetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
      }
      else{
	ImbricatedLoop--;
      }
    ;}
    break;

  case 630:
#line 6676 "GetDP.y"
    {
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;}
    break;

  case 631:
#line 6680 "GetDP.y"
    {
    ;}
    break;

  case 633:
#line 6696 "GetDP.y"
    {
      Constant_S.Name = yyvsp[-3].c ; 
      if(List_Nbr(yyvsp[-1].l) == 1){
	Constant_S.Type = VAR_FLOAT ;
	List_Read(yyvsp[-1].l, 0, &Constant_S.Value.Float) ;
	List_Delete(yyvsp[-1].l);
      }
      else{
	Constant_S.Type = VAR_LISTOFFLOAT ;
	Constant_S.Value.ListOfFloat = yyvsp[-1].l;
      }
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 634:
#line 6711 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 635:
#line 6717 "GetDP.y"
    { Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 636:
#line 6723 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 637:
#line 6729 "GetDP.y"
    { Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen(yyvsp[-2].c, "r"))) Msg(ERROR, "Unable to open file '%s'", yyvsp[-2].c);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &_value) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &_value) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 638:
#line 6740 "GetDP.y"
    {
      Msg(DIRECT, yyvsp[-2].c);
    ;}
    break;

  case 639:
#line 6745 "GetDP.y"
    {
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstring);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstring);
      List_Delete(yyvsp[-2].l);
    ;}
    break;

  case 640:
#line 6757 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 641:
#line 6767 "GetDP.y"
    {
      Msg(INFO2, "[<return>=%g] ? ",yyvsp[-2].d);
      fgets(buff, 128, stdin);

      if(!strcmp(buff,"\n"))
	Constant_S.Value.Float = yyvsp[-2].d;
      else
	Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-5].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 643:
#line 6786 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 644:
#line 6792 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 645:
#line 6798 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 646:
#line 6809 "GetDP.y"
    { yyval.c = "Exp";    ;}
    break;

  case 647:
#line 6810 "GetDP.y"
    { yyval.c = "Log";    ;}
    break;

  case 648:
#line 6811 "GetDP.y"
    { yyval.c = "Log10";  ;}
    break;

  case 649:
#line 6812 "GetDP.y"
    { yyval.c = "Sqrt";   ;}
    break;

  case 650:
#line 6813 "GetDP.y"
    { yyval.c = "Sin";    ;}
    break;

  case 651:
#line 6814 "GetDP.y"
    { yyval.c = "Asin";   ;}
    break;

  case 652:
#line 6815 "GetDP.y"
    { yyval.c = "Cos";    ;}
    break;

  case 653:
#line 6816 "GetDP.y"
    { yyval.c = "Acos";   ;}
    break;

  case 654:
#line 6817 "GetDP.y"
    { yyval.c = "Tan";    ;}
    break;

  case 655:
#line 6818 "GetDP.y"
    { yyval.c = "Atan";   ;}
    break;

  case 656:
#line 6819 "GetDP.y"
    { yyval.c = "Atan2";  ;}
    break;

  case 657:
#line 6820 "GetDP.y"
    { yyval.c = "Sinh";   ;}
    break;

  case 658:
#line 6821 "GetDP.y"
    { yyval.c = "Cosh";   ;}
    break;

  case 659:
#line 6822 "GetDP.y"
    { yyval.c = "Tanh";   ;}
    break;

  case 660:
#line 6823 "GetDP.y"
    { yyval.c = "Fabs";   ;}
    break;

  case 661:
#line 6824 "GetDP.y"
    { yyval.c = "Floor";  ;}
    break;

  case 662:
#line 6825 "GetDP.y"
    { yyval.c = "Ceil";   ;}
    break;

  case 663:
#line 6826 "GetDP.y"
    { yyval.c = "Fmod";   ;}
    break;

  case 664:
#line 6827 "GetDP.y"
    { yyval.c = "Modulo"; ;}
    break;

  case 665:
#line 6828 "GetDP.y"
    { yyval.c = "Hypot";  ;}
    break;

  case 666:
#line 6829 "GetDP.y"
    { yyval.c = yyvsp[0].c;       ;}
    break;

  case 667:
#line 6833 "GetDP.y"
    { yyval.d = yyvsp[0].d ;          ;}
    break;

  case 668:
#line 6834 "GetDP.y"
    { yyval.d = yyvsp[-1].d ;          ;}
    break;

  case 669:
#line 6835 "GetDP.y"
    { yyval.d = -yyvsp[0].d ;         ;}
    break;

  case 670:
#line 6836 "GetDP.y"
    { yyval.d = !yyvsp[0].d ;         ;}
    break;

  case 671:
#line 6837 "GetDP.y"
    { yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;}
    break;

  case 672:
#line 6838 "GetDP.y"
    { yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;}
    break;

  case 673:
#line 6839 "GetDP.y"
    { yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;}
    break;

  case 674:
#line 6840 "GetDP.y"
    { yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;}
    break;

  case 675:
#line 6841 "GetDP.y"
    { yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;}
    break;

  case 676:
#line 6842 "GetDP.y"
    { yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;}
    break;

  case 677:
#line 6843 "GetDP.y"
    { yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;}
    break;

  case 678:
#line 6844 "GetDP.y"
    { yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;}
    break;

  case 679:
#line 6845 "GetDP.y"
    { yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;}
    break;

  case 680:
#line 6846 "GetDP.y"
    { yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;}
    break;

  case 681:
#line 6847 "GetDP.y"
    { yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;}
    break;

  case 682:
#line 6848 "GetDP.y"
    { yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;}
    break;

  case 683:
#line 6849 "GetDP.y"
    { yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;}
    break;

  case 684:
#line 6850 "GetDP.y"
    { yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;}
    break;

  case 685:
#line 6851 "GetDP.y"
    { yyval.d = exp(yyvsp[-1].d);      ;}
    break;

  case 686:
#line 6852 "GetDP.y"
    { yyval.d = log(yyvsp[-1].d);      ;}
    break;

  case 687:
#line 6853 "GetDP.y"
    { yyval.d = log10(yyvsp[-1].d);    ;}
    break;

  case 688:
#line 6854 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-1].d);     ;}
    break;

  case 689:
#line 6855 "GetDP.y"
    { yyval.d = sin(yyvsp[-1].d);      ;}
    break;

  case 690:
#line 6856 "GetDP.y"
    { yyval.d = asin(yyvsp[-1].d);     ;}
    break;

  case 691:
#line 6857 "GetDP.y"
    { yyval.d = cos(yyvsp[-1].d);      ;}
    break;

  case 692:
#line 6858 "GetDP.y"
    { yyval.d = acos(yyvsp[-1].d);     ;}
    break;

  case 693:
#line 6859 "GetDP.y"
    { yyval.d = tan(yyvsp[-1].d);      ;}
    break;

  case 694:
#line 6860 "GetDP.y"
    { yyval.d = atan(yyvsp[-1].d);     ;}
    break;

  case 695:
#line 6861 "GetDP.y"
    { yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;}
    break;

  case 696:
#line 6862 "GetDP.y"
    { yyval.d = sinh(yyvsp[-1].d);     ;}
    break;

  case 697:
#line 6863 "GetDP.y"
    { yyval.d = cosh(yyvsp[-1].d);     ;}
    break;

  case 698:
#line 6864 "GetDP.y"
    { yyval.d = tanh(yyvsp[-1].d);     ;}
    break;

  case 699:
#line 6865 "GetDP.y"
    { yyval.d = fabs(yyvsp[-1].d);     ;}
    break;

  case 700:
#line 6866 "GetDP.y"
    { yyval.d = floor(yyvsp[-1].d);    ;}
    break;

  case 701:
#line 6867 "GetDP.y"
    { yyval.d = ceil(yyvsp[-1].d);     ;}
    break;

  case 702:
#line 6868 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 703:
#line 6869 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 704:
#line 6870 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;}
    break;

  case 705:
#line 6871 "GetDP.y"
    { yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;}
    break;

  case 706:
#line 6872 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;}
    break;

  case 707:
#line 6877 "GetDP.y"
    { yyval.d = yyvsp[0].d ; ;}
    break;

  case 708:
#line 6878 "GetDP.y"
    { yyval.d = (double)yyvsp[0].i ; ;}
    break;

  case 709:
#line 6879 "GetDP.y"
    { yyval.d = 3.1415926535897932 ; ;}
    break;

  case 710:
#line 6880 "GetDP.y"
    { yyval.d = (double)_0D ; ;}
    break;

  case 711:
#line 6881 "GetDP.y"
    { yyval.d = (double)_1D ; ;}
    break;

  case 712:
#line 6882 "GetDP.y"
    { yyval.d = (double)_2D ; ;}
    break;

  case 713:
#line 6883 "GetDP.y"
    { yyval.d = (double)_3D ; ;}
    break;

  case 714:
#line 6902 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[0].c) ;  yyval.d = 0. ;
      }
      else  {
	if (Constant_S.Type == VAR_FLOAT)
	  yyval.d = Constant_S.Value.Float ;
	else {
	  vyyerror("Single value Constant needed: %s", yyvsp[0].c) ;  yyval.d = 0. ;
	}
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 715:
#line 6920 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 716:
#line 6923 "GetDP.y"
    { 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 717:
#line 6929 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 718:
#line 6932 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 719:
#line 6939 "GetDP.y"
    { 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 720:
#line 6945 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 721:
#line 6948 "GetDP.y"
    { List_Add(yyval.l, &(yyvsp[0].d)) ; ;}
    break;

  case 722:
#line 6951 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 723:
#line 6963 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;}
    break;

  case 724:
#line 6969 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      if(!yyvsp[0].d || (yyvsp[-4].d<yyvsp[-2].d && yyvsp[0].d<0) || (yyvsp[-4].d>yyvsp[-2].d && yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%g : %g : %g'", yyvsp[-4].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(yyval.l, &(yyvsp[-4].d)) ;
      }
      else
	for(d=yyvsp[-4].d ; (yyvsp[0].d>0)?(d<=yyvsp[-2].d):(d>=yyvsp[-2].d) ; d+=yyvsp[0].d) 
	  List_Add(yyval.l, &d) ;
    ;}
    break;

  case 725:
#line 6980 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1) ; */
	  List_Add(yyval.l, &Constant_S.Value.Float) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;}
    break;

  case 726:
#line 6996 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-3].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-3].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", yyvsp[-3].c) ;
	else
	  for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	    if(i < List_Nbr(Constant_S.Value.ListOfFloat)){
	      List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	      List_Add(yyval.l, &d) ;
	    }
	    else{
	      d = 0.;
	      List_Add(yyval.l, &d) ;
	    }
	  }
    ;}
    break;

  case 727:
#line 7018 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-1].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-1].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", yyvsp[-1].c) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;}
    break;

  case 728:
#line 7033 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant1_S.Name = yyvsp[-3].c ; Constant2_S.Name = yyvsp[-1].c ;
      if (!List_Query(ConstantTable_L, &Constant1_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[-3].c) ;
      }
      else
	if (Constant1_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", yyvsp[-3].c) ;
	}
	else {
	  if (!List_Query(ConstantTable_L, &Constant2_S, fcmp_Constant)) {
	    vyyerror("Unknown Constant: %s", yyvsp[-1].c) ;
	  }
	  else
	    if (Constant2_S.Type != VAR_LISTOFFLOAT) {
	      vyyerror("Multi value Constant needed: %s", yyvsp[-1].c) ;
	    }
	    else {
	      if (List_Nbr(Constant1_S.Value.ListOfFloat) !=
		  List_Nbr(Constant2_S.Value.ListOfFloat)) {
		vyyerror("Different dimensions of Multi value Constants: "
			 "%s {%d}, %s {%d}",
			 yyvsp[-3].c, List_Nbr(Constant1_S.Value.ListOfFloat),
			 yyvsp[-1].c, List_Nbr(Constant2_S.Value.ListOfFloat)) ;
	      }
	      else {
		for(i=0 ; i<List_Nbr(Constant1_S.Value.ListOfFloat) ; i++) {
		  List_Read(Constant1_S.Value.ListOfFloat, i, &d) ;
		  List_Add(yyval.l, &d) ;
		  List_Read(Constant2_S.Value.ListOfFloat, i, &d) ;
		  List_Add(yyval.l, &d) ;
		}
	      }
	    }
	}
    ;}
    break;

  case 729:
#line 7071 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 730:
#line 7079 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 731:
#line 7091 "GetDP.y"
    { 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;}
    break;

  case 732:
#line 7099 "GetDP.y"
    {
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;}
    break;

  case 733:
#line 7111 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 734:
#line 7113 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 735:
#line 7120 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 736:
#line 7123 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[0].c) ;  yyval.c = NULL ;
      }
      else  {
	if (Constant_S.Type == VAR_CHAR)
	  yyval.c = Constant_S.Value.Char ;
	else {
	  vyyerror("String Constant needed: %s", yyvsp[0].c) ;  yyval.c = NULL ;
	}
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 737:
#line 7138 "GetDP.y"
    {
      yyval.c = yyvsp[0].c ;
    ;}
    break;

  case 738:
#line 7143 "GetDP.y"
    {
      yyval.c = yyvsp[-1].c;
    ;}
    break;

  case 739:
#line 7148 "GetDP.y"
    {
      i = Print_ListOfDouble(yyvsp[-3].c,yyvsp[-1].l,tmpstring);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	yyval.c = yyvsp[-3].c;
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	yyval.c = yyvsp[-3].c;
      }
      else{
	yyval.c = (char*)Malloc((strlen(tmpstring)+1)*sizeof(char));
	strcpy(yyval.c, tmpstring);
	Free(yyvsp[-3].c);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 740:
#line 7167 "GetDP.y"
    {
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;}
    break;

  case 741:
#line 7185 "GetDP.y"
    {
      if (yyvsp[-3].c != NULL && yyvsp[-1].c != NULL) {
	yyval.c = (char *)Malloc((strlen(yyvsp[-3].c)+strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
	strcpy(yyval.c, yyvsp[-3].c) ;  strcat(yyval.c, yyvsp[-1].c) ;
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  yyval.c = NULL ;
      }
    ;}
    break;


    }

/* Line 999 of yacc.c.  */
#line 11793 "GetDP.tab.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 7196 "GetDP.y"



/* 
   This is a hack... Bison redefines 'const' if !__cplusplus and !__STDC__ 
*/

#ifdef const
#undef const
#endif

/*  A d d _ G r o u p   &   C o .  */

int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) {
  int  i ;

  if (!Problem_S.Group)
    Problem_S.Group = List_Create(50, 50, sizeof (struct Group) ) ;

  switch (Flag_Plus) {
  case 1 :
    sprintf(StringAux1, "_%s_%d", Name, List_Nbr(Problem_S.Group)) ;
    Group_P->Name = strsave(StringAux1) ;
    break ;
  case 2 :
    sprintf(StringAux1, "%s_%d_", Name, Num_Index) ;
    Group_P->Name = strsave(StringAux1) ;
    break ;
  default :
    Group_P->Name = Name ;
  }

  if ((i = List_ISearchSeq(Problem_S.Group, Group_P->Name, fcmp_Group_Name)) < 0) {
    i = Group_P->Num = List_Nbr(Problem_S.Group) ;
    Group_P->ExtendedList = NULL ;  Group_P->ExtendedSuppList = NULL ;
    List_Add(Problem_S.Group, Group_P) ;
  }
  else  List_Write(Problem_S.Group, i, Group_P) ;

  return i ;

}


int  Add_Group_2(struct Group * Group_P, char * Name, int Flag_Add, 
		 int Flag_Plus, int Num_Index1, int Num_Index2) {
  int  i, j ;
  List_T *InitialList;

  if (!Problem_S.Group)
    Problem_S.Group = List_Create(50, 50, sizeof (struct Group) ) ;

  if (Flag_Plus == 0)
    sprintf(StringAux1, "%s", Name) ;
  else if (Flag_Plus == 1)
    sprintf(StringAux1, "%s_%d_", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(StringAux1, "%s_%d_%d_", Name, Num_Index1,Num_Index2) ;

  Group_P->Name = strsave(StringAux1) ;
  
  if ((i = List_ISearchSeq(Problem_S.Group, Group_P->Name, fcmp_Group_Name)) < 0) {
    i = Group_P->Num = List_Nbr(Problem_S.Group) ;
    Group_P->ExtendedList = NULL ;  Group_P->ExtendedSuppList = NULL ;
    List_Add(Problem_S.Group, Group_P) ;
  } else if (Flag_Add) {
    InitialList = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
    for (j = 0 ; j < List_Nbr(Group_P->InitialList) ; j++) {
      List_Add(InitialList, (int *)List_Pointer(Group_P->InitialList, j)) ;
    } 
  } else List_Write(Problem_S.Group, i, Group_P) ;

  return i ;
}



int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) {

  if      (Num_Group >= 0)   /* OK */ ;
  else if (Num_Group == -1)  Num_Group = Add_Group(Group_P, Name, 1, 0) ;
  else                       vyyerror("Bad Group right hand side") ;

  return Num_Group ;
}


int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) {
  int k, Num ;

  List_Reset(ListOfInt_L) ;

  for (k = 0 ; k < Nbr_Index ; k++) {
    List_Read(ListOfInitialList_L, k, &Group_P->InitialList) ;
    if (Group_P->SuppListType != SUPPLIST_NONE)
      List_Read(ListOfInitialSuppList_L, k, &Group_P->InitialSuppList) ;
    Num = Add_Group(Group_P, Name, Flag_Plus, k+1) ;
    List_Add(ListOfInt_L, &Num) ;
  }
  return (Num-Nbr_Index+1) ;
}


/*  A d d _ P o s t S a v e  */

struct Value *  Add_PostSave(char * Name) {
  struct PostSave PostSave_S;

  if (!Problem_S.PostSave)
    Problem_S.PostSave = List_Create(10, 10, sizeof (struct PostSave) ) ;

  if ((i = List_ISearchSeq(Problem_S.PostSave, Name, fcmp_PostSave_Name)) < 0) {
    PostSave_S.Name = Name ;
    PostSave_S.Value = (struct Value *)Calloc(1,sizeof(struct Value)) ;
    List_Add(Problem_S.PostSave, &PostSave_S) ;
    printf("PostSave 11 %p\n",  PostSave_S.Value) ;
  }
  else {
    PostSave_S.Value = (struct Value *)(((struct PostSave *)
					 List_Pointer(Problem_S.PostSave,i))->Value) ;
    /* List_Write(Problem_S.PostSave, i, &PostSave_S) ; */
    printf("PostSave 22 %p\n",  PostSave_S.Value) ;
  }

  return  PostSave_S.Value ;
}

/*  A d d _ E x p r e s s i o n   */

int  Add_Expression(struct Expression * Expression_P,
		    char * Name, int Flag_Plus) {
  int  i ;

  if (!Problem_S.Expression)
    Problem_S.Expression = List_Create(50, 50, sizeof (struct Expression) ) ;

  if (Flag_Plus) {
    sprintf(StringAux1, "_%s_%d", Name, List_Nbr(Problem_S.Expression)) ;
    Expression_P->Name = strsave(StringAux1) ;
  }
  else  Expression_P->Name = Name ;

  if ((i = List_ISearchSeq
       (Problem_S.Expression, Name, fcmp_Expression_Name)) < 0) {
    i = List_Nbr(Problem_S.Expression) ;
    List_Add(Problem_S.Expression, Expression_P) ;
  }
  else  List_Write(Problem_S.Expression, i, Expression_P) ;

  return i ;
}

/*  L i s t e   I n d e x   d e s   D e f i n e Q u a n t i t y  */

void  Pro_DefineQuantityIndex_1(List_T * WholeQuantity_L, int TraceGroupIndex) {
  int  i ;
  struct WholeQuantity * WholeQuantity_P ;
  struct TwoInt Pair ;

  WholeQuantity_P = (List_Nbr(WholeQuantity_L) > 0)?
    (struct WholeQuantity*)List_Pointer(WholeQuantity_L, 0) : NULL ;

  for (i = 0 ; i < List_Nbr(WholeQuantity_L) ; i++)
    switch ((WholeQuantity_P+i)->Type) {
    case WQ_OPERATORANDQUANTITY :
    case WQ_OPERATORANDQUANTITYEVAL :
    case WQ_SOLIDANGLE :
    case WQ_ORDER :
      Pair.Int1 = (WholeQuantity_P+i)->Case.OperatorAndQuantity.Index ;
      Pair.Int2 = TraceGroupIndex ;
      List_Insert(ListOfTwoInt_L, &Pair, fcmp_int) ;
      break ;
    case WQ_MHTRANSFORM  :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.MHTransform.WholeQuantity, TraceGroupIndex) ;
    case WQ_TIMEDERIVATIVE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.TimeDerivative.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_ATANTERIORTIMESTEP :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.AtAnteriorTimeStep.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_CAST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Cast.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_TRACE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Trace.WholeQuantity, 
	 (WholeQuantity_P+i)->Case.Trace.InIndex) ;
      break ;
    case WQ_TEST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_True, TraceGroupIndex) ;
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Test.WholeQuantity_False, TraceGroupIndex) ;
      break ;
    }
  List_Sort(ListOfTwoInt_L, fcmp_int) ;
}

void  Pro_DefineQuantityIndex(List_T * WholeQuantity_L,
			      int DefineQuantityIndexEqu,
			      int * NbrQuantityIndex, int ** QuantityIndexTable, 
			      int ** QuantityTraceGroupIndexTable) {
  int i ;
  struct TwoInt Pair, *Pair_P ;

  List_Reset(ListOfTwoInt_L) ;
  if (DefineQuantityIndexEqu >= 0){
    Pair.Int1 = DefineQuantityIndexEqu ;
    Pair.Int2 = -1 ;
    List_Add(ListOfTwoInt_L, &Pair) ;
  }

  Pro_DefineQuantityIndex_1(WholeQuantity_L, -1) ;

  *NbrQuantityIndex = List_Nbr(ListOfTwoInt_L) ;
  *QuantityIndexTable = (int *)Malloc(List_Nbr(ListOfTwoInt_L) * sizeof(int)) ;
  *QuantityTraceGroupIndexTable = (int *)Malloc(List_Nbr(ListOfTwoInt_L) * sizeof(int)) ;
  for (i = 0 ; i < List_Nbr(ListOfTwoInt_L) ; i++){
    Pair_P =  (struct TwoInt*)List_Pointer(ListOfTwoInt_L, i) ;
    (*QuantityIndexTable)[i] = Pair_P->Int1 ;
    (*QuantityTraceGroupIndexTable)[i] = Pair_P->Int2 ;
  }
}


/* C h e c k _ N a m e O f S t r u c t N o t E x i s t   */

void  Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				 int (*fcmp)(const void *a, const void *b)) {
  if (List_ISearchSeq(List_L, data, fcmp) >= 0)
    vyyerror("Redefinition of %s %s", Struct, (char*)data) ;
}


/* P r i n t _ C o n s t a n t  */

void  Print_Constant(){
  int i,j;
  char tmp1[1000], tmp2[100];
  struct Constant *Constant_P;

  for(i=0 ; i<List_Nbr(ConstantTable_L) ; i++){
    Constant_P = (struct Constant*)List_Pointer(ConstantTable_L, i);
    switch(Constant_P->Type){
    case VAR_FLOAT:
      Msg(CHECK, "%s = %g;\n", Constant_P->Name, Constant_P->Value.Float);
      break;
    case VAR_LISTOFFLOAT:
      sprintf(tmp1, "%g", *(double*)List_Pointer(Constant_P->Value.ListOfFloat,0));
      for(j=1 ; j<List_Nbr(Constant_P->Value.ListOfFloat) ; j++){
	sprintf(tmp2, ",%g", *(double*)List_Pointer(Constant_P->Value.ListOfFloat,j));
	strcat(tmp1,tmp2);
      }
      Msg(CHECK, "%s = {%s};\n", Constant_P->Name, tmp1);
      break;
    case VAR_CHAR:
      Msg(CHECK, "%s = \"%s\";\n", Constant_P->Name, Constant_P->Value.Char);
      break;
    }
  }
}


/* f c m p _ . . .  */

int  fcmp_Constant (const void *a, const void *b) {
  return ( strcmp(((struct Constant *)a)->Name, ((struct Constant *)b)->Name)) ;
}
int  fcmp_Expression_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Expression *)b)->Name ) ) ;
}
int  fcmp_Group_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Group *)b)->Name ) ) ;
}
int  fcmp_Constraint_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Constraint *)b)->Name ) ) ;
}
int  fcmp_JacobianMethod_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct JacobianMethod *)b)->Name ) ) ;
}
int  fcmp_IntegrationMethod_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct IntegrationMethod *)b)->Name ) ) ;
}
int  fcmp_BasisFunction_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct BasisFunction *)b)->Name ) ) ;
}
int  fcmp_FunctionSpace_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct FunctionSpace *)b)->Name ) ) ;
}
int  fcmp_BasisFunction_NameOfCoef(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct BasisFunction *)b)->NameOfCoef ) ) ;
}
int  fcmp_SubSpace_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct SubSpace *)b)->Name ) ) ;
}
int  fcmp_GlobalQuantity_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct GlobalQuantity *)b)->Name ) ) ;
}
int  fcmp_Formulation_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Formulation *)b)->Name ) ) ;
}
int  fcmp_DefineQuantity_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct DefineQuantity *)b)->Name ) ) ;
}
int  fcmp_DefineSystem_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct DefineSystem *)b)->Name ) ) ;
}
int  fcmp_Resolution_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct Resolution *)b)->Name ) ) ;
}
int  fcmp_PostProcessing_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostProcessing *)b)->Name ) ) ;
}
int  fcmp_PostQuantity_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostQuantity *)b)->Name ) ) ;
}
int  fcmp_PostOperation_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostOperation *)b)->Name ) ) ;
}
int  fcmp_PostSave_Name(const void * a, const void * b) {
  return ( strcmp((char *)a, ((struct PostSave *)b)->Name ) ) ;
}


int Print_ListOfDouble(char *format, List_T *list, char *buffer){
  int i, j, k;
  char tmp1[256], tmp2[256];

  j=0;
  while(format[j]!='%') j++;
  strncpy(buffer, format, j); 
  buffer[j]='\0'; 
  for(i = 0 ; i<List_Nbr(list) ; i++){
    k = j;
    j++;
    if(j<(int)strlen(format)){
      if(format[j]=='%'){
	strcat(buffer, "%");
	j++;
      }
      while(format[j]!='%' && j<(int)strlen(format)) j++;
      if(k != j){
	strncpy(tmp1, &(format[k]),j-k);
	tmp1[j-k]='\0';
	sprintf(tmp2, tmp1, *(double*)List_Pointer(list,i)); 
	strcat(buffer, tmp2);
      }
    }
    else{
      return List_Nbr(list)-i;
      break ;
    }
  }
  if(j != (int)strlen(format))
    return -1;
  return 0;
}
  


/*  E r r o r   h a n d l i n g  */

void  yyerror (char *s) {
  int  i, nn ;
  char space1[32] = "", space2[512]= "";

  if(!InteractiveLevel){
    Msg(DIRECT, "Error ('%s' line %ld): %s on '%s'", yyname, yylinenum, 
	s, yytext) ;
  }
  else{
    if(!ErrorLevel){
      nn = strlen(GETDP_PROMPT_STRING) ;
      for(i=0 ; i<nn ; i++) {
	strcat(space1, " ");
	strcat(space2, " ");
      }
      for(i=0 ; i<yycolnum-2 ; i++) {
	strcat(space2, " ");
      }
      Msg(DIRECT, "%s^", space2);
      Msg(DIRECT, "%s%s", space1, s);
      Msg(DIRECT, "") ;
      Msg(DIRECT, "") ;
    }
  }

  ErrorLevel=1 ;
}

void  vyyerror (char *fmt, ...){
  int      i, nn ;
  char space1[32] = "", str[256];
  va_list  args;

  va_start (args, fmt);
  vsprintf (str, fmt, args);
  va_end (args);

  if(!InteractiveLevel){
    Msg(DIRECT, "Error ('%s' line %ld): %s", yyname, yylinenum, str);
  }
  else{
    if(!ErrorLevel){
      nn = strlen(GETDP_PROMPT_STRING) ;
      for(i=0 ; i<nn ; i++) {
	strcat(space1, " ");
      }
      Msg(DIRECT, "%s%s", space1, str) ;
      Msg(DIRECT, "");
    }
  }

  ErrorLevel=1 ;
}


