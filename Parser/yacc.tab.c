
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
#define	tTimeLoopTheta	379
#define	tTime0	380
#define	tTimeMax	381
#define	tTheta	382
#define	tTimeLoopNewmark	383
#define	tBeta	384
#define	tGamma	385
#define	tIterativeLoop	386
#define	tNbrMaxIteration	387
#define	tRelaxationFactor	388
#define	tIterativeTimeReduction	389
#define	tDivisionCoefficient	390
#define	tChangeOfState	391
#define	tChangeOfCoordinates	392
#define	tSystemCommand	393
#define	tPostProcessing	394
#define	tNameOfSystem	395
#define	tPostOperation	396
#define	tNameOfPostProcessing	397
#define	tUsingPost	398
#define	tAppend	399
#define	tPlot	400
#define	tPrint	401
#define	tWrite	402
#define	tAdapt	403
#define	tOnGlobal	404
#define	tOnRegion	405
#define	tOnElementsOf	406
#define	tOnGrid	407
#define	tOnCut	408
#define	tOnPoint	409
#define	tOnLine	410
#define	tOnPlane	411
#define	tOnBox	412
#define	tWithArgument	413
#define	tFile	414
#define	tDepth	415
#define	tDimension	416
#define	tTimeStep	417
#define	tHarmonicToTime	418
#define	tFormat	419
#define	tHeader	420
#define	tFooter	421
#define	tSkin	422
#define	tSmoothing	423
#define	tTarget	424
#define	tSort	425
#define	tIso	426
#define	tNoNewLine	427
#define	tFlag	428
#define	tBreak	429
#define	tHelp	430
#define	tCpu	431
#define	tDEF	432
#define	tAND	433
#define	tOR	434
#define	tNOTEQUAL	435
#define	tEQUAL	436
#define	tAPPROXEQUAL	437
#define	tLESSOREQUAL	438
#define	tGREATEROREQUAL	439
#define	tLESSLESS	440
#define	tGREATERGREATER	441
#define	tCROSSPRODUCT	442
#define	UNARYPREC	443

#line 1 "yacc.y"

/* $Id: yacc.tab.c,v 1.35 2000-12-08 12:04:13 dular Exp $ */

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


#line 179 "yacc.y"
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



#define	YYFINAL		1579
#define	YYFLAG		-32768
#define	YYNTBASE	210

#define YYTRANSLATE(x) ((unsigned)(x) <= 443 ? yytranslate[x] : 395)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   198,     2,   200,   201,   195,     2,     2,   207,
   208,   193,   191,   206,   192,   209,   194,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   185,
     2,   186,   179,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   204,     2,   205,   199,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   202,     2,   203,     2,     2,     2,     2,     2,
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
   177,   178,   180,   181,   182,   183,   184,   187,   188,   189,
   190,   196,   197
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
   794,   797,   801,   805,   810,   815,   823,   827,   831,   835,
   836,   837,   838,   857,   858,   863,   864,   867,   871,   875,
   879,   881,   885,   886,   890,   892,   896,   897,   901,   902,
   907,   908,   911,   915,   919,   923,   924,   929,   930,   933,
   937,   943,   947,   951,   956,   957,   960,   964,   966,   967,
   970,   974,   979,   983,   988,   993,   994,   999,  1000,  1003,
  1007,  1011,  1015,  1019,  1020,  1027,  1031,  1032,  1038,  1042,
  1046,  1050,  1054,  1055,  1059,  1060,  1063,  1068,  1073,  1078,
  1083,  1084,  1087,  1091,  1095,  1099,  1100,  1103,  1107,  1111,
  1115,  1119,  1120,  1123,  1124,  1125,  1135,  1139,  1143,  1147,
  1148,  1151,  1155,  1156,  1157,  1167,  1168,  1170,  1172,  1174,
  1176,  1178,  1180,  1185,  1189,  1190,  1193,  1197,  1199,  1200,
  1203,  1207,  1212,  1217,  1218,  1224,  1225,  1230,  1231,  1234,
  1238,  1242,  1246,  1250,  1254,  1258,  1262,  1266,  1269,  1273,
  1274,  1278,  1280,  1284,  1285,  1289,  1290,  1293,  1297,  1301,
  1306,  1311,  1316,  1321,  1327,  1333,  1336,  1344,  1356,  1364,
  1372,  1382,  1394,  1408,  1424,  1425,  1433,  1434,  1442,  1450,
  1454,  1456,  1458,  1459,  1462,  1466,  1470,  1473,  1474,  1477,
  1481,  1485,  1489,  1493,  1498,  1499,  1502,  1506,  1510,  1514,
  1518,  1522,  1527,  1528,  1531,  1535,  1539,  1543,  1547,  1552,
  1553,  1556,  1560,  1564,  1568,  1572,  1576,  1581,  1586,  1591,
  1592,  1597,  1598,  1601,  1605,  1609,  1613,  1617,  1621,  1625,
  1626,  1629,  1633,  1635,  1636,  1639,  1643,  1648,  1653,  1657,
  1662,  1663,  1668,  1669,  1672,  1676,  1681,  1682,  1688,  1694,
  1695,  1698,  1699,  1706,  1710,  1711,  1716,  1720,  1724,  1725,
  1728,  1732,  1734,  1735,  1738,  1742,  1746,  1750,  1754,  1759,
  1760,  1769,  1770,  1771,  1775,  1783,  1791,  1795,  1802,  1804,
  1806,  1808,  1810,  1811,  1815,  1817,  1820,  1823,  1848,  1851,
  1852,  1867,  1876,  1897,  1927,  1966,  1979,  1980,  1983,  1987,
  1992,  1997,  2001,  2004,  2008,  2012,  2016,  2020,  2024,  2028,
  2032,  2036,  2040,  2044,  2048,  2052,  2056,  2062,  2065,  2069,
  2070,  2073,  2074,  2078,  2080,  2084,  2085,  2087,  2091,  2093,
  2095,  2099,  2103,  2107,  2114,  2119,  2124,  2131,  2141,  2147,
  2148,  2152,  2158,  2164,  2166,  2168,  2170,  2172,  2174,  2176,
  2178,  2180,  2182,  2184,  2186,  2188,  2190,  2192,  2194,  2196,
  2198,  2200,  2202,  2204,  2206,  2208,  2212,  2215,  2218,  2222,
  2226,  2230,  2234,  2238,  2242,  2246,  2250,  2254,  2258,  2262,
  2266,  2270,  2274,  2279,  2284,  2289,  2294,  2299,  2304,  2309,
  2314,  2319,  2324,  2331,  2336,  2341,  2346,  2351,  2356,  2361,
  2368,  2375,  2382,  2388,  2391,  2393,  2395,  2397,  2399,  2401,
  2403,  2405,  2407,  2409,  2411
};

