
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
#define	tEigenSolveJac	403
#define	tPerturbation	404
#define	tUpdate	405
#define	tUpdateConstraint	406
#define	tBreak	407
#define	tEvaluate	408
#define	tTimeLoopTheta	409
#define	tTime0	410
#define	tTimeMax	411
#define	tTheta	412
#define	tTimeLoopNewmark	413
#define	tBeta	414
#define	tGamma	415
#define	tIterativeLoop	416
#define	tNbrMaxIteration	417
#define	tRelaxationFactor	418
#define	tIterativeTimeReduction	419
#define	tDivisionCoefficient	420
#define	tChangeOfState	421
#define	tChangeOfCoordinates	422
#define	tChangeOfCoordinates2	423
#define	tSystemCommand	424
#define	tGenerateFMMGroups	425
#define	tGenerateOnly	426
#define	tGenerateOnlyJac	427
#define	tSolveJac_AdaptRelax	428
#define	tSaveSolutionExtendedMH	429
#define	tSaveSolutionMHtoTime	430
#define	tInit_MovingBand2D	431
#define	tMesh_MovingBand2D	432
#define	tGenerate_MH_Moving	433
#define	tGenerate_MH_Moving_Separate	434
#define	tAdd_MH_Moving	435
#define	tGenerateGroup	436
#define	tGenerateJacGroup	437
#define	tSaveMesh	438
#define	tDeformeMesh	439
#define	tDummyFrequency	440
#define	tPostProcessing	441
#define	tNameOfSystem	442
#define	tPostOperation	443
#define	tNameOfPostProcessing	444
#define	tUsingPost	445
#define	tAppend	446
#define	tPlot	447
#define	tPrint	448
#define	tPrintGroup	449
#define	tEcho	450
#define	tWrite	451
#define	tAdapt	452
#define	tOnGlobal	453
#define	tOnRegion	454
#define	tOnElementsOf	455
#define	tOnGrid	456
#define	tOnSection	457
#define	tOnPoint	458
#define	tOnLine	459
#define	tOnPlane	460
#define	tOnBox	461
#define	tWithArgument	462
#define	tFile	463
#define	tDepth	464
#define	tDimension	465
#define	tComma	466
#define	tTimeStep	467
#define	tHarmonicToTime	468
#define	tFormat	469
#define	tHeader	470
#define	tFooter	471
#define	tSkin	472
#define	tSmoothing	473
#define	tTarget	474
#define	tSort	475
#define	tIso	476
#define	tNoNewLine	477
#define	tDecomposeInSimplex	478
#define	tChangeOfValues	479
#define	tTimeLegend	480
#define	tFrequencyLegend	481
#define	tEigenvalueLegend	482
#define	tEvaluationPoints	483
#define	tStore	484
#define	tLastTimeStepOnly	485
#define	tStr	486
#define	tDate	487
#define	tDEF	488
#define	tOR	489
#define	tAND	490
#define	tEQUAL	491
#define	tNOTEQUAL	492
#define	tAPPROXEQUAL	493
#define	tLESSOREQUAL	494
#define	tGREATEROREQUAL	495
#define	tLESSLESS	496
#define	tGREATERGREATER	497
#define	tCROSSPRODUCT	498
#define	UNARYPREC	499
#define	tSHOW	500

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.100 2006-02-25 15:00:24 geuzaine Exp $ */
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


#line 184 "GetDP.y"
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



#define	YYFINAL		2035
#define	YYFLAG		-32768
#define	YYNTBASE	269

#define YYTRANSLATE(x) ((unsigned)(x) <= 500 ? yytranslate[x] : 459)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   253,     2,   261,   262,   251,     2,     2,   256,
   257,   249,   247,   266,   248,   260,   250,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   241,
     2,   243,   235,   267,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   258,     2,   259,   255,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   264,     2,   265,   268,     2,     2,     2,     2,
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
   227,   228,   229,   230,   231,   232,   233,   234,   236,   237,
   238,   239,   240,   242,   244,   245,   246,   252,   254,   263
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   154,   159,   165,   171,   177,   179,   185,
   187,   189,   190,   191,   210,   211,   218,   221,   223,   225,
   228,   230,   232,   234,   236,   237,   241,   245,   247,   249,
   253,   254,   258,   263,   265,   269,   273,   277,   283,   289,
   297,   299,   300,   304,   311,   312,   314,   319,   320,   323,
   327,   328,   331,   337,   344,   352,   354,   356,   357,   361,
   366,   371,   372,   375,   376,   380,   382,   386,   387,   390,
   392,   393,   394,   402,   406,   410,   417,   421,   425,   429,
   433,   437,   441,   445,   449,   453,   457,   461,   465,   469,
   473,   476,   479,   482,   486,   488,   492,   495,   497,   500,
   501,   507,   508,   516,   517,   529,   539,   544,   549,   550,
   558,   565,   568,   571,   574,   577,   581,   584,   588,   592,
   595,   599,   601,   605,   606,   610,   617,   618,   623,   624,
   627,   631,   636,   637,   642,   643,   646,   650,   654,   659,
   660,   665,   666,   669,   673,   677,   682,   683,   688,   689,
   692,   696,   700,   705,   706,   711,   712,   715,   719,   723,
   727,   731,   735,   739,   740,   743,   747,   749,   751,   752,
   755,   759,   764,   768,   773,   779,   780,   785,   788,   789,
   792,   796,   800,   804,   808,   812,   816,   824,   828,   832,
   836,   840,   844,   852,   860,   868,   869,   872,   876,   878,
   880,   881,   884,   888,   893,   897,   902,   907,   912,   917,
   918,   923,   926,   927,   930,   934,   938,   943,   948,   956,
   960,   964,   968,   972,   973,   974,   975,   994,   995,  1000,
  1001,  1004,  1008,  1012,  1016,  1018,  1022,  1023,  1027,  1029,
  1033,  1034,  1038,  1039,  1044,  1045,  1048,  1052,  1056,  1060,
  1061,  1066,  1069,  1070,  1073,  1077,  1081,  1085,  1089,  1090,
  1093,  1097,  1099,  1101,  1102,  1105,  1109,  1114,  1118,  1123,
  1128,  1129,  1134,  1137,  1138,  1141,  1145,  1149,  1153,  1157,
  1161,  1162,  1168,  1172,  1173,  1179,  1183,  1187,  1191,  1195,
  1199,  1200,  1204,  1205,  1208,  1211,  1214,  1219,  1224,  1229,
  1234,  1235,  1238,  1242,  1246,  1250,  1251,  1254,  1258,  1262,
  1266,  1270,  1271,  1274,  1275,  1276,  1286,  1290,  1294,  1298,
  1301,  1305,  1311,  1312,  1315,  1319,  1320,  1321,  1331,  1332,
  1334,  1336,  1338,  1340,  1342,  1344,  1346,  1351,  1355,  1356,
  1359,  1363,  1365,  1367,  1368,  1371,  1375,  1380,  1385,  1386,
  1392,  1394,  1395,  1400,  1403,  1404,  1407,  1411,  1415,  1419,
  1423,  1427,  1431,  1435,  1439,  1441,  1443,  1447,  1448,  1452,
  1454,  1458,  1459,  1463,  1464,  1467,  1471,  1475,  1480,  1485,
  1490,  1495,  1501,  1507,  1510,  1518,  1530,  1538,  1552,  1564,
  1574,  1582,  1590,  1598,  1608,  1618,  1628,  1640,  1652,  1664,
  1670,  1688,  1702,  1718,  1730,  1744,  1745,  1753,  1754,  1762,
  1770,  1782,  1788,  1794,  1804,  1814,  1824,  1830,  1836,  1848,
  1858,  1873,  1888,  1896,  1909,  1920,  1928,  1936,  1944,  1946,
  1948,  1950,  1951,  1954,  1958,  1962,  1965,  1966,  1969,  1973,
  1977,  1981,  1985,  1990,  1991,  1994,  1998,  2002,  2006,  2010,
  2014,  2019,  2020,  2023,  2027,  2031,  2035,  2039,  2044,  2045,
  2048,  2052,  2056,  2060,  2064,  2068,  2073,  2078,  2083,  2084,
  2089,  2090,  2093,  2097,  2101,  2105,  2109,  2113,  2117,  2118,
  2121,  2125,  2127,  2129,  2130,  2133,  2137,  2142,  2146,  2150,
  2155,  2156,  2161,  2164,  2167,  2168,  2171,  2175,  2180,  2181,
  2187,  2193,  2194,  2197,  2198,  2205,  2209,  2213,  2217,  2221,
  2222,  2225,  2229,  2231,  2233,  2234,  2237,  2241,  2245,  2249,
  2253,  2258,  2259,  2268,  2269,  2270,  2274,  2282,  2290,  2299,
  2311,  2318,  2319,  2330,  2332,  2336,  2343,  2345,  2347,  2349,
  2351,  2352,  2356,  2358,  2361,  2364,  2377,  2380,  2396,  2401,
  2414,  2432,  2455,  2468,  2469,  2472,  2476,  2481,  2486,  2490,
  2493,  2496,  2500,  2504,  2508,  2512,  2516,  2519,  2523,  2527,
  2531,  2535,  2539,  2543,  2547,  2553,  2556,  2559,  2563,  2573,
  2577,  2580,  2590,  2593,  2603,  2606,  2616,  2622,  2626,  2629,
  2630,  2633,  2640,  2649,  2658,  2669,  2671,  2676,  2678,  2684,
  2689,  2694,  2702,  2707,  2715,  2721,  2725,  2729,  2737,  2743,
  2752,  2753,  2757,  2763,  2769,  2771,  2773,  2775,  2777,  2779,
  2781,  2783,  2785,  2787,  2789,  2791,  2793,  2795,  2797,  2799,
  2801,  2803,  2805,  2807,  2809,  2811,  2813,  2817,  2820,  2823,
  2827,  2831,  2835,  2839,  2843,  2847,  2851,  2855,  2859,  2863,
  2867,  2871,  2875,  2879,  2884,  2889,  2894,  2899,  2904,  2909,
  2914,  2919,  2924,  2929,  2936,  2941,  2946,  2951,  2956,  2961,
  2966,  2973,  2980,  2987,  2990,  2992,  2994,  2996,  2998,  3000,
  3002,  3004,  3006,  3007,  3009,  3011,  3015,  3017,  3019,  3023,
  3027,  3031,  3037,  3041,  3046,  3051,  3058,  3067,  3076,  3082,
  3088,  3090,  3092,  3094,  3096,  3098,  3103,  3110,  3112
};

