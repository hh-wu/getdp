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
# define	tDeformeMesh	418
# define	tPostProcessing	419
# define	tNameOfSystem	420
# define	tPostOperation	421
# define	tNameOfPostProcessing	422
# define	tUsingPost	423
# define	tAppend	424
# define	tPlot	425
# define	tPrint	426
# define	tPrintGroup	427
# define	tEcho	428
# define	tWrite	429
# define	tAdapt	430
# define	tOnGlobal	431
# define	tOnRegion	432
# define	tOnElementsOf	433
# define	tOnGrid	434
# define	tOnSection	435
# define	tOnPoint	436
# define	tOnLine	437
# define	tOnPlane	438
# define	tOnBox	439
# define	tWithArgument	440
# define	tFile	441
# define	tDepth	442
# define	tDimension	443
# define	tTimeStep	444
# define	tHarmonicToTime	445
# define	tFormat	446
# define	tHeader	447
# define	tFooter	448
# define	tSkin	449
# define	tSmoothing	450
# define	tTarget	451
# define	tSort	452
# define	tIso	453
# define	tNoNewLine	454
# define	tDecomposeInSimplex	455
# define	tChangeOfValues	456
# define	tStr	457
# define	tDate	458
# define	tFlag	459
# define	tHelp	460
# define	tCpu	461
# define	tCheck	462
# define	tDEF	463
# define	tOR	464
# define	tAND	465
# define	tEQUAL	466
# define	tNOTEQUAL	467
# define	tAPPROXEQUAL	468
# define	tLESSOREQUAL	469
# define	tGREATEROREQUAL	470
# define	tLESSLESS	471
# define	tGREATERGREATER	472
# define	tCROSSPRODUCT	473
# define	UNARYPREC	474
# define	tSHOW	475

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.59 2003-08-19 16:31:26 gyselinc Exp $ */
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


static int ImbricatedLoop = 0;
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



