
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

/* $Id: GetDP.tab.c,v 1.105 2006-06-28 20:29:08 geuzaine Exp $ */
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

void hack_fsetpos(void) ;
void hack_fsetpos_printf(void) ;

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


#line 183 "GetDP.y"
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



#define	YYFINAL		2038
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
   366,   371,   372,   375,   379,   380,   384,   386,   390,   391,
   394,   396,   397,   398,   406,   410,   414,   421,   425,   429,
   433,   437,   441,   445,   449,   453,   457,   461,   465,   469,
   473,   477,   480,   483,   486,   490,   492,   496,   499,   501,
   504,   505,   511,   512,   520,   521,   533,   543,   548,   553,
   554,   562,   569,   572,   575,   578,   581,   585,   588,   592,
   596,   599,   603,   605,   609,   610,   614,   621,   622,   627,
   628,   631,   635,   640,   641,   646,   647,   650,   654,   658,
   663,   664,   669,   670,   673,   677,   681,   686,   687,   692,
   693,   696,   700,   704,   709,   710,   715,   716,   719,   723,
   727,   731,   735,   739,   743,   744,   747,   751,   753,   755,
   756,   759,   763,   768,   772,   777,   783,   784,   789,   792,
   793,   796,   800,   804,   808,   812,   816,   820,   828,   832,
   836,   840,   844,   848,   856,   864,   872,   873,   876,   880,
   882,   884,   885,   888,   892,   897,   901,   906,   911,   916,
   921,   922,   927,   930,   931,   934,   938,   942,   947,   952,
   960,   964,   968,   972,   976,   977,   978,   979,   998,   999,
  1004,  1005,  1008,  1012,  1016,  1020,  1022,  1026,  1027,  1031,
  1033,  1037,  1038,  1042,  1043,  1048,  1049,  1052,  1056,  1060,
  1064,  1065,  1070,  1073,  1074,  1077,  1081,  1085,  1089,  1093,
  1094,  1097,  1101,  1103,  1105,  1106,  1109,  1113,  1118,  1122,
  1127,  1132,  1133,  1138,  1141,  1142,  1145,  1149,  1153,  1157,
  1161,  1165,  1166,  1172,  1176,  1177,  1183,  1187,  1191,  1195,
  1199,  1203,  1204,  1208,  1209,  1212,  1215,  1218,  1223,  1228,
  1233,  1238,  1239,  1242,  1246,  1250,  1254,  1255,  1258,  1262,
  1266,  1270,  1274,  1275,  1278,  1279,  1280,  1290,  1294,  1298,
  1302,  1305,  1309,  1315,  1316,  1319,  1323,  1324,  1325,  1335,
  1336,  1338,  1340,  1342,  1344,  1346,  1348,  1350,  1355,  1359,
  1360,  1363,  1367,  1369,  1371,  1372,  1375,  1379,  1384,  1389,
  1390,  1396,  1398,  1399,  1404,  1407,  1408,  1411,  1415,  1419,
  1423,  1427,  1431,  1435,  1439,  1443,  1445,  1447,  1451,  1452,
  1456,  1458,  1462,  1463,  1467,  1468,  1471,  1475,  1479,  1484,
  1489,  1494,  1499,  1505,  1511,  1514,  1522,  1534,  1542,  1556,
  1568,  1578,  1586,  1594,  1602,  1612,  1622,  1632,  1644,  1656,
  1668,  1674,  1692,  1706,  1722,  1734,  1748,  1749,  1757,  1758,
  1766,  1774,  1786,  1792,  1798,  1808,  1818,  1828,  1834,  1840,
  1852,  1862,  1877,  1892,  1900,  1913,  1924,  1932,  1940,  1948,
  1950,  1952,  1954,  1955,  1958,  1962,  1966,  1969,  1970,  1973,
  1977,  1981,  1985,  1989,  1994,  1995,  1998,  2002,  2006,  2010,
  2014,  2018,  2023,  2024,  2027,  2031,  2035,  2039,  2043,  2048,
  2049,  2052,  2056,  2060,  2064,  2068,  2072,  2077,  2082,  2087,
  2088,  2093,  2094,  2097,  2101,  2105,  2109,  2113,  2117,  2121,
  2122,  2125,  2129,  2131,  2133,  2134,  2137,  2141,  2146,  2150,
  2154,  2159,  2160,  2165,  2168,  2171,  2172,  2175,  2179,  2184,
  2185,  2191,  2197,  2198,  2201,  2202,  2209,  2213,  2217,  2221,
  2225,  2226,  2229,  2233,  2235,  2237,  2238,  2241,  2245,  2249,
  2253,  2257,  2262,  2263,  2272,  2273,  2274,  2278,  2286,  2294,
  2303,  2315,  2322,  2323,  2334,  2336,  2340,  2347,  2349,  2351,
  2353,  2355,  2356,  2360,  2362,  2365,  2368,  2381,  2384,  2400,
  2405,  2418,  2436,  2459,  2472,  2473,  2476,  2480,  2485,  2490,
  2494,  2497,  2500,  2504,  2508,  2512,  2516,  2520,  2523,  2527,
  2531,  2535,  2539,  2543,  2547,  2551,  2557,  2560,  2563,  2567,
  2577,  2581,  2584,  2594,  2597,  2607,  2610,  2620,  2626,  2630,
  2633,  2634,  2637,  2644,  2653,  2662,  2673,  2675,  2680,  2682,
  2688,  2693,  2698,  2706,  2711,  2719,  2725,  2729,  2733,  2741,
  2747,  2756,  2757,  2761,  2767,  2773,  2775,  2777,  2779,  2781,
  2783,  2785,  2787,  2789,  2791,  2793,  2795,  2797,  2799,  2801,
  2803,  2805,  2807,  2809,  2811,  2813,  2815,  2817,  2821,  2824,
  2827,  2831,  2835,  2839,  2843,  2847,  2851,  2855,  2859,  2863,
  2867,  2871,  2875,  2879,  2883,  2888,  2893,  2898,  2903,  2908,
  2913,  2918,  2923,  2928,  2933,  2940,  2945,  2950,  2955,  2960,
  2965,  2970,  2977,  2984,  2991,  2994,  2996,  2998,  3000,  3002,
  3004,  3006,  3008,  3010,  3011,  3013,  3015,  3019,  3021,  3023,
  3027,  3031,  3035,  3041,  3045,  3050,  3055,  3062,  3071,  3080,
  3086,  3092,  3094,  3096,  3098,  3100,  3102,  3107,  3114,  3116
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
     0,   301,   304,     0,   249,   249,   249,     0,     0,   264,
   303,   265,     0,   300,     0,   303,   266,   300,     0,     0,
   305,   306,     0,   309,     0,     0,     0,   306,   235,   307,
   306,     8,   308,   306,     0,   306,   249,   306,     0,   306,
   252,   306,     0,    58,   258,   306,   266,   306,   259,     0,
   306,   250,   306,     0,   306,   247,   306,     0,   306,   248,
   306,     0,   306,   251,   306,     0,   306,   255,   306,     0,
   306,   241,   306,     0,   306,   243,   306,     0,   306,   242,
   306,     0,   306,   244,   306,     0,   306,   238,   306,     0,
   306,   239,   306,     0,   306,   240,   306,     0,   306,   237,
   306,     0,   306,   236,   306,     0,   248,   306,     0,   247,
   306,     0,   253,   306,     0,   256,   306,   257,     0,   451,
     0,   449,   314,   316,     0,     5,   387,     0,   387,     0,
   387,   314,     0,     0,   122,   310,   258,   304,   259,     0,
     0,   129,   311,   258,   304,   266,     3,   259,     0,     0,
    60,   258,     5,   258,   312,   304,   259,   259,   264,   450,
   265,     0,    61,   258,     5,   259,   264,   450,   266,   450,
   265,     0,    55,   258,   387,   259,     0,    57,   258,   387,
   259,     0,     0,    56,   313,   258,   304,   266,   283,   259,
     0,   241,     5,   243,   258,   304,   259,     0,   262,     5,
     0,   262,   213,     0,   262,   143,     0,   262,     3,     0,
   309,   261,     3,     0,   261,     3,     0,   309,   263,   450,
     0,   258,   260,   259,     0,   258,   259,     0,   258,   315,
   259,     0,   306,     0,   315,   266,   306,     0,     0,   264,
   453,   265,     0,   264,    69,   258,   283,   259,   265,     0,
     0,   317,   264,   318,   265,     0,     0,   318,   319,     0,
    96,     5,     7,     0,    82,   264,   320,   265,     0,     0,
   320,   264,   321,   265,     0,     0,   321,   322,     0,    69,
   283,     7,     0,    69,    64,     7,     0,    81,     5,   316,
     7,     0,     0,   323,   264,   324,   265,     0,     0,   324,
   325,     0,    96,     5,     7,     0,    88,   300,     7,     0,
    82,   264,   326,   265,     0,     0,   326,   264,   327,   265,
     0,     0,   327,   328,     0,    86,     5,     7,     0,    87,
     5,     7,     0,    82,   264,   329,   265,     0,     0,   329,
   264,   330,   265,     0,     0,   330,   331,     0,    89,     5,
     7,     0,    90,   450,     7,     0,    91,   450,     7,     0,
    92,   450,     7,     0,    93,   450,     7,     0,    94,   450,
     7,     0,     0,   332,   333,     0,   264,   334,   265,     0,
   447,     0,   446,     0,     0,   334,   335,     0,    96,   456,
     7,     0,    96,     5,   294,     7,     0,    86,     5,     7,
     0,    82,   264,   336,   265,     0,    82,     5,   264,   336,
   265,     0,     0,   336,   264,   337,   265,     0,   336,   446,
     0,     0,   337,   338,     0,    86,     5,     7,     0,    69,
   283,     7,     0,    70,   283,     7,     0,    76,   300,     7,
     0,    75,   300,     7,     0,    80,   456,     7,     0,    77,
   264,   451,   293,   451,   265,     7,     0,    71,   283,     7,
     0,    72,   283,     7,     0,    99,   300,     7,     0,    74,
   300,     7,     0,    73,   300,     7,     0,    99,   258,   300,
   266,   300,   259,     7,     0,    74,   258,   300,   266,   300,
   259,     7,     0,    73,   258,   300,   266,   300,   259,     7,
     0,     0,   339,   340,     0,   264,   341,   265,     0,   447,
     0,   446,     0,     0,   341,   342,     0,    96,   456,     7,
     0,    96,     5,   294,     7,     0,    86,     5,     7,     0,
    97,   264,   343,   265,     0,   105,   264,   349,   265,     0,
   107,   264,   356,   265,     0,    68,   264,   359,   265,     0,
     0,   343,   264,   344,   265,     0,   343,   446,     0,     0,
   344,   345,     0,    96,     5,     7,     0,    98,     5,     7,
     0,    98,     5,   294,     7,     0,    99,     5,   346,     7,
     0,   100,   264,     5,   293,     5,   265,     7,     0,   101,
   302,     7,     0,   102,   302,     7,     0,   103,   283,     7,
     0,   104,   283,     7,     0,     0,     0,     0,   264,   112,
     5,     7,   111,     5,   294,     7,   347,    62,   284,     7,
   348,   132,     5,   295,     7,   265,     0,     0,   349,   264,
   350,   265,     0,     0,   350,   351,     0,    96,     5,     7,
     0,   106,   352,     7,     0,    98,   354,     7,     0,     5,
     0,   264,   353,   265,     0,     0,   353,   293,     5,     0,
     5,     0,   264,   355,   265,     0,     0,   355,   293,     5,
     0,     0,   356,   264,   357,   265,     0,     0,   357,   358,
     0,    96,   456,     7,     0,    86,     5,     7,     0,    98,
     5,     7,     0,     0,   359,   264,   360,   265,     0,   359,
   446,     0,     0,   360,   361,     0,    98,     5,     7,     0,
   108,   285,     7,     0,   109,   288,     7,     0,   110,   456,
     7,     0,     0,   362,   363,     0,   264,   364,   265,     0,
   447,     0,   446,     0,     0,   364,   365,     0,    96,   456,
     7,     0,    96,     5,   294,     7,     0,    86,     5,     7,
     0,   112,   264,   366,   265,     0,   116,   264,   372,   265,
     0,     0,   366,   264,   367,   265,     0,   366,   446,     0,
     0,   367,   368,     0,    96,   456,     7,     0,    86,   107,
     7,     0,    86,   117,     7,     0,    86,     5,     7,     0,
   186,   452,     7,     0,     0,   113,   456,   369,   371,     7,
     0,   114,     3,     7,     0,     0,   258,   370,   304,   259,
     7,     0,   130,   283,     7,     0,    83,     5,     7,     0,
    84,     5,     7,     0,    81,     5,     7,     0,   115,     3,
     7,     0,     0,   258,   456,   259,     0,     0,   372,   373,
     0,   372,   447,     0,   372,   446,     0,   117,   264,   378,
   265,     0,   118,   264,   378,   265,     0,   119,   264,   382,
   265,     0,   120,   264,   374,   265,     0,     0,   374,   375,
     0,    86,     5,     7,     0,   110,     5,     7,     0,   264,
   376,   265,     0,     0,   376,   377,     0,    78,   387,     7,
     0,    79,   387,     7,     0,   116,   387,     7,     0,   130,
   283,     7,     0,     0,   378,   379,     0,     0,     0,   386,
   258,   380,   304,   381,   266,   304,   259,     7,     0,   130,
   283,     7,     0,    81,     5,     7,     0,    83,     5,     7,
     0,   131,     7,     0,    84,     5,     7,     0,    85,   258,
     3,   259,     7,     0,     0,   382,   383,     0,   130,   283,
     7,     0,     0,     0,   386,   258,   384,   304,   385,   266,
   387,   259,     7,     0,     0,   122,     0,   123,     0,   124,
     0,   125,     0,   126,     0,   127,     0,   128,     0,   264,
     5,   456,   265,     0,   264,   456,   265,     0,     0,   388,
   389,     0,   264,   390,   265,     0,   447,     0,   446,     0,
     0,   390,   391,     0,    96,   456,     7,     0,    96,     5,
   294,     7,     0,   133,   264,   393,   265,     0,     0,   140,
   392,   264,   400,   265,     0,   446,     0,     0,   393,   264,
   394,   265,     0,   393,   446,     0,     0,   394,   395,     0,
    96,   456,     7,     0,    86,     5,     7,     0,   134,   396,
     7,     0,   135,   457,     7,     0,   138,   398,     7,     0,
   139,   456,     7,     0,   136,   452,     7,     0,   137,   457,
     7,     0,   446,     0,   456,     0,   264,   397,   265,     0,
     0,   397,   293,   456,     0,   456,     0,   264,   399,   265,
     0,     0,   399,   293,   456,     0,     0,   400,   401,     0,
     5,   456,     7,     0,   142,   300,     7,     0,   155,   264,
   407,   265,     0,   159,   264,   409,   265,     0,   162,   264,
   411,   265,     0,   165,   264,   413,   265,     0,     5,   258,
   456,   259,     7,     0,   142,   258,   300,   259,     7,     0,
   153,     7,     0,    15,   258,   300,   259,   264,   400,   265,
     0,    15,   258,   300,   259,   264,   400,   265,    16,   264,
   400,   265,     0,   144,   258,   456,   266,   300,   259,     7,
     0,   171,   258,   456,   266,   300,   266,   300,   266,   300,
   266,   300,   259,     7,     0,   171,   258,   456,   266,   300,
   266,   300,   266,   300,   259,     7,     0,   171,   258,   456,
   266,   300,   266,   300,   259,     7,     0,   172,   258,   456,
   266,   452,   259,     7,     0,   173,   258,   456,   266,   452,
   259,     7,     0,   151,   258,   456,   266,   300,   259,     7,
     0,   152,   258,   456,   266,   283,   266,   456,   259,     7,
     0,   145,   258,   456,   266,   456,   266,   452,   259,     7,
     0,   146,   258,   456,   266,   456,   266,   450,   259,     7,
     0,   147,   258,   456,   266,   450,   266,   452,   266,   450,
   259,     7,     0,   148,   258,   456,   266,   450,   266,   450,
   266,   450,   259,     7,     0,   149,   258,   456,   266,   450,
   266,   450,   266,   450,   259,     7,     0,   154,   258,   300,
   259,     7,     0,   150,   258,   456,   266,   456,   266,   456,
   266,   450,   266,   452,   266,   450,   266,   450,   259,     7,
     0,   155,   258,   450,   266,   450,   266,   300,   266,   300,
   259,   264,   400,   265,     0,   159,   258,   450,   266,   450,
   266,   300,   266,   450,   266,   450,   259,   264,   400,   265,
     0,   162,   258,   450,   266,   450,   266,   300,   259,   264,
   400,   265,     0,   162,   258,   450,   266,   450,   266,   300,
   266,   450,   259,   264,   400,   265,     0,     0,   194,   402,
   258,   404,   405,   259,     7,     0,     0,   197,   403,   258,
   404,   405,   259,     7,     0,   168,   258,   283,   266,   300,
   259,     7,     0,   168,   258,   283,   266,   300,   266,   450,
   266,   300,   259,     7,     0,   189,   258,   456,   259,     7,
     0,   170,   258,   457,   259,     7,     0,   174,   258,   456,
   266,   452,   266,   450,   259,     7,     0,   175,   258,   456,
   266,   450,   266,   457,   259,     7,     0,   176,   258,   456,
   266,   452,   266,   457,   259,     7,     0,   177,   264,   456,
   265,     7,     0,   178,   264,   456,   265,     7,     0,   184,
   264,   456,   266,   283,   266,   457,   266,   300,   265,     7,
     0,   184,   264,   456,   266,   283,   266,   457,   265,     7,
     0,   179,   258,   456,   266,   456,   266,   450,   266,   450,
   259,   264,   400,   265,     7,     0,   180,   258,   456,   266,
   456,   266,   450,   266,   450,   259,   264,   400,   265,     7,
     0,   181,   258,   456,   266,   450,   259,     7,     0,   185,
   264,     5,   266,     5,   266,   135,   457,   266,     4,   265,
     7,     0,   185,   264,     5,   266,     5,   266,   135,   457,
   265,     7,     0,   185,   264,     5,   266,     5,   265,     7,
     0,   182,   258,   456,   266,   456,   259,     7,     0,   183,
   258,   456,   266,   456,   259,     7,     0,   446,     0,   302,
     0,   456,     0,     0,   405,   406,     0,   266,   209,   457,
     0,   266,   213,   452,     0,   266,   452,     0,     0,   407,
   408,     0,   156,   450,     7,     0,   157,   450,     7,     0,
   143,   300,     7,     0,   158,   300,     7,     0,   140,   264,
   400,   265,     0,     0,   409,   410,     0,   156,   450,     7,
     0,   157,   450,     7,     0,   143,   300,     7,     0,   160,
   450,     7,     0,   161,   450,     7,     0,   140,   264,   400,
   265,     0,     0,   411,   412,     0,   163,   450,     7,     0,
    88,   450,     7,     0,   164,   300,     7,     0,    18,   450,
     7,     0,   140,   264,   400,   265,     0,     0,   413,   414,
     0,   163,   450,     7,     0,   166,   450,     7,     0,    88,
   450,     7,     0,    18,   450,     7,     0,   133,   456,     7,
     0,   167,   264,   415,   265,     0,   140,   264,   400,   265,
     0,   141,   264,   400,   265,     0,     0,   415,   264,   416,
   265,     0,     0,   416,   417,     0,    86,     5,     7,     0,
   112,     5,     7,     0,   130,   283,     7,     0,    88,   450,
     7,     0,    99,   300,     7,     0,    18,     5,     7,     0,
     0,   418,   419,     0,   264,   420,   265,     0,   447,     0,
   446,     0,     0,   420,   421,     0,    96,   456,     7,     0,
    96,     5,   294,     7,     0,   134,   456,     7,     0,   188,
   456,     7,     0,   112,   264,   422,   265,     0,     0,   422,
   264,   423,   265,     0,   422,   447,     0,   422,   446,     0,
     0,   423,   424,     0,    96,   456,     7,     0,    75,   264,
   425,   265,     0,     0,   425,   117,   264,   426,   265,     0,
   425,     5,   264,   426,   265,     0,     0,   426,   427,     0,
     0,   386,   258,   428,   304,   259,     7,     0,    86,     5,
     7,     0,   130,   283,     7,     0,    81,     5,     7,     0,
    83,     5,     7,     0,     0,   429,   430,     0,   264,   431,
   265,     0,   447,     0,   446,     0,     0,   431,   432,     0,
    96,   456,     7,     0,   190,   456,     7,     0,   215,     5,
     7,     0,   192,   457,     7,     0,   140,   264,   435,   265,
     0,     0,   189,   456,   191,   456,   434,   264,   435,   265,
     0,     0,     0,   435,   436,   437,     0,   193,   258,   439,
   442,   443,   259,     7,     0,   194,   258,   439,   442,   443,
   259,     7,     0,   194,   258,     6,   266,   300,   443,   259,
     7,     0,   194,   258,     6,   266,   232,   258,   457,   259,
   443,   259,     7,     0,   196,   258,     6,   443,   259,     7,
     0,     0,   195,   258,   283,   438,   266,   130,   283,   443,
   259,     7,     0,   446,     0,   456,   441,   266,     0,   456,
   441,   440,     5,   441,   266,     0,   249,     0,   250,     0,
   247,     0,   248,     0,     0,   258,   283,   259,     0,   199,
     0,   200,   283,     0,   201,   283,     0,   203,   264,   264,
   453,   265,   264,   453,   265,   264,   453,   265,   265,     0,
   202,   283,     0,   202,   264,   300,   266,   300,   266,   300,
   265,   264,   452,   266,   452,   266,   452,   265,     0,   204,
   264,   453,   265,     0,   205,   264,   264,   453,   265,   264,
   453,   265,   265,   264,   450,   265,     0,   206,   264,   264,
   453,   265,   264,   453,   265,   264,   453,   265,   265,   264,
   450,   266,   450,   265,     0,   207,   264,   264,   453,   265,
   264,   453,   265,   264,   453,   265,   264,   453,   265,   265,
   264,   450,   266,   450,   266,   450,   265,     0,   200,   283,
   208,     5,   264,   450,   266,   450,   265,   264,   450,   265,
     0,     0,   443,   444,     0,   266,   209,   457,     0,   266,
   209,   243,   457,     0,   266,   209,   246,   457,     0,   266,
   210,   450,     0,   266,   218,     0,   266,   219,     0,   266,
   214,   450,     0,   266,   215,     5,     0,   266,   216,   445,
     0,   266,   217,   445,     0,   266,   215,   445,     0,   266,
   212,     0,   266,   211,   450,     0,   266,   213,   452,     0,
   266,   198,     5,     0,   266,   221,     5,     0,   266,   220,
   450,     0,   266,    75,   452,     0,   266,   222,   450,     0,
   266,   222,   264,   453,   265,     0,   266,   223,     0,   266,
   224,     0,   266,   136,   452,     0,   266,   168,   264,   300,
   266,   300,   266,   300,   265,     0,   266,   225,   302,     0,
   266,   226,     0,   266,   226,   264,   450,   266,   450,   266,
   450,   265,     0,   266,   227,     0,   266,   227,   264,   450,
   266,   450,   266,   450,   265,     0,   266,   228,     0,   266,
   228,   264,   450,   266,   450,   266,   450,   265,     0,   266,
   229,   264,   453,   265,     0,   266,   230,     3,     0,   266,
   231,     0,     0,   445,     6,     0,    13,   256,   450,     8,
   450,   257,     0,    13,   256,   450,     8,   450,     8,   450,
   257,     0,    13,     5,   130,   264,   450,     8,   450,   265,
     0,    13,     5,   130,   264,   450,     8,   450,     8,   450,
   265,     0,    14,     0,    15,   256,   450,   257,     0,    17,
     0,    29,   258,   448,   259,     7,     0,   456,   234,   452,
     7,     0,   456,   234,     6,     7,     0,   456,   234,   232,
   258,   457,   259,     7,     0,   456,   234,   458,     7,     0,
   456,   234,    28,   258,   457,   259,     7,     0,    11,   256,
     6,   257,     7,     0,    11,   456,     7,     0,    11,   261,
     7,     0,    11,   256,     6,   266,   453,   257,     7,     0,
    12,   256,   456,   257,     7,     0,    12,   256,   456,   257,
   258,   450,   259,     7,     0,     0,   448,   293,     5,     0,
   448,   293,     5,   234,   450,     0,   448,   293,     5,   234,
     6,     0,    35,     0,    36,     0,    37,     0,    38,     0,
    39,     0,    40,     0,    41,     0,    42,     0,    43,     0,
    44,     0,    45,     0,    46,     0,    47,     0,    48,     0,
    49,     0,    50,     0,    51,     0,    52,     0,    53,     0,
    54,     0,   456,     0,   451,     0,   256,   450,   257,     0,
   248,   450,     0,   253,   450,     0,   450,   248,   450,     0,
   450,   247,   450,     0,   450,   249,   450,     0,   450,   250,
   450,     0,   450,   251,   450,     0,   450,   255,   450,     0,
   450,   241,   450,     0,   450,   243,   450,     0,   450,   242,
   450,     0,   450,   244,   450,     0,   450,   238,   450,     0,
   450,   239,   450,     0,   450,   237,   450,     0,   450,   236,
   450,     0,    35,   258,   450,   259,     0,    36,   258,   450,
   259,     0,    37,   258,   450,   259,     0,    38,   258,   450,
   259,     0,    39,   258,   450,   259,     0,    40,   258,   450,
   259,     0,    41,   258,   450,   259,     0,    42,   258,   450,
   259,     0,    43,   258,   450,   259,     0,    44,   258,   450,
   259,     0,    45,   258,   450,   266,   450,   259,     0,    46,
   258,   450,   259,     0,    47,   258,   450,   259,     0,    48,
   258,   450,   259,     0,    49,   258,   450,   259,     0,    50,
   258,   450,   259,     0,    51,   258,   450,   259,     0,    52,
   258,   450,   266,   450,   259,     0,    53,   258,   450,   266,
   450,   259,     0,    54,   258,   450,   266,   450,   259,     0,
   450,   261,     0,     4,     0,     3,     0,    30,     0,    31,
     0,    32,     0,    33,     0,    34,     0,   456,     0,     0,
   450,     0,   454,     0,   264,   453,   265,     0,   450,     0,
   454,     0,   453,   266,   450,     0,   453,   266,   454,     0,
   450,     8,   450,     0,   450,     8,   450,     8,   450,     0,
     5,   264,   265,     0,     5,   264,   453,   265,     0,    24,
   258,     5,   259,     0,    25,   258,     5,   266,     5,   259,
     0,    26,   258,   450,   266,   450,   266,   450,   259,     0,
    27,   258,   450,   266,   450,   266,   450,   259,     0,     5,
   268,   264,   450,   265,     0,   455,   268,   264,   450,   265,
     0,     5,     0,   455,     0,     6,     0,   456,     0,   458,
     0,    10,   256,   457,   257,     0,    10,   256,   457,   266,
   453,   257,     0,   233,     0,     9,   258,   457,   266,   457,
   259,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   339,   356,   376,   379,   382,   385,   388,   389,   390,   391,
   392,   393,   394,   395,   396,   398,   400,   402,   407,   416,
   419,   421,   423,   425,   427,   429,   431,   433,   435,   437,
   439,   441,   443,   445,   447,   449,   451,   453,   455,   458,
   466,   480,   483,   487,   492,   498,   504,   506,   508,   511,
   513,   516,   528,   535,   543,   554,   562,   571,   578,   593,
   623,   628,   639,   642,   646,   651,   654,   670,   683,   692,
   697,   704,   711,   720,   728,   735,   746,   755,   763,   777,
   790,   825,   829,   839,   856,   856,   859,   865,   868,   872,
   881,   884,   887,   891,   911,   955,   957,   961,   964,   981,
   990,   997,  1000,  1004,  1010,  1016,  1020,  1025,  1030,  1036,
  1043,  1047,  1060,  1075,  1089,  1095,  1101,  1107,  1113,  1119,
  1125,  1131,  1137,  1143,  1149,  1155,  1161,  1167,  1173,  1179,
  1185,  1192,  1198,  1200,  1209,  1213,  1219,  1293,  1327,  1336,
  1348,  1350,  1362,  1364,  1376,  1378,  1392,  1404,  1410,  1416,
  1418,  1447,  1473,  1486,  1492,  1499,  1505,  1512,  1519,  1529,
  1532,  1533,  1536,  1539,  1542,  1547,  1550,  1563,  1570,  1575,
  1580,  1584,  1591,  1596,  1601,  1606,  1612,  1616,  1621,  1624,
  1660,  1668,  1673,  1682,  1686,  1695,  1698,  1703,  1708,  1713,
  1721,  1725,  1737,  1747,  1752,  1757,  1762,  1774,  1778,  1828,
  1831,  1834,  1837,  1840,  1849,  1856,  1859,  1866,  1868,  1871,
  1880,  1884,  1893,  1901,  1910,  1913,  1929,  1936,  1941,  1948,
  1958,  1962,  1974,  1979,  1985,  1990,  1998,  2006,  2015,  2033,
  2042,  2050,  2058,  2068,  2078,  2088,  2106,  2114,  2117,  2124,
  2126,  2130,  2138,  2142,  2151,  2159,  2168,  2171,  2174,  2177,
  2182,  2190,  2207,  2214,  2231,  2235,  2240,  2245,  2250,  2264,
  2284,  2289,  2294,  2299,  2328,  2332,  2337,  2347,  2409,  2417,
  2424,  2431,  2435,  2444,  2447,  2452,  2470,  2475,  2479,  2496,
  2510,  2515,  2522,  2535,  2543,  2551,  2559,  2563,  2572,  2583,
  2595,  2602,  2639,  2646,  2658,  2662,  2697,  2700,  2703,  2716,
  2723,  2726,  2733,  2735,  2739,  2746,  2750,  2759,  2767,  2777,
  2779,  2784,  2790,  2795,  2799,  2818,  2822,  2827,  2831,  2834,
  2844,  2848,  2856,  2880,  2885,  2891,  3202,  3207,  3216,  3225,
  3234,  3239,  3242,  3280,  3287,  3292,  3297,  3304,  3309,  3312,
  3315,  3324,  3332,  3335,  3347,  3357,  3369,  3378,  3381,  3385,
  3387,  3389,  3395,  3416,  3420,  3431,  3509,  3555,  3560,  3569,
  3578,  3583,  3592,  3601,  3618,  3622,  3637,  3646,  3700,  3716,
  3719,  3720,  3721,  3722,  3723,  3724,  3725,  3729,  3752,  3774,
  3781,  3784,  3791,  3793,  3797,  3805,  3809,  3818,  3826,  3829,
  3831,  3834,  3838,  3844,  3849,  3857,  3873,  3877,  3882,  3891,
  3894,  3899,  3904,  3909,  3914,  3919,  3923,  3934,  3939,  3944,
  3954,  3966,  3970,  3975,  3986,  3995,  4004,  4030,  4037,  4043,
  4049,  4055,  4063,  4085,  4092,  4098,  4109,  4120,  4133,  4148,
  4163,  4178,  4198,  4219,  4231,  4251,  4268,  4287,  4308,  4322,
  4336,  4343,  4377,  4390,  4404,  4417,  4430,  4437,  4439,  4446,
  4448,  4459,  4471,  4481,  4489,  4502,  4515,  4529,  4539,  4549,
  4563,  4577,  4595,  4614,  4625,  4640,  4655,  4670,  4685,  4700,
  4710,  4716,  4726,  4732,  4735,  4739,  4749,  4762,  4774,  4778,
  4784,  4788,  4792,  4797,  4806,  4819,  4823,  4829,  4833,  4837,
  4841,  4846,  4855,  4867,  4870,  4876,  4880,  4884,  4888,  4897,
  4912,  4915,  4921,  4925,  4929,  4934,  4944,  4950,  4956,  4965,
  4969,  4973,  4987,  4990,  5002,  5031,  5034,  5037,  5045,  5061,
  5069,  5072,  5079,  5081,  5084,  5094,  5097,  5105,  5113,  5126,
  5131,  5136,  5140,  5143,  5145,  5150,  5157,  5161,  5165,  5170,
  5176,  5182,  5195,  5206,  5209,  5217,  5245,  5256,  5261,  5270,
  5286,  5294,  5297,  5302,  5304,  5307,  5316,  5319,  5327,  5339,
  5350,  5355,  5360,  5378,  5387,  5391,  5396,  5406,  5413,  5418,
  5427,  5436,  5445,  5451,  5456,  5463,  5477,  5499,  5502,  5503,
  5504,  5507,  5511,  5515,  5523,  5530,  5537,  5561,  5568,  5580,
  5593,  5613,  5639,  5672,  5692,  5725,  5728,  5736,  5743,  5750,
  5754,  5758,  5762,  5766,  5776,  5781,  5786,  5806,  5810,  5817,
  5827,  5836,  5845,  5852,  5860,  5864,  5873,  5877,  5881,  5889,
  5895,  5899,  5907,  5914,  5922,  5929,  5937,  5944,  5952,  5956,
  5964,  5971,  6019,  6036,  6052,  6072,  6092,  6130,  6134,  6145,
  6149,  6164,  6170,  6176,  6182,  6193,  6198,  6214,  6219,  6231,
  6241,  6257,  6260,  6266,  6272,  6283,  6285,  6286,  6287,  6288,
  6289,  6290,  6291,  6292,  6293,  6294,  6295,  6296,  6297,  6298,
  6299,  6300,  6301,  6302,  6303,  6304,  6307,  6309,  6310,  6311,
  6312,  6313,  6314,  6315,  6316,  6317,  6318,  6319,  6320,  6321,
  6322,  6323,  6324,  6325,  6326,  6327,  6328,  6329,  6330,  6331,
  6332,  6333,  6334,  6335,  6336,  6337,  6338,  6339,  6340,  6341,
  6342,  6343,  6344,  6345,  6349,  6352,  6355,  6356,  6357,  6358,
  6359,  6360,  6361,  6377,  6382,  6388,  6391,  6396,  6404,  6407,
  6410,  6420,  6428,  6439,  6455,  6477,  6492,  6530,  6538,  6548,
  6558,  6567,  6572,  6577,  6582,  6597,  6602,  6607,  6626,  6635
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
   300,   301,   300,   300,   302,   302,   303,   303,   305,   304,
   306,   307,   308,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
   306,   306,   306,   306,   309,   309,   309,   309,   309,   309,
   310,   309,   311,   309,   312,   309,   309,   309,   309,   313,
   309,   309,   309,   309,   309,   309,   309,   309,   309,   314,
   314,   314,   315,   315,   316,   316,   316,   317,   317,   318,
   318,   319,   319,   320,   320,   321,   321,   322,   322,   322,
   323,   323,   324,   324,   325,   325,   325,   326,   326,   327,
   327,   328,   328,   328,   329,   329,   330,   330,   331,   331,
   331,   331,   331,   331,   332,   332,   333,   333,   333,   334,
   334,   335,   335,   335,   335,   335,   336,   336,   336,   337,
   337,   338,   338,   338,   338,   338,   338,   338,   338,   338,
   338,   338,   338,   338,   338,   338,   339,   339,   340,   340,
   340,   341,   341,   342,   342,   342,   342,   342,   342,   342,
   343,   343,   343,   344,   344,   345,   345,   345,   345,   345,
   345,   345,   345,   345,   346,   347,   348,   346,   349,   349,
   350,   350,   351,   351,   351,   352,   352,   353,   353,   354,
   354,   355,   355,   356,   356,   357,   357,   358,   358,   358,
   359,   359,   359,   360,   360,   361,   361,   361,   361,   362,
   362,   363,   363,   363,   364,   364,   365,   365,   365,   365,
   365,   366,   366,   366,   367,   367,   368,   368,   368,   368,
   368,   369,   368,   368,   370,   368,   368,   368,   368,   368,
   368,   371,   371,   372,   372,   372,   372,   373,   373,   373,
   373,   374,   374,   375,   375,   375,   376,   376,   377,   377,
   377,   377,   378,   378,   380,   381,   379,   379,   379,   379,
   379,   379,   379,   382,   382,   383,   384,   385,   383,   386,
   386,   386,   386,   386,   386,   386,   386,   387,   387,   388,
   388,   389,   389,   389,   390,   390,   391,   391,   391,   392,
   391,   391,   393,   393,   393,   394,   394,   395,   395,   395,
   395,   395,   395,   395,   395,   395,   396,   396,   397,   397,
   398,   398,   399,   399,   400,   400,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   402,   401,   403,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
   404,   404,   405,   405,   406,   406,   406,   407,   407,   408,
   408,   408,   408,   408,   409,   409,   410,   410,   410,   410,
   410,   410,   411,   411,   412,   412,   412,   412,   412,   413,
   413,   414,   414,   414,   414,   414,   414,   414,   414,   415,
   415,   416,   416,   417,   417,   417,   417,   417,   417,   418,
   418,   419,   419,   419,   420,   420,   421,   421,   421,   421,
   421,   422,   422,   422,   422,   423,   423,   424,   424,   425,
   425,   425,   426,   426,   428,   427,   427,   427,   427,   427,
   429,   429,   430,   430,   430,   431,   431,   432,   432,   432,
   432,   432,   434,   433,   435,   436,   435,   437,   437,   437,
   437,   437,   438,   437,   437,   439,   439,   440,   440,   440,
   440,   441,   441,   442,   442,   442,   442,   442,   442,   442,
   442,   442,   442,   442,   443,   443,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
   445,   445,   446,   446,   446,   446,   446,   446,   446,   447,
   447,   447,   447,   447,   447,   447,   447,   447,   447,   447,
   447,   448,   448,   448,   448,   449,   449,   449,   449,   449,
   449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
   449,   449,   449,   449,   449,   449,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
   450,   450,   450,   450,   450,   451,   451,   451,   451,   451,
   451,   451,   451,   452,   452,   452,   452,   453,   453,   453,
   453,   454,   454,   454,   454,   454,   454,   454,   454,   455,
   455,   456,   456,   457,   457,   457,   457,   457,   457,   458
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
     4,     0,     2,     3,     0,     3,     1,     3,     0,     2,
     1,     0,     0,     7,     3,     3,     6,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     2,     2,     2,     3,     1,     3,     2,     1,     2,
     0,     5,     0,     7,     0,    11,     9,     4,     4,     0,
     7,     6,     2,     2,     2,     2,     3,     2,     3,     3,
     2,     3,     1,     3,     0,     3,     6,     0,     4,     0,
     2,     3,     4,     0,     4,     0,     2,     3,     3,     4,
     0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
     2,     3,     3,     4,     0,     4,     0,     2,     3,     3,
     3,     3,     3,     3,     0,     2,     3,     1,     1,     0,
     2,     3,     4,     3,     4,     5,     0,     4,     2,     0,
     2,     3,     3,     3,     3,     3,     3,     7,     3,     3,
     3,     3,     3,     7,     7,     7,     0,     2,     3,     1,
     1,     0,     2,     3,     4,     3,     4,     4,     4,     4,
     0,     4,     2,     0,     2,     3,     3,     4,     4,     7,
     3,     3,     3,     3,     0,     0,     0,    18,     0,     4,
     0,     2,     3,     3,     3,     1,     3,     0,     3,     1,
     3,     0,     3,     0,     4,     0,     2,     3,     3,     3,
     0,     4,     2,     0,     2,     3,     3,     3,     3,     0,
     2,     3,     1,     1,     0,     2,     3,     4,     3,     4,
     4,     0,     4,     2,     0,     2,     3,     3,     3,     3,
     3,     0,     5,     3,     0,     5,     3,     3,     3,     3,
     3,     0,     3,     0,     2,     2,     2,     4,     4,     4,
     4,     0,     2,     3,     3,     3,     0,     2,     3,     3,
     3,     3,     0,     2,     0,     0,     9,     3,     3,     3,
     2,     3,     5,     0,     2,     3,     0,     0,     9,     0,
     1,     1,     1,     1,     1,     1,     1,     4,     3,     0,
     2,     3,     1,     1,     0,     2,     3,     4,     4,     0,
     5,     1,     0,     4,     2,     0,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     1,     1,     3,     0,     3,
     1,     3,     0,     3,     0,     2,     3,     3,     4,     4,
     4,     4,     5,     5,     2,     7,    11,     7,    13,    11,
     9,     7,     7,     7,     9,     9,     9,    11,    11,    11,
     5,    17,    13,    15,    11,    13,     0,     7,     0,     7,
     7,    11,     5,     5,     9,     9,     9,     5,     5,    11,
     9,    14,    14,     7,    12,    10,     7,     7,     7,     1,
     1,     1,     0,     2,     3,     3,     2,     0,     2,     3,
     3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     4,     0,
     2,     3,     3,     3,     3,     3,     4,     4,     4,     0,
     4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
     2,     3,     1,     1,     0,     2,     3,     4,     3,     3,
     4,     0,     4,     2,     2,     0,     2,     3,     4,     0,
     5,     5,     0,     2,     0,     6,     3,     3,     3,     3,
     0,     2,     3,     1,     1,     0,     2,     3,     3,     3,
     3,     4,     0,     8,     0,     0,     3,     7,     7,     8,
    11,     6,     0,    10,     1,     3,     6,     1,     1,     1,
     1,     0,     3,     1,     2,     2,    12,     2,    15,     4,
    12,    17,    22,    12,     0,     2,     3,     4,     4,     3,
     2,     2,     3,     3,     3,     3,     3,     2,     3,     3,
     3,     3,     3,     3,     3,     5,     2,     2,     3,     9,
     3,     2,     9,     2,     9,     2,     9,     5,     3,     2,
     0,     2,     6,     8,     8,    10,     1,     4,     1,     5,
     4,     4,     7,     4,     7,     5,     3,     3,     7,     5,
     8,     0,     3,     5,     5,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     6,     4,     4,     4,     4,     4,
     4,     6,     6,     6,     2,     1,     1,     1,     1,     1,
     1,     1,     1,     0,     1,     1,     3,     1,     1,     3,
     3,     3,     5,     3,     4,     4,     6,     8,     8,     5,
     5,     1,     1,     1,     1,     1,     4,     6,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,   742,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     5,    19,     0,    16,    17,   743,     0,     0,     0,
     0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
    27,     0,    28,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   744,     0,     0,   749,   745,    18,   746,
   652,    42,   205,   168,   181,   237,    91,   300,   380,   520,
   551,     0,     0,   637,     0,   639,     0,     0,     0,     0,
    41,   575,     0,   724,     0,     0,   648,   647,     0,    26,
    25,    24,    22,    23,    21,    39,    29,    31,    32,    33,
    34,    30,    35,    36,    37,    38,     0,     0,    85,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   717,   716,
   742,     0,     0,     0,     0,     0,     0,   718,   719,   720,
   721,   722,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   725,   677,     0,
   726,   723,     0,     0,     0,     0,     0,     0,     0,     0,
    86,     0,   742,     0,     6,    43,    48,    51,    50,     0,
   210,     8,   206,   209,   208,   170,     9,   183,    10,   242,
    11,   238,   241,   240,   742,     0,     7,    92,    97,    96,
   305,    12,   301,   304,   303,   385,    13,   381,   384,   383,
   525,    14,   521,   524,   523,   556,    15,   552,   555,   554,
   563,     0,     0,     0,     0,   582,     0,     0,   742,    61,
     0,    58,   573,     0,    59,   595,     0,     0,   642,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   679,   680,     0,   728,     0,
   729,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   715,   641,   644,   740,
   646,     0,   650,     0,     0,   747,     0,   640,   653,     0,
     0,     0,    82,   724,     0,     0,     0,     0,     0,     0,
     0,    98,     0,     0,     0,     0,     0,     0,     0,   638,
   584,     0,     0,     0,     0,     0,     0,     0,     0,   595,
     0,     0,   102,   595,    74,     0,    71,     0,    57,    69,
    81,     0,     0,     0,   741,   734,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   678,   727,     0,   732,   694,   693,   691,
   692,   687,   689,   688,   690,   682,   681,   683,   684,   685,
   686,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    85,   742,     0,     0,     0,     0,     0,     0,   207,   211,
     0,     0,   169,   171,     0,   102,     0,   182,   184,     0,
     0,     0,     0,     0,     0,   239,   243,     0,     0,    85,
     0,     0,     0,     0,   302,   306,     0,     0,   390,   382,
   386,   392,     0,     0,     0,     0,   522,   526,     0,     0,
     0,     0,     0,   553,   557,   565,     0,     0,   585,   586,
   102,   588,     0,     0,     0,     0,     0,     0,     0,   580,
   581,   578,   579,   576,     0,     0,     0,     0,     0,   595,
   109,     0,     0,     0,    85,     0,     0,    64,    55,    63,
     0,     0,   596,   735,   736,     0,     0,     0,     0,   695,
   696,   697,   698,   699,   700,   701,   702,   703,   704,     0,
   706,   707,   708,   709,   710,   711,     0,     0,     0,     0,
   730,   731,     0,   649,     0,   750,   748,   655,   654,     0,
    90,    62,     0,     0,     0,     0,    44,     0,     0,     0,
   217,     0,   742,     0,   174,     0,   188,     0,     0,   291,
     0,   742,     0,   251,   269,   284,   102,     0,     0,     0,
     0,   742,     0,   312,   334,   742,     0,   393,     0,   742,
     0,   532,     0,     0,     0,   565,     0,     0,     0,   566,
     0,     0,   633,     0,     0,     0,     0,     0,     0,     0,
     0,   583,   582,     0,     0,     0,     0,     0,   103,     0,
     0,    77,    75,    70,     0,    76,     0,    85,   572,   724,
   724,     0,     0,     0,     0,     0,   608,   724,     0,   631,
   631,   631,   601,   602,     0,     0,     0,   617,   618,   105,
   622,   624,   626,     0,     0,   630,     0,     0,     0,   645,
     0,     0,     0,     0,   643,   733,   651,    87,    46,    45,
    47,    83,    49,     0,   217,     0,   214,     0,     0,   212,
     0,   172,     0,   186,   185,     0,   246,     0,   244,     0,
     0,     0,     0,   102,    93,    99,   309,     0,   307,     0,
     0,     0,   387,     0,   415,     0,   527,     0,   529,   530,
   558,   566,   559,   561,   560,   564,     0,     0,     0,     0,
   102,     0,   590,     0,     0,     0,   568,     0,     0,     0,
     0,   104,     0,   742,   656,   657,   658,   659,   660,   661,
   662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
   672,   673,   674,   675,     0,   150,     0,     0,     0,     0,
   141,   143,     0,     0,     0,     0,     0,     0,     0,     0,
   110,   111,   139,     0,   136,   723,   569,     0,     0,     0,
    72,   595,     0,     0,   614,   619,   102,   611,     0,     0,
   597,   600,   609,   610,   603,   604,   607,   605,   606,   613,
   612,     0,   615,   102,   621,     0,     0,     0,     0,   629,
   737,     0,     0,   705,   712,   713,   714,     0,    52,     0,
   220,   215,   219,   213,   176,   173,   190,   187,   294,   250,
   293,   245,   254,   247,   253,   271,   248,   286,   249,    94,
     0,   308,   315,   310,   314,     0,     0,     0,     0,   311,
   335,   337,   336,   388,   396,   389,   395,     0,   528,   536,
   531,   535,   534,   562,   567,     0,   635,   634,     0,     0,
     0,     0,     0,     0,   577,   100,   101,   595,   570,   138,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
   132,   134,     0,   158,   156,   153,   155,   154,   742,     0,
   112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   140,   165,    79,    78,    73,     0,    56,    68,     0,     0,
     0,   598,   599,   632,     0,   107,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
     0,     0,     0,    95,     0,   353,   353,   364,   342,     0,
     0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   447,   449,   391,   416,
   470,     0,     0,     0,   102,     0,     0,     0,     0,     0,
     0,   109,     0,     0,     0,     0,   109,   109,     0,   135,
     0,   379,     0,   131,   130,   127,   128,   129,   123,   125,
   124,   126,   119,   120,   115,   118,   121,   116,   122,   157,
   159,   161,     0,   163,     0,     0,   137,     0,     0,    67,
    66,   102,   616,   106,   102,     0,     0,     0,   628,   738,
   739,    84,     0,     0,     0,     0,     0,   102,   102,   102,
   102,     0,     0,     0,   102,   218,   221,     0,     0,   175,
   177,     0,     0,     0,   189,   191,     0,     0,     0,     0,
   292,   295,     0,     0,     0,     0,   105,   105,     0,     0,
   252,   255,     0,     0,     0,   270,   272,     0,     0,     0,
   285,   287,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   724,   325,   313,   316,   370,   370,   370,     0,     0,
     0,     0,     0,   724,     0,     0,     0,   394,   397,   406,
     0,     0,   102,   102,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   425,   102,     0,   478,     0,   485,
     0,   493,   500,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   533,   537,   636,     0,     0,
     0,     0,     0,     0,     0,   148,     0,   149,     0,   145,
     0,     0,     0,   109,   378,     0,   160,   162,     0,     0,
     0,    80,   574,     0,   108,     0,     0,     0,     0,     0,
     0,     0,     0,   102,     0,   102,     0,     0,     0,     0,
     0,     0,   102,     0,     0,     0,   165,   195,     0,     0,
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
     0,   113,   164,     0,   166,   102,     0,     0,     0,    53,
   223,   224,   229,   230,     0,   233,     0,   232,   226,   225,
    85,   227,   222,     0,   231,   179,   178,     0,     0,   192,
   193,   296,   297,   298,   299,   256,   257,     0,     0,     0,
    85,   261,   262,   263,   264,   273,    85,   275,    85,   274,
   289,   288,   290,   330,   328,   329,   320,   318,   319,   317,
   332,   324,   331,   327,   321,     0,     0,     0,     0,     0,
     0,   361,   355,     0,   367,     0,     0,     0,   399,   398,
    85,   400,   401,   404,   405,    85,   402,   403,     0,     0,
     0,   102,     0,     0,     0,     0,     0,     0,   102,     0,
     0,     0,     0,   102,     0,     0,   102,   419,   479,     0,
     0,   102,     0,     0,     0,     0,   420,   486,     0,     0,
     0,     0,     0,   102,   421,   494,     0,     0,     0,     0,
     0,     0,     0,     0,   422,   501,   102,     0,   102,   724,
   724,   724,     0,   724,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   471,   473,   472,   473,     0,   538,
     0,   724,     0,     0,     0,     0,     0,   117,     0,     0,
     0,   152,     0,     0,     0,     0,     0,     0,     0,   102,
   102,     0,   102,   180,   197,   194,   258,     0,   259,     0,
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
   724,     0,   724,     0,     0,     0,     0,     0,   102,     0,
   482,   480,   481,   483,   102,     0,   489,   487,   488,   490,
   491,   102,   498,   496,     0,   495,   497,   505,   504,   506,
     0,     0,   502,   503,     0,     0,     0,   102,     0,     0,
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
     0,     0,     0,   102,     0,     0,     0,     0,   102,     0,
   102,     0,     0,     0,     0,     0,     0,   102,     0,   475,
   476,     0,     0,     0,     0,   542,     0,   544,   541,   724,
     0,     0,     0,     0,   199,   200,   201,   202,   203,   204,
     0,     0,     0,   415,   436,   437,     0,     0,     0,     0,
   435,     0,     0,   415,     0,     0,     0,     0,   102,     0,
     0,   511,   513,     0,   431,     0,   455,   456,   457,     0,
     0,   461,     0,     0,     0,     0,     0,     0,     0,   545,
     0,     0,     0,   146,     0,     0,     0,     0,     0,     0,
     0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   102,     0,     0,     0,   466,
     0,   549,   550,   547,   548,   109,   589,     0,     0,     0,
   266,   357,   369,   427,   438,   439,   440,     0,   415,     0,
   445,   415,   519,   514,   517,   518,   515,   516,   452,   430,
     0,   415,   415,   460,     0,     0,     0,     0,    54,     0,
     0,     0,     0,     0,     0,     0,     0,   465,     0,   592,
     0,     0,     0,   443,   415,   446,   429,     0,     0,   546,
     0,     0,    88,     0,     0,   462,   463,     0,   267,     0,
    60,     0,   444,     0,     0,    89,     0,     0,     0,   442,
   593,    88,     0,     0,   268,     0,     0,     0
};

