
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

/* $Id: GetDP.tab.c,v 1.27 2001-07-25 13:12:21 geuzaine Exp $ */

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


#line 181 "GetDP.y"
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



#define	YYFINAL		1564
#define	YYFLAG		-32768
#define	YYNTBASE	212

#define YYTRANSLATE(x) ((unsigned)(x) <= 445 ? yytranslate[x] : 397)

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
   167,   171,   172,   176,   181,   183,   187,   193,   195,   200,
   204,   205,   209,   216,   217,   219,   224,   225,   228,   232,
   233,   236,   242,   249,   257,   259,   260,   264,   269,   274,
   275,   278,   279,   283,   285,   289,   290,   293,   295,   296,
   297,   305,   309,   313,   320,   324,   328,   332,   336,   340,
   344,   348,   352,   356,   360,   364,   368,   372,   376,   379,
   382,   385,   389,   391,   395,   398,   400,   403,   404,   410,
   411,   423,   428,   433,   434,   442,   449,   452,   455,   458,
   461,   465,   468,   472,   475,   479,   481,   485,   486,   490,
   497,   498,   503,   504,   507,   511,   516,   517,   522,   523,
   526,   530,   534,   539,   540,   545,   546,   549,   553,   557,
   562,   563,   568,   569,   572,   576,   580,   585,   586,   591,
   592,   595,   599,   603,   607,   611,   615,   619,   620,   623,
   627,   629,   630,   633,   637,   642,   646,   651,   657,   658,
   663,   664,   667,   671,   675,   679,   683,   687,   691,   699,
   703,   707,   711,   715,   719,   727,   735,   743,   744,   747,
   751,   753,   754,   757,   761,   766,   770,   775,   780,   785,
   790,   791,   796,   797,   800,   804,   808,   813,   818,   826,
   830,   834,   838,   839,   840,   841,   860,   861,   866,   867,
   870,   874,   878,   882,   884,   888,   889,   893,   895,   899,
   900,   904,   905,   910,   911,   914,   918,   922,   926,   927,
   932,   933,   936,   940,   946,   950,   954,   959,   960,   963,
   967,   969,   970,   973,   977,   982,   986,   991,   996,   997,
  1002,  1003,  1006,  1010,  1014,  1018,  1022,  1023,  1030,  1034,
  1035,  1041,  1045,  1049,  1053,  1057,  1058,  1062,  1063,  1066,
  1071,  1076,  1081,  1086,  1087,  1090,  1094,  1098,  1102,  1103,
  1106,  1110,  1114,  1118,  1122,  1123,  1126,  1127,  1128,  1138,
  1142,  1146,  1150,  1151,  1154,  1158,  1159,  1160,  1170,  1171,
  1173,  1175,  1177,  1179,  1181,  1183,  1188,  1192,  1193,  1196,
  1200,  1202,  1203,  1206,  1210,  1215,  1220,  1221,  1227,  1228,
  1233,  1234,  1237,  1241,  1245,  1249,  1253,  1257,  1261,  1265,
  1269,  1272,  1276,  1277,  1281,  1283,  1287,  1288,  1292,  1293,
  1296,  1300,  1304,  1309,  1314,  1319,  1324,  1330,  1336,  1339,
  1347,  1359,  1367,  1375,  1385,  1395,  1407,  1421,  1437,  1449,
  1463,  1464,  1472,  1473,  1481,  1489,  1495,  1501,  1503,  1505,
  1506,  1509,  1513,  1517,  1520,  1521,  1524,  1528,  1532,  1536,
  1540,  1545,  1546,  1549,  1553,  1557,  1561,  1565,  1569,  1574,
  1575,  1578,  1582,  1586,  1590,  1594,  1599,  1600,  1603,  1607,
  1611,  1615,  1619,  1623,  1628,  1633,  1638,  1639,  1644,  1645,
  1648,  1652,  1656,  1660,  1664,  1668,  1672,  1673,  1676,  1680,
  1682,  1683,  1686,  1690,  1695,  1700,  1704,  1709,  1710,  1715,
  1716,  1719,  1723,  1728,  1729,  1735,  1741,  1742,  1745,  1746,
  1753,  1757,  1758,  1763,  1767,  1771,  1772,  1775,  1779,  1781,
  1782,  1785,  1789,  1793,  1797,  1801,  1806,  1807,  1816,  1817,
  1818,  1822,  1830,  1838,  1839,  1850,  1854,  1861,  1863,  1865,
  1867,  1869,  1870,  1874,  1876,  1879,  1882,  1895,  1898,  1912,
  1917,  1930,  1948,  1971,  1984,  1985,  1988,  1992,  1997,  2002,
  2006,  2009,  2013,  2017,  2021,  2025,  2029,  2033,  2037,  2041,
  2045,  2049,  2053,  2057,  2061,  2067,  2070,  2074,  2075,  2078,
  2083,  2088,  2094,  2095,  2099,  2105,  2111,  2113,  2115,  2117,
  2119,  2121,  2123,  2125,  2127,  2129,  2131,  2133,  2135,  2137,
  2139,  2141,  2143,  2145,  2147,  2149,  2151,  2153,  2155,  2159,
  2162,  2165,  2169,  2173,  2177,  2181,  2185,  2189,  2193,  2197,
  2201,  2205,  2209,  2213,  2217,  2221,  2226,  2231,  2236,  2241,
  2246,  2251,  2256,  2261,  2266,  2271,  2278,  2283,  2288,  2293,
  2298,  2303,  2308,  2315,  2322,  2329,  2335,  2338,  2340,  2342,
  2344,  2346,  2348,  2350,  2352,  2354,  2355,  2357,  2359,  2363,
  2365,  2367,  2371,  2375,  2379,  2385,  2389,  2394,  2399,  2406,
  2408,  2410
};

