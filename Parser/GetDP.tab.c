
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
#define	tUpdate	378
#define	tUpdateConstraint	379
#define	tBreak	380
#define	tTimeLoopTheta	381
#define	tTime0	382
#define	tTimeMax	383
#define	tTheta	384
#define	tTimeLoopNewmark	385
#define	tBeta	386
#define	tGamma	387
#define	tIterativeLoop	388
#define	tNbrMaxIteration	389
#define	tRelaxationFactor	390
#define	tIterativeTimeReduction	391
#define	tDivisionCoefficient	392
#define	tChangeOfState	393
#define	tChangeOfCoordinates	394
#define	tSystemCommand	395
#define	tPostProcessing	396
#define	tNameOfSystem	397
#define	tPostOperation	398
#define	tNameOfPostProcessing	399
#define	tUsingPost	400
#define	tAppend	401
#define	tPlot	402
#define	tPrint	403
#define	tPrintGroup	404
#define	tWrite	405
#define	tAdapt	406
#define	tOnGlobal	407
#define	tOnRegion	408
#define	tOnElementsOf	409
#define	tOnGrid	410
#define	tOnSection	411
#define	tOnPoint	412
#define	tOnLine	413
#define	tOnPlane	414
#define	tOnBox	415
#define	tWithArgument	416
#define	tFile	417
#define	tDepth	418
#define	tDimension	419
#define	tTimeStep	420
#define	tHarmonicToTime	421
#define	tFormat	422
#define	tHeader	423
#define	tFooter	424
#define	tSkin	425
#define	tSmoothing	426
#define	tTarget	427
#define	tSort	428
#define	tIso	429
#define	tNoNewLine	430
#define	tChangeOfValues	431
#define	tFlag	432
#define	tHelp	433
#define	tCpu	434
#define	tCheck	435
#define	tDEF	436
#define	tOR	437
#define	tAND	438
#define	tEQUAL	439
#define	tNOTEQUAL	440
#define	tAPPROXEQUAL	441
#define	tLESSOREQUAL	442
#define	tGREATEROREQUAL	443
#define	tLESSLESS	444
#define	tGREATERGREATER	445
#define	tCROSSPRODUCT	446
#define	UNARYPREC	447

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.34 2001-10-25 07:06:36 geuzaine Exp $ */

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



#define	YYFINAL		1606
#define	YYFLAG		-32768
#define	YYNTBASE	214

#define YYTRANSLATE(x) ((unsigned)(x) <= 447 ? yytranslate[x] : 399)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   201,     2,   209,   210,   199,     2,     2,   204,
   205,   197,   195,   213,   196,   208,   198,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   189,
     2,   191,   183,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   206,     2,   207,   203,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   211,     2,   212,     2,     2,     2,     2,     2,
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
   177,   178,   179,   180,   181,   182,   184,   185,   186,   187,
   188,   190,   192,   193,   194,   200,   202
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
  1451,  1463,  1477,  1493,  1505,  1519,  1520,  1528,  1529,  1537,
  1545,  1551,  1557,  1559,  1561,  1562,  1565,  1569,  1573,  1576,
  1577,  1580,  1584,  1588,  1592,  1596,  1601,  1602,  1605,  1609,
  1613,  1617,  1621,  1625,  1630,  1631,  1634,  1638,  1642,  1646,
  1650,  1655,  1656,  1659,  1663,  1667,  1671,  1675,  1679,  1684,
  1689,  1694,  1695,  1700,  1701,  1704,  1708,  1712,  1716,  1720,
  1724,  1728,  1729,  1732,  1736,  1738,  1739,  1742,  1746,  1751,
  1756,  1760,  1765,  1766,  1771,  1772,  1775,  1779,  1784,  1785,
  1791,  1797,  1798,  1801,  1802,  1809,  1813,  1814,  1819,  1823,
  1827,  1828,  1831,  1835,  1837,  1838,  1841,  1845,  1849,  1853,
  1857,  1862,  1863,  1872,  1873,  1874,  1878,  1886,  1894,  1895,
  1906,  1910,  1917,  1919,  1921,  1923,  1925,  1926,  1930,  1932,
  1935,  1938,  1951,  1954,  1970,  1975,  1988,  2006,  2029,  2042,
  2043,  2046,  2050,  2055,  2060,  2064,  2067,  2070,  2074,  2078,
  2082,  2086,  2090,  2094,  2098,  2102,  2106,  2110,  2114,  2118,
  2124,  2127,  2131,  2141,  2145,  2146,  2149,  2154,  2159,  2165,
  2166,  2170,  2176,  2182,  2184,  2186,  2188,  2190,  2192,  2194,
  2196,  2198,  2200,  2202,  2204,  2206,  2208,  2210,  2212,  2214,
  2216,  2218,  2220,  2222,  2224,  2226,  2230,  2233,  2236,  2240,
  2244,  2248,  2252,  2256,  2260,  2264,  2268,  2272,  2276,  2280,
  2284,  2288,  2292,  2297,  2302,  2307,  2312,  2317,  2322,  2327,
  2332,  2337,  2342,  2349,  2354,  2359,  2364,  2369,  2374,  2379,
  2386,  2393,  2400,  2406,  2409,  2411,  2413,  2415,  2417,  2419,
  2421,  2423,  2425,  2426,  2428,  2430,  2434,  2436,  2438,  2442,
  2446,  2450,  2456,  2460,  2465,  2470,  2477,  2479,  2481
};

