
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
#define	tDefineConstant	268
#define	tPi	269
#define	t0D	270
#define	t1D	271
#define	t2D	272
#define	t3D	273
#define	tExp	274
#define	tLog	275
#define	tLog10	276
#define	tSqrt	277
#define	tSin	278
#define	tAsin	279
#define	tCos	280
#define	tAcos	281
#define	tTan	282
#define	tAtan	283
#define	tAtan2	284
#define	tSinh	285
#define	tCosh	286
#define	tTanh	287
#define	tFabs	288
#define	tFloor	289
#define	tCeil	290
#define	tFmod	291
#define	tModulo	292
#define	tHypot	293
#define	tSolidAngle	294
#define	tTrace	295
#define	tOrder	296
#define	tCrossProduct	297
#define	tMHTimeIntegration	298
#define	tGroup	299
#define	tDefineGroup	300
#define	tAll	301
#define	tInSupport	302
#define	tDefineFunction	303
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
#define	tdFunction	334
#define	tSubFunction	335
#define	tSupport	336
#define	tEntity	337
#define	tSubSpace	338
#define	tNameOfBasisFunction	339
#define	tGlobalQuantity	340
#define	tEntityType	341
#define	tEntitySubType	342
#define	tNameOfConstraint	343
#define	tFormulation	344
#define	tQuantity	345
#define	tNameOfSpace	346
#define	tIndexOfSystem	347
#define	tSymmetry	348
#define	tEquation	349
#define	tGalerkin	350
#define	tdeRham	351
#define	tGlobalTerm	352
#define	tGlobalEquation	353
#define	tDt	354
#define	tDtDof	355
#define	tDtDt	356
#define	tDtDtDof	357
#define	tJacNL	358
#define	tNeverDt	359
#define	tIn	360
#define	tResolution	361
#define	tDefineSystem	362
#define	tNameOfFormulation	363
#define	tNameOfMesh	364
#define	tFrequency	365
#define	tSolver	366
#define	tOriginSystem	367
#define	tDestinationSystem	368
#define	tOperation	369
#define	tOperationEnd	370
#define	tSetTime	371
#define	tDTime	372
#define	tSetFrequency	373
#define	tFourierTransform	374
#define	tIf	375
#define	tElse	376
#define	tLanczos	377
#define	tPerturbation	378
#define	tUpdate	379
#define	tUpdateConstraint	380
#define	tBreak	381
#define	tTimeLoopTheta	382
#define	tTime0	383
#define	tTimeMax	384
#define	tTheta	385
#define	tTimeLoopNewmark	386
#define	tBeta	387
#define	tGamma	388
#define	tIterativeLoop	389
#define	tNbrMaxIteration	390
#define	tRelaxationFactor	391
#define	tIterativeTimeReduction	392
#define	tDivisionCoefficient	393
#define	tChangeOfState	394
#define	tChangeOfCoordinates	395
#define	tSystemCommand	396
#define	tPostProcessing	397
#define	tNameOfSystem	398
#define	tPostOperation	399
#define	tNameOfPostProcessing	400
#define	tUsingPost	401
#define	tAppend	402
#define	tPlot	403
#define	tPrint	404
#define	tPrintGroup	405
#define	tWrite	406
#define	tAdapt	407
#define	tOnGlobal	408
#define	tOnRegion	409
#define	tOnElementsOf	410
#define	tOnGrid	411
#define	tOnSection	412
#define	tOnPoint	413
#define	tOnLine	414
#define	tOnPlane	415
#define	tOnBox	416
#define	tWithArgument	417
#define	tFile	418
#define	tDepth	419
#define	tDimension	420
#define	tTimeStep	421
#define	tHarmonicToTime	422
#define	tFormat	423
#define	tHeader	424
#define	tFooter	425
#define	tSkin	426
#define	tSmoothing	427
#define	tTarget	428
#define	tSort	429
#define	tIso	430
#define	tNoNewLine	431
#define	tChangeOfValues	432
#define	tFlag	433
#define	tHelp	434
#define	tCpu	435
#define	tCheck	436
#define	tDEF	437
#define	tOR	438
#define	tAND	439
#define	tEQUAL	440
#define	tNOTEQUAL	441
#define	tAPPROXEQUAL	442
#define	tLESSOREQUAL	443
#define	tGREATEROREQUAL	444
#define	tLESSLESS	445
#define	tGREATERGREATER	446
#define	tCROSSPRODUCT	447
#define	UNARYPREC	448

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.35 2001-11-22 13:59:20 dular Exp $ */

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



#define	YYFINAL		1623
#define	YYFLAG		-32768
#define	YYNTBASE	215

#define YYTRANSLATE(x) ((unsigned)(x) <= 448 ? yytranslate[x] : 400)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   202,     2,   210,   211,   200,     2,     2,   205,
   206,   198,   196,   214,   197,   209,   199,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   190,
     2,   192,   184,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   207,     2,   208,   204,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   212,     2,   213,     2,     2,     2,     2,     2,
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
   177,   178,   179,   180,   181,   182,   183,   185,   186,   187,
   188,   189,   191,   193,   194,   195,   201,   203
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   152,   156,   161,   167,   168,   175,   181,
   183,   184,   185,   193,   196,   198,   201,   203,   205,   207,
   209,   210,   214,   219,   221,   223,   227,   228,   232,   237,
   239,   243,   249,   251,   256,   260,   261,   265,   272,   273,
   275,   280,   281,   284,   288,   289,   292,   298,   305,   313,
   315,   316,   320,   325,   330,   331,   334,   335,   339,   341,
   345,   346,   349,   351,   352,   353,   361,   365,   369,   376,
   380,   384,   388,   392,   396,   400,   404,   408,   412,   416,
   420,   424,   428,   432,   435,   438,   441,   445,   447,   451,
   454,   456,   459,   460,   466,   467,   479,   484,   489,   490,
   498,   505,   508,   511,   514,   517,   521,   524,   528,   531,
   535,   537,   541,   542,   546,   553,   554,   559,   560,   563,
   567,   572,   573,   578,   579,   582,   586,   590,   595,   596,
   601,   602,   605,   609,   613,   618,   619,   624,   625,   628,
   632,   636,   641,   642,   647,   648,   651,   655,   659,   663,
   667,   671,   675,   676,   679,   683,   685,   686,   689,   693,
   698,   702,   707,   713,   714,   719,   720,   723,   727,   731,
   735,   739,   743,   747,   755,   759,   763,   767,   771,   775,
   783,   791,   799,   800,   803,   807,   809,   810,   813,   817,
   822,   826,   831,   836,   841,   846,   847,   852,   853,   856,
   860,   864,   869,   874,   882,   886,   890,   894,   895,   896,
   897,   916,   917,   922,   923,   926,   930,   934,   938,   940,
   944,   945,   949,   951,   955,   956,   960,   961,   966,   967,
   970,   974,   978,   982,   983,   988,   989,   992,   996,  1002,
  1006,  1010,  1015,  1016,  1019,  1023,  1025,  1026,  1029,  1033,
  1038,  1042,  1047,  1052,  1053,  1058,  1059,  1062,  1066,  1070,
  1074,  1078,  1079,  1086,  1090,  1091,  1097,  1101,  1105,  1109,
  1113,  1114,  1118,  1119,  1122,  1127,  1132,  1137,  1142,  1143,
  1146,  1150,  1154,  1158,  1159,  1162,  1166,  1170,  1174,  1178,
  1179,  1182,  1183,  1184,  1194,  1198,  1202,  1206,  1207,  1210,
  1214,  1215,  1216,  1226,  1227,  1229,  1231,  1233,  1235,  1237,
  1239,  1244,  1248,  1249,  1252,  1256,  1258,  1259,  1262,  1266,
  1271,  1276,  1277,  1283,  1284,  1289,  1290,  1293,  1297,  1301,
  1305,  1309,  1313,  1317,  1321,  1325,  1328,  1332,  1333,  1337,
  1339,  1343,  1344,  1348,  1349,  1352,  1356,  1360,  1365,  1370,
  1375,  1380,  1386,  1392,  1395,  1403,  1415,  1423,  1431,  1441,
  1451,  1463,  1481,  1495,  1511,  1523,  1537,  1538,  1546,  1547,
  1555,  1563,  1569,  1575,  1577,  1579,  1580,  1583,  1587,  1591,
  1594,  1595,  1598,  1602,  1606,  1610,  1614,  1619,  1620,  1623,
  1627,  1631,  1635,  1639,  1643,  1648,  1649,  1652,  1656,  1660,
  1664,  1668,  1673,  1674,  1677,  1681,  1685,  1689,  1693,  1697,
  1702,  1707,  1712,  1713,  1718,  1719,  1722,  1726,  1730,  1734,
  1738,  1742,  1746,  1747,  1750,  1754,  1756,  1757,  1760,  1764,
  1769,  1774,  1778,  1783,  1784,  1789,  1790,  1793,  1797,  1802,
  1803,  1809,  1815,  1816,  1819,  1820,  1827,  1831,  1832,  1837,
  1841,  1845,  1846,  1849,  1853,  1855,  1856,  1859,  1863,  1867,
  1871,  1875,  1880,  1881,  1890,  1891,  1892,  1896,  1904,  1912,
  1913,  1924,  1928,  1935,  1937,  1939,  1941,  1943,  1944,  1948,
  1950,  1953,  1956,  1969,  1972,  1988,  1993,  2006,  2024,  2047,
  2060,  2061,  2064,  2068,  2073,  2078,  2082,  2085,  2088,  2092,
  2096,  2100,  2104,  2108,  2112,  2116,  2120,  2124,  2128,  2132,
  2136,  2142,  2145,  2149,  2159,  2163,  2164,  2167,  2172,  2177,
  2183,  2184,  2188,  2194,  2200,  2202,  2204,  2206,  2208,  2210,
  2212,  2214,  2216,  2218,  2220,  2222,  2224,  2226,  2228,  2230,
  2232,  2234,  2236,  2238,  2240,  2242,  2244,  2248,  2251,  2254,
  2258,  2262,  2266,  2270,  2274,  2278,  2282,  2286,  2290,  2294,
  2298,  2302,  2306,  2310,  2315,  2320,  2325,  2330,  2335,  2340,
  2345,  2350,  2355,  2360,  2367,  2372,  2377,  2382,  2387,  2392,
  2397,  2404,  2411,  2418,  2424,  2427,  2429,  2431,  2433,  2435,
  2437,  2439,  2441,  2443,  2444,  2446,  2448,  2452,  2454,  2456,
  2460,  2464,  2468,  2474,  2478,  2483,  2488,  2495,  2497,  2499
};

