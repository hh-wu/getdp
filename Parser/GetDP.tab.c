
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
#define	tInclude	264
#define	tConstant	265
#define	tList	266
#define	tListAlt	267
#define	tLinSpace	268
#define	tLogSpace	269
#define	tDefineConstant	270
#define	tPi	271
#define	t0D	272
#define	t1D	273
#define	t2D	274
#define	t3D	275
#define	tExp	276
#define	tLog	277
#define	tLog10	278
#define	tSqrt	279
#define	tSin	280
#define	tAsin	281
#define	tCos	282
#define	tAcos	283
#define	tTan	284
#define	tAtan	285
#define	tAtan2	286
#define	tSinh	287
#define	tCosh	288
#define	tTanh	289
#define	tFabs	290
#define	tFloor	291
#define	tCeil	292
#define	tFmod	293
#define	tModulo	294
#define	tHypot	295
#define	tSolidAngle	296
#define	tTrace	297
#define	tOrder	298
#define	tCrossProduct	299
#define	tMHTransform	300
#define	tMHJacNL	301
#define	tGroup	302
#define	tDefineGroup	303
#define	tAll	304
#define	tInSupport	305
#define	tMovingBand2D	306
#define	tDefineFunction	307
#define	tConstraint	308
#define	tRegion	309
#define	tSubRegion	310
#define	tRegionRef	311
#define	tSubRegionRef	312
#define	tFilter	313
#define	tCoefficient	314
#define	tValue	315
#define	tTimeFunction	316
#define	tBranch	317
#define	tNode	318
#define	tLoop	319
#define	tNameOfResolution	320
#define	tJacobian	321
#define	tCase	322
#define	tIntegration	323
#define	tType	324
#define	tSubType	325
#define	tCriterion	326
#define	tGeoElement	327
#define	tNumberOfPoints	328
#define	tMaxNumberOfPoints	329
#define	tNumberOfDivisions	330
#define	tMaxNumberOfDivisions	331
#define	tStoppingCriterion	332
#define	tFunctionSpace	333
#define	tName	334
#define	tBasisFunction	335
#define	tNameOfCoef	336
#define	tFunction	337
#define	tdFunction	338
#define	tSubFunction	339
#define	tSupport	340
#define	tEntity	341
#define	tSubSpace	342
#define	tNameOfBasisFunction	343
#define	tGlobalQuantity	344
#define	tEntityType	345
#define	tEntitySubType	346
#define	tNameOfConstraint	347
#define	tFormulation	348
#define	tQuantity	349
#define	tNameOfSpace	350
#define	tIndexOfSystem	351
#define	tSymmetry	352
#define	tEquation	353
#define	tGalerkin	354
#define	tdeRham	355
#define	tGlobalTerm	356
#define	tGlobalEquation	357
#define	tDt	358
#define	tDtDof	359
#define	tDtDt	360
#define	tDtDtDof	361
#define	tJacNL	362
#define	tNeverDt	363
#define	tIn	364
#define	tResolution	365
#define	tDefineSystem	366
#define	tNameOfFormulation	367
#define	tNameOfMesh	368
#define	tFrequency	369
#define	tSolver	370
#define	tOriginSystem	371
#define	tDestinationSystem	372
#define	tOperation	373
#define	tOperationEnd	374
#define	tSetTime	375
#define	tDTime	376
#define	tSetFrequency	377
#define	tFourierTransform	378
#define	tFourierTransformJ	379
#define	tIf	380
#define	tElse	381
#define	tLanczos	382
#define	tPerturbation	383
#define	tUpdate	384
#define	tUpdateConstraint	385
#define	tBreak	386
#define	tTimeLoopTheta	387
#define	tTime0	388
#define	tTimeMax	389
#define	tTheta	390
#define	tTimeLoopNewmark	391
#define	tBeta	392
#define	tGamma	393
#define	tIterativeLoop	394
#define	tNbrMaxIteration	395
#define	tRelaxationFactor	396
#define	tIterativeTimeReduction	397
#define	tDivisionCoefficient	398
#define	tChangeOfState	399
#define	tChangeOfCoordinates	400
#define	tSystemCommand	401
#define	tSolveJac_AdaptRelax	402
#define	tSaveSolutionExtendedMH	403
#define	tInit_MovingBand2D	404
#define	tMesh_MovingBand2D	405
#define	tGenerate_MH_Moving	406
#define	tGenerateGroup	407
#define	tGenerateJacGroup	408
#define	tSaveMesh	409
#define	tPostProcessing	410
#define	tNameOfSystem	411
#define	tPostOperation	412
#define	tNameOfPostProcessing	413
#define	tUsingPost	414
#define	tAppend	415
#define	tPlot	416
#define	tPrint	417
#define	tPrintGroup	418
#define	tEcho	419
#define	tWrite	420
#define	tAdapt	421
#define	tOnGlobal	422
#define	tOnRegion	423
#define	tOnElementsOf	424
#define	tOnGrid	425
#define	tOnSection	426
#define	tOnPoint	427
#define	tOnLine	428
#define	tOnPlane	429
#define	tOnBox	430
#define	tWithArgument	431
#define	tFile	432
#define	tDepth	433
#define	tDimension	434
#define	tTimeStep	435
#define	tHarmonicToTime	436
#define	tFormat	437
#define	tHeader	438
#define	tFooter	439
#define	tSkin	440
#define	tSmoothing	441
#define	tTarget	442
#define	tSort	443
#define	tIso	444
#define	tNoNewLine	445
#define	tChangeOfValues	446
#define	tFlag	447
#define	tHelp	448
#define	tCpu	449
#define	tCheck	450
#define	tDEF	451
#define	tOR	452
#define	tAND	453
#define	tEQUAL	454
#define	tNOTEQUAL	455
#define	tAPPROXEQUAL	456
#define	tLESSOREQUAL	457
#define	tGREATEROREQUAL	458
#define	tLESSLESS	459
#define	tGREATERGREATER	460
#define	tCROSSPRODUCT	461
#define	UNARYPREC	462
#define	tSHOW	463

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.39 2002-02-01 17:31:00 geuzaine Exp $ */

/*
  Modifs a faire

  Patrick:
  - definir des structures avec valeurs par defaut, e.g. BasisFunction_D = ...
  (dans un fichier a part).

  Christophe: 
  - introduire les listes au sein des expressions (comme c'est fait
  dans les expression-cst), afin de gerer les vecteurs, tenseurs,
  etc., directement, et pas par l'intermediaire d'une fonction de
  creation 

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

/* bison est mal foutu */
#if !defined __cplusplus && !defined MSDOS && !defined _AIX && !defined __CYGWIN__
#include <alloca.h> 
#endif

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


#line 182 "GetDP.y"
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



#define	YYFINAL		1757
#define	YYFLAG		-32768
#define	YYNTBASE	231

#define YYTRANSLATE(x) ((unsigned)(x) <= 463 ? yytranslate[x] : 419)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   216,     2,   224,   225,   214,     2,     2,   219,
   220,   212,   210,   229,   211,   223,   213,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   204,
     2,   206,   198,   230,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   221,     2,   222,   218,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   227,     2,   228,     2,     2,     2,     2,     2,
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
   197,   199,   200,   201,   202,   203,   205,   207,   208,   209,
   215,   217,   226
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   152,   156,   161,   167,   168,   175,   181,
   183,   185,   186,   187,   206,   207,   208,   216,   219,   221,
   224,   226,   228,   230,   232,   233,   237,   242,   244,   246,
   250,   251,   255,   260,   262,   266,   270,   276,   278,   283,
   287,   288,   292,   299,   300,   302,   307,   308,   311,   315,
   316,   319,   325,   332,   340,   342,   343,   347,   352,   357,
   358,   361,   362,   366,   368,   372,   373,   376,   378,   379,
   380,   388,   392,   396,   403,   407,   411,   415,   419,   423,
   427,   431,   435,   439,   443,   447,   451,   455,   459,   462,
   465,   468,   472,   474,   478,   481,   483,   486,   487,   493,
   494,   506,   516,   521,   526,   527,   535,   542,   545,   548,
   551,   554,   558,   561,   565,   569,   572,   576,   578,   582,
   583,   587,   594,   595,   600,   601,   604,   608,   613,   614,
   619,   620,   623,   627,   631,   636,   637,   642,   643,   646,
   650,   654,   659,   660,   665,   666,   669,   673,   677,   682,
   683,   688,   689,   692,   696,   700,   704,   708,   712,   716,
   717,   720,   724,   726,   727,   730,   734,   739,   743,   748,
   754,   755,   760,   761,   764,   768,   772,   776,   780,   784,
   788,   796,   800,   804,   808,   812,   816,   824,   832,   840,
   841,   844,   848,   850,   851,   854,   858,   863,   867,   872,
   877,   882,   887,   888,   893,   894,   897,   901,   905,   910,
   915,   923,   927,   931,   935,   936,   937,   938,   957,   958,
   963,   964,   967,   971,   975,   979,   981,   985,   986,   990,
   992,   996,   997,  1001,  1002,  1007,  1008,  1011,  1015,  1019,
  1023,  1024,  1029,  1030,  1033,  1037,  1043,  1047,  1051,  1056,
  1057,  1060,  1064,  1066,  1067,  1070,  1074,  1079,  1083,  1088,
  1093,  1094,  1099,  1100,  1103,  1107,  1111,  1115,  1119,  1120,
  1127,  1131,  1132,  1138,  1142,  1146,  1150,  1154,  1155,  1159,
  1160,  1163,  1168,  1173,  1178,  1183,  1184,  1187,  1191,  1195,
  1199,  1200,  1203,  1207,  1211,  1215,  1219,  1220,  1223,  1224,
  1225,  1235,  1239,  1243,  1247,  1248,  1251,  1255,  1256,  1257,
  1267,  1268,  1270,  1272,  1274,  1276,  1278,  1280,  1285,  1289,
  1290,  1293,  1297,  1299,  1300,  1303,  1307,  1312,  1317,  1318,
  1324,  1325,  1330,  1331,  1334,  1338,  1342,  1346,  1350,  1354,
  1358,  1362,  1366,  1369,  1373,  1374,  1378,  1380,  1384,  1385,
  1389,  1390,  1393,  1397,  1401,  1406,  1411,  1416,  1421,  1427,
  1433,  1436,  1444,  1456,  1464,  1472,  1482,  1492,  1502,  1514,
  1532,  1546,  1562,  1574,  1588,  1589,  1597,  1598,  1606,  1614,
  1620,  1626,  1636,  1646,  1652,  1658,  1672,  1682,  1697,  1705,
  1713,  1715,  1717,  1718,  1721,  1725,  1729,  1732,  1733,  1736,
  1740,  1744,  1748,  1752,  1757,  1758,  1761,  1765,  1769,  1773,
  1777,  1781,  1786,  1787,  1790,  1794,  1798,  1802,  1806,  1811,
  1812,  1815,  1819,  1823,  1827,  1831,  1835,  1840,  1845,  1850,
  1851,  1856,  1857,  1860,  1864,  1868,  1872,  1876,  1880,  1884,
  1885,  1888,  1892,  1894,  1895,  1898,  1902,  1907,  1912,  1916,
  1921,  1922,  1927,  1928,  1931,  1935,  1940,  1941,  1947,  1953,
  1954,  1957,  1958,  1965,  1969,  1970,  1975,  1979,  1983,  1984,
  1987,  1991,  1993,  1994,  1997,  2001,  2005,  2009,  2013,  2018,
  2019,  2028,  2029,  2030,  2034,  2042,  2050,  2051,  2062,  2069,
  2073,  2080,  2082,  2084,  2086,  2088,  2089,  2093,  2095,  2098,
  2101,  2114,  2117,  2133,  2138,  2151,  2169,  2192,  2205,  2206,
  2209,  2213,  2218,  2223,  2227,  2230,  2233,  2237,  2241,  2245,
  2249,  2253,  2257,  2261,  2265,  2269,  2273,  2277,  2281,  2287,
  2290,  2294,  2304,  2308,  2309,  2312,  2317,  2322,  2328,  2329,
  2333,  2339,  2345,  2347,  2349,  2351,  2353,  2355,  2357,  2359,
  2361,  2363,  2365,  2367,  2369,  2371,  2373,  2375,  2377,  2379,
  2381,  2383,  2385,  2387,  2389,  2393,  2396,  2399,  2403,  2407,
  2411,  2415,  2419,  2423,  2427,  2431,  2435,  2439,  2443,  2447,
  2451,  2455,  2460,  2465,  2470,  2475,  2480,  2485,  2490,  2495,
  2500,  2505,  2512,  2517,  2522,  2527,  2532,  2537,  2542,  2549,
  2556,  2563,  2569,  2572,  2574,  2576,  2578,  2580,  2582,  2584,
  2586,  2588,  2589,  2591,  2593,  2597,  2599,  2601,  2605,  2609,
  2613,  2619,  2623,  2628,  2633,  2640,  2649,  2658,  2660,  2662
};