static const short yyrhs[] = {    -1,
   213,   214,     0,     0,     0,   214,   215,   216,     0,    45,
   209,   219,   210,     0,    79,   209,   239,   210,     0,    50,
   209,   273,   210,     0,    63,   209,   258,   210,     0,    65,
   209,   264,   210,     0,    75,   209,   280,   210,     0,    90,
   209,   303,   210,     0,   107,   209,   329,   210,     0,   141,
   209,   359,   210,     0,   143,   209,   371,   210,     0,   375,
     0,   388,     0,    10,   396,     0,   217,     0,   178,     7,
     0,   178,     5,     7,     0,   178,     5,     5,     7,     0,
   178,     5,     5,     5,     7,     0,   179,     7,     0,     0,
   218,   379,     0,     0,     0,   219,   220,   221,     0,     5,
   180,   223,     7,     0,     5,   238,   180,   223,     7,     0,
     0,     5,   236,   180,   222,   223,     7,     0,    46,   204,
   234,   205,     7,     0,   388,     0,     0,     0,   227,   204,
   224,   228,   225,   229,   205,     0,   207,   231,     0,   223,
     0,     5,   237,     0,    51,     0,     5,     0,   231,     0,
    47,     0,     0,   235,   230,   231,     0,   235,    48,     5,
   237,     0,     5,     0,   233,     0,   209,   232,   210,     0,
     0,   232,   235,   233,     0,   232,   235,   194,   233,     0,
     3,     0,     3,     8,     3,     0,     3,     8,     3,     8,
   391,     0,     5,     0,     5,   209,   391,   210,     0,     5,
   209,   210,     0,     0,   234,   235,     5,     0,   234,   235,
     5,   209,   391,   210,     0,     0,   211,     0,   209,   207,
   391,   210,     0,     0,   209,   210,     0,   209,   391,   210,
     0,     0,   239,   240,     0,    49,   204,   241,   205,     7,
     0,     5,   204,   205,   180,   242,     7,     0,     5,   204,
   226,   205,   180,   242,     7,     0,   388,     0,     0,   241,
   235,     5,     0,    11,   204,   391,   205,     0,    79,   204,
     5,   205,     0,     0,   243,   246,     0,     0,   209,   245,
   210,     0,   242,     0,   245,   211,   242,     0,     0,   247,
   248,     0,   251,     0,     0,     0,   248,   181,   249,   248,
     8,   250,   248,     0,   248,   195,   248,     0,   248,   198,
   248,     0,    43,   204,   248,   211,   248,   205,     0,   248,
   196,   248,     0,   248,   193,   248,     0,   248,   194,   248,
     0,   248,   197,   248,     0,   248,   201,   248,     0,   248,
   187,   248,     0,   248,   189,   248,     0,   248,   188,   248,
     0,   248,   190,   248,     0,   248,   184,   248,     0,   248,
   185,   248,     0,   248,   186,   248,     0,   248,   183,   248,
     0,   248,   182,   248,     0,   194,   248,     0,   193,   248,
     0,   199,   248,     0,   202,   248,   203,     0,   392,     0,
   390,   255,   257,     0,     5,   328,     0,   328,     0,   328,
   255,     0,     0,   100,   252,   204,   246,   205,     0,     0,
    44,   253,   204,     3,   211,   391,   211,   246,   211,   246,
   205,     0,    40,   204,   328,   205,     0,    42,   204,   328,
   205,     0,     0,    41,   254,   204,   246,   211,   226,   205,
     0,   187,     5,   189,   204,   246,   205,     0,   208,     5,
     0,   208,   165,     0,   208,   118,     0,   208,     3,     0,
   251,   207,     3,     0,   207,     3,     0,   204,   206,   205,
     0,   204,   205,     0,   204,   256,   205,     0,   248,     0,
   256,   211,   248,     0,     0,   209,   394,   210,     0,   209,
    51,   204,   226,   205,   210,     0,     0,   258,   209,   259,
   210,     0,     0,   259,   260,     0,    76,     5,     7,     0,
    64,   209,   261,   210,     0,     0,   261,   209,   262,   210,
     0,     0,   262,   263,     0,    51,   226,     7,     0,    51,
    47,     7,     0,    63,     5,   257,     7,     0,     0,   264,
   209,   265,   210,     0,     0,   265,   266,     0,    76,     5,
     7,     0,    68,   242,     7,     0,    64,   209,   267,   210,
     0,     0,   267,   209,   268,   210,     0,     0,   268,   269,
     0,    66,     5,     7,     0,    67,     5,     7,     0,    64,
   209,   270,   210,     0,     0,   270,   209,   271,   210,     0,
     0,   271,   272,     0,    69,     5,     7,     0,    70,   391,
     7,     0,    71,   391,     7,     0,    72,   391,     7,     0,
    73,   391,     7,     0,    74,   391,     7,     0,     0,   273,
   274,     0,   209,   275,   210,     0,   388,     0,     0,   275,
   276,     0,    76,     5,     7,     0,    76,     5,   236,     7,
     0,    66,     5,     7,     0,    64,   209,   277,   210,     0,
    64,     5,   209,   277,   210,     0,     0,   277,   209,   278,
   210,     0,     0,   278,   279,     0,    66,     5,     7,     0,
    51,   226,     7,     0,    52,   226,     7,     0,    58,   242,
     7,     0,    57,   242,     7,     0,    62,     5,     7,     0,
    59,   209,     3,   235,     3,   210,     7,     0,    53,   226,
     7,     0,    54,   226,     7,     0,    79,   242,     7,     0,
    56,   242,     7,     0,    55,   242,     7,     0,    79,   204,
   242,   211,   242,   205,     7,     0,    56,   204,   242,   211,
   242,   205,     7,     0,    55,   204,   242,   211,   242,   205,
     7,     0,     0,   280,   281,     0,   209,   282,   210,     0,
   388,     0,     0,   282,   283,     0,    76,     5,     7,     0,
    76,     5,   236,     7,     0,    66,     5,     7,     0,    77,
   209,   284,   210,     0,    84,   209,   290,   210,     0,    86,
   209,   297,   210,     0,    50,   209,   300,   210,     0,     0,
   284,   209,   285,   210,     0,     0,   285,   286,     0,    76,
     5,     7,     0,    78,     5,     7,     0,    78,     5,   236,
     7,     0,    79,     5,   287,     7,     0,    80,   209,     5,
   235,     5,   210,     7,     0,    81,   244,     7,     0,    82,
   226,     7,     0,    83,   226,     7,     0,     0,     0,     0,
   209,    91,     5,     7,    90,     5,   236,     7,   288,    45,
   226,     7,   289,   107,     5,   237,     7,   210,     0,     0,
   290,   209,   291,   210,     0,     0,   291,   292,     0,    76,
     5,     7,     0,    85,   293,     7,     0,    78,   295,     7,
     0,     5,     0,   209,   294,   210,     0,     0,   294,   235,
     5,     0,     5,     0,   209,   296,   210,     0,     0,   296,
   235,     5,     0,     0,   297,   209,   298,   210,     0,     0,
   298,   299,     0,    76,     5,     7,     0,    66,     5,     7,
     0,    78,     5,     7,     0,     0,   300,   209,   301,   210,
     0,     0,   301,   302,     0,    78,     5,     7,     0,    83,
   227,    89,     5,     7,     0,    87,   227,     7,     0,    88,
   230,     7,     0,    89,     5,   237,     7,     0,     0,   303,
   304,     0,   209,   305,   210,     0,   388,     0,     0,   305,
   306,     0,    76,     5,     7,     0,    76,     5,   236,     7,
     0,    66,     5,     7,     0,    91,   209,   307,   210,     0,
    95,   209,   313,   210,     0,     0,   307,   209,   308,   210,
     0,     0,   308,   309,     0,    76,     5,     7,     0,    66,
    86,     7,     0,    66,    96,     7,     0,    66,     5,     7,
     0,     0,    92,     5,   237,   310,   312,     7,     0,    93,
     3,     7,     0,     0,   204,   311,   246,   205,     7,     0,
   106,   226,     7,     0,    65,     5,     7,     0,    63,     5,
     7,     0,    94,     3,     7,     0,     0,   204,     5,   205,
     0,     0,   313,   314,     0,    96,   209,   319,   210,     0,
    97,   209,   319,   210,     0,    98,   209,   323,   210,     0,
    99,   209,   315,   210,     0,     0,   315,   316,     0,    66,
     5,     7,     0,    89,     5,     7,     0,   209,   317,   210,
     0,     0,   317,   318,     0,    60,   328,     7,     0,    61,
   328,     7,     0,    95,   328,     7,     0,   106,   226,     7,
     0,     0,   319,   320,     0,     0,     0,   327,   204,   321,
   246,   322,   211,   246,   205,     7,     0,   106,   226,     7,
     0,    63,     5,     7,     0,    65,     5,     7,     0,     0,
   323,   324,     0,   106,   226,     7,     0,     0,     0,   327,
   204,   325,   246,   326,   211,   328,   205,     7,     0,     0,
   100,     0,   101,     0,   102,     0,   103,     0,   104,     0,
   105,     0,   209,     5,     5,   210,     0,   209,     5,   210,
     0,     0,   329,   330,     0,   209,   331,   210,     0,   388,
     0,     0,   331,   332,     0,    76,     5,     7,     0,    76,
     5,   236,     7,     0,   108,   209,   334,   210,     0,     0,
   115,   333,   209,   341,   210,     0,     0,   334,   209,   335,
   210,     0,     0,   335,   336,     0,    76,     5,     7,     0,
    66,     5,     7,     0,   109,   337,     7,     0,   110,   396,
     7,     0,   113,   339,     7,     0,   114,     5,     7,     0,
   111,   393,     7,     0,   112,   396,     7,     0,     5,   237,
     0,   209,   338,   210,     0,     0,   338,   235,     5,     0,
     5,     0,   209,   340,   210,     0,     0,   340,   235,     5,
     0,     0,   341,   342,     0,     5,     5,     7,     0,   117,
   242,     7,     0,   126,   209,   348,   210,     0,   130,   209,
   350,   210,     0,   133,   209,   352,   210,     0,   136,   209,
   354,   210,     0,     5,   204,     5,   205,     7,     0,   117,
   204,   242,   205,     7,     0,   177,     7,     0,   121,   204,
   242,   205,   209,   341,   210,     0,   121,   204,   242,   205,
   209,   341,   210,   122,   209,   341,   210,     0,   119,   204,
     5,   211,   242,   205,     7,     0,   124,   204,     5,   211,
   242,   205,     7,     0,   125,   204,     5,   211,   226,   211,
     5,   205,     7,     0,   120,   204,     5,   211,     5,   211,
   393,   205,     7,     0,   123,   204,     5,   211,   391,   211,
   393,   211,   391,   205,     7,     0,   126,   204,   391,   211,
   391,   211,   242,   211,   242,   205,   209,   341,   210,     0,
   130,   204,   391,   211,   391,   211,   242,   211,   391,   211,
   391,   205,   209,   341,   210,     0,   133,   204,   391,   211,
   391,   211,   242,   205,   209,   341,   210,     0,   133,   204,
   391,   211,   391,   211,   242,   211,   391,   205,   209,   341,
   210,     0,     0,   148,   343,   204,   345,   346,   205,     7,
     0,     0,   150,   344,   204,   345,   346,   205,     7,     0,
   139,   204,   226,   211,   242,   205,     7,     0,   143,   204,
     5,   205,     7,     0,   140,   204,   396,   205,     7,     0,
   244,     0,     5,     0,     0,   346,   347,     0,   211,   162,
   396,     0,   211,   165,   393,     0,   211,   393,     0,     0,
   348,   349,     0,   127,   391,     7,     0,   128,   391,     7,
     0,   118,   242,     7,     0,   129,   242,     7,     0,   115,
   209,   341,   210,     0,     0,   350,   351,     0,   127,   391,
     7,     0,   128,   391,     7,     0,   118,   242,     7,     0,
   131,   391,     7,     0,   132,   391,     7,     0,   115,   209,
   341,   210,     0,     0,   352,   353,     0,   134,   391,     7,
     0,    68,   391,     7,     0,   135,   242,     7,     0,   176,
   391,     7,     0,   115,   209,   341,   210,     0,     0,   354,
   355,     0,   134,   391,     7,     0,   137,   391,     7,     0,
    68,   391,     7,     0,   176,   391,     7,     0,   108,     5,
     7,     0,   138,   209,   356,   210,     0,   115,   209,   341,
   210,     0,   116,   209,   341,   210,     0,     0,   356,   209,
   357,   210,     0,     0,   357,   358,     0,    66,     5,     7,
     0,    91,     5,     7,     0,   106,   226,     7,     0,    68,
   391,     7,     0,    79,   242,     7,     0,   176,     5,     7,
     0,     0,   359,   360,     0,   209,   361,   210,     0,   388,
     0,     0,   361,   362,     0,    76,     5,     7,     0,    76,
     5,   236,     7,     0,   109,     5,   237,     7,     0,   142,
     5,     7,     0,    91,   209,   363,   210,     0,     0,   363,
   209,   364,   210,     0,     0,   364,   365,     0,    76,     5,
     7,     0,    57,   209,   366,   210,     0,     0,   366,    96,
   209,   367,   210,     0,   366,     5,   209,   367,   210,     0,
     0,   367,   368,     0,     0,   327,   204,   369,   246,   205,
     7,     0,    66,     5,     7,     0,     0,   106,   370,   226,
     7,     0,    63,     5,     7,     0,    65,     5,     7,     0,
     0,   371,   372,     0,   209,   373,   210,     0,   388,     0,
     0,   373,   374,     0,    76,     5,     7,     0,   144,     5,
     7,     0,   167,     5,     7,     0,   146,   396,     7,     0,
   115,   209,   377,   210,     0,     0,   143,     5,   145,     5,
   376,   209,   377,   210,     0,     0,     0,   377,   378,   379,
     0,   147,   204,   381,   384,   385,   205,     7,     0,   148,
   204,   381,   384,   385,   205,     7,     0,     0,   149,   204,
   226,   380,   211,   106,   226,   385,   205,     7,     0,     5,
   383,   211,     0,     5,   383,   382,     5,   383,   211,     0,
   195,     0,   196,     0,   193,     0,   194,     0,     0,   204,
   226,   205,     0,   152,     0,   153,   226,     0,   154,   226,
     0,   156,   209,   209,   394,   210,   209,   394,   210,   209,
   394,   210,   210,     0,   155,   226,     0,   155,   209,   242,
   211,   242,   211,   242,   210,   209,   393,   211,   393,   210,
     0,   157,   209,   394,   210,     0,   158,   209,   209,   394,
   210,   209,   394,   210,   210,   209,   391,   210,     0,   159,
   209,   209,   394,   210,   209,   394,   210,   209,   394,   210,
   210,   209,   391,   211,   391,   210,     0,   160,   209,   209,
   394,   210,   209,   394,   210,   209,   394,   210,   209,   394,
   210,   210,   209,   391,   211,   391,   211,   391,   210,     0,
   153,   226,   161,     5,   209,   391,   211,   391,   210,   209,
   391,   210,     0,     0,   385,   386,     0,   211,   162,   396,
     0,   211,   162,   189,   396,     0,   211,   162,   192,   396,
     0,   211,   163,   391,     0,   211,   170,     0,   211,   171,
   391,     0,   211,   166,   391,     0,   211,   167,     5,     0,
   211,   168,   387,     0,   211,   169,   387,     0,   211,   167,
   387,     0,   211,   164,   391,     0,   211,   165,   393,     0,
   211,   151,     5,     0,   211,   173,     5,     0,   211,   172,
   391,     0,   211,    57,   393,     0,   211,   174,   391,     0,
   211,   174,   209,   394,   210,     0,   211,   175,     0,   211,
   111,   393,     0,     0,   387,     6,     0,     5,   180,   393,
     7,     0,     5,   180,     6,     7,     0,    14,   204,   389,
   205,     7,     0,     0,   389,   235,     5,     0,   389,   235,
     5,   180,   391,     0,   389,   235,     5,   180,     6,     0,
    20,     0,    21,     0,    22,     0,    23,     0,    24,     0,
    25,     0,    26,     0,    27,     0,    28,     0,    29,     0,
    30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
    35,     0,    36,     0,    37,     0,    38,     0,    39,     0,
     5,     0,   392,     0,   202,   391,   203,     0,   194,   391,
     0,   199,   391,     0,   391,   194,   391,     0,   391,   193,
   391,     0,   391,   195,   391,     0,   391,   196,   391,     0,
   391,   197,   391,     0,   391,   201,   391,     0,   391,   187,
   391,     0,   391,   189,   391,     0,   391,   188,   391,     0,
   391,   190,   391,     0,   391,   184,   391,     0,   391,   185,
   391,     0,   391,   183,   391,     0,   391,   182,   391,     0,
    20,   204,   391,   205,     0,    21,   204,   391,   205,     0,
    22,   204,   391,   205,     0,    23,   204,   391,   205,     0,
    24,   204,   391,   205,     0,    25,   204,   391,   205,     0,
    26,   204,   391,   205,     0,    27,   204,   391,   205,     0,
    28,   204,   391,   205,     0,    29,   204,   391,   205,     0,
    30,   204,   391,   211,   391,   205,     0,    31,   204,   391,
   205,     0,    32,   204,   391,   205,     0,    33,   204,   391,
   205,     0,    34,   204,   391,   205,     0,    35,   204,   391,
   205,     0,    36,   204,   391,   205,     0,    37,   204,   391,
   211,   391,   205,     0,    38,   204,   391,   211,   391,   205,
     0,    39,   204,   391,   211,   391,   205,     0,   391,   181,
   391,     8,   391,     0,   391,   207,     0,     4,     0,     3,
     0,    15,     0,    16,     0,    17,     0,    18,     0,    19,
     0,     5,     0,     0,   391,     0,   395,     0,   209,   394,
   210,     0,   391,     0,   395,     0,   394,   211,   391,     0,
   394,   211,   395,     0,   391,     8,   391,     0,   391,     8,
   391,     8,   391,     0,     5,   209,   210,     0,     5,   209,
   394,   210,     0,    12,   204,     5,   205,     0,    13,   204,
     5,   211,     5,   205,     0,     6,     0,     5,     0,     9,
   204,   396,   211,   396,   205,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   318,   353,   390,   393,   396,   399,   402,   403,   404,   405,
   406,   407,   408,   409,   410,   412,   414,   416,   421,   430,
   434,   437,   440,   443,   445,   453,   467,   470,   471,   474,
   479,   482,   484,   487,   489,   493,   501,   512,   521,   530,
   537,   572,   577,   588,   591,   605,   610,   613,   662,   675,
   701,   706,   721,   739,   760,   766,   775,   789,   823,   836,
   856,   860,   870,   887,   887,   890,   896,   899,   902,   912,
   915,   918,   922,   942,   986,   990,   993,  1010,  1019,  1026,
  1029,  1034,  1040,  1044,  1049,  1054,  1060,  1067,  1071,  1084,
  1099,  1113,  1119,  1125,  1131,  1137,  1143,  1149,  1155,  1161,
  1167,  1173,  1179,  1185,  1191,  1197,  1203,  1209,  1216,  1222,
  1224,  1233,  1237,  1243,  1317,  1351,  1360,  1372,  1374,  1385,
  1387,  1403,  1409,  1415,  1417,  1446,  1470,  1483,  1489,  1496,
  1502,  1509,  1519,  1522,  1523,  1526,  1529,  1532,  1537,  1540,
  1554,  1561,  1566,  1571,  1575,  1582,  1587,  1592,  1597,  1603,
  1607,  1612,  1615,  1651,  1659,  1664,  1673,  1677,  1686,  1689,
  1694,  1699,  1704,  1712,  1716,  1728,  1738,  1743,  1748,  1753,
  1765,  1769,  1825,  1828,  1831,  1834,  1837,  1846,  1853,  1856,
  1878,  1881,  1891,  1895,  1903,  1910,  1919,  1922,  1942,  1959,
  1981,  1991,  1995,  2007,  2031,  2056,  2061,  2069,  2077,  2087,
  2104,  2112,  2119,  2126,  2135,  2144,  2153,  2172,  2180,  2183,
  2206,  2210,  2219,  2223,  2231,  2238,  2247,  2250,  2253,  2256,
  2261,  2279,  2326,  2342,  2346,  2351,  2356,  2361,  2375,  2395,
  2404,  2428,  2483,  2487,  2491,  2500,  2564,  2570,  2575,  2580,
  2584,  2591,  2594,  2599,  2617,  2622,  2626,  2643,  2657,  2662,
  2666,  2679,  2685,  2692,  2699,  2703,  2710,  2720,  2731,  2748,
  2820,  2832,  2836,  2856,  2870,  2873,  2876,  2920,  2927,  2930,
  2952,  2956,  2964,  2968,  2976,  2983,  2993,  2995,  3000,  3015,
  3031,  3048,  3052,  3057,  3061,  3064,  3074,  3113,  3137,  3142,
  3148,  3309,  3314,  3323,  3332,  3337,  3340,  3378,  3395,  3421,
  3426,  3429,  3432,  3437,  3445,  3448,  3460,  3470,  3482,  3491,
  3494,  3498,  3500,  3502,  3508,  3526,  3530,  3541,  3602,  3648,
  3672,  3681,  3693,  3710,  3714,  3748,  3757,  3811,  3827,  3830,
  3831,  3832,  3833,  3834,  3835,  3839,  3862,  3884,  3891,  3894,
  3915,  3919,  3927,  3931,  3940,  3947,  3950,  3952,  3957,  3973,
  3990,  4005,  4009,  4014,  4023,  4026,  4031,  4036,  4041,  4046,
  4053,  4092,  4097,  4102,  4112,  4124,  4128,  4133,  4144,  4153,
  4160,  4181,  4188,  4194,  4200,  4206,  4214,  4231,  4238,  4244,
  4255,  4266,  4278,  4290,  4310,  4327,  4349,  4362,  4376,  4389,
  4402,  4409,  4411,  4418,  4420,  4430,  4440,  4450,  4460,  4470,
  4476,  4479,  4483,  4493,  4507,  4519,  4523,  4529,  4533,  4537,
  4542,  4551,  4564,  4568,  4574,  4578,  4582,  4586,  4591,  4600,
  4612,  4615,  4621,  4625,  4629,  4633,  4642,  4657,  4660,  4666,
  4670,  4674,  4679,  4689,  4695,  4701,  4710,  4714,  4718,  4732,
  4735,  4747,  4776,  4779,  4782,  4790,  4806,  4814,  4817,  4838,
  4841,  4852,  4855,  4863,  4871,  4917,  4922,  4927,  4931,  4935,
  4942,  4946,  4950,  4955,  4961,  4967,  4980,  4991,  4994,  5002,
  5030,  5041,  5041,  5047,  5056,  5072,  5080,  5083,  5088,  5091,
  5100,  5103,  5111,  5123,  5134,  5139,  5144,  5162,  5171,  5175,
  5180,  5188,  5194,  5198,  5203,  5209,  5223,  5245,  5248,  5249,
  5250,  5253,  5257,  5261,  5269,  5276,  5283,  5307,  5314,  5325,
  5338,  5358,  5384,  5417,  5437,  5456,  5459,  5467,  5474,  5481,
  5485,  5489,  5493,  5497,  5507,  5512,  5517,  5537,  5544,  5553,
  5562,  5571,  5578,  5586,  5590,  5599,  5603,  5615,  5622,  5668,
  5685,  5691,  5695,  5698,  5704,  5710,  5721,  5723,  5724,  5725,
  5726,  5727,  5728,  5729,  5730,  5731,  5732,  5733,  5734,  5735,
  5736,  5737,  5738,  5739,  5740,  5741,  5742,  5744,  5746,  5747,
  5748,  5749,  5750,  5751,  5752,  5753,  5754,  5755,  5756,  5757,
  5758,  5759,  5760,  5761,  5762,  5763,  5764,  5765,  5766,  5767,
  5768,  5769,  5770,  5771,  5772,  5773,  5774,  5775,  5776,  5777,
  5778,  5779,  5780,  5781,  5782,  5783,  5784,  5787,  5790,  5791,
  5792,  5793,  5794,  5795,  5796,  5812,  5817,  5823,  5826,  5831,
  5839,  5842,  5845,  5855,  5863,  5874,  5889,  5911,  5926,  5965,
  5970,  5985
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
"PrintSubType","PrintOptions","PrintOption","ParsedStrings","Affectation","DefineConstants",
"NameForFunction","FExpr","OneFExpr","ListOfFExpr","RecursiveListOfFExpr","MultiFExpr",
"CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   213,   212,   214,   215,   214,   216,   216,   216,   216,   216,
   216,   216,   216,   216,   216,   216,   216,   216,   216,   217,
   217,   217,   217,   217,   218,   217,   219,   220,   219,   221,
   221,   222,   221,   221,   221,   224,   225,   223,   223,   226,
   226,   227,   227,   228,   228,   229,   229,   229,   230,   231,
   231,   232,   232,   232,   233,   233,   233,   233,   233,   233,
   234,   234,   234,   235,   235,   236,   237,   237,   238,   239,
   239,   240,   240,   240,   240,   241,   241,   242,   242,   243,
   242,   244,   244,   245,   245,   247,   246,   248,   249,   250,
   248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
   248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
   248,   251,   251,   251,   251,   251,   251,   252,   251,   253,
   251,   251,   251,   254,   251,   251,   251,   251,   251,   251,
   251,   251,   255,   255,   255,   256,   256,   257,   257,   257,
   258,   258,   259,   259,   260,   260,   261,   261,   262,   262,
   263,   263,   263,   264,   264,   265,   265,   266,   266,   266,
   267,   267,   268,   268,   269,   269,   269,   270,   270,   271,
   271,   272,   272,   272,   272,   272,   272,   273,   273,   274,
   274,   275,   275,   276,   276,   276,   276,   276,   277,   277,
   278,   278,   279,   279,   279,   279,   279,   279,   279,   279,
   279,   279,   279,   279,   279,   279,   279,   280,   280,   281,
   281,   282,   282,   283,   283,   283,   283,   283,   283,   283,
   284,   284,   285,   285,   286,   286,   286,   286,   286,   286,
   286,   286,   287,   288,   289,   287,   290,   290,   291,   291,
   292,   292,   292,   293,   293,   294,   294,   295,   295,   296,
   296,   297,   297,   298,   298,   299,   299,   299,   300,   300,
   301,   301,   302,   302,   302,   302,   302,   303,   303,   304,
   304,   305,   305,   306,   306,   306,   306,   306,   307,   307,
   308,   308,   309,   309,   309,   309,   310,   309,   309,   311,
   309,   309,   309,   309,   309,   312,   312,   313,   313,   314,
   314,   314,   314,   315,   315,   316,   316,   316,   317,   317,
   318,   318,   318,   318,   319,   319,   321,   322,   320,   320,
   320,   320,   323,   323,   324,   325,   326,   324,   327,   327,
   327,   327,   327,   327,   327,   328,   328,   329,   329,   330,
   330,   331,   331,   332,   332,   332,   333,   332,   334,   334,
   335,   335,   336,   336,   336,   336,   336,   336,   336,   336,
   337,   337,   338,   338,   339,   339,   340,   340,   341,   341,
   342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
   342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
   343,   342,   344,   342,   342,   342,   342,   345,   345,   346,
   346,   347,   347,   347,   348,   348,   349,   349,   349,   349,
   349,   350,   350,   351,   351,   351,   351,   351,   351,   352,
   352,   353,   353,   353,   353,   353,   354,   354,   355,   355,
   355,   355,   355,   355,   355,   355,   356,   356,   357,   357,
   358,   358,   358,   358,   358,   358,   359,   359,   360,   360,
   361,   361,   362,   362,   362,   362,   362,   363,   363,   364,
   364,   365,   365,   366,   366,   366,   367,   367,   369,   368,
   368,   370,   368,   368,   368,   371,   371,   372,   372,   373,
   373,   374,   374,   374,   374,   374,   376,   375,   377,   378,
   377,   379,   379,   380,   379,   381,   381,   382,   382,   382,
   382,   383,   383,   384,   384,   384,   384,   384,   384,   384,
   384,   384,   384,   384,   385,   385,   386,   386,   386,   386,
   386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
   386,   386,   386,   386,   386,   386,   386,   387,   387,   388,
   388,   388,   389,   389,   389,   389,   390,   390,   390,   390,
   390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
   390,   390,   390,   390,   390,   390,   390,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   392,   392,   392,
   392,   392,   392,   392,   392,   393,   393,   393,   393,   394,
   394,   394,   394,   395,   395,   395,   395,   395,   395,   396,
   396,   396
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     4,     5,     2,     0,     2,     0,     0,     3,     4,
     5,     0,     6,     5,     1,     0,     0,     7,     2,     1,
     2,     1,     1,     1,     1,     0,     3,     4,     1,     1,
     3,     0,     3,     4,     1,     3,     5,     1,     4,     3,
     0,     3,     6,     0,     1,     4,     0,     2,     3,     0,
     2,     5,     6,     7,     1,     0,     3,     4,     4,     0,
     2,     0,     3,     1,     3,     0,     2,     1,     0,     0,
     7,     3,     3,     6,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
     2,     3,     1,     3,     2,     1,     2,     0,     5,     0,
    11,     4,     4,     0,     7,     6,     2,     2,     2,     2,
     3,     2,     3,     2,     3,     1,     3,     0,     3,     6,
     0,     4,     0,     2,     3,     4,     0,     4,     0,     2,
     3,     3,     4,     0,     4,     0,     2,     3,     3,     4,
     0,     4,     0,     2,     3,     3,     4,     0,     4,     0,
     2,     3,     3,     3,     3,     3,     3,     0,     2,     3,
     1,     0,     2,     3,     4,     3,     4,     5,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     7,     3,
     3,     3,     3,     3,     7,     7,     7,     0,     2,     3,
     1,     0,     2,     3,     4,     3,     4,     4,     4,     4,
     0,     4,     0,     2,     3,     3,     4,     4,     7,     3,
     3,     3,     0,     0,     0,    18,     0,     4,     0,     2,
     3,     3,     3,     1,     3,     0,     3,     1,     3,     0,
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
    11,     7,     7,     9,     9,    11,    13,    15,    11,    13,
     0,     7,     0,     7,     7,     5,     5,     1,     1,     0,
     2,     3,     3,     2,     0,     2,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     3,     4,     0,
     2,     3,     3,     3,     3,     4,     0,     2,     3,     3,
     3,     3,     3,     4,     4,     4,     0,     4,     0,     2,
     3,     3,     3,     3,     3,     3,     0,     2,     3,     1,
     0,     2,     3,     4,     4,     3,     4,     0,     4,     0,
     2,     3,     4,     0,     5,     5,     0,     2,     0,     6,
     3,     0,     4,     3,     3,     0,     2,     3,     1,     0,
     2,     3,     3,     3,     3,     4,     0,     8,     0,     0,
     3,     7,     7,     0,    10,     3,     6,     1,     1,     1,
     1,     0,     3,     1,     2,     2,    12,     2,    13,     4,
    12,    17,    22,    12,     0,     2,     3,     4,     4,     3,
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
     1,     3,     3,     3,     5,     3,     4,     4,     6,     1,
     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,   616,   631,   630,     0,    18,   543,    27,
   178,   141,   154,   208,    70,   268,   338,   447,     0,   476,
     0,    20,    24,     0,     0,     0,    26,   609,   608,   615,
     0,     0,     0,   610,   611,   612,   613,   614,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   617,   568,     0,   618,     0,    64,    28,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    21,     0,     0,     0,     0,   541,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   615,   570,
   571,     0,   620,     0,   621,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   607,   540,     0,     0,    65,     0,     6,     0,   182,
     8,   179,   181,   143,     9,   156,    10,   212,    11,   209,
   211,     0,     0,     7,    71,    75,   272,    12,   269,   271,
   342,    13,   339,   341,   451,    14,   448,   450,   487,   480,
    15,   477,   479,     0,    22,   502,     0,     0,    67,    42,
     0,    40,   494,     0,   626,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   569,   619,
     0,   624,     0,   585,   584,   582,   583,   578,   580,   579,
   581,   573,   572,   574,   575,   576,   577,     0,   542,   544,
     0,     0,    29,    35,     0,     0,     0,     0,     0,    76,
     0,     0,     0,     0,     0,    23,     0,     0,   504,     0,
     0,     0,     0,     0,     0,     0,     0,   515,   515,     0,
    41,    55,    58,    52,    39,    50,     0,    36,   627,   628,
     0,   586,   587,   588,   589,   590,   591,   592,   593,   594,
   595,     0,   597,   598,   599,   600,   601,   602,     0,     0,
     0,   622,   623,     0,     0,     0,     0,   616,     0,     0,
     0,    61,     0,     0,     0,   180,   183,     0,     0,   142,
   144,     0,    80,     0,   155,   157,     0,     0,     0,     0,
     0,     0,   210,   213,     0,     0,    64,     0,     0,     0,
     0,   270,   273,     0,     0,   347,   340,   343,     0,     0,
     0,     0,   449,   452,   489,     0,     0,     0,     0,     0,
   478,   481,     0,   500,   501,   498,   499,   496,     0,   505,
   506,    80,   508,     0,     0,     0,     0,     0,     0,     0,
    68,     0,     0,    64,     0,     0,     0,     0,     0,     0,
     0,   625,   606,   632,   546,   545,   615,     0,     0,     0,
    32,     0,    64,     0,   189,     0,     0,   147,     0,   161,
     0,     0,     0,    86,     0,   259,     0,     0,   221,   237,
   252,    80,     0,     0,     0,     0,     0,   279,   298,     0,
   349,     0,     0,   458,    67,     0,   490,     0,   489,     0,
     0,     0,   503,   502,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   516,     0,    56,    60,     0,    51,     0,
     0,    45,    37,    44,   629,   596,   603,   604,   605,    30,
     0,    69,     0,    43,     0,     0,     0,   189,     0,   186,
   184,     0,     0,     0,   145,     0,     0,     0,   159,    81,
     0,   158,     0,   216,   214,     0,     0,     0,     0,     0,
    80,    72,    77,   276,   274,     0,     0,     0,   344,     0,
     0,   369,   453,     0,     0,     0,   456,   488,     0,   482,
   490,   483,   485,   484,     0,     0,    80,     0,   510,     0,
     0,     0,   492,   616,   616,     0,     0,     0,     0,   616,
     0,   538,   538,   538,   521,     0,     0,     0,     0,   536,
   493,     0,    59,     0,    53,   515,    64,    66,     0,    31,
    34,    62,     0,   191,   187,   185,   149,   146,   163,   160,
     0,     0,   615,   547,   548,   549,   550,   551,   552,   553,
   554,   555,   556,   557,   558,   559,   560,   561,   562,   563,
   564,   565,   566,     0,   124,     0,     0,   120,   118,     0,
     0,     0,     0,     0,     0,     0,     0,    87,    88,   116,
     0,   113,   261,   220,   215,   223,   217,   239,   218,   254,
   219,    73,     0,   275,   281,   277,     0,     0,     0,     0,
   278,   299,   345,   351,   346,     0,   454,   460,   457,   455,
   491,   486,   497,     0,     0,     0,     0,     0,     0,   533,
   537,   530,     0,     0,   517,   520,   528,   529,   523,   524,
   527,   525,   526,   522,   532,   531,     0,   534,    57,    54,
     0,     0,     0,    33,     0,   188,     0,     0,     0,    78,
    79,   115,     0,     0,     0,     0,     0,     0,     0,   110,
   109,   111,     0,   132,   130,   127,   129,   128,     0,    89,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   117,   138,
     0,     0,     0,     0,    74,     0,   315,   315,   323,   304,
     0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   391,   393,     0,   348,
   370,     0,     0,    80,     0,     0,     0,     0,   518,   519,
   539,     0,     0,    38,    49,     0,     0,     0,     0,     0,
     0,     0,    80,    80,    80,    80,     0,     0,     0,    80,
   190,   192,     0,     0,   148,   150,     0,     0,     0,   162,
   164,     0,    86,     0,     0,     0,    86,     0,   112,     0,
   337,     0,   108,   107,   104,   105,   106,   100,   102,   101,
   103,    96,    97,    92,    95,    98,    93,    99,   131,   134,
     0,   136,     0,     0,   114,     0,     0,     0,     0,     0,
   260,   262,     0,     0,     0,     0,    82,     0,     0,   222,
   224,     0,     0,     0,   238,   240,     0,     0,     0,   253,
   255,     0,     0,     0,     0,     0,     0,     0,     0,   290,
   280,   282,   329,   329,   329,     0,     0,     0,     0,     0,
   616,     0,     0,     0,   350,   352,     0,     0,    80,     0,
     0,     0,    80,     0,     0,     0,     0,   405,     0,   412,
     0,   420,   427,     0,     0,     0,     0,     0,   379,     0,
     0,   459,   461,     0,     0,     0,     0,     0,     0,   535,
   495,    67,    47,    63,     0,     0,     0,     0,    80,     0,
    80,     0,     0,     0,     0,     0,     0,    80,     0,     0,
     0,   138,   168,     0,     0,   122,     0,   123,     0,     0,
     0,    86,   336,     0,   133,   135,     0,     0,     0,     0,
     0,     0,     0,    67,     0,     0,   233,     0,    80,     0,
     0,     0,     0,   248,   250,     0,   244,   246,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
     0,     0,    86,     0,     0,   330,   331,   332,   333,   334,
   335,     0,   300,   316,     0,   301,     0,   302,   324,     0,
     0,     0,   309,   303,   305,     0,     0,    67,   363,     0,
     0,     0,     0,   365,   367,     0,     0,   371,     0,     0,
   372,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    82,    82,   464,
     0,     0,     0,     0,     0,     0,     0,    48,   194,   195,
   200,   201,     0,   204,     0,   203,   197,   196,    64,   198,
   193,     0,   202,   152,   151,     0,     0,   165,   166,     0,
     0,     0,   119,     0,    90,   137,     0,   139,   263,     0,
   265,   266,     0,   225,   226,     0,     0,     0,    64,    84,
     0,   230,   231,   232,   241,    64,   243,    64,   242,   257,
   256,   258,   294,   293,   286,   284,   285,   283,   287,   289,
   295,   292,     0,     0,     0,     0,   317,     0,   326,     0,
     0,     0,   354,   353,   361,    64,   355,   356,   359,   360,
    64,   357,   358,     0,     0,    80,     0,     0,     0,    80,
     0,     0,     0,    80,     0,     0,    80,   373,   406,     0,
     0,    80,     0,     0,     0,     0,   374,   413,     0,     0,
     0,     0,    80,     0,   375,   421,     0,     0,     0,     0,
     0,     0,     0,     0,   376,   428,    80,     0,     0,   399,
   398,   400,   400,     0,   462,     0,   616,     0,     0,     0,
     0,    80,    80,     0,    80,   153,   170,   167,     0,    94,
     0,   126,     0,     0,     0,   267,   227,     0,   228,     0,
    83,    80,   249,     0,   245,     0,   296,     0,   321,   322,
   320,    86,   325,    86,   306,   307,     0,     0,     0,     0,
   308,   310,   362,     0,   366,     0,   377,   378,     0,     0,
   369,     0,     0,     0,     0,   369,     0,     0,     0,     0,
     0,   369,     0,     0,     0,     0,     0,     0,     0,   369,
     0,     0,     0,     0,     0,   369,   369,     0,     0,   437,
     0,     0,   397,   396,     0,     0,     0,     0,   463,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   125,    86,    91,     0,   264,     0,     0,    85,   251,   247,
     0,     0,   291,   318,   327,     0,     0,     0,     0,   364,
   368,     0,   616,     0,   616,     0,     0,    80,     0,   409,
   407,   408,   410,    80,     0,   416,   414,   415,   417,   418,
    80,   423,     0,   422,   424,   425,   431,   433,     0,     0,
   429,   430,     0,   432,     0,     0,   616,   401,     0,   467,
   467,     0,   616,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   169,   171,     0,
   140,     0,     0,     0,   288,     0,     0,   311,   312,   313,
   314,   382,     0,   380,     0,   383,     0,     0,   411,     0,
   419,     0,   426,   435,   436,   439,   434,   395,   392,     0,
   616,   404,   394,   329,   329,   514,     0,   507,   511,     0,
     0,   207,   206,   199,   205,     0,     0,     0,     0,     0,
     0,    86,     0,   229,   297,    86,     0,     0,     0,     0,
     0,    80,     0,     0,     0,     0,   402,   403,     0,     0,
     0,   472,   466,     0,   468,   465,   509,     0,     0,   172,
   173,   174,   175,   176,   177,     0,     0,     0,     0,   385,
   369,     0,   384,     0,     0,   369,     0,     0,     0,    80,
     0,     0,     0,   438,   440,     0,     0,     0,     0,   469,
     0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   474,   475,
   471,     0,    86,     0,     0,   234,   319,   328,   381,   386,
   369,     0,   389,   369,   441,   444,   445,   442,   443,   446,
   473,     0,     0,     0,     0,     0,     0,     0,     0,   512,
     0,     0,   387,   369,   390,   470,     0,     0,     0,     0,
   235,   388,     0,     0,     0,     0,   513,    67,     0,     0,
   236,     0,     0,     0
};

