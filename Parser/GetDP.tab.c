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
     tEigenSolve = 403,
     tEigenSolveJac = 404,
     tPerturbation = 405,
     tUpdate = 406,
     tUpdateConstraint = 407,
     tBreak = 408,
     tEvaluate = 409,
     tTimeLoopTheta = 410,
     tTime0 = 411,
     tTimeMax = 412,
     tTheta = 413,
     tTimeLoopNewmark = 414,
     tBeta = 415,
     tGamma = 416,
     tIterativeLoop = 417,
     tNbrMaxIteration = 418,
     tRelaxationFactor = 419,
     tIterativeTimeReduction = 420,
     tDivisionCoefficient = 421,
     tChangeOfState = 422,
     tChangeOfCoordinates = 423,
     tChangeOfCoordinates2 = 424,
     tSystemCommand = 425,
     tGenerateFMMGroups = 426,
     tGenerateOnly = 427,
     tGenerateOnlyJac = 428,
     tSolveJac_AdaptRelax = 429,
     tSaveSolutionExtendedMH = 430,
     tSaveSolutionMHtoTime = 431,
     tInit_MovingBand2D = 432,
     tMesh_MovingBand2D = 433,
     tGenerate_MH_Moving = 434,
     tGenerate_MH_Moving_Separate = 435,
     tAdd_MH_Moving = 436,
     tGenerateGroup = 437,
     tGenerateJacGroup = 438,
     tSaveMesh = 439,
     tDeformeMesh = 440,
     tDummyFrequency = 441,
     tPostProcessing = 442,
     tNameOfSystem = 443,
     tPostOperation = 444,
     tNameOfPostProcessing = 445,
     tUsingPost = 446,
     tAppend = 447,
     tPlot = 448,
     tPrint = 449,
     tPrintGroup = 450,
     tEcho = 451,
     tWrite = 452,
     tAdapt = 453,
     tOnGlobal = 454,
     tOnRegion = 455,
     tOnElementsOf = 456,
     tOnGrid = 457,
     tOnSection = 458,
     tOnPoint = 459,
     tOnLine = 460,
     tOnPlane = 461,
     tOnBox = 462,
     tWithArgument = 463,
     tFile = 464,
     tDepth = 465,
     tDimension = 466,
     tTimeStep = 467,
     tHarmonicToTime = 468,
     tFormat = 469,
     tHeader = 470,
     tFooter = 471,
     tSkin = 472,
     tSmoothing = 473,
     tTarget = 474,
     tSort = 475,
     tIso = 476,
     tNoNewLine = 477,
     tDecomposeInSimplex = 478,
     tChangeOfValues = 479,
     tTimeLegend = 480,
     tFrequencyLegend = 481,
     tEigenvalueLegend = 482,
     tEvaluationPoints = 483,
     tStore = 484,
     tLastTimeStepOnly = 485,
     tStr = 486,
     tDate = 487,
     tDEF = 488,
     tOR = 489,
     tAND = 490,
     tAPPROXEQUAL = 491,
     tNOTEQUAL = 492,
     tEQUAL = 493,
     tGREATERGREATER = 494,
     tLESSLESS = 495,
     tGREATEROREQUAL = 496,
     tLESSOREQUAL = 497,
     tCROSSPRODUCT = 498,
     UNARYPREC = 499,
     tSHOW = 500
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
#define tEigenSolve 403
#define tEigenSolveJac 404
#define tPerturbation 405
#define tUpdate 406
#define tUpdateConstraint 407
#define tBreak 408
#define tEvaluate 409
#define tTimeLoopTheta 410
#define tTime0 411
#define tTimeMax 412
#define tTheta 413
#define tTimeLoopNewmark 414
#define tBeta 415
#define tGamma 416
#define tIterativeLoop 417
#define tNbrMaxIteration 418
#define tRelaxationFactor 419
#define tIterativeTimeReduction 420
#define tDivisionCoefficient 421
#define tChangeOfState 422
#define tChangeOfCoordinates 423
#define tChangeOfCoordinates2 424
#define tSystemCommand 425
#define tGenerateFMMGroups 426
#define tGenerateOnly 427
#define tGenerateOnlyJac 428
#define tSolveJac_AdaptRelax 429
#define tSaveSolutionExtendedMH 430
#define tSaveSolutionMHtoTime 431
#define tInit_MovingBand2D 432
#define tMesh_MovingBand2D 433
#define tGenerate_MH_Moving 434
#define tGenerate_MH_Moving_Separate 435
#define tAdd_MH_Moving 436
#define tGenerateGroup 437
#define tGenerateJacGroup 438
#define tSaveMesh 439
#define tDeformeMesh 440
#define tDummyFrequency 441
#define tPostProcessing 442
#define tNameOfSystem 443
#define tPostOperation 444
#define tNameOfPostProcessing 445
#define tUsingPost 446
#define tAppend 447
#define tPlot 448
#define tPrint 449
#define tPrintGroup 450
#define tEcho 451
#define tWrite 452
#define tAdapt 453
#define tOnGlobal 454
#define tOnRegion 455
#define tOnElementsOf 456
#define tOnGrid 457
#define tOnSection 458
#define tOnPoint 459
#define tOnLine 460
#define tOnPlane 461
#define tOnBox 462
#define tWithArgument 463
#define tFile 464
#define tDepth 465
#define tDimension 466
#define tTimeStep 467
#define tHarmonicToTime 468
#define tFormat 469
#define tHeader 470
#define tFooter 471
#define tSkin 472
#define tSmoothing 473
#define tTarget 474
#define tSort 475
#define tIso 476
#define tNoNewLine 477
#define tDecomposeInSimplex 478
#define tChangeOfValues 479
#define tTimeLegend 480
#define tFrequencyLegend 481
#define tEigenvalueLegend 482
#define tEvaluationPoints 483
#define tStore 484
#define tLastTimeStepOnly 485
#define tStr 486
#define tDate 487
#define tDEF 488
#define tOR 489
#define tAND 490
#define tAPPROXEQUAL 491
#define tNOTEQUAL 492
#define tEQUAL 493
#define tGREATERGREATER 494
#define tLESSLESS 495
#define tGREATEROREQUAL 496
#define tLESSOREQUAL 497
#define tCROSSPRODUCT 498
#define UNARYPREC 499
#define tSHOW 500




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.97 2006-02-14 17:36:19 dular Exp $ */
/*
 * Copyright (C) 1997-2005 P. Dular, C. Geuzaine
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
#include "Parser.h"
#include "Message.h"
#include "Magic.h"

void  hack_endfor(void) ;
void  hack_endfor_printf(void) ;
void  hack_endfor2(void) ;

void Check_NameOfStructNotExist(char * Struct, List_T * List_L, void * data,
				int (*fcmp)(const void *a, const void *b)) ;
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


void yyerror(char *s) ;
void vyyerror(char *fmt, ...) ;
int  yylex();

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

char    * Save_Name, tmpstr[1024] ;

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

double   d ;

time_t date_info;

FILE* File;

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

#define MAX_RECUR_LOOPS 100
static double x0, x1, step;
static int ImbricatedLoop = 0, do_next;
static fpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static char *LoopControlVariablesNameTab[MAX_RECUR_LOOPS];



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
#line 192 "GetDP.y"
typedef union YYSTYPE {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 764 "GetDP.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 776 "GetDP.tab.c"

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
#define YYLAST   6857

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  268
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  195
/* YYNRULES -- Number of rules. */
#define YYNRULES  753
/* YYNRULES -- Number of states. */
#define YYNSTATES  2045

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   500

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   252,     2,   260,   261,   250,     2,     2,
     255,   256,   248,   246,   265,   247,   259,   249,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     240,     2,   241,   234,   266,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   257,     2,   258,   254,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   263,     2,   264,   267,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   235,
     236,   237,   238,   239,   242,   243,   244,   245,   251,   253,
     262
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
     281,   285,   291,   297,   305,   307,   311,   312,   316,   323,
     324,   326,   331,   332,   335,   339,   340,   343,   349,   356,
     364,   366,   368,   369,   373,   378,   383,   384,   387,   388,
     392,   394,   398,   399,   402,   404,   405,   406,   414,   418,
     422,   429,   433,   437,   441,   445,   449,   453,   457,   461,
     465,   469,   473,   477,   481,   485,   488,   491,   494,   498,
     500,   504,   507,   509,   512,   513,   519,   520,   528,   529,
     541,   551,   556,   561,   562,   570,   577,   580,   583,   586,
     589,   593,   596,   600,   604,   607,   611,   613,   617,   618,
     622,   629,   630,   635,   636,   639,   643,   648,   649,   654,
     655,   658,   662,   666,   671,   672,   677,   678,   681,   685,
     689,   694,   695,   700,   701,   704,   708,   712,   717,   718,
     723,   724,   727,   731,   735,   739,   743,   747,   751,   752,
     755,   759,   761,   763,   764,   767,   771,   776,   780,   785,
     791,   792,   797,   800,   801,   804,   808,   812,   816,   820,
     824,   828,   836,   840,   844,   848,   852,   856,   864,   872,
     880,   881,   884,   888,   890,   892,   893,   896,   900,   905,
     909,   914,   919,   924,   929,   930,   935,   938,   939,   942,
     946,   950,   955,   960,   968,   972,   976,   980,   984,   985,
     986,   987,  1006,  1007,  1012,  1013,  1016,  1020,  1024,  1028,
    1030,  1034,  1035,  1039,  1041,  1045,  1046,  1050,  1051,  1056,
    1057,  1060,  1064,  1068,  1072,  1073,  1078,  1081,  1082,  1085,
    1089,  1093,  1097,  1102,  1103,  1106,  1110,  1112,  1114,  1115,
    1118,  1122,  1127,  1131,  1136,  1141,  1142,  1147,  1150,  1151,
    1154,  1158,  1162,  1166,  1170,  1174,  1175,  1181,  1182,  1190,
    1194,  1195,  1201,  1205,  1209,  1213,  1217,  1221,  1222,  1226,
    1227,  1230,  1233,  1236,  1241,  1246,  1251,  1256,  1257,  1260,
    1264,  1268,  1272,  1273,  1276,  1280,  1284,  1288,  1292,  1293,
    1296,  1297,  1298,  1308,  1312,  1316,  1320,  1323,  1327,  1333,
    1334,  1337,  1341,  1342,  1343,  1353,  1354,  1356,  1358,  1360,
    1362,  1364,  1366,  1368,  1373,  1377,  1378,  1381,  1385,  1387,
    1389,  1390,  1393,  1397,  1402,  1407,  1408,  1414,  1416,  1417,
    1422,  1425,  1426,  1429,  1433,  1437,  1441,  1445,  1449,  1453,
    1457,  1461,  1463,  1466,  1470,  1471,  1475,  1477,  1481,  1482,
    1486,  1487,  1490,  1494,  1498,  1503,  1508,  1513,  1518,  1524,
    1530,  1533,  1541,  1553,  1561,  1575,  1587,  1597,  1605,  1613,
    1621,  1631,  1641,  1651,  1663,  1675,  1687,  1693,  1711,  1725,
    1741,  1753,  1767,  1768,  1776,  1777,  1785,  1793,  1805,  1811,
    1817,  1827,  1837,  1847,  1853,  1859,  1871,  1881,  1896,  1911,
    1919,  1932,  1943,  1951,  1959,  1967,  1969,  1971,  1973,  1974,
    1977,  1981,  1985,  1988,  1989,  1992,  1996,  2000,  2004,  2008,
    2013,  2014,  2017,  2021,  2025,  2029,  2033,  2037,  2042,  2043,
    2046,  2050,  2054,  2058,  2062,  2067,  2068,  2071,  2075,  2079,
    2083,  2087,  2091,  2096,  2101,  2106,  2107,  2112,  2113,  2116,
    2120,  2124,  2128,  2132,  2136,  2140,  2141,  2144,  2148,  2150,
    2152,  2153,  2156,  2160,  2165,  2170,  2174,  2179,  2180,  2185,
    2188,  2191,  2192,  2195,  2199,  2204,  2205,  2211,  2217,  2218,
    2221,  2222,  2229,  2233,  2234,  2239,  2243,  2247,  2248,  2251,
    2255,  2257,  2259,  2260,  2263,  2267,  2271,  2275,  2279,  2284,
    2285,  2294,  2295,  2296,  2300,  2308,  2316,  2325,  2337,  2344,
    2345,  2356,  2358,  2362,  2369,  2371,  2373,  2375,  2377,  2378,
    2382,  2384,  2387,  2390,  2403,  2406,  2422,  2427,  2440,  2458,
    2481,  2494,  2495,  2498,  2502,  2507,  2512,  2516,  2519,  2522,
    2526,  2530,  2534,  2538,  2542,  2546,  2550,  2554,  2558,  2562,
    2566,  2570,  2576,  2579,  2582,  2586,  2596,  2600,  2603,  2613,
    2616,  2626,  2629,  2639,  2645,  2649,  2652,  2653,  2656,  2663,
    2672,  2681,  2692,  2694,  2699,  2701,  2707,  2712,  2717,  2725,
    2730,  2738,  2744,  2752,  2758,  2767,  2768,  2772,  2778,  2784,
    2786,  2788,  2790,  2792,  2794,  2796,  2798,  2800,  2802,  2804,
    2806,  2808,  2810,  2812,  2814,  2816,  2818,  2820,  2822,  2824,
    2826,  2828,  2832,  2835,  2838,  2842,  2846,  2850,  2854,  2858,
    2862,  2866,  2870,  2874,  2878,  2882,  2886,  2890,  2894,  2899,
    2904,  2909,  2914,  2919,  2924,  2929,  2934,  2939,  2944,  2951,
    2956,  2961,  2966,  2971,  2976,  2981,  2988,  2995,  3002,  3005,
    3007,  3009,  3011,  3013,  3015,  3017,  3019,  3021,  3022,  3024,
    3026,  3030,  3032,  3034,  3038,  3042,  3046,  3052,  3056,  3061,
    3066,  3073,  3082,  3091,  3097,  3103,  3105,  3107,  3109,  3111,
    3113,  3118,  3125,  3127
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     269,     0,    -1,    -1,   270,   271,    -1,    -1,    -1,   271,
     272,   273,    -1,    62,   263,   276,   264,    -1,    99,   263,
     299,   264,    -1,    68,   263,   334,   264,    -1,    81,   263,
     319,   264,    -1,    83,   263,   325,   264,    -1,    95,   263,
     341,   264,    -1,   111,   263,   364,   264,    -1,   132,   263,
     391,   264,    -1,   187,   263,   421,   264,    -1,   189,   263,
     433,   264,    -1,   437,    -1,   451,    -1,    22,   461,    -1,
     274,    -1,    19,     7,    -1,    19,   194,     7,    -1,    19,
      21,     7,    -1,    19,    36,     7,    -1,    19,    20,     7,
      -1,    19,    19,     7,    -1,    19,     5,     7,    -1,    20,
       7,    -1,    21,     7,    -1,    21,    62,     7,    -1,    21,
      99,     7,    -1,    21,    68,     7,    -1,    21,    81,     7,
      -1,    21,    83,     7,    -1,    21,    95,     7,    -1,    21,
     111,     7,    -1,    21,   132,     7,    -1,    21,   187,     7,
      -1,    21,   189,     7,    -1,    21,     3,     7,    -1,    -1,
     275,   441,    -1,    -1,    -1,   276,   277,   278,    -1,   460,
     233,   283,     7,    -1,     5,   298,   233,   283,     7,    -1,
      -1,     5,   296,   233,   279,   283,     7,    -1,    63,   257,
     294,   258,     7,    -1,   280,    -1,   460,   246,   233,   283,
       7,    -1,   451,    -1,   450,    -1,    -1,    -1,   460,   257,
     454,   258,   233,    66,   281,   257,   260,   291,   282,   265,
     260,   291,   265,   454,   258,     7,    -1,    -1,    -1,   287,
     257,   284,   288,   285,   289,   258,    -1,   260,   291,    -1,
     283,    -1,   460,   297,    -1,    69,    -1,     5,    -1,   291,
      -1,    64,    -1,    -1,   295,   290,   291,    -1,   295,    65,
     460,   297,    -1,     5,    -1,   293,    -1,   263,   292,   264,
      -1,    -1,   292,   295,   293,    -1,   292,   295,   247,   293,
      -1,     3,    -1,   255,   454,   256,    -1,   266,   457,   266,
      -1,     3,     8,   454,    -1,   255,   454,   256,     8,   454,
      -1,     3,     8,   454,     8,   454,    -1,   255,   454,   256,
       8,   454,     8,   454,    -1,   460,    -1,     5,   263,   264,
      -1,    -1,   294,   295,     5,    -1,   294,   295,     5,   263,
     454,   264,    -1,    -1,   265,    -1,   263,   260,   454,   264,
      -1,    -1,   263,   264,    -1,   263,   454,   264,    -1,    -1,
     299,   300,    -1,    67,   257,   301,   258,     7,    -1,     5,
     257,   258,   233,   302,     7,    -1,     5,   257,   286,   258,
     233,   302,     7,    -1,   451,    -1,   450,    -1,    -1,   301,
     295,     5,    -1,    23,   257,   454,   258,    -1,    99,   257,
       5,   258,    -1,    -1,   303,   306,    -1,    -1,   263,   305,
     264,    -1,   302,    -1,   305,   265,   302,    -1,    -1,   307,
     308,    -1,   311,    -1,    -1,    -1,   308,   234,   309,   308,
       8,   310,   308,    -1,   308,   248,   308,    -1,   308,   251,
     308,    -1,    58,   257,   308,   265,   308,   258,    -1,   308,
     249,   308,    -1,   308,   246,   308,    -1,   308,   247,   308,
      -1,   308,   250,   308,    -1,   308,   254,   308,    -1,   308,
     240,   308,    -1,   308,   241,   308,    -1,   308,   245,   308,
      -1,   308,   244,   308,    -1,   308,   239,   308,    -1,   308,
     238,   308,    -1,   308,   237,   308,    -1,   308,   236,   308,
      -1,   308,   235,   308,    -1,   247,   308,    -1,   246,   308,
      -1,   252,   308,    -1,   255,   308,   256,    -1,   455,    -1,
     453,   316,   318,    -1,     5,   390,    -1,   390,    -1,   390,
     316,    -1,    -1,   122,   312,   257,   306,   258,    -1,    -1,
     129,   313,   257,   306,   265,     3,   258,    -1,    -1,    60,
     257,     5,   257,   314,   306,   258,   258,   263,   454,   264,
      -1,    61,   257,     5,   258,   263,   454,   265,   454,   264,
      -1,    55,   257,   390,   258,    -1,    57,   257,   390,   258,
      -1,    -1,    56,   315,   257,   306,   265,   286,   258,    -1,
     240,     5,   241,   257,   306,   258,    -1,   261,     5,    -1,
     261,   212,    -1,   261,   143,    -1,   261,     3,    -1,   311,
     260,     3,    -1,   260,     3,    -1,   311,   262,   454,    -1,
     257,   259,   258,    -1,   257,   258,    -1,   257,   317,   258,
      -1,   308,    -1,   317,   265,   308,    -1,    -1,   263,   457,
     264,    -1,   263,    69,   257,   286,   258,   264,    -1,    -1,
     319,   263,   320,   264,    -1,    -1,   320,   321,    -1,    96,
       5,     7,    -1,    82,   263,   322,   264,    -1,    -1,   322,
     263,   323,   264,    -1,    -1,   323,   324,    -1,    69,   286,
       7,    -1,    69,    64,     7,    -1,    81,     5,   318,     7,
      -1,    -1,   325,   263,   326,   264,    -1,    -1,   326,   327,
      -1,    96,     5,     7,    -1,    88,   302,     7,    -1,    82,
     263,   328,   264,    -1,    -1,   328,   263,   329,   264,    -1,
      -1,   329,   330,    -1,    86,     5,     7,    -1,    87,     5,
       7,    -1,    82,   263,   331,   264,    -1,    -1,   331,   263,
     332,   264,    -1,    -1,   332,   333,    -1,    89,     5,     7,
      -1,    90,   454,     7,    -1,    91,   454,     7,    -1,    92,
     454,     7,    -1,    93,   454,     7,    -1,    94,   454,     7,
      -1,    -1,   334,   335,    -1,   263,   336,   264,    -1,   451,
      -1,   450,    -1,    -1,   336,   337,    -1,    96,   460,     7,
      -1,    96,   460,   296,     7,    -1,    86,     5,     7,    -1,
      82,   263,   338,   264,    -1,    82,     5,   263,   338,   264,
      -1,    -1,   338,   263,   339,   264,    -1,   338,   450,    -1,
      -1,   339,   340,    -1,    86,     5,     7,    -1,    69,   286,
       7,    -1,    70,   286,     7,    -1,    76,   302,     7,    -1,
      75,   302,     7,    -1,    80,   460,     7,    -1,    77,   263,
     455,   295,   455,   264,     7,    -1,    71,   286,     7,    -1,
      72,   286,     7,    -1,    99,   302,     7,    -1,    74,   302,
       7,    -1,    73,   302,     7,    -1,    99,   257,   302,   265,
     302,   258,     7,    -1,    74,   257,   302,   265,   302,   258,
       7,    -1,    73,   257,   302,   265,   302,   258,     7,    -1,
      -1,   341,   342,    -1,   263,   343,   264,    -1,   451,    -1,
     450,    -1,    -1,   343,   344,    -1,    96,   460,     7,    -1,
      96,     5,   296,     7,    -1,    86,     5,     7,    -1,    97,
     263,   345,   264,    -1,   105,   263,   351,   264,    -1,   107,
     263,   358,   264,    -1,    68,   263,   361,   264,    -1,    -1,
     345,   263,   346,   264,    -1,   345,   450,    -1,    -1,   346,
     347,    -1,    96,     5,     7,    -1,    98,     5,     7,    -1,
      98,     5,   296,     7,    -1,    99,     5,   348,     7,    -1,
     100,   263,     5,   295,     5,   264,     7,    -1,   101,   304,
       7,    -1,   102,   304,     7,    -1,   103,   286,     7,    -1,
     104,   286,     7,    -1,    -1,    -1,    -1,   263,   112,     5,
       7,   111,     5,   296,     7,   349,    62,   286,     7,   350,
     132,     5,   297,     7,   264,    -1,    -1,   351,   263,   352,
     264,    -1,    -1,   352,   353,    -1,    96,     5,     7,    -1,
     106,   354,     7,    -1,    98,   356,     7,    -1,     5,    -1,
     263,   355,   264,    -1,    -1,   355,   295,     5,    -1,     5,
      -1,   263,   357,   264,    -1,    -1,   357,   295,     5,    -1,
      -1,   358,   263,   359,   264,    -1,    -1,   359,   360,    -1,
      96,   460,     7,    -1,    86,     5,     7,    -1,    98,     5,
       7,    -1,    -1,   361,   263,   362,   264,    -1,   361,   450,
      -1,    -1,   362,   363,    -1,    98,     5,     7,    -1,   108,
     287,     7,    -1,   109,   290,     7,    -1,   110,   460,   297,
       7,    -1,    -1,   364,   365,    -1,   263,   366,   264,    -1,
     451,    -1,   450,    -1,    -1,   366,   367,    -1,    96,   460,
       7,    -1,    96,     5,   296,     7,    -1,    86,     5,     7,
      -1,   112,   263,   368,   264,    -1,   116,   263,   375,   264,
      -1,    -1,   368,   263,   369,   264,    -1,   368,   450,    -1,
      -1,   369,   370,    -1,    96,   460,     7,    -1,    86,   107,
       7,    -1,    86,   117,     7,    -1,    86,     5,     7,    -1,
     186,   456,     7,    -1,    -1,   113,   460,   371,   374,     7,
      -1,    -1,   113,     5,   263,   264,   372,   374,     7,    -1,
     114,     3,     7,    -1,    -1,   257,   373,   306,   258,     7,
      -1,   130,   286,     7,    -1,    83,     5,     7,    -1,    84,
       5,     7,    -1,    81,     5,     7,    -1,   115,     3,     7,
      -1,    -1,   257,   460,   258,    -1,    -1,   375,   376,    -1,
     375,   451,    -1,   375,   450,    -1,   117,   263,   381,   264,
      -1,   118,   263,   381,   264,    -1,   119,   263,   385,   264,
      -1,   120,   263,   377,   264,    -1,    -1,   377,   378,    -1,
      86,     5,     7,    -1,   110,     5,     7,    -1,   263,   379,
     264,    -1,    -1,   379,   380,    -1,    78,   390,     7,    -1,
      79,   390,     7,    -1,   116,   390,     7,    -1,   130,   286,
       7,    -1,    -1,   381,   382,    -1,    -1,    -1,   389,   257,
     383,   306,   384,   265,   306,   258,     7,    -1,   130,   286,
       7,    -1,    81,     5,     7,    -1,    83,     5,     7,    -1,
     131,     7,    -1,    84,     5,     7,    -1,    85,   257,     3,
     258,     7,    -1,    -1,   385,   386,    -1,   130,   286,     7,
      -1,    -1,    -1,   389,   257,   387,   306,   388,   265,   390,
     258,     7,    -1,    -1,   122,    -1,   123,    -1,   124,    -1,
     125,    -1,   126,    -1,   127,    -1,   128,    -1,   263,     5,
     460,   264,    -1,   263,   460,   264,    -1,    -1,   391,   392,
      -1,   263,   393,   264,    -1,   451,    -1,   450,    -1,    -1,
     393,   394,    -1,    96,   460,     7,    -1,    96,     5,   296,
       7,    -1,   133,   263,   396,   264,    -1,    -1,   140,   395,
     263,   403,   264,    -1,   450,    -1,    -1,   396,   263,   397,
     264,    -1,   396,   450,    -1,    -1,   397,   398,    -1,    96,
     460,     7,    -1,    86,     5,     7,    -1,   134,   399,     7,
      -1,   135,   461,     7,    -1,   138,   401,     7,    -1,   139,
     460,     7,    -1,   136,   456,     7,    -1,   137,   461,     7,
      -1,   450,    -1,   460,   297,    -1,   263,   400,   264,    -1,
      -1,   400,   295,   460,    -1,   460,    -1,   263,   402,   264,
      -1,    -1,   402,   295,   460,    -1,    -1,   403,   404,    -1,
       5,   460,     7,    -1,   142,   302,     7,    -1,   155,   263,
     410,   264,    -1,   159,   263,   412,   264,    -1,   162,   263,
     414,   264,    -1,   165,   263,   416,   264,    -1,     5,   257,
     460,   258,     7,    -1,   142,   257,   302,   258,     7,    -1,
     153,     7,    -1,    15,   257,   302,   258,   263,   403,   264,
      -1,    15,   257,   302,   258,   263,   403,   264,    16,   263,
     403,   264,    -1,   144,   257,   460,   265,   302,   258,     7,
      -1,   171,   257,   460,   265,   302,   265,   302,   265,   302,
     265,   302,   258,     7,    -1,   171,   257,   460,   265,   302,
     265,   302,   265,   302,   258,     7,    -1,   171,   257,   460,
     265,   302,   265,   302,   258,     7,    -1,   172,   257,   460,
     265,   456,   258,     7,    -1,   173,   257,   460,   265,   456,
     258,     7,    -1,   151,   257,   460,   265,   302,   258,     7,
      -1,   152,   257,   460,   265,   286,   265,   460,   258,     7,
      -1,   145,   257,   460,   265,   460,   265,   456,   258,     7,
      -1,   146,   257,   460,   265,   460,   265,   454,   258,     7,
      -1,   147,   257,   460,   265,   454,   265,   456,   265,   454,
     258,     7,    -1,   148,   257,   460,   265,   454,   265,   454,
     265,   454,   258,     7,    -1,   149,   257,   460,   265,   454,
     265,   454,   265,   454,   258,     7,    -1,   154,   257,   302,
     258,     7,    -1,   150,   257,   460,   265,   460,   265,   460,
     265,   454,   265,   456,   265,   454,   265,   454,   258,     7,
      -1,   155,   257,   454,   265,   454,   265,   302,   265,   302,
     258,   263,   403,   264,    -1,   159,   257,   454,   265,   454,
     265,   302,   265,   454,   265,   454,   258,   263,   403,   264,
      -1,   162,   257,   454,   265,   454,   265,   302,   258,   263,
     403,   264,    -1,   162,   257,   454,   265,   454,   265,   302,
     265,   454,   258,   263,   403,   264,    -1,    -1,   194,   405,
     257,   407,   408,   258,     7,    -1,    -1,   197,   406,   257,
     407,   408,   258,     7,    -1,   168,   257,   286,   265,   302,
     258,     7,    -1,   168,   257,   286,   265,   302,   265,   454,
     265,   302,   258,     7,    -1,   189,   257,   460,   258,     7,
      -1,   170,   257,   461,   258,     7,    -1,   174,   257,   460,
     265,   456,   265,   454,   258,     7,    -1,   175,   257,   460,
     265,   454,   265,   461,   258,     7,    -1,   176,   257,   460,
     265,   456,   265,   461,   258,     7,    -1,   177,   263,   460,
     264,     7,    -1,   178,   263,   460,   264,     7,    -1,   184,
     263,   460,   265,   286,   265,   461,   265,   302,   264,     7,
      -1,   184,   263,   460,   265,   286,   265,   461,   264,     7,
      -1,   179,   257,   460,   265,   460,   265,   454,   265,   454,
     258,   263,   403,   264,     7,    -1,   180,   257,   460,   265,
     460,   265,   454,   265,   454,   258,   263,   403,   264,     7,
      -1,   181,   257,   460,   265,   454,   258,     7,    -1,   185,
     263,     5,   265,     5,   265,   135,   461,   265,     4,   264,
       7,    -1,   185,   263,     5,   265,     5,   265,   135,   461,
     264,     7,    -1,   185,   263,     5,   265,     5,   264,     7,
      -1,   182,   257,   460,   265,   460,   258,     7,    -1,   183,
     257,   460,   265,   460,   258,     7,    -1,   450,    -1,   304,
      -1,   460,    -1,    -1,   408,   409,    -1,   265,   209,   461,
      -1,   265,   212,   456,    -1,   265,   456,    -1,    -1,   410,
     411,    -1,   156,   454,     7,    -1,   157,   454,     7,    -1,
     143,   302,     7,    -1,   158,   302,     7,    -1,   140,   263,
     403,   264,    -1,    -1,   412,   413,    -1,   156,   454,     7,
      -1,   157,   454,     7,    -1,   143,   302,     7,    -1,   160,
     454,     7,    -1,   161,   454,     7,    -1,   140,   263,   403,
     264,    -1,    -1,   414,   415,    -1,   163,   454,     7,    -1,
      88,   454,     7,    -1,   164,   302,     7,    -1,    18,   454,
       7,    -1,   140,   263,   403,   264,    -1,    -1,   416,   417,
      -1,   163,   454,     7,    -1,   166,   454,     7,    -1,    88,
     454,     7,    -1,    18,   454,     7,    -1,   133,   460,     7,
      -1,   167,   263,   418,   264,    -1,   140,   263,   403,   264,
      -1,   141,   263,   403,   264,    -1,    -1,   418,   263,   419,
     264,    -1,    -1,   419,   420,    -1,    86,     5,     7,    -1,
     112,     5,     7,    -1,   130,   286,     7,    -1,    88,   454,
       7,    -1,    99,   302,     7,    -1,    18,     5,     7,    -1,
      -1,   421,   422,    -1,   263,   423,   264,    -1,   451,    -1,
     450,    -1,    -1,   423,   424,    -1,    96,   460,     7,    -1,
      96,     5,   296,     7,    -1,   134,   460,   297,     7,    -1,
     188,   460,     7,    -1,   112,   263,   425,   264,    -1,    -1,
     425,   263,   426,   264,    -1,   425,   451,    -1,   425,   450,
      -1,    -1,   426,   427,    -1,    96,   460,     7,    -1,    75,
     263,   428,   264,    -1,    -1,   428,   117,   263,   429,   264,
      -1,   428,     5,   263,   429,   264,    -1,    -1,   429,   430,
      -1,    -1,   389,   257,   431,   306,   258,     7,    -1,    86,
       5,     7,    -1,    -1,   130,   432,   286,     7,    -1,    81,
       5,     7,    -1,    83,     5,     7,    -1,    -1,   433,   434,
      -1,   263,   435,   264,    -1,   451,    -1,   450,    -1,    -1,
     435,   436,    -1,    96,   460,     7,    -1,   190,   460,     7,
      -1,   214,     5,     7,    -1,   192,   461,     7,    -1,   140,
     263,   439,   264,    -1,    -1,   189,   460,   191,   460,   438,
     263,   439,   264,    -1,    -1,    -1,   439,   440,   441,    -1,
     193,   257,   443,   446,   447,   258,     7,    -1,   194,   257,
     443,   446,   447,   258,     7,    -1,   194,   257,     6,   265,
     302,   447,   258,     7,    -1,   194,   257,     6,   265,   231,
     257,   461,   258,   447,   258,     7,    -1,   196,   257,     6,
     447,   258,     7,    -1,    -1,   195,   257,   286,   442,   265,
     130,   286,   447,   258,     7,    -1,   450,    -1,   460,   445,
     265,    -1,   460,   445,   444,     5,   445,   265,    -1,   248,
      -1,   249,    -1,   246,    -1,   247,    -1,    -1,   257,   286,
     258,    -1,   199,    -1,   200,   286,    -1,   201,   286,    -1,
     203,   263,   263,   457,   264,   263,   457,   264,   263,   457,
     264,   264,    -1,   202,   286,    -1,   202,   263,   302,   265,
     302,   265,   302,   264,   263,   456,   265,   456,   265,   456,
     264,    -1,   204,   263,   457,   264,    -1,   205,   263,   263,
     457,   264,   263,   457,   264,   264,   263,   454,   264,    -1,
     206,   263,   263,   457,   264,   263,   457,   264,   263,   457,
     264,   264,   263,   454,   265,   454,   264,    -1,   207,   263,
     263,   457,   264,   263,   457,   264,   263,   457,   264,   263,
     457,   264,   264,   263,   454,   265,   454,   265,   454,   264,
      -1,   200,   286,   208,     5,   263,   454,   265,   454,   264,
     263,   454,   264,    -1,    -1,   447,   448,    -1,   265,   209,
     461,    -1,   265,   209,   241,   461,    -1,   265,   209,   242,
     461,    -1,   265,   210,   454,    -1,   265,   217,    -1,   265,
     218,    -1,   265,   213,   454,    -1,   265,   214,     5,    -1,
     265,   215,   449,    -1,   265,   216,   449,    -1,   265,   214,
     449,    -1,   265,   211,   454,    -1,   265,   212,   456,    -1,
     265,   198,     5,    -1,   265,   220,     5,    -1,   265,   219,
     454,    -1,   265,    75,   456,    -1,   265,   221,   454,    -1,
     265,   221,   263,   457,   264,    -1,   265,   222,    -1,   265,
     223,    -1,   265,   136,   456,    -1,   265,   168,   263,   302,
     265,   302,   265,   302,   264,    -1,   265,   224,   304,    -1,
     265,   225,    -1,   265,   225,   263,   454,   265,   454,   265,
     454,   264,    -1,   265,   226,    -1,   265,   226,   263,   454,
     265,   454,   265,   454,   264,    -1,   265,   227,    -1,   265,
     227,   263,   454,   265,   454,   265,   454,   264,    -1,   265,
     228,   263,   457,   264,    -1,   265,   229,     3,    -1,   265,
     230,    -1,    -1,   449,     6,    -1,    13,   255,   454,     8,
     454,   256,    -1,    13,   255,   454,     8,   454,     8,   454,
     256,    -1,    13,     5,   130,   263,   454,     8,   454,   264,
      -1,    13,     5,   130,   263,   454,     8,   454,     8,   454,
     264,    -1,    14,    -1,    15,   255,   454,   256,    -1,    17,
      -1,    29,   257,   452,   258,     7,    -1,   460,   233,   456,
       7,    -1,   460,   233,     6,     7,    -1,   460,   233,   231,
     257,   461,   258,     7,    -1,   460,   233,   462,     7,    -1,
     460,   233,    28,   257,   461,   258,     7,    -1,    11,   255,
       6,   256,     7,    -1,    11,   255,     6,   265,   457,   256,
       7,    -1,    12,   255,   460,   256,     7,    -1,    12,   255,
     460,   256,   257,   454,   258,     7,    -1,    -1,   452,   295,
       5,    -1,   452,   295,     5,   233,   454,    -1,   452,   295,
       5,   233,     6,    -1,    35,    -1,    36,    -1,    37,    -1,
      38,    -1,    39,    -1,    40,    -1,    41,    -1,    42,    -1,
      43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,
      48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,   460,    -1,   455,    -1,   255,   454,
     256,    -1,   247,   454,    -1,   252,   454,    -1,   454,   247,
     454,    -1,   454,   246,   454,    -1,   454,   248,   454,    -1,
     454,   249,   454,    -1,   454,   250,   454,    -1,   454,   254,
     454,    -1,   454,   240,   454,    -1,   454,   241,   454,    -1,
     454,   245,   454,    -1,   454,   244,   454,    -1,   454,   239,
     454,    -1,   454,   238,   454,    -1,   454,   236,   454,    -1,
     454,   235,   454,    -1,    35,   257,   454,   258,    -1,    36,
     257,   454,   258,    -1,    37,   257,   454,   258,    -1,    38,
     257,   454,   258,    -1,    39,   257,   454,   258,    -1,    40,
     257,   454,   258,    -1,    41,   257,   454,   258,    -1,    42,
     257,   454,   258,    -1,    43,   257,   454,   258,    -1,    44,
     257,   454,   258,    -1,    45,   257,   454,   265,   454,   258,
      -1,    46,   257,   454,   258,    -1,    47,   257,   454,   258,
      -1,    48,   257,   454,   258,    -1,    49,   257,   454,   258,
      -1,    50,   257,   454,   258,    -1,    51,   257,   454,   258,
      -1,    52,   257,   454,   265,   454,   258,    -1,    53,   257,
     454,   265,   454,   258,    -1,    54,   257,   454,   265,   454,
     258,    -1,   454,   260,    -1,     4,    -1,     3,    -1,    30,
      -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,   460,
      -1,    -1,   454,    -1,   458,    -1,   263,   457,   264,    -1,
     454,    -1,   458,    -1,   457,   265,   454,    -1,   457,   265,
     458,    -1,   454,     8,   454,    -1,   454,     8,   454,     8,
     454,    -1,     5,   263,   264,    -1,     5,   263,   457,   264,
      -1,    24,   257,     5,   258,    -1,    25,   257,     5,   265,
       5,   258,    -1,    26,   257,   454,   265,   454,   265,   454,
     258,    -1,    27,   257,   454,   265,   454,   265,   454,   258,
      -1,     5,   267,   263,   454,   264,    -1,   459,   267,   263,
     454,   264,    -1,     5,    -1,   459,    -1,     6,    -1,   460,
      -1,   462,    -1,    10,   255,   461,   256,    -1,    10,   255,
     461,   265,   457,   256,    -1,   232,    -1,     9,   257,   461,
     265,   461,   258,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   348,   348,   348,   421,   425,   424,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   443,   445,   447,
     452,   462,   464,   466,   468,   470,   472,   474,   476,   478,
     480,   482,   484,   486,   488,   490,   492,   494,   496,   498,
     500,   503,   503,   525,   528,   528,   534,   536,   542,   541,
     546,   548,   550,   553,   555,   561,   571,   560,   588,   593,
     587,   613,   624,   629,   666,   669,   682,   683,   700,   702,
     705,   756,   769,   793,   801,   813,   831,   854,   859,   864,
     876,   886,   895,   910,   924,   958,   978,   982,   992,  1009,
    1009,  1014,  1020,  1021,  1028,  1037,  1040,  1045,  1047,  1067,
    1111,  1113,  1117,  1120,  1140,  1146,  1153,  1153,  1163,  1167,
    1173,  1176,  1183,  1183,  1196,  1199,  1212,  1198,  1240,  1246,
    1252,  1258,  1264,  1270,  1276,  1282,  1288,  1294,  1300,  1306,
    1312,  1318,  1324,  1330,  1336,  1343,  1349,  1351,  1362,  1364,
    1370,  1444,  1478,  1487,  1500,  1499,  1514,  1513,  1528,  1527,
    1543,  1555,  1561,  1568,  1567,  1598,  1624,  1637,  1643,  1650,
    1656,  1663,  1670,  1682,  1683,  1684,  1689,  1690,  1696,  1698,
    1701,  1718,  1722,  1730,  1732,  1738,  1743,  1751,  1753,  1761,
    1764,  1770,  1773,  1776,  1815,  1820,  1828,  1834,  1840,  1847,
    1850,  1858,  1860,  1868,  1873,  1879,  1889,  1899,  1907,  1909,
    1917,  1926,  1932,  1980,  1983,  1986,  1989,  1992,  2004,  2008,
    2013,  2033,  2035,  2041,  2048,  2054,  2060,  2067,  2076,  2079,
    2102,  2116,  2136,  2146,  2153,  2159,  2169,  2194,  2219,  2224,
    2232,  2240,  2249,  2267,  2276,  2284,  2292,  2302,  2312,  2322,
    2343,  2348,  2353,  2374,  2376,  2383,  2389,  2395,  2401,  2408,
    2417,  2420,  2423,  2426,  2434,  2449,  2494,  2504,  2518,  2524,
    2527,  2532,  2537,  2551,  2571,  2576,  2581,  2605,  2662,  2668,
    2672,  2666,  2745,  2750,  2760,  2764,  2770,  2777,  2780,  2787,
    2803,  2810,  2812,  2831,  2843,  2851,  2855,  2871,  2876,  2887,
    2892,  2898,  2905,  2916,  2931,  2945,  3014,  3024,  3033,  3039,
    3072,  3075,  3078,  3125,  3129,  3134,  3154,  3156,  3163,  3168,
    3174,  3180,  3187,  3197,  3199,  3206,  3219,  3233,  3240,  3256,
    3262,  3265,  3269,  3272,  3282,  3287,  3286,  3327,  3326,  3391,
    3397,  3396,  3713,  3718,  3727,  3736,  3745,  3750,  3753,  3794,
    3808,  3832,  3837,  3846,  3849,  3852,  3855,  3867,  3872,  3877,
    3887,  3897,  3912,  3918,  3923,  3925,  3927,  3929,  3938,  3956,
    3963,  3971,  3962,  4095,  4119,  4128,  4137,  4142,  4151,  4163,
    4177,  4191,  4216,  4224,  4215,  4296,  4297,  4298,  4299,  4300,
    4301,  4302,  4303,  4309,  4330,  4355,  4359,  4364,  4383,  4385,
    4392,  4397,  4403,  4410,  4417,  4421,  4420,  4425,  4431,  4445,
    4460,  4471,  4484,  4490,  4493,  4502,  4505,  4510,  4515,  4520,
    4525,  4530,  4536,  4573,  4581,  4583,  4595,  4605,  4612,  4614,
    4627,  4634,  4647,  4669,  4676,  4682,  4688,  4694,  4702,  4724,
    4731,  4737,  4748,  4759,  4772,  4787,  4802,  4817,  4837,  4858,
    4870,  4890,  4907,  4926,  4947,  4961,  4975,  4982,  5016,  5029,
    5043,  5056,  5070,  5069,  5079,  5078,  5087,  5098,  5110,  5120,
    5128,  5141,  5154,  5168,  5178,  5188,  5202,  5216,  5234,  5253,
    5264,  5279,  5294,  5309,  5324,  5339,  5350,  5355,  5366,  5371,
    5375,  5378,  5388,  5404,  5413,  5419,  5423,  5427,  5431,  5436,
    5448,  5458,  5464,  5468,  5472,  5476,  5480,  5485,  5497,  5506,
    5511,  5515,  5519,  5523,  5527,  5539,  5551,  5556,  5560,  5564,
    5568,  5573,  5583,  5589,  5595,  5606,  5608,  5614,  5626,  5631,
    5641,  5670,  5673,  5676,  5684,  5702,  5708,  5713,  5732,  5734,
    5739,  5748,  5752,  5759,  5767,  5813,  5818,  5825,  5827,  5830,
    5832,  5839,  5844,  5849,  5852,  5859,  5863,  5869,  5884,  5893,
    5898,  5897,  5932,  5943,  5943,  5949,  5958,  5976,  5982,  5987,
    5990,  5992,  5997,  6004,  6008,  6015,  6027,  6038,  6043,  6050,
    6049,  6077,  6080,  6079,  6096,  6101,  6106,  6115,  6124,  6134,
    6133,  6144,  6153,  6165,  6189,  6190,  6191,  6192,  6198,  6199,
    6205,  6211,  6218,  6225,  6249,  6256,  6268,  6281,  6301,  6327,
    6360,  6382,  6412,  6416,  6423,  6430,  6437,  6441,  6445,  6449,
    6453,  6463,  6468,  6473,  6493,  6500,  6510,  6519,  6528,  6535,
    6543,  6547,  6556,  6560,  6564,  6572,  6578,  6582,  6590,  6597,
    6605,  6612,  6620,  6627,  6635,  6639,  6649,  6654,  6704,  6719,
    6735,  6754,  6774,  6830,  6834,  6847,  6849,  6864,  6870,  6876,
    6882,  6893,  6898,  6910,  6920,  6936,  6939,  6945,  6951,  6963,
    6964,  6965,  6966,  6967,  6968,  6969,  6970,  6971,  6972,  6973,
    6974,  6975,  6976,  6977,  6978,  6979,  6980,  6981,  6982,  6983,
    6987,  6988,  6989,  6990,  6991,  6992,  6993,  6994,  6995,  6996,
    6997,  6998,  6999,  7000,  7001,  7002,  7003,  7004,  7005,  7006,
    7007,  7008,  7009,  7010,  7011,  7012,  7013,  7014,  7015,  7016,
    7017,  7018,  7019,  7020,  7021,  7022,  7023,  7024,  7028,  7033,
    7034,  7035,  7036,  7037,  7038,  7039,  7040,  7059,  7061,  7067,
    7070,  7077,  7083,  7086,  7089,  7101,  7107,  7118,  7134,  7156,
    7171,  7209,  7217,  7229,  7237,  7248,  7251,  7258,  7261,  7276,
    7281,  7286,  7305,  7315
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
  "tFourierTransform", "tFourierTransformJ", "tLanczos", "tEigenSolve", 
  "tEigenSolveJac", "tPerturbation", "tUpdate", "tUpdateConstraint", 
  "tBreak", "tEvaluate", "tTimeLoopTheta", "tTime0", "tTimeMax", "tTheta", 
  "tTimeLoopNewmark", "tBeta", "tGamma", "tIterativeLoop", 
  "tNbrMaxIteration", "tRelaxationFactor", "tIterativeTimeReduction", 
  "tDivisionCoefficient", "tChangeOfState", "tChangeOfCoordinates", 
  "tChangeOfCoordinates2", "tSystemCommand", "tGenerateFMMGroups", 
  "tGenerateOnly", "tGenerateOnlyJac", "tSolveJac_AdaptRelax", 
  "tSaveSolutionExtendedMH", "tSaveSolutionMHtoTime", 
  "tInit_MovingBand2D", "tMesh_MovingBand2D", "tGenerate_MH_Moving", 
  "tGenerate_MH_Moving_Separate", "tAdd_MH_Moving", "tGenerateGroup", 
  "tGenerateJacGroup", "tSaveMesh", "tDeformeMesh", "tDummyFrequency", 
  "tPostProcessing", "tNameOfSystem", "tPostOperation", 
  "tNameOfPostProcessing", "tUsingPost", "tAppend", "tPlot", "tPrint", 
  "tPrintGroup", "tEcho", "tWrite", "tAdapt", "tOnGlobal", "tOnRegion", 
  "tOnElementsOf", "tOnGrid", "tOnSection", "tOnPoint", "tOnLine", 
  "tOnPlane", "tOnBox", "tWithArgument", "tFile", "tDepth", "tDimension", 
  "tTimeStep", "tHarmonicToTime", "tFormat", "tHeader", "tFooter", 
  "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", "tNoNewLine", 
  "tDecomposeInSimplex", "tChangeOfValues", "tTimeLegend", 
  "tFrequencyLegend", "tEigenvalueLegend", "tEvaluationPoints", "tStore", 
  "tLastTimeStepOnly", "tStr", "tDate", "tDEF", "'?'", "tOR", "tAND", 
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
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,    63,   489,   490,   491,   492,   493,
      60,    62,   494,   495,   496,   497,    43,    45,    42,    47,
      37,   498,    33,   499,    94,    40,    41,    91,    93,    46,
      35,    36,   500,   123,   125,    44,    64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   268,   270,   269,   271,   272,   271,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   275,   274,   276,   277,   276,   278,   278,   279,   278,
     278,   278,   278,   278,   278,   281,   282,   280,   284,   285,
     283,   283,   286,   286,   287,   287,   288,   288,   289,   289,
     289,   290,   291,   291,   292,   292,   292,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   294,   294,   294,   295,
     295,   296,   297,   297,   298,   299,   299,   300,   300,   300,
     300,   300,   301,   301,   302,   302,   303,   302,   304,   304,
     305,   305,   307,   306,   308,   309,   310,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   311,   311,
     311,   311,   311,   311,   312,   311,   313,   311,   314,   311,
     311,   311,   311,   315,   311,   311,   311,   311,   311,   311,
     311,   311,   311,   316,   316,   316,   317,   317,   318,   318,
     318,   319,   319,   320,   320,   321,   321,   322,   322,   323,
     323,   324,   324,   324,   325,   325,   326,   326,   327,   327,
     327,   328,   328,   329,   329,   330,   330,   330,   331,   331,
     332,   332,   333,   333,   333,   333,   333,   333,   334,   334,
     335,   335,   335,   336,   336,   337,   337,   337,   337,   337,
     338,   338,   338,   339,   339,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     341,   341,   342,   342,   342,   343,   343,   344,   344,   344,
     344,   344,   344,   344,   345,   345,   345,   346,   346,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   348,   349,
     350,   348,   351,   351,   352,   352,   353,   353,   353,   354,
     354,   355,   355,   356,   356,   357,   357,   358,   358,   359,
     359,   360,   360,   360,   361,   361,   361,   362,   362,   363,
     363,   363,   363,   364,   364,   365,   365,   365,   366,   366,
     367,   367,   367,   367,   367,   368,   368,   368,   369,   369,
     370,   370,   370,   370,   370,   371,   370,   372,   370,   370,
     373,   370,   370,   370,   370,   370,   370,   374,   374,   375,
     375,   375,   375,   376,   376,   376,   376,   377,   377,   378,
     378,   378,   379,   379,   380,   380,   380,   380,   381,   381,
     383,   384,   382,   382,   382,   382,   382,   382,   382,   385,
     385,   386,   387,   388,   386,   389,   389,   389,   389,   389,
     389,   389,   389,   390,   390,   391,   391,   392,   392,   392,
     393,   393,   394,   394,   394,   395,   394,   394,   396,   396,
     396,   397,   397,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   399,   399,   400,   400,   401,   401,   402,   402,
     403,   403,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   405,   404,   406,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   407,   407,   408,   408,
     409,   409,   409,   410,   410,   411,   411,   411,   411,   411,
     412,   412,   413,   413,   413,   413,   413,   413,   414,   414,
     415,   415,   415,   415,   415,   416,   416,   417,   417,   417,
     417,   417,   417,   417,   417,   418,   418,   419,   419,   420,
     420,   420,   420,   420,   420,   421,   421,   422,   422,   422,
     423,   423,   424,   424,   424,   424,   424,   425,   425,   425,
     425,   426,   426,   427,   427,   428,   428,   428,   429,   429,
     431,   430,   430,   432,   430,   430,   430,   433,   433,   434,
     434,   434,   435,   435,   436,   436,   436,   436,   436,   438,
     437,   439,   440,   439,   441,   441,   441,   441,   441,   442,
     441,   441,   443,   443,   444,   444,   444,   444,   445,   445,
     446,   446,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   447,   447,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   449,   449,   450,   450,
     450,   450,   450,   450,   450,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   452,   452,   452,   452,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   455,
     455,   455,   455,   455,   455,   455,   455,   456,   456,   456,
     456,   457,   457,   457,   457,   458,   458,   458,   458,   458,
     458,   458,   458,   459,   459,   460,   460,   461,   461,   461,
     461,   461,   461,   462
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
       3,     5,     5,     7,     1,     3,     0,     3,     6,     0,
       1,     4,     0,     2,     3,     0,     2,     5,     6,     7,
       1,     1,     0,     3,     4,     4,     0,     2,     0,     3,
       1,     3,     0,     2,     1,     0,     0,     7,     3,     3,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     3,     1,
       3,     2,     1,     2,     0,     5,     0,     7,     0,    11,
       9,     4,     4,     0,     7,     6,     2,     2,     2,     2,
       3,     2,     3,     3,     2,     3,     1,     3,     0,     3,
       6,     0,     4,     0,     2,     3,     4,     0,     4,     0,
       2,     3,     3,     4,     0,     4,     0,     2,     3,     3,
       4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
       0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
       3,     1,     1,     0,     2,     3,     4,     3,     4,     5,
       0,     4,     2,     0,     2,     3,     3,     3,     3,     3,
       3,     7,     3,     3,     3,     3,     3,     7,     7,     7,
       0,     2,     3,     1,     1,     0,     2,     3,     4,     3,
       4,     4,     4,     4,     0,     4,     2,     0,     2,     3,
       3,     4,     4,     7,     3,     3,     3,     3,     0,     0,
       0,    18,     0,     4,     0,     2,     3,     3,     3,     1,
       3,     0,     3,     1,     3,     0,     3,     0,     4,     0,
       2,     3,     3,     3,     0,     4,     2,     0,     2,     3,
       3,     3,     4,     0,     2,     3,     1,     1,     0,     2,
       3,     4,     3,     4,     4,     0,     4,     2,     0,     2,
       3,     3,     3,     3,     3,     0,     5,     0,     7,     3,
       0,     5,     3,     3,     3,     3,     3,     0,     3,     0,
       2,     2,     2,     4,     4,     4,     4,     0,     2,     3,
       3,     3,     0,     2,     3,     3,     3,     3,     0,     2,
       0,     0,     9,     3,     3,     3,     2,     3,     5,     0,
       2,     3,     0,     0,     9,     0,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     0,     2,     3,     1,     1,
       0,     2,     3,     4,     4,     0,     5,     1,     0,     4,
       2,     0,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     3,     0,     3,     1,     3,     0,     3,
       0,     2,     3,     3,     4,     4,     4,     4,     5,     5,
       2,     7,    11,     7,    13,    11,     9,     7,     7,     7,
       9,     9,     9,    11,    11,    11,     5,    17,    13,    15,
      11,    13,     0,     7,     0,     7,     7,    11,     5,     5,
       9,     9,     9,     5,     5,    11,     9,    14,    14,     7,
      12,    10,     7,     7,     7,     1,     1,     1,     0,     2,
       3,     3,     2,     0,     2,     3,     3,     3,     3,     4,
       0,     2,     3,     3,     3,     3,     3,     4,     0,     2,
       3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
       3,     3,     4,     4,     4,     0,     4,     0,     2,     3,
       3,     3,     3,     3,     3,     0,     2,     3,     1,     1,
       0,     2,     3,     4,     4,     3,     4,     0,     4,     2,
       2,     0,     2,     3,     4,     0,     5,     5,     0,     2,
       0,     6,     3,     0,     4,     3,     3,     0,     2,     3,
       1,     1,     0,     2,     3,     3,     3,     3,     4,     0,
       8,     0,     0,     3,     7,     7,     8,    11,     6,     0,
      10,     1,     3,     6,     1,     1,     1,     1,     0,     3,
       1,     2,     2,    12,     2,    15,     4,    12,    17,    22,
      12,     0,     2,     3,     4,     4,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     2,     2,     3,     9,     3,     2,     9,     2,
       9,     2,     9,     5,     3,     2,     0,     2,     6,     8,
       8,    10,     1,     4,     1,     5,     4,     4,     7,     4,
       7,     5,     7,     5,     8,     0,     3,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
       4,     4,     4,     4,     4,     6,     6,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       3,     1,     1,     3,     3,     3,     5,     3,     4,     4,
       6,     8,     8,     5,     5,     1,     1,     1,     1,     1,
       4,     6,     1,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     4,     1,     5,    41,   745,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    20,     0,    17,    18,   746,
       0,     0,     0,     0,     0,    21,     0,     0,     0,     0,
       0,    28,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   747,     0,     0,   752,   748,    19,
     749,   655,    43,   208,   171,   184,   240,    95,   303,   385,
     525,   557,     0,     0,   642,     0,   644,     0,     0,     0,
       0,    42,   581,     0,   727,     0,     0,     0,    27,    26,
      25,    23,    24,    22,    40,    30,    32,    33,    34,    35,
      31,    36,    37,    38,    39,     0,     0,    89,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   720,   719,   745,
       0,     0,     0,     0,     0,     0,   721,   722,   723,   724,
     725,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   728,   680,     0,   729,
     726,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     7,     0,   213,     9,   209,   212,   211,   173,    10,
     186,    11,   245,    12,   241,   244,   243,   745,     0,     8,
      96,   101,   100,   308,    13,   304,   307,   306,   390,    14,
     386,   389,   388,   530,    15,   526,   529,   528,   562,    16,
     558,   561,   560,   569,     0,     0,     0,     0,   588,     0,
       0,   745,    64,     0,    62,   579,     0,    92,   601,     0,
       0,   647,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   682,   683,
       0,   731,     0,   732,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   718,
     646,   649,   743,   651,     0,   653,     0,     0,   750,     0,
     645,   656,   745,     0,    45,    51,    54,    53,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,   643,   590,     0,     0,     0,     0,     0,     0,
       0,     0,   601,     0,     0,   106,   601,    77,   745,     0,
      74,     0,    61,    72,    84,     0,    58,     0,    63,     0,
     744,   737,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   681,
     730,     0,   735,   697,   696,   695,   694,   690,   691,   693,
     692,   685,   684,   686,   687,   688,   689,     0,     0,     0,
       0,     0,     0,     0,     0,    86,   727,     0,     0,     0,
       0,     0,   210,   214,     0,     0,   172,   174,     0,   106,
       0,   185,   187,     0,     0,     0,     0,     0,     0,   242,
     246,     0,     0,    89,     0,     0,     0,     0,   305,   309,
       0,     0,   395,   387,   391,   397,     0,     0,     0,     0,
     527,   531,     0,     0,     0,     0,     0,   559,   563,   571,
       0,     0,   591,   592,   106,   594,     0,     0,     0,     0,
       0,     0,     0,   586,   587,   584,   585,   582,     0,     0,
       0,     0,   601,   112,     0,     0,     0,     0,    89,     0,
       0,     0,    93,     0,     0,   602,   738,   739,     0,     0,
       0,     0,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,     0,   709,   710,   711,   712,   713,   714,     0,
       0,     0,     0,   733,   734,     0,   652,     0,   753,   751,
     658,   657,     0,     0,    48,     0,    89,   745,     0,     0,
       0,     0,   220,     0,     0,   177,     0,   191,     0,     0,
     294,     0,   745,     0,   254,   272,   287,   106,     0,     0,
       0,     0,   745,     0,   315,   339,   745,     0,   398,     0,
     745,     0,   537,    92,     0,     0,   571,     0,     0,     0,
     572,     0,     0,   638,     0,     0,     0,     0,     0,     0,
       0,     0,   589,   588,     0,     0,     0,     0,   107,     0,
       0,    80,    85,    78,    73,     0,    79,     0,    67,    59,
      66,   578,   727,   727,     0,     0,     0,     0,     0,   727,
       0,   636,   636,   636,   607,   608,     0,     0,     0,   622,
     623,   108,   627,   629,   631,     0,     0,   635,     0,     0,
       0,   650,     0,     0,     0,     0,   648,   736,   654,     0,
      94,     0,    65,     0,     0,     0,    46,     0,     0,   220,
       0,   217,   215,     0,     0,     0,   175,     0,   189,   188,
       0,   249,     0,   247,     0,     0,     0,     0,   106,    97,
     103,   312,     0,   310,     0,     0,     0,   392,     0,   420,
       0,   532,     0,     0,   535,   564,   572,   565,   567,   566,
     570,     0,     0,     0,     0,   106,     0,   596,     0,     0,
       0,   574,     0,     0,     0,     0,     0,   745,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
     671,   672,   673,   674,   675,   676,   677,   678,     0,   153,
       0,     0,     0,     0,   144,   146,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,   142,     0,   139,   726,
     575,     0,     0,     0,    75,   601,    89,   619,   624,   106,
     616,     0,     0,   603,   606,   614,   615,   609,   610,   613,
     611,   612,   618,   617,     0,   620,   106,   626,     0,     0,
       0,     0,   634,   740,     0,     0,   708,   715,   716,   717,
      91,     0,    47,    50,    87,    52,     0,     0,   223,   218,
     222,   216,   179,   176,   193,   190,   297,   253,   296,   248,
     257,   250,   256,   274,   251,   289,   252,    98,     0,   311,
     318,   313,   317,     0,     0,     0,     0,   314,   340,   342,
     341,   393,   401,   394,   400,     0,   533,   541,   536,   540,
     539,   534,   568,   573,     0,   640,   639,     0,     0,     0,
       0,     0,     0,   583,   104,   105,   601,   576,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   136,   135,
     137,     0,   161,   159,   156,   158,   157,   745,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   143,
     168,    82,    81,    76,     0,     0,     0,     0,   604,   605,
     637,     0,   110,     0,     0,     0,     0,     0,     0,     0,
      49,     0,    55,   219,     0,     0,     0,     0,     0,     0,
       0,    99,     0,   358,   358,   369,   347,     0,     0,     0,
     106,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   452,   454,   396,   421,   475,     0,
       0,     0,   106,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,   112,   112,     0,   138,     0,   384,
       0,   134,   133,   132,   131,   130,   126,   127,   129,   128,
     122,   123,   118,   121,   124,   119,   125,   160,   162,   164,
       0,   166,     0,     0,   140,     0,     0,    60,    71,     0,
       0,   106,   621,   109,   106,     0,     0,     0,   633,   741,
     742,     0,     0,     0,     0,     0,     0,   106,   106,   106,
     106,     0,     0,     0,   106,   221,   224,     0,     0,   178,
     180,     0,     0,     0,   192,   194,     0,     0,     0,     0,
     295,   298,     0,     0,     0,     0,   108,   108,     0,     0,
     255,   258,     0,     0,     0,   273,   275,     0,     0,     0,
     288,   290,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   727,   330,   316,   319,   375,   375,   375,     0,     0,
       0,     0,     0,   727,     0,     0,     0,   399,   402,   411,
       0,     0,   106,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   430,   106,     0,   483,     0,   490,
       0,   498,   505,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   538,   542,   641,     0,     0,
       0,     0,     0,     0,     0,   151,     0,   152,     0,   148,
       0,     0,     0,   112,   383,     0,   163,   165,     0,     0,
       0,    83,   580,    92,    69,     0,   111,     0,     0,     0,
      88,     0,     0,     0,     0,     0,   106,     0,   106,     0,
       0,     0,     0,     0,     0,   106,     0,     0,     0,   168,
     198,     0,     0,     0,     0,     0,    92,     0,     0,   268,
       0,     0,     0,     0,     0,     0,   283,   285,     0,   279,
     281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   745,   325,     0,     0,     0,     0,   112,     0,
       0,     0,     0,   376,   377,   378,   379,   380,   381,   382,
       0,     0,   343,   359,     0,   344,     0,   345,   370,     0,
       0,     0,   352,   346,   348,     0,     0,   414,     0,    92,
       0,     0,     0,   418,     0,   416,     0,     0,   422,     0,
       0,   423,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,   108,   545,
       0,     0,     0,     0,     0,     0,     0,   577,     0,     0,
     112,     0,   145,     0,     0,   116,   167,     0,   169,    70,
     106,     0,     0,     0,     0,   226,   227,   232,   233,     0,
     236,     0,   235,   229,   228,    89,   230,   225,     0,   234,
     182,   181,     0,     0,   195,   196,   299,   300,   301,     0,
     259,   260,     0,     0,     0,    89,   264,   265,   266,   267,
     276,    89,   278,    89,   277,   292,   291,   293,   335,   333,
     334,   323,   321,   322,   320,     0,   337,   329,   336,   332,
     324,     0,     0,     0,     0,     0,     0,   366,   360,     0,
     372,     0,     0,     0,   404,   403,    89,   405,   412,   406,
     409,   410,    89,   407,   408,     0,     0,     0,   106,     0,
       0,     0,     0,     0,     0,   106,     0,     0,     0,     0,
     106,     0,     0,   106,   424,   484,     0,     0,   106,     0,
       0,     0,     0,   425,   491,     0,     0,     0,     0,     0,
     106,   426,   499,     0,     0,     0,     0,     0,     0,     0,
       0,   427,   506,   106,     0,   106,   727,   727,   727,     0,
     727,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   476,   478,   477,   478,     0,   543,     0,   727,     0,
       0,     0,     0,     0,   120,     0,     0,     0,   155,     0,
       0,     0,     0,     0,     0,    56,   106,   106,     0,   106,
     183,   200,   197,   302,   261,     0,   262,     0,   284,     0,
     280,     0,   327,     0,     0,     0,   364,   365,   367,     0,
     363,   112,   371,   112,   349,   350,     0,     0,     0,     0,
     351,   353,   413,     0,   417,     0,   428,   420,   429,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   446,     0,
     420,     0,     0,     0,     0,     0,   420,     0,     0,     0,
       0,     0,     0,     0,     0,   420,     0,     0,     0,     0,
       0,   420,   420,     0,     0,   515,     0,   459,     0,     0,
       0,     0,     0,     0,   463,   464,     0,     0,     0,     0,
       0,     0,     0,   458,     0,     0,     0,     0,   544,     0,
       0,     0,     0,     0,     0,   154,     0,     0,   147,   117,
       0,   625,   628,   630,   632,     0,     0,     0,     0,     0,
       0,     0,     0,   286,   282,   337,     0,   326,   331,     0,
     361,   373,     0,     0,     0,     0,   415,   419,     0,     0,
     727,     0,   727,     0,     0,     0,     0,     0,   106,     0,
     487,   485,   486,   488,   106,     0,   494,   492,   493,   495,
     496,   106,   503,   501,     0,   500,   502,   510,   509,   511,
       0,     0,   507,   508,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   727,   479,     0,   548,   548,     0,   727,     0,
       0,     0,     0,     0,     0,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   199,   201,     0,
       0,     0,   338,   368,     0,     0,   354,   355,   356,   357,
     431,   433,     0,     0,     0,     0,     0,     0,   439,     0,
       0,   489,     0,   497,     0,   504,   513,   514,   517,   512,
     456,     0,     0,   437,   438,     0,     0,     0,     0,     0,
     469,   473,   474,     0,   472,     0,   453,     0,   727,   482,
     455,   375,   375,   600,     0,   593,   597,     0,     0,     0,
     150,     0,   239,   238,   231,   237,     0,     0,     0,     0,
       0,     0,     0,   263,   328,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   106,     0,     0,     0,     0,
     106,     0,   106,     0,     0,     0,     0,     0,     0,   106,
       0,   480,   481,     0,     0,     0,   553,   547,     0,   549,
     546,   727,     0,     0,     0,     0,   202,   203,   204,   205,
     206,   207,     0,     0,     0,   420,   441,   442,     0,     0,
       0,     0,   440,     0,     0,   420,     0,     0,     0,     0,
     106,     0,     0,   516,   518,     0,   436,     0,   460,   461,
     462,     0,     0,   466,     0,     0,     0,     0,     0,     0,
       0,   550,     0,     0,     0,   149,     0,     0,     0,     0,
       0,     0,     0,     0,   727,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,     0,     0,
       0,   471,     0,   555,   556,   552,     0,   112,   595,     0,
       0,     0,   269,   362,   374,   432,   443,   444,   445,     0,
     420,     0,   450,   420,   524,   519,   522,   523,   520,   521,
     457,   435,     0,   420,   420,   465,     0,   554,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     470,     0,   598,     0,    57,     0,     0,   448,   420,   451,
     434,     0,     0,   551,     0,     0,     0,     0,   467,   468,
       0,   270,     0,   449,     0,     0,     0,     0,     0,   447,
     599,    92,     0,     0,   271
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    26,   108,   182,
     304,   651,   305,  1052,  1665,   234,   491,   766,   235,   236,
     609,   915,  1040,   342,   488,   343,   536,   180,   403,   348,
     404,   113,   200,   433,   482,   483,  1521,   923,   598,   599,
     754,  1010,  1539,   755,   875,   876,  1360,   870,   909,  1032,
    1034,   110,   310,   417,   665,   935,  1070,   111,   311,   422,
     667,   936,  1075,  1393,  1670,  1768,   109,   185,   309,   413,
     660,   934,  1066,   112,   194,   312,   430,   674,   938,  1091,
    1404,  2002,  2035,   675,   939,  1096,  1251,  1413,  1248,  1411,
     676,   940,  1101,   670,   937,  1081,   114,   205,   315,   439,
     684,   942,  1114,  1426,  1675,  1268,  1564,   685,   838,  1118,
    1294,  1443,  1581,  1115,  1283,  1571,  1774,  1117,  1288,  1573,
    1775,  1284,   756,   115,   210,   316,   444,   569,   688,   947,
    1128,  1298,  1446,  1304,  1452,   845,   987,  1171,  1172,  1522,
    1644,  1743,  1323,  1475,  1325,  1484,  1327,  1492,  1328,  1502,
    1724,  1859,  1914,   116,   215,   317,   451,   692,   989,  1176,
    1525,  1821,  1879,  1967,  1930,   117,   220,   318,   458,    27,
     319,   580,   701,    81,   345,   227,   478,   334,   332,   349,
     495,   779,   988,    28,   107,   757,   271,   167,   168,   272,
     273,    29,   170,    59,    60
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1357
static const short yypact[] =
{
   -1357,    69, -1357, -1357,    83,  4351,  -147,  -124,  -110,   713,
     141,  2204,   132,   -74,   -42,   -39,   -34,    -6,    11,    13,
      21,    71,    81,    24, -1357, -1357,   545, -1357, -1357,   -81,
      27,   110,   193,   389,   296, -1357,   392,   430,   454,   480,
     486, -1357,   508, -1357,   520,   530,   534,   579,   589,   602,
     606,   618,   624,   629, -1357,   215,   235, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357,   366,    41, -1357,   402, -1357,   344,   406,   410,
     415, -1357, -1357,   434,  2769,  4127,  -166,   422, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357,   132,   132,   -97,   417,   138,
     238,   335,   225,   301,   326,   440,   462,   493,   389,   563,
    4127,  4127,   389,    92,    89,   678,  4127, -1357, -1357,   -63,
     694,   460,   467,   470,   478,   516, -1357, -1357, -1357, -1357,
   -1357,   519,   532,   568,   574,   596,   599,   603,   627,   664,
     672,   681,   683,   685,   689,   695,   719,   756,   768,   784,
     786,   787,  4127,  4127,  4127,  3600,   831, -1357,   730, -1357,
   -1357,   758,  2817,   773,  3600,    50,   572,   -10,   795, -1357,
     789, -1357,  1429, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357,  -151,   790, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357,   741,  3033,  4150,  1555,   796,   781,
    1555,  -142, -1357,    22, -1357, -1357,   797,   792, -1357,  5069,
    1367, -1357,  1051,  1053,  4127,  4127,   132,  4127,  4127,  4127,
    4127,  4127,  4127,  4127,  4127,  4127,  4127,  4127,  4127,  4127,
    4127,  4127,  4127,  4127,  4127,  4127,  4127,   132,  -130,  -130,
    5474,   831,   391, -1357,  4127,  4127,  4127,  4127,  4127,  4127,
    4127,  4127,  4127,  4127,  4127,  4127,  4127,  4127,  4127, -1357,
   -1357, -1357, -1357, -1357,    -9, -1357,  4127,   132, -1357,  3600,
   -1357,   826,    79,   803, -1357, -1357, -1357, -1357,   299,   333,
       7,   352,   593,    87, -1357,   236,   157,   483,  1088,   798,
    4127,  4127, -1357, -1357,    89,    89,    19,   800,   801,   802,
     805,   810, -1357,    89,   550,    33, -1357,  1074,   102,  4127,
   -1357,  3600, -1357, -1357, -1357,   823, -1357,   825, -1357,   -64,
   -1357, -1357,   395,   832,   827,  2743,  3624,   836,  5497,  5523,
    5549,  5575,  5601,  5627,  5653,  5679,  5705,  5731,  4225,  5757,
    5783,  5809,  5835,  5861,  5887,  4287,  4310,  4333,   845, -1357,
   -1357,  3600,  3947,  6553,  1546,  1321,  1321,   850,   850,   850,
     850,   580,   580,  -130,  -130,  -130,  -130,  1104,  5913,   855,
      37,  3893,  2371,   885,   891, -1357,  2717,   895,  4127,    26,
    1124,   389, -1357, -1357,   876,  1135, -1357, -1357,   879,    63,
    1138, -1357, -1357,   881,  1140,  1141,   884,   901,   903, -1357,
   -1357,   941,   917,     5,  1180,  1182,   925,   926, -1357, -1357,
    1185,   933, -1357, -1357, -1357, -1357,  1190,   935,   389,   389,
   -1357, -1357,   389,   937,   389,   132,  1197, -1357, -1357, -1357,
    3984,  2790,   995, -1357,    63, -1357,   945,  3600,   954,   957,
     958,    10,   946, -1357, -1357, -1357, -1357, -1357,  1217,   967,
     972,   978, -1357, -1357,   109,  4127,   959,  5939,   401,   426,
    1106,    17, -1357,  1230,  4291, -1357, -1357, -1357,  1234,  4127,
    4127,  1233, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357,  4127, -1357, -1357, -1357, -1357, -1357, -1357,  4127,
    4127,  4127,  1236,   831, -1357,  4127, -1357,  1237, -1357, -1357,
   -1357,  6505,  4127,  5096, -1357,    91,   198,  -134,  1238,    91,
    5962,   984, -1357,  1241,    48, -1357,  1249, -1357,  1259,  1265,
   -1357,  1266,   128,  1269, -1357, -1357, -1357,    63,  1008,  1270,
    1260,  1272,   128,  1275, -1357, -1357,   128,  1276, -1357,  1021,
     128,  1278, -1357,   792,  1289,  1291, -1357,  1292,  1294,  1296,
    1040,  4127,  4127, -1357,  1300,  1041,  3600,   431,  3600,  3600,
    3600,  1308, -1357,   796,  4127,  1315,   132,   206, -1357,  2050,
    1314,  4093, -1357,  1320, -1357,    39, -1357,    89, -1357, -1357,
   -1357, -1357,  2821,  2821,  1059,  1324,   130,  4127,  4127,  2821,
    4127,  1325, -1357, -1357, -1357, -1357,  4127,  1326,  1552, -1357,
   -1357,  1070,  1073,  1075,  1082,  1092,  1334, -1357,  1105,  4356,
    4379, -1357,  5988,  6014,  6040,  6066, -1357,  6505, -1357,  5123,
   -1357,    91, -1357,  1351,  1357,  1360, -1357,  1359,  1134, -1357,
     383, -1357, -1357,  1108,  1366,   442, -1357,   459, -1357, -1357,
     411, -1357,  1369, -1357,   445,   489,   499,  1370,    63, -1357,
   -1357, -1357,  1371, -1357,   511,    62,  1372, -1357,   529, -1357,
    1380, -1357,   506,  1382, -1357, -1357,  1110, -1357, -1357, -1357,
   -1357,   545,   328,  6092,  1132,    63,   507, -1357,   514,   521,
     523, -1357,  1131,  6115,  1164,  1168,  1421,   145, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,  1172, -1357,
    1173,  1175,  1176,  1179, -1357, -1357,  1432,  2050,  2050,  2050,
    2050,  1435,    55,  1434,  6603,   176,  1191,  1191, -1357,  1192,
   -1357,  4127,  4127,    44, -1357, -1357,   234, -1357, -1357,    63,
   -1357,   132,   132, -1357,  6505,  6505, -1357,  6505, -1357,  1441,
    1441,  1441,  6505, -1357,  3600,  6505,    63, -1357,  4127,  4127,
    4127,  3600, -1357, -1357,  4127,  4127, -1357, -1357, -1357, -1357,
   -1357,  1444, -1357, -1357,  1189, -1357,  1394,   537, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,  1450, -1357,
   -1357, -1357, -1357,  1199,  1200,  1201,  1203, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357,  2366, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357,  4127, -1357, -1357,  4127,  1204,  1207,
    1208,  1213,  1215, -1357, -1357, -1357, -1357, -1357, -1357,  1216,
    1223,  1216,  2050,  1476,  1477,  1227,  1228,  1245,  1235,  1235,
    1235,  6580, -1357, -1357, -1357, -1357, -1357,    14,  1224, -1357,
    2050,  2050,  2050,  2050,  2050,  2050,  2050,  2050,  2050,  2050,
    2050,  2050,  2050,  2050,  2050,  2050,  1488,  4127,  1897, -1357,
    1239,  6505,  4176, -1357,   273,  1240,    82,  1232, -1357, -1357,
   -1357,   548, -1357,   554,  4402,  4425,  4448,   571,  6141,  6167,
   -1357,  4127, -1357, -1357,   734,    65,   140,   495,  1111,   307,
     -16, -1357,  1391, -1357, -1357, -1357, -1357,   346,    43,   298,
     150,  1242,  1246,  1250,  1253,  1273,  1274,  1280,  1281,  1283,
    1486,  1284,   -79,   -61,   170,  1282,  1285,  1286,  1287,  1293,
    1295,  1297,  1302,  1316,  1288,  1290,  1319,  1322,  1353,  1354,
    1355,  1309,  1345,  1358, -1357, -1357, -1357, -1357, -1357,    -3,
    5150,  4471,    63,  3600,  3600,  3600,  3600,   275,  1362, -1357,
    1363,  3335,  1361,  1365, -1357, -1357,  1368, -1357,  1252, -1357,
    2050,  2330,  2590,  1599,  1599,  1599,  1100,  1100,  1100,  1100,
     465,   465,  1235,  1235,  1235,  1235,  1235, -1357, -1357, -1357,
    1374,  6603,   322,  3307, -1357,  4127,  1525, -1357, -1357,   389,
      22,    63, -1357, -1357,    63,  4127,  4127,  4127, -1357, -1357,
   -1357,  5177,  1376,    89,    89,    89,    89,   152,   153,    63,
      63,  1364,   389,  1531,   174, -1357, -1357,    90,  1541, -1357,
   -1357,  1375,  1543,  1544, -1357, -1357,  1611,    45,  1612,   389,
   -1357, -1357,  1619,  1621,  1623,  1378,  1070,  1070,    89,    89,
   -1357, -1357,  1630,    28,    38, -1357, -1357,  1634,   389,  1637,
   -1357, -1357,  1638,  1639,  1640,   361,   389,  1641,  1644,  1646,
      89,  2821, -1357, -1357, -1357,  1186,  2372,  1167,   159,  1645,
     389,    46,   132,  2821,   132,    54,   389, -1357, -1357, -1357,
     389,  1647,    63,    63,  1650,   389,   389,   389,   389,   389,
     389,   389,   389,   389, -1357,    63,  4127, -1357,  4127, -1357,
    4127, -1357, -1357,    89,   132,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,  1648,
     389,  1395,  1403,  1388,   389, -1357, -1357, -1357,  4127,  1397,
     577,   594,   598,   601,  1655, -1357,  1405, -1357,  2050, -1357,
    1408,  1422,  1414, -1357, -1357,  4014, -1357, -1357,  2050,  1424,
     610,  6505, -1357,   792, -1357,  1418, -1357,  4494,  4517,  4540,
   -1357,  1425,  1677,  1679,  1680,  1682,    63,  1684,    63,  1688,
    1693,  1694,   846,  1702,  1703,    63,  1704,  1707,  1709,  1239,
   -1357,  1710,  1712,  1713,  1714,  1715,   792,  1716,    64,  1461,
    1720,  1722,  1723,  1725,  1727,  1729, -1357, -1357,  1730, -1357,
   -1357,  1731,  1732,  1733,  1735,  1737,  1738,  1739,  1740,  1741,
    1742,  1743,   249, -1357,  1758,  1764,  1772,  1773, -1357,  1776,
    1778,  1784,  1540, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
      89,  1794, -1357, -1357,  1545, -1357,    89, -1357, -1357,  1548,
    1798,  1803, -1357, -1357, -1357,  1802,  1804, -1357,  1806,   792,
    1807,  1809,  1811, -1357,  1813, -1357,  1814,  1565, -1357,  1566,
    1567, -1357,  1562,  1563,  1568,  1569,  1576,  1586,  1590,  1592,
    1593,  1572,  4563,  1076,  4586,   966,  4609,   421,   588,  1594,
    1573,  1595,  1604,  1605,  1613,  1614,  1615,  1600,  1618,  1624,
    1625,  1626,  1628,  1629,  1631,  1632,  1574,    61,    61, -1357,
    1876,  5204,  1635,  1636,  1622,  1642,  1643, -1357,    89,  6532,
   -1357,  4127, -1357,  1885,  1651, -1357,  6603,    89, -1357, -1357,
      63,  4127,  4127,  4127,    22, -1357, -1357, -1357, -1357,  1649,
   -1357,  1652, -1357, -1357, -1357,  1653, -1357, -1357,  1654, -1357,
   -1357, -1357,  1888,   638, -1357, -1357, -1357, -1357, -1357,  1896,
   -1357, -1357,  1901,  1780,  1905,  1653, -1357, -1357, -1357, -1357,
   -1357,   648, -1357,   680, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357,  1656,  1658, -1357, -1357, -1357,
   -1357,  1663,  1906,  1909,  1915,  1921,  1919, -1357, -1357,  1949,
   -1357,  1954,  1959,   418, -1357, -1357,   684, -1357, -1357, -1357,
   -1357, -1357,   709, -1357, -1357,  1960,  1717,  1968,    63,   389,
     389,  4127,  4127,  4127,   389,    63,    89,  1969,  4127,  1718,
      63,  4127,  4127,    63, -1357, -1357,  4127,  1719,    63,  4127,
    4127,  4127,  4127, -1357, -1357,  4127,  4127,  4127,  1726,  4127,
      63, -1357, -1357,  4127,  4127,   389,  1728,  1734,  4127,  4127,
    1736, -1357, -1357,    63,  1970,    63,  2821,  2821,  2821,  4127,
    2821,  1972,  1976,   389,   389,  4127,   389,   389,    89,  1899,
    1978, -1357, -1357, -1357, -1357,    40, -1357,  1744,  2821,  3600,
    1745,  3600,  3600,  1746, -1357,  1747,  4632,  1748, -1357,  2050,
    1751,  1749,  5231,  5258,  5285, -1357,    63,    63,   846,    63,
   -1357, -1357, -1357, -1357, -1357,  1981, -1357,  1982, -1357,  1983,
   -1357,  1985, -1357,   389,  1986,  1988, -1357, -1357, -1357,  1753,
   -1357, -1357, -1357, -1357, -1357, -1357,  1216,  1216,  1216,    89,
   -1357, -1357, -1357,   389, -1357,   389, -1357, -1357, -1357,  1754,
    1760,  1787,  4655,  4678,  4701,  1800,  1756,  1801, -1357,  4724,
   -1357,  1991,   404,   670,  2009,  4747, -1357,  2011,   687,   932,
    1014,  1279,  4770,  1428,  1458, -1357,  1528,  2056,  1627,  1724,
    2061, -1357, -1357,  1878,  2102, -1357,   349, -1357,  1805,  1815,
    1816,  1810,  4793,  1847, -1357, -1357,  1850,  1855,  6193,  1818,
    1863,  1864,   714, -1357,   363,   364,  1808,  1867, -1357,  4127,
    1866,   732,  4127,   735,   742, -1357,  1875,  4127, -1357,  6603,
    1870, -1357, -1357, -1357, -1357,  1871,  1877,  1881,  1882,  1883,
     754,  2062,  1886, -1357, -1357,  1658,  1884, -1357, -1357,  2065,
   -1357, -1357,  2133,  2138,  2140,  2144, -1357, -1357,  2941,  2146,
    2821,  4127,  2821,  4127,  4127,   389,  2147,   389,    63,  2997,
   -1357, -1357, -1357, -1357,    63,  3065, -1357, -1357, -1357, -1357,
   -1357,    63, -1357, -1357,  3250, -1357, -1357, -1357, -1357, -1357,
    3304,  3358, -1357, -1357,   746,  2152,  4127,    63,  2154,  2155,
    4127,   132,   132,  4127,  4127,  2156,  2157,  2158,   132,  2159,
    1857,  2163,  1997, -1357,  2164, -1357, -1357,  5312,  2821,  1911,
    5339,  1912,  1910,  1917,  5366, -1357,  1923,  2174,  2177,  2182,
    2183,  2189,  4127,  4127,  4127,  4127,  4127, -1357, -1357,  2085,
    2190,  2194, -1357, -1357,  1937,  1938, -1357, -1357, -1357, -1357,
    2192, -1357,  1952,  6219,  1953,  4816,  4839,  1955, -1357,  1961,
    1957, -1357,  1958, -1357,   365, -1357, -1357, -1357, -1357, -1357,
   -1357,  4862,   368, -1357, -1357,  6245,  1966,  1967,  4885,  4908,
   -1357, -1357, -1357,   747, -1357,   132, -1357,   132,  2821, -1357,
   -1357,  1258,  1934, -1357,  1962, -1357, -1357,  1963,  3600,  4127,
   -1357,    22, -1357, -1357, -1357, -1357,  2210,  2354,  2419,  2445,
    2641,  2664,  2223, -1357, -1357, -1357,  1216,  1974,  2222,  2224,
    4127,  4127,  4127,  4127,  2225,    63,  4127,  1975,  4127,   600,
      63,  2226,    63,  2228,  2232,  2233,  4127,  4127,  2234,    63,
     765, -1357, -1357,  2237,  2240,  2241, -1357, -1357,  1973, -1357,
   -1357,  2821,  4127,   767,  5393,  1989, -1357, -1357, -1357, -1357,
   -1357, -1357,  1984,  1992,  1995, -1357, -1357, -1357,  6271,  6297,
    6323,  4931, -1357,  1999,  4954, -1357,  6349,  2250,  2253,  4127,
      63,  2254,    89, -1357, -1357,  2003, -1357,   376, -1357, -1357,
   -1357,  6375,  6401, -1357,  1998,  2256,  2260,  2258,  2262,  2263,
      89, -1357,  2007,  4977,  2010, -1357,  4127,  2266,  2268,  2269,
    3543,  2270,  2271,  2272,  2821,  2004,  4127,  3597,  2017,  2275,
    2277,  2690,  2279,  2281,  2282,  2284,  2285,    63,  2030,  2031,
    2288, -1357,  2034, -1357, -1357, -1357,  2293, -1357, -1357,  4127,
    2038,  6427, -1357, -1357, -1357, -1357, -1357, -1357, -1357,  2039,
   -1357,  6453, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357,  2048, -1357, -1357, -1357,  2300, -1357,  2051,  5420,
    4127,  2301,  2252,  4127,  3651,  2049,  3836,  2309,  3890,  3944,
   -1357,  2310, -1357,  5000, -1357,    89,  5023, -1357, -1357, -1357,
   -1357,  2311,  2312, -1357,  4127,  2313,  4127,  4129, -1357, -1357,
    5046, -1357,  6479, -1357,  4127,  2191,  2314,  5447,  2317, -1357,
   -1357,   792,  2319,  2064, -1357
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357,  -181, -1357, -1357,  -272,  1254,
   -1357, -1357,  1251,  -470, -1357,  -520, -1357,  -410,  -536,  -568,
   -1357, -1357, -1357, -1357,   778, -1357,  -621, -1357,  -990, -1357,
    -685, -1357, -1357, -1357, -1357, -1357, -1357, -1357,  1575, -1357,
    1101, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
    1674, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357,   659, -1357, -1357, -1357,
   -1357, -1357, -1357,  1400, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1111,  -705, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1356, -1357, -1357, -1357,   987,
     815, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357,   607, -1357, -1357, -1357, -1357, -1357, -1357, -1357, -1357,
   -1357,  1769, -1357,  1659, -1357,  2231, -1357,  1766,  2127,  -319,
   -1357,   416,    76,   -77, -1357, -1357,   706,  -515,  -491,  -172,
     -83, -1357,    -5,  -102,   -73
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -680
static const short yytable[] =
{
      30,   169,   294,   176,   177,   693,  1289,    58,   664,  1186,
     787,   171,   868,   471,  1191,  1192,   672,   484,    72,     6,
     337,   610,   338,   560,   231,   337,   682,   338,    87,     6,
     686,   541,   187,  1246,   690,   196,   202,   207,   212,   217,
     222,   432,   337,  1249,   338,  1646,   119,   337,     6,   338,
     652,     6,   462,   463,   465,   662,   479,   295,   883,     6,
     884,   472,   878,   879,   880,   881,     6,     6,   352,     3,
    1097,  1401,  1173,     7,     8,    73,    74,    75,   605,    76,
    1098,   608,  1099,    -3,   758,   764,   479,  1038,   232,   414,
     173,    13,   231,  1174,   231,   231,   652,     6,   229,   174,
      58,    58,    82,   415,    30,   307,   313,    30,    30,    30,
      30,    30,    30,   223,   232,   -65,    31,   228,   228,   237,
      31,   767,   768,   -65,   288,    31,   655,   400,   776,   240,
     289,    32,   480,    31,  1067,     6,    54,     6,    54,    55,
      56,    55,    56,     6,   357,    33,  1068,  1039,    41,     7,
       8,    73,    74,    75,  1227,    76,   232,  1647,   232,   232,
     232,   178,   480,   597,   998,   378,  1000,    13,   179,   489,
      73,    74,    75,   479,    76,   479,   479,   308,  1146,   833,
     834,   835,   836,    61,  1147,   186,    83,  1001,   195,   201,
     206,   211,   216,   221,   493,   399,  1148,   479,   885,    86,
     240,   494,  1149,  1364,    31,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,    62,  1071,  1031,    63,   538,  1072,  1073,   344,    64,
       6,  1688,   758,   758,   758,   758,     7,     8,    73,    74,
      75,    58,    76,   913,  1699,  1290,   298,   397,  1100,   480,
    1705,   480,   480,   440,    13,   299,   381,    65,   306,  1714,
      84,  1175,    58,   559,   481,  1720,  1721,   886,   591,  1291,
     179,   416,   339,   480,    66,   494,    67,   339,  1431,   233,
     340,    31,   464,   341,    68,   340,   763,    71,   341,   542,
     441,  1247,    58,   529,   339,   587,   120,   442,   524,   339,
    1130,  1250,   381,    88,  1648,   341,   197,   296,   237,  1297,
     341,   663,     7,     8,    73,    74,    75,  1303,    76,   237,
     237,   237,   434,   169,   786,  1195,   837,   663,   237,  1069,
      13,     6,   435,   171,    69,   765,   854,     7,     8,    73,
      74,    75,   402,    76,    70,   431,    31,   233,   436,   233,
     233,   233,   437,   578,   653,    13,   916,   758,   657,    73,
      74,    75,    57,    76,    57,   486,  1258,   600,   198,    31,
    1535,   771,   772,    85,   494,   758,   758,   758,   758,   758,
     758,   758,   758,   758,   758,   758,   758,   758,   758,   758,
     758,   663,   445,   758,     6,    31,    73,    74,    75,    89,
      76,   183,   184,  1092,  1074,  1093,   544,  1133,   753,  1216,
    1218,  1701,    31,  1094,   706,   409,   708,   709,   710,   410,
     553,   443,  1292,  1293,    73,    74,    75,  1150,    76,   411,
     563,  1225,  1119,  1151,   418,   567,   906,    90,   907,  1486,
     419,   571,  1120,   573,   574,     6,   914,   575,   420,   577,
      58,     7,     8,    73,    74,    75,   654,    76,    73,    74,
      75,    91,    76,   179,   716,  1241,  1242,     6,  1259,    13,
     801,   494,   105,     7,     8,    73,    74,    75,  1260,    76,
    1121,  1122,  1123,  1124,  1125,  1126,   344,    92,   192,   193,
     106,    13,   -68,    93,   715,   758,  1576,  1577,     6,   179,
     438,   188,   189,  1359,     7,     8,    73,    74,    75,  1487,
      76,     6,  1425,  1366,   773,    94,    31,     7,     8,    73,
      74,    75,    13,    76,    73,    74,    75,    95,    76,   169,
     169,  1036,   406,  1184,  1578,    13,   169,    96,   494,  1940,
     494,    97,    73,    74,    75,   407,    76,   997,  1579,  1947,
      73,    74,    75,   121,    76,  1132,   408,   118,    73,    74,
      75,  1488,    76,   275,   276,   199,   277,   278,   279,   280,
    1204,  1095,   281,   282,   283,   284,   285,   286,   287,   446,
    1197,  1680,   288,  1681,  1489,  1490,    98,  1198,   289,   203,
     204,    58,   855,  1076,   759,   447,    99,   412,   190,   191,
     344,   122,   237,  1077,  1078,  1079,  1493,  1725,   840,   100,
    1127,    58,   921,   101,  1726,   850,   421,   448,  1907,   927,
    1267,  1741,  1744,  1857,  2004,   102,  1861,  2006,  1742,  1742,
    1858,   103,  1301,  1862,  1956,  1369,   104,  2008,  2009,   275,
     276,  1957,   277,   278,   279,   280,   808,   809,   281,   282,
     283,   284,   285,   286,   287,   380,   381,   121,   288,   496,
     381,   423,  2027,   123,   289,   604,   179,   124,  1399,   918,
     919,   449,   125,   758,   816,   817,  1494,  1702,   175,   424,
      30,   181,  1580,   758,   238,  1491,  1908,    30,  1909,   425,
     426,   381,   606,   224,  1707,   707,   381,   126,   427,  1910,
     428,   241,  1402,   208,   209,   812,   813,  1385,   820,   821,
    1878,  1878,  1911,   901,   902,   903,   904,   242,    34,   905,
      35,  1495,   814,   815,   243,   213,   214,   244,  1496,  1497,
    1912,  1448,    36,    37,    38,   245,   810,   290,    77,    78,
      79,    80,   759,   759,   759,   759,   818,   450,   888,    39,
     822,  1498,   823,   824,  1499,  1500,   218,   219,   344,  1080,
     832,   839,   825,   826,   844,   291,    58,    58,   849,   847,
     848,   859,   381,   246,   830,   831,   247,    82,   860,   381,
     293,  1212,  1213,  1214,  1215,   861,   381,   862,   381,   248,
     166,   172,   842,   843,   301,  1228,   473,   474,   475,   476,
     808,   933,   300,  1053,  1054,  1055,  1056,  1057,  1058,  1059,
    1060,  1061,  1042,   381,  1062,   477,  1243,  1244,  1043,  1044,
    1063,  1180,  1181,  1182,  1183,   249,   225,   226,   285,   286,
     287,   250,   239,  1064,   288,  1048,   381,   297,  1266,   274,
     289,  1353,   381,  1761,  1762,  1763,  1764,  1765,  1766,   127,
     128,     6,  1501,   251,  1659,  1893,   252,   429,  1354,   381,
     253,  1200,  1355,   381,  1913,  1356,   381,   759,   268,   269,
     270,  1682,  1683,  1684,  1368,   381,   136,   137,   138,   139,
     140,  1329,  1008,   810,   254,   759,   759,   759,   759,   759,
     759,   759,   759,   759,   759,   759,   759,   759,   759,   759,
     759,  1551,  1552,   759,  1545,   275,   276,    40,   277,   278,
     279,   280,  1558,   179,   281,   282,   283,   284,   285,   286,
     287,   255,   275,   276,   288,   277,   278,   279,   280,   256,
     289,   281,   282,   283,   284,   285,   286,   287,   257,  1708,
     258,   288,   259,  1131,  1560,   179,   260,   289,  1582,   179,
     355,   356,   261,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,  1584,   179,  1548,   262,  1998,  1739,  1740,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,  1557,  1749,   381,  1065,  1751,
     381,  1559,   398,  1561,   320,   759,  1752,   381,  1436,  1798,
    1799,  1868,  1869,   263,  1439,  1629,  1630,  1631,  1767,  1633,
    1300,  1709,  1302,  1129,   758,   264,   460,   461,   169,  1925,
    1926,  1934,   381,  1668,  1203,   344,  1583,  1650,   780,   781,
     169,   265,  1585,   266,   267,   487,   335,   314,   237,   237,
     237,   237,  1330,   333,   346,   347,   353,  1223,   354,   401,
     405,   459,   237,   466,   467,   468,   275,   276,   469,   277,
     278,   279,   280,   470,  1236,   281,   282,   283,   284,   285,
     286,   287,   485,   237,   237,   288,  1533,   523,   490,   492,
     497,   289,   498,  1253,   501,  1540,   283,   284,   285,   286,
     287,  1261,  1263,   522,   288,   237,  1477,   531,   533,  1478,
     289,   526,   166,   528,   540,  1296,  1299,    58,   534,    58,
    1305,  1306,  1479,  1480,   535,  1307,  1481,  1482,   539,   543,
    1312,  1313,  1314,  1315,  1316,  1317,  1318,  1319,  1320,   545,
     546,  1894,   547,   549,   550,   551,   552,   554,   237,    58,
    1331,  1332,  1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,
    1341,  1342,  1343,  1344,   555,  1346,   556,   275,   276,  1350,
     277,   278,   279,   280,   557,   558,   281,   282,   283,   284,
     285,   286,   287,   759,   452,   561,   288,   562,   564,   565,
     566,   601,   289,   759,  1597,   570,   568,   548,   572,  1782,
     576,  1784,   579,   584,   592,   639,   640,  1082,   586,  1083,
    1084,  1085,  1086,  1087,  1088,  1089,  1469,   588,   642,  1470,
     589,   590,   593,   602,   594,   643,   644,   645,   453,   595,
    1483,   647,  1471,  1472,  1473,   596,   607,   611,   649,   638,
     641,   678,   585,   646,   648,   656,  1641,   659,   661,   275,
     276,  1819,   277,   278,   279,   280,   666,  1824,   281,   282,
     283,   284,   285,   286,   287,   680,   668,  1269,   288,  1270,
    1271,  1272,   669,   671,   289,   237,   673,   679,   454,   681,
     455,   237,   683,   687,   689,   691,  1710,   702,   703,  1273,
    1274,  1275,  1276,  1277,  1278,  1279,   694,  1286,   695,   697,
     713,   698,   456,   699,   700,   704,   705,  1685,  1273,  1274,
    1275,  1276,  1277,  1278,  1279,   711,  1280,  1281,   166,   166,
     714,   760,   769,   774,   775,   166,   777,  1872,   762,   770,
     778,   783,   782,   786,   785,   677,   788,   792,   789,  1873,
    1474,  1874,  1523,  1523,  1875,   790,   899,   900,   901,   902,
     903,   904,   457,   237,   905,   791,  1937,  1651,   802,  1653,
    1654,  1885,   237,   793,   803,   804,   805,   806,   532,   344,
     127,   128,   129,   811,   852,  1090,   819,   827,   829,   841,
    1273,  1274,  1275,  1276,  1277,  1278,  1279,   846,  1876,   851,
    1932,   131,   132,   133,   134,   857,   863,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   865,   169,   169,   169,   866,   169,   867,   869,
     871,  1287,   872,   873,   302,  1712,   874,   877,   882,   887,
       7,     8,    73,    74,    75,   169,    76,   920,   908,  -679,
    1282,   930,   931,  1979,  1590,  1591,   828,   941,    13,  1595,
     932,   237,   943,   944,   945,  1713,   946,   911,   912,   992,
     993,   994,  1102,  2042,  1103,  1104,   995,  1105,   996,   753,
     999,  1002,  1003,   858,  1004,  1005,  1006,  1106,  1009,   905,
    1620,  1027,   303,  1144,   924,   925,   926,  1041,  1037,  1135,
     928,   929,  1033,  1136,  1107,  1108,  1109,  1137,  1636,  1637,
    1138,  1639,  1640,   237,   275,   276,  1194,   277,   278,   279,
     280,  1110,  1877,   281,   282,   283,   284,   285,   286,   287,
    1139,  1140,  1202,   288,   759,  1715,  1224,  1141,  1142,   289,
    1143,  1145,  1153,  1154,  1155,  1152,  1229,   917,  1231,  1232,
    1156,  1161,  1157,  1162,  1158,   127,   128,     6,  1676,  1159,
     990,   279,   280,   991,   922,   281,   282,   283,   284,   285,
     286,   287,  1168,  1160,   237,   288,  1163,  1111,  1686,  1164,
    1687,   289,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   169,  1169,   169,
    1165,  1166,  1167,  1028,   162,  1170,  1233,  1038,  1189,   163,
    1185,  1187,   164,  1190,  1237,  1193,  1238,  1222,  1239,  1806,
    1807,   351,  1196,  1211,  1717,  1245,  1813,  1051,  1230,  1252,
    1954,  1240,  1254,  1255,  1256,  1257,  1262,  1264,  1112,  1265,
    1295,  1349,  1347,  1345,  1308,  1113,  1883,  1311,  1966,   169,
    1348,  1352,  1357,   275,   276,   169,   277,   278,   279,   280,
    1358,  1361,   281,   282,   283,   284,   285,   286,   287,  1363,
    1362,  1367,   288,  1370,  1375,  1374,  1376,  1377,   289,  1378,
    1787,  1380,  1789,   275,   276,  1382,   277,   278,   279,   280,
    1383,  1384,   281,   282,   283,   284,   285,   286,   287,  1386,
    1387,  1389,   288,  1870,  1390,  1871,  1391,  1394,   289,  1395,
    1396,  1397,  1398,  1400,  1403,  1405,    58,    58,  1134,  1406,
    1407,  1718,  1408,    58,  1409,   169,  1410,  1412,  1414,  1415,
    1416,  1201,  1417,  2025,  1418,  1419,  1420,  1421,  1422,  1423,
    1424,  1207,  1208,  1209,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   275,   276,  1427,   277,   278,   279,   280,
    1179,  1428,   281,   282,   283,   284,   285,   286,   287,  1429,
    1430,  1432,   288,  1433,   277,   278,   279,   280,   289,  1434,
     281,   282,   283,   284,   285,   286,   287,  1435,   169,   162,
     288,  1437,  1438,  1441,   163,  1440,   289,   164,  1442,  1444,
      58,  1445,    58,  1447,  1449,   784,  1450,   166,  1451,  1205,
    1453,  1454,  1206,  1455,  1456,  1457,   344,  1458,  1459,   166,
    1467,  1504,  1520,  1460,  1461,  1217,  1219,  1220,  1221,   895,
     896,  1462,  1226,   897,   898,   899,   900,   901,   902,   903,
     904,  1463,  1322,   905,  1324,  1464,  1326,  1465,  1466,  1503,
    1505,   169,   275,   276,  1511,   277,   278,   279,   280,  1506,
    1507,   281,   282,   283,   284,   285,   286,   287,  1508,  1509,
    1510,   288,  1512,  1526,  1351,  1722,  1530,   289,  1537,  1513,
    1514,  1515,  1555,  1516,  1517,  1550,  1518,  1519,  1528,  1529,
     127,   128,   717,  1553,  1642,  1531,  1532,   237,  1554,  1538,
    1309,  1310,  1556,  1566,  1546,  1563,  1567,  1547,   179,  1549,
    1562,  1565,  1568,  1321,  1569,   237,  1570,   136,   137,   138,
     139,   140,   718,   719,   720,   721,   722,   723,   724,   725,
     726,   727,   728,   729,   730,   731,   732,   733,   734,   735,
     736,   737,   738,   739,   740,   741,  1572,   742,   743,   275,
     276,  1574,   277,   278,   279,   280,  1575,  1586,   281,   282,
     283,   284,   285,   286,   287,  1588,  1598,  1627,   288,  1634,
    1587,  1600,  1606,  1635,   289,  1643,  1671,  1672,  1673,  1615,
    1674,  1621,  1815,  1677,  1379,  1678,  1381,  1622,  1700,  1625,
     127,   128,   129,  1388,  1655,  1656,  1658,  1649,  1652,  1660,
     237,  1679,  1689,  1661,  1696,  1873,  1703,  1874,  1706,   744,
    1875,   131,   132,   133,   134,  1690,   745,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,  1691,   127,   128,   717,  1273,  1274,  1275,  1276,
    1277,  1278,  1279,  1716,  1876,  1695,  1697,  1536,  1719,  1769,
    1727,  1745,  1773,  1728,  1729,  1730,  1736,  1542,  1543,  1544,
     136,   137,   138,   139,   140,   718,   719,   720,   721,   722,
     723,   724,   725,   726,   727,   728,   729,   730,   731,   732,
     733,   734,   735,   736,   737,   738,   739,   740,   741,  1723,
     742,   743,  1732,   275,   276,  1733,   277,   278,   279,   280,
    1734,  1737,   281,   282,   283,   284,   285,   286,   287,  1738,
    1746,  1748,   288,  1753,  1755,  1757,  1756,   746,   289,  1758,
    1776,  1760,  1772,   747,   748,  1777,  1759,  1778,  1541,   749,
    1770,  1779,   750,  1781,  1788,  1029,  1030,   751,   752,  1800,
     753,  1803,  1804,  1810,  1811,  1812,  1814,  1592,  1593,  1594,
    1816,  1820,   744,  1828,  1599,  1825,  1827,  1602,  1603,   745,
    1829,  1832,  1605,  1831,  1833,  1608,  1609,  1610,  1611,  1834,
    1835,  1612,  1613,  1614,  1836,  1616,  1842,  1843,  1880,  1618,
    1619,  1844,  1845,  1846,  1623,  1624,  1817,    42,  1847,  1818,
    1848,    43,   166,   166,   166,  1632,   166,  1886,  1850,  1854,
    1853,  1638,  1855,  1856,  1864,  1865,  1882,  1881,  1892,  1896,
    1931,  1897,  1902,  1916,   166,  1918,  1589,  1895,  1905,  1919,
    1920,  1923,  1927,  1596,   162,  1928,  1929,   663,  1601,   163,
    1938,  1604,   164,  1939,  1936,  1949,  1607,  1945,  1950,  1953,
     165,  1955,  1960,  1961,  1962,  1963,    44,  1980,  1617,  1964,
    1965,  1968,    45,  1972,  1970,  1973,  1974,  1976,  1977,  1978,
    1983,  1626,  1984,  1628,  1985,    46,  1987,    47,  1988,  1989,
     746,  1990,  1991,  1993,  1994,  1995,   747,   748,  1996,    48,
    1997,  2000,   749,    49,  2003,   750,  2007,  2010,  2014,  2011,
     751,   752,  2018,   753,  2015,    50,  2020,  2023,  2028,  2029,
    2031,  2039,  2041,  2038,  1666,  1667,  2043,  1669,  2044,  1235,
    1392,  1234,   910,   807,  1771,  1524,    51,   275,   276,  1645,
     277,   278,   279,   280,  1116,   696,   281,   282,   283,   284,
     285,   286,   287,  1822,   230,  1747,   288,   336,  1750,   712,
     853,  1887,   289,  1754,     0,     0,     0,     0,     0,     0,
       0,   948,     0,     0,   127,   128,     6,     0,     0,    73,
      74,   949,     0,    76,     0,     0,     0,     0,     0,     0,
       0,    52,     0,    53,     0,     0,   166,  1783,   166,  1785,
    1786,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,  1888,     0,     0,     0,
       0,     0,  1801,     0,     0,     0,  1805,     0,     0,  1808,
    1809,     0,     0,     0,     0,     0,     0,     0,   166,     0,
       0,     0,  1889,  1269,   166,  1270,  1271,  1272,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1837,  1838,
    1839,  1840,  1841,     0,     0,     0,  1790,     0,     0,     0,
       0,     0,  1792,     0,     0,     0,     0,     0,     0,  1794,
       0,     0,     0,     0,  1273,  1274,  1275,  1276,  1277,  1278,
    1279,     0,  1280,  1281,     0,  1802,     0,     0,   950,     0,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
     961,   962,     0,     0,   166,   963,     0,     0,   964,     0,
       0,   965,     0,     0,   966,  1884,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,   982,     0,     0,     0,   983,  1898,  1899,  1900,  1901,
     984,     0,  1904,   985,  1906,     0,   891,   892,   893,   894,
     895,   896,  1921,  1922,   897,   898,   899,   900,   901,   902,
     903,   904,     0,     0,   905,     0,     0,   166,  1933,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,  1951,     0,     0,   162,     0,
       0,     0,     0,   163,     0,     0,   164,     0,     0,     0,
     986,   532,     0,  1903,     0,     0,  1285,     0,  1915,     0,
    1917,     0,  1971,     0,     0,     0,     0,  1924,  1890,     0,
     166,     0,  1981,     0,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,  1891,     0,   288,     0,  1999,     0,     0,     0,   289,
     275,   276,     0,   277,   278,   279,   280,     0,  1952,   281,
     282,   283,   284,   285,   286,   287,     0,  1986,     0,   288,
       0,     0,     0,     0,     0,   289,  2013,     0,     0,  2016,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     127,   128,   537,   130,     0,     0,    55,     0,     0,     0,
    2030,     0,  2032,     0,     0,  1992,     0,     0,     0,     0,
    2037,   131,   132,   133,   134,   135,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   127,   128,   129,   130,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,   232,     0,     0,     0,
       0,     0,     0,   131,   132,   133,   134,   135,   582,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   127,   128,   129,   892,   893,   894,
     895,   896,     0,     0,   897,   898,   899,   900,   901,   902,
     903,   904,     0,     0,   905,   131,   132,   133,   134,     0,
       0,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   275,
     276,   289,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,   948,     0,   161,     0,
     289,     0,     0,     0,    73,    74,   949,     0,    76,     0,
       0,     0,     0,     0,   162,     0,     0,     0,     0,   163,
       0,     0,   164,     0,     0,     0,     0,   233,   275,   276,
     165,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
     161,     0,   948,   289,     0,     0,     0,     0,   499,     0,
      73,    74,   949,     0,    76,     0,   162,     0,     0,     0,
       0,   163,     0,     0,   164,   275,   276,     0,   277,   278,
     279,   280,   165,     0,   281,   282,   283,   284,   285,   286,
     287,   321,     0,     0,   288,     0,   583,     0,     0,     0,
     289,     0,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,   162,     0,
     948,   288,     0,   163,     0,     0,   164,   289,    73,    74,
     949,   292,    76,   950,   165,   951,   952,   953,   954,   955,
     956,   957,   958,   959,   960,   961,   962,     0,     0,     0,
     963,     0,     0,   964,     0,     0,   965,     0,     0,   966,
       0,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,     0,     0,     0,
     983,     0,     0,     0,     0,   984,     0,     0,   985,   950,
       0,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   962,     0,     0,     0,   963,     0,     0,   964,
       0,     0,   965,     0,     0,   966,     0,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     980,   981,   982,     0,     0,     0,   983,     0,     0,     0,
       0,   984,     0,     0,   985,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1780,     0,   950,     0,   951,
     952,   953,   954,   955,   956,   957,   958,   959,   960,   961,
     962,     0,     0,     0,   963,     0,     0,   964,     0,     0,
     965,     0,     0,   966,     0,   967,   968,   969,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   981,
     982,     0,     0,     0,   983,   948,     0,     0,     0,   984,
       0,  1791,   985,    73,    74,   949,     0,    76,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   948,
     127,   128,   129,     0,     0,     0,     0,    73,    74,   949,
       0,    76,     0,     0,     0,     0,     0,     0,     0,  1793,
       0,   131,   132,   133,   134,     0,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,     0,   948,     0,     0,     0,     0,     0,     0,
       0,    73,    74,   949,     0,    76,  1199,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   950,     0,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,     0,     0,     0,   963,
       0,     0,   964,     0,     0,   965,     0,     0,   966,     0,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,   982,     0,     0,     0,   983,
       0,     0,     0,     0,   984,     0,   950,   985,   951,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
       0,     0,     0,   963,     0,     0,   964,     0,     0,   965,
       0,     0,   966,     0,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,   982,
       0,     0,     0,   983,     0,     0,     0,     0,   984,     0,
     950,   985,   951,   952,   953,   954,   955,   956,   957,   958,
     959,   960,   961,   962,  1795,     0,     0,   963,     0,     0,
     964,     0,     0,   965,     0,     0,   966,     0,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,     0,     0,     0,   983,   948,     0,
       0,     0,   984,     0,   162,   985,    73,    74,   949,   163,
      76,     0,   164,     0,     0,     0,     0,     0,  1796,   889,
     890,   891,   892,   893,   894,   895,   896,     0,     0,   897,
     898,   899,   900,   901,   902,   903,   904,     0,     0,   905,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1188,     0,   948,   127,   128,   129,     0,     0,     0,     0,
      73,    74,   949,     0,    76,     0,     0,     0,     0,     0,
       0,     0,  1797,     0,   131,   132,   133,   134,     0,     0,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,     0,   948,     0,     0,     0,
       0,     0,     0,     0,    73,    74,   949,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   950,     0,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,     0,
       0,     0,   963,     0,     0,   964,     0,     0,   965,     0,
       0,   966,     0,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,   979,   980,   981,   982,     0,
       0,     0,   983,     0,     0,     0,     0,   984,     0,   950,
     985,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   962,     0,     0,     0,   963,     0,     0,   964,
       0,     0,   965,     0,     0,   966,     0,   967,   968,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     980,   981,   982,     0,     0,     0,   983,     0,     0,     0,
       0,   984,     0,   950,   985,   951,   952,   953,   954,   955,
     956,   957,   958,   959,   960,   961,   962,  1975,     0,     0,
     963,     0,     0,   964,     0,     0,   965,     0,     0,   966,
       0,   967,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,     0,     0,     0,
     983,   948,     0,     0,     0,   984,     0,   162,   985,    73,
      74,   949,   163,    76,     0,   164,     0,     0,     0,   275,
     276,  1982,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,     0,     0,     0,     0,   500,
       0,     0,     0,     0,     0,   948,   127,   128,     6,   530,
       0,     0,     0,    73,    74,   949,     0,    76,     0,     0,
       0,     0,     0,     0,     0,  2017,     0,     0,     0,     0,
       0,     0,     0,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,   948,
       0,     0,     0,     0,     0,   525,     0,    73,    74,   949,
       0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   950,     0,
     951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
     961,   962,   581,     0,     0,   963,     0,     0,   964,     0,
       0,   965,     0,     0,   966,     0,   967,   968,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,   982,  1365,     0,     0,   983,     0,     0,     0,     0,
     984,     0,   950,   985,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,     0,     0,     0,   963,
       0,     0,   964,     0,     0,   965,     0,     0,   966,     0,
     967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,   982,     0,     0,     0,   983,
       0,     0,     0,     0,   984,     0,   950,   985,   951,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
    2019,   761,     0,   963,     0,     0,   964,     0,     0,   965,
       0,     0,   966,     0,   967,   968,   969,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,   982,
     127,   128,     6,   983,   948,     0,     0,     0,   984,     0,
     162,   985,    73,    74,   949,   163,    76,     0,   164,     0,
       0,     0,     0,     0,  2021,     0,     0,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   275,   276,  1035,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,     0,     0,   289,  2022,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,     0,     0,     0,   889,   890,
     891,   892,   893,   894,   895,   896,     0,     0,   897,   898,
     899,   900,   901,   902,   903,   904,     0,     0,   905,     0,
       0,   950,     0,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,     0,     0,     0,   963,     0,
       0,   964,     0,     0,   965,     0,     0,   966,     0,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   982,     0,     0,     0,   983,     0,
       0,     0,     0,   984,     0,     0,   985,     0,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,     0,     0,     6,     0,     0,     0,
       0,     0,     7,     8,     0,     0,   612,     0,     0,     0,
       9,    10,    11,    12,   162,     0,     0,     0,     0,   163,
      13,     0,   164,     0,     0,   275,   276,     0,   277,   278,
     279,   280,     0,  2033,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,   322,     0,     0,     0,
     289,   275,   276,    14,   277,   278,   279,   280,     0,    15,
     281,   282,   283,   284,   285,   286,   287,   613,     0,     0,
     288,     0,    16,     0,    17,     0,   289,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,   614,
     275,   276,    20,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,    21,     0,   289,     0,     0,     0,   615,
     512,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,    22,     0,
      23,   288,     0,     0,     0,   275,   276,   289,   277,   278,
     279,   280,   519,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   275,   276,
     289,   277,   278,   279,   280,   520,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   275,   276,   289,   277,   278,   279,   280,   521,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,   275,   276,   289,   277,   278,   279,
     280,   794,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   275,   276,   289,
     277,   278,   279,   280,   795,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
     275,   276,   289,   277,   278,   279,   280,  1045,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   275,   276,   289,   277,   278,   279,   280,
    1046,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   275,   276,   289,   277,
     278,   279,   280,  1047,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   275,
     276,   289,   277,   278,   279,   280,  1178,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,   275,   276,   289,   277,   278,   279,   280,  1371,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   275,   276,   289,   277,   278,
     279,   280,  1372,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   275,   276,
     289,   277,   278,   279,   280,  1373,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   275,   276,   289,   277,   278,   279,   280,  1468,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,   275,   276,   289,   277,   278,   279,
     280,  1476,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   275,   276,   289,
     277,   278,   279,   280,  1485,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
     275,   276,   289,   277,   278,   279,   280,  1657,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   275,   276,   289,   277,   278,   279,   280,
    1692,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   275,   276,   289,   277,
     278,   279,   280,  1693,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   275,
     276,   289,   277,   278,   279,   280,  1694,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,   275,   276,   289,   277,   278,   279,   280,  1698,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   275,   276,   289,   277,   278,
     279,   280,  1704,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   275,   276,
     289,   277,   278,   279,   280,  1711,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   275,   276,   289,   277,   278,   279,   280,  1731,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,   275,   276,   289,   277,   278,   279,
     280,  1851,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   275,   276,   289,
     277,   278,   279,   280,  1852,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
     275,   276,   289,   277,   278,   279,   280,  1860,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   275,   276,   289,   277,   278,   279,   280,
    1866,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   275,   276,   289,   277,
     278,   279,   280,  1867,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   275,
     276,   289,   277,   278,   279,   280,  1944,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,   275,   276,   289,   277,   278,   279,   280,  1946,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   275,   276,   289,   277,   278,
     279,   280,  1969,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   275,   276,
     289,   277,   278,   279,   280,  2024,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   275,   276,   289,   277,   278,   279,   280,  2026,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,   275,   276,   289,   277,   278,   279,
     280,  2034,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,     0,     0,   289,
       0,   275,   276,   350,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,     0,     0,   289,     0,   275,   276,
     650,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,     0,   275,   276,   800,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,     0,   275,   276,  1177,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,     0,     0,   289,     0,   275,
     276,  1210,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,     0,     0,   289,     0,   275,   276,  1527,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,     0,
       0,   289,     0,   275,   276,  1662,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,     0,     0,   289,     0,
     275,   276,  1663,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,     0,   275,   276,  1664,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
       0,     0,   289,     0,   275,   276,  1823,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,     0,     0,   289,
       0,   275,   276,  1826,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,     0,     0,   289,     0,   275,   276,
    1830,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,     0,   275,   276,  1935,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,     0,     0,
     289,     0,   275,   276,  2012,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,     0,     0,   289,     0,   275,
     276,  2040,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
     379,     0,   275,   276,   289,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   502,     0,   289,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   503,     0,   289,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   504,     0,   289,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   505,     0,   289,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   506,
       0,   289,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   507,     0,   289,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   508,     0,   289,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   509,     0,   289,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   510,     0,   289,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   511,
       0,   289,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   513,     0,   289,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   514,     0,   289,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,   515,     0,   289,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   516,     0,   289,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,   517,
       0,   289,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,   518,     0,   289,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,   527,     0,   289,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,   603,     0,   275,   276,   289,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,     0,     0,
     658,     0,   289,   275,   276,     0,   277,   278,   279,   280,
       0,     0,   281,   282,   283,   284,   285,   286,   287,     0,
       0,     0,   288,     0,     0,     0,   796,     0,   289,   275,
     276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
     283,   284,   285,   286,   287,     0,     0,     0,   288,     0,
       0,     0,   797,     0,   289,   275,   276,     0,   277,   278,
     279,   280,     0,     0,   281,   282,   283,   284,   285,   286,
     287,     0,     0,     0,   288,     0,     0,     0,   798,     0,
     289,   275,   276,     0,   277,   278,   279,   280,     0,     0,
     281,   282,   283,   284,   285,   286,   287,     0,     0,     0,
     288,     0,     0,     0,   799,     0,   289,   275,   276,     0,
     277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
     285,   286,   287,     0,     0,     0,   288,     0,   856,     0,
     275,   276,   289,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,   864,     0,   289,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,  1049,
       0,   289,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,  1050,     0,   289,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,  1735,     0,   289,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,  1849,     0,   289,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,  1863,     0,   289,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,  1941,
       0,   289,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,  1942,     0,   289,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,  1943,     0,   289,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,  1948,     0,   289,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,  1958,     0,   289,   275,   276,     0,   277,
     278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     286,   287,     0,     0,     0,   288,     0,     0,     0,  1959,
       0,   289,   275,   276,     0,   277,   278,   279,   280,     0,
       0,   281,   282,   283,   284,   285,   286,   287,     0,     0,
       0,   288,     0,     0,     0,  2001,     0,   289,   275,   276,
       0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,  2005,     0,   289,   275,   276,     0,   277,   278,   279,
     280,     0,     0,   281,   282,   283,   284,   285,   286,   287,
       0,     0,     0,   288,     0,     0,     0,  2036,     0,   289,
     275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
     282,   283,   284,   285,   286,   287,     0,     0,     0,   288,
       0,     0,     0,     0,     0,   289,   889,   890,   891,   892,
     893,   894,   895,   896,     0,     0,   897,   898,   899,   900,
     901,   902,   903,   904,     0,     0,   905,     0,     0,   276,
    1534,   277,   278,   279,   280,     0,     0,   281,   282,   283,
     284,   285,   286,   287,     0,     0,     0,   288,     0,     0,
       0,     0,     0,   289,   889,   890,   891,   892,   893,   894,
     895,   896,     0,     0,   897,   898,   899,   900,   901,   902,
     903,   904,     0,     0,   905,     0,  1007,   889,   890,   891,
     892,   893,   894,   895,   896,     0,     0,   897,   898,   899,
     900,   901,   902,   903,   904,     0,     0,   905
};

static const short yycheck[] =
{
       5,    84,   174,   105,   106,   573,  1117,    12,   544,   999,
     631,    84,   717,   332,  1004,  1005,   552,   336,    23,     5,
       3,   491,     5,   433,     5,     3,   562,     5,    33,     5,
     566,     5,   109,     5,   570,   112,   113,   114,   115,   116,
     117,   313,     3,     5,     5,     5,     5,     3,     5,     5,
       5,     5,   324,   325,   326,     7,    23,     7,     3,     5,
       5,   333,   747,   748,   749,   750,     5,     5,   240,     0,
      86,     7,    75,    11,    12,    13,    14,    15,   488,    17,
      96,    64,    98,     0,   599,   605,    23,     5,    69,    82,
     256,    29,     5,    96,     5,     5,     5,     5,     6,   265,
     105,   106,    26,    96,   109,   182,   257,   112,   113,   114,
     115,   116,   117,   118,    69,   257,   267,   122,   123,   124,
     267,   612,   613,   257,   254,   267,   536,   299,   619,   263,
     260,   255,    99,   267,    69,     5,     6,     5,     6,     9,
      10,     9,    10,     5,   246,   255,    81,    65,     7,    11,
      12,    13,    14,    15,    64,    17,    69,   117,    69,    69,
      69,   258,    99,   482,   869,   267,   871,    29,   265,   341,
      13,    14,    15,    23,    17,    23,    23,   182,   257,   117,
     118,   119,   120,   257,   263,   109,   267,   872,   112,   113,
     114,   115,   116,   117,   258,   297,   257,    23,   143,     6,
     263,   265,   263,  1193,   267,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   263,    82,   908,   263,   406,    86,    87,   233,   263,
       5,  1587,   747,   748,   749,   750,    11,    12,    13,    14,
      15,   246,    17,   763,  1600,    86,   256,   256,   264,    99,
    1606,    99,    99,    96,    29,   265,   265,   263,   182,  1615,
     233,   264,   267,   258,   231,  1621,  1622,   212,   258,   110,
     265,   264,   255,    99,   263,   265,   263,   255,  1268,   260,
     263,   267,   263,   266,   263,   263,   247,   263,   266,   263,
     133,   263,   297,   256,   255,   467,   255,   140,   381,   255,
     257,   263,   265,     7,   264,   266,     5,   257,   313,   263,
     266,   263,    11,    12,    13,    14,    15,   263,    17,   324,
     325,   326,    86,   406,   263,  1010,   264,   263,   333,   264,
      29,     5,    96,   406,   263,   607,     8,    11,    12,    13,
      14,    15,   263,    17,   263,   258,   267,   260,   112,   260,
     260,   260,   116,   455,   535,    29,   766,   872,   539,    13,
      14,    15,   232,    17,   232,   263,     5,   258,    67,   267,
    1360,   241,   242,   263,   265,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   263,   316,   908,     5,   267,    13,    14,    15,     7,
      17,   263,   264,    96,   264,    98,   411,   257,   263,   257,
     257,     7,   267,   106,   586,    82,   588,   589,   590,    86,
     425,   264,   263,   264,    13,    14,    15,   257,    17,    96,
     435,   257,    86,   263,    82,   440,   260,     7,   262,    18,
      88,   446,    96,   448,   449,     5,   765,   452,    96,   454,
     455,    11,    12,    13,    14,    15,   258,    17,    13,    14,
      15,     7,    17,   265,   258,  1086,  1087,     5,   107,    29,
     651,   265,   257,    11,    12,    13,    14,    15,   117,    17,
     134,   135,   136,   137,   138,   139,   491,     7,   263,   264,
     255,    29,   258,     7,   596,  1010,    78,    79,     5,   265,
     264,   263,   264,  1188,    11,    12,    13,    14,    15,    88,
      17,     5,   263,  1198,   616,     7,   267,    11,    12,    13,
      14,    15,    29,    17,    13,    14,    15,     7,    17,   612,
     613,   258,   233,   258,   116,    29,   619,     7,   265,  1895,
     265,     7,    13,    14,    15,   246,    17,   866,   130,  1905,
      13,    14,    15,   255,    17,   257,   257,   191,    13,    14,
      15,   140,    17,   235,   236,   264,   238,   239,   240,   241,
    1040,   264,   244,   245,   246,   247,   248,   249,   250,    96,
     258,  1571,   254,  1573,   163,   164,     7,   265,   260,   263,
     264,   596,   264,    98,   599,   112,     7,   264,   263,   264,
     605,   257,   607,   108,   109,   110,    18,   258,   685,     7,
     264,   616,   784,     7,   265,   692,   264,   134,    18,   791,
    1111,   258,   258,   258,  1980,     7,   258,  1983,   265,   265,
     265,     7,  1123,   265,   258,  1203,     7,  1993,  1994,   235,
     236,   265,   238,   239,   240,   241,   263,   264,   244,   245,
     246,   247,   248,   249,   250,   264,   265,   255,   254,   264,
     265,    68,  2018,   257,   260,   264,   265,   257,  1236,   771,
     772,   188,   257,  1188,   263,   264,    88,     7,   256,    86,
     685,   264,   264,  1198,     6,   264,    86,   692,    88,    96,
      97,   265,   266,   130,     7,   264,   265,   263,   105,    99,
     107,     7,  1238,   263,   264,   263,   264,  1222,   263,   264,
    1821,  1822,   112,   248,   249,   250,   251,   257,     5,   254,
       7,   133,   263,   264,   257,   263,   264,   257,   140,   141,
     130,  1299,    19,    20,    21,   257,   660,     7,   193,   194,
     195,   196,   747,   748,   749,   750,   670,   264,   753,    36,
     674,   163,   263,   264,   166,   167,   263,   264,   763,   264,
     684,   685,   263,   264,   688,     7,   771,   772,   692,   263,
     264,   264,   265,   257,   263,   264,   257,   701,   264,   265,
       7,  1053,  1054,  1055,  1056,   264,   265,   264,   265,   257,
      84,    85,   263,   264,     5,  1067,   246,   247,   248,   249,
     263,   264,     7,    69,    70,    71,    72,    73,    74,    75,
      76,    77,   264,   265,    80,   265,  1088,  1089,   264,   265,
      86,   993,   994,   995,   996,   257,   120,   121,   248,   249,
     250,   257,   126,    99,   254,   264,   265,   265,  1110,     8,
     260,   264,   265,    89,    90,    91,    92,    93,    94,     3,
       4,     5,   264,   257,  1539,  1845,   257,   264,   264,   265,
     257,  1033,   264,   265,   264,   264,   265,   872,   162,   163,
     164,  1576,  1577,  1578,   264,   265,    30,    31,    32,    33,
      34,  1153,   887,   807,   257,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   263,   264,   908,  1374,   235,   236,   194,   238,   239,
     240,   241,   264,   265,   244,   245,   246,   247,   248,   249,
     250,   257,   235,   236,   254,   238,   239,   240,   241,   257,
     260,   244,   245,   246,   247,   248,   249,   250,   257,     7,
     257,   254,   257,   948,   264,   265,   257,   260,   264,   265,
     244,   245,   257,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   264,   265,  1385,   257,  1967,   264,   265,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,  1405,   264,   265,   264,   264,
     265,  1411,   296,  1413,   263,  1010,   264,   265,  1280,   263,
     264,   264,   265,   257,  1286,  1506,  1507,  1508,   264,  1510,
    1122,     7,  1124,   947,  1539,   257,   320,   321,  1111,   264,
     265,   264,   265,  1548,  1039,  1040,  1446,  1528,   622,   623,
    1123,   257,  1452,   257,   257,   339,   265,   257,  1053,  1054,
    1055,  1056,  1154,   257,   257,   263,     5,  1062,     5,   233,
     257,   263,  1067,   263,   263,   263,   235,   236,   263,   238,
     239,   240,   241,   263,  1079,   244,   245,   246,   247,   248,
     249,   250,     8,  1088,  1089,   254,  1358,   381,   265,   264,
     258,   260,   265,  1098,   258,  1367,   246,   247,   248,   249,
     250,  1106,  1107,   258,   254,  1110,   140,   401,   402,   143,
     260,     7,   406,   258,   408,  1120,  1121,  1122,   233,  1124,
    1125,  1126,   156,   157,   233,  1130,   160,   161,   233,     5,
    1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,   263,
       5,  1846,   263,     5,   263,     5,     5,   263,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1168,   263,  1170,   263,   235,   236,  1174,
     238,   239,   240,   241,   233,   258,   244,   245,   246,   247,
     248,   249,   250,  1188,    96,     5,   254,     5,   263,   263,
       5,   485,   260,  1198,  1466,     5,   263,   419,   263,  1690,
     263,  1692,     5,   208,   258,   499,   500,    96,   263,    98,
      99,   100,   101,   102,   103,   104,   140,   263,   512,   143,
     263,   263,     5,   264,   257,   519,   520,   521,   140,   257,
     264,   525,   156,   157,   158,   257,   130,     7,   532,     5,
       7,   233,   464,     7,     7,     7,  1518,   263,     7,   235,
     236,  1742,   238,   239,   240,   241,     7,  1748,   244,   245,
     246,   247,   248,   249,   250,     5,     7,    81,   254,    83,
      84,    85,     7,     7,   260,  1280,     7,     7,   190,     7,
     192,  1286,     7,     7,   263,     7,     7,   581,   582,   122,
     123,   124,   125,   126,   127,   128,     7,   130,     7,     7,
     594,     7,   214,     7,   264,     5,   265,  1579,   122,   123,
     124,   125,   126,   127,   128,     7,   130,   131,   612,   613,
       5,     7,   263,   617,   618,   619,   620,  1818,     8,     5,
       5,     5,   626,   263,   628,   557,   263,     3,   263,    81,
     264,    83,  1347,  1348,    86,   263,   246,   247,   248,   249,
     250,   251,   264,  1358,   254,   263,  1892,  1529,     7,  1531,
    1532,  1831,  1367,   258,     7,     5,     7,   233,   260,  1374,
       3,     4,     5,     7,   264,   264,     7,     7,     7,     7,
     122,   123,   124,   125,   126,   127,   128,     7,   130,     7,
    1881,    24,    25,    26,    27,   263,   265,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   258,  1506,  1507,  1508,   258,  1510,     7,   257,
     257,   264,   257,   257,     5,     7,   257,     5,     3,     5,
      11,    12,    13,    14,    15,  1528,    17,     6,   257,   257,
     264,     7,   263,  1944,  1459,  1460,   678,     7,    29,  1464,
      66,  1466,   263,   263,   263,     7,   263,   761,   762,   265,
     263,   263,    81,  2041,    83,    84,   263,    86,   263,   263,
     257,     5,     5,   705,   257,   257,   241,    96,   264,   254,
    1495,     3,    63,     7,   788,   789,   790,   265,   258,   257,
     794,   795,   263,   257,   113,   114,   115,   257,  1513,  1514,
     257,  1516,  1517,  1518,   235,   236,   264,   238,   239,   240,
     241,   130,   264,   244,   245,   246,   247,   248,   249,   250,
     257,   257,     7,   254,  1539,     7,     5,   257,   257,   260,
     257,   257,   257,   257,   257,   263,     5,   769,     5,     5,
     257,   263,   257,   263,   257,     3,     4,     5,  1563,   257,
     854,   240,   241,   857,   786,   244,   245,   246,   247,   248,
     249,   250,   263,   257,  1579,   254,   257,   186,  1583,   257,
    1585,   260,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,  1690,   263,  1692,
     257,   257,   257,   907,   247,   257,     5,     5,   257,   252,
     258,   258,   255,   258,     5,   257,     5,   263,     5,  1731,
    1732,   264,   258,   257,     7,     5,  1738,   931,   263,     5,
    1912,   263,     5,     5,     5,     5,     5,     3,   257,     3,
       5,   263,   257,     5,     7,   264,  1828,     7,  1930,  1742,
     257,   264,     7,   235,   236,  1748,   238,   239,   240,   241,
     265,   263,   244,   245,   246,   247,   248,   249,   250,   265,
     258,   257,   254,   265,     7,   260,     7,     7,   260,     7,
    1695,     7,  1697,   235,   236,     7,   238,   239,   240,   241,
       7,     7,   244,   245,   246,   247,   248,   249,   250,     7,
       7,     7,   254,  1815,     7,  1817,     7,     7,   260,     7,
       7,     7,     7,     7,   263,     5,  1731,  1732,   950,     7,
       7,     7,     7,  1738,     7,  1818,     7,     7,     7,     7,
       7,  1035,     7,  2015,     7,     7,     7,     7,     7,     7,
       7,  1045,  1046,  1047,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   235,   236,     7,   238,   239,   240,   241,
     992,     7,   244,   245,   246,   247,   248,   249,   250,     7,
       7,     5,   254,     5,   238,   239,   240,   241,   260,     5,
     244,   245,   246,   247,   248,   249,   250,   257,  1881,   247,
     254,     7,   257,     5,   252,   257,   260,   255,     5,     7,
    1815,     7,  1817,     7,     7,   263,     7,  1111,     7,  1041,
       7,     7,  1044,   258,   258,   258,  1831,   265,   265,  1123,
     258,   258,   258,   265,   265,  1057,  1058,  1059,  1060,   240,
     241,   265,  1064,   244,   245,   246,   247,   248,   249,   250,
     251,   265,  1146,   254,  1148,   265,  1150,   265,   265,   265,
     265,  1944,   235,   236,   264,   238,   239,   240,   241,   265,
     265,   244,   245,   246,   247,   248,   249,   250,   265,   265,
     265,   254,   264,     7,  1178,     7,   264,   260,     3,   265,
     265,   265,   112,   265,   265,     7,   265,   265,   263,   263,
       3,     4,     5,     7,     5,   263,   263,  1912,     7,   258,
    1132,  1133,     7,     7,   265,   257,     7,   265,   265,   265,
     264,   258,     7,  1145,     3,  1930,     7,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     7,    60,    61,   235,
     236,     7,   238,   239,   240,   241,     7,     7,   244,   245,
     246,   247,   248,   249,   250,     7,     7,     7,   254,     7,
     263,   263,   263,     7,   260,     7,     5,     5,     5,   263,
       5,   263,   135,     7,  1216,     7,  1218,   263,     7,   263,
       3,     4,     5,  1225,   258,   258,   258,   263,   263,   258,
    2015,   258,   258,   264,   258,    81,     7,    83,     7,   122,
      86,    24,    25,    26,    27,   265,   129,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   265,     3,     4,     5,   122,   123,   124,   125,
     126,   127,   128,     7,   130,   265,   265,  1361,     7,     7,
     265,   263,     7,   258,   258,   265,   258,  1371,  1372,  1373,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     7,
      60,    61,   265,   235,   236,   265,   238,   239,   240,   241,
     265,   258,   244,   245,   246,   247,   248,   249,   250,   265,
     263,   265,   254,   258,   264,   258,   265,   240,   260,   258,
       7,   258,   258,   246,   247,     7,   264,     7,  1370,   252,
     264,     7,   255,     7,     7,   258,   259,   260,   261,     7,
     263,     7,     7,     7,     7,     7,     7,  1461,  1462,  1463,
       7,     7,   122,   263,  1468,   264,   264,  1471,  1472,   129,
     263,     7,  1476,   260,     7,  1479,  1480,  1481,  1482,     7,
       7,  1485,  1486,  1487,     5,  1489,   111,     7,   264,  1493,
    1494,     7,   265,   265,  1498,  1499,   209,     3,    16,   212,
     258,     7,  1506,  1507,  1508,  1509,  1510,     7,   265,   258,
     265,  1515,   265,   265,   258,   258,   263,   265,     5,     7,
     257,     7,     7,     7,  1528,     7,  1458,   263,   263,     7,
       7,     7,     5,  1465,   247,     5,     5,   263,  1470,   252,
     258,  1473,   255,   258,   265,     5,  1478,   258,     5,     5,
     263,   258,   264,     7,     4,     7,    62,   263,  1490,     7,
       7,   264,    68,     7,   264,     7,     7,     7,     7,     7,
     263,  1503,     7,  1505,     7,    81,     7,    83,     7,     7,
     240,     7,     7,   263,   263,     7,   246,   247,   264,    95,
       7,   263,   252,    99,   265,   255,   258,     7,     7,   258,
     260,   261,   263,   263,    62,   111,     7,     7,     7,     7,
       7,     7,     5,   132,  1546,  1547,     7,  1549,   264,  1078,
    1229,  1077,   757,   659,  1675,  1348,   132,   235,   236,  1524,
     238,   239,   240,   241,   944,   576,   244,   245,   246,   247,
     248,   249,   250,  1746,   123,  1649,   254,   230,  1652,   593,
     701,     7,   260,  1657,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    -1,    -1,     3,     4,     5,    -1,    -1,    13,
      14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,    -1,   189,    -1,    -1,  1690,  1691,  1692,  1693,
    1694,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     7,    -1,    -1,    -1,
      -1,    -1,  1726,    -1,    -1,    -1,  1730,    -1,    -1,  1733,
    1734,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1742,    -1,
      -1,    -1,     7,    81,  1748,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1762,  1763,
    1764,  1765,  1766,    -1,    -1,    -1,  1698,    -1,    -1,    -1,
      -1,    -1,  1704,    -1,    -1,    -1,    -1,    -1,    -1,  1711,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,   127,
     128,    -1,   130,   131,    -1,  1727,    -1,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,    -1,  1818,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,  1829,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,    -1,    -1,   189,  1850,  1851,  1852,  1853,
     194,    -1,  1856,   197,  1858,    -1,   236,   237,   238,   239,
     240,   241,  1866,  1867,   244,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,   254,    -1,    -1,  1881,  1882,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,  1909,    -1,    -1,   247,    -1,
      -1,    -1,    -1,   252,    -1,    -1,   255,    -1,    -1,    -1,
     264,   260,    -1,  1855,    -1,    -1,   264,    -1,  1860,    -1,
    1862,    -1,  1936,    -1,    -1,    -1,    -1,  1869,     7,    -1,
    1944,    -1,  1946,    -1,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,     7,    -1,   254,    -1,  1969,    -1,    -1,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,  1910,   244,
     245,   246,   247,   248,   249,   250,    -1,     7,    -1,   254,
      -1,    -1,    -1,    -1,    -1,   260,  2000,    -1,    -1,  2003,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    -1,    -1,    -1,
    2024,    -1,  2026,    -1,    -1,  1957,    -1,    -1,    -1,    -1,
    2034,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     3,     4,     5,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    26,    27,    28,     8,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     3,     4,     5,   237,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,   254,    24,    25,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,
     236,   260,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,   235,   236,    -1,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,     5,    -1,   231,    -1,
     260,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   252,
      -1,    -1,   255,    -1,    -1,    -1,    -1,   260,   235,   236,
     263,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
     231,    -1,     5,   260,    -1,    -1,    -1,    -1,   265,    -1,
      13,    14,    15,    -1,    17,    -1,   247,    -1,    -1,    -1,
      -1,   252,    -1,    -1,   255,   235,   236,    -1,   238,   239,
     240,   241,   263,    -1,   244,   245,   246,   247,   248,   249,
     250,     8,    -1,    -1,   254,    -1,   256,    -1,    -1,    -1,
     260,    -1,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,   247,    -1,
       5,   254,    -1,   252,    -1,    -1,   255,   260,    13,    14,
      15,   264,    17,   142,   263,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,    -1,    -1,    -1,    -1,   194,    -1,    -1,   197,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,   194,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   264,    -1,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,   189,     5,    -1,    -1,    -1,   194,
      -1,   264,   197,    13,    14,    15,    -1,    17,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
       3,     4,     5,    -1,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,
      -1,    24,    25,    26,    27,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,
      -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,
     142,   197,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   264,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,   189,     5,    -1,
      -1,    -1,   194,    -1,   247,   197,    13,    14,    15,   252,
      17,    -1,   255,    -1,    -1,    -1,    -1,    -1,   264,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     265,    -1,     5,     3,     4,     5,    -1,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   264,    -1,    24,    25,    26,    27,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
      -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,
     197,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,   194,    -1,   142,   197,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   264,    -1,    -1,
     159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
     189,     5,    -1,    -1,    -1,   194,    -1,   247,   197,    13,
      14,    15,   252,    17,    -1,   255,    -1,    -1,    -1,   235,
     236,   264,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,   265,
      -1,    -1,    -1,    -1,    -1,     5,     3,     4,     5,     6,
      -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,     5,
      -1,    -1,    -1,    -1,    -1,     8,    -1,    13,    14,    15,
      -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,     8,    -1,    -1,   159,    -1,    -1,   162,    -1,
      -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,     8,    -1,    -1,   189,    -1,    -1,    -1,    -1,
     194,    -1,   142,   197,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
      -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,
      -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     264,     8,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
       3,     4,     5,   189,     5,    -1,    -1,    -1,   194,    -1,
     247,   197,    13,    14,    15,   252,    17,    -1,   255,    -1,
      -1,    -1,    -1,    -1,   264,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   235,   236,     8,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,   260,   264,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,   254,    -1,
      -1,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
      -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    -1,   189,    -1,
      -1,    -1,    -1,   194,    -1,    -1,   197,    -1,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    -1,    -1,    75,    -1,    -1,    -1,
      19,    20,    21,    22,   247,    -1,    -1,    -1,    -1,   252,
      29,    -1,   255,    -1,    -1,   235,   236,    -1,   238,   239,
     240,   241,    -1,   264,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,   256,    -1,    -1,    -1,
     260,   235,   236,    62,   238,   239,   240,   241,    -1,    68,
     244,   245,   246,   247,   248,   249,   250,   136,    -1,    -1,
     254,    -1,    81,    -1,    83,    -1,   260,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,
     235,   236,   111,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   132,    -1,   260,    -1,    -1,    -1,   198,
     265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,   187,    -1,
     189,   254,    -1,    -1,    -1,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   235,   236,   260,   238,   239,   240,   241,   265,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   235,   236,   260,   238,   239,   240,   241,   265,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,
     238,   239,   240,   241,   265,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     235,   236,   260,   238,   239,   240,   241,   265,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   235,   236,   260,   238,   239,   240,   241,
     265,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,
     239,   240,   241,   265,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,
     236,   260,   238,   239,   240,   241,   265,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   235,   236,   260,   238,   239,   240,   241,   265,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   235,   236,   260,   238,   239,
     240,   241,   265,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   235,   236,
     260,   238,   239,   240,   241,   265,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   235,   236,   260,   238,   239,   240,   241,   265,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   235,   236,   260,   238,   239,   240,
     241,   265,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,
      -1,   235,   236,   264,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,   260,    -1,   235,   236,
     264,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,    -1,   235,   236,   264,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
     260,    -1,   235,   236,   264,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,   235,
     236,   264,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,   260,    -1,   235,   236,   264,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,   260,    -1,   235,   236,   264,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,
     235,   236,   264,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,   260,    -1,   235,   236,   264,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
      -1,    -1,   260,    -1,   235,   236,   264,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,   260,
      -1,   235,   236,   264,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,    -1,    -1,   260,    -1,   235,   236,
     264,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,    -1,   235,   236,   264,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
     260,    -1,   235,   236,   264,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,   235,
     236,   264,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
     256,    -1,   235,   236,   260,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,   256,    -1,   235,   236,   260,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,
     258,    -1,   260,   235,   236,    -1,   238,   239,   240,   241,
      -1,    -1,   244,   245,   246,   247,   248,   249,   250,    -1,
      -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,
     236,    -1,   238,   239,   240,   241,    -1,    -1,   244,   245,
     246,   247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,
      -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,
     260,   235,   236,    -1,   238,   239,   240,   241,    -1,    -1,
     244,   245,   246,   247,   248,   249,   250,    -1,    -1,    -1,
     254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,    -1,    -1,    -1,   254,    -1,   256,    -1,
     235,   236,   260,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,   258,    -1,   260,   235,   236,    -1,   238,
     239,   240,   241,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,    -1,    -1,    -1,   254,    -1,    -1,    -1,   258,
      -1,   260,   235,   236,    -1,   238,   239,   240,   241,    -1,
      -1,   244,   245,   246,   247,   248,   249,   250,    -1,    -1,
      -1,   254,    -1,    -1,    -1,   258,    -1,   260,   235,   236,
      -1,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,   258,    -1,   260,   235,   236,    -1,   238,   239,   240,
     241,    -1,    -1,   244,   245,   246,   247,   248,   249,   250,
      -1,    -1,    -1,   254,    -1,    -1,    -1,   258,    -1,   260,
     235,   236,    -1,   238,   239,   240,   241,    -1,    -1,   244,
     245,   246,   247,   248,   249,   250,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,   260,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,   254,    -1,    -1,   236,
     258,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,   260,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,    -1,   244,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,   254,    -1,   256,   234,   235,   236,
     237,   238,   239,   240,   241,    -1,    -1,   244,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,   254
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   269,   270,     0,   271,   272,     5,    11,    12,    19,
      20,    21,    22,    29,    62,    68,    81,    83,    95,    99,
     111,   132,   187,   189,   273,   274,   275,   437,   451,   459,
     460,   267,   255,   255,     5,     7,    19,    20,    21,    36,
     194,     7,     3,     7,    62,    68,    81,    83,    95,    99,
     111,   132,   187,   189,     6,     9,    10,   232,   460,   461,
     462,   257,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   460,    13,    14,    15,    17,   193,   194,   195,
     196,   441,   450,   267,   233,   263,     6,   460,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,   257,   255,   452,   276,   334,
     319,   325,   341,   299,   364,   391,   421,   433,   191,     5,
     255,   255,   257,   257,   257,   257,   263,     3,     4,     5,
       6,    24,    25,    26,    27,    28,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   231,   247,   252,   255,   263,   454,   455,   456,   458,
     460,   462,   454,   256,   265,   256,   461,   461,   258,   265,
     295,   264,   277,   263,   264,   335,   450,   451,   263,   264,
     263,   264,   263,   264,   342,   450,   451,     5,    67,   264,
     300,   450,   451,   263,   264,   365,   450,   451,   263,   264,
     392,   450,   451,   263,   264,   422,   450,   451,   263,   264,
     434,   450,   451,   460,   130,   454,   454,   443,   460,     6,
     443,     5,    69,   260,   283,   286,   287,   460,     6,   454,
     263,     7,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   454,   454,
     454,   454,   457,   458,     8,   235,   236,   238,   239,   240,
     241,   244,   245,   246,   247,   248,   249,   250,   254,   260,
       7,     7,   264,     7,   457,     7,   257,   265,   256,   265,
       7,     5,     5,    63,   278,   280,   450,   451,   460,   336,
     320,   326,   343,   257,   257,   366,   393,   423,   435,   438,
     263,     8,   256,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   446,   257,   445,   265,   446,     3,     5,   255,
     263,   266,   291,   293,   460,   442,   257,   263,   297,   447,
     264,   264,   457,     5,     5,   454,   454,   461,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   461,   256,
     264,   265,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   256,   454,   461,
     457,   233,   263,   296,   298,   257,   233,   246,   257,    82,
      86,    96,   264,   337,    82,    96,   264,   321,    82,    88,
      96,   264,   327,    68,    86,    96,    97,   105,   107,   264,
     344,   258,   286,   301,    86,    96,   112,   116,   264,   367,
      96,   133,   140,   264,   394,   450,    96,   112,   134,   188,
     264,   424,    96,   140,   190,   192,   214,   264,   436,   263,
     454,   454,   286,   286,   263,   286,   263,   263,   263,   263,
     263,   447,   286,   246,   247,   248,   249,   265,   444,    23,
      99,   231,   302,   303,   447,     8,   263,   454,   292,   457,
     265,   284,   264,   258,   265,   448,   264,   258,   265,   265,
     265,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   265,   258,   258,   258,   258,   258,   258,   265,
     265,   265,   258,   454,   458,     8,     7,   258,   258,   256,
       6,   454,   260,   454,   233,   233,   294,     5,   283,   233,
     454,     5,   263,     5,   460,   263,     5,   263,   302,     5,
     263,     5,     5,   460,   263,   263,   263,   233,   258,   258,
     295,     5,     5,   460,   263,   263,     5,   460,   263,   395,
       5,   460,   263,   460,   460,   460,   263,   460,   461,     5,
     439,     8,     8,   256,   208,   302,   263,   457,   263,   263,
     263,   258,   258,     5,   257,   257,   257,   447,   306,   307,
     258,   454,   264,   256,   264,   295,   266,   130,    64,   288,
     291,     7,    75,   136,   168,   198,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,     5,   454,
     454,     7,   454,   454,   454,   454,     7,   454,     7,   454,
     264,   279,     5,   283,   258,   295,     7,   283,   258,   263,
     338,     7,     7,   263,   296,   322,     7,   328,     7,     7,
     361,     7,   296,     7,   345,   351,   358,   302,   233,     7,
       5,     7,   296,     7,   368,   375,   296,     7,   396,   263,
     296,     7,   425,   297,     7,     7,   439,     7,     7,     7,
     264,   440,   454,   454,     5,   265,   457,   264,   457,   457,
     457,     7,   445,   454,     5,   461,   258,     5,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    60,    61,   122,   129,   240,   246,   247,   252,
     255,   260,   261,   263,   308,   311,   390,   453,   455,   460,
       7,     8,     8,   247,   293,   286,   285,   456,   456,   263,
       5,   241,   242,   461,   454,   454,   456,   454,     5,   449,
     449,   449,   454,     5,   263,   454,   263,   304,   263,   263,
     263,   263,     3,   258,   265,   265,   258,   258,   258,   258,
     264,   283,     7,     7,     5,     7,   233,   338,   263,   264,
     450,     7,   263,   264,   263,   264,   263,   264,   450,     7,
     263,   264,   450,   263,   264,   263,   264,     7,   302,     7,
     263,   264,   450,   117,   118,   119,   120,   264,   376,   450,
     451,     7,   263,   264,   450,   403,     7,   263,   264,   450,
     451,     7,   264,   441,     8,   264,   256,   263,   302,   264,
     264,   264,   264,   265,   258,   258,   258,     7,   390,   257,
     315,   257,   257,   257,   257,   312,   313,     5,   308,   308,
     308,   308,     3,     3,     5,   143,   212,     5,   460,   234,
     235,   236,   237,   238,   239,   240,   241,   244,   245,   246,
     247,   248,   249,   250,   251,   254,   260,   262,   257,   316,
     316,   454,   454,   293,   447,   289,   295,   302,   461,   461,
       6,   457,   302,   305,   454,   454,   454,   457,   454,   454,
       7,   263,    66,   264,   339,   323,   329,   362,   346,   352,
     359,     7,   369,   263,   263,   263,   263,   397,     5,    15,
     142,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   159,   162,   165,   168,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   189,   194,   197,   264,   404,   450,   426,
     454,   454,   265,   263,   263,   263,   263,   447,   390,   257,
     390,   308,     5,     5,   257,   257,   241,   256,   460,   264,
     309,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   308,     3,   454,   258,
     259,   308,   317,   263,   318,     8,   258,   258,     5,    65,
     290,   265,   264,   264,   265,   265,   265,   265,   264,   258,
     258,   454,   281,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    80,    86,    99,   264,   340,    69,    81,   264,
     324,    82,    86,    87,   264,   330,    98,   108,   109,   110,
     264,   363,    96,    98,    99,   100,   101,   102,   103,   104,
     264,   347,    96,    98,   106,   264,   353,    86,    96,    98,
     264,   360,    81,    83,    84,    86,    96,   113,   114,   115,
     130,   186,   257,   264,   370,   381,   381,   385,   377,    86,
      96,   134,   135,   136,   137,   138,   139,   264,   398,   450,
     257,   460,   257,   257,   302,   257,   257,   257,   257,   257,
     257,   257,   257,   257,     7,   257,   257,   263,   257,   263,
     257,   263,   263,   257,   257,   257,   257,   257,   257,   257,
     257,   263,   263,   257,   257,   257,   257,   257,   263,   263,
     257,   405,   406,    75,    96,   264,   427,   264,   265,   302,
     457,   457,   457,   457,   258,   258,   306,   258,   265,   257,
     258,   306,   306,   257,   264,   308,   258,   258,   265,    69,
     457,   454,     7,   460,   291,   302,   302,   454,   454,   454,
     264,   257,   286,   286,   286,   286,   257,   302,   257,   302,
     302,   302,   263,   460,     5,   257,   302,    64,   286,     5,
     263,     5,     5,     5,   287,   290,   460,     5,     5,     5,
     263,   304,   304,   286,   286,     5,     5,   263,   356,     5,
     263,   354,     5,   460,     5,     5,     5,     5,     5,   107,
     117,   460,     5,   460,     3,     3,   286,   456,   373,    81,
      83,    84,    85,   122,   123,   124,   125,   126,   127,   128,
     130,   131,   264,   382,   389,   264,   130,   264,   386,   389,
      86,   110,   263,   264,   378,     5,   460,   263,   399,   460,
     461,   456,   461,   263,   401,   460,   460,   460,     7,   302,
     302,     7,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   302,   454,   410,   454,   412,   454,   414,   416,   286,
     461,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,     5,   460,   257,   257,   263,
     460,   454,   264,   264,   264,   264,   264,     7,   265,   308,
     314,   263,   258,   265,   306,     8,   308,   257,   264,   297,
     265,   265,   265,   265,   260,     7,     7,     7,     7,   302,
       7,   302,     7,     7,     7,   455,     7,     7,   302,     7,
       7,     7,   318,   331,     7,     7,     7,     7,     7,   297,
       7,     7,   296,   263,   348,     5,     7,     7,     7,     7,
       7,   357,     7,   355,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,   263,   371,     7,     7,     7,
       7,   306,     5,     5,     5,   257,   286,     7,   257,   286,
     257,     5,     5,   379,     7,     7,   400,     7,   297,     7,
       7,     7,   402,     7,     7,   258,   258,   258,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   258,   265,   140,
     143,   156,   157,   158,   264,   411,   265,   140,   143,   156,
     157,   160,   161,   264,   413,   265,    18,    88,   140,   163,
     164,   264,   415,    18,    88,   133,   140,   141,   163,   166,
     167,   264,   417,   265,   258,   265,   265,   265,   265,   265,
     265,   264,   264,   265,   265,   265,   265,   265,   265,   265,
     258,   304,   407,   460,   407,   428,     7,   264,   263,   263,
     264,   263,   263,   286,   258,   306,   454,     3,   258,   310,
     286,   302,   454,   454,   454,   291,   265,   265,   295,   265,
       7,   263,   264,     7,     7,   112,     7,   295,   264,   295,
     264,   295,   264,   257,   374,   258,     7,     7,     7,     3,
       7,   383,     7,   387,     7,     7,    78,    79,   116,   130,
     264,   380,   264,   295,   264,   295,     7,   263,     7,   302,
     460,   460,   454,   454,   454,   460,   302,   286,     7,   454,
     263,   302,   454,   454,   302,   454,   263,   302,   454,   454,
     454,   454,   454,   454,   454,   263,   454,   302,   454,   454,
     460,   263,   263,   454,   454,   263,   302,     7,   302,   456,
     456,   456,   454,   456,     7,     7,   460,   460,   454,   460,
     460,   286,     5,     7,   408,   408,     5,   117,   264,   263,
     456,   457,   263,   457,   457,   258,   258,   265,   258,   308,
     258,   264,   264,   264,   264,   282,   302,   302,   455,   302,
     332,     5,     5,     5,     5,   372,   460,     7,     7,   258,
     306,   306,   390,   390,   390,   286,   460,   460,   403,   258,
     265,   265,   265,   265,   265,   265,   258,   265,   265,   403,
       7,     7,     7,     7,   265,   403,     7,     7,     7,     7,
       7,   265,     7,     7,   403,     7,     7,     7,     7,     7,
     403,   403,     7,     7,   418,   258,   265,   265,   258,   258,
     265,   265,   265,   265,   265,   258,   258,   258,   265,   264,
     265,   258,   265,   409,   258,   263,   263,   454,   265,   264,
     454,   264,   264,   258,   454,   264,   265,   258,   258,   264,
     258,    89,    90,    91,    92,    93,    94,   264,   333,     7,
     264,   374,   258,     7,   384,   388,     7,     7,     7,     7,
     264,     7,   456,   454,   456,   454,   454,   460,     7,   460,
     302,   264,   302,   264,   302,   264,   264,   264,   263,   264,
       7,   454,   302,     7,     7,   454,   461,   461,   454,   454,
       7,     7,     7,   461,     7,   135,     7,   209,   212,   456,
       7,   429,   429,   264,   456,   264,   264,   264,   263,   263,
     264,   260,     7,     7,     7,     7,     5,   454,   454,   454,
     454,   454,   111,     7,     7,   265,   265,    16,   258,   258,
     265,   265,   265,   265,   258,   265,   265,   258,   265,   419,
     265,   258,   265,   258,   258,   258,   265,   265,   264,   265,
     461,   461,   456,    81,    83,    86,   130,   264,   389,   430,
     264,   265,   263,   457,   454,   291,     7,     7,     7,     7,
       7,     7,     5,   306,   390,   263,     7,     7,   454,   454,
     454,   454,     7,   302,   454,   263,   454,    18,    86,    88,
      99,   112,   130,   264,   420,   302,     7,   302,     7,     7,
       7,   454,   454,     7,   302,   264,   265,     5,     5,     5,
     432,   257,   456,   454,   264,   264,   265,   296,   258,   258,
     403,   258,   258,   258,   265,   258,   265,   403,   258,     5,
       5,   454,   302,     5,   286,   258,   258,   265,   258,   258,
     264,     7,     4,     7,     7,     7,   286,   431,   264,   265,
     264,   454,     7,     7,     7,   264,     7,     7,     7,   456,
     263,   454,   264,   263,     7,     7,     7,     7,     7,     7,
       7,     7,   302,   263,   263,     7,   264,     7,   306,   454,
     263,   258,   349,   265,   403,   258,   403,   258,   403,   403,
       7,   258,   264,   454,     7,    62,   454,   264,   263,   264,
       7,   264,   264,     7,   265,   286,   265,   403,     7,     7,
     454,     7,   454,   264,   265,   350,   258,   454,   132,     7,
     264,     5,   297,     7,   264
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
#line 348 "GetDP.y"
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
#line 382 "GetDP.y"
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
#line 425 "GetDP.y"
    { Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;}
    break;

  case 19:
#line 448 "GetDP.y"
    {            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;}
    break;

  case 21:
#line 463 "GetDP.y"
    { Help(NULL); ;}
    break;

  case 22:
#line 465 "GetDP.y"
    { Help("Print"); ;}
    break;

  case 23:
#line 467 "GetDP.y"
    { Help("Check"); ;}
    break;

  case 24:
#line 469 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 25:
#line 471 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 26:
#line 473 "GetDP.y"
    { Help("Help"); ;}
    break;

  case 27:
#line 475 "GetDP.y"
    { Help(yyvsp[-1].c); ;}
    break;

  case 28:
#line 477 "GetDP.y"
    { Msg(RESOURCES, ""); ;}
    break;

  case 29:
#line 479 "GetDP.y"
    { Print_ProblemStructure(&Problem_S); ;}
    break;

  case 30:
#line 481 "GetDP.y"
    { Print_Group(&Problem_S); ;}
    break;

  case 31:
#line 483 "GetDP.y"
    { Print_Expression(&Problem_S); ;}
    break;

  case 32:
#line 485 "GetDP.y"
    { Print_Constraint(&Problem_S); ;}
    break;

  case 33:
#line 487 "GetDP.y"
    { Print_Jacobian(&Problem_S); ;}
    break;

  case 34:
#line 489 "GetDP.y"
    { Print_Integration(&Problem_S); ;}
    break;

  case 35:
#line 491 "GetDP.y"
    { Print_FunctionSpace(&Problem_S); ;}
    break;

  case 36:
#line 493 "GetDP.y"
    { Print_Formulation(&Problem_S); ;}
    break;

  case 37:
#line 495 "GetDP.y"
    { Print_Resolution(&Problem_S); ;}
    break;

  case 38:
#line 497 "GetDP.y"
    { Print_PostProcessing(&Problem_S); ;}
    break;

  case 39:
#line 499 "GetDP.y"
    { Print_PostOperation(&Problem_S); ;}
    break;

  case 40:
#line 501 "GetDP.y"
    { Print_Object(yyvsp[-1].i, &Problem_S); ;}
    break;

  case 41:
#line 503 "GetDP.y"
    {
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 42:
#line 511 "GetDP.y"
    {
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;}
    break;

  case 44:
#line 528 "GetDP.y"
    { Nbr_Index = 0 ; ;}
    break;

  case 46:
#line 535 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;}
    break;

  case 47:
#line 537 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;}
    break;

  case 48:
#line 542 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ; ;}
    break;

  case 49:
#line 544 "GetDP.y"
    { Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;}
    break;

  case 52:
#line 551 "GetDP.y"
    { Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;}
    break;

  case 55:
#line 561 "GetDP.y"
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
#line 571 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;}
    break;

  case 57:
#line 578 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;}
    break;

  case 58:
#line 588 "GetDP.y"
    {
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;}
    break;

  case 59:
#line 593 "GetDP.y"
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
#line 605 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;}
    break;

  case 61:
#line 614 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;}
    break;

  case 62:
#line 625 "GetDP.y"
    {
      yyval.i = yyvsp[0].i ;
    ;}
    break;

  case 63:
#line 630 "GetDP.y"
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
	  sprintf(tmpstr, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
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
#line 667 "GetDP.y"
    { yyval.i = REGION ; ;}
    break;

  case 65:
#line 670 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 66:
#line 682 "GetDP.y"
    { yyval.l = yyvsp[0].l ; ;}
    break;

  case 67:
#line 684 "GetDP.y"
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
#line 700 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;}
    break;

  case 69:
#line 703 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;}
    break;

  case 70:
#line 706 "GetDP.y"
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
	  sprintf(tmpstr, "%s_%d_", yyvsp[-1].c, k+1) ;
	  if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr, fcmp_Group_Name))
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
#line 757 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 72:
#line 770 "GetDP.y"
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
#line 794 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 74:
#line 801 "GetDP.y"
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
#line 814 "GetDP.y"
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
#line 832 "GetDP.y"
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
#line 855 "GetDP.y"
    { Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 78:
#line 860 "GetDP.y"
    { Flag_MultipleIndex = 0 ; i = (int)yyvsp[-1].d ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ; ;}
    break;

  case 79:
#line 865 "GetDP.y"
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

  case 80:
#line 877 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 81:
#line 887 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-3].d ; (yyvsp[-3].d<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-3].d<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 82:
#line 896 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || (yyvsp[-4].i<(int)yyvsp[-2].d && (int)yyvsp[0].d<0) || (yyvsp[-4].i>(int)yyvsp[-2].d && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", yyvsp[-4].i, (int)yyvsp[-2].d, (int)yyvsp[0].d) ;
	List_Add(ListOfInt_L, &(yyvsp[-4].i)) ;
      }
      else
	for(j=yyvsp[-4].i ; ((int)yyvsp[0].d>0)?(j<=yyvsp[-2].d):(j>=yyvsp[-2].d) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 83:
#line 911 "GetDP.y"
    { 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!(int)yyvsp[0].d || ((int)yyvsp[-5].d<(int)yyvsp[-2].d && (int)yyvsp[0].d<0) || ((int)yyvsp[-5].d>(int)yyvsp[-2].d && (int)yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", (int)yyvsp[-5].d, (int)yyvsp[-2].d, (int)yyvsp[0].d) ;
	 i = (int)yyvsp[-5].d ; List_Add(ListOfInt_L, &i) ;
      }
      else
	for(j=(int)yyvsp[-5].d ; ((int)yyvsp[0].d>0)?(j<=(int)yyvsp[-2].d):(j>=(int)yyvsp[-2].d) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 84:
#line 925 "GetDP.y"
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

  case 85:
#line 959 "GetDP.y"
    {
      Flag_MultipleIndex = 1 ;
      List_Reset(ListOfInitialList0_L) ;
      yyval.l = ListOfInitialList0_L ;
      for (k = 1 ; k <= Nbr_Index ; k++) {
	sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr, fcmp_Group_Name)) < 0 ) {
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

  case 87:
#line 983 "GetDP.y"
    { if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;}
    break;

  case 88:
#line 993 "GetDP.y"
    { 
      for (k = 0 ; k < (int)yyvsp[-1].d ; k++) {
	sprintf(tmpstr, "%s_%d_", yyvsp[-3].c, k+1) ;
	if ( (i = List_ISearchSeq(Problem_S.Group, tmpstr,
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

  case 91:
#line 1015 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].d ; ;}
    break;

  case 92:
#line 1020 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 93:
#line 1021 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 94:
#line 1028 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].d ; ;}
    break;

  case 98:
#line 1048 "GetDP.y"
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

  case 99:
#line 1068 "GetDP.y"
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

  case 103:
#line 1121 "GetDP.y"
    {
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;}
    break;

  case 104:
#line 1141 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 105:
#line 1147 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;}
    break;

  case 106:
#line 1153 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 107:
#line 1156 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 108:
#line 1163 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 110:
#line 1174 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 111:
#line 1177 "GetDP.y"
    { List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 112:
#line 1183 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 113:
#line 1187 "GetDP.y"
    { yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 115:
#line 1199 "GetDP.y"
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

  case 116:
#line 1212 "GetDP.y"
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

  case 117:
#line 1226 "GetDP.y"
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

  case 118:
#line 1241 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1247 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1253 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1259 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1265 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1271 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1277 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1283 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1289 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1295 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1301 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1307 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1313 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1319 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1325 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 133:
#line 1331 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 134:
#line 1337 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 135:
#line 1344 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 137:
#line 1352 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 139:
#line 1365 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 140:
#line 1371 "GetDP.y"
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

  case 141:
#line 1445 "GetDP.y"
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

  case 142:
#line 1479 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 143:
#line 1488 "GetDP.y"
    { 
      if(yyvsp[0].i!=1 && yyvsp[0].i!=3 && yyvsp[0].i!=4)
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", yyvsp[0].i) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = yyvsp[0].i ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[-1].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 144:
#line 1500 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 145:
#line 1502 "GetDP.y"
    { WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;}
    break;

  case 146:
#line 1514 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 147:
#line 1516 "GetDP.y"
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

  case 148:
#line 1528 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 149:
#line 1530 "GetDP.y"
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

  case 150:
#line 1544 "GetDP.y"
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

  case 151:
#line 1556 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 152:
#line 1562 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 153:
#line 1568 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 154:
#line 1570 "GetDP.y"
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

  case 155:
#line 1599 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CAST ;
      WholeQuantity_S.Case.Cast.WholeQuantity = yyvsp[-1].l ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-4].c,
			       fcmp_DefineQuantity_Name)) < 0) {
	if (!strcmp(yyvsp[-4].c, "Real"))
	  WholeQuantity_S.Case.Cast.NbrHar = 1 ;
	else if (!strcmp(yyvsp[-4].c, "Complex"))
	  WholeQuantity_S.Case.Cast.NbrHar = 2 ;
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

  case 156:
#line 1625 "GetDP.y"
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

  case 157:
#line 1638 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1644 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1651 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1657 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 161:
#line 1664 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 162:
#line 1671 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 163:
#line 1682 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 164:
#line 1683 "GetDP.y"
    { yyval.i = 0 ; ;}
    break;

  case 165:
#line 1684 "GetDP.y"
    { yyval.i = yyvsp[-1].i ; ;}
    break;

  case 166:
#line 1689 "GetDP.y"
    { yyval.i = 1 ; ;}
    break;

  case 167:
#line 1690 "GetDP.y"
    { yyval.i = yyvsp[-2].i + 1 ; ;}
    break;

  case 168:
#line 1696 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 169:
#line 1699 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 170:
#line 1702 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &d) ;
    ;}
    break;

  case 171:
#line 1718 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 172:
#line 1723 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 173:
#line 1730 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 175:
#line 1739 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;}
    break;

  case 176:
#line 1744 "GetDP.y"
    { JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;}
    break;

  case 177:
#line 1751 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 178:
#line 1754 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;}
    break;

  case 179:
#line 1761 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 181:
#line 1771 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;}
    break;

  case 182:
#line 1774 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 183:
#line 1777 "GetDP.y"
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

  case 184:
#line 1815 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 185:
#line 1821 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 186:
#line 1828 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 188:
#line 1841 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 189:
#line 1848 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;}
    break;

  case 190:
#line 1851 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;}
    break;

  case 191:
#line 1858 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 192:
#line 1861 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;}
    break;

  case 193:
#line 1868 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 195:
#line 1880 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 196:
#line 1890 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 197:
#line 1900 "GetDP.y"
    { IntegrationCase_S.Case = yyvsp[-1].l ; ;}
    break;

  case 198:
#line 1907 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 199:
#line 1910 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;}
    break;

  case 200:
#line 1917 "GetDP.y"
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;}
    break;

  case 202:
#line 1933 "GetDP.y"
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

  case 203:
#line 1981 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 204:
#line 1984 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 205:
#line 1987 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 206:
#line 1990 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 207:
#line 1993 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;}
    break;

  case 208:
#line 2004 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 210:
#line 2014 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Constraint, &Constraint_S) ;
      else {
	Save_Name = strsave(Constraint_S.Name) ;  Free(Constraint_S.Name) ;
	if (List_Nbr(ListOfConstraintPerRegion))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				       tmpstr, fcmp_Constraint_Name) ;
	    Constraint_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfConstraintPerRegion, k,
		      &Constraint_S.ConstraintPerRegion) ;
	    List_Add(Problem_S.Constraint, &Constraint_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 213:
#line 2041 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 215:
#line 2055 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;}
    break;

  case 216:
#line 2061 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 tmpstr, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;}
    break;

  case 217:
#line 2068 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 218:
#line 2077 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;}
    break;

  case 219:
#line 2080 "GetDP.y"
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

  case 220:
#line 2102 "GetDP.y"
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

  case 221:
#line 2117 "GetDP.y"
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

  case 222:
#line 2137 "GetDP.y"
    { 
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 223:
#line 2146 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 225:
#line 2160 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 226:
#line 2170 "GetDP.y"
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

  case 227:
#line 2195 "GetDP.y"
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

  case 228:
#line 2220 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;}
    break;

  case 229:
#line 2225 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 230:
#line 2233 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2241 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2250 "GetDP.y"
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

  case 233:
#line 2268 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2277 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2285 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2293 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 237:
#line 2303 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 238:
#line 2313 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 239:
#line 2323 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 240:
#line 2343 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 242:
#line 2354 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
      else {
	Save_Name = strsave(FunctionSpace_S.Name) ;  Free(FunctionSpace_S.Name) ;
	if (List_Nbr(ListOfBasisFunction))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				       tmpstr, fcmp_FunctionSpace_Name) ;
	    FunctionSpace_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfBasisFunction , k, &FunctionSpace_S.BasisFunction) ;
	    if (List_Nbr(ListOfConstraintInFS))
	      List_Read(ListOfConstraintInFS, k, &FunctionSpace_S.Constraint) ;
	    List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 245:
#line 2383 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 247:
#line 2396 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;}
    break;

  case 248:
#line 2402 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 tmpstr, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;}
    break;

  case 249:
#line 2409 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 250:
#line 2418 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;}
    break;

  case 251:
#line 2421 "GetDP.y"
    { FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;}
    break;

  case 252:
#line 2424 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;}
    break;

  case 253:
#line 2427 "GetDP.y"
    { FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;}
    break;

  case 254:
#line 2434 "GetDP.y"
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

  case 255:
#line 2450 "GetDP.y"
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

  case 256:
#line 2495 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 257:
#line 2504 "GetDP.y"
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

  case 259:
#line 2525 "GetDP.y"
    { BasisFunction_S.Name = yyvsp[-1].c ; ;}
    break;

  case 260:
#line 2528 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 261:
#line 2533 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;}
    break;

  case 262:
#line 2538 "GetDP.y"
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

  case 263:
#line 2552 "GetDP.y"
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

  case 264:
#line 2572 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 265:
#line 2577 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 266:
#line 2582 "GetDP.y"
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

  case 267:
#line 2606 "GetDP.y"
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
		  vyyerror("Bad correspondance between Group and Entity (elements differ)") ;
		  break ;
		}
	    }
	    else if (List_Nbr(Group_S.InitialList) != 0 ||
		     GlobalBasisFunction_S.EntityIndex != -1)
	      vyyerror("Bad correspondance between Group and Entity (#BF %d, #Global %d)",
		       List_Nbr(BasisFunction_S.GlobalBasisFunction),
		       List_Nbr(Group_S.InitialList)) ;
	  }
	  else  vyyerror("Bad correspondance between Group and Entity (Entity must be Global)") ;
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

  case 269:
#line 2668 "GetDP.y"
    { 
      Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; 
    ;}
    break;

  case 270:
#line 2672 "GetDP.y"
    {
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;}
    break;

  case 271:
#line 2680 "GetDP.y"
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

	sprintf(tmpstr, "%s_%d_", yyvsp[-12].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) < 0)
	  vyyerror("Unknown Formulation: %s {%d}", yyvsp[-12].c, k+1) ;
	else {
	  GlobalBasisFunction_S.FormulationIndex = i ;

	  sprintf(tmpstr, "%s_%d_", yyvsp[-3].c, k+1) ;
	  if ((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
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

  case 272:
#line 2745 "GetDP.y"
    { 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 273:
#line 2751 "GetDP.y"
    { 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;}
    break;

  case 274:
#line 2760 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 276:
#line 2771 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 277:
#line 2778 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 278:
#line 2781 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 279:
#line 2788 "GetDP.y"
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

  case 280:
#line 2804 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 281:
#line 2810 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 282:
#line 2813 "GetDP.y"
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

  case 283:
#line 2832 "GetDP.y"
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

  case 284:
#line 2844 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 285:
#line 2851 "GetDP.y"
    { 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 286:
#line 2856 "GetDP.y"
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

  case 287:
#line 2871 "GetDP.y"
    { 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 288:
#line 2877 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;}
    break;

  case 289:
#line 2887 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 291:
#line 2899 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 292:
#line 2906 "GetDP.y"
    { 
      GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 293:
#line 2917 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 294:
#line 2931 "GetDP.y"
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

  case 295:
#line 2946 "GetDP.y"
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

  case 296:
#line 3015 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 297:
#line 3024 "GetDP.y"
    { 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;}
    break;

  case 299:
#line 3040 "GetDP.y"
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

  case 300:
#line 3073 "GetDP.y"
    { Type_Function = yyvsp[-1].i ; ;}
    break;

  case 301:
#line 3076 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; ;}
    break;

  case 302:
#line 3079 "GetDP.y"
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
	    sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Constraint, tmpstr,
				     fcmp_Constraint_Name)) < 0)
	      vyyerror("Unknown Constraint: %s {%d}", tmpstr, k+1) ;
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

  case 303:
#line 3125 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 305:
#line 3135 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Formulation, &Formulation_S) ;
      else {
	Save_Name = strsave(Formulation_S.Name) ;  Free(Formulation_S.Name) ;
	if (List_Nbr(ListOfDefineQuantity))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       tmpstr, fcmp_Formulation_Name) ;
	    Formulation_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfDefineQuantity, k, &Formulation_S.DefineQuantity) ;
	    List_Read(ListOfEquationTerm  , k, &Formulation_S.Equation      ) ;
	    List_Add(Problem_S.Formulation, &Formulation_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 308:
#line 3163 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 310:
#line 3175 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;}
    break;

  case 311:
#line 3181 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 tmpstr, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;}
    break;

  case 312:
#line 3188 "GetDP.y"
    { Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 314:
#line 3200 "GetDP.y"
    { Formulation_S.Equation = yyvsp[-1].l ; ;}
    break;

  case 315:
#line 3206 "GetDP.y"
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

  case 316:
#line 3220 "GetDP.y"
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

  case 318:
#line 3240 "GetDP.y"
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

  case 320:
#line 3263 "GetDP.y"
    { DefineQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 321:
#line 3266 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 322:
#line 3270 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 323:
#line 3273 "GetDP.y"
    { DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 324:
#line 3283 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;}
    break;

  case 325:
#line 3287 "GetDP.y"
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

  case 326:
#line 3300 "GetDP.y"
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

  case 327:
#line 3327 "GetDP.y"
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
	    sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, tmpstr,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s {%d}", tmpstr, k+1) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	}
      }
    ;}
    break;

  case 328:
#line 3368 "GetDP.y"
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

  case 329:
#line 3392 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;}
    break;

  case 330:
#line 3397 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 331:
#line 3403 "GetDP.y"
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

  case 332:
#line 3714 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;}
    break;

  case 333:
#line 3719 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 334:
#line 3728 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 335:
#line 3737 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 336:
#line 3746 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;}
    break;

  case 338:
#line 3754 "GetDP.y"
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

  case 339:
#line 3794 "GetDP.y"
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

  case 340:
#line 3809 "GetDP.y"
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

  case 341:
#line 3833 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 342:
#line 3838 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 343:
#line 3847 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 344:
#line 3850 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 345:
#line 3853 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 346:
#line 3856 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 347:
#line 3867 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 349:
#line 3878 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 350:
#line 3888 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 351:
#line 3898 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 352:
#line 3912 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 354:
#line 3924 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;}
    break;

  case 355:
#line 3926 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;}
    break;

  case 356:
#line 3928 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;}
    break;

  case 357:
#line 3930 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;}
    break;

  case 358:
#line 3938 "GetDP.y"
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

  case 360:
#line 3963 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 361:
#line 3971 "GetDP.y"
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

  case 362:
#line 4050 "GetDP.y"
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

  case 363:
#line 4096 "GetDP.y"
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

  case 364:
#line 4120 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 365:
#line 4129 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 366:
#line 4138 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 367:
#line 4143 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 368:
#line 4152 "GetDP.y"
    { if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;}
    break;

  case 369:
#line 4163 "GetDP.y"
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

  case 371:
#line 4192 "GetDP.y"
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

  case 372:
#line 4216 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 373:
#line 4224 "GetDP.y"
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

  case 374:
#line 4279 "GetDP.y"
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

  case 375:
#line 4296 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 376:
#line 4297 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 377:
#line 4298 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 378:
#line 4299 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 379:
#line 4300 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 380:
#line 4301 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 381:
#line 4302 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 382:
#line 4303 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 383:
#line 4310 "GetDP.y"
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

  case 384:
#line 4331 "GetDP.y"
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

  case 385:
#line 4355 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 387:
#line 4365 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.Resolution, &Resolution_S) ;
      else {
	Save_Name = strsave(Resolution_S.Name) ;  Free(Resolution_S.Name) ;
	if (List_Nbr(ListOfDefineSystem))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				       tmpstr, fcmp_Resolution_Name) ;
	    Resolution_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfDefineSystem, k, &Resolution_S.DefineSystem) ;
	    List_Add(Problem_S.Resolution, &Resolution_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 390:
#line 4392 "GetDP.y"
    { Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 392:
#line 4404 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 393:
#line 4411 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 tmpstr, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;}
    break;

  case 394:
#line 4418 "GetDP.y"
    { Resolution_S.DefineSystem = yyvsp[-1].l ; ;}
    break;

  case 395:
#line 4421 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 396:
#line 4423 "GetDP.y"
    { Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;}
    break;

  case 398:
#line 4431 "GetDP.y"
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

  case 399:
#line 4446 "GetDP.y"
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

  case 400:
#line 4461 "GetDP.y"
    {
       yyval.l = yyvsp[-1].l ;
     ;}
    break;

  case 401:
#line 4471 "GetDP.y"
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

  case 403:
#line 4491 "GetDP.y"
    { DefineSystem_S.Name = yyvsp[-1].c ; ;}
    break;

  case 404:
#line 4494 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 405:
#line 4503 "GetDP.y"
    { DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;}
    break;

  case 406:
#line 4506 "GetDP.y"
    {
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;}
    break;

  case 407:
#line 4511 "GetDP.y"
    { 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;}
    break;

  case 408:
#line 4516 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;}
    break;

  case 409:
#line 4521 "GetDP.y"
    { DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 410:
#line 4526 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;}
    break;

  case 412:
#line 4537 "GetDP.y"
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
	    sprintf(tmpstr, "%s_%d_", yyvsp[-1].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				     fcmp_Formulation_Name)) < 0)
	      vyyerror("Unknown Formulation: %s {%d}", yyvsp[-1].c, k+1) ;
	    else  List_Add(DefineSystem_S.FormulationIndex, &i) ;
	  }
	}
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 413:
#line 4574 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 414:
#line 4581 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 415:
#line 4584 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 416:
#line 4596 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 417:
#line 4606 "GetDP.y"
    { yyval.l = yyvsp[-1].l ;  ;}
    break;

  case 418:
#line 4612 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 419:
#line 4615 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 420:
#line 4627 "GetDP.y"
    { 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 421:
#line 4635 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 422:
#line 4648 "GetDP.y"
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

  case 423:
#line 4670 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-1].i ;
    ;}
    break;

  case 424:
#line 4677 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 425:
#line 4683 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 426:
#line 4689 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 427:
#line 4695 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 428:
#line 4703 "GetDP.y"
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

  case 429:
#line 4725 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-2].i ;
    ;}
    break;

  case 430:
#line 4732 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 431:
#line 4738 "GetDP.y"
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

  case 432:
#line 4749 "GetDP.y"
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

  case 433:
#line 4760 "GetDP.y"
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

  case 434:
#line 4773 "GetDP.y"
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

  case 435:
#line 4788 "GetDP.y"
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

  case 436:
#line 4803 "GetDP.y"
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

  case 437:
#line 4818 "GetDP.y"
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

  case 438:
#line 4838 "GetDP.y"
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

  case 439:
#line 4859 "GetDP.y"
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

  case 440:
#line 4871 "GetDP.y"
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

  case 441:
#line 4891 "GetDP.y"
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

  case 442:
#line 4908 "GetDP.y"
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

  case 443:
#line 4927 "GetDP.y"
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
	List_Read(yyvsp[-4].l, i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      List_Delete(yyvsp[-4].l);
      Operation_P->Case.Lanczos.Shift = yyvsp[-2].d ;
    ;}
    break;

  case 444:
#line 4948 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)yyvsp[-6].d ;
      Operation_P->Case.EigenSolve.Shift_r = yyvsp[-4].d ;
      Operation_P->Case.EigenSolve.Shift_i = yyvsp[-2].d ;
    ;}
    break;

  case 445:
#line 4962 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EIGENSOLVEJAC ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.EigenSolve.NumEigenvalues = (int)yyvsp[-6].d ;
      Operation_P->Case.EigenSolve.Shift_r = yyvsp[-4].d ;
      Operation_P->Case.EigenSolve.Shift_i = yyvsp[-2].d ;
    ;}
    break;

  case 446:
#line 4976 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)yyvsp[-2].i ;
    ;}
    break;

  case 447:
#line 4984 "GetDP.y"
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
	List_Read(yyvsp[-6].l, i, &d) ;
	j = (int)d ;
	List_Add(Operation_P->Case.Perturbation.Save, &j) ;
      }
      List_Delete(yyvsp[-6].l);
      Operation_P->Case.Perturbation.Shift = yyvsp[-4].d ;
      Operation_P->Case.Perturbation.PertFreq = (int)yyvsp[-2].d ;
    ;}
    break;

  case 448:
#line 5018 "GetDP.y"
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

  case 449:
#line 5031 "GetDP.y"
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

  case 450:
#line 5045 "GetDP.y"
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

  case 451:
#line 5058 "GetDP.y"
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

  case 452:
#line 5070 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 454:
#line 5079 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 456:
#line 5088 "GetDP.y"
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

  case 457:
#line 5099 "GetDP.y"
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

  case 458:
#line 5111 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;}
    break;

  case 459:
#line 5121 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = yyvsp[-2].c ; 
    ;}
    break;

  case 460:
