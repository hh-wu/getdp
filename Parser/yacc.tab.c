
/*  A Bison parser, made from yacc.y
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
#define	tDefineConstant	266
#define	tPi	267
#define	t0D	268
#define	t1D	269
#define	t2D	270
#define	t3D	271
#define	tExp	272
#define	tLog	273
#define	tLog10	274
#define	tSqrt	275
#define	tSin	276
#define	tAsin	277
#define	tCos	278
#define	tAcos	279
#define	tTan	280
#define	tAtan	281
#define	tAtan2	282
#define	tSinh	283
#define	tCosh	284
#define	tTanh	285
#define	tFabs	286
#define	tFloor	287
#define	tCeil	288
#define	tFmod	289
#define	tModulo	290
#define	tHypot	291
#define	tSolidAngle	292
#define	tTrace	293
#define	tOrder	294
#define	tCrossProduct	295
#define	tMHTimeIntegration	296
#define	tGroup	297
#define	tDefineGroup	298
#define	tAll	299
#define	tInSupport	300
#define	tDefineFunction	301
#define	tList	302
#define	tListAlt	303
#define	tConstraint	304
#define	tRegion	305
#define	tSubRegion	306
#define	tRegionRef	307
#define	tSubRegionRef	308
#define	tFilter	309
#define	tCoefficient	310
#define	tValue	311
#define	tTimeFunction	312
#define	tBranch	313
#define	tNode	314
#define	tLoop	315
#define	tNameOfResolution	316
#define	tJacobian	317
#define	tCase	318
#define	tIntegration	319
#define	tType	320
#define	tSubType	321
#define	tCriterion	322
#define	tGeoElement	323
#define	tNumberOfPoints	324
#define	tMaxNumberOfPoints	325
#define	tNumberOfDivisions	326
#define	tMaxNumberOfDivisions	327
#define	tStoppingCriterion	328
#define	tFunctionSpace	329
#define	tName	330
#define	tBasisFunction	331
#define	tNameOfCoef	332
#define	tFunction	333
#define	tSupport	334
#define	tEntity	335
#define	tSubSpace	336
#define	tNameOfBasisFunction	337
#define	tGlobalQuantity	338
#define	tEntityType	339
#define	tEntitySubType	340
#define	tNameOfConstraint	341
#define	tFormulation	342
#define	tQuantity	343
#define	tNameOfSpace	344
#define	tIndexOfSystem	345
#define	tSymmetry	346
#define	tEquation	347
#define	tGalerkin	348
#define	tdeRham	349
#define	tGlobalTerm	350
#define	tGlobalEquation	351
#define	tDt	352
#define	tDtDof	353
#define	tDtDt	354
#define	tDtDtDof	355
#define	tJacNL	356
#define	tNeverDt	357
#define	tIn	358
#define	tResolution	359
#define	tDefineSystem	360
#define	tNameOfFormulation	361
#define	tNameOfMesh	362
#define	tFrequency	363
#define	tSolver	364
#define	tOriginSystem	365
#define	tDestinationSystem	366
#define	tOperation	367
#define	tOperationEnd	368
#define	tSetTime	369
#define	tDTime	370
#define	tSetFrequency	371
#define	tFourierTransform	372
#define	tIf	373
#define	tElse	374
#define	tLanczos	375
#define	tUpdate	376
#define	tTimeLoopTheta	377
#define	tTime0	378
#define	tTimeMax	379
#define	tTheta	380
#define	tTimeLoopNewmark	381
#define	tBeta	382
#define	tGamma	383
#define	tIterativeLoop	384
#define	tNbrMaxIteration	385
#define	tRelaxationFactor	386
#define	tIterativeTimeReduction	387
#define	tDivisionCoefficient	388
#define	tChangeOfState	389
#define	tChangeOfCoordinates	390
#define	tSystemCommand	391
#define	tPostProcessing	392
#define	tNameOfSystem	393
#define	tPostOperation	394
#define	tNameOfPostProcessing	395
#define	tUsingPost	396
#define	tAppend	397
#define	tPlot	398
#define	tPrint	399
#define	tWrite	400
#define	tAdapt	401
#define	tOnGlobal	402
#define	tOnRegion	403
#define	tOnElementsOf	404
#define	tOnGrid	405
#define	tOnCut	406
#define	tOnPoint	407
#define	tOnLine	408
#define	tOnPlane	409
#define	tOnBox	410
#define	tWithArgument	411
#define	tFile	412
#define	tDepth	413
#define	tDimension	414
#define	tTimeStep	415
#define	tHarmonicToTime	416
#define	tFormat	417
#define	tHeader	418
#define	tFooter	419
#define	tSkin	420
#define	tSmoothing	421
#define	tTarget	422
#define	tSort	423
#define	tIso	424
#define	tNoNewLine	425
#define	tFlag	426
#define	tBreak	427
#define	tHelp	428
#define	tCpu	429
#define	tDEF	430
#define	tAND	431
#define	tOR	432
#define	tNOTEQUAL	433
#define	tEQUAL	434
#define	tAPPROXEQUAL	435
#define	tLESSOREQUAL	436
#define	tGREATEROREQUAL	437
#define	tLESSLESS	438
#define	tGREATERGREATER	439
#define	tCROSSPRODUCT	440
#define	UNARYPREC	441

#line 1 "yacc.y"

/* $Id: yacc.tab.c,v 1.30 2000-11-07 08:49:12 dular Exp $ */

/*
  Modifs a faire (Patrick):
  - definir des structures avec valeurs par defaut, e.g. BasisFunction_D = ...
  (dans un fichier a part).

  Autres:
  - modif Affectation (etendue domaine definition) a indiquer dans getdp.texi

  CG
  Il faudrait inclure les listes (peut-etre recursives) au sein meme des
  expressions, afin de gerer les vecteurs, tenseurs, etc., directement, et
  pas par l'intermediaire d'une fonction de creation
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>

/* bison est mal foutu */
#if !defined __cplusplus && !defined MSDOS && !defined _AIX
#include <alloca.h> 
#endif

#include "Data_Passive.h"
#include "Data_Active.h"
#include "Data_DefineE.h"
#include "Malloc.h"
#include "Tools.h"
#include "Init_Problem.h"
#include "BF_Function.h"
#include "Quadrature.h"
#include "Cal_Value.h"
#include "Constant.h"
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
List_T  * ListOfInt_L, * ListOfTwoInt_L, * ListOfDouble_L, * ListOfDouble2_L ;
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


#line 178 "yacc.y"
typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		1558
#define	YYFLAG		-32768
#define	YYNTBASE	208

#define YYTRANSLATE(x) ((unsigned)(x) <= 441 ? yytranslate[x] : 391)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   196,     2,   198,   199,   193,     2,     2,   205,
   206,   191,   189,   204,   190,   207,   192,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   183,
     2,   184,   177,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   202,     2,   203,   197,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   200,     2,   201,     2,     2,     2,     2,     2,
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
   178,   179,   180,   181,   182,   185,   186,   187,   188,   194,
   195
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    81,    87,    90,    91,    94,    95,    96,   100,
   105,   111,   112,   119,   125,   127,   128,   129,   137,   140,
   142,   145,   147,   149,   151,   153,   154,   158,   163,   165,
   167,   171,   172,   176,   181,   183,   187,   194,   196,   201,
   205,   206,   210,   217,   218,   220,   225,   226,   229,   233,
   234,   237,   243,   250,   258,   260,   261,   265,   270,   275,
   276,   279,   280,   283,   285,   286,   287,   295,   299,   303,
   310,   314,   318,   322,   326,   330,   334,   338,   342,   346,
   350,   354,   358,   362,   366,   369,   372,   375,   379,   381,
   385,   388,   390,   393,   394,   400,   401,   413,   418,   423,
   424,   432,   439,   442,   445,   448,   451,   455,   458,   462,
   465,   469,   471,   475,   476,   480,   487,   494,   495,   500,
   501,   504,   508,   513,   514,   519,   520,   523,   527,   531,
   536,   537,   542,   543,   546,   550,   554,   559,   560,   565,
   566,   569,   573,   577,   582,   583,   588,   589,   592,   596,
   600,   604,   608,   612,   616,   617,   620,   624,   626,   627,
   630,   634,   639,   643,   648,   654,   655,   660,   661,   664,
   668,   672,   676,   680,   684,   688,   696,   700,   704,   708,
   712,   716,   724,   732,   740,   741,   744,   748,   750,   751,
   754,   758,   763,   767,   772,   777,   782,   787,   788,   793,
   794,   797,   801,   805,   810,   815,   819,   823,   824,   825,
   826,   845,   846,   851,   852,   855,   859,   863,   865,   869,
   870,   874,   875,   880,   881,   884,   888,   892,   896,   897,
   902,   903,   906,   910,   916,   920,   924,   929,   930,   933,
   937,   939,   940,   943,   947,   952,   956,   961,   966,   967,
   972,   973,   976,   980,   984,   988,   992,   993,  1000,  1004,
  1005,  1011,  1015,  1019,  1023,  1027,  1028,  1032,  1033,  1036,
  1041,  1046,  1051,  1056,  1057,  1060,  1064,  1068,  1072,  1073,
  1076,  1080,  1084,  1088,  1092,  1093,  1096,  1097,  1098,  1108,
  1112,  1116,  1120,  1121,  1124,  1128,  1129,  1130,  1140,  1141,
  1143,  1145,  1147,  1149,  1151,  1153,  1158,  1162,  1163,  1166,
  1170,  1172,  1173,  1176,  1180,  1185,  1190,  1191,  1197,  1198,
  1203,  1204,  1207,  1211,  1215,  1219,  1223,  1227,  1231,  1235,
  1239,  1242,  1246,  1247,  1251,  1253,  1257,  1258,  1262,  1263,
  1266,  1270,  1274,  1279,  1284,  1289,  1294,  1300,  1306,  1309,
  1317,  1329,  1337,  1345,  1355,  1367,  1381,  1397,  1398,  1406,
  1407,  1415,  1423,  1427,  1429,  1431,  1432,  1435,  1439,  1443,
  1446,  1447,  1450,  1454,  1458,  1462,  1466,  1471,  1472,  1475,
  1479,  1483,  1487,  1491,  1495,  1500,  1501,  1504,  1508,  1512,
  1516,  1520,  1525,  1526,  1529,  1533,  1537,  1541,  1545,  1549,
  1554,  1559,  1564,  1565,  1570,  1571,  1574,  1578,  1582,  1586,
  1590,  1594,  1598,  1599,  1602,  1606,  1608,  1609,  1612,  1616,
  1621,  1626,  1630,  1635,  1636,  1641,  1642,  1645,  1649,  1654,
  1655,  1661,  1667,  1668,  1671,  1672,  1679,  1683,  1684,  1689,
  1693,  1697,  1698,  1701,  1705,  1707,  1708,  1711,  1715,  1719,
  1723,  1727,  1732,  1733,  1742,  1743,  1744,  1748,  1756,  1764,
  1768,  1775,  1777,  1779,  1781,  1783,  1784,  1788,  1790,  1793,
  1796,  1821,  1824,  1825,  1840,  1849,  1870,  1900,  1939,  1952,
  1953,  1956,  1960,  1965,  1970,  1974,  1977,  1981,  1985,  1989,
  1993,  1997,  2001,  2005,  2009,  2013,  2017,  2021,  2025,  2029,
  2035,  2038,  2039,  2042,  2043,  2047,  2049,  2053,  2054,  2056,
  2060,  2062,  2064,  2068,  2072,  2076,  2083,  2088,  2093,  2100,
  2110,  2116,  2117,  2121,  2127,  2133,  2135,  2137,  2139,  2141,
  2143,  2145,  2147,  2149,  2151,  2153,  2155,  2157,  2159,  2161,
  2163,  2165,  2167,  2169,  2171,  2173,  2175,  2177,  2181,  2184,
  2187,  2191,  2195,  2199,  2203,  2207,  2211,  2215,  2219,  2223,
  2227,  2231,  2235,  2239,  2243,  2248,  2253,  2258,  2263,  2268,
  2273,  2278,  2283,  2288,  2293,  2300,  2305,  2310,  2315,  2320,
  2325,  2330,  2337,  2344,  2351,  2357,  2360,  2362,  2364,  2366,
  2368,  2370,  2372,  2374,  2376,  2378,  2380
};