static const short yydefgoto[] = {  2036,
     1,     2,     3,    22,    23,    24,   110,   186,   187,   935,
  1539,   242,   618,   243,  2012,   244,   499,   773,   920,   349,
   495,   350,   411,   182,   311,  2021,   312,   115,   208,   440,
   490,   491,  1515,   927,   609,   610,   761,  1013,  1533,   762,
   877,   878,  1357,   872,   911,  1035,  1037,   112,   318,   424,
   671,   938,  1071,   113,   319,   429,   673,   939,  1076,  1389,
  1662,  1759,   111,   193,   317,   420,   666,   937,  1067,   114,
   202,   320,   437,   680,   941,  1092,  1400,  1990,  2025,   681,
   942,  1097,  1249,  1409,  1246,  1407,   682,   943,  1102,   676,
   940,  1082,   116,   213,   323,   446,   690,   945,  1115,  1421,
  1265,  1556,   691,   841,  1119,  1291,  1438,  1573,  1116,  1280,
  1563,  1764,  1118,  1285,  1565,  1765,  1281,   763,   117,   218,
   324,   451,   579,   694,   950,  1129,  1295,  1441,  1301,  1446,
   848,   990,  1172,  1173,  1516,  1636,  1734,  1320,  1469,  1322,
  1478,  1324,  1486,  1325,  1496,  1715,  1848,  1903,   118,   223,
   325,   458,   698,   992,  1177,  1519,  1811,  1868,  1956,   119,
   228,   326,   465,    25,   327,   590,   707,    81,   352,   235,
   485,   342,   340,   354,   503,   787,   991,    26,   109,   764,
   279,   169,   170,   280,   281,    27,   172,    59,    60
};

