
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
#define	tPrintf	264
#define	tFor	265
#define	tEndFor	266
#define	tInclude	267
#define	tConstant	268
#define	tList	269
#define	tListAlt	270
#define	tLinSpace	271
#define	tLogSpace	272
#define	tDefineConstant	273
#define	tPi	274
#define	t0D	275
#define	t1D	276
#define	t2D	277
#define	t3D	278
#define	tExp	279
#define	tLog	280
#define	tLog10	281
#define	tSqrt	282
#define	tSin	283
#define	tAsin	284
#define	tCos	285
#define	tAcos	286
#define	tTan	287
#define	tAtan	288
#define	tAtan2	289
#define	tSinh	290
#define	tCosh	291
#define	tTanh	292
#define	tFabs	293
#define	tFloor	294
#define	tCeil	295
#define	tFmod	296
#define	tModulo	297
#define	tHypot	298
#define	tSolidAngle	299
#define	tTrace	300
#define	tOrder	301
#define	tCrossProduct	302
#define	tMHTransform	303
#define	tMHJacNL	304
#define	tGroup	305
#define	tDefineGroup	306
#define	tAll	307
#define	tInSupport	308
#define	tMovingBand2D	309
#define	tDefineFunction	310
#define	tConstraint	311
#define	tRegion	312
#define	tSubRegion	313
#define	tRegionRef	314
#define	tSubRegionRef	315
#define	tFilter	316
#define	tCoefficient	317
#define	tValue	318
#define	tTimeFunction	319
#define	tBranch	320
#define	tNode	321
#define	tLoop	322
#define	tNameOfResolution	323
#define	tJacobian	324
#define	tCase	325
#define	tIntegration	326
#define	tFMMIntegration	327
#define	tMatrix	328
#define	tType	329
#define	tSubType	330
#define	tCriterion	331
#define	tGeoElement	332
#define	tNumberOfPoints	333
#define	tMaxNumberOfPoints	334
#define	tNumberOfDivisions	335
#define	tMaxNumberOfDivisions	336
#define	tStoppingCriterion	337
#define	tFunctionSpace	338
#define	tName	339
#define	tBasisFunction	340
#define	tNameOfCoef	341
#define	tFunction	342
#define	tdFunction	343
#define	tSubFunction	344
#define	tSubdFunction	345
#define	tSupport	346
#define	tEntity	347
#define	tSubSpace	348
#define	tNameOfBasisFunction	349
#define	tGlobalQuantity	350
#define	tEntityType	351
#define	tEntitySubType	352
#define	tNameOfConstraint	353
#define	tFormulation	354
#define	tQuantity	355
#define	tNameOfSpace	356
#define	tIndexOfSystem	357
#define	tSymmetry	358
#define	tEquation	359
#define	tGalerkin	360
#define	tdeRham	361
#define	tGlobalTerm	362
#define	tGlobalEquation	363
#define	tDt	364
#define	tDtDof	365
#define	tDtDt	366
#define	tDtDtDof	367
#define	tJacNL	368
#define	tNeverDt	369
#define	tDtNL	370
#define	tIn	371
#define	tResolution	372
#define	tDefineSystem	373
#define	tNameOfFormulation	374
#define	tNameOfMesh	375
#define	tFrequency	376
#define	tSolver	377
#define	tOriginSystem	378
#define	tDestinationSystem	379
#define	tOperation	380
#define	tOperationEnd	381
#define	tSetTime	382
#define	tDTime	383
#define	tSetFrequency	384
#define	tFourierTransform	385
#define	tFourierTransformJ	386
#define	tIf	387
#define	tElse	388
#define	tLanczos	389
#define	tPerturbation	390
#define	tUpdate	391
#define	tUpdateConstraint	392
#define	tBreak	393
#define	tTimeLoopTheta	394
#define	tTime0	395
#define	tTimeMax	396
#define	tTheta	397
#define	tTimeLoopNewmark	398
#define	tBeta	399
#define	tGamma	400
#define	tIterativeLoop	401
#define	tNbrMaxIteration	402
#define	tRelaxationFactor	403
#define	tIterativeTimeReduction	404
#define	tDivisionCoefficient	405
#define	tChangeOfState	406
#define	tChangeOfCoordinates	407
#define	tSystemCommand	408
#define	tGenerateFMMGroups	409
#define	tGenerateOnly	410
#define	tGenerateOnlyJac	411
#define	tSolveJac_AdaptRelax	412
#define	tSaveSolutionExtendedMH	413
#define	tInit_MovingBand2D	414
#define	tMesh_MovingBand2D	415
#define	tGenerate_MH_Moving	416
#define	tGenerateGroup	417
#define	tGenerateJacGroup	418
#define	tSaveMesh	419
#define	tDeformeMesh	420
#define	tPostProcessing	421
#define	tNameOfSystem	422
#define	tPostOperation	423
#define	tNameOfPostProcessing	424
#define	tUsingPost	425
#define	tAppend	426
#define	tPlot	427
#define	tPrint	428
#define	tPrintGroup	429
#define	tEcho	430
#define	tWrite	431
#define	tAdapt	432
#define	tOnGlobal	433
#define	tOnRegion	434
#define	tOnElementsOf	435
#define	tOnGrid	436
#define	tOnSection	437
#define	tOnPoint	438
#define	tOnLine	439
#define	tOnPlane	440
#define	tOnBox	441
#define	tWithArgument	442
#define	tFile	443
#define	tDepth	444
#define	tDimension	445
#define	tTimeStep	446
#define	tHarmonicToTime	447
#define	tFormat	448
#define	tHeader	449
#define	tFooter	450
#define	tSkin	451
#define	tSmoothing	452
#define	tTarget	453
#define	tSort	454
#define	tIso	455
#define	tNoNewLine	456
#define	tDecomposeInSimplex	457
#define	tChangeOfValues	458
#define	tStr	459
#define	tDate	460
#define	tFlag	461
#define	tHelp	462
#define	tCpu	463
#define	tCheck	464
#define	tDEF	465
#define	tOR	466
#define	tAND	467
#define	tEQUAL	468
#define	tNOTEQUAL	469
#define	tAPPROXEQUAL	470
#define	tLESSOREQUAL	471
#define	tGREATEROREQUAL	472
#define	tLESSLESS	473
#define	tGREATERGREATER	474
#define	tCROSSPRODUCT	475
#define	UNARYPREC	476
#define	tSHOW	477

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.61 2004-01-08 20:02:30 geuzaine Exp $ */
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
void Help(char *topic) ;
int  Print_ListOfDouble(char *format, List_T *list, char *buffer) ;

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



#define	YYFINAL		1850
#define	YYFLAG		-32768
#define	YYNTBASE	244

#define YYTRANSLATE(x) ((unsigned)(x) <= 477 ? yytranslate[x] : 434)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   230,     2,   238,   239,   228,     2,     2,   233,
   234,   226,   224,   243,   225,   237,   227,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   218,
     2,   220,   212,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   235,     2,   236,   232,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   241,     2,   242,     2,     2,     2,     2,     2,
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
   207,   208,   209,   210,   211,   213,   214,   215,   216,   217,
   219,   221,   222,   223,   229,   231,   240
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   152,   156,   161,   167,   168,   175,   181,
   183,   185,   187,   194,   203,   205,   206,   207,   226,   227,
   228,   236,   239,   241,   244,   246,   248,   250,   252,   253,
   257,   262,   264,   266,   270,   271,   275,   280,   282,   286,
   292,   294,   299,   303,   304,   308,   315,   316,   318,   323,
   324,   327,   331,   332,   335,   341,   348,   356,   358,   359,
   363,   368,   373,   374,   377,   378,   382,   384,   388,   389,
   392,   394,   395,   396,   404,   408,   412,   419,   423,   427,
   431,   435,   439,   443,   447,   451,   455,   459,   463,   467,
   471,   475,   478,   481,   484,   488,   490,   494,   497,   499,
   502,   503,   509,   510,   522,   532,   537,   542,   543,   551,
   558,   561,   564,   567,   570,   574,   577,   581,   585,   588,
   592,   594,   598,   599,   603,   610,   611,   616,   617,   620,
   624,   629,   630,   635,   636,   639,   643,   647,   652,   653,
   658,   659,   662,   666,   670,   675,   676,   681,   682,   685,
   689,   693,   698,   699,   704,   705,   708,   712,   716,   720,
   724,   728,   732,   733,   736,   740,   742,   743,   746,   750,
   755,   759,   764,   770,   771,   776,   777,   780,   784,   788,
   792,   796,   800,   804,   812,   816,   820,   824,   828,   832,
   840,   848,   856,   857,   860,   864,   866,   867,   870,   874,
   879,   883,   888,   893,   898,   903,   904,   909,   910,   913,
   917,   921,   926,   931,   939,   943,   947,   951,   955,   956,
   957,   958,   977,   978,   983,   984,   987,   991,   995,   999,
  1001,  1005,  1006,  1010,  1012,  1016,  1017,  1021,  1022,  1027,
  1028,  1031,  1035,  1039,  1043,  1044,  1049,  1050,  1053,  1057,
  1061,  1065,  1070,  1071,  1074,  1078,  1080,  1081,  1084,  1088,
  1093,  1097,  1102,  1107,  1108,  1113,  1114,  1117,  1121,  1125,
  1129,  1133,  1134,  1141,  1145,  1146,  1152,  1156,  1160,  1164,
  1168,  1172,  1173,  1177,  1178,  1181,  1186,  1191,  1196,  1201,
  1202,  1205,  1209,  1213,  1217,  1218,  1221,  1225,  1229,  1233,
  1237,  1238,  1241,  1242,  1243,  1253,  1257,  1261,  1265,  1269,
  1275,  1276,  1279,  1283,  1284,  1285,  1295,  1296,  1298,  1300,
  1302,  1304,  1306,  1308,  1310,  1315,  1319,  1320,  1323,  1327,
  1329,  1330,  1333,  1337,  1342,  1347,  1348,  1354,  1355,  1360,
  1361,  1364,  1368,  1372,  1376,  1380,  1384,  1388,  1392,  1396,
  1399,  1403,  1404,  1408,  1410,  1414,  1415,  1419,  1420,  1423,
  1427,  1431,  1436,  1441,  1446,  1451,  1457,  1463,  1466,  1474,
  1486,  1494,  1508,  1520,  1528,  1536,  1544,  1554,  1564,  1574,
  1586,  1604,  1618,  1634,  1646,  1660,  1661,  1669,  1670,  1678,
  1686,  1692,  1698,  1708,  1718,  1724,  1730,  1744,  1754,  1767,
  1778,  1793,  1801,  1809,  1811,  1813,  1814,  1817,  1821,  1825,
  1828,  1829,  1832,  1836,  1840,  1844,  1848,  1853,  1854,  1857,
  1861,  1865,  1869,  1873,  1877,  1882,  1883,  1886,  1890,  1894,
  1898,  1902,  1907,  1908,  1911,  1915,  1919,  1923,  1927,  1931,
  1936,  1941,  1946,  1947,  1952,  1953,  1956,  1960,  1964,  1968,
  1972,  1976,  1980,  1981,  1984,  1988,  1990,  1991,  1994,  1998,
  2003,  2008,  2012,  2017,  2018,  2023,  2024,  2027,  2031,  2036,
  2037,  2043,  2049,  2050,  2053,  2054,  2061,  2065,  2066,  2071,
  2075,  2079,  2080,  2083,  2087,  2089,  2090,  2093,  2097,  2101,
  2105,  2109,  2114,  2115,  2124,  2125,  2126,  2130,  2138,  2146,
  2155,  2167,  2168,  2179,  2186,  2190,  2197,  2199,  2201,  2203,
  2205,  2206,  2210,  2212,  2215,  2218,  2231,  2234,  2250,  2255,
  2268,  2286,  2309,  2322,  2323,  2326,  2330,  2335,  2340,  2344,
  2347,  2350,  2354,  2358,  2362,  2366,  2370,  2374,  2378,  2382,
  2386,  2390,  2394,  2398,  2404,  2407,  2410,  2414,  2424,  2428,
  2429,  2432,  2437,  2442,  2450,  2455,  2461,  2467,  2475,  2476,
  2480,  2486,  2492,  2494,  2496,  2498,  2500,  2502,  2504,  2506,
  2508,  2510,  2512,  2514,  2516,  2518,  2520,  2522,  2524,  2526,
  2528,  2530,  2532,  2534,  2536,  2540,  2543,  2546,  2550,  2554,
  2558,  2562,  2566,  2570,  2574,  2578,  2582,  2586,  2590,  2594,
  2598,  2602,  2607,  2612,  2617,  2622,  2627,  2632,  2637,  2642,
  2647,  2652,  2659,  2664,  2669,  2674,  2679,  2684,  2689,  2696,
  2703,  2710,  2716,  2719,  2721,  2723,  2725,  2727,  2729,  2731,
  2733,  2735,  2736,  2738,  2740,  2744,  2746,  2748,  2752,  2756,
  2760,  2766,  2770,  2775,  2780,  2787,  2796,  2805,  2807,  2809,
  2811,  2813
};