static const short yyrhs[] = {    -1,
   209,   210,     0,     0,     0,   210,   211,   212,     0,    43,
   200,   215,   201,     0,    79,   200,   235,   201,     0,    50,
   200,   267,   201,     0,    63,   200,   252,   201,     0,    65,
   200,   258,   201,     0,    75,   200,   274,   201,     0,    88,
   200,   295,   201,     0,   105,   200,   321,   201,     0,   138,
   200,   351,   201,     0,   140,   200,   363,   201,     0,   367,
     0,   385,     0,    10,   390,     0,   213,     0,   174,     7,
     0,   174,     5,     7,     0,   174,     5,     5,     7,     0,
   174,     5,     5,     5,     7,     0,   175,     7,     0,     0,
   214,   371,     0,     0,     0,   215,   216,   217,     0,     5,
   176,   219,     7,     0,     5,   234,   176,   219,     7,     0,
     0,     5,   232,   176,   218,   219,     7,     0,    44,   202,
   230,   203,     7,     0,   385,     0,     0,     0,   223,   202,
   220,   224,   221,   225,   203,     0,   198,   227,     0,   219,
     0,     5,   233,     0,    51,     0,     5,     0,   227,     0,
    45,     0,     0,   231,   226,   227,     0,   231,    46,     5,
   233,     0,     5,     0,   229,     0,   200,   228,   201,     0,
     0,   228,   231,   229,     0,   228,   231,   190,   229,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   202,   388,
   203,     3,     0,     5,     0,     5,   200,   388,   201,     0,
     5,   200,   201,     0,     0,   230,   231,     5,     0,   230,
   231,     5,   200,   388,   201,     0,     0,   204,     0,   200,
   198,   388,   201,     0,     0,   200,   201,     0,   200,   388,
   201,     0,     0,   235,   236,     0,    47,   202,   237,   203,
     7,     0,     5,   202,   203,   176,   238,     7,     0,     5,
   202,   222,   203,   176,   238,     7,     0,   385,     0,     0,
   237,   231,     5,     0,    11,   202,   388,   203,     0,    79,
   202,     5,   203,     0,     0,   239,   240,     0,     0,   241,
   242,     0,   245,     0,     0,     0,   242,   177,   243,   242,
     8,   244,   242,     0,   242,   191,   242,     0,   242,   194,
   242,     0,    41,   202,   242,   204,   242,   203,     0,   242,
   192,   242,     0,   242,   189,   242,     0,   242,   190,   242,
     0,   242,   193,   242,     0,   242,   197,   242,     0,   242,
   183,   242,     0,   242,   184,   242,     0,   242,   185,   242,
     0,   242,   186,   242,     0,   242,   181,   242,     0,   242,
   180,   242,     0,   242,   182,   242,     0,   242,   178,   242,
     0,   242,   179,   242,     0,   190,   242,     0,   189,   242,
     0,   196,   242,     0,   205,   242,   206,     0,   389,     0,
   387,   249,   251,     0,     5,   320,     0,   320,     0,   320,
   249,     0,     0,    98,   246,   202,   240,   203,     0,     0,
    42,   247,   202,     3,   204,   388,   204,   240,   204,   240,
   203,     0,    38,   202,   320,   203,     0,    40,   202,   320,
   203,     0,     0,    39,   248,   202,   240,   204,   222,   203,
     0,   183,     5,   184,   202,   240,   203,     0,   199,     5,
     0,   199,   161,     0,   199,   116,     0,   199,     3,     0,
   245,   198,     3,     0,   198,     3,     0,   202,   207,   203,
     0,   202,   203,     0,   202,   250,   203,     0,   242,     0,
   250,   204,   242,     0,     0,   200,   383,   201,     0,   200,
    51,   202,   222,   203,   201,     0,   200,    48,   202,     5,
   203,   201,     0,     0,   252,   200,   253,   201,     0,     0,
   253,   254,     0,    76,     5,     7,     0,    64,   200,   255,
   201,     0,     0,   255,   200,   256,   201,     0,     0,   256,
   257,     0,    51,   222,     7,     0,    51,    45,     7,     0,
    63,     5,   251,     7,     0,     0,   258,   200,   259,   201,
     0,     0,   259,   260,     0,    76,     5,     7,     0,    68,
   238,     7,     0,    64,   200,   261,   201,     0,     0,   261,
   200,   262,   201,     0,     0,   262,   263,     0,    66,     5,
     7,     0,    67,     5,     7,     0,    64,   200,   264,   201,
     0,     0,   264,   200,   265,   201,     0,     0,   265,   266,
     0,    69,     5,     7,     0,    70,   388,     7,     0,    71,
   388,     7,     0,    72,   388,     7,     0,    73,   388,     7,
     0,    74,   388,     7,     0,     0,   267,   268,     0,   200,
   269,   201,     0,   385,     0,     0,   269,   270,     0,    76,
     5,     7,     0,    76,     5,   232,     7,     0,    66,     5,
     7,     0,    64,   200,   271,   201,     0,    64,     5,   200,
   271,   201,     0,     0,   271,   200,   272,   201,     0,     0,
   272,   273,     0,    66,     5,     7,     0,    51,   222,     7,
     0,    52,   222,     7,     0,    58,   238,     7,     0,    57,
   238,     7,     0,    62,     5,     7,     0,    59,   200,     3,
   231,     3,   201,     7,     0,    53,   222,     7,     0,    54,
   222,     7,     0,    79,   238,     7,     0,    56,   238,     7,
     0,    55,   238,     7,     0,    79,   202,   238,   204,   238,
   203,     7,     0,    56,   202,   238,   204,   238,   203,     7,
     0,    55,   202,   238,   204,   238,   203,     7,     0,     0,
   274,   275,     0,   200,   276,   201,     0,   385,     0,     0,
   276,   277,     0,    76,     5,     7,     0,    76,     5,   232,
     7,     0,    66,     5,     7,     0,    77,   200,   278,   201,
     0,    82,   200,   284,   201,     0,    84,   200,   289,   201,
     0,    50,   200,   292,   201,     0,     0,   278,   200,   279,
   201,     0,     0,   279,   280,     0,    76,     5,     7,     0,
    78,     5,     7,     0,    78,     5,   232,     7,     0,    79,
     5,   281,     7,     0,    80,   222,     7,     0,    81,   222,
     7,     0,     0,     0,     0,   200,    89,     5,     7,    88,
     5,   232,     7,   282,    43,   222,     7,   283,   105,     5,
   233,     7,   201,     0,     0,   284,   200,   285,   201,     0,
     0,   285,   286,     0,    76,     5,     7,     0,    83,   287,
     7,     0,     5,     0,   200,   288,   201,     0,     0,   288,
   231,     5,     0,     0,   289,   200,   290,   201,     0,     0,
   290,   291,     0,    76,     5,     7,     0,    66,     5,     7,
     0,    78,     5,     7,     0,     0,   292,   200,   293,   201,
     0,     0,   293,   294,     0,    78,     5,     7,     0,    81,
   223,    87,     5,     7,     0,    85,   223,     7,     0,    86,
   226,     7,     0,    87,     5,   233,     7,     0,     0,   295,
   296,     0,   200,   297,   201,     0,   385,     0,     0,   297,
   298,     0,    76,     5,     7,     0,    76,     5,   232,     7,
     0,    66,     5,     7,     0,    89,   200,   299,   201,     0,
    93,   200,   305,   201,     0,     0,   299,   200,   300,   201,
     0,     0,   300,   301,     0,    76,     5,     7,     0,    66,
    84,     7,     0,    66,    94,     7,     0,    66,     5,     7,
     0,     0,    90,     5,   233,   302,   304,     7,     0,    91,
     3,     7,     0,     0,   202,   303,   240,   203,     7,     0,
   104,   222,     7,     0,    65,     5,     7,     0,    63,     5,
     7,     0,    92,     3,     7,     0,     0,   202,     5,   203,
     0,     0,   305,   306,     0,    94,   200,   311,   201,     0,
    95,   200,   311,   201,     0,    96,   200,   315,   201,     0,
    97,   200,   307,   201,     0,     0,   307,   308,     0,    66,
     5,     7,     0,    87,     5,     7,     0,   200,   309,   201,
     0,     0,   309,   310,     0,    60,   320,     7,     0,    61,
   320,     7,     0,    93,   320,     7,     0,   104,   222,     7,
     0,     0,   311,   312,     0,     0,     0,   319,   202,   313,
   240,   314,   204,   240,   203,     7,     0,   104,   222,     7,
     0,    63,     5,     7,     0,    65,     5,     7,     0,     0,
   315,   316,     0,   104,   222,     7,     0,     0,     0,   319,
   202,   317,   240,   318,   204,   320,   203,     7,     0,     0,
    98,     0,    99,     0,   100,     0,   101,     0,   102,     0,
   103,     0,   200,     5,     5,   201,     0,   200,     5,   201,
     0,     0,   321,   322,     0,   200,   323,   201,     0,   385,
     0,     0,   323,   324,     0,    76,     5,     7,     0,    76,
     5,   232,     7,     0,   106,   200,   326,   201,     0,     0,
   113,   325,   200,   333,   201,     0,     0,   326,   200,   327,
   201,     0,     0,   327,   328,     0,    76,     5,     7,     0,
    66,     5,     7,     0,   107,   329,     7,     0,   108,   390,
     7,     0,   111,   331,     7,     0,   112,     5,     7,     0,
   109,   382,     7,     0,   110,   390,     7,     0,     5,   233,
     0,   200,   330,   201,     0,     0,   330,   231,     5,     0,
     5,     0,   200,   332,   201,     0,     0,   332,   231,     5,
     0,     0,   333,   334,     0,     5,     5,     7,     0,   115,
   238,     7,     0,   123,   200,   340,   201,     0,   127,   200,
   342,   201,     0,   130,   200,   344,   201,     0,   133,   200,
   346,   201,     0,     5,   202,     5,   203,     7,     0,   115,
   202,   238,   203,     7,     0,   173,     7,     0,   119,   202,
   238,   203,   200,   333,   201,     0,   119,   202,   238,   203,
   200,   333,   201,   120,   200,   333,   201,     0,   117,   202,
     5,   204,   238,   203,     7,     0,   122,   202,     5,   204,
   238,   203,     7,     0,   118,   202,     5,   204,     5,   204,
   382,   203,     7,     0,   121,   202,     5,   204,   388,   204,
   382,   204,   388,   203,     7,     0,   123,   202,   388,   204,
   388,   204,   238,   204,   238,   203,   200,   333,   201,     0,
   127,   202,   388,   204,   388,   204,   238,   204,   388,   204,
   388,   203,   200,   333,   201,     0,     0,   145,   335,   202,
   337,   338,   203,     7,     0,     0,   146,   336,   202,   337,
   338,   203,     7,     0,   136,   202,   222,   204,   238,   203,
     7,     0,   137,     6,     7,     0,   380,     0,     5,     0,
     0,   338,   339,     0,   204,   158,   390,     0,   204,   161,
   382,     0,   204,   382,     0,     0,   340,   341,     0,   124,
   388,     7,     0,   125,   388,     7,     0,   116,   238,     7,
     0,   126,   238,     7,     0,   113,   200,   333,   201,     0,
     0,   342,   343,     0,   124,   388,     7,     0,   125,   388,
     7,     0,   116,   238,     7,     0,   128,   388,     7,     0,
   129,   388,     7,     0,   113,   200,   333,   201,     0,     0,
   344,   345,     0,   131,   388,     7,     0,   132,   238,     7,
     0,    68,   388,     7,     0,   172,   388,     7,     0,   113,
   200,   333,   201,     0,     0,   346,   347,     0,   131,   388,
     7,     0,   134,   388,     7,     0,    68,   388,     7,     0,
   172,   388,     7,     0,   106,     5,     7,     0,   135,   200,
   348,   201,     0,   113,   200,   333,   201,     0,   114,   200,
   333,   201,     0,     0,   348,   200,   349,   201,     0,     0,
   349,   350,     0,    66,     5,     7,     0,    89,     5,     7,
     0,   104,   222,     7,     0,    68,   388,     7,     0,    79,
   238,     7,     0,   172,     5,     7,     0,     0,   351,   352,
     0,   200,   353,   201,     0,   385,     0,     0,   353,   354,
     0,    76,     5,     7,     0,    76,     5,   232,     7,     0,
   107,     5,   233,     7,     0,   139,     5,     7,     0,    89,
   200,   355,   201,     0,     0,   355,   200,   356,   201,     0,
     0,   356,   357,     0,    76,     5,     7,     0,    57,   200,
   358,   201,     0,     0,   358,    94,   200,   359,   201,     0,
   358,     5,   200,   359,   201,     0,     0,   359,   360,     0,
     0,   319,   202,   361,   240,   203,     7,     0,    66,     5,
     7,     0,     0,   104,   362,   222,     7,     0,    63,     5,
     7,     0,    65,     5,     7,     0,     0,   363,   364,     0,
   200,   365,   201,     0,   385,     0,     0,   365,   366,     0,
    76,     5,     7,     0,   141,     5,     7,     0,   163,     5,
     7,     0,   143,   390,     7,     0,   113,   200,   369,   201,
     0,     0,   140,     5,   142,     5,   368,   200,   369,   201,
     0,     0,     0,   369,   370,   371,     0,   144,   202,   372,
   375,   377,   203,     7,     0,   145,   202,   372,   375,   377,
   203,     7,     0,     5,   374,   204,     0,     5,   374,   373,
     5,   374,   204,     0,   191,     0,   192,     0,   189,     0,
   190,     0,     0,   202,   222,   203,     0,   148,     0,   149,
   222,     0,   150,   222,     0,   152,   200,   200,   388,   204,
   388,   204,   388,   201,   200,   388,   204,   388,   204,   388,
   201,   200,   388,   204,   388,   204,   388,   201,   201,     0,
   151,   222,     0,     0,   151,   200,   238,   204,   238,   204,
   238,   201,   200,   382,   376,   204,   382,   201,     0,   153,
   200,   388,   204,   388,   204,   388,   201,     0,   154,   200,
   200,   388,   204,   388,   204,   388,   201,   200,   388,   204,
   388,   204,   388,   201,   201,   200,   388,   201,     0,   155,
   200,   200,   388,   204,   388,   204,   388,   201,   200,   388,
   204,   388,   204,   388,   201,   200,   388,   204,   388,   204,
   388,   201,   201,   200,   388,   204,   388,   201,     0,   156,
   200,   200,   388,   204,   388,   204,   388,   201,   200,   388,
   204,   388,   204,   388,   201,   200,   388,   204,   388,   204,
   388,   201,   200,   388,   204,   388,   204,   388,   201,   201,
   200,   388,   204,   388,   204,   388,   201,     0,   149,   222,
   157,     5,   200,   388,   204,   388,   201,   200,   388,   201,
     0,     0,   377,   378,     0,   204,   158,   390,     0,   204,
   158,   184,   390,     0,   204,   158,   188,   390,     0,   204,
   159,   388,     0,   204,   166,     0,   204,   167,   388,     0,
   204,   162,   388,     0,   204,   163,     5,     0,   204,   164,
   379,     0,   204,   165,   379,     0,   204,   163,   379,     0,
   204,   160,   388,     0,   204,   161,   382,     0,   204,   147,
     5,     0,   204,   169,     5,     0,   204,   168,   388,     0,
   204,    57,   382,     0,   204,   170,   388,     0,   204,   170,
   200,   383,   201,     0,   204,   171,     0,     0,   379,     6,
     0,     0,   200,   381,   201,     0,   238,     0,   381,   204,
   238,     0,     0,   388,     0,   200,   383,   201,     0,   388,
     0,   384,     0,   383,   204,   388,     0,   383,   204,   384,
     0,   388,     8,   388,     0,   388,     8,   202,   388,   203,
   388,     0,     5,   176,   388,     7,     0,     5,   176,     6,
     7,     0,     5,   176,   200,   383,   201,     7,     0,     5,
   176,    49,   202,     5,   204,     5,   203,     7,     0,    12,
   202,   386,   203,     7,     0,     0,   386,   231,     5,     0,
   386,   231,     5,   176,   388,     0,   386,   231,     5,   176,
     6,     0,    18,     0,    19,     0,    20,     0,    21,     0,
    22,     0,    23,     0,    24,     0,    25,     0,    26,     0,
    27,     0,    28,     0,    29,     0,    30,     0,    31,     0,
    32,     0,    33,     0,    34,     0,    35,     0,    36,     0,
    37,     0,     5,     0,   389,     0,   205,   388,   206,     0,
   190,   388,     0,   196,   388,     0,   388,   190,   388,     0,
   388,   189,   388,     0,   388,   191,   388,     0,   388,   192,
   388,     0,   388,   193,   388,     0,   388,   197,   388,     0,
   388,   183,   388,     0,   388,   184,   388,     0,   388,   185,
   388,     0,   388,   186,   388,     0,   388,   181,   388,     0,
   388,   180,   388,     0,   388,   178,   388,     0,   388,   179,
   388,     0,    18,   202,   388,   203,     0,    19,   202,   388,
   203,     0,    20,   202,   388,   203,     0,    21,   202,   388,
   203,     0,    22,   202,   388,   203,     0,    23,   202,   388,
   203,     0,    24,   202,   388,   203,     0,    25,   202,   388,
   203,     0,    26,   202,   388,   203,     0,    27,   202,   388,
   203,     0,    28,   202,   388,   204,   388,   203,     0,    29,
   202,   388,   203,     0,    30,   202,   388,   203,     0,    31,
   202,   388,   203,     0,    32,   202,   388,   203,     0,    33,
   202,   388,   203,     0,    34,   202,   388,   203,     0,    35,
   202,   388,   204,   388,   203,     0,    36,   202,   388,   204,
   388,   203,     0,    37,   202,   388,   204,   388,   203,     0,
   388,   177,   388,     8,   388,     0,   388,   198,     0,     4,
     0,     3,     0,    13,     0,    14,     0,    15,     0,    16,
     0,    17,     0,     5,     0,     6,     0,     5,     0,     9,
   202,   390,   204,   390,   203,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   310,   347,   385,   388,   391,   394,   397,   398,   399,   400,
   401,   402,   403,   404,   405,   407,   409,   411,   416,   425,
   429,   432,   435,   438,   440,   448,   462,   465,   466,   469,
   474,   477,   479,   482,   484,   488,   496,   507,   516,   525,
   532,   567,   572,   582,   585,   599,   604,   607,   656,   668,
   694,   699,   714,   732,   753,   759,   768,   782,   816,   829,
   849,   853,   863,   880,   880,   883,   889,   892,   895,   905,
   908,   911,   915,   935,   979,   983,   986,  1003,  1012,  1019,
  1022,  1028,  1034,  1041,  1045,  1058,  1073,  1087,  1093,  1099,
  1105,  1111,  1117,  1123,  1129,  1135,  1141,  1147,  1153,  1159,
  1165,  1171,  1177,  1183,  1190,  1196,  1198,  1207,  1211,  1217,
  1295,  1329,  1339,  1352,  1354,  1365,  1367,  1383,  1389,  1395,
  1397,  1426,  1450,  1461,  1467,  1474,  1480,  1491,  1505,  1508,
  1509,  1512,  1515,  1518,  1523,  1525,  1532,  1557,  1564,  1569,
  1574,  1578,  1585,  1590,  1595,  1600,  1606,  1610,  1615,  1618,
  1647,  1655,  1660,  1669,  1673,  1682,  1685,  1690,  1695,  1700,
  1708,  1712,  1723,  1732,  1737,  1742,  1747,  1759,  1763,  1818,
  1821,  1824,  1827,  1830,  1839,  1846,  1849,  1871,  1874,  1884,
  1888,  1896,  1903,  1911,  1914,  1934,  1951,  1973,  1983,  1987,
  1998,  2022,  2047,  2052,  2060,  2068,  2078,  2094,  2101,  2107,
  2113,  2121,  2129,  2137,  2155,  2163,  2166,  2189,  2193,  2202,
  2206,  2214,  2221,  2229,  2232,  2235,  2238,  2243,  2261,  2296,
  2311,  2315,  2320,  2325,  2330,  2342,  2366,  2421,  2425,  2429,
  2438,  2501,  2507,  2512,  2517,  2521,  2528,  2533,  2551,  2556,
  2560,  2577,  2583,  2590,  2597,  2601,  2608,  2617,  2628,  2645,
  2717,  2729,  2733,  2753,  2767,  2770,  2773,  2817,  2824,  2827,
  2849,  2853,  2861,  2865,  2873,  2880,  2889,  2891,  2896,  2911,
  2927,  2944,  2948,  2953,  2957,  2960,  2969,  3008,  3032,  3037,
  3043,  3193,  3198,  3207,  3216,  3221,  3224,  3262,  3279,  3305,
  3310,  3313,  3316,  3321,  3329,  3332,  3343,  3353,  3365,  3374,
  3377,  3381,  3383,  3385,  3391,  3409,  3413,  3424,  3485,  3531,
  3555,  3564,  3576,  3593,  3597,  3631,  3640,  3694,  3710,  3713,
  3714,  3715,  3716,  3717,  3718,  3722,  3738,  3754,  3761,  3764,
  3785,  3789,  3797,  3801,  3810,  3817,  3820,  3822,  3827,  3843,
  3860,  3875,  3879,  3884,  3892,  3895,  3900,  3905,  3910,  3920,
  3927,  3966,  3971,  3976,  3986,  3998,  4002,  4007,  4018,  4027,
  4034,  4054,  4061,  4067,  4073,  4079,  4087,  4103,  4110,  4116,
  4127,  4138,  4154,  4166,  4188,  4209,  4222,  4236,  4243,  4245,
  4252,  4254,  4264,  4274,  4284,  4294,  4300,  4303,  4307,  4316,
  4327,  4339,  4343,  4349,  4353,  4357,  4362,  4371,  4384,  4388,
  4394,  4398,  4402,  4406,  4411,  4420,  4432,  4435,  4441,  4445,
  4449,  4454,  4463,  4478,  4481,  4487,  4491,  4495,  4500,  4510,
  4516,  4522,  4531,  4535,  4539,  4553,  4556,  4567,  4596,  4599,
  4602,  4610,  4624,  4632,  4635,  4656,  4659,  4670,  4673,  4681,
  4689,  4735,  4740,  4745,  4749,  4753,  4760,  4764,  4768,  4773,
  4779,  4785,  4797,  4808,  4811,  4819,  4847,  4857,  4857,  4863,
  4872,  4888,  4896,  4899,  4904,  4907,  4916,  4919,  4927,  4939,
  4949,  4954,  4959,  4977,  4986,  4990,  4995,  5003,  5011,  5018,
  5032,  5054,  5057,  5058,  5059,  5062,  5066,  5070,  5078,  5085,
  5092,  5108,  5115,  5129,  5139,  5147,  5160,  5178,  5202,  5222,
  5240,  5243,  5251,  5258,  5265,  5269,  5273,  5277,  5281,  5290,
  5295,  5300,  5320,  5327,  5334,  5342,  5350,  5357,  5364,  5368,
  5376,  5384,  5391,  5437,  5443,  5447,  5452,  5457,  5460,  5461,
  5465,  5470,  5479,  5482,  5491,  5499,  5516,  5524,  5530,  5542,
  5586,  5590,  5593,  5599,  5605,  5616,  5618,  5619,  5620,  5621,
  5622,  5623,  5624,  5625,  5626,  5627,  5628,  5629,  5630,  5631,
  5632,  5633,  5634,  5635,  5636,  5637,  5639,  5641,  5642,  5643,
  5644,  5645,  5646,  5647,  5648,  5649,  5650,  5651,  5652,  5653,
  5654,  5655,  5656,  5657,  5658,  5659,  5660,  5661,  5662,  5663,
  5664,  5665,  5666,  5667,  5668,  5669,  5670,  5671,  5672,  5673,
  5674,  5675,  5676,  5677,  5678,  5679,  5682,  5685,  5686,  5687,
  5688,  5689,  5690,  5691,  5708,  5713,  5728
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tInclude","tConstant","tDefineConstant",
"tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin",
"tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor",
"tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct",
"tMHTimeIntegration","tGroup","tDefineGroup","tAll","tInSupport","tDefineFunction",
"tList","tListAlt","tConstraint","tRegion","tSubRegion","tRegionRef","tSubRegionRef",
"tFilter","tCoefficient","tValue","tTimeFunction","tBranch","tNode","tLoop",
"tNameOfResolution","tJacobian","tCase","tIntegration","tType","tSubType","tCriterion",
"tGeoElement","tNumberOfPoints","tMaxNumberOfPoints","tNumberOfDivisions","tMaxNumberOfDivisions",
"tStoppingCriterion","tFunctionSpace","tName","tBasisFunction","tNameOfCoef",
"tFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity",
"tEntityType","tEntitySubType","tNameOfConstraint","tFormulation","tQuantity",
"tNameOfSpace","tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham",
"tGlobalTerm","tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof","tJacNL","tNeverDt",
"tIn","tResolution","tDefineSystem","tNameOfFormulation","tNameOfMesh","tFrequency",
"tSolver","tOriginSystem","tDestinationSystem","tOperation","tOperationEnd",
"tSetTime","tDTime","tSetFrequency","tFourierTransform","tIf","tElse","tLanczos",
"tUpdate","tTimeLoopTheta","tTime0","tTimeMax","tTheta","tTimeLoopNewmark","tBeta",
"tGamma","tIterativeLoop","tNbrMaxIteration","tRelaxationFactor","tIterativeTimeReduction",
"tDivisionCoefficient","tChangeOfState","tChangeOfCoordinates","tSystemCommand",
"tPostProcessing","tNameOfSystem","tPostOperation","tNameOfPostProcessing","tUsingPost",
"tAppend","tPlot","tPrint","tWrite","tAdapt","tOnGlobal","tOnRegion","tOnElementsOf",
"tOnGrid","tOnCut","tOnPoint","tOnLine","tOnPlane","tOnBox","tWithArgument",
"tFile","tDepth","tDimension","tTimeStep","tHarmonicToTime","tFormat","tHeader",
"tFooter","tSkin","tSmoothing","tTarget","tSort","tIso","tNoNewLine","tFlag",
"tBreak","tHelp","tCpu","tDEF","'?'","tAND","tOR","tNOTEQUAL","tEQUAL","tAPPROXEQUAL",
"'<'","'>'","tLESSOREQUAL","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'",
"'-'","'*'","'/'","'%'","tCROSSPRODUCT","UNARYPREC","'!'","'^'","'#'","'$'",
"'{'","'}'","'['","']'","','","'('","')'","'.'","Stats","@1","ProblemDefinitions",
"@2","ProblemDefinition","Interactive","@3","Groups","@4","Group","@5","ReducedGroupRHS",
"@6","@7","GroupRHS","FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion",
"SuppListTypeForGroup","ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups",
"Comma","DefineDimension","MultipleIndex","Index","Functions","Function","DefineFunctions",
"Expression","@8","WholeQuantityExpression","@9","WholeQuantity","@10","@11",
"WholeQuantity_Single","@12","@13","@14","ArgumentsForFunction","RecursiveListOfQuantity",
"ParametersForFunction","JacobianMethods","JacobianMethod","JacobianMethodTerm",
"JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods","IntegrationMethod",
"IntegrationMethodTerm","IntegrationCases","IntegrationCase","IntegrationCaseTerm",
"QuadratureCases","QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint",
"Constraint","ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm",
"FunctionSpaces","BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions",
"BasisFunction","BasisFunctionTerm","OptionalParametersForBasisFunction","@15",
"@16","SubSpaces","SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
"GlobalQuantities","GlobalQuantity","GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS",
"ConstraintInFSTerm","Formulations","BracedFormulation","Formulation","FormulationTerm",
"DefineQuantities","DefineQuantity","DefineQuantityTerm","@17","@18","IndexInFunctionSpace",
"Equations","EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
"GlobalEquationTermTermTerm","LocalTerm","LocalTermTerm","@19","@20","GlobalTerm",
"GlobalTermTerm","@21","@22","TermOperator","Quantity_Def","Resolutions","BracedResolution",
"Resolution","ResolutionTerm","@23","DefineSystems","DefineSystem","DefineSystemTerm",
"ListOfFormulation","RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem",
"Operation","OperationTerm","@24","@25","PrintOperation","PrintOperationOptions",
"PrintOperationOption","TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark",
"TimeLoopNewmarkTerm","IterativeLoop","IterativeLoopTerm","IterativeTimeReduction",
"IterativeTimeReductionTerm","ChangeOfStates","ChangeOfState","ChangeOfStateTerm",
"PostProcessings","BracedPostProcessing","PostProcessing","PostProcessingTerm",
"PostQuantities","PostQuantity","PostQuantityTerm","SubPostQuantities","SubPostQuantity",
"SubPostQuantityTerm","@26","@27","PostOperations","BracedPostOperation","PostOperation",
"PostOperationTerm","SeparatePostOperation","@28","PostSubOperations","@29",
"PostSubOperation","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","@30","PrintOptions","PrintOption","ParsedStrings","ListOfExpression",
"RecursiveListOfExpression","ListOfDouble","RecursiveListOfDouble","DottedFExpr",
"Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   209,   208,   210,   211,   210,   212,   212,   212,   212,   212,
   212,   212,   212,   212,   212,   212,   212,   212,   212,   213,
   213,   213,   213,   213,   214,   213,   215,   216,   215,   217,
   217,   218,   217,   217,   217,   220,   221,   219,   219,   222,
   222,   223,   223,   224,   224,   225,   225,   225,   226,   227,
   227,   228,   228,   228,   229,   229,   229,   229,   229,   229,
   230,   230,   230,   231,   231,   232,   233,   233,   234,   235,
   235,   236,   236,   236,   236,   237,   237,   238,   238,   239,
   238,   241,   240,   242,   243,   244,   242,   242,   242,   242,
   242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
   242,   242,   242,   242,   242,   242,   242,   245,   245,   245,
   245,   245,   245,   246,   245,   247,   245,   245,   245,   248,
   245,   245,   245,   245,   245,   245,   245,   245,   249,   249,
   249,   250,   250,   251,   251,   251,   251,   252,   252,   253,
   253,   254,   254,   255,   255,   256,   256,   257,   257,   257,
   258,   258,   259,   259,   260,   260,   260,   261,   261,   262,
   262,   263,   263,   263,   264,   264,   265,   265,   266,   266,
   266,   266,   266,   266,   267,   267,   268,   268,   269,   269,
   270,   270,   270,   270,   270,   271,   271,   272,   272,   273,
   273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   274,   274,   275,   275,   276,   276,
   277,   277,   277,   277,   277,   277,   277,   278,   278,   279,
   279,   280,   280,   280,   280,   280,   280,   281,   282,   283,
   281,   284,   284,   285,   285,   286,   286,   287,   287,   288,
   288,   289,   289,   290,   290,   291,   291,   291,   292,   292,
   293,   293,   294,   294,   294,   294,   294,   295,   295,   296,
   296,   297,   297,   298,   298,   298,   298,   298,   299,   299,
   300,   300,   301,   301,   301,   301,   302,   301,   301,   303,
   301,   301,   301,   301,   301,   304,   304,   305,   305,   306,
   306,   306,   306,   307,   307,   308,   308,   308,   309,   309,
   310,   310,   310,   310,   311,   311,   313,   314,   312,   312,
   312,   312,   315,   315,   316,   317,   318,   316,   319,   319,
   319,   319,   319,   319,   319,   320,   320,   321,   321,   322,
   322,   323,   323,   324,   324,   324,   325,   324,   326,   326,
   327,   327,   328,   328,   328,   328,   328,   328,   328,   328,
   329,   329,   330,   330,   331,   331,   332,   332,   333,   333,
   334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
   334,   334,   334,   334,   334,   334,   334,   335,   334,   336,
   334,   334,   334,   337,   337,   338,   338,   339,   339,   339,
   340,   340,   341,   341,   341,   341,   341,   342,   342,   343,
   343,   343,   343,   343,   343,   344,   344,   345,   345,   345,
   345,   345,   346,   346,   347,   347,   347,   347,   347,   347,
   347,   347,   348,   348,   349,   349,   350,   350,   350,   350,
   350,   350,   351,   351,   352,   352,   353,   353,   354,   354,
   354,   354,   354,   355,   355,   356,   356,   357,   357,   358,
   358,   358,   359,   359,   361,   360,   360,   362,   360,   360,
   360,   363,   363,   364,   364,   365,   365,   366,   366,   366,
   366,   366,   368,   367,   369,   370,   369,   371,   371,   372,
   372,   373,   373,   373,   373,   374,   374,   375,   375,   375,
   375,   375,   376,   375,   375,   375,   375,   375,   375,   377,
   377,   378,   378,   378,   378,   378,   378,   378,   378,   378,
   378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
   378,   379,   379,   380,   380,   381,   381,   382,   382,   382,
   383,   383,   383,   383,   384,   384,   385,   385,   385,   385,
   385,   386,   386,   386,   386,   387,   387,   387,   387,   387,
   387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
   387,   387,   387,   387,   387,   387,   388,   388,   388,   388,
   388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
   388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
   388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
   388,   388,   388,   388,   388,   388,   389,   389,   389,   389,
   389,   389,   389,   389,   390,   390,   390
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     4,     5,     2,     0,     2,     0,     0,     3,     4,
     5,     0,     6,     5,     1,     0,     0,     7,     2,     1,
     2,     1,     1,     1,     1,     0,     3,     4,     1,     1,
     3,     0,     3,     4,     1,     3,     6,     1,     4,     3,
     0,     3,     6,     0,     1,     4,     0,     2,     3,     0,
     2,     5,     6,     7,     1,     0,     3,     4,     4,     0,
     2,     0,     2,     1,     0,     0,     7,     3,     3,     6,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     2,     2,     2,     3,     1,     3,
     2,     1,     2,     0,     5,     0,    11,     4,     4,     0,
     7,     6,     2,     2,     2,     2,     3,     2,     3,     2,
     3,     1,     3,     0,     3,     6,     6,     0,     4,     0,
     2,     3,     4,     0,     4,     0,     2,     3,     3,     4,
     0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
     2,     3,     3,     4,     0,     4,     0,     2,     3,     3,
     3,     3,     3,     3,     0,     2,     3,     1,     0,     2,
     3,     4,     3,     4,     5,     0,     4,     0,     2,     3,
     3,     3,     3,     3,     3,     7,     3,     3,     3,     3,
     3,     7,     7,     7,     0,     2,     3,     1,     0,     2,
     3,     4,     3,     4,     4,     4,     4,     0,     4,     0,
     2,     3,     3,     4,     4,     3,     3,     0,     0,     0,
    18,     0,     4,     0,     2,     3,     3,     1,     3,     0,
     3,     0,     4,     0,     2,     3,     3,     3,     0,     4,
     0,     2,     3,     5,     3,     3,     4,     0,     2,     3,
     1,     0,     2,     3,     4,     3,     4,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     0,     6,     3,     0,
     5,     3,     3,     3,     3,     0,     3,     0,     2,     4,
     4,     4,     4,     0,     2,     3,     3,     3,     0,     2,
     3,     3,     3,     3,     0,     2,     0,     0,     9,     3,
     3,     3,     0,     2,     3,     0,     0,     9,     0,     1,
     1,     1,     1,     1,     1,     4,     3,     0,     2,     3,
     1,     0,     2,     3,     4,     4,     0,     5,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     3,     3,
     2,     3,     0,     3,     1,     3,     0,     3,     0,     2,
     3,     3,     4,     4,     4,     4,     5,     5,     2,     7,
    11,     7,     7,     9,    11,    13,    15,     0,     7,     0,
     7,     7,     3,     1,     1,     0,     2,     3,     3,     2,
     0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
     3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
     4,     4,     0,     4,     0,     2,     3,     3,     3,     3,
     3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
     4,     3,     4,     0,     4,     0,     2,     3,     4,     0,
     5,     5,     0,     2,     0,     6,     3,     0,     4,     3,
     3,     0,     2,     3,     1,     0,     2,     3,     3,     3,
     3,     4,     0,     8,     0,     0,     3,     7,     7,     3,
     6,     1,     1,     1,     1,     0,     3,     1,     2,     2,
    24,     2,     0,    14,     8,    20,    29,    38,    12,     0,
     2,     3,     4,     4,     3,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
     2,     0,     2,     0,     3,     1,     3,     0,     1,     3,
     1,     1,     3,     3,     3,     6,     4,     4,     6,     9,
     5,     0,     3,     5,     5,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     6,     4,     4,     4,     4,     4,
     4,     6,     6,     6,     5,     2,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   616,   615,     0,    18,   542,    27,
   175,   138,   151,   205,    70,   258,   328,   433,     0,   462,
     0,    20,    24,     0,     0,    26,   608,   607,   614,     0,
   609,   610,   611,   612,   613,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   567,     0,    64,    28,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    21,     0,     0,   538,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   569,   570,     0,   532,   531,     0,   537,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   606,     0,     0,    65,     0,     6,     0,
   179,     8,   176,   178,   140,     9,   153,    10,   209,    11,
   206,   208,     0,     0,     7,    71,    75,   262,    12,   259,
   261,   332,    13,   329,   331,   437,    14,   434,   436,   473,
   466,    15,   463,   465,     0,    22,   486,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   568,     0,   583,   584,   582,   581,   577,
   578,   579,   580,   572,   571,   573,   574,   575,   576,     0,
   541,   543,     0,     0,    29,    35,     0,     0,     0,     0,
     0,    76,     0,     0,     0,     0,     0,    23,     0,     0,
   488,     0,     0,     0,     0,     0,     0,     0,     0,   500,
   500,   585,   586,   587,   588,   589,   590,   591,   592,   593,
   594,     0,   596,   597,   598,   599,   600,   601,     0,     0,
     0,     0,   539,   534,   533,     0,   535,     0,     0,     0,
     0,     0,     0,     0,    61,     0,     0,     0,   177,   180,
     0,     0,   139,   141,     0,    80,     0,   152,   154,     0,
     0,     0,     0,     0,     0,   207,   210,    67,    42,     0,
     0,    40,     0,     0,    64,     0,     0,     0,     0,   260,
   263,     0,     0,   337,   330,   333,     0,     0,     0,     0,
   435,   438,   475,     0,     0,     0,     0,     0,   464,   467,
     0,   484,   485,   482,   483,   480,     0,   489,   490,    80,
   492,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   605,   617,   545,   544,   614,     0,
     0,     0,    32,     0,    64,     0,   186,     0,     0,   144,
     0,   158,     0,     0,     0,    82,     0,   249,     0,     0,
   218,   232,   242,     0,    41,    55,    58,    52,    39,    50,
    80,     0,    36,     0,     0,     0,     0,   269,   288,     0,
   339,     0,     0,   444,    67,     0,   476,     0,   475,     0,
     0,     0,   487,   486,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   501,     0,   595,   602,   603,   604,     0,
     0,    30,     0,    69,     0,    43,     0,     0,     0,   186,
     0,   183,   181,     0,     0,     0,   142,     0,     0,     0,
   156,    81,     0,   155,     0,   213,   211,     0,     0,     0,
     0,    68,     0,     0,    64,     0,    80,     0,    72,    77,
   266,   264,     0,     0,     0,   334,     0,     0,   359,   439,
     0,     0,     0,   442,   474,     0,   468,   476,   469,   471,
   470,     0,     0,    80,     0,     0,     0,     0,     0,   478,
   528,     0,     0,     0,     0,   528,     0,   522,   522,   522,
   506,     0,     0,     0,     0,   521,   479,   540,   536,    66,
     0,    31,    34,    62,     0,   188,   184,   182,   146,   143,
   160,   157,     0,     0,   614,   546,   547,   548,   549,   550,
   551,   552,   553,   554,   555,   556,   557,   558,   559,   560,
   561,   562,   563,   564,   565,     0,   120,     0,     0,   116,
   114,     0,     0,     0,     0,     0,     0,     0,     0,    83,
    84,   112,     0,   109,   251,   217,   212,   220,   214,   234,
   215,   244,   216,    56,     0,    60,     0,    51,     0,    73,
     0,    45,    37,    44,   265,   271,   267,     0,     0,     0,
     0,   268,   289,   335,   341,   336,     0,   440,   446,   443,
   441,   477,   472,   481,     0,     0,     0,     0,     0,     0,
     0,     0,   518,   529,   515,     0,     0,   502,   505,   513,
   514,   508,   509,   512,   510,   511,   507,   517,   516,     0,
   519,    33,     0,   185,     0,     0,     0,    78,    79,   111,
     0,     0,     0,     0,     0,     0,     0,   106,   105,   107,
   128,   126,   123,   125,   124,     0,     0,    85,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   113,   134,     0,     0,
     0,     0,     0,    59,     0,    53,    74,    64,     0,   305,
   305,   313,   294,     0,     0,    80,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   378,   380,     0,
   338,   360,     0,     0,    80,     0,     0,     0,     0,     0,
     0,   503,   504,   523,     0,     0,     0,     0,     0,     0,
    80,    80,    80,    80,     0,     0,     0,    80,   187,   189,
     0,     0,   145,   147,     0,     0,     0,   159,   161,     0,
    82,     0,     0,     0,    82,     0,     0,   327,   108,     0,
   103,   104,   101,   100,   102,    96,    97,    98,    99,    92,
    93,    88,    91,    94,    89,    95,   127,   130,     0,   132,
     0,     0,   110,     0,     0,     0,     0,     0,   250,   252,
     0,     0,     0,     0,     0,   219,   221,     0,     0,   233,
   235,     0,     0,     0,   243,   245,     0,    54,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   270,   280,
   272,   319,   319,   319,     0,     0,     0,     0,     0,   528,
     0,     0,     0,   340,   342,     0,     0,    80,     0,     0,
     0,    80,     0,     0,   391,     0,   398,     0,   406,   413,
     0,     0,     0,     0,   369,     0,     0,   445,   447,     0,
     0,     0,     0,     0,     0,     0,   530,   520,    63,     0,
     0,     0,     0,    80,     0,    80,     0,     0,     0,     0,
     0,     0,    80,     0,     0,     0,   134,   165,     0,     0,
   118,     0,   119,     0,     0,     0,    82,   326,     0,   129,
   131,     0,     0,     0,     0,     0,     0,     0,    49,     0,
    67,     0,     0,   228,     0,     0,     0,   238,   240,     0,
     0,     0,     0,    57,    38,     0,     0,     0,     0,     0,
     0,     0,     0,    67,     0,     0,     0,    82,     0,     0,
   320,   321,   322,   323,   324,   325,     0,   290,   306,     0,
   291,     0,   292,   314,     0,     0,     0,   299,   293,   295,
     0,     0,    67,   353,     0,     0,     0,     0,   355,   357,
     0,     0,   361,     0,     0,   362,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   383,   524,
   524,   450,     0,     0,     0,     0,   495,     0,     0,     0,
   191,   192,   197,   198,     0,   201,     0,   200,   194,   193,
    64,   195,   190,     0,   199,   149,   148,     0,     0,   162,
   163,     0,     0,     0,   115,     0,    86,   133,     0,     0,
   135,   253,     0,   255,   256,     0,   222,   223,     0,     0,
     0,   226,   227,   236,    64,   237,   247,   246,   248,    67,
    47,   284,   283,   276,   274,   275,   273,   277,   279,   285,
   282,     0,     0,     0,     0,   307,     0,   316,     0,     0,
     0,   344,   343,   351,    64,   345,   346,   349,   350,    64,
   347,   348,     0,     0,    80,     0,     0,     0,    80,     0,
    80,     0,     0,    80,   363,   392,     0,     0,    80,     0,
     0,     0,     0,   364,   399,     0,     0,     0,     0,    80,
     0,   365,   407,     0,     0,     0,     0,     0,     0,     0,
     0,   366,   414,    80,   385,    80,   386,   384,   386,     0,
   448,     0,   528,     0,     0,     0,     0,    80,    80,     0,
    80,   150,   167,   164,     0,    90,     0,   122,     0,     0,
     0,     0,   257,   224,     0,   225,   239,     0,    48,   286,
     0,   311,   312,   310,    82,   315,    82,   296,   297,     0,
     0,     0,     0,   298,   300,   352,     0,   356,     0,   367,
   368,     0,     0,   359,     0,     0,   359,     0,     0,     0,
     0,     0,   359,     0,     0,     0,     0,     0,     0,     0,
   359,     0,     0,     0,     0,     0,   359,   359,     0,     0,
   423,     0,     0,   526,     0,     0,     0,     0,     0,   449,
     0,   493,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   121,    82,    87,     0,     0,   254,     0,   241,     0,
     0,   281,   308,   317,     0,     0,     0,     0,   354,   358,
     0,   528,     0,   528,     0,     0,   395,   393,   394,   396,
    80,     0,   402,   400,   401,   403,   404,    80,   410,     0,
   408,   409,   411,   417,   419,     0,     0,   415,   416,     0,
   418,     0,   525,    80,     0,   528,   387,     0,   453,   453,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   166,   168,     0,   137,
   136,     0,     0,   278,     0,     0,   301,   302,   303,   304,
   372,     0,   370,     0,   373,   397,     0,   405,     0,   412,
   421,   422,   425,   420,   382,   527,   379,     0,   528,   390,
   381,   319,   319,   499,   528,     0,     0,     0,     0,   204,
   203,   196,   202,     0,     0,     0,     0,     0,     0,    82,
     0,   287,    82,     0,     0,     0,     0,    80,     0,     0,
   388,   389,     0,     0,     0,   458,   452,     0,   454,   451,
     0,     0,     0,     0,     0,   169,   170,   171,   172,   173,
   174,     0,     0,     0,     0,   374,   359,     0,     0,     0,
     0,     0,    80,     0,     0,     0,   424,   426,     0,     0,
     0,     0,   455,   494,     0,     0,     0,     0,   117,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   460,   461,   457,     0,    82,     0,     0,     0,
     0,   229,   309,   318,   371,   375,   359,     0,   427,   430,
   431,   428,   429,   432,   459,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
   359,   456,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   230,   377,     0,   496,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    67,     0,     0,     0,
     0,   491,     0,     0,     0,     0,     0,   231,     0,     0,
     0,     0,     0,     0,   497,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   498,     0,     0,     0
};