#line 5129 "GetDP.y"
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

  case 461:
#line 5142 "GetDP.y"
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

  case 462:
#line 5155 "GetDP.y"
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

  case 463:
#line 5169 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 464:
#line 5179 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 465:
#line 5189 "GetDP.y"
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

  case 466:
#line 5203 "GetDP.y"
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

  case 467:
#line 5217 "GetDP.y"
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

  case 468:
#line 5236 "GetDP.y"
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

  case 469:
#line 5254 "GetDP.y"
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

  case 470:
#line 5265 "GetDP.y"
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

  case 471:
#line 5280 "GetDP.y"
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

  case 472:
#line 5295 "GetDP.y"
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

  case 473:
#line 5310 "GetDP.y"
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

  case 474:
#line 5325 "GetDP.y"
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

  case 475:
#line 5340 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 476:
#line 5351 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 477:
#line 5356 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 478:
#line 5366 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 480:
#line 5376 "GetDP.y"
    { Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;}
    break;

  case 481:
#line 5379 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 482:
#line 5389 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 483:
#line 5404 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 485:
#line 5420 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;}
    break;

  case 486:
#line 5424 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 487:
#line 5428 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 488:
#line 5432 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;}
    break;

  case 489:
#line 5437 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 490:
#line 5448 "GetDP.y"
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

  case 492:
