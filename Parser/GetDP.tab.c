
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

/* $Id: GetDP.tab.c,v 1.84 2005-07-18 08:01:42 geuzaine Exp $ */
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


#line 209 "GetDP.y"
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



#define	YYFINAL		2023
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
   586,   590,   592,   596,   597,   601,   608,   609,   614,   615,
   618,   622,   627,   628,   633,   634,   637,   641,   645,   650,
   651,   656,   657,   660,   664,   668,   673,   674,   679,   680,
   683,   687,   691,   696,   697,   702,   703,   706,   710,   714,
   718,   722,   726,   730,   731,   733,   736,   740,   742,   743,
   746,   750,   755,   759,   764,   770,   771,   776,   779,   780,
   783,   787,   791,   795,   799,   803,   807,   815,   819,   823,
   827,   831,   835,   843,   851,   859,   860,   863,   867,   869,
   871,   872,   875,   879,   884,   888,   893,   898,   903,   908,
   909,   914,   915,   918,   922,   926,   931,   936,   944,   948,
   952,   956,   960,   961,   962,   963,   982,   983,   988,   989,
   992,   996,  1000,  1004,  1006,  1010,  1011,  1015,  1017,  1021,
  1022,  1026,  1027,  1032,  1033,  1036,  1040,  1044,  1048,  1049,
  1054,  1055,  1058,  1062,  1066,  1070,  1075,  1076,  1079,  1083,
  1085,  1087,  1088,  1091,  1095,  1100,  1104,  1109,  1114,  1115,
  1120,  1123,  1124,  1127,  1131,  1135,  1139,  1143,  1147,  1148,
  1154,  1155,  1163,  1167,  1168,  1174,  1178,  1182,  1186,  1190,
  1194,  1195,  1199,  1200,  1203,  1206,  1209,  1214,  1219,  1224,
  1229,  1230,  1233,  1237,  1241,  1245,  1246,  1249,  1253,  1257,
  1261,  1265,  1266,  1269,  1270,  1271,  1281,  1285,  1289,  1293,
  1296,  1300,  1306,  1307,  1310,  1314,  1315,  1316,  1326,  1327,
  1329,  1331,  1333,  1335,  1337,  1339,  1341,  1346,  1350,  1351,
  1354,  1358,  1360,  1362,  1363,  1366,  1370,  1375,  1380,  1381,
  1387,  1389,  1390,  1395,  1398,  1399,  1402,  1406,  1410,  1414,
  1418,  1422,  1426,  1430,  1434,  1436,  1439,  1443,  1444,  1448,
  1450,  1454,  1455,  1459,  1460,  1463,  1467,  1471,  1476,  1481,
  1486,  1491,  1497,  1503,  1506,  1514,  1526,  1534,  1548,  1560,
  1570,  1578,  1586,  1594,  1604,  1614,  1624,  1636,  1648,  1666,
  1680,  1696,  1708,  1722,  1723,  1731,  1732,  1740,  1748,  1760,
  1766,  1772,  1782,  1792,  1802,  1808,  1814,  1826,  1836,  1851,
  1866,  1874,  1887,  1898,  1906,  1914,  1922,  1924,  1926,  1928,
  1929,  1932,  1936,  1940,  1943,  1944,  1947,  1951,  1955,  1959,
  1963,  1968,  1969,  1972,  1976,  1980,  1984,  1988,  1992,  1997,
  1998,  2001,  2005,  2009,  2013,  2017,  2022,  2023,  2026,  2030,
  2034,  2038,  2042,  2046,  2051,  2056,  2061,  2062,  2067,  2068,
  2071,  2075,  2079,  2083,  2087,  2091,  2095,  2096,  2099,  2103,
  2105,  2106,  2109,  2113,  2118,  2123,  2127,  2132,  2133,  2138,
  2141,  2144,  2145,  2148,  2152,  2157,  2158,  2164,  2170,  2171,
  2174,  2175,  2182,  2186,  2187,  2192,  2196,  2200,  2201,  2204,
  2208,  2210,  2212,  2213,  2216,  2220,  2224,  2228,  2232,  2237,
  2238,  2247,  2248,  2249,  2253,  2261,  2269,  2278,  2290,  2291,
  2302,  2304,  2311,  2315,  2322,  2324,  2326,  2328,  2330,  2331,
  2335,  2337,  2340,  2343,  2356,  2359,  2375,  2380,  2393,  2411,
  2434,  2447,  2448,  2451,  2455,  2460,  2465,  2469,  2472,  2475,
  2479,  2483,  2487,  2491,  2495,  2499,  2503,  2507,  2511,  2515,
  2519,  2523,  2529,  2532,  2535,  2539,  2549,  2553,  2556,  2566,
  2569,  2579,  2582,  2592,  2598,  2602,  2603,  2606,  2613,  2622,
  2631,  2642,  2644,  2649,  2651,  2657,  2662,  2667,  2675,  2680,
  2688,  2694,  2702,  2708,  2717,  2718,  2722,  2728,  2734,  2736,
  2738,  2740,  2742,  2744,  2746,  2748,  2750,  2752,  2754,  2756,
  2758,  2760,  2762,  2764,  2766,  2768,  2770,  2772,  2774,  2776,
  2778,  2782,  2785,  2788,  2792,  2796,  2800,  2804,  2808,  2812,
  2816,  2820,  2824,  2828,  2832,  2836,  2840,  2844,  2849,  2854,
  2859,  2864,  2869,  2874,  2879,  2884,  2889,  2894,  2901,  2906,
  2911,  2916,  2921,  2926,  2931,  2938,  2945,  2952,  2958,  2961,
  2963,  2965,  2967,  2969,  2971,  2973,  2975,  2977,  2978,  2980,
  2982,  2986,  2988,  2990,  2994,  2998,  3002,  3008,  3012,  3017,
  3022,  3029,  3038,  3047,  3053,  3059,  3061,  3063,  3065,  3067,
  3069,  3074,  3081,  3083
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
     0,   257,     3,     0,   307,   259,   450,     0,   254,   256,
   255,     0,   254,   255,     0,   254,   313,   255,     0,   304,
     0,   313,   262,   304,     0,     0,   260,   453,   261,     0,
   260,    69,   254,   282,   255,   261,     0,     0,   315,   260,
   316,   261,     0,     0,   316,   317,     0,    96,     5,     7,
     0,    82,   260,   318,   261,     0,     0,   318,   260,   319,
   261,     0,     0,   319,   320,     0,    69,   282,     7,     0,
    69,    64,     7,     0,    81,     5,   314,     7,     0,     0,
   321,   260,   322,   261,     0,     0,   322,   323,     0,    96,
     5,     7,     0,    88,   298,     7,     0,    82,   260,   324,
   261,     0,     0,   324,   260,   325,   261,     0,     0,   325,
   326,     0,    86,     5,     7,     0,    87,     5,     7,     0,
    82,   260,   327,   261,     0,     0,   327,   260,   328,   261,
     0,     0,   328,   329,     0,    89,     5,     7,     0,    90,
   450,     7,     0,    91,   450,     7,     0,    92,   450,     7,
     0,    93,   450,     7,     0,    94,   450,     7,     0,     0,
   446,     0,   330,   331,     0,   260,   332,   261,     0,   447,
     0,     0,   332,   333,     0,    96,   456,     7,     0,    96,
   456,   292,     7,     0,    86,     5,     7,     0,    82,   260,
   334,   261,     0,    82,     5,   260,   334,   261,     0,     0,
   334,   260,   335,   261,     0,   334,   446,     0,     0,   335,
   336,     0,    86,     5,     7,     0,    69,   282,     7,     0,
    70,   282,     7,     0,    76,   298,     7,     0,    75,   298,
     7,     0,    80,     5,     7,     0,    77,   260,   451,   291,
   451,   261,     7,     0,    71,   282,     7,     0,    72,   282,
     7,     0,    99,   298,     7,     0,    74,   298,     7,     0,
    73,   298,     7,     0,    99,   254,   298,   262,   298,   255,
     7,     0,    74,   254,   298,   262,   298,   255,     7,     0,
    73,   254,   298,   262,   298,   255,     7,     0,     0,   337,
   338,     0,   260,   339,   261,     0,   447,     0,   446,     0,
     0,   339,   340,     0,    96,   456,     7,     0,    96,     5,
   292,     7,     0,    86,     5,     7,     0,    97,   260,   341,
   261,     0,   105,   260,   347,   261,     0,   107,   260,   354,
   261,     0,    68,   260,   357,   261,     0,     0,   341,   260,
   342,   261,     0,     0,   342,   343,     0,    96,     5,     7,
     0,    98,     5,     7,     0,    98,     5,   292,     7,     0,
    99,     5,   344,     7,     0,   100,   260,     5,   291,     5,
   261,     7,     0,   101,   300,     7,     0,   102,   300,     7,
     0,   103,   282,     7,     0,   104,   282,     7,     0,     0,
     0,     0,   260,   112,     5,     7,   111,     5,   292,     7,
   345,    62,   282,     7,   346,   132,     5,   293,     7,   261,
     0,     0,   347,   260,   348,   261,     0,     0,   348,   349,
     0,    96,     5,     7,     0,   106,   350,     7,     0,    98,
   352,     7,     0,     5,     0,   260,   351,   261,     0,     0,
   351,   291,     5,     0,     5,     0,   260,   353,   261,     0,
     0,   353,   291,     5,     0,     0,   354,   260,   355,   261,
     0,     0,   355,   356,     0,    96,   456,     7,     0,    86,
     5,     7,     0,    98,     5,     7,     0,     0,   357,   260,
   358,   261,     0,     0,   358,   359,     0,    98,     5,     7,
     0,   108,   283,     7,     0,   109,   286,     7,     0,   110,
   456,   293,     7,     0,     0,   360,   361,     0,   260,   362,
   261,     0,   447,     0,   446,     0,     0,   362,   363,     0,
    96,   456,     7,     0,    96,     5,   292,     7,     0,    86,
     5,     7,     0,   112,   260,   364,   261,     0,   116,   260,
   371,   261,     0,     0,   364,   260,   365,   261,     0,   364,
   446,     0,     0,   365,   366,     0,    96,   456,     7,     0,
    86,   107,     7,     0,    86,   117,     7,     0,    86,     5,
     7,     0,   184,   452,     7,     0,     0,   113,   456,   367,
   370,     7,     0,     0,   113,     5,   260,   261,   368,   370,
     7,     0,   114,     3,     7,     0,     0,   254,   369,   302,
   255,     7,     0,   130,   282,     7,     0,    83,     5,     7,
     0,    84,     5,     7,     0,    81,     5,     7,     0,   115,
     3,     7,     0,     0,   254,   456,   255,     0,     0,   371,
   372,     0,   371,   447,     0,   371,   446,     0,   117,   260,
   377,   261,     0,   118,   260,   377,   261,     0,   119,   260,
   381,   261,     0,   120,   260,   373,   261,     0,     0,   373,
   374,     0,    86,     5,     7,     0,   110,     5,     7,     0,
   260,   375,   261,     0,     0,   375,   376,     0,    78,   386,
     7,     0,    79,   386,     7,     0,   116,   386,     7,     0,
   130,   282,     7,     0,     0,   377,   378,     0,     0,     0,
   385,   254,   379,   302,   380,   262,   302,   255,     7,     0,
   130,   282,     7,     0,    81,     5,     7,     0,    83,     5,
     7,     0,   131,     7,     0,    84,     5,     7,     0,    85,
   254,     3,   255,     7,     0,     0,   381,   382,     0,   130,
   282,     7,     0,     0,     0,   385,   254,   383,   302,   384,
   262,   386,   255,     7,     0,     0,   122,     0,   123,     0,
   124,     0,   125,     0,   126,     0,   127,     0,   128,     0,
   260,     5,   456,   261,     0,   260,   456,   261,     0,     0,
   387,   388,     0,   260,   389,   261,     0,   447,     0,   446,
     0,     0,   389,   390,     0,    96,   456,     7,     0,    96,
     5,   292,     7,     0,   133,   260,   392,   261,     0,     0,
   140,   391,   260,   399,   261,     0,   446,     0,     0,   392,
   260,   393,   261,     0,   392,   446,     0,     0,   393,   394,
     0,    96,   456,     7,     0,    86,     5,     7,     0,   134,
   395,     7,     0,   135,   457,     7,     0,   138,   397,     7,
     0,   139,     5,     7,     0,   136,   452,     7,     0,   137,
   457,     7,     0,   446,     0,   456,   293,     0,   260,   396,
   261,     0,     0,   396,   291,   456,     0,   456,     0,   260,
   398,   261,     0,     0,   398,   291,   456,     0,     0,   399,
   400,     0,     5,   456,     7,     0,   142,   298,     7,     0,
   153,   260,   406,   261,     0,   157,   260,   408,   261,     0,
   160,   260,   410,   261,     0,   163,   260,   412,   261,     0,
     5,   254,   456,   255,     7,     0,   142,   254,   298,   255,
     7,     0,   152,     7,     0,    15,   254,   298,   255,   260,
   399,   261,     0,    15,   254,   298,   255,   260,   399,   261,
    16,   260,   399,   261,     0,   144,   254,     5,   262,   298,
   255,     7,     0,   169,   254,     5,   262,   298,   262,   298,
   262,   298,   262,   298,   255,     7,     0,   169,   254,     5,
   262,   298,   262,   298,   262,   298,   255,     7,     0,   169,
   254,     5,   262,   298,   262,   298,   255,     7,     0,   170,
   254,     5,   262,   452,   255,     7,     0,   171,   254,     5,
   262,   452,   255,     7,     0,   150,   254,     5,   262,   298,
   255,     7,     0,   151,   254,     5,   262,   282,   262,     5,
   255,     7,     0,   145,   254,     5,   262,     5,   262,   452,
   255,     7,     0,   146,   254,     5,   262,     5,   262,   450,
   255,     7,     0,   147,   254,     5,   262,   450,   262,   452,
   262,   450,   255,     7,     0,   148,   254,     5,   262,   450,
   262,   450,   262,   450,   255,     7,     0,   149,   254,     5,
   262,     5,   262,     5,   262,   450,   262,   452,   262,   450,
   262,   450,   255,     7,     0,   153,   254,   450,   262,   450,
   262,   298,   262,   298,   255,   260,   399,   261,     0,   157,
   254,   450,   262,   450,   262,   298,   262,   450,   262,   450,
   255,   260,   399,   261,     0,   160,   254,   450,   262,   450,
   262,   298,   255,   260,   399,   261,     0,   160,   254,   450,
   262,   450,   262,   298,   262,   450,   255,   260,   399,   261,
     0,     0,   192,   401,   254,   403,   404,   255,     7,     0,
     0,   195,   402,   254,   403,   404,   255,     7,     0,   166,
   254,   282,   262,   298,   255,     7,     0,   166,   254,   282,
   262,   298,   262,   450,   262,   298,   255,     7,     0,   187,
   254,   456,   255,     7,     0,   168,   254,   457,   255,     7,
     0,   172,   254,     5,   262,   452,   262,   450,   255,     7,
     0,   173,   254,     5,   262,   450,   262,   457,   255,     7,
     0,   174,   254,     5,   262,   452,   262,   457,   255,     7,
     0,   175,   260,   456,   261,     7,     0,   176,   260,   456,
   261,     7,     0,   182,   260,   456,   262,   282,   262,   457,
   262,   298,   261,     7,     0,   182,   260,   456,   262,   282,
   262,   457,   261,     7,     0,   177,   254,     5,   262,     5,
   262,   450,   262,   450,   255,   260,   399,   261,     7,     0,
   178,   254,     5,   262,     5,   262,   450,   262,   450,   255,
   260,   399,   261,     7,     0,   179,   254,     5,   262,   450,
   255,     7,     0,   183,   260,     5,   262,     5,   262,   135,
   457,   262,     4,   261,     7,     0,   183,   260,     5,   262,
     5,   262,   135,   457,   261,     7,     0,   183,   260,     5,
   262,     5,   261,     7,     0,   180,   254,     5,   262,     5,
   255,     7,     0,   181,   254,     5,   262,     5,   255,     7,
     0,   446,     0,   300,     0,     5,     0,     0,   404,   405,
     0,   262,   207,   457,     0,   262,   210,   452,     0,   262,
   452,     0,     0,   406,   407,     0,   154,   450,     7,     0,
   155,   450,     7,     0,   143,   298,     7,     0,   156,   298,
     7,     0,   140,   260,   399,   261,     0,     0,   408,   409,
     0,   154,   450,     7,     0,   155,   450,     7,     0,   143,
   298,     7,     0,   158,   450,     7,     0,   159,   450,     7,
     0,   140,   260,   399,   261,     0,     0,   410,   411,     0,
   161,   450,     7,     0,    88,   450,     7,     0,   162,   298,
     7,     0,    18,   450,     7,     0,   140,   260,   399,   261,
     0,     0,   412,   413,     0,   161,   450,     7,     0,   164,
   450,     7,     0,    88,   450,     7,     0,    18,   450,     7,
     0,   133,     5,     7,     0,   165,   260,   414,   261,     0,
   140,   260,   399,   261,     0,   141,   260,   399,   261,     0,
     0,   414,   260,   415,   261,     0,     0,   415,   416,     0,
    86,     5,     7,     0,   112,     5,     7,     0,   130,   282,
     7,     0,    88,   450,     7,     0,    99,   298,     7,     0,
    18,     5,     7,     0,     0,   417,   418,     0,   260,   419,
   261,     0,   447,     0,     0,   419,   420,     0,    96,   456,
     7,     0,    96,     5,   292,     7,     0,   134,   456,   293,
     7,     0,   186,     5,     7,     0,   112,   260,   421,   261,
     0,     0,   421,   260,   422,   261,     0,   421,   447,     0,
   421,   446,     0,     0,   422,   423,     0,    96,   456,     7,
     0,    75,   260,   424,   261,     0,     0,   424,   117,   260,
   425,   261,     0,   424,     5,   260,   425,   261,     0,     0,
   425,   426,     0,     0,   385,   254,   427,   302,   255,     7,
     0,    86,     5,     7,     0,     0,   130,   428,   282,     7,
     0,    81,     5,     7,     0,    83,     5,     7,     0,     0,
   429,   430,     0,   260,   431,   261,     0,   447,     0,   446,
     0,     0,   431,   432,     0,    96,   456,     7,     0,   188,
     5,     7,     0,   212,     5,     7,     0,   190,   457,     7,
     0,   140,   260,   435,   261,     0,     0,   187,   456,   189,
   456,   434,   260,   435,   261,     0,     0,     0,   435,   436,
   437,     0,   191,   254,   439,   442,   443,   255,     7,     0,
   192,   254,   439,   442,   443,   255,     7,     0,   192,   254,
     6,   262,   450,   443,   255,     7,     0,   192,   254,     6,
   262,   228,   254,   457,   255,   443,   255,     7,     0,     0,
   193,   254,   282,   438,   262,   130,   282,   443,   255,     7,
     0,   446,     0,   194,   254,     6,   443,   255,     7,     0,
   456,   441,   262,     0,   456,   441,   440,     5,   441,   262,
     0,   245,     0,   246,     0,   243,     0,   244,     0,     0,
   254,   282,   255,     0,   197,     0,   198,   282,     0,   199,
   282,     0,   201,   260,   260,   453,   261,   260,   453,   261,
   260,   453,   261,   261,     0,   200,   282,     0,   200,   260,
   298,   262,   298,   262,   298,   261,   260,   452,   262,   452,
   262,   452,   261,     0,   202,   260,   453,   261,     0,   203,
   260,   260,   453,   261,   260,   453,   261,   261,   260,   450,
   261,     0,   204,   260,   260,   453,   261,   260,   453,   261,
   260,   453,   261,   261,   260,   450,   262,   450,   261,     0,
   205,   260,   260,   453,   261,   260,   453,   261,   260,   453,
   261,   260,   453,   261,   261,   260,   450,   262,   450,   262,
   450,   261,     0,   198,   282,   206,     5,   260,   450,   262,
   450,   261,   260,   450,   261,     0,     0,   443,   444,     0,
   262,   207,   457,     0,   262,   207,   239,   457,     0,   262,
   207,   242,   457,     0,   262,   208,   450,     0,   262,   215,
     0,   262,   216,     0,   262,   211,   450,     0,   262,   212,
     5,     0,   262,   213,   445,     0,   262,   214,   445,     0,
   262,   212,   445,     0,   262,   209,   450,     0,   262,   210,
   452,     0,   262,   196,     5,     0,   262,   218,     5,     0,
   262,   217,   450,     0,   262,    75,   452,     0,   262,   219,
   450,     0,   262,   219,   260,   453,   261,     0,   262,   220,
     0,   262,   221,     0,   262,   136,   452,     0,   262,   166,
   260,   298,   262,   298,   262,   298,   261,     0,   262,   222,
   300,     0,   262,   223,     0,   262,   223,   260,   450,   262,
   450,   262,   450,   261,     0,   262,   224,     0,   262,   224,
   260,   450,   262,   450,   262,   450,   261,     0,   262,   225,
     0,   262,   225,   260,   450,   262,   450,   262,   450,   261,
     0,   262,   226,   260,   453,   261,     0,   262,   227,     3,
     0,     0,   445,     6,     0,    13,   252,   450,     8,   450,
   253,     0,    13,   252,   450,     8,   450,     8,   450,   253,
     0,    13,     5,   130,   260,   450,     8,   450,   261,     0,
    13,     5,   130,   260,   450,     8,   450,     8,   450,   261,
     0,    14,     0,    15,   252,   450,   253,     0,    17,     0,
    29,   254,   448,   255,     7,     0,   456,   230,   452,     7,
     0,   456,   230,     6,     7,     0,   456,   230,   228,   254,
   457,   255,     7,     0,   456,   230,   458,     7,     0,   456,
   230,    28,   254,   457,   255,     7,     0,    11,   252,     6,
   253,     7,     0,    11,   252,     6,   262,   453,   253,     7,
     0,    12,   252,   456,   253,     7,     0,    12,   252,   456,
   253,   254,   450,   255,     7,     0,     0,   448,   291,     5,
     0,   448,   291,     5,   230,   450,     0,   448,   291,     5,
   230,     6,     0,    35,     0,    36,     0,    37,     0,    38,
     0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
     0,    44,     0,    45,     0,    46,     0,    47,     0,    48,
     0,    49,     0,    50,     0,    51,     0,    52,     0,    53,
     0,    54,     0,   456,     0,   451,     0,   252,   450,   253,
     0,   244,   450,     0,   249,   450,     0,   450,   244,   450,
     0,   450,   243,   450,     0,   450,   245,   450,     0,   450,
   246,   450,     0,   450,   247,   450,     0,   450,   251,   450,
     0,   450,   237,   450,     0,   450,   239,   450,     0,   450,
   238,   450,     0,   450,   240,   450,     0,   450,   234,   450,
     0,   450,   235,   450,     0,   450,   233,   450,     0,   450,
   232,   450,     0,    35,   254,   450,   255,     0,    36,   254,
   450,   255,     0,    37,   254,   450,   255,     0,    38,   254,
   450,   255,     0,    39,   254,   450,   255,     0,    40,   254,
   450,   255,     0,    41,   254,   450,   255,     0,    42,   254,
   450,   255,     0,    43,   254,   450,   255,     0,    44,   254,
   450,   255,     0,    45,   254,   450,   262,   450,   255,     0,
    46,   254,   450,   255,     0,    47,   254,   450,   255,     0,
    48,   254,   450,   255,     0,    49,   254,   450,   255,     0,
    50,   254,   450,   255,     0,    51,   254,   450,   255,     0,
    52,   254,   450,   262,   450,   255,     0,    53,   254,   450,
   262,   450,   255,     0,    54,   254,   450,   262,   450,   255,
     0,   450,   231,   450,     8,   450,     0,   450,   257,     0,
     4,     0,     3,     0,    30,     0,    31,     0,    32,     0,
    33,     0,    34,     0,   456,     0,     0,   450,     0,   454,
     0,   260,   453,   261,     0,   450,     0,   454,     0,   453,
   262,   450,     0,   453,   262,   454,     0,   450,     8,   450,
     0,   450,     8,   450,     8,   450,     0,     5,   260,   261,
     0,     5,   260,   453,   261,     0,    24,   254,     5,   255,
     0,    25,   254,     5,   262,     5,   255,     0,    26,   254,
   450,   262,   450,   262,   450,   255,     0,    27,   254,   450,
   262,   450,   262,   450,   255,     0,     5,   264,   260,   450,
   261,     0,   455,   264,   260,   450,   261,     0,     5,     0,
   455,     0,     6,     0,     5,     0,   458,     0,    10,   252,
   457,   253,     0,    10,   252,   457,   262,   453,   253,     0,
   229,     0,     9,   254,   457,   262,   457,   255,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   362,   397,   436,   439,   442,   445,   448,   449,   450,   451,
   452,   453,   454,   455,   456,   458,   460,   462,   467,   476,
   479,   481,   483,   485,   487,   489,   491,   493,   495,   497,
   499,   501,   503,   505,   507,   509,   511,   513,   515,   518,
   526,   540,   543,   544,   547,   551,   556,   558,   561,   563,
   565,   568,   570,   573,   585,   592,   600,   608,   619,   628,
   637,   644,   679,   684,   695,   698,   712,   717,   720,   769,
   782,   808,   813,   828,   846,   867,   873,   885,   894,   908,
   942,   962,   966,   976,   993,   993,   996,  1002,  1005,  1008,
  1021,  1024,  1027,  1031,  1051,  1095,  1097,  1101,  1104,  1121,
  1130,  1137,  1140,  1145,  1151,  1155,  1160,  1165,  1171,  1178,
  1182,  1195,  1210,  1224,  1230,  1236,  1242,  1248,  1254,  1260,
  1266,  1272,  1278,  1284,  1290,  1296,  1302,  1308,  1314,  1320,
  1327,  1333,  1335,  1344,  1348,  1354,  1428,  1462,  1471,  1483,
  1485,  1497,  1499,  1511,  1513,  1527,  1539,  1545,  1551,  1553,
  1582,  1608,  1621,  1627,  1634,  1640,  1647,  1654,  1664,  1667,
  1668,  1671,  1674,  1677,  1682,  1685,  1699,  1706,  1711,  1716,
  1720,  1727,  1732,  1737,  1742,  1748,  1752,  1757,  1760,  1796,
  1804,  1809,  1818,  1822,  1831,  1834,  1839,  1844,  1849,  1857,
  1861,  1873,  1883,  1888,  1893,  1898,  1910,  1914,  1964,  1967,
  1970,  1973,  1976,  1985,  1992,  1993,  1996,  2018,  2021,  2031,
  2035,  2043,  2050,  2059,  2062,  2082,  2099,  2119,  2126,  2136,
  2140,  2152,  2177,  2202,  2207,  2215,  2223,  2232,  2250,  2259,
  2267,  2275,  2285,  2295,  2305,  2323,  2331,  2334,  2357,  2359,
  2363,  2372,  2376,  2384,  2391,  2400,  2403,  2406,  2409,  2414,
  2432,  2479,  2496,  2500,  2505,  2510,  2515,  2529,  2549,  2554,
  2559,  2583,  2638,  2642,  2647,  2655,  2718,  2726,  2733,  2740,
  2744,  2753,  2756,  2761,  2779,  2784,  2788,  2805,  2819,  2824,
  2831,  2844,  2852,  2860,  2868,  2872,  2881,  2892,  2904,  2921,
  2993,  3005,  3009,  3044,  3047,  3050,  3094,  3101,  3104,  3126,
  3128,  3132,  3140,  3144,  3152,  3159,  3169,  3171,  3176,  3191,
  3205,  3209,  3228,  3232,  3237,  3241,  3244,  3254,  3258,  3271,
  3298,  3339,  3363,  3368,  3374,  3685,  3690,  3699,  3708,  3717,
  3722,  3725,  3763,  3780,  3804,  3809,  3816,  3821,  3824,  3827,
  3836,  3844,  3847,  3859,  3869,  3881,  3890,  3893,  3897,  3899,
  3901,  3907,  3928,  3932,  3943,  4021,  4067,  4091,  4100,  4109,
  4114,  4123,  4132,  4149,  4153,  4187,  4196,  4250,  4266,  4269,
  4270,  4271,  4272,  4273,  4274,  4275,  4279,  4302,  4324,  4331,
  4334,  4355,  4357,  4361,  4369,  4373,  4382,  4389,  4392,  4394,
  4397,  4401,  4417,  4432,  4440,  4456,  4460,  4465,  4474,  4477,
  4482,  4487,  4492,  4497,  4502,  4506,  4545,  4550,  4555,  4565,
  4577,  4581,  4586,  4597,  4606,  4615,  4641,  4648,  4654,  4660,
  4666,  4674,  4696,  4703,  4709,  4720,  4731,  4744,  4759,  4774,
  4789,  4809,  4830,  4842,  4862,  4879,  4898,  4919,  4933,  4967,
  4980,  4994,  5007,  5020,  5027,  5029,  5036,  5038,  5049,  5061,
  5071,  5079,  5092,  5105,  5119,  5129,  5139,  5153,  5167,  5185,
  5204,  5215,  5230,  5245,  5260,  5275,  5290,  5300,  5306,  5316,
  5322,  5325,  5329,  5339,  5352,  5364,  5368,  5374,  5378,  5382,
  5387,  5396,  5409,  5413,  5419,  5423,  5427,  5431,  5436,  5445,
  5457,  5460,  5466,  5470,  5474,  5478,  5487,  5502,  5505,  5511,
  5515,  5519,  5524,  5534,  5540,  5546,  5555,  5559,  5563,  5577,
  5580,  5592,  5621,  5624,  5627,  5635,  5651,  5659,  5662,  5683,
  5686,  5697,  5700,  5708,  5716,  5762,  5767,  5772,  5776,  5779,
  5781,  5786,  5793,  5797,  5801,  5806,  5812,  5818,  5831,  5842,
  5845,  5853,  5881,  5892,  5892,  5898,  5907,  5923,  5931,  5934,
  5939,  5941,  5944,  5953,  5956,  5964,  5976,  5987,  5992,  5997,
  6015,  6024,  6028,  6033,  6043,  6049,  6055,  6062,  6070,  6076,
  6081,  6086,  6093,  6107,  6129,  6132,  6133,  6134,  6137,  6141,
  6145,  6153,  6160,  6167,  6191,  6198,  6210,  6223,  6243,  6269,
  6302,  6322,  6352,  6355,  6363,  6370,  6377,  6381,  6385,  6389,
  6393,  6403,  6408,  6413,  6433,  6440,  6449,  6458,  6467,  6474,
  6482,  6486,  6495,  6499,  6503,  6511,  6517,  6522,  6531,  6539,
  6548,  6556,  6565,  6573,  6582,  6591,  6598,  6646,  6663,  6679,
  6698,  6718,  6749,  6753,  6765,  6769,  6784,  6790,  6796,  6802,
  6813,  6818,  6830,  6840,  6856,  6859,  6865,  6871,  6882,  6884,
  6885,  6886,  6887,  6888,  6889,  6890,  6891,  6892,  6893,  6894,
  6895,  6896,  6897,  6898,  6899,  6900,  6901,  6902,  6903,  6906,
  6908,  6909,  6910,  6911,  6912,  6913,  6914,  6915,  6916,  6917,
  6918,  6919,  6920,  6921,  6922,  6923,  6924,  6925,  6926,  6927,
  6928,  6929,  6930,  6931,  6932,  6933,  6934,  6935,  6936,  6937,
  6938,  6939,  6940,  6941,  6942,  6943,  6944,  6945,  6946,  6949,
  6952,  6953,  6954,  6955,  6956,  6957,  6975,  6991,  6996,  7002,
  7005,  7010,  7018,  7021,  7024,  7034,  7042,  7053,  7069,  7091,
  7106,  7144,  7152,  7162,  7172,  7182,  7186,  7191,  7196,  7211,
  7216,  7221,  7240,  7257
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
   307,   307,   307,   307,   307,   307,   307,   307,   312,   312,
   312,   313,   313,   314,   314,   314,   315,   315,   316,   316,
   317,   317,   318,   318,   319,   319,   320,   320,   320,   321,
   321,   322,   322,   323,   323,   323,   324,   324,   325,   325,
   326,   326,   326,   327,   327,   328,   328,   329,   329,   329,
   329,   329,   329,   330,   330,   330,   331,   331,   332,   332,
   333,   333,   333,   333,   333,   334,   334,   334,   335,   335,
   336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
   336,   336,   336,   336,   336,   337,   337,   338,   338,   338,
   339,   339,   340,   340,   340,   340,   340,   340,   340,   341,
   341,   342,   342,   343,   343,   343,   343,   343,   343,   343,
   343,   343,   344,   345,   346,   344,   347,   347,   348,   348,
   349,   349,   349,   350,   350,   351,   351,   352,   352,   353,
   353,   354,   354,   355,   355,   356,   356,   356,   357,   357,
   358,   358,   359,   359,   359,   359,   360,   360,   361,   361,
   361,   362,   362,   363,   363,   363,   363,   363,   364,   364,
   364,   365,   365,   366,   366,   366,   366,   366,   367,   366,
   368,   366,   366,   369,   366,   366,   366,   366,   366,   366,
   370,   370,   371,   371,   371,   371,   372,   372,   372,   372,
   373,   373,   374,   374,   374,   375,   375,   376,   376,   376,
   376,   377,   377,   379,   380,   378,   378,   378,   378,   378,
   378,   378,   381,   381,   382,   383,   384,   382,   385,   385,
   385,   385,   385,   385,   385,   385,   386,   386,   387,   387,
   388,   388,   388,   389,   389,   390,   390,   390,   391,   390,
   390,   392,   392,   392,   393,   393,   394,   394,   394,   394,
   394,   394,   394,   394,   394,   395,   395,   396,   396,   397,
   397,   398,   398,   399,   399,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   401,   400,   402,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   403,   403,   404,
   404,   405,   405,   405,   406,   406,   407,   407,   407,   407,
   407,   408,   408,   409,   409,   409,   409,   409,   409,   410,
   410,   411,   411,   411,   411,   411,   412,   412,   413,   413,
   413,   413,   413,   413,   413,   413,   414,   414,   415,   415,
   416,   416,   416,   416,   416,   416,   417,   417,   418,   418,
   419,   419,   420,   420,   420,   420,   420,   421,   421,   421,
   421,   422,   422,   423,   423,   424,   424,   424,   425,   425,
   427,   426,   426,   428,   426,   426,   426,   429,   429,   430,
   430,   430,   431,   431,   432,   432,   432,   432,   432,   434,
   433,   435,   436,   435,   437,   437,   437,   437,   438,   437,
   437,   437,   439,   439,   440,   440,   440,   440,   441,   441,
   442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   443,   443,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   445,   445,   446,   446,   446,
   446,   446,   446,   446,   447,   447,   447,   447,   447,   447,
   447,   447,   447,   447,   448,   448,   448,   448,   449,   449,
   449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
   449,   449,   449,   449,   449,   449,   449,   449,   449,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   451,
   451,   451,   451,   451,   451,   451,   451,   452,   452,   452,
   452,   453,   453,   453,   453,   454,   454,   454,   454,   454,
   454,   454,   454,   455,   455,   456,   456,   457,   457,   457,
   457,   457,   457,   458
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
     6,     2,     2,     2,     2,     3,     2,     3,     3,     2,
     3,     1,     3,     0,     3,     6,     0,     4,     0,     2,
     3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
     4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
     3,     3,     4,     0,     4,     0,     2,     3,     3,     3,
     3,     3,     3,     0,     1,     2,     3,     1,     0,     2,
     3,     4,     3,     4,     5,     0,     4,     2,     0,     2,
     3,     3,     3,     3,     3,     3,     7,     3,     3,     3,
     3,     3,     7,     7,     7,     0,     2,     3,     1,     1,
     0,     2,     3,     4,     3,     4,     4,     4,     4,     0,
     4,     0,     2,     3,     3,     4,     4,     7,     3,     3,
     3,     3,     0,     0,     0,    18,     0,     4,     0,     2,
     3,     3,     3,     1,     3,     0,     3,     1,     3,     0,
     3,     0,     4,     0,     2,     3,     3,     3,     0,     4,
     0,     2,     3,     3,     3,     4,     0,     2,     3,     1,
     1,     0,     2,     3,     4,     3,     4,     4,     0,     4,
     2,     0,     2,     3,     3,     3,     3,     3,     0,     5,
     0,     7,     3,     0,     5,     3,     3,     3,     3,     3,
     0,     3,     0,     2,     2,     2,     4,     4,     4,     4,
     0,     2,     3,     3,     3,     0,     2,     3,     3,     3,
     3,     0,     2,     0,     0,     9,     3,     3,     3,     2,
     3,     5,     0,     2,     3,     0,     0,     9,     0,     1,
     1,     1,     1,     1,     1,     1,     4,     3,     0,     2,
     3,     1,     1,     0,     2,     3,     4,     4,     0,     5,
     1,     0,     4,     2,     0,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     2,     3,     0,     3,     1,
     3,     0,     3,     0,     2,     3,     3,     4,     4,     4,
     4,     5,     5,     2,     7,    11,     7,    13,    11,     9,
     7,     7,     7,     9,     9,     9,    11,    11,    17,    13,
    15,    11,    13,     0,     7,     0,     7,     7,    11,     5,
     5,     9,     9,     9,     5,     5,    11,     9,    14,    14,
     7,    12,    10,     7,     7,     7,     1,     1,     1,     0,
     2,     3,     3,     2,     0,     2,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     3,     4,     0,
     2,     3,     3,     3,     3,     4,     0,     2,     3,     3,
     3,     3,     3,     4,     4,     4,     0,     4,     0,     2,
     3,     3,     3,     3,     3,     3,     0,     2,     3,     1,
     0,     2,     3,     4,     4,     3,     4,     0,     4,     2,
     2,     0,     2,     3,     4,     0,     5,     5,     0,     2,
     0,     6,     3,     0,     4,     3,     3,     0,     2,     3,
     1,     1,     0,     2,     3,     3,     3,     3,     4,     0,
     8,     0,     0,     3,     7,     7,     8,    11,     0,    10,
     1,     6,     3,     6,     1,     1,     1,     1,     0,     3,
     1,     2,     2,    12,     2,    15,     4,    12,    17,    22,
    12,     0,     2,     3,     4,     4,     3,     2,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     5,     2,     2,     3,     9,     3,     2,     9,     2,
     9,     2,     9,     5,     3,     0,     2,     6,     8,     8,
    10,     1,     4,     1,     5,     4,     4,     7,     4,     7,
     5,     7,     5,     8,     0,     3,     5,     5,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     4,     4,     4,
     4,     4,     4,     4,     4,     4,     4,     6,     4,     4,
     4,     4,     4,     4,     6,     6,     6,     5,     2,     1,
     1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
     3,     1,     1,     3,     3,     3,     5,     3,     4,     4,
     6,     8,     8,     5,     5,     1,     1,     1,     1,     1,
     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   736,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   737,     0,     0,     0,
     0,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   739,   738,     0,     0,   743,    18,   740,   645,    42,
   204,   167,   180,   236,    91,   297,   379,   517,   548,     0,
     0,   632,     0,   634,     0,     0,     0,     0,    41,   571,
     0,   718,     0,     0,     0,    26,    25,    24,    22,    23,
    21,    39,    29,    31,    32,    33,    34,    30,    35,    36,
    37,    38,     0,     0,    85,    43,     0,   205,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   711,   710,   736,     0,     0,
     0,     0,     0,     0,   712,   713,   714,   715,   716,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   719,   670,     0,   720,   717,     0,
     0,     0,     0,     0,     0,     0,     0,    86,     0,     6,
     0,   209,     8,   206,   208,   169,     9,   182,    10,   241,
    11,   237,   240,   239,   736,     0,     7,    92,    97,    96,
   302,    12,   298,   301,   300,   384,    13,   380,   383,   382,
   521,    14,   518,   520,   553,    15,   549,   552,   551,   560,
     0,     0,     0,     0,   579,     0,     0,   736,    63,     0,
    61,   569,     0,    88,   592,     0,     0,   637,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   672,   673,     0,   722,     0,   723,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   709,   636,   639,   734,
   641,     0,   643,     0,     0,   741,     0,   635,   646,   736,
     0,    44,    50,    53,    52,     0,     0,     0,     0,     0,
     0,    98,     0,     0,     0,     0,     0,     0,     0,   633,
   581,     0,     0,     0,     0,     0,     0,     0,     0,   592,
     0,     0,     0,   592,    76,   736,    73,     0,    60,    71,
    80,     0,    57,     0,    62,     0,   735,   728,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   671,   721,     0,   726,     0,
   687,   686,   684,   685,   680,   682,   681,   683,   675,   674,
   676,   677,   678,   679,     0,     0,     0,     0,     0,     0,
     0,     0,    82,   718,     0,     0,     0,     0,     0,   207,
   210,     0,     0,   168,   170,     0,   102,     0,   181,   183,
     0,     0,     0,     0,     0,     0,   238,   242,     0,     0,
    85,     0,     0,     0,     0,   299,   303,     0,     0,   389,
   381,   385,   391,     0,     0,     0,     0,   519,   522,     0,
     0,     0,     0,     0,   550,   554,   562,     0,     0,   582,
   583,   102,   585,     0,     0,     0,     0,     0,     0,     0,
   577,   578,   575,   576,   573,     0,     0,   592,     0,     0,
     0,    85,     0,     0,     0,    89,     0,     0,   593,   729,
   730,     0,     0,     0,     0,   688,   689,   690,   691,   692,
   693,   694,   695,   696,   697,     0,   699,   700,   701,   702,
   703,   704,     0,     0,     0,     0,   724,   725,     0,     0,
   642,     0,   744,   742,   648,   647,     0,     0,    47,     0,
    85,   736,     0,     0,     0,     0,   216,     0,     0,   173,
     0,   187,     0,     0,     0,   108,     0,   289,     0,   736,
     0,   250,   267,   282,   102,     0,     0,     0,     0,   736,
     0,   309,   333,   736,     0,   392,     0,   736,     0,   528,
    88,     0,     0,   562,     0,     0,     0,   563,     0,     0,
   628,     0,     0,     0,     0,     0,     0,     0,     0,   580,
   579,     0,     0,     0,   711,    78,    81,    72,     0,    77,
     0,    66,    58,    65,   572,   718,   718,     0,     0,     0,
     0,     0,   718,     0,   626,   626,   626,   598,   599,     0,
     0,     0,   613,   614,   104,   618,   620,   622,     0,     0,
     0,     0,     0,   640,     0,     0,     0,     0,   638,   727,
   708,   644,    90,     0,     0,    64,     0,     0,     0,    45,
     0,     0,   216,     0,   213,   211,     0,     0,     0,   171,
     0,     0,     0,   185,   103,     0,   184,     0,   245,     0,
   243,     0,     0,     0,     0,   102,    93,    99,   306,     0,
   304,     0,     0,     0,   386,     0,   414,     0,   523,     0,
     0,   526,   555,   563,   556,   558,   557,   561,     0,     0,
     0,     0,   102,     0,   587,     0,     0,     0,   565,     0,
     0,     0,   566,     0,     0,    74,   592,    85,   610,   615,
   102,   607,     0,     0,   594,   597,   605,   606,   600,   601,
   604,   602,   603,   609,   608,     0,   611,   102,   617,     0,
     0,     0,     0,   625,   731,     0,     0,   698,   705,   706,
   707,    87,     0,    46,    49,    83,    51,     0,     0,   219,
   214,   218,   212,   175,   172,   189,   186,     0,     0,   736,
   649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
   659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     0,   149,     0,     0,     0,     0,   140,   142,     0,     0,
     0,     0,     0,     0,     0,     0,   109,   110,   138,     0,
   135,   717,   291,   249,   244,   252,   246,   269,   247,   284,
   248,    94,     0,   305,   312,   307,   311,     0,     0,     0,
     0,   308,   334,   336,   335,   387,   395,   388,   394,     0,
   524,   532,   527,   531,   530,   525,   559,   564,     0,   630,
   629,     0,     0,     0,     0,     0,     0,   574,   592,   567,
    79,    75,     0,     0,     0,     0,   595,   596,   627,     0,
   106,     0,     0,     0,     0,     0,     0,     0,    48,     0,
    54,   215,     0,     0,     0,   100,   101,   137,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   132,   131,   133,
     0,   157,   155,   152,   154,   153,   736,     0,   111,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   139,   164,
     0,     0,     0,     0,    95,     0,   352,   352,   363,   341,
     0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   444,   446,   390,   415,   467,
     0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
    59,    70,     0,     0,   102,   612,   105,   102,     0,     0,
     0,   624,   732,   733,     0,     0,     0,     0,     0,     0,
   102,   102,   102,   102,     0,     0,     0,   102,   217,   220,
     0,     0,   174,   176,     0,     0,     0,   188,   190,     0,
   108,     0,     0,     0,     0,   108,   108,     0,   134,     0,
   378,     0,   130,   129,   126,   127,   128,   122,   124,   123,
   125,   118,   119,   114,   117,   120,   115,   121,   156,   158,
   160,     0,   162,     0,     0,   136,     0,     0,     0,     0,
   290,   292,     0,     0,     0,     0,   104,   104,     0,     0,
   251,   253,     0,     0,     0,   268,   270,     0,     0,     0,
   283,   285,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   718,   324,   310,   313,   369,   369,   369,     0,     0,
     0,     0,     0,   718,     0,     0,     0,   393,   396,   405,
     0,     0,   102,   102,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   424,     0,   475,     0,   482,     0,   490,
   497,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   529,   533,   631,     0,     0,     0,     0,
     0,     0,     0,   570,    88,    68,     0,   107,     0,     0,
     0,    84,     0,     0,     0,     0,     0,   102,     0,   102,
     0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
   164,   194,     0,     0,   147,     0,   148,     0,   144,     0,
     0,     0,   108,   377,     0,   159,   161,     0,     0,     0,
     0,     0,     0,    88,     0,     0,   263,     0,     0,     0,
     0,     0,     0,   278,   280,     0,   274,   276,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   736,
   319,     0,     0,     0,     0,   108,     0,     0,     0,     0,
   370,   371,   372,   373,   374,   375,   376,     0,     0,   337,
   353,     0,   338,     0,   339,   364,     0,     0,     0,   346,
   340,   342,     0,     0,   408,     0,    88,     0,     0,     0,
   412,     0,   410,     0,     0,   416,     0,     0,   417,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   104,   104,   536,     0,     0,     0,     0,     0,
     0,     0,   568,    69,   102,     0,     0,     0,     0,   222,
   223,   228,   229,     0,   232,     0,   231,   225,   224,    85,
   226,   221,     0,   230,   178,   177,     0,     0,   191,   192,
     0,     0,   108,     0,   141,     0,     0,   112,   163,     0,
   165,   293,   294,   295,     0,   254,   255,     0,     0,     0,
    85,   259,   260,   261,   262,   271,    85,   273,    85,   272,
   287,   286,   288,   329,   327,   328,   317,   315,   316,   314,
     0,   331,   323,   330,   326,   318,     0,     0,     0,     0,
     0,     0,   360,   354,     0,   366,     0,     0,     0,   398,
   397,    85,   399,   406,   400,   403,   404,    85,   401,   402,
     0,     0,     0,   102,     0,     0,     0,     0,     0,   102,
     0,     0,     0,   102,     0,     0,   102,   418,   476,     0,
     0,   102,     0,     0,     0,     0,   419,   483,     0,     0,
     0,     0,     0,   102,   420,   491,     0,     0,     0,     0,
     0,     0,     0,     0,   421,   498,   102,     0,   102,   718,
   718,   718,     0,   718,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   469,   468,   470,   470,     0,   534,
     0,   718,     0,     0,     0,     0,     0,     0,     0,     0,
    55,   102,   102,     0,   102,   179,   196,   193,     0,   116,
     0,     0,     0,   151,     0,     0,   296,   256,     0,   257,
     0,   279,     0,   275,     0,   321,     0,     0,     0,   358,
   359,   361,     0,   357,   108,   365,   108,   343,   344,     0,
     0,     0,     0,   345,   347,   407,     0,   411,     0,   422,
   414,   423,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   414,     0,     0,     0,     0,     0,   414,     0,     0,
     0,     0,     0,     0,     0,     0,   414,     0,     0,     0,
     0,     0,   414,   414,     0,     0,   507,     0,   451,     0,
     0,     0,     0,     0,     0,   455,   456,     0,     0,     0,
     0,     0,     0,     0,   450,     0,     0,     0,     0,   535,
     0,     0,     0,     0,     0,     0,   616,   619,   621,   623,
     0,     0,     0,     0,     0,     0,   150,     0,     0,   143,
   113,     0,     0,     0,   281,   277,   331,     0,   320,   325,
     0,   355,   367,     0,     0,     0,     0,   409,   413,     0,
     0,   718,     0,   718,     0,     0,     0,     0,   102,     0,
   479,   477,   478,   480,   102,     0,   486,   484,   485,   487,
   488,   102,   495,   493,     0,   492,   494,   502,   501,   503,
     0,     0,   499,   500,     0,     0,     0,   102,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   718,   471,     0,   539,   539,     0,   718,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   195,   197,     0,     0,   166,     0,
     0,     0,   332,   362,     0,     0,   348,   349,   350,   351,
   425,   427,     0,     0,     0,     0,     0,   433,     0,     0,
   481,     0,   489,     0,   496,   505,   506,   509,   504,   448,
     0,     0,   431,   432,     0,     0,     0,     0,     0,   461,
   465,   466,     0,   464,     0,   445,     0,   718,   474,   447,
   369,   369,   591,     0,   584,   588,     0,     0,     0,   235,
   234,   227,   233,     0,     0,     0,     0,     0,     0,     0,
   146,     0,   258,   322,   108,     0,     0,     0,     0,     0,
     0,     0,     0,   102,     0,     0,     0,     0,   102,     0,
   102,     0,     0,     0,     0,     0,     0,   102,     0,   472,
   473,     0,     0,     0,   544,   538,     0,   540,   537,   718,
     0,     0,     0,   198,   199,   200,   201,   202,   203,     0,
     0,     0,     0,   414,   435,   436,     0,     0,     0,   434,
     0,     0,   414,     0,     0,     0,     0,   102,     0,     0,
   508,   510,     0,   430,     0,   452,   453,   454,     0,     0,
   458,     0,     0,     0,     0,     0,     0,     0,   541,     0,
     0,     0,     0,   145,     0,     0,     0,     0,     0,     0,
   718,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   102,     0,     0,     0,   463,     0,   546,
   547,   543,     0,   108,   586,     0,     0,     0,   264,   356,
   368,   426,   437,   438,     0,   414,     0,   442,   414,   516,
   511,   514,   515,   512,   513,   449,   429,     0,   414,   414,
   457,     0,   545,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   462,     0,   589,     0,    56,
     0,     0,   440,   414,   443,   428,     0,     0,   542,     0,
     0,     0,     0,   459,   460,     0,   265,     0,   441,     0,
     0,     0,     0,     0,   439,   590,    88,     0,     0,   266,
     0,     0,     0
};