static const short yyrhs[] = {    -1,
   270,   271,     0,     0,     0,   271,   272,   273,     0,    62,
   264,   276,   265,     0,    99,   264,   297,   265,     0,    68,
   264,   332,   265,     0,    81,   264,   317,   265,     0,    83,
   264,   323,   265,     0,    95,   264,   339,   265,     0,   111,
   264,   362,   265,     0,   132,   264,   388,   265,     0,   187,
   264,   418,   265,     0,   189,   264,   429,   265,     0,   433,
     0,   447,     0,    22,   457,     0,   274,     0,    19,     7,
     0,    19,   194,     7,     0,    19,    21,     7,     0,    19,
    36,     7,     0,    19,    20,     7,     0,    19,    19,     7,
     0,    19,     5,     7,     0,    20,     7,     0,    21,     7,
     0,    21,    62,     7,     0,    21,    99,     7,     0,    21,
    68,     7,     0,    21,    81,     7,     0,    21,    83,     7,
     0,    21,    95,     7,     0,    21,   111,     7,     0,    21,
   132,     7,     0,    21,   187,     7,     0,    21,   189,     7,
     0,    21,     3,     7,     0,     0,   275,   437,     0,     0,
   276,   277,     0,   456,   234,   281,     7,     0,     5,   296,
   234,   281,     7,     0,     5,   294,   234,   281,     7,     0,
    63,   258,   292,   259,     7,     0,   278,     0,   456,   247,
   234,   281,     7,     0,   447,     0,   446,     0,     0,     0,
   456,   258,   450,   259,   234,    66,   279,   258,   261,   289,
   280,   266,   261,   289,   266,   450,   259,     7,     0,     0,
   285,   258,   286,   282,   287,   259,     0,   261,   289,     0,
   281,     0,   456,     0,   456,   295,     0,    69,     0,     5,
     0,   289,     0,    64,     0,     0,   293,   288,   289,     0,
   293,    65,   456,     0,     5,     0,   291,     0,   264,   290,
   265,     0,     0,   290,   293,   291,     0,   290,   293,   248,
   291,     0,     3,     0,   256,   450,   257,     0,   267,   453,
   267,     0,     3,     8,   450,     0,   256,   450,   257,     8,
   450,     0,     3,     8,   450,     8,   450,     0,   256,   450,
   257,     8,   450,     8,   450,     0,   456,     0,     0,   292,
   293,     5,     0,   292,   293,     5,   264,   450,   265,     0,
     0,   266,     0,   264,   261,   450,   265,     0,     0,   264,
   265,     0,   264,   450,   265,     0,     0,   297,   298,     0,
    67,   258,   299,   259,     7,     0,     5,   258,   259,   234,
   300,     7,     0,     5,   258,   283,   259,   234,   300,     7,
     0,   447,     0,   446,     0,     0,   299,   293,     5,     0,
    23,   258,   450,   259,     0,    99,   258,     5,   259,     0,
     0,   301,   304,     0,     0,   264,   303,   265,     0,   300,
     0,   303,   266,   300,     0,     0,   305,   306,     0,   309,
     0,     0,     0,   306,   235,   307,   306,     8,   308,   306,
     0,   306,   249,   306,     0,   306,   252,   306,     0,    58,
   258,   306,   266,   306,   259,     0,   306,   250,   306,     0,
   306,   247,   306,     0,   306,   248,   306,     0,   306,   251,
   306,     0,   306,   255,   306,     0,   306,   241,   306,     0,
   306,   243,   306,     0,   306,   242,   306,     0,   306,   244,
   306,     0,   306,   238,   306,     0,   306,   239,   306,     0,
   306,   240,   306,     0,   306,   237,   306,     0,   306,   236,
   306,     0,   248,   306,     0,   247,   306,     0,   253,   306,
     0,   256,   306,   257,     0,   451,     0,   449,   314,   316,
     0,     5,   387,     0,   387,     0,   387,   314,     0,     0,
   122,   310,   258,   304,   259,     0,     0,   129,   311,   258,
   304,   266,     3,   259,     0,     0,    60,   258,     5,   258,
   312,   304,   259,   259,   264,   450,   265,     0,    61,   258,
     5,   259,   264,   450,   266,   450,   265,     0,    55,   258,
   387,   259,     0,    57,   258,   387,   259,     0,     0,    56,
   313,   258,   304,   266,   283,   259,     0,   241,     5,   243,
   258,   304,   259,     0,   262,     5,     0,   262,   213,     0,
   262,   143,     0,   262,     3,     0,   309,   261,     3,     0,
   261,     3,     0,   309,   263,   450,     0,   258,   260,   259,
     0,   258,   259,     0,   258,   315,   259,     0,   306,     0,
   315,   266,   306,     0,     0,   264,   453,   265,     0,   264,
    69,   258,   283,   259,   265,     0,     0,   317,   264,   318,
   265,     0,     0,   318,   319,     0,    96,     5,     7,     0,
    82,   264,   320,   265,     0,     0,   320,   264,   321,   265,
     0,     0,   321,   322,     0,    69,   283,     7,     0,    69,
    64,     7,     0,    81,     5,   316,     7,     0,     0,   323,
   264,   324,   265,     0,     0,   324,   325,     0,    96,     5,
     7,     0,    88,   300,     7,     0,    82,   264,   326,   265,
     0,     0,   326,   264,   327,   265,     0,     0,   327,   328,
     0,    86,     5,     7,     0,    87,     5,     7,     0,    82,
   264,   329,   265,     0,     0,   329,   264,   330,   265,     0,
     0,   330,   331,     0,    89,     5,     7,     0,    90,   450,
     7,     0,    91,   450,     7,     0,    92,   450,     7,     0,
    93,   450,     7,     0,    94,   450,     7,     0,     0,   332,
   333,     0,   264,   334,   265,     0,   447,     0,   446,     0,
     0,   334,   335,     0,    96,   456,     7,     0,    96,     5,
   294,     7,     0,    86,     5,     7,     0,    82,   264,   336,
   265,     0,    82,     5,   264,   336,   265,     0,     0,   336,
   264,   337,   265,     0,   336,   446,     0,     0,   337,   338,
     0,    86,     5,     7,     0,    69,   283,     7,     0,    70,
   283,     7,     0,    76,   300,     7,     0,    75,   300,     7,
     0,    80,   456,     7,     0,    77,   264,   451,   293,   451,
   265,     7,     0,    71,   283,     7,     0,    72,   283,     7,
     0,    99,   300,     7,     0,    74,   300,     7,     0,    73,
   300,     7,     0,    99,   258,   300,   266,   300,   259,     7,
     0,    74,   258,   300,   266,   300,   259,     7,     0,    73,
   258,   300,   266,   300,   259,     7,     0,     0,   339,   340,
     0,   264,   341,   265,     0,   447,     0,   446,     0,     0,
   341,   342,     0,    96,   456,     7,     0,    96,     5,   294,
     7,     0,    86,     5,     7,     0,    97,   264,   343,   265,
     0,   105,   264,   349,   265,     0,   107,   264,   356,   265,
     0,    68,   264,   359,   265,     0,     0,   343,   264,   344,
   265,     0,   343,   446,     0,     0,   344,   345,     0,    96,
     5,     7,     0,    98,     5,     7,     0,    98,     5,   294,
     7,     0,    99,     5,   346,     7,     0,   100,   264,     5,
   293,     5,   265,     7,     0,   101,   302,     7,     0,   102,
   302,     7,     0,   103,   283,     7,     0,   104,   283,     7,
     0,     0,     0,     0,   264,   112,     5,     7,   111,     5,
   294,     7,   347,    62,   284,     7,   348,   132,     5,   295,
     7,   265,     0,     0,   349,   264,   350,   265,     0,     0,
   350,   351,     0,    96,     5,     7,     0,   106,   352,     7,
     0,    98,   354,     7,     0,     5,     0,   264,   353,   265,
     0,     0,   353,   293,     5,     0,     5,     0,   264,   355,
   265,     0,     0,   355,   293,     5,     0,     0,   356,   264,
   357,   265,     0,     0,   357,   358,     0,    96,   456,     7,
     0,    86,     5,     7,     0,    98,     5,     7,     0,     0,
   359,   264,   360,   265,     0,   359,   446,     0,     0,   360,
   361,     0,    98,     5,     7,     0,   108,   285,     7,     0,
   109,   288,     7,     0,   110,   456,     7,     0,     0,   362,
   363,     0,   264,   364,   265,     0,   447,     0,   446,     0,
     0,   364,   365,     0,    96,   456,     7,     0,    96,     5,
   294,     7,     0,    86,     5,     7,     0,   112,   264,   366,
   265,     0,   116,   264,   372,   265,     0,     0,   366,   264,
   367,   265,     0,   366,   446,     0,     0,   367,   368,     0,
    96,   456,     7,     0,    86,   107,     7,     0,    86,   117,
     7,     0,    86,     5,     7,     0,   186,   452,     7,     0,
     0,   113,   456,   369,   371,     7,     0,   114,     3,     7,
     0,     0,   258,   370,   304,   259,     7,     0,   130,   283,
     7,     0,    83,     5,     7,     0,    84,     5,     7,     0,
    81,     5,     7,     0,   115,     3,     7,     0,     0,   258,
   456,   259,     0,     0,   372,   373,     0,   372,   447,     0,
   372,   446,     0,   117,   264,   378,   265,     0,   118,   264,
   378,   265,     0,   119,   264,   382,   265,     0,   120,   264,
   374,   265,     0,     0,   374,   375,     0,    86,     5,     7,
     0,   110,     5,     7,     0,   264,   376,   265,     0,     0,
   376,   377,     0,    78,   387,     7,     0,    79,   387,     7,
     0,   116,   387,     7,     0,   130,   283,     7,     0,     0,
   378,   379,     0,     0,     0,   386,   258,   380,   304,   381,
   266,   304,   259,     7,     0,   130,   283,     7,     0,    81,
     5,     7,     0,    83,     5,     7,     0,   131,     7,     0,
    84,     5,     7,     0,    85,   258,     3,   259,     7,     0,
     0,   382,   383,     0,   130,   283,     7,     0,     0,     0,
   386,   258,   384,   304,   385,   266,   387,   259,     7,     0,
     0,   122,     0,   123,     0,   124,     0,   125,     0,   126,
     0,   127,     0,   128,     0,   264,     5,   456,   265,     0,
   264,   456,   265,     0,     0,   388,   389,     0,   264,   390,
   265,     0,   447,     0,   446,     0,     0,   390,   391,     0,
    96,   456,     7,     0,    96,     5,   294,     7,     0,   133,
   264,   393,   265,     0,     0,   140,   392,   264,   400,   265,
     0,   446,     0,     0,   393,   264,   394,   265,     0,   393,
   446,     0,     0,   394,   395,     0,    96,   456,     7,     0,
    86,     5,     7,     0,   134,   396,     7,     0,   135,   457,
     7,     0,   138,   398,     7,     0,   139,   456,     7,     0,
   136,   452,     7,     0,   137,   457,     7,     0,   446,     0,
   456,     0,   264,   397,   265,     0,     0,   397,   293,   456,
     0,   456,     0,   264,   399,   265,     0,     0,   399,   293,
   456,     0,     0,   400,   401,     0,     5,   456,     7,     0,
   142,   300,     7,     0,   155,   264,   407,   265,     0,   159,
   264,   409,   265,     0,   162,   264,   411,   265,     0,   165,
   264,   413,   265,     0,     5,   258,   456,   259,     7,     0,
   142,   258,   300,   259,     7,     0,   153,     7,     0,    15,
   258,   300,   259,   264,   400,   265,     0,    15,   258,   300,
   259,   264,   400,   265,    16,   264,   400,   265,     0,   144,
   258,   456,   266,   300,   259,     7,     0,   171,   258,   456,
   266,   300,   266,   300,   266,   300,   266,   300,   259,     7,
     0,   171,   258,   456,   266,   300,   266,   300,   266,   300,
   259,     7,     0,   171,   258,   456,   266,   300,   266,   300,
   259,     7,     0,   172,   258,   456,   266,   452,   259,     7,
     0,   173,   258,   456,   266,   452,   259,     7,     0,   151,
   258,   456,   266,   300,   259,     7,     0,   152,   258,   456,
   266,   283,   266,   456,   259,     7,     0,   145,   258,   456,
   266,   456,   266,   452,   259,     7,     0,   146,   258,   456,
   266,   456,   266,   450,   259,     7,     0,   147,   258,   456,
   266,   450,   266,   452,   266,   450,   259,     7,     0,   148,
   258,   456,   266,   450,   266,   450,   266,   450,   259,     7,
     0,   149,   258,   456,   266,   450,   266,   450,   266,   450,
   259,     7,     0,   154,   258,   300,   259,     7,     0,   150,
   258,   456,   266,   456,   266,   456,   266,   450,   266,   452,
   266,   450,   266,   450,   259,     7,     0,   155,   258,   450,
   266,   450,   266,   300,   266,   300,   259,   264,   400,   265,
     0,   159,   258,   450,   266,   450,   266,   300,   266,   450,
   266,   450,   259,   264,   400,   265,     0,   162,   258,   450,
   266,   450,   266,   300,   259,   264,   400,   265,     0,   162,
   258,   450,   266,   450,   266,   300,   266,   450,   259,   264,
   400,   265,     0,     0,   194,   402,   258,   404,   405,   259,
     7,     0,     0,   197,   403,   258,   404,   405,   259,     7,
     0,   168,   258,   283,   266,   300,   259,     7,     0,   168,
   258,   283,   266,   300,   266,   450,   266,   300,   259,     7,
     0,   189,   258,   456,   259,     7,     0,   170,   258,   457,
   259,     7,     0,   174,   258,   456,   266,   452,   266,   450,
   259,     7,     0,   175,   258,   456,   266,   450,   266,   457,
   259,     7,     0,   176,   258,   456,   266,   452,   266,   457,
   259,     7,     0,   177,   264,   456,   265,     7,     0,   178,
   264,   456,   265,     7,     0,   184,   264,   456,   266,   283,
   266,   457,   266,   300,   265,     7,     0,   184,   264,   456,
   266,   283,   266,   457,   265,     7,     0,   179,   258,   456,
   266,   456,   266,   450,   266,   450,   259,   264,   400,   265,
     7,     0,   180,   258,   456,   266,   456,   266,   450,   266,
   450,   259,   264,   400,   265,     7,     0,   181,   258,   456,
   266,   450,   259,     7,     0,   185,   264,     5,   266,     5,
   266,   135,   457,   266,     4,   265,     7,     0,   185,   264,
     5,   266,     5,   266,   135,   457,   265,     7,     0,   185,
   264,     5,   266,     5,   265,     7,     0,   182,   258,   456,
   266,   456,   259,     7,     0,   183,   258,   456,   266,   456,
   259,     7,     0,   446,     0,   302,     0,   456,     0,     0,
   405,   406,     0,   266,   209,   457,     0,   266,   213,   452,
     0,   266,   452,     0,     0,   407,   408,     0,   156,   450,
     7,     0,   157,   450,     7,     0,   143,   300,     7,     0,
   158,   300,     7,     0,   140,   264,   400,   265,     0,     0,
   409,   410,     0,   156,   450,     7,     0,   157,   450,     7,
     0,   143,   300,     7,     0,   160,   450,     7,     0,   161,
   450,     7,     0,   140,   264,   400,   265,     0,     0,   411,
   412,     0,   163,   450,     7,     0,    88,   450,     7,     0,
   164,   300,     7,     0,    18,   450,     7,     0,   140,   264,
   400,   265,     0,     0,   413,   414,     0,   163,   450,     7,
     0,   166,   450,     7,     0,    88,   450,     7,     0,    18,
   450,     7,     0,   133,   456,     7,     0,   167,   264,   415,
   265,     0,   140,   264,   400,   265,     0,   141,   264,   400,
   265,     0,     0,   415,   264,   416,   265,     0,     0,   416,
   417,     0,    86,     5,     7,     0,   112,     5,     7,     0,
   130,   283,     7,     0,    88,   450,     7,     0,    99,   300,
     7,     0,    18,     5,     7,     0,     0,   418,   419,     0,
   264,   420,   265,     0,   447,     0,   446,     0,     0,   420,
   421,     0,    96,   456,     7,     0,    96,     5,   294,     7,
     0,   134,   456,     7,     0,   188,   456,     7,     0,   112,
   264,   422,   265,     0,     0,   422,   264,   423,   265,     0,
   422,   447,     0,   422,   446,     0,     0,   423,   424,     0,
    96,   456,     7,     0,    75,   264,   425,   265,     0,     0,
   425,   117,   264,   426,   265,     0,   425,     5,   264,   426,
   265,     0,     0,   426,   427,     0,     0,   386,   258,   428,
   304,   259,     7,     0,    86,     5,     7,     0,   130,   283,
     7,     0,    81,     5,     7,     0,    83,     5,     7,     0,
     0,   429,   430,     0,   264,   431,   265,     0,   447,     0,
   446,     0,     0,   431,   432,     0,    96,   456,     7,     0,
   190,   456,     7,     0,   215,     5,     7,     0,   192,   457,
     7,     0,   140,   264,   435,   265,     0,     0,   189,   456,
   191,   456,   434,   264,   435,   265,     0,     0,     0,   435,
   436,   437,     0,   193,   258,   439,   442,   443,   259,     7,
     0,   194,   258,   439,   442,   443,   259,     7,     0,   194,
   258,     6,   266,   300,   443,   259,     7,     0,   194,   258,
     6,   266,   232,   258,   457,   259,   443,   259,     7,     0,
   196,   258,     6,   443,   259,     7,     0,     0,   195,   258,
   283,   438,   266,   130,   283,   443,   259,     7,     0,   446,
     0,   456,   441,   266,     0,   456,   441,   440,     5,   441,
   266,     0,   249,     0,   250,     0,   247,     0,   248,     0,
     0,   258,   283,   259,     0,   199,     0,   200,   283,     0,
   201,   283,     0,   203,   264,   264,   453,   265,   264,   453,
   265,   264,   453,   265,   265,     0,   202,   283,     0,   202,
   264,   300,   266,   300,   266,   300,   265,   264,   452,   266,
   452,   266,   452,   265,     0,   204,   264,   453,   265,     0,
   205,   264,   264,   453,   265,   264,   453,   265,   265,   264,
   450,   265,     0,   206,   264,   264,   453,   265,   264,   453,
   265,   264,   453,   265,   265,   264,   450,   266,   450,   265,
     0,   207,   264,   264,   453,   265,   264,   453,   265,   264,
   453,   265,   264,   453,   265,   265,   264,   450,   266,   450,
   266,   450,   265,     0,   200,   283,   208,     5,   264,   450,
   266,   450,   265,   264,   450,   265,     0,     0,   443,   444,
     0,   266,   209,   457,     0,   266,   209,   243,   457,     0,
   266,   209,   246,   457,     0,   266,   210,   450,     0,   266,
   218,     0,   266,   219,     0,   266,   214,   450,     0,   266,
   215,     5,     0,   266,   216,   445,     0,   266,   217,   445,
     0,   266,   215,   445,     0,   266,   212,     0,   266,   211,
   450,     0,   266,   213,   452,     0,   266,   198,     5,     0,
   266,   221,     5,     0,   266,   220,   450,     0,   266,    75,
   452,     0,   266,   222,   450,     0,   266,   222,   264,   453,
   265,     0,   266,   223,     0,   266,   224,     0,   266,   136,
   452,     0,   266,   168,   264,   300,   266,   300,   266,   300,
   265,     0,   266,   225,   302,     0,   266,   226,     0,   266,
   226,   264,   450,   266,   450,   266,   450,   265,     0,   266,
   227,     0,   266,   227,   264,   450,   266,   450,   266,   450,
   265,     0,   266,   228,     0,   266,   228,   264,   450,   266,
   450,   266,   450,   265,     0,   266,   229,   264,   453,   265,
     0,   266,   230,     3,     0,   266,   231,     0,     0,   445,
     6,     0,    13,   256,   450,     8,   450,   257,     0,    13,
   256,   450,     8,   450,     8,   450,   257,     0,    13,     5,
   130,   264,   450,     8,   450,   265,     0,    13,     5,   130,
   264,   450,     8,   450,     8,   450,   265,     0,    14,     0,
    15,   256,   450,   257,     0,    17,     0,    29,   258,   448,
   259,     7,     0,   456,   234,   452,     7,     0,   456,   234,
     6,     7,     0,   456,   234,   232,   258,   457,   259,     7,
     0,   456,   234,   458,     7,     0,   456,   234,    28,   258,
   457,   259,     7,     0,    11,   256,     6,   257,     7,     0,
    11,   456,     7,     0,    11,   261,     7,     0,    11,   256,
     6,   266,   453,   257,     7,     0,    12,   256,   456,   257,
     7,     0,    12,   256,   456,   257,   258,   450,   259,     7,
     0,     0,   448,   293,     5,     0,   448,   293,     5,   234,
   450,     0,   448,   293,     5,   234,     6,     0,    35,     0,
    36,     0,    37,     0,    38,     0,    39,     0,    40,     0,
    41,     0,    42,     0,    43,     0,    44,     0,    45,     0,
    46,     0,    47,     0,    48,     0,    49,     0,    50,     0,
    51,     0,    52,     0,    53,     0,    54,     0,   456,     0,
   451,     0,   256,   450,   257,     0,   248,   450,     0,   253,
   450,     0,   450,   248,   450,     0,   450,   247,   450,     0,
   450,   249,   450,     0,   450,   250,   450,     0,   450,   251,
   450,     0,   450,   255,   450,     0,   450,   241,   450,     0,
   450,   243,   450,     0,   450,   242,   450,     0,   450,   244,
   450,     0,   450,   238,   450,     0,   450,   239,   450,     0,
   450,   237,   450,     0,   450,   236,   450,     0,    35,   258,
   450,   259,     0,    36,   258,   450,   259,     0,    37,   258,
   450,   259,     0,    38,   258,   450,   259,     0,    39,   258,
   450,   259,     0,    40,   258,   450,   259,     0,    41,   258,
   450,   259,     0,    42,   258,   450,   259,     0,    43,   258,
   450,   259,     0,    44,   258,   450,   259,     0,    45,   258,
   450,   266,   450,   259,     0,    46,   258,   450,   259,     0,
    47,   258,   450,   259,     0,    48,   258,   450,   259,     0,
    49,   258,   450,   259,     0,    50,   258,   450,   259,     0,
    51,   258,   450,   259,     0,    52,   258,   450,   266,   450,
   259,     0,    53,   258,   450,   266,   450,   259,     0,    54,
   258,   450,   266,   450,   259,     0,   450,   261,     0,     4,
     0,     3,     0,    30,     0,    31,     0,    32,     0,    33,
     0,    34,     0,   456,     0,     0,   450,     0,   454,     0,
   264,   453,   265,     0,   450,     0,   454,     0,   453,   266,
   450,     0,   453,   266,   454,     0,   450,     8,   450,     0,
   450,     8,   450,     8,   450,     0,     5,   264,   265,     0,
     5,   264,   453,   265,     0,    24,   258,     5,   259,     0,
    25,   258,     5,   266,     5,   259,     0,    26,   258,   450,
   266,   450,   266,   450,   259,     0,    27,   258,   450,   266,
   450,   266,   450,   259,     0,     5,   268,   264,   450,   265,
     0,   455,   268,   264,   450,   265,     0,     5,     0,   455,
     0,     6,     0,   456,     0,   458,     0,    10,   256,   457,
   257,     0,    10,   256,   457,   266,   453,   257,     0,   233,
     0,     9,   258,   457,   266,   457,   259,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   340,   357,   377,   380,   383,   386,   389,   390,   391,   392,
   393,   394,   395,   396,   397,   399,   401,   403,   408,   417,
   420,   422,   424,   426,   428,   430,   432,   434,   436,   438,
   440,   442,   444,   446,   448,   450,   452,   454,   456,   459,
   467,   481,   484,   488,   493,   499,   505,   507,   509,   512,
   514,   517,   529,   536,   544,   555,   563,   572,   579,   594,
   624,   629,   640,   643,   647,   652,   655,   671,   684,   693,
   698,   705,   712,   721,   729,   736,   747,   756,   764,   778,
   791,   826,   830,   840,   857,   857,   860,   866,   869,   873,
   882,   885,   888,   892,   912,   956,   958,   962,   965,   982,
   991,   998,  1001,  1006,  1012,  1016,  1021,  1026,  1032,  1039,
  1043,  1056,  1071,  1085,  1091,  1097,  1103,  1109,  1115,  1121,
  1127,  1133,  1139,  1145,  1151,  1157,  1163,  1169,  1175,  1181,
  1188,  1194,  1196,  1205,  1209,  1215,  1289,  1323,  1332,  1344,
  1346,  1358,  1360,  1372,  1374,  1388,  1400,  1406,  1412,  1414,
  1443,  1469,  1482,  1488,  1495,  1501,  1508,  1515,  1525,  1528,
  1529,  1532,  1535,  1538,  1543,  1546,  1559,  1566,  1571,  1576,
  1580,  1587,  1592,  1597,  1602,  1608,  1612,  1617,  1620,  1656,
  1664,  1669,  1678,  1682,  1691,  1694,  1699,  1704,  1709,  1717,
  1721,  1733,  1743,  1748,  1753,  1758,  1770,  1774,  1824,  1827,
  1830,  1833,  1836,  1845,  1852,  1855,  1862,  1864,  1867,  1876,
  1880,  1889,  1897,  1906,  1909,  1925,  1932,  1937,  1944,  1954,
  1958,  1970,  1975,  1981,  1986,  1994,  2002,  2011,  2029,  2038,
  2046,  2054,  2064,  2074,  2084,  2102,  2110,  2113,  2120,  2122,
  2126,  2134,  2138,  2147,  2155,  2164,  2167,  2170,  2173,  2178,
  2186,  2203,  2210,  2227,  2231,  2236,  2241,  2246,  2260,  2280,
  2285,  2290,  2295,  2324,  2328,  2333,  2343,  2405,  2413,  2420,
  2427,  2431,  2440,  2443,  2448,  2466,  2471,  2475,  2492,  2506,
  2511,  2518,  2531,  2539,  2547,  2555,  2559,  2568,  2579,  2591,
  2598,  2635,  2642,  2654,  2658,  2693,  2696,  2699,  2712,  2719,
  2722,  2729,  2731,  2735,  2742,  2746,  2755,  2763,  2773,  2775,
  2780,  2786,  2791,  2795,  2814,  2818,  2823,  2827,  2830,  2840,
  2844,  2852,  2876,  2881,  2887,  3198,  3203,  3212,  3221,  3230,
  3235,  3238,  3276,  3283,  3288,  3293,  3300,  3305,  3308,  3311,
  3320,  3328,  3331,  3343,  3353,  3365,  3374,  3377,  3381,  3383,
  3385,  3391,  3412,  3416,  3427,  3505,  3551,  3556,  3565,  3574,
  3579,  3588,  3597,  3614,  3618,  3633,  3642,  3696,  3712,  3715,
  3716,  3717,  3718,  3719,  3720,  3721,  3725,  3748,  3770,  3777,
  3780,  3787,  3789,  3793,  3801,  3805,  3814,  3822,  3825,  3827,
  3830,  3834,  3840,  3845,  3853,  3869,  3873,  3878,  3887,  3890,
  3895,  3900,  3905,  3910,  3915,  3919,  3930,  3935,  3940,  3950,
  3962,  3966,  3971,  3982,  3991,  4000,  4026,  4033,  4039,  4045,
  4051,  4059,  4081,  4088,  4094,  4105,  4116,  4129,  4144,  4159,
  4174,  4194,  4215,  4227,  4247,  4264,  4283,  4304,  4318,  4332,
  4339,  4373,  4386,  4400,  4413,  4426,  4433,  4435,  4442,  4444,
  4455,  4467,  4477,  4485,  4498,  4511,  4525,  4535,  4545,  4559,
  4573,  4591,  4610,  4621,  4636,  4651,  4666,  4681,  4696,  4706,
  4712,  4722,  4728,  4731,  4735,  4745,  4758,  4770,  4774,  4780,
  4784,  4788,  4793,  4802,  4815,  4819,  4825,  4829,  4833,  4837,
  4842,  4851,  4863,  4866,  4872,  4876,  4880,  4884,  4893,  4908,
  4911,  4917,  4921,  4925,  4930,  4940,  4946,  4952,  4961,  4965,
  4969,  4983,  4986,  4998,  5027,  5030,  5033,  5041,  5057,  5065,
  5068,  5075,  5077,  5080,  5090,  5093,  5101,  5109,  5122,  5127,
  5132,  5136,  5139,  5141,  5146,  5153,  5157,  5161,  5166,  5172,
  5178,  5191,  5202,  5205,  5213,  5241,  5252,  5257,  5266,  5282,
  5290,  5293,  5298,  5300,  5303,  5312,  5315,  5323,  5335,  5346,
  5351,  5356,  5374,  5383,  5387,  5392,  5402,  5409,  5414,  5423,
  5432,  5441,  5447,  5452,  5459,  5473,  5495,  5498,  5499,  5500,
  5503,  5507,  5511,  5519,  5526,  5533,  5557,  5564,  5576,  5589,
  5609,  5635,  5668,  5688,  5721,  5724,  5732,  5739,  5746,  5750,
  5754,  5758,  5762,  5772,  5777,  5782,  5802,  5806,  5813,  5823,
  5832,  5841,  5848,  5856,  5860,  5869,  5873,  5877,  5885,  5891,
  5895,  5903,  5910,  5918,  5925,  5933,  5940,  5948,  5952,  5960,
  5967,  6015,  6032,  6048,  6068,  6088,  6144,  6148,  6159,  6163,
  6178,  6184,  6190,  6196,  6207,  6212,  6228,  6233,  6245,  6255,
  6271,  6274,  6280,  6286,  6297,  6299,  6300,  6301,  6302,  6303,
  6304,  6305,  6306,  6307,  6308,  6309,  6310,  6311,  6312,  6313,
  6314,  6315,  6316,  6317,  6318,  6321,  6323,  6324,  6325,  6326,
  6327,  6328,  6329,  6330,  6331,  6332,  6333,  6334,  6335,  6336,
  6337,  6338,  6339,  6340,  6341,  6342,  6343,  6344,  6345,  6346,
  6347,  6348,  6349,  6350,  6351,  6352,  6353,  6354,  6355,  6356,
  6357,  6358,  6359,  6363,  6366,  6369,  6370,  6371,  6372,  6373,
  6374,  6375,  6391,  6396,  6402,  6405,  6410,  6418,  6421,  6424,
  6434,  6442,  6453,  6469,  6491,  6506,  6544,  6552,  6562,  6572,
  6581,  6586,  6591,  6596,  6611,  6616,  6621,  6640,  6649
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
"tFourierTransform","tFourierTransformJ","tLanczos","tEigenSolve","tEigenSolveJac",
"tPerturbation","tUpdate","tUpdateConstraint","tBreak","tEvaluate","tTimeLoopTheta",
"tTime0","tTimeMax","tTheta","tTimeLoopNewmark","tBeta","tGamma","tIterativeLoop",
"tNbrMaxIteration","tRelaxationFactor","tIterativeTimeReduction","tDivisionCoefficient",
"tChangeOfState","tChangeOfCoordinates","tChangeOfCoordinates2","tSystemCommand",
"tGenerateFMMGroups","tGenerateOnly","tGenerateOnlyJac","tSolveJac_AdaptRelax",
"tSaveSolutionExtendedMH","tSaveSolutionMHtoTime","tInit_MovingBand2D","tMesh_MovingBand2D",
"tGenerate_MH_Moving","tGenerate_MH_Moving_Separate","tAdd_MH_Moving","tGenerateGroup",
"tGenerateJacGroup","tSaveMesh","tDeformeMesh","tDummyFrequency","tPostProcessing",
"tNameOfSystem","tPostOperation","tNameOfPostProcessing","tUsingPost","tAppend",
"tPlot","tPrint","tPrintGroup","tEcho","tWrite","tAdapt","tOnGlobal","tOnRegion",
"tOnElementsOf","tOnGrid","tOnSection","tOnPoint","tOnLine","tOnPlane","tOnBox",
"tWithArgument","tFile","tDepth","tDimension","tComma","tTimeStep","tHarmonicToTime",
"tFormat","tHeader","tFooter","tSkin","tSmoothing","tTarget","tSort","tIso",
"tNoNewLine","tDecomposeInSimplex","tChangeOfValues","tTimeLegend","tFrequencyLegend",
"tEigenvalueLegend","tEvaluationPoints","tStore","tLastTimeStepOnly","tStr",
"tDate","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'",
"tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'",
"'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'","'['",
"']'","'.'","'#'","'$'","tSHOW","'{'","'}'","','","'@'","'~'","Stats","@1","ProblemDefinitions",
"@2","ProblemDefinition","Interactive","@3","Groups","Group","MovingBand2DGroup",
"@4","@5","ReducedGroupRHS","@6","GroupRHS","GroupRHS_MultipleIndex","FunctionForGroup",
"ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup","ListOfRegion",
"RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex",
"Index","Functions","Function","DefineFunctions","Expression","@7","ListOfExpression",
"RecursiveListOfExpression","WholeQuantityExpression","@8","WholeQuantity","@9",
"@10","WholeQuantity_Single","@11","@12","@13","@14","ArgumentsForFunction",
"RecursiveListOfQuantity","ParametersForFunction","JacobianMethods","JacobianMethod",
"JacobianMethodTerm","JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods",
"IntegrationMethod","IntegrationMethodTerm","IntegrationCases","IntegrationCase",
"IntegrationCaseTerm","QuadratureCases","QuadratureCase","QuadratureCaseTerm",
"Constraints","BracedConstraint","Constraint","ConstraintTerm","ConstraintCases",
"ConstraintCase","ConstraintCaseTerm","FunctionSpaces","BracedFunctionSpace",
"FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction","BasisFunctionTerm",
"OptionalParametersForBasisFunction","@15","@16","SubSpaces","SubSpace","SubSpaceTerm",
"ListOfBasisFunction","RecursiveListOfBasisFunction","ListOfBasisFunctionCoef",
"RecursiveListOfBasisFunctionCoef","GlobalQuantities","GlobalQuantity","GlobalQuantityTerm",
"ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm","Formulations","BracedFormulation",
"Formulation","FormulationTerm","DefineQuantities","DefineQuantity","DefineQuantityTerm",
"@17","@18","IndexInFunctionSpace","Equations","EquationTerm","GlobalEquation",
"GlobalEquationTerm","GlobalEquationTermTerm","GlobalEquationTermTermTerm","LocalTerm",
"LocalTermTerm","@19","@20","GlobalTerm","GlobalTermTerm","@21","@22","TermOperator",
"Quantity_Def","Resolutions","BracedResolution","Resolution","ResolutionTerm",
"@23","DefineSystems","DefineSystem","DefineSystemTerm","ListOfFormulation",
"RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem","Operation",
"OperationTerm","@24","@25","PrintOperation","PrintOperationOptions","PrintOperationOption",
"TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark","TimeLoopNewmarkTerm",
"IterativeLoop","IterativeLoopTerm","IterativeTimeReduction","IterativeTimeReductionTerm",
"ChangeOfStates","ChangeOfState","ChangeOfStateTerm","PostProcessings","BracedPostProcessing",
"PostProcessing","PostProcessingTerm","PostQuantities","PostQuantity","PostQuantityTerm",
"SubPostQuantities","SubPostQuantity","SubPostQuantityTerm","@26","PostOperations",
"BracedPostOperation","PostOperation","PostOperationTerm","SeparatePostOperation",
"@27","PostSubOperations","@28","PostSubOperation","@29","PostQuantitiesToPrint",
"Combination","PostQuantitySupport","PrintSubType","PrintOptions","PrintOption",
"ParsedStrings","Loop","Affectation","DefineConstants","NameForFunction","FExpr",
"OneFExpr","ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","StringIndex","String__Index",
"CharExpr","StrCat", NULL
};
#endif