static const short yyrhs[] = {    -1,
   215,   216,     0,     0,     0,   216,   217,   218,     0,    45,
   211,   221,   212,     0,    79,   211,   241,   212,     0,    50,
   211,   275,   212,     0,    63,   211,   260,   212,     0,    65,
   211,   266,   212,     0,    75,   211,   282,   212,     0,    90,
   211,   305,   212,     0,   107,   211,   331,   212,     0,   142,
   211,   361,   212,     0,   144,   211,   373,   212,     0,   377,
     0,   390,     0,    10,   398,     0,   219,     0,   179,     7,
     0,   179,   149,     7,     0,   179,   181,     7,     0,   179,
    21,     7,     0,   179,   180,     7,     0,   179,   179,     7,
     0,   179,     5,     7,     0,   180,     7,     0,   181,     7,
     0,   181,    45,     7,     0,   181,    79,     7,     0,   181,
    50,     7,     0,   181,    63,     7,     0,   181,    65,     7,
     0,   181,    75,     7,     0,   181,    90,     7,     0,   181,
   107,     7,     0,   181,   142,     7,     0,   181,   144,     7,
     0,   181,     3,     7,     0,     0,   220,   381,     0,     0,
     0,   221,   222,   223,     0,     5,   182,   225,     7,     0,
     5,   240,   182,   225,     7,     0,     0,     5,   238,   182,
   224,   225,     7,     0,    46,   206,   236,   207,     7,     0,
   390,     0,     0,     0,   229,   206,   226,   230,   227,   231,
   207,     0,   209,   233,     0,   225,     0,     5,   239,     0,
    51,     0,     5,     0,   233,     0,    47,     0,     0,   237,
   232,   233,     0,   237,    48,     5,   239,     0,     5,     0,
   235,     0,   211,   234,   212,     0,     0,   234,   237,   235,
     0,   234,   237,   196,   235,     0,     3,     0,     3,     8,
   393,     0,     3,     8,     3,     8,   393,     0,     5,     0,
     5,   211,   393,   212,     0,     5,   211,   212,     0,     0,
   236,   237,     5,     0,   236,   237,     5,   211,   393,   212,
     0,     0,   213,     0,   211,   209,   393,   212,     0,     0,
   211,   212,     0,   211,   393,   212,     0,     0,   241,   242,
     0,    49,   206,   243,   207,     7,     0,     5,   206,   207,
   182,   244,     7,     0,     5,   206,   228,   207,   182,   244,
     7,     0,   390,     0,     0,   243,   237,     5,     0,    11,
   206,   393,   207,     0,    79,   206,     5,   207,     0,     0,
   245,   248,     0,     0,   211,   247,   212,     0,   244,     0,
   247,   213,   244,     0,     0,   249,   250,     0,   253,     0,
     0,     0,   250,   183,   251,   250,     8,   252,   250,     0,
   250,   197,   250,     0,   250,   200,   250,     0,    43,   206,
   250,   213,   250,   207,     0,   250,   198,   250,     0,   250,
   195,   250,     0,   250,   196,   250,     0,   250,   199,   250,
     0,   250,   203,   250,     0,   250,   189,   250,     0,   250,
   191,   250,     0,   250,   190,   250,     0,   250,   192,   250,
     0,   250,   186,   250,     0,   250,   187,   250,     0,   250,
   188,   250,     0,   250,   185,   250,     0,   250,   184,   250,
     0,   196,   250,     0,   195,   250,     0,   201,   250,     0,
   204,   250,   205,     0,   394,     0,   392,   257,   259,     0,
     5,   330,     0,   330,     0,   330,   257,     0,     0,   100,
   254,   206,   248,   207,     0,     0,    44,   255,   206,     3,
   213,   393,   213,   248,   213,   248,   207,     0,    40,   206,
   330,   207,     0,    42,   206,   330,   207,     0,     0,    41,
   256,   206,   248,   213,   228,   207,     0,   189,     5,   191,
   206,   248,   207,     0,   210,     5,     0,   210,   166,     0,
   210,   118,     0,   210,     3,     0,   253,   209,     3,     0,
   209,     3,     0,   206,   208,   207,     0,   206,   207,     0,
   206,   258,   207,     0,   250,     0,   258,   213,   250,     0,
     0,   211,   396,   212,     0,   211,    51,   206,   228,   207,
   212,     0,     0,   260,   211,   261,   212,     0,     0,   261,
   262,     0,    76,     5,     7,     0,    64,   211,   263,   212,
     0,     0,   263,   211,   264,   212,     0,     0,   264,   265,
     0,    51,   228,     7,     0,    51,    47,     7,     0,    63,
     5,   259,     7,     0,     0,   266,   211,   267,   212,     0,
     0,   267,   268,     0,    76,     5,     7,     0,    68,   244,
     7,     0,    64,   211,   269,   212,     0,     0,   269,   211,
   270,   212,     0,     0,   270,   271,     0,    66,     5,     7,
     0,    67,     5,     7,     0,    64,   211,   272,   212,     0,
     0,   272,   211,   273,   212,     0,     0,   273,   274,     0,
    69,     5,     7,     0,    70,   393,     7,     0,    71,   393,
     7,     0,    72,   393,     7,     0,    73,   393,     7,     0,
    74,   393,     7,     0,     0,   275,   276,     0,   211,   277,
   212,     0,   390,     0,     0,   277,   278,     0,    76,     5,
     7,     0,    76,     5,   238,     7,     0,    66,     5,     7,
     0,    64,   211,   279,   212,     0,    64,     5,   211,   279,
   212,     0,     0,   279,   211,   280,   212,     0,     0,   280,
   281,     0,    66,     5,     7,     0,    51,   228,     7,     0,
    52,   228,     7,     0,    58,   244,     7,     0,    57,   244,
     7,     0,    62,     5,     7,     0,    59,   211,     3,   237,
     3,   212,     7,     0,    53,   228,     7,     0,    54,   228,
     7,     0,    79,   244,     7,     0,    56,   244,     7,     0,
    55,   244,     7,     0,    79,   206,   244,   213,   244,   207,
     7,     0,    56,   206,   244,   213,   244,   207,     7,     0,
    55,   206,   244,   213,   244,   207,     7,     0,     0,   282,
   283,     0,   211,   284,   212,     0,   390,     0,     0,   284,
   285,     0,    76,     5,     7,     0,    76,     5,   238,     7,
     0,    66,     5,     7,     0,    77,   211,   286,   212,     0,
    84,   211,   292,   212,     0,    86,   211,   299,   212,     0,
    50,   211,   302,   212,     0,     0,   286,   211,   287,   212,
     0,     0,   287,   288,     0,    76,     5,     7,     0,    78,
     5,     7,     0,    78,     5,   238,     7,     0,    79,     5,
   289,     7,     0,    80,   211,     5,   237,     5,   212,     7,
     0,    81,   246,     7,     0,    82,   228,     7,     0,    83,
   228,     7,     0,     0,     0,     0,   211,    91,     5,     7,
    90,     5,   238,     7,   290,    45,   228,     7,   291,   107,
     5,   239,     7,   212,     0,     0,   292,   211,   293,   212,
     0,     0,   293,   294,     0,    76,     5,     7,     0,    85,
   295,     7,     0,    78,   297,     7,     0,     5,     0,   211,
   296,   212,     0,     0,   296,   237,     5,     0,     5,     0,
   211,   298,   212,     0,     0,   298,   237,     5,     0,     0,
   299,   211,   300,   212,     0,     0,   300,   301,     0,    76,
     5,     7,     0,    66,     5,     7,     0,    78,     5,     7,
     0,     0,   302,   211,   303,   212,     0,     0,   303,   304,
     0,    78,     5,     7,     0,    83,   229,    89,     5,     7,
     0,    87,   229,     7,     0,    88,   232,     7,     0,    89,
     5,   239,     7,     0,     0,   305,   306,     0,   211,   307,
   212,     0,   390,     0,     0,   307,   308,     0,    76,     5,
     7,     0,    76,     5,   238,     7,     0,    66,     5,     7,
     0,    91,   211,   309,   212,     0,    95,   211,   315,   212,
     0,     0,   309,   211,   310,   212,     0,     0,   310,   311,
     0,    76,     5,     7,     0,    66,    86,     7,     0,    66,
    96,     7,     0,    66,     5,     7,     0,     0,    92,     5,
   239,   312,   314,     7,     0,    93,     3,     7,     0,     0,
   206,   313,   248,   207,     7,     0,   106,   228,     7,     0,
    65,     5,     7,     0,    63,     5,     7,     0,    94,     3,
     7,     0,     0,   206,     5,   207,     0,     0,   315,   316,
     0,    96,   211,   321,   212,     0,    97,   211,   321,   212,
     0,    98,   211,   325,   212,     0,    99,   211,   317,   212,
     0,     0,   317,   318,     0,    66,     5,     7,     0,    89,
     5,     7,     0,   211,   319,   212,     0,     0,   319,   320,
     0,    60,   330,     7,     0,    61,   330,     7,     0,    95,
   330,     7,     0,   106,   228,     7,     0,     0,   321,   322,
     0,     0,     0,   329,   206,   323,   248,   324,   213,   248,
   207,     7,     0,   106,   228,     7,     0,    63,     5,     7,
     0,    65,     5,     7,     0,     0,   325,   326,     0,   106,
   228,     7,     0,     0,     0,   329,   206,   327,   248,   328,
   213,   330,   207,     7,     0,     0,   100,     0,   101,     0,
   102,     0,   103,     0,   104,     0,   105,     0,   211,     5,
     5,   212,     0,   211,     5,   212,     0,     0,   331,   332,
     0,   211,   333,   212,     0,   390,     0,     0,   333,   334,
     0,    76,     5,     7,     0,    76,     5,   238,     7,     0,
   108,   211,   336,   212,     0,     0,   115,   335,   211,   343,
   212,     0,     0,   336,   211,   337,   212,     0,     0,   337,
   338,     0,    76,     5,     7,     0,    66,     5,     7,     0,
   109,   339,     7,     0,   110,   398,     7,     0,   113,   341,
     7,     0,   114,     5,     7,     0,   111,   395,     7,     0,
   112,   398,     7,     0,     5,   239,     0,   211,   340,   212,
     0,     0,   340,   237,     5,     0,     5,     0,   211,   342,
   212,     0,     0,   342,   237,     5,     0,     0,   343,   344,
     0,     5,     5,     7,     0,   117,   244,     7,     0,   127,
   211,   350,   212,     0,   131,   211,   352,   212,     0,   134,
   211,   354,   212,     0,   137,   211,   356,   212,     0,     5,
   206,     5,   207,     7,     0,   117,   206,   244,   207,     7,
     0,   126,     7,     0,   121,   206,   244,   207,   211,   343,
   212,     0,   121,   206,   244,   207,   211,   343,   212,   122,
   211,   343,   212,     0,   119,   206,     5,   213,   244,   207,
     7,     0,   124,   206,     5,   213,   244,   207,     7,     0,
   125,   206,     5,   213,   228,   213,     5,   207,     7,     0,
   120,   206,     5,   213,     5,   213,   395,   207,     7,     0,
   123,   206,     5,   213,   393,   213,   395,   213,   393,   207,
     7,     0,   127,   206,   393,   213,   393,   213,   244,   213,
   244,   207,   211,   343,   212,     0,   131,   206,   393,   213,
   393,   213,   244,   213,   393,   213,   393,   207,   211,   343,
   212,     0,   134,   206,   393,   213,   393,   213,   244,   207,
   211,   343,   212,     0,   134,   206,   393,   213,   393,   213,
   244,   213,   393,   207,   211,   343,   212,     0,     0,   149,
   345,   206,   347,   348,   207,     7,     0,     0,   151,   346,
   206,   347,   348,   207,     7,     0,   140,   206,   228,   213,
   244,   207,     7,     0,   144,   206,     5,   207,     7,     0,
   141,   206,   398,   207,     7,     0,   246,     0,     5,     0,
     0,   348,   349,     0,   213,   163,   398,     0,   213,   166,
   395,     0,   213,   395,     0,     0,   350,   351,     0,   128,
   393,     7,     0,   129,   393,     7,     0,   118,   244,     7,
     0,   130,   244,     7,     0,   115,   211,   343,   212,     0,
     0,   352,   353,     0,   128,   393,     7,     0,   129,   393,
     7,     0,   118,   244,     7,     0,   132,   393,     7,     0,
   133,   393,     7,     0,   115,   211,   343,   212,     0,     0,
   354,   355,     0,   135,   393,     7,     0,    68,   393,     7,
     0,   136,   244,     7,     0,   178,   393,     7,     0,   115,
   211,   343,   212,     0,     0,   356,   357,     0,   135,   393,
     7,     0,   138,   393,     7,     0,    68,   393,     7,     0,
   178,   393,     7,     0,   108,     5,     7,     0,   139,   211,
   358,   212,     0,   115,   211,   343,   212,     0,   116,   211,
   343,   212,     0,     0,   358,   211,   359,   212,     0,     0,
   359,   360,     0,    66,     5,     7,     0,    91,     5,     7,
     0,   106,   228,     7,     0,    68,   393,     7,     0,    79,
   244,     7,     0,   178,     5,     7,     0,     0,   361,   362,
     0,   211,   363,   212,     0,   390,     0,     0,   363,   364,
     0,    76,     5,     7,     0,    76,     5,   238,     7,     0,
   109,     5,   239,     7,     0,   143,     5,     7,     0,    91,
   211,   365,   212,     0,     0,   365,   211,   366,   212,     0,
     0,   366,   367,     0,    76,     5,     7,     0,    57,   211,
   368,   212,     0,     0,   368,    96,   211,   369,   212,     0,
   368,     5,   211,   369,   212,     0,     0,   369,   370,     0,
     0,   329,   206,   371,   248,   207,     7,     0,    66,     5,
     7,     0,     0,   106,   372,   228,     7,     0,    63,     5,
     7,     0,    65,     5,     7,     0,     0,   373,   374,     0,
   211,   375,   212,     0,   390,     0,     0,   375,   376,     0,
    76,     5,     7,     0,   145,     5,     7,     0,   168,     5,
     7,     0,   147,   398,     7,     0,   115,   211,   379,   212,
     0,     0,   144,     5,   146,     5,   378,   211,   379,   212,
     0,     0,     0,   379,   380,   381,     0,   148,   206,   383,
   386,   387,   207,     7,     0,   149,   206,   383,   386,   387,
   207,     7,     0,     0,   150,   206,   228,   382,   213,   106,
   228,   387,   207,     7,     0,     5,   385,   213,     0,     5,
   385,   384,     5,   385,   213,     0,   197,     0,   198,     0,
   195,     0,   196,     0,     0,   206,   228,   207,     0,   153,
     0,   154,   228,     0,   155,   228,     0,   157,   211,   211,
   396,   212,   211,   396,   212,   211,   396,   212,   212,     0,
   156,   228,     0,   156,   211,   244,   213,   244,   213,   244,
   212,   211,   395,   213,   395,   213,   395,   212,     0,   158,
   211,   396,   212,     0,   159,   211,   211,   396,   212,   211,
   396,   212,   212,   211,   393,   212,     0,   160,   211,   211,
   396,   212,   211,   396,   212,   211,   396,   212,   212,   211,
   393,   213,   393,   212,     0,   161,   211,   211,   396,   212,
   211,   396,   212,   211,   396,   212,   211,   396,   212,   212,
   211,   393,   213,   393,   213,   393,   212,     0,   154,   228,
   162,     5,   211,   393,   213,   393,   212,   211,   393,   212,
     0,     0,   387,   388,     0,   213,   163,   398,     0,   213,
   163,   191,   398,     0,   213,   163,   194,   398,     0,   213,
   164,   393,     0,   213,   171,     0,   213,   172,     0,   213,
   167,   393,     0,   213,   168,     5,     0,   213,   169,   389,
     0,   213,   170,   389,     0,   213,   168,   389,     0,   213,
   165,   393,     0,   213,   166,   395,     0,   213,   152,     5,
     0,   213,   174,     5,     0,   213,   173,   393,     0,   213,
    57,   395,     0,   213,   175,   393,     0,   213,   175,   211,
   396,   212,     0,   213,   176,     0,   213,   111,   395,     0,
   213,   140,   211,   244,   213,   244,   213,   244,   212,     0,
   213,   177,   246,     0,     0,   389,     6,     0,     5,   182,
   395,     7,     0,     5,   182,     6,     7,     0,    14,   206,
   391,   207,     7,     0,     0,   391,   237,     5,     0,   391,
   237,     5,   182,   393,     0,   391,   237,     5,   182,     6,
     0,    20,     0,    21,     0,    22,     0,    23,     0,    24,
     0,    25,     0,    26,     0,    27,     0,    28,     0,    29,
     0,    30,     0,    31,     0,    32,     0,    33,     0,    34,
     0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
     0,     5,     0,   394,     0,   204,   393,   205,     0,   196,
   393,     0,   201,   393,     0,   393,   196,   393,     0,   393,
   195,   393,     0,   393,   197,   393,     0,   393,   198,   393,
     0,   393,   199,   393,     0,   393,   203,   393,     0,   393,
   189,   393,     0,   393,   191,   393,     0,   393,   190,   393,
     0,   393,   192,   393,     0,   393,   186,   393,     0,   393,
   187,   393,     0,   393,   185,   393,     0,   393,   184,   393,
     0,    20,   206,   393,   207,     0,    21,   206,   393,   207,
     0,    22,   206,   393,   207,     0,    23,   206,   393,   207,
     0,    24,   206,   393,   207,     0,    25,   206,   393,   207,
     0,    26,   206,   393,   207,     0,    27,   206,   393,   207,
     0,    28,   206,   393,   207,     0,    29,   206,   393,   207,
     0,    30,   206,   393,   213,   393,   207,     0,    31,   206,
   393,   207,     0,    32,   206,   393,   207,     0,    33,   206,
   393,   207,     0,    34,   206,   393,   207,     0,    35,   206,
   393,   207,     0,    36,   206,   393,   207,     0,    37,   206,
   393,   213,   393,   207,     0,    38,   206,   393,   213,   393,
   207,     0,    39,   206,   393,   213,   393,   207,     0,   393,
   183,   393,     8,   393,     0,   393,   209,     0,     4,     0,
     3,     0,    15,     0,    16,     0,    17,     0,    18,     0,
    19,     0,     5,     0,     0,   393,     0,   397,     0,   211,
   396,   212,     0,   393,     0,   397,     0,   396,   213,   393,
     0,   396,   213,   397,     0,   393,     8,   393,     0,   393,
     8,   393,     8,   393,     0,     5,   211,   212,     0,     5,
   211,   396,   212,     0,    12,   206,     5,   207,     0,    13,
   206,     5,   213,     5,   207,     0,     6,     0,     5,     0,
     9,   206,   398,   213,   398,   207,     0
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
  4351,  4373,  4386,  4400,  4413,  4426,  4433,  4435,  4442,  4444,
  4454,  4464,  4474,  4480,  4490,  4496,  4499,  4503,  4513,  4527,
  4539,  4543,  4549,  4553,  4557,  4562,  4571,  4584,  4588,  4594,
  4598,  4602,  4606,  4611,  4620,  4632,  4635,  4641,  4645,  4649,
  4653,  4662,  4677,  4680,  4686,  4690,  4694,  4699,  4709,  4715,
  4721,  4730,  4734,  4738,  4752,  4755,  4767,  4796,  4799,  4802,
  4810,  4826,  4834,  4837,  4858,  4861,  4872,  4875,  4883,  4891,
  4937,  4942,  4947,  4951,  4955,  4962,  4966,  4970,  4975,  4981,
  4987,  5000,  5011,  5014,  5022,  5050,  5061,  5061,  5067,  5076,
  5092,  5100,  5103,  5108,  5111,  5120,  5123,  5131,  5143,  5154,
  5159,  5164,  5182,  5191,  5195,  5200,  5208,  5214,  5218,  5223,
  5229,  5243,  5265,  5268,  5269,  5270,  5273,  5277,  5281,  5289,
  5296,  5303,  5327,  5334,  5346,  5359,  5379,  5405,  5438,  5458,
  5481,  5484,  5492,  5499,  5506,  5510,  5514,  5518,  5522,  5532,
  5537,  5542,  5562,  5569,  5578,  5587,  5596,  5603,  5611,  5615,
  5624,  5628,  5636,  5642,  5650,  5657,  5703,  5720,  5726,  5730,
  5733,  5739,  5745,  5756,  5758,  5759,  5760,  5761,  5762,  5763,
  5764,  5765,  5766,  5767,  5768,  5769,  5770,  5771,  5772,  5773,
  5774,  5775,  5776,  5777,  5779,  5781,  5782,  5783,  5784,  5785,
  5786,  5787,  5788,  5789,  5790,  5791,  5792,  5793,  5794,  5795,
  5796,  5797,  5798,  5799,  5800,  5801,  5802,  5803,  5804,  5805,
  5806,  5807,  5808,  5809,  5810,  5811,  5812,  5813,  5814,  5815,
  5816,  5817,  5818,  5819,  5822,  5825,  5826,  5827,  5828,  5829,
  5830,  5831,  5847,  5852,  5858,  5861,  5866,  5874,  5877,  5880,
  5890,  5898,  5909,  5924,  5946,  5961,  6000,  6005,  6020
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
"tUpdate","tUpdateConstraint","tBreak","tTimeLoopTheta","tTime0","tTimeMax",
"tTheta","tTimeLoopNewmark","tBeta","tGamma","tIterativeLoop","tNbrMaxIteration",
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
   215,   214,   216,   217,   216,   218,   218,   218,   218,   218,
   218,   218,   218,   218,   218,   218,   218,   218,   218,   219,
   219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
   219,   219,   219,   219,   219,   219,   219,   219,   219,   220,
   219,   221,   222,   221,   223,   223,   224,   223,   223,   223,
   226,   227,   225,   225,   228,   228,   229,   229,   230,   230,
   231,   231,   231,   232,   233,   233,   234,   234,   234,   235,
   235,   235,   235,   235,   235,   236,   236,   236,   237,   237,
   238,   239,   239,   240,   241,   241,   242,   242,   242,   242,
   243,   243,   244,   244,   245,   244,   246,   246,   247,   247,
   249,   248,   250,   251,   252,   250,   250,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
   250,   250,   250,   250,   250,   250,   253,   253,   253,   253,
   253,   253,   254,   253,   255,   253,   253,   253,   256,   253,
   253,   253,   253,   253,   253,   253,   253,   257,   257,   257,
   258,   258,   259,   259,   259,   260,   260,   261,   261,   262,
   262,   263,   263,   264,   264,   265,   265,   265,   266,   266,
   267,   267,   268,   268,   268,   269,   269,   270,   270,   271,
   271,   271,   272,   272,   273,   273,   274,   274,   274,   274,
   274,   274,   275,   275,   276,   276,   277,   277,   278,   278,
   278,   278,   278,   279,   279,   280,   280,   281,   281,   281,
   281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
   281,   281,   282,   282,   283,   283,   284,   284,   285,   285,
   285,   285,   285,   285,   285,   286,   286,   287,   287,   288,
   288,   288,   288,   288,   288,   288,   288,   289,   290,   291,
   289,   292,   292,   293,   293,   294,   294,   294,   295,   295,
   296,   296,   297,   297,   298,   298,   299,   299,   300,   300,
   301,   301,   301,   302,   302,   303,   303,   304,   304,   304,
   304,   304,   305,   305,   306,   306,   307,   307,   308,   308,
   308,   308,   308,   309,   309,   310,   310,   311,   311,   311,
   311,   312,   311,   311,   313,   311,   311,   311,   311,   311,
   314,   314,   315,   315,   316,   316,   316,   316,   317,   317,
   318,   318,   318,   319,   319,   320,   320,   320,   320,   321,
   321,   323,   324,   322,   322,   322,   322,   325,   325,   326,
   327,   328,   326,   329,   329,   329,   329,   329,   329,   329,
   330,   330,   331,   331,   332,   332,   333,   333,   334,   334,
   334,   335,   334,   336,   336,   337,   337,   338,   338,   338,
   338,   338,   338,   338,   338,   339,   339,   340,   340,   341,
   341,   342,   342,   343,   343,   344,   344,   344,   344,   344,
   344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
   344,   344,   344,   344,   344,   345,   344,   346,   344,   344,
   344,   344,   347,   347,   348,   348,   349,   349,   349,   350,
   350,   351,   351,   351,   351,   351,   352,   352,   353,   353,
   353,   353,   353,   353,   354,   354,   355,   355,   355,   355,
   355,   356,   356,   357,   357,   357,   357,   357,   357,   357,
   357,   358,   358,   359,   359,   360,   360,   360,   360,   360,
   360,   361,   361,   362,   362,   363,   363,   364,   364,   364,
   364,   364,   365,   365,   366,   366,   367,   367,   368,   368,
   368,   369,   369,   371,   370,   370,   372,   370,   370,   370,
   373,   373,   374,   374,   375,   375,   376,   376,   376,   376,
   376,   378,   377,   379,   380,   379,   381,   381,   382,   381,
   383,   383,   384,   384,   384,   384,   385,   385,   386,   386,
   386,   386,   386,   386,   386,   386,   386,   386,   386,   387,
   387,   388,   388,   388,   388,   388,   388,   388,   388,   388,
   388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
   388,   388,   388,   388,   389,   389,   390,   390,   390,   391,
   391,   391,   391,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   394,   394,   394,   394,   394,   394,
   394,   394,   395,   395,   395,   395,   396,   396,   396,   396,
   397,   397,   397,   397,   397,   397,   398,   398,   398
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
    11,    13,    15,    11,    13,     0,     7,     0,     7,     7,
     5,     5,     1,     1,     0,     2,     3,     3,     2,     0,
     2,     3,     3,     3,     3,     4,     0,     2,     3,     3,
     3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     3,     4,     4,
     4,     0,     4,     0,     2,     3,     3,     3,     3,     3,
     3,     0,     2,     3,     1,     0,     2,     3,     4,     4,
     3,     4,     0,     4,     0,     2,     3,     4,     0,     5,
     5,     0,     2,     0,     6,     3,     0,     4,     3,     3,
     0,     2,     3,     1,     0,     2,     3,     3,     3,     3,
     4,     0,     8,     0,     0,     3,     7,     7,     0,    10,
     3,     6,     1,     1,     1,     1,     0,     3,     1,     2,
     2,    12,     2,    15,     4,    12,    17,    22,    12,     0,
     2,     3,     4,     4,     3,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
     2,     3,     9,     3,     0,     2,     4,     4,     5,     0,
     3,     5,     5,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     4,     6,     4,     4,     4,     4,     4,     4,     6,
     6,     6,     5,     2,     1,     1,     1,     1,     1,     1,
     1,     1,     0,     1,     1,     3,     1,     1,     3,     3,
     3,     5,     3,     4,     4,     6,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,   633,   648,   647,     0,    18,   560,
    42,   193,   156,   169,   223,    85,   283,   353,   462,     0,
   491,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    41,   626,   625,   632,     0,     0,
     0,   627,   628,   629,   630,   631,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   634,   585,     0,   635,     0,    79,    43,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    26,    23,    21,
    25,    24,    22,    39,    29,    31,    32,    33,    34,    30,
    35,    36,    37,    38,     0,     0,     0,     0,   558,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   632,   587,   588,     0,   637,     0,   638,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   624,   557,     0,     0,    80,     0,
     6,     0,   197,     8,   194,   196,   158,     9,   171,    10,
   227,    11,   224,   226,     0,     0,     7,    86,    90,   287,
    12,   284,   286,   357,    13,   354,   356,   466,    14,   463,
   465,   502,   495,    15,   492,   494,   517,     0,     0,    82,
    57,     0,    55,   509,     0,   643,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   586,
   636,     0,   641,     0,   602,   601,   599,   600,   595,   597,
   596,   598,   590,   589,   591,   592,   593,   594,     0,   559,
   561,     0,     0,    44,    50,     0,     0,     0,     0,     0,
    91,     0,     0,     0,     0,     0,     0,     0,   519,     0,
     0,     0,     0,     0,     0,     0,     0,   530,   530,     0,
    56,    70,    73,    67,    54,    65,     0,    51,   644,   645,
     0,   603,   604,   605,   606,   607,   608,   609,   610,   611,
   612,     0,   614,   615,   616,   617,   618,   619,     0,     0,
     0,   639,   640,     0,     0,     0,     0,   633,     0,     0,
     0,    76,     0,     0,     0,   195,   198,     0,     0,   157,
   159,     0,    95,     0,   170,   172,     0,     0,     0,     0,
     0,     0,   225,   228,     0,     0,    79,     0,     0,     0,
     0,   285,   288,     0,     0,   362,   355,   358,     0,     0,
     0,     0,   464,   467,   504,     0,     0,     0,     0,     0,
   493,   496,     0,   515,   516,   513,   514,   511,     0,   520,
   521,    95,   523,     0,     0,     0,     0,     0,     0,     0,
    83,     0,     0,    79,     0,     0,     0,     0,     0,     0,
     0,   642,   623,   649,   563,   562,   632,     0,     0,     0,
    47,     0,    79,     0,   204,     0,     0,   162,     0,   176,
     0,     0,     0,   101,     0,   274,     0,     0,   236,   252,
   267,    95,     0,     0,     0,     0,     0,   294,   313,     0,
   364,     0,     0,   473,    82,     0,   505,     0,   504,     0,
     0,     0,   518,   517,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   531,     0,   626,    71,    75,     0,    66,
     0,     0,    60,    52,    59,   646,   613,   620,   621,   622,
    45,     0,    84,     0,    58,     0,     0,     0,   204,     0,
   201,   199,     0,     0,     0,   160,     0,     0,     0,   174,
    96,     0,   173,     0,   231,   229,     0,     0,     0,     0,
     0,    95,    87,    92,   291,   289,     0,     0,     0,   359,
     0,     0,   384,   468,     0,     0,     0,   471,   503,     0,
   497,   505,   498,   500,   499,     0,     0,    95,     0,   525,
     0,     0,     0,   507,   633,   633,     0,     0,     0,     0,
     0,   633,     0,   555,   555,   555,   536,   537,     0,     0,
     0,   551,    97,   508,     0,    74,     0,    68,   530,    79,
    81,     0,    46,    49,    77,     0,   206,   202,   200,   164,
   161,   178,   175,     0,     0,   632,   564,   565,   566,   567,
   568,   569,   570,   571,   572,   573,   574,   575,   576,   577,
   578,   579,   580,   581,   582,   583,     0,   139,     0,     0,
   135,   133,     0,     0,     0,     0,     0,     0,     0,     0,
   102,   103,   131,     0,   128,   276,   235,   230,   238,   232,
   254,   233,   269,   234,    88,     0,   290,   296,   292,     0,
     0,     0,     0,   293,   314,   360,   366,   361,     0,   469,
   475,   472,   470,   506,   501,   512,     0,     0,     0,     0,
     0,     0,   548,   552,    95,   545,     0,     0,   532,   535,
   543,   544,   538,   539,   542,   540,   541,   547,   546,     0,
   549,    95,   554,    72,    69,     0,     0,     0,    48,     0,
   203,     0,     0,     0,    93,    94,   130,     0,     0,     0,
     0,     0,     0,     0,   125,   124,   126,     0,   147,   145,
   142,   144,   143,     0,   104,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   132,   153,     0,     0,     0,     0,    89,
     0,   330,   330,   338,   319,     0,     0,    95,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   406,   408,   363,   385,     0,     0,    95,     0,
     0,     0,     0,     0,   533,   534,   556,     0,    99,     0,
     0,    53,    64,     0,     0,     0,     0,     0,     0,     0,
    95,    95,    95,    95,     0,     0,     0,    95,   205,   207,
     0,     0,   163,   165,     0,     0,     0,   177,   179,     0,
   101,     0,     0,     0,   101,     0,   127,     0,   352,     0,
   123,   122,   119,   120,   121,   115,   117,   116,   118,   111,
   112,   107,   110,   113,   108,   114,   146,   149,     0,   151,
     0,     0,   129,     0,     0,     0,     0,     0,   275,   277,
     0,     0,     0,     0,    97,     0,     0,   237,   239,     0,
     0,     0,   253,   255,     0,     0,     0,   268,   270,     0,
     0,     0,     0,     0,     0,     0,     0,   305,   295,   297,
   344,   344,   344,     0,     0,     0,     0,     0,   633,     0,
     0,     0,   365,   367,     0,     0,    95,     0,     0,     0,
    95,     0,     0,     0,   394,     0,   420,     0,   427,     0,
   435,   442,     0,     0,     0,     0,     0,     0,     0,   474,
   476,     0,     0,     0,     0,     0,     0,    95,   550,    98,
    95,   510,    82,    62,    78,     0,     0,     0,     0,    95,
     0,    95,     0,     0,     0,     0,     0,     0,    95,     0,
     0,     0,   153,   183,     0,     0,   137,     0,   138,     0,
     0,     0,   101,   351,     0,   148,   150,     0,     0,     0,
     0,     0,     0,     0,    82,     0,     0,   248,     0,     0,
     0,     0,     0,   263,   265,     0,   259,   261,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
     0,     0,   101,     0,     0,   345,   346,   347,   348,   349,
   350,     0,   315,   331,     0,   316,     0,   317,   339,     0,
     0,     0,   324,   318,   320,     0,     0,    82,   378,     0,
     0,     0,     0,   380,   382,     0,     0,   386,     0,     0,
   387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    97,    97,   479,
     0,     0,     0,     0,     0,     0,     0,     0,   100,    63,
   209,   210,   215,   216,     0,   219,     0,   218,   212,   211,
    79,   213,   208,     0,   217,   167,   166,     0,     0,   180,
   181,     0,     0,     0,   134,     0,   105,   152,     0,   154,
   278,     0,   280,   281,     0,   240,   241,     0,     0,     0,
    79,   245,   246,   247,   256,    79,   258,    79,   257,   272,
   271,   273,   309,   308,   301,   299,   300,   298,   302,   304,
   310,   307,     0,     0,     0,     0,   332,     0,   341,     0,
     0,     0,   369,   368,   376,    79,   370,   371,   374,   375,
    79,   372,   373,     0,     0,    95,     0,     0,     0,    95,
     0,     0,     0,    95,     0,     0,    95,   388,   421,     0,
     0,    95,     0,     0,     0,     0,   389,   428,     0,     0,
     0,     0,    95,     0,   390,   436,     0,     0,     0,     0,
     0,     0,     0,     0,   391,   443,    95,     0,     0,   414,
   413,   415,   415,     0,   477,     0,   633,     0,     0,     0,
     0,    95,    95,    95,     0,    95,   168,   185,   182,     0,
   109,     0,   141,     0,     0,     0,   282,   242,     0,   243,
     0,   264,     0,   260,     0,   311,     0,   336,   337,   335,
   101,   340,   101,   321,   322,     0,     0,     0,     0,   323,
   325,   377,     0,   381,     0,   392,   393,     0,     0,   384,
     0,     0,     0,     0,   384,     0,     0,     0,     0,     0,
   384,     0,     0,     0,     0,     0,     0,     0,   384,     0,
     0,     0,     0,     0,   384,   384,     0,     0,   452,     0,
     0,   412,   411,     0,     0,     0,     0,   478,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   140,   101,   106,     0,   279,     0,     0,   266,   262,     0,
     0,   306,   333,   342,     0,     0,     0,     0,   379,   383,
     0,   633,     0,   633,     0,     0,    95,     0,   424,   422,
   423,   425,    95,     0,   431,   429,   430,   432,   433,    95,
   438,     0,   437,   439,   440,   446,   448,     0,     0,   444,
   445,     0,   447,     0,     0,   633,   416,     0,   482,   482,
     0,   633,     0,     0,     0,     0,   553,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   184,   186,     0,
   155,     0,     0,     0,   303,     0,     0,   326,   327,   328,
   329,   397,     0,   395,     0,   398,     0,     0,   426,     0,
   434,     0,   441,   450,   451,   454,   449,   410,   407,     0,
   633,   419,   409,   344,   344,   529,     0,   522,   526,     0,
     0,   222,   221,   214,   220,     0,     0,     0,     0,     0,
     0,   101,     0,   244,   312,   101,     0,     0,     0,     0,
     0,    95,     0,     0,     0,     0,   417,   418,     0,     0,
     0,   487,   481,     0,   483,   480,   633,     0,     0,   187,
   188,   189,   190,   191,   192,     0,     0,     0,     0,   400,
   384,     0,   399,     0,     0,   384,     0,     0,     0,    95,
     0,     0,     0,   453,   455,     0,     0,     0,     0,   484,
     0,     0,     0,   136,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   489,
   490,   486,     0,   101,   524,     0,     0,   249,   334,   343,
   396,   401,   384,     0,   404,   384,   456,   459,   460,   457,
   458,   461,   488,     0,     0,     0,     0,     0,     0,     0,
     0,   527,     0,     0,   402,   384,   405,   485,     0,     0,
     0,     0,   250,   403,     0,     0,     0,     0,   528,    82,
     0,     0,   251,     0,     0,     0
};