static const short yydefgoto[] = {  2021,
     1,     2,     3,    22,    23,    24,   106,   181,   302,   645,
   303,  1006,  1641,   231,   485,   718,   232,   233,   603,   864,
   994,   339,   482,   340,   531,   179,   401,   345,   402,   112,
   198,   431,   545,   546,  1506,   872,   665,   666,   807,  1042,
  1535,   808,   895,   896,  1373,   890,   929,  1064,  1066,   109,
   308,   415,   659,   884,  1024,   110,   309,   420,   661,   885,
  1029,  1368,  1646,  1746,   107,   184,   307,   411,   654,   883,
  1020,   111,   192,   310,   428,   672,   932,  1082,  1390,  1978,
  2011,   673,   933,  1087,  1239,  1399,  1236,  1397,   674,   934,
  1092,   668,   931,  1072,   113,   203,   313,   437,   682,   936,
  1105,  1412,  1657,  1256,  1548,   683,   833,  1109,  1282,  1429,
  1565,  1106,  1271,  1555,  1755,  1108,  1276,  1557,  1756,  1272,
   809,   114,   208,   314,   442,   567,   686,   941,  1119,  1286,
  1432,  1292,  1438,   840,   979,  1160,  1161,  1507,  1626,  1724,
  1309,  1459,  1311,  1468,  1313,  1476,  1314,  1486,  1705,  1838,
  1892,   115,   213,   315,   449,   690,   981,  1165,  1509,  1801,
  1858,  1944,  1908,   116,   217,   316,   456,    25,   317,   578,
   699,    79,   342,   224,   476,   332,   330,   346,   489,   731,
   980,    26,   105,   810,   268,   166,   167,   269,   270,    27,
   169,    57,    58
};

