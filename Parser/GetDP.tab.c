
/*  A Bison parser, made from GetDP.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	tINT	257
#define	tFLOAT	258
#define	tSTRING	259
#define	tBIGSTR	260
#define	tEND	261
#define	tDOTS	262
#define	tStrCat	263
#define	tSprintf	264
#define	tPrintf	265
#define	tRead	266
#define	tFor	267
#define	tEndFor	268
#define	tIf	269
#define	tElse	270
#define	tEndIf	271
#define	tFlag	272
#define	tHelp	273
#define	tCpu	274
#define	tCheck	275
#define	tInclude	276
#define	tConstant	277
#define	tList	278
#define	tListAlt	279
#define	tLinSpace	280
#define	tLogSpace	281
#define	tListFromFile	282
#define	tDefineConstant	283
#define	tPi	284
#define	t0D	285
#define	t1D	286
#define	t2D	287
#define	t3D	288
#define	tExp	289
#define	tLog	290
#define	tLog10	291
#define	tSqrt	292
#define	tSin	293
#define	tAsin	294
#define	tCos	295
#define	tAcos	296
#define	tTan	297
#define	tAtan	298
#define	tAtan2	299
#define	tSinh	300
#define	tCosh	301
#define	tTanh	302
#define	tFabs	303
#define	tFloor	304
#define	tCeil	305
#define	tFmod	306
#define	tModulo	307
#define	tHypot	308
#define	tSolidAngle	309
#define	tTrace	310
#define	tOrder	311
#define	tCrossProduct	312
#define	tDofValue	313
#define	tMHTransform	314
#define	tMHJacNL	315
#define	tGroup	316
#define	tDefineGroup	317
#define	tAll	318
#define	tInSupport	319
#define	tMovingBand2D	320
#define	tDefineFunction	321
#define	tConstraint	322
#define	tRegion	323
#define	tSubRegion	324
#define	tRegionRef	325
#define	tSubRegionRef	326
#define	tFilter	327
#define	tCoefficient	328
#define	tValue	329
#define	tTimeFunction	330
#define	tBranch	331
#define	tNode	332
#define	tLoop	333
#define	tNameOfResolution	334
#define	tJacobian	335
#define	tCase	336
#define	tIntegration	337
#define	tFMMIntegration	338
#define	tMatrix	339
#define	tType	340
#define	tSubType	341
#define	tCriterion	342
#define	tGeoElement	343
#define	tNumberOfPoints	344
#define	tMaxNumberOfPoints	345
#define	tNumberOfDivisions	346
#define	tMaxNumberOfDivisions	347
#define	tStoppingCriterion	348
#define	tFunctionSpace	349
#define	tName	350
#define	tBasisFunction	351
#define	tNameOfCoef	352
#define	tFunction	353
#define	tdFunction	354
#define	tSubFunction	355
#define	tSubdFunction	356
#define	tSupport	357
#define	tEntity	358
#define	tSubSpace	359
#define	tNameOfBasisFunction	360
#define	tGlobalQuantity	361
#define	tEntityType	362
#define	tEntitySubType	363
#define	tNameOfConstraint	364
#define	tFormulation	365
#define	tQuantity	366
#define	tNameOfSpace	367
#define	tIndexOfSystem	368
#define	tSymmetry	369
#define	tEquation	370
#define	tGalerkin	371
#define	tdeRham	372
#define	tGlobalTerm	373
#define	tGlobalEquation	374
#define	tDiscreteGeometry	375
#define	tDt	376
#define	tDtDof	377
#define	tDtDt	378
#define	tDtDtDof	379
#define	tJacNL	380
#define	tNeverDt	381
#define	tDtNL	382
#define	tAtAnteriorTimeStep	383
#define	tIn	384
#define	tFull_Matrix	385
#define	tResolution	386
#define	tDefineSystem	387
#define	tNameOfFormulation	388
#define	tNameOfMesh	389
#define	tFrequency	390
#define	tSolver	391
#define	tOriginSystem	392
#define	tDestinationSystem	393
#define	tOperation	394
#define	tOperationEnd	395
#define	tSetTime	396
#define	tDTime	397
#define	tSetFrequency	398
#define	tFourierTransform	399
#define	tFourierTransformJ	400
#define	tLanczos	401
#define	tEigenSolve	402
#define	tPerturbation	403
#define	tUpdate	404
#define	tUpdateConstraint	405
#define	tBreak	406
#define	tTimeLoopTheta	407
#define	tTime0	408
#define	tTimeMax	409
#define	tTheta	410
#define	tTimeLoopNewmark	411
#define	tBeta	412
#define	tGamma	413
#define	tIterativeLoop	414
#define	tNbrMaxIteration	415
#define	tRelaxationFactor	416
#define	tIterativeTimeReduction	417
#define	tDivisionCoefficient	418
#define	tChangeOfState	419
#define	tChangeOfCoordinates	420
#define	tChangeOfCoordinates2	421
#define	tSystemCommand	422
#define	tGenerateFMMGroups	423
#define	tGenerateOnly	424
#define	tGenerateOnlyJac	425
#define	tSolveJac_AdaptRelax	426
#define	tSaveSolutionExtendedMH	427
#define	tSaveSolutionMHtoTime	428
#define	tInit_MovingBand2D	429
#define	tMesh_MovingBand2D	430
#define	tGenerate_MH_Moving	431
#define	tGenerate_MH_Moving_Separate	432
#define	tAdd_MH_Moving	433
#define	tGenerateGroup	434
#define	tGenerateJacGroup	435
#define	tSaveMesh	436
#define	tDeformeMesh	437
#define	tDummyFrequency	438
#define	tPostProcessing	439
#define	tNameOfSystem	440
#define	tPostOperation	441
#define	tNameOfPostProcessing	442
#define	tUsingPost	443
#define	tAppend	444
#define	tPlot	445
#define	tPrint	446
#define	tPrintGroup	447
#define	tEcho	448
#define	tWrite	449
#define	tAdapt	450
#define	tOnGlobal	451
#define	tOnRegion	452
#define	tOnElementsOf	453
#define	tOnGrid	454
#define	tOnSection	455
#define	tOnPoint	456
#define	tOnLine	457
#define	tOnPlane	458
#define	tOnBox	459
#define	tWithArgument	460
#define	tFile	461
#define	tDepth	462
#define	tDimension	463
#define	tTimeStep	464
#define	tHarmonicToTime	465
#define	tFormat	466
#define	tHeader	467
#define	tFooter	468
#define	tSkin	469
#define	tSmoothing	470
#define	tTarget	471
#define	tSort	472
#define	tIso	473
#define	tNoNewLine	474
#define	tDecomposeInSimplex	475
#define	tChangeOfValues	476
#define	tTimeLegend	477
#define	tFrequencyLegend	478
#define	tEigenvalueLegend	479
#define	tEvaluationPoints	480
#define	tStore	481
#define	tStr	482
#define	tDate	483
#define	tDEF	484
#define	tOR	485
#define	tAND	486
#define	tEQUAL	487
#define	tNOTEQUAL	488
#define	tAPPROXEQUAL	489
#define	tLESSOREQUAL	490
#define	tGREATEROREQUAL	491
#define	tLESSLESS	492
#define	tGREATERGREATER	493
#define	tCROSSPRODUCT	494
#define	UNARYPREC	495
#define	tSHOW	496

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.81 2005-07-16 21:40:26 geuzaine Exp $ */
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

#define MAX_RECUR_LOOPS 100
static double x0, x1, step;
static int ImbricatedLoop = 0, do_next;
static fpos_t yyposImbricatedLoopsTab[MAX_RECUR_LOOPS];
static int yylinenoImbricatedLoopsTab[MAX_RECUR_LOOPS];
static double LoopControlVariablesTab[MAX_RECUR_LOOPS][3];
static char *LoopControlVariablesNameTab[MAX_RECUR_LOOPS];

time_t date_info;

char   buff[128];

FILE* File;
double _value;


#line 221 "GetDP.y"
typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		2037
#define	YYFLAG		-32768
#define	YYNTBASE	265

#define YYTRANSLATE(x) ((unsigned)(x) <= 496 ? yytranslate[x] : 459)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   249,     2,   257,   258,   247,     2,     2,   252,
   253,   245,   243,   262,   244,   256,   246,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   237,
     2,   239,   231,   263,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   254,     2,   255,   251,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   260,     2,   261,   264,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
   107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
   117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
   127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
   137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
   197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
   207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
   217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
   227,   228,   229,   230,   232,   233,   234,   235,   236,   238,
   240,   241,   242,   248,   250,   259
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   152,   156,   161,   167,   168,   175,   181,
   183,   189,   191,   193,   194,   195,   214,   215,   216,   224,
   227,   229,   232,   234,   236,   238,   240,   241,   245,   250,
   252,   254,   258,   259,   263,   268,   270,   274,   278,   284,
   286,   290,   291,   295,   302,   303,   305,   310,   311,   314,
   318,   319,   322,   328,   335,   343,   345,   347,   348,   352,
   357,   362,   363,   366,   367,   371,   373,   377,   378,   381,
   383,   384,   385,   393,   397,   401,   408,   412,   416,   420,
   424,   428,   432,   436,   440,   444,   448,   452,   456,   460,
   464,   467,   470,   473,   477,   479,   483,   486,   488,   491,
   492,   498,   499,   507,   508,   520,   530,   535,   540,   541,
   549,   556,   559,   562,   565,   568,   572,   575,   579,   583,
   590,   594,   597,   601,   603,   607,   608,   612,   619,   620,
   625,   626,   629,   633,   638,   639,   644,   645,   648,   652,
   656,   661,   662,   667,   668,   671,   675,   679,   684,   685,
   690,   691,   694,   698,   702,   707,   708,   713,   714,   717,
   721,   725,   729,   733,   737,   741,   742,   744,   747,   751,
   753,   754,   757,   761,   766,   770,   775,   781,   782,   787,
   790,   791,   794,   798,   802,   806,   810,   814,   818,   826,
   830,   834,   838,   842,   846,   854,   862,   870,   871,   874,
   878,   880,   882,   883,   886,   890,   895,   899,   904,   909,
   914,   919,   920,   925,   926,   929,   933,   937,   942,   947,
   955,   959,   963,   967,   971,   972,   973,   974,   993,   994,
   999,  1000,  1003,  1007,  1011,  1015,  1017,  1021,  1022,  1026,
  1028,  1032,  1033,  1037,  1038,  1043,  1044,  1047,  1051,  1055,
  1059,  1060,  1065,  1066,  1069,  1073,  1077,  1081,  1086,  1087,
  1090,  1094,  1096,  1098,  1099,  1102,  1106,  1111,  1115,  1120,
  1125,  1126,  1131,  1134,  1135,  1138,  1142,  1146,  1150,  1154,
  1158,  1159,  1165,  1166,  1174,  1178,  1179,  1185,  1189,  1193,
  1197,  1201,  1205,  1206,  1210,  1211,  1214,  1217,  1220,  1225,
  1230,  1235,  1240,  1241,  1244,  1248,  1252,  1256,  1257,  1260,
  1264,  1268,  1272,  1276,  1277,  1280,  1281,  1282,  1292,  1296,
  1300,  1304,  1307,  1311,  1317,  1318,  1321,  1325,  1326,  1327,
  1337,  1338,  1340,  1342,  1344,  1346,  1348,  1350,  1352,  1357,
  1361,  1362,  1365,  1369,  1371,  1373,  1374,  1377,  1381,  1386,
  1391,  1392,  1398,  1400,  1401,  1406,  1409,  1410,  1413,  1417,
  1421,  1425,  1429,  1433,  1437,  1441,  1445,  1447,  1450,  1454,
  1455,  1459,  1461,  1465,  1466,  1470,  1471,  1474,  1478,  1482,
  1487,  1492,  1497,  1502,  1508,  1514,  1517,  1525,  1537,  1545,
  1559,  1571,  1581,  1589,  1597,  1605,  1615,  1625,  1635,  1647,
  1659,  1677,  1691,  1707,  1719,  1733,  1734,  1742,  1743,  1751,
  1759,  1771,  1777,  1783,  1793,  1803,  1813,  1819,  1825,  1837,
  1847,  1862,  1877,  1885,  1898,  1909,  1917,  1925,  1933,  1935,
  1937,  1939,  1940,  1943,  1947,  1951,  1954,  1955,  1958,  1962,
  1966,  1970,  1974,  1979,  1980,  1983,  1987,  1991,  1995,  1999,
  2003,  2008,  2009,  2012,  2016,  2020,  2024,  2028,  2033,  2034,
  2037,  2041,  2045,  2049,  2053,  2057,  2062,  2067,  2072,  2073,
  2078,  2079,  2082,  2086,  2090,  2094,  2098,  2102,  2106,  2107,
  2110,  2114,  2116,  2117,  2120,  2124,  2129,  2134,  2138,  2143,
  2144,  2149,  2152,  2155,  2156,  2159,  2163,  2168,  2169,  2175,
  2181,  2182,  2185,  2186,  2193,  2197,  2198,  2203,  2207,  2211,
  2212,  2215,  2219,  2221,  2223,  2224,  2227,  2231,  2235,  2239,
  2243,  2248,  2249,  2258,  2259,  2260,  2264,  2272,  2280,  2293,
  2302,  2314,  2315,  2326,  2328,  2335,  2339,  2346,  2348,  2350,
  2352,  2354,  2355,  2359,  2361,  2364,  2367,  2380,  2383,  2399,
  2404,  2417,  2435,  2458,  2471,  2472,  2475,  2479,  2484,  2489,
  2493,  2496,  2499,  2503,  2507,  2511,  2515,  2519,  2523,  2527,
  2531,  2535,  2539,  2543,  2547,  2553,  2556,  2559,  2563,  2573,
  2577,  2580,  2590,  2593,  2603,  2606,  2616,  2622,  2626,  2627,
  2630,  2637,  2646,  2655,  2666,  2668,  2673,  2675,  2681,  2686,
  2691,  2699,  2704,  2712,  2718,  2726,  2732,  2741,  2742,  2746,
  2752,  2758,  2760,  2762,  2764,  2766,  2768,  2770,  2772,  2774,
  2776,  2778,  2780,  2782,  2784,  2786,  2788,  2790,  2792,  2794,
  2796,  2798,  2800,  2802,  2806,  2809,  2812,  2816,  2820,  2824,
  2828,  2832,  2836,  2840,  2844,  2848,  2852,  2856,  2860,  2864,
  2868,  2873,  2878,  2883,  2888,  2893,  2898,  2903,  2908,  2913,
  2918,  2925,  2930,  2935,  2940,  2945,  2950,  2955,  2962,  2969,
  2976,  2982,  2985,  2987,  2989,  2991,  2993,  2995,  2997,  2999,
  3001,  3002,  3004,  3006,  3010,  3012,  3014,  3018,  3022,  3026,
  3032,  3036,  3041,  3046,  3053,  3062,  3071,  3077,  3083,  3085,
  3087,  3089,  3091,  3093,  3098,  3105,  3107
};