static const short yydefgoto[] = {  1556,
     1,     2,     3,    19,    20,    21,    85,   150,   235,   455,
   322,   488,   718,   323,   324,   613,   839,   940,   409,   485,
   410,   385,   148,   293,   405,   294,    90,   166,   325,   395,
   396,   472,   473,   590,   790,  1179,   591,   676,   675,   672,
   707,   811,   813,    87,   238,   304,   466,   666,   774,    88,
   239,   309,   468,   667,   779,  1049,  1261,  1338,    86,   153,
   237,   300,   461,   665,   770,    89,   161,   240,   317,   479,
   710,   827,  1071,  1491,  1519,   480,   711,   831,   950,  1075,
   481,   712,   836,   475,   709,   820,    91,   170,   243,   331,
   494,   719,   851,  1190,   968,  1271,   495,   623,   855,   990,
  1101,  1205,   852,   979,  1195,  1345,   854,   984,  1197,  1346,
   980,   592,    92,   174,   244,   336,   422,   498,   724,   865,
   995,  1105,  1001,  1110,   627,   742,   883,   884,  1157,  1246,
  1317,  1012,  1126,  1014,  1135,  1016,  1143,  1017,  1153,  1310,
  1400,  1438,    93,   178,   245,   342,   502,   743,   889,  1160,
  1372,  1409,  1467,  1442,    95,   183,   247,   350,    22,   246,
   427,   506,    46,   188,   357,   250,   260,  1322,   367,   444,
   654,  1158,  1245,   643,   124,   125,    23,    84,   593,   644,
    82,    28
};