static const short yypact[] = {-32768,
-32768,   117,  4158,  -200,  -170,   -99,   745,   122,  3926,   464,
   -59,   -56,   -45,   -42,   -32,   -24,   -14,    13,    23,    38,
    21,-32768,-32768,   627,-32768,-32768,    61,    92,    46,   331,
   334,   341,-32768,   344,   404,   438,   468,   471,-32768,   490,
-32768,   505,   508,   542,   560,   569,   578,   583,   638,   641,
   646,-32768,-32768,   174,   257,-32768,-32768,-32768,-32768,-32768,
   742,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   358,
    57,-32768,   305,-32768,   407,   422,   430,   452,-32768,-32768,
   419,  2373,  3858,  -156,   455,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   464,   464,   -41,   449,   123,-32768,    25,   119,
    73,   144,   472,   493,   178,   589,   334,   590,  3858,  3858,
   334,   311,    47,   724,  3858,-32768,-32768,   -19,   732,   491,
   497,   524,   529,   538,-32768,-32768,-32768,-32768,-32768,   552,
   556,   604,   606,   614,   620,   634,   636,   644,   670,   677,
   697,   699,   711,   726,   759,   765,   769,   771,   777,   780,
  3858,  3858,  3858,  3331,  2512,-32768,   762,-32768,-32768,   828,
  3795,   831,  3331,    82,   525,  -123,   878,-32768,   895,-32768,
  1015,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -149,   781,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   687,  2830,  5228,  1135,   783,   706,  1135,  -133,-32768,    24,
-32768,-32768,   784,   729,-32768,  4794,  1628,-32768,  1035,  1040,
  3858,  3858,   464,  3858,  3858,  3858,  3858,  3858,  3858,  3858,
  3858,  3858,  3858,  3858,  3858,  3858,  3858,  3858,  3858,  3858,
  3858,  3858,  3858,   464,   -66,   -66,  5255,  2512,   205,-32768,
  3858,  3858,  3858,  3858,  3858,  3858,  3858,  3858,  3858,  3858,
  3858,  3858,  3858,  3858,  3858,  3858,-32768,-32768,-32768,-32768,
-32768,   -57,-32768,  3858,   464,-32768,  3331,-32768,   816,    43,
   793,-32768,-32768,-32768,-32768,   -44,   431,    68,   322,   581,
    75,-32768,   521,   609,   485,   535,   788,  3858,  3858,-32768,
-32768,    47,    47,    31,   791,   792,   794,   796,   797,-32768,
    47,   690,  3753,-32768,  1050,    54,-32768,  3331,-32768,-32768,
-32768,   803,-32768,   798,-32768,    76,-32768,-32768,   264,   811,
   806,  4048,  4069,   814,  5282,  5309,  5336,  5363,  5390,  5417,
  5444,  5471,  5498,  5525,  4090,  5552,  5579,  5606,  5633,  5660,
  5687,  4122,  4143,  4164,   815,-32768,-32768,  3331,  3852,  3957,
  6327,  6342,  1980,  1980,   860,   860,   860,   860,    -8,    -8,
   -66,   -66,   -66,   -66,  1067,  5714,   825,   -31,  3805,     9,
   851,   852,-32768,  2290,   853,  3858,    32,  1079,   334,-32768,
-32768,   832,  1080,-32768,-32768,   833,    69,  1091,-32768,-32768,
   837,  1094,  1095,   841,   842,   859,-32768,-32768,   900,   876,
   182,  1132,  1133,   882,   885,-32768,-32768,  1144,   891,-32768,
-32768,-32768,-32768,  1147,   893,   334,  1152,-32768,-32768,   334,
   898,  1154,   464,  1167,-32768,-32768,-32768,  3978,  2442,   967,
-32768,    69,-32768,   919,  3331,   920,   921,   940,   240,   946,
-32768,-32768,-32768,-32768,-32768,  1197,   950,  6281,   241,  3910,
   945,   309,   325,  1077,    19,-32768,  1201,  3908,-32768,-32768,
-32768,  1205,  3858,  3858,  1204,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  3858,-32768,-32768,-32768,-32768,
-32768,-32768,  3858,  3858,  3858,  1206,  2512,-32768,  3858,  3858,
-32768,  1207,-32768,-32768,-32768,  6281,   951,  3858,-32768,    96,
   256,   -94,  1209,    96,  5741,   963,-32768,  1221,    52,-32768,
  1228,-32768,   983,   985,  1234,-32768,  1235,-32768,  1236,   167,
  1238,-32768,-32768,-32768,    69,  1017,  1239,  1243,  1242,   167,
  1244,-32768,-32768,   167,  1246,-32768,   997,   167,  1251,-32768,
   729,  1259,  1261,-32768,  1262,  1263,  1265,  1012,  3858,  3858,
-32768,  1269,  1013,  3331,   317,  3331,  3331,  3331,  1281,-32768,
   783,   464,   268,  1287,  1268,  6281,-32768,-32768,    36,-32768,
    47,-32768,-32768,-32768,-32768,  2604,  2604,  1039,  1290,   207,
  3858,  3858,  2604,  3858,  1295,-32768,-32768,-32768,-32768,  3858,
  1296,  2462,-32768,-32768,  1042,  1044,  1045,  1048,  1049,  1303,
  1056,  4185,  4206,-32768,  5768,  5795,  5822,  5849,-32768,  6281,
  6281,-32768,-32768,  4825,    96,-32768,  1305,  1306,  1309,-32768,
  1310,  1086,-32768,   332,-32768,-32768,  1061,  1312,   458,-32768,
   483,  3858,  1315,-32768,-32768,  2231,-32768,   502,-32768,  1314,
-32768,   507,   515,   530,  1320,    69,-32768,-32768,-32768,  1321,
-32768,   409,    62,  1322,-32768,   519,-32768,  1336,-32768,   645,
  1340,-32768,-32768,  1087,-32768,-32768,-32768,-32768,   627,   889,
  5876,  1062,    69,   436,-32768,   533,   540,   543,-32768,  1092,
  1105,  1359,-32768,  3858,     8,-32768,-32768,   269,-32768,-32768,
    69,-32768,   464,   464,-32768,  6281,  6281,-32768,  6281,-32768,
  1361,  1361,  1361,  6281,-32768,  3331,  6281,    69,-32768,  3858,
  3858,  3858,  3331,-32768,-32768,  3858,  3858,-32768,-32768,-32768,
-32768,-32768,  1363,-32768,-32768,  1111,-32768,  1307,   528,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  5903,  1117,   425,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1120,-32768,  1122,  1124,  1130,  1136,-32768,-32768,  1384,  2231,
  2231,  2231,  2231,  1393,   437,  1392,  6369,   -15,  1146,  1146,
-32768,  1149,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1391,-32768,-32768,-32768,-32768,  1141,  1142,  1150,
  1151,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1746,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  3858,-32768,
-32768,  3858,  1145,  1155,  1162,  1168,  1178,-32768,-32768,-32768,
  6281,-32768,   284,  1153,    67,  1165,-32768,-32768,-32768,   551,
-32768,   570,  4227,  4248,  4269,   582,  5930,  5957,-32768,  3858,
-32768,-32768,  1549,    93,   394,-32768,-32768,-32768,  1179,  1187,
  1179,  2231,  1399,  1401,  1188,  1190,  1170,  1189,  1189,  1189,
  3581,-32768,-32768,-32768,-32768,-32768,     3,  1184,-32768,  2231,
  2231,  2231,  2231,  2231,  2231,  2231,  2231,  2231,  2231,  2231,
  2231,  2231,  2231,  2231,  2231,  1443,  3858,  2131,-32768,  1191,
   446,   883,   323,   316,-32768,  3886,-32768,-32768,-32768,-32768,
   477,    56,    20,   101,  1195,  1196,  1198,  1199,  1200,  1202,
  1203,  1215,  1448,   -34,    15,    98,  1214,  1227,  1229,  1231,
  1232,  1237,  1240,  1241,  1247,  1222,  1245,  1250,  1252,  1253,
  1254,  1256,  1270,  1273,  1267,-32768,-32768,-32768,-32768,-32768,
    50,  4856,  4290,    69,  3331,  3331,  3331,  3331,   298,  1451,
-32768,-32768,   334,    24,    69,-32768,-32768,    69,  3858,  3858,
  3858,-32768,-32768,-32768,  4887,  1274,    47,    47,    47,    47,
   131,   149,    69,    69,  1275,  1454,  1470,   171,-32768,-32768,
    58,  1482,-32768,-32768,  1276,  1483,  1487,-32768,-32768,  1279,
-32768,  1283,  4027,  1302,  1294,-32768,-32768,  1304,-32768,  1255,
-32768,  2231,  6388,  1719,  1468,  1468,  1468,  1016,  1016,  1016,
  1016,   618,   618,  1189,  1189,  1189,  1189,  1189,-32768,-32768,
-32768,  1313,  6369,   304,  3635,-32768,  1488,    64,  1491,   334,
-32768,-32768,  1492,  1493,  1517,  1297,  1042,  1042,    47,    47,
-32768,-32768,  1524,    35,    37,-32768,-32768,  1545,   334,  1556,
-32768,-32768,  1564,  1567,  1568,    30,   334,  1569,  1573,  1574,
    47,  2604,-32768,-32768,-32768,   756,   818,   700,   500,  1578,
   334,    41,   464,  2604,   464,    42,  1582,-32768,-32768,-32768,
   334,  1583,    69,    69,  1584,  1590,  1594,  1596,  1597,  1598,
  1599,  1605,  1606,-32768,  3858,-32768,  3858,-32768,  3858,-32768,
-32768,    47,   464,  1607,  1608,  1610,  1611,  1612,  1623,   334,
   334,  1625,  1629,  1631,  1633,  1634,   334,  1637,   334,  1335,
  1389,  1386,   334,-32768,-32768,-32768,  3858,  1383,   584,   592,
   611,   615,  1642,-32768,   729,-32768,  1388,-32768,  4311,  4332,
  4353,-32768,  1432,  1649,  1687,  1688,  1694,    69,  1695,    69,
  1696,  1702,  1710,  1057,  1711,  1714,    69,  1715,  1717,  1725,
  1191,-32768,  1730,  1731,-32768,  1464,-32768,  2231,-32768,  1484,
  1490,  1486,-32768,-32768,  3462,-32768,-32768,  2231,  1498,   631,
  1743,  1747,  1748,   729,  1750,    53,  1505,  1753,  1760,  1761,
  1763,  1764,  1765,-32768,-32768,  1766,-32768,-32768,  1768,  1769,
  1770,  1771,  1772,  1773,  1774,  1776,  1777,  1784,  1785,   476,
-32768,  1786,  1787,  1788,  1789,-32768,  1792,  1793,  1795,  1548,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    47,  1796,-32768,
-32768,  1550,-32768,    47,-32768,-32768,  1551,  1802,  1803,-32768,
-32768,-32768,  1804,  1805,-32768,  1806,   729,  1807,  1809,  1810,
-32768,  1811,-32768,  1813,  1554,-32768,  1570,  1572,-32768,  1561,
  1566,  1571,  1577,  1579,  1585,  1586,  1587,  4374,   630,  4395,
   693,  4416,    63,   550,  1588,  1576,  1589,  1591,  1592,  1609,
  1613,  1614,  1575,  1617,  1619,  1620,  1621,  1622,  1624,  1638,
  1639,  1615,    45,    45,-32768,  1825,  4918,  1580,  1644,  1618,
  1647,  1648,-32768,-32768,    69,  3858,  3858,  3858,    24,-32768,
-32768,-32768,-32768,  1640,-32768,  1668,-32768,-32768,-32768,  1669,
-32768,-32768,  1670,-32768,-32768,-32768,  1838,   635,-32768,-32768,
    47,  6308,-32768,  3858,-32768,  1843,  1630,-32768,  6369,    47,
-32768,-32768,-32768,-32768,  1845,-32768,-32768,  1860,  1757,  1866,
  1669,-32768,-32768,-32768,-32768,-32768,   665,-32768,   694,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1650,  1656,-32768,-32768,-32768,-32768,  1679,  1929,  1930,  1932,
  1937,  1935,-32768,-32768,  1936,-32768,  1941,  1942,   421,-32768,
-32768,   696,-32768,-32768,-32768,-32768,-32768,   701,-32768,-32768,
  1944,  1684,  1961,    69,  1967,  1968,  3858,  3858,  1969,    69,
    47,  3858,  1709,    69,  3858,  3858,    69,-32768,-32768,  3858,
  1718,    69,  3858,  3858,  3858,  3858,-32768,-32768,  3858,  3858,
  3858,  1720,  3858,    69,-32768,-32768,  3858,  3858,  1972,  1721,
  1722,  3858,  3858,  1723,-32768,-32768,    69,  1977,    69,  2604,
  2604,  2604,  3858,  2604,  1978,  1979,  1974,  1982,  3858,  1984,
  1985,    47,  1987,  1986,-32768,-32768,-32768,-32768,    28,-32768,
  1734,  2604,  3331,  1735,  3331,  3331,  1737,  4949,  4980,  5011,
-32768,    69,    69,  1057,    69,-32768,-32768,-32768,  1741,-32768,
  1745,  4437,  1751,-32768,  2231,  1759,-32768,-32768,  1996,-32768,
  1998,-32768,  2000,-32768,  2003,-32768,   334,  2012,  2019,-32768,
-32768,-32768,  1775,-32768,-32768,-32768,-32768,-32768,-32768,  1179,
  1179,  1179,    47,-32768,-32768,-32768,   334,-32768,   334,-32768,
-32768,-32768,  1779,  1782,  1794,  4458,  4479,  1798,  1816,  1800,
  4500,-32768,  2020,   931,   952,  2024,  4521,-32768,  2025,   987,
  1046,  1118,  1148,  4542,  1186,  1233,-32768,  1280,  2026,  1308,
  1453,  2030,-32768,-32768,  1496,  1778,-32768,   307,-32768,  1801,
  1821,  1822,  1823,  4563,  1826,-32768,-32768,  1827,  1828,  5984,
  1829,  1832,  1831,   714,-32768,   365,   384,  1790,  1797,-32768,
  3858,  1833,   731,  3858,   735,   737,-32768,-32768,-32768,-32768,
  1834,  1842,  1848,  1847,  1854,   880,-32768,  1861,  3858,-32768,
  6369,  1858,  2042,  1859,-32768,-32768,  1656,  1868,-32768,-32768,
  2051,-32768,-32768,  2057,  2076,  2114,  2115,-32768,-32768,  2654,
  2119,  2604,  3858,  2604,  3858,  2122,  2121,  2124,    69,  2725,
-32768,-32768,-32768,-32768,    69,  2777,-32768,-32768,-32768,-32768,
-32768,    69,-32768,-32768,  2845,-32768,-32768,-32768,-32768,-32768,
  2963,  3028,-32768,-32768,   740,  2123,  3858,    69,  2125,  2126,
  3858,   464,   464,  3858,  3858,  2130,  2132,  2133,   464,  2134,
  2007,  2136,  2527,-32768,  2137,-32768,-32768,  5042,  2604,  1870,
  5073,  1877,  1885,  1890,  2141,  2142,  2143,  2145,  2149,  3858,
  3858,  3858,  3858,  3858,-32768,-32768,  1895,  5104,-32768,  2045,
  2150,  2151,-32768,-32768,  1897,  1928,-32768,-32768,-32768,-32768,
  2177,-32768,  1939,  6011,  1950,  4584,  1951,-32768,  1959,  1954,
-32768,  1960,-32768,   411,-32768,-32768,-32768,-32768,-32768,-32768,
  4605,   454,-32768,-32768,  6038,  1973,  1975,  4626,  4647,-32768,
-32768,-32768,   741,-32768,   464,-32768,   464,  2604,-32768,-32768,
  1738,  2224,-32768,  1970,-32768,-32768,  1946,  3331,    24,-32768,
-32768,-32768,-32768,  2222,  1808,  1835,  1867,  1964,  2198,  3858,
-32768,  2228,-32768,-32768,-32768,  1179,  1981,  2232,  2233,  3858,
  3858,  3858,  2235,    69,  3858,  1983,  3858,    89,    69,  2237,
    69,  2238,  2240,  2241,  3858,  3858,  2242,    69,   748,-32768,
-32768,  2245,  2246,  2247,-32768,-32768,  2001,-32768,-32768,  2604,
  3858,   750,  1976,-32768,-32768,-32768,-32768,-32768,-32768,  5135,
  1994,  2002,  2004,-32768,-32768,-32768,  6065,  6092,  4668,-32768,
  2035,  4689,-32768,  6119,  2251,  2253,  3858,    69,  2292,    47,
-32768,-32768,  2043,-32768,   469,-32768,-32768,-32768,  6146,  6173,
-32768,  2039,  2294,  2298,  2296,  2297,  2299,    47,-32768,  2047,
  4710,  2048,  3858,-32768,  2304,  2305,  2306,  3083,  2312,  2338,
  2604,  2095,  3858,  3146,  2096,  2350,  2351,  2359,  2354,  2355,
  2356,  2357,  2358,    69,  2107,  2109,  2363,-32768,  2110,-32768,
-32768,-32768,  2365,-32768,-32768,  3858,  2113,  6200,-32768,-32768,
-32768,-32768,-32768,-32768,  2128,-32768,  6227,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2129,-32768,-32768,
-32768,  2374,-32768,  2138,  5166,  3858,  2378,  2330,  3858,  3266,
  2135,  3334,  2387,  3386,  3454,-32768,  2389,-32768,  4731,-32768,
    47,  4752,-32768,-32768,-32768,-32768,  2395,  2421,-32768,  3858,
  2427,  3858,  3572,-32768,-32768,  4773,-32768,  6254,-32768,  3858,
  2307,  2433,  5197,  2441,-32768,-32768,   729,  2440,  2187,-32768,
  2451,  2452,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -301,-32768,-32768,  -308,  1385,-32768,-32768,
  1387,  -478,-32768,  -531,-32768,  -383,  -530,  -570,-32768,-32768,
-32768,-32768,   312,-32768,  -606,-32768,  -966,-32768,  -660,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1651,-32768,  1257,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1817,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   800,-32768,-32768,-32768,-32768,-32768,
-32768,  1516,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1098,
  -753,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1395,-32768,-32768,-32768,  1125,   954,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   733,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1889,
-32768,  1780,-32768,  2342,-32768,  1878,  2244,  -309,-32768,   405,
   -18,   -58,-32768,-32768,   115,  -460,  -562,  -171,   -78,-32768,
    -3,   -72,   -77
};


