
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
#define	tTimeLoopTheta	380
#define	tTime0	381
#define	tTimeMax	382
#define	tTheta	383
#define	tTimeLoopNewmark	384
#define	tBeta	385
#define	tGamma	386
#define	tIterativeLoop	387
#define	tNbrMaxIteration	388
#define	tRelaxationFactor	389
#define	tIterativeTimeReduction	390
#define	tDivisionCoefficient	391
#define	tChangeOfState	392
#define	tChangeOfCoordinates	393
#define	tSystemCommand	394
#define	tPostProcessing	395
#define	tNameOfSystem	396
#define	tPostOperation	397
#define	tNameOfPostProcessing	398
#define	tUsingPost	399
#define	tAppend	400
#define	tPlot	401
#define	tPrint	402
#define	tPrintGroup	403
#define	tWrite	404
#define	tAdapt	405
#define	tOnGlobal	406
#define	tOnRegion	407
#define	tOnElementsOf	408
#define	tOnGrid	409
#define	tOnSection	410
#define	tOnPoint	411
#define	tOnLine	412
#define	tOnPlane	413
#define	tOnBox	414
#define	tWithArgument	415
#define	tFile	416
#define	tDepth	417
#define	tDimension	418
#define	tTimeStep	419
#define	tHarmonicToTime	420
#define	tFormat	421
#define	tHeader	422
#define	tFooter	423
#define	tSkin	424
#define	tSmoothing	425
#define	tTarget	426
#define	tSort	427
#define	tIso	428
#define	tNoNewLine	429
#define	tFlag	430
#define	tBreak	431
#define	tHelp	432
#define	tCpu	433
#define	tDEF	434
#define	tOR	435
#define	tAND	436
#define	tEQUAL	437
#define	tNOTEQUAL	438
#define	tAPPROXEQUAL	439
#define	tLESSOREQUAL	440
#define	tGREATEROREQUAL	441
#define	tLESSLESS	442
#define	tGREATERGREATER	443
#define	tCROSSPRODUCT	444
#define	UNARYPREC	445

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.25 2001-07-21 18:37:56 geuzaine Exp $ */

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
#if !defined __cplusplus && !defined MSDOS && !defined _AIX && !defined __CYGWIN__
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


#line 180 "GetDP.y"
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



#define	YYFINAL		1574
#define	YYFLAG		-32768
#define	YYNTBASE	212

#define YYTRANSLATE(x) ((unsigned)(x) <= 445 ? yytranslate[x] : 406)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   199,     2,   207,   208,   197,     2,     2,   202,
   203,   195,   193,   211,   194,   206,   196,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   187,
     2,   189,   181,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   204,     2,   205,   201,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   209,     2,   210,     2,     2,     2,     2,     2,
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
   177,   178,   179,   180,   182,   183,   184,   185,   186,   188,
   190,   191,   192,   198,   200
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    81,    87,    90,    91,    94,    95,    96,   100,
   105,   111,   112,   119,   125,   127,   128,   129,   137,   140,
   142,   145,   147,   149,   151,   153,   154,   158,   163,   165,
   167,   171,   172,   176,   181,   183,   187,   194,   200,   202,
   207,   211,   212,   216,   223,   224,   226,   231,   232,   235,
   239,   240,   243,   249,   256,   264,   266,   267,   271,   276,
   281,   282,   285,   286,   290,   292,   296,   297,   300,   302,
   303,   304,   312,   316,   320,   327,   331,   335,   339,   343,
   347,   351,   355,   359,   363,   367,   371,   375,   379,   383,
   386,   389,   392,   396,   398,   402,   405,   407,   410,   411,
   417,   418,   430,   435,   440,   441,   449,   456,   459,   462,
   465,   468,   472,   475,   479,   482,   486,   488,   492,   493,
   497,   504,   505,   510,   511,   514,   518,   523,   524,   529,
   530,   533,   537,   541,   546,   547,   552,   553,   556,   560,
   564,   569,   570,   575,   576,   579,   583,   587,   592,   593,
   598,   599,   602,   606,   610,   614,   618,   622,   626,   627,
   630,   634,   636,   637,   640,   644,   649,   653,   658,   664,
   665,   670,   671,   674,   678,   682,   686,   690,   694,   698,
   706,   710,   714,   718,   722,   726,   734,   742,   750,   751,
   754,   758,   760,   761,   764,   768,   773,   777,   782,   787,
   792,   797,   798,   803,   804,   807,   811,   815,   820,   825,
   833,   837,   841,   845,   846,   847,   848,   867,   868,   873,
   874,   877,   881,   885,   889,   891,   895,   896,   900,   902,
   906,   907,   911,   912,   917,   918,   921,   925,   929,   933,
   934,   939,   940,   943,   947,   953,   957,   961,   966,   967,
   970,   974,   976,   977,   980,   984,   989,   993,   998,  1003,
  1004,  1009,  1010,  1013,  1017,  1021,  1025,  1029,  1030,  1037,
  1041,  1042,  1048,  1052,  1056,  1060,  1064,  1065,  1069,  1070,
  1073,  1078,  1083,  1088,  1093,  1094,  1097,  1101,  1105,  1109,
  1110,  1113,  1117,  1121,  1125,  1129,  1130,  1133,  1134,  1135,
  1145,  1149,  1153,  1157,  1158,  1161,  1165,  1166,  1167,  1177,
  1178,  1180,  1182,  1184,  1186,  1188,  1190,  1195,  1199,  1200,
  1203,  1207,  1209,  1210,  1213,  1217,  1222,  1227,  1228,  1234,
  1235,  1240,  1241,  1244,  1248,  1252,  1256,  1260,  1264,  1268,
  1272,  1276,  1279,  1283,  1284,  1288,  1290,  1294,  1295,  1299,
  1300,  1303,  1307,  1311,  1316,  1321,  1326,  1331,  1337,  1343,
  1346,  1354,  1366,  1374,  1382,  1392,  1402,  1414,  1428,  1444,
  1456,  1470,  1471,  1479,  1480,  1488,  1496,  1502,  1506,  1508,
  1510,  1511,  1514,  1518,  1522,  1525,  1526,  1529,  1533,  1537,
  1541,  1545,  1550,  1551,  1554,  1558,  1562,  1566,  1570,  1574,
  1579,  1580,  1583,  1587,  1591,  1595,  1599,  1604,  1605,  1608,
  1612,  1616,  1620,  1624,  1628,  1633,  1638,  1643,  1644,  1649,
  1650,  1653,  1657,  1661,  1665,  1669,  1673,  1677,  1678,  1681,
  1685,  1687,  1688,  1691,  1695,  1700,  1705,  1709,  1714,  1715,
  1720,  1721,  1724,  1728,  1733,  1734,  1740,  1746,  1747,  1750,
  1751,  1758,  1762,  1763,  1768,  1772,  1776,  1777,  1780,  1784,
  1786,  1787,  1790,  1794,  1798,  1802,  1806,  1811,  1812,  1821,
  1822,  1823,  1827,  1835,  1843,  1844,  1855,  1859,  1866,  1868,
  1870,  1872,  1874,  1875,  1879,  1881,  1884,  1887,  1888,  1889,
  1904,  1907,  1908,  1923,  1928,  1929,  1943,  1944,  1945,  1965,
  1966,  1967,  1968,  1994,  2007,  2008,  2011,  2015,  2020,  2025,
  2029,  2032,  2036,  2040,  2044,  2048,  2052,  2056,  2060,  2064,
  2068,  2072,  2076,  2080,  2084,  2090,  2093,  2097,  2098,  2101,
  2106,  2111,  2117,  2118,  2122,  2128,  2134,  2136,  2138,  2140,
  2142,  2144,  2146,  2148,  2150,  2152,  2154,  2156,  2158,  2160,
  2162,  2164,  2166,  2168,  2170,  2172,  2174,  2176,  2178,  2182,
  2185,  2188,  2192,  2196,  2200,  2204,  2208,  2212,  2216,  2220,
  2224,  2228,  2232,  2236,  2240,  2244,  2249,  2254,  2259,  2264,
  2269,  2274,  2279,  2284,  2289,  2294,  2301,  2306,  2311,  2316,
  2321,  2326,  2331,  2338,  2345,  2352,  2358,  2361,  2363,  2365,
  2367,  2369,  2371,  2373,  2375,  2377,  2378,  2380,  2382,  2386,
  2388,  2390,  2394,  2398,  2402,  2409,  2415,  2420,  2427,  2429,
  2431
};

