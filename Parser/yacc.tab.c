
/*  A Bison parser, made from yacc.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	tINT	257
#define	tFLOAT	258
#define	tSTRING	259
#define	tBIGSTR	260
#define	tEND	261
#define	tDOTS	262
#define	tInclude	263
#define	tConstant	264
#define	tDefineConstant	265
#define	tPi	266
#define	t0D	267
#define	t1D	268
#define	t2D	269
#define	t3D	270
#define	tExp	271
#define	tLog	272
#define	tLog10	273
#define	tSqrt	274
#define	tSin	275
#define	tAsin	276
#define	tCos	277
#define	tAcos	278
#define	tTan	279
#define	tAtan	280
#define	tAtan2	281
#define	tSinh	282
#define	tCosh	283
#define	tTanh	284
#define	tFabs	285
#define	tFloor	286
#define	tCeil	287
#define	tFmod	288
#define	tModulo	289
#define	tHypot	290
#define	tSolidAngle	291
#define	tTrace	292
#define	tOrder	293
#define	tCrossProduct	294
#define	tMHTimeIntegration	295
#define	tGroup	296
#define	tDefineGroup	297
#define	tAll	298
#define	tInSupport	299
#define	tDefineFunction	300
#define	tList	301
#define	tListAlt	302
#define	tConstraint	303
#define	tRegion	304
#define	tSubRegion	305
#define	tRegionRef	306
#define	tSubRegionRef	307
#define	tFilter	308
#define	tCoefficient	309
#define	tValue	310
#define	tTimeFunction	311
#define	tBranch	312
#define	tNode	313
#define	tLoop	314
#define	tNameOfResolution	315
#define	tJacobian	316
#define	tCase	317
#define	tIntegration	318
#define	tType	319
#define	tSubType	320
#define	tCriterion	321
#define	tGeoElement	322
#define	tNumberOfPoints	323
#define	tMaxNumberOfPoints	324
#define	tNumberOfDivisions	325
#define	tMaxNumberOfDivisions	326
#define	tStoppingCriterion	327
#define	tFunctionSpace	328
#define	tName	329
#define	tBasisFunction	330
#define	tNameOfCoef	331
#define	tFunction	332
#define	tSupport	333
#define	tEntity	334
#define	tSubSpace	335
#define	tNameOfBasisFunction	336
#define	tGlobalQuantity	337
#define	tEntityType	338
#define	tEntitySubType	339
#define	tNameOfConstraint	340
#define	tFormulation	341
#define	tQuantity	342
#define	tNameOfSpace	343
#define	tIndexOfSystem	344
#define	tSymmetry	345
#define	tEquation	346
#define	tGalerkin	347
#define	tdeRham	348
#define	tGlobalTerm	349
#define	tGlobalEquation	350
#define	tDt	351
#define	tDtDof	352
#define	tDtDt	353
#define	tDtDtDof	354
#define	tJacNL	355
#define	tNeverDt	356
#define	tIn	357
#define	tResolution	358
#define	tDefineSystem	359
#define	tNameOfFormulation	360
#define	tNameOfMesh	361
#define	tFrequency	362
#define	tSolver	363
#define	tOriginSystem	364
#define	tDestinationSystem	365
#define	tOperation	366
#define	tOperationEnd	367
#define	tSetTime	368
#define	tDTime	369
#define	tSetFrequency	370
#define	tFourierTransform	371
#define	tIf	372
#define	tElse	373
#define	tLanczos	374
#define	tUpdate	375
#define	tTimeLoopTheta	376
#define	tTime0	377
#define	tTimeMax	378
#define	tTheta	379
#define	tTimeLoopNewmark	380
#define	tBeta	381
#define	tGamma	382
#define	tIterativeLoop	383
#define	tNbrMaxIteration	384
#define	tRelaxationFactor	385
#define	tIterativeTimeReduction	386
#define	tDivisionCoefficient	387
#define	tChangeOfState	388
#define	tChangeOfCoordinates	389
#define	tSystemCommand	390
#define	tPostProcessing	391
#define	tNameOfSystem	392
#define	tPostOperation	393
#define	tNameOfPostProcessing	394
#define	tUsingPost	395
#define	tAppend	396
#define	tPlot	397
#define	tPrint	398
#define	tWrite	399
#define	tAdapt	400
#define	tOnGlobal	401
#define	tOnRegion	402
#define	tOnElementsOf	403
#define	tOnGrid	404
#define	tOnCut	405
#define	tOnPoint	406
#define	tOnLine	407
#define	tOnPlane	408
#define	tOnBox	409
#define	tWithArgument	410
#define	tFile	411
#define	tDepth	412
#define	tDimension	413
#define	tTimeStep	414
#define	tHarmonicToTime	415
#define	tFormat	416
#define	tHeader	417
#define	tFooter	418
#define	tSkin	419
#define	tSmoothing	420
#define	tTarget	421
#define	tSort	422
#define	tIso	423
#define	tFlag	424
#define	tBreak	425
#define	tHelp	426
#define	tCpu	427
#define	tDEF	428
#define	tAND	429
#define	tOR	430
#define	tNOTEQUAL	431
#define	tEQUAL	432
#define	tAPPROXEQUAL	433
#define	tLESSOREQUAL	434
#define	tGREATEROREQUAL	435
#define	tLESSLESS	436
#define	tGREATERGREATER	437
#define	tCROSSPRODUCT	438
#define	UNARYPREC	439

#line 1 "yacc.y"

/* $Id: yacc.tab.c,v 1.29 2000-10-30 09:04:05 dular Exp $ */

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



#define	YYFINAL		1551
#define	YYFLAG		-32768
#define	YYNTBASE	206

#define YYTRANSLATE(x) ((unsigned)(x) <= 439 ? yytranslate[x] : 389)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   194,     2,   196,   197,   191,     2,     2,   203,
   204,   189,   187,   202,   188,   205,   190,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   181,
     2,   182,   175,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   200,     2,   201,   195,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   198,     2,   199,     2,     2,     2,     2,     2,
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
   167,   168,   169,   170,   171,   172,   173,   174,   176,   177,
   178,   179,   180,   183,   184,   185,   186,   192,   193
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
  2035,  2036,  2039,  2040,  2044,  2046,  2050,  2051,  2053,  2057,
  2059,  2061,  2065,  2069,  2073,  2080,  2085,  2090,  2097,  2107,
  2113,  2114,  2118,  2124,  2130,  2132,  2134,  2136,  2138,  2140,
  2142,  2144,  2146,  2148,  2150,  2152,  2154,  2156,  2158,  2160,
  2162,  2164,  2166,  2168,  2170,  2172,  2174,  2178,  2181,  2184,
  2188,  2192,  2196,  2200,  2204,  2208,  2212,  2216,  2220,  2224,
  2228,  2232,  2236,  2240,  2245,  2250,  2255,  2260,  2265,  2270,
  2275,  2280,  2285,  2290,  2297,  2302,  2307,  2312,  2317,  2322,
  2327,  2334,  2341,  2348,  2354,  2357,  2359,  2361,  2363,  2365,
  2367,  2369,  2371,  2373,  2375
};