static const short yyrhs[] = {    -1,
   245,   246,     0,     0,     0,   246,   247,   248,     0,    51,
   241,   251,   242,     0,    88,   241,   275,   242,     0,    57,
   241,   309,   242,     0,    70,   241,   294,   242,     0,    72,
   241,   300,   242,     0,    84,   241,   316,   242,     0,   100,
   241,   339,   242,     0,   118,   241,   365,   242,     0,   167,
   241,   395,   242,     0,   169,   241,   407,   242,     0,   411,
     0,   424,     0,    13,   432,     0,   249,     0,   208,     7,
     0,   208,   174,     7,     0,   208,   210,     7,     0,   208,
    26,     7,     0,   208,   209,     7,     0,   208,   208,     7,
     0,   208,     5,     7,     0,   209,     7,     0,   210,     7,
     0,   210,    51,     7,     0,   210,    88,     7,     0,   210,
    57,     7,     0,   210,    70,     7,     0,   210,    72,     7,
     0,   210,    84,     7,     0,   210,   100,     7,     0,   210,
   118,     7,     0,   210,   167,     7,     0,   210,   169,     7,
     0,   210,     3,     7,     0,     0,   250,   415,     0,     0,
     0,   251,   252,   253,     0,     5,   211,   259,     7,     0,
     5,   274,   211,   259,     7,     0,     0,     5,   272,   211,
   254,   259,     7,     0,    52,   235,   270,   236,     7,     0,
   256,     0,   424,     0,   255,     0,    11,   233,   427,     8,
   427,   234,     0,    11,   233,   427,     8,   427,     8,   427,
   234,     0,    12,     0,     0,     0,     5,   235,     3,   236,
   211,    55,   257,   235,   238,   267,   258,   243,   238,   267,
   243,   427,   236,     7,     0,     0,     0,   263,   235,   260,
   264,   261,   265,   236,     0,   238,   267,     0,   259,     0,
     5,   273,     0,    58,     0,     5,     0,   267,     0,    53,
     0,     0,   271,   266,   267,     0,   271,    54,     5,   273,
     0,     5,     0,   269,     0,   241,   268,   242,     0,     0,
   268,   271,   269,     0,   268,   271,   225,   269,     0,     3,
     0,     3,     8,   427,     0,     3,     8,     3,     8,   427,
     0,     5,     0,     5,   241,   427,   242,     0,     5,   241,
   242,     0,     0,   270,   271,     5,     0,   270,   271,     5,
   241,   427,   242,     0,     0,   243,     0,   241,   238,   427,
   242,     0,     0,   241,   242,     0,   241,   427,   242,     0,
     0,   275,   276,     0,    56,   235,   277,   236,     7,     0,
     5,   235,   236,   211,   278,     7,     0,     5,   235,   262,
   236,   211,   278,     7,     0,   424,     0,     0,   277,   271,
     5,     0,    14,   235,   427,   236,     0,    88,   235,     5,
   236,     0,     0,   279,   282,     0,     0,   241,   281,   242,
     0,   278,     0,   281,   243,   278,     0,     0,   283,   284,
     0,   287,     0,     0,     0,   284,   212,   285,   284,     8,
   286,   284,     0,   284,   226,   284,     0,   284,   229,   284,
     0,    48,   235,   284,   243,   284,   236,     0,   284,   227,
   284,     0,   284,   224,   284,     0,   284,   225,   284,     0,
   284,   228,   284,     0,   284,   232,   284,     0,   284,   218,
   284,     0,   284,   220,   284,     0,   284,   219,   284,     0,
   284,   221,   284,     0,   284,   215,   284,     0,   284,   216,
   284,     0,   284,   217,   284,     0,   284,   214,   284,     0,
   284,   213,   284,     0,   225,   284,     0,   224,   284,     0,
   230,   284,     0,   233,   284,   234,     0,   428,     0,   426,
   291,   293,     0,     5,   364,     0,   364,     0,   364,   291,
     0,     0,   110,   288,   235,   282,   236,     0,     0,    49,
   235,     5,   235,   289,   282,   236,   236,   241,   427,   242,
     0,    50,   235,     5,   236,   241,   427,   243,   427,   242,
     0,    45,   235,   364,   236,     0,    47,   235,   364,   236,
     0,     0,    46,   290,   235,   282,   243,   262,   236,     0,
   218,     5,   220,   235,   282,   236,     0,   239,     5,     0,
   239,   192,     0,   239,   129,     0,   239,     3,     0,   287,
   238,     3,     0,   238,     3,     0,   287,   240,     3,     0,
   235,   237,   236,     0,   235,   236,     0,   235,   292,   236,
     0,   284,     0,   292,   243,   284,     0,     0,   241,   430,
   242,     0,   241,    58,   235,   262,   236,   242,     0,     0,
   294,   241,   295,   242,     0,     0,   295,   296,     0,    85,
     5,     7,     0,    71,   241,   297,   242,     0,     0,   297,
   241,   298,   242,     0,     0,   298,   299,     0,    58,   262,
     7,     0,    58,    53,     7,     0,    70,     5,   293,     7,
     0,     0,   300,   241,   301,   242,     0,     0,   301,   302,
     0,    85,     5,     7,     0,    77,   278,     7,     0,    71,
   241,   303,   242,     0,     0,   303,   241,   304,   242,     0,
     0,   304,   305,     0,    75,     5,     7,     0,    76,     5,
     7,     0,    71,   241,   306,   242,     0,     0,   306,   241,
   307,   242,     0,     0,   307,   308,     0,    78,     5,     7,
     0,    79,   427,     7,     0,    80,   427,     7,     0,    81,
   427,     7,     0,    82,   427,     7,     0,    83,   427,     7,
     0,     0,   309,   310,     0,   241,   311,   242,     0,   424,
     0,     0,   311,   312,     0,    85,     5,     7,     0,    85,
     5,   272,     7,     0,    75,     5,     7,     0,    71,   241,
   313,   242,     0,    71,     5,   241,   313,   242,     0,     0,
   313,   241,   314,   242,     0,     0,   314,   315,     0,    75,
     5,     7,     0,    58,   262,     7,     0,    59,   262,     7,
     0,    65,   278,     7,     0,    64,   278,     7,     0,    69,
     5,     7,     0,    66,   241,     3,   271,     3,   242,     7,
     0,    60,   262,     7,     0,    61,   262,     7,     0,    88,
   278,     7,     0,    63,   278,     7,     0,    62,   278,     7,
     0,    88,   235,   278,   243,   278,   236,     7,     0,    63,
   235,   278,   243,   278,   236,     7,     0,    62,   235,   278,
   243,   278,   236,     7,     0,     0,   316,   317,     0,   241,
   318,   242,     0,   424,     0,     0,   318,   319,     0,    85,
     5,     7,     0,    85,     5,   272,     7,     0,    75,     5,
     7,     0,    86,   241,   320,   242,     0,    94,   241,   326,
   242,     0,    96,   241,   333,   242,     0,    57,   241,   336,
   242,     0,     0,   320,   241,   321,   242,     0,     0,   321,
   322,     0,    85,     5,     7,     0,    87,     5,     7,     0,
    87,     5,   272,     7,     0,    88,     5,   323,     7,     0,
    89,   241,     5,   271,     5,   242,     7,     0,    90,   280,
     7,     0,    91,   280,     7,     0,    92,   262,     7,     0,
    93,   262,     7,     0,     0,     0,     0,   241,   101,     5,
     7,   100,     5,   272,     7,   324,    51,   262,     7,   325,
   118,     5,   273,     7,   242,     0,     0,   326,   241,   327,
   242,     0,     0,   327,   328,     0,    85,     5,     7,     0,
    95,   329,     7,     0,    87,   331,     7,     0,     5,     0,
   241,   330,   242,     0,     0,   330,   271,     5,     0,     5,
     0,   241,   332,   242,     0,     0,   332,   271,     5,     0,
     0,   333,   241,   334,   242,     0,     0,   334,   335,     0,
    85,     5,     7,     0,    75,     5,     7,     0,    87,     5,
     7,     0,     0,   336,   241,   337,   242,     0,     0,   337,
   338,     0,    87,     5,     7,     0,    97,   263,     7,     0,
    98,   266,     7,     0,    99,     5,   273,     7,     0,     0,
   339,   340,     0,   241,   341,   242,     0,   424,     0,     0,
   341,   342,     0,    85,     5,     7,     0,    85,     5,   272,
     7,     0,    75,     5,     7,     0,   101,   241,   343,   242,
     0,   105,   241,   349,   242,     0,     0,   343,   241,   344,
   242,     0,     0,   344,   345,     0,    85,     5,     7,     0,
    75,    96,     7,     0,    75,   106,     7,     0,    75,     5,
     7,     0,     0,   102,     5,   273,   346,   348,     7,     0,
   103,     3,     7,     0,     0,   235,   347,   282,   236,     7,
     0,   117,   262,     7,     0,    72,     5,     7,     0,    73,
     5,     7,     0,    70,     5,     7,     0,   104,     3,     7,
     0,     0,   235,     5,   236,     0,     0,   349,   350,     0,
   106,   241,   355,   242,     0,   107,   241,   355,   242,     0,
   108,   241,   359,   242,     0,   109,   241,   351,   242,     0,
     0,   351,   352,     0,    75,     5,     7,     0,    99,     5,
     7,     0,   241,   353,   242,     0,     0,   353,   354,     0,
    67,   364,     7,     0,    68,   364,     7,     0,   105,   364,
     7,     0,   117,   262,     7,     0,     0,   355,   356,     0,
     0,     0,   363,   235,   357,   282,   358,   243,   282,   236,
     7,     0,   117,   262,     7,     0,    70,     5,     7,     0,
    72,     5,     7,     0,    73,     5,     7,     0,    74,   235,
     3,   236,     7,     0,     0,   359,   360,     0,   117,   262,
     7,     0,     0,     0,   363,   235,   361,   282,   362,   243,
   364,   236,     7,     0,     0,   110,     0,   111,     0,   112,
     0,   113,     0,   114,     0,   115,     0,   116,     0,   241,
     5,     5,   242,     0,   241,     5,   242,     0,     0,   365,
   366,     0,   241,   367,   242,     0,   424,     0,     0,   367,
   368,     0,    85,     5,     7,     0,    85,     5,   272,     7,
     0,   119,   241,   370,   242,     0,     0,   126,   369,   241,
   377,   242,     0,     0,   370,   241,   371,   242,     0,     0,
   371,   372,     0,    85,     5,     7,     0,    75,     5,     7,
     0,   120,   373,     7,     0,   121,   432,     7,     0,   124,
   375,     7,     0,   125,     5,     7,     0,   122,   429,     7,
     0,   123,   432,     7,     0,     5,   273,     0,   241,   374,
   242,     0,     0,   374,   271,     5,     0,     5,     0,   241,
   376,   242,     0,     0,   376,   271,     5,     0,     0,   377,
   378,     0,     5,     5,     7,     0,   128,   278,     7,     0,
   140,   241,   384,   242,     0,   144,   241,   386,   242,     0,
   147,   241,   388,   242,     0,   150,   241,   390,   242,     0,
     5,   235,     5,   236,     7,     0,   128,   235,   278,   236,
     7,     0,   139,     7,     0,   133,   235,   278,   236,   241,
   377,   242,     0,   133,   235,   278,   236,   241,   377,   242,
   134,   241,   377,   242,     0,   130,   235,     5,   243,   278,
   236,     7,     0,   155,   235,     5,   243,   278,   243,   278,
   243,   278,   243,   278,   236,     7,     0,   155,   235,     5,
   243,   278,   243,   278,   243,   278,   236,     7,     0,   156,
   235,     5,   243,   429,   236,     7,     0,   157,   235,     5,
   243,   429,   236,     7,     0,   137,   235,     5,   243,   278,
   236,     7,     0,   138,   235,     5,   243,   262,   243,     5,
   236,     7,     0,   131,   235,     5,   243,     5,   243,   429,
   236,     7,     0,   132,   235,     5,   243,     5,   243,   427,
   236,     7,     0,   135,   235,     5,   243,   427,   243,   429,
   243,   427,   236,     7,     0,   136,   235,     5,   243,     5,
   243,     5,   243,   427,   243,   429,   243,   427,   243,   427,
   236,     7,     0,   140,   235,   427,   243,   427,   243,   278,
   243,   278,   236,   241,   377,   242,     0,   144,   235,   427,
   243,   427,   243,   278,   243,   427,   243,   427,   236,   241,
   377,   242,     0,   147,   235,   427,   243,   427,   243,   278,
   236,   241,   377,   242,     0,   147,   235,   427,   243,   427,
   243,   278,   243,   427,   236,   241,   377,   242,     0,     0,
   174,   379,   235,   381,   382,   236,     7,     0,     0,   177,
   380,   235,   381,   382,   236,     7,     0,   153,   235,   262,
   243,   278,   236,     7,     0,   169,   235,     5,   236,     7,
     0,   154,   235,   432,   236,     7,     0,   158,   235,     5,
   243,   429,   243,   427,   236,     7,     0,   159,   235,     5,
   243,   427,   243,   432,   236,     7,     0,   160,   241,     5,
   242,     7,     0,   161,   241,     5,   242,     7,     0,   165,
   241,     5,   243,   262,   243,   432,   243,   432,   243,   278,
   242,     7,     0,   165,   241,     5,   243,   262,   243,   432,
   242,     7,     0,   166,   241,     5,   243,     5,   243,   121,
   432,   243,     4,   242,     7,     0,   166,   241,     5,   243,
     5,   243,   121,   432,   242,     7,     0,   162,   235,     5,
   243,     5,   243,   427,   243,   427,   236,   241,   377,   242,
     7,     0,   163,   235,     5,   243,     5,   236,     7,     0,
   164,   235,     5,   243,     5,   236,     7,     0,   280,     0,
     5,     0,     0,   382,   383,     0,   243,   189,   432,     0,
   243,   192,   429,     0,   243,   429,     0,     0,   384,   385,
     0,   141,   427,     7,     0,   142,   427,     7,     0,   129,
   278,     7,     0,   143,   278,     7,     0,   126,   241,   377,
   242,     0,     0,   386,   387,     0,   141,   427,     7,     0,
   142,   427,     7,     0,   129,   278,     7,     0,   145,   427,
     7,     0,   146,   427,     7,     0,   126,   241,   377,   242,
     0,     0,   388,   389,     0,   148,   427,     7,     0,    77,
   427,     7,     0,   149,   278,     7,     0,   207,   427,     7,
     0,   126,   241,   377,   242,     0,     0,   390,   391,     0,
   148,   427,     7,     0,   151,   427,     7,     0,    77,   427,
     7,     0,   207,   427,     7,     0,   119,     5,     7,     0,
   152,   241,   392,   242,     0,   126,   241,   377,   242,     0,
   127,   241,   377,   242,     0,     0,   392,   241,   393,   242,
     0,     0,   393,   394,     0,    75,     5,     7,     0,   101,
     5,     7,     0,   117,   262,     7,     0,    77,   427,     7,
     0,    88,   278,     7,     0,   207,     5,     7,     0,     0,
   395,   396,     0,   241,   397,   242,     0,   424,     0,     0,
   397,   398,     0,    85,     5,     7,     0,    85,     5,   272,
     7,     0,   120,     5,   273,     7,     0,   168,     5,     7,
     0,   101,   241,   399,   242,     0,     0,   399,   241,   400,
   242,     0,     0,   400,   401,     0,    85,     5,     7,     0,
    64,   241,   402,   242,     0,     0,   402,   106,   241,   403,
   242,     0,   402,     5,   241,   403,   242,     0,     0,   403,
   404,     0,     0,   363,   235,   405,   282,   236,     7,     0,
    75,     5,     7,     0,     0,   117,   406,   262,     7,     0,
    70,     5,     7,     0,    72,     5,     7,     0,     0,   407,
   408,     0,   241,   409,   242,     0,   424,     0,     0,   409,
   410,     0,    85,     5,     7,     0,   170,     5,     7,     0,
   194,     5,     7,     0,   172,   432,     7,     0,   126,   241,
   413,   242,     0,     0,   169,     5,   171,     5,   412,   241,
   413,   242,     0,     0,     0,   413,   414,   415,     0,   173,
   235,   417,   420,   421,   236,     7,     0,   174,   235,   417,
   420,   421,   236,     7,     0,   174,   235,     6,   243,   427,
   421,   236,     7,     0,   174,   235,     6,   243,   205,   235,
   432,   236,   421,   236,     7,     0,     0,   175,   235,   262,
   416,   243,   117,   262,   421,   236,     7,     0,   176,   235,
     6,   421,   236,     7,     0,     5,   419,   243,     0,     5,
   419,   418,     5,   419,   243,     0,   226,     0,   227,     0,
   224,     0,   225,     0,     0,   235,   262,   236,     0,   179,
     0,   180,   262,     0,   181,   262,     0,   183,   241,   241,
   430,   242,   241,   430,   242,   241,   430,   242,   242,     0,
   182,   262,     0,   182,   241,   278,   243,   278,   243,   278,
   242,   241,   429,   243,   429,   243,   429,   242,     0,   184,
   241,   430,   242,     0,   185,   241,   241,   430,   242,   241,
   430,   242,   242,   241,   427,   242,     0,   186,   241,   241,
   430,   242,   241,   430,   242,   241,   430,   242,   242,   241,
   427,   243,   427,   242,     0,   187,   241,   241,   430,   242,
   241,   430,   242,   241,   430,   242,   241,   430,   242,   242,
   241,   427,   243,   427,   243,   427,   242,     0,   180,   262,
   188,     5,   241,   427,   243,   427,   242,   241,   427,   242,
     0,     0,   421,   422,     0,   243,   189,   432,     0,   243,
   189,   220,   432,     0,   243,   189,   223,   432,     0,   243,
   190,   427,     0,   243,   197,     0,   243,   198,     0,   243,
   193,   427,     0,   243,   194,     5,     0,   243,   195,   423,
     0,   243,   196,   423,     0,   243,   194,   423,     0,   243,
   191,   427,     0,   243,   192,   429,     0,   243,   178,     5,
     0,   243,   200,     5,     0,   243,   199,   427,     0,   243,
    64,   429,     0,   243,   201,   427,     0,   243,   201,   241,
   430,   242,     0,   243,   202,     0,   243,   203,     0,   243,
   122,   429,     0,   243,   153,   241,   278,   243,   278,   243,
   278,   242,     0,   243,   204,   280,     0,     0,   423,     6,
     0,     5,   211,   429,     7,     0,     5,   211,     6,     7,
     0,     5,   211,   205,   235,   432,   236,     7,     0,     5,
   211,   433,     7,     0,    19,   235,   425,   236,     7,     0,
    10,   233,     6,   234,     7,     0,    10,   233,     6,   243,
   430,   234,     7,     0,     0,   425,   271,     5,     0,   425,
   271,     5,   211,   427,     0,   425,   271,     5,   211,     6,
     0,    25,     0,    26,     0,    27,     0,    28,     0,    29,
     0,    30,     0,    31,     0,    32,     0,    33,     0,    34,
     0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
     0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
     0,     5,     0,   428,     0,   233,   427,   234,     0,   225,
   427,     0,   230,   427,     0,   427,   225,   427,     0,   427,
   224,   427,     0,   427,   226,   427,     0,   427,   227,   427,
     0,   427,   228,   427,     0,   427,   232,   427,     0,   427,
   218,   427,     0,   427,   220,   427,     0,   427,   219,   427,
     0,   427,   221,   427,     0,   427,   215,   427,     0,   427,
   216,   427,     0,   427,   214,   427,     0,   427,   213,   427,
     0,    25,   235,   427,   236,     0,    26,   235,   427,   236,
     0,    27,   235,   427,   236,     0,    28,   235,   427,   236,
     0,    29,   235,   427,   236,     0,    30,   235,   427,   236,
     0,    31,   235,   427,   236,     0,    32,   235,   427,   236,
     0,    33,   235,   427,   236,     0,    34,   235,   427,   236,
     0,    35,   235,   427,   243,   427,   236,     0,    36,   235,
   427,   236,     0,    37,   235,   427,   236,     0,    38,   235,
   427,   236,     0,    39,   235,   427,   236,     0,    40,   235,
   427,   236,     0,    41,   235,   427,   236,     0,    42,   235,
   427,   243,   427,   236,     0,    43,   235,   427,   243,   427,
   236,     0,    44,   235,   427,   243,   427,   236,     0,   427,
   212,   427,     8,   427,     0,   427,   238,     0,     4,     0,
     3,     0,    20,     0,    21,     0,    22,     0,    23,     0,
    24,     0,     5,     0,     0,   427,     0,   431,     0,   241,
   430,   242,     0,   427,     0,   431,     0,   430,   243,   427,
     0,   430,   243,   431,     0,   427,     8,   427,     0,   427,
     8,   427,     8,   427,     0,     5,   241,   242,     0,     5,
   241,   430,   242,     0,    15,   235,     5,   236,     0,    16,
   235,     5,   243,     5,   236,     0,    17,   235,   427,   243,
   427,   243,   427,   236,     0,    18,   235,   427,   243,   427,
   243,   427,   236,     0,     6,     0,     5,     0,   433,     0,
   206,     0,     9,   235,   432,   243,   432,   236,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   361,   396,   435,   438,   441,   444,   447,   448,   449,   450,
   451,   452,   453,   454,   455,   457,   459,   461,   466,   475,
   478,   480,   482,   484,   486,   488,   490,   492,   494,   496,
   498,   500,   502,   504,   506,   508,   510,   512,   514,   517,
   525,   539,   542,   543,   546,   551,   554,   556,   559,   561,
   563,   565,   570,   582,   592,   618,   629,   636,   644,   652,
   663,   672,   681,   688,   723,   728,   739,   742,   756,   761,
   764,   813,   826,   852,   857,   872,   890,   911,   917,   926,
   940,   974,   987,  1007,  1011,  1021,  1038,  1038,  1041,  1047,
  1050,  1053,  1063,  1066,  1069,  1073,  1093,  1137,  1141,  1144,
  1161,  1170,  1177,  1180,  1185,  1191,  1195,  1200,  1205,  1211,
  1218,  1222,  1235,  1250,  1264,  1270,  1276,  1282,  1288,  1294,
  1300,  1306,  1312,  1318,  1324,  1330,  1336,  1342,  1348,  1354,
  1360,  1367,  1373,  1375,  1384,  1388,  1394,  1468,  1502,  1511,
  1523,  1525,  1536,  1538,  1552,  1564,  1570,  1576,  1578,  1607,
  1631,  1644,  1650,  1657,  1663,  1670,  1677,  1687,  1690,  1691,
  1694,  1697,  1700,  1705,  1708,  1722,  1729,  1734,  1739,  1743,
  1750,  1755,  1760,  1765,  1771,  1775,  1780,  1783,  1819,  1827,
  1832,  1841,  1845,  1854,  1857,  1862,  1867,  1872,  1880,  1884,
  1896,  1906,  1911,  1916,  1921,  1933,  1937,  1987,  1990,  1993,
  1996,  1999,  2008,  2015,  2018,  2040,  2043,  2053,  2057,  2065,
  2072,  2081,  2084,  2104,  2121,  2143,  2153,  2157,  2169,  2193,
  2218,  2223,  2231,  2239,  2249,  2266,  2274,  2281,  2288,  2297,
  2306,  2315,  2334,  2342,  2345,  2368,  2372,  2381,  2385,  2393,
  2400,  2409,  2412,  2415,  2418,  2423,  2441,  2488,  2505,  2509,
  2514,  2519,  2524,  2538,  2558,  2563,  2568,  2592,  2647,  2651,
  2655,  2664,  2728,  2734,  2739,  2744,  2748,  2755,  2758,  2763,
  2781,  2786,  2790,  2807,  2821,  2826,  2830,  2843,  2849,  2856,
  2863,  2867,  2874,  2884,  2895,  2912,  2984,  2996,  3000,  3034,
  3037,  3040,  3084,  3091,  3094,  3116,  3120,  3128,  3132,  3140,
  3147,  3157,  3159,  3164,  3179,  3195,  3213,  3217,  3222,  3226,
  3229,  3239,  3278,  3302,  3307,  3313,  3624,  3629,  3638,  3647,
  3656,  3661,  3664,  3702,  3719,  3745,  3750,  3753,  3756,  3761,
  3769,  3772,  3784,  3794,  3806,  3815,  3818,  3822,  3824,  3826,
  3832,  3852,  3856,  3867,  3945,  3991,  4015,  4024,  4033,  4042,
  4052,  4069,  4073,  4107,  4116,  4170,  4186,  4189,  4190,  4191,
  4192,  4193,  4194,  4195,  4199,  4222,  4244,  4251,  4254,  4275,
  4279,  4287,  4291,  4300,  4307,  4310,  4312,  4317,  4333,  4350,
  4366,  4370,  4375,  4384,  4387,  4392,  4397,  4402,  4407,  4414,
  4453,  4458,  4463,  4473,  4485,  4489,  4494,  4505,  4514,  4521,
  4547,  4554,  4560,  4566,  4572,  4580,  4602,  4609,  4615,  4626,
  4637,  4650,  4665,  4681,  4701,  4722,  4734,  4754,  4771,  4790,
  4811,  4845,  4858,  4872,  4885,  4898,  4905,  4907,  4914,  4916,
  4926,  4936,  4944,  4957,  4970,  4979,  4988,  5002,  5016,  5030,
  5045,  5062,  5076,  5094,  5100,  5110,  5116,  5119,  5123,  5133,
  5147,  5159,  5163,  5169,  5173,  5177,  5182,  5191,  5204,  5208,
  5214,  5218,  5222,  5226,  5231,  5240,  5252,  5255,  5261,  5265,
  5269,  5273,  5282,  5297,  5300,  5306,  5310,  5314,  5319,  5329,
  5335,  5341,  5350,  5354,  5358,  5372,  5375,  5387,  5416,  5419,
  5422,  5430,  5446,  5454,  5457,  5478,  5481,  5492,  5495,  5503,
  5511,  5557,  5562,  5567,  5571,  5575,  5582,  5586,  5590,  5595,
  5601,  5607,  5620,  5631,  5634,  5642,  5670,  5681,  5681,  5687,
  5696,  5712,  5720,  5723,  5728,  5731,  5740,  5743,  5751,  5763,
  5774,  5779,  5784,  5802,  5811,  5815,  5820,  5828,  5834,  5838,
  5844,  5850,  5855,  5859,  5866,  5880,  5902,  5905,  5906,  5907,
  5910,  5914,  5918,  5926,  5933,  5940,  5964,  5971,  5983,  5996,
  6016,  6042,  6075,  6095,  6119,  6122,  6130,  6137,  6144,  6148,
  6152,  6156,  6160,  6170,  6175,  6180,  6200,  6207,  6216,  6225,
  6234,  6241,  6249,  6253,  6262,  6266,  6270,  6278,  6284,  6292,
  6299,  6345,  6362,  6368,  6374,  6380,  6382,  6387,  6400,  6403,
  6409,  6415,  6426,  6428,  6429,  6430,  6431,  6432,  6433,  6434,
  6435,  6436,  6437,  6438,  6439,  6440,  6441,  6442,  6443,  6444,
  6445,  6446,  6447,  6450,  6452,  6453,  6454,  6455,  6456,  6457,
  6458,  6459,  6460,  6461,  6462,  6463,  6464,  6465,  6466,  6467,
  6468,  6469,  6470,  6471,  6472,  6473,  6474,  6475,  6476,  6477,
  6478,  6479,  6480,  6481,  6482,  6483,  6484,  6485,  6486,  6487,
  6488,  6489,  6490,  6493,  6496,  6497,  6498,  6499,  6500,  6501,
  6502,  6518,  6523,  6529,  6532,  6537,  6545,  6548,  6551,  6561,
  6569,  6580,  6596,  6618,  6633,  6671,  6679,  6689,  6694,  6708,
  6712,  6728
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tPrintf","tFor","tEndFor","tInclude",
"tConstant","tList","tListAlt","tLinSpace","tLogSpace","tDefineConstant","tPi",
"t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin","tCos",
"tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor","tCeil",
"tFmod","tModulo","tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct","tMHTransform",
"tMHJacNL","tGroup","tDefineGroup","tAll","tInSupport","tMovingBand2D","tDefineFunction",
"tConstraint","tRegion","tSubRegion","tRegionRef","tSubRegionRef","tFilter",
"tCoefficient","tValue","tTimeFunction","tBranch","tNode","tLoop","tNameOfResolution",
"tJacobian","tCase","tIntegration","tFMMIntegration","tMatrix","tType","tSubType",
"tCriterion","tGeoElement","tNumberOfPoints","tMaxNumberOfPoints","tNumberOfDivisions",
"tMaxNumberOfDivisions","tStoppingCriterion","tFunctionSpace","tName","tBasisFunction",
"tNameOfCoef","tFunction","tdFunction","tSubFunction","tSubdFunction","tSupport",
"tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity","tEntityType",
"tEntitySubType","tNameOfConstraint","tFormulation","tQuantity","tNameOfSpace",
"tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham","tGlobalTerm",
"tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof","tJacNL","tNeverDt","tDtNL",
"tIn","tResolution","tDefineSystem","tNameOfFormulation","tNameOfMesh","tFrequency",
"tSolver","tOriginSystem","tDestinationSystem","tOperation","tOperationEnd",
"tSetTime","tDTime","tSetFrequency","tFourierTransform","tFourierTransformJ",
"tIf","tElse","tLanczos","tPerturbation","tUpdate","tUpdateConstraint","tBreak",
"tTimeLoopTheta","tTime0","tTimeMax","tTheta","tTimeLoopNewmark","tBeta","tGamma",
"tIterativeLoop","tNbrMaxIteration","tRelaxationFactor","tIterativeTimeReduction",
"tDivisionCoefficient","tChangeOfState","tChangeOfCoordinates","tSystemCommand",
"tGenerateFMMGroups","tGenerateOnly","tGenerateOnlyJac","tSolveJac_AdaptRelax",
"tSaveSolutionExtendedMH","tInit_MovingBand2D","tMesh_MovingBand2D","tGenerate_MH_Moving",
"tGenerateGroup","tGenerateJacGroup","tSaveMesh","tDeformeMesh","tPostProcessing",
"tNameOfSystem","tPostOperation","tNameOfPostProcessing","tUsingPost","tAppend",
"tPlot","tPrint","tPrintGroup","tEcho","tWrite","tAdapt","tOnGlobal","tOnRegion",
"tOnElementsOf","tOnGrid","tOnSection","tOnPoint","tOnLine","tOnPlane","tOnBox",
"tWithArgument","tFile","tDepth","tDimension","tTimeStep","tHarmonicToTime",
"tFormat","tHeader","tFooter","tSkin","tSmoothing","tTarget","tSort","tIso",
"tNoNewLine","tDecomposeInSimplex","tChangeOfValues","tStr","tDate","tFlag",
"tHelp","tCpu","tCheck","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL",
"'<'","tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'",
"'-'","'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'",
"'['","']'","'.'","'#'","'$'","tSHOW","'{'","'}'","','","Stats","@1","ProblemDefinitions",
"@2","ProblemDefinition","Interactive","@3","Groups","@4","Group","@5","ForLoop",
"MovingBand2DGroup","@6","@7","ReducedGroupRHS","@8","@9","GroupRHS","FunctionForGroup",
"ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup","ListOfRegion",
"RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex",
"Index","Functions","Function","DefineFunctions","Expression","@10","ListOfExpression",
"RecursiveListOfExpression","WholeQuantityExpression","@11","WholeQuantity",
"@12","@13","WholeQuantity_Single","@14","@15","@16","ArgumentsForFunction",
"RecursiveListOfQuantity","ParametersForFunction","JacobianMethods","JacobianMethod",
"JacobianMethodTerm","JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods",
"IntegrationMethod","IntegrationMethodTerm","IntegrationCases","IntegrationCase",
"IntegrationCaseTerm","QuadratureCases","QuadratureCase","QuadratureCaseTerm",
"Constraints","BracedConstraint","Constraint","ConstraintTerm","ConstraintCases",
"ConstraintCase","ConstraintCaseTerm","FunctionSpaces","BracedFunctionSpace",
"FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction","BasisFunctionTerm",
"OptionalParametersForBasisFunction","@17","@18","SubSpaces","SubSpace","SubSpaceTerm",
"ListOfBasisFunction","RecursiveListOfBasisFunction","ListOfBasisFunctionCoef",
"RecursiveListOfBasisFunctionCoef","GlobalQuantities","GlobalQuantity","GlobalQuantityTerm",
"ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm","Formulations","BracedFormulation",
"Formulation","FormulationTerm","DefineQuantities","DefineQuantity","DefineQuantityTerm",
"@19","@20","IndexInFunctionSpace","Equations","EquationTerm","GlobalEquation",
"GlobalEquationTerm","GlobalEquationTermTerm","GlobalEquationTermTermTerm","LocalTerm",
"LocalTermTerm","@21","@22","GlobalTerm","GlobalTermTerm","@23","@24","TermOperator",
"Quantity_Def","Resolutions","BracedResolution","Resolution","ResolutionTerm",
"@25","DefineSystems","DefineSystem","DefineSystemTerm","ListOfFormulation",
"RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem","Operation",
"OperationTerm","@26","@27","PrintOperation","PrintOperationOptions","PrintOperationOption",
"TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark","TimeLoopNewmarkTerm",
"IterativeLoop","IterativeLoopTerm","IterativeTimeReduction","IterativeTimeReductionTerm",
"ChangeOfStates","ChangeOfState","ChangeOfStateTerm","PostProcessings","BracedPostProcessing",
"PostProcessing","PostProcessingTerm","PostQuantities","PostQuantity","PostQuantityTerm",
"SubPostQuantities","SubPostQuantity","SubPostQuantityTerm","@28","@29","PostOperations",
"BracedPostOperation","PostOperation","PostOperationTerm","SeparatePostOperation",
"@30","PostSubOperations","@31","PostSubOperation","@32","PostQuantitiesToPrint",
"Combination","PostQuantitySupport","PrintSubType","PrintOptions","PrintOption",
"ParsedStrings","Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr",
"ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","CharExpr","StrCat", NULL
};
#endif