static const short yydefgoto[] = {  1562,
     1,     2,     3,    19,    20,    21,    89,   159,   253,   483,
   202,   396,   567,   203,   204,   473,   682,   777,   285,   394,
   286,   413,   157,   320,   281,   321,    94,   175,   347,   423,
   424,  1191,  1101,   500,   501,   618,   812,  1213,   619,   698,
   697,   694,   729,   833,   835,    91,   256,   331,   494,   688,
   796,    92,   257,   336,   496,   689,   801,  1077,  1300,  1379,
    90,   162,   255,   327,   489,   687,   792,    93,   170,   258,
   344,   507,   732,   851,  1098,  1535,  1554,   508,   733,   856,
   979,  1108,   976,  1106,   509,   734,   861,   503,   731,   842,
    95,   179,   261,   353,   517,   736,   872,  1227,   993,  1312,
   518,   642,   876,  1015,  1132,  1242,   873,  1004,  1232,  1386,
   875,  1009,  1234,  1387,  1005,   620,    96,   183,   262,   358,
   442,   521,   741,   886,  1020,  1136,  1026,  1141,   646,   761,
   907,   908,  1192,  1285,  1358,  1039,  1159,  1041,  1168,  1043,
  1176,  1044,  1186,  1353,  1446,  1485,    97,   187,   263,   364,
   525,   762,   913,  1194,  1414,  1455,  1513,  1489,    99,   192,
   265,   372,    22,   264,   447,   529,    47,   287,   197,   379,
   268,   278,   389,   464,   671,    23,    88,   621,   133,    84,
    85,   134,   135,    28
};