static const short yypact[] = {-32768,
-32768,    38,  2321,  -154,   194,  -155,  -130,  -124,   -69,   -64,
   -29,   -17,    -4,     6,    16,    92,   391,   304,-32768,-32768,
    66,-32768,-32768,   900,-32768,-32768,    50,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   190,-32768,
   400,-32768,-32768,   134,   145,-32768,-32768,-32768,-32768,   352,
-32768,-32768,-32768,-32768,-32768,   167,   195,   204,   210,   222,
   233,   238,   246,   252,   257,   262,   267,   284,   291,   312,
   319,   324,   339,   347,   351,   356,  1846,  1846,  1846,  1846,
   354,-32768,   194,   278,   184,    20,    28,   369,    24,    21,
    30,    60,   141,   501,   149,   423,-32768,   550,   550,-32768,
  1846,  1846,  1846,  1846,  1846,  1846,  1846,  1846,  1846,  1846,
  1846,  1846,  1846,  1846,  1846,  1846,  1846,  1846,  1846,  1846,
   580,   411,   411,   -44,-32768,  2132,  2265,-32768,  1846,  1846,
  1846,  1846,  1846,  1846,  1846,  1846,  1846,  1846,  1846,  1846,
  1846,  1846,  1846,-32768,   386,   588,-32768,   597,-32768,   175,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -102,   410,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   607,-32768,   417,  1456,  1456,  3252,
  3279,  3306,  3333,  3360,  3387,  3414,  3441,  3468,  3495,  2323,
  3522,  3549,  3576,  3603,  3630,  3657,  2345,  2367,  2389,   426,
   627,  1846,  1423,-32768,  2157,  2176,  2176,  4514,  4514,   633,
   633,   633,   633,   280,   280,   411,   411,   411,   411,   194,
-32768,   473,  -125,   463,-32768,-32768,   282,   237,   236,   327,
    10,-32768,   377,   349,   707,   393,   279,-32768,   125,   455,
-32768,   125,   125,   176,   505,   514,   542,   544,   548,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1846,-32768,-32768,-32768,-32768,-32768,-32768,  1846,  1846,
  1846,   658,-32768,-32768,  2132,  1846,  4477,  1846,   560,  1518,
   990,  1553,   590,   592,-32768,    96,   773,   779,-32768,-32768,
   593,   781,-32768,-32768,   599,   114,   792,-32768,-32768,   606,
   803,   805,   613,   618,   620,-32768,-32768,   305,-32768,    18,
   645,-32768,   624,   630,   394,   828,   829,   648,   650,-32768,
-32768,   846,   655,-32768,-32768,-32768,   855,   661,   857,   862,
-32768,-32768,-32768,   864,   744,   945,   194,   951,-32768,-32768,
   754,-32768,-32768,-32768,-32768,-32768,   956,   806,-32768,   114,
-32768,   764,  1846,   765,   766,   767,   434,   439,  3684,  3711,
  3738,  3765,   770,  3792,  4477,-32768,-32768,  4477,   776,   978,
  1846,  3927,-32768,   133,   451,   787,-32768,   983,    59,-32768,
   984,-32768,   790,   795,   991,-32768,   992,-32768,   993,   135,
-32768,-32768,-32768,   800,-32768,  1020,   834,-32768,-32768,-32768,
   114,   853,-32768,  1024,  1030,  1033,   165,-32768,-32768,   171,
-32768,   848,   179,-32768,   851,  1045,   856,  1054,-32768,  1055,
  1057,  1059,-32768,   417,  1063,   865,  1846,  2411,  1846,  1846,
  1846,  1071,  2270,-32768,  1080,-32768,-32768,-32768,-32768,  1081,
  1846,-32768,  3952,-32768,   133,-32768,  1084,  1085,  1065,-32768,
   461,-32768,-32768,   895,  1088,   499,-32768,   502,  1846,  1092,
-32768,-32768,  1130,-32768,   507,-32768,-32768,  1094,   519,   525,
   528,-32768,     7,  1617,   -19,  1095,   114,    14,-32768,-32768,
-32768,-32768,  1097,   532,   509,-32768,  1103,   534,-32768,-32768,
  1107,   537,  1109,-32768,-32768,    66,-32768,   917,-32768,-32768,
-32768,   915,   922,   114,  2433,  1846,  2455,  2477,  2499,-32768,
  1652,  1118,   301,  1846,  1846,  1652,  1846,  1121,-32768,-32768,
-32768,  1846,  1846,  1123,  1749,-32768,-32768,-32768,  4477,-32768,
  1122,-32768,-32768,   931,   553,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  3819,   933,   313,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   930,-32768,   971,   974,-32768,
-32768,  1172,  1130,  1130,  1130,  1176,   381,  1173,  1130,  4499,
   985,   979,   979,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1846,-32768,  3977,-32768,    68,-32768,
  1177,-32768,-32768,-32768,-32768,-32768,-32768,   987,   989,   996,
   997,-32768,-32768,-32768,-32768,-32768,    22,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1846,   988,  1846,  2521,  1846,  1846,
  1846,  1846,-32768,  4477,-32768,   194,   194,-32768,  4477,  4477,
-32768,  4477,-32768,  1179,  1179,  1179,  4477,  4477,-32768,  1846,
  4477,-32768,  1846,-32768,   569,    84,   335,-32768,-32768,-32768,
   998,  1011,   998,  1130,  1018,  1019,  1007,  1002,  1002,  1002,
-32768,-32768,-32768,-32768,-32768,    25,  1647,-32768,  1130,  1130,
  1130,  1130,  1130,  1130,  1130,  1130,  1130,  1130,  1130,  1130,
  1130,  1130,  1130,  1130,  1190,   860,-32768,  1000,   409,   831,
   -31,   353,  3846,-32768,   517,-32768,-32768,   568,   496,-32768,
-32768,-32768,-32768,   584,    13,   112,  1062,  1074,  1075,  1076,
  1079,   380,   389,  1026,  1070,  1093,  1276,-32768,-32768,  1277,
-32768,-32768,    -7,  2543,   114,  2565,  1846,  2587,  2609,  2631,
     0,-32768,-32768,-32768,   150,  4002,   125,   125,   125,   125,
   118,   277,   114,   114,  1083,  1285,  1289,   308,-32768,-32768,
    53,  1293,-32768,-32768,  1099,  1296,  1297,-32768,-32768,  1101,
-32768,  1102,  2295,  1311,-32768,  1115,  1117,-32768,-32768,  1130,
  2221,  2221,  1507,  1507,  1507,  1175,  1175,  1175,  1175,   382,
   382,   229,   229,   229,  1002,  1002,-32768,-32768,  1119,  4499,
   572,   653,-32768,  1318,   128,   128,  1320,  1322,-32768,-32768,
  1326,  1333,  1334,   125,   125,-32768,-32768,  1335,    97,-32768,
-32768,  1339,  1340,  1341,-32768,-32768,  1344,-32768,  1145,   146,
  1345,  1346,   316,  1351,  1352,  1355,  1357,   125,-32768,-32768,
-32768,   737,   973,  1391,   -27,  1356,  1365,    98,   194,  1652,
   194,   115,  1369,-32768,-32768,  1342,  1371,   114,  1370,  1374,
  1375,   114,  1382,  1387,-32768,  1846,-32768,  1846,-32768,-32768,
   125,  1386,  1197,  1199,-32768,  1204,  1400,-32768,-32768,  1846,
  1206,  1846,  4027,  1846,  1846,  1846,-32768,-32768,-32768,  1399,
  1404,  1405,  1406,   114,  1407,   114,  1408,  1410,  1411,  1416,
  1424,  1426,   114,  1427,  1428,  1454,  1000,-32768,  1455,  1458,
-32768,  1226,-32768,  1130,  1259,  1265,-32768,-32768,  1025,-32768,
-32768,  1130,  1267,  1268,   243,  1465,  1388,  1469,-32768,  1470,
   851,  1471,   183,  1279,  1474,  1475,  1476,-32768,-32768,  1477,
  1479,  1499,  1500,-32768,-32768,  1503,    18,  1502,  1504,  1506,
  1511,  1512,  1519,   851,  1521,  1523,  1552,-32768,  1509,  1510,
-32768,-32768,-32768,-32768,-32768,-32768,   125,-32768,-32768,  1358,
-32768,   125,-32768,-32768,  1359,  1557,  1558,-32768,-32768,-32768,
  1584,  1589,   851,-32768,  1607,  1608,  1609,  1610,-32768,-32768,
  1611,  1616,-32768,  1361,  1362,-32768,  1420,  1425,  1392,  1457,
  1459,   929,  2653,  1208,  2675,   326,  1228,  1460,-32768,   116,
   116,-32768,  1620,  4052,  1462,  4077,-32768,  4102,  4127,  4152,
-32768,-32768,-32768,-32768,  1490,-32768,  1491,-32768,-32768,-32768,
  1498,-32768,-32768,  1513,-32768,-32768,-32768,  1653,   556,-32768,
-32768,   125,  3231,  1846,-32768,  1516,-32768,  4499,  1654,   125,
-32768,-32768,  1707,-32768,-32768,  1706,-32768,-32768,  1709,  1631,
  1715,-32768,-32768,-32768,   264,-32768,-32768,-32768,-32768,   851,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1524,  1719,  1721,  1722,-32768,  1723,-32768,  1724,  1725,
   328,-32768,-32768,-32768,   287,-32768,-32768,-32768,-32768,   362,
-32768,-32768,  1728,  1729,   114,  1732,  1538,  1846,   114,  1539,
   114,  1846,  1846,   114,-32768,-32768,  1846,  1540,   114,  1846,
  1846,  1846,  1846,-32768,-32768,  1846,  1846,  1541,  1846,   114,
  1846,-32768,-32768,  1846,  1737,  1544,  1545,  1846,  1846,  1546,
  1846,-32768,-32768,   114,-32768,   114,-32768,-32768,-32768,    62,
-32768,  1547,  1652,  1548,  1550,  1555,  1556,   114,   114,  1754,
   114,-32768,-32768,-32768,  1585,-32768,  2697,-32768,  1130,  1587,
  1590,  1752,-32768,-32768,  1755,-32768,-32768,  1787,-32768,  1592,
  1788,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   998,
   998,   998,   125,-32768,-32768,-32768,  1796,-32768,  1801,-32768,
-32768,  1612,  1630,-32768,  2719,  1618,-32768,  1807,   762,   791,
  1816,  2741,-32768,  1828,  1082,  1205,  1619,  1784,  2763,  1813,
-32768,  1840,  1836,  1877,  1899,  1838,-32768,-32768,  1923,  1945,
-32768,  1971,  1643,-32768,   367,   577,   586,  1655,  1656,-32768,
  1846,-32768,  1846,  1846,  1846,  1846,  1651,  1682,  1657,  1683,
  1068,-32768,-32768,  4499,  1686,  1687,-32768,  1882,-32768,  1885,
  1884,-32768,-32768,-32768,  1886,  1887,  1888,  1889,-32768,-32768,
  1891,  1652,   172,  1652,  1895,   207,-32768,-32768,-32768,-32768,
   114,   245,-32768,-32768,-32768,-32768,-32768,   114,-32768,   594,
-32768,-32768,-32768,-32768,-32768,   628,  1170,-32768,-32768,   591,
-32768,  1900,-32768,   114,  1901,  1220,-32768,  1903,-32768,-32768,
  4177,  1688,  2785,  2807,  2829,  2851,  1904,  1906,  1907,  1909,
  1912,  1846,  1846,  1846,  1846,  1846,-32768,-32768,  1716,-32768,
-32768,  1833,  1720,-32768,  1718,  1730,-32768,-32768,-32768,-32768,
-32768,  1735,  1804,  1736,-32768,-32768,  1738,-32768,  1739,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   194,  1652,-32768,
-32768,   981,  1401,-32768,  1652,  1846,  1846,  1846,  1846,-32768,
-32768,-32768,-32768,  1918,  1993,  2015,  2037,  2064,  2086,-32768,
  1921,-32768,-32768,   998,  1939,  1748,  1846,   114,  1846,   395,
-32768,-32768,  1948,  1951,  1952,-32768,-32768,  1756,-32768,-32768,
  1765,  2873,  2895,  2917,  2939,-32768,-32768,-32768,-32768,-32768,
-32768,  1768,  1772,  1776,  1777,-32768,-32768,  3873,  1781,  2961,
  1980,  1846,   114,  1981,   125,  1983,-32768,-32768,  1982,  1988,
  1994,   125,-32768,-32768,  1846,  1846,  1846,  1846,-32768,  2000,
  2001,  2002,  1588,  2005,  1827,  1846,  2006,  2110,  2007,  2009,
  2021,  2027,-32768,-32768,-32768,  2028,-32768,  4202,  4227,  4252,
  4277,-32768,-32768,-32768,-32768,-32768,-32768,  3900,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1837,  1839,  1842,  1841,  1845,
  2003,  1782,  1847,  2041,  1846,  1849,  1846,  1846,   125,-32768,
-32768,-32768,  2983,  1846,  3005,  3027,  2043,  1814,  1846,  4302,
  1846,  1846,-32768,-32768,  3049,-32768,  3071,  3093,  1947,  1846,
  1846,  1846,  2048,  4327,  4352,  4377,   851,  1858,  1863,  1865,
  2065,-32768,  1873,  1846,  1880,  1846,  3115,-32768,  3137,  1846,
  1846,  3159,  4402,  1846,-32768,  4427,  1893,  1898,  1846,  3181,
  1846,  3203,  1846,  4452,-32768,  2087,  2095,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -250,-32768,-32768,  -241,   -11,-32768,-32768,  1246,  -481,-32768,
  -565,-32768,  -323,  -386,  -416,-32768,-32768,-32768,-32768,  -312,
-32768,  -761,-32768,  -420,-32768,-32768,-32768,-32768,-32768,-32768,
  1517,-32768,  1182,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1645,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1390,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -849,  -549,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768, -1174,-32768,-32768,-32768,  1098,   959,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   807,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1703,-32768,  1627,  2040,-32768,  1710,  1956,-32768,  1892,-32768,
   286,-32768,-32768,  -522,  -614,  1929,  1508,-32768,-32768,   -24,
  -457,   -82
};