static const short yyrhs[] = {    -1,
   266,   267,     0,     0,     0,   267,   268,   269,     0,    62,
   260,   272,   261,     0,    99,   260,   295,   261,     0,    68,
   260,   330,   261,     0,    81,   260,   315,   261,     0,    83,
   260,   321,   261,     0,    95,   260,   337,   261,     0,   111,
   260,   360,   261,     0,   132,   260,   387,   261,     0,   185,
   260,   417,   261,     0,   187,   260,   429,   261,     0,   433,
     0,   447,     0,    22,   457,     0,   270,     0,    19,     7,
     0,    19,   192,     7,     0,    19,    21,     7,     0,    19,
    36,     7,     0,    19,    20,     7,     0,    19,    19,     7,
     0,    19,     5,     7,     0,    20,     7,     0,    21,     7,
     0,    21,    62,     7,     0,    21,    99,     7,     0,    21,
    68,     7,     0,    21,    81,     7,     0,    21,    83,     7,
     0,    21,    95,     7,     0,    21,   111,     7,     0,    21,
   132,     7,     0,    21,   185,     7,     0,    21,   187,     7,
     0,    21,     3,     7,     0,     0,   271,   437,     0,     0,
     0,   272,   273,   274,     0,   456,   230,   279,     7,     0,
     5,   294,   230,   279,     7,     0,     0,     5,   292,   230,
   275,   279,     7,     0,    63,   254,   290,   255,     7,     0,
   276,     0,   456,   243,   230,   279,     7,     0,   447,     0,
   446,     0,     0,     0,   456,   254,   450,   255,   230,    66,
   277,   254,   257,   287,   278,   262,   257,   287,   262,   450,
   255,     7,     0,     0,     0,   283,   254,   280,   284,   281,
   285,   255,     0,   257,   287,     0,   279,     0,   456,   293,
     0,    69,     0,     5,     0,   287,     0,    64,     0,     0,
   291,   286,   287,     0,   291,    65,   456,   293,     0,     5,
     0,   289,     0,   260,   288,   261,     0,     0,   288,   291,
   289,     0,   288,   291,   244,   289,     0,     3,     0,   263,
   453,   263,     0,     3,     8,   450,     0,     3,     8,     3,
     8,   450,     0,   456,     0,     5,   260,   261,     0,     0,
   290,   291,     5,     0,   290,   291,     5,   260,   450,   261,
     0,     0,   262,     0,   260,   257,   450,   261,     0,     0,
   260,   261,     0,   260,     3,   261,     0,     0,   295,   296,
     0,    67,   254,   297,   255,     7,     0,     5,   254,   255,
   230,   298,     7,     0,     5,   254,   282,   255,   230,   298,
     7,     0,   447,     0,   446,     0,     0,   297,   291,     5,
     0,    23,   254,   450,   255,     0,    99,   254,     5,   255,
     0,     0,   299,   302,     0,     0,   260,   301,   261,     0,
   298,     0,   301,   262,   298,     0,     0,   303,   304,     0,
   307,     0,     0,     0,   304,   231,   305,   304,     8,   306,
   304,     0,   304,   245,   304,     0,   304,   248,   304,     0,
    58,   254,   304,   262,   304,   255,     0,   304,   246,   304,
     0,   304,   243,   304,     0,   304,   244,   304,     0,   304,
   247,   304,     0,   304,   251,   304,     0,   304,   237,   304,
     0,   304,   239,   304,     0,   304,   238,   304,     0,   304,
   240,   304,     0,   304,   234,   304,     0,   304,   235,   304,
     0,   304,   236,   304,     0,   304,   233,   304,     0,   304,
   232,   304,     0,   244,   304,     0,   243,   304,     0,   249,
   304,     0,   252,   304,   253,     0,   451,     0,   449,   312,
   314,     0,     5,   386,     0,   386,     0,   386,   312,     0,
     0,   122,   308,   254,   302,   255,     0,     0,   129,   309,
   254,   302,   262,     3,   255,     0,     0,    60,   254,     5,
   254,   310,   302,   255,   255,   260,   450,   261,     0,    61,
   254,     5,   255,   260,   450,   262,   450,   261,     0,    55,
   254,   386,   255,     0,    57,   254,   386,   255,     0,     0,
    56,   311,   254,   302,   262,   282,   255,     0,   237,     5,
   239,   254,   302,   255,     0,   258,     5,     0,   258,   210,
     0,   258,   143,     0,   258,     3,     0,   307,   257,     3,
     0,   257,     3,     0,   258,   258,   456,     0,   307,   259,
   450,     0,    59,   254,     5,   262,     3,   255,     0,   254,
   256,   255,     0,   254,   255,     0,   254,   313,   255,     0,
   304,     0,   313,   262,   304,     0,     0,   260,   453,   261,
     0,   260,    69,   254,   282,   255,   261,     0,     0,   315,
   260,   316,   261,     0,     0,   316,   317,     0,    96,     5,
     7,     0,    82,   260,   318,   261,     0,     0,   318,   260,
   319,   261,     0,     0,   319,   320,     0,    69,   282,     7,
     0,    69,    64,     7,     0,    81,     5,   314,     7,     0,
     0,   321,   260,   322,   261,     0,     0,   322,   323,     0,
    96,     5,     7,     0,    88,   298,     7,     0,    82,   260,
   324,   261,     0,     0,   324,   260,   325,   261,     0,     0,
   325,   326,     0,    86,     5,     7,     0,    87,     5,     7,
     0,    82,   260,   327,   261,     0,     0,   327,   260,   328,
   261,     0,     0,   328,   329,     0,    89,     5,     7,     0,
    90,   450,     7,     0,    91,   450,     7,     0,    92,   450,
     7,     0,    93,   450,     7,     0,    94,   450,     7,     0,
     0,   446,     0,   330,   331,     0,   260,   332,   261,     0,
   447,     0,     0,   332,   333,     0,    96,   456,     7,     0,
    96,   456,   292,     7,     0,    86,     5,     7,     0,    82,
   260,   334,   261,     0,    82,     5,   260,   334,   261,     0,
     0,   334,   260,   335,   261,     0,   334,   446,     0,     0,
   335,   336,     0,    86,     5,     7,     0,    69,   282,     7,
     0,    70,   282,     7,     0,    76,   298,     7,     0,    75,
   298,     7,     0,    80,     5,     7,     0,    77,   260,   451,
   291,   451,   261,     7,     0,    71,   282,     7,     0,    72,
   282,     7,     0,    99,   298,     7,     0,    74,   298,     7,
     0,    73,   298,     7,     0,    99,   254,   298,   262,   298,
   255,     7,     0,    74,   254,   298,   262,   298,   255,     7,
     0,    73,   254,   298,   262,   298,   255,     7,     0,     0,
   337,   338,     0,   260,   339,   261,     0,   447,     0,   446,
     0,     0,   339,   340,     0,    96,   456,     7,     0,    96,
     5,   292,     7,     0,    86,     5,     7,     0,    97,   260,
   341,   261,     0,   105,   260,   347,   261,     0,   107,   260,
   354,   261,     0,    68,   260,   357,   261,     0,     0,   341,
   260,   342,   261,     0,     0,   342,   343,     0,    96,     5,
     7,     0,    98,     5,     7,     0,    98,     5,   292,     7,
     0,    99,     5,   344,     7,     0,   100,   260,     5,   291,
     5,   261,     7,     0,   101,   300,     7,     0,   102,   300,
     7,     0,   103,   282,     7,     0,   104,   282,     7,     0,
     0,     0,     0,   260,   112,     5,     7,   111,     5,   292,
     7,   345,    62,   282,     7,   346,   132,     5,   293,     7,
   261,     0,     0,   347,   260,   348,   261,     0,     0,   348,
   349,     0,    96,     5,     7,     0,   106,   350,     7,     0,
    98,   352,     7,     0,     5,     0,   260,   351,   261,     0,
     0,   351,   291,     5,     0,     5,     0,   260,   353,   261,
     0,     0,   353,   291,     5,     0,     0,   354,   260,   355,
   261,     0,     0,   355,   356,     0,    96,   456,     7,     0,
    86,     5,     7,     0,    98,     5,     7,     0,     0,   357,
   260,   358,   261,     0,     0,   358,   359,     0,    98,     5,
     7,     0,   108,   283,     7,     0,   109,   286,     7,     0,
   110,   456,   293,     7,     0,     0,   360,   361,     0,   260,
   362,   261,     0,   447,     0,   446,     0,     0,   362,   363,
     0,    96,   456,     7,     0,    96,     5,   292,     7,     0,
    86,     5,     7,     0,   112,   260,   364,   261,     0,   116,
   260,   371,   261,     0,     0,   364,   260,   365,   261,     0,
   364,   446,     0,     0,   365,   366,     0,    96,   456,     7,
     0,    86,   107,     7,     0,    86,   117,     7,     0,    86,
     5,     7,     0,   184,   452,     7,     0,     0,   113,   456,
   367,   370,     7,     0,     0,   113,     5,   260,   261,   368,
   370,     7,     0,   114,     3,     7,     0,     0,   254,   369,
   302,   255,     7,     0,   130,   282,     7,     0,    83,     5,
     7,     0,    84,     5,     7,     0,    81,     5,     7,     0,
   115,     3,     7,     0,     0,   254,   456,   255,     0,     0,
   371,   372,     0,   371,   447,     0,   371,   446,     0,   117,
   260,   377,   261,     0,   118,   260,   377,   261,     0,   119,
   260,   381,   261,     0,   120,   260,   373,   261,     0,     0,
   373,   374,     0,    86,     5,     7,     0,   110,     5,     7,
     0,   260,   375,   261,     0,     0,   375,   376,     0,    78,
   386,     7,     0,    79,   386,     7,     0,   116,   386,     7,
     0,   130,   282,     7,     0,     0,   377,   378,     0,     0,
     0,   385,   254,   379,   302,   380,   262,   302,   255,     7,
     0,   130,   282,     7,     0,    81,     5,     7,     0,    83,
     5,     7,     0,   131,     7,     0,    84,     5,     7,     0,
    85,   254,     3,   255,     7,     0,     0,   381,   382,     0,
   130,   282,     7,     0,     0,     0,   385,   254,   383,   302,
   384,   262,   386,   255,     7,     0,     0,   122,     0,   123,
     0,   124,     0,   125,     0,   126,     0,   127,     0,   128,
     0,   260,     5,   456,   261,     0,   260,   456,   261,     0,
     0,   387,   388,     0,   260,   389,   261,     0,   447,     0,
   446,     0,     0,   389,   390,     0,    96,   456,     7,     0,
    96,     5,   292,     7,     0,   133,   260,   392,   261,     0,
     0,   140,   391,   260,   399,   261,     0,   446,     0,     0,
   392,   260,   393,   261,     0,   392,   446,     0,     0,   393,
   394,     0,    96,   456,     7,     0,    86,     5,     7,     0,
   134,   395,     7,     0,   135,   457,     7,     0,   138,   397,
     7,     0,   139,     5,     7,     0,   136,   452,     7,     0,
   137,   457,     7,     0,   446,     0,   456,   293,     0,   260,
   396,   261,     0,     0,   396,   291,   456,     0,   456,     0,
   260,   398,   261,     0,     0,   398,   291,   456,     0,     0,
   399,   400,     0,     5,   456,     7,     0,   142,   298,     7,
     0,   153,   260,   406,   261,     0,   157,   260,   408,   261,
     0,   160,   260,   410,   261,     0,   163,   260,   412,   261,
     0,     5,   254,   456,   255,     7,     0,   142,   254,   298,
   255,     7,     0,   152,     7,     0,    15,   254,   298,   255,
   260,   399,   261,     0,    15,   254,   298,   255,   260,   399,
   261,    16,   260,   399,   261,     0,   144,   254,     5,   262,
   298,   255,     7,     0,   169,   254,     5,   262,   298,   262,
   298,   262,   298,   262,   298,   255,     7,     0,   169,   254,
     5,   262,   298,   262,   298,   262,   298,   255,     7,     0,
   169,   254,     5,   262,   298,   262,   298,   255,     7,     0,
   170,   254,     5,   262,   452,   255,     7,     0,   171,   254,
     5,   262,   452,   255,     7,     0,   150,   254,     5,   262,
   298,   255,     7,     0,   151,   254,     5,   262,   282,   262,
     5,   255,     7,     0,   145,   254,     5,   262,     5,   262,
   452,   255,     7,     0,   146,   254,     5,   262,     5,   262,
   450,   255,     7,     0,   147,   254,     5,   262,   450,   262,
   452,   262,   450,   255,     7,     0,   148,   254,     5,   262,
   450,   262,   450,   262,   450,   255,     7,     0,   149,   254,
     5,   262,     5,   262,     5,   262,   450,   262,   452,   262,
   450,   262,   450,   255,     7,     0,   153,   254,   450,   262,
   450,   262,   298,   262,   298,   255,   260,   399,   261,     0,
   157,   254,   450,   262,   450,   262,   298,   262,   450,   262,
   450,   255,   260,   399,   261,     0,   160,   254,   450,   262,
   450,   262,   298,   255,   260,   399,   261,     0,   160,   254,
   450,   262,   450,   262,   298,   262,   450,   255,   260,   399,
   261,     0,     0,   192,   401,   254,   403,   404,   255,     7,
     0,     0,   195,   402,   254,   403,   404,   255,     7,     0,
   166,   254,   282,   262,   298,   255,     7,     0,   166,   254,
   282,   262,   298,   262,   450,   262,   298,   255,     7,     0,
   187,   254,   456,   255,     7,     0,   168,   254,   457,   255,
     7,     0,   172,   254,     5,   262,   452,   262,   450,   255,
     7,     0,   173,   254,     5,   262,   450,   262,   457,   255,
     7,     0,   174,   254,     5,   262,   452,   262,   457,   255,
     7,     0,   175,   260,   456,   261,     7,     0,   176,   260,
   456,   261,     7,     0,   182,   260,   456,   262,   282,   262,
   457,   262,   298,   261,     7,     0,   182,   260,   456,   262,
   282,   262,   457,   261,     7,     0,   177,   254,     5,   262,
     5,   262,   450,   262,   450,   255,   260,   399,   261,     7,
     0,   178,   254,     5,   262,     5,   262,   450,   262,   450,
   255,   260,   399,   261,     7,     0,   179,   254,     5,   262,
   450,   255,     7,     0,   183,   260,     5,   262,     5,   262,
   135,   457,   262,     4,   261,     7,     0,   183,   260,     5,
   262,     5,   262,   135,   457,   261,     7,     0,   183,   260,
     5,   262,     5,   261,     7,     0,   180,   254,     5,   262,
     5,   255,     7,     0,   181,   254,     5,   262,     5,   255,
     7,     0,   446,     0,   300,     0,     5,     0,     0,   404,
   405,     0,   262,   207,   457,     0,   262,   210,   452,     0,
   262,   452,     0,     0,   406,   407,     0,   154,   450,     7,
     0,   155,   450,     7,     0,   143,   298,     7,     0,   156,
   298,     7,     0,   140,   260,   399,   261,     0,     0,   408,
   409,     0,   154,   450,     7,     0,   155,   450,     7,     0,
   143,   298,     7,     0,   158,   450,     7,     0,   159,   450,
     7,     0,   140,   260,   399,   261,     0,     0,   410,   411,
     0,   161,   450,     7,     0,    88,   450,     7,     0,   162,
   298,     7,     0,    18,   450,     7,     0,   140,   260,   399,
   261,     0,     0,   412,   413,     0,   161,   450,     7,     0,
   164,   450,     7,     0,    88,   450,     7,     0,    18,   450,
     7,     0,   133,     5,     7,     0,   165,   260,   414,   261,
     0,   140,   260,   399,   261,     0,   141,   260,   399,   261,
     0,     0,   414,   260,   415,   261,     0,     0,   415,   416,
     0,    86,     5,     7,     0,   112,     5,     7,     0,   130,
   282,     7,     0,    88,   450,     7,     0,    99,   298,     7,
     0,    18,     5,     7,     0,     0,   417,   418,     0,   260,
   419,   261,     0,   447,     0,     0,   419,   420,     0,    96,
   456,     7,     0,    96,     5,   292,     7,     0,   134,   456,
   293,     7,     0,   186,     5,     7,     0,   112,   260,   421,
   261,     0,     0,   421,   260,   422,   261,     0,   421,   447,
     0,   421,   446,     0,     0,   422,   423,     0,    96,   456,
     7,     0,    75,   260,   424,   261,     0,     0,   424,   117,
   260,   425,   261,     0,   424,     5,   260,   425,   261,     0,
     0,   425,   426,     0,     0,   385,   254,   427,   302,   255,
     7,     0,    86,     5,     7,     0,     0,   130,   428,   282,
     7,     0,    81,     5,     7,     0,    83,     5,     7,     0,
     0,   429,   430,     0,   260,   431,   261,     0,   447,     0,
   446,     0,     0,   431,   432,     0,    96,   456,     7,     0,
   188,     5,     7,     0,   212,     5,     7,     0,   190,   457,
     7,     0,   140,   260,   435,   261,     0,     0,   187,   456,
   189,   456,   434,   260,   435,   261,     0,     0,     0,   435,
   436,   437,     0,   191,   254,   439,   442,   443,   255,     7,
     0,   192,   254,   439,   442,   443,   255,     7,     0,   192,
   254,   439,   442,   443,   255,   244,   239,   258,   258,   456,
     7,     0,   192,   254,     6,   262,   450,   443,   255,     7,
     0,   192,   254,     6,   262,   228,   254,   457,   255,   443,
   255,     7,     0,     0,   193,   254,   282,   438,   262,   130,
   282,   443,   255,     7,     0,   446,     0,   194,   254,     6,
   443,   255,     7,     0,   456,   441,   262,     0,   456,   441,
   440,     5,   441,   262,     0,   245,     0,   246,     0,   243,
     0,   244,     0,     0,   254,   282,   255,     0,   197,     0,
   198,   282,     0,   199,   282,     0,   201,   260,   260,   453,
   261,   260,   453,   261,   260,   453,   261,   261,     0,   200,
   282,     0,   200,   260,   298,   262,   298,   262,   298,   261,
   260,   452,   262,   452,   262,   452,   261,     0,   202,   260,
   453,   261,     0,   203,   260,   260,   453,   261,   260,   453,
   261,   261,   260,   450,   261,     0,   204,   260,   260,   453,
   261,   260,   453,   261,   260,   453,   261,   261,   260,   450,
   262,   450,   261,     0,   205,   260,   260,   453,   261,   260,
   453,   261,   260,   453,   261,   260,   453,   261,   261,   260,
   450,   262,   450,   262,   450,   261,     0,   198,   282,   206,
     5,   260,   450,   262,   450,   261,   260,   450,   261,     0,
     0,   443,   444,     0,   262,   207,   457,     0,   262,   207,
   239,   457,     0,   262,   207,   242,   457,     0,   262,   208,
   450,     0,   262,   215,     0,   262,   216,     0,   262,   211,
   450,     0,   262,   212,     5,     0,   262,   213,   445,     0,
   262,   214,   445,     0,   262,   212,   445,     0,   262,   209,
   450,     0,   262,   210,   452,     0,   262,   196,     5,     0,
   262,   218,     5,     0,   262,   217,   450,     0,   262,    75,
   452,     0,   262,   219,   450,     0,   262,   219,   260,   453,
   261,     0,   262,   220,     0,   262,   221,     0,   262,   136,
   452,     0,   262,   166,   260,   298,   262,   298,   262,   298,
   261,     0,   262,   222,   300,     0,   262,   223,     0,   262,
   223,   260,   450,   262,   450,   262,   450,   261,     0,   262,
   224,     0,   262,   224,   260,   450,   262,   450,   262,   450,
   261,     0,   262,   225,     0,   262,   225,   260,   450,   262,
   450,   262,   450,   261,     0,   262,   226,   260,   453,   261,
     0,   262,   227,     3,     0,     0,   445,     6,     0,    13,
   252,   450,     8,   450,   253,     0,    13,   252,   450,     8,
   450,     8,   450,   253,     0,    13,     5,   130,   260,   450,
     8,   450,   261,     0,    13,     5,   130,   260,   450,     8,
   450,     8,   450,   261,     0,    14,     0,    15,   252,   450,
   253,     0,    17,     0,    29,   254,   448,   255,     7,     0,
   456,   230,   452,     7,     0,   456,   230,     6,     7,     0,
   456,   230,   228,   254,   457,   255,     7,     0,   456,   230,
   458,     7,     0,   456,   230,    28,   254,   457,   255,     7,
     0,    11,   252,     6,   253,     7,     0,    11,   252,     6,
   262,   453,   253,     7,     0,    12,   252,   456,   253,     7,
     0,    12,   252,   456,   253,   254,   450,   255,     7,     0,
     0,   448,   291,     5,     0,   448,   291,     5,   230,   450,
     0,   448,   291,     5,   230,     6,     0,    35,     0,    36,
     0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
     0,    42,     0,    43,     0,    44,     0,    45,     0,    46,
     0,    47,     0,    48,     0,    49,     0,    50,     0,    51,
     0,    52,     0,    53,     0,    54,     0,   456,     0,   451,
     0,   252,   450,   253,     0,   244,   450,     0,   249,   450,
     0,   450,   244,   450,     0,   450,   243,   450,     0,   450,
   245,   450,     0,   450,   246,   450,     0,   450,   247,   450,
     0,   450,   251,   450,     0,   450,   237,   450,     0,   450,
   239,   450,     0,   450,   238,   450,     0,   450,   240,   450,
     0,   450,   234,   450,     0,   450,   235,   450,     0,   450,
   233,   450,     0,   450,   232,   450,     0,    35,   254,   450,
   255,     0,    36,   254,   450,   255,     0,    37,   254,   450,
   255,     0,    38,   254,   450,   255,     0,    39,   254,   450,
   255,     0,    40,   254,   450,   255,     0,    41,   254,   450,
   255,     0,    42,   254,   450,   255,     0,    43,   254,   450,
   255,     0,    44,   254,   450,   255,     0,    45,   254,   450,
   262,   450,   255,     0,    46,   254,   450,   255,     0,    47,
   254,   450,   255,     0,    48,   254,   450,   255,     0,    49,
   254,   450,   255,     0,    50,   254,   450,   255,     0,    51,
   254,   450,   255,     0,    52,   254,   450,   262,   450,   255,
     0,    53,   254,   450,   262,   450,   255,     0,    54,   254,
   450,   262,   450,   255,     0,   450,   231,   450,     8,   450,
     0,   450,   257,     0,     4,     0,     3,     0,    30,     0,
    31,     0,    32,     0,    33,     0,    34,     0,   456,     0,
     0,   450,     0,   454,     0,   260,   453,   261,     0,   450,
     0,   454,     0,   453,   262,   450,     0,   453,   262,   454,
     0,   450,     8,   450,     0,   450,     8,   450,     8,   450,
     0,     5,   260,   261,     0,     5,   260,   453,   261,     0,
    24,   254,     5,   255,     0,    25,   254,     5,   262,     5,
   255,     0,    26,   254,   450,   262,   450,   262,   450,   255,
     0,    27,   254,   450,   262,   450,   262,   450,   255,     0,
     5,   264,   260,   450,   261,     0,   455,   264,   260,   450,
   261,     0,     5,     0,   455,     0,     6,     0,     5,     0,
   458,     0,    10,   252,   457,   253,     0,    10,   252,   457,
   262,   453,   253,     0,   229,     0,     9,   254,   457,   262,
   457,   255,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   374,   409,   448,   451,   454,   457,   460,   461,   462,   463,
   464,   465,   466,   467,   468,   470,   472,   474,   479,   488,
   491,   493,   495,   497,   499,   501,   503,   505,   507,   509,
   511,   513,   515,   517,   519,   521,   523,   525,   527,   530,
   538,   552,   555,   556,   559,   563,   568,   570,   573,   575,
   577,   580,   582,   585,   597,   604,   612,   620,   631,   640,
   649,   656,   691,   696,   707,   710,   724,   729,   732,   781,
   794,   820,   825,   840,   858,   879,   885,   897,   906,   920,
   954,   974,   978,   988,  1005,  1005,  1008,  1014,  1017,  1020,
  1033,  1036,  1039,  1043,  1063,  1107,  1109,  1113,  1116,  1133,
  1142,  1149,  1152,  1157,  1163,  1167,  1172,  1177,  1183,  1190,
  1194,  1207,  1222,  1236,  1242,  1248,  1254,  1260,  1266,  1272,
  1278,  1284,  1290,  1296,  1302,  1308,  1314,  1320,  1326,  1332,
  1339,  1345,  1347,  1356,  1360,  1366,  1440,  1474,  1483,  1495,
  1497,  1509,  1511,  1523,  1525,  1539,  1551,  1557,  1563,  1565,
  1594,  1620,  1633,  1639,  1646,  1652,  1659,  1666,  1674,  1681,
  1697,  1700,  1701,  1704,  1707,  1710,  1715,  1718,  1732,  1739,
  1744,  1749,  1753,  1760,  1765,  1770,  1775,  1781,  1785,  1790,
  1793,  1829,  1837,  1842,  1851,  1855,  1864,  1867,  1872,  1877,
  1882,  1890,  1894,  1906,  1916,  1921,  1926,  1931,  1943,  1947,
  1997,  2000,  2003,  2006,  2009,  2018,  2025,  2026,  2029,  2051,
  2054,  2064,  2068,  2076,  2083,  2092,  2095,  2115,  2132,  2152,
  2159,  2169,  2173,  2185,  2210,  2235,  2240,  2248,  2256,  2265,
  2283,  2292,  2300,  2308,  2318,  2328,  2338,  2356,  2364,  2367,
  2390,  2392,  2396,  2405,  2409,  2417,  2424,  2433,  2436,  2439,
  2442,  2447,  2465,  2512,  2529,  2533,  2538,  2543,  2548,  2562,
  2582,  2587,  2592,  2616,  2671,  2675,  2679,  2688,  2752,  2758,
  2763,  2768,  2772,  2779,  2782,  2787,  2805,  2810,  2814,  2831,
  2845,  2850,  2854,  2867,  2873,  2880,  2887,  2891,  2898,  2908,
  2919,  2936,  3008,  3020,  3024,  3059,  3062,  3065,  3109,  3116,
  3119,  3141,  3143,  3147,  3155,  3159,  3167,  3174,  3184,  3186,
  3191,  3206,  3220,  3224,  3243,  3247,  3252,  3256,  3259,  3270,
  3276,  3289,  3316,  3357,  3383,  3388,  3394,  3705,  3710,  3719,
  3728,  3737,  3742,  3745,  3783,  3800,  3824,  3829,  3836,  3841,
  3844,  3847,  3856,  3864,  3867,  3879,  3889,  3901,  3910,  3913,
  3917,  3919,  3921,  3927,  3948,  3952,  3963,  4041,  4087,  4111,
  4120,  4129,  4134,  4143,  4152,  4169,  4173,  4207,  4216,  4270,
  4286,  4289,  4290,  4291,  4292,  4293,  4294,  4295,  4299,  4322,
  4344,  4351,  4354,  4375,  4377,  4381,  4389,  4393,  4402,  4409,
  4412,  4414,  4417,  4421,  4437,  4452,  4460,  4476,  4480,  4485,
  4494,  4497,  4502,  4507,  4512,  4517,  4522,  4526,  4565,  4570,
  4575,  4585,  4597,  4601,  4606,  4617,  4626,  4635,  4661,  4668,
  4674,  4680,  4686,  4694,  4716,  4723,  4729,  4740,  4751,  4764,
  4779,  4794,  4809,  4829,  4850,  4862,  4882,  4899,  4918,  4939,
  4953,  4987,  5000,  5014,  5027,  5040,  5047,  5049,  5056,  5058,
  5069,  5081,  5091,  5099,  5112,  5125,  5139,  5149,  5159,  5173,
  5187,  5205,  5224,  5235,  5250,  5265,  5280,  5295,  5310,  5320,
  5326,  5336,  5342,  5345,  5349,  5359,  5372,  5384,  5388,  5394,
  5398,  5402,  5407,  5416,  5429,  5433,  5439,  5443,  5447,  5451,
  5456,  5465,  5477,  5480,  5486,  5490,  5494,  5498,  5507,  5522,
  5525,  5531,  5535,  5539,  5544,  5554,  5560,  5566,  5575,  5579,
  5583,  5597,  5600,  5612,  5641,  5644,  5647,  5655,  5671,  5679,
  5682,  5703,  5706,  5717,  5720,  5728,  5736,  5782,  5787,  5792,
  5796,  5799,  5801,  5806,  5813,  5817,  5821,  5826,  5832,  5838,
  5851,  5862,  5865,  5873,  5901,  5912,  5912,  5918,  5927,  5943,
  5951,  5954,  5959,  5961,  5964,  5973,  5976,  5984,  5996,  6007,
  6012,  6017,  6035,  6044,  6048,  6053,  6063,  6069,  6075,  6081,
  6088,  6096,  6102,  6107,  6112,  6119,  6133,  6155,  6158,  6159,
  6160,  6163,  6167,  6171,  6179,  6186,  6193,  6217,  6224,  6236,
  6249,  6269,  6295,  6328,  6348,  6378,  6381,  6389,  6396,  6403,
  6407,  6411,  6415,  6419,  6429,  6434,  6439,  6459,  6466,  6475,
  6484,  6493,  6500,  6508,  6512,  6521,  6525,  6529,  6537,  6543,
  6548,  6557,  6565,  6574,  6582,  6591,  6599,  6608,  6617,  6624,
  6672,  6689,  6705,  6724,  6744,  6775,  6779,  6791,  6795,  6810,
  6816,  6822,  6828,  6839,  6844,  6856,  6866,  6882,  6885,  6891,
  6897,  6908,  6910,  6911,  6912,  6913,  6914,  6915,  6916,  6917,
  6918,  6919,  6920,  6921,  6922,  6923,  6924,  6925,  6926,  6927,
  6928,  6929,  6932,  6934,  6935,  6936,  6937,  6938,  6939,  6940,
  6941,  6942,  6943,  6944,  6945,  6946,  6947,  6948,  6949,  6950,
  6951,  6952,  6953,  6954,  6955,  6956,  6957,  6958,  6959,  6960,
  6961,  6962,  6963,  6964,  6965,  6966,  6967,  6968,  6969,  6970,
  6971,  6972,  6975,  6978,  6979,  6980,  6981,  6982,  6983,  7001,
  7017,  7022,  7028,  7031,  7036,  7044,  7047,  7050,  7060,  7068,
  7079,  7095,  7117,  7132,  7170,  7178,  7188,  7198,  7208,  7212,
  7217,  7222,  7237,  7242,  7247,  7266,  7283
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tSprintf","tPrintf","tRead","tFor",
"tEndFor","tIf","tElse","tEndIf","tFlag","tHelp","tCpu","tCheck","tInclude",
"tConstant","tList","tListAlt","tLinSpace","tLogSpace","tListFromFile","tDefineConstant",
"tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin",
"tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor",
"tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct",
"tDofValue","tMHTransform","tMHJacNL","tGroup","tDefineGroup","tAll","tInSupport",
"tMovingBand2D","tDefineFunction","tConstraint","tRegion","tSubRegion","tRegionRef",
"tSubRegionRef","tFilter","tCoefficient","tValue","tTimeFunction","tBranch",
"tNode","tLoop","tNameOfResolution","tJacobian","tCase","tIntegration","tFMMIntegration",
"tMatrix","tType","tSubType","tCriterion","tGeoElement","tNumberOfPoints","tMaxNumberOfPoints",
"tNumberOfDivisions","tMaxNumberOfDivisions","tStoppingCriterion","tFunctionSpace",
"tName","tBasisFunction","tNameOfCoef","tFunction","tdFunction","tSubFunction",
"tSubdFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity",
"tEntityType","tEntitySubType","tNameOfConstraint","tFormulation","tQuantity",
"tNameOfSpace","tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham",
"tGlobalTerm","tGlobalEquation","tDiscreteGeometry","tDt","tDtDof","tDtDt","tDtDtDof",
"tJacNL","tNeverDt","tDtNL","tAtAnteriorTimeStep","tIn","tFull_Matrix","tResolution",
"tDefineSystem","tNameOfFormulation","tNameOfMesh","tFrequency","tSolver","tOriginSystem",
"tDestinationSystem","tOperation","tOperationEnd","tSetTime","tDTime","tSetFrequency",
"tFourierTransform","tFourierTransformJ","tLanczos","tEigenSolve","tPerturbation",
"tUpdate","tUpdateConstraint","tBreak","tTimeLoopTheta","tTime0","tTimeMax",
"tTheta","tTimeLoopNewmark","tBeta","tGamma","tIterativeLoop","tNbrMaxIteration",
"tRelaxationFactor","tIterativeTimeReduction","tDivisionCoefficient","tChangeOfState",
"tChangeOfCoordinates","tChangeOfCoordinates2","tSystemCommand","tGenerateFMMGroups",
"tGenerateOnly","tGenerateOnlyJac","tSolveJac_AdaptRelax","tSaveSolutionExtendedMH",
"tSaveSolutionMHtoTime","tInit_MovingBand2D","tMesh_MovingBand2D","tGenerate_MH_Moving",
"tGenerate_MH_Moving_Separate","tAdd_MH_Moving","tGenerateGroup","tGenerateJacGroup",
"tSaveMesh","tDeformeMesh","tDummyFrequency","tPostProcessing","tNameOfSystem",
"tPostOperation","tNameOfPostProcessing","tUsingPost","tAppend","tPlot","tPrint",
"tPrintGroup","tEcho","tWrite","tAdapt","tOnGlobal","tOnRegion","tOnElementsOf",
"tOnGrid","tOnSection","tOnPoint","tOnLine","tOnPlane","tOnBox","tWithArgument",
"tFile","tDepth","tDimension","tTimeStep","tHarmonicToTime","tFormat","tHeader",
"tFooter","tSkin","tSmoothing","tTarget","tSort","tIso","tNoNewLine","tDecomposeInSimplex",
"tChangeOfValues","tTimeLegend","tFrequencyLegend","tEigenvalueLegend","tEvaluationPoints",
"tStore","tStr","tDate","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL",
"'<'","tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'",
"'-'","'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'",
"'['","']'","'.'","'#'","'$'","tSHOW","'{'","'}'","','","'@'","'~'","Stats",
"@1","ProblemDefinitions","@2","ProblemDefinition","Interactive","@3","Groups",
"@4","Group","@5","MovingBand2DGroup","@6","@7","ReducedGroupRHS","@8","@9",
"GroupRHS","FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup",
"ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension",
"MultipleIndex","Index","Functions","Function","DefineFunctions","Expression",
"@10","ListOfExpression","RecursiveListOfExpression","WholeQuantityExpression",
"@11","WholeQuantity","@12","@13","WholeQuantity_Single","@14","@15","@16","@17",
"ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction","JacobianMethods",
"JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase","JacobianCaseTerm",
"IntegrationMethods","IntegrationMethod","IntegrationMethodTerm","IntegrationCases",
"IntegrationCase","IntegrationCaseTerm","QuadratureCases","QuadratureCase","QuadratureCaseTerm",
"Constraints","BracedConstraint","Constraint","ConstraintTerm","ConstraintCases",
"ConstraintCase","ConstraintCaseTerm","FunctionSpaces","BracedFunctionSpace",
"FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction","BasisFunctionTerm",
"OptionalParametersForBasisFunction","@18","@19","SubSpaces","SubSpace","SubSpaceTerm",
"ListOfBasisFunction","RecursiveListOfBasisFunction","ListOfBasisFunctionCoef",
"RecursiveListOfBasisFunctionCoef","GlobalQuantities","GlobalQuantity","GlobalQuantityTerm",
"ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm","Formulations","BracedFormulation",
"Formulation","FormulationTerm","DefineQuantities","DefineQuantity","DefineQuantityTerm",
"@20","@21","@22","IndexInFunctionSpace","Equations","EquationTerm","GlobalEquation",
"GlobalEquationTerm","GlobalEquationTermTerm","GlobalEquationTermTermTerm","LocalTerm",
"LocalTermTerm","@23","@24","GlobalTerm","GlobalTermTerm","@25","@26","TermOperator",
"Quantity_Def","Resolutions","BracedResolution","Resolution","ResolutionTerm",
"@27","DefineSystems","DefineSystem","DefineSystemTerm","ListOfFormulation",
"RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem","Operation",
"OperationTerm","@28","@29","PrintOperation","PrintOperationOptions","PrintOperationOption",
"TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark","TimeLoopNewmarkTerm",
"IterativeLoop","IterativeLoopTerm","IterativeTimeReduction","IterativeTimeReductionTerm",
"ChangeOfStates","ChangeOfState","ChangeOfStateTerm","PostProcessings","BracedPostProcessing",
"PostProcessing","PostProcessingTerm","PostQuantities","PostQuantity","PostQuantityTerm",
"SubPostQuantities","SubPostQuantity","SubPostQuantityTerm","@30","@31","PostOperations",
"BracedPostOperation","PostOperation","PostOperationTerm","SeparatePostOperation",
"@32","PostSubOperations","@33","PostSubOperation","@34","PostQuantitiesToPrint",
"Combination","PostQuantitySupport","PrintSubType","PrintOptions","PrintOption",
"ParsedStrings","Loop","Affectation","DefineConstants","NameForFunction","FExpr",
"OneFExpr","ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","StringIndex","String__Index",
"CharExpr","StrCat", NULL
};
#endif

