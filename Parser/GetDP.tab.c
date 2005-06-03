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
     tStore = 479,
     tStr = 480,
     tDate = 481,
     tDEF = 482,
     tOR = 483,
     tAND = 484,
     tAPPROXEQUAL = 485,
     tNOTEQUAL = 486,
     tEQUAL = 487,
     tGREATERGREATER = 488,
     tLESSLESS = 489,
     tGREATEROREQUAL = 490,
     tLESSOREQUAL = 491,
     tCROSSPRODUCT = 492,
     UNARYPREC = 493,
     tSHOW = 494
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
#define tStore 479
#define tStr 480
#define tDate 481
#define tDEF 482
#define tOR 483
#define tAND 484
#define tAPPROXEQUAL 485
#define tNOTEQUAL 486
#define tEQUAL 487
#define tGREATERGREATER 488
#define tLESSLESS 489
#define tGREATEROREQUAL 490
#define tLESSOREQUAL 491
#define tCROSSPRODUCT 492
#define UNARYPREC 493
#define tSHOW 494




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.74 2005-06-03 14:58:52 dular Exp $ */
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
#line 780 "GetDP.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 792 "GetDP.tab.c"

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
#define YYLAST   6200

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  262
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  195
/* YYNRULES -- Number of rules. */
#define YYNRULES  742
/* YYNRULES -- Number of states. */
#define YYNSTATES  2010

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   494

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   246,     2,   254,   255,   244,     2,     2,
     249,   250,   242,   240,   259,   241,   253,   243,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     234,     2,   235,   228,   260,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   251,     2,   252,   248,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   257,     2,   258,   261,     2,     2,     2,
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
     225,   226,   227,   229,   230,   231,   232,   233,   236,   237,
     238,   239,   245,   247,   256
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
    2564,  2568,  2578,  2584,  2588,  2589,  2592,  2599,  2608,  2617,
    2628,  2630,  2635,  2637,  2643,  2648,  2653,  2661,  2666,  2674,
    2680,  2688,  2694,  2703,  2704,  2708,  2714,  2720,  2722,  2724,
    2726,  2728,  2730,  2732,  2734,  2736,  2738,  2740,  2742,  2744,
    2746,  2748,  2750,  2752,  2754,  2756,  2758,  2760,  2762,  2764,
    2768,  2771,  2774,  2778,  2782,  2786,  2790,  2794,  2798,  2802,
    2806,  2810,  2814,  2818,  2822,  2826,  2830,  2835,  2840,  2845,
    2850,  2855,  2860,  2865,  2870,  2875,  2880,  2887,  2892,  2897,
    2902,  2907,  2912,  2917,  2924,  2931,  2938,  2944,  2947,  2949,
    2951,  2953,  2955,  2957,  2959,  2961,  2963,  2964,  2966,  2968,
    2972,  2974,  2976,  2980,  2984,  2988,  2994,  2998,  3003,  3008,
    3015,  3024,  3033,  3039,  3045,  3047,  3049,  3051,  3053,  3055,
    3060,  3067,  3069
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     263,     0,    -1,    -1,   264,   265,    -1,    -1,    -1,   265,
     266,   267,    -1,    62,   257,   270,   258,    -1,    99,   257,
     293,   258,    -1,    68,   257,   328,   258,    -1,    81,   257,
     313,   258,    -1,    83,   257,   319,   258,    -1,    95,   257,
     335,   258,    -1,   111,   257,   358,   258,    -1,   132,   257,
     385,   258,    -1,   184,   257,   415,   258,    -1,   186,   257,
     427,   258,    -1,   431,    -1,   445,    -1,    22,   455,    -1,
     268,    -1,    19,     7,    -1,    19,   191,     7,    -1,    19,
      21,     7,    -1,    19,    36,     7,    -1,    19,    20,     7,
      -1,    19,    19,     7,    -1,    19,     5,     7,    -1,    20,
       7,    -1,    21,     7,    -1,    21,    62,     7,    -1,    21,
      99,     7,    -1,    21,    68,     7,    -1,    21,    81,     7,
      -1,    21,    83,     7,    -1,    21,    95,     7,    -1,    21,
     111,     7,    -1,    21,   132,     7,    -1,    21,   184,     7,
      -1,    21,   186,     7,    -1,    21,     3,     7,    -1,    -1,
     269,   435,    -1,    -1,    -1,   270,   271,   272,    -1,   454,
     227,   277,     7,    -1,     5,   292,   227,   277,     7,    -1,
      -1,     5,   290,   227,   273,   277,     7,    -1,    63,   251,
     288,   252,     7,    -1,   274,    -1,   454,   240,   227,   277,
       7,    -1,   445,    -1,   444,    -1,    -1,    -1,   454,   251,
     448,   252,   227,    66,   275,   251,   254,   285,   276,   259,
     254,   285,   259,   448,   252,     7,    -1,    -1,    -1,   281,
     251,   278,   282,   279,   283,   252,    -1,   254,   285,    -1,
     277,    -1,   454,   291,    -1,    69,    -1,     5,    -1,   285,
      -1,    64,    -1,    -1,   289,   284,   285,    -1,   289,    65,
     454,   291,    -1,     5,    -1,   287,    -1,   257,   286,   258,
      -1,    -1,   286,   289,   287,    -1,   286,   289,   241,   287,
      -1,     3,    -1,   260,   451,   260,    -1,     3,     8,   448,
      -1,     3,     8,     3,     8,   448,    -1,   454,    -1,     5,
     257,   258,    -1,    -1,   288,   289,     5,    -1,   288,   289,
       5,   257,   448,   258,    -1,    -1,   259,    -1,   257,   254,
     448,   258,    -1,    -1,   257,   258,    -1,   257,     3,   258,
      -1,    -1,   293,   294,    -1,    67,   251,   295,   252,     7,
      -1,     5,   251,   252,   227,   296,     7,    -1,     5,   251,
     280,   252,   227,   296,     7,    -1,   445,    -1,   444,    -1,
      -1,   295,   289,     5,    -1,    23,   251,   448,   252,    -1,
      99,   251,     5,   252,    -1,    -1,   297,   300,    -1,    -1,
     257,   299,   258,    -1,   296,    -1,   299,   259,   296,    -1,
      -1,   301,   302,    -1,   305,    -1,    -1,    -1,   302,   228,
     303,   302,     8,   304,   302,    -1,   302,   242,   302,    -1,
     302,   245,   302,    -1,    58,   251,   302,   259,   302,   252,
      -1,   302,   243,   302,    -1,   302,   240,   302,    -1,   302,
     241,   302,    -1,   302,   244,   302,    -1,   302,   248,   302,
      -1,   302,   234,   302,    -1,   302,   235,   302,    -1,   302,
     239,   302,    -1,   302,   238,   302,    -1,   302,   233,   302,
      -1,   302,   232,   302,    -1,   302,   231,   302,    -1,   302,
     230,   302,    -1,   302,   229,   302,    -1,   241,   302,    -1,
     240,   302,    -1,   246,   302,    -1,   249,   302,   250,    -1,
     449,    -1,   447,   310,   312,    -1,     5,   384,    -1,   384,
      -1,   384,   310,    -1,    -1,   122,   306,   251,   300,   252,
      -1,    -1,   129,   307,   251,   300,   259,     3,   252,    -1,
      -1,    60,   251,     5,   251,   308,   300,   252,   252,   257,
     448,   258,    -1,    61,   251,     5,   252,   257,   448,   259,
     448,   258,    -1,    55,   251,   384,   252,    -1,    57,   251,
     384,   252,    -1,    -1,    56,   309,   251,   300,   259,   280,
     252,    -1,   234,     5,   235,   251,   300,   252,    -1,   255,
       5,    -1,   255,   209,    -1,   255,   143,    -1,   255,     3,
      -1,   305,   254,     3,    -1,   254,     3,    -1,   255,   255,
     454,    -1,   305,   256,   448,    -1,    59,   251,     5,   259,
       3,   252,    -1,   251,   253,   252,    -1,   251,   252,    -1,
     251,   311,   252,    -1,   302,    -1,   311,   259,   302,    -1,
      -1,   257,   451,   258,    -1,   257,    69,   251,   280,   252,
     258,    -1,    -1,   313,   257,   314,   258,    -1,    -1,   314,
     315,    -1,    96,     5,     7,    -1,    82,   257,   316,   258,
      -1,    -1,   316,   257,   317,   258,    -1,    -1,   317,   318,
      -1,    69,   280,     7,    -1,    69,    64,     7,    -1,    81,
       5,   312,     7,    -1,    -1,   319,   257,   320,   258,    -1,
      -1,   320,   321,    -1,    96,     5,     7,    -1,    88,   296,
       7,    -1,    82,   257,   322,   258,    -1,    -1,   322,   257,
     323,   258,    -1,    -1,   323,   324,    -1,    86,     5,     7,
      -1,    87,     5,     7,    -1,    82,   257,   325,   258,    -1,
      -1,   325,   257,   326,   258,    -1,    -1,   326,   327,    -1,
      89,     5,     7,    -1,    90,   448,     7,    -1,    91,   448,
       7,    -1,    92,   448,     7,    -1,    93,   448,     7,    -1,
      94,   448,     7,    -1,    -1,   444,    -1,   328,   329,    -1,
     257,   330,   258,    -1,   445,    -1,    -1,   330,   331,    -1,
      96,   454,     7,    -1,    96,   454,   290,     7,    -1,    86,
       5,     7,    -1,    82,   257,   332,   258,    -1,    82,     5,
     257,   332,   258,    -1,    -1,   332,   257,   333,   258,    -1,
     332,   444,    -1,    -1,   333,   334,    -1,    86,     5,     7,
      -1,    69,   280,     7,    -1,    70,   280,     7,    -1,    76,
     296,     7,    -1,    75,   296,     7,    -1,    80,     5,     7,
      -1,    77,   257,   449,   289,   449,   258,     7,    -1,    71,
     280,     7,    -1,    72,   280,     7,    -1,    99,   296,     7,
      -1,    74,   296,     7,    -1,    73,   296,     7,    -1,    99,
     251,   296,   259,   296,   252,     7,    -1,    74,   251,   296,
     259,   296,   252,     7,    -1,    73,   251,   296,   259,   296,
     252,     7,    -1,    -1,   335,   336,    -1,   257,   337,   258,
      -1,   445,    -1,   444,    -1,    -1,   337,   338,    -1,    96,
     454,     7,    -1,    96,     5,   290,     7,    -1,    86,     5,
       7,    -1,    97,   257,   339,   258,    -1,   105,   257,   345,
     258,    -1,   107,   257,   352,   258,    -1,    68,   257,   355,
     258,    -1,    -1,   339,   257,   340,   258,    -1,    -1,   340,
     341,    -1,    96,     5,     7,    -1,    98,     5,     7,    -1,
      98,     5,   290,     7,    -1,    99,     5,   342,     7,    -1,
     100,   257,     5,   289,     5,   258,     7,    -1,   101,   298,
       7,    -1,   102,   298,     7,    -1,   103,   280,     7,    -1,
     104,   280,     7,    -1,    -1,    -1,    -1,   257,   112,     5,
       7,   111,     5,   290,     7,   343,    62,   280,     7,   344,
     132,     5,   291,     7,   258,    -1,    -1,   345,   257,   346,
     258,    -1,    -1,   346,   347,    -1,    96,     5,     7,    -1,
     106,   348,     7,    -1,    98,   350,     7,    -1,     5,    -1,
     257,   349,   258,    -1,    -1,   349,   289,     5,    -1,     5,
      -1,   257,   351,   258,    -1,    -1,   351,   289,     5,    -1,
      -1,   352,   257,   353,   258,    -1,    -1,   353,   354,    -1,
      96,   454,     7,    -1,    86,     5,     7,    -1,    98,     5,
       7,    -1,    -1,   355,   257,   356,   258,    -1,    -1,   356,
     357,    -1,    98,     5,     7,    -1,   108,   281,     7,    -1,
     109,   284,     7,    -1,   110,   454,   291,     7,    -1,    -1,
     358,   359,    -1,   257,   360,   258,    -1,   445,    -1,   444,
      -1,    -1,   360,   361,    -1,    96,   454,     7,    -1,    96,
       5,   290,     7,    -1,    86,     5,     7,    -1,   112,   257,
     362,   258,    -1,   116,   257,   369,   258,    -1,    -1,   362,
     257,   363,   258,    -1,   362,   444,    -1,    -1,   363,   364,
      -1,    96,   454,     7,    -1,    86,   107,     7,    -1,    86,
     117,     7,    -1,    86,     5,     7,    -1,   183,   450,     7,
      -1,    -1,   113,   454,   365,   368,     7,    -1,    -1,   113,
       5,   257,   258,   366,   368,     7,    -1,   114,     3,     7,
      -1,    -1,   251,   367,   300,   252,     7,    -1,   130,   280,
       7,    -1,    83,     5,     7,    -1,    84,     5,     7,    -1,
      81,     5,     7,    -1,   115,     3,     7,    -1,    -1,   251,
     454,   252,    -1,    -1,   369,   370,    -1,   369,   445,    -1,
     369,   444,    -1,   117,   257,   375,   258,    -1,   118,   257,
     375,   258,    -1,   119,   257,   379,   258,    -1,   120,   257,
     371,   258,    -1,    -1,   371,   372,    -1,    86,     5,     7,
      -1,   110,     5,     7,    -1,   257,   373,   258,    -1,    -1,
     373,   374,    -1,    78,   384,     7,    -1,    79,   384,     7,
      -1,   116,   384,     7,    -1,   130,   280,     7,    -1,    -1,
     375,   376,    -1,    -1,    -1,   383,   251,   377,   300,   378,
     259,   300,   252,     7,    -1,   130,   280,     7,    -1,    81,
       5,     7,    -1,    83,     5,     7,    -1,   131,     7,    -1,
      84,     5,     7,    -1,    85,   251,     3,   252,     7,    -1,
      -1,   379,   380,    -1,   130,   280,     7,    -1,    -1,    -1,
     383,   251,   381,   300,   382,   259,   384,   252,     7,    -1,
      -1,   122,    -1,   123,    -1,   124,    -1,   125,    -1,   126,
      -1,   127,    -1,   128,    -1,   257,     5,   454,   258,    -1,
     257,   454,   258,    -1,    -1,   385,   386,    -1,   257,   387,
     258,    -1,   445,    -1,   444,    -1,    -1,   387,   388,    -1,
      96,   454,     7,    -1,    96,     5,   290,     7,    -1,   133,
     257,   390,   258,    -1,    -1,   140,   389,   257,   397,   258,
      -1,   444,    -1,    -1,   390,   257,   391,   258,    -1,   390,
     444,    -1,    -1,   391,   392,    -1,    96,   454,     7,    -1,
      86,     5,     7,    -1,   134,   393,     7,    -1,   135,   455,
       7,    -1,   138,   395,     7,    -1,   139,     5,     7,    -1,
     136,   450,     7,    -1,   137,   455,     7,    -1,   444,    -1,
     454,   291,    -1,   257,   394,   258,    -1,    -1,   394,   289,
     454,    -1,   454,    -1,   257,   396,   258,    -1,    -1,   396,
     289,   454,    -1,    -1,   397,   398,    -1,     5,   454,     7,
      -1,   142,   296,     7,    -1,   152,   257,   404,   258,    -1,
     156,   257,   406,   258,    -1,   159,   257,   408,   258,    -1,
     162,   257,   410,   258,    -1,     5,   251,   454,   252,     7,
      -1,   142,   251,   296,   252,     7,    -1,   151,     7,    -1,
      15,   251,   296,   252,   257,   397,   258,    -1,    15,   251,
     296,   252,   257,   397,   258,    16,   257,   397,   258,    -1,
     144,   251,     5,   259,   296,   252,     7,    -1,   168,   251,
       5,   259,   296,   259,   296,   259,   296,   259,   296,   252,
       7,    -1,   168,   251,     5,   259,   296,   259,   296,   259,
     296,   252,     7,    -1,   168,   251,     5,   259,   296,   259,
     296,   252,     7,    -1,   169,   251,     5,   259,   450,   252,
       7,    -1,   170,   251,     5,   259,   450,   252,     7,    -1,
     149,   251,     5,   259,   296,   252,     7,    -1,   150,   251,
       5,   259,   280,   259,     5,   252,     7,    -1,   145,   251,
       5,   259,     5,   259,   450,   252,     7,    -1,   146,   251,
       5,   259,     5,   259,   448,   252,     7,    -1,   147,   251,
       5,   259,   448,   259,   450,   259,   448,   252,     7,    -1,
     148,   251,     5,   259,     5,   259,     5,   259,   448,   259,
     450,   259,   448,   259,   448,   252,     7,    -1,   152,   251,
     448,   259,   448,   259,   296,   259,   296,   252,   257,   397,
     258,    -1,   156,   251,   448,   259,   448,   259,   296,   259,
     448,   259,   448,   252,   257,   397,   258,    -1,   159,   251,
     448,   259,   448,   259,   296,   252,   257,   397,   258,    -1,
     159,   251,   448,   259,   448,   259,   296,   259,   448,   252,
     257,   397,   258,    -1,    -1,   191,   399,   251,   401,   402,
     252,     7,    -1,    -1,   194,   400,   251,   401,   402,   252,
       7,    -1,   165,   251,   280,   259,   296,   252,     7,    -1,
     165,   251,   280,   259,   296,   259,   448,   259,   296,   252,
       7,    -1,   186,   251,   454,   252,     7,    -1,   167,   251,
     455,   252,     7,    -1,   171,   251,     5,   259,   450,   259,
     448,   252,     7,    -1,   172,   251,     5,   259,   448,   259,
     455,   252,     7,    -1,   173,   251,     5,   259,   450,   259,
     455,   252,     7,    -1,   174,   257,   454,   258,     7,    -1,
     175,   257,   454,   258,     7,    -1,   181,   257,   454,   259,
     280,   259,   455,   259,   296,   258,     7,    -1,   181,   257,
     454,   259,   280,   259,   455,   258,     7,    -1,   176,   251,
       5,   259,     5,   259,   448,   259,   448,   252,   257,   397,
     258,     7,    -1,   177,   251,     5,   259,     5,   259,   448,
     259,   448,   252,   257,   397,   258,     7,    -1,   178,   251,
       5,   259,   448,   252,     7,    -1,   182,   257,     5,   259,
       5,   259,   135,   455,   259,     4,   258,     7,    -1,   182,
     257,     5,   259,     5,   259,   135,   455,   258,     7,    -1,
     182,   257,     5,   259,     5,   258,     7,    -1,   179,   251,
       5,   259,     5,   252,     7,    -1,   180,   251,     5,   259,
       5,   252,     7,    -1,   444,    -1,   298,    -1,     5,    -1,
      -1,   402,   403,    -1,   259,   206,   455,    -1,   259,   209,
     450,    -1,   259,   450,    -1,    -1,   404,   405,    -1,   153,
     448,     7,    -1,   154,   448,     7,    -1,   143,   296,     7,
      -1,   155,   296,     7,    -1,   140,   257,   397,   258,    -1,
      -1,   406,   407,    -1,   153,   448,     7,    -1,   154,   448,
       7,    -1,   143,   296,     7,    -1,   157,   448,     7,    -1,
     158,   448,     7,    -1,   140,   257,   397,   258,    -1,    -1,
     408,   409,    -1,   160,   448,     7,    -1,    88,   448,     7,
      -1,   161,   296,     7,    -1,    18,   448,     7,    -1,   140,
     257,   397,   258,    -1,    -1,   410,   411,    -1,   160,   448,
       7,    -1,   163,   448,     7,    -1,    88,   448,     7,    -1,
      18,   448,     7,    -1,   133,     5,     7,    -1,   164,   257,
     412,   258,    -1,   140,   257,   397,   258,    -1,   141,   257,
     397,   258,    -1,    -1,   412,   257,   413,   258,    -1,    -1,
     413,   414,    -1,    86,     5,     7,    -1,   112,     5,     7,
      -1,   130,   280,     7,    -1,    88,   448,     7,    -1,    99,
     296,     7,    -1,    18,     5,     7,    -1,    -1,   415,   416,
      -1,   257,   417,   258,    -1,   445,    -1,    -1,   417,   418,
      -1,    96,   454,     7,    -1,    96,     5,   290,     7,    -1,
     134,   454,   291,     7,    -1,   185,     5,     7,    -1,   112,
     257,   419,   258,    -1,    -1,   419,   257,   420,   258,    -1,
     419,   445,    -1,   419,   444,    -1,    -1,   420,   421,    -1,
      96,   454,     7,    -1,    75,   257,   422,   258,    -1,    -1,
     422,   117,   257,   423,   258,    -1,   422,     5,   257,   423,
     258,    -1,    -1,   423,   424,    -1,    -1,   383,   251,   425,
     300,   252,     7,    -1,    86,     5,     7,    -1,    -1,   130,
     426,   280,     7,    -1,    81,     5,     7,    -1,    83,     5,
       7,    -1,    -1,   427,   428,    -1,   257,   429,   258,    -1,
     445,    -1,   444,    -1,    -1,   429,   430,    -1,    96,   454,
       7,    -1,   187,     5,     7,    -1,   211,     5,     7,    -1,
     189,   455,     7,    -1,   140,   257,   433,   258,    -1,    -1,
     186,   454,   188,   454,   432,   257,   433,   258,    -1,    -1,
      -1,   433,   434,   435,    -1,   190,   251,   437,   440,   441,
     252,     7,    -1,   191,   251,   437,   440,   441,   252,     7,
      -1,   191,   251,   437,   440,   441,   252,   241,   235,   255,
     255,   454,     7,    -1,   191,   251,     6,   259,   448,   441,
     252,     7,    -1,   191,   251,     6,   259,   225,   251,   455,
     252,   441,   252,     7,    -1,    -1,   192,   251,   280,   436,
     259,   130,   280,   441,   252,     7,    -1,   444,    -1,   193,
     251,     6,   441,   252,     7,    -1,   454,   439,   259,    -1,
     454,   439,   438,     5,   439,   259,    -1,   242,    -1,   243,
      -1,   240,    -1,   241,    -1,    -1,   251,   280,   252,    -1,
     196,    -1,   197,   280,    -1,   198,   280,    -1,   200,   257,
     257,   451,   258,   257,   451,   258,   257,   451,   258,   258,
      -1,   199,   280,    -1,   199,   257,   296,   259,   296,   259,
     296,   258,   257,   450,   259,   450,   259,   450,   258,    -1,
     201,   257,   451,   258,    -1,   202,   257,   257,   451,   258,
     257,   451,   258,   258,   257,   448,   258,    -1,   203,   257,
     257,   451,   258,   257,   451,   258,   257,   451,   258,   258,
     257,   448,   259,   448,   258,    -1,   204,   257,   257,   451,
     258,   257,   451,   258,   257,   451,   258,   257,   451,   258,
     258,   257,   448,   259,   448,   259,   448,   258,    -1,   197,
     280,   205,     5,   257,   448,   259,   448,   258,   257,   448,
     258,    -1,    -1,   441,   442,    -1,   259,   206,   455,    -1,
     259,   206,   235,   455,    -1,   259,   206,   236,   455,    -1,
     259,   207,   448,    -1,   259,   214,    -1,   259,   215,    -1,
     259,   210,   448,    -1,   259,   211,     5,    -1,   259,   212,
     443,    -1,   259,   213,   443,    -1,   259,   211,   443,    -1,
     259,   208,   448,    -1,   259,   209,   450,    -1,   259,   195,
       5,    -1,   259,   217,     5,    -1,   259,   216,   448,    -1,
     259,    75,   450,    -1,   259,   218,   448,    -1,   259,   218,
     257,   451,   258,    -1,   259,   219,    -1,   259,   220,    -1,
     259,   136,   450,    -1,   259,   165,   257,   296,   259,   296,
     259,   296,   258,    -1,   259,   221,   298,    -1,   259,   222,
     257,   448,   259,   448,   259,   448,   258,    -1,   259,   223,
     257,   451,   258,    -1,   259,   224,     3,    -1,    -1,   443,
       6,    -1,    13,   249,   448,     8,   448,   250,    -1,    13,
     249,   448,     8,   448,     8,   448,   250,    -1,    13,     5,
     130,   257,   448,     8,   448,   258,    -1,    13,     5,   130,
     257,   448,     8,   448,     8,   448,   258,    -1,    14,    -1,
      15,   249,   448,   250,    -1,    17,    -1,    29,   251,   446,
     252,     7,    -1,   454,   227,   450,     7,    -1,   454,   227,
       6,     7,    -1,   454,   227,   225,   251,   455,   252,     7,
      -1,   454,   227,   456,     7,    -1,   454,   227,    28,   251,
     455,   252,     7,    -1,    11,   249,     6,   250,     7,    -1,
      11,   249,     6,   259,   451,   250,     7,    -1,    12,   249,
     454,   250,     7,    -1,    12,   249,   454,   250,   251,   448,
     252,     7,    -1,    -1,   446,   289,     5,    -1,   446,   289,
       5,   227,   448,    -1,   446,   289,     5,   227,     6,    -1,
      35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,    -1,
     454,    -1,   449,    -1,   249,   448,   250,    -1,   241,   448,
      -1,   246,   448,    -1,   448,   241,   448,    -1,   448,   240,
     448,    -1,   448,   242,   448,    -1,   448,   243,   448,    -1,
     448,   244,   448,    -1,   448,   248,   448,    -1,   448,   234,
     448,    -1,   448,   235,   448,    -1,   448,   239,   448,    -1,
     448,   238,   448,    -1,   448,   233,   448,    -1,   448,   232,
     448,    -1,   448,   230,   448,    -1,   448,   229,   448,    -1,
      35,   251,   448,   252,    -1,    36,   251,   448,   252,    -1,
      37,   251,   448,   252,    -1,    38,   251,   448,   252,    -1,
      39,   251,   448,   252,    -1,    40,   251,   448,   252,    -1,
      41,   251,   448,   252,    -1,    42,   251,   448,   252,    -1,
      43,   251,   448,   252,    -1,    44,   251,   448,   252,    -1,
      45,   251,   448,   259,   448,   252,    -1,    46,   251,   448,
     252,    -1,    47,   251,   448,   252,    -1,    48,   251,   448,
     252,    -1,    49,   251,   448,   252,    -1,    50,   251,   448,
     252,    -1,    51,   251,   448,   252,    -1,    52,   251,   448,
     259,   448,   252,    -1,    53,   251,   448,   259,   448,   252,
      -1,    54,   251,   448,   259,   448,   252,    -1,   448,   228,
     448,     8,   448,    -1,   448,   254,    -1,     4,    -1,     3,
      -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,   454,    -1,    -1,   448,    -1,   452,    -1,   257,   451,
     258,    -1,   448,    -1,   452,    -1,   451,   259,   448,    -1,
     451,   259,   452,    -1,   448,     8,   448,    -1,   448,     8,
     448,     8,   448,    -1,     5,   257,   258,    -1,     5,   257,
     451,   258,    -1,    24,   251,     5,   252,    -1,    25,   251,
       5,   259,     5,   252,    -1,    26,   251,   448,   259,   448,
     259,   448,   252,    -1,    27,   251,   448,   259,   448,   259,
     448,   252,    -1,     5,   261,   257,   448,   258,    -1,   453,
     261,   257,   448,   258,    -1,     5,    -1,   453,    -1,     6,
      -1,     5,    -1,   456,    -1,    10,   249,   455,   250,    -1,
      10,   249,   455,   259,   451,   250,    -1,   226,    -1,     9,
     251,   455,   259,   455,   252,    -1
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
    5299,  5304,  5315,  5320,  5324,  5327,  5337,  5353,  5362,  5368,
    5372,  5376,  5380,  5385,  5397,  5407,  5413,  5417,  5421,  5425,
    5429,  5434,  5446,  5455,  5460,  5464,  5468,  5472,  5476,  5488,
    5500,  5505,  5509,  5513,  5517,  5522,  5532,  5538,  5544,  5555,
    5557,  5563,  5575,  5580,  5590,  5619,  5622,  5625,  5633,  5651,
    5657,  5662,  5681,  5686,  5695,  5699,  5706,  5714,  5760,  5765,
    5772,  5774,  5777,  5779,  5786,  5791,  5796,  5799,  5806,  5810,
    5816,  5831,  5840,  5845,  5844,  5879,  5890,  5890,  5896,  5905,
    5923,  5929,  5934,  5937,  5939,  5944,  5951,  5955,  5962,  5974,
    5985,  5990,  5997,  5996,  6024,  6027,  6026,  6043,  6047,  6053,
    6059,  6066,  6075,  6074,  6085,  6090,  6099,  6111,  6135,  6136,
    6137,  6138,  6144,  6145,  6151,  6157,  6164,  6171,  6195,  6202,
    6214,  6227,  6247,  6273,  6306,  6328,  6353,  6357,  6364,  6371,
    6378,  6382,  6386,  6390,  6394,  6404,  6409,  6414,  6434,  6441,
    6450,  6459,  6468,  6475,  6483,  6487,  6496,  6500,  6504,  6512,
    6518,  6523,  6530,  6540,  6551,  6556,  6606,  6616,  6626,  6640,
    6654,  6680,  6684,  6698,  6700,  6715,  6721,  6727,  6733,  6744,
    6749,  6761,  6771,  6787,  6790,  6796,  6802,  6814,  6815,  6816,
    6817,  6818,  6819,  6820,  6821,  6822,  6823,  6824,  6825,  6826,
    6827,  6828,  6829,  6830,  6831,  6832,  6833,  6834,  6838,  6839,
    6840,  6841,  6842,  6843,  6844,  6845,  6846,  6847,  6848,  6849,
    6850,  6851,  6852,  6853,  6854,  6855,  6856,  6857,  6858,  6859,
    6860,  6861,  6862,  6863,  6864,  6865,  6866,  6867,  6868,  6869,
    6870,  6871,  6872,  6873,  6874,  6875,  6876,  6877,  6882,  6883,
    6884,  6885,  6886,  6887,  6888,  6906,  6925,  6927,  6933,  6936,
    6943,  6949,  6952,  6955,  6967,  6973,  6984,  7000,  7022,  7037,
    7075,  7083,  7095,  7103,  7115,  7117,  7124,  7127,  7142,  7147,
    7152,  7171,  7189
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
  "tEvaluationPoints", "tStore", "tStr", "tDate", "tDEF", "'?'", "tOR", 
  "tAND", "tAPPROXEQUAL", "tNOTEQUAL", "tEQUAL", "'<'", "'>'", 
  "tGREATERGREATER", "tLESSLESS", "tGREATEROREQUAL", "tLESSOREQUAL", 
  "'+'", "'-'", "'*'", "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", 
  "'^'", "'('", "')'", "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", 
  "'}'", "','", "'@'", "'~'", "$accept", "Stats", "@1", 
  "ProblemDefinitions", "@2", "ProblemDefinition", "Interactive", "@3", 
  "Groups", "@4", "Group", "@5", "MovingBand2DGroup", "@6", "@7", 
  "ReducedGroupRHS", "@8", "@9", "GroupRHS", "FunctionForGroup", 
  "ListOfRegionOrAll", "SuppListOfRegion", "SuppListTypeForGroup", 
  "ListOfRegion", "RecursiveListOfRegion", "IRegion", "DefineGroups", 
  "Comma", "DefineDimension", "MultipleIndex", "Index", "Functions", 
  "Function", "DefineFunctions", "Expression", "@10", "ListOfExpression", 
  "RecursiveListOfExpression", "WholeQuantityExpression", "@11", 
  "WholeQuantity", "@12", "@13", "WholeQuantity_Single", "@14", "@15", 
  "@16", "@17", "ArgumentsForFunction", "RecursiveListOfQuantity", 
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
     475,   476,   477,   478,   479,   480,   481,   482,    63,   483,
     484,   485,   486,   487,    60,    62,   488,   489,   490,   491,
      43,    45,    42,    47,    37,   492,    33,   493,    94,    40,
      41,    91,    93,    46,    35,    36,   494,   123,   125,    44,
      64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   262,   264,   263,   265,   266,   265,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   269,   268,   270,   271,   270,   272,   272,   273,   272,
     272,   272,   272,   272,   272,   275,   276,   274,   278,   279,
     277,   277,   280,   280,   281,   281,   282,   282,   283,   283,
     283,   284,   285,   285,   286,   286,   286,   287,   287,   287,
     287,   287,   287,   288,   288,   288,   289,   289,   290,   291,
     291,   292,   293,   293,   294,   294,   294,   294,   294,   295,
     295,   296,   296,   297,   296,   298,   298,   299,   299,   301,
     300,   302,   303,   304,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   305,   305,   305,   305,   305,
     305,   306,   305,   307,   305,   308,   305,   305,   305,   305,
     309,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   310,   310,   310,   311,   311,   312,   312,   312,
     313,   313,   314,   314,   315,   315,   316,   316,   317,   317,
     318,   318,   318,   319,   319,   320,   320,   321,   321,   321,
     322,   322,   323,   323,   324,   324,   324,   325,   325,   326,
     326,   327,   327,   327,   327,   327,   327,   328,   328,   328,
     329,   329,   330,   330,   331,   331,   331,   331,   331,   332,
     332,   332,   333,   333,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   335,
     335,   336,   336,   336,   337,   337,   338,   338,   338,   338,
     338,   338,   338,   339,   339,   340,   340,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   342,   343,   344,   342,
     345,   345,   346,   346,   347,   347,   347,   348,   348,   349,
     349,   350,   350,   351,   351,   352,   352,   353,   353,   354,
     354,   354,   355,   355,   356,   356,   357,   357,   357,   357,
     358,   358,   359,   359,   359,   360,   360,   361,   361,   361,
     361,   361,   362,   362,   362,   363,   363,   364,   364,   364,
     364,   364,   365,   364,   366,   364,   364,   367,   364,   364,
     364,   364,   364,   364,   368,   368,   369,   369,   369,   369,
     370,   370,   370,   370,   371,   371,   372,   372,   372,   373,
     373,   374,   374,   374,   374,   375,   375,   377,   378,   376,
     376,   376,   376,   376,   376,   376,   379,   379,   380,   381,
     382,   380,   383,   383,   383,   383,   383,   383,   383,   383,
     384,   384,   385,   385,   386,   386,   386,   387,   387,   388,
     388,   388,   389,   388,   388,   390,   390,   390,   391,   391,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   393,
     393,   394,   394,   395,   395,   396,   396,   397,   397,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   399,   398,   400,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     401,   401,   402,   402,   403,   403,   403,   404,   404,   405,
     405,   405,   405,   405,   406,   406,   407,   407,   407,   407,
     407,   407,   408,   408,   409,   409,   409,   409,   409,   410,
     410,   411,   411,   411,   411,   411,   411,   411,   411,   412,
     412,   413,   413,   414,   414,   414,   414,   414,   414,   415,
     415,   416,   416,   417,   417,   418,   418,   418,   418,   418,
     419,   419,   419,   419,   420,   420,   421,   421,   422,   422,
     422,   423,   423,   425,   424,   424,   426,   424,   424,   424,
     427,   427,   428,   428,   428,   429,   429,   430,   430,   430,
     430,   430,   432,   431,   433,   434,   433,   435,   435,   435,
     435,   435,   436,   435,   435,   435,   437,   437,   438,   438,
     438,   438,   439,   439,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   441,   441,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   442,   442,   443,   443,   444,   444,   444,   444,
     444,   444,   444,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   446,   446,   446,   446,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
     447,   447,   447,   447,   447,   447,   447,   447,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   449,   449,
     449,   449,   449,   449,   449,   449,   450,   450,   450,   450,
     451,   451,   451,   451,   452,   452,   452,   452,   452,   452,
     452,   452,   453,   453,   454,   454,   455,   455,   455,   455,
     455,   455,   456
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
       3,     9,     5,     3,     0,     2,     6,     8,     8,    10,
       1,     4,     1,     5,     4,     4,     7,     4,     7,     5,
       7,     5,     8,     0,     3,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     4,     4,     4,
       4,     4,     4,     6,     6,     6,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     3,
       1,     1,     3,     3,     3,     5,     3,     4,     4,     6,
       8,     8,     5,     5,     1,     1,     1,     1,     1,     4,
       6,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     4,     1,     5,    41,   734,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    20,     0,    17,    18,   735,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,    28,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   737,   736,     0,     0,   741,    19,
     738,   643,    43,   207,   170,   183,   239,    92,   300,   382,
     519,   550,     0,     0,   630,     0,   632,     0,     0,     0,
       0,    42,   574,     0,   716,     0,     0,     0,    27,    26,
      25,    23,    24,    22,    40,    30,    32,    33,    34,    35,
      31,    36,    37,    38,    39,     0,     0,    86,    44,     0,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   709,   708,
     734,     0,     0,     0,     0,     0,     0,   710,   711,   712,
     713,   714,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   717,   668,     0,
     718,   715,     0,     0,     0,     0,     0,     0,     0,     0,
      87,     0,     7,     0,   212,     9,   209,   211,   172,    10,
     185,    11,   244,    12,   240,   243,   242,   734,     0,     8,
      93,    98,    97,   305,    13,   301,   304,   303,   387,    14,
     383,   386,   385,   523,    15,   520,   522,   555,    16,   551,
     554,   553,   562,     0,     0,     0,     0,   582,     0,     0,
     734,    64,     0,    62,   572,     0,    89,   595,     0,     0,
     635,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   670,   671,     0,
     720,     0,   721,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   707,
     634,   637,   732,   639,     0,   641,     0,     0,   739,     0,
     633,   644,   734,     0,    45,    51,    54,    53,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,   631,   584,     0,     0,     0,     0,     0,     0,
       0,     0,   595,     0,     0,     0,   595,    77,   734,    74,
       0,    61,    72,    81,     0,    58,     0,    63,     0,   733,
     726,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   669,   719,
       0,   724,     0,   685,   684,   683,   682,   678,   679,   681,
     680,   673,   672,   674,   675,   676,   677,     0,     0,     0,
       0,     0,     0,     0,     0,    83,   716,     0,     0,     0,
       0,     0,   210,   213,     0,     0,   171,   173,     0,   103,
       0,   184,   186,     0,     0,     0,     0,     0,     0,   241,
     245,     0,     0,    86,     0,     0,     0,     0,   302,   306,
       0,     0,   392,   384,   388,   394,     0,     0,     0,     0,
     521,   524,     0,     0,     0,     0,     0,   552,   556,   564,
       0,     0,   585,   586,   103,   588,     0,     0,     0,     0,
       0,     0,     0,   580,   581,   578,   579,   576,     0,     0,
     595,     0,     0,     0,    86,     0,     0,     0,    90,     0,
       0,   596,   727,   728,     0,     0,     0,     0,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,     0,   697,
     698,   699,   700,   701,   702,     0,     0,     0,     0,   722,
     723,     0,     0,   640,     0,   742,   740,   646,   645,     0,
       0,    48,     0,    86,   734,     0,     0,     0,     0,   219,
       0,     0,   176,     0,   190,     0,     0,     0,   109,     0,
     292,     0,   734,     0,   253,   270,   285,   103,     0,     0,
       0,     0,   734,     0,   312,   336,   734,     0,   395,     0,
     734,     0,   530,    89,     0,     0,   564,     0,     0,     0,
     565,     0,     0,   626,     0,     0,     0,     0,     0,     0,
       0,     0,   583,   582,     0,     0,     0,   709,    79,    82,
      73,     0,    78,     0,    67,    59,    66,   575,   716,   716,
       0,     0,     0,     0,     0,   716,     0,   624,   624,   624,
     601,   602,     0,     0,     0,   616,   617,   105,     0,     0,
       0,     0,     0,     0,   638,     0,     0,     0,     0,   636,
     725,   706,   642,    91,     0,     0,    65,     0,     0,     0,
      46,     0,     0,   219,     0,   216,   214,     0,     0,     0,
     174,     0,     0,     0,   188,   104,     0,   187,     0,   248,
       0,   246,     0,     0,     0,     0,   103,    94,   100,   309,
       0,   307,     0,     0,     0,   389,     0,   417,     0,   525,
       0,     0,   528,   557,   565,   558,   560,   559,   563,     0,
       0,     0,     0,   103,     0,   590,     0,     0,     0,   567,
       0,     0,     0,   568,     0,     0,     0,    75,   595,    86,
     613,   618,   103,   610,     0,     0,   597,   600,   608,   609,
     603,   604,   607,   605,   606,   612,   611,     0,   614,   103,
     620,     0,     0,   623,   729,     0,     0,   696,   703,   704,
     705,    88,     0,    47,    50,    84,    52,     0,     0,   222,
     217,   221,   215,   178,   175,   192,   189,     0,     0,   734,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,   666,
       0,   150,     0,     0,     0,     0,     0,   141,   143,     0,
       0,     0,     0,     0,     0,     0,     0,   110,   111,   139,
       0,   136,   715,   294,   252,   247,   255,   249,   272,   250,
     287,   251,    95,     0,   308,   315,   310,   314,     0,     0,
       0,     0,   311,   337,   339,   338,   390,   398,   391,   397,
       0,   526,   534,   529,   533,   532,   527,   561,   566,     0,
     628,   627,     0,     0,     0,     0,     0,     0,   577,   595,
     570,     0,    80,    76,     0,     0,     0,     0,   598,   599,
     625,     0,   107,     0,     0,     0,     0,     0,    49,     0,
      55,   218,     0,     0,     0,   101,   102,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   132,
     134,     0,   158,   156,   153,   155,   154,     0,   734,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,   167,     0,     0,     0,     0,    96,     0,   355,   355,
     366,   344,     0,     0,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   446,   448,   393,   418,
     469,     0,     0,     0,   103,     0,     0,     0,     0,     0,
       0,     0,    60,    71,     0,     0,   103,   615,   106,   103,
       0,   622,   730,   731,     0,     0,     0,     0,     0,     0,
     103,   103,   103,   103,     0,     0,     0,   103,   220,   223,
       0,     0,   177,   179,     0,     0,     0,   191,   193,     0,
     109,     0,     0,     0,     0,     0,   109,   109,     0,   135,
     159,     0,   381,     0,   131,   130,   129,   128,   127,   123,
     124,   126,   125,   119,   120,   115,   118,   121,   116,   122,
     157,   160,   163,     0,   165,     0,     0,   137,     0,     0,
       0,     0,   293,   295,     0,     0,     0,     0,   105,   105,
       0,     0,   254,   256,     0,     0,     0,   271,   273,     0,
       0,     0,   286,   288,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   716,   327,   313,   316,   372,   372,   372,
       0,     0,     0,     0,     0,   716,     0,     0,     0,   396,
     399,   408,     0,     0,   103,   103,     0,     0,     0,     0,
       0,     0,     0,     0,   427,     0,   477,     0,   484,     0,
     492,   499,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   531,   535,   629,     0,     0,     0,
       0,     0,     0,     0,     0,   573,    89,    69,     0,   108,
       0,    85,     0,     0,     0,     0,     0,   103,     0,   103,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
     167,   197,     0,     0,   148,     0,   149,     0,     0,   145,
       0,     0,     0,   109,   380,     0,   162,   164,     0,     0,
       0,     0,     0,     0,    89,     0,     0,   266,     0,     0,
       0,     0,     0,     0,   281,   283,     0,   277,   279,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     734,   322,     0,     0,     0,     0,   109,     0,     0,     0,
       0,   373,   374,   375,   376,   377,   378,   379,     0,     0,
     340,   356,     0,   341,     0,   342,   367,     0,     0,     0,
     349,   343,   345,     0,     0,   411,     0,    89,     0,     0,
       0,   415,     0,   413,     0,     0,   419,     0,     0,   420,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,   105,   538,     0,     0,     0,     0,     0,
       0,     0,   571,     0,    70,   103,     0,     0,   225,   226,
     231,   232,     0,   235,     0,   234,   228,   227,    86,   229,
     224,     0,   233,   181,   180,     0,     0,   194,   195,     0,
       0,     0,   109,     0,   142,     0,     0,   113,   166,     0,
     168,   296,   297,   298,     0,   257,   258,     0,     0,     0,
      86,   262,   263,   264,   265,   274,    86,   276,    86,   275,
     290,   289,   291,   332,   330,   331,   320,   318,   319,   317,
       0,   334,   326,   333,   329,   321,     0,     0,     0,     0,
       0,     0,   363,   357,     0,   369,     0,     0,     0,   401,
     400,    86,   402,   409,   403,   406,   407,    86,   404,   405,
       0,     0,     0,   103,     0,     0,     0,     0,   103,     0,
       0,     0,   103,     0,     0,   103,   421,   478,     0,     0,
     103,     0,     0,     0,     0,   422,   485,     0,     0,     0,
       0,     0,   103,   423,   493,     0,     0,     0,     0,     0,
       0,     0,     0,   424,   500,   103,     0,   103,   716,   716,
     716,     0,   716,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   471,   470,   472,   472,     0,   536,     0,
     716,     0,     0,     0,     0,   569,     0,     0,    56,   103,
     103,     0,   103,   182,   199,   196,     0,   117,   161,     0,
       0,     0,   152,     0,     0,   299,   259,     0,   260,     0,
     282,     0,   278,     0,   324,     0,     0,     0,   361,   362,
     364,     0,   360,   109,   368,   109,   346,   347,     0,     0,
       0,     0,   348,   350,   410,     0,   414,     0,   425,   417,
     426,     0,     0,     0,     0,     0,     0,     0,     0,   417,
       0,     0,     0,     0,     0,   417,     0,     0,     0,     0,
       0,     0,     0,     0,   417,     0,     0,     0,     0,     0,
     417,   417,     0,     0,   509,     0,   453,     0,     0,     0,
       0,     0,     0,   457,   458,     0,     0,     0,     0,     0,
       0,     0,   452,     0,     0,     0,     0,   537,     0,     0,
       0,     0,     0,     0,   619,   621,     0,     0,     0,     0,
       0,     0,   151,     0,     0,   144,   114,     0,     0,     0,
     284,   280,   334,     0,   323,   328,     0,   358,   370,     0,
       0,     0,     0,   412,   416,     0,     0,   716,     0,   716,
       0,     0,     0,   103,     0,   481,   479,   480,   482,   103,
       0,   488,   486,   487,   489,   490,   103,   497,   495,     0,
     494,   496,   504,   503,   505,     0,     0,   501,   502,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   716,   473,     0,
     541,   541,     0,   716,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
     200,     0,     0,   169,     0,     0,     0,   335,   365,     0,
       0,   351,   352,   353,   354,   428,   430,     0,     0,     0,
       0,   436,     0,     0,   483,     0,   491,     0,   498,   507,
     508,   511,   506,   450,     0,     0,   434,   435,     0,     0,
       0,     0,     0,   463,   467,   468,     0,   466,     0,   447,
       0,   716,   476,   449,   372,   372,   594,     0,   587,   591,
       0,     0,     0,   238,   237,   230,   236,     0,     0,     0,
       0,     0,     0,     0,   147,     0,   261,   325,   109,     0,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
       0,   103,     0,   103,     0,     0,     0,     0,     0,     0,
     103,     0,   474,   475,     0,     0,     0,   546,   540,     0,
     542,   539,   716,     0,     0,     0,   201,   202,   203,   204,
     205,   206,     0,     0,     0,     0,   417,   438,   439,     0,
       0,   437,     0,     0,   417,     0,     0,     0,     0,   103,
       0,     0,   510,   512,     0,   433,     0,   454,   455,   456,
       0,     0,   460,     0,     0,     0,     0,     0,     0,     0,
     543,     0,     0,     0,     0,   146,     0,     0,     0,     0,
       0,   716,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,     0,     0,   465,     0,
     548,   549,   545,     0,   109,   589,     0,     0,     0,   267,
     359,   371,   429,   440,     0,   417,     0,   444,   417,   518,
     513,   516,   517,   514,   515,   451,   432,     0,   417,   417,
     459,     0,   547,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   464,     0,   592,     0,    57,
       0,     0,   442,   417,   445,   431,     0,     0,   544,     0,
       0,     0,     0,   461,   462,     0,   268,     0,   443,     0,
       0,     0,     0,     0,   441,   593,    89,     0,     0,   269
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    26,   108,   183,
     304,   645,   305,  1005,  1636,   233,   487,   719,   234,   235,
     605,   865,   995,   341,   484,   342,   533,   181,   403,   347,
     404,   114,   200,   433,   547,   548,  1504,   873,   665,   666,
     807,  1043,  1533,   808,   895,   896,  1372,   889,   930,  1065,
    1067,   111,   310,   417,   659,   883,  1023,   112,   311,   422,
     661,   884,  1028,  1366,  1641,  1740,   109,   186,   309,   413,
     654,   882,  1019,   113,   194,   312,   430,   672,   933,  1083,
    1389,  1967,  2000,   673,   934,  1088,  1239,  1398,  1236,  1396,
     674,   935,  1093,   668,   932,  1073,   115,   205,   315,   439,
     682,   937,  1106,  1411,  1652,  1256,  1546,   683,   833,  1110,
    1282,  1428,  1563,  1107,  1271,  1553,  1749,  1109,  1276,  1555,
    1750,  1272,   809,   116,   210,   316,   444,   569,   686,   942,
    1120,  1286,  1431,  1292,  1437,   840,   979,  1160,  1161,  1505,
    1623,  1718,  1308,  1457,  1310,  1466,  1312,  1474,  1313,  1484,
    1699,  1830,  1883,   117,   215,   317,   451,   690,   981,  1165,
    1507,  1794,  1850,  1934,  1899,   118,   219,   318,   458,    27,
     319,   580,   699,    81,   344,   226,   478,   334,   332,   348,
     491,   732,   980,    28,   107,   810,   270,   168,   169,   271,
     272,    29,   171,    59,    60
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1370
static const short yypact[] =
{
   -1370,    75, -1370, -1370,   116,  3856,  -171,   -96,   -62,   928,
     143,   888,   184,   -29,   -13,     3,    26,    70,    93,    98,
     101,   168,   170,    16, -1370, -1370,   332, -1370, -1370,    77,
     156,   185,   464,   439,   485, -1370,   502,   508,   511,   524,
     530, -1370,   541, -1370,   543,   560,   564,   570,   579,   590,
     603,   611,   613,   626, -1370, -1370,   222,   304, -1370, -1370,
   -1370, -1370, -1370,   883, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370,   448,    22, -1370,   396, -1370,   397,   411,   417,
     422, -1370, -1370,   402,  2256,  3805,  -129,   427, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370,   184,   184,    53,   421,    94,
   -1370,  -121,   -83,   241,   588,   400,   466,   122,   627,   439,
     569,  3805,  3805,   439,   202,    69,   681,  3805, -1370, -1370,
      24,   690,   461,   474,   491,   506,   518, -1370, -1370, -1370,
   -1370, -1370,   523,   534,   551,   576,   594,   600,   602,   615,
     619,   641,   643,   650,   674,   683,   691,   712,   719,   726,
     740,   745,   747,  3805,  3805,  3805,  3640,  2364, -1370,   787,
   -1370, -1370,   798,  4562,   801,  3640,    64,   583,   -30,   850,
   -1370,  1002, -1370,  1340, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370,  -158,   760, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370,   756,  3791,  4913,  1563,   765,   759,  1563,
     -99, -1370,     8, -1370, -1370,   772,   769, -1370,  4589,  1621,
   -1370,  1034,  1038,  3805,  3805,   184,  3805,  3805,  3805,  3805,
    3805,  3805,  3805,  3805,  3805,  3805,  3805,  3805,  3805,  3805,
    3805,  3805,  3805,  3805,  3805,  3805,   184,  -206,  -206,  4936,
    2364,   333, -1370,  3805,  3805,  3805,  3805,  3805,  3805,  3805,
    3805,  3805,  3805,  3805,  3805,  3805,  3805,  3805,  3805, -1370,
   -1370, -1370, -1370, -1370,   -26, -1370,  3805,   184, -1370,  3640,
   -1370,   825,    49,   807, -1370, -1370, -1370, -1370,   -23,    90,
     336,    81,    60,    62, -1370,   456,    72,   379,   438,   806,
    3805,  3805, -1370, -1370,    69,    69,    25,   811,   823,   824,
     826,   827, -1370,    69,   244,  3692, -1370,  1074,   146, -1370,
    3640, -1370, -1370, -1370,   828, -1370,   832, -1370,    85, -1370,
   -1370,   348,   834,   833,  3831,  3884,   839,  4959,  4986,  5013,
    5040,  5067,  5094,  5121,  5148,  5175,  5202,  3941,  5229,  5256,
    5283,  5310,  5337,  5364,  3964,  3987,  4010,   843, -1370, -1370,
    3640,  3854,  3907,  1762,  3519,  1373,  1373,   899,   899,   899,
     899,   545,   545,  -206,  -206,  -206,  -206,  1089,  5391,   853,
      30,  3744,    21,   882,   884, -1370,  2204,   887,  3805,    33,
    1105,   439, -1370, -1370,   858,  1111, -1370, -1370,   864,    84,
    1117, -1370, -1370,   866,  1120,  1121,   870,   872,   881, -1370,
   -1370,   917,   896,   237,  1145,  1146,   898,   923, -1370, -1370,
    1174,   931, -1370, -1370, -1370, -1370,  1184,   933,   439,  1188,
   -1370, -1370,   439,   937,  1190,   184,  1191, -1370, -1370, -1370,
    3924,  2198,   993, -1370,    84, -1370,   946,  3640,   948,   949,
     950,   276,   956, -1370, -1370, -1370, -1370, -1370,  1195,   958,
    2347,   284,  3860,   953,   364,   480,  1082,    34, -1370,  1207,
    3794, -1370, -1370, -1370,  1210,  3805,  3805,  1213, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,  3805, -1370,
   -1370, -1370, -1370, -1370, -1370,  3805,  3805,  3805,  1214,  2364,
   -1370,  3805,  3805, -1370,  1215, -1370, -1370, -1370,  2347,   959,
    3805, -1370,    79,   287,   -14,  1216,    79,  5418,   962, -1370,
    1218,    50, -1370,  1219, -1370,   978,   979,  1220, -1370,  1225,
   -1370,  1226,   215,  1228, -1370, -1370, -1370,    84,  1009,  1236,
    1239,  1238,   215,  1242, -1370, -1370,   215,  1244, -1370,   984,
     215,  1246, -1370,   769,  1247,  1248, -1370,  1249,  1251,  1252,
     988,  3805,  3805, -1370,  1255,  1003,  3640,   496,  3640,  3640,
    3640,  1254, -1370,   765,   184,   367,    76,  1262,  2347, -1370,
   -1370,     9, -1370,    69, -1370, -1370, -1370, -1370,  2503,  2503,
    1015,  1268,   440,  3805,  3805,  2503,  3805,  1269, -1370, -1370,
   -1370, -1370,  3805,  1274,  2370, -1370, -1370,  1027,  1041,  1042,
    1297,  1050,  4033,  4056, -1370,  5445,  5472,  5499,  5526, -1370,
    2347,  2347, -1370, -1370,  4616,    79, -1370,  1298,  1299,  1303,
   -1370,  1305,  1077, -1370,   487, -1370, -1370,  1063,  1320,   526,
   -1370,   557,  3805,  1323, -1370, -1370,  2142, -1370,   559, -1370,
    1324, -1370,   565,   591,   604,  1325,    84, -1370, -1370, -1370,
    1326, -1370,   493,    41,  1327, -1370,   546, -1370,  1329, -1370,
     669,  1330, -1370, -1370,  1072, -1370, -1370, -1370, -1370,   332,
     943,  5553,  1083,    84,   606, -1370,   617,   630,   646, -1370,
    1079,  1087,  1334, -1370,  1108,  3805,    14, -1370, -1370,   372,
   -1370, -1370,    84, -1370,   184,   184, -1370,  2347,  2347, -1370,
    2347, -1370,  1342,  1342,  1342,  2347, -1370,  3640,  2347,    84,
   -1370,  3805,  3640, -1370, -1370,  3805,  3805, -1370, -1370, -1370,
   -1370, -1370,  1343, -1370, -1370,  1092, -1370,  1290,   598, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370,  5576,  1106,   290,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
    1109, -1370,  1110,  1112,  1114,  1116,  1119, -1370, -1370,  1354,
    2142,  2142,  2142,  2142,  1365,    42,  1367,  5952,  -139,  1122,
    1122, -1370,  1124, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370,  1370, -1370, -1370, -1370, -1370,  1123,  1125,
    1126,  1127, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
    1741, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,  3805,
   -1370, -1370,  3805,  1143,  1148,  1152,  1154,  1155, -1370, -1370,
   -1370,  1158,  2347, -1370,   408,  1129,    59,  1163, -1370, -1370,
   -1370,   664, -1370,   671,  4079,   673,  5603,  5630, -1370,  3805,
   -1370, -1370,   761,    73,   430, -1370, -1370, -1370,  1157,  1128,
    1157,  2142,  1428,  1437,  1438,  1196,  1198,  1211,  1200,  1200,
    1200,  3470, -1370, -1370, -1370, -1370, -1370,   439,     1,  1192,
   -1370,  2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,
    2142,  2142,  2142,  2142,  2142,  2142,  2142,  1455,  3805,  2083,
   -1370,  1240,   330,  1032,   434,   236, -1370,   941, -1370, -1370,
   -1370, -1370,   567,    58,    10,   102,  1257,  1258,  1276,  1278,
    1280,  1281,  1283,  1457,  -156,   -21,    44,  1243,  1284,  1286,
    1287,  1288,  1291,  1292,  1304,  1306,  1245,  1256,  1307,  1310,
    1313,  1314,  1318,  1315,  1316,  1319, -1370, -1370, -1370, -1370,
   -1370,    68,  4643,  4102,    84,  3640,  3640,  3640,  3640,   412,
    1264,  1492, -1370, -1370,   439,     8,    84, -1370, -1370,    84,
    3805, -1370, -1370, -1370,  4670,  1328,    69,    69,    69,    69,
     103,   165,    84,    84,  1321,  1465,  1496,   173, -1370, -1370,
      71,  1528, -1370, -1370,  1333,  1536,  1549, -1370, -1370,  1331,
   -1370,  1344,  2234,  1336,  1335,  1345, -1370, -1370,  1341, -1370,
   -1370,  1348, -1370,  2142,  3730,  1463,   922,   922,   922,  1212,
    1212,  1212,  1212,   465,   465,  1200,  1200,  1200,  1200,  1200,
   -1370, -1370, -1370,  1346,  5952,   413,  3585, -1370,  1594,    86,
    1595,   439, -1370, -1370,  1613,  1614,  1615,  1371,  1027,  1027,
      69,    69, -1370, -1370,  1617,    35,    36, -1370, -1370,  1624,
     439,  1625, -1370, -1370,  1626,  1631,  1632,    92,   439,  1633,
    1637,  1639,    69,  2503, -1370, -1370, -1370,  1422,  1967,  1293,
     316,  1638,   439,    39,   184,  2503,   184,    45,  1644, -1370,
   -1370, -1370,   439,  1643,    84,    84,  1669,  1672,  1673,  1674,
    1676,  1678,  1679,  1680, -1370,  3805, -1370,  3805, -1370,  3805,
   -1370, -1370,    69,   184,  1681,  1682,  1683,  1684,  1686,  1687,
     439,   439,  1694,  1695,  1705,  1707,  1708,   439,  1710,   439,
    1393,  1469,  1468,   439, -1370, -1370, -1370,  3805,  1476,   678,
     687,   694,   696,  1719,   439, -1370,   769, -1370,  1479, -1370,
    4125, -1370,  1481,  1732,  1733,  1735,  1738,    84,  1740,    84,
    1742,  1743,  1744,  1234,  1745,  1746,    84,  1761,  1764,  1765,
    1240, -1370,  1766,  1767, -1370,  1510, -1370,  2142,  1772, -1370,
    1491,  1524,  1518, -1370, -1370,  1920, -1370, -1370,  2142,  1527,
     699,  1776,  1777,  1778,   769,  1779,    54,  1522,  1782,  1781,
    1785,  1791,  1800,  1801, -1370, -1370,  1803, -1370, -1370,  1805,
    1810,  1812,  1813,  1816,  1817,  1818,  1819,  1820,  1821,  1824,
     308, -1370,  1825,  1827,  1828,  1830, -1370,  1833,  1834,  1835,
    1590, -1370, -1370, -1370, -1370, -1370, -1370, -1370,    69,  1836,
   -1370, -1370,  1591, -1370,    69, -1370, -1370,  1593,  1840,  1841,
   -1370, -1370, -1370,  1852,  1854, -1370,  1856,   769,  1857,  1858,
    1859, -1370,  1861, -1370,  1862,  1619, -1370,  1620,  1622, -1370,
    1616,  1618,  1623,  1636,  1640,  1642,  1646,  4148,   891,  4171,
     686,  4194,   126,    78,  1648,  1628,  1665,  1666,  1670,  1671,
    1675,  1685,  1688,  1689,  1690,  1693,  1696,  1697,  1701,  1715,
    1717,  1629,    46,    46, -1370,  1866,  4697,  1627,  1641,  1720,
    1645,  1691, -1370,  1871, -1370,    84,  3805,     8, -1370, -1370,
   -1370, -1370,  1721, -1370,  1722, -1370, -1370, -1370,  1723, -1370,
   -1370,  1725, -1370, -1370, -1370,  1889,   702, -1370, -1370,    69,
    5927,  1702, -1370,  3805, -1370,  1928,  1727, -1370,  5952,    69,
   -1370, -1370, -1370, -1370,  1926, -1370, -1370,  1931,  1829,  1932,
    1723, -1370, -1370, -1370, -1370, -1370,   709, -1370,   714, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
    1728,  1692, -1370, -1370, -1370, -1370,  1737,  1938,  1946,  1978,
    1984,  1983, -1370, -1370,  1986, -1370,  1991,  2000,   358, -1370,
   -1370,   717, -1370, -1370, -1370, -1370, -1370,   721, -1370, -1370,
    2002,  1754,  2005,    84,  2008,  2009,  3805,  2010,    84,    69,
    3805,  1763,    84,  3805,  3805,    84, -1370, -1370,  3805,  1768,
      84,  3805,  3805,  3805,  3805, -1370, -1370,  3805,  3805,  3805,
    1773,  3805,    84, -1370, -1370,  3805,  3805,  2013,  1787,  1788,
    3805,  3805,  1789, -1370, -1370,    84,  2012,    84,  2503,  2503,
    2503,  3805,  2503,  2014,  2015,  2018,  2030,  3805,  2031,  2052,
      69,  2057,  2056, -1370, -1370, -1370, -1370,     5, -1370,  1814,
    2503,  3640,  1815,  3640,  3640, -1370,  1838,  4724, -1370,    84,
      84,  1234,    84, -1370, -1370, -1370,  1823, -1370, -1370,  1831,
    4217,  1832, -1370,  2142,  1847, -1370, -1370,  2068, -1370,  2071,
   -1370,  2072, -1370,  2074, -1370,   439,  2075,  2078, -1370, -1370,
   -1370,  1848, -1370, -1370, -1370, -1370, -1370, -1370,  1157,  1157,
    1157,    69, -1370, -1370, -1370,   439, -1370,   439, -1370, -1370,
   -1370,  1849,  1844,  1846,  4240,  1850,  1855,  1851,  4263, -1370,
    2099,   538,   639,  2101,  4286, -1370,  2104,  1053,  1081,  1197,
    1233,  4309,  1250,  1282, -1370,  1489,  2149,  1561,  1729,  2150,
   -1370, -1370,  1799,  1826, -1370,   441, -1370,  1907,  1915,  1917,
    1911,  4332,  1912, -1370, -1370,  1945,  1952,  5657,  1962,  1963,
    1957,   723, -1370,   479,   484,  1960,  1961, -1370,  3805,  1964,
     727,  3805,   736,   751, -1370, -1370,  1965,  1968,  1969,  1975,
    1970,   670, -1370,  1974,  3805, -1370,  5952,  2011,  2212,  2016,
   -1370, -1370,  1692,  2020, -1370, -1370,  2220, -1370, -1370,  2259,
    2260,  2261,  2263, -1370, -1370,  2504,  2268,  2503,  3805,  2503,
    2258,  2269,  2272,    84,  2619, -1370, -1370, -1370, -1370,    84,
    2687, -1370, -1370, -1370, -1370, -1370,    84, -1370, -1370,  2740,
   -1370, -1370, -1370, -1370, -1370,  2802,  2922, -1370, -1370,   771,
    2271,  3805,    84,  2278,  2304,  3805,   184,   184,  3805,  3805,
    2305,  2306,  2307,   184,  2308,  2144,  2309,  2317, -1370,  2311,
   -1370, -1370,  4751,  2503,  2061,  4778,  2067,  2069,  2073,  2321,
    2323,  2324,  2326,  2329,  3805,  3805,  3805,  3805,  3805, -1370,
   -1370,  2082,  4805, -1370,  2235,  2338,  2371, -1370, -1370,  2118,
    2120, -1370, -1370, -1370, -1370,  2365, -1370,  2128,  5684,  2125,
    2126, -1370,  2134,  2130, -1370,  2131, -1370,   494, -1370, -1370,
   -1370, -1370, -1370, -1370,  4355,   548, -1370, -1370,  5711,  2135,
    2140,  4378,  4401, -1370, -1370, -1370,   777, -1370,   184, -1370,
     184,  2503, -1370, -1370,   976,  1730, -1370,  2136, -1370, -1370,
    2137,  3640,     8, -1370, -1370, -1370, -1370,  2386,  2477,  2494,
    2778,  2795,  3078,  3805, -1370,  2393, -1370, -1370, -1370,  1157,
    2168,  2427,  2428,  3805,  3805,  2436,    84,  3805,  2187,  3805,
     127,    84,  2440,    84,  2442,  2444,  2447,  3805,  3805,  2448,
      84,   790, -1370, -1370,  2451,  2452,  2454, -1370, -1370,  2209,
   -1370, -1370,  2503,  3805,   792,  2211, -1370, -1370, -1370, -1370,
   -1370, -1370,  4832,  2214,  2228,  2231, -1370, -1370, -1370,  5738,
    4424, -1370,  2233,  4447, -1370,  5765,  2481,  2482,  3805,    84,
    2483,    69, -1370, -1370,  2237, -1370,   554, -1370, -1370, -1370,
    5792,  5819, -1370,  2232,  2484,  2488,  2487,  2489,  2491,    69,
   -1370,  2241,  4470,  2242,  3805, -1370,  2496,  2497,  2505,  2987,
    2507,  2503,  2238,  3805,  3040,  2253,  2508,  2509,  3108,  2513,
    2515,  2517,  2518,  2524,    84,  2254,  2275,  2552, -1370,  2302,
   -1370, -1370, -1370,  2554, -1370, -1370,  3805,  2310,  5846, -1370,
   -1370, -1370, -1370, -1370,  2303, -1370,  5873, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370,  2312, -1370, -1370,
   -1370,  2558, -1370,  2316,  4859,  3805,  2562,  2510,  3805,  3105,
    2313,  3222,  2564,  3287,  3340, -1370,  2566, -1370,  4493, -1370,
      69,  4516, -1370, -1370, -1370, -1370,  2571,  2576, -1370,  3805,
    2577,  3805,  3405, -1370, -1370,  4539, -1370,  5900, -1370,  3805,
    2468,  2602,  4886,  2605, -1370, -1370,   769,  2606,  2356, -1370
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370,  -341, -1370, -1370,  -290,  1546,
   -1370, -1370,  1547,  -484, -1370,  -513, -1370,  -384,  -537,  -572,
   -1370, -1370, -1370, -1370,  -455, -1370,  -611, -1370,  -968, -1370,
     475, -1370, -1370, -1370, -1370, -1370, -1370, -1370,  1811, -1370,
    1420, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
    1972, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370,   970, -1370, -1370, -1370,
   -1370, -1370, -1370,  1698, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1104,  -749, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1369, -1370, -1370, -1370,  1295,
    1132, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370,   902, -1370, -1370, -1370, -1370, -1370, -1370, -1370, -1370,
   -1370,  2050, -1370,  1930, -1370,  2506, -1370,  2038,  2406,  -310,
   -1370,   459,    66,   -36, -1370, -1370,   113,  -460,  -549,  -167,
     -82, -1370,    -5,   -74,   -77
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -668
static const short yytable[] =
{
      30,   691,   170,   606,   658,  1277,     6,   172,   294,   585,
    1625,   337,   337,   338,   338,   670,   740,   337,    72,   338,
     887,     6,   471,   432,   529,   680,   481,   120,    87,   684,
     230,   177,   178,   688,   462,   463,   465,   337,   538,   338,
    1234,  1237,   288,   472,     6,   903,     6,   904,   289,   560,
       6,  1503,     7,     8,    73,    74,    75,   656,    76,   720,
     721,  1386,  1205,     6,   993,   535,   729,   230,  1211,  1212,
      13,   295,   351,   187,   230,     3,   230,   196,   202,   207,
     212,   216,   221,   713,   646,    73,    74,    75,   717,    76,
      31,   646,    82,   313,   231,  1135,  1475,  1246,   604,     6,
     601,  1136,   675,    31,    30,     7,     8,   545,    30,    30,
      30,    30,    30,    30,   222,   927,    -3,   928,   227,   227,
     236,   174,  1626,    13,   994,   545,   545,     6,   423,   110,
     175,   231,   400,     7,     8,  1198,   188,   189,   231,  1029,
     231,  1031,  1020,  1162,  1468,  1876,   424,   307,   231,   649,
      41,    13,   -65,    32,  1021,   231,   425,   426,   828,   829,
     830,   831,    31,   418,  1163,   427,  1476,   428,   440,   419,
     595,   356,   409,   485,   190,   191,   410,   420,   308,   195,
     201,   206,   211,   546,   220,   905,   411,    33,   545,    54,
      55,   647,   377,    56,    57,   651,   545,   167,   173,  1247,
    1665,   546,   546,   863,   406,   441,   811,     6,   228,  1248,
    1674,  1477,   442,  1877,  1469,  1878,  1680,   407,  1478,  1479,
     298,   823,    61,   399,   397,  1689,  1879,   343,   408,   299,
    1137,  1695,  1696,   380,   224,   225,  1138,   -65,  1480,  1880,
     238,  1481,  1482,   239,    62,  1376,     6,    31,   853,   306,
     716,   906,     7,     8,    73,    74,    75,  1881,    76,   122,
      63,  1124,    31,  1627,   546,   339,  1470,   867,   340,   340,
      13,   121,   546,    71,   340,   530,   267,   268,   269,   232,
     526,   239,   464,    64,   872,    31,  1471,  1472,  1416,   380,
     539,   339,  1235,  1238,   340,  1139,  1285,   907,   520,   832,
     587,  1140,  1291,   739,   752,   179,   402,   657,   236,  1122,
      31,   657,   180,   718,   431,   296,   232,   714,   429,   236,
     236,   236,  1089,   232,   170,   232,  1164,    65,   236,   172,
     443,  1022,  1090,   232,  1091,   866,  1483,   489,    83,   421,
     811,   811,   811,   811,   490,    73,    74,    75,   412,    76,
      66,   184,   185,  1125,  1187,    67,   354,   355,    68,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   213,
     214,   578,   445,    84,  1473,  1882,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,  1278,   483,  1529,     6,   541,    31,   864,   398,
      58,     7,     8,    73,    74,    75,  1189,    76,   414,   704,
     553,   706,   707,   708,  1196,    69,  1279,    70,  1068,    13,
     563,   811,   415,   460,   461,   567,  1558,  1559,  1069,  1070,
    1071,   571,    85,   573,     6,    54,    55,   575,   480,    56,
      57,   811,   811,   811,   811,   811,   811,   811,   811,   811,
     811,   811,   811,   811,   811,   811,   811,  1229,  1230,   811,
      86,     6,   657,   105,  1560,   446,    31,     7,     8,    73,
      74,    75,   343,    76,   473,   474,   475,   476,  1561,   559,
    1126,   447,    88,   519,  1092,    13,   180,  1909,   192,   193,
      73,    74,    75,   477,    76,  1914,    73,    74,    75,    89,
      76,  1177,  1024,   448,   528,    90,  1025,  1026,    91,   167,
     711,   537,    77,    78,    79,    80,   170,   170,   591,  1168,
    1084,    92,  1085,   170,   452,   490,   596,    93,   726,   648,
    1086,  1178,   434,   490,  1179,  1676,   180,   806,    94,   989,
      95,    31,   435,   106,  1255,  1188,  1190,  1191,  1192,    73,
      74,    75,  1197,    76,   449,  1410,  1289,    96,   436,    31,
     871,    97,   437,  1280,  1281,   875,  1969,    98,   453,  1971,
      73,    74,    75,   811,    76,  1657,    99,  1658,  1072,  1973,
    1974,   379,   380,   197,   416,   598,   343,   100,   236,     7,
       8,    73,    74,    75,  1344,    76,   492,   380,   632,   633,
     101,    73,    74,    75,  1992,    76,  1562,    13,   102,   712,
     103,   635,   600,   180,   -68,   454,   490,   455,   636,   637,
     638,   180,     6,   104,   640,   641,   119,   450,     7,     8,
      73,    74,    75,   644,    76,   122,  1677,   835,   123,   456,
     868,   869,  1384,  1111,   845,   198,    13,   203,   204,   127,
     991,   812,   124,  1112,  1173,  1217,    58,   490,   125,  1297,
    1298,   490,  1218,   126,     6,   724,   725,   176,    30,   182,
       7,     8,    73,    74,    75,    30,    76,   237,  1027,  1387,
    1849,  1849,  1087,  1700,   700,   701,   457,   240,    13,   223,
    1701,  1113,  1114,  1115,  1116,  1117,  1118,   922,   923,   924,
     925,   343,   241,   926,   438,  1433,  1183,  1184,  1185,  1186,
     761,   167,   167,   208,   209,   242,   727,   728,   167,   730,
    1199,  1716,  1352,  1358,  1354,   735,  1719,   738,  1717,   380,
     602,  1361,   243,  1717,   759,   760,  1828,   811,   827,   834,
     825,   826,   839,  1829,   705,   380,   844,   244,   811,  1733,
    1734,  1735,  1736,  1737,  1738,    82,   274,   275,   276,   245,
     277,   278,   279,   280,   246,   767,   281,   282,   283,   284,
     285,   286,   287,   763,   764,   247,   288,   285,   286,   287,
    1231,  1232,   289,   288,   290,   812,   812,   812,   812,   289,
    1832,   909,   248,   837,   838,   291,  1923,  1833,   293,  1659,
    1660,  1661,  1254,  1924,   765,   766,   813,   814,  1169,  1170,
    1171,  1172,   816,   817,   761,  1119,  1459,   249,   862,  1460,
    1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1461,
    1462,  1015,   297,  1463,  1464,   250,   199,  1016,   818,   819,
    1864,   251,  1314,   252,   874,   759,   881,   300,   876,   877,
    1017,   820,   821,  1518,   854,   380,   253,   274,   275,   276,
     254,   277,   278,   279,   280,   855,   380,   281,   282,   283,
     284,   285,   286,   287,   217,   218,   812,   288,   856,   380,
    1516,    42,   255,   289,   256,    43,    73,    74,    75,  1220,
      76,   257,  1040,  1041,   857,   380,   812,   812,   812,   812,
     812,   812,   812,   812,   812,   812,   812,   812,   812,   812,
     812,   812,   997,   380,   812,   258,   842,   843,  1739,   998,
     999,  1001,   380,    34,   259,    35,  1338,   380,  1123,  1608,
    1609,  1610,   260,  1612,  1465,  1339,   380,    36,    37,    38,
      44,   849,  1340,   380,  1341,   380,    45,  1380,   380,  1524,
    1525,  1629,   982,   261,    39,   983,  1963,  1540,   180,    46,
     262,    47,  1542,   180,  1521,  1564,   180,   263,  1421,  1566,
     180,  1714,  1715,    48,  1424,  1724,   380,    49,  1571,  1176,
     343,   264,  1004,  1576,  1726,   380,   265,  1580,   266,    50,
    1583,   236,   236,   236,   236,  1586,  1539,   301,  1121,  1727,
     380,   314,  1541,   320,  1543,   236,   333,  1596,   335,  1018,
      51,   170,  1094,   345,  1095,  1096,   346,  1097,  1771,  1772,
    1605,  1451,  1607,   170,  1452,  1839,  1840,  1098,   812,   352,
    1288,  1061,  1290,   353,  1453,  1454,  1455,  1565,  1894,  1895,
    1903,   380,   401,  1567,  1099,  1100,  1101,  1844,   405,  1845,
    1682,  1639,  1846,   459,  1637,  1638,  1224,  1640,   466,  1315,
    1865,  1102,    52,   811,    53,   236,   236,   733,   734,  1526,
     467,   468,   482,   469,   470,  1241,   493,   486,  1683,  1534,
     488,   497,   494,  1249,  1251,   518,   523,   236,  1261,  1262,
    1263,  1264,  1265,  1266,  1267,   525,  1847,  1284,  1287,   531,
     540,   532,  1293,  1180,   536,   542,   543,  1295,  1757,    40,
    1759,   544,   549,   550,  1103,   551,   552,   554,  1074,   555,
    1075,  1076,  1077,  1078,  1079,  1080,  1081,   236,   556,   283,
     284,   285,   286,   287,   557,  1322,  1323,   288,   558,  1456,
     561,   562,  1329,   289,  1331,   564,   916,   917,  1335,  1577,
     918,   919,   920,   921,   922,   923,   924,   925,  1792,  1343,
     926,   274,   275,   276,  1797,   277,   278,   279,   280,   566,
     565,   281,   282,   283,   284,   285,   286,   287,   568,   570,
     572,   288,  1104,   574,   576,   577,   579,   289,   584,  1105,
     593,   850,   812,   586,  1684,   588,   589,   590,   592,   594,
    1620,   599,   603,   812,   607,   631,   167,   643,  1763,   653,
     634,   639,   642,   650,  1765,   655,   660,   664,   167,   662,
     663,  1767,   667,   669,  1848,   671,   676,   128,   129,     6,
    1685,   687,  1843,   677,   678,   679,   698,  1775,  1307,   681,
    1309,   685,  1311,   689,   692,   693,   695,  1687,   696,   697,
     702,   709,   703,   236,   137,   138,   139,   140,   141,   236,
     715,  1662,   722,   723,   731,   898,   899,   900,   901,   736,
    1336,   274,   275,   276,   739,   277,   278,   279,   280,  1688,
    1082,   281,   282,   283,   284,   285,   286,   287,   741,   742,
     743,   288,   744,  1901,   757,   753,   754,   289,   755,   274,
     275,   276,   756,   277,   278,   279,   280,   530,  1855,   281,
     282,   283,   284,   285,   286,   287,  1906,   762,   768,   288,
     847,   815,   822,   824,   836,   289,   841,   846,   858,   859,
     852,   860,   343,   861,  1630,   302,  1632,  1633,   870,   879,
     878,     7,     8,    73,    74,    75,   880,    76,   886,   897,
     888,   890,  1944,   891,   236,   892,  1032,   893,   902,    13,
     894,  1872,   908,   929,   236,  -667,  1884,   936,  1886,  1030,
     938,   992,   939,   940,   941,  1893,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,   984,   303,  1064,   985,   170,   170,   170,   986,
     170,   987,   988,   990,   806,  1261,  1262,  1263,  1264,  1265,
    1266,  1267,   996,  1274,  1919,   274,   275,   276,   170,   277,
     278,   279,   280,  1033,  2007,   281,   282,   283,   284,   285,
     286,   287,  1034,  1035,   236,   288,  1038,  1036,   926,  1037,
    1042,   289,   920,   921,   922,   923,   924,   925,  1060,  1517,
     926,   274,   275,   276,  1134,   277,   278,   279,   280,  1957,
    1194,   281,   282,   283,   284,   285,   286,   287,   274,   275,
     276,   288,   277,   278,   279,   280,  1530,   289,   281,   282,
     283,   284,   285,   286,   287,   236,  1690,  1066,   288,  1175,
    1141,  1195,  1150,  1257,   289,  1258,  1259,  1260,  1127,  1128,
     274,   275,   276,  1151,   277,   278,   279,   280,  1215,  1174,
     281,   282,   283,   284,   285,   286,   287,  1129,   812,  1130,
     288,  1131,  1132,  1200,  1133,  1142,   289,  1143,  1144,  1145,
    1653,  1202,  1146,  1147,  1261,  1262,  1263,  1264,  1265,  1266,
    1267,  1275,  1268,  1269,  1203,  1148,   236,  1149,  1152,  1574,
    1663,  1153,  1664,  1578,  1154,  1155,  1581,  1582,  1692,  1156,
    1159,  1584,  1157,  1158,  1587,  1588,  1589,  1590,  1193,  1182,
    1591,  1592,  1593,  1204,  1595,   170,  1209,   170,  1597,  1598,
    1201,  1921,  1213,  1602,  1603,  1208,  1206,  1210,  1216,  1221,
     993,   167,   167,   167,  1611,   167,  1214,   279,   280,  1933,
    1617,   281,   282,   283,   284,   285,   286,   287,  1225,  1226,
    1227,   288,  1233,   167,   128,   129,   130,   289,  1228,  1240,
    1242,  1243,  1779,  1780,  1854,   170,  1244,  1245,  1250,  1786,
    1252,   170,  1253,  1283,  1332,   132,   133,   134,   135,  1294,
    1296,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,  1299,  1300,  1301,  1302,
    1270,  1303,  1370,  1304,  1305,  1306,  1316,  1317,  1318,  1319,
    1990,  1320,  1321,  1378,   913,   914,   915,   916,   917,  1324,
    1325,   918,   919,   920,   921,   922,   923,   924,   925,   170,
    1326,   926,  1327,  1328,  1841,  1330,  1842,   274,   275,   276,
    1333,   277,   278,   279,   280,  1334,  1342,   281,   282,   283,
     284,   285,   286,   287,  1337,  1347,  1693,   288,  1345,  1348,
    1349,  1722,  1350,   289,  1725,  1351,   943,  1353,  1373,  1355,
    1356,  1357,  1359,  1360,    73,    74,   944,  1742,    76,   323,
     324,   325,   326,   327,   328,   329,   330,   331,  1362,  1369,
     170,  1363,  1364,  1367,  1368,  1371,  1374,  1375,  1379,  1388,
     167,  1758,   167,  1381,  1382,  1383,  1385,  1390,  1391,   274,
     275,   276,  1392,   277,   278,   279,   280,   343,  1393,   281,
     282,   283,   284,   285,   286,   287,  1697,  1394,  1395,   288,
    1397,  1844,  1399,  1845,  1774,   289,  1846,  1400,  1778,  1401,
    1402,  1781,  1782,  1403,  1404,  1405,  1406,  1407,  1408,   170,
     167,  1409,  1412,  1698,  1413,  1414,   167,  1415,  1417,  1418,
    1419,  1420,  1423,  1422,  1425,  1426,  1427,  1808,  1809,  1810,
    1811,  1812,  1261,  1262,  1263,  1264,  1265,  1266,  1267,  1429,
    1847,  1430,   163,  1432,  1434,  1435,  1436,   164,  1438,  1439,
     165,  1440,  1441,  1508,  1442,  1443,   236,  1444,  1515,   350,
    1486,  1502,  1445,   945,  1510,   946,   947,   948,   949,   950,
     951,   952,   953,   954,   236,  1446,  1523,   955,  1511,  1447,
     956,  1448,  1513,   957,   167,  1449,   958,  1485,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   973,   974,  1487,  1488,  1862,   975,  1377,  1489,
    1490,  1531,   976,  1535,  1491,   977,  1869,  1870,  1536,  1538,
    1873,  1537,  1875,  1545,  1492,  1548,  1493,  1494,  1514,  1495,
    1890,  1891,  1496,  1549,  1528,  1497,  1498,   274,   275,   276,
    1499,   277,   278,   279,   280,   167,  1902,   281,   282,   283,
     284,   285,   286,   287,  1500,   236,  1501,   288,  1512,  1532,
    1519,  1520,   180,   289,  1522,  1550,  1544,  1551,  1851,  1547,
    1552,  1918,   276,  1554,   277,   278,   279,   280,  1556,   978,
     281,   282,   283,   284,   285,   286,   287,  1557,  1646,  1568,
     288,  1569,  1570,  1572,  1573,  1575,   289,  1938,  1599,  1606,
    1579,  1613,  1614,  1615,   167,  1585,  1946,   274,   275,   276,
    1594,   277,   278,   279,   280,  1616,  1618,   281,   282,   283,
     284,   285,   286,   287,  1600,  1601,  1604,   288,  1257,  1964,
    1258,  1259,  1260,   289,   274,   275,   276,  1619,   277,   278,
     279,   280,  1621,  1622,   281,   282,   283,   284,   285,   286,
     287,  1628,  1631,  1648,   288,  1642,  1649,  1650,  1978,  1651,
     289,  1981,  1654,  1643,  1645,  1655,   128,   129,   769,  1261,
    1262,  1263,  1264,  1265,  1266,  1267,  1634,  1268,  1269,  1647,
    1656,  1666,  1995,  1667,  1997,  1668,  1675,  1671,  1678,  1670,
    1672,  1681,  2002,   137,   138,   139,   140,   141,   770,   771,
     772,   773,   774,   775,   776,   777,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   790,   791,
     792,   793,   794,   795,   796,   128,   129,   769,   910,   911,
     912,   913,   914,   915,   916,   917,  1691,  1694,   918,   919,
     920,   921,   922,   923,   924,   925,  1702,  1703,   926,  1704,
    1705,  1707,   137,   138,   139,   140,   141,   770,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,  1708,   797,   582,   128,   129,   534,
     131,  1709,   798,    56,  1711,  1712,  1713,  1720,  1721,  1744,
    1729,  1730,  1732,  1723,  1728,  1273,  1741,  1748,   132,   133,
     134,   135,   136,  1731,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   128,
     129,   130,   131,  1760,   797,    56,  1751,  1752,  1753,  1743,
    1754,   798,  1747,   231,  1745,  1756,  1761,  1762,  1773,  1788,
     132,   133,   134,   135,   136,  1776,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,  1777,  1783,  1784,  1785,  1787,  1789,   799,  1793,  1798,
     128,   129,   130,   800,   801,  1800,  1801,  1802,  1803,   802,
    1804,  1805,   803,  1806,  1807,  1062,  1063,   804,   805,  1813,
     806,   132,   133,   134,   135,  1816,  1815,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   273,   128,   129,     6,   799,  1818,  1817,  1819,
    1821,  1820,   800,   801,  1823,  1824,  1825,  1835,   802,  1826,
    1827,   803,  1836,  1856,  1853,  1852,   804,   805,  1863,   806,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,  1866,   274,   275,   276,   162,
     277,   278,   279,   280,  1867,  1868,   281,   282,   283,   284,
     285,   286,   287,  1871,  1874,   163,   288,  1885,   583,  1887,
     164,  1888,   289,   165,  1889,  1892,  1896,  1897,   232,  1898,
    1900,   166,   910,   911,   912,   913,   914,   915,   916,   917,
    1904,   657,   918,   919,   920,   921,   922,   923,   924,   925,
    1907,   162,   926,  1908,  1857,  1912,  1916,  1917,  1920,  1922,
    1927,  1928,  1929,  1207,  1930,  1945,  1931,   163,  1932,  1935,
    1937,  1858,   164,  1939,  1940,   165,   128,   129,   130,   943,
    1948,  1958,  1941,   166,  1943,  1949,  1950,    73,    74,   944,
    1952,    76,  1953,  1790,  1954,  1955,  1791,   132,   133,   134,
     135,  1956,  1959,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   163,  1960,
    1961,  1962,  1968,   164,  1972,  1975,   165,  1965,  1976,  1979,
    1983,  1985,  1980,  1988,   166,   274,   275,   276,  1993,   277,
     278,   279,   280,  1994,  1996,   281,   282,   283,   284,   285,
     286,   287,   274,   275,   276,   288,   277,   278,   279,   280,
    2003,   289,   281,   282,   283,   284,   285,   286,   287,  2004,
    2006,   163,   288,  2008,  2009,  1222,   164,  1223,   289,   165,
    1365,   931,  1746,  1795,   943,   758,   694,   737,  1506,   848,
     229,   710,    73,    74,   944,   336,    76,  1108,  1624,     0,
       0,     0,     0,     0,     0,     0,   945,     0,   946,   947,
     948,   949,   950,   951,   952,   953,   954,     0,     0,     0,
     955,     0,     0,   956,     0,     0,   957,     0,     0,   958,
       0,   959,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,     0,     0,     0,
     975,     0,   943,     0,     0,   976,     0,     0,   977,     0,
      73,    74,   944,     0,    76,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,   274,   275,   276,   288,   277,   278,   279,   280,
       0,   289,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,   163,   943,     0,     0,   289,   164,
       0,     0,   165,    73,    74,   944,     0,    76,     0,     0,
     166,   945,  1755,   946,   947,   948,   949,   950,   951,   952,
     953,   954,     0,     0,     0,   955,     0,     0,   956,     0,
       0,   957,     0,     0,   958,  1859,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   972,
     973,   974,  1860,     0,     0,   975,     0,   943,     0,     0,
     976,     0,     0,   977,     0,    73,    74,   944,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   945,
       0,   946,   947,   948,   949,   950,   951,   952,   953,   954,
       0,     0,     0,   955,     0,     0,   956,     0,     0,   957,
       0,     0,   958,     0,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
       0,     0,     0,   975,     0,     0,     0,  1764,   976,     0,
       0,   977,   945,     0,   946,   947,   948,   949,   950,   951,
     952,   953,   954,     0,     0,     0,   955,     0,     0,   956,
       0,     0,   957,     0,     0,   958,     0,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,     0,     0,     0,   975,   943,     0,     0,
       0,   976,     0,     0,   977,    73,    74,   944,     0,    76,
       0,     0,     0,     0,   945,  1766,   946,   947,   948,   949,
     950,   951,   952,   953,   954,     0,     0,     0,   955,     0,
       0,   956,     0,     0,   957,     0,     0,   958,     0,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,     0,     0,     0,   975,     0,
       0,     0,   943,   976,     0,     0,   977,     0,  1768,     0,
      73,    74,   944,     0,    76,     0,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,   274,   275,   276,   288,   277,   278,   279,
     280,     0,   289,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,   943,     0,     0,     0,   289,
       0,     0,     0,    73,    74,   944,     0,    76,     0,     0,
    1769,     0,     0,     0,   945,     0,   946,   947,   948,   949,
     950,   951,   952,   953,   954,     0,     0,     0,   955,     0,
       0,   956,     0,     0,   957,  1861,     0,   958,     0,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,     0,     0,     0,   975,     0,
     943,     0,     0,   976,     0,  1951,   977,     0,    73,    74,
     944,     0,    76,     0,     0,     0,     0,     0,     0,   945,
       0,   946,   947,   948,   949,   950,   951,   952,   953,   954,
       0,     0,     0,   955,     0,     0,   956,     0,     0,   957,
       0,     0,   958,     0,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
       0,     0,     0,   975,     0,     0,     0,     0,   976,     0,
    1770,   977,   945,     0,   946,   947,   948,   949,   950,   951,
     952,   953,   954,     0,     0,     0,   955,     0,     0,   956,
       0,     0,   957,     0,     0,   958,     0,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,     0,     0,     0,   975,   943,     0,     0,
       0,   976,     0,     0,   977,    73,    74,   944,     0,    76,
       0,     0,     0,     0,     0,  1942,     0,   945,     0,   946,
     947,   948,   949,   950,   951,   952,   953,   954,     0,     0,
       0,   955,     0,     0,   956,     0,     0,   957,     0,     0,
     958,     0,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,     0,     0,
       0,   975,   943,     0,     0,     0,   976,     0,  1947,   977,
      73,    74,   944,     0,    76,     0,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
       0,     0,   289,     0,     0,     0,   274,   275,   276,     0,
     277,   278,   279,   280,     0,   943,   281,   282,   283,   284,
     285,   286,   287,    73,    74,   944,   288,    76,     0,     0,
       0,     0,   289,  1982,   945,     0,   946,   947,   948,   949,
     950,   951,   952,   953,   954,     0,     0,     0,   955,     0,
       0,   956,     0,     0,   957,     0,     0,   958,     0,   959,
     960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
     970,   971,   972,   973,   974,     0,     0,     0,   975,     0,
     943,     0,     0,   976,     0,     0,   977,     0,    73,    74,
     944,     0,    76,     0,     0,     0,     0,     0,     0,   945,
       0,   946,   947,   948,   949,   950,   951,   952,   953,   954,
       0,     0,     0,   955,     0,     0,   956,     0,     0,   957,
       0,     0,   958,     0,   959,   960,   961,   962,   963,   964,
     965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
       0,     0,     0,   975,     0,     0,     0,     0,   976,     0,
    1984,   977,   945,     0,   946,   947,   948,   949,   950,   951,
     952,   953,   954,     0,     0,     0,   955,     0,     0,   956,
       0,     0,   957,     0,     0,   958,     0,   959,   960,   961,
     962,   963,   964,   965,   966,   967,   968,   969,   970,   971,
     972,   973,   974,     0,     0,     0,   975,     0,     0,     0,
       0,   976,     0,     0,   977,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1986,     0,   945,     0,   946,
     947,   948,   949,   950,   951,   952,   953,   954,     0,     0,
       0,   955,     0,     0,   956,     0,     0,   957,     0,     0,
     958,     0,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   968,   969,   970,   971,   972,   973,   974,   128,   129,
     130,   975,     0,     0,     0,     0,   976,     0,  1987,   977,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
     133,   134,   135,     0,     0,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,     0,   128,   129,   130,     0,     0,     0,     0,
       0,     0,     0,     0,  1219,     0,     0,     0,     0,     0,
       0,     0,     0,  1998,   132,   133,   134,   135,     0,     0,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   128,   129,     6,   910,   911,
     912,   913,   914,   915,   916,   917,     0,     0,   918,   919,
     920,   921,   922,   923,   924,   925,     0,     0,   926,     0,
    1039,     0,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   128,   129,     6,
     527,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   321,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,     0,     0,     0,
       0,   164,     0,     0,   165,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     6,   521,   597,   129,     6,     0,     7,     8,   608,
       0,     0,     0,     0,     0,     9,    10,    11,    12,     0,
       0,   163,     0,     0,     0,    13,   164,     0,     0,   165,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   522,     0,   479,    14,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
     609,     0,   581,   163,     0,     0,     0,    16,   164,    17,
       0,   165,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,    19,     0,     0,     0,   610,
     912,   913,   914,   915,   916,   917,     0,    20,   918,   919,
     920,   921,   922,   923,   924,   925,     0,     0,   926,     0,
       0,     0,     0,     0,     0,   163,     0,     0,    21,   611,
     164,     0,     0,   165,     0,     0,     0,     0,     0,     0,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
      22,     0,    23,     0,     0,   289,   163,     0,     0,     0,
       0,   164,     0,     0,   165,     0,     0,     0,     0,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,   274,   275,   276,   289,   277,   278,   279,   280,
     495,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,   163,   288,     0,     0,     0,   164,     0,   289,   165,
       0,     0,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,   274,   275,   276,   289,   277,
     278,   279,   280,   496,     0,   281,   282,   283,   284,   285,
     286,   287,   274,   275,   276,   288,   277,   278,   279,   280,
       0,   289,   281,   282,   283,   284,   285,   286,   287,   274,
     275,   276,   288,   277,   278,   279,   280,     0,   289,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,   274,   275,   276,   289,   277,   278,   279,   280,
     508,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,   274,   275,   276,   289,   277,
     278,   279,   280,   515,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,   274,   275,
     276,   289,   277,   278,   279,   280,   516,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,   274,   275,   276,   289,   277,   278,   279,   280,   517,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,   274,   275,   276,   289,   277,   278,
     279,   280,   745,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,   274,   275,   276,
     289,   277,   278,   279,   280,   746,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
     274,   275,   276,   289,   277,   278,   279,   280,  1000,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,   274,   275,   276,   289,   277,   278,   279,
     280,  1167,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,   274,   275,   276,   289,
     277,   278,   279,   280,  1346,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,   274,
     275,   276,   289,   277,   278,   279,   280,  1450,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,   274,   275,   276,   289,   277,   278,   279,   280,
    1458,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,   274,   275,   276,   289,   277,
     278,   279,   280,  1467,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,   274,   275,
     276,   289,   277,   278,   279,   280,  1644,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,   274,   275,   276,   289,   277,   278,   279,   280,  1669,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,   274,   275,   276,   289,   277,   278,
     279,   280,  1673,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,   274,   275,   276,
     289,   277,   278,   279,   280,  1679,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
     274,   275,   276,   289,   277,   278,   279,   280,  1686,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,   274,   275,   276,   289,   277,   278,   279,
     280,  1706,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,   274,   275,   276,   289,
     277,   278,   279,   280,  1831,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,   274,
     275,   276,   289,   277,   278,   279,   280,  1837,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,   274,   275,   276,   289,   277,   278,   279,   280,
    1838,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,   274,   275,   276,   289,   277,
     278,   279,   280,  1911,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,   274,   275,
     276,   289,   277,   278,   279,   280,  1913,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,   274,   275,   276,   289,   277,   278,   279,   280,  1936,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,   274,   275,   276,   289,   277,   278,
     279,   280,  1989,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,   274,   275,   276,
     289,   277,   278,   279,   280,  1991,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
     274,   275,   276,   289,   277,   278,   279,   280,  1999,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,     0,     0,   289,   274,   275,   276,
     292,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,   274,   275,   276,   349,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,   274,   275,   276,   751,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,     0,     0,   289,   274,   275,
     276,  1166,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,   274,   275,   276,  1181,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,     0,
       0,   289,   274,   275,   276,  1509,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,     0,     0,   289,   274,
     275,   276,  1635,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,   274,   275,   276,  1796,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
       0,     0,   289,   274,   275,   276,  1799,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,     0,     0,   289,
     274,   275,   276,  1814,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,     0,     0,   289,   274,   275,   276,
    1905,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,   274,   275,   276,  1977,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,   274,   275,   276,  2005,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,   322,   274,   275,   276,   289,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,   378,   274,   275,   276,
     289,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   498,     0,   289,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   499,     0,
     289,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   500,     0,   289,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,   501,     0,   289,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   502,
       0,   289,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   503,     0,   289,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   504,     0,   289,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
     505,     0,   289,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   506,     0,   289,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,   507,     0,   289,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   509,     0,   289,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   510,     0,
     289,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   511,     0,   289,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,   512,     0,   289,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   513,
       0,   289,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   514,     0,   289,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   524,     0,   289,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
     652,     0,   289,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   747,     0,   289,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,   748,     0,   289,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   749,     0,   289,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   750,     0,
     289,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,   851,   274,   275,   276,   289,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   885,     0,
     289,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,  1002,     0,   289,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,  1003,     0,   289,   274,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,  1710,
       0,   289,   274,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,  1822,     0,   289,   274,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,  1834,     0,   289,   274,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
    1910,     0,   289,   274,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,  1915,     0,   289,
     274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,  1925,     0,   289,   274,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,  1926,     0,   289,   274,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,  1966,     0,
     289,   274,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,  1970,     0,   289,   274,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,  2001,     0,   289,   910,   911,   912,   913,   914,
     915,   916,   917,     0,     0,   918,   919,   920,   921,   922,
     923,   924,   925,     0,     0,   926,     0,     0,     0,  1527,
     910,   911,   912,   913,   914,   915,   916,   917,     0,     0,
     918,   919,   920,   921,   922,   923,   924,   925,     0,     0,
     926
};

static const short yycheck[] =
{
       5,   573,    84,   487,   541,  1109,     5,    84,   175,   464,
       5,     3,     3,     5,     5,   552,   627,     3,    23,     5,
     769,     5,   332,   313,     3,   562,   336,     5,    33,   566,
       5,   105,   106,   570,   324,   325,   326,     3,     5,     5,
       5,     5,   248,   333,     5,     3,     5,     5,   254,   433,
       5,     5,    11,    12,    13,    14,    15,     7,    17,   608,
     609,     7,  1030,     5,     5,   406,   615,     5,  1036,  1037,
      29,     7,   239,   109,     5,     0,     5,   113,   114,   115,
     116,   117,   118,     7,     5,    13,    14,    15,   601,    17,
     261,     5,    26,   251,    69,   251,    18,     5,    64,     5,
     484,   257,   557,   261,   109,    11,    12,    23,   113,   114,
     115,   116,   117,   118,   119,   254,     0,   256,   123,   124,
     125,   250,   117,    29,    65,    23,    23,     5,    68,    63,
     259,    69,   299,    11,    12,    64,   257,   258,    69,   888,
      69,   890,    69,    75,    18,    18,    86,   183,    69,   533,
       7,    29,   251,   249,    81,    69,    96,    97,   117,   118,
     119,   120,   261,    82,    96,   105,    88,   107,    96,    88,
     480,   245,    82,   340,   257,   258,    86,    96,   183,   113,
     114,   115,   116,    99,   118,   143,    96,   249,    23,     5,
       6,   532,   266,     9,    10,   536,    23,    84,    85,   107,
    1569,    99,    99,   716,   227,   133,   666,     5,     6,   117,
    1579,   133,   140,    86,    88,    88,  1585,   240,   140,   141,
     250,   676,   251,   297,   250,  1594,    99,   232,   251,   259,
     251,  1600,  1601,   259,   121,   122,   257,   251,   160,   112,
     127,   163,   164,   257,   257,  1213,     5,   261,   703,   183,
     241,   209,    11,    12,    13,    14,    15,   130,    17,   249,
     257,   251,   261,   258,    99,   257,   140,   722,   260,   260,
      29,   249,    99,   257,   260,   254,   163,   164,   165,   254,
     250,   257,   257,   257,   739,   261,   160,   161,  1256,   259,
     257,   257,   257,   257,   260,   251,   257,   255,   380,   258,
     467,   257,   257,   257,   645,   252,   257,   257,   313,   251,
     261,   257,   259,   603,   252,   251,   254,   241,   258,   324,
     325,   326,    86,   254,   406,   254,   258,   257,   333,   406,
     258,   258,    96,   254,    98,   719,   258,   252,   261,   258,
     800,   801,   802,   803,   259,    13,    14,    15,   258,    17,
     257,   257,   258,   251,   251,   257,   243,   244,   257,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   257,
     258,   455,   316,   227,   258,   258,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,    86,   257,  1372,     5,   411,   261,   718,   296,
     226,    11,    12,    13,    14,    15,   251,    17,    82,   586,
     425,   588,   589,   590,   251,   257,   110,   257,    98,    29,
     435,   891,    96,   320,   321,   440,    78,    79,   108,   109,
     110,   446,   257,   448,     5,     5,     6,   452,   335,     9,
      10,   911,   912,   913,   914,   915,   916,   917,   918,   919,
     920,   921,   922,   923,   924,   925,   926,  1078,  1079,   929,
       6,     5,   257,   251,   116,    96,   261,    11,    12,    13,
      14,    15,   487,    17,   240,   241,   242,   243,   130,   252,
     945,   112,     7,   380,   258,    29,   259,  1866,   257,   258,
      13,    14,    15,   259,    17,  1874,    13,    14,    15,     7,
      17,   995,    82,   134,   401,     7,    86,    87,     7,   406,
     594,   408,   190,   191,   192,   193,   608,   609,   252,   984,
      96,     7,    98,   615,    96,   259,   252,     7,   612,   252,
     106,   996,    86,   259,   999,     7,   259,   257,     7,   859,
       7,   261,    96,   249,  1103,  1010,  1011,  1012,  1013,    13,
      14,    15,  1017,    17,   185,   257,  1115,     7,   112,   261,
     737,     7,   116,   257,   258,   742,  1945,     7,   140,  1948,
      13,    14,    15,  1043,    17,  1553,     7,  1555,   258,  1958,
    1959,   258,   259,     5,   258,   482,   601,     7,   603,    11,
      12,    13,    14,    15,  1176,    17,   258,   259,   495,   496,
       7,    13,    14,    15,  1983,    17,   258,    29,     7,   252,
       7,   508,   258,   259,   252,   187,   259,   189,   515,   516,
     517,   259,     5,     7,   521,   522,   188,   258,    11,    12,
      13,    14,    15,   530,    17,   249,     7,   683,   251,   211,
     724,   725,  1224,    86,   690,    67,    29,   257,   258,   257,
     252,   666,   251,    96,   252,   252,   226,   259,   251,  1124,
    1125,   259,   259,   251,     5,   235,   236,   250,   683,   258,
      11,    12,    13,    14,    15,   690,    17,     6,   258,  1226,
    1794,  1795,   258,   252,   581,   582,   258,     7,    29,   130,
     259,   134,   135,   136,   137,   138,   139,   242,   243,   244,
     245,   716,   251,   248,   258,  1287,  1006,  1007,  1008,  1009,
     654,   608,   609,   257,   258,   251,   613,   614,   615,   616,
    1020,   252,  1187,  1193,  1189,   622,   252,   624,   259,   259,
     260,  1196,   251,   259,   257,   258,   252,  1207,   682,   683,
     257,   258,   686,   259,   258,   259,   690,   251,  1218,    89,
      90,    91,    92,    93,    94,   699,   228,   229,   230,   251,
     232,   233,   234,   235,   251,   662,   238,   239,   240,   241,
     242,   243,   244,   257,   258,   251,   248,   242,   243,   244,
    1080,  1081,   254,   248,     7,   800,   801,   802,   803,   254,
     252,   806,   251,   257,   258,     7,   252,   259,     7,  1558,
    1559,  1560,  1102,   259,   257,   258,   257,   258,   985,   986,
     987,   988,   257,   258,   758,   258,   140,   251,   715,   143,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   153,
     154,    80,   259,   157,   158,   251,   258,    86,   257,   258,
    1818,   251,  1142,   251,   741,   257,   258,     7,   745,   746,
      99,   257,   258,  1347,   258,   259,   251,   228,   229,   230,
     251,   232,   233,   234,   235,   258,   259,   238,   239,   240,
     241,   242,   243,   244,   257,   258,   891,   248,   258,   259,
    1345,     3,   251,   254,   251,     7,    13,    14,    15,  1066,
      17,   251,   907,   908,   258,   259,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   258,   259,   929,   251,   257,   258,   258,   258,
     259,   258,   259,     5,   251,     7,   258,   259,   943,  1488,
    1489,  1490,   251,  1492,   258,   258,   259,    19,    20,    21,
      62,     8,   258,   259,   258,   259,    68,   258,   259,   257,
     258,  1510,   849,   251,    36,   852,  1934,   258,   259,    81,
     251,    83,   258,   259,  1358,   258,   259,   251,  1268,   258,
     259,   258,   259,    95,  1274,   258,   259,    99,  1443,   994,
     995,   251,   879,  1448,   258,   259,   251,  1452,   251,   111,
    1455,  1006,  1007,  1008,  1009,  1460,  1390,     5,   942,   258,
     259,   251,  1396,   257,  1398,  1020,   251,  1472,   259,   258,
     132,  1103,    81,   251,    83,    84,   257,    86,   257,   258,
    1485,   140,  1487,  1115,   143,   258,   259,    96,  1043,     5,
    1114,   928,  1116,     5,   153,   154,   155,  1431,   258,   259,
     258,   259,   227,  1437,   113,   114,   115,    81,   251,    83,
       7,  1521,    86,   257,  1519,  1520,  1071,  1522,   257,  1143,
    1819,   130,   184,  1533,   186,  1080,  1081,   618,   619,  1369,
     257,   257,     8,   257,   257,  1090,   252,   259,     7,  1379,
     258,   252,   259,  1098,  1099,   252,     7,  1102,   122,   123,
     124,   125,   126,   127,   128,   252,   130,  1112,  1113,   227,
       5,   227,  1117,  1000,   227,   257,     5,  1122,  1667,   191,
    1669,   257,     5,   257,   183,     5,     5,   257,    96,   257,
      98,    99,   100,   101,   102,   103,   104,  1142,   257,   240,
     241,   242,   243,   244,   227,  1150,  1151,   248,   252,   258,
       5,     5,  1157,   254,  1159,   257,   234,   235,  1163,  1449,
     238,   239,   240,   241,   242,   243,   244,   245,  1717,  1174,
     248,   228,   229,   230,  1723,   232,   233,   234,   235,     5,
     257,   238,   239,   240,   241,   242,   243,   244,   257,     5,
     257,   248,   251,     5,   257,     5,     5,   254,   205,   258,
       5,   258,  1207,   257,     7,   257,   257,   257,   252,   251,
    1500,   258,   130,  1218,     7,     5,  1103,   258,  1673,   257,
       7,     7,     7,     7,  1679,     7,     7,     7,  1115,   251,
     251,  1686,     7,     7,   258,     7,   227,     3,     4,     5,
       7,   257,  1791,     7,     5,     7,   258,  1702,  1135,     7,
    1137,     7,  1139,     7,     7,     7,     7,     7,     7,     7,
       5,     7,   259,  1268,    30,    31,    32,    33,    34,  1274,
       8,  1561,   257,     5,     5,   800,   801,   802,   803,     5,
    1167,   228,   229,   230,   257,   232,   233,   234,   235,     7,
     258,   238,   239,   240,   241,   242,   243,   244,   257,   257,
       3,   248,   252,  1852,   227,     7,     7,   254,     5,   228,
     229,   230,     7,   232,   233,   234,   235,   254,  1802,   238,
     239,   240,   241,   242,   243,   244,  1863,     7,     5,   248,
     258,     7,     7,     7,     7,   254,     7,     7,   259,   252,
     257,     7,  1347,   235,  1511,     5,  1513,  1514,     6,   257,
       7,    11,    12,    13,    14,    15,    66,    17,   252,     5,
     251,   251,  1911,   251,  1369,   251,   891,   251,     3,    29,
     251,  1826,     5,   251,  1379,   251,  1831,     7,  1833,   251,
     257,   252,   257,   257,   257,  1840,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   259,    63,   929,   257,  1488,  1489,  1490,   257,
    1492,   257,   257,   255,   257,   122,   123,   124,   125,   126,
     127,   128,   259,   130,  1879,   228,   229,   230,  1510,   232,
     233,   234,   235,     5,  2006,   238,   239,   240,   241,   242,
     243,   244,     5,     5,  1449,   248,   235,   251,   248,   251,
     258,   254,   240,   241,   242,   243,   244,   245,     3,  1346,
     248,   228,   229,   230,     7,   232,   233,   234,   235,  1924,
       5,   238,   239,   240,   241,   242,   243,   244,   228,   229,
     230,   248,   232,   233,   234,   235,  1373,   254,   238,   239,
     240,   241,   242,   243,   244,  1500,     7,   257,   248,     7,
     257,     5,   257,    81,   254,    83,    84,    85,   251,   251,
     228,   229,   230,   257,   232,   233,   234,   235,  1043,   255,
     238,   239,   240,   241,   242,   243,   244,   251,  1533,   251,
     248,   251,   251,     5,   251,   251,   254,   251,   251,   251,
    1545,     5,   251,   251,   122,   123,   124,   125,   126,   127,
     128,   258,   130,   131,     5,   251,  1561,   251,   251,  1446,
    1565,   251,  1567,  1450,   251,   251,  1453,  1454,     7,   251,
     251,  1458,   257,   257,  1461,  1462,  1463,  1464,   257,   251,
    1467,  1468,  1469,   252,  1471,  1667,   251,  1669,  1475,  1476,
     257,  1881,   251,  1480,  1481,   259,   252,   252,   252,     5,
       5,  1488,  1489,  1490,  1491,  1492,   258,   234,   235,  1899,
    1497,   238,   239,   240,   241,   242,   243,   244,     5,     5,
       5,   248,     5,  1510,     3,     4,     5,   254,   257,     5,
       5,     5,  1706,  1707,  1801,  1717,     5,     5,     5,  1713,
       3,  1723,     3,     5,   251,    24,    25,    26,    27,     5,
       7,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     7,     5,     5,     5,
     258,     5,  1207,     5,     5,     5,     5,     5,     5,     5,
    1980,     5,     5,  1218,   231,   232,   233,   234,   235,     5,
       5,   238,   239,   240,   241,   242,   243,   244,   245,  1791,
       5,   248,     5,     5,  1788,     5,  1790,   228,   229,   230,
     251,   232,   233,   234,   235,   257,     7,   238,   239,   240,
     241,   242,   243,   244,   258,   254,     7,   248,   259,     7,
       7,  1628,     7,   254,  1631,     7,     5,     7,   257,     7,
       7,     7,     7,     7,    13,    14,    15,  1644,    17,   196,
     197,   198,   199,   200,   201,   202,   203,   204,     7,   259,
    1852,     7,     7,     7,     7,     3,   252,   259,   251,   257,
    1667,  1668,  1669,     7,     7,     7,     7,     5,     7,   228,
     229,   230,     7,   232,   233,   234,   235,  1802,     7,   238,
     239,   240,   241,   242,   243,   244,     7,     7,     7,   248,
       7,    81,     7,    83,  1701,   254,    86,     7,  1705,     7,
       7,  1708,  1709,     7,     7,     7,     7,     7,     7,  1911,
    1717,     7,     7,     7,     7,     7,  1723,     7,     5,     5,
       5,   251,   251,     7,   251,     5,     5,  1734,  1735,  1736,
    1737,  1738,   122,   123,   124,   125,   126,   127,   128,     7,
     130,     7,   241,     7,     7,     7,     7,   246,     7,     7,
     249,   252,   252,     7,   252,   259,  1881,   259,     7,   258,
     252,   252,   259,   142,   257,   144,   145,   146,   147,   148,
     149,   150,   151,   152,  1899,   259,     7,   156,   257,   259,
     159,   259,   257,   162,  1791,   259,   165,   259,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   259,   259,  1813,   186,     8,   259,
     259,     3,   191,     7,   259,   194,  1823,  1824,     7,     7,
    1827,   112,  1829,   251,   259,     7,   258,   258,   257,   259,
    1837,  1838,   259,     7,   252,   259,   259,   228,   229,   230,
     259,   232,   233,   234,   235,  1852,  1853,   238,   239,   240,
     241,   242,   243,   244,   259,  1980,   259,   248,   258,   252,
     259,   259,   259,   254,   259,     7,   258,     3,   258,   252,
       7,  1878,   230,     7,   232,   233,   234,   235,     7,   258,
     238,   239,   240,   241,   242,   243,   244,     7,  1533,     7,
     248,   257,     7,     5,     5,     5,   254,  1904,     5,     7,
     257,     7,     7,     5,  1911,   257,  1913,   228,   229,   230,
     257,   232,   233,   234,   235,     5,     5,   238,   239,   240,
     241,   242,   243,   244,   257,   257,   257,   248,    81,  1936,
      83,    84,    85,   254,   228,   229,   230,     5,   232,   233,
     234,   235,     5,     7,   238,   239,   240,   241,   242,   243,
     244,   257,   257,     5,   248,   252,     5,     5,  1965,     5,
     254,  1968,     7,   252,   252,     7,     3,     4,     5,   122,
     123,   124,   125,   126,   127,   128,   258,   130,   131,   252,
     252,   252,  1989,   259,  1991,   259,     7,   252,     7,   259,
     259,     7,  1999,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,     3,     4,     5,   228,   229,
     230,   231,   232,   233,   234,   235,     7,     7,   238,   239,
     240,   241,   242,   243,   244,   245,   259,   252,   248,   252,
     259,   259,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,   259,   122,     8,     3,     4,     5,
       6,   259,   129,     9,   252,   252,   259,   257,   257,     7,
     252,   252,   252,   259,   259,   258,   252,     7,    24,    25,
      26,    27,    28,   258,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     3,
       4,     5,     6,     5,   122,     9,     7,     7,     7,   258,
       7,   129,   252,    69,   258,     7,     7,     5,     7,   135,
      24,    25,    26,    27,    28,     7,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     7,     7,     7,     7,     7,     7,   234,     7,   258,
       3,     4,     5,   240,   241,   258,   257,   254,     7,   246,
       7,     7,   249,     7,     5,   252,   253,   254,   255,   257,
     257,    24,    25,    26,    27,     7,   111,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     8,     3,     4,     5,   234,   259,     7,   259,
     252,    16,   240,   241,   259,   259,   252,   252,   246,   259,
     259,   249,   252,     7,   257,   259,   254,   255,     5,   257,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   257,   228,   229,   230,   225,
     232,   233,   234,   235,     7,     7,   238,   239,   240,   241,
     242,   243,   244,     7,   257,   241,   248,     7,   250,     7,
     246,     7,   254,   249,     7,     7,     5,     5,   254,     5,
     251,   257,   228,   229,   230,   231,   232,   233,   234,   235,
     259,   257,   238,   239,   240,   241,   242,   243,   244,   245,
     252,   225,   248,   252,     7,   252,     5,     5,     5,   252,
     258,     7,     4,   259,     7,   257,     7,   241,     7,   258,
     258,     7,   246,     7,     7,   249,     3,     4,     5,     5,
     257,   257,     7,   257,     7,     7,     7,    13,    14,    15,
       7,    17,     7,   206,     7,     7,   209,    24,    25,    26,
      27,     7,   257,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   241,     7,
     258,     7,   259,   246,   252,     7,   249,   257,   252,     7,
     257,     7,    62,     7,   257,   228,   229,   230,     7,   232,
     233,   234,   235,     7,     7,   238,   239,   240,   241,   242,
     243,   244,   228,   229,   230,   248,   232,   233,   234,   235,
     132,   254,   238,   239,   240,   241,   242,   243,   244,     7,
       5,   241,   248,     7,   258,  1069,   246,  1070,   254,   249,
    1200,   810,  1652,  1721,     5,   653,   576,   257,  1333,   699,
     124,   593,    13,    14,    15,   229,    17,   939,  1506,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,    -1,    -1,
     156,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,    -1,    -1,    -1,
     186,    -1,     5,    -1,    -1,   191,    -1,    -1,   194,    -1,
      13,    14,    15,    -1,    17,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   228,   229,   230,   248,   232,   233,   234,   235,
      -1,   254,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,    -1,   241,     5,    -1,    -1,   254,   246,
      -1,    -1,   249,    13,    14,    15,    -1,    17,    -1,    -1,
     257,   142,   258,   144,   145,   146,   147,   148,   149,   150,
     151,   152,    -1,    -1,    -1,   156,    -1,    -1,   159,    -1,
      -1,   162,    -1,    -1,   165,     7,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,     7,    -1,    -1,   186,    -1,     5,    -1,    -1,
     191,    -1,    -1,   194,    -1,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,    -1,    -1,   186,    -1,    -1,    -1,   258,   191,    -1,
      -1,   194,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,    -1,    -1,   156,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    -1,    -1,    -1,   186,     5,    -1,    -1,
      -1,   191,    -1,    -1,   194,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,   142,   258,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    -1,    -1,   156,    -1,
      -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,    -1,    -1,   186,    -1,
      -1,    -1,     5,   191,    -1,    -1,   194,    -1,   258,    -1,
      13,    14,    15,    -1,    17,    -1,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   228,   229,   230,   248,   232,   233,   234,
     235,    -1,   254,   238,   239,   240,   241,   242,   243,   244,
      -1,    -1,    -1,   248,    -1,     5,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
     258,    -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    -1,    -1,   156,    -1,
      -1,   159,    -1,    -1,   162,     7,    -1,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,    -1,    -1,   186,    -1,
       5,    -1,    -1,   191,    -1,     7,   194,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,   191,    -1,
     258,   194,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,    -1,    -1,   156,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    -1,    -1,    -1,   186,     5,    -1,    -1,
      -1,   191,    -1,    -1,   194,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,   258,    -1,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,    -1,
      -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,    -1,    -1,
      -1,   186,     5,    -1,    -1,    -1,   191,    -1,   258,   194,
      13,    14,    15,    -1,    17,    -1,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,     5,   238,   239,   240,   241,
     242,   243,   244,    13,    14,    15,   248,    17,    -1,    -1,
      -1,    -1,   254,   258,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,    -1,    -1,   156,    -1,
      -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,    -1,    -1,    -1,   186,    -1,
       5,    -1,    -1,   191,    -1,    -1,   194,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
      -1,    -1,    -1,   156,    -1,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,   191,    -1,
     258,   194,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,    -1,    -1,   156,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,    -1,    -1,    -1,   186,    -1,    -1,    -1,
      -1,   191,    -1,    -1,   194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   258,    -1,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,    -1,    -1,
      -1,   156,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,     3,     4,
       5,   186,    -1,    -1,    -1,    -1,   191,    -1,   258,   194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   258,    24,    25,    26,    27,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     3,     4,     5,   228,   229,
     230,   231,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,    -1,   248,    -1,
     250,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     3,     4,     5,
       6,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   254,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,    -1,    -1,
      -1,   246,    -1,    -1,   249,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,     5,     8,     3,     4,     5,    -1,    11,    12,    75,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      -1,   241,    -1,    -1,    -1,    29,   246,    -1,    -1,   249,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     8,    -1,   225,    62,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
     136,    -1,     8,   241,    -1,    -1,    -1,    81,   246,    83,
      -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    99,    -1,    -1,    -1,   165,
     230,   231,   232,   233,   234,   235,    -1,   111,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,    -1,   248,    -1,
      -1,    -1,    -1,    -1,    -1,   241,    -1,    -1,   132,   195,
     246,    -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,    -1,    -1,    -1,   248,
     184,    -1,   186,    -1,    -1,   254,   241,    -1,    -1,    -1,
      -1,   246,    -1,    -1,   249,    -1,    -1,    -1,    -1,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,    -1,    -1,    -1,   248,
      -1,    -1,   228,   229,   230,   254,   232,   233,   234,   235,
     259,    -1,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,   241,   248,    -1,    -1,    -1,   246,    -1,   254,   249,
      -1,    -1,   228,   229,   230,    -1,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,    -1,    -1,   228,   229,   230,   254,   232,
     233,   234,   235,   259,    -1,   238,   239,   240,   241,   242,
     243,   244,   228,   229,   230,   248,   232,   233,   234,   235,
      -1,   254,   238,   239,   240,   241,   242,   243,   244,   228,
     229,   230,   248,   232,   233,   234,   235,    -1,   254,   238,
     239,   240,   241,   242,   243,   244,    -1,    -1,    -1,   248,
      -1,    -1,   228,   229,   230,   254,   232,   233,   234,   235,
     259,    -1,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,    -1,    -1,   228,   229,   230,   254,   232,
     233,   234,   235,   259,    -1,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,    -1,   248,    -1,    -1,   228,   229,
     230,   254,   232,   233,   234,   235,   259,    -1,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,
      -1,   228,   229,   230,   254,   232,   233,   234,   235,   259,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,    -1,   228,   229,   230,   254,   232,   233,
     234,   235,   259,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,   228,   229,   230,
     254,   232,   233,   234,   235,   259,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
     228,   229,   230,   254,   232,   233,   234,   235,   259,    -1,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,    -1,
     248,    -1,    -1,   228,   229,   230,   254,   232,   233,   234,
     235,   259,    -1,   238,   239,   240,   241,   242,   243,   244,
      -1,    -1,    -1,   248,    -1,    -1,   228,   229,   230,   254,
     232,   233,   234,   235,   259,    -1,   238,   239,   240,   241,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,   228,
     229,   230,   254,   232,   233,   234,   235,   259,    -1,   238,
     239,   240,   241,   242,   243,   244,    -1,    -1,    -1,   248,
      -1,    -1,   228,   229,   230,   254,   232,   233,   234,   235,
     259,    -1,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,    -1,    -1,   228,   229,   230,   254,   232,
     233,   234,   235,   259,    -1,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,    -1,   248,    -1,    -1,   228,   229,
     230,   254,   232,   233,   234,   235,   259,    -1,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,
      -1,   228,   229,   230,   254,   232,   233,   234,   235,   259,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,    -1,   228,   229,   230,   254,   232,   233,
     234,   235,   259,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,   228,   229,   230,
     254,   232,   233,   234,   235,   259,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
     228,   229,   230,   254,   232,   233,   234,   235,   259,    -1,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,    -1,
     248,    -1,    -1,   228,   229,   230,   254,   232,   233,   234,
     235,   259,    -1,   238,   239,   240,   241,   242,   243,   244,
      -1,    -1,    -1,   248,    -1,    -1,   228,   229,   230,   254,
     232,   233,   234,   235,   259,    -1,   238,   239,   240,   241,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,   228,
     229,   230,   254,   232,   233,   234,   235,   259,    -1,   238,
     239,   240,   241,   242,   243,   244,    -1,    -1,    -1,   248,
      -1,    -1,   228,   229,   230,   254,   232,   233,   234,   235,
     259,    -1,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,    -1,    -1,   228,   229,   230,   254,   232,
     233,   234,   235,   259,    -1,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,    -1,   248,    -1,    -1,   228,   229,
     230,   254,   232,   233,   234,   235,   259,    -1,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,
      -1,   228,   229,   230,   254,   232,   233,   234,   235,   259,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,    -1,   228,   229,   230,   254,   232,   233,
     234,   235,   259,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,   228,   229,   230,
     254,   232,   233,   234,   235,   259,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
     228,   229,   230,   254,   232,   233,   234,   235,   259,    -1,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,   228,   229,   230,
     258,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   254,   228,   229,   230,   258,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,   228,   229,   230,   258,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,    -1,    -1,    -1,    -1,   254,   228,   229,
     230,   258,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,
      -1,    -1,    -1,    -1,   254,   228,   229,   230,   258,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   254,   228,   229,   230,   258,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,   228,
     229,   230,   258,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,   254,   228,   229,   230,   258,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
      -1,    -1,   254,   228,   229,   230,   258,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
      -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,
     228,   229,   230,   258,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,    -1,
     248,    -1,    -1,    -1,    -1,    -1,   254,   228,   229,   230,
     258,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
      -1,    -1,    -1,   254,   228,   229,   230,   258,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,
     254,   228,   229,   230,   258,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,   250,   228,   229,   230,   254,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,   250,   228,   229,   230,
     254,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
      -1,   252,    -1,   254,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,    -1,   252,    -1,
     254,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,    -1,    -1,   252,    -1,   254,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,
      -1,    -1,   252,    -1,   254,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,   252,
      -1,   254,   228,   229,   230,    -1,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,    -1,    -1,    -1,   252,    -1,   254,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,    -1,    -1,    -1,   248,
      -1,    -1,    -1,   252,    -1,   254,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,    -1,   254,   228,   229,   230,    -1,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
      -1,    -1,    -1,   248,    -1,    -1,    -1,   252,    -1,   254,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,    -1,
     248,    -1,    -1,    -1,   252,    -1,   254,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
      -1,   252,    -1,   254,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,    -1,   252,    -1,
     254,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,    -1,    -1,   252,    -1,   254,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,
      -1,    -1,   252,    -1,   254,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,   252,
      -1,   254,   228,   229,   230,    -1,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,    -1,    -1,    -1,   252,    -1,   254,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,    -1,    -1,    -1,   248,
      -1,    -1,    -1,   252,    -1,   254,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,    -1,   254,   228,   229,   230,    -1,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
      -1,    -1,    -1,   248,    -1,    -1,    -1,   252,    -1,   254,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,    -1,
     248,    -1,    -1,    -1,   252,    -1,   254,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
      -1,   252,    -1,   254,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,    -1,   252,    -1,
     254,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,   250,   228,   229,   230,   254,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,    -1,   252,    -1,
     254,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,    -1,    -1,   252,    -1,   254,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,
      -1,    -1,   252,    -1,   254,   228,   229,   230,    -1,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,   252,
      -1,   254,   228,   229,   230,    -1,   232,   233,   234,   235,
      -1,    -1,   238,   239,   240,   241,   242,   243,   244,    -1,
      -1,    -1,   248,    -1,    -1,    -1,   252,    -1,   254,   228,
     229,   230,    -1,   232,   233,   234,   235,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,    -1,    -1,    -1,   248,
      -1,    -1,    -1,   252,    -1,   254,   228,   229,   230,    -1,
     232,   233,   234,   235,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,    -1,   254,   228,   229,   230,    -1,   232,   233,   234,
     235,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
      -1,    -1,    -1,   248,    -1,    -1,    -1,   252,    -1,   254,
     228,   229,   230,    -1,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,    -1,    -1,    -1,
     248,    -1,    -1,    -1,   252,    -1,   254,   228,   229,   230,
      -1,   232,   233,   234,   235,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,    -1,
      -1,   252,    -1,   254,   228,   229,   230,    -1,   232,   233,
     234,   235,    -1,    -1,   238,   239,   240,   241,   242,   243,
     244,    -1,    -1,    -1,   248,    -1,    -1,    -1,   252,    -1,
     254,   228,   229,   230,    -1,   232,   233,   234,   235,    -1,
      -1,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
      -1,   248,    -1,    -1,    -1,   252,    -1,   254,   228,   229,
     230,    -1,   232,   233,   234,   235,    -1,    -1,   238,   239,
     240,   241,   242,   243,   244,    -1,    -1,    -1,   248,    -1,
      -1,    -1,   252,    -1,   254,   228,   229,   230,   231,   232,
     233,   234,   235,    -1,    -1,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,    -1,   248,    -1,    -1,    -1,   252,
     228,   229,   230,   231,   232,   233,   234,   235,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,    -1,    -1,
     248
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   263,   264,     0,   265,   266,     5,    11,    12,    19,
      20,    21,    22,    29,    62,    68,    81,    83,    95,    99,
     111,   132,   184,   186,   267,   268,   269,   431,   445,   453,
     454,   261,   249,   249,     5,     7,    19,    20,    21,    36,
     191,     7,     3,     7,    62,    68,    81,    83,    95,    99,
     111,   132,   184,   186,     5,     6,     9,    10,   226,   455,
     456,   251,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   454,    13,    14,    15,    17,   190,   191,   192,
     193,   435,   444,   261,   227,   257,     6,   454,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,   251,   249,   446,   270,   328,
     444,   313,   319,   335,   293,   358,   385,   415,   427,   188,
       5,   249,   249,   251,   251,   251,   251,   257,     3,     4,
       5,     6,    24,    25,    26,    27,    28,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   225,   241,   246,   249,   257,   448,   449,   450,
     452,   454,   456,   448,   250,   259,   250,   455,   455,   252,
     259,   289,   258,   271,   257,   258,   329,   445,   257,   258,
     257,   258,   257,   258,   336,   444,   445,     5,    67,   258,
     294,   444,   445,   257,   258,   359,   444,   445,   257,   258,
     386,   444,   445,   257,   258,   416,   445,   257,   258,   428,
     444,   445,   454,   130,   448,   448,   437,   454,     6,   437,
       5,    69,   254,   277,   280,   281,   454,     6,   448,   257,
       7,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   448,   448,   448,
     448,   451,   452,     8,   228,   229,   230,   232,   233,   234,
     235,   238,   239,   240,   241,   242,   243,   244,   248,   254,
       7,     7,   258,     7,   451,     7,   251,   259,   250,   259,
       7,     5,     5,    63,   272,   274,   444,   445,   454,   330,
     314,   320,   337,   251,   251,   360,   387,   417,   429,   432,
     257,     8,   250,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   440,   251,   439,   259,   440,     3,     5,   257,
     260,   285,   287,   454,   436,   251,   257,   291,   441,   258,
     258,   451,     5,     5,   448,   448,   455,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   455,   250,   258,
     259,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   250,   448,   455,
     451,   227,   257,   290,   292,   251,   227,   240,   251,    82,
      86,    96,   258,   331,    82,    96,   258,   315,    82,    88,
      96,   258,   321,    68,    86,    96,    97,   105,   107,   258,
     338,   252,   280,   295,    86,    96,   112,   116,   258,   361,
      96,   133,   140,   258,   388,   444,    96,   112,   134,   185,
     258,   418,    96,   140,   187,   189,   211,   258,   430,   257,
     448,   448,   280,   280,   257,   280,   257,   257,   257,   257,
     257,   441,   280,   240,   241,   242,   243,   259,   438,   225,
     448,   441,     8,   257,   286,   451,   259,   278,   258,   252,
     259,   442,   258,   252,   259,   259,   259,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   259,   252,
     252,   252,   252,   252,   252,   259,   259,   259,   252,   448,
     452,     8,     8,     7,   252,   252,   250,     6,   448,     3,
     254,   227,   227,   288,     5,   277,   227,   448,     5,   257,
       5,   454,   257,     5,   257,    23,    99,   296,   297,     5,
     257,     5,     5,   454,   257,   257,   257,   227,   252,   252,
     289,     5,     5,   454,   257,   257,     5,   454,   257,   389,
       5,   454,   257,   454,     5,   454,   257,     5,   455,     5,
     433,     8,     8,   250,   205,   296,   257,   451,   257,   257,
     257,   252,   252,     5,   251,   441,   252,     3,   448,   258,
     258,   289,   260,   130,    64,   282,   285,     7,    75,   136,
     165,   195,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,     5,   448,   448,     7,   448,   448,   448,   448,     7,
     448,   448,     7,   258,   448,   273,     5,   277,   252,   289,
       7,   277,   252,   257,   332,     7,     7,   257,   290,   316,
       7,   322,   251,   251,     7,   300,   301,     7,   355,     7,
     290,     7,   339,   345,   352,   296,   227,     7,     5,     7,
     290,     7,   362,   369,   290,     7,   390,   257,   290,     7,
     419,   291,     7,     7,   433,     7,     7,     7,   258,   434,
     448,   448,     5,   259,   451,   258,   451,   451,   451,     7,
     439,   455,   252,     7,   241,     8,   241,   287,   280,   279,
     450,   450,   257,     5,   235,   236,   455,   448,   448,   450,
     448,     5,   443,   443,   443,   448,     5,   257,   448,   257,
     298,   257,   257,     3,   252,   259,   259,   252,   252,   252,
     252,   258,   277,     7,     7,     5,     7,   227,   332,   257,
     258,   444,     7,   257,   258,   257,   258,   448,     5,     5,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,   122,   129,   234,
     240,   241,   246,   249,   254,   255,   257,   302,   305,   384,
     447,   449,   454,   257,   258,     7,   257,   258,   257,   258,
     257,   258,     7,   296,     7,   257,   258,   444,   117,   118,
     119,   120,   258,   370,   444,   445,     7,   257,   258,   444,
     397,     7,   257,   258,   444,   445,     7,   258,   435,     8,
     258,   250,   257,   296,   258,   258,   258,   258,   259,   252,
       7,   235,   448,   287,   441,   283,   289,   296,   455,   455,
       6,   451,   296,   299,   448,   451,   448,   448,     7,   257,
      66,   258,   333,   317,   323,   252,   252,   384,   251,   309,
     251,   251,   251,   251,   251,   306,   307,     5,   302,   302,
     302,   302,     3,     3,     5,   143,   209,   255,     5,   454,
     228,   229,   230,   231,   232,   233,   234,   235,   238,   239,
     240,   241,   242,   243,   244,   245,   248,   254,   256,   251,
     310,   310,   356,   340,   346,   353,     7,   363,   257,   257,
     257,   257,   391,     5,    15,   142,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   156,   159,   162,   165,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   186,   191,   194,   258,   398,
     444,   420,   448,   448,   259,   257,   257,   257,   257,   441,
     255,   252,   252,     5,    65,   284,   259,   258,   258,   259,
     259,   258,   252,   252,   448,   275,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    80,    86,    99,   258,   334,
      69,    81,   258,   318,    82,    86,    87,   258,   324,   384,
     251,   384,   302,     5,     5,     5,   251,   251,   235,   250,
     454,   454,   258,   303,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
       3,   448,   252,   253,   302,   311,   257,   312,    98,   108,
     109,   110,   258,   357,    96,    98,    99,   100,   101,   102,
     103,   104,   258,   341,    96,    98,   106,   258,   347,    86,
      96,    98,   258,   354,    81,    83,    84,    86,    96,   113,
     114,   115,   130,   183,   251,   258,   364,   375,   375,   379,
     371,    86,    96,   134,   135,   136,   137,   138,   139,   258,
     392,   444,   251,   454,   251,   251,   296,   251,   251,   251,
     251,   251,   251,   251,     7,   251,   257,   251,   257,   251,
     257,   257,   251,   251,   251,   251,   251,   251,   251,   251,
     257,   257,   251,   251,   251,   251,   251,   257,   257,   251,
     399,   400,    75,    96,   258,   421,   258,   259,   296,   451,
     451,   451,   451,   252,   255,     7,   454,   285,   296,   296,
     448,   258,   251,   280,   280,   280,   280,   251,   296,   251,
     296,   296,   296,   257,     5,     5,   251,   296,    64,   280,
       5,   257,     5,     5,   252,   300,   252,   259,   259,   251,
     252,   300,   300,   251,   258,   302,   252,   252,   259,    69,
     451,     5,   281,   284,   454,     5,     5,     5,   257,   298,
     298,   280,   280,     5,     5,   257,   350,     5,   257,   348,
       5,   454,     5,     5,     5,     5,     5,   107,   117,   454,
       5,   454,     3,     3,   280,   450,   367,    81,    83,    84,
      85,   122,   123,   124,   125,   126,   127,   128,   130,   131,
     258,   376,   383,   258,   130,   258,   380,   383,    86,   110,
     257,   258,   372,     5,   454,   257,   393,   454,   455,   450,
     455,   257,   395,   454,     5,   454,     7,   296,   296,     7,
       5,     5,     5,     5,     5,     5,     5,   448,   404,   448,
     406,   448,   408,   410,   280,   455,     5,     5,     5,     5,
       5,     5,   454,   454,     5,     5,     5,     5,     5,   454,
       5,   454,   251,   251,   257,   454,   448,   258,   258,   258,
     258,   258,     7,   454,   291,   259,   259,   254,     7,     7,
       7,     7,   296,     7,   296,     7,     7,     7,   449,     7,
       7,   296,     7,     7,     7,   312,   325,     7,     7,   259,
     302,     3,   308,   257,   252,   259,   300,     8,   302,   251,
     258,     7,     7,     7,   291,     7,     7,   290,   257,   342,
       5,     7,     7,     7,     7,     7,   351,     7,   349,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
     257,   365,     7,     7,     7,     7,   300,     5,     5,     5,
     251,   280,     7,   251,   280,   251,     5,     5,   373,     7,
       7,   394,     7,   291,     7,     7,     7,   396,     7,     7,
     252,   252,   252,   259,   259,   259,   259,   259,   259,   259,
     259,   140,   143,   153,   154,   155,   258,   405,   259,   140,
     143,   153,   154,   157,   158,   258,   407,   259,    18,    88,
     140,   160,   161,   258,   409,    18,    88,   133,   140,   141,
     160,   163,   164,   258,   411,   259,   252,   259,   259,   259,
     259,   259,   259,   258,   258,   259,   259,   259,   259,   259,
     259,   259,   252,     5,   298,   401,   401,   422,     7,   258,
     257,   257,   258,   257,   257,     7,   296,   448,   285,   259,
     259,   289,   259,     7,   257,   258,   280,   252,   252,   300,
     448,     3,   252,   304,   280,     7,     7,   112,     7,   289,
     258,   289,   258,   289,   258,   251,   368,   252,     7,     7,
       7,     3,     7,   377,     7,   381,     7,     7,    78,    79,
     116,   130,   258,   374,   258,   289,   258,   289,     7,   257,
       7,   296,     5,     5,   448,     5,   296,   280,   448,   257,
     296,   448,   448,   296,   448,   257,   296,   448,   448,   448,
     448,   448,   448,   448,   257,   448,   296,   448,   448,     5,
     257,   257,   448,   448,   257,   296,     7,   296,   450,   450,
     450,   448,   450,     7,     7,     5,     5,   448,     5,     5,
     280,     5,     7,   402,   402,     5,   117,   258,   257,   450,
     451,   257,   451,   451,   258,   258,   276,   296,   296,   449,
     296,   326,   252,   252,   259,   252,   302,   252,     5,     5,
       5,     5,   366,   454,     7,     7,   252,   300,   300,   384,
     384,   384,   280,   454,   454,   397,   252,   259,   259,   259,
     259,   252,   259,   259,   397,     7,     7,     7,     7,   259,
     397,     7,     7,     7,     7,     7,   259,     7,     7,   397,
       7,     7,     7,     7,     7,   397,   397,     7,     7,   412,
     252,   259,   259,   252,   252,   259,   259,   259,   259,   259,
     252,   252,   252,   259,   258,   259,   252,   259,   403,   252,
     257,   257,   448,   259,   258,   448,   258,   258,   259,   252,
     252,   258,   252,    89,    90,    91,    92,    93,    94,   258,
     327,   252,   448,   258,     7,   258,   368,   252,     7,   378,
     382,     7,     7,     7,     7,   258,     7,   450,   448,   450,
       5,     7,     5,   296,   258,   296,   258,   296,   258,   258,
     258,   257,   258,     7,   448,   296,     7,     7,   448,   455,
     455,   448,   448,     7,     7,     7,   455,     7,   135,     7,
     206,   209,   450,     7,   423,   423,   258,   450,   258,   258,
     258,   257,   254,     7,     7,     7,     7,     5,   448,   448,
     448,   448,   448,   257,   258,   111,     7,     7,   259,   259,
      16,   252,   252,   259,   259,   252,   259,   259,   252,   259,
     413,   259,   252,   259,   252,   252,   252,   259,   259,   258,
     259,   455,   455,   450,    81,    83,    86,   130,   258,   383,
     424,   258,   259,   257,   451,   285,     7,     7,     7,     7,
       7,     7,   448,     5,   300,   384,   257,     7,     7,   448,
     448,     7,   296,   448,   257,   448,    18,    86,    88,    99,
     112,   130,   258,   414,   296,     7,   296,     7,     7,     7,
     448,   448,     7,   296,   258,   259,     5,     5,     5,   426,
     251,   450,   448,   258,   259,   258,   290,   252,   252,   397,
     252,   259,   252,   259,   397,   252,     5,     5,   448,   296,
       5,   280,   252,   252,   259,   252,   252,   258,     7,     4,
       7,     7,     7,   280,   425,   258,   259,   258,   448,     7,
       7,     7,   258,     7,   450,   257,   448,   258,   257,     7,
       7,     7,     7,     7,     7,     7,     7,   296,   257,   257,
       7,   258,     7,   300,   448,   257,   252,   343,   259,   397,
     252,   397,   252,   397,   397,     7,   252,   258,   448,     7,
      62,   448,   258,   257,   258,     7,   258,   258,     7,   259,
     280,   259,   397,     7,     7,   448,     7,   448,   258,   259,
     344,   252,   448,   132,     7,   258,     5,   291,     7,   258
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
#line 5353 "GetDP.y"
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
#line 5369 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;}
    break;

  case 480:
#line 5373 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 481:
#line 5377 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 482:
#line 5381 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;}
    break;

  case 483:
#line 5386 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 484:
#line 5397 "GetDP.y"
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
#line 5414 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;}
    break;

  case 487:
#line 5418 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 488:
#line 5422 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 489:
#line 5426 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;}
    break;

  case 490:
#line 5430 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;}
    break;

  case 491:
#line 5435 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 492:
#line 5446 "GetDP.y"
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
#line 5461 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 495:
#line 5465 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;}
    break;

  case 496:
#line 5469 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;}
    break;

  case 497:
#line 5473 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 498:
#line 5477 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 499:
#line 5488 "GetDP.y"
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
#line 5506 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 502:
#line 5510 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;}
    break;

  case 503:
#line 5514 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;}
    break;

  case 504:
#line 5518 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 505:
#line 5523 "GetDP.y"
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
#line 5533 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;}
    break;

  case 507:
#line 5539 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 508:
#line 5545 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;}
    break;

  case 509:
#line 5555 "GetDP.y"
    { yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 510:
#line 5558 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;}
    break;

  case 511:
#line 5563 "GetDP.y"
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
#line 5581 "GetDP.y"
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
#line 5591 "GetDP.y"
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
#line 5620 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;}
    break;

  case 516:
#line 5623 "GetDP.y"
    { ChangeOfState_S.Criterion = yyvsp[-1].d ; ;}
    break;

  case 517:
#line 5626 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;}
    break;

  case 518:
#line 5634 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 519:
#line 5651 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 521:
#line 5663 "GetDP.y"
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
#line 5686 "GetDP.y"
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
#line 5700 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 526:
#line 5707 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;}
    break;

  case 527:
#line 5715 "GetDP.y"
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
#line 5761 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;}
    break;

  case 529:
#line 5766 "GetDP.y"
    { PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;}
    break;

  case 530:
#line 5772 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 531:
#line 5775 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;}
    break;

  case 532:
#line 5778 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 533:
#line 5780 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 534:
#line 5786 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 536:
#line 5797 "GetDP.y"
    { PostQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 537:
#line 5800 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;}
    break;

  case 538:
#line 5806 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 539:
#line 5811 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;}
    break;

  case 540:
#line 5817 "GetDP.y"
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
#line 5831 "GetDP.y"
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
#line 5845 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 544:
#line 5852 "GetDP.y"
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
#line 5880 "GetDP.y"
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
#line 5890 "GetDP.y"
    { Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;}
    break;

  case 547:
#line 5891 "GetDP.y"
    { 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;}
    break;

  case 548:
#line 5897 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 549:
#line 5906 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 550:
#line 5923 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 552:
#line 5935 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 555:
#line 5944 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 557:
#line 5956 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 558:
#line 5963 "GetDP.y"
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
#line 5975 "GetDP.y"
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
#line 5986 "GetDP.y"
    { 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;}
    break;

  case 561:
#line 5991 "GetDP.y"
    { PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;}
    break;

  case 562:
#line 5997 "GetDP.y"
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
#line 6014 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 564:
#line 6024 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 565:
#line 6027 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 566:
#line 6031 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 567:
#line 6044 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 568:
#line 6048 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;}
    break;

  case 569:
#line 6054 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;}
    break;

  case 570:
#line 6060 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 571:
#line 6067 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 572:
#line 6075 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 573:
#line 6081 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;}
    break;

  case 574:
#line 6086 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 575:
#line 6091 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;}
    break;

  case 576:
#line 6100 "GetDP.y"
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
#line 6112 "GetDP.y"
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
#line 6135 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 579:
#line 6136 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 580:
#line 6137 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 581:
#line 6138 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 582:
#line 6144 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 583:
#line 6146 "GetDP.y"
    { yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;}
    break;

  case 584:
#line 6152 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 585:
#line 6158 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;}
    break;

  case 586:
#line 6165 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;}
    break;

  case 587:
#line 6174 "GetDP.y"
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
#line 6196 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;}
    break;

  case 589:
#line 6204 "GetDP.y"
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
#line 6215 "GetDP.y"
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
#line 6229 "GetDP.y"
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
#line 6250 "GetDP.y"
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
#line 6277 "GetDP.y"
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
#line 6308 "GetDP.y"
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
#line 6328 "GetDP.y"
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
      PostSubOperation_S.StoreInRegister = -1 ;
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
#line 6541 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;}
    break;

  case 624:
#line 6551 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 625:
#line 6557 "GetDP.y"
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

  case 626:
#line 6607 "GetDP.y"
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

  case 627:
#line 6617 "GetDP.y"
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

  case 628:
#line 6627 "GetDP.y"
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

  case 629:
#line 6641 "GetDP.y"
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

  case 630:
#line 6655 "GetDP.y"
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

  case 631:
#line 6681 "GetDP.y"
    {
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;}
    break;

  case 632:
#line 6685 "GetDP.y"
    {
    ;}
    break;

  case 634:
#line 6701 "GetDP.y"
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

  case 635:
#line 6716 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 636:
#line 6722 "GetDP.y"
    { Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 637:
#line 6728 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 638:
#line 6734 "GetDP.y"
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

  case 639:
#line 6745 "GetDP.y"
    {
      Msg(DIRECT, yyvsp[-2].c);
    ;}
    break;

  case 640:
#line 6750 "GetDP.y"
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

  case 641:
#line 6762 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 642:
#line 6772 "GetDP.y"
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

  case 644:
#line 6791 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 645:
#line 6797 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 646:
#line 6803 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 647:
#line 6814 "GetDP.y"
    { yyval.c = "Exp";    ;}
    break;

  case 648:
#line 6815 "GetDP.y"
    { yyval.c = "Log";    ;}
    break;

  case 649:
#line 6816 "GetDP.y"
    { yyval.c = "Log10";  ;}
    break;

  case 650:
#line 6817 "GetDP.y"
    { yyval.c = "Sqrt";   ;}
    break;

  case 651:
#line 6818 "GetDP.y"
    { yyval.c = "Sin";    ;}
    break;

  case 652:
#line 6819 "GetDP.y"
    { yyval.c = "Asin";   ;}
    break;

  case 653:
#line 6820 "GetDP.y"
    { yyval.c = "Cos";    ;}
    break;

  case 654:
#line 6821 "GetDP.y"
    { yyval.c = "Acos";   ;}
    break;

  case 655:
#line 6822 "GetDP.y"
    { yyval.c = "Tan";    ;}
    break;

  case 656:
#line 6823 "GetDP.y"
    { yyval.c = "Atan";   ;}
    break;

  case 657:
#line 6824 "GetDP.y"
    { yyval.c = "Atan2";  ;}
    break;

  case 658:
#line 6825 "GetDP.y"
    { yyval.c = "Sinh";   ;}
    break;

  case 659:
#line 6826 "GetDP.y"
    { yyval.c = "Cosh";   ;}
    break;

  case 660:
#line 6827 "GetDP.y"
    { yyval.c = "Tanh";   ;}
    break;

  case 661:
#line 6828 "GetDP.y"
    { yyval.c = "Fabs";   ;}
    break;

  case 662:
#line 6829 "GetDP.y"
    { yyval.c = "Floor";  ;}
    break;

  case 663:
#line 6830 "GetDP.y"
    { yyval.c = "Ceil";   ;}
    break;

  case 664:
#line 6831 "GetDP.y"
    { yyval.c = "Fmod";   ;}
    break;

  case 665:
#line 6832 "GetDP.y"
    { yyval.c = "Modulo"; ;}
    break;

  case 666:
#line 6833 "GetDP.y"
    { yyval.c = "Hypot";  ;}
    break;

  case 667:
#line 6834 "GetDP.y"
    { yyval.c = yyvsp[0].c;       ;}
    break;

  case 668:
#line 6838 "GetDP.y"
    { yyval.d = yyvsp[0].d ;          ;}
    break;

  case 669:
#line 6839 "GetDP.y"
    { yyval.d = yyvsp[-1].d ;          ;}
    break;

  case 670:
#line 6840 "GetDP.y"
    { yyval.d = -yyvsp[0].d ;         ;}
    break;

  case 671:
#line 6841 "GetDP.y"
    { yyval.d = !yyvsp[0].d ;         ;}
    break;

  case 672:
#line 6842 "GetDP.y"
    { yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;}
    break;

  case 673:
#line 6843 "GetDP.y"
    { yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;}
    break;

  case 674:
#line 6844 "GetDP.y"
    { yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;}
    break;

  case 675:
#line 6845 "GetDP.y"
    { yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;}
    break;

  case 676:
#line 6846 "GetDP.y"
    { yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;}
    break;

  case 677:
#line 6847 "GetDP.y"
    { yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;}
    break;

  case 678:
#line 6848 "GetDP.y"
    { yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;}
    break;

  case 679:
#line 6849 "GetDP.y"
    { yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;}
    break;

  case 680:
#line 6850 "GetDP.y"
    { yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;}
    break;

  case 681:
#line 6851 "GetDP.y"
    { yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;}
    break;

  case 682:
#line 6852 "GetDP.y"
    { yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;}
    break;

  case 683:
#line 6853 "GetDP.y"
    { yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;}
    break;

  case 684:
#line 6854 "GetDP.y"
    { yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;}
    break;

  case 685:
#line 6855 "GetDP.y"
    { yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;}
    break;

  case 686:
#line 6856 "GetDP.y"
    { yyval.d = exp(yyvsp[-1].d);      ;}
    break;

  case 687:
#line 6857 "GetDP.y"
    { yyval.d = log(yyvsp[-1].d);      ;}
    break;

  case 688:
#line 6858 "GetDP.y"
    { yyval.d = log10(yyvsp[-1].d);    ;}
    break;

  case 689:
#line 6859 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-1].d);     ;}
    break;

  case 690:
#line 6860 "GetDP.y"
    { yyval.d = sin(yyvsp[-1].d);      ;}
    break;

  case 691:
#line 6861 "GetDP.y"
    { yyval.d = asin(yyvsp[-1].d);     ;}
    break;

  case 692:
#line 6862 "GetDP.y"
    { yyval.d = cos(yyvsp[-1].d);      ;}
    break;

  case 693:
#line 6863 "GetDP.y"
    { yyval.d = acos(yyvsp[-1].d);     ;}
    break;

  case 694:
#line 6864 "GetDP.y"
    { yyval.d = tan(yyvsp[-1].d);      ;}
    break;

  case 695:
#line 6865 "GetDP.y"
    { yyval.d = atan(yyvsp[-1].d);     ;}
    break;

  case 696:
#line 6866 "GetDP.y"
    { yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;}
    break;

  case 697:
#line 6867 "GetDP.y"
    { yyval.d = sinh(yyvsp[-1].d);     ;}
    break;

  case 698:
#line 6868 "GetDP.y"
    { yyval.d = cosh(yyvsp[-1].d);     ;}
    break;

  case 699:
#line 6869 "GetDP.y"
    { yyval.d = tanh(yyvsp[-1].d);     ;}
    break;

  case 700:
#line 6870 "GetDP.y"
    { yyval.d = fabs(yyvsp[-1].d);     ;}
    break;

  case 701:
#line 6871 "GetDP.y"
    { yyval.d = floor(yyvsp[-1].d);    ;}
    break;

  case 702:
#line 6872 "GetDP.y"
    { yyval.d = ceil(yyvsp[-1].d);     ;}
    break;

  case 703:
#line 6873 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 704:
#line 6874 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 705:
#line 6875 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;}
    break;

  case 706:
#line 6876 "GetDP.y"
    { yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;}
    break;

  case 707:
#line 6877 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;}
    break;

  case 708:
#line 6882 "GetDP.y"
    { yyval.d = yyvsp[0].d ; ;}
    break;

  case 709:
#line 6883 "GetDP.y"
    { yyval.d = (double)yyvsp[0].i ; ;}
    break;

  case 710:
#line 6884 "GetDP.y"
    { yyval.d = 3.1415926535897932 ; ;}
    break;

  case 711:
#line 6885 "GetDP.y"
    { yyval.d = (double)_0D ; ;}
    break;

  case 712:
#line 6886 "GetDP.y"
    { yyval.d = (double)_1D ; ;}
    break;

  case 713:
#line 6887 "GetDP.y"
    { yyval.d = (double)_2D ; ;}
    break;

  case 714:
#line 6888 "GetDP.y"
    { yyval.d = (double)_3D ; ;}
    break;

  case 715:
#line 6907 "GetDP.y"
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

  case 716:
#line 6925 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 717:
#line 6928 "GetDP.y"
    { 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 718:
#line 6934 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 719:
#line 6937 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 720:
#line 6944 "GetDP.y"
    { 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 721:
#line 6950 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 722:
#line 6953 "GetDP.y"
    { List_Add(yyval.l, &(yyvsp[0].d)) ; ;}
    break;

  case 723:
#line 6956 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 724:
#line 6968 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;}
    break;

  case 725:
#line 6974 "GetDP.y"
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

  case 726:
#line 6985 "GetDP.y"
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

  case 727:
#line 7001 "GetDP.y"
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

  case 728:
#line 7023 "GetDP.y"
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

  case 729:
#line 7038 "GetDP.y"
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

  case 730:
#line 7076 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 731:
#line 7084 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 732:
#line 7096 "GetDP.y"
    { 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;}
    break;

  case 733:
#line 7104 "GetDP.y"
    {
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;}
    break;

  case 734:
#line 7116 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 735:
#line 7118 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 736:
#line 7125 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 737:
#line 7128 "GetDP.y"
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

  case 738:
#line 7143 "GetDP.y"
    {
      yyval.c = yyvsp[0].c ;
    ;}
    break;

  case 739:
#line 7148 "GetDP.y"
    {
      yyval.c = yyvsp[-1].c;
    ;}
    break;

  case 740:
#line 7153 "GetDP.y"
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

  case 741:
#line 7172 "GetDP.y"
    {
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;}
    break;

  case 742:
#line 7190 "GetDP.y"
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
#line 11799 "GetDP.tab.c"

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


#line 7201 "GetDP.y"



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