static const short yyrhs[] = {    -1,
   207,   208,     0,     0,     0,   208,   209,   210,     0,    42,
   198,   213,   199,     0,    78,   198,   233,   199,     0,    49,
   198,   265,   199,     0,    62,   198,   250,   199,     0,    64,
   198,   256,   199,     0,    74,   198,   272,   199,     0,    87,
   198,   293,   199,     0,   104,   198,   319,   199,     0,   137,
   198,   349,   199,     0,   139,   198,   361,   199,     0,   365,
     0,   383,     0,     9,   388,     0,   211,     0,   172,     7,
     0,   172,     5,     7,     0,   172,     5,     5,     7,     0,
   172,     5,     5,     5,     7,     0,   173,     7,     0,     0,
   212,   369,     0,     0,     0,   213,   214,   215,     0,     5,
   174,   217,     7,     0,     5,   232,   174,   217,     7,     0,
     0,     5,   230,   174,   216,   217,     7,     0,    43,   200,
   228,   201,     7,     0,   383,     0,     0,     0,   221,   200,
   218,   222,   219,   223,   201,     0,   196,   225,     0,   217,
     0,     5,   231,     0,    50,     0,     5,     0,   225,     0,
    44,     0,     0,   229,   224,   225,     0,   229,    45,     5,
   231,     0,     5,     0,   227,     0,   198,   226,   199,     0,
     0,   226,   229,   227,     0,   226,   229,   188,   227,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   200,   386,
   201,     3,     0,     5,     0,     5,   198,   386,   199,     0,
     5,   198,   199,     0,     0,   228,   229,     5,     0,   228,
   229,     5,   198,   386,   199,     0,     0,   202,     0,   198,
   196,   386,   199,     0,     0,   198,   199,     0,   198,   386,
   199,     0,     0,   233,   234,     0,    46,   200,   235,   201,
     7,     0,     5,   200,   201,   174,   236,     7,     0,     5,
   200,   220,   201,   174,   236,     7,     0,   383,     0,     0,
   235,   229,     5,     0,    10,   200,   386,   201,     0,    78,
   200,     5,   201,     0,     0,   237,   238,     0,     0,   239,
   240,     0,   243,     0,     0,     0,   240,   175,   241,   240,
     8,   242,   240,     0,   240,   189,   240,     0,   240,   192,
   240,     0,    40,   200,   240,   202,   240,   201,     0,   240,
   190,   240,     0,   240,   187,   240,     0,   240,   188,   240,
     0,   240,   191,   240,     0,   240,   195,   240,     0,   240,
   181,   240,     0,   240,   182,   240,     0,   240,   183,   240,
     0,   240,   184,   240,     0,   240,   179,   240,     0,   240,
   178,   240,     0,   240,   180,   240,     0,   240,   176,   240,
     0,   240,   177,   240,     0,   188,   240,     0,   187,   240,
     0,   194,   240,     0,   203,   240,   204,     0,   387,     0,
   385,   247,   249,     0,     5,   318,     0,   318,     0,   318,
   247,     0,     0,    97,   244,   200,   238,   201,     0,     0,
    41,   245,   200,     3,   202,   386,   202,   238,   202,   238,
   201,     0,    37,   200,   318,   201,     0,    39,   200,   318,
   201,     0,     0,    38,   246,   200,   238,   202,   220,   201,
     0,   181,     5,   182,   200,   238,   201,     0,   197,     5,
     0,   197,   160,     0,   197,   115,     0,   197,     3,     0,
   243,   196,     3,     0,   196,     3,     0,   200,   205,   201,
     0,   200,   201,     0,   200,   248,   201,     0,   240,     0,
   248,   202,   240,     0,     0,   198,   381,   199,     0,   198,
    50,   200,   220,   201,   199,     0,   198,    47,   200,     5,
   201,   199,     0,     0,   250,   198,   251,   199,     0,     0,
   251,   252,     0,    75,     5,     7,     0,    63,   198,   253,
   199,     0,     0,   253,   198,   254,   199,     0,     0,   254,
   255,     0,    50,   220,     7,     0,    50,    44,     7,     0,
    62,     5,   249,     7,     0,     0,   256,   198,   257,   199,
     0,     0,   257,   258,     0,    75,     5,     7,     0,    67,
   236,     7,     0,    63,   198,   259,   199,     0,     0,   259,
   198,   260,   199,     0,     0,   260,   261,     0,    65,     5,
     7,     0,    66,     5,     7,     0,    63,   198,   262,   199,
     0,     0,   262,   198,   263,   199,     0,     0,   263,   264,
     0,    68,     5,     7,     0,    69,   386,     7,     0,    70,
   386,     7,     0,    71,   386,     7,     0,    72,   386,     7,
     0,    73,   386,     7,     0,     0,   265,   266,     0,   198,
   267,   199,     0,   383,     0,     0,   267,   268,     0,    75,
     5,     7,     0,    75,     5,   230,     7,     0,    65,     5,
     7,     0,    63,   198,   269,   199,     0,    63,     5,   198,
   269,   199,     0,     0,   269,   198,   270,   199,     0,     0,
   270,   271,     0,    65,     5,     7,     0,    50,   220,     7,
     0,    51,   220,     7,     0,    57,   236,     7,     0,    56,
   236,     7,     0,    61,     5,     7,     0,    58,   198,     3,
   229,     3,   199,     7,     0,    52,   220,     7,     0,    53,
   220,     7,     0,    78,   236,     7,     0,    55,   236,     7,
     0,    54,   236,     7,     0,    78,   200,   236,   202,   236,
   201,     7,     0,    55,   200,   236,   202,   236,   201,     7,
     0,    54,   200,   236,   202,   236,   201,     7,     0,     0,
   272,   273,     0,   198,   274,   199,     0,   383,     0,     0,
   274,   275,     0,    75,     5,     7,     0,    75,     5,   230,
     7,     0,    65,     5,     7,     0,    76,   198,   276,   199,
     0,    81,   198,   282,   199,     0,    83,   198,   287,   199,
     0,    49,   198,   290,   199,     0,     0,   276,   198,   277,
   199,     0,     0,   277,   278,     0,    75,     5,     7,     0,
    77,     5,     7,     0,    77,     5,   230,     7,     0,    78,
     5,   279,     7,     0,    79,   220,     7,     0,    80,   220,
     7,     0,     0,     0,     0,   198,    88,     5,     7,    87,
     5,   230,     7,   280,    42,   220,     7,   281,   104,     5,
   231,     7,   199,     0,     0,   282,   198,   283,   199,     0,
     0,   283,   284,     0,    75,     5,     7,     0,    82,   285,
     7,     0,     5,     0,   198,   286,   199,     0,     0,   286,
   229,     5,     0,     0,   287,   198,   288,   199,     0,     0,
   288,   289,     0,    75,     5,     7,     0,    65,     5,     7,
     0,    77,     5,     7,     0,     0,   290,   198,   291,   199,
     0,     0,   291,   292,     0,    77,     5,     7,     0,    80,
   221,    86,     5,     7,     0,    84,   221,     7,     0,    85,
   224,     7,     0,    86,     5,   231,     7,     0,     0,   293,
   294,     0,   198,   295,   199,     0,   383,     0,     0,   295,
   296,     0,    75,     5,     7,     0,    75,     5,   230,     7,
     0,    65,     5,     7,     0,    88,   198,   297,   199,     0,
    92,   198,   303,   199,     0,     0,   297,   198,   298,   199,
     0,     0,   298,   299,     0,    75,     5,     7,     0,    65,
    83,     7,     0,    65,    93,     7,     0,    65,     5,     7,
     0,     0,    89,     5,   231,   300,   302,     7,     0,    90,
     3,     7,     0,     0,   200,   301,   238,   201,     7,     0,
   103,   220,     7,     0,    64,     5,     7,     0,    62,     5,
     7,     0,    91,     3,     7,     0,     0,   200,     5,   201,
     0,     0,   303,   304,     0,    93,   198,   309,   199,     0,
    94,   198,   309,   199,     0,    95,   198,   313,   199,     0,
    96,   198,   305,   199,     0,     0,   305,   306,     0,    65,
     5,     7,     0,    86,     5,     7,     0,   198,   307,   199,
     0,     0,   307,   308,     0,    59,   318,     7,     0,    60,
   318,     7,     0,    92,   318,     7,     0,   103,   220,     7,
     0,     0,   309,   310,     0,     0,     0,   317,   200,   311,
   238,   312,   202,   238,   201,     7,     0,   103,   220,     7,
     0,    62,     5,     7,     0,    64,     5,     7,     0,     0,
   313,   314,     0,   103,   220,     7,     0,     0,     0,   317,
   200,   315,   238,   316,   202,   318,   201,     7,     0,     0,
    97,     0,    98,     0,    99,     0,   100,     0,   101,     0,
   102,     0,   198,     5,     5,   199,     0,   198,     5,   199,
     0,     0,   319,   320,     0,   198,   321,   199,     0,   383,
     0,     0,   321,   322,     0,    75,     5,     7,     0,    75,
     5,   230,     7,     0,   105,   198,   324,   199,     0,     0,
   112,   323,   198,   331,   199,     0,     0,   324,   198,   325,
   199,     0,     0,   325,   326,     0,    75,     5,     7,     0,
    65,     5,     7,     0,   106,   327,     7,     0,   107,   388,
     7,     0,   110,   329,     7,     0,   111,     5,     7,     0,
   108,   380,     7,     0,   109,   388,     7,     0,     5,   231,
     0,   198,   328,   199,     0,     0,   328,   229,     5,     0,
     5,     0,   198,   330,   199,     0,     0,   330,   229,     5,
     0,     0,   331,   332,     0,     5,     5,     7,     0,   114,
   236,     7,     0,   122,   198,   338,   199,     0,   126,   198,
   340,   199,     0,   129,   198,   342,   199,     0,   132,   198,
   344,   199,     0,     5,   200,     5,   201,     7,     0,   114,
   200,   236,   201,     7,     0,   171,     7,     0,   118,   200,
   236,   201,   198,   331,   199,     0,   118,   200,   236,   201,
   198,   331,   199,   119,   198,   331,   199,     0,   116,   200,
     5,   202,   236,   201,     7,     0,   121,   200,     5,   202,
   236,   201,     7,     0,   117,   200,     5,   202,     5,   202,
   380,   201,     7,     0,   120,   200,     5,   202,   386,   202,
   380,   202,   386,   201,     7,     0,   122,   200,   386,   202,
   386,   202,   236,   202,   236,   201,   198,   331,   199,     0,
   126,   200,   386,   202,   386,   202,   236,   202,   386,   202,
   386,   201,   198,   331,   199,     0,     0,   144,   333,   200,
   335,   336,   201,     7,     0,     0,   145,   334,   200,   335,
   336,   201,     7,     0,   135,   200,   220,   202,   236,   201,
     7,     0,   136,     6,     7,     0,   378,     0,     5,     0,
     0,   336,   337,     0,   202,   157,   388,     0,   202,   160,
   380,     0,   202,   380,     0,     0,   338,   339,     0,   123,
   386,     7,     0,   124,   386,     7,     0,   115,   236,     7,
     0,   125,   236,     7,     0,   112,   198,   331,   199,     0,
     0,   340,   341,     0,   123,   386,     7,     0,   124,   386,
     7,     0,   115,   236,     7,     0,   127,   386,     7,     0,
   128,   386,     7,     0,   112,   198,   331,   199,     0,     0,
   342,   343,     0,   130,   386,     7,     0,   131,   236,     7,
     0,    67,   386,     7,     0,   170,   386,     7,     0,   112,
   198,   331,   199,     0,     0,   344,   345,     0,   130,   386,
     7,     0,   133,   386,     7,     0,    67,   386,     7,     0,
   170,   386,     7,     0,   105,     5,     7,     0,   134,   198,
   346,   199,     0,   112,   198,   331,   199,     0,   113,   198,
   331,   199,     0,     0,   346,   198,   347,   199,     0,     0,
   347,   348,     0,    65,     5,     7,     0,    88,     5,     7,
     0,   103,   220,     7,     0,    67,   386,     7,     0,    78,
   236,     7,     0,   170,     5,     7,     0,     0,   349,   350,
     0,   198,   351,   199,     0,   383,     0,     0,   351,   352,
     0,    75,     5,     7,     0,    75,     5,   230,     7,     0,
   106,     5,   231,     7,     0,   138,     5,     7,     0,    88,
   198,   353,   199,     0,     0,   353,   198,   354,   199,     0,
     0,   354,   355,     0,    75,     5,     7,     0,    56,   198,
   356,   199,     0,     0,   356,    93,   198,   357,   199,     0,
   356,     5,   198,   357,   199,     0,     0,   357,   358,     0,
     0,   317,   200,   359,   238,   201,     7,     0,    65,     5,
     7,     0,     0,   103,   360,   220,     7,     0,    62,     5,
     7,     0,    64,     5,     7,     0,     0,   361,   362,     0,
   198,   363,   199,     0,   383,     0,     0,   363,   364,     0,
    75,     5,     7,     0,   140,     5,     7,     0,   162,     5,
     7,     0,   142,   388,     7,     0,   112,   198,   367,   199,
     0,     0,   139,     5,   141,     5,   366,   198,   367,   199,
     0,     0,     0,   367,   368,   369,     0,   143,   200,   370,
   373,   375,   201,     7,     0,   144,   200,   370,   373,   375,
   201,     7,     0,     5,   372,   202,     0,     5,   372,   371,
     5,   372,   202,     0,   189,     0,   190,     0,   187,     0,
   188,     0,     0,   200,   220,   201,     0,   147,     0,   148,
   220,     0,   149,   220,     0,   151,   198,   198,   386,   202,
   386,   202,   386,   199,   198,   386,   202,   386,   202,   386,
   199,   198,   386,   202,   386,   202,   386,   199,   199,     0,
   150,   220,     0,     0,   150,   198,   236,   202,   236,   202,
   236,   199,   198,   380,   374,   202,   380,   199,     0,   152,
   198,   386,   202,   386,   202,   386,   199,     0,   153,   198,
   198,   386,   202,   386,   202,   386,   199,   198,   386,   202,
   386,   202,   386,   199,   199,   198,   386,   199,     0,   154,
   198,   198,   386,   202,   386,   202,   386,   199,   198,   386,
   202,   386,   202,   386,   199,   198,   386,   202,   386,   202,
   386,   199,   199,   198,   386,   202,   386,   199,     0,   155,
   198,   198,   386,   202,   386,   202,   386,   199,   198,   386,
   202,   386,   202,   386,   199,   198,   386,   202,   386,   202,
   386,   199,   198,   386,   202,   386,   202,   386,   199,   199,
   198,   386,   202,   386,   202,   386,   199,     0,   148,   220,
   156,     5,   198,   386,   202,   386,   199,   198,   386,   199,
     0,     0,   375,   376,     0,   202,   157,   388,     0,   202,
   157,   182,   388,     0,   202,   157,   186,   388,     0,   202,
   158,   386,     0,   202,   165,     0,   202,   166,   386,     0,
   202,   161,   386,     0,   202,   162,     5,     0,   202,   163,
   377,     0,   202,   164,   377,     0,   202,   162,   377,     0,
   202,   159,   386,     0,   202,   160,   380,     0,   202,   146,
     5,     0,   202,   168,     5,     0,   202,   167,   386,     0,
   202,    56,   380,     0,   202,   169,   386,     0,   202,   169,
   198,   381,   199,     0,     0,   377,     6,     0,     0,   198,
   379,   199,     0,   236,     0,   379,   202,   236,     0,     0,
   386,     0,   198,   381,   199,     0,   386,     0,   382,     0,
   381,   202,   386,     0,   381,   202,   382,     0,   386,     8,
   386,     0,   386,     8,   200,   386,   201,   386,     0,     5,
   174,   386,     7,     0,     5,   174,     6,     7,     0,     5,
   174,   198,   381,   199,     7,     0,     5,   174,    48,   200,
     5,   202,     5,   201,     7,     0,    11,   200,   384,   201,
     7,     0,     0,   384,   229,     5,     0,   384,   229,     5,
   174,   386,     0,   384,   229,     5,   174,     6,     0,    17,
     0,    18,     0,    19,     0,    20,     0,    21,     0,    22,
     0,    23,     0,    24,     0,    25,     0,    26,     0,    27,
     0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
     0,    33,     0,    34,     0,    35,     0,    36,     0,     5,
     0,   387,     0,   203,   386,   204,     0,   188,   386,     0,
   194,   386,     0,   386,   188,   386,     0,   386,   187,   386,
     0,   386,   189,   386,     0,   386,   190,   386,     0,   386,
   191,   386,     0,   386,   195,   386,     0,   386,   181,   386,
     0,   386,   182,   386,     0,   386,   183,   386,     0,   386,
   184,   386,     0,   386,   179,   386,     0,   386,   178,   386,
     0,   386,   176,   386,     0,   386,   177,   386,     0,    17,
   200,   386,   201,     0,    18,   200,   386,   201,     0,    19,
   200,   386,   201,     0,    20,   200,   386,   201,     0,    21,
   200,   386,   201,     0,    22,   200,   386,   201,     0,    23,
   200,   386,   201,     0,    24,   200,   386,   201,     0,    25,
   200,   386,   201,     0,    26,   200,   386,   201,     0,    27,
   200,   386,   202,   386,   201,     0,    28,   200,   386,   201,
     0,    29,   200,   386,   201,     0,    30,   200,   386,   201,
     0,    31,   200,   386,   201,     0,    32,   200,   386,   201,
     0,    33,   200,   386,   201,     0,    34,   200,   386,   202,
   386,   201,     0,    35,   200,   386,   202,   386,   201,     0,
    36,   200,   386,   202,   386,   201,     0,   386,   175,   386,
     8,   386,     0,   386,   196,     0,     4,     0,     3,     0,
    12,     0,    13,     0,    14,     0,    15,     0,    16,     0,
     5,     0,     6,     0,     5,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   309,   346,   384,   387,   390,   393,   396,   397,   398,   399,
   400,   401,   402,   403,   404,   406,   408,   410,   415,   424,
   428,   431,   434,   437,   439,   447,   461,   464,   465,   468,
   473,   476,   478,   481,   483,   487,   495,   506,   515,   524,
   531,   566,   571,   581,   584,   598,   603,   606,   655,   667,
   693,   698,   713,   731,   752,   758,   767,   781,   815,   828,
   848,   852,   862,   879,   879,   882,   888,   891,   894,   904,
   907,   910,   914,   934,   978,   982,   985,  1002,  1011,  1018,
  1021,  1027,  1033,  1040,  1044,  1057,  1072,  1086,  1092,  1098,
  1104,  1110,  1116,  1122,  1128,  1134,  1140,  1146,  1152,  1158,
  1164,  1170,  1176,  1182,  1189,  1195,  1197,  1206,  1210,  1216,
  1294,  1328,  1338,  1351,  1353,  1364,  1366,  1382,  1388,  1394,
  1396,  1425,  1449,  1460,  1466,  1473,  1479,  1490,  1504,  1507,
  1508,  1511,  1514,  1517,  1522,  1524,  1531,  1556,  1563,  1568,
  1573,  1577,  1584,  1589,  1594,  1599,  1605,  1609,  1614,  1617,
  1646,  1654,  1659,  1668,  1672,  1681,  1684,  1689,  1694,  1699,
  1707,  1711,  1722,  1731,  1736,  1741,  1746,  1758,  1762,  1817,
  1820,  1823,  1826,  1829,  1838,  1845,  1848,  1870,  1873,  1883,
  1887,  1895,  1902,  1910,  1913,  1933,  1950,  1972,  1982,  1986,
  1997,  2021,  2046,  2051,  2059,  2067,  2077,  2093,  2100,  2106,
  2112,  2120,  2128,  2136,  2154,  2162,  2165,  2188,  2192,  2201,
  2205,  2213,  2220,  2228,  2231,  2234,  2237,  2242,  2260,  2295,
  2310,  2314,  2319,  2324,  2329,  2341,  2365,  2420,  2424,  2428,
  2437,  2500,  2506,  2511,  2516,  2520,  2527,  2532,  2550,  2555,
  2559,  2576,  2582,  2589,  2596,  2600,  2607,  2616,  2627,  2644,
  2716,  2728,  2732,  2752,  2766,  2769,  2772,  2816,  2823,  2826,
  2848,  2852,  2860,  2864,  2872,  2879,  2888,  2890,  2895,  2910,
  2926,  2943,  2947,  2952,  2956,  2959,  2968,  3007,  3031,  3036,
  3042,  3192,  3197,  3206,  3215,  3220,  3223,  3261,  3278,  3304,
  3309,  3312,  3315,  3320,  3328,  3331,  3342,  3352,  3364,  3373,
  3376,  3380,  3382,  3384,  3390,  3408,  3412,  3423,  3484,  3530,
  3554,  3563,  3575,  3592,  3596,  3630,  3639,  3693,  3709,  3712,
  3713,  3714,  3715,  3716,  3717,  3721,  3737,  3753,  3760,  3763,
  3784,  3788,  3796,  3800,  3809,  3816,  3819,  3821,  3826,  3842,
  3859,  3874,  3878,  3883,  3891,  3894,  3899,  3904,  3909,  3919,
  3926,  3965,  3970,  3975,  3985,  3997,  4001,  4006,  4017,  4026,
  4033,  4053,  4060,  4066,  4072,  4078,  4086,  4102,  4109,  4115,
  4126,  4137,  4153,  4165,  4187,  4208,  4221,  4235,  4242,  4244,
  4251,  4253,  4263,  4273,  4283,  4293,  4299,  4302,  4306,  4315,
  4326,  4338,  4342,  4348,  4352,  4356,  4361,  4370,  4383,  4387,
  4393,  4397,  4401,  4405,  4410,  4419,  4431,  4434,  4440,  4444,
  4448,  4453,  4462,  4477,  4480,  4486,  4490,  4494,  4499,  4509,
  4515,  4521,  4530,  4534,  4538,  4552,  4555,  4566,  4595,  4598,
  4601,  4609,  4623,  4631,  4634,  4655,  4658,  4669,  4672,  4680,
  4688,  4734,  4739,  4744,  4748,  4752,  4759,  4763,  4767,  4772,
  4778,  4784,  4796,  4807,  4810,  4818,  4846,  4856,  4856,  4862,
  4871,  4887,  4895,  4898,  4903,  4906,  4915,  4918,  4926,  4938,
  4948,  4953,  4958,  4976,  4985,  4989,  4994,  5002,  5010,  5017,
  5031,  5053,  5056,  5057,  5058,  5061,  5065,  5069,  5077,  5084,
  5091,  5107,  5114,  5128,  5138,  5146,  5159,  5177,  5201,  5221,
  5238,  5241,  5249,  5256,  5263,  5267,  5271,  5275,  5279,  5288,
  5293,  5298,  5318,  5325,  5332,  5340,  5348,  5355,  5362,  5366,
  5378,  5385,  5431,  5437,  5441,  5446,  5451,  5454,  5455,  5459,
  5464,  5473,  5476,  5485,  5493,  5510,  5518,  5524,  5536,  5580,
  5584,  5587,  5593,  5599,  5610,  5612,  5613,  5614,  5615,  5616,
  5617,  5618,  5619,  5620,  5621,  5622,  5623,  5624,  5625,  5626,
  5627,  5628,  5629,  5630,  5631,  5633,  5635,  5636,  5637,  5638,
  5639,  5640,  5641,  5642,  5643,  5644,  5645,  5646,  5647,  5648,
  5649,  5650,  5651,  5652,  5653,  5654,  5655,  5656,  5657,  5658,
  5659,  5660,  5661,  5662,  5663,  5664,  5665,  5666,  5667,  5668,
  5669,  5670,  5671,  5672,  5673,  5676,  5679,  5680,  5681,  5682,
  5683,  5684,  5685,  5702,  5707
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tInclude","tConstant","tDefineConstant",
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
"tFooter","tSkin","tSmoothing","tTarget","tSort","tIso","tFlag","tBreak","tHelp",
"tCpu","tDEF","'?'","tAND","tOR","tNOTEQUAL","tEQUAL","tAPPROXEQUAL","'<'","'>'",
"tLESSOREQUAL","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'","'*'",
"'/'","'%'","tCROSSPRODUCT","UNARYPREC","'!'","'^'","'#'","'$'","'{'","'}'",
"'['","']'","','","'('","')'","'.'","Stats","@1","ProblemDefinitions","@2","ProblemDefinition",
"Interactive","@3","Groups","@4","Group","@5","ReducedGroupRHS","@6","@7","GroupRHS",
"FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup",
"ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension",
"MultipleIndex","Index","Functions","Function","DefineFunctions","Expression",
"@8","WholeQuantityExpression","@9","WholeQuantity","@10","@11","WholeQuantity_Single",
"@12","@13","@14","ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction",
"JacobianMethods","JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase",
"JacobianCaseTerm","IntegrationMethods","IntegrationMethod","IntegrationMethodTerm",
"IntegrationCases","IntegrationCase","IntegrationCaseTerm","QuadratureCases",
"QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint","Constraint",
"ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm","FunctionSpaces",
"BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction",
"BasisFunctionTerm","OptionalParametersForBasisFunction","@15","@16","SubSpaces",
"SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
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
   207,   206,   208,   209,   208,   210,   210,   210,   210,   210,
   210,   210,   210,   210,   210,   210,   210,   210,   210,   211,
   211,   211,   211,   211,   212,   211,   213,   214,   213,   215,
   215,   216,   215,   215,   215,   218,   219,   217,   217,   220,
   220,   221,   221,   222,   222,   223,   223,   223,   224,   225,
   225,   226,   226,   226,   227,   227,   227,   227,   227,   227,
   228,   228,   228,   229,   229,   230,   231,   231,   232,   233,
   233,   234,   234,   234,   234,   235,   235,   236,   236,   237,
   236,   239,   238,   240,   241,   242,   240,   240,   240,   240,
   240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
   240,   240,   240,   240,   240,   240,   240,   243,   243,   243,
   243,   243,   243,   244,   243,   245,   243,   243,   243,   246,
   243,   243,   243,   243,   243,   243,   243,   243,   247,   247,
   247,   248,   248,   249,   249,   249,   249,   250,   250,   251,
   251,   252,   252,   253,   253,   254,   254,   255,   255,   255,
   256,   256,   257,   257,   258,   258,   258,   259,   259,   260,
   260,   261,   261,   261,   262,   262,   263,   263,   264,   264,
   264,   264,   264,   264,   265,   265,   266,   266,   267,   267,
   268,   268,   268,   268,   268,   269,   269,   270,   270,   271,
   271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
   271,   271,   271,   271,   272,   272,   273,   273,   274,   274,
   275,   275,   275,   275,   275,   275,   275,   276,   276,   277,
   277,   278,   278,   278,   278,   278,   278,   279,   280,   281,
   279,   282,   282,   283,   283,   284,   284,   285,   285,   286,
   286,   287,   287,   288,   288,   289,   289,   289,   290,   290,
   291,   291,   292,   292,   292,   292,   292,   293,   293,   294,
   294,   295,   295,   296,   296,   296,   296,   296,   297,   297,
   298,   298,   299,   299,   299,   299,   300,   299,   299,   301,
   299,   299,   299,   299,   299,   302,   302,   303,   303,   304,
   304,   304,   304,   305,   305,   306,   306,   306,   307,   307,
   308,   308,   308,   308,   309,   309,   311,   312,   310,   310,
   310,   310,   313,   313,   314,   315,   316,   314,   317,   317,
   317,   317,   317,   317,   317,   318,   318,   319,   319,   320,
   320,   321,   321,   322,   322,   322,   323,   322,   324,   324,
   325,   325,   326,   326,   326,   326,   326,   326,   326,   326,
   327,   327,   328,   328,   329,   329,   330,   330,   331,   331,
   332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
   332,   332,   332,   332,   332,   332,   332,   333,   332,   334,
   332,   332,   332,   335,   335,   336,   336,   337,   337,   337,
   338,   338,   339,   339,   339,   339,   339,   340,   340,   341,
   341,   341,   341,   341,   341,   342,   342,   343,   343,   343,
   343,   343,   344,   344,   345,   345,   345,   345,   345,   345,
   345,   345,   346,   346,   347,   347,   348,   348,   348,   348,
   348,   348,   349,   349,   350,   350,   351,   351,   352,   352,
   352,   352,   352,   353,   353,   354,   354,   355,   355,   356,
   356,   356,   357,   357,   359,   358,   358,   360,   358,   358,
   358,   361,   361,   362,   362,   363,   363,   364,   364,   364,
   364,   364,   366,   365,   367,   368,   367,   369,   369,   370,
   370,   371,   371,   371,   371,   372,   372,   373,   373,   373,
   373,   373,   374,   373,   373,   373,   373,   373,   373,   375,
   375,   376,   376,   376,   376,   376,   376,   376,   376,   376,
   376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
   377,   377,   378,   378,   379,   379,   380,   380,   380,   381,
   381,   381,   381,   382,   382,   383,   383,   383,   383,   383,
   384,   384,   384,   384,   385,   385,   385,   385,   385,   385,
   385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
   385,   385,   385,   385,   385,   386,   386,   386,   386,   386,
   386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
   386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
   386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
   386,   386,   386,   386,   386,   387,   387,   387,   387,   387,
   387,   387,   387,   388,   388
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
     0,     2,     0,     3,     1,     3,     0,     1,     3,     1,
     1,     3,     3,     3,     6,     4,     4,     6,     9,     5,
     0,     3,     5,     5,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     3,     2,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
     4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
     6,     6,     6,     5,     2,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   615,   614,    18,   541,    27,   175,
   138,   151,   205,    70,   258,   328,   433,     0,   462,     0,
    20,    24,     0,     0,    26,   607,   606,   613,     0,   608,
   609,   610,   611,   612,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   566,    64,    28,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    21,     0,     0,   537,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   568,
   569,     0,   531,   530,     0,   536,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   605,     0,    65,     0,     6,     0,   179,     8,   176,
   178,   140,     9,   153,    10,   209,    11,   206,   208,     0,
     0,     7,    71,    75,   262,    12,   259,   261,   332,    13,
   329,   331,   437,    14,   434,   436,   473,   466,    15,   463,
   465,     0,    22,   486,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   567,     0,   582,   583,   581,   580,   576,   577,   578,   579,
   571,   570,   572,   573,   574,   575,   540,   542,     0,     0,
    29,    35,     0,     0,     0,     0,     0,    76,     0,     0,
     0,     0,     0,    23,     0,     0,   488,     0,     0,     0,
     0,     0,     0,     0,     0,   500,   500,   584,   585,   586,
   587,   588,   589,   590,   591,   592,   593,     0,   595,   596,
   597,   598,   599,   600,     0,     0,     0,     0,   538,   533,
   532,     0,   534,     0,     0,     0,     0,     0,     0,    61,
     0,     0,     0,   177,   180,     0,     0,   139,   141,     0,
    80,     0,   152,   154,     0,     0,     0,     0,     0,     0,
   207,   210,    67,    42,     0,     0,    40,     0,     0,    64,
     0,     0,     0,     0,   260,   263,     0,     0,   337,   330,
   333,     0,     0,     0,     0,   435,   438,   475,     0,     0,
     0,     0,     0,   464,   467,     0,   484,   485,   482,   483,
   480,     0,   489,   490,    80,   492,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   604,
   544,   543,   613,     0,     0,     0,    32,     0,    64,     0,
   186,     0,     0,   144,     0,   158,     0,     0,     0,    82,
     0,   249,     0,     0,   218,   232,   242,     0,    41,    55,
    58,    52,    39,    50,    80,     0,    36,     0,     0,     0,
     0,   269,   288,     0,   339,     0,     0,   444,    67,     0,
   476,     0,   475,     0,     0,     0,   487,   486,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   501,     0,   594,
   601,   602,   603,     0,     0,    30,     0,    69,     0,    43,
     0,     0,     0,   186,     0,   183,   181,     0,     0,     0,
   142,     0,     0,     0,   156,    81,     0,   155,     0,   213,
   211,     0,     0,     0,     0,    68,     0,     0,    64,     0,
    80,     0,    72,    77,   266,   264,     0,     0,     0,   334,
     0,     0,   359,   439,     0,     0,     0,   442,   474,     0,
   468,   476,   469,   471,   470,     0,     0,    80,     0,     0,
     0,     0,     0,   478,   527,     0,     0,     0,     0,   527,
     0,   521,   521,   521,   506,     0,     0,     0,     0,   479,
   539,   535,    66,     0,    31,    34,    62,     0,   188,   184,
   182,   146,   143,   160,   157,     0,     0,   613,   545,   546,
   547,   548,   549,   550,   551,   552,   553,   554,   555,   556,
   557,   558,   559,   560,   561,   562,   563,   564,     0,   120,
     0,     0,   116,   114,     0,     0,     0,     0,     0,     0,
     0,     0,    83,    84,   112,     0,   109,   251,   217,   212,
   220,   214,   234,   215,   244,   216,    56,     0,    60,     0,
    51,     0,    73,     0,    45,    37,    44,   265,   271,   267,
     0,     0,     0,     0,   268,   289,   335,   341,   336,     0,
   440,   446,   443,   441,   477,   472,   481,     0,     0,     0,
     0,     0,     0,     0,     0,   518,   528,   515,     0,     0,
   502,   505,   513,   514,   508,   509,   512,   510,   511,   507,
   517,   516,     0,   519,    33,     0,   185,     0,     0,     0,
    78,    79,   111,     0,     0,     0,     0,     0,     0,     0,
   106,   105,   107,   128,   126,   123,   125,   124,     0,     0,
    85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
   134,     0,     0,     0,     0,     0,    59,     0,    53,    74,
    64,     0,   305,   305,   313,   294,     0,     0,    80,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   378,   380,     0,   338,   360,     0,     0,    80,     0,     0,
     0,     0,     0,     0,   503,   504,   522,     0,     0,     0,
     0,     0,     0,    80,    80,    80,    80,     0,     0,     0,
    80,   187,   189,     0,     0,   145,   147,     0,     0,     0,
   159,   161,     0,    82,     0,     0,     0,    82,     0,     0,
   327,   108,     0,   103,   104,   101,   100,   102,    96,    97,
    98,    99,    92,    93,    88,    91,    94,    89,    95,   127,
   130,     0,   132,     0,     0,   110,     0,     0,     0,     0,
     0,   250,   252,     0,     0,     0,     0,     0,   219,   221,
     0,     0,   233,   235,     0,     0,     0,   243,   245,     0,
    54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   270,   280,   272,   319,   319,   319,     0,     0,     0,
     0,     0,   527,     0,     0,     0,   340,   342,     0,     0,
    80,     0,     0,     0,    80,     0,     0,   391,     0,   398,
     0,   406,   413,     0,     0,     0,     0,   369,     0,     0,
   445,   447,     0,     0,     0,     0,     0,     0,     0,   529,
   520,    63,     0,     0,     0,     0,    80,     0,    80,     0,
     0,     0,     0,     0,     0,    80,     0,     0,     0,   134,
   165,     0,     0,   118,     0,   119,     0,     0,     0,    82,
   326,     0,   129,   131,     0,     0,     0,     0,     0,     0,
     0,    49,     0,    67,     0,     0,   228,     0,     0,     0,
   238,   240,     0,     0,     0,     0,    57,    38,     0,     0,
     0,     0,     0,     0,     0,     0,    67,     0,     0,     0,
    82,     0,     0,   320,   321,   322,   323,   324,   325,     0,
   290,   306,     0,   291,     0,   292,   314,     0,     0,     0,
   299,   293,   295,     0,     0,    67,   353,     0,     0,     0,
     0,   355,   357,     0,     0,   361,     0,     0,   362,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   383,   523,   523,   450,     0,     0,     0,     0,   495,
     0,     0,     0,   191,   192,   197,   198,     0,   201,     0,
   200,   194,   193,    64,   195,   190,     0,   199,   149,   148,
     0,     0,   162,   163,     0,     0,     0,   115,     0,    86,
   133,     0,     0,   135,   253,     0,   255,   256,     0,   222,
   223,     0,     0,     0,   226,   227,   236,    64,   237,   247,
   246,   248,    67,    47,   284,   283,   276,   274,   275,   273,
   277,   279,   285,   282,     0,     0,     0,     0,   307,     0,
   316,     0,     0,     0,   344,   343,   351,    64,   345,   346,
   349,   350,    64,   347,   348,     0,     0,    80,     0,     0,
     0,    80,     0,    80,     0,     0,    80,   363,   392,     0,
     0,    80,     0,     0,     0,     0,   364,   399,     0,     0,
     0,     0,    80,     0,   365,   407,     0,     0,     0,     0,
     0,     0,     0,     0,   366,   414,    80,   385,    80,   386,
   384,   386,     0,   448,     0,   527,     0,     0,     0,     0,
    80,    80,     0,    80,   150,   167,   164,     0,    90,     0,
   122,     0,     0,     0,     0,   257,   224,     0,   225,   239,
     0,    48,   286,     0,   311,   312,   310,    82,   315,    82,
   296,   297,     0,     0,     0,     0,   298,   300,   352,     0,
   356,     0,   367,   368,     0,     0,   359,     0,     0,   359,
     0,     0,     0,     0,     0,   359,     0,     0,     0,     0,
     0,     0,     0,   359,     0,     0,     0,     0,     0,   359,
   359,     0,     0,   423,     0,     0,   525,     0,     0,     0,
     0,     0,   449,     0,   493,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   121,    82,    87,     0,     0,   254,
     0,   241,     0,     0,   281,   308,   317,     0,     0,     0,
     0,   354,   358,     0,   527,     0,   527,     0,     0,   395,
   393,   394,   396,    80,     0,   402,   400,   401,   403,   404,
    80,   410,     0,   408,   409,   411,   417,   419,     0,     0,
   415,   416,     0,   418,     0,   524,    80,     0,   527,   387,
     0,   453,   453,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   166,
   168,     0,   137,   136,     0,     0,   278,     0,     0,   301,
   302,   303,   304,   372,     0,   370,     0,   373,   397,     0,
   405,     0,   412,   421,   422,   425,   420,   382,   526,   379,
     0,   527,   390,   381,   319,   319,   499,   527,     0,     0,
     0,     0,   204,   203,   196,   202,     0,     0,     0,     0,
     0,     0,    82,     0,   287,    82,     0,     0,     0,     0,
    80,     0,     0,   388,   389,     0,     0,     0,   458,   452,
     0,   454,   451,     0,     0,     0,     0,     0,   169,   170,
   171,   172,   173,   174,     0,     0,     0,     0,   374,   359,
     0,     0,     0,     0,     0,    80,     0,     0,     0,   424,
   426,     0,     0,     0,     0,   455,   494,     0,     0,     0,
     0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   460,   461,   457,     0,    82,
     0,     0,     0,     0,   229,   309,   318,   371,   375,   359,
     0,   427,   430,   431,   428,   429,   432,   459,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   376,   359,   456,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   230,   377,     0,   496,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
     0,     0,     0,     0,   491,     0,     0,     0,     0,     0,
   231,     0,     0,     0,     0,     0,     0,   497,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   498,     0,     0,
     0
};

