/* A Bison parser, made from GetDP.y
   by GNU bison 1.35.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	tINT	257
# define	tFLOAT	258
# define	tSTRING	259
# define	tBIGSTR	260
# define	tEND	261
# define	tDOTS	262
# define	tStrCat	263
# define	tFor	264
# define	tEndFor	265
# define	tInclude	266
# define	tConstant	267
# define	tList	268
# define	tListAlt	269
# define	tLinSpace	270
# define	tLogSpace	271
# define	tDefineConstant	272
# define	tPi	273
# define	t0D	274
# define	t1D	275
# define	t2D	276
# define	t3D	277
# define	tExp	278
# define	tLog	279
# define	tLog10	280
# define	tSqrt	281
# define	tSin	282
# define	tAsin	283
# define	tCos	284
# define	tAcos	285
# define	tTan	286
# define	tAtan	287
# define	tAtan2	288
# define	tSinh	289
# define	tCosh	290
# define	tTanh	291
# define	tFabs	292
# define	tFloor	293
# define	tCeil	294
# define	tFmod	295
# define	tModulo	296
# define	tHypot	297
# define	tSolidAngle	298
# define	tTrace	299
# define	tOrder	300
# define	tCrossProduct	301
# define	tMHTransform	302
# define	tMHJacNL	303
# define	tGroup	304
# define	tDefineGroup	305
# define	tAll	306
# define	tInSupport	307
# define	tMovingBand2D	308
# define	tDefineFunction	309
# define	tConstraint	310
# define	tRegion	311
# define	tSubRegion	312
# define	tRegionRef	313
# define	tSubRegionRef	314
# define	tFilter	315
# define	tCoefficient	316
# define	tValue	317
# define	tTimeFunction	318
# define	tBranch	319
# define	tNode	320
# define	tLoop	321
# define	tNameOfResolution	322
# define	tJacobian	323
# define	tCase	324
# define	tIntegration	325
# define	tFMMIntegration	326
# define	tMatrix	327
# define	tType	328
# define	tSubType	329
# define	tCriterion	330
# define	tGeoElement	331
# define	tNumberOfPoints	332
# define	tMaxNumberOfPoints	333
# define	tNumberOfDivisions	334
# define	tMaxNumberOfDivisions	335
# define	tStoppingCriterion	336
# define	tFunctionSpace	337
# define	tName	338
# define	tBasisFunction	339
# define	tNameOfCoef	340
# define	tFunction	341
# define	tdFunction	342
# define	tSubFunction	343
# define	tSupport	344
# define	tEntity	345
# define	tSubSpace	346
# define	tNameOfBasisFunction	347
# define	tGlobalQuantity	348
# define	tEntityType	349
# define	tEntitySubType	350
# define	tNameOfConstraint	351
# define	tFormulation	352
# define	tQuantity	353
# define	tNameOfSpace	354
# define	tIndexOfSystem	355
# define	tSymmetry	356
# define	tEquation	357
# define	tGalerkin	358
# define	tdeRham	359
# define	tGlobalTerm	360
# define	tGlobalEquation	361
# define	tDt	362
# define	tDtDof	363
# define	tDtDt	364
# define	tDtDtDof	365
# define	tJacNL	366
# define	tNeverDt	367
# define	tDtNL	368
# define	tIn	369
# define	tResolution	370
# define	tDefineSystem	371
# define	tNameOfFormulation	372
# define	tNameOfMesh	373
# define	tFrequency	374
# define	tSolver	375
# define	tOriginSystem	376
# define	tDestinationSystem	377
# define	tOperation	378
# define	tOperationEnd	379
# define	tSetTime	380
# define	tDTime	381
# define	tSetFrequency	382
# define	tFourierTransform	383
# define	tFourierTransformJ	384
# define	tIf	385
# define	tElse	386
# define	tLanczos	387
# define	tPerturbation	388
# define	tUpdate	389
# define	tUpdateConstraint	390
# define	tBreak	391
# define	tTimeLoopTheta	392
# define	tTime0	393
# define	tTimeMax	394
# define	tTheta	395
# define	tTimeLoopNewmark	396
# define	tBeta	397
# define	tGamma	398
# define	tIterativeLoop	399
# define	tNbrMaxIteration	400
# define	tRelaxationFactor	401
# define	tIterativeTimeReduction	402
# define	tDivisionCoefficient	403
# define	tChangeOfState	404
# define	tChangeOfCoordinates	405
# define	tSystemCommand	406
# define	tGenerateFMMGroups	407
# define	tGenerateOnly	408
# define	tGenerateOnlyJac	409
# define	tSolveJac_AdaptRelax	410
# define	tSaveSolutionExtendedMH	411
# define	tInit_MovingBand2D	412
# define	tMesh_MovingBand2D	413
# define	tGenerate_MH_Moving	414
# define	tGenerateGroup	415
# define	tGenerateJacGroup	416
# define	tSaveMesh	417
# define	tPostProcessing	418
# define	tNameOfSystem	419
# define	tPostOperation	420
# define	tNameOfPostProcessing	421
# define	tUsingPost	422
# define	tAppend	423
# define	tPlot	424
# define	tPrint	425
# define	tPrintGroup	426
# define	tEcho	427
# define	tWrite	428
# define	tAdapt	429
# define	tOnGlobal	430
# define	tOnRegion	431
# define	tOnElementsOf	432
# define	tOnGrid	433
# define	tOnSection	434
# define	tOnPoint	435
# define	tOnLine	436
# define	tOnPlane	437
# define	tOnBox	438
# define	tWithArgument	439
# define	tFile	440
# define	tDepth	441
# define	tDimension	442
# define	tTimeStep	443
# define	tHarmonicToTime	444
# define	tFormat	445
# define	tHeader	446
# define	tFooter	447
# define	tSkin	448
# define	tSmoothing	449
# define	tTarget	450
# define	tSort	451
# define	tIso	452
# define	tNoNewLine	453
# define	tDecomposeInSimplex	454
# define	tChangeOfValues	455
# define	tStr	456
# define	tDate	457
# define	tFlag	458
# define	tHelp	459
# define	tCpu	460
# define	tCheck	461
# define	tDEF	462
# define	tOR	463
# define	tAND	464
# define	tEQUAL	465
# define	tNOTEQUAL	466
# define	tAPPROXEQUAL	467
# define	tLESSOREQUAL	468
# define	tGREATEROREQUAL	469
# define	tLESSLESS	470
# define	tGREATERGREATER	471
# define	tCROSSPRODUCT	472
# define	UNARYPREC	473
# define	tSHOW	474

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.55 2003-05-22 15:09:58 dular Exp $ */
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

int  Add_Group(struct Group * Group_P, char * Name, int Flag_Plus, int Num_Index) ;
int  Num_Group(struct Group * Group_P, char * Name, int Num_Group) ;
int  Add_Group_Index(struct Group * Group_P, char * Name, int Flag_Plus) ;
int  Add_Expression(struct Expression * Expression_P, char * Name, int Flag_Plus) ;
void Pro_DefineQuantityIndex(List_T * WholeQuantity_L,int DefineQuantityIndexEqu,
			     int * NbrQuantityIndex, int ** QuantityIndexTable,
			     int ** QuantityTraceGroupIndexTable) ;
void Pro_DefineQuantityIndex_1(List_T * WholeQuantity_L, int TraceGroupIndex) ;
void Help(char *topic);

char  *strsave(char *string) ;
void  yyerror(char *s) ;
void  vyyerror(char *fmt, ...) ;
int   yylex();

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


static ImbricatedLoop = 0;
static fpos_t yyposImbricatedLoopsTab[10];
static int yylinenoImbricatedLoopsTab[10];
static double LoopControlVariablesTab[10][3];
static char *LoopControlVariablesNameTab[10];

time_t date_info;