static const short yyrhs[] = {    -1,
   232,   233,     0,     0,     0,   233,   234,   235,     0,    48,
   227,   238,   228,     0,    83,   227,   261,   228,     0,    54,
   227,   295,   228,     0,    67,   227,   280,   228,     0,    69,
   227,   286,   228,     0,    79,   227,   302,   228,     0,    94,
   227,   325,   228,     0,   111,   227,   351,   228,     0,   156,
   227,   381,   228,     0,   158,   227,   393,   228,     0,   397,
     0,   410,     0,    10,   418,     0,   236,     0,   194,     7,
     0,   194,   163,     7,     0,   194,   196,     7,     0,   194,
    23,     7,     0,   194,   195,     7,     0,   194,   194,     7,
     0,   194,     5,     7,     0,   195,     7,     0,   196,     7,
     0,   196,    48,     7,     0,   196,    83,     7,     0,   196,
    54,     7,     0,   196,    67,     7,     0,   196,    69,     7,
     0,   196,    79,     7,     0,   196,    94,     7,     0,   196,
   111,     7,     0,   196,   156,     7,     0,   196,   158,     7,
     0,   196,     3,     7,     0,     0,   237,   401,     0,     0,
     0,   238,   239,   240,     0,     5,   197,   245,     7,     0,
     5,   260,   197,   245,     7,     0,     0,     5,   258,   197,
   241,   245,     7,     0,    49,   221,   256,   222,     7,     0,
   242,     0,   410,     0,     0,     0,     5,   221,     3,   222,
   197,    52,   243,   221,   224,   253,   244,   229,   224,   253,
   229,   413,   222,     7,     0,     0,     0,   249,   221,   246,
   250,   247,   251,   222,     0,   224,   253,     0,   245,     0,
     5,   259,     0,    55,     0,     5,     0,   253,     0,    50,
     0,     0,   257,   252,   253,     0,   257,    51,     5,   259,
     0,     5,     0,   255,     0,   227,   254,   228,     0,     0,
   254,   257,   255,     0,   254,   257,   211,   255,     0,     3,
     0,   230,   416,   230,     0,     3,     8,   413,     0,     3,
     8,     3,     8,   413,     0,     5,     0,     5,   227,   413,
   228,     0,     5,   227,   228,     0,     0,   256,   257,     5,
     0,   256,   257,     5,   227,   413,   228,     0,     0,   229,
     0,   227,   224,   413,   228,     0,     0,   227,   228,     0,
   227,   413,   228,     0,     0,   261,   262,     0,    53,   221,
   263,   222,     7,     0,     5,   221,   222,   197,   264,     7,
     0,     5,   221,   248,   222,   197,   264,     7,     0,   410,
     0,     0,   263,   257,     5,     0,    11,   221,   413,   222,
     0,    83,   221,     5,   222,     0,     0,   265,   268,     0,
     0,   227,   267,   228,     0,   264,     0,   267,   229,   264,
     0,     0,   269,   270,     0,   273,     0,     0,     0,   270,
   198,   271,   270,     8,   272,   270,     0,   270,   212,   270,
     0,   270,   215,   270,     0,    45,   221,   270,   229,   270,
   222,     0,   270,   213,   270,     0,   270,   210,   270,     0,
   270,   211,   270,     0,   270,   214,   270,     0,   270,   218,
   270,     0,   270,   204,   270,     0,   270,   206,   270,     0,
   270,   205,   270,     0,   270,   207,   270,     0,   270,   201,
   270,     0,   270,   202,   270,     0,   270,   203,   270,     0,
   270,   200,   270,     0,   270,   199,   270,     0,   211,   270,
     0,   210,   270,     0,   216,   270,     0,   219,   270,   220,
     0,   414,     0,   412,   277,   279,     0,     5,   350,     0,
   350,     0,   350,   277,     0,     0,   104,   274,   221,   268,
   222,     0,     0,    46,   221,     5,   221,   275,   268,   222,
   222,   227,   413,   228,     0,    47,   221,     5,   222,   227,
   413,   229,   413,   228,     0,    42,   221,   350,   222,     0,
    44,   221,   350,   222,     0,     0,    43,   276,   221,   268,
   229,   248,   222,     0,   204,     5,   206,   221,   268,   222,
     0,   225,     5,     0,   225,   181,     0,   225,   122,     0,
   225,     3,     0,   273,   224,     3,     0,   224,     3,     0,
   273,   226,     3,     0,   221,   223,   222,     0,   221,   222,
     0,   221,   278,   222,     0,   270,     0,   278,   229,   270,
     0,     0,   227,   416,   228,     0,   227,    55,   221,   248,
   222,   228,     0,     0,   280,   227,   281,   228,     0,     0,
   281,   282,     0,    80,     5,     7,     0,    68,   227,   283,
   228,     0,     0,   283,   227,   284,   228,     0,     0,   284,
   285,     0,    55,   248,     7,     0,    55,    50,     7,     0,
    67,     5,   279,     7,     0,     0,   286,   227,   287,   228,
     0,     0,   287,   288,     0,    80,     5,     7,     0,    72,
   264,     7,     0,    68,   227,   289,   228,     0,     0,   289,
   227,   290,   228,     0,     0,   290,   291,     0,    70,     5,
     7,     0,    71,     5,     7,     0,    68,   227,   292,   228,
     0,     0,   292,   227,   293,   228,     0,     0,   293,   294,
     0,    73,     5,     7,     0,    74,   413,     7,     0,    75,
   413,     7,     0,    76,   413,     7,     0,    77,   413,     7,
     0,    78,   413,     7,     0,     0,   295,   296,     0,   227,
   297,   228,     0,   410,     0,     0,   297,   298,     0,    80,
     5,     7,     0,    80,     5,   258,     7,     0,    70,     5,
     7,     0,    68,   227,   299,   228,     0,    68,     5,   227,
   299,   228,     0,     0,   299,   227,   300,   228,     0,     0,
   300,   301,     0,    70,     5,     7,     0,    55,   248,     7,
     0,    56,   248,     7,     0,    62,   264,     7,     0,    61,
   264,     7,     0,    66,     5,     7,     0,    63,   227,     3,
   257,     3,   228,     7,     0,    57,   248,     7,     0,    58,
   248,     7,     0,    83,   264,     7,     0,    60,   264,     7,
     0,    59,   264,     7,     0,    83,   221,   264,   229,   264,
   222,     7,     0,    60,   221,   264,   229,   264,   222,     7,
     0,    59,   221,   264,   229,   264,   222,     7,     0,     0,
   302,   303,     0,   227,   304,   228,     0,   410,     0,     0,
   304,   305,     0,    80,     5,     7,     0,    80,     5,   258,
     7,     0,    70,     5,     7,     0,    81,   227,   306,   228,
     0,    88,   227,   312,   228,     0,    90,   227,   319,   228,
     0,    54,   227,   322,   228,     0,     0,   306,   227,   307,
   228,     0,     0,   307,   308,     0,    80,     5,     7,     0,
    82,     5,     7,     0,    82,     5,   258,     7,     0,    83,
     5,   309,     7,     0,    84,   227,     5,   257,     5,   228,
     7,     0,    85,   266,     7,     0,    86,   248,     7,     0,
    87,   248,     7,     0,     0,     0,     0,   227,    95,     5,
     7,    94,     5,   258,     7,   310,    48,   248,     7,   311,
   111,     5,   259,     7,   228,     0,     0,   312,   227,   313,
   228,     0,     0,   313,   314,     0,    80,     5,     7,     0,
    89,   315,     7,     0,    82,   317,     7,     0,     5,     0,
   227,   316,   228,     0,     0,   316,   257,     5,     0,     5,
     0,   227,   318,   228,     0,     0,   318,   257,     5,     0,
     0,   319,   227,   320,   228,     0,     0,   320,   321,     0,
    80,     5,     7,     0,    70,     5,     7,     0,    82,     5,
     7,     0,     0,   322,   227,   323,   228,     0,     0,   323,
   324,     0,    82,     5,     7,     0,    87,   249,    93,     5,
     7,     0,    91,   249,     7,     0,    92,   252,     7,     0,
    93,     5,   259,     7,     0,     0,   325,   326,     0,   227,
   327,   228,     0,   410,     0,     0,   327,   328,     0,    80,
     5,     7,     0,    80,     5,   258,     7,     0,    70,     5,
     7,     0,    95,   227,   329,   228,     0,    99,   227,   335,
   228,     0,     0,   329,   227,   330,   228,     0,     0,   330,
   331,     0,    80,     5,     7,     0,    70,    90,     7,     0,
    70,   100,     7,     0,    70,     5,     7,     0,     0,    96,
     5,   259,   332,   334,     7,     0,    97,     3,     7,     0,
     0,   221,   333,   268,   222,     7,     0,   110,   248,     7,
     0,    69,     5,     7,     0,    67,     5,     7,     0,    98,
     3,     7,     0,     0,   221,     5,   222,     0,     0,   335,
   336,     0,   100,   227,   341,   228,     0,   101,   227,   341,
   228,     0,   102,   227,   345,   228,     0,   103,   227,   337,
   228,     0,     0,   337,   338,     0,    70,     5,     7,     0,
    93,     5,     7,     0,   227,   339,   228,     0,     0,   339,
   340,     0,    64,   350,     7,     0,    65,   350,     7,     0,
    99,   350,     7,     0,   110,   248,     7,     0,     0,   341,
   342,     0,     0,     0,   349,   221,   343,   268,   344,   229,
   268,   222,     7,     0,   110,   248,     7,     0,    67,     5,
     7,     0,    69,     5,     7,     0,     0,   345,   346,     0,
   110,   248,     7,     0,     0,     0,   349,   221,   347,   268,
   348,   229,   350,   222,     7,     0,     0,   104,     0,   105,
     0,   106,     0,   107,     0,   108,     0,   109,     0,   227,
     5,     5,   228,     0,   227,     5,   228,     0,     0,   351,
   352,     0,   227,   353,   228,     0,   410,     0,     0,   353,
   354,     0,    80,     5,     7,     0,    80,     5,   258,     7,
     0,   112,   227,   356,   228,     0,     0,   119,   355,   227,
   363,   228,     0,     0,   356,   227,   357,   228,     0,     0,
   357,   358,     0,    80,     5,     7,     0,    70,     5,     7,
     0,   113,   359,     7,     0,   114,   418,     7,     0,   117,
   361,     7,     0,   118,     5,     7,     0,   115,   415,     7,
     0,   116,   418,     7,     0,     5,   259,     0,   227,   360,
   228,     0,     0,   360,   257,     5,     0,     5,     0,   227,
   362,   228,     0,     0,   362,   257,     5,     0,     0,   363,
   364,     0,     5,     5,     7,     0,   121,   264,     7,     0,
   133,   227,   370,   228,     0,   137,   227,   372,   228,     0,
   140,   227,   374,   228,     0,   143,   227,   376,   228,     0,
     5,   221,     5,   222,     7,     0,   121,   221,   264,   222,
     7,     0,   132,     7,     0,   126,   221,   264,   222,   227,
   363,   228,     0,   126,   221,   264,   222,   227,   363,   228,
   127,   227,   363,   228,     0,   123,   221,     5,   229,   264,
   222,     7,     0,   130,   221,     5,   229,   264,   222,     7,
     0,   131,   221,     5,   229,   248,   229,     5,   222,     7,
     0,   124,   221,     5,   229,     5,   229,   415,   222,     7,
     0,   125,   221,     5,   229,     5,   229,   413,   222,     7,
     0,   128,   221,     5,   229,   413,   229,   415,   229,   413,
   222,     7,     0,   129,   221,     5,   229,     5,   229,     5,
   229,   413,   229,   415,   229,   413,   229,   413,   222,     7,
     0,   133,   221,   413,   229,   413,   229,   264,   229,   264,
   222,   227,   363,   228,     0,   137,   221,   413,   229,   413,
   229,   264,   229,   413,   229,   413,   222,   227,   363,   228,
     0,   140,   221,   413,   229,   413,   229,   264,   222,   227,
   363,   228,     0,   140,   221,   413,   229,   413,   229,   264,
   229,   413,   222,   227,   363,   228,     0,     0,   163,   365,
   221,   367,   368,   222,     7,     0,     0,   166,   366,   221,
   367,   368,   222,     7,     0,   146,   221,   248,   229,   264,
   222,     7,     0,   158,   221,     5,   222,     7,     0,   147,
   221,   418,   222,     7,     0,   148,   221,     5,   229,   415,
   229,   413,   222,     7,     0,   149,   221,     5,   229,   413,
   229,   418,   222,     7,     0,   150,   227,     5,   228,     7,
     0,   151,   227,     5,   228,     7,     0,   155,   227,     5,
   229,   248,   229,   418,   229,   418,   229,   264,   228,     7,
     0,   155,   227,     5,   229,   248,   229,   418,   228,     7,
     0,   152,   221,     5,   229,     5,   229,   413,   229,   413,
   222,   227,   363,   228,     7,     0,   153,   221,     5,   229,
     5,   222,     7,     0,   154,   221,     5,   229,     5,   222,
     7,     0,   266,     0,     5,     0,     0,   368,   369,     0,
   229,   178,   418,     0,   229,   181,   415,     0,   229,   415,
     0,     0,   370,   371,     0,   134,   413,     7,     0,   135,
   413,     7,     0,   122,   264,     7,     0,   136,   264,     7,
     0,   119,   227,   363,   228,     0,     0,   372,   373,     0,
   134,   413,     7,     0,   135,   413,     7,     0,   122,   264,
     7,     0,   138,   413,     7,     0,   139,   413,     7,     0,
   119,   227,   363,   228,     0,     0,   374,   375,     0,   141,
   413,     7,     0,    72,   413,     7,     0,   142,   264,     7,
     0,   193,   413,     7,     0,   119,   227,   363,   228,     0,
     0,   376,   377,     0,   141,   413,     7,     0,   144,   413,
     7,     0,    72,   413,     7,     0,   193,   413,     7,     0,
   112,     5,     7,     0,   145,   227,   378,   228,     0,   119,
   227,   363,   228,     0,   120,   227,   363,   228,     0,     0,
   378,   227,   379,   228,     0,     0,   379,   380,     0,    70,
     5,     7,     0,    95,     5,     7,     0,   110,   248,     7,
     0,    72,   413,     7,     0,    83,   264,     7,     0,   193,
     5,     7,     0,     0,   381,   382,     0,   227,   383,   228,
     0,   410,     0,     0,   383,   384,     0,    80,     5,     7,
     0,    80,     5,   258,     7,     0,   113,     5,   259,     7,
     0,   157,     5,     7,     0,    95,   227,   385,   228,     0,
     0,   385,   227,   386,   228,     0,     0,   386,   387,     0,
    80,     5,     7,     0,    61,   227,   388,   228,     0,     0,
   388,   100,   227,   389,   228,     0,   388,     5,   227,   389,
   228,     0,     0,   389,   390,     0,     0,   349,   221,   391,
   268,   222,     7,     0,    70,     5,     7,     0,     0,   110,
   392,   248,     7,     0,    67,     5,     7,     0,    69,     5,
     7,     0,     0,   393,   394,     0,   227,   395,   228,     0,
   410,     0,     0,   395,   396,     0,    80,     5,     7,     0,
   159,     5,     7,     0,   183,     5,     7,     0,   161,   418,
     7,     0,   119,   227,   399,   228,     0,     0,   158,     5,
   160,     5,   398,   227,   399,   228,     0,     0,     0,   399,
   400,   401,     0,   162,   221,   403,   406,   407,   222,     7,
     0,   163,   221,   403,   406,   407,   222,     7,     0,     0,
   164,   221,   248,   402,   229,   110,   248,   407,   222,     7,
     0,   165,   221,     6,   407,   222,     7,     0,     5,   405,
   229,     0,     5,   405,   404,     5,   405,   229,     0,   212,
     0,   213,     0,   210,     0,   211,     0,     0,   221,   248,
   222,     0,   168,     0,   169,   248,     0,   170,   248,     0,
   172,   227,   227,   416,   228,   227,   416,   228,   227,   416,
   228,   228,     0,   171,   248,     0,   171,   227,   264,   229,
   264,   229,   264,   228,   227,   415,   229,   415,   229,   415,
   228,     0,   173,   227,   416,   228,     0,   174,   227,   227,
   416,   228,   227,   416,   228,   228,   227,   413,   228,     0,
   175,   227,   227,   416,   228,   227,   416,   228,   227,   416,
   228,   228,   227,   413,   229,   413,   228,     0,   176,   227,
   227,   416,   228,   227,   416,   228,   227,   416,   228,   227,
   416,   228,   228,   227,   413,   229,   413,   229,   413,   228,
     0,   169,   248,   177,     5,   227,   413,   229,   413,   228,
   227,   413,   228,     0,     0,   407,   408,     0,   229,   178,
   418,     0,   229,   178,   206,   418,     0,   229,   178,   209,
   418,     0,   229,   179,   413,     0,   229,   186,     0,   229,
   187,     0,   229,   182,   413,     0,   229,   183,     5,     0,
   229,   184,   409,     0,   229,   185,   409,     0,   229,   183,
   409,     0,   229,   180,   413,     0,   229,   181,   415,     0,
   229,   167,     5,     0,   229,   189,     5,     0,   229,   188,
   413,     0,   229,    61,   415,     0,   229,   190,   413,     0,
   229,   190,   227,   416,   228,     0,   229,   191,     0,   229,
   115,   415,     0,   229,   146,   227,   264,   229,   264,   229,
   264,   228,     0,   229,   192,   266,     0,     0,   409,     6,
     0,     5,   197,   415,     7,     0,     5,   197,     6,     7,
     0,    16,   221,   411,   222,     7,     0,     0,   411,   257,
     5,     0,   411,   257,     5,   197,   413,     0,   411,   257,
     5,   197,     6,     0,    22,     0,    23,     0,    24,     0,
    25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
    30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
    35,     0,    36,     0,    37,     0,    38,     0,    39,     0,
    40,     0,    41,     0,     5,     0,   414,     0,   219,   413,
   220,     0,   211,   413,     0,   216,   413,     0,   413,   211,
   413,     0,   413,   210,   413,     0,   413,   212,   413,     0,
   413,   213,   413,     0,   413,   214,   413,     0,   413,   218,
   413,     0,   413,   204,   413,     0,   413,   206,   413,     0,
   413,   205,   413,     0,   413,   207,   413,     0,   413,   201,
   413,     0,   413,   202,   413,     0,   413,   200,   413,     0,
   413,   199,   413,     0,    22,   221,   413,   222,     0,    23,
   221,   413,   222,     0,    24,   221,   413,   222,     0,    25,
   221,   413,   222,     0,    26,   221,   413,   222,     0,    27,
   221,   413,   222,     0,    28,   221,   413,   222,     0,    29,
   221,   413,   222,     0,    30,   221,   413,   222,     0,    31,
   221,   413,   222,     0,    32,   221,   413,   229,   413,   222,
     0,    33,   221,   413,   222,     0,    34,   221,   413,   222,
     0,    35,   221,   413,   222,     0,    36,   221,   413,   222,
     0,    37,   221,   413,   222,     0,    38,   221,   413,   222,
     0,    39,   221,   413,   229,   413,   222,     0,    40,   221,
   413,   229,   413,   222,     0,    41,   221,   413,   229,   413,
   222,     0,   413,   198,   413,     8,   413,     0,   413,   224,
     0,     4,     0,     3,     0,    17,     0,    18,     0,    19,
     0,    20,     0,    21,     0,     5,     0,     0,   413,     0,
   417,     0,   227,   416,   228,     0,   413,     0,   417,     0,
   416,   229,   413,     0,   416,   229,   417,     0,   413,     8,
   413,     0,   413,     8,   413,     8,   413,     0,     5,   227,
   228,     0,     5,   227,   416,   228,     0,    12,   221,     5,
   222,     0,    13,   221,     5,   229,     5,   222,     0,    14,
   221,   413,   229,   413,   229,   413,   222,     0,    15,   221,
   413,   229,   413,   229,   413,   222,     0,     6,     0,     5,
     0,     9,   221,   418,   229,   418,   222,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   327,   362,   399,   402,   405,   408,   411,   412,   413,   414,
   415,   416,   417,   418,   419,   421,   423,   425,   430,   439,
   442,   444,   446,   448,   450,   452,   454,   456,   458,   460,
   462,   464,   466,   468,   470,   472,   474,   476,   478,   481,
   489,   503,   506,   507,   510,   515,   518,   520,   523,   525,
   527,   532,   543,   550,   558,   566,   577,   586,   595,   602,
   637,   642,   653,   656,   670,   675,   678,   727,   740,   766,
   771,   786,   804,   825,   831,   834,   843,   857,   891,   904,
   924,   928,   938,   955,   955,   958,   964,   967,   970,   980,
   983,   986,   990,  1010,  1054,  1058,  1061,  1078,  1087,  1094,
  1097,  1102,  1108,  1112,  1117,  1122,  1128,  1135,  1139,  1152,
  1167,  1181,  1187,  1193,  1199,  1205,  1211,  1217,  1223,  1229,
  1235,  1241,  1247,  1253,  1259,  1265,  1271,  1277,  1284,  1290,
  1292,  1301,  1305,  1311,  1385,  1419,  1428,  1440,  1442,  1453,
  1455,  1469,  1481,  1487,  1493,  1495,  1524,  1548,  1561,  1567,
  1574,  1580,  1587,  1594,  1604,  1607,  1608,  1611,  1614,  1617,
  1622,  1625,  1639,  1646,  1651,  1656,  1660,  1667,  1672,  1677,
  1682,  1688,  1692,  1697,  1700,  1736,  1744,  1749,  1758,  1762,
  1771,  1774,  1779,  1784,  1789,  1797,  1801,  1813,  1823,  1828,
  1833,  1838,  1850,  1854,  1910,  1913,  1916,  1919,  1922,  1931,
  1938,  1941,  1963,  1966,  1976,  1980,  1988,  1995,  2004,  2007,
  2027,  2044,  2066,  2076,  2080,  2092,  2116,  2141,  2146,  2154,
  2162,  2172,  2189,  2197,  2204,  2211,  2220,  2229,  2238,  2257,
  2265,  2268,  2291,  2295,  2304,  2308,  2316,  2323,  2332,  2335,
  2338,  2341,  2346,  2364,  2411,  2427,  2431,  2436,  2441,  2446,
  2460,  2480,  2485,  2509,  2564,  2568,  2572,  2581,  2645,  2651,
  2656,  2661,  2665,  2672,  2675,  2680,  2698,  2703,  2707,  2724,
  2738,  2743,  2747,  2760,  2766,  2773,  2780,  2784,  2791,  2801,
  2812,  2829,  2901,  2913,  2917,  2937,  2951,  2954,  2957,  3001,
  3008,  3011,  3033,  3037,  3045,  3049,  3057,  3064,  3074,  3076,
  3081,  3096,  3112,  3129,  3133,  3138,  3142,  3145,  3155,  3194,
  3218,  3223,  3229,  3390,  3395,  3404,  3413,  3418,  3421,  3459,
  3476,  3502,  3507,  3510,  3513,  3518,  3526,  3529,  3541,  3551,
  3563,  3572,  3575,  3579,  3581,  3583,  3589,  3607,  3611,  3622,
  3683,  3729,  3753,  3762,  3774,  3791,  3795,  3829,  3838,  3892,
  3908,  3911,  3912,  3913,  3914,  3915,  3916,  3920,  3943,  3965,
  3972,  3975,  3996,  4000,  4008,  4012,  4021,  4028,  4031,  4033,
  4038,  4054,  4071,  4086,  4090,  4095,  4104,  4107,  4112,  4117,
  4122,  4127,  4134,  4173,  4178,  4183,  4193,  4205,  4209,  4214,
  4225,  4234,  4241,  4265,  4272,  4278,  4284,  4290,  4298,  4319,
  4326,  4332,  4343,  4354,  4366,  4378,  4398,  4415,  4434,  4455,
  4489,  4502,  4516,  4529,  4542,  4549,  4551,  4558,  4560,  4570,
  4580,  4588,  4601,  4614,  4623,  4632,  4646,  4659,  4676,  4690,
  4708,  4714,  4724,  4730,  4733,  4737,  4747,  4761,  4773,  4777,
  4783,  4787,  4791,  4796,  4805,  4818,  4822,  4828,  4832,  4836,
  4840,  4845,  4854,  4866,  4869,  4875,  4879,  4883,  4887,  4896,
  4911,  4914,  4920,  4924,  4928,  4933,  4943,  4949,  4955,  4964,
  4968,  4972,  4986,  4989,  5001,  5030,  5033,  5036,  5044,  5060,
  5068,  5071,  5092,  5095,  5106,  5109,  5117,  5125,  5171,  5176,
  5181,  5185,  5189,  5196,  5200,  5204,  5209,  5215,  5221,  5234,
  5245,  5248,  5256,  5284,  5295,  5295,  5301,  5310,  5326,  5334,
  5337,  5342,  5345,  5354,  5357,  5365,  5377,  5388,  5393,  5398,
  5416,  5425,  5429,  5434,  5442,  5448,  5452,  5457,  5461,  5468,
  5482,  5504,  5507,  5508,  5509,  5512,  5516,  5520,  5528,  5535,
  5542,  5566,  5573,  5585,  5598,  5618,  5644,  5677,  5697,  5720,
  5723,  5731,  5738,  5745,  5749,  5753,  5757,  5761,  5771,  5776,
  5781,  5801,  5808,  5817,  5826,  5835,  5842,  5850,  5854,  5863,
  5867,  5875,  5881,  5889,  5896,  5942,  5959,  5965,  5969,  5972,
  5978,  5984,  5995,  5997,  5998,  5999,  6000,  6001,  6002,  6003,
  6004,  6005,  6006,  6007,  6008,  6009,  6010,  6011,  6012,  6013,
  6014,  6015,  6016,  6018,  6020,  6021,  6022,  6023,  6024,  6025,
  6026,  6027,  6028,  6029,  6030,  6031,  6032,  6033,  6034,  6035,
  6036,  6037,  6038,  6039,  6040,  6041,  6042,  6043,  6044,  6045,
  6046,  6047,  6048,  6049,  6050,  6051,  6052,  6053,  6054,  6055,
  6056,  6057,  6058,  6061,  6064,  6065,  6066,  6067,  6068,  6069,
  6070,  6086,  6091,  6097,  6100,  6105,  6113,  6116,  6119,  6129,
  6137,  6148,  6164,  6186,  6201,  6239,  6247,  6257,  6262,  6277
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tInclude","tConstant","tList",
"tListAlt","tLinSpace","tLogSpace","tDefineConstant","tPi","t0D","t1D","t2D",
"t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin","tCos","tAcos","tTan","tAtan",
"tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor","tCeil","tFmod","tModulo",
"tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct","tMHTransform","tMHJacNL",
"tGroup","tDefineGroup","tAll","tInSupport","tMovingBand2D","tDefineFunction",
"tConstraint","tRegion","tSubRegion","tRegionRef","tSubRegionRef","tFilter",
"tCoefficient","tValue","tTimeFunction","tBranch","tNode","tLoop","tNameOfResolution",
"tJacobian","tCase","tIntegration","tType","tSubType","tCriterion","tGeoElement",
"tNumberOfPoints","tMaxNumberOfPoints","tNumberOfDivisions","tMaxNumberOfDivisions",
"tStoppingCriterion","tFunctionSpace","tName","tBasisFunction","tNameOfCoef",
"tFunction","tdFunction","tSubFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction",
"tGlobalQuantity","tEntityType","tEntitySubType","tNameOfConstraint","tFormulation",
"tQuantity","tNameOfSpace","tIndexOfSystem","tSymmetry","tEquation","tGalerkin",
"tdeRham","tGlobalTerm","tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof",
"tJacNL","tNeverDt","tIn","tResolution","tDefineSystem","tNameOfFormulation",
"tNameOfMesh","tFrequency","tSolver","tOriginSystem","tDestinationSystem","tOperation",
"tOperationEnd","tSetTime","tDTime","tSetFrequency","tFourierTransform","tFourierTransformJ",
"tIf","tElse","tLanczos","tPerturbation","tUpdate","tUpdateConstraint","tBreak",
"tTimeLoopTheta","tTime0","tTimeMax","tTheta","tTimeLoopNewmark","tBeta","tGamma",
"tIterativeLoop","tNbrMaxIteration","tRelaxationFactor","tIterativeTimeReduction",
"tDivisionCoefficient","tChangeOfState","tChangeOfCoordinates","tSystemCommand",
"tSolveJac_AdaptRelax","tSaveSolutionExtendedMH","tInit_MovingBand2D","tMesh_MovingBand2D",
"tGenerate_MH_Moving","tGenerateGroup","tGenerateJacGroup","tSaveMesh","tPostProcessing",
"tNameOfSystem","tPostOperation","tNameOfPostProcessing","tUsingPost","tAppend",
"tPlot","tPrint","tPrintGroup","tEcho","tWrite","tAdapt","tOnGlobal","tOnRegion",
"tOnElementsOf","tOnGrid","tOnSection","tOnPoint","tOnLine","tOnPlane","tOnBox",
"tWithArgument","tFile","tDepth","tDimension","tTimeStep","tHarmonicToTime",
"tFormat","tHeader","tFooter","tSkin","tSmoothing","tTarget","tSort","tIso",
"tNoNewLine","tChangeOfValues","tFlag","tHelp","tCpu","tCheck","tDEF","'?'",
"tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'","tLESSOREQUAL","'>'",
"tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'","'*'","'/'","'%'",
"tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'","'['","']'","'.'","'#'",
"'$'","tSHOW","'{'","'}'","','","'@'","Stats","@1","ProblemDefinitions","@2",
"ProblemDefinition","Interactive","@3","Groups","@4","Group","@5","MovingBand2DGroup",
"@6","@7","ReducedGroupRHS","@8","@9","GroupRHS","FunctionForGroup","ListOfRegionOrAll",
"SuppListOfRegion","SuppListTypeForGroup","ListOfRegion","RecursiveListOfRegion",
"IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex","Index","Functions",
"Function","DefineFunctions","Expression","@10","ListOfExpression","RecursiveListOfExpression",
"WholeQuantityExpression","@11","WholeQuantity","@12","@13","WholeQuantity_Single",
"@14","@15","@16","ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction",
"JacobianMethods","JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase",
"JacobianCaseTerm","IntegrationMethods","IntegrationMethod","IntegrationMethodTerm",
"IntegrationCases","IntegrationCase","IntegrationCaseTerm","QuadratureCases",
"QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint","Constraint",
"ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm","FunctionSpaces",
"BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction",
"BasisFunctionTerm","OptionalParametersForBasisFunction","@17","@18","SubSpaces",
"SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
"ListOfBasisFunctionCoef","RecursiveListOfBasisFunctionCoef","GlobalQuantities",
"GlobalQuantity","GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm",
"Formulations","BracedFormulation","Formulation","FormulationTerm","DefineQuantities",
"DefineQuantity","DefineQuantityTerm","@19","@20","IndexInFunctionSpace","Equations",
"EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
"GlobalEquationTermTermTerm","LocalTerm","LocalTermTerm","@21","@22","GlobalTerm",
"GlobalTermTerm","@23","@24","TermOperator","Quantity_Def","Resolutions","BracedResolution",
"Resolution","ResolutionTerm","@25","DefineSystems","DefineSystem","DefineSystemTerm",
"ListOfFormulation","RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem",
"Operation","OperationTerm","@26","@27","PrintOperation","PrintOperationOptions",
"PrintOperationOption","TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark",
"TimeLoopNewmarkTerm","IterativeLoop","IterativeLoopTerm","IterativeTimeReduction",
"IterativeTimeReductionTerm","ChangeOfStates","ChangeOfState","ChangeOfStateTerm",
"PostProcessings","BracedPostProcessing","PostProcessing","PostProcessingTerm",
"PostQuantities","PostQuantity","PostQuantityTerm","SubPostQuantities","SubPostQuantity",
"SubPostQuantityTerm","@28","@29","PostOperations","BracedPostOperation","PostOperation",
"PostOperationTerm","SeparatePostOperation","@30","PostSubOperations","@31",
"PostSubOperation","@32","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","PrintOptions","PrintOption","ParsedStrings","Affectation","DefineConstants",
"NameForFunction","FExpr","OneFExpr","ListOfFExpr","RecursiveListOfFExpr","MultiFExpr",
"CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   232,   231,   233,   234,   233,   235,   235,   235,   235,   235,
   235,   235,   235,   235,   235,   235,   235,   235,   235,   236,
   236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
   236,   236,   236,   236,   236,   236,   236,   236,   236,   237,
   236,   238,   239,   238,   240,   240,   241,   240,   240,   240,
   240,   243,   244,   242,   246,   247,   245,   245,   248,   248,
   249,   249,   250,   250,   251,   251,   251,   252,   253,   253,
   254,   254,   254,   255,   255,   255,   255,   255,   255,   255,
   256,   256,   256,   257,   257,   258,   259,   259,   260,   261,
   261,   262,   262,   262,   262,   263,   263,   264,   264,   265,
   264,   266,   266,   267,   267,   269,   268,   270,   271,   272,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   273,   273,   273,   273,   273,   273,   274,   273,   275,
   273,   273,   273,   273,   276,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   277,   277,   277,   278,   278,   279,
   279,   279,   280,   280,   281,   281,   282,   282,   283,   283,
   284,   284,   285,   285,   285,   286,   286,   287,   287,   288,
   288,   288,   289,   289,   290,   290,   291,   291,   291,   292,
   292,   293,   293,   294,   294,   294,   294,   294,   294,   295,
   295,   296,   296,   297,   297,   298,   298,   298,   298,   298,
   299,   299,   300,   300,   301,   301,   301,   301,   301,   301,
   301,   301,   301,   301,   301,   301,   301,   301,   301,   302,
   302,   303,   303,   304,   304,   305,   305,   305,   305,   305,
   305,   305,   306,   306,   307,   307,   308,   308,   308,   308,
   308,   308,   308,   308,   309,   310,   311,   309,   312,   312,
   313,   313,   314,   314,   314,   315,   315,   316,   316,   317,
   317,   318,   318,   319,   319,   320,   320,   321,   321,   321,
   322,   322,   323,   323,   324,   324,   324,   324,   324,   325,
   325,   326,   326,   327,   327,   328,   328,   328,   328,   328,
   329,   329,   330,   330,   331,   331,   331,   331,   332,   331,
   331,   333,   331,   331,   331,   331,   331,   334,   334,   335,
   335,   336,   336,   336,   336,   337,   337,   338,   338,   338,
   339,   339,   340,   340,   340,   340,   341,   341,   343,   344,
   342,   342,   342,   342,   345,   345,   346,   347,   348,   346,
   349,   349,   349,   349,   349,   349,   349,   350,   350,   351,
   351,   352,   352,   353,   353,   354,   354,   354,   355,   354,
   356,   356,   357,   357,   358,   358,   358,   358,   358,   358,
   358,   358,   359,   359,   360,   360,   361,   361,   362,   362,
   363,   363,   364,   364,   364,   364,   364,   364,   364,   364,
   364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
   364,   364,   364,   364,   365,   364,   366,   364,   364,   364,
   364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
   367,   367,   368,   368,   369,   369,   369,   370,   370,   371,
   371,   371,   371,   371,   372,   372,   373,   373,   373,   373,
   373,   373,   374,   374,   375,   375,   375,   375,   375,   376,
   376,   377,   377,   377,   377,   377,   377,   377,   377,   378,
   378,   379,   379,   380,   380,   380,   380,   380,   380,   381,
   381,   382,   382,   383,   383,   384,   384,   384,   384,   384,
   385,   385,   386,   386,   387,   387,   388,   388,   388,   389,
   389,   391,   390,   390,   392,   390,   390,   390,   393,   393,
   394,   394,   395,   395,   396,   396,   396,   396,   396,   398,
   397,   399,   400,   399,   401,   401,   402,   401,   401,   403,
   403,   404,   404,   404,   404,   405,   405,   406,   406,   406,
   406,   406,   406,   406,   406,   406,   406,   406,   407,   407,
   408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
   408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
   408,   408,   408,   409,   409,   410,   410,   410,   411,   411,
   411,   411,   412,   412,   412,   412,   412,   412,   412,   412,
   412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
   412,   412,   412,   413,   413,   413,   413,   413,   413,   413,
   413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
   413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
   413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
   413,   413,   413,   414,   414,   414,   414,   414,   414,   414,
   414,   415,   415,   415,   415,   416,   416,   416,   416,   417,
   417,   417,   417,   417,   417,   417,   417,   418,   418,   418
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     0,     3,     4,     5,     0,     6,     5,     1,
     1,     0,     0,    18,     0,     0,     7,     2,     1,     2,
     1,     1,     1,     1,     0,     3,     4,     1,     1,     3,
     0,     3,     4,     1,     3,     3,     5,     1,     4,     3,
     0,     3,     6,     0,     1,     4,     0,     2,     3,     0,
     2,     5,     6,     7,     1,     0,     3,     4,     4,     0,
     2,     0,     3,     1,     3,     0,     2,     1,     0,     0,
     7,     3,     3,     6,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
     2,     3,     1,     3,     2,     1,     2,     0,     5,     0,
    11,     9,     4,     4,     0,     7,     6,     2,     2,     2,
     2,     3,     2,     3,     3,     2,     3,     1,     3,     0,
     3,     6,     0,     4,     0,     2,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
     4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
     2,     3,     1,     0,     2,     3,     4,     3,     4,     5,
     0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
     7,     3,     3,     3,     3,     3,     7,     7,     7,     0,
     2,     3,     1,     0,     2,     3,     4,     3,     4,     4,
     4,     4,     0,     4,     0,     2,     3,     3,     4,     4,
     7,     3,     3,     3,     0,     0,     0,    18,     0,     4,
     0,     2,     3,     3,     3,     1,     3,     0,     3,     1,
     3,     0,     3,     0,     4,     0,     2,     3,     3,     3,
     0,     4,     0,     2,     3,     5,     3,     3,     4,     0,
     2,     3,     1,     0,     2,     3,     4,     3,     4,     4,
     0,     4,     0,     2,     3,     3,     3,     3,     0,     6,
     3,     0,     5,     3,     3,     3,     3,     0,     3,     0,
     2,     4,     4,     4,     4,     0,     2,     3,     3,     3,
     0,     2,     3,     3,     3,     3,     0,     2,     0,     0,
     9,     3,     3,     3,     0,     2,     3,     0,     0,     9,
     0,     1,     1,     1,     1,     1,     1,     4,     3,     0,
     2,     3,     1,     0,     2,     3,     4,     4,     0,     5,
     0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
     3,     3,     2,     3,     0,     3,     1,     3,     0,     3,
     0,     2,     3,     3,     4,     4,     4,     4,     5,     5,
     2,     7,    11,     7,     7,     9,     9,     9,    11,    17,
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
     8,     0,     0,     3,     7,     7,     0,    10,     6,     3,
     6,     1,     1,     1,     1,     0,     3,     1,     2,     2,
    12,     2,    15,     4,    12,    17,    22,    12,     0,     2,
     3,     4,     4,     3,     2,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     5,     2,
     3,     9,     3,     0,     2,     4,     4,     5,     0,     3,
     5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     3,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     6,     4,     4,     4,     4,     4,     4,     6,     6,
     6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     0,     1,     1,     3,     1,     1,     3,     3,     3,
     5,     3,     4,     4,     6,     8,     8,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,   652,   669,   668,     0,    18,   579,
    42,   200,   163,   176,   230,    90,   290,   360,   480,     0,
   509,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    41,   645,   644,   651,     0,
     0,     0,     0,     0,   646,   647,   648,   649,   650,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   653,   604,     0,   654,     0,    84,    43,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    26,    23,    21,    25,    24,    22,    39,    29,    31,    32,
    33,    34,    30,    35,    36,    37,    38,     0,     0,     0,
     0,     0,   577,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   651,   606,   607,
     0,   656,     0,   657,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   643,   576,     0,     0,    85,     0,     6,     0,   204,     8,
   201,   203,   165,     9,   178,    10,   234,    11,   231,   233,
     0,     0,     7,    91,    95,   294,    12,   291,   293,   364,
    13,   361,   363,   484,    14,   481,   483,   520,   513,    15,
   510,   512,   536,     0,     0,    87,    61,     0,    59,   527,
     0,   549,   662,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   605,   655,
     0,   660,     0,   621,   620,   618,   619,   614,   616,   615,
   617,   609,   608,   610,   611,   612,   613,     0,   578,   580,
     0,     0,    44,    50,    51,     0,     0,     0,     0,     0,
    96,     0,     0,     0,     0,     0,     0,     0,   538,     0,
     0,     0,     0,     0,     0,     0,     0,   549,   549,     0,
    60,    74,    78,    71,     0,    58,    69,     0,    55,     0,
   663,   664,     0,     0,     0,   622,   623,   624,   625,   626,
   627,   628,   629,   630,   631,     0,   633,   634,   635,   636,
   637,   638,     0,     0,     0,   658,   659,     0,     0,     0,
     0,   652,     0,     0,     0,     0,    81,     0,     0,     0,
   202,   205,     0,     0,   164,   166,     0,   100,     0,   177,
   179,     0,     0,     0,     0,     0,     0,   232,   235,     0,
     0,    84,     0,     0,     0,     0,   292,   295,     0,     0,
   369,   362,   365,     0,     0,     0,     0,   482,   485,   522,
     0,     0,     0,     0,     0,   511,   514,     0,   534,   535,
   532,   533,   530,     0,   539,   540,   100,   542,     0,     0,
     0,     0,     0,     0,     0,    88,     0,     0,    84,     0,
     0,     0,     0,     0,   550,     0,     0,     0,     0,     0,
     0,     0,   661,   642,   670,   582,   581,   651,     0,     0,
     0,     0,    47,     0,    84,     0,   211,     0,     0,   169,
     0,   183,     0,     0,     0,   106,     0,   281,     0,     0,
   243,   259,   274,   100,     0,     0,     0,     0,     0,   301,
   320,     0,   371,     0,     0,   491,    87,     0,   523,     0,
   522,     0,     0,     0,   537,   536,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   645,    76,    80,     0,    70,
     0,    75,     0,    64,    56,    63,   529,   652,   652,     0,
     0,     0,     0,     0,   652,     0,   574,   574,   574,   555,
   556,     0,     0,     0,   570,   102,   665,     0,     0,   632,
   639,   640,   641,    45,     0,     0,    89,     0,    62,     0,
     0,     0,   211,     0,   208,   206,     0,     0,     0,   167,
     0,     0,     0,   181,   101,     0,   180,     0,   238,   236,
     0,     0,     0,     0,     0,   100,    92,    97,   298,   296,
     0,     0,     0,   366,     0,     0,   391,   486,     0,     0,
     0,   489,   521,     0,   515,   523,   516,   518,   517,     0,
     0,   100,     0,   544,     0,     0,     0,   525,   526,     0,
    79,     0,    72,   549,    84,   567,   571,   100,   564,     0,
     0,   551,   554,   562,   563,   557,   558,   561,   559,   560,
   566,   565,     0,   568,   100,   573,     0,     0,     0,    86,
     0,    46,    49,    82,     0,   213,   209,   207,   171,   168,
   185,   182,     0,     0,   651,   583,   584,   585,   586,   587,
   588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
   598,   599,   600,   601,   602,     0,   145,     0,     0,     0,
     0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
   107,   108,   136,     0,   133,   283,   242,   237,   245,   239,
   261,   240,   276,   241,    93,     0,   297,   303,   299,     0,
     0,     0,     0,   300,   321,   367,   373,   368,     0,   487,
   493,   490,   488,   524,   519,   531,     0,     0,     0,     0,
     0,     0,    77,    73,     0,     0,     0,     0,   552,   553,
   575,     0,   104,     0,   666,   667,    52,    48,     0,   210,
     0,     0,     0,    98,    99,   135,     0,     0,     0,     0,
     0,     0,     0,     0,   130,   129,   131,     0,   153,   151,
   148,   150,   149,     0,   109,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   137,   160,     0,     0,     0,     0,
    94,     0,   337,   337,   345,   326,     0,     0,   100,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   415,   417,   370,   392,     0,     0,   100,
     0,     0,     0,     0,     0,    57,    68,     0,     0,   100,
   569,   103,   100,     0,     0,     0,     0,     0,     0,   100,
   100,   100,   100,     0,     0,     0,   100,   212,   214,     0,
     0,   170,   172,     0,     0,     0,   184,   186,     0,   106,
     0,     0,     0,     0,   106,     0,   132,     0,   359,     0,
   128,   127,   124,   125,   126,   120,   122,   121,   123,   116,
   117,   112,   115,   118,   113,   119,   152,   154,   156,     0,
   158,     0,     0,   134,     0,     0,     0,     0,     0,   282,
   284,     0,     0,     0,     0,   102,     0,     0,   244,   246,
     0,     0,     0,   260,   262,     0,     0,     0,   275,   277,
     0,     0,     0,     0,     0,     0,     0,     0,   312,   302,
   304,   351,   351,   351,     0,     0,     0,     0,     0,   652,
     0,     0,     0,   372,   374,     0,     0,   100,     0,     0,
     0,     0,   100,     0,     0,     0,     0,   401,     0,   438,
     0,   445,     0,   453,   460,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   492,   494,     0,     0,     0,     0,     0,     0,   528,    87,
    66,     0,   105,     0,    83,     0,     0,     0,     0,   100,
     0,   100,     0,     0,     0,     0,     0,     0,   100,     0,
     0,     0,   160,   190,     0,     0,   143,     0,   144,     0,
   140,     0,     0,   106,   358,     0,   155,   157,     0,     0,
     0,     0,     0,     0,     0,    87,     0,     0,   255,     0,
     0,     0,     0,     0,   270,   272,     0,   266,   268,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
     0,     0,     0,   106,     0,     0,   352,   353,   354,   355,
   356,   357,     0,   322,   338,     0,   323,     0,   324,   346,
     0,     0,     0,   331,   325,   327,     0,     0,    87,   385,
     0,     0,     0,     0,   387,   389,     0,     0,   393,     0,
     0,   394,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   102,   102,
   497,     0,     0,     0,     0,     0,     0,     0,    67,   100,
     0,   216,   217,   222,   223,     0,   226,     0,   225,   219,
   218,    84,   220,   215,     0,   224,   174,   173,     0,     0,
   187,   188,     0,     0,   106,     0,   139,     0,   110,   159,
     0,   161,   285,     0,   287,   288,     0,   247,   248,     0,
     0,     0,    84,   252,   253,   254,   263,    84,   265,    84,
   264,   279,   278,   280,   316,   315,   308,   306,   307,   305,
   309,   311,   317,   314,     0,     0,     0,     0,   339,     0,
   348,     0,     0,     0,   376,   375,   383,    84,   377,   378,
   381,   382,    84,   379,   380,     0,     0,   100,     0,     0,
     0,     0,     0,   100,     0,     0,     0,   100,     0,     0,
   100,   395,   439,     0,     0,   100,     0,     0,     0,     0,
   396,   446,     0,     0,     0,     0,   100,     0,   397,   454,
     0,     0,     0,     0,     0,     0,     0,     0,   398,   461,
   100,     0,   652,     0,     0,     0,     0,     0,     0,     0,
     0,   432,   431,   433,   433,     0,   495,     0,   652,     0,
     0,     0,     0,     0,    53,   100,   100,     0,   100,   175,
   192,   189,     0,   114,     0,     0,   147,     0,     0,     0,
   289,   249,     0,   250,     0,   271,     0,   267,     0,   318,
     0,   343,   344,   342,   106,   347,   106,   328,   329,     0,
     0,     0,     0,   330,   332,   384,     0,   388,     0,   399,
   400,     0,     0,     0,   391,     0,     0,     0,     0,     0,
   391,     0,     0,     0,     0,     0,   391,     0,     0,     0,
     0,     0,     0,     0,   391,     0,     0,     0,     0,     0,
   391,   391,     0,     0,   470,     0,     0,   421,     0,     0,
   424,   425,     0,     0,     0,     0,   420,     0,     0,     0,
     0,   496,     0,     0,     0,     0,     0,     0,   572,     0,
     0,     0,     0,     0,     0,   146,     0,     0,   111,     0,
   286,     0,     0,   273,   269,     0,     0,   313,   340,   349,
     0,     0,     0,     0,   386,   390,     0,   652,     0,     0,
   652,     0,     0,     0,   100,     0,   442,   440,   441,   443,
   100,     0,   449,   447,   448,   450,   451,   100,   456,     0,
   455,   457,   458,   464,   466,     0,     0,   462,   463,     0,
   465,     0,     0,     0,     0,     0,     0,     0,     0,   652,
   434,     0,   500,   500,     0,   652,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   191,   193,     0,     0,   162,     0,     0,     0,   310,
     0,     0,   333,   334,   335,   336,   404,     0,     0,   402,
     0,     0,   405,     0,     0,   444,     0,   452,     0,   459,
   468,   469,   472,   467,   419,     0,     0,     0,   429,   430,
     0,   416,     0,   652,   437,   418,   351,   351,   548,     0,
   541,   545,     0,     0,     0,   229,   228,   221,   227,     0,
     0,     0,     0,     0,     0,     0,   142,     0,   251,   319,
   106,     0,     0,     0,     0,     0,     0,     0,   100,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   435,   436,
     0,     0,     0,   505,   499,     0,   501,   498,   652,     0,
     0,     0,   194,   195,   196,   197,   198,   199,     0,     0,
     0,     0,   407,   408,   391,     0,     0,   406,     0,     0,
   391,     0,     0,     0,   100,     0,     0,     0,   471,   473,
   422,   423,     0,   427,     0,     0,     0,     0,     0,   502,
     0,     0,     0,     0,   141,     0,     0,     0,     0,     0,
   652,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   100,   507,   508,   504,     0,   106,   543,     0,
     0,     0,   256,   341,   350,   403,   409,     0,   391,     0,
   413,   391,   474,   477,   478,   475,   476,   479,   391,     0,
   506,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   546,     0,    54,     0,     0,   411,   391,
   414,     0,   426,   503,     0,     0,     0,     0,   428,     0,
   257,     0,   412,     0,     0,     0,     0,     0,   410,   547,
    87,     0,     0,   258,     0,     0,     0
};