static const short yyr1[] = {     0,
   266,   265,   267,   268,   267,   269,   269,   269,   269,   269,
   269,   269,   269,   269,   269,   269,   269,   269,   269,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   271,
   270,   272,   273,   272,   274,   274,   275,   274,   274,   274,
   274,   274,   274,   277,   278,   276,   280,   281,   279,   279,
   282,   282,   283,   283,   284,   284,   285,   285,   285,   286,
   287,   287,   288,   288,   288,   289,   289,   289,   289,   289,
   289,   290,   290,   290,   291,   291,   292,   293,   293,   294,
   295,   295,   296,   296,   296,   296,   296,   297,   297,   298,
   298,   299,   298,   300,   300,   301,   301,   303,   302,   304,
   305,   306,   304,   304,   304,   304,   304,   304,   304,   304,
   304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
   304,   304,   304,   307,   307,   307,   307,   307,   307,   308,
   307,   309,   307,   310,   307,   307,   307,   307,   311,   307,
   307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
   312,   312,   312,   313,   313,   314,   314,   314,   315,   315,
   316,   316,   317,   317,   318,   318,   319,   319,   320,   320,
   320,   321,   321,   322,   322,   323,   323,   323,   324,   324,
   325,   325,   326,   326,   326,   327,   327,   328,   328,   329,
   329,   329,   329,   329,   329,   330,   330,   330,   331,   331,
   332,   332,   333,   333,   333,   333,   333,   334,   334,   334,
   335,   335,   336,   336,   336,   336,   336,   336,   336,   336,
   336,   336,   336,   336,   336,   336,   336,   337,   337,   338,
   338,   338,   339,   339,   340,   340,   340,   340,   340,   340,
   340,   341,   341,   342,   342,   343,   343,   343,   343,   343,
   343,   343,   343,   343,   344,   345,   346,   344,   347,   347,
   348,   348,   349,   349,   349,   350,   350,   351,   351,   352,
   352,   353,   353,   354,   354,   355,   355,   356,   356,   356,
   357,   357,   358,   358,   359,   359,   359,   359,   360,   360,
   361,   361,   361,   362,   362,   363,   363,   363,   363,   363,
   364,   364,   364,   365,   365,   366,   366,   366,   366,   366,
   367,   366,   368,   366,   366,   369,   366,   366,   366,   366,
   366,   366,   370,   370,   371,   371,   371,   371,   372,   372,
   372,   372,   373,   373,   374,   374,   374,   375,   375,   376,
   376,   376,   376,   377,   377,   379,   380,   378,   378,   378,
   378,   378,   378,   378,   381,   381,   382,   383,   384,   382,
   385,   385,   385,   385,   385,   385,   385,   385,   386,   386,
   387,   387,   388,   388,   388,   389,   389,   390,   390,   390,
   391,   390,   390,   392,   392,   392,   393,   393,   394,   394,
   394,   394,   394,   394,   394,   394,   394,   395,   395,   396,
   396,   397,   397,   398,   398,   399,   399,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   401,   400,   402,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   403,
   403,   404,   404,   405,   405,   405,   406,   406,   407,   407,
   407,   407,   407,   408,   408,   409,   409,   409,   409,   409,
   409,   410,   410,   411,   411,   411,   411,   411,   412,   412,
   413,   413,   413,   413,   413,   413,   413,   413,   414,   414,
   415,   415,   416,   416,   416,   416,   416,   416,   417,   417,
   418,   418,   419,   419,   420,   420,   420,   420,   420,   421,
   421,   421,   421,   422,   422,   423,   423,   424,   424,   424,
   425,   425,   427,   426,   426,   428,   426,   426,   426,   429,
   429,   430,   430,   430,   431,   431,   432,   432,   432,   432,
   432,   434,   433,   435,   436,   435,   437,   437,   437,   437,
   437,   438,   437,   437,   437,   439,   439,   440,   440,   440,
   440,   441,   441,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   442,   443,   443,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   445,   445,
   446,   446,   446,   446,   446,   446,   446,   447,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   448,   448,   448,
   448,   449,   449,   449,   449,   449,   449,   449,   449,   449,
   449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
   449,   449,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   451,   451,   451,   451,   451,   451,   451,   451,
   452,   452,   452,   452,   453,   453,   453,   453,   454,   454,
   454,   454,   454,   454,   454,   454,   455,   455,   456,   456,
   457,   457,   457,   457,   457,   457,   458
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     0,     3,     4,     5,     0,     6,     5,     1,
     5,     1,     1,     0,     0,    18,     0,     0,     7,     2,
     1,     2,     1,     1,     1,     1,     0,     3,     4,     1,
     1,     3,     0,     3,     4,     1,     3,     3,     5,     1,
     3,     0,     3,     6,     0,     1,     4,     0,     2,     3,
     0,     2,     5,     6,     7,     1,     1,     0,     3,     4,
     4,     0,     2,     0,     3,     1,     3,     0,     2,     1,
     0,     0,     7,     3,     3,     6,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     2,     2,     2,     3,     1,     3,     2,     1,     2,     0,
     5,     0,     7,     0,    11,     9,     4,     4,     0,     7,
     6,     2,     2,     2,     2,     3,     2,     3,     3,     6,
     3,     2,     3,     1,     3,     0,     3,     6,     0,     4,
     0,     2,     3,     4,     0,     4,     0,     2,     3,     3,
     4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     3,     3,     3,     3,     0,     1,     2,     3,     1,
     0,     2,     3,     4,     3,     4,     5,     0,     4,     2,
     0,     2,     3,     3,     3,     3,     3,     3,     7,     3,
     3,     3,     3,     3,     7,     7,     7,     0,     2,     3,
     1,     1,     0,     2,     3,     4,     3,     4,     4,     4,
     4,     0,     4,     0,     2,     3,     3,     4,     4,     7,
     3,     3,     3,     3,     0,     0,     0,    18,     0,     4,
     0,     2,     3,     3,     3,     1,     3,     0,     3,     1,
     3,     0,     3,     0,     4,     0,     2,     3,     3,     3,
     0,     4,     0,     2,     3,     3,     3,     4,     0,     2,
     3,     1,     1,     0,     2,     3,     4,     3,     4,     4,
     0,     4,     2,     0,     2,     3,     3,     3,     3,     3,
     0,     5,     0,     7,     3,     0,     5,     3,     3,     3,
     3,     3,     0,     3,     0,     2,     2,     2,     4,     4,
     4,     4,     0,     2,     3,     3,     3,     0,     2,     3,
     3,     3,     3,     0,     2,     0,     0,     9,     3,     3,
     3,     2,     3,     5,     0,     2,     3,     0,     0,     9,
     0,     1,     1,     1,     1,     1,     1,     1,     4,     3,
     0,     2,     3,     1,     1,     0,     2,     3,     4,     4,
     0,     5,     1,     0,     4,     2,     0,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     1,     2,     3,     0,
     3,     1,     3,     0,     3,     0,     2,     3,     3,     4,
     4,     4,     4,     5,     5,     2,     7,    11,     7,    13,
    11,     9,     7,     7,     7,     9,     9,     9,    11,    11,
    17,    13,    15,    11,    13,     0,     7,     0,     7,     7,
    11,     5,     5,     9,     9,     9,     5,     5,    11,     9,
    14,    14,     7,    12,    10,     7,     7,     7,     1,     1,
     1,     0,     2,     3,     3,     2,     0,     2,     3,     3,
     3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     4,     0,     2,
     3,     3,     3,     3,     3,     4,     4,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     4,     4,     3,     4,     0,
     4,     2,     2,     0,     2,     3,     4,     0,     5,     5,
     0,     2,     0,     6,     3,     0,     4,     3,     3,     0,
     2,     3,     1,     1,     0,     2,     3,     3,     3,     3,
     4,     0,     8,     0,     0,     3,     7,     7,    12,     8,
    11,     0,    10,     1,     6,     3,     6,     1,     1,     1,
     1,     0,     3,     1,     2,     2,    12,     2,    15,     4,
    12,    17,    22,    12,     0,     2,     3,     4,     4,     3,
     2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     5,     2,     2,     3,     9,     3,
     2,     9,     2,     9,     2,     9,     5,     3,     0,     2,
     6,     8,     8,    10,     1,     4,     1,     5,     4,     4,
     7,     4,     7,     5,     7,     5,     8,     0,     3,     5,
     5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     2,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     6,     4,     4,     4,     4,     4,     4,     6,     6,     6,
     5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     0,     1,     1,     3,     1,     1,     3,     3,     3,     5,
     3,     4,     4,     6,     8,     8,     5,     5,     1,     1,
     1,     1,     1,     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   739,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   740,     0,     0,     0,
     0,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   742,   741,     0,     0,   746,    18,   743,   648,    42,
   206,   169,   182,   238,    91,   299,   381,   519,   550,     0,
     0,   635,     0,   637,     0,     0,     0,     0,    41,   574,
     0,   721,     0,     0,     0,    26,    25,    24,    22,    23,
    21,    39,    29,    31,    32,    33,    34,    30,    35,    36,
    37,    38,     0,     0,    85,    43,     0,   207,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   714,   713,   739,     0,     0,
     0,     0,     0,     0,   715,   716,   717,   718,   719,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   722,   673,     0,   723,   720,     0,
     0,     0,     0,     0,     0,     0,     0,    86,     0,     6,
     0,   211,     8,   208,   210,   171,     9,   184,    10,   243,
    11,   239,   242,   241,   739,     0,     7,    92,    97,    96,
   304,    12,   300,   303,   302,   386,    13,   382,   385,   384,
   523,    14,   520,   522,   555,    15,   551,   554,   553,   562,
     0,     0,     0,     0,   582,     0,     0,   739,    63,     0,
    61,   572,     0,    88,   595,     0,     0,   640,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   675,   676,     0,   725,     0,   726,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   712,   639,   642,   737,
   644,     0,   646,     0,     0,   744,     0,   638,   649,   739,
     0,    44,    50,    53,    52,     0,     0,     0,     0,     0,
     0,    98,     0,     0,     0,     0,     0,     0,     0,   636,
   584,     0,     0,     0,     0,     0,     0,     0,     0,   595,
     0,     0,     0,   595,    76,   739,    73,     0,    60,    71,
    80,     0,    57,     0,    62,     0,   738,   731,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   674,   724,     0,   729,     0,
   690,   689,   687,   688,   683,   685,   684,   686,   678,   677,
   679,   680,   681,   682,     0,     0,     0,     0,     0,     0,
     0,     0,    82,   721,     0,     0,     0,     0,     0,   209,
   212,     0,     0,   170,   172,     0,   102,     0,   183,   185,
     0,     0,     0,     0,     0,     0,   240,   244,     0,     0,
    85,     0,     0,     0,     0,   301,   305,     0,     0,   391,
   383,   387,   393,     0,     0,     0,     0,   521,   524,     0,
     0,     0,     0,     0,   552,   556,   564,     0,     0,   585,
   586,   102,   588,     0,     0,     0,     0,     0,     0,     0,
   580,   581,   578,   579,   576,     0,     0,   595,     0,     0,
     0,    85,     0,     0,     0,    89,     0,     0,   596,   732,
   733,     0,     0,     0,     0,   691,   692,   693,   694,   695,
   696,   697,   698,   699,   700,     0,   702,   703,   704,   705,
   706,   707,     0,     0,     0,     0,   727,   728,     0,     0,
   645,     0,   747,   745,   651,   650,     0,     0,    47,     0,
    85,   739,     0,     0,     0,     0,   218,     0,     0,   175,
     0,   189,     0,     0,     0,   108,     0,   291,     0,   739,
     0,   252,   269,   284,   102,     0,     0,     0,     0,   739,
     0,   311,   335,   739,     0,   394,     0,   739,     0,   530,
    88,     0,     0,   564,     0,     0,     0,   565,     0,     0,
   631,     0,     0,     0,     0,     0,     0,     0,     0,   583,
   582,     0,     0,     0,   714,    78,    81,    72,     0,    77,
     0,    66,    58,    65,   575,   721,   721,     0,     0,     0,
     0,     0,   721,     0,   629,   629,   629,   601,   602,     0,
     0,     0,   616,   617,   104,   621,   623,   625,     0,     0,
     0,     0,     0,   643,     0,     0,     0,     0,   641,   730,
   711,   647,    90,     0,     0,    64,     0,     0,     0,    45,
     0,     0,   218,     0,   215,   213,     0,     0,     0,   173,
     0,     0,     0,   187,   103,     0,   186,     0,   247,     0,
   245,     0,     0,     0,     0,   102,    93,    99,   308,     0,
   306,     0,     0,     0,   388,     0,   416,     0,   525,     0,
     0,   528,   557,   565,   558,   560,   559,   563,     0,     0,
     0,     0,   102,     0,   590,     0,     0,     0,   567,     0,
     0,     0,   568,     0,     0,     0,    74,   595,    85,   613,
   618,   102,   610,     0,     0,   597,   600,   608,   609,   603,
   604,   607,   605,   606,   612,   611,     0,   614,   102,   620,
     0,     0,     0,     0,   628,   734,     0,     0,   701,   708,
   709,   710,    87,     0,    46,    49,    83,    51,     0,     0,
   221,   216,   220,   214,   177,   174,   191,   188,     0,     0,
   739,   652,   653,   654,   655,   656,   657,   658,   659,   660,
   661,   662,   663,   664,   665,   666,   667,   668,   669,   670,
   671,     0,   149,     0,     0,     0,     0,     0,   140,   142,
     0,     0,     0,     0,     0,     0,     0,     0,   109,   110,
   138,     0,   135,   720,   293,   251,   246,   254,   248,   271,
   249,   286,   250,    94,     0,   307,   314,   309,   313,     0,
     0,     0,     0,   310,   336,   338,   337,   389,   397,   390,
   396,     0,   526,   534,   529,   533,   532,   527,   561,   566,
     0,   633,   632,     0,     0,     0,     0,     0,     0,   577,
   595,   570,     0,    79,    75,     0,     0,     0,     0,   598,
   599,   630,     0,   106,     0,     0,     0,     0,     0,     0,
     0,    48,     0,    54,   217,     0,     0,     0,   100,   101,
   137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   132,   131,   133,     0,   157,   155,   152,   154,   153,
     0,   739,     0,   111,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   139,   166,     0,     0,     0,     0,    95,
     0,   354,   354,   365,   343,     0,     0,     0,   102,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   446,   448,   392,   417,   469,     0,     0,     0,   102,     0,
     0,     0,     0,     0,     0,     0,    59,    70,     0,     0,
   102,   615,   105,   102,     0,     0,     0,   627,   735,   736,
     0,     0,     0,     0,     0,     0,   102,   102,   102,   102,
     0,     0,     0,   102,   219,   222,     0,     0,   176,   178,
     0,     0,     0,   190,   192,     0,   108,     0,     0,     0,
     0,     0,   108,   108,     0,   134,   158,     0,   380,     0,
   130,   129,   126,   127,   128,   122,   124,   123,   125,   118,
   119,   114,   117,   120,   115,   121,   156,   159,   162,     0,
   164,     0,     0,   136,     0,     0,     0,     0,   292,   294,
     0,     0,     0,     0,   104,   104,     0,     0,   253,   255,
     0,     0,     0,   270,   272,     0,     0,     0,   285,   287,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   721,
   326,   312,   315,   371,   371,   371,     0,     0,     0,     0,
     0,   721,     0,     0,     0,   395,   398,   407,     0,     0,
   102,   102,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   426,     0,   477,     0,   484,     0,   492,   499,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   531,   535,   634,     0,     0,     0,     0,     0,     0,
     0,     0,   573,    88,    68,     0,   107,     0,     0,     0,
    84,     0,     0,     0,     0,     0,   102,     0,   102,     0,
     0,     0,     0,     0,     0,   102,     0,     0,     0,   166,
   196,     0,     0,   147,     0,   148,     0,     0,   144,     0,
     0,     0,   108,   379,     0,   161,   163,     0,     0,     0,
     0,     0,     0,    88,     0,     0,   265,     0,     0,     0,
     0,     0,     0,   280,   282,     0,   276,   278,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   739,
   321,     0,     0,     0,     0,   108,     0,     0,     0,     0,
   372,   373,   374,   375,   376,   377,   378,     0,     0,   339,
   355,     0,   340,     0,   341,   366,     0,     0,     0,   348,
   342,   344,     0,     0,   410,     0,    88,     0,     0,     0,
   414,     0,   412,     0,     0,   418,     0,     0,   419,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   104,   104,   538,     0,     0,     0,     0,     0,
     0,     0,   571,     0,    69,   102,     0,     0,     0,     0,
   224,   225,   230,   231,     0,   234,     0,   233,   227,   226,
    85,   228,   223,     0,   232,   180,   179,     0,     0,   193,
   194,     0,     0,     0,   108,     0,   141,     0,     0,   112,
   165,     0,   167,   295,   296,   297,     0,   256,   257,     0,
     0,     0,    85,   261,   262,   263,   264,   273,    85,   275,
    85,   274,   289,   288,   290,   331,   329,   330,   319,   317,
   318,   316,     0,   333,   325,   332,   328,   320,     0,     0,
     0,     0,     0,     0,   362,   356,     0,   368,     0,     0,
     0,   400,   399,    85,   401,   408,   402,   405,   406,    85,
   403,   404,     0,     0,     0,   102,     0,     0,     0,     0,
     0,   102,     0,     0,     0,   102,     0,     0,   102,   420,
   478,     0,     0,   102,     0,     0,     0,     0,   421,   485,
     0,     0,     0,     0,     0,   102,   422,   493,     0,     0,
     0,     0,     0,     0,     0,     0,   423,   500,   102,     0,
   102,   721,   721,   721,     0,   721,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   471,   470,   472,   472,
     0,   536,     0,   721,     0,     0,     0,     0,   569,     0,
     0,     0,     0,    55,   102,   102,     0,   102,   181,   198,
   195,     0,   116,   160,     0,     0,     0,   151,     0,     0,
   298,   258,     0,   259,     0,   281,     0,   277,     0,   323,
     0,     0,     0,   360,   361,   363,     0,   359,   108,   367,
   108,   345,   346,     0,     0,     0,     0,   347,   349,   409,
     0,   413,     0,   424,   416,   425,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   416,     0,     0,     0,     0,
     0,   416,     0,     0,     0,     0,     0,     0,     0,     0,
   416,     0,     0,     0,     0,     0,   416,   416,     0,     0,
   509,     0,   453,     0,     0,     0,     0,     0,     0,   457,
   458,     0,     0,     0,     0,     0,     0,     0,   452,     0,
     0,     0,     0,   537,     0,     0,     0,     0,     0,     0,
   619,   622,   624,   626,     0,     0,     0,     0,     0,     0,
   150,     0,     0,   143,   113,     0,     0,     0,   283,   279,
   333,     0,   322,   327,     0,   357,   369,     0,     0,     0,
     0,   411,   415,     0,     0,   721,     0,   721,     0,     0,
     0,     0,   102,     0,   481,   479,   480,   482,   102,     0,
   488,   486,   487,   489,   490,   102,   497,   495,     0,   494,
   496,   504,   503,   505,     0,     0,   501,   502,     0,     0,
     0,   102,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   721,   473,     0,   541,
   541,     0,   721,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   197,   199,
     0,     0,   168,     0,     0,     0,   334,   364,     0,     0,
   350,   351,   352,   353,   427,   429,     0,     0,     0,     0,
     0,   435,     0,     0,   483,     0,   491,     0,   498,   507,
   508,   511,   506,   450,     0,     0,   433,   434,     0,     0,
     0,     0,     0,   463,   467,   468,     0,   466,     0,   447,
     0,   721,   476,   449,   371,   371,   594,     0,   587,   591,
     0,     0,     0,   237,   236,   229,   235,     0,     0,     0,
     0,     0,     0,     0,   146,     0,   260,   324,   108,     0,
     0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     0,     0,   102,     0,   102,     0,     0,     0,     0,     0,
     0,   102,     0,   474,   475,     0,     0,     0,   546,   540,
     0,   542,   539,   721,     0,     0,     0,   200,   201,   202,
   203,   204,   205,     0,     0,     0,     0,   416,   437,   438,
     0,     0,     0,   436,     0,     0,   416,     0,     0,     0,
     0,   102,     0,     0,   510,   512,     0,   432,     0,   454,
   455,   456,     0,     0,   460,     0,     0,     0,     0,     0,
     0,     0,   543,     0,     0,     0,     0,   145,     0,     0,
     0,     0,     0,     0,   721,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
     0,   465,     0,   548,   549,   545,     0,   108,   589,     0,
     0,     0,   266,   358,   370,   428,   439,   440,     0,   416,
     0,   444,   416,   518,   513,   516,   517,   514,   515,   451,
   431,     0,   416,   416,   459,     0,   547,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   464,
     0,   592,     0,    56,     0,     0,   442,   416,   445,   430,
     0,     0,   544,     0,     0,     0,     0,   461,   462,     0,
   267,     0,   443,     0,     0,     0,     0,     0,   441,   593,
    88,     0,     0,   268,     0,     0,     0
};