static const short yyrhs[] = {    -1,
   216,   217,     0,     0,     0,   217,   218,   219,     0,    45,
   212,   222,   213,     0,    79,   212,   242,   213,     0,    50,
   212,   276,   213,     0,    63,   212,   261,   213,     0,    65,
   212,   267,   213,     0,    75,   212,   283,   213,     0,    90,
   212,   306,   213,     0,   107,   212,   332,   213,     0,   143,
   212,   362,   213,     0,   145,   212,   374,   213,     0,   378,
     0,   391,     0,    10,   399,     0,   220,     0,   180,     7,
     0,   180,   150,     7,     0,   180,   182,     7,     0,   180,
    21,     7,     0,   180,   181,     7,     0,   180,   180,     7,
     0,   180,     5,     7,     0,   181,     7,     0,   182,     7,
     0,   182,    45,     7,     0,   182,    79,     7,     0,   182,
    50,     7,     0,   182,    63,     7,     0,   182,    65,     7,
     0,   182,    75,     7,     0,   182,    90,     7,     0,   182,
   107,     7,     0,   182,   143,     7,     0,   182,   145,     7,
     0,   182,     3,     7,     0,     0,   221,   382,     0,     0,
     0,   222,   223,   224,     0,     5,   183,   226,     7,     0,
     5,   241,   183,   226,     7,     0,     0,     5,   239,   183,
   225,   226,     7,     0,    46,   207,   237,   208,     7,     0,
   391,     0,     0,     0,   230,   207,   227,   231,   228,   232,
   208,     0,   210,   234,     0,   226,     0,     5,   240,     0,
    51,     0,     5,     0,   234,     0,    47,     0,     0,   238,
   233,   234,     0,   238,    48,     5,   240,     0,     5,     0,
   236,     0,   212,   235,   213,     0,     0,   235,   238,   236,
     0,   235,   238,   197,   236,     0,     3,     0,     3,     8,
   394,     0,     3,     8,     3,     8,   394,     0,     5,     0,
     5,   212,   394,   213,     0,     5,   212,   213,     0,     0,
   237,   238,     5,     0,   237,   238,     5,   212,   394,   213,
     0,     0,   214,     0,   212,   210,   394,   213,     0,     0,
   212,   213,     0,   212,   394,   213,     0,     0,   242,   243,
     0,    49,   207,   244,   208,     7,     0,     5,   207,   208,
   183,   245,     7,     0,     5,   207,   229,   208,   183,   245,
     7,     0,   391,     0,     0,   244,   238,     5,     0,    11,
   207,   394,   208,     0,    79,   207,     5,   208,     0,     0,
   246,   249,     0,     0,   212,   248,   213,     0,   245,     0,
   248,   214,   245,     0,     0,   250,   251,     0,   254,     0,
     0,     0,   251,   184,   252,   251,     8,   253,   251,     0,
   251,   198,   251,     0,   251,   201,   251,     0,    43,   207,
   251,   214,   251,   208,     0,   251,   199,   251,     0,   251,
   196,   251,     0,   251,   197,   251,     0,   251,   200,   251,
     0,   251,   204,   251,     0,   251,   190,   251,     0,   251,
   192,   251,     0,   251,   191,   251,     0,   251,   193,   251,
     0,   251,   187,   251,     0,   251,   188,   251,     0,   251,
   189,   251,     0,   251,   186,   251,     0,   251,   185,   251,
     0,   197,   251,     0,   196,   251,     0,   202,   251,     0,
   205,   251,   206,     0,   395,     0,   393,   258,   260,     0,
     5,   331,     0,   331,     0,   331,   258,     0,     0,   100,
   255,   207,   249,   208,     0,     0,    44,   256,   207,     3,
   214,   394,   214,   249,   214,   249,   208,     0,    40,   207,
   331,   208,     0,    42,   207,   331,   208,     0,     0,    41,
   257,   207,   249,   214,   229,   208,     0,   190,     5,   192,
   207,   249,   208,     0,   211,     5,     0,   211,   167,     0,
   211,   118,     0,   211,     3,     0,   254,   210,     3,     0,
   210,     3,     0,   207,   209,   208,     0,   207,   208,     0,
   207,   259,   208,     0,   251,     0,   259,   214,   251,     0,
     0,   212,   397,   213,     0,   212,    51,   207,   229,   208,
   213,     0,     0,   261,   212,   262,   213,     0,     0,   262,
   263,     0,    76,     5,     7,     0,    64,   212,   264,   213,
     0,     0,   264,   212,   265,   213,     0,     0,   265,   266,
     0,    51,   229,     7,     0,    51,    47,     7,     0,    63,
     5,   260,     7,     0,     0,   267,   212,   268,   213,     0,
     0,   268,   269,     0,    76,     5,     7,     0,    68,   245,
     7,     0,    64,   212,   270,   213,     0,     0,   270,   212,
   271,   213,     0,     0,   271,   272,     0,    66,     5,     7,
     0,    67,     5,     7,     0,    64,   212,   273,   213,     0,
     0,   273,   212,   274,   213,     0,     0,   274,   275,     0,
    69,     5,     7,     0,    70,   394,     7,     0,    71,   394,
     7,     0,    72,   394,     7,     0,    73,   394,     7,     0,
    74,   394,     7,     0,     0,   276,   277,     0,   212,   278,
   213,     0,   391,     0,     0,   278,   279,     0,    76,     5,
     7,     0,    76,     5,   239,     7,     0,    66,     5,     7,
     0,    64,   212,   280,   213,     0,    64,     5,   212,   280,
   213,     0,     0,   280,   212,   281,   213,     0,     0,   281,
   282,     0,    66,     5,     7,     0,    51,   229,     7,     0,
    52,   229,     7,     0,    58,   245,     7,     0,    57,   245,
     7,     0,    62,     5,     7,     0,    59,   212,     3,   238,
     3,   213,     7,     0,    53,   229,     7,     0,    54,   229,
     7,     0,    79,   245,     7,     0,    56,   245,     7,     0,
    55,   245,     7,     0,    79,   207,   245,   214,   245,   208,
     7,     0,    56,   207,   245,   214,   245,   208,     7,     0,
    55,   207,   245,   214,   245,   208,     7,     0,     0,   283,
   284,     0,   212,   285,   213,     0,   391,     0,     0,   285,
   286,     0,    76,     5,     7,     0,    76,     5,   239,     7,
     0,    66,     5,     7,     0,    77,   212,   287,   213,     0,
    84,   212,   293,   213,     0,    86,   212,   300,   213,     0,
    50,   212,   303,   213,     0,     0,   287,   212,   288,   213,
     0,     0,   288,   289,     0,    76,     5,     7,     0,    78,
     5,     7,     0,    78,     5,   239,     7,     0,    79,     5,
   290,     7,     0,    80,   212,     5,   238,     5,   213,     7,
     0,    81,   247,     7,     0,    82,   229,     7,     0,    83,
   229,     7,     0,     0,     0,     0,   212,    91,     5,     7,
    90,     5,   239,     7,   291,    45,   229,     7,   292,   107,
     5,   240,     7,   213,     0,     0,   293,   212,   294,   213,
     0,     0,   294,   295,     0,    76,     5,     7,     0,    85,
   296,     7,     0,    78,   298,     7,     0,     5,     0,   212,
   297,   213,     0,     0,   297,   238,     5,     0,     5,     0,
   212,   299,   213,     0,     0,   299,   238,     5,     0,     0,
   300,   212,   301,   213,     0,     0,   301,   302,     0,    76,
     5,     7,     0,    66,     5,     7,     0,    78,     5,     7,
     0,     0,   303,   212,   304,   213,     0,     0,   304,   305,
     0,    78,     5,     7,     0,    83,   230,    89,     5,     7,
     0,    87,   230,     7,     0,    88,   233,     7,     0,    89,
     5,   240,     7,     0,     0,   306,   307,     0,   212,   308,
   213,     0,   391,     0,     0,   308,   309,     0,    76,     5,
     7,     0,    76,     5,   239,     7,     0,    66,     5,     7,
     0,    91,   212,   310,   213,     0,    95,   212,   316,   213,
     0,     0,   310,   212,   311,   213,     0,     0,   311,   312,
     0,    76,     5,     7,     0,    66,    86,     7,     0,    66,
    96,     7,     0,    66,     5,     7,     0,     0,    92,     5,
   240,   313,   315,     7,     0,    93,     3,     7,     0,     0,
   207,   314,   249,   208,     7,     0,   106,   229,     7,     0,
    65,     5,     7,     0,    63,     5,     7,     0,    94,     3,
     7,     0,     0,   207,     5,   208,     0,     0,   316,   317,
     0,    96,   212,   322,   213,     0,    97,   212,   322,   213,
     0,    98,   212,   326,   213,     0,    99,   212,   318,   213,
     0,     0,   318,   319,     0,    66,     5,     7,     0,    89,
     5,     7,     0,   212,   320,   213,     0,     0,   320,   321,
     0,    60,   331,     7,     0,    61,   331,     7,     0,    95,
   331,     7,     0,   106,   229,     7,     0,     0,   322,   323,
     0,     0,     0,   330,   207,   324,   249,   325,   214,   249,
   208,     7,     0,   106,   229,     7,     0,    63,     5,     7,
     0,    65,     5,     7,     0,     0,   326,   327,     0,   106,
   229,     7,     0,     0,     0,   330,   207,   328,   249,   329,
   214,   331,   208,     7,     0,     0,   100,     0,   101,     0,
   102,     0,   103,     0,   104,     0,   105,     0,   212,     5,
     5,   213,     0,   212,     5,   213,     0,     0,   332,   333,
     0,   212,   334,   213,     0,   391,     0,     0,   334,   335,
     0,    76,     5,     7,     0,    76,     5,   239,     7,     0,
   108,   212,   337,   213,     0,     0,   115,   336,   212,   344,
   213,     0,     0,   337,   212,   338,   213,     0,     0,   338,
   339,     0,    76,     5,     7,     0,    66,     5,     7,     0,
   109,   340,     7,     0,   110,   399,     7,     0,   113,   342,
     7,     0,   114,     5,     7,     0,   111,   396,     7,     0,
   112,   399,     7,     0,     5,   240,     0,   212,   341,   213,
     0,     0,   341,   238,     5,     0,     5,     0,   212,   343,
   213,     0,     0,   343,   238,     5,     0,     0,   344,   345,
     0,     5,     5,     7,     0,   117,   245,     7,     0,   128,
   212,   351,   213,     0,   132,   212,   353,   213,     0,   135,
   212,   355,   213,     0,   138,   212,   357,   213,     0,     5,
   207,     5,   208,     7,     0,   117,   207,   245,   208,     7,
     0,   127,     7,     0,   121,   207,   245,   208,   212,   344,
   213,     0,   121,   207,   245,   208,   212,   344,   213,   122,
   212,   344,   213,     0,   119,   207,     5,   214,   245,   208,
     7,     0,   125,   207,     5,   214,   245,   208,     7,     0,
   126,   207,     5,   214,   229,   214,     5,   208,     7,     0,
   120,   207,     5,   214,     5,   214,   396,   208,     7,     0,
   123,   207,     5,   214,   394,   214,   396,   214,   394,   208,
     7,     0,   124,   207,     5,   214,     5,   214,     5,   214,
   394,   214,   396,   214,   394,   214,   394,   208,     7,     0,
   128,   207,   394,   214,   394,   214,   245,   214,   245,   208,
   212,   344,   213,     0,   132,   207,   394,   214,   394,   214,
   245,   214,   394,   214,   394,   208,   212,   344,   213,     0,
   135,   207,   394,   214,   394,   214,   245,   208,   212,   344,
   213,     0,   135,   207,   394,   214,   394,   214,   245,   214,
   394,   208,   212,   344,   213,     0,     0,   150,   346,   207,
   348,   349,   208,     7,     0,     0,   152,   347,   207,   348,
   349,   208,     7,     0,   141,   207,   229,   214,   245,   208,
     7,     0,   145,   207,     5,   208,     7,     0,   142,   207,
   399,   208,     7,     0,   247,     0,     5,     0,     0,   349,
   350,     0,   214,   164,   399,     0,   214,   167,   396,     0,
   214,   396,     0,     0,   351,   352,     0,   129,   394,     7,
     0,   130,   394,     7,     0,   118,   245,     7,     0,   131,
   245,     7,     0,   115,   212,   344,   213,     0,     0,   353,
   354,     0,   129,   394,     7,     0,   130,   394,     7,     0,
   118,   245,     7,     0,   133,   394,     7,     0,   134,   394,
     7,     0,   115,   212,   344,   213,     0,     0,   355,   356,
     0,   136,   394,     7,     0,    68,   394,     7,     0,   137,
   245,     7,     0,   179,   394,     7,     0,   115,   212,   344,
   213,     0,     0,   357,   358,     0,   136,   394,     7,     0,
   139,   394,     7,     0,    68,   394,     7,     0,   179,   394,
     7,     0,   108,     5,     7,     0,   140,   212,   359,   213,
     0,   115,   212,   344,   213,     0,   116,   212,   344,   213,
     0,     0,   359,   212,   360,   213,     0,     0,   360,   361,
     0,    66,     5,     7,     0,    91,     5,     7,     0,   106,
   229,     7,     0,    68,   394,     7,     0,    79,   245,     7,
     0,   179,     5,     7,     0,     0,   362,   363,     0,   212,
   364,   213,     0,   391,     0,     0,   364,   365,     0,    76,
     5,     7,     0,    76,     5,   239,     7,     0,   109,     5,
   240,     7,     0,   144,     5,     7,     0,    91,   212,   366,
   213,     0,     0,   366,   212,   367,   213,     0,     0,   367,
   368,     0,    76,     5,     7,     0,    57,   212,   369,   213,
     0,     0,   369,    96,   212,   370,   213,     0,   369,     5,
   212,   370,   213,     0,     0,   370,   371,     0,     0,   330,
   207,   372,   249,   208,     7,     0,    66,     5,     7,     0,
     0,   106,   373,   229,     7,     0,    63,     5,     7,     0,
    65,     5,     7,     0,     0,   374,   375,     0,   212,   376,
   213,     0,   391,     0,     0,   376,   377,     0,    76,     5,
     7,     0,   146,     5,     7,     0,   169,     5,     7,     0,
   148,   399,     7,     0,   115,   212,   380,   213,     0,     0,
   145,     5,   147,     5,   379,   212,   380,   213,     0,     0,
     0,   380,   381,   382,     0,   149,   207,   384,   387,   388,
   208,     7,     0,   150,   207,   384,   387,   388,   208,     7,
     0,     0,   151,   207,   229,   383,   214,   106,   229,   388,
   208,     7,     0,     5,   386,   214,     0,     5,   386,   385,
     5,   386,   214,     0,   198,     0,   199,     0,   196,     0,
   197,     0,     0,   207,   229,   208,     0,   154,     0,   155,
   229,     0,   156,   229,     0,   158,   212,   212,   397,   213,
   212,   397,   213,   212,   397,   213,   213,     0,   157,   229,
     0,   157,   212,   245,   214,   245,   214,   245,   213,   212,
   396,   214,   396,   214,   396,   213,     0,   159,   212,   397,
   213,     0,   160,   212,   212,   397,   213,   212,   397,   213,
   213,   212,   394,   213,     0,   161,   212,   212,   397,   213,
   212,   397,   213,   212,   397,   213,   213,   212,   394,   214,
   394,   213,     0,   162,   212,   212,   397,   213,   212,   397,
   213,   212,   397,   213,   212,   397,   213,   213,   212,   394,
   214,   394,   214,   394,   213,     0,   155,   229,   163,     5,
   212,   394,   214,   394,   213,   212,   394,   213,     0,     0,
   388,   389,     0,   214,   164,   399,     0,   214,   164,   192,
   399,     0,   214,   164,   195,   399,     0,   214,   165,   394,
     0,   214,   172,     0,   214,   173,     0,   214,   168,   394,
     0,   214,   169,     5,     0,   214,   170,   390,     0,   214,
   171,   390,     0,   214,   169,   390,     0,   214,   166,   394,
     0,   214,   167,   396,     0,   214,   153,     5,     0,   214,
   175,     5,     0,   214,   174,   394,     0,   214,    57,   396,
     0,   214,   176,   394,     0,   214,   176,   212,   397,   213,
     0,   214,   177,     0,   214,   111,   396,     0,   214,   141,
   212,   245,   214,   245,   214,   245,   213,     0,   214,   178,
   247,     0,     0,   390,     6,     0,     5,   183,   396,     7,
     0,     5,   183,     6,     7,     0,    14,   207,   392,   208,
     7,     0,     0,   392,   238,     5,     0,   392,   238,     5,
   183,   394,     0,   392,   238,     5,   183,     6,     0,    20,
     0,    21,     0,    22,     0,    23,     0,    24,     0,    25,
     0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
     0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
     0,    36,     0,    37,     0,    38,     0,    39,     0,     5,
     0,   395,     0,   205,   394,   206,     0,   197,   394,     0,
   202,   394,     0,   394,   197,   394,     0,   394,   196,   394,
     0,   394,   198,   394,     0,   394,   199,   394,     0,   394,
   200,   394,     0,   394,   204,   394,     0,   394,   190,   394,
     0,   394,   192,   394,     0,   394,   191,   394,     0,   394,
   193,   394,     0,   394,   187,   394,     0,   394,   188,   394,
     0,   394,   186,   394,     0,   394,   185,   394,     0,    20,
   207,   394,   208,     0,    21,   207,   394,   208,     0,    22,
   207,   394,   208,     0,    23,   207,   394,   208,     0,    24,
   207,   394,   208,     0,    25,   207,   394,   208,     0,    26,
   207,   394,   208,     0,    27,   207,   394,   208,     0,    28,
   207,   394,   208,     0,    29,   207,   394,   208,     0,    30,
   207,   394,   214,   394,   208,     0,    31,   207,   394,   208,
     0,    32,   207,   394,   208,     0,    33,   207,   394,   208,
     0,    34,   207,   394,   208,     0,    35,   207,   394,   208,
     0,    36,   207,   394,   208,     0,    37,   207,   394,   214,
   394,   208,     0,    38,   207,   394,   214,   394,   208,     0,
    39,   207,   394,   214,   394,   208,     0,   394,   184,   394,
     8,   394,     0,   394,   210,     0,     4,     0,     3,     0,
    15,     0,    16,     0,    17,     0,    18,     0,    19,     0,
     5,     0,     0,   394,     0,   398,     0,   212,   397,   213,
     0,   394,     0,   398,     0,   397,   214,   394,     0,   397,
   214,   398,     0,   394,     8,   394,     0,   394,     8,   394,
     8,   394,     0,     5,   212,   213,     0,     5,   212,   397,
   213,     0,    12,   207,     5,   208,     0,    13,   207,     5,
   214,     5,   208,     0,     6,     0,     5,     0,     9,   207,
   399,   214,   399,   208,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   319,   354,   391,   394,   397,   400,   403,   404,   405,   406,
   407,   408,   409,   410,   411,   413,   415,   417,   422,   431,
   434,   436,   438,   440,   442,   444,   446,   448,   450,   452,
   454,   456,   458,   460,   462,   464,   466,   468,   470,   473,
   481,   495,   498,   499,   502,   507,   510,   512,   515,   517,
   521,   529,   540,   549,   558,   565,   600,   605,   616,   619,
   633,   638,   641,   690,   703,   729,   734,   749,   767,   788,
   794,   803,   817,   851,   864,   884,   888,   898,   915,   915,
   918,   924,   927,   930,   940,   943,   946,   950,   970,  1014,
  1018,  1021,  1038,  1047,  1054,  1057,  1062,  1068,  1072,  1077,
  1082,  1088,  1095,  1099,  1112,  1127,  1141,  1147,  1153,  1159,
  1165,  1171,  1177,  1183,  1189,  1195,  1201,  1207,  1213,  1219,
  1225,  1231,  1237,  1244,  1250,  1252,  1261,  1265,  1271,  1345,
  1379,  1388,  1400,  1402,  1413,  1415,  1431,  1437,  1443,  1445,
  1474,  1498,  1511,  1517,  1524,  1530,  1537,  1547,  1550,  1551,
  1554,  1557,  1560,  1565,  1568,  1582,  1589,  1594,  1599,  1603,
  1610,  1615,  1620,  1625,  1631,  1635,  1640,  1643,  1679,  1687,
  1692,  1701,  1705,  1714,  1717,  1722,  1727,  1732,  1740,  1744,
  1756,  1766,  1771,  1776,  1781,  1793,  1797,  1853,  1856,  1859,
  1862,  1865,  1874,  1881,  1884,  1906,  1909,  1919,  1923,  1931,
  1938,  1947,  1950,  1970,  1987,  2009,  2019,  2023,  2035,  2059,
  2084,  2089,  2097,  2105,  2115,  2132,  2140,  2147,  2154,  2163,
  2172,  2181,  2200,  2208,  2211,  2234,  2238,  2247,  2251,  2259,
  2266,  2275,  2278,  2281,  2284,  2289,  2307,  2354,  2370,  2374,
  2379,  2384,  2389,  2403,  2423,  2428,  2452,  2507,  2511,  2515,
  2524,  2588,  2594,  2599,  2604,  2608,  2615,  2618,  2623,  2641,
  2646,  2650,  2667,  2681,  2686,  2690,  2703,  2709,  2716,  2723,
  2727,  2734,  2744,  2755,  2772,  2844,  2856,  2860,  2880,  2894,
  2897,  2900,  2944,  2951,  2954,  2976,  2980,  2988,  2992,  3000,
  3007,  3017,  3019,  3024,  3039,  3055,  3072,  3076,  3081,  3085,
  3088,  3098,  3137,  3161,  3166,  3172,  3333,  3338,  3347,  3356,
  3361,  3364,  3402,  3419,  3445,  3450,  3453,  3456,  3461,  3469,
  3472,  3484,  3494,  3506,  3515,  3518,  3522,  3524,  3526,  3532,
  3550,  3554,  3565,  3626,  3672,  3696,  3705,  3717,  3734,  3738,
  3772,  3781,  3835,  3851,  3854,  3855,  3856,  3857,  3858,  3859,
  3863,  3886,  3908,  3915,  3918,  3939,  3943,  3951,  3955,  3964,
  3971,  3974,  3976,  3981,  3997,  4014,  4029,  4033,  4038,  4047,
  4050,  4055,  4060,  4065,  4070,  4077,  4116,  4121,  4126,  4136,
  4148,  4152,  4157,  4168,  4177,  4184,  4205,  4212,  4218,  4224,
  4230,  4238,  4255,  4262,  4268,  4279,  4290,  4302,  4314,  4334,
  4351,  4372,  4406,  4419,  4433,  4446,  4459,  4466,  4468,  4475,
  4477,  4487,  4497,  4507,  4513,  4523,  4529,  4532,  4536,  4546,
  4560,  4572,  4576,  4582,  4586,  4590,  4595,  4604,  4617,  4621,
  4627,  4631,  4635,  4639,  4644,  4653,  4665,  4668,  4674,  4678,
  4682,  4686,  4695,  4710,  4713,  4719,  4723,  4727,  4732,  4742,
  4748,  4754,  4763,  4767,  4771,  4785,  4788,  4800,  4829,  4832,
  4835,  4843,  4859,  4867,  4870,  4891,  4894,  4905,  4908,  4916,
  4924,  4970,  4975,  4980,  4984,  4988,  4995,  4999,  5003,  5008,
  5014,  5020,  5033,  5044,  5047,  5055,  5083,  5094,  5094,  5100,
  5109,  5125,  5133,  5136,  5141,  5144,  5153,  5156,  5164,  5176,
  5187,  5192,  5197,  5215,  5224,  5228,  5233,  5241,  5247,  5251,
  5256,  5262,  5276,  5298,  5301,  5302,  5303,  5306,  5310,  5314,
  5322,  5329,  5336,  5360,  5367,  5379,  5392,  5412,  5438,  5471,
  5491,  5514,  5517,  5525,  5532,  5539,  5543,  5547,  5551,  5555,
  5565,  5570,  5575,  5595,  5602,  5611,  5620,  5629,  5636,  5644,
  5648,  5657,  5661,  5669,  5675,  5683,  5690,  5736,  5753,  5759,
  5763,  5766,  5772,  5778,  5789,  5791,  5792,  5793,  5794,  5795,
  5796,  5797,  5798,  5799,  5800,  5801,  5802,  5803,  5804,  5805,
  5806,  5807,  5808,  5809,  5810,  5812,  5814,  5815,  5816,  5817,
  5818,  5819,  5820,  5821,  5822,  5823,  5824,  5825,  5826,  5827,
  5828,  5829,  5830,  5831,  5832,  5833,  5834,  5835,  5836,  5837,
  5838,  5839,  5840,  5841,  5842,  5843,  5844,  5845,  5846,  5847,
  5848,  5849,  5850,  5851,  5852,  5855,  5858,  5859,  5860,  5861,
  5862,  5863,  5864,  5880,  5885,  5891,  5894,  5899,  5907,  5910,
  5913,  5923,  5931,  5942,  5957,  5979,  5994,  6033,  6038,  6053
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tInclude","tConstant","tList",
"tListAlt","tDefineConstant","tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10",
"tSqrt","tSin","tAsin","tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh",
"tTanh","tFabs","tFloor","tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace",
"tOrder","tCrossProduct","tMHTimeIntegration","tGroup","tDefineGroup","tAll",
"tInSupport","tDefineFunction","tConstraint","tRegion","tSubRegion","tRegionRef",
"tSubRegionRef","tFilter","tCoefficient","tValue","tTimeFunction","tBranch",
"tNode","tLoop","tNameOfResolution","tJacobian","tCase","tIntegration","tType",
"tSubType","tCriterion","tGeoElement","tNumberOfPoints","tMaxNumberOfPoints",
"tNumberOfDivisions","tMaxNumberOfDivisions","tStoppingCriterion","tFunctionSpace",
"tName","tBasisFunction","tNameOfCoef","tFunction","tdFunction","tSubFunction",
"tSupport","tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity","tEntityType",
"tEntitySubType","tNameOfConstraint","tFormulation","tQuantity","tNameOfSpace",
"tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham","tGlobalTerm",
"tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof","tJacNL","tNeverDt","tIn",
"tResolution","tDefineSystem","tNameOfFormulation","tNameOfMesh","tFrequency",
"tSolver","tOriginSystem","tDestinationSystem","tOperation","tOperationEnd",
"tSetTime","tDTime","tSetFrequency","tFourierTransform","tIf","tElse","tLanczos",
"tPerturbation","tUpdate","tUpdateConstraint","tBreak","tTimeLoopTheta","tTime0",
"tTimeMax","tTheta","tTimeLoopNewmark","tBeta","tGamma","tIterativeLoop","tNbrMaxIteration",
"tRelaxationFactor","tIterativeTimeReduction","tDivisionCoefficient","tChangeOfState",
"tChangeOfCoordinates","tSystemCommand","tPostProcessing","tNameOfSystem","tPostOperation",
"tNameOfPostProcessing","tUsingPost","tAppend","tPlot","tPrint","tPrintGroup",
"tWrite","tAdapt","tOnGlobal","tOnRegion","tOnElementsOf","tOnGrid","tOnSection",
"tOnPoint","tOnLine","tOnPlane","tOnBox","tWithArgument","tFile","tDepth","tDimension",
"tTimeStep","tHarmonicToTime","tFormat","tHeader","tFooter","tSkin","tSmoothing",
"tTarget","tSort","tIso","tNoNewLine","tChangeOfValues","tFlag","tHelp","tCpu",
"tCheck","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'",
"tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'",
"'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'","'['",
"']'","'.'","'#'","'$'","'{'","'}'","','","Stats","@1","ProblemDefinitions",
"@2","ProblemDefinition","Interactive","@3","Groups","@4","Group","@5","ReducedGroupRHS",
"@6","@7","GroupRHS","FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion",
"SuppListTypeForGroup","ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups",
"Comma","DefineDimension","MultipleIndex","Index","Functions","Function","DefineFunctions",
"Expression","@8","ListOfExpression","RecursiveListOfExpression","WholeQuantityExpression",
"@9","WholeQuantity","@10","@11","WholeQuantity_Single","@12","@13","@14","ArgumentsForFunction",
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
"SubPostQuantities","SubPostQuantity","SubPostQuantityTerm","@26","@27","PostOperations",
"BracedPostOperation","PostOperation","PostOperationTerm","SeparatePostOperation",
"@28","PostSubOperations","@29","PostSubOperation","@30","PostQuantitiesToPrint",
"Combination","PostQuantitySupport","PrintSubType","PrintOptions","PrintOption",
"ParsedStrings","Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr",
"ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   216,   215,   217,   218,   217,   219,   219,   219,   219,   219,
   219,   219,   219,   219,   219,   219,   219,   219,   219,   220,
   220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
   220,   220,   220,   220,   220,   220,   220,   220,   220,   221,
   220,   222,   223,   222,   224,   224,   225,   224,   224,   224,
   227,   228,   226,   226,   229,   229,   230,   230,   231,   231,
   232,   232,   232,   233,   234,   234,   235,   235,   235,   236,
   236,   236,   236,   236,   236,   237,   237,   237,   238,   238,
   239,   240,   240,   241,   242,   242,   243,   243,   243,   243,
   244,   244,   245,   245,   246,   245,   247,   247,   248,   248,
   250,   249,   251,   252,   253,   251,   251,   251,   251,   251,
   251,   251,   251,   251,   251,   251,   251,   251,   251,   251,
   251,   251,   251,   251,   251,   251,   254,   254,   254,   254,
   254,   254,   255,   254,   256,   254,   254,   254,   257,   254,
   254,   254,   254,   254,   254,   254,   254,   258,   258,   258,
   259,   259,   260,   260,   260,   261,   261,   262,   262,   263,
   263,   264,   264,   265,   265,   266,   266,   266,   267,   267,
   268,   268,   269,   269,   269,   270,   270,   271,   271,   272,
   272,   272,   273,   273,   274,   274,   275,   275,   275,   275,
   275,   275,   276,   276,   277,   277,   278,   278,   279,   279,
   279,   279,   279,   280,   280,   281,   281,   282,   282,   282,
   282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
   282,   282,   283,   283,   284,   284,   285,   285,   286,   286,
   286,   286,   286,   286,   286,   287,   287,   288,   288,   289,
   289,   289,   289,   289,   289,   289,   289,   290,   291,   292,
   290,   293,   293,   294,   294,   295,   295,   295,   296,   296,
   297,   297,   298,   298,   299,   299,   300,   300,   301,   301,
   302,   302,   302,   303,   303,   304,   304,   305,   305,   305,
   305,   305,   306,   306,   307,   307,   308,   308,   309,   309,
   309,   309,   309,   310,   310,   311,   311,   312,   312,   312,
   312,   313,   312,   312,   314,   312,   312,   312,   312,   312,
   315,   315,   316,   316,   317,   317,   317,   317,   318,   318,
   319,   319,   319,   320,   320,   321,   321,   321,   321,   322,
   322,   324,   325,   323,   323,   323,   323,   326,   326,   327,
   328,   329,   327,   330,   330,   330,   330,   330,   330,   330,
   331,   331,   332,   332,   333,   333,   334,   334,   335,   335,
   335,   336,   335,   337,   337,   338,   338,   339,   339,   339,
   339,   339,   339,   339,   339,   340,   340,   341,   341,   342,
   342,   343,   343,   344,   344,   345,   345,   345,   345,   345,
   345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
   345,   345,   345,   345,   345,   345,   346,   345,   347,   345,
   345,   345,   345,   348,   348,   349,   349,   350,   350,   350,
   351,   351,   352,   352,   352,   352,   352,   353,   353,   354,
   354,   354,   354,   354,   354,   355,   355,   356,   356,   356,
   356,   356,   357,   357,   358,   358,   358,   358,   358,   358,
   358,   358,   359,   359,   360,   360,   361,   361,   361,   361,
   361,   361,   362,   362,   363,   363,   364,   364,   365,   365,
   365,   365,   365,   366,   366,   367,   367,   368,   368,   369,
   369,   369,   370,   370,   372,   371,   371,   373,   371,   371,
   371,   374,   374,   375,   375,   376,   376,   377,   377,   377,
   377,   377,   379,   378,   380,   381,   380,   382,   382,   383,
   382,   384,   384,   385,   385,   385,   385,   386,   386,   387,
   387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
   388,   388,   389,   389,   389,   389,   389,   389,   389,   389,
   389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
   389,   389,   389,   389,   389,   390,   390,   391,   391,   391,
   392,   392,   392,   392,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   394,   394,   394,   394,   394,
   394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
   394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
   394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
   394,   394,   394,   394,   394,   395,   395,   395,   395,   395,
   395,   395,   395,   396,   396,   396,   396,   397,   397,   397,
   397,   398,   398,   398,   398,   398,   398,   399,   399,   399
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     0,     3,     4,     5,     0,     6,     5,     1,
     0,     0,     7,     2,     1,     2,     1,     1,     1,     1,
     0,     3,     4,     1,     1,     3,     0,     3,     4,     1,
     3,     5,     1,     4,     3,     0,     3,     6,     0,     1,
     4,     0,     2,     3,     0,     2,     5,     6,     7,     1,
     0,     3,     4,     4,     0,     2,     0,     3,     1,     3,
     0,     2,     1,     0,     0,     7,     3,     3,     6,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     2,     2,     2,     3,     1,     3,     2,
     1,     2,     0,     5,     0,    11,     4,     4,     0,     7,
     6,     2,     2,     2,     2,     3,     2,     3,     2,     3,
     1,     3,     0,     3,     6,     0,     4,     0,     2,     3,
     4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     4,     0,     4,     0,     2,     3,     3,     3,     3,
     3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
     3,     4,     5,     0,     4,     0,     2,     3,     3,     3,
     3,     3,     3,     7,     3,     3,     3,     3,     3,     7,
     7,     7,     0,     2,     3,     1,     0,     2,     3,     4,
     3,     4,     4,     4,     4,     0,     4,     0,     2,     3,
     3,     4,     4,     7,     3,     3,     3,     0,     0,     0,
    18,     0,     4,     0,     2,     3,     3,     3,     1,     3,
     0,     3,     1,     3,     0,     3,     0,     4,     0,     2,
     3,     3,     3,     0,     4,     0,     2,     3,     5,     3,
     3,     4,     0,     2,     3,     1,     0,     2,     3,     4,
     3,     4,     4,     0,     4,     0,     2,     3,     3,     3,
     3,     0,     6,     3,     0,     5,     3,     3,     3,     3,
     0,     3,     0,     2,     4,     4,     4,     4,     0,     2,
     3,     3,     3,     0,     2,     3,     3,     3,     3,     0,
     2,     0,     0,     9,     3,     3,     3,     0,     2,     3,
     0,     0,     9,     0,     1,     1,     1,     1,     1,     1,
     4,     3,     0,     2,     3,     1,     0,     2,     3,     4,
     4,     0,     5,     0,     4,     0,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     2,     3,     0,     3,     1,
     3,     0,     3,     0,     2,     3,     3,     4,     4,     4,
     4,     5,     5,     2,     7,    11,     7,     7,     9,     9,
    11,    17,    13,    15,    11,    13,     0,     7,     0,     7,
     7,     5,     5,     1,     1,     0,     2,     3,     3,     2,
     0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
     3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
     4,     4,     0,     4,     0,     2,     3,     3,     3,     3,
     3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
     4,     3,     4,     0,     4,     0,     2,     3,     4,     0,
     5,     5,     0,     2,     0,     6,     3,     0,     4,     3,
     3,     0,     2,     3,     1,     0,     2,     3,     3,     3,
     3,     4,     0,     8,     0,     0,     3,     7,     7,     0,
    10,     3,     6,     1,     1,     1,     1,     0,     3,     1,
     2,     2,    12,     2,    15,     4,    12,    17,    22,    12,
     0,     2,     3,     4,     4,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     5,     2,     3,     9,     3,     0,     2,     4,     4,     5,
     0,     3,     5,     5,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     3,     2,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
     4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
     6,     6,     6,     5,     2,     1,     1,     1,     1,     1,
     1,     1,     1,     0,     1,     1,     3,     1,     1,     3,
     3,     3,     5,     3,     4,     4,     6,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,   634,   649,   648,     0,    18,   561,
    42,   193,   156,   169,   223,    85,   283,   353,   463,     0,
   492,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    41,   627,   626,   633,     0,     0,
     0,   628,   629,   630,   631,   632,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   635,   586,     0,   636,     0,    79,    43,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    26,    23,    21,
    25,    24,    22,    39,    29,    31,    32,    33,    34,    30,
    35,    36,    37,    38,     0,     0,     0,     0,   559,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   633,   588,   589,     0,   638,     0,   639,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   625,   558,     0,     0,    80,     0,
     6,     0,   197,     8,   194,   196,   158,     9,   171,    10,
   227,    11,   224,   226,     0,     0,     7,    86,    90,   287,
    12,   284,   286,   357,    13,   354,   356,   467,    14,   464,
   466,   503,   496,    15,   493,   495,   518,     0,     0,    82,
    57,     0,    55,   510,     0,   644,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   587,
   637,     0,   642,     0,   603,   602,   600,   601,   596,   598,
   597,   599,   591,   590,   592,   593,   594,   595,     0,   560,
   562,     0,     0,    44,    50,     0,     0,     0,     0,     0,
    91,     0,     0,     0,     0,     0,     0,     0,   520,     0,
     0,     0,     0,     0,     0,     0,     0,   531,   531,     0,
    56,    70,    73,    67,    54,    65,     0,    51,   645,   646,
     0,   604,   605,   606,   607,   608,   609,   610,   611,   612,
   613,     0,   615,   616,   617,   618,   619,   620,     0,     0,
     0,   640,   641,     0,     0,     0,     0,   634,     0,     0,
     0,    76,     0,     0,     0,   195,   198,     0,     0,   157,
   159,     0,    95,     0,   170,   172,     0,     0,     0,     0,
     0,     0,   225,   228,     0,     0,    79,     0,     0,     0,
     0,   285,   288,     0,     0,   362,   355,   358,     0,     0,
     0,     0,   465,   468,   505,     0,     0,     0,     0,     0,
   494,   497,     0,   516,   517,   514,   515,   512,     0,   521,
   522,    95,   524,     0,     0,     0,     0,     0,     0,     0,
    83,     0,     0,    79,     0,     0,     0,     0,     0,     0,
     0,   643,   624,   650,   564,   563,   633,     0,     0,     0,
    47,     0,    79,     0,   204,     0,     0,   162,     0,   176,
     0,     0,     0,   101,     0,   274,     0,     0,   236,   252,
   267,    95,     0,     0,     0,     0,     0,   294,   313,     0,
   364,     0,     0,   474,    82,     0,   506,     0,   505,     0,
     0,     0,   519,   518,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   532,     0,   627,    71,    75,     0,    66,
     0,     0,    60,    52,    59,   647,   614,   621,   622,   623,
    45,     0,    84,     0,    58,     0,     0,     0,   204,     0,
   201,   199,     0,     0,     0,   160,     0,     0,     0,   174,
    96,     0,   173,     0,   231,   229,     0,     0,     0,     0,
     0,    95,    87,    92,   291,   289,     0,     0,     0,   359,
     0,     0,   384,   469,     0,     0,     0,   472,   504,     0,
   498,   506,   499,   501,   500,     0,     0,    95,     0,   526,
     0,     0,     0,   508,   634,   634,     0,     0,     0,     0,
     0,   634,     0,   556,   556,   556,   537,   538,     0,     0,
     0,   552,    97,   509,     0,    74,     0,    68,   531,    79,
    81,     0,    46,    49,    77,     0,   206,   202,   200,   164,
   161,   178,   175,     0,     0,   633,   565,   566,   567,   568,
   569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
   579,   580,   581,   582,   583,   584,     0,   139,     0,     0,
   135,   133,     0,     0,     0,     0,     0,     0,     0,     0,
   102,   103,   131,     0,   128,   276,   235,   230,   238,   232,
   254,   233,   269,   234,    88,     0,   290,   296,   292,     0,
     0,     0,     0,   293,   314,   360,   366,   361,     0,   470,
   476,   473,   471,   507,   502,   513,     0,     0,     0,     0,
     0,     0,   549,   553,    95,   546,     0,     0,   533,   536,
   544,   545,   539,   540,   543,   541,   542,   548,   547,     0,
   550,    95,   555,    72,    69,     0,     0,     0,    48,     0,
   203,     0,     0,     0,    93,    94,   130,     0,     0,     0,
     0,     0,     0,     0,   125,   124,   126,     0,   147,   145,
   142,   144,   143,     0,   104,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   132,   153,     0,     0,     0,     0,    89,
     0,   330,   330,   338,   319,     0,     0,    95,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   407,   409,   363,   385,     0,     0,    95,
     0,     0,     0,     0,     0,   534,   535,   557,     0,    99,
     0,     0,    53,    64,     0,     0,     0,     0,     0,     0,
     0,    95,    95,    95,    95,     0,     0,     0,    95,   205,
   207,     0,     0,   163,   165,     0,     0,     0,   177,   179,
     0,   101,     0,     0,     0,   101,     0,   127,     0,   352,
     0,   123,   122,   119,   120,   121,   115,   117,   116,   118,
   111,   112,   107,   110,   113,   108,   114,   146,   149,     0,
   151,     0,     0,   129,     0,     0,     0,     0,     0,   275,
   277,     0,     0,     0,     0,    97,     0,     0,   237,   239,
     0,     0,     0,   253,   255,     0,     0,     0,   268,   270,
     0,     0,     0,     0,     0,     0,     0,     0,   305,   295,
   297,   344,   344,   344,     0,     0,     0,     0,     0,   634,
     0,     0,     0,   365,   367,     0,     0,    95,     0,     0,
     0,    95,     0,     0,     0,     0,   394,     0,   421,     0,
   428,     0,   436,   443,     0,     0,     0,     0,     0,     0,
     0,   475,   477,     0,     0,     0,     0,     0,     0,    95,
   551,    98,    95,   511,    82,    62,    78,     0,     0,     0,
     0,    95,     0,    95,     0,     0,     0,     0,     0,     0,
    95,     0,     0,     0,   153,   183,     0,     0,   137,     0,
   138,     0,     0,     0,   101,   351,     0,   148,   150,     0,
     0,     0,     0,     0,     0,     0,    82,     0,     0,   248,
     0,     0,     0,     0,     0,   263,   265,     0,   259,   261,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    82,     0,     0,     0,   101,     0,     0,   345,   346,   347,
   348,   349,   350,     0,   315,   331,     0,   316,     0,   317,
   339,     0,     0,     0,   324,   318,   320,     0,     0,    82,
   378,     0,     0,     0,     0,   380,   382,     0,     0,   386,
     0,     0,   387,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    97,    97,   480,     0,     0,     0,     0,     0,     0,     0,
     0,   100,    63,   209,   210,   215,   216,     0,   219,     0,
   218,   212,   211,    79,   213,   208,     0,   217,   167,   166,
     0,     0,   180,   181,     0,     0,     0,   134,     0,   105,
   152,     0,   154,   278,     0,   280,   281,     0,   240,   241,
     0,     0,     0,    79,   245,   246,   247,   256,    79,   258,
    79,   257,   272,   271,   273,   309,   308,   301,   299,   300,
   298,   302,   304,   310,   307,     0,     0,     0,     0,   332,
     0,   341,     0,     0,     0,   369,   368,   376,    79,   370,
   371,   374,   375,    79,   372,   373,     0,     0,    95,     0,
     0,     0,     0,    95,     0,     0,     0,    95,     0,     0,
    95,   388,   422,     0,     0,    95,     0,     0,     0,     0,
   389,   429,     0,     0,     0,     0,    95,     0,   390,   437,
     0,     0,     0,     0,     0,     0,     0,     0,   391,   444,
    95,     0,     0,   415,   414,   416,   416,     0,   478,     0,
   634,     0,     0,     0,     0,    95,    95,    95,     0,    95,
   168,   185,   182,     0,   109,     0,   141,     0,     0,     0,
   282,   242,     0,   243,     0,   264,     0,   260,     0,   311,
     0,   336,   337,   335,   101,   340,   101,   321,   322,     0,
     0,     0,     0,   323,   325,   377,     0,   381,     0,   392,
   393,     0,     0,   384,     0,     0,     0,     0,     0,   384,
     0,     0,     0,     0,     0,   384,     0,     0,     0,     0,
     0,     0,     0,   384,     0,     0,     0,     0,     0,   384,
   384,     0,     0,   453,     0,     0,   413,   412,     0,     0,
     0,     0,   479,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   140,   101,   106,     0,   279,
     0,     0,   266,   262,     0,     0,   306,   333,   342,     0,
     0,     0,     0,   379,   383,     0,   634,     0,   634,     0,
     0,     0,    95,     0,   425,   423,   424,   426,    95,     0,
   432,   430,   431,   433,   434,    95,   439,     0,   438,   440,
   441,   447,   449,     0,     0,   445,   446,     0,   448,     0,
     0,   634,   417,     0,   483,   483,     0,   634,     0,     0,
     0,     0,   554,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   184,   186,     0,   155,     0,     0,     0,
   303,     0,     0,   326,   327,   328,   329,   397,     0,   395,
     0,     0,   398,     0,     0,   427,     0,   435,     0,   442,
   451,   452,   455,   450,   411,   408,     0,   634,   420,   410,
   344,   344,   530,     0,   523,   527,     0,     0,   222,   221,
   214,   220,     0,     0,     0,     0,     0,     0,   101,     0,
   244,   312,   101,     0,     0,     0,     0,     0,     0,    95,
     0,     0,     0,     0,   418,   419,     0,     0,     0,   488,
   482,     0,   484,   481,   634,     0,     0,   187,   188,   189,
   190,   191,   192,     0,     0,     0,     0,   400,   384,     0,
     0,   399,     0,     0,   384,     0,     0,     0,    95,     0,
     0,     0,   454,   456,     0,     0,     0,     0,   485,     0,
     0,     0,   136,     0,     0,     0,     0,     0,   634,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   490,
   491,   487,     0,   101,   525,     0,     0,   249,   334,   343,
   396,   401,     0,   384,     0,   405,   384,   457,   460,   461,
   458,   459,   462,   489,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   528,     0,     0,     0,   403,   384,   406,
   486,     0,     0,     0,     0,     0,   250,     0,   404,     0,
     0,     0,     0,     0,   402,   529,    82,     0,     0,   251,
     0,     0,     0
};