static const short yyr1[] = {     0,
   270,   269,   271,   272,   271,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   274,
   274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
   274,   274,   274,   274,   274,   274,   274,   274,   274,   275,
   274,   276,   276,   277,   277,   277,   277,   277,   277,   277,
   277,   279,   280,   278,   282,   281,   281,   283,   283,   284,
   285,   285,   286,   286,   287,   287,   287,   288,   289,   289,
   290,   290,   290,   291,   291,   291,   291,   291,   291,   291,
   291,   292,   292,   292,   293,   293,   294,   295,   295,   296,
   297,   297,   298,   298,   298,   298,   298,   299,   299,   300,
   300,   301,   300,   302,   302,   303,   303,   305,   304,   306,
   307,   308,   306,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   309,   309,   309,   309,   309,   309,   310,
   309,   311,   309,   312,   309,   309,   309,   309,   313,   309,
   309,   309,   309,   309,   309,   309,   309,   309,   314,   314,
   314,   315,   315,   316,   316,   316,   317,   317,   318,   318,
   319,   319,   320,   320,   321,   321,   322,   322,   322,   323,
   323,   324,   324,   325,   325,   325,   326,   326,   327,   327,
   328,   328,   328,   329,   329,   330,   330,   331,   331,   331,
   331,   331,   331,   332,   332,   333,   333,   333,   334,   334,
   335,   335,   335,   335,   335,   336,   336,   336,   337,   337,
   338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
   338,   338,   338,   338,   338,   339,   339,   340,   340,   340,
   341,   341,   342,   342,   342,   342,   342,   342,   342,   343,
   343,   343,   344,   344,   345,   345,   345,   345,   345,   345,
   345,   345,   345,   346,   347,   348,   346,   349,   349,   350,
   350,   351,   351,   351,   352,   352,   353,   353,   354,   354,
   355,   355,   356,   356,   357,   357,   358,   358,   358,   359,
   359,   359,   360,   360,   361,   361,   361,   361,   362,   362,
   363,   363,   363,   364,   364,   365,   365,   365,   365,   365,
   366,   366,   366,   367,   367,   368,   368,   368,   368,   368,
   369,   368,   368,   370,   368,   368,   368,   368,   368,   368,
   371,   371,   372,   372,   372,   372,   373,   373,   373,   373,
   374,   374,   375,   375,   375,   376,   376,   377,   377,   377,
   377,   378,   378,   380,   381,   379,   379,   379,   379,   379,
   379,   379,   382,   382,   383,   384,   385,   383,   386,   386,
   386,   386,   386,   386,   386,   386,   387,   387,   388,   388,
   389,   389,   389,   390,   390,   391,   391,   391,   392,   391,
   391,   393,   393,   393,   394,   394,   395,   395,   395,   395,
   395,   395,   395,   395,   395,   396,   396,   397,   397,   398,
   398,   399,   399,   400,   400,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   402,   401,   403,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   404,
   404,   405,   405,   406,   406,   406,   407,   407,   408,   408,
   408,   408,   408,   409,   409,   410,   410,   410,   410,   410,
   410,   411,   411,   412,   412,   412,   412,   412,   413,   413,
   414,   414,   414,   414,   414,   414,   414,   414,   415,   415,
   416,   416,   417,   417,   417,   417,   417,   417,   418,   418,
   419,   419,   419,   420,   420,   421,   421,   421,   421,   421,
   422,   422,   422,   422,   423,   423,   424,   424,   425,   425,
   425,   426,   426,   428,   427,   427,   427,   427,   427,   429,
   429,   430,   430,   430,   431,   431,   432,   432,   432,   432,
   432,   434,   433,   435,   436,   435,   437,   437,   437,   437,
   437,   438,   437,   437,   439,   439,   440,   440,   440,   440,
   441,   441,   442,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   443,   443,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   445,
   445,   446,   446,   446,   446,   446,   446,   446,   447,   447,
   447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
   448,   448,   448,   448,   449,   449,   449,   449,   449,   449,
   449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
   449,   449,   449,   449,   449,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   451,   451,   451,   451,   451,   451,
   451,   451,   452,   452,   452,   452,   453,   453,   453,   453,
   454,   454,   454,   454,   454,   454,   454,   454,   455,   455,
   456,   456,   457,   457,   457,   457,   457,   457,   458
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     2,     4,     5,     5,     5,     1,     5,     1,
     1,     0,     0,    18,     0,     6,     2,     1,     1,     2,
     1,     1,     1,     1,     0,     3,     3,     1,     1,     3,
     0,     3,     4,     1,     3,     3,     3,     5,     5,     7,
     1,     0,     3,     6,     0,     1,     4,     0,     2,     3,
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
     3,     3,     3,     0,     2,     3,     1,     1,     0,     2,
     3,     4,     3,     4,     5,     0,     4,     2,     0,     2,
     3,     3,     3,     3,     3,     3,     7,     3,     3,     3,
     3,     3,     7,     7,     7,     0,     2,     3,     1,     1,
     0,     2,     3,     4,     3,     4,     4,     4,     4,     0,
     4,     2,     0,     2,     3,     3,     4,     4,     7,     3,
     3,     3,     3,     0,     0,     0,    18,     0,     4,     0,
     2,     3,     3,     3,     1,     3,     0,     3,     1,     3,
     0,     3,     0,     4,     0,     2,     3,     3,     3,     0,
     4,     2,     0,     2,     3,     3,     3,     3,     0,     2,
     3,     1,     1,     0,     2,     3,     4,     3,     4,     4,
     0,     4,     2,     0,     2,     3,     3,     3,     3,     3,
     0,     5,     3,     0,     5,     3,     3,     3,     3,     3,
     0,     3,     0,     2,     2,     2,     4,     4,     4,     4,
     0,     2,     3,     3,     3,     0,     2,     3,     3,     3,
     3,     0,     2,     0,     0,     9,     3,     3,     3,     2,
     3,     5,     0,     2,     3,     0,     0,     9,     0,     1,
     1,     1,     1,     1,     1,     1,     4,     3,     0,     2,
     3,     1,     1,     0,     2,     3,     4,     4,     0,     5,
     1,     0,     4,     2,     0,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     1,     3,     0,     3,     1,
     3,     0,     3,     0,     2,     3,     3,     4,     4,     4,
     4,     5,     5,     2,     7,    11,     7,    13,    11,     9,
     7,     7,     7,     9,     9,     9,    11,    11,    11,     5,
    17,    13,    15,    11,    13,     0,     7,     0,     7,     7,
    11,     5,     5,     9,     9,     9,     5,     5,    11,     9,
    14,    14,     7,    12,    10,     7,     7,     7,     1,     1,
     1,     0,     2,     3,     3,     2,     0,     2,     3,     3,
     3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     4,     0,     2,
     3,     3,     3,     3,     3,     4,     4,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
     3,     1,     1,     0,     2,     3,     4,     3,     3,     4,
     0,     4,     2,     2,     0,     2,     3,     4,     0,     5,
     5,     0,     2,     0,     6,     3,     3,     3,     3,     0,
     2,     3,     1,     1,     0,     2,     3,     3,     3,     3,
     4,     0,     8,     0,     0,     3,     7,     7,     8,    11,
     6,     0,    10,     1,     3,     6,     1,     1,     1,     1,
     0,     3,     1,     2,     2,    12,     2,    15,     4,    12,
    17,    22,    12,     0,     2,     3,     4,     4,     3,     2,
     2,     3,     3,     3,     3,     3,     2,     3,     3,     3,
     3,     3,     3,     3,     5,     2,     2,     3,     9,     3,
     2,     9,     2,     9,     2,     9,     5,     3,     2,     0,
     2,     6,     8,     8,    10,     1,     4,     1,     5,     4,
     4,     7,     4,     7,     5,     3,     3,     7,     5,     8,
     0,     3,     5,     5,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     3,     2,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
     4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
     6,     6,     6,     2,     1,     1,     1,     1,     1,     1,
     1,     1,     0,     1,     1,     3,     1,     1,     3,     3,
     3,     5,     3,     4,     4,     6,     8,     8,     5,     5,
     1,     1,     1,     1,     1,     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   741,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   742,     0,     0,     0,
     0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
    27,     0,    28,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   743,     0,     0,   748,   744,    18,   745,
   651,    42,   204,   167,   180,   236,    91,   299,   379,   519,
   550,     0,     0,   636,     0,   638,     0,     0,     0,     0,
    41,   574,     0,   723,     0,     0,   647,   646,     0,    26,
    25,    24,    22,    23,    21,    39,    29,    31,    32,    33,
    34,    30,    35,    36,    37,    38,     0,     0,    85,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   716,   715,
   741,     0,     0,     0,     0,     0,     0,   717,   718,   719,
   720,   721,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   724,   676,     0,
   725,   722,     0,     0,     0,     0,     0,     0,     0,     0,
    86,     0,   741,     0,     6,    43,    48,    51,    50,     0,
   209,     8,   205,   208,   207,   169,     9,   182,    10,   241,
    11,   237,   240,   239,   741,     0,     7,    92,    97,    96,
   304,    12,   300,   303,   302,   384,    13,   380,   383,   382,
   524,    14,   520,   523,   522,   555,    15,   551,   554,   553,
   562,     0,     0,     0,     0,   581,     0,     0,   741,    61,
     0,    58,   572,     0,    59,   594,     0,     0,   641,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   678,   679,     0,   727,     0,
   728,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   714,   640,   643,   739,
   645,     0,   649,     0,     0,   746,     0,   639,   652,     0,
     0,     0,    82,   723,     0,     0,     0,     0,     0,     0,
     0,    98,     0,     0,     0,     0,     0,     0,     0,   637,
   583,     0,     0,     0,     0,     0,     0,     0,     0,   594,
     0,     0,   102,   594,    74,     0,    71,     0,    57,    69,
    81,     0,     0,     0,   740,   733,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   677,   726,     0,   731,   693,   692,   690,
   691,   686,   688,   687,   689,   681,   680,   682,   683,   684,
   685,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    85,   741,     0,     0,     0,     0,     0,     0,   206,   210,
     0,     0,   168,   170,     0,   102,     0,   181,   183,     0,
     0,     0,     0,     0,     0,   238,   242,     0,     0,    85,
     0,     0,     0,     0,   301,   305,     0,     0,   389,   381,
   385,   391,     0,     0,     0,     0,   521,   525,     0,     0,
     0,     0,     0,   552,   556,   564,     0,     0,   584,   585,
   102,   587,     0,     0,     0,     0,     0,     0,     0,   579,
   580,   577,   578,   575,     0,     0,     0,     0,   594,   108,
     0,     0,     0,    85,     0,     0,    64,    55,    63,     0,
     0,   595,   734,   735,     0,     0,     0,     0,   694,   695,
   696,   697,   698,   699,   700,   701,   702,   703,     0,   705,
   706,   707,   708,   709,   710,     0,     0,     0,     0,   729,
   730,     0,   648,     0,   749,   747,   654,   653,     0,    90,
    62,     0,     0,     0,     0,    44,     0,     0,     0,   216,
     0,   741,     0,   173,     0,   187,     0,     0,   290,     0,
   741,     0,   250,   268,   283,   102,     0,     0,     0,     0,
   741,     0,   311,   333,   741,     0,   392,     0,   741,     0,
   531,     0,     0,     0,   564,     0,     0,     0,   565,     0,
     0,   632,     0,     0,     0,     0,     0,     0,     0,     0,
   582,   581,     0,     0,     0,     0,   103,     0,     0,    77,
    75,    70,     0,    76,     0,    85,   571,   723,   723,     0,
     0,     0,     0,     0,   607,   723,     0,   630,   630,   630,
   600,   601,     0,     0,     0,   616,   617,   104,   621,   623,
   625,     0,     0,   629,     0,     0,     0,   644,     0,     0,
     0,     0,   642,   732,   650,    87,    46,    45,    47,    83,
    49,     0,   216,     0,   213,     0,     0,   211,     0,   171,
     0,   185,   184,     0,   245,     0,   243,     0,     0,     0,
     0,   102,    93,    99,   308,     0,   306,     0,     0,     0,
   386,     0,   414,     0,   526,     0,   528,   529,   557,   565,
   558,   560,   559,   563,     0,     0,     0,     0,   102,     0,
   589,     0,     0,     0,   567,     0,     0,     0,     0,     0,
   741,   655,   656,   657,   658,   659,   660,   661,   662,   663,
   664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
   674,     0,   149,     0,     0,     0,     0,   140,   142,     0,
     0,     0,     0,     0,     0,     0,     0,   109,   110,   138,
     0,   135,   722,   568,     0,     0,     0,    72,   594,     0,
     0,   613,   618,   102,   610,     0,     0,   596,   599,   608,
   609,   602,   603,   606,   604,   605,   612,   611,     0,   614,
   102,   620,     0,     0,     0,     0,   628,   736,     0,     0,
   704,   711,   712,   713,     0,    52,     0,   219,   214,   218,
   212,   175,   172,   189,   186,   293,   249,   292,   244,   253,
   246,   252,   270,   247,   285,   248,    94,     0,   307,   314,
   309,   313,     0,     0,     0,     0,   310,   334,   336,   335,
   387,   395,   388,   394,     0,   527,   535,   530,   534,   533,
   561,   566,     0,   634,   633,     0,     0,     0,     0,     0,
     0,   576,   100,   101,   594,   569,   137,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   132,   131,   133,     0,
   157,   155,   152,   154,   153,   741,     0,   111,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   139,   164,    79,
    78,    73,     0,    56,    68,     0,     0,     0,   597,   598,
   631,     0,   106,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   215,     0,     0,     0,     0,     0,     0,     0,
    95,     0,   352,   352,   363,   341,     0,     0,     0,   102,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   446,   448,   390,   415,   469,     0,     0,
     0,   102,     0,     0,     0,     0,     0,     0,   108,     0,
     0,     0,     0,   108,   108,     0,   134,     0,   378,     0,
   130,   129,   126,   127,   128,   122,   124,   123,   125,   118,
   119,   114,   117,   120,   115,   121,   156,   158,   160,     0,
   162,     0,     0,   136,     0,     0,    67,    66,   102,   615,
   105,   102,     0,     0,     0,   627,   737,   738,    84,     0,
     0,     0,     0,     0,   102,   102,   102,   102,     0,     0,
     0,   102,   217,   220,     0,     0,   174,   176,     0,     0,
     0,   188,   190,     0,     0,     0,     0,   291,   294,     0,
     0,     0,     0,   104,   104,     0,     0,   251,   254,     0,
     0,     0,   269,   271,     0,     0,     0,   284,   286,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   723,   324,
   312,   315,   369,   369,   369,     0,     0,     0,     0,     0,
   723,     0,     0,     0,   393,   396,   405,     0,     0,   102,
   102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   424,   102,     0,   477,     0,   484,     0,   492,   499,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   532,   536,   635,     0,     0,     0,     0,     0,
     0,     0,   147,     0,   148,     0,   144,     0,     0,     0,
   108,   377,     0,   159,   161,     0,     0,     0,    80,   573,
     0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
   102,     0,   102,     0,     0,     0,     0,     0,     0,   102,
     0,     0,     0,   164,   194,     0,     0,     0,     0,     0,
     0,     0,     0,   264,     0,     0,     0,     0,     0,     0,
   279,   281,     0,   275,   277,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   321,     0,     0,     0,
     0,   108,     0,     0,     0,     0,   370,   371,   372,   373,
   374,   375,   376,     0,     0,   337,   353,     0,   338,     0,
   339,   364,     0,     0,     0,   346,   340,   342,     0,     0,
   408,     0,   406,     0,     0,     0,   412,     0,   410,     0,
     0,   416,     0,     0,   417,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   104,   104,   539,     0,     0,     0,     0,     0,     0,     0,
   570,     0,     0,   108,     0,   141,     0,     0,   112,   163,
     0,   165,   102,     0,     0,     0,    53,   222,   223,   228,
   229,     0,   232,     0,   231,   225,   224,    85,   226,   221,
     0,   230,   178,   177,     0,     0,   191,   192,   295,   296,
   297,   298,   255,   256,     0,     0,     0,    85,   260,   261,
   262,   263,   272,    85,   274,    85,   273,   288,   287,   289,
   329,   327,   328,   319,   317,   318,   316,   331,   323,   330,
   326,   320,     0,     0,     0,     0,     0,     0,   360,   354,
     0,   366,     0,     0,     0,   398,   397,    85,   399,   400,
   403,   404,    85,   401,   402,     0,     0,     0,   102,     0,
     0,     0,     0,     0,     0,   102,     0,     0,     0,     0,
   102,     0,     0,   102,   418,   478,     0,     0,   102,     0,
     0,     0,     0,   419,   485,     0,     0,     0,     0,     0,
   102,   420,   493,     0,     0,     0,     0,     0,     0,     0,
     0,   421,   500,   102,     0,   102,   723,   723,   723,     0,
   723,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   470,   472,   471,   472,     0,   537,     0,   723,     0,
     0,     0,     0,     0,   116,     0,     0,     0,   151,     0,
     0,     0,     0,     0,     0,     0,   102,   102,     0,   102,
   179,   196,   193,   257,     0,   258,     0,   280,     0,   276,
     0,     0,     0,     0,   358,   359,   361,     0,   357,   108,
   365,   108,   343,   344,     0,     0,     0,     0,   345,   347,
   407,     0,   411,     0,   422,   414,   423,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   440,     0,   414,     0,
     0,     0,     0,     0,   414,     0,     0,     0,     0,     0,
     0,     0,     0,   414,     0,     0,     0,     0,     0,   414,
   414,     0,     0,   509,     0,   453,     0,     0,     0,     0,
     0,     0,   457,   458,     0,     0,     0,     0,     0,     0,
     0,   452,     0,     0,     0,     0,   538,     0,     0,     0,
     0,     0,     0,   150,     0,     0,   143,   113,     0,   619,
   622,   624,   626,     0,     0,     0,     0,     0,     0,     0,
     0,   282,   278,     0,   322,   325,     0,   355,   367,     0,
     0,     0,     0,   409,   413,     0,     0,   723,     0,   723,
     0,     0,     0,     0,     0,   102,     0,   481,   479,   480,
   482,   102,     0,   488,   486,   487,   489,   490,   102,   497,
   495,     0,   494,   496,   504,   503,   505,     0,     0,   501,
   502,     0,     0,     0,   102,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   723,
   473,     0,   542,   542,     0,   723,     0,     0,     0,     0,
     0,     0,   166,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   195,   197,     0,     0,   332,   362,
     0,     0,   348,   349,   350,   351,   425,   427,     0,     0,
     0,     0,     0,     0,   433,     0,     0,   483,     0,   491,
     0,   498,   507,   508,   511,   506,   450,     0,     0,   431,
   432,     0,     0,     0,     0,     0,   463,   467,   468,     0,
   466,     0,   447,     0,   723,   476,   449,   369,   369,   593,
     0,   586,   590,     0,     0,     0,   146,     0,   235,   234,
   227,   233,     0,     0,     0,     0,     0,     0,     0,   259,
   108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   102,     0,     0,     0,     0,   102,     0,   102,     0,     0,
     0,     0,     0,     0,   102,     0,   474,   475,     0,     0,
     0,     0,   541,     0,   543,   540,   723,     0,     0,     0,
     0,   198,   199,   200,   201,   202,   203,     0,     0,     0,
   414,   435,   436,     0,     0,     0,     0,   434,     0,     0,
   414,     0,     0,     0,     0,   102,     0,     0,   510,   512,
     0,   430,     0,   454,   455,   456,     0,     0,   460,     0,
     0,     0,     0,     0,     0,     0,   544,     0,     0,     0,
   145,     0,     0,     0,     0,     0,     0,     0,     0,   723,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   102,     0,     0,     0,   465,     0,   548,   549,
   546,   547,   108,   588,     0,     0,     0,   265,   356,   368,
   426,   437,   438,   439,     0,   414,     0,   444,   414,   518,
   513,   516,   517,   514,   515,   451,   429,     0,   414,   414,
   459,     0,     0,     0,     0,    54,     0,     0,     0,     0,
     0,     0,     0,     0,   464,     0,   591,     0,     0,     0,
   442,   414,   445,   428,     0,     0,   545,     0,     0,    88,
     0,     0,   461,   462,     0,   266,     0,    60,     0,   443,
     0,     0,    89,     0,     0,     0,   441,   592,    88,     0,
     0,   267,     0,     0,     0
};