static const short yyr1[] = {     0,
   245,   244,   246,   247,   246,   248,   248,   248,   248,   248,
   248,   248,   248,   248,   248,   248,   248,   248,   248,   249,
   249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
   249,   249,   249,   249,   249,   249,   249,   249,   249,   250,
   249,   251,   252,   251,   253,   253,   254,   253,   253,   253,
   253,   253,   255,   255,   255,   257,   258,   256,   260,   261,
   259,   259,   262,   262,   263,   263,   264,   264,   265,   265,
   265,   266,   267,   267,   268,   268,   268,   269,   269,   269,
   269,   269,   269,   270,   270,   270,   271,   271,   272,   273,
   273,   274,   275,   275,   276,   276,   276,   276,   277,   277,
   278,   278,   279,   278,   280,   280,   281,   281,   283,   282,
   284,   285,   286,   284,   284,   284,   284,   284,   284,   284,
   284,   284,   284,   284,   284,   284,   284,   284,   284,   284,
   284,   284,   284,   284,   287,   287,   287,   287,   287,   287,
   288,   287,   289,   287,   287,   287,   287,   290,   287,   287,
   287,   287,   287,   287,   287,   287,   287,   291,   291,   291,
   292,   292,   293,   293,   293,   294,   294,   295,   295,   296,
   296,   297,   297,   298,   298,   299,   299,   299,   300,   300,
   301,   301,   302,   302,   302,   303,   303,   304,   304,   305,
   305,   305,   306,   306,   307,   307,   308,   308,   308,   308,
   308,   308,   309,   309,   310,   310,   311,   311,   312,   312,
   312,   312,   312,   313,   313,   314,   314,   315,   315,   315,
   315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
   315,   315,   316,   316,   317,   317,   318,   318,   319,   319,
   319,   319,   319,   319,   319,   320,   320,   321,   321,   322,
   322,   322,   322,   322,   322,   322,   322,   322,   323,   324,
   325,   323,   326,   326,   327,   327,   328,   328,   328,   329,
   329,   330,   330,   331,   331,   332,   332,   333,   333,   334,
   334,   335,   335,   335,   336,   336,   337,   337,   338,   338,
   338,   338,   339,   339,   340,   340,   341,   341,   342,   342,
   342,   342,   342,   343,   343,   344,   344,   345,   345,   345,
   345,   346,   345,   345,   347,   345,   345,   345,   345,   345,
   345,   348,   348,   349,   349,   350,   350,   350,   350,   351,
   351,   352,   352,   352,   353,   353,   354,   354,   354,   354,
   355,   355,   357,   358,   356,   356,   356,   356,   356,   356,
   359,   359,   360,   361,   362,   360,   363,   363,   363,   363,
   363,   363,   363,   363,   364,   364,   365,   365,   366,   366,
   367,   367,   368,   368,   368,   369,   368,   370,   370,   371,
   371,   372,   372,   372,   372,   372,   372,   372,   372,   373,
   373,   374,   374,   375,   375,   376,   376,   377,   377,   378,
   378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
   378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
   378,   378,   378,   378,   378,   379,   378,   380,   378,   378,
   378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
   378,   378,   378,   381,   381,   382,   382,   383,   383,   383,
   384,   384,   385,   385,   385,   385,   385,   386,   386,   387,
   387,   387,   387,   387,   387,   388,   388,   389,   389,   389,
   389,   389,   390,   390,   391,   391,   391,   391,   391,   391,
   391,   391,   392,   392,   393,   393,   394,   394,   394,   394,
   394,   394,   395,   395,   396,   396,   397,   397,   398,   398,
   398,   398,   398,   399,   399,   400,   400,   401,   401,   402,
   402,   402,   403,   403,   405,   404,   404,   406,   404,   404,
   404,   407,   407,   408,   408,   409,   409,   410,   410,   410,
   410,   410,   412,   411,   413,   414,   413,   415,   415,   415,
   415,   416,   415,   415,   417,   417,   418,   418,   418,   418,
   419,   419,   420,   420,   420,   420,   420,   420,   420,   420,
   420,   420,   420,   421,   421,   422,   422,   422,   422,   422,
   422,   422,   422,   422,   422,   422,   422,   422,   422,   422,
   422,   422,   422,   422,   422,   422,   422,   422,   422,   423,
   423,   424,   424,   424,   424,   424,   424,   424,   425,   425,
   425,   425,   426,   426,   426,   426,   426,   426,   426,   426,
   426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
   426,   426,   426,   427,   427,   427,   427,   427,   427,   427,
   427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
   427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
   427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
   427,   427,   427,   428,   428,   428,   428,   428,   428,   428,
   428,   429,   429,   429,   429,   430,   430,   430,   430,   431,
   431,   431,   431,   431,   431,   431,   431,   432,   432,   432,
   432,   433
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     0,     3,     4,     5,     0,     6,     5,     1,
     1,     1,     6,     8,     1,     0,     0,    18,     0,     0,
     7,     2,     1,     2,     1,     1,     1,     1,     0,     3,
     4,     1,     1,     3,     0,     3,     4,     1,     3,     5,
     1,     4,     3,     0,     3,     6,     0,     1,     4,     0,
     2,     3,     0,     2,     5,     6,     7,     1,     0,     3,
     4,     4,     0,     2,     0,     3,     1,     3,     0,     2,
     1,     0,     0,     7,     3,     3,     6,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     2,     2,     2,     3,     1,     3,     2,     1,     2,
     0,     5,     0,    11,     9,     4,     4,     0,     7,     6,
     2,     2,     2,     2,     3,     2,     3,     3,     2,     3,
     1,     3,     0,     3,     6,     0,     4,     0,     2,     3,
     4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     4,     0,     4,     0,     2,     3,     3,     3,     3,
     3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
     3,     4,     5,     0,     4,     0,     2,     3,     3,     3,
     3,     3,     3,     7,     3,     3,     3,     3,     3,     7,
     7,     7,     0,     2,     3,     1,     0,     2,     3,     4,
     3,     4,     4,     4,     4,     0,     4,     0,     2,     3,
     3,     4,     4,     7,     3,     3,     3,     3,     0,     0,
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
     2,     4,     4,     7,     4,     5,     5,     7,     0,     3,
     5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     3,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     6,     4,     4,     4,     4,     4,     4,     6,     6,
     6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     0,     1,     1,     3,     1,     1,     3,     3,     3,
     5,     3,     4,     4,     6,     8,     8,     1,     1,     1,
     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     5,    19,     0,    16,    17,   672,     0,   689,   688,     0,
   691,    18,   690,   599,    42,   203,   166,   179,   233,    93,
   293,   367,   493,     0,   522,     0,    20,     0,     0,     0,
     0,     0,    27,     0,    28,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    41,
   665,   664,   671,     0,     0,     0,     0,     0,   666,   667,
   668,   669,   670,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   673,   624,
     0,   674,     0,     0,     0,    87,    43,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    26,    23,    21,
    25,    24,    22,    39,    29,    31,    32,    33,    34,    30,
    35,    36,    37,    38,     0,     0,     0,     0,     0,   593,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   671,   626,   627,     0,   676,
     0,   677,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   663,   592,
   595,     0,     0,     0,     0,    88,     0,     6,     0,   207,
     8,   204,   206,   168,     9,   181,    10,   237,    11,   234,
   236,     0,     0,     7,    94,    98,   297,    12,   294,   296,
   371,    13,   368,   370,   497,    14,   494,   496,   533,   526,
    15,   523,   525,   551,     0,     0,     0,    90,    65,     0,
    63,   542,     0,   564,   682,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   625,   675,     0,   680,     0,   641,   640,   638,   639,
   634,   636,   635,   637,   629,   628,   630,   631,   632,   633,
   597,     0,     0,   596,   600,     0,     0,    55,     0,    44,
    52,    50,    51,     0,     0,     0,     0,     0,    99,     0,
     0,     0,     0,     0,     0,     0,   553,     0,     0,     0,
     0,     0,     0,     0,     0,   564,     0,   564,     0,    64,
    78,    81,    75,    62,    73,     0,    59,     0,   683,   684,
     0,     0,     0,   642,   643,   644,   645,   646,   647,   648,
   649,   650,   651,     0,   653,   654,   655,   656,   657,   658,
     0,     0,     0,     0,   678,   679,     0,     0,     0,     0,
     0,   672,     0,     0,     0,     0,     0,    84,     0,     0,
     0,   205,   208,     0,     0,   167,   169,     0,   103,     0,
   180,   182,     0,     0,     0,     0,     0,     0,   235,   238,
     0,     0,    87,     0,     0,     0,     0,   295,   298,     0,
     0,   376,   369,   372,     0,     0,     0,     0,   495,   498,
   535,     0,     0,     0,     0,     0,   524,   527,     0,   549,
   550,   547,   548,   545,     0,   554,   555,   103,   557,     0,
     0,     0,     0,     0,     0,     0,   564,     0,    91,     0,
     0,    87,     0,     0,     0,     0,   565,     0,     0,     0,
     0,     0,     0,     0,   594,   681,   662,   598,   692,   602,
   601,   671,     0,     0,     0,     0,    47,     0,     0,    87,
     0,   214,     0,     0,   172,     0,   186,     0,     0,     0,
   109,     0,   285,     0,     0,   246,   263,   278,   103,     0,
     0,     0,     0,     0,   304,   324,     0,   378,     0,     0,
   504,    90,     0,   536,     0,   535,     0,     0,     0,   552,
   551,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   665,    79,    83,     0,    74,     0,     0,    68,
    60,    67,   544,   672,   672,     0,     0,     0,     0,     0,
   672,     0,   590,   590,   590,   570,   571,     0,     0,     0,
   585,   586,   105,   685,     0,     0,   652,   659,   660,   661,
    45,     0,     0,    92,     0,    66,     0,     0,     0,     0,
   214,     0,   211,   209,     0,     0,     0,   170,     0,     0,
     0,   184,   104,     0,   183,     0,   241,   239,     0,     0,
     0,     0,     0,   103,    95,   100,   301,   299,     0,     0,
     0,   373,     0,     0,   398,   499,     0,     0,     0,   502,
   534,     0,   528,   536,   529,   531,   530,     0,     0,   103,
     0,   559,     0,     0,     0,   538,     0,     0,   539,     0,
    82,     0,    76,   564,    87,   582,   587,   103,   579,     0,
     0,   566,   569,   577,   578,   572,   573,   576,   574,   575,
   581,   580,     0,   583,   103,   589,     0,     0,     0,    89,
     0,    46,     0,    49,    85,     0,   216,   212,   210,   174,
   171,   188,   185,     0,     0,   671,   603,   604,   605,   606,
   607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
   617,   618,   619,   620,   621,   622,     0,   148,     0,     0,
     0,     0,   141,     0,     0,     0,     0,     0,     0,     0,
     0,   110,   111,   139,     0,   136,   287,   245,   240,   248,
   242,   265,   243,   280,   244,    96,     0,   300,   306,   302,
     0,     0,     0,     0,   303,   325,   374,   380,   375,     0,
   500,   506,   503,   501,   537,   532,   546,     0,     0,     0,
     0,     0,     0,   564,   540,    80,    77,     0,     0,     0,
     0,   567,   568,   591,     0,   107,     0,   686,   687,    56,
    48,     0,    53,     0,   213,     0,     0,     0,   101,   102,
   138,     0,     0,     0,     0,     0,     0,     0,     0,   133,
   132,   134,     0,   156,   154,   151,   153,   152,     0,   112,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   140,
   163,     0,     0,     0,     0,    97,     0,   341,   341,   351,
   330,     0,     0,   103,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   426,   428,   377,   399,     0,     0,   103,     0,
     0,     0,     0,     0,     0,    61,    72,     0,     0,   103,
   584,   106,   103,     0,     0,     0,     0,     0,     0,     0,
   103,   103,   103,   103,     0,     0,     0,   103,   215,   217,
     0,     0,   173,   175,     0,     0,     0,   187,   189,     0,
   109,     0,     0,     0,     0,   109,     0,   135,     0,   366,
     0,   131,   130,   127,   128,   129,   123,   125,   124,   126,
   119,   120,   115,   118,   121,   116,   122,   155,   157,   159,
     0,   161,     0,     0,   137,     0,     0,     0,     0,   286,
   288,     0,     0,     0,     0,   105,   105,     0,     0,   247,
   249,     0,     0,     0,   264,   266,     0,     0,     0,   279,
   281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   315,   305,   307,   357,   357,   357,     0,     0,     0,     0,
     0,   672,     0,     0,     0,   379,   381,     0,     0,   103,
     0,     0,     0,     0,   103,     0,     0,     0,     0,   408,
     0,   451,     0,   458,     0,   466,   473,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   505,   507,     0,     0,
     0,     0,     0,     0,     0,   543,    90,    70,     0,   108,
     0,    54,    86,     0,     0,     0,     0,   103,     0,   103,
     0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
   163,   193,     0,     0,   146,     0,   147,     0,   143,     0,
     0,   109,   365,     0,   158,   160,     0,     0,     0,     0,
     0,     0,    90,     0,     0,   259,     0,     0,     0,     0,
     0,     0,   274,   276,     0,   270,   272,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
     0,     0,   109,     0,     0,     0,     0,   358,   359,   360,
   361,   362,   363,   364,     0,   326,   342,     0,   327,     0,
   328,   352,     0,     0,     0,   335,   329,   331,     0,     0,
    90,   392,     0,     0,     0,     0,   394,   396,     0,     0,
   400,     0,     0,   401,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   105,   105,   510,     0,     0,     0,
     0,     0,     0,     0,   541,    71,   103,     0,   219,   220,
   225,   226,     0,   229,     0,   228,   222,   221,    87,   223,
   218,     0,   227,   177,   176,     0,     0,   190,   191,     0,
     0,   109,     0,   142,     0,   113,   162,     0,   164,   289,
   290,   291,     0,   250,   251,     0,     0,     0,    87,   255,
   256,   257,   258,   267,    87,   269,    87,   268,   283,   282,
   284,   320,   318,   319,   311,   309,   310,   308,   312,   314,
   321,   317,     0,     0,     0,     0,     0,     0,   343,     0,
   354,     0,     0,     0,   383,   382,   390,    87,   384,   385,
   388,   389,    87,   386,   387,     0,     0,   103,     0,     0,
     0,     0,     0,   103,     0,     0,     0,   103,     0,     0,
   103,   402,   452,     0,     0,   103,     0,     0,     0,     0,
   403,   459,     0,     0,     0,     0,   103,     0,   404,   467,
     0,     0,     0,     0,     0,     0,     0,     0,   405,   474,
   103,     0,   103,   672,   672,   672,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   445,   444,   446,   446,     0,
   508,     0,   672,     0,     0,     0,     0,     0,    57,   103,
   103,     0,   103,   178,   195,   192,     0,   117,     0,     0,
   150,     0,     0,   292,   252,     0,   253,     0,   275,     0,
   271,     0,   322,     0,   347,   348,   349,     0,   346,   109,
   353,   109,   332,   333,     0,     0,     0,     0,   334,   336,
   391,     0,   395,     0,   406,   407,     0,     0,     0,   398,
     0,     0,     0,     0,     0,   398,     0,     0,     0,     0,
     0,   398,     0,     0,     0,     0,     0,     0,     0,   398,
     0,     0,     0,     0,     0,   398,   398,     0,     0,   483,
     0,     0,   432,     0,     0,     0,     0,     0,   435,   436,
     0,     0,     0,     0,     0,   431,     0,     0,     0,     0,
   509,     0,     0,     0,     0,     0,     0,   588,     0,     0,
     0,     0,     0,     0,   149,     0,     0,   114,     0,     0,
     0,   277,   273,     0,     0,   316,     0,   344,   355,     0,
     0,     0,     0,   393,   397,     0,   672,     0,     0,   672,
     0,     0,     0,   103,     0,   455,   453,   454,   456,   103,
     0,   462,   460,   461,   463,   464,   103,   469,     0,   468,
   470,   471,   477,   479,     0,     0,   475,   476,     0,   478,
     0,   103,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   672,   447,     0,   513,   513,     0,   672,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   194,   196,     0,     0,   165,     0,
     0,     0,   313,   350,     0,     0,   337,   338,   339,   340,
   411,     0,     0,   409,     0,     0,   416,     0,     0,   457,
     0,   465,     0,   472,   481,   482,   485,   480,   430,     0,
   414,   415,     0,     0,     0,   442,   443,     0,     0,   427,
     0,   672,   450,   429,   357,   357,   563,     0,   556,   560,
     0,     0,     0,   232,   231,   224,   230,     0,     0,     0,
     0,     0,     0,     0,   145,     0,   254,   323,   109,     0,
     0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
     0,   103,     0,     0,     0,     0,     0,     0,   448,   449,
     0,     0,     0,   518,   512,     0,   514,   511,   672,     0,
     0,     0,   197,   198,   199,   200,   201,   202,     0,     0,
     0,     0,   418,   419,   398,     0,     0,   417,     0,     0,
   398,     0,     0,     0,   103,     0,     0,     0,   484,   486,
     0,   433,   434,     0,   438,     0,     0,     0,     0,     0,
     0,     0,   515,     0,     0,     0,     0,   144,     0,     0,
     0,     0,     0,   672,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   103,     0,   103,   440,     0,
   520,   521,   517,     0,   109,   558,     0,     0,     0,   260,
   345,   356,   410,   420,     0,   398,     0,   424,   398,   487,
   490,   491,   488,   489,   492,   413,     0,   398,     0,     0,
   519,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   439,     0,   561,     0,    58,     0,     0,
   422,   398,   425,   412,     0,   437,   516,     0,     0,     0,
     0,   441,     0,   261,     0,   423,     0,     0,     0,     0,
     0,   421,   562,    90,     0,     0,   262,     0,     0,     0
};