static const short yypact[] = {-32768,
-32768,    46,   818,  -137,   460,   -73,   -66,   -56,   -48,   -10,
     3,    62,    80,   101,   130,    17,    71,   209,-32768,-32768,
   352,-32768,-32768,  1552,-32768,-32768,   148,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   214,-32768,
   502,-32768,-32768,   174,   196,   232,-32768,-32768,-32768,   183,
   436,   244,   255,-32768,-32768,-32768,-32768,-32768,   268,   271,
   275,   333,   336,   358,   363,   367,   369,   397,   404,   413,
   416,   418,   421,   429,   433,   447,   499,   526,  2508,  2508,
  2508,  2434,  2367,-32768,   476,-32768,   460,  -160,   292,    22,
    51,   287,    45,    25,    55,    65,    67,   276,    70,   505,
-32768,   482,   482,    77,   296,-32768,   564,   584,  2508,  2508,
  2508,  2508,  2508,  2508,  2508,  2508,  2508,  2508,  2508,  2508,
  2508,  2508,  2508,  2508,  2508,  2508,  2508,  2508,-32768,  -124,
  -124,  3301,  2367,   303,-32768,  2508,  2508,  2508,  2508,  2508,
  2508,  2508,  2508,  2508,  2508,  2508,  2508,  2508,  2508,  2508,
  2508,-32768,-32768,   466,   694,-32768,   732,-32768,   396,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,    26,   561,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   760,-32768,   570,  1348,  1348,     9,-32768,
    10,-32768,-32768,   589,-32768,   308,   602,   603,  3328,  3355,
  3382,  3409,  3436,  3463,  3490,  3517,  3544,  3571,  2419,  3598,
  3625,  3652,  3679,  3706,  3733,  2456,  2566,  2597,-32768,-32768,
  2434,  2388,  2545,  1757,  2524,  1477,  1477,   665,   665,   665,
   665,   605,   605,  -124,  -124,  -124,  -124,   460,-32768,   638,
   -17,   618,-32768,-32768,   298,   284,   228,   313,   100,-32768,
   307,   347,   394,   617,   492,-32768,    77,   587,-32768,    77,
    77,   135,   627,   634,   655,   658,   662,-32768,-32768,   666,
-32768,   872,   673,-32768,-32768,-32768,   688,-32768,-32768,-32768,
   879,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2508,-32768,-32768,-32768,-32768,-32768,-32768,  2508,  2508,
  2508,  2367,-32768,  2508,  2508,   698,  2471,  1255,  1952,   735,
   736,-32768,    18,   907,   922,-32768,-32768,   719,   937,-32768,
-32768,   721,    30,   938,-32768,-32768,   742,   952,   957,   755,
   786,   789,-32768,-32768,   810,   794,   -59,   995,   996,   826,
   830,-32768,-32768,   998,   837,-32768,-32768,-32768,  1039,   839,
  1044,  1046,-32768,-32768,-32768,  1047,   845,  1054,   460,  1056,
-32768,-32768,   857,-32768,-32768,-32768,-32768,-32768,  1058,   905,
-32768,    30,-32768,   859,  2434,   860,   866,   871,   -47,    92,
-32768,  1078,   724,   320,   981,    59,   883,  3760,  3787,  3814,
  3841,  3976,  3976,-32768,-32768,  3976,    54,  1084,  2508,  3031,
-32768,   139,   170,   884,-32768,  1085,    64,-32768,  1092,-32768,
   896,   899,  1102,-32768,  1110,-32768,  1117,   127,-32768,-32768,
-32768,    30,   931,  1122,  1125,  1126,   138,-32768,-32768,   140,
-32768,   926,   141,-32768,   928,  1127,   933,  1131,-32768,  1140,
  1144,  1147,-32768,   570,  1150,   945,  2434,   335,  2434,  2434,
  2434,  1154,  2523,-32768,  1155,  1156,-32768,  3061,-32768,    35,
    77,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  3091,-32768,   139,-32768,  1158,  1159,  1163,-32768,   356,-32768,
-32768,   956,  1164,   370,-32768,   374,  2508,  1167,-32768,-32768,
  1197,-32768,   378,-32768,-32768,  1168,   479,   486,   490,  1170,
    30,-32768,-32768,-32768,-32768,  1171,   496,   623,-32768,  1172,
   508,-32768,-32768,  1173,   514,  1177,-32768,-32768,   352,-32768,
   964,-32768,-32768,-32768,   974,   977,    30,   458,-32768,   504,
   515,   522,-32768,  1589,  1589,  1182,   188,  2508,  2508,  1589,
  2508,  1184,-32768,-32768,-32768,  2508,  2508,  1185,   950,-32768,
-32768,  2508,-32768,   547,-32768,-32768,   171,-32768,  1186,-32768,
-32768,   983,   525,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  3868,   994,   187,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   999,-32768,  1007,  1038,-32768,-32768,  1240,
  1197,  1197,  1197,  1197,  1243,    39,  1242,  4051,  1041,  1045,
  1045,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1245,-32768,-32768,-32768,  1048,  1053,  1055,  1086,
-32768,-32768,-32768,-32768,-32768,   473,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  2508,  1042,  1087,  1089,  1096,  1101,-32768,
-32768,-32768,   460,   460,-32768,  3976,  3976,-32768,  3976,-32768,
  1244,  1244,  1244,  3976,  3976,-32768,  2434,  3976,  3976,-32768,
   182,  1049,   137,-32768,  2508,-32768,   362,   157,   274,-32768,
-32768,-32768,  1103,  1051,  1103,  1197,  1052,  1059,  1076,  1114,
  1114,  1114,  4028,-32768,-32768,-32768,-32768,-32768,     7,-32768,
  1197,  1197,  1197,  1197,  1197,  1197,  1197,  1197,  1197,  1197,
  1197,  1197,  1197,  1197,  1197,  1197,  1308,   989,-32768,  1107,
   283,   709,   371,   -29,-32768,  1237,-32768,-32768,-32768,-32768,
  1299,    68,   149,  1113,  1115,  1116,  1118,  1119,  1121,   218,
   259,   277,  1112,  1123,  1124,  1128,-32768,-32768,  1319,-32768,
-32768,    78,  2628,    30,  2434,  2434,  2434,  2434,-32768,-32768,
-32768,   560,  1327,-32768,-32768,  1330,    10,  3121,    77,    77,
    77,    77,   180,   190,    30,    30,  1129,  1331,  1332,   191,
-32768,-32768,   136,  1335,-32768,-32768,  1133,  1339,  1340,-32768,
-32768,  1141,-32768,  1143,  1546,  1353,-32768,  1162,-32768,  1157,
-32768,  1197,  4070,  4088,   925,   925,   925,   751,   751,   751,
   751,   431,   431,  1114,  1114,  1114,  1114,  1114,-32768,-32768,
  1165,  4051,   234,  2397,-32768,  1355,   105,   105,  1364,  1367,
-32768,-32768,  1368,  1371,  1374,  1174,  1176,    77,    77,-32768,
-32768,  1375,    43,    47,-32768,-32768,  1377,  1384,  1387,-32768,
-32768,  1388,  1389,   102,  1392,  1393,  1397,  1398,    77,-32768,
-32768,-32768,  1104,  2378,   835,   279,  1402,  1409,    48,   460,
  1589,   460,    53,  1412,-32768,-32768,  1395,  1413,    30,  1396,
  1420,  1425,    30,  1426,  1427,  1430,  2508,-32768,  2508,-32768,
  2508,-32768,-32768,    77,   460,  1432,  1234,  1236,-32768,  1235,
  1440,-32768,-32768,  2508,  1246,   567,   594,   600,   610,-32768,
-32768,   928,-32768,-32768,  1443,  1445,  1451,  1452,    30,  1453,
    30,  1454,  1456,  1458,  1464,  1470,  1471,    30,  1474,  1476,
  1479,  1107,-32768,  1480,  1484,-32768,  1260,-32768,  1197,  1273,
  1288,-32768,-32768,   459,-32768,-32768,  1197,  1290,   619,  1488,
  1407,  1491,  1504,   928,  1505,   142,  1305,  1510,    30,  1514,
  1517,  1518,  1553,-32768,-32768,  1554,-32768,-32768,  1555,  1556,
  1559,  1588,  1590,  1591,  1592,  1593,  1596,  1623,   928,  1627,
  1632,  1633,-32768,  1636,  1638,-32768,-32768,-32768,-32768,-32768,
-32768,    77,-32768,-32768,  1318,-32768,    77,-32768,-32768,  1442,
  1642,  1644,-32768,-32768,-32768,  1643,  1646,   928,-32768,  1647,
  1649,  1650,  1651,-32768,-32768,  1652,  1654,-32768,  1391,  1463,
-32768,  1465,  1468,  1478,  1475,  1489,  1490,  2659,    96,  2690,
   487,  2721,   424,   448,  1496,  1483,  1503,    58,    58,-32768,
  1656,  3151,  1460,  1466,  1472,  1486,  1502,-32768,-32768,-32768,
-32768,-32768,  1501,-32768,  1507,-32768,-32768,-32768,  1526,-32768,
-32768,  1527,-32768,-32768,-32768,  1674,   625,-32768,-32768,    77,
  4003,  2508,-32768,  1508,-32768,  4051,    77,-32768,-32768,  1680,
-32768,-32768,  1708,-32768,-32768,  1713,  1630,  1716,  1526,-32768,
   628,-32768,-32768,-32768,-32768,   630,-32768,   635,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1520,  1719,  1738,  1741,-32768,  1742,-32768,  1743,
  1745,   365,-32768,-32768,-32768,   637,-32768,-32768,-32768,-32768,
   659,-32768,-32768,  1746,  1759,    30,  1762,  1561,  2508,    30,
    77,  2508,  1562,    30,  2508,  2508,    30,-32768,-32768,  2508,
  1564,    30,  2508,  2508,  2508,  2508,-32768,-32768,  2508,  2508,
  1565,  2508,    30,  2508,-32768,-32768,  2508,  1763,  1567,  1568,
  2508,  2508,  1571,  2508,-32768,-32768,    30,  1774,  1777,-32768,
-32768,-32768,-32768,    12,-32768,  1576,  1589,  2434,  1577,  2434,
  2434,    30,    30,  1787,    30,-32768,-32768,-32768,  1587,-32768,
  2752,-32768,  1197,  1595,  1786,-32768,-32768,  1790,-32768,  1791,
-32768,    30,-32768,  1792,-32768,  1799,  1605,  1803,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1103,  1103,  1103,    77,
-32768,-32768,-32768,  1806,-32768,  1808,-32768,-32768,  1609,  1606,
-32768,  2783,  1614,  1612,  2814,-32768,  1817,   497,   889,  1819,
  2845,-32768,  1820,  1509,  1813,  1834,  1861,  2876,  1888,-32768,
  1909,  1821,  1936,  1985,  1822,-32768,-32768,  2006,  2027,-32768,
  2054,  1631,-32768,-32768,   235,   239,  1634,  1637,-32768,  2508,
  1640,   668,  2508,   676,   678,  1653,  1655,  1635,  1658,   360,
-32768,-32768,  4051,  1645,-32768,  1835,  1662,-32768,-32768,-32768,
  1843,  1845,-32768,-32768,-32768,  1849,  1854,  1858,  1859,-32768,
-32768,  1870,  1589,   781,  1589,  1871,  1874,    30,   917,-32768,
-32768,-32768,-32768,    30,  1238,-32768,-32768,-32768,-32768,-32768,
    30,-32768,  1303,-32768,-32768,-32768,-32768,-32768,  1349,  1512,
-32768,-32768,   682,-32768,  1875,  1877,  1515,-32768,  1878,-32768,
-32768,  3181,  1589,  1671,  3211,  1677,  1679,  1887,  1889,  1890,
  1892,  1896,  2508,  2508,  2508,  2508,  2508,-32768,-32768,  1691,
-32768,  1814,  1898,  1698,-32768,  1696,  1700,-32768,-32768,-32768,
-32768,-32768,  1712,  1796,  1709,-32768,  1718,  1710,-32768,  1715,
-32768,   247,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   460,
  1589,-32768,-32768,   607,   750,-32768,  1720,-32768,-32768,  1722,
  2434,-32768,-32768,-32768,-32768,  1926,  2081,  2102,  2129,  2150,
  2177,-32768,  1929,-32768,-32768,-32768,  1103,  1928,  1727,  2508,
  1931,    30,  2508,  1739,  2508,   385,-32768,-32768,  1944,  1954,
  1956,-32768,-32768,  1758,-32768,-32768,-32768,  2508,   684,-32768,
-32768,-32768,-32768,-32768,-32768,  1760,  1754,  1788,  1800,-32768,
-32768,  3895,-32768,  1807,  2907,-32768,  3922,  1999,  2508,    30,
  2020,    77,  2021,-32768,-32768,  2004,  2025,  2026,    77,-32768,
  2938,  1826,-32768,  2030,  2031,  2032,  1639,  2033,  1838,  2508,
  1682,  1844,  2045,  2198,  2052,  2053,  2056,  2057,-32768,-32768,
-32768,  2058,-32768,  2508,  1857,-32768,-32768,-32768,-32768,-32768,
-32768,  3949,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1862,  3241,  2508,  2029,  1714,  1891,  1750,  2072,-32768,
  2969,    77,-32768,-32768,-32768,-32768,  2508,  2073,  1789,  3000,
-32768,-32768,  2508,  1979,  3271,  2082,-32768,   928,  2094,  1897,
-32768,  2108,  2111,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -283,-32768,-32768,  -238,    72,-32768,-32768,  1274,  -389,-32768,
  -359,-32768,  -333,  -412,  -442,-32768,-32768,-32768,-32768,  -378,
-32768,  1265,-32768,  -797,-32768,  -546,-32768,-32768,-32768,-32768,
-32768,-32768,  1493,-32768,  1180,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1657,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1390,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -866,  -563,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1067,-32768,
-32768,-32768,  1066,   934,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   773,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1686,-32768,  1610,-32768,  2035,-32768,
  1687,  1942,  -268,-32768,   379,  1011,-32768,-32768,   -24,  -475,
  -526,  -103,   -16,   -86
};


#define	YYLAST		4289