#define	YYLAST		4712


static const short yytable[] = {    81,
   145,   415,   465,   651,   985,   670,   614,   351,   503,   604,
   358,   359,   361,   478,   318,   594,   406,   866,   407,   922,
   406,    24,   407,   926,     4,   163,   725,   751,     4,   787,
   493,     6,     6,   497,     4,     6,   501,    -2,   986,  1283,
   380,     6,  1286,   716,   828,   755,    29,   436,  1292,   886,
   291,   829,   122,   123,   126,   127,  1300,   318,   612,   987,
   319,   459,  1306,  1307,     4,   463,  1248,   164,   887,    30,
   406,     6,   407,    24,   292,    31,   190,   191,   192,   193,
   194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
   204,   205,   206,   207,   208,   209,    39,   915,   486,   241,
   386,   948,   993,   319,   215,   216,   217,   218,   219,   220,
   221,   222,   223,   224,   225,   226,   227,   228,   229,   999,
  1155,   780,   393,   782,   393,   594,   594,   594,   393,   318,
    32,   594,   456,   457,   771,    33,   726,   456,   727,   728,
   729,   477,   730,   731,   732,     4,   772,   289,   733,   838,
   939,   734,     6,     4,   735,  1249,   211,   736,   737,   212,
     6,   609,   678,   679,   680,  1056,   738,   739,   687,   830,
    34,   492,   988,   989,   611,   319,   725,   496,   319,   233,
   318,   608,    35,   319,   147,   500,     6,   285,   287,  1068,
   394,   956,   394,   888,   740,    36,   394,   935,    25,    26,
   897,   636,    27,   212,   541,    37,  1092,   320,   605,    44,
    45,   725,   321,   408,   867,    38,   594,   408,   234,   151,
   152,   165,   741,   159,   160,   788,   319,   155,   156,   168,
   169,   594,   594,   594,   594,   594,   594,   594,   594,   594,
   594,   594,   594,   594,   594,   594,   594,   369,   594,   725,
   320,    83,  1453,   783,   370,   371,   372,   715,   464,   172,
   173,   374,  1250,   375,   431,   378,    81,   382,   791,   792,
   793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
   803,   804,   805,   806,   773,   810,   726,   393,   727,   728,
   729,    40,   730,   731,   732,   387,   949,   994,   733,   305,
   301,   734,  1492,   306,   735,    25,    26,   736,   737,    27,
    43,   307,   302,   868,  1000,  1156,   738,   739,   393,   904,
   960,   726,   320,   727,   728,   729,  1508,   730,   731,   732,
   320,    94,   594,   733,   464,    98,   734,   997,   438,   735,
   176,   177,   736,   737,   740,   296,    99,   297,   181,   182,
   898,   738,   739,   212,   344,   394,   453,   298,   100,   726,
   128,   727,   728,   729,   464,   730,   731,   732,   101,   929,
   464,   733,  1353,   320,   734,   360,   310,   735,   464,   740,
   736,   737,   464,   682,   149,   683,   394,  1200,  1201,   738,
   739,   345,   311,  1137,   840,    41,   102,    42,   775,   961,
   776,   777,   312,   313,    96,   103,    97,  1356,   314,   962,
   315,   104,   515,   869,   517,   518,   519,   740,   832,   346,
  1202,   347,   703,   105,   332,   704,   539,   185,   833,   186,
   834,  1203,   891,  1273,   106,  1274,   308,   303,  1138,   107,
   648,   348,   326,  1061,   553,  1358,   212,   108,   905,   907,
   908,   909,   327,   109,   333,   914,  1139,  1140,   110,   607,
  1431,   334,  1432,   111,  1187,   328,   594,   147,   112,   329,
   140,   141,   142,  1433,   594,  1081,   143,   144,   906,   349,
   146,   147,   299,  1434,   646,   113,   814,  1206,   647,   815,
   147,   638,   114,   816,   817,   818,   684,  1141,  1435,   649,
   650,  1339,   652,  1053,   404,   180,   -43,   657,   658,   913,
   661,  1058,   588,   115,  -566,   900,   901,   902,   903,   406,
   116,   407,  1408,  1408,  1066,   117,  1142,   316,  1204,   916,
   129,   130,   131,   132,   133,   778,   134,   135,   136,   137,
   118,   685,   138,   139,   140,   141,   142,  1088,   119,   335,
   143,   144,   120,   835,   187,  1005,  1069,   121,   841,  1009,
   842,   843,  1208,   752,   753,   147,  1436,  1313,   157,   158,
  1314,   844,   700,   701,   702,   703,  1104,   330,   704,   875,
   713,   876,   945,   946,   210,   845,   846,   847,   877,   230,
   878,  1035,   343,  1037,   231,  1437,   414,   147,   725,   848,
  1044,   232,   618,   619,   620,   621,   967,   143,   144,   819,
   744,   242,   746,   248,   748,   749,   750,   126,   249,   757,
   758,   759,   760,   761,   762,   763,   764,   765,  1422,   282,
   766,  1424,   725,   283,   767,   126,   442,   443,   756,  1018,
  1252,   445,   443,   352,   353,   354,   355,   768,   290,   856,
  1275,  1276,  1277,   458,   147,    47,    48,    49,   356,   857,
   546,   547,   373,  1189,   295,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
   858,   859,   860,   861,   862,   863,   849,   850,   549,   550,
   933,   551,   552,   934,   362,  1486,   595,   596,   726,   622,
   727,   728,   729,   363,   730,   731,   732,  1170,   598,   599,
   733,   594,   893,   734,   600,   601,   735,   602,   603,   736,
   737,   616,   617,   625,   626,  1095,   629,   630,   738,   739,
  1097,   364,   726,   365,   727,   728,   729,   366,   730,   731,
   732,  1188,   546,   664,   733,  1173,  1174,   734,  1264,  1352,
   735,  1354,   376,   736,   737,   383,   740,   384,  1288,   769,
   -46,   147,   738,   739,   931,   932,   996,   388,   998,  1315,
  1316,  1207,   337,   389,   864,   391,  1209,   126,  1318,  1316,
  1363,  1364,   390,  1370,  1360,   338,   397,  1289,   392,   969,
   740,   970,  1212,   937,   938,   398,  1216,   399,  1218,   400,
  1175,  1221,   401,   339,   655,   656,  1224,   402,  1181,   403,
   411,   138,   139,   140,   141,   142,   412,  1233,  1361,   143,
   144,   413,   416,   417,   971,   972,   973,   974,   975,   976,
   977,  1243,    77,  1244,  1425,   340,  1402,   418,    78,   419,
   420,  1013,  1411,  1015,   421,  1257,  1258,    80,  1260,   423,
   424,   425,    47,    48,   555,  1024,   426,  1026,   428,  1028,
  1029,  1030,    51,    52,    53,    54,    55,   556,   557,   558,
   559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
   569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
   579,   580,    47,    48,    49,    50,   821,   341,   822,   823,
   824,   825,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,   978,   129,   130,
   131,   132,   133,   429,   134,   135,   136,   137,    76,   430,
   138,   139,   140,   141,   142,   432,   433,   581,   143,   144,
   434,  1278,   435,   437,   439,   440,   441,   129,   130,   131,
   132,   133,   450,   134,   135,   136,   137,   -43,  1357,   138,
   139,   140,   141,   142,   452,  1359,   460,   143,   144,   462,
   467,   469,    47,    48,   379,    50,   470,   471,   474,   476,
   482,  1366,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,   483,   487,  1177,
   489,   826,  1057,   484,   490,   969,  1450,   970,    76,   491,
   319,  1120,   582,  1403,  1121,  1404,  1405,   499,   583,   584,
   404,   504,  1122,  1123,  1124,   585,   505,   586,   587,   588,
   507,   509,   808,   510,   589,   511,   809,   513,   514,   544,
   971,   972,   973,   974,   975,   976,   977,   520,   971,   972,
   973,   974,   975,   976,  1406,  1429,   537,   538,  1294,    77,
   542,   543,   381,  1215,   548,    78,   554,  1219,  1220,    79,
   597,   610,  1222,   615,    80,  1225,  1226,  1227,  1228,   624,
  1531,  1229,  1230,   628,  1232,   631,  1234,   633,   634,  1235,
  1459,   635,   645,  1239,  1240,   653,  1242,   659,   662,  1125,
   663,   671,    47,    48,   555,   669,  1331,  1332,  1333,  1334,
  1335,  1336,    51,    52,    53,    54,    55,   556,   557,   558,
   559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
   569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
   579,   580,   673,   981,   725,   674,   677,   686,   681,    77,
   706,  1407,   705,   717,   754,    78,   720,   320,   721,    79,
   786,   745,   807,  1461,    80,   722,   723,   588,   704,   812,
  1466,   688,   689,   690,   691,   692,   693,   694,   695,   696,
   697,  1295,   781,   698,   699,   700,   701,   702,   703,   784,
   785,   704,    47,    48,    49,   879,  1321,   581,  1323,  1324,
  1325,  1326,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  1507,   129,   130,
   131,   132,   133,   870,   134,   135,   136,   137,  1337,   880,
   138,   139,   140,   141,   142,   871,   872,   873,   143,   144,
   874,   882,   910,   885,   726,  1401,   727,   728,   729,   911,
   730,   731,   732,   912,   881,  1144,   733,   917,   918,   734,
   919,   920,   735,   921,   923,   736,   737,  1385,  1386,  1387,
  1388,  1389,   582,   925,   738,   739,   927,   928,   583,   584,
  1128,   930,   936,  1129,   939,   585,   941,   586,   587,   588,
   942,  1130,  1131,  1145,   589,  1132,  1133,   943,   944,   947,
  1146,  1147,   740,   951,   952,   953,   954,   955,  1003,   958,
   959,  1412,  1413,  1414,  1415,   963,   964,   965,  1148,   966,
   991,  1149,  1150,   698,   699,   700,   701,   702,   703,   992,
  1362,   704,  1428,  1002,  1430,  1004,  1006,  1368,  1007,  1008,
  1369,   129,   130,   131,   132,   133,  1010,   134,   135,   136,
   137,  1011,  1019,   138,   139,   140,   141,   142,  1020,  1151,
  1021,   143,   144,  1022,  1023,  1031,  1025,  1458,  1134,    77,
  1032,  1033,  1034,  1036,  1038,    78,  1039,  1040,  1041,   642,
  1468,  1469,  1470,  1471,    80,    47,    48,    49,  1152,  1052,
  1042,  1478,  1043,  1045,  1046,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
  1047,  1050,  1054,  1403,  1051,  1404,  1405,  1055,  1059,  1060,
  1503,  1062,  1505,  1506,  1063,  1064,  1065,  1067,  1070,  1510,
  1072,  1073,  1074,  1076,  1515,  1077,  1517,  1518,   971,   972,
   973,   974,   975,   976,   982,  1524,  1525,  1526,   971,   972,
   973,   974,   975,   976,  1406,  1078,  1079,  1080,  1082,  1537,
  1083,  1539,  1084,  1093,  1094,  1542,  1543,  1085,  1086,  1546,
    47,    48,    49,   377,  1550,  1087,  1552,  1089,  1554,  1090,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    47,    48,    49,  1091,  1096,
  1098,  1099,  1100,  1113,  1114,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
  1102,   983,   725,   154,  1117,  1103,   162,   167,   171,   175,
   179,  1410,   184,   251,   252,   253,   254,   255,   256,   257,
   258,   259,    77,  1106,  1107,  1108,  1109,  1111,    78,    47,
    48,    49,  1112,  1115,   286,  1296,  1161,    80,  1116,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    47,    48,    49,   236,  1180,  1172,
  1118,  1163,  1119,  1154,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   694,
   695,   696,   697,  1168,  1169,   698,   699,   700,   701,   702,
   703,   147,   726,   704,   727,   728,   729,    77,   730,   731,
   732,  1182,  1183,    78,   733,  1184,  1171,   734,  1178,  1185,
   735,  1186,    80,   736,   737,  1192,  1191,  1193,  1194,  1196,
  1198,  1199,   738,   739,  1210,  1211,  1213,  1214,  1217,  1223,
  1231,  1236,    77,  1237,  1238,  1241,  1251,  1253,    78,  1254,
   381,    47,    48,    49,  1255,  1256,  1259,    80,  1267,  1268,
   740,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,   725,  1262,  1475,  1265,
  1297,  1269,  1266,  1270,  1272,   129,   130,   131,   132,   133,
  1279,   134,   135,   136,   137,  1280,    77,   138,   139,   140,
   141,   142,    78,  1287,  1281,   143,   144,   606,   725,  1299,
  1285,    80,  1290,   688,   689,   690,   691,   692,   693,   694,
   695,   696,   697,  1282,  1293,   698,   699,   700,   701,   702,
   703,    77,  1302,   704,  1305,  1312,  1301,    78,    47,    48,
    49,   642,   789,  1327,  1319,  1320,    80,  1329,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,  1303,  1328,  1330,  1340,  1341,  1342,  1343,
  1344,  1375,  1347,  1348,  1349,  1350,   726,  1351,   727,   728,
   729,  1355,   730,   731,   732,  1304,  1365,  1367,   733,  1371,
  1380,   734,  1381,  1382,   735,  1383,  1384,   736,   737,  1390,
  1391,  1393,  1392,  1396,  1416,  1423,   738,   739,   726,  1308,
   727,   728,   729,  1394,   730,   731,   732,  1395,    77,  1397,
   733,  1398,  1399,   734,    78,  1426,   735,  1427,   660,   736,
   737,  1309,  1439,    80,   740,  1440,  1441,  1443,   738,   739,
   129,   130,   131,   132,   133,  1444,   134,   135,   136,   137,
  1449,   464,   138,   139,   140,   141,   142,  1311,  1451,  1452,
   143,   144,  1500,  1455,  1457,  1460,   740,  1462,  1463,   129,
   130,   131,   132,   133,  1464,   134,   135,   136,   137,  1417,
  1465,   138,   139,   140,   141,   142,  1472,  1473,  1474,   143,
   144,  1476,  1479,  1481,  1514,  1482,   129,   130,   131,   132,
   133,  1418,   134,   135,   136,   137,  1477,  1483,   138,   139,
   140,   141,   142,  1484,  1485,    77,   143,   144,  1495,  1494,
  1497,    78,  1496,  1419,  1498,  1499,  1501,  1502,  1504,  1513,
    80,  1523,  1527,   129,   130,   131,   132,   133,  1532,   134,
   135,   136,   137,  1533,  1534,   138,   139,   140,   141,   142,
  1420,  1535,  1536,   143,   144,   129,   130,   131,   132,   133,
  1538,   134,   135,   136,   137,   957,  1557,   138,   139,   140,
   141,   142,  1421,  1548,  1558,   143,   144,  1549,  1048,   129,
   130,   131,   132,   133,   545,   134,   135,   136,   137,   708,
   853,   138,   139,   140,   141,   142,  1480,  1247,  1159,   143,
   144,   129,   130,   131,   132,   133,  1373,   134,   135,   136,
   137,   508,   632,   138,   139,   140,   141,   142,   189,   213,
   284,   143,   144,   512,   261,     0,     0,   129,   130,   131,
   132,   133,   368,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,   288,     0,     0,   143,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,     0,     0,     0,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     4,   521,     0,   143,   144,
     5,     0,     6,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   132,   133,     0,   134,   135,
   136,   137,     0,     7,   138,   139,   140,   141,   142,     0,
     8,     0,   143,   144,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     9,     0,    10,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    11,     0,     0,     0,    12,
   691,   692,   693,   694,   695,   696,   697,     0,    13,   698,
   699,   700,   701,   702,   703,     0,   522,   704,     0,     0,
     0,     0,     0,     0,     0,    14,     0,   523,   524,   525,
   526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
   536,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,    15,     0,
    16,   143,   144,     0,     0,     0,     0,     0,     0,     0,
   214,   688,   689,   690,   691,   692,   693,   694,   695,   696,
   697,     0,     0,   698,   699,   700,   701,   702,   703,     0,
     0,   704,     0,     0,    17,    18,     0,     0,   924,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,   272,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,   279,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
   280,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,   281,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,   516,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,   637,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,   639,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
   640,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,   641,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,   747,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,   890,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,   892,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
   894,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,   895,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,   896,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1127,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1136,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1263,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1284,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1291,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1298,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1376,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1377,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1378,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1379,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1445,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1446,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1447,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1448,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1456,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1509,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1511,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1512,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1520,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1521,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1522,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1540,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1541,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1544,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1551,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,     0,  1553,   688,   689,   690,
   691,   692,   693,   694,   695,   696,   697,     0,     0,   698,
   699,   700,   701,   702,   703,     0,     0,   704,   129,   130,
   131,   132,   133,  1176,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,     0,     0,   262,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
     0,   263,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,   264,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,   265,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
     0,     0,   266,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,     0,     0,   267,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,   268,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,     0,
     0,     0,     0,   269,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
   270,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,   271,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,     0,     0,   273,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
     0,   274,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,   275,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,   276,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
     0,     0,   277,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,     0,     0,   278,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,   446,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,     0,
     0,     0,     0,   447,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
   448,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,   449,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,     0,     0,   451,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
     0,   668,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,   837,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,  1454,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
     0,     0,  1493,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,   454,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,   540,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,   714,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,   899,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1027,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1162,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1164,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1165,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1166,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1167,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1374,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1487,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1488,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1489,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1490,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1516,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1528,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1529,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1530,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1545,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1547,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1555,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   688,   689,   690,   691,   692,
   693,   694,   695,   696,   697,     0,     0,   698,   699,   700,
   701,   702,   703,     0,     0,   704,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144
};