static const short yydefgoto[] = {  2035,
     1,     2,     3,    22,    23,    24,   106,   181,   302,   645,
   303,  1012,  1655,   231,   485,   719,   232,   233,   603,   867,
  1000,   339,   482,   340,   531,   179,   401,   345,   402,   112,
   198,   431,   545,   546,  1518,   875,   665,   666,   809,  1050,
  1549,   810,   899,   900,  1385,   893,   934,  1072,  1074,   109,
   308,   415,   659,   887,  1030,   110,   309,   420,   661,   888,
  1035,  1379,  1660,  1760,   107,   184,   307,   411,   654,   886,
  1026,   111,   192,   310,   428,   672,   937,  1090,  1402,  1992,
  2025,   673,   938,  1095,  1249,  1411,  1246,  1409,   674,   939,
  1100,   668,   936,  1080,   113,   203,   313,   437,   682,   941,
  1113,  1424,  1671,  1266,  1562,   683,   835,  1117,  1292,  1441,
  1579,  1114,  1281,  1569,  1769,  1116,  1286,  1571,  1770,  1282,
   811,   114,   208,   314,   442,   567,   686,   946,  1127,  1296,
  1444,  1302,  1450,   842,   984,  1168,  1169,  1519,  1640,  1738,
  1319,  1471,  1321,  1480,  1323,  1488,  1324,  1498,  1719,  1852,
  1906,   115,   213,   315,   449,   690,   986,  1173,  1521,  1815,
  1872,  1958,  1922,   116,   217,   316,   456,    25,   317,   578,
   699,    79,   342,   224,   476,   332,   330,   346,   489,   732,
   985,    26,   105,   812,   268,   166,   167,   269,   270,    27,
   169,    57,    58
};

static const short yypact[] = {-32768,
-32768,    24,  2624,  -237,  -167,  -155,   672,   109,   933,   170,
  -133,   -76,   -73,   -53,   -51,    29,    37,    40,    66,   104,
    31,-32768,-32768,   697,-32768,-32768,   -93,   108,   122,   355,
   361,   419,-32768,   424,   435,   446,   455,   473,-32768,   476,
-32768,   492,   500,   525,   559,   564,   575,   585,   588,   594,
   599,-32768,-32768,   217,   338,-32768,-32768,-32768,-32768,-32768,
   862,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   442,
    79,-32768,   406,-32768,   430,   466,   474,   479,-32768,-32768,
   437,  1765,  4088,   -89,   421,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   170,   170,   -47,   498,   140,-32768,   303,   470,
    57,   199,   129,   234,   143,   328,   361,   637,  4088,  4088,
   361,   764,    58,   769,  4088,-32768,-32768,   138,   746,   523,
   571,   577,   582,   591,-32768,-32768,-32768,-32768,-32768,   601,
   603,   611,   631,   639,   646,   649,   653,   675,   678,   681,
   685,   689,   691,   694,   704,   711,   714,   718,   722,   734,
  4088,  4088,  4088,  3932,  1828,-32768,   809,-32768,-32768,   898,
  4895,   986,  3932,    93,   753,   -19,  1002,-32768,  1020,-32768,
  1066,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   105,   786,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   783,  4135,  5360,  1039,   802,   797,  1039,   180,-32768,    51,
-32768,-32768,   822,   826,-32768,  4926,  1366,-32768,  1088,  1094,
  4088,  4088,   170,  4088,  4088,  4088,  4088,  4088,  4088,  4088,
  4088,  4088,  4088,  4088,  4088,  4088,  4088,  4088,  4088,  4088,
  4088,  4088,  4088,   170,     8,     8,  5387,  1828,   532,-32768,
  4088,  4088,  4088,  4088,  4088,  4088,  4088,  4088,  4088,  4088,
  4088,  4088,  4088,  4088,  4088,  4088,-32768,-32768,-32768,-32768,
-32768,   184,-32768,  4088,   170,-32768,  3932,-32768,   871,   259,
   851,-32768,-32768,-32768,-32768,   106,   393,   144,   409,   417,
    12,-32768,   613,   371,   593,   592,   847,  4088,  4088,-32768,
-32768,    58,    58,    11,   852,   853,   859,   863,   864,-32768,
    58,   472,  3984,-32768,  1103,   274,-32768,  3932,-32768,-32768,
-32768,   860,-32768,   866,-32768,   201,-32768,-32768,   536,   870,
   880,  1789,  4022,   873,  5414,  5441,  5468,  5495,  5522,  5549,
  5576,  5603,  5630,  5657,  4079,  5684,  5711,  5738,  5765,  5792,
  5819,  4114,  4181,  4265,   893,-32768,-32768,  3932,  4202,  4223,
  2687,   906,  1256,  1256,  1137,  1137,  1137,  1137,   227,   227,
     8,     8,     8,     8,  1147,  5846,   904,   206,  4036,    49,
   930,   931,-32768,  2421,   935,  4088,    32,  1161,   361,-32768,
-32768,   907,  1164,-32768,-32768,   910,    78,  1167,-32768,-32768,
   913,  1169,  1170,   916,   918,   920,-32768,-32768,   951,   927,
   226,  1188,  1195,   941,   942,-32768,-32768,  1199,   945,-32768,
-32768,-32768,-32768,  1201,   947,   361,  1203,-32768,-32768,   361,
   950,  1206,   170,  1207,-32768,-32768,-32768,  4244,  1322,  1007,
-32768,    78,-32768,   956,  3932,   959,   960,   963,   238,   969,
-32768,-32768,-32768,-32768,-32768,  1221,   973,  6413,   280,  4155,
   970,   545,   549,  1100,    41,-32768,  1226,  4082,-32768,-32768,
-32768,  1229,  4088,  4088,  1242,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  4088,-32768,-32768,-32768,-32768,
-32768,-32768,  4088,  4088,  4088,  1244,  1828,-32768,  4088,  4088,
-32768,  1246,-32768,-32768,-32768,  6413,   993,  4088,-32768,    98,
   281,   191,  1248,    98,  5873,   996,-32768,  1250,    52,-32768,
  1261,-32768,  1022,  1023,  1272,-32768,  1273,-32768,  1275,   434,
  1276,-32768,-32768,-32768,    78,  1056,  1280,  1288,  1291,   434,
  1298,-32768,-32768,   434,  1299,-32768,  1047,   434,  1302,-32768,
   826,  1303,  1304,-32768,  1305,  1306,  1308,  1055,  4088,  4088,
-32768,  1312,  1069,  3932,   562,  3932,  3932,  3932,  1311,-32768,
   802,   170,   329,    14,  1329,  6413,-32768,-32768,    44,-32768,
    58,-32768,-32768,-32768,-32768,  2473,  2473,  1059,  1333,   368,
  4088,  4088,  2473,  4088,  1334,-32768,-32768,-32768,-32768,  4088,
  1337,  1487,-32768,-32768,  1083,  1084,  1085,  1087,  1091,  1345,
  1097,  4286,  4307,-32768,  5900,  5927,  5954,  5981,-32768,  6413,
  6413,-32768,-32768,  4957,    98,-32768,  1342,  1347,  1353,-32768,
  1355,  1133,-32768,   168,-32768,-32768,  1107,  1358,   583,-32768,
   589,  4088,  1361,-32768,-32768,  2362,-32768,   608,-32768,  1360,
-32768,   623,   650,   673,  1368,    78,-32768,-32768,-32768,  1369,
-32768,   205,   118,  1370,-32768,   216,-32768,  1371,-32768,   339,
  1378,-32768,-32768,  1126,-32768,-32768,-32768,-32768,   697,   517,
  6008,  1108,    78,   676,-32768,   680,   690,   699,-32768,  1159,
  1140,  1423,-32768,  1196,  4088,    50,-32768,-32768,   331,-32768,
-32768,    78,-32768,   170,   170,-32768,  6413,  6413,-32768,  6413,
-32768,  1430,  1430,  1430,  6413,-32768,  3932,  6413,    78,-32768,
  4088,  4088,  4088,  3932,-32768,-32768,  4088,  4088,-32768,-32768,
-32768,-32768,-32768,  1431,-32768,-32768,  1177,-32768,  1384,   396,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  6035,  1202,
   512,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1204,-32768,  1209,  1210,  1212,  1213,  1214,-32768,-32768,
  1451,  2362,  2362,  2362,  2362,  1458,   112,  1457,  3863,  -121,
  1215,  1215,-32768,  1227,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1475,-32768,-32768,-32768,-32768,  1223,
  1224,  1225,  1228,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2103,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  4088,-32768,-32768,  4088,  1235,  1238,  1245,  1249,  1255,-32768,
-32768,-32768,  1258,  6413,-32768,   332,  1231,   237,  1281,-32768,
-32768,-32768,   702,-32768,   709,  4328,  4349,  4370,   721,  6062,
  6089,-32768,  4088,-32768,-32768,   482,   175,   289,-32768,-32768,
-32768,  1284,  1233,  1284,  2362,  1499,  1501,  1503,  1293,  1294,
  1310,  1300,  1300,  1300,  3760,-32768,-32768,-32768,-32768,-32768,
   361,     6,  1289,-32768,  2362,  2362,  2362,  2362,  2362,  2362,
  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,  2362,
  1542,  4088,  1928,-32768,  1292,   705,   688,   342,   412,-32768,
   974,-32768,-32768,-32768,-32768,   410,    94,  -115,     3,  1309,
  1316,  1317,  1318,  1323,  1327,  1328,  1336,  1557,   133,   198,
   261,  1335,  1349,  1350,  1359,  1362,  1363,  1365,  1367,  1372,
  1364,  1373,  1374,  1375,  1377,  1380,  1381,  1379,  1382,  1386,
-32768,-32768,-32768,-32768,-32768,   157,  4988,  4391,    78,  3932,
  3932,  3932,  3932,   400,  1325,  1569,-32768,-32768,   361,    51,
    78,-32768,-32768,    78,  4088,  4088,  4088,-32768,-32768,-32768,
  5019,  1387,    58,    58,    58,    58,   126,   163,    78,    78,
  1385,  1591,  1597,   200,-32768,-32768,   101,  1602,-32768,-32768,
  1388,  1609,  1615,-32768,-32768,  1383,-32768,  1389,  1959,  1400,
  1392,  1394,-32768,-32768,  1393,-32768,-32768,  1390,-32768,  2362,
  3354,  1760,  1511,  1511,  1511,   493,   493,   493,   493,   651,
   651,  1300,  1300,  1300,  1300,  1300,-32768,-32768,-32768,  1414,
  3863,   405,  3800,-32768,  1617,   256,  1618,   361,-32768,-32768,
  1620,  1627,  1665,  1411,  1083,  1083,    58,    58,-32768,-32768,
  1678,    35,    43,-32768,-32768,  1686,   361,  1687,-32768,-32768,
  1690,  1691,  1693,   255,   361,  1695,  1698,  1700,    58,  2473,
-32768,-32768,-32768,  1348,  1657,  1008,   131,  1699,   361,    45,
   170,  2473,   170,    56,  1701,-32768,-32768,-32768,   361,  1702,
    78,    78,  1703,  1706,  1707,  1710,  1711,  1712,  1713,  1715,
  1717,-32768,  4088,-32768,  4088,-32768,  4088,-32768,-32768,    58,
   170,  1718,  1723,  1725,  1728,  1729,  1730,   361,   361,  1732,
  1738,  1739,  1740,  1741,   361,  1747,   361,  1453,  1454,  1445,
   361,-32768,-32768,-32768,  4088,  1500,   723,   729,   737,   742,
  1753,   361,-32768,   826,-32768,  1505,-32768,  4412,  4433,  4454,
-32768,  1508,  1766,  1768,  1769,  1770,    78,  1771,    78,  1779,
  1814,  1815,  1018,  1817,  1818,    78,  1821,  1822,  1823,  1292,
-32768,  1825,  1826,-32768,  1510,-32768,  2362,  1820,-32768,  1577,
  1583,  1578,-32768,-32768,  3639,-32768,-32768,  2362,  1587,   744,
  1839,  1840,  1844,   826,  1846,    75,  1594,  1853,  1852,  1857,
  1859,  1860,  1867,-32768,-32768,  1868,-32768,-32768,  1869,  1870,
  1872,  1873,  1874,  1875,  1876,  1877,  1878,  1879,  1880,   521,
-32768,  1881,  1882,  1883,  1885,-32768,  1855,  1888,  1889,  1641,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    58,  1891,-32768,
-32768,  1642,-32768,    58,-32768,-32768,  1646,  1898,  1906,-32768,
-32768,-32768,  1907,  1908,-32768,  1909,   826,  1910,  1913,  1915,
-32768,  1916,-32768,  1917,  1658,-32768,  1670,  1671,-32768,  1666,
  1667,  1668,  1673,  1674,  1675,  1683,  1685,  4475,   716,  4496,
   708,  4517,   443,   376,  1689,  1694,  1692,  1748,  1751,  1754,
  1756,  1757,  1696,  1731,  1775,  1776,  1777,  1780,  1783,  1785,
  1786,  1697,    74,    74,-32768,  1941,  5050,  1781,  1784,  1788,
  1792,  1798,-32768,  1946,-32768,    78,  4088,  4088,  4088,    51,
-32768,-32768,-32768,-32768,  1802,-32768,  1807,-32768,-32768,-32768,
  1808,-32768,-32768,  1824,-32768,-32768,-32768,  1948,   747,-32768,
-32768,    58,  6440,  1735,-32768,  4088,-32768,  1953,  1736,-32768,
  3863,    58,-32768,-32768,-32768,-32768,  1994,-32768,-32768,  2024,
  1966,  2073,  1808,-32768,-32768,-32768,-32768,-32768,   756,-32768,
   758,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1830,  1833,-32768,-32768,-32768,-32768,  1827,  2077,
  2082,  2087,  2094,  2091,-32768,-32768,  2092,-32768,  2093,  2095,
   251,-32768,-32768,   765,-32768,-32768,-32768,-32768,-32768,   775,
-32768,-32768,  2096,  1841,  2104,    78,  2107,  2108,  4088,  4088,
  2109,    78,    58,  4088,  1849,    78,  4088,  4088,    78,-32768,
-32768,  4088,  1871,    78,  4088,  4088,  4088,  4088,-32768,-32768,
  4088,  4088,  4088,  1897,  4088,    78,-32768,-32768,  4088,  4088,
  2110,  1899,  1900,  4088,  4088,  1901,-32768,-32768,    78,  2112,
    78,  2473,  2473,  2473,  4088,  2473,  2151,  2155,  2158,  2159,
  4088,  2161,  2162,    58,  2163,  2166,-32768,-32768,-32768,-32768,
    33,-32768,  1914,  2473,  3932,  1918,  3932,  3932,-32768,  1920,
  5081,  5112,  5143,-32768,    78,    78,  1018,    78,-32768,-32768,
-32768,  1927,-32768,-32768,  1932,  4538,  1934,-32768,  2362,  1945,
-32768,-32768,  2164,-32768,  2165,-32768,  2170,-32768,  2203,-32768,
   361,  2202,  2207,-32768,-32768,-32768,  1960,-32768,-32768,-32768,
-32768,-32768,-32768,  1284,  1284,  1284,    58,-32768,-32768,-32768,
   361,-32768,   361,-32768,-32768,-32768,  1962,  1957,  1958,  4559,
  4580,  1961,  1967,  1963,  4601,-32768,  2217,   595,   952,  2221,
  4622,-32768,  2222,  1027,  1057,  1089,  1208,  4643,  1354,  1421,
-32768,  1442,  2223,  2086,  2298,  2224,-32768,-32768,  2327,  2672,
-32768,   414,-32768,  1970,  1978,  1979,  1973,  4664,  1974,-32768,
-32768,  1975,  1976,  6116,  1984,  1985,  1981,   777,-32768,   420,
   440,  1986,  1997,-32768,  4088,  1982,   784,  4088,   792,   801,
-32768,-32768,-32768,-32768,  1996,  2004,  2006,  2001,  2009,   486,
-32768,  2010,  4088,-32768,  3863,  2026,  2260,  2027,-32768,-32768,
  1833,  2015,-32768,-32768,  2282,-32768,-32768,  2284,  2285,  2286,
  2289,-32768,-32768,  2595,  2290,  2473,  4088,  2473,  4088,  2294,
  2293,  2296,    78,  2647,-32768,-32768,-32768,-32768,    78,  2701,
-32768,-32768,-32768,-32768,-32768,    78,-32768,-32768,  2884,-32768,
-32768,-32768,-32768,-32768,  2936,  2990,-32768,-32768,   806,  2299,
  4088,    78,  2300,  2301,  4088,   170,   170,  4088,  4088,  2303,
  2304,  2306,   170,  2307,  2168,  2308,  2102,-32768,  2309,-32768,
-32768,  5174,  2473,  2061,  5205,  2067,  2075,  2079,  2331,  2332,
  2333,  2334,  2337,  4088,  4088,  4088,  4088,  4088,-32768,-32768,
  2084,  5236,-32768,  2234,  2340,  2341,-32768,-32768,  2088,  2090,
-32768,-32768,-32768,-32768,  2339,-32768,  2098,  6143,  2097,  4685,
  2099,-32768,  2101,  2106,-32768,  2111,-32768,   441,-32768,-32768,
-32768,-32768,-32768,-32768,  4706,   464,-32768,-32768,  6170,  2114,
  2115,  4727,  4748,-32768,-32768,-32768,   807,-32768,   170,-32768,
   170,  2473,-32768,-32768,  1782,  1816,-32768,  2113,-32768,-32768,
  2089,  3932,    51,-32768,-32768,-32768,-32768,  2351,  2742,  2961,
  3015,  3250,  3304,  4088,-32768,  2358,-32768,-32768,-32768,  1284,
  2116,  2364,  2365,  4088,  4088,  4088,  2367,    78,  4088,  2117,
  4088,   309,    78,  2371,    78,  2372,  2373,  2375,  4088,  4088,
  2377,    78,   811,-32768,-32768,  2380,  2381,  2382,-32768,-32768,
  2134,-32768,-32768,  2473,  4088,   830,  2127,-32768,-32768,-32768,
-32768,-32768,-32768,  5267,  2130,  2173,  2174,-32768,-32768,-32768,
  6197,  6224,  4769,-32768,  2176,  4790,-32768,  6251,  2427,  2428,
  4088,    78,  2429,    58,-32768,-32768,  2180,-32768,   503,-32768,
-32768,-32768,  6278,  6305,-32768,  2175,  2430,  2434,  2432,  2433,
  2435,    58,-32768,  2182,  4811,  2183,  4088,-32768,  2443,  2472,
  2474,  3173,  2475,  2476,  2473,  2181,  4088,  3225,  2220,  2478,
  2479,  3539,  2480,  2481,  2482,  2485,  2486,    78,  2235,  2236,
  2487,-32768,  2240,-32768,-32768,-32768,  2495,-32768,-32768,  4088,
  2268,  6332,-32768,-32768,-32768,-32768,-32768,-32768,  2272,-32768,
  6359,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2291,-32768,-32768,-32768,  2532,-32768,  2292,  5298,  4088,
  2533,  2488,  4088,  3279,  2288,  3462,  2544,  3514,  3568,-32768,
  2545,-32768,  4832,-32768,    58,  4853,-32768,-32768,-32768,-32768,
  2546,  2547,-32768,  4088,  2549,  4088,  3751,-32768,-32768,  4874,
-32768,  6386,-32768,  4088,  2425,  2556,  5329,  2563,-32768,-32768,
   826,  2562,  2314,-32768,  2576,  2577,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -280,-32768,-32768,  -292,  1504,-32768,-32768,
  1502,  -482,-32768,  -492,-32768,  -409,  -535,  -551,-32768,-32768,
-32768,-32768,   228,-32768,  -616,-32768, -1002,-32768,  -727,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1773,-32768,  1376,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1929,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   912,-32768,-32768,-32768,-32768,-32768,
-32768,  1638,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1109,
  -766,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1551,-32768,-32768,-32768,  1243,  1068,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   848,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2016,
-32768,  1892,-32768,  2470,-32768,  2002,  2368,  -322,-32768,   481,
   -18,   -24,-32768,-32768,   367,  -643,  -549,  -172,   -80,-32768,
    -3,   -90,   -72
};