static const short yytable[] = {    83,
   154,   206,   526,   456,   493,   947,   474,    86,  1010,   951,
   390,   810,   282,   435,   283,   506,  1287,   660,   661,   692,
   346,    39,   414,   668,   516,   622,     4,   520,   373,   172,
   524,   380,   381,   383,   408,     6,   857,   282,     6,   283,
   421,   705,    24,   706,   155,    -2,   858,   974,   859,     4,
   156,   977,  1018,   510,   130,   131,   132,  1024,     6,     4,
   470,   282,  1190,   283,   700,   701,   702,   703,     6,     4,
   491,     4,   887,   173,     4,    41,   151,    42,     6,   487,
     6,   199,   152,     6,   209,   210,   211,   212,   213,   214,
   215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
   225,   226,   227,   228,   199,   472,   985,  1288,   422,   484,
   565,   232,   233,   234,   235,   236,   237,   238,   239,   240,
   241,   242,   243,   244,   245,   246,   247,   200,   485,   802,
    29,   804,   633,   505,   910,   622,   622,   622,   622,   199,
   199,   775,    30,   484,   515,   434,   519,   523,  1095,   805,
   200,   156,    31,   911,  1084,   200,   707,   462,   655,   421,
    32,   316,   318,   463,   813,   814,   815,   816,   817,   818,
   819,   820,   821,   822,   823,   824,   825,   826,   827,   828,
   860,   832,   940,  1324,   776,   200,   200,   986,  1329,   200,
   421,   319,    25,    26,  1335,  1123,    27,   987,    33,   569,
   421,   421,  1343,   708,   680,    24,   312,   793,  1349,  1350,
  1153,    34,   -43,  1154,   313,    43,   811,   280,   284,   794,
   622,  1289,  1155,  1156,  1157,    40,   415,   422,   564,   259,
   160,   161,   566,   683,   174,   622,   622,   622,   622,   622,
   622,   622,   622,   622,   622,   622,   622,   622,   622,   622,
   622,   975,   622,   168,   169,   978,  1019,   -43,   422,   164,
   165,  1025,   105,   177,   178,   954,   969,   284,   422,   422,
    35,   888,   492,   181,   182,   185,   186,   398,   190,   191,
   189,   458,   451,   201,   399,   400,   401,   912,    36,   402,
   403,   332,   406,    83,   410,   333,   465,   681,    48,    49,
    50,    86,   463,   334,   345,  1158,   201,    52,    53,    37,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    76,    77,    78,   492,   622,   797,    38,   798,
   799,   201,   201,   382,  1011,   201,   492,   328,   492,   492,
   492,    87,   889,   538,  1022,   540,   541,   542,    98,   329,
   836,   323,   337,   324,   890,   837,   795,  1012,   468,   838,
   839,   840,   348,   325,   486,   -46,   663,   102,   338,   664,
   156,   156,   349,   929,   481,   915,   773,   923,   339,   340,
  -567,   105,   463,   931,   938,   617,   341,   350,   342,   103,
   251,   351,  1081,  1497,   930,   932,   933,   934,  1501,     6,
  1086,   939,   779,   780,   781,   782,   783,   784,   785,   786,
   787,   897,   354,   788,  1237,  1238,   898,   789,  1372,  1373,
  1374,  1375,  1376,  1377,  1314,   104,  1315,   335,   956,  1356,
   790,   252,   106,  1359,   957,  1357,   852,   107,   853,  1357,
  1478,  1444,  1479,  1536,   355,   854,  1538,  1445,   108,  1239,
   665,   356,   899,  1480,    25,    26,  1085,   900,    27,   359,
  1240,   109,   581,   622,   110,  1481,  1549,   742,   111,  1058,
   901,   622,   153,   800,   360,   902,   196,  1013,  1014,    79,
  1482,  1170,   841,   330,    80,   166,   167,    81,    44,    45,
    46,   158,   361,  1331,  1380,   205,   100,   326,   101,   194,
  1030,   195,   230,   231,  1034,  1177,   352,   289,   231,    83,
    83,  1093,   343,   666,   667,    83,   669,    86,    86,   469,
   156,   674,   675,    86,   678,   362,   112,   679,  1171,   113,
   925,   926,   927,   928,   539,   231,  1119,  1454,  1454,   282,
  1063,   283,  1065,  1096,   941,  1178,   357,  1172,  1173,  1072,
  1483,   114,  1179,  1180,   574,   575,   115,   366,   207,  1378,
   116,   791,   117,   772,  1241,  1135,   769,   770,   577,   578,
   855,  1181,   579,   580,  1182,  1183,   623,   624,   208,   743,
  1100,   744,   745,   746,  1484,   747,   748,   749,   750,  1174,
   118,  1161,   751,   363,  1162,   752,   367,   119,   753,   971,
   972,   754,   755,  1163,  1164,   756,   120,  1165,  1166,   121,
   757,   122,   758,  1184,   123,   722,   723,   724,   725,   763,
   992,   726,   124,  1175,  1466,   368,   125,   369,  1468,   710,
   711,   712,   713,   714,   715,   716,   717,   718,   719,   759,
   126,   720,   721,   722,   723,   724,   725,  1185,   370,   726,
   778,   916,   917,   918,   919,  1045,  1303,   656,   231,  1449,
  1291,  1450,  1451,  1316,  1317,  1318,   248,   137,   138,   139,
   140,   141,   760,   142,   143,   144,   145,   626,   627,   146,
   147,   148,   149,   150,   628,   629,  1167,   151,   630,   631,
   249,   371,   127,   152,   635,   636,   996,   997,   998,   999,
  1000,  1001,  1452,   657,   231,  1532,   644,   645,   637,   638,
   639,   640,   648,   649,   658,   231,    48,    49,   129,   128,
   959,   659,   231,   574,   686,  1204,   250,   622,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,  1126,   260,  1220,   266,  1249,  1128,   920,
   231,  1253,  1224,   267,  1226,  1257,  1054,   231,  1260,   374,
   375,   376,   377,  1263,   843,   742,   844,   845,   846,   847,
   848,   849,   288,  1021,  1272,  1023,  1393,   378,  1395,   148,
   149,   150,  1244,  1055,   231,   151,   290,  1246,  1282,  1056,
   231,   152,  1449,   291,  1450,  1451,  1453,   317,  1046,  1057,
   231,   322,     4,  1296,  1297,   365,  1299,     5,  1088,   231,
  1412,     6,   641,  1207,  1208,   384,  1417,  1221,  1222,  1223,
   156,  1209,   385,  1308,  1225,   156,  1243,   156,  1214,   996,
   997,   998,   999,  1000,  1001,  1452,    83,   146,   147,   148,
   149,   150,     7,   386,    86,   151,   387,     8,  1245,   156,
   388,   152,  1038,  1469,  1040,   391,  1042,  1364,   231,   392,
     9,   393,    10,   397,  1448,  1366,   231,  1367,   231,  1052,
  1406,  1407,    11,  1492,   231,  1332,    12,   743,   395,   744,
   745,   746,   404,   747,   748,   749,   750,    13,   961,   962,
   751,   416,  1254,   752,   411,   412,   753,    79,   850,   754,
   755,   742,    80,   756,    14,    81,   417,   418,   757,   420,
   758,   672,   673,   467,   996,   997,   998,   999,  1000,  1001,
  1007,   419,   425,   720,   721,   722,   723,   724,   725,  1398,
   426,   726,    48,    49,   129,  1400,   427,   759,    15,  1456,
    16,   428,  1402,   429,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,    76,    77,    78,   432,
  1394,    48,    49,   583,   430,    17,    18,   431,   433,   436,
   437,  1319,   440,    54,    55,    56,    57,    58,   584,   585,
   586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
   596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
   606,   607,   608,   743,   438,   744,   745,   746,   439,   747,
   748,   749,   750,   443,  1008,   441,   751,   444,   445,   752,
   446,   448,   753,   449,  1494,   754,   755,  1211,   450,   756,
   452,   453,   454,  1474,   757,   455,   758,   457,   459,   137,
   138,   139,   140,   141,   460,   142,   143,   144,   145,   461,
   466,   146,   147,   148,   149,   150,   471,   475,   609,   151,
   480,   490,   488,   759,  1292,   152,  1294,  1295,   495,   497,
   163,  1505,   498,   171,   176,   180,   184,   188,   499,   193,
   511,   716,   717,   718,   719,  1559,   502,   720,   721,   722,
   723,   724,   725,   504,  1252,   726,  1399,  1255,   512,   513,
  1258,  1259,   514,   527,   522,  1261,   280,   530,  1264,  1265,
  1266,  1267,   528,    79,  1268,  1269,   532,  1271,    80,  1273,
   533,    81,  1274,   534,   536,   537,  1278,  1279,   677,  1281,
   543,   561,   409,   562,   570,   571,   994,   572,   995,   254,
   576,   582,    83,   652,   625,   610,   632,   634,   643,   647,
    86,   611,   612,   650,   653,   654,   662,   613,   670,   676,
   614,   685,   684,   830,   831,   615,   616,   617,   691,    48,
    49,   583,   693,   996,   997,   998,   999,  1000,  1001,  1002,
   695,    54,    55,    56,    57,    58,   584,   585,   586,   587,
   588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
   598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
   608,   696,   742,  1507,   699,   704,   709,   727,   728,   771,
  1512,   735,   764,   774,   803,   806,   737,    48,    49,   407,
    51,   738,   807,   739,   808,  1362,    52,    53,  1365,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,    77,    78,   740,   765,   609,   766,    83,   862,
    83,   863,   864,  1548,   767,   200,    86,   742,    86,   768,
   829,   617,   865,  1003,   726,   834,   891,  1459,   892,   893,
   903,   894,   895,  1447,   896,   909,   904,   905,   866,   867,
   868,   906,    83,   921,   922,   936,   937,   935,    83,   942,
    86,   943,   869,   944,   945,   946,    86,   948,  1427,  1428,
  1429,  1430,  1431,   742,   743,   950,   744,   745,   746,   960,
   747,   748,   749,   750,   877,   952,   953,   751,   775,   955,
   752,   964,   965,   753,   878,   966,   754,   755,   967,   973,
   756,   980,   968,   610,   969,   757,    83,   758,   981,   611,
   612,   982,   983,   984,    86,   613,   988,   989,   614,   990,
   991,  1028,  1031,   615,   616,   617,  1016,   879,   880,   881,
   882,   883,   884,  1017,   759,  1472,  1027,  1029,  1475,   743,
  1477,   744,   745,   746,  1032,   747,   748,   749,   750,  1033,
  1035,  1036,   751,  1491,  1037,   752,  1047,  1048,   753,  1049,
   870,   754,   755,  1050,  1051,   756,   871,  1401,    79,  1059,
   757,  1060,   758,    80,  1504,  1053,    81,  1061,  1062,  1064,
  1066,   201,  1067,    82,  1068,   743,  1069,   744,   745,   746,
  1080,   747,   748,   749,   750,  1522,  1070,  1071,   751,   759,
  1073,   752,  1074,  1082,   753,  1075,  1078,   754,   755,  1533,
  1079,   756,  1083,  1087,  1089,  1090,   757,  1091,   758,   269,
   270,   271,   272,   273,   274,   275,   276,   277,   885,  1541,
  1092,  1094,  1403,  1097,  1099,  1337,   742,    48,    49,    50,
  1102,  1127,  1550,  1103,  1104,   759,    52,    53,  1555,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    76,    77,    78,    48,    49,    50,    51,  1404,  1105,
  1107,  1109,  1110,    52,    53,  1111,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,    48,    49,    50,  1112,  1144,  1113,  1114,  1115,  1116,
    52,    53,  1117,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    77,    78,   743,  1118,
   744,   745,   746,  1120,   747,   748,   749,   750,  1121,  1122,
  1124,   751,  1125,   742,   752,  1129,  1130,   753,  1131,  1133,
   754,   755,  1134,  1137,   756,  1138,  1139,  1140,  1142,   757,
  1143,   758,  1195,   142,   143,   144,   145,  1145,  1197,   146,
   147,   148,   149,   150,  1198,  1146,  1410,   151,  1147,  1411,
  1206,  1199,  1148,   152,  1215,  1149,   742,  1188,   759,   137,
   138,   139,   140,   141,  1200,   142,   143,   144,   145,  1150,
  1151,   146,   147,   148,   149,   150,  1187,  1189,    79,   151,
  1201,  1202,  1212,    80,  1216,   152,    81,  1203,   742,  1217,
  1218,  1405,  1219,    82,  1228,  1229,   710,   711,   712,   713,
   714,   715,   716,   717,   718,   719,   156,  1205,   720,   721,
   722,   723,   724,   725,  1230,    79,   726,  1231,  1233,  1235,
    80,  1236,  1247,    81,   742,   743,   949,   744,   745,   746,
    82,   747,   748,   749,   750,  1248,  1250,  1275,   751,  1251,
  1256,   752,  1262,  1270,   753,  1276,  1277,   754,   755,  1280,
  1283,   756,    79,  1284,  1290,  1293,   757,    80,   758,  1298,
    81,  1301,  1305,   742,  1306,  1307,  1309,    82,   743,  1304,
   744,   745,   746,  1310,   747,   748,   749,   750,  1311,  1313,
  1320,   751,  1321,  1322,   752,   759,  1323,   753,  1326,  1338,
   754,   755,  1327,  1330,   756,  1333,  1336,  1345,  1348,   757,
   743,   758,   744,   745,   746,  1355,   747,   748,   749,   750,
  1339,  1382,  1360,   751,  1370,  1361,   752,  1384,  1519,   753,
  1363,  1385,   754,   755,  1381,  1388,   756,  1368,   759,  1369,
  1389,   757,  1371,   758,  1390,  1391,   743,  1340,   744,   745,
   746,  1383,   747,   748,   749,   750,  1392,  1396,  1397,   751,
  1418,  1408,   752,  1409,  1413,   753,  1420,  1421,   754,   755,
   759,  1523,   756,  1422,  1342,  1423,  1424,   757,  1425,   758,
  1426,  1432,  1435,  1433,  1434,   743,  1436,   744,   745,   746,
  1437,   747,   748,   749,   750,  1344,  1438,  1439,   751,  1440,
  1442,   752,  1441,  1543,   753,  1443,   759,   754,   755,  1457,
  1458,   756,  1460,  1467,  1470,  1471,   757,  1473,   758,   139,
   140,   141,  1346,   142,   143,   144,   145,  1476,  1486,   146,
   147,   148,   149,   150,    48,    49,   129,   151,  1487,  1545,
  1488,  1490,   492,   152,  1493,   759,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
    78,  1347,  1495,   137,   138,   139,   140,   141,  1552,   142,
   143,   144,   145,  1503,  1496,   146,   147,   148,   149,   150,
  1509,  1499,  1351,   151,   137,   138,   139,   140,   141,   152,
   142,   143,   144,   145,  1506,  1508,   146,   147,   148,   149,
   150,  1510,  1511,  1352,   151,  1515,  1516,  1517,  1518,  1520,
   152,   137,   138,   139,   140,   141,  1521,   142,   143,   144,
   145,  1525,  1524,   146,   147,   148,   149,   150,  1527,  1528,
  1354,   151,  1529,  1530,  1531,  1534,  1539,   152,   137,   138,
   139,   140,   141,  1542,   142,   143,   144,   145,  1546,  1551,
   146,   147,   148,   149,   150,  1556,  1558,  1461,   151,   137,
   138,   139,   140,   141,   152,   142,   143,   144,   145,  1544,
  1560,   146,   147,   148,   149,   150,  1561,  1563,  1462,   151,
  1564,   970,   963,   730,  1193,   152,   137,   138,   139,   140,
   141,  1076,   142,   143,   144,   145,  1286,   874,   146,   147,
   148,   149,   150,  1415,   531,  1463,   151,   198,   651,   279,
   535,     0,   152,     0,   573,    79,     0,     0,     0,     0,
    80,     0,     0,    81,     0,     0,  1464,     0,   409,     0,
     0,     0,     0,     0,     0,   137,   138,   139,   140,   141,
     0,   142,   143,   144,   145,     0,     0,   146,   147,   148,
   149,   150,     0,  1465,     0,   151,   137,   138,   139,   140,
   141,   152,   142,   143,   144,   145,     0,     0,   146,   147,
   148,   149,   150,     0,  1526,     0,   151,   137,   138,   139,
   140,   141,   152,   142,   143,   144,   145,     0,     0,   146,
   147,   148,   149,   150,     0,     0,     0,   151,     0,     0,
     0,     0,     0,   152,   137,   138,   139,   140,   141,     0,
   142,   143,   144,   145,     0,     0,   146,   147,   148,   149,
   150,     0,     0,     0,   151,     0,     0,     0,     0,     0,
   152,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,   137,   138,   139,   140,   141,   152,   142,   143,
   144,   145,     0,     0,   146,   147,   148,   149,   150,     0,
     0,     0,   151,     0,     0,     0,     0,     0,   152,   137,
   138,   139,   140,   141,     0,   142,   143,   144,   145,     0,
     0,   146,   147,   148,   149,   150,     0,     0,     0,   151,
   137,   138,   139,   140,   141,   152,   142,   143,   144,   145,
     0,     0,   146,   147,   148,   149,   150,     0,     0,     0,
   151,     0,     0,     0,     0,     0,   152,   137,   138,   139,
   140,   141,     0,   142,   143,   144,   145,     0,     0,   146,
   147,   148,   149,   150,   136,     0,     0,   151,   137,   138,
   139,   140,   141,   152,   142,   143,   144,   145,     0,     0,
   146,   147,   148,   149,   150,   314,     0,     0,   151,    48,
    49,    50,     0,     0,   152,     0,     0,     0,    52,    53,
     0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,    77,    78,    48,    49,    50,     0,
   994,     0,   995,     0,     0,    52,    53,   958,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,    77,    78,    48,    49,   129,   405,   996,   997,   998,
   999,  1000,  1001,  1002,     0,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
    48,    49,   129,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,    77,    78,   137,   138,   139,
   140,   141,   315,   142,   143,   144,   145,     0,     0,   146,
   147,   148,   149,   150,     0,     0,     0,   151,   137,   138,
   139,   140,   141,   152,   142,   143,   144,   145,     0,   544,
   146,   147,   148,   149,   150,     0,     0,  1006,   151,     0,
    79,     0,     0,     0,   152,    80,     0,     0,    81,   137,
   138,   139,   140,   141,     0,   142,   143,   144,   145,     0,
     0,   146,   147,   148,   149,   150,     0,     0,     0,   151,
     0,     0,     0,     0,     0,   152,     0,    79,     0,   302,
     0,     0,    80,   545,     0,    81,   137,   138,   139,   140,
   141,     0,   142,   143,   144,   145,     0,     0,   146,   147,
   148,   149,   150,     0,     0,     0,   151,     0,     0,     0,
     0,     0,   152,     0,    79,     0,   309,     0,     0,    80,
     0,     0,    81,   546,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   547,   548,   549,   550,   551,   552,
   553,   554,   555,   556,   557,   558,   559,   560,     0,     0,
     0,    79,     0,     0,     0,     0,    80,   140,   141,    81,
   142,   143,   144,   145,     0,     0,   146,   147,   148,   149,
   150,     0,     0,     0,   151,   137,   138,   139,   140,   141,
   152,   142,   143,   144,   145,     0,     0,   146,   147,   148,
   149,   150,     0,     0,     0,   151,   137,   138,   139,   140,
   141,   152,   142,   143,   144,   145,     0,     0,   146,   147,
   148,   149,   150,     0,     0,     0,   151,     0,     0,     0,
     0,     0,   152,     0,     0,     0,   310,   137,   138,   139,
   140,   141,     0,   142,   143,   144,   145,     0,     0,   146,
   147,   148,   149,   150,     0,     0,     0,   151,     0,     0,
     0,     0,     0,   152,     0,     0,     0,   311,   137,   138,
   139,   140,   141,     0,   142,   143,   144,   145,     0,     0,
   146,   147,   148,   149,   150,     0,     0,     0,   151,     0,
     0,     0,     0,     0,   152,     0,     0,     0,   914,   137,
   138,   139,   140,   141,     0,   142,   143,   144,   145,     0,
     0,   146,   147,   148,   149,   150,     0,     0,     0,   151,
     0,     0,     0,     0,     0,   152,     0,     0,     0,  1152,
   137,   138,   139,   140,   141,     0,   142,   143,   144,   145,
     0,     0,   146,   147,   148,   149,   150,     0,     0,     0,
   151,     0,     0,     0,     0,     0,   152,     0,     0,     0,
  1160,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
     0,  1169,   137,   138,   139,   140,   141,     0,   142,   143,
   144,   145,     0,     0,   146,   147,   148,   149,   150,     0,
     0,     0,   151,     0,     0,     0,     0,     0,   152,     0,
     0,     0,  1302,   137,   138,   139,   140,   141,     0,   142,
   143,   144,   145,     0,     0,   146,   147,   148,   149,   150,
     0,     0,     0,   151,     0,     0,     0,     0,     0,   152,
     0,     0,     0,  1325,   137,   138,   139,   140,   141,     0,
   142,   143,   144,   145,     0,     0,   146,   147,   148,   149,
   150,     0,     0,     0,   151,     0,     0,     0,     0,     0,
   152,     0,     0,     0,  1328,   137,   138,   139,   140,   141,
     0,   142,   143,   144,   145,     0,     0,   146,   147,   148,
   149,   150,     0,     0,     0,   151,     0,     0,     0,     0,
     0,   152,     0,     0,     0,  1334,   137,   138,   139,   140,
   141,     0,   142,   143,   144,   145,     0,     0,   146,   147,
   148,   149,   150,     0,     0,     0,   151,     0,     0,     0,
     0,     0,   152,     0,     0,     0,  1341,   137,   138,   139,
   140,   141,     0,   142,   143,   144,   145,     0,     0,   146,
   147,   148,   149,   150,     0,     0,     0,   151,     0,     0,
     0,     0,     0,   152,     0,     0,     0,  1500,   137,   138,
   139,   140,   141,     0,   142,   143,   144,   145,     0,     0,
   146,   147,   148,   149,   150,     0,     0,     0,   151,     0,
     0,     0,     0,     0,   152,     0,     0,     0,  1514,   137,
   138,   139,   140,   141,     0,   142,   143,   144,   145,     0,
     0,   146,   147,   148,   149,   150,     0,     0,     0,   151,
     0,     0,     0,     0,     0,   152,     0,     0,     0,  1547,
   137,   138,   139,   140,   141,     0,   142,   143,   144,   145,
     0,     0,   146,   147,   148,   149,   150,     0,     0,     0,
   151,     0,     0,     0,     0,     0,   152,     0,     0,     0,
  1553,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
   482,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
   563,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
   568,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
   924,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
  1196,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
  1416,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
  1419,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
  1540,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,     0,     0,   152,     0,     0,
  1557,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,   229,     0,     0,     0,   152,   137,   138,
   139,   140,   141,     0,   142,   143,   144,   145,     0,     0,
   146,   147,   148,   149,   150,     0,     0,     0,   151,     0,
     0,     0,   292,     0,   152,   137,   138,   139,   140,   141,
     0,   142,   143,   144,   145,     0,     0,   146,   147,   148,
   149,   150,     0,     0,     0,   151,     0,     0,     0,   293,
     0,   152,   137,   138,   139,   140,   141,     0,   142,   143,
   144,   145,     0,     0,   146,   147,   148,   149,   150,     0,
     0,     0,   151,     0,     0,     0,   294,     0,   152,   137,
   138,   139,   140,   141,     0,   142,   143,   144,   145,     0,
     0,   146,   147,   148,   149,   150,     0,     0,     0,   151,
     0,     0,     0,   295,     0,   152,   137,   138,   139,   140,
   141,     0,   142,   143,   144,   145,     0,     0,   146,   147,
   148,   149,   150,     0,     0,     0,   151,     0,     0,     0,
   296,     0,   152,   137,   138,   139,   140,   141,     0,   142,
   143,   144,   145,     0,     0,   146,   147,   148,   149,   150,
     0,     0,     0,   151,     0,     0,     0,   297,     0,   152,
   137,   138,   139,   140,   141,     0,   142,   143,   144,   145,
     0,     0,   146,   147,   148,   149,   150,     0,     0,     0,
   151,     0,     0,     0,   298,     0,   152,   137,   138,   139,
   140,   141,     0,   142,   143,   144,   145,     0,     0,   146,
   147,   148,   149,   150,     0,     0,     0,   151,     0,     0,
     0,   299,     0,   152,   137,   138,   139,   140,   141,     0,
   142,   143,   144,   145,     0,     0,   146,   147,   148,   149,
   150,     0,     0,     0,   151,     0,     0,     0,   300,     0,
   152,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,   301,     0,   152,   137,   138,
   139,   140,   141,     0,   142,   143,   144,   145,     0,     0,
   146,   147,   148,   149,   150,     0,     0,     0,   151,     0,
     0,     0,   303,     0,   152,   137,   138,   139,   140,   141,
     0,   142,   143,   144,   145,     0,     0,   146,   147,   148,
   149,   150,     0,     0,     0,   151,     0,     0,     0,   304,
     0,   152,   137,   138,   139,   140,   141,     0,   142,   143,
   144,   145,     0,     0,   146,   147,   148,   149,   150,     0,
     0,     0,   151,     0,     0,     0,   305,     0,   152,   137,
   138,   139,   140,   141,     0,   142,   143,   144,   145,     0,
     0,   146,   147,   148,   149,   150,     0,     0,     0,   151,
     0,     0,     0,   306,     0,   152,   137,   138,   139,   140,
   141,     0,   142,   143,   144,   145,     0,     0,   146,   147,
   148,   149,   150,     0,     0,     0,   151,     0,     0,     0,
   307,     0,   152,   137,   138,   139,   140,   141,     0,   142,
   143,   144,   145,     0,     0,   146,   147,   148,   149,   150,
     0,     0,     0,   151,     0,     0,     0,   308,     0,   152,
   137,   138,   139,   140,   141,     0,   142,   143,   144,   145,
     0,     0,   146,   147,   148,   149,   150,     0,     0,     0,
   151,     0,     0,     0,   476,     0,   152,   137,   138,   139,
   140,   141,     0,   142,   143,   144,   145,     0,     0,   146,
   147,   148,   149,   150,     0,     0,     0,   151,     0,     0,
     0,   477,     0,   152,   137,   138,   139,   140,   141,     0,
   142,   143,   144,   145,     0,     0,   146,   147,   148,   149,
   150,     0,     0,     0,   151,     0,     0,     0,   478,     0,
   152,   137,   138,   139,   140,   141,     0,   142,   143,   144,
   145,     0,     0,   146,   147,   148,   149,   150,     0,     0,
     0,   151,     0,     0,     0,   479,     0,   152,   137,   138,
   139,   140,   141,     0,   142,   143,   144,   145,     0,     0,
   146,   147,   148,   149,   150,     0,     0,     0,   151,     0,
     0,     0,   690,     0,   152,   137,   138,   139,   140,   141,
     0,   142,   143,   144,   145,     0,     0,   146,   147,   148,
   149,   150,     0,     0,     0,   151,     0,     0,     0,  1498,
     0,   152,   137,   138,   139,   140,   141,     0,   142,   143,
   144,   145,     0,     0,   146,   147,   148,   149,   150,     0,
     0,     0,   151,     0,     0,     0,  1502,     0,   152,   137,
   138,   139,   140,   141,     0,   142,   143,   144,   145,     0,
     0,   146,   147,   148,   149,   150,     0,     0,     0,   151,
     0,     0,     0,  1537,     0,   152,   137,   138,   139,   140,
   141,     0,   142,   143,   144,   145,     0,     0,   146,   147,
   148,   149,   150,     0,     0,     0,   151,     0,     0,     0,
     0,     0,   152,   710,   711,   712,   713,   714,   715,   716,
   717,   718,   719,     0,     0,   720,   721,   722,   723,   724,
   725,     0,     0,   726,     0,     0,     0,  1210,   710,   711,
   712,   713,   714,   715,   716,   717,   718,   719,     0,     0,
   720,   721,   722,   723,   724,   725,     0,     0,   726,     0,
   809,   710,   711,   712,   713,   714,   715,   716,   717,   718,
   719,     0,     0,   720,   721,   722,   723,   724,   725,     0,
     0,   726,   712,   713,   714,   715,   716,   717,   718,   719,
     0,     0,   720,   721,   722,   723,   724,   725,     0,     0,
   726,   713,   714,   715,   716,   717,   718,   719,     0,     0,
   720,   721,   722,   723,   724,   725,     0,     0,   726
};