static const short yydefgoto[] = {  1604,
     1,     2,     3,    20,    21,    22,   107,   192,   284,   514,
   233,   426,   600,   234,   235,   504,   717,   815,   315,   424,
   316,   443,   190,   350,   311,   351,   112,   208,   377,   453,
   454,  1231,   810,   531,   532,   651,   850,  1254,   652,   733,
   732,   729,   764,   871,   873,   109,   287,   361,   525,   723,
   834,   110,   288,   366,   527,   724,   839,  1119,  1340,  1419,
   108,   195,   286,   357,   520,   722,   830,   111,   203,   289,
   374,   538,   767,   889,  1140,  1577,  1596,   539,   768,   894,
  1019,  1148,  1016,  1146,   540,   769,   899,   534,   766,   880,
   113,   212,   292,   383,   548,   771,   910,  1266,  1033,  1351,
   549,   675,   914,  1055,  1172,  1281,   911,  1044,  1271,  1426,
   913,  1049,  1273,  1427,  1045,   653,   114,   216,   293,   388,
   472,   552,   776,   924,  1060,  1176,  1066,  1181,   679,   796,
   946,   947,  1232,  1324,  1397,  1079,  1199,  1081,  1208,  1083,
  1216,  1084,  1226,  1392,  1486,  1525,   115,   220,   294,   394,
   556,   797,   951,  1234,  1454,  1495,  1554,  1529,   117,   225,
   296,   402,    23,   295,   477,   560,    65,   317,   228,   409,
   298,   308,   419,   494,   705,    24,   106,   654,   166,   102,
   103,   167,   168,    29
};