static const short yycheck[] = {    24,
    83,   325,   389,   526,   854,   555,   488,   249,   425,     3,
   252,   253,   254,   400,     5,   473,     3,     5,     5,   781,
     3,   176,     5,   785,     5,     5,     5,   642,     5,     5,
   417,    12,    12,   420,     5,    12,   423,     0,    66,  1214,
   291,    12,  1217,   609,    76,   660,   202,   360,  1223,    57,
   176,    83,    77,    78,    79,    80,  1231,     5,    45,    87,
    51,   385,  1237,  1238,     5,     7,     5,    47,    76,   200,
     3,    12,     5,   176,   200,   200,   101,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,     5,    45,   411,   202,
     5,     5,     5,    51,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,     5,
     5,   671,    11,   673,    11,   583,   584,   585,    11,     5,
   200,   589,     5,   384,    51,   200,   115,     5,   117,   118,
   119,     7,   121,   122,   123,     5,    63,   230,   127,   715,
     5,   130,    12,     5,   133,    94,   201,   136,   137,   204,
    12,   485,   583,   584,   585,   927,   145,   146,   589,   201,
   200,     7,   200,   201,   487,    51,     5,     7,    51,     5,
     5,   201,   200,    51,   204,     7,    12,   212,   213,     7,
    79,    46,    79,   201,   173,   200,    79,   812,     5,     6,
   201,   514,     9,   204,   455,   200,   968,   198,   202,   144,
   145,     5,   203,   200,   202,   200,   674,   200,    44,   200,
   201,   201,   201,   200,   201,   201,    51,   200,   201,   200,
   201,   689,   690,   691,   692,   693,   694,   695,   696,   697,
   698,   699,   700,   701,   702,   703,   704,   272,   706,     5,
   198,   202,  1427,   674,   279,   280,   281,   190,   200,   200,
   201,   286,   201,   288,   347,   290,   291,   292,   689,   690,
   691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
   701,   702,   703,   704,   201,   706,   115,    11,   117,   118,
   119,   200,   121,   122,   123,   200,   200,   200,   127,    64,
    64,   130,  1477,    68,   133,     5,     6,   136,   137,     9,
     7,    76,    76,   202,   200,   200,   145,   146,    11,   202,
     5,   115,   198,   117,   118,   119,  1501,   121,   122,   123,
   198,   142,   790,   127,   200,   202,   130,   860,   363,   133,
   200,   201,   136,   137,   173,    64,   202,    66,   200,   201,
   201,   145,   146,   204,    76,    79,   381,    76,     7,   115,
     7,   117,   118,   119,   200,   121,   122,   123,   202,   790,
   200,   127,   201,   198,   130,   200,    50,   133,   200,   173,
   136,   137,   200,     3,   201,     5,    79,    60,    61,   145,
   146,   113,    66,    68,   718,     5,   202,     7,    64,    84,
    66,    67,    76,    77,     5,   202,     7,   201,    82,    94,
    84,   202,   437,   726,   439,   440,   441,   173,    66,   141,
    93,   143,   194,   202,    76,   197,   451,     5,    76,     7,
    78,   104,   745,  1195,   202,  1197,   201,   201,   113,   202,
   523,   163,    66,   201,   469,   201,   204,   202,   761,   762,
   763,   764,    76,   202,   106,   768,   131,   132,   202,   484,
    66,   113,    68,   202,   201,    89,   924,   204,   202,    93,
   191,   192,   193,    79,   932,   957,   197,   198,   202,   201,
   203,   204,   201,    89,   184,   202,    78,   201,   188,    81,
   204,   516,   202,    85,    86,    87,   116,   172,   104,   524,
   525,  1263,   527,   924,   200,     5,   202,   532,   533,   202,
   535,   932,   200,   202,   202,   757,   758,   759,   760,     3,
   202,     5,  1372,  1373,   941,   202,   201,   201,   201,   771,
   177,   178,   179,   180,   181,   201,   183,   184,   185,   186,
   202,   161,   189,   190,   191,   192,   193,   964,   202,   201,
   197,   198,   202,   201,     5,   868,   943,   202,    63,   872,
    65,    66,   201,   646,   647,   204,   172,   201,   200,   201,
   204,    76,   191,   192,   193,   194,   993,   201,   197,   200,
   605,   202,   824,   825,     5,    90,    91,    92,   200,   204,
   202,   904,   200,   906,     7,   201,   203,   204,     5,   104,
   913,     5,    94,    95,    96,    97,   848,   197,   198,   201,
   635,   202,   637,     7,   639,   640,   641,   642,   202,    51,
    52,    53,    54,    55,    56,    57,    58,    59,  1390,   204,
    62,  1393,     5,     7,    66,   660,   203,   204,   663,   881,
  1163,   203,   204,   189,   190,   191,   192,    79,   176,    66,
  1200,  1201,  1202,   203,   204,     3,     4,     5,   204,    76,
   200,   201,     5,  1080,   202,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
   107,   108,   109,   110,   111,   112,   201,   202,   200,   201,
    48,   200,   201,    51,   200,  1467,   200,   201,   115,   201,
   117,   118,   119,   200,   121,   122,   123,  1041,   200,   201,
   127,  1179,   747,   130,   200,   201,   133,   200,   201,   136,
   137,   200,   201,   200,   201,   977,   200,   201,   145,   146,
   982,   200,   115,   200,   117,   118,   119,   200,   121,   122,
   123,  1075,   200,   201,   127,   200,   201,   130,  1179,  1282,
   133,  1284,   203,   136,   137,   176,   173,   176,     7,   201,
   203,   204,   145,   146,   203,   204,   859,     5,   861,   203,
   204,  1105,    76,     5,   201,     5,  1110,   812,   203,   204,
   200,   201,   200,  1316,   201,    89,     5,     7,   200,    63,
   173,    65,  1115,   815,   816,   200,  1119,     5,  1121,     5,
  1052,  1124,   200,   107,   529,   530,  1129,   200,  1060,   200,
   176,   189,   190,   191,   192,   193,   203,  1140,   201,   197,
   198,   202,     5,     5,    98,    99,   100,   101,   102,   103,
   104,  1154,   190,  1156,  1394,   139,  1369,   200,   196,   200,
     5,   876,  1375,   878,   200,  1168,  1169,   205,  1171,     5,
   200,     5,     3,     4,     5,   890,     5,   892,     5,   894,
   895,   896,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,     3,     4,     5,     6,    76,   201,    78,    79,
    80,    81,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,   201,   177,   178,
   179,   180,   181,   200,   183,   184,   185,   186,    49,     5,
   189,   190,   191,   192,   193,     5,   203,    98,   197,   198,
     5,  1203,   157,   200,   200,   200,   200,   177,   178,   179,
   180,   181,   203,   183,   184,   185,   186,   202,  1291,   189,
   190,   191,   192,   193,     7,  1298,   200,   197,   198,     7,
     7,   202,     3,     4,     5,     6,   202,     7,     7,     7,
   201,  1314,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,     8,   176,  1054,
     7,   201,     8,   200,     5,    63,  1423,    65,    49,     7,
    51,   113,   183,    63,   116,    65,    66,   200,   189,   190,
   200,     7,   124,   125,   126,   196,   201,   198,   199,   200,
     7,     7,   203,     7,   205,     7,   207,     5,   204,     5,
    98,    99,   100,   101,   102,   103,   104,     7,    98,    99,
   100,   101,   102,   103,   104,  1398,     7,     7,     7,   190,
     7,     7,   198,  1118,     7,   196,     5,  1122,  1123,   200,
     7,     7,  1127,     7,   205,  1130,  1131,  1132,  1133,     7,
  1527,  1136,  1137,     7,  1139,     7,  1141,   201,   204,  1144,
  1433,   200,     5,  1148,  1149,     5,  1151,     5,     7,   201,
   200,   202,     3,     4,     5,   203,    69,    70,    71,    72,
    73,    74,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,   202,   201,     5,   202,     5,     5,     3,   190,
   202,   201,   198,     7,     6,   196,   200,   198,   200,   200,
   184,   204,     3,  1435,   205,   200,   200,   200,   197,   200,
  1442,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,     7,   202,   189,   190,   191,   192,   193,   194,   202,
   202,   197,     3,     4,     5,   200,  1251,    98,  1253,  1254,
  1255,  1256,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,  1499,   177,   178,
   179,   180,   181,   202,   183,   184,   185,   186,   201,   200,
   189,   190,   191,   192,   193,   202,   202,   202,   197,   198,
   202,     6,   200,     7,   115,  1368,   117,   118,   119,     5,
   121,   122,   123,     5,   202,    68,   127,     5,   200,   130,
     5,     5,   133,   203,   203,   136,   137,  1332,  1333,  1334,
  1335,  1336,   183,     3,   145,   146,   202,   201,   189,   190,
   113,   203,     5,   116,     5,   196,     5,   198,   199,   200,
     5,   124,   125,   106,   205,   128,   129,     5,     5,     5,
   113,   114,   173,     5,     5,     5,     3,   203,     7,     5,
     5,  1376,  1377,  1378,  1379,     5,     5,     3,   131,     3,
     5,   134,   135,   189,   190,   191,   192,   193,   194,     5,
   201,   197,  1397,     5,  1399,     5,     7,   158,     5,     5,
   161,   177,   178,   179,   180,   181,     5,   183,   184,   185,
   186,     5,     7,   189,   190,   191,   192,   193,   202,   172,
   202,   197,   198,   200,     5,     7,   201,  1432,   201,   190,
     7,     7,     7,     7,     7,   196,     7,     7,     3,   200,
  1445,  1446,  1447,  1448,   205,     3,     4,     5,   201,   204,
     7,  1456,     7,     7,     7,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     7,     7,   204,    63,     7,    65,    66,   203,   202,   202,
  1495,     7,  1497,  1498,    87,     7,     7,     7,   200,  1504,
     7,     7,     7,     7,  1509,     7,  1511,  1512,    98,    99,
   100,   101,   102,   103,   104,  1520,  1521,  1522,    98,    99,
   100,   101,   102,   103,   104,     7,     7,     5,     7,  1534,
     7,  1536,     7,     5,     5,  1540,  1541,     7,     7,  1544,
     3,     4,     5,     6,  1549,     7,  1551,     7,  1553,     7,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,     3,     4,     5,     7,   202,
   202,     5,     5,   203,   203,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     7,   201,     5,    86,   203,     7,    89,    90,    91,    92,
    93,   201,    95,   148,   149,   150,   151,   152,   153,   154,
   155,   156,   190,     7,     7,     7,     7,     7,   196,     3,
     4,     5,     7,   204,   202,     7,     7,   205,   204,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,     3,     4,     5,   150,     5,     7,
   204,   200,   204,   204,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,   183,
   184,   185,   186,   204,   204,   189,   190,   191,   192,   193,
   194,   204,   115,   197,   117,   118,   119,   190,   121,   122,
   123,     5,     7,   196,   127,     7,   204,   130,   203,    89,
   133,     7,   205,   136,   137,     7,   203,     7,     7,     7,
     7,     7,   145,   146,     7,     7,     5,   200,   200,   200,
   200,     5,   190,   200,   200,   200,   200,   200,   196,   200,
   198,     3,     4,     5,   200,   200,     3,   205,     7,     5,
   173,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,     5,   203,   201,   203,
     7,     5,   203,   202,     7,   177,   178,   179,   180,   181,
     5,   183,   184,   185,   186,     5,   190,   189,   190,   191,
   192,   193,   196,     7,   203,   197,   198,   201,     5,     7,
   203,   205,     7,   177,   178,   179,   180,   181,   182,   183,
   184,   185,   186,   204,     7,   189,   190,   191,   192,   193,
   194,   190,     7,   197,     7,   203,     7,   196,     3,     4,
     5,   200,   206,   203,   200,   200,   205,   201,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,     7,   203,   203,   201,   201,     7,     5,
     7,   204,     7,     7,     7,     7,   115,     7,   117,   118,
   119,     7,   121,   122,   123,     7,     7,     7,   127,     7,
     7,   130,     7,     7,   133,     7,     5,   136,   137,   204,
    88,   204,   203,   120,     7,     5,   145,   146,   115,     7,
   117,   118,   119,   204,   121,   122,   123,   203,   190,   204,
   127,   204,   204,   130,   196,     7,   133,   200,   200,   136,
   137,     7,     5,   205,   173,     5,     5,   202,   145,   146,
   177,   178,   179,   180,   181,   201,   183,   184,   185,   186,
   203,   200,   189,   190,   191,   192,   193,     7,   203,   203,
   197,   198,   201,   203,     5,     5,   173,     5,     7,   177,
   178,   179,   180,   181,     7,   183,   184,   185,   186,     7,
     7,   189,   190,   191,   192,   193,     7,     7,     7,   197,
   198,     7,     7,     7,   201,     7,   177,   178,   179,   180,
   181,     7,   183,   184,   185,   186,   200,     7,   189,   190,
   191,   192,   193,     7,     7,   190,   197,   198,   200,   203,
   200,   196,   201,     7,   200,    43,   200,     7,   200,     7,
   205,   105,     5,   177,   178,   179,   180,   181,   201,   183,
   184,   185,   186,   201,   200,   189,   190,   191,   192,   193,
     7,     7,   200,   197,   198,   177,   178,   179,   180,   181,
   201,   183,   184,   185,   186,   840,     0,   189,   190,   191,
   192,   193,     7,   201,     0,   197,   198,   200,   917,   177,
   178,   179,   180,   181,   460,   183,   184,   185,   186,   593,
   721,   189,   190,   191,   192,   193,     7,  1159,  1021,   197,
   198,   177,   178,   179,   180,   181,  1320,   183,   184,   185,
   186,   429,   506,   189,   190,   191,   192,   193,    99,     8,
   212,   197,   198,   434,   189,    -1,    -1,   177,   178,   179,
   180,   181,   261,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,     8,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,    -1,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,
   177,   178,   179,   180,   181,    -1,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,    -1,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,    -1,    -1,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,     5,    57,    -1,   197,   198,
    10,    -1,    12,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   180,   181,    -1,   183,   184,
   185,   186,    -1,    43,   189,   190,   191,   192,   193,    -1,
    50,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    -1,    -1,    -1,    79,
   180,   181,   182,   183,   184,   185,   186,    -1,    88,   189,
   190,   191,   192,   193,   194,    -1,   147,   197,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   105,    -1,   158,   159,   160,
   161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,   138,    -1,
   140,   197,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   206,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,   194,    -1,
    -1,   197,    -1,    -1,   174,   175,    -1,    -1,   204,   177,
   178,   179,   180,   181,    -1,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   177,   178,   179,   180,   181,   204,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,   177,   178,   179,   180,   181,   204,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
   204,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,   204,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,   204,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   177,   178,   179,   180,   181,   204,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,   177,   178,   179,   180,   181,   204,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
   204,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,   204,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,   204,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   177,   178,   179,   180,   181,   204,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,   177,   178,   179,   180,   181,   204,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
   204,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,   204,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,   204,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   177,   178,   179,   180,   181,   204,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,   177,   178,   179,   180,   181,   204,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
   204,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,   204,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,   204,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   177,   178,   179,   180,   181,   204,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,   177,   178,   179,   180,   181,   204,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
   204,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,   204,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,   204,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   177,   178,   179,   180,   181,   204,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,   177,   178,   179,   180,   181,   204,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
   204,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,   204,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,   204,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   177,   178,   179,   180,   181,   204,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,   177,   178,   179,   180,   181,   204,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
   204,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,   204,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,   204,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   177,   178,   179,   180,   181,   204,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,   177,   178,   179,   180,   181,   204,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
   204,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,   204,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,   204,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,    -1,    -1,    -1,    -1,    -1,   204,   177,   178,   179,
   180,   181,   182,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,   194,    -1,    -1,   197,   177,   178,
   179,   180,   181,   203,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,    -1,    -1,   203,   177,   178,   179,   180,   181,
    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,
    -1,   203,   177,   178,   179,   180,   181,    -1,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,   203,   177,
   178,   179,   180,   181,    -1,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,    -1,    -1,    -1,    -1,   203,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
    -1,    -1,   203,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,   203,
   177,   178,   179,   180,   181,    -1,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,    -1,    -1,    -1,    -1,   203,   177,   178,   179,
   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,
    -1,    -1,    -1,   203,   177,   178,   179,   180,   181,    -1,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,
   203,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,    -1,    -1,   203,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,    -1,    -1,   203,   177,   178,   179,   180,   181,
    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,
    -1,   203,   177,   178,   179,   180,   181,    -1,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,   203,   177,
   178,   179,   180,   181,    -1,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,    -1,    -1,    -1,    -1,   203,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
    -1,    -1,   203,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,   203,
   177,   178,   179,   180,   181,    -1,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,    -1,    -1,    -1,    -1,   203,   177,   178,   179,
   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,
    -1,    -1,    -1,   203,   177,   178,   179,   180,   181,    -1,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,
   203,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,    -1,    -1,   203,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,    -1,    -1,   203,   177,   178,   179,   180,   181,
    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,
    -1,   203,   177,   178,   179,   180,   181,    -1,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,   203,   177,
   178,   179,   180,   181,    -1,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,    -1,    -1,    -1,    -1,   203,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
    -1,    -1,   203,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,    -1,    -1,   201,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
    -1,    -1,   201,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
   182,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,   194,    -1,    -1,   197,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198
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
#line 311 "yacc.y"
{ if (++YaccLevel == 1) {
	ConstantTable_L = List_Create(20, 10, sizeof(struct Constant)) ;
	ListDummy_L     = List_Create( 1, 1, sizeof(int)) ; /* Do not delete */
	ListOfInt_L     = List_Create(20, 10, sizeof(int)) ;
	ListOfTwoInt_L  = List_Create(20, 10, sizeof(struct TwoInt)) ;
	ListOfDouble_L  = List_Create(20, 10, sizeof(double)) ;
	ListOfDouble2_L = List_Create(20, 10, sizeof(double)) ;
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
#line 347 "yacc.y"
{ if (--YaccLevel == 0) {
	List_Delete(ListOfInt_L) ; List_Delete(ListOfTwoInt_L) ;  
	List_Delete(ListOfDouble_L) ; List_Delete(ListOfDouble2_L) ;
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
#line 389 "yacc.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 412 "yacc.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 427 "yacc.y"
{ Help(NULL); ;
    break;}
case 21:
#line 430 "yacc.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 22:
#line 433 "yacc.y"
{ Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 23:
#line 436 "yacc.y"
{ Free(yyvsp[-3].c); Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 25:
#line 440 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 26:
#line 448 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 28:
#line 465 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 30:
#line 472 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 31:
#line 475 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 32:
#line 478 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 33:
#line 480 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 36:
#line 491 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 37:
#line 496 "yacc.y"
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
case 38:
#line 508 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 517 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 40:
#line 528 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 41:
#line 533 "yacc.y"
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
case 42:
#line 570 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 43:
#line 573 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 44:
#line 584 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 45:
#line 586 "yacc.y"
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
case 46:
#line 602 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 47:
#line 605 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 48:
#line 608 "yacc.y"
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
case 49:
#line 659 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 50:
#line 671 "yacc.y"
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
case 51:
#line 695 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 52:
#line 702 "yacc.y"
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
case 53:
#line 715 "yacc.y"
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
case 54:
#line 733 "yacc.y"
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
case 55:
#line 756 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 56:
#line 760 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 57:
#line 769 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!yyvsp[-2].d || (yyvsp[-5].i<yyvsp[0].i && yyvsp[-2].d<0) || (yyvsp[-5].i>yyvsp[0].i && yyvsp[-2].d>0)){
	vyyerror("Wrong Increment in '%d :[%d] %d'", yyvsp[-5].i, (int)yyvsp[-2].d, yyvsp[0].i) ;
	List_Add(ListOfInt_L, &(yyvsp[-5].i)) ;
      }
      else
	for(j=yyvsp[-5].i ; (yyvsp[-2].d>0)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; j+=(int)yyvsp[-2].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 58:
#line 783 "yacc.y"
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
case 59:
#line 817 "yacc.y"
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
case 60:
#line 830 "yacc.y"
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
case 62:
#line 854 "yacc.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 63:
#line 864 "yacc.y"
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
case 66:
#line 886 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 67:
#line 891 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 68:
#line 892 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 69:
#line 897 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 73:
#line 916 "yacc.y"
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
case 74:
#line 936 "yacc.y"
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
	    vyyerror("Redefinition of Piece-wise Function: %s [%d]",
		     Expression_P->Name, ExpressionPerRegion_S.RegionIndex) ;
	  else
	    List_Add(Expression_P->Case.PieceWiseFunction.ExpressionPerRegion,
		     &ExpressionPerRegion_S) ;
	}
	if (yyvsp[-4].i == -1) { List_Delete(Group_S.InitialList) ; }
      }
      else  vyyerror("Bad Group Right Hand Side") ;
    ;
    break;}
case 77:
#line 987 "yacc.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 78:
#line 1007 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 79:
#line 1013 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 80:
#line 1019 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 81:
#line 1022 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 82:
#line 1030 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 83:
#line 1034 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 85:
#line 1046 "yacc.y"
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
case 86:
#line 1059 "yacc.y"
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
case 87:
#line 1073 "yacc.y"
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
case 88:
#line 1088 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1094 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1100 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1106 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1112 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1118 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1124 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1130 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1136 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1142 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1148 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1154 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1160 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1166 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1172 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1178 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1184 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 105:
#line 1191 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 107:
#line 1199 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 109:
#line 1212 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 110:
#line 1218 "yacc.y"
{

      /* Expression */

      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-2].c,fcmp_Expression_Name)) >= 0) {  
	WholeQuantity_S.Type = WQ_EXPRESSION ;
	WholeQuantity_S.Case.Expression.Index = i ;
	WholeQuantity_S.Case.Expression.NbrArguments = yyvsp[-1].i ;
	if (yyvsp[-1].i < 0)  vyyerror("Uncompatible Argument for Function: %s", yyvsp[-2].c) ;
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
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 &&
		      (yyvsp[-1].i)%2 == 0)) {
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
	      WholeQuantity_S.Case.Function.NbrParameters !=
	      List_Nbr(ListOfDouble_L)) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)", 
		     yyvsp[-2].c, List_Nbr(ListOfDouble_L), WholeQuantity_S.Case.Function.NbrParameters) ;
	  }
	  else if (WholeQuantity_S.Case.Function.NbrParameters == -2 &&
		   (List_Nbr(ListOfDouble_L))%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of even number)",
		     yyvsp[-2].c, List_Nbr(ListOfDouble_L)) ;
	  }
	  else {
	    WholeQuantity_S.Case.Function.NbrParameters = List_Nbr(ListOfDouble_L) ;
	    if (WholeQuantity_S.Case.Function.NbrParameters > 0) {
	      WholeQuantity_S.Case.Function.Para =
		(double *)Malloc
		(WholeQuantity_S.Case.Function.NbrParameters * sizeof(double)) ;
	      for (i = 0 ; i < WholeQuantity_S.Case.Function.NbrParameters ; i++)
		List_Read(ListOfDouble_L, i, &WholeQuantity_S.Case.Function.Para[i]) ;
	    }
	  }
	}

	else {
	  vyyerror("Unknown Function: %s", yyvsp[-2].c) ;
	  /*
	  vyyerror("Unknown Function: %s %s\n   (or any user-defined function)", 
		   $1, Get_Valid_SXF2N(F_Function)) ;
		   */
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 111:
#line 1296 "yacc.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Type for Quantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(QuantityFromFS_Type)) ;
      Free(yyvsp[-1].c) ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator =
	Quantity_TypeOperator ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;

      switch(WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity) {
      case QUANTITY_DOF :
	if (Current_DofIndexInWholeQuantity == -1)
	  Current_DofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else if (Current_DofIndexInWholeQuantity == -2)
	  vyyerror("Dof Definition out of Context") ;
	else
	  vyyerror("More than one Dof Definition in Expression") ;
	break ;
      case QUANTITY_NODOF :
	if (Current_DofIndexInWholeQuantity == -2)
	  vyyerror("NoDof Definition out of Context") ;
	else if (Current_NoDofIndexInWholeQuantity == -1)
	  Current_NoDofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else
	  vyyerror("More than one NoDof Definition in Expression") ;
	break ;
      }
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 112:
#line 1330 "yacc.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator =
	Quantity_TypeOperator ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 113:
#line 1340 "yacc.y"
{ 
      if(yyvsp[0].i!=3 && yyvsp[0].i!=4) 
	vyyerror("Wrong number of arguments for Quantity Evaluation (%d)", yyvsp[0].i) ;
      WholeQuantity_S.Type = WQ_OPERATORANDQUANTITYEVAL ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = yyvsp[0].i ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator =
	Quantity_TypeOperator ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 114:
#line 1353 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 115:
#line 1355 "yacc.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof definition out of context") ;
    ;
    break;}
case 116:
#line 1366 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 117:
#line 1368 "yacc.y"
{
      WholeQuantity_S.Type = WQ_MHTIMEINTEGRATION ;

      WholeQuantity_S.Case.MHTimeIntegration.Type = yyvsp[-7].i ;
      WholeQuantity_S.Case.MHTimeIntegration.NbrTimePoint = (int)yyvsp[-5].d ;
      WholeQuantity_S.Case.MHTimeIntegration.WholeQuantityInit = yyvsp[-3].l ;
      WholeQuantity_S.Case.MHTimeIntegration.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof definition out of context") ;
    ;
    break;}
case 118:
#line 1384 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 119:
#line 1390 "yacc.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 120:
#line 1396 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 121:
#line 1398 "yacc.y"
{ WholeQuantity_S.Type = WQ_TRACE ;
      WholeQuantity_S.Case.Trace.WholeQuantity = yyvsp[-3].l ;
      WholeQuantity_S.Case.Trace.InIndex = Num_Group(&Group_S, "WQ_Trace_In", yyvsp[-1].i) ;

      if(Group_S.Type != ELEMENTLIST || Group_S.SuppListType != SUPPLIST_CONNECTEDTO)
	vyyerror("Group for Trace should be of Type 'ElementsOf[., ConnectedTo .]'");

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
	  vyyerror("Dof Definition out of Context (in Trace Operator)");
      }

      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 122:
#line 1427 "yacc.y"
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
case 123:
#line 1451 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError) 
	vyyerror("Unknown Current Value: $%s %s", yyvsp[0].c, Get_Valid_SXP(Current_Value)) ;
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 124:
#line 1462 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 125:
#line 1468 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 126:
#line 1475 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 127:
#line 1481 "yacc.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      /*
      if ($3 <= 0 || $3 > 6)  
	vyyerror("Index of SaveValue out of order: %d", $3) ;
      */
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 128:
#line 1492 "yacc.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      /*
      if ($2 <= 0 || $2 > 6)  
	vyyerror("Index of SaveValue out of order: %d", $2) ;
      */
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 129:
#line 1507 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 130:
#line 1508 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 131:
#line 1509 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 132:
#line 1514 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 133:
#line 1515 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 134:
#line 1521 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 136:
#line 1526 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 137:
#line 1533 "yacc.y"
{
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
	List_Reset(ListOfDouble_L) ;
      }
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", yyvsp[-2].c) ;
	  List_Reset(ListOfDouble_L) ;
	}
	else
	  List_Reset(ListOfDouble_L) ;
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(ListOfDouble_L, &d) ;
	  }
    ;
    break;}