#line 207 "GetDP.y"
#ifndef YYSTYPE
typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		1822
#define	YYFLAG		-32768
#define	YYNTBASE	241

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 474 ? yytranslate[x] : 431)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   227,     2,   235,   236,   225,     2,     2,
     230,   231,   223,   221,   240,   222,   234,   224,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     215,     2,   217,   209,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   232,     2,   233,   229,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   238,     2,   239,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   210,   211,   212,   213,   214,   216,   218,
     219,   220,   226,   228,   237
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     1,     4,     5,     6,    10,    15,    20,    25,
      30,    35,    40,    45,    50,    55,    60,    62,    64,    67,
      69,    72,    76,    80,    84,    88,    92,    96,    99,   102,
     106,   110,   114,   118,   122,   126,   130,   134,   138,   142,
     146,   147,   150,   151,   152,   156,   161,   167,   168,   175,
     181,   183,   185,   187,   194,   203,   205,   206,   207,   226,
     227,   228,   236,   239,   241,   244,   246,   248,   250,   252,
     253,   257,   262,   264,   266,   270,   271,   275,   280,   282,
     286,   292,   294,   299,   303,   304,   308,   315,   316,   318,
     323,   324,   327,   331,   332,   335,   341,   348,   356,   358,
     359,   363,   368,   373,   374,   377,   378,   382,   384,   388,
     389,   392,   394,   395,   396,   404,   408,   412,   419,   423,
     427,   431,   435,   439,   443,   447,   451,   455,   459,   463,
     467,   471,   475,   478,   481,   484,   488,   490,   494,   497,
     499,   502,   503,   509,   510,   522,   532,   537,   542,   543,
     551,   558,   561,   564,   567,   570,   574,   577,   581,   585,
     588,   592,   594,   598,   599,   603,   610,   611,   616,   617,
     620,   624,   629,   630,   635,   636,   639,   643,   647,   652,
     653,   658,   659,   662,   666,   670,   675,   676,   681,   682,
     685,   689,   693,   698,   699,   704,   705,   708,   712,   716,
     720,   724,   728,   732,   733,   736,   740,   742,   743,   746,
     750,   755,   759,   764,   770,   771,   776,   777,   780,   784,
     788,   792,   796,   800,   804,   812,   816,   820,   824,   828,
     832,   840,   848,   856,   857,   860,   864,   866,   867,   870,
     874,   879,   883,   888,   893,   898,   903,   904,   909,   910,
     913,   917,   921,   926,   931,   939,   943,   947,   951,   952,
     953,   954,   973,   974,   979,   980,   983,   987,   991,   995,
     997,  1001,  1002,  1006,  1008,  1012,  1013,  1017,  1018,  1023,
    1024,  1027,  1031,  1035,  1039,  1040,  1045,  1046,  1049,  1053,
    1057,  1061,  1066,  1067,  1070,  1074,  1076,  1077,  1080,  1084,
    1089,  1093,  1098,  1103,  1104,  1109,  1110,  1113,  1117,  1121,
    1125,  1129,  1130,  1137,  1141,  1142,  1148,  1152,  1156,  1160,
    1164,  1168,  1169,  1173,  1174,  1177,  1182,  1187,  1192,  1197,
    1198,  1201,  1205,  1209,  1213,  1214,  1217,  1221,  1225,  1229,
    1233,  1234,  1237,  1238,  1239,  1249,  1253,  1257,  1261,  1265,
    1271,  1272,  1275,  1279,  1280,  1281,  1291,  1292,  1294,  1296,
    1298,  1300,  1302,  1304,  1306,  1311,  1315,  1316,  1319,  1323,
    1325,  1326,  1329,  1333,  1338,  1343,  1344,  1350,  1351,  1356,
    1357,  1360,  1364,  1368,  1372,  1376,  1380,  1384,  1388,  1392,
    1395,  1399,  1400,  1404,  1406,  1410,  1411,  1415,  1416,  1419,
    1423,  1427,  1432,  1437,  1442,  1447,  1453,  1459,  1462,  1470,
    1482,  1490,  1504,  1512,  1520,  1528,  1538,  1548,  1558,  1570,
    1588,  1602,  1618,  1630,  1644,  1645,  1653,  1654,  1662,  1670,
    1676,  1682,  1692,  1702,  1708,  1714,  1728,  1738,  1753,  1761,
    1769,  1771,  1773,  1774,  1777,  1781,  1785,  1788,  1789,  1792,
    1796,  1800,  1804,  1808,  1813,  1814,  1817,  1821,  1825,  1829,
    1833,  1837,  1842,  1843,  1846,  1850,  1854,  1858,  1862,  1867,
    1868,  1871,  1875,  1879,  1883,  1887,  1891,  1896,  1901,  1906,
    1907,  1912,  1913,  1916,  1920,  1924,  1928,  1932,  1936,  1940,
    1941,  1944,  1948,  1950,  1951,  1954,  1958,  1963,  1968,  1972,
    1977,  1978,  1983,  1984,  1987,  1991,  1996,  1997,  2003,  2009,
    2010,  2013,  2014,  2021,  2025,  2026,  2031,  2035,  2039,  2040,
    2043,  2047,  2049,  2050,  2053,  2057,  2061,  2065,  2069,  2074,
    2075,  2084,  2085,  2086,  2090,  2098,  2106,  2115,  2127,  2128,
    2139,  2146,  2150,  2157,  2159,  2161,  2163,  2165,  2166,  2170,
    2172,  2175,  2178,  2191,  2194,  2210,  2215,  2228,  2246,  2269,
    2282,  2283,  2286,  2290,  2295,  2300,  2304,  2307,  2310,  2314,
    2318,  2322,  2326,  2330,  2334,  2338,  2342,  2346,  2350,  2354,
    2358,  2364,  2367,  2370,  2374,  2384,  2388,  2389,  2392,  2397,
    2402,  2410,  2415,  2421,  2422,  2426,  2432,  2438,  2440,  2442,
    2444,  2446,  2448,  2450,  2452,  2454,  2456,  2458,  2460,  2462,
    2464,  2466,  2468,  2470,  2472,  2474,  2476,  2478,  2480,  2482,
    2486,  2489,  2492,  2496,  2500,  2504,  2508,  2512,  2516,  2520,
    2524,  2528,  2532,  2536,  2540,  2544,  2548,  2553,  2558,  2563,
    2568,  2573,  2578,  2583,  2588,  2593,  2598,  2605,  2610,  2615,
    2620,  2625,  2630,  2635,  2642,  2649,  2656,  2662,  2665,  2667,
    2669,  2671,  2673,  2675,  2677,  2679,  2681,  2682,  2684,  2686,
    2690,  2692,  2694,  2698,  2702,  2706,  2712,  2716,  2721,  2726,
    2733,  2742,  2751,  2753,  2755,  2757,  2759
};
static const short yyrhs[] =
{
      -1,   242,   243,     0,     0,     0,   243,   244,   245,     0,
      50,   238,   248,   239,     0,    87,   238,   272,   239,     0,
      56,   238,   306,   239,     0,    69,   238,   291,   239,     0,
      71,   238,   297,   239,     0,    83,   238,   313,   239,     0,
      98,   238,   336,   239,     0,   116,   238,   362,   239,     0,
     164,   238,   392,   239,     0,   166,   238,   404,   239,     0,
     408,     0,   421,     0,    12,   429,     0,   246,     0,   205,
       7,     0,   205,   171,     7,     0,   205,   207,     7,     0,
     205,    25,     7,     0,   205,   206,     7,     0,   205,   205,
       7,     0,   205,     5,     7,     0,   206,     7,     0,   207,
       7,     0,   207,    50,     7,     0,   207,    87,     7,     0,
     207,    56,     7,     0,   207,    69,     7,     0,   207,    71,
       7,     0,   207,    83,     7,     0,   207,    98,     7,     0,
     207,   116,     7,     0,   207,   164,     7,     0,   207,   166,
       7,     0,   207,     3,     7,     0,     0,   247,   412,     0,
       0,     0,   248,   249,   250,     0,     5,   208,   256,     7,
       0,     5,   271,   208,   256,     7,     0,     0,     5,   269,
     208,   251,   256,     7,     0,    51,   232,   267,   233,     7,
       0,   253,     0,   421,     0,   252,     0,    10,   230,   424,
       8,   424,   231,     0,    10,   230,   424,     8,   424,     8,
     424,   231,     0,    11,     0,     0,     0,     5,   232,     3,
     233,   208,    54,   254,   232,   235,   264,   255,   240,   235,
     264,   240,   424,   233,     7,     0,     0,     0,   260,   232,
     257,   261,   258,   262,   233,     0,   235,   264,     0,   256,
       0,     5,   270,     0,    57,     0,     5,     0,   264,     0,
      52,     0,     0,   268,   263,   264,     0,   268,    53,     5,
     270,     0,     5,     0,   266,     0,   238,   265,   239,     0,
       0,   265,   268,   266,     0,   265,   268,   222,   266,     0,
       3,     0,     3,     8,   424,     0,     3,     8,     3,     8,
     424,     0,     5,     0,     5,   238,   424,   239,     0,     5,
     238,   239,     0,     0,   267,   268,     5,     0,   267,   268,
       5,   238,   424,   239,     0,     0,   240,     0,   238,   235,
     424,   239,     0,     0,   238,   239,     0,   238,   424,   239,
       0,     0,   272,   273,     0,    55,   232,   274,   233,     7,
       0,     5,   232,   233,   208,   275,     7,     0,     5,   232,
     259,   233,   208,   275,     7,     0,   421,     0,     0,   274,
     268,     5,     0,    13,   232,   424,   233,     0,    87,   232,
       5,   233,     0,     0,   276,   279,     0,     0,   238,   278,
     239,     0,   275,     0,   278,   240,   275,     0,     0,   280,
     281,     0,   284,     0,     0,     0,   281,   209,   282,   281,
       8,   283,   281,     0,   281,   223,   281,     0,   281,   226,
     281,     0,    47,   232,   281,   240,   281,   233,     0,   281,
     224,   281,     0,   281,   221,   281,     0,   281,   222,   281,
       0,   281,   225,   281,     0,   281,   229,   281,     0,   281,
     215,   281,     0,   281,   217,   281,     0,   281,   216,   281,
       0,   281,   218,   281,     0,   281,   212,   281,     0,   281,
     213,   281,     0,   281,   214,   281,     0,   281,   211,   281,
       0,   281,   210,   281,     0,   222,   281,     0,   221,   281,
       0,   227,   281,     0,   230,   281,   231,     0,   425,     0,
     423,   288,   290,     0,     5,   361,     0,   361,     0,   361,
     288,     0,     0,   108,   285,   232,   279,   233,     0,     0,
      48,   232,     5,   232,   286,   279,   233,   233,   238,   424,
     239,     0,    49,   232,     5,   233,   238,   424,   240,   424,
     239,     0,    44,   232,   361,   233,     0,    46,   232,   361,
     233,     0,     0,    45,   287,   232,   279,   240,   259,   233,
       0,   215,     5,   217,   232,   279,   233,     0,   236,     5,
       0,   236,   189,     0,   236,   127,     0,   236,     3,     0,
     284,   235,     3,     0,   235,     3,     0,   284,   237,     3,
       0,   232,   234,   233,     0,   232,   233,     0,   232,   289,
     233,     0,   281,     0,   289,   240,   281,     0,     0,   238,
     427,   239,     0,   238,    57,   232,   259,   233,   239,     0,
       0,   291,   238,   292,   239,     0,     0,   292,   293,     0,
      84,     5,     7,     0,    70,   238,   294,   239,     0,     0,
     294,   238,   295,   239,     0,     0,   295,   296,     0,    57,
     259,     7,     0,    57,    52,     7,     0,    69,     5,   290,
       7,     0,     0,   297,   238,   298,   239,     0,     0,   298,
     299,     0,    84,     5,     7,     0,    76,   275,     7,     0,
      70,   238,   300,   239,     0,     0,   300,   238,   301,   239,
       0,     0,   301,   302,     0,    74,     5,     7,     0,    75,
       5,     7,     0,    70,   238,   303,   239,     0,     0,   303,
     238,   304,   239,     0,     0,   304,   305,     0,    77,     5,
       7,     0,    78,   424,     7,     0,    79,   424,     7,     0,
      80,   424,     7,     0,    81,   424,     7,     0,    82,   424,
       7,     0,     0,   306,   307,     0,   238,   308,   239,     0,
     421,     0,     0,   308,   309,     0,    84,     5,     7,     0,
      84,     5,   269,     7,     0,    74,     5,     7,     0,    70,
     238,   310,   239,     0,    70,     5,   238,   310,   239,     0,
       0,   310,   238,   311,   239,     0,     0,   311,   312,     0,
      74,     5,     7,     0,    57,   259,     7,     0,    58,   259,
       7,     0,    64,   275,     7,     0,    63,   275,     7,     0,
      68,     5,     7,     0,    65,   238,     3,   268,     3,   239,
       7,     0,    59,   259,     7,     0,    60,   259,     7,     0,
      87,   275,     7,     0,    62,   275,     7,     0,    61,   275,
       7,     0,    87,   232,   275,   240,   275,   233,     7,     0,
      62,   232,   275,   240,   275,   233,     7,     0,    61,   232,
     275,   240,   275,   233,     7,     0,     0,   313,   314,     0,
     238,   315,   239,     0,   421,     0,     0,   315,   316,     0,
      84,     5,     7,     0,    84,     5,   269,     7,     0,    74,
       5,     7,     0,    85,   238,   317,   239,     0,    92,   238,
     323,   239,     0,    94,   238,   330,   239,     0,    56,   238,
     333,   239,     0,     0,   317,   238,   318,   239,     0,     0,
     318,   319,     0,    84,     5,     7,     0,    86,     5,     7,
       0,    86,     5,   269,     7,     0,    87,     5,   320,     7,
       0,    88,   238,     5,   268,     5,   239,     7,     0,    89,
     277,     7,     0,    90,   259,     7,     0,    91,   259,     7,
       0,     0,     0,     0,   238,    99,     5,     7,    98,     5,
     269,     7,   321,    50,   259,     7,   322,   116,     5,   270,
       7,   239,     0,     0,   323,   238,   324,   239,     0,     0,
     324,   325,     0,    84,     5,     7,     0,    93,   326,     7,
       0,    86,   328,     7,     0,     5,     0,   238,   327,   239,
       0,     0,   327,   268,     5,     0,     5,     0,   238,   329,
     239,     0,     0,   329,   268,     5,     0,     0,   330,   238,
     331,   239,     0,     0,   331,   332,     0,    84,     5,     7,
       0,    74,     5,     7,     0,    86,     5,     7,     0,     0,
     333,   238,   334,   239,     0,     0,   334,   335,     0,    86,
       5,     7,     0,    95,   260,     7,     0,    96,   263,     7,
       0,    97,     5,   270,     7,     0,     0,   336,   337,     0,
     238,   338,   239,     0,   421,     0,     0,   338,   339,     0,
      84,     5,     7,     0,    84,     5,   269,     7,     0,    74,
       5,     7,     0,    99,   238,   340,   239,     0,   103,   238,
     346,   239,     0,     0,   340,   238,   341,   239,     0,     0,
     341,   342,     0,    84,     5,     7,     0,    74,    94,     7,
       0,    74,   104,     7,     0,    74,     5,     7,     0,     0,
     100,     5,   270,   343,   345,     7,     0,   101,     3,     7,
       0,     0,   232,   344,   279,   233,     7,     0,   115,   259,
       7,     0,    71,     5,     7,     0,    72,     5,     7,     0,
      69,     5,     7,     0,   102,     3,     7,     0,     0,   232,
       5,   233,     0,     0,   346,   347,     0,   104,   238,   352,
     239,     0,   105,   238,   352,   239,     0,   106,   238,   356,
     239,     0,   107,   238,   348,   239,     0,     0,   348,   349,
       0,    74,     5,     7,     0,    97,     5,     7,     0,   238,
     350,   239,     0,     0,   350,   351,     0,    66,   361,     7,
       0,    67,   361,     7,     0,   103,   361,     7,     0,   115,
     259,     7,     0,     0,   352,   353,     0,     0,     0,   360,
     232,   354,   279,   355,   240,   279,   233,     7,     0,   115,
     259,     7,     0,    69,     5,     7,     0,    71,     5,     7,
       0,    72,     5,     7,     0,    73,   232,     3,   233,     7,
       0,     0,   356,   357,     0,   115,   259,     7,     0,     0,
       0,   360,   232,   358,   279,   359,   240,   361,   233,     7,
       0,     0,   108,     0,   109,     0,   110,     0,   111,     0,
     112,     0,   113,     0,   114,     0,   238,     5,     5,   239,
       0,   238,     5,   239,     0,     0,   362,   363,     0,   238,
     364,   239,     0,   421,     0,     0,   364,   365,     0,    84,
       5,     7,     0,    84,     5,   269,     7,     0,   117,   238,
     367,   239,     0,     0,   124,   366,   238,   374,   239,     0,
       0,   367,   238,   368,   239,     0,     0,   368,   369,     0,
      84,     5,     7,     0,    74,     5,     7,     0,   118,   370,
       7,     0,   119,   429,     7,     0,   122,   372,     7,     0,
     123,     5,     7,     0,   120,   426,     7,     0,   121,   429,
       7,     0,     5,   270,     0,   238,   371,   239,     0,     0,
     371,   268,     5,     0,     5,     0,   238,   373,   239,     0,
       0,   373,   268,     5,     0,     0,   374,   375,     0,     5,
       5,     7,     0,   126,   275,     7,     0,   138,   238,   381,
     239,     0,   142,   238,   383,   239,     0,   145,   238,   385,
     239,     0,   148,   238,   387,   239,     0,     5,   232,     5,
     233,     7,     0,   126,   232,   275,   233,     7,     0,   137,
       7,     0,   131,   232,   275,   233,   238,   374,   239,     0,
     131,   232,   275,   233,   238,   374,   239,   132,   238,   374,
     239,     0,   128,   232,     5,   240,   275,   233,     7,     0,
     153,   232,     5,   240,   275,   240,   275,   240,   275,   240,
     275,   233,     7,     0,   154,   232,     5,   240,   426,   233,
       7,     0,   155,   232,     5,   240,   426,   233,     7,     0,
     135,   232,     5,   240,   275,   233,     7,     0,   136,   232,
       5,   240,   259,   240,     5,   233,     7,     0,   129,   232,
       5,   240,     5,   240,   426,   233,     7,     0,   130,   232,
       5,   240,     5,   240,   424,   233,     7,     0,   133,   232,
       5,   240,   424,   240,   426,   240,   424,   233,     7,     0,
     134,   232,     5,   240,     5,   240,     5,   240,   424,   240,
     426,   240,   424,   240,   424,   233,     7,     0,   138,   232,
     424,   240,   424,   240,   275,   240,   275,   233,   238,   374,
     239,     0,   142,   232,   424,   240,   424,   240,   275,   240,
     424,   240,   424,   233,   238,   374,   239,     0,   145,   232,
     424,   240,   424,   240,   275,   233,   238,   374,   239,     0,
     145,   232,   424,   240,   424,   240,   275,   240,   424,   233,
     238,   374,   239,     0,     0,   171,   376,   232,   378,   379,
     233,     7,     0,     0,   174,   377,   232,   378,   379,   233,
       7,     0,   151,   232,   259,   240,   275,   233,     7,     0,
     166,   232,     5,   233,     7,     0,   152,   232,   429,   233,
       7,     0,   156,   232,     5,   240,   426,   240,   424,   233,
       7,     0,   157,   232,     5,   240,   424,   240,   429,   233,
       7,     0,   158,   238,     5,   239,     7,     0,   159,   238,
       5,   239,     7,     0,   163,   238,     5,   240,   259,   240,
     429,   240,   429,   240,   275,   239,     7,     0,   163,   238,
       5,   240,   259,   240,   429,   239,     7,     0,   160,   232,
       5,   240,     5,   240,   424,   240,   424,   233,   238,   374,
     239,     7,     0,   161,   232,     5,   240,     5,   233,     7,
       0,   162,   232,     5,   240,     5,   233,     7,     0,   277,
       0,     5,     0,     0,   379,   380,     0,   240,   186,   429,
       0,   240,   189,   426,     0,   240,   426,     0,     0,   381,
     382,     0,   139,   424,     7,     0,   140,   424,     7,     0,
     127,   275,     7,     0,   141,   275,     7,     0,   124,   238,
     374,   239,     0,     0,   383,   384,     0,   139,   424,     7,
       0,   140,   424,     7,     0,   127,   275,     7,     0,   143,
     424,     7,     0,   144,   424,     7,     0,   124,   238,   374,
     239,     0,     0,   385,   386,     0,   146,   424,     7,     0,
      76,   424,     7,     0,   147,   275,     7,     0,   204,   424,
       7,     0,   124,   238,   374,   239,     0,     0,   387,   388,
       0,   146,   424,     7,     0,   149,   424,     7,     0,    76,
     424,     7,     0,   204,   424,     7,     0,   117,     5,     7,
       0,   150,   238,   389,   239,     0,   124,   238,   374,   239,
       0,   125,   238,   374,   239,     0,     0,   389,   238,   390,
     239,     0,     0,   390,   391,     0,    74,     5,     7,     0,
      99,     5,     7,     0,   115,   259,     7,     0,    76,   424,
       7,     0,    87,   275,     7,     0,   204,     5,     7,     0,
       0,   392,   393,     0,   238,   394,   239,     0,   421,     0,
       0,   394,   395,     0,    84,     5,     7,     0,    84,     5,
     269,     7,     0,   118,     5,   270,     7,     0,   165,     5,
       7,     0,    99,   238,   396,   239,     0,     0,   396,   238,
     397,   239,     0,     0,   397,   398,     0,    84,     5,     7,
       0,    63,   238,   399,   239,     0,     0,   399,   104,   238,
     400,   239,     0,   399,     5,   238,   400,   239,     0,     0,
     400,   401,     0,     0,   360,   232,   402,   279,   233,     7,
       0,    74,     5,     7,     0,     0,   115,   403,   259,     7,
       0,    69,     5,     7,     0,    71,     5,     7,     0,     0,
     404,   405,     0,   238,   406,   239,     0,   421,     0,     0,
     406,   407,     0,    84,     5,     7,     0,   167,     5,     7,
       0,   191,     5,     7,     0,   169,   429,     7,     0,   124,
     238,   410,   239,     0,     0,   166,     5,   168,     5,   409,
     238,   410,   239,     0,     0,     0,   410,   411,   412,     0,
     170,   232,   414,   417,   418,   233,     7,     0,   171,   232,
     414,   417,   418,   233,     7,     0,   171,   232,     6,   240,
     424,   418,   233,     7,     0,   171,   232,     6,   240,   202,
     232,   429,   233,   418,   233,     7,     0,     0,   172,   232,
     259,   413,   240,   115,   259,   418,   233,     7,     0,   173,
     232,     6,   418,   233,     7,     0,     5,   416,   240,     0,
       5,   416,   415,     5,   416,   240,     0,   223,     0,   224,
       0,   221,     0,   222,     0,     0,   232,   259,   233,     0,
     176,     0,   177,   259,     0,   178,   259,     0,   180,   238,
     238,   427,   239,   238,   427,   239,   238,   427,   239,   239,
       0,   179,   259,     0,   179,   238,   275,   240,   275,   240,
     275,   239,   238,   426,   240,   426,   240,   426,   239,     0,
     181,   238,   427,   239,     0,   182,   238,   238,   427,   239,
     238,   427,   239,   239,   238,   424,   239,     0,   183,   238,
     238,   427,   239,   238,   427,   239,   238,   427,   239,   239,
     238,   424,   240,   424,   239,     0,   184,   238,   238,   427,
     239,   238,   427,   239,   238,   427,   239,   238,   427,   239,
     239,   238,   424,   240,   424,   240,   424,   239,     0,   177,
     259,   185,     5,   238,   424,   240,   424,   239,   238,   424,
     239,     0,     0,   418,   419,     0,   240,   186,   429,     0,
     240,   186,   217,   429,     0,   240,   186,   220,   429,     0,
     240,   187,   424,     0,   240,   194,     0,   240,   195,     0,
     240,   190,   424,     0,   240,   191,     5,     0,   240,   192,
     420,     0,   240,   193,   420,     0,   240,   191,   420,     0,
     240,   188,   424,     0,   240,   189,   426,     0,   240,   175,
       5,     0,   240,   197,     5,     0,   240,   196,   424,     0,
     240,    63,   426,     0,   240,   198,   424,     0,   240,   198,
     238,   427,   239,     0,   240,   199,     0,   240,   200,     0,
     240,   120,   426,     0,   240,   151,   238,   275,   240,   275,
     240,   275,   239,     0,   240,   201,   277,     0,     0,   420,
       6,     0,     5,   208,   426,     7,     0,     5,   208,     6,
       7,     0,     5,   208,   202,   232,   429,   233,     7,     0,
       5,   208,   430,     7,     0,    18,   232,   422,   233,     7,
       0,     0,   422,   268,     5,     0,   422,   268,     5,   208,
     424,     0,   422,   268,     5,   208,     6,     0,    24,     0,
      25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
      30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
      35,     0,    36,     0,    37,     0,    38,     0,    39,     0,
      40,     0,    41,     0,    42,     0,    43,     0,     5,     0,
     425,     0,   230,   424,   231,     0,   222,   424,     0,   227,
     424,     0,   424,   222,   424,     0,   424,   221,   424,     0,
     424,   223,   424,     0,   424,   224,   424,     0,   424,   225,
     424,     0,   424,   229,   424,     0,   424,   215,   424,     0,
     424,   217,   424,     0,   424,   216,   424,     0,   424,   218,
     424,     0,   424,   212,   424,     0,   424,   213,   424,     0,
     424,   211,   424,     0,   424,   210,   424,     0,    24,   232,
     424,   233,     0,    25,   232,   424,   233,     0,    26,   232,
     424,   233,     0,    27,   232,   424,   233,     0,    28,   232,
     424,   233,     0,    29,   232,   424,   233,     0,    30,   232,
     424,   233,     0,    31,   232,   424,   233,     0,    32,   232,
     424,   233,     0,    33,   232,   424,   233,     0,    34,   232,
     424,   240,   424,   233,     0,    35,   232,   424,   233,     0,
      36,   232,   424,   233,     0,    37,   232,   424,   233,     0,
      38,   232,   424,   233,     0,    39,   232,   424,   233,     0,
      40,   232,   424,   233,     0,    41,   232,   424,   240,   424,
     233,     0,    42,   232,   424,   240,   424,   233,     0,    43,
     232,   424,   240,   424,   233,     0,   424,   209,   424,     8,
     424,     0,   424,   235,     0,     4,     0,     3,     0,    19,
       0,    20,     0,    21,     0,    22,     0,    23,     0,     5,
       0,     0,   424,     0,   428,     0,   238,   427,   239,     0,
     424,     0,   428,     0,   427,   240,   424,     0,   427,   240,
     428,     0,   424,     8,   424,     0,   424,     8,   424,     8,
     424,     0,     5,   238,   239,     0,     5,   238,   427,   239,
       0,    14,   232,     5,   233,     0,    15,   232,     5,   240,
       5,   233,     0,    16,   232,   424,   240,   424,   240,   424,
     233,     0,    17,   232,   424,   240,   424,   240,   424,   233,
       0,     6,     0,     5,     0,   430,     0,   203,     0,     9,
     232,   429,   240,   429,   233,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   359,   359,   431,   434,   434,   440,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   453,   455,   457,   462,
     471,   474,   476,   478,   480,   482,   484,   486,   488,   490,
     492,   494,   496,   498,   500,   502,   504,   506,   508,   510,
     513,   513,   535,   538,   538,   542,   547,   550,   550,   555,
     557,   559,   561,   566,   578,   588,   614,   614,   614,   640,
     640,   640,   668,   677,   684,   719,   724,   735,   738,   752,
     757,   760,   809,   822,   848,   853,   868,   886,   907,   913,
     922,   936,   970,   983,  1003,  1007,  1017,  1034,  1034,  1037,
    1043,  1046,  1049,  1059,  1062,  1065,  1069,  1089,  1133,  1137,
    1140,  1157,  1166,  1173,  1173,  1181,  1187,  1191,  1196,  1201,
    1201,  1214,  1218,  1218,  1218,  1260,  1266,  1272,  1278,  1284,
    1290,  1296,  1302,  1308,  1314,  1320,  1326,  1332,  1338,  1344,
    1350,  1356,  1363,  1369,  1371,  1380,  1384,  1390,  1464,  1498,
    1507,  1519,  1519,  1532,  1532,  1548,  1560,  1566,  1572,  1572,
    1603,  1627,  1640,  1646,  1653,  1659,  1666,  1673,  1683,  1686,
    1687,  1690,  1693,  1696,  1701,  1704,  1718,  1725,  1730,  1735,
    1739,  1746,  1751,  1756,  1761,  1767,  1771,  1776,  1779,  1815,
    1823,  1828,  1837,  1841,  1850,  1853,  1858,  1863,  1868,  1876,
    1880,  1892,  1902,  1907,  1912,  1917,  1929,  1933,  1983,  1986,
    1989,  1992,  1995,  2004,  2011,  2014,  2036,  2039,  2049,  2053,
    2061,  2068,  2077,  2080,  2100,  2117,  2139,  2149,  2153,  2165,
    2189,  2214,  2219,  2227,  2235,  2245,  2262,  2270,  2277,  2284,
    2293,  2302,  2311,  2330,  2338,  2341,  2364,  2368,  2377,  2381,
    2389,  2396,  2405,  2408,  2411,  2414,  2419,  2437,  2484,  2500,
    2504,  2509,  2514,  2519,  2533,  2553,  2558,  2582,  2637,  2641,
    2641,  2641,  2718,  2724,  2729,  2734,  2738,  2745,  2748,  2753,
    2771,  2776,  2780,  2797,  2811,  2816,  2820,  2833,  2839,  2846,
    2853,  2857,  2864,  2874,  2885,  2902,  2974,  2986,  2990,  3024,
    3027,  3030,  3074,  3081,  3084,  3106,  3110,  3118,  3122,  3130,
    3137,  3147,  3149,  3154,  3169,  3185,  3203,  3207,  3212,  3216,
    3219,  3229,  3229,  3292,  3297,  3297,  3615,  3620,  3629,  3638,
    3647,  3652,  3655,  3693,  3710,  3736,  3741,  3744,  3747,  3752,
    3760,  3763,  3775,  3785,  3797,  3806,  3809,  3813,  3815,  3817,
    3823,  3843,  3847,  3847,  3847,  3982,  4006,  4015,  4024,  4033,
    4043,  4060,  4064,  4098,  4098,  4098,  4177,  4180,  4181,  4182,
    4183,  4184,  4185,  4186,  4190,  4213,  4235,  4242,  4245,  4266,
    4270,  4278,  4282,  4291,  4298,  4301,  4301,  4308,  4324,  4341,
    4357,  4361,  4366,  4375,  4378,  4383,  4388,  4393,  4398,  4405,
    4444,  4449,  4454,  4464,  4476,  4480,  4485,  4496,  4505,  4512,
    4538,  4545,  4551,  4557,  4563,  4571,  4593,  4600,  4606,  4617,
    4628,  4641,  4656,  4676,  4697,  4709,  4729,  4746,  4765,  4786,
    4820,  4833,  4847,  4860,  4873,  4873,  4882,  4882,  4891,  4901,
    4911,  4919,  4932,  4945,  4954,  4963,  4977,  4990,  5007,  5021,
    5039,  5045,  5055,  5061,  5064,  5068,  5078,  5092,  5104,  5108,
    5114,  5118,  5122,  5127,  5136,  5149,  5153,  5159,  5163,  5167,
    5171,  5176,  5185,  5197,  5200,  5206,  5210,  5214,  5218,  5227,
    5242,  5245,  5251,  5255,  5259,  5264,  5274,  5280,  5286,  5295,
    5299,  5303,  5317,  5320,  5332,  5361,  5364,  5367,  5375,  5391,
    5399,  5402,  5423,  5426,  5437,  5440,  5448,  5456,  5502,  5507,
    5512,  5516,  5520,  5527,  5531,  5535,  5540,  5546,  5552,  5565,
    5576,  5579,  5579,  5615,  5626,  5626,  5632,  5641,  5657,  5665,
    5668,  5673,  5676,  5685,  5688,  5696,  5708,  5719,  5724,  5729,
    5729,  5756,  5760,  5760,  5773,  5779,  5783,  5789,  5795,  5795,
    5804,  5811,  5825,  5847,  5850,  5851,  5852,  5855,  5859,  5863,
    5871,  5878,  5885,  5909,  5916,  5928,  5941,  5961,  5987,  6020,
    6040,  6064,  6067,  6075,  6082,  6089,  6093,  6097,  6101,  6105,
    6115,  6120,  6125,  6145,  6152,  6161,  6170,  6179,  6186,  6194,
    6198,  6207,  6211,  6215,  6223,  6229,  6237,  6244,  6290,  6307,
    6313,  6319,  6325,  6329,  6332,  6338,  6344,  6355,  6357,  6358,
    6359,  6360,  6361,  6362,  6363,  6364,  6365,  6366,  6367,  6368,
    6369,  6370,  6371,  6372,  6373,  6374,  6375,  6376,  6379,  6381,
    6382,  6383,  6384,  6385,  6386,  6387,  6388,  6389,  6390,  6391,
    6392,  6393,  6394,  6395,  6396,  6397,  6398,  6399,  6400,  6401,
    6402,  6403,  6404,  6405,  6406,  6407,  6408,  6409,  6410,  6411,
    6412,  6413,  6414,  6415,  6416,  6417,  6418,  6419,  6422,  6425,
    6426,  6427,  6428,  6429,  6430,  6431,  6447,  6452,  6458,  6461,
    6466,  6474,  6477,  6480,  6490,  6498,  6509,  6525,  6547,  6562,
    6600,  6608,  6618,  6623,  6637,  6641,  6657
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "tINT", "tFLOAT", "tSTRING", "tBIGSTR", 
  "tEND", "tDOTS", "tStrCat", "tFor", "tEndFor", "tInclude", "tConstant", 
  "tList", "tListAlt", "tLinSpace", "tLogSpace", "tDefineConstant", "tPi", 
  "t0D", "t1D", "t2D", "t3D", "tExp", "tLog", "tLog10", "tSqrt", "tSin", 
  "tAsin", "tCos", "tAcos", "tTan", "tAtan", "tAtan2", "tSinh", "tCosh", 
  "tTanh", "tFabs", "tFloor", "tCeil", "tFmod", "tModulo", "tHypot", 
  "tSolidAngle", "tTrace", "tOrder", "tCrossProduct", "tMHTransform", 
  "tMHJacNL", "tGroup", "tDefineGroup", "tAll", "tInSupport", 
  "tMovingBand2D", "tDefineFunction", "tConstraint", "tRegion", 
  "tSubRegion", "tRegionRef", "tSubRegionRef", "tFilter", "tCoefficient", 
  "tValue", "tTimeFunction", "tBranch", "tNode", "tLoop", 
  "tNameOfResolution", "tJacobian", "tCase", "tIntegration", 
  "tFMMIntegration", "tMatrix", "tType", "tSubType", "tCriterion", 
  "tGeoElement", "tNumberOfPoints", "tMaxNumberOfPoints", 
  "tNumberOfDivisions", "tMaxNumberOfDivisions", "tStoppingCriterion", 
  "tFunctionSpace", "tName", "tBasisFunction", "tNameOfCoef", "tFunction", 
  "tdFunction", "tSubFunction", "tSupport", "tEntity", "tSubSpace", 
  "tNameOfBasisFunction", "tGlobalQuantity", "tEntityType", 
  "tEntitySubType", "tNameOfConstraint", "tFormulation", "tQuantity", 
  "tNameOfSpace", "tIndexOfSystem", "tSymmetry", "tEquation", "tGalerkin", 
  "tdeRham", "tGlobalTerm", "tGlobalEquation", "tDt", "tDtDof", "tDtDt", 
  "tDtDtDof", "tJacNL", "tNeverDt", "tDtNL", "tIn", "tResolution", 
  "tDefineSystem", "tNameOfFormulation", "tNameOfMesh", "tFrequency", 
  "tSolver", "tOriginSystem", "tDestinationSystem", "tOperation", 
  "tOperationEnd", "tSetTime", "tDTime", "tSetFrequency", 
  "tFourierTransform", "tFourierTransformJ", "tIf", "tElse", "tLanczos", 
  "tPerturbation", "tUpdate", "tUpdateConstraint", "tBreak", 
  "tTimeLoopTheta", "tTime0", "tTimeMax", "tTheta", "tTimeLoopNewmark", 
  "tBeta", "tGamma", "tIterativeLoop", "tNbrMaxIteration", 
  "tRelaxationFactor", "tIterativeTimeReduction", "tDivisionCoefficient", 
  "tChangeOfState", "tChangeOfCoordinates", "tSystemCommand", 
  "tGenerateFMMGroups", "tGenerateOnly", "tGenerateOnlyJac", 
  "tSolveJac_AdaptRelax", "tSaveSolutionExtendedMH", "tInit_MovingBand2D", 
  "tMesh_MovingBand2D", "tGenerate_MH_Moving", "tGenerateGroup", 
  "tGenerateJacGroup", "tSaveMesh", "tPostProcessing", "tNameOfSystem", 
  "tPostOperation", "tNameOfPostProcessing", "tUsingPost", "tAppend", 
  "tPlot", "tPrint", "tPrintGroup", "tEcho", "tWrite", "tAdapt", 
  "tOnGlobal", "tOnRegion", "tOnElementsOf", "tOnGrid", "tOnSection", 
  "tOnPoint", "tOnLine", "tOnPlane", "tOnBox", "tWithArgument", "tFile", 
  "tDepth", "tDimension", "tTimeStep", "tHarmonicToTime", "tFormat", 
  "tHeader", "tFooter", "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", 
  "tNoNewLine", "tDecomposeInSimplex", "tChangeOfValues", "tStr", "tDate", 
  "tFlag", "tHelp", "tCpu", "tCheck", "tDEF", "'?'", "tOR", "tAND", 
  "tEQUAL", "tNOTEQUAL", "tAPPROXEQUAL", "'<'", "tLESSOREQUAL", "'>'", 
  "tGREATEROREQUAL", "tLESSLESS", "tGREATERGREATER", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", 
  "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", 
  "Stats", "@1", "ProblemDefinitions", "@2", "ProblemDefinition", 
  "Interactive", "@3", "Groups", "@4", "Group", "@5", "ForLoop", 
  "MovingBand2DGroup", "@6", "@7", "ReducedGroupRHS", "@8", "@9", 
  "GroupRHS", "FunctionForGroup", "ListOfRegionOrAll", "SuppListOfRegion", 
  "SuppListTypeForGroup", "ListOfRegion", "RecursiveListOfRegion", 
  "IRegion", "DefineGroups", "Comma", "DefineDimension", "MultipleIndex", 
  "Index", "Functions", "Function", "DefineFunctions", "Expression", 
  "@10", "ListOfExpression", "RecursiveListOfExpression", 
  "WholeQuantityExpression", "@11", "WholeQuantity", "@12", "@13", 
  "WholeQuantity_Single", "@14", "@15", "@16", "ArgumentsForFunction", 
  "RecursiveListOfQuantity", "ParametersForFunction", "JacobianMethods", 
  "JacobianMethod", "JacobianMethodTerm", "JacobianCases", "JacobianCase", 
  "JacobianCaseTerm", "IntegrationMethods", "IntegrationMethod", 
  "IntegrationMethodTerm", "IntegrationCases", "IntegrationCase", 
  "IntegrationCaseTerm", "QuadratureCases", "QuadratureCase", 
  "QuadratureCaseTerm", "Constraints", "BracedConstraint", "Constraint", 
  "ConstraintTerm", "ConstraintCases", "ConstraintCase", 
  "ConstraintCaseTerm", "FunctionSpaces", "BracedFunctionSpace", 
  "FunctionSpace", "FunctionSpaceTerm", "BasisFunctions", "BasisFunction", 
  "BasisFunctionTerm", "OptionalParametersForBasisFunction", "@17", "@18", 
  "SubSpaces", "SubSpace", "SubSpaceTerm", "ListOfBasisFunction", 
  "RecursiveListOfBasisFunction", "ListOfBasisFunctionCoef", 
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", 
  "GlobalQuantity", "GlobalQuantityTerm", "ConstraintInFSs", 
  "ConstraintInFS", "ConstraintInFSTerm", "Formulations", 
  "BracedFormulation", "Formulation", "FormulationTerm", 
  "DefineQuantities", "DefineQuantity", "DefineQuantityTerm", "@19", 
  "@20", "IndexInFunctionSpace", "Equations", "EquationTerm", 
  "GlobalEquation", "GlobalEquationTerm", "GlobalEquationTermTerm", 
  "GlobalEquationTermTermTerm", "LocalTerm", "LocalTermTerm", "@21", 
  "@22", "GlobalTerm", "GlobalTermTerm", "@23", "@24", "TermOperator", 
  "Quantity_Def", "Resolutions", "BracedResolution", "Resolution", 
  "ResolutionTerm", "@25", "DefineSystems", "DefineSystem", 
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation", 
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm", 
  "@26", "@27", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@28", "@29", 
  "PostOperations", "BracedPostOperation", "PostOperation", 
  "PostOperationTerm", "SeparatePostOperation", "@30", 
  "PostSubOperations", "@31", "PostSubOperation", "@32", 
  "PostQuantitiesToPrint", "Combination", "PostQuantitySupport", 
  "PrintSubType", "PrintOptions", "PrintOption", "ParsedStrings", 
  "Affectation", "DefineConstants", "NameForFunction", "FExpr", 
  "OneFExpr", "ListOfFExpr", "RecursiveListOfFExpr", "MultiFExpr", 
  "CharExpr", "StrCat", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,   242,   241,   243,   244,   243,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     247,   246,   248,   249,   248,   250,   250,   251,   250,   250,
     250,   250,   250,   252,   252,   252,   254,   255,   253,   257,
     258,   256,   256,   259,   259,   260,   260,   261,   261,   262,
     262,   262,   263,   264,   264,   265,   265,   265,   266,   266,
     266,   266,   266,   266,   267,   267,   267,   268,   268,   269,
     270,   270,   271,   272,   272,   273,   273,   273,   273,   274,
     274,   275,   275,   276,   275,   277,   277,   278,   278,   280,
     279,   281,   282,   283,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   284,   284,   284,   284,   284,
     284,   285,   284,   286,   284,   284,   284,   284,   287,   284,
     284,   284,   284,   284,   284,   284,   284,   284,   288,   288,
     288,   289,   289,   290,   290,   290,   291,   291,   292,   292,
     293,   293,   294,   294,   295,   295,   296,   296,   296,   297,
     297,   298,   298,   299,   299,   299,   300,   300,   301,   301,
     302,   302,   302,   303,   303,   304,   304,   305,   305,   305,
     305,   305,   305,   306,   306,   307,   307,   308,   308,   309,
     309,   309,   309,   309,   310,   310,   311,   311,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   313,   313,   314,   314,   315,   315,   316,
     316,   316,   316,   316,   316,   316,   317,   317,   318,   318,
     319,   319,   319,   319,   319,   319,   319,   319,   320,   321,
     322,   320,   323,   323,   324,   324,   325,   325,   325,   326,
     326,   327,   327,   328,   328,   329,   329,   330,   330,   331,
     331,   332,   332,   332,   333,   333,   334,   334,   335,   335,
     335,   335,   336,   336,   337,   337,   338,   338,   339,   339,
     339,   339,   339,   340,   340,   341,   341,   342,   342,   342,
     342,   343,   342,   342,   344,   342,   342,   342,   342,   342,
     342,   345,   345,   346,   346,   347,   347,   347,   347,   348,
     348,   349,   349,   349,   350,   350,   351,   351,   351,   351,
     352,   352,   354,   355,   353,   353,   353,   353,   353,   353,
     356,   356,   357,   358,   359,   357,   360,   360,   360,   360,
     360,   360,   360,   360,   361,   361,   362,   362,   363,   363,
     364,   364,   365,   365,   365,   366,   365,   367,   367,   368,
     368,   369,   369,   369,   369,   369,   369,   369,   369,   370,
     370,   371,   371,   372,   372,   373,   373,   374,   374,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   376,   375,   377,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     378,   378,   379,   379,   380,   380,   380,   381,   381,   382,
     382,   382,   382,   382,   383,   383,   384,   384,   384,   384,
     384,   384,   385,   385,   386,   386,   386,   386,   386,   387,
     387,   388,   388,   388,   388,   388,   388,   388,   388,   389,
     389,   390,   390,   391,   391,   391,   391,   391,   391,   392,
     392,   393,   393,   394,   394,   395,   395,   395,   395,   395,
     396,   396,   397,   397,   398,   398,   399,   399,   399,   400,
     400,   402,   401,   401,   403,   401,   401,   401,   404,   404,
     405,   405,   406,   406,   407,   407,   407,   407,   407,   409,
     408,   410,   411,   410,   412,   412,   412,   412,   413,   412,
     412,   414,   414,   415,   415,   415,   415,   416,   416,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     418,   418,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   420,   420,   421,   421,
     421,   421,   421,   422,   422,   422,   422,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   425,   425,
     425,   425,   425,   425,   425,   425,   426,   426,   426,   426,
     427,   427,   427,   427,   428,   428,   428,   428,   428,   428,
     428,   428,   429,   429,   429,   429,   430
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     0,     2,     0,     0,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     1,     1,     2,     1,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     2,     0,     0,     3,     4,     5,     0,     6,     5,
       1,     1,     1,     6,     8,     1,     0,     0,    18,     0,
       0,     7,     2,     1,     2,     1,     1,     1,     1,     0,
       3,     4,     1,     1,     3,     0,     3,     4,     1,     3,
       5,     1,     4,     3,     0,     3,     6,     0,     1,     4,
       0,     2,     3,     0,     2,     5,     6,     7,     1,     0,
       3,     4,     4,     0,     2,     0,     3,     1,     3,     0,
       2,     1,     0,     0,     7,     3,     3,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     1,     3,     2,     1,
       2,     0,     5,     0,    11,     9,     4,     4,     0,     7,
       6,     2,     2,     2,     2,     3,     2,     3,     3,     2,
       3,     1,     3,     0,     3,     6,     0,     4,     0,     2,
       3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
       4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
       3,     3,     4,     0,     4,     0,     2,     3,     3,     3,
       3,     3,     3,     0,     2,     3,     1,     0,     2,     3,
       4,     3,     4,     5,     0,     4,     0,     2,     3,     3,
       3,     3,     3,     3,     7,     3,     3,     3,     3,     3,
       7,     7,     7,     0,     2,     3,     1,     0,     2,     3,
       4,     3,     4,     4,     4,     4,     0,     4,     0,     2,
       3,     3,     4,     4,     7,     3,     3,     3,     0,     0,
       0,    18,     0,     4,     0,     2,     3,     3,     3,     1,
       3,     0,     3,     1,     3,     0,     3,     0,     4,     0,
       2,     3,     3,     3,     0,     4,     0,     2,     3,     3,
       3,     4,     0,     2,     3,     1,     0,     2,     3,     4,
       3,     4,     4,     0,     4,     0,     2,     3,     3,     3,
       3,     0,     6,     3,     0,     5,     3,     3,     3,     3,
       3,     0,     3,     0,     2,     4,     4,     4,     4,     0,
       2,     3,     3,     3,     0,     2,     3,     3,     3,     3,
       0,     2,     0,     0,     9,     3,     3,     3,     3,     5,
       0,     2,     3,     0,     0,     9,     0,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     0,     2,     3,     1,
       0,     2,     3,     4,     4,     0,     5,     0,     4,     0,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     0,     3,     1,     3,     0,     3,     0,     2,     3,
       3,     4,     4,     4,     4,     5,     5,     2,     7,    11,
       7,    13,     7,     7,     7,     9,     9,     9,    11,    17,
      13,    15,    11,    13,     0,     7,     0,     7,     7,     5,
       5,     9,     9,     5,     5,    13,     9,    14,     7,     7,
       1,     1,     0,     2,     3,     3,     2,     0,     2,     3,
       3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
       3,     4,     0,     2,     3,     3,     3,     3,     4,     0,
       2,     3,     3,     3,     3,     3,     4,     4,     4,     0,
       4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
       2,     3,     1,     0,     2,     3,     4,     4,     3,     4,
       0,     4,     0,     2,     3,     4,     0,     5,     5,     0,
       2,     0,     6,     3,     0,     4,     3,     3,     0,     2,
       3,     1,     0,     2,     3,     3,     3,     3,     4,     0,
       8,     0,     0,     3,     7,     7,     8,    11,     0,    10,
       6,     3,     6,     1,     1,     1,     1,     0,     3,     1,
       2,     2,    12,     2,    15,     4,    12,    17,    22,    12,
       0,     2,     3,     4,     4,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     2,     2,     3,     9,     3,     0,     2,     4,     4,
       7,     4,     5,     0,     3,     5,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     6,     4,     4,     4,
       4,     4,     4,     6,     6,     6,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     3,
       1,     1,     3,     3,     3,     5,     3,     4,     4,     6,
       8,     8,     1,     1,     1,     1,     6
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     3,     4,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,    19,     0,    16,    17,   666,   683,   682,     0,   685,
      18,   684,   593,    42,   203,   166,   179,   233,    93,   292,
     366,   489,     0,   518,     0,    20,     0,     0,     0,     0,
       0,    27,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   659,
     658,   665,     0,     0,     0,     0,     0,   660,   661,   662,
     663,   664,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   667,   618,     0,
     668,     0,     0,    87,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    23,    21,    25,    24,
      22,    39,    29,    31,    32,    33,    34,    30,    35,    36,
      37,    38,     0,     0,     0,     0,     0,   589,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   665,   620,   621,     0,   670,     0,   671,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   657,   588,   591,     0,
       0,    88,     0,     6,     0,   207,     8,   204,   206,   168,
       9,   181,    10,   237,    11,   234,   236,     0,     0,     7,
      94,    98,   296,    12,   293,   295,   370,    13,   367,   369,
     493,    14,   490,   492,   529,   522,    15,   519,   521,   547,
       0,     0,     0,    90,    65,     0,    63,   538,     0,   560,
     676,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   619,   669,     0,
     674,     0,   635,   634,   632,   633,   628,   630,   629,   631,
     623,   622,   624,   625,   626,   627,     0,   592,   594,     0,
       0,    55,     0,    44,    52,    50,    51,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
     549,     0,     0,     0,     0,     0,     0,     0,     0,   560,
       0,   560,     0,    64,    78,    81,    75,    62,    73,     0,
      59,     0,   677,   678,     0,     0,     0,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,     0,   647,   648,
     649,   650,   651,   652,     0,     0,     0,     0,   672,   673,
       0,     0,     0,     0,   666,     0,     0,     0,     0,     0,
      84,     0,     0,     0,   205,   208,     0,     0,   167,   169,
       0,   103,     0,   180,   182,     0,     0,     0,     0,     0,
       0,   235,   238,     0,     0,    87,     0,     0,     0,     0,
     294,   297,     0,     0,   375,   368,   371,     0,     0,     0,
       0,   491,   494,   531,     0,     0,     0,     0,     0,   520,
     523,     0,   545,   546,   543,   544,   541,     0,   550,   551,
     103,   553,     0,     0,     0,     0,     0,     0,     0,   560,
       0,    91,     0,     0,    87,     0,     0,     0,     0,   561,
       0,     0,     0,     0,     0,     0,     0,   590,   675,   656,
     686,   596,   595,   665,     0,     0,     0,     0,    47,     0,
       0,    87,     0,   214,     0,     0,   172,     0,   186,     0,
       0,     0,   109,     0,   284,     0,     0,   246,   262,   277,
     103,     0,     0,     0,     0,     0,   303,   323,     0,   377,
       0,     0,   500,    90,     0,   532,     0,   531,     0,     0,
       0,   548,   547,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   659,    79,    83,     0,    74,     0,
       0,    68,    60,    67,   540,   666,   666,     0,     0,     0,
       0,     0,   666,     0,   586,   586,   586,   566,   567,     0,
       0,     0,   581,   582,   105,   679,     0,     0,   646,   653,
     654,   655,    45,     0,     0,    92,     0,    66,     0,     0,
       0,     0,   214,     0,   211,   209,     0,     0,     0,   170,
       0,     0,     0,   184,   104,     0,   183,     0,   241,   239,
       0,     0,     0,     0,     0,   103,    95,   100,   300,   298,
       0,     0,     0,   372,     0,     0,   397,   495,     0,     0,
       0,   498,   530,     0,   524,   532,   525,   527,   526,     0,
       0,   103,     0,   555,     0,     0,     0,   534,     0,     0,
     535,     0,    82,     0,    76,   560,    87,   578,   583,   103,
     575,     0,     0,   562,   565,   573,   574,   568,   569,   572,
     570,   571,   577,   576,     0,   579,   103,   585,     0,     0,
       0,    89,     0,    46,     0,    49,    85,     0,   216,   212,
     210,   174,   171,   188,   185,     0,     0,   665,   597,   598,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   612,   613,   614,   615,   616,     0,   148,
       0,     0,     0,     0,   141,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   139,     0,   136,   286,   245,
     240,   248,   242,   264,   243,   279,   244,    96,     0,   299,
     305,   301,     0,     0,     0,     0,   302,   324,   373,   379,
     374,     0,   496,   502,   499,   497,   533,   528,   542,     0,
       0,     0,     0,     0,     0,   560,   536,    80,    77,     0,
       0,     0,     0,   563,   564,   587,     0,   107,     0,   680,
     681,    56,    48,     0,    53,     0,   213,     0,     0,     0,
     101,   102,   138,     0,     0,     0,     0,     0,     0,     0,
       0,   133,   132,   134,     0,   156,   154,   151,   153,   152,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   163,     0,     0,     0,     0,    97,     0,   340,
     340,   350,   329,     0,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   424,   426,   376,   398,     0,     0,   103,
       0,     0,     0,     0,     0,     0,    61,    72,     0,     0,
     103,   580,   106,   103,     0,     0,     0,     0,     0,     0,
       0,   103,   103,   103,   103,     0,     0,     0,   103,   215,
     217,     0,     0,   173,   175,     0,     0,     0,   187,   189,
       0,   109,     0,     0,     0,     0,   109,     0,   135,     0,
     365,     0,   131,   130,   127,   128,   129,   123,   125,   124,
     126,   119,   120,   115,   118,   121,   116,   122,   155,   157,
     159,     0,   161,     0,     0,   137,     0,     0,     0,     0,
     285,   287,     0,     0,     0,     0,   105,     0,     0,   247,
     249,     0,     0,     0,   263,   265,     0,     0,     0,   278,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     314,   304,   306,   356,   356,   356,     0,     0,     0,     0,
       0,   666,     0,     0,     0,   378,   380,     0,     0,   103,
       0,     0,     0,     0,   103,     0,     0,     0,     0,   407,
       0,   447,     0,   454,     0,   462,   469,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   501,   503,     0,     0,     0,
       0,     0,     0,     0,   539,    90,    70,     0,   108,     0,
      54,    86,     0,     0,     0,     0,   103,     0,   103,     0,
       0,     0,     0,     0,     0,   103,     0,     0,     0,   163,
     193,     0,     0,   146,     0,   147,     0,   143,     0,     0,
     109,   364,     0,   158,   160,     0,     0,     0,     0,     0,
       0,    90,     0,     0,   258,     0,     0,     0,     0,     0,
     273,   275,     0,   269,   271,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,     0,     0,     0,
     109,     0,     0,     0,     0,   357,   358,   359,   360,   361,
     362,   363,     0,   325,   341,     0,   326,     0,   327,   351,
       0,     0,     0,   334,   328,   330,     0,     0,    90,   391,
       0,     0,     0,     0,   393,   395,     0,     0,   399,     0,
       0,   400,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   105,   105,   506,     0,     0,     0,     0,     0,     0,
       0,   537,    71,   103,     0,   219,   220,   225,   226,     0,
     229,     0,   228,   222,   221,    87,   223,   218,     0,   227,
     177,   176,     0,     0,   190,   191,     0,     0,   109,     0,
     142,     0,   113,   162,     0,   164,   288,   289,   290,     0,
     250,   251,     0,     0,     0,    87,   255,   256,   257,   266,
      87,   268,    87,   267,   282,   281,   283,   319,   317,   318,
     310,   308,   309,   307,   311,   313,   320,   316,     0,     0,
       0,     0,     0,     0,   342,     0,   353,     0,     0,     0,
     382,   381,   389,    87,   383,   384,   387,   388,    87,   385,
     386,     0,     0,   103,     0,     0,     0,     0,     0,   103,
       0,     0,     0,   103,     0,     0,   103,   401,   448,     0,
       0,   103,     0,     0,     0,     0,   402,   455,     0,     0,
       0,     0,   103,     0,   403,   463,     0,     0,     0,     0,
       0,     0,     0,     0,   404,   470,   103,     0,   103,   666,
     666,   666,     0,     0,     0,     0,     0,     0,     0,     0,
     441,   440,   442,   442,     0,   504,     0,   666,     0,     0,
       0,     0,     0,    57,   103,   103,     0,   103,   178,   195,
     192,     0,   117,     0,     0,   150,     0,     0,   291,   252,
       0,   253,     0,   274,     0,   270,     0,   321,     0,   346,
     347,   348,     0,   345,   109,   352,   109,   331,   332,     0,
       0,     0,     0,   333,   335,   390,     0,   394,     0,   405,
     406,     0,     0,     0,   397,     0,     0,     0,     0,     0,
     397,     0,     0,     0,     0,     0,   397,     0,     0,     0,
       0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
     397,   397,     0,     0,   479,     0,     0,   430,     0,     0,
       0,     0,     0,   433,   434,     0,     0,     0,     0,   429,
       0,     0,     0,     0,   505,     0,     0,     0,     0,     0,
       0,   584,     0,     0,     0,     0,     0,     0,   149,     0,
       0,   114,     0,     0,     0,   276,   272,     0,     0,   315,
       0,   343,   354,     0,     0,     0,     0,   392,   396,     0,
     666,     0,     0,   666,     0,     0,     0,   103,     0,   451,
     449,   450,   452,   103,     0,   458,   456,   457,   459,   460,
     103,   465,     0,   464,   466,   467,   473,   475,     0,     0,
     471,   472,     0,   474,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   666,   443,     0,   509,   509,
       0,   666,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   194,   196,     0,
       0,   165,     0,     0,     0,   312,   349,     0,     0,   336,
     337,   338,   339,   410,     0,     0,   408,     0,     0,   414,
       0,     0,   453,     0,   461,     0,   468,   477,   478,   481,
     476,   428,     0,   412,   413,     0,     0,     0,   438,   439,
       0,   425,     0,   666,   446,   427,   356,   356,   559,     0,
     552,   556,     0,     0,     0,   232,   231,   224,   230,     0,
       0,     0,     0,     0,     0,     0,   145,     0,   254,   322,
     109,     0,     0,     0,     0,     0,     0,     0,   103,     0,
       0,     0,     0,   103,     0,     0,     0,     0,     0,   444,
     445,     0,     0,     0,   514,   508,     0,   510,   507,   666,
       0,     0,     0,   197,   198,   199,   200,   201,   202,     0,
       0,     0,     0,   416,   417,   397,     0,     0,   415,     0,
       0,   397,     0,     0,     0,   103,     0,     0,     0,   480,
     482,     0,   431,   432,     0,   436,     0,     0,     0,     0,
       0,   511,     0,     0,     0,     0,   144,     0,     0,     0,
       0,     0,   666,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,   103,   516,   517,   513,     0,
     109,   554,     0,     0,     0,   259,   344,   355,   409,   418,
       0,   397,     0,   422,   397,   483,   486,   487,   484,   485,
     488,     0,   397,     0,   515,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   557,     0,
      58,     0,     0,   420,   397,   423,   411,     0,   435,   512,
       0,     0,     0,     0,   437,     0,   260,     0,   421,     0,
       0,     0,     0,     0,   419,   558,    90,     0,     0,   261,
       0,     0,     0
};