#define	YYFINAL		1838
#define	YYFLAG		-32768
#define	YYNTBASE	242

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 475 ? yytranslate[x] : 432)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   228,     2,   236,   237,   226,     2,     2,
     231,   232,   224,   222,   241,   223,   235,   225,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     216,     2,   218,   210,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   233,     2,   234,   230,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   239,     2,   240,     2,     2,     2,     2,
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
     206,   207,   208,   209,   211,   212,   213,   214,   215,   217,
     219,   220,   221,   227,   229,   238
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
    1482,  1490,  1504,  1516,  1524,  1532,  1540,  1550,  1560,  1570,
    1582,  1600,  1614,  1630,  1642,  1656,  1657,  1665,  1666,  1674,
    1682,  1688,  1694,  1704,  1714,  1720,  1726,  1740,  1750,  1763,
    1774,  1789,  1797,  1805,  1807,  1809,  1810,  1813,  1817,  1821,
    1824,  1825,  1828,  1832,  1836,  1840,  1844,  1849,  1850,  1853,
    1857,  1861,  1865,  1869,  1873,  1878,  1879,  1882,  1886,  1890,
    1894,  1898,  1903,  1904,  1907,  1911,  1915,  1919,  1923,  1927,
    1932,  1937,  1942,  1943,  1948,  1949,  1952,  1956,  1960,  1964,
    1968,  1972,  1976,  1977,  1980,  1984,  1986,  1987,  1990,  1994,
    1999,  2004,  2008,  2013,  2014,  2019,  2020,  2023,  2027,  2032,
    2033,  2039,  2045,  2046,  2049,  2050,  2057,  2061,  2062,  2067,
    2071,  2075,  2076,  2079,  2083,  2085,  2086,  2089,  2093,  2097,
    2101,  2105,  2110,  2111,  2120,  2121,  2122,  2126,  2134,  2142,
    2151,  2163,  2164,  2175,  2182,  2186,  2193,  2195,  2197,  2199,
    2201,  2202,  2206,  2208,  2211,  2214,  2227,  2230,  2246,  2251,
    2264,  2282,  2305,  2318,  2319,  2322,  2326,  2331,  2336,  2340,
    2343,  2346,  2350,  2354,  2358,  2362,  2366,  2370,  2374,  2378,
    2382,  2386,  2390,  2394,  2400,  2403,  2406,  2410,  2420,  2424,
    2425,  2428,  2433,  2438,  2446,  2451,  2457,  2458,  2462,  2468,
    2474,  2476,  2478,  2480,  2482,  2484,  2486,  2488,  2490,  2492,
    2494,  2496,  2498,  2500,  2502,  2504,  2506,  2508,  2510,  2512,
    2514,  2516,  2518,  2522,  2525,  2528,  2532,  2536,  2540,  2544,
    2548,  2552,  2556,  2560,  2564,  2568,  2572,  2576,  2580,  2584,
    2589,  2594,  2599,  2604,  2609,  2614,  2619,  2624,  2629,  2634,
    2641,  2646,  2651,  2656,  2661,  2666,  2671,  2678,  2685,  2692,
    2698,  2701,  2703,  2705,  2707,  2709,  2711,  2713,  2715,  2717,
    2718,  2720,  2722,  2726,  2728,  2730,  2734,  2738,  2742,  2748,
    2752,  2757,  2762,  2769,  2778,  2787,  2789,  2791,  2793,  2795
};
static const short yyrhs[] =
{
      -1,   243,   244,     0,     0,     0,   244,   245,   246,     0,
      50,   239,   249,   240,     0,    87,   239,   273,   240,     0,
      56,   239,   307,   240,     0,    69,   239,   292,   240,     0,
      71,   239,   298,   240,     0,    83,   239,   314,   240,     0,
      98,   239,   337,   240,     0,   116,   239,   363,   240,     0,
     165,   239,   393,   240,     0,   167,   239,   405,   240,     0,
     409,     0,   422,     0,    12,   430,     0,   247,     0,   206,
       7,     0,   206,   172,     7,     0,   206,   208,     7,     0,
     206,    25,     7,     0,   206,   207,     7,     0,   206,   206,
       7,     0,   206,     5,     7,     0,   207,     7,     0,   208,
       7,     0,   208,    50,     7,     0,   208,    87,     7,     0,
     208,    56,     7,     0,   208,    69,     7,     0,   208,    71,
       7,     0,   208,    83,     7,     0,   208,    98,     7,     0,
     208,   116,     7,     0,   208,   165,     7,     0,   208,   167,
       7,     0,   208,     3,     7,     0,     0,   248,   413,     0,
       0,     0,   249,   250,   251,     0,     5,   209,   257,     7,
       0,     5,   272,   209,   257,     7,     0,     0,     5,   270,
     209,   252,   257,     7,     0,    51,   233,   268,   234,     7,
       0,   254,     0,   422,     0,   253,     0,    10,   231,   425,
       8,   425,   232,     0,    10,   231,   425,     8,   425,     8,
     425,   232,     0,    11,     0,     0,     0,     5,   233,     3,
     234,   209,    54,   255,   233,   236,   265,   256,   241,   236,
     265,   241,   425,   234,     7,     0,     0,     0,   261,   233,
     258,   262,   259,   263,   234,     0,   236,   265,     0,   257,
       0,     5,   271,     0,    57,     0,     5,     0,   265,     0,
      52,     0,     0,   269,   264,   265,     0,   269,    53,     5,
     271,     0,     5,     0,   267,     0,   239,   266,   240,     0,
       0,   266,   269,   267,     0,   266,   269,   223,   267,     0,
       3,     0,     3,     8,   425,     0,     3,     8,     3,     8,
     425,     0,     5,     0,     5,   239,   425,   240,     0,     5,
     239,   240,     0,     0,   268,   269,     5,     0,   268,   269,
       5,   239,   425,   240,     0,     0,   241,     0,   239,   236,
     425,   240,     0,     0,   239,   240,     0,   239,   425,   240,
       0,     0,   273,   274,     0,    55,   233,   275,   234,     7,
       0,     5,   233,   234,   209,   276,     7,     0,     5,   233,
     260,   234,   209,   276,     7,     0,   422,     0,     0,   275,
     269,     5,     0,    13,   233,   425,   234,     0,    87,   233,
       5,   234,     0,     0,   277,   280,     0,     0,   239,   279,
     240,     0,   276,     0,   279,   241,   276,     0,     0,   281,
     282,     0,   285,     0,     0,     0,   282,   210,   283,   282,
       8,   284,   282,     0,   282,   224,   282,     0,   282,   227,
     282,     0,    47,   233,   282,   241,   282,   234,     0,   282,
     225,   282,     0,   282,   222,   282,     0,   282,   223,   282,
       0,   282,   226,   282,     0,   282,   230,   282,     0,   282,
     216,   282,     0,   282,   218,   282,     0,   282,   217,   282,
       0,   282,   219,   282,     0,   282,   213,   282,     0,   282,
     214,   282,     0,   282,   215,   282,     0,   282,   212,   282,
       0,   282,   211,   282,     0,   223,   282,     0,   222,   282,
       0,   228,   282,     0,   231,   282,   232,     0,   426,     0,
     424,   289,   291,     0,     5,   362,     0,   362,     0,   362,
     289,     0,     0,   108,   286,   233,   280,   234,     0,     0,
      48,   233,     5,   233,   287,   280,   234,   234,   239,   425,
     240,     0,    49,   233,     5,   234,   239,   425,   241,   425,
     240,     0,    44,   233,   362,   234,     0,    46,   233,   362,
     234,     0,     0,    45,   288,   233,   280,   241,   260,   234,
       0,   216,     5,   218,   233,   280,   234,     0,   237,     5,
       0,   237,   190,     0,   237,   127,     0,   237,     3,     0,
     285,   236,     3,     0,   236,     3,     0,   285,   238,     3,
       0,   233,   235,   234,     0,   233,   234,     0,   233,   290,
     234,     0,   282,     0,   290,   241,   282,     0,     0,   239,
     428,   240,     0,   239,    57,   233,   260,   234,   240,     0,
       0,   292,   239,   293,   240,     0,     0,   293,   294,     0,
      84,     5,     7,     0,    70,   239,   295,   240,     0,     0,
     295,   239,   296,   240,     0,     0,   296,   297,     0,    57,
     260,     7,     0,    57,    52,     7,     0,    69,     5,   291,
       7,     0,     0,   298,   239,   299,   240,     0,     0,   299,
     300,     0,    84,     5,     7,     0,    76,   276,     7,     0,
      70,   239,   301,   240,     0,     0,   301,   239,   302,   240,
       0,     0,   302,   303,     0,    74,     5,     7,     0,    75,
       5,     7,     0,    70,   239,   304,   240,     0,     0,   304,
     239,   305,   240,     0,     0,   305,   306,     0,    77,     5,
       7,     0,    78,   425,     7,     0,    79,   425,     7,     0,
      80,   425,     7,     0,    81,   425,     7,     0,    82,   425,
       7,     0,     0,   307,   308,     0,   239,   309,   240,     0,
     422,     0,     0,   309,   310,     0,    84,     5,     7,     0,
      84,     5,   270,     7,     0,    74,     5,     7,     0,    70,
     239,   311,   240,     0,    70,     5,   239,   311,   240,     0,
       0,   311,   239,   312,   240,     0,     0,   312,   313,     0,
      74,     5,     7,     0,    57,   260,     7,     0,    58,   260,
       7,     0,    64,   276,     7,     0,    63,   276,     7,     0,
      68,     5,     7,     0,    65,   239,     3,   269,     3,   240,
       7,     0,    59,   260,     7,     0,    60,   260,     7,     0,
      87,   276,     7,     0,    62,   276,     7,     0,    61,   276,
       7,     0,    87,   233,   276,   241,   276,   234,     7,     0,
      62,   233,   276,   241,   276,   234,     7,     0,    61,   233,
     276,   241,   276,   234,     7,     0,     0,   314,   315,     0,
     239,   316,   240,     0,   422,     0,     0,   316,   317,     0,
      84,     5,     7,     0,    84,     5,   270,     7,     0,    74,
       5,     7,     0,    85,   239,   318,   240,     0,    92,   239,
     324,   240,     0,    94,   239,   331,   240,     0,    56,   239,
     334,   240,     0,     0,   318,   239,   319,   240,     0,     0,
     319,   320,     0,    84,     5,     7,     0,    86,     5,     7,
       0,    86,     5,   270,     7,     0,    87,     5,   321,     7,
       0,    88,   239,     5,   269,     5,   240,     7,     0,    89,
     278,     7,     0,    90,   260,     7,     0,    91,   260,     7,
       0,     0,     0,     0,   239,    99,     5,     7,    98,     5,
     270,     7,   322,    50,   260,     7,   323,   116,     5,   271,
       7,   240,     0,     0,   324,   239,   325,   240,     0,     0,
     325,   326,     0,    84,     5,     7,     0,    93,   327,     7,
       0,    86,   329,     7,     0,     5,     0,   239,   328,   240,
       0,     0,   328,   269,     5,     0,     5,     0,   239,   330,
     240,     0,     0,   330,   269,     5,     0,     0,   331,   239,
     332,   240,     0,     0,   332,   333,     0,    84,     5,     7,
       0,    74,     5,     7,     0,    86,     5,     7,     0,     0,
     334,   239,   335,   240,     0,     0,   335,   336,     0,    86,
       5,     7,     0,    95,   261,     7,     0,    96,   264,     7,
       0,    97,     5,   271,     7,     0,     0,   337,   338,     0,
     239,   339,   240,     0,   422,     0,     0,   339,   340,     0,
      84,     5,     7,     0,    84,     5,   270,     7,     0,    74,
       5,     7,     0,    99,   239,   341,   240,     0,   103,   239,
     347,   240,     0,     0,   341,   239,   342,   240,     0,     0,
     342,   343,     0,    84,     5,     7,     0,    74,    94,     7,
       0,    74,   104,     7,     0,    74,     5,     7,     0,     0,
     100,     5,   271,   344,   346,     7,     0,   101,     3,     7,
       0,     0,   233,   345,   280,   234,     7,     0,   115,   260,
       7,     0,    71,     5,     7,     0,    72,     5,     7,     0,
      69,     5,     7,     0,   102,     3,     7,     0,     0,   233,
       5,   234,     0,     0,   347,   348,     0,   104,   239,   353,
     240,     0,   105,   239,   353,   240,     0,   106,   239,   357,
     240,     0,   107,   239,   349,   240,     0,     0,   349,   350,
       0,    74,     5,     7,     0,    97,     5,     7,     0,   239,
     351,   240,     0,     0,   351,   352,     0,    66,   362,     7,
       0,    67,   362,     7,     0,   103,   362,     7,     0,   115,
     260,     7,     0,     0,   353,   354,     0,     0,     0,   361,
     233,   355,   280,   356,   241,   280,   234,     7,     0,   115,
     260,     7,     0,    69,     5,     7,     0,    71,     5,     7,
       0,    72,     5,     7,     0,    73,   233,     3,   234,     7,
       0,     0,   357,   358,     0,   115,   260,     7,     0,     0,
       0,   361,   233,   359,   280,   360,   241,   362,   234,     7,
       0,     0,   108,     0,   109,     0,   110,     0,   111,     0,
     112,     0,   113,     0,   114,     0,   239,     5,     5,   240,
       0,   239,     5,   240,     0,     0,   363,   364,     0,   239,
     365,   240,     0,   422,     0,     0,   365,   366,     0,    84,
       5,     7,     0,    84,     5,   270,     7,     0,   117,   239,
     368,   240,     0,     0,   124,   367,   239,   375,   240,     0,
       0,   368,   239,   369,   240,     0,     0,   369,   370,     0,
      84,     5,     7,     0,    74,     5,     7,     0,   118,   371,
       7,     0,   119,   430,     7,     0,   122,   373,     7,     0,
     123,     5,     7,     0,   120,   427,     7,     0,   121,   430,
       7,     0,     5,   271,     0,   239,   372,   240,     0,     0,
     372,   269,     5,     0,     5,     0,   239,   374,   240,     0,
       0,   374,   269,     5,     0,     0,   375,   376,     0,     5,
       5,     7,     0,   126,   276,     7,     0,   138,   239,   382,
     240,     0,   142,   239,   384,   240,     0,   145,   239,   386,
     240,     0,   148,   239,   388,   240,     0,     5,   233,     5,
     234,     7,     0,   126,   233,   276,   234,     7,     0,   137,
       7,     0,   131,   233,   276,   234,   239,   375,   240,     0,
     131,   233,   276,   234,   239,   375,   240,   132,   239,   375,
     240,     0,   128,   233,     5,   241,   276,   234,     7,     0,
     153,   233,     5,   241,   276,   241,   276,   241,   276,   241,
     276,   234,     7,     0,   153,   233,     5,   241,   276,   241,
     276,   241,   276,   234,     7,     0,   154,   233,     5,   241,
     427,   234,     7,     0,   155,   233,     5,   241,   427,   234,
       7,     0,   135,   233,     5,   241,   276,   234,     7,     0,
     136,   233,     5,   241,   260,   241,     5,   234,     7,     0,
     129,   233,     5,   241,     5,   241,   427,   234,     7,     0,
     130,   233,     5,   241,     5,   241,   425,   234,     7,     0,
     133,   233,     5,   241,   425,   241,   427,   241,   425,   234,
       7,     0,   134,   233,     5,   241,     5,   241,     5,   241,
     425,   241,   427,   241,   425,   241,   425,   234,     7,     0,
     138,   233,   425,   241,   425,   241,   276,   241,   276,   234,
     239,   375,   240,     0,   142,   233,   425,   241,   425,   241,
     276,   241,   425,   241,   425,   234,   239,   375,   240,     0,
     145,   233,   425,   241,   425,   241,   276,   234,   239,   375,
     240,     0,   145,   233,   425,   241,   425,   241,   276,   241,
     425,   234,   239,   375,   240,     0,     0,   172,   377,   233,
     379,   380,   234,     7,     0,     0,   175,   378,   233,   379,
     380,   234,     7,     0,   151,   233,   260,   241,   276,   234,
       7,     0,   167,   233,     5,   234,     7,     0,   152,   233,
     430,   234,     7,     0,   156,   233,     5,   241,   427,   241,
     425,   234,     7,     0,   157,   233,     5,   241,   425,   241,
     430,   234,     7,     0,   158,   239,     5,   240,     7,     0,
     159,   239,     5,   240,     7,     0,   163,   239,     5,   241,
     260,   241,   430,   241,   430,   241,   276,   240,     7,     0,
     163,   239,     5,   241,   260,   241,   430,   240,     7,     0,
     164,   239,     5,   241,     5,   241,   119,   430,   241,     4,
     240,     7,     0,   164,   239,     5,   241,     5,   241,   119,
     430,   240,     7,     0,   160,   233,     5,   241,     5,   241,
     425,   241,   425,   234,   239,   375,   240,     7,     0,   161,
     233,     5,   241,     5,   234,     7,     0,   162,   233,     5,
     241,     5,   234,     7,     0,   278,     0,     5,     0,     0,
     380,   381,     0,   241,   187,   430,     0,   241,   190,   427,
       0,   241,   427,     0,     0,   382,   383,     0,   139,   425,
       7,     0,   140,   425,     7,     0,   127,   276,     7,     0,
     141,   276,     7,     0,   124,   239,   375,   240,     0,     0,
     384,   385,     0,   139,   425,     7,     0,   140,   425,     7,
       0,   127,   276,     7,     0,   143,   425,     7,     0,   144,
     425,     7,     0,   124,   239,   375,   240,     0,     0,   386,
     387,     0,   146,   425,     7,     0,    76,   425,     7,     0,
     147,   276,     7,     0,   205,   425,     7,     0,   124,   239,
     375,   240,     0,     0,   388,   389,     0,   146,   425,     7,
       0,   149,   425,     7,     0,    76,   425,     7,     0,   205,
     425,     7,     0,   117,     5,     7,     0,   150,   239,   390,
     240,     0,   124,   239,   375,   240,     0,   125,   239,   375,
     240,     0,     0,   390,   239,   391,   240,     0,     0,   391,
     392,     0,    74,     5,     7,     0,    99,     5,     7,     0,
     115,   260,     7,     0,    76,   425,     7,     0,    87,   276,
       7,     0,   205,     5,     7,     0,     0,   393,   394,     0,
     239,   395,   240,     0,   422,     0,     0,   395,   396,     0,
      84,     5,     7,     0,    84,     5,   270,     7,     0,   118,
       5,   271,     7,     0,   166,     5,     7,     0,    99,   239,
     397,   240,     0,     0,   397,   239,   398,   240,     0,     0,
     398,   399,     0,    84,     5,     7,     0,    63,   239,   400,
     240,     0,     0,   400,   104,   239,   401,   240,     0,   400,
       5,   239,   401,   240,     0,     0,   401,   402,     0,     0,
     361,   233,   403,   280,   234,     7,     0,    74,     5,     7,
       0,     0,   115,   404,   260,     7,     0,    69,     5,     7,
       0,    71,     5,     7,     0,     0,   405,   406,     0,   239,
     407,   240,     0,   422,     0,     0,   407,   408,     0,    84,
       5,     7,     0,   168,     5,     7,     0,   192,     5,     7,
       0,   170,   430,     7,     0,   124,   239,   411,   240,     0,
       0,   167,     5,   169,     5,   410,   239,   411,   240,     0,
       0,     0,   411,   412,   413,     0,   171,   233,   415,   418,
     419,   234,     7,     0,   172,   233,   415,   418,   419,   234,
       7,     0,   172,   233,     6,   241,   425,   419,   234,     7,
       0,   172,   233,     6,   241,   203,   233,   430,   234,   419,
     234,     7,     0,     0,   173,   233,   260,   414,   241,   115,
     260,   419,   234,     7,     0,   174,   233,     6,   419,   234,
       7,     0,     5,   417,   241,     0,     5,   417,   416,     5,
     417,   241,     0,   224,     0,   225,     0,   222,     0,   223,
       0,     0,   233,   260,   234,     0,   177,     0,   178,   260,
       0,   179,   260,     0,   181,   239,   239,   428,   240,   239,
     428,   240,   239,   428,   240,   240,     0,   180,   260,     0,
     180,   239,   276,   241,   276,   241,   276,   240,   239,   427,
     241,   427,   241,   427,   240,     0,   182,   239,   428,   240,
       0,   183,   239,   239,   428,   240,   239,   428,   240,   240,
     239,   425,   240,     0,   184,   239,   239,   428,   240,   239,
     428,   240,   239,   428,   240,   240,   239,   425,   241,   425,
     240,     0,   185,   239,   239,   428,   240,   239,   428,   240,
     239,   428,   240,   239,   428,   240,   240,   239,   425,   241,
     425,   241,   425,   240,     0,   178,   260,   186,     5,   239,
     425,   241,   425,   240,   239,   425,   240,     0,     0,   419,
     420,     0,   241,   187,   430,     0,   241,   187,   218,   430,
       0,   241,   187,   221,   430,     0,   241,   188,   425,     0,
     241,   195,     0,   241,   196,     0,   241,   191,   425,     0,
     241,   192,     5,     0,   241,   193,   421,     0,   241,   194,
     421,     0,   241,   192,   421,     0,   241,   189,   425,     0,
     241,   190,   427,     0,   241,   176,     5,     0,   241,   198,
       5,     0,   241,   197,   425,     0,   241,    63,   427,     0,
     241,   199,   425,     0,   241,   199,   239,   428,   240,     0,
     241,   200,     0,   241,   201,     0,   241,   120,   427,     0,
     241,   151,   239,   276,   241,   276,   241,   276,   240,     0,
     241,   202,   278,     0,     0,   421,     6,     0,     5,   209,
     427,     7,     0,     5,   209,     6,     7,     0,     5,   209,
     203,   233,   430,   234,     7,     0,     5,   209,   431,     7,
       0,    18,   233,   423,   234,     7,     0,     0,   423,   269,
       5,     0,   423,   269,     5,   209,   425,     0,   423,   269,
       5,   209,     6,     0,    24,     0,    25,     0,    26,     0,
      27,     0,    28,     0,    29,     0,    30,     0,    31,     0,
      32,     0,    33,     0,    34,     0,    35,     0,    36,     0,
      37,     0,    38,     0,    39,     0,    40,     0,    41,     0,
      42,     0,    43,     0,     5,     0,   426,     0,   231,   425,
     232,     0,   223,   425,     0,   228,   425,     0,   425,   223,
     425,     0,   425,   222,   425,     0,   425,   224,   425,     0,
     425,   225,   425,     0,   425,   226,   425,     0,   425,   230,
     425,     0,   425,   216,   425,     0,   425,   218,   425,     0,
     425,   217,   425,     0,   425,   219,   425,     0,   425,   213,
     425,     0,   425,   214,   425,     0,   425,   212,   425,     0,
     425,   211,   425,     0,    24,   233,   425,   234,     0,    25,
     233,   425,   234,     0,    26,   233,   425,   234,     0,    27,
     233,   425,   234,     0,    28,   233,   425,   234,     0,    29,
     233,   425,   234,     0,    30,   233,   425,   234,     0,    31,
     233,   425,   234,     0,    32,   233,   425,   234,     0,    33,
     233,   425,   234,     0,    34,   233,   425,   241,   425,   234,
       0,    35,   233,   425,   234,     0,    36,   233,   425,   234,
       0,    37,   233,   425,   234,     0,    38,   233,   425,   234,
       0,    39,   233,   425,   234,     0,    40,   233,   425,   234,
       0,    41,   233,   425,   241,   425,   234,     0,    42,   233,
     425,   241,   425,   234,     0,    43,   233,   425,   241,   425,
     234,     0,   425,   210,   425,     8,   425,     0,   425,   236,
       0,     4,     0,     3,     0,    19,     0,    20,     0,    21,
       0,    22,     0,    23,     0,     5,     0,     0,   425,     0,
     429,     0,   239,   428,   240,     0,   425,     0,   429,     0,
     428,   241,   425,     0,   428,   241,   429,     0,   425,     8,
     425,     0,   425,     8,   425,     8,   425,     0,     5,   239,
     240,     0,     5,   239,   428,   240,     0,    14,   233,     5,
     234,     0,    15,   233,     5,   241,     5,   234,     0,    16,
     233,   425,   241,   425,   241,   425,   234,     0,    17,   233,
     425,   241,   425,   241,   425,   234,     0,     6,     0,     5,
       0,   431,     0,   204,     0,     9,   233,   430,   241,   430,
     234,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   359,   359,   433,   436,   436,   442,   445,   446,   447,
     448,   449,   450,   451,   452,   453,   455,   457,   459,   464,
     473,   476,   478,   480,   482,   484,   486,   488,   490,   492,
     494,   496,   498,   500,   502,   504,   506,   508,   510,   512,
     515,   515,   537,   540,   540,   544,   549,   552,   552,   557,
     559,   561,   563,   568,   580,   590,   616,   616,   616,   642,
     642,   642,   670,   679,   686,   721,   726,   737,   740,   754,
     759,   762,   811,   824,   850,   855,   870,   888,   909,   915,
     924,   938,   972,   985,  1005,  1009,  1019,  1036,  1036,  1039,
    1045,  1048,  1051,  1061,  1064,  1067,  1071,  1091,  1135,  1139,
    1142,  1159,  1168,  1175,  1175,  1183,  1189,  1193,  1198,  1203,
    1203,  1216,  1220,  1220,  1220,  1262,  1268,  1274,  1280,  1286,
    1292,  1298,  1304,  1310,  1316,  1322,  1328,  1334,  1340,  1346,
    1352,  1358,  1365,  1371,  1373,  1382,  1386,  1392,  1466,  1500,
    1509,  1521,  1521,  1534,  1534,  1550,  1562,  1568,  1574,  1574,
    1605,  1629,  1642,  1648,  1655,  1661,  1668,  1675,  1685,  1688,
    1689,  1692,  1695,  1698,  1703,  1706,  1720,  1727,  1732,  1737,
    1741,  1748,  1753,  1758,  1763,  1769,  1773,  1778,  1781,  1817,
    1825,  1830,  1839,  1843,  1852,  1855,  1860,  1865,  1870,  1878,
    1882,  1894,  1904,  1909,  1914,  1919,  1931,  1935,  1985,  1988,
    1991,  1994,  1997,  2006,  2013,  2016,  2038,  2041,  2051,  2055,
    2063,  2070,  2079,  2082,  2102,  2119,  2141,  2151,  2155,  2167,
    2191,  2216,  2221,  2229,  2237,  2247,  2264,  2272,  2279,  2286,
    2295,  2304,  2313,  2332,  2340,  2343,  2366,  2370,  2379,  2383,
    2391,  2398,  2407,  2410,  2413,  2416,  2421,  2439,  2486,  2502,
    2506,  2511,  2516,  2521,  2535,  2555,  2560,  2584,  2639,  2643,
    2643,  2643,  2720,  2726,  2731,  2736,  2740,  2747,  2750,  2755,
    2773,  2778,  2782,  2799,  2813,  2818,  2822,  2835,  2841,  2848,
    2855,  2859,  2866,  2876,  2887,  2904,  2976,  2988,  2992,  3026,
    3029,  3032,  3076,  3083,  3086,  3108,  3112,  3120,  3124,  3132,
    3139,  3149,  3151,  3156,  3171,  3187,  3205,  3209,  3214,  3218,
    3221,  3231,  3231,  3294,  3299,  3299,  3616,  3621,  3630,  3639,
    3648,  3653,  3656,  3694,  3711,  3737,  3742,  3745,  3748,  3753,
    3761,  3764,  3776,  3786,  3798,  3807,  3810,  3814,  3816,  3818,
    3824,  3844,  3848,  3848,  3848,  3983,  4007,  4016,  4025,  4034,
    4044,  4061,  4065,  4099,  4099,  4099,  4178,  4181,  4182,  4183,
    4184,  4185,  4186,  4187,  4191,  4214,  4236,  4243,  4246,  4267,
    4271,  4279,  4283,  4292,  4299,  4302,  4302,  4309,  4325,  4342,
    4358,  4362,  4367,  4376,  4379,  4384,  4389,  4394,  4399,  4406,
    4445,  4450,  4455,  4465,  4477,  4481,  4486,  4497,  4506,  4513,
    4539,  4546,  4552,  4558,  4564,  4572,  4594,  4601,  4607,  4618,
    4629,  4642,  4657,  4673,  4693,  4714,  4726,  4746,  4763,  4782,
    4803,  4837,  4850,  4864,  4877,  4890,  4890,  4899,  4899,  4908,
    4918,  4928,  4936,  4949,  4962,  4971,  4980,  4994,  5008,  5022,
    5037,  5054,  5068,  5086,  5092,  5102,  5108,  5111,  5115,  5125,
    5139,  5151,  5155,  5161,  5165,  5169,  5174,  5183,  5196,  5200,
    5206,  5210,  5214,  5218,  5223,  5232,  5244,  5247,  5253,  5257,
    5261,  5265,  5274,  5289,  5292,  5298,  5302,  5306,  5311,  5321,
    5327,  5333,  5342,  5346,  5350,  5364,  5367,  5379,  5408,  5411,
    5414,  5422,  5438,  5446,  5449,  5470,  5473,  5484,  5487,  5495,
    5503,  5549,  5554,  5559,  5563,  5567,  5574,  5578,  5582,  5587,
    5593,  5599,  5612,  5623,  5626,  5626,  5662,  5673,  5673,  5679,
    5688,  5704,  5712,  5715,  5720,  5723,  5732,  5735,  5743,  5755,
    5766,  5771,  5776,  5776,  5803,  5807,  5807,  5820,  5826,  5830,
    5836,  5842,  5842,  5851,  5858,  5872,  5894,  5897,  5898,  5899,
    5902,  5906,  5910,  5918,  5925,  5932,  5956,  5963,  5975,  5988,
    6008,  6034,  6067,  6087,  6111,  6114,  6122,  6129,  6136,  6140,
    6144,  6148,  6152,  6162,  6167,  6172,  6192,  6199,  6208,  6217,
    6226,  6233,  6241,  6245,  6254,  6258,  6262,  6270,  6276,  6284,
    6291,  6337,  6354,  6360,  6366,  6372,  6376,  6379,  6385,  6391,
    6402,  6404,  6405,  6406,  6407,  6408,  6409,  6410,  6411,  6412,
    6413,  6414,  6415,  6416,  6417,  6418,  6419,  6420,  6421,  6422,
    6423,  6426,  6428,  6429,  6430,  6431,  6432,  6433,  6434,  6435,
    6436,  6437,  6438,  6439,  6440,  6441,  6442,  6443,  6444,  6445,
    6446,  6447,  6448,  6449,  6450,  6451,  6452,  6453,  6454,  6455,
    6456,  6457,  6458,  6459,  6460,  6461,  6462,  6463,  6464,  6465,
    6466,  6469,  6472,  6473,  6474,  6475,  6476,  6477,  6478,  6494,
    6499,  6505,  6508,  6513,  6521,  6524,  6527,  6537,  6545,  6556,
    6572,  6594,  6609,  6647,  6655,  6665,  6670,  6684,  6688,  6704
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
  "tGenerateJacGroup", "tSaveMesh", "tDeformeMesh", "tPostProcessing", 
  "tNameOfSystem", "tPostOperation", "tNameOfPostProcessing", 
  "tUsingPost", "tAppend", "tPlot", "tPrint", "tPrintGroup", "tEcho", 
  "tWrite", "tAdapt", "tOnGlobal", "tOnRegion", "tOnElementsOf", 
  "tOnGrid", "tOnSection", "tOnPoint", "tOnLine", "tOnPlane", "tOnBox", 
  "tWithArgument", "tFile", "tDepth", "tDimension", "tTimeStep", 
  "tHarmonicToTime", "tFormat", "tHeader", "tFooter", "tSkin", 
  "tSmoothing", "tTarget", "tSort", "tIso", "tNoNewLine", 
  "tDecomposeInSimplex", "tChangeOfValues", "tStr", "tDate", "tFlag", 
  "tHelp", "tCpu", "tCheck", "tDEF", "'?'", "tOR", "tAND", "tEQUAL", 
  "tNOTEQUAL", "tAPPROXEQUAL", "'<'", "tLESSOREQUAL", "'>'", 
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
       0,   243,   242,   244,   245,   244,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     248,   247,   249,   250,   249,   251,   251,   252,   251,   251,
     251,   251,   251,   253,   253,   253,   255,   256,   254,   258,
     259,   257,   257,   260,   260,   261,   261,   262,   262,   263,
     263,   263,   264,   265,   265,   266,   266,   266,   267,   267,
     267,   267,   267,   267,   268,   268,   268,   269,   269,   270,
     271,   271,   272,   273,   273,   274,   274,   274,   274,   275,
     275,   276,   276,   277,   276,   278,   278,   279,   279,   281,
     280,   282,   283,   284,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   285,   285,   285,   285,   285,
     285,   286,   285,   287,   285,   285,   285,   285,   288,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   289,   289,
     289,   290,   290,   291,   291,   291,   292,   292,   293,   293,
     294,   294,   295,   295,   296,   296,   297,   297,   297,   298,
     298,   299,   299,   300,   300,   300,   301,   301,   302,   302,
     303,   303,   303,   304,   304,   305,   305,   306,   306,   306,
     306,   306,   306,   307,   307,   308,   308,   309,   309,   310,
     310,   310,   310,   310,   311,   311,   312,   312,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   314,   314,   315,   315,   316,   316,   317,
     317,   317,   317,   317,   317,   317,   318,   318,   319,   319,
     320,   320,   320,   320,   320,   320,   320,   320,   321,   322,
     323,   321,   324,   324,   325,   325,   326,   326,   326,   327,
     327,   328,   328,   329,   329,   330,   330,   331,   331,   332,
     332,   333,   333,   333,   334,   334,   335,   335,   336,   336,
     336,   336,   337,   337,   338,   338,   339,   339,   340,   340,
     340,   340,   340,   341,   341,   342,   342,   343,   343,   343,
     343,   344,   343,   343,   345,   343,   343,   343,   343,   343,
     343,   346,   346,   347,   347,   348,   348,   348,   348,   349,
     349,   350,   350,   350,   351,   351,   352,   352,   352,   352,
     353,   353,   355,   356,   354,   354,   354,   354,   354,   354,
     357,   357,   358,   359,   360,   358,   361,   361,   361,   361,
     361,   361,   361,   361,   362,   362,   363,   363,   364,   364,
     365,   365,   366,   366,   366,   367,   366,   368,   368,   369,
     369,   370,   370,   370,   370,   370,   370,   370,   370,   371,
     371,   372,   372,   373,   373,   374,   374,   375,   375,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   377,   376,   378,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   379,   379,   380,   380,   381,   381,   381,
     382,   382,   383,   383,   383,   383,   383,   384,   384,   385,
     385,   385,   385,   385,   385,   386,   386,   387,   387,   387,
     387,   387,   388,   388,   389,   389,   389,   389,   389,   389,
     389,   389,   390,   390,   391,   391,   392,   392,   392,   392,
     392,   392,   393,   393,   394,   394,   395,   395,   396,   396,
     396,   396,   396,   397,   397,   398,   398,   399,   399,   400,
     400,   400,   401,   401,   403,   402,   402,   404,   402,   402,
     402,   405,   405,   406,   406,   407,   407,   408,   408,   408,
     408,   408,   410,   409,   411,   412,   411,   413,   413,   413,
     413,   414,   413,   413,   415,   415,   416,   416,   416,   416,
     417,   417,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   418,   419,   419,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   421,
     421,   422,   422,   422,   422,   422,   423,   423,   423,   423,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   426,   426,   426,   426,   426,   426,   426,   426,   427,
     427,   427,   427,   428,   428,   428,   428,   429,   429,   429,
     429,   429,   429,   429,   429,   430,   430,   430,   430,   431
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
       7,    13,    11,     7,     7,     7,     9,     9,     9,    11,
      17,    13,    15,    11,    13,     0,     7,     0,     7,     7,
       5,     5,     9,     9,     5,     5,    13,     9,    12,    10,
      14,     7,     7,     1,     1,     0,     2,     3,     3,     2,
       0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
       3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
       3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
       4,     4,     0,     4,     0,     2,     3,     3,     3,     3,
       3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
       4,     3,     4,     0,     4,     0,     2,     3,     4,     0,
       5,     5,     0,     2,     0,     6,     3,     0,     4,     3,
       3,     0,     2,     3,     1,     0,     2,     3,     3,     3,
       3,     4,     0,     8,     0,     0,     3,     7,     7,     8,
      11,     0,    10,     6,     3,     6,     1,     1,     1,     1,
       0,     3,     1,     2,     2,    12,     2,    15,     4,    12,
      17,    22,    12,     0,     2,     3,     4,     4,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     5,     2,     2,     3,     9,     3,     0,
       2,     4,     4,     7,     4,     5,     0,     3,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     6,
       4,     4,     4,     4,     4,     4,     6,     6,     6,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     3,     1,     1,     3,     3,     3,     5,     3,
       4,     4,     6,     8,     8,     1,     1,     1,     1,     6
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     3,     4,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,    19,     0,    16,    17,   669,   686,   685,     0,   688,
      18,   687,   596,    42,   203,   166,   179,   233,    93,   292,
     366,   492,     0,   521,     0,    20,     0,     0,     0,     0,
       0,    27,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   662,
     661,   668,     0,     0,     0,     0,     0,   663,   664,   665,
     666,   667,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   670,   621,     0,
     671,     0,     0,    87,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    23,    21,    25,    24,
      22,    39,    29,    31,    32,    33,    34,    30,    35,    36,
      37,    38,     0,     0,     0,     0,     0,   592,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   668,   623,   624,     0,   673,     0,   674,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   660,   591,   594,     0,
       0,    88,     0,     6,     0,   207,     8,   204,   206,   168,
       9,   181,    10,   237,    11,   234,   236,     0,     0,     7,
      94,    98,   296,    12,   293,   295,   370,    13,   367,   369,
     496,    14,   493,   495,   532,   525,    15,   522,   524,   550,
       0,     0,     0,    90,    65,     0,    63,   541,     0,   563,
     679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   622,   672,     0,
     677,     0,   638,   637,   635,   636,   631,   633,   632,   634,
     626,   625,   627,   628,   629,   630,     0,   595,   597,     0,
       0,    55,     0,    44,    52,    50,    51,     0,     0,     0,
       0,     0,    99,     0,     0,     0,     0,     0,     0,     0,
     552,     0,     0,     0,     0,     0,     0,     0,     0,   563,
       0,   563,     0,    64,    78,    81,    75,    62,    73,     0,
      59,     0,   680,   681,     0,     0,     0,   639,   640,   641,
     642,   643,   644,   645,   646,   647,   648,     0,   650,   651,
     652,   653,   654,   655,     0,     0,     0,     0,   675,   676,
       0,     0,     0,     0,   669,     0,     0,     0,     0,     0,
      84,     0,     0,     0,   205,   208,     0,     0,   167,   169,
       0,   103,     0,   180,   182,     0,     0,     0,     0,     0,
       0,   235,   238,     0,     0,    87,     0,     0,     0,     0,
     294,   297,     0,     0,   375,   368,   371,     0,     0,     0,
       0,   494,   497,   534,     0,     0,     0,     0,     0,   523,
     526,     0,   548,   549,   546,   547,   544,     0,   553,   554,
     103,   556,     0,     0,     0,     0,     0,     0,     0,   563,
       0,    91,     0,     0,    87,     0,     0,     0,     0,   564,
       0,     0,     0,     0,     0,     0,     0,   593,   678,   659,
     689,   599,   598,   668,     0,     0,     0,     0,    47,     0,
       0,    87,     0,   214,     0,     0,   172,     0,   186,     0,
       0,     0,   109,     0,   284,     0,     0,   246,   262,   277,
     103,     0,     0,     0,     0,     0,   303,   323,     0,   377,
       0,     0,   503,    90,     0,   535,     0,   534,     0,     0,
       0,   551,   550,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   662,    79,    83,     0,    74,     0,
       0,    68,    60,    67,   543,   669,   669,     0,     0,     0,
       0,     0,   669,     0,   589,   589,   589,   569,   570,     0,
       0,     0,   584,   585,   105,   682,     0,     0,   649,   656,
     657,   658,    45,     0,     0,    92,     0,    66,     0,     0,
       0,     0,   214,     0,   211,   209,     0,     0,     0,   170,
       0,     0,     0,   184,   104,     0,   183,     0,   241,   239,
       0,     0,     0,     0,     0,   103,    95,   100,   300,   298,
       0,     0,     0,   372,     0,     0,   397,   498,     0,     0,
       0,   501,   533,     0,   527,   535,   528,   530,   529,     0,
       0,   103,     0,   558,     0,     0,     0,   537,     0,     0,
     538,     0,    82,     0,    76,   563,    87,   581,   586,   103,
     578,     0,     0,   565,   568,   576,   577,   571,   572,   575,
     573,   574,   580,   579,     0,   582,   103,   588,     0,     0,
       0,    89,     0,    46,     0,    49,    85,     0,   216,   212,
     210,   174,   171,   188,   185,     0,     0,   668,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,     0,   148,
       0,     0,     0,     0,   141,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   139,     0,   136,   286,   245,
     240,   248,   242,   264,   243,   279,   244,    96,     0,   299,
     305,   301,     0,     0,     0,     0,   302,   324,   373,   379,
     374,     0,   499,   505,   502,   500,   536,   531,   545,     0,
       0,     0,     0,     0,     0,   563,   539,    80,    77,     0,
       0,     0,     0,   566,   567,   590,     0,   107,     0,   683,
     684,    56,    48,     0,    53,     0,   213,     0,     0,     0,
     101,   102,   138,     0,     0,     0,     0,     0,     0,     0,
       0,   133,   132,   134,     0,   156,   154,   151,   153,   152,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   163,     0,     0,     0,     0,    97,     0,   340,
     340,   350,   329,     0,     0,   103,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   425,   427,   376,   398,     0,     0,
     103,     0,     0,     0,     0,     0,     0,    61,    72,     0,
       0,   103,   583,   106,   103,     0,     0,     0,     0,     0,
       0,     0,   103,   103,   103,   103,     0,     0,     0,   103,
     215,   217,     0,     0,   173,   175,     0,     0,     0,   187,
     189,     0,   109,     0,     0,     0,     0,   109,     0,   135,
       0,   365,     0,   131,   130,   127,   128,   129,   123,   125,
     124,   126,   119,   120,   115,   118,   121,   116,   122,   155,
     157,   159,     0,   161,     0,     0,   137,     0,     0,     0,
       0,   285,   287,     0,     0,     0,     0,   105,     0,     0,
     247,   249,     0,     0,     0,   263,   265,     0,     0,     0,
     278,   280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   314,   304,   306,   356,   356,   356,     0,     0,     0,
       0,     0,   669,     0,     0,     0,   378,   380,     0,     0,
     103,     0,     0,     0,     0,   103,     0,     0,     0,     0,
     407,     0,   450,     0,   457,     0,   465,   472,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   504,   506,     0,
       0,     0,     0,     0,     0,     0,   542,    90,    70,     0,
     108,     0,    54,    86,     0,     0,     0,     0,   103,     0,
     103,     0,     0,     0,     0,     0,     0,   103,     0,     0,
       0,   163,   193,     0,     0,   146,     0,   147,     0,   143,
       0,     0,   109,   364,     0,   158,   160,     0,     0,     0,
       0,     0,     0,    90,     0,     0,   258,     0,     0,     0,
       0,     0,   273,   275,     0,   269,   271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,   109,     0,     0,     0,     0,   357,   358,   359,
     360,   361,   362,   363,     0,   325,   341,     0,   326,     0,
     327,   351,     0,     0,     0,   334,   328,   330,     0,     0,
      90,   391,     0,     0,     0,     0,   393,   395,     0,     0,
     399,     0,     0,   400,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   105,   105,   509,     0,     0,     0,
       0,     0,     0,     0,   540,    71,   103,     0,   219,   220,
     225,   226,     0,   229,     0,   228,   222,   221,    87,   223,
     218,     0,   227,   177,   176,     0,     0,   190,   191,     0,
       0,   109,     0,   142,     0,   113,   162,     0,   164,   288,
     289,   290,     0,   250,   251,     0,     0,     0,    87,   255,
     256,   257,   266,    87,   268,    87,   267,   282,   281,   283,
     319,   317,   318,   310,   308,   309,   307,   311,   313,   320,
     316,     0,     0,     0,     0,     0,     0,   342,     0,   353,
       0,     0,     0,   382,   381,   389,    87,   383,   384,   387,
     388,    87,   385,   386,     0,     0,   103,     0,     0,     0,
       0,     0,   103,     0,     0,     0,   103,     0,     0,   103,
     401,   451,     0,     0,   103,     0,     0,     0,     0,   402,
     458,     0,     0,     0,     0,   103,     0,   403,   466,     0,
       0,     0,     0,     0,     0,     0,     0,   404,   473,   103,
       0,   103,   669,   669,   669,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   444,   443,   445,   445,     0,   507,
       0,   669,     0,     0,     0,     0,     0,    57,   103,   103,
       0,   103,   178,   195,   192,     0,   117,     0,     0,   150,
       0,     0,   291,   252,     0,   253,     0,   274,     0,   270,
       0,   321,     0,   346,   347,   348,     0,   345,   109,   352,
     109,   331,   332,     0,     0,     0,     0,   333,   335,   390,
       0,   394,     0,   405,   406,     0,     0,     0,   397,     0,
       0,     0,     0,     0,   397,     0,     0,     0,     0,     0,
     397,     0,     0,     0,     0,     0,     0,     0,   397,     0,
       0,     0,     0,     0,   397,   397,     0,     0,   482,     0,
       0,   431,     0,     0,     0,     0,     0,   434,   435,     0,
       0,     0,     0,     0,   430,     0,     0,     0,     0,   508,
       0,     0,     0,     0,     0,     0,   587,     0,     0,     0,
       0,     0,     0,   149,     0,     0,   114,     0,     0,     0,
     276,   272,     0,     0,   315,     0,   343,   354,     0,     0,
       0,     0,   392,   396,     0,   669,     0,     0,   669,     0,
       0,     0,   103,     0,   454,   452,   453,   455,   103,     0,
     461,   459,   460,   462,   463,   103,   468,     0,   467,   469,
     470,   476,   478,     0,     0,   474,   475,     0,   477,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   669,   446,     0,   512,   512,     0,   669,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   194,   196,     0,     0,   165,     0,     0,
       0,   312,   349,     0,     0,   336,   337,   338,   339,   410,
       0,     0,   408,     0,     0,   415,     0,     0,   456,     0,
     464,     0,   471,   480,   481,   484,   479,   429,     0,   413,
     414,     0,     0,     0,   441,   442,     0,     0,   426,     0,
     669,   449,   428,   356,   356,   562,     0,   555,   559,     0,
       0,     0,   232,   231,   224,   230,     0,     0,     0,     0,
       0,     0,     0,   145,     0,   254,   322,   109,     0,     0,
       0,     0,     0,     0,     0,   103,     0,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,   447,   448,     0,
       0,     0,   517,   511,     0,   513,   510,   669,     0,     0,
       0,   197,   198,   199,   200,   201,   202,     0,     0,     0,
       0,   417,   418,   397,     0,     0,   416,     0,     0,   397,
       0,     0,     0,   103,     0,     0,     0,   483,   485,     0,
     432,   433,     0,   437,     0,     0,     0,     0,     0,     0,
       0,   514,     0,     0,     0,     0,   144,     0,     0,     0,
       0,     0,   669,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,   103,   439,     0,   519,
     520,   516,     0,   109,   557,     0,     0,     0,   259,   344,
     355,   409,   419,     0,   397,     0,   423,   397,   486,   489,
     490,   487,   488,   491,   412,     0,   397,     0,     0,   518,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   438,     0,   560,     0,    58,     0,     0,   421,
     397,   424,   411,     0,   436,   515,     0,     0,     0,     0,
     440,     0,   260,     0,   422,     0,     0,     0,     0,     0,
     420,   561,    90,     0,     0,   261,     0,     0,     0
};