static const short yydefgoto[] = {  1549,
     1,     2,     3,    19,    20,    21,    83,   147,   231,   449,
   317,   482,   711,   318,   319,   606,   832,   933,   403,   479,
   404,   379,   145,   288,   399,   289,    88,   163,   320,   389,
   390,   466,   467,   583,   783,  1172,   584,   669,   668,   665,
   700,   804,   806,    85,   234,   299,   460,   659,   767,    86,
   235,   304,   462,   660,   772,  1042,  1254,  1331,    84,   150,
   233,   295,   455,   658,   763,    87,   158,   236,   312,   473,
   703,   820,  1064,  1484,  1512,   474,   704,   824,   943,  1068,
   475,   705,   829,   469,   702,   813,    89,   167,   239,   326,
   488,   712,   844,  1183,   961,  1264,   489,   616,   848,   983,
  1094,  1198,   845,   972,  1188,  1338,   847,   977,  1190,  1339,
   973,   585,    90,   171,   240,   331,   416,   492,   717,   858,
   988,  1098,   994,  1103,   620,   735,   876,   877,  1150,  1239,
  1310,  1005,  1119,  1007,  1128,  1009,  1136,  1010,  1146,  1303,
  1393,  1431,    91,   175,   241,   337,   496,   736,   882,  1153,
  1365,  1402,  1460,  1435,    93,   180,   243,   345,    22,   242,
   421,   500,    45,   185,   352,   246,   256,  1315,   362,   438,
   647,  1151,  1238,   636,   122,   123,    23,    82,   586,   637,
    81,    27
};