static const short yydefgoto[] =
{
    1820,     1,     2,     3,    20,    21,    22,   114,   204,   303,
     576,   304,   305,   894,  1482,   246,   456,   646,   247,   248,
     542,   770,   889,   337,   454,   338,   481,   202,   377,   333,
     378,   119,   220,   405,   491,   492,  1361,   778,   594,   595,
     723,   931,  1386,   724,   799,  1238,   794,   831,   953,   955,
     116,   308,   389,   588,   788,   914,   117,   309,   394,   590,
     789,   919,  1233,  1487,  1578,   115,   207,   307,   385,   583,
     787,   910,   118,   215,   310,   402,   601,   834,   970,  1254,
    1779,  1810,   602,   835,   975,  1115,  1262,  1112,  1260,   603,
     836,   980,   597,   833,   961,   120,   224,   313,   411,   611,
     838,   992,  1397,  1130,  1498,   612,   747,   996,  1155,  1289,
    1414,   993,  1144,  1404,  1587,   995,  1149,  1406,  1588,  1145,
     725,   121,   228,   314,   416,   510,   615,   843,  1006,  1160,
    1293,  1166,  1298,   751,   876,  1041,  1042,  1362,  1470,  1556,
    1181,  1318,  1183,  1327,  1185,  1335,  1186,  1345,  1542,  1662,
    1710,   122,   232,   315,   422,   619,   877,  1046,  1364,  1626,
    1677,  1750,  1720,   124,   237,   317,   430,    23,   316,   515,
     623,    68,   339,   240,   437,   319,   329,   341,   459,   659,
      24,   113,   726,   107,   108,   109,   178,   110,    30,    31
};