static const short yyrhs[] = {    -1,
   211,   212,     0,     0,     0,   212,   213,   214,     0,    43,
   202,   217,   203,     0,    79,   202,   237,   203,     0,    50,
   202,   269,   203,     0,    63,   202,   254,   203,     0,    65,
   202,   260,   203,     0,    75,   202,   276,   203,     0,    90,
   202,   299,   203,     0,   107,   202,   325,   203,     0,   140,
   202,   355,   203,     0,   142,   202,   367,   203,     0,   371,
     0,   389,     0,    10,   394,     0,   215,     0,   176,     7,
     0,   176,     5,     7,     0,   176,     5,     5,     7,     0,
   176,     5,     5,     5,     7,     0,   177,     7,     0,     0,
   216,   375,     0,     0,     0,   217,   218,   219,     0,     5,
   178,   221,     7,     0,     5,   236,   178,   221,     7,     0,
     0,     5,   234,   178,   220,   221,     7,     0,    44,   204,
   232,   205,     7,     0,   389,     0,     0,     0,   225,   204,
   222,   226,   223,   227,   205,     0,   200,   229,     0,   221,
     0,     5,   235,     0,    51,     0,     5,     0,   229,     0,
    45,     0,     0,   233,   228,   229,     0,   233,    46,     5,
   235,     0,     5,     0,   231,     0,   202,   230,   203,     0,
     0,   230,   233,   231,     0,   230,   233,   192,   231,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   204,   392,
   205,     3,     0,     5,     0,     5,   202,   392,   203,     0,
     5,   202,   203,     0,     0,   232,   233,     5,     0,   232,
   233,     5,   202,   392,   203,     0,     0,   206,     0,   202,
   200,   392,   203,     0,     0,   202,   203,     0,   202,   392,
   203,     0,     0,   237,   238,     0,    47,   204,   239,   205,
     7,     0,     5,   204,   205,   178,   240,     7,     0,     5,
   204,   224,   205,   178,   240,     7,     0,   389,     0,     0,
   239,   233,     5,     0,    11,   204,   392,   205,     0,    79,
   204,     5,   205,     0,     0,   241,   242,     0,     0,   243,
   244,     0,   247,     0,     0,     0,   244,   179,   245,   244,
     8,   246,   244,     0,   244,   193,   244,     0,   244,   196,
   244,     0,    41,   204,   244,   206,   244,   205,     0,   244,
   194,   244,     0,   244,   191,   244,     0,   244,   192,   244,
     0,   244,   195,   244,     0,   244,   199,   244,     0,   244,
   185,   244,     0,   244,   186,   244,     0,   244,   187,   244,
     0,   244,   188,   244,     0,   244,   183,   244,     0,   244,
   182,   244,     0,   244,   184,   244,     0,   244,   180,   244,
     0,   244,   181,   244,     0,   192,   244,     0,   191,   244,
     0,   198,   244,     0,   207,   244,   208,     0,   393,     0,
   391,   251,   253,     0,     5,   324,     0,   324,     0,   324,
   251,     0,     0,   100,   248,   204,   242,   205,     0,     0,
    42,   249,   204,     3,   206,   392,   206,   242,   206,   242,
   205,     0,    38,   204,   324,   205,     0,    40,   204,   324,
   205,     0,     0,    39,   250,   204,   242,   206,   224,   205,
     0,   185,     5,   186,   204,   242,   205,     0,   201,     5,
     0,   201,   163,     0,   201,   118,     0,   201,     3,     0,
   247,   200,     3,     0,   200,     3,     0,   204,   209,   205,
     0,   204,   205,     0,   204,   252,   205,     0,   244,     0,
   252,   206,   244,     0,     0,   202,   387,   203,     0,   202,
    51,   204,   224,   205,   203,     0,   202,    48,   204,     5,
   205,   203,     0,     0,   254,   202,   255,   203,     0,     0,
   255,   256,     0,    76,     5,     7,     0,    64,   202,   257,
   203,     0,     0,   257,   202,   258,   203,     0,     0,   258,
   259,     0,    51,   224,     7,     0,    51,    45,     7,     0,
    63,     5,   253,     7,     0,     0,   260,   202,   261,   203,
     0,     0,   261,   262,     0,    76,     5,     7,     0,    68,
   240,     7,     0,    64,   202,   263,   203,     0,     0,   263,
   202,   264,   203,     0,     0,   264,   265,     0,    66,     5,
     7,     0,    67,     5,     7,     0,    64,   202,   266,   203,
     0,     0,   266,   202,   267,   203,     0,     0,   267,   268,
     0,    69,     5,     7,     0,    70,   392,     7,     0,    71,
   392,     7,     0,    72,   392,     7,     0,    73,   392,     7,
     0,    74,   392,     7,     0,     0,   269,   270,     0,   202,
   271,   203,     0,   389,     0,     0,   271,   272,     0,    76,
     5,     7,     0,    76,     5,   234,     7,     0,    66,     5,
     7,     0,    64,   202,   273,   203,     0,    64,     5,   202,
   273,   203,     0,     0,   273,   202,   274,   203,     0,     0,
   274,   275,     0,    66,     5,     7,     0,    51,   224,     7,
     0,    52,   224,     7,     0,    58,   240,     7,     0,    57,
   240,     7,     0,    62,     5,     7,     0,    59,   202,     3,
   233,     3,   203,     7,     0,    53,   224,     7,     0,    54,
   224,     7,     0,    79,   240,     7,     0,    56,   240,     7,
     0,    55,   240,     7,     0,    79,   204,   240,   206,   240,
   205,     7,     0,    56,   204,   240,   206,   240,   205,     7,
     0,    55,   204,   240,   206,   240,   205,     7,     0,     0,
   276,   277,     0,   202,   278,   203,     0,   389,     0,     0,
   278,   279,     0,    76,     5,     7,     0,    76,     5,   234,
     7,     0,    66,     5,     7,     0,    77,   202,   280,   203,
     0,    84,   202,   286,   203,     0,    86,   202,   293,   203,
     0,    50,   202,   296,   203,     0,     0,   280,   202,   281,
   203,     0,     0,   281,   282,     0,    76,     5,     7,     0,
    78,     5,     7,     0,    78,     5,   234,     7,     0,    79,
     5,   283,     7,     0,    80,   202,     5,   233,     5,   203,
     7,     0,    81,   384,     7,     0,    82,   224,     7,     0,
    83,   224,     7,     0,     0,     0,     0,   202,    91,     5,
     7,    90,     5,   234,     7,   284,    43,   224,     7,   285,
   107,     5,   235,     7,   203,     0,     0,   286,   202,   287,
   203,     0,     0,   287,   288,     0,    76,     5,     7,     0,
    85,   289,     7,     0,    78,   291,     7,     0,     5,     0,
   202,   290,   203,     0,     0,   290,   233,     5,     0,     5,
     0,   202,   292,   203,     0,     0,   292,   233,     5,     0,
     0,   293,   202,   294,   203,     0,     0,   294,   295,     0,
    76,     5,     7,     0,    66,     5,     7,     0,    78,     5,
     7,     0,     0,   296,   202,   297,   203,     0,     0,   297,
   298,     0,    78,     5,     7,     0,    83,   225,    89,     5,
     7,     0,    87,   225,     7,     0,    88,   228,     7,     0,
    89,     5,   235,     7,     0,     0,   299,   300,     0,   202,
   301,   203,     0,   389,     0,     0,   301,   302,     0,    76,
     5,     7,     0,    76,     5,   234,     7,     0,    66,     5,
     7,     0,    91,   202,   303,   203,     0,    95,   202,   309,
   203,     0,     0,   303,   202,   304,   203,     0,     0,   304,
   305,     0,    76,     5,     7,     0,    66,    86,     7,     0,
    66,    96,     7,     0,    66,     5,     7,     0,     0,    92,
     5,   235,   306,   308,     7,     0,    93,     3,     7,     0,
     0,   204,   307,   242,   205,     7,     0,   106,   224,     7,
     0,    65,     5,     7,     0,    63,     5,     7,     0,    94,
     3,     7,     0,     0,   204,     5,   205,     0,     0,   309,
   310,     0,    96,   202,   315,   203,     0,    97,   202,   315,
   203,     0,    98,   202,   319,   203,     0,    99,   202,   311,
   203,     0,     0,   311,   312,     0,    66,     5,     7,     0,
    89,     5,     7,     0,   202,   313,   203,     0,     0,   313,
   314,     0,    60,   324,     7,     0,    61,   324,     7,     0,
    95,   324,     7,     0,   106,   224,     7,     0,     0,   315,
   316,     0,     0,     0,   323,   204,   317,   242,   318,   206,
   242,   205,     7,     0,   106,   224,     7,     0,    63,     5,
     7,     0,    65,     5,     7,     0,     0,   319,   320,     0,
   106,   224,     7,     0,     0,     0,   323,   204,   321,   242,
   322,   206,   324,   205,     7,     0,     0,   100,     0,   101,
     0,   102,     0,   103,     0,   104,     0,   105,     0,   202,
     5,     5,   203,     0,   202,     5,   203,     0,     0,   325,
   326,     0,   202,   327,   203,     0,   389,     0,     0,   327,
   328,     0,    76,     5,     7,     0,    76,     5,   234,     7,
     0,   108,   202,   330,   203,     0,     0,   115,   329,   202,
   337,   203,     0,     0,   330,   202,   331,   203,     0,     0,
   331,   332,     0,    76,     5,     7,     0,    66,     5,     7,
     0,   109,   333,     7,     0,   110,   394,     7,     0,   113,
   335,     7,     0,   114,     5,     7,     0,   111,   386,     7,
     0,   112,   394,     7,     0,     5,   235,     0,   202,   334,
   203,     0,     0,   334,   233,     5,     0,     5,     0,   202,
   336,   203,     0,     0,   336,   233,     5,     0,     0,   337,
   338,     0,     5,     5,     7,     0,   117,   240,     7,     0,
   125,   202,   344,   203,     0,   129,   202,   346,   203,     0,
   132,   202,   348,   203,     0,   135,   202,   350,   203,     0,
     5,   204,     5,   205,     7,     0,   117,   204,   240,   205,
     7,     0,   175,     7,     0,   121,   204,   240,   205,   202,
   337,   203,     0,   121,   204,   240,   205,   202,   337,   203,
   122,   202,   337,   203,     0,   119,   204,     5,   206,   240,
   205,     7,     0,   124,   204,     5,   206,   240,   205,     7,
     0,   120,   204,     5,   206,     5,   206,   386,   205,     7,
     0,   123,   204,     5,   206,   392,   206,   386,   206,   392,
   205,     7,     0,   125,   204,   392,   206,   392,   206,   240,
   206,   240,   205,   202,   337,   203,     0,   129,   204,   392,
   206,   392,   206,   240,   206,   392,   206,   392,   205,   202,
   337,   203,     0,     0,   147,   339,   204,   341,   342,   205,
     7,     0,     0,   148,   340,   204,   341,   342,   205,     7,
     0,   138,   204,   224,   206,   240,   205,     7,     0,   139,
     6,     7,     0,   384,     0,     5,     0,     0,   342,   343,
     0,   206,   160,   394,     0,   206,   163,   386,     0,   206,
   386,     0,     0,   344,   345,     0,   126,   392,     7,     0,
   127,   392,     7,     0,   118,   240,     7,     0,   128,   240,
     7,     0,   115,   202,   337,   203,     0,     0,   346,   347,
     0,   126,   392,     7,     0,   127,   392,     7,     0,   118,
   240,     7,     0,   130,   392,     7,     0,   131,   392,     7,
     0,   115,   202,   337,   203,     0,     0,   348,   349,     0,
   133,   392,     7,     0,   134,   240,     7,     0,    68,   392,
     7,     0,   174,   392,     7,     0,   115,   202,   337,   203,
     0,     0,   350,   351,     0,   133,   392,     7,     0,   136,
   392,     7,     0,    68,   392,     7,     0,   174,   392,     7,
     0,   108,     5,     7,     0,   137,   202,   352,   203,     0,
   115,   202,   337,   203,     0,   116,   202,   337,   203,     0,
     0,   352,   202,   353,   203,     0,     0,   353,   354,     0,
    66,     5,     7,     0,    91,     5,     7,     0,   106,   224,
     7,     0,    68,   392,     7,     0,    79,   240,     7,     0,
   174,     5,     7,     0,     0,   355,   356,     0,   202,   357,
   203,     0,   389,     0,     0,   357,   358,     0,    76,     5,
     7,     0,    76,     5,   234,     7,     0,   109,     5,   235,
     7,     0,   141,     5,     7,     0,    91,   202,   359,   203,
     0,     0,   359,   202,   360,   203,     0,     0,   360,   361,
     0,    76,     5,     7,     0,    57,   202,   362,   203,     0,
     0,   362,    96,   202,   363,   203,     0,   362,     5,   202,
   363,   203,     0,     0,   363,   364,     0,     0,   323,   204,
   365,   242,   205,     7,     0,    66,     5,     7,     0,     0,
   106,   366,   224,     7,     0,    63,     5,     7,     0,    65,
     5,     7,     0,     0,   367,   368,     0,   202,   369,   203,
     0,   389,     0,     0,   369,   370,     0,    76,     5,     7,
     0,   143,     5,     7,     0,   165,     5,     7,     0,   145,
   394,     7,     0,   115,   202,   373,   203,     0,     0,   142,
     5,   144,     5,   372,   202,   373,   203,     0,     0,     0,
   373,   374,   375,     0,   146,   204,   376,   379,   381,   205,
     7,     0,   147,   204,   376,   379,   381,   205,     7,     0,
     5,   378,   206,     0,     5,   378,   377,     5,   378,   206,
     0,   193,     0,   194,     0,   191,     0,   192,     0,     0,
   204,   224,   205,     0,   150,     0,   151,   224,     0,   152,
   224,     0,   154,   202,   202,   392,   206,   392,   206,   392,
   203,   202,   392,   206,   392,   206,   392,   203,   202,   392,
   206,   392,   206,   392,   203,   203,     0,   153,   224,     0,
     0,   153,   202,   240,   206,   240,   206,   240,   203,   202,
   386,   380,   206,   386,   203,     0,   155,   202,   392,   206,
   392,   206,   392,   203,     0,   156,   202,   202,   392,   206,
   392,   206,   392,   203,   202,   392,   206,   392,   206,   392,
   203,   203,   202,   392,   203,     0,   157,   202,   202,   392,
   206,   392,   206,   392,   203,   202,   392,   206,   392,   206,
   392,   203,   202,   392,   206,   392,   206,   392,   203,   203,
   202,   392,   206,   392,   203,     0,   158,   202,   202,   392,
   206,   392,   206,   392,   203,   202,   392,   206,   392,   206,
   392,   203,   202,   392,   206,   392,   206,   392,   203,   202,
   392,   206,   392,   206,   392,   203,   203,   202,   392,   206,
   392,   206,   392,   203,     0,   151,   224,   159,     5,   202,
   392,   206,   392,   203,   202,   392,   203,     0,     0,   381,
   382,     0,   206,   160,   394,     0,   206,   160,   186,   394,
     0,   206,   160,   190,   394,     0,   206,   161,   392,     0,
   206,   168,     0,   206,   169,   392,     0,   206,   164,   392,
     0,   206,   165,     5,     0,   206,   166,   383,     0,   206,
   167,   383,     0,   206,   165,   383,     0,   206,   162,   392,
     0,   206,   163,   386,     0,   206,   149,     5,     0,   206,
   171,     5,     0,   206,   170,   392,     0,   206,    57,   386,
     0,   206,   172,   392,     0,   206,   172,   202,   387,   203,
     0,   206,   173,     0,   206,   111,   386,     0,     0,   383,
     6,     0,     0,   202,   385,   203,     0,   240,     0,   385,
   206,   240,     0,     0,   392,     0,   202,   387,   203,     0,
   392,     0,   388,     0,   387,   206,   392,     0,   387,   206,
   388,     0,   392,     8,   392,     0,   392,     8,   204,   392,
   205,   392,     0,     5,   178,   392,     7,     0,     5,   178,
     6,     7,     0,     5,   178,   202,   387,   203,     7,     0,
     5,   178,    49,   204,     5,   206,     5,   205,     7,     0,
    12,   204,   390,   205,     7,     0,     0,   390,   233,     5,
     0,   390,   233,     5,   178,   392,     0,   390,   233,     5,
   178,     6,     0,    18,     0,    19,     0,    20,     0,    21,
     0,    22,     0,    23,     0,    24,     0,    25,     0,    26,
     0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
     0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
     0,    37,     0,     5,     0,   393,     0,   207,   392,   208,
     0,   192,   392,     0,   198,   392,     0,   392,   192,   392,
     0,   392,   191,   392,     0,   392,   193,   392,     0,   392,
   194,   392,     0,   392,   195,   392,     0,   392,   199,   392,
     0,   392,   185,   392,     0,   392,   186,   392,     0,   392,
   187,   392,     0,   392,   188,   392,     0,   392,   183,   392,
     0,   392,   182,   392,     0,   392,   180,   392,     0,   392,
   181,   392,     0,    18,   204,   392,   205,     0,    19,   204,
   392,   205,     0,    20,   204,   392,   205,     0,    21,   204,
   392,   205,     0,    22,   204,   392,   205,     0,    23,   204,
   392,   205,     0,    24,   204,   392,   205,     0,    25,   204,
   392,   205,     0,    26,   204,   392,   205,     0,    27,   204,
   392,   205,     0,    28,   204,   392,   206,   392,   205,     0,
    29,   204,   392,   205,     0,    30,   204,   392,   205,     0,
    31,   204,   392,   205,     0,    32,   204,   392,   205,     0,
    33,   204,   392,   205,     0,    34,   204,   392,   205,     0,
    35,   204,   392,   206,   392,   205,     0,    36,   204,   392,
   206,   392,   205,     0,    37,   204,   392,   206,   392,   205,
     0,   392,   179,   392,     8,   392,     0,   392,   200,     0,
     4,     0,     3,     0,    13,     0,    14,     0,    15,     0,
    16,     0,    17,     0,     5,     0,     6,     0,     5,     0,
     9,   204,   394,   206,   394,   205,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   312,   349,   387,   390,   393,   396,   399,   400,   401,   402,
   403,   404,   405,   406,   407,   409,   411,   413,   418,   427,
   431,   434,   437,   440,   442,   450,   464,   467,   468,   471,
   476,   479,   481,   484,   486,   490,   498,   509,   518,   527,
   534,   569,   574,   584,   587,   601,   606,   609,   658,   670,
   696,   701,   716,   734,   755,   761,   770,   784,   818,   831,
   851,   855,   865,   882,   882,   885,   891,   894,   897,   907,
   910,   913,   917,   937,   981,   985,   988,  1005,  1014,  1021,
  1024,  1030,  1036,  1043,  1047,  1060,  1075,  1089,  1095,  1101,
  1107,  1113,  1119,  1125,  1131,  1137,  1143,  1149,  1155,  1161,
  1167,  1173,  1179,  1185,  1192,  1198,  1200,  1209,  1213,  1219,
  1297,  1331,  1341,  1354,  1356,  1367,  1369,  1385,  1391,  1397,
  1399,  1428,  1452,  1463,  1469,  1476,  1482,  1493,  1507,  1510,
  1511,  1514,  1517,  1520,  1525,  1527,  1534,  1559,  1566,  1571,
  1576,  1580,  1587,  1592,  1597,  1602,  1608,  1612,  1617,  1620,
  1649,  1657,  1662,  1671,  1675,  1684,  1687,  1692,  1697,  1702,
  1710,  1714,  1725,  1734,  1739,  1744,  1749,  1761,  1765,  1820,
  1823,  1826,  1829,  1832,  1841,  1848,  1851,  1873,  1876,  1886,
  1890,  1898,  1905,  1913,  1916,  1936,  1953,  1975,  1985,  1989,
  2000,  2024,  2049,  2054,  2062,  2070,  2080,  2096,  2103,  2109,
  2115,  2123,  2131,  2139,  2157,  2165,  2168,  2191,  2195,  2204,
  2208,  2216,  2223,  2231,  2234,  2237,  2240,  2245,  2263,  2310,
  2326,  2330,  2335,  2340,  2345,  2357,  2373,  2382,  2406,  2461,
  2465,  2469,  2478,  2542,  2548,  2553,  2558,  2562,  2569,  2572,
  2577,  2595,  2600,  2604,  2621,  2635,  2640,  2644,  2657,  2663,
  2670,  2677,  2681,  2688,  2697,  2708,  2725,  2797,  2809,  2813,
  2833,  2847,  2850,  2853,  2897,  2904,  2907,  2929,  2933,  2941,
  2945,  2953,  2960,  2969,  2971,  2976,  2991,  3007,  3024,  3028,
  3033,  3037,  3040,  3049,  3088,  3112,  3117,  3123,  3273,  3278,
  3287,  3296,  3301,  3304,  3342,  3359,  3385,  3390,  3393,  3396,
  3401,  3409,  3412,  3423,  3433,  3445,  3454,  3457,  3461,  3463,
  3465,  3471,  3489,  3493,  3504,  3565,  3611,  3635,  3644,  3656,
  3673,  3677,  3711,  3720,  3774,  3790,  3793,  3794,  3795,  3796,
  3797,  3798,  3802,  3818,  3834,  3841,  3844,  3865,  3869,  3877,
  3881,  3890,  3897,  3900,  3902,  3907,  3923,  3940,  3955,  3959,
  3964,  3972,  3975,  3980,  3985,  3990,  4000,  4007,  4046,  4051,
  4056,  4066,  4078,  4082,  4087,  4098,  4107,  4114,  4134,  4141,
  4147,  4153,  4159,  4167,  4183,  4190,  4196,  4207,  4218,  4234,
  4246,  4268,  4289,  4302,  4316,  4323,  4325,  4332,  4334,  4344,
  4354,  4364,  4374,  4380,  4383,  4387,  4396,  4407,  4419,  4423,
  4429,  4433,  4437,  4442,  4451,  4464,  4468,  4474,  4478,  4482,
  4486,  4491,  4500,  4512,  4515,  4521,  4525,  4529,  4534,  4543,
  4558,  4561,  4567,  4571,  4575,  4580,  4590,  4596,  4602,  4611,
  4615,  4619,  4633,  4636,  4647,  4676,  4679,  4682,  4690,  4704,
  4712,  4715,  4736,  4739,  4750,  4753,  4761,  4769,  4815,  4820,
  4825,  4829,  4833,  4840,  4844,  4848,  4853,  4859,  4865,  4877,
  4888,  4891,  4899,  4927,  4937,  4937,  4943,  4952,  4968,  4976,
  4979,  4984,  4987,  4996,  4999,  5007,  5019,  5029,  5034,  5039,
  5057,  5066,  5070,  5075,  5083,  5091,  5098,  5112,  5134,  5137,
  5138,  5139,  5142,  5146,  5150,  5158,  5165,  5172,  5188,  5195,
  5209,  5219,  5227,  5240,  5258,  5282,  5302,  5321,  5324,  5332,
  5339,  5346,  5350,  5354,  5358,  5362,  5371,  5376,  5381,  5401,
  5408,  5415,  5423,  5431,  5438,  5445,  5449,  5457,  5461,  5472,
  5479,  5525,  5531,  5535,  5540,  5545,  5548,  5549,  5553,  5558,
  5567,  5570,  5579,  5587,  5604,  5612,  5618,  5630,  5674,  5678,
  5681,  5687,  5693,  5704,  5706,  5707,  5708,  5709,  5710,  5711,
  5712,  5713,  5714,  5715,  5716,  5717,  5718,  5719,  5720,  5721,
  5722,  5723,  5724,  5725,  5727,  5729,  5730,  5731,  5732,  5733,
  5734,  5735,  5736,  5737,  5738,  5739,  5740,  5741,  5742,  5743,
  5744,  5745,  5746,  5747,  5748,  5749,  5750,  5751,  5752,  5753,
  5754,  5755,  5756,  5757,  5758,  5759,  5760,  5761,  5762,  5763,
  5764,  5765,  5766,  5767,  5770,  5773,  5774,  5775,  5776,  5777,
  5778,  5779,  5796,  5801,  5816
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
"tFunction","tdFunction","tSubFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction",
"tGlobalQuantity","tEntityType","tEntitySubType","tNameOfConstraint","tFormulation",
"tQuantity","tNameOfSpace","tIndexOfSystem","tSymmetry","tEquation","tGalerkin",
"tdeRham","tGlobalTerm","tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof",
"tJacNL","tNeverDt","tIn","tResolution","tDefineSystem","tNameOfFormulation",
"tNameOfMesh","tFrequency","tSolver","tOriginSystem","tDestinationSystem","tOperation",
"tOperationEnd","tSetTime","tDTime","tSetFrequency","tFourierTransform","tIf",
"tElse","tLanczos","tUpdate","tTimeLoopTheta","tTime0","tTimeMax","tTheta","tTimeLoopNewmark",
"tBeta","tGamma","tIterativeLoop","tNbrMaxIteration","tRelaxationFactor","tIterativeTimeReduction",
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
"PostSubOperation","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","@30","PrintOptions","PrintOption","ParsedStrings","ListOfExpression",
"RecursiveListOfExpression","ListOfDouble","RecursiveListOfDouble","DottedFExpr",
"Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   211,   210,   212,   213,   212,   214,   214,   214,   214,   214,
   214,   214,   214,   214,   214,   214,   214,   214,   214,   215,
   215,   215,   215,   215,   216,   215,   217,   218,   217,   219,
   219,   220,   219,   219,   219,   222,   223,   221,   221,   224,
   224,   225,   225,   226,   226,   227,   227,   227,   228,   229,
   229,   230,   230,   230,   231,   231,   231,   231,   231,   231,
   232,   232,   232,   233,   233,   234,   235,   235,   236,   237,
   237,   238,   238,   238,   238,   239,   239,   240,   240,   241,
   240,   243,   242,   244,   245,   246,   244,   244,   244,   244,
   244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
   244,   244,   244,   244,   244,   244,   244,   247,   247,   247,
   247,   247,   247,   248,   247,   249,   247,   247,   247,   250,
   247,   247,   247,   247,   247,   247,   247,   247,   251,   251,
   251,   252,   252,   253,   253,   253,   253,   254,   254,   255,
   255,   256,   256,   257,   257,   258,   258,   259,   259,   259,
   260,   260,   261,   261,   262,   262,   262,   263,   263,   264,
   264,   265,   265,   265,   266,   266,   267,   267,   268,   268,
   268,   268,   268,   268,   269,   269,   270,   270,   271,   271,
   272,   272,   272,   272,   272,   273,   273,   274,   274,   275,
   275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
   275,   275,   275,   275,   276,   276,   277,   277,   278,   278,
   279,   279,   279,   279,   279,   279,   279,   280,   280,   281,
   281,   282,   282,   282,   282,   282,   282,   282,   282,   283,
   284,   285,   283,   286,   286,   287,   287,   288,   288,   288,
   289,   289,   290,   290,   291,   291,   292,   292,   293,   293,
   294,   294,   295,   295,   295,   296,   296,   297,   297,   298,
   298,   298,   298,   298,   299,   299,   300,   300,   301,   301,
   302,   302,   302,   302,   302,   303,   303,   304,   304,   305,
   305,   305,   305,   306,   305,   305,   307,   305,   305,   305,
   305,   305,   308,   308,   309,   309,   310,   310,   310,   310,
   311,   311,   312,   312,   312,   313,   313,   314,   314,   314,
   314,   315,   315,   317,   318,   316,   316,   316,   316,   319,
   319,   320,   321,   322,   320,   323,   323,   323,   323,   323,
   323,   323,   324,   324,   325,   325,   326,   326,   327,   327,
   328,   328,   328,   329,   328,   330,   330,   331,   331,   332,
   332,   332,   332,   332,   332,   332,   332,   333,   333,   334,
   334,   335,   335,   336,   336,   337,   337,   338,   338,   338,
   338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
   338,   338,   338,   338,   339,   338,   340,   338,   338,   338,
   341,   341,   342,   342,   343,   343,   343,   344,   344,   345,
   345,   345,   345,   345,   346,   346,   347,   347,   347,   347,
   347,   347,   348,   348,   349,   349,   349,   349,   349,   350,
   350,   351,   351,   351,   351,   351,   351,   351,   351,   352,
   352,   353,   353,   354,   354,   354,   354,   354,   354,   355,
   355,   356,   356,   357,   357,   358,   358,   358,   358,   358,
   359,   359,   360,   360,   361,   361,   362,   362,   362,   363,
   363,   365,   364,   364,   366,   364,   364,   364,   367,   367,
   368,   368,   369,   369,   370,   370,   370,   370,   370,   372,
   371,   373,   374,   373,   375,   375,   376,   376,   377,   377,
   377,   377,   378,   378,   379,   379,   379,   379,   379,   380,
   379,   379,   379,   379,   379,   379,   381,   381,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   383,
   383,   384,   384,   385,   385,   386,   386,   386,   387,   387,
   387,   387,   388,   388,   389,   389,   389,   389,   389,   390,
   390,   390,   390,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   393,   393,   393,   393,   393,   393,
   393,   393,   394,   394,   394
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
     2,     3,     3,     4,     4,     7,     3,     3,     3,     0,
     0,     0,    18,     0,     4,     0,     2,     3,     3,     3,
     1,     3,     0,     3,     1,     3,     0,     3,     0,     4,
     0,     2,     3,     3,     3,     0,     4,     0,     2,     3,
     5,     3,     3,     4,     0,     2,     3,     1,     0,     2,
     3,     4,     3,     4,     4,     0,     4,     0,     2,     3,
     3,     3,     3,     0,     6,     3,     0,     5,     3,     3,
     3,     3,     0,     3,     0,     2,     4,     4,     4,     4,
     0,     2,     3,     3,     3,     0,     2,     3,     3,     3,
     3,     0,     2,     0,     0,     9,     3,     3,     3,     0,
     2,     3,     0,     0,     9,     0,     1,     1,     1,     1,
     1,     1,     4,     3,     0,     2,     3,     1,     0,     2,
     3,     4,     4,     0,     5,     0,     4,     0,     2,     3,
     3,     3,     3,     3,     3,     3,     3,     2,     3,     0,
     3,     1,     3,     0,     3,     0,     2,     3,     3,     4,
     4,     4,     4,     5,     5,     2,     7,    11,     7,     7,
     9,    11,    13,    15,     0,     7,     0,     7,     7,     3,
     1,     1,     0,     2,     3,     3,     2,     0,     2,     3,
     3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     4,     0,
     2,     3,     3,     3,     3,     3,     4,     4,     4,     0,
     4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
     2,     3,     1,     0,     2,     3,     4,     4,     3,     4,
     0,     4,     0,     2,     3,     4,     0,     5,     5,     0,
     2,     0,     6,     3,     0,     4,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     3,     3,     3,     4,     0,
     8,     0,     0,     3,     7,     7,     3,     6,     1,     1,
     1,     1,     0,     3,     1,     2,     2,    24,     2,     0,
    14,     8,    20,    29,    38,    12,     0,     2,     3,     4,
     4,     3,     2,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     5,     2,     3,     0,
     2,     0,     3,     1,     3,     0,     1,     3,     1,     1,
     3,     3,     3,     6,     4,     4,     6,     9,     5,     0,
     3,     5,     5,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     4,     6,     4,     4,     4,     4,     4,     4,     6,
     6,     6,     5,     2,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   624,   623,     0,    18,   550,    27,
   175,   138,   151,   205,    70,   265,   335,   440,     0,   469,
     0,    20,    24,     0,     0,    26,   616,   615,   622,     0,
   617,   618,   619,   620,   621,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   575,     0,    64,    28,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    21,     0,     0,   546,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   577,   578,     0,   540,   539,     0,   545,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   614,     0,     0,    65,     0,     6,     0,
   179,     8,   176,   178,   140,     9,   153,    10,   209,    11,
   206,   208,     0,     0,     7,    71,    75,   269,    12,   266,
   268,   339,    13,   336,   338,   444,    14,   441,   443,   480,
   473,    15,   470,   472,     0,    22,   493,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   576,     0,   591,   592,   590,   589,   585,
   586,   587,   588,   580,   579,   581,   582,   583,   584,     0,
   549,   551,     0,     0,    29,    35,     0,     0,     0,     0,
     0,    76,     0,     0,     0,     0,     0,    23,     0,     0,
   495,     0,     0,     0,     0,     0,     0,     0,     0,   507,
   507,   593,   594,   595,   596,   597,   598,   599,   600,   601,
   602,     0,   604,   605,   606,   607,   608,   609,     0,     0,
     0,     0,   547,   542,   541,     0,   543,     0,     0,     0,
     0,     0,     0,     0,    61,     0,     0,     0,   177,   180,
     0,     0,   139,   141,     0,    80,     0,   152,   154,     0,
     0,     0,     0,     0,     0,   207,   210,    67,    42,     0,
     0,    40,     0,     0,    64,     0,     0,     0,     0,   267,
   270,     0,     0,   344,   337,   340,     0,     0,     0,     0,
   442,   445,   482,     0,     0,     0,     0,     0,   471,   474,
     0,   491,   492,   489,   490,   487,     0,   496,   497,    80,
   499,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   613,   625,   553,   552,   622,     0,
     0,     0,    32,     0,    64,     0,   186,     0,     0,   144,
     0,   158,     0,     0,     0,    82,     0,   256,     0,     0,
   218,   234,   249,     0,    41,    55,    58,    52,    39,    50,
    80,     0,    36,     0,     0,     0,     0,   276,   295,     0,
   346,     0,     0,   451,    67,     0,   483,     0,   482,     0,
     0,     0,   494,   493,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   508,     0,   603,   610,   611,   612,     0,
     0,    30,     0,    69,     0,    43,     0,     0,     0,   186,
     0,   183,   181,     0,     0,     0,   142,     0,     0,     0,
   156,    81,     0,   155,     0,   213,   211,     0,     0,     0,
     0,    68,     0,     0,    64,     0,    80,     0,    72,    77,
   273,   271,     0,     0,     0,   341,     0,     0,   366,   446,
     0,     0,     0,   449,   481,     0,   475,   483,   476,   478,
   477,     0,     0,    80,     0,     0,     0,     0,     0,   485,
   536,   536,     0,     0,     0,     0,   536,     0,   530,   530,
   530,   513,     0,     0,     0,     0,   528,   486,   548,   544,
    66,     0,    31,    34,    62,     0,   188,   184,   182,   146,
   143,   160,   157,     0,     0,   622,   554,   555,   556,   557,
   558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
   568,   569,   570,   571,   572,   573,     0,   120,     0,     0,
   116,   114,     0,     0,     0,     0,     0,     0,     0,     0,
    83,    84,   112,     0,   109,   258,   217,   212,   220,   214,
   236,   215,   251,   216,    56,     0,    60,     0,    51,     0,
    73,     0,    45,    37,    44,   272,   278,   274,     0,     0,
     0,     0,   275,   296,   342,   348,   343,     0,   447,   453,
   450,   448,   484,   479,   488,     0,     0,     0,     0,     0,
     0,     0,     0,   525,   537,   529,   522,     0,     0,   509,
   512,   520,   521,   515,   516,   519,   517,   518,   514,   524,
   523,     0,   526,    33,     0,   185,     0,     0,     0,    78,
    79,   111,     0,     0,     0,     0,     0,     0,     0,   106,
   105,   107,   128,   126,   123,   125,   124,     0,     0,    85,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   113,   134,
     0,     0,     0,     0,     0,    59,     0,    53,    74,    64,
     0,   312,   312,   320,   301,     0,     0,    80,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   385,
   387,     0,   345,   367,     0,     0,    80,     0,     0,     0,
     0,     0,     0,   510,   511,   531,     0,     0,     0,     0,
     0,     0,    80,    80,    80,    80,     0,     0,     0,    80,
   187,   189,     0,     0,   145,   147,     0,     0,     0,   159,
   161,     0,    82,     0,     0,     0,    82,     0,     0,   334,
   108,     0,   103,   104,   101,   100,   102,    96,    97,    98,
    99,    92,    93,    88,    91,    94,    89,    95,   127,   130,
     0,   132,     0,     0,   110,     0,     0,     0,     0,     0,
   257,   259,     0,     0,     0,     0,   532,     0,     0,   219,
   221,     0,     0,     0,   235,   237,     0,     0,     0,   250,
   252,     0,    54,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   277,   287,   279,   326,   326,   326,     0,
     0,     0,     0,     0,   536,     0,     0,     0,   347,   349,
     0,     0,    80,     0,     0,     0,    80,     0,     0,   398,
     0,   405,     0,   413,   420,     0,     0,     0,     0,   376,
     0,     0,   452,   454,     0,     0,     0,     0,     0,     0,
     0,   538,   527,    63,     0,     0,     0,     0,    80,     0,
    80,     0,     0,     0,     0,     0,     0,    80,     0,     0,
     0,   134,   165,     0,     0,   118,     0,   119,     0,     0,
     0,    82,   333,     0,   129,   131,     0,     0,     0,     0,
     0,     0,     0,    49,     0,    67,     0,     0,   230,     0,
    80,     0,     0,     0,     0,   245,   247,     0,   241,   243,
     0,     0,     0,     0,    57,    38,     0,     0,     0,     0,
     0,     0,     0,     0,    67,     0,     0,     0,    82,     0,
     0,   327,   328,   329,   330,   331,   332,     0,   297,   313,
     0,   298,     0,   299,   321,     0,     0,     0,   306,   300,
   302,     0,     0,    67,   360,     0,     0,     0,     0,   362,
   364,     0,     0,   368,     0,     0,   369,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   390,
   532,   532,   457,     0,     0,     0,     0,   502,     0,     0,
     0,   191,   192,   197,   198,     0,   201,     0,   200,   194,
   193,    64,   195,   190,     0,   199,   149,   148,     0,     0,
   162,   163,     0,     0,     0,   115,     0,    86,   133,     0,
     0,   135,   260,     0,   262,   263,     0,   222,   223,     0,
     0,     0,    64,   534,     0,   227,   228,   229,   238,    64,
   240,    64,   239,   254,   253,   255,    67,    47,   291,   290,
   283,   281,   282,   280,   284,   286,   292,   289,     0,     0,
     0,     0,   314,     0,   323,     0,     0,     0,   351,   350,
   358,    64,   352,   353,   356,   357,    64,   354,   355,     0,
     0,    80,     0,     0,     0,    80,     0,    80,     0,     0,
    80,   370,   399,     0,     0,    80,     0,     0,     0,     0,
   371,   406,     0,     0,     0,     0,    80,     0,   372,   414,
     0,     0,     0,     0,     0,     0,     0,     0,   373,   421,
    80,   392,   393,   391,   393,     0,   455,     0,   536,     0,
     0,     0,     0,    80,    80,     0,    80,   150,   167,   164,
     0,    90,     0,   122,     0,     0,     0,     0,   264,   224,
     0,   225,     0,   533,    80,   246,     0,   242,     0,    48,
   293,     0,   318,   319,   317,    82,   322,    82,   303,   304,
     0,     0,     0,     0,   305,   307,   359,     0,   363,     0,
   374,   375,     0,     0,   366,     0,     0,   366,     0,     0,
     0,     0,     0,   366,     0,     0,     0,     0,     0,     0,
     0,   366,     0,     0,     0,     0,     0,   366,   366,     0,
     0,   430,     0,     0,     0,     0,     0,     0,   456,     0,
   500,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   121,    82,    87,     0,     0,   261,     0,     0,   535,   248,
   244,     0,     0,   288,   315,   324,     0,     0,     0,     0,
   361,   365,     0,   536,     0,   536,     0,     0,   402,   400,
   401,   403,    80,     0,   409,   407,   408,   410,   411,    80,
   417,     0,   415,   416,   418,   424,   426,     0,     0,   422,
   423,     0,   425,     0,     0,   536,   394,     0,   460,   460,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   166,   168,     0,   137,
   136,     0,     0,     0,   285,     0,     0,   308,   309,   310,
   311,   379,     0,   377,     0,   380,   404,     0,   412,     0,
   419,   428,   429,   432,   427,   389,   386,     0,   536,   397,
   388,   326,   326,   506,   536,     0,     0,     0,     0,   204,
   203,   196,   202,     0,     0,     0,     0,     0,     0,    82,
     0,   226,   294,    82,     0,     0,     0,     0,    80,     0,
     0,   395,   396,     0,     0,     0,   465,   459,     0,   461,
   458,     0,     0,     0,     0,     0,   169,   170,   171,   172,
   173,   174,     0,     0,     0,     0,   381,   366,     0,     0,
     0,     0,     0,    80,     0,     0,     0,   431,   433,     0,
     0,     0,     0,   462,   501,     0,     0,     0,     0,   117,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   467,   468,   464,     0,    82,     0,     0,
     0,     0,   231,   316,   325,   378,   382,   366,     0,   434,
   437,   438,   435,   436,   439,   466,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   383,   366,   463,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   232,   384,     0,   503,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
     0,     0,   498,     0,     0,     0,     0,     0,   233,     0,
     0,     0,     0,     0,     0,   504,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   505,     0,     0,     0
};