static const short yydefgoto[] = {  1848,
     1,     2,     3,    21,    22,    23,   117,   209,   310,   585,
   311,   312,   904,  1499,   251,   464,   655,   252,   253,   551,
   779,   899,   344,   462,   345,   490,   207,   385,   340,   386,
   122,   225,   413,   500,   501,  1377,   787,   603,   604,   732,
   941,  1402,   733,   808,  1252,   803,   840,   963,   965,   119,
   315,   397,   597,   797,   924,   120,   316,   402,   599,   798,
   929,  1247,  1504,  1596,   118,   212,   314,   393,   592,   796,
   920,   121,   220,   317,   410,   610,   843,   981,  1268,  1806,
  1838,   611,   844,   986,  1128,  1277,  1125,  1275,   612,   845,
   991,   606,   842,   971,   123,   229,   320,   419,   620,   847,
  1003,  1413,  1143,  1515,   621,   756,  1007,  1168,  1304,  1430,
  1004,  1157,  1420,  1605,  1006,  1162,  1422,  1606,  1158,   734,
   124,   233,   321,   424,   519,   624,   852,  1017,  1173,  1308,
  1179,  1313,   760,   886,  1053,  1054,  1378,  1487,  1574,  1194,
  1333,  1196,  1342,  1198,  1350,  1199,  1360,  1559,  1681,  1730,
   125,   237,   322,   430,   628,   887,  1058,  1380,  1645,  1697,
  1775,  1742,   127,   242,   324,   438,    24,   323,   524,   632,
    70,   346,   245,   445,   326,   336,   348,   467,   668,    25,
   116,   735,   180,   110,   111,   181,   182,    32,    33
};

static const short yypact[] = {-32768,
-32768,    41,  3451,  -143,   -79,    49,   -61,     3,    31,    57,
    74,    78,    89,   108,   123,   162,    21,   313,   430,  1456,
-32768,-32768,   -51,-32768,-32768,  1836,   373,-32768,-32768,   149,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   301,-32768,   469,-32768,   496,   502,   523,
   533,   536,-32768,   545,-32768,   554,   559,   564,   573,   586,
   592,   614,   623,   625,   628,   349,   412,   418,   424,-32768,
-32768,-32768,   396,   660,   435,   441,   446,   453,-32768,-32768,
-32768,-32768,-32768,   497,   501,   506,   524,   541,   568,   574,
   587,   590,   595,   608,   611,   632,   634,   638,   644,   663,
   674,   686,   694,   699,  3078,  3078,  3078,  2944,  2713,-32768,
   679,-32768,   852,    11,    49,   101,   673,    34,  -137,   -92,
    54,    65,    72,    82,    90,   939,   168,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   943,   328,   150,   944,   680,-32768,
   947,   957,  3078,  3078,  3078,  3078,  3078,  3078,  3078,  3078,
  3078,  3078,  3078,  3078,  3078,  3078,  3078,  3078,  3078,  3078,
  3078,  3078,  3078,  3078,    49,-32768,  -160,  -160,  4169,  2713,
   111,-32768,  3078,  3078,  3078,  3078,  3078,  3078,  3078,  3078,
  3078,  3078,  3078,  3078,  3078,  3078,  3078,  3078,-32768,-32768,
-32768,   959,  2944,   729,   974,-32768,   986,-32768,   816,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  -122,   763,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   769,   988,   765,   988,    75,-32768,    37,
-32768,-32768,   771,-32768,-32768,   125,   774,   768,  3011,  3100,
  4196,  4223,  4250,  4277,  4304,  4331,  4358,  4385,  4412,  4439,
  3253,  4466,  4493,  4520,  4547,  4574,  4601,  3328,  3360,  3381,
   777,-32768,-32768,  2944,  3157,  3178,  2055,  2974,  1684,  1684,
   580,   580,   580,   580,   537,   537,  -160,  -160,  -160,  -160,
-32768,    27,    49,-32768,   809,   186,   781,-32768,   791,-32768,
-32768,-32768,-32768,   106,    22,   164,   152,   121,-32768,   484,
   356,   452,   784,   505,   150,   513,-32768,   150,   150,    18,
   793,   796,   797,   798,   801,-32768,  2986,-32768,   802,-32768,
  1035,   804,-32768,-32768,-32768,   807,-32768,   127,-32768,-32768,
  1046,  3078,  3078,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  3078,-32768,-32768,-32768,-32768,-32768,-32768,
  3078,  3078,  3078,  1047,  2713,-32768,  3078,  3078,  1050,   817,
  3028,  1792,  1049,  2725,   847,   848,  3078,-32768,    24,  1056,
  1057,-32768,-32768,   822,  1090,-32768,-32768,   855,   142,  1092,
-32768,-32768,   862,  1111,  1112,   888,   889,   896,-32768,-32768,
   927,   904,   157,  1136,  1138,   903,   905,-32768,-32768,  1142,
   909,-32768,-32768,-32768,  1143,   910,  1147,  1148,-32768,-32768,
-32768,  1158,   924,  1171,    49,  1172,-32768,-32768,   942,-32768,
-32768,-32768,-32768,-32768,  1175,   997,-32768,   142,-32768,   952,
  2944,   953,   955,   956,   169,   965,  5060,   209,-32768,  3120,
   757,   242,  1085,    33,  1196,  1853,-32768,   982,  3413,  3450,
  4628,  4655,  4682,  4709,-32768,  5060,  5060,-32768,-32768,-32768,
  5060,   198,  1212,   993,  3078,  3828,-32768,   175,  3199,   238,
   981,-32768,  1217,    64,-32768,  1223,-32768,   996,   998,  1225,
-32768,  1227,-32768,  1228,    67,-32768,-32768,-32768,   142,  1025,
  1231,  1241,  1244,    76,-32768,-32768,    81,-32768,  1011,    87,
-32768,  1017,  1252,  1018,  1256,-32768,  1257,  1259,  1263,-32768,
   769,  1266,  1030,  2944,   246,  2944,  2944,  2944,  1265,    49,
   268,  1268,  1270,  5060,-32768,  3859,-32768,    44,   150,-32768,
-32768,-32768,-32768,  1910,  1910,  1048,  1271,   234,  3078,  3078,
  1910,  3078,  1281,-32768,-32768,-32768,-32768,  3078,  1283,  2059,
-32768,-32768,  1053,-32768,  3078,  3078,-32768,-32768,-32768,-32768,
-32768,  1079,  3890,-32768,   175,-32768,  1284,  3078,  1285,  1290,
-32768,   341,-32768,-32768,  1059,  1291,   350,-32768,   360,  3078,
  1294,-32768,-32768,  1351,-32768,   372,-32768,-32768,  1295,   392,
   431,   437,  1298,   142,-32768,-32768,-32768,-32768,  1299,   449,
    10,-32768,  1300,   451,-32768,-32768,  1302,   486,  1303,-32768,
-32768,   -51,-32768,  1073,-32768,-32768,-32768,  1058,  1075,   142,
   487,-32768,   510,   577,   619,-32768,  1083,  1314,-32768,  3078,
-32768,   217,-32768,-32768,   276,-32768,-32768,   142,-32768,    49,
    49,-32768,  5060,  5060,-32768,  5060,-32768,  1317,  1317,  1317,
  5060,-32768,  2944,  5060,   142,-32768,  4736,  4763,  1269,-32768,
  1319,-32768,  3066,-32768,  1087,   624,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  4790,  1097,   245,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1099,-32768,  1100,  1101,
  1102,  1107,-32768,  1338,  1351,  1351,  1351,  1351,  1341,   212,
  1340,  5135,   138,  1116,  1116,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1339,-32768,-32768,-32768,
  1106,  1117,  1118,  1119,-32768,-32768,-32768,-32768,-32768,  1051,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  3078,  1109,  1120,
  1121,  1122,  1123,-32768,-32768,  5060,-32768,   282,  1129,    98,
  1110,-32768,-32768,-32768,   642,-32768,   649,-32768,-32768,-32768,
-32768,  3078,-32768,  3078,-32768,   402,   -10,   143,-32768,-32768,
-32768,  1125,  1134,  1125,  1351,  1397,  1398,  1174,  1195,  1189,
  1189,  1189,  5112,-32768,-32768,-32768,-32768,-32768,    15,-32768,
  1351,  1351,  1351,  1351,  1351,  1351,  1351,  1351,  1351,  1351,
  1351,  1351,  1351,  1351,  1351,  1351,  1420,  1422,  1044,-32768,
  1185,   489,   866,   139,   290,-32768,  1907,-32768,-32768,-32768,
-32768,   326,    38,    32,  1193,  1201,  1206,  1207,  1213,  1214,
  1215,  1218,  1447,   266,   338,   340,  1186,  1220,  1229,  1230,
  1232,  1233,  1240,  1245,  1221,  1246,  1253,  1260,  1262,  1267,
  1274,  1264,-32768,-32768,-32768,-32768,     5,  3471,   142,  2944,
  2944,  2944,  2944,   288,  1451,-32768,-32768,  1455,    37,   142,
-32768,-32768,   142,  1275,  4817,  3921,   150,   150,   150,   150,
    94,   100,   142,   142,  1276,  1489,  1493,   137,-32768,-32768,
   170,  1495,-32768,-32768,  1277,  1498,  1504,-32768,-32768,  1280,
-32768,  1286,  1381,  1288,  1301,-32768,  1289,-32768,  1278,-32768,
  1351,  5154,  5172,  2691,  2691,  2691,   612,   612,   612,   612,
   522,   522,  1189,  1189,  1189,  1189,  1189,-32768,-32768,-32768,
  1306,  5135,   305,  2864,-32768,  1507,   208,  1514,  1516,-32768,
-32768,  1533,  1538,  1540,  1305,  1053,  1053,   150,   150,-32768,
-32768,  1543,    30,    58,-32768,-32768,  1544,  1545,  1546,-32768,
-32768,  1547,  1550,  1553,   377,  1554,  1555,  1558,  1559,   150,
-32768,-32768,-32768,   741,  1419,  1045,   154,  1565,  1566,    60,
    49,  1910,    49,    61,  1567,-32768,-32768,  1570,  1573,   142,
  1572,  1575,  1577,  1578,   142,  1580,  1581,  1582,  1583,-32768,
  3078,-32768,  3078,-32768,  3078,-32768,-32768,   150,    49,  1586,
  1598,  1599,  1606,  1607,  1609,  1610,  1612,  1613,  1614,  1615,
  1616,  1617,  1402,  1409,  1391,  1640,-32768,-32768,  3078,  1404,
   653,   659,   664,   669,  1643,-32768,  1017,-32768,  1408,-32768,
  1417,-32768,-32768,  1649,  1650,  1651,  1653,   142,  1655,   142,
  1656,  1657,  1658,  1663,  1660,  1661,   142,  1662,  1664,  1665,
  1185,-32768,  1668,  1671,-32768,  1427,-32768,  1351,-32768,  1449,
  1458,-32768,-32768,  3226,-32768,-32768,  1351,  1457,   675,  1688,
  1690,  1693,  1017,  1694,    95,  1450,  1711,  1710,  1712,  1713,
  1715,  1717,-32768,-32768,  1718,-32768,-32768,  1720,  1722,  1724,
  1725,  1726,  1727,  1733,  1734,  1735,  1736,  1737,  1017,  1738,
  1739,  1770,-32768,  1774,  1778,  1779,  1551,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   150,-32768,-32768,  1552,-32768,   150,
-32768,-32768,  1557,  1780,  1783,-32768,-32768,-32768,  1773,  1782,
  1017,-32768,  1786,  1787,  1793,  1796,-32768,-32768,  1798,  1799,
-32768,  1503,  1563,-32768,  1594,  1595,  1600,  1608,  1603,  1604,
  1605,  1648,  3492,   629,  3513,   790,  3534,   429,   697,  1675,
  1619,  1676,  1677,  1680,  1686,  1716,  1548,  1644,  1721,  1723,
  1728,  1729,  1731,  1670,    62,    62,-32768,  1842,  3952,  1659,
  1714,  1719,  1740,  1742,-32768,-32768,   142,    37,-32768,-32768,
-32768,-32768,  1741,-32768,  1743,-32768,-32768,-32768,  1755,-32768,
-32768,  1761,-32768,-32768,-32768,  1885,   682,-32768,-32768,   150,
  5087,-32768,  3078,-32768,  1749,-32768,  5135,   150,-32768,-32768,
-32768,-32768,  1891,-32768,-32768,  1949,  1857,  1953,  1755,-32768,
-32768,-32768,-32768,-32768,   685,-32768,   698,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1769,  1956,  1960,  1961,  1966,  1963,-32768,  1969,
-32768,  1971,  2001,   275,-32768,-32768,-32768,   700,-32768,-32768,
-32768,-32768,   704,-32768,-32768,  2005,  2007,   142,  2010,  2011,
  1777,  3078,  2014,   142,   150,  3078,  1785,   142,  3078,  3078,
   142,-32768,-32768,  3078,  1788,   142,  3078,  3078,  3078,  3078,
-32768,-32768,  3078,  3078,  1791,  3078,   142,  3078,-32768,-32768,
  3078,  2015,  1794,  1795,  3078,  3078,  1797,  3078,-32768,-32768,
   142,  2016,   142,  1910,  1910,  1910,  3078,  2021,  2027,  2032,
  2034,  2035,   150,  2053,  2052,-32768,-32768,-32768,-32768,     9,
-32768,  1819,  1910,  2944,  1824,  2944,  2944,  1825,-32768,   142,
   142,  2018,   142,-32768,-32768,-32768,  1832,-32768,  1834,  3555,
-32768,  1351,  1835,-32768,-32768,  2067,-32768,  2068,-32768,  2069,
-32768,  2071,  1843,  2102,-32768,-32768,-32768,  1878,-32768,-32768,
-32768,-32768,-32768,-32768,  1125,  1125,  1125,   150,-32768,-32768,
-32768,  2110,-32768,  2116,-32768,-32768,  1886,  1880,  1882,-32768,
  3576,  1883,  1893,  1884,  3597,-32768,  2121,   204,   391,  2124,
  3618,-32768,  2125,   436,   662,   803,   886,  3639,   907,-32768,
  1029,  2126,  1192,  1219,  2127,-32768,-32768,  1258,  1415,-32768,
  1669,  1900,-32768,  1894,  1902,  1903,  1898,  3660,-32768,-32768,
  1901,  1909,  1911,  1905,  1913,-32768,   315,   321,  1922,  1923,
-32768,  3078,  1924,   718,  3078,   732,   734,-32768,  1925,  1929,
  1934,  1904,  1937,   560,-32768,  1938,  3078,  5135,  1947,  2183,
  1950,-32768,-32768,  2188,  2187,-32768,  2190,-32768,-32768,  2197,
  2204,  2205,  2209,-32768,-32768,  2215,  1910,  3078,  1549,  1910,
  2216,  2230,  2233,   142,  2022,-32768,-32768,-32768,-32768,   142,
  2070,-32768,-32768,-32768,-32768,-32768,   142,-32768,  2166,-32768,
-32768,-32768,-32768,-32768,  2214,  2262,-32768,-32768,   738,-32768,
  2234,   142,  2235,  2236,  3078,    49,  3078,  2238,  2239,    49,
  2074,  2241,  1732,-32768,  2242,-32768,-32768,  3983,  1910,  1998,
  4014,  2008,  2020,  2013,  2245,  2255,  2256,  2258,  2261,  3078,
  3078,  3078,  3078,  3078,-32768,-32768,  2031,  4045,-32768,  2168,
  2270,  2042,-32768,-32768,  2043,  2045,-32768,-32768,-32768,-32768,
-32768,  2049,  4844,  2156,  2048,  2064,-32768,  2072,  2066,-32768,
  2075,-32768,   324,-32768,-32768,-32768,-32768,-32768,-32768,  2090,
-32768,-32768,  4871,  2078,  3681,-32768,-32768,   742,    49,-32768,
    49,  1910,-32768,-32768,   383,  2143,-32768,  2091,-32768,-32768,
  2054,  2944,    37,-32768,-32768,-32768,-32768,  2304,  1775,  1892,
  2569,  2590,  2617,  3078,-32768,  2312,-32768,-32768,-32768,  1125,
  2329,  2330,  2097,  3078,  3078,  2332,   142,  3078,  2100,  3078,
   285,   142,  2341,  2348,  3078,  2349,    49,   746,-32768,-32768,
  2352,  2354,  2355,-32768,-32768,  2130,-32768,-32768,  1910,  3078,
   758,  2119,-32768,-32768,-32768,-32768,-32768,-32768,  4076,  2140,
  2146,  2148,-32768,-32768,-32768,  4898,  3702,-32768,  2150,  3723,
-32768,  4925,  2361,  3078,   142,  2382,   150,  2384,-32768,-32768,
   327,-32768,-32768,  4952,-32768,  2153,  2396,  2400,  2398,  2403,
  2407,   150,-32768,  2165,  3744,  2171,  3078,-32768,  2422,  2423,
  2425,  2310,  2426,  1910,  2193,  3078,  2358,  2194,  2430,  2638,
  2437,  2444,  2445,  2446,  2448,   142,  2217,   142,-32768,  2219,
-32768,-32768,-32768,  2455,-32768,-32768,  3078,  2237,  4979,-32768,
-32768,-32768,-32768,-32768,  2240,-32768,  5006,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  2244,-32768,  2243,  2470,
-32768,  2246,  4107,  3078,  2474,  2441,  3078,  2406,  2259,  2454,
  2492,  2502,  2494,-32768,  2496,-32768,  3765,-32768,   150,  3786,
-32768,-32768,-32768,-32768,  2499,-32768,-32768,  3078,  2503,  3078,
  2550,-32768,  3807,-32768,  5033,-32768,  3078,  2391,  2518,  4138,
  2521,-32768,-32768,  1017,  2522,  2286,-32768,  2530,  2531,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -276,-32768,-32768,  -313,  1584,-32768,
-32768,  1579,  -461,-32768,  -327,-32768,  -405,  -487,  -513,-32768,
-32768,-32768,-32768,  -398,-32768,  -562,-32768,  -912,-32768,  -629,
-32768,-32768,-32768,-32768,-32768,-32768,  1805,-32768,  1442,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1957,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1700,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1000,  -692,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768, -1415,-32768,-32768,-32768,  1342,  1178,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   977,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2047,-32768,
  1942,-32768,  2431,-32768,  2050,  2331,  -304,-32768,   438,   846,
-32768,-32768,   -26,  -542,  -533,  -147,   -16,  -114,   -13
};


#define	YYLAST		5404