static const short yydefgoto[] = {  1621,
     1,     2,     3,    20,    21,    22,   107,   192,   284,   514,
   233,   426,   600,   234,   235,   504,   717,   816,   315,   424,
   316,   443,   190,   350,   311,   351,   112,   208,   377,   453,
   454,  1235,   811,   531,   532,   651,   851,  1258,   652,   733,
   732,   729,   764,   872,   874,   109,   287,   361,   525,   723,
   835,   110,   288,   366,   527,   724,   840,  1122,  1345,  1425,
   108,   195,   286,   357,   520,   722,   831,   111,   203,   289,
   374,   538,   767,   890,  1143,  1588,  1611,   539,   768,   895,
  1021,  1151,  1018,  1149,   540,   769,   900,   534,   766,   881,
   113,   212,   292,   383,   548,   771,   911,  1270,  1035,  1356,
   549,   675,   915,  1057,  1175,  1285,   912,  1046,  1275,  1432,
   914,  1051,  1277,  1433,  1047,   653,   114,   216,   293,   388,
   472,   552,   776,   925,  1062,  1179,  1068,  1184,   679,   797,
   948,   949,  1236,  1329,  1403,  1082,  1203,  1084,  1212,  1086,
  1220,  1087,  1230,  1398,  1494,  1534,   115,   220,   294,   394,
   556,   798,   953,  1238,  1461,  1503,  1564,  1538,   117,   225,
   296,   402,    23,   295,   477,   560,    65,   317,   228,   409,
   298,   308,   419,   494,   705,    24,   106,   654,   166,   102,
   103,   167,   168,    29
};