static const short yydefgoto[] =
{
    1836,     1,     2,     3,    20,    21,    22,   114,   204,   303,
     576,   304,   305,   895,  1487,   246,   456,   646,   247,   248,
     542,   770,   890,   337,   454,   338,   481,   202,   377,   333,
     378,   119,   220,   405,   491,   492,  1365,   778,   594,   595,
     723,   932,  1390,   724,   799,  1241,   794,   831,   954,   956,
     116,   308,   389,   588,   788,   915,   117,   309,   394,   590,
     789,   920,  1236,  1492,  1584,   115,   207,   307,   385,   583,
     787,   911,   118,   215,   310,   402,   601,   834,   971,  1257,
    1794,  1826,   602,   835,   976,  1117,  1265,  1114,  1263,   603,
     836,   981,   597,   833,   962,   120,   224,   313,   411,   611,
     838,   993,  1401,  1132,  1503,   612,   747,   997,  1157,  1292,
    1418,   994,  1146,  1408,  1593,   996,  1151,  1410,  1594,  1147,
     725,   121,   228,   314,   416,   510,   615,   843,  1007,  1162,
    1296,  1168,  1301,   751,   877,  1043,  1044,  1366,  1475,  1562,
    1183,  1321,  1185,  1330,  1187,  1338,  1188,  1348,  1547,  1669,
    1718,   122,   232,   315,   422,   619,   878,  1048,  1368,  1633,
    1685,  1763,  1730,   124,   237,   317,   430,    23,   316,   515,
     623,    68,   339,   240,   437,   319,   329,   341,   459,   659,
      24,   113,   726,   107,   108,   109,   178,   110,    30,    31
};