static const short yypact[] = {-32768,
-32768,    61,  4257,  -225,    36,  -157,   931,   120,  4204,   355,
  -109,  -118,   -93,   -85,   -41,   -29,    -7,     6,    85,   181,
    27,-32768,-32768,   241,-32768,-32768,     8,   226,   233,   313,
   487,   500,   505,   507,-32768,   512,   545,   563,   571,   582,
-32768,   589,-32768,   591,   602,   604,   608,   610,   623,   627,
   674,   692,   725,-32768,   298,   435,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   544,    26,-32768,   519,-32768,   503,   551,   560,   564,
-32768,-32768,   517,  2533,  4183,  -112,-32768,-32768,   542,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   355,   355,  -135,    80,
   205,  -183,   -56,   235,   248,   322,   341,   469,   491,   505,
   705,  4183,  4183,   505,   317,    96,   832,  4183,-32768,-32768,
    76,   835,   611,   619,   630,   648,   652,-32768,-32768,-32768,
-32768,-32768,   656,   661,   679,   686,   688,   736,   739,   748,
   756,   761,   775,   781,   784,   786,   792,   797,   804,   805,
   808,   809,   810,  4183,  4183,  4183,  2769,  3026,-32768,   855,
-32768,-32768,   878,  4967,  1063,  2769,    52,   806,   -52,  1066,
-32768,  1071,   110,   820,-32768,-32768,-32768,-32768,-32768,   315,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -148,   823,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   824,  3080,  1375,  1887,   834,   827,  1887,   -90,-32768,
    23,-32768,-32768,   849,-32768,-32768,  4997,   622,-32768,  1085,
  1101,  4183,  4183,   355,  4183,  4183,  4183,  4183,  4183,  4183,
  4183,  4183,  4183,  4183,  4183,  4183,  4183,  4183,  4183,  4183,
  4183,  4183,  4183,  4183,   355,  -159,  -159,  5447,  3026,    29,
-32768,  4183,  4183,  4183,  4183,  4183,  4183,  4183,  4183,  4183,
  4183,  4183,  4183,  4183,  4183,  4183,-32768,-32768,-32768,-32768,
-32768,    12,-32768,  4183,   355,-32768,  2769,-32768,   876,  2031,
   877,   883,-32768,  2481,   887,  4183,   429,   225,   358,   380,
    82,-32768,   880,   778,   881,   844,   851,  4183,  4183,-32768,
-32768,    96,    96,     7,   862,   863,   865,   866,   867,-32768,
    96,  -113,   243,-32768,  1104,  4183,-32768,  2769,-32768,-32768,
-32768,   882,    19,   229,-32768,-32768,   111,   873,   884,  2180,
  4211,   885,  5473,  5499,  5525,  5551,  5577,  5603,  5629,  5655,
  5681,  5707,  4232,  5733,  5759,  5785,  5811,  5837,  5863,  4253,
  4274,  4295,   888,-32768,-32768,  2769,  3324,  1653,  2508,  1193,
  1193,   777,   777,   777,   777,   330,   330,  -159,  -159,  -159,
  -159,  1135,  5889,   890,   159,  4131,  4183,  5027,    98,    98,
   250,   197,  1136,    98,  5915,    34,  1164,  1165,-32768,-32768,
   907,  1168,-32768,-32768,   910,    77,  1171,-32768,-32768,   913,
  1175,  1184,   930,   934,   935,-32768,-32768,   961,   942,   274,
  1206,  1213,   955,   956,-32768,-32768,  1219,   962,-32768,-32768,
-32768,-32768,  1220,   964,   505,   505,-32768,-32768,   505,   968,
   505,   355,  1225,-32768,-32768,-32768,  3373,  2752,  1025,-32768,
    77,-32768,   970,  2769,   971,   972,   974,   275,   980,-32768,
-32768,-32768,-32768,-32768,  1235,   983,   985,   986,   996,-32768,
-32768,   278,  4183,  5941,   176,   269,  1116,-32768,-32768,-32768,
  1240,  4192,-32768,-32768,-32768,  1243,  4183,  4183,  1242,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4183,
-32768,-32768,-32768,-32768,-32768,-32768,  4183,  4183,  4183,  1246,
  3026,-32768,  4183,-32768,  1248,-32768,-32768,-32768,  6487,  5057,
-32768,-32768,  1251,  1252,  1253,  1249,-32768,  1254,  1029,  1001,
-32768,  1259,   153,  1260,-32768,  1261,-32768,  1262,  1272,-32768,
  1279,   153,  1280,-32768,-32768,-32768,    77,  1054,  1283,  1287,
  1286,   153,  1289,-32768,-32768,   153,  1290,-32768,  1030,   153,
  1291,-32768,  1292,  1295,  1296,-32768,  1297,  1298,  1300,  1043,
  4183,  4183,-32768,  1304,  1045,  2769,   367,  2769,  2769,  2769,
  1305,-32768,   834,  4183,  1309,   355,  1076,   284,-32768,  2191,
  1308,  3617,  1318,-32768,    32,-32768,    96,   289,-32768,  2585,
  2585,  1064,  1325,   954,  4183,  4183,-32768,  2585,  4183,  1326,
-32768,-32768,-32768,-32768,  4183,  1327,  1718,-32768,-32768,  1072,
  1073,  1074,  1075,  1083,  1332,-32768,  1081,  4316,  4337,-32768,
  5967,  5993,  6019,  6045,-32768,  6487,-32768,-32768,-32768,-32768,
-32768,  1084,-32768,  1285,-32768,   144,-32768,  1088,  1343,-32768,
   440,-32768,   465,-32768,-32768,   509,-32768,  1346,-32768,   552,
   495,   501,  1347,    77,-32768,-32768,-32768,  1352,-32768,   580,
    55,  1353,-32768,   587,-32768,  1355,-32768,   546,-32768,-32768,
-32768,  1140,-32768,-32768,-32768,-32768,   241,   684,  6071,  1105,
    77,   436,-32768,   506,   513,   523,-32768,  1134,  6097,  1147,
  1154,-32768,  1407,   155,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1158,-32768,  1159,  1161,  1162,  1166,
-32768,-32768,  1413,  2191,  2191,  2191,  2191,  1420,    72,  1423,
  6562,   230,  1172,  1172,-32768,  1174,-32768,  4183,  4183,    33,
-32768,-32768,  1186,    83,-32768,-32768,    77,-32768,   355,   355,
-32768,  6487,  6487,-32768,  6487,-32768,  1427,  1427,  1427,  6487,
-32768,  2769,  6487,    77,-32768,  4183,  4183,  4183,  2769,-32768,
-32768,  4183,  4183,-32768,-32768,-32768,-32768,  4183,-32768,   665,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1439,-32768,-32768,-32768,-32768,  1185,  1188,  1189,  1192,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2706,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  4183,-32768,-32768,  4183,  1196,
  1203,  1204,  1210,  1211,-32768,-32768,-32768,-32768,-32768,-32768,
  1212,  1221,  1212,  2191,  1473,  1475,  1223,  1224,  1241,  1230,
  1230,  1230,  6539,-32768,-32768,-32768,-32768,-32768,     5,  1226,
-32768,  2191,  2191,  2191,  2191,  2191,  2191,  2191,  2191,  2191,
  2191,  2191,  2191,  2191,  2191,  2191,  2191,  1484,  4183,  1796,
-32768,  1229,  6487,  4004,-32768,   305,-32768,-32768,   505,    23,
  1228,-32768,-32768,-32768,   531,-32768,   537,  4358,  4379,  4400,
   541,  6123,  6149,  5087,  1231,-32768,  1247,    63,    43,   419,
   999,   351,   277,-32768,  4177,-32768,-32768,-32768,-32768,   819,
    35,   164,    56,  1232,  1237,  1238,  1239,  1245,  1256,  1266,
  1271,  1278,  1481,  1288,   -51,   -37,   139,  1234,  1293,  1303,
  1306,  1307,  1311,  1312,  1313,  1315,  1255,  1273,  1317,  1319,
  1321,  1322,  1333,  1274,  1277,  1334,-32768,-32768,-32768,-32768,
-32768,   102,  5117,  4421,    77,  2769,  2769,  2769,  2769,   324,
  1335,-32768,  1338,  2800,  1341,  1348,-32768,-32768,  1342,-32768,
  1282,-32768,  2191,  6581,  2835,  2351,  2351,  2351,  1558,  1558,
  1558,  1558,   933,   933,  1230,  1230,  1230,  1230,  1230,-32768,
-32768,-32768,  1350,  6562,   333,  3877,-32768,  4183,  1492,-32768,
-32768,    77,-32768,-32768,    77,  4183,  4183,  4183,-32768,-32768,
-32768,-32768,  1250,    96,    96,    96,    96,    67,   213,    77,
    77,  1351,   505,  1501,   214,-32768,-32768,   135,  1505,-32768,
-32768,  1356,  1513,  1543,-32768,-32768,  1545,    73,  1562,   505,
-32768,-32768,  1571,  1597,  1605,  1357,  1072,  1072,    96,    96,
-32768,-32768,  1622,    37,    45,-32768,-32768,  1629,   505,  1632,
-32768,-32768,  1633,  1634,  1646,   262,   505,   505,  1654,  1656,
    96,  2585,-32768,-32768,-32768,  1432,  1459,  1658,   498,  1657,
   505,    53,   355,  2585,   355,    60,   505,-32768,-32768,-32768,
   505,  1664,    77,    77,  1669,   505,   505,   505,   505,   505,
   505,   505,   505,   505,-32768,    77,  4183,-32768,  4183,-32768,
  4183,-32768,-32768,    96,   355,   505,   505,   505,   505,   505,
   505,   505,   505,   505,   505,   505,   505,   505,   505,  1660,
   505,  1403,  1419,  1399,   505,-32768,-32768,-32768,  4183,  1424,
   549,   559,   561,   590,  1677,-32768,  1422,-32768,  2191,-32768,
  1429,  1436,  1425,-32768,-32768,  3954,-32768,-32768,  2191,  1440,
   593,  6487,-32768,  1434,-32768,  4442,  4463,  4484,    23,  1694,
  1695,  1700,  1701,    77,  1702,    77,  1705,  1707,  1708,   938,
  1709,  1710,    77,  1711,  1720,  1721,  1229,-32768,  1722,  1723,
  1724,  1725,  1727,  1735,  1738,    20,  1461,  1741,  1740,  1767,
  1768,  1769,  1770,-32768,-32768,  1780,-32768,-32768,  1782,  1783,
  1785,  1786,  1787,  1789,  1790,  1791,  1804,  1807,  1808,-32768,
  1809,  1810,  1811,  1812,-32768,  1798,  1815,  1819,  1567,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    96,  1848,-32768,-32768,
  1602,-32768,    96,-32768,-32768,  1606,  1858,  1860,-32768,-32768,
-32768,  1859,  1863,-32768,  1864,-32768,  1865,  1866,  1876,-32768,
  1877,-32768,  1898,  1608,-32768,  1610,  1647,-32768,  1641,  1649,
  1651,  1655,  1665,  1666,  1670,  1672,  1673,  1667,  4505,  1035,
  4526,   848,  4547,   208,   713,  1674,  1685,  1683,  1684,  1686,
  1687,  1693,  1696,  1648,  1699,  1703,  1704,  1706,  1712,  1713,
  1714,  1715,  1692,    68,    68,-32768,  1905,  5147,  1697,  1719,
  1726,  1729,  1730,-32768,    96,  6514,-32768,  4183,-32768,  1957,
  1716,-32768,  6562,    96,-32768,    77,  4183,  4183,  4183,-32768,
-32768,-32768,-32768,-32768,  1731,-32768,  1732,-32768,-32768,-32768,
  1734,-32768,-32768,  1746,-32768,-32768,-32768,  1958,   600,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1960,  1856,  1966,
  1734,-32768,-32768,-32768,-32768,-32768,   601,-32768,   607,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1737,-32768,-32768,-32768,-32768,  1742,  1970,  1989,  1999,  2015,
  2012,-32768,-32768,  2013,-32768,  2016,  2018,   348,-32768,-32768,
   617,-32768,-32768,-32768,-32768,   643,-32768,-32768,  2019,  1758,
  2021,    77,   505,   505,  4183,  4183,  4183,   505,    77,    96,
  2022,  4183,  1774,    77,  4183,  4183,    77,-32768,-32768,  4183,
  1775,    77,  4183,  4183,  4183,  4183,-32768,-32768,  4183,  4183,
  4183,  1776,  4183,    77,-32768,-32768,  4183,  4183,   505,  1777,
  1778,  4183,  4183,  1781,-32768,-32768,    77,  2023,    77,  2585,
  2585,  2585,  4183,  2585,  2024,  2025,   505,   505,  4183,   505,
   505,    96,  2028,  2039,-32768,-32768,-32768,-32768,    16,-32768,
  1784,  2585,  2769,  1795,  2769,  2769,  1788,-32768,  1792,  4568,
  1794,-32768,  2191,  1837,  1834,  5177,  5207,  5237,  1836,    77,
    77,   938,    77,-32768,-32768,-32768,-32768,  2045,-32768,  2049,
-32768,  2095,-32768,  2100,   505,  2099,  2101,-32768,-32768,-32768,
  1851,-32768,-32768,-32768,-32768,-32768,-32768,  1212,  1212,  1212,
    96,-32768,-32768,-32768,   505,-32768,   505,-32768,-32768,-32768,
  1852,  1841,  1847,  4589,  4610,  4631,  1849,  1855,  1850,-32768,
  4652,-32768,  2111,   163,   966,  2112,  4673,-32768,  2113,  1034,
  1160,  1222,  1284,  4694,  1405,  1431,-32768,  1638,  2114,  1766,
  1915,  2115,-32768,-32768,  2017,  2094,-32768,   369,-32768,  1857,
  1867,  1869,  1868,  4715,  1874,-32768,-32768,  1875,  1879,  6175,
  1872,  1873,  1880,   647,-32768,   384,   385,  1861,  1883,-32768,
  4183,  1882,   714,  4183,   720,   724,-32768,  1884,  4183,-32768,
  6562,  1885,-32768,-32768,-32768,-32768,  1888,  1896,  1901,  1902,
  1909,   548,  2117,  1904,-32768,-32768,  1913,-32768,-32768,  2126,
-32768,-32768,  2166,  2167,  2170,  2173,-32768,-32768,  2762,  2174,
  2585,  4183,  2585,  4183,  4183,   505,  2175,   505,    77,  2947,
-32768,-32768,-32768,-32768,    77,  3001,-32768,-32768,-32768,-32768,
-32768,    77,-32768,-32768,  3055,-32768,-32768,-32768,-32768,-32768,
  3240,  3294,-32768,-32768,   747,  2176,  4183,    77,  2177,  2182,
  4183,   355,   355,  4183,  4183,  2183,  2184,  2185,   355,  2190,
  2063,  2192,  1340,-32768,  2193,-32768,-32768,  5267,  2585,  1936,
  5297,  1937,  1939,  1940,  5327,-32768,    23,  2198,  2199,  2205,
  2206,  2209,  4183,  4183,  4183,  4183,  4183,-32768,-32768,  2104,
  2210,-32768,-32768,  1950,  1952,-32768,-32768,-32768,-32768,  2203,
-32768,  1961,  6201,  1984,  4736,  4757,  1991,-32768,  2004,  2003,
-32768,  2005,-32768,   424,-32768,-32768,-32768,-32768,-32768,-32768,
  4778,   434,-32768,-32768,  6227,  2011,  2026,  4799,  4820,-32768,
-32768,-32768,   752,-32768,   355,-32768,   355,  2585,-32768,-32768,
  1613,  1862,-32768,  2008,-32768,-32768,  2027,  2769,  4183,-32768,
  2009,-32768,-32768,-32768,-32768,  2269,  2123,  2154,  2404,  2430,
  2451,  2272,-32768,-32768,  1212,  2033,  2273,  2274,  4183,  4183,
  4183,  4183,  2275,    77,  4183,  2034,  4183,   751,    77,  2276,
    77,  2279,  2281,  2282,  4183,  4183,  2283,    77,   757,-32768,
-32768,  2295,  2297,  2298,    96,-32768,  2046,-32768,-32768,  2585,
  4183,   782,  5357,  4183,-32768,-32768,-32768,-32768,-32768,-32768,
  2041,  2047,  2048,-32768,-32768,-32768,  6253,  6279,  6305,  4841,
-32768,  2052,  4862,-32768,  6331,  2303,  2307,  4183,    77,  2309,
    96,-32768,-32768,  2056,-32768,   437,-32768,-32768,-32768,  6357,
  6383,-32768,  2051,  2310,  2314,  2312,  2315,  2316,  2319,-32768,
  2062,  4883,  2064,-32768,  6409,  2332,  2339,  2341,  3348,  2343,
  2344,  2346,  2585,  2057,  4183,  3533,  2090,  2349,  2350,  2731,
  2361,  2362,  2368,  2369,  2370,    77,  2116,  2118,  2372,-32768,
  2093,-32768,-32768,-32768,-32768,-32768,-32768,  4183,  2119,  2374,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2120,-32768,  6435,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  2129,-32768,-32768,-32768,  2378,  2135,  5387,  4183,-32768,  2337,
  4183,  3587,  2136,  3641,  2399,  3826,  3880,-32768,  2400,-32768,
  4904,   505,  4925,-32768,-32768,-32768,-32768,  2401,  2403,-32768,
  4183,  2406,  2150,  4183,  3934,-32768,-32768,  4946,-32768,  2155,
-32768,  6461,-32768,  4183,  2293,-32768,  2419,  5417,  2428,-32768,
-32768,  2150,  2427,  2171,-32768,  2440,  2443,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  -208,-32768,  -270,-32768,  1370,-32768,-32768,  1371,  -352,
-32768,  -529,-32768,  -406,  -547,   417,-32768,-32768,-32768,-32768,
   645,-32768,  -620,-32768,  -991,-32768,  -710,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1690,-32768,  1233,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1797,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1504,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1114,  -721,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
 -1451,-32768,-32768,-32768,  1111,   939,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   722,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1878,-32768,  1754,-32768,  2338,
-32768,  1870,  2228,  -321,-32768,   425,   114,   -62,-32768,-32768,
   454,  -512,  -502,  -168,   -75,-32768,    -3,   -94,   -10
};