static const short yydefgoto[] = {  2033,
     1,     2,     3,    22,    23,    24,   110,   186,   187,   932,
  1536,   242,   616,   243,  2009,   244,   498,   770,   917,   349,
   494,   350,   411,   182,   311,  2018,   312,   115,   208,   440,
   489,   490,  1512,   924,   607,   608,   758,  1010,  1530,   759,
   874,   875,  1354,   869,   908,  1032,  1034,   112,   318,   424,
   669,   935,  1068,   113,   319,   429,   671,   936,  1073,  1386,
  1659,  1756,   111,   193,   317,   420,   664,   934,  1064,   114,
   202,   320,   437,   678,   938,  1089,  1397,  1987,  2022,   679,
   939,  1094,  1246,  1406,  1243,  1404,   680,   940,  1099,   674,
   937,  1079,   116,   213,   323,   446,   688,   942,  1112,  1418,
  1262,  1553,   689,   838,  1116,  1288,  1435,  1570,  1113,  1277,
  1560,  1761,  1115,  1282,  1562,  1762,  1278,   760,   117,   218,
   324,   451,   578,   692,   947,  1126,  1292,  1438,  1298,  1443,
   845,   987,  1169,  1170,  1513,  1633,  1731,  1317,  1466,  1319,
  1475,  1321,  1483,  1322,  1493,  1712,  1845,  1900,   118,   223,
   325,   458,   696,   989,  1174,  1516,  1808,  1865,  1953,   119,
   228,   326,   465,    25,   327,   589,   705,    81,   352,   235,
   485,   342,   340,   354,   502,   784,   988,    26,   109,   761,
   279,   169,   170,   280,   281,    27,   172,    59,    60
};

static const short yypact[] = {-32768,
-32768,    67,  4472,  -190,    79,  -170,   406,    99,  2544,   359,
  -169,  -145,  -138,  -111,  -108,   -61,   -17,    32,    46,    57,
    26,-32768,-32768,   783,-32768,-32768,   -54,    18,    77,   345,
   395,   409,   423,   434,-32768,   464,   487,   497,   500,   513,
-32768,   521,-32768,   524,   530,   539,   562,   567,   582,   604,
   626,   634,   674,-32768,   223,   298,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   422,    42,-32768,   330,-32768,   448,   460,   472,   480,
-32768,-32768,   428,  2454,  4422,   -58,-32768,-32768,   484,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   359,   359,   151,   180,
    80,  -221,   -77,   244,   265,   450,   461,   488,   527,   423,
   625,  4422,  4422,   423,   229,    82,   737,  4422,-32768,-32768,
   -97,   759,   514,   529,   535,   537,   543,-32768,-32768,-32768,
-32768,-32768,   552,   559,   574,   576,   581,   605,   607,   647,
   661,   666,   688,   699,   707,   745,   747,   752,   784,   798,
   800,   801,   802,  4422,  4422,  4422,  4234,   679,-32768,   815,
-32768,-32768,   945,  5115,   994,  4234,    91,   751,   -50,  1021,
-32768,  1028,   -96,   803,-32768,-32768,-32768,-32768,-32768,   172,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -189,   817,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   809,  3149,  5595,   972,   818,   811,   972,   -79,-32768,
    37,-32768,-32768,   820,-32768,-32768,  5145,   613,-32768,  1075,
  1076,  4422,  4422,   359,  4422,  4422,  4422,  4422,  4422,  4422,
  4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422,
  4422,  4422,  4422,  4422,   359,   -44,   -44,  5621,   679,   410,
-32768,  4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422,  4422,
  4422,  4422,  4422,  4422,  4422,  4422,-32768,-32768,-32768,-32768,
-32768,    50,-32768,  4422,   359,-32768,  4234,-32768,   851,  2046,
   852,   854,-32768,  2392,   855,  4422,   227,   178,   312,   660,
    61,-32768,   615,   862,   454,   814,   826,  4422,  4422,-32768,
-32768,    82,    82,     7,   827,   839,   840,   842,   843,-32768,
    82,   474,   138,-32768,  1100,  4422,-32768,  4234,-32768,-32768,
-32768,   845,    36,   155,-32768,-32768,   414,   850,   847,  2040,
  2422,   859,  5647,  5673,  5699,  5725,  5751,  5777,  5803,  5829,
  5855,  5881,  4261,  5907,  5933,  5959,  5985,  6011,  6037,  4282,
  4337,  4443,   864,-32768,-32768,  4234,  3393,  2690,  2473,  2725,
  2725,   719,   719,   719,   719,   261,   261,   -44,   -44,   -44,
   -44,  1103,  6063,   865,   141,  4370,  4422,  5175,    85,    85,
   181,  -140,  1119,    85,  6089,    27,  1123,  1124,-32768,-32768,
   876,  1136,-32768,-32768,   878,   113,  1138,-32768,-32768,   880,
  1140,  1141,   883,   902,   903,-32768,-32768,   934,   931,   211,
  1191,  1192,   935,   936,-32768,-32768,  1193,   938,-32768,-32768,
-32768,-32768,  1196,   940,   423,   423,-32768,-32768,   423,   971,
   423,   359,  1200,-32768,-32768,-32768,  3437,  3107,  1029,-32768,
   113,-32768,   980,  4234,   985,   992,   993,   260,   977,-32768,
-32768,-32768,-32768,-32768,  1253,  1002,  1005,  1006,-32768,-32768,
   270,  4422,  6115,   443,   171,  1132,-32768,-32768,-32768,  1259,
  4421,-32768,-32768,-32768,  1262,  4422,  4422,  1261,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4422,-32768,
-32768,-32768,-32768,-32768,-32768,  4422,  4422,  4422,  1265,   679,
-32768,  4422,-32768,  1266,-32768,-32768,-32768,  6661,  5205,-32768,
-32768,  1271,  1272,  1273,  1264,-32768,  1278,  1056,  1027,-32768,
  1290,   -14,  1291,-32768,  1292,-32768,  1295,  1296,-32768,  1297,
   -14,  1298,-32768,-32768,-32768,   113,  1073,  1301,  1304,  1303,
   -14,  1305,-32768,-32768,   -14,  1306,-32768,  1047,   -14,  1307,
-32768,  1313,  1318,  1319,-32768,  1325,  1326,  1327,  1072,  4422,
  4422,-32768,  1335,  1077,  4234,   505,  4234,  4234,  4234,  1337,
-32768,   818,  4422,  1341,   359,   324,-32768,  2130,  1343,  3681,
  1334,-32768,    58,-32768,    82,   340,-32768,  1893,  1893,  1087,
  1348,   352,  4422,  4422,-32768,  1893,  4422,  1349,-32768,-32768,
-32768,-32768,  4422,  1350,  1177,-32768,-32768,  1092,  1093,  1095,
  1096,  1097,  1382,-32768,  1127,  4464,  4485,-32768,  6141,  6167,
  6193,  6219,-32768,  6661,-32768,-32768,-32768,-32768,-32768,  1125,
-32768,  1321,-32768,   132,-32768,  1129,  1381,-32768,   511,-32768,
   541,-32768,-32768,   231,-32768,  1384,-32768,   249,   544,   549,
  1400,   113,-32768,-32768,-32768,  1402,-32768,   339,   169,  1404,
-32768,   358,-32768,  1405,-32768,   547,-32768,-32768,-32768,  1148,
-32768,-32768,-32768,-32768,   783,   599,  6245,  1151,   113,   550,
-32768,   564,   579,   586,-32768,  1150,  6271,  1158,  1159,  1412,
    69,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1163,-32768,  1164,  1165,  1169,  1170,-32768,-32768,  1424,
  2130,  2130,  2130,  2130,  1428,   199,  1429,  6736,   219,  1174,
  1174,-32768,  1178,-32768,  4422,  4422,    59,-32768,-32768,  1176,
   105,-32768,-32768,   113,-32768,   359,   359,-32768,  6661,  6661,
-32768,  6661,-32768,  1431,  1431,  1431,  6661,-32768,  4234,  6661,
   113,-32768,  4422,  4422,  4422,  4234,-32768,-32768,  4422,  4422,
-32768,-32768,-32768,-32768,  4422,-32768,   418,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1433,-32768,-32768,
-32768,-32768,  1179,  1180,  1181,  1182,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2724,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  4422,-32768,-32768,  4422,  1183,  1186,  1187,  1189,
  1197,-32768,-32768,-32768,-32768,-32768,-32768,  1203,  1184,  1203,
  2130,  1450,  1452,  1214,  1215,  1236,  1226,  1226,  1226,  6713,
-32768,-32768,-32768,-32768,-32768,    -1,  1224,-32768,  2130,  2130,
  2130,  2130,  2130,  2130,  2130,  2130,  2130,  2130,  2130,  2130,
  2130,  2130,  2130,  2130,  1494,  4422,  1987,-32768,  1235,  6661,
  3730,-32768,   342,-32768,-32768,   423,    37,  1234,-32768,-32768,
-32768,   606,-32768,   608,  4506,  4527,  4548,   616,  6297,  6323,
  5235,  1245,-32768,   708,   109,   -12,    54,   996,   303,   307,
-32768,  1427,-32768,-32768,-32768,-32768,   534,    23,   317,    76,
  1249,  1251,  1254,  1256,  1257,  1260,  1263,  1267,  1270,  1513,
  1274,   193,   196,   269,  1258,  1275,  1276,  1277,  1279,  1280,
  1281,  1285,  1287,  1282,  1283,  1293,  1294,  1300,  1302,  1308,
  1286,  1299,  1309,-32768,-32768,-32768,-32768,-32768,    52,  5265,
  4569,   113,  4234,  4234,  4234,  4234,   365,  1311,-32768,  1314,
  2079,  1310,  1315,-32768,-32768,  1320,-32768,  1289,-32768,  2130,
  2862,  3192,  1243,  1243,  1243,   937,   937,   937,   937,   657,
   657,  1226,  1226,  1226,  1226,  1226,-32768,-32768,-32768,  1317,
  6736,   366,  4181,-32768,  4422,  1517,-32768,-32768,   113,-32768,
-32768,   113,  4422,  4422,  4422,-32768,-32768,-32768,-32768,  1268,
    82,    82,    82,    82,    78,    97,   113,   113,  1333,   423,
  1525,   102,-32768,-32768,     8,  1526,-32768,-32768,  1339,  1531,
  1550,-32768,-32768,  1551,    33,  1554,   423,-32768,-32768,  1556,
  1557,  1559,  1340,  1092,  1092,    82,    82,-32768,-32768,  1567,
    31,    41,-32768,-32768,  1572,   423,  1574,-32768,-32768,  1580,
  1585,  1586,    98,   423,   423,  1595,  1596,    82,  1893,-32768,
-32768,-32768,   941,  1875,   361,    47,  1600,   423,    44,   359,
  1893,   359,    60,   423,-32768,-32768,-32768,   423,  1594,   113,
   113,  1602,   423,   423,   423,   423,   423,   423,   423,   423,
   423,-32768,   113,  4422,-32768,  4422,-32768,  4422,-32768,-32768,
    82,   359,   423,   423,   423,   423,   423,   423,   423,   423,
   423,   423,   423,   423,   423,   423,  1605,   423,  1353,  1354,
  1351,   423,-32768,-32768,-32768,  4422,  1342,   619,   637,   694,
   698,  1607,-32768,  1356,-32768,  2130,-32768,  1355,  1364,  1362,
-32768,-32768,  4068,-32768,-32768,  2130,  1372,   716,  6661,-32768,
  1365,-32768,  4590,  4611,  4632,    37,  1625,  1626,  1627,  1636,
   113,  1637,   113,  1642,  1643,  1669,   982,  1670,  1671,   113,
  1672,  1674,  1676,  1235,-32768,  1677,  1679,  1680,  1681,  1682,
  1683,  1686,    64,  1430,  1690,  1689,  1691,  1692,  1695,  1697,
-32768,-32768,  1699,-32768,-32768,  1700,  1701,  1702,  1703,  1704,
  1705,  1707,  1708,  1711,  1712,  1713,-32768,  1714,  1715,  1717,
  1718,-32768,  1721,  1722,  1725,  1473,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    82,  1728,-32768,-32768,  1474,-32768,    82,
-32768,-32768,  1480,  1734,  1735,-32768,-32768,-32768,  1737,  1739,
-32768,  1740,-32768,  1745,  1750,  1751,-32768,  1757,-32768,  1758,
  1483,-32768,  1509,  1510,-32768,  1504,  1505,  1506,  1508,  1515,
  1520,  1521,  1527,  1529,  1516,  4653,   646,  4674,   602,  4695,
   597,   430,  1532,  1538,  1534,  1537,  1542,  1547,  1548,  1555,
  1511,  1560,  1558,  1561,  1565,  1566,  1569,  1575,  1581,  1563,
    63,    63,-32768,  1813,  5295,  1562,  1582,  1588,  1590,  1591,
-32768,    82,  6688,-32768,  4422,-32768,  1830,  1598,-32768,  6736,
    82,-32768,   113,  4422,  4422,  4422,-32768,-32768,-32768,-32768,
-32768,  1592,-32768,  1597,-32768,-32768,-32768,  1599,-32768,-32768,
  1604,-32768,-32768,-32768,  1853,   724,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1854,  1752,  1859,  1599,-32768,-32768,
-32768,-32768,-32768,   718,-32768,   725,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1609,-32768,-32768,
-32768,-32768,  1612,  1861,  1865,  1866,  1876,  1871,-32768,-32768,
  1873,-32768,  1874,  1877,   288,-32768,-32768,   728,-32768,-32768,
-32768,-32768,   731,-32768,-32768,  1880,  1618,  1882,   113,   423,
   423,  4422,  4422,  4422,   423,   113,    82,  1883,  4422,  1628,
   113,  4422,  4422,   113,-32768,-32768,  4422,  1629,   113,  4422,
  4422,  4422,  4422,-32768,-32768,  4422,  4422,  4422,  1630,  4422,
   113,-32768,-32768,  4422,  4422,   423,  1644,  1647,  4422,  4422,
  1648,-32768,-32768,   113,  1900,   113,  1893,  1893,  1893,  4422,
  1893,  1906,  1907,   423,   423,  4422,   423,   423,    82,  1911,
  1914,-32768,-32768,-32768,-32768,    20,-32768,  1658,  1893,  4234,
  1684,  4234,  4234,  1693,-32768,  1694,  4716,  1696,-32768,  2130,
  1698,  1685,  5325,  5355,  5385,  1688,   113,   113,   982,   113,
-32768,-32768,-32768,-32768,  1944,-32768,  1946,-32768,  1956,-32768,
  1957,   423,  1958,  1960,-32768,-32768,-32768,  1710,-32768,-32768,
-32768,-32768,-32768,-32768,  1203,  1203,  1203,    82,-32768,-32768,
-32768,   423,-32768,   423,-32768,-32768,-32768,  1719,  1706,  1716,
  4737,  4758,  4779,  1720,  1724,  1723,-32768,  4800,-32768,  1963,
   700,  1004,  1964,  4821,-32768,  1966,  1045,  1080,  1227,  1345,
  4842,  1512,  1541,-32768,  1568,  1969,  1601,  1881,  1970,-32768,
-32768,  1961,  2105,-32768,   368,-32768,  1727,  1726,  1729,  1738,
  4863,  1741,-32768,-32768,  1742,  1743,  6349,  1736,  1753,  1744,
   743,-32768,   369,   437,  1730,  1747,-32768,  4422,  1748,   754,
  4422,   765,   770,-32768,  1754,  4422,-32768,  6736,  1781,-32768,
-32768,-32768,-32768,  1791,  1756,  1794,  1789,  1797,   734,  1972,
  1793,-32768,-32768,  1800,-32768,-32768,  1973,-32768,-32768,  1974,
  1977,  2053,  2055,-32768,-32768,  2993,  2058,  1893,  4422,  1893,
  4422,  4422,   423,  2060,   423,   113,  3047,-32768,-32768,-32768,
-32768,   113,  3119,-32768,-32768,-32768,-32768,-32768,   113,-32768,
-32768,  3304,-32768,-32768,-32768,-32768,-32768,  3358,  3412,-32768,
-32768,   774,  2061,  4422,   113,  2062,  2063,  4422,   359,   359,
  4422,  4422,  2064,  2065,  2066,   359,  2067,  1829,  2068,  1621,
-32768,  2094,-32768,-32768,  5415,  1893,  1846,  5445,  1848,  1850,
  1851,  5475,-32768,    37,  2114,  2119,  2120,  2131,  2132,  4422,
  4422,  4422,  4422,  4422,-32768,-32768,  2028,  2136,-32768,-32768,
  1878,  1884,-32768,-32768,-32768,-32768,  2135,-32768,  1888,  6375,
  1886,  4884,  4905,  1890,-32768,  1889,  1892,-32768,  1923,-32768,
   438,-32768,-32768,-32768,-32768,-32768,-32768,  4926,   451,-32768,
-32768,  6401,  1933,  1934,  4947,  4968,-32768,-32768,-32768,   775,
-32768,   359,-32768,   359,  1893,-32768,-32768,  1980,  2140,-32768,
  1928,-32768,-32768,  1895,  4234,  4422,-32768,  1929,-32768,-32768,
-32768,-32768,  2189,  2273,  2522,  2558,  2775,  2830,  2196,-32768,
-32768,  1203,  1942,  2206,  2207,  4422,  4422,  4422,  4422,  2208,
   113,  4422,  1953,  4422,   479,   113,  2211,   113,  2213,  2217,
  2218,  4422,  4422,  2220,   113,   779,-32768,-32768,  2224,  2225,
  2227,    82,-32768,  1975,-32768,-32768,  1893,  4422,   781,  5505,
  4422,-32768,-32768,-32768,-32768,-32768,-32768,  1978,  1979,  1982,
-32768,-32768,-32768,  6427,  6453,  6479,  4989,-32768,  1985,  5010,
-32768,  6505,  2231,  2232,  4422,   113,  2234,    82,-32768,-32768,
  1991,-32768,   473,-32768,-32768,-32768,  6531,  6557,-32768,  1988,
  2248,  2253,  2254,  2262,  2264,  2265,-32768,  1995,  5031,  2008,
-32768,  6583,  2267,  2268,  2278,  3597,  2285,  2289,  2290,  1893,
  2034,  4422,  3651,  2039,  2297,  2302,  3086,  2303,  2304,  2305,
  2317,  2325,   113,  2069,  2071,  2329,-32768,  2072,-32768,-32768,
-32768,-32768,-32768,-32768,  4422,  2075,  2343,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2085,-32768,  6609,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2098,-32768,-32768,
-32768,  2351,  2100,  5535,  4422,-32768,  2299,  4422,  3705,  2099,
  3890,  2355,  3944,  3998,-32768,  2357,-32768,  5052,   423,  5073,
-32768,-32768,-32768,-32768,  2358,  2360,-32768,  4422,  2361,  2106,
  4422,  4183,-32768,-32768,  5094,-32768,  2104,-32768,  6635,-32768,
  4422,  2240,-32768,  2366,  5565,  2369,-32768,-32768,  2106,  2368,
  2111,-32768,  2379,  2380,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   280,-32768,  -318,-32768,  1312,-32768,-32768,  1323,  -336,
-32768,  -484,-32768,  -406,  -542,   356,-32768,-32768,-32768,-32768,
   844,-32768,  -616,-32768,  -978,-32768,  -671,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1632,-32768,  1166,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1746,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1444,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1109,  -710,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
 -1445,-32768,-32768,-32768,  1058,   874,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   668,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1818,-32768,  1709,-32768,  2279,
-32768,  1804,  2169,  -320,-32768,   425,    24,   -60,-32768,-32768,
  1110,  -512,  -566,  -175,   -39,-32768,    -3,   -99,   -49
};