case 138:
#line 1560 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 139:
#line 1565 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 140:
#line 1572 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 142:
#line 1581 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 143:
#line 1586 "yacc.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 144:
#line 1593 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 145:
#line 1596 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 146:
#line 1603 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 148:
#line 1613 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 149:
#line 1616 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 150:
#line 1619 "yacc.y"
{ JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, yyvsp[-2].c, &FlagError,
				&JacobianCase_S.NbrParameters) ;
      if (!FlagError) {
	if (List_Nbr(ListOfDouble_L) == JacobianCase_S.NbrParameters) {
	  if (JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double)) ;
	    for (i = 0 ; i < JacobianCase_S.NbrParameters ; i++)
	      List_Read(ListOfDouble_L, i, &JacobianCase_S.Para[i]) ;
	  }
	}
	else {
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)", 
		   yyvsp[-2].c, List_Nbr(ListOfDouble_L), JacobianCase_S.NbrParameters) ;
	}
      }
      else  vyyerror("Unknown Type of Jacobian: %s %s", 
		     yyvsp[-2].c, Get_Valid_SXD1N(Jacobian_Type)) ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 151:
#line 1650 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 152:
#line 1656 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 153:
#line 1663 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 155:
#line 1676 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 156:
#line 1683 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 157:
#line 1686 "yacc.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 158:
#line 1693 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 159:
#line 1696 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 160:
#line 1703 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 162:
#line 1715 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 163:
#line 1724 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 164:
#line 1733 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 165:
#line 1740 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 166:
#line 1743 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 167:
#line 1750 "yacc.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 169:
#line 1766 "yacc.y"
{ QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Element: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Element_Type)) ;

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
	  vyyerror("Incompatible Type of Integration Method") ;
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
	  vyyerror("Incompatible Type of Integration Method") ;
	  break ;
	}
	break ;

      default :
	vyyerror("Incompatible Type of Integration Method") ;
	break ;
      }

      if (FlagError)  vyyerror("Bad Type of Integration for Element: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 170:
#line 1819 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 171:
#line 1822 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 172:
#line 1825 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 173:
#line 1828 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 174:
#line 1831 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 175:
#line 1842 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 177:
#line 1852 "yacc.y"
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
case 179:
#line 1877 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 181:
#line 1891 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 182:
#line 1897 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 183:
#line 1904 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 184:
#line 1912 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 185:
#line 1915 "yacc.y"
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
case 186:
#line 1937 "yacc.y"
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
case 187:
#line 1952 "yacc.y"
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
case 188:
#line 1976 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 190:
#line 1990 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 191:
#line 1999 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 192:
#line 2023 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 193:
#line 2048 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 194:
#line 2053 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 195:
#line 2061 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 196:
#line 2069 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 197:
#line 2079 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
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
case 198:
#line 2095 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 199:
#line 2102 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 200:
#line 2108 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 201:
#line 2114 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 202:
#line 2122 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 203:
#line 2130 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 204:
#line 2138 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 205:
#line 2158 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 207:
#line 2169 "yacc.y"
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
case 209:
#line 2196 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2209 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2215 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2222 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2230 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2233 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 216:
#line 2236 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 217:
#line 2239 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 218:
#line 2246 "yacc.y"
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
case 219:
#line 2262 "yacc.y"
{
      if (!Nbr_Index) {
	if ( (i = List_ISearchSeq(yyvsp[-3].l, BasisFunction_S.Name, 
				  fcmp_BasisFunction_Name)) < 0 )
	  BasisFunction_S.Num = Num_BasisFunction++ ;
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
				      fcmp_BasisFunction_Name)) < 0 )
	      BasisFunction_S.Num = Num_BasisFunction++ ;
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
case 220:
#line 2299 "yacc.y"
{ 
      BasisFunction_S.Name = NULL ; 
      BasisFunction_S.NameOfCoef = NULL ;
      BasisFunction_S.Num = 0 ;
      BasisFunction_S.GlobalBasisFunction = NULL ;
      BasisFunction_S.Function = NULL ; 
      BasisFunction_S.dFunction = NULL ;
      BasisFunction_S.dInvFunction = NULL ;
      BasisFunction_S.SupportIndex = -1 ; 
      BasisFunction_S.EntityIndex  = -1 ;
    ;
    break;}
case 222:
#line 2318 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 223:
#line 2321 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 224:
#line 2326 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 225:
#line 2331 "yacc.y"
{
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction, &BasisFunction_S.Order,
	 &BasisFunction_S.ElementType) ;
      if (FlagError)  vyyerror("Unknown Function for BasisFunction: %s %s", 
			       yyvsp[-2].c, Get_Valid_SX3F2N(BF_Function)) ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 226:
#line 2343 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 227:
#line 2367 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;

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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 229:
#line 2427 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 230:
#line 2430 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 231:
#line 2439 "yacc.y"
{
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Resolution needed for Multiple Formulation: %s {}", yyvsp[-12].c) ;

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
	  vyyerror("Only 1 Region needed in Group: %s", Group_S.Name) ;

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
	  vyyerror("Unknown DefineQuantity %s in Formulation %s", yyvsp[-15].c,
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
case 232:
#line 2504 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 233:
#line 2508 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 234:
#line 2515 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 236:
#line 2524 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 237:
#line 2529 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 238:
#line 2536 "yacc.y"
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
case 239:
#line 2552 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 240:
#line 2558 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 241:
#line 2561 "yacc.y"
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
case 242:
#line 2580 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 243:
#line 2584 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 244:
#line 2593 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 246:
#line 2604 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 247:
#line 2609 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 248:
#line 2618 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 249:
#line 2631 "yacc.y"
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
case 250:
#line 2646 "yacc.y"
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
case 251:
#line 2720 "yacc.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 253:
#line 2736 "yacc.y"
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
case 254:
#line 2754 "yacc.y"
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
case 255:
#line 2768 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 256:
#line 2771 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2774 "yacc.y"
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
case 258:
#line 2820 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 260:
#line 2830 "yacc.y"
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
case 262:
#line 2856 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 264:
#line 2868 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 265:
#line 2874 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 266:
#line 2881 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 268:
#line 2892 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 269:
#line 2898 "yacc.y"
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
case 270:
#line 2912 "yacc.y"
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
case 271:
#line 2930 "yacc.y"
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
case 273:
#line 2951 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 274:
#line 2954 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 275:
#line 2958 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 276:
#line 2961 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 277:
#line 2970 "yacc.y"
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
case 278:
#line 3009 "yacc.y"
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
case 279:
#line 3033 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 280:
#line 3038 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 281:
#line 3044 "yacc.y"
{ 
      DefineQuantity_S.IntegralQuantity.WholeQuantity = yyvsp[-2].l ;
      DefineQuantity_S.IntegralQuantity.DofIndexInWholeQuantity = 
	Current_DofIndexInWholeQuantity ;

      WholeQuantity_P = (struct WholeQuantity*)
	List_Pointer(DefineQuantity_S.IntegralQuantity.WholeQuantity, 0) ;

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


    ;
    break;}
case 282:
#line 3194 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 283:
#line 3199 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 284:
#line 3208 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 285:
#line 3217 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 287:
#line 3225 "yacc.y"
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
case 288:
#line 3265 "yacc.y"
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
case 289:
#line 3280 "yacc.y"
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
	      vyyerror("Multiple GlobalEquation not yet implemented in yacc ...") ; 

	    List_Read(ListOfEquationTerm, k, &Formulation_S.Equation) ;

	    List_Add(Formulation_S.Equation, &EquationTerm_S) ;
	  }
	yyval.l = Formulation_S.Equation ;
      }
    ;
    break;}