static const short yypact[] =
{
  -32768,-32768,    74,   894,  -170,   173,   -95,   -65,   -56,   -26,
     -21,    -1,    42,    64,    82,   108,    21,   285,   185,  3146,
  -32768,-32768,   802,-32768,-32768,  1751,-32768,-32768,    67,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,   199,-32768,   369,-32768,   382,   395,   429,   473,
     491,-32768,   510,-32768,   519,   532,   540,   557,   579,   583,
     596,   601,   627,   640,   205,   219,   227,   317,-32768,-32768,
  -32768,   181,   648,   426,   433,   435,   442,-32768,-32768,-32768,
  -32768,-32768,   500,   509,   522,   539,   580,   588,   590,   607,
     620,   623,   628,   634,   650,   671,   680,   686,   692,   701,
     708,   710,   712,  3040,  3040,  3040,  2917,  1130,-32768,   809,
  -32768,   825,   173,   -66,   134,    89,   -17,    10,    91,    95,
      94,   105,   139,   830,   141,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,   890,   381,   115,   943,   674,-32768,   957,   963,
    3040,  3040,  3040,  3040,  3040,  3040,  3040,  3040,  3040,  3040,
    3040,  3040,  3040,  3040,  3040,  3040,  3040,  3040,  3040,  3040,
    3040,  3040,   173,-32768,  -194,  -194,  3191,  1130,   194,-32768,
    3040,  3040,  3040,  3040,  3040,  3040,  3040,  3040,  3040,  3040,
    3040,  3040,  3040,  3040,  3040,  3040,-32768,-32768,-32768,   742,
     982,-32768,  1004,-32768,   804,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,   -73,   783,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   785,
     774,   784,   774,   -81,-32768,    26,-32768,-32768,   820,-32768,
  -32768,   254,   821,   815,  3024,  3237,  4082,  4109,  4136,  4163,
    4190,  4217,  4244,  4271,  4298,  4325,  3258,  4352,  4379,  4406,
    4433,  4460,  4487,  3279,  3300,  3321,   823,-32768,-32768,  2917,
    3122,  3143,  4992,  1480,  1165,  1165,   685,   685,   685,   685,
     406,   406,  -194,  -194,  -194,  -194,   173,-32768,   849,   -48,
     829,-32768,   862,-32768,-32768,-32768,-32768,   225,    83,    61,
     228,    90,-32768,   334,   102,   478,   824,   495,   115,   602,
  -32768,   115,   115,    41,   864,   865,   866,   868,   869,-32768,
    2958,-32768,   822,-32768,  1102,   872,-32768,-32768,-32768,   871,
  -32768,   -64,-32768,-32768,  1136,  3040,  3040,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,  3040,-32768,-32768,
  -32768,-32768,-32768,-32768,  3040,  3040,  3040,  1139,  1130,-32768,
    3040,  3040,   920,  2999,  1644,  1152,  1406,   948,   949,  3040,
  -32768,    33,  1155,  1156,-32768,-32768,   925,  1174,-32768,-32768,
     941,    84,  1178,-32768,-32768,   945,  1180,  1182,   951,   953,
     954,-32768,-32768,   973,   961,   -61,  1191,  1192,   959,   960,
  -32768,-32768,  1195,   964,-32768,-32768,-32768,  1197,   965,  1200,
    1201,-32768,-32768,-32768,  1203,   970,  1205,   173,  1207,-32768,
  -32768,   979,-32768,-32768,-32768,-32768,-32768,  1212,  1035,-32768,
      84,-32768,   987,  2917,   988,   991,   993,   -47,  1001,  4946,
     -46,-32768,  3086,   765,   268,  1124,    66,  1235,  3244,-32768,
    1010,  3342,  3363,  4514,  4541,  4568,  4595,-32768,  4946,  4946,
  -32768,-32768,  4946,   178,  1238,  1013,  3040,  3741,-32768,   136,
    3164,    -6,  1012,-32768,  1246,    25,-32768,  1248,-32768,  1023,
    1024,  1251,-32768,  1252,-32768,  1253,    68,-32768,-32768,-32768,
      84,  1053,  1256,  1259,  1258,    69,-32768,-32768,    98,-32768,
    1027,   104,-32768,  1031,  1267,  1037,  1268,-32768,  1271,  1276,
    1286,-32768,   785,  1289,  1054,  2917,   332,  2917,  2917,  2917,
    1290,   173,     6,  1301,  1288,  4946,-32768,  3772,-32768,    32,
     115,-32768,-32768,-32768,-32768,  1873,  1873,  1070,  1311,   211,
    3040,  3040,  1873,  3040,  1314,-32768,-32768,-32768,-32768,  3040,
    1315,  1094,-32768,-32768,  1082,-32768,  3040,  3040,-32768,-32768,
  -32768,-32768,-32768,  1114,  3803,-32768,   136,-32768,  1319,  3040,
    1320,  1323,-32768,   349,-32768,-32768,  1093,  1325,   367,-32768,
     431,  3040,  1329,-32768,-32768,  1704,-32768,   445,-32768,-32768,
    1330,   498,   518,   537,  1331,    84,-32768,-32768,-32768,-32768,
    1332,   543,   534,-32768,  1338,   571,-32768,-32768,  1343,   599,
    1344,-32768,-32768,   802,-32768,  1090,-32768,-32768,-32768,  1116,
    1119,    84,   618,-32768,   625,   649,   653,-32768,  1129,  1358,
  -32768,  3040,-32768,   286,-32768,-32768,    52,-32768,-32768,    84,
  -32768,   173,   173,-32768,  4946,  4946,-32768,  4946,-32768,  1361,
    1361,  1361,  4946,-32768,  2917,  4946,    84,-32768,  4622,  4649,
    1316,-32768,  1362,-32768,  3076,-32768,  1132,   677,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  4676,  1134,   236,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1140,-32768,
    1141,  1142,  1143,  1145,-32768,  1367,  1704,  1704,  1704,  1704,
    1383,   121,  1388,  5042,    80,  1161,  1161,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1389,-32768,
  -32768,-32768,  1158,  1159,  1160,  1163,-32768,-32768,-32768,-32768,
  -32768,  1014,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  3040,
    1162,  1166,  1167,  1168,  1173,-32768,-32768,  4946,-32768,   171,
    1170,   137,  1175,-32768,-32768,-32768,   683,-32768,   687,-32768,
  -32768,-32768,-32768,  3040,-32768,  3040,-32768,   336,    58,   213,
  -32768,-32768,-32768,  1176,  1181,  1176,  1704,  1395,  1413,  1186,
    1206,  1221,  1221,  1221,  5019,-32768,-32768,-32768,-32768,-32768,
      29,-32768,  1704,  1704,  1704,  1704,  1704,  1704,  1704,  1704,
    1704,  1704,  1704,  1704,  1704,  1704,  1704,  1704,  1418,  1450,
    1045,-32768,  1216,   135,   413,   403,   167,-32768,   762,-32768,
  -32768,-32768,-32768,   479,   151,   138,  1223,  1224,  1230,  1231,
    1239,  1241,  1247,  1249,  1464,   415,   425,   453,  1242,  1250,
    1265,  1266,  1269,  1272,  1273,  1275,  1245,  1270,  1291,  1292,
    1295,  1293,  1294,  1297,-32768,-32768,-32768,-32768,    45,  3384,
      84,  2917,  2917,  2917,  2917,   187,  1479,-32768,-32768,  1486,
      26,    84,-32768,-32768,    84,  1302,  4703,  3834,   115,   115,
     115,   115,   149,   150,    84,    84,  1304,  1531,  1543,   152,
  -32768,-32768,   112,  1550,-32768,-32768,  1317,  1552,  1556,-32768,
  -32768,  1333,-32768,  1334,  2952,  1336,  1337,-32768,  1339,-32768,
    1322,-32768,  1704,  2051,  5060,  1243,  1243,  1243,   526,   526,
     526,   526,   624,   624,  1221,  1221,  1221,  1221,  1221,-32768,
  -32768,-32768,  1340,  5042,   249,  2873,-32768,  1561,   127,  1568,
    1571,-32768,-32768,  1572,  1573,  1574,  1341,  1082,   115,   115,
  -32768,-32768,  1576,    35,    36,-32768,-32768,  1577,  1578,  1579,
  -32768,-32768,  1581,  1582,  1588,   120,  1593,  1600,  1603,  1604,
     115,-32768,-32768,-32768,   651,  1177,   617,   222,  1605,  1606,
      39,   173,  1873,   173,    40,  1607,-32768,-32768,  1608,  1611,
      84,  1610,  1613,  1614,  1615,    84,  1616,  1617,  1618,  1619,
  -32768,  3040,-32768,  3040,-32768,  3040,-32768,-32768,   115,   173,
    1620,  1621,  1623,  1625,  1626,  1628,  1630,  1631,  1633,  1635,
    1638,  1639,  1640,  1380,  1419,  1407,  1646,-32768,-32768,  3040,
    1414,   696,   698,   707,   720,  1648,-32768,  1031,-32768,  1415,
  -32768,  1421,-32768,-32768,  1681,  1683,  1684,  1688,    84,  1693,
      84,  1705,  1707,  1710,  1708,  1711,  1712,    84,  1713,  1714,
    1752,  1216,-32768,  1754,  1755,-32768,  1517,-32768,  1704,-32768,
    1524,  1530,-32768,-32768,  1088,-32768,-32768,  1704,  1536,   726,
    1789,  1793,  1795,  1031,  1796,   107,  1562,  1799,  1798,  1800,
    1831,  1832,-32768,-32768,  1833,-32768,-32768,  1834,  1845,  1846,
    1852,  1853,  1854,  1856,  1857,  1858,  1859,  1862,  1031,  1863,
    1864,  1866,-32768,  1801,  1869,  1874,  1649,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,   115,-32768,-32768,  1651,-32768,   115,
  -32768,-32768,  1652,  1876,  1881,-32768,-32768,-32768,  1884,  1911,
    1031,-32768,  1915,  1916,  1918,  1921,-32768,-32768,  1922,  1923,
  -32768,  1697,  1699,-32768,  1695,  1696,  1698,  1700,  1701,  1703,
    1706,  1709,  3405,   533,  3426,   327,  3447,   409,   695,  1715,
    1717,  1716,  1725,  1726,  1727,  1728,  1730,  1731,  1732,  1734,
    1735,  1736,  1737,  1718,    65,    65,-32768,  1931,  3865,  1733,
    1741,  1743,  1746,  1747,-32768,-32768,    84,    26,-32768,-32768,
  -32768,-32768,  1748,-32768,  1750,-32768,-32768,-32768,  1753,-32768,
  -32768,  1756,-32768,-32768,-32768,  1938,   731,-32768,-32768,   115,
    4973,-32768,  3040,-32768,  1719,-32768,  5042,   115,-32768,-32768,
  -32768,-32768,  1939,-32768,-32768,  1941,  1888,  1942,  1753,-32768,
  -32768,-32768,-32768,   739,-32768,   746,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,  1721,  1981,  1986,  1988,  1993,  1996,-32768,  2001,-32768,
    2002,  2008,   179,-32768,-32768,-32768,   757,-32768,-32768,-32768,
  -32768,   759,-32768,-32768,  2009,  2012,    84,  2015,  2016,  1784,
    3040,  2021,    84,   115,  3040,  1790,    84,  3040,  3040,    84,
  -32768,-32768,  3040,  1791,    84,  3040,  3040,  3040,  3040,-32768,
  -32768,  3040,  3040,  1792,  3040,    84,  3040,-32768,-32768,  3040,
    2022,  1797,  1812,  3040,  3040,  1813,  3040,-32768,-32768,    84,
    2025,    84,  1873,  1873,  1873,  3040,  2027,  2028,  2023,  2032,
    2034,   115,  2048,  2049,-32768,-32768,-32768,-32768,    12,-32768,
    1816,  1873,  2917,  1819,  2917,  2917,  1821,-32768,    84,    84,
    2056,    84,-32768,-32768,-32768,  1828,-32768,  1843,  3468,-32768,
    1704,  1844,-32768,-32768,  2075,-32768,  2076,-32768,  2077,-32768,
    2078,  1855,  2079,-32768,-32768,-32768,  1851,-32768,-32768,-32768,
  -32768,-32768,-32768,  1176,  1176,  1176,   115,-32768,-32768,-32768,
    2084,-32768,  2086,-32768,-32768,  1860,  1861,  1865,-32768,  3489,
    1867,  1871,  1868,  3510,-32768,  2088,   318,   399,  2090,  3531,
  -32768,  2091,   662,   810,  1328,  1378,  3552,  1632,-32768,  1788,
    2092,  2415,  2436,  2093,-32768,-32768,  2463,  2484,-32768,  2511,
    1877,-32768,  1878,  1880,  1892,  1886,  3573,-32768,-32768,  1887,
    1896,  1897,  1893,  1895,-32768,   272,   324,  1894,  1898,-32768,
    3040,  1914,   763,  3040,   767,   771,-32768,  1917,  1919,  1926,
    1870,  1929,   364,-32768,  1930,  3040,  5042,  1940,  2096,  1943,
  -32768,-32768,  2102,  2149,-32768,  2150,-32768,-32768,  2159,  2164,
    2171,  2172,-32768,-32768,  2175,  1873,  3040,  1359,  1873,  2180,
    2179,  2183,    84,  1912,-32768,-32768,-32768,-32768,    84,  1987,
  -32768,-32768,-32768,-32768,-32768,    84,-32768,  2039,-32768,-32768,
  -32768,-32768,-32768,  2087,  2156,-32768,-32768,   791,-32768,  2182,
      84,  2197,  2198,  3040,   173,  3040,  2200,  2201,   173,  1974,
    2203,  1794,-32768,  2205,-32768,-32768,  3896,  1873,  1979,  3927,
    1990,  1989,  1995,  2219,  2226,  2227,  2229,  2232,  3040,  3040,
    3040,  3040,  3040,-32768,-32768,  2013,  3958,-32768,  2155,  2248,
    2024,-32768,-32768,  2019,  2020,-32768,-32768,-32768,-32768,-32768,
    2037,  4730,  2124,  2031,  2042,-32768,  2046,  2047,-32768,  2054,
  -32768,   325,-32768,-32768,-32768,-32768,-32768,-32768,  2055,-32768,
  -32768,  4757,  2063,  3594,-32768,-32768,   773,   173,-32768,   173,
    1873,-32768,-32768,   410,  1850,-32768,  2058,-32768,-32768,  2061,
    2917,    26,-32768,-32768,-32768,-32768,  2295,  2532,  2559,  2580,
    2607,  2628,  3040,-32768,  2298,-32768,-32768,-32768,  1176,  2299,
    2314,  2083,  3040,  3040,  2317,    84,  3040,  2097,  3040,   340,
      84,  2318,  2319,  3040,  2322,   173,   798,-32768,-32768,  2338,
    2339,  2340,-32768,-32768,  2114,-32768,-32768,  1873,  3040,   801,
    2107,-32768,-32768,-32768,-32768,-32768,-32768,  3989,  2111,  2117,
    2120,-32768,-32768,-32768,  4784,  3615,-32768,  2135,  3636,-32768,
    4811,  2365,  3040,    84,  2367,   115,  2368,-32768,-32768,   392,
  -32768,-32768,  4838,-32768,  2133,  2370,  2371,  2377,  2384,  2385,
     115,-32768,  2153,  3657,  2158,  3040,-32768,  2388,  2392,  2395,
    2204,  2410,  1873,  2181,  3040,  2252,  2184,  2411,  2649,  2414,
    2418,  2425,  2432,  2433,    84,  2202,    84,-32768,  2206,-32768,
  -32768,-32768,  2440,-32768,-32768,  3040,  2211,  4865,-32768,-32768,
  -32768,-32768,-32768,  2224,-32768,  4892,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  2234,-32768,  2231,  2459,-32768,
    2235,  4020,  3040,  2466,  2430,  3040,  2300,  2249,  2348,  2480,
    2396,  2482,-32768,  2487,-32768,  3678,-32768,   115,  3699,-32768,
  -32768,-32768,-32768,  2488,-32768,-32768,  3040,  2490,  3040,  2444,
  -32768,  3720,-32768,  4919,-32768,  3040,  2382,  2506,  4051,  2509,
  -32768,-32768,  1031,  2510,  2276,-32768,  2519,  2521,-32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,  -235,-32768,-32768,  -307,  1570,
  -32768,-32768,  1583,  -450,-32768,  -409,-32768,  -332,  -478,  -508,
  -32768,-32768,-32768,-32768,  -334,-32768,  -554,-32768,  -903,-32768,
    -615,-32768,-32768,-32768,-32768,-32768,-32768,  1809,-32768,  1455,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1955,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,  1722,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -988,
    -674,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768, -1300,-32768,-32768,-32768,  1356,  1179,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   978,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2050,
  -32768,  1946,-32768,  2402,-32768,  2043,  2334,  -306,-32768,   496,
     463,-32768,-32768,  -103,  -460,  -524,  -137,   -13,  -100,    -5
};


#define	YYLAST		5290