static const short yypact[] = {-32768,
-32768,    98,  2734,   -70,   160,   -38,    12,    23,    30,    74,
    95,   117,   163,   170,   180,    36,   465,   179,  2497,-32768,
-32768,   442,-32768,-32768,  1654,-32768,-32768,    96,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   254,
-32768,   290,-32768,   425,   427,   478,   480,   492,-32768,   497,
-32768,   520,   522,   537,   539,   556,   558,   561,   573,   592,
   595,   314,   343,   367,-32768,-32768,-32768,   394,   600,   403,
   414,-32768,-32768,-32768,-32768,-32768,   446,   450,   467,   473,
   479,   481,   487,   498,   504,   506,   514,   523,   526,   540,
   554,   562,   577,   602,   604,   612,  2421,  2421,  2421,  2347,
  1125,-32768,   741,-32768,   160,  -145,   545,    21,   106,   130,
    39,    40,    42,    47,    50,   761,    70,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   795,   795,    89,   945,-32768,   816,
   824,  2421,  2421,  2421,  2421,  2421,  2421,  2421,  2421,  2421,
  2421,  2421,  2421,  2421,  2421,  2421,  2421,  2421,  2421,  2421,
  2421,-32768,   -10,   -10,  3468,  1125,   151,-32768,  2421,  2421,
  2421,  2421,  2421,  2421,  2421,  2421,  2421,  2421,  2421,  2421,
  2421,  2421,  2421,  2421,-32768,-32768,   621,   834,-32768,   839,
-32768,   356,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   -92,   651,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   653,  1650,  1650,    20,
-32768,    34,-32768,-32768,   658,-32768,   277,   654,   661,  3495,
  3522,  3549,  3576,  3603,  3630,  3657,  3684,  3711,  3738,  2662,
  3765,  3792,  3819,  3846,  3873,  3900,  2696,  2733,  2764,-32768,
-32768,  2347,  2490,  2511,  2331,  2403,  1036,  1036,  1576,  1576,
  1576,  1576,   413,   413,   -10,   -10,   -10,   -10,   160,-32768,
   689,  -134,   673,-32768,-32768,   363,   125,   109,   359,    87,
-32768,   513,    -6,   587,   693,  1043,    89,   688,-32768,    89,
    89,    35,   699,   703,   710,   715,   724,-32768,-32768,   686,
-32768,   925,   734,-32768,-32768,-32768,   740,-32768,-32768,-32768,
   942,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2421,-32768,-32768,-32768,-32768,-32768,-32768,  2421,  2421,
  2421,  1125,-32768,  2421,  2421,   748,  2384,  1580,  1937,   804,
   815,-32768,    45,   993,   997,-32768,-32768,   792,   999,-32768,
-32768,   794,    97,  1002,-32768,-32768,   797,  1005,  1006,   802,
   803,   841,-32768,-32768,   844,   846,    -4,  1049,  1050,   848,
   849,-32768,-32768,  1056,   851,-32768,-32768,-32768,  1058,   854,
  1061,  1095,-32768,-32768,-32768,  1096,   895,  1102,   160,  1104,
-32768,-32768,   906,-32768,-32768,-32768,-32768,-32768,  1115,   961,
-32768,    97,-32768,   913,  2347,   915,   918,   923,    -3,    17,
-32768,  2458,  1012,   283,  1030,    18,   930,  3927,  3954,  3981,
  4008,  4143,  4143,-32768,-32768,  4143,   133,  1131,  2421,  3198,
-32768,    91,   122,   928,-32768,  1136,    31,-32768,  1137,-32768,
   939,   941,  1141,-32768,  1143,-32768,  1144,    80,-32768,-32768,
-32768,    97,   970,  1147,  1151,  1152,    81,-32768,-32768,    88,
-32768,   949,    92,-32768,   950,  1155,   951,  1159,-32768,  1161,
  1162,  1165,-32768,   653,  1168,   963,  2347,   349,  2347,  2347,
  2347,  1167,  2600,-32768,  1170,  1174,  4143,-32768,  3228,-32768,
    64,    89,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  3258,-32768,    91,-32768,  1176,  1179,  1186,-32768,   366,
-32768,-32768,   984,  1187,   407,-32768,   423,  2421,  1190,-32768,
-32768,  1378,-32768,   426,-32768,-32768,  1191,   430,   436,   443,
  1193,    97,-32768,-32768,-32768,-32768,  1194,   447,   499,-32768,
  1195,   449,-32768,-32768,  1197,   486,  1198,-32768,-32768,   442,
-32768,   994,-32768,-32768,-32768,   996,  1003,    97,   502,-32768,
   505,   515,   538,-32768,  1691,  1691,  1019,  1202,   165,  2421,
  2421,  1691,  2421,  1205,-32768,-32768,-32768,-32768,  2421,  1232,
  1728,-32768,  1027,-32768,  2421,-32768,   134,-32768,-32768,   123,
-32768,  1233,-32768,-32768,  1033,   542,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  4035,  1034,   184,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1040,-32768,  1041,  1044,
-32768,-32768,  1246,  1378,  1378,  1378,  1378,  1249,   214,  1248,
  4218,  1047,  1052,  1052,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1252,-32768,-32768,-32768,  1054,
  1055,  1057,  1067,-32768,-32768,-32768,-32768,-32768,    71,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  2421,  1059,  1068,  1069,
  1071,  1072,-32768,-32768,    97,-32768,   160,   160,-32768,  4143,
  4143,-32768,  4143,-32768,  1279,  1279,  1279,  4143,-32768,  2347,
  4143,    97,-32768,  4143,-32768,   145,  1079,    58,-32768,  2421,
-32768,   574,    -5,    37,-32768,-32768,-32768,  1077,  1083,  1077,
  1378,  1086,  1087,  1105,  1092,  1092,  1092,  4195,-32768,-32768,
-32768,-32768,-32768,    27,-32768,  1378,  1378,  1378,  1378,  1378,
  1378,  1378,  1378,  1378,  1378,  1378,  1378,  1378,  1378,  1378,
  1378,  1294,  1053,-32768,  1089,   687,   909,   309,   267,-32768,
  1777,-32768,-32768,-32768,-32768,  1416,    29,    99,  1097,  1099,
  1100,  1107,  1112,  1113,  1295,   220,   235,   236,  1116,  1120,
  1126,  1127,-32768,-32768,-32768,-32768,     9,  2795,    97,  2347,
  2347,  2347,  2347,  1118,-32768,-32768,-32768,   551,-32768,   560,
  1328,-32768,-32768,  1331,    34,  3288,    89,    89,    89,    89,
   102,   104,    97,    97,  1142,  1333,  1347,   105,-32768,-32768,
    46,  1352,-32768,-32768,  1148,  1355,  1358,-32768,-32768,  1160,
-32768,  1163,  2631,  1351,-32768,  1166,-32768,  1154,-32768,  1378,
  4237,  4255,  1709,  1709,  1709,  1627,  1627,  1627,  1627,   709,
   709,  1092,  1092,  1092,  1092,  1092,-32768,-32768,  1169,  4218,
   153,  2310,-32768,  1373,    54,    54,  1374,  1379,-32768,-32768,
  1380,  1381,  1382,  1212,  1027,    89,    89,-32768,-32768,  1419,
    73,    75,-32768,-32768,  1420,  1422,  1425,-32768,-32768,  1433,
  1434,    86,  1435,  1436,  1440,  1444,    89,-32768,-32768,-32768,
   437,  1732,  1117,   439,  1448,  1449,    76,   160,  1691,   160,
    77,  1452,-32768,-32768,  1454,  1458,    97,  1457,  1462,  1463,
    97,  1465,  1466,  1472,-32768,  2421,-32768,  2421,-32768,  2421,
-32768,-32768,    89,   160,  1474,  1274,  1280,  1282,  1491,-32768,
-32768,  2421,  1285,   566,   568,   594,   607,    97,-32768,-32768,
    97,-32768,   950,-32768,-32768,  1492,  1493,  1495,  1496,    97,
  1499,    97,  1500,  1502,  1503,  1508,  1507,  1510,    97,  1511,
  1512,  1513,  1089,-32768,  1514,  1515,-32768,  1310,-32768,  1378,
  1311,  1335,-32768,-32768,  2538,-32768,-32768,  1378,  1337,   620,
  1542,  1461,  1546,  1547,   950,  1548,    93,  1345,  1552,  1553,
  1554,  1555,  1556,-32768,-32768,  1558,-32768,-32768,  1559,  1561,
  1562,  1564,  1565,  1568,  1570,  1571,  1573,  1574,   950,  1583,
  1584,  1587,-32768,  1618,  1619,-32768,-32768,-32768,-32768,-32768,
-32768,    89,-32768,-32768,  1353,-32768,    89,-32768,-32768,  1421,
  1620,  1621,-32768,-32768,-32768,  1655,  1656,   950,-32768,  1657,
  1658,  1661,  1694,-32768,-32768,  1695,  1698,-32768,  1534,  1535,
-32768,  1485,  1557,  1575,  1577,  1579,  1581,  2826,   747,  2857,
   891,  2888,   886,  2397,  1585,  1586,  1589,    78,    78,-32768,
  1761,  3318,  1450,  1566,  1588,  1567,  1590,  1599,-32768,-32768,
-32768,-32768,-32768,-32768,  1601,-32768,  1602,-32768,-32768,-32768,
  1603,-32768,-32768,  1604,-32768,-32768,-32768,  1762,   626,-32768,
-32768,    89,  4170,  2421,-32768,  1612,-32768,  4218,    89,-32768,
-32768,  1781,-32768,-32768,  1780,-32768,-32768,  1813,  1697,  1822,
  1603,-32768,-32768,-32768,-32768,   655,-32768,   669,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1632,  1834,  1837,  1838,-32768,  1840,-32768,  1841,
  1842,   119,-32768,-32768,-32768,   680,-32768,-32768,-32768,-32768,
   683,-32768,-32768,  1844,  1847,    97,  1851,  1646,  2421,    97,
    89,  2421,  1648,    97,  2421,  2421,    97,-32768,-32768,  2421,
  1649,    97,  2421,  2421,  2421,  2421,-32768,-32768,  2421,  2421,
  1651,  2421,    97,  2421,-32768,-32768,  2421,  1856,  1652,  1653,
  2421,  2421,  1663,  2421,-32768,-32768,    97,  1859,  1860,-32768,
-32768,-32768,-32768,    15,-32768,  1664,  1691,  2347,  1665,  2347,
  2347,    97,    97,    97,  1865,    97,-32768,-32768,-32768,  1670,
-32768,  2919,-32768,  1378,  1671,  1872,-32768,-32768,  1867,-32768,
  1875,-32768,  1876,-32768,  1877,  1678,  1878,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1077,  1077,  1077,    89,-32768,
-32768,-32768,  1881,-32768,  1883,-32768,-32768,  1682,  1677,-32768,
  2950,  1684,  1680,  2981,-32768,  1889,   221,   327,  1890,  3012,
-32768,  1896,   485,   606,   733,  1349,  3043,  1795,-32768,  1824,
  1903,  1845,  1866,  1909,-32768,-32768,  1887,  1915,-32768,  1970,
  1716,-32768,-32768,   175,   208,  1715,  1719,-32768,  2421,  1714,
   690,  2421,   725,   727,  1721,  1729,  1730,  1734,  1740,   512,
-32768,-32768,  4218,  1736,-32768,  1942,  1738,-32768,-32768,  1946,
  1981,-32768,-32768,-32768,  1988,  1989,  1990,  1992,-32768,-32768,
  1993,  1691,   252,  1691,  1994,  1997,    97,   357,-32768,-32768,
-32768,-32768,    97,   582,-32768,-32768,-32768,-32768,-32768,    97,
-32768,   618,-32768,-32768,-32768,-32768,-32768,   729,   991,-32768,
-32768,   732,-32768,  1996,  2005,  1617,-32768,  2010,-32768,-32768,
  3348,  1691,  1806,  3378,  1812,  1814,-32768,  2031,  2032,  2038,
  2039,  2054,  2421,  2421,  2421,  2421,  2421,-32768,-32768,  1853,
-32768,  1977,  2053,  1873,-32768,  1868,  1874,-32768,-32768,-32768,
-32768,-32768,  1884,  1966,  1879,-32768,  1886,  1882,-32768,  1895,
-32768,   215,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   160,
  1691,-32768,-32768,   722,  1634,-32768,  1902,-32768,-32768,  1892,
  2347,-32768,-32768,-32768,-32768,  2087,  1998,  2019,  2040,  2061,
  2082,-32768,  2092,-32768,-32768,-32768,  1077,  2102,  1906,  2421,
  2112,    97,  2421,  1910,  2421,   259,-32768,-32768,  2115,  2117,
  2118,-32768,-32768,  1919,-32768,-32768,  1691,  2421,   739,-32768,
-32768,-32768,-32768,-32768,-32768,  1920,  1917,  1922,  1923,-32768,
-32768,  4062,-32768,  1924,  3074,-32768,  4089,  2121,  2421,    97,
  2127,    89,  2129,-32768,-32768,  2128,  2130,  2132,    89,-32768,
  1928,  3105,  1930,-32768,  2136,  2137,  2138,  1150,  2140,  1925,
  2421,  1224,  1938,  2141,  2109,  2143,  2144,  2145,  2151,-32768,
-32768,-32768,  2156,-32768,-32768,  2421,  1953,-32768,-32768,-32768,
-32768,-32768,-32768,  4116,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1963,  3408,  2421,  2126,  1325,  1961,  1364,
  2167,-32768,  3136,    89,-32768,-32768,-32768,-32768,  2421,  2168,
  1794,  3167,-32768,-32768,  2421,  2069,  3438,  2172,-32768,   950,
  2171,  1968,-32768,  2186,  2191,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -130,-32768,-32768,  -286,   124,-32768,-32768,  1315,  -416,-32768,
  -430,-32768,  -364,  -440,  -470,-32768,-32768,-32768,-32768,  -355,
-32768,  -584,-32768,  -833,-32768,  -298,-32768,-32768,-32768,-32768,
-32768,-32768,  1544,-32768,  1216,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1681,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1439,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -907,  -587,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1273,-32768,
-32768,-32768,  1124,   986,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   820,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1742,-32768,  1673,-32768,  2098,-32768,
  1756,  2012,  -290,-32768,   409,  1320,-32768,-32768,   -25,  -483,
  -551,  -136,   -22,  -104
};