static const short yydefgoto[] = {  1577,
     1,     2,     3,    19,    20,    21,    85,   150,   235,   455,
   322,   488,   720,   323,   324,   614,   844,   945,   409,   485,
   410,   385,   148,   293,   405,   294,    90,   166,   325,   395,
   396,   472,   473,   591,   792,  1195,   592,   678,   677,   674,
   709,   813,   815,    87,   238,   304,   466,   668,   776,    88,
   239,   309,   468,   669,   781,  1060,  1280,  1358,    86,   153,
   237,   300,   461,   667,   772,    89,   161,   240,   317,   479,
   712,   831,  1082,  1512,  1540,   480,   713,   836,   961,  1092,
   958,  1090,   481,   714,   841,   475,   711,   822,    91,   170,
   243,   331,   494,   721,   856,  1211,   979,  1293,   495,   624,
   860,  1001,  1118,  1226,   857,   990,  1216,  1366,   859,   995,
  1218,  1367,   991,   593,    92,   174,   244,   336,   422,   498,
   726,   870,  1006,  1122,  1012,  1127,   628,   744,   888,   889,
  1173,  1265,  1337,  1023,  1143,  1025,  1152,  1027,  1160,  1028,
  1170,  1332,  1421,  1459,    93,   178,   245,   342,   502,   745,
   894,  1176,  1392,  1430,  1488,  1463,    95,   183,   247,   350,
    22,   246,   427,   506,    46,   188,   357,   250,   260,  1342,
   367,   444,   656,  1174,  1085,   644,   124,   125,    23,    84,
   594,   645,    82,    28
};