static const short yydefgoto[] = {  1755,
     1,     2,     3,    20,    21,    22,   110,   198,   293,   558,
   294,   864,  1430,   239,   442,   625,   240,   241,   525,   746,
   859,   326,   439,   327,   465,   196,   365,   321,   366,   115,
   214,   392,   475,   476,  1313,   754,   575,   576,   701,   900,
  1338,   702,   773,  1195,   768,   805,   922,   924,   112,   297,
   376,   569,   762,   883,   113,   298,   381,   571,   763,   888,
  1190,  1435,  1523,   111,   201,   296,   372,   564,   761,   879,
   114,   209,   299,   389,   582,   808,   940,  1212,  1716,  1745,
   583,   809,   945,  1080,  1220,  1077,  1218,   584,   810,   950,
   578,   807,   931,   116,   218,   302,   398,   592,   812,   961,
  1350,  1094,  1447,   593,   725,   965,  1116,  1244,  1365,   962,
  1105,  1355,  1531,   964,  1110,  1357,  1532,  1106,   703,   117,
   222,   303,   403,   494,   596,   817,   975,  1121,  1248,  1127,
  1253,   729,   847,  1007,  1008,  1314,  1418,  1501,  1142,  1273,
  1144,  1282,  1146,  1290,  1147,  1300,  1490,  1603,  1650,   118,
   226,   304,   409,   600,   848,  1012,  1316,  1567,  1617,  1688,
  1659,   120,   231,   306,   417,    23,   305,   499,   604,    66,
   328,   234,   424,   308,   318,   330,   445,   638,    24,   109,
   704,   172,   105,   106,   173,   174,    29
};