#define	YYLAST		4458


static const short yytable[] = {   101,
   187,   237,   104,   376,   557,  1050,   524,   988,   713,   505,
   403,   992,   465,   410,   411,   413,  1363,   537,   420,  1326,
   312,  1368,   313,   693,   694,     4,   547,  1374,   727,   551,
   702,   848,   555,   925,     6,  1382,   312,   522,   313,   230,
    40,  1388,  1389,     4,   205,   831,     4,   348,   655,   444,
   230,     4,     6,     6,     4,     6,   486,   832,   515,   501,
     6,   188,   813,     6,   503,   948,   312,   189,   313,   384,
   598,   163,   164,   165,     4,   777,   349,  1014,   518,  1017,
  1058,  1064,  1230,     6,   949,   231,   536,   546,   206,    25,
  1025,   230,   981,   230,   550,   515,   231,    -2,   554,  1137,
   835,   385,   836,   837,   231,   814,   541,   451,   386,   451,
  1327,    25,   451,   290,   451,   451,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   257,   258,   259,   312,   231,   313,   231,
   840,   231,   842,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   274,   275,   276,   277,   278,  1126,
   655,   655,   655,   655,    26,    27,   715,    30,    28,    26,
    27,  1026,   362,    28,   346,   452,   363,   452,  1276,  1277,
   452,  1027,   452,   452,   364,    49,   666,   778,   358,   779,
   780,   781,   184,   782,   783,   784,   785,   786,   185,  1163,
   359,   787,   464,   492,   788,   387,   833,   789,   189,   493,
   790,   791,   688,  1278,   792,   599,   740,   438,   741,   793,
   950,   794,    31,   495,  1279,   -58,  1328,  1370,   314,   493,
   310,   193,   194,    32,   926,   718,   342,  1538,   849,   343,
    33,   523,  1542,   232,   314,   412,    41,   655,   838,   201,
   202,   207,   210,   211,   232,   445,   777,   214,   215,   597,
   218,   219,   655,   655,   655,   655,   655,   655,   655,   655,
   655,   655,   655,   655,   655,   655,   655,   655,   488,   655,
   223,   224,   795,  1015,    34,  1018,  1059,  1065,   712,  1578,
   523,   523,  1580,   375,   481,   232,   118,   232,   523,   232,
  1010,   105,   523,   523,   927,    35,   428,   970,   716,   972,
   979,   516,  1591,   429,   430,   431,   197,   198,   432,   433,
   365,   436,   101,   440,  1518,   104,  1519,    36,   517,   -61,
  1280,   742,   895,  1371,   189,   189,   360,  1520,   -58,   804,
   199,   200,   896,   138,   897,   735,   736,   737,   738,  1521,
   569,   811,   571,   572,   573,   697,   809,   493,   698,   997,
   282,   777,   261,   262,  1522,   998,   655,  1062,   778,     6,
   779,   780,   781,    37,   782,   783,   784,   785,   786,   743,
    38,  1395,   787,   602,   890,   788,   891,  1396,   789,  -584,
    39,   790,   791,   892,   650,   792,   497,   499,   964,   116,
   793,   283,   794,   170,   171,   172,   173,   174,   367,   175,
   176,   177,   178,   512,  1398,   179,   180,   181,   182,   183,
  1396,  1484,   928,   184,   368,   936,   353,  1485,   354,   185,
   937,   119,   843,   120,   369,   370,  1523,  1353,   355,  1354,
   938,   940,   371,   953,   372,   939,   941,   851,   852,   853,
   854,   855,   856,   857,   858,   859,   860,   861,   862,   863,
   864,   865,   866,  1434,   870,   971,   973,   974,   975,    42,
  1524,    43,   980,   778,   699,   779,   780,   781,   898,   782,
   783,   784,   785,   786,   121,    44,   122,   787,   319,   262,
   788,  1376,  1100,   789,   500,   189,   790,   791,   123,  1034,
   792,  1035,   614,   124,  1051,   793,   655,   794,  1420,   170,
   171,   172,   173,   174,   655,   175,   176,   177,   178,   135,
   893,   179,   180,   181,   182,   183,   125,  1052,   126,   184,
   966,   967,   968,   969,  1135,   185,  1036,  1037,  1038,  1039,
  1040,  1041,  1042,   127,   982,   128,  1494,  1494,   136,   101,
   101,   995,   104,   104,   700,   701,   101,   703,  1159,   104,
   570,   262,   129,   708,   130,   711,  1138,   131,  1439,   714,
   373,  1070,   137,   808,   356,  1074,   607,   608,   378,   132,
  1412,  1413,  1414,  1415,  1416,  1417,   777,  1175,   379,    62,
    63,    64,   805,   806,   670,   671,   672,   673,   133,  1011,
  1012,   134,  1098,   380,   138,  1099,   139,   381,   140,   181,
   182,   183,  1377,    45,  1105,   184,  1107,   610,   611,   141,
  1032,   185,   777,  1114,   817,   818,   819,   820,   821,   822,
   823,   824,   825,   612,   613,   826,   656,   657,  1506,   827,
   659,   660,  1508,    46,    47,    48,   661,   662,  1043,  1053,
  1054,   142,   828,   663,   664,   143,  1085,   668,   669,   677,
   678,   798,   389,   954,   955,   956,   957,   170,   171,   172,
   173,   174,   144,   175,   176,   177,   178,   390,   145,   179,
   180,   181,   182,   183,   146,  1330,   147,   184,  1355,  1356,
  1357,  1123,   148,   185,   816,   391,   681,   682,   778,  1128,
   779,   780,   781,   149,   782,   783,   784,   785,   786,   150,
   674,   151,   787,   689,   262,   788,   690,   262,   789,   152,
  1574,   790,   791,  1418,   382,   792,   691,   262,   153,   392,
   793,   154,   794,   777,   778,  1000,   779,   780,   781,  1378,
   782,   783,   784,   785,   786,   155,  1245,   186,   787,   692,
   262,   788,   607,   721,   789,  1166,   191,   790,   791,   156,
  1168,   792,   959,   262,   874,   222,   793,   157,   794,   875,
   655,   960,   961,   876,   877,   878,  1261,  1094,   262,  1095,
   262,  1263,   158,  1265,  1489,   829,  1490,  1491,   170,   171,
   172,   173,   174,  1441,   175,   176,   177,   178,   393,   227,
   179,   180,   181,   182,   183,  1096,   262,   159,   184,   160,
  1433,  1283,  1435,  1061,   185,  1063,  1285,   161,  1097,   262,
   238,  1036,  1037,  1038,  1039,  1040,  1041,  1492,   239,  1443,
  1288,  1130,   262,   279,  1292,  1250,  1248,  1249,  1296,  1086,
   280,  1299,  1255,   281,  1452,   778,  1302,   779,   780,   781,
  1457,   782,   783,   784,   785,   786,   291,  1311,   297,   787,
   320,  1193,   788,   318,  1194,   789,  1262,   189,   790,   791,
   347,  1321,   792,   321,  1195,  1196,  1197,   793,   352,   794,
  1264,   189,   404,   405,   406,   407,  1335,  1336,  1337,  1509,
  1339,  1282,   189,   101,  1284,   189,   104,   421,   879,  1488,
   408,  1403,   262,   395,  1293,   757,   758,   759,   760,   414,
  1078,   761,  1080,   415,  1082,   170,   171,   172,   173,   174,
   416,   175,   176,   177,   178,   417,  1092,   179,   180,   181,
   182,   183,   422,  1493,   418,   184,  1405,   262,  1406,   262,
  1444,   185,  1446,  1447,   423,  1531,   427,    66,    67,    68,
  1533,   262,   425,  1210,   434,  1343,    70,    71,  1198,    72,
    73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,   881,   441,   882,   883,   884,   885,
   886,   887,  1358,   706,   707,   777,   442,   446,  1002,  1003,
  1211,   447,   448,   449,   450,  1201,   455,   456,  1202,   457,
   458,  1438,   459,   460,    66,    67,   162,  1440,  1203,  1204,
  1212,  1213,  1205,  1206,  1442,   462,    72,    73,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,   461,   463,   466,   467,    66,    67,   616,   468,   469,
   470,   471,   473,  1214,   474,   475,  1535,    72,    73,    74,
    75,    76,   617,   618,   619,   620,   621,   622,   623,   624,
   625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
   635,   636,   637,   638,   639,   640,   641,  1215,  1252,   476,
   478,  1331,  1207,  1333,  1334,   479,   480,   778,   482,   779,
   780,   781,   483,   782,   783,   784,   785,   786,   396,   484,
   888,   787,   485,   487,   788,   489,  1514,   789,   490,  1601,
   790,   791,   169,   491,   792,   502,   506,   511,   519,   793,
    97,   794,   521,   526,   528,    98,   529,   530,    99,   533,
   535,   542,   642,   543,   777,   544,   236,   397,   545,   553,
   310,   558,   559,  1291,  1546,   561,  1294,   563,   564,  1297,
  1298,   565,   567,   574,  1300,   568,   594,  1303,  1304,  1305,
  1306,   595,   603,  1307,  1308,   604,  1310,   398,  1312,   399,
   605,  1313,   439,   609,   615,  1317,  1318,   658,  1320,   665,
   667,   676,  1445,   680,   683,   685,   696,    97,   686,   704,
   400,   101,    98,   687,   104,    99,  1036,  1037,  1038,  1039,
  1040,  1041,  1047,   498,   175,   176,   177,   178,   777,   695,
   179,   180,   181,   182,   183,  1548,   709,   712,   184,   719,
   726,   643,  1553,   720,   185,   728,   730,   644,   645,   731,
   734,   739,   744,   646,   401,   762,   647,   763,   770,   868,
   869,   648,   649,   650,   772,   773,   778,   774,   779,   780,
   781,   799,   782,   783,   784,   785,   786,   775,   800,   801,
   787,   802,   803,   788,   807,   812,   789,   650,   841,   790,
   791,   844,   845,   792,   761,   846,   867,  1590,   793,   872,
   794,   935,   929,  1401,   930,   931,  1404,   170,   171,   172,
   173,   174,   932,   175,   176,   177,   178,   933,   934,   179,
   180,   181,   182,   183,  1499,   943,   942,   184,  1048,   777,
   958,   944,   945,   185,   962,   963,   101,   977,   101,   104,
   778,   104,   779,   780,   781,  1487,   782,   783,   784,   785,
   786,   978,   976,   991,   787,  1379,   983,   788,   984,   985,
   789,  1561,   986,   790,   791,   994,   987,   792,   777,   989,
   101,   993,   793,   104,   794,   996,   101,  1001,   813,   104,
    66,    67,   616,  1005,  1006,  1007,  1008,  1467,  1468,  1469,
  1470,  1471,    72,    73,    74,    75,    76,   617,   618,   619,
   620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
   630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
   640,   641,  1009,  1013,  1020,   101,  1021,   196,   104,  1022,
   204,   209,   213,   217,   221,  1565,   226,  1023,  1024,  1028,
  1029,   778,  1030,   779,   780,   781,  1031,   782,   783,   784,
   785,   786,  1056,  1057,  1512,   787,  1067,  1515,   788,  1517,
  1068,   789,  1069,  1071,   790,   791,  1072,  1073,   792,  1075,
  1076,   101,  1532,   793,   104,   794,  1077,   642,  1087,  1088,
   778,   915,   779,   780,   781,  1089,   782,   783,   784,   785,
   786,   916,  1090,  1545,   787,  1091,  1093,   788,  1101,  1102,
   789,  1103,  1104,   790,   791,  1106,  1108,   792,  1109,  1110,
  1111,   285,   793,  1112,   794,  1564,  1113,  1115,  1116,  1117,
  1120,  1121,  1122,  1124,   917,   918,   919,   920,   921,   922,
  1575,   170,   171,   172,   173,   174,  1585,   175,   176,   177,
   178,  1125,  1129,   179,   180,   181,   182,   183,  1131,  1132,
  1583,   184,  1133,  1134,  1136,  1139,  1141,   185,  1167,  1142,
  1143,  1144,  1145,  1592,  1147,  1149,   643,  1150,  1151,  1597,
  1152,  1153,   644,   645,  1154,  1587,  1155,  1156,   646,  1157,
  1158,   647,    66,    67,   437,    69,   648,   649,   650,  1160,
  1161,    70,    71,  1162,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    66,
    67,    68,  1164,  1165,  1170,  1171,  1169,   923,    70,    71,
   231,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,    66,    67,    68,    69,
  1237,  1173,  1174,  1177,  1178,    70,    71,  1179,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    66,    67,    68,  1489,  1186,  1490,  1491,
  1180,  1182,    70,    71,  1183,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    66,    67,   162,  1036,  1037,  1038,  1039,  1040,  1041,  1492,
  1184,  1185,    72,    73,    74,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,  1235,  1247,  1187,
   179,   180,   181,   182,   183,    97,  1238,  1240,   184,  1450,
    98,  1188,  1451,    99,   185,  1256,  1257,  1259,   232,  1189,
   100,  1190,  1228,  1191,  1034,  1229,  1035,  1227,   777,  1239,
  1241,  1381,   299,   300,   301,   302,   303,   304,   305,   306,
   307,  1242,    97,  1243,  1244,   189,  1246,    98,  1253,  1258,
    99,   755,   756,   757,   758,   759,   760,   100,  1260,   761,
  1383,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1267,   900,
  1268,   901,   902,  1269,  1270,  1496,  1272,  1274,  1275,    97,
  1286,  1385,   903,  1287,    98,  1289,  1290,    99,  1295,  1301,
  1314,  1309,  1315,  1316,   100,  1322,  1323,  1338,   904,   905,
   906,  1346,  1386,  1319,  1329,  1332,  1341,  1344,  1345,  1347,
  1348,  1349,   907,  1350,  1352,  1359,    97,  1360,  1361,  1362,
  1365,    98,  1366,  1390,    99,  1369,  1372,   751,   752,   753,
   754,   100,  1375,   755,   756,   757,   758,   759,   760,  1384,
   778,   761,   779,   780,   781,  1387,   782,   783,   784,   785,
   786,  1391,  1394,    97,   787,  1399,  1402,   788,    98,  1400,
   789,    99,  1407,   790,   791,  1408,  1409,   792,   710,    66,
    67,   162,   793,  1046,   794,  1410,  1411,  1421,  1422,  1423,
  1424,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,  1393,   170,   171,   172,
   173,   174,   908,   175,   176,   177,   178,  1425,   909,   179,
   180,   181,   182,   183,  1428,  1429,  1430,   184,  1431,  1432,
  1436,  1437,  1448,   185,  1501,  1594,   170,   171,   172,   173,
   174,  1449,   175,   176,   177,   178,  1453,  1458,   179,   180,
   181,   182,   183,  1460,  1461,  1502,   184,   170,   171,   172,
   173,   174,   185,   175,   176,   177,   178,  1462,  1463,   179,
   180,   181,   182,   183,  1464,  1465,  1503,   184,   170,   171,
   172,   173,   174,   185,   175,   176,   177,   178,  1466,  1474,
   179,   180,   181,   182,   183,  1472,  1473,  1504,   184,   170,
   171,   172,   173,   174,   185,   175,   176,   177,   178,  1475,
  1476,   179,   180,   181,   182,   183,  1477,  1479,  1505,   184,
  1478,  1480,  1481,  1500,  1482,   185,  1507,   170,   171,   172,
   173,   174,  1498,   175,   176,   177,   178,  1483,  1510,   179,
   180,   181,   182,   183,  1497,  1568,  1511,   184,  1513,  1526,
  1516,  1527,  1528,   185,  1530,  1544,  1534,   523,  1536,  1537,
  1540,  1547,    97,  1549,  1550,  1563,  1551,    98,  1552,  1555,
    99,  1557,  1558,  1559,  1560,   439,  1562,  1567,  1566,  1569,
  1570,  1571,   170,   171,   172,   173,   174,  1572,   175,   176,
   177,   178,  1573,  1576,   179,   180,   181,   182,   183,  1581,
  1584,  1586,   184,  1588,  1593,  1598,  1600,  1602,   185,  1603,
   170,   171,   172,   173,   174,  1605,   175,   176,   177,   178,
  1606,  1004,   179,   180,   181,   182,   183,   765,  1118,   606,
   184,   170,   171,   172,   173,   174,   185,   175,   176,   177,
   178,   912,  1233,   179,   180,   181,   182,   183,  1325,  1455,
   562,   184,   170,   171,   172,   173,   174,   185,   175,   176,
   177,   178,   684,   229,   179,   180,   181,   182,   183,   566,
   309,     0,   184,   170,   171,   172,   173,   174,   185,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,   170,   171,   172,   173,   174,   185,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,    66,    67,    68,     0,     0,   185,     0,     0,
     0,    70,    71,     0,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    66,
    67,    68,     0,     0,     0,     0,     0,     0,    70,    71,
   999,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,    66,    67,   162,   435,
     0,     0,     0,     0,     0,     0,     0,     0,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    66,    67,   162,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
   496,    67,   162,     0,  1217,     0,     0,     0,     0,     0,
     0,     0,    72,    73,    74,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,   344,     0,    50,
     0,     0,     0,    51,  1218,    97,     0,     0,     0,     0,
    98,  1219,  1220,    99,     0,   172,   173,   174,   345,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,  1221,     0,   184,  1222,  1223,     0,     0,     0,   185,
     0,    52,    97,     0,     0,  1127,    53,    98,     0,     0,
    99,     0,     0,     0,     0,     0,     0,     0,     0,    54,
     0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    56,     0,     0,  1224,    57,     0,     0,     0,    97,
     0,     0,     0,     0,    98,     0,    58,    99,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,    59,     0,   184,     0,     0,  1225,     0,
     0,   185,     0,     0,     0,     0,    97,     0,     0,     0,
     0,    98,     0,     0,    99,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
    61,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    97,     0,     0,   575,     0,    98,     0,
     0,    99,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,   170,   171,   172,   173,   174,   185,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
   576,     0,     0,   184,     0,     0,     0,     0,     0,   185,
   745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     0,     0,   755,   756,   757,   758,   759,   760,     4,   577,
   761,     0,     0,     5,     0,     0,     0,     6,     0,     0,
     0,   578,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   579,   580,   581,   582,   583,   584,   585,   586,
   587,   588,   589,   590,   591,   592,   593,     0,     7,     0,
     0,     0,     0,     8,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     9,     0,    10,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
     0,     0,    12,   745,   746,   747,   748,   749,   750,   751,
   752,   753,   754,    13,     0,   755,   756,   757,   758,   759,
   760,     0,     0,   761,     0,     0,     0,     0,     0,     0,
    14,     0,     0,   990,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,     0,     0,     0,   332,    15,     0,    16,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,     0,     0,   185,     0,     0,     0,   339,     0,
     0,     0,    17,    18,    19,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,     0,   340,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
     0,     0,   185,     0,     0,     0,   341,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,     0,     0,   185,     0,     0,     0,   952,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,     0,     0,   185,     0,     0,     0,  1192,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,     0,  1200,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,     0,
  1209,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,     0,     0,   185,     0,     0,
     0,  1342,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,     0,     0,   185,     0,
     0,     0,  1364,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,     0,     0,   185,
     0,     0,     0,  1367,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,     0,     0,     0,  1373,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,     0,  1380,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
     0,     0,   185,     0,     0,     0,  1541,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,     0,     0,   185,     0,     0,     0,  1556,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,     0,     0,   185,     0,     0,     0,  1589,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,     0,  1595,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,   513,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,   596,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,   601,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,   965,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,  1236,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,  1456,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,  1459,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,  1582,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,  1599,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,   260,     0,     0,     0,   185,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,   322,     0,   185,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,   323,     0,
   185,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,   324,     0,   185,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,   325,     0,   185,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,   326,
     0,   185,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,   327,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,   328,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
   329,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,   330,     0,   185,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,   331,     0,   185,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,   333,     0,   185,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,   334,     0,
   185,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,   335,     0,   185,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,   336,     0,   185,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,   337,
     0,   185,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,   338,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,   507,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
   508,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,   509,     0,   185,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,   510,     0,   185,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,   725,     0,   185,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,  1539,     0,
   185,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,  1543,     0,   185,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,  1579,     0,   185,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,   745,   746,   747,   748,   749,   750,   751,   752,
   753,   754,     0,     0,   755,   756,   757,   758,   759,   760,
     0,     0,   761,     0,     0,     0,  1251,   745,   746,   747,
   748,   749,   750,   751,   752,   753,   754,     0,     0,   755,
   756,   757,   758,   759,   760,     0,     0,   761,     0,   847,
   745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     0,     0,   755,   756,   757,   758,   759,   760,     0,     0,
   761,   747,   748,   749,   750,   751,   752,   753,   754,     0,
     0,   755,   756,   757,   758,   759,   760,     0,     0,   761,
   748,   749,   750,   751,   752,   753,   754,     0,     0,   755,
   756,   757,   758,   759,   760,     0,     0,   761
};