#define	YYLAST		6695


static const short yytable[] = {    28,
   292,   168,   604,   658,   891,    80,  1287,   469,   740,   170,
     4,   479,   175,   176,   670,   228,   228,    70,   430,   691,
   713,   558,   813,    -2,   680,   543,    29,    85,   684,   460,
   461,   463,   688,  1684,  1215,     4,   536,  1642,   470,  1244,
  1221,  1222,   108,   335,  1694,   336,   335,  1247,   336,     4,
  1700,   527,   335,   335,   336,   336,   720,   721,   656,  1709,
     4,     4,   228,   729,   349,  1715,  1716,     5,     6,    71,
    72,    73,   599,    74,   902,   903,   904,   905,  1517,   229,
   229,  1399,   185,   118,    30,    11,   194,   200,   205,   210,
   214,   219,   193,   199,   204,   209,    31,   218,     4,   293,
   543,   544,   646,    28,   602,   228,   717,    28,    28,    28,
    28,    28,    28,   220,   907,    39,   908,   225,   225,   234,
    59,   649,     4,   533,   398,  1036,   229,  1038,     5,     6,
    71,    72,    73,     4,    74,   931,   120,   932,  1131,     5,
     6,    71,    72,    73,     4,    74,    11,     4,   543,  1643,
     5,     6,   354,     5,     6,   593,   305,    11,   813,   813,
   813,   813,   304,   172,  1208,   483,   229,  1039,    11,   229,
    81,    11,   173,   375,    52,    53,   544,   306,    54,    55,
    71,    72,    73,    60,    74,   543,    61,  1051,  1052,  1053,
  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,
  1064,  1065,  1066,   195,   397,  1071,    62,   177,    63,     5,
     6,    71,    72,    73,   178,    74,  1288,    71,    72,    73,
  1389,    74,   543,   865,   544,   412,   341,    11,    71,    72,
    73,  1170,    74,   296,   830,   831,   832,   833,     4,   413,
  1289,   998,   297,  1027,     5,     6,    71,    72,    73,   647,
    74,   813,  1171,   651,   909,  1028,  1132,   714,   286,  1256,
   646,   544,    11,  1429,   287,   196,   429,   230,   230,    29,
   462,   813,   813,   813,   813,   813,   813,   813,   813,   813,
   813,   813,   813,   813,   813,   813,   813,   716,    64,   813,
    69,   537,   585,  1644,  1245,   443,    65,   518,   544,    66,
   337,   999,  1248,   338,  1295,   528,   338,   234,   718,   868,
   337,   657,   338,   338,   230,  1301,   190,   191,   234,   234,
   234,   910,  1225,   168,   229,    67,  1899,   234,  1574,  1575,
   119,   170,     4,   739,   657,   404,  1932,    82,     5,     6,
    71,    72,    73,     4,    74,  1938,   294,  1129,   405,     5,
     6,    71,    72,    73,   230,    74,    11,   230,   311,   406,
    84,  1257,   576,    68,   754,     4,  1576,    11,    29,   911,
  1031,  1258,    52,    53,  1032,  1033,    54,    55,   834,  1197,
  1577,    83,  1545,    71,    72,    73,  1143,    74,   201,   202,
  1290,  1291,  1144,  1489,  1900,   866,  1901,   237,    56,   182,
   183,    29,   211,   212,   414,   539,   813,  1902,    71,    72,
    73,   704,    74,   706,   707,   708,  1199,  1172,  1994,   551,
  1903,  1996,    71,    72,    73,    86,    74,   761,   762,   561,
    87,  1998,  1999,   -64,   565,  1029,   395,  1091,  1904,  1092,
   569,    88,   571,    29,   -64,   378,   573,  1093,   165,   171,
   237,  1145,    89,  1206,    29,   487,  2017,  1146,   524,   197,
  1482,    90,   488,  1490,   827,   828,   438,   378,  1239,  1240,
   103,   283,   284,   285,   407,   839,   840,   286,   408,    91,
   557,   341,    92,   287,   421,   222,   223,   178,   409,  1383,
   416,   236,   589,   206,   207,  1118,   417,  1096,    93,   488,
  1391,   711,   422,   439,   418,  1119,    94,  1097,  1491,  1098,
   440,  1578,   423,   424,  1147,  1492,  1493,  1185,   400,   726,
  1148,   425,    29,   426,   851,   168,   168,   265,   266,   267,
  1483,    95,   168,   481,   594,   648,  1494,    29,   994,  1495,
  1496,   488,   178,  1120,  1121,  1122,  1123,  1124,  1125,  1034,
  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1371,
  1265,  1022,   186,   187,   873,    96,  1676,  1023,  1677,  1905,
    97,   879,  1299,   813,  1753,  1754,  1755,  1756,  1757,  1758,
  1024,    98,  1484,   712,   813,   -67,   996,   215,   216,   104,
   488,    99,   178,   488,   100,   341,    56,   234,   844,   845,
   101,  1696,  1094,  1485,  1486,   102,   724,   352,   353,   725,
   355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
   365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
   117,   441,  1355,   870,   871,   763,  1497,   379,   380,   381,
   382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
   392,   393,   394,   410,  1181,   761,   885,   120,   837,  1227,
   396,   488,   814,   829,   836,   847,  1228,   841,  1720,   419,
  1126,   846,  1099,   174,  1736,  1721,    32,   427,    33,    28,
    80,  1737,  1397,   121,   458,   459,    28,   450,   444,   583,
    34,    35,    36,   657,  1739,  1850,   125,    29,   432,   478,
  1400,  1737,  1851,  1487,   445,  1871,  1871,    37,   433,    71,
    72,    73,   341,    74,   471,   472,   473,   474,  1854,   122,
  1193,  1194,  1195,  1196,   434,  1855,   446,   123,   435,   188,
   189,   451,   124,   475,  1209,   924,   925,   926,   927,   928,
   929,   763,  1025,   930,   517,  1446,  1759,   272,   273,   274,
   275,   276,   238,   277,   278,   279,   280,  1947,   180,   281,
   282,   283,   284,   285,  1948,   526,   221,   286,     4,   226,
   165,   808,   535,   287,   235,    29,   239,   852,   447,   452,
  1423,   453,   675,  1081,    29,  1082,  1083,  1084,  1085,  1086,
  1087,  1088,   377,   378,  1241,  1242,   490,   378,   814,   814,
   814,   814,  1075,   454,   913,   598,   178,  1678,  1679,  1680,
   378,   600,  1076,  1077,  1078,   288,  1264,  1177,  1178,  1179,
  1180,  1665,   705,   378,   240,   272,   273,   274,   275,   276,
   241,   277,   278,   279,   280,   242,  1886,   281,   282,   283,
   284,   285,   765,   766,   243,   286,   596,  1473,   767,   768,
  1474,   287,   455,   448,   244,  1465,   245,  1325,  1466,   632,
   633,  1475,  1476,    38,   246,  1477,  1478,   815,   816,  1467,
  1468,  1469,   635,   436,    71,    72,    73,  1534,    74,   636,
   637,   638,   818,   819,   247,   640,   641,    75,    76,    77,
    78,   814,   248,  1658,   644,   926,   927,   928,   929,   249,
  1230,   930,   250,   825,   289,   813,   251,  1047,  1048,   820,
   821,   814,   814,   814,   814,   814,   814,   814,   814,   814,
   814,   814,   814,   814,   814,   814,   814,  1128,   252,   814,
   855,   253,   822,   823,   254,    40,   856,   378,   255,    41,
   857,   378,   256,  1130,   257,   700,   701,   258,  1089,   869,
   858,   378,  1625,  1626,  1627,  1988,  1629,   259,  1697,   859,
   378,  1537,  1002,   378,   260,  1079,   874,   261,  1479,  1003,
  1004,   262,   165,   165,  1646,   263,  1470,   727,   728,   165,
   730,  1008,   378,  1349,   378,  1434,   735,   264,   738,  1350,
   378,  1437,   291,  1555,    42,  1184,   341,  1351,   378,  1557,
    43,  1559,  1352,   378,  1393,   378,  1540,  1541,   298,   234,
   234,   234,   234,    44,   295,    45,  1556,   178,  1558,   178,
   126,   127,     4,   234,   299,  1580,   178,    46,   769,   168,
  1298,    47,  1300,  1702,  1581,  1582,   178,  1734,  1735,   312,
  1583,   168,   318,    48,  1744,   378,   814,   135,   136,   137,
   138,   139,  1746,   378,  1101,   331,  1102,  1103,   333,  1104,
  1326,  1747,   378,  1703,    49,  1792,  1793,  1861,  1862,  1105,
   300,  1917,  1918,  1887,  1234,   343,     5,     6,    71,    72,
    73,   864,    74,   234,   234,   344,  1106,  1107,  1108,  1542,
  1926,   378,   350,  1251,    11,  1704,   733,   734,   351,  1550,
   399,  1259,  1261,  1109,   403,   234,   457,   876,   877,   878,
   480,   464,   465,   880,   881,  1294,  1297,    50,   466,    51,
  1303,   484,   467,   468,   491,  1305,   486,   495,   301,  1271,
  1272,  1273,  1274,  1275,  1276,  1277,  1777,  1284,  1779,   275,
   276,   492,   277,   278,   279,   280,   234,   516,   281,   282,
   283,   284,   285,   521,  1333,  1334,   286,  1110,   523,   529,
   530,  1340,   287,  1342,   534,   538,   540,  1346,   541,   542,
  1594,   547,   548,   549,   550,   552,  1133,   553,  1354,   554,
   555,   556,   272,   273,   274,   275,   276,  1813,   277,   278,
   279,   280,   559,  1818,   281,   282,   283,   284,   285,   560,
   562,   563,   286,   564,   566,   568,   570,   572,   287,   574,
   575,   577,   582,   814,  1705,   584,  1176,   987,   586,   587,
   988,  1637,   588,   590,   814,   591,   592,  1111,  1186,   601,
   597,  1187,   605,   631,  1112,   321,   322,   323,   324,   325,
   326,   327,   328,   329,  1198,  1200,  1201,  1202,   634,  1011,
   639,  1207,   642,   643,   650,   653,   655,   272,   273,   274,
   275,   276,  1865,   277,   278,   279,   280,   660,  1285,   281,
   282,   283,   284,   285,   234,   662,   663,   286,   664,   667,
   234,   669,   671,   287,  1681,   676,   677,   272,   273,   274,
   275,   276,   678,   277,   278,   279,   280,   679,  1068,   281,
   282,   283,   284,   285,   681,   685,   687,   286,   689,   692,
   693,   695,   696,   287,   697,   698,   702,   709,   722,   272,
   273,   274,   275,   276,  1924,   277,   278,   279,   280,   580,
   703,   281,   282,   283,   284,   285,   715,   723,   731,   286,
  1877,   736,   739,   741,   742,   287,   743,   745,   755,  1929,
   744,   746,  1647,   756,  1649,  1650,   341,   757,  1307,  1308,
  1707,   758,   759,   528,   764,   770,   817,   854,   126,   127,
   128,  1188,  1189,  1190,   824,   826,   838,   843,   234,   281,
   282,   283,   284,   285,   848,  1969,   849,   286,   234,   130,
   131,   132,   133,   287,   861,   135,   136,   137,   138,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   860,   168,   168,   168,  1365,   168,  1367,  1708,  1267,   862,
  1268,  1269,  1270,  1374,   863,   872,   883,   882,   272,   273,
   274,   275,   276,   168,   277,   278,   279,   280,  1710,   884,
   281,   282,   283,   284,   285,   901,   890,   892,   286,   234,
   906,   912,   894,   895,   287,   896,   897,   898,   933,  1271,
  1272,  1273,  1274,  1275,  1276,  1277,   165,  1278,  1279,  2032,
  -672,   940,   942,   943,   944,   997,  1037,   945,   165,   126,
   127,     4,   277,   278,   279,   280,   989,   990,   281,   282,
   283,   284,   285,  1040,   991,  1041,   286,  1042,   992,  1318,
   234,  1320,   287,  1322,   993,   995,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,  1347,  1001,   808,  1067,   814,  1043,  1044,  1045,  1049,
   930,  1073,   272,   273,   274,   275,   276,  1672,   277,   278,
   279,   280,  1134,  1142,   281,   282,   283,   284,   285,  1135,
  1136,  1137,   286,   234,   581,  1183,  1138,  1682,   287,  1683,
  1139,  1140,  1182,  1530,   272,   273,   274,   275,   276,  1141,
   277,   278,   279,   280,  1149,  1204,   281,   282,   283,   284,
   285,  1205,  1150,  1151,   286,   168,  1210,   168,  1280,   161,
   287,  1945,  1152,  1212,   162,  1153,  1154,   163,  1155,  1213,
  1156,  1231,   998,  1158,  1235,  1157,   348,  1160,  1161,  1957,
  1162,  1236,  1159,  1163,  1164,  1800,  1801,  1214,  1165,  1167,
  1192,  1166,  1807,  1216,  1203,  1219,  1223,  1211,  1220,  1876,
  1224,   272,   273,   274,   275,   276,   168,   277,   278,   279,
   280,  1218,   168,   281,   282,   283,   284,   285,  1226,  1237,
  1238,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1243,  1587,   281,   282,   283,   284,   285,  1593,
  1250,  1252,   286,  1597,  1253,  1254,  1600,  1255,   287,  1260,
  1262,  1603,  1263,  1293,  1345,  1304,  1343,  1344,  1306,  1309,
  1310,  1311,  2015,  1613,  1312,  1313,  1314,  1315,  1863,  1316,
  1864,  1317,  1327,  1531,  1532,  1533,  1622,  1328,  1624,  1329,
   161,   168,  1330,  1331,  1332,   162,  1335,  1267,   163,  1268,
  1269,  1270,  1336,  1337,  1338,  1339,   737,   920,   921,   922,
   923,  1341,  1546,   924,   925,   926,   927,   928,   929,  1353,
  1348,   930,  1656,  1657,  1360,  1659,  1356,   126,   127,   128,
   129,  1382,  1361,    54,  1362,  1363,  1364,  1366,  1271,  1272,
  1273,  1274,  1275,  1276,  1277,  1368,  1278,  1279,   130,   131,
   132,   133,   134,   168,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   341,
  1369,  1370,  1384,  1372,  1373,  1590,  1591,  1375,  1376,  1377,
  1595,  1380,  1381,  1598,  1599,   271,  1386,  1387,  1601,  1388,
  1392,  1604,  1605,  1606,  1607,  1394,  1395,  1608,  1609,  1610,
  1396,  1612,  1398,  1401,   168,  1614,  1615,  1403,  1404,  1430,
  1619,  1620,  1866,  1405,  1867,  1406,  1407,  1868,   165,   165,
   165,  1628,   165,  1408,  1410,  1412,  1413,  1634,  1414,  1415,
  1416,  1417,  1418,  1419,  1420,  1421,  1422,  1425,  1426,  1427,
   165,  1428,  1431,  1432,  1433,  1436,  1866,  1435,  1867,  1438,
   234,  1868,  1439,  1271,  1272,  1273,  1274,  1275,  1276,  1277,
  1440,  1869,  1453,  1442,  1443,  1445,  1447,  1283,   234,  1448,
  1784,  1449,  1451,  1452,  1454,  1455,  1786,  1456,  1457,  1458,
   126,   127,   771,  1788,  1459,  1460,  1461,  1271,  1272,  1273,
  1274,  1275,  1276,  1277,  1462,  1869,  1463,  1522,  1500,  1796,
  1499,  1516,  1529,  1501,  1539,  1547,  1507,   135,   136,   137,
   138,   139,   772,   773,   774,   775,   776,   777,   778,   779,
   780,   781,   782,   783,   784,   785,   786,   787,   788,   789,
   790,   791,   792,   793,   794,   795,   796,   797,   798,  1544,
  1548,  1508,   160,   917,   918,   919,   920,   921,   922,   923,
  1551,   234,   924,   925,   926,   927,   928,   929,   161,  1502,
   930,  1742,  1503,   162,  1745,  1504,   163,  1505,  1506,   272,
   273,   274,   275,   276,   164,   277,   278,   279,   280,  1762,
  1552,   281,   282,   283,   284,   285,  1509,  1510,  1511,   286,
  1524,  1512,  1870,  1525,  1513,   287,  1514,  1515,  1526,   799,
   493,  1527,   165,  1778,   165,  1780,   800,  1528,   272,   273,
   274,   275,   276,  1535,   277,   278,   279,   280,  1536,   178,
   281,   282,   283,   284,   285,  1895,  1873,  1553,   286,  1554,
  1907,  1563,  1909,  1564,   287,  1538,  1561,  1795,  1565,  1916,
  1560,  1799,  1712,  1566,  1802,  1803,  1567,  1568,  1570,  1572,
  1585,  1573,  1584,   165,   126,   127,   128,   947,  1596,   165,
  1586,  1588,  1589,  1592,  1616,    71,    72,   948,  1623,    74,
  1829,  1830,  1831,  1832,  1833,   130,   131,   132,   133,  1943,
  1602,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,  1611,  1630,  1617,  1618,
  1621,  1631,  1632,  1633,   801,  1635,  1636,  1638,  1667,  1668,
   802,   803,  1639,  1645,  1669,  1982,   804,  1648,   165,   805,
  1651,  1661,  1069,  1070,   806,   807,  1662,   808,  1664,   914,
   915,   916,   917,   918,   919,   920,   921,   922,   923,  1666,
  1884,   924,   925,   926,   927,   928,   929,  1670,  1673,   930,
  1891,  1892,  1893,  1674,  1675,  1896,  1685,  1898,  1686,  1687,
  1217,  1691,  1690,  1695,  1692,  1913,  1914,  1698,  1701,  1711,
  1714,  1722,  1723,  1724,  1725,  1727,  1728,  1729,  1731,  1732,
   165,  1925,  1733,  1743,   949,  1740,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,  1741,  1748,  1749,   960,
  1750,  1751,   961,  1752,  1761,   962,  1764,  1942,   963,  1767,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
   974,   975,   976,   977,   978,   979,  1763,  1765,  1768,   980,
  1771,  1772,  1773,  1962,   981,  1774,  1776,   982,  1781,  1782,
  1783,   165,  1809,  1971,  1713,  1794,  1797,  1798,  1811,  1804,
  1805,  1812,  1806,  1808,  1810,  1814,   272,   273,   274,   275,
   276,  1819,   277,   278,   279,   280,  1989,  1821,   281,   282,
   283,   284,   285,  1717,  1822,  1823,   286,  1824,  1825,  1826,
  1827,  1828,   287,  1834,  1836,   161,  1837,  1838,  1875,  1839,
   162,  1840,  1842,   163,  1841,  1847,  2003,  1878,  1844,  2006,
  1846,   164,  1885,   983,   126,   127,   771,  1848,  1857,  1858,
  1889,  1890,  1849,  1894,  1874,  1888,  1897,  1908,  1910,  1911,
  2020,  1912,  2022,  1915,  1919,  1920,  1921,  1923,  1927,   657,
  2027,   135,   136,   137,   138,   139,   772,   773,   774,   775,
   776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
   786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
   796,   797,   798,   126,   127,   532,   129,  1930,  1931,    54,
  1936,  1940,  1941,  1944,  1946,  1951,  1952,  1953,  1954,  1955,
  1970,  1956,  1959,  1961,   130,   131,   132,   133,   134,  1963,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   126,   127,   128,  1964,  1973,
  1965,  1967,  1968,   799,  1974,  1975,  1977,  1978,  1979,   229,
   800,  1980,  1981,  1985,  1983,  1984,   130,   131,   132,   133,
  1986,  1987,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,  1990,   272,   273,
   274,   275,   276,  1993,   277,   278,   279,   280,  2000,  2004,
   281,   282,   283,   284,   285,  1997,  2001,  2008,   286,  2005,
  2010,  2013,  2018,  2019,   287,  2021,  2028,   272,   273,   274,
   275,   276,  2029,   277,   278,   279,   280,  2031,  2033,   281,
   282,   283,   284,   285,  2034,  2036,  2037,   286,  1233,  1232,
  1115,   760,  1766,   287,   935,  1378,  1520,  1641,  1816,   694,
   850,   227,   710,     0,   334,     0,     0,     0,   801,   947,
     0,     0,     0,     0,   802,   803,     0,    71,    72,   948,
   804,    74,     0,   805,     0,     0,     0,     0,   806,   807,
     0,   808,     0,     0,     0,     0,     0,     0,     4,     0,
     0,     0,     0,     0,     5,     6,     0,     0,     0,     0,
     0,     0,     7,     8,     9,    10,     0,     0,   160,     0,
     0,   947,    11,     0,     0,     0,     0,     0,     0,    71,
    72,   948,     0,    74,   161,     0,     0,     0,     0,   162,
     0,     0,   163,     0,     0,     0,     0,   230,  1718,     0,
   164,     0,     0,     0,     0,    12,     0,     0,     0,     0,
     0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    14,   947,    15,     0,     0,     0,
     0,     0,     0,    71,    72,   948,   161,    74,    16,     0,
     0,   162,    17,     0,   163,     0,     0,     0,     0,     0,
     0,     0,   164,     0,    18,     0,   949,     0,   950,   951,
   952,   953,   954,   955,   956,   957,   958,   959,  1879,     0,
     0,   960,     0,     0,   961,    19,     0,   962,     0,     0,
   963,     0,   964,   965,   966,   967,   968,   969,   970,   971,
   972,   973,   974,   975,   976,   977,   978,   979,     0,     0,
     0,   980,     0,     0,     0,     0,   981,     0,   949,   982,
   950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     0,     0,     0,   960,     0,     0,   961,     0,    20,   962,
    21,     0,   963,     0,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
     0,     0,     0,   980,     0,     0,     0,     0,   981,     0,
     0,   982,   949,     0,   950,   951,   952,   953,   954,   955,
   956,   957,   958,   959,     0,  1775,     0,   960,     0,     0,
   961,     0,     0,   962,     0,     0,   963,     0,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
   976,   977,   978,   979,     0,     0,     0,   980,   947,     0,
     0,     0,   981,     0,     0,   982,    71,    72,   948,     0,
    74,     0,   272,   273,   274,   275,   276,  1785,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,   274,
   275,   276,   286,   277,   278,   279,   280,     0,   287,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
   947,     0,     0,   287,     0,     0,     0,     0,    71,    72,
   948,     0,    74,     0,     0,     0,     0,     0,     0,     0,
     0,  1787,     0,     0,     0,     0,     0,  1880,     0,     0,
     0,     0,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,   947,     0,     0,     0,   287,     0,
     0,     0,    71,    72,   948,     0,    74,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1881,     0,     0,     0,   949,     0,   950,   951,   952,
   953,   954,   955,   956,   957,   958,   959,     0,     0,     0,
   960,     0,     0,   961,     0,     0,   962,     0,     0,   963,
     0,   964,   965,   966,   967,   968,   969,   970,   971,   972,
   973,   974,   975,   976,   977,   978,   979,     0,     0,     0,
   980,     0,     0,     0,     0,   981,     0,   949,   982,   950,
   951,   952,   953,   954,   955,   956,   957,   958,   959,     0,
     0,     0,   960,     0,     0,   961,     0,     0,   962,     0,
     0,   963,     0,   964,   965,   966,   967,   968,   969,   970,
   971,   972,   973,   974,   975,   976,   977,   978,   979,     0,
     0,     0,   980,     0,     0,     0,     0,   981,     0,     0,
   982,   949,     0,   950,   951,   952,   953,   954,   955,   956,
   957,   958,   959,     0,  1789,     0,   960,     0,     0,   961,
     0,     0,   962,     0,     0,   963,     0,   964,   965,   966,
   967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
   977,   978,   979,     0,     0,     0,   980,   947,     0,     0,
     0,   981,     0,     0,   982,    71,    72,   948,     0,    74,
     0,   272,   273,   274,   275,   276,  1790,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   947,
     0,     0,     0,     0,     0,     0,     0,    71,    72,   948,
     0,    74,     0,     0,     0,   272,   273,   274,   275,   276,
  1791,   277,   278,   279,   280,     0,  1882,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   947,     0,     0,     0,     0,     0,     0,
     0,    71,    72,   948,     0,    74,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1883,     0,     0,     0,   949,     0,   950,   951,   952,   953,
   954,   955,   956,   957,   958,   959,     0,     0,     0,   960,
     0,     0,   961,     0,     0,   962,     0,     0,   963,     0,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
   974,   975,   976,   977,   978,   979,     0,     0,     0,   980,
     0,     0,     0,     0,   981,     0,   949,   982,   950,   951,
   952,   953,   954,   955,   956,   957,   958,   959,     0,     0,
     0,   960,     0,     0,   961,     0,     0,   962,     0,     0,
   963,     0,   964,   965,   966,   967,   968,   969,   970,   971,
   972,   973,   974,   975,   976,   977,   978,   979,     0,     0,
     0,   980,     0,     0,     0,     0,   981,     0,     0,   982,
   949,     0,   950,   951,   952,   953,   954,   955,   956,   957,
   958,   959,     0,  1966,     0,   960,     0,     0,   961,     0,
     0,   962,     0,     0,   963,     0,   964,   965,   966,   967,
   968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
   978,   979,     0,     0,     0,   980,   947,     0,     0,     0,
   981,     0,     0,   982,    71,    72,   948,     0,    74,     0,
   272,   273,   274,   275,   276,  1972,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   947,     0,
     0,     0,     0,     0,     0,     0,    71,    72,   948,     0,
    74,     0,     0,     0,   272,   273,   274,   275,   276,  2007,
   277,   278,   279,   280,     0,  1976,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
   287,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   947,     0,     0,     0,     0,     0,     0,     0,
    71,    72,   948,     0,    74,     0,   916,   917,   918,   919,
   920,   921,   922,   923,     0,     0,   924,   925,   926,   927,
   928,   929,     0,   949,   930,   950,   951,   952,   953,   954,
   955,   956,   957,   958,   959,     0,     0,     0,   960,     0,
     0,   961,     0,     0,   962,     0,     0,   963,     0,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,   978,   979,     0,  1390,     0,   980,     0,
     0,     0,     0,   981,     0,   949,   982,   950,   951,   952,
   953,   954,   955,   956,   957,   958,   959,     0,     0,     0,
   960,     0,     0,   961,     0,     0,   962,     0,     0,   963,
     0,   964,   965,   966,   967,   968,   969,   970,   971,   972,
   973,   974,   975,   976,   977,   978,   979,     0,     0,     0,
   980,     0,     0,     0,     0,   981,     0,     0,   982,   949,
     0,   950,   951,   952,   953,   954,   955,   956,   957,   958,
   959,     0,  2009,     0,   960,     0,     0,   961,     0,     0,
   962,     0,     0,   963,     0,   964,   965,   966,   967,   968,
   969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
   979,     0,     0,     0,   980,   947,     0,     0,     0,   981,
     0,     0,   982,    71,    72,   948,     0,    74,     0,   272,
   273,   274,   275,   276,  2011,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,     0,
     0,     0,   126,   127,   128,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   130,   131,   132,   133,     0,  2012,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1229,   914,
   915,   916,   917,   918,   919,   920,   921,   922,   923,     0,
     0,   924,   925,   926,   927,   928,   929,     0,     0,   930,
     0,     0,   949,     0,   950,   951,   952,   953,   954,   955,
   956,   957,   958,   959,     0,     0,     0,   960,     0,     0,
   961,     0,     0,   962,     0,     0,   963,     0,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,   974,   975,
   976,   977,   978,   979,   126,   127,   128,   980,     0,     0,
     0,     0,   981,     0,     0,   982,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   130,   131,   132,   133,     0,
     0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   126,   127,     4,     0,
   914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
     0,     0,   924,   925,   926,   927,   928,   929,     0,     0,
   930,  2023,  1046,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   126,   127,
     4,   525,     0,   161,     0,     0,     0,     0,   162,     0,
     0,   163,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   135,   136,   137,   138,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   126,   127,     4,   914,   915,   916,   917,   918,   919,   920,
   921,   922,   923,     0,     0,   924,   925,   926,   927,   928,
   929,     0,     0,   930,     0,     0,     0,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   319,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   606,   595,   127,     4,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   161,     0,     0,     0,     0,
   162,     0,     0,   163,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   519,
     0,   477,     0,     0,     0,     0,     0,   607,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   161,     0,     0,
   520,     0,   162,     0,     0,   163,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   608,     0,     0,
     0,   579,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,   609,   287,   161,
     0,     0,     0,   494,   162,     0,     0,   163,   610,   611,
   612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
   622,   623,   624,   625,   626,   627,   628,   629,   630,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,   161,     0,     0,     0,   287,   162,     0,     0,   163,
   506,     0,     0,     0,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,   513,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,     0,     0,     0,     0,   161,     0,
     0,     0,     0,   162,     0,     0,   163,     0,     0,     0,
     0,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,   514,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,   515,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,   747,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,   748,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1005,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1006,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1007,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1175,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1357,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1358,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1359,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1464,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1472,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1481,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1663,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1688,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1689,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1693,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1699,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1706,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1726,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1845,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1853,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1859,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1860,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1935,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1937,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1960,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  2014,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  2016,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  2024,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,     0,   290,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     0,     0,   287,     0,     0,     0,   347,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,   753,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,  1174,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,  1191,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
  1523,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,  1652,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
     0,     0,  1653,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
     0,     0,     0,  1654,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
   287,     0,     0,     0,  1817,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,     0,  1820,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     0,     0,   287,     0,     0,     0,  1835,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,  1928,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,  2002,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,  2030,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,   320,     0,     0,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,   376,
     0,     0,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   496,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   497,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   498,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   499,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   500,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   501,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   502,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   503,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   504,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   505,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   507,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   508,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   509,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   510,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   511,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   512,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   522,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   652,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   749,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   750,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   751,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   752,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
   853,     0,     0,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   889,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,  1009,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,  1010,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
  1730,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,  1843,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,  1856,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,  1933,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,  1934,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,  1939,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,  1949,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,  1950,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,  1991,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,  1995,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
  2026,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
   914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
     0,     0,   924,   925,   926,   927,   928,   929,     0,     0,
   930,     0,     0,     0,  1543
};