#define	YYLAST		6836


static const short yytable[] = {    28,
   500,    32,   870,  1286,   546,   669,    58,   302,   171,     4,
  1187,   239,   178,   179,   678,  1192,  1193,    72,   478,   795,
  1638,   345,   492,     4,   688,   345,  1397,     4,   692,    89,
   121,     4,   696,   570,   345,   345,     4,     4,   550,     4,
     4,  1244,    29,   880,   881,   882,   883,   189,   195,  1247,
   439,   204,   210,   215,   220,   225,   230,     4,   303,     4,
    -2,   469,   470,   472,     4,     5,     6,    73,    74,    75,
   479,    76,     4,   173,   885,   240,   886,   542,   486,   357,
   196,   197,   498,    11,   183,   771,   239,   918,   615,   486,
     5,     6,    73,    74,    75,   296,    76,   765,    33,   486,
   239,   297,   542,    58,    58,   413,   190,    28,    11,   321,
    28,    28,    28,    28,    28,    28,   231,   775,   776,    29,
   236,   236,   245,   180,  1072,   784,    41,  1679,  1073,  1074,
   181,  1068,  1639,   480,   481,   482,   483,    82,   405,   239,
  1690,   240,   184,  1069,   175,    62,  1696,   919,    61,  1001,
   240,  1003,   484,   176,   487,  1705,    73,    74,    75,   362,
    76,  1711,  1712,  1004,   240,   487,   240,   -62,   608,  1692,
    63,   836,   837,   838,   839,   487,  1174,    29,    64,   496,
   383,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,
  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1175,  1225,  1034,
   543,   544,  1361,   240,   306,   548,  1147,   198,   199,     4,
   404,   774,  1148,   307,   887,     5,     6,    73,    74,    75,
  1149,    76,    65,   188,   194,  1480,  1150,   203,   209,   214,
   219,   224,   229,    11,    66,   486,   486,   351,   171,     4,
   915,   765,   765,   765,   765,     5,     6,    73,    74,    75,
    58,    76,   205,    73,    74,    75,    67,    76,     5,     6,
    73,    74,    75,    11,    76,   486,  1256,   241,   402,    68,
   471,    58,    29,  1426,   346,    83,    11,   386,   346,   770,
  1640,   122,   347,   668,   888,   348,   347,   346,   346,   348,
    71,    30,  1131,   385,   386,  1481,    31,   551,   348,   348,
  1245,    58,  1196,   173,   489,   597,   421,  1075,  1248,   304,
   532,   487,   487,  1134,   206,   489,  1294,   245,    86,   840,
   422,     4,   237,  1300,  1214,   489,     4,  1070,   245,   245,
   245,   794,     5,     6,    73,    74,    75,   245,    76,   248,
   438,   487,   241,    29,   185,     4,   772,  1482,    69,   351,
    11,     5,     6,    73,    74,    75,   241,    76,   241,     4,
    54,   765,  1098,    55,    56,  1529,  1176,   588,  1257,    11,
  1483,  1484,  1099,   310,  1100,   504,   386,    29,  1258,   765,
   765,   765,   765,   765,   765,   765,   765,   765,   765,   765,
   765,   765,   765,   765,   765,   241,  1151,   765,   283,   284,
   285,   286,  1152,   287,   288,   289,   290,   811,   812,   291,
   292,   293,   294,   295,   554,   537,   668,   296,   760,   123,
    29,  1133,    29,   297,   386,  1568,  1569,   712,   563,   714,
   715,   716,  1929,    77,    78,    79,    80,   452,   573,   425,
   614,   181,  1936,   577,    70,   426,  1093,   430,  1094,   581,
   916,   583,   584,   427,   -62,   585,  1095,   587,    58,    84,
   248,   489,   489,  1570,    29,   431,  1239,  1240,   191,   192,
  1216,  1223,  1485,     4,   488,   432,   433,  1571,  1356,     5,
     6,    73,    74,    75,   434,    76,   435,   501,  1363,   423,
   908,   489,   909,    87,   502,     4,    85,    11,   200,   201,
   765,     5,     6,    73,    74,    75,    88,    76,   545,     4,
   416,   721,   207,    90,   417,   181,  1077,  1992,    91,    11,
  1994,    73,    74,    75,   418,    76,  1078,  1079,  1080,   781,
  1996,  1997,   569,   601,   386,   616,   611,   168,   174,   181,
   502,  1101,   723,   502,   171,   171,  1000,   -65,   314,   502,
     4,    92,   171,  2015,   181,   107,     5,     6,    73,    74,
    75,   315,    76,  1039,    73,    74,    75,  1041,    76,    93,
   502,  1671,   316,  1672,    11,   233,   234,    94,   293,   294,
   295,   247,  1185,  1287,   296,   211,   212,    57,    95,   502,
   297,  1198,    73,    74,    75,    96,    76,    97,  1199,    73,
    74,    75,    58,    76,   216,   217,   766,  1288,    98,  1264,
    99,   351,  1572,   245,   100,  1096,   101,   276,   277,   278,
    58,  1298,   428,   925,   129,   130,   131,  1716,   843,   102,
   931,   713,   386,   103,  1717,   853,  1752,  1753,  1754,  1755,
  1756,  1757,  1732,  1735,   436,   133,   134,   135,   136,  1733,
  1733,   138,   139,   140,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   765,    73,    74,    75,
   104,    76,  1846,  1081,   922,   923,   765,    28,  1398,  1847,
   108,   856,  1850,   419,    28,  1945,  1867,  1867,   105,  1851,
   861,   386,  1946,   815,   816,   360,   361,  1381,   363,   364,
   365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
   375,   376,   377,   378,   379,   380,   381,   382,   817,   818,
  1487,   106,   221,   222,   120,   387,   388,   389,   390,   391,
   392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
   766,   766,   766,   766,   226,   227,   890,   403,   826,   827,
   124,  1289,  1290,   408,   828,   829,   351,   168,  1896,   415,
   862,   386,   819,   820,   123,    58,    58,   863,   386,   813,
   128,   467,   468,  1210,  1211,  1212,  1213,   864,   386,   821,
    73,    74,    75,   825,    76,  1043,   386,  1226,   177,   494,
  1488,  1044,  1045,   835,   842,  1049,   386,   847,   125,   850,
   851,   852,  1758,  1350,   386,   823,   824,   126,  1241,  1242,
    82,   127,  1651,  1351,   386,  1352,   386,  1181,  1182,  1183,
  1184,    73,    74,    75,   232,    76,  1897,   246,  1898,   531,
  1263,   249,  1882,   833,   834,  1489,  1673,  1674,  1675,  1899,
   845,   846,  1490,  1491,  1353,   386,  1370,  1365,   386,   539,
   540,   298,  1900,  1545,  1546,  1551,   181,  1201,   250,   164,
   766,  1553,   181,   447,   165,  1492,   251,   166,  1493,  1494,
  1901,  1574,   181,  1326,   299,  1011,   356,   252,   766,   766,
   766,   766,   766,   766,   766,   766,   766,   766,   766,   766,
   766,   766,   766,   766,  1120,   253,   766,  1576,   181,   254,
   448,  1730,  1731,   255,  1121,  1040,   351,   449,   256,   283,
   284,   285,   286,   813,   287,   288,   289,   290,   811,   936,
   291,   292,   293,   294,   295,    34,   257,    35,   296,   459,
   129,   130,     4,   258,   297,   259,   612,  1132,   857,    36,
    37,    38,  1122,  1123,  1124,  1125,  1126,  1127,     4,    54,
   648,   649,    55,    56,  1986,   441,    39,   138,   139,   140,
   141,   142,  1693,   651,  1542,   442,   453,  1495,  1740,   386,
   652,   653,   654,   460,  1742,   386,   656,  1471,  1743,   386,
  1472,   443,   454,   260,  1550,   444,   261,  1621,  1622,  1623,
  1552,  1625,  1554,  1473,  1474,   262,  1431,  1475,  1476,   766,
  1788,  1789,  1434,   263,   455,  1902,  1857,  1858,   264,  1642,
   765,  1914,  1915,   291,   292,   293,   294,   295,  1297,  1660,
  1299,   296,   265,   461,  1575,   462,   171,   297,   266,  1577,
  1698,   267,   450,   268,   708,   709,  1923,   386,   171,   269,
   245,   245,   245,   245,   270,   788,   789,   719,   463,  1221,
  1327,   271,   272,  1130,   245,   273,   274,   275,   456,   301,
   558,   305,   308,   168,   168,   309,  1234,   313,   782,   783,
   322,   168,   785,  1128,  1527,   245,   245,   328,   790,   358,
   793,   341,   343,  1534,  1083,  1251,  1084,  1085,  1086,  1087,
  1088,  1089,  1090,  1259,  1260,   359,   353,   245,   464,   406,
   409,   493,  1477,  1883,   466,   595,   410,  1293,  1296,    58,
   414,    58,  1302,  1303,    40,   473,   474,  1304,   475,   476,
   477,   505,  1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,
  1317,   534,   547,   509,   445,   457,   530,   497,   536,   506,
   245,    58,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1335,
  1336,  1337,  1338,  1339,  1340,  1341,  1699,  1343,   552,   553,
   555,  1347,   556,   557,  1463,   559,   560,  1464,  1772,   561,
  1774,   903,   904,   905,   906,   766,    57,   907,   562,  1589,
  1465,  1466,  1467,   564,   567,   766,   779,   565,   566,   780,
   568,   283,   284,   285,   286,   351,   287,   288,   289,   290,
   571,   683,   291,   292,   293,   294,   295,   572,   574,   575,
   296,   913,   914,   576,   580,   578,   297,   582,  1700,   589,
  1809,   586,   594,   596,   598,   599,  1814,   600,   602,   603,
   604,  1633,   605,   606,   607,   617,   619,   647,   650,   928,
   929,   930,   655,   662,   657,   932,   933,   659,   660,   661,
   663,   934,   664,  1091,   665,   667,   670,   672,   674,   283,
   284,   285,   286,   245,   287,   288,   289,   290,   675,   245,
   291,   292,   293,   294,   295,   677,   679,   684,   296,   685,
  1701,   686,   687,   695,   297,   689,   693,   697,   699,  1468,
  1676,   700,   701,   703,   704,  1861,   705,   706,   710,   993,
   711,   717,   994,   720,   767,  1054,  1055,  1056,  1057,  1058,
  1059,  1060,  1061,  1062,   722,   769,  1063,   777,   831,   778,
   786,   791,  1064,  1926,   800,   794,   796,   797,   798,   801,
  1517,  1517,   129,   130,   131,  1065,   799,   808,   407,   814,
   809,   245,   822,   830,  1643,   860,  1645,  1646,   832,   844,
   245,   849,  1031,   133,   134,   135,   136,  1921,   859,   138,
   139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,  1821,   283,   284,   285,   286,   865,
   287,   288,   289,   290,   854,   867,   291,   292,   293,   294,
   295,  1703,   868,   869,   296,   871,   873,   879,   874,   875,
   297,   921,   884,   876,   171,   171,   171,   889,   171,   910,
  1968,  -676,   924,   287,   288,   289,   290,  1704,   926,   291,
   292,   293,   294,   295,   917,   944,   171,   296,   946,  1582,
  1583,   947,   948,   297,  1587,   949,   245,   283,   284,   285,
   286,   995,   287,   288,   289,   290,   996,   997,   291,   292,
   293,   294,   295,   998,   999,   760,   296,  1005,  1002,  1006,
  1007,  1008,   297,  1009,   907,  1612,  1030,  1145,  1053,  1136,
  1012,  1202,  1036,  1042,  1137,  1138,  1139,  1153,  1203,  1206,
  1207,  1208,  1140,  1628,  1629,  1222,  1631,  1632,   245,  1227,
  1209,  1066,  1266,  1141,  1267,  1268,  1269,  1229,  1162,   283,
   284,   285,   286,  1142,   287,   288,   289,   290,  1143,   766,
   291,   292,   293,   294,   295,  1144,  1163,  1169,   296,  1266,
  1170,  1267,  1268,  1269,   297,  1146,  1195,  1230,  1807,  1231,
  1154,  1667,  1808,  1270,  1271,  1272,  1273,  1274,  1275,  1276,
  1155,  1277,  1278,  1156,  1157,   168,   918,   245,  1158,  1159,
  1160,  1677,  1161,  1678,  1164,  1235,  1165,   168,  1166,  1167,
  1270,  1271,  1272,  1273,  1274,  1275,  1276,   164,  1277,  1278,
  1168,  1171,   165,  1186,  1919,   166,  1188,  1135,  1190,  1194,
  1319,  1236,  1321,   167,  1323,   171,  1191,   171,  1197,  1237,
   283,   284,   285,   286,  1220,   287,   288,   289,   290,  1228,
  1238,   291,   292,   293,   294,   295,  1243,  1796,  1797,   296,
  1943,   330,  1348,  1250,  1803,   297,  1252,  1253,  1254,  1180,
   283,   284,   285,   286,  1706,   287,   288,   289,   290,  1872,
  1255,   291,   292,   293,   294,   295,  1261,   171,  1262,   296,
  1344,  1292,  1346,   171,  1342,   297,   283,   284,   285,   286,
  1305,   287,   288,   289,   290,  1308,  1345,   291,   292,   293,
   294,   295,  1777,  1354,  1779,   296,  1204,  1355,  1349,  1205,
  1360,   297,  1358,  1862,  1359,  1863,  1279,  1364,  1864,  1366,
  1371,  1372,  1215,  1217,  1218,  1219,  1373,  1374,  1376,  1224,
  1859,  1378,  1860,  1379,  1380,  1382,  1383,  1385,    58,    58,
   129,   130,     4,  1282,  1399,    58,  1386,  1387,  1390,  1391,
  1392,  1393,   171,  1394,  1270,  1271,  1272,  1273,  1274,  1275,
  1276,  1395,  1865,   351,  1396,  1401,  1402,   138,   139,   140,
   141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,  1708,  1403,  1404,  1405,  1406,  1306,  1307,  1270,
  1271,  1272,  1273,  1274,  1275,  1276,  1408,  1283,  1410,  1411,
  1318,  1412,  1413,  1414,   171,  1415,  1416,  1417,   129,   130,
   724,    58,  1427,    58,   901,   902,   903,   904,   905,   906,
  1418,  1530,   907,  1419,  1420,  1422,  1423,  1424,  1425,  1428,
  1536,  1537,  1538,  1429,  1430,   138,   139,   140,   141,   142,
   725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
   735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
   745,   746,   747,   748,  1432,   749,   750,   171,  1375,  1433,
  1377,   245,  1436,  1435,  1437,  1439,  1449,  1384,  1450,  1440,
  1442,  1443,  1444,   283,   284,   285,   286,  1866,   287,   288,
   289,   290,  1445,  1447,   291,   292,   293,   294,   295,   284,
   285,   286,   296,   287,   288,   289,   290,   245,   297,   291,
   292,   293,   294,   295,  1448,  1451,  1452,   296,  1584,  1585,
  1586,  1520,  1505,   297,  1453,  1591,  1454,   751,  1594,  1595,
  1455,  1709,  1284,  1597,   752,  1461,  1600,  1601,  1602,  1603,
  1456,  1457,  1604,  1605,  1606,  1458,  1608,  1459,  1460,  1497,
  1610,  1611,  1862,  1498,  1863,  1615,  1616,  1864,  1499,  1500,
  1514,  1501,  1502,   168,   168,   168,  1624,   168,  1503,  1531,
  1522,  1504,  1630,  1506,  1544,   164,  1547,  1548,  1507,  1508,
   165,  1509,  1549,   166,  1532,   168,  1558,  1510,  1511,  1512,
  1513,   792,  1523,  1270,  1271,  1272,  1273,  1274,  1275,  1276,
  1524,  1865,  1525,  1526,  1555,  1559,  1540,  1541,  2013,   181,
  1557,   283,   284,   285,   286,  1560,   287,   288,   289,   290,
  1535,  1543,   291,   292,   293,   294,   295,  1561,  1562,  1564,
   296,  1579,  1566,  1713,  1567,  1578,   297,  1580,  1590,  1619,
  1626,  1627,  1634,   129,   130,     4,   753,  1592,  1598,  1607,
  1613,  1614,   754,   755,  1617,  1635,  1647,  1641,   756,  1663,
  1648,   757,  1650,  1664,  1032,  1033,   758,   759,  1644,   760,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   331,   332,   333,   334,   335,
   336,   337,   338,   339,  1738,  1652,  1581,  1741,  1653,  1665,
  1714,  1657,  1745,  1588,  1666,  1668,  1681,  1669,  1593,  1670,
  1680,  1596,  1682,  1687,  1686,  1688,  1599,  1691,  1694,  1697,
  1707,  1710,  1718,  1760,  1736,  1719,  1869,  1720,  1609,  1876,
  1727,  1728,  1763,  1721,   168,  1773,   168,  1775,  1776,  1723,
  1724,  1618,  1744,  1620,  1725,  1729,  1737,  1739,  1747,  1746,
   283,   284,   285,   286,  1748,   287,   288,   289,   290,  1749,
  1877,   291,   292,   293,   294,   295,  1750,  1751,  1761,   296,
  1791,  1762,  1766,  1767,  1795,   297,  1768,  1798,  1799,  1769,
  1771,  1778,  1790,  1793,  1658,  1659,   168,  1661,  1794,  1800,
  1801,  1802,   168,   129,   130,   724,  1804,  1805,  1806,  1810,
  1815,  1817,  1818,  1819,  1822,  1823,  1827,  1828,  1829,  1830,
  1831,  1824,  1825,  1826,  1832,  1834,  1833,  1835,  1836,  1837,
   138,   139,   140,   141,   142,   725,   726,   727,   728,   729,
   730,   731,   732,   733,   734,   735,   736,   737,   738,   739,
   740,   741,   742,   743,   744,   745,   746,   747,   748,  1839,
   749,   750,   283,   284,   285,   286,  1842,   287,   288,   289,
   290,   168,  1843,   291,   292,   293,   294,   295,  1844,  1853,
  1845,   296,  1873,  1870,  1874,  1875,  1881,   297,   164,  1885,
  1886,  1891,  1905,   165,  1854,  1907,   166,  1908,  1909,  1912,
  1871,   407,  1887,  1888,  1889,  1890,  1884,  1894,  1893,  1916,
  1895,  1917,  1918,  1920,   668,  1927,  1928,  1938,  1910,  1911,
  1934,  1939,   751,  1942,  1944,  1949,  1950,  1951,  1952,   752,
  1969,  1953,  1954,   168,  1922,  1955,  1957,  1925,  1959,   283,
   284,   285,   286,  1780,   287,   288,   289,   290,  1961,  1782,
   291,   292,   293,   294,   295,  1962,  1784,  1963,   296,  1965,
  1966,  1940,  1967,  1972,   297,  1973,  1974,  1985,   283,   284,
   285,   286,  1792,   287,   288,   289,   290,  1976,  1977,   291,
   292,   293,   294,   295,  1978,  1979,  1980,   296,  1984,  1982,
  1989,  1983,  1988,   297,  1998,  1991,   168,  1995,  1970,   283,
   284,   285,   286,  1999,   287,   288,   289,   290,  2002,  2005,
   291,   292,   293,   294,   295,  2007,  2010,  2016,   296,  2017,
  1878,  1987,  2019,  2020,   297,   283,   284,   285,   286,  2026,
   287,   288,   289,   290,  2029,  2030,   291,   292,   293,   294,
   295,   753,  2032,  2034,   296,  2035,  1879,   754,   755,  2037,
   297,  2001,  2038,   756,  2003,   507,   757,  1232,  2033,  1233,
  1117,   758,   759,   912,   760,  1518,  1637,  1880,  1812,  1388,
   855,   810,   238,   702,  2018,   344,     0,  2022,     0,     0,
     0,     0,   718,     0,     0,     0,     0,  2028,     0,     0,
     0,     0,     0,   129,   130,   412,   132,     0,  1892,    55,
     0,     0,     0,  1904,     0,  1906,     0,     0,     0,     0,
     0,     0,  1913,     0,   133,   134,   135,   136,   137,     0,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   129,   130,   131,   132,     0,
     0,    55,     0,  1941,     0,     0,     0,     0,     0,   240,
     0,     0,     0,     0,     0,     0,   133,   134,   135,   136,
   137,     0,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   129,   130,   131,
  1981,   897,   898,   899,   900,     0,     0,   901,   902,   903,
   904,   905,   906,     0,     0,   907,     0,     0,   133,   134,
   135,   136,     0,     0,   138,   139,   140,   141,   142,   143,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   156,   157,   158,   159,   160,   161,   162,   283,
   284,   285,   286,     0,   287,   288,   289,   290,     0,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
     0,     0,     0,     0,   297,   283,   284,   285,   286,     0,
   287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,     0,   283,   284,   285,   286,
   297,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,     0,
   951,   297,   163,     0,     0,     0,     0,     0,    73,    74,
   952,     0,    76,     0,     0,     0,     0,     0,   164,     0,
     0,     0,     0,   165,     0,     0,   166,  1975,     0,     0,
     0,   241,     0,     0,   167,   285,   286,     0,   287,   288,
   289,   290,     0,     0,   291,   292,   293,   294,   295,   592,
     0,     0,   296,     0,   163,     0,   951,     0,   297,     0,
     0,   129,   130,   131,    73,    74,   952,     0,    76,     0,
   164,     0,     0,     0,     0,   165,     0,     0,   166,     0,
     0,     0,   133,   134,   135,   136,   167,     0,   138,   139,
   140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   164,     0,     0,     0,     0,   165,     0,     0,
   166,     0,     0,     0,     0,     0,     0,   953,   167,   954,
   955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
   965,     0,     0,     0,   966,     0,     0,   967,     0,     0,
   968,     0,     0,   969,     0,   970,   971,   972,   973,   974,
   975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
   985,     0,     0,     0,   986,     0,     0,     0,     0,   987,
     0,     0,   988,   953,     0,   954,   955,   956,   957,   958,
   959,   960,   961,   962,   963,   964,   965,     0,     0,     0,
   966,     0,     0,   967,     0,     0,   968,     0,     0,   969,
     0,   970,   971,   972,   973,   974,   975,   976,   977,   978,
   979,   980,   981,   982,   983,   984,   985,     0,     0,     0,
   986,   951,     0,     0,     0,   987,     0,     0,   988,    73,
    74,   952,     0,    76,     0,     0,   283,   284,   285,   286,
   989,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   283,   284,   285,
   286,   297,   287,   288,   289,   290,     0,     0,   291,   292,
   293,   294,   295,     0,     0,   951,   296,     0,   593,     0,
     0,     0,   297,    73,    74,   952,   164,    76,     0,     0,
     0,   165,     0,     0,   166,     0,  1770,     0,     0,     0,
     0,     0,     0,   282,   891,   892,   893,   894,   895,   896,
   897,   898,   899,   900,     0,     0,   901,   902,   903,   904,
   905,   906,     0,     0,   907,     0,     0,     0,     0,   951,
     0,     0,     0,     0,     0,  1189,     0,    73,    74,   952,
     0,    76,   894,   895,   896,   897,   898,   899,   900,     0,
     0,   901,   902,   903,   904,   905,   906,   329,   953,   907,
   954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
   964,   965,     0,     0,     0,   966,     0,     0,   967,     0,
     0,   968,     0,     0,   969,     0,   970,   971,   972,   973,
   974,   975,   976,   977,   978,   979,   980,   981,   982,   983,
   984,   985,     0,     0,     0,   986,     0,     0,     0,     0,
   987,     0,   953,   988,   954,   955,   956,   957,   958,   959,
   960,   961,   962,   963,   964,   965,     0,     0,     0,   966,
     0,     0,   967,     0,     0,   968,     0,     0,   969,     0,
   970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
   980,   981,   982,   983,   984,   985,     0,     0,     0,   986,
     0,     0,     0,     0,   987,     0,   953,   988,   954,   955,
   956,   957,   958,   959,   960,   961,   962,   963,   964,   965,
     0,  1781,     0,   966,     0,     0,   967,     0,     0,   968,
     0,     0,   969,     0,   970,   971,   972,   973,   974,   975,
   976,   977,   978,   979,   980,   981,   982,   983,   984,   985,
     0,     0,     0,   986,   951,     0,     0,     0,   987,     0,
     0,   988,    73,    74,   952,     0,    76,     0,     0,     0,
     0,   283,   284,   285,   286,  1783,   287,   288,   289,   290,
     0,     0,   291,   292,   293,   294,   295,     0,     0,     0,
   296,     0,     0,     0,     0,     0,   297,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   951,     0,
     0,     0,     0,     0,     0,     0,    73,    74,   952,     0,
    76,     0,     0,     0,     0,   283,   284,   285,   286,  1785,
   287,   288,   289,   290,     0,     0,   291,   292,   293,   294,
   295,   533,     0,     0,   296,     0,     0,     0,     0,     0,
   297,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   951,     0,     0,     0,     0,     0,     0,     0,
    73,    74,   952,     0,    76,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   591,   953,     0,   954,   955,   956,   957,   958,   959,   960,
   961,   962,   963,   964,   965,     0,     0,     0,   966,     0,
     0,   967,     0,     0,   968,     0,     0,   969,     0,   970,
   971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
   981,   982,   983,   984,   985,     0,     0,     0,   986,     0,
     0,     0,     0,   987,     0,   953,   988,   954,   955,   956,
   957,   958,   959,   960,   961,   962,   963,   964,   965,     0,
     0,     0,   966,     0,     0,   967,     0,     0,   968,     0,
     0,   969,     0,   970,   971,   972,   973,   974,   975,   976,
   977,   978,   979,   980,   981,   982,   983,   984,   985,     0,
     0,     0,   986,     0,     0,     0,     0,   987,     0,   953,
   988,   954,   955,   956,   957,   958,   959,   960,   961,   962,
   963,   964,   965,     0,  1786,     0,   966,     0,     0,   967,
     0,     0,   968,     0,     0,   969,     0,   970,   971,   972,
   973,   974,   975,   976,   977,   978,   979,   980,   981,   982,
   983,   984,   985,     0,     0,     0,   986,   951,     0,     0,
     0,   987,     0,     0,   988,    73,    74,   952,     0,    76,
     0,     0,     0,     0,     0,     0,     0,     0,  1787,   283,
   284,   285,   286,     0,   287,   288,   289,   290,     0,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
     0,     0,     0,     0,   297,     0,     0,     0,     0,     0,
     0,   951,     0,     0,     0,     0,     0,     0,     0,    73,
    74,   952,     0,    76,     0,     0,     0,     0,   283,   284,
   285,   286,  1964,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,   768,     0,     0,   296,     0,     0,
     0,     0,     0,   297,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   951,     0,     0,     0,     0,
     0,     0,     0,    73,    74,   952,     0,    76,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   953,     0,   954,   955,   956,   957,
   958,   959,   960,   961,   962,   963,   964,   965,     0,     0,
     0,   966,     0,     0,   967,     0,     0,   968,     0,     0,
   969,     0,   970,   971,   972,   973,   974,   975,   976,   977,
   978,   979,   980,   981,   982,   983,   984,   985,     0,     0,
     0,   986,     0,     0,     0,     0,   987,     0,   953,   988,
   954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
   964,   965,     0,     0,     0,   966,     0,     0,   967,     0,
     0,   968,     0,     0,   969,     0,   970,   971,   972,   973,
   974,   975,   976,   977,   978,   979,   980,   981,   982,   983,
   984,   985,     0,     0,     0,   986,     0,     0,     0,     0,
   987,     0,   953,   988,   954,   955,   956,   957,   958,   959,
   960,   961,   962,   963,   964,   965,     0,  1971,     0,   966,
     0,     0,   967,     0,     0,   968,     0,     0,   969,     0,
   970,   971,   972,   973,   974,   975,   976,   977,   978,   979,
   980,   981,   982,   983,   984,   985,     0,     0,     0,   986,
   951,     0,     0,     0,   987,     0,     0,   988,    73,    74,
   952,     0,    76,     0,     0,     0,     0,     0,     0,     0,
     0,  2004,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,   129,
   130,   131,     0,     0,   951,     0,     0,     0,     0,     0,
     0,     0,    73,    74,   952,     0,    76,     0,     0,     0,
   133,   134,   135,   136,     0,  2006,   138,   139,   140,   141,
   142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,     0,     0,     0,     0,     0,     0,     0,   951,     0,
     0,     0,     0,     0,     0,  1200,    73,    74,   952,     0,
    76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,  1362,     0,     0,     0,     0,     0,   953,     0,   954,
   955,   956,   957,   958,   959,   960,   961,   962,   963,   964,
   965,     0,     0,     0,   966,     0,     0,   967,     0,     0,
   968,     0,     0,   969,     0,   970,   971,   972,   973,   974,
   975,   976,   977,   978,   979,   980,   981,   982,   983,   984,
   985,  1038,     0,     0,   986,     0,     0,     0,     0,   987,
     0,   953,   988,   954,   955,   956,   957,   958,   959,   960,
   961,   962,   963,   964,   965,     0,     0,     0,   966,     0,
     0,   967,     0,     0,   968,     0,     0,   969,     0,   970,
   971,   972,   973,   974,   975,   976,   977,   978,   979,   980,
   981,   982,   983,   984,   985,     0,     0,     0,   986,     0,
     0,     0,     0,   987,     0,   953,   988,   954,   955,   956,
   957,   958,   959,   960,   961,   962,   963,   964,   965,     0,
  2008,     0,   966,     0,     0,   967,     0,     0,   968,     0,
     0,   969,     0,   970,   971,   972,   973,   974,   975,   976,
   977,   978,   979,   980,   981,   982,   983,   984,   985,     0,
     0,     0,   986,     0,   164,     0,     0,   987,     0,   165,
   988,     0,   166,   129,   130,     4,   538,     0,     0,     0,
     0,     0,     0,     0,  2009,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   161,   162,   129,   130,     4,   891,   892,
   893,   894,   895,   896,   897,   898,   899,   900,  2023,     0,
   901,   902,   903,   904,   905,   906,    42,     0,   907,     0,
    43,     0,   138,   139,   140,   141,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,     0,     0,   283,
   284,   285,   286,     0,   287,   288,   289,   290,     0,     0,
   291,   292,   293,   294,   295,     0,     0,  1103,   296,  1104,
  1105,     4,  1106,     0,   297,    44,   620,     5,     6,     0,
     0,    45,  1107,     0,     0,     7,     8,     9,    10,     0,
     0,     0,     0,     0,    46,    11,    47,     0,     0,  1108,
  1109,  1110,     0,     0,     0,     0,     0,     0,    48,     0,
     0,     0,    49,     0,     0,     0,  1111,     0,     0,     0,
     0,     0,     0,     0,    50,     0,     0,     0,    12,     0,
     0,     0,     0,     0,    13,     0,     0,   621,     0,     0,
     0,     0,     0,     0,     0,    51,     0,    14,     0,    15,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    16,     0,     0,     0,    17,     0,     0,     0,   622,
     0,     0,  1112,     0,     0,     0,     0,    18,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   164,     0,
     0,     0,     0,   165,     0,     0,   166,     0,    19,   623,
    52,     0,    53,     0,     0,     0,     0,     0,     0,     0,
   624,   625,   626,   627,   628,   629,   630,   631,   632,   633,
   634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
   644,   645,   646,     0,     0,     0,     0,     0,     0,     0,
   164,     0,     0,     0,  1113,   165,     0,     0,   166,     0,
     0,  1114,     0,    20,     0,    21,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   283,   284,   285,
   286,   297,   287,   288,   289,   290,   508,     0,   291,   292,
   293,   294,   295,     0,     0,     0,   296,     0,   283,   284,
   285,   286,   297,   287,   288,   289,   290,   520,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,   283,
   284,   285,   286,   297,   287,   288,   289,   290,   527,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
   283,   284,   285,   286,   297,   287,   288,   289,   290,   528,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   283,   284,   285,   286,   297,   287,   288,   289,   290,
   529,     0,   291,   292,   293,   294,   295,     0,     0,     0,
   296,     0,   283,   284,   285,   286,   297,   287,   288,   289,
   290,   802,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,   283,   284,   285,   286,   297,   287,   288,
   289,   290,   803,     0,   291,   292,   293,   294,   295,     0,
     0,     0,   296,     0,   283,   284,   285,   286,   297,   287,
   288,   289,   290,  1046,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,   283,   284,   285,   286,   297,
   287,   288,   289,   290,  1047,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,     0,   283,   284,   285,   286,
   297,   287,   288,   289,   290,  1048,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   283,   284,   285,
   286,   297,   287,   288,   289,   290,  1179,     0,   291,   292,
   293,   294,   295,     0,     0,     0,   296,     0,   283,   284,
   285,   286,   297,   287,   288,   289,   290,  1367,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,   283,
   284,   285,   286,   297,   287,   288,   289,   290,  1368,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
   283,   284,   285,   286,   297,   287,   288,   289,   290,  1369,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   283,   284,   285,   286,   297,   287,   288,   289,   290,
  1462,     0,   291,   292,   293,   294,   295,     0,     0,     0,
   296,     0,   283,   284,   285,   286,   297,   287,   288,   289,
   290,  1470,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,   283,   284,   285,   286,   297,   287,   288,
   289,   290,  1479,     0,   291,   292,   293,   294,   295,     0,
     0,     0,   296,     0,   283,   284,   285,   286,   297,   287,
   288,   289,   290,  1649,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,   283,   284,   285,   286,   297,
   287,   288,   289,   290,  1683,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,     0,   283,   284,   285,   286,
   297,   287,   288,   289,   290,  1684,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   283,   284,   285,
   286,   297,   287,   288,   289,   290,  1685,     0,   291,   292,
   293,   294,   295,     0,     0,     0,   296,     0,   283,   284,
   285,   286,   297,   287,   288,   289,   290,  1689,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,   283,
   284,   285,   286,   297,   287,   288,   289,   290,  1695,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
   283,   284,   285,   286,   297,   287,   288,   289,   290,  1702,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   283,   284,   285,   286,   297,   287,   288,   289,   290,
  1722,     0,   291,   292,   293,   294,   295,     0,     0,     0,
   296,     0,   283,   284,   285,   286,   297,   287,   288,   289,
   290,  1840,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,   283,   284,   285,   286,   297,   287,   288,
   289,   290,  1841,     0,   291,   292,   293,   294,   295,     0,
     0,     0,   296,     0,   283,   284,   285,   286,   297,   287,
   288,   289,   290,  1849,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,   283,   284,   285,   286,   297,
   287,   288,   289,   290,  1855,     0,   291,   292,   293,   294,
   295,     0,     0,     0,   296,     0,   283,   284,   285,   286,
   297,   287,   288,   289,   290,  1856,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   283,   284,   285,
   286,   297,   287,   288,   289,   290,  1933,     0,   291,   292,
   293,   294,   295,     0,     0,     0,   296,     0,   283,   284,
   285,   286,   297,   287,   288,   289,   290,  1935,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,   283,
   284,   285,   286,   297,   287,   288,   289,   290,  1958,     0,
   291,   292,   293,   294,   295,     0,     0,     0,   296,     0,
   283,   284,   285,   286,   297,   287,   288,   289,   290,  2011,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,   283,   284,   285,   286,   297,   287,   288,   289,   290,
  2014,     0,   291,   292,   293,   294,   295,     0,     0,     0,
   296,     0,   283,   284,   285,   286,   297,   287,   288,   289,
   290,  2024,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,   300,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,   355,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,   541,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,   658,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1052,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1178,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1521,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1654,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1655,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1656,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1813,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1816,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1820,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  1924,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  2000,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,     0,     0,
     0,  2031,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,   384,     0,     0,     0,   297,   283,   284,
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
     0,   296,     0,     0,     0,   519,     0,   297,   283,   284,
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
     0,   526,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,   535,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,   549,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   613,     0,     0,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,   804,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,   805,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,   806,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,   807,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,   858,     0,     0,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,   866,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,  1050,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,  1051,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,  1726,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,  1838,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,  1852,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,  1930,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,  1931,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,  1932,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,  1937,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,  1947,     0,   297,   283,   284,
   285,   286,     0,   287,   288,   289,   290,     0,     0,   291,
   292,   293,   294,   295,     0,     0,     0,   296,     0,     0,
     0,  1948,     0,   297,   283,   284,   285,   286,     0,   287,
   288,   289,   290,     0,     0,   291,   292,   293,   294,   295,
     0,     0,     0,   296,     0,     0,     0,  1960,     0,   297,
   283,   284,   285,   286,     0,   287,   288,   289,   290,     0,
     0,   291,   292,   293,   294,   295,     0,     0,     0,   296,
     0,     0,     0,  1993,     0,   297,   283,   284,   285,   286,
     0,   287,   288,   289,   290,     0,     0,   291,   292,   293,
   294,   295,     0,     0,     0,   296,     0,     0,     0,  2027,
     0,   297,   283,   284,   285,   286,     0,   287,   288,   289,
   290,     0,     0,   291,   292,   293,   294,   295,     0,     0,
     0,   296,     0,     0,     0,     0,     0,   297,   891,   892,
   893,   894,   895,   896,   897,   898,   899,   900,     0,     0,
   901,   902,   903,   904,   905,   906,     0,     0,   907,     0,
     0,     0,  1528,   891,   892,   893,   894,   895,   896,   897,
   898,   899,   900,     0,     0,   901,   902,   903,   904,   905,
   906,     0,     0,   907,     0,  1010,   891,   892,   893,   894,
   895,   896,   897,   898,   899,   900,     0,     0,   901,   902,
   903,   904,   905,   906,     0,     0,   907,   893,   894,   895,
   896,   897,   898,   899,   900,     0,     0,   901,   902,   903,
   904,   905,   906,     0,     0,   907
};