static const short yyrhs[] = {    -1,
   213,   214,     0,     0,     0,   214,   215,   216,     0,    45,
   209,   219,   210,     0,    79,   209,   239,   210,     0,    50,
   209,   273,   210,     0,    63,   209,   258,   210,     0,    65,
   209,   264,   210,     0,    75,   209,   280,   210,     0,    90,
   209,   303,   210,     0,   107,   209,   329,   210,     0,   141,
   209,   359,   210,     0,   143,   209,   371,   210,     0,   375,
     0,   397,     0,    10,   405,     0,   217,     0,   178,     7,
     0,   178,     5,     7,     0,   178,     5,     5,     7,     0,
   178,     5,     5,     5,     7,     0,   179,     7,     0,     0,
   218,   379,     0,     0,     0,   219,   220,   221,     0,     5,
   180,   223,     7,     0,     5,   238,   180,   223,     7,     0,
     0,     5,   236,   180,   222,   223,     7,     0,    46,   204,
   234,   205,     7,     0,   397,     0,     0,     0,   227,   204,
   224,   228,   225,   229,   205,     0,   207,   231,     0,   223,
     0,     5,   237,     0,    51,     0,     5,     0,   231,     0,
    47,     0,     0,   235,   230,   231,     0,   235,    48,     5,
   237,     0,     5,     0,   233,     0,   209,   232,   210,     0,
     0,   232,   235,   233,     0,   232,   235,   194,   233,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   204,   400,
   205,     3,     0,     3,     8,     3,     8,   400,     0,     5,
     0,     5,   209,   400,   210,     0,     5,   209,   210,     0,
     0,   234,   235,     5,     0,   234,   235,     5,   209,   400,
   210,     0,     0,   211,     0,   209,   207,   400,   210,     0,
     0,   209,   210,     0,   209,   400,   210,     0,     0,   239,
   240,     0,    49,   204,   241,   205,     7,     0,     5,   204,
   205,   180,   242,     7,     0,     5,   204,   226,   205,   180,
   242,     7,     0,   397,     0,     0,   241,   235,     5,     0,
    11,   204,   400,   205,     0,    79,   204,     5,   205,     0,
     0,   243,   246,     0,     0,   209,   245,   210,     0,   242,
     0,   245,   211,   242,     0,     0,   247,   248,     0,   251,
     0,     0,     0,   248,   181,   249,   248,     8,   250,   248,
     0,   248,   195,   248,     0,   248,   198,   248,     0,    43,
   204,   248,   211,   248,   205,     0,   248,   196,   248,     0,
   248,   193,   248,     0,   248,   194,   248,     0,   248,   197,
   248,     0,   248,   201,   248,     0,   248,   187,   248,     0,
   248,   189,   248,     0,   248,   188,   248,     0,   248,   190,
   248,     0,   248,   184,   248,     0,   248,   185,   248,     0,
   248,   186,   248,     0,   248,   183,   248,     0,   248,   182,
   248,     0,   194,   248,     0,   193,   248,     0,   199,   248,
     0,   202,   248,   203,     0,   401,     0,   399,   255,   257,
     0,     5,   328,     0,   328,     0,   328,   255,     0,     0,
   100,   252,   204,   246,   205,     0,     0,    44,   253,   204,
     3,   211,   400,   211,   246,   211,   246,   205,     0,    40,
   204,   328,   205,     0,    42,   204,   328,   205,     0,     0,
    41,   254,   204,   246,   211,   226,   205,     0,   187,     5,
   189,   204,   246,   205,     0,   208,     5,     0,   208,   165,
     0,   208,   118,     0,   208,     3,     0,   251,   207,     3,
     0,   207,     3,     0,   204,   206,   205,     0,   204,   205,
     0,   204,   256,   205,     0,   248,     0,   256,   211,   248,
     0,     0,   209,   403,   210,     0,   209,    51,   204,   226,
   205,   210,     0,     0,   258,   209,   259,   210,     0,     0,
   259,   260,     0,    76,     5,     7,     0,    64,   209,   261,
   210,     0,     0,   261,   209,   262,   210,     0,     0,   262,
   263,     0,    51,   226,     7,     0,    51,    47,     7,     0,
    63,     5,   257,     7,     0,     0,   264,   209,   265,   210,
     0,     0,   265,   266,     0,    76,     5,     7,     0,    68,
   242,     7,     0,    64,   209,   267,   210,     0,     0,   267,
   209,   268,   210,     0,     0,   268,   269,     0,    66,     5,
     7,     0,    67,     5,     7,     0,    64,   209,   270,   210,
     0,     0,   270,   209,   271,   210,     0,     0,   271,   272,
     0,    69,     5,     7,     0,    70,   400,     7,     0,    71,
   400,     7,     0,    72,   400,     7,     0,    73,   400,     7,
     0,    74,   400,     7,     0,     0,   273,   274,     0,   209,
   275,   210,     0,   397,     0,     0,   275,   276,     0,    76,
     5,     7,     0,    76,     5,   236,     7,     0,    66,     5,
     7,     0,    64,   209,   277,   210,     0,    64,     5,   209,
   277,   210,     0,     0,   277,   209,   278,   210,     0,     0,
   278,   279,     0,    66,     5,     7,     0,    51,   226,     7,
     0,    52,   226,     7,     0,    58,   242,     7,     0,    57,
   242,     7,     0,    62,     5,     7,     0,    59,   209,     3,
   235,     3,   210,     7,     0,    53,   226,     7,     0,    54,
   226,     7,     0,    79,   242,     7,     0,    56,   242,     7,
     0,    55,   242,     7,     0,    79,   204,   242,   211,   242,
   205,     7,     0,    56,   204,   242,   211,   242,   205,     7,
     0,    55,   204,   242,   211,   242,   205,     7,     0,     0,
   280,   281,     0,   209,   282,   210,     0,   397,     0,     0,
   282,   283,     0,    76,     5,     7,     0,    76,     5,   236,
     7,     0,    66,     5,     7,     0,    77,   209,   284,   210,
     0,    84,   209,   290,   210,     0,    86,   209,   297,   210,
     0,    50,   209,   300,   210,     0,     0,   284,   209,   285,
   210,     0,     0,   285,   286,     0,    76,     5,     7,     0,
    78,     5,     7,     0,    78,     5,   236,     7,     0,    79,
     5,   287,     7,     0,    80,   209,     5,   235,     5,   210,
     7,     0,    81,   244,     7,     0,    82,   226,     7,     0,
    83,   226,     7,     0,     0,     0,     0,   209,    91,     5,
     7,    90,     5,   236,     7,   288,    45,   226,     7,   289,
   107,     5,   237,     7,   210,     0,     0,   290,   209,   291,
   210,     0,     0,   291,   292,     0,    76,     5,     7,     0,
    85,   293,     7,     0,    78,   295,     7,     0,     5,     0,
   209,   294,   210,     0,     0,   294,   235,     5,     0,     5,
     0,   209,   296,   210,     0,     0,   296,   235,     5,     0,
     0,   297,   209,   298,   210,     0,     0,   298,   299,     0,
    76,     5,     7,     0,    66,     5,     7,     0,    78,     5,
     7,     0,     0,   300,   209,   301,   210,     0,     0,   301,
   302,     0,    78,     5,     7,     0,    83,   227,    89,     5,
     7,     0,    87,   227,     7,     0,    88,   230,     7,     0,
    89,     5,   237,     7,     0,     0,   303,   304,     0,   209,
   305,   210,     0,   397,     0,     0,   305,   306,     0,    76,
     5,     7,     0,    76,     5,   236,     7,     0,    66,     5,
     7,     0,    91,   209,   307,   210,     0,    95,   209,   313,
   210,     0,     0,   307,   209,   308,   210,     0,     0,   308,
   309,     0,    76,     5,     7,     0,    66,    86,     7,     0,
    66,    96,     7,     0,    66,     5,     7,     0,     0,    92,
     5,   237,   310,   312,     7,     0,    93,     3,     7,     0,
     0,   204,   311,   246,   205,     7,     0,   106,   226,     7,
     0,    65,     5,     7,     0,    63,     5,     7,     0,    94,
     3,     7,     0,     0,   204,     5,   205,     0,     0,   313,
   314,     0,    96,   209,   319,   210,     0,    97,   209,   319,
   210,     0,    98,   209,   323,   210,     0,    99,   209,   315,
   210,     0,     0,   315,   316,     0,    66,     5,     7,     0,
    89,     5,     7,     0,   209,   317,   210,     0,     0,   317,
   318,     0,    60,   328,     7,     0,    61,   328,     7,     0,
    95,   328,     7,     0,   106,   226,     7,     0,     0,   319,
   320,     0,     0,     0,   327,   204,   321,   246,   322,   211,
   246,   205,     7,     0,   106,   226,     7,     0,    63,     5,
     7,     0,    65,     5,     7,     0,     0,   323,   324,     0,
   106,   226,     7,     0,     0,     0,   327,   204,   325,   246,
   326,   211,   328,   205,     7,     0,     0,   100,     0,   101,
     0,   102,     0,   103,     0,   104,     0,   105,     0,   209,
     5,     5,   210,     0,   209,     5,   210,     0,     0,   329,
   330,     0,   209,   331,   210,     0,   397,     0,     0,   331,
   332,     0,    76,     5,     7,     0,    76,     5,   236,     7,
     0,   108,   209,   334,   210,     0,     0,   115,   333,   209,
   341,   210,     0,     0,   334,   209,   335,   210,     0,     0,
   335,   336,     0,    76,     5,     7,     0,    66,     5,     7,
     0,   109,   337,     7,     0,   110,   405,     7,     0,   113,
   339,     7,     0,   114,     5,     7,     0,   111,   402,     7,
     0,   112,   405,     7,     0,     5,   237,     0,   209,   338,
   210,     0,     0,   338,   235,     5,     0,     5,     0,   209,
   340,   210,     0,     0,   340,   235,     5,     0,     0,   341,
   342,     0,     5,     5,     7,     0,   117,   242,     7,     0,
   126,   209,   348,   210,     0,   130,   209,   350,   210,     0,
   133,   209,   352,   210,     0,   136,   209,   354,   210,     0,
     5,   204,     5,   205,     7,     0,   117,   204,   242,   205,
     7,     0,   177,     7,     0,   121,   204,   242,   205,   209,
   341,   210,     0,   121,   204,   242,   205,   209,   341,   210,
   122,   209,   341,   210,     0,   119,   204,     5,   211,   242,
   205,     7,     0,   124,   204,     5,   211,   242,   205,     7,
     0,   125,   204,     5,   211,   226,   211,     5,   205,     7,
     0,   120,   204,     5,   211,     5,   211,   402,   205,     7,
     0,   123,   204,     5,   211,   400,   211,   402,   211,   400,
   205,     7,     0,   126,   204,   400,   211,   400,   211,   242,
   211,   242,   205,   209,   341,   210,     0,   130,   204,   400,
   211,   400,   211,   242,   211,   400,   211,   400,   205,   209,
   341,   210,     0,   133,   204,   400,   211,   400,   211,   242,
   205,   209,   341,   210,     0,   133,   204,   400,   211,   400,
   211,   242,   211,   400,   205,   209,   341,   210,     0,     0,
   148,   343,   204,   345,   346,   205,     7,     0,     0,   150,
   344,   204,   345,   346,   205,     7,     0,   139,   204,   226,
   211,   242,   205,     7,     0,   143,   204,     5,   205,     7,
     0,   140,     6,     7,     0,   244,     0,     5,     0,     0,
   346,   347,     0,   211,   162,   405,     0,   211,   165,   402,
     0,   211,   402,     0,     0,   348,   349,     0,   127,   400,
     7,     0,   128,   400,     7,     0,   118,   242,     7,     0,
   129,   242,     7,     0,   115,   209,   341,   210,     0,     0,
   350,   351,     0,   127,   400,     7,     0,   128,   400,     7,
     0,   118,   242,     7,     0,   131,   400,     7,     0,   132,
   400,     7,     0,   115,   209,   341,   210,     0,     0,   352,
   353,     0,   134,   400,     7,     0,    68,   400,     7,     0,
   135,   242,     7,     0,   176,   400,     7,     0,   115,   209,
   341,   210,     0,     0,   354,   355,     0,   134,   400,     7,
     0,   137,   400,     7,     0,    68,   400,     7,     0,   176,
   400,     7,     0,   108,     5,     7,     0,   138,   209,   356,
   210,     0,   115,   209,   341,   210,     0,   116,   209,   341,
   210,     0,     0,   356,   209,   357,   210,     0,     0,   357,
   358,     0,    66,     5,     7,     0,    91,     5,     7,     0,
   106,   226,     7,     0,    68,   400,     7,     0,    79,   242,
     7,     0,   176,     5,     7,     0,     0,   359,   360,     0,
   209,   361,   210,     0,   397,     0,     0,   361,   362,     0,
    76,     5,     7,     0,    76,     5,   236,     7,     0,   109,
     5,   237,     7,     0,   142,     5,     7,     0,    91,   209,
   363,   210,     0,     0,   363,   209,   364,   210,     0,     0,
   364,   365,     0,    76,     5,     7,     0,    57,   209,   366,
   210,     0,     0,   366,    96,   209,   367,   210,     0,   366,
     5,   209,   367,   210,     0,     0,   367,   368,     0,     0,
   327,   204,   369,   246,   205,     7,     0,    66,     5,     7,
     0,     0,   106,   370,   226,     7,     0,    63,     5,     7,
     0,    65,     5,     7,     0,     0,   371,   372,     0,   209,
   373,   210,     0,   397,     0,     0,   373,   374,     0,    76,
     5,     7,     0,   144,     5,     7,     0,   167,     5,     7,
     0,   146,   405,     7,     0,   115,   209,   377,   210,     0,
     0,   143,     5,   145,     5,   376,   209,   377,   210,     0,
     0,     0,   377,   378,   379,     0,   147,   204,   381,   384,
   394,   205,     7,     0,   148,   204,   381,   384,   394,   205,
     7,     0,     0,   149,   204,   226,   380,   211,   106,   226,
   394,   205,     7,     0,     5,   383,   211,     0,     5,   383,
   382,     5,   383,   211,     0,   195,     0,   196,     0,   193,
     0,   194,     0,     0,   204,   226,   205,     0,   152,     0,
   153,   226,     0,   154,   226,     0,     0,     0,   156,   209,
   209,   403,   210,   385,   209,   403,   210,   386,   209,   403,
   210,   210,     0,   155,   226,     0,     0,   155,   209,   242,
   211,   242,   211,   242,   210,   209,   402,   387,   211,   402,
   210,     0,   157,   209,   403,   210,     0,     0,   158,   209,
   209,   403,   210,   388,   209,   403,   210,   210,   209,   400,
   210,     0,     0,     0,   159,   209,   209,   403,   210,   389,
   209,   403,   210,   390,   209,   403,   210,   210,   209,   400,
   211,   400,   210,     0,     0,     0,     0,   160,   209,   209,
   403,   210,   391,   209,   403,   210,   392,   209,   403,   210,
   393,   209,   403,   210,   210,   209,   400,   211,   400,   211,
   400,   210,     0,   153,   226,   161,     5,   209,   400,   211,
   400,   210,   209,   400,   210,     0,     0,   394,   395,     0,
   211,   162,   405,     0,   211,   162,   189,   405,     0,   211,
   162,   192,   405,     0,   211,   163,   400,     0,   211,   170,
     0,   211,   171,   400,     0,   211,   166,   400,     0,   211,
   167,     5,     0,   211,   168,   396,     0,   211,   169,   396,
     0,   211,   167,   396,     0,   211,   164,   400,     0,   211,
   165,   402,     0,   211,   151,     5,     0,   211,   173,     5,
     0,   211,   172,   400,     0,   211,    57,   402,     0,   211,
   174,   400,     0,   211,   174,   209,   403,   210,     0,   211,
   175,     0,   211,   111,   402,     0,     0,   396,     6,     0,
     5,   180,   402,     7,     0,     5,   180,     6,     7,     0,
    14,   204,   398,   205,     7,     0,     0,   398,   235,     5,
     0,   398,   235,     5,   180,   400,     0,   398,   235,     5,
   180,     6,     0,    20,     0,    21,     0,    22,     0,    23,
     0,    24,     0,    25,     0,    26,     0,    27,     0,    28,
     0,    29,     0,    30,     0,    31,     0,    32,     0,    33,
     0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
     0,    39,     0,     5,     0,   401,     0,   202,   400,   203,
     0,   194,   400,     0,   199,   400,     0,   400,   194,   400,
     0,   400,   193,   400,     0,   400,   195,   400,     0,   400,
   196,   400,     0,   400,   197,   400,     0,   400,   201,   400,
     0,   400,   187,   400,     0,   400,   189,   400,     0,   400,
   188,   400,     0,   400,   190,   400,     0,   400,   184,   400,
     0,   400,   185,   400,     0,   400,   183,   400,     0,   400,
   182,   400,     0,    20,   204,   400,   205,     0,    21,   204,
   400,   205,     0,    22,   204,   400,   205,     0,    23,   204,
   400,   205,     0,    24,   204,   400,   205,     0,    25,   204,
   400,   205,     0,    26,   204,   400,   205,     0,    27,   204,
   400,   205,     0,    28,   204,   400,   205,     0,    29,   204,
   400,   205,     0,    30,   204,   400,   211,   400,   205,     0,
    31,   204,   400,   205,     0,    32,   204,   400,   205,     0,
    33,   204,   400,   205,     0,    34,   204,   400,   205,     0,
    35,   204,   400,   205,     0,    36,   204,   400,   205,     0,
    37,   204,   400,   211,   400,   205,     0,    38,   204,   400,
   211,   400,   205,     0,    39,   204,   400,   211,   400,   205,
     0,   400,   181,   400,     8,   400,     0,   400,   207,     0,
     4,     0,     3,     0,    15,     0,    16,     0,    17,     0,
    18,     0,    19,     0,     5,     0,     0,   400,     0,   404,
     0,   209,   403,   210,     0,   400,     0,   404,     0,   403,
   211,   400,     0,   403,   211,   404,     0,   400,     8,   400,
     0,   400,     8,   204,   400,   205,   400,     0,   400,     8,
   400,     8,   400,     0,    12,   204,     5,   205,     0,    13,
   204,     5,   211,     5,   205,     0,     6,     0,     5,     0,
     9,   204,   405,   211,   405,   205,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   316,   353,   391,   394,   397,   400,   403,   404,   405,   406,
   407,   408,   409,   410,   411,   413,   415,   417,   422,   431,
   435,   438,   441,   444,   446,   454,   468,   471,   472,   475,
   480,   483,   485,   488,   490,   494,   502,   513,   522,   531,
   538,   573,   578,   589,   592,   606,   611,   614,   663,   676,
   702,   707,   722,   740,   761,   767,   776,   791,   805,   839,
   852,   872,   876,   886,   903,   903,   906,   912,   915,   918,
   928,   931,   934,   938,   958,  1002,  1006,  1009,  1026,  1035,
  1042,  1045,  1050,  1056,  1060,  1065,  1070,  1076,  1083,  1087,
  1100,  1115,  1129,  1135,  1141,  1147,  1153,  1159,  1165,  1171,
  1177,  1183,  1189,  1195,  1201,  1207,  1213,  1219,  1225,  1232,
  1238,  1240,  1249,  1253,  1259,  1333,  1367,  1376,  1388,  1390,
  1401,  1403,  1419,  1425,  1431,  1433,  1462,  1486,  1499,  1505,
  1512,  1518,  1525,  1535,  1538,  1539,  1542,  1545,  1548,  1553,
  1555,  1569,  1576,  1581,  1586,  1590,  1597,  1602,  1607,  1612,
  1618,  1622,  1627,  1630,  1665,  1673,  1678,  1687,  1691,  1700,
  1703,  1708,  1713,  1718,  1726,  1730,  1742,  1752,  1757,  1762,
  1767,  1779,  1783,  1839,  1842,  1845,  1848,  1851,  1860,  1867,
  1870,  1892,  1895,  1905,  1909,  1917,  1924,  1933,  1936,  1956,
  1973,  1995,  2005,  2009,  2021,  2045,  2070,  2075,  2083,  2091,
  2101,  2118,  2126,  2133,  2140,  2149,  2158,  2167,  2186,  2194,
  2197,  2220,  2224,  2233,  2237,  2245,  2252,  2261,  2264,  2267,
  2270,  2275,  2293,  2340,  2356,  2360,  2365,  2370,  2375,  2389,
  2409,  2418,  2442,  2497,  2501,  2505,  2514,  2578,  2584,  2589,
  2594,  2598,  2605,  2608,  2613,  2631,  2636,  2640,  2657,  2671,
  2676,  2680,  2693,  2699,  2706,  2713,  2717,  2724,  2734,  2745,
  2762,  2834,  2846,  2850,  2870,  2884,  2887,  2890,  2934,  2941,
  2944,  2966,  2970,  2978,  2982,  2990,  2997,  3007,  3009,  3014,
  3029,  3045,  3062,  3066,  3071,  3075,  3078,  3088,  3127,  3151,
  3156,  3162,  3323,  3328,  3337,  3346,  3351,  3354,  3392,  3409,
  3435,  3440,  3443,  3446,  3451,  3459,  3462,  3474,  3484,  3496,
  3505,  3508,  3512,  3514,  3516,  3522,  3540,  3544,  3555,  3616,
  3662,  3686,  3695,  3707,  3724,  3728,  3762,  3771,  3825,  3841,
  3844,  3845,  3846,  3847,  3848,  3849,  3853,  3876,  3898,  3905,
  3908,  3929,  3933,  3941,  3945,  3954,  3961,  3964,  3966,  3971,
  3987,  4004,  4019,  4023,  4028,  4037,  4040,  4045,  4050,  4055,
  4065,  4072,  4111,  4116,  4121,  4131,  4143,  4147,  4152,  4163,
  4172,  4179,  4200,  4207,  4213,  4219,  4225,  4233,  4250,  4257,
  4263,  4274,  4285,  4301,  4313,  4333,  4355,  4376,  4389,  4403,
  4416,  4429,  4436,  4438,  4445,  4447,  4457,  4467,  4477,  4487,
  4497,  4503,  4506,  4510,  4519,  4532,  4544,  4548,  4554,  4558,
  4562,  4567,  4576,  4589,  4593,  4599,  4603,  4607,  4611,  4616,
  4625,  4637,  4640,  4646,  4650,  4654,  4658,  4667,  4682,  4685,
  4691,  4695,  4699,  4704,  4714,  4720,  4726,  4735,  4739,  4743,
  4757,  4760,  4772,  4801,  4804,  4807,  4815,  4831,  4839,  4842,
  4863,  4866,  4877,  4880,  4888,  4896,  4942,  4947,  4952,  4956,
  4960,  4967,  4971,  4975,  4980,  4986,  4992,  5005,  5016,  5019,
  5027,  5055,  5066,  5066,  5072,  5081,  5097,  5105,  5108,  5113,
  5116,  5125,  5128,  5136,  5148,  5159,  5164,  5169,  5187,  5196,
  5200,  5205,  5213,  5219,  5223,  5228,  5234,  5248,  5270,  5273,
  5274,  5275,  5278,  5282,  5286,  5294,  5301,  5308,  5319,  5329,
  5340,  5347,  5361,  5371,  5383,  5394,  5406,  5417,  5427,  5440,
  5451,  5461,  5471,  5486,  5506,  5525,  5528,  5536,  5543,  5550,
  5554,  5558,  5562,  5566,  5576,  5581,  5586,  5606,  5613,  5620,
  5629,  5638,  5645,  5652,  5656,  5664,  5668,  5679,  5686,  5732,
  5753,  5759,  5763,  5766,  5772,  5778,  5789,  5791,  5792,  5793,
  5794,  5795,  5796,  5797,  5798,  5799,  5800,  5801,  5802,  5803,
  5804,  5805,  5806,  5807,  5808,  5809,  5810,  5812,  5814,  5815,
  5816,  5817,  5818,  5819,  5820,  5821,  5822,  5823,  5824,  5825,
  5826,  5827,  5828,  5829,  5830,  5831,  5832,  5833,  5834,  5835,
  5836,  5837,  5838,  5839,  5840,  5841,  5842,  5843,  5844,  5845,
  5846,  5847,  5848,  5849,  5850,  5851,  5852,  5855,  5858,  5859,
  5860,  5861,  5862,  5863,  5864,  5880,  5885,  5890,  5898,  5902,
  5907,  5916,  5919,  5928,  5936,  5948,  5959,  5976,  6016,  6021,
  6036
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
"tUpdate","tUpdateConstraint","tTimeLoopTheta","tTime0","tTimeMax","tTheta",
"tTimeLoopNewmark","tBeta","tGamma","tIterativeLoop","tNbrMaxIteration","tRelaxationFactor",
"tIterativeTimeReduction","tDivisionCoefficient","tChangeOfState","tChangeOfCoordinates",
"tSystemCommand","tPostProcessing","tNameOfSystem","tPostOperation","tNameOfPostProcessing",
"tUsingPost","tAppend","tPlot","tPrint","tPrintGroup","tWrite","tAdapt","tOnGlobal",
"tOnRegion","tOnElementsOf","tOnGrid","tOnSection","tOnPoint","tOnLine","tOnPlane",
"tOnBox","tWithArgument","tFile","tDepth","tDimension","tTimeStep","tHarmonicToTime",
"tFormat","tHeader","tFooter","tSkin","tSmoothing","tTarget","tSort","tIso",
"tNoNewLine","tFlag","tBreak","tHelp","tCpu","tDEF","'?'","tOR","tAND","tEQUAL",
"tNOTEQUAL","tAPPROXEQUAL","'<'","tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS",
"tGREATERGREATER","'+'","'-'","'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC",
"'^'","'('","')'","'['","']'","'.'","'#'","'$'","'{'","'}'","','","Stats","@1",
"ProblemDefinitions","@2","ProblemDefinition","Interactive","@3","Groups","@4",
"Group","@5","ReducedGroupRHS","@6","@7","GroupRHS","FunctionForGroup","ListOfRegionOrAll",
"SuppListOfRegion","SuppListTypeForGroup","ListOfRegion","RecursiveListOfRegion",
"IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex","Index","Functions",
"Function","DefineFunctions","Expression","@8","ListOfExpression","RecursiveListOfExpression",
"WholeQuantityExpression","@9","WholeQuantity","@10","@11","WholeQuantity_Single",
"@12","@13","@14","ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction",
"JacobianMethods","JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase",
"JacobianCaseTerm","IntegrationMethods","IntegrationMethod","IntegrationMethodTerm",
"IntegrationCases","IntegrationCase","IntegrationCaseTerm","QuadratureCases",
"QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint","Constraint",
"ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm","FunctionSpaces",
"BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction",
"BasisFunctionTerm","OptionalParametersForBasisFunction","@15","@16","SubSpaces",
"SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
"ListOfBasisFunctionCoef","RecursiveListOfBasisFunctionCoef","GlobalQuantities",
"GlobalQuantity","GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm",
"Formulations","BracedFormulation","Formulation","FormulationTerm","DefineQuantities",
"DefineQuantity","DefineQuantityTerm","@17","@18","IndexInFunctionSpace","Equations",
"EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
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
"PostSubOperation","@30","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","@31","@32","@33","@34","@35","@36","@37","@38","@39","PrintOptions",
"PrintOption","ParsedStrings","Affectation","DefineConstants","NameForFunction",
"FExpr","OneFExpr","ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   213,   212,   214,   215,   214,   216,   216,   216,   216,   216,
   216,   216,   216,   216,   216,   216,   216,   216,   216,   217,
   217,   217,   217,   217,   218,   217,   219,   220,   219,   221,
   221,   222,   221,   221,   221,   224,   225,   223,   223,   226,
   226,   227,   227,   228,   228,   229,   229,   229,   230,   231,
   231,   232,   232,   232,   233,   233,   233,   233,   233,   233,
   233,   234,   234,   234,   235,   235,   236,   237,   237,   238,
   239,   239,   240,   240,   240,   240,   241,   241,   242,   242,
   243,   242,   244,   244,   245,   245,   247,   246,   248,   249,
   250,   248,   248,   248,   248,   248,   248,   248,   248,   248,
   248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
   248,   248,   251,   251,   251,   251,   251,   251,   252,   251,
   253,   251,   251,   251,   254,   251,   251,   251,   251,   251,
   251,   251,   251,   255,   255,   255,   256,   256,   257,   257,
   257,   258,   258,   259,   259,   260,   260,   261,   261,   262,
   262,   263,   263,   263,   264,   264,   265,   265,   266,   266,
   266,   267,   267,   268,   268,   269,   269,   269,   270,   270,
   271,   271,   272,   272,   272,   272,   272,   272,   273,   273,
   274,   274,   275,   275,   276,   276,   276,   276,   276,   277,
   277,   278,   278,   279,   279,   279,   279,   279,   279,   279,
   279,   279,   279,   279,   279,   279,   279,   279,   280,   280,
   281,   281,   282,   282,   283,   283,   283,   283,   283,   283,
   283,   284,   284,   285,   285,   286,   286,   286,   286,   286,
   286,   286,   286,   287,   288,   289,   287,   290,   290,   291,
   291,   292,   292,   292,   293,   293,   294,   294,   295,   295,
   296,   296,   297,   297,   298,   298,   299,   299,   299,   300,
   300,   301,   301,   302,   302,   302,   302,   302,   303,   303,
   304,   304,   305,   305,   306,   306,   306,   306,   306,   307,
   307,   308,   308,   309,   309,   309,   309,   310,   309,   309,
   311,   309,   309,   309,   309,   309,   312,   312,   313,   313,
   314,   314,   314,   314,   315,   315,   316,   316,   316,   317,
   317,   318,   318,   318,   318,   319,   319,   321,   322,   320,
   320,   320,   320,   323,   323,   324,   325,   326,   324,   327,
   327,   327,   327,   327,   327,   327,   328,   328,   329,   329,
   330,   330,   331,   331,   332,   332,   332,   333,   332,   334,
   334,   335,   335,   336,   336,   336,   336,   336,   336,   336,
   336,   337,   337,   338,   338,   339,   339,   340,   340,   341,
   341,   342,   342,   342,   342,   342,   342,   342,   342,   342,
   342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
   342,   343,   342,   344,   342,   342,   342,   342,   345,   345,
   346,   346,   347,   347,   347,   348,   348,   349,   349,   349,
   349,   349,   350,   350,   351,   351,   351,   351,   351,   351,
   352,   352,   353,   353,   353,   353,   353,   354,   354,   355,
   355,   355,   355,   355,   355,   355,   355,   356,   356,   357,
   357,   358,   358,   358,   358,   358,   358,   359,   359,   360,
   360,   361,   361,   362,   362,   362,   362,   362,   363,   363,
   364,   364,   365,   365,   366,   366,   366,   367,   367,   369,
   368,   368,   370,   368,   368,   368,   371,   371,   372,   372,
   373,   373,   374,   374,   374,   374,   374,   376,   375,   377,
   378,   377,   379,   379,   380,   379,   381,   381,   382,   382,
   382,   382,   383,   383,   384,   384,   384,   385,   386,   384,
   384,   387,   384,   384,   388,   384,   389,   390,   384,   391,
   392,   393,   384,   384,   394,   394,   395,   395,   395,   395,
   395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
   395,   395,   395,   395,   395,   395,   395,   396,   396,   397,
   397,   397,   398,   398,   398,   398,   399,   399,   399,   399,
   399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
   399,   399,   399,   399,   399,   399,   399,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
   400,   400,   400,   400,   400,   400,   400,   401,   401,   401,
   401,   401,   401,   401,   401,   402,   402,   402,   402,   403,
   403,   403,   403,   404,   404,   404,   404,   404,   405,   405,
   405
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     4,     5,     2,     0,     2,     0,     0,     3,     4,
     5,     0,     6,     5,     1,     0,     0,     7,     2,     1,
     2,     1,     1,     1,     1,     0,     3,     4,     1,     1,
     3,     0,     3,     4,     1,     3,     6,     5,     1,     4,
     3,     0,     3,     6,     0,     1,     4,     0,     2,     3,
     0,     2,     5,     6,     7,     1,     0,     3,     4,     4,
     0,     2,     0,     3,     1,     3,     0,     2,     1,     0,
     0,     7,     3,     3,     6,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
     2,     2,     3,     1,     3,     2,     1,     2,     0,     5,
     0,    11,     4,     4,     0,     7,     6,     2,     2,     2,
     2,     3,     2,     3,     2,     3,     1,     3,     0,     3,
     6,     0,     4,     0,     2,     3,     4,     0,     4,     0,
     2,     3,     3,     4,     0,     4,     0,     2,     3,     3,
     4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     4,     3,     4,     5,     0,
     4,     0,     2,     3,     3,     3,     3,     3,     3,     7,
     3,     3,     3,     3,     3,     7,     7,     7,     0,     2,
     3,     1,     0,     2,     3,     4,     3,     4,     4,     4,
     4,     0,     4,     0,     2,     3,     3,     4,     4,     7,
     3,     3,     3,     0,     0,     0,    18,     0,     4,     0,
     2,     3,     3,     3,     1,     3,     0,     3,     1,     3,
     0,     3,     0,     4,     0,     2,     3,     3,     3,     0,
     4,     0,     2,     3,     5,     3,     3,     4,     0,     2,
     3,     1,     0,     2,     3,     4,     3,     4,     4,     0,
     4,     0,     2,     3,     3,     3,     3,     0,     6,     3,
     0,     5,     3,     3,     3,     3,     0,     3,     0,     2,
     4,     4,     4,     4,     0,     2,     3,     3,     3,     0,
     2,     3,     3,     3,     3,     0,     2,     0,     0,     9,
     3,     3,     3,     0,     2,     3,     0,     0,     9,     0,
     1,     1,     1,     1,     1,     1,     4,     3,     0,     2,
     3,     1,     0,     2,     3,     4,     4,     0,     5,     0,
     4,     0,     2,     3,     3,     3,     3,     3,     3,     3,
     3,     2,     3,     0,     3,     1,     3,     0,     3,     0,
     2,     3,     3,     4,     4,     4,     4,     5,     5,     2,
     7,    11,     7,     7,     9,     9,    11,    13,    15,    11,
    13,     0,     7,     0,     7,     7,     5,     3,     1,     1,
     0,     2,     3,     3,     2,     0,     2,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
     0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
     3,     3,     3,     3,     4,     4,     4,     0,     4,     0,
     2,     3,     3,     3,     3,     3,     3,     0,     2,     3,
     1,     0,     2,     3,     4,     4,     3,     4,     0,     4,
     0,     2,     3,     4,     0,     5,     5,     0,     2,     0,
     6,     3,     0,     4,     3,     3,     0,     2,     3,     1,
     0,     2,     3,     3,     3,     3,     4,     0,     8,     0,
     0,     3,     7,     7,     0,    10,     3,     6,     1,     1,
     1,     1,     0,     3,     1,     2,     2,     0,     0,    14,
     2,     0,    14,     4,     0,    13,     0,     0,    19,     0,
     0,     0,    25,    12,     0,     2,     3,     4,     4,     3,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     5,     2,     3,     0,     2,     4,
     4,     5,     0,     3,     5,     5,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     6,     4,     4,     4,     4,
     4,     4,     6,     6,     6,     5,     2,     1,     1,     1,
     1,     1,     1,     1,     1,     0,     1,     1,     3,     1,
     1,     3,     3,     3,     6,     5,     4,     6,     1,     1,
     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,   626,   640,   639,     0,    18,   553,    27,
   179,   142,   155,   209,    71,   269,   339,   448,     0,   477,
     0,    20,    24,     0,     0,     0,    26,   619,   618,   625,
     0,     0,     0,   620,   621,   622,   623,   624,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   627,   578,     0,   628,     0,    65,    28,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    21,     0,     0,     0,   551,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   580,   581,     0,
   630,     0,   631,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   617,
   550,     0,     0,    66,     0,     6,     0,   183,     8,   180,
   182,   144,     9,   157,    10,   213,    11,   210,   212,     0,
     0,     7,    72,    76,   273,    12,   270,   272,   343,    13,
   340,   342,   452,    14,   449,   451,   488,   481,    15,   478,
   480,     0,    22,   503,     0,     0,    68,    42,     0,    40,
   495,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   579,   629,     0,     0,   634,     0,
   595,   594,   592,   593,   588,   590,   589,   591,   583,   582,
   584,   585,   586,   587,     0,   552,   554,     0,     0,    29,
    35,     0,     0,     0,     0,     0,    77,     0,     0,     0,
     0,     0,    23,     0,     0,   505,     0,     0,     0,     0,
     0,     0,     0,     0,   525,   525,     0,    41,    55,    59,
    52,    39,    50,     0,    36,   637,     0,   596,   597,   598,
   599,   600,   601,   602,   603,   604,   605,     0,   607,   608,
   609,   610,   611,   612,     0,     0,     0,   632,   633,     0,
     0,     0,     0,     0,   626,     0,     0,     0,    62,     0,
     0,     0,   181,   184,     0,     0,   143,   145,     0,    81,
     0,   156,   158,     0,     0,     0,     0,     0,     0,   211,
   214,     0,     0,    65,     0,     0,     0,     0,   271,   274,
     0,     0,   348,   341,   344,     0,     0,     0,     0,   450,
   453,   490,     0,     0,     0,     0,     0,   479,   482,     0,
   501,   502,   499,   500,   497,     0,   506,   507,    81,   511,
     0,     0,     0,     0,     0,     0,     0,    69,     0,     0,
    65,     0,     0,     0,     0,     0,     0,     0,     0,   636,
   616,   641,   556,   555,   625,     0,     0,     0,    32,     0,
    65,     0,   190,     0,     0,   148,     0,   162,     0,     0,
     0,    87,     0,   260,     0,     0,   222,   238,   253,    81,
     0,     0,     0,     0,     0,   280,   299,     0,   350,     0,
     0,   459,    68,     0,   491,     0,   490,     0,     0,     0,
   504,   503,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   526,     0,    56,     0,    61,     0,    51,     0,     0,
    45,    37,    44,   638,   606,   613,   614,   615,   635,    30,
     0,    70,     0,    43,     0,     0,     0,   190,     0,   187,
   185,     0,     0,     0,   146,     0,     0,     0,   160,    82,
     0,   159,     0,   217,   215,     0,     0,     0,     0,     0,
    81,    73,    78,   277,   275,     0,     0,     0,   345,     0,
     0,   370,   454,     0,     0,     0,   457,   489,     0,   483,
   491,   484,   486,   485,     0,     0,    81,     0,   514,     0,
     0,     0,   493,   626,   626,     0,     0,     0,     0,   626,
     0,   548,   548,   548,   531,     0,     0,     0,     0,   546,
   494,     0,     0,    60,     0,    53,   525,    65,    67,     0,
    31,    34,    63,     0,   192,   188,   186,   150,   147,   164,
   161,     0,     0,   625,   557,   558,   559,   560,   561,   562,
   563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
   573,   574,   575,   576,     0,   125,     0,     0,   121,   119,
     0,     0,     0,     0,     0,     0,     0,     0,    88,    89,
   117,     0,   114,   262,   221,   216,   224,   218,   240,   219,
   255,   220,    74,     0,   276,   282,   278,     0,     0,     0,
     0,   279,   300,   346,   352,   347,     0,   455,   461,   458,
   456,   492,   487,   498,     0,     0,   508,   515,   517,   520,
   543,   547,   540,     0,     0,   527,   530,   538,   539,   533,
   534,   537,   535,   536,   532,   542,   541,     0,   544,    58,
     0,    54,     0,     0,     0,    33,     0,   189,     0,     0,
     0,    79,    80,   116,     0,     0,     0,     0,     0,     0,
     0,   111,   110,   112,     0,   133,   131,   128,   130,   129,
     0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   118,   139,     0,     0,     0,     0,    75,     0,   316,   316,
   324,   305,     0,     0,    81,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   392,   394,
     0,   349,   371,     0,     0,    81,     0,     0,     0,     0,
   528,   529,   549,     0,    57,     0,    38,    49,     0,     0,
     0,     0,     0,     0,     0,    81,    81,    81,    81,     0,
     0,     0,    81,   191,   193,     0,     0,   149,   151,     0,
     0,     0,   163,   165,     0,    87,     0,     0,     0,    87,
     0,   113,     0,   338,     0,   109,   108,   105,   106,   107,
   101,   103,   102,   104,    97,    98,    93,    96,    99,    94,
   100,   132,   135,     0,   137,     0,     0,   115,     0,     0,
     0,     0,     0,   261,   263,     0,     0,     0,     0,    83,
     0,     0,   223,   225,     0,     0,     0,   239,   241,     0,
     0,     0,   254,   256,     0,     0,     0,     0,     0,     0,
     0,     0,   291,   281,   283,   330,   330,   330,     0,     0,
     0,     0,     0,   626,     0,     0,     0,   351,   353,     0,
     0,    81,     0,     0,     0,    81,     0,     0,     0,     0,
   406,     0,   413,     0,   421,   428,     0,     0,     0,     0,
     0,   380,     0,     0,   460,   462,     0,     0,     0,     0,
     0,     0,   545,   496,    68,    47,    64,     0,     0,     0,
     0,    81,     0,    81,     0,     0,     0,     0,     0,     0,
    81,     0,     0,     0,   139,   169,     0,     0,   123,     0,
   124,     0,     0,     0,    87,   337,     0,   134,   136,     0,
     0,     0,     0,     0,     0,     0,    68,     0,     0,   234,
     0,    81,     0,     0,     0,     0,   249,   251,     0,   245,
   247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    68,     0,     0,     0,    87,     0,     0,   331,   332,
   333,   334,   335,   336,     0,   301,   317,     0,   302,     0,
   303,   325,     0,     0,     0,   310,   304,   306,     0,     0,
    68,   364,     0,     0,     0,     0,   366,   368,     0,     0,
   372,     0,     0,   373,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   398,     0,
    83,    83,   465,     0,     0,     0,     0,     0,     0,     0,
    48,   195,   196,   201,   202,     0,   205,     0,   204,   198,
   197,    65,   199,   194,     0,   203,   153,   152,     0,     0,
   166,   167,     0,     0,     0,   120,     0,    91,   138,     0,
   140,   264,     0,   266,   267,     0,   226,   227,     0,     0,
     0,    65,    85,     0,   231,   232,   233,   242,    65,   244,
    65,   243,   258,   257,   259,   295,   294,   287,   285,   286,
   284,   288,   290,   296,   293,     0,     0,     0,     0,   318,
     0,   327,     0,     0,     0,   355,   354,   362,    65,   356,
   357,   360,   361,    65,   358,   359,     0,     0,    81,     0,
     0,     0,    81,     0,     0,     0,    81,     0,     0,    81,
   374,   407,     0,     0,    81,     0,     0,     0,     0,   375,
   414,     0,     0,     0,     0,    81,     0,   376,   422,     0,
     0,     0,     0,     0,     0,     0,     0,   377,   429,    81,
     0,   400,   399,   401,   401,     0,   463,     0,   626,   509,
     0,   518,   521,    81,    81,     0,    81,   154,   171,   168,
     0,    95,     0,   127,     0,     0,     0,   268,   228,     0,
   229,     0,    84,    81,   250,     0,   246,     0,   297,     0,
   322,   323,   321,    87,   326,    87,   307,   308,     0,     0,
     0,     0,   309,   311,   363,     0,   367,     0,   378,   379,
     0,     0,   370,     0,     0,     0,     0,   370,     0,     0,
     0,     0,     0,   370,     0,     0,     0,     0,     0,     0,
     0,   370,     0,     0,     0,     0,     0,   370,   370,     0,
     0,   438,     0,     0,   397,     0,     0,     0,     0,   464,
     0,   512,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   126,    87,    92,     0,   265,     0,     0,    86,   252,
   248,     0,     0,   292,   319,   328,     0,     0,     0,     0,
   365,   369,     0,   626,     0,   626,     0,     0,    81,     0,
   410,   408,   409,   411,    81,     0,   417,   415,   416,   418,
   419,    81,   424,     0,   423,   425,   426,   432,   434,     0,
     0,   430,   431,     0,   433,     0,     0,   626,   402,     0,
   468,   468,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   170,   172,
     0,   141,     0,     0,     0,   289,     0,     0,   312,   313,
   314,   315,   383,     0,   381,     0,   384,     0,     0,   412,
     0,   420,     0,   427,   436,   437,   440,   435,   396,   393,
     0,   626,   405,   395,   330,   330,   524,   626,     0,     0,
     0,     0,   208,   207,   200,   206,     0,     0,     0,     0,
     0,     0,    87,     0,   230,   298,    87,     0,     0,     0,
     0,     0,    81,     0,     0,     0,     0,   403,   404,     0,
     0,     0,   473,   467,     0,   469,   466,     0,     0,   516,
     0,   522,   173,   174,   175,   176,   177,   178,     0,     0,
     0,     0,   386,   370,     0,   385,     0,     0,   370,     0,
     0,     0,    81,     0,     0,     0,   439,   441,     0,     0,
     0,     0,   470,   513,   510,     0,     0,   122,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   475,   476,   472,     0,    87,     0,     0,
   235,   320,   329,   382,   387,   370,     0,   390,   370,   442,
   445,   446,   443,   444,   447,   474,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   388,   370,   391,
   471,     0,     0,     0,     0,   519,     0,   236,   389,     0,
     0,     0,     0,     0,    68,     0,     0,     0,     0,   523,
   237,     0,     0,     0
};