static const short yypact[] = {-32768,
-32768,    62,   416,  -131,   438,  -105,   -65,   -47,   -31,    -8,
    -2,   132,   141,   150,   165,    15,   203,   159,-32768,-32768,
    30,-32768,-32768,  1332,-32768,-32768,     5,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    46,-32768,
   368,-32768,-32768,   177,   181,-32768,-32768,-32768,-32768,   387,
-32768,-32768,-32768,-32768,-32768,   232,   236,   246,   253,   259,
   264,   285,   289,   295,   304,   307,   310,   316,   323,   333,
   353,   365,   374,   377,   390,   392,  1916,  1916,  1916,  1916,
   747,-32768,   438,   -22,   229,    23,    49,   186,    56,   128,
   127,   130,   133,   500,   142,   402,-32768,   555,   555,-32768,
  1916,  1916,  1916,  1916,  1916,  1916,  1916,  1916,  1916,  1916,
  1916,  1916,  1916,  1916,  1916,  1916,  1916,  1916,  1916,  1916,
   586,   219,   219,  -161,-32768,  2342,  2411,-32768,  1916,  1916,
  1916,  1916,  1916,  1916,  1916,  1916,  1916,  1916,  1916,  1916,
  1916,  1916,  1916,-32768,   359,   606,-32768,   610,-32768,   367,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -141,   426,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   636,-32768,   449,  1331,  1331,  3392,
  3419,  3446,  3473,  3500,  3527,  3554,  3581,  3608,  3635,  2463,
  3662,  3689,  3716,  3743,  3770,  3797,  2485,  2507,  2529,   461,
   667,  1916,  1384,-32768,  2365,  4654,  4654,  4688,  4688,  1191,
  1191,  1191,  1191,   -14,   -14,   219,   219,   219,   219,   438,
-32768,   499,  -102,   510,-32768,-32768,   284,   273,   336,   385,
    13,-32768,   287,    88,   394,   514,   663,-32768,    53,   349,
-32768,    53,    53,    47,   522,   524,   527,   530,   533,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1916,-32768,-32768,-32768,-32768,-32768,-32768,  1916,  1916,
  1916,   736,-32768,-32768,  2342,  1916,  4617,  1916,   547,  1580,
  1264,  1615,   599,   611,-32768,    20,   751,   759,-32768,-32768,
   566,   770,-32768,-32768,   627,   118,   807,-32768,-32768,   631,
   809,   829,   633,   635,   638,-32768,-32768,    -3,-32768,    41,
   660,-32768,   637,   643,   357,   836,   843,   647,   656,-32768,
-32768,   855,   659,-32768,-32768,-32768,   857,   661,   862,   864,
-32768,-32768,-32768,   865,   670,   879,   438,   884,-32768,-32768,
   685,-32768,-32768,-32768,-32768,-32768,   886,   733,-32768,   118,
-32768,   691,  1916,   692,   693,   729,   381,   384,  3824,  3851,
  3878,  3905,   731,  3932,  4617,-32768,-32768,  4617,   739,   930,
  1916,  4067,-32768,    98,   446,   742,-32768,   938,     9,-32768,
   951,-32768,   755,   761,   959,-32768,   960,-32768,   963,    14,
-32768,-32768,-32768,   768,-32768,   965,   775,-32768,-32768,-32768,
   118,   800,-32768,   974,   977,  1007,    52,-32768,-32768,    94,
-32768,   813,    95,-32768,   814,  1015,   824,  1021,-32768,  1028,
  1032,  1033,-32768,   449,  1031,   837,  1916,  2551,  1916,  1916,
  1916,  1044,  1735,-32768,  1045,-32768,-32768,-32768,-32768,  1046,
  1916,-32768,  4092,-32768,    98,-32768,  1047,  1048,  1055,-32768,
   328,-32768,-32768,   861,  1057,   405,-32768,   462,  1916,  1064,
-32768,-32768,   971,-32768,   482,-32768,-32768,  1063,   545,   548,
   564,-32768,    11,  1650,   -75,  1065,   118,    21,-32768,-32768,
-32768,-32768,  1066,   578,   356,-32768,  1069,   583,-32768,-32768,
  1070,   585,  1072,-32768,-32768,    30,-32768,   859,-32768,-32768,
-32768,   874,   880,   118,  2573,  1916,  2595,  2617,  2639,-32768,
  1685,  1685,  1081,   156,  1916,  1916,  1685,  1916,  1082,-32768,
-32768,-32768,  1916,  1916,  1084,  1720,-32768,-32768,-32768,  4617,
-32768,  1100,-32768,-32768,   889,   590,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  3959,   903,   276,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   905,-32768,   906,   908,
-32768,-32768,  1109,   971,   971,   971,  1114,    35,  1113,   971,
  4639,   919,   917,   917,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1916,-32768,  4117,-32768,    29,
-32768,  1115,-32768,-32768,-32768,-32768,-32768,-32768,   926,   929,
   931,   933,-32768,-32768,-32768,-32768,-32768,   245,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1916,   932,  1916,  2661,  1916,
  1916,  1916,  1916,-32768,  4617,-32768,-32768,   438,   438,-32768,
  4617,  4617,-32768,  4617,-32768,  1130,  1130,  1130,  4617,  4617,
-32768,  1916,  4617,-32768,  1916,-32768,   604,   -12,   235,-32768,
-32768,-32768,   937,   936,   937,   971,   939,   941,   969,   952,
   952,   952,-32768,-32768,-32768,-32768,-32768,    17,  2387,-32768,
   971,   971,   971,   971,   971,   971,   971,   971,   971,   971,
   971,   971,   971,   971,   971,   971,  1154,   883,-32768,   957,
   517,   679,   361,   325,  3986,-32768,   481,-32768,-32768,   593,
   677,-32768,-32768,-32768,-32768,   535,    10,   182,   956,   961,
   962,   966,   970,   296,   322,   973,   978,   980,  1182,-32768,
-32768,  1183,-32768,-32768,   -16,  2683,   118,  2705,  1916,  2727,
  2749,  2771,   -11,-32768,-32768,-32768,   148,  4142,    53,    53,
    53,    53,   193,   194,   118,   118,   987,  1187,  1188,   195,
-32768,-32768,    24,  1193,-32768,-32768,   997,  1197,  1200,-32768,
-32768,   990,-32768,  1001,  2441,  1204,-32768,  1004,  1008,-32768,
-32768,   971,  4673,  4673,  1067,  1067,  1067,   380,   380,   380,
   380,   -36,   -36,   160,   160,   160,   952,   952,-32768,-32768,
  1019,  4639,   597,   290,-32768,  1208,    92,    92,  1220,  1226,
-32768,-32768,  1228,  1231,  1234,  1038,  1054,    53,    53,-32768,
-32768,  1252,    43,    44,-32768,-32768,  1259,  1266,  1267,-32768,
-32768,  1270,-32768,  1098,   136,  1269,  1299,    38,  1302,  1304,
  1272,  1307,    53,-32768,-32768,-32768,   750,  1374,   944,   344,
  1306,  1309,    67,   438,  1685,   438,    68,  1313,-32768,-32768,
  1305,  1314,   118,  1315,  1318,  1319,   118,  1320,  1321,-32768,
  1916,-32768,  1916,-32768,-32768,    53,  1326,  1123,  1135,-32768,
  1132,  1335,-32768,-32768,  1916,  1138,  1916,  4167,  1916,  1916,
  1916,-32768,-32768,-32768,  1336,  1337,  1363,  1364,   118,  1369,
   118,  1370,  1371,  1373,  1339,  1385,  1388,   118,  1415,  1416,
  1417,   957,-32768,  1418,  1419,-32768,  1221,-32768,   971,  1222,
  1225,-32768,-32768,   441,-32768,-32768,   971,  1227,  1229,   155,
  1425,  1345,  1428,-32768,  1429,   814,  1431,   145,  1238,  1436,
   118,  1439,  1440,  1441,  1442,-32768,-32768,  1443,-32768,-32768,
  1444,  1445,  1447,  1448,-32768,-32768,  1452,    41,  1451,  1453,
  1454,  1456,  1458,  1460,   814,  1461,  1462,  1463,-32768,  1467,
  1468,-32768,-32768,-32768,-32768,-32768,-32768,    53,-32768,-32768,
  1255,-32768,    53,-32768,-32768,  1286,  1486,  1488,-32768,-32768,
-32768,  1489,  1490,   814,-32768,  1491,  1492,  1493,  1495,-32768,
-32768,  1496,  1497,-32768,  1300,  1308,-32768,  1301,  1310,  1316,
  1317,  1322,   560,  2793,  1190,  2815,   465,  1690,  1323,-32768,
    69,    69,-32768,  1503,  4192,  1312,  4217,-32768,  4242,  4267,
  4292,-32768,-32768,-32768,-32768,  1329,-32768,  1330,-32768,-32768,
-32768,  1334,-32768,-32768,  1338,-32768,-32768,-32768,  1504,   608,
-32768,-32768,    53,  3371,  1916,-32768,  1327,-32768,  4639,  1507,
    53,-32768,-32768,  1510,-32768,-32768,  1513,-32768,-32768,  1515,
  1434,  1519,  1334,-32768,   202,-32768,-32768,-32768,-32768,   228,
-32768,   261,-32768,-32768,-32768,-32768,   814,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1340,  1520,
  1535,  1536,-32768,  1540,-32768,  1542,  1549,   335,-32768,-32768,
-32768,   269,-32768,-32768,-32768,-32768,   271,-32768,-32768,  1554,
  1555,   118,  1563,  1367,  1916,   118,  1368,   118,  1916,  1916,
   118,-32768,-32768,  1916,  1376,   118,  1916,  1916,  1916,  1916,
-32768,-32768,  1916,  1916,  1377,  1916,   118,  1916,-32768,-32768,
  1916,  1568,  1378,  1379,  1916,  1916,  1387,  1916,-32768,-32768,
   118,-32768,-32768,-32768,-32768,    60,-32768,  1390,  1685,  1420,
  1421,  1422,  1423,   118,   118,  1571,   118,-32768,-32768,-32768,
  1382,-32768,  2837,-32768,   971,  1455,  1457,  1583,-32768,-32768,
  1570,-32768,  1616,-32768,   118,-32768,  1621,-32768,  1622,-32768,
  1487,  1649,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   937,   937,   937,    53,-32768,-32768,-32768,  1652,-32768,  1653,
-32768,-32768,  1521,  1522,-32768,  2859,  1524,-32768,  1686,   769,
   838,  1687,  2881,-32768,  1688,  1035,  1372,  1964,  1989,  2903,
  2019,-32768,  2041,  1689,  2070,  2093,  1723,-32768,-32768,  2115,
  2141,-32768,  2166,  1526,   612,   615,  1525,  1530,-32768,  1916,
-32768,  1916,  1916,  1916,  1916,  1556,  1557,  1494,  1558,   479,
-32768,-32768,  4639,  1561,  1562,-32768,  1752,  1564,-32768,-32768,
-32768,  1654,  1753,-32768,-32768,-32768,  1759,  1761,  1762,  1763,
-32768,-32768,  1764,  1685,   598,  1685,  1767,  1029,-32768,-32768,
-32768,-32768,   118,  1062,-32768,-32768,-32768,-32768,-32768,   118,
-32768,  1656,-32768,-32768,-32768,-32768,-32768,  1838,  1870,-32768,
-32768,   620,-32768,  1775,  1776,   676,-32768,  1777,-32768,-32768,
  4317,  1584,  2925,  2947,  2969,  2991,  1779,  1782,  1786,  1789,
  1792,  1916,  1916,  1916,  1916,  1916,-32768,-32768,  1593,-32768,
-32768,  1602,  1793,  1596,-32768,  1603,  1604,-32768,-32768,-32768,
-32768,-32768,  1597,  1692,  1605,-32768,-32768,  1606,-32768,  1610,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   438,  1685,-32768,
-32768,   993,  1000,-32768,  1685,  1916,  1916,  1916,  1916,-32768,
-32768,-32768,-32768,  1801,  2189,  2218,  2240,  2264,  2292,-32768,
  1812,-32768,-32768,-32768,   937,  1811,  1617,  1916,   118,  1916,
   428,-32768,-32768,  1815,  1816,  1819,-32768,-32768,  1624,-32768,
-32768,  1626,  3013,  3035,  3057,  3079,-32768,-32768,-32768,-32768,
-32768,-32768,  1620,  1628,  1627,  1629,-32768,-32768,  4013,  1630,
  3101,  1828,  1916,   118,  1831,    53,  1832,-32768,-32768,  1833,
  1834,  1837,    53,-32768,-32768,  1916,  1916,  1916,  1916,-32768,
  1840,  1842,  1843,  1904,  1844,  1636,  1916,  1845,  2318,  1847,
  1848,  1849,  1851,-32768,-32768,-32768,  1853,-32768,  4342,  4367,
  4392,  4417,-32768,-32768,-32768,-32768,-32768,-32768,  4040,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1634,  1643,  1658,  1660,
  1661,  1822,  1951,  1664,  1860,  1916,  1666,  1916,  1916,    53,
-32768,-32768,-32768,  3123,  1916,  3145,  3167,  1862,  1992,  1916,
  4442,  1916,  1916,-32768,-32768,  3189,-32768,  3211,  3233,  1765,
  1916,  1916,  1916,  1865,  4467,  4492,  4517,   814,  1668,  1670,
  1672,  1869,-32768,  1676,  1916,  1677,  1916,  3255,-32768,  3277,
  1916,  1916,  3299,  4542,  1916,-32768,  4567,  1678,  1680,  1916,
  3321,  1916,  3343,  1916,  4592,-32768,  1879,  1885,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   -84,-32768,-32768,  -244,     7,-32768,-32768,  1041,  -485,-32768,
  -539,-32768,  -318,  -387,  -421,-32768,-32768,-32768,-32768,  -341,
-32768,  -760,-32768,  -464,-32768,-32768,-32768,-32768,-32768,-32768,
  1294,-32768,   967,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1430,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1168,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -848,  -550,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1108,-32768,-32768,-32768,
   878,   719,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   571,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1484,-32768,  1408,  1817,-32768,  1481,  1728,-32768,
  1662,-32768,   301,  1097,-32768,  -510,  -612,  1713,  1152,-32768,
-32768,   -24,  -416,   -82
};