static const short yypact[] = {-32768,
-32768,   171,  2724,    -3,   536,    -2,     3,    17,    24,    44,
    76,   106,   116,   129,   182,    29,   508,   201,  2665,-32768,
-32768,   141,-32768,-32768,  1627,-32768,-32768,    53,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   152,
-32768,   365,-32768,   396,   445,   465,   492,   513,-32768,   523,
-32768,   529,   533,   540,   545,   555,   558,   566,   573,   584,
   599,   205,   274,   352,-32768,-32768,-32768,   411,   649,   453,
   471,-32768,-32768,-32768,-32768,-32768,   479,   484,   490,   564,
   602,   620,   625,   630,   633,   637,   643,   647,   658,   673,
   684,   692,   705,   707,   716,   721,  2623,  2623,  2623,  2549,
   192,-32768,   733,-32768,   536,     4,   330,     8,  -118,   145,
    22,    37,    26,    32,    34,   754,    39,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   775,   775,    87,   695,-32768,   932,
   936,  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,
  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,
  2623,-32768,  -100,  -100,  3582,   192,   161,-32768,  2623,  2623,
  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,  2623,
  2623,  2623,  2623,  2623,-32768,-32768,   732,   945,-32768,   948,
-32768,    97,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,    48,   747,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   748,  1129,  1129,   238,
-32768,    30,-32768,-32768,   750,-32768,   215,   751,   746,  3609,
  3636,  3663,  3690,  3717,  3744,  3771,  3798,  3825,  3852,  2723,
  3879,  3906,  3933,  3960,  3987,  4014,  2754,  2785,  2816,-32768,
-32768,  2549,  1172,  2692,  4299,  4314,  1376,  1376,   706,   706,
   706,   706,   278,   278,  -100,  -100,  -100,  -100,   536,-32768,
   778,    21,   755,-32768,-32768,   261,   253,   267,   283,    86,
-32768,    14,   258,   356,   752,   738,    87,   325,-32768,    87,
    87,     7,   753,   756,   758,   763,   764,-32768,-32768,   759,
-32768,   955,   765,-32768,-32768,-32768,   766,-32768,-32768,-32768,
   962,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2623,-32768,-32768,-32768,-32768,-32768,-32768,  2623,  2623,
  2623,   192,-32768,  2623,  2623,   770,  2586,  1387,  2036,   796,
   800,-32768,    47,   988,   990,-32768,-32768,   786,   995,-32768,
-32768,   789,    88,   997,-32768,-32768,   791,   999,  1002,   799,
   801,   806,-32768,-32768,   829,   811,   132,  1015,  1017,   812,
   813,-32768,-32768,  1018,   814,-32768,-32768,-32768,  1053,   850,
  1065,  1066,-32768,-32768,-32768,  1068,   864,  1072,   536,  1074,
-32768,-32768,   872,-32768,-32768,-32768,-32768,-32768,  1078,   921,
-32768,    88,-32768,   874,  2549,   875,   879,   881,   134,   136,
-32768,  2660,   769,   256,   982,    18,   887,  4041,  4068,  4095,
  4122,  4284,  4284,-32768,-32768,  4284,   249,  1089,  2623,  3312,
-32768,   160,   148,   886,-32768,  1092,    31,-32768,  1093,-32768,
   894,   897,  1098,-32768,  1100,-32768,  1103,    81,-32768,-32768,
-32768,    88,   933,  1116,  1119,  1120,    89,-32768,-32768,    91,
-32768,   916,    93,-32768,   918,  1124,   920,  1130,-32768,  1131,
  1133,  1136,-32768,   748,  1140,   934,  2549,   292,  2549,  2549,
  2549,  1142,  2668,-32768,  1143,  1144,  4284,-32768,  3342,-32768,
    56,    87,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  3372,-32768,   160,-32768,  1152,  1154,  1158,-32768,   250,
-32768,-32768,   958,  1162,   359,-32768,   363,  2623,  1165,-32768,
-32768,  1238,-32768,   375,-32768,-32768,  1166,   384,   387,   405,
  1169,    88,-32768,-32768,-32768,-32768,  1170,   451,   126,-32768,
  1171,   464,-32768,-32768,  1179,   468,  1180,-32768,-32768,   141,
-32768,   959,-32768,-32768,-32768,   980,   983,    88,   469,-32768,
   522,   525,   530,-32768,   616,   616,   985,  1193,    62,  2623,
  2623,   616,  2623,  1194,-32768,-32768,-32768,-32768,  2623,  1199,
  1664,-32768,   998,-32768,  2623,-32768,   167,-32768,-32768,   179,
-32768,  1204,-32768,-32768,  1000,   535,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  4149,  1005,   272,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1008,-32768,  1011,  1019,
-32768,-32768,  1201,  1238,  1238,  1238,  1238,  1222,    61,  1229,
  4364,  1027,  1029,  1029,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1231,-32768,-32768,-32768,  1028,
  1032,  1034,  1035,-32768,-32768,-32768,-32768,-32768,   299,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  2623,  1036,  1037,  1039,
  1080,  1082,-32768,-32768,    88,-32768,   536,   536,-32768,  4284,
  4284,-32768,  4284,-32768,  1242,  1242,  1242,  4284,-32768,  2549,
  4284,    88,-32768,  4284,-32768,   187,  1090,    64,-32768,  2623,
-32768,   698,    -6,    -4,-32768,-32768,-32768,  1094,  1106,  1094,
  1238,  1108,  1109,  1113,  1115,  1115,  1115,  4341,-32768,-32768,
-32768,-32768,-32768,    36,-32768,  1238,  1238,  1238,  1238,  1238,
  1238,  1238,  1238,  1238,  1238,  1238,  1238,  1238,  1238,  1238,
  1238,  1304,  1012,-32768,  1110,   760,   532,   260,   100,-32768,
  1687,-32768,-32768,-32768,-32768,   472,    74,    95,  1117,  1118,
  1122,  1123,  1126,  1128,  1132,  1313,   290,   307,   319,  1111,
  1134,  1139,  1141,-32768,-32768,-32768,-32768,    13,  2847,    88,
  2549,  2549,  2549,  2549,  1135,-32768,-32768,-32768,   548,-32768,
   552,  1320,-32768,-32768,  1326,    30,  3402,    87,    87,    87,
    87,   102,   103,    88,    88,  1125,  1329,  1331,   104,-32768,
-32768,   155,  1338,-32768,-32768,  1138,  1346,  1356,-32768,-32768,
  1159,-32768,  1167,  1622,  1349,-32768,  1174,-32768,  1153,-32768,
  1238,  4383,  4401,  2138,  2138,  2138,   505,   505,   505,   505,
   426,   426,  1115,  1115,  1115,  1115,  1115,-32768,-32768,  1177,
  4364,   203,  2512,-32768,  1368,   163,   163,  1369,  1373,-32768,
-32768,  1374,  1379,  1382,  1189,   998,    87,    87,-32768,-32768,
  1383,    49,    50,-32768,-32768,  1422,  1424,  1425,-32768,-32768,
  1426,  1427,   347,  1432,  1434,  1438,  1439,    87,-32768,-32768,
-32768,  1127,  2493,   569,   315,  1440,  1441,    71,   536,   616,
   536,    72,  1442,-32768,-32768,  1437,  1446,    88,  1445,  1448,
  1449,    88,  1450,  1451,  1452,  1453,-32768,  2623,-32768,  2623,
-32768,  2623,-32768,-32768,    87,   536,  1454,  1253,  1254,  1252,
  1460,-32768,-32768,  2623,  1259,   554,   556,   565,   606,    88,
-32768,-32768,    88,-32768,   918,-32768,-32768,  1472,  1477,  1479,
  1480,    88,  1482,    88,  1483,  1486,  1487,  1493,  1490,  1491,
    88,  1492,  1494,  1497,  1110,-32768,  1508,  1509,-32768,  1309,
-32768,  1238,  1314,  1322,-32768,-32768,   671,-32768,-32768,  1238,
  1335,   609,  1529,  1459,  1542,  1543,   918,  1545,    96,  1341,
  1549,  1548,  1551,  1552,  1553,-32768,-32768,  1554,-32768,-32768,
  1558,  1563,  1564,  1571,  1575,  1576,  1580,  1581,  1583,  1584,
   918,  1593,  1594,  1597,-32768,  1629,  1631,-32768,-32768,-32768,
-32768,-32768,-32768,    87,-32768,-32768,  1391,-32768,    87,-32768,
-32768,  1463,  1636,  1666,-32768,-32768,-32768,  1697,  1698,   918,
-32768,  1699,  1700,  1702,  1706,-32768,-32768,  1713,  1714,-32768,
  1348,  1514,-32768,  1510,  1511,  1519,  1516,  1517,  1520,  1523,
  2878,   474,  2909,   876,  2940,   331,  1026,  1524,  1531,  1532,
    73,    73,-32768,  1721,  3432,  1530,  1533,  1534,  1536,  1537,
  1541,-32768,-32768,-32768,-32768,-32768,-32768,  1561,-32768,  1562,
-32768,-32768,-32768,  1568,-32768,-32768,  1569,-32768,-32768,-32768,
  1737,   613,-32768,-32768,    87,  1321,  2623,-32768,  1538,-32768,
  4364,    87,-32768,-32768,  1746,-32768,-32768,  1749,-32768,-32768,
  1761,  1686,  1779,  1568,-32768,-32768,-32768,-32768,   617,-32768,
   621,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1582,  1781,  1782,  1784,-32768,
  1787,-32768,  1789,  1790,   226,-32768,-32768,-32768,   660,-32768,
-32768,-32768,-32768,   663,-32768,-32768,  1791,  1792,    88,  1795,
  1589,  2623,  1798,    88,    87,  2623,  1604,    88,  2623,  2623,
    88,-32768,-32768,  2623,  1605,    88,  2623,  2623,  2623,  2623,
-32768,-32768,  2623,  2623,  1613,  2623,    88,  2623,-32768,-32768,
  2623,  1822,  1616,  1618,  2623,  2623,  1619,  2623,-32768,-32768,
    88,  1826,  1827,-32768,-32768,-32768,-32768,    45,-32768,  1623,
   616,  2549,  1625,  2549,  2549,    88,    88,    88,  1835,    88,
-32768,-32768,-32768,  1632,-32768,  2971,-32768,  1238,  1633,  1836,
-32768,-32768,  1839,-32768,  1840,-32768,  1841,-32768,  1843,  1645,
  1852,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1094,
  1094,  1094,    87,-32768,-32768,-32768,  1855,-32768,  1858,-32768,
-32768,  1656,  1653,-32768,  3002,  1659,  1662,  1660,  3033,-32768,
  1870,   734,  1347,  1872,  3064,-32768,  1879,  1574,  1897,  1924,
  1952,  3095,  1973,-32768,  2000,  1886,  2021,  2069,  1888,-32768,
-32768,  2096,  2123,-32768,  2160,  1689,-32768,-32768,   207,   228,
  1691,  1695,-32768,  2623,  1684,   665,  2623,   674,   676,  1688,
  1703,  1704,  1705,  1707,   336,-32768,-32768,  4364,  1709,-32768,
  1901,  1716,-32768,-32768,  1905,  1906,-32768,-32768,-32768,  1923,
  1926,  1927,  1929,-32768,-32768,  1930,   616,   366,   616,  1934,
  1933,  1939,    88,   940,-32768,-32768,-32768,-32768,    88,   994,
-32768,-32768,-32768,-32768,-32768,    88,-32768,  1176,-32768,-32768,
-32768,-32768,-32768,  1350,  1591,-32768,-32768,   681,-32768,  1940,
  1941,  1590,-32768,  1942,-32768,-32768,  3462,   616,  1733,  3492,
  1738,  1741,-32768,  1948,  1959,  1960,  1961,  1965,  2623,  2623,
  2623,  2623,  2623,-32768,-32768,  1757,-32768,  1883,  1967,  1768,
-32768,  1767,  1769,-32768,-32768,-32768,-32768,-32768,  1776,  1863,
  1772,  1774,-32768,  1783,  1788,-32768,  1796,-32768,   240,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   536,   616,-32768,-32768,
   884,  1572,-32768,  1802,-32768,-32768,  1794,  2549,-32768,-32768,
-32768,-32768,  1988,  2187,  2208,  2229,  2256,  2283,-32768,  1998,
-32768,-32768,-32768,  1094,  1997,  1797,  2623,  2623,  2005,    88,
  2623,  1805,  2623,   890,-32768,-32768,  2014,  2015,  2016,-32768,
-32768,  1815,-32768,-32768,   616,  2623,   722,-32768,-32768,-32768,
-32768,-32768,-32768,  1816,  1814,  1819,  1821,-32768,-32768,  4176,
  3126,-32768,  1823,  3157,-32768,  4203,  2025,  2623,    88,  2027,
    87,  2028,-32768,-32768,  2029,  2030,  2031,    87,-32768,  1829,
  3188,  1830,-32768,  2037,  2038,  2039,  1730,  2040,   616,  1865,
  2623,  1764,  1866,  2041,  2310,  2042,  2072,  2073,  2084,-32768,
-32768,-32768,  2085,-32768,-32768,  2623,  1887,-32768,-32768,-32768,
-32768,-32768,  1820,-32768,  4230,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1890,  3522,  2623,  1990,  2623,  1800,
  1892,  1837,  2093,-32768,  3219,    87,  3250,-32768,-32768,-32768,
-32768,  2623,  2095,  2623,  1873,  3281,-32768,  4257,-32768,  2623,
  1999,  2098,  3552,  2108,-32768,-32768,   918,  2111,  1912,-32768,
  2119,  2126,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -232,-32768,-32768,  -286,    63,-32768,-32768,  1249,  -416,-32768,
  -458,-32768,  -368,  -441,  -470,-32768,-32768,-32768,-32768,  -365,
-32768,  -586,-32768,  -822,-32768,  -562,-32768,-32768,-32768,-32768,
-32768,-32768,  1475,-32768,  1146,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1614,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1359,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -884,  -588,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1213,-32768,
-32768,-32768,  1049,   898,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   740,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1668,-32768,  1595,-32768,  2017,-32768,
  1670,  1945,  -301,-32768,   357,  1043,-32768,-32768,   -25,  -483,
  -557,  -136,   -22,  -104
};