#define	YYLAST		6991


static const short yytable[] = {    28,
   302,    32,   439,     4,   545,  1283,    58,   178,   179,   667,
   867,   239,   239,   469,   470,   472,   499,    72,   676,   478,
  1184,   792,   479,   491,  1635,  1189,  1190,     4,   686,    89,
     4,   549,   690,   569,   173,  1241,   694,   541,   345,   345,
     4,     4,   196,   197,   171,  1244,   121,    82,     4,   189,
   195,   772,   773,   204,   210,   215,   220,   225,   230,   781,
   345,   345,     4,     4,     4,   239,    -2,     4,   321,  1069,
  1394,  1222,   357,  1070,  1071,   240,   240,    29,    29,   877,
   878,   879,   880,     4,     4,    33,   239,   613,    61,   541,
     5,     6,    73,    74,    75,   762,    76,   303,   486,   497,
   486,   240,  1253,    58,    58,    41,   190,    28,    11,   915,
    28,    28,    28,    28,    28,    28,   231,   -62,    62,   486,
   236,   236,   245,   248,   486,    63,  1171,    29,   768,   240,
  1676,   405,  1284,   188,   194,   486,  1636,   203,   209,   214,
   219,   224,   229,  1687,    73,    74,    75,  1172,    76,  1693,
   240,  1074,    64,   240,   362,    65,  1285,   998,  1702,  1000,
   486,  1075,  1076,  1077,  1708,  1709,   248,   310,   606,   916,
    29,    29,   495,     4,   487,   383,   487,  1065,   -62,     5,
     6,    73,    74,    75,   183,    76,   198,   199,    29,  1066,
     5,     6,    73,    74,    75,   487,    76,    11,   175,  1001,
   487,   882,    66,   883,  1254,   404,   306,   176,    11,   771,
   296,   487,  1358,    83,  1255,   307,   297,  1011,  1012,  1013,
  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,
  1024,  1025,  1026,     4,   237,  1031,   487,   351,   762,   762,
   762,   762,   184,    73,    74,    75,    67,    76,     4,   666,
    58,    84,  1072,    29,     5,     6,    73,    74,    75,   421,
    76,    73,    74,    75,   173,    76,    29,   241,   241,   205,
   471,    58,    11,   422,   171,     5,     6,    73,    74,    75,
  1128,    76,   912,  1423,  1637,   833,   834,   835,   836,    71,
   550,   346,   346,    11,  1242,    68,   769,   122,   596,   347,
   347,    58,   348,   348,  1245,   767,   402,  1291,   416,    69,
  1286,  1287,   417,   346,   346,   386,  1173,   245,  1078,   438,
    70,   241,   418,  1297,   348,   348,   791,   666,   245,   245,
   245,   206,   757,  1131,    30,  1211,    29,   245,  1193,    31,
    85,   884,   241,   191,   192,   241,   531,   452,   304,   351,
    86,    73,    74,    75,  1213,    76,     4,    54,   762,  1220,
    55,    56,   587,     4,    54,  1565,  1566,    55,    56,   488,
    73,    74,    75,  1067,    76,  1526,   762,   762,   762,   762,
   762,   762,   762,   762,   762,   762,   762,   762,   762,   762,
   762,   762,  1095,   425,   762,   808,   809,   536,  1090,   426,
  1091,    87,  1096,  1567,  1097,   314,   386,   427,  1092,   180,
    34,   885,    35,   500,   553,    88,   181,  1568,   315,   710,
   501,   712,   713,   714,    36,    37,    38,     4,   562,   316,
    73,    74,    75,   837,    76,  1926,   386,   614,   572,   544,
    90,    39,   423,   576,   185,  1933,   181,  1484,   913,   580,
  1144,   582,   583,  1146,     4,   584,  1145,   586,    58,  1147,
     5,     6,    73,    74,    75,     4,    76,  1236,  1237,   568,
    91,     5,     6,    73,    74,    75,   181,    76,    11,   905,
   107,   906,  1267,  1268,  1269,  1270,  1271,  1272,  1273,    11,
  1280,   419,     4,    92,   816,   817,  1893,   762,     5,     6,
    73,    74,    75,    93,    76,   719,    94,   200,   201,   293,
   294,   295,   820,   821,  1353,   296,    11,  1485,   600,    95,
  1989,   297,   778,  1991,  1360,   501,  1148,    96,   609,   207,
    97,     4,  1149,  1993,  1994,   501,    98,     5,     6,    73,
    74,    75,  1261,    76,   997,    99,    73,    74,    75,   453,
    76,     4,  1569,   108,  1295,    11,  2012,     5,     6,    73,
    74,    75,  1486,    76,  1894,   454,  1895,  1093,   100,  1487,
  1488,  1098,   123,   101,  1130,    11,   428,  1896,   171,   171,
  1038,  1668,   720,  1669,    57,   123,   171,   455,   102,   501,
  1897,    57,  1489,   413,   776,  1490,  1491,   777,   -65,    40,
  1036,    58,   830,   831,   763,   181,   853,   501,  1898,   351,
   103,   245,   120,   922,  1477,   129,   130,   131,    58,  1117,
   928,   842,   843,  1182,  1195,  1281,  1713,  1729,   840,  1118,
   501,  1196,   104,  1714,  1730,   850,   133,   134,   135,   136,
   105,   456,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,  1119,  1120,  1121,
  1122,  1123,  1124,   762,   385,   386,   919,   920,   503,   386,
   106,   808,   933,   762,  1478,    28,   282,   810,   542,   543,
  1395,   128,    28,   547,  1492,  1732,  1843,   818,  1864,  1864,
   441,   822,  1730,  1844,  1378,   124,  1689,   612,   181,  1847,
   442,   832,   839,   211,   212,   844,  1848,   125,   457,   849,
   480,   481,   482,   483,   216,   217,   443,   430,    82,   126,
   444,  1942,  1207,  1208,  1209,  1210,  1479,   127,  1943,   484,
   177,  1468,   246,  1899,  1469,   431,  1223,   763,   763,   763,
   763,   221,   222,   887,   232,   432,   433,  1470,  1471,  1480,
  1481,  1472,  1473,   351,   434,   249,   435,  1238,  1239,   711,
   386,   250,    58,    58,   812,   813,  1051,  1052,  1053,  1054,
  1055,  1056,  1057,  1058,  1059,  1460,   251,  1060,  1461,  1260,
   226,   227,   252,  1061,   253,    73,    74,    75,  1125,    76,
   254,  1462,  1463,  1464,   814,   815,  1062,   823,   824,   255,
   847,   848,   825,   826,   858,   386,   256,  1178,  1179,  1180,
  1181,   298,  1749,  1750,  1751,  1752,  1753,  1754,   859,   386,
   810,   257,  1323,   258,   283,   284,   285,   286,   259,   287,
   288,   289,   290,   860,   386,   291,   292,   293,   294,   295,
   861,   386,  1879,   296,  1670,  1671,  1672,  1198,  1648,   297,
   164,  1482,   260,   854,   261,   165,  1474,   763,   166,  1367,
  1040,   386,  1041,  1042,    73,    74,    75,   356,    76,   445,
  1046,   386,  1008,  1347,   386,   763,   763,   763,   763,   763,
   763,   763,   763,   763,   763,   763,   763,   763,   763,   763,
   763,  1348,   386,   763,   262,   900,   901,   902,   903,   459,
  1465,   904,  1037,   351,   283,   284,   285,   286,   263,   287,
   288,   289,   290,   264,   436,   291,   292,   293,   294,   295,
  1618,  1619,  1620,   296,  1622,   283,   284,   285,   286,   297,
   287,   288,   289,   290,  1129,   265,   291,   292,   293,   294,
   295,   299,  1639,   460,   296,  1428,   266,   447,  1349,   386,
   297,  1431,  1350,   386,   267,   291,   292,   293,   294,   295,
  1127,  1539,  1063,   296,  1983,    77,    78,    79,    80,   297,
  1362,   386,  1548,   181,   129,   130,     4,  1542,  1543,  1550,
   181,  1547,  1571,   181,   448,  1573,   181,  1549,  1755,  1551,
   301,   449,   268,   461,   269,   462,   763,  1727,  1728,   270,
  1690,   138,   139,   140,   141,   142,   305,   762,  1737,   386,
  1294,  1263,  1296,  1264,  1265,  1266,  1657,   308,   463,  1739,
   386,  1572,   309,  1524,  1740,   386,  1574,  1785,  1786,  1854,
  1855,   271,  1531,  1911,  1912,  1920,   386,   245,   245,   245,
   245,  1695,  1324,   785,   786,   272,  1218,   273,   274,   275,
   313,   245,  1267,  1268,  1269,  1270,  1271,  1272,  1273,   171,
  1274,  1275,   328,  1231,   322,   341,   343,   353,   464,   358,
   359,   171,   245,   245,   406,   409,  1696,   410,   414,   466,
   473,  1080,  1248,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
  1256,  1257,   474,   475,   245,   476,   477,   492,   504,   533,
   496,  1769,   505,  1771,  1290,  1293,    58,   508,    58,  1299,
  1300,  1880,   529,   535,  1301,   546,   450,   551,   552,  1306,
  1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1586,   554,
   555,   556,   558,   559,   560,   561,   563,   245,    58,  1325,
  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1335,
  1336,  1337,  1338,  1806,  1340,   564,   565,   566,  1344,  1811,
   331,   332,   333,   334,   335,   336,   337,   338,   339,   129,
   130,     4,   763,   898,   899,   900,   901,   902,   903,   567,
  1630,   904,   763,   168,   174,   570,   571,   575,   573,   574,
   579,   577,   351,   581,   588,  1276,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   233,   234,  1697,   585,   601,   593,   247,  1858,   283,
   284,   285,   286,   595,   287,   288,   289,   290,   597,  1673,
   291,   292,   293,   294,   295,   598,   599,   602,   296,   603,
  1088,   615,   604,   605,   297,   617,   645,   648,   660,   557,
   245,   653,   655,   276,   277,   278,   245,   657,   658,   659,
   283,   284,   285,   286,   661,   287,   288,   289,   290,   662,
   663,   291,   292,   293,   294,   295,   665,   668,   670,   296,
  1918,   672,   673,   675,   677,   297,   682,   683,   684,   685,
   693,   687,   691,   695,   594,   283,   284,   285,   286,   697,
   287,   288,   289,   290,   698,   699,   291,   292,   293,   294,
   295,   701,   702,   703,   296,  1923,   704,  1514,  1514,   708,
   297,   766,   709,   715,  1640,   718,  1642,  1643,   245,   764,
   774,  1698,   775,   783,   788,   791,   793,   245,   794,   795,
   796,   360,   361,  1965,   363,   364,   365,   366,   367,   368,
   369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
   379,   380,   381,   382,   797,   798,   806,   811,   805,   407,
   819,   387,   388,   389,   390,   391,   392,   393,   394,   395,
   396,   397,   398,   399,   400,   401,   827,  1818,   829,   681,
   841,   846,   851,   403,   856,   862,   864,   865,   866,   408,
   868,   870,   871,   168,   164,   415,   872,   873,   876,   165,
   881,   907,   166,   886,   914,  -675,   921,   467,   468,   941,
   789,   999,   943,   944,   945,   946,  1579,  1580,   992,   993,
   994,  1584,   995,   245,  1002,   493,  1003,   171,   171,   171,
   996,   171,   283,   284,   285,   286,   757,   287,   288,   289,
   290,  1004,  1005,   291,   292,   293,   294,   295,  1006,   171,
   904,   296,  1609,   894,   895,   896,   897,   297,  1009,   898,
   899,   900,   901,   902,   903,   530,  1027,   904,  1033,  1039,
  1625,  1626,  1050,  1628,  1629,   245,  1133,  1100,  1134,  1101,
  1102,  1135,  1103,  1136,  1137,   538,   539,  1138,  1700,  1142,
  1139,  1150,  1104,  1200,  1140,   828,   763,  1141,  1206,  1219,
  1224,  1143,  1151,  1152,  1153,  1226,  1154,  1155,  1156,  1105,
  1106,  1107,  1157,  1916,  1158,  1159,  1160,  1701,  1664,  1166,
  1161,  1162,   857,  1192,  1227,  1228,  1108,  1163,   915,  1164,
  1232,  1233,  1167,  1234,   245,  1165,  1168,  1187,  1674,  1183,
  1675,  1240,  1185,  1188,  1703,  1194,  1247,  1191,  1249,  1940,
   283,   284,   285,   286,  1250,   287,   288,   289,   290,  1251,
  1252,   291,   292,   293,   294,   295,  1217,  1258,  1259,   296,
  1302,   610,  1225,  1235,  1289,   297,  1346,  1705,  1305,  1339,
  1341,  1342,  1109,  1351,  1343,   646,   647,   918,  1355,  1793,
  1794,  1352,  1356,   129,   130,   131,  1800,  1357,   649,  1361,
  1363,  1368,  1369,  1370,   923,   650,   651,   652,   171,  1869,
   171,   654,  1371,  1373,   133,   134,   135,   136,  1375,  1376,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,  1377,  1379,  1380,  1382,  1774,
  1383,  1776,  1384,  1387,  1110,  1388,  1389,  1390,  1391,  1392,
   171,  1111,  1393,  1396,  1398,  1399,   171,  1400,  1401,   706,
   707,  1402,  1856,  1403,  1857,  1405,  1407,  1408,  1409,  1410,
  1411,  1412,   717,  1413,  1414,    58,    58,  1415,  1416,  1417,
  1419,  1420,    58,  1421,  1422,  1424,  1425,   168,   168,  1426,
  1427,  1430,   779,   780,  1429,   168,   782,  1432,  1433,  1434,
   351,  1446,   787,  1436,   790,  1437,  1439,   283,   284,   285,
   286,  1440,   287,   288,   289,   290,  1441,  1442,   291,   292,
   293,   294,   295,  1444,  1445,   171,   296,  1447,  1448,  1449,
  1450,  1451,   297,  1452,  1458,  1502,   283,   284,   285,   286,
  1453,   287,   288,   289,   290,  1454,  1455,   291,   292,   293,
   294,   295,  1456,  1132,  1457,   296,  1495,  1494,    58,  1496,
    58,   297,  1497,   283,   284,   285,   286,  1498,   287,   288,
   289,   290,  1499,  1500,   291,   292,   293,   294,   295,  1517,
  1501,  1511,   296,  1504,  1503,  1519,  1505,   171,   297,  1804,
  1506,  1507,  1528,  1805,  1508,  1177,   283,   284,   285,   286,
  1509,   287,   288,   289,   290,  1520,  1510,   291,   292,   293,
   294,   295,  1521,  1522,  1523,   296,  1529,  1537,   245,  1541,
  1544,   297,  1538,  1545,   181,  1546,  1552,  1555,   164,  1540,
  1554,  1556,  1557,   165,   910,   911,   166,  1559,  1558,  1561,
  1563,  1576,  1201,  1564,   167,  1202,  1575,  1706,  1577,  1587,
   171,  1589,  1595,  1604,   245,   129,   130,   131,  1212,  1214,
  1215,  1216,   925,   926,   927,  1221,  1616,  1610,   929,   930,
  1611,  1614,  1623,  1624,   931,  1631,   133,   134,   135,   136,
  1632,  1638,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,  1641,  1660,  1650,
  1661,  1644,  1645,  1654,  1647,  1263,  1649,  1264,  1265,  1266,
  1662,  1663,   990,  1802,  1665,   991,  1666,  1710,  1667,  1688,
  1691,  1678,  1694,  1303,  1304,  1704,  1707,  1677,  1757,  1760,
  1763,  1679,  1684,  1764,  1716,  1683,  1315,  1717,  1685,   129,
   130,   721,  1715,  1733,  1724,  2010,  1267,  1268,  1269,  1270,
  1271,  1272,  1273,  1718,  1274,  1275,  1720,  1721,  1722,  1726,
  1734,  1725,  1741,  1736,  1745,  1028,   138,   139,   140,   141,
   142,   722,   723,   724,   725,   726,   727,   728,   729,   730,
   731,   732,   733,   734,   735,   736,   737,   738,   739,   740,
   741,   742,   743,   744,   745,  1743,   746,   747,   129,   130,
     4,  1744,  1746,  1747,  1372,  1748,  1374,  1758,  1759,  1765,
  1859,  1766,  1860,  1381,  1768,  1861,  1775,  1787,  1790,  1791,
  1797,  1798,  1799,  1801,  1803,   138,   139,   140,   141,   142,
   143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
  1807,  1267,  1268,  1269,  1270,  1271,  1272,  1273,   748,  1862,
  1812,  1711,  1814,  1815,  1816,   749,   283,   284,   285,   286,
  1819,   287,   288,   289,   290,  1820,  1821,   291,   292,   293,
   294,   295,   129,   130,   721,   296,  1823,  1822,  1829,  1279,
   164,   297,  1830,  1831,  1199,   165,  1834,  1840,   166,  1832,
  1833,  1836,  1203,  1204,  1205,  1839,   167,  1841,  1868,   138,
   139,   140,   141,   142,   722,   723,   724,   725,   726,   727,
   728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
   738,   739,   740,   741,   742,   743,   744,   745,  1842,   746,
   747,  1850,  1851,  1867,  1871,  1872,   283,   284,   285,   286,
  1878,   287,   288,   289,   290,  1881,  1532,   291,   292,   293,
   294,   295,  1882,  1883,  1888,   296,  1891,  1902,   168,  1904,
  1859,   297,  1860,  1905,  1906,  1861,  1909,   750,  1913,  1914,
   168,  1915,  1917,   751,   752,  1935,  1936,  1924,  1939,   753,
  1925,   666,   754,  1931,  1863,  1029,  1030,   755,   756,  1941,
   757,   748,  1946,  1316,  1947,  1318,  1948,  1320,   749,  1954,
  1949,  1267,  1268,  1269,  1270,  1271,  1272,  1273,  1950,  1862,
  1951,  1952,  1956,  1958,  1959,   283,   284,   285,   286,  1873,
   287,   288,   289,   290,  1960,  1345,   291,   292,   293,   294,
   295,  1962,  1578,   164,   296,  1963,  1964,  1966,   165,  1585,
   297,   166,  1969,  1970,  1590,   506,   407,  1593,  1971,  1973,
  1974,  1975,  1596,   888,   889,   890,   891,   892,   893,   894,
   895,   896,   897,  1976,  1606,   898,   899,   900,   901,   902,
   903,  1977,  1979,   904,  1980,  1981,  1982,  1615,  1985,  1617,
   283,   284,   285,   286,  1186,   287,   288,   289,   290,  1986,
  1988,   291,   292,   293,   294,   295,  1992,  1995,  1996,   296,
  1999,  2004,  2002,  2007,  2013,   297,  2014,  2016,  2023,  2017,
   750,  2026,  2027,  2029,  2031,  2032,   751,   752,  2034,  2035,
  1655,  1656,   753,  1658,  2030,   754,  1229,  1114,  1634,  1385,
   755,   756,   909,   757,   129,   130,   412,   132,  1230,  1515,
    55,  1809,   700,   238,  1866,   716,   344,     0,   807,     0,
     0,     0,     0,   852,     0,   133,   134,   135,   136,   137,
     0,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
   240,     0,    55,     0,  1527,     0,     0,     0,     0,     0,
     0,     0,     0,  1533,  1534,  1535,     0,   133,   134,   135,
   136,   137,     0,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,  1874,  1777,
     0,     0,     0,   297,     0,  1779,     0,     0,     0,     0,
     0,     0,  1781,     0,     0,     0,    42,     0,     0,     0,
    43,     0,     0,     0,     0,     0,     0,     0,  1789,     0,
     0,  1581,  1582,  1583,  1875,     0,     0,     0,  1588,     0,
     0,  1591,  1592,     0,     0,     0,  1594,     0,     0,  1597,
  1598,  1599,  1600,     0,     0,  1601,  1602,  1603,     0,  1605,
     0,     0,     0,  1607,  1608,     0,     0,     0,  1612,  1613,
     0,     0,     0,     0,     0,    44,   168,   168,   168,  1621,
   168,    45,     0,     0,     0,  1627,     0,     0,     0,     0,
     0,     0,     0,   163,    46,     0,    47,     0,   168,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    48,   164,
     0,     0,    49,     0,   165,     0,     0,   166,     0,     0,
     0,     0,   241,     0,    50,   167,     0,   283,   284,   285,
   286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
   293,   294,   295,     0,     0,    51,   296,     0,     0,     0,
     0,     0,   297,     0,  1889,   163,     0,   507,     0,  1901,
     0,  1903,     0,     0,     0,     0,     0,     0,  1910,     0,
     0,   164,     0,     0,     0,     0,   165,     0,     0,   166,
   285,   286,     0,   287,   288,   289,   290,   167,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,   948,     0,
    52,     0,    53,   297,     0,     0,    73,    74,   949,  1938,
    76,     0,     0,     0,     0,     0,     0,  1735,     0,     0,
  1738,     0,     0,     0,     0,  1742,     0,   283,   284,   285,
   286,     0,   287,   288,   289,   290,     0,     0,   291,   292,
   293,   294,   295,     0,     0,     0,   296,     0,     0,     0,
     0,  1876,   297,     0,     0,     0,  1978,   168,  1770,   168,
  1772,  1773,     0,   283,   284,   285,   286,     0,   287,   288,
   289,   290,     0,     0,   291,   292,   293,   294,   295,     0,
     0,     0,   296,     0,     0,     0,     0,     0,   297,     0,
     0,     0,     0,  1788,     0,     0,     0,  1792,     0,     0,
  1795,  1796,     0,     0,     0,     0,  1877,     0,     0,   168,
     0,     0,     0,     0,     0,   168,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1824,
  1825,  1826,  1827,  1828,     0,   950,     0,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,   961,   962,     0,
     0,     0,   963,     0,     0,   964,     0,     0,   965,     0,
     0,   966,     0,   967,   968,   969,   970,   971,   972,   973,
   974,   975,   976,   977,   978,   979,   980,   981,   982,     0,
     0,     0,   983,     0,   168,     0,     0,   984,     0,     0,
   985,     0,     0,     0,     0,  1870,   284,   285,   286,     0,
   287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,  1884,  1885,  1886,  1887,     0,
   297,  1890,     0,  1892,     0,     0,     0,     0,     0,     0,
     0,  1907,  1908,     0,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,   168,  1919,     0,   296,
  1922,     0,     0,     0,     0,   297,     0,     0,   986,     0,
     0,     0,     0,     0,     0,     0,     0,   948,     0,     0,
     0,     0,     0,     0,  1937,    73,    74,   949,     0,    76,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,   168,
     0,  1967,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   948,     0,     0,     0,     0,     0,     0,     0,    73,
    74,   949,     0,    76,  1984,   283,   284,   285,   286,     0,
   287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,     0,     0,     0,     0,     0,
   297,     0,  1972,     0,  1998,     0,     0,  2000,   890,   891,
   892,   893,   894,   895,   896,   897,     0,     0,   898,   899,
   900,   901,   902,   903,   591,     0,   904,  2015,     0,     0,
  2019,     0,     0,   948,     0,     0,     0,     0,     0,     0,
  2025,    73,    74,   949,   950,    76,   951,   952,   953,   954,
   955,   956,   957,   958,   959,   960,   961,   962,     0,     0,
     0,   963,     0,     0,   964,     0,   329,   965,     0,     0,
   966,     0,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,   978,   979,   980,   981,   982,     0,     0,
     0,   983,     0,     0,     0,     0,   984,     0,   950,   985,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
   961,   962,     0,     0,     0,   963,     0,     0,   964,     0,
     0,   965,     0,     0,   966,     0,   967,   968,   969,   970,
   971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
   981,   982,     0,     0,     0,   983,     0,     0,     0,     0,
   984,     0,     0,   985,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1767,     0,     0,
   950,     0,   951,   952,   953,   954,   955,   956,   957,   958,
   959,   960,   961,   962,     0,     0,     0,   963,     0,     0,
   964,     0,     0,   965,     0,     0,   966,     0,   967,   968,
   969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
   979,   980,   981,   982,     0,     0,     0,   983,   948,     0,
     0,  1778,   984,     0,     0,   985,    73,    74,   949,     0,
    76,   283,   284,   285,   286,     0,   287,   288,   289,   290,
     0,     0,   291,   292,   293,   294,   295,     0,     0,     0,
   296,     0,   283,   284,   285,   286,   297,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,   948,   592,     0,     0,     0,   297,     0,     0,
    73,    74,   949,     0,    76,     0,     0,     0,     0,     0,
     0,     0,     0,  1780,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
   532,     0,     0,   296,     0,     0,     0,     0,     0,   297,
     0,     0,     0,     0,     0,     0,   948,     0,     0,     0,
     0,     0,     0,     0,    73,    74,   949,     0,    76,   891,
   892,   893,   894,   895,   896,   897,     0,     0,   898,   899,
   900,   901,   902,   903,   590,   950,   904,   951,   952,   953,
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
   956,   957,   958,   959,   960,   961,   962,     0,  1782,     0,
   963,     0,     0,   964,     0,     0,   965,     0,     0,   966,
     0,   967,   968,   969,   970,   971,   972,   973,   974,   975,
   976,   977,   978,   979,   980,   981,   982,     0,     0,     0,
   983,   948,     0,     0,     0,   984,     0,     0,   985,    73,
    74,   949,     0,    76,     0,     0,     0,     0,     0,     0,
     0,     0,  1783,     0,     0,     0,     0,     0,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,     0,     0,   297,     0,   948,     0,     0,     0,     0,
     0,     0,     0,    73,    74,   949,     0,    76,     0,     0,
     0,     0,   283,   284,   285,   286,  1784,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,   765,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   948,
     0,     0,     0,     0,     0,     0,     0,    73,    74,   949,
     0,    76,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1035,   950,     0,
   951,   952,   953,   954,   955,   956,   957,   958,   959,   960,
   961,   962,     0,     0,     0,   963,     0,     0,   964,     0,
     0,   965,     0,     0,   966,     0,   967,   968,   969,   970,
   971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
   981,   982,     0,     0,     0,   983,     0,     0,     0,     0,
   984,     0,   950,   985,   951,   952,   953,   954,   955,   956,
   957,   958,   959,   960,   961,   962,     0,     0,     0,   963,
     0,     0,   964,     0,     0,   965,     0,     0,   966,     0,
   967,   968,   969,   970,   971,   972,   973,   974,   975,   976,
   977,   978,   979,   980,   981,   982,     0,     0,     0,   983,
     0,     0,     0,     0,   984,     0,   950,   985,   951,   952,
   953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
     0,  1961,     0,   963,     0,     0,   964,     0,     0,   965,
     0,     0,   966,     0,   967,   968,   969,   970,   971,   972,
   973,   974,   975,   976,   977,   978,   979,   980,   981,   982,
     0,     0,     0,   983,   948,     0,     0,     0,   984,     0,
     0,   985,    73,    74,   949,     0,    76,     0,     0,     0,
     0,     0,     0,     0,     0,  1968,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,     0,
     0,   297,     0,     0,     0,     0,     0,     0,   948,     0,
     0,     0,     0,     0,     0,     0,    73,    74,   949,     0,
    76,     0,     0,     0,     0,   283,   284,   285,   286,  2001,
   287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,     0,     0,     0,     0,     0,
   297,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   948,     0,     0,     0,     0,     0,     0,     0,
    73,    74,   949,     0,    76,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   950,     0,   951,   952,   953,   954,   955,   956,   957,
   958,   959,   960,   961,   962,     0,     0,     0,   963,     0,
     0,   964,     0,     0,   965,     0,     0,   966,     0,   967,
   968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
   978,   979,   980,   981,   982,  1359,     0,     0,   983,     0,
     0,     0,     0,   984,     0,   950,   985,   951,   952,   953,
   954,   955,   956,   957,   958,   959,   960,   961,   962,     0,
     0,     0,   963,     0,     0,   964,     0,     0,   965,     0,
     0,   966,     0,   967,   968,   969,   970,   971,   972,   973,
   974,   975,   976,   977,   978,   979,   980,   981,   982,     0,
     0,     0,   983,     0,     0,     0,     0,   984,     0,   950,
   985,   951,   952,   953,   954,   955,   956,   957,   958,   959,
   960,   961,   962,     0,  2003,     0,   963,     0,     0,   964,
     0,     0,   965,     0,     0,   966,     0,   967,   968,   969,
   970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
   980,   981,   982,   129,   130,   131,   983,   948,     0,     0,
     0,   984,     0,     0,   985,    73,    74,   949,     0,    76,
     0,     0,     0,     0,   133,   134,   135,   136,  2005,     0,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,     0,   129,   130,   131,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,  1197,
     0,     0,     0,     0,     0,     0,     0,   133,   134,   135,
   136,     0,  2006,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   888,   889,   890,   891,   892,   893,   894,   895,
   896,   897,     0,     0,   898,   899,   900,   901,   902,   903,
     0,     0,   904,     0,   950,     0,   951,   952,   953,   954,
   955,   956,   957,   958,   959,   960,   961,   962,     0,     0,
     0,   963,     0,     0,   964,     0,     0,   965,     0,     0,
   966,     0,   967,   968,   969,   970,   971,   972,   973,   974,
   975,   976,   977,   978,   979,   980,   981,   982,     0,     0,
     0,   983,   129,   130,     4,   537,   984,     0,     0,   985,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   129,   130,     4,     0,   164,     0,
     0,     0,     0,   165,     0,     0,   166,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  2020,     0,     0,
     0,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,     4,     0,     0,     0,
     0,   164,     5,     6,     0,     0,   165,     0,     0,   166,
     7,     8,     9,    10,     0,   618,   283,   284,   285,   286,
    11,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   283,   284,   285,
   286,   297,   287,   288,   289,   290,   519,     0,   291,   292,
   293,   294,   295,    12,     0,     0,   296,     0,     0,    13,
     0,     0,   297,     0,     0,     0,     0,   526,     0,     0,
     0,     0,    14,     0,    15,     0,   619,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    16,     0,     0,     0,
    17,     0,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,    18,   291,   292,   293,   294,   295,   620,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,     0,   527,    19,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   164,   621,     0,
     0,     0,   165,     0,     0,   166,     0,     0,     0,   622,
   623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
   633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
   643,   644,     0,     0,     0,     0,     0,     0,    20,     0,
    21,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     0,     0,     0,     0,   165,     0,     0,   166,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,   283,
   284,   285,   286,   297,   287,   288,   289,   290,   528,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
   283,   284,   285,   286,   297,   287,   288,   289,   290,   799,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   283,   284,   285,   286,   297,   287,   288,   289,   290,
   800,     0,   291,   292,   293,   294,   295,     0,     0,     0,
   296,     0,   283,   284,   285,   286,   297,   287,   288,   289,
   290,  1043,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,   283,   284,   285,   286,   297,   287,   288,
   289,   290,  1044,     0,   291,   292,   293,   294,   295,     0,
     0,     0,   296,     0,   283,   284,   285,   286,   297,   287,
   288,   289,   290,  1045,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,   283,   284,   285,   286,   297,
   287,   288,   289,   290,  1176,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,     0,   283,   284,   285,   286,
   297,   287,   288,   289,   290,  1364,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   283,   284,   285,
   286,   297,   287,   288,   289,   290,  1365,     0,   291,   292,
   293,   294,   295,     0,     0,     0,   296,     0,   283,   284,
   285,   286,   297,   287,   288,   289,   290,  1366,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,   283,
   284,   285,   286,   297,   287,   288,   289,   290,  1459,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
   283,   284,   285,   286,   297,   287,   288,   289,   290,  1467,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   283,   284,   285,   286,   297,   287,   288,   289,   290,
  1476,     0,   291,   292,   293,   294,   295,     0,     0,     0,
   296,     0,   283,   284,   285,   286,   297,   287,   288,   289,
   290,  1646,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,   283,   284,   285,   286,   297,   287,   288,
   289,   290,  1680,     0,   291,   292,   293,   294,   295,     0,
     0,     0,   296,     0,   283,   284,   285,   286,   297,   287,
   288,   289,   290,  1681,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,   283,   284,   285,   286,   297,
   287,   288,   289,   290,  1682,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,     0,   283,   284,   285,   286,
   297,   287,   288,   289,   290,  1686,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   283,   284,   285,
   286,   297,   287,   288,   289,   290,  1692,     0,   291,   292,
   293,   294,   295,     0,     0,     0,   296,     0,   283,   284,
   285,   286,   297,   287,   288,   289,   290,  1699,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,   283,
   284,   285,   286,   297,   287,   288,   289,   290,  1719,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
   283,   284,   285,   286,   297,   287,   288,   289,   290,  1837,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   283,   284,   285,   286,   297,   287,   288,   289,   290,
  1838,     0,   291,   292,   293,   294,   295,     0,     0,     0,
   296,     0,   283,   284,   285,   286,   297,   287,   288,   289,
   290,  1846,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,   283,   284,   285,   286,   297,   287,   288,
   289,   290,  1852,     0,   291,   292,   293,   294,   295,     0,
     0,     0,   296,     0,   283,   284,   285,   286,   297,   287,
   288,   289,   290,  1853,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,   283,   284,   285,   286,   297,
   287,   288,   289,   290,  1930,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,     0,   283,   284,   285,   286,
   297,   287,   288,   289,   290,  1932,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   283,   284,   285,
   286,   297,   287,   288,   289,   290,  1955,     0,   291,   292,
   293,   294,   295,     0,     0,     0,   296,     0,   283,   284,
   285,   286,   297,   287,   288,   289,   290,  2008,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,   283,
   284,   285,   286,   297,   287,   288,   289,   290,  2011,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
   283,   284,   285,   286,   297,   287,   288,   289,   290,  2021,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,   300,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,   355,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,   540,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,   656,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1049,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1175,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1518,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1651,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1652,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1653,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1810,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1813,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1817,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1921,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  1997,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,     0,     0,   297,     0,     0,     0,  2028,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   330,     0,     0,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   384,     0,     0,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,   509,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,   510,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,   511,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,   512,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,   513,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,   514,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,   515,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,   516,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,   517,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,   518,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,   520,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,   521,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,   522,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,   523,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,   524,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,   525,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,   534,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,   548,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   611,     0,     0,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,   801,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,   802,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,   803,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,   804,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   855,     0,     0,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,   863,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,  1047,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,  1048,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,  1723,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,  1835,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,  1849,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,  1927,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,  1928,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,  1929,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,  1934,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,  1944,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,  1945,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,  1957,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,  1990,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,  2024,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,     0,
     0,   297,   888,   889,   890,   891,   892,   893,   894,   895,
   896,   897,     0,     0,   898,   899,   900,   901,   902,   903,
     0,     0,   904,     0,     0,     0,  1525,   888,   889,   890,
   891,   892,   893,   894,   895,   896,   897,     0,     0,   898,
   899,   900,   901,   902,   903,     0,     0,   904,     0,  1007,
   888,   889,   890,   891,   892,   893,   894,   895,   896,   897,
     0,     0,   898,   899,   900,   901,   902,   903,     0,     0,
   904
};