static const short yypact[] = {-32768,
-32768,   104,  3157,   -89,   652,   -72,   -44,     5,    17,    62,
    71,    75,    98,   125,   143,    18,    41,   199,  1926,-32768,
-32768,   532,-32768,-32768,  1781,-32768,-32768,     1,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   172,
-32768,   337,-32768,   343,   383,   399,   430,   436,-32768,   444,
-32768,   460,   462,   476,   490,   498,   509,   511,   515,   522,
   524,   180,   269,   317,   319,-32768,-32768,-32768,   315,   537,
   325,   327,   340,   353,-32768,-32768,-32768,-32768,-32768,   355,
   360,   362,   369,   381,   389,   392,   407,   432,   438,   441,
   446,   480,   487,   500,   502,   504,   512,   534,   536,  3023,
  3023,  3023,  2945,   274,-32768,   551,-32768,   652,  -116,   376,
    24,  -176,  -132,    27,    67,    73,    77,    87,   787,    89,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   792,   792,   162,
   713,   651,-32768,   797,   801,  3023,  3023,  3023,  3023,  3023,
  3023,  3023,  3023,  3023,  3023,  3023,  3023,  3023,  3023,  3023,
  3023,  3023,  3023,  3023,  3023,  3023,  3023,-32768,   -46,   -46,
  3980,   274,   -84,-32768,  3023,  3023,  3023,  3023,  3023,  3023,
  3023,  3023,  3023,  3023,  3023,  3023,  3023,  3023,  3023,  3023,
-32768,-32768,   386,   821,-32768,   832,-32768,   330,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   -18,   626,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   629,  1283,  1283,   157,-32768,    31,-32768,-32768,
   640,-32768,-32768,   181,   641,   649,  2939,  2980,  4007,  4034,
  4061,  4088,  4115,  4142,  4169,  4196,  4223,  4250,  3156,  4277,
  4304,  4331,  4358,  4385,  4412,  3177,  3198,  3219,-32768,-32768,
  2945,  3096,  3123,  4890,  4905,   984,   984,   609,   609,   609,
   609,   288,   288,   -46,   -46,   -46,   -46,   652,-32768,   687,
  -109,   675,-32768,-32768,-32768,   112,   -14,   -23,   335,   161,
-32768,   347,   115,   313,   682,   465,   162,   253,-32768,   162,
   162,    64,   685,   693,   710,   736,   738,-32768,-32768,   674,
-32768,   906,   743,-32768,  2945,-32768,-32768,   711,-32768,  -112,
-32768,-32768,   966,  3023,  3023,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  3023,-32768,-32768,-32768,-32768,
-32768,-32768,  3023,  3023,  3023,   274,-32768,  3023,  3023,   750,
  2984,  1703,   977,  2405,   795,   796,-32768,    32,   990,   992,
-32768,-32768,   762,   993,-32768,-32768,   776,   137,  1006,-32768,
-32768,   817,  1040,  1041,   820,   823,   824,-32768,-32768,   851,
   830,   -21,  1048,  1054,   833,   834,-32768,-32768,  1058,   837,
-32768,-32768,-32768,  1061,   840,  1063,  1064,-32768,-32768,-32768,
  1090,   871,  1091,   652,  1094,-32768,-32768,   879,-32768,-32768,
-32768,-32768,-32768,  1097,   926,-32768,   137,-32768,   880,  2945,
   881,   884,   889,    -1,     2,-32768,  3062,   741,   266,   -19,
   994,    30,  1099,  3074,-32768,   901,  3240,  3261,  4439,  4466,
  4493,  4520,  4844,  4844,-32768,-32768,  4844,   193,  1117,   903,
  3023,  3639,-32768,   164,     4,   900,-32768,  1121,    21,-32768,
  1123,-32768,   910,   912,  1138,-32768,  1139,-32768,  1141,    72,
-32768,-32768,-32768,   137,   952,  1144,  1149,  1156,    91,-32768,
-32768,    92,-32768,   937,    93,-32768,   939,  1160,   940,  1162,
-32768,  1163,  1165,  1166,-32768,   629,  1169,   953,  2945,   350,
  2945,  2945,  2945,  1178,  1185,  1191,  4844,-32768,  3670,-32768,
    82,-32768,   162,-32768,-32768,-32768,-32768,  1820,  1820,   974,
  1188,    33,  3023,  3023,  1820,  3023,  1198,-32768,-32768,-32768,
-32768,  3023,  1199,  1053,-32768,   978,-32768,  3023,  3023,-32768,
-32768,-32768,-32768,-32768,  1012,  3701,-32768,   164,-32768,  1203,
  1204,  1208,-32768,   423,-32768,-32768,   998,  1207,   472,-32768,
   478,  3023,  1211,-32768,-32768,  1293,-32768,   483,-32768,-32768,
  1217,   486,   501,   556,  1218,   137,-32768,-32768,-32768,-32768,
  1219,   558,   297,-32768,  1221,   562,-32768,-32768,  1223,   567,
  1224,-32768,-32768,   532,-32768,  1004,-32768,-32768,-32768,  1005,
  1008,   137,   393,-32768,   572,   586,   588,-32768,-32768,  3023,
-32768,    55,-32768,-32768,    74,-32768,-32768,   137,-32768,   652,
   652,-32768,  4844,  4844,-32768,  4844,-32768,  1227,  1227,  1227,
  4844,-32768,  2945,  4844,   137,-32768,  4547,  4574,  1184,-32768,
  1231,-32768,-32768,  1015,   598,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  4601,  1017,   231,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1022,-32768,  1025,  1026,  1027,
  1029,-32768,  1246,  1293,  1293,  1293,  1293,  1253,   168,  1255,
  4955,    23,  1044,  1044,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1261,-32768,-32768,-32768,  1035,
  1047,  1049,  1050,-32768,-32768,-32768,-32768,-32768,   989,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  3023,  1046,  1055,  1056,
  1057,  1059,  4844,-32768,   182,  1065,    96,  1052,-32768,-32768,
-32768,   603,-32768,   610,-32768,-32768,-32768,-32768,  3023,-32768,
   494,    -5,   123,-32768,-32768,-32768,  1062,  1069,  1062,  1293,
  1280,  1286,  1072,  1086,  1077,  1077,  1077,  4932,-32768,-32768,
-32768,-32768,-32768,    58,-32768,  1293,  1293,  1293,  1293,  1293,
  1293,  1293,  1293,  1293,  1293,  1293,  1293,  1293,  1293,  1293,
  1293,  1297,  1298,   996,-32768,  1075,   644,   922,   120,   117,
-32768,   352,-32768,-32768,-32768,-32768,   419,   102,   103,  1082,
  1084,  1085,  1087,  1088,  1120,  1135,  1136,  1300,   232,   250,
   294,  1115,  1137,  1142,  1143,  1145,  1133,  1140,  1157,  1161,
  1168,  1159,  1171,-32768,-32768,-32768,-32768,    10,  3282,   137,
  2945,  2945,  2945,  2945,  1337,-32768,-32768,  1378,    31,   137,
-32768,-32768,   137,  1172,  3732,   162,   162,   162,   162,   105,
   132,   137,   137,  1167,  1379,  1382,   170,-32768,-32768,   163,
  1385,-32768,-32768,  1173,  1391,  1394,-32768,-32768,  1180,-32768,
  1181,  1736,  1183,  1186,-32768,  1189,-32768,  1177,-32768,  1293,
  4974,  4992,  1423,  1423,  1423,   538,   538,   538,   538,   394,
   394,  1077,  1077,  1077,  1077,  1077,-32768,-32768,-32768,  1190,
  4955,   202,  2906,-32768,  1401,    36,    36,  1402,  1406,-32768,
-32768,  1409,  1410,  1418,  1197,   978,   162,   162,-32768,-32768,
  1420,    56,    60,-32768,-32768,  1421,  1422,  1425,-32768,-32768,
  1426,  1427,   292,  1430,  1432,  1436,  1437,   162,-32768,-32768,
-32768,   782,  1312,  1071,   114,  1439,  1440,    65,   652,  1820,
   652,    79,  1442,-32768,-32768,  1434,  1443,   137,  1435,  1444,
  1456,  1457,   137,  1458,  1460,  1461,  1466,-32768,  3023,-32768,
  3023,-32768,  3023,-32768,-32768,   162,   652,  1467,  1468,  1469,
  1471,  1472,  1473,  1474,  1475,  1477,  1262,  1263,  1201,  1481,
-32768,-32768,  3023,  1239,   612,   615,   617,   625,-32768,   939,
-32768,  1258,-32768,  1264,-32768,  1482,  1483,  1491,  1492,   137,
  1493,   137,  1494,  1495,  1499,  1504,  1501,  1503,   137,  1506,
  1507,  1508,  1075,-32768,  1509,  1512,-32768,  1282,-32768,  1293,
-32768,  1294,  1301,-32768,-32768,   431,-32768,-32768,  1293,  1303,
   628,  1515,  1433,  1524,  1531,   939,  1535,    95,  1316,  1540,
  1539,  1541,  1553,  1556,-32768,-32768,  1557,-32768,-32768,  1558,
  1559,  1561,  1562,  1566,  1567,  1569,  1571,  1572,  1579,   939,
  1586,  1590,  1591,-32768,  1595,  1596,-32768,-32768,-32768,-32768,
-32768,-32768,   162,-32768,-32768,  1395,-32768,   162,-32768,-32768,
  1397,  1598,  1610,-32768,-32768,-32768,  1613,  1614,   939,-32768,
  1616,  1617,  1619,  1624,-32768,-32768,  1633,  1635,-32768,  1428,
  1429,-32768,  1414,  1415,  1416,  1431,  1441,  1448,  1449,  1450,
  3303,   677,  3324,   669,  3345,   424,   763,  1452,  1463,  1453,
  1454,  1419,  1424,  1455,  1464,  1465,  1470,  1476,    81,    81,
-32768,  1642,  3763,  1478,  1484,  1485,  1487,  1522,-32768,   137,
    31,-32768,-32768,-32768,-32768,  1521,-32768,  1523,-32768,-32768,
-32768,  1560,-32768,-32768,  1563,-32768,-32768,-32768,  1647,   631,
-32768,-32768,   162,  4871,-32768,  3023,-32768,  1479,-32768,  4955,
   162,-32768,-32768,  1650,-32768,-32768,  1651,-32768,-32768,  1652,
  1576,  1681,  1560,-32768,-32768,-32768,-32768,   645,-32768,   648,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1480,  1683,  1684,  1688,-32768,  1689,
-32768,  1690,  1693,   331,-32768,-32768,-32768,   670,-32768,-32768,
-32768,-32768,   672,-32768,-32768,  1696,  1697,   137,  1746,  1748,
  1564,  3023,  1783,   137,   162,  3023,  1570,   137,  3023,  3023,
   137,-32768,-32768,  3023,  1599,   137,  3023,  3023,  3023,  3023,
-32768,-32768,  3023,  3023,  1600,  3023,   137,  3023,-32768,-32768,
  3023,  1785,  1601,  1602,  3023,  3023,  1603,  3023,-32768,-32768,
   137,  1824,  1820,  3023,  1829,  1855,  1858,  1860,  1865,   162,
  1870,-32768,-32768,-32768,-32768,    15,-32768,  1654,  1820,  2945,
  1655,  2945,  2945,  1656,-32768,   137,   137,  1875,   137,-32768,
-32768,-32768,  1657,-32768,  1663,  3366,-32768,  1293,  1665,  1881,
-32768,-32768,  1894,-32768,  1895,-32768,  1897,-32768,  1898,  1686,
  1901,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1062,
  1062,  1062,   162,-32768,-32768,-32768,  1899,-32768,  1900,-32768,
-32768,  1691,  1682,  1687,-32768,  3387,  1692,  1695,  1699,  3408,
-32768,  1903,   387,   717,  1905,  3429,-32768,  1908,  1462,  2256,
  2284,  2305,  3450,  2342,-32768,  2369,  1911,  2390,  2440,  1917,
-32768,-32768,  2468,  2506,-32768,  2527,  1704,-32768,  1702,  3471,
-32768,-32768,  1715,  1710,  1723,  1726,-32768,   206,   211,  1725,
  1729,-32768,  3023,  1728,   697,  3023,   704,   714,-32768,  1730,
  1738,  1740,  1735,  1744,   665,-32768,  1745,  3023,  4955,  1747,
-32768,  1957,  1749,-32768,-32768,  1963,  1966,-32768,-32768,-32768,
  1969,  1971,  1972,  1974,-32768,-32768,  1975,  1820,  3023,  1222,
  1820,  1965,  1976,  1979,   137,  1404,-32768,-32768,-32768,-32768,
   137,  1459,-32768,-32768,-32768,-32768,-32768,   137,-32768,  1743,
-32768,-32768,-32768,-32768,-32768,  1920,  1967,-32768,-32768,   653,
-32768,  1978,  3023,   652,  3023,  1980,  1981,   652,  1982,  1742,
-32768,  1983,-32768,-32768,  3794,  1820,  1758,  3825,  1763,  1767,
  1772,  1991,  1992,  1994,  1995,  1998,  3023,  3023,  3023,  3023,
  3023,-32768,-32768,  1777,  3856,-32768,  1912,  2000,  1788,-32768,
  1782,  1784,-32768,-32768,-32768,-32768,-32768,  1790,  4628,  1530,
  1786,  1787,-32768,  1792,  1793,-32768,  1794,-32768,   216,-32768,
-32768,-32768,-32768,-32768,-32768,  4655,  1795,  3492,-32768,-32768,
   721,-32768,   652,  1820,-32768,-32768,   869,   877,-32768,  1796,
-32768,-32768,  1797,  2945,    31,-32768,-32768,-32768,-32768,  2012,
  2554,  2591,  2612,  2641,  2669,  3023,-32768,  2016,-32768,-32768,
-32768,  1062,  2019,  2020,  1801,  3023,  3023,  2022,   137,  3023,
  1803,  3023,   637,  2025,  2026,  3023,  2027,   652,-32768,-32768,
  2030,  2033,  2035,-32768,-32768,  1821,-32768,-32768,  1820,  3023,
   725,  1825,-32768,-32768,-32768,-32768,-32768,-32768,  3887,  1828,
  1834,  1836,-32768,-32768,-32768,  4682,  3513,-32768,  1837,  3534,
-32768,  4709,  2056,  3023,   137,  2059,   162,  2060,-32768,-32768,
-32768,-32768,  4736,-32768,  1847,  2070,  2072,  2073,   162,-32768,
  1853,  3555,  1857,  3023,-32768,  2080,  2082,  2087,  2013,  2094,
  1820,  1876,  3023,  2057,  1878,  2095,  2690,  2099,  2102,  2104,
  2105,  1896,   137,-32768,-32768,-32768,  2117,-32768,-32768,  3023,
  1902,  4763,-32768,-32768,-32768,-32768,-32768,  1906,-32768,  4790,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1904,
-32768,  1909,  3918,  3023,  2119,  2079,  3023,  2103,  1913,  2147,
  2193,  2121,  2140,-32768,  3576,-32768,   162,  3597,-32768,-32768,
-32768,  2142,-32768,-32768,  3023,  2144,  3023,  2237,-32768,  3618,
-32768,  4817,-32768,  3023,  2043,  2148,  3949,  2152,-32768,-32768,
   939,  2151,  1941,-32768,  2170,  2172,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -318,-32768,-32768,  -298,    35,-32768,-32768,
  1245,  -441,-32768,  -424,-32768,  -384,  -465,  -494,-32768,-32768,
-32768,-32768,  -416,-32768,  -529,-32768,  -864,-32768,  -432,-32768,
-32768,-32768,-32768,-32768,-32768,  1488,-32768,  1131,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1612,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1363,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -948,  -658,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768, -1328,-32768,-32768,-32768,  1024,   876,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   689,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1698,-32768,  1592,
-32768,  2062,-32768,  1707,  1984,  -297,-32768,   420,  1042,-32768,
-32768,   -25,  -520,  -510,  -136,   -15,  -103
};