#define	YYLAST		4888


static const short yytable[] = {    81,
   145,   465,   615,   503,   351,   672,   415,   358,   359,   361,
   996,   646,   478,   605,   871,   463,   653,   318,   436,    39,
   477,   789,   927,   406,   386,   407,   931,     4,   318,   493,
   753,   406,   497,   407,     6,   501,    24,   684,   773,   685,
   891,   211,   971,   406,   212,   407,    24,   956,   959,   757,
   774,   318,   122,   123,   126,   127,   595,   318,   492,   892,
     4,    -2,   241,   319,  1267,   613,   459,     6,   920,   486,
   718,  1004,  1010,  1172,   319,   291,   190,   191,   192,   193,
   194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
   204,   205,   206,   207,   208,   209,   456,   319,    29,   292,
   496,   500,   456,   319,   215,   216,   217,   218,   219,   220,
   221,   222,   223,   224,   225,   226,   227,   228,   229,   680,
   681,   682,   782,   972,   784,   689,  1305,   609,   393,  1308,
   147,     4,   163,   973,     4,  1314,    30,     4,     6,     6,
   944,     6,   319,  1322,     6,   612,     4,   289,   319,  1328,
  1329,  1079,   686,     6,    31,  1268,   702,   703,   704,   705,
    25,    26,   706,   332,    27,    43,   610,   595,   595,   595,
    32,  1067,   637,   595,   164,    44,    45,   843,   140,   141,
   142,   967,   146,   147,   143,   144,   893,   285,   287,    94,
   775,   902,   393,    33,   212,   333,   394,   687,   404,    34,
   -43,   940,   334,   393,   393,   393,   380,    41,    83,    42,
   464,   785,   320,   872,   606,   464,    40,   321,  1109,   790,
   717,   387,   408,   320,   151,   152,   793,   794,   795,   796,
   797,   798,   799,   800,   801,   802,   803,   804,   805,   806,
   807,   808,   408,   812,   957,   960,   320,   369,   360,   727,
   155,   156,   320,   464,   370,   371,   372,   159,   160,   595,
   394,   374,  1269,   375,   431,   378,    81,   382,  1005,  1011,
   951,   394,   394,   394,   595,   595,   595,   595,   595,   595,
   595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
   335,   595,    47,    48,    49,   464,   464,   320,   777,   457,
   778,   779,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,   934,   168,   169,
   165,   172,   173,    35,   176,   177,   301,   938,   438,  1474,
   939,   648,    36,   181,   182,   649,   464,   296,   302,   297,
   903,    37,   326,   212,  1008,   705,   453,  1072,   706,   298,
   212,   728,   327,   729,   730,   731,    38,   732,   733,   734,
   542,   233,    96,   735,    97,   595,   736,   328,     6,   737,
    98,   329,   738,   739,    99,   873,   874,   157,   158,  1513,
   837,   740,   741,   100,  1221,  1222,   909,   911,   918,   305,
   838,   845,   839,   306,  1204,   896,   185,  1205,   186,   997,
   234,   307,   515,  1529,   517,   518,   519,   143,   144,   742,
     4,   910,   912,   913,   914,     5,   540,     6,   919,  1223,
  1206,   149,   998,   147,   310,   101,   832,   780,   833,   102,
  1224,   650,    25,    26,   554,   834,    27,   743,  1068,   103,
   311,   619,   620,   621,   622,  1295,   104,  1296,     7,   608,
   312,   313,   105,  1208,  1064,     8,   147,   106,   314,   337,
   315,  1227,  1069,  1229,   147,   303,   147,   589,     9,  -574,
    10,    77,  1098,   406,   338,   407,   299,    78,   107,   330,
    11,   639,   108,  1452,    12,  1453,    80,   880,   109,   881,
   651,   652,   339,   654,   180,    13,  1454,   110,   659,   660,
   111,   663,   595,   112,   905,   906,   907,   908,  1455,   113,
   595,  1359,    14,   882,  1077,   883,   114,   840,   921,   547,
   548,  1016,  1154,  1456,   340,  1020,   115,  1225,   308,   352,
   353,   354,   355,  1429,  1429,   999,  1000,  1351,  1352,  1353,
  1354,  1355,  1356,  1105,   356,    15,   116,    16,   623,   187,
  1080,   414,   147,   835,   230,   754,   755,  1046,   117,  1048,
   700,   701,   702,   703,   704,   705,  1055,   118,   706,  1155,
   119,   715,  1121,   953,   954,   442,   443,   316,   445,   443,
   210,    17,    18,   120,   816,   121,   341,  1156,  1157,   817,
   861,  1457,   727,   818,   819,   820,   550,   551,   978,  1084,
   862,   746,   231,   748,   232,   750,   751,   752,   126,   690,
   691,   692,   693,   694,   695,   696,   697,   698,   699,   242,
  1458,   700,   701,   702,   703,   704,   705,   126,  1158,   706,
   758,  1029,   248,   863,   864,   865,   866,   867,   868,  1443,
   458,   147,   249,  1445,   759,   760,   761,   762,   763,   764,
   765,   766,   767,   552,   553,   768,   282,  1159,  1271,   769,
  1297,  1298,  1299,   283,  1137,  1210,   290,  1138,    47,    48,
    49,  1357,   770,   596,   597,  1139,  1140,  1141,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,   295,   728,   343,   729,   730,   731,   821,
   732,   733,   734,   362,   898,   363,   735,  1507,   364,   736,
  1283,   365,   737,  1186,   366,   738,   739,   869,   344,   846,
   373,   847,   848,  1112,   740,   741,   599,   600,  1114,   601,
   602,   376,   849,   128,   823,   388,   824,   825,   826,   827,
   828,   829,  1142,   389,  1203,   603,   604,   390,   850,   851,
   852,  1207,   742,  1209,   391,  1310,   383,   345,   595,   617,
   618,  1007,   853,  1009,   626,   627,   630,   631,   384,   126,
  1233,   547,   666,  1373,  1237,  1375,  1239,   -46,   147,  1242,
  1374,   936,   937,  1228,  1245,   346,   771,   347,  1230,  1189,
  1190,   397,   980,   399,   981,  1254,  1335,  1336,  1191,  1338,
  1336,  1384,  1385,   942,   943,  1390,  1197,   348,   392,  1264,
   657,   658,   398,   400,   401,  1388,   402,   411,  1389,   403,
   416,   412,  1276,  1277,  1311,  1279,   413,   417,   418,   982,
   983,   984,   985,   986,   987,   988,  1024,   419,  1026,   420,
   421,   423,   424,  1289,  1446,   349,   425,    77,   426,   428,
  1035,   429,  1037,    78,  1039,  1040,  1041,   643,  1423,   854,
   855,   830,    80,   430,  1432,    47,    48,   556,   432,   433,
   434,   435,   437,   439,   440,    51,    52,    53,    54,    55,
   557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
   567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
   577,   578,   579,   580,   581,   129,   130,   131,   132,   133,
   441,   134,   135,   136,   137,   450,   452,   138,   139,   140,
   141,   142,   -43,   460,   462,   143,   144,   129,   130,   131,
   132,   133,   989,   134,   135,   136,   137,   467,   469,   138,
   139,   140,   141,   142,   470,   471,   474,   143,   144,   476,
   482,  1378,   483,    47,    48,   556,   484,   487,  1380,  1300,
   489,   490,   582,    51,    52,    53,    54,    55,   557,   558,
   559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
   569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
   579,   580,   581,   491,   499,   404,   129,   130,   131,   132,
   133,   504,   134,   135,   136,   137,   505,   507,   138,   139,
   140,   141,   142,   727,   509,   513,   143,   144,   510,   511,
  1193,  1316,   514,   982,   983,   984,   985,   986,   987,   993,
   520,   538,   539,   543,   544,  1424,  1471,  1425,  1426,   545,
   381,   634,  1424,   549,  1425,  1426,   727,   583,   555,   598,
   582,   611,   616,   584,   585,   625,   629,  1450,   632,   635,
   586,   636,   587,   588,   589,   647,   655,   810,   661,   590,
   665,   811,   982,   983,   984,   985,   986,   987,  1427,   982,
   983,   984,   985,   986,   987,  1427,   664,   671,   673,   675,
  1236,   676,  1480,   679,  1240,  1241,   683,   688,   707,  1243,
   708,   719,  1246,  1247,  1248,  1249,  1552,   722,  1250,  1251,
   723,  1253,   724,  1255,   725,   756,  1256,   747,   589,   783,
  1260,  1261,   786,  1263,   787,   728,   994,   729,   730,   731,
   706,   732,   733,   734,   788,   583,   809,   735,   814,   875,
   736,   584,   585,   737,   876,   877,   738,   739,   586,   878,
   587,   588,   589,   879,   884,   740,   741,   590,   728,   885,
   729,   730,   731,   886,   732,   733,   734,   887,   915,   890,
   735,   916,   917,   736,   926,  1428,   737,   922,   923,   738,
   739,   924,  1431,   742,   925,   928,   930,   932,   740,   741,
   933,  1482,   941,   129,   130,   131,   132,   133,  1487,   134,
   135,   136,   137,   935,   944,   138,   139,   140,   141,   142,
   946,  1377,   947,   143,   144,   948,   742,   154,   949,   950,
   162,   167,   171,   175,   179,  1341,   184,  1343,  1344,  1345,
  1346,   696,   697,   698,   699,   951,   955,   700,   701,   702,
   703,   704,   705,   962,  1379,   706,    47,    48,   379,    50,
   963,   964,   965,   969,   976,  1528,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,   236,   966,   970,  1145,  1422,   974,  1146,   975,   977,
  1002,  1014,    76,  1003,   319,  1147,  1148,  1013,  1015,  1149,
  1150,  1017,  1018,  1019,  1021,  1022,  1031,  1405,  1406,  1407,
  1408,  1409,  1030,  1033,    47,    48,    49,    50,  1032,  1034,
  1036,  1052,  1042,  1043,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,  1044,
  1045,  1433,  1434,  1435,  1436,  1047,  1049,  1050,  1317,  1051,
    76,   138,   139,   140,   141,   142,    47,    48,    49,   143,
   144,  1053,  1151,  1449,  1054,  1451,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,  1056,  1057,  1058,  1061,  1062,  1063,  1065,  1479,  1066,
  1070,  1073,  1071,  1074,  1075,  1076,   980,  1078,   981,  1081,
  1083,  1489,  1490,  1491,  1492,  1086,  1087,  1088,  1089,  1091,
  1093,  1094,  1499,  1095,  1096,    77,  1097,  1099,  1113,  1100,
  1101,    78,  1102,   320,  1103,    79,  1104,  1106,  1107,  1108,
    80,  1110,  1111,   982,   983,   984,   985,   986,   987,   988,
   251,   252,   253,   254,   255,   256,   257,   258,   259,  1115,
  1116,  1524,  1117,  1526,  1527,  1119,  1120,  1123,  1124,  1125,
  1531,  1126,  1128,  1129,  1130,  1536,  1132,  1538,  1539,  1177,
  1188,  1196,  1131,  1179,  1198,  1133,  1545,  1546,  1547,  1199,
  1134,  1200,  1135,    77,  1201,  1202,  1213,  1136,  1171,    78,
  1558,  1194,  1560,    79,  1184,  1185,  1563,  1564,    80,   147,
  1567,  1214,  1215,  1187,  1212,  1571,  1217,  1573,  1219,  1575,
   129,   130,   131,   132,   133,  1220,   134,   135,   136,   137,
  1231,  1232,   138,   139,   140,   141,   142,  1234,  1235,  1238,
   143,   144,  1257,  1278,  1287,    77,   992,  1244,  1252,  1258,
  1259,    78,    47,    48,    49,   377,  1281,   286,  1262,  1286,
    80,  1270,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    47,    48,    49,
  1288,  1272,  1273,  1274,  1275,  1290,  1291,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    47,    48,    49,  1294,  1301,  1302,  1364,  1284,
   727,  1285,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    47,    48,    49,
  1292,  1411,  1309,  1312,  1315,  1324,  1349,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    47,    48,    49,  1303,  1339,  1304,  1307,  1327,
  1334,  1340,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  1161,  1362,  1365,
  1347,  1348,  1350,  1360,  1361,  1368,  1363,  1369,  1370,  1371,
  1372,    77,   728,  1376,   729,   730,   731,    78,   732,   733,
   734,  1386,  1387,  1391,   735,  1400,    80,   736,  1401,  1395,
   737,   521,  1402,   738,   739,  1403,  1404,  1162,  1410,  1412,
  1413,  1416,   740,   741,  1163,  1164,    77,  1437,  1414,  1415,
  1418,  1419,    78,  1417,   381,  1420,  1444,  1447,  1448,  1460,
  1461,    80,  1165,  1462,  1470,  1166,  1167,  1464,  1465,   464,
   742,  1472,  1478,  1473,  1476,  1481,  1483,  1498,  1515,  1484,
  1485,    77,   727,  1486,  1516,   522,  1493,    78,  1494,  1495,
  1497,  1500,   607,  1502,  1503,  1504,    80,  1505,  1381,  1506,
  1517,  1518,  1519,  1168,  1520,  1522,  1523,  1525,  1534,  1548,
  1553,  1544,  1554,  1555,   727,  1556,    77,  1557,  1578,  1559,
  1569,  1570,    78,   523,  1579,   968,   643,   710,  1059,   546,
   858,    80,  1169,  1266,   524,   525,   526,   527,   528,   529,
   530,   531,   532,   533,   534,   535,   536,   537,   727,  1175,
  1393,    77,   508,   633,   512,   189,   261,    78,    47,    48,
    49,   662,   368,   952,   284,     0,    80,     0,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,     0,   728,   727,   729,   730,   731,     0,
   732,   733,   734,     0,     0,     0,   735,     0,     0,   736,
  1318,     0,   737,     0,     0,   738,   739,     0,     0,     0,
     0,     0,     0,     0,   740,   741,   728,     0,   729,   730,
   731,     0,   732,   733,   734,  1319,   727,     0,   735,     0,
     0,   736,     0,     0,   737,     0,     0,   738,   739,     0,
     0,     0,   742,     0,     0,     0,   740,   741,     0,     0,
   728,     0,   729,   730,   731,  1321,   732,   733,   734,     0,
     0,     0,   735,     0,     0,   736,     0,     0,   737,     0,
  1382,   738,   739,     0,   742,     0,     0,  1323,     0,     0,
   740,   741,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   728,     0,   729,
   730,   731,  1383,   732,   733,   734,  1325,     0,   742,   735,
     0,     0,   736,     0,     0,   737,     0,     0,   738,   739,
     0,     0,     0,     0,     0,     0,     0,   740,   741,  1326,
     0,     0,     0,     0,     0,     0,  1496,    77,   728,     0,
   729,   730,   731,    78,   732,   733,   734,     0,     0,     0,
   735,  1330,    80,   736,     0,   742,   737,     0,     0,   738,
   739,     0,     0,     0,     0,     0,     0,     0,   740,   741,
     0,     0,   129,   130,   131,   132,   133,  1331,   134,   135,
   136,   137,     0,  1521,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,   742,   129,   130,   131,
   132,   133,  1333,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,     0,
     0,     0,     0,     0,  1535,  1438,     0,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1439,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,     0,  1440,     0,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
  1441,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1442,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,     0,     0,   129,
   130,   131,   132,   133,  1501,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,   129,   130,   131,   132,   133,   213,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,   129,   130,   131,
   132,   133,   288,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,     0,
     0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,     0,     0,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   690,   691,   692,   693,   694,
   695,   696,   697,   698,   699,     0,     0,   700,   701,   702,
   703,   704,   705,     0,     0,   706,     0,     0,     0,   129,
   130,   131,   132,   133,   791,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,     0,     0,     0,   214,   690,
   691,   692,   693,   694,   695,   696,   697,   698,   699,     0,
     0,   700,   701,   702,   703,   704,   705,     0,     0,   706,
     0,   129,   130,   131,   132,   133,   929,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,   272,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
   279,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,   280,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,   281,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,   516,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,   638,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
   640,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,   641,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,   642,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,   749,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,   895,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
   897,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,   899,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,   900,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,   901,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1144,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1153,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1282,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1306,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1313,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1320,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1396,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1397,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1398,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1399,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1466,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1467,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1468,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1469,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1477,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1530,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1532,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1533,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1541,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1542,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1543,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1561,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1562,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1565,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1572,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,     0,  1574,   690,
   691,   692,   693,   694,   695,   696,   697,   698,   699,     0,
     0,   700,   701,   702,   703,   704,   705,     0,     0,   706,
   129,   130,   131,   132,   133,  1192,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,   262,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,     0,
     0,     0,     0,   263,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
   264,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,   265,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,     0,     0,   266,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
     0,   267,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,   268,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,   269,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
     0,     0,   270,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,     0,     0,   271,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,   273,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,     0,
     0,     0,     0,   274,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
   275,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,   276,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,     0,     0,   277,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
     0,   278,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,   446,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,   447,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
     0,     0,   448,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,     0,     0,   449,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,   451,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,     0,
     0,     0,     0,   670,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
   842,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,  1475,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,     0,     0,  1514,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,   454,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,   541,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,   716,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,   904,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,  1038,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,  1178,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,  1180,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,  1181,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,  1182,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,  1183,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,  1394,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,  1508,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,  1509,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,  1510,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,  1511,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,  1537,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,  1549,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,  1550,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,  1551,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,  1566,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,  1568,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,  1576,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   690,   691,   692,
   693,   694,   695,   696,   697,   698,   699,     0,     0,   700,
   701,   702,   703,   704,   705,   132,   133,   706,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   693,   694,   695,   696,   697,   698,
   699,     0,     0,   700,   701,   702,   703,   704,   705,     0,
     0,   706,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144
};