static const short yypact[] = {-32768,
-32768,    31,  2355,  -129,    34,   -70,   -27,   -21,   -15,   -10,
     2,    50,    58,    72,   115,    21,   325,   154,-32768,-32768,
   -48,-32768,-32768,  1240,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    66,-32768,   376,
-32768,-32768,   136,   149,-32768,-32768,-32768,-32768,   298,-32768,
-32768,-32768,-32768,-32768,   182,   199,   206,   248,   255,   266,
   275,   299,   304,   324,   335,   347,   351,   353,   361,   365,
   370,   373,   380,   392,   394,  1911,  1911,  1911,  1911,   589,
-32768,    75,   264,    22,   124,   237,    25,    51,    56,   113,
   117,   464,   121,   408,-32768,   584,   584,-32768,  1911,  1911,
  1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,
  1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,   598,   286,
   286,  -158,-32768,  2123,  2320,-32768,  1911,  1911,  1911,  1911,
  1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,  1911,
  1911,-32768,   600,-32768,   611,-32768,   383,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    99,
   405,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   612,-32768,   430,  1575,  1575,  3305,  3332,  3359,  3386,
  3413,  3440,  3467,  3494,  3521,  3548,  2376,  3575,  3602,  3629,
  3656,  3683,  3710,  2398,  2420,  2442,   432,   629,  1911,  1549,
-32768,  2145,  1674,  1674,  1311,  1311,   560,   560,   560,   560,
   823,   823,   286,   286,   286,   286,-32768,   465,   -14,   441,
-32768,-32768,   134,   277,   268,   396,    15,-32768,   320,   384,
   543,   457,   358,-32768,   141,   511,-32768,   141,   141,   131,
   459,   474,   498,   505,   509,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1911,-32768,-32768,
-32768,-32768,-32768,-32768,  1911,  1911,  1911,   657,-32768,-32768,
  2123,  1911,  4530,  1911,  1583,  1033,  1617,   506,   554,-32768,
    45,   716,   726,-32768,-32768,   556,   730,-32768,-32768,   559,
    92,   736,-32768,-32768,   562,   740,   747,   564,   593,   594,
-32768,-32768,   244,-32768,    20,   608,-32768,   585,   603,   306,
   789,   800,   648,   652,-32768,-32768,   808,   653,-32768,-32768,
-32768,   848,   659,   850,   853,-32768,-32768,-32768,   855,   664,
   861,    34,   863,-32768,-32768,   671,-32768,-32768,-32768,-32768,
-32768,   871,   721,-32768,    92,-32768,   680,  1911,   682,   683,
   685,   337,   354,  3737,  3764,  3791,  3818,   686,  3845,  4530,
-32768,  4530,   684,   879,  1911,  3980,-32768,   145,   357,   696,
-32768,   895,   116,-32768,   896,-32768,   705,   707,   904,-32768,
   908,-32768,   914,   126,-32768,-32768,-32768,   724,-32768,   918,
   729,-32768,-32768,-32768,    92,   756,-32768,   926,   932,   928,
   127,-32768,-32768,   140,-32768,   741,   144,-32768,   744,   931,
   746,   936,-32768,   939,   940,   943,-32768,   430,   948,   752,
  1911,  2464,  1911,  1911,  1911,   949,  2224,-32768,   950,-32768,
-32768,-32768,-32768,   952,  1911,-32768,  4005,-32768,   145,-32768,
   956,   961,   964,-32768,   293,-32768,-32768,   775,   965,   328,
-32768,   386,  1911,   969,-32768,-32768,  1119,-32768,   389,-32768,
-32768,   968,   415,   423,   426,-32768,    14,  1651,     3,   970,
    92,    19,-32768,-32768,-32768,-32768,   971,   445,     5,-32768,
   974,   455,-32768,-32768,   975,   472,   976,-32768,-32768,   -48,
-32768,   786,-32768,-32768,-32768,   784,   798,    92,  2486,  1911,
  2508,  2530,  2552,-32768,  1685,   982,    63,  1911,  1911,  1685,
  1911,   993,-32768,-32768,-32768,  1911,  1911,   997,  1877,-32768,
-32768,  4530,-32768,   996,-32768,-32768,   807,   476,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  3872,   806,   280,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   809,-32768,
   810,   816,-32768,-32768,  1012,  1119,  1119,  1119,  1017,   269,
  1019,  1119,  4552,   829,   826,   826,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1911,-32768,  4030,
-32768,   160,-32768,  1028,-32768,-32768,-32768,-32768,-32768,-32768,
   843,   846,   872,   881,-32768,-32768,-32768,-32768,-32768,    23,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1911,   840,  1911,
  2574,  1911,  1911,  1911,  1911,-32768,  4530,-32768,    34,    34,
-32768,  4530,  4530,-32768,  4530,-32768,  1076,  1076,  1076,  4530,
  4530,-32768,  1911,  4530,-32768,  1911,-32768,  1273,     9,   -17,
-32768,-32768,-32768,   886,   888,   886,  1119,   889,   890,   903,
   891,   891,   891,-32768,-32768,-32768,-32768,-32768,    16,  2273,
-32768,  1119,  1119,  1119,  1119,  1119,  1119,  1119,  1119,  1119,
  1119,  1119,  1119,  1119,  1119,  1119,  1119,  1090,   803,-32768,
   897,   372,   610,   105,   233,  3899,-32768,   482,-32768,-32768,
   493,   537,-32768,-32768,-32768,-32768,  1288,    13,   128,   898,
   907,   911,   912,   915,   290,   318,   899,   906,   916,  1108,
-32768,-32768,  1112,-32768,-32768,   -37,  2596,    92,  2618,  1911,
  2640,  2662,  2684,    76,-32768,-32768,-32768,   107,  4055,   141,
   141,   141,   141,   179,   191,    92,    92,   923,  1120,  1121,
   193,-32768,-32768,   122,  1122,-32768,-32768,   973,  1123,  1125,
-32768,-32768,   978,-32768,   979,  2354,  1163,-32768,   972,   984,
-32768,-32768,  1119,  4570,  4570,  2218,  2218,  2218,   885,   885,
   885,   885,   701,   701,   158,   158,   158,   891,   891,-32768,
-32768,   983,  4552,   510,   342,-32768,  1180,   143,   143,  1181,
  1183,-32768,-32768,  1194,  1195,  1201,   141,   141,-32768,-32768,
  1202,    61,-32768,-32768,  1203,  1206,  1207,-32768,-32768,  1211,
-32768,  1016,   151,  1210,  1213,   381,  1214,  1221,  1225,  1227,
   141,-32768,-32768,-32768,   930,  2275,  1305,   104,  1228,  1229,
    67,    34,  1685,    34,    68,  1230,-32768,-32768,  1231,  1232,
    92,  1233,  1234,  1236,    92,  1237,  1242,-32768,  1911,-32768,
  1911,-32768,-32768,   141,  1241,  1032,  1049,-32768,  1052,  1277,
-32768,-32768,  1911,  1088,  1911,  4080,  1911,  1911,  1911,-32768,
-32768,-32768,  1287,  1289,  1292,  1301,    92,  1302,    92,  1303,
  1304,  1307,  1309,  1312,  1313,    92,  1314,  1325,  1326,   897,
-32768,  1328,  1329,-32768,  1093,-32768,  1119,  1116,  1136,-32768,
-32768,  2167,-32768,-32768,  1119,  1139,  1140,   188,  1334,  1256,
  1336,-32768,  1337,   744,  1342,   146,  1152,  1345,  1349,  1350,
-32768,-32768,  1351,  1352,  1360,  1393,-32768,-32768,  1359,    20,
  1403,  1406,  1411,  1412,  1414,  1417,   744,  1419,  1420,  1422,
-32768,  1425,  1426,-32768,-32768,-32768,-32768,-32768,-32768,   141,
-32768,-32768,  1154,-32768,   141,-32768,-32768,  1165,  1427,  1428,
-32768,-32768,-32768,  1429,  1430,   744,-32768,  1432,  1433,  1434,
  1435,-32768,-32768,  1444,  1445,-32768,  1252,  1253,-32768,  1260,
  1261,  1264,  1266,  1267,   615,  2706,   523,  2728,   467,   416,
  1268,-32768,    69,    69,-32768,  1464,  4105,  1276,  4130,-32768,
  4155,  4180,  4205,-32768,-32768,-32768,-32768,  1274,-32768,  1275,
-32768,-32768,-32768,  1280,-32768,-32768,  1281,-32768,-32768,-32768,
  1468,   479,-32768,-32768,   141,  3284,  1911,-32768,  1278,-32768,
  4552,  1479,   141,-32768,-32768,  1480,-32768,-32768,  1481,-32768,
-32768,  1489,  1398,  1490,-32768,-32768,-32768,   215,-32768,-32768,
-32768,-32768,   744,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1310,  1501,  1505,  1508,-32768,  1509,
-32768,  1512,  1514,   338,-32768,-32768,-32768,   241,-32768,-32768,
-32768,-32768,   251,-32768,-32768,  1521,  1526,    92,  1529,  1343,
  1911,    92,  1344,    92,  1911,  1911,    92,-32768,-32768,  1911,
  1361,    92,  1911,  1911,  1911,  1911,-32768,-32768,  1911,  1911,
  1392,  1911,    92,  1911,-32768,-32768,  1911,  1535,  1394,  1395,
  1911,  1911,  1396,  1911,-32768,-32768,    92,-32768,    92,-32768,
-32768,-32768,    42,-32768,  1460,  1685,  1461,  1463,  1493,  1494,
    92,    92,  1544,    92,-32768,-32768,-32768,  1355,-32768,  2750,
-32768,  1119,  1390,  1423,  1541,-32768,-32768,  1545,-32768,-32768,
  1553,-32768,  1235,  1542,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   886,   886,   886,   141,-32768,-32768,-32768,  1620,
-32768,  1621,-32768,-32768,  1492,  1531,-32768,  2772,  1495,-32768,
  1655,   986,  1014,  1687,  2794,-32768,  1688,  1102,  1348,  1653,
  1773,  2816,  1795,-32768,  1817,  1724,  1839,  1861,  1734,-32768,
-32768,  1913,  1946,-32768,  1968,  1547,-32768,   263,   524,   542,
  1548,  1557,-32768,  1911,-32768,  1911,  1911,  1911,  1911,  1550,
  1555,  1543,  1556,   332,-32768,-32768,  4552,  1546,  1559,-32768,
  1752,-32768,  1622,  1753,-32768,-32768,-32768,  1754,  1757,  1758,
  1760,-32768,-32768,  1768,  1685,   302,  1685,  1769,   446,-32768,
-32768,-32768,-32768,    92,   547,-32768,-32768,-32768,-32768,-32768,
    92,-32768,   588,-32768,-32768,-32768,-32768,-32768,   753,   796,
-32768,-32768,   576,-32768,  1772,-32768,    92,  1775,  1357,-32768,
  1776,-32768,-32768,  4230,  1588,  2838,  2860,  2882,  2904,  1778,
  1784,  1785,  1786,  1623,  1911,  1911,  1911,  1911,  1911,-32768,
-32768,  1592,-32768,-32768,  1708,  1597,-32768,  1598,  1599,-32768,
-32768,-32768,-32768,-32768,  1602,  1680,  1604,-32768,-32768,  1605,
-32768,  1606,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    34,  1685,-32768,-32768,  1347,  1358,-32768,  1685,  1911,  1911,
  1911,  1911,-32768,-32768,-32768,-32768,  1797,  1990,  2012,  2034,
  2056,  2078,-32768,  1804,-32768,-32768,   886,  1803,  1614,  1911,
    92,  1911,   841,-32768,-32768,  1809,  1810,  1811,-32768,-32768,
  1619,-32768,-32768,  1626,  2926,  2948,  2970,  2992,-32768,-32768,
-32768,-32768,-32768,-32768,  1625,  1624,  1632,  1637,-32768,-32768,
  3926,  1646,  3014,  1813,  1911,    92,  1816,   141,  1822,-32768,
-32768,  1852,  1853,  1859,   141,-32768,-32768,  1911,  1911,  1911,
  1911,-32768,  1860,  1864,  1865,   844,  1867,  1677,  1911,  1869,
  2100,  1870,  1871,  1878,  1879,-32768,-32768,-32768,  1880,-32768,
  4255,  4280,  4305,  4330,-32768,-32768,-32768,-32768,-32768,-32768,
  3953,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1683,  1719,
  1720,  1723,  1761,  1876,  1618,  1767,  1915,  1911,  1782,  1911,
  1911,   141,-32768,-32768,-32768,  3036,  1911,  3058,  3080,  1951,
  1652,  1911,  4355,  1911,  1911,-32768,-32768,  3102,-32768,  3124,
  3146,  1862,  1911,  1911,  1911,  1962,  4380,  4405,  4430,   744,
  1788,  1789,  1783,  1982,-32768,  1805,  1911,  1812,  1911,  3168,
-32768,  3190,  1911,  1911,  3212,  4455,  1911,-32768,  4480,  1825,
  1827,  1911,  3234,  1911,  3256,  1911,  4505,-32768,  2002,  2009,
-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -132,-32768,-32768,  -241,   -19,-32768,-32768,  1177,  -466,-32768,
  -532,-32768,  -315,  -382,  -417,-32768,-32768,-32768,-32768,  -213,
-32768,  -763,-32768,  -403,-32768,-32768,-32768,-32768,-32768,-32768,
  1446,-32768,  1137,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1577,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1319,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -833,  -535,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768, -1173,-32768,-32768,-32768,  1039,   894,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   742,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1631,-32768,  1558,  1963,-32768,  1633,  1873,-32768,  1807,-32768,
   287,-32768,-32768,  -514,  -593,  1857,   709,-32768,-32768,   -24,
  -457,  -339
};