static const short yycheck[] = {    24,
    87,   105,   445,   382,   417,   803,   396,    24,   875,   807,
   279,     5,     3,   347,     5,   428,     5,   544,   545,   583,
   259,     5,     5,   550,   437,   501,     5,   440,   267,     5,
   443,   270,   271,   272,   318,    14,    66,     3,    14,     5,
    11,     3,   180,     5,   205,     0,    76,     5,    78,     5,
   211,     5,     5,   432,    79,    80,    81,     5,    14,     5,
   394,     3,     5,     5,   611,   612,   613,   614,    14,     5,
     7,     5,     5,    49,     5,     5,   201,     7,    14,   413,
    14,     5,   207,    14,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
   125,   126,   127,   128,     5,    47,     5,    96,    79,     5,
   470,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   146,   147,   148,   149,   150,   151,    51,   412,   693,
   204,   695,   511,     7,    57,   611,   612,   613,   614,     5,
     5,     5,   209,     5,     7,   205,     7,     7,     7,   696,
    51,   211,   209,    76,   952,    51,   118,   205,   537,    11,
   209,   248,   180,   211,   711,   712,   713,   714,   715,   716,
   717,   718,   719,   720,   721,   722,   723,   724,   725,   726,
   210,   728,    47,  1251,    48,    51,    51,    86,  1256,    51,
    11,   209,     5,     6,  1262,   993,     9,    96,   209,   483,
    11,    11,  1270,   165,   564,   180,   231,    51,  1276,  1277,
   115,   209,   204,   118,   231,     7,   210,   209,   209,    63,
   696,   210,   127,   128,   129,   209,   209,    79,   194,   204,
   209,   210,   471,   567,   210,   711,   712,   713,   714,   715,
   716,   717,   718,   719,   720,   721,   722,   723,   724,   725,
   726,   209,   728,   209,   210,   209,   209,   204,    79,   209,
   210,   209,   209,   209,   210,   812,   209,   209,    79,    79,
   209,   204,   209,   209,   210,   209,   210,   302,   209,   210,
     5,   385,   369,   207,   309,   310,   311,   210,   209,   314,
   315,    64,   317,   318,   319,    68,   205,   566,     3,     4,
     5,   318,   211,    76,   205,   210,   207,    12,    13,   209,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,   209,   812,    64,   209,    66,
    67,   207,   207,   209,    66,   207,   209,    64,   209,   209,
   209,   204,   204,   457,   881,   459,   460,   461,   145,    76,
    78,    64,    50,    66,   743,    83,   210,    89,   393,    87,
    88,    89,    66,    76,   205,   205,   189,   204,    66,   192,
   211,   211,    76,   204,   409,   764,   205,   777,    76,    77,
   204,   209,   211,   204,   204,   209,    84,    91,    86,   204,
     5,    95,   949,  1471,   783,   784,   785,   786,  1476,    14,
   957,   790,    51,    52,    53,    54,    55,    56,    57,    58,
    59,   204,    76,    62,    60,    61,   209,    66,    69,    70,
    71,    72,    73,    74,  1232,   204,  1234,   210,   205,   205,
    79,    46,     7,   205,   211,   211,    76,   204,    78,   211,
    66,   205,    68,  1521,   108,    85,  1524,   211,   204,    95,
   547,   115,   204,    79,     5,     6,     8,   209,     9,    76,
   106,   204,   497,   949,   204,    91,  1544,     5,   204,   922,
   204,   957,     7,   210,    91,   209,     5,   209,   210,   194,
   106,    68,   210,   210,   199,   209,   210,   202,   147,   148,
   149,   210,   109,     7,  1302,   210,     5,   210,     7,     5,
   889,     7,   210,   211,   893,    68,   210,   210,   211,   544,
   545,   964,   210,   548,   549,   550,   551,   544,   545,   210,
   211,   556,   557,   550,   559,   142,   204,   562,   115,   204,
   779,   780,   781,   782,   210,   211,   989,  1414,  1415,     3,
   929,     5,   931,   966,   793,   108,   210,   134,   135,   938,
   176,   204,   115,   116,   209,   210,   204,    76,     5,   210,
   204,   210,   204,   677,   210,  1018,   663,   664,   209,   210,
   210,   134,   209,   210,   137,   138,   209,   210,     5,   117,
   969,   119,   120,   121,   210,   123,   124,   125,   126,   176,
   204,   115,   130,   210,   118,   133,   115,   204,   136,   848,
   849,   139,   140,   127,   128,   143,   204,   131,   132,   204,
   148,   204,   150,   176,   204,   195,   196,   197,   198,   654,
   869,   201,   204,   210,  1432,   144,   204,   146,  1436,   181,
   182,   183,   184,   185,   186,   187,   188,   189,   190,   177,
   204,   193,   194,   195,   196,   197,   198,   210,   167,   201,
   685,   765,   766,   767,   768,   904,  1213,   210,   211,    63,
  1197,    65,    66,  1237,  1238,  1239,   211,   181,   182,   183,
   184,   185,   210,   187,   188,   189,   190,   209,   210,   193,
   194,   195,   196,   197,   209,   210,   210,   201,   209,   210,
     7,   210,   204,   207,   209,   210,   100,   101,   102,   103,
   104,   105,   106,   210,   211,  1513,   209,   210,    96,    97,
    98,    99,   209,   210,   210,   211,     3,     4,     5,   204,
   834,   210,   211,   209,   210,  1069,     5,  1213,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,  1002,   204,  1099,     7,  1146,  1007,   210,
   211,  1150,  1106,   204,  1108,  1154,   210,   211,  1157,   193,
   194,   195,   196,  1162,    76,     5,    78,    79,    80,    81,
    82,    83,   204,   880,  1173,   882,  1323,   211,  1325,   195,
   196,   197,  1136,   210,   211,   201,   205,  1141,  1187,   210,
   211,   207,    63,   211,    65,    66,   210,   180,   905,   210,
   211,   204,     5,  1202,  1203,   209,  1205,    10,   210,   211,
  1357,    14,   210,   209,   210,   209,  1363,   210,   211,   210,
   211,  1080,   209,  1222,   210,   211,   210,   211,  1087,   100,
   101,   102,   103,   104,   105,   106,   881,   193,   194,   195,
   196,   197,    45,   209,   881,   201,   209,    50,   210,   211,
   209,   207,   897,  1437,   899,   210,   901,   210,   211,     8,
    63,   209,    65,     5,  1411,   210,   211,   210,   211,   914,
   209,   210,    75,   210,   211,     7,    79,   117,   211,   119,
   120,   121,   205,   123,   124,   125,   126,    90,   837,   838,
   130,     5,  1151,   133,   180,   180,   136,   194,   210,   139,
   140,     5,   199,   143,   107,   202,     5,   209,   148,   209,
   150,   553,   554,   210,   100,   101,   102,   103,   104,   105,
   106,     5,     5,   193,   194,   195,   196,   197,   198,  1328,
   209,   201,     3,     4,     5,  1334,     5,   177,   141,   210,
   143,     5,  1341,   209,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,   180,
   210,     3,     4,     5,   209,   178,   179,   209,   205,     5,
     5,  1240,     5,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,   117,   209,   119,   120,   121,   209,   123,
   124,   125,   126,     5,   210,   209,   130,   209,     5,   133,
     5,     5,   136,   209,  1467,   139,   140,  1082,     5,   143,
     5,   205,     5,  1442,   148,   161,   150,   209,   209,   181,
   182,   183,   184,   185,   209,   187,   188,   189,   190,   209,
     3,   193,   194,   195,   196,   197,   106,   205,   100,   201,
     7,     7,   209,   177,  1198,   207,  1200,  1201,     7,   204,
    90,  1480,   204,    93,    94,    95,    96,    97,     7,    99,
   180,   187,   188,   189,   190,  1558,     7,   193,   194,   195,
   196,   197,   198,     7,  1149,   201,   210,  1152,     7,     5,
  1155,  1156,     7,     7,   209,  1160,   209,     7,  1163,  1164,
  1165,  1166,   210,   194,  1169,  1170,     7,  1172,   199,  1174,
     7,   202,  1177,     7,     5,   211,  1181,  1182,   209,  1184,
     7,     7,   207,     8,     7,     7,    63,     5,    65,   159,
     7,     5,  1197,   210,     7,   187,     7,     7,     7,     7,
  1197,   193,   194,     7,   211,   209,     5,   199,     5,     5,
   202,   209,     7,   205,   206,   207,   208,   209,   205,     3,
     4,     5,   204,   100,   101,   102,   103,   104,   105,   106,
   204,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,   204,     5,  1482,     5,     3,     5,   207,   204,     6,
  1489,     7,   211,   205,   204,   204,   209,     3,     4,     5,
     6,   209,   204,   209,   189,  1290,    12,    13,  1293,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,   209,   209,   100,   209,  1323,    63,
  1325,    65,    66,  1542,   209,    51,  1323,     5,  1325,   209,
     3,   209,    76,   210,   201,   209,   204,  1421,   204,   204,
   209,   204,   204,  1410,   204,     7,   204,   204,    92,    93,
    94,   204,  1357,     7,     5,     5,     5,   209,  1363,     5,
  1357,   209,   106,     5,     5,   205,  1363,   205,  1373,  1374,
  1375,  1376,  1377,     5,   117,     3,   119,   120,   121,     5,
   123,   124,   125,   126,    66,   204,   210,   130,     5,   205,
   133,     5,     5,   136,    76,     5,   139,   140,     5,     5,
   143,     5,   209,   187,   209,   148,  1411,   150,     5,   193,
   194,     5,     5,     5,  1411,   199,     5,     5,   202,     3,
     3,     7,     7,   207,   208,   209,     5,   109,   110,   111,
   112,   113,   114,     5,   177,  1440,     5,     5,  1443,   117,
  1445,   119,   120,   121,     5,   123,   124,   125,   126,     5,
     5,     5,   130,  1458,     5,   133,     5,   204,   136,   204,
   204,   139,   140,   209,     5,   143,   210,   210,   194,     7,
   148,     7,   150,   199,  1479,   210,   202,     7,     7,     7,
     7,   207,     7,   209,     7,   117,     3,   119,   120,   121,
   211,   123,   124,   125,   126,  1500,     7,     7,   130,   177,
     7,   133,     7,   211,   136,     7,     7,   139,   140,  1514,
     7,   143,   205,   204,     7,    89,   148,     7,   150,   152,
   153,   154,   155,   156,   157,   158,   159,   160,   210,  1534,
     7,     7,   210,   209,     5,     7,     5,     3,     4,     5,
     7,   204,  1547,     7,     7,   177,    12,    13,  1553,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,     3,     4,     5,     6,   210,     7,
     7,     7,     7,    12,    13,     7,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,     3,     4,     5,     7,   205,     7,     7,     7,     7,
    12,    13,     7,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,   117,     7,
   119,   120,   121,     7,   123,   124,   125,   126,     7,     7,
     5,   130,     5,     5,   133,   204,     5,   136,     5,     7,
   139,   140,     7,     7,   143,     7,     7,     7,     7,   148,
     7,   150,     7,   187,   188,   189,   190,   205,   209,   193,
   194,   195,   196,   197,   209,   211,   162,   201,   211,   165,
     7,   210,   205,   207,     5,   211,     5,   205,   177,   181,
   182,   183,   184,   185,   209,   187,   188,   189,   190,   211,
   211,   193,   194,   195,   196,   197,   211,   205,   194,   201,
   209,   211,   205,   199,     7,   207,   202,   211,     5,     7,
    91,   210,     7,   209,   205,     7,   181,   182,   183,   184,
   185,   186,   187,   188,   189,   190,   211,   211,   193,   194,
   195,   196,   197,   198,     7,   194,   201,     7,     7,     7,
   199,     7,     7,   202,     5,   117,   211,   119,   120,   121,
   209,   123,   124,   125,   126,     7,     5,     5,   130,   209,
   209,   133,   209,   209,   136,   209,   209,   139,   140,   209,
     7,   143,   194,     7,   209,   209,   148,   199,   150,     3,
   202,   205,     7,     5,     5,     5,     5,   209,   117,   205,
   119,   120,   121,     5,   123,   124,   125,   126,   204,     7,
     5,   130,     5,   205,   133,   177,   211,   136,   205,     7,
   139,   140,   211,     7,   143,     7,     7,     7,     7,   148,
   117,   150,   119,   120,   121,   205,   123,   124,   125,   126,
     7,     7,   209,   130,   210,   209,   133,     5,   210,   136,
   211,     7,   139,   140,   210,     7,   143,   205,   177,   205,
     7,   148,   205,   150,     7,     7,   117,     7,   119,   120,
   121,   210,   123,   124,   125,   126,     7,     7,     5,   130,
   210,     7,   133,     7,     7,   136,   210,   209,   139,   140,
   177,   210,   143,     7,     7,     7,     7,   148,     7,   150,
     5,   211,   205,    90,     7,   117,   211,   119,   120,   121,
   211,   123,   124,   125,   126,     7,   205,   122,   130,   211,
   211,   133,   205,   210,   136,   211,   177,   139,   140,   210,
   209,   143,     7,     5,     7,   209,   148,     7,   150,   183,
   184,   185,     7,   187,   188,   189,   190,   209,     5,   193,
   194,   195,   196,   197,     3,     4,     5,   201,     5,   210,
     5,   204,   209,   207,   205,   177,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,     7,   205,   181,   182,   183,   184,   185,   210,   187,
   188,   189,   190,     5,   205,   193,   194,   195,   196,   197,
     7,   205,     7,   201,   181,   182,   183,   184,   185,   207,
   187,   188,   189,   190,     5,     5,   193,   194,   195,   196,
   197,     7,     7,     7,   201,   210,     7,     7,     7,     7,
   207,   181,   182,   183,   184,   185,   209,   187,   188,   189,
   190,     7,   209,   193,   194,   195,   196,   197,     7,     7,
     7,   201,     7,     7,     7,   209,   205,   207,   181,   182,
   183,   184,   185,    45,   187,   188,   189,   190,     7,     7,
   193,   194,   195,   196,   197,   107,     5,     7,   201,   181,
   182,   183,   184,   185,   207,   187,   188,   189,   190,   209,
     7,   193,   194,   195,   196,   197,   210,     0,     7,   201,
     0,   847,   839,   621,  1049,   207,   181,   182,   183,   184,
   185,   942,   187,   188,   189,   190,  1193,   738,   193,   194,
   195,   196,   197,  1361,   449,     7,   201,   103,   529,   198,
   454,    -1,   207,    -1,   488,   194,    -1,    -1,    -1,    -1,
   199,    -1,    -1,   202,    -1,    -1,     7,    -1,   207,    -1,
    -1,    -1,    -1,    -1,    -1,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,     7,    -1,   201,   181,   182,   183,   184,
   185,   207,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,     7,    -1,   201,   181,   182,   183,
   184,   185,   207,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,    -1,    -1,   207,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
   207,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,   181,   182,   183,   184,   185,   207,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
   181,   182,   183,   184,   185,   207,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,    -1,    -1,   207,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,     8,    -1,    -1,   201,   181,   182,
   183,   184,   185,   207,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,     8,    -1,    -1,   201,     3,
     4,     5,    -1,    -1,   207,    -1,    -1,    -1,    12,    13,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,     3,     4,     5,    -1,
    63,    -1,    65,    -1,    -1,    12,    13,    51,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,     3,     4,     5,     6,   100,   101,   102,
   103,   104,   105,   106,    -1,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,   181,   182,   183,
   184,   185,     8,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,   181,   182,
   183,   184,   185,   207,   187,   188,   189,   190,    -1,    57,
   193,   194,   195,   196,   197,    -1,    -1,   210,   201,    -1,
   194,    -1,    -1,    -1,   207,   199,    -1,    -1,   202,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,    -1,    -1,   207,    -1,   194,    -1,   211,
    -1,    -1,   199,   111,    -1,   202,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,   194,    -1,   211,    -1,    -1,   199,
    -1,    -1,   202,   151,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   162,   163,   164,   165,   166,   167,
   168,   169,   170,   171,   172,   173,   174,   175,    -1,    -1,
    -1,   194,    -1,    -1,    -1,    -1,   199,   184,   185,   202,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,   181,   182,   183,   184,   185,
   207,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,   181,   182,   183,   184,
   185,   207,   187,   188,   189,   190,    -1,    -1,   193,   194,
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
   210,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
   210,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
   210,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
   210,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
   210,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
   210,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
   210,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
   210,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
   210,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,   203,    -1,    -1,    -1,   207,   181,   182,
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
    -1,    -1,   207,   181,   182,   183,   184,   185,   186,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
   198,    -1,    -1,   201,    -1,    -1,    -1,   205,   181,   182,
   183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,   198,    -1,    -1,   201,    -1,
   203,   181,   182,   183,   184,   185,   186,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,   198,    -1,
    -1,   201,   183,   184,   185,   186,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,   198,    -1,    -1,
   201,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,   198,    -1,    -1,   201
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
#line 319 "GetDP.y"
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
#line 353 "GetDP.y"
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
#line 394 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 417 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 432 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 435 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 22:
#line 438 "GetDP.y"
{ Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 23:
#line 441 "GetDP.y"
{ Free(yyvsp[-3].c); Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 25:
#line 445 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 26:
#line 453 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 28:
#line 470 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 30:
#line 477 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 31:
#line 480 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 32:
#line 483 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 33:
#line 485 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 36:
#line 496 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 37:
#line 501 "GetDP.y"
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
#line 513 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 522 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 40:
#line 533 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 41:
#line 538 "GetDP.y"
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
#line 575 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 43:
#line 578 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 44:
#line 590 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 45:
#line 592 "GetDP.y"
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
#line 608 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 47:
#line 611 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 48:
#line 614 "GetDP.y"
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
#line 665 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 50:
#line 678 "GetDP.y"
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
#line 702 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 52:
#line 709 "GetDP.y"
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
#line 722 "GetDP.y"
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
#line 740 "GetDP.y"
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
#line 763 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 56:
#line 767 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 57:
#line 776 "GetDP.y"
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
case 58:
#line 790 "GetDP.y"
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
#line 824 "GetDP.y"
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
#line 837 "GetDP.y"
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
#line 861 "GetDP.y"
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
#line 871 "GetDP.y"
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
#line 893 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 67:
#line 898 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 68:
#line 899 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 69:
#line 904 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 73:
#line 923 "GetDP.y"
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
#line 943 "GetDP.y"
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
case 77:
#line 994 "GetDP.y"
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
#line 1014 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 79:
#line 1020 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 80:
#line 1026 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 81:
#line 1029 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 82:
#line 1036 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 84:
#line 1047 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 85:
#line 1050 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 86:
#line 1056 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 87:
#line 1060 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 89:
#line 1072 "GetDP.y"
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
case 90:
#line 1085 "GetDP.y"
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
case 91:
#line 1099 "GetDP.y"
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
case 92:
#line 1114 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1120 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1126 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1132 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1138 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1144 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1150 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1156 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1162 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1168 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1174 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1180 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1186 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 105:
#line 1192 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 106:
#line 1198 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 107:
#line 1204 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 108:
#line 1210 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 109:
#line 1217 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 111:
#line 1225 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 113:
#line 1238 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 114:
#line 1244 "GetDP.y"
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
case 115:
#line 1318 "GetDP.y"
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
case 116:
#line 1352 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 117:
#line 1361 "GetDP.y"
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
case 118:
#line 1373 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 119:
#line 1375 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 120:
#line 1386 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 121:
#line 1388 "GetDP.y"
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
case 122:
#line 1404 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 123:
#line 1410 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 124:
#line 1416 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 125:
#line 1418 "GetDP.y"
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
case 126:
#line 1447 "GetDP.y"
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
case 127:
#line 1471 "GetDP.y"
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
case 128:
#line 1484 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 129:
#line 1490 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 130:
#line 1497 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 131:
#line 1503 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 132:
#line 1510 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 133:
#line 1521 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 134:
#line 1522 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 135:
#line 1523 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 136:
#line 1528 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 137:
#line 1529 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 138:
#line 1535 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 139:
#line 1538 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 140:
#line 1541 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 141:
#line 1557 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 142:
#line 1562 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 143:
#line 1569 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 145:
#line 1578 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 146:
#line 1583 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 147:
#line 1590 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 148:
#line 1593 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 149:
#line 1600 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 151:
#line 1610 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 152:
#line 1613 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 153:
#line 1616 "GetDP.y"
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
case 154:
#line 1654 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 155:
#line 1660 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 156:
#line 1667 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 158:
#line 1680 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 159:
#line 1687 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 160:
#line 1690 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 161:
#line 1697 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 162:
#line 1700 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 163:
#line 1707 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 165:
#line 1719 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 166:
#line 1729 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 167:
#line 1739 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 168:
#line 1746 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 169:
#line 1749 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 170:
#line 1756 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 172:
#line 1772 "GetDP.y"
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
case 173:
#line 1826 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 174:
#line 1829 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 175:
#line 1832 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 176:
#line 1835 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 177:
#line 1838 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 178:
#line 1849 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 180:
#line 1859 "GetDP.y"
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
case 182:
#line 1884 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 184:
#line 1898 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 185:
#line 1904 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 186:
#line 1911 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 187:
#line 1920 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 188:
#line 1923 "GetDP.y"
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
case 189:
#line 1945 "GetDP.y"
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
case 190:
#line 1960 "GetDP.y"
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
case 191:
#line 1984 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 193:
#line 1998 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 194:
#line 2008 "GetDP.y"
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
case 195:
#line 2032 "GetDP.y"
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
case 196:
#line 2057 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 197:
#line 2062 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 198:
#line 2070 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 199:
#line 2078 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 200:
#line 2088 "GetDP.y"
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
case 201:
#line 2105 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 202:
#line 2113 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 203:
#line 2120 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 204:
#line 2127 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 205:
#line 2136 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 206:
#line 2145 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 207:
#line 2154 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 208:
#line 2175 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 210:
#line 2186 "GetDP.y"
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
case 212:
#line 2213 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 214:
#line 2226 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 215:
#line 2232 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 216:
#line 2239 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 217:
#line 2248 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 218:
#line 2251 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 219:
#line 2254 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 220:
#line 2257 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 221:
#line 2264 "GetDP.y"
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
case 222:
#line 2280 "GetDP.y"
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
case 223:
#line 2329 "GetDP.y"
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
case 225:
#line 2349 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 226:
#line 2352 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 227:
#line 2357 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 228:
#line 2362 "GetDP.y"
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
case 229:
#line 2376 "GetDP.y"
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
case 230:
#line 2396 "GetDP.y"
{ BasisFunction_S.SubFunction =
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(BasisFunction_S.SubFunction, &j) ;
      }
    ;
    break;}
case 231:
#line 2405 "GetDP.y"
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
case 232:
#line 2429 "GetDP.y"
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
case 234:
#line 2489 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 235:
#line 2492 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 236:
#line 2501 "GetDP.y"
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
case 237:
#line 2567 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 238:
#line 2571 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 239:
#line 2578 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 241:
#line 2587 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 242:
#line 2592 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 243:
#line 2595 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 244:
#line 2602 "GetDP.y"
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
case 245:
#line 2618 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 246:
#line 2624 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 247:
#line 2627 "GetDP.y"
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
case 248:
#line 2646 "GetDP.y"
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
case 249:
#line 2658 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 250:
#line 2664 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 251:
#line 2667 "GetDP.y"
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
case 252:
#line 2682 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 253:
#line 2686 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 254:
#line 2695 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 256:
#line 2706 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 257:
#line 2711 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 258:
#line 2721 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 259:
#line 2734 "GetDP.y"
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
case 260:
#line 2749 "GetDP.y"
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
case 261:
#line 2823 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 263:
#line 2839 "GetDP.y"
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
case 264:
#line 2857 "GetDP.y"
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
case 265:
#line 2871 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 266:
#line 2874 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 267:
#line 2877 "GetDP.y"
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
case 268:
#line 2923 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 270:
#line 2933 "GetDP.y"
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
case 272:
#line 2959 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 274:
#line 2971 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 275:
#line 2977 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 276:
#line 2984 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 278:
#line 2996 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 279:
#line 3002 "GetDP.y"
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
case 280:
#line 3016 "GetDP.y"
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
case 281:
#line 3034 "GetDP.y"
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
case 283:
#line 3055 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 284:
#line 3058 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 285:
#line 3062 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 286:
#line 3065 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 287:
#line 3075 "GetDP.y"
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
case 288:
#line 3114 "GetDP.y"
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
case 289:
#line 3138 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 290:
#line 3143 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 291:
#line 3149 "GetDP.y"
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
case 292:
#line 3310 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 293:
#line 3315 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 294:
#line 3324 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 295:
#line 3333 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 297:
#line 3341 "GetDP.y"
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
case 298:
#line 3381 "GetDP.y"
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
case 299:
#line 3396 "GetDP.y"
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
case 300:
#line 3424 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 301:
#line 3427 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 302:
#line 3430 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 303:
#line 3433 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 304:
#line 3440 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 306:
#line 3451 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 307:
#line 3461 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 308:
#line 3471 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 309:
#line 3485 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 311:
#line 3497 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 312:
#line 3499 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 313:
#line 3501 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 314:
#line 3503 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 315:
#line 3511 "GetDP.y"
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
case 317:
#line 3533 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 318:
#line 3541 "GetDP.y"
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
case 319:
#line 3603 "GetDP.y"
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
case 320:
#line 3649 "GetDP.y"
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
case 321:
#line 3673 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 322:
#line 3682 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 323:
#line 3696 "GetDP.y"
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
case 325:
#line 3725 "GetDP.y"
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
case 326:
#line 3749 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 327:
#line 3757 "GetDP.y"
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
case 328:
#line 3812 "GetDP.y"
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
case 329:
#line 3829 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 330:
#line 3830 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 331:
#line 3831 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 332:
#line 3832 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 333:
#line 3833 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 334:
#line 3834 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 335:
#line 3835 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 336:
#line 3842 "GetDP.y"
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
case 337:
#line 3863 "GetDP.y"
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
case 338:
#line 3887 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 340:
#line 3897 "GetDP.y"
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
case 342:
#line 3922 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 344:
#line 3934 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 345:
#line 3941 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 346:
#line 3948 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 347:
#line 3951 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 348:
#line 3953 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 349:
#line 3959 "GetDP.y"
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
case 350:
#line 3974 "GetDP.y"
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
case 351:
#line 3993 "GetDP.y"
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
case 353:
#line 4012 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 354:
#line 4015 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 355:
#line 4024 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 356:
#line 4027 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 357:
#line 4032 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 358:
#line 4037 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 359:
#line 4042 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 360:
#line 4047 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 361:
#line 4056 "GetDP.y"
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
case 362:
#line 4093 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 363:
#line 4100 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 364:
#line 4103 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 365:
#line 4115 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 366:
#line 4125 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 367:
#line 4131 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 368:
#line 4134 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 369:
#line 4146 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 370:
#line 4154 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 371:
#line 4165 "GetDP.y"
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
case 372:
#line 4182 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 373:
#line 4189 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 374:
#line 4195 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 375:
#line 4201 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 376:
#line 4207 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 377:
#line 4215 "GetDP.y"
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
case 378:
#line 4232 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 379:
#line 4239 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 380:
#line 4245 "GetDP.y"
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
case 381:
#line 4256 "GetDP.y"
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
case 382:
#line 4267 "GetDP.y"
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
case 383:
#line 4279 "GetDP.y"
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
case 384:
#line 4291 "GetDP.y"
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
case 385:
#line 4311 "GetDP.y"
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
case 386:
#line 4328 "GetDP.y"
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
case 387:
#line 4351 "GetDP.y"
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
case 388:
#line 4364 "GetDP.y"
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
case 389:
#line 4378 "GetDP.y"
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
case 390:
#line 4391 "GetDP.y"
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
case 391:
#line 4403 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 393:
#line 4412 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 395:
#line 4421 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 396:
#line 4431 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 397:
#line 4441 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 398:
#line 4452 "GetDP.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 399:
#line 4461 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 400:
#line 4471 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 402:
#line 4481 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 403:
#line 4484 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 404:
#line 4494 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 405:
#line 4510 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 407:
#line 4526 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 408:
#line 4530 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 409:
#line 4534 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 410:
#line 4538 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 411:
#line 4543 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 412:
#line 4554 "GetDP.y"
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
case 414:
#line 4571 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 415:
#line 4575 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 416:
#line 4579 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 417:
#line 4583 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 418:
#line 4587 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 419:
#line 4592 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 420:
#line 4603 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 422:
#line 4618 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 423:
#line 4622 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 424:
#line 4626 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 425:
#line 4630 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 426:
#line 4634 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 427:
#line 4645 "GetDP.y"
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
case 429:
#line 4663 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 430:
#line 4667 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 431:
#line 4671 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 432:
#line 4675 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 433:
#line 4680 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 434:
#line 4690 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 435:
#line 4696 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 436:
#line 4702 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 437:
#line 4712 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 438:
#line 4715 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 439:
#line 4720 "GetDP.y"
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
case 441:
#line 4738 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 442:
#line 4748 "GetDP.y"
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
case 443:
#line 4777 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 444:
#line 4780 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 445:
#line 4783 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 446:
#line 4791 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 447:
#line 4808 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 449:
#line 4820 "GetDP.y"
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
case 451:
#line 4843 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 453:
#line 4857 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 454:
#line 4864 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 455:
#line 4872 "GetDP.y"
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
case 456:
#line 4918 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 457:
#line 4923 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 458:
#line 4929 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 459:
#line 4932 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 460:
#line 4937 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 462:
#line 4948 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 463:
#line 4951 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 464:
#line 4957 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 465:
#line 4962 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 466:
#line 4968 "GetDP.y"
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
case 467:
#line 4982 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 469:
#line 4996 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 470:
#line 5003 "GetDP.y"
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
case 471:
#line 5031 "GetDP.y"
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
case 472:
#line 5041 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 473:
#line 5042 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 474:
#line 5048 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 475:
#line 5057 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 476:
#line 5074 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 478:
#line 5086 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 480:
#line 5093 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 482:
#line 5105 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 483:
#line 5112 "GetDP.y"
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
case 484:
#line 5124 "GetDP.y"
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
case 485:
#line 5135 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 486:
#line 5140 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 487:
#line 5146 "GetDP.y"
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
case 488:
#line 5163 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 489:
#line 5173 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 490:
#line 5176 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 491:
#line 5180 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 492:
#line 5191 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 493:
#line 5195 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 494:
#line 5199 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 495:
#line 5204 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 496:
#line 5212 "GetDP.y"
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
case 497:
#line 5224 "GetDP.y"
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
case 498:
#line 5247 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 499:
#line 5248 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 500:
#line 5249 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 501:
#line 5250 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 502:
#line 5256 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 503:
#line 5258 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 504:
#line 5264 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 505:
#line 5270 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 506:
#line 5277 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 507:
#line 5286 "GetDP.y"
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
case 508:
#line 5308 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 509:
#line 5316 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_PARAM ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[0] = yyvsp[-10].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[1] = yyvsp[-8].i ;
      PostSubOperation_S.Case.OnParamGrid.ExpressionIndex[2] = yyvsp[-6].i ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[0] = yyvsp[-3].l ;
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] = yyvsp[-1].l ;
    ;
    break;}