#define	YYLAST		5210


static const short yytable[] = {   104,
   526,   391,   601,   568,   193,   244,   766,   487,   418,   107,
   508,   425,   426,   428,   581,  1111,   646,   626,   627,  1420,
   434,   435,    40,   591,   635,  1048,   595,   566,     4,   599,
  1053,     4,   322,   322,   323,   323,   466,    26,    27,     6,
   559,    28,     6,   459,   377,    42,  1460,    43,   378,   880,
   203,   204,  1466,   373,   521,   705,   379,   322,  1472,   323,
  1075,   881,   898,    44,  1078,   374,  1480,   585,   236,  1119,
  1009,   211,  1486,  1487,   169,   170,   171,     4,   580,   524,
   562,     4,     6,  1125,   322,  1312,   323,   362,     6,  1010,
   237,     4,     6,     4,   205,   206,   623,   590,   594,   598,
   857,  1209,     6,    -2,     6,   194,   976,    25,   889,   443,
   891,   363,   195,   473,  1421,   473,   444,   364,   237,   212,
   247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
   257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
   267,   268,   473,   270,   271,   560,   858,   473,    30,   272,
   273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
   283,   284,   285,   286,   287,   236,   236,   236,   559,   716,
   780,   190,   781,   705,   705,   705,   705,   191,    25,   368,
   473,   369,    31,  1112,   360,   474,   946,   474,   440,  1198,
   884,   370,   885,   886,   399,   738,   947,   744,   948,   941,
   486,   942,   300,    45,   380,    49,  1113,   195,   943,   271,
   522,   748,  1041,   375,   474,   237,   237,   237,   237,   474,
   514,   108,   882,   515,   624,   561,   400,   444,   753,  1235,
   444,    32,   195,   401,    46,    47,    48,  1011,   630,   651,
   747,   631,  1422,    33,    41,   356,   802,   567,   803,   705,
   199,   200,   474,   207,   208,   357,   324,   324,   467,   325,
   325,   775,   776,   777,   778,   705,   705,   705,   705,   705,
   705,   705,   705,   705,   705,   705,   705,   705,   705,   705,
   705,   175,  1076,   705,   325,   899,  1079,   238,    34,   782,
   427,  1120,   622,   510,   213,   -65,  1086,    35,   567,   216,
   217,    36,   195,   220,   221,  1126,  1669,   645,   447,   448,
   503,   325,  1674,   224,   225,   229,   230,   567,   567,   567,
   449,   567,   977,   978,    37,  1030,   745,   450,   451,   452,
  1335,   119,   453,   454,   291,   457,   104,   892,   462,   371,
  1114,  1115,   402,   121,   949,     6,   107,   944,   783,   122,
   887,    38,  1032,   901,   902,   903,   904,   905,   906,   907,
   908,   909,   910,   911,   912,   913,   914,   915,   916,    39,
  1718,   921,   613,  1720,   615,   616,   617,   -62,   292,   705,
  1721,  1087,   390,   320,   238,   238,   238,   238,   382,   123,
  1039,  1088,   404,  1468,  1360,  1361,   720,   721,   722,   723,
   138,  1738,   979,   855,   383,   124,  1071,   405,   331,   271,
   444,   517,   519,   -62,   384,   385,   393,  1021,   951,   142,
   952,   953,   386,  1058,   387,   406,   394,  1499,   632,  1362,
  1059,   954,  1502,  1014,  1500,   556,   125,  1601,  1199,  1500,
  1363,   395,   126,  1022,  1602,   396,  1023,   955,   956,   957,
   127,  -603,   989,  1031,  1033,  1034,  1035,   700,   990,  1123,
  1040,   958,   419,   420,   421,   422,   128,  1056,   129,   407,
   991,   176,   177,   178,   179,   180,   992,   181,   182,   183,
   184,   423,   130,   185,   186,   187,   188,   189,   966,   139,
  1449,   190,  1450,   520,   195,  1284,   131,   191,   967,   187,
   188,   189,   104,   104,   132,   190,   752,   633,   634,   104,
   636,   191,   107,   107,   993,   133,   641,   134,   644,   107,
   994,   135,   647,   648,   724,  1169,   749,   750,   136,   705,
   137,   968,   969,   970,   971,   972,   973,   140,   705,   141,
   408,   142,  1285,   143,   411,   144,   663,   145,   866,   867,
   868,   869,   870,   871,   872,   873,   874,   192,  1364,   875,
   146,  1131,   388,   876,  1286,  1287,  1136,  1026,  1027,  1028,
  1029,  1207,   959,   147,   397,   148,   877,   614,   271,   960,
   149,  1042,   150,   412,   176,   177,   178,   179,   180,   151,
   181,   182,   183,   184,   743,  1231,   185,   186,   187,   188,
   189,   152,  1210,   197,   190,   797,   798,   799,   800,   153,
   191,   801,   154,  1176,   288,  1178,  1288,  1194,  1616,  1616,
   739,   271,  1185,   413,  1247,   414,  1200,   155,   785,   786,
   787,   788,   789,   790,   791,   792,   793,   794,  1072,  1073,
   795,   796,   797,   798,   799,   800,   974,   415,   801,   656,
   657,  1289,   156,    67,    68,    69,    26,    27,   157,  1093,
    28,   158,    71,    72,    73,    74,   159,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,   416,    62,    63,    64,    65,  1148,   659,   660,
   160,  1451,  1452,  1453,   661,   662,  1643,   161,  1644,   706,
   707,   849,   709,   710,  1015,  1016,  1017,  1018,   242,  1645,
   162,   878,   163,  1469,   164,   925,  1631,   711,   712,  1325,
   926,  1646,   165,   865,   927,   928,   929,  1516,  1517,  1518,
  1519,  1520,  1521,    67,    68,   168,  1647,   795,   796,   797,
   798,   799,   800,  1324,   166,   801,   167,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,   713,   714,   718,   719,  1061,  1275,   727,   728,
  1276,   228,  1409,   731,   732,  1267,   233,  1328,  1268,   740,
   271,   245,  1277,  1278,  1238,   246,  1279,  1280,  1424,  1240,
  1269,  1270,  1271,   741,   271,   742,   271,   705,   185,   186,
   187,   188,   189,  1712,   656,   760,   190,   289,  1345,  1648,
   861,   271,   191,  1347,  1291,  1349,   290,   862,   863,  1165,
   271,  1372,  1166,   271,  1167,   271,   301,  1378,  1095,   307,
  1096,  1382,  1168,   271,  1385,  1202,   271,  1331,  1332,  1388,
   329,   100,   332,  1367,  1649,  1122,   101,  1124,  1369,   102,
  1397,   930,  1346,   195,  1292,  1348,   195,   333,   243,  1553,
  1554,  1293,  1294,   361,  1407,  1097,  1098,  1099,  1100,  1101,
  1102,  1103,  1522,  1149,  1333,   367,  1281,  1366,   195,  1368,
   195,   436,  1339,  1295,  1272,  1439,  1296,  1297,   410,  1431,
  1432,   429,  1434,   437,   176,   177,   178,   179,   180,   430,
   181,   182,   183,   184,  1507,   271,   185,   186,   187,   188,
   189,  1509,   271,  1632,   190,  1611,   431,  1612,  1613,   441,
   191,  1510,   271,  1611,   104,  1612,  1613,  1538,  1607,  1608,
  1541,   100,  1663,   271,   107,  1298,   101,   639,   640,   102,
  1063,  1064,   432,  1141,   433,  1143,  1379,  1145,   518,   438,
   446,   455,  1097,  1098,  1099,  1100,  1101,  1102,  1614,   460,
  1097,  1098,  1099,  1100,  1101,  1102,  1614,  1163,   470,  1565,
  1299,   463,   464,   818,   468,  1570,   469,   471,    67,    68,
   665,   932,   472,   933,   934,   935,   936,   937,   938,  1104,
   477,  1416,    75,    76,    77,    78,    79,   666,   667,   668,
   669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
   679,   680,   681,   682,   683,   684,   685,   686,   687,   688,
   689,   690,   691,   478,   479,   480,   481,   484,  1545,   482,
   483,   485,   488,  1610,  1547,    67,    68,   168,   489,   490,
   491,  1549,   492,   493,  1454,   495,   496,   497,   498,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,   500,   502,  1615,   501,   504,   692,
   505,   506,   507,   523,  1618,   527,   509,   511,  1661,   819,
   512,   820,   821,   822,   823,   513,   824,   825,   826,   827,
   828,   829,   547,   554,   555,   830,   563,   565,   831,   570,
   572,   832,   573,  1622,   833,   834,   835,   836,   837,   838,
   839,   840,   841,   842,   574,   577,   843,   579,   586,   939,
   587,   844,   202,   588,   845,   210,   215,   219,   223,   227,
  1698,   232,   589,   597,  1666,   320,   602,   603,   605,   607,
  1336,   608,   609,   611,  1097,  1098,  1099,  1100,  1101,  1102,
  1108,   612,  1639,  1425,   618,  1427,  1428,   181,   182,   183,
   184,   619,   629,   185,   186,   187,   188,   189,   620,   693,
   628,   190,   637,   642,   645,   694,   695,   191,   649,   652,
   653,   696,   654,   658,   697,   664,   846,   919,   920,   698,
   699,   461,   700,   708,   715,   717,   818,   726,  1678,   730,
   733,   735,   751,   736,   737,   757,  1376,   758,   765,   295,
  1380,   759,   767,  1383,  1384,   769,   770,   771,  1386,   772,
   774,  1389,  1390,  1391,  1392,   779,  1752,  1393,  1394,   784,
  1396,   813,  1398,   100,   804,  1399,  1710,   811,   101,  1403,
  1404,   102,  1406,   814,   850,   815,   816,   104,  1410,   643,
   860,   851,   852,   853,   893,   854,   856,   107,   700,   890,
   894,   896,   895,   104,   801,    67,    68,   665,  1109,   917,
   918,   923,   980,   107,   981,   982,   988,   983,   984,    75,
    76,    77,    78,    79,   666,   667,   668,   669,   670,   671,
   672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
   682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
   985,   995,   819,  1019,   820,   821,   822,   823,  1680,   824,
   825,   826,   827,   828,   829,   986,   987,   996,   830,  1000,
  1687,   831,   997,   998,   832,   999,  1001,   833,   834,   835,
   836,   837,   838,   839,   840,   841,   842,  1002,  1095,   843,
  1096,  1003,  1020,  1037,   844,  1005,  1038,   845,  1004,  1043,
  1557,  1006,  1024,  1036,  1561,  1045,   692,  1505,  1046,  1044,
  1508,  1047,  1049,  1051,  1055,  1062,   857,  1052,   818,  1054,
  1066,  1057,  1525,  1067,  1068,  1097,  1098,  1099,  1100,  1101,
  1102,  1103,  1069,  1070,  1074,  1081,  1082,  1161,  1736,  1083,
  1084,  1085,   104,  1539,  1089,   104,  1090,  1621,  1091,  1092,
  1129,  1132,   107,  1117,  1118,   107,  1128,  1130,  1133,  1540,
   309,   310,   311,   312,   313,   314,   315,   316,   317,  1609,
  1134,  1135,  1137,   818,  1138,  1139,  1164,  1556,  1474,  1558,
  1140,  1150,  1151,  1152,   104,  1153,  1154,  1155,  1156,  1157,
   104,  1158,  1159,  1160,   107,  1162,  1170,  1171,  1172,  1173,
   107,  1581,  1582,  1583,  1584,  1585,   693,  1174,  1175,  1177,
  1179,  1180,   694,   695,  1655,  1181,  1182,  1183,   696,  1184,
  1193,   697,  1186,  1187,  1188,  1191,   698,   699,  1192,   700,
  1196,  1203,  1197,  1201,   819,  1204,   820,   821,   822,   823,
  1205,   824,   825,   826,   827,   828,   829,  1206,   104,  1107,
   830,  1208,  1211,   831,  1213,  1214,   832,  1215,   107,   833,
   834,   835,   836,   837,   838,   839,   840,   841,   842,  1216,
  1629,   843,  1217,  1219,  1221,  1222,   844,  1223,  1224,   845,
  1636,  1637,  1225,  1226,  1640,  1227,  1642,  1228,  1229,   819,
  1653,   820,   821,   822,   823,  1230,   824,   825,   826,   827,
   828,   829,  1232,   104,  1662,   830,  1233,  1234,   831,  1236,
  1237,   832,  1242,   107,   833,   834,   835,   836,   837,   838,
   839,   840,   841,   842,  1243,  1239,   843,  1241,  1677,  1245,
  1246,   844,  1249,  1250,   845,  1251,   791,   792,   793,   794,
  1252,  1546,   795,   796,   797,   798,   799,   800,  1692,  1254,
   801,  1255,  1258,  1259,  1260,   104,  1305,  1700,  1317,  1256,
  1257,  1306,  1261,  1330,  1340,   107,  1595,  1341,  1342,   176,
   177,   178,   179,   180,  1713,   181,   182,   183,   184,  1262,
  1343,   185,   186,   187,   188,   189,  1263,  1264,  1265,   190,
  1301,  1303,  1304,  1307,  1302,   191,  1548,  1344,  1725,  1352,
  1353,  1728,  1308,  1309,  1354,  1356,  1358,  1311,  1310,  1359,
  1337,  1351,  1370,  1371,  1319,    67,    68,   458,    70,  1740,
  1320,  1742,  1321,  1322,    71,    72,    73,    74,  1747,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,    67,    68,    69,   818,  1323,  1326,
  1373,  1327,  1374,    71,    72,    73,    74,   237,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,    67,    68,    69,    70,  1377,   195,  1400,
  1375,  1329,    71,    72,    73,    74,  1381,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,    67,    68,    69,  1387,  1395,  1401,  1402,  1405,
  1408,    71,    72,    73,    74,  1411,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
    99,  1412,  1413,   819,  1414,   820,   821,   822,   823,  1415,
   824,   825,   826,   827,   828,   829,  1417,  1433,  1436,   830,
  1423,  1426,   831,  1429,  1437,   832,  1440,  1441,   833,   834,
   835,   836,   837,   838,   839,   840,   841,   842,  1442,  1443,
   843,  1444,  1445,  1455,  1456,   844,  1446,  1448,   845,  1467,
  1458,  1470,  1457,   100,  1473,  1459,  1463,  1482,   101,  1563,
  1462,   102,  1564,  1485,   818,  1492,   238,  1464,    50,   103,
  1493,  1496,    51,   785,   786,   787,   788,   789,   790,   791,
   792,   793,   794,  1495,  1497,   795,   796,   797,   798,   799,
   800,  1503,   100,   801,  1498,  1504,  1506,   101,  1511,  1512,
   102,  1513,  1514,  1527,  1050,  1515,  1524,  1529,   103,  1542,
  1550,   818,  1530,    52,  1526,  1533,  1528,  1534,  1535,    53,
  1536,  1537,  1543,  1544,  1555,  1571,  1559,  1560,  1562,  1566,
  1573,   100,    54,  1574,    55,  1575,   101,  1576,  1577,   102,
  1578,  1579,  1580,  1586,    56,  1588,  1589,   103,    57,  1590,
  1591,  1593,  1592,  1598,  1596,  1597,  1605,   818,  1623,    58,
  1630,  1599,  1600,  1620,  1619,  1633,  1634,  1635,  1638,  1641,
   100,  1651,  1652,  1654,  1656,   101,    59,  1657,   102,  1658,
   819,  1660,   820,   821,   822,   823,   103,   824,   825,   826,
   827,   828,   829,  1664,   567,  1667,   830,  1668,  1672,   831,
  1676,   818,   832,  1679,  1681,   833,   834,   835,   836,   837,
   838,   839,   840,   841,   842,  1683,  1684,   843,  1685,  1686,
  1689,    60,   844,    61,  1691,   845,  1693,   819,  1694,   820,
   821,   822,   823,  1695,   824,   825,   826,   827,   828,   829,
  1697,  1703,  1699,   830,  1702,  1705,   831,   818,  1706,   832,
  1707,  1708,   833,   834,   835,   836,   837,   838,   839,   840,
   841,   842,  1709,  1711,   843,  1726,  1727,  1733,  1714,   844,
  1723,  1722,   845,   819,  1717,   820,   821,   822,   823,  1730,
   824,   825,   826,   827,   828,   829,  1734,  1551,  1739,   830,
  1741,   818,   831,  1748,  1749,   832,  1751,  1753,   833,   834,
   835,   836,   837,   838,   839,   840,   841,   842,  1754,  1756,
   843,  1757,  1065,  1189,   655,   844,   963,   819,   845,   820,
   821,   822,   823,  1315,   824,   825,   826,   827,   828,   829,
  1419,   806,  1568,   830,  1552,   734,   831,   818,   606,   832,
   235,     0,   833,   834,   835,   836,   837,   838,   839,   840,
   841,   842,   610,     0,   843,     0,     0,     0,   319,   844,
     0,     0,   845,   819,     0,   820,   821,   822,   823,     0,
   824,   825,   826,   827,   828,   829,     0,     0,     0,   830,
  1696,   818,   831,     0,     0,   832,     0,     0,   833,   834,
   835,   836,   837,   838,   839,   840,   841,   842,     0,     0,
   843,     0,  1475,     0,     0,   844,     0,   819,   845,   820,
   821,   822,   823,     0,   824,   825,   826,   827,   828,   829,
     0,     0,     0,   830,  1701,     0,   831,     0,     0,   832,
  1476,     0,   833,   834,   835,   836,   837,   838,   839,   840,
   841,   842,     0,     0,   843,     0,     0,     0,     0,   844,
     0,  1477,   845,   819,     0,   820,   821,   822,   823,     0,
   824,   825,   826,   827,   828,   829,     0,     0,     0,   830,
  1729,     0,   831,     0,     0,   832,     0,     0,   833,   834,
   835,   836,   837,   838,   839,   840,   841,   842,  1479,     0,
   843,     0,     0,     0,     0,   844,     0,   819,   845,   820,
   821,   822,   823,     0,   824,   825,   826,   827,   828,   829,
     0,     0,     0,   830,  1731,  1481,   831,     0,     0,   832,
     0,     0,   833,   834,   835,   836,   837,   838,   839,   840,
   841,   842,     0,     0,   843,     0,  1483,     0,     0,   844,
     0,     0,   845,     0,     0,     0,     0,    67,    68,   168,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
  1732,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    97,    98,    99,  1484,     0,     0,     0,
     0,     0,     0,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,  1743,   185,   186,   187,   188,   189,
     0,     0,     0,   190,  1488,     0,     0,     0,     0,   191,
     0,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
   183,   184,  1489,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,     0,     0,   191,     0,
     0,     0,     0,  1491,     0,     0,     0,     0,     0,   176,
   177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
  1624,     0,     0,     0,     0,   191,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
   179,   180,   191,   181,   182,   183,   184,  1625,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,     0,     0,   191,     0,   100,     0,     0,  1626,     0,
   101,     0,     0,   102,     0,     0,     0,     0,   461,     0,
     0,     0,     0,     0,     0,     0,     0,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,  1627,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,     0,     0,   191,     0,   176,   177,   178,   179,   180,
     0,   181,   182,   183,   184,  1628,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,     0,
     0,   191,     0,     0,     0,     0,  1704,     0,     0,     0,
     0,     0,     0,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,     0,     0,
   191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,     0,     0,   191,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
   177,   178,   179,   180,   191,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     0,     0,     0,     0,     0,   191,     0,     0,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     0,     0,     0,     0,   191,     0,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
   179,   180,   191,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,    67,    68,
    69,     0,     0,   191,     0,     0,     0,    71,    72,    73,
    74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,    97,    98,    99,    67,    68,    69,
     0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
  1060,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    97,    98,    99,    67,    68,   168,   456,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,    97,    98,    99,    67,    68,   168,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,   516,    68,   168,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,   358,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
     0,   101,     0,     0,   102,     0,     0,     0,     0,     0,
   359,     0,     0,     0,   528,     0,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,   100,   190,     0,     0,     0,
   101,     4,   191,   102,     0,     0,     5,   334,     0,     0,
     0,     0,     6,     0,     0,     0,     0,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,   529,   185,
   186,   187,   188,   189,   100,     0,     0,   190,     0,   101,
     0,     0,   102,   191,     7,     0,     0,     0,   335,     0,
     8,     0,     0,     0,     0,     0,     0,     0,     0,   530,
     0,     0,     0,     9,     0,    10,     0,     0,     0,     0,
     0,     0,     0,   100,     0,    11,     0,     0,   101,    12,
   531,   102,     0,     0,     0,     0,     0,     0,     0,     0,
    13,   532,   533,   534,   535,   536,   537,   538,   539,   540,
   541,   542,   543,   544,   545,   546,     0,    14,     0,     0,
     0,     0,   100,     0,     0,     0,     0,   101,     0,     0,
   102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,    15,   190,    16,     0,     0,     0,     0,   191,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,     0,     0,   191,     0,     0,     0,
    17,    18,    19,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
   181,   182,   183,   184,   346,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
   191,   181,   182,   183,   184,   353,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
   180,   191,   181,   182,   183,   184,   354,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
   179,   180,   191,   181,   182,   183,   184,   355,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
   178,   179,   180,   191,   181,   182,   183,   184,   548,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
   177,   178,   179,   180,   191,   181,   182,   183,   184,   549,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
   176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
  1013,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
   184,  1266,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
   183,   184,  1274,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
   182,   183,   184,  1283,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
   181,   182,   183,   184,  1438,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
   191,   181,   182,   183,   184,  1461,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
   180,   191,   181,   182,   183,   184,  1465,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
   179,   180,   191,   181,   182,   183,   184,  1471,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
   178,   179,   180,   191,   181,   182,   183,   184,  1478,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
   177,   178,   179,   180,   191,   181,   182,   183,   184,  1494,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
   176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
  1606,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
   184,  1671,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
   183,   184,  1673,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
   182,   183,   184,  1690,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
   181,   182,   183,   184,  1735,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
   191,   181,   182,   183,   184,  1737,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
   180,   191,   181,   182,   183,   184,  1744,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
     0,     0,   191,     0,     0,     0,   557,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,     0,     0,   191,     0,     0,     0,   621,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     0,     0,     0,     0,   191,     0,     0,     0,   650,   176,
   177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     0,     0,     0,     0,     0,   191,     0,     0,     0,  1025,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,     0,     0,   191,     0,     0,     0,
  1318,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,     0,     0,   191,     0,     0,
     0,  1569,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,     0,     0,   191,     0,
     0,     0,  1572,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
     0,     0,     0,  1587,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,     0,     0,
   191,     0,     0,     0,  1665,   176,   177,   178,   179,   180,
     0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,     0,
     0,   191,     0,     0,     0,  1724,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
     0,     0,   191,     0,     0,     0,  1750,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,   269,
     0,     0,     0,   191,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,   336,     0,
   191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,   337,     0,   191,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     0,     0,   338,     0,   191,   176,   177,   178,   179,   180,
     0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,   339,
     0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,   340,     0,   191,   176,
   177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     0,     0,     0,   341,     0,   191,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
   342,     0,   191,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,   343,     0,   191,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,   344,     0,   191,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,   345,     0,   191,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,   347,     0,
   191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,   348,     0,   191,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     0,     0,   349,     0,   191,   176,   177,   178,   179,   180,
     0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,   350,
     0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,   351,     0,   191,   176,
   177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     0,     0,     0,   352,     0,   191,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
   550,     0,   191,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,   551,     0,   191,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,   552,     0,   191,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,   553,     0,   191,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,   755,     0,
   191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,   756,     0,   191,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     0,     0,   764,     0,   191,   176,   177,   178,   179,   180,
     0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,  1594,
     0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,  1604,     0,   191,   176,
   177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     0,     0,     0,  1670,     0,   191,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
  1675,     0,   191,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,  1682,     0,   191,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,  1715,     0,   191,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,  1719,     0,   191,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,  1746,     0,
   191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,     0,     0,   191,   785,   786,
   787,   788,   789,   790,   791,   792,   793,   794,     0,     0,
   795,   796,   797,   798,   799,   800,     0,     0,   801,   178,
   179,   180,  1334,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,   179,   180,   190,   181,   182,
   183,   184,     0,   191,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,     0,     0,   191,   785,
   786,   787,   788,   789,   790,   791,   792,   793,   794,     0,
     0,   795,   796,   797,   798,   799,   800,     0,     0,   801,
     0,   897,   785,   786,   787,   788,   789,   790,   791,   792,
   793,   794,     0,     0,   795,   796,   797,   798,   799,   800,
     0,     0,   801,   787,   788,   789,   790,   791,   792,   793,
   794,     0,     0,   795,   796,   797,   798,   799,   800,     0,
     0,   801,   788,   789,   790,   791,   792,   793,   794,     0,
     0,   795,   796,   797,   798,   799,   800,     0,     0,   801
};

