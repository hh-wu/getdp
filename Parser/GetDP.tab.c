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
     tComma = 467,
     tTimeStep = 468,
     tHarmonicToTime = 469,
     tFormat = 470,
     tHeader = 471,
     tFooter = 472,
     tSkin = 473,
     tSmoothing = 474,
     tTarget = 475,
     tSort = 476,
     tIso = 477,
     tNoNewLine = 478,
     tDecomposeInSimplex = 479,
     tChangeOfValues = 480,
     tTimeLegend = 481,
     tFrequencyLegend = 482,
     tEigenvalueLegend = 483,
     tEvaluationPoints = 484,
     tStore = 485,
     tLastTimeStepOnly = 486,
     tStr = 487,
     tDate = 488,
     tDEF = 489,
     tOR = 490,
     tAND = 491,
     tAPPROXEQUAL = 492,
     tNOTEQUAL = 493,
     tEQUAL = 494,
     tGREATERGREATER = 495,
     tLESSLESS = 496,
     tGREATEROREQUAL = 497,
     tLESSOREQUAL = 498,
     tCROSSPRODUCT = 499,
     UNARYPREC = 500,
     tSHOW = 501
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
#define tComma 467
#define tTimeStep 468
#define tHarmonicToTime 469
#define tFormat 470
#define tHeader 471
#define tFooter 472
#define tSkin 473
#define tSmoothing 474
#define tTarget 475
#define tSort 476
#define tIso 477
#define tNoNewLine 478
#define tDecomposeInSimplex 479
#define tChangeOfValues 480
#define tTimeLegend 481
#define tFrequencyLegend 482
#define tEigenvalueLegend 483
#define tEvaluationPoints 484
#define tStore 485
#define tLastTimeStepOnly 486
#define tStr 487
#define tDate 488
#define tDEF 489
#define tOR 490
#define tAND 491
#define tAPPROXEQUAL 492
#define tNOTEQUAL 493
#define tEQUAL 494
#define tGREATERGREATER 495
#define tLESSLESS 496
#define tGREATEROREQUAL 497
#define tLESSOREQUAL 498
#define tCROSSPRODUCT 499
#define UNARYPREC 500
#define tSHOW 501




/* Copy the first part of user declarations.  */
#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.99 2006-02-17 15:37:23 dular Exp $ */
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

int      Nbr_Index, Flag_MultipleIndex, Flag1 ;
List_T  * ListOfFormulation ;
List_T  * ListOfBasisFunction, * ListOfEntityIndex ;

List_T  * ListOfInt_Lnew ;
int     * ListOfInt_P ;