static const short yytable[] = {   109,
   204,   256,   552,   801,   412,  1163,   596,   512,   629,   112,
   676,   439,   113,  1489,   446,   447,   449,   609,  1096,   939,
   656,   657,   248,  1101,  1529,    44,   619,   665,   491,   623,
  1535,   455,   627,   458,  1123,   341,  1541,   342,     4,   341,
    -2,   342,  1018,     5,  1549,   498,   341,   921,   342,   533,
  1555,  1556,     7,    28,    29,   302,   548,    30,     4,   922,
   281,   736,  1126,     5,  1171,  1177,  1376,    26,  1055,   222,
   594,   198,     7,   608,     5,   249,     4,   199,   177,   178,
   179,     5,   618,     7,   590,   550,     4,   622,    26,  1056,
     7,     5,   394,   626,     4,   810,   811,   812,   813,     5,
     7,  1265,   897,   214,   215,   483,   395,   498,     7,   930,
   613,   932,   318,   498,  1490,   751,   752,   753,   754,   499,
   223,    66,    67,    68,    69,   248,   259,   260,   261,   262,
   263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
   273,   274,   275,   276,   277,   278,   279,   280,   216,   217,
   498,   898,   541,    27,   248,   498,   285,   286,   287,   288,
   289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
   299,   300,     4,    34,   248,   933,   389,     5,   249,   586,
   390,   499,   736,   736,   736,   736,     7,   499,   380,  1255,
   391,   942,   943,   944,   945,   946,   947,   948,   949,   950,
   951,   952,   953,   954,   955,   956,   957,   249,   403,   962,
  1537,   587,   586,   925,   815,   747,   816,   926,   927,   341,
   653,   342,  1089,   982,   499,   983,   404,   249,  1164,   499,
  1293,   923,   249,   984,   398,   654,   405,   406,    28,    29,
   399,   769,    30,    35,   202,   407,  1057,   408,   400,   780,
  1491,   755,  1165,   203,    31,   250,   940,   375,   448,   781,
   379,    45,   736,   396,   492,   249,  1020,   376,   652,   284,
  1124,    36,  1019,   343,   210,   211,   786,   343,   736,   736,
   736,   736,   736,   736,   736,   736,   736,   736,   736,   736,
   736,   736,   736,   736,   218,   219,   736,    37,  1127,  1752,
  1172,  1178,   675,   535,   595,  1757,   224,   595,   681,   -66,
   457,  1104,   227,   228,    38,   339,   595,    46,    39,    47,
   528,   595,   231,   232,   777,   469,   470,   595,  1078,    40,
   235,   236,   244,   246,  1080,   595,   205,   471,    48,  1399,
   817,  1425,  1426,   206,   472,   473,   474,   392,    41,   778,
   476,   477,   283,   284,   481,   109,   411,   486,   250,  1723,
   489,  1724,   465,    42,   987,   112,   349,   284,   113,   466,
  1808,  1087,  1725,  1810,   988,   837,   989,   838,   114,  1427,
   985,  1135,  1812,   115,   928,  1726,   641,   250,   643,   644,
   645,  1428,   511,   409,  1166,  1167,   382,  1538,   736,   206,
  1008,  1727,    43,   818,   539,   401,  1831,   250,   240,   241,
  1009,   466,   250,  1118,  1119,   184,   185,   186,   187,   188,
   383,   189,   190,   191,   192,   647,   384,   193,   194,   195,
   196,   197,   -66,   544,   546,   198,    53,  1068,   149,    31,
   420,   199,  1543,   662,   542,  1010,  1011,  1012,  1013,  1014,
  1015,   466,  1691,   660,  1692,  1021,   661,  1693,   583,   907,
   908,   909,   910,   911,   912,   913,   914,   915,  1251,   894,
   916,   126,  1136,   589,   421,   128,   917,  1257,  1175,  -623,
   206,   422,  1137,   547,   206,   731,    49,   642,   284,   918,
  1060,  1728,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1694,
  1031,  1069,   129,   648,  1070,  1344,  1032,  1518,   130,  1519,
   466,   -69,  1079,  1081,  1082,  1083,  1429,   895,   206,  1088,
    50,    51,    52,  1065,   466,   785,  1729,   109,   109,   131,
   466,   990,   663,   664,   109,   666,   425,   112,   112,   132,
  1106,   671,   133,   674,   112,   782,   783,  1107,   677,   678,
  1572,   134,   426,  1226,  1345,   736,  1575,  1573,   414,  1679,
   135,   683,  1765,  1573,   736,   136,  1680,  1016,   415,  1766,
   137,   427,  1033,   694,  1035,   966,  1346,  1347,  1034,   138,
  1036,   687,   688,   145,   416,   967,   968,   969,   417,   432,
   690,   691,   139,  1074,  1075,  1076,  1077,   423,   140,  1263,
   692,   693,   184,   185,   186,   187,   188,  1090,   189,   190,
   191,   192,   737,   738,   193,   194,   195,   196,   197,   428,
   141,  1183,   198,   776,  1695,  1289,  1188,  1266,   199,   142,
   433,   143,   740,   741,   144,  1348,   149,  1589,  1590,  1591,
  1592,  1593,  1594,   919,  1696,  1696,   146,   184,   185,   186,
   187,   188,   147,   189,   190,   191,   192,  1307,   148,   193,
   194,   195,   196,   197,  1120,  1121,   150,   198,  1544,   151,
  1349,   742,   743,   199,   434,   152,   435,   744,   745,  1233,
   153,  1235,    71,    72,    73,   200,  1142,   154,  1242,   749,
   750,   758,   759,   429,    75,    76,    77,    78,   436,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
   100,   101,   102,   103,  1200,   418,   762,   763,   770,   284,
   970,   155,  1520,  1521,  1522,   156,   440,   441,   442,   443,
   157,   888,  1061,  1062,  1063,  1064,   437,   832,   833,   834,
   835,   771,   284,   836,  1327,   444,  1711,  1328,   158,    71,
    72,   176,   195,   196,   197,   905,  1389,   906,   198,  1329,
  1330,  1331,  1508,  1351,   199,   159,    79,    80,    81,    82,
    83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
   103,  1595,   160,   193,   194,   195,   196,   197,   161,  1545,
  1144,   198,  1145,  1146,  1147,  1352,  1109,   199,   772,   284,
   306,   162,  1353,  1354,   163,     5,   307,   308,  1388,   164,
  1475,  1476,  1477,  1392,     7,   830,   831,   832,   833,   834,
   835,  1298,   165,   836,  1355,   166,  1300,  1356,  1357,  1493,
  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,   201,   736,
   773,   284,  1802,  1408,   687,   795,   167,   309,   168,  1410,
  1332,  1412,   169,   184,   185,   186,   187,   188,   170,   189,
   190,   191,   192,   901,   284,   193,   194,   195,   196,   197,
   902,   903,  1546,   198,  1221,   284,  1174,   171,  1176,   199,
  1222,   284,  1432,  1358,   105,  1223,   284,  1434,   172,   106,
  1224,   284,   107,  1548,   208,  1335,  1259,   284,  1336,  1437,
   173,   255,  1395,  1396,  1201,  1443,  1409,   206,   174,  1447,
  1337,  1338,  1450,   175,  1339,  1340,  1397,  1453,  1359,  1411,
   206,  1431,   206,   239,  1403,  1433,   206,   244,  1462,   254,
   972,   257,   973,   974,   975,   976,   977,   978,   979,  1580,
   284,   258,  1472,   213,  1474,   301,   221,   226,   230,   234,
   238,   303,   243,  1582,   284,  1583,   284,  1712,  1627,  1628,
   304,   105,  1156,  1686,  1687,   109,   106,  1737,  1738,   107,
   305,  1500,  1501,  1612,  1503,   112,  1615,   319,   545,  1746,
   284,   669,   670,   325,  1193,   347,  1195,   337,  1197,   350,
   351,  1444,   374,   387,   184,   185,   186,   187,   188,   381,
   189,   190,   191,   192,   431,   388,   193,   194,   195,   196,
   197,  1341,  1219,   450,   198,  1550,   451,   452,   453,  1643,
   199,   454,   460,   459,   461,  1648,    71,    72,   696,   463,
   468,   484,   479,   475,   313,   853,   478,   487,   488,  1484,
   493,   494,   495,    79,    80,    81,    82,    83,   697,   698,
   699,   700,   701,   702,   703,   704,   705,   706,   707,   708,
   709,   710,   711,   712,   713,   714,   715,   716,   717,   718,
   719,   720,   721,   722,   496,   497,   502,   184,   185,   186,
   187,   188,   503,   189,   190,   191,   192,   980,  1690,   193,
   194,   195,   196,   197,  1523,   504,   505,   198,   184,   185,
   186,   187,   188,   199,   189,   190,   191,   192,   506,   507,
   193,   194,   195,   196,   197,  1619,   508,   509,   198,   510,
   513,  1621,   514,   515,   199,   516,   517,   520,  1623,   518,
   521,   522,   523,   723,  1148,  1149,  1150,  1151,  1152,  1153,
  1154,  1160,   525,  1630,   526,  1744,   327,   328,   329,   330,
   331,   332,   333,   334,   335,   527,   529,   530,   854,   531,
   855,   856,   857,   858,   532,   859,   860,   861,   862,   863,
   864,  1702,   534,   536,   865,   537,   538,   866,  1552,   540,
   867,   549,   553,   868,   869,   870,   871,   872,   873,   874,
   875,   876,   877,   878,   879,   880,   881,   574,   581,   882,
  1785,   591,  1749,   593,   883,  1553,  1400,   884,   582,   598,
   600,   602,   601,   605,   607,   614,  1494,   615,  1496,  1497,
   184,   185,   186,   187,   188,   616,   189,   190,   191,   192,
   617,   625,   193,   194,   195,   196,   197,   339,   630,   631,
   198,   724,   633,   635,  1557,   636,   199,   725,   726,   637,
   639,   646,   640,   727,   649,   659,   728,   650,  1719,   960,
   961,   729,   730,  1731,   731,   667,  1161,   672,   658,   679,
   682,   684,   885,   675,   685,  1441,   485,   689,   695,  1445,
   767,   739,  1448,  1449,   746,   748,   757,  1451,   761,   764,
  1454,  1455,  1456,  1457,   766,   768,  1458,  1459,   774,  1461,
   775,  1463,   784,   790,  1464,   791,  1761,   794,  1468,  1469,
  1845,  1471,   800,   802,   804,   805,   806,   109,   109,   109,
  1478,   807,   809,   814,   819,   846,   848,   112,   112,   112,
   839,   889,   900,    71,    72,   696,   109,   849,   850,   851,
   890,   891,   892,   893,   896,   731,   112,  1797,   931,  1799,
    79,    80,    81,    82,    83,   697,   698,   699,   700,   701,
   702,   703,   704,   705,   706,   707,   708,   709,   710,   711,
   712,   713,   714,   715,   716,   717,   718,   719,   720,   721,
   722,   934,   935,   184,   185,   186,   187,   188,   936,   189,
   190,   191,   192,  1763,   937,   193,   194,   195,   196,   197,
   836,  1558,   958,   198,   959,   964,  1037,  1022,  1774,   199,
   184,   185,   186,   187,   188,  1023,   189,   190,   191,   192,
  1024,  1025,   193,   194,   195,   196,   197,  1026,  1027,  1028,
   198,  1634,  1029,  1030,  1038,  1638,   199,  1066,    54,  1067,
   723,  1045,    55,  1039,  1040,  1578,  1041,  1042,  1581,   184,
   185,   186,   187,   188,  1043,   189,   190,   191,   192,  1044,
  1598,   193,   194,   195,   196,   197,  1046,  1047,  1144,   198,
  1145,  1146,  1147,  1085,  1048,   199,  1049,  1086,  1052,  1091,
   109,  1613,  1093,   109,  1701,  1829,    56,  1050,  1094,  1071,
   112,  1110,    57,   112,  1051,  1095,  1084,  1092,   897,  1103,
  1113,  1097,  1099,  1102,  1688,    58,  1689,    59,  1148,  1149,
  1150,  1151,  1152,  1153,  1154,  1155,  1100,  1114,  1633,    60,
  1635,  1105,  1115,    61,  1116,  1117,   109,  1122,  1129,  1130,
  1131,  1132,   109,   853,  1133,    62,   112,  1134,  1138,  1139,
  1140,  1141,   112,  1659,  1660,  1661,  1662,  1663,   724,  1169,
  1170,  1180,  1736,    63,   725,   726,  1181,  1182,  1184,  1185,
   727,  1186,  1187,   728,  1189,  1190,  1191,  1192,   729,   730,
  1202,   731,   820,   821,   822,   823,   824,   825,   826,   827,
   828,   829,  1203,  1204,   830,   831,   832,   833,   834,   835,
  1205,  1206,   836,  1207,  1208,   109,  1209,  1210,  1211,  1212,
  1213,  1214,    64,  1098,    65,   112,   184,   185,   186,   187,
   188,  1217,   189,   190,   191,   192,  1215,  1709,   193,   194,
   195,   196,   197,  1216,  1218,  1220,   198,  1716,  1717,  1225,
  1227,  1720,   199,  1722,  1228,  1229,  1230,  1231,  1734,  1232,
  1159,  1234,  1236,  1237,  1238,  1239,  1240,  1241,  1243,  1250,
  1244,  1245,   109,  1745,  1248,  1560,   854,  1249,   855,   856,
   857,   858,   112,   859,   860,   861,   862,   863,   864,  1253,
  1267,  1258,   865,  1254,  1260,   866,  1261,  1760,   867,  1262,
  1264,   868,   869,   870,   871,   872,   873,   874,   875,   876,
   877,   878,   879,   880,   881,  1269,  1270,   882,  1271,  1272,
  1779,  1273,   883,  1274,  1276,   884,  1278,   109,  1279,  1787,
  1280,  1281,  1282,  1283,    71,    72,    73,   112,  1316,  1284,
  1285,  1286,  1287,  1288,  1290,  1291,    75,    76,    77,    78,
  1803,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,   100,   101,   102,   103,  1292,  1817,  1294,  1305,
  1820,  1704,  1295,  1296,  1302,  1297,  1299,  1303,  1306,  1368,
  1614,  1301,  1309,  1310,    71,    72,   482,    74,  1317,  1311,
    30,  1833,  1312,  1835,  1314,  1315,    75,    76,    77,    78,
  1840,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,   100,   101,   102,   103,  1318,  1319,    71,    72,
    73,    74,  1320,  1321,    30,  1322,  1323,  1324,  1381,   249,
    75,    76,    77,    78,  1362,    79,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
   184,   185,   186,   187,   188,  1369,   189,   190,   191,   192,
  1325,  1394,   193,   194,   195,   196,   197,  1404,  1705,  1383,
   198,   189,   190,   191,   192,  1375,   199,   193,   194,   195,
   196,   197,    71,    72,    73,   198,   554,  1361,  1363,  1364,
  1641,   199,  1365,  1642,    75,    76,    77,    78,  1366,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
   100,   101,   102,   103,  1384,  1405,   105,  1406,  1367,  1407,
  1385,   106,  1415,  1370,   107,  1371,  1416,  1417,  1418,  1419,
  1372,  1373,   108,  1374,   555,  1421,   992,  1423,   993,   994,
  1386,   995,  1387,  1390,  1401,  1391,   184,   185,   186,   187,
   188,   996,   189,   190,   191,   192,   104,   206,   193,   194,
   195,   196,   197,  1393,  1414,   556,   198,  1424,   997,   998,
   999,  1435,   199,  1436,  1438,  1439,   105,  1440,  1442,  1465,
  1502,   106,  1473,  1000,   107,  1446,   853,  1479,  1452,   250,
   557,  1460,   108,  1480,  1466,  1467,  1481,  1470,  1482,  1483,
   104,   558,   559,   560,   561,   562,   563,   564,   565,   566,
   567,   568,   569,   570,   571,   572,   573,  1485,  1486,  1492,
   105,    71,    72,   176,  1495,   106,  1498,  1505,   107,  1506,
  1509,  1510,  1511,  1512,   853,  1513,   108,  1514,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
   101,   102,   103,   184,   185,   186,   187,   188,  1516,   189,
   190,   191,   192,  1517,  1524,   193,   194,   195,   196,   197,
  1525,  1526,  1527,   198,  1528,  1531,  1533,  1536,  1532,   199,
  1539,  1542,  1551,  1554,   105,  1561,  1562,  1563,  1564,   106,
  1565,  1001,   107,  1567,  1568,  1587,  1569,  1570,  1002,   854,
   108,   855,   856,   857,   858,  1571,   859,   860,   861,   862,
   863,   864,  1576,  1577,  1585,   865,  1579,  1584,   866,  1586,
   853,   867,  1588,  1597,   868,   869,   870,   871,   872,   873,
   874,   875,   876,   877,   878,   879,   880,   881,  1599,  1600,
   882,  1601,  1602,  1603,  1639,   883,  1604,   854,   884,   855,
   856,   857,   858,  1607,   859,   860,   861,   862,   863,   864,
  1608,  1609,  1691,   865,  1692,  1610,   866,  1693,   853,   867,
  1616,  1611,   868,   869,   870,   871,   872,   873,   874,   875,
   876,   877,   878,   879,   880,   881,  1617,  1618,   882,  1649,
  1629,  1631,  1632,   883,  1636,  1637,   884,  1640,  1644,  1651,
  1653,  1654,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1694,
  1652,  1655,  1656,  1620,  1657,  1658,   853,  1666,   186,   187,
   188,  1664,   189,   190,   191,   192,  1667,  1668,   193,   194,
   195,   196,   197,   105,  1671,  1669,   198,  1670,   106,  1673,
  1674,   107,   199,   854,  1700,   855,   856,   857,   858,   673,
   859,   860,   861,   862,   863,   864,  1675,  1676,  1677,   865,
  1703,  1622,   866,  1684,   853,   867,  1710,  1678,   868,   869,
   870,   871,   872,   873,   874,   875,   876,   877,   878,   879,
   880,   881,  1682,  1699,   882,  1713,  1714,  1715,  1718,   883,
  1721,   854,   884,   855,   856,   857,   858,  1732,   859,   860,
   861,   862,   863,   864,  1733,  1735,  1739,   865,  1740,  1741,
   866,  1747,   853,   867,  1743,  1759,   868,   869,   870,   871,
   872,   873,   874,   875,   876,   877,   878,   879,   880,   881,
   595,  1750,   882,  1751,  1698,  1755,  1762,   883,  1764,   854,
   884,   855,   856,   857,   858,  1768,   859,   860,   861,   862,
   863,   864,  1769,  1770,  1771,   865,  1776,  1624,   866,  1772,
   853,   867,  1778,  1773,   868,   869,   870,   871,   872,   873,
   874,   875,   876,   877,   878,   879,   880,   881,  1780,  1781,
   882,  1782,  1784,  1786,  1789,   883,  1790,   854,   884,   855,
   856,   857,   858,  1792,   859,   860,   861,   862,   863,   864,
  1793,  1794,  1795,   865,  1796,  1625,   866,  1798,   853,   867,
  1800,  1801,   868,   869,   870,   871,   872,   873,   874,   875,
   876,   877,   878,   879,   880,   881,  1814,  1804,   882,  1811,
  1818,  1815,  1807,   883,  1813,   854,   884,   855,   856,   857,
   858,  1819,   859,   860,   861,   862,   863,   864,  1824,  1822,
  1826,   865,  1827,  1626,   866,  1832,   853,   867,  1841,  1834,
   868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
   878,   879,   880,   881,  1842,  1844,   882,  1847,  1846,  1849,
  1850,   883,  1246,   854,   884,   855,   856,   857,   858,   841,
   859,   860,   861,   862,   863,   864,  1112,   686,  1005,   865,
  1111,  1783,   866,  1646,   853,   867,  1488,  1379,   868,   869,
   870,   871,   872,   873,   874,   875,   876,   877,   878,   879,
   880,   881,   634,   765,   882,  1706,   247,   338,     0,   883,
   638,   854,   884,   855,   856,   857,   858,     0,   859,   860,
   861,   862,   863,   864,     0,     0,  1707,   865,     0,  1788,
   866,     0,     0,   867,     0,     0,   868,   869,   870,   871,
   872,   873,   874,   875,   876,   877,   878,   879,   880,   881,
     0,     0,   882,  1708,     0,     0,     0,   883,     0,   854,
   884,   855,   856,   857,   858,     0,   859,   860,   861,   862,
   863,   864,     0,     0,  1791,   865,     0,  1821,   866,     0,
     0,   867,     0,     0,   868,   869,   870,   871,   872,   873,
   874,   875,   876,   877,   878,   879,   880,   881,     0,     0,
   882,     0,     0,     0,     0,   883,     0,   854,   884,   855,
   856,   857,   858,     0,   859,   860,   861,   862,   863,   864,
     0,     0,     0,   865,     0,  1823,   866,     0,     0,   867,
     0,     0,   868,   869,   870,   871,   872,   873,   874,   875,
   876,   877,   878,   879,   880,   881,     0,     0,   882,     0,
   183,     0,     0,   883,     0,     0,   884,    71,    72,   176,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,  1825,    79,    80,    81,    82,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   184,   185,   186,   187,   188,     0,   189,   190,   191,   192,
     0,  1836,   193,   194,   195,   196,   197,     0,     0,     0,
   198,   184,   185,   186,   187,   188,   199,   189,   190,   191,
   192,     0,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,     0,     0,     0,     0,     0,   199,   184,   185,
   186,   187,   188,     0,   189,   190,   191,   192,     0,     0,
   193,   194,   195,   196,   197,     0,     0,     0,   198,   184,
   185,   186,   187,   188,   199,   189,   190,   191,   192,     0,
     0,   193,   194,   195,   196,   197,    71,    72,    73,   198,
     0,     0,     0,     0,     0,   199,     0,     0,    75,    76,
    77,    78,     0,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,   100,   101,   102,   103,   826,   827,
   828,   829,     0,     0,   830,   831,   832,   833,   834,   835,
     0,  1108,   836,     0,   184,   185,   186,   187,   188,     0,
   189,   190,   191,   192,     0,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,     0,    71,    72,    73,   105,
   199,     0,     0,     0,   106,     0,     0,   107,    75,    76,
    77,    78,   485,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,   100,   101,   102,   103,    71,    72,
   176,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    79,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
    71,    72,   176,   480,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
   102,   103,     0,   792,     0,     0,     0,     0,     0,     0,
    71,    72,   176,     0,     0,     0,     0,     0,   105,     0,
     0,     0,     0,   106,     0,     0,   107,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
   102,   103,   543,    72,   176,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
   100,   101,   102,   103,   377,     0,     0,     0,   105,     0,
     0,     0,     0,   106,     0,     0,   107,     0,     0,     0,
     0,     0,     0,     0,     0,   378,     0,     0,   187,   188,
   456,   189,   190,   191,   192,     0,     0,   193,   194,   195,
   196,   197,     0,     0,     0,   198,   588,     0,     0,     0,
   105,   199,     0,     0,     0,   106,     0,     0,   107,     0,
     0,     0,   184,   185,   186,   187,   188,     0,   189,   190,
   191,   192,     0,  1256,   193,   194,   195,   196,   197,     0,
     0,     0,   198,     0,     0,     0,     0,     0,   199,     0,
     0,     0,   105,   352,     0,     0,     0,   106,     0,     0,
   107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   184,   185,   186,
   187,   188,     0,   189,   190,   191,   192,     0,     0,   193,
   194,   195,   196,   197,     0,     0,     0,   198,     0,   793,
     0,     0,   105,   199,     0,     0,     0,   106,     0,     0,
   107,   184,   185,   186,   187,   188,     0,   189,   190,   191,
   192,     0,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,     0,     0,     0,     0,     0,   199,     0,     0,
     0,     0,   353,     0,   105,     0,     0,     0,     0,   106,
     0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   184,   185,
   186,   187,   188,     0,   189,   190,   191,   192,     0,     0,
   193,   194,   195,   196,   197,     0,     0,     0,   198,   184,
   185,   186,   187,   188,   199,   189,   190,   191,   192,     0,
     0,   193,   194,   195,   196,   197,     0,     0,     0,   198,
   184,   185,   186,   187,   188,   199,   189,   190,   191,   192,
     0,     0,   193,   194,   195,   196,   197,     0,     0,     0,
   198,     0,     0,     0,     0,     0,   199,   820,   821,   822,
   823,   824,   825,   826,   827,   828,   829,     0,     0,   830,
   831,   832,   833,   834,   835,     4,     0,   836,     0,     0,
     5,     0,     0,     6,   184,   185,   186,   187,   188,     7,
   189,   190,   191,   192,     0,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,     0,     0,     0,     0,     0,
   199,     0,     0,     0,     0,   364,     0,     0,     0,     0,
     0,     8,     0,     0,     0,     0,     0,     9,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    10,     0,    11,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    12,     0,     0,     0,    13,   184,
   185,   186,   187,   188,     0,   189,   190,   191,   192,     0,
    14,   193,   194,   195,   196,   197,     0,     0,     0,   198,
     0,     0,     0,     0,     0,   199,     0,     0,    15,     0,
   371,   184,   185,   186,   187,   188,     0,   189,   190,   191,
   192,     0,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,   184,   185,   186,   187,   188,   199,   189,   190,
   191,   192,   372,     0,   193,   194,   195,   196,   197,     0,
     0,     0,   198,     0,     0,     0,     0,    16,   199,    17,
     0,     0,     0,   373,   184,   185,   186,   187,   188,     0,
   189,   190,   191,   192,     0,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,     0,     0,     0,     0,     0,
   199,     0,     0,     0,     0,   575,     0,     0,    18,    19,
    20,   184,   185,   186,   187,   188,     0,   189,   190,   191,
   192,     0,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,   184,   185,   186,   187,   188,   199,   189,   190,
   191,   192,   576,     0,   193,   194,   195,   196,   197,     0,
     0,     0,   198,   184,   185,   186,   187,   188,   199,   189,
   190,   191,   192,  1059,     0,   193,   194,   195,   196,   197,
     0,     0,     0,   198,   184,   185,   186,   187,   188,   199,
   189,   190,   191,   192,  1326,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,   184,   185,   186,   187,   188,
   199,   189,   190,   191,   192,  1334,     0,   193,   194,   195,
   196,   197,     0,     0,     0,   198,   184,   185,   186,   187,
   188,   199,   189,   190,   191,   192,  1343,     0,   193,   194,
   195,   196,   197,     0,     0,     0,   198,   184,   185,   186,
   187,   188,   199,   189,   190,   191,   192,  1507,     0,   193,
   194,   195,   196,   197,     0,     0,     0,   198,   184,   185,
   186,   187,   188,   199,   189,   190,   191,   192,  1530,     0,
   193,   194,   195,   196,   197,     0,     0,     0,   198,   184,
   185,   186,   187,   188,   199,   189,   190,   191,   192,  1534,
     0,   193,   194,   195,   196,   197,     0,     0,     0,   198,
   184,   185,   186,   187,   188,   199,   189,   190,   191,   192,
  1540,     0,   193,   194,   195,   196,   197,     0,     0,     0,
   198,   184,   185,   186,   187,   188,   199,   189,   190,   191,
   192,  1547,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,   184,   185,   186,   187,   188,   199,   189,   190,
   191,   192,  1566,     0,   193,   194,   195,   196,   197,     0,
     0,     0,   198,   184,   185,   186,   187,   188,   199,   189,
   190,   191,   192,  1685,     0,   193,   194,   195,   196,   197,
     0,     0,     0,   198,   184,   185,   186,   187,   188,   199,
   189,   190,   191,   192,  1754,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,   184,   185,   186,   187,   188,
   199,   189,   190,   191,   192,  1756,     0,   193,   194,   195,
   196,   197,     0,     0,     0,   198,   184,   185,   186,   187,
   188,   199,   189,   190,   191,   192,  1777,     0,   193,   194,
   195,   196,   197,     0,     0,     0,   198,   184,   185,   186,
   187,   188,   199,   189,   190,   191,   192,  1828,     0,   193,
   194,   195,   196,   197,     0,     0,     0,   198,   184,   185,
   186,   187,   188,   199,   189,   190,   191,   192,  1830,     0,
   193,   194,   195,   196,   197,     0,     0,     0,   198,   184,
   185,   186,   187,   188,   199,   189,   190,   191,   192,  1837,
     0,   193,   194,   195,   196,   197,     0,     0,     0,   198,
     0,     0,     0,     0,     0,   199,     0,     0,     0,   584,
   184,   185,   186,   187,   188,     0,   189,   190,   191,   192,
     0,     0,   193,   194,   195,   196,   197,     0,     0,     0,
   198,     0,     0,     0,     0,     0,   199,     0,     0,     0,
   651,   184,   185,   186,   187,   188,     0,   189,   190,   191,
   192,     0,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,     0,     0,     0,     0,     0,   199,     0,     0,
     0,   680,   184,   185,   186,   187,   188,     0,   189,   190,
   191,   192,     0,     0,   193,   194,   195,   196,   197,     0,
     0,     0,   198,     0,     0,     0,     0,     0,   199,     0,
     0,     0,  1073,   184,   185,   186,   187,   188,     0,   189,
   190,   191,   192,     0,     0,   193,   194,   195,   196,   197,
     0,     0,     0,   198,     0,     0,     0,     0,     0,   199,
     0,     0,     0,  1382,   184,   185,   186,   187,   188,     0,
   189,   190,   191,   192,     0,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,     0,     0,     0,     0,     0,
   199,     0,     0,     0,  1647,   184,   185,   186,   187,   188,
     0,   189,   190,   191,   192,     0,     0,   193,   194,   195,
   196,   197,     0,     0,     0,   198,     0,     0,     0,     0,
     0,   199,     0,     0,     0,  1650,   184,   185,   186,   187,
   188,     0,   189,   190,   191,   192,     0,     0,   193,   194,
   195,   196,   197,     0,     0,     0,   198,     0,     0,     0,
     0,     0,   199,     0,     0,     0,  1665,   184,   185,   186,
   187,   188,     0,   189,   190,   191,   192,     0,     0,   193,
   194,   195,   196,   197,     0,     0,     0,   198,     0,     0,
     0,     0,     0,   199,     0,     0,     0,  1748,   184,   185,
   186,   187,   188,     0,   189,   190,   191,   192,     0,     0,
   193,   194,   195,   196,   197,     0,     0,     0,   198,     0,
     0,     0,     0,     0,   199,     0,     0,     0,  1816,   184,
   185,   186,   187,   188,     0,   189,   190,   191,   192,     0,
     0,   193,   194,   195,   196,   197,     0,     0,     0,   198,
     0,     0,     0,     0,     0,   199,     0,     0,     0,  1843,
   184,   185,   186,   187,   188,     0,   189,   190,   191,   192,
     0,     0,   193,   194,   195,   196,   197,     0,     0,     0,
   198,     0,   282,     0,     0,     0,   199,   184,   185,   186,
   187,   188,     0,   189,   190,   191,   192,     0,     0,   193,
   194,   195,   196,   197,     0,     0,     0,   198,     0,     0,
     0,   354,     0,   199,   184,   185,   186,   187,   188,     0,
   189,   190,   191,   192,     0,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,     0,     0,     0,   355,     0,
   199,   184,   185,   186,   187,   188,     0,   189,   190,   191,
   192,     0,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,     0,     0,     0,   356,     0,   199,   184,   185,
   186,   187,   188,     0,   189,   190,   191,   192,     0,     0,
   193,   194,   195,   196,   197,     0,     0,     0,   198,     0,
     0,     0,   357,     0,   199,   184,   185,   186,   187,   188,
     0,   189,   190,   191,   192,     0,     0,   193,   194,   195,
   196,   197,     0,     0,     0,   198,     0,     0,     0,   358,
     0,   199,   184,   185,   186,   187,   188,     0,   189,   190,
   191,   192,     0,     0,   193,   194,   195,   196,   197,     0,
     0,     0,   198,     0,     0,     0,   359,     0,   199,   184,
   185,   186,   187,   188,     0,   189,   190,   191,   192,     0,
     0,   193,   194,   195,   196,   197,     0,     0,     0,   198,
     0,     0,     0,   360,     0,   199,   184,   185,   186,   187,
   188,     0,   189,   190,   191,   192,     0,     0,   193,   194,
   195,   196,   197,     0,     0,     0,   198,     0,     0,     0,
   361,     0,   199,   184,   185,   186,   187,   188,     0,   189,
   190,   191,   192,     0,     0,   193,   194,   195,   196,   197,
     0,     0,     0,   198,     0,     0,     0,   362,     0,   199,
   184,   185,   186,   187,   188,     0,   189,   190,   191,   192,
     0,     0,   193,   194,   195,   196,   197,     0,     0,     0,
   198,     0,     0,     0,   363,     0,   199,   184,   185,   186,
   187,   188,     0,   189,   190,   191,   192,     0,     0,   193,
   194,   195,   196,   197,     0,     0,     0,   198,     0,     0,
     0,   365,     0,   199,   184,   185,   186,   187,   188,     0,
   189,   190,   191,   192,     0,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,     0,     0,     0,   366,     0,
   199,   184,   185,   186,   187,   188,     0,   189,   190,   191,
   192,     0,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,     0,     0,     0,   367,     0,   199,   184,   185,
   186,   187,   188,     0,   189,   190,   191,   192,     0,     0,
   193,   194,   195,   196,   197,     0,     0,     0,   198,     0,
     0,     0,   368,     0,   199,   184,   185,   186,   187,   188,
     0,   189,   190,   191,   192,     0,     0,   193,   194,   195,
   196,   197,     0,     0,     0,   198,     0,     0,     0,   369,
     0,   199,   184,   185,   186,   187,   188,     0,   189,   190,
   191,   192,     0,     0,   193,   194,   195,   196,   197,     0,
     0,     0,   198,     0,     0,     0,   370,     0,   199,   184,
   185,   186,   187,   188,     0,   189,   190,   191,   192,     0,
     0,   193,   194,   195,   196,   197,     0,     0,     0,   198,
     0,     0,     0,   577,     0,   199,   184,   185,   186,   187,
   188,     0,   189,   190,   191,   192,     0,     0,   193,   194,
   195,   196,   197,     0,     0,     0,   198,     0,     0,     0,
   578,     0,   199,   184,   185,   186,   187,   188,     0,   189,
   190,   191,   192,     0,     0,   193,   194,   195,   196,   197,
     0,     0,     0,   198,     0,     0,     0,   579,     0,   199,
   184,   185,   186,   187,   188,     0,   189,   190,   191,   192,
     0,     0,   193,   194,   195,   196,   197,     0,     0,     0,
   198,     0,     0,     0,   580,     0,   199,   184,   185,   186,
   187,   188,     0,   189,   190,   191,   192,     0,     0,   193,
   194,   195,   196,   197,     0,     0,     0,   198,     0,     0,
     0,   788,     0,   199,   184,   185,   186,   187,   188,     0,
   189,   190,   191,   192,     0,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,     0,     0,     0,   789,     0,
   199,   184,   185,   186,   187,   188,     0,   189,   190,   191,
   192,     0,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,     0,     0,     0,   799,     0,   199,   184,   185,
   186,   187,   188,     0,   189,   190,   191,   192,     0,     0,
   193,   194,   195,   196,   197,     0,     0,     0,   198,     0,
  1072,     0,     0,     0,   199,   184,   185,   186,   187,   188,
     0,   189,   190,   191,   192,     0,     0,   193,   194,   195,
   196,   197,     0,     0,     0,   198,     0,     0,     0,  1672,
     0,   199,   184,   185,   186,   187,   188,     0,   189,   190,
   191,   192,     0,     0,   193,   194,   195,   196,   197,     0,
     0,     0,   198,     0,     0,     0,  1683,     0,   199,   184,
   185,   186,   187,   188,     0,   189,   190,   191,   192,     0,
     0,   193,   194,   195,   196,   197,     0,     0,     0,   198,
     0,     0,     0,  1753,     0,   199,   184,   185,   186,   187,
   188,     0,   189,   190,   191,   192,     0,     0,   193,   194,
   195,   196,   197,     0,     0,     0,   198,     0,     0,     0,
  1758,     0,   199,   184,   185,   186,   187,   188,     0,   189,
   190,   191,   192,     0,     0,   193,   194,   195,   196,   197,
     0,     0,     0,   198,     0,     0,     0,  1767,     0,   199,
   184,   185,   186,   187,   188,     0,   189,   190,   191,   192,
     0,     0,   193,   194,   195,   196,   197,     0,     0,     0,
   198,     0,     0,     0,  1805,     0,   199,   184,   185,   186,
   187,   188,     0,   189,   190,   191,   192,     0,     0,   193,
   194,   195,   196,   197,     0,     0,     0,   198,     0,     0,
     0,  1809,     0,   199,   184,   185,   186,   187,   188,     0,
   189,   190,   191,   192,     0,     0,   193,   194,   195,   196,
   197,     0,     0,     0,   198,     0,     0,     0,  1839,     0,
   199,   184,   185,   186,   187,   188,     0,   189,   190,   191,
   192,     0,     0,   193,   194,   195,   196,   197,     0,     0,
     0,   198,     0,     0,     0,     0,     0,   199,   820,   821,
   822,   823,   824,   825,   826,   827,   828,   829,     0,     0,
   830,   831,   832,   833,   834,   835,     0,     0,   836,     0,
     0,     0,  1398,   820,   821,   822,   823,   824,   825,   826,
   827,   828,   829,     0,     0,   830,   831,   832,   833,   834,
   835,     0,     0,   836,     0,   938,   820,   821,   822,   823,
   824,   825,   826,   827,   828,   829,     0,     0,   830,   831,
   832,   833,   834,   835,     0,     0,   836,   822,   823,   824,
   825,   826,   827,   828,   829,     0,     0,   830,   831,   832,
   833,   834,   835,     0,     0,   836,   823,   824,   825,   826,
   827,   828,   829,     0,     0,   830,   831,   832,   833,   834,
   835,     0,     0,   836
};