static const short yycheck[] = {    25,
   442,   300,   497,   469,   108,   142,   665,   392,   307,    25,
   427,   310,   311,   312,   480,   964,   546,   528,   529,     5,
   318,   319,     5,   489,   535,   890,   492,     7,     5,   495,
   895,     5,     3,     3,     5,     5,     5,     5,     6,    16,
     5,     9,    16,   362,    68,     5,  1375,     7,    72,    55,
   227,   228,  1381,    68,   439,   576,    80,     3,  1387,     5,
     5,    67,     5,    23,     5,    80,  1395,   484,     5,     5,
    61,     5,  1401,  1402,   100,   101,   102,     5,     7,    50,
   465,     5,    16,     5,     3,     5,     5,   197,    16,    80,
    55,     5,    16,     5,   227,   228,   521,     7,     7,     7,
     5,     7,    16,     0,    16,   222,     5,   197,   767,   222,
   769,   221,   229,    11,   100,    11,   229,   227,    55,    53,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,    11,   228,   229,   464,    51,    11,   221,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,     5,     5,     5,     5,   586,
     3,   218,     5,   694,   695,   696,   697,   224,   197,    68,
    11,    70,   227,    70,   288,    83,    70,    83,   325,  1054,
    68,    80,    70,    71,    80,   612,    80,   622,    82,    80,
   222,    82,   221,   163,   228,     7,    93,   229,    89,   229,
   230,   628,    50,   228,    83,    55,    55,    55,    55,    83,
   222,   221,   228,   222,   523,   222,   112,   229,   645,  1094,
   229,   227,   229,   119,   194,   195,   196,   228,   206,   558,
   625,   209,   228,   227,   227,   271,   224,   227,   226,   770,
   227,   228,    83,   227,   228,   271,   227,   227,   227,   230,
   230,   694,   695,   696,   697,   786,   787,   788,   789,   790,
   791,   792,   793,   794,   795,   796,   797,   798,   799,   800,
   801,     8,   227,   804,   230,   228,   227,   224,   227,   122,
   227,   227,   211,   430,   228,   222,     5,   227,   227,   227,
   228,   227,   229,   227,   228,   227,  1635,   227,   334,   335,
   414,   230,  1641,   227,   228,   227,   228,   227,   227,   227,
   346,   227,   221,   221,   227,   221,   624,   353,   354,   355,
  1195,   160,   358,   359,     5,   361,   362,   770,   364,   228,
   227,   228,   228,     7,   228,    16,   362,   228,   181,     7,
   228,   227,   221,   786,   787,   788,   789,   790,   791,   792,
   793,   794,   795,   796,   797,   798,   799,   800,   801,   227,
  1699,   804,   509,  1702,   511,   512,   513,   221,    49,   900,
  1709,    90,   222,   227,   224,   224,   224,   224,    54,     7,
   221,   100,    80,     7,    64,    65,   100,   101,   102,   103,
   221,  1730,   819,   222,    70,     7,   936,    95,   228,   229,
   229,   437,   438,   221,    80,    81,    70,   859,    67,   227,
    69,    70,    88,   222,    90,   113,    80,   222,   532,    99,
   229,    80,   222,   850,   229,   461,     7,   222,     8,   229,
   110,    95,     7,   860,   229,    99,   863,    96,    97,    98,
     7,   221,   221,   870,   871,   872,   873,   227,   227,   970,
   877,   110,   210,   211,   212,   213,     7,   900,     7,   157,
   221,   198,   199,   200,   201,   202,   227,   204,   205,   206,
   207,   229,     7,   210,   211,   212,   213,   214,    70,   221,
  1355,   218,  1357,   228,   229,    72,     7,   224,    80,   212,
   213,   214,   528,   529,     7,   218,   643,   533,   534,   535,
   536,   224,   528,   529,   221,     7,   542,     7,   544,   535,
   227,     7,   548,   549,   228,  1020,   630,   631,     7,  1050,
     7,   113,   114,   115,   116,   117,   118,   221,  1059,   221,
   228,   227,   119,     7,    80,   221,   572,   221,    55,    56,
    57,    58,    59,    60,    61,    62,    63,     7,   228,    66,
   221,   978,   228,    70,   141,   142,   983,   866,   867,   868,
   869,  1066,   221,   221,   228,   221,    83,   228,   229,   228,
   221,   880,   221,   119,   198,   199,   200,   201,   202,   221,
   204,   205,   206,   207,   620,  1090,   210,   211,   212,   213,
   214,   221,  1068,   228,   218,   212,   213,   214,   215,   221,
   224,   218,   221,  1030,   229,  1032,   193,  1050,  1567,  1568,
   228,   229,  1039,   159,  1119,   161,  1059,   221,   198,   199,
   200,   201,   202,   203,   204,   205,   206,   207,   937,   938,
   210,   211,   212,   213,   214,   215,   228,   183,   218,   227,
   228,   228,   221,     3,     4,     5,     5,     6,   221,   958,
     9,   221,    12,    13,    14,    15,   221,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,   228,   162,   163,   164,   165,   996,   227,   228,
   221,  1360,  1361,  1362,   227,   228,    70,   221,    72,   227,
   228,   737,   227,   228,   851,   852,   853,   854,     6,    83,
   221,   228,   221,     7,   221,    82,  1591,   227,   228,  1171,
    87,    95,   221,   759,    91,    92,    93,    73,    74,    75,
    76,    77,    78,     3,     4,     5,   110,   210,   211,   212,
   213,   214,   215,  1170,   221,   218,   221,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,   227,   228,   227,   228,   923,   119,   227,   228,
   122,     5,  1303,   227,   228,   119,     5,  1182,   122,   228,
   229,     5,   134,   135,  1103,     5,   138,   139,  1319,  1108,
   134,   135,   136,   228,   229,   228,   229,  1338,   210,   211,
   212,   213,   214,  1688,   227,   228,   218,     7,  1213,   193,
   228,   229,   224,  1218,    72,  1220,     5,   228,   229,   228,
   229,  1258,   228,   229,   228,   229,   221,  1264,    67,   221,
    69,  1268,   228,   229,  1271,   228,   229,   227,   228,  1276,
   221,   211,   222,  1248,   228,   969,   216,   971,  1253,   219,
  1287,   228,   228,   229,   112,   228,   229,   229,   228,   227,
   228,   119,   120,   197,  1301,   104,   105,   106,   107,   108,
   109,   110,   228,   997,  1193,   221,   228,   228,   229,   228,
   229,   228,  1201,   141,   228,  1338,   144,   145,   227,  1326,
  1327,   227,  1329,     8,   198,   199,   200,   201,   202,   227,
   204,   205,   206,   207,   228,   229,   210,   211,   212,   213,
   214,   228,   229,  1592,   218,    67,   227,    69,    70,   229,
   224,   228,   229,    67,   970,    69,    70,  1458,   228,   229,
  1461,   211,   228,   229,   970,   193,   216,   538,   539,   219,
   926,   927,   227,   989,   227,   991,  1265,   993,   228,   227,
     5,   222,   104,   105,   106,   107,   108,   109,   110,     3,
   104,   105,   106,   107,   108,   109,   110,  1013,   227,  1500,
   228,   197,   197,     5,     5,  1506,     5,     5,     3,     4,
     5,    80,   227,    82,    83,    84,    85,    86,    87,   228,
     5,  1310,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    47,   227,     5,     5,   227,   197,  1465,   227,
   227,   222,     5,  1564,  1471,     3,     4,     5,     5,   227,
   227,  1478,     5,   227,  1363,     5,   227,     5,     5,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,     5,     5,   228,   227,     5,   104,
   222,     5,   177,   110,   228,     7,   227,   227,  1619,   121,
   227,   123,   124,   125,   126,   227,   128,   129,   130,   131,
   132,   133,   222,     7,   222,   137,   227,     7,   140,     7,
   221,   143,   221,  1575,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,     7,     7,   158,     7,   197,   228,
     7,   163,   111,     5,   166,   114,   115,   116,   117,   118,
  1671,   120,     7,   227,  1630,   227,     7,   228,     7,     7,
  1196,     7,     7,     5,   104,   105,   106,   107,   108,   109,
   110,   229,  1599,  1320,     7,  1322,  1323,   204,   205,   206,
   207,     7,     5,   210,   211,   212,   213,   214,     8,   204,
   227,   218,     5,     5,   227,   210,   211,   224,   197,     7,
     7,   216,     5,     7,   219,     5,   228,   222,   223,   224,
   225,   224,   227,     7,     7,     7,     5,     7,  1645,     7,
     7,   228,     6,   229,   227,    52,  1262,     7,   222,   198,
  1266,   227,   221,  1269,  1270,   221,   221,   221,  1274,   221,
     5,  1277,  1278,  1279,  1280,     3,  1751,  1283,  1284,     5,
  1286,   227,  1288,   211,   221,  1291,  1683,     7,   216,  1295,
  1296,   219,  1298,   227,   229,   227,   227,  1303,  1304,   227,
   229,   227,   227,   227,     5,   227,   222,  1303,   227,   221,
     5,   206,   221,  1319,   218,     3,     4,     5,   228,     3,
     3,   227,   221,  1319,   221,   221,     7,   221,   221,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
   221,   227,   121,     7,   123,   124,   125,   126,  1647,   128,
   129,   130,   131,   132,   133,   221,   221,   221,   137,   227,
  1659,   140,   221,   221,   143,   221,   227,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   221,    67,   158,
    69,   221,     5,     5,   163,   227,     5,   166,   221,     5,
  1494,   221,   221,   227,  1498,     5,   104,  1423,     5,   227,
  1426,   222,   222,   221,   228,     5,     5,   222,     5,   221,
     5,   222,  1438,     5,     5,   104,   105,   106,   107,   108,
   109,   110,     5,   227,     5,     5,     5,   227,  1727,     5,
     5,     5,  1458,  1459,     5,  1461,     5,  1574,     3,     3,
     7,     7,  1458,     5,     5,  1461,     5,     5,     5,   228,
   168,   169,   170,   171,   172,   173,   174,   175,   176,  1563,
     5,     5,     5,     5,     5,     5,   228,  1493,     7,  1495,
     5,     5,     5,     5,  1500,     5,     5,     5,     5,     5,
  1506,     5,   221,   221,  1500,     5,   229,   224,     7,     7,
  1506,  1517,  1518,  1519,  1520,  1521,   204,     7,     7,     7,
     7,     7,   210,   211,  1608,     7,     3,     7,   216,     7,
   229,   219,     7,     7,     7,     7,   224,   225,     7,   227,
   227,     7,   222,   221,   121,    93,   123,   124,   125,   126,
     7,   128,   129,   130,   131,   132,   133,     7,  1564,   228,
   137,     7,   227,   140,     5,     7,   143,     7,  1564,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,     7,
  1586,   158,     7,     7,     7,     7,   163,     7,     7,   166,
  1596,  1597,     7,     7,  1600,     7,  1602,     7,     7,   121,
  1606,   123,   124,   125,   126,     7,   128,   129,   130,   131,
   132,   133,     7,  1619,  1620,   137,     7,     7,   140,     5,
     5,   143,     5,  1619,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,     5,   221,   158,   221,  1644,     7,
     7,   163,     7,     7,   166,     7,   204,   205,   206,   207,
     7,   228,   210,   211,   212,   213,   214,   215,  1664,     7,
   218,     7,   229,   229,   229,  1671,   228,  1673,     7,   222,
   222,   228,   222,     7,     5,  1671,   127,     7,     7,   198,
   199,   200,   201,   202,  1690,   204,   205,   206,   207,   229,
    95,   210,   211,   212,   213,   214,   229,   229,   229,   218,
   229,   229,   229,   229,   222,   224,   228,     7,  1714,     7,
     7,  1717,   229,   229,     7,     7,     7,   222,   229,     7,
   222,   222,     7,     7,   227,     3,     4,     5,     6,  1735,
   227,  1737,   228,   227,    12,    13,    14,    15,  1744,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,     3,     4,     5,     5,   227,   229,
     5,   229,     5,    12,    13,    14,    15,    55,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,     3,     4,     5,     6,     5,   229,     5,
   227,   229,    12,    13,    14,    15,   227,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,     3,     4,     5,   227,   227,   227,   227,   227,
     7,    12,    13,    14,    15,     7,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,     7,     5,   121,     5,   123,   124,   125,   126,     5,
   128,   129,   130,   131,   132,   133,     7,     3,   222,   137,
   227,   227,   140,   228,   222,   143,   222,     7,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,     5,     5,
   158,     5,     5,     5,     5,   163,   221,     7,   166,     7,
   229,     7,   222,   211,     7,   229,   222,     7,   216,   178,
   229,   219,   181,     7,     5,   222,   224,   229,     3,   227,
   229,   222,     7,   198,   199,   200,   201,   202,   203,   204,
   205,   206,   207,   229,   222,   210,   211,   212,   213,   214,
   215,   227,   211,   218,   229,   227,   229,   216,   229,   222,
   219,   222,   228,     7,   229,   222,   222,     5,   227,     5,
   228,     5,     7,    48,   228,     7,   228,     7,     7,    54,
     7,     7,     7,     5,     7,   228,     7,     7,     7,     7,
   228,   211,    67,   227,    69,   224,   216,     7,     7,   219,
     7,     7,     5,   227,    79,    94,     7,   227,    83,   222,
   229,   222,   229,   222,   229,   229,   222,     5,     7,    94,
     5,   229,   229,   227,   229,     7,     7,   227,     7,   227,
   211,     7,     7,     7,     5,   216,   111,     5,   219,     5,
   121,   221,   123,   124,   125,   126,   227,   128,   129,   130,
   131,   132,   133,   229,   227,   222,   137,   222,   222,   140,
     5,     5,   143,     5,     5,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   229,     7,   158,     7,     7,
   228,   156,   163,   158,   228,   166,     7,   121,     7,   123,
   124,   125,   126,     7,   128,   129,   130,   131,   132,   133,
     7,     7,   227,   137,   227,     7,   140,     5,     7,   143,
     7,     7,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   227,     7,   158,     7,    48,     7,   227,   163,
   222,   228,   166,   121,   229,   123,   124,   125,   126,   227,
   128,   129,   130,   131,   132,   133,     7,   228,     7,   137,
     7,     5,   140,   111,     7,   143,     5,     7,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   228,     0,
   158,     0,   928,  1043,   563,   163,   814,   121,   166,   123,
   124,   125,   126,  1160,   128,   129,   130,   131,   132,   133,
  1315,   704,  1504,   137,   228,   604,   140,     5,   501,   143,
   139,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,   506,    -1,   158,    -1,    -1,    -1,   235,   163,
    -1,    -1,   166,   121,    -1,   123,   124,   125,   126,    -1,
   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,   137,
   228,     5,   140,    -1,    -1,   143,    -1,    -1,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
   158,    -1,     7,    -1,    -1,   163,    -1,   121,   166,   123,
   124,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
    -1,    -1,    -1,   137,   228,    -1,   140,    -1,    -1,   143,
     7,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,
    -1,     7,   166,   121,    -1,   123,   124,   125,   126,    -1,
   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,   137,
   228,    -1,   140,    -1,    -1,   143,    -1,    -1,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,     7,    -1,
   158,    -1,    -1,    -1,    -1,   163,    -1,   121,   166,   123,
   124,   125,   126,    -1,   128,   129,   130,   131,   132,   133,
    -1,    -1,    -1,   137,   228,     7,   140,    -1,    -1,   143,
    -1,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
   154,   155,    -1,    -1,   158,    -1,     7,    -1,    -1,   163,
    -1,    -1,   166,    -1,    -1,    -1,    -1,     3,     4,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   228,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,     7,    -1,    -1,    -1,
    -1,    -1,    -1,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,   228,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,     7,    -1,    -1,    -1,    -1,   224,
    -1,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,   198,   199,   200,   201,   202,   224,   204,   205,
   206,   207,     7,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,
    -1,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,   198,
   199,   200,   201,   202,    -1,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
     7,    -1,    -1,    -1,    -1,   224,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,
   201,   202,   224,   204,   205,   206,   207,     7,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,    -1,    -1,   224,    -1,   211,    -1,    -1,     7,    -1,
   216,    -1,    -1,   219,    -1,    -1,    -1,    -1,   224,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,     7,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,    -1,    -1,   224,    -1,   198,   199,   200,   201,   202,
    -1,   204,   205,   206,   207,     7,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
    -1,   224,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
    -1,    -1,    -1,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,   224,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,
   224,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,   198,
   199,   200,   201,   202,   224,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,
    -1,    -1,    -1,    -1,   224,    -1,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,
   201,   202,   224,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,     3,     4,
     5,    -1,    -1,   224,    -1,    -1,    -1,    12,    13,    14,
    15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,     3,     4,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
    55,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,     3,     4,     5,     6,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,     3,     4,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,     3,     4,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,     8,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,
    -1,   216,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
     8,    -1,    -1,    -1,    61,    -1,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,   211,   218,    -1,    -1,    -1,
   216,     5,   224,   219,    -1,    -1,    10,   229,    -1,    -1,
    -1,    -1,    16,    -1,    -1,    -1,    -1,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,   115,   210,
   211,   212,   213,   214,   211,    -1,    -1,   218,    -1,   216,
    -1,    -1,   219,   224,    48,    -1,    -1,    -1,   229,    -1,
    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,
    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   211,    -1,    79,    -1,    -1,   216,    83,
   167,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    94,   178,   179,   180,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,   192,    -1,   111,    -1,    -1,
    -1,    -1,   211,    -1,    -1,    -1,    -1,   216,    -1,    -1,
   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,   156,   218,   158,    -1,    -1,    -1,    -1,   224,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
   194,   195,   196,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,   224,
   204,   205,   206,   207,   229,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,
   224,   204,   205,   206,   207,   229,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,
   202,   224,   204,   205,   206,   207,   229,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,
   201,   202,   224,   204,   205,   206,   207,   229,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,
   200,   201,   202,   224,   204,   205,   206,   207,   229,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,   198,
   199,   200,   201,   202,   224,   204,   205,   206,   207,   229,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
   198,   199,   200,   201,   202,   224,   204,   205,   206,   207,
   229,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,   198,   199,   200,   201,   202,   224,   204,   205,   206,
   207,   229,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,   198,   199,   200,   201,   202,   224,   204,   205,
   206,   207,   229,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,   198,   199,   200,   201,   202,   224,   204,
   205,   206,   207,   229,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,   224,
   204,   205,   206,   207,   229,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,
   224,   204,   205,   206,   207,   229,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,
   202,   224,   204,   205,   206,   207,   229,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,
   201,   202,   224,   204,   205,   206,   207,   229,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,
   200,   201,   202,   224,   204,   205,   206,   207,   229,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,   198,
   199,   200,   201,   202,   224,   204,   205,   206,   207,   229,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
   198,   199,   200,   201,   202,   224,   204,   205,   206,   207,
   229,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,   198,   199,   200,   201,   202,   224,   204,   205,   206,
   207,   229,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,   198,   199,   200,   201,   202,   224,   204,   205,
   206,   207,   229,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,   198,   199,   200,   201,   202,   224,   204,
   205,   206,   207,   229,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,   224,
   204,   205,   206,   207,   229,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,
   224,   204,   205,   206,   207,   229,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,
   202,   224,   204,   205,   206,   207,   229,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
    -1,    -1,   224,    -1,    -1,    -1,   228,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,    -1,    -1,   224,    -1,    -1,    -1,   228,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,
    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,   228,   198,
   199,   200,   201,   202,    -1,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,   228,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
   228,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
    -1,   228,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,
    -1,    -1,   228,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,
    -1,    -1,    -1,   228,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,
   224,    -1,    -1,    -1,   228,   198,   199,   200,   201,   202,
    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
    -1,   224,    -1,    -1,    -1,   228,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
    -1,    -1,   224,    -1,    -1,    -1,   228,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,   220,
    -1,    -1,    -1,   224,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,
   224,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,
    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,   202,
    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,
    -1,   224,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,
   199,   200,   201,   202,    -1,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
   222,    -1,   224,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,   222,    -1,   224,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,
   224,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,
    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,   202,
    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,
    -1,   224,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,
   199,   200,   201,   202,    -1,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
   222,    -1,   224,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,   222,    -1,   224,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,
   224,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,
    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,   202,
    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,
    -1,   224,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,
   199,   200,   201,   202,    -1,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
   222,    -1,   224,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,   222,    -1,   224,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,
   224,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,   198,   199,
   200,   201,   202,   203,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,   215,    -1,    -1,   218,   200,
   201,   202,   222,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,   201,   202,   218,   204,   205,
   206,   207,    -1,   224,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,   198,
   199,   200,   201,   202,   203,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,   215,    -1,    -1,   218,
    -1,   220,   198,   199,   200,   201,   202,   203,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,   215,
    -1,    -1,   218,   200,   201,   202,   203,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,   215,    -1,
    -1,   218,   201,   202,   203,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,   215,    -1,    -1,   218
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/lib/bison.simple"
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

#line 217 "/usr/lib/bison.simple"

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
#line 328 "GetDP.y"
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
#line 362 "GetDP.y"
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
#line 403 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 426 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 441 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 443 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 445 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 447 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 449 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 451 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 453 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 455 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 457 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 459 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 461 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 463 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 465 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 467 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 469 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 471 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 473 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 475 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 477 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 479 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 481 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 489 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 506 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 513 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 516 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 519 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 521 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 52:
#line 535 "GetDP.y"
{ 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      List_Add(Group_S.InitialList, &(yyvsp[-3].i)) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;
    break;}
case 53:
#line 544 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = yyvsp[-7].i ; 
    ;
    break;}