static const short yydefgoto[] = {  1572,
     1,     2,     3,    19,    20,    21,    89,   157,   250,   483,
   200,   393,   568,   201,   202,   472,   684,   780,   282,   391,
   283,   411,   155,   317,   278,   318,    94,   173,   344,   421,
   422,  1193,  1104,   500,   501,   619,   815,  1215,   620,   700,
   699,   696,   731,   836,   838,    91,   253,   328,   494,   690,
   799,    92,   254,   333,   496,   691,   804,  1080,  1301,  1380,
    90,   160,   252,   324,   489,   689,   795,    93,   168,   255,
   341,   507,   734,   854,  1101,  1540,  1561,   508,   735,   859,
   982,  1111,   979,  1109,   509,   736,   864,   503,   733,   845,
    95,   177,   258,   350,   517,   738,   875,  1229,   996,  1313,
   518,   643,   879,  1018,  1135,  1244,   876,  1007,  1234,  1387,
   878,  1012,  1236,  1388,  1008,   621,    96,   181,   259,   355,
   440,   521,   743,   889,  1023,  1139,  1029,  1144,   647,   763,
   910,   911,  1194,  1286,  1359,  1042,  1162,  1044,  1171,  1046,
  1179,  1047,  1189,  1354,  1447,  1488,    97,   185,   260,   361,
   525,   764,   916,  1196,  1415,  1456,  1518,  1492,    99,   190,
   262,   369,    22,   261,   445,   529,    47,   284,   195,   376,
   265,   275,   767,  1293,  1364,   768,   769,  1295,   770,  1296,
  1497,   386,   462,   672,    23,    88,   622,   131,    84,    85,
   132,   133,    28
};