static const short yycheck[] = {    26,
   115,   149,   464,   696,   318,  1006,   494,   413,   522,    26,
   573,   325,    26,     5,   328,   329,   330,   505,   931,     5,
   554,   555,     5,   936,  1440,     5,   514,   561,     5,   517,
  1446,   336,   520,   338,     5,     3,  1452,     5,     5,     3,
     0,     5,     5,    10,  1460,    14,     3,    58,     5,   448,
  1466,  1467,    19,     5,     6,   203,   462,     9,     5,    70,
   175,   604,     5,    10,     5,     5,     5,   211,    64,     5,
     7,   232,    19,     7,    10,    58,     5,   238,   105,   106,
   107,    10,     7,    19,   490,    53,     5,     7,   211,    85,
    19,    10,    71,     7,     5,   725,   726,   727,   728,    10,
    19,     7,     5,   241,   242,   382,    85,    14,    19,   802,
   509,   804,   235,    14,   106,   106,   107,   108,   109,    88,
    56,   173,   174,   175,   176,     5,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,   170,   171,   172,   173,   174,   241,   242,
    14,    54,   457,   233,     5,    14,   183,   184,   185,   186,
   187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
   197,   198,     5,   235,     5,   805,    71,    10,    58,     5,
    75,    88,   725,   726,   727,   728,    19,    88,   303,  1102,
    85,   821,   822,   823,   824,   825,   826,   827,   828,   829,
   830,   831,   832,   833,   834,   835,   836,    58,    57,   839,
     7,   488,     5,    71,     3,   614,     5,    75,    76,     3,
   548,     5,    53,    85,    88,    87,    75,    58,    75,    88,
  1143,   242,    58,    95,    71,   549,    85,    86,     5,     6,
    77,   640,     9,   241,   234,    94,   242,    96,    85,   655,
   242,   242,    99,   243,   206,   238,   242,   284,   241,   658,
   234,   241,   805,   242,   241,    58,   235,   284,   225,   243,
   241,   241,   235,   241,   241,   242,   675,   241,   821,   822,
   823,   824,   825,   826,   827,   828,   829,   830,   831,   832,
   833,   834,   835,   836,   241,   242,   839,   241,   241,  1715,
   241,   241,   241,   451,   241,  1721,   242,   241,   585,   235,
   337,   941,   241,   242,   241,   241,   241,     5,   241,     7,
   435,   241,   241,   242,   652,   352,   353,   241,   235,   241,
   241,   242,     5,     6,   235,   241,   236,   364,    26,  1252,
   129,    67,    68,   243,   371,   372,   373,   242,   241,   654,
   377,   378,   242,   243,   381,   382,   236,   384,   238,    75,
   387,    77,   236,   241,    75,   382,   242,   243,   382,   243,
  1786,   235,    88,  1789,    85,   238,    87,   240,     6,   105,
   242,     5,  1798,   235,   242,   101,   534,   238,   536,   537,
   538,   117,   236,   242,   241,   242,   211,     7,   941,   243,
    75,   117,   241,   192,   236,   242,  1822,   238,   241,   242,
    85,   243,   238,   976,   977,   212,   213,   214,   215,   216,
   235,   218,   219,   220,   221,   540,   241,   224,   225,   226,
   227,   228,   235,   460,   461,   232,     7,   899,   241,   206,
    85,   238,     7,   558,   236,   120,   121,   122,   123,   124,
   125,   243,    70,   220,    72,   854,   223,    75,   485,    58,
    59,    60,    61,    62,    63,    64,    65,    66,  1098,   774,
    69,   171,    96,   236,   119,     7,    75,  1107,  1012,   235,
   243,   126,   106,   242,   243,   241,   174,   242,   243,    88,
   889,   207,   110,   111,   112,   113,   114,   115,   116,   117,
   235,   900,     7,   236,   903,    77,   241,  1420,     7,  1422,
   243,   236,   911,   912,   913,   914,   242,   236,   243,   918,
   208,   209,   210,   236,   243,   673,   242,   554,   555,     7,
   243,   242,   559,   560,   561,   562,    85,   554,   555,     7,
   236,   568,     7,   570,   561,   660,   661,   243,   575,   576,
   236,     7,   101,  1067,   126,  1098,   236,   243,    75,   236,
     7,   588,   236,   243,  1107,     7,   243,   242,    85,   243,
     7,   120,   235,   600,   235,    87,   148,   149,   241,     7,
   241,   241,   242,   235,   101,    97,    98,    99,   105,    85,
   241,   242,     7,   907,   908,   909,   910,   242,     7,  1113,
   241,   242,   212,   213,   214,   215,   216,   921,   218,   219,
   220,   221,   241,   242,   224,   225,   226,   227,   228,   168,
     7,  1020,   232,   650,   242,  1139,  1025,  1115,   238,     7,
   126,     7,   241,   242,     7,   207,   241,    78,    79,    80,
    81,    82,    83,   242,  1645,  1646,   235,   212,   213,   214,
   215,   216,   235,   218,   219,   220,   221,  1171,   235,   224,
   225,   226,   227,   228,   978,   979,     7,   232,     7,   235,
   242,   241,   242,   238,   170,   235,   172,   241,   242,  1078,
   235,  1080,     3,     4,     5,     7,  1000,   235,  1087,   241,
   242,   241,   242,   242,    15,    16,    17,    18,   194,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,  1038,   242,   241,   242,   242,   243,
   242,   235,  1425,  1426,  1427,   235,   224,   225,   226,   227,
   235,   768,   890,   891,   892,   893,   242,   226,   227,   228,
   229,   242,   243,   232,   126,   243,  1669,   129,   235,     3,
     4,     5,   226,   227,   228,   792,  1228,   794,   232,   141,
   142,   143,  1402,    77,   238,   235,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,   242,   235,   224,   225,   226,   227,   228,   235,     7,
    70,   232,    72,    73,    74,   119,   964,   238,   242,   243,
     5,   235,   126,   127,   235,    10,    11,    12,  1227,   235,
  1364,  1365,  1366,  1239,    19,   224,   225,   226,   227,   228,
   229,  1155,   235,   232,   148,   235,  1160,   151,   152,  1383,
   110,   111,   112,   113,   114,   115,   116,   117,     7,  1402,
   242,   243,  1775,  1269,   241,   242,   235,    52,   235,  1275,
   242,  1277,   235,   212,   213,   214,   215,   216,   235,   218,
   219,   220,   221,   242,   243,   224,   225,   226,   227,   228,
   242,   243,     7,   232,   242,   243,  1011,   235,  1013,   238,
   242,   243,  1308,   207,   225,   242,   243,  1313,   235,   230,
   242,   243,   233,     7,   242,   126,   242,   243,   129,  1318,
   235,   242,   241,   242,  1039,  1324,   242,   243,   235,  1328,
   141,   142,  1331,   235,   145,   146,  1250,  1336,   242,   242,
   243,   242,   243,     5,  1258,   242,   243,     5,  1347,     6,
    85,     5,    87,    88,    89,    90,    91,    92,    93,   242,
   243,     5,  1361,   118,  1363,     7,   121,   122,   123,   124,
   125,   243,   127,   242,   243,   242,   243,  1670,   241,   242,
     7,   225,   242,   242,   243,  1012,   230,   242,   243,   233,
     5,  1390,  1391,  1527,  1393,  1012,  1530,   235,   242,   242,
   243,   564,   565,   235,  1031,   235,  1033,   243,  1035,   236,
   243,  1325,   236,   233,   212,   213,   214,   215,   216,   211,
   218,   219,   220,   221,   241,   235,   224,   225,   226,   227,
   228,   242,  1059,   241,   232,     7,   241,   241,   241,  1573,
   238,   241,     8,   242,   241,  1579,     3,     4,     5,   243,
     5,     3,   236,     7,   209,     5,     7,   211,   211,  1373,
     5,     5,   241,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,     5,   241,     5,   212,   213,   214,
   215,   216,   241,   218,   219,   220,   221,   242,  1642,   224,
   225,   226,   227,   228,  1428,     5,     5,   232,   212,   213,
   214,   215,   216,   238,   218,   219,   220,   221,   241,   241,
   224,   225,   226,   227,   228,  1534,   241,   211,   232,   236,
     5,  1540,     5,   241,   238,   241,     5,     5,  1547,   241,
   241,     5,     5,   110,   110,   111,   112,   113,   114,   115,
   116,   117,     5,  1562,   241,  1699,   179,   180,   181,   182,
   183,   184,   185,   186,   187,     5,     5,   236,   128,     5,
   130,   131,   132,   133,   188,   135,   136,   137,   138,   139,
   140,  1653,   241,   241,   144,   241,   241,   147,     7,   235,
   150,   117,     7,   153,   154,   155,   156,   157,   158,   159,
   160,   161,   162,   163,   164,   165,   166,   236,     7,   169,
  1754,   241,  1710,     7,   174,     7,  1253,   177,   236,     7,
   235,     7,   235,     7,     7,   211,  1384,     7,  1386,  1387,
   212,   213,   214,   215,   216,     5,   218,   219,   220,   221,
     7,   241,   224,   225,   226,   227,   228,   241,     7,   242,
   232,   218,     7,     7,     7,     7,   238,   224,   225,     7,
     5,     7,   243,   230,     7,     5,   233,     8,  1677,   236,
   237,   238,   239,  1682,   241,     5,   242,     5,   241,   211,
     7,     7,   242,   241,     5,  1322,   238,     7,     5,  1326,
   243,     7,  1329,  1330,     7,     7,     7,  1334,     7,     7,
  1337,  1338,  1339,  1340,   242,   241,  1343,  1344,   236,  1346,
     7,  1348,     6,    55,  1351,     7,  1725,   241,  1355,  1356,
  1844,  1358,   236,   235,   235,   235,   235,  1364,  1365,  1366,
  1367,   235,     5,     3,     5,     7,   241,  1364,  1365,  1366,
   235,   243,   243,     3,     4,     5,  1383,   241,   241,   241,
   241,   241,   241,   241,   236,   241,  1383,  1766,   235,  1768,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
    50,     5,     5,   212,   213,   214,   215,   216,   235,   218,
   219,   220,   221,  1727,   220,   224,   225,   226,   227,   228,
   232,     7,     3,   232,     3,   241,   241,   235,  1742,   238,
   212,   213,   214,   215,   216,   235,   218,   219,   220,   221,
   235,   235,   224,   225,   226,   227,   228,   235,   235,   235,
   232,  1566,   235,     7,   235,  1570,   238,     7,     3,     5,
   110,   241,     7,   235,   235,  1492,   235,   235,  1495,   212,
   213,   214,   215,   216,   235,   218,   219,   220,   221,   235,
  1507,   224,   225,   226,   227,   228,   241,   235,    70,   232,
    72,    73,    74,     5,   235,   238,   235,     5,   235,     5,
  1527,  1528,     5,  1530,  1652,  1819,    51,   241,     5,   235,
  1527,     5,    57,  1530,   241,   236,   241,   241,     5,   242,
     5,   236,   235,   235,  1639,    70,  1641,    72,   110,   111,
   112,   113,   114,   115,   116,   117,   236,     5,  1565,    84,
  1567,   236,     5,    88,     5,   241,  1573,     5,     5,     5,
     5,     5,  1579,     5,     5,   100,  1573,     5,     5,     5,
     3,     3,  1579,  1590,  1591,  1592,  1593,  1594,   218,     5,
     5,     5,  1687,   118,   224,   225,     7,     5,     7,     5,
   230,     5,     5,   233,     5,     5,     5,     5,   238,   239,
     5,   241,   212,   213,   214,   215,   216,   217,   218,   219,
   220,   221,     5,     5,   224,   225,   226,   227,   228,   229,
     5,     5,   232,     5,     5,  1642,     5,     5,     5,     5,
     5,     5,   167,   243,   169,  1642,   212,   213,   214,   215,
   216,   241,   218,   219,   220,   221,   235,  1664,   224,   225,
   226,   227,   228,   235,     5,   242,   232,  1674,  1675,     7,
   243,  1678,   238,  1680,   238,     7,     7,     7,  1685,     7,
   242,     7,     7,     7,     7,     3,     7,     7,     7,   243,
     7,     7,  1699,  1700,     7,     7,   128,     7,   130,   131,
   132,   133,  1699,   135,   136,   137,   138,   139,   140,   241,
   241,   235,   144,   236,     7,   147,     7,  1724,   150,     7,
     7,   153,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   163,   164,   165,   166,     5,     7,   169,     7,     7,
  1747,     7,   174,     7,     7,   177,     7,  1754,     7,  1756,
     7,     7,     7,     7,     3,     4,     5,  1754,   236,     7,
     7,     7,     7,     7,     7,     7,    15,    16,    17,    18,
  1777,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,     7,  1804,     5,     7,
  1807,     7,     5,     5,     5,   235,   235,     5,     7,   242,
   242,   235,     7,     7,     3,     4,     5,     6,   236,     7,
     9,  1828,     7,  1830,     7,     7,    15,    16,    17,    18,
  1837,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,   243,   243,     3,     4,
     5,     6,   243,   236,     9,   243,   243,   243,     7,    58,
    15,    16,    17,    18,   236,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
   212,   213,   214,   215,   216,   242,   218,   219,   220,   221,
   243,     7,   224,   225,   226,   227,   228,     7,     7,   241,
   232,   218,   219,   220,   221,   236,   238,   224,   225,   226,
   227,   228,     3,     4,     5,   232,    64,   243,   243,   243,
   189,   238,   243,   192,    15,    16,    17,    18,   243,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,   241,     7,   225,   101,   243,     7,
   242,   230,     7,   243,   233,   243,     7,     7,     3,     7,
   243,   243,   241,   243,   122,     7,    70,     7,    72,    73,
   241,    75,   241,   243,   236,   243,   212,   213,   214,   215,
   216,    85,   218,   219,   220,   221,   205,   243,   224,   225,
   226,   227,   228,   243,   236,   153,   232,     7,   102,   103,
   104,     7,   238,     7,     5,     5,   225,   241,     5,     5,
     3,   230,     7,   117,   233,   241,     5,     7,   241,   238,
   178,   241,   241,     7,   241,   241,     5,   241,     5,     5,
   205,   189,   190,   191,   192,   193,   194,   195,   196,   197,
   198,   199,   200,   201,   202,   203,   204,     5,     7,   241,
   225,     3,     4,     5,   241,   230,   242,   236,   233,   236,
   236,     5,     5,     5,     5,     5,   241,   235,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,   212,   213,   214,   215,   216,     7,   218,
   219,   220,   221,   236,     5,   224,   225,   226,   227,   228,
     5,   236,   243,   232,   243,   243,   243,     7,   236,   238,
     7,     7,     7,     7,   225,   236,   243,   236,   236,   230,
   243,   235,   233,   243,   236,   242,   236,   243,   242,   128,
   241,   130,   131,   132,   133,   243,   135,   136,   137,   138,
   139,   140,   241,   241,   236,   144,   243,   243,   147,   236,
     5,   150,   236,   236,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   242,     7,
   169,   242,     5,     7,   121,   174,     7,   128,   177,   130,
   131,   132,   133,     7,   135,   136,   137,   138,   139,   140,
     7,     7,    70,   144,    72,     7,   147,    75,     5,   150,
     5,     7,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,     7,     5,   169,   242,
     7,     7,     7,   174,     7,     7,   177,     7,     7,   242,
   238,     7,   110,   111,   112,   113,   114,   115,   116,   117,
   241,     7,     7,   242,     7,     5,     5,   100,   214,   215,
   216,   241,   218,   219,   220,   221,     7,   236,   224,   225,
   226,   227,   228,   225,   236,   243,   232,   243,   230,   134,
   243,   233,   238,   128,   241,   130,   131,   132,   133,   241,
   135,   136,   137,   138,   139,   140,   243,   236,   243,   144,
     7,   242,   147,   236,     5,   150,     5,   243,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   243,   243,   169,     7,     7,   241,     7,   174,
   241,   128,   177,   130,   131,   132,   133,     7,   135,   136,
   137,   138,   139,   140,     7,     7,     5,   144,     5,     5,
   147,   243,     5,   150,   235,     5,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   241,   236,   169,   236,   242,   236,     5,   174,     5,   128,
   177,   130,   131,   132,   133,   243,   135,   136,   137,   138,
   139,   140,     7,     4,     7,   144,   242,   242,   147,     7,
     5,   150,   242,     7,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,     7,     7,
   169,     7,     7,   241,   241,   174,     7,   128,   177,   130,
   131,   132,   133,     7,   135,   136,   137,   138,   139,   140,
     7,     7,     7,   144,     7,   242,   147,   241,     5,   150,
   242,     7,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,     7,   241,   169,   236,
     7,   236,   243,   174,   242,   128,   177,   130,   131,   132,
   133,    51,   135,   136,   137,   138,   139,   140,     7,   241,
     7,   144,     7,   242,   147,     7,     5,   150,   118,     7,
   153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
   163,   164,   165,   166,     7,     5,   169,   242,     7,     0,
     0,   174,  1091,   128,   177,   130,   131,   132,   133,   735,
   135,   136,   137,   138,   139,   140,   968,   591,   849,   144,
   967,   242,   147,  1577,     5,   150,  1379,  1216,   153,   154,
   155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
   165,   166,   526,   632,   169,     7,   146,   247,    -1,   174,
   531,   128,   177,   130,   131,   132,   133,    -1,   135,   136,
   137,   138,   139,   140,    -1,    -1,     7,   144,    -1,   242,
   147,    -1,    -1,   150,    -1,    -1,   153,   154,   155,   156,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
    -1,    -1,   169,     7,    -1,    -1,    -1,   174,    -1,   128,
   177,   130,   131,   132,   133,    -1,   135,   136,   137,   138,
   139,   140,    -1,    -1,     7,   144,    -1,   242,   147,    -1,
    -1,   150,    -1,    -1,   153,   154,   155,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,    -1,    -1,
   169,    -1,    -1,    -1,    -1,   174,    -1,   128,   177,   130,
   131,   132,   133,    -1,   135,   136,   137,   138,   139,   140,
    -1,    -1,    -1,   144,    -1,   242,   147,    -1,    -1,   150,
    -1,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   162,   163,   164,   165,   166,    -1,    -1,   169,    -1,
     8,    -1,    -1,   174,    -1,    -1,   177,     3,     4,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   242,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   212,   213,   214,   215,   216,    -1,   218,   219,   220,   221,
    -1,   242,   224,   225,   226,   227,   228,    -1,    -1,    -1,
   232,   212,   213,   214,   215,   216,   238,   218,   219,   220,
   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,    -1,    -1,    -1,    -1,    -1,   238,   212,   213,
   214,   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,
   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,   212,
   213,   214,   215,   216,   238,   218,   219,   220,   221,    -1,
    -1,   224,   225,   226,   227,   228,     3,     4,     5,   232,
    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    15,    16,
    17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,   218,   219,
   220,   221,    -1,    -1,   224,   225,   226,   227,   228,   229,
    -1,    58,   232,    -1,   212,   213,   214,   215,   216,    -1,
   218,   219,   220,   221,    -1,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,    -1,     3,     4,     5,   225,
   238,    -1,    -1,    -1,   230,    -1,    -1,   233,    15,    16,
    17,    18,   238,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,     3,     4,
     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,
     3,     4,     5,    -1,    -1,    -1,    -1,    -1,   225,    -1,
    -1,    -1,    -1,   230,    -1,    -1,   233,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,     8,    -1,    -1,    -1,   225,    -1,
    -1,    -1,    -1,   230,    -1,    -1,   233,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     8,    -1,    -1,   215,   216,
   205,   218,   219,   220,   221,    -1,    -1,   224,   225,   226,
   227,   228,    -1,    -1,    -1,   232,     8,    -1,    -1,    -1,
   225,   238,    -1,    -1,    -1,   230,    -1,    -1,   233,    -1,
    -1,    -1,   212,   213,   214,   215,   216,    -1,   218,   219,
   220,   221,    -1,     8,   224,   225,   226,   227,   228,    -1,
    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,   238,    -1,
    -1,    -1,   225,   243,    -1,    -1,    -1,   230,    -1,    -1,
   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,   213,   214,
   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,
   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,   234,
    -1,    -1,   225,   238,    -1,    -1,    -1,   230,    -1,    -1,
   233,   212,   213,   214,   215,   216,    -1,   218,   219,   220,
   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
    -1,    -1,   243,    -1,   225,    -1,    -1,    -1,    -1,   230,
    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,   213,
   214,   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,
   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,   212,
   213,   214,   215,   216,   238,   218,   219,   220,   221,    -1,
    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,
   212,   213,   214,   215,   216,   238,   218,   219,   220,   221,
    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,
   232,    -1,    -1,    -1,    -1,    -1,   238,   212,   213,   214,
   215,   216,   217,   218,   219,   220,   221,    -1,    -1,   224,
   225,   226,   227,   228,   229,     5,    -1,   232,    -1,    -1,
    10,    -1,    -1,    13,   212,   213,   214,   215,   216,    19,
   218,   219,   220,   221,    -1,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
   238,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,
    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    88,   212,
   213,   214,   215,   216,    -1,   218,   219,   220,   221,    -1,
   100,   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,
    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,   118,    -1,
   243,   212,   213,   214,   215,   216,    -1,   218,   219,   220,
   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,   212,   213,   214,   215,   216,   238,   218,   219,
   220,   221,   243,    -1,   224,   225,   226,   227,   228,    -1,
    -1,    -1,   232,    -1,    -1,    -1,    -1,   167,   238,   169,
    -1,    -1,    -1,   243,   212,   213,   214,   215,   216,    -1,
   218,   219,   220,   221,    -1,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
   238,    -1,    -1,    -1,    -1,   243,    -1,    -1,   208,   209,
   210,   212,   213,   214,   215,   216,    -1,   218,   219,   220,
   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,   212,   213,   214,   215,   216,   238,   218,   219,
   220,   221,   243,    -1,   224,   225,   226,   227,   228,    -1,
    -1,    -1,   232,   212,   213,   214,   215,   216,   238,   218,
   219,   220,   221,   243,    -1,   224,   225,   226,   227,   228,
    -1,    -1,    -1,   232,   212,   213,   214,   215,   216,   238,
   218,   219,   220,   221,   243,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,   212,   213,   214,   215,   216,
   238,   218,   219,   220,   221,   243,    -1,   224,   225,   226,
   227,   228,    -1,    -1,    -1,   232,   212,   213,   214,   215,
   216,   238,   218,   219,   220,   221,   243,    -1,   224,   225,
   226,   227,   228,    -1,    -1,    -1,   232,   212,   213,   214,
   215,   216,   238,   218,   219,   220,   221,   243,    -1,   224,
   225,   226,   227,   228,    -1,    -1,    -1,   232,   212,   213,
   214,   215,   216,   238,   218,   219,   220,   221,   243,    -1,
   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,   212,
   213,   214,   215,   216,   238,   218,   219,   220,   221,   243,
    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,
   212,   213,   214,   215,   216,   238,   218,   219,   220,   221,
   243,    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,
   232,   212,   213,   214,   215,   216,   238,   218,   219,   220,
   221,   243,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,   212,   213,   214,   215,   216,   238,   218,   219,
   220,   221,   243,    -1,   224,   225,   226,   227,   228,    -1,
    -1,    -1,   232,   212,   213,   214,   215,   216,   238,   218,
   219,   220,   221,   243,    -1,   224,   225,   226,   227,   228,
    -1,    -1,    -1,   232,   212,   213,   214,   215,   216,   238,
   218,   219,   220,   221,   243,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,   212,   213,   214,   215,   216,
   238,   218,   219,   220,   221,   243,    -1,   224,   225,   226,
   227,   228,    -1,    -1,    -1,   232,   212,   213,   214,   215,
   216,   238,   218,   219,   220,   221,   243,    -1,   224,   225,
   226,   227,   228,    -1,    -1,    -1,   232,   212,   213,   214,
   215,   216,   238,   218,   219,   220,   221,   243,    -1,   224,
   225,   226,   227,   228,    -1,    -1,    -1,   232,   212,   213,
   214,   215,   216,   238,   218,   219,   220,   221,   243,    -1,
   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,   212,
   213,   214,   215,   216,   238,   218,   219,   220,   221,   243,
    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,
    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,   242,
   212,   213,   214,   215,   216,    -1,   218,   219,   220,   221,
    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,
   232,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
   242,   212,   213,   214,   215,   216,    -1,   218,   219,   220,
   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
    -1,   242,   212,   213,   214,   215,   216,    -1,   218,   219,
   220,   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,
    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,   238,    -1,
    -1,    -1,   242,   212,   213,   214,   215,   216,    -1,   218,
   219,   220,   221,    -1,    -1,   224,   225,   226,   227,   228,
    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,   238,
    -1,    -1,    -1,   242,   212,   213,   214,   215,   216,    -1,
   218,   219,   220,   221,    -1,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
   238,    -1,    -1,    -1,   242,   212,   213,   214,   215,   216,
    -1,   218,   219,   220,   221,    -1,    -1,   224,   225,   226,
   227,   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,
    -1,   238,    -1,    -1,    -1,   242,   212,   213,   214,   215,
   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,   225,
   226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,
    -1,    -1,   238,    -1,    -1,    -1,   242,   212,   213,   214,
   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,
   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,
    -1,    -1,    -1,   238,    -1,    -1,    -1,   242,   212,   213,
   214,   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,
   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,
    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,   242,   212,
   213,   214,   215,   216,    -1,   218,   219,   220,   221,    -1,
    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,
    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,   242,
   212,   213,   214,   215,   216,    -1,   218,   219,   220,   221,
    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,
   232,    -1,   234,    -1,    -1,    -1,   238,   212,   213,   214,
   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,
   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,
    -1,   236,    -1,   238,   212,   213,   214,   215,   216,    -1,
   218,   219,   220,   221,    -1,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,
   238,   212,   213,   214,   215,   216,    -1,   218,   219,   220,
   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,    -1,    -1,    -1,   236,    -1,   238,   212,   213,
   214,   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,
   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,
    -1,    -1,   236,    -1,   238,   212,   213,   214,   215,   216,
    -1,   218,   219,   220,   221,    -1,    -1,   224,   225,   226,
   227,   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,
    -1,   238,   212,   213,   214,   215,   216,    -1,   218,   219,
   220,   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,
    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,   238,   212,
   213,   214,   215,   216,    -1,   218,   219,   220,   221,    -1,
    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,
    -1,    -1,    -1,   236,    -1,   238,   212,   213,   214,   215,
   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,   225,
   226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,
   236,    -1,   238,   212,   213,   214,   215,   216,    -1,   218,
   219,   220,   221,    -1,    -1,   224,   225,   226,   227,   228,
    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,   238,
   212,   213,   214,   215,   216,    -1,   218,   219,   220,   221,
    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,
   232,    -1,    -1,    -1,   236,    -1,   238,   212,   213,   214,
   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,
   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,
    -1,   236,    -1,   238,   212,   213,   214,   215,   216,    -1,
   218,   219,   220,   221,    -1,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,
   238,   212,   213,   214,   215,   216,    -1,   218,   219,   220,
   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,    -1,    -1,    -1,   236,    -1,   238,   212,   213,
   214,   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,
   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,
    -1,    -1,   236,    -1,   238,   212,   213,   214,   215,   216,
    -1,   218,   219,   220,   221,    -1,    -1,   224,   225,   226,
   227,   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,
    -1,   238,   212,   213,   214,   215,   216,    -1,   218,   219,
   220,   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,
    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,   238,   212,
   213,   214,   215,   216,    -1,   218,   219,   220,   221,    -1,
    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,
    -1,    -1,    -1,   236,    -1,   238,   212,   213,   214,   215,
   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,   225,
   226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,
   236,    -1,   238,   212,   213,   214,   215,   216,    -1,   218,
   219,   220,   221,    -1,    -1,   224,   225,   226,   227,   228,
    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,   238,
   212,   213,   214,   215,   216,    -1,   218,   219,   220,   221,
    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,
   232,    -1,    -1,    -1,   236,    -1,   238,   212,   213,   214,
   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,
   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,
    -1,   236,    -1,   238,   212,   213,   214,   215,   216,    -1,
   218,   219,   220,   221,    -1,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,
   238,   212,   213,   214,   215,   216,    -1,   218,   219,   220,
   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,    -1,    -1,    -1,   236,    -1,   238,   212,   213,
   214,   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,
   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,
   234,    -1,    -1,    -1,   238,   212,   213,   214,   215,   216,
    -1,   218,   219,   220,   221,    -1,    -1,   224,   225,   226,
   227,   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,
    -1,   238,   212,   213,   214,   215,   216,    -1,   218,   219,
   220,   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,
    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,   238,   212,
   213,   214,   215,   216,    -1,   218,   219,   220,   221,    -1,
    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,   232,
    -1,    -1,    -1,   236,    -1,   238,   212,   213,   214,   215,
   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,   225,
   226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,
   236,    -1,   238,   212,   213,   214,   215,   216,    -1,   218,
   219,   220,   221,    -1,    -1,   224,   225,   226,   227,   228,
    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,   238,
   212,   213,   214,   215,   216,    -1,   218,   219,   220,   221,
    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,    -1,
   232,    -1,    -1,    -1,   236,    -1,   238,   212,   213,   214,
   215,   216,    -1,   218,   219,   220,   221,    -1,    -1,   224,
   225,   226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,
    -1,   236,    -1,   238,   212,   213,   214,   215,   216,    -1,
   218,   219,   220,   221,    -1,    -1,   224,   225,   226,   227,
   228,    -1,    -1,    -1,   232,    -1,    -1,    -1,   236,    -1,
   238,   212,   213,   214,   215,   216,    -1,   218,   219,   220,
   221,    -1,    -1,   224,   225,   226,   227,   228,    -1,    -1,
    -1,   232,    -1,    -1,    -1,    -1,    -1,   238,   212,   213,
   214,   215,   216,   217,   218,   219,   220,   221,    -1,    -1,
   224,   225,   226,   227,   228,   229,    -1,    -1,   232,    -1,
    -1,    -1,   236,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,    -1,    -1,   224,   225,   226,   227,   228,
   229,    -1,    -1,   232,    -1,   234,   212,   213,   214,   215,
   216,   217,   218,   219,   220,   221,    -1,    -1,   224,   225,
   226,   227,   228,   229,    -1,    -1,   232,   214,   215,   216,
   217,   218,   219,   220,   221,    -1,    -1,   224,   225,   226,
   227,   228,   229,    -1,    -1,   232,   215,   216,   217,   218,
   219,   220,   221,    -1,    -1,   224,   225,   226,   227,   228,
   229,    -1,    -1,   232
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
#line 362 "GetDP.y"
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
#line 396 "GetDP.y"
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
#line 439 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 462 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 477 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 479 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 481 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 483 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 485 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 487 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 489 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 491 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 493 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 495 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 497 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 499 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 501 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 503 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 505 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 507 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 509 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 511 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 513 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 515 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 517 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 525 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 542 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 549 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 552 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 555 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 557 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 53:
#line 573 "GetDP.y"
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
#line 583 "GetDP.y"
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
#line 593 "GetDP.y"
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
#line 621 "GetDP.y"
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
#line 630 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = yyvsp[-7].i ; 
    ;
    break;}