case 54:
#line 551 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ;
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 55:
#line 561 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 56:
#line 566 "GetDP.y"
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
case 57:
#line 578 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 58:
#line 587 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 59:
#line 598 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 60:
#line 603 "GetDP.y"
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
case 61:
#line 640 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 62:
#line 643 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 63:
#line 655 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 64:
#line 657 "GetDP.y"
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
case 65:
#line 673 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 66:
#line 676 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 67:
#line 679 "GetDP.y"
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
case 68:
#line 730 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 69:
#line 743 "GetDP.y"
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
case 70:
#line 767 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 71:
#line 774 "GetDP.y"
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
case 72:
#line 787 "GetDP.y"
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
case 73:
#line 805 "GetDP.y"
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
case 74:
#line 828 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 75:
#line 832 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; j = (int)yyvsp[-1].l ; List_Add(yyval.l = ListOfInt_L, &j) ; ;
    break;}
case 76:
#line 835 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 77:
#line 844 "GetDP.y"
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
case 78:
#line 858 "GetDP.y"
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
case 79:
#line 892 "GetDP.y"
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
case 80:
#line 905 "GetDP.y"
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
case 82:
#line 929 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 83:
#line 939 "GetDP.y"
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
case 86:
#line 961 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 87:
#line 966 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 88:
#line 967 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 89:
#line 972 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 93:
#line 991 "GetDP.y"
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
case 94:
#line 1011 "GetDP.y"
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
case 97:
#line 1062 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 98:
#line 1082 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 99:
#line 1088 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 100:
#line 1094 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 101:
#line 1097 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 102:
#line 1104 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 104:
#line 1115 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 105:
#line 1118 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 106:
#line 1124 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 107:
#line 1128 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 109:
#line 1140 "GetDP.y"
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
case 110:
#line 1153 "GetDP.y"
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
case 111:
#line 1167 "GetDP.y"
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
case 112:
#line 1182 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 113:
#line 1188 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 114:
#line 1194 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1200 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1206 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1212 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1218 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1224 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1230 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1236 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1242 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1248 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1254 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1260 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1266 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1272 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1278 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1285 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 131:
#line 1293 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1306 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 134:
#line 1312 "GetDP.y"
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
case 135:
#line 1386 "GetDP.y"
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
case 136:
#line 1420 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1429 "GetDP.y"
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
case 138:
#line 1441 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 139:
#line 1443 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 140:
#line 1454 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1456 "GetDP.y"
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
case 142:
#line 1470 "GetDP.y"
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
case 143:
#line 1482 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 144:
#line 1488 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 145:
#line 1494 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 146:
#line 1496 "GetDP.y"
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
case 147:
#line 1525 "GetDP.y"
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
case 148:
#line 1549 "GetDP.y"
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
case 149:
#line 1562 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 150:
#line 1568 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 151:
#line 1575 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 152:
#line 1581 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1588 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1595 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1606 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 156:
#line 1607 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 157:
#line 1608 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 158:
#line 1613 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 159:
#line 1614 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 160:
#line 1620 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 161:
#line 1623 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 162:
#line 1626 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 163:
#line 1642 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 164:
#line 1647 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 165:
#line 1654 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 167:
#line 1663 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 168:
#line 1668 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 169:
#line 1675 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 170:
#line 1678 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 171:
#line 1685 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 173:
#line 1695 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 174:
#line 1698 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 175:
#line 1701 "GetDP.y"
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
case 176:
#line 1739 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 177:
#line 1745 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 178:
#line 1752 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 180:
#line 1765 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 181:
#line 1772 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 182:
#line 1775 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 183:
#line 1782 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 184:
#line 1785 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 185:
#line 1792 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 187:
#line 1804 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 188:
#line 1814 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 189:
#line 1824 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 190:
#line 1831 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 191:
#line 1834 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 192:
#line 1841 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 194:
#line 1857 "GetDP.y"
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
	case NEWTONCOTES : 
	  Get_FunctionForDefine
	    (FunctionForNewtonCotes, QuadratureCase_S.ElementType,
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
case 195:
#line 1911 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 196:
#line 1914 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 197:
#line 1917 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 198:
#line 1920 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 199:
#line 1923 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 200:
#line 1934 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 202:
#line 1944 "GetDP.y"
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
case 204:
#line 1969 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 206:
#line 1983 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 207:
#line 1989 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 208:
#line 1996 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 209:
#line 2005 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 210:
#line 2008 "GetDP.y"
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
case 211:
#line 2030 "GetDP.y"
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
case 212:
#line 2045 "GetDP.y"
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
case 213:
#line 2069 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 215:
#line 2083 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 216:
#line 2093 "GetDP.y"
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
case 217:
#line 2117 "GetDP.y"
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
case 218:
#line 2142 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 219:
#line 2147 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 220:
#line 2155 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 221:
#line 2163 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 222:
#line 2173 "GetDP.y"
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
case 223:
#line 2190 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 224:
#line 2198 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 225:
#line 2205 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 226:
#line 2212 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 227:
#line 2221 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 228:
#line 2230 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 229:
#line 2239 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 230:
#line 2260 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 232:
#line 2271 "GetDP.y"
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
case 234:
#line 2298 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 236:
#line 2311 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 237:
#line 2317 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 238:
#line 2324 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 239:
#line 2333 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 240:
#line 2336 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 241:
#line 2339 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 242:
#line 2342 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 243:
#line 2349 "GetDP.y"
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
case 244:
#line 2365 "GetDP.y"
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
case 245:
#line 2414 "GetDP.y"
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
case 247:
#line 2434 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 248:
#line 2437 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 249:
#line 2442 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 250:
#line 2447 "GetDP.y"
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
case 251:
#line 2461 "GetDP.y"
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
case 252:
#line 2481 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 253:
#line 2486 "GetDP.y"
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
case 254:
#line 2510 "GetDP.y"
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
case 256:
#line 2570 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2573 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 258:
#line 2582 "GetDP.y"
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
case 259:
#line 2648 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 260:
#line 2652 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 261:
#line 2659 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 263:
#line 2668 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 264:
#line 2673 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2676 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 266:
#line 2683 "GetDP.y"
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
case 267:
#line 2699 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 268:
#line 2705 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 269:
#line 2708 "GetDP.y"
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
case 270:
#line 2727 "GetDP.y"
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
case 271:
#line 2739 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 272:
#line 2745 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 273:
#line 2748 "GetDP.y"
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
case 274:
#line 2763 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 275:
#line 2767 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 276:
#line 2776 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 278:
#line 2787 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 279:
#line 2792 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 280:
#line 2802 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 281:
#line 2815 "GetDP.y"
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
case 282:
#line 2830 "GetDP.y"
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
case 283:
#line 2904 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 285:
#line 2920 "GetDP.y"
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
case 286:
#line 2938 "GetDP.y"
{
      if (!Nbr_Index) {
	Type_Function = yyvsp[-3].i ;
	Type_SuppList = SUPPLIST_NONE ;
	Constraint_Index =
	  List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c, fcmp_Constraint_Name) ;
      }
      else {
	vyyerror("New syntax for Constraint needed in multiple FunctionSpace") ;
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 287:
#line 2952 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 288:
#line 2955 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 289:
#line 2958 "GetDP.y"
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
case 290:
#line 3004 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 292:
#line 3014 "GetDP.y"
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
case 294:
#line 3040 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 296:
#line 3052 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 297:
#line 3058 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 298:
#line 3065 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 300:
#line 3077 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 301:
#line 3083 "GetDP.y"
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
case 302:
#line 3097 "GetDP.y"
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
case 303:
#line 3115 "GetDP.y"
{ DefineQuantity_S.Name = NULL ;
      DefineQuantity_S.Type = LOCALQUANTITY ;
      DefineQuantity_S.IndexInFunctionSpace = NULL ;
      DefineQuantity_S.FunctionSpaceIndex = -1 ;
      DefineQuantity_S.DofDataIndex = -1 ;
      DefineQuantity_S.DofData = NULL ;

      DefineQuantity_S.IntegralQuantity.InIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = -1 ;
      DefineQuantity_S.IntegralQuantity.Symmetry = 0 ;
      DefineQuantity_S.IntegralQuantity.WholeQuantity = NULL ;
    ;
    break;}
case 305:
#line 3136 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 306:
#line 3139 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 307:
#line 3143 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 308:
#line 3146 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3156 "GetDP.y"
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
case 310:
#line 3195 "GetDP.y"
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
case 311:
#line 3219 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 312:
#line 3224 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 313:
#line 3230 "GetDP.y"
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
	    DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }
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
	    if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PSCA_DOF ;
	    if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
	      DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_GF_PVEC_DOF ;

	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
	      (WholeQuantity_P+0)->Case.Function.NbrParameters ;
	    DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
	      (WholeQuantity_P+0)->Case.Function.Para ;	    
	  }

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
	  }

	}

      }

      else if (List_Nbr(DefineQuantity_S.IntegralQuantity.WholeQuantity) == 5){
	
	/* EXPR  TIME  GF_FUNCTION  OPER  DOF */
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
	    if((WholeQuantity_P+2)->Case.Operator.TypeOperator == OP_TIME){

	      DefineQuantity_S.IntegralQuantity.ExpressionIndexForCanonical =
		(WholeQuantity_P+0)->Case.Expression.Index ;

	      if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_TIME)
		DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PSCA_DOF ;
	      if((WholeQuantity_P+4)->Case.Operator.TypeOperator == OP_CROSSPRODUCT)
		DefineQuantity_S.IntegralQuantity.CanonicalWholeQuantity = CWQ_EXP_TIME_GF_PVEC_DOF ;
	      
	      DefineQuantity_S.IntegralQuantity.FunctionForCanonical.NbrParameters =
		(WholeQuantity_P+1)->Case.Function.NbrParameters ;
	      DefineQuantity_S.IntegralQuantity.FunctionForCanonical.Para =
		(WholeQuantity_P+1)->Case.Function.Para ;	    
	    }
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
case 314:
#line 3391 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 315:
#line 3396 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 316:
#line 3405 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 317:
#line 3414 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 319:
#line 3422 "GetDP.y"
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
case 320:
#line 3462 "GetDP.y"
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
case 321:
#line 3477 "GetDP.y"
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
case 322:
#line 3505 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 323:
#line 3508 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 324:
#line 3511 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 325:
#line 3514 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 326:
#line 3521 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 328:
#line 3532 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3542 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3552 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 331:
#line 3566 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 333:
#line 3578 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 334:
#line 3580 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 335:
#line 3582 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 336:
#line 3584 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 337:
#line 3592 "GetDP.y"
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
      EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = -1 ;
      EquationTerm_S.Case.LocalTerm.Active = NULL ;
    ;
    break;}