static const short yycheck[] = {     3,
   353,     5,   724,  1118,   411,   553,    10,   176,    84,     5,
  1002,     5,   107,   108,   562,  1007,  1008,    21,   340,   640,
     5,     3,   344,     5,   572,     3,     7,     5,   576,    33,
     5,     5,   580,   440,     3,     3,     5,     5,     5,     5,
     5,     5,   268,   754,   755,   756,   757,   110,   111,     5,
   321,   114,   115,   116,   117,   118,   119,     5,     7,     5,
     0,   332,   333,   334,     5,    11,    12,    13,    14,    15,
   341,    17,     5,    84,     3,    69,     5,     5,    23,   248,
   264,   265,    64,    29,     5,   615,     5,     5,   495,    23,
    11,    12,    13,    14,    15,   255,    17,   610,   256,    23,
     5,   261,     5,   107,   108,   314,   110,   111,    29,   258,
   114,   115,   116,   117,   118,   119,   120,   620,   621,   268,
   124,   125,   126,   259,    82,   628,     7,  1579,    86,    87,
   266,    69,   117,   247,   248,   249,   250,    24,   307,     5,
  1592,    69,    63,    81,   257,   264,  1598,    65,   258,   871,
    69,   873,   266,   266,    99,  1607,    13,    14,    15,   254,
    17,  1613,  1614,   874,    69,    99,    69,   258,   490,     7,
   264,   117,   118,   119,   120,    99,    75,   268,   264,   348,
   275,   892,   893,   894,   895,   896,   897,   898,   899,   900,
   901,   902,   903,   904,   905,   906,   907,    96,    64,   910,
   409,   410,  1194,    69,   257,   414,   258,   264,   265,     5,
   305,   618,   264,   266,   143,    11,    12,    13,    14,    15,
   258,    17,   264,   110,   111,    18,   264,   114,   115,   116,
   117,   118,   119,    29,   264,    23,    23,   241,   314,     5,
   770,   754,   755,   756,   757,    11,    12,    13,    14,    15,
   254,    17,     5,    13,    14,    15,   264,    17,    11,    12,
    13,    14,    15,    29,    17,    23,     5,   261,   257,   264,
   264,   275,   268,  1265,   256,   268,    29,   266,   256,   248,
   265,   256,   264,   264,   213,   267,   264,   256,   256,   267,
   264,   256,   258,   265,   266,    88,   261,   264,   267,   267,
   264,   305,  1013,   314,   249,   474,    82,   265,   264,   258,
   386,    99,    99,   258,    67,   249,   264,   321,     6,   265,
    96,     5,     6,   264,   258,   249,     5,   265,   332,   333,
   334,   264,    11,    12,    13,    14,    15,   341,    17,   264,
   259,    99,   261,   268,   265,     5,   617,   140,   264,   353,
    29,    11,    12,    13,    14,    15,   261,    17,   261,     5,
     6,   874,    86,     9,    10,  1357,   265,   462,   107,    29,
   163,   164,    96,   264,    98,   265,   266,   268,   117,   892,
   893,   894,   895,   896,   897,   898,   899,   900,   901,   902,
   903,   904,   905,   906,   907,   261,   258,   910,   236,   237,
   238,   239,   264,   241,   242,   243,   244,   264,   265,   247,
   248,   249,   250,   251,   418,   257,   264,   255,   264,   256,
   268,   258,   268,   261,   266,    78,    79,   596,   432,   598,
   599,   600,  1884,   193,   194,   195,   196,   324,   442,    82,
   265,   266,  1894,   447,   264,    88,    96,    68,    98,   453,
   772,   455,   456,    96,   258,   459,   106,   461,   462,   234,
   264,   249,   249,   116,   268,    86,  1087,  1088,   264,   265,
   258,   258,   265,     5,   232,    96,    97,   130,  1189,    11,
    12,    13,    14,    15,   105,    17,   107,   259,  1199,   265,
   261,   249,   263,     7,   266,     5,   264,    29,   264,   265,
  1013,    11,    12,    13,    14,    15,     7,    17,   259,     5,
    82,   606,   265,     7,    86,   266,    98,  1969,     7,    29,
  1972,    13,    14,    15,    96,    17,   108,   109,   110,   624,
  1982,  1983,   259,   259,   266,   267,   259,    84,    85,   266,
   266,   265,   259,   266,   620,   621,   868,   259,   234,   266,
     5,     7,   628,  2005,   266,   258,    11,    12,    13,    14,
    15,   247,    17,   259,    13,    14,    15,   920,    17,     7,
   266,  1563,   258,  1565,    29,   122,   123,     7,   249,   250,
   251,   128,   259,    86,   255,   264,   265,   233,     7,   266,
   261,   259,    13,    14,    15,     7,    17,     7,   266,    13,
    14,    15,   606,    17,   264,   265,   610,   110,     7,  1112,
     7,   615,   265,   617,     7,   265,     7,   164,   165,   166,
   624,  1124,   265,   792,     3,     4,     5,   259,   691,     7,
   799,   265,   266,     7,   266,   698,    89,    90,    91,    92,
    93,    94,   259,   259,   265,    24,    25,    26,    27,   266,
   266,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
    49,    50,    51,    52,    53,    54,  1189,    13,    14,    15,
     7,    17,   259,   265,   779,   780,  1199,   691,  1236,   266,
   256,     8,   259,   265,   698,   259,  1811,  1812,     7,   266,
   265,   266,   266,   264,   265,   252,   253,  1220,   255,   256,
   257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
   267,   268,   269,   270,   271,   272,   273,   274,   264,   265,
    18,     7,   264,   265,   191,   282,   283,   284,   285,   286,
   287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
   754,   755,   756,   757,   264,   265,   760,   304,   264,   265,
   258,   264,   265,   310,   264,   265,   770,   314,    18,   316,
   265,   266,   264,   265,   256,   779,   780,   265,   266,   666,
   264,   328,   329,  1054,  1055,  1056,  1057,   265,   266,   676,
    13,    14,    15,   680,    17,   265,   266,  1068,   257,   346,
    88,   265,   266,   690,   691,   265,   266,   694,   258,   264,
   265,   698,   265,   265,   266,   264,   265,   258,  1089,  1090,
   707,   258,  1533,   265,   266,   265,   266,   996,   997,   998,
   999,    13,    14,    15,   130,    17,    86,     6,    88,   386,
  1111,     7,  1834,   264,   265,   133,  1568,  1569,  1570,    99,
   264,   265,   140,   141,   265,   266,  1209,   265,   266,   406,
   407,     7,   112,   264,   265,   265,   266,  1036,   258,   248,
   874,   265,   266,    96,   253,   163,   258,   256,   166,   167,
   130,   265,   266,  1154,     7,   889,   265,   258,   892,   893,
   894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
   904,   905,   906,   907,    86,   258,   910,   265,   266,   258,
   133,   265,   266,   258,    96,   919,   920,   140,   258,   236,
   237,   238,   239,   810,   241,   242,   243,   244,   264,   265,
   247,   248,   249,   250,   251,     5,   258,     7,   255,    96,
     3,     4,     5,   258,   261,   258,   493,   951,   265,    19,
    20,    21,   134,   135,   136,   137,   138,   139,     5,     6,
   507,   508,     9,    10,  1956,    86,    36,    30,    31,    32,
    33,    34,     7,   520,  1381,    96,    96,   265,   265,   266,
   527,   528,   529,   140,   265,   266,   533,   140,   265,   266,
   143,   112,   112,   258,  1401,   116,   258,  1500,  1501,  1502,
  1407,  1504,  1409,   156,   157,   258,  1277,   160,   161,  1013,
   264,   265,  1283,   258,   134,   265,   265,   266,   258,  1522,
  1533,   265,   266,   247,   248,   249,   250,   251,  1123,  1542,
  1125,   255,   258,   190,  1441,   192,  1112,   261,   258,  1446,
     7,   258,   265,   258,   591,   592,   265,   266,  1124,   258,
  1054,  1055,  1056,  1057,   258,   631,   632,   604,   215,  1063,
  1155,   258,   258,   950,  1068,   258,   258,   258,   188,     7,
   426,   266,     7,   620,   621,     5,  1080,   258,   625,   626,
   258,   628,   629,   265,  1355,  1089,  1090,   264,   635,     5,
   637,   258,   266,  1364,    96,  1099,    98,    99,   100,   101,
   102,   103,   104,  1107,  1108,     5,   258,  1111,   265,   234,
   234,     8,   265,  1835,   264,   471,   234,  1121,  1122,  1123,
   234,  1125,  1126,  1127,   194,   264,   264,  1131,   264,   264,
   264,   259,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,
  1144,     7,     7,   259,   265,   265,   259,   266,   259,   266,
  1154,  1155,  1156,  1157,  1158,  1159,  1160,  1161,  1162,  1163,
  1164,  1165,  1166,  1167,  1168,  1169,     7,  1171,     5,     5,
   264,  1175,     5,   264,   140,     5,   264,   143,  1681,     5,
  1683,   249,   250,   251,   252,  1189,   233,   255,     5,  1460,
   156,   157,   158,   264,   234,  1199,   243,   264,   264,   246,
   259,   236,   237,   238,   239,  1209,   241,   242,   243,   244,
     5,   567,   247,   248,   249,   250,   251,     5,   264,   264,
   255,   768,   769,     5,     5,   264,   261,   264,     7,     5,
  1733,   264,   208,   264,   264,   264,  1739,   264,   259,     5,
   258,  1512,   258,   258,   249,   130,     7,     5,     7,   796,
   797,   798,     7,     5,     7,   802,   803,     7,     7,     7,
     7,   808,   234,   265,   264,     7,     7,     7,     7,   236,
   237,   238,   239,  1277,   241,   242,   243,   244,     7,  1283,
   247,   248,   249,   250,   251,     7,     7,   234,   255,     7,
     7,     5,     7,   264,   261,     7,     7,     7,     7,   265,
  1571,     7,     7,     7,     7,  1808,     7,   265,     5,   856,
   266,     7,   859,     5,     7,    69,    70,    71,    72,    73,
    74,    75,    76,    77,   249,     8,    80,   264,   684,     5,
     5,     5,    86,  1881,     3,   264,   264,   264,   264,   259,
  1344,  1345,     3,     4,     5,    99,   264,   264,   261,     7,
    66,  1355,     7,     7,  1523,   711,  1525,  1526,     7,     7,
  1364,     7,   909,    24,    25,    26,    27,  1870,   264,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
    51,    52,    53,    54,  1747,   236,   237,   238,   239,   266,
   241,   242,   243,   244,   265,   259,   247,   248,   249,   250,
   251,     7,   259,     7,   255,   258,   258,     5,   258,   258,
   261,   777,     3,   258,  1500,  1501,  1502,     5,  1504,   258,
  1933,   258,     6,   241,   242,   243,   244,     7,   794,   247,
   248,   249,   250,   251,   259,     7,  1522,   255,   264,  1453,
  1454,   264,   264,   261,  1458,   264,  1460,   236,   237,   238,
   239,   266,   241,   242,   243,   244,   264,   264,   247,   248,
   249,   250,   251,   264,   264,   264,   255,     5,   258,     5,
   258,   258,   261,   243,   255,  1489,     3,     7,   258,   258,
   265,  1038,   264,   266,   258,   258,   258,   264,     7,  1046,
  1047,  1048,   258,  1507,  1508,     5,  1510,  1511,  1512,     5,
   261,   265,    81,   258,    83,    84,    85,     5,   264,   236,
   237,   238,   239,   258,   241,   242,   243,   244,   258,  1533,
   247,   248,   249,   250,   251,   258,   264,   264,   255,    81,
   264,    83,    84,    85,   261,   258,   265,     5,   209,     5,
   258,  1555,   213,   122,   123,   124,   125,   126,   127,   128,
   258,   130,   131,   258,   258,  1112,     5,  1571,   258,   258,
   258,  1575,   258,  1577,   258,     5,   258,  1124,   258,   258,
   122,   123,   124,   125,   126,   127,   128,   248,   130,   131,
   258,   258,   253,   259,  1865,   256,   259,   953,   258,   258,
  1147,     5,  1149,   264,  1151,  1681,   259,  1683,   259,     5,
   236,   237,   238,   239,   264,   241,   242,   243,   244,   264,
   264,   247,   248,   249,   250,   251,     5,  1722,  1723,   255,
  1901,   257,  1179,     5,  1729,   261,     5,     5,     5,   995,
   236,   237,   238,   239,     7,   241,   242,   243,   244,  1818,
     5,   247,   248,   249,   250,   251,     3,  1733,     3,   255,
   258,     5,   264,  1739,     5,   261,   236,   237,   238,   239,
     7,   241,   242,   243,   244,     7,   258,   247,   248,   249,
   250,   251,  1686,     7,  1688,   255,  1042,   266,   265,  1045,
   266,   261,   264,    81,   259,    83,   265,   258,    86,   266,
     7,     7,  1058,  1059,  1060,  1061,     7,     7,     7,  1065,
  1805,     7,  1807,     7,     7,     7,     7,     7,  1722,  1723,
     3,     4,     5,   265,   264,  1729,     7,     7,     7,     7,
     7,     7,  1808,     7,   122,   123,   124,   125,   126,   127,
   128,     7,   130,  1747,     7,     5,     7,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
    53,    54,     7,     7,     7,     7,     7,  1133,  1134,   122,
   123,   124,   125,   126,   127,   128,     7,   130,     7,     7,
  1146,     7,     7,     7,  1870,     7,     7,     7,     3,     4,
     5,  1805,     5,  1807,   247,   248,   249,   250,   251,   252,
     7,  1358,   255,     7,     7,     7,     7,     7,     7,     5,
  1367,  1368,  1369,     5,   258,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
    55,    56,    57,    58,     7,    60,    61,  1933,  1214,   258,
  1216,  1865,     5,   258,     5,     7,   259,  1223,   259,     7,
     7,     7,     7,   236,   237,   238,   239,   265,   241,   242,
   243,   244,     7,     7,   247,   248,   249,   250,   251,   237,
   238,   239,   255,   241,   242,   243,   244,  1901,   261,   247,
   248,   249,   250,   251,     7,   259,   266,   255,  1455,  1456,
  1457,     7,   265,   261,   266,  1462,   266,   122,  1465,  1466,
   266,     7,   265,  1470,   129,   259,  1473,  1474,  1475,  1476,
   266,   266,  1479,  1480,  1481,   266,  1483,   266,   266,   266,
  1487,  1488,    81,   259,    83,  1492,  1493,    86,   266,   266,
   259,   266,   266,  1500,  1501,  1502,  1503,  1504,   266,     3,
   264,   266,  1509,   265,     7,   248,     7,   112,   266,   266,
   253,   266,     7,   256,   259,  1522,     7,   266,   266,   266,
   266,   264,   264,   122,   123,   124,   125,   126,   127,   128,
   265,   130,   264,   264,   258,     7,   266,   266,  2002,   266,
   259,   236,   237,   238,   239,     7,   241,   242,   243,   244,
  1366,   266,   247,   248,   249,   250,   251,     3,     7,     7,
   255,   264,     7,     7,     7,     7,   261,     7,     7,     7,
     7,     7,     5,     3,     4,     5,   241,   264,   264,   264,
   264,   264,   247,   248,   264,     7,   259,   264,   253,     5,
   259,   256,   259,     5,   259,   260,   261,   262,   264,   264,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,   199,   200,   201,   202,   203,
   204,   205,   206,   207,  1641,   259,  1452,  1644,   265,     5,
     7,   266,  1649,  1459,     5,     7,   266,     7,  1464,   259,
   259,  1467,   266,   259,   266,   266,  1472,     7,     7,     7,
     7,     7,   266,     7,   264,   259,   265,   259,  1484,     7,
   259,   259,     7,   266,  1681,  1682,  1683,  1684,  1685,   266,
   266,  1497,   259,  1499,   266,   266,   264,   266,   261,   265,
   236,   237,   238,   239,   259,   241,   242,   243,   244,   259,
     7,   247,   248,   249,   250,   251,   265,   259,   265,   255,
  1717,   259,     7,     7,  1721,   261,     7,  1724,  1725,     7,
     7,     7,     7,     7,  1540,  1541,  1733,  1543,     7,     7,
     7,     7,  1739,     3,     4,     5,     7,   135,     7,     7,
   265,   265,   264,   264,     7,     7,  1753,  1754,  1755,  1756,
  1757,     7,     7,     5,   111,   266,     7,   266,    16,   259,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,    55,    56,    57,    58,   266,
    60,    61,   236,   237,   238,   239,   266,   241,   242,   243,
   244,  1808,   259,   247,   248,   249,   250,   251,   266,   259,
   266,   255,  1819,   266,   266,     7,     5,   261,   248,     7,
     7,     7,     7,   253,   259,     7,   256,     7,     7,     7,
   264,   261,  1839,  1840,  1841,  1842,   264,   264,  1845,     5,
  1847,     5,     5,   258,   264,   259,   259,     5,  1855,  1856,
   259,     5,   122,     5,   259,   265,     7,     4,     7,   129,
   264,     7,     7,  1870,  1871,     7,   265,  1874,   265,   236,
   237,   238,   239,  1689,   241,   242,   243,   244,     7,  1695,
   247,   248,   249,   250,   251,     7,  1702,     7,   255,     7,
     7,  1898,     7,   264,   261,     7,     7,   265,   236,   237,
   238,   239,  1718,   241,   242,   243,   244,     7,     7,   247,
   248,   249,   250,   251,     7,     7,     7,   255,     7,   264,
     7,   264,   264,   261,     7,   266,  1933,   259,  1935,   236,
   237,   238,   239,   259,   241,   242,   243,   244,    62,   264,
   247,   248,   249,   250,   251,     7,     7,     7,   255,     7,
     7,  1958,     7,   264,   261,   236,   237,   238,   239,   265,
   241,   242,   243,   244,   132,     7,   247,   248,   249,   250,
   251,   241,     5,     7,   255,   265,     7,   247,   248,     0,
   261,  1988,     0,   253,  1991,   266,   256,  1078,  2032,  1079,
   947,   261,   262,   764,   264,  1345,  1518,     7,  1737,  1227,
   707,   665,   125,   586,  2011,   238,    -1,  2014,    -1,    -1,
    -1,    -1,   603,    -1,    -1,    -1,    -1,  2024,    -1,    -1,
    -1,    -1,    -1,     3,     4,     5,     6,    -1,  1844,     9,
    -1,    -1,    -1,  1849,    -1,  1851,    -1,    -1,    -1,    -1,
    -1,    -1,  1858,    -1,    24,    25,    26,    27,    28,    -1,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,     3,     4,     5,     6,    -1,
    -1,     9,    -1,  1899,    -1,    -1,    -1,    -1,    -1,    69,
    -1,    -1,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
    28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,     3,     4,     5,
  1946,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,   252,    -1,    -1,   255,    -1,    -1,    24,    25,
    26,    27,    -1,    -1,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48,    49,    50,    51,    52,    53,    54,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
    -1,    -1,    -1,    -1,   261,   236,   237,   238,   239,    -1,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,    -1,    -1,    -1,   255,    -1,   236,   237,   238,   239,
   261,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,
     5,   261,   232,    -1,    -1,    -1,    -1,    -1,    13,    14,
    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,   248,    -1,
    -1,    -1,    -1,   253,    -1,    -1,   256,     7,    -1,    -1,
    -1,   261,    -1,    -1,   264,   238,   239,    -1,   241,   242,
   243,   244,    -1,    -1,   247,   248,   249,   250,   251,     8,
    -1,    -1,   255,    -1,   232,    -1,     5,    -1,   261,    -1,
    -1,     3,     4,     5,    13,    14,    15,    -1,    17,    -1,
   248,    -1,    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,
    -1,    -1,    24,    25,    26,    27,   264,    -1,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   248,    -1,    -1,    -1,    -1,   253,    -1,    -1,
   256,    -1,    -1,    -1,    -1,    -1,    -1,   142,   264,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,
    -1,    -1,   197,   142,    -1,   144,   145,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,
    -1,   170,   171,   172,   173,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,
   189,     5,    -1,    -1,    -1,   194,    -1,    -1,   197,    13,
    14,    15,    -1,    17,    -1,    -1,   236,   237,   238,   239,
   265,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,    -1,    -1,    -1,   255,    -1,   236,   237,   238,
   239,   261,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,    -1,    -1,     5,   255,    -1,   257,    -1,
    -1,    -1,   261,    13,    14,    15,   248,    17,    -1,    -1,
    -1,   253,    -1,    -1,   256,    -1,   265,    -1,    -1,    -1,
    -1,    -1,    -1,     8,   235,   236,   237,   238,   239,   240,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,   252,    -1,    -1,   255,    -1,    -1,    -1,    -1,     5,
    -1,    -1,    -1,    -1,    -1,   266,    -1,    13,    14,    15,
    -1,    17,   238,   239,   240,   241,   242,   243,   244,    -1,
    -1,   247,   248,   249,   250,   251,   252,     8,   142,   255,
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
    -1,   236,   237,   238,   239,   265,   241,   242,   243,   244,
    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,    -1,
   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,    -1,   236,   237,   238,   239,   265,
   241,   242,   243,   244,    -1,    -1,   247,   248,   249,   250,
   251,     8,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     8,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,    -1,
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
   183,   184,   185,    -1,    -1,    -1,   189,     5,    -1,    -1,
    -1,   194,    -1,    -1,   197,    13,    14,    15,    -1,    17,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    -1,   255,    -1,
    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,
    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,
    14,    15,    -1,    17,    -1,    -1,    -1,    -1,   236,   237,
   238,   239,   265,   241,   242,   243,   244,    -1,    -1,   247,
   248,   249,   250,   251,     8,    -1,    -1,   255,    -1,    -1,
    -1,    -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   142,    -1,   144,   145,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,
   168,    -1,   170,   171,   172,   173,   174,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,   185,    -1,    -1,
    -1,   189,    -1,    -1,    -1,    -1,   194,    -1,   142,   197,
   144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,
    -1,   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,
   174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
   184,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
   194,    -1,   142,   197,   144,   145,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,    -1,   265,    -1,   159,
    -1,    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,
   170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,
     5,    -1,    -1,    -1,   194,    -1,    -1,   197,    13,    14,
    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,     3,
     4,     5,    -1,    -1,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
    24,    25,    26,    27,    -1,   265,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     5,    -1,
    -1,    -1,    -1,    -1,    -1,    69,    13,    14,    15,    -1,
    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     8,    -1,    -1,    -1,    -1,    -1,   142,    -1,   144,
   145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,    -1,    -1,    -1,   159,    -1,    -1,   162,    -1,    -1,
   165,    -1,    -1,   168,    -1,   170,   171,   172,   173,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
   185,     8,    -1,    -1,   189,    -1,    -1,    -1,    -1,   194,
    -1,   142,   197,   144,   145,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,    -1,    -1,    -1,   159,    -1,
    -1,   162,    -1,    -1,   165,    -1,    -1,   168,    -1,   170,
   171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,   184,   185,    -1,    -1,    -1,   189,    -1,
    -1,    -1,    -1,   194,    -1,   142,   197,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
   265,    -1,   159,    -1,    -1,   162,    -1,    -1,   165,    -1,
    -1,   168,    -1,   170,   171,   172,   173,   174,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
    -1,    -1,   189,    -1,   248,    -1,    -1,   194,    -1,   253,
   197,    -1,   256,     3,     4,     5,     6,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,    51,    52,    53,    54,     3,     4,     5,   235,   236,
   237,   238,   239,   240,   241,   242,   243,   244,   265,    -1,
   247,   248,   249,   250,   251,   252,     3,    -1,   255,    -1,
     7,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
    48,    49,    50,    51,    52,    53,    54,    -1,    -1,   236,
   237,   238,   239,    -1,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,    -1,    -1,    81,   255,    83,
    84,     5,    86,    -1,   261,    62,    75,    11,    12,    -1,
    -1,    68,    96,    -1,    -1,    19,    20,    21,    22,    -1,
    -1,    -1,    -1,    -1,    81,    29,    83,    -1,    -1,   113,
   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
    -1,    -1,    99,    -1,    -1,    -1,   130,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   111,    -1,    -1,    -1,    62,    -1,
    -1,    -1,    -1,    -1,    68,    -1,    -1,   136,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   132,    -1,    81,    -1,    83,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    95,    -1,    -1,    -1,    99,    -1,    -1,    -1,   168,
    -1,    -1,   186,    -1,    -1,    -1,    -1,   111,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,
    -1,    -1,    -1,   253,    -1,    -1,   256,    -1,   132,   198,
   187,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
   229,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   248,    -1,    -1,    -1,   258,   253,    -1,    -1,   256,    -1,
    -1,   265,    -1,   187,    -1,   189,   236,   237,   238,   239,
    -1,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
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
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,
    -1,   265,   236,   237,   238,   239,    -1,   241,   242,   243,
   244,    -1,    -1,   247,   248,   249,   250,   251,    -1,    -1,
    -1,   255,    -1,   257,    -1,    -1,    -1,   261,   236,   237,
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
    -1,    -1,    -1,   259,    -1,   261,   236,   237,   238,   239,
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
    -1,   255,    -1,    -1,    -1,    -1,    -1,   261,   235,   236,
   237,   238,   239,   240,   241,   242,   243,   244,    -1,    -1,
   247,   248,   249,   250,   251,   252,    -1,    -1,   255,    -1,
    -1,    -1,   259,   235,   236,   237,   238,   239,   240,   241,
   242,   243,   244,    -1,    -1,   247,   248,   249,   250,   251,
   252,    -1,    -1,   255,    -1,   257,   235,   236,   237,   238,
   239,   240,   241,   242,   243,   244,    -1,    -1,   247,   248,
   249,   250,   251,   252,    -1,    -1,   255,   237,   238,   239,
   240,   241,   242,   243,   244,    -1,    -1,   247,   248,   249,
   250,   251,   252,    -1,    -1,   255
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
#line 340 "GetDP.y"
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
#line 356 "GetDP.y"
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
#line 380 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; ;
    break;}