case 510:
#line 5326 "GetDP.y"
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
case 511:
#line 5340 "GetDP.y"
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
case 512:
#line 5361 "GetDP.y"
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
case 513:
#line 5388 "GetDP.y"
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
case 514:
#line 5419 "GetDP.y"
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
case 515:
#line 5439 "GetDP.y"
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
case 517:
#line 5461 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 518:
#line 5468 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 519:
#line 5475 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 520:
#line 5482 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 521:
#line 5486 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 522:
#line 5490 "GetDP.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 523:
#line 5494 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 524:
#line 5498 "GetDP.y"
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
case 525:
#line 5508 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 526:
#line 5513 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 527:
#line 5518 "GetDP.y"
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
case 528:
#line 5538 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 529:
#line 5545 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 530:
#line 5554 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(Adaption_Type);
      }
    ;
    break;}
case 531:
#line 5563 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(Sort_Type);
      }
    ;
    break;}
case 532:
#line 5572 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 533:
#line 5579 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 534:
#line 5587 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 535:
#line 5591 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 536:
#line 5600 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 537:
#line 5604 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 538:
#line 5617 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 539:
#line 5623 "GetDP.y"
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
case 540:
#line 5671 "GetDP.y"
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
case 541:
#line 5686 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 544:
#line 5699 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 545:
#line 5705 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 546:
#line 5711 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 547:
#line 5722 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 548:
#line 5723 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 549:
#line 5724 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 550:
#line 5725 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 551:
#line 5726 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 552:
#line 5727 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 553:
#line 5728 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 554:
#line 5729 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 555:
#line 5730 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 556:
#line 5731 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 557:
#line 5732 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 558:
#line 5733 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 559:
#line 5734 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 560:
#line 5735 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 561:
#line 5736 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 562:
#line 5737 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 563:
#line 5738 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 564:
#line 5739 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 565:
#line 5740 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 566:
#line 5741 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 567:
#line 5742 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 568:
#line 5745 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 569:
#line 5746 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 570:
#line 5747 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 571:
#line 5748 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 572:
#line 5749 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 573:
#line 5750 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 574:
#line 5751 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 575:
#line 5752 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 576:
#line 5753 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 577:
#line 5754 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 578:
#line 5755 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 579:
#line 5756 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 580:
#line 5757 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 581:
#line 5758 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 582:
#line 5759 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 583:
#line 5760 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 584:
#line 5761 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 585:
#line 5762 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 586:
#line 5763 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 587:
#line 5764 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 588:
#line 5765 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 589:
#line 5766 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 590:
#line 5767 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 591:
#line 5768 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 592:
#line 5769 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 593:
#line 5770 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 594:
#line 5771 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 595:
#line 5772 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 596:
#line 5773 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 597:
#line 5774 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 598:
#line 5775 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 599:
#line 5776 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 600:
#line 5777 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 601:
#line 5778 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 602:
#line 5779 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 603:
#line 5780 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 604:
#line 5781 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 605:
#line 5782 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 606:
#line 5783 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 607:
#line 5784 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 608:
#line 5789 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 609:
#line 5790 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 610:
#line 5791 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 611:
#line 5792 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 612:
#line 5793 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 613:
#line 5794 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 614:
#line 5795 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 615:
#line 5797 "GetDP.y"
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
case 616:
#line 5815 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 617:
#line 5818 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 618:
#line 5824 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 619:
#line 5827 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 620:
#line 5834 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 621:
#line 5840 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 622:
#line 5843 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 623:
#line 5846 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 624:
#line 5858 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 625:
#line 5864 "GetDP.y"
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
case 626:
#line 5875 "GetDP.y"
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
case 627:
#line 5890 "GetDP.y"
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
case 628:
#line 5912 "GetDP.y"
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
case 629:
#line 5927 "GetDP.y"
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
case 630:
#line 5968 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 631:
#line 5971 "GetDP.y"
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
case 632:
#line 5986 "GetDP.y"
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
#line 6000 "GetDP.y"



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