#line 5465 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;}
    break;

  case 493:
#line 5469 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 494:
#line 5473 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 495:
#line 5477 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;}
    break;

  case 496:
#line 5481 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;}
    break;

  case 497:
#line 5486 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 498:
#line 5497 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 500:
#line 5512 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 501:
#line 5516 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;}
    break;

  case 502:
#line 5520 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;}
    break;

  case 503:
#line 5524 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 504:
#line 5528 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 505:
#line 5539 "GetDP.y"
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

  case 507:
#line 5557 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 508:
#line 5561 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;}
    break;

  case 509:
#line 5565 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;}
    break;

  case 510:
#line 5569 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 511:
#line 5574 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 512:
#line 5584 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;}
    break;

  case 513:
#line 5590 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 514:
#line 5596 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;}
    break;

  case 515:
#line 5606 "GetDP.y"
    { yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 516:
#line 5609 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;}
    break;

  case 517:
#line 5614 "GetDP.y"
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

  case 519:
#line 5632 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 520:
#line 5642 "GetDP.y"
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

  case 521:
#line 5671 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;}
    break;

  case 522:
#line 5674 "GetDP.y"
    { ChangeOfState_S.Criterion = yyvsp[-1].d ; ;}
    break;

  case 523:
#line 5677 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;}
    break;

  case 524:
#line 5685 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 525:
#line 5702 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 527:
#line 5714 "GetDP.y"
    {
      if (!Nbr_Index)
	List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
      else {
	Save_Name = strsave(PostProcessing_S.Name) ;  Free(PostProcessing_S.Name) ;
	if (List_Nbr(ListOfFormulation))
	  for (k = 0 ; k < Nbr_Index ; k++) {
	    sprintf(tmpstr, "%s_%d_", Save_Name, k+1) ;
	    Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				       tmpstr, fcmp_Formulation_Name) ;
	    PostProcessing_S.Name = strsave(tmpstr) ;
	    List_Read(ListOfFormulation, k, &PostProcessing_S.FormulationIndex) ;
	    List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
	  }
	Free(Save_Name) ;
      }
    ;}
    break;

  case 530:
#line 5739 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;}
    break;

  case 532:
#line 5753 "GetDP.y"
    { Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 533:
#line 5760 "GetDP.y"
    { Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 tmpstr, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;}
    break;

  case 534:
#line 5768 "GetDP.y"
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
	    sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, k+1) ;
	    if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
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

  case 535:
#line 5814 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;}
    break;

  case 536:
#line 5819 "GetDP.y"
    { PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;}
    break;

  case 537:
#line 5825 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 538:
#line 5828 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;}
    break;

  case 539:
#line 5831 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 540:
#line 5833 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 541:
#line 5839 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 543:
#line 5850 "GetDP.y"
    { PostQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 544:
#line 5853 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;}
    break;

  case 545:
#line 5859 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 546:
#line 5864 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;}
    break;

  case 547:
#line 5870 "GetDP.y"
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

  case 548:
#line 5884 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 550:
#line 5898 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 551:
#line 5905 "GetDP.y"
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

  case 552:
#line 5933 "GetDP.y"
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

  case 553:
#line 5943 "GetDP.y"
    { Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;}
    break;

  case 554:
#line 5944 "GetDP.y"
    { 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;}
    break;

  case 555:
#line 5950 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 556:
#line 5959 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 557:
#line 5976 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 559:
#line 5988 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 562:
#line 5997 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 564:
#line 6009 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 565:
#line 6016 "GetDP.y"
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

  case 566:
#line 6028 "GetDP.y"
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

  case 567:
#line 6039 "GetDP.y"
    { 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;}
    break;

  case 568:
#line 6044 "GetDP.y"
    { PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;}
    break;

  case 569:
#line 6050 "GetDP.y"
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

  case 570:
#line 6067 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 571:
#line 6077 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 572:
#line 6080 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 573:
#line 6084 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 574:
#line 6097 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 575:
#line 6102 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 576:
#line 6107 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-5].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = yyvsp[-3].i ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 577:
#line 6116 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-8].c ;
      PostSubOperation_S.Case.Expression.String2 = yyvsp[-4].c ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 578:
#line 6125 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-3].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 579:
#line 6134 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 580:
#line 6140 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;}
    break;

  case 581:
#line 6145 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 582:
#line 6154 "GetDP.y"
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

  case 583:
#line 6166 "GetDP.y"
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

  case 584:
#line 6189 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 585:
#line 6190 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 586:
#line 6191 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 587:
#line 6192 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 588:
#line 6198 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 589:
#line 6200 "GetDP.y"
    { yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;}
    break;

  case 590:
#line 6206 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 591:
#line 6212 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;}
    break;

  case 592:
#line 6219 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;}
    break;

  case 593:
#line 6228 "GetDP.y"
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

  case 594:
#line 6250 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;}
    break;

  case 595:
#line 6258 "GetDP.y"
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

  case 596:
#line 6269 "GetDP.y"
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

  case 597:
#line 6283 "GetDP.y"
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

  case 598:
#line 6304 "GetDP.y"
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

  case 599:
#line 6331 "GetDP.y"
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

  case 600:
#line 6362 "GetDP.y"
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

  case 601:
#line 6382 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
      PostSubOperation_S.Dimension = _ALL ;
      PostSubOperation_S.Adapt = 0 ;
      PostSubOperation_S.Target = -1. ;
      PostSubOperation_S.HarmonicToTime = 1 ;
      PostSubOperation_S.FrozenTimeStepList = 0;
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
      PostSubOperation_S.Legend = LEGEND_NONE;
      PostSubOperation_S.LegendPosition[0] = 0.;
      PostSubOperation_S.LegendPosition[1] = 0.;
      PostSubOperation_S.LegendPosition[2] = 0.;
      PostSubOperation_S.EvaluationPoints = NULL ;
      PostSubOperation_S.StoreInRegister = -1 ;
      PostSubOperation_S.LastTimeStepOnly = 0;
    ;}
    break;

  case 603:
#line 6417 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;}
    break;

  case 604:
#line 6424 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;}
    break;

  case 605:
#line 6431 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;}
    break;

  case 606:
#line 6438 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;}
    break;

  case 607:
#line 6442 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 608:
#line 6446 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 609:
#line 6450 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;}
    break;

  case 610:
#line 6454 "GetDP.y"
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

  case 611:
#line 6464 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 612:
#line 6469 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 613:
#line 6474 "GetDP.y"
    {
      PostSubOperation_S.FormatChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FormatTag_L  = List_Copy(ListOfInt_L) ;

      printf("--> string: \"");
      for(i=0;i<List_Nbr(PostSubOperation_S.FormatChar_L);i++){
	List_Read(PostSubOperation_S.FormatChar_L, i, &tmpstr[0]) ;
	printf("%c", tmpstr[0]);
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

  case 614:
#line 6494 "GetDP.y"
    { 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 615:
#line 6501 "GetDP.y"
    { 
      PostSubOperation_S.FrozenTimeStepList = 1;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 616:
#line 6511 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 617:
#line 6520 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 618:
#line 6529 "GetDP.y"
    { 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 619:
#line 6536 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 620:
#line 6544 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;}
    break;

  case 621:
#line 6548 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 622:
#line 6557 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 623:
#line 6561 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 624:
#line 6565 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 625:
#line 6573 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;}
    break;

  case 626:
#line 6579 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 627:
#line 6583 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 628:
#line 6591 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 629:
#line 6598 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 630:
#line 6606 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 631:
#line 6613 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 632:
#line 6621 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 633:
#line 6628 "GetDP.y"
    { 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;}
    break;

  case 634:
#line 6636 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;}
    break;

  case 635:
#line 6640 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 636:
#line 6649 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 637:
#line 6655 "GetDP.y"
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
	  strncpy(tmpstr, &yyvsp[0].c[j], i-j); 
	  tmpstr[i-j] = '\0'; 
	  k = Get_DefineForString(PostSubOperation_FormatTag, tmpstr, &FlagError) ;
	  if (FlagError){
	    vyyerror("Unknown Tag in Format: %s", tmpstr);
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

  case 638:
#line 6705 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;}
    break;

  case 639:
#line 6720 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;}
    break;

  case 640:
#line 6736 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-6].c ;      
      Constant_S.Name = yyvsp[-6].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-3].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;}
    break;

  case 641:
#line 6755 "GetDP.y"
    {
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = yyvsp[-8].c ;      
      Constant_S.Name = yyvsp[-8].c ; 
      Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-5].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
      fgetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;}
    break;

  case 642:
#line 6775 "GetDP.y"
    {
      if(ImbricatedLoop <= 0){
	vyyerror("Invalid For/EndFor loop");
	ImbricatedLoop = 0;
      }
      else{
	x0 = LoopControlVariablesTab[ImbricatedLoop-1][0];
	x1 = LoopControlVariablesTab[ImbricatedLoop-1][1];
	step = LoopControlVariablesTab[ImbricatedLoop-1][2];
	do_next = (step > 0.) ? (x0+step <= x1) : (x0+step >= x1);
	if(do_next){
	  LoopControlVariablesTab[ImbricatedLoop-1][0] +=
	    LoopControlVariablesTab[ImbricatedLoop-1][2];
	  if(strlen(LoopControlVariablesNameTab[ImbricatedLoop-1])){
	    Constant_S.Name = LoopControlVariablesNameTab[ImbricatedLoop-1] ; 
	    Constant_S.Type = VAR_FLOAT ;
	    Constant_S.Value.Float = LoopControlVariablesTab[ImbricatedLoop-1][0] ;
	    if ((i=List_ISearchSeq(ConstantTable_L, &Constant_S, fcmp_Constant))<0) 
	      vyyerror("Unknown For/EndFor loop control variable %s", Constant_S.Name) ;
	    List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;      
	  }
	  fsetpos(yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	  hack_endfor2();
	  /*	  hack_endfor_printf();*/
	  yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
	}
	else{
	  ImbricatedLoop--;
	  /* There is a problem with line numbers when EndFor is
	     directly followed by '\n' (i.e., mostly on Unix since
	     there is usually a '\t' on Windows). After a For body
	     that is executed more than once, the line number is too
	     large by one. This can cause problems with Includes
	     afterwards. I didn't have time to investigate further
	     (one hack is to add something after EndFor on the same
	     line; the real solution is to change the way we deal with
	     includes and replace the line number stuff with
	     fgetpos/fsetpos), so I've added the following temporary
	     hack: */
	  /*
	    If hack_endfor() is used, it is OK for a loop executed more than once
	    but not anymore for a single execution.
	    fsetpos() seems to position the file just after the For but with one
	    additional character (the one after EndFor) at the beginning.
	    I do not understand why there is such a mixing of two separate data.
	    I then added hack_endfor2() to suppress the useless additional character.
	    Patrick
	  */
	  /*
	  hack_endfor();
	  */
	}
      }
    ;}
    break;

  case 643:
#line 6831 "GetDP.y"
    {
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;}
    break;

  case 644:
#line 6835 "GetDP.y"
    {
    ;}
    break;

  case 646:
#line 6850 "GetDP.y"
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

  case 647:
#line 6865 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 648:
#line 6871 "GetDP.y"
    { Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 649:
#line 6877 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 650:
#line 6883 "GetDP.y"
    { Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen(yyvsp[-2].c, "r"))) Msg(ERROR, "Unable to open file '%s'", yyvsp[-2].c);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &d) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &d) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 651:
#line 6894 "GetDP.y"
    {
      Msg(DIRECT, yyvsp[-2].c);
    ;}
    break;

  case 652:
#line 6899 "GetDP.y"
    {
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstr);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstr);
      List_Delete(yyvsp[-2].l);
    ;}
    break;

  case 653:
#line 6911 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 654:
#line 6921 "GetDP.y"
    {
      Msg(INFO2, "[<return>=%g] ? ",yyvsp[-2].d);
      fgets(tmpstr, sizeof(tmpstr), stdin);

      if(!strcmp(tmpstr,"\n"))
	Constant_S.Value.Float = yyvsp[-2].d;
      else
	Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-5].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 656:
#line 6940 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 657:
#line 6946 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 658:
#line 6952 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 659:
#line 6963 "GetDP.y"
    { yyval.c = "Exp";    ;}
    break;

  case 660:
#line 6964 "GetDP.y"
    { yyval.c = "Log";    ;}
    break;

  case 661:
#line 6965 "GetDP.y"
    { yyval.c = "Log10";  ;}
    break;

  case 662:
#line 6966 "GetDP.y"
    { yyval.c = "Sqrt";   ;}
    break;

  case 663:
#line 6967 "GetDP.y"
    { yyval.c = "Sin";    ;}
    break;

  case 664:
#line 6968 "GetDP.y"
    { yyval.c = "Asin";   ;}
    break;

  case 665:
#line 6969 "GetDP.y"
    { yyval.c = "Cos";    ;}
    break;

  case 666:
#line 6970 "GetDP.y"
    { yyval.c = "Acos";   ;}
    break;

  case 667:
#line 6971 "GetDP.y"
    { yyval.c = "Tan";    ;}
    break;

  case 668:
#line 6972 "GetDP.y"
    { yyval.c = "Atan";   ;}
    break;

  case 669:
#line 6973 "GetDP.y"
    { yyval.c = "Atan2";  ;}
    break;

  case 670:
#line 6974 "GetDP.y"
    { yyval.c = "Sinh";   ;}
    break;

  case 671:
#line 6975 "GetDP.y"
    { yyval.c = "Cosh";   ;}
    break;

  case 672:
#line 6976 "GetDP.y"
    { yyval.c = "Tanh";   ;}
    break;

  case 673:
#line 6977 "GetDP.y"
    { yyval.c = "Fabs";   ;}
    break;

  case 674:
#line 6978 "GetDP.y"
    { yyval.c = "Floor";  ;}
    break;

  case 675:
#line 6979 "GetDP.y"
    { yyval.c = "Ceil";   ;}
    break;

  case 676:
#line 6980 "GetDP.y"
    { yyval.c = "Fmod";   ;}
    break;

  case 677:
#line 6981 "GetDP.y"
    { yyval.c = "Modulo"; ;}
    break;

  case 678:
#line 6982 "GetDP.y"
    { yyval.c = "Hypot";  ;}
    break;

  case 679:
#line 6983 "GetDP.y"
    { yyval.c = yyvsp[0].c;       ;}
    break;

  case 680:
#line 6987 "GetDP.y"
    { yyval.d = yyvsp[0].d ;          ;}
    break;

  case 681:
#line 6988 "GetDP.y"
    { yyval.d = yyvsp[-1].d ;          ;}
    break;

  case 682:
#line 6989 "GetDP.y"
    { yyval.d = -yyvsp[0].d ;         ;}
    break;

  case 683:
#line 6990 "GetDP.y"
    { yyval.d = !yyvsp[0].d ;         ;}
    break;

  case 684:
#line 6991 "GetDP.y"
    { yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;}
    break;

  case 685:
#line 6992 "GetDP.y"
    { yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;}
    break;

  case 686:
#line 6993 "GetDP.y"
    { yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;}
    break;

  case 687:
#line 6994 "GetDP.y"
    { yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;}
    break;

  case 688:
#line 6995 "GetDP.y"
    { yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;}
    break;

  case 689:
#line 6996 "GetDP.y"
    { yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;}
    break;

  case 690:
#line 6997 "GetDP.y"
    { yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;}
    break;

  case 691:
#line 6998 "GetDP.y"
    { yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;}
    break;

  case 692:
#line 6999 "GetDP.y"
    { yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;}
    break;

  case 693:
#line 7000 "GetDP.y"
    { yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;}
    break;

  case 694:
#line 7001 "GetDP.y"
    { yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;}
    break;

  case 695:
#line 7002 "GetDP.y"
    { yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;}
    break;

  case 696:
#line 7003 "GetDP.y"
    { yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;}
    break;

  case 697:
#line 7004 "GetDP.y"
    { yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;}
    break;

  case 698:
#line 7005 "GetDP.y"
    { yyval.d = exp(yyvsp[-1].d);      ;}
    break;

  case 699:
#line 7006 "GetDP.y"
    { yyval.d = log(yyvsp[-1].d);      ;}
    break;

  case 700:
#line 7007 "GetDP.y"
    { yyval.d = log10(yyvsp[-1].d);    ;}
    break;

  case 701:
#line 7008 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-1].d);     ;}
    break;

  case 702:
#line 7009 "GetDP.y"
    { yyval.d = sin(yyvsp[-1].d);      ;}
    break;

  case 703:
#line 7010 "GetDP.y"
    { yyval.d = asin(yyvsp[-1].d);     ;}
    break;

  case 704:
#line 7011 "GetDP.y"
    { yyval.d = cos(yyvsp[-1].d);      ;}
    break;

  case 705:
#line 7012 "GetDP.y"
    { yyval.d = acos(yyvsp[-1].d);     ;}
    break;

  case 706:
#line 7013 "GetDP.y"
    { yyval.d = tan(yyvsp[-1].d);      ;}
    break;

  case 707:
#line 7014 "GetDP.y"
    { yyval.d = atan(yyvsp[-1].d);     ;}
    break;

  case 708:
#line 7015 "GetDP.y"
    { yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;}
    break;

  case 709:
#line 7016 "GetDP.y"
    { yyval.d = sinh(yyvsp[-1].d);     ;}
    break;

  case 710:
#line 7017 "GetDP.y"
    { yyval.d = cosh(yyvsp[-1].d);     ;}
    break;

  case 711:
#line 7018 "GetDP.y"
    { yyval.d = tanh(yyvsp[-1].d);     ;}
    break;

  case 712:
#line 7019 "GetDP.y"
    { yyval.d = fabs(yyvsp[-1].d);     ;}
    break;

  case 713:
#line 7020 "GetDP.y"
    { yyval.d = floor(yyvsp[-1].d);    ;}
    break;

  case 714:
#line 7021 "GetDP.y"
    { yyval.d = ceil(yyvsp[-1].d);     ;}
    break;

  case 715:
#line 7022 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 716:
#line 7023 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 717:
#line 7024 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;}
    break;

  case 718:
#line 7028 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;}
    break;

  case 719:
#line 7033 "GetDP.y"
    { yyval.d = yyvsp[0].d ; ;}
    break;

  case 720:
#line 7034 "GetDP.y"
    { yyval.d = (double)yyvsp[0].i ; ;}
    break;

  case 721:
#line 7035 "GetDP.y"
    { yyval.d = 3.1415926535897932 ; ;}
    break;

  case 722:
#line 7036 "GetDP.y"
    { yyval.d = (double)_0D ; ;}
    break;

  case 723:
#line 7037 "GetDP.y"
    { yyval.d = (double)_1D ; ;}
    break;

  case 724:
#line 7038 "GetDP.y"
    { yyval.d = (double)_2D ; ;}
    break;

  case 725:
#line 7039 "GetDP.y"
    { yyval.d = (double)_3D ; ;}
    break;

  case 726:
#line 7041 "GetDP.y"
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

  case 727:
#line 7059 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 728:
#line 7062 "GetDP.y"
    { 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 729:
#line 7068 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 730:
#line 7071 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 731:
#line 7078 "GetDP.y"
    { 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 732:
#line 7084 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 733:
#line 7087 "GetDP.y"
    { List_Add(yyval.l, &(yyvsp[0].d)) ; ;}
    break;

  case 734:
#line 7090 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 735:
#line 7102 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;}
    break;

  case 736:
#line 7108 "GetDP.y"
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

  case 737:
#line 7119 "GetDP.y"
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

  case 738:
#line 7135 "GetDP.y"
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

  case 739:
#line 7157 "GetDP.y"
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

  case 740:
#line 7172 "GetDP.y"
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

  case 741:
#line 7210 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 742:
#line 7218 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 743:
#line 7230 "GetDP.y"
    { 
      sprintf(tmpstr, "_%d_", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;}
    break;

  case 744:
#line 7238 "GetDP.y"
    {
      sprintf(tmpstr, "_%d_", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;}
    break;

  case 745:
#line 7249 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 746:
#line 7252 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 747:
#line 7259 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 748:
#line 7262 "GetDP.y"
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

  case 749:
#line 7277 "GetDP.y"
    {
      yyval.c = yyvsp[0].c ;
    ;}
    break;

  case 750:
#line 7282 "GetDP.y"
    {
      yyval.c = yyvsp[-1].c;
    ;}
    break;

  case 751:
#line 7287 "GetDP.y"
    {
      i = Print_ListOfDouble(yyvsp[-3].c,yyvsp[-1].l,tmpstr);
      if(i<0){
	vyyerror("Too few arguments in Sprintf");
	yyval.c = yyvsp[-3].c;
      }
      else if(i>0){
	vyyerror("Too many arguments (%d) in Sprintf", i);
	yyval.c = yyvsp[-3].c;
      }
      else{
	yyval.c = (char*)Malloc((strlen(tmpstr)+1)*sizeof(char));
	strcpy(yyval.c, tmpstr);
	Free(yyvsp[-3].c);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 752:
#line 7306 "GetDP.y"
    {
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;}
    break;

  case 753:
#line 7316 "GetDP.y"
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
#line 12132 "GetDP.tab.c"

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


#line 7327 "GetDP.y"



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
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Group)) ;
    Group_P->Name = strsave(tmpstr) ;
    break ;
  case 2 :
    sprintf(tmpstr, "%s_%d_", Name, Num_Index) ;
    Group_P->Name = strsave(tmpstr) ;
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
    sprintf(tmpstr, "%s", Name) ;
  else if (Flag_Plus == 1)
    sprintf(tmpstr, "%s_%d_", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(tmpstr, "%s_%d_%d_", Name, Num_Index1,Num_Index2) ;

  Group_P->Name = strsave(tmpstr) ;
  
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

/*  A d d _ E x p r e s s i o n   */

int  Add_Expression(struct Expression * Expression_P,
		    char * Name, int Flag_Plus) {
  int  i ;

  if (!Problem_S.Expression)
    Problem_S.Expression = List_Create(50, 50, sizeof (struct Expression) ) ;

  if (Flag_Plus) {
    sprintf(tmpstr, "_%s_%d", Name, List_Nbr(Problem_S.Expression)) ;
    Expression_P->Name = strsave(tmpstr) ;
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

  /* special case for the Equ part (right of the comma) 
     FIXME: change this when we allow a full WholeQuantity expression
     there */
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