static const short yytable[] =
{
     174,   175,   176,   177,   404,   620,   543,   587,  1152,   251,
     667,   431,   199,   792,   438,   439,   441,  1477,   600,  1086,
     111,   647,   648,   447,  1091,   450,    42,   610,   656,   334,
     614,   335,   585,   618,   930,   334,   195,   335,   482,    25,
    1112,  1115,   196,   177,  1160,  1166,   243,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   334,
    1364,   335,   276,   503,    -2,   599,   609,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   179,     4,   243,     4,   489,   244,     4,
     217,   801,   802,   803,   804,   613,   524,     6,  1045,     6,
       4,   617,     6,     6,  1254,   912,  1478,   243,   541,   921,
     243,   923,   539,     6,   806,  1124,   807,   913,  1517,  1046,
     644,   390,   577,   179,  1523,   727,    25,   391,    32,   474,
    1529,   577,   888,   532,     4,   392,     4,   244,  1537,   581,
     218,   489,   -66,   386,  1543,  1544,  1008,     6,   332,     6,
     311,   374,   489,   489,  1079,   489,   604,   387,   200,   244,
     457,   490,   244,   502,    33,   201,   368,   458,    26,    27,
     201,   924,    28,    34,   244,   375,   412,   530,   533,  1244,
     889,   376,    51,   244,   458,   458,   372,   933,   934,   935,
     936,   937,   938,   939,   940,   941,   942,   943,   944,   945,
     946,   947,   948,    35,  1125,   953,    26,    27,    36,   413,
      28,   957,   209,   210,  1126,   490,   414,   449,   580,  1281,
     958,   959,   960,   645,   768,   201,   490,   490,    37,   490,
     639,   977,   461,   462,   578,  1413,  1414,   458,   808,   211,
     212,   978,  1479,   979,   463,   643,   727,   727,   727,   727,
      43,   464,   465,   466,   586,   336,   369,   468,   469,   931,
     472,   738,   483,   477,  1113,  1116,   480,   245,  1161,  1167,
     440,    38,  1415,   916,   395,  1047,   -69,   917,   918,   334,
      44,   335,    45,   201,  1416,   381,  1153,   760,   914,   382,
     112,   393,   396,    39,   666,   336,   526,   586,   586,   383,
      46,   809,   397,   398,   771,   772,   828,  1094,   829,  1154,
     399,    40,   400,   388,   403,  1525,   245,   519,   205,   206,
     213,   214,   777,   222,   223,   219,   727,   586,  1387,   769,
     177,   672,   415,   586,   226,   227,   586,    41,   245,   535,
     537,   245,   727,   727,   727,   727,   727,   727,   727,   727,
     727,   727,   727,   727,   727,   727,   727,   727,   123,   111,
     727,  1010,   245,   574,   203,   961,   125,    29,   230,   231,
     235,   236,  1068,  1070,  1009,  1077,   239,   241,   632,   126,
     634,   635,   636,   898,   899,   900,   901,   902,   903,   904,
     905,   906,   127,  1740,   907,   886,  1526,   980,   406,  1745,
     908,   -66,   458,  1108,  1711,    29,  1712,   146,   407,  1417,
     146,  1055,   177,   909,   177,   177,   177,  1713,   458,   651,
     179,   638,   652,   408,   278,   279,   128,   409,   142,  1714,
    1058,  1577,  1578,  1579,  1580,  1581,  1582,   654,   655,   653,
     657,  1323,   143,   919,  1324,  1715,   662,    47,   665,   885,
     144,  1155,  1156,   668,   669,   384,  1325,  1326,   401,  -620,
    1327,  1328,   727,  1240,  1796,   722,   674,  1798,  1164,  1679,
     129,  1680,  1246,  1096,  1681,  1332,  1800,   972,   685,   973,
    1097,    48,    49,    50,   342,   279,   974,   963,   130,   964,
     965,   966,   967,   968,   969,  1506,  1560,  1507,   538,   201,
    1819,  1011,   179,  1561,   179,   179,   179,   131,  1137,  1138,
    1139,  1140,  1141,  1142,  1143,  1682,   132,   776,   181,   182,
     183,   184,   185,  1333,   186,   187,   188,   189,   767,   133,
     190,   191,   192,   193,   194,  1716,  1050,   134,   195,  1215,
     145,   773,   774,   998,   196,  1334,  1335,  1059,  1563,  1667,
    1060,   177,   417,   999,   135,  1561,  1668,  1329,  1069,  1071,
    1072,  1073,   633,   279,   410,  1078,   910,   418,   208,   424,
    1717,   216,   221,   225,   229,   233,   136,   238,   678,   679,
     137,  1064,  1065,  1066,  1067,  1252,   419,  1000,  1001,  1002,
    1003,  1004,  1005,   138,  1583,  1080,   681,   682,   139,   181,
     182,   183,   184,   185,  1336,   186,   187,   188,   189,   425,
    1277,   190,   191,   192,   193,   194,  1753,  1255,   727,   195,
     192,   193,   194,  1754,   140,   196,   195,   727,   742,   743,
     744,   745,   196,   975,   420,  1684,  1684,   141,  1021,  1337,
    1683,   179,  1295,   970,  1022,   147,   879,  1315,  1023,   148,
    1316,  1109,  1110,   426,  1024,   427,   149,   306,   150,  1531,
     683,   684,  1317,  1318,  1319,   151,  1172,    69,    70,    71,
     896,  1177,   897,  1131,   728,   729,  1025,   428,    73,    74,
      75,    76,  1026,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   421,  1006,
    1133,  1189,  1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,
    1142,  1143,  1149,   152,  1222,   429,  1224,   731,   732,  1508,
    1509,  1510,   153,  1231,  1051,  1052,  1053,  1054,   821,   822,
     823,   824,   825,   826,  1699,   154,   827,   733,   734,  1137,
    1138,  1139,  1140,  1141,  1142,  1143,  1144,  1377,    69,    70,
     173,  1339,   155,  1320,   746,  1496,   735,   736,   177,   177,
     177,   177,   740,   741,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   299,
     749,   750,  1340,   156,   300,   301,   197,  1532,  1099,  1341,
    1342,   157,     6,   158,   432,   433,   434,   435,  1463,  1464,
    1465,   982,   198,   983,   984,   234,   985,  1286,   753,   754,
     159,  1343,  1288,   436,  1344,  1345,   986,  1481,   823,   824,
     825,   826,   177,   160,   827,   302,   161,  1150,   761,   279,
    1790,   162,   987,   988,   989,   762,   279,   163,   179,   179,
     179,   179,   181,   182,   183,   184,   185,   990,   186,   187,
     188,   189,  1376,   164,   190,   191,   192,   193,   194,   763,
     279,  1145,   195,   764,   279,   239,  1380,   103,   196,     4,
    1346,  1163,   104,  1165,   165,   105,     5,   190,   191,   192,
     193,   194,     6,   166,   250,   195,   678,   786,  1182,   167,
    1184,   196,  1186,   892,   279,   168,  1396,   893,   894,  1190,
     727,  1398,  1385,  1400,   169,  1347,  1210,   279,  1211,   279,
    1391,   170,   179,   171,     7,   172,  1208,  1212,   279,   249,
       8,   320,   321,   322,   323,   324,   325,   326,   327,   328,
    1213,   279,   252,     9,  1420,    10,  1248,   279,   253,  1422,
    1383,  1384,  1425,    64,    65,    66,    67,    11,  1431,  1397,
     201,    12,  1435,   296,  1700,  1438,  1399,   201,   103,   297,
    1441,  1600,    13,   104,  1603,   991,   105,  1419,   201,  1421,
     201,  1450,   992,  1568,   279,   536,  1432,  1570,   279,   298,
      14,  1571,   279,  1674,  1675,  1460,   312,  1462,   318,   844,
     181,   182,   183,   184,   185,   330,   186,   187,   188,   189,
    1615,  1616,   190,   191,   192,   193,   194,  1631,  1725,  1726,
     195,  1734,   279,  1636,  1488,  1489,   196,  1491,    69,    70,
     687,   660,   661,   340,  1472,   343,   344,   367,   373,    15,
     379,    16,   451,   423,    77,    78,    79,    80,    81,   688,
     689,   690,   691,   692,   693,   694,   695,   696,   697,   698,
     699,   700,   701,   702,   703,   704,   705,   706,   707,   708,
     709,   710,   711,   712,   713,   380,  1245,    69,    70,   173,
      17,    18,    19,   442,   443,   444,  1678,   445,   446,  1511,
     452,   453,   455,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   180,  1388,
     845,   460,   846,   847,   848,   849,   467,   850,   851,   852,
     853,   854,   855,   714,   470,   475,   856,   478,   479,   857,
     484,   485,   858,  1732,   486,   859,   860,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   870,   871,   872,   487,
     488,   873,   500,   493,   494,   495,   874,   496,  1607,   875,
     497,  1690,   498,   499,  1609,   501,   504,   505,   506,   507,
     508,  1611,   511,   509,   512,   513,   514,  1429,   516,   517,
     518,  1433,   520,   521,  1436,  1437,  1618,   522,  1773,  1439,
    1737,   523,  1442,  1443,  1444,  1445,   525,   527,  1446,  1447,
     528,  1449,   529,  1451,   531,  1482,  1452,  1484,  1485,   540,
    1456,  1457,   544,  1459,   565,   572,  1133,   573,  1134,  1135,
    1136,   582,  1466,   584,   876,   589,   591,   592,   593,   596,
     598,   715,   605,   606,   607,   608,   616,   716,   717,   177,
     332,   177,   177,   718,   621,   624,   719,   622,   626,   951,
     952,   720,   721,   627,   722,  1137,  1138,  1139,  1140,  1141,
    1142,  1143,  1144,   628,   630,   631,   641,   637,   811,   812,
     813,   814,   815,   816,   817,   818,   819,   820,   640,   649,
     821,   822,   823,   824,   825,   826,   650,   103,   827,   658,
     663,   666,   104,   670,  1833,   105,   673,   675,   676,   476,
     757,  1707,   680,   664,   686,  1533,  1719,   730,   737,   739,
     181,   182,   183,   184,   185,   748,   186,   187,   188,   189,
     752,   755,   190,   191,   192,   193,   194,   758,   759,   179,
     195,   179,   179,   765,   844,   766,   196,   775,   791,   782,
     781,   785,   800,   793,   795,   796,   797,  1566,   798,  1749,
    1569,   186,   187,   188,   189,  1534,   805,   190,   191,   192,
     193,   194,  1586,   810,   830,   195,   837,   839,   840,   841,
     925,   196,   842,   880,   887,   881,   882,   883,  1751,    69,
      70,   173,   884,  1601,   922,   722,   891,  1148,   926,   927,
    1785,   949,  1787,  1762,   928,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
    1621,   827,  1623,   950,  1622,   955,  1012,  1013,  1626,   817,
     818,   819,   820,  1014,  1015,   821,   822,   823,   824,   825,
     826,  1020,  1016,   827,  1017,  1647,  1648,  1649,  1650,  1651,
    1018,  1027,  1019,  1028,  1035,   845,  1056,   846,   847,   848,
     849,  1057,   850,   851,   852,   853,   854,   855,  1029,  1030,
    1817,   856,  1031,  1689,   857,  1032,  1033,   858,  1034,  1036,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,  1037,  1038,   873,  1676,  1039,  1677,
    1042,   874,  1040,  1041,   875,  1061,  1075,   177,   181,   182,
     183,   184,   185,  1074,   186,   187,   188,   189,  1076,  1697,
     190,   191,   192,   193,   194,  1081,  1082,  1083,   195,  1704,
    1705,  1084,  1093,  1708,   196,  1710,  1100,  1085,  1087,  1089,
    1722,  1090,  1092,   888,  1095,  1724,  1103,  1104,  1105,  1106,
    1107,  1111,  1118,  1119,  1120,  1733,  1121,  1122,   181,   182,
     183,   184,   185,  1123,   186,   187,   188,   189,  1127,  1602,
     190,   191,   192,   193,   194,  1128,  1129,  1130,   195,  1748,
    1158,  1159,  1169,  1204,   196,  1170,  1171,  1173,  1174,  1175,
    1176,  1178,  1179,  1180,  1181,  1191,  1192,   179,  1193,   103,
    1194,  1195,  1767,  1196,   104,  1197,  1198,   105,  1199,  1536,
    1200,  1775,   476,  1201,  1202,  1203,  1206,    69,    70,   473,
      72,  1207,  1205,    28,  1209,  1214,  1216,  1217,    73,    74,
      75,    76,  1791,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,  1218,  1805,
    1219,  1220,  1808,   184,   185,  1221,   186,   187,   188,   189,
    1223,   244,   190,   191,   192,   193,   194,    69,    70,   687,
     195,  1228,  1225,  1821,  1226,  1823,   196,  1227,  1229,  1230,
    1232,  1233,  1828,    77,    78,    79,    80,    81,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   708,   709,
     710,   711,   712,   713,    69,    70,    71,    72,  1239,  1234,
      28,  1237,  1238,  1242,  1243,    73,    74,    75,    76,  1247,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,  1538,  1249,    69,    70,    71,
    1250,  1256,  1251,  1253,  1258,  1259,  1282,  1260,    73,    74,
      75,    76,   714,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,  1261,  1262,
    1264,  1266,   181,   182,   183,   184,   185,   102,   186,   187,
     188,   189,  1267,  1268,   190,   191,   192,   193,   194,  1269,
    1270,  1271,   195,  1272,  1273,  1274,  1275,   103,   196,  1276,
    1278,  1279,   104,  1280,  1283,   105,    69,    70,    71,  1284,
     245,  1290,  1285,   106,  1287,  1289,  1291,    73,    74,    75,
      76,  1293,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   844,  1294,  1679,
     715,  1680,  1297,  1298,  1681,  1299,   716,   717,  1300,  1302,
    1303,  1304,   718,  1305,  1309,   719,  1306,  1307,  1369,  1308,
     720,   721,  1310,   722,  1311,  1382,  1392,  1312,  1393,  1395,
    1313,  1350,  1363,  1389,   102,  1402,  1349,  1351,  1137,  1138,
    1139,  1140,  1141,  1142,  1143,  1682,  1352,  1353,  1354,  1355,
    1356,  1357,  1371,  1358,   103,  1359,  1360,  1361,  1362,   104,
    1372,  1629,   105,  1373,  1630,  1374,  1375,  1394,  1403,  1378,
     106,  1379,   844,  1404,   201,  1405,  1406,  1381,   181,   182,
     183,   184,   185,  1407,   186,   187,   188,   189,  1409,  1411,
     190,   191,   192,   193,   194,  1412,  1423,   103,   195,  1424,
    1426,  1427,   104,  1428,   196,   105,  1430,  1453,  1469,  1434,
    1440,  1448,  1461,   106,  1467,  1468,  1454,  1470,   845,  1471,
     846,   847,   848,   849,   844,   850,   851,   852,   853,   854,
     855,  1455,  1458,  1473,   856,  1480,  1474,   857,  1483,  1490,
     858,  1486,  1493,   859,   860,   861,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   872,  1494,  1497,   873,
    1498,  1499,  1500,  1501,   874,  1505,  1504,   875,  1502,  1512,
    1686,  1513,   844,  1627,  1514,  1524,   103,  1527,  1530,  1539,
    1542,   104,  1515,  1588,   105,  1520,  1516,  1590,  1519,  1521,
    1575,  1549,   106,   845,  1551,   846,   847,   848,   849,  1550,
     850,   851,   852,   853,   854,   855,  1552,  1553,  1555,   856,
    1556,  1557,   857,  1564,  1558,   858,  1559,  1565,   859,   860,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   870,
     871,   872,  1608,  1573,   873,  1567,  1591,  1592,  1572,   874,
    1574,   844,   875,  1576,  1585,   845,  1595,   846,   847,   848,
     849,  1596,   850,   851,   852,   853,   854,   855,  1597,  1598,
    1587,   856,  1599,  1589,   857,  1604,  1605,   858,  1606,  1617,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   870,   871,   872,  1619,  1620,   873,  1624,  1625,   844,
    1628,   874,  1632,   845,   875,   846,   847,   848,   849,  1637,
     850,   851,   852,   853,   854,   855,  1642,  1610,  1640,   856,
    1639,  1641,   857,  1643,  1644,   858,  1645,  1646,   859,   860,
     861,   862,   863,   864,   865,   866,   867,   868,   869,   870,
     871,   872,  1652,  1654,   873,  1655,  1661,   844,  1656,   874,
    1657,  1658,   875,   813,   814,   815,   816,   817,   818,   819,
     820,  1659,  1662,   821,   822,   823,   824,   825,   826,  1612,
    1664,   827,   845,  1663,   846,   847,   848,   849,  1665,   850,
     851,   852,   853,   854,   855,  1666,  1670,  1672,   856,  1687,
    1688,   857,  1691,  1698,   858,   844,  1701,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,  1702,  1703,   873,  1706,  1720,  1721,  1613,   874,  1723,
     845,   875,   846,   847,   848,   849,  1709,   850,   851,   852,
     853,   854,   855,  1727,  1728,  1729,   856,  1731,  1735,   857,
     586,  1738,   858,   844,  1739,   859,   860,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   870,   871,   872,  1743,
    1747,   873,  1750,  1752,  1756,  1758,   874,  1757,   845,   875,
     846,   847,   848,   849,  1759,   850,   851,   852,   853,   854,
     855,  1760,  1761,  1764,   856,  1768,  1614,   857,  1766,  1769,
     858,   844,  1770,   859,   860,   861,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   872,  1772,  1778,   873,
    1774,  1780,  1540,  1777,   874,  1781,   845,   875,   846,   847,
     848,   849,  1782,   850,   851,   852,   853,   854,   855,  1783,
    1784,  1786,   856,  1541,  1771,   857,  1788,  1789,   858,   844,
    1792,   859,   860,   861,   862,   863,   864,   865,   866,   867,
     868,   869,   870,   871,   872,  1795,  1802,   873,  1799,  1803,
    1545,  1801,   874,  1806,   845,   875,   846,   847,   848,   849,
    1807,   850,   851,   852,   853,   854,   855,  1812,  1810,  1814,
     856,  1546,  1776,   857,  1815,  1820,   858,  1822,  1829,   859,
     860,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870,   871,   872,  1830,  1832,   873,  1835,  1834,  1548,  1837,
     874,  1838,   845,   875,   846,   847,   848,   849,  1101,   850,
     851,   852,   853,   854,   855,   832,  1235,   677,   856,  1692,
    1809,   857,  1102,  1634,   858,   242,  1476,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,  1367,   995,   873,     0,   629,  1693,   625,   874,   756,
     845,   875,   846,   847,   848,   849,   331,   850,   851,   852,
     853,   854,   855,     0,     0,     0,   856,  1694,  1811,   857,
       0,     0,   858,     0,     0,   859,   860,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   870,   871,   872,     0,
       0,   873,     0,     0,  1695,     0,   874,     0,     0,   875,
       0,     0,     0,     0,     0,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,  1696,  1813,   190,   191,   192,
     193,   194,     0,     0,     0,   195,   181,   182,   183,   184,
     185,   196,   186,   187,   188,   189,  1779,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
       0,     0,   196,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,  1824,   190,   191,   192,   193,   194,
       0,     0,     0,   195,   181,   182,   183,   184,   185,   196,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,     0,     0,     0,     0,
     196,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,   181,   182,   183,   184,   185,   196,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,     0,     0,   196,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
     181,   182,   183,   184,   185,   196,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,     0,     0,   196,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,   181,   182,
     183,   184,   185,   196,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,   181,
     182,   183,   184,   185,   196,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,    69,    70,    71,   195,
       0,     0,     0,     0,     0,   196,     0,    73,    74,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,     0,     0,     0,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
    1098,    73,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    69,    70,   173,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    69,    70,   173,   471,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    69,    70,   173,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   783,     0,     0,     0,     0,   534,
      70,   173,     0,     0,     0,     0,   103,     0,     0,     0,
       0,   104,     0,     0,   105,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     370,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,     0,     0,     0,     0,   104,     0,     0,   105,    52,
       0,   371,     0,    53,     0,     0,     0,     0,     0,     0,
       0,   448,   811,   812,   813,   814,   815,   816,   817,   818,
     819,   820,   579,     0,   821,   822,   823,   824,   825,   826,
       0,   103,   827,     0,     0,     0,   104,     0,     0,   105,
       0,     0,     0,  1088,     0,     0,    54,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,    57,     0,     0,
       0,     0,   103,     0,     0,     0,     0,   104,     0,    58,
     105,     0,     0,    59,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,    60,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,     0,     0,     0,     0,
     196,     0,    61,   103,     0,   345,     0,     0,   104,     0,
       0,   105,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,   545,   784,   103,
       0,    62,   196,    63,   104,     0,     0,   105,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,   181,   182,   183,   184,   185,   196,   186,
     187,   188,   189,     0,   546,   190,   191,   192,   193,   194,
       0,     0,     0,   195,   181,   182,   183,   184,   185,   196,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,   547,     0,     0,     0,     0,
     196,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
     548,   195,     0,   277,     0,     0,     0,   196,     0,     0,
       0,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   563,   564,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,   181,   182,
     183,   184,   185,   196,   186,   187,   188,   189,   346,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,   181,
     182,   183,   184,   185,   196,   186,   187,   188,   189,   357,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
     181,   182,   183,   184,   185,   196,   186,   187,   188,   189,
     364,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,   181,   182,   183,   184,   185,   196,   186,   187,   188,
     189,   365,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,   181,   182,   183,   184,   185,   196,   186,   187,
     188,   189,   366,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,   181,   182,   183,   184,   185,   196,   186,
     187,   188,   189,   566,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,   181,   182,   183,   184,   185,   196,
     186,   187,   188,   189,   567,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,   181,   182,   183,   184,   185,
     196,   186,   187,   188,   189,  1049,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,   181,   182,   183,   184,
     185,   196,   186,   187,   188,   189,  1314,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,   181,   182,   183,
     184,   185,   196,   186,   187,   188,   189,  1322,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,   181,   182,
     183,   184,   185,   196,   186,   187,   188,   189,  1331,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,   181,
     182,   183,   184,   185,   196,   186,   187,   188,   189,  1495,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
     181,   182,   183,   184,   185,   196,   186,   187,   188,   189,
    1518,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,   181,   182,   183,   184,   185,   196,   186,   187,   188,
     189,  1522,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,   181,   182,   183,   184,   185,   196,   186,   187,
     188,   189,  1528,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,   181,   182,   183,   184,   185,   196,   186,
     187,   188,   189,  1535,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,   181,   182,   183,   184,   185,   196,
     186,   187,   188,   189,  1554,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,   181,   182,   183,   184,   185,
     196,   186,   187,   188,   189,  1673,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,   181,   182,   183,   184,
     185,   196,   186,   187,   188,   189,  1742,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,   181,   182,   183,
     184,   185,   196,   186,   187,   188,   189,  1744,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,   181,   182,
     183,   184,   185,   196,   186,   187,   188,   189,  1765,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,   181,
     182,   183,   184,   185,   196,   186,   187,   188,   189,  1816,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
     181,   182,   183,   184,   185,   196,   186,   187,   188,   189,
    1818,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,   181,   182,   183,   184,   185,   196,   186,   187,   188,
     189,  1825,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,     0,     0,   196,     0,     0,
       0,   575,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,     0,     0,   196,     0,
       0,     0,   642,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,     0,     0,     0,     0,   196,
       0,     0,     0,   671,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,     0,     0,     0,     0,
     196,     0,     0,     0,  1063,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,     0,
       0,   196,     0,     0,     0,  1370,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
       0,     0,   196,     0,     0,     0,  1635,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,     0,     0,
       0,     0,     0,   196,     0,     0,     0,  1638,   181,   182,
     183,   184,   185,     0,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,     0,
       0,     0,     0,     0,   196,     0,     0,     0,  1653,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
       0,     0,     0,     0,     0,   196,     0,     0,     0,  1736,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,     0,     0,   196,     0,     0,     0,
    1804,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,     0,     0,   196,     0,     0,
       0,  1831,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,   347,     0,   196,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
       0,     0,     0,   348,     0,   196,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
     349,     0,   196,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,     0,     0,   350,     0,   196,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,   351,     0,   196,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,     0,     0,
       0,   352,     0,   196,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,     0,     0,   353,     0,
     196,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,   354,     0,   196,   181,   182,
     183,   184,   185,     0,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,     0,
       0,     0,   355,     0,   196,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,   356,
       0,   196,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,   358,     0,   196,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
       0,     0,     0,   359,     0,   196,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
     360,     0,   196,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,     0,     0,   361,     0,   196,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,   362,     0,   196,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,     0,     0,
       0,   363,     0,   196,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,     0,     0,   568,     0,
     196,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,   569,     0,   196,   181,   182,
     183,   184,   185,     0,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,     0,
       0,     0,   570,     0,   196,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,   571,
       0,   196,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,   779,     0,   196,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
       0,     0,     0,   780,     0,   196,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
     790,     0,   196,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
       0,     0,     0,   195,     0,  1062,     0,     0,     0,   196,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,     0,     0,     0,
     195,     0,     0,     0,  1660,     0,   196,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,     0,     0,     0,   195,     0,     0,
       0,  1671,     0,   196,   181,   182,   183,   184,   185,     0,
     186,   187,   188,   189,     0,     0,   190,   191,   192,   193,
     194,     0,     0,     0,   195,     0,     0,     0,  1741,     0,
     196,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,     0,     0,
       0,   195,     0,     0,     0,  1746,     0,   196,   181,   182,
     183,   184,   185,     0,   186,   187,   188,   189,     0,     0,
     190,   191,   192,   193,   194,     0,     0,     0,   195,     0,
       0,     0,  1755,     0,   196,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,     0,     0,     0,   195,     0,     0,     0,  1793,
       0,   196,   181,   182,   183,   184,   185,     0,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,  1797,     0,   196,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,     0,     0,     0,   195,
       0,     0,     0,  1827,     0,   196,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,     0,     0,     0,   195,     0,     0,     0,
       0,     0,   196,   811,   812,   813,   814,   815,   816,   817,
     818,   819,   820,     0,     0,   821,   822,   823,   824,   825,
     826,     0,     0,   827,   183,   184,   185,  1386,   186,   187,
     188,   189,     0,     0,   190,   191,   192,   193,   194,     0,
       0,     0,   195,     0,     0,     0,     0,     0,   196,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,     0,
       0,   821,   822,   823,   824,   825,   826,     0,     0,   827,
       0,   929,   811,   812,   813,   814,   815,   816,   817,   818,
     819,   820,     0,     0,   821,   822,   823,   824,   825,   826,
       0,     0,   827,   814,   815,   816,   817,   818,   819,   820,
       0,     0,   821,   822,   823,   824,   825,   826,     0,     0,
     827
};