case 290:
#line 3308 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 291:
#line 3311 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 292:
#line 3314 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 293:
#line 3317 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 294:
#line 3324 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 296:
#line 3335 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 297:
#line 3344 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 298:
#line 3354 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 299:
#line 3368 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 301:
#line 3380 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 302:
#line 3382 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 303:
#line 3384 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 304:
#line 3386 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 305:
#line 3394 "yacc.y"
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
case 307:
#line 3416 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 308:
#line 3424 "yacc.y"
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
case 309:
#line 3486 "yacc.y"
{ 
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE ;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer(yyvsp[-2].l, 0) ;

      if (List_Nbr(yyvsp[-2].l) == 1){
	if ((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  vyyerror("Missing DefineQuantity in Equation");
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
	vyyerror("Unrecognized Quantity Structure in Equation");
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
case 310:
#line 3532 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 311:
#line 3556 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 312:
#line 3565 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 313:
#line 3579 "yacc.y"
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
case 315:
#line 3608 "yacc.y"
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
	else  vyyerror("Bad Group Right Hand Side") ;
      }
    ;
    break;}
case 316:
#line 3632 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 317:
#line 3640 "yacc.y"
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
case 318:
#line 3695 "yacc.y"
{ EquationTerm_S.Case.GlobalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;

      Pro_DefineQuantityIndex
	(EquationTerm_S.Case.GlobalTerm.Term.WholeQuantity,
	 EquationTerm_S.Case.GlobalTerm.Term.DefineQuantityIndexEqu,
	 &EquationTerm_S.Case.GlobalTerm.Term.NbrQuantityIndex,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityIndexTable,
	 &EquationTerm_S.Case.GlobalTerm.Term.QuantityTraceGroupIndexTable) ;
    ;
    break;}
case 319:
#line 3712 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 320:
#line 3713 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 321:
#line 3714 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 322:
#line 3715 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 323:
#line 3716 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 324:
#line 3717 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 325:
#line 3718 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 326:
#line 3725 "yacc.y"
{ Quantity_TypeOperator = Get_DefineForString(Operator_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Operator: %s %s", 
		 yyvsp[-2].c, Get_Valid_SXD(Operator_Type)) ;
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 327:
#line 3739 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3757 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 330:
#line 3767 "yacc.y"
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
case 332:
#line 3792 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 334:
#line 3804 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 335:
#line 3811 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 336:
#line 3818 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 337:
#line 3821 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 338:
#line 3823 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 339:
#line 3829 "yacc.y"
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
case 340:
#line 3844 "yacc.y"
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
case 341:
#line 3863 "yacc.y"
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
case 343:
#line 3882 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 344:
#line 3885 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 345:
#line 3893 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 346:
#line 3896 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 347:
#line 3901 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 348:
#line 3906 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 349:
#line 3911 "yacc.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 350:
#line 3921 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 351:
#line 3930 "yacc.y"
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
case 352:
#line 3967 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 353:
#line 3974 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 354:
#line 3977 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 355:
#line 3989 "yacc.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 356:
#line 3999 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 357:
#line 4005 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 358:
#line 4008 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 359:
#line 4020 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 360:
#line 4028 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 361:
#line 4039 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Type of Operation: %s %s", 
		 yyvsp[-2].c, Get_Valid_SXD(Operation_Type)) ;
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 362:
#line 4055 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 363:
#line 4062 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 364:
#line 4068 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 365:
#line 4074 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 366:
#line 4080 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 367:
#line 4088 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-4].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Type of Operation: %s %s", 
		 yyvsp[-4].c, Get_Valid_SXD(Operation_Type)) ;
      Free(yyvsp[-4].c) ;
      
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-2].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 368:
#line 4104 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 369:
#line 4111 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 370:
#line 4117 "yacc.y"
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
case 371:
#line 4128 "yacc.y"
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
case 372:
#line 4139 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = yyvsp[-2].i ;
      
      if(DefineSystem_S.FrequencyValue == NULL)
	DefineSystem_S.FrequencyValue = 
	  List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
    ;
    break;}
case 373:
#line 4155 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_UPDATE ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Update.ExpressionIndex = yyvsp[-2].i ;
    ;
    break;}
case 374:
#line 4167 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform.Frequency = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(Operation_P->Case.FourierTransform.Frequency, &Value) ;
      }
    ;
    break;}
case 375:
#line 4189 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_LANCZOS ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-8].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-8].c) ;
      Free(yyvsp[-8].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.Lanczos.Size = (int)yyvsp[-6].d ;
      Operation_P->Case.Lanczos.Save = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	j = (int)Value ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      Operation_P->Case.Lanczos.Shift = yyvsp[-2].d ;
    ;
    break;}
case 376:
#line 4211 "yacc.y"
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
case 377:
#line 4224 "yacc.y"
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
case 378:
#line 4237 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 380:
#line 4246 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 382:
#line 4255 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 383:
#line 4265 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 384:
#line 4276 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 385:
#line 4285 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 386:
#line 4295 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 388:
#line 4305 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 389:
#line 4308 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 390:
#line 4317 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 391:
#line 4330 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 393:
#line 4346 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 394:
#line 4350 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 395:
#line 4354 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 396:
#line 4358 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 397:
#line 4363 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 398:
#line 4374 "yacc.y"
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
case 400:
#line 4391 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 401:
#line 4395 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 402:
#line 4399 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 403:
#line 4403 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 404:
#line 4407 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 405:
#line 4412 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 406:
#line 4423 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 408:
#line 4438 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 409:
#line 4442 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 410:
#line 4446 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 411:
#line 4450 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 412:
#line 4455 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 413:
#line 4466 "yacc.y"
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
case 415:
#line 4484 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 416:
#line 4488 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 417:
#line 4492 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 418:
#line 4496 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 419:
#line 4501 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 420:
#line 4511 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 421:
#line 4517 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 422:
#line 4523 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 423:
#line 4533 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 424:
#line 4536 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 425:
#line 4541 "yacc.y"
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
case 427:
#line 4559 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 428:
#line 4568 "yacc.y"
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
	  vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      }
      else
	vyyerror("System undefined for Quantity: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 429:
#line 4597 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 430:
#line 4600 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 431:
#line 4603 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 432:
#line 4611 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 433:
#line 4626 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 435:
#line 4638 "yacc.y"
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
case 437:
#line 4661 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 439:
#line 4675 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 440:
#line 4682 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 441:
#line 4690 "yacc.y"
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
case 442:
#line 4736 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 443:
#line 4741 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 444:
#line 4747 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 445:
#line 4750 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 446:
#line 4755 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 448:
#line 4766 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 449:
#line 4769 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 450:
#line 4775 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 451:
#line 4780 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 452:
#line 4786 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType =
	Get_DefineForString(PostQuantityTerm_EvaluationType, yyvsp[-3].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown EvaluationType for PostQuantityTerm: %s %s",
		 yyvsp[-3].c, Get_Valid_SXD(PostQuantityTerm_EvaluationType)) ;
      Free(yyvsp[-3].c) ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 453:
#line 4799 "yacc.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 455:
#line 4813 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 456:
#line 4820 "yacc.y"
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
	    vyyerror("Mixed quantity types in term: %d != %d", PostQuantityTerm_S.Type, j) ;
	}
	if (PostQuantityTerm_S.Type == 0)  PostQuantityTerm_S.Type = LOCALQUANTITY ;
      }

    ;
    break;}
case 457:
#line 4848 "yacc.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown Type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 458:
#line 4857 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 459:
#line 4858 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 460:
#line 4864 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 461:
#line 4873 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 462:
#line 4890 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 464:
#line 4902 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 466:
#line 4909 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 468:
#line 4921 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 469:
#line 4928 "yacc.y"
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
case 470:
#line 4940 "yacc.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 471:
#line 4950 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 472:
#line 4955 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 473:
#line 4961 "yacc.y"
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
case 474:
#line 4978 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 475:
#line 4988 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 476:
#line 4991 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 477:
#line 4995 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 478:
#line 5006 "yacc.y"
{
      vyyerror("Plot has been superseded by Print "
	       "(Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 479:
#line 5012 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 480:
#line 5021 "yacc.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-2].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-2].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      PostSubOperation_S.PostQuantitySupport[0] = yyvsp[-1].i ;
      PostSubOperation_S.PostQuantitySupport[1] = -1 ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 481:
#line 5033 "yacc.y"
{
      if ((i = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-5].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-5].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantitySupport[0] = yyvsp[-4].i ;

      if ((j = List_ISearchSeq(InteractivePostProcessing_S.PostQuantity, yyvsp[-2].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-2].c) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;
      PostSubOperation_S.PostQuantitySupport[1] = yyvsp[-1].i ;

      if ((yyvsp[-4].i<0 && yyvsp[-1].i<0) || (yyvsp[-4].i>=0 && yyvsp[-1].i>=0)) {
	vyyerror("PostQuantities '%s' and '%s' should not be of same type (%s)", 
		 yyvsp[-5].c, yyvsp[-2].c, (yyvsp[-4].i>0)? "with Support":"without Support") ;
      }      
      Free(yyvsp[-5].c) ; Free(yyvsp[-2].c) ;
    ;
    break;}
case 482:
#line 5056 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 483:
#line 5057 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 484:
#line 5058 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 485:
#line 5059 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 486:
#line 5065 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 487:
#line 5067 "yacc.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 488:
#line 5073 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 489:
#line 5079 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 490:
#line 5086 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 491:
#line 5095 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONCUT_2D ;
      PostSubOperation_S.Case.OnCut.x[0] = yyvsp[-20].d ;
      PostSubOperation_S.Case.OnCut.y[0] = yyvsp[-18].d ;
      PostSubOperation_S.Case.OnCut.z[0] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnCut.x[1] = yyvsp[-13].d ;
      PostSubOperation_S.Case.OnCut.y[1] = yyvsp[-11].d ;
      PostSubOperation_S.Case.OnCut.z[1] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnCut.x[2] = yyvsp[-6].d ;
      PostSubOperation_S.Case.OnCut.y[2] = yyvsp[-4].d ;
      PostSubOperation_S.Case.OnCut.z[2] = yyvsp[-2].d ;
    ;
    break;}
case 492:
#line 5109 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 493:
#line 5117 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = yyvsp[-7].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = yyvsp[-5].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = yyvsp[-3].i ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[0], &Value) ;
      }
    ;
    break;}
case 494:
#line 5130 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 495:
#line 5140 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 496:
#line 5149 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_1D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-14].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-12].d ;
      PostSubOperation_S.Case.OnGrid.x[1] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnGrid.y[1] = yyvsp[-7].d ;
      PostSubOperation_S.Case.OnGrid.z[1] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-1].d ;
    ;
    break;}
case 497:
#line 5163 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_2D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-25].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-23].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-21].d ;
      PostSubOperation_S.Case.OnGrid.x[1] = yyvsp[-18].d ;
      PostSubOperation_S.Case.OnGrid.y[1] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnGrid.z[1] = yyvsp[-14].d ;
      PostSubOperation_S.Case.OnGrid.x[2] = yyvsp[-11].d ;
      PostSubOperation_S.Case.OnGrid.y[2] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnGrid.z[2] = yyvsp[-7].d ;
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-1].d ;
    ;
    break;}
case 498:
#line 5182 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_3D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-34].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-32].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-30].d ;
      PostSubOperation_S.Case.OnGrid.x[1] = yyvsp[-27].d ;
      PostSubOperation_S.Case.OnGrid.y[1] = yyvsp[-25].d ;
      PostSubOperation_S.Case.OnGrid.z[1] = yyvsp[-23].d ;
      PostSubOperation_S.Case.OnGrid.x[2] = yyvsp[-20].d ;
      PostSubOperation_S.Case.OnGrid.y[2] = yyvsp[-18].d ;
      PostSubOperation_S.Case.OnGrid.z[2] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnGrid.x[3] = yyvsp[-13].d ;
      PostSubOperation_S.Case.OnGrid.y[3] = yyvsp[-11].d ;
      PostSubOperation_S.Case.OnGrid.z[3] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)yyvsp[-1].d ;
    ;
    break;}
case 499:
#line 5204 "yacc.y"
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
case 500:
#line 5224 "yacc.y"
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
      PostSubOperation_S.Value_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Iso = 0 ;
      PostSubOperation_S.Iso_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Sort = 0 ;
      PostSubOperation_S.NoNewLine = 0 ;
    ;
    break;}
case 502:
#line 5245 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 503:
#line 5252 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 504:
#line 5259 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 505:
#line 5266 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 506:
#line 5270 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 507:
#line 5274 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 508:
#line 5278 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 509:
#line 5282 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 510:
#line 5291 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 511:
#line 5296 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 512:
#line 5301 "yacc.y"
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
case 513:
#line 5321 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Print") ;  	
    ;
    break;}
case 514:
#line 5328 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 515:
#line 5335 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 516:
#line 5343 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 517:
#line 5351 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 518:
#line 5358 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 519:
#line 5365 "yacc.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 520:
#line 5369 "yacc.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 521:
#line 5377 "yacc.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 522:
#line 5386 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 523:
#line 5392 "yacc.y"
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
	  if (FlagError) {
	    vyyerror("Unknown Tag in Format: %s %s", tmp, 
		     Get_Valid_SXD(PostSubOperation_FormatTag)) ;
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
case 524:
#line 5439 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 526:
#line 5450 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 527:
#line 5453 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 528:
#line 5459 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 529:
#line 5460 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 531:
#line 5468 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 532:
#line 5471 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 533:
#line 5480 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 534:
#line 5483 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 535:
#line 5494 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 536:
#line 5500 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      if(!yyvsp[-2].d || (yyvsp[-5].d<yyvsp[0].d && yyvsp[-2].d<0) || (yyvsp[-5].d>yyvsp[0].d && yyvsp[-2].d>0)){
        vyyerror("Wrong Increment in '%g :[%g] %g'", yyvsp[-5].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(ListOfDouble2_L, &(yyvsp[-5].d)) ;
      }
      else 
	for(d=yyvsp[-5].d ; (yyvsp[-2].d>0)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; d+=yyvsp[-2].d)
	  List_Add(ListOfDouble2_L, &d) ;
   ;
    break;}
case 537:
#line 5519 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 538:
#line 5525 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 539:
#line 5531 "yacc.y"
{
      Constant_S.Name = yyvsp[-5].c ; Constant_S.Type = VAR_LISTOFFLOAT ;
      Constant_S.Value.ListOfFloat =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &d) ;
	List_Add(Constant_S.Value.ListOfFloat, &d) ;
      }
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 540:
#line 5543 "yacc.y"
{
      Constant_S.Name = yyvsp[-8].c ; Constant_S.Type = VAR_LISTOFFLOAT ;

      Constant1_S.Name = yyvsp[-4].c ; Constant2_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant1_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[-4].c) ;
      }
      else
	if (Constant1_S.Type != VAR_LISTOFFLOAT) {
	  vyyerror("Multi value Constant needed: %s", yyvsp[-4].c) ;
	}
	else {
	  if (!List_Query(ConstantTable_L, &Constant2_S, fcmp_Constant)) {
	    vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
	  }
	  else
	    if (Constant2_S.Type != VAR_LISTOFFLOAT) {
	      vyyerror("Multi value Constant needed: %s", yyvsp[-2].c) ;
	    }
	    else {
	      if (List_Nbr(Constant1_S.Value.ListOfFloat) !=
		  List_Nbr(Constant2_S.Value.ListOfFloat)) {
		vyyerror("Different dimensions of Multi value Constants: "
			 "%s {%d}, %s {%d}",
			 yyvsp[-4].c, List_Nbr(Constant1_S.Value.ListOfFloat),
			 yyvsp[-2].c, List_Nbr(Constant2_S.Value.ListOfFloat)) ;
	      }
	      else {
		Constant_S.Value.ListOfFloat =
		  List_Create(List_Nbr(Constant1_S.Value.ListOfFloat)*2, 1,
			      sizeof(double)) ;
		for(i=0 ; i<List_Nbr(Constant1_S.Value.ListOfFloat) ; i++) {
		  List_Read(Constant1_S.Value.ListOfFloat, i, &d) ;
		  List_Add(Constant_S.Value.ListOfFloat, &d) ;
		  List_Read(Constant2_S.Value.ListOfFloat, i, &d) ;
		  List_Add(Constant_S.Value.ListOfFloat, &d) ;
		}
	      }
	    }
	}
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 543:
#line 5594 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 544:
#line 5600 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 545:
#line 5606 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 546:
#line 5617 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 547:
#line 5618 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 548:
#line 5619 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 549:
#line 5620 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 550:
#line 5621 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 551:
#line 5622 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 552:
#line 5623 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 553:
#line 5624 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 554:
#line 5625 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 555:
#line 5626 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 556:
#line 5627 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 557:
#line 5628 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 558:
#line 5629 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 559:
#line 5630 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 560:
#line 5631 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 561:
#line 5632 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 562:
#line 5633 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 563:
#line 5634 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 564:
#line 5635 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 565:
#line 5636 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 566:
#line 5637 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 567:
#line 5640 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 568:
#line 5641 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 569:
#line 5642 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 570:
#line 5643 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 571:
#line 5644 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 572:
#line 5645 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 573:
#line 5646 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 574:
#line 5647 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 575:
#line 5648 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 576:
#line 5649 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 577:
#line 5650 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 578:
#line 5651 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 579:
#line 5652 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 580:
#line 5653 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 581:
#line 5654 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 582:
#line 5655 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 583:
#line 5656 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 584:
#line 5657 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 585:
#line 5658 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 586:
#line 5659 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 587:
#line 5660 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 588:
#line 5661 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 589:
#line 5662 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 590:
#line 5663 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 591:
#line 5664 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 592:
#line 5665 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 593:
#line 5666 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 594:
#line 5667 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 595:
#line 5668 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 596:
#line 5669 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 597:
#line 5670 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 598:
#line 5671 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 599:
#line 5672 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 600:
#line 5673 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 601:
#line 5674 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 602:
#line 5675 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 603:
#line 5676 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 604:
#line 5677 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 605:
#line 5678 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 606:
#line 5679 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 607:
#line 5684 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 608:
#line 5685 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 609:
#line 5686 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 610:
#line 5687 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 611:
#line 5688 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 612:
#line 5689 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 613:
#line 5690 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 614:
#line 5692 "yacc.y"
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
case 615:
#line 5711 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 616:
#line 5714 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant)) {
	vyyerror("Unknown Constant: %s", yyvsp[0].c) ;  yyval.c = NULL ;
      }
      else  {
	if (Constant_S.Type == VAR_CHAR)
	  yyval.c = Constant_S.Value.Char ;
	else {
	  vyyerror("Char Constant needed: %s", yyvsp[0].c) ;  yyval.c = NULL ;
	}
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 617:
#line 5729 "yacc.y"
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
#line 5743 "yacc.y"



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
  else                       vyyerror("Bad Group Right Hand Side") ;

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
    fprintf(stderr, "Error ('%s' line %ld): %s on '%s'\n", 
	    yyname, yylinenum, s, yytext) ;
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
      fprintf(stderr, "%s^\n%s%s\n\n", space2, space1, s) ;
    }
  }

  ErrorLevel=1 ;
}

void  vyyerror (char *fmt, ...){
  int      i, nn ;
  char space1[32] = "";
  va_list  args;

  if(!InteractiveLevel){
    fprintf (stderr, "Error ('%s' line %ld): ", yyname, yylinenum);
    va_start (args, fmt);
    vfprintf (stderr, fmt, args);
    va_end (args);
    fprintf (stderr, "\n");
  }
  else{
    if(!ErrorLevel){
      nn = strlen(GETDP_PROMPT_STRING) ;
      for(i=0 ; i<nn ; i++) {
	strcat(space1, " ");
      }
      fprintf(stderr, "%s", space1) ;
      va_start (args, fmt);
      vfprintf (stderr, fmt, args);
      va_end (args);
      fprintf (stderr, "\n\n");
    }
  }

  ErrorLevel=1 ;
}