case 58:
#line 637 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ;
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 59:
#line 647 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 60:
#line 652 "GetDP.y"
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
#line 664 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 62:
#line 673 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 63:
#line 684 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 64:
#line 689 "GetDP.y"
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
#line 726 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 66:
#line 729 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 67:
#line 741 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 68:
#line 743 "GetDP.y"
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
#line 759 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 70:
#line 762 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 71:
#line 765 "GetDP.y"
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
#line 816 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 73:
#line 829 "GetDP.y"
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
#line 853 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 75:
#line 860 "GetDP.y"
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
#line 873 "GetDP.y"
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
#line 891 "GetDP.y"
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
#line 914 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 79:
#line 918 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 80:
#line 927 "GetDP.y"
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
#line 941 "GetDP.y"
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
#line 975 "GetDP.y"
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
#line 988 "GetDP.y"
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
#line 1012 "GetDP.y"
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
#line 1022 "GetDP.y"
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
#line 1044 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 90:
#line 1049 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 91:
#line 1050 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 92:
#line 1055 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 96:
#line 1074 "GetDP.y"
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
#line 1094 "GetDP.y"
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
#line 1145 "GetDP.y"
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
#line 1165 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 102:
#line 1171 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 103:
#line 1177 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 104:
#line 1180 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 105:
#line 1187 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 107:
#line 1198 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 108:
#line 1201 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 109:
#line 1207 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 110:
#line 1211 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 112:
#line 1223 "GetDP.y"
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
#line 1236 "GetDP.y"
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
#line 1250 "GetDP.y"
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
#line 1265 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1271 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1277 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1283 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1289 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1295 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1301 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1307 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1313 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1319 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1325 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1331 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1337 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1343 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1349 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 130:
#line 1355 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 131:
#line 1361 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 132:
#line 1368 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 134:
#line 1376 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 136:
#line 1389 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1395 "GetDP.y"
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
#line 1469 "GetDP.y"
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
#line 1503 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 140:
#line 1512 "GetDP.y"
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
#line 1524 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 142:
#line 1526 "GetDP.y"
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
#line 1537 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 144:
#line 1539 "GetDP.y"
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
#line 1553 "GetDP.y"
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
#line 1565 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1571 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1577 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 149:
#line 1579 "GetDP.y"
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
#line 1608 "GetDP.y"
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
#line 1632 "GetDP.y"
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
#line 1645 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1651 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1658 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1664 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 156:
#line 1671 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 157:
#line 1678 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 158:
#line 1689 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 159:
#line 1690 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 160:
#line 1691 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 161:
#line 1696 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 162:
#line 1697 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 163:
#line 1703 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 164:
#line 1706 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 165:
#line 1709 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 166:
#line 1725 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 167:
#line 1730 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 168:
#line 1737 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 170:
#line 1746 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 171:
#line 1751 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 172:
#line 1758 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 173:
#line 1761 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 174:
#line 1768 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 176:
#line 1778 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 177:
#line 1781 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 178:
#line 1784 "GetDP.y"
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
#line 1822 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 180:
#line 1828 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 181:
#line 1835 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 183:
#line 1848 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 184:
#line 1855 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 185:
#line 1858 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 186:
#line 1865 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 187:
#line 1868 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 188:
#line 1875 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 190:
#line 1887 "GetDP.y"
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
#line 1897 "GetDP.y"
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
#line 1907 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 193:
#line 1914 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 194:
#line 1917 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 195:
#line 1924 "GetDP.y"
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
#line 1940 "GetDP.y"
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
#line 1988 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 199:
#line 1991 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 200:
#line 1994 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 201:
#line 1997 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 202:
#line 2000 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 203:
#line 2011 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 205:
#line 2021 "GetDP.y"
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
#line 2046 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 209:
#line 2060 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 210:
#line 2066 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 211:
#line 2073 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 212:
#line 2082 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2085 "GetDP.y"
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
#line 2107 "GetDP.y"
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
#line 2122 "GetDP.y"
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
#line 2146 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 218:
#line 2160 "GetDP.y"
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
#line 2170 "GetDP.y"
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
#line 2194 "GetDP.y"
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
#line 2219 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 222:
#line 2224 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 223:
#line 2232 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 224:
#line 2240 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 225:
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
    ;
    break;}