static const short yypact[] =
{
  -32768,-32768,    30,  3214,  -109,   152,  -111,   -94,   -55,   -12,
      -1,    18,    34,    42,    65,    81,    40,   172,   308,  3279,
  -32768,-32768,   702,-32768,-32768,  1784,-32768,-32768,   110,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,   171,-32768,   347,-32768,   351,   376,   407,   421,
     454,-32768,   466,-32768,   470,   479,   484,   500,   535,   537,
     551,   553,   578,   580,   124,   221,   357,   368,-32768,-32768,
  -32768,   353,   598,   383,   405,   418,   420,-32768,-32768,-32768,
  -32768,-32768,   425,   433,   440,   442,   447,   449,   451,   478,
     489,   497,   508,   513,   515,   525,   532,   538,   544,   582,
     585,   593,   604,  3174,  3174,  3174,  3051,  3255,-32768,   727,
  -32768,   755,   152,   -78,   601,    21,   -46,    55,    26,    93,
      95,   107,   109,   849,   113,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,   861,   375,    96,   870,  1126,-32768,   884,   887,
    3174,  3174,  3174,  3174,  3174,  3174,  3174,  3174,  3174,  3174,
    3174,  3174,  3174,  3174,  3174,  3174,  3174,  3174,  3174,  3174,
    3174,  3174,   152,-32768,   156,   156,  3345,  3255,   278,-32768,
    3174,  3174,  3174,  3174,  3174,  3174,  3174,  3174,  3174,  3174,
    3174,  3174,  3174,  3174,  3174,  3174,-32768,-32768,-32768,   657,
     892,-32768,   896,-32768,   490,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,    25,   677,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   680,
    1278,   667,  1278,   106,-32768,    33,-32768,-32768,   686,-32768,
  -32768,   291,   683,   690,  1723,  2656,  4214,  4241,  4268,  4295,
    4322,  4349,  4376,  4403,  4430,  4457,  3390,  4484,  4511,  4538,
    4565,  4592,  4619,  3411,  3432,  3453,   691,-32768,-32768,  3051,
    3276,  3297,  1322,  1676,  1465,  1465,   811,   811,   811,   811,
     324,   324,   156,   156,   156,   156,   152,-32768,   734,    -9,
     738,-32768,   751,-32768,-32768,-32768,-32768,   148,    84,   216,
      86,   129,-32768,   394,   381,    82,   719,   395,    96,    61,
  -32768,    96,    96,    71,   741,   757,   761,   765,   766,-32768,
    3092,-32768,   767,-32768,   999,   770,-32768,-32768,-32768,   769,
  -32768,   -42,-32768,-32768,  1008,  3174,  3174,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,  3174,-32768,-32768,
  -32768,-32768,-32768,-32768,  3174,  3174,  3174,  1009,  3255,-32768,
    3174,  3174,   784,  3133,  1735,  1016,  2660,   813,   817,  3174,
  -32768,    41,  1032,  1037,-32768,-32768,   805,  1040,-32768,-32768,
     812,    29,  1044,-32768,-32768,   818,  1046,  1047,   819,   821,
     826,-32768,-32768,   846,   838,     6,  1067,  1068,   837,   841,
  -32768,-32768,  1071,   843,-32768,-32768,-32768,  1091,   859,  1094,
    1095,-32768,-32768,-32768,  1096,   866,  1100,   152,  1108,-32768,
  -32768,   885,-32768,-32768,-32768,-32768,-32768,  1114,   941,-32768,
      29,-32768,   889,  3051,   894,   895,   897,    48,   893,  5078,
      72,-32768,  3219,   666,   316,  1024,    91,  1137,  3397,-32768,
     937,  3474,  3495,  4646,  4673,  4700,  4727,-32768,  5078,  5078,
  -32768,-32768,  5078,   177,  1165,   943,  3174,  3873,-32768,   132,
    3318,   196,   935,-32768,  1167,    20,-32768,  1170,-32768,   946,
     948,  1175,-32768,  1176,-32768,  1177,   103,-32768,-32768,-32768,
      29,   977,  1179,  1184,  1183,   119,-32768,-32768,   122,-32768,
     954,   123,-32768,   955,  1196,   966,  1199,-32768,  1200,  1203,
    1206,-32768,   680,  1212,   978,  3051,   343,  3051,  3051,  3051,
    1216,   152,   226,  1217,  1219,  5078,-32768,  3904,-32768,    68,
      96,-32768,-32768,-32768,-32768,  2004,  2004,   996,  1230,    28,
    3174,  3174,  2004,  3174,  1231,-32768,-32768,-32768,-32768,  3174,
    1234,   762,-32768,-32768,  1003,-32768,  3174,  3174,-32768,-32768,
  -32768,-32768,-32768,  1043,  3935,-32768,   132,-32768,  1241,  3174,
    1245,  1248,-32768,   173,-32768,-32768,  1019,  1252,   332,-32768,
     359,  3174,  1250,-32768,-32768,  1253,-32768,   369,-32768,-32768,
    1254,   390,   393,   410,  1255,    29,-32768,-32768,-32768,-32768,
    1256,   416,   145,-32768,  1257,   429,-32768,-32768,  1259,   438,
    1262,-32768,-32768,   702,-32768,  1031,-32768,-32768,-32768,  1020,
    1033,    29,   521,-32768,   567,   573,   599,-32768,  1079,  1312,
  -32768,  3174,-32768,   233,-32768,-32768,   229,-32768,-32768,    29,
  -32768,   152,   152,-32768,  5078,  5078,-32768,  5078,-32768,  1314,
    1314,  1314,  5078,-32768,  3051,  5078,    29,-32768,  4754,  4781,
    1269,-32768,  1317,-32768,  3213,-32768,  1090,   608,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  4808,  1106,   200,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1093,-32768,
    1115,  1118,  1119,  1122,-32768,  1335,  1253,  1253,  1253,  1253,
    1349,   164,  1354,  5153,    89,  1130,  1130,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1356,-32768,
  -32768,-32768,  1128,  1129,  1132,  1133,-32768,-32768,-32768,-32768,
  -32768,   932,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  3174,
    1124,  1135,  1136,  1138,  1144,-32768,-32768,  5078,-32768,   241,
    1155,   131,  1154,-32768,-32768,-32768,   610,-32768,   613,-32768,
  -32768,-32768,-32768,  3174,-32768,  3174,-32768,   516,    83,   120,
  -32768,-32768,-32768,  1157,  1164,  1157,  1253,  1363,  1393,  1169,
    1182,  1171,  1171,  1171,  5130,-32768,-32768,-32768,-32768,-32768,
      36,-32768,  1253,  1253,  1253,  1253,  1253,  1253,  1253,  1253,
    1253,  1253,  1253,  1253,  1253,  1253,  1253,  1253,  1401,  1402,
    1688,-32768,  1172,    77,   940,   396,   349,-32768,   370,-32768,
  -32768,-32768,-32768,   298,    23,   134,  1174,  1180,  1181,  1190,
    1195,  1202,  1207,  1210,  1404,   208,   307,   331,  1178,  1214,
    1218,  1220,  1232,  1233,  1235,  1244,  1197,  1213,  1246,  1247,
    1249,  1225,  1258,-32768,-32768,-32768,-32768,    75,  3516,    29,
    3051,  3051,  3051,  3051,   250,  1407,-32768,-32768,  1423,    33,
      29,-32768,-32768,    29,  1260,  4835,  3966,    96,    96,    96,
      96,   137,   138,    29,    29,  1228,  1433,  1435,   143,-32768,
  -32768,   130,  1439,-32768,-32768,  1239,  1443,  1477,-32768,-32768,
    1251,-32768,  1263,  1120,  1261,  1264,-32768,  1266,-32768,  1265,
  -32768,  1253,  5172,  1092,   606,   606,   606,  1021,  1021,  1021,
    1021,   435,   435,  1171,  1171,  1171,  1171,  1171,-32768,-32768,
  -32768,  1267,  5153,   254,  3007,-32768,  1480,   160,  1482,  1490,
  -32768,-32768,  1494,  1496,  1497,  1272,  1003,    96,    96,-32768,
  -32768,  1498,    64,    69,-32768,-32768,  1510,  1511,  1518,-32768,
  -32768,  1519,  1521,  1522,   140,  1523,  1524,  1529,  1533,    96,
  -32768,-32768,-32768,   747,   772,  1087,   213,  1536,  1543,    70,
     152,  2004,   152,    90,  1544,-32768,-32768,  1547,  1545,    29,
    1548,  1554,  1555,  1556,    29,  1570,  1571,  1574,  1575,-32768,
    3174,-32768,  3174,-32768,  3174,-32768,-32768,    96,   152,  1577,
    1578,  1580,  1581,  1595,  1598,  1599,  1600,  1601,  1603,  1604,
    1606,  1380,  1381,  1376,  1610,-32768,-32768,  3174,  1377,   625,
     639,   655,   664,  1611,-32768,   955,-32768,  1379,-32768,  1382,
  -32768,-32768,  1614,  1616,  1617,  1618,    29,  1619,    29,  1620,
    1621,  1622,  1627,  1625,  1626,    29,  1628,  1629,  1630,  1172,
  -32768,  1636,  1641,-32768,  1394,-32768,  1253,-32768,  1417,  1424,
  -32768,-32768,   502,-32768,-32768,  1253,  1427,   675,  1649,  1653,
    1654,   955,  1655,   125,  1425,  1660,  1659,  1662,  1663,  1664,
  -32768,-32768,  1665,-32768,-32768,  1666,  1669,  1671,  1672,  1677,
    1678,  1689,  1691,  1694,  1695,  1696,   955,  1697,  1698,  1736,
  -32768,  1690,  1737,  1740,  1514,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,    96,-32768,-32768,  1515,-32768,    96,-32768,-32768,
    1516,  1748,  1774,-32768,-32768,-32768,  1773,  1775,   955,-32768,
    1776,  1777,  1778,  1779,-32768,-32768,  1787,  1788,-32768,  1434,
    1558,-32768,  1541,  1557,  1562,  1602,  1588,  1592,  1593,  1594,
    3537,   632,  3558,   816,  3579,   687,   898,  1596,  1605,  1597,
    1635,  1640,  1647,  1667,  1642,  1656,  1668,  1673,  1674,  1679,
    1683,    97,    97,-32768,  1832,  3997,  1682,  1687,  1692,  1705,
    1711,-32768,-32768,    29,    33,-32768,-32768,-32768,-32768,  1710,
  -32768,  1713,-32768,-32768,-32768,  1714,-32768,-32768,  1715,-32768,
  -32768,-32768,  1837,   684,-32768,-32768,    96,  5105,-32768,  3174,
  -32768,  1684,-32768,  5153,    96,-32768,-32768,-32768,-32768,  1895,
  -32768,-32768,  1897,  1807,  1905,  1714,-32768,-32768,-32768,-32768,
     706,-32768,   722,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1718,  1920,
    1921,  1922,  1927,  1949,-32768,  1952,-32768,  1953,  1954,   174,
  -32768,-32768,-32768,   725,-32768,-32768,-32768,-32768,   731,-32768,
  -32768,  1957,  1959,    29,  1962,  1963,  1731,  3174,  1966,    29,
      96,  3174,  1734,    29,  3174,  3174,    29,-32768,-32768,  3174,
    1738,    29,  3174,  3174,  3174,  3174,-32768,-32768,  3174,  3174,
    1739,  3174,    29,  3174,-32768,-32768,  3174,  1969,  1741,  1742,
    3174,  3174,  1743,  3174,-32768,-32768,    29,  1968,    29,  2004,
    2004,  2004,  3174,  1971,  1975,  1978,  1979,  1980,    96,  1981,
  -32768,-32768,-32768,-32768,    35,-32768,  1749,  2004,  3051,  1752,
    3051,  3051,  1753,-32768,    29,    29,  1988,    29,-32768,-32768,
  -32768,  1760,-32768,  1761,  3600,-32768,  1253,  1762,-32768,-32768,
    1991,-32768,  1992,-32768,  1993,-32768,  1994,  1768,  1995,-32768,
  -32768,-32768,  1770,-32768,-32768,-32768,-32768,-32768,-32768,  1157,
    1157,  1157,    96,-32768,-32768,-32768,  1996,-32768,  1999,-32768,
  -32768,  1772,  1810,  1811,-32768,  3621,  1812,  1780,  1814,  3642,
  -32768,  2003,   311,   401,  2009,  3663,-32768,  2010,   899,  1168,
    1208,  1296,  3684,  1429,-32768,  1661,  2048,  2495,  2516,  2050,
  -32768,-32768,  2544,  2572,-32768,  2593,  1825,-32768,  1819,  1827,
    1828,  1822,  3705,-32768,-32768,  1829,  1843,  1844,  1838,-32768,
     259,   263,  1842,  1845,-32768,  3174,  1841,   736,  3174,   742,
     748,-32768,  1846,  1851,  1854,  1862,  1869,   672,-32768,  1871,
    3174,  5153,  1866,  2099,  1868,-32768,-32768,  2104,  2109,-32768,
    2117,-32768,-32768,  2120,  2121,  2123,  2124,-32768,-32768,  2126,
    2004,  3174,  1436,  2004,  2129,  2141,  2144,    29,  1937,-32768,
  -32768,-32768,-32768,    29,  1984,-32768,-32768,-32768,-32768,-32768,
      29,-32768,  2044,-32768,-32768,-32768,-32768,-32768,  2118,  2178,
  -32768,-32768,   752,-32768,  2145,    29,  2146,  2147,  3174,   152,
    3174,  2149,  2150,   152,  2152,  1826,-32768,  2153,-32768,-32768,
    4028,  2004,  1886,  4059,  1912,  1923,  1928,  2155,  2157,  2158,
    2159,  2162,  3174,  3174,  3174,  3174,  3174,-32768,-32768,  1930,
    4090,-32768,  2071,  2164,  1951,-32768,-32768,  1945,  1947,-32768,
  -32768,-32768,-32768,-32768,  1955,  4862,  2058,  1972,  1973,-32768,
    1958,  1974,-32768,  1976,-32768,   273,-32768,-32768,-32768,-32768,
  -32768,-32768,  1977,-32768,-32768,  4889,  1960,  3726,-32768,-32768,
     754,-32768,   152,  2004,-32768,-32768,   530,   839,-32768,  1982,
  -32768,-32768,  1956,  3051,    33,-32768,-32768,-32768,-32768,  2201,
    2614,  2635,  2702,  2729,  2756,  3174,-32768,  2204,-32768,-32768,
  -32768,  1157,  2212,  2213,  1983,  3174,  3174,  2217,    29,  3174,
    1987,  3174,   659,    29,  2220,  2221,  3174,  2222,   152,-32768,
  -32768,  2206,  2227,  2228,-32768,-32768,  2005,-32768,-32768,  2004,
    3174,   758,  1998,-32768,-32768,-32768,-32768,-32768,-32768,  4121,
    1997,  2006,  2007,-32768,-32768,-32768,  4916,  3747,-32768,  2008,
    3768,-32768,  4943,  2231,  3174,    29,  2238,    96,  2240,-32768,
  -32768,  2017,-32768,-32768,  4970,-32768,  2018,  2243,  2252,  2254,
      96,-32768,  2023,  3789,  2025,  3174,-32768,  2258,  2260,  2261,
    2225,  2278,  2004,  2049,  3174,  2277,  2052,  2279,  2784,  2281,
    2284,  2286,  2287,    29,  2057,    29,-32768,-32768,-32768,  2289,
  -32768,-32768,  3174,  2059,  4997,-32768,-32768,-32768,-32768,-32768,
    2060,-32768,  5024,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,  2065,-32768,  2062,-32768,  2066,  4152,  3174,  2295,  2253,
    3174,  2337,  2067,  2384,  2303,  2436,  2310,  2311,-32768,  3810,
  -32768,    96,  3831,-32768,-32768,-32768,-32768,  2312,-32768,-32768,
    3174,  2314,  3174,  2496,-32768,  3852,-32768,  5051,-32768,  3174,
    2208,  2315,  4183,  2320,-32768,-32768,   955,  2321,  2088,-32768,
    2343,  2345,-32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  -259,-32768,-32768,  -305,  1389,
  -32768,-32768,  1390,  -446,-32768,  -390,-32768,  -335,  -476,  -505,
  -32768,-32768,-32768,-32768,  -336,-32768,  -539,-32768,  -902,-32768,
    -611,-32768,-32768,-32768,-32768,-32768,-32768,  1624,-32768,  1268,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1782,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,  1525,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -980,
    -673,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768, -1327,-32768,-32768,-32768,  1166,  1006,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   807,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1855,
  -32768,  1751,-32768,  2232,-32768,  1849,  2148,  -308,-32768,   446,
     814,-32768,-32768,  -103,  -420,  -541,  -139,   -13,  -100,    -3
};