#define	YYLAST		6639


static const short yytable[] = {    28,
   691,   292,   430,   168,   170,    80,   604,     4,   658,  1277,
   335,   527,   336,   460,   461,   463,   888,    70,   739,   670,
   469,   335,   470,   336,   479,     4,   335,    85,   336,   680,
   175,   176,  1628,   684,  1246,   228,   536,   688,   335,  1234,
   336,  1237,   108,   719,   720,     4,     4,   558,   185,  1505,
   728,   228,   194,   200,   205,   210,   214,   219,   656,  1387,
     4,   118,   228,    29,  1206,   349,     4,   716,   646,  1211,
  1212,   992,     5,     6,    71,    72,    73,     4,    74,   228,
  1470,    30,   602,     5,     6,    71,    72,    73,   293,    74,
    11,   543,   193,   199,   204,   209,   172,   218,   599,   229,
   646,    11,   533,    28,   311,   173,  1885,    28,    28,    28,
    28,    28,    28,   220,    29,   229,    -2,   225,   225,   234,
   -64,  1199,   305,   543,  1162,   398,   229,     4,    39,   296,
    29,   993,   229,     5,     6,  1030,  1247,  1032,   297,   898,
   899,   900,   901,   229,  1629,  1163,  1248,   649,   195,   412,
  1471,    11,    31,   543,     5,     6,    71,    72,    73,   -64,
    74,  1021,   304,   413,   229,   237,   483,   544,   593,    29,
   354,   543,    11,  1022,  1886,  1670,  1887,   306,   828,   829,
   830,   831,     4,   862,   286,   404,  1680,  1888,     5,     6,
   287,   375,  1686,   543,    59,   395,   165,   171,   405,   544,
  1889,  1695,  1472,    60,   378,   811,    11,  1701,  1702,   406,
   196,    52,    53,   177,    61,    54,    55,    62,  1890,  1135,
   178,   524,   397,  1473,  1474,  1136,   341,    63,   647,   544,
   378,  1033,   651,   222,   223,    64,   283,   284,   285,   236,
   237,   926,   286,   927,    29,    65,  1377,   544,   287,  1043,
  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,  1053,
  1054,  1055,  1056,  1057,  1058,   528,    29,  1063,  1137,   544,
   338,   120,    66,  1123,  1138,   265,   266,   267,   337,   715,
    69,   338,    67,   337,   186,   187,   338,   230,  1630,  1417,
   462,   537,   717,   585,  1235,   443,  1238,    68,   338,   518,
  1285,  1291,   400,   230,   738,    83,    29,   234,   119,  1121,
  1164,   657,   657,   481,   230,     4,   226,    29,   234,   234,
   234,    82,   832,  1475,    81,   168,   170,   234,   414,   429,
   487,   230,   190,   191,   865,   294,    84,   488,     4,   811,
   811,   811,   811,   753,    71,    72,    73,    86,    74,  1891,
    87,  1139,   230,  1023,  1124,   352,   353,  1140,   355,   356,
   357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
   367,   368,   369,   370,   371,   372,   373,   374,   188,   189,
   576,  1215,   182,   183,  1188,   379,   380,   381,   382,   383,
   384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
   394,  1088,  1190,   416,   197,   539,  1531,   863,   396,   417,
    88,  1089,   704,  1090,   706,   707,   708,   418,  1083,   551,
  1084,    71,    72,    73,  1197,    74,   657,   103,  1085,   561,
    29,   811,   458,   459,   565,    56,   557,   211,   212,   903,
   569,   904,   571,   178,    89,   723,   573,   478,   724,   811,
   811,   811,   811,   811,   811,   811,   811,   811,   811,   811,
   811,   811,   811,   811,   811,   377,   378,   811,    52,    53,
  1229,  1230,    54,    55,    90,  1025,     4,    91,  1918,  1026,
  1027,   341,     5,     6,    71,    72,    73,  1924,    74,    71,
    72,    73,   517,    74,   589,   594,    92,     4,  1560,  1561,
    11,   488,   488,     5,     6,    71,    72,    73,   104,    74,
   648,    93,   407,   526,    94,  1176,   408,   178,   165,   711,
   535,    11,   712,   -67,   490,   378,   409,   168,   168,   488,
   178,    71,    72,    73,   168,    74,  1562,   725,   990,  1255,
    71,    72,    73,  1067,    74,   488,   117,  1372,    95,   989,
  1563,  1289,  1173,  1068,  1069,  1070,   120,  1379,  1217,   488,
  1980,  1706,  1110,  1982,   870,  1218,    96,  1477,  1707,   598,
   178,   876,  1111,  1984,  1985,    97,  1091,   705,   378,   905,
   444,   811,   419,  1086,    98,  1278,   378,   600,  1662,    99,
  1663,   760,   761,     4,   596,   341,   445,   234,  2003,     5,
     6,    71,    72,    73,  1344,    74,   432,   632,   633,  1279,
  1112,  1113,  1114,  1115,  1116,  1117,   433,    11,   446,  1722,
   635,    71,    72,    73,   835,    74,  1723,   636,   637,   638,
   450,   845,   434,   640,   641,   762,   435,  1478,  1725,    71,
    72,    73,   644,    74,   100,  1723,   906,   101,   421,     4,
   867,   868,   102,  1385,  1028,     5,     6,    71,    72,    73,
   121,    74,   812,   827,   834,  1836,   422,   839,   825,   826,
   447,   844,  1837,    11,   451,   122,   423,   424,   125,    28,
    80,  1564,  1479,   123,   806,   425,    28,   426,    29,  1480,
  1481,   410,    56,   700,   701,  1388,   854,   378,  1184,  1185,
  1186,  1187,  1857,  1857,   438,   124,  1071,   174,  1840,   180,
  1482,   341,  1200,  1483,  1484,  1841,  1434,   764,   765,   221,
   165,   165,   452,  1933,   453,   726,   727,   165,   729,   235,
  1934,   201,   202,  1360,   734,  1411,   737,  1118,   238,    29,
   762,   439,   766,   767,   239,   448,   454,   811,   440,    32,
   240,    33,   206,   207,    71,    72,    73,   811,    74,  1280,
  1281,   813,   814,    34,    35,    36,   816,   817,   288,  1453,
  1231,  1232,  1454,   583,   818,   819,   768,   241,   837,   838,
    37,   436,   242,  1455,  1456,  1457,   295,   760,   882,   820,
   821,   243,  1254,   855,   378,   455,   812,   812,   812,   812,
   856,   378,   908,   857,   378,   244,  1664,  1665,  1666,   245,
  1485,   996,   378,  1169,  1170,  1171,  1172,    75,    76,    77,
    78,  1261,  1262,  1263,  1264,  1265,  1266,  1267,   861,  1274,
   997,   998,  1461,  1315,   289,  1462,  1257,   291,  1258,  1259,
  1260,   427,  1002,   378,  1339,   378,  1463,  1464,   215,   216,
  1465,  1466,  1340,   378,   873,   874,   875,   246,  1872,   247,
   877,   878,   921,   922,   923,   924,   675,   248,   925,   441,
  1521,  1341,   378,   249,  1651,  1342,   378,  1261,  1262,  1263,
  1264,  1265,  1266,  1267,   298,  1268,  1269,   250,   812,   251,
  1458,  1381,   378,  1220,  1527,  1528,   849,   252,  1257,   299,
  1258,  1259,  1260,  1040,   842,   843,   812,   812,   812,   812,
   812,   812,   812,   812,   812,   812,   812,   812,   812,   812,
   812,   812,  1120,   253,   812,  1542,   178,  1611,  1612,  1613,
   254,  1615,   471,   472,   473,   474,    38,  1682,  1122,  1261,
  1262,  1263,  1264,  1265,  1266,  1267,   318,  1268,  1269,  1632,
   255,   475,   256,  1467,  1544,   178,  1566,   178,  1683,  1422,
  1275,  1568,   178,   982,   257,  1425,   983,   333,  1739,  1740,
  1741,  1742,  1743,  1744,  1720,  1721,  1524,  1974,  1073,   258,
  1074,  1075,  1076,  1077,  1078,  1079,  1080,   823,   344,  1175,
   341,  1730,   378,  1688,  1005,  1732,   378,  1733,   378,  1778,
  1779,  1847,  1848,   234,   234,   234,   234,  1541,  1903,  1904,
  1912,   378,   259,  1543,   853,  1545,  1270,   234,   260,   300,
   732,   733,   261,   168,   262,     5,     6,    71,    72,    73,
   263,    74,   866,   264,   312,   168,   331,   343,   812,   350,
  1288,  1060,  1290,    11,   351,   399,   403,   457,  1567,   871,
   464,   465,  1689,   466,  1569,   467,   468,   480,   486,   126,
   127,     4,  1529,  1644,   484,   491,  1224,   492,   495,   516,
  1316,  1536,  1873,   521,   811,   234,   234,   301,  1273,   523,
   529,   530,   534,   538,   541,  1241,   135,   136,   137,   138,
   139,   540,   542,  1249,  1251,   547,   548,   234,   549,   550,
   552,   553,   281,   282,   283,   284,   285,  1284,  1287,  1763,
   286,  1765,  1293,  1179,  1180,  1181,   287,  1295,   554,   272,
   273,   274,   275,   276,  1690,   277,   278,   279,   280,   555,
   556,   281,   282,   283,   284,   285,   559,   560,   234,   286,
  1745,   562,  1580,  1081,   563,   287,  1323,  1324,   564,   850,
   566,   568,   570,  1330,  1691,  1332,   572,   574,   575,  1336,
  1799,   272,   273,   274,   275,   276,  1804,   277,   278,   279,
   280,   577,   582,   281,   282,   283,   284,   285,   584,   586,
   587,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1693,  1623,   281,   282,   283,   284,   285,   588,
   590,   591,   286,   592,   812,   597,   601,   605,   287,   631,
   634,   643,   639,   642,   812,   650,   165,   272,   273,   274,
   275,   276,   653,   277,   278,   279,   280,   655,   165,   281,
   282,   283,   284,   285,   660,  1851,   662,   286,   663,  1694,
   664,   667,   669,   287,   671,   677,   676,   678,   679,  1308,
   681,  1310,   685,  1312,  1667,  1125,   687,   689,   919,   920,
   921,   922,   923,   924,   234,   692,   925,   693,   695,   696,
   234,   697,   698,   702,   703,   714,   272,   273,   274,   275,
   276,  1337,   277,   278,   279,   280,  1696,   709,   281,   282,
   283,   284,   285,   713,   722,  1168,   286,  1910,   721,   730,
   735,   738,   287,   740,   741,   744,  1177,   742,   743,  1178,
   745,   754,   755,   756,  1698,   758,   757,   528,   763,   769,
   815,   852,  1189,  1191,  1192,  1193,   822,   824,   836,  1198,
  1863,   321,   322,   323,   324,   325,   326,   327,   328,   329,
  1915,  1633,   841,  1635,  1636,   341,   846,   847,   272,   273,
   274,   275,   276,   858,   277,   278,   279,   280,  1955,   859,
   281,   282,   283,   284,   285,   860,   869,   234,   286,   879,
   880,   887,   881,   889,   287,   891,   234,   892,   272,   273,
   274,   275,   276,   893,   277,   278,   279,   280,   897,   894,
   281,   282,   283,   284,   285,   902,   907,   935,   286,   928,
   937,   938,  -669,  1034,   287,  1035,   984,   991,  1038,   939,
   940,   168,   168,   168,   985,   168,   272,   273,   274,   275,
   276,   986,   277,   278,   279,   280,   995,   987,   281,   282,
   283,   284,   285,   168,  1297,  1298,   286,   988,   806,   925,
  1031,  1036,   287,  1037,  1041,  1059,  2018,   234,  1126,  1127,
  1065,  1128,  1129,  1130,  1134,  1131,  1132,  1174,  1195,  1699,
  1518,  1519,  1520,   272,   273,   274,   275,   276,  1133,   277,
   278,   279,   280,  1141,  1196,   281,   282,   283,   284,   285,
  1142,  1150,  1143,   286,  1144,  1145,  1201,  1203,  1532,   287,
  1146,  1204,  1221,  1147,  1148,   992,  1225,  1226,   234,  1354,
  1149,  1356,  1703,  1152,  1151,  1153,  1154,  1155,  1363,  1156,
   272,   273,   274,   275,   276,  1214,   277,   278,   279,   280,
  1159,  1227,   281,   282,   283,   284,   285,  1183,  1233,  1157,
   286,   812,  1158,  1205,  1194,  1202,   287,  1207,   272,   273,
   274,   275,   276,  1658,   277,   278,   279,   280,  1210,  1240,
   281,   282,   283,   284,   285,  1209,  1228,  1213,   286,   234,
  1242,  1576,  1577,  1668,   287,  1669,  1581,  1216,  1243,  1584,
  1585,  1244,  1245,  1250,  1587,  1252,  1253,  1590,  1591,  1592,
  1593,  1931,  1283,  1594,  1595,  1596,  1294,  1598,  1333,  1296,
  1299,  1600,  1601,   168,  1300,   168,  1605,  1606,  1301,  1943,
  1302,  1303,  1304,  1305,   165,   165,   165,  1614,   165,  1306,
  1307,  1317,  1318,  1620,  1319,  1320,  1321,  1007,  1008,  1009,
  1010,  1011,  1012,  1013,  1014,  1015,   165,  1322,  1016,  1325,
   126,   127,   128,  1326,  1017,  1327,  1862,  1328,  1329,  1786,
  1787,  1331,  1334,  1338,   168,  1335,  1793,  1018,  1343,  1345,
   168,   130,   131,   132,   133,  1350,  1517,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,  2001,   272,   273,   274,   275,   276,  1349,   277,
   278,   279,   280,  1351,  1352,   281,   282,   283,   284,   285,
  1353,  1355,  1357,   286,   915,   916,   917,   918,  1358,   287,
   919,   920,   921,   922,   923,   924,  1359,  1361,   925,   168,
  1362,  1364,  1849,  1365,  1850,  1371,   272,   273,   274,   275,
   276,  1366,   277,   278,   279,   280,  1369,  1370,   281,   282,
   283,   284,   285,  1374,  1375,  1728,   286,  1376,  1731,  1382,
   942,  1380,   287,  1383,  1384,  1573,  1386,  1391,    71,    72,
   943,  1579,    74,  1748,  1389,  1583,  1392,  1393,  1586,  1394,
  1395,  1396,  1398,  1589,  1400,  1401,  1402,  1403,  1404,  1405,
  1406,   168,  1407,  1408,  1704,  1599,   165,  1764,   165,  1766,
  1409,  1410,  1413,  1414,  1415,  1416,  1418,  1419,  1608,  1420,
  1610,  1421,  1423,  1424,  1426,   341,  1427,  1428,  1441,  1019,
  1430,  1431,  1433,  1435,  1865,  1436,  1437,  1439,  1852,  1440,
  1853,  1781,  1444,  1854,  1442,  1785,  1443,  1445,  1788,  1789,
  1488,  1510,  1446,  1642,  1643,  1495,  1645,   165,  1447,  1512,
  1448,  1866,   168,   165,  1526,  1533,  1449,  1450,  1451,  1487,
  1489,  1537,  1490,  1491,  1815,  1816,  1817,  1818,  1819,  1261,
  1262,  1263,  1264,  1265,  1266,  1267,  1538,  1855,  1539,  1504,
  1492,   161,  1540,  1867,  1493,  1494,   162,  1496,  1514,   163,
  1497,  1498,  1499,  1500,  1534,  1501,   234,   944,   348,   945,
   946,   947,   948,   949,   950,   951,   952,   953,   954,  1502,
  1503,  1522,   955,  1513,   234,   956,  1515,  1516,   957,  1547,
  1546,   958,   165,   959,   960,   961,   962,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,   974,  1523,
   178,  1525,   975,  1549,  1870,  1550,  1551,   976,  1552,  1553,
   977,  1554,  1556,  1571,  1877,  1878,  1879,  1558,  1559,  1882,
  1570,  1884,   912,   913,   914,   915,   916,   917,   918,  1899,
  1900,   919,   920,   921,   922,   923,   924,  1572,  1582,   925,
  1868,  1574,  1575,  1578,   165,  1911,  1602,  1588,  1618,  1597,
  1603,  1604,  1607,  1609,  1616,  1617,  1619,   234,  1621,  1622,
  1770,  1624,  1625,  1631,  1634,  1647,  1772,  1637,  1856,  1648,
  1653,  1928,  1654,  1774,  1655,  1650,   978,  1656,   272,   273,
   274,   275,   276,  1652,   277,   278,   279,   280,  1659,  1782,
   281,   282,   283,   284,   285,  1660,  1681,  1948,   286,  1661,
  1684,  1687,  1697,  1671,   287,   165,  1700,  1957,   272,   273,
   274,   275,   276,  1672,   277,   278,   279,   280,  1750,  1726,
   281,   282,   283,   284,   285,  1673,  1727,  1754,   286,  1676,
  1975,  1678,  1708,  1757,   287,   272,   273,   274,   275,   276,
  1677,   277,   278,   279,   280,  1709,  1710,   281,   282,   283,
   284,   285,  1758,  1717,  1711,   286,  1718,  1713,  1714,  1715,
  1989,   287,  1719,  1992,  1729,  1734,  1735,   272,   273,   274,
   275,   276,  1736,   277,   278,   279,   280,  1737,  1738,   281,
   282,   283,   284,   285,  2006,  1747,  2008,   286,  1749,  1751,
  1759,  1760,  1753,   287,  2013,  1762,  1767,  1768,  1769,  1780,
  1805,  1783,  1784,   126,   127,   770,  1790,  1807,  1791,  1792,
  1794,  1795,  1796,  1800,  1808,  1881,  1809,  1810,  1811,  1812,
  1893,  1813,  1895,  1814,  1820,  1822,  1823,  1824,  1825,  1902,
   135,   136,   137,   138,   139,   771,   772,   773,   774,   775,
   776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
   786,   787,   788,   789,   790,   791,   792,   793,   794,  1826,
   795,   796,  1827,  1828,   272,   273,   274,   275,   276,  1929,
   277,   278,   279,   280,  1869,  1861,   281,   282,   283,   284,
   285,  1830,  1832,  1833,   286,  1834,   277,   278,   279,   280,
   287,  1835,   281,   282,   283,   284,   285,  1843,  1864,  1844,
   286,  1860,  1871,   126,   127,   770,   287,  1913,  1875,  1876,
  1874,  1880,  1883,  1894,  1896,  1968,  1897,  1898,  1901,  1905,
  1906,  1907,   797,   657,  1909,  1926,  1916,  1927,  1917,   798,
   135,   136,   137,   138,   139,   771,   772,   773,   774,   775,
   776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
   786,   787,   788,   789,   790,   791,   792,   793,   794,  1922,
   795,   796,   126,   127,   532,   129,  1930,  1932,    54,  1937,
  1938,  1939,  1940,  1941,  1852,  1942,  1853,  1945,  1947,  1854,
  1949,  1950,  1951,   130,   131,   132,   133,   134,  1953,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,  1954,  1261,  1262,  1263,  1264,  1265,
  1266,  1267,   797,  1855,  1956,  1959,  1960,  1961,   229,   798,
  1963,  1964,  1965,  1966,  1967,  1962,  1969,   799,  1970,  1971,
  1972,  1973,  1976,   800,   801,   126,   127,   128,   129,   802,
  1986,    54,   803,  1983,  1990,  1061,  1062,   804,   805,  1979,
   806,  1991,  1987,  1996,  1994,  1999,   130,   131,   132,   133,
   134,  2004,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,  2005,   272,   273,
   274,   275,   276,  2007,   277,   278,   279,   280,  2014,  2015,
   281,   282,   283,   284,   285,  2017,  2019,  2020,   286,   580,
  2022,  2023,  1222,  1107,   287,  1223,  1752,  1367,  1508,  1802,
   930,  1627,   694,   227,   126,   127,     4,   799,   710,   759,
   334,     0,     0,   800,   801,     0,     0,     0,   848,   802,
     0,     0,   803,     0,  1859,     0,     0,   804,   805,     0,
   806,   135,   136,   137,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,     0,   160,     0,   271,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   126,
   127,   128,     0,   161,     0,     0,     0,     0,   162,     0,
     0,   163,     0,     0,     0,     0,   230,     0,     0,   164,
   130,   131,   132,   133,     0,     0,   135,   136,   137,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,     0,     0,     0,     0,     0,     0,     0,     0,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
   160,   281,   282,   283,   284,   285,   126,   127,   128,   286,
     0,     0,     0,     0,     0,   287,   161,     0,     0,     0,
     0,   162,     0,     0,   163,     0,     0,   130,   131,   132,
   133,     0,   164,   135,   136,   137,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   942,     0,
     0,     0,     0,     0,     0,     0,    71,    72,   943,     0,
    74,     0,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,   581,     0,     0,     0,   287,     0,
     0,     0,     0,     0,     0,   161,     0,     0,     0,     0,
   162,     0,     0,   163,     0,     0,     0,     0,     0,     0,
     0,   736,     0,     0,     0,     0,     0,     0,     0,   942,
     0,     0,     0,  1797,     0,     0,  1798,    71,    72,   943,
     0,    74,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
   161,     0,     0,     0,     0,   162,     0,     0,   163,     0,
     0,   942,     0,     0,     0,     0,   164,     0,     0,    71,
    72,   943,     0,    74,     0,   944,     0,   945,   946,   947,
   948,   949,   950,   951,   952,   953,   954,     0,     0,     0,
   955,     0,     0,   956,     0,     0,   957,     0,     0,   958,
     0,   959,   960,   961,   962,   963,   964,   965,   966,   967,
   968,   969,   970,   971,   972,   973,   974,   319,     0,     0,
   975,     0,     0,     0,     0,   976,     0,   161,   977,   942,
     0,     0,   162,     0,     0,   163,     0,    71,    72,   943,
     0,    74,     0,   164,     0,     0,   944,     0,   945,   946,
   947,   948,   949,   950,   951,   952,   953,   954,     0,     0,
     0,   955,     0,     0,   956,     0,     0,   957,     0,     0,
   958,     0,   959,   960,   961,   962,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,   973,   974,     0,     0,
     0,   975,     0,     0,  1761,     0,   976,     0,   944,   977,
   945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     0,     0,     0,   955,     0,     0,   956,     0,     0,   957,
     0,     0,   958,     0,   959,   960,   961,   962,   963,   964,
   965,   966,   967,   968,   969,   970,   971,   972,   973,   974,
     0,     0,     0,   975,     0,     0,     0,   942,   976,     0,
     0,   977,     0,     0,     0,    71,    72,   943,     0,    74,
     0,     0,     0,     0,     0,  1771,   944,     0,   945,   946,
   947,   948,   949,   950,   951,   952,   953,   954,     0,     0,
     0,   955,     0,     0,   956,     0,     0,   957,     0,     0,
   958,     0,   959,   960,   961,   962,   963,   964,   965,   966,
   967,   968,   969,   970,   971,   972,   973,   974,     0,     0,
     0,   975,   942,     0,     0,     0,   976,  1773,     0,   977,
    71,    72,   943,     0,    74,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,   942,     0,     0,
     0,     0,     0,     0,     0,    71,    72,   943,     0,    74,
     0,     0,     0,     0,   944,  1775,   945,   946,   947,   948,
   949,   950,   951,   952,   953,   954,     0,     0,     0,   955,
     0,     0,   956,     0,     0,   957,     0,     0,   958,     0,
   959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
   969,   970,   971,   972,   973,   974,     0,     0,     0,   975,
   942,     0,     0,     0,   976,     0,     0,   977,    71,    72,
   943,     0,    74,     0,     0,     0,     0,     0,     0,   944,
     0,   945,   946,   947,   948,   949,   950,   951,   952,   953,
   954,     0,     0,     0,   955,     0,     0,   956,     0,     0,
   957,     0,     0,   958,     0,   959,   960,   961,   962,   963,
   964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
   974,     0,     0,     0,   975,     0,     0,     0,     0,   976,
     0,     0,   977,  1776,   944,     0,   945,   946,   947,   948,
   949,   950,   951,   952,   953,   954,     0,     0,     0,   955,
     0,     0,   956,     0,     0,   957,     0,     0,   958,     0,
   959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
   969,   970,   971,   972,   973,   974,     0,     0,     0,   975,
   942,     0,     0,     0,   976,     0,     0,   977,    71,    72,
   943,     0,    74,     0,     0,     0,     0,   944,  1777,   945,
   946,   947,   948,   949,   950,   951,   952,   953,   954,     0,
     0,     0,   955,     0,     0,   956,     0,     0,   957,     0,
     0,   958,     0,   959,   960,   961,   962,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,   974,     0,
     0,     0,   975,   126,   127,   128,     0,   976,   942,     0,
   977,     0,     0,  1952,     0,     0,    71,    72,   943,     0,
    74,     0,     0,     0,   130,   131,   132,   133,     0,     0,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,     0,     0,     0,     0,     0,
   942,     0,     0,     0,     0,     0,     0,     0,    71,    72,
   943,     0,    74,     0,     0,     0,  1958,   944,     0,   945,
   946,   947,   948,   949,   950,   951,   952,   953,   954,     0,
     0,     0,   955,     0,     0,   956,     0,     0,   957,     0,
     0,   958,     0,   959,   960,   961,   962,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,   974,     0,
     0,     0,   975,     0,     0,     0,     0,   976,   942,     0,
   977,     0,     0,     0,     0,     0,    71,    72,   943,  1378,
    74,     0,     0,     0,     0,   944,     0,   945,   946,   947,
   948,   949,   950,   951,   952,   953,   954,     0,     0,     0,
   955,     0,     0,   956,     0,     0,   957,     0,     0,   958,
     0,   959,   960,   961,   962,   963,   964,   965,   966,   967,
   968,   969,   970,   971,   972,   973,   974,     0,     0,     0,
   975,     0,     0,     0,     0,   976,  1993,   944,   977,   945,
   946,   947,   948,   949,   950,   951,   952,   953,   954,     0,
     0,     0,   955,     0,     0,   956,     0,     0,   957,     0,
     0,   958,     0,   959,   960,   961,   962,   963,   964,   965,
   966,   967,   968,   969,   970,   971,   972,   973,   974,     0,
     0,     0,   975,     0,   161,     0,   942,   976,     0,   162,
   977,     0,   163,     0,    71,    72,   943,     0,    74,     0,
     0,     0,     0,     0,  1995,   944,     0,   945,   946,   947,
   948,   949,   950,   951,   952,   953,   954,     0,     0,     0,
   955,     0,     0,   956,     0,     0,   957,     0,     0,   958,
     0,   959,   960,   961,   962,   963,   964,   965,   966,   967,
   968,   969,   970,   971,   972,   973,   974,   126,   127,   128,
   975,     0,     0,     0,     0,   976,  1997,     0,   977,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   130,   131,
   132,   133,     0,     0,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,     0,
     0,     0,   909,   910,   911,   912,   913,   914,   915,   916,
   917,   918,     0,  1219,   919,   920,   921,   922,   923,   924,
     0,     0,   925,   944,  1998,   945,   946,   947,   948,   949,
   950,   951,   952,   953,   954,     0,     0,     0,   955,     0,
     0,   956,     0,     0,   957,     0,     0,   958,     0,   959,
   960,   961,   962,   963,   964,   965,   966,   967,   968,   969,
   970,   971,   972,   973,   974,   126,   127,     4,   975,     0,
     0,     0,     0,   976,     0,     0,   977,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   126,   127,     4,
   525,   909,   910,   911,   912,   913,   914,   915,   916,   917,
   918,     0,     0,   919,   920,   921,   922,   923,   924,     0,
     0,   925,  2009,  1039,   135,   136,   137,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   519,
   126,   127,     4,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   161,     0,
     0,     0,     0,   162,     0,     0,   163,   135,   136,   137,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   595,   127,     4,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    40,     0,
     0,     0,    41,     0,     0,     0,     0,     0,     0,   135,
   136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   520,     0,  1093,     0,  1094,  1095,
     0,  1096,     0,     0,     0,     0,     0,     0,     0,     0,
   477,  1097,   606,     0,     0,   579,     0,    42,     0,     0,
     0,     0,     0,    43,     0,     0,   161,     0,  1098,  1099,
  1100,   162,     0,     0,   163,     0,    44,     0,    45,     0,
     0,     0,     0,     0,     0,  1101,     0,     0,     0,     0,
    46,     0,     0,     0,    47,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,    48,   281,   282,   283,
   284,   285,     0,   607,     0,   286,     0,     0,   161,     0,
     0,   287,     0,   162,     0,   290,   163,    49,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1102,
     0,     0,     0,   608,     0,     0,     0,     0,     0,     0,
     0,     0,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,   161,   286,   609,     0,     0,   162,     0,   287,   163,
    50,     0,    51,     0,   610,   611,   612,   613,   614,   615,
   616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
   626,   627,   628,   629,   630,     0,     0,     0,     0,  1103,
     0,     0,     0,     0,     0,     0,  1104,     0,     0,     0,
     0,     0,     0,   161,     0,     0,     0,     0,   162,     0,
     0,   163,     4,     0,     0,     0,     0,     0,     5,     6,
     0,     0,     0,     0,     0,     0,     7,     8,     9,    10,
     0,     0,     0,     0,     0,     0,    11,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,     0,    12,
   281,   282,   283,   284,   285,    13,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,    14,     0,
    15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    16,     0,     0,     0,    17,   909,   910,   911,
   912,   913,   914,   915,   916,   917,   918,     0,    18,   919,
   920,   921,   922,   923,   924,     0,     0,   925,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,  1208,    19,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,   493,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
   494,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,    20,     0,    21,     0,   287,     0,     0,     0,
     0,   506,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,   513,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,   514,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,   515,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,   746,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,   747,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,   999,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1000,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1001,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1167,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1346,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1347,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1348,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1452,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1460,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1469,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1649,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1674,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1675,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1679,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  1685,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  1692,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  1712,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,   272,   273,   274,   275,   276,
   287,   277,   278,   279,   280,  1831,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,   272,   273,   274,   275,
   276,   287,   277,   278,   279,   280,  1839,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,   272,   273,   274,
   275,   276,   287,   277,   278,   279,   280,  1845,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,   272,   273,
   274,   275,   276,   287,   277,   278,   279,   280,  1846,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,   272,
   273,   274,   275,   276,   287,   277,   278,   279,   280,  1921,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
   272,   273,   274,   275,   276,   287,   277,   278,   279,   280,
  1923,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,   272,   273,   274,   275,   276,   287,   277,   278,   279,
   280,  1946,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,   272,   273,   274,   275,   276,   287,   277,   278,
   279,   280,  2000,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,   272,   273,   274,   275,   276,   287,   277,
   278,   279,   280,  2002,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,   272,   273,   274,   275,   276,   287,
   277,   278,   279,   280,  2010,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
   287,     0,     0,     0,   347,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,     0,   752,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     0,     0,   287,     0,     0,     0,  1166,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,  1182,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,     0,     0,   287,     0,     0,     0,  1511,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,     0,     0,   287,     0,     0,     0,  1638,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,     0,     0,   287,     0,     0,     0,
  1639,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,     0,     0,
     0,  1640,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,     0,   287,     0,
     0,     0,  1803,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,     0,     0,   287,
     0,     0,     0,  1806,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,     0,     0,
   287,     0,     0,     0,  1821,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,     0,
     0,   287,     0,     0,     0,  1914,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
     0,     0,   287,     0,     0,     0,  1988,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,     0,     0,   287,     0,     0,     0,  2016,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
   320,     0,     0,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,   376,     0,     0,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   496,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   497,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   498,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   499,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   500,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   501,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   502,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   503,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   504,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   505,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   507,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   508,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
   509,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   510,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,   511,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,   512,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,   522,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,   652,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,   748,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,   749,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,   750,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,   751,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,   851,     0,
     0,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,   886,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,  1003,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,  1004,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,  1716,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,  1829,     0,   287,   272,   273,
   274,   275,   276,     0,   277,   278,   279,   280,     0,     0,
   281,   282,   283,   284,   285,     0,     0,     0,   286,     0,
     0,     0,  1842,     0,   287,   272,   273,   274,   275,   276,
     0,   277,   278,   279,   280,     0,     0,   281,   282,   283,
   284,   285,     0,     0,     0,   286,     0,     0,     0,  1919,
     0,   287,   272,   273,   274,   275,   276,     0,   277,   278,
   279,   280,     0,     0,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,  1920,     0,   287,   272,
   273,   274,   275,   276,     0,   277,   278,   279,   280,     0,
     0,   281,   282,   283,   284,   285,     0,     0,     0,   286,
     0,     0,     0,  1925,     0,   287,   272,   273,   274,   275,
   276,     0,   277,   278,   279,   280,     0,     0,   281,   282,
   283,   284,   285,     0,     0,     0,   286,     0,     0,     0,
  1935,     0,   287,   272,   273,   274,   275,   276,     0,   277,
   278,   279,   280,     0,     0,   281,   282,   283,   284,   285,
     0,     0,     0,   286,     0,     0,     0,  1936,     0,   287,
   272,   273,   274,   275,   276,     0,   277,   278,   279,   280,
     0,     0,   281,   282,   283,   284,   285,     0,     0,     0,
   286,     0,     0,     0,  1977,     0,   287,   272,   273,   274,
   275,   276,     0,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,     0,     0,   286,     0,     0,
     0,  1981,     0,   287,   272,   273,   274,   275,   276,     0,
   277,   278,   279,   280,     0,     0,   281,   282,   283,   284,
   285,     0,     0,     0,   286,     0,     0,     0,  2012,     0,
   287,   272,   273,   274,   275,   276,     0,   277,   278,   279,
   280,     0,     0,   281,   282,   283,   284,   285,     0,     0,
     0,   286,     0,     0,     0,     0,     0,   287,   909,   910,
   911,   912,   913,   914,   915,   916,   917,   918,     0,     0,
   919,   920,   921,   922,   923,   924,     0,     0,   925,   274,
   275,   276,  1530,   277,   278,   279,   280,     0,     0,   281,
   282,   283,   284,   285,     0,   275,   276,   286,   277,   278,
   279,   280,     0,   287,   281,   282,   283,   284,   285,     0,
     0,     0,   286,     0,     0,     0,     0,     0,   287,   909,
   910,   911,   912,   913,   914,   915,   916,   917,   918,     0,
     0,   919,   920,   921,   922,   923,   924,     0,     0,   925,
   911,   912,   913,   914,   915,   916,   917,   918,     0,     0,
   919,   920,   921,   922,   923,   924,     0,     0,   925
};