#define	YYLAST		4765


static const short yytable[] = {    80,
   459,   497,   425,   346,   409,   644,   353,   354,   356,   587,
   915,   472,   663,   978,   919,   607,   597,   859,   879,   313,
   780,   400,   400,   401,   401,    38,     4,   718,   487,     4,
    -2,   491,     6,  1276,   495,     6,  1279,   880,    25,    26,
   208,   744,  1285,   209,    24,   768,  1241,   769,   770,   380,
  1293,   120,   121,   124,   125,   160,  1299,  1300,   764,   748,
     4,     6,   605,   453,   314,   941,     6,    25,    26,   709,
   765,   986,   992,  1148,   187,   188,   189,   190,   191,   192,
   193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
   203,   204,   205,   206,    43,    44,   161,   611,   612,   613,
   614,   387,   212,   213,   214,   215,   216,   217,   218,   219,
   220,   221,   222,   223,   224,   225,   226,     4,   587,   587,
   587,     4,   457,     6,   587,     4,   313,     6,   773,    28,
   775,     6,   471,   486,  1242,   313,   719,   387,   720,   721,
   722,   430,   723,   724,   725,   313,   490,   450,   726,   450,
   494,   727,  1061,   374,   728,   932,  1049,   729,   730,   286,
    42,   881,   400,   602,   401,   908,   731,   732,   979,   388,
    29,   314,   671,   672,   673,   831,    30,   641,   680,   821,
   314,   771,    31,   287,   281,   283,   822,    32,   387,   980,
   314,   480,   314,   733,   314,   949,   291,  1085,   292,    33,
   387,   601,   387,   615,   144,   388,    92,   766,   293,   587,
   315,   928,   860,   598,   781,   316,   402,   402,    39,   148,
   149,   734,   156,   157,   587,   587,   587,   587,   587,   587,
   587,   587,   587,   587,   587,   587,   587,   587,   587,   587,
  1243,   587,   381,   364,   639,   451,  1446,    34,   640,   162,
   365,   366,   367,   165,   166,    35,   388,   369,   942,   370,
   372,    80,   376,   776,   987,   993,  1149,   604,   388,    36,
   388,   675,    24,   676,   890,   143,   144,   209,   784,   785,
   786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
   796,   797,   798,   799,   629,   803,  1485,   825,   237,   745,
   746,   981,   982,   823,    98,   891,   718,   826,   209,   827,
   169,   170,    37,   458,   173,   174,   534,   315,   178,   179,
  1501,   152,   153,   458,   458,   587,   315,   861,   355,    40,
   300,    41,   294,   432,   301,    96,   315,   458,   990,   296,
   315,   458,   302,   458,    46,    47,    48,   708,    97,   696,
   447,   297,   697,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,   897,   922,
    94,    99,    95,   677,   321,   953,  1054,   229,   926,   209,
   899,   927,   906,     6,   322,   833,  1193,  1194,   100,  1324,
  1325,  1326,  1327,  1328,  1329,   101,   509,   323,   511,   512,
   513,   324,   182,  1180,   183,   719,   144,   720,   721,   722,
   532,   723,   724,   725,  1266,   230,  1267,   726,   678,  1195,
   727,   828,   339,   728,   154,   155,   729,   730,   546,  1199,
  1196,   398,   144,   -43,   305,   731,   732,   102,   807,  1201,
   718,   808,   144,   600,   103,   809,   810,   811,   327,   587,
   306,  1306,   146,   954,  1307,   104,   303,   587,   177,   340,
   307,   308,   733,   955,   105,   298,   309,   581,   310,  -565,
   141,   142,  1137,  1074,   400,   631,   401,   868,   328,   869,
   539,   540,  1332,   642,   643,   329,   645,   341,   106,   342,
  1346,   650,   651,   107,   654,   862,   408,   144,   893,   894,
   895,   896,   989,  1046,   991,   870,  1059,   871,   325,   343,
  1138,  1051,   909,   108,   884,   542,   543,  1139,  1140,    76,
  1330,  1401,  1401,  1130,   109,    77,  1197,   436,   437,  1081,
   898,   900,   901,   902,    79,  1141,   110,   907,  1142,  1143,
   111,   718,   112,  1062,   439,   437,   344,   452,   144,   719,
   113,   720,   721,   722,   114,   723,   724,   725,  1097,   115,
   812,   726,   116,   706,   727,   938,   939,   728,  1131,   117,
   729,   730,   330,   544,   545,  1144,   588,   589,   184,   731,
   732,   118,   718,   119,   311,   126,  1132,  1133,   834,   960,
   835,   836,   207,   737,   238,   739,   227,   741,   742,   743,
   124,   837,   591,   592,  1145,   228,   733,   332,   244,  1415,
   593,   594,  1417,   595,   596,   838,   839,   840,   124,   245,
   333,   749,  1011,   278,  1121,   279,  1134,  1122,   285,   841,
   290,  1245,   609,   610,  1349,  1123,  1124,   998,   334,  1125,
  1126,  1002,   618,   619,   338,  1182,   357,  1268,  1269,  1270,
   719,   368,   720,   721,   722,  1135,   723,   724,   725,   622,
   623,   358,   726,   539,   657,   727,  1166,  1167,   728,   377,
   335,   729,   730,  1028,   814,  1030,   815,   816,   817,   818,
   731,   732,  1037,   -46,   144,   359,  1479,   347,   348,   349,
   350,   719,   360,   720,   721,   722,   361,   723,   724,   725,
   924,   925,   351,   726,   587,   886,   727,   733,  1163,   728,
   382,  1127,   729,   730,  1308,  1309,  1113,   378,  1088,  1114,
   383,   731,   732,  1090,   385,   842,   843,  1115,  1116,  1117,
   391,   336,  1311,  1309,   393,  1351,   136,   137,   138,   139,
   140,   394,  1181,   384,   141,   142,   386,   718,   733,   392,
  1345,   395,  1347,   127,   128,   129,   130,   131,  1257,   132,
   133,   134,   135,  1356,  1357,   136,   137,   138,   139,   140,
   124,   405,  1200,   141,   142,   406,  1353,  1202,   930,   931,
   396,   397,   151,   410,  1363,   159,   164,   168,   172,   176,
   718,   181,   407,  1168,   411,    46,    47,   548,   819,   648,
   649,  1174,   414,  1118,    50,    51,    52,    53,    54,   549,
   550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
   560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
   570,   571,   572,   573,  1006,   412,  1008,  1395,   718,   413,
   415,  1418,   417,  1404,   419,   232,   418,   420,  1017,   422,
  1019,   423,  1021,  1022,  1023,   424,   719,   426,   720,   721,
   722,   427,   723,   724,   725,   428,   429,   431,   726,   433,
   434,   727,   435,   -43,   728,   446,   444,   729,   730,   693,
   694,   695,   696,   454,  1205,   697,   731,   732,  1209,   574,
  1211,   456,   461,  1214,   463,  1424,   464,  1425,  1217,   719,
   465,   720,   721,   722,   468,   723,   724,   725,  1426,  1226,
   470,   726,   476,   733,   727,   477,   478,   728,  1427,   481,
   729,   730,   483,  1236,   485,  1237,   484,   498,   493,   731,
   732,   398,   501,  1428,   499,   503,   504,  1250,  1251,   505,
  1253,  1354,   507,   508,  1271,   514,   530,   719,   531,   720,
   721,   722,   535,   723,   724,   725,   733,   536,   537,   726,
   375,   541,   727,   547,   590,   728,   603,   608,   729,   730,
   617,   621,   624,   575,   626,   627,   638,   731,   732,   576,
   577,   962,  1281,   963,  1355,   628,   578,   646,   579,   580,
   581,   652,   655,   801,   656,   582,   662,   802,   664,   666,
  1429,   138,   139,   140,   733,   667,   670,   141,   142,   674,
  1282,  1394,  1170,   679,   698,   699,   964,   965,   966,   967,
   968,   969,   970,  1443,   710,    46,    47,   373,    49,  1430,
   713,   738,  1468,   714,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,   715,
  1350,   691,   692,   693,   694,   695,   696,  1352,   716,   697,
    75,   747,   314,   581,   779,   697,  1208,   774,   777,   778,
  1212,  1213,   800,  1359,   805,  1215,   872,   863,  1218,  1219,
  1220,  1221,  1524,   873,  1222,  1223,   864,  1225,  1287,  1227,
   865,   866,  1228,   875,   867,   874,  1232,  1233,   878,  1235,
   903,    46,    47,   548,   904,   905,   910,   912,   971,   913,
    50,    51,    52,    53,    54,   549,   550,   551,   552,   553,
   554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
   564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
   127,   128,   129,   130,   131,   918,   132,   133,   134,   135,
   911,   920,   136,   137,   138,   139,   140,  1422,   914,   916,
   141,   142,   921,   923,   929,   932,  1454,   934,   127,   128,
   129,   130,   131,  1459,   132,   133,   134,   135,   935,   936,
   136,   137,   138,   139,   140,   937,   940,   944,   141,   142,
   945,   946,  1452,   947,   951,   574,   948,   952,   956,  1314,
    76,  1316,  1317,  1318,  1319,   957,    77,   958,   315,   959,
    78,  1013,   984,   985,   995,    79,   997,   996,  1000,   999,
  1001,  1003,    46,    47,    48,    49,  1004,  1012,  1014,  1015,
  1500,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,   127,   128,   129,   130,
   131,  1016,   132,   133,   134,   135,  1018,    75,   136,   137,
   138,   139,   140,  1024,  1045,  1025,   141,   142,  1026,   575,
  1378,  1379,  1380,  1381,  1382,   576,   577,  1027,  1029,  1031,
  1032,  1034,   578,  1033,   579,   580,   581,  1047,  1035,  1036,
  1038,   582,   750,   751,   752,   753,   754,   755,   756,   757,
   758,  1039,  1040,   759,  1043,  1044,  1048,   760,  1052,  1053,
  1055,  1056,  1057,  1058,  1405,  1406,  1407,  1408,  1060,  1063,
   761,  1065,   849,  1089,  1288,  1066,  1067,  1069,  1070,    46,
    47,    48,   850,  1073,  1091,  1421,  1071,  1423,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,   851,   852,   853,   854,   855,   856,  1072,
  1451,   964,   965,   966,   967,   968,   969,   975,  1396,  1075,
  1397,  1398,  1076,  1461,  1462,  1463,  1464,  1077,  1078,  1396,
  1079,  1397,  1398,  1080,  1471,  1082,  1083,    76,  1084,  1086,
  1087,  1092,  1093,    77,  1263,  1095,  1096,    78,  1099,  1100,
  1101,  1102,    79,   964,   965,   966,   967,   968,   969,  1399,
  1104,  1105,  1106,  1107,   964,   965,   966,   967,   968,   969,
  1399,  1108,  1109,  1496,  1110,  1498,  1499,  1111,  1112,  1147,
  1154,   762,  1503,  1156,  1165,  1161,  1162,  1508,  1171,  1510,
  1511,   144,  1164,  1173,  1175,  1178,   857,  1176,  1517,  1518,
  1519,   132,   133,   134,   135,  1177,  1179,   136,   137,   138,
   139,   140,  1530,   976,  1532,   141,   142,  1185,  1535,  1536,
  1184,  1186,  1539,  1361,  1187,  1189,  1362,  1543,  1191,  1545,
  1192,  1547,   127,   128,   129,   130,   131,  1203,   132,   133,
   134,   135,  1204,  1206,   136,   137,   138,   139,   140,  1229,
  1207,  1210,   141,   142,    76,  1400,  1252,  1260,  1265,  1261,
    77,    46,    47,    48,   635,  1255,  1403,  1262,  1216,    79,
    50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    46,    47,    48,   371,  1224,
  1258,  1230,  1231,  1234,    50,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    46,
    47,    48,   718,  1259,  1272,  1273,  1336,  1377,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    46,    47,    48,   718,  1244,  1246,  1289,
  1247,  1280,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    46,    47,    48,
  1248,  1249,  1274,  1283,  1286,  1278,    50,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,   247,   248,   249,   250,   251,   252,   253,   254,   255,
  1295,   719,  1275,   720,   721,   722,    76,   723,   724,   725,
  1298,  1322,    77,   726,  1333,  1312,   727,  1305,   282,   728,
  1320,    79,   729,   730,  1313,  1321,  1323,  1334,  1335,  1337,
  1340,   731,   732,  1341,  1342,   719,  1343,   720,   721,   722,
    76,   723,   724,   725,  1344,  1348,    77,   726,  1358,  1290,
   727,  1360,  1364,   728,  1373,    79,   729,   730,   733,  1368,
  1374,  1375,  1376,  1383,  1384,   731,   732,  1385,  1389,  1386,
  1387,  1292,  1388,  1409,    76,  1390,  1391,  1392,  1416,  1419,
    77,  1420,   375,  1432,  1433,  1434,  1493,  1450,  1436,    79,
  1453,   458,   733,  1294,  1437,  1442,  1455,   127,   128,   129,
   130,   131,  1444,   132,   133,   134,   135,  1445,    76,   136,
   137,   138,   139,   140,    77,  1296,  1448,   141,   142,   599,
  1507,   130,   131,    79,   132,   133,   134,   135,  1456,  1457,
   136,   137,   138,   139,   140,  1458,  1465,  1297,   141,   142,
  1466,  1467,    76,  1469,  1470,  1472,  1474,  1475,    77,    46,
    47,    48,   635,  1487,  1476,  1477,  1478,    79,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    46,    47,    48,  1488,  1492,  1489,  1301,
  1490,  1495,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,   127,   128,   129,
   130,   131,  1302,   132,   133,   134,   135,  1506,  1491,   136,
   137,   138,   139,   140,  1494,  1516,  1520,   141,   142,   127,
   128,   129,   130,   131,  1304,   132,   133,   134,   135,  1497,
  1527,   136,   137,   138,   139,   140,  1525,  1526,  1528,   141,
   142,   127,   128,   129,   130,   131,  1410,   132,   133,   134,
   135,  1550,  1529,   136,   137,   138,   139,   140,  1551,   950,
  1531,   141,   142,   127,   128,   129,   130,   131,  1411,   132,
   133,   134,   135,  1541,  1542,   136,   137,   138,   139,   140,
   538,   701,   846,   141,   142,   127,   128,   129,   130,   131,
  1412,   132,   133,   134,   135,  1240,  1041,   136,   137,   138,
   139,   140,  1152,   502,  1366,   141,   142,   625,   257,   186,
   506,     0,  1413,   363,    76,   280,     0,     0,     0,     0,
    77,     0,     0,     0,   653,     0,     0,     0,     0,    79,
     0,     0,     0,     0,  1414,     0,     0,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,    76,   136,
   137,   138,   139,   140,    77,     0,  1473,   141,   142,     0,
     0,     0,     0,    79,     0,     0,     0,     0,     0,     0,
   127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
   210,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,   284,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,  1050,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   127,   128,   129,   130,
   131,     0,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,   127,   128,
   129,   130,   131,     0,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
   127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,   515,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,   962,     0,   963,   141,
   142,   681,   682,   683,   684,   685,   686,   687,   688,   689,
   690,     0,     0,   691,   692,   693,   694,   695,   696,     4,
     0,   697,     0,     5,     0,     6,     0,     0,     0,   516,
     0,   964,   965,   966,   967,   968,   969,   970,     0,     0,
   517,   518,   519,   520,   521,   522,   523,   524,   525,   526,
   527,   528,   529,     0,     0,     0,     7,     0,   687,   688,
   689,   690,     0,     8,   691,   692,   693,   694,   695,   696,
     0,     0,   697,     0,     0,     0,     9,     0,    10,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
     0,     0,    12,     0,     0,     0,     0,     0,     0,     0,
     0,    13,     0,     0,     0,     0,     0,   681,   682,   683,
   684,   685,   686,   687,   688,   689,   690,     0,    14,   691,
   692,   693,   694,   695,   696,     0,     0,   697,     0,     0,
     0,     0,     0,   974,     0,     0,   782,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    15,     0,    16,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,     0,     0,
     0,     0,     0,   211,     0,     0,    17,    18,   681,   682,
   683,   684,   685,   686,   687,   688,   689,   690,     0,     0,
   691,   692,   693,   694,   695,   696,     0,     0,   697,     0,
   127,   128,   129,   130,   131,   917,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,   268,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,   275,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   127,   128,   129,   130,
   131,   276,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,   127,   128,
   129,   130,   131,   277,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
   127,   128,   129,   130,   131,   510,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,   630,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,   632,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   127,   128,   129,   130,
   131,   633,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,   127,   128,
   129,   130,   131,   634,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
   127,   128,   129,   130,   131,   740,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,   883,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,   885,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   127,   128,   129,   130,
   131,   887,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,   127,   128,
   129,   130,   131,   888,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
   127,   128,   129,   130,   131,   889,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,  1120,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,  1129,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   127,   128,   129,   130,
   131,  1256,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,   127,   128,
   129,   130,   131,  1277,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
   127,   128,   129,   130,   131,  1284,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,  1291,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,  1369,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   127,   128,   129,   130,
   131,  1370,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,   127,   128,
   129,   130,   131,  1371,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
   127,   128,   129,   130,   131,  1372,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,  1438,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,  1439,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   127,   128,   129,   130,
   131,  1440,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,   127,   128,
   129,   130,   131,  1441,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
   127,   128,   129,   130,   131,  1449,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,  1502,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,  1504,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   127,   128,   129,   130,
   131,  1505,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,   127,   128,
   129,   130,   131,  1513,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
   127,   128,   129,   130,   131,  1514,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,   127,   128,   129,   130,   131,  1515,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,   127,   128,   129,   130,   131,  1533,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   127,   128,   129,   130,
   131,  1534,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,   127,   128,
   129,   130,   131,  1537,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
   127,   128,   129,   130,   131,  1544,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,     0,     0,     0,     0,     0,  1546,   681,   682,
   683,   684,   685,   686,   687,   688,   689,   690,     0,     0,
   691,   692,   693,   694,   695,   696,     0,     0,   697,   127,
   128,   129,   130,   131,  1169,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,     0,     0,   258,   127,   128,   129,   130,
   131,     0,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,     0,     0,
     0,     0,   259,   127,   128,   129,   130,   131,     0,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,     0,     0,     0,     0,   260,
   127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,     0,     0,     0,     0,   261,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,     0,
     0,     0,     0,   262,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,     0,     0,
   263,   127,   128,   129,   130,   131,     0,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,     0,     0,     0,     0,   264,   127,   128,
   129,   130,   131,     0,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
     0,     0,     0,     0,   265,   127,   128,   129,   130,   131,
     0,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,     0,     0,     0,
     0,   266,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,     0,     0,     0,     0,   267,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,     0,     0,   269,   127,   128,   129,   130,
   131,     0,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,     0,     0,
     0,     0,   270,   127,   128,   129,   130,   131,     0,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,     0,     0,     0,     0,   271,
   127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,     0,     0,     0,     0,   272,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,     0,
     0,     0,     0,   273,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,     0,     0,
   274,   127,   128,   129,   130,   131,     0,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,     0,     0,     0,     0,   440,   127,   128,
   129,   130,   131,     0,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
     0,     0,     0,     0,   441,   127,   128,   129,   130,   131,
     0,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,     0,     0,     0,
     0,   442,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,     0,     0,     0,     0,   443,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,     0,     0,   445,   127,   128,   129,   130,
   131,     0,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,     0,     0,
     0,     0,   661,   127,   128,   129,   130,   131,     0,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,     0,     0,     0,     0,   830,
   127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,     0,     0,     0,     0,  1447,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,     0,
     0,     0,     0,  1486,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,   448,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,   533,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,   707,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,   892,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1020,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1155,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1157,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1158,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1159,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1160,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1367,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1480,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1481,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1482,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1483,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1509,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1521,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1522,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1523,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1538,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1540,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1548,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,   681,   682,   683,   684,
   685,   686,   687,   688,   689,   690,     0,     0,   691,   692,
   693,   694,   695,   696,     0,     0,   697,   684,   685,   686,
   687,   688,   689,   690,     0,     0,   691,   692,   693,   694,
   695,   696,     0,     0,   697
};