#define	YYLAST		5401


static const short yytable[] =
{
     174,   175,   176,   177,   647,   648,   404,   251,   620,   587,
     543,   656,   199,   431,   792,  1150,   438,   439,   441,  1084,
     600,   447,   111,   450,  1089,   667,     4,   585,  1007,   610,
      -2,     4,   614,    26,    27,   618,   334,    28,   335,     6,
    1472,   929,   489,   177,     6,    42,   482,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,  1110,
     503,   334,   276,   335,  1113,  1158,   243,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   179,   334,  1164,   335,  1512,   217,    25,
       4,   243,  1360,  1518,   524,   801,   802,   803,   804,  1524,
     599,     6,     4,     6,     4,   474,   490,  1532,     4,   539,
     920,    32,   922,  1538,  1539,     6,   609,     6,   244,   613,
     617,     6,  1251,   179,   243,   243,   887,   577,  1043,  1473,
     911,   532,   395,   541,    33,  1122,   581,   489,   218,   644,
     489,   489,   912,   244,   386,   200,   489,    26,    27,  1044,
     396,    28,   201,   956,   604,   577,   417,   806,   387,   807,
     397,   398,   957,   958,   959,   727,   368,    44,   399,    45,
     400,   418,  1077,    34,   888,   923,   244,   244,  1241,   244,
     915,   457,   209,   210,   916,   917,   372,    46,   458,   374,
     419,   932,   933,   934,   935,   936,   937,   938,   939,   940,
     941,   942,   943,   944,   945,   946,   947,   244,   381,   952,
     578,   490,   382,   375,   490,   490,    35,   449,  1278,   376,
     490,    29,   383,    25,  1123,   645,   334,    36,   335,   502,
    1409,  1410,   461,   462,  1124,   651,   201,   420,   652,   742,
     743,   744,   745,   768,   463,  1008,    37,   311,   586,   205,
     206,   464,   465,   466,   213,   214,   369,   468,   469,   738,
     472,   336,    38,   477,  1474,   930,   480,  1411,    43,   483,
      39,   530,   432,   433,   434,   435,   390,  1151,   458,  1412,
     643,   808,   391,   211,   212,   760,   727,   727,   727,   727,
     392,   436,  1111,    40,   526,   533,   245,  1114,  1159,   440,
    1152,   771,   458,   772,  1045,    51,   960,   672,  1520,    41,
    1092,   421,   913,   388,   828,   401,   829,   519,  1165,   336,
     777,   245,   219,   222,   223,   666,  1383,   769,   -66,   123,
     177,   586,   112,    47,   332,   226,   227,   230,   231,   535,
     537,   235,   236,   809,   125,    29,   142,   586,   126,   918,
     586,   586,   403,   586,   245,   245,  1009,   245,  1730,  1066,
    1068,   111,   997,   574,  1735,  1075,   727,    48,    49,    50,
     239,   241,   998,   127,   746,   195,   632,   384,   634,   635,
     636,   196,   727,   727,   727,   727,   727,   727,   727,   727,
     727,   727,   727,   727,   727,   727,   727,   727,  1521,   -66,
     727,   678,   679,  1413,   128,   146,   999,  1000,  1001,  1002,
    1003,  1004,   177,   976,   177,   177,   177,  1106,   129,   580,
     179,   638,  -617,   977,  1781,   978,   201,  1783,   722,   981,
    1020,   982,   983,  1056,   984,  1785,  1021,   654,   655,   653,
     657,  1153,  1154,   143,   985,   393,   662,   884,   665,   639,
    1162,   130,   -69,   668,   669,   412,   458,  1803,   406,   201,
     986,   987,   988,   131,   885,  1237,   674,   132,   407,   424,
     971,   458,   972,  1053,  1243,   989,   133,  1094,   685,   973,
     458,   134,  1554,   408,  1095,   299,  1557,   409,   413,  1555,
     300,   301,  1501,  1555,  1502,   414,  1660,   135,     6,  1010,
    1242,   727,   179,  1661,   179,   179,   179,   278,   279,   425,
     181,   182,   183,   184,   185,   776,   186,   187,   188,   189,
     342,   279,   190,   191,   192,   193,   194,  1005,   767,  1022,
     195,   302,   136,  1048,   137,  1023,   196,   192,   193,   194,
    1212,   773,   774,   195,  1057,   538,   201,  1058,   138,   196,
     139,   177,   426,  1024,   427,  1067,  1069,  1070,  1071,  1025,
     681,   682,  1076,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   633,   279,   906,   140,   428,   141,   979,   144,
     907,   146,  1062,  1063,  1064,  1065,  1249,   683,   684,  1671,
     145,  1672,   990,   908,  1673,   147,  1078,   728,   729,   991,
     181,   182,   183,   184,   185,   148,   186,   187,   188,   189,
     415,  1274,   190,   191,   192,   193,   194,  1252,   731,   732,
     195,   733,   734,   410,   429,   974,   196,   149,  1135,  1136,
    1137,  1138,  1139,  1140,  1141,  1674,  1676,  1676,   735,   736,
     150,   179,   151,  1292,   740,   741,   878,   152,   823,   824,
     825,   826,  1107,  1108,   827,   153,   727,   749,   750,    69,
      70,   173,   154,  1170,   155,   727,   753,   754,  1175,   156,
     895,   157,   896,   158,  1129,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     159,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   160,  1187,   821,   822,   823,   824,   825,   826,   161,
    1219,   827,  1221,  1703,   197,  1704,  1503,  1504,  1505,  1228,
     162,  1049,  1050,  1051,  1052,   163,  1705,   164,  1691,  1571,
    1572,  1573,  1574,  1575,  1576,   909,  1312,   165,  1706,  1313,
     761,   279,   198,  1329,   166,    69,    70,   173,  1373,  1675,
     167,  1314,  1315,  1316,  1707,  1491,   168,   177,   177,   177,
     177,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   762,   279,  1459,  1460,
    1461,  1330,   763,   279,   169,  1097,  1131,   170,  1132,  1133,
    1134,   817,   818,   819,   820,   171,  1476,   821,   822,   823,
     824,   825,   826,  1331,  1332,   827,   172,  1283,   764,   279,
     203,  1131,  1285,  1132,  1133,  1134,   678,   786,  1775,   891,
     279,   177,   892,   893,   234,  1135,  1136,  1137,  1138,  1139,
    1140,  1141,  1142,  1708,  1207,   279,   239,   179,   179,   179,
     179,  1317,    64,    65,    66,    67,   249,  1372,  1208,   279,
    1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,   103,   252,
    1376,  1333,   253,   104,  1209,   279,   105,   296,  1709,   297,
    1161,   298,  1163,  1210,   279,   536,  1526,   330,  1671,   312,
    1672,  1577,   318,  1673,  1245,   279,   343,  1180,   340,  1182,
    1392,  1184,  1379,  1380,   367,  1394,  1334,  1396,  1188,   208,
     344,  1381,   216,   221,   225,   229,   233,   844,   238,  1387,
    1320,   179,   373,  1321,  1205,  1393,   201,  1135,  1136,  1137,
    1138,  1139,  1140,  1141,  1674,  1322,  1323,   423,  1416,  1324,
    1325,  1395,   201,  1418,  1415,   201,   727,  1421,   379,  1594,
    1417,   201,  1597,  1427,  1336,  1562,   279,  1431,  1692,   442,
    1434,  1564,   279,   380,   103,  1437,  1143,  1565,   279,   104,
    1609,  1610,   105,  1667,  1668,   443,  1446,  1724,   279,   444,
     664,   660,   661,   445,   446,  1428,   451,   452,   453,   455,
    1456,  1146,  1458,   460,  1624,  1337,   467,   470,   306,   475,
    1629,   478,  1338,  1339,   962,   479,   963,   964,   965,   966,
     967,   968,   190,   191,   192,   193,   194,   484,  1483,  1484,
     195,  1486,   485,   486,  1340,   487,   196,  1341,  1342,   493,
     488,   495,   496,  1468,   500,  1326,   494,   497,   845,   498,
     846,   847,   848,   849,   499,   850,   851,   852,   853,   854,
     855,   501,   504,   505,   856,   506,   508,   857,  1678,   507,
     858,   509,  1670,   859,   860,   861,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   511,   512,   872,   513,
     514,   516,  1343,   873,   517,   518,   874,  1506,   181,   182,
     183,   184,   185,   520,   186,   187,   188,   189,   521,   522,
     190,   191,   192,   193,   194,   531,   523,   525,   195,    69,
      70,    71,   527,   528,   196,   529,  1384,  1344,  1722,   540,
      73,    74,    75,    76,   544,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     565,   875,   572,   582,   584,  1527,   573,   589,   591,   969,
     592,  1601,   593,   596,   598,   605,   606,  1603,  1682,   607,
     608,  1760,   616,   332,  1605,  1135,  1136,  1137,  1138,  1139,
    1140,  1141,  1147,   621,  1425,   622,   624,   626,  1429,  1612,
     627,  1432,  1433,   628,  1727,  1528,  1435,   630,   631,  1438,
    1439,  1440,  1441,   637,   640,  1442,  1443,   641,  1445,  1477,
    1447,  1479,  1480,  1448,   649,   650,   658,  1452,  1453,   663,
    1455,   666,   821,   822,   823,   824,   825,   826,   673,  1462,
     827,   670,   675,   676,   476,   686,    69,    70,   687,   680,
     758,   730,   737,   739,   748,   177,   752,   177,   177,   755,
     757,   759,    77,    78,    79,    80,    81,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   712,   713,  1529,   814,   815,   816,   817,   818,   819,
     820,  1817,   765,   821,   822,   823,   824,   825,   826,   766,
     775,   827,  1699,   781,   782,   793,  1148,  1711,   785,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   791,
     800,   821,   822,   823,   824,   825,   826,   795,   103,   827,
     796,   797,   805,   104,   798,   179,   105,   179,   179,   810,
    1086,   714,   830,   837,   879,   250,   839,   840,   924,  1739,
     841,   842,  1560,   880,   881,  1563,   882,   181,   182,   183,
     184,   185,   883,   186,   187,   188,   189,  1580,   886,   190,
     191,   192,   193,   194,   890,   722,   921,   195,   925,   927,
     827,   926,  1741,   196,   948,   949,  1011,  1771,  1595,  1773,
     954,  1019,  1012,  1013,  1054,  1749,  1026,   181,   182,   183,
     184,   185,  1014,   186,   187,   188,   189,  1015,  1055,   190,
     191,   192,   193,   194,  1016,  1034,  1531,   195,  1073,  1017,
    1074,   844,  1018,   196,  1079,  1615,  1027,  1617,  1081,  1616,
    1028,  1035,  1029,  1620,   320,   321,   322,   323,   324,   325,
     326,   327,   328,  1039,  1030,  1031,  1072,  1032,   715,  1640,
    1641,  1642,  1643,  1644,   716,   717,  1033,  1080,  1036,  1037,
     718,  1038,  1082,   719,  1083,  1098,  1801,   887,   720,   721,
    1040,   722,  1059,  1087,  1681,  1101,  1085,  1088,  1090,  1102,
    1093,  1103,  1104,  1109,  1091,   181,   182,   183,   184,   185,
    1105,   186,   187,   188,   189,  1116,  1117,   190,   191,   192,
     193,   194,  1669,  1118,  1119,   195,  1120,  1121,  1125,  1126,
     177,   196,  1127,   183,   184,   185,  1128,   186,   187,   188,
     189,  1156,  1689,   190,   191,   192,   193,   194,  1157,  1167,
    1169,   195,  1696,  1697,  1168,  1171,  1700,   196,  1702,  1172,
    1173,  1174,   845,  1714,   846,   847,   848,   849,  1716,   850,
     851,   852,   853,   854,   855,  1176,  1177,  1723,   856,  1178,
    1179,   857,  1189,  1190,   858,  1191,  1192,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
    1193,  1738,   872,  1194,  1195,  1196,  1197,   873,  1198,  1199,
     874,  1200,  1201,  1202,  1203,  1204,  1206,  1214,  1211,  1213,
     179,  1215,  1754,  1216,  1217,  1218,  1220,  1222,  1223,  1224,
    1225,  1762,  1226,  1227,  1236,  1229,  1230,  1231,   181,   182,
     183,   184,   185,  1234,   186,   187,   188,   189,  1235,  1776,
     190,   191,   192,   193,   194,  1239,  1246,  1240,   195,  1244,
    1247,  1248,  1250,  1253,   196,  1255,  1256,  1301,  1533,  1257,
    1258,  1259,  1261,  1263,  1789,  1596,  1264,  1792,  1265,  1266,
     186,   187,   188,   189,  1267,  1268,   190,   191,   192,   193,
     194,    69,    70,   687,   195,  1279,  1269,  1805,  1270,  1807,
     196,  1271,  1272,  1273,  1275,  1276,  1812,    77,    78,    79,
      80,    81,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,   711,   712,   713,    69,    70,
     473,    72,  1280,  1277,    28,  1281,  1282,  1284,  1286,    73,
      74,    75,    76,  1287,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,  1288,
    1290,  1303,  1291,  1294,  1295,  1296,  1297,    69,    70,    71,
      72,  1302,   244,    28,  1299,  1300,   714,  1304,    73,    74,
      75,    76,  1305,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,  1307,    69,
      70,    71,  1308,  1309,  1310,  1306,  1346,  1348,  1347,  1365,
      73,    74,    75,    76,  1378,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     181,   182,   183,   184,   185,  1349,   186,   187,   188,   189,
    1350,  1353,   190,   191,   192,   193,   194,  1351,   184,   185,
     195,   186,   187,   188,   189,  1354,   196,   190,   191,   192,
     193,   194,  1388,   715,  1389,   195,  1390,  1352,  1355,   716,
     717,   196,  1391,  1356,  1357,   718,  1359,  1385,   719,  1358,
    1367,   950,   951,   720,   721,  1368,   722,  1399,  1400,  1401,
    1402,  1369,   181,   182,   183,   184,   185,   102,   186,   187,
     188,   189,   844,  1370,   190,   191,   192,   193,   194,  1371,
    1374,  1398,   195,  1375,   201,  1377,  1403,   103,   196,  1405,
    1407,  1408,   104,   345,  1419,   105,  1420,  1422,  1423,  1424,
     245,  1426,  1430,   106,  1449,  1457,  1436,  1444,  1463,  1450,
    1451,  1454,  1464,  1465,  1466,  1467,   102,  1475,  1469,   844,
    1478,  1485,  1481,  1488,  1489,  1492,  1493,  1494,  1495,  1496,
    1497,  1507,  1499,  1500,  1508,  1509,   103,    69,    70,    71,
    1519,   104,  1622,  1515,   105,  1623,  1522,  1525,    73,    74,
      75,    76,   106,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   103,   844,
    1510,  1511,  1514,   104,  1516,  1534,   105,  1537,  1544,  1545,
    1546,  1547,  1548,   845,   106,   846,   847,   848,   849,  1550,
     850,   851,   852,   853,   854,   855,  1551,  1552,  1553,   856,
    1558,  1561,   857,  1559,  1567,   858,  1566,  1568,   859,   860,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   870,
     871,  1569,  1570,   872,  1579,  1581,  1582,  1583,   873,  1584,
     845,   874,   846,   847,   848,   849,  1585,   850,   851,   852,
     853,   854,   855,   844,  1586,  1630,   856,  1589,  1590,   857,
    1591,  1592,   858,  1593,  1598,   859,   860,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   870,   871,  1599,  1600,
     872,  1632,  1611,  1613,  1614,   873,  1618,  1619,   874,  1621,
    1625,  1633,  1635,  1634,  1636,  1637,  1638,  1639,  1645,  1647,
     845,  1648,   846,   847,   848,   849,  1602,   850,   851,   852,
     853,   854,   855,   844,  1649,  1650,   856,  1651,  1652,   857,
    1654,  1657,   858,  1665,  1680,   859,   860,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   870,   871,  1683,  1690,
     872,  1717,  1655,  1656,  1658,   873,  1659,  1663,   874,  1693,
    1694,  1695,  1679,  1604,  1698,  1701,   103,  1712,  1713,  1715,
     844,   104,  1718,  1719,   105,   586,  1737,  1721,  1725,  1728,
    1729,  1733,   106,  1740,   845,  1742,   846,   847,   848,   849,
    1746,   850,   851,   852,   853,   854,   855,  1743,  1745,  1747,
     856,  1748,  1751,   857,  1753,  1755,   858,  1756,  1757,   859,
     860,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870,   871,   844,  1606,   872,  1759,  1765,  1761,  1767,   873,
    1764,  1768,   874,  1769,  1770,  1772,  1774,  1777,  1784,  1787,
    1780,  1786,  1790,  1791,   845,  1794,   846,   847,   848,   849,
    1796,   850,   851,   852,   853,   854,   855,  1798,  1799,  1804,
     856,  1806,  1814,   857,  1813,  1816,   858,  1819,  1818,   859,
     860,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870,   871,   844,  1821,   872,  1822,  1099,  1232,  1100,   873,
     832,   845,   874,   846,   847,   848,   849,  1607,   850,   851,
     852,   853,   854,   855,   677,   994,  1627,   856,  1363,  1471,
     857,   629,   625,   858,   756,   242,   859,   860,   861,   862,
     863,   864,   865,   866,   867,   868,   869,   870,   871,   844,
     331,   872,     0,     0,     0,     0,   873,     0,     0,   874,
       0,     0,     0,   845,     0,   846,   847,   848,   849,     0,
     850,   851,   852,   853,   854,   855,     0,  1608,     0,   856,
       0,     0,   857,     0,     0,   858,     0,     0,   859,   860,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   870,
     871,   844,     0,   872,     0,     0,     0,     0,   873,     0,
       0,   874,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   845,  1758,   846,   847,   848,   849,     0,
     850,   851,   852,   853,   854,   855,     0,     0,     0,   856,
       0,     0,   857,     0,     0,   858,     0,     0,   859,   860,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   870,
     871,   844,  1535,   872,     0,     0,     0,     0,   873,     0,
     845,   874,   846,   847,   848,   849,  1763,   850,   851,   852,
     853,   854,   855,  1536,     0,     0,   856,     0,     0,   857,
       0,     0,   858,     0,     0,   859,   860,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   870,   871,     0,     0,
     872,  1540,     0,     0,     0,   873,     0,     0,   874,     0,
       0,     0,   845,     0,   846,   847,   848,   849,     0,   850,
     851,   852,   853,   854,   855,     0,  1793,     0,   856,  1541,
       0,   857,     0,     0,   858,     0,     0,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
    1543,     0,   872,     0,     0,     0,     0,   873,     0,     0,
     874,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1684,   845,  1795,   846,   847,   848,   849,     0,   850,
     851,   852,   853,   854,   855,     0,     0,     0,   856,     0,
       0,   857,  1685,     0,   858,     0,     0,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
       0,     0,   872,    69,    70,   173,     0,   873,     0,     0,
     874,     0,     0,     0,     0,  1797,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   181,   182,   183,   184,   185,  1686,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,   181,   182,   183,   184,   185,
     196,   186,   187,   188,   189,  1808,  1687,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,     0,
       0,   196,     0,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,  1688,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,     0,     0,     0,     0,   196,
       0,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,  1766,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,   181,   182,   183,   184,   185,   196,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,   181,   182,   183,   184,   185,   196,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,   181,   182,   183,   184,   185,   196,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,   181,   182,   183,   184,   185,
     196,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   103,     0,     0,   195,     0,   104,     0,     0,
     105,   196,     0,     0,     0,   476,   346,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,     0,     0,   196,   181,   182,
     183,   184,   185,     0,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,     0,
       0,     0,     0,     0,   196,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,     0,
       0,   196,     0,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
      69,    70,    71,   195,     0,     0,     0,     0,     0,   196,
       0,    73,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,     0,     0,     0,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,  1096,    73,    74,    75,    76,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    69,    70,   173,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    69,    70,   173,   471,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    69,    70,   173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,     0,     4,
       0,   783,   534,    70,   173,     0,     5,     0,     0,   103,
       0,     0,     6,     0,   104,     0,     0,   105,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   180,     7,     0,     0,     0,     0,     0,
       8,     0,     0,   103,     0,     0,     0,     0,   104,     0,
       0,   105,    52,     9,   370,    10,    53,     0,     0,     0,
       0,     0,     0,     0,   448,     0,     0,    11,     0,     0,
       0,    12,     0,     0,     0,   371,     0,     0,     0,     0,
       0,     0,    13,     0,   103,     0,     0,     0,     0,   104,
       0,     0,   105,     0,     0,     0,   579,     0,     0,    54,
      14,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
      57,     0,     0,     0,     0,   103,     0,     0,     0,     0,
     104,     0,    58,   105,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,    15,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,   103,     0,     0,     0,
       0,   104,     0,     0,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      18,    19,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,   103,   195,    62,   784,    63,   104,     0,   196,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     545,     0,     0,     0,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,   181,   182,   183,   184,   185,
     196,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,   181,   182,   183,   184,
     185,   196,   186,   187,   188,   189,     0,   546,   190,   191,
     192,   193,   194,     0,     0,     0,   195,   181,   182,   183,
     184,   185,   196,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,   547,     0,
       0,     0,     0,   196,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,   548,     0,   195,     0,   277,     0,     0,     0,
     196,     0,     0,   549,   550,   551,   552,   553,   554,   555,
     556,   557,   558,   559,   560,   561,   562,   563,   564,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
     181,   182,   183,   184,   185,   196,   186,   187,   188,   189,
     357,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,   181,   182,   183,   184,   185,   196,   186,   187,   188,
     189,   364,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,   181,   182,   183,   184,   185,   196,   186,   187,
     188,   189,   365,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,   181,   182,   183,   184,   185,   196,   186,
     187,   188,   189,   366,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,   181,   182,   183,   184,   185,   196,
     186,   187,   188,   189,   566,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,   181,   182,   183,   184,   185,
     196,   186,   187,   188,   189,   567,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,   181,   182,   183,   184,
     185,   196,   186,   187,   188,   189,  1047,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,   181,   182,   183,
     184,   185,   196,   186,   187,   188,   189,  1311,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,   181,   182,
     183,   184,   185,   196,   186,   187,   188,   189,  1319,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,   181,
     182,   183,   184,   185,   196,   186,   187,   188,   189,  1328,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
     181,   182,   183,   184,   185,   196,   186,   187,   188,   189,
    1490,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,   181,   182,   183,   184,   185,   196,   186,   187,   188,
     189,  1513,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,   181,   182,   183,   184,   185,   196,   186,   187,
     188,   189,  1517,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,   181,   182,   183,   184,   185,   196,   186,
     187,   188,   189,  1523,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,   181,   182,   183,   184,   185,   196,
     186,   187,   188,   189,  1530,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,   181,   182,   183,   184,   185,
     196,   186,   187,   188,   189,  1549,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,   181,   182,   183,   184,
     185,   196,   186,   187,   188,   189,  1666,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,   181,   182,   183,
     184,   185,   196,   186,   187,   188,   189,  1732,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,   181,   182,
     183,   184,   185,   196,   186,   187,   188,   189,  1734,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,   181,
     182,   183,   184,   185,   196,   186,   187,   188,   189,  1752,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
     181,   182,   183,   184,   185,   196,   186,   187,   188,   189,
    1800,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,   181,   182,   183,   184,   185,   196,   186,   187,   188,
     189,  1802,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,   181,   182,   183,   184,   185,   196,   186,   187,
     188,   189,  1809,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,     0,     0,   196,     0,
       0,     0,   575,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,     0,     0,     0,     0,   196,
       0,     0,     0,   642,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,     0,     0,     0,     0,
     196,     0,     0,     0,   671,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,     0,
       0,   196,     0,     0,     0,  1061,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
       0,     0,   196,     0,     0,     0,  1366,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,     0,     0,
       0,     0,     0,   196,     0,     0,     0,  1628,   181,   182,
     183,   184,   185,     0,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,     0,
       0,     0,     0,     0,   196,     0,     0,     0,  1631,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
       0,     0,     0,     0,     0,   196,     0,     0,     0,  1646,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,     0,     0,   196,     0,     0,     0,
    1726,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,     0,     0,   196,     0,     0,
       0,  1788,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,     0,     0,   196,     0,
       0,     0,  1815,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,     0,     0,   347,     0,   196,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,   348,     0,   196,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,     0,     0,
       0,   349,     0,   196,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,     0,     0,   350,     0,
     196,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,   351,     0,   196,   181,   182,
     183,   184,   185,     0,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,     0,
       0,     0,   352,     0,   196,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,   353,
       0,   196,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,   354,     0,   196,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
       0,     0,     0,   355,     0,   196,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
     356,     0,   196,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,     0,     0,   358,     0,   196,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,   359,     0,   196,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,     0,     0,
       0,   360,     0,   196,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,     0,     0,   361,     0,
     196,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,   362,     0,   196,   181,   182,
     183,   184,   185,     0,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,     0,
       0,     0,   363,     0,   196,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,   568,
       0,   196,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,   569,     0,   196,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
       0,     0,     0,   570,     0,   196,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
     571,     0,   196,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,     0,     0,   779,     0,   196,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,   780,     0,   196,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,     0,     0,
       0,   790,     0,   196,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,  1060,     0,     0,     0,
     196,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,  1653,     0,   196,   181,   182,
     183,   184,   185,     0,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,     0,
       0,     0,  1664,     0,   196,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,  1731,
       0,   196,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,  1736,     0,   196,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
       0,     0,     0,  1744,     0,   196,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
    1778,     0,   196,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,     0,     0,  1782,     0,   196,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,  1811,     0,   196,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,     0,     0,
       0,     0,     0,   196,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,     0,     0,   821,   822,   823,   824,
     825,   826,     0,     0,   827,     0,     0,     0,  1382,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,     0,
       0,   821,   822,   823,   824,   825,   826,     0,     0,   827,
       0,   928,   811,   812,   813,   814,   815,   816,   817,   818,
     819,   820,     0,     0,   821,   822,   823,   824,   825,   826,
       0,     0,   827,   813,   814,   815,   816,   817,   818,   819,
     820,     0,     0,   821,   822,   823,   824,   825,   826,     0,
       0,   827
};