static const short yycheck[] = {     3,
   176,     5,   321,     5,   411,  1115,    10,   107,   108,   552,
   721,     5,     5,   332,   333,   334,   353,    21,   561,   340,
   999,   638,   341,   344,     5,  1004,  1005,     5,   571,    33,
     5,     5,   575,   440,    84,     5,   579,     5,     3,     3,
     5,     5,   264,   265,    84,     5,     5,    24,     5,   110,
   111,   618,   619,   114,   115,   116,   117,   118,   119,   626,
     3,     3,     5,     5,     5,     5,     0,     5,   258,    82,
     7,    64,   248,    86,    87,    69,    69,   268,   268,   751,
   752,   753,   754,     5,     5,   256,     5,   494,   258,     5,
    11,    12,    13,    14,    15,   608,    17,     7,    23,    64,
    23,    69,     5,   107,   108,     7,   110,   111,    29,     5,
   114,   115,   116,   117,   118,   119,   120,   258,   264,    23,
   124,   125,   126,   264,    23,   264,    75,   268,   613,    69,
  1576,   307,    86,   110,   111,    23,   117,   114,   115,   116,
   117,   118,   119,  1589,    13,    14,    15,    96,    17,  1595,
    69,    98,   264,    69,   254,   264,   110,   868,  1604,   870,
    23,   108,   109,   110,  1610,  1611,   264,   264,   489,    65,
   268,   268,   348,     5,    99,   275,    99,    69,   258,    11,
    12,    13,    14,    15,     5,    17,   264,   265,   268,    81,
    11,    12,    13,    14,    15,    99,    17,    29,   257,   871,
    99,     3,   264,     5,   107,   305,   257,   266,    29,   616,
   255,    99,  1191,   268,   117,   266,   261,   889,   890,   891,
   892,   893,   894,   895,   896,   897,   898,   899,   900,   901,
   902,   903,   904,     5,     6,   907,    99,   241,   751,   752,
   753,   754,    63,    13,    14,    15,   264,    17,     5,   264,
   254,   234,   265,   268,    11,    12,    13,    14,    15,    82,
    17,    13,    14,    15,   314,    17,   268,   261,   261,     5,
   264,   275,    29,    96,   314,    11,    12,    13,    14,    15,
   258,    17,   767,  1262,   265,   117,   118,   119,   120,   264,
   264,   256,   256,    29,   264,   264,   615,   256,   474,   264,
   264,   305,   267,   267,   264,   248,   257,   264,    82,   264,
   264,   265,    86,   256,   256,   266,   265,   321,   265,   259,
   264,   261,    96,   264,   267,   267,   264,   264,   332,   333,
   334,    67,   264,   258,   256,   258,   268,   341,  1010,   261,
   264,   143,   261,   264,   265,   261,   386,   324,   258,   353,
     6,    13,    14,    15,   258,    17,     5,     6,   871,   258,
     9,    10,   462,     5,     6,    78,    79,     9,    10,   232,
    13,    14,    15,   265,    17,  1354,   889,   890,   891,   892,
   893,   894,   895,   896,   897,   898,   899,   900,   901,   902,
   903,   904,    86,    82,   907,   264,   265,   257,    96,    88,
    98,     7,    96,   116,    98,   234,   266,    96,   106,   259,
     5,   213,     7,   259,   418,     7,   266,   130,   247,   595,
   266,   597,   598,   599,    19,    20,    21,     5,   432,   258,
    13,    14,    15,   265,    17,  1881,   266,   267,   442,   259,
     7,    36,   265,   447,   265,  1891,   266,    18,   769,   453,
   258,   455,   456,   258,     5,   459,   264,   461,   462,   264,
    11,    12,    13,    14,    15,     5,    17,  1084,  1085,   259,
     7,    11,    12,    13,    14,    15,   266,    17,    29,   261,
   258,   263,   122,   123,   124,   125,   126,   127,   128,    29,
   130,   265,     5,     7,   264,   265,    18,  1010,    11,    12,
    13,    14,    15,     7,    17,   605,     7,   264,   265,   249,
   250,   251,   264,   265,  1186,   255,    29,    88,   259,     7,
  1966,   261,   622,  1969,  1196,   266,   258,     7,   259,   265,
     7,     5,   264,  1979,  1980,   266,     7,    11,    12,    13,
    14,    15,  1109,    17,   865,     7,    13,    14,    15,    96,
    17,     5,   265,   256,  1121,    29,  2002,    11,    12,    13,
    14,    15,   133,    17,    86,   112,    88,   265,     7,   140,
   141,   265,   256,     7,   258,    29,   265,    99,   618,   619,
   917,  1560,   259,  1562,   233,   256,   626,   134,     7,   266,
   112,   233,   163,   314,   243,   166,   167,   246,   259,   194,
   259,   605,   264,   265,   608,   266,     8,   266,   130,   613,
     7,   615,   191,   789,    18,     3,     4,     5,   622,    86,
   796,   264,   265,   259,   259,   265,   259,   259,   689,    96,
   266,   266,     7,   266,   266,   696,    24,    25,    26,    27,
     7,   188,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,   134,   135,   136,
   137,   138,   139,  1186,   265,   266,   776,   777,   265,   266,
     7,   264,   265,  1196,    88,   689,     8,   664,   409,   410,
  1233,   264,   696,   414,   265,   259,   259,   674,  1808,  1809,
    86,   678,   266,   266,  1217,   258,     7,   265,   266,   259,
    96,   688,   689,   264,   265,   692,   266,   258,   265,   696,
   247,   248,   249,   250,   264,   265,   112,    68,   705,   258,
   116,   259,  1051,  1052,  1053,  1054,   140,   258,   266,   266,
   257,   140,     6,   265,   143,    86,  1065,   751,   752,   753,
   754,   264,   265,   757,   130,    96,    97,   156,   157,   163,
   164,   160,   161,   767,   105,     7,   107,  1086,  1087,   265,
   266,   258,   776,   777,   264,   265,    69,    70,    71,    72,
    73,    74,    75,    76,    77,   140,   258,    80,   143,  1108,
   264,   265,   258,    86,   258,    13,    14,    15,   265,    17,
   258,   156,   157,   158,   264,   265,    99,   264,   265,   258,
   264,   265,   264,   265,   265,   266,   258,   993,   994,   995,
   996,     7,    89,    90,    91,    92,    93,    94,   265,   266,
   807,   258,  1151,   258,   236,   237,   238,   239,   258,   241,
   242,   243,   244,   265,   266,   247,   248,   249,   250,   251,
   265,   266,  1831,   255,  1565,  1566,  1567,  1033,  1530,   261,
   248,   265,   258,   265,   258,   253,   265,   871,   256,  1206,
   265,   266,   265,   266,    13,    14,    15,   265,    17,   265,
   265,   266,   886,   265,   266,   889,   890,   891,   892,   893,
   894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
   904,   265,   266,   907,   258,   249,   250,   251,   252,    96,
   265,   255,   916,   917,   236,   237,   238,   239,   258,   241,
   242,   243,   244,   258,   265,   247,   248,   249,   250,   251,
  1497,  1498,  1499,   255,  1501,   236,   237,   238,   239,   261,
   241,   242,   243,   244,   948,   258,   247,   248,   249,   250,
   251,     7,  1519,   140,   255,  1274,   258,    96,   265,   266,
   261,  1280,   265,   266,   258,   247,   248,   249,   250,   251,
   947,  1378,   265,   255,  1953,   193,   194,   195,   196,   261,
   265,   266,   265,   266,     3,     4,     5,   264,   265,   265,
   266,  1398,   265,   266,   133,   265,   266,  1404,   265,  1406,
     7,   140,   258,   190,   258,   192,  1010,   265,   266,   258,
     7,    30,    31,    32,    33,    34,   266,  1530,   265,   266,
  1120,    81,  1122,    83,    84,    85,  1539,     7,   215,   265,
   266,  1438,     5,  1352,   265,   266,  1443,   264,   265,   265,
   266,   258,  1361,   265,   266,   265,   266,  1051,  1052,  1053,
  1054,     7,  1152,   629,   630,   258,  1060,   258,   258,   258,
   258,  1065,   122,   123,   124,   125,   126,   127,   128,  1109,
   130,   131,   264,  1077,   258,   258,   266,   258,   265,     5,
     5,  1121,  1086,  1087,   234,   234,     7,   234,   234,   264,
   264,    96,  1096,    98,    99,   100,   101,   102,   103,   104,
  1104,  1105,   264,   264,  1108,   264,   264,     8,   259,     7,
   266,  1678,   266,  1680,  1118,  1119,  1120,   259,  1122,  1123,
  1124,  1832,   259,   259,  1128,     7,   265,     5,     5,  1133,
  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1457,   264,
     5,   264,     5,   264,     5,     5,   264,  1151,  1152,  1153,
  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,
  1164,  1165,  1166,  1730,  1168,   264,   264,   234,  1172,  1736,
   199,   200,   201,   202,   203,   204,   205,   206,   207,     3,
     4,     5,  1186,   247,   248,   249,   250,   251,   252,   259,
  1509,   255,  1196,    84,    85,     5,     5,     5,   264,   264,
     5,   264,  1206,   264,     5,   265,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,   122,   123,     7,   264,   259,   208,   128,  1805,   236,
   237,   238,   239,   264,   241,   242,   243,   244,   264,  1568,
   247,   248,   249,   250,   251,   264,   264,     5,   255,   258,
   265,   130,   258,   258,   261,     7,     5,     7,     5,   426,
  1274,     7,     7,   164,   165,   166,  1280,     7,     7,     7,
   236,   237,   238,   239,     7,   241,   242,   243,   244,   234,
   264,   247,   248,   249,   250,   251,     7,     7,     7,   255,
  1867,     7,     7,     7,     7,   261,   234,     7,     5,     7,
   264,     7,     7,     7,   471,   236,   237,   238,   239,     7,
   241,   242,   243,   244,     7,     7,   247,   248,   249,   250,
   251,     7,     7,     7,   255,  1878,   265,  1341,  1342,     5,
   261,     8,   266,     7,  1520,     5,  1522,  1523,  1352,     7,
   264,     7,     5,     5,     5,   264,   264,  1361,   264,   264,
   264,   252,   253,  1930,   255,   256,   257,   258,   259,   260,
   261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
   271,   272,   273,   274,     3,   259,    66,     7,   264,   261,
     7,   282,   283,   284,   285,   286,   287,   288,   289,   290,
   291,   292,   293,   294,   295,   296,     7,  1744,     7,   566,
     7,     7,   265,   304,   264,   266,   259,   259,     7,   310,
   258,   258,   258,   314,   248,   316,   258,   258,     5,   253,
     3,   258,   256,     5,   259,   258,     6,   328,   329,     7,
   264,   258,   264,   264,   264,   264,  1450,  1451,   266,   264,
   264,  1455,   264,  1457,     5,   346,     5,  1497,  1498,  1499,
   264,  1501,   236,   237,   238,   239,   264,   241,   242,   243,
   244,   258,   258,   247,   248,   249,   250,   251,   243,  1519,
   255,   255,  1486,   241,   242,   243,   244,   261,   265,   247,
   248,   249,   250,   251,   252,   386,     3,   255,   264,   266,
  1504,  1505,   258,  1507,  1508,  1509,   258,    81,   258,    83,
    84,   258,    86,   258,   258,   406,   407,   258,     7,     7,
   258,   264,    96,     7,   258,   682,  1530,   258,   261,     5,
     5,   258,   258,   258,   258,     5,   258,   258,   258,   113,
   114,   115,   258,  1862,   258,   264,   264,     7,  1552,   264,
   258,   258,   709,   265,     5,     5,   130,   258,     5,   258,
     5,     5,   264,     5,  1568,   258,   258,   258,  1572,   259,
  1574,     5,   259,   259,     7,   259,     5,   258,     5,  1898,
   236,   237,   238,   239,     5,   241,   242,   243,   244,     5,
     5,   247,   248,   249,   250,   251,   264,     3,     3,   255,
     7,   492,   264,   264,     5,   261,   265,     7,     7,     5,
   258,   258,   186,     7,   264,   506,   507,   774,   264,  1719,
  1720,   266,   259,     3,     4,     5,  1726,   266,   519,   258,
   266,     7,     7,     7,   791,   526,   527,   528,  1678,  1815,
  1680,   532,     7,     7,    24,    25,    26,    27,     7,     7,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,     7,     7,     7,     7,  1683,
     7,  1685,     7,     7,   258,     7,     7,     7,     7,     7,
  1730,   265,     7,   264,     5,     7,  1736,     7,     7,   590,
   591,     7,  1802,     7,  1804,     7,     7,     7,     7,     7,
     7,     7,   603,     7,     7,  1719,  1720,     7,     7,     7,
     7,     7,  1726,     7,     7,     5,     5,   618,   619,     5,
   258,   258,   623,   624,     7,   626,   627,   258,     5,     5,
  1744,   259,   633,     7,   635,     7,     7,   236,   237,   238,
   239,     7,   241,   242,   243,   244,     7,     7,   247,   248,
   249,   250,   251,     7,     7,  1805,   255,   259,   259,   266,
   266,   266,   261,   266,   259,   265,   236,   237,   238,   239,
   266,   241,   242,   243,   244,   266,   266,   247,   248,   249,
   250,   251,   266,   950,   266,   255,   259,   266,  1802,   266,
  1804,   261,   266,   236,   237,   238,   239,   266,   241,   242,
   243,   244,   266,   266,   247,   248,   249,   250,   251,     7,
   266,   259,   255,   266,   265,   264,   266,  1867,   261,   209,
   266,   266,     3,   213,   266,   992,   236,   237,   238,   239,
   266,   241,   242,   243,   244,   264,   266,   247,   248,   249,
   250,   251,   265,   264,   264,   255,   259,   266,  1862,     7,
     7,   261,   266,   112,   266,     7,   258,     7,   248,   266,
   259,     7,     7,   253,   765,   766,   256,     7,     3,     7,
     7,   264,  1039,     7,   264,  1042,     7,     7,     7,     7,
  1930,   264,   264,   264,  1898,     3,     4,     5,  1055,  1056,
  1057,  1058,   793,   794,   795,  1062,     7,   264,   799,   800,
   264,   264,     7,     7,   805,     5,    24,    25,    26,    27,
     7,   264,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,   264,     5,   265,
     5,   259,   259,   266,   259,    81,   259,    83,    84,    85,
     5,     5,   853,   135,     7,   856,     7,     7,   259,     7,
     7,   266,     7,  1130,  1131,     7,     7,   259,     7,     7,
     7,   266,   259,     7,   259,   266,  1143,   259,   266,     3,
     4,     5,   266,   264,   259,  1999,   122,   123,   124,   125,
   126,   127,   128,   266,   130,   131,   266,   266,   266,   266,
   264,   259,   259,   266,   259,   906,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    57,    58,   265,    60,    61,     3,     4,
     5,   261,   259,   265,  1211,   259,  1213,   265,   259,     7,
    81,     7,    83,  1220,     7,    86,     7,     7,     7,     7,
     7,     7,     7,     7,     7,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     7,   122,   123,   124,   125,   126,   127,   128,   122,   130,
   265,     7,   265,   264,   264,   129,   236,   237,   238,   239,
     7,   241,   242,   243,   244,     7,     7,   247,   248,   249,
   250,   251,     3,     4,     5,   255,     5,     7,   111,   265,
   248,   261,     7,   266,  1035,   253,   259,   259,   256,   266,
    16,   266,  1043,  1044,  1045,   266,   264,   266,   264,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,    55,    56,    57,    58,   266,    60,
    61,   259,   259,   266,   266,     7,   236,   237,   238,   239,
     5,   241,   242,   243,   244,   264,  1363,   247,   248,   249,
   250,   251,     7,     7,     7,   255,   264,     7,  1109,     7,
    81,   261,    83,     7,     7,    86,     7,   241,     5,     5,
  1121,     5,   258,   247,   248,     5,     5,   259,     5,   253,
   259,   264,   256,   259,   265,   259,   260,   261,   262,   259,
   264,   122,   265,  1144,     7,  1146,     4,  1148,   129,   265,
     7,   122,   123,   124,   125,   126,   127,   128,     7,   130,
     7,     7,   265,     7,     7,   236,   237,   238,   239,     7,
   241,   242,   243,   244,     7,  1176,   247,   248,   249,   250,
   251,     7,  1449,   248,   255,     7,     7,   264,   253,  1456,
   261,   256,   264,     7,  1461,   266,   261,  1464,     7,     7,
     7,     7,  1469,   235,   236,   237,   238,   239,   240,   241,
   242,   243,   244,     7,  1481,   247,   248,   249,   250,   251,
   252,     7,   264,   255,   264,     7,   265,  1494,   264,  1496,
   236,   237,   238,   239,   266,   241,   242,   243,   244,     7,
   266,   247,   248,   249,   250,   251,   259,     7,   259,   255,
    62,     7,   264,     7,     7,   261,     7,     7,   265,   264,
   241,   132,     7,     5,     7,   265,   247,   248,     0,     0,
  1537,  1538,   253,  1540,  2029,   256,  1075,   944,  1515,  1224,
   261,   262,   761,   264,     3,     4,     5,     6,  1076,  1342,
     9,  1734,   585,   125,   265,   602,   238,    -1,   663,    -1,
    -1,    -1,    -1,   705,    -1,    24,    25,    26,    27,    28,
    -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
    69,    -1,     9,    -1,  1355,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,  1364,  1365,  1366,    -1,    24,    25,    26,
    27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,     7,  1686,
    -1,    -1,    -1,   261,    -1,  1692,    -1,    -1,    -1,    -1,
    -1,    -1,  1699,    -1,    -1,    -1,     3,    -1,    -1,    -1,
     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1715,    -1,
    -1,  1452,  1453,  1454,     7,    -1,    -1,    -1,  1459,    -1,
    -1,  1462,  1463,    -1,    -1,    -1,  1467,    -1,    -1,  1470,
  1471,  1472,  1473,    -1,    -1,  1476,  1477,  1478,    -1,  1480,
    -1,    -1,    -1,  1484,  1485,    -1,    -1,    -1,  1489,  1490,
    -1,    -1,    -1,    -1,    -1,    62,  1497,  1498,  1499,  1500,
  1501,    68,    -1,    -1,    -1,  1506,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   232,    81,    -1,    83,    -1,  1519,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,   248,
    -1,    -1,    99,    -1,   253,    -1,    -1,   256,    -1,    -1,
    -1,    -1,   261,    -1,   111,   264,    -1,   236,   237,   238,
   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,   132,   255,    -1,    -1,    -1,
    -1,    -1,   261,    -1,  1841,   232,    -1,   266,    -1,  1846,
    -1,  1848,    -1,    -1,    -1,    -1,    -1,    -1,  1855,    -1,
    -1,   248,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,
   238,   239,    -1,   241,   242,   243,   244,   264,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,     5,    -1,
   187,    -1,   189,   261,    -1,    -1,    13,    14,    15,  1896,
    17,    -1,    -1,    -1,    -1,    -1,    -1,  1638,    -1,    -1,
  1641,    -1,    -1,    -1,    -1,  1646,    -1,   236,   237,   238,
   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,
    -1,     7,   261,    -1,    -1,    -1,  1943,  1678,  1679,  1680,
  1681,  1682,    -1,   236,   237,   238,   239,    -1,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,
    -1,    -1,    -1,  1714,    -1,    -1,    -1,  1718,    -1,    -1,
  1721,  1722,    -1,    -1,    -1,    -1,     7,    -1,    -1,  1730,
    -1,    -1,    -1,    -1,    -1,  1736,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1750,
  1751,  1752,  1753,  1754,    -1,   142,    -1,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
    -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
    -1,    -1,   189,    -1,  1805,    -1,    -1,   194,    -1,    -1,
   197,    -1,    -1,    -1,    -1,  1816,   237,   238,   239,    -1,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,  1836,  1837,  1838,  1839,    -1,
   261,  1842,    -1,  1844,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,  1852,  1853,    -1,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,  1867,  1868,    -1,   255,
  1871,    -1,    -1,    -1,    -1,   261,    -1,    -1,   265,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,
    -1,    -1,    -1,    -1,  1895,    13,    14,    15,    -1,    17,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,  1930,
    -1,  1932,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
    14,    15,    -1,    17,  1955,   236,   237,   238,   239,    -1,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
   261,    -1,     7,    -1,  1985,    -1,    -1,  1988,   237,   238,
   239,   240,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,   252,     8,    -1,   255,  2008,    -1,    -1,
  2011,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,
  2021,    13,    14,    15,   142,    17,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,    -1,     8,   165,    -1,    -1,
   168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,   197,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,
    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
   194,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,
   142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,    -1,
   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,
   172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
   182,   183,   184,   185,    -1,    -1,    -1,   189,     5,    -1,
    -1,   265,   194,    -1,    -1,   197,    13,    14,    15,    -1,
    17,   236,   237,   238,   239,    -1,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,   236,   237,   238,   239,   261,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,     5,   257,    -1,    -1,    -1,   261,    -1,    -1,
    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   265,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
     8,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,
    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    13,    14,    15,    -1,    17,   238,
   239,   240,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,   252,     8,   142,   255,   144,   145,   146,
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
   149,   150,   151,   152,   153,   154,   155,    -1,   265,    -1,
   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
    -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
   189,     5,    -1,    -1,    -1,   194,    -1,    -1,   197,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,    -1,    -1,   261,    -1,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,    -1,   236,   237,   238,   239,   265,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,     8,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,
    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,   142,    -1,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,
    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
   194,    -1,   142,   197,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,
    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,
    -1,    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
    -1,   265,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,
    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
    -1,    -1,    -1,   189,     5,    -1,    -1,    -1,   194,    -1,
    -1,   197,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   265,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,    -1,   236,   237,   238,   239,   265,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,   185,     8,    -1,    -1,   189,    -1,
    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
    -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,
   197,   144,   145,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,    -1,   265,    -1,   159,    -1,    -1,   162,
    -1,    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184,   185,     3,     4,     5,   189,     5,    -1,    -1,
    -1,   194,    -1,    -1,   197,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,    24,    25,    26,    27,   265,    -1,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    -1,     3,     4,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,
    27,    -1,   265,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   235,   236,   237,   238,   239,   240,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
    -1,    -1,   255,    -1,   142,    -1,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
   168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,     3,     4,     5,     6,   194,    -1,    -1,   197,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,     3,     4,     5,    -1,   248,    -1,
    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,
    -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,     5,    -1,    -1,    -1,
    -1,   248,    11,    12,    -1,    -1,   253,    -1,    -1,   256,
    19,    20,    21,    22,    -1,    75,   236,   237,   238,   239,
    29,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,   236,   237,   238,
   239,   261,   241,   242,   243,   244,   266,    -1,   247,   248,
   249,   250,   251,    62,    -1,    -1,   255,    -1,    -1,    68,
    -1,    -1,   261,    -1,    -1,    -1,    -1,   266,    -1,    -1,
    -1,    -1,    81,    -1,    83,    -1,   136,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
    99,    -1,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,   111,   247,   248,   249,   250,   251,   168,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,    -1,   266,   132,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,   198,    -1,
    -1,    -1,   253,    -1,    -1,   256,    -1,    -1,    -1,   209,
   210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
   220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,
    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,   236,
   237,   238,   239,   261,   241,   242,   243,   244,   266,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
   236,   237,   238,   239,   261,   241,   242,   243,   244,   266,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,   236,   237,   238,   239,   261,   241,   242,   243,   244,
   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,   236,   237,   238,   239,   261,   241,   242,   243,
   244,   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,   236,   237,   238,   239,   261,   241,   242,
   243,   244,   266,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,   236,   237,   238,   239,   261,   241,
   242,   243,   244,   266,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,   236,   237,   238,   239,   261,
   241,   242,   243,   244,   266,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,   236,   237,   238,   239,
   261,   241,   242,   243,   244,   266,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,   236,   237,   238,
   239,   261,   241,   242,   243,   244,   266,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,   236,   237,
   238,   239,   261,   241,   242,   243,   244,   266,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,   236,
   237,   238,   239,   261,   241,   242,   243,   244,   266,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
   236,   237,   238,   239,   261,   241,   242,   243,   244,   266,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,   236,   237,   238,   239,   261,   241,   242,   243,   244,
   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,   236,   237,   238,   239,   261,   241,   242,   243,
   244,   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,   236,   237,   238,   239,   261,   241,   242,
   243,   244,   266,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,   236,   237,   238,   239,   261,   241,
   242,   243,   244,   266,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,   236,   237,   238,   239,   261,
   241,   242,   243,   244,   266,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,   236,   237,   238,   239,
   261,   241,   242,   243,   244,   266,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,   236,   237,   238,
   239,   261,   241,   242,   243,   244,   266,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,   236,   237,
   238,   239,   261,   241,   242,   243,   244,   266,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,   236,
   237,   238,   239,   261,   241,   242,   243,   244,   266,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
   236,   237,   238,   239,   261,   241,   242,   243,   244,   266,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,   236,   237,   238,   239,   261,   241,   242,   243,   244,
   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,   236,   237,   238,   239,   261,   241,   242,   243,
   244,   266,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,   236,   237,   238,   239,   261,   241,   242,
   243,   244,   266,    -1,   247,   248,   249,   250,   251,    -1,
    -1,    -1,   255,    -1,   236,   237,   238,   239,   261,   241,
   242,   243,   244,   266,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,   236,   237,   238,   239,   261,
   241,   242,   243,   244,   266,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,   236,   237,   238,   239,
   261,   241,   242,   243,   244,   266,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,   236,   237,   238,
   239,   261,   241,   242,   243,   244,   266,    -1,   247,   248,
   249,   250,   251,    -1,    -1,    -1,   255,    -1,   236,   237,
   238,   239,   261,   241,   242,   243,   244,   266,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,   236,
   237,   238,   239,   261,   241,   242,   243,   244,   266,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
   236,   237,   238,   239,   261,   241,   242,   243,   244,   266,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,   265,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,   257,    -1,    -1,    -1,   261,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,   257,    -1,    -1,
    -1,   261,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,   257,    -1,    -1,    -1,   261,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,   257,    -1,    -1,    -1,   261,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,
    -1,   261,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   236,   237,
   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,    -1,
    -1,   259,    -1,   261,   236,   237,   238,   239,    -1,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
    -1,    -1,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
   236,   237,   238,   239,    -1,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,
    -1,    -1,    -1,   259,    -1,   261,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
    -1,   261,   235,   236,   237,   238,   239,   240,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,   252,
    -1,    -1,   255,    -1,    -1,    -1,   259,   235,   236,   237,
   238,   239,   240,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,   252,    -1,    -1,   255,    -1,   257,
   235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,   252,    -1,    -1,
   255
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
    ;
    break;}
