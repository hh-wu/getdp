
/*  A Bison parser, made from yacc.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	tINT	258
#define	tFLOAT	259
#define	tSTRING	260
#define	tBIGSTR	261
#define	tEND	262
#define	tDOTS	263
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
#define	tCrossProduct	294
#define	tGroup	295
#define	tDefineGroup	296
#define	tAll	297
#define	tInSupport	298
#define	tDefineFunction	299
#define	tList	300
#define	tListAlt	301
#define	tConstraint	302
#define	tRegion	303
#define	tSubRegion	304
#define	tRegionRef	305
#define	tSubRegionRef	306
#define	tFilter	307
#define	tCoefficient	308
#define	tValue	309
#define	tTimeFunction	310
#define	tBranch	311
#define	tNode	312
#define	tLoop	313
#define	tNameOfResolution	314
#define	tJacobian	315
#define	tCase	316
#define	tIntegration	317
#define	tType	318
#define	tSubType	319
#define	tCriterion	320
#define	tGeoElement	321
#define	tNumberOfPoints	322
#define	tMaxNumberOfPoints	323
#define	tNumberOfDivisions	324
#define	tMaxNumberOfDivisions	325
#define	tStoppingCriterion	326
#define	tFunctionSpace	327
#define	tName	328
#define	tBasisFunction	329
#define	tNameOfCoef	330
#define	tFunction	331
#define	tSupport	332
#define	tEntity	333
#define	tSubSpace	334
#define	tNameOfBasisFunction	335
#define	tGlobalQuantity	336
#define	tEntityType	337
#define	tEntitySubType	338
#define	tNameOfConstraint	339
#define	tFormulation	340
#define	tQuantity	341
#define	tNameOfSpace	342
#define	tIndexOfSystem	343
#define	tSymmetry	344
#define	tEquation	345
#define	tGalerkin	346
#define	tdeRham	347
#define	tGlobalTerm	348
#define	tGlobalEquation	349
#define	tDt	350
#define	tDtDof	351
#define	tDtDt	352
#define	tDtDtDof	353
#define	tJacNL	354
#define	tNeverDt	355
#define	tIn	356
#define	tResolution	357
#define	tDefineSystem	358
#define	tNameOfFormulation	359
#define	tNameOfMesh	360
#define	tFrequency	361
#define	tSolver	362
#define	tOriginSystem	363
#define	tDestinationSystem	364
#define	tOperation	365
#define	tOperationEnd	366
#define	tSetTime	367
#define	tDTime	368
#define	tSetFrequency	369
#define	tFourierTransform	370
#define	tIf	371
#define	tElse	372
#define	tLanczos	373
#define	tUpdate	374
#define	tTimeLoopTheta	375
#define	tTime0	376
#define	tTimeMax	377
#define	tTheta	378
#define	tTimeLoopNewmark	379
#define	tBeta	380
#define	tGamma	381
#define	tIterativeLoop	382
#define	tNbrMaxIteration	383
#define	tRelaxationFactor	384
#define	tIterativeTimeReduction	385
#define	tDivisionCoefficient	386
#define	tChangeOfState	387
#define	tChangeOfCoordinates	388
#define	tPostProcessing	389
#define	tNameOfSystem	390
#define	tPostOperation	391
#define	tNameOfPostProcessing	392
#define	tUsingPost	393
#define	tAppend	394
#define	tPlot	395
#define	tPrint	396
#define	tWrite	397
#define	tOnRegion	398
#define	tOnGrid	399
#define	tOnCut	400
#define	tOnPoint	401
#define	tOnLine	402
#define	tOnPlane	403
#define	tOnBox	404
#define	tWithArgument	405
#define	tFile	406
#define	tDepth	407
#define	tDimension	408
#define	tTimeStep	409
#define	tHarmonicToTime	410
#define	tFormat	411
#define	tHeader	412
#define	tFooter	413
#define	tSkin	414
#define	tSmoothing	415
#define	tFlag	416
#define	tExit	417
#define	tBreak	418
#define	tHelp	419
#define	tCpu	420
#define	tDEF	421
#define	tAND	422
#define	tOR	423
#define	tNOTEQUAL	424
#define	tEQUAL	425
#define	tAPPROXEQUAL	426
#define	tLESSOREQUAL	427
#define	tGREATEROREQUAL	428
#define	tLESSLESS	429
#define	tGREATERGREATER	430
#define	tCROSSPRODUCT	431
#define	UNARYPREC	432

#line 1 "yacc.y"


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
#if !defined MSDOS && !defined __cplusplus
#include <alloca.h> 
#endif

#include "Data_Passive.h"
#include "Data_Active.h"
#include "Data_DefineE.h"

#include "ualloc.h"
#include "outil.h"

#include "Init_Problem.h"
#include "BF_Function.h"
#include "Quadrature.h"
#include "Cal_Value.h"

#include "Constant.h"

char  tmp[256] ;


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
void Pos_InteractiveHelp(void);

char  *strsave(char *string) ;
void  yyerror(char *s) ;
void  vyyerror(char *fmt, ...) ;
int   yylex();

extern FILE            *yyin ;
extern long int         yylinenum ;
extern char             yyname[256], yyincludename[256] ;
extern int              yycolnum, yyincludenum ;
extern char            *yytext ;

extern int                     ErrorLevel, InteractiveLevel ;
extern struct Problem          Problem_S ;
extern struct PostProcessing   PostProcessing_S ;
extern struct PostSubOperation InteractivePostSubOperation_S ;
extern int                     InteractiveCompute, InteractiveExit ;

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

struct PostQuantity             PostQuantity_S ;
struct PostQuantityTerm           PostQuantityTerm_S ;

struct PostOperation          PostOperation_S ;
struct PostSubOperation         PostSubOperation_S ;

#line 180 "yacc.y"
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



#define	YYFINAL		1517
#define	YYFLAG		-32768
#define	YYNTBASE	198

#define YYTRANSLATE(x) ((unsigned)(x) <= 432 ? yytranslate[x] : 379)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   186,     2,   188,   189,   183,     2,     2,   195,
   196,   181,   179,   194,   180,   197,   182,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   173,
     2,   174,   167,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   192,     2,   193,   187,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   190,     2,   191,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
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
   166,   168,   169,   170,   171,   172,   175,   176,   177,   178,
   184,   185
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    75,    78,    79,    82,    83,    84,    88,    93,    99,
   100,   107,   113,   115,   116,   117,   125,   128,   130,   133,
   135,   137,   139,   141,   142,   146,   151,   153,   155,   159,
   160,   164,   169,   171,   175,   182,   184,   189,   193,   194,
   198,   205,   206,   208,   213,   214,   217,   221,   222,   225,
   231,   238,   246,   248,   249,   253,   258,   263,   264,   267,
   268,   271,   273,   274,   275,   283,   287,   291,   298,   302,
   306,   310,   314,   318,   322,   326,   330,   334,   338,   342,
   346,   350,   354,   357,   360,   363,   367,   369,   373,   376,
   378,   381,   382,   388,   395,   396,   404,   411,   414,   417,
   420,   423,   427,   430,   434,   437,   441,   443,   447,   448,
   452,   459,   466,   467,   472,   473,   476,   480,   485,   486,
   491,   492,   495,   499,   503,   508,   509,   514,   515,   518,
   522,   526,   531,   532,   537,   538,   541,   545,   549,   554,
   555,   560,   561,   564,   568,   572,   576,   580,   584,   588,
   589,   592,   596,   598,   599,   602,   606,   611,   615,   620,
   626,   627,   632,   633,   636,   640,   644,   648,   652,   656,
   660,   668,   672,   676,   680,   684,   688,   696,   704,   712,
   713,   716,   720,   722,   723,   726,   730,   735,   739,   744,
   749,   754,   759,   760,   765,   766,   769,   773,   777,   782,
   787,   791,   795,   796,   797,   798,   817,   818,   823,   824,
   827,   831,   835,   837,   841,   842,   846,   847,   852,   853,
   856,   860,   864,   868,   869,   874,   875,   878,   882,   888,
   892,   896,   901,   902,   905,   909,   911,   912,   915,   919,
   924,   928,   933,   938,   939,   944,   945,   948,   952,   956,
   960,   964,   965,   972,   976,   977,   983,   987,   991,   995,
   999,  1000,  1004,  1005,  1008,  1013,  1018,  1023,  1028,  1029,
  1032,  1036,  1040,  1044,  1045,  1048,  1052,  1056,  1060,  1064,
  1065,  1068,  1069,  1070,  1080,  1084,  1088,  1092,  1093,  1096,
  1100,  1101,  1102,  1112,  1113,  1115,  1117,  1119,  1121,  1123,
  1125,  1130,  1134,  1135,  1138,  1142,  1144,  1145,  1148,  1152,
  1157,  1162,  1163,  1169,  1170,  1175,  1176,  1179,  1183,  1187,
  1191,  1195,  1199,  1203,  1207,  1211,  1214,  1218,  1219,  1223,
  1225,  1229,  1230,  1234,  1235,  1238,  1242,  1246,  1251,  1256,
  1261,  1266,  1272,  1278,  1281,  1289,  1301,  1309,  1317,  1327,
  1339,  1353,  1369,  1370,  1378,  1379,  1387,  1395,  1397,  1399,
  1400,  1403,  1407,  1411,  1414,  1415,  1418,  1422,  1426,  1430,
  1434,  1439,  1440,  1443,  1447,  1451,  1455,  1459,  1463,  1468,
  1469,  1472,  1476,  1480,  1484,  1488,  1493,  1494,  1497,  1501,
  1505,  1509,  1513,  1517,  1522,  1527,  1532,  1533,  1538,  1539,
  1542,  1546,  1550,  1554,  1558,  1562,  1566,  1567,  1570,  1574,
  1576,  1577,  1580,  1584,  1589,  1594,  1598,  1603,  1604,  1609,
  1610,  1613,  1617,  1621,  1626,  1627,  1633,  1639,  1640,  1643,
  1644,  1651,  1655,  1656,  1661,  1665,  1669,  1670,  1673,  1677,
  1679,  1680,  1683,  1687,  1691,  1695,  1699,  1704,  1705,  1714,
  1715,  1716,  1720,  1728,  1737,  1756,  1759,  1764,  1766,  1768,
  1770,  1772,  1775,  1800,  1803,  1804,  1819,  1828,  1849,  1879,
  1918,  1919,  1922,  1926,  1931,  1936,  1940,  1943,  1947,  1951,
  1955,  1959,  1963,  1967,  1971,  1975,  1976,  1979,  1980,  1984,
  1986,  1990,  1991,  1993,  1997,  1999,  2001,  2005,  2009,  2013,
  2020,  2025,  2030,  2037,  2047,  2053,  2054,  2058,  2064,  2070,
  2072,  2074,  2076,  2078,  2080,  2082,  2084,  2086,  2088,  2090,
  2092,  2094,  2096,  2098,  2100,  2102,  2104,  2106,  2108,  2110,
  2112,  2114,  2118,  2121,  2124,  2128,  2132,  2136,  2140,  2144,
  2148,  2152,  2156,  2160,  2164,  2168,  2172,  2176,  2180,  2185,
  2190,  2195,  2200,  2205,  2210,  2215,  2220,  2225,  2230,  2237,
  2242,  2247,  2252,  2257,  2262,  2267,  2274,  2281,  2288,  2294,
  2297,  2299,  2301,  2303,  2305,  2307,  2309,  2311,  2313,  2315
};

static const short yyrhs[] = {    -1,
   199,   200,     0,     0,     0,   200,   201,   202,     0,    40,
   190,   205,   191,     0,    76,   190,   225,   191,     0,    47,
   190,   256,   191,     0,    60,   190,   241,   191,     0,    62,
   190,   247,   191,     0,    72,   190,   263,   191,     0,    85,
   190,   284,   191,     0,   102,   190,   310,   191,     0,   134,
   190,   340,   191,     0,   136,   190,   352,   191,     0,   356,
     0,   373,     0,     9,   378,     0,   203,     0,   162,     7,
     0,   164,     7,     0,   165,     7,     0,     0,   204,   360,
     0,     0,     0,   205,   206,   207,     0,     5,   166,   209,
     7,     0,     5,   224,   166,   209,     7,     0,     0,     5,
   222,   166,   208,   209,     7,     0,    41,   192,   220,   193,
     7,     0,   373,     0,     0,     0,   213,   192,   210,   214,
   211,   215,   193,     0,   188,   217,     0,   209,     0,     5,
   223,     0,    48,     0,     5,     0,   217,     0,    42,     0,
     0,   221,   216,   217,     0,   221,    43,     5,   223,     0,
     5,     0,   219,     0,   190,   218,   191,     0,     0,   218,
   221,   219,     0,   218,   221,   180,   219,     0,     3,     0,
     3,     8,     3,     0,     3,     8,   192,   376,   193,     3,
     0,     5,     0,     5,   190,   376,   191,     0,     5,   190,
   191,     0,     0,   220,   221,     5,     0,   220,   221,     5,
   190,   376,   191,     0,     0,   194,     0,   190,   188,   376,
   191,     0,     0,   190,   191,     0,   190,   376,   191,     0,
     0,   225,   226,     0,    44,   192,   227,   193,     7,     0,
     5,   192,   193,   166,   228,     7,     0,     5,   192,   212,
   193,   166,   228,     7,     0,   373,     0,     0,   227,   221,
     5,     0,    10,   192,   376,   193,     0,    76,   192,     5,
   193,     0,     0,   229,   230,     0,     0,   231,   232,     0,
   235,     0,     0,     0,   232,   167,   233,   232,     8,   234,
   232,     0,   232,   181,   232,     0,   232,   184,   232,     0,
    39,   192,   232,   194,   232,   193,     0,   232,   182,   232,
     0,   232,   179,   232,     0,   232,   180,   232,     0,   232,
   183,   232,     0,   232,   187,   232,     0,   232,   173,   232,
     0,   232,   174,   232,     0,   232,   175,   232,     0,   232,
   176,   232,     0,   232,   171,   232,     0,   232,   170,   232,
     0,   232,   172,   232,     0,   232,   168,   232,     0,   232,
   169,   232,     0,   180,   232,     0,   179,   232,     0,   186,
   232,     0,   195,   232,   196,     0,   377,     0,   375,   238,
   240,     0,     5,   309,     0,   309,     0,   309,   238,     0,
     0,    95,   236,   192,   230,   193,     0,    37,   192,   190,
     5,   191,   193,     0,     0,    38,   237,   192,   230,   194,
   212,   193,     0,   173,     5,   174,   192,   230,   193,     0,
   189,     5,     0,   189,   154,     0,   189,   113,     0,   189,
     3,     0,   235,   188,     3,     0,   188,     3,     0,   192,
   197,   193,     0,   192,   193,     0,   192,   239,   193,     0,
   232,     0,   239,   194,   232,     0,     0,   190,   371,   191,
     0,   190,    48,   192,   212,   193,   191,     0,   190,    45,
   192,     5,   193,   191,     0,     0,   241,   190,   242,   191,
     0,     0,   242,   243,     0,    73,     5,     7,     0,    61,
   190,   244,   191,     0,     0,   244,   190,   245,   191,     0,
     0,   245,   246,     0,    48,   212,     7,     0,    48,    42,
     7,     0,    60,     5,   240,     7,     0,     0,   247,   190,
   248,   191,     0,     0,   248,   249,     0,    73,     5,     7,
     0,    65,   228,     7,     0,    61,   190,   250,   191,     0,
     0,   250,   190,   251,   191,     0,     0,   251,   252,     0,
    63,     5,     7,     0,    64,     5,     7,     0,    61,   190,
   253,   191,     0,     0,   253,   190,   254,   191,     0,     0,
   254,   255,     0,    66,     5,     7,     0,    67,   376,     7,
     0,    68,   376,     7,     0,    69,   376,     7,     0,    70,
   376,     7,     0,    71,   376,     7,     0,     0,   256,   257,
     0,   190,   258,   191,     0,   373,     0,     0,   258,   259,
     0,    73,     5,     7,     0,    73,     5,   222,     7,     0,
    63,     5,     7,     0,    61,   190,   260,   191,     0,    61,
     5,   190,   260,   191,     0,     0,   260,   190,   261,   191,
     0,     0,   261,   262,     0,    63,     5,     7,     0,    48,
   212,     7,     0,    49,   212,     7,     0,    55,   228,     7,
     0,    54,   228,     7,     0,    59,     5,     7,     0,    56,
   190,     3,   221,     3,   191,     7,     0,    50,   212,     7,
     0,    51,   212,     7,     0,    76,   228,     7,     0,    53,
   228,     7,     0,    52,   228,     7,     0,    76,   192,   228,
   194,   228,   193,     7,     0,    53,   192,   228,   194,   228,
   193,     7,     0,    52,   192,   228,   194,   228,   193,     7,
     0,     0,   263,   264,     0,   190,   265,   191,     0,   373,
     0,     0,   265,   266,     0,    73,     5,     7,     0,    73,
     5,   222,     7,     0,    63,     5,     7,     0,    74,   190,
   267,   191,     0,    79,   190,   273,   191,     0,    81,   190,
   278,   191,     0,    47,   190,   281,   191,     0,     0,   267,
   190,   268,   191,     0,     0,   268,   269,     0,    73,     5,
     7,     0,    75,     5,     7,     0,    75,     5,   222,     7,
     0,    76,     5,   270,     7,     0,    77,   212,     7,     0,
    78,   212,     7,     0,     0,     0,     0,   190,    86,     5,
     7,    85,     5,   222,     7,   271,    40,   212,     7,   272,
   102,     5,   223,     7,   191,     0,     0,   273,   190,   274,
   191,     0,     0,   274,   275,     0,    73,     5,     7,     0,
    80,   276,     7,     0,     5,     0,   190,   277,   191,     0,
     0,   277,   221,     5,     0,     0,   278,   190,   279,   191,
     0,     0,   279,   280,     0,    73,     5,     7,     0,    63,
     5,     7,     0,    75,     5,     7,     0,     0,   281,   190,
   282,   191,     0,     0,   282,   283,     0,    75,     5,     7,
     0,    78,   213,    84,     5,     7,     0,    82,   213,     7,
     0,    83,   216,     7,     0,    84,     5,   223,     7,     0,
     0,   284,   285,     0,   190,   286,   191,     0,   373,     0,
     0,   286,   287,     0,    73,     5,     7,     0,    73,     5,
   222,     7,     0,    63,     5,     7,     0,    86,   190,   288,
   191,     0,    90,   190,   294,   191,     0,     0,   288,   190,
   289,   191,     0,     0,   289,   290,     0,    73,     5,     7,
     0,    63,    81,     7,     0,    63,    91,     7,     0,    63,
     5,     7,     0,     0,    87,     5,   223,   291,   293,     7,
     0,    88,     3,     7,     0,     0,   192,   292,   230,   193,
     7,     0,   101,   212,     7,     0,    62,     5,     7,     0,
    60,     5,     7,     0,    89,     3,     7,     0,     0,   192,
     5,   193,     0,     0,   294,   295,     0,    91,   190,   300,
   191,     0,    92,   190,   300,   191,     0,    93,   190,   304,
   191,     0,    94,   190,   296,   191,     0,     0,   296,   297,
     0,    63,     5,     7,     0,    84,     5,     7,     0,   190,
   298,   191,     0,     0,   298,   299,     0,    57,   309,     7,
     0,    58,   309,     7,     0,    90,   309,     7,     0,   101,
   212,     7,     0,     0,   300,   301,     0,     0,     0,   308,
   192,   302,   230,   303,   194,   230,   193,     7,     0,   101,
   212,     7,     0,    60,     5,     7,     0,    62,     5,     7,
     0,     0,   304,   305,     0,   101,   212,     7,     0,     0,
     0,   308,   192,   306,   230,   307,   194,   309,   193,     7,
     0,     0,    95,     0,    96,     0,    97,     0,    98,     0,
    99,     0,   100,     0,   190,     5,     5,   191,     0,   190,
     5,   191,     0,     0,   310,   311,     0,   190,   312,   191,
     0,   373,     0,     0,   312,   313,     0,    73,     5,     7,
     0,    73,     5,   222,     7,     0,   103,   190,   315,   191,
     0,     0,   110,   314,   190,   322,   191,     0,     0,   315,
   190,   316,   191,     0,     0,   316,   317,     0,    73,     5,
     7,     0,    63,     5,     7,     0,   104,   318,     7,     0,
   105,   378,     7,     0,   108,   320,     7,     0,   109,     5,
     7,     0,   106,   370,     7,     0,   107,   378,     7,     0,
     5,   223,     0,   190,   319,   191,     0,     0,   319,   221,
     5,     0,     5,     0,   190,   321,   191,     0,     0,   321,
   221,     5,     0,     0,   322,   323,     0,     5,     5,     7,
     0,   112,   228,     7,     0,   120,   190,   329,   191,     0,
   124,   190,   331,   191,     0,   127,   190,   333,   191,     0,
   130,   190,   335,   191,     0,     5,   192,     5,   193,     7,
     0,   112,   192,   228,   193,     7,     0,   163,     7,     0,
   116,   192,   228,   193,   190,   322,   191,     0,   116,   192,
   228,   193,   190,   322,   191,   117,   190,   322,   191,     0,
   114,   192,     5,   194,   228,   193,     7,     0,   119,   192,
     5,   194,   228,   193,     7,     0,   115,   192,     5,   194,
     5,   194,   370,   193,     7,     0,   118,   192,     5,   194,
   376,   194,   370,   194,   376,   193,     7,     0,   120,   192,
   376,   194,   376,   194,   228,   194,   228,   193,   190,   322,
   191,     0,   124,   192,   376,   194,   376,   194,   228,   194,
   376,   194,   376,   193,   190,   322,   191,     0,     0,   141,
   324,   192,   326,   327,   193,     7,     0,     0,   142,   325,
   192,   326,   327,   193,     7,     0,   133,   192,   212,   194,
   228,   193,     7,     0,   368,     0,     5,     0,     0,   327,
   328,     0,   194,   151,   378,     0,   194,   154,   370,     0,
   194,   370,     0,     0,   329,   330,     0,   121,   376,     7,
     0,   122,   376,     7,     0,   113,   228,     7,     0,   123,
   228,     7,     0,   110,   190,   322,   191,     0,     0,   331,
   332,     0,   121,   376,     7,     0,   122,   376,     7,     0,
   113,   228,     7,     0,   125,   376,     7,     0,   126,   376,
     7,     0,   110,   190,   322,   191,     0,     0,   333,   334,
     0,   128,   376,     7,     0,   129,   228,     7,     0,    65,
   376,     7,     0,   161,   376,     7,     0,   110,   190,   322,
   191,     0,     0,   335,   336,     0,   128,   376,     7,     0,
   131,   376,     7,     0,    65,   376,     7,     0,   161,   376,
     7,     0,   103,     5,     7,     0,   132,   190,   337,   191,
     0,   110,   190,   322,   191,     0,   111,   190,   322,   191,
     0,     0,   337,   190,   338,   191,     0,     0,   338,   339,
     0,    63,     5,     7,     0,    86,     5,     7,     0,   101,
   212,     7,     0,    65,   376,     7,     0,    76,   228,     7,
     0,   161,     5,     7,     0,     0,   340,   341,     0,   190,
   342,   191,     0,   373,     0,     0,   342,   343,     0,    73,
     5,     7,     0,    73,     5,   222,     7,     0,   104,     5,
   223,     7,     0,   135,     5,     7,     0,    86,   190,   344,
   191,     0,     0,   344,   190,   345,   191,     0,     0,   345,
   346,     0,    73,     5,     7,     0,    63,     5,     7,     0,
    54,   190,   347,   191,     0,     0,   347,    91,   190,   348,
   191,     0,   347,     5,   190,   348,   191,     0,     0,   348,
   349,     0,     0,   308,   192,   350,   230,   193,     7,     0,
    63,     5,     7,     0,     0,   101,   351,   212,     7,     0,
    60,     5,     7,     0,    62,     5,     7,     0,     0,   352,
   353,     0,   190,   354,   191,     0,   373,     0,     0,   354,
   355,     0,    73,     5,     7,     0,   137,     5,     7,     0,
   156,     5,     7,     0,   139,   378,     7,     0,   110,   190,
   358,   191,     0,     0,   136,     5,   138,     5,   357,   190,
   358,   191,     0,     0,     0,   358,   359,   360,     0,   140,
   192,   361,   363,   365,   193,     7,     0,   141,   192,   361,
   143,   212,   365,   193,     7,     0,   141,   192,   361,   143,
   212,   150,     5,   190,   376,   194,   376,   191,   190,   376,
   191,   365,   193,     7,     0,     5,   194,     0,     5,   362,
     5,   194,     0,   181,     0,   182,     0,   179,     0,   180,
     0,   143,   212,     0,   145,   190,   190,   376,   194,   376,
   194,   376,   191,   190,   376,   194,   376,   194,   376,   191,
   190,   376,   194,   376,   194,   376,   191,   191,     0,   144,
   212,     0,     0,   144,   190,   228,   194,   228,   194,   228,
   191,   190,   370,   364,   194,   370,   191,     0,   146,   190,
   376,   194,   376,   194,   376,   191,     0,   147,   190,   190,
   376,   194,   376,   194,   376,   191,   190,   376,   194,   376,
   194,   376,   191,   191,   190,   376,   191,     0,   148,   190,
   190,   376,   194,   376,   194,   376,   191,   190,   376,   194,
   376,   194,   376,   191,   190,   376,   194,   376,   194,   376,
   191,   191,   190,   376,   194,   376,   191,     0,   149,   190,
   190,   376,   194,   376,   194,   376,   191,   190,   376,   194,
   376,   194,   376,   191,   190,   376,   194,   376,   194,   376,
   191,   190,   376,   194,   376,   194,   376,   191,   191,   190,
   376,   194,   376,   194,   376,   191,     0,     0,   365,   366,
     0,   194,   151,   378,     0,   194,   151,   174,   378,     0,
   194,   151,   178,   378,     0,   194,   152,   376,     0,   194,
   159,     0,   194,   160,   376,     0,   194,   155,   376,     0,
   194,   156,     5,     0,   194,   157,   367,     0,   194,   158,
   367,     0,   194,   156,   367,     0,   194,   153,   376,     0,
   194,   154,   370,     0,     0,   367,     6,     0,     0,   190,
   369,   191,     0,   228,     0,   369,   194,   228,     0,     0,
   376,     0,   190,   371,   191,     0,   376,     0,   372,     0,
   371,   194,   376,     0,   371,   194,   372,     0,   376,     8,
   376,     0,   376,     8,   192,   376,   193,   376,     0,     5,
   166,   376,     7,     0,     5,   166,     6,     7,     0,     5,
   166,   190,   371,   191,     7,     0,     5,   166,    46,   192,
     5,   194,     5,   193,     7,     0,    11,   192,   374,   193,
     7,     0,     0,   374,   221,     5,     0,   374,   221,     5,
   166,   376,     0,   374,   221,     5,   166,     6,     0,    17,
     0,    18,     0,    19,     0,    20,     0,    21,     0,    22,
     0,    23,     0,    24,     0,    25,     0,    26,     0,    27,
     0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
     0,    33,     0,    34,     0,    35,     0,    36,     0,     5,
     0,   377,     0,   195,   376,   196,     0,   180,   376,     0,
   186,   376,     0,   376,   180,   376,     0,   376,   179,   376,
     0,   376,   181,   376,     0,   376,   182,   376,     0,   376,
   183,   376,     0,   376,   187,   376,     0,   376,   173,   376,
     0,   376,   174,   376,     0,   376,   175,   376,     0,   376,
   176,   376,     0,   376,   171,   376,     0,   376,   170,   376,
     0,   376,   168,   376,     0,   376,   169,   376,     0,    17,
   192,   376,   193,     0,    18,   192,   376,   193,     0,    19,
   192,   376,   193,     0,    20,   192,   376,   193,     0,    21,
   192,   376,   193,     0,    22,   192,   376,   193,     0,    23,
   192,   376,   193,     0,    24,   192,   376,   193,     0,    25,
   192,   376,   193,     0,    26,   192,   376,   193,     0,    27,
   192,   376,   194,   376,   193,     0,    28,   192,   376,   193,
     0,    29,   192,   376,   193,     0,    30,   192,   376,   193,
     0,    31,   192,   376,   193,     0,    32,   192,   376,   193,
     0,    33,   192,   376,   193,     0,    34,   192,   376,   194,
   376,   193,     0,    35,   192,   376,   194,   376,   193,     0,
    36,   192,   376,   194,   376,   193,     0,   376,   167,   376,
     8,   376,     0,   376,   188,     0,     4,     0,     3,     0,
    12,     0,    13,     0,    14,     0,    15,     0,    16,     0,
     5,     0,     6,     0,     5,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   308,   345,   383,   386,   389,   392,   395,   396,   397,   398,
   399,   400,   401,   402,   403,   405,   407,   409,   414,   423,
   427,   440,   442,   449,   461,   464,   465,   468,   473,   476,
   478,   481,   483,   487,   495,   506,   515,   524,   531,   566,
   571,   581,   584,   598,   603,   606,   655,   667,   693,   698,
   713,   731,   752,   758,   767,   781,   815,   828,   848,   852,
   862,   879,   879,   882,   888,   891,   894,   904,   907,   910,
   914,   934,   978,   982,   985,  1002,  1011,  1018,  1021,  1027,
  1033,  1040,  1044,  1057,  1072,  1086,  1092,  1098,  1104,  1110,
  1116,  1122,  1128,  1134,  1140,  1146,  1152,  1158,  1164,  1170,
  1176,  1182,  1189,  1195,  1197,  1206,  1210,  1216,  1294,  1328,
  1338,  1351,  1353,  1364,  1373,  1375,  1404,  1428,  1439,  1445,
  1452,  1458,  1469,  1483,  1486,  1487,  1490,  1493,  1496,  1501,
  1503,  1510,  1535,  1542,  1547,  1552,  1556,  1563,  1568,  1573,
  1578,  1584,  1588,  1593,  1596,  1625,  1633,  1638,  1647,  1651,
  1660,  1663,  1668,  1673,  1678,  1686,  1690,  1701,  1710,  1715,
  1720,  1725,  1737,  1741,  1796,  1799,  1802,  1805,  1808,  1817,
  1824,  1827,  1849,  1852,  1862,  1866,  1874,  1881,  1889,  1892,
  1912,  1929,  1951,  1961,  1965,  1976,  2000,  2025,  2030,  2038,
  2046,  2056,  2072,  2079,  2085,  2091,  2099,  2107,  2115,  2133,
  2141,  2144,  2167,  2171,  2180,  2184,  2192,  2199,  2207,  2210,
  2213,  2216,  2221,  2239,  2274,  2289,  2293,  2298,  2303,  2308,
  2319,  2343,  2398,  2402,  2406,  2415,  2478,  2484,  2489,  2494,
  2498,  2505,  2510,  2528,  2533,  2537,  2554,  2560,  2567,  2574,
  2578,  2585,  2594,  2605,  2622,  2694,  2706,  2710,  2730,  2744,
  2747,  2750,  2794,  2801,  2804,  2826,  2830,  2838,  2842,  2850,
  2857,  2866,  2868,  2873,  2888,  2904,  2921,  2925,  2930,  2934,
  2937,  2946,  2985,  3009,  3014,  3020,  3170,  3175,  3184,  3193,
  3198,  3201,  3239,  3256,  3282,  3287,  3290,  3293,  3298,  3306,
  3309,  3320,  3330,  3342,  3351,  3354,  3358,  3360,  3362,  3368,
  3386,  3390,  3401,  3462,  3508,  3532,  3541,  3553,  3570,  3574,
  3608,  3617,  3671,  3687,  3690,  3691,  3692,  3693,  3694,  3695,
  3699,  3715,  3731,  3738,  3741,  3762,  3766,  3774,  3778,  3787,
  3794,  3797,  3799,  3804,  3820,  3837,  3851,  3855,  3860,  3868,
  3871,  3876,  3881,  3886,  3896,  3903,  3942,  3947,  3952,  3962,
  3974,  3978,  3983,  3994,  4003,  4010,  4030,  4037,  4043,  4049,
  4055,  4063,  4079,  4086,  4092,  4103,  4114,  4130,  4142,  4164,
  4185,  4198,  4212,  4219,  4221,  4228,  4230,  4243,  4253,  4263,
  4269,  4272,  4276,  4285,  4296,  4308,  4312,  4318,  4322,  4326,
  4331,  4340,  4353,  4357,  4363,  4367,  4371,  4375,  4380,  4389,
  4401,  4404,  4410,  4414,  4418,  4423,  4432,  4447,  4450,  4456,
  4460,  4464,  4469,  4479,  4485,  4491,  4500,  4504,  4508,  4522,
  4525,  4536,  4565,  4568,  4571,  4579,  4593,  4601,  4604,  4625,
  4628,  4639,  4642,  4650,  4658,  4704,  4709,  4714,  4718,  4722,
  4730,  4734,  4738,  4747,  4752,  4758,  4764,  4776,  4787,  4790,
  4798,  4826,  4836,  4836,  4842,  4851,  4867,  4875,  4878,  4883,
  4886,  4895,  4898,  4906,  4918,  4928,  4933,  4938,  4956,  4965,
  4969,  4974,  4982,  4989,  4998,  5021,  5033,  5054,  5057,  5058,
  5059,  5062,  5071,  5087,  5094,  5108,  5118,  5126,  5139,  5157,
  5182,  5193,  5196,  5204,  5211,  5218,  5220,  5222,  5224,  5226,
  5235,  5240,  5245,  5265,  5272,  5283,  5290,  5336,  5342,  5346,
  5351,  5356,  5359,  5360,  5364,  5369,  5378,  5381,  5390,  5398,
  5415,  5423,  5429,  5441,  5485,  5489,  5492,  5498,  5504,  5515,
  5517,  5518,  5519,  5520,  5521,  5522,  5523,  5524,  5525,  5526,
  5527,  5528,  5529,  5530,  5531,  5532,  5533,  5534,  5535,  5536,
  5538,  5540,  5541,  5542,  5543,  5544,  5545,  5546,  5547,  5548,
  5549,  5550,  5551,  5552,  5553,  5554,  5555,  5556,  5557,  5558,
  5559,  5560,  5561,  5562,  5563,  5564,  5565,  5566,  5567,  5568,
  5569,  5570,  5571,  5572,  5573,  5574,  5575,  5576,  5577,  5578,
  5581,  5584,  5585,  5586,  5587,  5588,  5589,  5590,  5607,  5612
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tInclude","tConstant","tDefineConstant",
"tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin",
"tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor",
"tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace","tCrossProduct","tGroup",
"tDefineGroup","tAll","tInSupport","tDefineFunction","tList","tListAlt","tConstraint",
"tRegion","tSubRegion","tRegionRef","tSubRegionRef","tFilter","tCoefficient",
"tValue","tTimeFunction","tBranch","tNode","tLoop","tNameOfResolution","tJacobian",
"tCase","tIntegration","tType","tSubType","tCriterion","tGeoElement","tNumberOfPoints",
"tMaxNumberOfPoints","tNumberOfDivisions","tMaxNumberOfDivisions","tStoppingCriterion",
"tFunctionSpace","tName","tBasisFunction","tNameOfCoef","tFunction","tSupport",
"tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity","tEntityType",
"tEntitySubType","tNameOfConstraint","tFormulation","tQuantity","tNameOfSpace",
"tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham","tGlobalTerm",
"tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof","tJacNL","tNeverDt","tIn",
"tResolution","tDefineSystem","tNameOfFormulation","tNameOfMesh","tFrequency",
"tSolver","tOriginSystem","tDestinationSystem","tOperation","tOperationEnd",
"tSetTime","tDTime","tSetFrequency","tFourierTransform","tIf","tElse","tLanczos",
"tUpdate","tTimeLoopTheta","tTime0","tTimeMax","tTheta","tTimeLoopNewmark","tBeta",
"tGamma","tIterativeLoop","tNbrMaxIteration","tRelaxationFactor","tIterativeTimeReduction",
"tDivisionCoefficient","tChangeOfState","tChangeOfCoordinates","tPostProcessing",
"tNameOfSystem","tPostOperation","tNameOfPostProcessing","tUsingPost","tAppend",
"tPlot","tPrint","tWrite","tOnRegion","tOnGrid","tOnCut","tOnPoint","tOnLine",
"tOnPlane","tOnBox","tWithArgument","tFile","tDepth","tDimension","tTimeStep",
"tHarmonicToTime","tFormat","tHeader","tFooter","tSkin","tSmoothing","tFlag",
"tExit","tBreak","tHelp","tCpu","tDEF","'?'","tAND","tOR","tNOTEQUAL","tEQUAL",
"tAPPROXEQUAL","'<'","'>'","tLESSOREQUAL","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER",
"'+'","'-'","'*'","'/'","'%'","tCROSSPRODUCT","UNARYPREC","'!'","'^'","'#'",
"'$'","'{'","'}'","'['","']'","','","'('","')'","'.'","Stats","@1","ProblemDefinitions",
"@2","ProblemDefinition","Interactive","@3","Groups","@4","Group","@5","ReducedGroupRHS",
"@6","@7","GroupRHS","FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion",
"SuppListTypeForGroup","ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups",
"Comma","DefineDimension","MultipleIndex","Index","Functions","Function","DefineFunctions",
"Expression","@8","WholeQuantityExpression","@9","WholeQuantity","@10","@11",
"WholeQuantity_Single","@12","@13","ArgumentsForFunction","RecursiveListOfQuantity",
"ParametersForFunction","JacobianMethods","JacobianMethod","JacobianMethodTerm",
"JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods","IntegrationMethod",
"IntegrationMethodTerm","IntegrationCases","IntegrationCase","IntegrationCaseTerm",
"QuadratureCases","QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint",
"Constraint","ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm",
"FunctionSpaces","BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions",
"BasisFunction","BasisFunctionTerm","OptionalParametersForBasisFunction","@14",
"@15","SubSpaces","SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
"GlobalQuantities","GlobalQuantity","GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS",
"ConstraintInFSTerm","Formulations","BracedFormulation","Formulation","FormulationTerm",
"DefineQuantities","DefineQuantity","DefineQuantityTerm","@16","@17","IndexInFunctionSpace",
"Equations","EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
"GlobalEquationTermTermTerm","LocalTerm","LocalTermTerm","@18","@19","GlobalTerm",
"GlobalTermTerm","@20","@21","TermOperator","Quantity_Def","Resolutions","BracedResolution",
"Resolution","ResolutionTerm","@22","DefineSystems","DefineSystem","DefineSystemTerm",
"ListOfFormulation","RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem",
"Operation","OperationTerm","@23","@24","PrintOperation","PrintOperationOptions",
"PrintOperationOption","TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark",
"TimeLoopNewmarkTerm","IterativeLoop","IterativeLoopTerm","IterativeTimeReduction",
"IterativeTimeReductionTerm","ChangeOfStates","ChangeOfState","ChangeOfStateTerm",
"PostProcessings","BracedPostProcessing","PostProcessing","PostProcessingTerm",
"PostQuantities","PostQuantity","PostQuantityTerm","SubPostQuantities","SubPostQuantity",
"SubPostQuantityTerm","@25","@26","PostOperations","BracedPostOperation","PostOperation",
"PostOperationTerm","SeparatePostOperation","@27","PostSubOperations","@28",
"PostSubOperation","PostQuantitiesToPlot","Combination","PlotSubType","@29",
"PlotOptions","PlotOption","ParsedStrings","ListOfExpression","RecursiveListOfExpression",
"ListOfDouble","RecursiveListOfDouble","DottedFExpr","Affectation","DefineConstants",
"NameForFunction","FExpr","OneFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   199,   198,   200,   201,   200,   202,   202,   202,   202,   202,
   202,   202,   202,   202,   202,   202,   202,   202,   202,   203,
   203,   203,   204,   203,   205,   206,   205,   207,   207,   208,
   207,   207,   207,   210,   211,   209,   209,   212,   212,   213,
   213,   214,   214,   215,   215,   215,   216,   217,   217,   218,
   218,   218,   219,   219,   219,   219,   219,   219,   220,   220,
   220,   221,   221,   222,   223,   223,   224,   225,   225,   226,
   226,   226,   226,   227,   227,   228,   228,   229,   228,   231,
   230,   232,   233,   234,   232,   232,   232,   232,   232,   232,
   232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
   232,   232,   232,   232,   232,   235,   235,   235,   235,   235,
   235,   236,   235,   235,   237,   235,   235,   235,   235,   235,
   235,   235,   235,   238,   238,   238,   239,   239,   240,   240,
   240,   240,   241,   241,   242,   242,   243,   243,   244,   244,
   245,   245,   246,   246,   246,   247,   247,   248,   248,   249,
   249,   249,   250,   250,   251,   251,   252,   252,   252,   253,
   253,   254,   254,   255,   255,   255,   255,   255,   255,   256,
   256,   257,   257,   258,   258,   259,   259,   259,   259,   259,
   260,   260,   261,   261,   262,   262,   262,   262,   262,   262,
   262,   262,   262,   262,   262,   262,   262,   262,   262,   263,
   263,   264,   264,   265,   265,   266,   266,   266,   266,   266,
   266,   266,   267,   267,   268,   268,   269,   269,   269,   269,
   269,   269,   270,   271,   272,   270,   273,   273,   274,   274,
   275,   275,   276,   276,   277,   277,   278,   278,   279,   279,
   280,   280,   280,   281,   281,   282,   282,   283,   283,   283,
   283,   283,   284,   284,   285,   285,   286,   286,   287,   287,
   287,   287,   287,   288,   288,   289,   289,   290,   290,   290,
   290,   291,   290,   290,   292,   290,   290,   290,   290,   290,
   293,   293,   294,   294,   295,   295,   295,   295,   296,   296,
   297,   297,   297,   298,   298,   299,   299,   299,   299,   300,
   300,   302,   303,   301,   301,   301,   301,   304,   304,   305,
   306,   307,   305,   308,   308,   308,   308,   308,   308,   308,
   309,   309,   310,   310,   311,   311,   312,   312,   313,   313,
   313,   314,   313,   315,   315,   316,   316,   317,   317,   317,
   317,   317,   317,   317,   317,   318,   318,   319,   319,   320,
   320,   321,   321,   322,   322,   323,   323,   323,   323,   323,
   323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
   323,   323,   324,   323,   325,   323,   323,   326,   326,   327,
   327,   328,   328,   328,   329,   329,   330,   330,   330,   330,
   330,   331,   331,   332,   332,   332,   332,   332,   332,   333,
   333,   334,   334,   334,   334,   334,   335,   335,   336,   336,
   336,   336,   336,   336,   336,   336,   337,   337,   338,   338,
   339,   339,   339,   339,   339,   339,   340,   340,   341,   341,
   342,   342,   343,   343,   343,   343,   343,   344,   344,   345,
   345,   346,   346,   346,   347,   347,   347,   348,   348,   350,
   349,   349,   351,   349,   349,   349,   352,   352,   353,   353,
   354,   354,   355,   355,   355,   355,   355,   357,   356,   358,
   359,   358,   360,   360,   360,   361,   361,   362,   362,   362,
   362,   363,   363,   363,   364,   363,   363,   363,   363,   363,
   365,   365,   366,   366,   366,   366,   366,   366,   366,   366,
   366,   366,   366,   366,   366,   367,   367,   368,   368,   369,
   369,   370,   370,   370,   371,   371,   371,   371,   372,   372,
   373,   373,   373,   373,   373,   374,   374,   374,   374,   375,
   375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
   375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
   376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
   376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
   376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
   376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
   377,   377,   377,   377,   377,   377,   377,   377,   378,   378
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     2,     2,     0,     2,     0,     0,     3,     4,     5,     0,
     6,     5,     1,     0,     0,     7,     2,     1,     2,     1,
     1,     1,     1,     0,     3,     4,     1,     1,     3,     0,
     3,     4,     1,     3,     6,     1,     4,     3,     0,     3,
     6,     0,     1,     4,     0,     2,     3,     0,     2,     5,
     6,     7,     1,     0,     3,     4,     4,     0,     2,     0,
     2,     1,     0,     0,     7,     3,     3,     6,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     2,     2,     2,     3,     1,     3,     2,     1,
     2,     0,     5,     6,     0,     7,     6,     2,     2,     2,
     2,     3,     2,     3,     2,     3,     1,     3,     0,     3,
     6,     6,     0,     4,     0,     2,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
     4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
     2,     3,     1,     0,     2,     3,     4,     3,     4,     5,
     0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
     7,     3,     3,     3,     3,     3,     7,     7,     7,     0,
     2,     3,     1,     0,     2,     3,     4,     3,     4,     4,
     4,     4,     0,     4,     0,     2,     3,     3,     4,     4,
     3,     3,     0,     0,     0,    18,     0,     4,     0,     2,
     3,     3,     1,     3,     0,     3,     0,     4,     0,     2,
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
     4,     5,     5,     2,     7,    11,     7,     7,     9,    11,
    13,    15,     0,     7,     0,     7,     7,     1,     1,     0,
     2,     3,     3,     2,     0,     2,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     3,     4,     0,
     2,     3,     3,     3,     3,     4,     0,     2,     3,     3,
     3,     3,     3,     4,     4,     4,     0,     4,     0,     2,
     3,     3,     3,     3,     3,     3,     0,     2,     3,     1,
     0,     2,     3,     4,     4,     3,     4,     0,     4,     0,
     2,     3,     3,     4,     0,     5,     5,     0,     2,     0,
     6,     3,     0,     4,     3,     3,     0,     2,     3,     1,
     0,     2,     3,     3,     3,     3,     4,     0,     8,     0,
     0,     3,     7,     8,    18,     2,     4,     1,     1,     1,
     1,     2,    24,     2,     0,    14,     8,    20,    29,    38,
     0,     2,     3,     4,     4,     3,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     0,     2,     0,     3,     1,
     3,     0,     1,     3,     1,     1,     3,     3,     3,     6,
     4,     4,     6,     9,     5,     0,     3,     5,     5,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     3,     2,     2,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
     4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
     4,     4,     4,     4,     4,     6,     6,     6,     5,     2,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     1,
     3,     4,    23,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,     0,   600,   599,    18,   526,    25,
   170,   133,   146,   200,    68,   253,   323,   427,     0,   457,
    20,    21,    22,     0,     0,    24,   592,   591,   598,     0,
   593,   594,   595,   596,   597,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   551,    62,    26,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   522,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   553,   554,
     0,   516,   515,     0,   521,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   590,     0,    63,     0,     6,     0,   174,     8,   171,   173,
   135,     9,   148,    10,   204,    11,   201,   203,     0,     0,
     7,    69,    73,   257,    12,   254,   256,   327,    13,   324,
   326,   431,    14,   428,   430,   468,   461,    15,   458,   460,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   552,     0,   567,
   568,   566,   565,   561,   562,   563,   564,   556,   555,   557,
   558,   559,   560,   525,   527,     0,     0,    27,    33,     0,
     0,     0,     0,     0,    74,     0,     0,     0,     0,     0,
   480,   481,   478,   479,   476,     0,     0,     0,     0,     0,
     0,     0,     0,   491,     0,   569,   570,   571,   572,   573,
   574,   575,   576,   577,   578,     0,   580,   581,   582,   583,
   584,   585,     0,     0,     0,     0,   523,   518,   517,     0,
   519,     0,     0,     0,     0,     0,     0,    59,     0,     0,
     0,   172,   175,     0,     0,   134,   136,     0,    78,     0,
   147,   149,     0,     0,     0,     0,     0,     0,   202,   205,
    65,    40,     0,     0,    38,     0,     0,    62,     0,     0,
     0,     0,   255,   258,     0,     0,   332,   325,   328,     0,
     0,     0,     0,   429,   432,   470,     0,     0,     0,     0,
     0,   459,   462,     0,   482,    78,   484,     0,     0,     0,
     0,     0,     0,   491,     0,     0,     0,     0,     0,     0,
   589,   529,   528,   598,     0,     0,     0,    30,     0,    62,
     0,   181,     0,     0,   139,     0,   153,     0,     0,     0,
    80,     0,   244,     0,     0,   213,   227,   237,     0,    39,
    53,    56,    50,    37,    48,    78,     0,    34,     0,     0,
     0,     0,   264,   283,     0,   334,     0,     0,   438,    65,
     0,   471,     0,   470,     0,     0,     0,   477,     0,     0,
     0,     0,     0,     0,     0,     0,   492,     0,     0,   579,
   586,   587,   588,     0,     0,    28,     0,    67,     0,    41,
     0,     0,     0,   181,     0,   178,   176,     0,     0,     0,
   137,     0,     0,     0,   151,    79,     0,   150,     0,   208,
   206,     0,     0,     0,     0,    66,     0,     0,    62,     0,
    78,     0,    70,    75,   261,   259,     0,     0,     0,   329,
     0,     0,   354,   433,     0,     0,     0,   436,   469,     0,
   463,   471,   464,   466,   465,    78,     0,     0,     0,     0,
     0,   473,     0,     0,     0,   512,     0,   506,   506,   506,
   497,     0,     0,     0,   524,   520,    64,     0,    29,    32,
    60,     0,   183,   179,   177,   141,   138,   155,   152,     0,
     0,   598,   530,   531,   532,   533,   534,   535,   536,   537,
   538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
   548,   549,     0,   115,     0,   112,     0,     0,     0,     0,
     0,     0,     0,     0,    81,    82,   110,     0,   107,   246,
   212,   207,   215,   209,   229,   210,   239,   211,    54,     0,
    58,     0,    49,     0,    71,     0,    43,    35,    42,   260,
   266,   262,     0,     0,     0,     0,   263,   284,   330,   336,
   331,     0,   434,   440,   437,   435,   472,   467,     0,     0,
     0,     0,     0,     0,     0,     0,   493,   496,   504,     0,
   505,   513,   499,   500,   503,   501,   502,   498,     0,   474,
    31,     0,   180,     0,     0,     0,    76,    77,   109,     0,
     0,     0,     0,     0,   104,   103,   105,   123,   121,   118,
   120,   119,     0,     0,    83,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   111,   129,     0,     0,     0,     0,     0,
    57,     0,    51,    72,    62,     0,   300,   300,   308,   289,
     0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   373,   375,     0,   333,   355,     0,    78,
     0,     0,     0,     0,     0,   494,   495,     0,   507,     0,
     0,     0,     0,     0,     0,    78,    78,    78,    78,     0,
     0,     0,    78,   182,   184,     0,     0,   140,   142,     0,
     0,     0,   154,   156,     0,    80,     0,    80,     0,     0,
   322,   106,     0,   101,   102,    99,    98,   100,    94,    95,
    96,    97,    90,    91,    86,    89,    92,    87,    93,   122,
   125,     0,   127,     0,     0,   108,     0,     0,     0,     0,
     0,   245,   247,     0,     0,     0,     0,     0,   214,   216,
     0,     0,   228,   230,     0,     0,     0,   238,   240,     0,
    52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   265,   275,   267,   314,   314,   314,     0,     0,     0,
     0,     0,   512,     0,     0,     0,   335,   337,     0,     0,
    78,     0,     0,     0,    78,     0,     0,   385,     0,   392,
     0,   400,   407,     0,     0,     0,   364,     0,     0,     0,
   439,   441,     0,     0,     0,     0,     0,     0,   514,     0,
    61,     0,     0,     0,     0,    78,     0,    78,     0,     0,
     0,     0,     0,     0,    78,     0,     0,     0,   129,   160,
     0,     0,     0,     0,     0,     0,    80,   321,     0,   124,
   126,     0,     0,     0,     0,     0,     0,     0,    47,     0,
    65,     0,     0,   223,     0,     0,     0,   233,   235,     0,
     0,     0,     0,    55,    36,     0,     0,     0,     0,     0,
     0,     0,     0,    65,     0,     0,     0,    80,     0,     0,
   315,   316,   317,   318,   319,   320,     0,   285,   301,     0,
   286,     0,   287,   309,     0,     0,     0,   294,   288,   290,
     0,     0,    65,   348,     0,     0,     0,     0,   350,   352,
     0,     0,   356,     0,     0,   357,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   508,   508,
   445,     0,     0,     0,     0,   487,     0,     0,     0,     0,
   186,   187,   192,   193,     0,   196,     0,   195,   189,   188,
    62,   190,   185,     0,   194,   144,   143,     0,     0,   157,
   158,     0,     0,     0,   113,     0,    84,   128,     0,     0,
   130,   248,     0,   250,   251,     0,   217,   218,     0,     0,
     0,   221,   222,   231,    62,   232,   242,   241,   243,    65,
    45,   279,   278,   271,   269,   270,   268,   272,   274,   280,
   277,     0,     0,     0,     0,   302,     0,   311,     0,     0,
     0,   339,   338,   346,    62,   340,   341,   344,   345,    62,
   342,   343,     0,     0,    78,     0,     0,     0,    78,     0,
    78,     0,     0,    78,   358,   386,     0,     0,    78,     0,
     0,     0,     0,   359,   393,     0,     0,     0,     0,    78,
     0,   360,   401,     0,     0,     0,     0,     0,     0,     0,
     0,   361,   408,    78,   379,    78,   380,   378,   380,     0,
   443,   442,   512,     0,     0,     0,     0,     0,    78,    78,
     0,    78,   145,   162,   159,   114,     0,    88,   117,     0,
     0,     0,     0,   252,   219,     0,   220,   234,     0,    46,
   281,     0,   306,   307,   305,    80,   310,    80,   291,   292,
     0,     0,     0,     0,   293,   295,   347,     0,   351,     0,
   362,   363,     0,     0,   354,     0,     0,   354,     0,     0,
     0,     0,     0,   354,     0,     0,     0,     0,     0,     0,
     0,   354,     0,     0,     0,     0,     0,   354,   354,     0,
     0,   417,     0,     0,   510,     0,     0,     0,     0,     0,
   444,   485,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   116,    85,     0,     0,   249,     0,   236,     0,
     0,   276,   303,   312,     0,     0,     0,     0,   349,   353,
     0,   512,     0,   512,     0,     0,   389,   387,   388,   390,
    78,     0,   396,   394,   395,   397,   398,    78,   404,     0,
   402,   403,   405,   411,   413,     0,     0,   409,   410,     0,
   412,     0,   509,    78,     0,   512,   381,     0,   448,   448,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   161,   163,   132,   131,
     0,     0,   273,     0,     0,   296,   297,   298,   299,   367,
     0,   365,     0,   368,   391,     0,   399,     0,   406,   415,
   416,   419,   414,   377,   511,   374,     0,   512,   384,   376,
   314,   314,   512,     0,     0,     0,     0,   491,   199,   198,
   191,   197,     0,     0,     0,     0,     0,     0,     0,   282,
    80,     0,     0,     0,     0,    78,     0,     0,   382,   383,
     0,     0,     0,   453,   447,     0,   449,   446,     0,     0,
     0,     0,     0,     0,   164,   165,   166,   167,   168,   169,
     0,     0,     0,   369,   354,     0,     0,     0,     0,     0,
    78,     0,     0,     0,   418,   420,     0,     0,     0,     0,
   450,   486,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   455,   456,   452,     0,    80,     0,     0,     0,     0,   475,
   224,   304,   313,   366,   370,   354,     0,   421,   424,   425,
   422,   423,   426,   454,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   371,   354,
   451,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   225,   372,     0,   488,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    65,     0,     0,     0,     0,
   483,     0,     0,     0,     0,     0,   226,     0,     0,     0,
     0,     0,     0,   489,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   490,     0,     0,     0
};

static const short yydefgoto[] = {  1515,
     1,     2,     3,    20,    21,    22,    84,   146,   228,   439,
   315,   472,   685,   316,   317,   588,   802,   900,   394,   469,
   395,   370,   144,   286,   390,   287,    89,   162,   318,   380,
   381,   456,   457,   565,   753,  1140,   566,   643,   641,   674,
   774,   776,    86,   231,   297,   450,   635,   739,    87,   232,
   302,   452,   636,   744,  1009,  1222,  1298,    85,   149,   230,
   293,   445,   634,   735,    88,   157,   233,   310,   463,   677,
   790,  1031,  1450,  1478,   464,   678,   794,   910,  1035,   465,
   679,   799,   459,   676,   783,    90,   166,   236,   324,   478,
   686,   814,  1151,   928,  1231,   479,   598,   818,   950,  1061,
  1166,   815,   939,  1156,  1304,   817,   944,  1158,  1305,   940,
   567,    91,   170,   237,   329,   407,   482,   691,   828,   955,
  1065,   961,  1070,   602,   708,   845,   846,  1117,  1207,  1277,
   972,  1086,   974,  1095,   976,  1103,   977,  1113,  1270,  1358,
  1396,    92,   174,   238,   335,   486,   709,   852,  1120,  1331,
  1367,  1425,  1400,    94,   179,   240,   343,    23,   239,   412,
   490,    46,   182,   246,   254,  1281,   353,   427,   625,  1118,
  1206,   621,   121,   122,    24,    83,   568,   622,    82,    28
};

static const short yypact[] = {-32768,
-32768,    29,  2300,  -117,   219,   -93,   -66,   -32,   -13,    21,
    25,    41,    71,   140,   160,    62,   261,   308,   354,-32768,
-32768,    99,-32768,-32768,  1181,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   151,-32768,
-32768,-32768,-32768,   177,   196,-32768,-32768,-32768,-32768,   378,
-32768,-32768,-32768,-32768,-32768,   202,   235,   252,   257,   273,
   280,   306,   328,   355,   375,   381,   389,   394,   414,   422,
   431,   440,   481,   505,   509,   514,  1641,  1641,  1641,  1641,
   395,-32768,   185,   305,    23,   210,   318,    30,    51,    37,
    39,    53,   512,    55,   533,   533,-32768,  1641,  1641,  1641,
  1641,  1641,  1641,  1641,  1641,  1641,  1641,  1641,  1641,  1641,
  1641,  1641,  1641,  1641,  1641,  1641,  1641,   549,   335,   335,
   -65,-32768,  2097,  2213,-32768,  1641,  1641,  1641,  1641,  1641,
  1641,  1641,  1641,  1641,  1641,  1641,  1641,  1641,  1641,  1641,
-32768,   611,-32768,   622,-32768,   178,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -147,   518,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   141,   944,   457,  3186,  3213,  3240,  3267,  3294,  3321,  3348,
  3375,  3402,  3429,  2272,  3456,  3483,  3510,  3537,  3564,  3591,
  2301,  2323,  2345,   520,   668,  1641,  1321,-32768,  2120,  2163,
  2163,  1315,  1315,   566,   566,   566,   566,   275,   275,   335,
   335,   335,   335,-32768,   550,    20,   532,-32768,-32768,   174,
   283,   201,   344,    15,-32768,   348,   408,   343,   539,   483,
-32768,-32768,-32768,-32768,-32768,   727,   123,    46,   551,   554,
   561,   565,   569,-32768,   123,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1641,-32768,-32768,-32768,-32768,
-32768,-32768,  1641,  1641,  1641,   731,-32768,-32768,  2097,  1641,
  4411,  1641,  1505,   932,  1539,   607,   609,-32768,    63,   777,
   780,-32768,-32768,   612,   798,-32768,-32768,   614,    49,   804,
-32768,-32768,   621,   812,   813,   630,   635,   637,-32768,-32768,
    98,-32768,    22,   670,-32768,   645,   647,   319,   836,   838,
   654,   663,-32768,-32768,   843,   664,-32768,-32768,-32768,   852,
   697,   883,   886,-32768,-32768,-32768,   890,   709,   895,   219,
   896,-32768,-32768,   710,-32768,    49,-32768,   713,  1641,   716,
   717,   719,   336,   760,  3618,  3645,  3672,  3699,   720,  3726,
  4411,-32768,  4411,   722,   905,  1641,  3861,-32768,   125,   339,
   726,-32768,   910,    89,-32768,   911,-32768,   729,   730,   916,
-32768,   917,-32768,   925,    90,-32768,-32768,-32768,   742,-32768,
   931,   750,-32768,-32768,-32768,    49,   808,-32768,   936,   974,
   975,   126,-32768,-32768,   127,-32768,   791,   146,-32768,   793,
   979,   799,   982,-32768,   984,   985,   987,-32768,   801,  1641,
  2367,  1641,  1641,  1641,   989,  1104,-32768,   992,   352,-32768,
-32768,-32768,-32768,   991,  1641,-32768,  3886,-32768,   125,-32768,
   994,   995,   998,-32768,   346,-32768,-32768,   811,   999,   360,
-32768,   362,  1641,  1000,-32768,-32768,   633,-32768,   369,-32768,
-32768,  1003,   400,   406,   412,-32768,    14,  1573,    -6,  1009,
    49,    19,-32768,-32768,-32768,-32768,  1011,   426,   449,-32768,
  1012,   435,-32768,-32768,  1014,   493,  1015,-32768,-32768,    99,
-32768,   816,-32768,-32768,-32768,    49,  2389,  1641,  2411,  2433,
  2455,-32768,   113,  1641,  1641,  1607,  1641,  1019,-32768,-32768,
-32768,  1641,   835,  1021,-32768,  4411,-32768,  1022,-32768,-32768,
   842,   495,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  3753,
   841,   222,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   846,-32768,   849,-32768,  1034,   633,   633,   633,
  1040,   158,  1041,   633,  4433,   857,   855,   855,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1641,
-32768,  3911,-32768,   154,-32768,  1042,-32768,-32768,-32768,-32768,
-32768,-32768,   860,   864,   865,   866,-32768,-32768,-32768,-32768,
-32768,    60,-32768,-32768,-32768,-32768,-32768,-32768,   867,  1641,
  2477,  1641,  1641,  1641,   219,   219,-32768,  4411,  4411,  1641,
-32768,  4411,  4411,-32768,  1053,  1053,  1053,  4411,  1641,-32768,
-32768,  1641,-32768,   451,    72,   212,-32768,-32768,-32768,   870,
   871,   633,   872,   899,   888,   888,   888,-32768,-32768,-32768,
-32768,-32768,    16,  2145,-32768,   633,   633,   633,   633,   633,
   633,   633,   633,   633,   633,   633,   633,   633,   633,   633,
   633,  1067,   847,-32768,   904,   546,   393,   246,   367,  3780,
-32768,   162,-32768,-32768,   506,   388,-32768,-32768,-32768,-32768,
   658,    13,   150,   893,   908,   912,   913,   914,   249,   301,
   906,   918,   922,-32768,-32768,  1071,-32768,-32768,   304,    49,
  2499,  1641,  2521,  2543,  2565,-32768,-32768,    78,-32768,  2587,
  3936,   123,   123,   123,   123,   188,   189,    49,    49,   919,
  1075,  1110,   194,-32768,-32768,   122,  1114,-32768,-32768,   933,
  1116,  1121,-32768,-32768,  1123,-32768,  2243,-32768,   937,   939,
-32768,-32768,   633,  4451,  4451,  4466,  4466,  4466,   747,   747,
   747,   747,   789,   789,   175,   175,   175,   888,   888,-32768,
-32768,   938,  4433,   525,  1271,-32768,  1127,   118,   118,  1128,
  1129,-32768,-32768,  1135,  1140,  1147,   123,   123,-32768,-32768,
  1148,    64,-32768,-32768,  1152,  1153,  1154,-32768,-32768,  1157,
-32768,   969,   111,  1168,  1176,   186,  1177,  1213,  1217,  1221,
   123,-32768,-32768,-32768,  1324,  1643,   595,   255,  1220,  1223,
    66,   219,  1607,   219,    93,  1224,-32768,-32768,  1219,  1260,
    49,  1259,  1267,  1268,    49,  1272,  1273,-32768,  1641,-32768,
  1641,-32768,-32768,   123,  1087,  1088,-32768,  1092,  1303,  1308,
-32768,-32768,  1124,  1641,  3961,  1641,  1641,  1641,-32768,  1641,
-32768,  1307,  1310,  1311,  1313,    49,  1314,    49,  1316,  1320,
  1322,  1319,  1351,  1352,    49,  1353,  1355,  1356,   904,-32768,
  1357,  1359,  1137,  1174,   633,  1138,-32768,-32768,   996,-32768,
-32768,   633,  1178,  1182,   179,  1366,  1291,  1370,-32768,  1375,
   793,  1376,   148,  1195,  1380,  1386,  1390,-32768,-32768,  1392,
  1394,  1395,  1398,-32768,-32768,  1402,    22,  1403,  1404,  1405,
  1407,  1408,  1409,   793,  1419,  1420,  1421,-32768,  1425,  1428,
-32768,-32768,-32768,-32768,-32768,-32768,   123,-32768,-32768,  1242,
-32768,   123,-32768,-32768,  1243,  1431,  1432,-32768,-32768,-32768,
  1433,  1434,   793,-32768,  1435,  1437,  1440,  1441,-32768,-32768,
  1442,  1443,-32768,  1265,  1266,-32768,  1258,  1269,  1278,  1270,
  1275,   724,  2609,   617,  2631,   303,   920,  1279,    95,    95,
-32768,  1446,  1453,  1282,  3986,-32768,  4011,  4036,  4061,  4086,
-32768,-32768,-32768,-32768,  1283,-32768,  1285,-32768,-32768,-32768,
  1286,-32768,-32768,  1287,-32768,-32768,-32768,  1454,   578,-32768,
-32768,  1289,   123,  3165,-32768,  1293,-32768,  4433,  1457,   123,
-32768,-32768,  1460,-32768,-32768,  1469,-32768,-32768,  1477,  1406,
  1486,-32768,-32768,-32768,   193,-32768,-32768,-32768,-32768,   793,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1306,  1493,  1497,  1498,-32768,  1499,-32768,  1507,  1538,
   325,-32768,-32768,-32768,   199,-32768,-32768,-32768,-32768,   214,
-32768,-32768,  1540,  1541,    49,  1544,  1360,  1641,    49,  1391,
    49,  1641,  1641,    49,-32768,-32768,  1641,  1393,    49,  1641,
  1641,  1641,  1641,-32768,-32768,  1641,  1641,  1423,  1641,    49,
  1641,-32768,-32768,  1641,  1575,  1424,  1426,  1641,  1641,  1427,
  1641,-32768,-32768,    49,-32768,    49,-32768,-32768,-32768,    26,
-32768,-32768,  1607,  1458,  1459,  1461,  1462,  1488,    49,    49,
  1509,    49,-32768,-32768,-32768,-32768,  1389,-32768,-32768,   633,
  1422,  1489,  1577,-32768,-32768,  1613,-32768,-32768,  1645,-32768,
  1354,  1672,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1494,  1494,  1494,   123,-32768,-32768,-32768,  1678,-32768,  1682,
-32768,-32768,  1502,  1503,-32768,  2653,  1506,-32768,  1689,   968,
  1673,  1699,  2675,-32768,  1701,  1695,  1717,  1739,  1763,  2697,
  1791,-32768,  1813,  1702,  1838,  1865,  1703,-32768,-32768,  1887,
  1909,-32768,  1933,  1518,-32768,   215,   577,   584,  1522,  1523,
-32768,-32768,  1641,  1641,  1641,  1641,  1641,  1521,  1524,  1527,
  1528,   542,-32768,  4433,  1529,  1531,-32768,  1716,-32768,  1721,
  1722,-32768,-32768,-32768,  1723,  1724,  1725,  1726,-32768,-32768,
  1728,  1607,   213,  1607,  1729,   233,-32768,-32768,-32768,-32768,
    49,   593,-32768,-32768,-32768,-32768,-32768,    49,-32768,   778,
-32768,-32768,-32768,-32768,-32768,   983,  1276,-32768,-32768,   589,
-32768,  1738,-32768,    49,  1740,  1218,-32768,  1741,-32768,-32768,
  1534,  2719,  2741,  2763,  2785,  4111,  1742,  1743,  1744,  1745,
  1750,  1641,  1641,  1641,  1641,  1641,-32768,-32768,-32768,-32768,
  1686,  1570,-32768,  1579,  1580,-32768,-32768,-32768,-32768,-32768,
  1583,  1650,  1584,-32768,-32768,  1585,-32768,  1586,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   219,  1607,-32768,-32768,
   581,   698,  1607,  1641,  1641,  1641,  1641,-32768,-32768,-32768,
-32768,-32768,  1770,  1956,  1978,  2003,  2030,  2052,  1776,-32768,
-32768,  1494,  1775,  1595,  1641,    49,  1641,   639,-32768,-32768,
  1781,  1784,  1794,-32768,-32768,  1609,-32768,-32768,  1616,  2807,
  2829,  2851,  2873,   594,-32768,-32768,-32768,-32768,-32768,-32768,
  1614,  1615,  1617,-32768,-32768,  3807,  1618,  2895,  1807,  1641,
    49,  1808,   123,  1809,-32768,-32768,  1812,  1815,  1816,   123,
-32768,-32768,  1641,  1641,  1641,  1641,  1817,  1818,  1819,  1821,
  1574,  1822,  1625,  1641,  1823,  2074,  1824,  1825,  1828,  1830,
-32768,-32768,-32768,  1831,-32768,  4136,  4161,  4186,  4211,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  3834,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1623,  1660,  1666,  1661,  1668,  1833,
  1642,  1669,  1872,  1641,  1690,  1641,  1641,   123,-32768,-32768,
-32768,  2917,  1641,  2939,  2961,  1874,  1676,  1641,  4236,  1641,
  1641,-32768,-32768,  2983,-32768,  3005,  3027,  1787,  1641,  1641,
  1641,  1890,  4261,  4286,  4311,   793,  1710,  1711,  1713,  1904,
-32768,  1727,  1641,  1732,  1641,  3049,-32768,  3071,  1641,  1641,
  3093,  4336,  1641,-32768,  4361,  1733,  1735,  1641,  3115,  1641,
  3137,  1641,  4386,-32768,  1928,  1929,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -153,-32768,-32768,  -239,    11,-32768,-32768,  1132,  -457,-32768,
  -514,-32768,  -313,  -372,  -409,-32768,-32768,-32768,-32768,  -274,
-32768,  -736,-32768,  -521,-32768,-32768,-32768,-32768,-32768,  1373,
-32768,  1068,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1504,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1261,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -806,
  -528,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1152,-32768,-32768,-32768,   972,   834,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   674,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1542,
-32768,  1465,  1861,-32768,-32768,-32768,  -351,-32768,   282,-32768,
-32768,  -809,  -613,  1762,   923,-32768,-32768,   -25,  -364,  -334
};


#define	YYLAST		4653


static const short yytable[] = {    81,
   487,   449,   429,   639,   400,   416,   718,   345,   347,   884,
   945,   886,   462,   957,   589,   354,   579,   829,    25,   311,
   750,   391,  1243,   392,   391,  1246,   392,     4,    -2,   477,
  1209,  1252,   481,     6,     4,   485,   645,   646,   647,  1260,
     6,     4,   654,     4,   234,  1266,  1267,     6,    25,     6,
   311,   119,   120,   123,   124,   159,   443,     4,   378,     4,
   587,     6,   312,     6,   692,     6,    39,   371,   908,   683,
   953,   419,   184,   185,   186,   187,   188,   189,   190,   191,
   192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
   202,   203,   569,   312,   160,   447,   461,   959,    29,  1115,
   209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
   219,   220,   221,   222,   223,   899,  1210,    26,    27,   736,
   747,   470,   440,    30,   379,   205,   311,   311,   206,   440,
   365,   737,   476,   480,   754,   755,   756,   757,   758,   759,
   760,   761,   762,   763,   764,   765,   766,   767,   768,   769,
  1016,   773,   484,   916,  1028,   584,   391,    31,   392,   378,
   649,   895,   650,   877,   391,   312,   392,   801,   617,   312,
   312,   693,   312,   694,   695,   696,    32,   697,   698,   699,
   279,   281,   226,   700,   583,   284,   701,   143,     6,   702,
   920,  1052,   703,   569,   569,   569,   586,   378,   378,   569,
   704,   705,   313,   378,   830,   580,   751,   314,   393,   285,
    33,   393,   147,   148,    34,   441,  1211,   692,   227,   155,
   156,   609,   706,    26,    27,   379,   164,   165,   168,   169,
    35,   889,  1411,   313,   289,   346,   290,   692,    44,    45,
   355,   161,   172,   173,   177,   178,   291,   356,   357,   358,
   707,    40,   372,   909,   360,   954,   361,   363,    81,   367,
    36,   298,   738,   379,   379,   299,   921,    41,   859,   379,
   651,   206,   740,   300,   741,   742,   922,   569,   448,   448,
   716,   717,   960,  1451,  1116,   518,   615,   389,    93,   -41,
   616,   569,   569,   569,   569,   569,   569,   569,   569,   569,
   569,   569,   569,   569,   569,   569,   569,  1467,   569,   313,
   313,   652,   313,  1212,    42,   448,   448,   946,   791,   241,
   242,   243,   244,   421,   693,   792,   694,   695,   696,    37,
   697,   698,   699,   682,   245,   448,   700,   448,   947,   701,
   437,   831,   702,   294,   693,   703,   694,   695,   696,    38,
   697,   698,   699,   704,   705,   295,   700,   848,   670,   701,
    43,   671,   702,  1014,   292,   703,   849,  1097,    95,  1021,
  1018,   803,   206,   704,   705,   706,   850,   142,   143,   866,
   868,  1161,  1162,  1148,    97,   875,   143,    96,   569,  1167,
   303,   301,   143,    98,   497,   706,   499,   500,   501,   151,
   152,   125,   743,  1312,  1169,  1273,   304,   143,  1274,   516,
   319,   563,  1098,  -550,  1163,   330,   305,   306,   832,  1233,
   320,  1234,   307,  1315,   308,  1164,    99,   530,   331,   795,
  1099,  1100,  1311,   321,  1313,   853,   793,   322,   838,   796,
   839,   797,   582,   100,   948,   949,   332,   804,   101,   805,
   806,   867,   869,   870,   871,   137,   138,   139,   876,  1041,
   807,   140,   141,  1101,   102,   784,  1329,   785,   786,   787,
   788,   103,   611,   296,   808,   809,   810,   333,   618,   619,
   325,   623,   862,   863,   864,   865,   628,   956,   811,   958,
   840,  1026,   841,  1102,   851,   145,   878,   104,   722,   723,
   724,   725,   726,   727,   728,   729,   730,   153,   154,   731,
   326,   399,   143,   732,  1048,  1165,   176,   327,  1360,   105,
   569,   140,   141,  1369,  1366,  1366,   733,   569,   425,   426,
  1029,   442,   143,   334,   309,   523,   524,   181,   323,   593,
   594,   595,   596,  1064,   514,   426,   106,   905,   906,   526,
   527,   528,   529,   204,   680,   337,   965,   798,   570,   571,
   969,   126,   127,   128,   129,   130,   107,   131,   132,   133,
   134,   927,   108,   135,   136,   137,   138,   139,   812,   813,
   109,   140,   141,   789,   711,   110,   713,   714,   715,   573,
   574,   995,   338,   997,   123,   575,   576,   692,   328,   255,
  1004,   577,   578,   720,   978,   111,   721,  1291,  1292,  1293,
  1294,  1295,  1296,   112,  1382,   591,   592,   224,  1224,   339,
   777,   340,   113,   778,   600,   601,   225,   779,   780,   781,
  1150,   114,  1235,  1236,  1237,    47,    48,   532,   341,   597,
  1361,   734,  1362,  1363,    51,    52,    53,    54,    55,   533,
   534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
   544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
   554,   555,   115,   342,   277,   931,   932,   933,   934,   935,
   936,  1364,   604,   605,   523,   633,   855,  1131,  1445,   931,
   932,   933,   934,   935,   936,   942,   116,  1055,   -44,   143,
   117,  1389,  1057,  1390,   693,   118,   694,   695,   696,   235,
   697,   698,   699,   276,  1391,   283,   700,   891,   892,   701,
   819,  1149,   702,   288,  1392,   703,  1088,   556,   336,  1089,
   820,   344,  1297,   704,   705,   359,   782,  1090,  1091,  1393,
   348,  1092,  1093,   349,   135,   136,   137,   138,   139,   123,
   350,  1168,   140,   141,   351,   706,  1170,  1361,   352,  1362,
  1363,   821,   822,   823,   824,   825,   826,  1134,  1135,  1275,
  1276,  1365,   368,  1137,   369,   569,  1278,  1276,  1322,  1323,
  1142,   373,   692,  1317,   374,   943,  1407,   426,   897,   898,
   626,   627,   931,   932,   933,   934,   935,   936,  1364,  1394,
  1173,   375,   376,   377,  1177,   557,  1179,  1094,   382,  1182,
   383,   558,   559,   973,  1185,   975,   384,   385,   560,   386,
   561,   562,   563,  1383,   387,  1194,   388,   564,   985,  1395,
   987,   988,   989,  1080,   990,   396,  1081,   397,   398,  1204,
   401,  1205,   402,   403,  1082,  1083,  1084,   405,   827,    47,
    48,   532,   404,   406,  1218,  1219,   408,  1221,    51,    52,
    53,    54,    55,   533,   534,   535,   536,   537,   538,   539,
   540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
   550,   551,   552,   553,   554,   555,   409,   410,  1368,   693,
   411,   694,   695,   696,   413,   697,   698,   699,   414,   415,
   417,   700,   420,   418,   701,   422,   423,   702,   424,   428,
   703,   436,   434,   -41,  1085,   444,   446,   451,   704,   705,
   453,   454,   455,   458,  1238,   665,   666,   667,   668,   669,
   670,   460,   466,   671,    47,    48,   364,    50,   467,   468,
   706,   556,   473,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,  1319,   667,
   668,   669,   670,   471,  1248,   671,  1316,    76,   474,   312,
   483,   475,   389,  1318,  1104,   488,  1374,   692,   491,   489,
   493,   494,  1359,   495,   496,   502,   513,   515,   366,  1325,
   519,   520,   521,  1017,   531,   525,   608,   150,  1408,   572,
   158,   163,   167,   171,   175,   585,   180,   590,   599,   557,
   603,   606,  1105,   624,   629,   558,   559,   630,   631,  1106,
  1107,   632,   560,   638,   561,   562,   563,   640,   644,   771,
   642,   564,   648,   772,   672,   653,   673,  1108,   684,   687,
  1109,  1110,  1176,   688,   689,   690,  1180,  1181,   719,   745,
   710,  1183,   746,   748,  1186,  1187,  1188,  1189,   229,   770,
  1190,  1191,   749,  1193,   671,  1195,  1490,   847,  1196,   873,
  1111,  1387,  1200,  1201,   833,  1203,   247,   248,   249,   250,
   251,   252,   253,   775,   693,   842,   694,   695,   696,   834,
   697,   698,   699,   835,   836,   837,   700,   843,   872,   701,
  1112,    77,   702,   844,   874,   703,  1417,    78,   879,   313,
   881,    79,   880,   704,   705,   882,    80,   883,   887,   888,
   890,   896,   899,   901,   126,   127,   128,   129,   130,   902,
   131,   132,   133,   134,   903,   706,   135,   136,   137,   138,
   139,   904,   907,  1419,   140,   141,   911,   912,   913,   914,
  1424,   915,   655,   656,   657,   658,   659,   660,   661,   662,
   663,   664,   918,  1320,   665,   666,   667,   668,   669,   670,
   919,   923,   671,    47,    48,    49,    50,  1282,  1283,  1284,
  1285,  1286,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,   924,  1466,   925,
    47,    48,    49,   926,   951,   963,    76,   952,   962,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,   503,   504,   505,   506,   507,   508,
   509,   510,   511,   512,   964,   966,  1344,  1345,  1346,  1347,
  1348,   967,   968,    47,    48,    49,   970,   971,   979,   980,
   692,   981,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,   982,  1370,  1371,
  1372,  1373,   983,   991,   984,   893,   992,   993,   894,   994,
   996,  1001,   998,    47,    48,    49,   999,  1012,  1000,  1386,
  1015,  1388,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  1002,  1003,  1005,
    77,  1006,  1007,  1010,  1416,  1011,    78,  1013,  1327,  1019,
    79,  1328,  1022,  1020,  1023,    80,  1024,  1426,  1427,  1428,
  1429,  1025,  1027,   929,  1030,   930,  1032,   693,  1437,   694,
   695,   696,  1033,   697,   698,   699,  1034,    77,  1036,   700,
  1037,  1038,   701,    78,  1039,   702,  1040,   620,   703,  1042,
  1043,  1044,    80,  1045,  1046,  1047,   704,   705,   931,   932,
   933,   934,   935,   936,   937,  1049,  1050,  1051,  1462,  1053,
  1464,  1465,  1054,  1056,  1058,  1059,  1060,  1469,   706,  1062,
  1063,  1066,  1474,  1067,  1476,  1477,  1068,  1069,  1071,  1072,
    77,  1075,  1121,  1483,  1484,  1485,    78,  1073,  1074,  1122,
  1133,  1141,  1076,  1078,  1143,    80,  1321,  1496,  1079,  1498,
  1077,  1123,  1114,  1501,  1502,  1144,  1129,  1505,  1130,   143,
  1132,  1136,  1509,  1145,  1511,  1139,  1513,   131,   132,   133,
   134,  1146,  1147,   135,   136,   137,   138,   139,  1152,  1153,
    77,   140,   141,  1154,  1155,  1157,    78,    47,    48,    49,
   362,  1220,   280,  1159,   938,    80,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    47,    48,    49,  1160,  1230,  1171,  1172,  1174,  1175,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    47,    48,    49,   692,  1197,
  1178,  1223,  1184,  1227,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    47,
    48,    49,  1192,  1198,  1225,  1199,  1202,  1228,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    47,    48,    49,   692,  1213,  1214,  1229,
  1215,  1216,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  1217,  1232,  1249,
   692,  1226,  1239,   563,    77,   693,  1240,   694,   695,   696,
    78,   697,   698,   699,  1241,  1247,  1242,   700,  1245,    80,
   701,  1254,   929,   702,   930,  1250,   703,  1253,  1262,  1265,
  1272,  1279,  1280,  1287,   704,   705,  1288,  1289,    77,  1299,
  1290,  1300,  1301,  1255,    78,  1302,   366,  1333,  1303,  1306,
  1307,  1308,  1309,    80,  1310,  1314,   706,   931,   932,   933,
   934,   935,   936,   937,  1324,  1256,  1326,  1330,  1339,  1340,
  1341,  1342,    77,   693,  1343,   694,   695,   696,    78,   697,
   698,   699,  1350,   581,  1434,   700,  1354,    80,   701,  1257,
  1349,   702,  1351,  1352,   703,  1353,  1375,  1355,  1356,  1357,
  1381,  1384,   704,   705,  1385,  1397,    77,   693,  1398,   694,
   695,   696,    78,   697,   698,   699,   620,  1259,  1399,   700,
  1401,    80,   701,   448,   706,   702,  1402,  1409,   703,  1410,
  1413,  1415,  1418,  1420,  1436,  1453,   704,   705,  1421,  1261,
    77,  1422,  1423,  1430,  1431,  1432,    78,  1433,  1435,  1438,
  1440,  1441,  1459,   941,  1442,    80,  1443,  1444,   706,   126,
   127,   128,   129,   130,  1263,   131,   132,   133,   134,  1454,
  1456,   135,   136,   137,   138,   139,  1455,  1457,  1460,   140,
   141,   126,   127,   128,   129,   130,  1473,   131,   132,   133,
   134,  1264,  1458,   135,   136,   137,   138,   139,  1461,  1463,
  1472,   140,   141,   126,   127,   128,   129,   130,  1482,   131,
   132,   133,   134,  1268,  1486,   135,   136,   137,   138,   139,
  1491,  1492,  1493,   140,   141,   126,   127,   128,   129,   130,
  1494,   131,   132,   133,   134,  1269,  1495,   135,   136,   137,
   138,   139,  1497,  1507,  1508,   140,   141,  1516,  1517,   126,
   127,   128,   129,   130,   917,   131,   132,   133,   134,  1271,
   675,   135,   136,   137,   138,   139,  1008,   522,   816,   140,
   141,  1119,  1208,  1332,   607,   492,   183,   126,   127,   128,
   129,   130,  1376,   131,   132,   133,   134,   278,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1377,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,   126,   127,   128,   129,   130,  1378,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
     0,   126,   127,   128,   129,   130,  1379,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1380,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1439,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,   126,
   127,   128,   129,   130,   207,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,   126,   127,   128,   129,   130,   282,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,     0,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     4,     0,   140,   141,     5,     0,
     6,   655,   656,   657,   658,   659,   660,   661,   662,   663,
   664,     0,     0,   665,   666,   667,   668,   669,   670,     0,
     0,   671,   129,   130,     0,   131,   132,   133,   134,     7,
   752,   135,   136,   137,   138,   139,     8,     0,     0,   140,
   141,     0,     0,     0,     0,     0,     0,     0,     0,     9,
     0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    11,     0,     0,     0,    12,     0,     0,     0,   126,
   127,   128,   129,   130,    13,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,    14,     0,     0,     0,     0,     0,     0,   208,   655,
   656,   657,   658,   659,   660,   661,   662,   663,   664,     0,
     0,   665,   666,   667,   668,   669,   670,     0,     0,   671,
     0,     0,     0,    15,     0,    16,   885,     0,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,    17,     0,    18,    19,   266,     0,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,   273,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,   274,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,   275,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
   498,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,   610,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,   612,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,   613,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,   614,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
   712,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,   854,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,   856,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,   857,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,   858,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
   860,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,  1087,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1096,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1244,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1251,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1258,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,  1334,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1335,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1336,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1337,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1403,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,  1404,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1405,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1406,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1414,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1468,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,  1470,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1471,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1479,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1480,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,   126,   127,   128,   129,   130,
  1481,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,   126,   127,   128,
   129,   130,  1499,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   126,
   127,   128,   129,   130,  1500,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,   126,   127,   128,   129,   130,  1503,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,   126,   127,   128,   129,   130,  1510,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,     0,
  1512,   655,   656,   657,   658,   659,   660,   661,   662,   663,
   664,     0,     0,   665,   666,   667,   668,   669,   670,     0,
     0,   671,   126,   127,   128,   129,   130,  1138,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,   256,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,   257,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,   258,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,   259,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,   260,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,   261,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
   262,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   263,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   264,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,   265,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,   267,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,   268,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,   269,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,   270,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,   271,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,     0,     0,   272,   126,   127,   128,   129,   130,     0,
   131,   132,   133,   134,     0,     0,   135,   136,   137,   138,
   139,     0,     0,     0,   140,   141,     0,     0,     0,     0,
   430,   126,   127,   128,   129,   130,     0,   131,   132,   133,
   134,     0,     0,   135,   136,   137,   138,   139,     0,     0,
     0,   140,   141,     0,     0,     0,     0,   431,   126,   127,
   128,   129,   130,     0,   131,   132,   133,   134,     0,     0,
   135,   136,   137,   138,   139,     0,     0,     0,   140,   141,
     0,     0,     0,     0,   432,   126,   127,   128,   129,   130,
     0,   131,   132,   133,   134,     0,     0,   135,   136,   137,
   138,   139,     0,     0,     0,   140,   141,     0,     0,     0,
     0,   433,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,     0,     0,   435,   126,
   127,   128,   129,   130,     0,   131,   132,   133,   134,     0,
     0,   135,   136,   137,   138,   139,     0,     0,     0,   140,
   141,     0,     0,     0,     0,   637,   126,   127,   128,   129,
   130,     0,   131,   132,   133,   134,     0,     0,   135,   136,
   137,   138,   139,     0,     0,     0,   140,   141,     0,     0,
     0,     0,   800,   126,   127,   128,   129,   130,     0,   131,
   132,   133,   134,     0,     0,   135,   136,   137,   138,   139,
     0,     0,     0,   140,   141,     0,     0,     0,     0,  1412,
   126,   127,   128,   129,   130,     0,   131,   132,   133,   134,
     0,     0,   135,   136,   137,   138,   139,     0,     0,     0,
   140,   141,     0,     0,     0,     0,  1452,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,   438,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,   517,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,   681,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,   861,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,   986,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,  1124,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,  1125,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,  1126,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,  1127,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,  1128,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,  1338,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,  1446,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,  1447,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,  1448,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,  1449,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,  1475,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,  1487,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,  1488,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,  1489,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,  1504,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,     0,
     0,  1506,   126,   127,   128,   129,   130,     0,   131,   132,
   133,   134,     0,     0,   135,   136,   137,   138,   139,     0,
     0,     0,   140,   141,     0,     0,  1514,   126,   127,   128,
   129,   130,     0,   131,   132,   133,   134,     0,     0,   135,
   136,   137,   138,   139,     0,     0,     0,   140,   141,   655,
   656,   657,   658,   659,   660,   661,   662,   663,   664,     0,
     0,   665,   666,   667,   668,   669,   670,     0,     0,   671,
   658,   659,   660,   661,   662,   663,   664,     0,     0,   665,
   666,   667,   668,   669,   670,     0,     0,   671,   661,   662,
   663,   664,     0,     0,   665,   666,   667,   668,   669,   670,
     0,     0,   671
};

static const short yycheck[] = {    25,
   410,   374,   354,   532,   318,   340,   620,   247,   248,   746,
   817,   748,   385,   823,   472,   255,     3,     5,   166,     5,
     5,     3,  1175,     5,     3,  1178,     5,     5,     0,   402,
     5,  1184,   405,    11,     5,   408,   558,   559,   560,  1192,
    11,     5,   564,     5,   192,  1198,  1199,    11,   166,    11,
     5,    77,    78,    79,    80,     5,   370,     5,    10,     5,
    42,    11,    48,    11,     5,    11,     5,     5,     5,   584,
     5,   346,    98,    99,   100,   101,   102,   103,   104,   105,
   106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
   116,   117,   457,    48,    44,     7,     7,     5,   192,     5,
   126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   140,     5,    91,     5,     6,    48,
   642,   396,     5,   190,    76,   191,     5,     5,   194,     5,
   284,    60,     7,     7,   656,   657,   658,   659,   660,   661,
   662,   663,   664,   665,   666,   667,   668,   669,   670,   671,
   887,   673,     7,    43,     7,   469,     3,   190,     5,    10,
     3,   775,     5,    42,     3,    48,     5,   682,   503,    48,
    48,   112,    48,   114,   115,   116,   190,   118,   119,   120,
   206,   207,     5,   124,   191,   166,   127,   194,    11,   130,
     5,   928,   133,   558,   559,   560,   471,    10,    10,   564,
   141,   142,   188,    10,   192,   192,   191,   193,   190,   190,
   190,   190,   190,   191,   190,   369,   191,     5,    41,   190,
   191,   496,   163,     5,     6,    76,   190,   191,   190,   191,
   190,   753,  1385,   188,    61,   190,    63,     5,   140,   141,
   266,   191,   190,   191,   190,   191,    73,   273,   274,   275,
   191,   190,   190,   190,   280,   190,   282,   283,   284,   285,
   190,    61,   191,    76,    76,    65,    81,     7,   191,    76,
   113,   194,    61,    73,    63,    64,    91,   642,   190,   190,
   615,   616,   190,  1436,   190,   439,   174,   190,   138,   192,
   178,   656,   657,   658,   659,   660,   661,   662,   663,   664,
   665,   666,   667,   668,   669,   670,   671,  1460,   673,   188,
   188,   154,   188,  1123,     7,   190,   190,    63,    73,   179,
   180,   181,   182,   349,   112,    80,   114,   115,   116,   190,
   118,   119,   120,   180,   194,   190,   124,   190,    84,   127,
   366,   192,   130,    61,   112,   133,   114,   115,   116,   190,
   118,   119,   120,   141,   142,    73,   124,    54,   184,   127,
     7,   187,   130,   885,   191,   133,    63,    65,   192,   191,
   892,   685,   194,   141,   142,   163,    73,   193,   194,   192,
   192,    57,    58,   191,     7,   192,   194,   192,   753,   191,
    47,   191,   194,   192,   420,   163,   422,   423,   424,   190,
   191,     7,   191,   191,   191,   191,    63,   194,   194,   435,
    63,   190,   110,   192,    90,    73,    73,    74,   693,  1156,
    73,  1158,    79,   191,    81,   101,   192,   453,    86,    63,
   128,   129,  1242,    86,  1244,   710,   191,    90,   190,    73,
   192,    75,   468,   192,   190,   191,   104,    60,   192,    62,
    63,   726,   727,   728,   729,   181,   182,   183,   733,   917,
    73,   187,   188,   161,   192,    73,  1276,    75,    76,    77,
    78,   192,   498,   191,    87,    88,    89,   135,   504,   505,
    73,   507,   722,   723,   724,   725,   512,   822,   101,   824,
   190,   901,   192,   191,   191,   191,   736,   192,    48,    49,
    50,    51,    52,    53,    54,    55,    56,   190,   191,    59,
   103,   193,   194,    63,   924,   191,     5,   110,  1328,   192,
   885,   187,   188,  1333,  1331,  1332,    76,   892,   193,   194,
   903,   193,   194,   191,   191,   190,   191,     5,   191,    91,
    92,    93,    94,   953,   193,   194,   192,   787,   788,   190,
   191,   190,   191,     5,   580,    73,   831,   191,   190,   191,
   835,   167,   168,   169,   170,   171,   192,   173,   174,   175,
   176,   811,   192,   179,   180,   181,   182,   183,   191,   192,
   192,   187,   188,   191,   610,   192,   612,   613,   614,   190,
   191,   866,   110,   868,   620,   190,   191,     5,   191,   143,
   875,   190,   191,   629,   844,   192,   632,    66,    67,    68,
    69,    70,    71,   192,  1351,   190,   191,     7,  1140,   137,
    75,   139,   192,    78,   190,   191,     5,    82,    83,    84,
  1040,   192,  1161,  1162,  1163,     3,     4,     5,   156,   191,
    60,   191,    62,    63,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,   192,   191,     7,    95,    96,    97,    98,    99,
   100,   101,   190,   191,   190,   191,   712,  1001,  1425,    95,
    96,    97,    98,    99,   100,   101,   192,   937,   193,   194,
   192,    63,   942,    65,   112,   192,   114,   115,   116,   192,
   118,   119,   120,   194,    76,   166,   124,   193,   194,   127,
    63,  1035,   130,   192,    86,   133,   110,    95,   190,   113,
    73,     5,   191,   141,   142,     5,   191,   121,   122,   101,
   190,   125,   126,   190,   179,   180,   181,   182,   183,   775,
   190,  1065,   187,   188,   190,   163,  1070,    60,   190,    62,
    63,   104,   105,   106,   107,   108,   109,   190,   191,   193,
   194,   191,   166,  1013,   166,  1140,   193,   194,   190,   191,
  1020,     5,     5,   191,     5,   191,   193,   194,   778,   779,
   509,   510,    95,    96,    97,    98,    99,   100,   101,   161,
  1075,   190,     5,   190,  1079,   173,  1081,   191,     5,  1084,
   190,   179,   180,   839,  1089,   841,     5,     5,   186,   190,
   188,   189,   190,  1352,   190,  1100,   190,   195,   854,   191,
   856,   857,   858,   110,   860,   166,   113,   193,   192,  1114,
     5,  1116,     5,   190,   121,   122,   123,     5,   191,     3,
     4,     5,   190,   190,  1129,  1130,     5,  1132,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,   190,     5,   191,   112,
     5,   114,   115,   116,     5,   118,   119,   120,   190,     5,
     5,   124,   190,   194,   127,   190,   190,   130,   190,   150,
   133,     7,   193,   192,   191,   190,     7,     7,   141,   142,
   192,   192,     7,     7,  1164,   179,   180,   181,   182,   183,
   184,     7,   191,   187,     3,     4,     5,     6,     8,   190,
   163,    95,     7,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,   191,   181,
   182,   183,   184,   166,     7,   187,  1251,    46,     5,    48,
   190,     7,   190,  1258,    65,     7,  1338,     5,     7,   191,
     7,     7,  1327,     7,   194,     7,     5,     7,   188,  1274,
     7,     7,     5,     8,     5,     7,   191,    85,  1381,     7,
    88,    89,    90,    91,    92,     7,    94,     7,     7,   173,
     7,     7,   103,     5,   190,   179,   180,     7,     7,   110,
   111,   190,   186,   193,   188,   189,   190,   192,     5,   193,
   192,   195,     3,   197,   188,     5,   192,   128,     7,   190,
   131,   132,  1078,   190,   190,   190,  1082,  1083,     6,   190,
   194,  1087,   192,   192,  1090,  1091,  1092,  1093,   146,     3,
  1096,  1097,   174,  1099,   187,  1101,  1486,     7,  1104,     5,
   161,  1356,  1108,  1109,   192,  1111,   143,   144,   145,   146,
   147,   148,   149,   190,   112,   190,   114,   115,   116,   192,
   118,   119,   120,   192,   192,   192,   124,   190,   190,   127,
   191,   180,   130,   192,     5,   133,  1391,   186,     5,   188,
     5,   190,   190,   141,   142,     5,   195,     5,   192,   191,
   193,     5,     5,     5,   167,   168,   169,   170,   171,     5,
   173,   174,   175,   176,     5,   163,   179,   180,   181,   182,
   183,     5,     5,  1393,   187,   188,     5,     5,     5,     3,
  1400,   193,   167,   168,   169,   170,   171,   172,   173,   174,
   175,   176,     5,   191,   179,   180,   181,   182,   183,   184,
     5,     5,   187,     3,     4,     5,     6,  1213,  1214,  1215,
  1216,  1217,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,     5,  1458,     3,
     3,     4,     5,     3,     5,     7,    46,     5,     5,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,   151,   152,   153,   154,   155,   156,
   157,   158,   159,   160,     5,     7,  1292,  1293,  1294,  1295,
  1296,     5,     5,     3,     4,     5,     5,     5,   192,   192,
     5,   190,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,     5,  1334,  1335,
  1336,  1337,     5,     7,   191,    45,     7,     7,    48,     7,
     7,     3,     7,     3,     4,     5,     7,   191,     7,  1355,
   193,  1357,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,     7,     7,     7,
   180,     7,     7,     7,  1390,     7,   186,   194,   151,   192,
   190,   154,     7,   192,    84,   195,     7,  1403,  1404,  1405,
  1406,     7,     7,    60,   190,    62,     7,   112,  1414,   114,
   115,   116,     7,   118,   119,   120,     7,   180,     7,   124,
     7,     7,   127,   186,     7,   130,     5,   190,   133,     7,
     7,     7,   195,     7,     7,     7,   141,   142,    95,    96,
    97,    98,    99,   100,   101,     7,     7,     7,  1454,     5,
  1456,  1457,     5,   192,   192,     5,     5,  1463,   163,     7,
     7,     7,  1468,     7,  1470,  1471,     7,     7,     7,     7,
   180,   194,     7,  1479,  1480,  1481,   186,   193,   193,     7,
     7,     5,   194,   194,     5,   195,   191,  1493,   194,  1495,
   193,   190,   194,  1499,  1500,     7,   194,  1503,   194,   194,
   194,   193,  1508,     7,  1510,   193,  1512,   173,   174,   175,
   176,    86,     7,   179,   180,   181,   182,   183,   193,     7,
   180,   187,   188,     7,     7,     7,   186,     3,     4,     5,
     6,     3,   192,     7,   191,   195,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,     3,     4,     5,     7,   192,     7,     7,     5,   190,
    12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,     3,     4,     5,     5,     5,
   190,   193,   190,     7,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,     3,
     4,     5,   190,   190,   193,   190,   190,     5,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,     3,     4,     5,     5,   190,   190,     5,
   190,   190,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,   190,     7,     7,
     5,   193,     5,   190,   180,   112,     5,   114,   115,   116,
   186,   118,   119,   120,   193,     7,   194,   124,   193,   195,
   127,     7,    60,   130,    62,     7,   133,     7,     7,     7,
   193,   190,   190,   193,   141,   142,   193,   191,   180,   191,
   193,   191,     7,     7,   186,     5,   188,   194,     7,     7,
     7,     7,     7,   195,     7,     7,   163,    95,    96,    97,
    98,    99,   100,   101,     7,     7,     7,     7,     7,     7,
     7,     7,   180,   112,     5,   114,   115,   116,   186,   118,
   119,   120,   193,   191,   191,   124,   117,   195,   127,     7,
    85,   130,   194,   194,   133,   193,     7,   194,   194,   194,
     5,     7,   141,   142,   190,     5,   180,   112,     5,   114,
   115,   116,   186,   118,   119,   120,   190,     7,     5,   124,
   192,   195,   127,   190,   163,   130,   191,   193,   133,   193,
   193,     5,     5,     5,   190,   193,   141,   142,     7,     7,
   180,     7,     7,     7,     7,     7,   186,     7,     7,     7,
     7,     7,   191,   191,     7,   195,     7,     7,   163,   167,
   168,   169,   170,   171,     7,   173,   174,   175,   176,   190,
   190,   179,   180,   181,   182,   183,   191,   190,   190,   187,
   188,   167,   168,   169,   170,   171,   191,   173,   174,   175,
   176,     7,    40,   179,   180,   181,   182,   183,     7,   190,
     7,   187,   188,   167,   168,   169,   170,   171,   102,   173,
   174,   175,   176,     7,     5,   179,   180,   181,   182,   183,
   191,   191,   190,   187,   188,   167,   168,   169,   170,   171,
     7,   173,   174,   175,   176,     7,   190,   179,   180,   181,
   182,   183,   191,   191,   190,   187,   188,     0,     0,   167,
   168,   169,   170,   171,   803,   173,   174,   175,   176,     7,
   568,   179,   180,   181,   182,   183,   879,   444,   688,   187,
   188,   980,  1119,  1280,   490,   414,    96,   167,   168,   169,
   170,   171,     7,   173,   174,   175,   176,   206,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,     7,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,    -1,    -1,    -1,   167,   168,   169,   170,   171,     7,
   173,   174,   175,   176,    -1,    -1,   179,   180,   181,   182,
   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,
    -1,   167,   168,   169,   170,   171,     7,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,   167,   168,   169,   170,   171,     7,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,   167,   168,   169,   170,   171,
     7,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,   167,
   168,   169,   170,   171,     8,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,    -1,   167,   168,   169,   170,   171,     8,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,   167,   168,   169,   170,   171,    -1,
   173,   174,   175,   176,    -1,    -1,   179,   180,   181,   182,
   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,   167,
   168,   169,   170,   171,    -1,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,    -1,    -1,    -1,    -1,    -1,   167,   168,   169,   170,
   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,   180,
   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,   168,
   169,   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,
   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,
   167,   168,   169,   170,   171,    -1,   173,   174,   175,   176,
    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,
   187,   188,    -1,   167,   168,   169,   170,   171,    -1,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,    -1,   167,   168,   169,   170,
   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,   180,
   181,   182,   183,    -1,     5,    -1,   187,   188,     9,    -1,
    11,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,   184,    -1,
    -1,   187,   170,   171,    -1,   173,   174,   175,   176,    40,
   196,   179,   180,   181,   182,   183,    47,    -1,    -1,   187,
   188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    72,    -1,    -1,    -1,    76,    -1,    -1,    -1,   167,
   168,   169,   170,   171,    85,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,   102,    -1,    -1,    -1,    -1,    -1,    -1,   196,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,   184,    -1,    -1,   187,
    -1,    -1,    -1,   134,    -1,   136,   194,    -1,   167,   168,
   169,   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,
   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,
    -1,   162,    -1,   164,   165,   194,    -1,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,   194,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,   167,   168,   169,   170,   171,   194,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,   167,   168,   169,   170,   171,   194,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,   167,   168,   169,   170,   171,
   194,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,   167,   168,   169,
   170,   171,   194,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,   194,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,   167,   168,   169,   170,   171,   194,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,   167,   168,   169,   170,   171,   194,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,   167,   168,   169,   170,   171,
   194,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,   167,   168,   169,
   170,   171,   194,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,   194,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,   167,   168,   169,   170,   171,   194,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,   167,   168,   169,   170,   171,   194,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,   167,   168,   169,   170,   171,
   194,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,   167,   168,   169,
   170,   171,   194,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,   194,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,   167,   168,   169,   170,   171,   194,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,   167,   168,   169,   170,   171,   194,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,   167,   168,   169,   170,   171,
   194,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,   167,   168,   169,
   170,   171,   194,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,   194,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,   167,   168,   169,   170,   171,   194,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,   167,   168,   169,   170,   171,   194,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,   167,   168,   169,   170,   171,
   194,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,   167,   168,   169,
   170,   171,   194,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,   194,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,   167,   168,   169,   170,   171,   194,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,   167,   168,   169,   170,   171,   194,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,   167,   168,   169,   170,   171,
   194,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,   167,   168,   169,
   170,   171,   194,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,   194,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,   167,   168,   169,   170,   171,   194,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,   167,   168,   169,   170,   171,   194,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,   167,   168,   169,   170,   171,
   194,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,   167,   168,   169,
   170,   171,   194,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,   194,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,   167,   168,   169,   170,   171,   194,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,   167,   168,   169,   170,   171,   194,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,    -1,
   194,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,   184,    -1,
    -1,   187,   167,   168,   169,   170,   171,   193,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,   167,
   168,   169,   170,   171,    -1,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,    -1,    -1,    -1,    -1,   193,   167,   168,   169,   170,
   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,   180,
   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,
    -1,    -1,   193,   167,   168,   169,   170,   171,    -1,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,
   167,   168,   169,   170,   171,    -1,   173,   174,   175,   176,
    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,
   187,   188,    -1,    -1,    -1,    -1,   193,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,    -1,    -1,   193,   167,   168,   169,   170,   171,    -1,
   173,   174,   175,   176,    -1,    -1,   179,   180,   181,   182,
   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,
   193,   167,   168,   169,   170,   171,    -1,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,    -1,    -1,    -1,    -1,   193,   167,   168,
   169,   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,
   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,
    -1,    -1,    -1,    -1,   193,   167,   168,   169,   170,   171,
    -1,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
    -1,   193,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,   167,
   168,   169,   170,   171,    -1,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,    -1,    -1,    -1,    -1,   193,   167,   168,   169,   170,
   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,   180,
   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,
    -1,    -1,   193,   167,   168,   169,   170,   171,    -1,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,
   167,   168,   169,   170,   171,    -1,   173,   174,   175,   176,
    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,
   187,   188,    -1,    -1,    -1,    -1,   193,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,    -1,    -1,   193,   167,   168,   169,   170,   171,    -1,
   173,   174,   175,   176,    -1,    -1,   179,   180,   181,   182,
   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,
   193,   167,   168,   169,   170,   171,    -1,   173,   174,   175,
   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,
    -1,   187,   188,    -1,    -1,    -1,    -1,   193,   167,   168,
   169,   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,
   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,
    -1,    -1,    -1,    -1,   193,   167,   168,   169,   170,   171,
    -1,   173,   174,   175,   176,    -1,    -1,   179,   180,   181,
   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,
    -1,   193,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,   167,
   168,   169,   170,   171,    -1,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,   187,
   188,    -1,    -1,    -1,    -1,   193,   167,   168,   169,   170,
   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,   180,
   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,    -1,
    -1,    -1,   193,   167,   168,   169,   170,   171,    -1,   173,
   174,   175,   176,    -1,    -1,   179,   180,   181,   182,   183,
    -1,    -1,    -1,   187,   188,    -1,    -1,    -1,    -1,   193,
   167,   168,   169,   170,   171,    -1,   173,   174,   175,   176,
    -1,    -1,   179,   180,   181,   182,   183,    -1,    -1,    -1,
   187,   188,    -1,    -1,    -1,    -1,   193,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,    -1,
    -1,   191,   167,   168,   169,   170,   171,    -1,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,    -1,
    -1,    -1,   187,   188,    -1,    -1,   191,   167,   168,   169,
   170,   171,    -1,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,    -1,    -1,    -1,   187,   188,   167,
   168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
    -1,   179,   180,   181,   182,   183,   184,    -1,    -1,   187,
   170,   171,   172,   173,   174,   175,   176,    -1,    -1,   179,
   180,   181,   182,   183,   184,    -1,    -1,   187,   173,   174,
   175,   176,    -1,    -1,   179,   180,   181,   182,   183,   184,
    -1,    -1,   187
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
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

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

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
     int count;
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
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "/usr/local/share/bison.simple"

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
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
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
#line 309 "yacc.y"
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
#line 345 "yacc.y"
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
#line 387 "yacc.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 410 "yacc.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 425 "yacc.y"
{ InteractiveExit = 1; ;
    break;}
case 21:
#line 428 "yacc.y"
{ Pos_InteractiveHelp(); ;
    break;}
case 23:
#line 442 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 24:
#line 449 "yacc.y"
{
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 26:
#line 464 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 28:
#line 471 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 29:
#line 474 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 30:
#line 477 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 31:
#line 479 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 34:
#line 490 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 35:
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
case 36:
#line 507 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 37:
#line 516 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 38:
#line 527 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 39:
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
case 40:
#line 569 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 41:
#line 572 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 42:
#line 583 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 43:
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
case 44:
#line 601 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 45:
#line 604 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 46:
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
case 47:
#line 658 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 48:
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
case 49:
#line 694 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 50:
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
case 51:
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
case 52:
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
case 53:
#line 755 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 54:
#line 759 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 55:
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
case 56:
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
case 57:
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
case 58:
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
case 60:
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
case 61:
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
case 64:
#line 885 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 65:
#line 890 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 66:
#line 891 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 67:
#line 896 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 71:
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
case 72:
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
case 75:
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
case 76:
#line 1006 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 77:
#line 1012 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 78:
#line 1018 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 79:
#line 1021 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 80:
#line 1029 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 81:
#line 1033 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 83:
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
case 84:
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
case 85:
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
case 86:
#line 1087 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 87:
#line 1093 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 88:
#line 1099 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1105 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1111 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1117 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1123 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1129 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1135 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1141 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1147 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1153 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1159 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1165 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1171 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1177 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1183 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1190 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 105:
#line 1198 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 107:
#line 1211 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 108:
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
case 109:
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
	  yyerror("Dof Definition out of Context") ;
	else
	  yyerror("More than one Dof Definition in Expression") ;
	break ;
      case QUANTITY_NODOF :
	if (Current_DofIndexInWholeQuantity == -2)
	  yyerror("NoDof Definition out of Context") ;
	else if (Current_NoDofIndexInWholeQuantity == -1)
	  Current_NoDofIndexInWholeQuantity = List_Nbr(Current_WholeQuantity_L) ;
	else
	  yyerror("More than one NoDof Definition in Expression") ;
	break ;
      }
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 110:
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
case 111:
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
case 112:
#line 1352 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 113:
#line 1354 "yacc.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	yyerror("Dof definition out of context") ;
    ;
    break;}
case 114:
#line 1365 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      if ((WholeQuantity_S.Case.OperatorAndQuantity.Index = 
	   List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-2].c,
			   fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-2].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 115:
#line 1374 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 116:
#line 1376 "yacc.y"
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
case 117:
#line 1405 "yacc.y"
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
case 118:
#line 1429 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError) 
	vyyerror("Unknown Current Value: $%s %s", yyvsp[0].c, Get_Valid_SXP(Current_Value)) ;
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 119:
#line 1440 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 120:
#line 1446 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 121:
#line 1453 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 122:
#line 1459 "yacc.y"
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
case 123:
#line 1470 "yacc.y"
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
case 124:
#line 1485 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 125:
#line 1486 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 126:
#line 1487 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 127:
#line 1492 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 128:
#line 1493 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 129:
#line 1499 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 131:
#line 1504 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 132:
#line 1511 "yacc.y"
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
case 133:
#line 1538 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 134:
#line 1543 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 135:
#line 1550 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianPerRegion = NULL ; ;
    break;}
case 137:
#line 1559 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 138:
#line 1564 "yacc.y"
{ JacobianMethod_S.JacobianPerRegion = yyvsp[-1].l ; ;
    break;}
case 139:
#line 1571 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 140:
#line 1574 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 141:
#line 1581 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 143:
#line 1591 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 144:
#line 1594 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 145:
#line 1597 "yacc.y"
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
case 146:
#line 1628 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 147:
#line 1634 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 148:
#line 1641 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.Method = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 150:
#line 1654 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 151:
#line 1661 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 152:
#line 1664 "yacc.y"
{ IntegrationMethod_S.Method = yyvsp[-1].l ; ;
    break;}
case 153:
#line 1671 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 154:
#line 1674 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 155:
#line 1681 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 157:
#line 1693 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 158:
#line 1702 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 159:
#line 1711 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 160:
#line 1718 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 161:
#line 1721 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 162:
#line 1728 "yacc.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 164:
#line 1744 "yacc.y"
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
	  yyerror("Incompatible Type of Integration Method") ;
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
	  yyerror("Incompatible Type of Integration Method") ;
	  break ;
	}
	break ;

      default :
	yyerror("Incompatible Type of Integration Method") ;
	break ;
      }

      if (FlagError)  vyyerror("Bad Type of Integration for Element: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 165:
#line 1797 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 166:
#line 1800 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 167:
#line 1803 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 168:
#line 1806 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 169:
#line 1809 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 170:
#line 1820 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 172:
#line 1830 "yacc.y"
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
case 174:
#line 1855 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 176:
#line 1869 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 177:
#line 1875 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 178:
#line 1882 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 179:
#line 1890 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 180:
#line 1893 "yacc.y"
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
case 181:
#line 1915 "yacc.y"
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
case 182:
#line 1930 "yacc.y"
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
case 183:
#line 1954 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 185:
#line 1968 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 186:
#line 1977 "yacc.y"
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
case 187:
#line 2001 "yacc.y"
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
case 188:
#line 2026 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 189:
#line 2031 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 190:
#line 2039 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 191:
#line 2047 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 192:
#line 2057 "yacc.y"
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
case 193:
#line 2073 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 194:
#line 2080 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 195:
#line 2086 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 196:
#line 2092 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 197:
#line 2100 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 198:
#line 2108 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 199:
#line 2116 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 200:
#line 2136 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 202:
#line 2147 "yacc.y"
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
case 204:
#line 2174 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 206:
#line 2187 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 207:
#line 2193 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 208:
#line 2200 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 209:
#line 2208 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 210:
#line 2211 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 211:
#line 2214 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 212:
#line 2217 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2224 "yacc.y"
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
case 214:
#line 2240 "yacc.y"
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
case 215:
#line 2277 "yacc.y"
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
case 217:
#line 2296 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 218:
#line 2299 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 219:
#line 2304 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 220:
#line 2309 "yacc.y"
{
      Get_3FunctionForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.Function, &BasisFunction_S.dFunction, 
	 &BasisFunction_S.dInvFunction) ;
      if (FlagError)  vyyerror("Unknown Function for BasisFunction: %s %s", 
			       yyvsp[-2].c, Get_Valid_SX3F(BF_Function)) ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 221:
#line 2320 "yacc.y"
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
case 222:
#line 2344 "yacc.y"
{
      if (!Nbr_Index) {
	if (yyvsp[-1].i >= 0) {
	  BasisFunction_S.EntityIndex = yyvsp[-1].i ;
	  if (Group_S.InitialList)
	    List_Tri(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
	}
	else if (yyvsp[-1].i == -1) {
	  if (Group_S.InitialList)
	    List_Tri(Group_S.InitialList, fcmp_int) ;  /* Necessaire pour Global... */
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
case 224:
#line 2404 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 225:
#line 2407 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 226:
#line 2416 "yacc.y"
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
      List_Tri(BasisFunction_S.GlobalBasisFunction, fcmp_int) ;


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
case 227:
#line 2481 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 228:
#line 2485 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 229:
#line 2492 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 231:
#line 2501 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 232:
#line 2506 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 233:
#line 2513 "yacc.y"
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
case 234:
#line 2529 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 235:
#line 2535 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 236:
#line 2538 "yacc.y"
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
case 237:
#line 2557 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 238:
#line 2561 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 239:
#line 2570 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 241:
#line 2581 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 242:
#line 2586 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 243:
#line 2595 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 244:
#line 2608 "yacc.y"
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
case 245:
#line 2623 "yacc.y"
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
case 246:
#line 2697 "yacc.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 248:
#line 2713 "yacc.y"
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
case 249:
#line 2731 "yacc.y"
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
case 250:
#line 2745 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 251:
#line 2748 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 252:
#line 2751 "yacc.y"
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
case 253:
#line 2797 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 255:
#line 2807 "yacc.y"
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
case 257:
#line 2833 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 259:
#line 2845 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 260:
#line 2851 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 261:
#line 2858 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 263:
#line 2869 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 264:
#line 2875 "yacc.y"
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
case 265:
#line 2889 "yacc.y"
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
case 266:
#line 2907 "yacc.y"
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
case 268:
#line 2928 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 269:
#line 2931 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 270:
#line 2935 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 271:
#line 2938 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 272:
#line 2947 "yacc.y"
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
case 273:
#line 2986 "yacc.y"
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
case 274:
#line 3010 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 275:
#line 3015 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 276:
#line 3021 "yacc.y"
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
case 277:
#line 3171 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 278:
#line 3176 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 279:
#line 3185 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 280:
#line 3194 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 282:
#line 3202 "yacc.y"
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
case 283:
#line 3242 "yacc.y"
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
case 284:
#line 3257 "yacc.y"
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
case 285:
#line 3285 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 286:
#line 3288 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 287:
#line 3291 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 288:
#line 3294 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 289:
#line 3301 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 291:
#line 3312 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 292:
#line 3321 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 293:
#line 3331 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 294:
#line 3345 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 296:
#line 3357 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 297:
#line 3359 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 298:
#line 3361 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 299:
#line 3363 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 300:
#line 3371 "yacc.y"
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
case 302:
#line 3393 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 303:
#line 3401 "yacc.y"
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
case 304:
#line 3463 "yacc.y"
{ 
      EquationTerm_S.Case.LocalTerm.Term.TypeOperatorEqu = Quantity_TypeOperator ;
      EquationTerm_S.Case.LocalTerm.Term.DefineQuantityIndexEqu = Quantity_Index ;
      EquationTerm_S.Case.LocalTerm.Term.CanonicalWholeQuantity_Equ = CWQ_NONE ;

      WholeQuantity_P = (struct WholeQuantity*) List_Pointer(yyvsp[-2].l, 0) ;

      if (List_Nbr(yyvsp[-2].l) == 1){
	if ((WholeQuantity_P+0)->Type != WQ_OPERATORANDQUANTITY)
	  yyerror("Missing DefineQuantity in Equation");
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
	yyerror("Unrecognized Quantity Structure in Equation");
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
case 305:
#line 3509 "yacc.y"
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
case 306:
#line 3533 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 307:
#line 3542 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 308:
#line 3556 "yacc.y"
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
case 310:
#line 3585 "yacc.y"
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
case 311:
#line 3609 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 312:
#line 3617 "yacc.y"
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
case 313:
#line 3672 "yacc.y"
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
case 314:
#line 3689 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 315:
#line 3690 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 316:
#line 3691 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 317:
#line 3692 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 318:
#line 3693 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 319:
#line 3694 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 320:
#line 3695 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 321:
#line 3702 "yacc.y"
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
case 322:
#line 3716 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 323:
#line 3734 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 325:
#line 3744 "yacc.y"
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
case 327:
#line 3769 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 329:
#line 3781 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 330:
#line 3788 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 331:
#line 3795 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 332:
#line 3798 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 333:
#line 3800 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 334:
#line 3806 "yacc.y"
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
case 335:
#line 3821 "yacc.y"
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
case 336:
#line 3840 "yacc.y"
{ DefineSystem_S.Name = NULL ;  
      DefineSystem_S.Type = VAL_REAL ;
      DefineSystem_S.FormulationIndex = NULL ;
      DefineSystem_S.MeshName = NULL ;
      DefineSystem_S.FrequencyValue = NULL ;
      DefineSystem_S.SolverDataFileName = NULL ;
      DefineSystem_S.OriginSystemIndex = NULL ;
      DefineSystem_S.DestinationSystemName = NULL ;
      DefineSystem_S.DestinationSystemIndex = -1 ;
    ;
    break;}
case 338:
#line 3858 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 339:
#line 3861 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 340:
#line 3869 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 341:
#line 3872 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 342:
#line 3877 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 343:
#line 3882 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 344:
#line 3887 "yacc.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 345:
#line 3897 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 346:
#line 3906 "yacc.y"
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
case 347:
#line 3943 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 348:
#line 3950 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 349:
#line 3953 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 350:
#line 3965 "yacc.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 351:
#line 3975 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 352:
#line 3981 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 353:
#line 3984 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 354:
#line 3996 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 355:
#line 4004 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 356:
#line 4015 "yacc.y"
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
case 357:
#line 4031 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 358:
#line 4038 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 359:
#line 4044 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 360:
#line 4050 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 361:
#line 4056 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 362:
#line 4064 "yacc.y"
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
case 363:
#line 4080 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 364:
#line 4087 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 365:
#line 4093 "yacc.y"
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
case 366:
#line 4104 "yacc.y"
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
case 367:
#line 4115 "yacc.y"
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
case 368:
#line 4131 "yacc.y"
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
case 369:
#line 4143 "yacc.y"
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
case 370:
#line 4165 "yacc.y"
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
case 371:
#line 4187 "yacc.y"
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
case 372:
#line 4200 "yacc.y"
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
case 373:
#line 4213 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 375:
#line 4222 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 377:
#line 4231 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 378:
#line 4245 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 379:
#line 4254 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 380:
#line 4264 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 382:
#line 4274 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 383:
#line 4277 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 384:
#line 4286 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 385:
#line 4299 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 387:
#line 4315 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 388:
#line 4319 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 389:
#line 4323 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 390:
#line 4327 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 391:
#line 4332 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 392:
#line 4343 "yacc.y"
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
case 394:
#line 4360 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 395:
#line 4364 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 396:
#line 4368 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 397:
#line 4372 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 398:
#line 4376 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 399:
#line 4381 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 400:
#line 4392 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 402:
#line 4407 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 403:
#line 4411 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 404:
#line 4415 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 405:
#line 4419 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 406:
#line 4424 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 407:
#line 4435 "yacc.y"
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
case 409:
#line 4453 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 410:
#line 4457 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 411:
#line 4461 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 412:
#line 4465 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 413:
#line 4470 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 414:
#line 4480 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 415:
#line 4486 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 416:
#line 4492 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 417:
#line 4502 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 418:
#line 4505 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 419:
#line 4510 "yacc.y"
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
case 421:
#line 4528 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 422:
#line 4537 "yacc.y"
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
case 423:
#line 4566 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 424:
#line 4569 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 425:
#line 4572 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 426:
#line 4580 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 427:
#line 4595 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 429:
#line 4607 "yacc.y"
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
case 431:
#line 4630 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 433:
#line 4644 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 434:
#line 4651 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 435:
#line 4659 "yacc.y"
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
case 436:
#line 4705 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 437:
#line 4710 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 438:
#line 4716 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 439:
#line 4719 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 440:
#line 4724 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.Type = NONCUMULATIVE ;
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 442:
#line 4736 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 443:
#line 4739 "yacc.y"
{ PostQuantity_S.Type =
	Get_DefineForString(PostQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of PostQuantity: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(PostQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 444:
#line 4748 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 445:
#line 4754 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 446:
#line 4759 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 447:
#line 4765 "yacc.y"
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
case 448:
#line 4778 "yacc.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 450:
#line 4792 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 451:
#line 4799 "yacc.y"
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
case 452:
#line 4827 "yacc.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown Type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 453:
#line 4836 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 454:
#line 4837 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 455:
#line 4843 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 456:
#line 4852 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 457:
#line 4869 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 459:
#line 4881 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 461:
#line 4888 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 463:
#line 4900 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 464:
#line 4907 "yacc.y"
{ 
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, yyvsp[-1].c,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", yyvsp[-1].c) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &PostProcessing_S) ;
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 465:
#line 4919 "yacc.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 466:
#line 4929 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 467:
#line 4934 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 468:
#line 4940 "yacc.y"
{
      PostOperation_S.PostProcessingIndex = -1 ;
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      if ((i = List_ISearchSeq(Problem_S.PostProcessing, yyvsp[0].c,
			       fcmp_PostProcessing_Name)) < 0)
	vyyerror("Unknown PostProcessing: %s", yyvsp[0].c) ;
      else {
	PostOperation_S.PostProcessingIndex = i ;
	List_Read(Problem_S.PostProcessing, i, &PostProcessing_S) ;
	if (!Problem_S.PostOperation)
	  Problem_S.PostOperation = List_Create(5, 5, sizeof (struct PostOperation)) ;
	PostOperation_S.Name = yyvsp[-2].c ;
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 469:
#line 4957 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 470:
#line 4967 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 471:
#line 4970 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 472:
#line 4974 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 473:
#line 4985 "yacc.y"
{
      PostSubOperation_S.Type = POP_PLOT ;
    ;
    break;}
case 474:
#line 4990 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[-3].i) ;
    ;
    break;}
case 475:
#line 5002 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
      PostSubOperation_S.SubType = PLOT_WITHARGUMENT ;

      PostSubOperation_S.Case.WithArgument.RegionIndex = 
	Num_Group(&Group_S, "PO_On", yyvsp[-13].i) ;

      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-11].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;

      PostSubOperation_S.Case.WithArgument.ArgumentIndex = i ;
      PostSubOperation_S.Case.WithArgument.x[0] = yyvsp[-9].d ;
      PostSubOperation_S.Case.WithArgument.x[1] = yyvsp[-7].d ;
      PostSubOperation_S.Case.WithArgument.n = (int)yyvsp[-4].d ;
    ;
    break;}
case 476:
#line 5024 "yacc.y"
{
      if ((i = List_ISearchSeq(PostProcessing_S.PostQuantity, yyvsp[-1].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-1].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;
      PostSubOperation_S.PostQuantityIndex[1] = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 477:
#line 5034 "yacc.y"
{
      if ((i = List_ISearchSeq(PostProcessing_S.PostQuantity, yyvsp[-3].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-3].c) ;
      PostSubOperation_S.PostQuantityIndex[0] = i ;

      if ((j = List_ISearchSeq(PostProcessing_S.PostQuantity, yyvsp[-1].c, 
			       fcmp_PostQuantity_Name)) < 0)
	vyyerror("Unknown PostQuantity: %s", yyvsp[-1].c) ;
      PostSubOperation_S.PostQuantityIndex[1] = j ;

      if((k=((struct PostQuantity*)List_Pointer(PostProcessing_S.PostQuantity, i))->Type) == 
	 ((struct PostQuantity*)List_Pointer(PostProcessing_S.PostQuantity, j))->Type){
	vyyerror("PostQuantities '%s' and '%s' should not be of same type (%s)", 
		 yyvsp[-3].c, yyvsp[-1].c, Get_StringForDefine(PostQuantity_Type, k)) ;
      }      
      Free(yyvsp[-3].c) ; Free(yyvsp[-1].c) ;
    ;
    break;}
case 478:
#line 5056 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 479:
#line 5057 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 480:
#line 5058 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 481:
#line 5059 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 482:
#line 5065 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 483:
#line 5074 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONCUT_2D ;
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
case 484:
#line 5088 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 485:
#line 5096 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_PARAM ;
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
case 486:
#line 5109 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 487:
#line 5119 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 488:
#line 5128 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_1D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-14].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-12].d ;
      PostSubOperation_S.Case.OnGrid.x[1] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnGrid.y[1] = yyvsp[-7].d ;
      PostSubOperation_S.Case.OnGrid.z[1] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.n[0] = (int)yyvsp[-1].d ;
    ;
    break;}
case 489:
#line 5142 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_2D ;
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
case 490:
#line 5161 "yacc.y"
{
      PostSubOperation_S.SubType = PLOT_ONGRID_3D ;
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
case 491:
#line 5184 "yacc.y"
{ 
      PostSubOperation_S.FileOut = NULL ; 
      PostSubOperation_S.Depth = 1 ; 
      PostSubOperation_S.Smoothing = 0 ; 
      PostSubOperation_S.Skin = 0 ; 
      PostSubOperation_S.Dimension = _ALL ;
      PostSubOperation_S.HarmonicToTime = 1 ;
      PostSubOperation_S.TimeStep_L = List_Create(10,10,sizeof(int)); ;
    ;
    break;}
case 493:
#line 5198 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 494:
#line 5205 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 495:
#line 5212 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 496:
#line 5219 "yacc.y"
{ PostSubOperation_S.Depth = (int)yyvsp[0].d ; ;
    break;}
case 497:
#line 5221 "yacc.y"
{ PostSubOperation_S.Skin = 1 ; ;
    break;}
case 498:
#line 5223 "yacc.y"
{ PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; ;
    break;}
case 499:
#line 5225 "yacc.y"
{ PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; ;
    break;}
case 500:
#line 5227 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 501:
#line 5236 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 502:
#line 5241 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 503:
#line 5246 "yacc.y"
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
case 504:
#line 5266 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Plot") ;  	
    ;
    break;}
case 505:
#line 5273 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 506:
#line 5285 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 507:
#line 5291 "yacc.y"
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
case 508:
#line 5338 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 510:
#line 5349 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 511:
#line 5352 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 512:
#line 5358 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 513:
#line 5359 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 515:
#line 5367 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 516:
#line 5370 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 517:
#line 5379 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 518:
#line 5382 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 519:
#line 5393 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 520:
#line 5399 "yacc.y"
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
case 521:
#line 5418 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 522:
#line 5424 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 523:
#line 5430 "yacc.y"
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
case 524:
#line 5442 "yacc.y"
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
case 527:
#line 5493 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 528:
#line 5499 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 529:
#line 5505 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 530:
#line 5516 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 531:
#line 5517 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 532:
#line 5518 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 533:
#line 5519 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 534:
#line 5520 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 535:
#line 5521 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 536:
#line 5522 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 537:
#line 5523 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 538:
#line 5524 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 539:
#line 5525 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 540:
#line 5526 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 541:
#line 5527 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 542:
#line 5528 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 543:
#line 5529 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 544:
#line 5530 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 545:
#line 5531 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 546:
#line 5532 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 547:
#line 5533 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 548:
#line 5534 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 549:
#line 5535 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 550:
#line 5536 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 551:
#line 5539 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 552:
#line 5540 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 553:
#line 5541 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 554:
#line 5542 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 555:
#line 5543 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 556:
#line 5544 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 557:
#line 5545 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 558:
#line 5546 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 559:
#line 5547 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 560:
#line 5548 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 561:
#line 5549 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 562:
#line 5550 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 563:
#line 5551 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 564:
#line 5552 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 565:
#line 5553 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 566:
#line 5554 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 567:
#line 5555 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 568:
#line 5556 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 569:
#line 5557 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 570:
#line 5558 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 571:
#line 5559 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 572:
#line 5560 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 573:
#line 5561 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 574:
#line 5562 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 575:
#line 5563 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 576:
#line 5564 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 577:
#line 5565 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 578:
#line 5566 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 579:
#line 5567 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 580:
#line 5568 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 581:
#line 5569 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 582:
#line 5570 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 583:
#line 5571 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 584:
#line 5572 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 585:
#line 5573 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 586:
#line 5574 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 587:
#line 5575 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 588:
#line 5576 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 589:
#line 5577 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 590:
#line 5578 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 591:
#line 5583 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 592:
#line 5584 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 593:
#line 5585 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 594:
#line 5586 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 595:
#line 5587 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 596:
#line 5588 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 597:
#line 5589 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 598:
#line 5591 "yacc.y"
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
case 599:
#line 5610 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 600:
#line 5613 "yacc.y"
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
#line 498 "/usr/local/share/bison.simple"

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
}
#line 5629 "yacc.y"



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
  List_Tri(ListOfTwoInt_L, fcmp_int) ;
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