static const short yycheck[] =
{
     103,   104,   105,   106,   545,   546,   311,   146,   513,   485,
     456,   552,   112,   318,   687,   995,   321,   322,   323,   921,
     496,   329,    25,   331,   926,   564,     5,     7,     5,   505,
       0,     5,   508,     5,     6,   511,     3,     9,     5,    18,
       5,     5,    13,   146,    18,     5,     5,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,     5,
     405,     3,   172,     5,     5,     5,     5,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   106,     3,     5,     5,  1424,     5,   208,
       5,     5,     5,  1430,   440,   716,   717,   718,   719,  1436,
       7,    18,     5,    18,     5,   374,    87,  1444,     5,   454,
     793,   232,   795,  1450,  1451,    18,     7,    18,    57,     7,
       7,    18,     7,   146,     5,     5,     5,     5,    63,   104,
      57,   449,    56,    52,   238,     5,   481,    13,    55,   539,
      13,    13,    69,    57,    70,   233,    13,     5,     6,    84,
      74,     9,   240,    86,   500,     5,    84,     3,    84,     5,
      84,    85,    95,    96,    97,   595,   279,     5,    92,     7,
      94,    99,    52,   238,    53,   796,    57,    57,  1090,    57,
      70,   233,   238,   239,    74,    75,   296,    25,   240,   208,
     118,   812,   813,   814,   815,   816,   817,   818,   819,   820,
     821,   822,   823,   824,   825,   826,   827,    57,    70,   830,
     479,    87,    74,   232,    87,    87,   238,   330,  1130,   238,
      87,   203,    84,   208,    94,   540,     3,   238,     5,   233,
      66,    67,   345,   346,   104,   217,   240,   165,   220,   104,
     105,   106,   107,   643,   357,   232,   238,   232,   238,   238,
     239,   364,   365,   366,   238,   239,   279,   370,   371,   605,
     373,   238,   238,   376,   239,   239,   379,   103,   238,   238,
     238,   233,   221,   222,   223,   224,    70,    74,   240,   115,
     222,   127,    76,   238,   239,   631,   716,   717,   718,   719,
      84,   240,   238,   238,   443,   233,   235,   238,   238,   238,
      97,   646,   240,   649,   239,     7,   239,   576,     7,   238,
     931,   239,   239,   239,   235,   239,   237,   427,   238,   238,
     666,   235,   239,   238,   239,   238,  1238,   645,   232,   168,
     443,   238,   232,   171,   238,   238,   239,   238,   239,   452,
     453,   238,   239,   189,     7,   203,   232,   238,     7,   239,
     238,   238,   233,   238,   235,   235,   232,   235,  1695,   232,
     232,   374,    74,   476,  1701,   232,   796,   205,   206,   207,
       5,     6,    84,     7,   239,   229,   525,   239,   527,   528,
     529,   235,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,     7,   232,
     830,   238,   239,   239,     7,   238,   118,   119,   120,   121,
     122,   123,   525,    74,   527,   528,   529,   966,     7,   233,
     443,   531,   232,    84,  1761,    86,   240,  1764,   238,    69,
     232,    71,    72,   889,    74,  1772,   238,   550,   551,   549,
     553,   238,   239,   232,    84,   239,   559,   765,   561,   233,
    1001,     7,   233,   566,   567,    84,   240,  1794,    74,   240,
     100,   101,   102,     7,   233,  1086,   579,     7,    84,    84,
      84,   240,    86,   233,  1095,   115,     7,   233,   591,    93,
     240,     7,   233,    99,   240,     5,   233,   103,   117,   240,
      10,    11,  1404,   240,  1406,   124,   233,     7,    18,   845,
       8,   931,   525,   240,   527,   528,   529,   239,   240,   124,
     209,   210,   211,   212,   213,   664,   215,   216,   217,   218,
     239,   240,   221,   222,   223,   224,   225,   239,   641,   232,
     229,    51,     7,   879,     7,   238,   235,   223,   224,   225,
    1055,   651,   652,   229,   890,   239,   240,   893,     7,   235,
       7,   664,   167,   232,   169,   901,   902,   903,   904,   238,
     238,   239,   908,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   239,   240,    68,     7,   191,     7,   239,   232,
      74,   238,   897,   898,   899,   900,  1101,   238,   239,    69,
     232,    71,   232,    87,    74,     7,   911,   238,   239,   239,
     209,   210,   211,   212,   213,   232,   215,   216,   217,   218,
     239,  1126,   221,   222,   223,   224,   225,  1103,   238,   239,
     229,   238,   239,   239,   239,   239,   235,   232,   108,   109,
     110,   111,   112,   113,   114,   115,  1626,  1627,   238,   239,
     232,   664,   232,  1158,   238,   239,   759,   232,   223,   224,
     225,   226,   967,   968,   229,   232,  1086,   238,   239,     3,
       4,     5,   232,  1009,   232,  1095,   238,   239,  1014,   232,
     783,   232,   785,   232,   989,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     232,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   232,  1027,   221,   222,   223,   224,   225,   226,   232,
    1066,   229,  1068,    74,     7,    76,  1409,  1410,  1411,  1075,
     232,   880,   881,   882,   883,   232,    87,   232,  1650,    77,
      78,    79,    80,    81,    82,   239,   124,   232,    99,   127,
     239,   240,     7,    76,   232,     3,     4,     5,  1214,   239,
     232,   139,   140,   141,   115,  1386,   232,   880,   881,   882,
     883,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,   239,   240,  1349,  1350,
    1351,   124,   239,   240,   232,   954,    69,   232,    71,    72,
      73,   215,   216,   217,   218,   232,  1367,   221,   222,   223,
     224,   225,   226,   146,   147,   229,   232,  1142,   239,   240,
     239,    69,  1147,    71,    72,    73,   238,   239,  1750,   239,
     240,   954,   239,   240,     5,   108,   109,   110,   111,   112,
     113,   114,   115,   204,   239,   240,     5,   880,   881,   882,
     883,   239,   170,   171,   172,   173,     6,  1213,   239,   240,
     108,   109,   110,   111,   112,   113,   114,   115,   222,     5,
    1225,   204,     5,   227,   239,   240,   230,   240,   239,     7,
    1000,     5,  1002,   239,   240,   239,     7,   240,    69,   232,
      71,   239,   232,    74,   239,   240,   233,  1020,   232,  1022,
    1255,  1024,   238,   239,   233,  1260,   239,  1262,  1028,   115,
     240,  1236,   118,   119,   120,   121,   122,     5,   124,  1244,
     124,   954,   208,   127,  1047,   239,   240,   108,   109,   110,
     111,   112,   113,   114,   115,   139,   140,   238,  1293,   143,
     144,   239,   240,  1298,   239,   240,  1386,  1303,   230,  1510,
     239,   240,  1513,  1309,    76,   239,   240,  1313,  1651,   238,
    1316,   239,   240,   232,   222,  1321,   239,   239,   240,   227,
     238,   239,   230,   239,   240,   238,  1332,   239,   240,   238,
     238,   555,   556,   238,   238,  1310,   239,     8,   238,   240,
    1346,   239,  1348,     5,  1555,   117,     7,   233,   204,     3,
    1561,   208,   124,   125,    84,   208,    86,    87,    88,    89,
      90,    91,   221,   222,   223,   224,   225,     5,  1374,  1375,
     229,  1377,     5,   238,   146,     5,   235,   149,   150,     5,
     238,     5,     5,  1358,   208,   239,   238,   238,   126,   238,
     128,   129,   130,   131,   238,   133,   134,   135,   136,   137,
     138,   233,     5,     5,   142,   238,     5,   145,   239,   238,
     148,   238,  1623,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     5,   238,   166,     5,
       5,     5,   204,   171,   238,     5,   174,  1412,   209,   210,
     211,   212,   213,     5,   215,   216,   217,   218,   233,     5,
     221,   222,   223,   224,   225,   232,   185,   238,   229,     3,
       4,     5,   238,   238,   235,   238,  1239,   239,  1679,   115,
      14,    15,    16,    17,     7,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     233,   239,     7,   238,     7,     7,   233,     7,   232,   239,
     232,  1517,     7,     7,     7,   208,     7,  1523,  1634,     5,
       7,  1732,   238,   238,  1530,   108,   109,   110,   111,   112,
     113,   114,   115,     7,  1307,   239,     7,     7,  1311,  1545,
       7,  1314,  1315,     7,  1690,     7,  1319,     5,   240,  1322,
    1323,  1324,  1325,     7,     7,  1328,  1329,     8,  1331,  1368,
    1333,  1370,  1371,  1336,   238,     5,     5,  1340,  1341,     5,
    1343,   238,   221,   222,   223,   224,   225,   226,     7,  1352,
     229,   208,     7,     5,   235,     5,     3,     4,     5,     7,
     240,     7,     7,     7,     7,  1368,     7,  1370,  1371,     7,
     239,   238,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,     7,   212,   213,   214,   215,   216,   217,
     218,  1816,   233,   221,   222,   223,   224,   225,   226,     7,
       6,   229,  1658,    54,     7,   232,   239,  1663,   238,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   233,
       5,   221,   222,   223,   224,   225,   226,   232,   222,   229,
     232,   232,     3,   227,   232,  1368,   230,  1370,  1371,     5,
     240,   108,   232,     7,   240,   239,   238,   238,     5,  1705,
     238,   238,  1475,   238,   238,  1478,   238,   209,   210,   211,
     212,   213,   238,   215,   216,   217,   218,  1490,   233,   221,
     222,   223,   224,   225,   240,   238,   232,   229,     5,   217,
     229,   232,  1707,   235,     3,     3,   232,  1743,  1511,  1745,
     238,     7,   232,   232,     7,  1720,   238,   209,   210,   211,
     212,   213,   232,   215,   216,   217,   218,   232,     5,   221,
     222,   223,   224,   225,   232,   238,     7,   229,     5,   232,
       5,     5,   232,   235,     5,  1548,   232,  1550,     5,  1549,
     232,   238,   232,  1553,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   238,   232,   232,   238,   232,   215,  1572,
    1573,  1574,  1575,  1576,   221,   222,   232,   238,   232,   232,
     227,   232,     5,   230,   233,     5,  1791,     5,   235,   236,
     232,   238,   232,   232,  1633,     5,   233,   233,   232,     5,
     233,     5,     5,     5,   239,   209,   210,   211,   212,   213,
     238,   215,   216,   217,   218,     5,     5,   221,   222,   223,
     224,   225,  1622,     5,     5,   229,     5,     5,     5,     5,
    1633,   235,     3,   211,   212,   213,     3,   215,   216,   217,
     218,     5,  1645,   221,   222,   223,   224,   225,     5,     5,
       5,   229,  1655,  1656,     7,     7,  1659,   235,  1661,     5,
       5,     5,   126,  1666,   128,   129,   130,   131,  1668,   133,
     134,   135,   136,   137,   138,     5,     5,  1680,   142,     5,
       5,   145,     5,     5,   148,     5,     5,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
       5,  1704,   166,     5,     5,     5,     5,   171,     5,     5,
     174,     5,   232,   232,   238,     5,   239,   235,     7,   240,
    1633,     7,  1725,     7,     7,     7,     7,     7,     7,     7,
       3,  1734,     7,     7,   240,     7,     7,     7,   209,   210,
     211,   212,   213,     7,   215,   216,   217,   218,     7,  1752,
     221,   222,   223,   224,   225,   238,     7,   233,   229,   232,
       7,     7,     7,   238,   235,     5,     7,   233,     7,     7,
       7,     7,     7,     7,  1777,   239,     7,  1780,     7,     7,
     215,   216,   217,   218,     7,     7,   221,   222,   223,   224,
     225,     3,     4,     5,   229,     5,     7,  1800,     7,  1802,
     235,     7,     7,     7,     7,     7,  1809,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     3,     4,
       5,     6,     5,     7,     9,     5,   232,   232,   232,    14,
      15,    16,    17,     5,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     5,
       7,   240,     7,     7,     7,     7,     7,     3,     4,     5,
       6,   233,    57,     9,     7,     7,   108,   240,    14,    15,
      16,    17,   240,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   240,     3,
       4,     5,   240,   240,   240,   233,   240,   240,   233,     7,
      14,    15,    16,    17,     7,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     209,   210,   211,   212,   213,   240,   215,   216,   217,   218,
     240,   239,   221,   222,   223,   224,   225,   240,   212,   213,
     229,   215,   216,   217,   218,   239,   235,   221,   222,   223,
     224,   225,     7,   215,     7,   229,    99,   240,   240,   221,
     222,   235,     7,   240,   240,   227,   233,   233,   230,   240,
     238,   233,   234,   235,   236,   238,   238,     7,     7,     7,
       3,   239,   209,   210,   211,   212,   213,   202,   215,   216,
     217,   218,     5,   238,   221,   222,   223,   224,   225,   238,
     240,   233,   229,   240,   240,   240,     7,   222,   235,     7,
       7,     7,   227,   240,     7,   230,     7,     5,     5,   238,
     235,     5,   238,   238,     5,     7,   238,   238,     7,   238,
     238,   238,     7,     5,     5,     5,   202,   238,     7,     5,
     238,     3,   239,   233,   233,   233,     5,     5,     5,     5,
     232,     5,     7,   233,     5,   233,   222,     3,     4,     5,
       7,   227,   186,   233,   230,   189,     7,     7,    14,    15,
      16,    17,   238,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   222,     5,
     240,   240,   240,   227,   240,     7,   230,     7,   233,   240,
     233,   233,   240,   126,   238,   128,   129,   130,   131,   240,
     133,   134,   135,   136,   137,   138,   233,   233,   240,   142,
     238,   240,   145,   238,   233,   148,   240,   233,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   239,   233,   166,   233,   239,     7,   239,   171,     5,
     126,   174,   128,   129,   130,   131,     7,   133,   134,   135,
     136,   137,   138,     5,     7,   239,   142,     7,     7,   145,
       7,     7,   148,     7,     5,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     7,     5,
     166,   239,     7,     7,     7,   171,     7,     7,   174,     7,
       7,   238,     7,   235,     7,     7,     7,     5,   238,    98,
     126,     7,   128,   129,   130,   131,   239,   133,   134,   135,
     136,   137,   138,     5,   233,   240,   142,   240,   233,   145,
     132,   233,   148,   233,   238,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     7,     5,
     166,     5,   240,   240,   240,   171,   240,   240,   174,     7,
       7,   238,   240,   239,     7,   238,   222,     7,     7,     7,
       5,   227,     5,     5,   230,   238,     5,   232,   240,   233,
     233,   233,   238,     5,   126,     5,   128,   129,   130,   131,
       7,   133,   134,   135,   136,   137,   138,   240,   240,     7,
     142,     7,   239,   145,   239,     7,   148,     7,     7,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,     5,   239,   166,     7,     7,   238,     7,   171,
     238,     7,   174,     7,     7,   238,     7,   238,   233,   233,
     240,   239,     7,    50,   126,   238,   128,   129,   130,   131,
       7,   133,   134,   135,   136,   137,   138,     7,     7,     7,
     142,     7,     7,   145,   116,     5,   148,   239,     7,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,     5,     0,   166,     0,   957,  1079,   958,   171,
     726,   126,   174,   128,   129,   130,   131,   239,   133,   134,
     135,   136,   137,   138,   582,   840,  1559,   142,  1202,  1363,
     145,   522,   517,   148,   623,   143,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,     5,
     242,   166,    -1,    -1,    -1,    -1,   171,    -1,    -1,   174,
      -1,    -1,    -1,   126,    -1,   128,   129,   130,   131,    -1,
     133,   134,   135,   136,   137,   138,    -1,   239,    -1,   142,
      -1,    -1,   145,    -1,    -1,   148,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     5,    -1,   166,    -1,    -1,    -1,    -1,   171,    -1,
      -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   126,   239,   128,   129,   130,   131,    -1,
     133,   134,   135,   136,   137,   138,    -1,    -1,    -1,   142,
      -1,    -1,   145,    -1,    -1,   148,    -1,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,     5,     7,   166,    -1,    -1,    -1,    -1,   171,    -1,
     126,   174,   128,   129,   130,   131,   239,   133,   134,   135,
     136,   137,   138,     7,    -1,    -1,   142,    -1,    -1,   145,
      -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,    -1,    -1,
     166,     7,    -1,    -1,    -1,   171,    -1,    -1,   174,    -1,
      -1,    -1,   126,    -1,   128,   129,   130,   131,    -1,   133,
     134,   135,   136,   137,   138,    -1,   239,    -1,   142,     7,
      -1,   145,    -1,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
       7,    -1,   166,    -1,    -1,    -1,    -1,   171,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,   126,   239,   128,   129,   130,   131,    -1,   133,
     134,   135,   136,   137,   138,    -1,    -1,    -1,   142,    -1,
      -1,   145,     7,    -1,   148,    -1,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
      -1,    -1,   166,     3,     4,     5,    -1,   171,    -1,    -1,
     174,    -1,    -1,    -1,    -1,   239,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,   209,   210,   211,   212,   213,     7,
     215,   216,   217,   218,    -1,    -1,   221,   222,   223,   224,
     225,    -1,    -1,    -1,   229,   209,   210,   211,   212,   213,
     235,   215,   216,   217,   218,   239,     7,   221,   222,   223,
     224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,   209,   210,   211,   212,   213,    -1,   215,
     216,   217,   218,     7,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,   209,   210,   211,   212,   213,    -1,   215,   216,   217,
     218,     7,    -1,   221,   222,   223,   224,   225,    -1,    -1,
      -1,   229,   209,   210,   211,   212,   213,   235,   215,   216,
     217,   218,    -1,    -1,   221,   222,   223,   224,   225,    -1,
      -1,    -1,   229,   209,   210,   211,   212,   213,   235,   215,
     216,   217,   218,    -1,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    -1,   229,   209,   210,   211,   212,   213,   235,
     215,   216,   217,   218,    -1,    -1,   221,   222,   223,   224,
     225,    -1,    -1,    -1,   229,   209,   210,   211,   212,   213,
     235,   215,   216,   217,   218,    -1,    -1,   221,   222,   223,
     224,   225,   222,    -1,    -1,   229,    -1,   227,    -1,    -1,
     230,   235,    -1,    -1,    -1,   235,   240,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   209,   210,   211,   212,   213,    -1,   215,   216,   217,
     218,    -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,   235,   209,   210,
     211,   212,   213,    -1,   215,   216,   217,   218,    -1,    -1,
     221,   222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,   235,   209,   210,   211,   212,   213,
      -1,   215,   216,   217,   218,    -1,    -1,   221,   222,   223,
     224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,   209,   210,   211,   212,   213,    -1,   215,
     216,   217,   218,    -1,    -1,   221,   222,   223,   224,   225,
       3,     4,     5,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,     5,
      -1,     8,     3,     4,     5,    -1,    12,    -1,    -1,   222,
      -1,    -1,    18,    -1,   227,    -1,    -1,   230,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,     8,    50,    -1,    -1,    -1,    -1,    -1,
      56,    -1,    -1,   222,    -1,    -1,    -1,    -1,   227,    -1,
      -1,   230,     3,    69,     8,    71,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,    83,    -1,    -1,
      -1,    87,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,   222,    -1,    -1,    -1,    -1,   227,
      -1,    -1,   230,    -1,    -1,    -1,     8,    -1,    -1,    50,
     116,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      71,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,
     227,    -1,    83,   230,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,   164,    -1,
     166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   222,    -1,    -1,    -1,
      -1,   227,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
     206,   207,   209,   210,   211,   212,   213,    -1,   215,   216,
     217,   218,    -1,    -1,   221,   222,   223,   224,   225,    -1,
      -1,   222,   229,   164,   231,   166,   227,    -1,   235,   230,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,   209,   210,   211,   212,   213,    -1,
     215,   216,   217,   218,    -1,    -1,   221,   222,   223,   224,
     225,    -1,    -1,    -1,   229,   209,   210,   211,   212,   213,
     235,   215,   216,   217,   218,    -1,    -1,   221,   222,   223,
     224,   225,    -1,    -1,    -1,   229,   209,   210,   211,   212,
     213,   235,   215,   216,   217,   218,    -1,   120,   221,   222,
     223,   224,   225,    -1,    -1,    -1,   229,   209,   210,   211,
     212,   213,   235,   215,   216,   217,   218,    -1,    -1,   221,
     222,   223,   224,   225,    -1,    -1,    -1,   229,   151,    -1,
      -1,    -1,    -1,   235,   209,   210,   211,   212,   213,    -1,
     215,   216,   217,   218,    -1,    -1,   221,   222,   223,   224,
     225,    -1,   175,    -1,   229,    -1,   231,    -1,    -1,    -1,
     235,    -1,    -1,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   209,
     210,   211,   212,   213,    -1,   215,   216,   217,   218,    -1,
      -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,   229,
     209,   210,   211,   212,   213,   235,   215,   216,   217,   218,
     240,    -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,
     229,   209,   210,   211,   212,   213,   235,   215,   216,   217,
     218,   240,    -1,   221,   222,   223,   224,   225,    -1,    -1,
      -1,   229,   209,   210,   211,   212,   213,   235,   215,   216,
     217,   218,   240,    -1,   221,   222,   223,   224,   225,    -1,
      -1,    -1,   229,   209,   210,   211,   212,   213,   235,   215,
     216,   217,   218,   240,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    -1,   229,   209,   210,   211,   212,   213,   235,
     215,   216,   217,   218,   240,    -1,   221,   222,   223,   224,
     225,    -1,    -1,    -1,   229,   209,   210,   211,   212,   213,
     235,   215,   216,   217,   218,   240,    -1,   221,   222,   223,
     224,   225,    -1,    -1,    -1,   229,   209,   210,   211,   212,
     213,   235,   215,   216,   217,   218,   240,    -1,   221,   222,
     223,   224,   225,    -1,    -1,    -1,   229,   209,   210,   211,
     212,   213,   235,   215,   216,   217,   218,   240,    -1,   221,
     222,   223,   224,   225,    -1,    -1,    -1,   229,   209,   210,
     211,   212,   213,   235,   215,   216,   217,   218,   240,    -1,
     221,   222,   223,   224,   225,    -1,    -1,    -1,   229,   209,
     210,   211,   212,   213,   235,   215,   216,   217,   218,   240,
      -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,   229,
     209,   210,   211,   212,   213,   235,   215,   216,   217,   218,
     240,    -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,
     229,   209,   210,   211,   212,   213,   235,   215,   216,   217,
     218,   240,    -1,   221,   222,   223,   224,   225,    -1,    -1,
      -1,   229,   209,   210,   211,   212,   213,   235,   215,   216,
     217,   218,   240,    -1,   221,   222,   223,   224,   225,    -1,
      -1,    -1,   229,   209,   210,   211,   212,   213,   235,   215,
     216,   217,   218,   240,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    -1,   229,   209,   210,   211,   212,   213,   235,
     215,   216,   217,   218,   240,    -1,   221,   222,   223,   224,
     225,    -1,    -1,    -1,   229,   209,   210,   211,   212,   213,
     235,   215,   216,   217,   218,   240,    -1,   221,   222,   223,
     224,   225,    -1,    -1,    -1,   229,   209,   210,   211,   212,
     213,   235,   215,   216,   217,   218,   240,    -1,   221,   222,
     223,   224,   225,    -1,    -1,    -1,   229,   209,   210,   211,
     212,   213,   235,   215,   216,   217,   218,   240,    -1,   221,
     222,   223,   224,   225,    -1,    -1,    -1,   229,   209,   210,
     211,   212,   213,   235,   215,   216,   217,   218,   240,    -1,
     221,   222,   223,   224,   225,    -1,    -1,    -1,   229,   209,
     210,   211,   212,   213,   235,   215,   216,   217,   218,   240,
      -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,   229,
     209,   210,   211,   212,   213,   235,   215,   216,   217,   218,
     240,    -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,
     229,   209,   210,   211,   212,   213,   235,   215,   216,   217,
     218,   240,    -1,   221,   222,   223,   224,   225,    -1,    -1,
      -1,   229,   209,   210,   211,   212,   213,   235,   215,   216,
     217,   218,   240,    -1,   221,   222,   223,   224,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,   239,   209,   210,   211,   212,   213,    -1,   215,
     216,   217,   218,    -1,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,
      -1,    -1,    -1,   239,   209,   210,   211,   212,   213,    -1,
     215,   216,   217,   218,    -1,    -1,   221,   222,   223,   224,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
     235,    -1,    -1,    -1,   239,   209,   210,   211,   212,   213,
      -1,   215,   216,   217,   218,    -1,    -1,   221,   222,   223,
     224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,   235,    -1,    -1,    -1,   239,   209,   210,   211,   212,
     213,    -1,   215,   216,   217,   218,    -1,    -1,   221,   222,
     223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
      -1,    -1,   235,    -1,    -1,    -1,   239,   209,   210,   211,
     212,   213,    -1,   215,   216,   217,   218,    -1,    -1,   221,
     222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   235,    -1,    -1,    -1,   239,   209,   210,
     211,   212,   213,    -1,   215,   216,   217,   218,    -1,    -1,
     221,   222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,   239,   209,
     210,   211,   212,   213,    -1,   215,   216,   217,   218,    -1,
      -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,   239,
     209,   210,   211,   212,   213,    -1,   215,   216,   217,   218,
      -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,
     239,   209,   210,   211,   212,   213,    -1,   215,   216,   217,
     218,    -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,
      -1,   239,   209,   210,   211,   212,   213,    -1,   215,   216,
     217,   218,    -1,    -1,   221,   222,   223,   224,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   235,    -1,
      -1,    -1,   239,   209,   210,   211,   212,   213,    -1,   215,
     216,   217,   218,    -1,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,   233,    -1,   235,
     209,   210,   211,   212,   213,    -1,   215,   216,   217,   218,
      -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,   233,    -1,   235,   209,   210,   211,
     212,   213,    -1,   215,   216,   217,   218,    -1,    -1,   221,
     222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,   233,    -1,   235,   209,   210,   211,   212,   213,    -1,
     215,   216,   217,   218,    -1,    -1,   221,   222,   223,   224,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,   233,    -1,
     235,   209,   210,   211,   212,   213,    -1,   215,   216,   217,
     218,    -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,   233,    -1,   235,   209,   210,
     211,   212,   213,    -1,   215,   216,   217,   218,    -1,    -1,
     221,   222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,   233,    -1,   235,   209,   210,   211,   212,   213,
      -1,   215,   216,   217,   218,    -1,    -1,   221,   222,   223,
     224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,   233,
      -1,   235,   209,   210,   211,   212,   213,    -1,   215,   216,
     217,   218,    -1,    -1,   221,   222,   223,   224,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,   233,    -1,   235,   209,
     210,   211,   212,   213,    -1,   215,   216,   217,   218,    -1,
      -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,   233,    -1,   235,   209,   210,   211,   212,
     213,    -1,   215,   216,   217,   218,    -1,    -1,   221,   222,
     223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
     233,    -1,   235,   209,   210,   211,   212,   213,    -1,   215,
     216,   217,   218,    -1,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,   233,    -1,   235,
     209,   210,   211,   212,   213,    -1,   215,   216,   217,   218,
      -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,   233,    -1,   235,   209,   210,   211,
     212,   213,    -1,   215,   216,   217,   218,    -1,    -1,   221,
     222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,   233,    -1,   235,   209,   210,   211,   212,   213,    -1,
     215,   216,   217,   218,    -1,    -1,   221,   222,   223,   224,
     225,    -1,    -1,    -1,   229,    -1,    -1,    -1,   233,    -1,
     235,   209,   210,   211,   212,   213,    -1,   215,   216,   217,
     218,    -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,   233,    -1,   235,   209,   210,
     211,   212,   213,    -1,   215,   216,   217,   218,    -1,    -1,
     221,   222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,   233,    -1,   235,   209,   210,   211,   212,   213,
      -1,   215,   216,   217,   218,    -1,    -1,   221,   222,   223,
     224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,   233,
      -1,   235,   209,   210,   211,   212,   213,    -1,   215,   216,
     217,   218,    -1,    -1,   221,   222,   223,   224,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,   233,    -1,   235,   209,
     210,   211,   212,   213,    -1,   215,   216,   217,   218,    -1,
      -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,   233,    -1,   235,   209,   210,   211,   212,
     213,    -1,   215,   216,   217,   218,    -1,    -1,   221,   222,
     223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
     233,    -1,   235,   209,   210,   211,   212,   213,    -1,   215,
     216,   217,   218,    -1,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,   233,    -1,   235,
     209,   210,   211,   212,   213,    -1,   215,   216,   217,   218,
      -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,   233,    -1,   235,   209,   210,   211,
     212,   213,    -1,   215,   216,   217,   218,    -1,    -1,   221,
     222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,   233,    -1,   235,   209,   210,   211,   212,   213,    -1,
     215,   216,   217,   218,    -1,    -1,   221,   222,   223,   224,
     225,    -1,    -1,    -1,   229,    -1,   231,    -1,    -1,    -1,
     235,   209,   210,   211,   212,   213,    -1,   215,   216,   217,
     218,    -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,
      -1,   229,    -1,    -1,    -1,   233,    -1,   235,   209,   210,
     211,   212,   213,    -1,   215,   216,   217,   218,    -1,    -1,
     221,   222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,
      -1,    -1,   233,    -1,   235,   209,   210,   211,   212,   213,
      -1,   215,   216,   217,   218,    -1,    -1,   221,   222,   223,
     224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,   233,
      -1,   235,   209,   210,   211,   212,   213,    -1,   215,   216,
     217,   218,    -1,    -1,   221,   222,   223,   224,   225,    -1,
      -1,    -1,   229,    -1,    -1,    -1,   233,    -1,   235,   209,
     210,   211,   212,   213,    -1,   215,   216,   217,   218,    -1,
      -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,   229,
      -1,    -1,    -1,   233,    -1,   235,   209,   210,   211,   212,
     213,    -1,   215,   216,   217,   218,    -1,    -1,   221,   222,
     223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,    -1,
     233,    -1,   235,   209,   210,   211,   212,   213,    -1,   215,
     216,   217,   218,    -1,    -1,   221,   222,   223,   224,   225,
      -1,    -1,    -1,   229,    -1,    -1,    -1,   233,    -1,   235,
     209,   210,   211,   212,   213,    -1,   215,   216,   217,   218,
      -1,    -1,   221,   222,   223,   224,   225,    -1,    -1,    -1,
     229,    -1,    -1,    -1,   233,    -1,   235,   209,   210,   211,
     212,   213,    -1,   215,   216,   217,   218,    -1,    -1,   221,
     222,   223,   224,   225,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   235,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    -1,    -1,   221,   222,   223,   224,
     225,   226,    -1,    -1,   229,    -1,    -1,    -1,   233,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,    -1,
      -1,   221,   222,   223,   224,   225,   226,    -1,    -1,   229,
      -1,   231,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    -1,    -1,   221,   222,   223,   224,   225,   226,
      -1,    -1,   229,   211,   212,   213,   214,   215,   216,   217,
     218,    -1,    -1,   221,   222,   223,   224,   225,   226,    -1,
      -1,   229
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

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

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

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
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

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
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


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
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
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
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


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
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
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

#ifdef YYERROR_VERBOSE

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
#endif

#line 315 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
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
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
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

  if (yyssp >= yyss + yystacksize - 1)
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
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
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
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
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
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

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

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif

  switch (yyn) {

case 1:
#line 360 "GetDP.y"
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
#line 394 "GetDP.y"
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
#line 435 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 458 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 473 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 475 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 477 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 479 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 481 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 483 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 485 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 487 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 489 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 491 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 493 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 495 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 497 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 499 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 501 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 503 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 505 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 507 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 509 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 511 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 513 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 521 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 538 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 545 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 548 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 551 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 553 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 53:
#line 569 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-1].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = 1.0 ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum; /* !!! Pq? -1 ?? */
      ImbricatedLoop++;
    ;
    break;}
case 54:
#line 579 "GetDP.y"
{
      LoopControlVariablesTab[ImbricatedLoop][0] = yyvsp[-5].d ;
      LoopControlVariablesTab[ImbricatedLoop][1] = yyvsp[-3].d ;
      LoopControlVariablesTab[ImbricatedLoop][2] = yyvsp[-1].d ;
      LoopControlVariablesNameTab[ImbricatedLoop] = "" ;
      fgetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop]);
      yylinenoImbricatedLoopsTab[ImbricatedLoop] = yylinenum;
      ImbricatedLoop++;
    ;
    break;}