static const short yycheck[] =
{
     103,   104,   105,   106,   311,   513,   456,   485,   996,   146,
     564,   318,   112,   687,   321,   322,   323,     5,   496,   922,
      25,   545,   546,   329,   927,   331,     5,   505,   552,     3,
     508,     5,     7,   511,     5,     3,   230,     5,     5,   209,
       5,     5,   236,   146,     5,     5,     5,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,     3,
       5,     5,   172,   405,     0,     7,     7,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   106,     5,     5,     5,    13,    57,     5,
       5,   716,   717,   718,   719,     7,   440,    18,    63,    18,
       5,     7,    18,    18,     7,    57,   104,     5,    52,   793,
       5,   795,   454,    18,     3,     5,     5,    69,  1428,    84,
     539,    70,     5,   146,  1434,   595,   209,    76,   233,   374,
    1440,     5,     5,   449,     5,    84,     5,    57,  1448,   481,
      55,    13,   233,    70,  1454,  1455,     5,    18,   239,    18,
     233,   209,    13,    13,    52,    13,   500,    84,   234,    57,
     234,    87,    57,   234,   239,   241,   279,   241,     5,     6,
     241,   796,     9,   239,    57,   233,    84,   234,   234,  1092,
      53,   239,     7,    57,   241,   241,   296,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   239,    94,   830,     5,     6,   239,   117,
       9,    86,   239,   240,   104,    87,   124,   330,   234,  1132,
      95,    96,    97,   540,   643,   241,    87,    87,   239,    87,
     234,    74,   345,   346,   479,    66,    67,   241,   127,   239,
     240,    84,   240,    86,   357,   223,   716,   717,   718,   719,
     239,   364,   365,   366,   239,   239,   279,   370,   371,   240,
     373,   605,   239,   376,   239,   239,   379,   236,   239,   239,
     239,   239,   103,    70,    56,   240,   234,    74,    75,     3,
       5,     5,     7,   241,   115,    70,    74,   631,   240,    74,
     233,   240,    74,   239,   239,   239,   443,   239,   239,    84,
      25,   190,    84,    85,   646,   649,   236,   932,   238,    97,
      92,   239,    94,   240,   234,     7,   236,   427,   239,   240,
     239,   240,   666,   239,   240,   240,   796,   239,  1241,   645,
     443,   576,   240,   239,   239,   240,   239,   239,   236,   452,
     453,   236,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,   824,   825,   826,   827,   169,   374,
     830,   233,   236,   476,   240,   240,     7,   204,   239,   240,
     239,   240,   233,   233,   233,   233,     5,     6,   525,     7,
     527,   528,   529,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     7,  1703,    68,   234,     7,   240,    74,  1709,
      74,   233,   241,   967,    74,   204,    76,   239,    84,   240,
     239,   234,   525,    87,   527,   528,   529,    87,   241,   218,
     443,   531,   221,    99,   240,   241,     7,   103,   233,    99,
     890,    77,    78,    79,    80,    81,    82,   550,   551,   549,
     553,   124,   233,   240,   127,   115,   559,   172,   561,   765,
     233,   239,   240,   566,   567,   240,   139,   140,   240,   233,
     143,   144,   932,  1088,  1774,   239,   579,  1777,  1002,    69,
       7,    71,  1097,   234,    74,    76,  1786,    84,   591,    86,
     241,   206,   207,   208,   240,   241,    93,    84,     7,    86,
      87,    88,    89,    90,    91,  1408,   234,  1410,   240,   241,
    1810,   845,   525,   241,   527,   528,   529,     7,   108,   109,
     110,   111,   112,   113,   114,   115,     7,   664,   210,   211,
     212,   213,   214,   124,   216,   217,   218,   219,   641,     7,
     222,   223,   224,   225,   226,   205,   880,     7,   230,  1057,
     233,   651,   652,    74,   236,   146,   147,   891,   234,   234,
     894,   664,    84,    84,     7,   241,   241,   240,   902,   903,
     904,   905,   240,   241,   240,   909,   240,    99,   115,    84,
     240,   118,   119,   120,   121,   122,     7,   124,   239,   240,
       7,   898,   899,   900,   901,  1103,   118,   118,   119,   120,
     121,   122,   123,     7,   240,   912,   239,   240,     7,   210,
     211,   212,   213,   214,   205,   216,   217,   218,   219,   124,
    1128,   222,   223,   224,   225,   226,   234,  1105,  1088,   230,
     224,   225,   226,   241,     7,   236,   230,  1097,   104,   105,
     106,   107,   236,   240,   166,  1633,  1634,     7,   233,   240,
     240,   664,  1160,   240,   239,     7,   759,   124,   233,   233,
     127,   968,   969,   168,   239,   170,   233,   204,   233,     7,
     239,   240,   139,   140,   141,   233,  1010,     3,     4,     5,
     783,  1015,   785,   990,   239,   240,   233,   192,    14,    15,
      16,    17,   239,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,   240,   240,
      69,  1028,    71,    72,    73,   108,   109,   110,   111,   112,
     113,   114,   115,   233,  1068,   240,  1070,   239,   240,  1413,
    1414,  1415,   233,  1077,   881,   882,   883,   884,   222,   223,
     224,   225,   226,   227,  1657,   233,   230,   239,   240,   108,
     109,   110,   111,   112,   113,   114,   115,  1217,     3,     4,
       5,    76,   233,   240,   240,  1390,   239,   240,   881,   882,
     883,   884,   239,   240,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,     5,
     239,   240,   117,   233,    10,    11,     7,     7,   955,   124,
     125,   233,    18,   233,   222,   223,   224,   225,  1352,  1353,
    1354,    69,     7,    71,    72,     5,    74,  1144,   239,   240,
     233,   146,  1149,   241,   149,   150,    84,  1371,   224,   225,
     226,   227,   955,   233,   230,    51,   233,   240,   240,   241,
    1763,   233,   100,   101,   102,   240,   241,   233,   881,   882,
     883,   884,   210,   211,   212,   213,   214,   115,   216,   217,
     218,   219,  1216,   233,   222,   223,   224,   225,   226,   240,
     241,   240,   230,   240,   241,     5,  1228,   223,   236,     5,
     205,  1001,   228,  1003,   233,   231,    12,   222,   223,   224,
     225,   226,    18,   233,   240,   230,   239,   240,  1021,   233,
    1023,   236,  1025,   240,   241,   233,  1258,   240,   241,  1029,
    1390,  1263,  1239,  1265,   233,   240,   240,   241,   240,   241,
    1247,   233,   955,   233,    50,   233,  1049,   240,   241,     6,
      56,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     240,   241,     5,    69,  1296,    71,   240,   241,     5,  1301,
     239,   240,  1306,   171,   172,   173,   174,    83,  1312,   240,
     241,    87,  1316,   241,  1658,  1319,   240,   241,   223,     7,
    1324,  1515,    98,   228,  1518,   233,   231,   240,   241,   240,
     241,  1335,   240,   240,   241,   240,  1313,   240,   241,     5,
     116,   240,   241,   240,   241,  1349,   233,  1351,   233,     5,
     210,   211,   212,   213,   214,   241,   216,   217,   218,   219,
     239,   240,   222,   223,   224,   225,   226,  1561,   240,   241,
     230,   240,   241,  1567,  1378,  1379,   236,  1381,     3,     4,
       5,   555,   556,   233,  1361,   234,   241,   234,   209,   165,
     231,   167,   240,   239,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   233,     8,     3,     4,     5,
     206,   207,   208,   239,   239,   239,  1630,   239,   239,  1416,
       8,   239,   241,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     8,  1242,
     126,     5,   128,   129,   130,   131,     7,   133,   134,   135,
     136,   137,   138,   108,   234,     3,   142,   209,   209,   145,
       5,     5,   148,  1687,   239,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,     5,
     239,   167,   209,     5,   239,     5,   172,     5,  1522,   175,
     239,  1641,   239,   239,  1528,   234,     5,     5,   239,   239,
       5,  1535,     5,   239,   239,     5,     5,  1310,     5,   239,
       5,  1314,     5,   234,  1317,  1318,  1550,     5,  1742,  1322,
    1698,   186,  1325,  1326,  1327,  1328,   239,   239,  1331,  1332,
     239,  1334,   239,  1336,   233,  1372,  1339,  1374,  1375,   115,
    1343,  1344,     7,  1346,   234,     7,    69,   234,    71,    72,
      73,   239,  1355,     7,   240,     7,   233,   233,     7,     7,
       7,   216,   209,     7,     5,     7,   239,   222,   223,  1372,
     239,  1374,  1375,   228,     7,     7,   231,   240,     7,   234,
     235,   236,   237,     7,   239,   108,   109,   110,   111,   112,
     113,   114,   115,     7,     5,   241,     8,     7,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,     7,   239,
     222,   223,   224,   225,   226,   227,     5,   223,   230,     5,
       5,   239,   228,   209,  1832,   231,     7,     7,     5,   236,
     240,  1665,     7,   239,     5,     7,  1670,     7,     7,     7,
     210,   211,   212,   213,   214,     7,   216,   217,   218,   219,
       7,     7,   222,   223,   224,   225,   226,   241,   239,  1372,
     230,  1374,  1375,   234,     5,     7,   236,     6,   234,     7,
      54,   239,     5,   233,   233,   233,   233,  1480,   233,  1713,
    1483,   216,   217,   218,   219,     7,     3,   222,   223,   224,
     225,   226,  1495,     5,   233,   230,     7,   239,   239,   239,
       5,   236,   239,   241,   234,   239,   239,   239,  1715,     3,
       4,     5,   239,  1516,   233,   239,   241,   240,     5,   233,
    1754,     3,  1756,  1730,   218,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    1553,   230,  1555,     3,  1554,   239,   233,   233,  1558,   216,
     217,   218,   219,   233,   233,   222,   223,   224,   225,   226,
     227,     7,   233,   230,   233,  1578,  1579,  1580,  1581,  1582,
     233,   239,   233,   233,   239,   126,     7,   128,   129,   130,
     131,     5,   133,   134,   135,   136,   137,   138,   233,   233,
    1807,   142,   233,  1640,   145,   233,   233,   148,   233,   239,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   233,   233,   167,  1627,   233,  1629,
     233,   172,   239,   239,   175,   233,     5,  1640,   210,   211,
     212,   213,   214,   239,   216,   217,   218,   219,     5,  1652,
     222,   223,   224,   225,   226,     5,   239,     5,   230,  1662,
    1663,     5,   240,  1666,   236,  1668,     5,   234,   234,   233,
    1673,   234,   233,     5,   234,  1675,     5,     5,     5,     5,
     239,     5,     5,     5,     5,  1688,     5,     5,   210,   211,
     212,   213,   214,     5,   216,   217,   218,   219,     5,   240,
     222,   223,   224,   225,   226,     5,     3,     3,   230,  1712,
       5,     5,     5,   233,   236,     7,     5,     7,     5,     5,
       5,     5,     5,     5,     5,     5,     5,  1640,     5,   223,
       5,     5,  1735,     5,   228,     5,     5,   231,     5,     7,
       5,  1744,   236,     5,     5,     5,   239,     3,     4,     5,
       6,     5,   233,     9,   240,     7,   241,   236,    14,    15,
      16,    17,  1765,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     7,  1792,
       7,     7,  1795,   213,   214,     7,   216,   217,   218,   219,
       7,    57,   222,   223,   224,   225,   226,     3,     4,     5,
     230,     3,     7,  1816,     7,  1818,   236,     7,     7,     7,
       7,     7,  1825,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     3,     4,     5,     6,   241,     7,
       9,     7,     7,   239,   234,    14,    15,    16,    17,   233,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,     7,     7,     3,     4,     5,
       7,   239,     7,     7,     5,     7,     5,     7,    14,    15,
      16,    17,   108,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,     7,     7,
       7,     7,   210,   211,   212,   213,   214,   203,   216,   217,
     218,   219,     7,     7,   222,   223,   224,   225,   226,     7,
       7,     7,   230,     7,     7,     7,     7,   223,   236,     7,
       7,     7,   228,     7,     5,   231,     3,     4,     5,     5,
     236,     5,   233,   239,   233,   233,     5,    14,    15,    16,
      17,     7,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,     5,     7,    69,
     216,    71,     7,     7,    74,     7,   222,   223,     7,     7,
       7,   234,   228,   234,   234,   231,   241,   241,     7,   241,
     236,   237,   241,   239,   241,     7,     7,   241,     7,     7,
     241,   234,   234,   234,   203,   234,   241,   241,   108,   109,
     110,   111,   112,   113,   114,   115,   241,   241,   241,   241,
     240,   240,   239,   241,   223,   241,   241,   241,   241,   228,
     239,   187,   231,   240,   190,   239,   239,    99,     7,   241,
     239,   241,     5,     7,   241,     7,     3,   241,   210,   211,
     212,   213,   214,     7,   216,   217,   218,   219,     7,     7,
     222,   223,   224,   225,   226,     7,     7,   223,   230,     7,
       5,     5,   228,   239,   236,   231,     5,     5,     5,   239,
     239,   239,     7,   239,     7,     7,   239,     5,   126,     5,
     128,   129,   130,   131,     5,   133,   134,   135,   136,   137,
     138,   239,   239,     5,   142,   239,     7,   145,   239,     3,
     148,   240,   234,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   234,   234,   167,
       5,     5,     5,     5,   172,   234,     7,   175,   233,     5,
     240,     5,     5,   119,   234,     7,   223,     7,     7,     7,
       7,   228,   241,     7,   231,   234,   241,     5,   241,   241,
     240,   234,   239,   126,   234,   128,   129,   130,   131,   241,
     133,   134,   135,   136,   137,   138,   234,   241,   241,   142,
     234,   234,   145,   239,   241,   148,   241,   239,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   240,   234,   167,   241,     7,     7,   241,   172,
     234,     5,   175,   234,   234,   126,     7,   128,   129,   130,
     131,     7,   133,   134,   135,   136,   137,   138,     7,     7,
     240,   142,     7,   240,   145,     5,     7,   148,     5,     7,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,     7,     7,   167,     7,     7,     5,
       7,   172,     7,   126,   175,   128,   129,   130,   131,   240,
     133,   134,   135,   136,   137,   138,     7,   240,   239,   142,
     240,   236,   145,     7,     7,   148,     7,     5,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   239,    98,   167,     7,   132,     5,   234,   172,
     241,   241,   175,   212,   213,   214,   215,   216,   217,   218,
     219,   234,   241,   222,   223,   224,   225,   226,   227,   240,
     234,   230,   126,   241,   128,   129,   130,   131,   241,   133,
     134,   135,   136,   137,   138,   241,   241,   234,   142,   241,
     239,   145,     7,     5,   148,     5,     7,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,     7,   239,   167,     7,     7,     7,   240,   172,     7,
     126,   175,   128,   129,   130,   131,   239,   133,   134,   135,
     136,   137,   138,     5,     5,     5,   142,   233,   241,   145,
     239,   234,   148,     5,   234,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   234,
       5,   167,     5,     5,   241,     4,   172,     7,   126,   175,
     128,   129,   130,   131,     7,   133,   134,   135,   136,   137,
     138,     7,     7,   240,   142,     7,   240,   145,   240,     7,
     148,     5,     7,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,     7,     7,   167,
     239,     7,     7,   239,   172,     7,   126,   175,   128,   129,
     130,   131,     7,   133,   134,   135,   136,   137,   138,     7,
       7,   239,   142,     7,   240,   145,   240,     7,   148,     5,
     239,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   241,     7,   167,   234,   234,
       7,   240,   172,     7,   126,   175,   128,   129,   130,   131,
      50,   133,   134,   135,   136,   137,   138,     7,   239,     7,
     142,     7,   240,   145,     7,     7,   148,     7,   116,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,     7,     5,   167,   240,     7,     7,     0,
     172,     0,   126,   175,   128,   129,   130,   131,   958,   133,
     134,   135,   136,   137,   138,   726,  1081,   582,   142,     7,
     240,   145,   959,  1565,   148,   143,  1367,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,  1205,   840,   167,    -1,   522,     7,   517,   172,   623,
     126,   175,   128,   129,   130,   131,   242,   133,   134,   135,
     136,   137,   138,    -1,    -1,    -1,   142,     7,   240,   145,
      -1,    -1,   148,    -1,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,    -1,
      -1,   167,    -1,    -1,     7,    -1,   172,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,   210,   211,   212,   213,   214,
      -1,   216,   217,   218,   219,     7,   240,   222,   223,   224,
     225,   226,    -1,    -1,    -1,   230,   210,   211,   212,   213,
     214,   236,   216,   217,   218,   219,     7,    -1,   222,   223,
     224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,
      -1,    -1,   236,   210,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,    -1,   240,   222,   223,   224,   225,   226,
      -1,    -1,    -1,   230,   210,   211,   212,   213,   214,   236,
     216,   217,   218,   219,    -1,    -1,   222,   223,   224,   225,
     226,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
     236,   210,   211,   212,   213,   214,    -1,   216,   217,   218,
     219,    -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,
      -1,   230,   210,   211,   212,   213,   214,   236,   216,   217,
     218,   219,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,   236,   210,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,    -1,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,   230,
     210,   211,   212,   213,   214,   236,   216,   217,   218,   219,
      -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,
     230,    -1,    -1,    -1,    -1,    -1,   236,   210,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,    -1,    -1,   222,
     223,   224,   225,   226,    -1,    -1,    -1,   230,   210,   211,
     212,   213,   214,   236,   216,   217,   218,   219,    -1,    -1,
     222,   223,   224,   225,   226,    -1,    -1,    -1,   230,   210,
     211,   212,   213,   214,   236,   216,   217,   218,   219,    -1,
      -1,   222,   223,   224,   225,   226,     3,     4,     5,   230,
      -1,    -1,    -1,    -1,    -1,   236,    -1,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,     8,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
      -1,   228,    -1,    -1,   231,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,    -1,    -1,    -1,   228,    -1,    -1,   231,     3,
      -1,     8,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   203,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,     8,    -1,   222,   223,   224,   225,   226,   227,
      -1,   223,   230,    -1,    -1,    -1,   228,    -1,    -1,   231,
      -1,    -1,    -1,   241,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,    -1,   228,    -1,    83,
     231,    -1,    -1,    87,   210,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,    98,    -1,   222,   223,   224,   225,
     226,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
     236,    -1,   116,   223,    -1,   241,    -1,    -1,   228,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   210,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,    -1,    -1,   222,   223,
     224,   225,   226,    -1,    -1,    -1,   230,    63,   232,   223,
      -1,   165,   236,   167,   228,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   210,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,   210,   211,   212,   213,   214,   236,   216,
     217,   218,   219,    -1,   120,   222,   223,   224,   225,   226,
      -1,    -1,    -1,   230,   210,   211,   212,   213,   214,   236,
     216,   217,   218,   219,    -1,    -1,   222,   223,   224,   225,
     226,    -1,    -1,    -1,   230,   151,    -1,    -1,    -1,    -1,
     236,   210,   211,   212,   213,   214,    -1,   216,   217,   218,
     219,    -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,
     176,   230,    -1,   232,    -1,    -1,    -1,   236,    -1,    -1,
      -1,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   210,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,    -1,    -1,   222,
     223,   224,   225,   226,    -1,    -1,    -1,   230,   210,   211,
     212,   213,   214,   236,   216,   217,   218,   219,   241,    -1,
     222,   223,   224,   225,   226,    -1,    -1,    -1,   230,   210,
     211,   212,   213,   214,   236,   216,   217,   218,   219,   241,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,   230,
     210,   211,   212,   213,   214,   236,   216,   217,   218,   219,
     241,    -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,
     230,   210,   211,   212,   213,   214,   236,   216,   217,   218,
     219,   241,    -1,   222,   223,   224,   225,   226,    -1,    -1,
      -1,   230,   210,   211,   212,   213,   214,   236,   216,   217,
     218,   219,   241,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,   210,   211,   212,   213,   214,   236,   216,
     217,   218,   219,   241,    -1,   222,   223,   224,   225,   226,
      -1,    -1,    -1,   230,   210,   211,   212,   213,   214,   236,
     216,   217,   218,   219,   241,    -1,   222,   223,   224,   225,
     226,    -1,    -1,    -1,   230,   210,   211,   212,   213,   214,
     236,   216,   217,   218,   219,   241,    -1,   222,   223,   224,
     225,   226,    -1,    -1,    -1,   230,   210,   211,   212,   213,
     214,   236,   216,   217,   218,   219,   241,    -1,   222,   223,
     224,   225,   226,    -1,    -1,    -1,   230,   210,   211,   212,
     213,   214,   236,   216,   217,   218,   219,   241,    -1,   222,
     223,   224,   225,   226,    -1,    -1,    -1,   230,   210,   211,
     212,   213,   214,   236,   216,   217,   218,   219,   241,    -1,
     222,   223,   224,   225,   226,    -1,    -1,    -1,   230,   210,
     211,   212,   213,   214,   236,   216,   217,   218,   219,   241,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,   230,
     210,   211,   212,   213,   214,   236,   216,   217,   218,   219,
     241,    -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,
     230,   210,   211,   212,   213,   214,   236,   216,   217,   218,
     219,   241,    -1,   222,   223,   224,   225,   226,    -1,    -1,
      -1,   230,   210,   211,   212,   213,   214,   236,   216,   217,
     218,   219,   241,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,   210,   211,   212,   213,   214,   236,   216,
     217,   218,   219,   241,    -1,   222,   223,   224,   225,   226,
      -1,    -1,    -1,   230,   210,   211,   212,   213,   214,   236,
     216,   217,   218,   219,   241,    -1,   222,   223,   224,   225,
     226,    -1,    -1,    -1,   230,   210,   211,   212,   213,   214,
     236,   216,   217,   218,   219,   241,    -1,   222,   223,   224,
     225,   226,    -1,    -1,    -1,   230,   210,   211,   212,   213,
     214,   236,   216,   217,   218,   219,   241,    -1,   222,   223,
     224,   225,   226,    -1,    -1,    -1,   230,   210,   211,   212,
     213,   214,   236,   216,   217,   218,   219,   241,    -1,   222,
     223,   224,   225,   226,    -1,    -1,    -1,   230,   210,   211,
     212,   213,   214,   236,   216,   217,   218,   219,   241,    -1,
     222,   223,   224,   225,   226,    -1,    -1,    -1,   230,   210,
     211,   212,   213,   214,   236,   216,   217,   218,   219,   241,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,   230,
     210,   211,   212,   213,   214,   236,   216,   217,   218,   219,
     241,    -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,
     230,   210,   211,   212,   213,   214,   236,   216,   217,   218,
     219,   241,    -1,   222,   223,   224,   225,   226,    -1,    -1,
      -1,   230,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,
      -1,   240,   210,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,   236,    -1,
      -1,    -1,   240,   210,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,    -1,    -1,   222,   223,   224,   225,   226,
      -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,   236,
      -1,    -1,    -1,   240,   210,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,    -1,    -1,   222,   223,   224,   225,
     226,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
     236,    -1,    -1,    -1,   240,   210,   211,   212,   213,   214,
      -1,   216,   217,   218,   219,    -1,    -1,   222,   223,   224,
     225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,
      -1,   236,    -1,    -1,    -1,   240,   210,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,    -1,    -1,   222,   223,
     224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,
      -1,    -1,   236,    -1,    -1,    -1,   240,   210,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,    -1,    -1,   222,
     223,   224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,
      -1,    -1,    -1,   236,    -1,    -1,    -1,   240,   210,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,    -1,    -1,
     222,   223,   224,   225,   226,    -1,    -1,    -1,   230,    -1,
      -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,   240,   210,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,    -1,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,   230,
      -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,   240,
     210,   211,   212,   213,   214,    -1,   216,   217,   218,   219,
      -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,
     230,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,
     240,   210,   211,   212,   213,   214,    -1,   216,   217,   218,
     219,    -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,
      -1,   230,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,
      -1,   240,   210,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,    -1,    -1,    -1,   234,    -1,   236,   210,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,    -1,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,   230,
      -1,    -1,    -1,   234,    -1,   236,   210,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,    -1,    -1,   222,   223,
     224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,
     234,    -1,   236,   210,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,    -1,    -1,   222,   223,   224,   225,   226,
      -1,    -1,    -1,   230,    -1,    -1,    -1,   234,    -1,   236,
     210,   211,   212,   213,   214,    -1,   216,   217,   218,   219,
      -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,
     230,    -1,    -1,    -1,   234,    -1,   236,   210,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,    -1,    -1,   222,
     223,   224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,
      -1,   234,    -1,   236,   210,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,    -1,    -1,   222,   223,   224,   225,
     226,    -1,    -1,    -1,   230,    -1,    -1,    -1,   234,    -1,
     236,   210,   211,   212,   213,   214,    -1,   216,   217,   218,
     219,    -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,
      -1,   230,    -1,    -1,    -1,   234,    -1,   236,   210,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,    -1,    -1,
     222,   223,   224,   225,   226,    -1,    -1,    -1,   230,    -1,
      -1,    -1,   234,    -1,   236,   210,   211,   212,   213,   214,
      -1,   216,   217,   218,   219,    -1,    -1,   222,   223,   224,
     225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,   234,
      -1,   236,   210,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,    -1,    -1,    -1,   234,    -1,   236,   210,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,    -1,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,   230,
      -1,    -1,    -1,   234,    -1,   236,   210,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,    -1,    -1,   222,   223,
     224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,
     234,    -1,   236,   210,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,    -1,    -1,   222,   223,   224,   225,   226,
      -1,    -1,    -1,   230,    -1,    -1,    -1,   234,    -1,   236,
     210,   211,   212,   213,   214,    -1,   216,   217,   218,   219,
      -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,
     230,    -1,    -1,    -1,   234,    -1,   236,   210,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,    -1,    -1,   222,
     223,   224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,
      -1,   234,    -1,   236,   210,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,    -1,    -1,   222,   223,   224,   225,
     226,    -1,    -1,    -1,   230,    -1,    -1,    -1,   234,    -1,
     236,   210,   211,   212,   213,   214,    -1,   216,   217,   218,
     219,    -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,
      -1,   230,    -1,    -1,    -1,   234,    -1,   236,   210,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,    -1,    -1,
     222,   223,   224,   225,   226,    -1,    -1,    -1,   230,    -1,
      -1,    -1,   234,    -1,   236,   210,   211,   212,   213,   214,
      -1,   216,   217,   218,   219,    -1,    -1,   222,   223,   224,
     225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,   234,
      -1,   236,   210,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,    -1,    -1,    -1,   234,    -1,   236,   210,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,    -1,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,   230,
      -1,    -1,    -1,   234,    -1,   236,   210,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,    -1,    -1,   222,   223,
     224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,
     234,    -1,   236,   210,   211,   212,   213,   214,    -1,   216,
     217,   218,   219,    -1,    -1,   222,   223,   224,   225,   226,
      -1,    -1,    -1,   230,    -1,   232,    -1,    -1,    -1,   236,
     210,   211,   212,   213,   214,    -1,   216,   217,   218,   219,
      -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,
     230,    -1,    -1,    -1,   234,    -1,   236,   210,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,    -1,    -1,   222,
     223,   224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,
      -1,   234,    -1,   236,   210,   211,   212,   213,   214,    -1,
     216,   217,   218,   219,    -1,    -1,   222,   223,   224,   225,
     226,    -1,    -1,    -1,   230,    -1,    -1,    -1,   234,    -1,
     236,   210,   211,   212,   213,   214,    -1,   216,   217,   218,
     219,    -1,    -1,   222,   223,   224,   225,   226,    -1,    -1,
      -1,   230,    -1,    -1,    -1,   234,    -1,   236,   210,   211,
     212,   213,   214,    -1,   216,   217,   218,   219,    -1,    -1,
     222,   223,   224,   225,   226,    -1,    -1,    -1,   230,    -1,
      -1,    -1,   234,    -1,   236,   210,   211,   212,   213,   214,
      -1,   216,   217,   218,   219,    -1,    -1,   222,   223,   224,
     225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,   234,
      -1,   236,   210,   211,   212,   213,   214,    -1,   216,   217,
     218,   219,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,    -1,    -1,    -1,   234,    -1,   236,   210,
     211,   212,   213,   214,    -1,   216,   217,   218,   219,    -1,
      -1,   222,   223,   224,   225,   226,    -1,    -1,    -1,   230,
      -1,    -1,    -1,   234,    -1,   236,   210,   211,   212,   213,
     214,    -1,   216,   217,   218,   219,    -1,    -1,   222,   223,
     224,   225,   226,    -1,    -1,    -1,   230,    -1,    -1,    -1,
      -1,    -1,   236,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,    -1,    -1,   222,   223,   224,   225,   226,
     227,    -1,    -1,   230,   212,   213,   214,   234,   216,   217,
     218,   219,    -1,    -1,   222,   223,   224,   225,   226,    -1,
      -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,   236,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,    -1,
      -1,   222,   223,   224,   225,   226,   227,    -1,    -1,   230,
      -1,   232,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,    -1,    -1,   222,   223,   224,   225,   226,   227,
      -1,    -1,   230,   213,   214,   215,   216,   217,   218,   219,
      -1,    -1,   222,   223,   224,   225,   226,   227,    -1,    -1,
     230
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
#line 437 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 460 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 475 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 477 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 479 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 481 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 483 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 485 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 487 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 489 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 491 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 493 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 495 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 497 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 499 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 501 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 503 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 505 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 507 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 509 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 511 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 513 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 515 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 523 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 540 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 547 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 550 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 553 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 555 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 53:
#line 571 "GetDP.y"
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
#line 581 "GetDP.y"
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
#line 591 "GetDP.y"
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
#line 619 "GetDP.y"
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
#line 628 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = yyvsp[-7].i ; 
    ;
    break;}