static const short yypact[] = {-32768,
-32768,    79,  2635,  -151,   253,  -162,  -100,   -80,   -73,   -51,
   -26,   -22,    11,    89,   100,    15,    32,   210,-32768,-32768,
   259,-32768,-32768,  1481,-32768,-32768,   108,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   192,-32768,
   292,-32768,-32768,   153,   157,   172,-32768,-32768,-32768,-32768,
   388,   194,   205,-32768,-32768,-32768,-32768,-32768,   232,   234,
   249,   279,   306,   324,   360,   390,   403,   412,   426,   440,
   453,   465,   483,   487,   490,   521,   531,   538,  2539,  2539,
  2539,  2465,  2398,-32768,   441,-32768,   253,  -167,   180,    44,
   141,   267,    54,    18,    61,    69,   129,   511,   135,   317,
-32768,   557,   557,   146,-32768,   600,   636,  2539,  2539,  2539,
  2539,  2539,  2539,  2539,  2539,  2539,  2539,  2539,  2539,  2539,
  2539,  2539,  2539,  2539,  2539,  2539,  2539,   -45,   -45,  3425,
  2398,   254,-32768,  2019,  2539,  2539,  2539,  2539,  2539,  2539,
  2539,  2539,  2539,  2539,  2539,  2539,  2539,  2539,  2539,-32768,
-32768,   282,   746,-32768,   753,-32768,   358,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,     8,
   556,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   756,-32768,   561,  1371,  1371,   170,-32768,    38,-32768,
-32768,   578,   563,   559,  3452,  3479,  3506,  3533,  3560,  3587,
  3614,  3641,  3668,  3695,  2015,  3722,  3749,  3776,  3803,  3830,
  3857,  2659,  2690,  2721,-32768,-32768,  2465,  2539,  2419,  2576,
  1212,  1787,  2481,  2481,  1142,  1142,  1142,  1142,   392,   392,
   -45,   -45,   -45,   -45,   253,-32768,   604,  -128,   612,-32768,
-32768,   229,   272,   305,   244,   142,-32768,   301,   551,  1031,
   571,   654,-32768,   146,   555,-32768,   146,   146,   133,   587,
   611,   618,   630,   632,-32768,-32768,   562,-32768,   841,   634,
-32768,-32768,-32768,   640,-32768,-32768,   848,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2539,-32768,-32768,
-32768,-32768,-32768,-32768,  2539,  2539,  2539,  2398,-32768,  3884,
  2539,  2539,   650,  2502,   680,  1982,   685,   701,-32768,    40,
   881,   883,-32768,-32768,   682,   891,-32768,-32768,   733,   285,
   893,-32768,-32768,   750,   905,   956,   758,   789,   806,-32768,
-32768,   813,   838,    55,  1041,  1042,   839,   840,-32768,-32768,
  1045,   846,-32768,-32768,-32768,  1051,   849,  1052,  1054,-32768,
-32768,-32768,  1055,   854,  1059,   253,  1060,-32768,-32768,   871,
-32768,-32768,-32768,-32768,-32768,  1072,   924,-32768,   285,-32768,
   878,  2465,   879,   880,   884,    95,   102,-32768,    25,   396,
   295,   988,   132,   890,  3911,  3938,  3965,  3992,  2539,  4154,
  4154,-32768,-32768,  4154,   894,  1090,  2539,  3155,-32768,   155,
   112,   892,-32768,  1093,    41,-32768,  1101,-32768,   906,   907,
  1105,-32768,  1106,-32768,  1107,    63,-32768,-32768,-32768,   285,
   936,  1110,  1114,  1113,   120,-32768,-32768,   143,-32768,   912,
   145,-32768,   914,  1117,   915,  1119,-32768,  1122,  1123,  1125,
-32768,   561,  1128,   925,  2465,   333,  2465,  2465,  2465,  1130,
  2581,-32768,  1131,  1133,  2539,-32768,  3185,-32768,    73,   146,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4154,-32768,
  3215,-32768,   155,-32768,  1139,  1143,  1149,-32768,   367,-32768,
-32768,   950,  1151,   387,-32768,   401,  2539,  1154,-32768,-32768,
  1175,-32768,   428,-32768,-32768,  1157,   437,   452,   458,  1158,
   285,-32768,-32768,-32768,-32768,  1159,   464,   648,-32768,  1160,
   480,-32768,-32768,  1161,   519,  1163,-32768,-32768,   259,-32768,
   961,-32768,-32768,-32768,   963,   968,   285,   391,-32768,   530,
   546,   564,-32768,  1411,  1411,  1167,   176,  2539,  2539,  1411,
  2539,  1176,-32768,-32768,-32768,  2539,  2539,  1178,  1531,-32768,
-32768,  2539,  4019,-32768,   383,-32768,-32768,   186,-32768,  1177,
-32768,-32768,   977,   568,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  4046,   982,   263,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   984,-32768,  1016,  1018,-32768,-32768,
  1221,  1175,  1175,  1175,  1175,  1228,   150,  1227,  4229,  1026,
  1032,  1032,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1231,-32768,-32768,-32768,  1030,  1036,  1037,
  1039,-32768,-32768,-32768,-32768,-32768,    75,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2539,  1024,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   253,   253,-32768,  4154,  4154,-32768,  4154,
-32768,  1244,  1244,  1244,  4154,  4154,-32768,  2465,  4154,  4154,
  1248,-32768,   255,  1048,    29,-32768,  2539,-32768,   566,    94,
   252,-32768,-32768,-32768,  1046,  1058,  1046,  1175,  1064,  1070,
  1067,  1075,  1075,  1075,  4206,-32768,-32768,-32768,-32768,-32768,
    12,-32768,  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,
  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1276,   897,
-32768,  1073,   649,   599,   309,   327,-32768,   791,-32768,-32768,
-32768,-32768,   446,    17,   128,  1080,  1081,  1082,  1083,  1087,
  1095,   270,   371,   382,  1088,  1097,  1297,  1102,-32768,-32768,
  1298,-32768,-32768,   227,  2752,   285,  1098,  1099,  1100,  1115,
-32768,-32768,-32768,   576,-32768,  1304,-32768,-32768,  1308,    38,
  3245,   146,   146,   146,   146,   130,   131,   285,   285,  1118,
  1317,  1318,   178,-32768,-32768,   139,  1321,-32768,-32768,  1120,
  1323,  1326,-32768,-32768,  1127,-32768,  1135,  2634,  1330,-32768,
  1137,-32768,  1136,-32768,  1175,  2533,  4247,  4262,  4262,  4262,
   617,   617,   617,   617,   525,   525,  1075,  1075,  1075,  1075,
  1075,-32768,-32768,  1140,  4229,   302,  2428,-32768,  1342,    31,
    31,  1343,  1350,-32768,-32768,  1352,  1353,  1354,  1152,  1155,
   146,   146,-32768,-32768,  1355,    42,    46,-32768,-32768,  1358,
  1360,  1361,-32768,-32768,  1362,  1365,   284,  1366,  1367,  1370,
  1372,   146,-32768,-32768,-32768,   803,  1215,   843,   289,  1373,
  1374,    64,   253,  1411,   253,    66,  1375,-32768,-32768,  1369,
  1376,   285,  1378,  1381,  1382,   285,  1384,  1385,  1386,  2539,
-32768,  2539,-32768,  2539,-32768,-32768,   146,  1396,  1387,  1189,
  1206,-32768,  1202,  1407,-32768,-32768,  2539,  1208,  2465,  2465,
  2465,  2465,-32768,-32768,   914,-32768,-32768,  1414,  1444,  1445,
  1446,   285,  1447,   285,  1448,  1449,  1450,  1457,  1460,  1465,
   285,  1466,  1472,  1473,  1073,-32768,  1476,  1482,-32768,  1250,
-32768,  1175,  1279,  1286,-32768,-32768,  2603,-32768,-32768,  1175,
  1288,   592,  1525,  1451,  1530,  1532,   914,  1534,   147,  1334,
  1539,   285,  1538,  1565,  1569,  1575,-32768,-32768,  1578,-32768,
-32768,  1579,  1581,  1582,  1584,  1585,  1588,  1589,  1591,  1592,
  1593,   914,  1594,  1596,  1599,-32768,  1602,  1603,-32768,-32768,
-32768,-32768,-32768,-32768,   146,-32768,-32768,  1379,-32768,   146,
-32768,-32768,  1405,  1606,  1607,-32768,-32768,-32768,  1608,  1609,
   914,-32768,  1610,  1611,  1612,  1614,-32768,-32768,  1615,  1617,
-32768,  1409,  1420,-32768,  1415,  1416,  1423,  1418,  1419,  1421,
  2783,   835,  2814,   353,  2845,   450,   466,  1422,-32768,  1430,
    67,    67,-32768,  1632,  3275,  1435,   594,   597,   622,   635,
-32768,-32768,-32768,-32768,-32768,  1434,-32768,  1437,-32768,-32768,
-32768,  1438,-32768,-32768,  1440,-32768,-32768,-32768,  1639,   652,
-32768,-32768,   146,  4181,  2539,-32768,  1453,-32768,  4229,   146,
-32768,-32768,  1647,-32768,-32768,  1648,-32768,-32768,  1655,  1563,
  1656,  1438,-32768,   662,-32768,-32768,-32768,-32768,   684,-32768,
   741,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1456,  1659,  1661,  1662,-32768,
  1663,-32768,  1664,  1665,   265,-32768,-32768,-32768,   744,-32768,
-32768,-32768,-32768,   792,-32768,-32768,  1666,  1667,   285,  1671,
  1468,  2539,   285,   146,  2539,  1469,   285,  2539,  2539,   285,
-32768,-32768,  2539,  1470,   285,  2539,  2539,  2539,  2539,-32768,
-32768,  2539,  2539,  1475,  2539,   285,  2539,-32768,-32768,  2539,
  1676,  1477,  1478,  2539,  2539,  1479,  2539,-32768,-32768,   285,
  1675,-32768,-32768,-32768,-32768,     9,-32768,  1480,  1411,-32768,
  1488,-32768,-32768,   285,   285,  1682,   285,-32768,-32768,-32768,
  1487,-32768,  2876,-32768,  1175,  1498,  1697,-32768,-32768,  1700,
-32768,  1702,-32768,   285,-32768,  1703,-32768,  1705,  1507,  1706,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1046,  1046,
  1046,   146,-32768,-32768,-32768,  1709,-32768,  1712,-32768,-32768,
  1513,  1509,-32768,  2907,  1516,  1511,  2938,-32768,  1721,   262,
   307,  1722,  2969,-32768,  1724,   641,   837,   885,  1076,  3000,
  1281,-32768,  1878,  1725,  1906,  1933,  1727,-32768,-32768,  1960,
  2057,-32768,  2085,  1540,-32768,   312,   361,  1527,  1537,-32768,
  2539,-32768,  1541,  1543,  1547,  1550,  1542,  1544,  1552,  1555,
   478,-32768,-32768,  4229,  1553,-32768,  1757,  1557,-32768,-32768,
-32768,  1760,  1762,-32768,-32768,-32768,  1763,  1765,  1769,  1774,
-32768,-32768,  1775,  1411,  1104,  1411,  1776,  1780,   285,  1454,
-32768,-32768,-32768,-32768,   285,  1517,-32768,-32768,-32768,-32768,
-32768,   285,-32768,  1576,-32768,-32768,-32768,-32768,-32768,  1618,
  1654,-32768,-32768,   796,-32768,  1781,  1782,   953,-32768,  1785,
-32768,-32768,  3305,  1587,  2465,  2539,  2465,  2465,  1789,  1792,
  1793,  1794,  1803,  2539,  2539,  2539,  2539,  2539,-32768,-32768,
  1604,-32768,  1723,  1807,  1613,-32768,  1616,  1619,-32768,-32768,
-32768,-32768,-32768,  1627,  1695,  1622,-32768,  1635,  1634,-32768,
  1636,-32768,   362,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   253,  1411,-32768,-32768,   549,   689,-32768,  1411,   798,  3335,
   800,   818,-32768,-32768,-32768,-32768,  1813,  2112,  2139,  2166,
  2187,  2208,-32768,  1816,-32768,-32768,-32768,  1046,  1817,  1637,
  2539,  1842,   285,  2539,  1641,  2539,   784,-32768,-32768,  1847,
  1848,  1850,-32768,-32768,  1652,-32768,-32768,  1649,  1650,-32768,
  1668,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1657,  1670,
  1660,  1672,-32768,-32768,  4073,-32768,  1677,  3031,-32768,  4100,
  1867,  2539,   285,  1876,   146,  1879,-32768,-32768,  1880,  1881,
  1884,   146,-32768,-32768,-32768,  1683,  1685,-32768,  1890,  1892,
  1894,  1686,  1895,  1699,  2539,  1718,  1708,  1897,  2229,  1907,
  1908,  1911,  1913,-32768,-32768,-32768,  1914,-32768,  2539,  2465,
-32768,-32768,-32768,-32768,-32768,-32768,  4127,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1719,  3062,   825,  1885,
  1750,  1714,  1786,  1924,  2539,  1735,   146,-32768,-32768,-32768,
-32768,  3365,  1737,  1925,  1818,-32768,  2539,-32768,-32768,  3093,
  1826,  2539,  1942,  3124,   914,  2539,  1943,  3395,  1739,-32768,
-32768,  1952,  1953,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -124,-32768,-32768,  -243,   199,-32768,-32768,  1147,  -391,-32768,
  -419,-32768,  -338,  -408,  -438,-32768,-32768,-32768,-32768,  -153,
-32768,  1109,-32768,  -794,-32768,  -550,-32768,-32768,-32768,-32768,
-32768,-32768,  1333,-32768,  1011,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1474,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1224,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -870,  -569,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1218,-32768,
-32768,-32768,   913,   774,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   608,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1526,-32768,  1461,-32768,  1875,-32768,
  1573,  1783,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  -265,-32768,   488,  1199,-32768,-32768,   -24,  -482,  -541,
  -351,   -14,   -86
};


#define	YYLAST		4463