case 18:
#line 403 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 418 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 420 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 422 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 424 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 426 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 428 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 430 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 432 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 434 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 436 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 438 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 440 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 442 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 444 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 446 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 448 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 450 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 452 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 454 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 456 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 458 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 466 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 44:
#line 490 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 45:
#line 493 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 46:
#line 499 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Add_Group(&Group_S, yyvsp[-4].c, 0, 0) ;
    ;
    break;}
case 49:
#line 509 "GetDP.y"
{ Add_Group_2(&Group_S, yyvsp[-4].c, 1, 0, 0, 0) ; ;
    break;}
case 52:
#line 519 "GetDP.y"
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
#line 529 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = (int)yyvsp[-7].d ; 
    ;
    break;}
case 54:
#line 536 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ; 
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 55:
#line 546 "GetDP.y"
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
#line 555 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      Group_S.InitialSuppList = yyvsp[-1].l ;
      yyval.i = -1 ;
    ;
    break;}
case 57:
#line 563 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 58:
#line 574 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 59:
#line 579 "GetDP.y"
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
#line 596 "GetDP.y"
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
#line 626 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 62:
#line 629 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 63:
#line 641 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 64:
#line 642 "GetDP.y"
{ yyval.l = NULL ; ;
    break;}
case 65:
#line 649 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 66:
#line 652 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 67:
#line 655 "GetDP.y"
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
#line 673 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 69:
#line 686 "GetDP.y"
{
      yyval.l = List_Create(((List_Nbr(yyvsp[0].l) > 0)? List_Nbr(yyvsp[0].l) : 1), 5, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;
    break;}
case 70:
#line 693 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 71:
#line 700 "GetDP.y"
{
      yyval.l = List_Create( 5, 5, sizeof(int)) ;
    ;
    break;}
case 72:
#line 705 "GetDP.y"
{
      yyval.l = yyvsp[-2].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Add(yyval.l, (int *)List_Pointer(yyvsp[0].l, i) ) ;
    ;
    break;}
case 73:
#line 712 "GetDP.y"
{
      yyval.l = yyvsp[-3].l ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++)
	List_Suppress(yyval.l, (int *)List_Pointer(yyvsp[0].l, i), fcmp_int ) ;
    ;
    break;}