case 2:
#line 357 "GetDP.y"
{ if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfPointer_L) ; List_Delete(ListOfPointer2_L) ; 
	List_Delete(ListOfChar_L) ;

	List_Delete(ListOfFormulation) ;

	List_Delete(ListOfBasisFunction) ;
	List_Delete(ListOfEntityIndex) ;
      }
    ;
    break;}
case 4:
#line 381 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; ;
    break;}
case 18:
#line 404 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 419 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 421 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 423 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 425 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 427 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 429 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 431 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 433 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 435 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 437 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 439 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 441 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 443 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 445 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 447 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 449 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 451 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 453 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 455 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 457 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 459 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 467 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 44:
#line 491 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 45:
#line 494 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 46:
#line 500 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, yyvsp[-4].c, 0, 0) ;
    ;
    break;}
case 49:
#line 510 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 52:
#line 520 "GetDP.y"
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
case 53:
#line 530 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 54:
#line 537 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 55:
#line 547 "GetDP.y"
{
      Group_S.FunctionType = yyvsp[-2].i ;
      switch (Group_S.FunctionType) {
      case ELEMENTSOF :  Group_S.Type = ELEMENTLIST ;  break ;
      default :          Group_S.Type = REGIONLIST  ;  break ;
      }
      Group_S.InitialList = yyvsp[0].l ;
    ;
    break;}
case 56:
#line 556 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = yyvsp[-1].l ;
      yyval.i = -1 ;
    ;
    break;}
case 57:
#line 564 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 58:
#line 575 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 59:
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
    ;
    break;}
case 60:
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
    ;
    break;}
case 61:
#line 627 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 62:
#line 630 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 63:
#line 642 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 64:
#line 643 "GetDP.y"
{ yyval.l = NULL ; ;
    break;}
case 65:
#line 650 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 66:
#line 653 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 67:
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
    ;
    break;}