static const short yytable[] = {    83,
   152,   473,   661,   662,   526,   433,   493,  1013,   669,    86,
   387,   950,   343,  1288,   694,   954,   813,   506,   623,    39,
   370,   890,   170,   377,   378,   380,   516,   464,    24,   520,
   456,     6,   524,   778,  1325,   484,    41,   153,    42,  1330,
   279,    29,   280,   154,   412,  1336,   977,   491,     4,   566,
   980,   315,   469,  1344,   128,   129,   130,     6,     4,  1350,
  1351,   702,   703,   704,   705,     4,   171,     6,  1021,   505,
  1027,  1192,   487,     4,     6,   279,   779,   280,    -2,   744,
   316,   198,     6,   205,   206,   207,   208,   209,   210,   211,
   212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
   222,   223,   224,   538,  1289,   540,   541,   542,    30,   229,
   230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
   240,   241,   242,   243,   244,   805,   515,   807,    31,   623,
   623,   623,   623,     4,   279,    32,   280,   197,   419,     4,
   419,   419,     6,   197,   796,   682,   197,   808,     6,   519,
   197,   523,   707,  1098,   708,   149,   797,    33,   313,   484,
  1087,   150,   816,   817,   818,   819,   820,   821,   822,   823,
   824,   825,   826,   827,   828,   829,   830,   831,   471,   835,
    25,    26,    34,   198,    27,   943,    35,    24,   419,   198,
   406,   745,   198,   746,   747,   748,   198,   749,   750,   751,
   752,  1126,   308,   310,   753,   198,   420,   754,   420,   420,
   755,   256,   309,   756,   757,   623,    43,   758,  1290,    36,
   891,   814,   759,    40,   760,   454,   567,   172,   465,   685,
   623,   623,   623,   623,   623,   623,   623,   623,   623,   623,
   623,   623,   623,   623,   623,   623,   281,   623,   413,   492,
   978,   761,   158,   159,   981,  1502,   420,    25,    26,   432,
  1506,    27,   166,   167,   957,   154,   565,   709,  1332,   175,
   176,   492,  1022,   395,  1028,   972,   510,   179,   180,   449,
   396,   397,   398,   913,   762,   485,   400,   401,   988,   404,
    83,   408,   320,   334,   321,   419,   100,    37,   101,   460,
    86,   683,   914,   798,   322,   461,   463,  1541,    38,   335,
  1543,    87,   461,  1333,   710,   800,   486,   801,   802,   336,
   337,   192,   154,   193,  1239,  1240,   774,   338,   492,   339,
  1555,   892,   623,   932,   934,   325,    98,   183,   184,   199,
   281,   379,  1025,   188,   189,   199,   342,   326,   199,   162,
   163,   492,   199,   492,  1014,   492,   102,   634,   570,  1241,
   103,   199,   248,   420,   664,   467,   345,   665,   329,   989,
  1242,     6,   330,   -43,   479,   104,   346,  1015,   277,   990,
   331,   941,   481,   656,   855,   279,   856,   280,   926,   156,
   -46,   347,   860,   857,   105,   348,   154,   106,    48,    49,
    50,  1084,   861,   249,   862,    44,    45,    46,   107,  1089,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,    78,   108,   915,   109,   323,  1315,
   563,  1316,   135,   136,   137,   138,   139,   151,   140,   141,
   142,   143,   110,   340,   144,   145,   146,   147,   148,   776,
   666,   803,   149,   226,   227,   461,  -577,  1164,   150,   623,
  1165,   618,   582,   900,  1243,   164,   165,   623,   901,  1166,
  1167,   327,   111,  1168,  1169,   962,  1061,   135,   136,   137,
   138,   139,   245,   140,   141,   142,   143,  1016,  1017,   144,
   145,   146,   147,   148,   468,   154,   959,   149,  1381,   112,
   349,   880,   960,   150,   332,   187,  1357,  1173,   858,    83,
    83,   881,  1358,   667,   668,    83,   670,   113,  1096,    86,
    86,   675,   676,  1180,   679,    86,   863,   680,   928,   929,
   930,   931,   539,   227,  1455,  1455,  1373,  1374,  1375,  1376,
  1377,  1378,   944,  1122,   882,   883,   884,   885,   886,   887,
  1099,   194,  1170,   114,  1174,  1360,  1445,  1057,  1058,  1059,
  1060,  1358,  1446,  1181,   902,   575,   576,   771,   772,   903,
  1182,  1183,  1138,  1175,  1176,   904,   146,   147,   148,    79,
   905,   893,   149,   115,    80,   578,   579,    81,   150,  1184,
   657,   227,  1185,  1186,   203,   466,   116,   974,   975,   580,
   581,  1450,   918,  1451,  1452,   117,   782,   783,   784,   785,
   786,   787,   788,   789,   790,  1177,   351,   791,   995,   118,
   765,   792,   933,   935,   936,   937,   624,   625,  1469,   942,
   204,  1187,  1471,   119,   793,   627,   628,  1338,   999,  1000,
  1001,  1002,  1003,  1004,  1453,   888,   120,  1292,   352,  1178,
   629,   630,   781,  1048,  1304,   353,   631,   632,   121,  1317,
  1318,  1319,   636,   637,   846,  1188,   847,   848,   849,   850,
   851,   852,    48,    49,   405,    51,   122,  1379,   645,   646,
   123,    52,    53,   124,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    77,    78,   724,
   725,   726,   727,  1537,   125,   728,   839,   649,   650,   363,
   198,   840,   623,  1206,   126,   841,   842,   843,  1033,   658,
   227,   127,  1037,   638,   639,   640,   641,   371,   372,   373,
   374,  1450,   246,  1451,  1452,   659,   227,   247,  1454,   257,
   354,  1129,   263,  1222,   264,   375,  1131,   286,   364,   287,
  1226,   388,  1228,   660,   227,   794,   575,   688,  1066,   362,
  1068,   285,  1394,   314,  1396,   923,   227,  1075,   999,  1000,
  1001,  1002,  1003,  1004,  1453,   381,  1024,   365,  1026,   366,
  1246,  1091,   227,  1200,   227,  1248,  1201,   227,   853,   722,
   723,   724,   725,   726,   727,   319,  1413,   728,  1103,   382,
   367,   135,   136,   137,   138,   139,   383,   140,   141,   142,
   143,  1202,   227,   144,   145,   146,   147,   148,   384,  1211,
   385,   149,   390,  1339,  1203,   227,  1216,   150,   389,  1481,
   392,  1482,   394,   865,   402,   866,   867,   642,   844,    83,
  1209,  1210,  1483,   368,   409,   997,   868,   998,  1472,    86,
  1449,  1223,  1224,    79,  1484,  1041,  1458,  1043,    80,  1045,
   410,    81,   869,   870,   871,   414,   199,   415,    82,  1485,
   416,  1340,  1055,  1225,   154,   417,   872,   423,  1457,    48,
    49,   584,   999,  1000,  1001,  1002,  1003,  1004,  1005,   425,
  1256,    54,    55,    56,    57,    58,   585,   586,   587,   588,
   589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
   599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
   609,   418,   999,  1000,  1001,  1002,  1003,  1004,  1010,  1156,
  1227,   154,  1157,  1245,   154,    48,    49,    50,   424,  1486,
   426,  1158,  1159,  1160,    52,    53,   427,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
    77,    78,   430,  1487,   873,  1251,   610,   428,  1320,  1255,
   874,  1247,   154,  1259,  1407,  1408,  1262,  1459,   227,  1461,
   227,  1265,  1006,  1419,   429,  1421,  1422,   135,   136,   137,
   138,   139,  1274,   140,   141,   142,   143,  1462,   227,   144,
   145,   146,   147,   148,  1546,   227,  1284,   149,   964,   965,
   673,   674,   431,   150,  1161,   434,   435,   436,   437,   438,
  1297,  1298,  1011,  1300,   439,   441,   443,   442,   444,   446,
  1213,  1499,   447,   448,   450,   135,   136,   137,   138,   139,
  1309,   140,   141,   142,   143,   451,   452,   144,   145,   146,
   147,   148,  1341,   611,   453,   149,   455,   457,   458,   612,
   613,   150,   459,   470,   474,   614,   480,   -43,   615,   490,
   488,   833,   834,   616,   617,   618,   356,   495,   744,   497,
   498,   499,   502,   504,  1411,   511,   512,  1412,   513,   514,
   522,   357,   277,   527,   528,   530,  1567,  1254,   532,   533,
  1257,   534,   536,  1260,  1261,   537,   543,   561,  1263,   358,
   562,  1266,  1267,  1268,  1269,   571,    79,  1270,  1271,   572,
  1273,    80,  1275,   573,    81,  1276,   407,   577,   583,  1280,
  1281,    82,  1283,   626,   633,   635,   644,   648,  1539,   651,
   653,   663,   359,   654,    83,  1399,   655,    48,    49,   584,
   671,  1401,   677,   686,    86,   687,   693,   695,  1403,    54,
    55,    56,    57,    58,   585,   586,   587,   588,   589,   590,
   591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
   601,   602,   603,   604,   605,   606,   607,   608,   609,   697,
   745,   698,   746,   747,   748,   701,   749,   750,   751,   752,
   706,   711,   729,   753,   766,   730,   754,   737,   739,   755,
   360,  1512,   756,   757,   740,   741,   758,   742,  1517,   773,
   775,   759,   777,   760,   618,   811,   135,   136,   137,   138,
   139,   806,   140,   141,   142,   143,  1363,   809,   144,   145,
   146,   147,   148,   810,   610,   728,   149,   997,   832,   998,
   761,   837,   150,   894,   895,   896,   897,  1343,   161,  1477,
   898,   169,   174,   178,   182,   186,   906,   191,   899,    83,
   907,    83,   908,  1554,   912,   909,   919,   920,   921,    86,
   924,    86,   925,  1395,   999,  1000,  1001,  1002,  1003,  1004,
  1005,   939,   940,   922,  1448,   945,   938,   947,   946,  1510,
   948,   949,   953,    83,   144,   145,   146,   147,   148,   951,
   955,  1420,   149,    86,   958,   956,   963,   778,   150,  1428,
  1429,  1430,  1431,  1432,   967,   251,   968,   969,   970,   976,
   971,   611,   983,   972,   984,   985,   986,   612,   613,   987,
   991,   992,   993,   614,   994,  1031,   615,  1019,  1020,  1030,
  1032,   616,   617,   618,  1034,  1035,  1036,    83,  1038,  1039,
  1040,  1050,  1051,    83,   137,   138,   139,    86,   140,   141,
   142,   143,  1049,    86,   144,   145,   146,   147,   148,  1052,
  1053,  1054,   149,    48,    49,    50,  1475,  1056,   150,  1478,
  1062,  1480,    52,    53,  1009,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
  1063,  1064,  1065,  1067,  1069,  1070,  1071,  1509,   744,  1072,
  1083,   135,   136,   137,   138,   139,  1073,   140,   141,   142,
   143,  1074,  1076,   144,   145,   146,   147,   148,  1077,  1078,
  1527,   149,  1081,    48,    49,    50,    51,   150,  1082,  1085,
  1086,  1090,    52,    53,  1538,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
  1552,   744,   266,   267,   268,   269,   270,   271,   272,   273,
   274,  1092,  1560,    48,    49,    50,  1094,  1564,  1095,  1093,
  1097,  1568,  1100,  1102,  1105,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
   745,  1106,   746,   747,   748,  1107,   749,   750,   751,   752,
   744,  1108,  1130,   753,  1110,  1112,   754,  1113,  1114,   755,
  1115,  1116,   756,   757,  1117,  1118,   758,  1119,  1120,  1121,
  1123,   759,  1124,   760,    79,  1125,  1127,  1128,  1132,    80,
  1133,  1134,    81,  1147,  1136,  1137,  1140,  1141,  1142,    82,
  1143,  1145,   744,  1146,  1148,  1149,  1150,  1151,  1152,  1153,
   761,  1154,  1190,   745,  1191,   746,   747,   748,  1197,   749,
   750,   751,   752,  1199,  1204,  1208,   753,  1205,   154,   754,
  1207,  1217,   755,  1220,  1218,   756,   757,  1214,   744,   758,
  1230,  1219,  1221,  1400,   759,  1231,   760,  1232,  1233,  1235,
  1237,  1238,  1249,  1250,    79,  1252,  1253,  1258,  1264,    80,
  1277,  1285,    81,  1272,  1299,  1278,  1279,  1282,  1291,    82,
   744,  1302,   745,   761,   746,   747,   748,  1294,   749,   750,
   751,   752,  1305,  1306,  1307,   753,  1308,  1310,   754,  1311,
  1312,   755,  1314,  1321,   756,   757,  1322,  1323,   758,  1324,
  1327,  1328,   744,   759,    79,   760,  1402,  1331,  1334,    80,
  1337,  1346,    81,  1349,   745,  1361,   746,   747,   748,   678,
   749,   750,   751,   752,  1356,  1362,  1369,   753,  1370,  1365,
   754,  1366,   761,   755,   744,  1367,   756,   757,  1368,  1372,
   758,  1371,  1382,  1383,  1385,   759,  1384,   760,  1386,  1389,
   745,  1390,   746,   747,   748,  1391,   749,   750,   751,   752,
  1392,  1393,  1397,   753,  1398,  1404,   754,  1409,  1410,   755,
   744,  1414,   756,   757,   761,  1423,   758,  1418,  1424,  1425,
  1426,   759,   745,   760,   746,   747,   748,  1427,   749,   750,
   751,   752,  1434,  1435,  1433,   753,  1440,  1436,   754,  1463,
  1470,   755,   744,  1473,   756,   757,  1437,  1405,   758,  1438,
   761,  1439,  1441,   759,   745,   760,   746,   747,   748,  1442,
   749,   750,   751,   752,  1443,  1474,  1444,   753,  1476,  1479,
   754,  1489,  1490,   755,  1491,  1493,   756,   757,  1494,  1495,
   758,  1498,   761,  1406,  1500,   759,   745,   760,   746,   747,
   748,  1508,   749,   750,   751,   752,  1501,  1496,   492,   753,
  1511,  1504,   754,  1513,  1345,   755,  1514,  1515,   756,   757,
  1516,  1519,   758,  1520,   761,  1524,  1521,   759,  1522,   760,
  1523,  1525,   745,  1530,   746,   747,   748,  1526,   749,   750,
   751,   752,  1347,  1532,  1533,   753,  1529,  1534,   754,  1535,
  1536,   755,  1549,  1544,   756,   757,   761,  1528,   758,  1547,
  1551,  1558,  1563,   759,   745,   760,   746,   747,   748,  1348,
   749,   750,   751,   752,  1553,  1557,  1565,   753,  1571,  1569,
   754,  1573,  1574,   755,   732,  1079,   756,   757,   973,  1548,
   758,   574,   761,   877,  1195,   759,  1352,   760,  1287,  1416,
   138,   139,   531,   140,   141,   142,   143,   196,   276,   144,
   145,   146,   147,   148,    48,    49,    50,   149,   966,   652,
     0,     0,     0,   150,   761,  1550,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,    48,    49,    50,   535,     0,     0,  1559,     0,     0,
     0,     0,     0,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    77,    78,   135,   136,
   137,   138,   139,  1353,   140,   141,   142,   143,     0,     0,
   144,   145,   146,   147,   148,     0,     0,     0,   149,     0,
     0,     0,     0,     0,   150,     0,   135,   136,   137,   138,
   139,  1355,   140,   141,   142,   143,     0,     0,   144,   145,
   146,   147,   148,     0,     0,     0,   149,     0,     0,     0,
     0,     0,   150,   135,   136,   137,   138,   139,  1464,   140,
   141,   142,   143,     0,     0,   144,   145,   146,   147,   148,
     0,     0,     0,   149,     0,     0,     0,     0,     0,   150,
   135,   136,   137,   138,   139,  1465,   140,   141,   142,   143,
     0,     0,   144,   145,   146,   147,   148,     0,     0,     0,
   149,     0,     0,     0,     0,     0,   150,     0,     0,     0,
     0,     0,  1466,     0,     0,    79,     0,     0,     0,     0,
    80,     0,     0,    81,     0,     0,     0,     0,   407,     0,
     0,     0,     0,  1467,     0,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,    79,     0,  1468,   149,     0,    80,     0,     0,
    81,   150,   228,     0,     0,   298,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1531,     0,   135,   136,   137,
   138,   139,     0,   140,   141,   142,   143,     0,     0,   144,
   145,   146,   147,   148,     0,     0,     0,   149,     0,     0,
     0,     0,     0,   150,     0,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,   135,   136,   137,   138,   139,     0,   140,   141,
   142,   143,     0,     0,   144,   145,   146,   147,   148,     0,
     0,     0,   149,     0,     0,     0,     0,     0,   150,   135,
   136,   137,   138,   139,     0,   140,   141,   142,   143,     0,
     0,   144,   145,   146,   147,   148,     0,     0,     0,   149,
     0,     0,     0,     0,     0,   150,   135,   136,   137,   138,
   139,     0,   140,   141,   142,   143,     0,     0,   144,   145,
   146,   147,   148,     0,     0,     0,   149,   135,   136,   137,
   138,   139,   150,   140,   141,   142,   143,     0,     0,   144,
   145,   146,   147,   148,     0,     0,     0,   149,   135,   136,
   137,   138,   139,   150,   140,   141,   142,   143,     0,     0,
   144,   145,   146,   147,   148,   134,     0,     0,   149,   135,
   136,   137,   138,   139,   150,   140,   141,   142,   143,     0,
     0,   144,   145,   146,   147,   148,   311,     0,     0,   149,
    48,    49,    50,     0,     0,   150,     0,     0,     0,    52,
    53,     0,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,    77,    78,    48,    49,    50,
     0,     0,     0,     0,     0,     0,    52,    53,   961,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,    77,    78,    48,    49,    50,   403,     0,     0,
     0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,    48,    49,    50,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    77,    78,   135,   136,
   137,   138,   139,   312,   140,   141,   142,   143,     0,     0,
   144,   145,   146,   147,   148,     0,     0,     0,   149,   135,
   136,   137,   138,   139,   150,   140,   141,   142,   143,     0,
  1088,   144,   145,   146,   147,   148,     0,     0,     0,   149,
     0,    79,     0,     0,     0,   150,    80,     0,     0,    81,
     0,     0,     0,     0,     0,     0,     0,   544,     0,     4,
     0,     0,     0,     0,     5,     0,     0,     0,     6,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    79,     0,
     0,     0,     0,    80,     0,     0,    81,   140,   141,   142,
   143,     0,     0,   144,   145,   146,   147,   148,     0,     7,
     0,   149,     0,     0,     8,     0,     0,   150,     0,     0,
     0,   545,     0,     0,     0,    79,     0,     9,     0,    10,
    80,     0,     0,    81,     0,     0,     0,     0,     0,    11,
     0,     0,     0,    12,     0,   714,   715,   716,   717,   718,
   719,   720,   721,     0,    13,   722,   723,   724,   725,   726,
   727,   546,    79,   728,     0,     0,     0,    80,     0,     0,
    81,    14,   547,   548,   549,   550,   551,   552,   553,   554,
   555,   556,   557,   558,   559,   560,   135,   136,   137,   138,
   139,     0,   140,   141,   142,   143,     0,     0,   144,   145,
   146,   147,   148,     0,     0,    15,   149,    16,     0,     0,
     0,     0,   150,   712,   713,   714,   715,   716,   717,   718,
   719,   720,   721,     0,     0,   722,   723,   724,   725,   726,
   727,     0,     0,   728,     0,     0,     0,     0,     0,     0,
     0,     0,    17,    18,   712,   713,   714,   715,   716,   717,
   718,   719,   720,   721,     0,     0,   722,   723,   724,   725,
   726,   727,     0,     0,   728,     0,     0,     0,     0,   135,
   136,   137,   138,   139,   952,   140,   141,   142,   143,     0,
     0,   144,   145,   146,   147,   148,     0,     0,     0,   149,
     0,     0,     0,     0,     0,   150,     0,     0,     0,   305,
   135,   136,   137,   138,   139,     0,   140,   141,   142,   143,
     0,     0,   144,   145,   146,   147,   148,     0,     0,     0,
   149,     0,     0,     0,     0,     0,   150,     0,     0,     0,
   306,   135,   136,   137,   138,   139,     0,   140,   141,   142,
   143,     0,     0,   144,   145,   146,   147,   148,     0,     0,
     0,   149,     0,     0,     0,     0,     0,   150,     0,     0,
     0,   307,   135,   136,   137,   138,   139,     0,   140,   141,
   142,   143,     0,     0,   144,   145,   146,   147,   148,     0,
     0,     0,   149,     0,     0,     0,     0,     0,   150,     0,
     0,     0,   917,   135,   136,   137,   138,   139,     0,   140,
   141,   142,   143,     0,     0,   144,   145,   146,   147,   148,
     0,     0,     0,   149,     0,     0,     0,     0,     0,   150,
     0,     0,     0,  1155,   135,   136,   137,   138,   139,     0,
   140,   141,   142,   143,     0,     0,   144,   145,   146,   147,
   148,     0,     0,     0,   149,     0,     0,     0,     0,     0,
   150,     0,     0,     0,  1163,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,     0,  1172,   135,   136,   137,   138,
   139,     0,   140,   141,   142,   143,     0,     0,   144,   145,
   146,   147,   148,     0,     0,     0,   149,     0,     0,     0,
     0,     0,   150,     0,     0,     0,  1303,   135,   136,   137,
   138,   139,     0,   140,   141,   142,   143,     0,     0,   144,
   145,   146,   147,   148,     0,     0,     0,   149,     0,     0,
     0,     0,     0,   150,     0,     0,     0,  1326,   135,   136,
   137,   138,   139,     0,   140,   141,   142,   143,     0,     0,
   144,   145,   146,   147,   148,     0,     0,     0,   149,     0,
     0,     0,     0,     0,   150,     0,     0,     0,  1329,   135,
   136,   137,   138,   139,     0,   140,   141,   142,   143,     0,
     0,   144,   145,   146,   147,   148,     0,     0,     0,   149,
     0,     0,     0,     0,     0,   150,     0,     0,     0,  1335,
   135,   136,   137,   138,   139,     0,   140,   141,   142,   143,
     0,     0,   144,   145,   146,   147,   148,     0,     0,     0,
   149,     0,     0,     0,     0,     0,   150,     0,     0,     0,
  1342,   135,   136,   137,   138,   139,     0,   140,   141,   142,
   143,     0,     0,   144,   145,   146,   147,   148,     0,     0,
     0,   149,     0,     0,     0,     0,     0,   150,     0,     0,
     0,  1505,   135,   136,   137,   138,   139,     0,   140,   141,
   142,   143,     0,     0,   144,   145,   146,   147,   148,     0,
     0,     0,   149,     0,     0,     0,     0,     0,   150,     0,
     0,     0,  1545,   135,   136,   137,   138,   139,     0,   140,
   141,   142,   143,     0,     0,   144,   145,   146,   147,   148,
     0,     0,     0,   149,     0,     0,     0,     0,     0,   150,
     0,     0,     0,  1562,   135,   136,   137,   138,   139,     0,
   140,   141,   142,   143,     0,     0,   144,   145,   146,   147,
   148,     0,     0,     0,   149,     0,     0,     0,     0,     0,
   150,     0,     0,     0,  1566,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,   482,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,   564,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,   569,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,   927,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,  1198,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,  1417,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,  1460,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,  1556,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,     0,
     0,   150,     0,     0,  1570,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,   225,     0,     0,
     0,   150,   135,   136,   137,   138,   139,     0,   140,   141,
   142,   143,     0,     0,   144,   145,   146,   147,   148,     0,
     0,     0,   149,     0,     0,     0,   288,     0,   150,   135,
   136,   137,   138,   139,     0,   140,   141,   142,   143,     0,
     0,   144,   145,   146,   147,   148,     0,     0,     0,   149,
     0,     0,     0,   289,     0,   150,   135,   136,   137,   138,
   139,     0,   140,   141,   142,   143,     0,     0,   144,   145,
   146,   147,   148,     0,     0,     0,   149,     0,     0,     0,
   290,     0,   150,   135,   136,   137,   138,   139,     0,   140,
   141,   142,   143,     0,     0,   144,   145,   146,   147,   148,
     0,     0,     0,   149,     0,     0,     0,   291,     0,   150,
   135,   136,   137,   138,   139,     0,   140,   141,   142,   143,
     0,     0,   144,   145,   146,   147,   148,     0,     0,     0,
   149,     0,     0,     0,   292,     0,   150,   135,   136,   137,
   138,   139,     0,   140,   141,   142,   143,     0,     0,   144,
   145,   146,   147,   148,     0,     0,     0,   149,     0,     0,
     0,   293,     0,   150,   135,   136,   137,   138,   139,     0,
   140,   141,   142,   143,     0,     0,   144,   145,   146,   147,
   148,     0,     0,     0,   149,     0,     0,     0,   294,     0,
   150,   135,   136,   137,   138,   139,     0,   140,   141,   142,
   143,     0,     0,   144,   145,   146,   147,   148,     0,     0,
     0,   149,     0,     0,     0,   295,     0,   150,   135,   136,
   137,   138,   139,     0,   140,   141,   142,   143,     0,     0,
   144,   145,   146,   147,   148,     0,     0,     0,   149,     0,
     0,     0,   296,     0,   150,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,   297,
     0,   150,   135,   136,   137,   138,   139,     0,   140,   141,
   142,   143,     0,     0,   144,   145,   146,   147,   148,     0,
     0,     0,   149,     0,     0,     0,   299,     0,   150,   135,
   136,   137,   138,   139,     0,   140,   141,   142,   143,     0,
     0,   144,   145,   146,   147,   148,     0,     0,     0,   149,
     0,     0,     0,   300,     0,   150,   135,   136,   137,   138,
   139,     0,   140,   141,   142,   143,     0,     0,   144,   145,
   146,   147,   148,     0,     0,     0,   149,     0,     0,     0,
   301,     0,   150,   135,   136,   137,   138,   139,     0,   140,
   141,   142,   143,     0,     0,   144,   145,   146,   147,   148,
     0,     0,     0,   149,     0,     0,     0,   302,     0,   150,
   135,   136,   137,   138,   139,     0,   140,   141,   142,   143,
     0,     0,   144,   145,   146,   147,   148,     0,     0,     0,
   149,     0,     0,     0,   303,     0,   150,   135,   136,   137,
   138,   139,     0,   140,   141,   142,   143,     0,     0,   144,
   145,   146,   147,   148,     0,     0,     0,   149,     0,     0,
     0,   304,     0,   150,   135,   136,   137,   138,   139,     0,
   140,   141,   142,   143,     0,     0,   144,   145,   146,   147,
   148,     0,     0,     0,   149,     0,     0,     0,   399,     0,
   150,   135,   136,   137,   138,   139,     0,   140,   141,   142,
   143,     0,     0,   144,   145,   146,   147,   148,     0,     0,
     0,   149,     0,     0,     0,   475,     0,   150,   135,   136,
   137,   138,   139,     0,   140,   141,   142,   143,     0,     0,
   144,   145,   146,   147,   148,     0,     0,     0,   149,     0,
     0,     0,   476,     0,   150,   135,   136,   137,   138,   139,
     0,   140,   141,   142,   143,     0,     0,   144,   145,   146,
   147,   148,     0,     0,     0,   149,     0,     0,     0,   477,
     0,   150,   135,   136,   137,   138,   139,     0,   140,   141,
   142,   143,     0,     0,   144,   145,   146,   147,   148,     0,
     0,     0,   149,     0,     0,     0,   478,     0,   150,   135,
   136,   137,   138,   139,     0,   140,   141,   142,   143,     0,
     0,   144,   145,   146,   147,   148,     0,     0,     0,   149,
     0,     0,     0,   681,     0,   150,   135,   136,   137,   138,
   139,     0,   140,   141,   142,   143,     0,     0,   144,   145,
   146,   147,   148,     0,     0,     0,   149,     0,     0,     0,
   692,     0,   150,   135,   136,   137,   138,   139,     0,   140,
   141,   142,   143,     0,     0,   144,   145,   146,   147,   148,
     0,     0,     0,   149,     0,     0,     0,  1503,     0,   150,
   135,   136,   137,   138,   139,     0,   140,   141,   142,   143,
     0,     0,   144,   145,   146,   147,   148,     0,     0,     0,
   149,     0,     0,     0,  1507,     0,   150,   135,   136,   137,
   138,   139,     0,   140,   141,   142,   143,     0,     0,   144,
   145,   146,   147,   148,     0,     0,     0,   149,     0,     0,
     0,  1542,     0,   150,   135,   136,   137,   138,   139,     0,
   140,   141,   142,   143,     0,     0,   144,   145,   146,   147,
   148,     0,     0,     0,   149,     0,     0,     0,     0,     0,
   150,   712,   713,   714,   715,   716,   717,   718,   719,   720,
   721,     0,     0,   722,   723,   724,   725,   726,   727,     0,
     0,   728,     0,     0,     0,  1212,   712,   713,   714,   715,
   716,   717,   718,   719,   720,   721,     0,     0,   722,   723,
   724,   725,   726,   727,     0,     0,   728,     0,   812,   712,
   713,   714,   715,   716,   717,   718,   719,   720,   721,     0,
     0,   722,   723,   724,   725,   726,   727,     0,     0,   728,
   715,   716,   717,   718,   719,   720,   721,     0,     0,   722,
   723,   724,   725,   726,   727,     0,     0,   728,   718,   719,
   720,   721,     0,     0,   722,   723,   724,   725,   726,   727,
     0,     0,   728
};