case 55:
#line 589 "GetDP.y"
{
      /*      fprintf(stderr, "numline = %d\n", yylinenum) ; */
      /* !!! Probleme avec num ligne decale -> necessaire mettre un espace apres EndFor ???*/
      if(LoopControlVariablesTab[ImbricatedLoop-1][1] >  
	 LoopControlVariablesTab[ImbricatedLoop-1][0]){
	LoopControlVariablesTab[ImbricatedLoop-1][0] +=
	  LoopControlVariablesTab[ImbricatedLoop-1][2];
	/*	
	if(strlen(LoopControlVariablesNameTab[ImbricatedLoop-1])){
	  TheSymbol.Name = LoopControlVariablesNameTab[ImbricatedLoop-1];
	  pSymbol = (Symbol*)List_PQuery(Symbol_L, &TheSymbol, CompareSymbols);
	  *(double*)List_Pointer_Fast(pSymbol->val, 0) += 
	    LoopControlVariablesTab[ImbricatedLoop-1][2] ;
	}
	*/	
	fsetpos( yyin, &yyposImbricatedLoopsTab[ImbricatedLoop-1]);
	yylinenum = yylinenoImbricatedLoopsTab[ImbricatedLoop-1];
      }
      else{
	ImbricatedLoop--;
      }
    ;
    break;}
case 56:
#line 617 "GetDP.y"
{ 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      List_Add(Group_S.InitialList, &(yyvsp[-3].i)) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;
    break;}
case 57:
#line 626 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = yyvsp[-7].i ; 
    ;
    break;}
case 58:
#line 633 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ;
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 59:
#line 643 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 60:
#line 648 "GetDP.y"
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
case 61:
#line 660 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 62:
#line 669 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 63:
#line 680 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 64:
#line 685 "GetDP.y"
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
case 65:
#line 722 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 66:
#line 725 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 67:
#line 737 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 68:
#line 739 "GetDP.y"
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
case 69:
#line 755 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 70:
#line 758 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 71:
#line 761 "GetDP.y"
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
case 72:
#line 812 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 73:
#line 825 "GetDP.y"
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
case 74:
#line 849 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 75:
#line 856 "GetDP.y"
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
case 76:
#line 869 "GetDP.y"
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
case 77:
#line 887 "GetDP.y"
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
case 78:
#line 910 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 79:
#line 914 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 80:
#line 923 "GetDP.y"
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
case 81:
#line 937 "GetDP.y"
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
case 82:
#line 971 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-3].c, (int)yyvsp[-1].d) ;
      if ( (i = List_ISearchSeq(Problem_S.Group, StringAux1, fcmp_Group_Name)) < 0 ) {
	vyyerror("Unknown Group: %s {%d}", yyvsp[-3].c, (int)yyvsp[-1].d) ;
	List_Reset(ListOfInt_L) ; yyval.l = ListOfInt_L ;
      }
      else
	yyval.l = ((struct Group *)List_Pointer(Problem_S.Group, i))->InitialList ;
      Free(yyvsp[-3].c) ;
    ;
    break;}