case 74:
#line 723 "GetDP.y"
{
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ;
    ;
    break;}
case 75:
#line 729 "GetDP.y"
{
      i = (int)yyvsp[-1].d ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &i) ;
    ;
    break;}
case 76:
#line 736 "GetDP.y"
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
#line 747 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 78:
#line 756 "GetDP.y"
{ 
      List_Reset(ListOfInt_L) ; 
      for(j=(int)yyvsp[-3].d ; (yyvsp[-3].d<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-3].d<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 79:
#line 764 "GetDP.y"
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
#line 778 "GetDP.y"
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
#line 791 "GetDP.y"
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
#line 830 "GetDP.y"
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
#line 840 "GetDP.y"
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
#line 862 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 867 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 89:
#line 868 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 90:
#line 873 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 94:
#line 892 "GetDP.y"
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
#line 912 "GetDP.y"
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
#line 965 "GetDP.y"
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
#line 985 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 101:
#line 991 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 102:
#line 997 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 103:
#line 1000 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 104:
#line 1005 "GetDP.y"
{ Expression_S.Type = UNDEFINED_EXP ; 
      yyval.i = Add_Expression(&Expression_S, "Exp_Undefined", 1) ;
    ;
    break;}
case 105:
#line 1012 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 107:
#line 1023 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1026 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 109:
#line 1032 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 110:
#line 1036 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 112:
#line 1048 "GetDP.y"
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
case 113:
#line 1061 "GetDP.y"
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
case 114:
#line 1075 "GetDP.y"
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
case 115:
#line 1090 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1096 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1102 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1108 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1114 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1120 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1126 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1132 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1138 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1144 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1150 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1156 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1162 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1168 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1174 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1180 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1186 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 132:
#line 1193 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 134:
#line 1201 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 136:
#line 1214 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1220 "GetDP.y"
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
case 138:
#line 1294 "GetDP.y"
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
case 139:
#line 1328 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 140:
#line 1337 "GetDP.y"
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
case 141:
#line 1349 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 142:
#line 1351 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 143:
#line 1363 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 144:
#line 1365 "GetDP.y"
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
case 145:
#line 1377 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 146:
#line 1379 "GetDP.y"
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
case 147:
#line 1393 "GetDP.y"
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
case 148:
#line 1405 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 149:
#line 1411 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 150:
#line 1417 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 151:
#line 1419 "GetDP.y"
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
case 152:
#line 1448 "GetDP.y"
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
case 153:
#line 1474 "GetDP.y"
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
case 154:
#line 1487 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1493 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1500 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1506 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1513 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 159:
#line 1520 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = (int)yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 160:
#line 1531 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 161:
#line 1532 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 162:
#line 1533 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 163:
#line 1538 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 164:
#line 1539 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 165:
#line 1545 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 166:
#line 1548 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 167:
#line 1551 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      d = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &d) ;
    ;
    break;}
case 168:
#line 1566 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 169:
#line 1571 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 170:
#line 1578 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 172:
#line 1587 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 173:
#line 1592 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 174:
#line 1599 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 175:
#line 1602 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 176:
#line 1609 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 178:
#line 1619 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 179:
#line 1622 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 180:
#line 1625 "GetDP.y"
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
case 181:
#line 1663 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 182:
#line 1669 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 183:
#line 1676 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 185:
#line 1689 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 186:
#line 1696 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 187:
#line 1699 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 188:
#line 1706 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 189:
#line 1709 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 190:
#line 1716 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 192:
#line 1728 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 193:
#line 1738 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 194:
#line 1748 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 195:
#line 1755 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 196:
#line 1758 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 197:
#line 1765 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 199:
#line 1781 "GetDP.y"
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
case 200:
#line 1829 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1832 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1835 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 203:
#line 1838 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 204:
#line 1841 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 205:
#line 1852 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 207:
#line 1862 "GetDP.y"
{
      List_Add(Problem_S.Constraint, &Constraint_S) ;
    ;
    break;}
case 210:
#line 1874 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
    ;
    break;}
case 212:
#line 1887 "GetDP.y"
{
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 213:
#line 1894 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-2].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 214:
#line 1902 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 215:
#line 1911 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 216:
#line 1914 "GetDP.y"
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
case 217:
#line 1932 "GetDP.y"
{
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintPerRegion)) ;
    ;
    break;}
case 218:
#line 1937 "GetDP.y"
{
      List_Add(yyval.l = yyvsp[-3].l, &ConstraintPerRegion_S) ;
    ;
    break;}
case 219:
#line 1942 "GetDP.y"
{ 
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 220:
#line 1951 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 222:
#line 1965 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 223:
#line 1975 "GetDP.y"
{ 
      ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
    ;
    break;}
case 224:
#line 1980 "GetDP.y"
{ 
      ConstraintPerRegion_S.SubRegionIndex =
	Num_Group(&Group_S, "CO_SubRegion", yyvsp[-1].i) ;
    ;
    break;}
case 225:
#line 1986 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 226:
#line 1991 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 227:
#line 1999 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 228:
#line 2007 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = (int)yyvsp[-4].d ;
	ConstraintPerRegion_S.Case.Network.Node2 = (int)yyvsp[-2].d ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 229:
#line 2016 "GetDP.y"
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
case 230:
#line 2034 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 231:
#line 2043 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 232:
#line 2051 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 233:
#line 2059 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 234:
#line 2069 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 235:
#line 2079 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 236:
#line 2089 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 237:
#line 2109 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 239:
#line 2120 "GetDP.y"
{
      List_Add(Problem_S.FunctionSpace, &FunctionSpace_S) ;
    ;
    break;}
case 242:
#line 2133 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
    ;
    break;}
case 244:
#line 2145 "GetDP.y"
{
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 245:
#line 2152 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-2].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 246:
#line 2160 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 247:
#line 2169 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2172 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 249:
#line 2175 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2178 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 251:
#line 2185 "GetDP.y"
{
      yyval.l = Current_BasisFunction_L =
	List_Create(6, 6, sizeof (struct BasisFunction)) ;
    ;
    break;}
case 252:
#line 2191 "GetDP.y"
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
case 253:
#line 2208 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 254:
#line 2217 "GetDP.y"
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
#line 2238 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 257:
#line 2241 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 258:
#line 2246 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 259:
#line 2251 "GetDP.y"
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
#line 2265 "GetDP.y"
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
#line 2285 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 262:
#line 2290 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 263:
#line 2295 "GetDP.y"
{
      BasisFunction_S.SupportIndex = Num_Group(&Group_S, "BF_Support", yyvsp[-1].i) ;
    ;
    break;}
case 264:
#line 2300 "GetDP.y"
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
case 266:
#line 2334 "GetDP.y"
{
      Nbr_Index = yyvsp[-1].i ;
    ;
    break;}
case 267:
#line 2338 "GetDP.y"
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
case 268:
#line 2348 "GetDP.y"
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
case 269:
#line 2412 "GetDP.y"
{ 
      yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; 
    ;
    break;}
case 270:
#line 2418 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; 
    ;
    break;}
case 271:
#line 2427 "GetDP.y"
{ 
      SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; 
    ;
    break;}