static const short yycheck[] = {     3,
   173,    82,   485,   539,   771,    24,  1116,   330,   625,    82,
     5,   334,   103,   104,   550,     5,     5,    21,   311,   571,
     7,   431,   666,     0,   560,    23,   264,    31,   564,   322,
   323,   324,   568,  1585,  1037,     5,     5,     5,   331,     5,
  1043,  1044,    61,     3,  1596,     5,     3,     5,     5,     5,
  1602,     3,     3,     3,     5,     5,   606,   607,     7,  1611,
     5,     5,     5,   613,   237,  1617,  1618,    11,    12,    13,
    14,    15,   482,    17,   802,   803,   804,   805,     5,    69,
    69,     7,   107,     5,   252,    29,   111,   112,   113,   114,
   115,   116,   111,   112,   113,   114,   252,   116,     5,     7,
    23,    99,     5,   107,    64,     5,   599,   111,   112,   113,
   114,   115,   116,   117,     3,     7,     5,   121,   122,   123,
   254,   531,     5,   404,   297,   892,    69,   894,    11,    12,
    13,    14,    15,     5,    17,   257,   252,   259,   254,    11,
    12,    13,    14,    15,     5,    17,    29,     5,    23,   117,
    11,    12,   243,    11,    12,   478,   181,    29,   802,   803,
   804,   805,   181,   253,    64,   338,    69,   895,    29,    69,
   264,    29,   262,   264,     5,     6,    99,   181,     9,    10,
    13,    14,    15,   260,    17,    23,   260,   915,   916,   917,
   918,   919,   920,   921,   922,   923,   924,   925,   926,   927,
   928,   929,   930,     5,   295,   933,   260,   255,   260,    11,
    12,    13,    14,    15,   262,    17,    86,    13,    14,    15,
  1223,    17,    23,   716,    99,    82,   230,    29,    13,    14,
    15,    75,    17,   253,   117,   118,   119,   120,     5,    96,
   110,     5,   262,    69,    11,    12,    13,    14,    15,   530,
    17,   895,    96,   534,   143,    81,   254,   244,   251,     5,
     5,    99,    29,  1266,   257,    67,   255,   257,   257,   264,
   260,   915,   916,   917,   918,   919,   920,   921,   922,   923,
   924,   925,   926,   927,   928,   929,   930,   244,   260,   933,
   260,   260,   465,   261,   260,   314,   260,   378,    99,   260,
   260,    65,   260,   263,   260,   257,   263,   311,   601,   719,
   260,   260,   263,   263,   257,   260,   260,   261,   322,   323,
   324,   210,  1050,   404,    69,   260,    18,   331,    78,    79,
   252,   404,     5,   260,   260,   230,  1888,   230,    11,    12,
    13,    14,    15,     5,    17,  1897,   254,   254,   243,    11,
    12,    13,    14,    15,   257,    17,    29,   257,   254,   254,
     6,   107,   453,   260,   645,     5,   116,    29,   264,   258,
    82,   117,     5,     6,    86,    87,     9,    10,   261,   254,
   130,   260,  1385,    13,    14,    15,   254,    17,   260,   261,
   260,   261,   260,    18,    86,   718,    88,   260,   229,   260,
   261,   264,   260,   261,   261,   409,  1050,    99,    13,    14,
    15,   584,    17,   586,   587,   588,   254,   261,  1970,   423,
   112,  1973,    13,    14,    15,     7,    17,   260,   261,   433,
     7,  1983,  1984,   254,   438,   261,   253,    96,   130,    98,
   444,     7,   446,   264,   254,   262,   450,   106,    82,    83,
   260,   254,     7,   254,   264,   255,  2008,   260,   253,   261,
    18,     7,   262,    88,   260,   261,    96,   262,  1085,  1086,
   254,   245,   246,   247,    82,   260,   261,   251,    86,     7,
   255,   485,     7,   257,    68,   119,   120,   262,    96,  1217,
    82,   125,   255,   260,   261,    86,    88,    86,     7,   262,
  1228,   592,    86,   133,    96,    96,     7,    96,   133,    98,
   140,   261,    96,    97,   254,   140,   141,  1000,   260,   610,
   260,   105,   264,   107,     8,   606,   607,   161,   162,   163,
    88,     7,   613,   260,   255,   255,   161,   264,   861,   164,
   165,   262,   262,   134,   135,   136,   137,   138,   139,   261,
    69,    70,    71,    72,    73,    74,    75,    76,    77,  1203,
  1110,    80,   260,   261,   737,     7,  1569,    86,  1571,   261,
     7,   744,  1122,  1217,    89,    90,    91,    92,    93,    94,
    99,     7,   140,   255,  1228,   255,   255,   260,   261,   252,
   262,     7,   262,   262,     7,   599,   229,   601,   260,   261,
     7,     7,   261,   161,   162,     7,   239,   241,   242,   242,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
   189,   261,  1184,   724,   725,   654,   261,   271,   272,   273,
   274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
   284,   285,   286,   261,   255,   260,   261,   252,   683,   255,
   294,   262,   666,   682,   683,   690,   262,   686,   255,   261,
   261,   690,   261,   253,   255,   262,     5,   261,     7,   683,
   699,   262,  1234,   254,   318,   319,   690,    96,    96,   462,
    19,    20,    21,   260,   255,   255,   260,   264,    86,   333,
  1236,   262,   262,   261,   112,  1815,  1816,    36,    96,    13,
    14,    15,   716,    17,   243,   244,   245,   246,   255,   254,
  1013,  1014,  1015,  1016,   112,   262,   134,   254,   116,   260,
   261,   140,   254,   262,  1027,   243,   244,   245,   246,   247,
   248,   760,   261,   251,   378,  1297,   261,   231,   232,   233,
   234,   235,     7,   237,   238,   239,   240,   255,   261,   243,
   244,   245,   246,   247,   262,   399,   130,   251,     5,     6,
   404,   260,   406,   257,     6,   264,   254,   261,   186,   188,
   260,   190,   555,    96,   264,    98,    99,   100,   101,   102,
   103,   104,   261,   262,  1087,  1088,   261,   262,   802,   803,
   804,   805,    98,   212,   808,   261,   262,  1574,  1575,  1576,
   262,   263,   108,   109,   110,     7,  1109,   990,   991,   992,
   993,  1549,   261,   262,   254,   231,   232,   233,   234,   235,
   254,   237,   238,   239,   240,   254,  1839,   243,   244,   245,
   246,   247,   260,   261,   254,   251,   480,   140,   260,   261,
   143,   257,   261,   261,   254,   140,   254,  1150,   143,   493,
   494,   154,   155,   192,   254,   158,   159,   260,   261,   154,
   155,   156,   506,   261,    13,    14,    15,  1360,    17,   513,
   514,   515,   260,   261,   254,   519,   520,   191,   192,   193,
   194,   895,   254,  1537,   528,   245,   246,   247,   248,   254,
  1073,   251,   254,   676,     7,  1549,   254,   911,   912,   260,
   261,   915,   916,   917,   918,   919,   920,   921,   922,   923,
   924,   925,   926,   927,   928,   929,   930,   946,   254,   933,
   703,   254,   260,   261,   254,     3,   261,   262,   254,     7,
   261,   262,   254,   947,   254,   579,   580,   254,   261,   722,
   261,   262,  1502,  1503,  1504,  1958,  1506,   254,     7,   261,
   262,  1371,   261,   262,   254,   261,   739,   254,   261,   261,
   262,   254,   606,   607,  1524,   254,   261,   611,   612,   613,
   614,   261,   262,   261,   262,  1278,   620,   254,   622,   261,
   262,  1284,     7,  1403,    62,   999,  1000,   261,   262,  1409,
    68,  1411,   261,   262,   261,   262,   260,   261,     7,  1013,
  1014,  1015,  1016,    81,   262,    83,   261,   262,   261,   262,
     3,     4,     5,  1027,     5,   261,   262,    95,   662,  1110,
  1121,    99,  1123,     7,  1444,   261,   262,   261,   262,   254,
  1450,  1122,   260,   111,   261,   262,  1050,    30,    31,    32,
    33,    34,   261,   262,    81,   254,    83,    84,   262,    86,
  1151,   261,   262,     7,   132,   260,   261,   261,   262,    96,
     5,   261,   262,  1840,  1078,   254,    11,    12,    13,    14,
    15,   715,    17,  1087,  1088,   260,   113,   114,   115,  1382,
   261,   262,     5,  1097,    29,     7,   616,   617,     5,  1392,
   230,  1105,  1106,   130,   254,  1109,   260,   741,   742,   743,
     8,   260,   260,   747,   748,  1119,  1120,   185,   260,   187,
  1124,   262,   260,   260,   255,  1129,   261,   255,    63,   122,
   123,   124,   125,   126,   127,   128,  1686,   130,  1688,   234,
   235,   262,   237,   238,   239,   240,  1150,   255,   243,   244,
   245,   246,   247,     7,  1158,  1159,   251,   184,   255,   230,
   230,  1165,   257,  1167,   230,     5,   260,  1171,     5,   260,
  1463,     5,   260,     5,     5,   260,   949,   260,  1182,   260,
   230,   255,   231,   232,   233,   234,   235,  1737,   237,   238,
   239,   240,     5,  1743,   243,   244,   245,   246,   247,     5,
   260,   260,   251,     5,   260,     5,   260,     5,   257,   260,
     5,     5,   206,  1217,     7,   260,   989,   851,   260,   260,
   854,  1514,   260,   255,  1228,     5,   254,   254,  1001,   130,
   261,  1004,     7,     5,   261,   197,   198,   199,   200,   201,
   202,   203,   204,   205,  1017,  1018,  1019,  1020,     7,   883,
     7,  1024,     7,   261,     7,   260,     7,   231,   232,   233,
   234,   235,  1812,   237,   238,   239,   240,     7,   261,   243,
   244,   245,   246,   247,  1278,   254,   254,   251,     7,     7,
  1284,     7,     7,   257,  1577,   230,     7,   231,   232,   233,
   234,   235,     5,   237,   238,   239,   240,     7,   932,   243,
   244,   245,   246,   247,     7,     7,   260,   251,     7,     7,
     7,     7,     7,   257,     7,   261,     5,     7,   260,   231,
   232,   233,   234,   235,  1874,   237,   238,   239,   240,     8,
   262,   243,   244,   245,   246,   247,     8,     5,     5,   251,
  1823,     5,   260,   260,   260,   257,   260,     3,     7,  1885,
   260,   255,  1525,     7,  1527,  1528,  1360,     5,  1131,  1132,
     7,     7,   230,   257,     7,     5,     7,   260,     3,     4,
     5,  1005,  1006,  1007,     7,     7,     7,     7,  1382,   243,
   244,   245,   246,   247,     7,  1935,   261,   251,  1392,    24,
    25,    26,    27,   257,   255,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
   262,  1502,  1503,  1504,  1197,  1506,  1199,     7,    81,     7,
    83,    84,    85,  1206,   239,     6,   260,     7,   231,   232,
   233,   234,   235,  1524,   237,   238,   239,   240,     7,    66,
   243,   244,   245,   246,   247,     5,   255,   254,   251,  1463,
     3,     5,   254,   254,   257,   254,   254,   254,   254,   122,
   123,   124,   125,   126,   127,   128,  1110,   130,   131,  2031,
   254,     7,   260,   260,   260,   255,   254,   260,  1122,     3,
     4,     5,   237,   238,   239,   240,   262,   260,   243,   244,
   245,   246,   247,     5,   260,     5,   251,     5,   260,  1143,
  1514,  1145,   257,  1147,   260,   258,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,  1175,   262,   260,     3,  1549,   254,   254,   239,   261,
   251,   260,   231,   232,   233,   234,   235,  1561,   237,   238,
   239,   240,   254,     7,   243,   244,   245,   246,   247,   254,
   254,   254,   251,  1577,   253,     7,   254,  1581,   257,  1583,
   254,   254,   258,  1356,   231,   232,   233,   234,   235,   254,
   237,   238,   239,   240,   260,     5,   243,   244,   245,   246,
   247,     5,   254,   254,   251,  1686,     5,  1688,   261,   244,
   257,  1904,   254,     5,   249,   254,   254,   252,   254,     5,
   254,     5,     5,   260,     5,   254,   261,   254,   254,  1922,
   254,     5,   260,   254,   254,  1726,  1727,   255,   260,   254,
   254,   260,  1733,   255,   260,   254,   254,   260,   255,  1822,
   261,   231,   232,   233,   234,   235,  1737,   237,   238,   239,
   240,   262,  1743,   243,   244,   245,   246,   247,   255,     5,
   260,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,     5,  1456,   243,   244,   245,   246,   247,  1462,
     5,     5,   251,  1466,     5,     5,  1469,     5,   257,     5,
     3,  1474,     3,     5,   260,     5,   254,   254,     7,     7,
     5,     5,  2005,  1486,     5,     5,     5,     5,  1809,     5,
  1811,     5,     5,  1357,  1358,  1359,  1499,     5,  1501,     5,
   244,  1812,     5,     5,     5,   249,     5,    81,   252,    83,
    84,    85,     5,     5,     5,     5,   260,   237,   238,   239,
   240,     5,  1386,   243,   244,   245,   246,   247,   248,     7,
   261,   251,  1535,  1536,   257,  1538,   262,     3,     4,     5,
     6,   262,     7,     9,     7,     7,     7,     7,   122,   123,
   124,   125,   126,   127,   128,     7,   130,   131,    24,    25,
    26,    27,    28,  1874,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,  1823,
     7,     7,     3,     7,     7,  1459,  1460,     7,     7,     7,
  1464,     7,     7,  1467,  1468,     8,   260,   255,  1472,   262,
   254,  1475,  1476,  1477,  1478,     7,     7,  1481,  1482,  1483,
     7,  1485,     7,   260,  1935,  1489,  1490,     5,     7,     5,
  1494,  1495,    81,     7,    83,     7,     7,    86,  1502,  1503,
  1504,  1505,  1506,     7,     7,     7,     7,  1511,     7,     7,
     7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
  1524,     7,     5,     5,   254,   254,    81,     7,    83,   254,
  1904,    86,     5,   122,   123,   124,   125,   126,   127,   128,
     5,   130,   255,     7,     7,     7,     7,   261,  1922,     7,
  1693,     7,     7,     7,   255,   255,  1699,   262,   262,   262,
     3,     4,     5,  1706,   262,   262,   262,   122,   123,   124,
   125,   126,   127,   128,   262,   130,   262,     7,   255,  1722,
   262,   255,     7,   262,     7,     3,   261,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,   255,
   255,   261,   228,   234,   235,   236,   237,   238,   239,   240,
     7,  2005,   243,   244,   245,   246,   247,   248,   244,   262,
   251,  1645,   262,   249,  1648,   262,   252,   262,   262,   231,
   232,   233,   234,   235,   260,   237,   238,   239,   240,  1663,
     7,   243,   244,   245,   246,   247,   262,   262,   262,   251,
   260,   262,   261,   260,   262,   257,   262,   262,   261,   122,
   262,   260,  1686,  1687,  1688,  1689,   129,   260,   231,   232,
   233,   234,   235,   262,   237,   238,   239,   240,   262,   262,
   243,   244,   245,   246,   247,  1848,   261,   112,   251,     7,
  1853,   255,  1855,     7,   257,   262,   254,  1721,     7,  1862,
   261,  1725,     7,     7,  1728,  1729,     3,     7,     7,     7,
   260,     7,     7,  1737,     3,     4,     5,     5,   260,  1743,
     7,     5,     5,     5,     5,    13,    14,    15,     7,    17,
  1754,  1755,  1756,  1757,  1758,    24,    25,    26,    27,  1902,
   260,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,   260,     7,   260,   260,
   260,     7,     5,     5,   237,     5,     5,     5,     5,     5,
   243,   244,     7,   260,     5,  1948,   249,   260,  1812,   252,
   261,   255,   255,   256,   257,   258,   255,   260,   255,   231,
   232,   233,   234,   235,   236,   237,   238,   239,   240,   255,
  1834,   243,   244,   245,   246,   247,   248,     5,     7,   251,
  1844,  1845,  1846,     7,   255,  1849,   255,  1851,   262,   262,
   262,   255,   262,     7,   262,  1859,  1860,     7,     7,     7,
     7,   262,   255,   255,   262,   262,   262,   262,   255,   255,
  1874,  1875,   262,   262,   142,   260,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   260,   262,   255,   157,
   255,   261,   160,   255,   255,   163,     7,  1901,   166,   255,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   261,   261,     7,   187,
     7,     7,     7,  1927,   192,     7,     7,   195,     5,     7,
     5,  1935,   135,  1937,     7,     7,     7,     7,   207,     7,
     7,   210,     7,     7,     7,     7,   231,   232,   233,   234,
   235,   261,   237,   238,   239,   240,  1960,   261,   243,   244,
   245,   246,   247,     7,   260,   257,   251,     7,     7,     7,
     7,     5,   257,   260,   111,   244,     7,     7,   260,   262,
   249,   262,   255,   252,    16,   255,  1990,     7,   262,  1993,
   262,   260,     5,   261,     3,     4,     5,   262,   255,   255,
     7,     7,   262,     7,   262,   260,   260,     7,     7,     7,
  2014,     7,  2016,     7,     5,     5,     5,   254,   262,   260,
  2024,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,     3,     4,     5,     6,   255,   255,     9,
   255,     5,     5,     5,   255,   261,     7,     4,     7,     7,
   260,     7,   261,   261,    24,    25,    26,    27,    28,     7,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,     3,     4,     5,     7,   260,
     7,     7,     7,   122,     7,     7,     7,     7,     7,    69,
   129,     7,     7,     7,   260,   260,    24,    25,    26,    27,
   261,     7,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,   260,   231,   232,
   233,   234,   235,   262,   237,   238,   239,   240,     7,     7,
   243,   244,   245,   246,   247,   255,   255,   260,   251,    62,
     7,     7,     7,     7,   257,     7,   132,   231,   232,   233,
   234,   235,     7,   237,   238,   239,   240,     5,     7,   243,
   244,   245,   246,   247,   261,     0,     0,   251,  1077,  1076,
   943,   653,  1671,   257,   812,  1210,  1344,  1520,  1741,   574,
   699,   122,   591,    -1,   227,    -1,    -1,    -1,   237,     5,
    -1,    -1,    -1,    -1,   243,   244,    -1,    13,    14,    15,
   249,    17,    -1,   252,    -1,    -1,    -1,    -1,   257,   258,
    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,
    -1,    -1,    19,    20,    21,    22,    -1,    -1,   228,    -1,
    -1,     5,    29,    -1,    -1,    -1,    -1,    -1,    -1,    13,
    14,    15,    -1,    17,   244,    -1,    -1,    -1,    -1,   249,
    -1,    -1,   252,    -1,    -1,    -1,    -1,   257,     7,    -1,
   260,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    81,     5,    83,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    15,   244,    17,    95,    -1,
    -1,   249,    99,    -1,   252,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   260,    -1,   111,    -1,   142,    -1,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,     7,    -1,
    -1,   157,    -1,    -1,   160,   132,    -1,   163,    -1,    -1,
   166,    -1,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,    -1,    -1,    -1,    -1,   192,    -1,   142,   195,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    -1,    -1,    -1,   157,    -1,    -1,   160,    -1,   185,   163,
   187,    -1,   166,    -1,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,   192,    -1,
    -1,   195,   142,    -1,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,    -1,   261,    -1,   157,    -1,    -1,
   160,    -1,    -1,   163,    -1,    -1,   166,    -1,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,     5,    -1,
    -1,    -1,   192,    -1,    -1,   195,    13,    14,    15,    -1,
    17,    -1,   231,   232,   233,   234,   235,   261,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,   233,
   234,   235,   251,   237,   238,   239,   240,    -1,   257,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
     5,    -1,    -1,   257,    -1,    -1,    -1,    -1,    13,    14,
    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   261,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,
    -1,    -1,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,     5,    -1,    -1,    -1,   257,    -1,
    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     7,    -1,    -1,    -1,   142,    -1,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
    -1,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,
   187,    -1,    -1,    -1,    -1,   192,    -1,   142,   195,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,
    -1,   166,    -1,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,    -1,    -1,    -1,    -1,   192,    -1,    -1,
   195,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,    -1,   261,    -1,   157,    -1,    -1,   160,
    -1,    -1,   163,    -1,    -1,   166,    -1,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,    -1,    -1,    -1,   187,     5,    -1,    -1,
    -1,   192,    -1,    -1,   195,    13,    14,    15,    -1,    17,
    -1,   231,   232,   233,   234,   235,   261,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    -1,    17,    -1,    -1,    -1,   231,   232,   233,   234,   235,
   261,   237,   238,   239,   240,    -1,     7,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,
    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     7,    -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,   157,
    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
    -1,    -1,    -1,    -1,   192,    -1,   142,   195,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,    -1,    -1,
    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,
   166,    -1,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,    -1,    -1,    -1,    -1,   192,    -1,    -1,   195,
   142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,    -1,   261,    -1,   157,    -1,    -1,   160,    -1,
    -1,   163,    -1,    -1,   166,    -1,   168,   169,   170,   171,
   172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,     5,    -1,    -1,    -1,
   192,    -1,    -1,   195,    13,    14,    15,    -1,    17,    -1,
   231,   232,   233,   234,   235,   261,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,   231,   232,   233,   234,   235,   261,
   237,   238,   239,   240,    -1,     7,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,
   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,    -1,   233,   234,   235,   236,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,   248,    -1,   142,   251,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,
    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,    -1,     8,    -1,   187,    -1,
    -1,    -1,    -1,   192,    -1,   142,   195,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
    -1,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,
   187,    -1,    -1,    -1,    -1,   192,    -1,    -1,   195,   142,
    -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,    -1,   261,    -1,   157,    -1,    -1,   160,    -1,    -1,
   163,    -1,    -1,   166,    -1,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,    -1,    -1,    -1,   187,     5,    -1,    -1,    -1,   192,
    -1,    -1,   195,    13,    14,    15,    -1,    17,    -1,   231,
   232,   233,   234,   235,   261,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    -1,
    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    24,    25,    26,    27,    -1,   261,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,   231,
   232,   233,   234,   235,   236,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,   248,    -1,    -1,   251,
    -1,    -1,   142,    -1,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,    -1,
   160,    -1,    -1,   163,    -1,    -1,   166,    -1,   168,   169,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,     3,     4,     5,   187,    -1,    -1,
    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,    -1,
    -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,     3,     4,     5,    -1,
   231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,   248,    -1,    -1,
   251,   261,   253,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,     3,     4,
     5,     6,    -1,   244,    -1,    -1,    -1,    -1,   249,    -1,
    -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     3,     4,     5,   231,   232,   233,   234,   235,   236,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
   248,    -1,    -1,   251,    -1,    -1,    -1,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    75,     3,     4,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
   249,    -1,    -1,   252,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,     8,
    -1,   228,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,
     8,    -1,   249,    -1,    -1,   252,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,
    -1,     8,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,    -1,   196,   257,   244,
    -1,    -1,    -1,   262,   249,    -1,    -1,   252,   207,   208,
   209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,   224,   225,   226,   227,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,   244,    -1,    -1,    -1,   257,   249,    -1,    -1,   252,
   262,    -1,    -1,    -1,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,
   257,   237,   238,   239,   240,   262,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,
    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
    -1,    -1,    -1,   249,    -1,    -1,   252,    -1,    -1,    -1,
    -1,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,   262,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,   231,   232,   233,   234,   235,   257,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,   257,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,
   257,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,
   235,   257,   237,   238,   239,   240,   262,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,
   234,   235,   257,   237,   238,   239,   240,   262,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,
   233,   234,   235,   257,   237,   238,   239,   240,   262,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,
   232,   233,   234,   235,   257,   237,   238,   239,   240,   262,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
   231,   232,   233,   234,   235,   257,   237,   238,   239,   240,
   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,   231,   232,   233,   234,   235,   257,   237,   238,   239,
   240,   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,   262,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,   231,   232,   233,   234,   235,   257,   237,
   238,   239,   240,   262,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,   257,
   237,   238,   239,   240,   262,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,
   257,   237,   238,   239,   240,   262,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,
   235,   257,   237,   238,   239,   240,   262,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,
   234,   235,   257,   237,   238,   239,   240,   262,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,
   233,   234,   235,   257,   237,   238,   239,   240,   262,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,
   232,   233,   234,   235,   257,   237,   238,   239,   240,   262,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
   231,   232,   233,   234,   235,   257,   237,   238,   239,   240,
   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,   231,   232,   233,   234,   235,   257,   237,   238,   239,
   240,   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,   262,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,   231,   232,   233,   234,   235,   257,   237,
   238,   239,   240,   262,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,   257,
   237,   238,   239,   240,   262,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,
   257,   237,   238,   239,   240,   262,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,
   235,   257,   237,   238,   239,   240,   262,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,   233,
   234,   235,   257,   237,   238,   239,   240,   262,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,
   233,   234,   235,   257,   237,   238,   239,   240,   262,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,
   232,   233,   234,   235,   257,   237,   238,   239,   240,   262,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
   231,   232,   233,   234,   235,   257,   237,   238,   239,   240,
   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,   231,   232,   233,   234,   235,   257,   237,   238,   239,
   240,   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,   262,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,   231,   232,   233,   234,   235,   257,   237,
   238,   239,   240,   262,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,   257,
   237,   238,   239,   240,   262,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,   231,   232,   233,   234,   235,
   257,   237,   238,   239,   240,   262,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,
    -1,   257,    -1,    -1,    -1,   261,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
    -1,    -1,   257,    -1,    -1,    -1,   261,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,
   261,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,
    -1,   261,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
    -1,    -1,   261,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,
    -1,    -1,    -1,   261,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,
   257,    -1,    -1,    -1,   261,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,
    -1,   257,    -1,    -1,    -1,   261,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
    -1,    -1,   257,    -1,    -1,    -1,   261,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,   261,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,   253,    -1,    -1,    -1,   257,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,   253,
    -1,    -1,    -1,   257,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,
   257,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,
    -1,   257,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
   255,    -1,   257,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,   255,    -1,   257,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,
   257,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,
    -1,   257,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
   255,    -1,   257,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,   255,    -1,   257,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,
   257,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
   253,    -1,    -1,    -1,   257,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,
    -1,   257,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
   255,    -1,   257,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,
    -1,   255,    -1,   257,   231,   232,   233,   234,   235,    -1,
   237,   238,   239,   240,    -1,    -1,   243,   244,   245,   246,
   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,
   257,   231,   232,   233,   234,   235,    -1,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,
    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,    -1,
    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,   255,
    -1,   257,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,   255,    -1,   257,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
    -1,    -1,    -1,   255,    -1,   257,   231,   232,   233,   234,
   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,
   245,   246,   247,    -1,    -1,    -1,   251,    -1,    -1,    -1,
   255,    -1,   257,   231,   232,   233,   234,   235,    -1,   237,
   238,   239,   240,    -1,    -1,   243,   244,   245,   246,   247,
    -1,    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,
   231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,   248,    -1,    -1,
   251,    -1,    -1,    -1,   255
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 375 "GetDP.y"
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
    ;
    break;}