case 226:
#line 2267 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 227:
#line 2275 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 228:
#line 2282 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 229:
#line 2289 "GetDP.y"
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
#line 2298 "GetDP.y"
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
#line 2307 "GetDP.y"
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
#line 2316 "GetDP.y"
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
#line 2337 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 235:
#line 2348 "GetDP.y"
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
#line 2375 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 239:
#line 2388 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 240:
#line 2394 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 241:
#line 2401 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 242:
#line 2410 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 243:
#line 2413 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 244:
#line 2416 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 245:
#line 2419 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 246:
#line 2426 "GetDP.y"
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
#line 2442 "GetDP.y"
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
#line 2491 "GetDP.y"
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
case 250:
#line 2512 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 251:
#line 2515 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 252:
#line 2520 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 253:
#line 2525 "GetDP.y"
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
#line 2539 "GetDP.y"
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
#line 2559 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 256:
#line 2564 "GetDP.y"
{
      BasisFunction_S.SubdFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 257:
#line 2569 "GetDP.y"
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
case 258:
#line 2593 "GetDP.y"
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
case 260:
#line 2653 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 261:
#line 2656 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 262:
#line 2665 "GetDP.y"
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
case 263:
#line 2731 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 264:
#line 2735 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 265:
#line 2742 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 267:
#line 2751 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 268:
#line 2756 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 269:
#line 2759 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 270:
#line 2766 "GetDP.y"
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
case 271:
#line 2782 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 272:
#line 2788 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 273:
#line 2791 "GetDP.y"
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
case 274:
#line 2810 "GetDP.y"
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
case 275:
#line 2822 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2828 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 277:
#line 2831 "GetDP.y"
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
case 278:
#line 2846 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 279:
#line 2850 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 280:
#line 2859 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 282:
#line 2870 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 283:
#line 2875 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 284:
#line 2885 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 285:
#line 2898 "GetDP.y"
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
case 286:
#line 2913 "GetDP.y"
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
case 287:
#line 2987 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 289:
#line 3003 "GetDP.y"
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
case 290:
#line 3035 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 291:
#line 3038 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 292:
#line 3041 "GetDP.y"
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
case 293:
#line 3087 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 295:
#line 3097 "GetDP.y"
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
case 297:
#line 3123 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 299:
#line 3135 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 300:
#line 3141 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 301:
#line 3148 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 303:
#line 3160 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 304:
#line 3166 "GetDP.y"
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
case 305:
#line 3180 "GetDP.y"
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
case 306:
#line 3198 "GetDP.y"
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
case 308:
#line 3220 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 309:
#line 3223 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 310:
#line 3227 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 311:
#line 3230 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 312:
#line 3240 "GetDP.y"
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
case 313:
#line 3279 "GetDP.y"
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
case 314:
#line 3303 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 315:
#line 3308 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 316:
#line 3314 "GetDP.y"
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
case 317:
#line 3625 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 318:
#line 3630 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 319:
#line 3639 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 320:
#line 3648 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 321:
#line 3657 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 323:
#line 3665 "GetDP.y"
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
case 324:
#line 3705 "GetDP.y"
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
case 325:
#line 3720 "GetDP.y"
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
case 326:
#line 3748 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 327:
#line 3751 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 328:
#line 3754 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 329:
#line 3757 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 330:
#line 3764 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 332:
#line 3775 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 333:
#line 3785 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 334:
#line 3795 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 335:
#line 3809 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 337:
#line 3821 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 338:
#line 3823 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 339:
#line 3825 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 340:
#line 3827 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 341:
#line 3835 "GetDP.y"
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
case 343:
#line 3859 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 344:
#line 3867 "GetDP.y"
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
case 345:
#line 3946 "GetDP.y"
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
case 346:
#line 3992 "GetDP.y"
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
case 347:
#line 4016 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 348:
#line 4025 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 349:
#line 4034 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.FMMIntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 350:
#line 4043 "GetDP.y"
{ if ( yyvsp[-2].i == 1 || yyvsp[-2].i == 2 || yyvsp[-2].i == 3 )
	EquationTerm_S.Case.LocalTerm.MatrixIndex = yyvsp[-2].i ;
      else
	vyyerror("Unknown Matrix123: %d", yyvsp[-2].i) ;
    ;
    break;}
case 351:
#line 4055 "GetDP.y"
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
case 353:
#line 4084 "GetDP.y"
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
case 354:
#line 4108 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 355:
#line 4116 "GetDP.y"
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
case 356:
#line 4171 "GetDP.y"
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
case 357:
#line 4188 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 358:
#line 4189 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 359:
#line 4190 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 360:
#line 4191 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 361:
#line 4192 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 362:
#line 4193 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 363:
#line 4194 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 364:
#line 4195 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 365:
#line 4202 "GetDP.y"
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
case 366:
#line 4223 "GetDP.y"
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
case 367:
#line 4247 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 369:
#line 4257 "GetDP.y"
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
case 371:
#line 4282 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 373:
#line 4294 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 374:
#line 4301 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 375:
#line 4308 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 376:
#line 4311 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 377:
#line 4313 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 378:
#line 4319 "GetDP.y"
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
case 379:
#line 4334 "GetDP.y"
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
case 380:
#line 4353 "GetDP.y"
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
case 382:
#line 4373 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 383:
#line 4376 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 384:
#line 4385 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 385:
#line 4388 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 386:
#line 4393 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 387:
#line 4398 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 388:
#line 4403 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 389:
#line 4408 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 390:
#line 4417 "GetDP.y"
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
case 391:
#line 4454 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 392:
#line 4461 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 393:
#line 4464 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 394:
#line 4476 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 395:
#line 4486 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 396:
#line 4492 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 397:
#line 4495 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 398:
#line 4507 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 399:
#line 4515 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 400:
#line 4526 "GetDP.y"
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
case 401:
#line 4548 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 402:
#line 4555 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 403:
#line 4561 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 404:
#line 4567 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 405:
#line 4573 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 406:
#line 4581 "GetDP.y"
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
case 407:
#line 4603 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 408:
#line 4610 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 409:
#line 4616 "GetDP.y"
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
case 410:
#line 4627 "GetDP.y"
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
case 411:
#line 4638 "GetDP.y"
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
case 412:
#line 4651 "GetDP.y"
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
case 413:
#line 4666 "GetDP.y"
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
case 414:
#line 4682 "GetDP.y"
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
case 415:
#line 4702 "GetDP.y"
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
case 416:
#line 4723 "GetDP.y"
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
case 417:
#line 4735 "GetDP.y"
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
case 418:
#line 4755 "GetDP.y"
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
case 419:
#line 4772 "GetDP.y"
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
case 420:
#line 4791 "GetDP.y"
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
case 421:
#line 4813 "GetDP.y"
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
case 422:
#line 4847 "GetDP.y"
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
case 423:
#line 4860 "GetDP.y"
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
case 424:
#line 4874 "GetDP.y"
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
case 425:
#line 4887 "GetDP.y"
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
case 426:
#line 4899 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 428:
#line 4908 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 430:
#line 4917 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 431:
#line 4927 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 432:
#line 4937 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 433:
#line 4945 "GetDP.y"
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
case 434:
#line 4958 "GetDP.y"
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
case 435:
#line 4971 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
      Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 436:
#line 4980 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 437:
#line 4989 "GetDP.y"
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
case 438:
#line 5003 "GetDP.y"
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
case 439:
#line 5017 "GetDP.y"
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
case 440:
#line 5031 "GetDP.y"
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
case 441:
#line 5046 "GetDP.y"
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
case 442:
#line 5063 "GetDP.y"
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
case 443:
#line 5077 "GetDP.y"
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
case 444:
#line 5096 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 445:
#line 5101 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 446:
#line 5111 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 448:
#line 5121 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 449:
#line 5124 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 450:
#line 5134 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 451:
#line 5150 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 453:
#line 5166 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 454:
#line 5170 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 455:
#line 5174 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 456:
#line 5178 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 457:
#line 5183 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 458:
#line 5194 "GetDP.y"
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
case 460:
#line 5211 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 461:
#line 5215 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 462:
#line 5219 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 463:
#line 5223 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 464:
#line 5227 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 465:
#line 5232 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 466:
#line 5243 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 468:
#line 5258 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 469:
#line 5262 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 470:
#line 5266 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 471:
#line 5270 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 472:
#line 5274 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 473:
#line 5285 "GetDP.y"
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
case 475:
#line 5303 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 476:
#line 5307 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 477:
#line 5311 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 478:
#line 5315 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 479:
#line 5320 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 480:
#line 5330 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 481:
#line 5336 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 482:
#line 5342 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 483:
#line 5352 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 484:
#line 5355 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 485:
#line 5360 "GetDP.y"
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
case 487:
#line 5378 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 488:
#line 5388 "GetDP.y"
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
case 489:
#line 5417 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 490:
#line 5420 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 491:
#line 5423 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 492:
#line 5431 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 493:
#line 5448 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 495:
#line 5460 "GetDP.y"
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
case 497:
#line 5483 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 499:
#line 5497 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 500:
#line 5504 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 501:
#line 5512 "GetDP.y"
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
case 502:
#line 5558 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 503:
#line 5563 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 504:
#line 5569 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 505:
#line 5572 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 506:
#line 5577 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 508:
#line 5588 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 509:
#line 5591 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 510:
#line 5597 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 511:
#line 5602 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 512:
#line 5608 "GetDP.y"
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
case 513:
#line 5622 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 515:
#line 5636 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 516:
#line 5643 "GetDP.y"
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
case 517:
#line 5671 "GetDP.y"
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
case 518:
#line 5681 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 519:
#line 5682 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 520:
#line 5688 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 521:
#line 5697 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 522:
#line 5714 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 524:
#line 5726 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 526:
#line 5733 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 528:
#line 5745 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 529:
#line 5752 "GetDP.y"
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
case 530:
#line 5764 "GetDP.y"
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
case 531:
#line 5775 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 532:
#line 5780 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 533:
#line 5786 "GetDP.y"
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
case 534:
#line 5803 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 535:
#line 5813 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 536:
#line 5816 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 537:
#line 5820 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 538:
#line 5831 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 539:
#line 5835 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 540:
#line 5839 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 541:
#line 5845 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVALSTR ;
      PostSubOperation_S.String = yyvsp[-8].c ;
      PostSubOperation_S.String2 = yyvsp[-4].c ;
    ;
    break;}
case 542:
#line 5851 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 543:
#line 5856 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 544:
#line 5860 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 545:
#line 5869 "GetDP.y"
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
case 546:
#line 5881 "GetDP.y"
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
case 547:
#line 5904 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 548:
#line 5905 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 549:
#line 5906 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 550:
#line 5907 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 551:
#line 5913 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 552:
#line 5915 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 553:
#line 5921 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 554:
#line 5927 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 555:
#line 5934 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 556:
#line 5943 "GetDP.y"
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
case 557:
#line 5965 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 558:
#line 5973 "GetDP.y"
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
case 559:
#line 5984 "GetDP.y"
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
case 560:
#line 5998 "GetDP.y"
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
case 561:
#line 6019 "GetDP.y"
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
case 562:
#line 6046 "GetDP.y"
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
case 563:
#line 6077 "GetDP.y"
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
case 564:
#line 6097 "GetDP.y"
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
case 566:
#line 6124 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 567:
#line 6131 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 568:
#line 6138 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 569:
#line 6145 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 570:
#line 6149 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 571:
#line 6153 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 572:
#line 6157 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 573:
#line 6161 "GetDP.y"
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
case 574:
#line 6171 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 575:
#line 6176 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 576:
#line 6181 "GetDP.y"
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
case 577:
#line 6201 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 578:
#line 6208 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 579:
#line 6217 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 580:
#line 6226 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 581:
#line 6235 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 582:
#line 6242 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 583:
#line 6250 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 584:
#line 6254 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 585:
#line 6263 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 586:
#line 6267 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 587:
#line 6271 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 588:
#line 6279 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 589:
#line 6285 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 590:
#line 6294 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 591:
#line 6300 "GetDP.y"
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
case 592:
#line 6348 "GetDP.y"
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
case 593:
#line 6363 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 594:
#line 6369 "GetDP.y"
{ Constant_S.Name = yyvsp[-6].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-2].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 595:
#line 6375 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 597:
#line 6383 "GetDP.y"
{
      Msg(DIRECT, yyvsp[-2].c);
    ;
    break;}
case 598:
#line 6388 "GetDP.y"
{
      i = Print_ListOfDouble(yyvsp[-4].c,yyvsp[-2].l,tmpstring);
      if(i<0) 
	vyyerror("Too few arguments in Printf");
      else if(i>0)
	vyyerror("Too many arguments (%d) in Printf", i);
      else
	Msg(INFO, tmpstring);
      List_Delete(yyvsp[-2].l);
    ;
    break;}
case 600:
#line 6404 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 601:
#line 6410 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 602:
#line 6416 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 603:
#line 6427 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 604:
#line 6428 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 605:
#line 6429 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 606:
#line 6430 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 607:
#line 6431 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 608:
#line 6432 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 609:
#line 6433 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 610:
#line 6434 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 611:
#line 6435 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 612:
#line 6436 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 613:
#line 6437 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 614:
#line 6438 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 615:
#line 6439 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 616:
#line 6440 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 617:
#line 6441 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 618:
#line 6442 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 619:
#line 6443 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 620:
#line 6444 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 621:
#line 6445 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 622:
#line 6446 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 623:
#line 6447 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 624:
#line 6451 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 625:
#line 6452 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 626:
#line 6453 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 627:
#line 6454 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 628:
#line 6455 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 629:
#line 6456 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 630:
#line 6457 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 631:
#line 6458 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 632:
#line 6459 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 633:
#line 6460 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 634:
#line 6461 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 635:
#line 6462 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 636:
#line 6463 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 637:
#line 6464 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 638:
#line 6465 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 639:
#line 6466 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 640:
#line 6467 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 641:
#line 6468 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 642:
#line 6469 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 643:
#line 6470 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 644:
#line 6471 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 645:
#line 6472 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 646:
#line 6473 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 647:
#line 6474 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 648:
#line 6475 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 649:
#line 6476 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 650:
#line 6477 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 651:
#line 6478 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 652:
#line 6479 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 653:
#line 6480 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 654:
#line 6481 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 655:
#line 6482 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 656:
#line 6483 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 657:
#line 6484 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 658:
#line 6485 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 659:
#line 6486 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 660:
#line 6487 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 661:
#line 6488 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 662:
#line 6489 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 663:
#line 6490 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 664:
#line 6495 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 665:
#line 6496 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 666:
#line 6497 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 667:
#line 6498 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 668:
#line 6499 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 669:
#line 6500 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 670:
#line 6501 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 671:
#line 6503 "GetDP.y"
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
case 672:
#line 6521 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 673:
#line 6524 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 674:
#line 6530 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 675:
#line 6533 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 676:
#line 6540 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 677:
#line 6546 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 678:
#line 6549 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 679:
#line 6552 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 680:
#line 6564 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 681:
#line 6570 "GetDP.y"
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
case 682:
#line 6581 "GetDP.y"
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
case 683:
#line 6597 "GetDP.y"
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
case 684:
#line 6619 "GetDP.y"
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
case 685:
#line 6634 "GetDP.y"
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
case 686:
#line 6672 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 687:
#line 6680 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 688:
#line 6692 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 689:
#line 6695 "GetDP.y"
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
case 690:
#line 6709 "GetDP.y"
{
      yyval.c = yyvsp[0].c ;
    ;
    break;}
case 691:
#line 6713 "GetDP.y"
{
      time(&date_info);
      yyval.c = (char *)Malloc((strlen(ctime(&date_info))+1)*sizeof(char)) ;
      strcpy(yyval.c, ctime(&date_info));
      yyval.c[strlen(yyval.c)-1] = 0;
    ;
    break;}
case 692:
#line 6730 "GetDP.y"
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
#line 6741 "GetDP.y"



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
  