static const short yycheck[] = {    24,
    87,   393,   544,   545,   443,   344,   415,   878,   550,    24,
   276,   806,   256,     5,   584,   810,     5,   426,   501,     5,
   264,     5,     5,   267,   268,   269,   435,     3,   180,   438,
   382,    14,   441,     5,  1253,     5,     5,   205,     7,  1258,
     3,   204,     5,   211,     5,  1264,     5,     7,     5,   469,
     5,   180,   391,  1272,    79,    80,    81,    14,     5,  1278,
  1279,   612,   613,   614,   615,     5,    49,    14,     5,     7,
     5,     5,   411,     5,    14,     3,    48,     5,     0,     5,
   209,    51,    14,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
   125,   126,   127,   455,    96,   457,   458,   459,   209,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   695,     7,   697,   209,   612,
   613,   614,   615,     5,     3,   209,     5,     5,    11,     5,
    11,    11,    14,     5,    51,   565,     5,   698,    14,     7,
     5,     7,     3,     7,     5,   201,    63,   209,   245,     5,
   955,   207,   713,   714,   715,   716,   717,   718,   719,   720,
   721,   722,   723,   724,   725,   726,   727,   728,    47,   730,
     5,     6,   209,    51,     9,    47,   209,   180,    11,    51,
   315,   117,    51,   119,   120,   121,    51,   123,   124,   125,
   126,   996,   227,   228,   130,    51,    79,   133,    79,    79,
   136,   204,   227,   139,   140,   698,     7,   143,   210,   209,
   204,   210,   148,   209,   150,   379,   470,   210,   204,   568,
   713,   714,   715,   716,   717,   718,   719,   720,   721,   722,
   723,   724,   725,   726,   727,   728,   209,   730,   209,   209,
   209,   177,   209,   210,   209,  1474,    79,     5,     6,   205,
  1479,     9,   209,   210,   815,   211,   194,   118,     7,   209,
   210,   209,   209,   298,   209,   209,   430,   209,   210,   366,
   305,   306,   307,    57,   210,   410,   311,   312,     5,   314,
   315,   316,    64,    50,    66,    11,     5,   209,     7,   205,
   315,   567,    76,   210,    76,   211,   205,  1526,   209,    66,
  1529,   204,   211,     7,   165,    64,   205,    66,    67,    76,
    77,     5,   211,     7,    60,    61,   678,    84,   209,    86,
  1549,   204,   815,   204,   204,    64,   145,   209,   210,   207,
   209,   209,   884,   209,   210,   207,   205,    76,   207,   209,
   210,   209,   207,   209,    66,   209,   204,   511,   483,    95,
   204,   207,     5,    79,   189,   390,    66,   192,    64,    86,
   106,    14,    68,   204,   399,   204,    76,    89,   209,    96,
    76,   204,   407,   537,    76,     3,    78,     5,   780,   210,
   205,    91,    66,    85,     7,    95,   211,   204,     3,     4,
     5,   952,    76,    46,    78,   147,   148,   149,   204,   960,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,   204,   210,   204,   210,  1234,
   465,  1236,   181,   182,   183,   184,   185,     7,   187,   188,
   189,   190,   204,   210,   193,   194,   195,   196,   197,   205,
   547,   210,   201,   210,   211,   211,   204,   115,   207,   952,
   118,   209,   497,   204,   210,   209,   210,   960,   209,   127,
   128,   210,   204,   131,   132,   837,   925,   181,   182,   183,
   184,   185,   211,   187,   188,   189,   190,   209,   210,   193,
   194,   195,   196,   197,   210,   211,   205,   201,  1303,   204,
   210,    66,   211,   207,   210,     5,   205,    68,   210,   544,
   545,    76,   211,   548,   549,   550,   551,   204,   967,   544,
   545,   556,   557,    68,   559,   550,   210,   562,   782,   783,
   784,   785,   210,   211,  1415,  1416,    69,    70,    71,    72,
    73,    74,   796,   992,   109,   110,   111,   112,   113,   114,
   969,     5,   210,   204,   115,   205,   205,   919,   920,   921,
   922,   211,   211,   108,   204,   209,   210,   664,   665,   209,
   115,   116,  1021,   134,   135,   204,   195,   196,   197,   194,
   209,   745,   201,   204,   199,   209,   210,   202,   207,   134,
   210,   211,   137,   138,     5,   210,   204,   851,   852,   209,
   210,    63,   766,    65,    66,   204,    51,    52,    53,    54,
    55,    56,    57,    58,    59,   176,    76,    62,   872,   204,
   655,    66,   786,   787,   788,   789,   209,   210,  1433,   793,
     5,   176,  1437,   204,    79,   209,   210,     7,   100,   101,
   102,   103,   104,   105,   106,   210,   204,  1199,   108,   210,
   209,   210,   687,   907,  1215,   115,   209,   210,   204,  1239,
  1240,  1241,   209,   210,    76,   210,    78,    79,    80,    81,
    82,    83,     3,     4,     5,     6,   204,   210,   209,   210,
   204,    12,    13,   204,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,   195,
   196,   197,   198,  1518,   204,   201,    78,   209,   210,    76,
    51,    83,  1215,  1072,   204,    87,    88,    89,   892,   210,
   211,   204,   896,    96,    97,    98,    99,   193,   194,   195,
   196,    63,     7,    65,    66,   210,   211,     5,   210,   204,
   210,  1005,     7,  1102,   204,   211,  1010,   205,   115,   211,
  1109,   210,  1111,   210,   211,   210,   209,   210,   932,   209,
   934,   204,  1324,   180,  1326,   210,   211,   941,   100,   101,
   102,   103,   104,   105,   106,   209,   883,   144,   885,   146,
  1139,   210,   211,   210,   211,  1144,   210,   211,   210,   193,
   194,   195,   196,   197,   198,   204,  1358,   201,   972,   209,
   167,   181,   182,   183,   184,   185,   209,   187,   188,   189,
   190,   210,   211,   193,   194,   195,   196,   197,   209,  1083,
   209,   201,   209,     7,   210,   211,  1090,   207,     8,    66,
   211,    68,     5,    63,   205,    65,    66,   210,   210,   884,
   209,   210,    79,   210,   180,    63,    76,    65,  1438,   884,
  1412,   210,   211,   194,    91,   900,  1418,   902,   199,   904,
   180,   202,    92,    93,    94,     5,   207,     5,   209,   106,
   209,     7,   917,   210,   211,     5,   106,     5,   210,     3,
     4,     5,   100,   101,   102,   103,   104,   105,   106,     5,
  1154,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,   209,   100,   101,   102,   103,   104,   105,   106,   115,
   210,   211,   118,   210,   211,     3,     4,     5,   209,   176,
     5,   127,   128,   129,    12,    13,   209,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,   180,   210,   204,  1149,   100,   209,  1242,  1153,
   210,   210,   211,  1157,   209,   210,  1160,   210,   211,   210,
   211,  1165,   210,  1365,   209,  1367,  1368,   181,   182,   183,
   184,   185,  1176,   187,   188,   189,   190,   210,   211,   193,
   194,   195,   196,   197,   210,   211,  1190,   201,   840,   841,
   553,   554,   205,   207,   210,     5,     5,   209,   209,     5,
  1204,  1205,   210,  1207,   209,     5,     5,   209,     5,     5,
  1085,  1470,   209,     5,     5,   181,   182,   183,   184,   185,
  1224,   187,   188,   189,   190,   205,     5,   193,   194,   195,
   196,   197,     7,   187,   161,   201,   209,   209,   209,   193,
   194,   207,   209,   106,   205,   199,     7,   204,   202,     7,
   209,   205,   206,   207,   208,   209,    76,     7,     5,   204,
   204,     7,     7,     7,   162,   180,     7,   165,     5,     7,
   209,    91,   209,     7,   210,     7,  1565,  1152,     7,     7,
  1155,     7,     5,  1158,  1159,   211,     7,     7,  1163,   109,
     8,  1166,  1167,  1168,  1169,     7,   194,  1172,  1173,     7,
  1175,   199,  1177,     5,   202,  1180,   207,     7,     5,  1184,
  1185,   209,  1187,     7,     7,     7,     7,     7,  1520,     7,
   210,     5,   142,   211,  1199,  1329,   209,     3,     4,     5,
     5,  1335,     5,     7,  1199,   209,   205,   204,  1342,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,   204,
   117,   204,   119,   120,   121,     5,   123,   124,   125,   126,
     3,     5,   207,   130,   211,   204,   133,     7,   209,   136,
   210,  1485,   139,   140,   209,   209,   143,   209,  1492,     6,
     3,   148,   205,   150,   209,   189,   181,   182,   183,   184,
   185,   204,   187,   188,   189,   190,  1291,   204,   193,   194,
   195,   196,   197,   204,   100,   201,   201,    63,     3,    65,
   177,   209,   207,   204,   204,   204,   204,     7,    90,  1443,
   204,    93,    94,    95,    96,    97,   209,    99,   204,  1324,
   204,  1326,     6,  1547,     7,   204,   209,   209,   209,  1324,
     7,  1326,     5,   210,   100,   101,   102,   103,   104,   105,
   106,     5,     5,   209,  1411,     5,   209,     5,   209,  1483,
     5,   205,     3,  1358,   193,   194,   195,   196,   197,   205,
   204,  1366,   201,  1358,   205,   210,     5,     5,   207,  1374,
  1375,  1376,  1377,  1378,     5,   157,     5,     5,     5,     5,
   209,   187,     5,   209,     5,     5,     5,   193,   194,     5,
     5,     5,     3,   199,     3,     7,   202,     5,     5,     5,
     5,   207,   208,   209,     7,     5,     5,  1412,     5,     5,
     5,     5,   204,  1418,   183,   184,   185,  1412,   187,   188,
   189,   190,     7,  1418,   193,   194,   195,   196,   197,   204,
   209,     5,   201,     3,     4,     5,  1441,   210,   207,  1444,
     7,  1446,    12,    13,   210,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     7,     7,     7,     7,     7,     7,     7,  1482,     5,     3,
   211,   181,   182,   183,   184,   185,     7,   187,   188,   189,
   190,     7,     7,   193,   194,   195,   196,   197,     7,     7,
  1505,   201,     7,     3,     4,     5,     6,   207,     7,   211,
   205,   204,    12,    13,  1519,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
  1545,     5,   152,   153,   154,   155,   156,   157,   158,   159,
   160,     7,  1557,     3,     4,     5,     7,  1562,     7,    89,
     7,  1566,   209,     5,     7,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   117,     7,   119,   120,   121,     7,   123,   124,   125,   126,
     5,     7,   204,   130,     7,     7,   133,     7,     7,   136,
     7,     7,   139,   140,     7,     7,   143,     7,     7,     7,
     7,   148,     7,   150,   194,     7,     5,     5,   204,   199,
     5,     5,   202,   205,     7,     7,     7,     7,     7,   209,
     7,     7,     5,     7,   205,   211,   211,   205,   211,   211,
   177,   211,   211,   117,   205,   119,   120,   121,     7,   123,
   124,   125,   126,   209,   211,     7,   130,   211,   211,   133,
   211,     5,   136,    91,     7,   139,   140,   205,     5,   143,
   205,     7,     7,   210,   148,     7,   150,     7,     7,     7,
     7,     7,     7,     7,   194,     5,   209,   209,   209,   199,
     5,     7,   202,   209,     3,   209,   209,   209,   209,   209,
     5,   205,   117,   177,   119,   120,   121,   210,   123,   124,
   125,   126,   205,     7,     5,   130,     5,     5,   133,     5,
   204,   136,     7,     5,   139,   140,     5,   205,   143,   211,
   205,   211,     5,   148,   194,   150,   210,     7,     7,   199,
     7,     7,   202,     7,   117,   209,   119,   120,   121,   209,
   123,   124,   125,   126,   205,   209,   205,   130,   205,   209,
   133,   209,   177,   136,     5,   209,   139,   140,   209,   205,
   143,   210,   210,     7,     5,   148,   210,   150,     7,     7,
   117,     7,   119,   120,   121,     7,   123,   124,   125,   126,
     7,     7,     7,   130,     5,   210,   133,     7,     7,   136,
     5,     7,   139,   140,   177,     7,   143,   211,     7,     7,
     7,   148,   117,   150,   119,   120,   121,     5,   123,   124,
   125,   126,    90,     7,   211,   130,   122,   205,   133,     7,
     5,   136,     5,     7,   139,   140,   211,   210,   143,   211,
   177,   205,   211,   148,   117,   150,   119,   120,   121,   205,
   123,   124,   125,   126,   211,   209,   211,   130,     7,   209,
   133,     5,     5,   136,     5,   204,   139,   140,   210,   210,
   143,   205,   177,   210,   205,   148,   117,   150,   119,   120,
   121,     5,   123,   124,   125,   126,   205,   210,   209,   130,
     5,   205,   133,     5,     7,   136,     7,     7,   139,   140,
     7,   209,   143,   209,   177,   210,     7,   148,     7,   150,
     7,     7,   117,     7,   119,   120,   121,   209,   123,   124,
   125,   126,     7,     7,     7,   130,   209,     7,   133,     7,
     7,   136,   209,   205,   139,   140,   177,   210,   143,    45,
     7,     7,   107,   148,   117,   150,   119,   120,   121,     7,
   123,   124,   125,   126,   210,   209,     5,   130,   210,     7,
   133,     0,     0,   136,   622,   945,   139,   140,   850,   210,
   143,   488,   177,   740,  1052,   148,     7,   150,  1195,  1362,
   184,   185,   447,   187,   188,   189,   190,   103,   196,   193,
   194,   195,   196,   197,     3,     4,     5,   201,   842,   529,
    -1,    -1,    -1,   207,   177,   210,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,     3,     4,     5,   452,    -1,    -1,   210,    -1,    -1,
    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,   181,   182,
   183,   184,   185,     7,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,    -1,    -1,   207,    -1,   181,   182,   183,   184,
   185,     7,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,   181,   182,   183,   184,   185,     7,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,
   181,   182,   183,   184,   185,     7,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
    -1,    -1,     7,    -1,    -1,   194,    -1,    -1,    -1,    -1,
   199,    -1,    -1,   202,    -1,    -1,    -1,    -1,   207,    -1,
    -1,    -1,    -1,     7,    -1,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,   194,    -1,     7,   201,    -1,   199,    -1,    -1,
   202,   207,   204,    -1,    -1,   211,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     7,    -1,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,    -1,    -1,   207,    -1,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,    -1,    -1,   207,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,   181,   182,   183,
   184,   185,   207,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,   181,   182,
   183,   184,   185,   207,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,     8,    -1,    -1,   201,   181,
   182,   183,   184,   185,   207,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,     8,    -1,    -1,   201,
     3,     4,     5,    -1,    -1,   207,    -1,    -1,    -1,    12,
    13,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,     3,     4,     5,
    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    51,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,     3,     4,     5,     6,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,   181,   182,
   183,   184,   185,     8,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,   181,
   182,   183,   184,   185,   207,   187,   188,   189,   190,    -1,
     8,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,   194,    -1,    -1,    -1,   207,   199,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,     5,
    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    14,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,
    -1,    -1,    -1,   199,    -1,    -1,   202,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    45,
    -1,   201,    -1,    -1,    50,    -1,    -1,   207,    -1,    -1,
    -1,   111,    -1,    -1,    -1,   194,    -1,    63,    -1,    65,
   199,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    75,
    -1,    -1,    -1,    79,    -1,   183,   184,   185,   186,   187,
   188,   189,   190,    -1,    90,   193,   194,   195,   196,   197,
   198,   151,   194,   201,    -1,    -1,    -1,   199,    -1,    -1,
   202,   107,   162,   163,   164,   165,   166,   167,   168,   169,
   170,   171,   172,   173,   174,   175,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,   141,   201,   143,    -1,    -1,
    -1,    -1,   207,   181,   182,   183,   184,   185,   186,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
   198,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   178,   179,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,   198,    -1,    -1,   201,    -1,    -1,    -1,    -1,   181,
   182,   183,   184,   185,   211,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
   211,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
    -1,   211,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,
    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,
    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,    -1,   211,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
   211,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
    -1,   211,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,
    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,
    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,   203,    -1,    -1,
    -1,   207,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
   205,    -1,   207,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,   205,    -1,   207,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,
   207,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,   205,    -1,   207,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,
    -1,   207,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
   205,    -1,   207,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,   205,    -1,   207,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,
   207,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,   205,    -1,   207,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,
    -1,   207,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
   205,    -1,   207,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,   205,    -1,   207,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
   207,   181,   182,   183,   184,   185,   186,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,   198,    -1,
    -1,   201,    -1,    -1,    -1,   205,   181,   182,   183,   184,
   185,   186,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,   198,    -1,    -1,   201,    -1,   203,   181,
   182,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,   198,    -1,    -1,   201,
   184,   185,   186,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,   198,    -1,    -1,   201,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,   198,
    -1,    -1,   201
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
#line 317 "GetDP.y"
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
#line 353 "GetDP.y"
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
#line 436 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 22:
#line 439 "GetDP.y"
{ Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 23:
#line 442 "GetDP.y"
{ Free(yyvsp[-3].c); Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 25:
#line 446 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 26:
#line 454 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 28:
#line 471 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 30:
#line 478 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 31:
#line 481 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 32:
#line 484 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 33:
#line 486 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 36:
#line 497 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 37:
#line 502 "GetDP.y"
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
#line 514 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 523 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 40:
#line 534 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 41:
#line 539 "GetDP.y"
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
#line 576 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 43:
#line 579 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 44:
#line 591 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 45:
#line 593 "GetDP.y"
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
#line 609 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 47:
#line 612 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 48:
#line 615 "GetDP.y"
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
#line 666 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 50:
#line 679 "GetDP.y"
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
#line 703 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 52:
#line 710 "GetDP.y"
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
#line 723 "GetDP.y"
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
#line 741 "GetDP.y"
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
#line 764 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 56:
#line 768 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 57:
#line 777 "GetDP.y"
{ 
      vyyerror("The syntax 'start:[incr]end' has been replaced by 'start:end:incr'");
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!yyvsp[-2].d || (yyvsp[-5].i<yyvsp[0].i && yyvsp[-2].d<0) || (yyvsp[-5].i>yyvsp[0].i && yyvsp[-2].d>0)){
	vyyerror("Wrong increment in '%d :[%d] %d'", yyvsp[-5].i, (int)yyvsp[-2].d, yyvsp[0].i) ;
	List_Add(ListOfInt_L, &(yyvsp[-5].i)) ;
      }
      else
	for(j=yyvsp[-5].i ; (yyvsp[-2].d>0)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; j+=(int)yyvsp[-2].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 58:
#line 792 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      if(!yyvsp[0].d || (yyvsp[-4].i<yyvsp[-2].i && yyvsp[0].d<0) || (yyvsp[-4].i>yyvsp[-2].i && yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%d : %d : %d'", yyvsp[-4].i, yyvsp[-2].i, (int)yyvsp[0].d) ;
	List_Add(ListOfInt_L, &(yyvsp[-4].i)) ;
      }
      else
	for(j=yyvsp[-4].i ; (yyvsp[0].d>0)?(j<=yyvsp[-2].i):(j>=yyvsp[-2].i) ; j+=(int)yyvsp[0].d) 
	  List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 59:
#line 806 "GetDP.y"
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
case 60:
#line 840 "GetDP.y"
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
case 61:
#line 853 "GetDP.y"
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
case 63:
#line 877 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 64:
#line 887 "GetDP.y"
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
case 67:
#line 909 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 68:
#line 914 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 69:
#line 915 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 70:
#line 920 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 74:
#line 939 "GetDP.y"
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
case 75:
#line 959 "GetDP.y"
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
case 78:
#line 1010 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 79:
#line 1030 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 80:
#line 1036 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 81:
#line 1042 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 82:
#line 1045 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 83:
#line 1052 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 85:
#line 1063 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 86:
#line 1066 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 87:
#line 1072 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 88:
#line 1076 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 90:
#line 1088 "GetDP.y"
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
case 91:
#line 1101 "GetDP.y"
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
case 92:
#line 1115 "GetDP.y"
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
case 93:
#line 1130 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1136 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1142 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1148 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1154 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1160 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1166 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1172 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1178 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1184 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1190 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1196 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 105:
#line 1202 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 106:
#line 1208 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 107:
#line 1214 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 108:
#line 1220 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 109:
#line 1226 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 110:
#line 1233 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 112:
#line 1241 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 114:
#line 1254 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 115:
#line 1260 "GetDP.y"
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
	      WholeQuantity_S.Case.Function.NbrParameters !=
	      List_Nbr(ListOfDouble_L)) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d instead of %d)", 
		     yyvsp[-2].c, List_Nbr(ListOfDouble_L), WholeQuantity_S.Case.Function.NbrParameters) ;
	  }
	  else if (WholeQuantity_S.Case.Function.NbrParameters == -2 &&
		   (List_Nbr(ListOfDouble_L))%2 != 0) {
	    vyyerror("Wrong number of parameters for Function '%s' (%d is not even)",
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
	}
      }

      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 116:
#line 1334 "GetDP.y"
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
case 117:
#line 1368 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 118:
#line 1377 "GetDP.y"
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
case 119:
#line 1389 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 120:
#line 1391 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 121:
#line 1402 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 122:
#line 1404 "GetDP.y"
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
case 123:
#line 1420 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 124:
#line 1426 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 125:
#line 1432 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 126:
#line 1434 "GetDP.y"
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
case 127:
#line 1463 "GetDP.y"
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
case 128:
#line 1487 "GetDP.y"
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
case 129:
#line 1500 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 130:
#line 1506 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 131:
#line 1513 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 132:
#line 1519 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 133:
#line 1526 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 134:
#line 1537 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 135:
#line 1538 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 136:
#line 1539 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 137:
#line 1544 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 138:
#line 1545 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 139:
#line 1551 "GetDP.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 141:
#line 1556 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 142:
#line 1572 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 143:
#line 1577 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 144:
#line 1584 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 146:
#line 1593 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 147:
#line 1598 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 148:
#line 1605 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 149:
#line 1608 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 150:
#line 1615 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 152:
#line 1625 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 153:
#line 1628 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 154:
#line 1631 "GetDP.y"
{ JacobianCase_S.TypeJacobian =
	Get_Define1NbrForString(Jacobian_Type, yyvsp[-2].c, &FlagError,
				&JacobianCase_S.NbrParameters) ;
      if (!FlagError) {
	if (JacobianCase_S.NbrParameters == -2 && (List_Nbr(ListOfDouble_L))%2 != 0)
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d is not even)",
		   yyvsp[-2].c, List_Nbr(ListOfDouble_L)) ;
	if (JacobianCase_S.NbrParameters < 0)
	  JacobianCase_S.NbrParameters = List_Nbr(ListOfDouble_L);
	if (List_Nbr(ListOfDouble_L) == JacobianCase_S.NbrParameters) {
	  if (JacobianCase_S.NbrParameters) {
	    JacobianCase_S.Para =
	      (double *)Malloc(JacobianCase_S.NbrParameters * sizeof(double)) ;
	    for (i = 0 ; i < JacobianCase_S.NbrParameters ; i++)
	      List_Read(ListOfDouble_L, i, &JacobianCase_S.Para[i]) ;
	  }
	}
	else
	  vyyerror("Wrong number of parameters for Jacobian '%s' (%d instead of %d)", 
		   yyvsp[-2].c, List_Nbr(ListOfDouble_L), JacobianCase_S.NbrParameters) ;
      }
      else{
	vyyerror("Unknown type of Jacobian: %s", yyvsp[-2].c);
	Get_Valid_SXD1N(Jacobian_Type);
      }
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 155:
#line 1668 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 156:
#line 1674 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 157:
#line 1681 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 159:
#line 1694 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 160:
#line 1701 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 161:
#line 1704 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 162:
#line 1711 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 163:
#line 1714 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 164:
#line 1721 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 166:
#line 1733 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 167:
#line 1743 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 168:
#line 1753 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 169:
#line 1760 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 170:
#line 1763 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 171:
#line 1770 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 173:
#line 1786 "GetDP.y"
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
case 174:
#line 1840 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 175:
#line 1843 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 176:
#line 1846 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 177:
#line 1849 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 178:
#line 1852 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 179:
#line 1863 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 181:
#line 1873 "GetDP.y"
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
case 183:
#line 1898 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 185:
#line 1912 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 186:
#line 1918 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 187:
#line 1925 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 188:
#line 1934 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 189:
#line 1937 "GetDP.y"
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
case 190:
#line 1959 "GetDP.y"
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
case 191:
#line 1974 "GetDP.y"
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
case 192:
#line 1998 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 194:
#line 2012 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 195:
#line 2022 "GetDP.y"
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
case 196:
#line 2046 "GetDP.y"
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
case 197:
#line 2071 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 198:
#line 2076 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 199:
#line 2084 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 200:
#line 2092 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 201:
#line 2102 "GetDP.y"
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
case 202:
#line 2119 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 203:
#line 2127 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 204:
#line 2134 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 205:
#line 2141 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 206:
#line 2150 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 207:
#line 2159 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 208:
#line 2168 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 209:
#line 2189 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 211:
#line 2200 "GetDP.y"
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
case 213:
#line 2227 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 215:
#line 2240 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 216:
#line 2246 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 217:
#line 2253 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 218:
#line 2262 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 219:
#line 2265 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 220:
#line 2268 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 221:
#line 2271 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 222:
#line 2278 "GetDP.y"
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
case 223:
#line 2294 "GetDP.y"
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
case 224:
#line 2343 "GetDP.y"
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
case 226:
#line 2363 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 227:
#line 2366 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 228:
#line 2371 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 229:
#line 2376 "GetDP.y"
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
case 230:
#line 2390 "GetDP.y"
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
case 231:
#line 2410 "GetDP.y"
{ BasisFunction_S.SubFunction =
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(BasisFunction_S.SubFunction, &j) ;
      }
    ;
    break;}