static const short yycheck[] = {    24,
   383,   419,   342,   245,   320,   520,   248,   249,   250,   467,
   774,   394,   548,   847,   778,   482,     3,     5,    56,     5,
     5,     3,     3,     5,     5,     5,     5,     5,   411,     5,
     0,   414,    11,  1207,   417,    11,  1210,    75,     5,     6,
   199,   635,  1216,   202,   174,    63,     5,    65,    66,     5,
  1224,    76,    77,    78,    79,     5,  1230,  1231,    50,   653,
     5,    11,    44,   379,    50,     5,    11,     5,     6,   602,
    62,     5,     5,     5,    99,   100,   101,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   143,   144,    46,    93,    94,    95,
    96,    10,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,     5,   576,   577,
   578,     5,     7,    11,   582,     5,     5,    11,   664,   200,
   666,    11,     7,     7,    93,     5,   114,    10,   116,   117,
   118,   355,   120,   121,   122,     5,     7,     5,   126,     5,
     7,   129,     7,   286,   132,     5,   920,   135,   136,   174,
     7,   199,     3,   479,     5,    44,   144,   145,    65,    78,
   198,    50,   576,   577,   578,   708,   198,   517,   582,    75,
    50,   199,   198,   198,   209,   210,    82,   198,    10,    86,
    50,   405,    50,   171,    50,    45,    63,   961,    65,   198,
    10,   199,    10,   199,   202,    78,   141,   199,    75,   667,
   196,   805,   200,   200,   199,   201,   198,   198,   198,   198,
   199,   199,   198,   199,   682,   683,   684,   685,   686,   687,
   688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
   199,   699,   198,   268,   182,   378,  1420,   198,   186,   199,
   275,   276,   277,   198,   199,   198,    78,   282,   198,   284,
   285,   286,   287,   667,   198,   198,   198,   481,    78,   198,
    78,     3,   174,     5,   199,   201,   202,   202,   682,   683,
   684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
   694,   695,   696,   697,   508,   699,  1470,    65,   200,   639,
   640,   198,   199,   199,     7,   199,     5,    75,   202,    77,
   198,   199,   198,   198,   198,   199,   449,   196,   198,   199,
  1494,   198,   199,   198,   198,   783,   196,   200,   198,     5,
    63,     7,   199,   358,    67,   200,   196,   198,   853,    63,
   196,   198,    75,   198,     3,     4,     5,   188,   200,   192,
   375,    75,   195,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,   200,   783,
     5,   200,     7,   115,    65,     5,   199,     5,    47,   202,
   200,    50,   200,    11,    75,   711,    59,    60,   200,    68,
    69,    70,    71,    72,    73,   200,   431,    88,   433,   434,
   435,    92,     5,   199,     7,   114,   202,   116,   117,   118,
   445,   120,   121,   122,  1188,    43,  1190,   126,   160,    92,
   129,   199,    75,   132,   198,   199,   135,   136,   463,   199,
   103,   198,   202,   200,    49,   144,   145,   200,    77,   199,
     5,    80,   202,   478,   200,    84,    85,    86,    75,   917,
    65,   199,   199,    83,   202,   200,   199,   925,     5,   112,
    75,    76,   171,    93,   200,   199,    81,   198,    83,   200,
   195,   196,    67,   950,     3,   510,     5,   198,   105,   200,
   198,   199,  1256,   518,   519,   112,   521,   140,   200,   142,
   199,   526,   527,   200,   529,   719,   201,   202,   750,   751,
   752,   753,   852,   917,   854,   198,   934,   200,   199,   162,
   105,   925,   764,   200,   738,   198,   199,   112,   113,   188,
   199,  1365,  1366,    67,   200,   194,   199,   201,   202,   957,
   754,   755,   756,   757,   203,   130,   200,   761,   133,   134,
   200,     5,   200,   936,   201,   202,   199,   201,   202,   114,
   200,   116,   117,   118,   200,   120,   121,   122,   986,   200,
   199,   126,   200,   598,   129,   817,   818,   132,   112,   200,
   135,   136,   199,   198,   199,   170,   198,   199,     5,   144,
   145,   200,     5,   200,   199,     7,   130,   131,    62,   841,
    64,    65,     5,   628,   200,   630,     7,   632,   633,   634,
   635,    75,   198,   199,   199,     5,   171,    75,     7,  1383,
   198,   199,  1386,   198,   199,    89,    90,    91,   653,   200,
    88,   656,   874,   202,   112,     7,   170,   115,   174,   103,
   200,  1156,   198,   199,   199,   123,   124,   861,   106,   127,
   128,   865,   198,   199,   198,  1073,   198,  1193,  1194,  1195,
   114,     5,   116,   117,   118,   199,   120,   121,   122,   198,
   199,   198,   126,   198,   199,   129,   198,   199,   132,   174,
   138,   135,   136,   897,    75,   899,    77,    78,    79,    80,
   144,   145,   906,   201,   202,   198,  1460,   187,   188,   189,
   190,   114,   198,   116,   117,   118,   198,   120,   121,   122,
   201,   202,   202,   126,  1172,   740,   129,   171,  1034,   132,
     5,   199,   135,   136,   201,   202,   112,   174,   970,   115,
     5,   144,   145,   975,     5,   199,   200,   123,   124,   125,
     5,   199,   201,   202,     5,   199,   187,   188,   189,   190,
   191,     5,  1068,   198,   195,   196,   198,     5,   171,   198,
  1275,   198,  1277,   175,   176,   177,   178,   179,  1172,   181,
   182,   183,   184,   198,   199,   187,   188,   189,   190,   191,
   805,   174,  1098,   195,   196,   201,   199,  1103,   808,   809,
   198,   198,    84,     5,  1309,    87,    88,    89,    90,    91,
     5,    93,   200,  1045,     5,     3,     4,     5,   199,   523,
   524,  1053,     5,   199,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,   869,   198,   871,  1362,     5,   198,
   198,  1387,     5,  1368,     5,   147,   198,     5,   883,     5,
   885,   198,   887,   888,   889,     5,   114,     5,   116,   117,
   118,   201,   120,   121,   122,     5,   156,   198,   126,   198,
   198,   129,   198,   200,   132,     7,   201,   135,   136,   189,
   190,   191,   192,   198,  1108,   195,   144,   145,  1112,    97,
  1114,     7,     7,  1117,   200,    65,   200,    67,  1122,   114,
     7,   116,   117,   118,     7,   120,   121,   122,    78,  1133,
     7,   126,   199,   171,   129,     8,   198,   132,    88,   174,
   135,   136,     7,  1147,     7,  1149,     5,     7,   198,   144,
   145,   198,     7,   103,   199,     7,     7,  1161,  1162,     7,
  1164,   199,     5,   202,  1196,     7,     7,   114,     7,   116,
   117,   118,     7,   120,   121,   122,   171,     7,     5,   126,
   196,     7,   129,     5,     7,   132,     7,     7,   135,   136,
     7,     7,     7,   181,   199,   202,     5,   144,   145,   187,
   188,    62,     7,    64,   199,   198,   194,     5,   196,   197,
   198,     5,     7,   201,   198,   203,   201,   205,   200,   200,
   170,   189,   190,   191,   171,   200,     5,   195,   196,     3,
     7,  1361,  1047,     5,   196,   200,    97,    98,    99,   100,
   101,   102,   103,  1416,     7,     3,     4,     5,     6,   199,
   198,   202,   199,   198,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,   198,
  1284,   187,   188,   189,   190,   191,   192,  1291,   198,   195,
    48,     6,    50,   198,   182,   195,  1111,   200,   200,   200,
  1115,  1116,     3,  1307,   198,  1120,   198,   200,  1123,  1124,
  1125,  1126,  1520,   198,  1129,  1130,   200,  1132,     7,  1134,
   200,   200,  1137,     6,   200,   200,  1141,  1142,     7,  1144,
   198,     3,     4,     5,     5,     5,     5,     5,   199,     5,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
   175,   176,   177,   178,   179,     3,   181,   182,   183,   184,
   198,   200,   187,   188,   189,   190,   191,  1391,   201,   201,
   195,   196,   199,   201,     5,     5,  1428,     5,   175,   176,
   177,   178,   179,  1435,   181,   182,   183,   184,     5,     5,
   187,   188,   189,   190,   191,     5,     5,     5,   195,   196,
     5,     5,  1426,     3,     5,    97,   201,     5,     5,  1244,
   188,  1246,  1247,  1248,  1249,     5,   194,     3,   196,     3,
   198,   200,     5,     5,     5,   203,     5,     7,     5,     7,
     5,     5,     3,     4,     5,     6,     5,     7,   200,   198,
  1492,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,   175,   176,   177,   178,
   179,     5,   181,   182,   183,   184,   199,    48,   187,   188,
   189,   190,   191,     7,   202,     7,   195,   196,     7,   181,
  1325,  1326,  1327,  1328,  1329,   187,   188,     7,     7,     7,
     7,     3,   194,     7,   196,   197,   198,   202,     7,     7,
     7,   203,    50,    51,    52,    53,    54,    55,    56,    57,
    58,     7,     7,    61,     7,     7,   201,    65,   200,   200,
     7,    86,     7,     7,  1369,  1370,  1371,  1372,     7,   198,
    78,     7,    65,   200,     7,     7,     7,     7,     7,     3,
     4,     5,    75,     5,   200,  1390,     7,  1392,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,   106,   107,   108,   109,   110,   111,     7,
  1425,    97,    98,    99,   100,   101,   102,   103,    62,     7,
    64,    65,     7,  1438,  1439,  1440,  1441,     7,     7,    62,
     7,    64,    65,     7,  1449,     7,     7,   188,     7,     5,
     5,     5,     5,   194,   200,     7,     7,   198,     7,     7,
     7,     7,   203,    97,    98,    99,   100,   101,   102,   103,
     7,     7,   201,   201,    97,    98,    99,   100,   101,   102,
   103,   202,   202,  1488,   201,  1490,  1491,   202,   202,   202,
     7,   199,  1497,   198,     7,   202,   202,  1502,   201,  1504,
  1505,   202,   202,     5,     5,    88,   199,     7,  1513,  1514,
  1515,   181,   182,   183,   184,     7,     7,   187,   188,   189,
   190,   191,  1527,   199,  1529,   195,   196,     7,  1533,  1534,
   201,     7,  1537,   157,     7,     7,   160,  1542,     7,  1544,
     7,  1546,   175,   176,   177,   178,   179,     7,   181,   182,
   183,   184,     7,     5,   187,   188,   189,   190,   191,     5,
   198,   198,   195,   196,   188,   199,     3,     7,     7,     5,
   194,     3,     4,     5,   198,   201,   199,     5,   198,   203,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,     3,     4,     5,     6,   198,
   201,   198,   198,   198,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,     3,
     4,     5,     5,   201,     5,     5,     5,     5,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,     3,     4,     5,     5,   198,   198,     7,
   198,     7,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,     3,     4,     5,
   198,   198,   201,     7,     7,   201,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     7,   114,   202,   116,   117,   118,   188,   120,   121,   122,
     7,   199,   194,   126,   199,   198,   129,   201,   200,   132,
   201,   203,   135,   136,   198,   201,   201,   199,     7,     7,
     7,   144,   145,     7,     7,   114,     7,   116,   117,   118,
   188,   120,   121,   122,     7,     7,   194,   126,     7,     7,
   129,     7,     7,   132,     7,   203,   135,   136,   171,   202,
     7,     7,     7,   202,    87,   144,   145,   201,   119,   202,
   202,     7,   201,     7,   188,   202,   202,   202,     5,     7,
   194,   198,   196,     5,     5,     5,   199,     5,   200,   203,
     5,   198,   171,     7,   199,   201,     5,   175,   176,   177,
   178,   179,   201,   181,   182,   183,   184,   201,   188,   187,
   188,   189,   190,   191,   194,     7,   201,   195,   196,   199,
   199,   178,   179,   203,   181,   182,   183,   184,     7,     7,
   187,   188,   189,   190,   191,     7,     7,     7,   195,   196,
     7,     7,   188,     7,   198,     7,     7,     7,   194,     3,
     4,     5,   198,   201,     7,     7,     7,   203,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,     3,     4,     5,   198,    42,   199,     7,
   198,     7,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,   175,   176,   177,
   178,   179,     7,   181,   182,   183,   184,     7,   198,   187,
   188,   189,   190,   191,   198,   104,     5,   195,   196,   175,
   176,   177,   178,   179,     7,   181,   182,   183,   184,   198,
   198,   187,   188,   189,   190,   191,   199,   199,     7,   195,
   196,   175,   176,   177,   178,   179,     7,   181,   182,   183,
   184,     0,   198,   187,   188,   189,   190,   191,     0,   833,
   199,   195,   196,   175,   176,   177,   178,   179,     7,   181,
   182,   183,   184,   199,   198,   187,   188,   189,   190,   191,
   454,   586,   714,   195,   196,   175,   176,   177,   178,   179,
     7,   181,   182,   183,   184,  1152,   910,   187,   188,   189,
   190,   191,  1014,   423,  1313,   195,   196,   500,   186,    97,
   428,    -1,     7,   257,   188,   209,    -1,    -1,    -1,    -1,
   194,    -1,    -1,    -1,   198,    -1,    -1,    -1,    -1,   203,
    -1,    -1,    -1,    -1,     7,    -1,    -1,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,   188,   187,
   188,   189,   190,   191,   194,    -1,     7,   195,   196,    -1,
    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
     8,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,    -1,   181,   182,
   183,   184,     8,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,     8,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,    -1,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,    56,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    62,    -1,    64,   195,
   196,   175,   176,   177,   178,   179,   180,   181,   182,   183,
   184,    -1,    -1,   187,   188,   189,   190,   191,   192,     5,
    -1,   195,    -1,     9,    -1,    11,    -1,    -1,    -1,   146,
    -1,    97,    98,    99,   100,   101,   102,   103,    -1,    -1,
   157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
   167,   168,   169,    -1,    -1,    -1,    42,    -1,   181,   182,
   183,   184,    -1,    49,   187,   188,   189,   190,   191,   192,
    -1,    -1,   195,    -1,    -1,    -1,    62,    -1,    64,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    87,    -1,    -1,    -1,    -1,    -1,   175,   176,   177,
   178,   179,   180,   181,   182,   183,   184,    -1,   104,   187,
   188,   189,   190,   191,   192,    -1,    -1,   195,    -1,    -1,
    -1,    -1,    -1,   199,    -1,    -1,   204,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   137,    -1,   139,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   204,    -1,    -1,   172,   173,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,   192,    -1,    -1,   195,    -1,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,   175,   176,   177,   178,   179,   202,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,   175,   176,   177,   178,   179,   202,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   202,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,   175,   176,
   177,   178,   179,   202,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
   175,   176,   177,   178,   179,   202,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,    -1,   202,   175,   176,
   177,   178,   179,   180,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,   192,    -1,    -1,   195,   175,
   176,   177,   178,   179,   201,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,
   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,
    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,
    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,
   201,   175,   176,   177,   178,   179,    -1,   181,   182,   183,
   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,
    -1,   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,
   177,   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,
    -1,   201,   175,   176,   177,   178,   179,    -1,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,
   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,
    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,
    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,
   201,   175,   176,   177,   178,   179,    -1,   181,   182,   183,
   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,
    -1,   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,
   177,   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,
   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,
    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,
    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,   189,
   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,
    -1,   201,   175,   176,   177,   178,   179,    -1,   181,   182,
   183,   184,    -1,    -1,   187,   188,   189,   190,   191,    -1,
    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,   178,
   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,    -1,
    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,   181,
   182,   183,   184,    -1,    -1,   187,   188,   189,   190,   191,
    -1,    -1,    -1,   195,   196,    -1,    -1,    -1,    -1,   201,
   175,   176,   177,   178,   179,    -1,   181,   182,   183,   184,
    -1,    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,
   195,   196,    -1,    -1,    -1,    -1,   201,   175,   176,   177,
   178,   179,    -1,   181,   182,   183,   184,    -1,    -1,   187,
   188,   189,   190,   191,    -1,    -1,    -1,   195,   196,    -1,
    -1,    -1,    -1,   201,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,    -1,    -1,   199,   175,
   176,   177,   178,   179,    -1,   181,   182,   183,   184,    -1,
    -1,   187,   188,   189,   190,   191,    -1,    -1,    -1,   195,
   196,    -1,    -1,   199,   175,   176,   177,   178,   179,    -1,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,    -1,    -1,    -1,   195,   196,   175,   176,   177,   178,
   179,   180,   181,   182,   183,   184,    -1,    -1,   187,   188,
   189,   190,   191,   192,    -1,    -1,   195,   178,   179,   180,
   181,   182,   183,   184,    -1,    -1,   187,   188,   189,   190,
   191,   192,    -1,    -1,   195
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
#line 310 "yacc.y"
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
#line 346 "yacc.y"
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
#line 388 "yacc.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 411 "yacc.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 426 "yacc.y"
{ Help(NULL); ;
    break;}
case 21:
#line 429 "yacc.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 22:
#line 432 "yacc.y"
{ Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 23:
#line 435 "yacc.y"
{ Free(yyvsp[-3].c); Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 25:
#line 439 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 26:
#line 447 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 28:
#line 464 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 30:
#line 471 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 31:
#line 474 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 32:
#line 477 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 33:
#line 479 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 36:
#line 490 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 37:
#line 495 "yacc.y"
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
#line 507 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 516 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 40:
#line 527 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 41:
#line 532 "yacc.y"
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
#line 569 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 43:
#line 572 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 44:
#line 583 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 45:
#line 585 "yacc.y"
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
#line 601 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 47:
#line 604 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 48:
#line 607 "yacc.y"
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
#line 658 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 50:
#line 670 "yacc.y"
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
#line 694 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 52:
#line 701 "yacc.y"
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
#line 714 "yacc.y"
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
#line 732 "yacc.y"
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
#line 755 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 56:
#line 759 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 57:
#line 768 "yacc.y"
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
#line 782 "yacc.y"
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
#line 816 "yacc.y"
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
#line 829 "yacc.y"
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
#line 853 "yacc.y"
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
#line 863 "yacc.y"
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
#line 885 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 67:
#line 890 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 68:
#line 891 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 69:
#line 896 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 73:
#line 915 "yacc.y"
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
#line 935 "yacc.y"
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
#line 986 "yacc.y"
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
#line 1006 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 79:
#line 1012 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 80:
#line 1018 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 81:
#line 1021 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 82:
#line 1029 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 83:
#line 1033 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 85:
#line 1045 "yacc.y"
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
#line 1058 "yacc.y"
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
#line 1072 "yacc.y"
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
#line 1087 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1093 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1099 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1105 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1111 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1117 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1123 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1129 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1135 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1141 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1147 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1153 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1159 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1165 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1171 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1177 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1183 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 105:
#line 1190 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 107:
#line 1198 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 109:
#line 1211 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 110:
#line 1217 "yacc.y"
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
#line 1295 "yacc.y"
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
#line 1329 "yacc.y"
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
#line 1339 "yacc.y"
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
#line 1352 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 115:
#line 1354 "yacc.y"
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
#line 1365 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 117:
#line 1367 "yacc.y"
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
#line 1383 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 119:
#line 1389 "yacc.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 120:
#line 1395 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 121:
#line 1397 "yacc.y"
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
#line 1426 "yacc.y"
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
#line 1450 "yacc.y"
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
#line 1461 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 125:
#line 1467 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 126:
#line 1474 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 127:
#line 1480 "yacc.y"
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
#line 1491 "yacc.y"
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
#line 1506 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 130:
#line 1507 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 131:
#line 1508 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 132:
#line 1513 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 133:
#line 1514 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 134:
#line 1520 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 136:
#line 1525 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 137:
#line 1532 "yacc.y"
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
#line 1559 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 139:
#line 1564 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 140:
#line 1571 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 142:
#line 1580 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 143:
#line 1585 "yacc.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 144:
#line 1592 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 145:
#line 1595 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 146:
#line 1602 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 148:
#line 1612 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 149:
#line 1615 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 150:
#line 1618 "yacc.y"
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
#line 1649 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 152:
#line 1655 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 153:
#line 1662 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 155:
#line 1675 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 156:
#line 1682 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 157:
#line 1685 "yacc.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 158:
#line 1692 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 159:
#line 1695 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 160:
#line 1702 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 162:
#line 1714 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 163:
#line 1723 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 164:
#line 1732 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 165:
#line 1739 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 166:
#line 1742 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 167:
#line 1749 "yacc.y"
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
#line 1765 "yacc.y"
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
#line 1818 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 171:
#line 1821 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 172:
#line 1824 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 173:
#line 1827 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 174:
#line 1830 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 175:
#line 1841 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 177:
#line 1851 "yacc.y"
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
#line 1876 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 181:
#line 1890 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 182:
#line 1896 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 183:
#line 1903 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 184:
#line 1911 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 185:
#line 1914 "yacc.y"
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
#line 1936 "yacc.y"
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
#line 1951 "yacc.y"
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
#line 1975 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 190:
#line 1989 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 191:
#line 1998 "yacc.y"
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
#line 2022 "yacc.y"
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
#line 2047 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 194:
#line 2052 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 195:
#line 2060 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 196:
#line 2068 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 197:
#line 2078 "yacc.y"
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
#line 2094 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 199:
#line 2101 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 200:
#line 2107 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 201:
#line 2113 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 202:
#line 2121 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 203:
#line 2129 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 204:
#line 2137 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 205:
#line 2157 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 207:
#line 2168 "yacc.y"
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
#line 2195 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2208 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2214 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2221 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2229 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2232 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 216:
#line 2235 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 217:
#line 2238 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 218:
#line 2245 "yacc.y"
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
#line 2261 "yacc.y"
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
#line 2298 "yacc.y"
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
#line 2317 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 223:
#line 2320 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 224:
#line 2325 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 225:
#line 2330 "yacc.y"
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
#line 2342 "yacc.y"
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
#line 2366 "yacc.y"
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
#line 2426 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 230:
#line 2429 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 231:
#line 2438 "yacc.y"
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
#line 2503 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 233:
#line 2507 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 234:
#line 2514 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 236:
#line 2523 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 237:
#line 2528 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 238:
#line 2535 "yacc.y"
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
#line 2551 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 240:
#line 2557 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 241:
#line 2560 "yacc.y"
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
#line 2579 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 243:
#line 2583 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 244:
#line 2592 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 246:
#line 2603 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 247:
#line 2608 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 248:
#line 2617 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 249:
#line 2630 "yacc.y"
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
#line 2645 "yacc.y"
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
#line 2719 "yacc.y"
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
#line 2735 "yacc.y"
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
#line 2753 "yacc.y"
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
#line 2767 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 256:
#line 2770 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2773 "yacc.y"
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
#line 2819 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 260:
#line 2829 "yacc.y"
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
#line 2855 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 264:
#line 2867 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 265:
#line 2873 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 266:
#line 2880 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 268:
#line 2891 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 269:
#line 2897 "yacc.y"
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
#line 2911 "yacc.y"
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
#line 2929 "yacc.y"
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
#line 2950 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 274:
#line 2953 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 275:
#line 2957 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 276:
#line 2960 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 277:
#line 2969 "yacc.y"
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
#line 3008 "yacc.y"
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
#line 3032 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 280:
#line 3037 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 281:
#line 3043 "yacc.y"
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
#line 3193 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 283:
#line 3198 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 284:
#line 3207 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 285:
#line 3216 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 287:
#line 3224 "yacc.y"
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
#line 3264 "yacc.y"
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
#line 3279 "yacc.y"
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
#line 3307 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 291:
#line 3310 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 292:
#line 3313 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 293:
#line 3316 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 294:
#line 3323 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 296:
#line 3334 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 297:
#line 3343 "yacc.y"
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
#line 3353 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 299:
#line 3367 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 301:
#line 3379 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 302:
#line 3381 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 303:
#line 3383 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 304:
#line 3385 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 305:
#line 3393 "yacc.y"
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
#line 3415 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 308:
#line 3423 "yacc.y"
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
#line 3485 "yacc.y"
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
#line 3531 "yacc.y"
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
#line 3555 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 312:
#line 3564 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 313:
#line 3578 "yacc.y"
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
#line 3607 "yacc.y"
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
#line 3631 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 317:
#line 3639 "yacc.y"
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
#line 3694 "yacc.y"
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
#line 3711 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 320:
#line 3712 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 321:
#line 3713 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 322:
#line 3714 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 323:
#line 3715 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 324:
#line 3716 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 325:
#line 3717 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 326:
#line 3724 "yacc.y"
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
#line 3738 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3756 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 330:
#line 3766 "yacc.y"
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
#line 3791 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 334:
#line 3803 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 335:
#line 3810 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 336:
#line 3817 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 337:
#line 3820 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 338:
#line 3822 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 339:
#line 3828 "yacc.y"
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
#line 3843 "yacc.y"
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
#line 3862 "yacc.y"
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
#line 3881 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 344:
#line 3884 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 345:
#line 3892 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 346:
#line 3895 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 347:
#line 3900 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 348:
#line 3905 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 349:
#line 3910 "yacc.y"
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
#line 3920 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 351:
#line 3929 "yacc.y"
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
#line 3966 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 353:
#line 3973 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 354:
#line 3976 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 355:
#line 3988 "yacc.y"
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
#line 3998 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 357:
#line 4004 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 358:
#line 4007 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 359:
#line 4019 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 360:
#line 4027 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 361:
#line 4038 "yacc.y"
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
#line 4054 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 363:
#line 4061 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 364:
#line 4067 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 365:
#line 4073 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 366:
#line 4079 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 367:
#line 4087 "yacc.y"
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
#line 4103 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 369:
#line 4110 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 370:
#line 4116 "yacc.y"
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
#line 4127 "yacc.y"
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
#line 4138 "yacc.y"
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
#line 4154 "yacc.y"
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
#line 4166 "yacc.y"
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
#line 4188 "yacc.y"
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
#line 4210 "yacc.y"
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
#line 4223 "yacc.y"
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
#line 4236 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 380:
#line 4245 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 382:
#line 4254 "yacc.y"
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
#line 4264 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 384:
#line 4275 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 385:
#line 4284 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 386:
#line 4294 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 388:
#line 4304 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 389:
#line 4307 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 390:
#line 4316 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 391:
#line 4329 "yacc.y"
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
#line 4345 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 394:
#line 4349 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 395:
#line 4353 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 396:
#line 4357 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 397:
#line 4362 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 398:
#line 4373 "yacc.y"
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
#line 4390 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 401:
#line 4394 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 402:
#line 4398 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 403:
#line 4402 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 404:
#line 4406 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 405:
#line 4411 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 406:
#line 4422 "yacc.y"
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
#line 4437 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 409:
#line 4441 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 410:
#line 4445 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 411:
#line 4449 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 412:
#line 4454 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 413:
#line 4465 "yacc.y"
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
#line 4483 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 416:
#line 4487 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 417:
#line 4491 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 418:
#line 4495 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 419:
#line 4500 "yacc.y"
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
#line 4510 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 421:
#line 4516 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 422:
#line 4522 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 423:
#line 4532 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 424:
#line 4535 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 425:
#line 4540 "yacc.y"
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
#line 4558 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 428:
#line 4567 "yacc.y"
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
#line 4596 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 430:
#line 4599 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 431:
#line 4602 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 432:
#line 4610 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 433:
#line 4625 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 435:
#line 4637 "yacc.y"
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
#line 4660 "yacc.y"
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
#line 4674 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 440:
#line 4681 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 441:
#line 4689 "yacc.y"
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
#line 4735 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 443:
#line 4740 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 444:
#line 4746 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 445:
#line 4749 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 446:
#line 4754 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 448:
#line 4765 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 449:
#line 4768 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 450:
#line 4774 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 451:
#line 4779 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 452:
#line 4785 "yacc.y"
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
#line 4798 "yacc.y"
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
#line 4812 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 456:
#line 4819 "yacc.y"
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
#line 4847 "yacc.y"
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
#line 4856 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 459:
#line 4857 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 460:
#line 4863 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 461:
#line 4872 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 462:
#line 4889 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 464:
#line 4901 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 466:
#line 4908 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 468:
#line 4920 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 469:
#line 4927 "yacc.y"
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
#line 4939 "yacc.y"
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
#line 4949 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 472:
#line 4954 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 473:
#line 4960 "yacc.y"
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
#line 4977 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 475:
#line 4987 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 476:
#line 4990 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 477:
#line 4994 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 478:
#line 5005 "yacc.y"
{
      vyyerror("Plot has been superseded by Print "
	       "(Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 479:
#line 5011 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 480:
#line 5020 "yacc.y"
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
#line 5032 "yacc.y"
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
#line 5055 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 483:
#line 5056 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 484:
#line 5057 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 485:
#line 5058 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 486:
#line 5064 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 487:
#line 5066 "yacc.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 488:
#line 5072 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 489:
#line 5078 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 490:
#line 5085 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 491:
#line 5094 "yacc.y"
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
#line 5108 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 493:
#line 5116 "yacc.y"
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
#line 5129 "yacc.y"
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
#line 5139 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 496:
#line 5148 "yacc.y"
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
#line 5162 "yacc.y"
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
#line 5181 "yacc.y"
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
#line 5203 "yacc.y"
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
#line 5223 "yacc.y"
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
    ;
    break;}
case 502:
#line 5243 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 503:
#line 5250 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 504:
#line 5257 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 505:
#line 5264 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 506:
#line 5268 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 507:
#line 5272 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 508:
#line 5276 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 509:
#line 5280 "yacc.y"
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
#line 5289 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 511:
#line 5294 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 512:
#line 5299 "yacc.y"
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
#line 5319 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Print") ;  	
    ;
    break;}
case 514:
#line 5326 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 515:
#line 5333 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 516:
#line 5341 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 517:
#line 5349 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 518:
#line 5356 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 519:
#line 5363 "yacc.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 520:
#line 5367 "yacc.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 521:
#line 5380 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 522:
#line 5386 "yacc.y"
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
case 523:
#line 5433 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 525:
#line 5444 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 526:
#line 5447 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 527:
#line 5453 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 528:
#line 5454 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 530:
#line 5462 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 531:
#line 5465 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 532:
#line 5474 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 533:
#line 5477 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 534:
#line 5488 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 535:
#line 5494 "yacc.y"
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
case 536:
#line 5513 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 537:
#line 5519 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 538:
#line 5525 "yacc.y"
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
case 539:
#line 5537 "yacc.y"
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
case 542:
#line 5588 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 543:
#line 5594 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 544:
#line 5600 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 545:
#line 5611 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 546:
#line 5612 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 547:
#line 5613 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 548:
#line 5614 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 549:
#line 5615 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 550:
#line 5616 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 551:
#line 5617 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 552:
#line 5618 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 553:
#line 5619 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 554:
#line 5620 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 555:
#line 5621 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 556:
#line 5622 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 557:
#line 5623 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 558:
#line 5624 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 559:
#line 5625 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 560:
#line 5626 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 561:
#line 5627 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 562:
#line 5628 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 563:
#line 5629 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 564:
#line 5630 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 565:
#line 5631 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 566:
#line 5634 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 567:
#line 5635 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 568:
#line 5636 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 569:
#line 5637 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 570:
#line 5638 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 571:
#line 5639 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 572:
#line 5640 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 573:
#line 5641 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 574:
#line 5642 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 575:
#line 5643 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 576:
#line 5644 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 577:
#line 5645 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 578:
#line 5646 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 579:
#line 5647 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 580:
#line 5648 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 581:
#line 5649 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 582:
#line 5650 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 583:
#line 5651 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 584:
#line 5652 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 585:
#line 5653 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 586:
#line 5654 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 587:
#line 5655 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 588:
#line 5656 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 589:
#line 5657 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 590:
#line 5658 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 591:
#line 5659 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 592:
#line 5660 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 593:
#line 5661 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 594:
#line 5662 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 595:
#line 5663 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 596:
#line 5664 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 597:
#line 5665 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 598:
#line 5666 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 599:
#line 5667 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 600:
#line 5668 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 601:
#line 5669 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 602:
#line 5670 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 603:
#line 5671 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 604:
#line 5672 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 605:
#line 5673 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 606:
#line 5678 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 607:
#line 5679 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 608:
#line 5680 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 609:
#line 5681 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 610:
#line 5682 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 611:
#line 5683 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 612:
#line 5684 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 613:
#line 5686 "yacc.y"
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
case 614:
#line 5705 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 615:
#line 5708 "yacc.y"
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
#line 5724 "yacc.y"



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