char     tmpstr[1024] ;

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
#line 184 "GetDP.y"
typedef union YYSTYPE {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 758 "GetDP.tab.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */
#line 770 "GetDP.tab.c"

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
#define YYLAST   6811

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  269
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  191
/* YYNRULES -- Number of rules. */
#define YYNRULES  750
/* YYNRULES -- Number of states. */
#define YYNSTATES  2035

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   501

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   253,     2,   261,   262,   251,     2,     2,
     256,   257,   249,   247,   266,   248,   260,   250,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     241,     2,   242,   235,   267,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   258,     2,   259,   255,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   264,     2,   265,   268,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     236,   237,   238,   239,   240,   243,   244,   245,   246,   252,
     254,   263
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
     145,   149,   150,   153,   154,   157,   162,   168,   174,   180,
     182,   188,   190,   192,   193,   194,   213,   214,   221,   224,
     226,   228,   231,   233,   235,   237,   239,   240,   244,   248,
     250,   252,   256,   257,   261,   266,   268,   272,   276,   280,
     286,   292,   300,   302,   303,   307,   314,   315,   317,   322,
     323,   326,   330,   331,   334,   340,   347,   355,   357,   359,
     360,   364,   369,   374,   375,   378,   379,   383,   385,   389,
     390,   393,   395,   396,   397,   405,   409,   413,   420,   424,
     428,   432,   436,   440,   444,   448,   452,   456,   460,   464,
     468,   472,   476,   479,   482,   485,   489,   491,   495,   498,
     500,   503,   504,   510,   511,   519,   520,   532,   542,   547,
     552,   553,   561,   568,   571,   574,   577,   580,   584,   587,
     591,   595,   598,   602,   604,   608,   609,   613,   620,   621,
     626,   627,   630,   634,   639,   640,   645,   646,   649,   653,
     657,   662,   663,   668,   669,   672,   676,   680,   685,   686,
     691,   692,   695,   699,   703,   708,   709,   714,   715,   718,
     722,   726,   730,   734,   738,   742,   743,   746,   750,   752,
     754,   755,   758,   762,   767,   771,   776,   782,   783,   788,
     791,   792,   795,   799,   803,   807,   811,   815,   819,   827,
     831,   835,   839,   843,   847,   855,   863,   871,   872,   875,
     879,   881,   883,   884,   887,   891,   896,   900,   905,   910,
     915,   920,   921,   926,   929,   930,   933,   937,   941,   946,
     951,   959,   963,   967,   971,   975,   976,   977,   978,   997,
     998,  1003,  1004,  1007,  1011,  1015,  1019,  1021,  1025,  1026,
    1030,  1032,  1036,  1037,  1041,  1042,  1047,  1048,  1051,  1055,
    1059,  1063,  1064,  1069,  1072,  1073,  1076,  1080,  1084,  1088,
    1092,  1093,  1096,  1100,  1102,  1104,  1105,  1108,  1112,  1117,
    1121,  1126,  1131,  1132,  1137,  1140,  1141,  1144,  1148,  1152,
    1156,  1160,  1164,  1165,  1171,  1175,  1176,  1182,  1186,  1190,
    1194,  1198,  1202,  1203,  1207,  1208,  1211,  1214,  1217,  1222,
    1227,  1232,  1237,  1238,  1241,  1245,  1249,  1253,  1254,  1257,
    1261,  1265,  1269,  1273,  1274,  1277,  1278,  1279,  1289,  1293,
    1297,  1301,  1304,  1308,  1314,  1315,  1318,  1322,  1323,  1324,
    1334,  1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,  1354,
    1358,  1359,  1362,  1366,  1368,  1370,  1371,  1374,  1378,  1383,
    1388,  1389,  1395,  1397,  1398,  1403,  1406,  1407,  1410,  1414,
    1418,  1422,  1426,  1430,  1434,  1438,  1442,  1444,  1446,  1450,
    1451,  1455,  1457,  1461,  1462,  1466,  1467,  1470,  1474,  1478,
    1483,  1488,  1493,  1498,  1504,  1510,  1513,  1521,  1533,  1541,
    1555,  1567,  1577,  1585,  1593,  1601,  1611,  1621,  1631,  1643,
    1655,  1667,  1673,  1691,  1705,  1721,  1733,  1747,  1748,  1756,
    1757,  1765,  1773,  1785,  1791,  1797,  1807,  1817,  1827,  1833,
    1839,  1851,  1861,  1876,  1891,  1899,  1912,  1923,  1931,  1939,
    1947,  1949,  1951,  1953,  1954,  1957,  1961,  1965,  1968,  1969,
    1972,  1976,  1980,  1984,  1988,  1993,  1994,  1997,  2001,  2005,
    2009,  2013,  2017,  2022,  2023,  2026,  2030,  2034,  2038,  2042,
    2047,  2048,  2051,  2055,  2059,  2063,  2067,  2071,  2076,  2081,
    2086,  2087,  2092,  2093,  2096,  2100,  2104,  2108,  2112,  2116,
    2120,  2121,  2124,  2128,  2130,  2132,  2133,  2136,  2140,  2145,
    2149,  2153,  2158,  2159,  2164,  2167,  2170,  2171,  2174,  2178,
    2183,  2184,  2190,  2196,  2197,  2200,  2201,  2208,  2212,  2216,
    2220,  2224,  2225,  2228,  2232,  2234,  2236,  2237,  2240,  2244,
    2248,  2252,  2256,  2261,  2262,  2271,  2272,  2273,  2277,  2285,
    2293,  2302,  2314,  2321,  2322,  2333,  2335,  2339,  2346,  2348,
    2350,  2352,  2354,  2355,  2359,  2361,  2364,  2367,  2380,  2383,
    2399,  2404,  2417,  2435,  2458,  2471,  2472,  2475,  2479,  2484,
    2489,  2493,  2496,  2499,  2503,  2507,  2511,  2515,  2519,  2522,
    2526,  2530,  2534,  2538,  2542,  2546,  2550,  2556,  2559,  2562,
    2566,  2576,  2580,  2583,  2593,  2596,  2606,  2609,  2619,  2625,
    2629,  2632,  2633,  2636,  2643,  2652,  2661,  2672,  2674,  2679,
    2681,  2687,  2692,  2697,  2705,  2710,  2718,  2724,  2728,  2732,
    2740,  2746,  2755,  2756,  2760,  2766,  2772,  2774,  2776,  2778,
    2780,  2782,  2784,  2786,  2788,  2790,  2792,  2794,  2796,  2798,
    2800,  2802,  2804,  2806,  2808,  2810,  2812,  2814,  2816,  2820,
    2823,  2826,  2830,  2834,  2838,  2842,  2846,  2850,  2854,  2858,
    2862,  2866,  2870,  2874,  2878,  2882,  2887,  2892,  2897,  2902,
    2907,  2912,  2917,  2922,  2927,  2932,  2939,  2944,  2949,  2954,
    2959,  2964,  2969,  2976,  2983,  2990,  2993,  2995,  2997,  2999,
    3001,  3003,  3005,  3007,  3009,  3010,  3012,  3014,  3018,  3020,
    3022,  3026,  3030,  3034,  3040,  3044,  3049,  3054,  3061,  3070,
    3079,  3085,  3091,  3093,  3095,  3097,  3099,  3101,  3106,  3113,
    3115
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     270,     0,    -1,    -1,   271,   272,    -1,    -1,    -1,   272,
     273,   274,    -1,    62,   264,   277,   265,    -1,    99,   264,
     298,   265,    -1,    68,   264,   333,   265,    -1,    81,   264,
     318,   265,    -1,    83,   264,   324,   265,    -1,    95,   264,
     340,   265,    -1,   111,   264,   363,   265,    -1,   132,   264,
     389,   265,    -1,   187,   264,   419,   265,    -1,   189,   264,
     430,   265,    -1,   434,    -1,   448,    -1,    22,   458,    -1,
     275,    -1,    19,     7,    -1,    19,   194,     7,    -1,    19,
      21,     7,    -1,    19,    36,     7,    -1,    19,    20,     7,
      -1,    19,    19,     7,    -1,    19,     5,     7,    -1,    20,
       7,    -1,    21,     7,    -1,    21,    62,     7,    -1,    21,
      99,     7,    -1,    21,    68,     7,    -1,    21,    81,     7,
      -1,    21,    83,     7,    -1,    21,    95,     7,    -1,    21,
     111,     7,    -1,    21,   132,     7,    -1,    21,   187,     7,
      -1,    21,   189,     7,    -1,    21,     3,     7,    -1,    -1,
     276,   438,    -1,    -1,   277,   278,    -1,   457,   234,   282,
       7,    -1,     5,   297,   234,   282,     7,    -1,     5,   295,
     234,   282,     7,    -1,    63,   258,   293,   259,     7,    -1,
     279,    -1,   457,   247,   234,   282,     7,    -1,   448,    -1,
     447,    -1,    -1,    -1,   457,   258,   451,   259,   234,    66,
     280,   258,   261,   290,   281,   266,   261,   290,   266,   451,
     259,     7,    -1,    -1,   286,   258,   287,   283,   288,   259,
      -1,   261,   290,    -1,   282,    -1,   457,    -1,   457,   296,
      -1,    69,    -1,     5,    -1,   290,    -1,    64,    -1,    -1,
     294,   289,   290,    -1,   294,    65,   457,    -1,     5,    -1,
     292,    -1,   264,   291,   265,    -1,    -1,   291,   294,   292,
      -1,   291,   294,   248,   292,    -1,     3,    -1,   256,   451,
     257,    -1,   267,   454,   267,    -1,     3,     8,   451,    -1,
     256,   451,   257,     8,   451,    -1,     3,     8,   451,     8,
     451,    -1,   256,   451,   257,     8,   451,     8,   451,    -1,
     457,    -1,    -1,   293,   294,     5,    -1,   293,   294,     5,
     264,   451,   265,    -1,    -1,   266,    -1,   264,   261,   451,
     265,    -1,    -1,   264,   265,    -1,   264,   451,   265,    -1,
      -1,   298,   299,    -1,    67,   258,   300,   259,     7,    -1,
       5,   258,   259,   234,   301,     7,    -1,     5,   258,   284,
     259,   234,   301,     7,    -1,   448,    -1,   447,    -1,    -1,
     300,   294,     5,    -1,    23,   258,   451,   259,    -1,    99,
     258,     5,   259,    -1,    -1,   302,   305,    -1,    -1,   264,
     304,   265,    -1,   301,    -1,   304,   266,   301,    -1,    -1,
     306,   307,    -1,   310,    -1,    -1,    -1,   307,   235,   308,
     307,     8,   309,   307,    -1,   307,   249,   307,    -1,   307,
     252,   307,    -1,    58,   258,   307,   266,   307,   259,    -1,
     307,   250,   307,    -1,   307,   247,   307,    -1,   307,   248,
     307,    -1,   307,   251,   307,    -1,   307,   255,   307,    -1,
     307,   241,   307,    -1,   307,   242,   307,    -1,   307,   246,
     307,    -1,   307,   245,   307,    -1,   307,   240,   307,    -1,
     307,   239,   307,    -1,   307,   238,   307,    -1,   307,   237,
     307,    -1,   307,   236,   307,    -1,   248,   307,    -1,   247,
     307,    -1,   253,   307,    -1,   256,   307,   257,    -1,   452,
      -1,   450,   315,   317,    -1,     5,   388,    -1,   388,    -1,
     388,   315,    -1,    -1,   122,   311,   258,   305,   259,    -1,
      -1,   129,   312,   258,   305,   266,     3,   259,    -1,    -1,
      60,   258,     5,   258,   313,   305,   259,   259,   264,   451,
     265,    -1,    61,   258,     5,   259,   264,   451,   266,   451,
     265,    -1,    55,   258,   388,   259,    -1,    57,   258,   388,
     259,    -1,    -1,    56,   314,   258,   305,   266,   284,   259,
      -1,   241,     5,   242,   258,   305,   259,    -1,   262,     5,
      -1,   262,   213,    -1,   262,   143,    -1,   262,     3,    -1,
     310,   261,     3,    -1,   261,     3,    -1,   310,   263,   451,
      -1,   258,   260,   259,    -1,   258,   259,    -1,   258,   316,
     259,    -1,   307,    -1,   316,   266,   307,    -1,    -1,   264,
     454,   265,    -1,   264,    69,   258,   284,   259,   265,    -1,
      -1,   318,   264,   319,   265,    -1,    -1,   319,   320,    -1,
      96,     5,     7,    -1,    82,   264,   321,   265,    -1,    -1,
     321,   264,   322,   265,    -1,    -1,   322,   323,    -1,    69,
     284,     7,    -1,    69,    64,     7,    -1,    81,     5,   317,
       7,    -1,    -1,   324,   264,   325,   265,    -1,    -1,   325,
     326,    -1,    96,     5,     7,    -1,    88,   301,     7,    -1,
      82,   264,   327,   265,    -1,    -1,   327,   264,   328,   265,
      -1,    -1,   328,   329,    -1,    86,     5,     7,    -1,    87,
       5,     7,    -1,    82,   264,   330,   265,    -1,    -1,   330,
     264,   331,   265,    -1,    -1,   331,   332,    -1,    89,     5,
       7,    -1,    90,   451,     7,    -1,    91,   451,     7,    -1,
      92,   451,     7,    -1,    93,   451,     7,    -1,    94,   451,
       7,    -1,    -1,   333,   334,    -1,   264,   335,   265,    -1,
     448,    -1,   447,    -1,    -1,   335,   336,    -1,    96,   457,
       7,    -1,    96,     5,   295,     7,    -1,    86,     5,     7,
      -1,    82,   264,   337,   265,    -1,    82,     5,   264,   337,
     265,    -1,    -1,   337,   264,   338,   265,    -1,   337,   447,
      -1,    -1,   338,   339,    -1,    86,     5,     7,    -1,    69,
     284,     7,    -1,    70,   284,     7,    -1,    76,   301,     7,
      -1,    75,   301,     7,    -1,    80,   457,     7,    -1,    77,
     264,   452,   294,   452,   265,     7,    -1,    71,   284,     7,
      -1,    72,   284,     7,    -1,    99,   301,     7,    -1,    74,
     301,     7,    -1,    73,   301,     7,    -1,    99,   258,   301,
     266,   301,   259,     7,    -1,    74,   258,   301,   266,   301,
     259,     7,    -1,    73,   258,   301,   266,   301,   259,     7,
      -1,    -1,   340,   341,    -1,   264,   342,   265,    -1,   448,
      -1,   447,    -1,    -1,   342,   343,    -1,    96,   457,     7,
      -1,    96,     5,   295,     7,    -1,    86,     5,     7,    -1,
      97,   264,   344,   265,    -1,   105,   264,   350,   265,    -1,
     107,   264,   357,   265,    -1,    68,   264,   360,   265,    -1,
      -1,   344,   264,   345,   265,    -1,   344,   447,    -1,    -1,
     345,   346,    -1,    96,     5,     7,    -1,    98,     5,     7,
      -1,    98,     5,   295,     7,    -1,    99,     5,   347,     7,
      -1,   100,   264,     5,   294,     5,   265,     7,    -1,   101,
     303,     7,    -1,   102,   303,     7,    -1,   103,   284,     7,
      -1,   104,   284,     7,    -1,    -1,    -1,    -1,   264,   112,
       5,     7,   111,     5,   295,     7,   348,    62,   285,     7,
     349,   132,     5,   296,     7,   265,    -1,    -1,   350,   264,
     351,   265,    -1,    -1,   351,   352,    -1,    96,     5,     7,
      -1,   106,   353,     7,    -1,    98,   355,     7,    -1,     5,
      -1,   264,   354,   265,    -1,    -1,   354,   294,     5,    -1,
       5,    -1,   264,   356,   265,    -1,    -1,   356,   294,     5,
      -1,    -1,   357,   264,   358,   265,    -1,    -1,   358,   359,
      -1,    96,   457,     7,    -1,    86,     5,     7,    -1,    98,
       5,     7,    -1,    -1,   360,   264,   361,   265,    -1,   360,
     447,    -1,    -1,   361,   362,    -1,    98,     5,     7,    -1,
     108,   286,     7,    -1,   109,   289,     7,    -1,   110,   457,
       7,    -1,    -1,   363,   364,    -1,   264,   365,   265,    -1,
     448,    -1,   447,    -1,    -1,   365,   366,    -1,    96,   457,
       7,    -1,    96,     5,   295,     7,    -1,    86,     5,     7,
      -1,   112,   264,   367,   265,    -1,   116,   264,   373,   265,
      -1,    -1,   367,   264,   368,   265,    -1,   367,   447,    -1,
      -1,   368,   369,    -1,    96,   457,     7,    -1,    86,   107,
       7,    -1,    86,   117,     7,    -1,    86,     5,     7,    -1,
     186,   453,     7,    -1,    -1,   113,   457,   370,   372,     7,
      -1,   114,     3,     7,    -1,    -1,   258,   371,   305,   259,
       7,    -1,   130,   284,     7,    -1,    83,     5,     7,    -1,
      84,     5,     7,    -1,    81,     5,     7,    -1,   115,     3,
       7,    -1,    -1,   258,   457,   259,    -1,    -1,   373,   374,
      -1,   373,   448,    -1,   373,   447,    -1,   117,   264,   379,
     265,    -1,   118,   264,   379,   265,    -1,   119,   264,   383,
     265,    -1,   120,   264,   375,   265,    -1,    -1,   375,   376,
      -1,    86,     5,     7,    -1,   110,     5,     7,    -1,   264,
     377,   265,    -1,    -1,   377,   378,    -1,    78,   388,     7,
      -1,    79,   388,     7,    -1,   116,   388,     7,    -1,   130,
     284,     7,    -1,    -1,   379,   380,    -1,    -1,    -1,   387,
     258,   381,   305,   382,   266,   305,   259,     7,    -1,   130,
     284,     7,    -1,    81,     5,     7,    -1,    83,     5,     7,
      -1,   131,     7,    -1,    84,     5,     7,    -1,    85,   258,
       3,   259,     7,    -1,    -1,   383,   384,    -1,   130,   284,
       7,    -1,    -1,    -1,   387,   258,   385,   305,   386,   266,
     388,   259,     7,    -1,    -1,   122,    -1,   123,    -1,   124,
      -1,   125,    -1,   126,    -1,   127,    -1,   128,    -1,   264,
       5,   457,   265,    -1,   264,   457,   265,    -1,    -1,   389,
     390,    -1,   264,   391,   265,    -1,   448,    -1,   447,    -1,
      -1,   391,   392,    -1,    96,   457,     7,    -1,    96,     5,
     295,     7,    -1,   133,   264,   394,   265,    -1,    -1,   140,
     393,   264,   401,   265,    -1,   447,    -1,    -1,   394,   264,
     395,   265,    -1,   394,   447,    -1,    -1,   395,   396,    -1,
      96,   457,     7,    -1,    86,     5,     7,    -1,   134,   397,
       7,    -1,   135,   458,     7,    -1,   138,   399,     7,    -1,
     139,   457,     7,    -1,   136,   453,     7,    -1,   137,   458,
       7,    -1,   447,    -1,   457,    -1,   264,   398,   265,    -1,
      -1,   398,   294,   457,    -1,   457,    -1,   264,   400,   265,
      -1,    -1,   400,   294,   457,    -1,    -1,   401,   402,    -1,
       5,   457,     7,    -1,   142,   301,     7,    -1,   155,   264,
     408,   265,    -1,   159,   264,   410,   265,    -1,   162,   264,
     412,   265,    -1,   165,   264,   414,   265,    -1,     5,   258,
     457,   259,     7,    -1,   142,   258,   301,   259,     7,    -1,
     153,     7,    -1,    15,   258,   301,   259,   264,   401,   265,
      -1,    15,   258,   301,   259,   264,   401,   265,    16,   264,
     401,   265,    -1,   144,   258,   457,   266,   301,   259,     7,
      -1,   171,   258,   457,   266,   301,   266,   301,   266,   301,
     266,   301,   259,     7,    -1,   171,   258,   457,   266,   301,
     266,   301,   266,   301,   259,     7,    -1,   171,   258,   457,
     266,   301,   266,   301,   259,     7,    -1,   172,   258,   457,
     266,   453,   259,     7,    -1,   173,   258,   457,   266,   453,
     259,     7,    -1,   151,   258,   457,   266,   301,   259,     7,
      -1,   152,   258,   457,   266,   284,   266,   457,   259,     7,
      -1,   145,   258,   457,   266,   457,   266,   453,   259,     7,
      -1,   146,   258,   457,   266,   457,   266,   451,   259,     7,
      -1,   147,   258,   457,   266,   451,   266,   453,   266,   451,
     259,     7,    -1,   148,   258,   457,   266,   451,   266,   451,
     266,   451,   259,     7,    -1,   149,   258,   457,   266,   451,
     266,   451,   266,   451,   259,     7,    -1,   154,   258,   301,
     259,     7,    -1,   150,   258,   457,   266,   457,   266,   457,
     266,   451,   266,   453,   266,   451,   266,   451,   259,     7,
      -1,   155,   258,   451,   266,   451,   266,   301,   266,   301,
     259,   264,   401,   265,    -1,   159,   258,   451,   266,   451,
     266,   301,   266,   451,   266,   451,   259,   264,   401,   265,
      -1,   162,   258,   451,   266,   451,   266,   301,   259,   264,
     401,   265,    -1,   162,   258,   451,   266,   451,   266,   301,
     266,   451,   259,   264,   401,   265,    -1,    -1,   194,   403,
     258,   405,   406,   259,     7,    -1,    -1,   197,   404,   258,
     405,   406,   259,     7,    -1,   168,   258,   284,   266,   301,
     259,     7,    -1,   168,   258,   284,   266,   301,   266,   451,
     266,   301,   259,     7,    -1,   189,   258,   457,   259,     7,
      -1,   170,   258,   458,   259,     7,    -1,   174,   258,   457,
     266,   453,   266,   451,   259,     7,    -1,   175,   258,   457,
     266,   451,   266,   458,   259,     7,    -1,   176,   258,   457,
     266,   453,   266,   458,   259,     7,    -1,   177,   264,   457,
     265,     7,    -1,   178,   264,   457,   265,     7,    -1,   184,
     264,   457,   266,   284,   266,   458,   266,   301,   265,     7,
      -1,   184,   264,   457,   266,   284,   266,   458,   265,     7,
      -1,   179,   258,   457,   266,   457,   266,   451,   266,   451,
     259,   264,   401,   265,     7,    -1,   180,   258,   457,   266,
     457,   266,   451,   266,   451,   259,   264,   401,   265,     7,
      -1,   181,   258,   457,   266,   451,   259,     7,    -1,   185,
     264,     5,   266,     5,   266,   135,   458,   266,     4,   265,
       7,    -1,   185,   264,     5,   266,     5,   266,   135,   458,
     265,     7,    -1,   185,   264,     5,   266,     5,   265,     7,
      -1,   182,   258,   457,   266,   457,   259,     7,    -1,   183,
     258,   457,   266,   457,   259,     7,    -1,   447,    -1,   303,
      -1,   457,    -1,    -1,   406,   407,    -1,   266,   209,   458,
      -1,   266,   213,   453,    -1,   266,   453,    -1,    -1,   408,
     409,    -1,   156,   451,     7,    -1,   157,   451,     7,    -1,
     143,   301,     7,    -1,   158,   301,     7,    -1,   140,   264,
     401,   265,    -1,    -1,   410,   411,    -1,   156,   451,     7,
      -1,   157,   451,     7,    -1,   143,   301,     7,    -1,   160,
     451,     7,    -1,   161,   451,     7,    -1,   140,   264,   401,
     265,    -1,    -1,   412,   413,    -1,   163,   451,     7,    -1,
      88,   451,     7,    -1,   164,   301,     7,    -1,    18,   451,
       7,    -1,   140,   264,   401,   265,    -1,    -1,   414,   415,
      -1,   163,   451,     7,    -1,   166,   451,     7,    -1,    88,
     451,     7,    -1,    18,   451,     7,    -1,   133,   457,     7,
      -1,   167,   264,   416,   265,    -1,   140,   264,   401,   265,
      -1,   141,   264,   401,   265,    -1,    -1,   416,   264,   417,
     265,    -1,    -1,   417,   418,    -1,    86,     5,     7,    -1,
     112,     5,     7,    -1,   130,   284,     7,    -1,    88,   451,
       7,    -1,    99,   301,     7,    -1,    18,     5,     7,    -1,
      -1,   419,   420,    -1,   264,   421,   265,    -1,   448,    -1,
     447,    -1,    -1,   421,   422,    -1,    96,   457,     7,    -1,
      96,     5,   295,     7,    -1,   134,   457,     7,    -1,   188,
     457,     7,    -1,   112,   264,   423,   265,    -1,    -1,   423,
     264,   424,   265,    -1,   423,   448,    -1,   423,   447,    -1,
      -1,   424,   425,    -1,    96,   457,     7,    -1,    75,   264,
     426,   265,    -1,    -1,   426,   117,   264,   427,   265,    -1,
     426,     5,   264,   427,   265,    -1,    -1,   427,   428,    -1,
      -1,   387,   258,   429,   305,   259,     7,    -1,    86,     5,
       7,    -1,   130,   284,     7,    -1,    81,     5,     7,    -1,
      83,     5,     7,    -1,    -1,   430,   431,    -1,   264,   432,
     265,    -1,   448,    -1,   447,    -1,    -1,   432,   433,    -1,
      96,   457,     7,    -1,   190,   457,     7,    -1,   215,     5,
       7,    -1,   192,   458,     7,    -1,   140,   264,   436,   265,
      -1,    -1,   189,   457,   191,   457,   435,   264,   436,   265,
      -1,    -1,    -1,   436,   437,   438,    -1,   193,   258,   440,
     443,   444,   259,     7,    -1,   194,   258,   440,   443,   444,
     259,     7,    -1,   194,   258,     6,   266,   301,   444,   259,
       7,    -1,   194,   258,     6,   266,   232,   258,   458,   259,
     444,   259,     7,    -1,   196,   258,     6,   444,   259,     7,
      -1,    -1,   195,   258,   284,   439,   266,   130,   284,   444,
     259,     7,    -1,   447,    -1,   457,   442,   266,    -1,   457,
     442,   441,     5,   442,   266,    -1,   249,    -1,   250,    -1,
     247,    -1,   248,    -1,    -1,   258,   284,   259,    -1,   199,
      -1,   200,   284,    -1,   201,   284,    -1,   203,   264,   264,
     454,   265,   264,   454,   265,   264,   454,   265,   265,    -1,
     202,   284,    -1,   202,   264,   301,   266,   301,   266,   301,
     265,   264,   453,   266,   453,   266,   453,   265,    -1,   204,
     264,   454,   265,    -1,   205,   264,   264,   454,   265,   264,
     454,   265,   265,   264,   451,   265,    -1,   206,   264,   264,
     454,   265,   264,   454,   265,   264,   454,   265,   265,   264,
     451,   266,   451,   265,    -1,   207,   264,   264,   454,   265,
     264,   454,   265,   264,   454,   265,   264,   454,   265,   265,
     264,   451,   266,   451,   266,   451,   265,    -1,   200,   284,
     208,     5,   264,   451,   266,   451,   265,   264,   451,   265,
      -1,    -1,   444,   445,    -1,   266,   209,   458,    -1,   266,
     209,   242,   458,    -1,   266,   209,   243,   458,    -1,   266,
     210,   451,    -1,   266,   218,    -1,   266,   219,    -1,   266,
     214,   451,    -1,   266,   215,     5,    -1,   266,   216,   446,
      -1,   266,   217,   446,    -1,   266,   215,   446,    -1,   266,
     212,    -1,   266,   211,   451,    -1,   266,   213,   453,    -1,
     266,   198,     5,    -1,   266,   221,     5,    -1,   266,   220,
     451,    -1,   266,    75,   453,    -1,   266,   222,   451,    -1,
     266,   222,   264,   454,   265,    -1,   266,   223,    -1,   266,
     224,    -1,   266,   136,   453,    -1,   266,   168,   264,   301,
     266,   301,   266,   301,   265,    -1,   266,   225,   303,    -1,
     266,   226,    -1,   266,   226,   264,   451,   266,   451,   266,
     451,   265,    -1,   266,   227,    -1,   266,   227,   264,   451,
     266,   451,   266,   451,   265,    -1,   266,   228,    -1,   266,
     228,   264,   451,   266,   451,   266,   451,   265,    -1,   266,
     229,   264,   454,   265,    -1,   266,   230,     3,    -1,   266,
     231,    -1,    -1,   446,     6,    -1,    13,   256,   451,     8,
     451,   257,    -1,    13,   256,   451,     8,   451,     8,   451,
     257,    -1,    13,     5,   130,   264,   451,     8,   451,   265,
      -1,    13,     5,   130,   264,   451,     8,   451,     8,   451,
     265,    -1,    14,    -1,    15,   256,   451,   257,    -1,    17,
      -1,    29,   258,   449,   259,     7,    -1,   457,   234,   453,
       7,    -1,   457,   234,     6,     7,    -1,   457,   234,   232,
     258,   458,   259,     7,    -1,   457,   234,   459,     7,    -1,
     457,   234,    28,   258,   458,   259,     7,    -1,    11,   256,
       6,   257,     7,    -1,    11,   457,     7,    -1,    11,   261,
       7,    -1,    11,   256,     6,   266,   454,   257,     7,    -1,
      12,   256,   457,   257,     7,    -1,    12,   256,   457,   257,
     258,   451,   259,     7,    -1,    -1,   449,   294,     5,    -1,
     449,   294,     5,   234,   451,    -1,   449,   294,     5,   234,
       6,    -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,
      39,    -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,
      44,    -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,
      49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,
      54,    -1,   457,    -1,   452,    -1,   256,   451,   257,    -1,
     248,   451,    -1,   253,   451,    -1,   451,   248,   451,    -1,
     451,   247,   451,    -1,   451,   249,   451,    -1,   451,   250,
     451,    -1,   451,   251,   451,    -1,   451,   255,   451,    -1,
     451,   241,   451,    -1,   451,   242,   451,    -1,   451,   246,
     451,    -1,   451,   245,   451,    -1,   451,   240,   451,    -1,
     451,   239,   451,    -1,   451,   237,   451,    -1,   451,   236,
     451,    -1,    35,   258,   451,   259,    -1,    36,   258,   451,
     259,    -1,    37,   258,   451,   259,    -1,    38,   258,   451,
     259,    -1,    39,   258,   451,   259,    -1,    40,   258,   451,
     259,    -1,    41,   258,   451,   259,    -1,    42,   258,   451,
     259,    -1,    43,   258,   451,   259,    -1,    44,   258,   451,
     259,    -1,    45,   258,   451,   266,   451,   259,    -1,    46,
     258,   451,   259,    -1,    47,   258,   451,   259,    -1,    48,
     258,   451,   259,    -1,    49,   258,   451,   259,    -1,    50,
     258,   451,   259,    -1,    51,   258,   451,   259,    -1,    52,
     258,   451,   266,   451,   259,    -1,    53,   258,   451,   266,
     451,   259,    -1,    54,   258,   451,   266,   451,   259,    -1,
     451,   261,    -1,     4,    -1,     3,    -1,    30,    -1,    31,
      -1,    32,    -1,    33,    -1,    34,    -1,   457,    -1,    -1,
     451,    -1,   455,    -1,   264,   454,   265,    -1,   451,    -1,
     455,    -1,   454,   266,   451,    -1,   454,   266,   455,    -1,
     451,     8,   451,    -1,   451,     8,   451,     8,   451,    -1,
       5,   264,   265,    -1,     5,   264,   454,   265,    -1,    24,
     258,     5,   259,    -1,    25,   258,     5,   266,     5,   259,
      -1,    26,   258,   451,   266,   451,   266,   451,   259,    -1,
      27,   258,   451,   266,   451,   266,   451,   259,    -1,     5,
     268,   264,   451,   265,    -1,   456,   268,   264,   451,   265,
      -1,     5,    -1,   456,    -1,     6,    -1,   457,    -1,   459,
      -1,    10,   256,   458,   257,    -1,    10,   256,   458,   266,
     454,   257,    -1,   233,    -1,     9,   258,   458,   266,   458,
     259,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   341,   341,   341,   377,   381,   380,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   399,   401,   403,
     408,   418,   420,   422,   424,   426,   428,   430,   432,   434,
     436,   438,   440,   442,   444,   446,   448,   450,   452,   454,
     456,   459,   459,   481,   484,   490,   493,   499,   505,   507,
     509,   512,   514,   520,   530,   519,   547,   546,   563,   574,
     579,   596,   626,   629,   642,   643,   650,   652,   655,   673,
     686,   693,   701,   705,   712,   723,   729,   736,   747,   756,
     764,   778,   791,   826,   830,   840,   857,   857,   862,   868,
     869,   874,   882,   885,   890,   892,   912,   956,   958,   962,
     965,   985,   991,   998,   998,  1008,  1012,  1018,  1021,  1028,
    1028,  1041,  1044,  1057,  1043,  1085,  1091,  1097,  1103,  1109,
    1115,  1121,  1127,  1133,  1139,  1145,  1151,  1157,  1163,  1169,
    1175,  1181,  1188,  1194,  1196,  1207,  1209,  1215,  1289,  1323,
    1332,  1345,  1344,  1359,  1358,  1373,  1372,  1388,  1400,  1406,
    1413,  1412,  1443,  1469,  1482,  1488,  1495,  1501,  1508,  1515,
    1527,  1528,  1529,  1534,  1535,  1541,  1543,  1546,  1562,  1566,
    1574,  1576,  1582,  1587,  1595,  1597,  1605,  1608,  1614,  1617,
    1620,  1659,  1664,  1672,  1678,  1684,  1691,  1694,  1702,  1704,
    1712,  1717,  1723,  1733,  1743,  1751,  1753,  1761,  1770,  1776,
    1824,  1827,  1830,  1833,  1836,  1848,  1852,  1857,  1862,  1864,
    1870,  1876,  1882,  1889,  1897,  1906,  1909,  1928,  1932,  1937,
    1947,  1954,  1960,  1970,  1975,  1981,  1986,  1994,  2002,  2011,
    2029,  2038,  2046,  2054,  2064,  2074,  2084,  2105,  2110,  2115,
    2120,  2122,  2129,  2134,  2140,  2147,  2155,  2164,  2167,  2170,
    2173,  2181,  2186,  2203,  2213,  2227,  2233,  2236,  2241,  2246,
    2260,  2280,  2285,  2290,  2295,  2324,  2330,  2334,  2328,  2408,
    2413,  2423,  2427,  2433,  2440,  2443,  2450,  2466,  2473,  2475,
    2494,  2506,  2514,  2518,  2534,  2539,  2550,  2555,  2561,  2568,
    2579,  2594,  2598,  2635,  2645,  2654,  2660,  2693,  2696,  2699,
    2715,  2719,  2724,  2729,  2731,  2738,  2742,  2748,  2755,  2763,
    2773,  2775,  2782,  2786,  2791,  2798,  2814,  2820,  2823,  2827,
    2830,  2840,  2845,  2844,  2876,  2882,  2881,  3198,  3203,  3212,
    3221,  3230,  3235,  3238,  3279,  3283,  3288,  3293,  3302,  3305,
    3308,  3311,  3323,  3328,  3333,  3343,  3353,  3368,  3374,  3379,
    3381,  3383,  3385,  3394,  3412,  3419,  3427,  3418,  3551,  3556,
    3565,  3574,  3579,  3588,  3600,  3614,  3628,  3634,  3642,  3633,
    3714,  3715,  3716,  3717,  3718,  3719,  3720,  3721,  3727,  3748,
    3773,  3777,  3782,  3787,  3789,  3796,  3801,  3807,  3814,  3822,
    3826,  3825,  3830,  3836,  3840,  3845,  3856,  3869,  3875,  3878,
    3887,  3890,  3895,  3900,  3905,  3910,  3915,  3921,  3930,  3938,
    3940,  3952,  3962,  3969,  3971,  3984,  3991,  4004,  4026,  4033,
    4039,  4045,  4051,  4059,  4081,  4088,  4094,  4105,  4116,  4129,
    4144,  4159,  4174,  4194,  4215,  4227,  4247,  4264,  4283,  4304,
    4318,  4332,  4339,  4373,  4386,  4400,  4413,  4427,  4426,  4436,
    4435,  4444,  4455,  4467,  4477,  4485,  4498,  4511,  4525,  4535,
    4545,  4559,  4573,  4591,  4610,  4621,  4636,  4651,  4666,  4681,
    4696,  4707,  4712,  4723,  4728,  4732,  4735,  4745,  4761,  4770,
    4776,  4780,  4784,  4788,  4793,  4805,  4815,  4821,  4825,  4829,
    4833,  4837,  4842,  4854,  4863,  4868,  4872,  4876,  4880,  4884,
    4896,  4908,  4913,  4917,  4921,  4925,  4930,  4940,  4946,  4952,
    4963,  4965,  4971,  4983,  4988,  4998,  5027,  5030,  5033,  5041,
    5059,  5065,  5070,  5075,  5077,  5082,  5090,  5094,  5101,  5109,
    5122,  5127,  5134,  5136,  5139,  5141,  5148,  5153,  5158,  5161,
    5168,  5172,  5178,  5193,  5202,  5207,  5206,  5241,  5252,  5257,
    5266,  5284,  5290,  5295,  5298,  5300,  5305,  5312,  5316,  5323,
    5335,  5346,  5351,  5358,  5357,  5385,  5388,  5387,  5404,  5409,
    5414,  5423,  5432,  5442,  5441,  5452,  5461,  5473,  5497,  5498,
    5499,  5500,  5506,  5507,  5513,  5519,  5526,  5533,  5557,  5564,
    5576,  5589,  5609,  5635,  5668,  5690,  5721,  5725,  5732,  5739,
    5746,  5750,  5754,  5758,  5762,  5772,  5777,  5782,  5802,  5806,
    5813,  5823,  5832,  5841,  5848,  5856,  5860,  5869,  5873,  5877,
    5885,  5891,  5895,  5903,  5910,  5918,  5925,  5933,  5940,  5948,
    5952,  5962,  5967,  6017,  6032,  6048,  6068,  6088,  6144,  6148,
    6161,  6163,  6178,  6184,  6190,  6196,  6207,  6212,  6228,  6233,
    6245,  6255,  6271,  6274,  6280,  6286,  6298,  6299,  6300,  6301,
    6302,  6303,  6304,  6305,  6306,  6307,  6308,  6309,  6310,  6311,
    6312,  6313,  6314,  6315,  6316,  6317,  6318,  6322,  6323,  6324,
    6325,  6326,  6327,  6328,  6329,  6330,  6331,  6332,  6333,  6334,
    6335,  6336,  6337,  6338,  6339,  6340,  6341,  6342,  6343,  6344,
    6345,  6346,  6347,  6348,  6349,  6350,  6351,  6352,  6353,  6354,
    6355,  6356,  6357,  6358,  6359,  6363,  6368,  6369,  6370,  6371,
    6372,  6373,  6374,  6375,  6394,  6396,  6402,  6405,  6412,  6418,
    6421,  6424,  6436,  6442,  6453,  6469,  6491,  6506,  6544,  6552,
    6564,  6572,  6583,  6586,  6593,  6596,  6611,  6616,  6621,  6640,
    6650
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
  "tComma", "tTimeStep", "tHarmonicToTime", "tFormat", "tHeader", 
  "tFooter", "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", 
  "tNoNewLine", "tDecomposeInSimplex", "tChangeOfValues", "tTimeLegend", 
  "tFrequencyLegend", "tEigenvalueLegend", "tEvaluationPoints", "tStore", 
  "tLastTimeStepOnly", "tStr", "tDate", "tDEF", "'?'", "tOR", "tAND", 
  "tAPPROXEQUAL", "tNOTEQUAL", "tEQUAL", "'<'", "'>'", "tGREATERGREATER", 
  "tLESSLESS", "tGREATEROREQUAL", "tLESSOREQUAL", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", 
  "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", "'@'", 
  "'~'", "$accept", "Stats", "@1", "ProblemDefinitions", "@2", 
  "ProblemDefinition", "Interactive", "@3", "Groups", "Group", 
  "MovingBand2DGroup", "@4", "@5", "ReducedGroupRHS", "@6", "GroupRHS", 
  "GroupRHS_MultipleIndex", "FunctionForGroup", "ListOfRegionOrAll", 
  "SuppListOfRegion", "SuppListTypeForGroup", "ListOfRegion", 
  "RecursiveListOfRegion", "IRegion", "DefineGroups", "Comma", 
  "DefineDimension", "MultipleIndex", "Index", "Functions", "Function", 
  "DefineFunctions", "Expression", "@7", "ListOfExpression", 
  "RecursiveListOfExpression", "WholeQuantityExpression", "@8", 
  "WholeQuantity", "@9", "@10", "WholeQuantity_Single", "@11", "@12", 
  "@13", "@14", "ArgumentsForFunction", "RecursiveListOfQuantity", 
  "ParametersForFunction", "JacobianMethods", "JacobianMethod", 
  "JacobianMethodTerm", "JacobianCases", "JacobianCase", 
  "JacobianCaseTerm", "IntegrationMethods", "IntegrationMethod", 
  "IntegrationMethodTerm", "IntegrationCases", "IntegrationCase", 
  "IntegrationCaseTerm", "QuadratureCases", "QuadratureCase", 
  "QuadratureCaseTerm", "Constraints", "BracedConstraint", "Constraint", 
  "ConstraintTerm", "ConstraintCases", "ConstraintCase", 
  "ConstraintCaseTerm", "FunctionSpaces", "BracedFunctionSpace", 
  "FunctionSpace", "FunctionSpaceTerm", "BasisFunctions", "BasisFunction", 
  "BasisFunctionTerm", "OptionalParametersForBasisFunction", "@15", "@16", 
  "SubSpaces", "SubSpace", "SubSpaceTerm", "ListOfBasisFunction", 
  "RecursiveListOfBasisFunction", "ListOfBasisFunctionCoef", 
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", 
  "GlobalQuantity", "GlobalQuantityTerm", "ConstraintInFSs", 
  "ConstraintInFS", "ConstraintInFSTerm", "Formulations", 
  "BracedFormulation", "Formulation", "FormulationTerm", 
  "DefineQuantities", "DefineQuantity", "DefineQuantityTerm", "@17", 
  "@18", "IndexInFunctionSpace", "Equations", "EquationTerm", 
  "GlobalEquation", "GlobalEquationTerm", "GlobalEquationTermTerm", 
  "GlobalEquationTermTermTerm", "LocalTerm", "LocalTermTerm", "@19", 
  "@20", "GlobalTerm", "GlobalTermTerm", "@21", "@22", "TermOperator", 
  "Quantity_Def", "Resolutions", "BracedResolution", "Resolution", 
  "ResolutionTerm", "@23", "DefineSystems", "DefineSystem", 
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation", 
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm", 
  "@24", "@25", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@26", "PostOperations", 
  "BracedPostOperation", "PostOperation", "PostOperationTerm", 
  "SeparatePostOperation", "@27", "PostSubOperations", "@28", 
  "PostSubOperation", "@29", "PostQuantitiesToPrint", "Combination", 
  "PostQuantitySupport", "PrintSubType", "PrintOptions", "PrintOption", 
  "ParsedStrings", "Loop", "Affectation", "DefineConstants", 
  "NameForFunction", "FExpr", "OneFExpr", "ListOfFExpr", 
  "RecursiveListOfFExpr", "MultiFExpr", "StringIndex", "String__Index", 
  "CharExpr", "StrCat", 0
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
     485,   486,   487,   488,   489,    63,   490,   491,   492,   493,
     494,    60,    62,   495,   496,   497,   498,    43,    45,    42,
      47,    37,   499,    33,   500,    94,    40,    41,    91,    93,
      46,    35,    36,   501,   123,   125,    44,    64,   126
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   269,   271,   270,   272,   273,   272,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   276,   275,   277,   277,   278,   278,   278,   278,   278,
     278,   278,   278,   280,   281,   279,   283,   282,   282,   284,
     284,   285,   286,   286,   287,   287,   288,   288,   288,   289,
     290,   290,   291,   291,   291,   292,   292,   292,   292,   292,
     292,   292,   292,   293,   293,   293,   294,   294,   295,   296,
     296,   297,   298,   298,   299,   299,   299,   299,   299,   300,
     300,   301,   301,   302,   301,   303,   303,   304,   304,   306,
     305,   307,   308,   309,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   310,   310,   310,   310,   310,
     310,   311,   310,   312,   310,   313,   310,   310,   310,   310,
     314,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     315,   315,   315,   316,   316,   317,   317,   317,   318,   318,
     319,   319,   320,   320,   321,   321,   322,   322,   323,   323,
     323,   324,   324,   325,   325,   326,   326,   326,   327,   327,
     328,   328,   329,   329,   329,   330,   330,   331,   331,   332,
     332,   332,   332,   332,   332,   333,   333,   334,   334,   334,
     335,   335,   336,   336,   336,   336,   336,   337,   337,   337,
     338,   338,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   340,   340,   341,
     341,   341,   342,   342,   343,   343,   343,   343,   343,   343,
     343,   344,   344,   344,   345,   345,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   347,   348,   349,   347,   350,
     350,   351,   351,   352,   352,   352,   353,   353,   354,   354,
     355,   355,   356,   356,   357,   357,   358,   358,   359,   359,
     359,   360,   360,   360,   361,   361,   362,   362,   362,   362,
     363,   363,   364,   364,   364,   365,   365,   366,   366,   366,
     366,   366,   367,   367,   367,   368,   368,   369,   369,   369,
     369,   369,   370,   369,   369,   371,   369,   369,   369,   369,
     369,   369,   372,   372,   373,   373,   373,   373,   374,   374,
     374,   374,   375,   375,   376,   376,   376,   377,   377,   378,
     378,   378,   378,   379,   379,   381,   382,   380,   380,   380,
     380,   380,   380,   380,   383,   383,   384,   385,   386,   384,
     387,   387,   387,   387,   387,   387,   387,   387,   388,   388,
     389,   389,   390,   390,   390,   391,   391,   392,   392,   392,
     393,   392,   392,   394,   394,   394,   395,   395,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   397,   397,   398,
     398,   399,   399,   400,   400,   401,   401,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   403,   402,   404,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   405,   405,   406,   406,   407,   407,   407,   408,   408,
     409,   409,   409,   409,   409,   410,   410,   411,   411,   411,
     411,   411,   411,   412,   412,   413,   413,   413,   413,   413,
     414,   414,   415,   415,   415,   415,   415,   415,   415,   415,
     416,   416,   417,   417,   418,   418,   418,   418,   418,   418,
     419,   419,   420,   420,   420,   421,   421,   422,   422,   422,
     422,   422,   423,   423,   423,   423,   424,   424,   425,   425,
     426,   426,   426,   427,   427,   429,   428,   428,   428,   428,
     428,   430,   430,   431,   431,   431,   432,   432,   433,   433,
     433,   433,   433,   435,   434,   436,   437,   436,   438,   438,
     438,   438,   438,   439,   438,   438,   440,   440,   441,   441,
     441,   441,   442,   442,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   444,   444,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   445,   445,
     445,   446,   446,   447,   447,   447,   447,   447,   447,   447,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   449,   449,   449,   449,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   452,   452,   452,   452,
     452,   452,   452,   452,   453,   453,   453,   453,   454,   454,
     454,   454,   455,   455,   455,   455,   455,   455,   455,   455,
     456,   456,   457,   457,   458,   458,   458,   458,   458,   458,
     459
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     2,     0,     0,     3,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     1,     1,     2,
       1,     2,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     2,     0,     2,     4,     5,     5,     5,     1,
       5,     1,     1,     0,     0,    18,     0,     6,     2,     1,
       1,     2,     1,     1,     1,     1,     0,     3,     3,     1,
       1,     3,     0,     3,     4,     1,     3,     3,     3,     5,
       5,     7,     1,     0,     3,     6,     0,     1,     4,     0,
       2,     3,     0,     2,     5,     6,     7,     1,     1,     0,
       3,     4,     4,     0,     2,     0,     3,     1,     3,     0,
       2,     1,     0,     0,     7,     3,     3,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     1,     3,     2,     1,
       2,     0,     5,     0,     7,     0,    11,     9,     4,     4,
       0,     7,     6,     2,     2,     2,     2,     3,     2,     3,
       3,     2,     3,     1,     3,     0,     3,     6,     0,     4,
       0,     2,     3,     4,     0,     4,     0,     2,     3,     3,
       4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
       0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
       3,     3,     3,     3,     3,     0,     2,     3,     1,     1,
       0,     2,     3,     4,     3,     4,     5,     0,     4,     2,
       0,     2,     3,     3,     3,     3,     3,     3,     7,     3,
       3,     3,     3,     3,     7,     7,     7,     0,     2,     3,
       1,     1,     0,     2,     3,     4,     3,     4,     4,     4,
       4,     0,     4,     2,     0,     2,     3,     3,     4,     4,
       7,     3,     3,     3,     3,     0,     0,     0,    18,     0,
       4,     0,     2,     3,     3,     3,     1,     3,     0,     3,
       1,     3,     0,     3,     0,     4,     0,     2,     3,     3,
       3,     0,     4,     2,     0,     2,     3,     3,     3,     3,
       0,     2,     3,     1,     1,     0,     2,     3,     4,     3,
       4,     4,     0,     4,     2,     0,     2,     3,     3,     3,
       3,     3,     0,     5,     3,     0,     5,     3,     3,     3,
       3,     3,     0,     3,     0,     2,     2,     2,     4,     4,
       4,     4,     0,     2,     3,     3,     3,     0,     2,     3,
       3,     3,     3,     0,     2,     0,     0,     9,     3,     3,
       3,     2,     3,     5,     0,     2,     3,     0,     0,     9,
       0,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     2,     3,     1,     1,     0,     2,     3,     4,     4,
       0,     5,     1,     0,     4,     2,     0,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     0,
       3,     1,     3,     0,     3,     0,     2,     3,     3,     4,
       4,     4,     4,     5,     5,     2,     7,    11,     7,    13,
      11,     9,     7,     7,     7,     9,     9,     9,    11,    11,
      11,     5,    17,    13,    15,    11,    13,     0,     7,     0,
       7,     7,    11,     5,     5,     9,     9,     9,     5,     5,
      11,     9,    14,    14,     7,    12,    10,     7,     7,     7,
       1,     1,     1,     0,     2,     3,     3,     2,     0,     2,
       3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
       3,     3,     4,     0,     2,     3,     3,     3,     3,     4,
       0,     2,     3,     3,     3,     3,     3,     4,     4,     4,
       0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
       0,     2,     3,     1,     1,     0,     2,     3,     4,     3,
       3,     4,     0,     4,     2,     2,     0,     2,     3,     4,
       0,     5,     5,     0,     2,     0,     6,     3,     3,     3,
       3,     0,     2,     3,     1,     1,     0,     2,     3,     3,
       3,     3,     4,     0,     8,     0,     0,     3,     7,     7,
       8,    11,     6,     0,    10,     1,     3,     6,     1,     1,
       1,     1,     0,     3,     1,     2,     2,    12,     2,    15,
       4,    12,    17,    22,    12,     0,     2,     3,     4,     4,
       3,     2,     2,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     5,     2,     2,     3,
       9,     3,     2,     9,     2,     9,     2,     9,     5,     3,
       2,     0,     2,     6,     8,     8,    10,     1,     4,     1,
       5,     4,     4,     7,     4,     7,     5,     3,     3,     7,
       5,     8,     0,     3,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     6,     4,     4,     4,     4,
       4,     4,     6,     6,     6,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     3,     1,     1,
       3,     3,     3,     5,     3,     4,     4,     6,     8,     8,
       5,     5,     1,     1,     1,     1,     1,     4,     6,     1,
       6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       2,     0,     4,     1,     5,    41,   742,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    20,     0,    17,    18,   743,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,    28,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   744,     0,     0,   749,
     745,    19,   746,   652,    43,   205,   168,   181,   237,    92,
     300,   380,   520,   551,     0,     0,   637,     0,   639,     0,
       0,     0,     0,    42,   575,     0,   724,     0,     0,   648,
     647,     0,    27,    26,    25,    23,    24,    22,    40,    30,
      32,    33,    34,    35,    31,    36,    37,    38,    39,     0,
       0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   717,   716,   742,     0,     0,     0,     0,     0,     0,
     718,   719,   720,   721,   722,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     725,   677,     0,   726,   723,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,   742,     0,     7,    44,    49,
      52,    51,     0,   210,     9,   206,   209,   208,   170,    10,
     183,    11,   242,    12,   238,   241,   240,   742,     0,     8,
      93,    98,    97,   305,    13,   301,   304,   303,   385,    14,
     381,   384,   383,   525,    15,   521,   524,   523,   556,    16,
     552,   555,   554,   563,     0,     0,     0,     0,   582,     0,
       0,   742,    62,     0,    59,   573,     0,    60,   595,     0,
       0,   642,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   679,   680,
       0,   728,     0,   729,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   715,
     641,   644,   740,   646,     0,   650,     0,     0,   747,     0,
     640,   653,     0,     0,     0,    83,   724,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,   638,   584,     0,     0,     0,     0,     0,     0,
       0,     0,   595,     0,     0,   103,   595,    75,     0,    72,
       0,    58,    70,    82,     0,     0,     0,   741,   734,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   678,   727,     0,   732,
     694,   693,   692,   691,   687,   688,   690,   689,   682,   681,
     683,   684,   685,   686,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,   742,     0,     0,     0,     0,     0,
       0,   207,   211,     0,     0,   169,   171,     0,   103,     0,
     182,   184,     0,     0,     0,     0,     0,     0,   239,   243,
       0,     0,    86,     0,     0,     0,     0,   302,   306,     0,
       0,   390,   382,   386,   392,     0,     0,     0,     0,   522,
     526,     0,     0,     0,     0,     0,   553,   557,   565,     0,
       0,   585,   586,   103,   588,     0,     0,     0,     0,     0,
       0,     0,   580,   581,   578,   579,   576,     0,     0,     0,
       0,   595,   109,     0,     0,     0,    86,     0,     0,    65,
      56,    64,     0,     0,   596,   735,   736,     0,     0,     0,
       0,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,     0,   706,   707,   708,   709,   710,   711,     0,     0,
       0,     0,   730,   731,     0,   649,     0,   750,   748,   655,
     654,     0,    91,    63,     0,     0,     0,     0,    45,     0,
       0,     0,   217,     0,   742,     0,   174,     0,   188,     0,
       0,   291,     0,   742,     0,   251,   269,   284,   103,     0,
       0,     0,     0,   742,     0,   312,   334,   742,     0,   393,
       0,   742,     0,   532,     0,     0,     0,   565,     0,     0,
       0,   566,     0,     0,   633,     0,     0,     0,     0,     0,
       0,     0,     0,   583,   582,     0,     0,     0,     0,   104,
       0,     0,    78,    76,    71,     0,    77,     0,    86,   572,
     724,   724,     0,     0,     0,     0,     0,   608,   724,     0,
     631,   631,   631,   601,   602,     0,     0,     0,   617,   618,
     105,   622,   624,   626,     0,     0,   630,     0,     0,     0,
     645,     0,     0,     0,     0,   643,   733,   651,    88,    47,
      46,    48,    84,    50,     0,   217,     0,   214,     0,     0,
     212,     0,   172,     0,   186,   185,     0,   246,     0,   244,
       0,     0,     0,     0,   103,    94,   100,   309,     0,   307,
       0,     0,     0,   387,     0,   415,     0,   527,     0,   529,
     530,   558,   566,   559,   561,   560,   564,     0,     0,     0,
       0,   103,     0,   590,     0,     0,     0,   568,     0,     0,
       0,     0,     0,   742,   656,   657,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,   675,     0,   150,     0,     0,     0,     0,
     141,   143,     0,     0,     0,     0,     0,     0,     0,     0,
     110,   111,   139,     0,   136,   723,   569,     0,     0,     0,
      73,   595,     0,     0,   614,   619,   103,   611,     0,     0,
     597,   600,   609,   610,   603,   604,   607,   605,   606,   613,
     612,     0,   615,   103,   621,     0,     0,     0,     0,   629,
     737,     0,     0,   705,   712,   713,   714,     0,    53,     0,
     220,   215,   219,   213,   176,   173,   190,   187,   294,   250,
     293,   245,   254,   247,   253,   271,   248,   286,   249,    95,
       0,   308,   315,   310,   314,     0,     0,     0,     0,   311,
     335,   337,   336,   388,   396,   389,   395,     0,   528,   536,
     531,   535,   534,   562,   567,     0,   635,   634,     0,     0,
       0,     0,     0,     0,   577,   101,   102,   595,   570,   138,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     132,   134,     0,   158,   156,   153,   155,   154,   742,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,   165,    80,    79,    74,     0,    57,    69,     0,     0,
       0,   598,   599,   632,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
       0,     0,     0,    96,     0,   353,   353,   364,   342,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   447,   449,   391,   416,
     470,     0,     0,     0,   103,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,   109,   109,     0,   135,
       0,   379,     0,   131,   130,   129,   128,   127,   123,   124,
     126,   125,   119,   120,   115,   118,   121,   116,   122,   157,
     159,   161,     0,   163,     0,     0,   137,     0,     0,    68,
      67,   103,   616,   106,   103,     0,     0,     0,   628,   738,
     739,    85,     0,     0,     0,     0,     0,   103,   103,   103,
     103,     0,     0,     0,   103,   218,   221,     0,     0,   175,
     177,     0,     0,     0,   189,   191,     0,     0,     0,     0,
     292,   295,     0,     0,     0,     0,   105,   105,     0,     0,
     252,   255,     0,     0,     0,   270,   272,     0,     0,     0,
     285,   287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,   325,   313,   316,   370,   370,   370,     0,     0,
       0,     0,     0,   724,     0,     0,     0,   394,   397,   406,
       0,     0,   103,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   425,   103,     0,   478,     0,   485,
       0,   493,   500,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   533,   537,   636,     0,     0,
       0,     0,     0,     0,     0,   148,     0,   149,     0,   145,
       0,     0,     0,   109,   378,     0,   160,   162,     0,     0,
       0,    81,   574,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,   103,     0,     0,     0,     0,
       0,     0,   103,     0,     0,     0,   165,   195,     0,     0,
       0,     0,     0,     0,     0,     0,   265,     0,     0,     0,
       0,     0,     0,   280,   282,     0,   276,   278,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   322,
       0,     0,     0,     0,   109,     0,     0,     0,     0,   371,
     372,   373,   374,   375,   376,   377,     0,     0,   338,   354,
       0,   339,     0,   340,   365,     0,     0,     0,   347,   341,
     343,     0,     0,   409,     0,   407,     0,     0,     0,   413,
       0,   411,     0,     0,   417,     0,     0,   418,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   105,   540,     0,     0,     0,     0,
       0,     0,     0,   571,     0,     0,   109,     0,   142,     0,
       0,   113,   164,     0,   166,   103,     0,     0,     0,    54,
     223,   224,   229,   230,     0,   233,     0,   232,   226,   225,
      86,   227,   222,     0,   231,   179,   178,     0,     0,   192,
     193,   296,   297,   298,   299,   256,   257,     0,     0,     0,
      86,   261,   262,   263,   264,   273,    86,   275,    86,   274,
     289,   288,   290,   330,   328,   329,   320,   318,   319,   317,
     332,   324,   331,   327,   321,     0,     0,     0,     0,     0,
       0,   361,   355,     0,   367,     0,     0,     0,   399,   398,
      86,   400,   401,   404,   405,    86,   402,   403,     0,     0,
       0,   103,     0,     0,     0,     0,     0,     0,   103,     0,
       0,     0,     0,   103,     0,     0,   103,   419,   479,     0,
       0,   103,     0,     0,     0,     0,   420,   486,     0,     0,
       0,     0,     0,   103,   421,   494,     0,     0,     0,     0,
       0,     0,     0,     0,   422,   501,   103,     0,   103,   724,
     724,   724,     0,   724,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   471,   473,   472,   473,     0,   538,
       0,   724,     0,     0,     0,     0,     0,   117,     0,     0,
       0,   152,     0,     0,     0,     0,     0,     0,     0,   103,
     103,     0,   103,   180,   197,   194,   258,     0,   259,     0,
     281,     0,   277,     0,     0,     0,     0,   359,   360,   362,
       0,   358,   109,   366,   109,   344,   345,     0,     0,     0,
       0,   346,   348,   408,     0,   412,     0,   423,   415,   424,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   441,
       0,   415,     0,     0,     0,     0,     0,   415,     0,     0,
       0,     0,     0,     0,     0,     0,   415,     0,     0,     0,
       0,     0,   415,   415,     0,     0,   510,     0,   454,     0,
       0,     0,     0,     0,     0,   458,   459,     0,     0,     0,
       0,     0,     0,     0,   453,     0,     0,     0,     0,   539,
       0,     0,     0,     0,     0,     0,   151,     0,     0,   144,
     114,     0,   620,   623,   625,   627,     0,     0,     0,     0,
       0,     0,     0,     0,   283,   279,     0,   323,   326,     0,
     356,   368,     0,     0,     0,     0,   410,   414,     0,     0,
     724,     0,   724,     0,     0,     0,     0,     0,   103,     0,
     482,   480,   481,   483,   103,     0,   489,   487,   488,   490,
     491,   103,   498,   496,     0,   495,   497,   505,   504,   506,
       0,     0,   502,   503,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   724,   474,     0,   543,   543,     0,   724,     0,
       0,     0,     0,     0,     0,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   196,   198,     0,
       0,   333,   363,     0,     0,   349,   350,   351,   352,   426,
     428,     0,     0,     0,     0,     0,     0,   434,     0,     0,
     484,     0,   492,     0,   499,   508,   509,   512,   507,   451,
       0,     0,   432,   433,     0,     0,     0,     0,     0,   464,
     468,   469,     0,   467,     0,   448,     0,   724,   477,   450,
     370,   370,   594,     0,   587,   591,     0,     0,     0,   147,
       0,   236,   235,   228,   234,     0,     0,     0,     0,     0,
       0,     0,   260,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,     0,     0,     0,   103,     0,
     103,     0,     0,     0,     0,     0,     0,   103,     0,   475,
     476,     0,     0,     0,     0,   542,     0,   544,   541,   724,
       0,     0,     0,     0,   199,   200,   201,   202,   203,   204,
       0,     0,     0,   415,   436,   437,     0,     0,     0,     0,
     435,     0,     0,   415,     0,     0,     0,     0,   103,     0,
       0,   511,   513,     0,   431,     0,   455,   456,   457,     0,
       0,   461,     0,     0,     0,     0,     0,     0,     0,   545,
       0,     0,     0,   146,     0,     0,     0,     0,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   103,     0,     0,     0,   466,
       0,   549,   550,   547,   548,   109,   589,     0,     0,     0,
     266,   357,   369,   427,   438,   439,   440,     0,   415,     0,
     445,   415,   519,   514,   517,   518,   515,   516,   452,   430,
       0,   415,   415,   460,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,   465,     0,   592,
       0,     0,     0,   443,   415,   446,   429,     0,     0,   546,
       0,     0,    89,     0,     0,   462,   463,     0,   267,     0,
      61,     0,   444,     0,     0,    90,     0,     0,     0,   442,
     593,    89,     0,     0,   268
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     1,     2,     4,     5,    24,    25,    26,   112,   188,
     189,   934,  1538,   244,   618,   245,  2011,   246,   500,   772,
     919,   351,   496,   352,   413,   184,   313,  2020,   314,   117,
     210,   442,   491,   492,  1514,   926,   609,   610,   760,  1012,
    1532,   761,   876,   877,  1356,   871,   910,  1034,  1036,   114,
     320,   426,   671,   937,  1070,   115,   321,   431,   673,   938,
    1075,  1388,  1661,  1758,   113,   195,   319,   422,   666,   936,
    1066,   116,   204,   322,   439,   680,   940,  1091,  1399,  1989,
    2024,   681,   941,  1096,  1248,  1408,  1245,  1406,   682,   942,
    1101,   676,   939,  1081,   118,   215,   325,   448,   690,   944,
    1114,  1420,  1264,  1555,   691,   840,  1118,  1290,  1437,  1572,
    1115,  1279,  1562,  1763,  1117,  1284,  1564,  1764,  1280,   762,
     119,   220,   326,   453,   580,   694,   949,  1128,  1294,  1440,
    1300,  1445,   847,   989,  1171,  1172,  1515,  1635,  1733,  1319,
    1468,  1321,  1477,  1323,  1485,  1324,  1495,  1714,  1847,  1902,
     120,   225,   327,   460,   698,   991,  1176,  1518,  1810,  1867,
    1955,   121,   230,   328,   467,    27,   329,   591,   707,    83,
     354,   237,   487,   344,   342,   356,   504,   786,   990,    28,
     111,   763,   281,   171,   172,   282,   283,    29,   174,    61,
      62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1448
static const short yypact[] =
{
   -1448,    86, -1448, -1448,   106,  3622,  -190,    79,  -132,   406,
     129,  1354,   359,  -106,   -49,   -30,   -17,    32,    43,    57,
      69,    87,   164,    26, -1448, -1448,   611, -1448, -1448,   -97,
      18,   174,   304,   363,   412,   436,   444, -1448,   464,   484,
     487,   509,   524, -1448,   570, -1448,   579,   591,   604,   606,
     627,   674,   685,   687,   717,   723, -1448,   292,   298, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448,   505,    42, -1448,   482, -1448,   485,
     501,   508,   518, -1448, -1448,   476,  2454,  4422,  -147, -1448,
   -1448,   526, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,   359,
     359,   150,   180,    80,   -77,    77,   244,   265,   450,   461,
     488,   527,   436,   668,  4422,  4422,   436,   361,    82,   797,
    4422, -1448, -1448,  -115,   738,   559,   564,   572,   574,   576,
   -1448, -1448, -1448, -1448, -1448,   605,   626,   647,   652,   654,
     659,   691,   697,   706,   716,   727,   741,   750,   756,   775,
     777,   782,   783,   784,   786,   787,  4422,  4422,  4422,  4234,
    2683, -1448,   830, -1448, -1448,   858,  4972,   864,  4234,    91,
     678,  -139,   990, -1448,  1007,   -65,   788, -1448, -1448, -1448,
   -1448, -1448,   -86, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448,  -179,   789, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448,   790,  2775,  3695,  1807,   798,   795,
    1807,   -79, -1448,    37, -1448, -1448,   815, -1448, -1448,  4999,
     613, -1448,  1050,  1072,  4422,  4422,   359,  4422,  4422,  4422,
    4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422,
    4422,  4422,  4422,  4422,  4422,  4422,  4422,   359,   -44,   -44,
    5404,  2683,   135, -1448,  4422,  4422,  4422,  4422,  4422,  4422,
    4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422, -1448,
   -1448, -1448, -1448, -1448,   -52, -1448,  4422,   359, -1448,  4234,
   -1448,   845,  2046,   846,   847, -1448,  2392,   856,  4422,   227,
     178,   545,   689,    61, -1448,   681,   810,   607,   771,   812,
    4422,  4422, -1448, -1448,    82,    82,     7,   827,   828,   832,
     835,   839, -1448,    82,   238,   105, -1448,  1086,  4422, -1448,
    4234, -1448, -1448, -1448,   838,    36,   151, -1448, -1448,   263,
     848,   840,  2082,  2418,   849,  5427,  5453,  5479,  5505,  5531,
    5557,  5583,  5609,  5635,  5661,  3158,  5687,  5713,  5739,  5765,
    5791,  5817,  3446,  3672,  3759,   850, -1448, -1448,  4234,  2808,
    6483,  6529,  1309,  1309,   754,   754,   754,   754,   624,   624,
     -44,   -44,   -44,   -44,  1104,  5843,   854,   -50,  4370,  4422,
    5026,    85,    85,   155,   -56,  1111,    85,  5869,    27,  1118,
    1119, -1448, -1448,   862,  1135, -1448, -1448,   877,    46,  1137,
   -1448, -1448,   879,  1140,  1141,   883,   902,   903, -1448, -1448,
     934,   937,   171,  1192,  1193,   935,   938, -1448, -1448,  1196,
     940, -1448, -1448, -1448, -1448,  1200,   971,   436,   436, -1448,
   -1448,   436,   972,   436,   359,  1232, -1448, -1448, -1448,  2831,
     679,  1032, -1448,    46, -1448,   977,  4234,   980,   985,   994,
     181,  1000, -1448, -1448, -1448, -1448, -1448,  1255,  1004,  1005,
    1008, -1448, -1448,   211,  4422,  5895,   303,   323,  1134, -1448,
   -1448, -1448,  1258,  3762, -1448, -1448, -1448,  1263,  4422,  4422,
    1262, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448,  4422, -1448, -1448, -1448, -1448, -1448, -1448,  4422,  4422,
    4422,  1266,  2683, -1448,  4422, -1448,  1271, -1448, -1448, -1448,
    6435,  5053, -1448, -1448,  1276,  1281,  1282,  1292, -1448,  1291,
    1065,  1038, -1448,  1296,   -14,  1297, -1448,  1298, -1448,  1302,
    1307, -1448,  1316,   -14,  1317, -1448, -1448, -1448,    46,  1091,
    1321,  1324,  1323,   -14,  1326, -1448, -1448,   -14,  1327, -1448,
    1067,   -14,  1328, -1448,  1330,  1334,  1335, -1448,  1337,  1339,
    1343,  1087,  4422,  4422, -1448,  1346,  1088,  4234,   366,  4234,
    4234,  4234,  1348, -1448,   798,  4422,  1351,   359,   253, -1448,
    2130,  1352,  3086,  1345, -1448,    58, -1448,    82,   267, -1448,
    1893,  1893,  1096,  1380,   352,  4422,  4422, -1448,  1893,  4422,
    1381, -1448, -1448, -1448, -1448,  4422,  1382,  1177, -1448, -1448,
    1124,  1125,  1126,  1127,  1143,  1406, -1448,  1152,  4053,  4252,
   -1448,  5918,  5944,  5970,  5996, -1448,  6435, -1448, -1448, -1448,
   -1448, -1448,  1148, -1448,  1347, -1448,   231, -1448,  1154,  1410,
   -1448,   411, -1448,   415, -1448, -1448,   249, -1448,  1411, -1448,
     339,   463,   507,  1412,    46, -1448, -1448, -1448,  1414, -1448,
     358,   169,  1416, -1448,   418, -1448,  1420, -1448,   547, -1448,
   -1448, -1448,  1163, -1448, -1448, -1448, -1448,   611,   599,  6022,
    1165,    46,   513, -1448,   523,   543,   548, -1448,  1166,  6045,
    1172,  1175,  1429,   243, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448,  1182, -1448,  1184,  1185,  1186,  1187,
   -1448, -1448,  1441,  2130,  2130,  2130,  2130,  1447,   314,  1446,
    6556,   -93,  1197,  1197, -1448,  1199, -1448,  4422,  4422,    59,
   -1448, -1448,  1202,    38, -1448, -1448,    46, -1448,   359,   359,
   -1448,  6435,  6435, -1448,  6435, -1448,  1464,  1464,  1464,  6435,
   -1448,  4234,  6435,    46, -1448,  4422,  4422,  4422,  4234, -1448,
   -1448,  4422,  4422, -1448, -1448, -1448, -1448,  4422, -1448,   467,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
    1472, -1448, -1448, -1448, -1448,  1207,  1217,  1220,  1221, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448,  2724, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448,  4422, -1448, -1448,  4422,  1223,
    1226,  1228,  1229,  1230, -1448, -1448, -1448, -1448, -1448, -1448,
    1231,  1233,  1231,  2130,  1482,  1492,  1240,  1241,  1261,  1245,
    1245,  1245,  6510, -1448, -1448, -1448, -1448, -1448,    -1,  1242,
   -1448,  2130,  2130,  2130,  2130,  2130,  2130,  2130,  2130,  2130,
    2130,  2130,  2130,  2130,  2130,  2130,  2130,  1505,  4422,  1987,
   -1448,  1247,  6435,  3103, -1448,   287, -1448, -1448,   436,    37,
    1259, -1448, -1448, -1448,   550, -1448,   563,  4275,  4298,  4321,
     577,  6071,  6097,  5080,  1272, -1448,   907,   109,   -12,   672,
    1075,   477,   424, -1448,  1014, -1448, -1448, -1448, -1448,   534,
      23,   -21,    76,  1274,  1275,  1277,  1278,  1279,  1280,  1284,
    1287,  1288,  1524,  1289,   196,   225,   308,  1299,  1290,  1294,
    1303,  1304,  1308,  1310,  1331,  1332,  1329,  1340,  1338,  1341,
    1342,  1349,  1353,  1350,  1355,  1357, -1448, -1448, -1448, -1448,
   -1448,    51,  5107,  4344,    46,  4234,  4234,  4234,  4234,   340,
    1315, -1448,  1333,  2026,  1364,  1344, -1448, -1448,  1365, -1448,
    1363, -1448,  2130,  2745,  1540,  1731,  1731,  1731,   718,   718,
     718,   718,   739,   739,  1245,  1245,  1245,  1245,  1245, -1448,
   -1448, -1448,  1371,  6556,   342,  4181, -1448,  4422,  1532, -1448,
   -1448,    46, -1448, -1448,    46,  4422,  4422,  4422, -1448, -1448,
   -1448, -1448,  1306,    82,    82,    82,    82,    78,    97,    46,
      46,  1367,   436,  1535,   102, -1448, -1448,     8,  1583, -1448,
   -1448,  1368,  1589,  1590, -1448, -1448,  1593,    33,  1596,   436,
   -1448, -1448,  1600,  1604,  1605,  1369,  1124,  1124,    82,    82,
   -1448, -1448,  1607,    31,    41, -1448, -1448,  1608,   436,  1629,
   -1448, -1448,  1638,  1639,  1644,    39,   436,   436,  1603,  1647,
      82,  1893, -1448, -1448, -1448,   941,  1625,  1062,    47,  1671,
     436,    44,   359,  1893,   359,    60,   436, -1448, -1448, -1448,
     436,  1670,    46,    46,  1672,   436,   436,   436,   436,   436,
     436,   436,   436,   436, -1448,    46,  4422, -1448,  4422, -1448,
    4422, -1448, -1448,    82,   359,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,  1673,
     436,  1423,  1425,  1421,   436, -1448, -1448, -1448,  4422,  1419,
     586,   615,   637,   642,  1679, -1448,  1422, -1448,  2130, -1448,
    1426,  1428,  1427, -1448, -1448,  3141, -1448, -1448,  2130,  1431,
     657,  6435, -1448,  1430, -1448,  4388,  4411,  4443,    37,  1685,
    1687,  1688,  1691,    46,  1692,    46,  1695,  1697,  1700,  1055,
    1704,  1705,    46,  1707,  1708,  1711,  1247, -1448,  1712,  1713,
    1714,  1715,  1717,  1718,  1719,    64,  1463,  1725,  1724,  1728,
    1732,  1733,  1735, -1448, -1448,  1737, -1448, -1448,  1739,  1747,
    1750,  1753,  1758,  1767,  1768,  1769,  1777,  1786,  1789, -1448,
    1790,  1791,  1793,  1795, -1448,  1727,  1798,  1799,  1480, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448,    82,  1800, -1448, -1448,
    1547, -1448,    82, -1448, -1448,  1548,  1805,  1810, -1448, -1448,
   -1448,  1809,  1817, -1448,  1818, -1448,  1819,  1822,  1824, -1448,
    1825, -1448,  1828,  1580, -1448,  1585,  1586, -1448,  1587,  1588,
    1591,  1592,  1594,  1595,  1597,  1598,  1599,  1609,  4466,   644,
    4489,   561,  4512,   597,   430,  1606,  1611,  1612,  1613,  1614,
    1615,  1616,  1618,  1602,  1622,  1623,  1626,  1627,  1628,  1641,
    1642,  1645,  1653,    63,    63, -1448,  1848,  5134,  1649,  1650,
    1651,  1657,  1658, -1448,    82,  6462, -1448,  4422, -1448,  1863,
    1689, -1448,  6556,    82, -1448,    46,  4422,  4422,  4422, -1448,
   -1448, -1448, -1448, -1448,  1683, -1448,  1684, -1448, -1448, -1448,
    1686, -1448, -1448,  1693, -1448, -1448, -1448,  1864,   612, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448,  1866,  1839,  1946,
    1686, -1448, -1448, -1448, -1448, -1448,   673, -1448,   676, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
    1696, -1448, -1448, -1448, -1448,  1698,  1948,  1953,  1955,  1961,
    1958, -1448, -1448,  1960, -1448,  1962,  1964,   458, -1448, -1448,
     682, -1448, -1448, -1448, -1448,   686, -1448, -1448,  1977,  1721,
    1981,    46,   436,   436,  4422,  4422,  4422,   436,    46,    82,
    1982,  4422,  1729,    46,  4422,  4422,    46, -1448, -1448,  4422,
    1730,    46,  4422,  4422,  4422,  4422, -1448, -1448,  4422,  4422,
    4422,  1740,  4422,    46, -1448, -1448,  4422,  4422,   436,  1751,
    1782,  4422,  4422,  1788, -1448, -1448,    46,  1988,    46,  1893,
    1893,  1893,  4422,  1893,  2047,  2049,   436,   436,  4422,   436,
     436,    82,  2048,  2051, -1448, -1448, -1448, -1448,    20, -1448,
    1796,  1893,  4234,  1801,  4234,  4234,  1709, -1448,  1803,  4535,
    1808, -1448,  2130,  1811,  1794,  5161,  5188,  5215,  1802,    46,
      46,  1055,    46, -1448, -1448, -1448, -1448,  2064, -1448,  2066,
   -1448,  2067, -1448,  2068,   436,  2094,  2104, -1448, -1448, -1448,
    1815, -1448, -1448, -1448, -1448, -1448, -1448,  1231,  1231,  1231,
      82, -1448, -1448, -1448,   436, -1448,   436, -1448, -1448, -1448,
    1816,  1847,  1849,  4558,  4581,  4604,  1853,  1855,  1858, -1448,
    4627, -1448,  2118,   157,  1006,  2131,  4650, -1448,  2132,  1045,
    1071,  1227,  1273,  4673,  1336,  1522, -1448,  1572,  2136,  1601,
    1881,  2137, -1448, -1448,  1963,  2105, -1448,   376, -1448,  1871,
    1888,  1889,  1884,  4696,  1885, -1448, -1448,  1886,  1890,  6123,
    1899,  1900,  1923,   692, -1448,   431,   480,  1928,  1929, -1448,
    4422,  1930,   694,  4422,   730,   745, -1448,  1935,  4422, -1448,
    6556,  1932, -1448, -1448, -1448, -1448,  1934,  1939,  1942,  1941,
    1956,   617,  2209,  1952, -1448, -1448,  1966, -1448, -1448,  2213,
   -1448, -1448,  2214,  2215,  2216,  2219, -1448, -1448,  2993,  2220,
    1893,  4422,  1893,  4422,  4422,   436,  2222,   436,    46,  3047,
   -1448, -1448, -1448, -1448,    46,  3119, -1448, -1448, -1448, -1448,
   -1448,    46, -1448, -1448,  3304, -1448, -1448, -1448, -1448, -1448,
    3358,  3412, -1448, -1448,   752,  2223,  4422,    46,  2225,  2226,
    4422,   359,   359,  4422,  4422,  2229,  2230,  2231,   359,  2232,
    2106,  2235,  1621, -1448,  2237, -1448, -1448,  5242,  1893,  1985,
    5269,  1990,  1989,  1993,  5296, -1448,    37,  2253,  2262,  2263,
    2272,  2277,  4422,  4422,  4422,  4422,  4422, -1448, -1448,  2172,
    2278, -1448, -1448,  2018,  2021, -1448, -1448, -1448, -1448,  2274,
   -1448,  2029,  6149,  2023,  4719,  4742,  2025, -1448,  2036,  2030,
   -1448,  2031, -1448,   496, -1448, -1448, -1448, -1448, -1448, -1448,
    4765,   497, -1448, -1448,  6175,  2039,  2042,  4788,  4811, -1448,
   -1448, -1448,   763, -1448,   359, -1448,   359,  1893, -1448, -1448,
    1875,  1980, -1448,  2037, -1448, -1448,  2040,  4234,  4422, -1448,
    2043, -1448, -1448, -1448, -1448,  2299,  2273,  2305,  2386,  2518,
    2558,  2306, -1448, -1448,  1231,  2050,  2303,  2308,  4422,  4422,
    4422,  4422,  2309,    46,  4422,  2053,  4422,   479,    46,  2313,
      46,  2319,  2327,  2328,  4422,  4422,  2329,    46,   765, -1448,
   -1448,  2334,  2344,  2352,    82, -1448,  2100, -1448, -1448,  1893,
    4422,   773,  5323,  4422, -1448, -1448, -1448, -1448, -1448, -1448,
    2095,  2102,  2103, -1448, -1448, -1448,  6201,  6227,  6253,  4834,
   -1448,  2108,  4857, -1448,  6279,  2358,  2359,  4422,    46,  2360,
      82, -1448, -1448,  2109, -1448,   499, -1448, -1448, -1448,  6305,
    6331, -1448,  2107,  2362,  2366,  2367,  2368,  2369,  2372, -1448,
    2115,  4880,  2120, -1448,  6357,  2380,  2381,  2382,  3597,  2383,
    2393,  2395,  1893,  2135,  4422,  3651,  2139,  2397,  2398,  2719,
    2399,  2400,  2401,  2402,  2403,    46,  2147,  2148,  2406, -1448,
    2149, -1448, -1448, -1448, -1448, -1448, -1448,  4422,  2151,  2414,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448,  2181, -1448,  6383,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
    2114, -1448, -1448, -1448,  2441,  2190,  5350,  4422, -1448,  2388,
    4422,  3705,  2187,  3890,  2445,  3944,  3998, -1448,  2446, -1448,
    4903,   436,  4926, -1448, -1448, -1448, -1448,  2447,  2448, -1448,
    4422,  2449,  2198,  4422,  4183, -1448, -1448,  4949, -1448,  2199,
   -1448,  6409, -1448,  4422,  2335, -1448,  2459,  5377,  2463, -1448,
   -1448,  2198,  2462,  2205, -1448
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448,  -249, -1448,  -320, -1448,  1394, -1448, -1448,
    1395,  -338, -1448,  -486, -1448,  -408,  -544,   441, -1448, -1448,
   -1448, -1448,   842, -1448,  -618, -1448,  -980, -1448,  -673, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448,  1720, -1448,  1251, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,  1846, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
    1570, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1111,  -712,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1447, -1448, -1448, -1448,  1173,  1009, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448, -1448,   791, -1448,
   -1448, -1448, -1448, -1448, -1448, -1448, -1448,  1944, -1448,  1826,
   -1448,  2405, -1448,  1925,  2295,  -322, -1448,   388,    22,   -62,
   -1448, -1448,  1108,  -514,  -568,  -177,   -41, -1448,    -5,  -101,
     -51
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -677
static const short yytable[] =
{
      30,   304,    34,   441,     6,   547,  1285,    60,   180,   181,
     669,   869,   241,   241,   471,   472,   474,   501,    74,   678,
     480,  1186,   794,   481,   493,  1637,  1191,  1192,     6,   688,
      91,     6,   551,   692,   571,   175,  1243,   696,   543,   347,
     347,     6,     6,   917,  1255,   173,  1246,   123,    84,     6,
     191,   197,   774,   775,   206,   212,   217,   222,   227,   232,
     783,   347,   347,     6,     6,     6,   241,   415,     6,   488,
    1071,  1396,  1224,   359,  1072,  1073,   242,   242,    31,   323,
     879,   880,   881,   882,     6,     6,     3,   241,   615,    31,
     543,     7,     8,    75,    76,    77,   764,    78,   305,   488,
     499,   488,   242,   918,    60,    60,    -3,   192,    30,    13,
     177,    30,    30,    30,    30,    30,    30,   233,   308,   178,
     488,   238,   238,   247,    35,   488,  1173,   309,   488,   770,
     242,  1678,   407,  1286,   190,   196,    43,  1638,   205,   211,
     216,   221,   226,   231,  1689,   489,  1256,  1174,   316,   250,
    1695,   242,    63,    31,   242,   364,  1257,  1287,  1000,  1704,
    1002,   317,   544,   545,  1691,  1710,  1711,   549,   907,   608,
     908,    85,   318,   497,     6,   489,   385,   489,  1067,   -63,
       7,     8,    75,    76,    77,   185,    78,   198,   199,    31,
    1068,     7,     8,    75,    76,    77,   489,    78,    13,   312,
    1003,   489,   -63,    31,   489,   404,   406,   538,   250,    13,
     773,   298,    31,  1360,   388,    64,   388,   299,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,    65,   125,  1033,  1132,   353,   764,
     764,   764,   764,   186,    75,    76,    77,    66,    78,     6,
     668,    60,    86,  1074,    31,     7,     8,    75,    76,    77,
     423,    78,    75,    76,    77,   175,    78,    31,   243,   243,
     207,   473,    60,    13,   424,   173,     7,     8,    75,    76,
      77,  1130,    78,   914,  1425,  1639,   835,   836,   837,   838,
      73,   552,   348,   348,    13,  1244,    67,   771,   124,   598,
     349,   349,    60,   350,   350,  1247,   769,    68,  1293,   418,
      88,  1288,  1289,   419,   348,   348,  1175,   884,   247,   885,
     440,    69,   243,   420,  1299,   350,   350,   793,   668,   247,
     247,   247,   208,    70,  1133,    32,  1213,   490,   247,  1195,
      33,   200,   201,   243,   193,   194,   243,   533,   454,   306,
     353,    71,    75,    76,    77,  1215,    78,     6,    56,   764,
    1222,    57,    58,   589,     6,    56,     6,   239,    57,    58,
      89,    75,    76,    77,  1069,    78,  1528,   764,   764,   764,
     764,   764,   764,   764,   764,   764,   764,   764,   764,   764,
     764,   764,   764,   285,   286,   764,   287,   288,   289,   290,
     387,   388,   291,   292,   293,   294,   295,   296,   297,   182,
     502,    36,   298,    37,   546,   555,   183,   503,   299,    90,
     712,   183,   714,   715,   716,    38,    39,    40,    72,   564,
     570,    75,    76,    77,   839,    78,  1928,   183,    87,   574,
     602,     6,    41,   425,   578,   187,  1935,   503,  1486,   915,
     582,    92,   584,   585,  1146,     6,   586,   886,   588,    60,
    1147,     7,     8,    75,    76,    77,     6,    78,  1238,  1239,
     611,    93,     7,     8,    75,    76,    77,   503,    78,    13,
      75,    76,    77,  1148,    78,   482,   483,   484,   485,  1149,
      13,    94,   421,     6,    95,   810,   811,  1895,   764,     7,
       8,    75,    76,    77,   486,    78,   721,   759,   202,   203,
    1097,    31,   722,   818,   819,  1355,    96,    13,  1487,   503,
    1098,  1991,  1099,   780,  1993,  1362,   -66,   887,   505,   388,
     209,    97,     6,   183,  1995,  1996,  1567,  1568,     7,     8,
      75,    76,    77,  1263,    78,   999,  1038,    75,    76,    77,
     109,    78,     6,   503,   110,  1297,    13,  2014,     7,     8,
      75,    76,    77,  1488,    78,  1896,  1150,  1897,   614,   183,
    1489,  1490,  1151,  1092,  1569,  1093,    13,    98,  1898,   173,
     173,  1040,  1670,  1094,  1671,    59,    99,   173,  1570,   388,
     616,  1899,    59,  1491,   778,   779,  1492,  1493,   100,  1184,
      42,  1197,    60,   822,   823,   765,   503,   855,  1198,  1900,
     353,   101,   247,   102,   924,  1479,   131,   132,   133,    60,
    1119,   930,   832,   833,    75,    76,    77,   427,    78,   842,
    1120,   713,   388,   428,   103,  1715,   852,   135,   136,   137,
     138,   429,  1716,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,  1121,  1122,
    1123,  1124,  1125,  1126,   764,   814,   815,   921,   922,   816,
     817,   104,   844,   845,   764,  1480,    30,   593,   812,  1100,
    1731,  1397,   105,    30,   106,  1494,   122,  1732,   820,  1866,
    1866,  1470,   824,   455,  1471,  1380,  1751,  1752,  1753,  1754,
    1755,  1756,   834,   841,   213,   214,   846,  1472,  1473,   456,
     851,  1474,  1475,  1571,   107,   218,   219,   825,   826,    84,
     108,   810,   935,  1209,  1210,  1211,  1212,  1481,   125,  1734,
     130,   457,  1095,   126,  1901,   251,  1732,  1225,   765,   765,
     765,   765,   223,   224,   889,  1845,  1849,   432,  1944,   127,
    1482,  1483,  1846,  1850,   353,  1945,   128,   443,  1240,  1241,
    1076,   827,   828,    60,    60,   433,   129,   444,   860,   388,
    1077,  1078,  1079,   179,  1462,   434,   435,  1463,   861,   388,
    1262,   228,   229,   445,   436,   458,   437,   446,   234,  1127,
    1464,  1465,  1466,   248,    79,    80,    81,    82,   862,   388,
     430,   849,   850,   863,   388,  1042,   388,   252,  1180,  1181,
    1182,  1183,   253,    75,    76,    77,  1476,    78,  1043,  1044,
     254,   812,   255,  1325,   256,   285,   286,   300,   287,   288,
     289,   290,  1048,   388,   291,   292,   293,   294,   295,   296,
     297,  1349,   388,  1881,   298,  1672,  1673,  1674,  1200,  1650,
     299,   166,  1484,   257,   856,   301,   167,   461,   765,   168,
    1369,   303,   459,   295,   296,   297,  1544,  1545,   358,   298,
    1350,   388,  1757,  1010,   258,   299,   765,   765,   765,   765,
     765,   765,   765,   765,   765,   765,   765,   765,   765,   765,
     765,   765,  1351,   388,   765,   259,   449,  1352,   388,  1467,
     260,   462,   261,  1039,   353,   285,   286,   262,   287,   288,
     289,   290,  1364,   388,   291,   292,   293,   294,   295,   296,
     297,  1620,  1621,  1622,   298,  1624,   594,  1080,  1550,   183,
     299,  1552,   183,   450,   307,  1131,   447,  1573,   183,   263,
     451,  1575,   183,  1641,   438,   264,  1430,  1729,  1730,  1739,
     388,   463,  1433,   464,   265,   900,   901,   902,   903,   904,
     905,  1129,  1541,   906,   266,  1985,  1053,  1054,  1055,  1056,
    1057,  1058,  1059,  1060,  1061,   267,   465,  1062,   902,   903,
     904,   905,  1549,  1063,   906,  1741,   388,   310,  1551,   268,
    1553,   293,   294,   295,   296,   297,  1064,   765,   269,   298,
    1742,   388,   311,  1692,   270,   299,  1787,  1788,   764,   787,
     788,  1296,  1265,  1298,  1266,  1267,  1268,  1659,  1856,  1857,
    1913,  1914,  1574,   271,  1526,   272,   466,  1576,  1922,   388,
     273,   274,   275,  1533,   276,   277,   315,   324,   247,   247,
     247,   247,  1697,  1326,   330,   360,   343,  1220,   131,   132,
       6,   345,   247,  1269,  1270,  1271,  1272,  1273,  1274,  1275,
     173,  1276,  1277,   355,  1233,   452,   468,   361,  1698,   408,
     411,   412,   173,   247,   247,   140,   141,   142,   143,   144,
     416,   475,   476,  1250,   494,  1102,   477,  1103,  1104,   478,
    1105,  1258,  1259,   479,   498,   247,   507,   506,   510,   531,
    1106,   535,  1771,   537,  1773,  1292,  1295,    60,   548,    60,
    1301,  1302,  1882,   553,   554,  1303,   556,  1107,  1108,  1109,
    1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1588,
     557,   558,   560,   561,  1110,   562,   563,   565,   247,    60,
    1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1335,  1336,
    1337,  1338,  1339,  1340,  1808,  1342,   566,   567,   568,  1346,
    1813,  1082,  1065,  1083,  1084,  1085,  1086,  1087,  1088,  1089,
     131,   132,     6,   765,  1269,  1270,  1271,  1272,  1273,  1274,
    1275,  1632,  1282,   765,   170,   176,   569,   572,   573,   575,
    1111,   577,   576,   353,   579,   581,  1278,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   235,   236,  1699,   583,   587,   590,   249,  1860,
     595,   597,   285,   286,   599,   287,   288,   289,   290,   600,
    1675,   291,   292,   293,   294,   295,   296,   297,   601,   603,
     604,   298,   605,   606,   617,   619,   607,   299,   647,   650,
     559,   247,  1112,   655,   278,   279,   280,   247,   657,  1113,
    1700,   285,   286,   659,   287,   288,   289,   290,   660,   661,
     291,   292,   293,   294,   295,   296,   297,   662,   663,   664,
     298,  1920,   665,   667,   670,   672,   299,   285,   286,   674,
     287,   288,   289,   290,   675,   596,   291,   292,   293,   294,
     295,   296,   297,   677,   679,   684,   298,  1283,   685,   686,
     687,   695,   299,   689,   693,   697,  1925,   699,  1516,  1516,
    1090,   700,   701,  1702,   703,  1642,   704,  1644,  1645,   247,
     705,   710,   706,   768,   711,   717,   720,    44,   247,   766,
     776,    45,   362,   363,  1967,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   777,   785,   790,   793,   795,
     796,   797,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   798,  1820,   799,
     683,   800,   807,   808,   405,   409,    46,   813,   821,   829,
     410,   831,    47,   843,   170,   166,   417,   848,   853,   858,
     167,   866,   864,   168,   867,    48,   868,    49,   469,   470,
     870,   791,   872,   873,   874,   875,   878,  1581,  1582,    50,
     883,   888,  1586,    51,   247,   909,   495,  -676,   173,   173,
     173,   916,   173,   285,   286,    52,   287,   288,   289,   290,
     923,   945,   291,   292,   293,   294,   295,   296,   297,   943,
     173,   946,   298,  1611,   947,   948,    53,  1004,   299,   994,
     995,  1001,   996,   997,   998,   759,   532,  1005,  1006,  1007,
     906,  1627,  1628,  1008,  1630,  1631,   247,  1011,  1029,   285,
     286,  1035,   287,   288,   289,   290,   540,   541,   291,   292,
     293,   294,   295,   296,   297,  1041,   830,   765,   298,  1703,
    1052,  1144,  1135,  1136,   299,  1137,  1138,  1139,  1140,  1202,
    1221,    54,  1141,    55,  1918,  1142,  1143,  1145,  1153,  1666,
     289,   290,  1154,   859,   291,   292,   293,   294,   295,   296,
     297,  1155,  1156,  1152,   298,   247,  1157,  1208,  1158,  1676,
     299,  1677,   285,   286,  1185,   287,   288,   289,   290,  1705,
    1942,   291,   292,   293,   294,   295,   296,   297,  1226,  1159,
    1160,   298,  1187,  1161,  1228,  1229,  1163,   299,  1230,  1164,
    1165,   917,   612,  1190,  1162,  1234,  1260,  1166,  1707,  1235,
    1236,  1167,  1242,  1249,  1168,  1170,   648,   649,   920,  1169,
    1795,  1796,  1189,  1193,   131,   132,   133,  1802,  1194,   651,
    1196,  1219,  1227,  1237,  1251,   925,   652,   653,   654,   173,
    1871,   173,   656,  1252,  1253,   135,   136,   137,   138,  1254,
    1261,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,  1291,  1304,  1341,  1307,
    1776,  1343,  1778,  1344,  1348,  1345,  1353,  1358,  1354,  1363,
    1357,   173,  1370,  1359,  1371,  1372,  1365,   173,  1373,  1375,
     708,   709,  1377,  1858,  1378,  1859,  1265,  1379,  1266,  1267,
    1268,  1381,  1382,   719,  1384,  1385,    60,    60,  1386,  1389,
    1390,  1391,  1392,    60,  1393,  1394,  1395,  1398,   170,   170,
    1400,  1401,  1426,   781,   782,  1402,   170,   784,  1429,  1403,
    1404,   353,  1405,   789,  1407,   792,  1409,  1269,  1270,  1271,
    1272,  1273,  1274,  1275,  1410,  1276,  1277,  1411,   285,   286,
    1412,   287,   288,   289,   290,  1413,   173,   291,   292,   293,
     294,   295,   296,   297,  1414,  1415,  1416,   298,   893,   894,
     895,   896,   897,   299,  1417,   898,   899,   900,   901,   902,
     903,   904,   905,  1418,  1134,   906,  1419,  1421,  1422,    60,
    1423,    60,  1424,  1427,  1428,  1432,  1434,  1431,   285,   286,
    1435,   287,   288,   289,   290,  1436,  1438,   291,   292,   293,
     294,   295,   296,   297,  1439,  1441,  1442,   298,   173,  1443,
    1806,  1444,  1446,   299,  1807,  1447,  1179,   285,   286,  1448,
     287,   288,   289,   290,  1449,  1450,   291,   292,   293,   294,
     295,   296,   297,  1451,  1452,  1519,   298,  1453,  1454,   247,
    1455,  1456,   299,  1457,  1458,  1459,  1530,  1504,  1460,   166,
    1497,  1543,  1496,  1546,   167,   912,   913,   168,  1498,  1499,
    1500,  1501,  1502,  1203,  1503,   169,  1204,  1505,  1708,  1506,
    1281,   173,  1507,  1508,  1509,   247,   131,   132,   133,  1214,
    1216,  1217,  1218,   927,   928,   929,  1223,  1510,  1511,   931,
     932,  1512,  1513,  1521,  1522,   933,  1523,   135,   136,   137,
     138,  1524,  1525,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,  1531,  1539,
    1540,  1547,   183,  1548,  1554,  1557,  1861,  1556,  1862,  1542,
    1558,  1863,  1559,   992,  1560,  1561,   993,  1563,  1646,  1565,
    1712,  1566,   896,   897,  1305,  1306,   898,   899,   900,   901,
     902,   903,   904,   905,  1577,  1578,   906,  1317,  1579,  1589,
     131,   132,   723,  1591,  1597,  1618,  2012,  1269,  1270,  1271,
    1272,  1273,  1274,  1275,  1606,  1864,   333,   334,   335,   336,
     337,   338,   339,   340,   341,  1612,  1030,   140,   141,   142,
     143,   144,   724,   725,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   737,   738,   739,   740,   741,
     742,   743,   744,   745,   746,   747,  1613,   748,   749,   131,
     132,     6,  1616,  1633,  1625,  1374,  1626,  1376,  1634,  1652,
    1640,  1861,  1647,  1862,  1383,  1643,  1863,  1649,  1656,  1662,
    1651,  1663,  1664,  1665,  1669,  1679,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,  1667,  1269,  1270,  1271,  1272,  1273,  1274,  1275,   750,
    1864,  1668,  1713,  1680,  1686,  1681,   751,   285,   286,  1685,
     287,   288,   289,   290,  1687,  1690,   291,   292,   293,   294,
     295,   296,   297,   131,   132,   723,   298,  1717,  1693,  1696,
    1865,   166,   299,  1706,  1709,  1201,   167,  1718,  1719,   168,
    1720,  1722,  1723,  1205,  1206,  1207,  1724,   169,  1726,  1727,
     140,   141,   142,   143,   144,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   747,  1728,
     748,   749,  1735,  1736,  1743,  1746,  1738,  1745,  1747,   285,
     286,  1748,   287,   288,   289,   290,  1749,  1534,   291,   292,
     293,   294,   295,   296,   297,  1750,  1759,  1760,   298,   170,
    1762,  1765,  1766,  1767,   299,  1761,  1768,  1770,   752,  1777,
    1789,   170,  1792,  1793,   753,   754,  1799,  1800,  1801,  1803,
     755,  1804,  1805,   756,  1809,  1868,  1031,  1032,   757,   758,
    1814,   759,   750,  1817,  1318,  1816,  1320,  1818,  1322,   751,
    1821,   890,   891,   892,   893,   894,   895,   896,   897,  1822,
    1823,   898,   899,   900,   901,   902,   903,   904,   905,  1824,
    1875,   906,  1825,  1831,  1833,  1832,  1347,  1834,  1836,  1838,
    1835,  1841,  1188,  1580,   166,  1842,  1843,  1844,  1852,   167,
    1587,  1853,   168,  1869,  1870,  1592,  1874,   409,  1595,  1873,
    1884,  1880,  1876,  1598,  1883,  1885,  1890,  1893,   285,   286,
    1904,   287,   288,   289,   290,  1608,  1906,   291,   292,   293,
     294,   295,   296,   297,  1907,  1908,  1911,   298,  1617,  1915,
    1619,   285,   286,   299,   287,   288,   289,   290,   508,  1916,
     291,   292,   293,   294,   295,   296,   297,  1917,  1919,   668,
     298,  1926,  1927,  1937,  1938,  1941,   299,  1933,  1943,  1949,
    1950,   752,  1948,  1994,  1951,  1952,  1953,   753,   754,  1954,
    1956,  1657,  1658,   755,  1660,  1958,   756,  1960,  1961,  1962,
    1964,   757,   758,  1877,   759,   131,   132,   414,   134,  1968,
    1965,    57,  1966,  1971,  1972,  1973,  1975,  1976,  1977,  1978,
    1979,  1981,  1982,  1983,  1984,  1987,   135,   136,   137,   138,
     139,  1988,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,  1990,  1997,  1998,
    2001,  2004,  2006,  2009,  2015,  2016,  2018,   131,   132,   133,
     134,   242,  2019,    57,  2025,  1529,  2029,  2028,  2031,  2033,
    2034,  1231,  2032,  1232,  1535,  1536,  1537,  1387,   135,   136,
     137,   138,   139,   911,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   285,
     286,   809,   287,   288,   289,   290,  1116,  1517,   291,   292,
     293,   294,   295,   296,   297,  1878,  1636,  1811,   298,   718,
    1779,   702,   240,   854,   299,   346,  1781,     0,     0,     0,
       0,   285,   286,  1783,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,  1791,
     298,     0,  1583,  1584,  1585,  1879,   299,     0,     0,  1590,
       0,     0,  1593,  1594,     0,     0,     0,  1596,     0,     0,
    1599,  1600,  1601,  1602,     0,     0,  1603,  1604,  1605,     0,
    1607,     0,     0,     0,  1609,  1610,     0,     0,     0,  1614,
    1615,     0,     0,     0,     0,     0,     0,   170,   170,   170,
    1623,   170,     0,     0,     0,     0,  1629,     0,     0,     0,
       0,     0,   285,   286,   165,   287,   288,   289,   290,   170,
       0,   291,   292,   293,   294,   295,   296,   297,     0,     0,
     166,   298,     0,     0,     0,   167,     0,   299,   168,     0,
       0,     0,     0,   243,   285,   286,   169,   287,   288,   289,
     290,     0,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,     0,     0,     0,   299,
       0,     0,     0,     0,   509,  1891,   165,     0,     0,     0,
    1903,   284,  1905,     0,     0,     0,     0,     0,     0,  1912,
       0,     0,   166,     0,     0,     0,     0,   167,     0,     0,
     168,     0,     0,     0,     0,     0,     0,     0,   169,     0,
       0,     0,     0,     0,     0,     0,  1974,     0,     0,   950,
       0,     0,     0,     0,     0,     0,     0,    75,    76,   951,
    1940,    78,     0,     0,     0,     0,     0,     0,  1737,     0,
       0,  1740,     0,     0,   285,   286,  1744,   287,   288,   289,
     290,     0,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,     0,     0,     0,   299,
       0,     0,     0,   331,     0,     0,     0,  1980,   170,  1772,
     170,  1774,  1775,     0,   285,   286,     0,   287,   288,   289,
     290,     0,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,   534,     0,     0,   299,
       0,     0,     0,     0,  1790,     0,     0,     0,  1794,     0,
       0,  1797,  1798,     0,     0,     0,     0,     0,     0,   592,
     170,     0,     0,     0,     0,     0,   170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1826,  1827,  1828,  1829,  1830,     0,   952,     0,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
       0,     0,     0,   965,     0,     0,   966,     0,     0,   967,
       0,     0,   968,     0,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
       0,     0,     0,   985,     0,   170,     0,     0,   986,   285,
     286,   987,   287,   288,   289,   290,  1872,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,     0,     0,   299,     0,  1886,  1887,  1888,  1889,
       0,     0,  1892,     0,  1894,   285,   286,     0,   287,   288,
     289,   290,  1909,  1910,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,   170,  1921,     0,
     299,  1924,   892,   893,   894,   895,   896,   897,     0,   988,
     898,   899,   900,   901,   902,   903,   904,   905,   950,     0,
     906,     0,     0,     0,     0,  1939,    75,    76,   951,     0,
      78,   285,   286,     0,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,     0,     0,   299,     0,     0,     0,
     170,     0,  1969,     0,   285,   286,     0,   287,   288,   289,
     290,     0,   950,   291,   292,   293,   294,   295,   296,   297,
      75,    76,   951,   298,    78,  1986,     0,   285,   286,   299,
     287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
       0,     0,   299,     0,   767,  2000,     0,     0,  2002,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1037,     0,     0,     0,     0,     0,     0,  2017,     0,
       0,  2021,     0,     0,   950,     0,     0,     0,     0,     0,
       0,  2027,    75,    76,   951,   952,    78,   953,   954,   955,
     956,   957,   958,   959,   960,   961,   962,   963,   964,  1361,
       0,     0,   965,     0,     0,   966,     0,     0,   967,     0,
       0,   968,     0,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,   983,   984,     0,
       0,     0,   985,     0,     0,     0,     0,   986,     0,   952,
     987,   953,   954,   955,   956,   957,   958,   959,   960,   961,
     962,   963,   964,     0,     0,     0,   965,     0,     0,   966,
       0,     0,   967,     0,     0,   968,     0,   969,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   981,
     982,   983,   984,     0,     0,     0,   985,     0,     0,     0,
       0,   986,     0,     0,   987,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1769,     0,
       0,   952,     0,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,     0,     0,     0,   965,     0,
       0,   966,     0,     0,   967,     0,     0,   968,     0,   969,
     970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     980,   981,   982,   983,   984,     0,     0,     0,   985,   950,
       0,     0,  1780,   986,     0,     0,   987,    75,    76,   951,
       0,    78,   285,   286,     0,   287,   288,   289,   290,     0,
       0,   291,   292,   293,   294,   295,   296,   297,     0,   285,
     286,   298,   287,   288,   289,   290,     0,   299,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,     0,   950,   299,     0,     0,     0,     0,     0,
       0,    75,    76,   951,     0,    78,   890,   891,   892,   893,
     894,   895,   896,   897,  1782,     0,   898,   899,   900,   901,
     902,   903,   904,   905,   285,   286,   906,   287,   288,   289,
     290,     0,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,     0,   950,     0,   299,
       0,     0,     0,     0,   521,    75,    76,   951,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   952,     0,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
       0,     0,     0,   965,     0,     0,   966,     0,     0,   967,
       0,     0,   968,     0,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
       0,     0,     0,   985,     0,     0,     0,     0,   986,     0,
     952,   987,   953,   954,   955,   956,   957,   958,   959,   960,
     961,   962,   963,   964,     0,     0,     0,   965,     0,     0,
     966,     0,     0,   967,     0,     0,   968,     0,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,   982,   983,   984,     0,     0,     0,   985,     0,     0,
       0,     0,   986,     0,   952,   987,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,     0,  1784,
       0,   965,     0,     0,   966,     0,     0,   967,     0,     0,
     968,     0,   969,   970,   971,   972,   973,   974,   975,   976,
     977,   978,   979,   980,   981,   982,   983,   984,     0,     0,
       0,   985,   950,     0,     0,     0,   986,     0,     0,   987,
      75,    76,   951,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,  1785,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     7,     8,     0,     0,     0,     0,     0,
       0,     9,    10,    11,    12,     0,     0,     0,     0,     0,
       0,    13,     0,     0,     0,     0,   950,     0,     0,     0,
       0,     0,     0,     0,    75,    76,   951,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,  1786,     0,     0,
       0,     0,   285,   286,    14,   287,   288,   289,   290,     0,
      15,   291,   292,   293,   294,   295,   296,   297,     0,     0,
       0,   298,     0,    16,     0,    17,     0,   299,     0,     0,
     950,     0,   528,     0,     0,     0,     0,    18,    75,    76,
     951,    19,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,     0,   952,
       0,   953,   954,   955,   956,   957,   958,   959,   960,   961,
     962,   963,   964,     0,    21,     0,   965,     0,     0,   966,
       0,     0,   967,     0,     0,   968,     0,   969,   970,   971,
     972,   973,   974,   975,   976,   977,   978,   979,   980,   981,
     982,   983,   984,     0,     0,     0,   985,     0,     0,     0,
       0,   986,     0,   952,   987,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   964,     0,     0,    22,
     965,    23,     0,   966,     0,     0,   967,     0,     0,   968,
       0,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   982,   983,   984,   620,     0,     0,
     985,     0,     0,     0,     0,   986,     0,   952,   987,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,     0,  1963,     0,   965,     0,     0,   966,     0,     0,
     967,     0,     0,   968,     0,   969,   970,   971,   972,   973,
     974,   975,   976,   977,   978,   979,   980,   981,   982,   983,
     984,     0,     0,     0,   985,   950,     0,     0,   621,   986,
       0,     0,   987,    75,    76,   951,     0,    78,   285,   286,
       0,   287,   288,   289,   290,     0,  1970,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,   298,     0,     0,
     622,   285,   286,   299,   287,   288,   289,   290,   529,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,   950,
     298,     0,   332,     0,     0,     0,   299,    75,    76,   951,
     623,    78,     0,     0,     0,     0,     0,     0,     0,     0,
    2003,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,     0,   285,   286,     0,   287,   288,
     289,   290,     0,   950,   291,   292,   293,   294,   295,   296,
     297,    75,    76,   951,   298,    78,     0,     0,     0,     0,
     299,     0,     0,     0,     0,   530,     0,     0,     0,     0,
       0,     0,   952,     0,   953,   954,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,     0,     0,     0,   965,
       0,     0,   966,     0,     0,   967,     0,     0,   968,     0,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   981,   982,   983,   984,     0,     0,     0,   985,
       0,     0,     0,     0,   986,     0,   952,   987,   953,   954,
     955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
       0,     0,     0,   965,     0,     0,   966,     0,     0,   967,
       0,     0,   968,     0,   969,   970,   971,   972,   973,   974,
     975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
       0,     0,     0,   985,     0,     0,     0,     0,   986,     0,
     952,   987,   953,   954,   955,   956,   957,   958,   959,   960,
     961,   962,   963,   964,     0,  2005,     0,   965,     0,     0,
     966,     0,     0,   967,     0,     0,   968,     0,   969,   970,
     971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
     981,   982,   983,   984,   131,   132,   133,   985,   950,     0,
       0,     0,   986,     0,     0,   987,    75,    76,   951,     0,
      78,     0,     0,     0,     0,   135,   136,   137,   138,  2007,
       0,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,     0,   131,   132,   133,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1199,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,     0,  2008,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   285,
     286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,     0,     0,   299,     0,     0,     0,     0,   801,
       0,     0,     0,     0,     0,   952,     0,   953,   954,   955,
     956,   957,   958,   959,   960,   961,   962,   963,   964,     0,
       0,     0,   965,     0,     0,   966,     0,     0,   967,     0,
       0,   968,     0,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,   983,   984,     0,
       0,     0,   985,   131,   132,     6,   539,   986,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   131,   132,     6,     0,   166,
       0,     0,     0,     0,   167,     0,     0,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2022,     0,
       0,     0,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,   166,     0,     0,     0,     0,   167,   285,   286,
     168,   287,   288,   289,   290,     0,     0,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,   298,     0,     0,
       0,   285,   286,   299,   287,   288,   289,   290,   802,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,   285,   286,   299,   287,   288,   289,
     290,  1045,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,     0,   285,   286,   299,
     287,   288,   289,   290,  1046,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
     285,   286,   299,   287,   288,   289,   290,  1047,     0,   291,
     292,   293,   294,   295,   296,   297,     0,     0,     0,   298,
       0,     0,     0,     0,     0,   299,     0,     0,     0,     0,
    1178,     0,     0,     0,     0,     0,     0,     0,   166,     0,
       0,     0,     0,   167,   285,   286,   168,   287,   288,   289,
     290,     0,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,     0,   285,   286,   299,
     287,   288,   289,   290,  1366,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
     166,     0,   299,     0,     0,   167,     0,  1367,   168,   285,
     286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,   285,   286,   299,   287,   288,   289,   290,  1368,
       0,   291,   292,   293,   294,   295,   296,   297,     0,     0,
       0,   298,     0,     0,     0,   285,   286,   299,   287,   288,
     289,   290,  1461,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,   285,   286,
     299,   287,   288,   289,   290,  1469,     0,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,   298,     0,     0,
       0,   285,   286,   299,   287,   288,   289,   290,  1478,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,   285,   286,   299,   287,   288,   289,
     290,  1648,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,     0,   285,   286,   299,
     287,   288,   289,   290,  1682,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
     285,   286,   299,   287,   288,   289,   290,  1683,     0,   291,
     292,   293,   294,   295,   296,   297,     0,     0,     0,   298,
       0,     0,     0,   285,   286,   299,   287,   288,   289,   290,
    1684,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,   285,   286,   299,   287,
     288,   289,   290,  1688,     0,   291,   292,   293,   294,   295,
     296,   297,     0,     0,     0,   298,     0,     0,     0,   285,
     286,   299,   287,   288,   289,   290,  1694,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,   285,   286,   299,   287,   288,   289,   290,  1701,
       0,   291,   292,   293,   294,   295,   296,   297,     0,     0,
       0,   298,     0,     0,     0,   285,   286,   299,   287,   288,
     289,   290,  1721,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,   285,   286,
     299,   287,   288,   289,   290,  1839,     0,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,   298,     0,     0,
       0,   285,   286,   299,   287,   288,   289,   290,  1840,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,   285,   286,   299,   287,   288,   289,
     290,  1848,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,     0,   285,   286,   299,
     287,   288,   289,   290,  1854,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
     285,   286,   299,   287,   288,   289,   290,  1855,     0,   291,
     292,   293,   294,   295,   296,   297,     0,     0,     0,   298,
       0,     0,     0,   285,   286,   299,   287,   288,   289,   290,
    1932,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,   285,   286,   299,   287,
     288,   289,   290,  1934,     0,   291,   292,   293,   294,   295,
     296,   297,     0,     0,     0,   298,     0,     0,     0,   285,
     286,   299,   287,   288,   289,   290,  1957,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,   285,   286,   299,   287,   288,   289,   290,  2010,
       0,   291,   292,   293,   294,   295,   296,   297,     0,     0,
       0,   298,     0,     0,     0,   285,   286,   299,   287,   288,
     289,   290,  2013,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,   285,   286,
     299,   287,   288,   289,   290,  2023,     0,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,   298,     0,     0,
       0,     0,     0,   299,     0,   285,   286,   302,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,     0,     0,
     299,     0,   285,   286,   357,   287,   288,   289,   290,     0,
       0,   291,   292,   293,   294,   295,   296,   297,     0,     0,
       0,   298,     0,     0,     0,     0,     0,   299,     0,   285,
     286,   542,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,     0,     0,   299,     0,   285,   286,   658,   287,
     288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     296,   297,     0,     0,     0,   298,     0,     0,     0,     0,
       0,   299,     0,   285,   286,  1051,   287,   288,   289,   290,
       0,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,     0,     0,   299,     0,
     285,   286,  1177,   287,   288,   289,   290,     0,     0,   291,
     292,   293,   294,   295,   296,   297,     0,     0,     0,   298,
       0,     0,     0,     0,     0,   299,     0,   285,   286,  1520,
     287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
       0,     0,   299,     0,   285,   286,  1653,   287,   288,   289,
     290,     0,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,     0,     0,     0,   299,
       0,   285,   286,  1654,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,     0,     0,   299,     0,   285,   286,
    1655,   287,   288,   289,   290,     0,     0,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,   298,     0,     0,
       0,     0,     0,   299,     0,   285,   286,  1812,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,     0,     0,
     299,     0,   285,   286,  1815,   287,   288,   289,   290,     0,
       0,   291,   292,   293,   294,   295,   296,   297,     0,     0,
       0,   298,     0,     0,     0,     0,     0,   299,     0,   285,
     286,  1819,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,     0,     0,   299,     0,   285,   286,  1923,   287,
     288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     296,   297,     0,     0,     0,   298,     0,     0,     0,     0,
       0,   299,     0,   285,   286,  1999,   287,   288,   289,   290,
       0,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,     0,     0,   299,     0,
     285,   286,  2030,   287,   288,   289,   290,     0,     0,   291,
     292,   293,   294,   295,   296,   297,     0,     0,     0,   298,
       0,   386,     0,   285,   286,   299,   287,   288,   289,   290,
       0,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,   511,     0,   299,   285,
     286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,   512,     0,   299,   285,   286,     0,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,   513,     0,
     299,   285,   286,     0,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,   514,     0,   299,   285,   286,     0,
     287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
     515,     0,   299,   285,   286,     0,   287,   288,   289,   290,
       0,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,   516,     0,   299,   285,
     286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,   517,     0,   299,   285,   286,     0,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,   518,     0,
     299,   285,   286,     0,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,   519,     0,   299,   285,   286,     0,
     287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
     520,     0,   299,   285,   286,     0,   287,   288,   289,   290,
       0,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,   522,     0,   299,   285,
     286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,   523,     0,   299,   285,   286,     0,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,   524,     0,
     299,   285,   286,     0,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,   525,     0,   299,   285,   286,     0,
     287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
     526,     0,   299,   285,   286,     0,   287,   288,   289,   290,
       0,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,   527,     0,   299,   285,
     286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,   536,     0,   299,   285,   286,     0,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,   550,     0,
     299,   285,   286,     0,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,   613,     0,   285,   286,   299,   287,   288,   289,
     290,     0,     0,   291,   292,   293,   294,   295,   296,   297,
       0,     0,     0,   298,     0,     0,     0,   803,     0,   299,
     285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
     292,   293,   294,   295,   296,   297,     0,     0,     0,   298,
       0,     0,     0,   804,     0,   299,   285,   286,     0,   287,
     288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     296,   297,     0,     0,     0,   298,     0,     0,     0,   805,
       0,   299,   285,   286,     0,   287,   288,   289,   290,     0,
       0,   291,   292,   293,   294,   295,   296,   297,     0,     0,
       0,   298,     0,     0,     0,   806,     0,   299,   285,   286,
       0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
     294,   295,   296,   297,     0,     0,     0,   298,     0,   857,
       0,   285,   286,   299,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,   865,     0,   299,   285,   286,     0,
     287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
    1049,     0,   299,   285,   286,     0,   287,   288,   289,   290,
       0,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,  1050,     0,   299,   285,
     286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,  1725,     0,   299,   285,   286,     0,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,  1837,     0,
     299,   285,   286,     0,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,  1851,     0,   299,   285,   286,     0,
     287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
    1929,     0,   299,   285,   286,     0,   287,   288,   289,   290,
       0,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,  1930,     0,   299,   285,
     286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,  1931,     0,   299,   285,   286,     0,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,  1936,     0,
     299,   285,   286,     0,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,  1946,     0,   299,   285,   286,     0,
     287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
     295,   296,   297,     0,     0,     0,   298,     0,     0,     0,
    1947,     0,   299,   285,   286,     0,   287,   288,   289,   290,
       0,     0,   291,   292,   293,   294,   295,   296,   297,     0,
       0,     0,   298,     0,     0,     0,  1959,     0,   299,   285,
     286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,  1992,     0,   299,   285,   286,     0,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,  2026,     0,
     299,   285,   286,     0,   287,   288,   289,   290,     0,     0,
     291,   292,   293,   294,   295,   296,   297,     0,     0,     0,
     298,     0,     0,     0,     0,     0,   299,   890,   891,   892,
     893,   894,   895,   896,   897,     0,     0,   898,   899,   900,
     901,   902,   903,   904,   905,     0,     0,   906,     0,     0,
     286,  1527,   287,   288,   289,   290,     0,     0,   291,   292,
     293,   294,   295,   296,   297,     0,     0,     0,   298,     0,
       0,     0,     0,     0,   299,   890,   891,   892,   893,   894,
     895,   896,   897,     0,     0,   898,   899,   900,   901,   902,
     903,   904,   905,     0,     0,   906,     0,  1009,   287,   288,
     289,   290,     0,     0,   291,   292,   293,   294,   295,   296,
     297,     0,     0,     0,   298,     0,     0,     0,     0,     0,
     299,   890,   891,   892,   893,   894,   895,   896,   897,     0,
       0,   898,   899,   900,   901,   902,   903,   904,   905,     0,
       0,   906
};

static const short yycheck[] =
{
       5,   178,     7,   323,     5,   413,  1117,    12,   109,   110,
     554,   723,     5,     5,   334,   335,   336,   355,    23,   563,
     342,  1001,   640,   343,   346,     5,  1006,  1007,     5,   573,
      35,     5,     5,   577,   442,    86,     5,   581,     5,     3,
       3,     5,     5,     5,     5,    86,     5,     5,    26,     5,
     112,   113,   620,   621,   116,   117,   118,   119,   120,   121,
     628,     3,     3,     5,     5,     5,     5,   316,     5,    23,
      82,     7,    64,   250,    86,    87,    69,    69,   268,   258,
     753,   754,   755,   756,     5,     5,     0,     5,   496,   268,
       5,    11,    12,    13,    14,    15,   610,    17,     7,    23,
      64,    23,    69,    65,   109,   110,     0,   112,   113,    29,
     257,   116,   117,   118,   119,   120,   121,   122,   257,   266,
      23,   126,   127,   128,   256,    23,    75,   266,    23,   615,
      69,  1578,   309,    86,   112,   113,     7,   117,   116,   117,
     118,   119,   120,   121,  1591,    99,   107,    96,   234,   264,
    1597,    69,   258,   268,    69,   256,   117,   110,   870,  1606,
     872,   247,   411,   412,     7,  1612,  1613,   416,   261,   491,
     263,   268,   258,   350,     5,    99,   277,    99,    69,   258,
      11,    12,    13,    14,    15,     5,    17,   264,   265,   268,
      81,    11,    12,    13,    14,    15,    99,    17,    29,   264,
     873,    99,   258,   268,    99,   257,   307,   257,   264,    29,
     618,   255,   268,  1193,   266,   264,   266,   261,   891,   892,
     893,   894,   895,   896,   897,   898,   899,   900,   901,   902,
     903,   904,   905,   906,   264,   256,   909,   258,   243,   753,
     754,   755,   756,    63,    13,    14,    15,   264,    17,     5,
     264,   256,   234,   265,   268,    11,    12,    13,    14,    15,
      82,    17,    13,    14,    15,   316,    17,   268,   261,   261,
       5,   264,   277,    29,    96,   316,    11,    12,    13,    14,
      15,   258,    17,   769,  1264,   265,   117,   118,   119,   120,
     264,   264,   256,   256,    29,   264,   264,   617,   256,   476,
     264,   264,   307,   267,   267,   264,   248,   264,   264,    82,
       6,   264,   265,    86,   256,   256,   265,     3,   323,     5,
     259,   264,   261,    96,   264,   267,   267,   264,   264,   334,
     335,   336,    67,   264,   258,   256,   258,   232,   343,  1012,
     261,   264,   265,   261,   264,   265,   261,   388,   326,   258,
     355,   264,    13,    14,    15,   258,    17,     5,     6,   873,
     258,     9,    10,   464,     5,     6,     5,     6,     9,    10,
       7,    13,    14,    15,   265,    17,  1356,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   236,   237,   909,   239,   240,   241,   242,
     265,   266,   245,   246,   247,   248,   249,   250,   251,   259,
     259,     5,   255,     7,   259,   420,   266,   266,   261,     7,
     597,   266,   599,   600,   601,    19,    20,    21,   264,   434,
     259,    13,    14,    15,   265,    17,  1883,   266,   264,   444,
     259,     5,    36,   265,   449,   265,  1893,   266,    18,   771,
     455,     7,   457,   458,   258,     5,   461,   143,   463,   464,
     264,    11,    12,    13,    14,    15,     5,    17,  1086,  1087,
     259,     7,    11,    12,    13,    14,    15,   266,    17,    29,
      13,    14,    15,   258,    17,   247,   248,   249,   250,   264,
      29,     7,   265,     5,     7,   264,   265,    18,  1012,    11,
      12,    13,    14,    15,   266,    17,   607,   264,   264,   265,
      86,   268,   259,   264,   265,  1188,     7,    29,    88,   266,
      96,  1968,    98,   624,  1971,  1198,   259,   213,   265,   266,
     265,     7,     5,   266,  1981,  1982,    78,    79,    11,    12,
      13,    14,    15,  1111,    17,   867,   259,    13,    14,    15,
     258,    17,     5,   266,   256,  1123,    29,  2004,    11,    12,
      13,    14,    15,   133,    17,    86,   258,    88,   265,   266,
     140,   141,   264,    96,   116,    98,    29,     7,    99,   620,
     621,   919,  1562,   106,  1564,   233,     7,   628,   130,   266,
     267,   112,   233,   163,   242,   243,   166,   167,     7,   259,
     194,   259,   607,   264,   265,   610,   266,     8,   266,   130,
     615,     7,   617,     7,   791,    18,     3,     4,     5,   624,
      86,   798,   264,   265,    13,    14,    15,    82,    17,   691,
      96,   265,   266,    88,     7,   259,   698,    24,    25,    26,
      27,    96,   266,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   134,   135,
     136,   137,   138,   139,  1188,   264,   265,   778,   779,   264,
     265,     7,   264,   265,  1198,    88,   691,     8,   666,   265,
     259,  1235,     7,   698,     7,   265,   191,   266,   676,  1810,
    1811,   140,   680,    96,   143,  1219,    89,    90,    91,    92,
      93,    94,   690,   691,   264,   265,   694,   156,   157,   112,
     698,   160,   161,   265,     7,   264,   265,   264,   265,   707,
       7,   264,   265,  1053,  1054,  1055,  1056,   140,   256,   259,
     264,   134,   265,   258,   265,     7,   266,  1067,   753,   754,
     755,   756,   264,   265,   759,   259,   259,    68,   259,   258,
     163,   164,   266,   266,   769,   266,   258,    86,  1088,  1089,
      98,   264,   265,   778,   779,    86,   258,    96,   265,   266,
     108,   109,   110,   257,   140,    96,    97,   143,   265,   266,
    1110,   264,   265,   112,   105,   188,   107,   116,   130,   265,
     156,   157,   158,     6,   193,   194,   195,   196,   265,   266,
     265,   264,   265,   265,   266,   265,   266,   258,   995,   996,
     997,   998,   258,    13,    14,    15,   265,    17,   265,   266,
     258,   809,   258,  1153,   258,   236,   237,     7,   239,   240,
     241,   242,   265,   266,   245,   246,   247,   248,   249,   250,
     251,   265,   266,  1833,   255,  1567,  1568,  1569,  1035,  1532,
     261,   248,   265,   258,   265,     7,   253,    96,   873,   256,
    1208,     7,   265,   249,   250,   251,   264,   265,   265,   255,
     265,   266,   265,   888,   258,   261,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   265,   266,   909,   258,    96,   265,   266,   265,
     258,   140,   258,   918,   919,   236,   237,   258,   239,   240,
     241,   242,   265,   266,   245,   246,   247,   248,   249,   250,
     251,  1499,  1500,  1501,   255,  1503,   257,   265,   265,   266,
     261,   265,   266,   133,   266,   950,   265,   265,   266,   258,
     140,   265,   266,  1521,   265,   258,  1276,   265,   266,   265,
     266,   190,  1282,   192,   258,   247,   248,   249,   250,   251,
     252,   949,  1380,   255,   258,  1955,    69,    70,    71,    72,
      73,    74,    75,    76,    77,   258,   215,    80,   249,   250,
     251,   252,  1400,    86,   255,   265,   266,     7,  1406,   258,
    1408,   247,   248,   249,   250,   251,    99,  1012,   258,   255,
     265,   266,     5,     7,   258,   261,   264,   265,  1532,   631,
     632,  1122,    81,  1124,    83,    84,    85,  1541,   265,   266,
     265,   266,  1440,   258,  1354,   258,   265,  1445,   265,   266,
     258,   258,   258,  1363,   258,   258,   258,   258,  1053,  1054,
    1055,  1056,     7,  1154,   264,     5,   258,  1062,     3,     4,
       5,   266,  1067,   122,   123,   124,   125,   126,   127,   128,
    1111,   130,   131,   258,  1079,   265,   264,     5,     7,   234,
     234,   234,  1123,  1088,  1089,    30,    31,    32,    33,    34,
     234,   264,   264,  1098,     8,    81,   264,    83,    84,   264,
      86,  1106,  1107,   264,   266,  1110,   266,   259,   259,   259,
      96,     7,  1680,   259,  1682,  1120,  1121,  1122,     7,  1124,
    1125,  1126,  1834,     5,     5,  1130,   264,   113,   114,   115,
    1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,  1459,
       5,   264,     5,   264,   130,     5,     5,   264,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1168,  1732,  1170,   264,   264,   234,  1174,
    1738,    96,   265,    98,    99,   100,   101,   102,   103,   104,
       3,     4,     5,  1188,   122,   123,   124,   125,   126,   127,
     128,  1511,   130,  1198,    86,    87,   259,     5,     5,   264,
     186,     5,   264,  1208,   264,     5,   265,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   124,   125,     7,   264,   264,     5,   130,  1807,
     208,   264,   236,   237,   264,   239,   240,   241,   242,   264,
    1570,   245,   246,   247,   248,   249,   250,   251,   264,   259,
       5,   255,   258,   258,   130,     7,   258,   261,     5,     7,
     428,  1276,   258,     7,   166,   167,   168,  1282,     7,   265,
       7,   236,   237,     7,   239,   240,   241,   242,     7,     7,
     245,   246,   247,   248,   249,   250,   251,     5,     7,   234,
     255,  1869,   264,     7,     7,     7,   261,   236,   237,     7,
     239,   240,   241,   242,     7,   473,   245,   246,   247,   248,
     249,   250,   251,     7,     7,   234,   255,   265,     7,     5,
       7,   264,   261,     7,     7,     7,  1880,     7,  1343,  1344,
     265,     7,     7,     7,     7,  1522,     7,  1524,  1525,  1354,
       7,     5,   265,     8,   266,     7,     5,     3,  1363,     7,
     264,     7,   254,   255,  1932,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,     5,     5,     5,   264,   264,
     264,   264,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   264,  1746,     3,
     568,   259,   264,    66,   306,   261,    62,     7,     7,     7,
     312,     7,    68,     7,   316,   248,   318,     7,   265,   264,
     253,   259,   266,   256,   259,    81,     7,    83,   330,   331,
     258,   264,   258,   258,   258,   258,     5,  1452,  1453,    95,
       3,     5,  1457,    99,  1459,   258,   348,   258,  1499,  1500,
    1501,   259,  1503,   236,   237,   111,   239,   240,   241,   242,
       6,   264,   245,   246,   247,   248,   249,   250,   251,     7,
    1521,   264,   255,  1488,   264,   264,   132,     5,   261,   266,
     264,   258,   264,   264,   264,   264,   388,     5,   258,   258,
     255,  1506,  1507,   242,  1509,  1510,  1511,   265,     3,   236,
     237,   264,   239,   240,   241,   242,   408,   409,   245,   246,
     247,   248,   249,   250,   251,   266,   684,  1532,   255,     7,
     258,     7,   258,   258,   261,   258,   258,   258,   258,     7,
       5,   187,   258,   189,  1864,   258,   258,   258,   258,  1554,
     241,   242,   258,   711,   245,   246,   247,   248,   249,   250,
     251,   258,   258,   264,   255,  1570,   258,   261,   258,  1574,
     261,  1576,   236,   237,   259,   239,   240,   241,   242,     7,
    1900,   245,   246,   247,   248,   249,   250,   251,     5,   258,
     258,   255,   259,   264,     5,     5,   258,   261,     5,   258,
     258,     5,   494,   259,   264,     5,     3,   258,     7,     5,
       5,   258,     5,     5,   264,   258,   508,   509,   776,   264,
    1721,  1722,   258,   258,     3,     4,     5,  1728,   265,   521,
     259,   264,   264,   264,     5,   793,   528,   529,   530,  1680,
    1817,  1682,   534,     5,     5,    24,    25,    26,    27,     5,
       3,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     5,     7,     5,     7,
    1685,   258,  1687,   258,   265,   264,     7,   259,   266,   258,
     264,  1732,     7,   266,     7,     7,   266,  1738,     7,     7,
     592,   593,     7,  1804,     7,  1806,    81,     7,    83,    84,
      85,     7,     7,   605,     7,     7,  1721,  1722,     7,     7,
       7,     7,     7,  1728,     7,     7,     7,   264,   620,   621,
       5,     7,     5,   625,   626,     7,   628,   629,   258,     7,
       7,  1746,     7,   635,     7,   637,     7,   122,   123,   124,
     125,   126,   127,   128,     7,   130,   131,     7,   236,   237,
       7,   239,   240,   241,   242,     7,  1807,   245,   246,   247,
     248,   249,   250,   251,     7,     7,     7,   255,   238,   239,
     240,   241,   242,   261,     7,   245,   246,   247,   248,   249,
     250,   251,   252,     7,   952,   255,     7,     7,     7,  1804,
       7,  1806,     7,     5,     5,   258,   258,     7,   236,   237,
       5,   239,   240,   241,   242,     5,     7,   245,   246,   247,
     248,   249,   250,   251,     7,     7,     7,   255,  1869,     7,
     209,     7,     7,   261,   213,     7,   994,   236,   237,   259,
     239,   240,   241,   242,   259,   259,   245,   246,   247,   248,
     249,   250,   251,   266,   266,     7,   255,   266,   266,  1864,
     266,   266,   261,   266,   266,   266,     3,   265,   259,   248,
     259,     7,   266,     7,   253,   767,   768,   256,   266,   266,
     266,   266,   266,  1041,   266,   264,  1044,   265,     7,   266,
     265,  1932,   266,   266,   266,  1900,     3,     4,     5,  1057,
    1058,  1059,  1060,   795,   796,   797,  1064,   266,   266,   801,
     802,   266,   259,   264,   264,   807,   265,    24,    25,    26,
      27,   264,   264,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   259,   266,
     266,   112,   266,     7,   258,     7,    81,   259,    83,   266,
       7,    86,     7,   855,     3,     7,   858,     7,   259,     7,
       7,     7,   241,   242,  1132,  1133,   245,   246,   247,   248,
     249,   250,   251,   252,     7,   264,   255,  1145,     7,     7,
       3,     4,     5,   264,   264,     7,  2001,   122,   123,   124,
     125,   126,   127,   128,   264,   130,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   264,   908,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,   264,    60,    61,     3,
       4,     5,   264,     5,     7,  1213,     7,  1215,     7,   265,
     264,    81,   259,    83,  1222,   264,    86,   259,   266,     5,
     259,     5,     5,     5,   259,   259,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     7,   122,   123,   124,   125,   126,   127,   128,   122,
     130,     7,     7,   266,   259,   266,   129,   236,   237,   266,
     239,   240,   241,   242,   266,     7,   245,   246,   247,   248,
     249,   250,   251,     3,     4,     5,   255,   266,     7,     7,
     265,   248,   261,     7,     7,  1037,   253,   259,   259,   256,
     266,   266,   266,  1045,  1046,  1047,   266,   264,   259,   259,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,   266,
      60,    61,   264,   264,   259,   261,   266,   265,   259,   236,
     237,   259,   239,   240,   241,   242,   265,  1365,   245,   246,
     247,   248,   249,   250,   251,   259,     7,   265,   255,  1111,
       7,     7,     7,     7,   261,   259,     7,     7,   241,     7,
       7,  1123,     7,     7,   247,   248,     7,     7,     7,     7,
     253,   135,     7,   256,     7,   265,   259,   260,   261,   262,
     265,   264,   122,   264,  1146,   265,  1148,   264,  1150,   129,
       7,   235,   236,   237,   238,   239,   240,   241,   242,     7,
       7,   245,   246,   247,   248,   249,   250,   251,   252,     7,
       7,   255,     5,   111,   266,     7,  1178,   266,   259,   266,
      16,   266,   266,  1451,   248,   259,   266,   266,   259,   253,
    1458,   259,   256,   266,   264,  1463,     7,   261,  1466,   266,
       7,     5,     7,  1471,   264,     7,     7,   264,   236,   237,
       7,   239,   240,   241,   242,  1483,     7,   245,   246,   247,
     248,   249,   250,   251,     7,     7,     7,   255,  1496,     5,
    1498,   236,   237,   261,   239,   240,   241,   242,   266,     5,
     245,   246,   247,   248,   249,   250,   251,     5,   258,   264,
     255,   259,   259,     5,     5,     5,   261,   259,   259,     7,
       4,   241,   265,   259,     7,     7,     7,   247,   248,     7,
     265,  1539,  1540,   253,  1542,   265,   256,     7,     7,     7,
       7,   261,   262,     7,   264,     3,     4,     5,     6,   264,
       7,     9,     7,   264,     7,     7,     7,     7,     7,     7,
       7,   264,   264,     7,   265,   264,    24,    25,    26,    27,
      28,     7,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   266,     7,   259,
      62,   264,     7,     7,     7,     7,     7,     3,     4,     5,
       6,    69,   264,     9,   265,  1357,     7,   132,     5,     7,
     265,  1077,  2031,  1078,  1366,  1367,  1368,  1226,    24,    25,
      26,    27,    28,   763,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   236,
     237,   665,   239,   240,   241,   242,   946,  1344,   245,   246,
     247,   248,   249,   250,   251,     7,  1517,  1736,   255,   604,
    1688,   587,   127,   707,   261,   240,  1694,    -1,    -1,    -1,
      -1,   236,   237,  1701,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,  1717,
     255,    -1,  1454,  1455,  1456,     7,   261,    -1,    -1,  1461,
      -1,    -1,  1464,  1465,    -1,    -1,    -1,  1469,    -1,    -1,
    1472,  1473,  1474,  1475,    -1,    -1,  1478,  1479,  1480,    -1,
    1482,    -1,    -1,    -1,  1486,  1487,    -1,    -1,    -1,  1491,
    1492,    -1,    -1,    -1,    -1,    -1,    -1,  1499,  1500,  1501,
    1502,  1503,    -1,    -1,    -1,    -1,  1508,    -1,    -1,    -1,
      -1,    -1,   236,   237,   232,   239,   240,   241,   242,  1521,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
     248,   255,    -1,    -1,    -1,   253,    -1,   261,   256,    -1,
      -1,    -1,    -1,   261,   236,   237,   264,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    -1,    -1,    -1,   266,  1843,   232,    -1,    -1,    -1,
    1848,     8,  1850,    -1,    -1,    -1,    -1,    -1,    -1,  1857,
      -1,    -1,   248,    -1,    -1,    -1,    -1,   253,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    1898,    17,    -1,    -1,    -1,    -1,    -1,    -1,  1640,    -1,
      -1,  1643,    -1,    -1,   236,   237,  1648,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    -1,    -1,     8,    -1,    -1,    -1,  1945,  1680,  1681,
    1682,  1683,  1684,    -1,   236,   237,    -1,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,     8,    -1,    -1,   261,
      -1,    -1,    -1,    -1,  1716,    -1,    -1,    -1,  1720,    -1,
      -1,  1723,  1724,    -1,    -1,    -1,    -1,    -1,    -1,     8,
    1732,    -1,    -1,    -1,    -1,    -1,  1738,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1752,  1753,  1754,  1755,  1756,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,    -1,    -1,   189,    -1,  1807,    -1,    -1,   194,   236,
     237,   197,   239,   240,   241,   242,  1818,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,   261,    -1,  1838,  1839,  1840,  1841,
      -1,    -1,  1844,    -1,  1846,   236,   237,    -1,   239,   240,
     241,   242,  1854,  1855,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,  1869,  1870,    -1,
     261,  1873,   237,   238,   239,   240,   241,   242,    -1,   265,
     245,   246,   247,   248,   249,   250,   251,   252,     5,    -1,
     255,    -1,    -1,    -1,    -1,  1897,    13,    14,    15,    -1,
      17,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
    1932,    -1,  1934,    -1,   236,   237,    -1,   239,   240,   241,
     242,    -1,     5,   245,   246,   247,   248,   249,   250,   251,
      13,    14,    15,   255,    17,  1957,    -1,   236,   237,   261,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,   261,    -1,     8,  1987,    -1,    -1,  1990,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,  2010,    -1,
      -1,  2013,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
      -1,  2023,    13,    14,    15,   142,    17,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,     8,
      -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,
     197,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,   194,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,
      -1,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
      -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,    -1,    -1,   189,     5,
      -1,    -1,   265,   194,    -1,    -1,   197,    13,    14,    15,
      -1,    17,   236,   237,    -1,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,   236,
     237,   255,   239,   240,   241,   242,    -1,   261,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,     5,   261,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,    -1,    17,   235,   236,   237,   238,
     239,   240,   241,   242,   265,    -1,   245,   246,   247,   248,
     249,   250,   251,   252,   236,   237,   255,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,     5,    -1,   261,
      -1,    -1,    -1,    -1,   266,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
      -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,
     142,   197,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,
      -1,    -1,   194,    -1,   142,   197,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,   265,
      -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
     168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
      -1,   189,     5,    -1,    -1,    -1,   194,    -1,    -1,   197,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   265,    -1,    -1,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,
      -1,    -1,   236,   237,    62,   239,   240,   241,   242,    -1,
      68,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    81,    -1,    83,    -1,   261,    -1,    -1,
       5,    -1,   266,    -1,    -1,    -1,    -1,    95,    13,    14,
      15,    99,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,   132,    -1,   159,    -1,    -1,   162,
      -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,   194,    -1,   142,   197,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,   187,
     159,   189,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
      -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    75,    -1,    -1,
     189,    -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,   265,    -1,   159,    -1,    -1,   162,    -1,    -1,
     165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,    -1,    -1,   189,     5,    -1,    -1,   136,   194,
      -1,    -1,   197,    13,    14,    15,    -1,    17,   236,   237,
      -1,   239,   240,   241,   242,    -1,   265,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
     168,   236,   237,   261,   239,   240,   241,   242,   266,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,     5,
     255,    -1,   257,    -1,    -1,    -1,   261,    13,    14,    15,
     198,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     265,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,    -1,   236,   237,    -1,   239,   240,
     241,   242,    -1,     5,   245,   246,   247,   248,   249,   250,
     251,    13,    14,    15,   255,    17,    -1,    -1,    -1,    -1,
     261,    -1,    -1,    -1,    -1,   266,    -1,    -1,    -1,    -1,
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
     152,   153,   154,   155,    -1,   265,    -1,   159,    -1,    -1,
     162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,     3,     4,     5,   189,     5,    -1,
      -1,    -1,   194,    -1,    -1,   197,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    24,    25,    26,    27,   265,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
      26,    27,    -1,   265,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,   266,
      -1,    -1,    -1,    -1,    -1,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
      -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
      -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
      -1,    -1,   189,     3,     4,     5,     6,   194,    -1,    -1,
     197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     3,     4,     5,    -1,   248,
      -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,   248,    -1,    -1,    -1,    -1,   253,   236,   237,
     256,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,   236,   237,   261,   239,   240,   241,   242,   266,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   236,   237,   261,   239,   240,   241,
     242,   266,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   236,   237,   261,
     239,   240,   241,   242,   266,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     236,   237,   261,   239,   240,   241,   242,   266,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,
      -1,    -1,    -1,   253,   236,   237,   256,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   236,   237,   261,
     239,   240,   241,   242,   266,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     248,    -1,   261,    -1,    -1,   253,    -1,   266,   256,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   236,   237,   261,   239,   240,   241,   242,   266,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,   236,   237,   261,   239,   240,
     241,   242,   266,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   236,   237,
     261,   239,   240,   241,   242,   266,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,   236,   237,   261,   239,   240,   241,   242,   266,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   236,   237,   261,   239,   240,   241,
     242,   266,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   236,   237,   261,
     239,   240,   241,   242,   266,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     236,   237,   261,   239,   240,   241,   242,   266,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,   236,   237,   261,   239,   240,   241,   242,
     266,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   236,   237,   261,   239,
     240,   241,   242,   266,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   236,
     237,   261,   239,   240,   241,   242,   266,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   236,   237,   261,   239,   240,   241,   242,   266,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,   236,   237,   261,   239,   240,
     241,   242,   266,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   236,   237,
     261,   239,   240,   241,   242,   266,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,   236,   237,   261,   239,   240,   241,   242,   266,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   236,   237,   261,   239,   240,   241,
     242,   266,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   236,   237,   261,
     239,   240,   241,   242,   266,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     236,   237,   261,   239,   240,   241,   242,   266,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,   236,   237,   261,   239,   240,   241,   242,
     266,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   236,   237,   261,   239,
     240,   241,   242,   266,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   236,
     237,   261,   239,   240,   241,   242,   266,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   236,   237,   261,   239,   240,   241,   242,   266,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,   236,   237,   261,   239,   240,
     241,   242,   266,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   236,   237,
     261,   239,   240,   241,   242,   266,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,    -1,   261,    -1,   236,   237,   265,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
     261,    -1,   236,   237,   265,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,   236,
     237,   265,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,   261,    -1,   236,   237,   265,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
      -1,   261,    -1,   236,   237,   265,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,
     236,   237,   265,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,    -1,    -1,   261,    -1,   236,   237,   265,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,   261,    -1,   236,   237,   265,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
      -1,   236,   237,   265,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,   261,    -1,   236,   237,
     265,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
      -1,    -1,    -1,   261,    -1,   236,   237,   265,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
     261,    -1,   236,   237,   265,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,   236,
     237,   265,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,   261,    -1,   236,   237,   265,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
      -1,   261,    -1,   236,   237,   265,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,
     236,   237,   265,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,   257,    -1,   236,   237,   261,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,   257,    -1,   236,   237,   261,   239,   240,   241,
     242,    -1,    -1,   245,   246,   247,   248,   249,   250,   251,
      -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     236,   237,    -1,   239,   240,   241,   242,    -1,    -1,   245,
     246,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   236,   237,    -1,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   236,   237,    -1,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,    -1,    -1,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,
      -1,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,   257,
      -1,   236,   237,   261,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,    -1,
     239,   240,   241,   242,    -1,    -1,   245,   246,   247,   248,
     249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   236,   237,    -1,   239,   240,   241,   242,
      -1,    -1,   245,   246,   247,   248,   249,   250,   251,    -1,
      -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,
     237,    -1,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   236,   237,    -1,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   236,   237,    -1,   239,   240,   241,   242,    -1,    -1,
     245,   246,   247,   248,   249,   250,   251,    -1,    -1,    -1,
     255,    -1,    -1,    -1,    -1,    -1,   261,   235,   236,   237,
     238,   239,   240,   241,   242,    -1,    -1,   245,   246,   247,
     248,   249,   250,   251,   252,    -1,    -1,   255,    -1,    -1,
     237,   259,   239,   240,   241,   242,    -1,    -1,   245,   246,
     247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
      -1,    -1,    -1,    -1,   261,   235,   236,   237,   238,   239,
     240,   241,   242,    -1,    -1,   245,   246,   247,   248,   249,
     250,   251,   252,    -1,    -1,   255,    -1,   257,   239,   240,
     241,   242,    -1,    -1,   245,   246,   247,   248,   249,   250,
     251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
     261,   235,   236,   237,   238,   239,   240,   241,   242,    -1,
      -1,   245,   246,   247,   248,   249,   250,   251,   252,    -1,
      -1,   255
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,   270,   271,     0,   272,   273,     5,    11,    12,    19,
      20,    21,    22,    29,    62,    68,    81,    83,    95,    99,
     111,   132,   187,   189,   274,   275,   276,   434,   448,   456,
     457,   268,   256,   261,   457,   256,     5,     7,    19,    20,
      21,    36,   194,     7,     3,     7,    62,    68,    81,    83,
      95,    99,   111,   132,   187,   189,     6,     9,    10,   233,
     457,   458,   459,   258,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   457,    13,    14,    15,    17,   193,
     194,   195,   196,   438,   447,   268,   234,   264,     6,     7,
       7,   457,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,   258,
     256,   449,   277,   333,   318,   324,   340,   298,   363,   389,
     419,   430,   191,     5,   256,   256,   258,   258,   258,   258,
     264,     3,     4,     5,     6,    24,    25,    26,    27,    28,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   232,   248,   253,   256,   264,
     451,   452,   453,   455,   457,   459,   451,   257,   266,   257,
     458,   458,   259,   266,   294,     5,    63,   265,   278,   279,
     447,   448,   457,   264,   265,   334,   447,   448,   264,   265,
     264,   265,   264,   265,   341,   447,   448,     5,    67,   265,
     299,   447,   448,   264,   265,   364,   447,   448,   264,   265,
     390,   447,   448,   264,   265,   420,   447,   448,   264,   265,
     431,   447,   448,   457,   130,   451,   451,   440,   457,     6,
     440,     5,    69,   261,   282,   284,   286,   457,     6,   451,
     264,     7,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   451,   451,
     451,   451,   454,   455,     8,   236,   237,   239,   240,   241,
     242,   245,   246,   247,   248,   249,   250,   251,   255,   261,
       7,     7,   265,     7,   454,     7,   258,   266,   257,   266,
       7,     5,   264,   295,   297,   258,   234,   247,   258,   335,
     319,   325,   342,   258,   258,   365,   391,   421,   432,   435,
     264,     8,   257,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   443,   258,   442,   266,   443,     3,   256,   264,
     267,   290,   292,   457,   439,   258,   444,   265,   265,   454,
       5,     5,   451,   451,   458,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   458,   257,   265,   266,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   257,   451,   458,   454,   234,   261,
     451,   234,   234,   293,     5,   282,   234,   451,    82,    86,
      96,   265,   336,    82,    96,   265,   320,    82,    88,    96,
     265,   326,    68,    86,    96,    97,   105,   107,   265,   343,
     259,   284,   300,    86,    96,   112,   116,   265,   366,    96,
     133,   140,   265,   392,   447,    96,   112,   134,   188,   265,
     422,    96,   140,   190,   192,   215,   265,   433,   264,   451,
     451,   284,   284,   264,   284,   264,   264,   264,   264,   264,
     444,   284,   247,   248,   249,   250,   266,   441,    23,    99,
     232,   301,   302,   444,     8,   451,   291,   454,   266,    64,
     287,   290,   259,   266,   445,   265,   259,   266,   266,   266,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   266,   259,   259,   259,   259,   259,   259,   266,   266,
     266,   259,   451,   455,     8,     7,   259,   259,   257,     6,
     451,   451,   265,     5,   282,   282,   259,   294,     7,   282,
     259,     5,   264,     5,     5,   457,   264,     5,   264,   301,
       5,   264,     5,     5,   457,   264,   264,   264,   234,   259,
     259,   294,     5,     5,   457,   264,   264,     5,   457,   264,
     393,     5,   457,   264,   457,   457,   457,   264,   457,   458,
       5,   436,     8,     8,   257,   208,   301,   264,   454,   264,
     264,   264,   259,   259,     5,   258,   258,   258,   444,   305,
     306,   259,   451,   257,   265,   294,   267,   130,   283,     7,
      75,   136,   168,   198,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,     5,   451,   451,
       7,   451,   451,   451,   451,     7,   451,     7,   265,     7,
       7,     7,     5,     7,   234,   264,   337,     7,   264,   295,
       7,   321,     7,   327,     7,     7,   360,     7,   295,     7,
     344,   350,   357,   301,   234,     7,     5,     7,   295,     7,
     367,   373,   295,     7,   394,   264,   295,     7,   423,     7,
       7,     7,   436,     7,     7,     7,   265,   437,   451,   451,
       5,   266,   454,   265,   454,   454,   454,     7,   442,   451,
       5,   458,   259,     5,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    60,    61,
     122,   129,   241,   247,   248,   253,   256,   261,   262,   264,
     307,   310,   388,   450,   452,   457,     7,     8,     8,   248,
     292,   284,   288,   294,   453,   453,   264,     5,   242,   243,
     458,   451,   451,   453,   451,     5,   446,   446,   446,   451,
       5,   264,   451,   264,   303,   264,   264,   264,   264,     3,
     259,   266,   266,   259,   259,   259,   259,   264,    66,   337,
     264,   265,   447,     7,   264,   265,   264,   265,   264,   265,
     447,     7,   264,   265,   447,   264,   265,   264,   265,     7,
     301,     7,   264,   265,   447,   117,   118,   119,   120,   265,
     374,   447,   448,     7,   264,   265,   447,   401,     7,   264,
     265,   447,   448,   265,   438,     8,   265,   257,   264,   301,
     265,   265,   265,   265,   266,   259,   259,   259,     7,   388,
     258,   314,   258,   258,   258,   258,   311,   312,     5,   307,
     307,   307,   307,     3,     3,     5,   143,   213,     5,   457,
     235,   236,   237,   238,   239,   240,   241,   242,   245,   246,
     247,   248,   249,   250,   251,   252,   255,   261,   263,   258,
     315,   315,   451,   451,   292,   444,   259,     5,    65,   289,
     301,   458,   458,     6,   454,   301,   304,   451,   451,   451,
     454,   451,   451,   451,   280,   265,   338,   322,   328,   361,
     345,   351,   358,     7,   368,   264,   264,   264,   264,   395,
       5,    15,   142,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   159,   162,   165,   168,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   189,   194,   197,   265,   402,
     447,   424,   451,   451,   266,   264,   264,   264,   264,   444,
     388,   258,   388,   307,     5,     5,   258,   258,   242,   257,
     457,   265,   308,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,     3,
     451,   259,   260,   307,   316,   264,   317,     8,   259,   457,
     290,   266,   265,   265,   266,   266,   266,   266,   265,   259,
     259,   265,   258,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    80,    86,    99,   265,   339,    69,    81,   265,
     323,    82,    86,    87,   265,   329,    98,   108,   109,   110,
     265,   362,    96,    98,    99,   100,   101,   102,   103,   104,
     265,   346,    96,    98,   106,   265,   352,    86,    96,    98,
     265,   359,    81,    83,    84,    86,    96,   113,   114,   115,
     130,   186,   258,   265,   369,   379,   379,   383,   375,    86,
      96,   134,   135,   136,   137,   138,   139,   265,   396,   447,
     258,   457,   258,   258,   301,   258,   258,   258,   258,   258,
     258,   258,   258,   258,     7,   258,   258,   264,   258,   264,
     258,   264,   264,   258,   258,   258,   258,   258,   258,   258,
     258,   264,   264,   258,   258,   258,   258,   258,   264,   264,
     258,   403,   404,    75,    96,   265,   425,   265,   266,   301,
     454,   454,   454,   454,   259,   259,   305,   259,   266,   258,
     259,   305,   305,   258,   265,   307,   259,   259,   266,    69,
     454,   451,     7,   301,   301,   451,   451,   451,   261,   284,
     284,   284,   284,   258,   301,   258,   301,   301,   301,   264,
     457,     5,   258,   301,    64,   284,     5,   264,     5,     5,
       5,   286,   289,   457,     5,     5,     5,   264,   303,   303,
     284,   284,     5,     5,   264,   355,     5,   264,   353,     5,
     457,     5,     5,     5,     5,     5,   107,   117,   457,   457,
       3,     3,   284,   453,   371,    81,    83,    84,    85,   122,
     123,   124,   125,   126,   127,   128,   130,   131,   265,   380,
     387,   265,   130,   265,   384,   387,    86,   110,   264,   265,
     376,     5,   457,   264,   397,   457,   458,   453,   458,   264,
     399,   457,   457,   457,     7,   301,   301,     7,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   301,   451,   408,
     451,   410,   451,   412,   414,   284,   458,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,     5,   457,   258,   258,   264,   457,   451,   265,   265,
     265,   265,   265,     7,   266,   307,   313,   264,   259,   266,
     305,     8,   307,   258,   265,   266,   266,   266,   266,   290,
       7,     7,     7,     7,   301,     7,   301,     7,     7,     7,
     452,     7,     7,   301,     7,     7,     7,   317,   330,     7,
       7,     7,     7,     7,     7,     7,     7,   295,   264,   347,
       5,     7,     7,     7,     7,     7,   356,     7,   354,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
     370,     7,     7,     7,     7,   305,     5,     5,     5,   258,
     284,     7,   258,   284,   258,     5,     5,   377,     7,     7,
     398,     7,     7,     7,     7,   400,     7,     7,   259,   259,
     259,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     259,   266,   140,   143,   156,   157,   158,   265,   409,   266,
     140,   143,   156,   157,   160,   161,   265,   411,   266,    18,
      88,   140,   163,   164,   265,   413,    18,    88,   133,   140,
     141,   163,   166,   167,   265,   415,   266,   259,   266,   266,
     266,   266,   266,   266,   265,   265,   266,   266,   266,   266,
     266,   266,   266,   259,   303,   405,   457,   405,   426,     7,
     265,   264,   264,   265,   264,   264,   284,   259,   305,   451,
       3,   259,   309,   284,   301,   451,   451,   451,   281,   266,
     266,   294,   266,     7,   264,   265,     7,   112,     7,   294,
     265,   294,   265,   294,   258,   372,   259,     7,     7,     7,
       3,     7,   381,     7,   385,     7,     7,    78,    79,   116,
     130,   265,   378,   265,   294,   265,   294,     7,   264,     7,
     301,   457,   457,   451,   451,   451,   457,   301,   284,     7,
     451,   264,   301,   451,   451,   301,   451,   264,   301,   451,
     451,   451,   451,   451,   451,   451,   264,   451,   301,   451,
     451,   457,   264,   264,   451,   451,   264,   301,     7,   301,
     453,   453,   453,   451,   453,     7,     7,   457,   457,   451,
     457,   457,   284,     5,     7,   406,   406,     5,   117,   265,
     264,   453,   454,   264,   454,   454,   259,   259,   266,   259,
     307,   259,   265,   265,   265,   265,   266,   301,   301,   452,
     301,   331,     5,     5,     5,     5,   457,     7,     7,   259,
     305,   305,   388,   388,   388,   284,   457,   457,   401,   259,
     266,   266,   266,   266,   266,   266,   259,   266,   266,   401,
       7,     7,     7,     7,   266,   401,     7,     7,     7,     7,
       7,   266,     7,     7,   401,     7,     7,     7,     7,     7,
     401,   401,     7,     7,   416,   259,   266,   266,   259,   259,
     266,   266,   266,   266,   266,   259,   259,   259,   266,   265,
     266,   259,   266,   407,   259,   264,   264,   451,   266,   265,
     451,   265,   265,   259,   451,   265,   261,   259,   259,   265,
     259,    89,    90,    91,    92,    93,    94,   265,   332,     7,
     265,   259,     7,   382,   386,     7,     7,     7,     7,   265,
       7,   453,   451,   453,   451,   451,   457,     7,   457,   301,
     265,   301,   265,   301,   265,   265,   265,   264,   265,     7,
     451,   301,     7,     7,   451,   458,   458,   451,   451,     7,
       7,     7,   458,     7,   135,     7,   209,   213,   453,     7,
     427,   427,   265,   453,   265,   265,   265,   264,   264,   265,
     290,     7,     7,     7,     7,     5,   451,   451,   451,   451,
     451,   111,     7,   266,   266,    16,   259,   259,   266,   266,
     266,   266,   259,   266,   266,   259,   266,   417,   266,   259,
     266,   259,   259,   259,   266,   266,   265,   266,   458,   458,
     453,    81,    83,    86,   130,   265,   387,   428,   265,   266,
     264,   454,   451,   266,     7,     7,     7,     7,     7,     7,
       5,   305,   388,   264,     7,     7,   451,   451,   451,   451,
       7,   301,   451,   264,   451,    18,    86,    88,    99,   112,
     130,   265,   418,   301,     7,   301,     7,     7,     7,   451,
     451,     7,   301,   265,   266,     5,     5,     5,   284,   258,
     453,   451,   265,   265,   451,   295,   259,   259,   401,   259,
     259,   259,   266,   259,   266,   401,   259,     5,     5,   451,
     301,     5,   284,   259,   259,   266,   259,   259,   265,     7,
       4,     7,     7,     7,     7,   429,   265,   266,   265,   259,
       7,     7,     7,   265,     7,     7,     7,   453,   264,   451,
     265,   264,     7,     7,     7,     7,     7,     7,     7,     7,
     301,   264,   264,     7,   265,   305,   451,   264,     7,   348,
     266,   401,   259,   401,   259,   401,   401,     7,   259,   265,
     451,    62,   451,   265,   264,   265,     7,   265,   265,     7,
     266,   285,   457,   266,   401,     7,     7,   451,     7,   264,
     296,   451,   265,   266,   349,   265,   259,   451,   132,     7,
     265,     5,   296,     7,   265
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
#line 341 "GetDP.y"
    { if (++YaccLevel == 1) {
	ConstantTable_L = List_Create(20, 10, sizeof(struct Constant)) ;
	ListDummy_L     = List_Create( 1, 1, sizeof(int)) ; /* Do not delete */
	ListOfInt_L     = List_Create(20, 10, sizeof(int)) ;
	ListOfTwoInt_L  = List_Create(20, 10, sizeof(struct TwoInt)) ;
	ListOfPointer_L = List_Create(10, 10, sizeof(void *)) ;
	ListOfPointer2_L= List_Create(10, 10, sizeof(void *)) ;
	ListOfChar_L    = List_Create(128, 128, sizeof(char)) ;

	ListOfFormulation       = List_Create(5,5, sizeof(int)) ;

	ListOfBasisFunction     = List_Create(5,5, sizeof(List_T *)) ;
	ListOfEntityIndex       = List_Create(5,5, sizeof(int)) ;
      }
    ;}
    break;

  case 3:
#line 357 "GetDP.y"
    { if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfPointer_L) ; List_Delete(ListOfPointer2_L) ; 
	List_Delete(ListOfChar_L) ;

	List_Delete(ListOfFormulation) ;

	List_Delete(ListOfBasisFunction) ;
	List_Delete(ListOfEntityIndex) ;
      }
    ;}
    break;

  case 5:
#line 381 "GetDP.y"
    { Formulation_S.DefineQuantity = NULL ; ;}
    break;

  case 19:
#line 404 "GetDP.y"
    {            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;}
    break;

  case 21:
#line 419 "GetDP.y"
    { Help(NULL); ;}
    break;

  case 22:
#line 421 "GetDP.y"
    { Help("Print"); ;}
    break;

  case 23:
#line 423 "GetDP.y"
    { Help("Check"); ;}
    break;

  case 24:
#line 425 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 25:
#line 427 "GetDP.y"
    { Help("Log"); ;}
    break;

  case 26:
#line 429 "GetDP.y"
    { Help("Help"); ;}
    break;

  case 27:
#line 431 "GetDP.y"
    { Help(yyvsp[-1].c); ;}
    break;

  case 28:
#line 433 "GetDP.y"
    { Msg(RESOURCES, ""); ;}
    break;

  case 29:
#line 435 "GetDP.y"
    { Print_ProblemStructure(&Problem_S); ;}
    break;

  case 30:
#line 437 "GetDP.y"
    { Print_Group(&Problem_S); ;}
    break;

  case 31:
#line 439 "GetDP.y"
    { Print_Expression(&Problem_S); ;}
    break;

  case 32:
#line 441 "GetDP.y"
    { Print_Constraint(&Problem_S); ;}
    break;

  case 33:
#line 443 "GetDP.y"
    { Print_Jacobian(&Problem_S); ;}
    break;

  case 34:
#line 445 "GetDP.y"
    { Print_Integration(&Problem_S); ;}
    break;

  case 35:
#line 447 "GetDP.y"
    { Print_FunctionSpace(&Problem_S); ;}
    break;

  case 36:
#line 449 "GetDP.y"
    { Print_Formulation(&Problem_S); ;}
    break;

  case 37:
#line 451 "GetDP.y"
    { Print_Resolution(&Problem_S); ;}
    break;

  case 38:
#line 453 "GetDP.y"
    { Print_PostProcessing(&Problem_S); ;}
    break;

  case 39:
#line 455 "GetDP.y"
    { Print_PostOperation(&Problem_S); ;}
    break;

  case 40:
#line 457 "GetDP.y"
    { Print_Object(yyvsp[-1].i, &Problem_S); ;}
    break;

  case 41:
#line 459 "GetDP.y"
    {
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 42:
#line 467 "GetDP.y"
    {
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;}
    break;

  case 45:
#line 491 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;}
    break;

  case 46:
#line 494 "GetDP.y"
    { Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;}
    break;

  case 47:
#line 500 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, yyvsp[-4].c, 0, 0) ;
    ;}
    break;

  case 50:
#line 510 "GetDP.y"
    { Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;}
    break;

  case 53:
#line 520 "GetDP.y"
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

  case 54:
#line 530 "GetDP.y"
    {
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;}
    break;

  case 55:
#line 537 "GetDP.y"
    {
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;}
    break;

  case 56:
#line 547 "GetDP.y"
    {
      Group_S.FunctionType = yyvsp[-2].i ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      Group_S.InitialList = yyvsp[0].l ;
    ;}
    break;

  case 57:
#line 556 "GetDP.y"
    {
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = yyvsp[-1].l ;
      yyval.i = -1 ;
    ;}
    break;

  case 58:
#line 564 "GetDP.y"
    {
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;}
    break;

  case 59:
#line 575 "GetDP.y"
    {
      yyval.i = yyvsp[0].i ;
    ;}
    break;

  case 60:
#line 580 "GetDP.y"
    {
      if ( !strcmp(yyvsp[0].c, "All") ) {
	yyval.i = -3;
      }
      else if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) >= 0 ) {
	List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
      }
      else {
	yyval.i = -2 ; vyyerror("Unknown Group: %s", yyvsp[0].c) ;
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 61:
#line 597 "GetDP.y"
    {
      if (!Flag_MultipleIndex) {
	if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[-1].c, fcmp_Group_Name)) >= 0 )
	  List_Read(Problem_S.Group, i, &Group_S) ; yyval.i = i ;
      }
      else {
	List_Reset(ListOfInt_L) ;  /* For list of multiple region */

	for (k = 0 ; k < Nbr_Index ; k++) {
	  sprintf(tmpstr, "%s_%d", yyvsp[-1].c, k+1) ;
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

  case 62:
#line 627 "GetDP.y"
    { yyval.i = REGION ; ;}
    break;

  case 63:
#line 630 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 64:
#line 642 "GetDP.y"
    { yyval.l = yyvsp[0].l ; ;}
    break;

  case 65:
#line 643 "GetDP.y"
    { yyval.l = NULL ; ;}
    break;

  case 66:
#line 650 "GetDP.y"
    { Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;}
    break;

  case 67:
#line 653 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;}
    break;

  case 68:
#line 656 "GetDP.y"
    {
      Type_SuppList = SUPPLIST_INSUPPORT ;
      if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) >= 0 ) {
	if ( ((struct Group *)List_Pointer(Problem_S.Group, i))->Type == 
	     ELEMENTLIST ) {
	  yyval.l = List_Create( 1, 5, sizeof(int)) ;
	  List_Add(yyval.l, &i) ;
	}
	else  vyyerror("Not a Support of Element Type: %s", yyvsp[0].c) ;
      }
      else  vyyerror("Unknown Region for Support: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 69:
#line 674 "GetDP.y"
    { yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 70:
#line 687 "GetDP.y"
    {
      yyval.l = List_Create(((List_Nbr(yyvsp[0].l) > 0)? List_Nbr(yyvsp[0].l) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;}
    break;

  case 71:
#line 694 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 72:
#line 701 "GetDP.y"
    {
      yyval.l = List_Create( 5, 5, sizeof(int)) ;
    ;}
    break;

  case 73:
#line 706 "GetDP.y"
    {
      yyval.l = yyvsp[-2].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;}
    break;

  case 74:
#line 713 "GetDP.y"
    {
      yyval.l = yyvsp[-3].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Suppress(yyval.l, (int *)List_Pointer(yyvsp[0].l, i), fcmp_int ) ;
    ;}
    break;

  case 75:
#line 724 "GetDP.y"
    {
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ;
    ;}
    break;

  case 76:
#line 730 "GetDP.y"
    {
      i = (int)yyvsp[-1].d ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
    ;}
    break;

  case 77:
#line 737 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	List_Read(yyvsp[-1].l, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      yyval.l = ListOfInt_L;
    ;}
    break;

  case 78:
#line 748 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 79:
#line 757 "GetDP.y"
    { 
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-3].d ; (yyvsp[-3].d<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-3].d<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;}
    break;

  case 80:
#line 765 "GetDP.y"
    { 
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

  case 81:
#line 779 "GetDP.y"
    { 
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

  case 82:
#line 792 "GetDP.y"
    {
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

  case 84:
#line 831 "GetDP.y"
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
#line 841 "GetDP.y"
    { 
      for (k = 0 ; k < (int)yyvsp[-1].d ; k++) {
	sprintf(tmpstr, "%s_%d", yyvsp[-3].c, k+1) ;
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

  case 88:
#line 863 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].d ; ;}
    break;

  case 89:
#line 868 "GetDP.y"
    { Flag_MultipleIndex = 0 ; ;}
    break;

  case 90:
#line 869 "GetDP.y"
    { Flag_MultipleIndex = 1 ; ;}
    break;

  case 91:
#line 874 "GetDP.y"
    { yyval.i = (int)yyvsp[-1].d ; ;}
    break;

  case 95:
#line 893 "GetDP.y"
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
#line 913 "GetDP.y"
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
#line 966 "GetDP.y"
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
#line 986 "GetDP.y"
    { Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;}
    break;

  case 102:
#line 992 "GetDP.y"
    { if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;}
    break;

  case 103:
#line 998 "GetDP.y"
    { Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;}
    break;

  case 104:
#line 1001 "GetDP.y"
    { Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;}
    break;

  case 105:
#line 1008 "GetDP.y"
    { List_Reset(ListOfInt_L) ; ;}
    break;

  case 107:
#line 1019 "GetDP.y"
    { List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 108:
#line 1022 "GetDP.y"
    { List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;}
    break;

  case 109:
#line 1028 "GetDP.y"
    { Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;}
    break;

  case 110:
#line 1032 "GetDP.y"
    { yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;}
    break;

  case 112:
#line 1044 "GetDP.y"
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
#line 1057 "GetDP.y"
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
#line 1071 "GetDP.y"
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
#line 1086 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 116:
#line 1092 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 117:
#line 1098 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 118:
#line 1104 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 119:
#line 1110 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 120:
#line 1116 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 121:
#line 1122 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 122:
#line 1128 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 123:
#line 1134 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 124:
#line 1140 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 125:
#line 1146 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 126:
#line 1152 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 127:
#line 1158 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 128:
#line 1164 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 129:
#line 1170 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 130:
#line 1176 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 131:
#line 1182 "GetDP.y"
    { WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;}
    break;

  case 132:
#line 1189 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 134:
#line 1197 "GetDP.y"
    { WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;}
    break;

  case 136:
#line 1210 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 137:
#line 1216 "GetDP.y"
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
#line 1290 "GetDP.y"
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
#line 1324 "GetDP.y"
    { WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 140:
#line 1333 "GetDP.y"
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

  case 141:
#line 1345 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 142:
#line 1347 "GetDP.y"
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
#line 1359 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 144:
#line 1361 "GetDP.y"
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
#line 1373 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 146:
#line 1375 "GetDP.y"
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
#line 1389 "GetDP.y"
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
#line 1401 "GetDP.y"
    { WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 149:
#line 1407 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 150:
#line 1413 "GetDP.y"
    { Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;}
    break;

  case 151:
#line 1415 "GetDP.y"
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
#line 1444 "GetDP.y"
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

  case 153:
#line 1470 "GetDP.y"
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
#line 1483 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 155:
#line 1489 "GetDP.y"
    { WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 156:
#line 1496 "GetDP.y"
    { WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 157:
#line 1502 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 158:
#line 1509 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 159:
#line 1516 "GetDP.y"
    {
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;}
    break;

  case 160:
#line 1527 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 161:
#line 1528 "GetDP.y"
    { yyval.i = 0 ; ;}
    break;

  case 162:
#line 1529 "GetDP.y"
    { yyval.i = yyvsp[-1].i ; ;}
    break;

  case 163:
#line 1534 "GetDP.y"
    { yyval.i = 1 ; ;}
    break;

  case 164:
#line 1535 "GetDP.y"
    { yyval.i = yyvsp[-2].i + 1 ; ;}
    break;

  case 165:
#line 1541 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 166:
#line 1544 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 167:
#line 1547 "GetDP.y"
    { /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &d) ;
    ;}
    break;

  case 168:
#line 1562 "GetDP.y"
    { if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;}
    break;

  case 169:
#line 1567 "GetDP.y"
    { List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;}
    break;

  case 170:
#line 1574 "GetDP.y"
    { JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;}
    break;

  case 172:
#line 1583 "GetDP.y"
    { Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;}
    break;

  case 173:
#line 1588 "GetDP.y"
    { JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;}
    break;

  case 174:
#line 1595 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;}
    break;

  case 175:
#line 1598 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;}
    break;

  case 176:
#line 1605 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;}
    break;

  case 178:
#line 1615 "GetDP.y"
    { JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;}
    break;

  case 179:
#line 1618 "GetDP.y"
    { JacobianCase_S.RegionIndex = -1 ; ;}
    break;

  case 180:
#line 1621 "GetDP.y"
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

  case 181:
#line 1659 "GetDP.y"
    { if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;}
    break;

  case 182:
#line 1665 "GetDP.y"
    { List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;}
    break;

  case 183:
#line 1672 "GetDP.y"
    { 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;}
    break;

  case 185:
#line 1685 "GetDP.y"
    { 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 186:
#line 1692 "GetDP.y"
    { IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;}
    break;

  case 187:
#line 1695 "GetDP.y"
    { IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;}
    break;

  case 188:
#line 1702 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;}
    break;

  case 189:
#line 1705 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;}
    break;

  case 190:
#line 1712 "GetDP.y"
    { 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;}
    break;

  case 192:
#line 1724 "GetDP.y"
    { IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 193:
#line 1734 "GetDP.y"
    { IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 194:
#line 1744 "GetDP.y"
    { IntegrationCase_S.Case = yyvsp[-1].l ; ;}
    break;

  case 195:
#line 1751 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;}
    break;

  case 196:
#line 1754 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;}
    break;

  case 197:
#line 1761 "GetDP.y"
    { QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;}
    break;

  case 199:
#line 1777 "GetDP.y"
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

  case 200:
#line 1825 "GetDP.y"
    { QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 201:
#line 1828 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;}
    break;

  case 202:
#line 1831 "GetDP.y"
    { QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 203:
#line 1834 "GetDP.y"
    { QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;}
    break;

  case 204:
#line 1837 "GetDP.y"
    { QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;}
    break;

  case 205:
#line 1848 "GetDP.y"
    { if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;}
    break;

  case 207:
#line 1858 "GetDP.y"
    {
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;}
    break;

  case 210:
#line 1870 "GetDP.y"
    { Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;}
    break;

  case 212:
#line 1883 "GetDP.y"
    {
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 213:
#line 1890 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-2].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ;
    ;}
    break;

  case 214:
#line 1898 "GetDP.y"
    { Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 215:
#line 1907 "GetDP.y"
    { Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;}
    break;

  case 216:
#line 1910 "GetDP.y"
    {
      if (!Constraint_S.MultiConstraintPerRegion)
	Constraint_S.MultiConstraintPerRegion =
	  List_Create( 5, 5, sizeof(struct MultiConstraintPerRegion)) ;

      MultiConstraintPerRegion_S.Name = yyvsp[-3].c ;
      MultiConstraintPerRegion_S.ConstraintPerRegion = yyvsp[-1].l ;
      MultiConstraintPerRegion_S.Active = NULL ;

      List_Add(Constraint_S.MultiConstraintPerRegion, 
	       &MultiConstraintPerRegion_S) ;
    ;}
    break;

  case 217:
#line 1928 "GetDP.y"
    {
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;}
    break;

  case 218:
#line 1933 "GetDP.y"
    {
      List_Add(yyval.l = yyvsp[-3].l, &ConstraintPerRegion_S) ;
    ;}
    break;

  case 219:
#line 1938 "GetDP.y"
    { 
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 220:
#line 1947 "GetDP.y"
    { 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;}
    break;

  case 222:
#line 1961 "GetDP.y"
    { ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 223:
#line 1971 "GetDP.y"
    { 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
    ;}
    break;

  case 224:
#line 1976 "GetDP.y"
    { 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", yyvsp[-1].i) ;
    ;}
    break;

  case 225:
#line 1982 "GetDP.y"
    {
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;}
    break;

  case 226:
#line 1987 "GetDP.y"
    { 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;}
    break;

  case 227:
#line 1995 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;}
    break;

  case 228:
#line 2003 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;}
    break;

  case 229:
#line 2012 "GetDP.y"
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

  case 230:
#line 2030 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;}
    break;

  case 231:
#line 2039 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 232:
#line 2047 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 233:
#line 2055 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 234:
#line 2065 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;}
    break;

  case 235:
#line 2075 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;}
    break;

  case 236:
#line 2085 "GetDP.y"
    {
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;}
    break;

  case 237:
#line 2105 "GetDP.y"
    { if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;}
    break;

  case 239:
#line 2116 "GetDP.y"
    {
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;}
    break;

  case 242:
#line 2129 "GetDP.y"
    { FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;}
    break;

  case 244:
#line 2141 "GetDP.y"
    {
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 245:
#line 2148 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-2].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ;
    ;}
    break;

  case 246:
#line 2156 "GetDP.y"
    { FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 247:
#line 2165 "GetDP.y"
    { FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;}
    break;

  case 248:
#line 2168 "GetDP.y"
    { FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;}
    break;

  case 249:
#line 2171 "GetDP.y"
    { FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;}
    break;

  case 250:
#line 2174 "GetDP.y"
    { FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;}
    break;

  case 251:
#line 2181 "GetDP.y"
    {
      yyval.l = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;}
    break;

  case 252:
#line 2187 "GetDP.y"
    {
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
    ;}
    break;

  case 253:
#line 2204 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 254:
#line 2213 "GetDP.y"
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

  case 256:
#line 2234 "GetDP.y"
    { BasisFunction_S.Name = yyvsp[-1].c ; ;}
    break;

  case 257:
#line 2237 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;}
    break;

  case 258:
#line 2242 "GetDP.y"
    { Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;}
    break;

  case 259:
#line 2247 "GetDP.y"
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

  case 260:
#line 2261 "GetDP.y"
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

  case 261:
#line 2281 "GetDP.y"
    {
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 262:
#line 2286 "GetDP.y"
    {
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;}
    break;

  case 263:
#line 2291 "GetDP.y"
    {
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", yyvsp[-1].i) ;
    ;}
    break;

  case 264:
#line 2296 "GetDP.y"
    {
      BasisFunction_S.EntityIndex = Num_Group(&Group_S, "BF_Entity", yyvsp[-1].i) ;
      if (Group_S.InitialList)
	List_Sort(Group_S.InitialList, fcmp_int) ;  /* Needed for Global Region */

      if (BasisFunction_S.GlobalBasisFunction) { /* Function to be defined before Entity */
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
    ;}
    break;

  case 266:
#line 2330 "GetDP.y"
    {
      Nbr_Index = yyvsp[-1].i ;
    ;}
    break;

  case 267:
#line 2334 "GetDP.y"
    {
      Flag1 = Flag_MultipleIndex;
      if (Flag_MultipleIndex)
	Msg(WARNING, "Old way to define Group, remove \'{}\' to use one Group");
      /* Will be the new way to define Group
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", $6) ;
      */
    ;}
    break;

  case 268:
#line 2344 "GetDP.y"
    {
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for multiple Formulation: %s {}", yyvsp[-12].c) ;

      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-11].i, 1, sizeof(struct GlobalBasisFunction)) ;

      for (k = 0 ; k < yyvsp[-11].i ; k++) {

	if (!Flag1) { /* New way: only one group with all the single regions is given */
	  List_Read(Group_S.InitialList, k, &i) ;
	  GlobalBasisFunction_S.EntityIndex = i ;
	}
	else { /* Old way */
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
	}

	sprintf(tmpstr, "%s_%d", yyvsp[-12].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Formulation, tmpstr,
				 fcmp_Formulation_Name)) >= 0) {
	  GlobalBasisFunction_S.FormulationIndex = i ;
	  List_Read(Problem_S.Formulation, i, &Formulation_S) ;
	  if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-15].c, 
				   fcmp_DefineQuantity_Name)) >= 0)
	    GlobalBasisFunction_S.DefineQuantityIndex = i ;
	  else {
	    vyyerror("Unknown Quantity '%s' in Formulation '%s'", yyvsp[-15].c,
		     Formulation_S.Name) ;
	    break ;
	  }
	}
	else
	  vyyerror("Unknown Formulation: %s {%d}", yyvsp[-12].c, k+1) ;

	sprintf(tmpstr, "%s_%d", yyvsp[-3].c, k+1) ;
	if ((i = List_ISearchSeq(Problem_S.Resolution, tmpstr,
				 fcmp_Resolution_Name)) >= 0)
	  GlobalBasisFunction_S.ResolutionIndex = i ;
	else
	  vyyerror("Unknown Resolution: %s {%d}", yyvsp[-3].c, k+1) ;

	GlobalBasisFunction_S.QuantityStorage = NULL ;
	List_Add(BasisFunction_S.GlobalBasisFunction, &GlobalBasisFunction_S) ;
      }
      List_Sort(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;

      Free(yyvsp[-15].c) ; Free(yyvsp[-12].c) ; Free(yyvsp[-3].c) ;
    ;}
    break;

  case 269:
#line 2408 "GetDP.y"
    { 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;}
    break;

  case 270:
#line 2414 "GetDP.y"
    { 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;}
    break;

  case 271:
#line 2423 "GetDP.y"
    { 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;}
    break;

  case 273:
#line 2434 "GetDP.y"
    { 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 274:
#line 2441 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 275:
#line 2444 "GetDP.y"
    { SubSpace_S.BasisFunction = yyvsp[-1].l ; ;}
    break;

  case 276:
#line 2451 "GetDP.y"
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

  case 277:
#line 2467 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 278:
#line 2473 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof(int)) ; ;}
    break;

  case 279:
#line 2476 "GetDP.y"
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

  case 280:
#line 2495 "GetDP.y"
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

  case 281:
#line 2507 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 282:
#line 2514 "GetDP.y"
    { 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;}
    break;

  case 283:
#line 2519 "GetDP.y"
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

  case 284:
#line 2534 "GetDP.y"
    { 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;}
    break;

  case 285:
#line 2540 "GetDP.y"
    { 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;}
    break;

  case 286:
#line 2550 "GetDP.y"
    { 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;}
    break;

  case 288:
#line 2562 "GetDP.y"
    { 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 289:
#line 2569 "GetDP.y"
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

  case 290:
#line 2580 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 291:
#line 2594 "GetDP.y"
    {
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;}
    break;

  case 292:
#line 2599 "GetDP.y"
    {
      Group_S.FunctionType = Type_Function ;
      Group_S.SuppListType = Type_SuppList ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }

      if (Constraint_Index >= 0) {
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
    ;}
    break;

  case 293:
#line 2636 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 294:
#line 2645 "GetDP.y"
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
#line 2661 "GetDP.y"
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
#line 2694 "GetDP.y"
    { Type_Function = yyvsp[-1].i ; ;}
    break;

  case 298:
#line 2697 "GetDP.y"
    { Type_SuppList = yyvsp[-1].i ; ;}
    break;

  case 299:
#line 2700 "GetDP.y"
    {
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c, fcmp_Constraint_Name) ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 300:
#line 2715 "GetDP.y"
    { if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;}
    break;

  case 302:
#line 2725 "GetDP.y"
    {
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;}
    break;

  case 305:
#line 2738 "GetDP.y"
    { Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;}
    break;

  case 307:
#line 2749 "GetDP.y"
    {
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 308:
#line 2756 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-2].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ;
    ;}
    break;

  case 309:
#line 2764 "GetDP.y"
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
#line 2776 "GetDP.y"
    { Formulation_S.Equation = yyvsp[-1].l ; ;}
    break;

  case 312:
#line 2782 "GetDP.y"
    {
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;}
    break;

  case 313:
#line 2787 "GetDP.y"
    {
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;}
    break;

  case 315:
#line 2798 "GetDP.y"
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
#line 2821 "GetDP.y"
    { DefineQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 318:
#line 2824 "GetDP.y"
    { DefineQuantity_S.Type = GLOBALQUANTITY ; ;}
    break;

  case 319:
#line 2828 "GetDP.y"
    { DefineQuantity_S.Type = INTEGRALQUANTITY ; ;}
    break;

  case 320:
#line 2831 "GetDP.y"
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
#line 2841 "GetDP.y"
    { DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;}
    break;

  case 322:
#line 2845 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[0].c,
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", yyvsp[0].c) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;}
    break;

  case 323:
#line 2853 "GetDP.y"
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
#line 2877 "GetDP.y"
    { 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;}
    break;

  case 325:
#line 2882 "GetDP.y"
    { 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 326:
#line 2888 "GetDP.y"
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

  case 327:
#line 3199 "GetDP.y"
    {
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;}
    break;

  case 328:
#line 3204 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 329:
#line 3213 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 330:
#line 3222 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 331:
#line 3231 "GetDP.y"
    { DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;}
    break;

  case 333:
#line 3239 "GetDP.y"
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

  case 334:
#line 3279 "GetDP.y"
    {
      yyval.l = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;}
    break;

  case 335:
#line 3284 "GetDP.y"
    {
      List_Add(yyval.l = yyvsp[-1].l, &EquationTerm_S) ;
    ;}
    break;

  case 336:
#line 3289 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 337:
#line 3294 "GetDP.y"
    {
      yyval.l = yyvsp[-1].l ;
    ;}
    break;

  case 338:
#line 3303 "GetDP.y"
    { EquationTerm_S.Type = GALERKIN ; ;}
    break;

  case 339:
#line 3306 "GetDP.y"
    { EquationTerm_S.Type = DERHAM ; ;}
    break;

  case 340:
#line 3309 "GetDP.y"
    { EquationTerm_S.Type = GLOBALTERM ; ;}
    break;

  case 341:
#line 3312 "GetDP.y"
    { EquationTerm_S.Type = GLOBALEQUATION ; ;}
    break;

  case 342:
#line 3323 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;}
    break;

  case 344:
#line 3334 "GetDP.y"
    { EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 345:
#line 3344 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 346:
#line 3354 "GetDP.y"
    {
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;}
    break;

  case 347:
#line 3368 "GetDP.y"
    {
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;}
    break;

  case 349:
#line 3380 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;}
    break;

  case 350:
#line 3382 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;}
    break;

  case 351:
#line 3384 "GetDP.y"
    { GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;}
    break;

  case 352:
#line 3386 "GetDP.y"
    { GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;}
    break;

  case 353:
#line 3394 "GetDP.y"
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

  case 355:
#line 3419 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 356:
#line 3427 "GetDP.y"
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

  case 357:
#line 3506 "GetDP.y"
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

  case 358:
#line 3552 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;}
    break;

  case 359:
#line 3557 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 360:
#line 3566 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 361:
#line 3575 "GetDP.y"
    {
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;}
    break;

  case 362:
#line 3580 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 363:
#line 3589 "GetDP.y"
    { if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;}
    break;

  case 364:
#line 3600 "GetDP.y"
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

  case 366:
#line 3629 "GetDP.y"
    {
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;}
    break;

  case 367:
#line 3634 "GetDP.y"
    { 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 368:
#line 3642 "GetDP.y"
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

  case 369:
#line 3697 "GetDP.y"
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

  case 370:
#line 3714 "GetDP.y"
    { Type_TermOperator = NODT_    ; ;}
    break;

  case 371:
#line 3715 "GetDP.y"
    { Type_TermOperator = DT_      ; ;}
    break;

  case 372:
#line 3716 "GetDP.y"
    { Type_TermOperator = DTDOF_   ; ;}
    break;

  case 373:
#line 3717 "GetDP.y"
    { Type_TermOperator = DTDT_    ; ;}
    break;

  case 374:
#line 3718 "GetDP.y"
    { Type_TermOperator = DTDTDOF_ ; ;}
    break;

  case 375:
#line 3719 "GetDP.y"
    { Type_TermOperator = JACNL_   ; ;}
    break;

  case 376:
#line 3720 "GetDP.y"
    { Type_TermOperator = NEVERDT_ ; ;}
    break;

  case 377:
#line 3721 "GetDP.y"
    { Type_TermOperator = DTNL_    ; ;}
    break;

  case 378:
#line 3728 "GetDP.y"
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

  case 379:
#line 3749 "GetDP.y"
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

  case 380:
#line 3773 "GetDP.y"
    { if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;}
    break;

  case 382:
#line 3783 "GetDP.y"
    {
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;}
    break;

  case 385:
#line 3796 "GetDP.y"
    {
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;}
    break;

  case 387:
#line 3808 "GetDP.y"
    {
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;}
    break;

  case 388:
#line 3815 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-2].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ;
    ;}
    break;

  case 389:
#line 3823 "GetDP.y"
    { Resolution_S.DefineSystem = yyvsp[-1].l ; ;}
    break;

  case 390:
#line 3826 "GetDP.y"
    { Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;}
    break;

  case 391:
#line 3828 "GetDP.y"
    { Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;}
    break;

  case 393:
#line 3836 "GetDP.y"
    {
      yyval.l = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;}
    break;

  case 394:
#line 3841 "GetDP.y"
    {
      List_Add(yyval.l = Current_System_L = yyvsp[-3].l, &DefineSystem_S) ;
    ;}
    break;

  case 395:
#line 3846 "GetDP.y"
    {
       yyval.l = yyvsp[-1].l ;
     ;}
    break;

  case 396:
#line 3856 "GetDP.y"
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

  case 398:
#line 3876 "GetDP.y"
    { DefineSystem_S.Name = yyvsp[-1].c ; ;}
    break;

  case 399:
#line 3879 "GetDP.y"
    { DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 400:
#line 3888 "GetDP.y"
    { DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;}
    break;

  case 401:
#line 3891 "GetDP.y"
    {
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;}
    break;

  case 402:
#line 3896 "GetDP.y"
    { 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;}
    break;

  case 403:
#line 3901 "GetDP.y"
    { 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;}
    break;

  case 404:
#line 3906 "GetDP.y"
    { DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;}
    break;

  case 405:
#line 3911 "GetDP.y"
    {
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;}
    break;

  case 407:
#line 3922 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 408:
#line 3931 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 409:
#line 3938 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 410:
#line 3941 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 411:
#line 3953 "GetDP.y"
    {
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;}
    break;

  case 412:
#line 3963 "GetDP.y"
    { yyval.l = yyvsp[-1].l ;  ;}
    break;

  case 413:
#line 3969 "GetDP.y"
    { yyval.l = List_Create(2, 2, sizeof(int)) ; ;}
    break;

  case 414:
#line 3972 "GetDP.y"
    {
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;}
    break;

  case 415:
#line 3984 "GetDP.y"
    { 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;}
    break;

  case 416:
#line 3992 "GetDP.y"
    { 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;}
    break;

  case 417:
#line 4005 "GetDP.y"
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

  case 418:
#line 4027 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-1].i ;
    ;}
    break;

  case 419:
#line 4034 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;}
    break;

  case 420:
#line 4040 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;}
    break;

  case 421:
#line 4046 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;}
    break;

  case 422:
#line 4052 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;}
    break;

  case 423:
#line 4060 "GetDP.y"
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

  case 424:
#line 4082 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-2].i ;
    ;}
    break;

  case 425:
#line 4089 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;}
    break;

  case 426:
#line 4095 "GetDP.y"
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

  case 427:
#line 4106 "GetDP.y"
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

  case 428:
#line 4117 "GetDP.y"
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

  case 429:
#line 4130 "GetDP.y"
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

  case 430:
#line 4145 "GetDP.y"
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

  case 431:
#line 4160 "GetDP.y"
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

  case 432:
#line 4175 "GetDP.y"
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

  case 433:
#line 4195 "GetDP.y"
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

  case 434:
#line 4216 "GetDP.y"
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

  case 435:
#line 4228 "GetDP.y"
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

  case 436:
#line 4248 "GetDP.y"
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

  case 437:
#line 4265 "GetDP.y"
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

  case 438:
#line 4284 "GetDP.y"
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

  case 439:
#line 4305 "GetDP.y"
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

  case 440:
#line 4319 "GetDP.y"
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

  case 441:
#line 4333 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)yyvsp[-2].i ;
    ;}
    break;

  case 442:
#line 4341 "GetDP.y"
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

  case 443:
#line 4375 "GetDP.y"
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

  case 444:
#line 4388 "GetDP.y"
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

  case 445:
#line 4402 "GetDP.y"
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

  case 446:
#line 4415 "GetDP.y"
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

  case 447:
#line 4427 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 449:
#line 4436 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;}
    break;

  case 451:
#line 4445 "GetDP.y"
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

  case 452:
#line 4456 "GetDP.y"
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

  case 453:
#line 4468 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;}
    break;

  case 454:
#line 4478 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = yyvsp[-2].c ; 
    ;}
    break;

  case 455:
#line 4486 "GetDP.y"
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

  case 456:
#line 4499 "GetDP.y"
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

  case 457:
#line 4512 "GetDP.y"
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

  case 458:
#line 4526 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 459:
#line 4536 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;}
    break;

  case 460:
#line 4546 "GetDP.y"
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

  case 461:
#line 4560 "GetDP.y"
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

  case 462:
#line 4574 "GetDP.y"
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

  case 463:
#line 4593 "GetDP.y"
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

  case 464:
#line 4611 "GetDP.y"
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

  case 465:
#line 4622 "GetDP.y"
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

  case 466:
#line 4637 "GetDP.y"
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

  case 467:
#line 4652 "GetDP.y"
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

  case 468:
#line 4667 "GetDP.y"
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

  case 469:
#line 4682 "GetDP.y"
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

  case 470:
#line 4697 "GetDP.y"
    {
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;}
    break;

  case 471:
#line 4708 "GetDP.y"
    {
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;}
    break;

  case 472:
#line 4713 "GetDP.y"
    { if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 473:
#line 4723 "GetDP.y"
    {
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;}
    break;

  case 475:
#line 4733 "GetDP.y"
    { Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;}
    break;

  case 476:
#line 4736 "GetDP.y"
    { Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 477:
#line 4746 "GetDP.y"
    { Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 478:
#line 4761 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;}
    break;

  case 480:
#line 4777 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;}
    break;

  case 481:
#line 4781 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 482:
#line 4785 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 483:
#line 4789 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;}
    break;

  case 484:
#line 4794 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 485:
#line 4805 "GetDP.y"
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

  case 487:
#line 4822 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;}
    break;

  case 488:
#line 4826 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;}
    break;

  case 489:
#line 4830 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;}
    break;

  case 490:
#line 4834 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;}
    break;

  case 491:
#line 4838 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;}
    break;

  case 492:
#line 4843 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 493:
#line 4854 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;}
    break;

  case 495:
#line 4869 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 496:
#line 4873 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;}
    break;

  case 497:
#line 4877 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;}
    break;

  case 498:
#line 4881 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 499:
#line 4885 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 500:
#line 4896 "GetDP.y"
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

  case 502:
#line 4914 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;}
    break;

  case 503:
#line 4918 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;}
    break;

  case 504:
#line 4922 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;}
    break;

  case 505:
#line 4926 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;}
    break;

  case 506:
#line 4931 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;}
    break;

  case 507:
#line 4941 "GetDP.y"
    { Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;}
    break;

  case 508:
#line 4947 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;}
    break;

  case 509:
#line 4953 "GetDP.y"
    { List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;}
    break;

  case 510:
#line 4963 "GetDP.y"
    { yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;}
    break;

  case 511:
#line 4966 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;}
    break;

  case 512:
#line 4971 "GetDP.y"
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

  case 514:
#line 4989 "GetDP.y"
    { ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 515:
#line 4999 "GetDP.y"
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

  case 516:
#line 5028 "GetDP.y"
    { ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;}
    break;

  case 517:
#line 5031 "GetDP.y"
    { ChangeOfState_S.Criterion = yyvsp[-1].d ; ;}
    break;

  case 518:
#line 5034 "GetDP.y"
    { 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;}
    break;

  case 519:
#line 5042 "GetDP.y"
    {
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;}
    break;

  case 520:
#line 5059 "GetDP.y"
    { 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;}
    break;

  case 522:
#line 5071 "GetDP.y"
    {
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;}
    break;

  case 525:
#line 5082 "GetDP.y"
    { 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;}
    break;

  case 527:
#line 5095 "GetDP.y"
    {
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 528:
#line 5102 "GetDP.y"
    {
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-2].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;}
    break;

  case 529:
#line 5110 "GetDP.y"
    { 
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[-1].c,
			       fcmp_Formulation_Name)) < 0){
	vyyerror("Unknown Formulation: %s", yyvsp[-1].c) ;
      }
      else {
	PostProcessing_S.FormulationIndex = i ;
	List_Read(Problem_S.Formulation, i, &Formulation_S) ;
      }
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 530:
#line 5123 "GetDP.y"
    { 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;}
    break;

  case 531:
#line 5128 "GetDP.y"
    { PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;}
    break;

  case 532:
#line 5134 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;}
    break;

  case 533:
#line 5137 "GetDP.y"
    { List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;}
    break;

  case 534:
#line 5140 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 535:
#line 5142 "GetDP.y"
    { yyval.l = yyvsp[-1].l ; ;}
    break;

  case 536:
#line 5148 "GetDP.y"
    { 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;}
    break;

  case 538:
#line 5159 "GetDP.y"
    { PostQuantity_S.Name = yyvsp[-1].c ; ;}
    break;

  case 539:
#line 5162 "GetDP.y"
    { PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;}
    break;

  case 540:
#line 5168 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;}
    break;

  case 541:
#line 5173 "GetDP.y"
    { 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;}
    break;

  case 542:
#line 5179 "GetDP.y"
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

  case 543:
#line 5193 "GetDP.y"
    { 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;}
    break;

  case 545:
#line 5207 "GetDP.y"
    { 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;}
    break;

  case 546:
#line 5214 "GetDP.y"
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

  case 547:
#line 5242 "GetDP.y"
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

  case 548:
#line 5253 "GetDP.y"
    {
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;}
    break;

  case 549:
#line 5258 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 550:
#line 5267 "GetDP.y"
    { if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;}
    break;

  case 551:
#line 5284 "GetDP.y"
    { 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;}
    break;

  case 553:
#line 5296 "GetDP.y"
    { List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;}
    break;

  case 556:
#line 5305 "GetDP.y"
    { 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;}
    break;

  case 558:
#line 5317 "GetDP.y"
    { 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;}
    break;

  case 559:
#line 5324 "GetDP.y"
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

  case 560:
#line 5336 "GetDP.y"
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

  case 561:
#line 5347 "GetDP.y"
    { 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;}
    break;

  case 562:
#line 5352 "GetDP.y"
    { PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;}
    break;

  case 563:
#line 5358 "GetDP.y"
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

  case 564:
#line 5375 "GetDP.y"
    {
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;}
    break;

  case 565:
#line 5385 "GetDP.y"
    { yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;}
    break;

  case 566:
#line 5388 "GetDP.y"
    {
      PostSubOperation_S.Format = -1 ;
    ;}
    break;

  case 567:
#line 5392 "GetDP.y"
    { 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;}
    break;

  case 568:
#line 5405 "GetDP.y"
    {
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;}
    break;

  case 569:
#line 5410 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_PRINT ;
    ;}
    break;

  case 570:
#line 5415 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-5].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = yyvsp[-3].i ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 571:
#line 5424 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-8].c ;
      PostSubOperation_S.Case.Expression.String2 = yyvsp[-4].c ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 572:
#line 5433 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-3].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 573:
#line 5442 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;}
    break;

  case 574:
#line 5448 "GetDP.y"
    {
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;}
    break;

  case 575:
#line 5453 "GetDP.y"
    {
      PostSubOperation_S.Type = POP_NONE ;
    ;}
    break;

  case 576:
#line 5462 "GetDP.y"
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
#line 5474 "GetDP.y"
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
#line 5497 "GetDP.y"
    { PostSubOperation_S.CombinationType = MULTIPLICATION ; ;}
    break;

  case 579:
#line 5498 "GetDP.y"
    { PostSubOperation_S.CombinationType = DIVISION ; ;}
    break;

  case 580:
#line 5499 "GetDP.y"
    { PostSubOperation_S.CombinationType = ADDITION ; ;}
    break;

  case 581:
#line 5500 "GetDP.y"
    { PostSubOperation_S.CombinationType = SOUSTRACTION ; ;}
    break;

  case 582:
#line 5506 "GetDP.y"
    { yyval.i = -1 ; ;}
    break;

  case 583:
#line 5508 "GetDP.y"
    { yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;}
    break;

  case 584:
#line 5514 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;}
    break;

  case 585:
#line 5520 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;}
    break;

  case 586:
#line 5527 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;}
    break;

  case 587:
#line 5536 "GetDP.y"
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
#line 5558 "GetDP.y"
    {
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;}
    break;

  case 589:
#line 5566 "GetDP.y"
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
#line 5577 "GetDP.y"
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
#line 5591 "GetDP.y"
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
#line 5612 "GetDP.y"
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
#line 5639 "GetDP.y"
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
#line 5670 "GetDP.y"
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
#line 5690 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
      PostSubOperation_S.Comma = 0 ;
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

  case 597:
#line 5726 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;}
    break;

  case 598:
#line 5733 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;}
    break;

  case 599:
#line 5740 "GetDP.y"
    { 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;}
    break;

  case 600:
#line 5747 "GetDP.y"
    { 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;}
    break;

  case 601:
#line 5751 "GetDP.y"
    { 
      PostSubOperation_S.Skin = 1 ; 
    ;}
    break;

  case 602:
#line 5755 "GetDP.y"
    {
      PostSubOperation_S.Smoothing = 1 ; 
    ;}
    break;

  case 603:
#line 5759 "GetDP.y"
    {
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;}
    break;

  case 604:
#line 5763 "GetDP.y"
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
#line 5773 "GetDP.y"
    {
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 606:
#line 5778 "GetDP.y"
    {
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 607:
#line 5783 "GetDP.y"
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

  case 608:
#line 5803 "GetDP.y"
    { 
      PostSubOperation_S.Comma = 1 ; 
    ;}
    break;

  case 609:
#line 5807 "GetDP.y"
    { 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;}
    break;

  case 610:
#line 5814 "GetDP.y"
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

  case 611:
#line 5824 "GetDP.y"
    { 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;}
    break;

  case 612:
#line 5833 "GetDP.y"
    { 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;}
    break;

  case 613:
#line 5842 "GetDP.y"
    { 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;}
    break;

  case 614:
#line 5849 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 615:
#line 5857 "GetDP.y"
    { 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;}
    break;

  case 616:
#line 5861 "GetDP.y"
    { 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;}
    break;

  case 617:
#line 5870 "GetDP.y"
    { 
      PostSubOperation_S.NoNewLine = 1 ;
    ;}
    break;

  case 618:
#line 5874 "GetDP.y"
    { 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;}
    break;

  case 619:
#line 5878 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 620:
#line 5886 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;}
    break;

  case 621:
#line 5892 "GetDP.y"
    { 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;}
    break;

  case 622:
#line 5896 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 623:
#line 5904 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 624:
#line 5911 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 625:
#line 5919 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 626:
#line 5926 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;}
    break;

  case 627:
#line 5934 "GetDP.y"
    { 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;}
    break;

  case 628:
#line 5941 "GetDP.y"
    { 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;}
    break;

  case 629:
#line 5949 "GetDP.y"
    {
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;}
    break;

  case 630:
#line 5953 "GetDP.y"
    {
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;}
    break;

  case 631:
#line 5962 "GetDP.y"
    {
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;}
    break;

  case 632:
#line 5968 "GetDP.y"
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

  case 633:
#line 6018 "GetDP.y"
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

  case 634:
#line 6033 "GetDP.y"
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

  case 635:
#line 6049 "GetDP.y"
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
      /*      hack_endfor_printf();*/
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;}
    break;

  case 636:
#line 6069 "GetDP.y"
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

  case 637:
#line 6089 "GetDP.y"
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

  case 638:
#line 6145 "GetDP.y"
    {
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;}
    break;

  case 639:
#line 6149 "GetDP.y"
    {
    ;}
    break;

  case 641:
#line 6164 "GetDP.y"
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

  case 642:
#line 6179 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 643:
#line 6185 "GetDP.y"
    { Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 644:
#line 6191 "GetDP.y"
    { Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 645:
#line 6197 "GetDP.y"
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

  case 646:
#line 6208 "GetDP.y"
    {
      Msg(DIRECT, yyvsp[-2].c);
    ;}
    break;

  case 647:
#line 6213 "GetDP.y"
    {
      Constant_S.Name = yyvsp[-1].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-1].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  printf("%s: %g\n", yyvsp[-1].c, Constant_S.Value.Float);
	else
	  printf("%s: Dimension %d\n", yyvsp[-1].c, List_Nbr(Constant_S.Value.ListOfFloat));
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    printf(" (%d) %g\n", i, d);
	  }
    ;}
    break;

  case 648:
#line 6229 "GetDP.y"
    {
      Msg(INFO, "Line number: %d", yylinenum);
    ;}
    break;

  case 649:
#line 6234 "GetDP.y"
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

  case 650:
#line 6246 "GetDP.y"
    {
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 651:
#line 6256 "GetDP.y"
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

  case 653:
#line 6275 "GetDP.y"
    { Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 654:
#line 6281 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 655:
#line 6287 "GetDP.y"
    { Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;}
    break;

  case 656:
#line 6298 "GetDP.y"
    { yyval.c = "Exp";    ;}
    break;

  case 657:
#line 6299 "GetDP.y"
    { yyval.c = "Log";    ;}
    break;

  case 658:
#line 6300 "GetDP.y"
    { yyval.c = "Log10";  ;}
    break;

  case 659:
#line 6301 "GetDP.y"
    { yyval.c = "Sqrt";   ;}
    break;

  case 660:
#line 6302 "GetDP.y"
    { yyval.c = "Sin";    ;}
    break;

  case 661:
#line 6303 "GetDP.y"
    { yyval.c = "Asin";   ;}
    break;

  case 662:
#line 6304 "GetDP.y"
    { yyval.c = "Cos";    ;}
    break;

  case 663:
#line 6305 "GetDP.y"
    { yyval.c = "Acos";   ;}
    break;

  case 664:
#line 6306 "GetDP.y"
    { yyval.c = "Tan";    ;}
    break;

  case 665:
#line 6307 "GetDP.y"
    { yyval.c = "Atan";   ;}
    break;

  case 666:
#line 6308 "GetDP.y"
    { yyval.c = "Atan2";  ;}
    break;

  case 667:
#line 6309 "GetDP.y"
    { yyval.c = "Sinh";   ;}
    break;

  case 668:
#line 6310 "GetDP.y"
    { yyval.c = "Cosh";   ;}
    break;

  case 669:
#line 6311 "GetDP.y"
    { yyval.c = "Tanh";   ;}
    break;

  case 670:
#line 6312 "GetDP.y"
    { yyval.c = "Fabs";   ;}
    break;

  case 671:
#line 6313 "GetDP.y"
    { yyval.c = "Floor";  ;}
    break;

  case 672:
#line 6314 "GetDP.y"
    { yyval.c = "Ceil";   ;}
    break;

  case 673:
#line 6315 "GetDP.y"
    { yyval.c = "Fmod";   ;}
    break;

  case 674:
#line 6316 "GetDP.y"
    { yyval.c = "Modulo"; ;}
    break;

  case 675:
#line 6317 "GetDP.y"
    { yyval.c = "Hypot";  ;}
    break;

  case 676:
#line 6318 "GetDP.y"
    { yyval.c = yyvsp[0].c;       ;}
    break;

  case 677:
#line 6322 "GetDP.y"
    { yyval.d = yyvsp[0].d ;          ;}
    break;

  case 678:
#line 6323 "GetDP.y"
    { yyval.d = yyvsp[-1].d ;          ;}
    break;

  case 679:
#line 6324 "GetDP.y"
    { yyval.d = -yyvsp[0].d ;         ;}
    break;

  case 680:
#line 6325 "GetDP.y"
    { yyval.d = !yyvsp[0].d ;         ;}
    break;

  case 681:
#line 6326 "GetDP.y"
    { yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;}
    break;

  case 682:
#line 6327 "GetDP.y"
    { yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;}
    break;

  case 683:
#line 6328 "GetDP.y"
    { yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;}
    break;

  case 684:
#line 6329 "GetDP.y"
    { yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;}
    break;

  case 685:
#line 6330 "GetDP.y"
    { yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;}
    break;

  case 686:
#line 6331 "GetDP.y"
    { yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;}
    break;

  case 687:
#line 6332 "GetDP.y"
    { yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;}
    break;

  case 688:
#line 6333 "GetDP.y"
    { yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;}
    break;

  case 689:
#line 6334 "GetDP.y"
    { yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;}
    break;

  case 690:
#line 6335 "GetDP.y"
    { yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;}
    break;

  case 691:
#line 6336 "GetDP.y"
    { yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;}
    break;

  case 692:
#line 6337 "GetDP.y"
    { yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;}
    break;

  case 693:
#line 6338 "GetDP.y"
    { yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;}
    break;

  case 694:
#line 6339 "GetDP.y"
    { yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;}
    break;

  case 695:
#line 6340 "GetDP.y"
    { yyval.d = exp(yyvsp[-1].d);      ;}
    break;

  case 696:
#line 6341 "GetDP.y"
    { yyval.d = log(yyvsp[-1].d);      ;}
    break;

  case 697:
#line 6342 "GetDP.y"
    { yyval.d = log10(yyvsp[-1].d);    ;}
    break;

  case 698:
#line 6343 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-1].d);     ;}
    break;

  case 699:
#line 6344 "GetDP.y"
    { yyval.d = sin(yyvsp[-1].d);      ;}
    break;

  case 700:
#line 6345 "GetDP.y"
    { yyval.d = asin(yyvsp[-1].d);     ;}
    break;

  case 701:
#line 6346 "GetDP.y"
    { yyval.d = cos(yyvsp[-1].d);      ;}
    break;

  case 702:
#line 6347 "GetDP.y"
    { yyval.d = acos(yyvsp[-1].d);     ;}
    break;

  case 703:
#line 6348 "GetDP.y"
    { yyval.d = tan(yyvsp[-1].d);      ;}
    break;

  case 704:
#line 6349 "GetDP.y"
    { yyval.d = atan(yyvsp[-1].d);     ;}
    break;

  case 705:
#line 6350 "GetDP.y"
    { yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;}
    break;

  case 706:
#line 6351 "GetDP.y"
    { yyval.d = sinh(yyvsp[-1].d);     ;}
    break;

  case 707:
#line 6352 "GetDP.y"
    { yyval.d = cosh(yyvsp[-1].d);     ;}
    break;

  case 708:
#line 6353 "GetDP.y"
    { yyval.d = tanh(yyvsp[-1].d);     ;}
    break;

  case 709:
#line 6354 "GetDP.y"
    { yyval.d = fabs(yyvsp[-1].d);     ;}
    break;

  case 710:
#line 6355 "GetDP.y"
    { yyval.d = floor(yyvsp[-1].d);    ;}
    break;

  case 711:
#line 6356 "GetDP.y"
    { yyval.d = ceil(yyvsp[-1].d);     ;}
    break;

  case 712:
#line 6357 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 713:
#line 6358 "GetDP.y"
    { yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;}
    break;

  case 714:
#line 6359 "GetDP.y"
    { yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;}
    break;

  case 715:
#line 6363 "GetDP.y"
    { Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;}
    break;

  case 716:
#line 6368 "GetDP.y"
    { yyval.d = yyvsp[0].d ; ;}
    break;

  case 717:
#line 6369 "GetDP.y"
    { yyval.d = (double)yyvsp[0].i ; ;}
    break;

  case 718:
#line 6370 "GetDP.y"
    { yyval.d = 3.1415926535897932 ; ;}
    break;

  case 719:
#line 6371 "GetDP.y"
    { yyval.d = (double)_0D ; ;}
    break;

  case 720:
#line 6372 "GetDP.y"
    { yyval.d = (double)_1D ; ;}
    break;

  case 721:
#line 6373 "GetDP.y"
    { yyval.d = (double)_2D ; ;}
    break;

  case 722:
#line 6374 "GetDP.y"
    { yyval.d = (double)_3D ; ;}
    break;

  case 723:
#line 6376 "GetDP.y"
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

  case 724:
#line 6394 "GetDP.y"
    { yyval.l = NULL; ;}
    break;

  case 725:
#line 6397 "GetDP.y"
    { 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 726:
#line 6403 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 727:
#line 6406 "GetDP.y"
    { yyval.l = yyvsp[-1].l; ;}
    break;

  case 728:
#line 6413 "GetDP.y"
    { 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;}
    break;

  case 729:
#line 6419 "GetDP.y"
    { yyval.l = yyvsp[0].l; ;}
    break;

  case 730:
#line 6422 "GetDP.y"
    { List_Add(yyval.l, &(yyvsp[0].d)) ; ;}
    break;

  case 731:
#line 6425 "GetDP.y"
    { 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;}
    break;

  case 732:
#line 6437 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;}
    break;

  case 733:
#line 6443 "GetDP.y"
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

  case 734:
#line 6454 "GetDP.y"
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

  case 735:
#line 6470 "GetDP.y"
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

  case 736:
#line 6492 "GetDP.y"
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

  case 737:
#line 6507 "GetDP.y"
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

  case 738:
#line 6545 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 739:
#line 6553 "GetDP.y"
    { yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;}
    break;

  case 740:
#line 6565 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;}
    break;

  case 741:
#line 6573 "GetDP.y"
    {
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;}
    break;

  case 742:
#line 6584 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 743:
#line 6587 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 744:
#line 6594 "GetDP.y"
    { yyval.c = yyvsp[0].c ; ;}
    break;

  case 745:
#line 6597 "GetDP.y"
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

  case 746:
#line 6612 "GetDP.y"
    {
      yyval.c = yyvsp[0].c ;
    ;}
    break;

  case 747:
#line 6617 "GetDP.y"
    {
      yyval.c = yyvsp[-1].c;
    ;}
    break;

  case 748:
#line 6622 "GetDP.y"
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

  case 749:
#line 6641 "GetDP.y"
    {
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;}
    break;

  case 750:
#line 6651 "GetDP.y"
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
#line 11445 "GetDP.tab.c"

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


#line 6662 "GetDP.y"



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
    sprintf(tmpstr, "%s_%d", Name, Num_Index) ;
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
    sprintf(tmpstr, "%s_%d", Name, Num_Index1) ;
  else if (Flag_Plus == 2)
    sprintf(tmpstr, "%s_%d_%d", Name, Num_Index1,Num_Index2) ;

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