case 2:
#line 409 "GetDP.y"
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
    ;
    break;}
case 4:
#line 452 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 475 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 490 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 492 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 494 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 496 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 498 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 500 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 502 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 504 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 506 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 508 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 510 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 512 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 514 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 516 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 518 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 520 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 522 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 524 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 526 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 528 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 530 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 538 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 555 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 562 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 564 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 569 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 571 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 578 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 54:
#line 588 "GetDP.y"
{ 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      i = (int)yyvsp[-3].d ;
      List_Add(Group_S.InitialList, &i) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;
    break;}
case 55:
#line 598 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 56:
#line 605 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 57:
#line 615 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 58:
#line 620 "GetDP.y"
{
      Group_S.FunctionType = yyvsp[-3].i ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      if (!Nbr_Index)  Group_S.InitialList = yyvsp[0].l ;
      else             Group_S.InitialList = yyvsp[0].l ;

      ListOfInitialList2_L = ListOfInitialSuppList_L ;  /* Init pour SuppListOfRegion */
    ;
    break;}
case 59:
#line 632 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 60:
#line 641 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 61:
#line 652 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 62:
#line 657 "GetDP.y"
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
    ;
    break;}
case 63:
#line 694 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 64:
#line 697 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 709 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 66:
#line 711 "GetDP.y"
{ 
      if (!Nbr_Index)
	yyval.l = NULL ;
      else {
	List_Reset(ListOfInitialList2_L) ;
	InitialList2_L = NULL ;
	for (k = 0 ; k < Nbr_Index ; k++)
	  List_Add(ListOfInitialList2_L, &InitialList2_L) ;
      }
    ;
    break;}
case 67:
#line 727 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 68:
#line 730 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 69:
#line 733 "GetDP.y"
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
    ;
    break;}
case 70:
#line 784 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 71:
#line 797 "GetDP.y"
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
    ;
    break;}
case 72:
#line 821 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 73:
#line 828 "GetDP.y"
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
    ;
    break;}
case 74:
#line 841 "GetDP.y"
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
    ;
    break;}
case 75:
#line 859 "GetDP.y"
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
    ;
    break;}
case 76:
#line 882 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 77:
#line 886 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	List_Read(yyvsp[-1].l, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      yyval.l = ListOfInt_L;
    ;
    break;}
case 78:
#line 898 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 907 "GetDP.y"
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
    ;
    break;}
case 80:
#line 921 "GetDP.y"
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
    ;
    break;}
case 81:
#line 955 "GetDP.y"
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
    ;
    break;}
case 83:
#line 979 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 84:
#line 989 "GetDP.y"
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
    ;
    break;}
case 87:
#line 1011 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 1016 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 1017 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 1024 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].i ; ;
    break;}
case 94:
#line 1044 "GetDP.y"
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
    ;
    break;}
case 95:
#line 1064 "GetDP.y"
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
    ;
    break;}
case 99:
#line 1117 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 100:
#line 1137 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 1143 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 1149 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1152 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1159 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 106:
#line 1170 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 107:
#line 1173 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1179 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 109:
#line 1183 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 111:
#line 1195 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_TEST ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(Current_WholeQuantity_L, List_Nbr(Current_WholeQuantity_L)-1);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);
      List_Add(ListOfPointer2_L, &WholeQuantity_P);

      Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 112:
#line 1208 "GetDP.y"
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
    ;
    break;}
case 113:
#line 1222 "GetDP.y"
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
    ;
    break;}
case 114:
#line 1237 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1243 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1249 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1255 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1261 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1267 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1273 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1279 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1285 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1291 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1297 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1303 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1309 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1315 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1321 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1327 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1333 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1340 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1348 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 135:
#line 1361 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
#line 1367 "GetDP.y"
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
    ;
    break;}
case 137:
#line 1441 "GetDP.y"
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
    ;
    break;}
case 138:
#line 1475 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1484 "GetDP.y"
{ 
      if(yyvsp[0].i!=1 && yyvsp[0].i!=3 && yyvsp[0].i!=4) /* Modification for using the previous result of a Quantity */
	vyyerror("Wrong number of arguments for discrete quantity evaluation (%d)", yyvsp[0].i) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = yyvsp[0].i ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[-1].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 140:
#line 1496 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1498 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 142:
#line 1510 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 143:
#line 1512 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ATANTERIORTIMESTEP ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.AtAnteriorTimeStep.TimeStep = yyvsp[-1].i ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 144:
#line 1524 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 145:
#line 1526 "GetDP.y"
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
    ;
    break;}
case 146:
#line 1540 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-6].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHJacNL", yyvsp[-6].c) ;
      WholeQuantity_S.Type = WQ_MHJACNL ; 
      WholeQuantity_S.Case.MHJacNL.Index = i ;
      WholeQuantity_S.Case.MHJacNL.NbrPoints = (int)yyvsp[-3].d ;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1552 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1558 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 149:
#line 1564 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 150:
#line 1566 "GetDP.y"
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
    ;
    break;}
case 151:
#line 1595 "GetDP.y"
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
    ;
    break;}
case 152:
#line 1621 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError){
	vyyerror("Unknown current value: $%s", yyvsp[0].c);
	Get_Valid_SXP(Current_Value);
      }
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1634 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1640 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1647 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1653 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1660 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1667 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_POSTSAVE ;
      WholeQuantity_S.Case.PostSave.Value = (struct Value *)Add_PostSave(yyvsp[0].c) ;
      printf("PostSave %p\n", (struct Value *)Add_PostSave(yyvsp[0].c)) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1675 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 160:
#line 1682 "GetDP.y"
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
    ;
    break;}
case 161:
#line 1699 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 162:
#line 1700 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 163:
#line 1701 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 164:
#line 1706 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 165:
#line 1707 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 166:
#line 1713 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 167:
#line 1716 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 168:
#line 1719 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 169:
#line 1735 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 170:
#line 1740 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 171:
#line 1747 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 173:
#line 1756 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 174:
#line 1761 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 175:
#line 1768 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 176:
#line 1771 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 177:
#line 1778 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 179:
#line 1788 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 180:
#line 1791 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 181:
#line 1794 "GetDP.y"
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
    ;
    break;}
case 182:
#line 1832 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 183:
#line 1838 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 184:
#line 1845 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 186:
#line 1858 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 187:
#line 1865 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 188:
#line 1868 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 189:
#line 1875 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 190:
#line 1878 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 191:
#line 1885 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 193:
#line 1897 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 194:
#line 1907 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 195:
#line 1917 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 196:
#line 1924 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 197:
#line 1927 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 198:
#line 1934 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 200:
#line 1950 "GetDP.y"
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
    ;
    break;}
case 201:
#line 1998 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 2001 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 2004 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 204:
#line 2007 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 205:
#line 2010 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 206:
#line 2021 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 209:
#line 2032 "GetDP.y"
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
    ;
    break;}
case 211:
#line 2057 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 213:
#line 2071 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 214:
#line 2077 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 215:
#line 2084 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 216:
#line 2093 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 217:
#line 2096 "GetDP.y"
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
    ;
    break;}
case 218:
#line 2118 "GetDP.y"
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
    ;
    break;}
case 219:
#line 2133 "GetDP.y"
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
    ;
    break;}
case 220:
#line 2153 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 221:
#line 2162 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 223:
#line 2176 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 224:
#line 2186 "GetDP.y"
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
    ;
    break;}
case 225:
#line 2211 "GetDP.y"
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
    ;
    break;}
case 226:
#line 2236 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 227:
#line 2241 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 228:
#line 2249 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 229:
#line 2257 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 230:
#line 2266 "GetDP.y"
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
    ;
    break;}