#define	YYLAST		4605


static const short yytable[] = {   101,
   187,   237,   104,   376,   557,   524,   713,   420,   465,   505,
   403,   230,     4,   410,   411,   413,   537,   693,   694,   990,
   312,     6,   313,   994,   702,   547,     4,   727,   551,  1052,
     4,   555,   312,    40,   313,     6,     4,   522,     4,     6,
   849,   205,   598,     4,   832,     6,   486,     6,   655,  1331,
     6,   444,     6,  1016,  1019,   501,   833,   231,   312,   836,
   313,   837,   838,   740,   503,   741,    26,    27,   814,   950,
    28,   163,   164,   165,   518,  1060,  1066,  1234,   926,   378,
  1368,   735,   736,   737,   738,   206,  1374,   536,   951,   379,
   230,   230,  1380,   197,   198,   546,   541,   550,   451,   554,
  1388,   282,  1140,   184,   380,   451,  1394,  1395,   381,   185,
     6,   815,   451,   451,   451,   438,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   257,   258,   259,   231,   231,   715,   841,
  1332,   843,   283,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   274,   275,   276,   277,   278,   230,
   655,   655,   655,   655,   515,   896,   452,   515,   844,   312,
    -2,   313,  1129,   452,   346,   897,   666,   898,   742,    25,
   452,   452,   452,   852,   853,   854,   855,   856,   857,   858,
   859,   860,   861,   862,   863,   864,   865,   866,   867,   169,
   871,   983,   688,   348,    30,   231,   834,    49,   839,   516,
   231,   188,  1166,   231,    31,   599,   232,   189,   412,   193,
   194,   670,   671,   672,   673,   952,   382,   743,    32,   314,
    25,   718,   349,   201,   202,    33,   342,   210,   211,   343,
    41,   314,   523,   214,   215,   218,   219,   655,   850,   207,
   223,   224,   597,   697,   290,    34,   698,  1333,   445,   105,
  1017,  1020,   655,   655,   655,   655,   655,   655,   655,   655,
   655,   655,   655,   655,   655,   655,   655,   655,   488,   655,
   927,   602,  1061,  1067,   712,  1280,  1281,    35,   997,    62,
    63,    64,   523,   375,   481,   232,   232,   716,   116,  1012,
   523,   928,   523,   777,   523,  1547,   428,   523,   972,   974,
   981,  1552,   899,   429,   430,   431,   358,    36,   432,   433,
  1282,   436,   101,   440,   353,   104,   354,    37,   359,   805,
   362,  1283,   367,   384,   363,   891,   355,   892,   674,   464,
    38,   492,   364,   495,   893,   189,   810,   493,   368,   493,
   569,  1027,   571,   572,   573,   517,   199,   200,   369,   370,
  1590,   189,  1064,  1592,   232,   385,   371,   655,   372,   232,
   777,   118,   386,   261,   262,   170,   171,   172,   173,   174,
  1053,   175,   176,   177,   178,  1605,   -61,   179,   180,   181,
   182,   183,   189,    39,   812,   184,   497,   499,  1214,   966,
   493,   185,   119,  1054,  1418,  1419,  1420,  1421,  1422,  1423,
   999,   135,   929,   512,  1401,   778,  1000,   779,   780,   781,
  1402,   782,   783,   784,   785,   786,   787,   319,   262,  1126,
   788,   389,  1028,   789,   955,  1404,   790,  1131,  1284,   791,
   792,  1402,  1029,   793,   -58,  1215,   390,  1492,   794,   310,
   795,   120,  1358,  1493,  1359,   -58,   973,   975,   976,   977,
   138,   607,   608,   982,   391,   360,  1216,  1217,   500,   189,
   387,   121,   894,   356,   699,   181,   182,   183,  -585,   365,
   136,   184,   778,   650,   779,   780,   781,   185,   782,   783,
   784,   785,   786,   787,  1103,   373,   938,   788,   122,   392,
   789,   939,   614,   790,   570,   262,   791,   792,   655,  1218,
   793,   796,    42,   940,    43,   794,   655,   795,   941,   123,
   404,   405,   406,   407,  1426,   942,  1055,  1056,    44,   124,
   943,   968,   969,   970,   971,   125,  1138,   916,   408,   126,
    26,    27,   191,  1219,    28,   984,   127,   917,  1424,   101,
   101,   128,   104,   104,   700,   701,   101,   703,   137,   104,
  1162,   129,  1072,   708,   130,   711,  1076,  1141,   393,   714,
   610,   611,   131,   809,   612,   613,  1502,  1502,  1440,   132,
   918,   919,   920,   921,   922,   923,   656,   657,  1197,  1178,
   133,  1198,   806,   807,  1101,   659,   660,  1102,   661,   662,
  1013,  1014,  1199,  1200,  1201,   134,  1108,   882,  1110,   883,
   884,   885,   886,   887,   888,  1117,   663,   664,    66,    67,
    68,  1034,   138,   757,   758,   759,   760,    70,    71,   761,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,   139,  1514,    45,  1088,   140,
  1516,   799,   668,   669,   956,   957,   958,   959,  1038,  1039,
  1040,  1041,  1042,  1043,  1049,   677,   678,   141,  1130,   681,
   682,   689,   262,  1335,   924,   142,  1202,    46,    47,    48,
   143,  1360,  1361,  1362,   817,  1348,   144,    66,    67,    68,
   755,   756,   757,   758,   759,   760,    70,    71,   761,    72,
    73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,   690,   262,  1002,   691,   262,   186,
  1376,  1585,   692,   262,   889,  1249,   607,   721,   818,   819,
   820,   821,   822,   823,   824,   825,   826,  1169,   222,   827,
   961,   262,  1171,   828,   962,   963,  1097,   262,  1098,   262,
   145,    66,    67,   162,   655,  1265,   829,  1099,   262,   227,
  1267,  1050,  1269,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,   146,  1439,
  1287,  1441,    97,   396,  1063,  1289,  1065,    98,  1100,   262,
    99,  1133,   262,  1292,  1252,  1253,   147,   100,  1297,  1266,
   189,   148,  1301,  1268,   189,  1304,   149,   875,  1254,   150,
  1307,  1089,   876,   151,  1459,  1259,   877,   878,   879,   152,
  1464,  1316,   397,   153,   745,   746,   747,   748,   749,   750,
   751,   752,   753,   754,   154,  1326,   755,   756,   757,   758,
   759,   760,  1286,   189,   761,  1288,   189,  1409,   262,   155,
  1340,  1341,  1342,   398,  1344,   399,  1411,   262,  1412,   262,
   156,    97,  1453,  1454,   101,  1517,    98,   104,   157,    99,
  1496,   179,   180,   181,   182,   183,   400,   236,  1298,   184,
   830,   158,  1081,   159,  1083,   185,  1085,   170,   171,   172,
   173,   174,   160,   175,   176,   177,   178,   161,  1095,   179,
   180,   181,   182,   183,  1542,   262,   238,   184,  1004,  1005,
   239,   706,   707,   185,   777,   279,  1497,  1540,  1498,  1499,
   401,   280,   281,   291,   297,  1527,   318,  1528,   320,   321,
   347,   352,   422,   395,   414,    97,   427,   415,  1529,   416,
    98,   421,   880,    99,   417,   418,   423,   434,   441,   425,
  1530,   498,   442,  1038,  1039,  1040,  1041,  1042,  1043,  1500,
  1205,  1573,   446,  1206,   447,  1531,  1363,   448,   777,   449,
   450,   455,   456,   457,  1207,  1208,   458,  1445,  1209,  1210,
   459,   462,   460,  1447,    66,    67,   616,   461,   463,   466,
  1449,   467,   470,   468,   469,   471,    72,    73,    74,    75,
    76,   617,   618,   619,   620,   621,   622,   623,   624,   625,
   626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
   636,   637,   638,   639,   640,   641,   778,   473,   779,   780,
   781,   474,   782,   783,   784,   785,   786,   787,  1532,   475,
   476,   788,   478,  1544,   789,   479,   480,   790,   482,   483,
   791,   792,   484,   485,   793,   487,   489,   502,  1211,   794,
   490,   795,   491,  1221,   506,   511,  1501,   519,   521,   526,
   528,  1256,  1533,   529,   530,  1336,   533,  1338,  1339,   535,
   778,   642,   779,   780,   781,   542,   782,   783,   784,   785,
   786,   787,   543,   544,  1523,   788,   545,   553,   789,   310,
   558,   790,   559,  1222,   791,   792,   561,   563,   793,   564,
  1223,  1224,   565,   794,   567,   795,  1618,   568,   574,   594,
   196,   595,  1446,   204,   209,   213,   217,   221,   603,   226,
   604,  1225,   605,  1556,  1226,  1227,  1295,   439,   609,   615,
  1299,   685,   658,  1302,  1303,   665,   667,   676,  1305,   344,
   777,  1308,  1309,  1310,  1311,   680,   683,  1312,  1313,  1036,
  1315,  1037,  1317,   686,   687,  1318,   695,   696,   704,  1322,
  1323,   643,  1325,   709,  1228,   734,  1448,   644,   645,   712,
   719,   720,   726,   646,   728,   101,   647,   730,   104,   869,
   870,   648,   649,   650,   739,   731,  1038,  1039,  1040,  1041,
  1042,  1043,  1044,   744,   285,   763,   762,   770,  1229,   772,
    66,    67,   616,   773,  1558,   774,   775,   808,   801,   800,
   802,  1563,    72,    73,    74,    75,    76,   617,   618,   619,
   620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
   630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
   640,   641,   299,   300,   301,   302,   303,   304,   305,   306,
   307,   803,   778,   804,   779,   780,   781,   813,   782,   783,
   784,   785,   786,   787,   847,   650,   868,   788,  1407,  1603,
   789,  1410,   842,   790,   845,   846,   791,   792,   761,   937,
   793,   873,   944,   930,   931,   794,   964,   795,   932,   933,
   965,  1507,   934,   979,   935,   980,   978,   642,   936,  1045,
   945,   101,   985,   101,   104,   946,   104,   947,   960,   986,
   987,   993,  1495,  1377,   777,   170,   171,   172,   173,   174,
   988,   175,   176,   177,   178,   996,   989,   179,   180,   181,
   182,   183,  1003,   814,   991,   184,   101,  1007,  1008,   104,
   995,   185,   101,  1009,   998,   104,  1010,  1015,  1450,    66,
    67,   437,    69,  1474,  1475,  1476,  1477,  1478,    70,    71,
  1011,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,  1022,   643,  1023,  1024,
  1025,  1026,   101,   644,   645,   104,  1030,   231,  1031,   646,
  1032,  1033,   647,  1070,  1058,  1059,  1069,   648,   649,   650,
  1071,  1073,  1074,  1075,  1077,  1078,  1079,  1080,  1090,  1091,
  1092,  1520,  1521,  1093,  1094,  1524,   778,  1526,   779,   780,
   781,  1096,   782,   783,   784,   785,   786,   787,  1104,   101,
  1541,   788,   104,  1105,   789,  1106,  1107,   790,  1109,  1111,
   791,   792,  1112,  1113,   793,  1114,  1115,  1116,  1118,   794,
  1119,   795,  1555,  1120,   745,   746,   747,   748,   749,   750,
   751,   752,   753,   754,  1123,  1124,   755,   756,   757,   758,
   759,   760,  1125,   101,   761,  1575,   104,  1127,  1255,  1128,
   170,   171,   172,   173,   174,  1134,   175,   176,   177,   178,
  1586,  1132,   179,   180,   181,   182,   183,  1135,  1136,  1137,
   184,  1139,  1142,  1144,  1145,  1187,   185,  1146,  1147,  1148,
  1150,  1595,  1451,  1597,  1152,   175,   176,   177,   178,  1153,
  1154,   179,   180,   181,   182,   183,  1606,  1155,  1608,   184,
  1382,  1156,  1157,    97,  1613,   185,  1158,  1159,    98,  1160,
  1161,    99,    66,    67,    68,   777,   232,  1170,   100,  1163,
  1164,    70,    71,  1165,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    66,
    67,    68,    69,  1167,  1497,  1168,  1498,  1499,    70,    71,
  1173,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,    66,    67,   162,  1172,
  1174,  1038,  1039,  1040,  1041,  1042,  1043,  1500,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,  1176,  1177,  1180,  1181,   778,  1182,   779,
   780,   781,  1183,   782,   783,   784,   785,   786,   787,  1185,
  1186,  1188,   788,  1189,  1190,   789,  1191,  1239,   790,  1192,
  1193,   791,   792,  1194,   777,   793,  1195,  1231,  1232,  1233,
   794,  1241,   795,  1251,  1242,  1257,  1243,  1244,  1245,   901,
  1260,   902,   903,  1457,  1246,  1261,  1458,   170,   171,   172,
   173,   174,   904,   175,   176,   177,   178,  1262,   777,   179,
   180,   181,   182,   183,  1247,  1248,  1263,   184,   905,   906,
   907,   189,  1250,   185,  1504,  1264,    97,  1272,  1273,  1271,
  1274,    98,   908,  1276,    99,  1278,  1279,  1290,  1291,  1293,
  1294,   100,  1296,  1452,   777,   745,   746,   747,   748,   749,
   750,   751,   752,   753,   754,  1300,  1306,   755,   756,   757,
   758,   759,   760,    97,  1314,   761,  1319,  1320,    98,  1321,
  1324,    99,  1327,  1328,  1334,   992,  1337,  1343,   100,  1346,
  1349,   777,  1350,  1351,  1352,  1353,   778,  1354,   779,   780,
   781,  1355,   782,   783,   784,   785,   786,   787,  1357,  1364,
    97,   788,  1365,  1366,   789,    98,  1367,   790,    99,  1371,
   791,   792,  1370,  1372,   793,   710,  1375,   777,  1378,   794,
   778,   795,   779,   780,   781,  1381,   782,   783,   784,   785,
   786,   787,  1390,   909,  1393,   788,  1400,  1408,   789,   910,
  1413,   790,  1405,  1383,   791,   792,  1406,  1428,   793,  1430,
  1414,  1415,  1431,   794,  1417,   795,   778,  1416,   779,   780,
   781,  1427,   782,   783,   784,   785,   786,   787,  1429,  1434,
  1384,   788,  1435,  1436,   789,  1437,  1438,   790,  1442,  1443,
   791,   792,  1571,  1444,   793,  1465,  1455,  1456,  1460,   794,
  1467,   795,  1468,   778,  1469,   779,   780,   781,  1385,   782,
   783,   784,   785,   786,   787,  1470,  1471,  1472,   788,  1473,
  1479,   789,  1480,  1481,   790,  1482,  1576,   791,   792,  1387,
  1483,   793,  1484,  1485,  1486,  1487,   794,  1488,   795,   778,
  1489,   779,   780,   781,  1508,   782,   783,   784,   785,   786,
   787,  1490,  1515,  1518,   788,  1506,  1389,   789,  1519,  1491,
   790,  1522,  1598,   791,   792,  1505,  1525,   793,  1535,  1536,
  1537,  1539,   794,  1543,   795,   523,  1545,  1391,  1546,  1554,
  1550,  1557,  1559,  1589,  1596,  1560,  1561,  1562,    66,    67,
   162,  1565,  1567,  1568,  1569,  1570,  1572,  1578,  1580,  1600,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,  1392,  1574,  1577,  1581,  1582,
   170,   171,   172,   173,   174,  1609,   175,   176,   177,   178,
  1583,  1584,   179,   180,   181,   182,   183,  1593,  1587,  1601,
   184,  1607,  1396,  1599,  1615,  1614,   185,   170,   171,   172,
   173,   174,  1617,   175,   176,   177,   178,  1619,  1622,   179,
   180,   181,   182,   183,  1620,  1623,  1006,   184,   765,  1397,
  1121,   913,   606,   185,  1330,   170,   171,   172,   173,   174,
  1237,   175,   176,   177,   178,  1462,   562,   179,   180,   181,
   182,   183,   229,   566,   684,   184,   170,   171,   172,   173,
   174,   185,   175,   176,   177,   178,  1399,     0,   179,   180,
   181,   182,   183,   309,     0,     0,   184,     0,     0,     0,
     0,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,  1509,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,   170,   171,   172,   173,   174,   185,
   175,   176,   177,   178,  1510,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,     0,    97,     0,     0,  1511,     0,    98,     0,     0,
    99,     0,     0,     0,     0,   439,     0,     0,     0,     0,
     0,     0,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,  1512,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,     0,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,  1513,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,  1579,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,   751,   752,   753,
   754,     0,   185,   755,   756,   757,   758,   759,   760,     0,
     0,   761,     0,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,     0,     0,   185,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,   170,   171,   172,   173,   174,   185,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,   170,   171,   172,   173,   174,   185,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,     0,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
     0,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,    66,    67,    68,     0,     0,   185,
     0,     0,     0,    70,    71,     0,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    66,    67,    68,     0,  1036,     0,  1037,     0,     0,
    70,    71,  1001,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    66,    67,
   162,   435,  1038,  1039,  1040,  1041,  1042,  1043,  1044,     0,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,    66,    67,   162,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
    75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,   496,    67,   162,     0,     0,    50,     0,     0,
     0,    51,     0,     0,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,   345,
     0,     0,     0,     0,     0,  1048,     0,     0,    97,    52,
     0,     0,     0,    98,    53,     0,    99,     0,     0,     0,
     0,     0,     0,     0,   575,     0,     0,    54,     4,    55,
     0,     0,     0,     5,     0,     0,     0,     6,     0,    56,
     0,     0,     0,    57,     0,    97,     0,     0,     0,     0,
    98,     0,     0,    99,    58,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
     0,    59,     0,     8,     0,     0,     0,     0,   576,     0,
     0,     0,    97,     0,     0,     0,     9,    98,    10,     0,
    99,     0,     0,     0,     0,     0,     0,     0,    11,     0,
     0,     0,    12,     0,     0,     0,     0,    60,   577,    61,
     0,     0,     0,    13,     0,     0,     0,     0,     0,    97,
   578,     0,     0,     0,    98,     0,     0,    99,     0,     0,
    14,   579,   580,   581,   582,   583,   584,   585,   586,   587,
   588,   589,   590,   591,   592,   593,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
     0,    98,     0,     0,    99,     0,    15,     0,    16,     0,
     0,     0,     0,     0,     0,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,    17,    18,    19,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
     0,     0,   185,     0,     0,     0,   332,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,     0,     0,   185,     0,     0,     0,   339,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,     0,     0,   185,     0,     0,     0,   340,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,     0,   341,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,     0,
   954,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,     0,     0,   185,     0,     0,
     0,  1196,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,     0,     0,   185,     0,
     0,     0,  1204,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,     0,     0,   185,
     0,     0,     0,  1213,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,     0,     0,     0,  1347,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,     0,  1369,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
     0,     0,   185,     0,     0,     0,  1373,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,     0,     0,   185,     0,     0,     0,  1379,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,     0,     0,   185,     0,     0,     0,  1386,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,     0,  1549,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,     0,
  1551,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,     0,     0,   185,     0,     0,
     0,  1566,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,     0,     0,   185,     0,
     0,     0,  1602,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,     0,     0,   185,
     0,     0,     0,  1604,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,     0,     0,     0,  1610,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,   513,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,   596,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,   601,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,   967,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,  1240,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,  1463,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,  1466,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,  1594,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,  1616,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,   260,     0,     0,
     0,   185,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,   322,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,   323,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
   324,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,   325,     0,   185,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,   326,     0,   185,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,   327,     0,   185,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,   328,     0,
   185,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,   329,     0,   185,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,   330,     0,   185,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,   331,
     0,   185,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,   333,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,   334,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
   335,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,   336,     0,   185,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,   337,     0,   185,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,   338,     0,   185,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,   507,     0,
   185,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,   508,     0,   185,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,   509,     0,   185,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,   510,
     0,   185,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,   725,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,  1548,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
  1553,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,  1591,     0,   185,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,  1612,     0,   185,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,   172,   173,   174,   184,   175,   176,
   177,   178,     0,   185,   179,   180,   181,   182,   183,     0,
   173,   174,   184,   175,   176,   177,   178,     0,   185,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,     0,     0,   185,   745,   746,   747,   748,   749,   750,
   751,   752,   753,   754,     0,     0,   755,   756,   757,   758,
   759,   760,     0,     0,   761,     0,   848,   745,   746,   747,
   748,   749,   750,   751,   752,   753,   754,     0,     0,   755,
   756,   757,   758,   759,   760,     0,     0,   761,   747,   748,
   749,   750,   751,   752,   753,   754,     0,     0,   755,   756,
   757,   758,   759,   760,     0,     0,   761,   748,   749,   750,
   751,   752,   753,   754,     0,     0,   755,   756,   757,   758,
   759,   760,     0,     0,   761
};