case 232:
#line 2419 "GetDP.y"
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
case 233:
#line 2443 "GetDP.y"
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
case 235:
#line 2503 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 236:
#line 2506 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 237:
#line 2515 "GetDP.y"
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
case 238:
#line 2581 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 239:
#line 2585 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 240:
#line 2592 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 242:
#line 2601 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 243:
#line 2606 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 244:
#line 2609 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 245:
#line 2616 "GetDP.y"
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
case 246:
#line 2632 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 247:
#line 2638 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 248:
#line 2641 "GetDP.y"
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
case 249:
#line 2660 "GetDP.y"
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
case 250:
#line 2672 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 251:
#line 2678 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 252:
#line 2681 "GetDP.y"
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
case 253:
#line 2696 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 254:
#line 2700 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 255:
#line 2709 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 257:
#line 2720 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 258:
#line 2725 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 259:
#line 2735 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 260:
#line 2748 "GetDP.y"
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
case 261:
#line 2763 "GetDP.y"
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
case 262:
#line 2837 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 264:
#line 2853 "GetDP.y"
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
case 265:
#line 2871 "GetDP.y"
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
case 266:
#line 2885 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 267:
#line 2888 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 268:
#line 2891 "GetDP.y"
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
case 269:
#line 2937 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 271:
#line 2947 "GetDP.y"
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
case 273:
#line 2973 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 275:
#line 2985 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 276:
#line 2991 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 277:
#line 2998 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 279:
#line 3010 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 280:
#line 3016 "GetDP.y"
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
case 281:
#line 3030 "GetDP.y"
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
case 282:
#line 3048 "GetDP.y"
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
case 284:
#line 3069 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 285:
#line 3072 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 286:
#line 3076 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 287:
#line 3079 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 288:
#line 3089 "GetDP.y"
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
case 289:
#line 3128 "GetDP.y"
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
case 290:
#line 3152 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 291:
#line 3157 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 292:
#line 3163 "GetDP.y"
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
case 293:
#line 3324 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 294:
#line 3329 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 295:
#line 3338 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 296:
#line 3347 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 298:
#line 3355 "GetDP.y"
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
case 299:
#line 3395 "GetDP.y"
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
case 300:
#line 3410 "GetDP.y"
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
case 301:
#line 3438 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 302:
#line 3441 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 303:
#line 3444 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 304:
#line 3447 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 305:
#line 3454 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 307:
#line 3465 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 308:
#line 3475 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3485 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 310:
#line 3499 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 312:
#line 3511 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 313:
#line 3513 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 314:
#line 3515 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 315:
#line 3517 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 316:
#line 3525 "GetDP.y"
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
case 318:
#line 3547 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 319:
#line 3555 "GetDP.y"
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
case 320:
#line 3617 "GetDP.y"
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
case 321:
#line 3663 "GetDP.y"
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
case 322:
#line 3687 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 323:
#line 3696 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 324:
#line 3710 "GetDP.y"
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
case 326:
#line 3739 "GetDP.y"
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
case 327:
#line 3763 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 328:
#line 3771 "GetDP.y"
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
case 329:
#line 3826 "GetDP.y"
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
case 330:
#line 3843 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 331:
#line 3844 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 332:
#line 3845 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 333:
#line 3846 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 334:
#line 3847 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 335:
#line 3848 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 336:
#line 3849 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 337:
#line 3856 "GetDP.y"
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
case 338:
#line 3877 "GetDP.y"
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
case 339:
#line 3901 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 341:
#line 3911 "GetDP.y"
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
case 343:
#line 3936 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 345:
#line 3948 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 346:
#line 3955 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 347:
#line 3962 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 348:
#line 3965 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 349:
#line 3967 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 350:
#line 3973 "GetDP.y"
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
case 351:
#line 3988 "GetDP.y"
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
case 352:
#line 4007 "GetDP.y"
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
case 354:
#line 4026 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 355:
#line 4029 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 356:
#line 4038 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 357:
#line 4041 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 358:
#line 4046 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 359:
#line 4051 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 360:
#line 4056 "GetDP.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 361:
#line 4066 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 362:
#line 4075 "GetDP.y"
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
case 363:
#line 4112 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 364:
#line 4119 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 365:
#line 4122 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 366:
#line 4134 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 367:
#line 4144 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 368:
#line 4150 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 369:
#line 4153 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 370:
#line 4165 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 371:
#line 4173 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 372:
#line 4184 "GetDP.y"
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
case 373:
#line 4201 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 374:
#line 4208 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 375:
#line 4214 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 376:
#line 4220 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 377:
#line 4226 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 378:
#line 4234 "GetDP.y"
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
case 379:
#line 4251 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 380:
#line 4258 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 381:
#line 4264 "GetDP.y"
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
case 382:
#line 4275 "GetDP.y"
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
case 383:
#line 4286 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETFREQUENCY ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SetFrequency.ExpressionIndex = yyvsp[-2].i ;
      
      if(DefineSystem_S.FrequencyValue == NULL)
	DefineSystem_S.FrequencyValue = 
	  List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
    ;
    break;}
case 384:
#line 4302 "GetDP.y"
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
case 385:
#line 4314 "GetDP.y"
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
case 386:
#line 4334 "GetDP.y"
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
      Operation_P->Case.FourierTransform.Frequency = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(Operation_P->Case.FourierTransform.Frequency, &Value) ;
      }
    ;
    break;}
case 387:
#line 4356 "GetDP.y"
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
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	j = (int)Value ;
	List_Add(Operation_P->Case.Lanczos.Save, &j) ;
      }
      Operation_P->Case.Lanczos.Shift = yyvsp[-2].d ;
    ;
    break;}
case 388:
#line 4378 "GetDP.y"
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
case 389:
#line 4391 "GetDP.y"
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
case 390:
#line 4405 "GetDP.y"
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
case 391:
#line 4418 "GetDP.y"
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
case 392:
#line 4430 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 394:
#line 4439 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 396:
#line 4448 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 397:
#line 4458 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 398:
#line 4468 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 399:
#line 4479 "GetDP.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 400:
#line 4488 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 401:
#line 4498 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 403:
#line 4508 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 404:
#line 4511 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 405:
#line 4520 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 406:
#line 4535 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 408:
#line 4551 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 409:
#line 4555 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 410:
#line 4559 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 411:
#line 4563 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 412:
#line 4568 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 413:
#line 4579 "GetDP.y"
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
case 415:
#line 4596 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 416:
#line 4600 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 417:
#line 4604 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 418:
#line 4608 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 419:
#line 4612 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 420:
#line 4617 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 421:
#line 4628 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 423:
#line 4643 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 424:
#line 4647 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 425:
#line 4651 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 426:
#line 4655 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 427:
#line 4659 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 428:
#line 4670 "GetDP.y"
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
case 430:
#line 4688 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 431:
#line 4692 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 432:
#line 4696 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 433:
#line 4700 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 434:
#line 4705 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 435:
#line 4715 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 436:
#line 4721 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 437:
#line 4727 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 438:
#line 4737 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 439:
#line 4740 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 440:
#line 4745 "GetDP.y"
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
case 442:
#line 4763 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 443:
#line 4773 "GetDP.y"
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
case 444:
#line 4802 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 445:
#line 4805 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 446:
#line 4808 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 447:
#line 4816 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 448:
#line 4833 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 450:
#line 4845 "GetDP.y"
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
case 452:
#line 4868 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 454:
#line 4882 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 455:
#line 4889 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 456:
#line 4897 "GetDP.y"
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
case 457:
#line 4943 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 458:
#line 4948 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 459:
#line 4954 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 460:
#line 4957 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 461:
#line 4962 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 463:
#line 4973 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 464:
#line 4976 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 465:
#line 4982 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 466:
#line 4987 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 467:
#line 4993 "GetDP.y"
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
case 468:
#line 5007 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 470:
#line 5021 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 471:
#line 5028 "GetDP.y"
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
case 472:
#line 5056 "GetDP.y"
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
case 473:
#line 5066 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 474:
#line 5067 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 475:
#line 5073 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 476:
#line 5082 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 477:
#line 5099 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 479:
#line 5111 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 481:
#line 5118 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 483:
#line 5130 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 484:
#line 5137 "GetDP.y"
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
case 485:
#line 5149 "GetDP.y"
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
case 486:
#line 5160 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 487:
#line 5165 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 488:
#line 5171 "GetDP.y"
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
case 489:
#line 5188 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 490:
#line 5198 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 491:
#line 5201 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 492:
#line 5205 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 493:
#line 5216 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 494:
#line 5220 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 495:
#line 5224 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 496:
#line 5229 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 497:
#line 5237 "GetDP.y"
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
case 498:
#line 5249 "GetDP.y"
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
case 499:
#line 5272 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 500:
#line 5273 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 501:
#line 5274 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 502:
#line 5275 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 503:
#line 5281 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 504:
#line 5283 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 505:
#line 5289 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 506:
#line 5295 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 507:
#line 5302 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 508:
#line 5309 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONSECTION_2D ;
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnSection.x[0]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnSection.y[0]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnSection.z[0]);
      }
    ;
    break;}
case 509:
#line 5320 "GetDP.y"
{
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnSection.x[1]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnSection.y[1]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnSection.z[1]);
      }
    ;
    break;}
case 510:
#line 5330 "GetDP.y"
{
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnSection.x[2]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnSection.y[2]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnSection.z[2]);
      }
    ;
    break;}
case 511:
#line 5341 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 512:
#line 5349 "GetDP.y"
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
case 513:
#line 5362 "GetDP.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 514:
#line 5372 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
    ;
    break;}
case 515:
#line 5384 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_1D ;
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
    ;
    break;}
case 516:
#line 5395 "GetDP.y"
{
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-1].d ;
    ;
    break;}
case 517:
#line 5407 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_2D ;
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
    ;
    break;}
case 518:
#line 5418 "GetDP.y"
{
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
      }
    ;
    break;}
case 519:
#line 5428 "GetDP.y"
{
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-1].d ;
    ;
    break;}
case 520:
#line 5441 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_3D ;
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[0]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[0]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[0]);
      }
    ;
    break;}
case 521:
#line 5452 "GetDP.y"
{
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[1]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[1]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[1]);
      }
    ;
    break;}
case 522:
#line 5462 "GetDP.y"
{
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[2]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[2]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[2]);
      }
    ;
    break;}
case 523:
#line 5472 "GetDP.y"
{
      if(List_Nbr(ListOfDouble_L)!=3)
	vyyerror("Expected three coordinates, got %d", List_Nbr(ListOfDouble_L));
      else{
	List_Read(ListOfDouble_L, 0, &PostSubOperation_S.Case.OnGrid.x[3]);
	List_Read(ListOfDouble_L, 1, &PostSubOperation_S.Case.OnGrid.y[3]);
	List_Read(ListOfDouble_L, 2, &PostSubOperation_S.Case.OnGrid.z[3]);
      }
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[1] = (int)yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.n[2] = (int)yyvsp[-1].d ;
    ;
    break;}
case 524:
#line 5488 "GetDP.y"
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
case 525:
#line 5508 "GetDP.y"
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
    ;
    break;}
case 527:
#line 5530 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 528:
#line 5537 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 529:
#line 5544 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 530:
#line 5551 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 531:
#line 5555 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 532:
#line 5559 "GetDP.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 533:
#line 5563 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 534:
#line 5567 "GetDP.y"
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
case 535:
#line 5577 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 536:
#line 5582 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 537:
#line 5587 "GetDP.y"
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
case 538:
#line 5607 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 539:
#line 5614 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 540:
#line 5621 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(Adaption_Type);
      }
    ;
    break;}
case 541:
#line 5630 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(Sort_Type);
      }
    ;
    break;}
case 542:
#line 5639 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 543:
#line 5646 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 544:
#line 5653 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 545:
#line 5657 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 546:
#line 5665 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 547:
#line 5669 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
    ;
    break;}
case 548:
#line 5681 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 549:
#line 5687 "GetDP.y"
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
case 550:
#line 5735 "GetDP.y"
{
      Constant_S.Name = yyvsp[-3].c ; 
      if(List_Nbr(ListOfDouble_L) == 1){
	Constant_S.Type = VAR_FLOAT ;
	List_Read(ListOfDouble_L, 0, &Constant_S.Value.Float) ;
      }
      else{
	Constant_S.Type = VAR_LISTOFFLOAT ;
	Constant_S.Value.ListOfFloat =
	  List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
	for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++) {
	  List_Read(ListOfDouble_L, i, &d) ;
	  List_Add(Constant_S.Value.ListOfFloat, &d) ;
	}
      }
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 551:
#line 5754 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 554:
#line 5767 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 555:
#line 5773 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 556:
#line 5779 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 557:
#line 5790 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 558:
#line 5791 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 559:
#line 5792 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 560:
#line 5793 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 561:
#line 5794 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 562:
#line 5795 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 563:
#line 5796 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 564:
#line 5797 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 565:
#line 5798 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 566:
#line 5799 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 567:
#line 5800 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 568:
#line 5801 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 569:
#line 5802 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 570:
#line 5803 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 571:
#line 5804 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 572:
#line 5805 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 573:
#line 5806 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 574:
#line 5807 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 575:
#line 5808 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 576:
#line 5809 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 577:
#line 5810 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 578:
#line 5813 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 579:
#line 5814 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 580:
#line 5815 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 581:
#line 5816 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 582:
#line 5817 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 583:
#line 5818 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 584:
#line 5819 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 585:
#line 5820 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 586:
#line 5821 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 587:
#line 5822 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 588:
#line 5823 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 589:
#line 5824 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 590:
#line 5825 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 591:
#line 5826 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 592:
#line 5827 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 593:
#line 5828 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 594:
#line 5829 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 595:
#line 5830 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 596:
#line 5831 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 597:
#line 5832 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 598:
#line 5833 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 599:
#line 5834 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 600:
#line 5835 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 601:
#line 5836 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 602:
#line 5837 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 603:
#line 5838 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 604:
#line 5839 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 605:
#line 5840 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 606:
#line 5841 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 607:
#line 5842 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 608:
#line 5843 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 609:
#line 5844 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 610:
#line 5845 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 611:
#line 5846 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 612:
#line 5847 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 613:
#line 5848 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 614:
#line 5849 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 615:
#line 5850 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 616:
#line 5851 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 617:
#line 5852 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 618:
#line 5857 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 619:
#line 5858 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 620:
#line 5859 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 621:
#line 5860 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 622:
#line 5861 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 623:
#line 5862 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 624:
#line 5863 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 625:
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
case 626:
#line 5883 "GetDP.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 627:
#line 5886 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  
      List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; 
    ;
    break;}
case 628:
#line 5891 "GetDP.y"
{ List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 630:
#line 5905 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 631:
#line 5908 "GetDP.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 632:
#line 5917 "GetDP.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 633:
#line 5920 "GetDP.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 634:
#line 5931 "GetDP.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 635:
#line 5937 "GetDP.y"
{ vyyerror("The syntax 'start:[incr]end' has been replaced by 'start:end:incr'");
      List_Reset(ListOfDouble2_L) ; 
      if(!yyvsp[-2].d || (yyvsp[-5].d<yyvsp[0].d && yyvsp[-2].d<0) || (yyvsp[-5].d>yyvsp[0].d && yyvsp[-2].d>0)){
        vyyerror("Wrong increment in '%g :[%g] %g'", yyvsp[-5].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(ListOfDouble2_L, &(yyvsp[-5].d)) ;
      }
      else 
	for(d=yyvsp[-5].d ; (yyvsp[-2].d>0)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; d+=yyvsp[-2].d)
	  List_Add(ListOfDouble2_L, &d) ;
   ;
    break;}
case 636:
#line 5949 "GetDP.y"
{ List_Reset(ListOfDouble2_L) ; 
      if(!yyvsp[0].d || (yyvsp[-4].d<yyvsp[-2].d && yyvsp[0].d<0) || (yyvsp[-4].d>yyvsp[-2].d && yyvsp[0].d>0)){
	vyyerror("Wrong increment in '%g : %g : %g'", yyvsp[-4].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(ListOfDouble2_L, &(yyvsp[-4].d)) ;
      }
      else
	for(d=yyvsp[-4].d ; (yyvsp[0].d>0)?(d<=yyvsp[-2].d):(d>=yyvsp[-2].d) ; d+=yyvsp[0].d) 
	  List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 637:
#line 5961 "GetDP.y"
{
      List_Reset(ListOfDouble2_L) ;
      Constant_S.Name = yyvsp[-1].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-1].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", yyvsp[-1].c) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(ListOfDouble2_L, &d) ;
	  }
    ;
    break;}
case 638:
#line 5977 "GetDP.y"
{
      List_Reset(ListOfDouble2_L) ;
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
		  List_Add(ListOfDouble2_L, &d) ;
		  List_Read(Constant2_S.Value.ListOfFloat, i, &d) ;
		  List_Add(ListOfDouble2_L, &d) ;
		}
	      }
	    }
	}
    ;
    break;}
case 639:
#line 6019 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 640:
#line 6022 "GetDP.y"
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
case 641:
#line 6037 "GetDP.y"
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
#line 6051 "GetDP.y"



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