static const short yycheck[] = {     3,
   571,   173,   311,    82,    82,    24,   485,     5,   539,  1108,
     3,     3,     5,   322,   323,   324,   770,    21,   625,   550,
   330,     3,   331,     5,   334,     5,     3,    31,     5,   560,
   103,   104,     5,   564,     5,     5,     5,   568,     3,     5,
     5,     5,    61,   606,   607,     5,     5,   431,   107,     5,
   613,     5,   111,   112,   113,   114,   115,   116,     7,     7,
     5,     5,     5,   264,  1031,   237,     5,   599,     5,  1036,
  1037,     5,    11,    12,    13,    14,    15,     5,    17,     5,
    18,   252,    64,    11,    12,    13,    14,    15,     7,    17,
    29,    23,   111,   112,   113,   114,   253,   116,   482,    69,
     5,    29,   404,   107,   254,   262,    18,   111,   112,   113,
   114,   115,   116,   117,   264,    69,     0,   121,   122,   123,
   254,    64,   181,    23,    75,   297,    69,     5,     7,   253,
   264,    65,    69,    11,    12,   889,   107,   891,   262,   800,
   801,   802,   803,    69,   117,    96,   117,   531,     5,    82,
    88,    29,   252,    23,    11,    12,    13,    14,    15,   254,
    17,    69,   181,    96,    69,   260,   338,    99,   478,   264,
   243,    23,    29,    81,    86,  1571,    88,   181,   117,   118,
   119,   120,     5,   715,   251,   230,  1582,    99,    11,    12,
   257,   264,  1588,    23,   254,   253,    82,    83,   243,    99,
   112,  1597,   140,   260,   262,   666,    29,  1603,  1604,   254,
    67,     5,     6,   255,   260,     9,    10,   260,   130,   254,
   262,   253,   295,   161,   162,   260,   230,   260,   530,    99,
   262,   892,   534,   119,   120,   260,   245,   246,   247,   125,
   260,   257,   251,   259,   264,   260,  1213,    99,   257,   910,
   911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
   921,   922,   923,   924,   925,   257,   264,   928,   254,    99,
   263,   252,   260,   254,   260,   161,   162,   163,   260,   244,
   260,   263,   260,   260,   260,   261,   263,   257,   261,  1256,
   260,   260,   601,   465,   260,   314,   260,   260,   263,   378,
   260,   260,   260,   257,   260,   260,   264,   311,   252,   254,
   261,   260,   260,   260,   257,     5,     6,   264,   322,   323,
   324,   230,   261,   261,   264,   404,   404,   331,   261,   255,
   255,   257,   260,   261,   718,   254,     6,   262,     5,   800,
   801,   802,   803,   645,    13,    14,    15,     7,    17,   261,
     7,   254,   257,   261,   254,   241,   242,   260,   244,   245,
   246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
   256,   257,   258,   259,   260,   261,   262,   263,   260,   261,
   453,  1042,   260,   261,   254,   271,   272,   273,   274,   275,
   276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
   286,    86,   254,    82,   261,   409,  1373,   717,   294,    88,
     7,    96,   584,    98,   586,   587,   588,    96,    96,   423,
    98,    13,    14,    15,   254,    17,   260,   254,   106,   433,
   264,   892,   318,   319,   438,   229,   255,   260,   261,     3,
   444,     5,   446,   262,     7,   239,   450,   333,   242,   910,
   911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
   921,   922,   923,   924,   925,   261,   262,   928,     5,     6,
  1077,  1078,     9,    10,     7,    82,     5,     7,  1874,    86,
    87,   485,    11,    12,    13,    14,    15,  1883,    17,    13,
    14,    15,   378,    17,   255,   255,     7,     5,    78,    79,
    29,   262,   262,    11,    12,    13,    14,    15,   252,    17,
   255,     7,    82,   399,     7,   994,    86,   262,   404,   592,
   406,    29,   255,   255,   261,   262,    96,   606,   607,   262,
   262,    13,    14,    15,   613,    17,   116,   610,   255,  1102,
    13,    14,    15,    98,    17,   262,   189,  1208,     7,   859,
   130,  1114,   255,   108,   109,   110,   252,  1218,   255,   262,
  1956,   255,    86,  1959,   736,   262,     7,    18,   262,   261,
   262,   743,    96,  1969,  1970,     7,   261,   261,   262,   143,
    96,  1042,   261,   261,     7,    86,   262,   263,  1555,     7,
  1557,   260,   261,     5,   480,   599,   112,   601,  1994,    11,
    12,    13,    14,    15,  1175,    17,    86,   493,   494,   110,
   134,   135,   136,   137,   138,   139,    96,    29,   134,   255,
   506,    13,    14,    15,   683,    17,   262,   513,   514,   515,
    96,   690,   112,   519,   520,   654,   116,    88,   255,    13,
    14,    15,   528,    17,     7,   262,   210,     7,    68,     5,
   723,   724,     7,  1224,   261,    11,    12,    13,    14,    15,
   254,    17,   666,   682,   683,   255,    86,   686,   260,   261,
   186,   690,   262,    29,   140,   254,    96,    97,   260,   683,
   699,   261,   133,   254,   260,   105,   690,   107,   264,   140,
   141,   261,   229,   579,   580,  1226,   261,   262,  1007,  1008,
  1009,  1010,  1801,  1802,    96,   254,   261,   253,   255,   261,
   161,   715,  1021,   164,   165,   262,  1287,   260,   261,   130,
   606,   607,   188,   255,   190,   611,   612,   613,   614,     6,
   262,   260,   261,  1194,   620,   260,   622,   261,     7,   264,
   759,   133,   260,   261,   254,   261,   212,  1208,   140,     5,
   254,     7,   260,   261,    13,    14,    15,  1218,    17,   260,
   261,   260,   261,    19,    20,    21,   260,   261,     7,   140,
  1079,  1080,   143,   462,   260,   261,   662,   254,   260,   261,
    36,   261,   254,   154,   155,   156,   262,   260,   261,   260,
   261,   254,  1101,   261,   262,   261,   800,   801,   802,   803,
   261,   262,   806,   261,   262,   254,  1560,  1561,  1562,   254,
   261,   261,   262,   985,   986,   987,   988,   191,   192,   193,
   194,   122,   123,   124,   125,   126,   127,   128,   714,   130,
   261,   262,   140,  1142,     7,   143,    81,     7,    83,    84,
    85,   261,   261,   262,   261,   262,   154,   155,   260,   261,
   158,   159,   261,   262,   740,   741,   742,   254,  1825,   254,
   746,   747,   245,   246,   247,   248,   555,   254,   251,   261,
  1349,   261,   262,   254,  1535,   261,   262,   122,   123,   124,
   125,   126,   127,   128,     7,   130,   131,   254,   892,   254,
   261,   261,   262,  1065,   260,   261,     8,   254,    81,     5,
    83,    84,    85,   907,   260,   261,   910,   911,   912,   913,
   914,   915,   916,   917,   918,   919,   920,   921,   922,   923,
   924,   925,   941,   254,   928,   261,   262,  1490,  1491,  1492,
   254,  1494,   243,   244,   245,   246,   192,     7,   942,   122,
   123,   124,   125,   126,   127,   128,   260,   130,   131,  1512,
   254,   262,   254,   261,   261,   262,   261,   262,     7,  1268,
   261,   261,   262,   849,   254,  1274,   852,   262,    89,    90,
    91,    92,    93,    94,   261,   262,  1360,  1944,    96,   254,
    98,    99,   100,   101,   102,   103,   104,   676,   260,   993,
   994,   261,   262,     7,   880,   261,   262,   261,   262,   260,
   261,   261,   262,  1007,  1008,  1009,  1010,  1391,   261,   262,
   261,   262,   254,  1397,   703,  1399,   261,  1021,   254,     5,
   616,   617,   254,  1102,   254,    11,    12,    13,    14,    15,
   254,    17,   721,   254,   254,  1114,   254,   254,  1042,     5,
  1113,   927,  1115,    29,     5,   230,   254,   260,  1432,   738,
   260,   260,     7,   260,  1438,   260,   260,     8,   261,     3,
     4,     5,  1371,  1524,   262,   255,  1070,   262,   255,   255,
  1143,  1380,  1826,     7,  1535,  1079,  1080,    63,   261,   255,
   230,   230,   230,     5,     5,  1089,    30,    31,    32,    33,
    34,   260,   260,  1097,  1098,     5,   260,  1101,     5,     5,
   260,   260,   243,   244,   245,   246,   247,  1111,  1112,  1672,
   251,  1674,  1116,   999,  1000,  1001,   257,  1121,   260,   231,
   232,   233,   234,   235,     7,   237,   238,   239,   240,   230,
   255,   243,   244,   245,   246,   247,     5,     5,  1142,   251,
   261,   260,  1451,   261,   260,   257,  1150,  1151,     5,   261,
   260,     5,   260,  1157,     7,  1159,     5,   260,     5,  1163,
  1723,   231,   232,   233,   234,   235,  1729,   237,   238,   239,
   240,     5,   206,   243,   244,   245,   246,   247,   260,   260,
   260,   251,   231,   232,   233,   234,   235,   257,   237,   238,
   239,   240,     7,  1502,   243,   244,   245,   246,   247,   260,
   255,     5,   251,   254,  1208,   261,   130,     7,   257,     5,
     7,   261,     7,     7,  1218,     7,  1102,   231,   232,   233,
   234,   235,   260,   237,   238,   239,   240,     7,  1114,   243,
   244,   245,   246,   247,     7,  1798,   254,   251,   254,     7,
     7,     7,     7,   257,     7,     7,   230,     5,     7,  1135,
     7,  1137,     7,  1139,  1563,   944,   260,     7,   243,   244,
   245,   246,   247,   248,  1268,     7,   251,     7,     7,     7,
  1274,     7,   261,     5,   262,     8,   231,   232,   233,   234,
   235,  1167,   237,   238,   239,   240,     7,     7,   243,   244,
   245,   246,   247,     7,     5,   984,   251,  1860,   260,     5,
     5,   260,   257,   260,   260,     3,   995,   260,   260,   998,
   255,     7,     7,     5,     7,   230,     7,   257,     7,     5,
     7,   260,  1011,  1012,  1013,  1014,     7,     7,     7,  1018,
  1809,   197,   198,   199,   200,   201,   202,   203,   204,   205,
  1871,  1513,     7,  1515,  1516,  1349,     7,   261,   231,   232,
   233,   234,   235,   262,   237,   238,   239,   240,  1921,   255,
   243,   244,   245,   246,   247,     7,     6,  1371,   251,     7,
   260,   255,    66,   254,   257,   254,  1380,   254,   231,   232,
   233,   234,   235,   254,   237,   238,   239,   240,     5,   254,
   243,   244,   245,   246,   247,     3,     5,     7,   251,   254,
   260,   260,   254,     5,   257,     5,   262,   255,   239,   260,
   260,  1490,  1491,  1492,   260,  1494,   231,   232,   233,   234,
   235,   260,   237,   238,   239,   240,   262,   260,   243,   244,
   245,   246,   247,  1512,  1123,  1124,   251,   260,   260,   251,
   254,   254,   257,   254,   261,     3,  2017,  1451,   254,   254,
   260,   254,   254,   254,     7,   254,   254,     7,     5,     7,
  1346,  1347,  1348,   231,   232,   233,   234,   235,   254,   237,
   238,   239,   240,   260,     5,   243,   244,   245,   246,   247,
   254,   260,   254,   251,   254,   254,     5,     5,  1374,   257,
   254,     5,     5,   254,   254,     5,     5,     5,  1502,  1188,
   254,  1190,     7,   254,   260,   254,   254,   254,  1197,   254,
   231,   232,   233,   234,   235,   261,   237,   238,   239,   240,
   254,     5,   243,   244,   245,   246,   247,   254,     5,   260,
   251,  1535,   260,   255,   260,   260,   257,   255,   231,   232,
   233,   234,   235,  1547,   237,   238,   239,   240,   255,     5,
   243,   244,   245,   246,   247,   254,   260,   254,   251,  1563,
     5,  1447,  1448,  1567,   257,  1569,  1452,   255,     5,  1455,
  1456,     5,     5,     5,  1460,     3,     3,  1463,  1464,  1465,
  1466,  1890,     5,  1469,  1470,  1471,     5,  1473,   254,     7,
     7,  1477,  1478,  1672,     5,  1674,  1482,  1483,     5,  1908,
     5,     5,     5,     5,  1490,  1491,  1492,  1493,  1494,     5,
     5,     5,     5,  1499,     5,     5,     5,    69,    70,    71,
    72,    73,    74,    75,    76,    77,  1512,     5,    80,     5,
     3,     4,     5,     5,    86,     5,  1808,     5,     5,  1712,
  1713,     5,   254,   261,  1723,   260,  1719,    99,     7,   262,
  1729,    24,    25,    26,    27,     7,  1345,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,  1991,   231,   232,   233,   234,   235,   257,   237,
   238,   239,   240,     7,     7,   243,   244,   245,   246,   247,
     7,     7,     7,   251,   237,   238,   239,   240,     7,   257,
   243,   244,   245,   246,   247,   248,     7,     7,   251,  1798,
     7,     7,  1795,     7,  1797,   262,   231,   232,   233,   234,
   235,     7,   237,   238,   239,   240,     7,     7,   243,   244,
   245,   246,   247,   260,   255,  1631,   251,   262,  1634,     7,
     5,   254,   257,     7,     7,  1444,     7,     5,    13,    14,
    15,  1450,    17,  1649,   260,  1454,     7,     7,  1457,     7,
     7,     7,     7,  1462,     7,     7,     7,     7,     7,     7,
     7,  1860,     7,     7,     7,  1474,  1672,  1673,  1674,  1675,
     7,     7,     7,     7,     7,     7,     5,     5,  1487,     5,
  1489,   254,     7,   254,   254,  1809,     5,     5,   255,   261,
     7,     7,     7,     7,     7,     7,     7,     7,    81,     7,
    83,  1707,   262,    86,   255,  1711,   255,   262,  1714,  1715,
   255,     7,   262,  1522,  1523,   261,  1525,  1723,   262,   260,
   262,     7,  1921,  1729,     7,     3,   262,   262,   262,   262,
   262,     7,   262,   262,  1740,  1741,  1742,  1743,  1744,   122,
   123,   124,   125,   126,   127,   128,     7,   130,   112,   255,
   262,   244,     7,     7,   262,   262,   249,   261,   261,   252,
   262,   262,   262,   262,   255,   262,  1890,   142,   261,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   262,
   262,   262,   157,   260,  1908,   160,   260,   260,   163,   254,
   261,   166,  1798,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,   262,
   262,   262,   187,   255,  1820,     7,     7,   192,     7,     3,
   195,     7,     7,   260,  1830,  1831,  1832,     7,     7,  1835,
     7,  1837,   234,   235,   236,   237,   238,   239,   240,  1845,
  1846,   243,   244,   245,   246,   247,   248,     7,   260,   251,
     7,     5,     5,     5,  1860,  1861,     5,   260,     5,   260,
   260,   260,   260,     7,     7,     7,     5,  1991,     5,     5,
  1679,     5,     7,   260,   260,   255,  1685,   261,   261,   255,
     5,  1887,     5,  1692,     5,   255,   261,     5,   231,   232,
   233,   234,   235,   255,   237,   238,   239,   240,     7,  1708,
   243,   244,   245,   246,   247,     7,     7,  1913,   251,   255,
     7,     7,     7,   255,   257,  1921,     7,  1923,   231,   232,
   233,   234,   235,   262,   237,   238,   239,   240,     7,   260,
   243,   244,   245,   246,   247,   262,   260,     7,   251,   262,
  1946,   262,   262,     7,   257,   231,   232,   233,   234,   235,
   255,   237,   238,   239,   240,   255,   255,   243,   244,   245,
   246,   247,     7,   255,   262,   251,   255,   262,   262,   262,
  1976,   257,   262,  1979,   262,   262,   255,   231,   232,   233,
   234,   235,   255,   237,   238,   239,   240,   261,   255,   243,
   244,   245,   246,   247,  2000,   255,  2002,   251,   261,   261,
     7,     7,   255,   257,  2010,     7,     5,     7,     5,     7,
   261,     7,     7,     3,     4,     5,     7,   261,     7,     7,
     7,   135,     7,     7,   260,  1834,   257,     7,     7,     7,
  1839,     7,  1841,     5,   260,   111,     7,     7,   262,  1848,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,   262,
    60,    61,    16,   255,   231,   232,   233,   234,   235,  1888,
   237,   238,   239,   240,     7,   260,   243,   244,   245,   246,
   247,   262,   262,   255,   251,   262,   237,   238,   239,   240,
   257,   262,   243,   244,   245,   246,   247,   255,     7,   255,
   251,   262,     5,     3,     4,     5,   257,   262,     7,     7,
   260,     7,   260,     7,     7,  1934,     7,     7,     7,     5,
     5,     5,   122,   260,   254,     5,   255,     5,   255,   129,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,   255,
    60,    61,     3,     4,     5,     6,     5,   255,     9,   261,
     7,     4,     7,     7,    81,     7,    83,   261,   261,    86,
     7,     7,     7,    24,    25,    26,    27,    28,     7,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,     7,   122,   123,   124,   125,   126,
   127,   128,   122,   130,   260,   260,     7,     7,    69,   129,
     7,     7,     7,     7,     7,     7,   260,   237,   260,     7,
   261,     7,   260,   243,   244,     3,     4,     5,     6,   249,
     7,     9,   252,   255,     7,   255,   256,   257,   258,   262,
   260,    62,   255,     7,   260,     7,    24,    25,    26,    27,
    28,     7,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,     7,   231,   232,
   233,   234,   235,     7,   237,   238,   239,   240,   132,     7,
   243,   244,   245,   246,   247,     5,     7,   261,   251,     8,
     0,     0,  1068,   938,   257,  1069,  1657,  1201,  1334,  1727,
   810,  1508,   574,   122,     3,     4,     5,   237,   591,   653,
   227,    -1,    -1,   243,   244,    -1,    -1,    -1,   699,   249,
    -1,    -1,   252,    -1,   261,    -1,    -1,   257,   258,    -1,
   260,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    -1,   228,    -1,     8,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     4,     5,    -1,   244,    -1,    -1,    -1,    -1,   249,    -1,
    -1,   252,    -1,    -1,    -1,    -1,   257,    -1,    -1,   260,
    24,    25,    26,    27,    -1,    -1,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
   232,   233,   234,   235,    -1,   237,   238,   239,   240,    -1,
   228,   243,   244,   245,   246,   247,     3,     4,     5,   251,
    -1,    -1,    -1,    -1,    -1,   257,   244,    -1,    -1,    -1,
    -1,   249,    -1,    -1,   252,    -1,    -1,    24,    25,    26,
    27,    -1,   260,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,   253,    -1,    -1,    -1,   257,    -1,
    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
   249,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
    -1,    -1,    -1,   207,    -1,    -1,   210,    13,    14,    15,
    -1,    17,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,    -1,
   244,    -1,    -1,    -1,    -1,   249,    -1,    -1,   252,    -1,
    -1,     5,    -1,    -1,    -1,    -1,   260,    -1,    -1,    13,
    14,    15,    -1,    17,    -1,   142,    -1,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
    -1,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,     8,    -1,    -1,
   187,    -1,    -1,    -1,    -1,   192,    -1,   244,   195,     5,
    -1,    -1,   249,    -1,    -1,   252,    -1,    13,    14,    15,
    -1,    17,    -1,   260,    -1,    -1,   142,    -1,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,    -1,    -1,
    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,
   166,    -1,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,    -1,    -1,   261,    -1,   192,    -1,   142,   195,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
    -1,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,
    -1,    -1,   166,    -1,   168,   169,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,    -1,    -1,    -1,     5,   192,    -1,
    -1,   195,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,    -1,   261,   142,    -1,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,    -1,    -1,
    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,
   166,    -1,   168,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,     5,    -1,    -1,    -1,   192,   261,    -1,   195,
    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   231,   232,   233,   234,   235,    -1,   237,   238,   239,   240,
    -1,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,    -1,    -1,    -1,    -1,   257,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,   142,   261,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,   157,
    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
     5,    -1,    -1,    -1,   192,    -1,    -1,   195,    13,    14,
    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,   142,
    -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,    -1,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,
   163,    -1,    -1,   166,    -1,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,   192,
    -1,    -1,   195,   261,   142,    -1,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,   157,
    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,
   168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
     5,    -1,    -1,    -1,   192,    -1,    -1,   195,    13,    14,
    15,    -1,    17,    -1,    -1,    -1,    -1,   142,   261,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,
    -1,   166,    -1,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,     3,     4,     5,    -1,   192,     5,    -1,
   195,    -1,    -1,   261,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,    24,    25,    26,    27,    -1,    -1,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,
     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,
    15,    -1,    17,    -1,    -1,    -1,   261,   142,    -1,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,
    -1,   166,    -1,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,    -1,    -1,    -1,    -1,   192,     5,    -1,
   195,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,     8,
    17,    -1,    -1,    -1,    -1,   142,    -1,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
    -1,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,    -1,    -1,    -1,
   187,    -1,    -1,    -1,    -1,   192,   261,   142,   195,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,   163,    -1,
    -1,   166,    -1,   168,   169,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,    -1,   244,    -1,     5,   192,    -1,   249,
   195,    -1,   252,    -1,    13,    14,    15,    -1,    17,    -1,
    -1,    -1,    -1,    -1,   261,   142,    -1,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
   157,    -1,    -1,   160,    -1,    -1,   163,    -1,    -1,   166,
    -1,   168,   169,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,     3,     4,     5,
   187,    -1,    -1,    -1,    -1,   192,   261,    -1,   195,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,
    26,    27,    -1,    -1,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
    -1,    -1,   231,   232,   233,   234,   235,   236,   237,   238,
   239,   240,    -1,    69,   243,   244,   245,   246,   247,   248,
    -1,    -1,   251,   142,   261,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,    -1,    -1,    -1,   157,    -1,
    -1,   160,    -1,    -1,   163,    -1,    -1,   166,    -1,   168,
   169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,     3,     4,     5,   187,    -1,
    -1,    -1,    -1,   192,    -1,    -1,   195,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,     3,     4,     5,
     6,   231,   232,   233,   234,   235,   236,   237,   238,   239,
   240,    -1,    -1,   243,   244,   245,   246,   247,   248,    -1,
    -1,   251,   261,   253,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,     8,
     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
    -1,    -1,    -1,   249,    -1,    -1,   252,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,     8,    -1,    81,    -1,    83,    84,
    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   228,    96,    75,    -1,    -1,     8,    -1,    62,    -1,    -1,
    -1,    -1,    -1,    68,    -1,    -1,   244,    -1,   113,   114,
   115,   249,    -1,    -1,   252,    -1,    81,    -1,    83,    -1,
    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
    95,    -1,    -1,    -1,    99,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,   111,   243,   244,   245,
   246,   247,    -1,   136,    -1,   251,    -1,    -1,   244,    -1,
    -1,   257,    -1,   249,    -1,   261,   252,   132,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
    -1,   244,   251,   196,    -1,    -1,   249,    -1,   257,   252,
   185,    -1,   187,    -1,   207,   208,   209,   210,   211,   212,
   213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
   223,   224,   225,   226,   227,    -1,    -1,    -1,    -1,   254,
    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,   249,    -1,
    -1,   252,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
    -1,    -1,    -1,    -1,    -1,    -1,    29,   231,   232,   233,
   234,   235,    -1,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,   232,
   233,   234,   235,   257,   237,   238,   239,   240,    -1,    62,
   243,   244,   245,   246,   247,    68,    -1,    -1,   251,    -1,
    -1,    -1,    -1,    -1,   257,    -1,    -1,    -1,    81,    -1,
    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    95,    -1,    -1,    -1,    99,   231,   232,   233,
   234,   235,   236,   237,   238,   239,   240,    -1,   111,   243,
   244,   245,   246,   247,   248,    -1,    -1,   251,   231,   232,
   233,   234,   235,    -1,   237,   238,   239,   240,   262,   132,
   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,   231,
   232,   233,   234,   235,   257,   237,   238,   239,   240,   262,
    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,   251,
   231,   232,   233,   234,   235,   257,   237,   238,   239,   240,
   262,    -1,   243,   244,   245,   246,   247,    -1,    -1,    -1,
   251,    -1,   185,    -1,   187,    -1,   257,    -1,    -1,    -1,
    -1,   262,   231,   232,   233,   234,   235,    -1,   237,   238,
   239,   240,    -1,    -1,   243,   244,   245,   246,   247,    -1,
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
   253,    -1,    -1,    -1,   257,   231,   232,   233,   234,   235,
    -1,   237,   238,   239,   240,    -1,    -1,   243,   244,   245,
   246,   247,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,
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
   245,   246,   247,    -1,    -1,    -1,   251,    -1,   253,    -1,
    -1,    -1,   257,   231,   232,   233,   234,   235,    -1,   237,
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
    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,   231,   232,
   233,   234,   235,   236,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,   248,    -1,    -1,   251,   233,
   234,   235,   255,   237,   238,   239,   240,    -1,    -1,   243,
   244,   245,   246,   247,    -1,   234,   235,   251,   237,   238,
   239,   240,    -1,   257,   243,   244,   245,   246,   247,    -1,
    -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,   257,   231,
   232,   233,   234,   235,   236,   237,   238,   239,   240,    -1,
    -1,   243,   244,   245,   246,   247,   248,    -1,    -1,   251,
   233,   234,   235,   236,   237,   238,   239,   240,    -1,    -1,
   243,   244,   245,   246,   247,   248,    -1,    -1,   251
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
#line 363 "GetDP.y"
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
#line 397 "GetDP.y"
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
#line 440 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 463 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 478 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 480 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 482 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 484 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 486 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 488 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 490 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 492 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 494 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 496 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 498 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 500 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 502 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 504 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 506 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 508 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 510 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 512 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 514 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 516 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 518 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 526 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 543 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 550 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 552 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 557 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 559 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 566 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 54:
#line 576 "GetDP.y"
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
#line 586 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 56:
#line 593 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 57:
#line 603 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 58:
#line 608 "GetDP.y"
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
#line 620 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 60:
#line 629 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 61:
#line 640 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 62:
#line 645 "GetDP.y"
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
    ;
    break;}