case 339:
#line 3614 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 340:
#line 3622 "GetDP.y"
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
case 341:
#line 3684 "GetDP.y"
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
case 342:
#line 3730 "GetDP.y"
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
case 343:
#line 3754 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 344:
#line 3763 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 345:
#line 3777 "GetDP.y"
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
case 347:
#line 3806 "GetDP.y"
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
case 348:
#line 3830 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 349:
#line 3838 "GetDP.y"
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
case 350:
#line 3893 "GetDP.y"
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
case 351:
#line 3910 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 352:
#line 3911 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 353:
#line 3912 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 354:
#line 3913 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 355:
#line 3914 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 356:
#line 3915 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 357:
#line 3916 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 358:
#line 3923 "GetDP.y"
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
case 359:
#line 3944 "GetDP.y"
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
case 360:
#line 3968 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 362:
#line 3978 "GetDP.y"
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
case 364:
#line 4003 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 366:
#line 4015 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 367:
#line 4022 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 368:
#line 4029 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 369:
#line 4032 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 370:
#line 4034 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 371:
#line 4040 "GetDP.y"
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
case 372:
#line 4055 "GetDP.y"
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
case 373:
#line 4074 "GetDP.y"
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
    ;
    break;}
case 375:
#line 4093 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 376:
#line 4096 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 377:
#line 4105 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 378:
#line 4108 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 379:
#line 4113 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 380:
#line 4118 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 381:
#line 4123 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 382:
#line 4128 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 383:
#line 4137 "GetDP.y"
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
case 384:
#line 4174 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 385:
#line 4181 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 386:
#line 4184 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 387:
#line 4196 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 388:
#line 4206 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 389:
#line 4212 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 390:
#line 4215 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 391:
#line 4227 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 392:
#line 4235 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 393:
#line 4246 "GetDP.y"
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

      if (Operation_P->Type == OPERATION_GENERATE || Operation_P->Type == OPERATION_GENERATEJAC)
	Operation_P->Case.Generate.GroupIndex = -1 ;      
    ;
    break;}
case 394:
#line 4266 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 395:
#line 4273 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 396:
#line 4279 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 397:
#line 4285 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 398:
#line 4291 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 399:
#line 4299 "GetDP.y"
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

      if (Operation_P->Type == OPERATION_GENERATE || Operation_P->Type == OPERATION_GENERATEJAC)
	Operation_P->Case.Generate.GroupIndex = -1 ;      

    ;
    break;}
case 400:
#line 4320 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 401:
#line 4327 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 402:
#line 4333 "GetDP.y"
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
case 403:
#line 4344 "GetDP.y"
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
case 404:
#line 4355 "GetDP.y"
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
case 405:
#line 4367 "GetDP.y"
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
case 406:
#line 4379 "GetDP.y"
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
case 407:
#line 4399 "GetDP.y"
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
case 408:
#line 4416 "GetDP.y"
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
case 409:
#line 4435 "GetDP.y"
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
case 410:
#line 4457 "GetDP.y"
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
case 411:
#line 4491 "GetDP.y"
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
case 412:
#line 4504 "GetDP.y"
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
case 413:
#line 4518 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-6].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-4].i ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 414:
#line 4531 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = yyvsp[-10].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-6].i ;
      Operation_P->Case.IterativeLoop.Flag = yyvsp[-4].d ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 415:
#line 4543 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 417:
#line 4552 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 419:
#line 4561 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 420:
#line 4571 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 421:
#line 4581 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 422:
#line 4589 "GetDP.y"
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
case 423:
#line 4602 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = yyvsp[-4].d ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = yyvsp[-2].c ;
    ;
    break;}
case 424:
#line 4615 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
      Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 425:
#line 4624 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 426:
#line 4633 "GetDP.y"
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
case 427:
#line 4647 "GetDP.y"
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
case 428:
#line 4660 "GetDP.y"
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
case 429:
#line 4677 "GetDP.y"
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
case 430:
#line 4691 "GetDP.y"
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
case 431:
#line 4710 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 432:
#line 4715 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 433:
#line 4725 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 435:
#line 4735 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 436:
#line 4738 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 437:
#line 4748 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 438:
#line 4764 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 440:
#line 4780 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 441:
#line 4784 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 442:
#line 4788 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 443:
#line 4792 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 444:
#line 4797 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 445:
#line 4808 "GetDP.y"
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
case 447:
#line 4825 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 448:
#line 4829 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 449:
#line 4833 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 450:
#line 4837 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 451:
#line 4841 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 452:
#line 4846 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 453:
#line 4857 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 455:
#line 4872 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 456:
#line 4876 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 457:
#line 4880 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 458:
#line 4884 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 459:
#line 4888 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 460:
#line 4899 "GetDP.y"
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
case 462:
#line 4917 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 463:
#line 4921 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 464:
#line 4925 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 465:
#line 4929 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 466:
#line 4934 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 467:
#line 4944 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 468:
#line 4950 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 469:
#line 4956 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 470:
#line 4966 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 471:
#line 4969 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 472:
#line 4974 "GetDP.y"
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
case 474:
#line 4992 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 475:
#line 5002 "GetDP.y"
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
case 476:
#line 5031 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 477:
#line 5034 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 478:
#line 5037 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 479:
#line 5045 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 480:
#line 5062 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 482:
#line 5074 "GetDP.y"
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
case 484:
#line 5097 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 486:
#line 5111 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 487:
#line 5118 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 488:
#line 5126 "GetDP.y"
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
case 489:
#line 5172 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 490:
#line 5177 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 491:
#line 5183 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 492:
#line 5186 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 493:
#line 5191 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 495:
#line 5202 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 496:
#line 5205 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 497:
#line 5211 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 498:
#line 5216 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 499:
#line 5222 "GetDP.y"
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
case 500:
#line 5236 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 502:
#line 5250 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 503:
#line 5257 "GetDP.y"
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
case 504:
#line 5285 "GetDP.y"
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
case 505:
#line 5295 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 506:
#line 5296 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 507:
#line 5302 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 508:
#line 5311 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 509:
#line 5328 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 511:
#line 5340 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 513:
#line 5347 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 515:
#line 5359 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 516:
#line 5366 "GetDP.y"
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
case 517:
#line 5378 "GetDP.y"
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
case 518:
#line 5389 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 519:
#line 5394 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 520:
#line 5400 "GetDP.y"
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
case 521:
#line 5417 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 522:
#line 5427 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 523:
#line 5430 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 524:
#line 5434 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 525:
#line 5445 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 526:
#line 5449 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 527:
#line 5453 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 528:
#line 5458 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 529:
#line 5462 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 530:
#line 5471 "GetDP.y"
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
case 531:
#line 5483 "GetDP.y"
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
case 532:
#line 5506 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 533:
#line 5507 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 534:
#line 5508 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 535:
#line 5509 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 536:
#line 5515 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 537:
#line 5517 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 538:
#line 5523 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 539:
#line 5529 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 540:
#line 5536 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 541:
#line 5545 "GetDP.y"
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
case 542:
#line 5567 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 543:
#line 5575 "GetDP.y"
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
case 544:
#line 5586 "GetDP.y"
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
case 545:
#line 5600 "GetDP.y"
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
case 546:
#line 5621 "GetDP.y"
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
case 547:
#line 5648 "GetDP.y"
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
case 548:
#line 5679 "GetDP.y"
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
case 549:
#line 5699 "GetDP.y"
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
      PostSubOperation_S.ChangeOfCoordinates[0] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[1] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[2] = -1 ;
      PostSubOperation_S.ChangeOfValues = NULL ;
    ;
    break;}
case 551:
#line 5725 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 552:
#line 5732 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 553:
#line 5739 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 554:
#line 5746 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 555:
#line 5750 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 556:
#line 5754 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 557:
#line 5758 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 558:
#line 5762 "GetDP.y"
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
case 559:
#line 5772 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 560:
#line 5777 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 561:
#line 5782 "GetDP.y"
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
case 562:
#line 5802 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 563:
#line 5809 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 564:
#line 5818 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 565:
#line 5827 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 566:
#line 5836 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 567:
#line 5843 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 568:
#line 5851 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 569:
#line 5855 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 570:
#line 5864 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 571:
#line 5868 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 572:
#line 5876 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 573:
#line 5882 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 574:
#line 5891 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 575:
#line 5897 "GetDP.y"
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
case 576:
#line 5945 "GetDP.y"
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
case 577:
#line 5960 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 580:
#line 5973 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 581:
#line 5979 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 582:
#line 5985 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 583:
#line 5996 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 584:
#line 5997 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 585:
#line 5998 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 586:
#line 5999 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 587:
#line 6000 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 588:
#line 6001 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 589:
#line 6002 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 590:
#line 6003 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 591:
#line 6004 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 592:
#line 6005 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 593:
#line 6006 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 594:
#line 6007 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 595:
#line 6008 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 596:
#line 6009 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 597:
#line 6010 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 598:
#line 6011 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 599:
#line 6012 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 600:
#line 6013 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 601:
#line 6014 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 602:
#line 6015 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 603:
#line 6016 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 604:
#line 6019 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 605:
#line 6020 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 606:
#line 6021 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 607:
#line 6022 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 608:
#line 6023 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 609:
#line 6024 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 610:
#line 6025 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 611:
#line 6026 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 612:
#line 6027 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 613:
#line 6028 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 614:
#line 6029 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 615:
#line 6030 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 616:
#line 6031 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 617:
#line 6032 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 618:
#line 6033 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 619:
#line 6034 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 620:
#line 6035 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 621:
#line 6036 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 622:
#line 6037 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 623:
#line 6038 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 624:
#line 6039 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 625:
#line 6040 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 626:
#line 6041 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 627:
#line 6042 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 628:
#line 6043 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 629:
#line 6044 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 630:
#line 6045 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 631:
#line 6046 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 632:
#line 6047 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 633:
#line 6048 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 634:
#line 6049 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 635:
#line 6050 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 636:
#line 6051 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 637:
#line 6052 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 638:
#line 6053 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 639:
#line 6054 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 640:
#line 6055 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 641:
#line 6056 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 642:
#line 6057 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 643:
#line 6058 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 644:
#line 6063 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 645:
#line 6064 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 646:
#line 6065 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 647:
#line 6066 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 648:
#line 6067 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 649:
#line 6068 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 650:
#line 6069 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 651:
#line 6071 "GetDP.y"
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
case 652:
#line 6089 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 653:
#line 6092 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 654:
#line 6098 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 655:
#line 6101 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 656:
#line 6108 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 657:
#line 6114 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 658:
#line 6117 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 659:
#line 6120 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 660:
#line 6132 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 661:
#line 6138 "GetDP.y"
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
case 662:
#line 6149 "GetDP.y"
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
case 663:
#line 6165 "GetDP.y"
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
case 664:
#line 6187 "GetDP.y"
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
case 665:
#line 6202 "GetDP.y"
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
case 666:
#line 6240 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 667:
#line 6248 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 668:
#line 6260 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 669:
#line 6263 "GetDP.y"
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
case 670:
#line 6278 "GetDP.y"
{
      yyval.c = (char *)Malloc((strlen(yyvsp[-3].c)+strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-3].c) ;  strcat(yyval.c, yyvsp[-1].c) ;
    ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/lib/bison.simple"

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
#line 6292 "GetDP.y"



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