static const short yycheck[] = {    25,
   105,   138,    25,   290,   475,   447,   593,   309,   377,   426,
   297,     5,     5,   300,   301,   302,   458,   575,   576,   842,
     3,    14,     5,   846,   582,   467,     5,   616,   470,   914,
     5,   473,     3,     5,     5,    14,     5,     7,     5,    14,
     5,     5,   501,     5,    51,    14,   412,    14,   532,     5,
    14,     5,    14,     5,     5,   424,    63,    51,     3,    64,
     5,    66,    67,     3,    47,     5,     5,     6,     5,    57,
     9,    97,    98,    99,   443,     5,     5,     5,     5,    66,
  1294,   644,   645,   646,   647,    49,  1300,     7,    76,    76,
     5,     5,  1306,   212,   213,     7,   462,     7,    11,     7,
  1314,     5,     7,   204,    91,    11,  1320,  1321,    95,   210,
    14,    48,    11,    11,    11,   348,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,    51,    51,   597,   728,
    96,   730,    46,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,     5,
   644,   645,   646,   647,     5,    66,    79,     5,   731,     3,
     0,     5,   995,    79,   279,    76,   542,    78,   118,   183,
    79,    79,    79,   746,   747,   748,   749,   750,   751,   752,
   753,   754,   755,   756,   757,   758,   759,   760,   761,     8,
   763,    47,   568,   183,   207,    51,   213,     7,   213,   442,
    51,   208,  1035,    51,   212,   502,   210,   214,   212,   212,
   213,    96,    97,    98,    99,   213,   213,   167,   212,   212,
   183,   600,   212,   212,   213,   212,   262,   212,   213,   262,
   212,   212,   212,   212,   213,   212,   213,   731,   213,   213,
   212,   213,   197,   192,   207,   212,   195,   213,   212,   207,
   212,   212,   746,   747,   748,   749,   750,   751,   752,   753,
   754,   755,   756,   757,   758,   759,   760,   761,   415,   763,
   207,   514,   212,   212,   212,    60,    61,   212,   851,   149,
   150,   151,   212,   208,   399,   210,   210,   599,   147,   886,
   212,   207,   212,     5,   212,  1519,   332,   212,   207,   207,
   207,  1525,   213,   339,   340,   341,    64,   212,   344,   345,
    95,   347,   348,   349,    64,   348,    66,   212,    76,   695,
    64,   106,    50,    76,    68,    76,    76,    78,   213,   208,
   212,   208,    76,   208,    85,   214,   712,   214,    66,   214,
   487,     5,   489,   490,   491,   208,   212,   213,    76,    77,
  1574,   214,   920,  1577,   210,   108,    84,   851,    86,   210,
     5,     7,   115,   213,   214,   184,   185,   186,   187,   188,
    66,   190,   191,   192,   193,  1599,   208,   196,   197,   198,
   199,   200,   214,   212,   208,   204,   422,   423,    68,   816,
   214,   210,     7,    89,    69,    70,    71,    72,    73,    74,
   208,   207,   778,   439,   208,   117,   214,   119,   120,   121,
   214,   123,   124,   125,   126,   127,   128,   213,   214,   992,
   132,    76,    86,   135,   800,   208,   138,  1000,   213,   141,
   142,   214,    96,   145,   207,   115,    91,   208,   150,   212,
   152,     7,  1275,   214,  1277,   207,   822,   823,   824,   825,
   212,   212,   213,   829,   109,   213,   136,   137,   213,   214,
   213,     7,   213,   213,   579,   198,   199,   200,   207,   213,
   207,   204,   117,   212,   119,   120,   121,   210,   123,   124,
   125,   126,   127,   128,   965,   213,   207,   132,     7,   144,
   135,   212,   528,   138,   213,   214,   141,   142,   992,   179,
   145,   213,     5,   207,     7,   150,  1000,   152,   212,     7,
   196,   197,   198,   199,  1347,   207,   212,   213,    21,     7,
   212,   818,   819,   820,   821,     7,  1007,    66,   214,     7,
     5,     6,   213,   213,     9,   832,     7,    76,   213,   575,
   576,     7,   575,   576,   580,   581,   582,   583,   207,   582,
  1031,     7,   928,   589,     7,   591,   932,  1009,   213,   595,
   212,   213,     7,   710,   212,   213,  1461,  1462,   213,     7,
   109,   110,   111,   112,   113,   114,   212,   213,   115,  1060,
     7,   118,   697,   698,   960,   212,   213,   963,   212,   213,
   887,   888,   129,   130,   131,     7,   972,    76,   974,    78,
    79,    80,    81,    82,    83,   981,   212,   213,     3,     4,
     5,   908,   212,   198,   199,   200,   201,    12,    13,   204,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,     7,  1479,   150,   945,   207,
  1483,   687,   212,   213,   801,   802,   803,   804,   100,   101,
   102,   103,   104,   105,   106,   212,   213,   207,     8,   212,
   213,   213,   214,  1241,   213,   207,   213,   180,   181,   182,
   207,  1280,  1281,  1282,   720,  1258,   207,     3,     4,     5,
   196,   197,   198,   199,   200,   201,    12,    13,   204,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,   213,   214,   873,   213,   214,     7,
     7,  1564,   213,   214,   213,  1114,   212,   213,    51,    52,
    53,    54,    55,    56,    57,    58,    59,  1044,     5,    62,
   213,   214,  1049,    66,   213,   214,   213,   214,   213,   214,
   207,     3,     4,     5,  1258,  1144,    79,   213,   214,     5,
  1149,   213,  1151,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,   207,  1367,
  1179,  1369,   197,    76,   919,  1184,   921,   202,   213,   214,
   205,   213,   214,  1189,   212,   213,   207,   212,  1194,   213,
   214,   207,  1198,   213,   214,  1201,   207,    78,  1125,   207,
  1206,   946,    83,   207,  1402,  1132,    87,    88,    89,   207,
  1408,  1217,   115,   207,   184,   185,   186,   187,   188,   189,
   190,   191,   192,   193,   207,  1231,   196,   197,   198,   199,
   200,   201,   213,   214,   204,   213,   214,   213,   214,   207,
  1246,  1247,  1248,   146,  1250,   148,   213,   214,   213,   214,
   207,   197,   212,   213,   920,  1484,   202,   920,   207,   205,
  1458,   196,   197,   198,   199,   200,   169,   213,  1195,   204,
   213,   207,   938,   207,   940,   210,   942,   184,   185,   186,
   187,   188,   207,   190,   191,   192,   193,   207,   954,   196,
   197,   198,   199,   200,   213,   214,     5,   204,   876,   877,
     5,   585,   586,   210,     5,   214,    63,  1505,    65,    66,
   213,     7,     5,   207,   207,    66,   207,    68,   208,   214,
   183,   207,     8,   212,   212,   197,     5,   212,    79,   212,
   202,   213,   213,   205,   212,   212,   212,   208,   183,   214,
    91,   213,   183,   100,   101,   102,   103,   104,   105,   106,
   115,  1549,     5,   118,     5,   106,  1283,   212,     5,     5,
   212,     5,   212,     5,   129,   130,     5,  1373,   133,   134,
   212,   183,   212,  1379,     3,     4,     5,   212,   208,     5,
  1386,     5,     5,   212,   212,   212,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,   117,     5,   119,   120,
   121,   212,   123,   124,   125,   126,   127,   128,   179,     5,
     5,   132,     5,  1515,   135,   212,     5,   138,     5,   208,
   141,   142,     5,   163,   145,   212,   212,   106,   213,   150,
   212,   152,   212,    68,   208,     7,   213,   212,     7,     7,
   207,  1127,   213,   207,     7,  1242,     7,  1244,  1245,     7,
   117,   100,   119,   120,   121,   183,   123,   124,   125,   126,
   127,   128,     7,     5,  1490,   132,     7,   212,   135,   212,
     7,   138,   213,   108,   141,   142,     7,     7,   145,     7,
   115,   116,     7,   150,     5,   152,  1617,   214,     7,     7,
   108,     8,   213,   111,   112,   113,   114,   115,     7,   117,
     7,   136,     5,  1529,   139,   140,  1192,   210,     7,     5,
  1196,   213,     7,  1199,  1200,     7,     7,     7,  1204,     8,
     5,  1207,  1208,  1209,  1210,     7,     7,  1213,  1214,    63,
  1216,    65,  1218,   214,   212,  1221,   212,     5,     5,  1225,
  1226,   190,  1228,     5,   179,     5,   213,   196,   197,   212,
     7,   212,   208,   202,   207,  1241,   205,   207,  1241,   208,
   209,   210,   211,   212,     3,   207,   100,   101,   102,   103,
   104,   105,   106,     5,   192,   207,   210,     7,   213,   212,
     3,     4,     5,   212,  1531,   212,   212,     6,   212,   214,
   212,  1538,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,   154,   155,   156,   157,   158,   159,   160,   161,
   162,   212,   117,   212,   119,   120,   121,   208,   123,   124,
   125,   126,   127,   128,   192,   212,     3,   132,  1334,  1596,
   135,  1337,   207,   138,   207,   207,   141,   142,   204,     7,
   145,   212,   212,   207,   207,   150,     7,   152,   207,   207,
     5,  1468,   207,     5,   207,     5,   212,   100,   207,   213,
   207,  1367,     5,  1369,  1367,   207,  1369,   207,   214,   212,
     5,     3,  1457,     7,     5,   184,   185,   186,   187,   188,
     5,   190,   191,   192,   193,   213,   208,   196,   197,   198,
   199,   200,     5,     5,   208,   204,  1402,     5,     5,  1402,
   207,   210,  1408,     5,   208,  1408,     5,     5,   213,     3,
     4,     5,     6,  1419,  1420,  1421,  1422,  1423,    12,    13,
   212,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,     5,   190,     5,     5,
     5,     5,  1458,   196,   197,  1458,     5,    51,     5,   202,
     3,     3,   205,     7,     5,     5,     5,   210,   211,   212,
     5,     7,     5,     5,     5,     5,     5,     5,     5,   207,
   207,  1487,  1488,   212,     5,  1491,   117,  1493,   119,   120,
   121,   213,   123,   124,   125,   126,   127,   128,     7,  1505,
  1506,   132,  1505,     7,   135,     7,     7,   138,     7,     7,
   141,   142,     7,     7,   145,     3,     7,     7,     7,   150,
     7,   152,  1528,     7,   184,   185,   186,   187,   188,   189,
   190,   191,   192,   193,     7,     7,   196,   197,   198,   199,
   200,   201,   214,  1549,   204,  1551,  1549,   214,   208,   208,
   184,   185,   186,   187,   188,     7,   190,   191,   192,   193,
  1566,   207,   196,   197,   198,   199,   200,    89,     7,     7,
   204,     7,   212,     5,     7,   208,   210,     7,     7,     7,
     7,  1587,   213,  1589,     7,   190,   191,   192,   193,     7,
     7,   196,   197,   198,   199,   200,  1602,     7,  1604,   204,
     7,     7,     7,   197,  1610,   210,     7,     7,   202,     7,
     7,   205,     3,     4,     5,     5,   210,   207,   212,     7,
     7,    12,    13,     7,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,     3,
     4,     5,     6,     5,    63,     5,    65,    66,    12,    13,
     5,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,     3,     4,     5,   207,
     5,   100,   101,   102,   103,   104,   105,   106,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,     7,     7,     7,     7,   117,     7,   119,
   120,   121,     7,   123,   124,   125,   126,   127,   128,     7,
     7,   208,   132,   214,   214,   135,   208,     7,   138,   214,
   214,   141,   142,   214,     5,   145,   214,   214,   208,   208,
   150,   212,   152,     7,   212,   208,   213,   212,   212,    63,
     5,    65,    66,   164,   214,     7,   167,   184,   185,   186,
   187,   188,    76,   190,   191,   192,   193,     7,     5,   196,
   197,   198,   199,   200,   214,   214,    91,   204,    92,    93,
    94,   214,   214,   210,   213,     7,   197,     7,     7,   208,
     7,   202,   106,     7,   205,     7,     7,     7,     7,     5,
   212,   212,     5,   213,     5,   184,   185,   186,   187,   188,
   189,   190,   191,   192,   193,   212,   212,   196,   197,   198,
   199,   200,   201,   197,   212,   204,     5,   212,   202,   212,
   212,   205,     7,     7,   212,   214,   212,     3,   212,   208,
   208,     5,     7,     5,     5,     5,   117,     5,   119,   120,
   121,   207,   123,   124,   125,   126,   127,   128,     7,     5,
   197,   132,     5,   208,   135,   202,   214,   138,   205,   208,
   141,   142,   214,   214,   145,   212,     7,     5,     7,   150,
   117,   152,   119,   120,   121,     7,   123,   124,   125,   126,
   127,   128,     7,   207,     7,   132,   208,   214,   135,   213,
   213,   138,   212,     7,   141,   142,   212,     7,   145,     5,
   208,   208,     7,   150,   208,   152,   117,   213,   119,   120,
   121,   213,   123,   124,   125,   126,   127,   128,   213,     7,
     7,   132,     7,     7,   135,     7,     7,   138,     5,     7,
   141,   142,   213,     5,   145,   213,     7,     7,     7,   150,
   213,   152,   212,   117,     7,   119,   120,   121,     7,   123,
   124,   125,   126,   127,   128,     7,     7,     7,   132,     5,
   214,   135,    90,     7,   138,   208,   213,   141,   142,     7,
   214,   145,   214,   208,   122,   214,   150,   214,   152,   117,
   208,   119,   120,   121,     7,   123,   124,   125,   126,   127,
   128,   214,     5,     7,   132,   212,     7,   135,   212,   214,
   138,     7,   213,   141,   142,   214,   212,   145,     5,     5,
     5,   207,   150,   208,   152,   212,   208,     7,   208,     5,
   208,     5,     5,   214,    45,     7,     7,     7,     3,     4,
     5,   213,   213,     7,     7,     7,     7,     7,     7,   213,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,     7,   212,   212,     7,     7,
   184,   185,   186,   187,   188,   213,   190,   191,   192,   193,
     7,     7,   196,   197,   198,   199,   200,   208,   212,     7,
   204,     7,     7,   212,     7,   107,   210,   184,   185,   186,
   187,   188,     5,   190,   191,   192,   193,     7,     0,   196,
   197,   198,   199,   200,   213,     0,   878,   204,   654,     7,
   985,   773,   519,   210,  1237,   184,   185,   186,   187,   188,
  1092,   190,   191,   192,   193,  1406,   479,   196,   197,   198,
   199,   200,   136,   484,   560,   204,   184,   185,   186,   187,
   188,   210,   190,   191,   192,   193,     7,    -1,   196,   197,
   198,   199,   200,   229,    -1,    -1,   204,    -1,    -1,    -1,
    -1,    -1,   210,   184,   185,   186,   187,   188,    -1,   190,
   191,   192,   193,     7,    -1,   196,   197,   198,   199,   200,
    -1,    -1,    -1,   204,   184,   185,   186,   187,   188,   210,
   190,   191,   192,   193,     7,    -1,   196,   197,   198,   199,
   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,
   210,    -1,   197,    -1,    -1,     7,    -1,   202,    -1,    -1,
   205,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,
    -1,    -1,   184,   185,   186,   187,   188,    -1,   190,   191,
   192,   193,     7,    -1,   196,   197,   198,   199,   200,    -1,
    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,   184,
   185,   186,   187,   188,    -1,   190,   191,   192,   193,     7,
    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,
    -1,    -1,    -1,    -1,    -1,   210,   184,   185,   186,   187,
   188,    -1,   190,   191,   192,   193,     7,    -1,   196,   197,
   198,   199,   200,    -1,    -1,    -1,   204,   190,   191,   192,
   193,    -1,   210,   196,   197,   198,   199,   200,   201,    -1,
    -1,   204,    -1,   184,   185,   186,   187,   188,    -1,   190,
   191,   192,   193,    -1,    -1,   196,   197,   198,   199,   200,
    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,
   184,   185,   186,   187,   188,    -1,   190,   191,   192,   193,
    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,
   204,   184,   185,   186,   187,   188,   210,   190,   191,   192,
   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,
    -1,   204,   184,   185,   186,   187,   188,   210,   190,   191,
   192,   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,
    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,   184,
   185,   186,   187,   188,    -1,   190,   191,   192,   193,    -1,
    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,
    -1,    -1,    -1,    -1,    -1,   210,   184,   185,   186,   187,
   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,
   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,
    -1,    -1,   210,   184,   185,   186,   187,   188,    -1,   190,
   191,   192,   193,    -1,    -1,   196,   197,   198,   199,   200,
    -1,    -1,    -1,   204,     3,     4,     5,    -1,    -1,   210,
    -1,    -1,    -1,    12,    13,    -1,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,     3,     4,     5,    -1,    63,    -1,    65,    -1,    -1,
    12,    13,    51,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,     3,     4,
     5,     6,   100,   101,   102,   103,   104,   105,   106,    -1,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,     3,     4,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,     3,     4,     5,    -1,    -1,     3,    -1,    -1,
    -1,     7,    -1,    -1,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,     8,
    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,   197,    45,
    -1,    -1,    -1,   202,    50,    -1,   205,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    57,    -1,    -1,    63,     5,    65,
    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    75,
    -1,    -1,    -1,    79,    -1,   197,    -1,    -1,    -1,    -1,
   202,    -1,    -1,   205,    90,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
    -1,   107,    -1,    50,    -1,    -1,    -1,    -1,   111,    -1,
    -1,    -1,   197,    -1,    -1,    -1,    63,   202,    65,    -1,
   205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
    -1,    -1,    79,    -1,    -1,    -1,    -1,   143,   141,   145,
    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,   197,
   153,    -1,    -1,    -1,   202,    -1,    -1,   205,    -1,    -1,
   107,   164,   165,   166,   167,   168,   169,   170,   171,   172,
   173,   174,   175,   176,   177,   178,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
    -1,   202,    -1,    -1,   205,    -1,   143,    -1,   145,    -1,
    -1,    -1,    -1,    -1,    -1,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,   180,   181,   182,   184,   185,   186,   187,
   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,
   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,
    -1,    -1,   210,    -1,    -1,    -1,   214,   184,   185,   186,
   187,   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,
   197,   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,
    -1,    -1,    -1,   210,    -1,    -1,    -1,   214,   184,   185,
   186,   187,   188,    -1,   190,   191,   192,   193,    -1,    -1,
   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,    -1,
    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,   214,   184,
   185,   186,   187,   188,    -1,   190,   191,   192,   193,    -1,
    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,
    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,   214,
   184,   185,   186,   187,   188,    -1,   190,   191,   192,   193,
    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,
   204,    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,
   214,   184,   185,   186,   187,   188,    -1,   190,   191,   192,
   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,
    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,
    -1,   214,   184,   185,   186,   187,   188,    -1,   190,   191,
   192,   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,
    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,    -1,
    -1,    -1,   214,   184,   185,   186,   187,   188,    -1,   190,
   191,   192,   193,    -1,    -1,   196,   197,   198,   199,   200,
    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,
    -1,    -1,    -1,   214,   184,   185,   186,   187,   188,    -1,
   190,   191,   192,   193,    -1,    -1,   196,   197,   198,   199,
   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,
   210,    -1,    -1,    -1,   214,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,    -1,   214,   184,   185,   186,   187,
   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,
   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,
    -1,    -1,   210,    -1,    -1,    -1,   214,   184,   185,   186,
   187,   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,
   197,   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,
    -1,    -1,    -1,   210,    -1,    -1,    -1,   214,   184,   185,
   186,   187,   188,    -1,   190,   191,   192,   193,    -1,    -1,
   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,    -1,
    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,   214,   184,
   185,   186,   187,   188,    -1,   190,   191,   192,   193,    -1,
    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,
    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,   214,
   184,   185,   186,   187,   188,    -1,   190,   191,   192,   193,
    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,
   204,    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,    -1,
   214,   184,   185,   186,   187,   188,    -1,   190,   191,   192,
   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,
    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,
    -1,   214,   184,   185,   186,   187,   188,    -1,   190,   191,
   192,   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,
    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,    -1,
    -1,    -1,   214,   184,   185,   186,   187,   188,    -1,   190,
   191,   192,   193,    -1,    -1,   196,   197,   198,   199,   200,
    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,   210,
    -1,    -1,    -1,   214,   184,   185,   186,   187,   188,    -1,
   190,   191,   192,   193,    -1,    -1,   196,   197,   198,   199,
   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,
   210,    -1,    -1,    -1,   214,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,   213,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,   213,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,   213,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,   213,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,   213,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,   213,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,   213,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,   213,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,
    -1,   210,    -1,    -1,   213,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,   206,    -1,    -1,
    -1,   210,   184,   185,   186,   187,   188,    -1,   190,   191,
   192,   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,
    -1,    -1,   204,    -1,    -1,    -1,   208,    -1,   210,   184,
   185,   186,   187,   188,    -1,   190,   191,   192,   193,    -1,
    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,
    -1,    -1,    -1,   208,    -1,   210,   184,   185,   186,   187,
   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,
   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,
   208,    -1,   210,   184,   185,   186,   187,   188,    -1,   190,
   191,   192,   193,    -1,    -1,   196,   197,   198,   199,   200,
    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,    -1,   210,
   184,   185,   186,   187,   188,    -1,   190,   191,   192,   193,
    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,
   204,    -1,    -1,    -1,   208,    -1,   210,   184,   185,   186,
   187,   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,
   197,   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,
    -1,   208,    -1,   210,   184,   185,   186,   187,   188,    -1,
   190,   191,   192,   193,    -1,    -1,   196,   197,   198,   199,
   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,    -1,
   210,   184,   185,   186,   187,   188,    -1,   190,   191,   192,
   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,
    -1,   204,    -1,    -1,    -1,   208,    -1,   210,   184,   185,
   186,   187,   188,    -1,   190,   191,   192,   193,    -1,    -1,
   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,    -1,
    -1,    -1,   208,    -1,   210,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,
    -1,   210,   184,   185,   186,   187,   188,    -1,   190,   191,
   192,   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,
    -1,    -1,   204,    -1,    -1,    -1,   208,    -1,   210,   184,
   185,   186,   187,   188,    -1,   190,   191,   192,   193,    -1,
    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,
    -1,    -1,    -1,   208,    -1,   210,   184,   185,   186,   187,
   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,
   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,
   208,    -1,   210,   184,   185,   186,   187,   188,    -1,   190,
   191,   192,   193,    -1,    -1,   196,   197,   198,   199,   200,
    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,    -1,   210,
   184,   185,   186,   187,   188,    -1,   190,   191,   192,   193,
    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,
   204,    -1,    -1,    -1,   208,    -1,   210,   184,   185,   186,
   187,   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,
   197,   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,
    -1,   208,    -1,   210,   184,   185,   186,   187,   188,    -1,
   190,   191,   192,   193,    -1,    -1,   196,   197,   198,   199,
   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,    -1,
   210,   184,   185,   186,   187,   188,    -1,   190,   191,   192,
   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,
    -1,   204,    -1,    -1,    -1,   208,    -1,   210,   184,   185,
   186,   187,   188,    -1,   190,   191,   192,   193,    -1,    -1,
   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,    -1,
    -1,    -1,   208,    -1,   210,   184,   185,   186,   187,   188,
    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,   198,
   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,
    -1,   210,   184,   185,   186,   187,   188,    -1,   190,   191,
   192,   193,    -1,    -1,   196,   197,   198,   199,   200,    -1,
    -1,    -1,   204,    -1,    -1,    -1,   208,    -1,   210,   184,
   185,   186,   187,   188,    -1,   190,   191,   192,   193,    -1,
    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,   204,
    -1,    -1,    -1,   208,    -1,   210,   184,   185,   186,   187,
   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,   197,
   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,    -1,
   208,    -1,   210,   184,   185,   186,   187,   188,    -1,   190,
   191,   192,   193,    -1,    -1,   196,   197,   198,   199,   200,
    -1,    -1,    -1,   204,    -1,    -1,    -1,   208,    -1,   210,
   184,   185,   186,   187,   188,    -1,   190,   191,   192,   193,
    -1,    -1,   196,   197,   198,   199,   200,    -1,    -1,    -1,
   204,    -1,    -1,    -1,   208,    -1,   210,   184,   185,   186,
   187,   188,    -1,   190,   191,   192,   193,    -1,    -1,   196,
   197,   198,   199,   200,   186,   187,   188,   204,   190,   191,
   192,   193,    -1,   210,   196,   197,   198,   199,   200,    -1,
   187,   188,   204,   190,   191,   192,   193,    -1,   210,   196,
   197,   198,   199,   200,    -1,    -1,    -1,   204,    -1,    -1,
    -1,    -1,    -1,   210,   184,   185,   186,   187,   188,   189,
   190,   191,   192,   193,    -1,    -1,   196,   197,   198,   199,
   200,   201,    -1,    -1,   204,    -1,   206,   184,   185,   186,
   187,   188,   189,   190,   191,   192,   193,    -1,    -1,   196,
   197,   198,   199,   200,   201,    -1,    -1,   204,   186,   187,
   188,   189,   190,   191,   192,   193,    -1,    -1,   196,   197,
   198,   199,   200,   201,    -1,    -1,   204,   187,   188,   189,
   190,   191,   192,   193,    -1,    -1,   196,   197,   198,   199,
   200,   201,    -1,    -1,   204
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
#line 320 "GetDP.y"
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
#line 354 "GetDP.y"
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
#line 395 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 418 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 433 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 435 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 437 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 439 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 441 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 443 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 445 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 447 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 449 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 451 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 453 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 455 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 457 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 459 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 461 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 463 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 465 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 467 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 469 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 471 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 473 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 481 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 498 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 505 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 508 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 511 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 513 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 524 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 52:
#line 529 "GetDP.y"
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
case 53:
#line 541 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 54:
#line 550 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 55:
#line 561 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 56:
#line 566 "GetDP.y"
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
case 57:
#line 603 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 58:
#line 606 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 59:
#line 618 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 60:
#line 620 "GetDP.y"
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
case 61:
#line 636 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 62:
#line 639 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 63:
#line 642 "GetDP.y"
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
case 64:
#line 693 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 706 "GetDP.y"
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
case 66:
#line 730 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 67:
#line 737 "GetDP.y"
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
case 68:
#line 750 "GetDP.y"
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
case 69:
#line 768 "GetDP.y"
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
case 70:
#line 791 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 71:
#line 795 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 72:
#line 804 "GetDP.y"
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
case 73:
#line 818 "GetDP.y"
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
case 74:
#line 852 "GetDP.y"
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
case 75:
#line 865 "GetDP.y"
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
case 77:
#line 889 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 78:
#line 899 "GetDP.y"
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
case 81:
#line 921 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 82:
#line 926 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 83:
#line 927 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 84:
#line 932 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 951 "GetDP.y"
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
case 89:
#line 971 "GetDP.y"
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
case 92:
#line 1022 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 93:
#line 1042 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 94:
#line 1048 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 95:
#line 1054 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 96:
#line 1057 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 97:
#line 1064 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 99:
#line 1075 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 100:
#line 1078 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 101:
#line 1084 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 102:
#line 1088 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 104:
#line 1100 "GetDP.y"
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
case 105:
#line 1113 "GetDP.y"
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
case 106:
#line 1127 "GetDP.y"
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
case 107:
#line 1142 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 108:
#line 1148 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 109:
#line 1154 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 110:
#line 1160 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 111:
#line 1166 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 112:
#line 1172 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 113:
#line 1178 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 114:
#line 1184 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1190 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1196 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1202 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1208 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1214 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1220 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1226 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1232 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1238 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1245 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 126:
#line 1253 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 128:
#line 1266 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 129:
#line 1272 "GetDP.y"
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
case 130:
#line 1346 "GetDP.y"
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
case 131:
#line 1380 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 132:
#line 1389 "GetDP.y"
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
case 133:
#line 1401 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 134:
#line 1403 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 135:
#line 1414 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 136:
#line 1416 "GetDP.y"
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
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 137:
#line 1432 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 138:
#line 1438 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1444 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 140:
#line 1446 "GetDP.y"
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
case 141:
#line 1475 "GetDP.y"
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
case 142:
#line 1499 "GetDP.y"
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
case 143:
#line 1512 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 144:
#line 1518 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 145:
#line 1525 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 146:
#line 1531 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1538 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1549 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 149:
#line 1550 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 150:
#line 1551 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 151:
#line 1556 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 152:
#line 1557 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 153:
#line 1563 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 154:
#line 1566 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 155:
#line 1569 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 156:
#line 1585 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 157:
#line 1590 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 158:
#line 1597 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 160:
#line 1606 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 161:
#line 1611 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 162:
#line 1618 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 163:
#line 1621 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 164:
#line 1628 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 166:
#line 1638 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 167:
#line 1641 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 168:
#line 1644 "GetDP.y"
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
case 169:
#line 1682 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 170:
#line 1688 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 171:
#line 1695 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 173:
#line 1708 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 174:
#line 1715 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 175:
#line 1718 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 176:
#line 1725 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 177:
#line 1728 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 178:
#line 1735 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 180:
#line 1747 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 181:
#line 1757 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 182:
#line 1767 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 183:
#line 1774 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 184:
#line 1777 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 185:
#line 1784 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 187:
#line 1800 "GetDP.y"
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
case 188:
#line 1854 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 189:
#line 1857 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 190:
#line 1860 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 191:
#line 1863 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 192:
#line 1866 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 193:
#line 1877 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 195:
#line 1887 "GetDP.y"
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
case 197:
#line 1912 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 199:
#line 1926 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 200:
#line 1932 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 201:
#line 1939 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 202:
#line 1948 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 203:
#line 1951 "GetDP.y"
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
case 204:
#line 1973 "GetDP.y"
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
case 205:
#line 1988 "GetDP.y"
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
case 206:
#line 2012 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 208:
#line 2026 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 209:
#line 2036 "GetDP.y"
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
case 210:
#line 2060 "GetDP.y"
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
case 211:
#line 2085 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 212:
#line 2090 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 213:
#line 2098 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 214:
#line 2106 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 215:
#line 2116 "GetDP.y"
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
case 216:
#line 2133 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 217:
#line 2141 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 218:
#line 2148 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 219:
#line 2155 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 220:
#line 2164 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 221:
#line 2173 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 222:
#line 2182 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 223:
#line 2203 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 225:
#line 2214 "GetDP.y"
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
case 227:
#line 2241 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 229:
#line 2254 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 230:
#line 2260 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 231:
#line 2267 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 232:
#line 2276 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 233:
#line 2279 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 234:
#line 2282 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 235:
#line 2285 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 236:
#line 2292 "GetDP.y"
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
case 237:
#line 2308 "GetDP.y"
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
case 238:
#line 2357 "GetDP.y"
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
case 240:
#line 2377 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 241:
#line 2380 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 242:
#line 2385 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 243:
#line 2390 "GetDP.y"
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
case 244:
#line 2404 "GetDP.y"
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
case 245:
#line 2424 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 246:
#line 2429 "GetDP.y"
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
case 247:
#line 2453 "GetDP.y"
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
case 249:
#line 2513 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 250:
#line 2516 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 251:
#line 2525 "GetDP.y"
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
case 252:
#line 2591 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 253:
#line 2595 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 254:
#line 2602 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 256:
#line 2611 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 257:
#line 2616 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 258:
#line 2619 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 259:
#line 2626 "GetDP.y"
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
case 260:
#line 2642 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 261:
#line 2648 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 262:
#line 2651 "GetDP.y"
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
case 263:
#line 2670 "GetDP.y"
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
case 264:
#line 2682 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2688 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 266:
#line 2691 "GetDP.y"
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
case 267:
#line 2706 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 268:
#line 2710 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 269:
#line 2719 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 271:
#line 2730 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 272:
#line 2735 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 273:
#line 2745 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 274:
#line 2758 "GetDP.y"
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
case 275:
#line 2773 "GetDP.y"
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
case 276:
#line 2847 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 278:
#line 2863 "GetDP.y"
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
case 279:
#line 2881 "GetDP.y"
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
case 280:
#line 2895 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 281:
#line 2898 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 282:
#line 2901 "GetDP.y"
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
case 283:
#line 2947 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 285:
#line 2957 "GetDP.y"
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
case 287:
#line 2983 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 289:
#line 2995 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 290:
#line 3001 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 291:
#line 3008 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 293:
#line 3020 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 294:
#line 3026 "GetDP.y"
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
case 295:
#line 3040 "GetDP.y"
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
case 296:
#line 3058 "GetDP.y"
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
case 298:
#line 3079 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 299:
#line 3082 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 300:
#line 3086 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 301:
#line 3089 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 302:
#line 3099 "GetDP.y"
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
case 303:
#line 3138 "GetDP.y"
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
case 304:
#line 3162 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 305:
#line 3167 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 306:
#line 3173 "GetDP.y"
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
case 307:
#line 3334 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 308:
#line 3339 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3348 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 310:
#line 3357 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 312:
#line 3365 "GetDP.y"
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
case 313:
#line 3405 "GetDP.y"
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
case 314:
#line 3420 "GetDP.y"
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
case 315:
#line 3448 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 316:
#line 3451 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 317:
#line 3454 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 318:
#line 3457 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 319:
#line 3464 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 321:
#line 3475 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 322:
#line 3485 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 323:
#line 3495 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 324:
#line 3509 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 326:
#line 3521 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 327:
#line 3523 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 328:
#line 3525 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 329:
#line 3527 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 330:
#line 3535 "GetDP.y"
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
case 332:
#line 3557 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 333:
#line 3565 "GetDP.y"
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
case 334:
#line 3627 "GetDP.y"
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
case 335:
#line 3673 "GetDP.y"
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
case 336:
#line 3697 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 337:
#line 3706 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 338:
#line 3720 "GetDP.y"
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
case 340:
#line 3749 "GetDP.y"
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
case 341:
#line 3773 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 342:
#line 3781 "GetDP.y"
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
case 343:
#line 3836 "GetDP.y"
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
case 344:
#line 3853 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 345:
#line 3854 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 346:
#line 3855 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 347:
#line 3856 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 348:
#line 3857 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 349:
#line 3858 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 350:
#line 3859 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 351:
#line 3866 "GetDP.y"
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
case 352:
#line 3887 "GetDP.y"
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
case 353:
#line 3911 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 355:
#line 3921 "GetDP.y"
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
case 357:
#line 3946 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 359:
#line 3958 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 360:
#line 3965 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 361:
#line 3972 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 362:
#line 3975 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 363:
#line 3977 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 364:
#line 3983 "GetDP.y"
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
case 365:
#line 3998 "GetDP.y"
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
case 366:
#line 4017 "GetDP.y"
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
case 368:
#line 4036 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 369:
#line 4039 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 370:
#line 4048 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 371:
#line 4051 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 372:
#line 4056 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 373:
#line 4061 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 374:
#line 4066 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 375:
#line 4071 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 376:
#line 4080 "GetDP.y"
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
case 377:
#line 4117 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 378:
#line 4124 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 379:
#line 4127 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 380:
#line 4139 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 381:
#line 4149 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 382:
#line 4155 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 383:
#line 4158 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 384:
#line 4170 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 385:
#line 4178 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 386:
#line 4189 "GetDP.y"
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
    ;
    break;}