case 63:
#line 682 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 64:
#line 685 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 697 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 66:
#line 699 "GetDP.y"
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
#line 715 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 68:
#line 718 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 69:
#line 721 "GetDP.y"
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
    ;
    break;}
case 70:
#line 772 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 71:
#line 785 "GetDP.y"
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
#line 809 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 73:
#line 816 "GetDP.y"
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
#line 829 "GetDP.y"
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
#line 847 "GetDP.y"
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
#line 870 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 77:
#line 874 "GetDP.y"
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
#line 886 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 895 "GetDP.y"
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
#line 909 "GetDP.y"
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
#line 943 "GetDP.y"
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
    ;
    break;}
case 83:
#line 967 "GetDP.y"
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
#line 977 "GetDP.y"
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
    ;
    break;}
case 87:
#line 999 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 1004 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 1005 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 1012 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].i ; ;
    break;}
case 94:
#line 1032 "GetDP.y"
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
#line 1052 "GetDP.y"
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
#line 1105 "GetDP.y"
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
#line 1125 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 1131 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 1137 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1140 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1147 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 106:
#line 1158 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 107:
#line 1161 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1167 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 109:
#line 1171 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 111:
#line 1183 "GetDP.y"
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
#line 1196 "GetDP.y"
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
#line 1210 "GetDP.y"
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
#line 1225 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1231 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1237 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1243 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1249 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1255 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1261 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1267 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1273 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1279 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1285 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1291 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1297 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1303 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1309 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1315 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1321 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1328 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1336 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 135:
#line 1349 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
#line 1355 "GetDP.y"
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
#line 1429 "GetDP.y"
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
#line 1463 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1472 "GetDP.y"
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
#line 1484 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1486 "GetDP.y"
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
#line 1498 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 143:
#line 1500 "GetDP.y"
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
#line 1512 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 145:
#line 1514 "GetDP.y"
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
#line 1528 "GetDP.y"
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
#line 1540 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1546 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 149:
#line 1552 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 150:
#line 1554 "GetDP.y"
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
#line 1583 "GetDP.y"
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
#line 1609 "GetDP.y"
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
#line 1622 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1628 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1635 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1641 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1648 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1655 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1666 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 160:
#line 1667 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 161:
#line 1668 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 162:
#line 1673 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 163:
#line 1674 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 164:
#line 1680 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 165:
#line 1683 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 166:
#line 1686 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &d) ;
    ;
    break;}