case 273:
#line 2438 "GetDP.y"
{ 
      Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 274:
#line 2445 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 275:
#line 2448 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2455 "GetDP.y"
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
#line 2471 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 278:
#line 2477 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 279:
#line 2480 "GetDP.y"
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
#line 2499 "GetDP.y"
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
#line 2511 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 282:
#line 2518 "GetDP.y"
{ 
      yyval.l = List_Create(5, 5, sizeof(int)) ; 
    ;
    break;}
case 283:
#line 2523 "GetDP.y"
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
#line 2538 "GetDP.y"
{ 
      yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; 
    ;
    break;}
case 285:
#line 2544 "GetDP.y"
{ 
      GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 286:
#line 2554 "GetDP.y"
{ 
      GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 288:
#line 2566 "GetDP.y"
{ 
      Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 289:
#line 2573 "GetDP.y"
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
case 290:
#line 2584 "GetDP.y"
{ 
      if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 291:
#line 2598 "GetDP.y"
{
      yyval.l = List_Create(6, 6, sizeof (struct ConstraintInFS)) ;
    ;
    break;}
case 292:
#line 2603 "GetDP.y"
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
case 293:
#line 2640 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 294:
#line 2649 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 296:
#line 2665 "GetDP.y"
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
case 297:
#line 2698 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 298:
#line 2701 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 299:
#line 2704 "GetDP.y"
{
      Constraint_Index =
	List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c, fcmp_Constraint_Name) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 300:
#line 2719 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 302:
#line 2729 "GetDP.y"
{
      List_Add(Problem_S.Formulation, &Formulation_S) ;
    ;
    break;}
case 305:
#line 2742 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
    ;
    break;}
case 307:
#line 2753 "GetDP.y"
{
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 308:
#line 2760 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-2].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 309:
#line 2768 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 311:
#line 2780 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 312:
#line 2786 "GetDP.y"
{
      Formulation_S.DefineQuantity = List_Create(6, 6, sizeof (struct DefineQuantity)) ;
    ;
    break;}
case 313:
#line 2791 "GetDP.y"
{
      List_Add(Formulation_S.DefineQuantity, &DefineQuantity_S) ;
    ;
    break;}
case 315:
#line 2802 "GetDP.y"
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
case 317:
#line 2825 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 318:
#line 2828 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 319:
#line 2832 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 320:
#line 2835 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 321:
#line 2845 "GetDP.y"
{ DefineQuantity_S.DummyFrequency = yyvsp[-1].l;
    ;
    break;}
case 322:
#line 2849 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[0].c,
			       fcmp_FunctionSpace_Name)) < 0)
	vyyerror("Unknown FunctionSpace: %s", yyvsp[0].c) ;
      else
	DefineQuantity_S.FunctionSpaceIndex = i ;
    ;
    break;}
case 323:
#line 2857 "GetDP.y"
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
case 324:
#line 2881 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 325:
#line 2886 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 326:
#line 2892 "GetDP.y"
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
case 327:
#line 3203 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 328:
#line 3208 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3217 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3226 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 331:
#line 3235 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 333:
#line 3243 "GetDP.y"
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
case 334:
#line 3283 "GetDP.y"
{
      yyval.l = List_Create(6, 6, sizeof(struct EquationTerm)) ;
    ;
    break;}
case 335:
#line 3288 "GetDP.y"
{
      List_Add(yyval.l = yyvsp[-1].l, &EquationTerm_S) ;
    ;
    break;}
case 336:
#line 3293 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 337:
#line 3298 "GetDP.y"
{
      yyval.l = yyvsp[-1].l ;
    ;
    break;}
case 338:
#line 3307 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 339:
#line 3310 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 340:
#line 3313 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 341:
#line 3316 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 342:
#line 3327 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 344:
#line 3338 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 345:
#line 3348 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 346:
#line 3358 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 347:
#line 3372 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 349:
#line 3384 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 350:
#line 3386 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 351:
#line 3388 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 352:
#line 3390 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 353:
#line 3398 "GetDP.y"
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
case 355:
#line 3423 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 356:
#line 3431 "GetDP.y"
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
case 357:
#line 3510 "GetDP.y"
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
case 358:
#line 3556 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;
    break;}
case 359:
#line 3561 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 360:
#line 3570 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 361:
#line 3579 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Full_Matrix = 1; 
    ;
    break;}
case 362:
#line 3584 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 363:
#line 3593 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 364:
#line 3604 "GetDP.y"
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
case 366:
#line 3633 "GetDP.y"
{
      EquationTerm_S.Case.GlobalTerm.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ;
    ;
    break;}
case 367:
#line 3638 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 368:
#line 3646 "GetDP.y"
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
case 369:
#line 3701 "GetDP.y"
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
case 370:
#line 3718 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 371:
#line 3719 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 372:
#line 3720 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 373:
#line 3721 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 374:
#line 3722 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 375:
#line 3723 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 376:
#line 3724 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 377:
#line 3725 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 378:
#line 3732 "GetDP.y"
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
case 379:
#line 3753 "GetDP.y"
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
case 380:
#line 3777 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 382:
#line 3787 "GetDP.y"
{
      List_Add(Problem_S.Resolution, &Resolution_S) ;
    ;
    break;}
case 385:
#line 3800 "GetDP.y"
{
      Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
    ;
    break;}
case 387:
#line 3812 "GetDP.y"
{
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 388:
#line 3819 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-2].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ;
    ;
    break;}
case 389:
#line 3827 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 390:
#line 3830 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 391:
#line 3832 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 393:
#line 3840 "GetDP.y"
{
      yyval.l = Current_System_L = List_Create(6, 6, sizeof (struct DefineSystem)) ;
    ;
    break;}
case 394:
#line 3845 "GetDP.y"
{
      List_Add(yyval.l = Current_System_L = yyvsp[-3].l, &DefineSystem_S) ;
    ;
    break;}
case 395:
#line 3850 "GetDP.y"
{
       yyval.l = yyvsp[-1].l ;
     ;
    break;}
case 396:
#line 3860 "GetDP.y"
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
case 398:
#line 3880 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 399:
#line 3883 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 400:
#line 3892 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 401:
#line 3895 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 402:
#line 3900 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 403:
#line 3905 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 404:
#line 3910 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 405:
#line 3915 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 407:
#line 3926 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 408:
#line 3935 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 409:
#line 3942 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 410:
#line 3945 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 411:
#line 3957 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 412:
#line 3967 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 413:
#line 3973 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 414:
#line 3976 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 415:
#line 3988 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 416:
#line 3996 "GetDP.y"
{ 
      if (((struct Operation*)
	  List_Pointer(Operation_L, List_Nbr(Operation_L)-1))->Type !=  OPERATION_NONE)
	List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
		 List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 417:
#line 4009 "GetDP.y"
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
case 418:
#line 4031 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-1].i ;
    ;
    break;}
case 419:
#line 4038 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 420:
#line 4044 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 421:
#line 4050 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 422:
#line 4056 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 423:
#line 4064 "GetDP.y"
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
case 424:
#line 4086 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTime.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 425:
#line 4093 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 426:
#line 4099 "GetDP.y"
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
case 427:
#line 4110 "GetDP.y"
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
case 428:
#line 4121 "GetDP.y"
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
case 429:
#line 4134 "GetDP.y"
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
case 430:
#line 4149 "GetDP.y"
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
case 431:
#line 4164 "GetDP.y"
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
case 432:
#line 4179 "GetDP.y"
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
case 433:
#line 4199 "GetDP.y"
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
case 434:
#line 4220 "GetDP.y"
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
case 435:
#line 4232 "GetDP.y"
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
case 436:
#line 4252 "GetDP.y"
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
case 437:
#line 4269 "GetDP.y"
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
case 438:
#line 4288 "GetDP.y"
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
case 439:
#line 4309 "GetDP.y"
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
case 440:
#line 4323 "GetDP.y"
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
case 441:
#line 4337 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_EVALUATE;
      Operation_P->Case.Evaluate.ExpressionIndex = (int)yyvsp[-2].i ;
    ;
    break;}
case 442:
#line 4345 "GetDP.y"
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
case 443:
#line 4379 "GetDP.y"
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
case 444:
#line 4392 "GetDP.y"
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
case 445:
#line 4406 "GetDP.y"
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
case 446:
#line 4419 "GetDP.y"
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
case 447:
#line 4431 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 449:
#line 4440 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 451:
#line 4449 "GetDP.y"
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
case 452:
#line 4460 "GetDP.y"
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
case 453:
#line 4472 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 454:
#line 4482 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand.String = yyvsp[-2].c ; 
    ;
    break;}
case 455:
#line 4490 "GetDP.y"
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
case 456:
#line 4503 "GetDP.y"
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
case 457:
#line 4516 "GetDP.y"
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
case 458:
#line 4530 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
   	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
            Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 459:
#line 4540 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
    	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 460:
#line 4550 "GetDP.y"
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
case 461:
#line 4564 "GetDP.y"
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
case 462:
#line 4578 "GetDP.y"
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
case 463:
#line 4597 "GetDP.y"
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
case 464:
#line 4615 "GetDP.y"
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
case 465:
#line 4626 "GetDP.y"
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
case 466:
#line 4641 "GetDP.y"
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
case 467:
#line 4656 "GetDP.y"
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
case 468:
#line 4671 "GetDP.y"
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
case 469:
#line 4686 "GetDP.y"
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
case 470:
#line 4701 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = NONE ;
    ;
    break;}
case 471:
#line 4712 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 472:
#line 4717 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 473:
#line 4727 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 475:
#line 4737 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 476:
#line 4740 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 477:
#line 4750 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &d) ; j = (int)d ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 478:
#line 4765 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 480:
#line 4781 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 481:
#line 4785 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 482:
#line 4789 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 483:
#line 4793 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 484:
#line 4798 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 485:
#line 4809 "GetDP.y"
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
case 487:
#line 4826 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 488:
#line 4830 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 489:
#line 4834 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 490:
#line 4838 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 491:
#line 4842 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 492:
#line 4847 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 493:
#line 4858 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 495:
#line 4873 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 496:
#line 4877 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 497:
#line 4881 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 498:
#line 4885 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 499:
#line 4889 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 500:
#line 4900 "GetDP.y"
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
case 502:
#line 4918 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 503:
#line 4922 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 504:
#line 4926 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 505:
#line 4930 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 506:
#line 4935 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 507:
#line 4945 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 508:
#line 4951 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 509:
#line 4957 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 510:
#line 4967 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 511:
#line 4970 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 512:
#line 4975 "GetDP.y"
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
case 514:
#line 4993 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 515:
#line 5003 "GetDP.y"
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
case 516:
#line 5032 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 517:
#line 5035 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 518:
#line 5038 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 519:
#line 5046 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 520:
#line 5063 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 522:
#line 5075 "GetDP.y"
{
      List_Add(Problem_S.PostProcessing, &PostProcessing_S) ;
    ;
    break;}
case 525:
#line 5086 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
    ;
    break;}
case 527:
#line 5099 "GetDP.y"
{
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 528:
#line 5106 "GetDP.y"
{
      yyerror("Multi-fields {#.} are not used anymore. Use Loops For ... EndFor");
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-2].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 529:
#line 5114 "GetDP.y"
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
case 530:
#line 5127 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 531:
#line 5132 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 532:
#line 5138 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 533:
#line 5141 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 534:
#line 5144 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 535:
#line 5146 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 536:
#line 5152 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 538:
#line 5163 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 539:
#line 5166 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 540:
#line 5172 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 541:
#line 5177 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 542:
#line 5183 "GetDP.y"
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
case 543:
#line 5197 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 545:
#line 5211 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 546:
#line 5218 "GetDP.y"
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
case 547:
#line 5246 "GetDP.y"
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
case 548:
#line 5257 "GetDP.y"
{
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 549:
#line 5262 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 550:
#line 5271 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 551:
#line 5288 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 553:
#line 5300 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 556:
#line 5309 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 558:
#line 5321 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 559:
#line 5328 "GetDP.y"
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
case 560:
#line 5340 "GetDP.y"
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
case 561:
#line 5351 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 562:
#line 5356 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 563:
#line 5362 "GetDP.y"
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
case 564:
#line 5379 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 565:
#line 5389 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 566:
#line 5392 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 567:
#line 5396 "GetDP.y"
{ 
      if (PostSubOperation_S.Type != POP_NONE) {
	if(PostSubOperation_S.Format<0)
	  PostSubOperation_S.Format = PostOperation_S.Format ;
	List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
      }
    ;
    break;}
case 568:
#line 5409 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 569:
#line 5414 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 570:
#line 5419 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-5].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = yyvsp[-3].i ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 571:
#line 5428 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-8].c ;
      PostSubOperation_S.Case.Expression.String2 = yyvsp[-4].c ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 572:
#line 5437 "GetDP.y"
{
      PostSubOperation_S.Type = POP_EXPRESSION ;
      PostSubOperation_S.Case.Expression.String = yyvsp[-3].c ;
      PostSubOperation_S.Case.Expression.String2 = NULL ;
      PostSubOperation_S.Case.Expression.ExpressionIndex = -1 ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 573:
#line 5446 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
      PostSubOperation_S.PostQuantityIndex[0] = -1 ;
    ;
    break;}
case 574:
#line 5452 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 575:
#line 5457 "GetDP.y"
{
      PostSubOperation_S.Type = POP_NONE ;
    ;
    break;}
case 576:
#line 5466 "GetDP.y"
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
#line 5478 "GetDP.y"
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
#line 5501 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 579:
#line 5502 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 580:
#line 5503 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 581:
#line 5504 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 582:
#line 5510 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 583:
#line 5512 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 584:
#line 5518 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 585:
#line 5524 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 586:
#line 5531 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 587:
#line 5540 "GetDP.y"
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
#line 5562 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 589:
#line 5570 "GetDP.y"
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
#line 5581 "GetDP.y"
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
#line 5595 "GetDP.y"
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
#line 5616 "GetDP.y"
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
#line 5643 "GetDP.y"
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
#line 5674 "GetDP.y"
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
#line 5694 "GetDP.y"
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
case 597:
#line 5730 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 598:
#line 5737 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 599:
#line 5744 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 600:
#line 5751 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 601:
#line 5755 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 602:
#line 5759 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 603:
#line 5763 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 604:
#line 5767 "GetDP.y"
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
#line 5777 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 606:
#line 5782 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 607:
#line 5787 "GetDP.y"
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
case 608:
#line 5807 "GetDP.y"
{ 
      PostSubOperation_S.Comma = 1 ; 
    ;
    break;}
case 609:
#line 5811 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 610:
#line 5818 "GetDP.y"
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
case 611:
#line 5828 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 612:
#line 5837 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 613:
#line 5846 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 614:
#line 5853 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 615:
#line 5861 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 616:
#line 5865 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 617:
#line 5874 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 618:
#line 5878 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 619:
#line 5882 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 620:
#line 5890 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 621:
#line 5896 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 622:
#line 5900 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 623:
#line 5908 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_TIME ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 624:
#line 5915 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 625:
#line 5923 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_FREQUENCY ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 626:
#line 5930 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = 1.e5 ;
      PostSubOperation_S.LegendPosition[1] = 30. ;
      /* (align<<16)|(font<<8)|(fontsize) */
      PostSubOperation_S.LegendPosition[2] = 66574 ;
    ;
    break;}
case 627:
#line 5938 "GetDP.y"
{ 
      PostSubOperation_S.Legend = LEGEND_EIGENVALUES ;
      PostSubOperation_S.LegendPosition[0] = yyvsp[-5].d ;
      PostSubOperation_S.LegendPosition[1] = yyvsp[-3].d ;
      PostSubOperation_S.LegendPosition[2] = yyvsp[-1].d ;
    ;
    break;}
case 628:
#line 5945 "GetDP.y"
{ 
      if(List_Nbr(yyvsp[-1].l)%3 != 0)
	vyyerror("Expected 3n coordinates, got %d", List_Nbr(yyvsp[-1].l));
      else {
	PostSubOperation_S.EvaluationPoints = yyvsp[-1].l ;
      }
    ;
    break;}
case 629:
#line 5953 "GetDP.y"
{
      PostSubOperation_S.StoreInRegister = yyvsp[0].i - 1 ;
    ;
    break;}
case 630:
#line 5957 "GetDP.y"
{
      PostSubOperation_S.LastTimeStepOnly = 1 ;
    ;
    break;}
case 631:
#line 5966 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 632:
#line 5972 "GetDP.y"
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
case 633:
#line 6022 "GetDP.y"
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
case 634:
#line 6037 "GetDP.y"
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
case 635:
#line 6053 "GetDP.y"
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
      /* hack_fsetpos_printf(); */
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum ;
      ImbricatedLoop++;
      if(ImbricatedLoop > MAX_RECUR_LOOPS-1){
	vyyerror("Reached maximum number of imbricated loops");
	ImbricatedLoop = MAX_RECUR_LOOPS-1;
      }
      if(yyvsp[-3].d > yyvsp[-1].d) skip_until("For", "EndFor");
    ;
    break;}
case 636:
#line 6073 "GetDP.y"
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
case 637:
#line 6093 "GetDP.y"
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
	  /* fsetpos() seems to position the file just after the For
	     but with one additional character (the one after EndFor)
	     at the beginning.  I do not understand why there is such
	     a mixing of two separate data. hack_fsetpos() removes the
	     useless additional character. */
	  hack_fsetpos();
	  /* hack_fsetpos_printf(); */
	  yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
	}
	else{
	  ImbricatedLoop--;
	}
      }
    ;
    break;}
case 638:
#line 6131 "GetDP.y"
{
      if(!yyvsp[-1].d) skip_until("If", "EndIf");
    ;
    break;}
case 639:
#line 6135 "GetDP.y"
{
    ;
    break;}
case 641:
#line 6150 "GetDP.y"
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
case 642:
#line 6165 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 643:
#line 6171 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 644:
#line 6177 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 645:
#line 6183 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      if (!(File = fopen(yyvsp[-2].c, "r"))) Msg(GERROR, "Unable to open file '%s'", yyvsp[-2].c);
      Constant_S.Value.ListOfFloat = List_Create(100,100,sizeof(double));
      while (!feof(File))
	if (fscanf(File, "%lf", &d) != EOF)
	  List_Add(Constant_S.Value.ListOfFloat, &d) ;
      fclose(File) ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 646:
#line 6194 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 647:
#line 6199 "GetDP.y"
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
case 648:
#line 6215 "GetDP.y"
{
      Msg(INFO, "Line number: %d", yylinenum);
    ;
    break;}
case 649:
#line 6220 "GetDP.y"
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
case 650:
#line 6232 "GetDP.y"
{
      Msg(INFO2, "? ");
      fgets(tmpstr, sizeof(tmpstr), stdin);
      Constant_S.Value.Float = atof(tmpstr);
      Constant_S.Name = yyvsp[-2].c ; 
      Constant_S.Type = VAR_FLOAT ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 651:
#line 6242 "GetDP.y"
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
case 653:
#line 6261 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 654:
#line 6267 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 655:
#line 6273 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 656:
#line 6284 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 657:
#line 6285 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 658:
#line 6286 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 659:
#line 6287 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 660:
#line 6288 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 661:
#line 6289 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 662:
#line 6290 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 663:
#line 6291 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 664:
#line 6292 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 665:
#line 6293 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 666:
#line 6294 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 667:
#line 6295 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 668:
#line 6296 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 669:
#line 6297 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 670:
#line 6298 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 671:
#line 6299 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 672:
#line 6300 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 673:
#line 6301 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 674:
#line 6302 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 675:
#line 6303 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 676:
#line 6304 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 677:
#line 6308 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 678:
#line 6309 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 679:
#line 6310 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 680:
#line 6311 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 681:
#line 6312 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 682:
#line 6313 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 683:
#line 6314 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 684:
#line 6315 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 685:
#line 6316 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 686:
#line 6317 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 687:
#line 6318 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 688:
#line 6319 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 689:
#line 6320 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 690:
#line 6321 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 691:
#line 6322 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 692:
#line 6323 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 693:
#line 6324 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 694:
#line 6325 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 695:
#line 6326 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 696:
#line 6327 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 697:
#line 6328 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 698:
#line 6329 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 699:
#line 6330 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 700:
#line 6331 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 701:
#line 6332 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 702:
#line 6333 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 703:
#line 6334 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 704:
#line 6335 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 705:
#line 6336 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 706:
#line 6337 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 707:
#line 6338 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 708:
#line 6339 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 709:
#line 6340 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 710:
#line 6341 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 711:
#line 6342 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 712:
#line 6343 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 713:
#line 6344 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 714:
#line 6345 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 715:
#line 6349 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 716:
#line 6354 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 717:
#line 6355 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 718:
#line 6356 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 719:
#line 6357 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 720:
#line 6358 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 721:
#line 6359 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 722:
#line 6360 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 723:
#line 6362 "GetDP.y"
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
case 724:
#line 6380 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 725:
#line 6383 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 726:
#line 6389 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 727:
#line 6392 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 728:
#line 6399 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 729:
#line 6405 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 730:
#line 6408 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 731:
#line 6411 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &d) ;
	List_Add(yyval.l, &d) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 732:
#line 6423 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 733:
#line 6429 "GetDP.y"
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
case 734:
#line 6440 "GetDP.y"
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
case 735:
#line 6456 "GetDP.y"
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
case 736:
#line 6478 "GetDP.y"
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
case 737:
#line 6493 "GetDP.y"
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
case 738:
#line 6531 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 739:
#line 6539 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 740:
#line 6551 "GetDP.y"
{
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Malloc((strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 741:
#line 6559 "GetDP.y"
{
      sprintf(tmpstr, "_%d", (int)yyvsp[-1].d) ;
      yyval.c = (char *)Realloc(yyvsp[-4].c,(strlen(yyvsp[-4].c)+strlen(tmpstr)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-4].c) ; strcat(yyval.c, tmpstr) ;
    ;
    break;}
case 742:
#line 6570 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 743:
#line 6573 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 744:
#line 6580 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 745:
#line 6583 "GetDP.y"
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
case 746:
#line 6598 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 747:
#line 6603 "GetDP.y"
{
      yyval.c = yyvsp[-1].c;
    ;
    break;}
case 748:
#line 6608 "GetDP.y"
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
case 749:
#line 6627 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 750:
#line 6637 "GetDP.y"
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
#line 6648 "GetDP.y"



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