case 83:
#line 984 "GetDP.y"
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
case 85:
#line 1008 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 86:
#line 1018 "GetDP.y"
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
case 89:
#line 1040 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 90:
#line 1045 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 91:
#line 1046 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 92:
#line 1051 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 96:
#line 1070 "GetDP.y"
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
case 97:
#line 1090 "GetDP.y"
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
case 100:
#line 1141 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 101:
#line 1161 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 102:
#line 1167 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 103:
#line 1173 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 104:
#line 1176 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 105:
#line 1183 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 107:
#line 1194 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1197 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 109:
#line 1203 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 110:
#line 1207 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 112:
#line 1219 "GetDP.y"
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
#line 1232 "GetDP.y"
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
#line 1246 "GetDP.y"
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
#line 1261 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1267 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1273 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1279 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1285 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1291 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1297 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1303 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1309 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1315 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1321 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1327 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1333 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1339 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1345 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1351 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1357 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 132:
#line 1364 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 134:
#line 1372 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 136:
#line 1385 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1391 "GetDP.y"
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
#line 1465 "GetDP.y"
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
#line 1499 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 140:
#line 1508 "GetDP.y"
{ 
      if(yyvsp[0].i!=3 && yyvsp[0].i!=4) 
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
#line 1520 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 142:
#line 1522 "GetDP.y"
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
#line 1533 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 144:
#line 1535 "GetDP.y"
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
case 145:
#line 1549 "GetDP.y"
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
case 146:
#line 1561 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1567 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1573 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 149:
#line 1575 "GetDP.y"
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
case 150:
#line 1604 "GetDP.y"
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
    ;
    break;}
case 151:
#line 1628 "GetDP.y"
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
case 152:
#line 1641 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1647 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1654 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1660 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1667 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1674 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1685 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 159:
#line 1686 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 160:
#line 1687 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 161:
#line 1692 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 162:
#line 1693 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 163:
#line 1699 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 164:
#line 1702 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 165:
#line 1705 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 166:
#line 1721 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 167:
#line 1726 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 168:
#line 1733 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 170:
#line 1742 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 171:
#line 1747 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 172:
#line 1754 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 173:
#line 1757 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 174:
#line 1764 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 176:
#line 1774 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 177:
#line 1777 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 178:
#line 1780 "GetDP.y"
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
case 179:
#line 1818 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 180:
#line 1824 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 181:
#line 1831 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 183:
#line 1844 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 184:
#line 1851 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 185:
#line 1854 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 186:
#line 1861 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 187:
#line 1864 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 188:
#line 1871 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 190:
#line 1883 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 191:
#line 1893 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 192:
#line 1903 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 193:
#line 1910 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 194:
#line 1913 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 195:
#line 1920 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 197:
#line 1936 "GetDP.y"
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
case 198:
#line 1984 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 199:
#line 1987 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 200:
#line 1990 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1993 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1996 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 203:
#line 2007 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 205:
#line 2017 "GetDP.y"
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
case 207:
#line 2042 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 209:
#line 2056 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 210:
#line 2062 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 211:
#line 2069 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 212:
#line 2078 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2081 "GetDP.y"
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
case 214:
#line 2103 "GetDP.y"
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
case 215:
#line 2118 "GetDP.y"
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
case 216:
#line 2142 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 218:
#line 2156 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 219:
#line 2166 "GetDP.y"
{ 
      if (!Nbr_Index)
	ConstraintPerRegion_S.RegionIndex = Num_Group(&Group_S, "CO_Region", yyvsp[-1].i) ;
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
case 220:
#line 2190 "GetDP.y"
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
case 221:
#line 2215 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 222:
#line 2220 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 223:
#line 2228 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 224:
#line 2236 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 225:
#line 2246 "GetDP.y"
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
case 226:
#line 2263 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 227:
#line 2271 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 228:
#line 2278 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 229:
#line 2285 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 230:
#line 2294 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 231:
#line 2303 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 232:
#line 2312 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 233:
#line 2333 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 235:
#line 2344 "GetDP.y"
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
case 237:
#line 2371 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 239:
#line 2384 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 240:
#line 2390 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 241:
#line 2397 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 242:
#line 2406 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 243:
#line 2409 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 244:
#line 2412 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 245:
#line 2415 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 246:
#line 2422 "GetDP.y"
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
case 247:
#line 2438 "GetDP.y"
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
case 248:
#line 2487 "GetDP.y"
{ 
      BasisFunction_S.Name = NULL ; 
      BasisFunction_S.NameOfCoef = NULL ;
      BasisFunction_S.Num = 0 ;
      BasisFunction_S.GlobalBasisFunction = NULL ;
      BasisFunction_S.Function = NULL ; 
      BasisFunction_S.dFunction = NULL ;
      BasisFunction_S.dInvFunction = NULL ;
      BasisFunction_S.SubFunction = NULL ; 
      BasisFunction_S.SupportIndex = -1 ; 
      BasisFunction_S.EntityIndex  = -1 ;
    ;
    break;}
case 250:
#line 2507 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 251:
#line 2510 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 252:
#line 2515 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 253:
#line 2520 "GetDP.y"
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
case 254:
#line 2534 "GetDP.y"
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
case 255:
#line 2554 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 256:
#line 2559 "GetDP.y"
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
case 257:
#line 2583 "GetDP.y"
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
case 259:
#line 2643 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 260:
#line 2646 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 261:
#line 2655 "GetDP.y"
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
case 262:
#line 2721 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 263:
#line 2725 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 264:
#line 2732 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 266:
#line 2741 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 267:
#line 2746 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 268:
#line 2749 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 269:
#line 2756 "GetDP.y"
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
case 270:
#line 2772 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 271:
#line 2778 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 272:
#line 2781 "GetDP.y"
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
case 273:
#line 2800 "GetDP.y"
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
case 274:
#line 2812 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 275:
#line 2818 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 276:
#line 2821 "GetDP.y"
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
case 277:
#line 2836 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 278:
#line 2840 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 279:
#line 2849 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 281:
#line 2860 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 282:
#line 2865 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 283:
#line 2875 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 284:
#line 2888 "GetDP.y"
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
case 285:
#line 2903 "GetDP.y"
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
case 286:
#line 2977 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 288:
#line 2993 "GetDP.y"
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
case 289:
#line 3025 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 290:
#line 3028 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 291:
#line 3031 "GetDP.y"
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
case 292:
#line 3077 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 294:
#line 3087 "GetDP.y"
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
case 296:
#line 3113 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 298:
#line 3125 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 299:
#line 3131 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 300:
#line 3138 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 302:
#line 3150 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 303:
#line 3156 "GetDP.y"
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
case 304:
#line 3170 "GetDP.y"
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
case 305:
#line 3188 "GetDP.y"
{ DefineQuantity_S.Name = NULL ;
      DefineQuantity_S.Type = LOCALQUANTITY ;
      DefineQuantity_S.IndexInFunctionSpace = NULL ;
      DefineQuantity_S.FunctionSpaceIndex = -1 ;
      DefineQuantity_S.DofDataIndex = -1 ;
      DefineQuantity_S.DofData = NULL ;

      DefineQuantity_S.IntegralQuantity.InIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.Symmetry = 0 ;
      DefineQuantity_S.IntegralQuantity.WholeQuantity = NULL ;
    ;
    break;}
case 307:
#line 3210 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 308:
#line 3213 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 309:
#line 3217 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 310:
#line 3220 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 311:
#line 3230 "GetDP.y"
{
      if (!Nbr_Index) {
	if (!Flag_MultipleIndex){
	  if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-1].c,
				   fcmp_FunctionSpace_Name)) < 0)
	    vyyerror("Unknown FunctionSpace: %s", yyvsp[-1].c) ;
	  else
	    DefineQuantity_S.FunctionSpaceIndex = i ;
	}
	else{ 
	  vyyerror("Multiple Formulation out of context: %s {}", yyvsp[-1].c) ;
	}
      }
      else {
	List_Reset(ListOfFunctionSpaceIndex) ;
	for (k = 0 ; k < Nbr_Index ; k++) {
	  if (!Flag_MultipleIndex) {
	    if ((i = List_ISearchSeq(Problem_S.FunctionSpace, yyvsp[-1].c,
				     fcmp_FunctionSpace_Name)) < 0)
	      vyyerror("Unknown FunctionSpace: %s", yyvsp[-1].c) ;
	    else {
	      List_Add(ListOfFunctionSpaceIndex, &i) ;
	      DefineQuantity_S.FunctionSpaceIndex = i ;
	    }
	  }
	  else {
	    sprintf(StringAux1, "%s_%d_", yyvsp[-1].c, k+1) ;
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
case 312:
#line 3269 "GetDP.y"
{ /* attention : doit disparaitre.  */
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
      Free(yyvsp[-4].c) ;
    ;
    break;}
case 313:
#line 3293 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 314:
#line 3298 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 315:
#line 3304 "GetDP.y"
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
	  
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	    (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	  DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	    (WholeQuantity_P+0)->Case.Function.Para ;	 
	    
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
case 316:
#line 3616 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 317:
#line 3621 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 318:
#line 3630 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 319:
#line 3639 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 320:
#line 3648 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 322:
#line 3656 "GetDP.y"
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
case 323:
#line 3696 "GetDP.y"
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
case 324:
#line 3711 "GetDP.y"
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
case 325:
#line 3739 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 326:
#line 3742 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 327:
#line 3745 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 328:
#line 3748 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 329:
#line 3755 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 331:
#line 3766 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 332:
#line 3776 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 333:
#line 3786 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 334:
#line 3800 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 336:
#line 3812 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 337:
#line 3814 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 338:
#line 3816 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 339:
#line 3818 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 340:
#line 3826 "GetDP.y"
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
    ;
    break;}
case 342:
#line 3850 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 343:
#line 3858 "GetDP.y"
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
case 344:
#line 3937 "GetDP.y"
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
case 345:
#line 3983 "GetDP.y"
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
case 346:
#line 4007 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 347:
#line 4016 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 348:
#line 4025 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 349:
#line 4034 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 350:
#line 4046 "GetDP.y"
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
case 352:
#line 4075 "GetDP.y"
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
case 353:
#line 4099 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 354:
#line 4107 "GetDP.y"
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
case 355:
#line 4162 "GetDP.y"
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
case 356:
#line 4179 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 357:
#line 4180 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 358:
#line 4181 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 359:
#line 4182 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 360:
#line 4183 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 361:
#line 4184 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 362:
#line 4185 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 363:
#line 4186 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 364:
#line 4193 "GetDP.y"
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
case 365:
#line 4214 "GetDP.y"
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
case 366:
#line 4238 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 368:
#line 4248 "GetDP.y"
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
case 370:
#line 4273 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 372:
#line 4285 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 373:
#line 4292 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 374:
#line 4299 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 375:
#line 4302 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 376:
#line 4304 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 377:
#line 4310 "GetDP.y"
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
case 378:
#line 4325 "GetDP.y"
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
case 379:
#line 4344 "GetDP.y"
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
case 381:
#line 4364 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 382:
#line 4367 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 383:
#line 4376 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 384:
#line 4379 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 385:
#line 4384 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 386:
#line 4389 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 387:
#line 4394 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 388:
#line 4399 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 389:
#line 4408 "GetDP.y"
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
case 390:
#line 4445 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 391:
#line 4452 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 392:
#line 4455 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 393:
#line 4467 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 394:
#line 4477 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 395:
#line 4483 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 396:
#line 4486 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 397:
#line 4498 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 398:
#line 4506 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 399:
#line 4517 "GetDP.y"
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
case 400:
#line 4539 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 401:
#line 4546 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 402:
#line 4552 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 403:
#line 4558 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 404:
#line 4564 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 405:
#line 4572 "GetDP.y"
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
case 406:
#line 4594 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 407:
#line 4601 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 408:
#line 4607 "GetDP.y"
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
case 409:
#line 4618 "GetDP.y"
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
case 410:
#line 4629 "GetDP.y"
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
case 411:
#line 4642 "GetDP.y"
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
case 412:
#line 4657 "GetDP.y"
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
case 413:
#line 4677 "GetDP.y"
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
case 414:
#line 4698 "GetDP.y"
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
case 415:
#line 4710 "GetDP.y"
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
case 416:
#line 4730 "GetDP.y"
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
case 417:
#line 4747 "GetDP.y"
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
case 418:
#line 4766 "GetDP.y"
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
case 419:
#line 4788 "GetDP.y"
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
case 420:
#line 4822 "GetDP.y"
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
case 421:
#line 4835 "GetDP.y"
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
case 422:
#line 4849 "GetDP.y"
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
case 423:
#line 4862 "GetDP.y"
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
case 424:
#line 4874 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 426:
#line 4883 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 428:
#line 4892 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 429:
#line 4902 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 430:
#line 4912 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 431:
#line 4920 "GetDP.y"
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
case 432:
#line 4933 "GetDP.y"
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
case 433:
#line 4946 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
      Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 434:
#line 4955 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 435:
#line 4964 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-8].i) ;
      Operation_P->Case.SaveMesh.MeshFileBase = yyvsp[-6].c ;
      Operation_P->Case.SaveMesh.Format = yyvsp[-4].c ;
      Operation_P->Case.SaveMesh.ExprIndex = yyvsp[-2].i ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 436:
#line 4978 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-4].i) ;
      Operation_P->Case.SaveMesh.MeshFileBase = yyvsp[-2].c ;
      Operation_P->Case.SaveMesh.Format = NULL ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 437:
#line 4991 "GetDP.y"
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
case 438:
#line 5008 "GetDP.y"
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
case 439:
#line 5022 "GetDP.y"
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
case 440:
#line 5041 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 441:
#line 5046 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 442:
#line 5056 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 444:
#line 5066 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 445:
#line 5069 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 446:
#line 5079 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 447:
#line 5095 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 449:
#line 5111 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 450:
#line 5115 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 451:
#line 5119 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 452:
#line 5123 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 453:
#line 5128 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 454:
#line 5139 "GetDP.y"
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
case 456:
#line 5156 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 457:
#line 5160 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 458:
#line 5164 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 459:
#line 5168 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 460:
#line 5172 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 461:
#line 5177 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 462:
#line 5188 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 464:
#line 5203 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 465:
#line 5207 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 466:
#line 5211 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 467:
#line 5215 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 468:
#line 5219 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 469:
#line 5230 "GetDP.y"
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
case 471:
#line 5248 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 472:
#line 5252 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 473:
#line 5256 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 474:
#line 5260 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 475:
#line 5265 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 476:
#line 5275 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 477:
#line 5281 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 478:
#line 5287 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 479:
#line 5297 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 480:
#line 5300 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 481:
#line 5305 "GetDP.y"
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
case 483:
#line 5323 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 484:
#line 5333 "GetDP.y"
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
case 485:
#line 5362 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 486:
#line 5365 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 487:
#line 5368 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 488:
#line 5376 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 489:
#line 5393 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 491:
#line 5405 "GetDP.y"
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
case 493:
#line 5428 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 495:
#line 5442 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 496:
#line 5449 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 497:
#line 5457 "GetDP.y"
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
case 498:
#line 5503 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 499:
#line 5508 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 500:
#line 5514 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 501:
#line 5517 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 502:
#line 5522 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 504:
#line 5533 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 505:
#line 5536 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 506:
#line 5542 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 507:
#line 5547 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 508:
#line 5553 "GetDP.y"
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
case 509:
#line 5567 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 511:
#line 5581 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 512:
#line 5588 "GetDP.y"
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
case 513:
#line 5616 "GetDP.y"
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
case 514:
#line 5626 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 515:
#line 5627 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 516:
#line 5633 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 517:
#line 5642 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 518:
#line 5659 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 520:
#line 5671 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 522:
#line 5678 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 524:
#line 5690 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 525:
#line 5697 "GetDP.y"
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
case 526:
#line 5709 "GetDP.y"
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
case 527:
#line 5720 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 528:
#line 5725 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 529:
#line 5731 "GetDP.y"
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
case 530:
#line 5748 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 531:
#line 5758 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 532:
#line 5761 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 533:
#line 5765 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 534:
#line 5776 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 535:
#line 5780 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 536:
#line 5784 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 537:
#line 5790 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
    ;
    break;}
case 538:
#line 5796 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 539:
#line 5801 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 540:
#line 5805 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 541:
#line 5814 "GetDP.y"
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
case 542:
#line 5826 "GetDP.y"
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
case 543:
#line 5849 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 544:
#line 5850 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 545:
#line 5851 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 546:
#line 5852 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 547:
#line 5858 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 548:
#line 5860 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 549:
#line 5866 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 550:
#line 5872 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 551:
#line 5879 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 552:
#line 5888 "GetDP.y"
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
case 553:
#line 5910 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 554:
#line 5918 "GetDP.y"
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
case 555:
#line 5929 "GetDP.y"
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
case 556:
#line 5943 "GetDP.y"
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
case 557:
#line 5964 "GetDP.y"
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
case 558:
#line 5991 "GetDP.y"
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
case 559:
#line 6022 "GetDP.y"
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
case 560:
#line 6042 "GetDP.y"
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
    ;
    break;}
case 562:
#line 6069 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 563:
#line 6076 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 564:
#line 6083 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 565:
#line 6090 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 566:
#line 6094 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 567:
#line 6098 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 568:
#line 6102 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 569:
#line 6106 "GetDP.y"
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
case 570:
#line 6116 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 571:
#line 6121 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 572:
#line 6126 "GetDP.y"
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
case 573:
#line 6146 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 574:
#line 6153 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 575:
#line 6162 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 576:
#line 6171 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 577:
#line 6180 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 578:
#line 6187 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 579:
#line 6195 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 580:
#line 6199 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 581:
#line 6208 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 582:
#line 6212 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 583:
#line 6216 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 584:
#line 6224 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 585:
#line 6230 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 586:
#line 6239 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 587:
#line 6245 "GetDP.y"
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
	  } while(i<strlen(yyvsp[0].c)) ;
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
      } while (i<strlen(yyvsp[0].c)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 588:
#line 6293 "GetDP.y"
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
case 589:
#line 6308 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 590:
#line 6314 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 591:
#line 6320 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 594:
#line 6333 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 595:
#line 6339 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 596:
#line 6345 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 597:
#line 6356 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 598:
#line 6357 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 599:
#line 6358 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 600:
#line 6359 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 601:
#line 6360 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 602:
#line 6361 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 603:
#line 6362 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 604:
#line 6363 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 605:
#line 6364 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 606:
#line 6365 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 607:
#line 6366 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 608:
#line 6367 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 609:
#line 6368 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 610:
#line 6369 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 611:
#line 6370 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 612:
#line 6371 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 613:
#line 6372 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 614:
#line 6373 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 615:
#line 6374 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 616:
#line 6375 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 617:
#line 6376 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 618:
#line 6380 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 619:
#line 6381 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 620:
#line 6382 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 621:
#line 6383 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 622:
#line 6384 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 623:
#line 6385 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 624:
#line 6386 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 625:
#line 6387 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 626:
#line 6388 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 627:
#line 6389 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 628:
#line 6390 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 629:
#line 6391 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 630:
#line 6392 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 631:
#line 6393 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 632:
#line 6394 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 633:
#line 6395 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 634:
#line 6396 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 635:
#line 6397 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 636:
#line 6398 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 637:
#line 6399 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 638:
#line 6400 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 639:
#line 6401 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 640:
#line 6402 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 641:
#line 6403 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 642:
#line 6404 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 643:
#line 6405 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 644:
#line 6406 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 645:
#line 6407 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 646:
#line 6408 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 647:
#line 6409 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 648:
#line 6410 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 649:
#line 6411 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 650:
#line 6412 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 651:
#line 6413 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 652:
#line 6414 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 653:
#line 6415 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 654:
#line 6416 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 655:
#line 6417 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 656:
#line 6418 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 657:
#line 6419 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 658:
#line 6424 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 659:
#line 6425 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 660:
#line 6426 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 661:
#line 6427 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 662:
#line 6428 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 663:
#line 6429 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 664:
#line 6430 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 665:
#line 6432 "GetDP.y"
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
case 666:
#line 6450 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 667:
#line 6453 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 668:
#line 6459 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 669:
#line 6462 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 670:
#line 6469 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 671:
#line 6475 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 672:
#line 6478 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 673:
#line 6481 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 674:
#line 6493 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 675:
#line 6499 "GetDP.y"
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
case 676:
#line 6510 "GetDP.y"
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
case 677:
#line 6526 "GetDP.y"
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
case 678:
#line 6548 "GetDP.y"
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
case 679:
#line 6563 "GetDP.y"
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
case 680:
#line 6601 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 681:
#line 6609 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 682:
#line 6621 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 683:
#line 6624 "GetDP.y"
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
case 684:
#line 6638 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 685:
#line 6642 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 686:
#line 6659 "GetDP.y"
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

#line 705 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
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

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

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

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 6670 "GetDP.y"



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
    case WQ_CAST :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Cast.WholeQuantity, TraceGroupIndex) ;
      break ;
    case WQ_TRACE :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.Trace.WholeQuantity, 
	 (WholeQuantity_P+i)->Case.Trace.InIndex) ;
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