case 167:
#line 1702 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 168:
#line 1707 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 169:
#line 1714 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 171:
#line 1723 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 172:
#line 1728 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 173:
#line 1735 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 174:
#line 1738 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 175:
#line 1745 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 177:
#line 1755 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 178:
#line 1758 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 179:
#line 1761 "GetDP.y"
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
case 180:
#line 1799 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 181:
#line 1805 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 182:
#line 1812 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 184:
#line 1825 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 185:
#line 1832 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 186:
#line 1835 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 187:
#line 1842 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 188:
#line 1845 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 189:
#line 1852 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 191:
#line 1864 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 192:
#line 1874 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 193:
#line 1884 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 194:
#line 1891 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 195:
#line 1894 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 196:
#line 1901 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 198:
#line 1917 "GetDP.y"
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
case 199:
#line 1965 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 200:
#line 1968 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1971 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1974 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 1977 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 204:
#line 1988 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 207:
#line 1999 "GetDP.y"
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
    ;
    break;}
case 209:
#line 2024 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2038 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2044 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 tmpstr, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2051 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2060 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2063 "GetDP.y"
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
case 216:
#line 2085 "GetDP.y"
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
case 217:
#line 2100 "GetDP.y"
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
case 218:
#line 2120 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 219:
#line 2129 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 221:
#line 2143 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 222:
#line 2153 "GetDP.y"
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
case 223:
#line 2178 "GetDP.y"
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
case 224:
#line 2203 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 225:
#line 2208 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 226:
#line 2216 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 227:
#line 2224 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 228:
#line 2233 "GetDP.y"
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
case 229:
#line 2251 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 230:
#line 2260 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 231:
#line 2268 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 232:
#line 2276 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 233:
#line 2286 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 234:
#line 2296 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 235:
#line 2306 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 236:
#line 2326 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 238:
#line 2337 "GetDP.y"
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
    ;
    break;}