static const short yycheck[] = {    24,
    83,   389,   488,   425,   249,   556,   325,   252,   253,   254,
   859,   522,   400,     3,     5,     7,   527,     5,   360,     5,
     7,     5,   783,     3,     5,     5,   787,     5,     5,   417,
   643,     3,   420,     5,    12,   423,   178,     3,    51,     5,
    57,   203,     5,     3,   206,     5,   178,     5,     5,   662,
    63,     5,    77,    78,    79,    80,   473,     5,     7,    76,
     5,     0,   204,    51,     5,    45,   385,    12,    45,   411,
   610,     5,     5,     5,    51,   178,   101,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,     5,    51,   204,   202,
     7,     7,     5,    51,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   584,
   585,   586,   673,    86,   675,   590,  1235,   203,    11,  1238,
   206,     5,     5,    96,     5,  1244,   202,     5,    12,    12,
     5,    12,    51,  1252,    12,   487,     5,   230,    51,  1258,
  1259,     7,   118,    12,   202,    96,   193,   194,   195,   196,
     5,     6,   199,    76,     9,     7,   485,   584,   585,   586,
   202,   932,   514,   590,    47,   146,   147,   717,   193,   194,
   195,    46,   205,   206,   199,   200,   203,   212,   213,   144,
   203,   203,    11,   202,   206,   108,    79,   163,   202,   202,
   204,   814,   115,    11,    11,    11,   291,     5,   204,     7,
   202,   676,   200,   204,   204,   202,   202,   205,   979,   203,
   192,   202,   202,   200,   202,   203,   691,   692,   693,   694,
   695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
   705,   706,   202,   708,   202,   202,   200,   272,   202,     5,
   202,   203,   200,   202,   279,   280,   281,   202,   203,   676,
    79,   286,   203,   288,   347,   290,   291,   292,   202,   202,
   202,    79,    79,    79,   691,   692,   693,   694,   695,   696,
   697,   698,   699,   700,   701,   702,   703,   704,   705,   706,
   203,   708,     3,     4,     5,   202,   202,   200,    64,   384,
    66,    67,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,   792,   202,   203,
   203,   202,   203,   202,   202,   203,    64,    48,   363,  1448,
    51,   186,   202,   202,   203,   190,   202,    64,    76,    66,
   203,   202,    66,   206,   865,   196,   381,   203,   199,    76,
   206,   117,    76,   119,   120,   121,   202,   123,   124,   125,
   455,     5,     5,   129,     7,   792,   132,    91,    12,   135,
   204,    95,   138,   139,   204,   204,   728,   202,   203,  1498,
    66,   147,   148,     7,    60,    61,   204,   204,   204,    64,
    76,   720,    78,    68,   203,   747,     5,   206,     7,    66,
    44,    76,   437,  1522,   439,   440,   441,   199,   200,   175,
     5,   763,   764,   765,   766,    10,   451,    12,   770,    95,
   203,   203,    89,   206,    50,   204,    76,   203,    78,   204,
   106,   524,     5,     6,   469,    85,     9,   203,     8,   204,
    66,    96,    97,    98,    99,  1216,   204,  1218,    43,   484,
    76,    77,   204,   203,   929,    50,   206,   204,    84,    76,
    86,   203,   937,   203,   206,   203,   206,   202,    63,   204,
    65,   192,   968,     3,    91,     5,   203,   198,   204,   203,
    75,   516,   204,    66,    79,    68,   207,   202,   204,   204,
   525,   526,   109,   528,     5,    90,    79,   204,   533,   534,
   204,   536,   929,   204,   759,   760,   761,   762,    91,   204,
   937,  1282,   107,   202,   946,   204,   204,   203,   773,   202,
   203,   873,    68,   106,   141,   877,   204,   203,   203,   191,
   192,   193,   194,  1392,  1393,   202,   203,    69,    70,    71,
    72,    73,    74,   975,   206,   140,   204,   142,   203,     5,
   948,   205,   206,   203,   206,   648,   649,   909,   204,   911,
   191,   192,   193,   194,   195,   196,   918,   204,   199,   115,
   204,   606,  1004,   828,   829,   205,   206,   203,   205,   206,
     5,   176,   177,   204,    78,   204,   203,   133,   134,    83,
    66,   174,     5,    87,    88,    89,   202,   203,   853,   951,
    76,   636,     7,   638,     5,   640,   641,   642,   643,   179,
   180,   181,   182,   183,   184,   185,   186,   187,   188,   204,
   203,   191,   192,   193,   194,   195,   196,   662,   174,   199,
   665,   886,     7,   109,   110,   111,   112,   113,   114,  1410,
   205,   206,   204,  1414,    51,    52,    53,    54,    55,    56,
    57,    58,    59,   202,   203,    62,   206,   203,  1179,    66,
  1221,  1222,  1223,     7,   115,  1097,   178,   118,     3,     4,
     5,   203,    79,   202,   203,   126,   127,   128,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,   204,   117,   202,   119,   120,   121,   203,
   123,   124,   125,   202,   749,   202,   129,  1488,   202,   132,
  1195,   202,   135,  1052,   202,   138,   139,   203,    76,    63,
     5,    65,    66,   988,   147,   148,   202,   203,   993,   202,
   203,   205,    76,     7,    76,     5,    78,    79,    80,    81,
    82,    83,   203,     5,  1083,   202,   203,   202,    92,    93,
    94,  1090,   175,  1092,     5,     7,   178,   115,  1195,   202,
   203,   864,   106,   866,   202,   203,   202,   203,   178,   814,
  1132,   202,   203,  1304,  1136,  1306,  1138,   205,   206,  1141,
   203,   205,   206,  1122,  1146,   143,   203,   145,  1127,   202,
   203,     5,    63,     5,    65,  1157,   205,   206,  1063,   205,
   206,   202,   203,   817,   818,  1336,  1071,   165,   202,  1171,
   530,   531,   202,     5,   202,   160,   202,   178,   163,   202,
     5,   205,  1184,  1185,     7,  1187,   204,     5,   202,   100,
   101,   102,   103,   104,   105,   106,   881,   202,   883,     5,
   202,     5,   202,  1205,  1415,   203,     5,   192,     5,     5,
   895,   202,   897,   198,   899,   900,   901,   202,  1389,   203,
   204,   203,   207,     5,  1395,     3,     4,     5,     5,   205,
     5,   159,   202,   202,   202,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,   179,   180,   181,   182,   183,
   202,   185,   186,   187,   188,   205,     7,   191,   192,   193,
   194,   195,   204,   202,     7,   199,   200,   179,   180,   181,
   182,   183,   203,   185,   186,   187,   188,     7,   204,   191,
   192,   193,   194,   195,   204,     7,     7,   199,   200,     7,
   203,  1313,     8,     3,     4,     5,   202,   178,  1320,  1224,
     7,     5,   100,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,     7,   202,   202,   179,   180,   181,   182,
   183,     7,   185,   186,   187,   188,   203,     7,   191,   192,
   193,   194,   195,     5,     7,     5,   199,   200,     7,     7,
  1065,     7,   206,   100,   101,   102,   103,   104,   105,   106,
     7,     7,     7,     7,     7,    63,  1444,    65,    66,     5,
   200,   203,    63,     7,    65,    66,     5,   185,     5,     7,
   100,     7,     7,   191,   192,     7,     7,  1419,     7,   206,
   198,   202,   200,   201,   202,     5,     5,   205,     5,   207,
   202,   209,   100,   101,   102,   103,   104,   105,   106,   100,
   101,   102,   103,   104,   105,   106,     7,   205,   204,   204,
  1135,   204,  1454,     5,  1139,  1140,     3,     5,   200,  1144,
   204,     7,  1147,  1148,  1149,  1150,  1548,   202,  1153,  1154,
   202,  1156,   202,  1158,   202,     6,  1161,   206,   202,   204,
  1165,  1166,   204,  1168,   204,   117,   203,   119,   120,   121,
   199,   123,   124,   125,   186,   185,     3,   129,   202,   204,
   132,   191,   192,   135,   204,   204,   138,   139,   198,   204,
   200,   201,   202,   204,   202,   147,   148,   207,   117,   202,
   119,   120,   121,   204,   123,   124,   125,     6,   202,     7,
   129,     5,     5,   132,   205,   203,   135,     5,   202,   138,
   139,     5,   203,   175,     5,   205,     3,   204,   147,   148,
   203,  1456,     5,   179,   180,   181,   182,   183,  1463,   185,
   186,   187,   188,   205,     5,   191,   192,   193,   194,   195,
     5,   203,     5,   199,   200,     5,   175,    86,     5,   202,
    89,    90,    91,    92,    93,  1270,    95,  1272,  1273,  1274,
  1275,   185,   186,   187,   188,   202,     5,   191,   192,   193,
   194,   195,   196,     5,   203,   199,     3,     4,     5,     6,
     5,     5,     3,     5,     3,  1520,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,   150,   205,     5,   115,  1388,     5,   118,     5,     3,
     5,     7,    49,     5,    51,   126,   127,     5,     5,   130,
   131,     7,     5,     5,     5,     5,   204,  1352,  1353,  1354,
  1355,  1356,     7,   202,     3,     4,     5,     6,   204,     5,
   203,     3,     7,     7,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,     7,
     7,  1396,  1397,  1398,  1399,     7,     7,     7,     7,     7,
    49,   191,   192,   193,   194,   195,     3,     4,     5,   199,
   200,     7,   203,  1418,     7,  1420,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,     7,     7,     7,     7,     7,   206,   206,  1453,   205,
   204,     7,   204,    89,     7,     7,    63,     7,    65,   202,
     5,  1466,  1467,  1468,  1469,     7,     7,     7,     7,     7,
     7,     7,  1477,     7,     7,   192,     5,     7,   204,     7,
     7,   198,     7,   200,     7,   202,     7,     7,     7,     7,
   207,     5,     5,   100,   101,   102,   103,   104,   105,   106,
   150,   151,   152,   153,   154,   155,   156,   157,   158,   204,
     5,  1516,     5,  1518,  1519,     7,     7,     7,     7,     7,
  1525,     7,     7,     7,   205,  1530,   206,  1532,  1533,     7,
     7,     5,   205,   202,     5,   206,  1541,  1542,  1543,     7,
   205,     7,   206,   192,    91,     7,     7,   206,   206,   198,
  1555,   205,  1557,   202,   206,   206,  1561,  1562,   207,   206,
  1565,     7,     7,   206,   205,  1570,     7,  1572,     7,  1574,
   179,   180,   181,   182,   183,     7,   185,   186,   187,   188,
     7,     7,   191,   192,   193,   194,   195,     5,   202,   202,
   199,   200,     5,     3,     5,   192,   203,   202,   202,   202,
   202,   198,     3,     4,     5,     6,   205,   204,   202,     7,
   207,   202,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,     3,     4,     5,
     5,   202,   202,   202,   202,     5,     5,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,     3,     4,     5,     7,     5,     5,     5,   205,
     5,   205,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,     3,     4,     5,
   204,    90,     7,     7,     7,     7,   203,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,     3,     4,     5,   205,   202,   206,   205,     7,
   205,   202,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    68,     7,     7,
   205,   205,   205,   203,   203,     7,   203,     7,     7,     7,
     7,   192,   117,     7,   119,   120,   121,   198,   123,   124,
   125,     7,     7,     7,   129,     7,   207,   132,     7,   206,
   135,    57,     7,   138,   139,     7,     5,   108,   206,     7,
   205,   205,   147,   148,   115,   116,   192,     7,   206,   206,
   206,   206,   198,   122,   200,   206,     5,     7,   202,     5,
     5,   207,   133,     5,   205,   136,   137,   204,   203,   202,
   175,   205,     5,   205,   205,     5,     5,   202,   205,     7,
     7,   192,     5,     7,   202,   111,     7,   198,     7,     7,
     7,     7,   203,     7,     7,     7,   207,     7,   203,     7,
   203,   202,   202,   174,    43,   202,     7,   202,     7,     5,
   203,   107,   203,   202,     5,     7,   192,   202,     0,   203,
   203,   202,   198,   149,     0,   845,   202,   594,   922,   460,
   723,   207,   203,  1175,   160,   161,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,     5,  1032,
  1340,   192,   429,   506,   434,    99,   189,   198,     3,     4,
     5,   202,   261,   827,   212,    -1,   207,    -1,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    -1,   117,     5,   119,   120,   121,    -1,
   123,   124,   125,    -1,    -1,    -1,   129,    -1,    -1,   132,
     7,    -1,   135,    -1,    -1,   138,   139,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   147,   148,   117,    -1,   119,   120,
   121,    -1,   123,   124,   125,     7,     5,    -1,   129,    -1,
    -1,   132,    -1,    -1,   135,    -1,    -1,   138,   139,    -1,
    -1,    -1,   175,    -1,    -1,    -1,   147,   148,    -1,    -1,
   117,    -1,   119,   120,   121,     7,   123,   124,   125,    -1,
    -1,    -1,   129,    -1,    -1,   132,    -1,    -1,   135,    -1,
   203,   138,   139,    -1,   175,    -1,    -1,     7,    -1,    -1,
   147,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,
   120,   121,   203,   123,   124,   125,     7,    -1,   175,   129,
    -1,    -1,   132,    -1,    -1,   135,    -1,    -1,   138,   139,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,     7,
    -1,    -1,    -1,    -1,    -1,    -1,   203,   192,   117,    -1,
   119,   120,   121,   198,   123,   124,   125,    -1,    -1,    -1,
   129,     7,   207,   132,    -1,   175,   135,    -1,    -1,   138,
   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,   148,
    -1,    -1,   179,   180,   181,   182,   183,     7,   185,   186,
   187,   188,    -1,   203,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,   200,    -1,    -1,   175,   179,   180,   181,
   182,   183,     7,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,    -1,
    -1,    -1,    -1,    -1,   203,     7,    -1,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,
   180,   181,   182,   183,     7,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,    -1,    -1,    -1,    -1,    -1,     7,    -1,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,
     7,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,   179,   180,   181,   182,   183,     7,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   179,
   180,   181,   182,   183,     7,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,    -1,    -1,    -1,   179,   180,   181,   182,   183,     8,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,   200,    -1,   179,   180,   181,
   182,   183,     8,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,
    -1,    -1,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,    -1,    -1,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,    -1,    -1,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,   179,   180,   181,   182,   183,
   184,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,   196,    -1,    -1,   199,    -1,    -1,    -1,   179,
   180,   181,   182,   183,   208,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,   179,
   180,   181,   182,   183,   184,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,   196,    -1,    -1,   199,
    -1,   179,   180,   181,   182,   183,   206,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,   179,   180,   181,   182,   183,   206,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,   179,   180,   181,   182,   183,
   206,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,   181,
   182,   183,   206,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,
   180,   181,   182,   183,   206,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,   179,   180,   181,   182,   183,   206,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,   179,   180,   181,   182,   183,   206,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,   179,   180,   181,   182,   183,
   206,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,   181,
   182,   183,   206,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,
   180,   181,   182,   183,   206,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,   179,   180,   181,   182,   183,   206,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,   179,   180,   181,   182,   183,   206,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,   179,   180,   181,   182,   183,
   206,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,   181,
   182,   183,   206,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,
   180,   181,   182,   183,   206,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,   179,   180,   181,   182,   183,   206,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,   179,   180,   181,   182,   183,   206,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,   179,   180,   181,   182,   183,
   206,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,   181,
   182,   183,   206,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,
   180,   181,   182,   183,   206,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,   179,   180,   181,   182,   183,   206,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,   179,   180,   181,   182,   183,   206,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,   179,   180,   181,   182,   183,
   206,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,   181,
   182,   183,   206,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,
   180,   181,   182,   183,   206,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,   179,   180,   181,   182,   183,   206,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,   179,   180,   181,   182,   183,   206,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,   179,   180,   181,   182,   183,
   206,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,   181,
   182,   183,   206,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,
   180,   181,   182,   183,   206,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,   179,   180,   181,   182,   183,   206,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,   179,   180,   181,   182,   183,   206,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,   179,   180,   181,   182,   183,
   206,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,   181,
   182,   183,   206,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,
   180,   181,   182,   183,   206,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,   179,   180,   181,   182,   183,   206,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,   179,   180,   181,   182,   183,   206,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,   179,   180,   181,   182,   183,
   206,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,   181,
   182,   183,   206,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,   179,
   180,   181,   182,   183,   206,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,   179,   180,   181,   182,   183,   206,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,    -1,    -1,    -1,    -1,    -1,   206,   179,
   180,   181,   182,   183,   184,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,   196,    -1,    -1,   199,
   179,   180,   181,   182,   183,   205,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,    -1,    -1,   205,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,    -1,
    -1,    -1,    -1,   205,   179,   180,   181,   182,   183,    -1,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,
   205,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,    -1,    -1,    -1,    -1,   205,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,
    -1,    -1,    -1,    -1,   205,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,    -1,
    -1,   205,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,    -1,    -1,    -1,    -1,   205,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,
    -1,    -1,   205,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,    -1,    -1,   205,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,    -1,
    -1,    -1,    -1,   205,   179,   180,   181,   182,   183,    -1,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,
   205,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,    -1,    -1,    -1,    -1,   205,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,
    -1,    -1,    -1,    -1,   205,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,    -1,
    -1,   205,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   200,    -1,    -1,    -1,    -1,   205,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,
    -1,    -1,   205,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,   205,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,    -1,    -1,   205,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,    -1,
    -1,    -1,    -1,   205,   179,   180,   181,   182,   183,    -1,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,   200,    -1,    -1,    -1,    -1,
   205,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,   200,    -1,    -1,    -1,    -1,   205,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,   200,
    -1,    -1,    -1,    -1,   205,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,    -1,    -1,   203,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,   200,    -1,    -1,   203,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,   200,   179,   180,   181,
   182,   183,   184,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,   196,   182,   183,   199,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,   200,   182,   183,   184,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,   196,    -1,
    -1,   199,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,   200
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
#line 313 "yacc.y"
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
#line 349 "yacc.y"
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
#line 391 "yacc.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 414 "yacc.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 429 "yacc.y"
{ Help(NULL); ;
    break;}
case 21:
#line 432 "yacc.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 22:
#line 435 "yacc.y"
{ Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 23:
#line 438 "yacc.y"
{ Free(yyvsp[-3].c); Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 25:
#line 442 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 26:
#line 450 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 28:
#line 467 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 30:
#line 474 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 31:
#line 477 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 32:
#line 480 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 33:
#line 482 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 36:
#line 493 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 37:
#line 498 "yacc.y"
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
#line 510 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 519 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 40:
#line 530 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 41:
#line 535 "yacc.y"
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
#line 572 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 43:
#line 575 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 44:
#line 586 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 45:
#line 588 "yacc.y"
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
#line 604 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 47:
#line 607 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 48:
#line 610 "yacc.y"
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
#line 661 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 50:
#line 673 "yacc.y"
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
#line 697 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 52:
#line 704 "yacc.y"
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
#line 717 "yacc.y"
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
#line 735 "yacc.y"
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
#line 758 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 56:
#line 762 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 57:
#line 771 "yacc.y"
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
#line 785 "yacc.y"
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
#line 819 "yacc.y"
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
#line 832 "yacc.y"
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
#line 856 "yacc.y"
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
#line 866 "yacc.y"
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
#line 888 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 67:
#line 893 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 68:
#line 894 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 69:
#line 899 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 73:
#line 918 "yacc.y"
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
#line 938 "yacc.y"
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
#line 989 "yacc.y"
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
#line 1009 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 79:
#line 1015 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 80:
#line 1021 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 81:
#line 1024 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 82:
#line 1032 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 83:
#line 1036 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 85:
#line 1048 "yacc.y"
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
#line 1061 "yacc.y"
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
#line 1075 "yacc.y"
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
#line 1090 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1096 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1102 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1108 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1114 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1120 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1126 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1132 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1138 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1144 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1150 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1156 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1162 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1168 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1174 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1180 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1186 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 105:
#line 1193 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 107:
#line 1201 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 109:
#line 1214 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 110:
#line 1220 "yacc.y"
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
#line 1298 "yacc.y"
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
#line 1332 "yacc.y"
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
#line 1342 "yacc.y"
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
#line 1355 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 115:
#line 1357 "yacc.y"
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
#line 1368 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 117:
#line 1370 "yacc.y"
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
#line 1386 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 119:
#line 1392 "yacc.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 120:
#line 1398 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 121:
#line 1400 "yacc.y"
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
#line 1429 "yacc.y"
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
#line 1453 "yacc.y"
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
#line 1464 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 125:
#line 1470 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 126:
#line 1477 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 127:
#line 1483 "yacc.y"
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
#line 1494 "yacc.y"
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
#line 1509 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 130:
#line 1510 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 131:
#line 1511 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 132:
#line 1516 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 133:
#line 1517 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 134:
#line 1523 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 136:
#line 1528 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 137:
#line 1535 "yacc.y"
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
#line 1562 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 139:
#line 1567 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 140:
#line 1574 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 142:
#line 1583 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 143:
#line 1588 "yacc.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 144:
#line 1595 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 145:
#line 1598 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 146:
#line 1605 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 148:
#line 1615 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 149:
#line 1618 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 150:
#line 1621 "yacc.y"
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
#line 1652 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 152:
#line 1658 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 153:
#line 1665 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 155:
#line 1678 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 156:
#line 1685 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 157:
#line 1688 "yacc.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 158:
#line 1695 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 159:
#line 1698 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 160:
#line 1705 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 162:
#line 1717 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 163:
#line 1726 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 164:
#line 1735 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 165:
#line 1742 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 166:
#line 1745 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 167:
#line 1752 "yacc.y"
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
#line 1768 "yacc.y"
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
#line 1821 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 171:
#line 1824 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 172:
#line 1827 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 173:
#line 1830 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 174:
#line 1833 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 175:
#line 1844 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 177:
#line 1854 "yacc.y"
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
#line 1879 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 181:
#line 1893 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 182:
#line 1899 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 183:
#line 1906 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 184:
#line 1914 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 185:
#line 1917 "yacc.y"
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
#line 1939 "yacc.y"
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
#line 1954 "yacc.y"
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
#line 1978 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 190:
#line 1992 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 191:
#line 2001 "yacc.y"
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
#line 2025 "yacc.y"
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
#line 2050 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 194:
#line 2055 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 195:
#line 2063 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 196:
#line 2071 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 197:
#line 2081 "yacc.y"
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
#line 2097 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 199:
#line 2104 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 200:
#line 2110 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 201:
#line 2116 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 202:
#line 2124 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 203:
#line 2132 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 204:
#line 2140 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 205:
#line 2160 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 207:
#line 2171 "yacc.y"
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
#line 2198 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2211 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2217 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2224 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2232 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2235 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 216:
#line 2238 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 217:
#line 2241 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 218:
#line 2248 "yacc.y"
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
#line 2264 "yacc.y"
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
case 220:
#line 2313 "yacc.y"
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
case 222:
#line 2333 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 223:
#line 2336 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 224:
#line 2341 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 225:
#line 2346 "yacc.y"
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
#line 2358 "yacc.y"
{
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-4].c, &FlagError,
	 &BasisFunction_S.dFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError)  vyyerror("Unknown dFunction (1) for BasisFunction: %s %s", 
			       yyvsp[-4].c, Get_Valid_SX3F2N(BF_Function)) ;
      Free(yyvsp[-4].c) ;
      Get_3Function2NbrForString
	(BF_Function, yyvsp[-2].c, &FlagError,
	 &BasisFunction_S.dInvFunction, &FunctionDummy, &FunctionDummy, &d, &i) ;
      if (FlagError)  vyyerror("Unknown dFunction (2) for BasisFunction: %s %s", 
			       yyvsp[-2].c, Get_Valid_SX3F2N(BF_Function)) ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 227:
#line 2374 "yacc.y"
{ BasisFunction_S.SubFunction =
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(BasisFunction_S.SubFunction, &j) ;
      }
    ;
    break;}
case 228:
#line 2383 "yacc.y"
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
case 229:
#line 2407 "yacc.y"
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
case 231:
#line 2467 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 232:
#line 2470 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 233:
#line 2479 "yacc.y"
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
case 234:
#line 2545 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 235:
#line 2549 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 236:
#line 2556 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 238:
#line 2565 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 239:
#line 2570 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 240:
#line 2573 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 241:
#line 2580 "yacc.y"
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
case 242:
#line 2596 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 243:
#line 2602 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 244:
#line 2605 "yacc.y"
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
case 245:
#line 2624 "yacc.y"
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
case 246:
#line 2636 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 247:
#line 2642 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 248:
#line 2645 "yacc.y"
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
case 249:
#line 2660 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 250:
#line 2664 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 251:
#line 2673 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 253:
#line 2684 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 254:
#line 2689 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 255:
#line 2698 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 256:
#line 2711 "yacc.y"
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
case 257:
#line 2726 "yacc.y"
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
case 258:
#line 2800 "yacc.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 260:
#line 2816 "yacc.y"
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
case 261:
#line 2834 "yacc.y"
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
case 262:
#line 2848 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 263:
#line 2851 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 264:
#line 2854 "yacc.y"
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
case 265:
#line 2900 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 267:
#line 2910 "yacc.y"
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
case 269:
#line 2936 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 271:
#line 2948 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 272:
#line 2954 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 273:
#line 2961 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 275:
#line 2972 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 276:
#line 2978 "yacc.y"
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
case 277:
#line 2992 "yacc.y"
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
case 278:
#line 3010 "yacc.y"
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
case 280:
#line 3031 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 281:
#line 3034 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 282:
#line 3038 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 283:
#line 3041 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 284:
#line 3050 "yacc.y"
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
case 285:
#line 3089 "yacc.y"
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
case 286:
#line 3113 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 287:
#line 3118 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 288:
#line 3124 "yacc.y"
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
case 289:
#line 3274 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 290:
#line 3279 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 291:
#line 3288 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 292:
#line 3297 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 294:
#line 3305 "yacc.y"
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
case 295:
#line 3345 "yacc.y"
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
case 296:
#line 3360 "yacc.y"
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
case 297:
#line 3388 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 298:
#line 3391 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 299:
#line 3394 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 300:
#line 3397 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 301:
#line 3404 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 303:
#line 3415 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 304:
#line 3424 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 305:
#line 3434 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 306:
#line 3448 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 308:
#line 3460 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 309:
#line 3462 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 310:
#line 3464 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 311:
#line 3466 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 312:
#line 3474 "yacc.y"
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
case 314:
#line 3496 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 315:
#line 3504 "yacc.y"
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
case 316:
#line 3566 "yacc.y"
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
case 317:
#line 3612 "yacc.y"
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
case 318:
#line 3636 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 319:
#line 3645 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 320:
#line 3659 "yacc.y"
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
case 322:
#line 3688 "yacc.y"
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
case 323:
#line 3712 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 324:
#line 3720 "yacc.y"
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
case 325:
#line 3775 "yacc.y"
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
case 326:
#line 3792 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 327:
#line 3793 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 328:
#line 3794 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 329:
#line 3795 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 330:
#line 3796 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 331:
#line 3797 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 332:
#line 3798 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 333:
#line 3805 "yacc.y"
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
case 334:
#line 3819 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 335:
#line 3837 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 337:
#line 3847 "yacc.y"
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
case 339:
#line 3872 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 341:
#line 3884 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 342:
#line 3891 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 343:
#line 3898 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 344:
#line 3901 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 345:
#line 3903 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 346:
#line 3909 "yacc.y"
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
case 347:
#line 3924 "yacc.y"
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
case 348:
#line 3943 "yacc.y"
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
case 350:
#line 3962 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 351:
#line 3965 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 352:
#line 3973 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 353:
#line 3976 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 354:
#line 3981 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 355:
#line 3986 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 356:
#line 3991 "yacc.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 357:
#line 4001 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 358:
#line 4010 "yacc.y"
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
case 359:
#line 4047 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 360:
#line 4054 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 361:
#line 4057 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 362:
#line 4069 "yacc.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 363:
#line 4079 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 364:
#line 4085 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 365:
#line 4088 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 366:
#line 4100 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 367:
#line 4108 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 368:
#line 4119 "yacc.y"
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
case 369:
#line 4135 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 370:
#line 4142 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 371:
#line 4148 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 372:
#line 4154 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 373:
#line 4160 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 374:
#line 4168 "yacc.y"
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
case 375:
#line 4184 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 376:
#line 4191 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 377:
#line 4197 "yacc.y"
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
case 378:
#line 4208 "yacc.y"
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
case 379:
#line 4219 "yacc.y"
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
case 380:
#line 4235 "yacc.y"
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
case 381:
#line 4247 "yacc.y"
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
case 382:
#line 4269 "yacc.y"
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
case 383:
#line 4291 "yacc.y"
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
case 384:
#line 4304 "yacc.y"
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
case 385:
#line 4317 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 387:
#line 4326 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 389:
#line 4335 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 390:
#line 4345 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 391:
#line 4356 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 392:
#line 4365 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 393:
#line 4375 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 395:
#line 4385 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 396:
#line 4388 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 397:
#line 4397 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 398:
#line 4410 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 400:
#line 4426 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 401:
#line 4430 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 402:
#line 4434 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 403:
#line 4438 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 404:
#line 4443 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 405:
#line 4454 "yacc.y"
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
case 407:
#line 4471 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 408:
#line 4475 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 409:
#line 4479 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 410:
#line 4483 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 411:
#line 4487 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 412:
#line 4492 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 413:
#line 4503 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 415:
#line 4518 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 416:
#line 4522 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 417:
#line 4526 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 418:
#line 4530 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 419:
#line 4535 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 420:
#line 4546 "yacc.y"
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
case 422:
#line 4564 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 423:
#line 4568 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 424:
#line 4572 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 425:
#line 4576 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 426:
#line 4581 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 427:
#line 4591 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 428:
#line 4597 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 429:
#line 4603 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 430:
#line 4613 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 431:
#line 4616 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 432:
#line 4621 "yacc.y"
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
case 434:
#line 4639 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 435:
#line 4648 "yacc.y"
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
case 436:
#line 4677 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 437:
#line 4680 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 438:
#line 4683 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 439:
#line 4691 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 440:
#line 4706 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 442:
#line 4718 "yacc.y"
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
case 444:
#line 4741 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 446:
#line 4755 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 447:
#line 4762 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 448:
#line 4770 "yacc.y"
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
case 449:
#line 4816 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 450:
#line 4821 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 451:
#line 4827 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 452:
#line 4830 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 453:
#line 4835 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 455:
#line 4846 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 456:
#line 4849 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 457:
#line 4855 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 458:
#line 4860 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 459:
#line 4866 "yacc.y"
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
case 460:
#line 4879 "yacc.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 462:
#line 4893 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 463:
#line 4900 "yacc.y"
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
case 464:
#line 4928 "yacc.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown Type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 465:
#line 4937 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 466:
#line 4938 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 467:
#line 4944 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 468:
#line 4953 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 469:
#line 4970 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 471:
#line 4982 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 473:
#line 4989 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 475:
#line 5001 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 476:
#line 5008 "yacc.y"
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
case 477:
#line 5020 "yacc.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 478:
#line 5030 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 479:
#line 5035 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 480:
#line 5041 "yacc.y"
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
case 481:
#line 5058 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 482:
#line 5068 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 483:
#line 5071 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 484:
#line 5075 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 485:
#line 5086 "yacc.y"
{
      vyyerror("Plot has been superseded by Print "
	       "(Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 486:
#line 5092 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 487:
#line 5101 "yacc.y"
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
case 488:
#line 5113 "yacc.y"
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
case 489:
#line 5136 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 490:
#line 5137 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 491:
#line 5138 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 492:
#line 5139 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 493:
#line 5145 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 494:
#line 5147 "yacc.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 495:
#line 5153 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 496:
#line 5159 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 497:
#line 5166 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 498:
#line 5175 "yacc.y"
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
case 499:
#line 5189 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 500:
#line 5197 "yacc.y"
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
case 501:
#line 5210 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 502:
#line 5220 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 503:
#line 5229 "yacc.y"
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
case 504:
#line 5243 "yacc.y"
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
case 505:
#line 5262 "yacc.y"
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
case 506:
#line 5284 "yacc.y"
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
case 507:
#line 5304 "yacc.y"
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
case 509:
#line 5326 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 510:
#line 5333 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 511:
#line 5340 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 512:
#line 5347 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 513:
#line 5351 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 514:
#line 5355 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 515:
#line 5359 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 516:
#line 5363 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 517:
#line 5372 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 518:
#line 5377 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 519:
#line 5382 "yacc.y"
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
case 520:
#line 5402 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Print") ;  	
    ;
    break;}
case 521:
#line 5409 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 522:
#line 5416 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 523:
#line 5424 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 524:
#line 5432 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 525:
#line 5439 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 526:
#line 5446 "yacc.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 527:
#line 5450 "yacc.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 528:
#line 5458 "yacc.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 529:
#line 5462 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
    ;
    break;}
case 530:
#line 5474 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 531:
#line 5480 "yacc.y"
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
case 532:
#line 5527 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 534:
#line 5538 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 535:
#line 5541 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 536:
#line 5547 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 537:
#line 5548 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 539:
#line 5556 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 540:
#line 5559 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 541:
#line 5568 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 542:
#line 5571 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 543:
#line 5582 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 544:
#line 5588 "yacc.y"
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
case 545:
#line 5607 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 546:
#line 5613 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 547:
#line 5619 "yacc.y"
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
case 548:
#line 5631 "yacc.y"
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
case 551:
#line 5682 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 552:
#line 5688 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 553:
#line 5694 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 554:
#line 5705 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 555:
#line 5706 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 556:
#line 5707 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 557:
#line 5708 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 558:
#line 5709 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 559:
#line 5710 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 560:
#line 5711 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 561:
#line 5712 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 562:
#line 5713 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 563:
#line 5714 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 564:
#line 5715 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 565:
#line 5716 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 566:
#line 5717 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 567:
#line 5718 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 568:
#line 5719 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 569:
#line 5720 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 570:
#line 5721 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 571:
#line 5722 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 572:
#line 5723 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 573:
#line 5724 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 574:
#line 5725 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 575:
#line 5728 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 576:
#line 5729 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 577:
#line 5730 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 578:
#line 5731 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 579:
#line 5732 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 580:
#line 5733 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 581:
#line 5734 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 582:
#line 5735 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 583:
#line 5736 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 584:
#line 5737 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 585:
#line 5738 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 586:
#line 5739 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 587:
#line 5740 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 588:
#line 5741 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 589:
#line 5742 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 590:
#line 5743 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 591:
#line 5744 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 592:
#line 5745 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 593:
#line 5746 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 594:
#line 5747 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 595:
#line 5748 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 596:
#line 5749 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 597:
#line 5750 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 598:
#line 5751 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 599:
#line 5752 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 600:
#line 5753 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 601:
#line 5754 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 602:
#line 5755 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 603:
#line 5756 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 604:
#line 5757 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 605:
#line 5758 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 606:
#line 5759 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 607:
#line 5760 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 608:
#line 5761 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 609:
#line 5762 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 610:
#line 5763 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 611:
#line 5764 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 612:
#line 5765 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 613:
#line 5766 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 614:
#line 5767 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 615:
#line 5772 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 616:
#line 5773 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 617:
#line 5774 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 618:
#line 5775 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 619:
#line 5776 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 620:
#line 5777 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 621:
#line 5778 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 622:
#line 5780 "yacc.y"
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
case 623:
#line 5799 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 624:
#line 5802 "yacc.y"
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
case 625:
#line 5817 "yacc.y"
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
#line 5831 "yacc.y"



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