case 58:
#line 635 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ;
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 59:
#line 645 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 60:
#line 650 "GetDP.y"
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
#line 662 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 62:
#line 671 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 63:
#line 682 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 64:
#line 687 "GetDP.y"
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
#line 724 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 66:
#line 727 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 67:
#line 739 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 68:
#line 741 "GetDP.y"
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
#line 757 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 70:
#line 760 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 71:
#line 763 "GetDP.y"
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
#line 814 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 73:
#line 827 "GetDP.y"
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
#line 851 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 75:
#line 858 "GetDP.y"
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
#line 871 "GetDP.y"
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
#line 889 "GetDP.y"
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
#line 912 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 79:
#line 916 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 80:
#line 925 "GetDP.y"
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
#line 939 "GetDP.y"
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
#line 973 "GetDP.y"
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
#line 986 "GetDP.y"
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
#line 1010 "GetDP.y"
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
#line 1020 "GetDP.y"
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
#line 1042 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 90:
#line 1047 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 91:
#line 1048 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 92:
#line 1053 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 96:
#line 1072 "GetDP.y"
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
#line 1092 "GetDP.y"
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
#line 1143 "GetDP.y"
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
#line 1163 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 102:
#line 1169 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 103:
#line 1175 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 104:
#line 1178 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 105:
#line 1185 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 107:
#line 1196 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1199 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 109:
#line 1205 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 110:
#line 1209 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 112:
#line 1221 "GetDP.y"
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
#line 1234 "GetDP.y"
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
#line 1248 "GetDP.y"
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
#line 1263 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1269 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1275 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1281 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1287 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1293 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1299 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1305 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1311 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1317 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1323 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1329 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1335 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1341 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1347 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1353 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1359 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 132:
#line 1366 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 134:
#line 1374 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 136:
#line 1387 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1393 "GetDP.y"
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
#line 1467 "GetDP.y"
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
#line 1501 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 140:
#line 1510 "GetDP.y"
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
#line 1522 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 142:
#line 1524 "GetDP.y"
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
#line 1535 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 144:
#line 1537 "GetDP.y"
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
#line 1551 "GetDP.y"
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
#line 1563 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1569 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1575 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 149:
#line 1577 "GetDP.y"
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
#line 1606 "GetDP.y"
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
#line 1630 "GetDP.y"
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
#line 1643 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1649 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1656 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1662 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1669 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1676 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1687 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 159:
#line 1688 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 160:
#line 1689 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 161:
#line 1694 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 162:
#line 1695 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 163:
#line 1701 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 164:
#line 1704 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 165:
#line 1707 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 166:
#line 1723 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 167:
#line 1728 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 168:
#line 1735 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 170:
#line 1744 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 171:
#line 1749 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 172:
#line 1756 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 173:
#line 1759 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 174:
#line 1766 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 176:
#line 1776 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 177:
#line 1779 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 178:
#line 1782 "GetDP.y"
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
#line 1820 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 180:
#line 1826 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 181:
#line 1833 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 183:
#line 1846 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 184:
#line 1853 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 185:
#line 1856 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 186:
#line 1863 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 187:
#line 1866 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 188:
#line 1873 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 190:
#line 1885 "GetDP.y"
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
#line 1895 "GetDP.y"
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
#line 1905 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 193:
#line 1912 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 194:
#line 1915 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 195:
#line 1922 "GetDP.y"
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
#line 1938 "GetDP.y"
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
#line 1986 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 199:
#line 1989 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 200:
#line 1992 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1995 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 1998 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 203:
#line 2009 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 205:
#line 2019 "GetDP.y"
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
#line 2044 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 209:
#line 2058 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 210:
#line 2064 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 211:
#line 2071 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 212:
#line 2080 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2083 "GetDP.y"
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
#line 2105 "GetDP.y"
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
#line 2120 "GetDP.y"
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
#line 2144 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 218:
#line 2158 "GetDP.y"
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
#line 2168 "GetDP.y"
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
#line 2192 "GetDP.y"
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
#line 2217 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 222:
#line 2222 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 223:
#line 2230 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 224:
#line 2238 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 225:
#line 2248 "GetDP.y"
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
#line 2265 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 227:
#line 2273 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 228:
#line 2280 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 229:
#line 2287 "GetDP.y"
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
#line 2296 "GetDP.y"
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
#line 2305 "GetDP.y"
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
#line 2314 "GetDP.y"
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
#line 2335 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 235:
#line 2346 "GetDP.y"
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
#line 2373 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 239:
#line 2386 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 240:
#line 2392 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 241:
#line 2399 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 242:
#line 2408 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 243:
#line 2411 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 244:
#line 2414 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 245:
#line 2417 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 246:
#line 2424 "GetDP.y"
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
#line 2440 "GetDP.y"
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
#line 2489 "GetDP.y"
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
#line 2509 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 251:
#line 2512 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 252:
#line 2517 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 253:
#line 2522 "GetDP.y"
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
#line 2536 "GetDP.y"
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
#line 2556 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 256:
#line 2561 "GetDP.y"
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
#line 2585 "GetDP.y"
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
#line 2645 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 260:
#line 2648 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 261:
#line 2657 "GetDP.y"
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
#line 2723 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 263:
#line 2727 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 264:
#line 2734 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 266:
#line 2743 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 267:
#line 2748 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 268:
#line 2751 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 269:
#line 2758 "GetDP.y"
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
#line 2774 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 271:
#line 2780 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 272:
#line 2783 "GetDP.y"
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
#line 2802 "GetDP.y"
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
#line 2814 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 275:
#line 2820 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 276:
#line 2823 "GetDP.y"
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
#line 2838 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 278:
#line 2842 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 279:
#line 2851 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 281:
#line 2862 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 282:
#line 2867 "GetDP.y"
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
#line 2877 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 284:
#line 2890 "GetDP.y"
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
#line 2905 "GetDP.y"
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
#line 2979 "GetDP.y"
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
#line 2995 "GetDP.y"
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
#line 3027 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 290:
#line 3030 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 291:
#line 3033 "GetDP.y"
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
#line 3079 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 294:
#line 3089 "GetDP.y"
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
#line 3115 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 298:
#line 3127 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 299:
#line 3133 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 300:
#line 3140 "GetDP.y"
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
#line 3152 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 303:
#line 3158 "GetDP.y"
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
#line 3172 "GetDP.y"
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
#line 3190 "GetDP.y"
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
#line 3212 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 308:
#line 3215 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 309:
#line 3219 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 310:
#line 3222 "GetDP.y"
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
#line 3232 "GetDP.y"
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
#line 3271 "GetDP.y"
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
#line 3295 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 314:
#line 3300 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 315:
#line 3306 "GetDP.y"
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
case 316:
#line 3617 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 317:
#line 3622 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 318:
#line 3631 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 319:
#line 3640 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 320:
#line 3649 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 322:
#line 3657 "GetDP.y"
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
#line 3697 "GetDP.y"
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
#line 3712 "GetDP.y"
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
#line 3740 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 326:
#line 3743 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 327:
#line 3746 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 328:
#line 3749 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 329:
#line 3756 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 331:
#line 3767 "GetDP.y"
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
#line 3777 "GetDP.y"
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
#line 3787 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 334:
#line 3801 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 336:
#line 3813 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 337:
#line 3815 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 338:
#line 3817 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 339:
#line 3819 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 340:
#line 3827 "GetDP.y"
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
#line 3851 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 343:
#line 3859 "GetDP.y"
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
#line 3938 "GetDP.y"
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
#line 3984 "GetDP.y"
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
#line 4008 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 347:
#line 4017 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 348:
#line 4026 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 349:
#line 4035 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 350:
#line 4047 "GetDP.y"
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
#line 4076 "GetDP.y"
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
#line 4100 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 354:
#line 4108 "GetDP.y"
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
#line 4163 "GetDP.y"
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
#line 4180 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 357:
#line 4181 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 358:
#line 4182 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 359:
#line 4183 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 360:
#line 4184 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 361:
#line 4185 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 362:
#line 4186 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 363:
#line 4187 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 364:
#line 4194 "GetDP.y"
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
#line 4215 "GetDP.y"
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
#line 4239 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 368:
#line 4249 "GetDP.y"
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
#line 4274 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 372:
#line 4286 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 373:
#line 4293 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 374:
#line 4300 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 375:
#line 4303 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 376:
#line 4305 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 377:
#line 4311 "GetDP.y"
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
#line 4326 "GetDP.y"
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
#line 4345 "GetDP.y"
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
#line 4365 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 382:
#line 4368 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 383:
#line 4377 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 384:
#line 4380 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 385:
#line 4385 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 386:
#line 4390 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 387:
#line 4395 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 388:
#line 4400 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 389:
#line 4409 "GetDP.y"
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
#line 4446 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 391:
#line 4453 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 392:
#line 4456 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 393:
#line 4468 "GetDP.y"
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
#line 4478 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 395:
#line 4484 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 396:
#line 4487 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 397:
#line 4499 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 398:
#line 4507 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 399:
#line 4518 "GetDP.y"
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
#line 4540 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 401:
#line 4547 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 402:
#line 4553 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 403:
#line 4559 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 404:
#line 4565 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 405:
#line 4573 "GetDP.y"
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
#line 4595 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 407:
#line 4602 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 408:
#line 4608 "GetDP.y"
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
#line 4619 "GetDP.y"
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
#line 4630 "GetDP.y"
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
#line 4643 "GetDP.y"
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
#line 4658 "GetDP.y"
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
case 413:
#line 4674 "GetDP.y"
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
case 414:
#line 4694 "GetDP.y"
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
case 415:
#line 4715 "GetDP.y"
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
case 416:
#line 4727 "GetDP.y"
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
case 417:
#line 4747 "GetDP.y"
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
case 418:
#line 4764 "GetDP.y"
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
case 419:
#line 4783 "GetDP.y"
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
case 420:
#line 4805 "GetDP.y"
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
case 421:
#line 4839 "GetDP.y"
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
case 422:
#line 4852 "GetDP.y"
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
case 423:
#line 4866 "GetDP.y"
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
case 424:
#line 4879 "GetDP.y"
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
case 425:
#line 4891 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 427:
#line 4900 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 429:
#line 4909 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 430:
#line 4919 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 431:
#line 4929 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 432:
#line 4937 "GetDP.y"
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
case 433:
#line 4950 "GetDP.y"
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
case 434:
#line 4963 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
      Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 435:
#line 4972 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 436:
#line 4981 "GetDP.y"
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
case 437:
#line 4995 "GetDP.y"
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
case 438:
#line 5009 "GetDP.y"
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
case 439:
#line 5023 "GetDP.y"
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
case 440:
#line 5038 "GetDP.y"
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
case 441:
#line 5055 "GetDP.y"
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
case 442:
#line 5069 "GetDP.y"
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
case 443:
#line 5088 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 444:
#line 5093 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 445:
#line 5103 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 447:
#line 5113 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 448:
#line 5116 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 449:
#line 5126 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 450:
#line 5142 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 452:
#line 5158 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 453:
#line 5162 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 454:
#line 5166 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 455:
#line 5170 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 456:
#line 5175 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 457:
#line 5186 "GetDP.y"
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
case 459:
#line 5203 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 460:
#line 5207 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 461:
#line 5211 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 462:
#line 5215 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 463:
#line 5219 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 464:
#line 5224 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 465:
#line 5235 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 467:
#line 5250 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 468:
#line 5254 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 469:
#line 5258 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 470:
#line 5262 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 471:
#line 5266 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 472:
#line 5277 "GetDP.y"
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
case 474:
#line 5295 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 475:
#line 5299 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 476:
#line 5303 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 477:
#line 5307 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 478:
#line 5312 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 479:
#line 5322 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 480:
#line 5328 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 481:
#line 5334 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 482:
#line 5344 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 483:
#line 5347 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 484:
#line 5352 "GetDP.y"
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
case 486:
#line 5370 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 487:
#line 5380 "GetDP.y"
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
case 488:
#line 5409 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 489:
#line 5412 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 490:
#line 5415 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 491:
#line 5423 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 492:
#line 5440 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 494:
#line 5452 "GetDP.y"
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
case 496:
#line 5475 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 498:
#line 5489 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 499:
#line 5496 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 500:
#line 5504 "GetDP.y"
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
case 501:
#line 5550 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 502:
#line 5555 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 503:
#line 5561 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 504:
#line 5564 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 505:
#line 5569 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 507:
#line 5580 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 508:
#line 5583 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 509:
#line 5589 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 510:
#line 5594 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 511:
#line 5600 "GetDP.y"
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
case 512:
#line 5614 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 514:
#line 5628 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 515:
#line 5635 "GetDP.y"
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
case 516:
#line 5663 "GetDP.y"
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
case 517:
#line 5673 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 518:
#line 5674 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 519:
#line 5680 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 520:
#line 5689 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 521:
#line 5706 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 523:
#line 5718 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 525:
#line 5725 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 527:
#line 5737 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 528:
#line 5744 "GetDP.y"
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
case 529:
#line 5756 "GetDP.y"
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
case 530:
#line 5767 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 531:
#line 5772 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 532:
#line 5778 "GetDP.y"
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
case 533:
#line 5795 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 534:
#line 5805 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 535:
#line 5808 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 536:
#line 5812 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 537:
#line 5823 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 538:
#line 5827 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 539:
#line 5831 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 540:
#line 5837 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
    ;
    break;}
case 541:
#line 5843 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 542:
#line 5848 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 543:
#line 5852 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 544:
#line 5861 "GetDP.y"
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
case 545:
#line 5873 "GetDP.y"
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
case 546:
#line 5896 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 547:
#line 5897 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 548:
#line 5898 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 549:
#line 5899 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 550:
#line 5905 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 551:
#line 5907 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 552:
#line 5913 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 553:
#line 5919 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 554:
#line 5926 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 555:
#line 5935 "GetDP.y"
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
case 556:
#line 5957 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 557:
#line 5965 "GetDP.y"
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
case 558:
#line 5976 "GetDP.y"
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
case 559:
#line 5990 "GetDP.y"
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
case 560:
#line 6011 "GetDP.y"
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
case 561:
#line 6038 "GetDP.y"
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
case 562:
#line 6069 "GetDP.y"
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
case 563:
#line 6089 "GetDP.y"
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
case 565:
#line 6116 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 566:
#line 6123 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 567:
#line 6130 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 568:
#line 6137 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 569:
#line 6141 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 570:
#line 6145 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 571:
#line 6149 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 572:
#line 6153 "GetDP.y"
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
case 573:
#line 6163 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 574:
#line 6168 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 575:
#line 6173 "GetDP.y"
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
case 576:
#line 6193 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 577:
#line 6200 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 578:
#line 6209 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 579:
#line 6218 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 580:
#line 6227 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 581:
#line 6234 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 582:
#line 6242 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 583:
#line 6246 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 584:
#line 6255 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 585:
#line 6259 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 586:
#line 6263 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 587:
#line 6271 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 588:
#line 6277 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 589:
#line 6286 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 590:
#line 6292 "GetDP.y"
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
case 591:
#line 6340 "GetDP.y"
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
case 592:
#line 6355 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 593:
#line 6361 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 594:
#line 6367 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 597:
#line 6380 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 598:
#line 6386 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 599:
#line 6392 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 600:
#line 6403 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 601:
#line 6404 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 602:
#line 6405 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 603:
#line 6406 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 604:
#line 6407 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 605:
#line 6408 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 606:
#line 6409 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 607:
#line 6410 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 608:
#line 6411 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 609:
#line 6412 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 610:
#line 6413 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 611:
#line 6414 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 612:
#line 6415 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 613:
#line 6416 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 614:
#line 6417 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 615:
#line 6418 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 616:
#line 6419 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 617:
#line 6420 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 618:
#line 6421 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 619:
#line 6422 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 620:
#line 6423 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 621:
#line 6427 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 622:
#line 6428 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 623:
#line 6429 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 624:
#line 6430 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 625:
#line 6431 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 626:
#line 6432 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 627:
#line 6433 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 628:
#line 6434 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 629:
#line 6435 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 630:
#line 6436 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 631:
#line 6437 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 632:
#line 6438 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 633:
#line 6439 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 634:
#line 6440 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 635:
#line 6441 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 636:
#line 6442 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 637:
#line 6443 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 638:
#line 6444 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 639:
#line 6445 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 640:
#line 6446 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 641:
#line 6447 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 642:
#line 6448 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 643:
#line 6449 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 644:
#line 6450 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 645:
#line 6451 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 646:
#line 6452 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 647:
#line 6453 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 648:
#line 6454 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 649:
#line 6455 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 650:
#line 6456 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 651:
#line 6457 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 652:
#line 6458 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 653:
#line 6459 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 654:
#line 6460 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 655:
#line 6461 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 656:
#line 6462 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 657:
#line 6463 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 658:
#line 6464 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 659:
#line 6465 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 660:
#line 6466 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 661:
#line 6471 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 662:
#line 6472 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 663:
#line 6473 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 664:
#line 6474 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 665:
#line 6475 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 666:
#line 6476 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 667:
#line 6477 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 668:
#line 6479 "GetDP.y"
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
case 669:
#line 6497 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 670:
#line 6500 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 671:
#line 6506 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 672:
#line 6509 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 673:
#line 6516 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 674:
#line 6522 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 675:
#line 6525 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 676:
#line 6528 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 677:
#line 6540 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 678:
#line 6546 "GetDP.y"
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
case 679:
#line 6557 "GetDP.y"
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
case 680:
#line 6573 "GetDP.y"
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
case 681:
#line 6595 "GetDP.y"
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
case 682:
#line 6610 "GetDP.y"
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
case 683:
#line 6648 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 684:
#line 6656 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 685:
#line 6668 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 686:
#line 6671 "GetDP.y"
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
case 687:
#line 6685 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 688:
#line 6689 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 689:
#line 6706 "GetDP.y"
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
#line 6717 "GetDP.y"



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