case 241:
#line 2366 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 243:
#line 2379 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 244:
#line 2385 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 tmpstr, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 245:
#line 2392 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 246:
#line 2401 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 247:
#line 2404 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2407 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2410 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2417 "GetDP.y"
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
case 251:
#line 2433 "GetDP.y"
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
case 252:
#line 2482 "GetDP.y"
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
case 254:
#line 2503 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 255:
#line 2506 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 256:
#line 2511 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2516 "GetDP.y"
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
case 258:
#line 2530 "GetDP.y"
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
case 259:
#line 2550 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 260:
#line 2555 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 261:
#line 2560 "GetDP.y"
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
case 262:
#line 2584 "GetDP.y"
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
case 264:
#line 2644 "GetDP.y"
{ 
      Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; 
    ;
    break;}
case 265:
#line 2648 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 266:
#line 2656 "GetDP.y"
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
    ;
    break;}
case 267:
#line 2721 "GetDP.y"
{ 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;
    break;}
case 268:
#line 2727 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;
    break;}
case 269:
#line 2736 "GetDP.y"
{ 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;
    break;}
case 271:
#line 2747 "GetDP.y"
{ 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 272:
#line 2754 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 273:
#line 2757 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 274:
#line 2764 "GetDP.y"
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
case 275:
#line 2780 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2786 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 277:
#line 2789 "GetDP.y"
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
case 278:
#line 2808 "GetDP.y"
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
case 279:
#line 2820 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 280:
#line 2827 "GetDP.y"
{ 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;
    break;}
case 281:
#line 2832 "GetDP.y"
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
case 282:
#line 2847 "GetDP.y"
{ 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;
    break;}
case 283:
#line 2853 "GetDP.y"
{ 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 284:
#line 2863 "GetDP.y"
{ 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 286:
#line 2875 "GetDP.y"
{ 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 287:
#line 2882 "GetDP.y"
{ 
      GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 288:
#line 2893 "GetDP.y"
{ 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 289:
#line 2907 "GetDP.y"
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
case 290:
#line 2922 "GetDP.y"
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
case 291:
#line 2996 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 293:
#line 3012 "GetDP.y"
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
case 294:
#line 3045 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 295:
#line 3048 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 296:
#line 3051 "GetDP.y"
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
    ;
    break;}
case 297:
#line 3097 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 299:
#line 3107 "GetDP.y"
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
    ;
    break;}
case 302:
#line 3135 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 304:
#line 3147 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 305:
#line 3153 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 tmpstr, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 306:
#line 3160 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 308:
#line 3172 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 309:
#line 3178 "GetDP.y"
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
case 310:
#line 3192 "GetDP.y"
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
case 312:
#line 3212 "GetDP.y"
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
case 314:
#line 3235 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 315:
#line 3238 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 316:
#line 3242 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 317:
#line 3245 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 318:
#line 3255 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 319:
#line 3259 "GetDP.y"
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
case 320:
#line 3272 "GetDP.y"
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
case 321:
#line 3299 "GetDP.y"
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
    ;
    break;}
case 322:
#line 3340 "GetDP.y"
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
case 323:
#line 3364 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 324:
#line 3369 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 325:
#line 3375 "GetDP.y"
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
case 326:
#line 3686 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 327:
#line 3691 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3700 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3709 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3718 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 332:
#line 3726 "GetDP.y"
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
case 333:
#line 3766 "GetDP.y"
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
case 334:
#line 3781 "GetDP.y"
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
case 335:
#line 3805 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 336:
#line 3810 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 337:
#line 3819 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 338:
#line 3822 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 339:
#line 3825 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 340:
#line 3828 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 341:
#line 3839 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 343:
#line 3850 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 344:
#line 3860 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 345:
#line 3870 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 346:
#line 3884 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 348:
#line 3896 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 349:
#line 3898 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 350:
#line 3900 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3902 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 352:
#line 3910 "GetDP.y"
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
case 354:
#line 3935 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 355:
#line 3943 "GetDP.y"
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
case 356:
#line 4022 "GetDP.y"
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
case 357:
#line 4068 "GetDP.y"
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
case 358:
#line 4092 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 359:
#line 4101 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 360:
#line 4110 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 361:
#line 4115 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 4124 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 363:
#line 4135 "GetDP.y"
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
case 365:
#line 4164 "GetDP.y"
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
case 366:
#line 4188 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 367:
#line 4196 "GetDP.y"
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
case 368:
#line 4251 "GetDP.y"
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
case 369:
#line 4268 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 370:
#line 4269 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 371:
#line 4270 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 372:
#line 4271 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 373:
#line 4272 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 374:
#line 4273 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 375:
#line 4274 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 376:
#line 4275 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 377:
#line 4282 "GetDP.y"
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
case 378:
#line 4303 "GetDP.y"
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
case 379:
#line 4327 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 381:
#line 4337 "GetDP.y"
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
    ;
    break;}
case 384:
#line 4364 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 386:
#line 4376 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 387:
#line 4383 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 tmpstr, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 388:
#line 4390 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 389:
#line 4393 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 390:
#line 4395 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 392:
#line 4403 "GetDP.y"
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
case 393:
#line 4418 "GetDP.y"
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
case 394:
#line 4433 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 395:
#line 4443 "GetDP.y"
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
case 397:
#line 4463 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 398:
#line 4466 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 399:
#line 4475 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 400:
#line 4478 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 401:
#line 4483 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 402:
#line 4488 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 403:
#line 4493 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 404:
#line 4498 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 406:
#line 4509 "GetDP.y"
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
    ;
    break;}
case 407:
#line 4546 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 408:
#line 4553 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 409:
#line 4556 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 410:
#line 4568 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 411:
#line 4578 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 412:
#line 4584 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 413:
#line 4587 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 414:
#line 4599 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 415:
#line 4607 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 416:
#line 4620 "GetDP.y"
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
case 417:
#line 4642 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 418:
#line 4649 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 419:
#line 4655 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 420:
#line 4661 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 421:
#line 4667 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 422:
#line 4675 "GetDP.y"
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
case 423:
#line 4697 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 424:
#line 4704 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 425:
#line 4710 "GetDP.y"
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
case 426:
#line 4721 "GetDP.y"
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
case 427:
#line 4732 "GetDP.y"
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
case 428:
#line 4745 "GetDP.y"
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
case 429:
#line 4760 "GetDP.y"
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
case 430:
#line 4775 "GetDP.y"
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
case 431:
#line 4790 "GetDP.y"
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
case 432:
#line 4810 "GetDP.y"
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
case 433:
#line 4831 "GetDP.y"
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
case 434:
#line 4843 "GetDP.y"
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
case 435:
#line 4863 "GetDP.y"
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
case 436:
#line 4880 "GetDP.y"
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
case 437:
#line 4899 "GetDP.y"
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
    ;
    break;}
case 438:
#line 4920 "GetDP.y"
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
case 439:
#line 4935 "GetDP.y"
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
    ;
    break;}
case 440:
#line 4969 "GetDP.y"
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
case 441:
#line 4982 "GetDP.y"
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
case 442:
#line 4996 "GetDP.y"
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
case 443:
#line 5009 "GetDP.y"
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
case 444:
#line 5021 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 446:
#line 5030 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 448:
#line 5039 "GetDP.y"
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
case 449:
#line 5050 "GetDP.y"
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
case 450:
#line 5062 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 451:
#line 5072 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 452:
#line 5080 "GetDP.y"
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
case 453:
#line 5093 "GetDP.y"
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
case 454:
#line 5106 "GetDP.y"
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
case 455:
#line 5120 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 456:
#line 5130 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 457:
#line 5140 "GetDP.y"
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
case 458:
#line 5154 "GetDP.y"
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
case 459:
#line 5168 "GetDP.y"
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
case 460:
#line 5187 "GetDP.y"
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
case 461:
#line 5205 "GetDP.y"
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
case 462:
#line 5216 "GetDP.y"
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
case 463:
#line 5231 "GetDP.y"
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
case 464:
#line 5246 "GetDP.y"
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
case 465:
#line 5261 "GetDP.y"
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
case 466:
#line 5276 "GetDP.y"
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
case 467:
#line 5291 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 468:
#line 5302 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 469:
#line 5307 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 470:
#line 5317 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 472:
#line 5327 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 473:
#line 5330 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 474:
#line 5340 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 475:
#line 5355 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 477:
#line 5371 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 478:
#line 5375 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 479:
#line 5379 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 480:
#line 5383 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 481:
#line 5388 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 482:
#line 5399 "GetDP.y"
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
case 484:
#line 5416 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 485:
#line 5420 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 486:
#line 5424 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 487:
#line 5428 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 488:
#line 5432 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 489:
#line 5437 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 490:
#line 5448 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 492:
#line 5463 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 493:
#line 5467 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 494:
#line 5471 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 495:
#line 5475 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 496:
#line 5479 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 497:
#line 5490 "GetDP.y"
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
case 499:
#line 5508 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 500:
#line 5512 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 501:
#line 5516 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 502:
#line 5520 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 503:
#line 5525 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 504:
#line 5535 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 505:
#line 5541 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 506:
#line 5547 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 5557 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 508:
#line 5560 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 509:
#line 5565 "GetDP.y"
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
case 511:
#line 5583 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 512:
#line 5593 "GetDP.y"
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
case 513:
#line 5622 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 514:
#line 5625 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 515:
#line 5628 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 516:
#line 5636 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 517:
#line 5653 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 519:
#line 5665 "GetDP.y"
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
    ;
    break;}
case 521:
#line 5688 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 523:
#line 5702 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 524:
#line 5709 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(tmpstr, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 tmpstr, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 525:
#line 5717 "GetDP.y"
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
    ;
    break;}
case 526:
#line 5763 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 527:
#line 5768 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 528:
#line 5774 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 529:
#line 5777 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 530:
#line 5780 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 531:
#line 5782 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 532:
#line 5788 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 534:
#line 5799 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 535:
#line 5802 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 536:
#line 5808 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 537:
#line 5813 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 538:
#line 5819 "GetDP.y"
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
case 539:
#line 5833 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 541:
#line 5847 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 542:
#line 5854 "GetDP.y"
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
case 543:
#line 5882 "GetDP.y"
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
case 544:
#line 5892 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 545:
#line 5893 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 546:
#line 5899 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 547:
#line 5908 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 548:
#line 5925 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 550:
#line 5937 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 553:
#line 5946 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 555:
#line 5958 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 556:
#line 5965 "GetDP.y"
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
case 557:
#line 5977 "GetDP.y"
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
case 558:
#line 5988 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 559:
#line 5993 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 560:
#line 5999 "GetDP.y"
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
case 561:
#line 6016 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 562:
#line 6026 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 563:
#line 6029 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 564:
#line 6033 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 565:
#line 6046 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 566:
#line 6050 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.Save = NULL ;
    ;
    break;}
case 567:
#line 6056 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 568:
#line 6063 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 569:
#line 6071 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 570:
#line 6077 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 571:
#line 6082 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 572:
#line 6087 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 573:
#line 6096 "GetDP.y"
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
case 574:
#line 6108 "GetDP.y"
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
case 575:
#line 6131 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 576:
#line 6132 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 577:
#line 6133 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 578:
#line 6134 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 579:
#line 6140 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 580:
#line 6142 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 581:
#line 6148 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 582:
#line 6154 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 583:
#line 6161 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 584:
#line 6170 "GetDP.y"
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
case 585:
#line 6192 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 6200 "GetDP.y"
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
case 587:
#line 6211 "GetDP.y"
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
case 588:
#line 6225 "GetDP.y"
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
case 589:
#line 6246 "GetDP.y"
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
case 590:
#line 6273 "GetDP.y"
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
case 591:
#line 6304 "GetDP.y"
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
case 592:
#line 6324 "GetDP.y"
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
case 594:
#line 6357 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 595:
#line 6364 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 596:
#line 6371 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 597:
#line 6378 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 598:
#line 6382 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 599:
#line 6386 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 600:
#line 6390 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 601:
#line 6394 "GetDP.y"
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
case 602:
#line 6404 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 603:
#line 6409 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 604:
#line 6414 "GetDP.y"
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
    ;
    break;}
case 605:
#line 6434 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 606:
#line 6441 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 607:
#line 6450 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 608:
#line 6459 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 609:
#line 6468 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 610:
#line 6475 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 611:
#line 6483 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 612:
#line 6487 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 613:
#line 6496 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 614:
#line 6500 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 615:
#line 6504 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 616:
#line 6512 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 617:
#line 6518 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 618:
#line 6523 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 619:
#line 6532 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 620:
#line 6540 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 621:
#line 6549 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 622:
#line 6557 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 623:
#line 6566 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 624:
#line 6574 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 625:
#line 6583 "GetDP.y"
{
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;
    break;}
case 626:
#line 6593 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 627:
#line 6599 "GetDP.y"
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
    ;
    break;}
case 628:
#line 6649 "GetDP.y"
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
case 629:
#line 6664 "GetDP.y"
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
case 630:
#line 6680 "GetDP.y"
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
case 631:
#line 6699 "GetDP.y"
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
case 632:
#line 6719 "GetDP.y"
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
case 633:
#line 6750 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 634:
#line 6754 "GetDP.y"
{
    ;
    break;}
case 636:
#line 6770 "GetDP.y"
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
case 637:
#line 6785 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 638:
#line 6791 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 639:
#line 6797 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 640:
#line 6803 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen(yyvsp[-2].c, "r"))) Msg(ERROR, "Unable to open file '%s'", yyvsp[-2].c);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &d) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &d) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 641:
#line 6814 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 642:
#line 6819 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstr);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO2, tmpstr);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 643:
#line 6831 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 644:
#line 6841 "GetDP.y"
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
    ;
    break;}
case 646:
#line 6860 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 647:
#line 6866 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 648:
#line 6872 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 649:
#line 6883 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 650:
#line 6884 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 651:
#line 6885 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 652:
#line 6886 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 653:
#line 6887 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 654:
#line 6888 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 655:
#line 6889 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 656:
#line 6890 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 657:
#line 6891 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 658:
#line 6892 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 659:
#line 6893 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 660:
#line 6894 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 661:
#line 6895 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 662:
#line 6896 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 663:
#line 6897 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 664:
#line 6898 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 665:
#line 6899 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 666:
#line 6900 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 667:
#line 6901 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 668:
#line 6902 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 669:
#line 6903 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 670:
#line 6907 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 671:
#line 6908 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 672:
#line 6909 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 673:
#line 6910 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 674:
#line 6911 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 675:
#line 6912 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 676:
#line 6913 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 677:
#line 6914 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 678:
#line 6915 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 679:
#line 6916 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 680:
#line 6917 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 681:
#line 6918 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 682:
#line 6919 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 683:
#line 6920 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 684:
#line 6921 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 685:
#line 6922 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 686:
#line 6923 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 687:
#line 6924 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 688:
#line 6925 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 689:
#line 6926 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 690:
#line 6927 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 691:
#line 6928 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 692:
#line 6929 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 693:
#line 6930 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 694:
#line 6931 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 695:
#line 6932 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 696:
#line 6933 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 697:
#line 6934 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 698:
#line 6935 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 699:
#line 6936 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 700:
#line 6937 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 701:
#line 6938 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 702:
#line 6939 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 703:
#line 6940 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 704:
#line 6941 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 705:
#line 6942 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 706:
#line 6943 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 707:
#line 6944 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 708:
#line 6945 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 709:
#line 6946 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 710:
#line 6951 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 711:
#line 6952 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 712:
#line 6953 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 713:
#line 6954 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 714:
#line 6955 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 715:
#line 6956 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 716:
#line 6957 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 717:
#line 6976 "GetDP.y"
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
case 718:
#line 6994 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 719:
#line 6997 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 720:
#line 7003 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 721:
#line 7006 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 722:
#line 7013 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 723:
#line 7019 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 724:
#line 7022 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 725:
#line 7025 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 726:
#line 7037 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 727:
#line 7043 "GetDP.y"
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
case 728:
#line 7054 "GetDP.y"
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
case 729:
#line 7070 "GetDP.y"
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
case 730:
#line 7092 "GetDP.y"
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
case 731:
#line 7107 "GetDP.y"
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
case 732:
#line 7145 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 733:
#line 7153 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 734:
#line 7165 "GetDP.y"
{ 
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 735:
#line 7173 "GetDP.y"
{
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;
    break;}
case 736:
#line 7185 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 737:
#line 7187 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 738:
#line 7194 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 739:
#line 7197 "GetDP.y"
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
case 740:
#line 7212 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 741:
#line 7217 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 742:
#line 7222 "GetDP.y"
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
    ;
    break;}
case 743:
#line 7241 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 744:
#line 7259 "GetDP.y"
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
#line 7270 "GetDP.y"



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