case 231:
#line 2284 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 232:
#line 2293 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 233:
#line 2301 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 234:
#line 2309 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 235:
#line 2319 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 236:
#line 2329 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 237:
#line 2339 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 238:
#line 2359 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 240:
#line 2370 "GetDP.y"
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
    ;
    break;}
case 243:
#line 2399 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 245:
#line 2412 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 246:
#line 2418 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 247:
#line 2425 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 248:
#line 2434 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2437 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2440 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 251:
#line 2443 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 252:
#line 2450 "GetDP.y"
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
    ;
    break;}
case 253:
#line 2466 "GetDP.y"
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
    ;
    break;}
case 254:
#line 2515 "GetDP.y"
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
    ;
    break;}
case 256:
#line 2536 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 257:
#line 2539 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 258:
#line 2544 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 259:
#line 2549 "GetDP.y"
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
    ;
    break;}
case 260:
#line 2563 "GetDP.y"
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
    ;
    break;}
case 261:
#line 2583 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 262:
#line 2588 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 263:
#line 2593 "GetDP.y"
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
    ;
    break;}
case 264:
#line 2617 "GetDP.y"
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
    ;
    break;}
case 266:
#line 2677 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 267:
#line 2680 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 268:
#line 2689 "GetDP.y"
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
    ;
    break;}
case 269:
#line 2755 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 270:
#line 2759 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 271:
#line 2766 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 273:
#line 2775 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 274:
#line 2780 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 275:
#line 2783 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2790 "GetDP.y"
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
    ;
    break;}
case 277:
#line 2806 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 278:
#line 2812 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 279:
#line 2815 "GetDP.y"
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
    ;
    break;}
case 280:
#line 2834 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", yyvsp[0].c) ;
      else {
	List_Add(yyval.l, &i) ; j = i+1 ;
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 281:
#line 2846 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 282:
#line 2852 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 283:
#line 2855 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_BasisFunction_L,
			       yyvsp[0].c, fcmp_BasisFunction_NameOfCoef)) < 0)
	vyyerror("Unknown BasisFunctionCoef: %s", yyvsp[0].c) ;
      else {
	List_Add(yyvsp[-2].l, &i) ; j = i+1 ;
      }
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 284:
#line 2870 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 285:
#line 2874 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 286:
#line 2883 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 288:
#line 2894 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 289:
#line 2899 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 290:
#line 2909 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 291:
#line 2922 "GetDP.y"
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
    ;
    break;}
case 292:
#line 2937 "GetDP.y"
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

    ;
    break;}
case 293:
#line 3011 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 295:
#line 3027 "GetDP.y"
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
    ;
    break;}
case 296:
#line 3060 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 297:
#line 3063 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 298:
#line 3066 "GetDP.y"
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
    ;
    break;}
case 299:
#line 3112 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 301:
#line 3122 "GetDP.y"
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
    ;
    break;}
case 304:
#line 3150 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 306:
#line 3162 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 307:
#line 3168 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 308:
#line 3175 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 310:
#line 3187 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 311:
#line 3193 "GetDP.y"
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
    ;
    break;}
case 312:
#line 3207 "GetDP.y"
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
    ;
    break;}
case 314:
#line 3227 "GetDP.y"
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
    ;
    break;}
case 316:
#line 3250 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 317:
#line 3253 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 318:
#line 3257 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 319:
#line 3260 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 320:
#line 3271 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 321:
#line 3277 "GetDP.y"
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
    ;
    break;}
case 322:
#line 3290 "GetDP.y"
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
     
    ;
    break;}
case 323:
#line 3317 "GetDP.y"
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
    ;
    break;}
case 324:
#line 3358 "GetDP.y"
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
    ;
    break;}
case 325:
#line 3384 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 326:
#line 3389 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 327:
#line 3395 "GetDP.y"
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

    ;
    break;}
case 328:
#line 3706 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 329:
#line 3711 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3720 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 331:
#line 3729 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 332:
#line 3738 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 334:
#line 3746 "GetDP.y"
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
    ;
    break;}
case 335:
#line 3786 "GetDP.y"
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
    ;
    break;}
case 336:
#line 3801 "GetDP.y"
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
    ;
    break;}
case 337:
#line 3825 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 338:
#line 3830 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 339:
#line 3839 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 340:
#line 3842 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 341:
#line 3845 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 342:
#line 3848 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 343:
#line 3859 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 345:
#line 3870 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 346:
#line 3880 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 347:
#line 3890 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 348:
#line 3904 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 350:
#line 3916 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3918 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 352:
#line 3920 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 353:
#line 3922 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 354:
#line 3930 "GetDP.y"
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
    ;
    break;}
case 356:
#line 3955 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 357:
#line 3963 "GetDP.y"
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

    ;
    break;}
case 358:
#line 4042 "GetDP.y"
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
    ;
    break;}
case 359:
#line 4088 "GetDP.y"
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
    ;
    break;}
case 360:
#line 4112 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 361:
#line 4121 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 4130 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 363:
#line 4135 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 364:
#line 4144 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 365:
#line 4155 "GetDP.y"
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
    ;
    break;}
case 367:
#line 4184 "GetDP.y"
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
    ;
    break;}
case 368:
#line 4208 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 369:
#line 4216 "GetDP.y"
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

    ;
    break;}
case 370:
#line 4271 "GetDP.y"
{ EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = yyvsp[-2].t.Int1 ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = yyvsp[-2].t.Int2 ;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable) ;
    ;
    break;}
case 371:
#line 4288 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 372:
#line 4289 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 373:
#line 4290 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 374:
#line 4291 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 375:
#line 4292 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 376:
#line 4293 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 377:
#line 4294 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 378:
#line 4295 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 379:
#line 4302 "GetDP.y"
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
    ;
    break;}
case 380:
#line 4323 "GetDP.y"
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
    ;
    break;}
case 381:
#line 4347 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 383:
#line 4357 "GetDP.y"
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
    ;
    break;}
case 386:
#line 4384 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 388:
#line 4396 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 389:
#line 4403 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 390:
#line 4410 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 391:
#line 4413 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 392:
#line 4415 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 394:
#line 4423 "GetDP.y"
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
    ;
    break;}
case 395:
#line 4438 "GetDP.y"
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
    ;
    break;}
case 396:
#line 4453 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 397:
#line 4463 "GetDP.y"
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
    ;
    break;}
case 399:
#line 4483 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 400:
#line 4486 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 401:
#line 4495 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 402:
#line 4498 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 403:
#line 4503 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 404:
#line 4508 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 405:
#line 4513 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 406:
#line 4518 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 408:
#line 4529 "GetDP.y"
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
    ;
    break;}
case 409:
#line 4566 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 410:
#line 4573 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 411:
#line 4576 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 412:
#line 4588 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 413:
#line 4598 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 414:
#line 4604 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 415:
#line 4607 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 416:
#line 4619 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 417:
#line 4627 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 418:
#line 4640 "GetDP.y"
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
    ;
    break;}
case 419:
#line 4662 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 420:
#line 4669 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 421:
#line 4675 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 422:
#line 4681 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 423:
#line 4687 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 424:
#line 4695 "GetDP.y"
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
    ;
    break;}
case 425:
#line 4717 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 426:
#line 4724 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 427:
#line 4730 "GetDP.y"
{ 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = yyvsp[-4].i ;
      Operation_P->Case.Test.Operation_True = yyvsp[-1].l ;
      Operation_P->Case.Test.Operation_False = NULL ;
    ;
    break;}
case 428:
#line 4741 "GetDP.y"
{ 
      List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TEST ;
      Operation_P->Case.Test.ExpressionIndex = yyvsp[-8].i ;
      Operation_P->Case.Test.Operation_True = yyvsp[-5].l ;
      Operation_P->Case.Test.Operation_False = yyvsp[-1].l ;
    ;
    break;}
case 429:
#line 4752 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 430:
#line 4765 "GetDP.y"
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
    ;
    break;}
case 431:
#line 4780 "GetDP.y"
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
    ;
    break;}
case 432:
#line 4795 "GetDP.y"
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
    ;
    break;}
case 433:
#line 4810 "GetDP.y"
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
    ;
    break;}
case 434:
#line 4830 "GetDP.y"
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
    ;
    break;}
case 435:
#line 4851 "GetDP.y"
{ Operation_P = (struct Operation*)
        List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
                               fcmp_DefineSystem_Name)) < 0)
        vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Update.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 436:
#line 4863 "GetDP.y"
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
    ;
    break;}
case 437:
#line 4883 "GetDP.y"
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
    ;
    break;}
case 438:
#line 4900 "GetDP.y"
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
    ;
    break;}
case 439:
#line 4919 "GetDP.y"
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
    ;
    break;}
case 440:
#line 4940 "GetDP.y"
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
    ;
    break;}
case 441:
#line 4955 "GetDP.y"
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
    ;
    break;}
case 442:
#line 4989 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
      Operation_P->Case.TimeLoopTheta.Time0 = yyvsp[-10].d ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-8].d ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-6].i ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-4].i ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 443:
#line 5002 "GetDP.y"
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
    ;
    break;}
case 444:
#line 5016 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-6].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-4].i ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 445:
#line 5029 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-10].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-6].i ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-4].d ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 446:
#line 5041 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 448:
#line 5050 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 450:
#line 5059 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = -1 ; 
    ;
    break;}
case 451:
#line 5070 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-8].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-6].i ;
      Operation_P->Case.ChangeOfCoordinates.NumNode = (int)yyvsp[-4].d ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex2 = yyvsp[-2].i ; 
    ;
    break;}
case 452:
#line 5082 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 453:
#line 5092 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 454:
#line 5100 "GetDP.y"
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
    ;
    break;}
case 455:
#line 5113 "GetDP.y"
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
    ;
    break;}
case 456:
#line 5126 "GetDP.y"
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
    ;
    break;}
case 457:
#line 5140 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 458:
#line 5150 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 459:
#line 5160 "GetDP.y"
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
    ;
    break;}
case 460:
#line 5174 "GetDP.y"
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
    ;
    break;}
case 461:
#line 5188 "GetDP.y"
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
    ;
    break;}
case 462:
#line 5207 "GetDP.y"
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
    ;
    break;}
case 463:
#line 5225 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Type = OPERATION_ADD_MH_MOVING ;
      Operation_P->Case.Add_MH_Moving.dummy = yyvsp[-2].d ;
    ;
    break;}
case 464:
#line 5236 "GetDP.y"
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
    ;
    break;}
case 465:
#line 5251 "GetDP.y"
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
    ;
    break;}
case 466:
#line 5266 "GetDP.y"
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
    ;
    break;}
case 467:
#line 5281 "GetDP.y"
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
    ;
    break;}
case 468:
#line 5296 "GetDP.y"
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
    ;
    break;}
case 469:
#line 5311 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 470:
#line 5322 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 471:
#line 5327 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 472:
#line 5337 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 474:
#line 5347 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 475:
#line 5350 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 476:
#line 5360 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 477:
#line 5375 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 479:
#line 5391 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 480:
#line 5395 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 481:
#line 5399 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 482:
#line 5403 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 483:
#line 5408 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 484:
#line 5419 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = 0. ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = 1. ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopNewmark.Beta   = 0.25 ;
      Operation_P->Case.TimeLoopNewmark.Gamma  = 0.5 ;
      Operation_P->Case.TimeLoopNewmark.Operation = NULL ;
    ;
    break;}
case 486:
#line 5436 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5440 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 488:
#line 5444 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 489:
#line 5448 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 490:
#line 5452 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 491:
#line 5457 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 492:
#line 5468 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 494:
#line 5483 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 495:
#line 5487 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 496:
#line 5491 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 497:
#line 5495 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 498:
#line 5499 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 499:
#line 5510 "GetDP.y"
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
    ;
    break;}
case 501:
#line 5528 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 502:
#line 5532 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 503:
#line 5536 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 504:
#line 5540 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 505:
#line 5545 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 506:
#line 5555 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 5561 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 508:
#line 5567 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 509:
#line 5577 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 510:
#line 5580 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 511:
#line 5585 "GetDP.y"
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
    ;
    break;}
case 513:
#line 5603 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 514:
#line 5613 "GetDP.y"
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
    ;
    break;}
case 515:
#line 5642 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 516:
#line 5645 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 517:
#line 5648 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 518:
#line 5656 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 519:
#line 5673 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 521:
#line 5685 "GetDP.y"
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
    ;
    break;}
case 523:
#line 5708 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 525:
#line 5722 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 526:
#line 5729 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 527:
#line 5737 "GetDP.y"
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
    ;
    break;}
case 528:
#line 5783 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 529:
#line 5788 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 530:
#line 5794 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 531:
#line 5797 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 532:
#line 5800 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 533:
#line 5802 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 534:
#line 5808 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 536:
#line 5819 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 537:
#line 5822 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 538:
#line 5828 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 539:
#line 5833 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 540:
#line 5839 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, yyvsp[-3].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s", yyvsp[-3].c);
	Get_Valid_SXD(PostQuantityTerm_EvaluationType);
      }
      Free(yyvsp[-3].c) ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 541:
#line 5853 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 543:
#line 5867 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 544:
#line 5874 "GetDP.y"
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

    ;
    break;}
case 545:
#line 5902 "GetDP.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError){
       vyyerror("Unknown type of Operation: %s", yyvsp[-1].c);
       Get_Valid_SXD(DefineQuantity_Type);
     }
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 546:
#line 5912 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 547:
#line 5913 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 548:
#line 5919 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 549:
#line 5928 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 550:
#line 5945 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 552:
#line 5957 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 555:
#line 5966 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 557:
#line 5978 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 558:
#line 5985 "GetDP.y"
{ 
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, yyvsp[-1].c,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", yyvsp[-1].c) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &InteractivePostProcessing_S) ;
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 559:
#line 5997 "GetDP.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", yyvsp[-1].c);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 560:
#line 6008 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 561:
#line 6013 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 562:
#line 6019 "GetDP.y"
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
    ;
    break;}
case 563:
#line 6036 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 564:
#line 6046 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 565:
#line 6049 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 566:
#line 6053 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 567:
#line 6066 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 568:
#line 6070 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 569:
#line 6076 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = ((struct Value *)Add_PostSave(yyvsp[-1].c)) ;
    ;
    break;}
case 570:
#line 6082 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 571:
#line 6089 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 572:
#line 6097 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 573:
#line 6103 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 574:
#line 6108 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 575:
#line 6113 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 576:
#line 6122 "GetDP.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-2].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostProcessing Quantity: %s", yyvsp[-2].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      PostSubOperation_S.PostQuantitySupport[0] = yyvsp[-1].i ;
      PostSubOperation_S.PostQuantitySupport[1] = -1 ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 577:
#line 6134 "GetDP.y"
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
    ;
    break;}
case 578:
#line 6157 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 579:
#line 6158 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 580:
#line 6159 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 581:
#line 6160 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 582:
#line 6166 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 583:
#line 6168 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 584:
#line 6174 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 585:
#line 6180 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6187 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 587:
#line 6196 "GetDP.y"
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
    ;
    break;}
case 588:
#line 6218 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 589:
#line 6226 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = yyvsp[-12].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = yyvsp[-10].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = yyvsp[-8].i ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] = yyvsp[-5].l ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] = yyvsp[-3].l ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[2] = yyvsp[-1].l ;
    ;
    break;}
case 590:
#line 6237 "GetDP.y"
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
    ;
    break;}
case 591:
#line 6251 "GetDP.y"
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
    ;
    break;}
case 592:
#line 6272 "GetDP.y"
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
    ;
    break;}
case 593:
#line 6299 "GetDP.y"
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
    ;
    break;}
case 594:
#line 6330 "GetDP.y"
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
    ;
    break;}
case 595:
#line 6350 "GetDP.y"
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
      PostSubOperation_S.Legend = LEGEND_NONE;
      PostSubOperation_S.LegendPosition[0] = 0.;
      PostSubOperation_S.LegendPosition[1] = 0.;
      PostSubOperation_S.LegendPosition[2] = 0.;
      PostSubOperation_S.EvaluationPoints = NULL ;
      PostSubOperation_S.StoreInRegister = -1 ;
    ;
    break;}
case 597:
#line 6383 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 598:
#line 6390 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 599:
#line 6397 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 600:
#line 6404 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 601:
#line 6408 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 602:
#line 6412 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 603:
#line 6416 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 604:
#line 6420 "GetDP.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown PostProcessing Format: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_Format);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 605:
#line 6430 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 606:
#line 6435 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 607:
#line 6440 "GetDP.y"
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
    ;
    break;}
case 608:
#line 6460 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 609:
#line 6467 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 610:
#line 6476 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 611:
#line 6485 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 612:
#line 6494 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 613:
#line 6501 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 614:
#line 6509 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 615:
#line 6513 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 616:
#line 6522 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 617:
#line 6526 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 618:
#line 6530 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 619:
#line 6538 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 620:
#line 6544 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 621:
#line 6549 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 622:
#line 6558 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 623:
#line 6566 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 624:
#line 6575 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 625:
#line 6583 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 626:
#line 6592 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 627:
#line 6600 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 628:
#line 6609 "GetDP.y"
{
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;
    break;}
case 629:
#line 6619 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 630:
#line 6625 "GetDP.y"
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
    ;
    break;}
case 631:
#line 6675 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;
    break;}
case 632:
#line 6690 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;
    break;}
case 633:
#line 6706 "GetDP.y"
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
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;
    break;}
case 634:
#line 6725 "GetDP.y"
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
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if((yyvsp[-1].d > 0. && yyvsp[-5].d > yyvsp[-3].d) || (yyvsp[-1].d < 0. && yyvsp[-5].d < yyvsp[-3].d))
	skip_until("For", "EndFor");
    ;
    break;}
case 635:
#line 6745 "GetDP.y"
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
	      vyyerror("Something wrong with For loop starting ") ;
	    List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;      
	  }
	  fsetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	  yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
	}
	else{
	  ImbricatedLoop--;
	}
      }
    ;
    break;}
case 636:
#line 6776 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 637:
#line 6780 "GetDP.y"
{
    ;
    break;}
case 639:
#line 6796 "GetDP.y"
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
    ;
    break;}
case 640:
#line 6811 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 641:
#line 6817 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 642:
#line 6823 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 643:
#line 6829 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen(yyvsp[-2].c, "r"))) Msg(ERROR, "Unable to open file '%s'", yyvsp[-2].c);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &_value) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &_value) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 644:
#line 6840 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 645:
#line 6845 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstring);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstring);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 646:
#line 6857 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(buff, 128, stdin);
      Constant_S.Value.Float = atof(buff);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 647:
#line 6867 "GetDP.y"
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
    ;
    break;}
case 649:
#line 6886 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 650:
#line 6892 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 651:
#line 6898 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 652:
#line 6909 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 653:
#line 6910 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 654:
#line 6911 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 655:
#line 6912 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 656:
#line 6913 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 657:
#line 6914 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 658:
#line 6915 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 659:
#line 6916 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 660:
#line 6917 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 661:
#line 6918 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 662:
#line 6919 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 663:
#line 6920 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 664:
#line 6921 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 665:
#line 6922 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 666:
#line 6923 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 667:
#line 6924 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 668:
#line 6925 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 669:
#line 6926 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 670:
#line 6927 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 671:
#line 6928 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 672:
#line 6929 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 673:
#line 6933 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 674:
#line 6934 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 675:
#line 6935 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 676:
#line 6936 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 677:
#line 6937 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 678:
#line 6938 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 679:
#line 6939 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 680:
#line 6940 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 681:
#line 6941 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 682:
#line 6942 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 683:
#line 6943 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 684:
#line 6944 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 685:
#line 6945 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 686:
#line 6946 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 687:
#line 6947 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 688:
#line 6948 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 689:
#line 6949 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 690:
#line 6950 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 691:
#line 6951 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 692:
#line 6952 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 693:
#line 6953 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 694:
#line 6954 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 695:
#line 6955 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 696:
#line 6956 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 697:
#line 6957 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 698:
#line 6958 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 699:
#line 6959 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 700:
#line 6960 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 701:
#line 6961 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 702:
#line 6962 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 703:
#line 6963 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 704:
#line 6964 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 705:
#line 6965 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 706:
#line 6966 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 707:
#line 6967 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 708:
#line 6968 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 709:
#line 6969 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 710:
#line 6970 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 711:
#line 6971 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 712:
#line 6972 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 713:
#line 6977 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 714:
#line 6978 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 715:
#line 6979 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 716:
#line 6980 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 717:
#line 6981 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 718:
#line 6982 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 719:
#line 6983 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 720:
#line 7002 "GetDP.y"
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
    ;
    break;}
case 721:
#line 7020 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 722:
#line 7023 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 723:
#line 7029 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 724:
#line 7032 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 725:
#line 7039 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 726:
#line 7045 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 727:
#line 7048 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 728:
#line 7051 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 729:
#line 7063 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 730:
#line 7069 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      if(!yyvsp[0].d || (yyvsp[-4].d<yyvsp[-2].d && yyvsp[0].d<0) || (yyvsp[-4].d>yyvsp[-2].d && yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%g : %g : %g'", yyvsp[-4].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(yyval.l, &(yyvsp[-4].d)) ;
      }
      else
	for(d=yyvsp[-4].d ; (yyvsp[0].d>0)?(d<=yyvsp[-2].d):(d>=yyvsp[-2].d) ; d+=yyvsp[0].d) 
	  List_Add(yyval.l, &d) ;
    ;
    break;}
case 731:
#line 7080 "GetDP.y"
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
    ;
    break;}
case 732:
#line 7096 "GetDP.y"
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
    ;
    break;}
case 733:
#line 7118 "GetDP.y"
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
    ;
    break;}
case 734:
#line 7133 "GetDP.y"
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
    ;
    break;}
case 735:
#line 7171 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 736:
#line 7179 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 737:
#line 7191 "GetDP.y"
{ 
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 738:
#line 7199 "GetDP.y"
{
      sprintf(StringAux1, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(StringAux1)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, StringAux1) ;
    ;
    break;}
case 739:
#line 7211 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 740:
#line 7213 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 741:
#line 7220 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 742:
#line 7223 "GetDP.y"
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
    ;
    break;}
case 743:
#line 7238 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 744:
#line 7243 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 745:
#line 7248 "GetDP.y"
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
    ;
    break;}
case 746:
#line 7267 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 747:
#line 7285 "GetDP.y"
{
      if (yyvsp[-3].c != NULL && yyvsp[-1].c != NULL) {
	yyval.c = (char *)Malloc((strlen(yyvsp[-3].c)+strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
	strcpy(yyval.c, yyvsp[-3].c) ;  strcat(yyval.c, yyvsp[-1].c) ;
      }
      else {
	vyyerror("Undefined argument for StrCat function") ;  yyval.c = NULL ;
      }
    ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 7296 "GetDP.y"



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