case 387:
#line 4206 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 388:
#line 4213 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 389:
#line 4219 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 390:
#line 4225 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 391:
#line 4231 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 392:
#line 4239 "GetDP.y"
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
    ;
    break;}
case 393:
#line 4256 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 394:
#line 4263 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 395:
#line 4269 "GetDP.y"
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
case 396:
#line 4280 "GetDP.y"
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
case 397:
#line 4291 "GetDP.y"
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
case 398:
#line 4303 "GetDP.y"
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
case 399:
#line 4315 "GetDP.y"
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
case 400:
#line 4335 "GetDP.y"
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
case 401:
#line 4352 "GetDP.y"
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
case 402:
#line 4374 "GetDP.y"
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
case 403:
#line 4408 "GetDP.y"
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
case 404:
#line 4421 "GetDP.y"
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
case 405:
#line 4435 "GetDP.y"
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
case 406:
#line 4448 "GetDP.y"
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
case 407:
#line 4460 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 409:
#line 4469 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 411:
#line 4478 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 412:
#line 4488 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 413:
#line 4498 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 414:
#line 4509 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 415:
#line 4514 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 416:
#line 4524 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 418:
#line 4534 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 419:
#line 4537 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 420:
#line 4547 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 421:
#line 4563 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 423:
#line 4579 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 424:
#line 4583 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 425:
#line 4587 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 426:
#line 4591 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 427:
#line 4596 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 428:
#line 4607 "GetDP.y"
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
case 430:
#line 4624 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 431:
#line 4628 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 432:
#line 4632 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 433:
#line 4636 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 434:
#line 4640 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 435:
#line 4645 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 436:
#line 4656 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 438:
#line 4671 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 439:
#line 4675 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 440:
#line 4679 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 441:
#line 4683 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 442:
#line 4687 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 443:
#line 4698 "GetDP.y"
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
case 445:
#line 4716 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 446:
#line 4720 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 447:
#line 4724 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 448:
#line 4728 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 449:
#line 4733 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 450:
#line 4743 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 451:
#line 4749 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 452:
#line 4755 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 453:
#line 4765 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 454:
#line 4768 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 455:
#line 4773 "GetDP.y"
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
case 457:
#line 4791 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 458:
#line 4801 "GetDP.y"
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
case 459:
#line 4830 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 460:
#line 4833 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 461:
#line 4836 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 462:
#line 4844 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 463:
#line 4861 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 465:
#line 4873 "GetDP.y"
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
case 467:
#line 4896 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 469:
#line 4910 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 470:
#line 4917 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 471:
#line 4925 "GetDP.y"
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
case 472:
#line 4971 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 473:
#line 4976 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 474:
#line 4982 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 475:
#line 4985 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 476:
#line 4990 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 478:
#line 5001 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 479:
#line 5004 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 480:
#line 5010 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 481:
#line 5015 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 482:
#line 5021 "GetDP.y"
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
case 483:
#line 5035 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 485:
#line 5049 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 486:
#line 5056 "GetDP.y"
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
case 487:
#line 5084 "GetDP.y"
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
case 488:
#line 5094 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 489:
#line 5095 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 490:
#line 5101 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 491:
#line 5110 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 492:
#line 5127 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 494:
#line 5139 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 496:
#line 5146 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 498:
#line 5158 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 499:
#line 5165 "GetDP.y"
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
case 500:
#line 5177 "GetDP.y"
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
case 501:
#line 5188 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 502:
#line 5193 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 503:
#line 5199 "GetDP.y"
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
case 504:
#line 5216 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 505:
#line 5226 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 506:
#line 5229 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 507:
#line 5233 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 508:
#line 5244 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 509:
#line 5248 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 510:
#line 5252 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 511:
#line 5257 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 512:
#line 5265 "GetDP.y"
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
case 513:
#line 5277 "GetDP.y"
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
case 514:
#line 5300 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 515:
#line 5301 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 516:
#line 5302 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 517:
#line 5303 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 518:
#line 5309 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 519:
#line 5311 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 520:
#line 5317 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 521:
#line 5323 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 522:
#line 5330 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 523:
#line 5339 "GetDP.y"
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
case 524:
#line 5361 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 525:
#line 5369 "GetDP.y"
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
case 526:
#line 5380 "GetDP.y"
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
case 527:
#line 5394 "GetDP.y"
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
case 528:
#line 5415 "GetDP.y"
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
case 529:
#line 5442 "GetDP.y"
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
case 530:
#line 5473 "GetDP.y"
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
case 531:
#line 5493 "GetDP.y"
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
case 533:
#line 5519 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 534:
#line 5526 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 535:
#line 5533 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 536:
#line 5540 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 537:
#line 5544 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 538:
#line 5548 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 539:
#line 5552 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 540:
#line 5556 "GetDP.y"
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
case 541:
#line 5566 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 542:
#line 5571 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 543:
#line 5576 "GetDP.y"
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
case 544:
#line 5596 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 545:
#line 5603 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 546:
#line 5612 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 547:
#line 5621 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 548:
#line 5630 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 549:
#line 5637 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 550:
#line 5645 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 551:
#line 5649 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 552:
#line 5658 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 553:
#line 5662 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 554:
#line 5670 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 555:
#line 5676 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 556:
#line 5685 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 557:
#line 5691 "GetDP.y"
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
case 558:
#line 5739 "GetDP.y"
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
case 559:
#line 5754 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 562:
#line 5767 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 563:
#line 5773 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 564:
#line 5779 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 565:
#line 5790 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 566:
#line 5791 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 567:
#line 5792 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 568:
#line 5793 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 569:
#line 5794 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 570:
#line 5795 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 571:
#line 5796 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 572:
#line 5797 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 573:
#line 5798 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 574:
#line 5799 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 575:
#line 5800 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 576:
#line 5801 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 577:
#line 5802 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 578:
#line 5803 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 579:
#line 5804 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 580:
#line 5805 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 581:
#line 5806 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 582:
#line 5807 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 583:
#line 5808 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 584:
#line 5809 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 585:
#line 5810 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 586:
#line 5813 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 587:
#line 5814 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 588:
#line 5815 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 589:
#line 5816 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 590:
#line 5817 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 591:
#line 5818 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 592:
#line 5819 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 593:
#line 5820 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 594:
#line 5821 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 595:
#line 5822 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 596:
#line 5823 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 597:
#line 5824 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 598:
#line 5825 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 599:
#line 5826 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 600:
#line 5827 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 601:
#line 5828 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 602:
#line 5829 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 603:
#line 5830 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 604:
#line 5831 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 605:
#line 5832 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 606:
#line 5833 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 607:
#line 5834 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 608:
#line 5835 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 609:
#line 5836 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 610:
#line 5837 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 611:
#line 5838 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 612:
#line 5839 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 613:
#line 5840 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 614:
#line 5841 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 615:
#line 5842 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 616:
#line 5843 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 617:
#line 5844 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 618:
#line 5845 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 619:
#line 5846 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 620:
#line 5847 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 621:
#line 5848 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 622:
#line 5849 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 623:
#line 5850 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 624:
#line 5851 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 625:
#line 5852 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 626:
#line 5857 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 627:
#line 5858 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 628:
#line 5859 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 629:
#line 5860 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 630:
#line 5861 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 631:
#line 5862 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 632:
#line 5863 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 633:
#line 5865 "GetDP.y"
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
case 634:
#line 5883 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 635:
#line 5886 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 636:
#line 5892 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 637:
#line 5895 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 638:
#line 5902 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 639:
#line 5908 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 640:
#line 5911 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 641:
#line 5914 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 642:
#line 5926 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 643:
#line 5932 "GetDP.y"
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
case 644:
#line 5943 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", yyvsp[-2].c) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;
    break;}
case 645:
#line 5958 "GetDP.y"
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
case 646:
#line 5980 "GetDP.y"
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
case 647:
#line 5995 "GetDP.y"
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
case 648:
#line 6036 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 649:
#line 6039 "GetDP.y"
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
case 650:
#line 6054 "GetDP.y"
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
#line 6068 "GetDP.y"



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