case 68:
#line 674 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 69:
#line 687 "GetDP.y"
{
      yyval.l = List_Create(((List_Nbr(yyvsp[0].l) > 0)? List_Nbr(yyvsp[0].l) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;
    break;}
case 70:
#line 694 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 71:
#line 701 "GetDP.y"
{
      yyval.l = List_Create( 5, 5, sizeof(int)) ;
    ;
    break;}
case 72:
#line 706 "GetDP.y"
{
      yyval.l = yyvsp[-2].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;
    break;}
case 73:
#line 713 "GetDP.y"
{
      yyval.l = yyvsp[-3].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Suppress(yyval.l, (int *)List_Pointer(yyvsp[0].l, i), fcmp_int ) ;
    ;
    break;}
case 74:
#line 724 "GetDP.y"
{
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ;
    ;
    break;}
case 75:
#line 730 "GetDP.y"
{
      i = (int)yyvsp[-1].d ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
    ;
    break;}
case 76:
#line 737 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ;  
      
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++) {
	List_Read(yyvsp[-1].l, i, &d) ; j = (int)d ;
	List_Add(ListOfInt_L, &j) ;
      }
      yyval.l = ListOfInt_L;
    ;
    break;}
case 77:
#line 748 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 78:
#line 757 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-3].d ; (yyvsp[-3].d<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-3].d<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
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
    ;
    break;}
case 80:
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
    ;
    break;}
case 81:
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
    ;
    break;}
case 83:
#line 831 "GetDP.y"
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
    ;
    break;}
case 87:
#line 863 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 868 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 869 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 874 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 94:
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
    ;
    break;}
case 95:
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
    ;
    break;}
case 99:
#line 966 "GetDP.y"
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
#line 986 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 992 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 998 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1001 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1008 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 106:
#line 1019 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 107:
#line 1022 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1028 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 109:
#line 1032 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 111:
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
    ;
    break;}
case 112:
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
    ;
    break;}
case 113:
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
    ;
    break;}
case 114:
#line 1086 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1092 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1098 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1104 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1110 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1116 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1122 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1128 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1134 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1140 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1146 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1152 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1158 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1164 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1170 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1176 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1182 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1189 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1197 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 135:
#line 1210 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 136:
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
    ;
    break;}
case 137:
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
    ;
    break;}
case 138:
#line 1324 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
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
    ;
    break;}
case 140:
#line 1345 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1347 "GetDP.y"
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
#line 1359 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 143:
#line 1361 "GetDP.y"
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
#line 1373 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 145:
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
    ;
    break;}
case 146:
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
    ;
    break;}
case 147:
#line 1401 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1407 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 149:
#line 1413 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 150:
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
    ;
    break;}
case 151:
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
    ;
    break;}
case 152:
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
    ;
    break;}
case 153:
#line 1483 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1489 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1496 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1502 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1509 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1516 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1527 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 160:
#line 1528 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 161:
#line 1529 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 162:
#line 1534 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 163:
#line 1535 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 164:
#line 1541 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 165:
#line 1544 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 166:
#line 1547 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &d) ;
    ;
    break;}
case 167:
#line 1562 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 168:
#line 1567 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 169:
#line 1574 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 171:
#line 1583 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 172:
#line 1588 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 173:
#line 1595 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 174:
#line 1598 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 175:
#line 1605 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 177:
#line 1615 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 178:
#line 1618 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 179:
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
    ;
    break;}
case 180:
#line 1659 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 181:
#line 1665 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 182:
#line 1672 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 184:
#line 1685 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 185:
#line 1692 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 186:
#line 1695 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 187:
#line 1702 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 188:
#line 1705 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 189:
#line 1712 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 191:
#line 1724 "GetDP.y"
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
#line 1734 "GetDP.y"
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
#line 1744 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 194:
#line 1751 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 195:
#line 1754 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 196:
#line 1761 "GetDP.y"
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
    ;
    break;}
case 199:
#line 1825 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 200:
#line 1828 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1831 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1834 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 1837 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 204:
#line 1848 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 206:
#line 1858 "GetDP.y"
{
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;
    break;}
case 209:
#line 1870 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;
    break;}
case 211:
#line 1883 "GetDP.y"
{
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 212:
#line 1890 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-2].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 213:
#line 1898 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 1907 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 215:
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
    ;
    break;}
case 216:
#line 1928 "GetDP.y"
{
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;
    break;}
case 217:
#line 1933 "GetDP.y"
{
      List_Add(yyval.l = yyvsp[-3].l, &ConstraintPerRegion_S) ;
    ;
    break;}
case 218:
#line 1938 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 219:
#line 1947 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 221:
#line 1961 "GetDP.y"
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
#line 1971 "GetDP.y"
{ 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
    ;
    break;}
case 223:
#line 1976 "GetDP.y"
{ 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", yyvsp[-1].i) ;
    ;
    break;}
case 224:
#line 1982 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 225:
#line 1987 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 226:
#line 1995 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 227:
#line 2003 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 228:
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
    ;
    break;}
case 229:
#line 2030 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 230:
#line 2039 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 231:
#line 2047 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 232:
#line 2055 "GetDP.y"
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
#line 2065 "GetDP.y"
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
#line 2075 "GetDP.y"
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
#line 2085 "GetDP.y"
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
#line 2105 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 238:
#line 2116 "GetDP.y"
{
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;
    break;}
case 241:
#line 2129 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;
    break;}
case 243:
#line 2141 "GetDP.y"
{
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 244:
#line 2148 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-2].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 245:
#line 2156 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 246:
#line 2165 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 247:
#line 2168 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2171 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2174 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2181 "GetDP.y"
{
      yyval.l = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;
    break;}
case 251:
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
    ;
    break;}
case 252:
#line 2204 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 253:
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
    ;
    break;}
case 255:
#line 2234 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 256:
#line 2237 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 257:
#line 2242 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 258:
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
    ;
    break;}
case 259:
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
    ;
    break;}
case 260:
#line 2281 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 261:
#line 2286 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 262:
#line 2291 "GetDP.y"
{
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", yyvsp[-1].i) ;
    ;
    break;}
case 263:
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
    ;
    break;}
case 265:
#line 2330 "GetDP.y"
{
      Nbr_Index = yyvsp[-1].i ;
    ;
    break;}
case 266:
#line 2334 "GetDP.y"
{
      Flag1 = Flag_MultipleIndex;
      if (Flag_MultipleIndex)
	Msg(WARNING, "Old way to define Group, remove \'{}\' to use one Group");
      /* Will be the new way to define Group
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", $6) ;
      */
    ;
    break;}
case 267:
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
    ;
    break;}
case 268:
#line 2408 "GetDP.y"
{ 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;
    break;}
case 269:
#line 2414 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;
    break;}
case 270:
#line 2423 "GetDP.y"
{ 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;
    break;}
case 272:
#line 2434 "GetDP.y"
{ 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 273:
#line 2441 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 274:
#line 2444 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 275:
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
    ;
    break;}
case 276:
#line 2467 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 277:
#line 2473 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 278:
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
    ;
    break;}
case 279:
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
    ;
    break;}
case 280:
#line 2507 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 281:
#line 2514 "GetDP.y"
{ 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;
    break;}
case 282:
#line 2519 "GetDP.y"
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
case 283:
#line 2534 "GetDP.y"
{ 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;
    break;}
case 284:
#line 2540 "GetDP.y"
{ 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 285:
#line 2550 "GetDP.y"
{ 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 287:
#line 2562 "GetDP.y"
{ 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 288:
#line 2569 "GetDP.y"
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
case 289:
#line 2580 "GetDP.y"
{ 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 290:
#line 2594 "GetDP.y"
{
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;
    break;}
case 291:
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
    ;
    break;}
case 292:
#line 2636 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 293:
#line 2645 "GetDP.y"
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
    ;
    break;}
case 296:
#line 2694 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 297:
#line 2697 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 298:
#line 2700 "GetDP.y"
{
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c, fcmp_Constraint_Name) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 299:
#line 2715 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 301:
#line 2725 "GetDP.y"
{
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;
    break;}
case 304:
#line 2738 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;
    break;}
case 306:
#line 2749 "GetDP.y"
{
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 307:
#line 2756 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-2].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 308:
#line 2764 "GetDP.y"
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
#line 2776 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 311:
#line 2782 "GetDP.y"
{
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;
    break;}
case 312:
#line 2787 "GetDP.y"
{
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;
    break;}
case 314:
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
    ;
    break;}
case 316:
#line 2821 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 317:
#line 2824 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 318:
#line 2828 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 319:
#line 2831 "GetDP.y"
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
#line 2841 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 321:
#line 2845 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[0].c,
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", yyvsp[0].c) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;
    break;}
case 322:
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
     
    ;
    break;}
case 323:
#line 2877 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 324:
#line 2882 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 325:
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

    ;
    break;}
case 326:
#line 3199 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 327:
#line 3204 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3213 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3222 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3231 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 332:
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
    ;
    break;}
case 333:
#line 3279 "GetDP.y"
{
      yyval.l = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;
    break;}
case 334:
#line 3284 "GetDP.y"
{
      List_Add(yyval.l = yyvsp[-1].l, &EquationTerm_S) ;
    ;
    break;}
case 335:
#line 3289 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 336:
#line 3294 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 337:
#line 3303 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 338:
#line 3306 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 339:
#line 3309 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 340:
#line 3312 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 341:
#line 3323 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 343:
#line 3334 "GetDP.y"
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
#line 3344 "GetDP.y"
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
#line 3354 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 346:
#line 3368 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 348:
#line 3380 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 349:
#line 3382 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 350:
#line 3384 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3386 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 352:
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
    ;
    break;}
case 354:
#line 3419 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 355:
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

    ;
    break;}
case 356:
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
    ;
    break;}
case 357:
#line 3552 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;
    break;}
case 358:
#line 3557 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 359:
#line 3566 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 360:
#line 3575 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 361:
#line 3580 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 362:
#line 3589 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 363:
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
    ;
    break;}
case 365:
#line 3629 "GetDP.y"
{
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;
    break;}
case 366:
#line 3634 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 367:
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

    ;
    break;}
case 368:
#line 3697 "GetDP.y"
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
#line 3714 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 370:
#line 3715 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 371:
#line 3716 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 372:
#line 3717 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 373:
#line 3718 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 374:
#line 3719 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 375:
#line 3720 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 376:
#line 3721 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 377:
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
    ;
    break;}
case 378:
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
    ;
    break;}
case 379:
#line 3773 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 381:
#line 3783 "GetDP.y"
{
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;
    break;}
case 384:
#line 3796 "GetDP.y"
{
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;
    break;}
case 386:
#line 3808 "GetDP.y"
{
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 387:
#line 3815 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-2].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 388:
#line 3823 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 389:
#line 3826 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 390:
#line 3828 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 392:
#line 3836 "GetDP.y"
{
      yyval.l = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;
    break;}
case 393:
#line 3841 "GetDP.y"
{
      List_Add(yyval.l = Current_System_L = yyvsp[-3].l, &DefineSystem_S) ;
    ;
    break;}
case 394:
#line 3846 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 395:
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
    ;
    break;}
case 397:
#line 3876 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 398:
#line 3879 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 399:
#line 3888 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 400:
#line 3891 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 401:
#line 3896 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 402:
#line 3901 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 403:
#line 3906 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 404:
#line 3911 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 406:
#line 3922 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 407:
#line 3931 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 408:
#line 3938 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 409:
#line 3941 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 410:
#line 3953 "GetDP.y"
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
#line 3963 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 412:
#line 3969 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 413:
#line 3972 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 414:
#line 3984 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 415:
#line 3992 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 416:
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
    ;
    break;}
case 417:
#line 4027 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-1].i ;
    ;
    break;}
case 418:
#line 4034 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 419:
#line 4040 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 420:
#line 4046 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 421:
#line 4052 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 422:
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
    ;
    break;}
case 423:
#line 4082 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 424:
#line 4089 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 425:
#line 4095 "GetDP.y"
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
#line 4106 "GetDP.y"
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
    ;
    break;}
case 428:
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
    ;
    break;}
case 429:
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
    ;
    break;}
case 430:
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
    ;
    break;}
case 431:
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
    ;
    break;}
case 432:
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
    ;
    break;}
case 433:
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
    ;
    break;}
case 434:
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
    ;
    break;}
case 435:
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
    ;
    break;}
case 436:
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
    ;
    break;}
case 437:
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
    ;
    break;}
case 438:
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
    ;
    break;}
case 439:
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
    ;
    break;}
case 440:
#line 4333 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)yyvsp[-2].i ;
    ;
    break;}
case 441:
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
    ;
    break;}
case 442:
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
    ;
    break;}
case 443:
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
    ;
    break;}
case 444:
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
    ;
    break;}
case 445:
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
    ;
    break;}
case 446:
#line 4427 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 448:
#line 4436 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 450:
#line 4445 "GetDP.y"
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
    ;
    break;}
case 452:
#line 4468 "GetDP.y"
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
#line 4478 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = yyvsp[-2].c ; 
    ;
    break;}
case 454:
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
    ;
    break;}
case 455:
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
    ;
    break;}
case 456:
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
    ;
    break;}
case 457:
#line 4526 "GetDP.y"
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
#line 4536 "GetDP.y"
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
    ;
    break;}
case 460:
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
    ;
    break;}
case 461:
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
    ;
    break;}
case 462:
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
    ;
    break;}
case 463:
#line 4611 "GetDP.y"
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
    ;
    break;}
case 465:
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
    ;
    break;}
case 466:
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
    ;
    break;}
case 467:
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
    ;
    break;}
case 468:
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
    ;
    break;}
case 469:
#line 4697 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 470:
#line 4708 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 471:
#line 4713 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 472:
#line 4723 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 474:
#line 4733 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 475:
#line 4736 "GetDP.y"
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
#line 4746 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 477:
#line 4761 "GetDP.y"
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
#line 4777 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 480:
#line 4781 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 481:
#line 4785 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 482:
#line 4789 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 483:
#line 4794 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 484:
#line 4805 "GetDP.y"
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
#line 4822 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 487:
#line 4826 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 488:
#line 4830 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 489:
#line 4834 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 490:
#line 4838 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 491:
#line 4843 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 492:
#line 4854 "GetDP.y"
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
#line 4869 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 495:
#line 4873 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 496:
#line 4877 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 497:
#line 4881 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 498:
#line 4885 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 499:
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
    ;
    break;}
case 501:
#line 4914 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 502:
#line 4918 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 503:
#line 4922 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 504:
#line 4926 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 505:
#line 4931 "GetDP.y"
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
#line 4941 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 507:
#line 4947 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 508:
#line 4953 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 509:
#line 4963 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 510:
#line 4966 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 511:
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
    ;
    break;}
case 513:
#line 4989 "GetDP.y"
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
    ;
    break;}
case 515:
#line 5028 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 516:
#line 5031 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 517:
#line 5034 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 518:
#line 5042 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 519:
#line 5059 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 521:
#line 5071 "GetDP.y"
{
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;
    break;}
case 524:
#line 5082 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;
    break;}
case 526:
#line 5095 "GetDP.y"
{
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 527:
#line 5102 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-2].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 528:
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
    ;
    break;}
case 529:
#line 5123 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 530:
#line 5128 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 531:
#line 5134 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 532:
#line 5137 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 533:
#line 5140 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 534:
#line 5142 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 535:
#line 5148 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 537:
#line 5159 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 538:
#line 5162 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 539:
#line 5168 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 540:
#line 5173 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 541:
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
    ;
    break;}
case 542:
#line 5193 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 544:
#line 5207 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 545:
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

    ;
    break;}
case 546:
#line 5242 "GetDP.y"
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
case 547:
#line 5253 "GetDP.y"
{
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 548:
#line 5258 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 549:
#line 5267 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 550:
#line 5284 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 552:
#line 5296 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 555:
#line 5305 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 557:
#line 5317 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 558:
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
    ;
    break;}
case 559:
#line 5336 "GetDP.y"
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
#line 5347 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 561:
#line 5352 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 562:
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
    ;
    break;}
case 563:
#line 5375 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 564:
#line 5385 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 565:
#line 5388 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 566:
#line 5392 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 567:
#line 5405 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 568:
#line 5410 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 569:
#line 5415 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-5].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = yyvsp[-3].i ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 570:
#line 5424 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-8].c ;
      PostSubOperation_S.Case.Expression.String2 = yyvsp[-4].c ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 571:
#line 5433 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-3].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 572:
#line 5442 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 573:
#line 5448 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 574:
#line 5453 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 575:
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
    ;
    break;}
case 576:
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
    ;
    break;}
case 577:
#line 5497 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 578:
#line 5498 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 579:
#line 5499 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 580:
#line 5500 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 581:
#line 5506 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 582:
#line 5508 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 583:
#line 5514 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 584:
#line 5520 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 585:
#line 5527 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 586:
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
    ;
    break;}
case 587:
#line 5558 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 588:
#line 5566 "GetDP.y"
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
case 589:
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
    ;
    break;}
case 590:
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
    ;
    break;}
case 591:
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
    ;
    break;}
case 592:
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
    ;
    break;}
case 593:
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
    ;
    break;}
case 594:
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
    ;
    break;}
case 596:
#line 5726 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 597:
#line 5733 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 598:
#line 5740 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 599:
#line 5747 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 600:
#line 5751 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 601:
#line 5755 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 602:
#line 5759 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 603:
#line 5763 "GetDP.y"
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
case 604:
#line 5773 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 605:
#line 5778 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 606:
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
    ;
    break;}
case 607:
#line 5803 "GetDP.y"
{ 
      PostSubOperation_S.Comma = 1 ; 
    ;
    break;}
case 608:
#line 5807 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 609:
#line 5814 "GetDP.y"
{ 
      PostSubOperation_S.FrozenTimeStepList = 1;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 610:
#line 5824 "GetDP.y"
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
#line 5833 "GetDP.y"
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
#line 5842 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 613:
#line 5849 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 614:
#line 5857 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 615:
#line 5861 "GetDP.y"
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
#line 5870 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 617:
#line 5874 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 618:
#line 5878 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 619:
#line 5886 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 620:
#line 5892 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 621:
#line 5896 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 622:
#line 5904 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 623:
#line 5911 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 624:
#line 5919 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 625:
#line 5926 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 626:
#line 5934 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 627:
#line 5941 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 628:
#line 5949 "GetDP.y"
{
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;
    break;}
case 629:
#line 5953 "GetDP.y"
{
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;
    break;}
case 630:
#line 5962 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 631:
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
    ;
    break;}
case 632:
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
    ;
    break;}
case 633:
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
    ;
    break;}
case 634:
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
    ;
    break;}
case 635:
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
    ;
    break;}
case 636:
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
    ;
    break;}
case 637:
#line 6145 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 638:
#line 6149 "GetDP.y"
{
    ;
    break;}
case 640:
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
    ;
    break;}
case 641:
#line 6179 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 642:
#line 6185 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 643:
#line 6191 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 644:
#line 6197 "GetDP.y"
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
case 645:
#line 6208 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 646:
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
    ;
    break;}
case 647:
#line 6229 "GetDP.y"
{
      Msg(INFO, "Line number: %d", yylinenum);
    ;
    break;}
case 648:
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
    ;
    break;}
case 649:
#line 6246 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 650:
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
    ;
    break;}
case 652:
#line 6275 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 653:
#line 6281 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 654:
#line 6287 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 655:
#line 6298 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 656:
#line 6299 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 657:
#line 6300 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 658:
#line 6301 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 659:
#line 6302 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 660:
#line 6303 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 661:
#line 6304 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 662:
#line 6305 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 663:
#line 6306 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 664:
#line 6307 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 665:
#line 6308 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 666:
#line 6309 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 667:
#line 6310 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 668:
#line 6311 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 669:
#line 6312 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 670:
#line 6313 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 671:
#line 6314 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 672:
#line 6315 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 673:
#line 6316 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 674:
#line 6317 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 675:
#line 6318 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 676:
#line 6322 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 677:
#line 6323 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 678:
#line 6324 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 679:
#line 6325 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 680:
#line 6326 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 681:
#line 6327 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 682:
#line 6328 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 683:
#line 6329 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 684:
#line 6330 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 685:
#line 6331 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 686:
#line 6332 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 687:
#line 6333 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 688:
#line 6334 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 689:
#line 6335 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 690:
#line 6336 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 691:
#line 6337 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 692:
#line 6338 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 693:
#line 6339 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 694:
#line 6340 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 695:
#line 6341 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 696:
#line 6342 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 697:
#line 6343 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 698:
#line 6344 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 699:
#line 6345 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 700:
#line 6346 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 701:
#line 6347 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 702:
#line 6348 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 703:
#line 6349 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 704:
#line 6350 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 705:
#line 6351 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 706:
#line 6352 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 707:
#line 6353 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 708:
#line 6354 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 709:
#line 6355 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 710:
#line 6356 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 711:
#line 6357 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 712:
#line 6358 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 713:
#line 6359 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 714:
#line 6363 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 715:
#line 6368 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 716:
#line 6369 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 717:
#line 6370 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 718:
#line 6371 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 719:
#line 6372 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 720:
#line 6373 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 721:
#line 6374 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 722:
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
    ;
    break;}
case 723:
#line 6394 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 724:
#line 6397 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 725:
#line 6403 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 726:
#line 6406 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 727:
#line 6413 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 728:
#line 6419 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 729:
#line 6422 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 730:
#line 6425 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 731:
#line 6437 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 732:
#line 6443 "GetDP.y"
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
case 733:
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
    ;
    break;}
case 734:
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
    ;
    break;}
case 735:
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
    ;
    break;}
case 736:
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
    ;
    break;}
case 737:
#line 6545 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 738:
#line 6553 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 739:
#line 6565 "GetDP.y"
{
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 740:
#line 6573 "GetDP.y"
{
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;
    break;}
case 741:
#line 6584 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 742:
#line 6587 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 743:
#line 6594 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 744:
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
    ;
    break;}
case 745:
#line 6612 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 746:
#line 6617 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 747:
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
    ;
    break;}
case 748:
#line 6641 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 749:
#line 6651 "GetDP.y"
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