static const short yycheck[] = {    25,
   105,   138,    25,   290,   475,   913,   447,   841,   593,   426,
   297,   845,   377,   300,   301,   302,  1290,   458,   309,     5,
     3,  1295,     5,   575,   576,     5,   467,  1301,   616,   470,
   582,     5,   473,     5,    14,  1309,     3,     7,     5,     5,
     5,  1315,  1316,     5,     5,    51,     5,   182,   532,     5,
     5,     5,    14,    14,     5,    14,   412,    63,     5,   424,
    14,   207,     5,    14,    47,    57,     3,   213,     5,    76,
   501,    97,    98,    99,     5,     5,   211,     5,   443,     5,
     5,     5,     5,    14,    76,    51,     7,     7,    49,   182,
     5,     5,    47,     5,     7,     5,    51,     0,     7,     7,
    64,   108,    66,    67,    51,    48,   462,    11,   115,    11,
    96,   182,    11,   206,    11,    11,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,     3,    51,     5,    51,
   728,    51,   730,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   993,
   644,   645,   646,   647,     5,     6,   597,   206,     9,     5,
     6,    86,    64,     9,   279,    79,    68,    79,    60,    61,
    79,    96,    79,    79,    76,     7,   542,   117,    64,   119,
   120,   121,   203,   123,   124,   125,   126,   127,   209,  1033,
    76,   131,   207,   207,   134,   212,   212,   137,   213,   213,
   140,   141,   568,    95,   144,   502,     3,   348,     5,   149,
   212,   151,   211,   207,   106,   206,   212,     7,   211,   213,
   211,   211,   212,   211,   206,   600,   262,  1511,   212,   262,
   211,   211,  1516,   209,   211,   211,   211,   731,   212,   211,
   212,   212,   211,   212,   209,   211,     5,   211,   212,   196,
   211,   212,   746,   747,   748,   749,   750,   751,   752,   753,
   754,   755,   756,   757,   758,   759,   760,   761,   415,   763,
   211,   212,   212,   211,   211,   211,   211,   211,   211,  1563,
   211,   211,  1566,   207,   399,   209,     7,   209,   211,   209,
   885,   206,   211,   211,   206,   211,   332,   206,   599,   206,
   206,   442,  1586,   339,   340,   341,   211,   212,   344,   345,
   212,   347,   348,   349,    66,   348,    68,   211,   207,   207,
   212,   118,    66,     7,   213,   213,   212,    79,   206,   695,
   211,   212,    76,   211,    78,   644,   645,   646,   647,    91,
   487,   207,   489,   490,   491,   191,   712,   213,   194,   207,
     5,     5,   212,   213,   106,   213,   850,   919,   117,    14,
   119,   120,   121,   211,   123,   124,   125,   126,   127,   166,
   211,   207,   131,   514,    76,   134,    78,   213,   137,   206,
   211,   140,   141,    85,   211,   144,   422,   423,   815,   146,
   149,    46,   151,   183,   184,   185,   186,   187,    50,   189,
   190,   191,   192,   439,   207,   195,   196,   197,   198,   199,
   213,   207,   778,   203,    66,   206,    64,   213,    66,   209,
   211,     7,   731,     7,    76,    77,   178,  1271,    76,  1273,
   206,   206,    84,   799,    86,   211,   211,   746,   747,   748,
   749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
   759,   760,   761,   212,   763,   821,   822,   823,   824,     5,
   212,     7,   828,   117,   579,   119,   120,   121,   212,   123,
   124,   125,   126,   127,     7,    21,     7,   131,   212,   213,
   134,     7,   963,   137,   212,   213,   140,   141,     7,    63,
   144,    65,   528,     7,    66,   149,   990,   151,  1342,   183,
   184,   185,   186,   187,   998,   189,   190,   191,   192,   206,
   212,   195,   196,   197,   198,   199,     7,    89,     7,   203,
   817,   818,   819,   820,  1005,   209,   100,   101,   102,   103,
   104,   105,   106,     7,   831,     7,  1454,  1455,   206,   575,
   576,   850,   575,   576,   580,   581,   582,   583,  1029,   582,
   212,   213,     7,   589,     7,   591,  1007,     7,   212,   595,
   212,   927,   206,   710,   212,   931,   211,   212,    66,     7,
    69,    70,    71,    72,    73,    74,     5,  1058,    76,   148,
   149,   150,   697,   698,    96,    97,    98,    99,     7,   886,
   887,     7,   958,    91,   211,   961,     7,    95,   206,   197,
   198,   199,     7,   149,   970,   203,   972,   211,   212,   206,
   907,   209,     5,   979,    51,    52,    53,    54,    55,    56,
    57,    58,    59,   211,   212,    62,   211,   212,  1472,    66,
   211,   212,  1476,   179,   180,   181,   211,   212,   212,   211,
   212,   206,    79,   211,   212,   206,   943,   211,   212,   211,
   212,   687,    76,   800,   801,   802,   803,   183,   184,   185,
   186,   187,   206,   189,   190,   191,   192,    91,   206,   195,
   196,   197,   198,   199,   206,  1237,   206,   203,  1276,  1277,
  1278,   990,   206,   209,   720,   109,   211,   212,   117,   998,
   119,   120,   121,   206,   123,   124,   125,   126,   127,   206,
   212,   206,   131,   212,   213,   134,   212,   213,   137,   206,
  1554,   140,   141,   212,   212,   144,   212,   213,   206,   143,
   149,   206,   151,     5,   117,   872,   119,   120,   121,     7,
   123,   124,   125,   126,   127,   206,  1111,     7,   131,   212,
   213,   134,   211,   212,   137,  1042,   212,   140,   141,   206,
  1047,   144,   212,   213,    78,     5,   149,   206,   151,    83,
  1254,   212,   213,    87,    88,    89,  1141,   212,   213,   212,
   213,  1146,   206,  1148,    63,   212,    65,    66,   183,   184,
   185,   186,   187,   212,   189,   190,   191,   192,   212,     5,
   195,   196,   197,   198,   199,   212,   213,   206,   203,   206,
  1362,  1176,  1364,   918,   209,   920,  1181,   206,   212,   213,
     5,   100,   101,   102,   103,   104,   105,   106,     5,   212,
  1186,   212,   213,   213,  1190,  1122,   211,   212,  1194,   944,
     7,  1197,  1129,     5,  1396,   117,  1202,   119,   120,   121,
  1402,   123,   124,   125,   126,   127,   206,  1213,   206,   131,
   207,   115,   134,   206,   118,   137,   212,   213,   140,   141,
   182,  1227,   144,   213,   128,   129,   130,   149,   206,   151,
   212,   213,   195,   196,   197,   198,  1242,  1243,  1244,  1477,
  1246,   212,   213,   919,   212,   213,   919,   212,   212,  1451,
   213,   212,   213,   211,  1191,   197,   198,   199,   200,   211,
   936,   203,   938,   211,   940,   183,   184,   185,   186,   187,
   211,   189,   190,   191,   192,   211,   952,   195,   196,   197,
   198,   199,     8,   212,   211,   203,   212,   213,   212,   213,
   212,   209,   211,   212,   211,  1497,     5,     3,     4,     5,
   212,   213,   213,    68,   207,  1254,    12,    13,   212,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    76,   182,    78,    79,    80,    81,
    82,    83,  1279,   585,   586,     5,   182,     5,   875,   876,
   115,     5,   211,     5,   211,   115,     5,   211,   118,     5,
     5,  1367,   211,   211,     3,     4,     5,  1373,   128,   129,
   135,   136,   132,   133,  1380,   182,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,   211,   207,     5,     5,     3,     4,     5,   211,   211,
     5,   211,     5,   178,   211,     5,  1507,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,   212,  1124,     5,
     5,  1238,   212,  1240,  1241,   211,     5,   117,     5,   119,
   120,   121,   207,   123,   124,   125,   126,   127,    76,     5,
   212,   131,   162,   211,   134,   211,  1482,   137,   211,  1600,
   140,   141,     8,   211,   144,   106,   207,     7,   211,   149,
   196,   151,     7,     7,   206,   201,   206,     7,   204,     7,
     7,   182,   100,     7,     5,     5,   212,   115,     7,   211,
   211,     7,   212,  1189,  1520,     7,  1192,     7,     7,  1195,
  1196,     7,     5,     7,  1200,   213,     7,  1203,  1204,  1205,
  1206,     8,     7,  1209,  1210,     7,  1212,   145,  1214,   147,
     5,  1217,   209,     7,     5,  1221,  1222,     7,  1224,     7,
     7,     7,   212,     7,     7,   212,     5,   196,   213,     5,
   168,  1237,   201,   211,  1237,   204,   100,   101,   102,   103,
   104,   105,   106,   212,   189,   190,   191,   192,     5,   211,
   195,   196,   197,   198,   199,  1522,     5,   211,   203,     7,
   207,   189,  1529,   211,   209,   206,   206,   195,   196,   206,
     5,     3,     5,   201,   212,   209,   204,   206,     7,   207,
   208,   209,   210,   211,   211,   211,   117,   211,   119,   120,
   121,   213,   123,   124,   125,   126,   127,   211,   211,   211,
   131,   211,   211,   134,     6,   207,   137,   211,   206,   140,
   141,   206,   206,   144,   203,   191,     3,  1584,   149,   211,
   151,     7,   206,  1329,   206,   206,  1332,   183,   184,   185,
   186,   187,   206,   189,   190,   191,   192,   206,   206,   195,
   196,   197,   198,   199,  1461,   206,   211,   203,   212,     5,
   213,   206,   206,   209,     7,     5,  1362,     5,  1364,  1362,
   117,  1364,   119,   120,   121,  1450,   123,   124,   125,   126,
   127,     5,   211,     3,   131,     7,     5,   134,   211,     5,
   137,   212,     5,   140,   141,   212,   207,   144,     5,   207,
  1396,   206,   149,  1396,   151,   207,  1402,     5,     5,  1402,
     3,     4,     5,     5,     5,     5,     5,  1413,  1414,  1415,
  1416,  1417,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,   211,     5,     5,  1451,     5,   108,  1451,     5,
   111,   112,   113,   114,   115,   212,   117,     5,     5,     5,
     5,   117,     3,   119,   120,   121,     3,   123,   124,   125,
   126,   127,     5,     5,  1480,   131,     5,  1483,   134,  1485,
     7,   137,     5,     7,   140,   141,     5,     5,   144,     5,
     5,  1497,  1498,   149,  1497,   151,     5,   100,     5,   206,
   117,    66,   119,   120,   121,   206,   123,   124,   125,   126,
   127,    76,   211,  1519,   131,     5,   212,   134,     7,     7,
   137,     7,     7,   140,   141,     7,     7,   144,     7,     7,
     3,   192,   149,     7,   151,  1541,     7,     7,     7,     7,
     7,     7,   213,   213,   109,   110,   111,   112,   113,   114,
  1556,   183,   184,   185,   186,   187,   212,   189,   190,   191,
   192,   207,   206,   195,   196,   197,   198,   199,     7,    89,
  1576,   203,     7,     7,     7,   211,     5,   209,   206,     7,
     7,     7,     7,  1589,     7,     7,   189,     7,     7,  1595,
     7,     7,   195,   196,     7,   212,     7,     7,   201,     7,
     7,   204,     3,     4,     5,     6,   209,   210,   211,     7,
     7,    12,    13,     7,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,     3,
     4,     5,     5,     5,     5,     5,   206,   212,    12,    13,
    51,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,     3,     4,     5,     6,
   211,     7,     7,     7,     7,    12,    13,     7,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,     3,     4,     5,    63,   213,    65,    66,
     7,     7,    12,    13,     7,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     3,     4,     5,   100,   101,   102,   103,   104,   105,   106,
   207,   207,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,     7,     7,   213,
   195,   196,   197,   198,   199,   196,   211,   211,   203,   163,
   201,   207,   166,   204,   209,     5,     7,    91,   209,   213,
   211,   213,   207,   213,    63,   207,    65,   213,     5,   212,
   211,     7,   153,   154,   155,   156,   157,   158,   159,   160,
   161,   213,   196,   213,   213,   213,   213,   201,   207,     7,
   204,   195,   196,   197,   198,   199,   200,   211,     7,   203,
     7,   100,   101,   102,   103,   104,   105,   106,   207,    63,
     7,    65,    66,     7,     7,   212,     7,     7,     7,   196,
     7,     7,    76,     7,   201,     5,   211,   204,   211,   211,
     5,   211,   211,   211,   211,     7,     7,     3,    92,    93,
    94,     5,     7,   211,   211,   211,   207,   207,     7,     5,
     5,     5,   106,   206,     7,     5,   196,     5,   207,   213,
   207,   201,   213,     7,   204,     7,     7,   189,   190,   191,
   192,   211,     7,   195,   196,   197,   198,   199,   200,     7,
   117,   203,   119,   120,   121,     7,   123,   124,   125,   126,
   127,     7,   207,   196,   131,   211,   213,   134,   201,   211,
   137,   204,   212,   140,   141,   207,   207,   144,   211,     3,
     4,     5,   149,   212,   151,   212,   207,   212,     7,   212,
     5,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,     7,   183,   184,   185,
   186,   187,   206,   189,   190,   191,   192,     7,   212,   195,
   196,   197,   198,   199,     7,     7,     7,   203,     7,     7,
     7,     5,     7,   209,     7,   212,   183,   184,   185,   186,
   187,     7,   189,   190,   191,   192,     7,   212,   195,   196,
   197,   198,   199,   212,   211,     7,   203,   183,   184,   185,
   186,   187,   209,   189,   190,   191,   192,     7,     7,   195,
   196,   197,   198,   199,     7,     7,     7,   203,   183,   184,
   185,   186,   187,   209,   189,   190,   191,   192,     5,     7,
   195,   196,   197,   198,   199,   213,    90,     7,   203,   183,
   184,   185,   186,   187,   209,   189,   190,   191,   192,   207,
   213,   195,   196,   197,   198,   199,   213,   122,     7,   203,
   207,   213,   207,     7,   213,   209,     5,   183,   184,   185,
   186,   187,   211,   189,   190,   191,   192,   213,     7,   195,
   196,   197,   198,   199,   213,     7,   211,   203,     7,     5,
   211,     5,     5,   209,   206,     5,   207,   211,   207,   207,
   207,     5,   196,     5,     7,   211,     7,   201,     7,   212,
   204,   212,     7,     7,     7,   209,     7,     7,   211,     7,
     7,     7,   183,   184,   185,   186,   187,     7,   189,   190,
   191,   192,     7,   211,   195,   196,   197,   198,   199,   207,
    45,   211,   203,     7,     7,   107,     5,     7,   209,   212,
   183,   184,   185,   186,   187,     0,   189,   190,   191,   192,
     0,   877,   195,   196,   197,   198,   199,   654,   983,   519,
   203,   183,   184,   185,   186,   187,   209,   189,   190,   191,
   192,   773,  1089,   195,   196,   197,   198,   199,  1233,  1400,
   479,   203,   183,   184,   185,   186,   187,   209,   189,   190,
   191,   192,   560,   136,   195,   196,   197,   198,   199,   484,
   229,    -1,   203,   183,   184,   185,   186,   187,   209,   189,
   190,   191,   192,    -1,    -1,   195,   196,   197,   198,   199,
    -1,    -1,    -1,   203,   183,   184,   185,   186,   187,   209,
   189,   190,   191,   192,    -1,    -1,   195,   196,   197,   198,
   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
   209,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
   192,    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,
    -1,   203,     3,     4,     5,    -1,    -1,   209,    -1,    -1,
    -1,    12,    13,    -1,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,     3,
     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
    51,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,     3,     4,     5,     6,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,     3,     4,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     3,     4,     5,    -1,    68,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,     8,    -1,     3,
    -1,    -1,    -1,     7,   108,   196,    -1,    -1,    -1,    -1,
   201,   115,   116,   204,    -1,   185,   186,   187,     8,   189,
   190,   191,   192,    -1,    -1,   195,   196,   197,   198,   199,
    -1,   135,    -1,   203,   138,   139,    -1,    -1,    -1,   209,
    -1,    45,   196,    -1,    -1,     8,    50,   201,    -1,    -1,
   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    75,    -1,    -1,   178,    79,    -1,    -1,    -1,   196,
    -1,    -1,    -1,    -1,   201,    -1,    90,   204,   186,   187,
    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,   197,
   198,   199,    -1,   107,    -1,   203,    -1,    -1,   212,    -1,
    -1,   209,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,
    -1,   201,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,    -1,
   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   196,    -1,    -1,    57,    -1,   201,    -1,
    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   183,   184,   185,   186,   187,    -1,   189,   190,
   191,   192,    -1,    -1,   195,   196,   197,   198,   199,    -1,
    -1,    -1,   203,   183,   184,   185,   186,   187,   209,   189,
   190,   191,   192,    -1,    -1,   195,   196,   197,   198,   199,
   111,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,   209,
   183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,   200,     5,   140,
   203,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,    -1,
    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   163,   164,   165,   166,   167,   168,   169,   170,
   171,   172,   173,   174,   175,   176,   177,    -1,    45,    -1,
    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,
    -1,    -1,    79,   183,   184,   185,   186,   187,   188,   189,
   190,   191,   192,    90,    -1,   195,   196,   197,   198,   199,
   200,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
   107,    -1,    -1,   213,   183,   184,   185,   186,   187,    -1,
   189,   190,   191,   192,    -1,    -1,   195,   196,   197,   198,
   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
   209,    -1,    -1,    -1,   213,   142,    -1,   144,   183,   184,
   185,   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,
   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,
    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,    -1,
    -1,    -1,   179,   180,   181,   183,   184,   185,   186,   187,
    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,   197,
   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
    -1,   209,    -1,    -1,    -1,   213,   183,   184,   185,   186,
   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,
   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,
    -1,    -1,   209,    -1,    -1,    -1,   213,   183,   184,   185,
   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,
   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,
    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,   183,   184,
   185,   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,
   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,
    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,   183,
   184,   185,   186,   187,    -1,   189,   190,   191,   192,    -1,
    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,
    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,
   213,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
   192,    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,
    -1,   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,
    -1,   213,   183,   184,   185,   186,   187,    -1,   189,   190,
   191,   192,    -1,    -1,   195,   196,   197,   198,   199,    -1,
    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,
    -1,    -1,   213,   183,   184,   185,   186,   187,    -1,   189,
   190,   191,   192,    -1,    -1,   195,   196,   197,   198,   199,
    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,   209,
    -1,    -1,    -1,   213,   183,   184,   185,   186,   187,    -1,
   189,   190,   191,   192,    -1,    -1,   195,   196,   197,   198,
   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
   209,    -1,    -1,    -1,   213,   183,   184,   185,   186,   187,
    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,   197,
   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
    -1,   209,    -1,    -1,    -1,   213,   183,   184,   185,   186,
   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,
   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,
    -1,    -1,   209,    -1,    -1,    -1,   213,   183,   184,   185,
   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,
   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,
    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,   183,   184,
   185,   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,
   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,
    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,   183,
   184,   185,   186,   187,    -1,   189,   190,   191,   192,    -1,
    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,
    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,    -1,   213,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,   205,    -1,    -1,    -1,   209,   183,   184,   185,
   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,
   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,
    -1,   207,    -1,   209,   183,   184,   185,   186,   187,    -1,
   189,   190,   191,   192,    -1,    -1,   195,   196,   197,   198,
   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,    -1,
   209,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
   192,    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,
    -1,   203,    -1,    -1,    -1,   207,    -1,   209,   183,   184,
   185,   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,
   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,
    -1,    -1,   207,    -1,   209,   183,   184,   185,   186,   187,
    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,   197,
   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,
    -1,   209,   183,   184,   185,   186,   187,    -1,   189,   190,
   191,   192,    -1,    -1,   195,   196,   197,   198,   199,    -1,
    -1,    -1,   203,    -1,    -1,    -1,   207,    -1,   209,   183,
   184,   185,   186,   187,    -1,   189,   190,   191,   192,    -1,
    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,
    -1,    -1,    -1,   207,    -1,   209,   183,   184,   185,   186,
   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,
   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,
   207,    -1,   209,   183,   184,   185,   186,   187,    -1,   189,
   190,   191,   192,    -1,    -1,   195,   196,   197,   198,   199,
    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,    -1,   209,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,   207,    -1,   209,   183,   184,   185,
   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,
   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,
    -1,   207,    -1,   209,   183,   184,   185,   186,   187,    -1,
   189,   190,   191,   192,    -1,    -1,   195,   196,   197,   198,
   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,    -1,
   209,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
   192,    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,
    -1,   203,    -1,    -1,    -1,   207,    -1,   209,   183,   184,
   185,   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,
   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,
    -1,    -1,   207,    -1,   209,   183,   184,   185,   186,   187,
    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,   197,
   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,
    -1,   209,   183,   184,   185,   186,   187,    -1,   189,   190,
   191,   192,    -1,    -1,   195,   196,   197,   198,   199,    -1,
    -1,    -1,   203,    -1,    -1,    -1,   207,    -1,   209,   183,
   184,   185,   186,   187,    -1,   189,   190,   191,   192,    -1,
    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,
    -1,    -1,    -1,   207,    -1,   209,   183,   184,   185,   186,
   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,
   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,
   207,    -1,   209,   183,   184,   185,   186,   187,    -1,   189,
   190,   191,   192,    -1,    -1,   195,   196,   197,   198,   199,
    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,    -1,   209,
   183,   184,   185,   186,   187,    -1,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,    -1,
   203,    -1,    -1,    -1,   207,    -1,   209,   183,   184,   185,
   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,   195,
   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,    -1,
    -1,   207,    -1,   209,   183,   184,   185,   186,   187,    -1,
   189,   190,   191,   192,    -1,    -1,   195,   196,   197,   198,
   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,   207,    -1,
   209,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
   192,    -1,    -1,   195,   196,   197,   198,   199,    -1,    -1,
    -1,   203,    -1,    -1,    -1,   207,    -1,   209,   183,   184,
   185,   186,   187,    -1,   189,   190,   191,   192,    -1,    -1,
   195,   196,   197,   198,   199,    -1,    -1,    -1,   203,    -1,
    -1,    -1,   207,    -1,   209,   183,   184,   185,   186,   187,
    -1,   189,   190,   191,   192,    -1,    -1,   195,   196,   197,
   198,   199,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
    -1,   209,   183,   184,   185,   186,   187,   188,   189,   190,
   191,   192,    -1,    -1,   195,   196,   197,   198,   199,   200,
    -1,    -1,   203,    -1,    -1,    -1,   207,   183,   184,   185,
   186,   187,   188,   189,   190,   191,   192,    -1,    -1,   195,
   196,   197,   198,   199,   200,    -1,    -1,   203,    -1,   205,
   183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
    -1,    -1,   195,   196,   197,   198,   199,   200,    -1,    -1,
   203,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
    -1,   195,   196,   197,   198,   199,   200,    -1,    -1,   203,
   186,   187,   188,   189,   190,   191,   192,    -1,    -1,   195,
   196,   197,   198,   199,   200,    -1,    -1,   203
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
case 403:
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
case 404:
#line 4402 "GetDP.y"
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
case 405:
#line 4415 "GetDP.y"
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
case 406:
#line 4427 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 408:
#line 4436 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 410:
#line 4445 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 411:
#line 4455 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 412:
#line 4465 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 413:
#line 4476 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 414:
#line 4481 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 415:
#line 4491 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 417:
#line 4501 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 418:
#line 4504 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 419:
#line 4514 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 420:
#line 4530 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 422:
#line 4546 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 423:
#line 4550 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 424:
#line 4554 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 425:
#line 4558 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 426:
#line 4563 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 427:
#line 4574 "GetDP.y"
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
case 429:
#line 4591 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 430:
#line 4595 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 431:
#line 4599 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 432:
#line 4603 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 433:
#line 4607 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 434:
#line 4612 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 435:
#line 4623 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 437:
#line 4638 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 438:
#line 4642 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 439:
#line 4646 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 440:
#line 4650 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 441:
#line 4654 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 442:
#line 4665 "GetDP.y"
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
case 444:
#line 4683 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 445:
#line 4687 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 446:
#line 4691 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 447:
#line 4695 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 448:
#line 4700 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 449:
#line 4710 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 450:
#line 4716 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 451:
#line 4722 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 452:
#line 4732 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 453:
#line 4735 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 454:
#line 4740 "GetDP.y"
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
case 456:
#line 4758 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 457:
#line 4768 "GetDP.y"
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
case 458:
#line 4797 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 459:
#line 4800 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 460:
#line 4803 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 461:
#line 4811 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 462:
#line 4828 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 464:
#line 4840 "GetDP.y"
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
case 466:
#line 4863 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 468:
#line 4877 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 469:
#line 4884 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 470:
#line 4892 "GetDP.y"
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
case 471:
#line 4938 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 472:
#line 4943 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 473:
#line 4949 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 474:
#line 4952 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 475:
#line 4957 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 477:
#line 4968 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 478:
#line 4971 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 479:
#line 4977 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 480:
#line 4982 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 481:
#line 4988 "GetDP.y"
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
case 482:
#line 5002 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 484:
#line 5016 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 485:
#line 5023 "GetDP.y"
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
case 486:
#line 5051 "GetDP.y"
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
case 487:
#line 5061 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 488:
#line 5062 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 489:
#line 5068 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 490:
#line 5077 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 491:
#line 5094 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 493:
#line 5106 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 495:
#line 5113 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 497:
#line 5125 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 498:
#line 5132 "GetDP.y"
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
case 499:
#line 5144 "GetDP.y"
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
case 500:
#line 5155 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 501:
#line 5160 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 502:
#line 5166 "GetDP.y"
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
case 503:
#line 5183 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 504:
#line 5193 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 505:
#line 5196 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 506:
#line 5200 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 507:
#line 5211 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 508:
#line 5215 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 509:
#line 5219 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 510:
#line 5224 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 511:
#line 5232 "GetDP.y"
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
case 512:
#line 5244 "GetDP.y"
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
case 513:
#line 5267 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 514:
#line 5268 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 515:
#line 5269 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 516:
#line 5270 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 517:
#line 5276 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 518:
#line 5278 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 519:
#line 5284 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 520:
#line 5290 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 521:
#line 5297 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 522:
#line 5306 "GetDP.y"
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
case 523:
#line 5328 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 524:
#line 5336 "GetDP.y"
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
case 525:
#line 5347 "GetDP.y"
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
case 526:
#line 5361 "GetDP.y"
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
case 527:
#line 5382 "GetDP.y"
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
case 528:
#line 5409 "GetDP.y"
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
case 529:
#line 5440 "GetDP.y"
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
case 530:
#line 5460 "GetDP.y"
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
case 532:
#line 5486 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 533:
#line 5493 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 534:
#line 5500 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 535:
#line 5507 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 536:
#line 5511 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 537:
#line 5515 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 538:
#line 5519 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 539:
#line 5523 "GetDP.y"
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
case 540:
#line 5533 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 541:
#line 5538 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 542:
#line 5543 "GetDP.y"
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
case 543:
#line 5563 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 544:
#line 5570 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 545:
#line 5579 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 546:
#line 5588 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 547:
#line 5597 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 548:
#line 5604 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 549:
#line 5612 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 550:
#line 5616 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 551:
#line 5625 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 552:
#line 5629 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 553:
#line 5637 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 554:
#line 5643 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 555:
#line 5652 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 556:
#line 5658 "GetDP.y"
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
case 557:
#line 5706 "GetDP.y"
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
case 558:
#line 5721 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 561:
#line 5734 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 562:
#line 5740 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 563:
#line 5746 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 564:
#line 5757 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 565:
#line 5758 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 566:
#line 5759 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 567:
#line 5760 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 568:
#line 5761 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 569:
#line 5762 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 570:
#line 5763 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 571:
#line 5764 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 572:
#line 5765 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 573:
#line 5766 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 574:
#line 5767 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 575:
#line 5768 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 576:
#line 5769 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 577:
#line 5770 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 578:
#line 5771 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 579:
#line 5772 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 580:
#line 5773 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 581:
#line 5774 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 582:
#line 5775 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 583:
#line 5776 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 584:
#line 5777 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 585:
#line 5780 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 586:
#line 5781 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 587:
#line 5782 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 588:
#line 5783 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 589:
#line 5784 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 590:
#line 5785 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 591:
#line 5786 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 592:
#line 5787 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 593:
#line 5788 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 594:
#line 5789 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 595:
#line 5790 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 596:
#line 5791 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 597:
#line 5792 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 598:
#line 5793 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 599:
#line 5794 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 600:
#line 5795 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 601:
#line 5796 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 602:
#line 5797 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 603:
#line 5798 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 604:
#line 5799 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 605:
#line 5800 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 606:
#line 5801 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 607:
#line 5802 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 608:
#line 5803 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 609:
#line 5804 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 610:
#line 5805 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 611:
#line 5806 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 612:
#line 5807 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 613:
#line 5808 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 614:
#line 5809 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 615:
#line 5810 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 616:
#line 5811 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 617:
#line 5812 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 618:
#line 5813 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 619:
#line 5814 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 620:
#line 5815 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 621:
#line 5816 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 622:
#line 5817 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 623:
#line 5818 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 624:
#line 5819 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 625:
#line 5824 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 626:
#line 5825 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 627:
#line 5826 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 628:
#line 5827 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 629:
#line 5828 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 630:
#line 5829 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 631:
#line 5830 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 632:
#line 5832 "GetDP.y"
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
case 633:
#line 5850 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 634:
#line 5853 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 635:
#line 5859 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 636:
#line 5862 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 637:
#line 5869 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 638:
#line 5875 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 639:
#line 5878 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 640:
#line 5881 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 641:
#line 5893 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 642:
#line 5899 "GetDP.y"
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
case 643:
#line 5910 "GetDP.y"
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
case 644:
#line 5925 "GetDP.y"
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
case 645:
#line 5947 "GetDP.y"
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
case 646:
#line 5962 "GetDP.y"
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
case 647:
#line 6003 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 648:
#line 6006 "GetDP.y"
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
case 649:
#line 6021 "GetDP.y"
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
#line 6035 "GetDP.y"



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


