
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
#define	tSupport	335
#define	tEntity	336
#define	tSubSpace	337
#define	tNameOfBasisFunction	338
#define	tGlobalQuantity	339
#define	tEntityType	340
#define	tEntitySubType	341
#define	tNameOfConstraint	342
#define	tFormulation	343
#define	tQuantity	344
#define	tNameOfSpace	345
#define	tIndexOfSystem	346
#define	tSymmetry	347
#define	tEquation	348
#define	tGalerkin	349
#define	tdeRham	350
#define	tGlobalTerm	351
#define	tGlobalEquation	352
#define	tDt	353
#define	tDtDof	354
#define	tDtDt	355
#define	tDtDtDof	356
#define	tJacNL	357
#define	tNeverDt	358
#define	tIn	359
#define	tResolution	360
#define	tDefineSystem	361
#define	tNameOfFormulation	362
#define	tNameOfMesh	363
#define	tFrequency	364
#define	tSolver	365
#define	tOriginSystem	366
#define	tDestinationSystem	367
#define	tOperation	368
#define	tOperationEnd	369
#define	tSetTime	370
#define	tDTime	371
#define	tSetFrequency	372
#define	tFourierTransform	373
#define	tIf	374
#define	tElse	375
#define	tLanczos	376
#define	tUpdate	377
#define	tTimeLoopTheta	378
#define	tTime0	379
#define	tTimeMax	380
#define	tTheta	381
#define	tTimeLoopNewmark	382
#define	tBeta	383
#define	tGamma	384
#define	tIterativeLoop	385
#define	tNbrMaxIteration	386
#define	tRelaxationFactor	387
#define	tIterativeTimeReduction	388
#define	tDivisionCoefficient	389
#define	tChangeOfState	390
#define	tChangeOfCoordinates	391
#define	tSystemCommand	392
#define	tPostProcessing	393
#define	tNameOfSystem	394
#define	tPostOperation	395
#define	tNameOfPostProcessing	396
#define	tUsingPost	397
#define	tAppend	398
#define	tPlot	399
#define	tPrint	400
#define	tWrite	401
#define	tAdapt	402
#define	tOnGlobal	403
#define	tOnRegion	404
#define	tOnElementsOf	405
#define	tOnGrid	406
#define	tOnCut	407
#define	tOnPoint	408
#define	tOnLine	409
#define	tOnPlane	410
#define	tOnBox	411
#define	tWithArgument	412
#define	tFile	413
#define	tDepth	414
#define	tDimension	415
#define	tTimeStep	416
#define	tHarmonicToTime	417
#define	tFormat	418
#define	tHeader	419
#define	tFooter	420
#define	tSkin	421
#define	tSmoothing	422
#define	tTarget	423
#define	tSort	424
#define	tIso	425
#define	tNoNewLine	426
#define	tFlag	427
#define	tBreak	428
#define	tHelp	429
#define	tCpu	430
#define	tDEF	431
#define	tAND	432
#define	tOR	433
#define	tNOTEQUAL	434
#define	tEQUAL	435
#define	tAPPROXEQUAL	436
#define	tLESSOREQUAL	437
#define	tGREATEROREQUAL	438
#define	tLESSLESS	439
#define	tGREATERGREATER	440
#define	tCROSSPRODUCT	441
#define	UNARYPREC	442

#line 1 "yacc.y"

/* $Id: yacc.tab.c,v 1.34 2000-12-06 14:26:05 dular Exp $ */

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



#define	YYFINAL		1576
#define	YYFLAG		-32768
#define	YYNTBASE	209

#define YYTRANSLATE(x) ((unsigned)(x) <= 442 ? yytranslate[x] : 394)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   197,     2,   199,   200,   194,     2,     2,   206,
   207,   192,   190,   205,   191,   208,   193,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   184,
     2,   185,   178,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   203,     2,   204,   198,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   201,     2,   202,     2,     2,     2,     2,     2,
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
   177,   179,   180,   181,   182,   183,   186,   187,   188,   189,
   195,   196
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
   794,   797,   801,   805,   810,   815,   823,   827,   831,   832,
   833,   834,   853,   854,   859,   860,   863,   867,   871,   875,
   877,   881,   882,   886,   888,   892,   893,   897,   898,   903,
   904,   907,   911,   915,   919,   920,   925,   926,   929,   933,
   939,   943,   947,   952,   953,   956,   960,   962,   963,   966,
   970,   975,   979,   984,   989,   990,   995,   996,   999,  1003,
  1007,  1011,  1015,  1016,  1023,  1027,  1028,  1034,  1038,  1042,
  1046,  1050,  1051,  1055,  1056,  1059,  1064,  1069,  1074,  1079,
  1080,  1083,  1087,  1091,  1095,  1096,  1099,  1103,  1107,  1111,
  1115,  1116,  1119,  1120,  1121,  1131,  1135,  1139,  1143,  1144,
  1147,  1151,  1152,  1153,  1163,  1164,  1166,  1168,  1170,  1172,
  1174,  1176,  1181,  1185,  1186,  1189,  1193,  1195,  1196,  1199,
  1203,  1208,  1213,  1214,  1220,  1221,  1226,  1227,  1230,  1234,
  1238,  1242,  1246,  1250,  1254,  1258,  1262,  1265,  1269,  1270,
  1274,  1276,  1280,  1281,  1285,  1286,  1289,  1293,  1297,  1302,
  1307,  1312,  1317,  1323,  1329,  1332,  1340,  1352,  1360,  1368,
  1378,  1390,  1404,  1420,  1421,  1429,  1430,  1438,  1446,  1450,
  1452,  1454,  1455,  1458,  1462,  1466,  1469,  1470,  1473,  1477,
  1481,  1485,  1489,  1494,  1495,  1498,  1502,  1506,  1510,  1514,
  1518,  1523,  1524,  1527,  1531,  1535,  1539,  1543,  1548,  1549,
  1552,  1556,  1560,  1564,  1568,  1572,  1577,  1582,  1587,  1588,
  1593,  1594,  1597,  1601,  1605,  1609,  1613,  1617,  1621,  1622,
  1625,  1629,  1631,  1632,  1635,  1639,  1644,  1649,  1653,  1658,
  1659,  1664,  1665,  1668,  1672,  1677,  1678,  1684,  1690,  1691,
  1694,  1695,  1702,  1706,  1707,  1712,  1716,  1720,  1721,  1724,
  1728,  1730,  1731,  1734,  1738,  1742,  1746,  1750,  1755,  1756,
  1765,  1766,  1767,  1771,  1779,  1787,  1791,  1798,  1800,  1802,
  1804,  1806,  1807,  1811,  1813,  1816,  1819,  1844,  1847,  1848,
  1863,  1872,  1893,  1923,  1962,  1975,  1976,  1979,  1983,  1988,
  1993,  1997,  2000,  2004,  2008,  2012,  2016,  2020,  2024,  2028,
  2032,  2036,  2040,  2044,  2048,  2052,  2058,  2061,  2065,  2066,
  2069,  2070,  2074,  2076,  2080,  2081,  2083,  2087,  2089,  2091,
  2095,  2099,  2103,  2110,  2115,  2120,  2127,  2137,  2143,  2144,
  2148,  2154,  2160,  2162,  2164,  2166,  2168,  2170,  2172,  2174,
  2176,  2178,  2180,  2182,  2184,  2186,  2188,  2190,  2192,  2194,
  2196,  2198,  2200,  2202,  2204,  2208,  2211,  2214,  2218,  2222,
  2226,  2230,  2234,  2238,  2242,  2246,  2250,  2254,  2258,  2262,
  2266,  2270,  2275,  2280,  2285,  2290,  2295,  2300,  2305,  2310,
  2315,  2320,  2327,  2332,  2337,  2342,  2347,  2352,  2357,  2364,
  2371,  2378,  2384,  2387,  2389,  2391,  2393,  2395,  2397,  2399,
  2401,  2403,  2405,  2407
};

static const short yyrhs[] = {    -1,
   210,   211,     0,     0,     0,   211,   212,   213,     0,    43,
   201,   216,   202,     0,    79,   201,   236,   202,     0,    50,
   201,   268,   202,     0,    63,   201,   253,   202,     0,    65,
   201,   259,   202,     0,    75,   201,   275,   202,     0,    89,
   201,   298,   202,     0,   106,   201,   324,   202,     0,   139,
   201,   354,   202,     0,   141,   201,   366,   202,     0,   370,
     0,   388,     0,    10,   393,     0,   214,     0,   175,     7,
     0,   175,     5,     7,     0,   175,     5,     5,     7,     0,
   175,     5,     5,     5,     7,     0,   176,     7,     0,     0,
   215,   374,     0,     0,     0,   216,   217,   218,     0,     5,
   177,   220,     7,     0,     5,   235,   177,   220,     7,     0,
     0,     5,   233,   177,   219,   220,     7,     0,    44,   203,
   231,   204,     7,     0,   388,     0,     0,     0,   224,   203,
   221,   225,   222,   226,   204,     0,   199,   228,     0,   220,
     0,     5,   234,     0,    51,     0,     5,     0,   228,     0,
    45,     0,     0,   232,   227,   228,     0,   232,    46,     5,
   234,     0,     5,     0,   230,     0,   201,   229,   202,     0,
     0,   229,   232,   230,     0,   229,   232,   191,   230,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   203,   391,
   204,     3,     0,     5,     0,     5,   201,   391,   202,     0,
     5,   201,   202,     0,     0,   231,   232,     5,     0,   231,
   232,     5,   201,   391,   202,     0,     0,   205,     0,   201,
   199,   391,   202,     0,     0,   201,   202,     0,   201,   391,
   202,     0,     0,   236,   237,     0,    47,   203,   238,   204,
     7,     0,     5,   203,   204,   177,   239,     7,     0,     5,
   203,   223,   204,   177,   239,     7,     0,   388,     0,     0,
   238,   232,     5,     0,    11,   203,   391,   204,     0,    79,
   203,     5,   204,     0,     0,   240,   241,     0,     0,   242,
   243,     0,   246,     0,     0,     0,   243,   178,   244,   243,
     8,   245,   243,     0,   243,   192,   243,     0,   243,   195,
   243,     0,    41,   203,   243,   205,   243,   204,     0,   243,
   193,   243,     0,   243,   190,   243,     0,   243,   191,   243,
     0,   243,   194,   243,     0,   243,   198,   243,     0,   243,
   184,   243,     0,   243,   185,   243,     0,   243,   186,   243,
     0,   243,   187,   243,     0,   243,   182,   243,     0,   243,
   181,   243,     0,   243,   183,   243,     0,   243,   179,   243,
     0,   243,   180,   243,     0,   191,   243,     0,   190,   243,
     0,   197,   243,     0,   206,   243,   207,     0,   392,     0,
   390,   250,   252,     0,     5,   323,     0,   323,     0,   323,
   250,     0,     0,    99,   247,   203,   241,   204,     0,     0,
    42,   248,   203,     3,   205,   391,   205,   241,   205,   241,
   204,     0,    38,   203,   323,   204,     0,    40,   203,   323,
   204,     0,     0,    39,   249,   203,   241,   205,   223,   204,
     0,   184,     5,   185,   203,   241,   204,     0,   200,     5,
     0,   200,   162,     0,   200,   117,     0,   200,     3,     0,
   246,   199,     3,     0,   199,     3,     0,   203,   208,   204,
     0,   203,   204,     0,   203,   251,   204,     0,   243,     0,
   251,   205,   243,     0,     0,   201,   386,   202,     0,   201,
    51,   203,   223,   204,   202,     0,   201,    48,   203,     5,
   204,   202,     0,     0,   253,   201,   254,   202,     0,     0,
   254,   255,     0,    76,     5,     7,     0,    64,   201,   256,
   202,     0,     0,   256,   201,   257,   202,     0,     0,   257,
   258,     0,    51,   223,     7,     0,    51,    45,     7,     0,
    63,     5,   252,     7,     0,     0,   259,   201,   260,   202,
     0,     0,   260,   261,     0,    76,     5,     7,     0,    68,
   239,     7,     0,    64,   201,   262,   202,     0,     0,   262,
   201,   263,   202,     0,     0,   263,   264,     0,    66,     5,
     7,     0,    67,     5,     7,     0,    64,   201,   265,   202,
     0,     0,   265,   201,   266,   202,     0,     0,   266,   267,
     0,    69,     5,     7,     0,    70,   391,     7,     0,    71,
   391,     7,     0,    72,   391,     7,     0,    73,   391,     7,
     0,    74,   391,     7,     0,     0,   268,   269,     0,   201,
   270,   202,     0,   388,     0,     0,   270,   271,     0,    76,
     5,     7,     0,    76,     5,   233,     7,     0,    66,     5,
     7,     0,    64,   201,   272,   202,     0,    64,     5,   201,
   272,   202,     0,     0,   272,   201,   273,   202,     0,     0,
   273,   274,     0,    66,     5,     7,     0,    51,   223,     7,
     0,    52,   223,     7,     0,    58,   239,     7,     0,    57,
   239,     7,     0,    62,     5,     7,     0,    59,   201,     3,
   232,     3,   202,     7,     0,    53,   223,     7,     0,    54,
   223,     7,     0,    79,   239,     7,     0,    56,   239,     7,
     0,    55,   239,     7,     0,    79,   203,   239,   205,   239,
   204,     7,     0,    56,   203,   239,   205,   239,   204,     7,
     0,    55,   203,   239,   205,   239,   204,     7,     0,     0,
   275,   276,     0,   201,   277,   202,     0,   388,     0,     0,
   277,   278,     0,    76,     5,     7,     0,    76,     5,   233,
     7,     0,    66,     5,     7,     0,    77,   201,   279,   202,
     0,    83,   201,   285,   202,     0,    85,   201,   292,   202,
     0,    50,   201,   295,   202,     0,     0,   279,   201,   280,
   202,     0,     0,   280,   281,     0,    76,     5,     7,     0,
    78,     5,     7,     0,    78,     5,   233,     7,     0,    79,
     5,   282,     7,     0,    80,   201,     5,   232,     5,   202,
     7,     0,    81,   223,     7,     0,    82,   223,     7,     0,
     0,     0,     0,   201,    90,     5,     7,    89,     5,   233,
     7,   283,    43,   223,     7,   284,   106,     5,   234,     7,
   202,     0,     0,   285,   201,   286,   202,     0,     0,   286,
   287,     0,    76,     5,     7,     0,    84,   288,     7,     0,
    78,   290,     7,     0,     5,     0,   201,   289,   202,     0,
     0,   289,   232,     5,     0,     5,     0,   201,   291,   202,
     0,     0,   291,   232,     5,     0,     0,   292,   201,   293,
   202,     0,     0,   293,   294,     0,    76,     5,     7,     0,
    66,     5,     7,     0,    78,     5,     7,     0,     0,   295,
   201,   296,   202,     0,     0,   296,   297,     0,    78,     5,
     7,     0,    82,   224,    88,     5,     7,     0,    86,   224,
     7,     0,    87,   227,     7,     0,    88,     5,   234,     7,
     0,     0,   298,   299,     0,   201,   300,   202,     0,   388,
     0,     0,   300,   301,     0,    76,     5,     7,     0,    76,
     5,   233,     7,     0,    66,     5,     7,     0,    90,   201,
   302,   202,     0,    94,   201,   308,   202,     0,     0,   302,
   201,   303,   202,     0,     0,   303,   304,     0,    76,     5,
     7,     0,    66,    85,     7,     0,    66,    95,     7,     0,
    66,     5,     7,     0,     0,    91,     5,   234,   305,   307,
     7,     0,    92,     3,     7,     0,     0,   203,   306,   241,
   204,     7,     0,   105,   223,     7,     0,    65,     5,     7,
     0,    63,     5,     7,     0,    93,     3,     7,     0,     0,
   203,     5,   204,     0,     0,   308,   309,     0,    95,   201,
   314,   202,     0,    96,   201,   314,   202,     0,    97,   201,
   318,   202,     0,    98,   201,   310,   202,     0,     0,   310,
   311,     0,    66,     5,     7,     0,    88,     5,     7,     0,
   201,   312,   202,     0,     0,   312,   313,     0,    60,   323,
     7,     0,    61,   323,     7,     0,    94,   323,     7,     0,
   105,   223,     7,     0,     0,   314,   315,     0,     0,     0,
   322,   203,   316,   241,   317,   205,   241,   204,     7,     0,
   105,   223,     7,     0,    63,     5,     7,     0,    65,     5,
     7,     0,     0,   318,   319,     0,   105,   223,     7,     0,
     0,     0,   322,   203,   320,   241,   321,   205,   323,   204,
     7,     0,     0,    99,     0,   100,     0,   101,     0,   102,
     0,   103,     0,   104,     0,   201,     5,     5,   202,     0,
   201,     5,   202,     0,     0,   324,   325,     0,   201,   326,
   202,     0,   388,     0,     0,   326,   327,     0,    76,     5,
     7,     0,    76,     5,   233,     7,     0,   107,   201,   329,
   202,     0,     0,   114,   328,   201,   336,   202,     0,     0,
   329,   201,   330,   202,     0,     0,   330,   331,     0,    76,
     5,     7,     0,    66,     5,     7,     0,   108,   332,     7,
     0,   109,   393,     7,     0,   112,   334,     7,     0,   113,
     5,     7,     0,   110,   385,     7,     0,   111,   393,     7,
     0,     5,   234,     0,   201,   333,   202,     0,     0,   333,
   232,     5,     0,     5,     0,   201,   335,   202,     0,     0,
   335,   232,     5,     0,     0,   336,   337,     0,     5,     5,
     7,     0,   116,   239,     7,     0,   124,   201,   343,   202,
     0,   128,   201,   345,   202,     0,   131,   201,   347,   202,
     0,   134,   201,   349,   202,     0,     5,   203,     5,   204,
     7,     0,   116,   203,   239,   204,     7,     0,   174,     7,
     0,   120,   203,   239,   204,   201,   336,   202,     0,   120,
   203,   239,   204,   201,   336,   202,   121,   201,   336,   202,
     0,   118,   203,     5,   205,   239,   204,     7,     0,   123,
   203,     5,   205,   239,   204,     7,     0,   119,   203,     5,
   205,     5,   205,   385,   204,     7,     0,   122,   203,     5,
   205,   391,   205,   385,   205,   391,   204,     7,     0,   124,
   203,   391,   205,   391,   205,   239,   205,   239,   204,   201,
   336,   202,     0,   128,   203,   391,   205,   391,   205,   239,
   205,   391,   205,   391,   204,   201,   336,   202,     0,     0,
   146,   338,   203,   340,   341,   204,     7,     0,     0,   147,
   339,   203,   340,   341,   204,     7,     0,   137,   203,   223,
   205,   239,   204,     7,     0,   138,     6,     7,     0,   383,
     0,     5,     0,     0,   341,   342,     0,   205,   159,   393,
     0,   205,   162,   385,     0,   205,   385,     0,     0,   343,
   344,     0,   125,   391,     7,     0,   126,   391,     7,     0,
   117,   239,     7,     0,   127,   239,     7,     0,   114,   201,
   336,   202,     0,     0,   345,   346,     0,   125,   391,     7,
     0,   126,   391,     7,     0,   117,   239,     7,     0,   129,
   391,     7,     0,   130,   391,     7,     0,   114,   201,   336,
   202,     0,     0,   347,   348,     0,   132,   391,     7,     0,
   133,   239,     7,     0,    68,   391,     7,     0,   173,   391,
     7,     0,   114,   201,   336,   202,     0,     0,   349,   350,
     0,   132,   391,     7,     0,   135,   391,     7,     0,    68,
   391,     7,     0,   173,   391,     7,     0,   107,     5,     7,
     0,   136,   201,   351,   202,     0,   114,   201,   336,   202,
     0,   115,   201,   336,   202,     0,     0,   351,   201,   352,
   202,     0,     0,   352,   353,     0,    66,     5,     7,     0,
    90,     5,     7,     0,   105,   223,     7,     0,    68,   391,
     7,     0,    79,   239,     7,     0,   173,     5,     7,     0,
     0,   354,   355,     0,   201,   356,   202,     0,   388,     0,
     0,   356,   357,     0,    76,     5,     7,     0,    76,     5,
   233,     7,     0,   108,     5,   234,     7,     0,   140,     5,
     7,     0,    90,   201,   358,   202,     0,     0,   358,   201,
   359,   202,     0,     0,   359,   360,     0,    76,     5,     7,
     0,    57,   201,   361,   202,     0,     0,   361,    95,   201,
   362,   202,     0,   361,     5,   201,   362,   202,     0,     0,
   362,   363,     0,     0,   322,   203,   364,   241,   204,     7,
     0,    66,     5,     7,     0,     0,   105,   365,   223,     7,
     0,    63,     5,     7,     0,    65,     5,     7,     0,     0,
   366,   367,     0,   201,   368,   202,     0,   388,     0,     0,
   368,   369,     0,    76,     5,     7,     0,   142,     5,     7,
     0,   164,     5,     7,     0,   144,   393,     7,     0,   114,
   201,   372,   202,     0,     0,   141,     5,   143,     5,   371,
   201,   372,   202,     0,     0,     0,   372,   373,   374,     0,
   145,   203,   375,   378,   380,   204,     7,     0,   146,   203,
   375,   378,   380,   204,     7,     0,     5,   377,   205,     0,
     5,   377,   376,     5,   377,   205,     0,   192,     0,   193,
     0,   190,     0,   191,     0,     0,   203,   223,   204,     0,
   149,     0,   150,   223,     0,   151,   223,     0,   153,   201,
   201,   391,   205,   391,   205,   391,   202,   201,   391,   205,
   391,   205,   391,   202,   201,   391,   205,   391,   205,   391,
   202,   202,     0,   152,   223,     0,     0,   152,   201,   239,
   205,   239,   205,   239,   202,   201,   385,   379,   205,   385,
   202,     0,   154,   201,   391,   205,   391,   205,   391,   202,
     0,   155,   201,   201,   391,   205,   391,   205,   391,   202,
   201,   391,   205,   391,   205,   391,   202,   202,   201,   391,
   202,     0,   156,   201,   201,   391,   205,   391,   205,   391,
   202,   201,   391,   205,   391,   205,   391,   202,   201,   391,
   205,   391,   205,   391,   202,   202,   201,   391,   205,   391,
   202,     0,   157,   201,   201,   391,   205,   391,   205,   391,
   202,   201,   391,   205,   391,   205,   391,   202,   201,   391,
   205,   391,   205,   391,   202,   201,   391,   205,   391,   205,
   391,   202,   202,   201,   391,   205,   391,   205,   391,   202,
     0,   150,   223,   158,     5,   201,   391,   205,   391,   202,
   201,   391,   202,     0,     0,   380,   381,     0,   205,   159,
   393,     0,   205,   159,   185,   393,     0,   205,   159,   189,
   393,     0,   205,   160,   391,     0,   205,   167,     0,   205,
   168,   391,     0,   205,   163,   391,     0,   205,   164,     5,
     0,   205,   165,   382,     0,   205,   166,   382,     0,   205,
   164,   382,     0,   205,   161,   391,     0,   205,   162,   385,
     0,   205,   148,     5,     0,   205,   170,     5,     0,   205,
   169,   391,     0,   205,    57,   385,     0,   205,   171,   391,
     0,   205,   171,   201,   386,   202,     0,   205,   172,     0,
   205,   110,   385,     0,     0,   382,     6,     0,     0,   201,
   384,   202,     0,   239,     0,   384,   205,   239,     0,     0,
   391,     0,   201,   386,   202,     0,   391,     0,   387,     0,
   386,   205,   391,     0,   386,   205,   387,     0,   391,     8,
   391,     0,   391,     8,   203,   391,   204,   391,     0,     5,
   177,   391,     7,     0,     5,   177,     6,     7,     0,     5,
   177,   201,   386,   202,     7,     0,     5,   177,    49,   203,
     5,   205,     5,   204,     7,     0,    12,   203,   389,   204,
     7,     0,     0,   389,   232,     5,     0,   389,   232,     5,
   177,   391,     0,   389,   232,     5,   177,     6,     0,    18,
     0,    19,     0,    20,     0,    21,     0,    22,     0,    23,
     0,    24,     0,    25,     0,    26,     0,    27,     0,    28,
     0,    29,     0,    30,     0,    31,     0,    32,     0,    33,
     0,    34,     0,    35,     0,    36,     0,    37,     0,     5,
     0,   392,     0,   206,   391,   207,     0,   191,   391,     0,
   197,   391,     0,   391,   191,   391,     0,   391,   190,   391,
     0,   391,   192,   391,     0,   391,   193,   391,     0,   391,
   194,   391,     0,   391,   198,   391,     0,   391,   184,   391,
     0,   391,   185,   391,     0,   391,   186,   391,     0,   391,
   187,   391,     0,   391,   182,   391,     0,   391,   181,   391,
     0,   391,   179,   391,     0,   391,   180,   391,     0,    18,
   203,   391,   204,     0,    19,   203,   391,   204,     0,    20,
   203,   391,   204,     0,    21,   203,   391,   204,     0,    22,
   203,   391,   204,     0,    23,   203,   391,   204,     0,    24,
   203,   391,   204,     0,    25,   203,   391,   204,     0,    26,
   203,   391,   204,     0,    27,   203,   391,   204,     0,    28,
   203,   391,   205,   391,   204,     0,    29,   203,   391,   204,
     0,    30,   203,   391,   204,     0,    31,   203,   391,   204,
     0,    32,   203,   391,   204,     0,    33,   203,   391,   204,
     0,    34,   203,   391,   204,     0,    35,   203,   391,   205,
   391,   204,     0,    36,   203,   391,   205,   391,   204,     0,
    37,   203,   391,   205,   391,   204,     0,   391,   178,   391,
     8,   391,     0,   391,   199,     0,     4,     0,     3,     0,
    13,     0,    14,     0,    15,     0,    16,     0,    17,     0,
     5,     0,     6,     0,     5,     0,     9,   203,   393,   205,
   393,   204,     0
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
  2208,  2216,  2223,  2231,  2234,  2237,  2240,  2245,  2263,  2298,
  2313,  2317,  2322,  2327,  2332,  2344,  2360,  2384,  2439,  2443,
  2447,  2456,  2519,  2525,  2530,  2535,  2539,  2546,  2549,  2554,
  2572,  2577,  2581,  2598,  2612,  2617,  2621,  2634,  2640,  2647,
  2654,  2658,  2665,  2674,  2685,  2702,  2774,  2786,  2790,  2810,
  2824,  2827,  2830,  2874,  2881,  2884,  2906,  2910,  2918,  2922,
  2930,  2937,  2946,  2948,  2953,  2968,  2984,  3001,  3005,  3010,
  3014,  3017,  3026,  3065,  3089,  3094,  3100,  3250,  3255,  3264,
  3273,  3278,  3281,  3319,  3336,  3362,  3367,  3370,  3373,  3378,
  3386,  3389,  3400,  3410,  3422,  3431,  3434,  3438,  3440,  3442,
  3448,  3466,  3470,  3481,  3542,  3588,  3612,  3621,  3633,  3650,
  3654,  3688,  3697,  3751,  3767,  3770,  3771,  3772,  3773,  3774,
  3775,  3779,  3795,  3811,  3818,  3821,  3842,  3846,  3854,  3858,
  3867,  3874,  3877,  3879,  3884,  3900,  3917,  3932,  3936,  3941,
  3949,  3952,  3957,  3962,  3967,  3977,  3984,  4023,  4028,  4033,
  4043,  4055,  4059,  4064,  4075,  4084,  4091,  4111,  4118,  4124,
  4130,  4136,  4144,  4160,  4167,  4173,  4184,  4195,  4211,  4223,
  4245,  4266,  4279,  4293,  4300,  4302,  4309,  4311,  4321,  4331,
  4341,  4351,  4357,  4360,  4364,  4373,  4384,  4396,  4400,  4406,
  4410,  4414,  4419,  4428,  4441,  4445,  4451,  4455,  4459,  4463,
  4468,  4477,  4489,  4492,  4498,  4502,  4506,  4511,  4520,  4535,
  4538,  4544,  4548,  4552,  4557,  4567,  4573,  4579,  4588,  4592,
  4596,  4610,  4613,  4624,  4653,  4656,  4659,  4667,  4681,  4689,
  4692,  4713,  4716,  4727,  4730,  4738,  4746,  4792,  4797,  4802,
  4806,  4810,  4817,  4821,  4825,  4830,  4836,  4842,  4854,  4865,
  4868,  4876,  4904,  4914,  4914,  4920,  4929,  4945,  4953,  4956,
  4961,  4964,  4973,  4976,  4984,  4996,  5006,  5011,  5016,  5034,
  5043,  5047,  5052,  5060,  5068,  5075,  5089,  5111,  5114,  5115,
  5116,  5119,  5123,  5127,  5135,  5142,  5149,  5165,  5172,  5186,
  5196,  5204,  5217,  5235,  5259,  5279,  5298,  5301,  5309,  5316,
  5323,  5327,  5331,  5335,  5339,  5348,  5353,  5358,  5378,  5385,
  5392,  5400,  5408,  5415,  5422,  5426,  5434,  5438,  5449,  5456,
  5502,  5508,  5512,  5517,  5522,  5525,  5526,  5530,  5535,  5544,
  5547,  5556,  5564,  5581,  5589,  5595,  5607,  5651,  5655,  5658,
  5664,  5670,  5681,  5683,  5684,  5685,  5686,  5687,  5688,  5689,
  5690,  5691,  5692,  5693,  5694,  5695,  5696,  5697,  5698,  5699,
  5700,  5701,  5702,  5704,  5706,  5707,  5708,  5709,  5710,  5711,
  5712,  5713,  5714,  5715,  5716,  5717,  5718,  5719,  5720,  5721,
  5722,  5723,  5724,  5725,  5726,  5727,  5728,  5729,  5730,  5731,
  5732,  5733,  5734,  5735,  5736,  5737,  5738,  5739,  5740,  5741,
  5742,  5743,  5744,  5747,  5750,  5751,  5752,  5753,  5754,  5755,
  5756,  5773,  5778,  5793
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
"tFunction","tdFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction",
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
   210,   209,   211,   212,   211,   213,   213,   213,   213,   213,
   213,   213,   213,   213,   213,   213,   213,   213,   213,   214,
   214,   214,   214,   214,   215,   214,   216,   217,   216,   218,
   218,   219,   218,   218,   218,   221,   222,   220,   220,   223,
   223,   224,   224,   225,   225,   226,   226,   226,   227,   228,
   228,   229,   229,   229,   230,   230,   230,   230,   230,   230,
   231,   231,   231,   232,   232,   233,   234,   234,   235,   236,
   236,   237,   237,   237,   237,   238,   238,   239,   239,   240,
   239,   242,   241,   243,   244,   245,   243,   243,   243,   243,
   243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
   243,   243,   243,   243,   243,   243,   243,   246,   246,   246,
   246,   246,   246,   247,   246,   248,   246,   246,   246,   249,
   246,   246,   246,   246,   246,   246,   246,   246,   250,   250,
   250,   251,   251,   252,   252,   252,   252,   253,   253,   254,
   254,   255,   255,   256,   256,   257,   257,   258,   258,   258,
   259,   259,   260,   260,   261,   261,   261,   262,   262,   263,
   263,   264,   264,   264,   265,   265,   266,   266,   267,   267,
   267,   267,   267,   267,   268,   268,   269,   269,   270,   270,
   271,   271,   271,   271,   271,   272,   272,   273,   273,   274,
   274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
   274,   274,   274,   274,   275,   275,   276,   276,   277,   277,
   278,   278,   278,   278,   278,   278,   278,   279,   279,   280,
   280,   281,   281,   281,   281,   281,   281,   281,   282,   283,
   284,   282,   285,   285,   286,   286,   287,   287,   287,   288,
   288,   289,   289,   290,   290,   291,   291,   292,   292,   293,
   293,   294,   294,   294,   295,   295,   296,   296,   297,   297,
   297,   297,   297,   298,   298,   299,   299,   300,   300,   301,
   301,   301,   301,   301,   302,   302,   303,   303,   304,   304,
   304,   304,   305,   304,   304,   306,   304,   304,   304,   304,
   304,   307,   307,   308,   308,   309,   309,   309,   309,   310,
   310,   311,   311,   311,   312,   312,   313,   313,   313,   313,
   314,   314,   316,   317,   315,   315,   315,   315,   318,   318,
   319,   320,   321,   319,   322,   322,   322,   322,   322,   322,
   322,   323,   323,   324,   324,   325,   325,   326,   326,   327,
   327,   327,   328,   327,   329,   329,   330,   330,   331,   331,
   331,   331,   331,   331,   331,   331,   332,   332,   333,   333,
   334,   334,   335,   335,   336,   336,   337,   337,   337,   337,
   337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
   337,   337,   337,   338,   337,   339,   337,   337,   337,   340,
   340,   341,   341,   342,   342,   342,   343,   343,   344,   344,
   344,   344,   344,   345,   345,   346,   346,   346,   346,   346,
   346,   347,   347,   348,   348,   348,   348,   348,   349,   349,
   350,   350,   350,   350,   350,   350,   350,   350,   351,   351,
   352,   352,   353,   353,   353,   353,   353,   353,   354,   354,
   355,   355,   356,   356,   357,   357,   357,   357,   357,   358,
   358,   359,   359,   360,   360,   361,   361,   361,   362,   362,
   364,   363,   363,   365,   363,   363,   363,   366,   366,   367,
   367,   368,   368,   369,   369,   369,   369,   369,   371,   370,
   372,   373,   372,   374,   374,   375,   375,   376,   376,   376,
   376,   377,   377,   378,   378,   378,   378,   378,   379,   378,
   378,   378,   378,   378,   378,   380,   380,   381,   381,   381,
   381,   381,   381,   381,   381,   381,   381,   381,   381,   381,
   381,   381,   381,   381,   381,   381,   381,   381,   382,   382,
   383,   383,   384,   384,   385,   385,   385,   386,   386,   386,
   386,   387,   387,   388,   388,   388,   388,   388,   389,   389,
   389,   389,   390,   390,   390,   390,   390,   390,   390,   390,
   390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
   390,   390,   390,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   392,   392,   392,   392,   392,   392,   392,
   392,   393,   393,   393
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
     2,     3,     3,     4,     4,     7,     3,     3,     0,     0,
     0,    18,     0,     4,     0,     2,     3,     3,     3,     1,
     3,     0,     3,     1,     3,     0,     3,     0,     4,     0,
     2,     3,     3,     3,     0,     4,     0,     2,     3,     5,
     3,     3,     4,     0,     2,     3,     1,     0,     2,     3,
     4,     3,     4,     4,     0,     4,     0,     2,     3,     3,
     3,     3,     0,     6,     3,     0,     5,     3,     3,     3,
     3,     0,     3,     0,     2,     4,     4,     4,     4,     0,
     2,     3,     3,     3,     0,     2,     3,     3,     3,     3,
     0,     2,     0,     0,     9,     3,     3,     3,     0,     2,
     3,     0,     0,     9,     0,     1,     1,     1,     1,     1,
     1,     4,     3,     0,     2,     3,     1,     0,     2,     3,
     4,     4,     0,     5,     0,     4,     0,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     2,     3,     0,     3,
     1,     3,     0,     3,     0,     2,     3,     3,     4,     4,
     4,     4,     5,     5,     2,     7,    11,     7,     7,     9,
    11,    13,    15,     0,     7,     0,     7,     7,     3,     1,
     1,     0,     2,     3,     3,     2,     0,     2,     3,     3,
     3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     4,     0,     2,
     3,     3,     3,     3,     3,     4,     4,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     4,     4,     3,     4,     0,
     4,     0,     2,     3,     4,     0,     5,     5,     0,     2,
     0,     6,     3,     0,     4,     3,     3,     0,     2,     3,
     1,     0,     2,     3,     3,     3,     3,     4,     0,     8,
     0,     0,     3,     7,     7,     3,     6,     1,     1,     1,
     1,     0,     3,     1,     2,     2,    24,     2,     0,    14,
     8,    20,    29,    38,    12,     0,     2,     3,     4,     4,
     3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     5,     2,     3,     0,     2,
     0,     3,     1,     3,     0,     1,     3,     1,     1,     3,
     3,     3,     6,     4,     4,     6,     9,     5,     0,     3,
     5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     3,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     6,     4,     4,     4,     4,     4,     4,     6,     6,
     6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   623,   622,     0,    18,   549,    27,
   175,   138,   151,   205,    70,   264,   334,   439,     0,   468,
     0,    20,    24,     0,     0,    26,   615,   614,   621,     0,
   616,   617,   618,   619,   620,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   574,     0,    64,    28,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    21,     0,     0,   545,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   576,   577,     0,   539,   538,     0,   544,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   613,     0,     0,    65,     0,     6,     0,
   179,     8,   176,   178,   140,     9,   153,    10,   209,    11,
   206,   208,     0,     0,     7,    71,    75,   268,    12,   265,
   267,   338,    13,   335,   337,   443,    14,   440,   442,   479,
   472,    15,   469,   471,     0,    22,   492,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   575,     0,   590,   591,   589,   588,   584,
   585,   586,   587,   579,   578,   580,   581,   582,   583,     0,
   548,   550,     0,     0,    29,    35,     0,     0,     0,     0,
     0,    76,     0,     0,     0,     0,     0,    23,     0,     0,
   494,     0,     0,     0,     0,     0,     0,     0,     0,   506,
   506,   592,   593,   594,   595,   596,   597,   598,   599,   600,
   601,     0,   603,   604,   605,   606,   607,   608,     0,     0,
     0,     0,   546,   541,   540,     0,   542,     0,     0,     0,
     0,     0,     0,     0,    61,     0,     0,     0,   177,   180,
     0,     0,   139,   141,     0,    80,     0,   152,   154,     0,
     0,     0,     0,     0,     0,   207,   210,    67,    42,     0,
     0,    40,     0,     0,    64,     0,     0,     0,     0,   266,
   269,     0,     0,   343,   336,   339,     0,     0,     0,     0,
   441,   444,   481,     0,     0,     0,     0,     0,   470,   473,
     0,   490,   491,   488,   489,   486,     0,   495,   496,    80,
   498,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   612,   624,   552,   551,   621,     0,
     0,     0,    32,     0,    64,     0,   186,     0,     0,   144,
     0,   158,     0,     0,     0,    82,     0,   255,     0,     0,
   218,   233,   248,     0,    41,    55,    58,    52,    39,    50,
    80,     0,    36,     0,     0,     0,     0,   275,   294,     0,
   345,     0,     0,   450,    67,     0,   482,     0,   481,     0,
     0,     0,   493,   492,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   507,     0,   602,   609,   610,   611,     0,
     0,    30,     0,    69,     0,    43,     0,     0,     0,   186,
     0,   183,   181,     0,     0,     0,   142,     0,     0,     0,
   156,    81,     0,   155,     0,   213,   211,     0,     0,     0,
     0,    68,     0,     0,    64,     0,    80,     0,    72,    77,
   272,   270,     0,     0,     0,   340,     0,     0,   365,   445,
     0,     0,     0,   448,   480,     0,   474,   482,   475,   477,
   476,     0,     0,    80,     0,     0,     0,     0,     0,   484,
   535,   535,     0,     0,     0,     0,   535,     0,   529,   529,
   529,   512,     0,     0,     0,     0,   527,   485,   547,   543,
    66,     0,    31,    34,    62,     0,   188,   184,   182,   146,
   143,   160,   157,     0,     0,   621,   553,   554,   555,   556,
   557,   558,   559,   560,   561,   562,   563,   564,   565,   566,
   567,   568,   569,   570,   571,   572,     0,   120,     0,     0,
   116,   114,     0,     0,     0,     0,     0,     0,     0,     0,
    83,    84,   112,     0,   109,   257,   217,   212,   220,   214,
   235,   215,   250,   216,    56,     0,    60,     0,    51,     0,
    73,     0,    45,    37,    44,   271,   277,   273,     0,     0,
     0,     0,   274,   295,   341,   347,   342,     0,   446,   452,
   449,   447,   483,   478,   487,     0,     0,     0,     0,     0,
     0,     0,     0,   524,   536,   528,   521,     0,     0,   508,
   511,   519,   520,   514,   515,   518,   516,   517,   513,   523,
   522,     0,   525,    33,     0,   185,     0,     0,     0,    78,
    79,   111,     0,     0,     0,     0,     0,     0,     0,   106,
   105,   107,   128,   126,   123,   125,   124,     0,     0,    85,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   113,   134,
     0,     0,     0,     0,     0,    59,     0,    53,    74,    64,
     0,   311,   311,   319,   300,     0,     0,    80,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   384,
   386,     0,   344,   366,     0,     0,    80,     0,     0,     0,
     0,     0,     0,   509,   510,   530,     0,     0,     0,     0,
     0,     0,    80,    80,    80,    80,     0,     0,     0,    80,
   187,   189,     0,     0,   145,   147,     0,     0,     0,   159,
   161,     0,    82,     0,     0,     0,    82,     0,     0,   333,
   108,     0,   103,   104,   101,   100,   102,    96,    97,    98,
    99,    92,    93,    88,    91,    94,    89,    95,   127,   130,
     0,   132,     0,     0,   110,     0,     0,     0,     0,     0,
   256,   258,     0,     0,     0,     0,     0,     0,   219,   221,
     0,     0,     0,   234,   236,     0,     0,     0,   249,   251,
     0,    54,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   276,   286,   278,   325,   325,   325,     0,     0,
     0,     0,     0,   535,     0,     0,     0,   346,   348,     0,
     0,    80,     0,     0,     0,    80,     0,     0,   397,     0,
   404,     0,   412,   419,     0,     0,     0,     0,   375,     0,
     0,   451,   453,     0,     0,     0,     0,     0,     0,     0,
   537,   526,    63,     0,     0,     0,     0,    80,     0,    80,
     0,     0,     0,     0,     0,     0,    80,     0,     0,     0,
   134,   165,     0,     0,   118,     0,   119,     0,     0,     0,
    82,   332,     0,   129,   131,     0,     0,     0,     0,     0,
     0,     0,    49,     0,    67,     0,     0,   229,     0,     0,
     0,     0,   244,   246,     0,   240,   242,     0,     0,     0,
     0,    57,    38,     0,     0,     0,     0,     0,     0,     0,
     0,    67,     0,     0,     0,    82,     0,     0,   326,   327,
   328,   329,   330,   331,     0,   296,   312,     0,   297,     0,
   298,   320,     0,     0,     0,   305,   299,   301,     0,     0,
    67,   359,     0,     0,     0,     0,   361,   363,     0,     0,
   367,     0,     0,   368,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   389,   531,   531,   456,
     0,     0,     0,     0,   501,     0,     0,     0,   191,   192,
   197,   198,     0,   201,     0,   200,   194,   193,    64,   195,
   190,     0,   199,   149,   148,     0,     0,   162,   163,     0,
     0,     0,   115,     0,    86,   133,     0,     0,   135,   259,
     0,   261,   262,     0,   222,   223,     0,     0,     0,    64,
   227,   228,   237,    64,   239,    64,   238,   253,   252,   254,
    67,    47,   290,   289,   282,   280,   281,   279,   283,   285,
   291,   288,     0,     0,     0,     0,   313,     0,   322,     0,
     0,     0,   350,   349,   357,    64,   351,   352,   355,   356,
    64,   353,   354,     0,     0,    80,     0,     0,     0,    80,
     0,    80,     0,     0,    80,   369,   398,     0,     0,    80,
     0,     0,     0,     0,   370,   405,     0,     0,     0,     0,
    80,     0,   371,   413,     0,     0,     0,     0,     0,     0,
     0,     0,   372,   420,    80,   391,    80,   392,   390,   392,
     0,   454,     0,   535,     0,     0,     0,     0,    80,    80,
     0,    80,   150,   167,   164,     0,    90,     0,   122,     0,
     0,     0,     0,   263,   224,     0,   225,     0,   245,     0,
   241,     0,    48,   292,     0,   317,   318,   316,    82,   321,
    82,   302,   303,     0,     0,     0,     0,   304,   306,   358,
     0,   362,     0,   373,   374,     0,     0,   365,     0,     0,
   365,     0,     0,     0,     0,     0,   365,     0,     0,     0,
     0,     0,     0,     0,   365,     0,     0,     0,     0,     0,
   365,   365,     0,     0,   429,     0,     0,   533,     0,     0,
     0,     0,     0,   455,     0,   499,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   121,    82,    87,     0,     0,
   260,     0,     0,   247,   243,     0,     0,   287,   314,   323,
     0,     0,     0,     0,   360,   364,     0,   535,     0,   535,
     0,     0,   401,   399,   400,   402,    80,     0,   408,   406,
   407,   409,   410,    80,   416,     0,   414,   415,   417,   423,
   425,     0,     0,   421,   422,     0,   424,     0,   532,    80,
     0,   535,   393,     0,   459,   459,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   166,   168,     0,   137,   136,     0,     0,     0,
   284,     0,     0,   307,   308,   309,   310,   378,     0,   376,
     0,   379,   403,     0,   411,     0,   418,   427,   428,   431,
   426,   388,   534,   385,     0,   535,   396,   387,   325,   325,
   505,   535,     0,     0,     0,     0,   204,   203,   196,   202,
     0,     0,     0,     0,     0,     0,    82,     0,   226,   293,
    82,     0,     0,     0,     0,    80,     0,     0,   394,   395,
     0,     0,     0,   464,   458,     0,   460,   457,     0,     0,
     0,     0,     0,   169,   170,   171,   172,   173,   174,     0,
     0,     0,     0,   380,   365,     0,     0,     0,     0,     0,
    80,     0,     0,     0,   430,   432,     0,     0,     0,     0,
   461,   500,     0,     0,     0,     0,   117,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   466,   467,   463,     0,    82,     0,     0,     0,     0,   230,
   315,   324,   377,   381,   365,     0,   433,   436,   437,   434,
   435,   438,   465,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   382,   365,   462,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   231,   383,     0,   502,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    67,     0,     0,     0,     0,   497,
     0,     0,     0,     0,     0,   232,     0,     0,     0,     0,
     0,     0,   503,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   504,     0,     0,     0
};

static const short yydefgoto[] = {  1574,
     1,     2,     3,    19,    20,    21,    85,   150,   235,   455,
   322,   488,   720,   323,   324,   614,   843,   944,   409,   485,
   410,   385,   148,   293,   405,   294,    90,   166,   325,   395,
   396,   472,   473,   591,   792,  1190,   592,   678,   677,   674,
   709,   813,   815,    87,   238,   304,   466,   668,   776,    88,
   239,   309,   468,   669,   781,  1057,  1275,  1354,    86,   153,
   237,   300,   461,   667,   772,    89,   161,   240,   317,   479,
   712,   830,  1079,  1509,  1537,   480,   713,   835,   958,  1086,
   955,  1084,   481,   714,   840,   475,   711,   822,    91,   170,
   243,   331,   494,   721,   855,  1204,   976,  1287,   495,   624,
   859,   998,  1112,  1219,   856,   987,  1209,  1362,   858,   992,
  1211,  1363,   988,   593,    92,   174,   244,   336,   422,   498,
   726,   869,  1003,  1116,  1009,  1121,   628,   744,   887,   888,
  1168,  1260,  1333,  1020,  1137,  1022,  1146,  1024,  1154,  1025,
  1164,  1326,  1418,  1456,    93,   178,   245,   342,   502,   745,
   893,  1171,  1389,  1427,  1485,  1460,    95,   183,   247,   350,
    22,   246,   427,   506,    46,   188,   357,   250,   260,  1338,
   367,   444,   656,  1169,  1259,   644,   124,   125,    23,    84,
   594,   645,    82,    28
};

static const short yypact[] = {-32768,
-32768,    41,  2519,  -152,   169,   -68,   -54,   -48,   -31,   -25,
   -19,   -15,    -9,    -5,     2,    22,    63,   224,-32768,-32768,
   -71,-32768,-32768,   924,-32768,-32768,    93,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   156,-32768,
   197,-32768,-32768,   126,   146,-32768,-32768,-32768,-32768,   349,
-32768,-32768,-32768,-32768,-32768,   159,   163,   194,   243,   258,
   271,   285,   300,   302,   308,   310,   354,   356,   380,   392,
   410,   429,   431,   436,   443,   452,  1946,  1946,  1946,  1946,
   798,-32768,   169,   199,   183,    23,    15,   223,    27,    11,
    31,    33,    35,   454,    37,   236,-32768,   524,   524,-32768,
  1946,  1946,  1946,  1946,  1946,  1946,  1946,  1946,  1946,  1946,
  1946,  1946,  1946,  1946,  1946,  1946,  1946,  1946,  1946,  1946,
   646,   241,   241,   -36,-32768,  2284,  1712,-32768,  1946,  1946,
  1946,  1946,  1946,  1946,  1946,  1946,  1946,  1946,  1946,  1946,
  1946,  1946,  1946,-32768,   204,   441,-32768,   654,-32768,   167,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -101,   463,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   540,-32768,   469,   944,   944,  3381,
  3408,  3435,  3462,  3489,  3516,  3543,  3570,  3597,  3624,  2425,
  3651,  3678,  3705,  3732,  3759,  3786,  2454,  2483,  2518,   376,
   667,  1946,  1576,-32768,  2306,  4643,  4643,  1333,  1333,   616,
   616,   616,   616,   238,   238,   241,   241,   241,   241,   169,
-32768,   504,   -43,   519,-32768,-32768,   284,   295,   313,   322,
    10,-32768,   344,   526,   539,   523,   640,-32768,    94,   527,
-32768,    94,    94,    52,   529,   533,   552,   555,   564,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1946,-32768,-32768,-32768,-32768,-32768,-32768,  1946,  1946,
  1946,   735,-32768,-32768,  2284,  1946,  4606,  1946,   541,  1611,
   672,  1646,   592,   595,-32768,    39,   775,   788,-32768,-32768,
   599,   797,-32768,-32768,   602,   111,   806,-32768,-32768,   618,
   815,   817,   623,   626,   634,-32768,-32768,    46,-32768,    17,
   659,-32768,   635,   642,   249,   833,   841,   651,   653,-32768,
-32768,   842,   656,-32768,-32768,-32768,   850,   660,   859,   862,
-32768,-32768,-32768,   877,   684,   882,   169,   914,-32768,-32768,
   728,-32768,-32768,-32768,-32768,-32768,   928,   776,-32768,   111,
-32768,   734,  1946,   761,   771,   780,   274,   289,  3813,  3840,
  3867,  3894,   732,  3921,  4606,-32768,-32768,  4606,   760,   979,
  1946,  4056,-32768,    95,   316,   786,-32768,   987,    60,-32768,
   988,-32768,   795,   801,  1001,-32768,  1002,-32768,  1003,    62,
-32768,-32768,-32768,   810,-32768,  1005,   814,-32768,-32768,-32768,
   111,   845,-32768,  1011,  1014,  1017,    91,-32768,-32768,    97,
-32768,   824,   124,-32768,   825,  1020,   826,  1024,-32768,  1025,
  1036,  1037,-32768,   469,  1045,   846,  1946,  2540,  1946,  1946,
  1946,  1049,  1088,-32768,  1051,-32768,-32768,-32768,-32768,  1052,
  1946,-32768,  4081,-32768,    95,-32768,  1054,  1055,  1047,-32768,
   339,-32768,-32768,   864,  1057,   367,-32768,   378,  1946,  1060,
-32768,-32768,  1139,-32768,   391,-32768,-32768,  1062,   396,   398,
   403,-32768,     9,  1681,   -22,  1063,   111,    14,-32768,-32768,
-32768,-32768,  1065,   406,   256,-32768,  1067,   409,-32768,-32768,
  1071,   435,  1072,-32768,-32768,   -71,-32768,   879,-32768,-32768,
-32768,   886,   902,   111,  2562,  1946,  2584,  2606,  2628,-32768,
  1716,  1716,  1099,   151,  1946,  1946,  1716,  1946,  1101,-32768,
-32768,-32768,  1946,  1946,  1103,  1911,-32768,-32768,-32768,  4606,
-32768,  1100,-32768,-32768,   910,   448,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  3948,   908,   132,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   913,-32768,   926,   929,
-32768,-32768,  1108,  1139,  1139,  1139,  1130,    68,  1122,  1139,
  4628,   935,   936,   936,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1946,-32768,  4106,-32768,   136,
-32768,  1133,-32768,-32768,-32768,-32768,-32768,-32768,   940,   945,
   947,   948,-32768,-32768,-32768,-32768,-32768,   200,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1946,   946,  1946,  2650,  1946,
  1946,  1946,  1946,-32768,  4606,-32768,-32768,   169,   169,-32768,
  4606,  4606,-32768,  4606,-32768,  1144,  1144,  1144,  4606,  4606,
-32768,  1946,  4606,-32768,  1946,-32768,   569,    86,    88,-32768,
-32768,-32768,   982,   984,   982,  1139,   989,   990,  1006,   998,
   998,   998,-32768,-32768,-32768,-32768,-32768,    19,  1168,-32768,
  1139,  1139,  1139,  1139,  1139,  1139,  1139,  1139,  1139,  1139,
  1139,  1139,  1139,  1139,  1139,  1139,  1192,   876,-32768,  1000,
   762,   657,   576,   404,  3975,-32768,   286,-32768,-32768,   479,
   330,-32768,-32768,-32768,-32768,   478,    16,    49,   996,   999,
  1004,  1008,  1012,   142,   177,  1007,  1013,  1015,  1199,-32768,
-32768,  1202,-32768,-32768,    85,  2672,   111,  2694,  1946,  2716,
  2738,  2760,   -18,-32768,-32768,-32768,    -4,  4131,    94,    94,
    94,    94,   118,   127,   111,   111,  1019,  1201,  1225,   129,
-32768,-32768,    21,  1228,-32768,-32768,  1033,  1230,  1232,-32768,
-32768,  1035,-32768,  1038,  2354,  1258,-32768,  1059,  1061,-32768,
-32768,  1139,  1124,  1124,  1571,  1571,  1571,  1031,  1031,  1031,
  1031,   358,   358,    12,    12,    12,   998,   998,-32768,-32768,
  1068,  4628,   522,  1381,-32768,  1259,   120,   120,  1264,  1265,
-32768,-32768,  1266,  1268,  1295,  1111,    94,    94,-32768,-32768,
  1296,    43,    45,-32768,-32768,  1297,  1308,  1315,-32768,-32768,
  1318,-32768,  1127,   121,  1327,  1328,    96,  1329,  1330,  1334,
  1339,    94,-32768,-32768,-32768,   471,   821,   866,   324,  1336,
  1351,    57,   169,  1716,   169,    58,  1352,-32768,-32768,  1337,
  1359,   111,  1358,  1362,  1363,   111,  1368,  1369,-32768,  1946,
-32768,  1946,-32768,-32768,    94,  1371,  1173,  1176,-32768,  1179,
  1376,-32768,-32768,  1946,  1180,  1946,  4156,  1946,  1946,  1946,
-32768,-32768,-32768,  1380,  1382,  1383,  1385,   111,  1412,   111,
  1413,  1415,  1416,  1422,  1420,  1421,   111,  1423,  1424,  1426,
  1000,-32768,  1427,  1428,-32768,  1178,-32768,  1139,  1183,  1233,
-32768,-32768,  2328,-32768,-32768,  1139,  1235,  1240,    40,  1429,
  1356,  1438,-32768,  1439,   825,  1440,   125,  1247,  1444,  1445,
  1448,  1457,-32768,-32768,  1458,-32768,-32768,  1460,  1463,  1464,
  1466,-32768,-32768,  1446,    17,  1467,  1470,  1471,  1472,  1473,
  1474,   825,  1475,  1476,  1479,-32768,  1482,  1483,-32768,-32768,
-32768,-32768,-32768,-32768,    94,-32768,-32768,  1287,-32768,    94,
-32768,-32768,  1290,  1489,  1490,-32768,-32768,-32768,  1492,  1493,
   825,-32768,  1494,  1495,  1497,  1500,-32768,-32768,  1501,  1502,
-32768,  1292,  1293,-32768,  1305,  1306,  1309,  1316,  1317,   544,
  2782,  1102,  2804,   375,   428,  1324,-32768,    59,    59,-32768,
  1526,  4181,  1335,  4206,-32768,  4231,  4256,  4281,-32768,-32768,
-32768,-32768,  1332,-32768,  1341,-32768,-32768,-32768,  1348,-32768,
-32768,  1353,-32768,-32768,-32768,  1532,   542,-32768,-32768,    94,
  3360,  1946,-32768,  1340,-32768,  4628,  1536,    94,-32768,-32768,
  1537,-32768,-32768,  1552,-32768,-32768,  1558,  1477,  1559,  1348,
-32768,-32768,-32768,   182,-32768,   206,-32768,-32768,-32768,-32768,
   825,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1366,  1564,  1566,  1567,-32768,  1568,-32768,  1569,
  1570,   281,-32768,-32768,-32768,   239,-32768,-32768,-32768,-32768,
   293,-32768,-32768,  1575,  1577,   111,  1578,  1384,  1946,   111,
  1387,   111,  1946,  1946,   111,-32768,-32768,  1946,  1417,   111,
  1946,  1946,  1946,  1946,-32768,-32768,  1946,  1946,  1418,  1946,
   111,  1946,-32768,-32768,  1946,  1581,  1419,  1451,  1946,  1946,
  1452,  1946,-32768,-32768,   111,-32768,   111,-32768,-32768,-32768,
    25,-32768,  1453,  1716,  1454,  1455,  1486,  1487,   111,   111,
  1618,   111,-32768,-32768,-32768,  1485,-32768,  2826,-32768,  1139,
  1518,  1519,  1615,-32768,-32768,  1653,-32768,  1685,-32768,  1686,
-32768,  1688,-32768,  1521,  1616,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   982,   982,   982,    94,-32768,-32768,-32768,
  1720,-32768,  1721,-32768,-32768,  1523,  1549,-32768,  2848,  1524,
-32768,  1752,   855,  1370,  1753,  2870,-32768,  1770,  1839,  1867,
  1893,  1948,  2892,  1978,-32768,  2000,  1771,  2027,  2049,  1774,
-32768,-32768,  2074,  2096,-32768,  2118,  1580,-32768,   326,   547,
   570,  1584,  1586,-32768,  1946,-32768,  1946,  1946,  1946,  1946,
  1587,  1588,  1591,  1590,   641,-32768,-32768,  4628,  1593,  1594,
-32768,  1781,  1595,-32768,-32768,  1795,  1794,-32768,-32768,-32768,
  1797,  1805,  1806,  1807,-32768,-32768,  1809,  1716,   245,  1716,
  1812,   353,-32768,-32768,-32768,-32768,   111,   639,-32768,-32768,
-32768,-32768,-32768,   111,-32768,   883,-32768,-32768,-32768,-32768,
-32768,  1066,  1338,-32768,-32768,   586,-32768,  1813,-32768,   111,
  1815,  1262,-32768,  1816,-32768,-32768,  4306,  1622,  2914,  2936,
  2958,  2980,  1821,  1822,  1823,  1824,  1827,  1946,  1946,  1946,
  1946,  1946,-32768,-32768,  1630,-32768,-32768,  1747,  1831,  1635,
-32768,  1636,  1637,-32768,-32768,-32768,-32768,-32768,  1640,  1719,
  1642,-32768,-32768,  1643,-32768,  1644,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   169,  1716,-32768,-32768,   363,   729,
-32768,  1716,  1946,  1946,  1946,  1946,-32768,-32768,-32768,-32768,
  1843,  2141,  2166,  2188,  2215,  2237,-32768,  1846,-32768,-32768,
-32768,   982,  1848,  1655,  1946,   111,  1946,   577,-32768,-32768,
  1852,  1853,  1854,-32768,-32768,  1650,-32768,-32768,  1658,  3002,
  3024,  3046,  3068,-32768,-32768,-32768,-32768,-32768,-32768,  1659,
  1661,  1660,  1662,-32768,-32768,  4002,  1663,  3090,  1860,  1946,
   111,  1863,    94,  1864,-32768,-32768,  1869,  1870,  1872,    94,
-32768,-32768,  1946,  1946,  1946,  1946,-32768,  1873,  1874,  1875,
  1652,  1877,  1669,  1946,  1878,  2262,  1879,  1881,  1888,  1894,
-32768,-32768,-32768,  1901,-32768,  4331,  4356,  4381,  4406,-32768,
-32768,-32768,-32768,-32768,-32768,  4029,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1667,  1674,  1707,  1711,  1717,  1880,  1687,
  1751,  1913,  1946,  1755,  1946,  1946,    94,-32768,-32768,-32768,
  3112,  1946,  3134,  3156,  1914,  1868,  1946,  4431,  1946,  1946,
-32768,-32768,  3178,-32768,  3200,  3222,  1847,  1946,  1946,  1946,
  1949,  4456,  4481,  4506,   825,  1756,  1787,  1792,  1950,-32768,
  1793,  1946,  1796,  1946,  3244,-32768,  3266,  1946,  1946,  3288,
  4531,  1946,-32768,  4556,  1798,  1800,  1946,  3310,  1946,  3332,
  1946,  4581,-32768,  1995,  1997,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -158,-32768,-32768,  -243,   -69,-32768,-32768,  1159,  -480,-32768,
  -558,-32768,  -320,  -386,  -423,-32768,-32768,-32768,-32768,  -314,
-32768,  -754,-32768,  -391,-32768,-32768,-32768,-32768,-32768,-32768,
  1410,-32768,  1087,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1550,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1286,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -851,  -552,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1101,-32768,-32768,-32768,
   983,   843,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   675,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1598,-32768,  1510,  1923,-32768,  1601,  1850,-32768,
  1767,-32768,   267,-32768,-32768,  -509,  -519,  1828,   997,-32768,
-32768,   -24,  -422,   -82
};


#define	YYLAST		4842


static const short yytable[] = {    81,
   145,   503,   465,   672,   415,   351,   993,   615,   358,   359,
   361,   605,   646,   478,   318,   163,   406,   653,   407,   406,
   870,   407,     6,   789,    24,   318,    39,     4,   926,  1262,
   493,     4,   930,   497,     6,     4,   501,     4,     6,     4,
    -2,     4,     6,   386,     6,   436,     6,   953,     6,   956,
   595,   718,   122,   123,   126,   127,   318,   164,   613,   393,
   319,  1001,  1007,  1166,   459,   919,   463,    41,   477,    42,
   684,   319,   685,    44,    45,    24,   190,   191,   192,   193,
   194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
   204,   205,   206,   207,   208,   209,   486,   492,   318,   456,
   968,   241,   319,   496,   215,   216,   217,   218,   219,   220,
   221,   222,   223,   224,   225,   226,   227,   228,   229,  1263,
   782,   393,   784,   753,   456,   943,  1299,   394,   393,  1302,
   500,  1076,   380,   291,    29,  1308,   773,   393,   406,   393,
   407,   890,   757,  1316,   319,   319,    30,   289,   774,  1322,
  1323,   777,    31,   778,   779,    25,    26,   292,   842,    27,
   891,   595,   595,   595,   610,   211,   964,   595,   212,    32,
   319,   233,   612,    25,    26,    33,  1064,    27,     6,   609,
   969,    34,   147,   901,   686,    35,   212,   285,   287,   394,
   970,    36,   680,   681,   682,    37,   394,   902,   689,   637,
   212,    96,    38,    97,   727,   394,   705,   394,   320,   706,
   234,   606,   165,   321,   408,   155,   156,   408,   871,   320,
   790,  1103,    40,   151,   152,   457,  1264,   159,   160,   687,
    43,   168,   169,   172,   173,   176,   177,   181,   182,   387,
   185,  1069,   186,   954,   212,   957,   404,   369,   -43,   727,
   320,   872,   360,   595,   370,   371,   372,  1002,  1008,  1167,
   464,   374,   464,   375,   431,   378,    81,   382,   595,   595,
   595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
   595,   595,   595,   595,   785,   595,   892,   775,   406,   780,
   407,   464,   320,   320,   939,    83,   542,   464,    94,   793,
   794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
   804,   805,   806,   807,   808,   728,   812,   729,   730,   731,
   908,   732,   733,   734,   464,   464,   717,   735,    98,   910,
   736,   917,   589,   737,  -573,   648,   738,   739,   438,   649,
  1214,  1215,   879,  1471,   880,   740,   741,   296,    99,   297,
   619,   620,   621,   622,  1005,   100,   453,   727,   301,   298,
   728,   101,   729,   730,   731,   102,   732,   733,   734,   595,
   302,   310,   735,   742,  1216,   736,   305,   881,   737,   882,
   306,   738,   739,  1199,   149,  1217,   147,   311,   307,   994,
   740,   741,   845,  1510,   846,   847,   103,   312,   313,   844,
   933,   743,   146,   147,   314,   848,   315,  1201,   230,   326,
   147,   995,   515,   873,   517,   518,   519,  1526,   742,   327,
   849,   850,   851,   157,   158,  1421,   540,  1422,  1423,   140,
   141,   142,   895,   328,   852,   143,   144,   329,   143,   144,
  1220,   650,  1148,   147,   554,   104,  1370,   231,   909,   911,
   912,   913,   414,   147,  1289,   918,  1290,   623,   180,   608,
   105,   979,   980,   981,   982,   983,   984,  1424,   728,   836,
   729,   730,   731,   106,   732,   733,   734,   442,   443,   837,
   735,   838,  1218,   736,  1092,   299,   737,   107,  1149,   738,
   739,   639,   445,   443,  1222,  1155,   303,   147,   740,   741,
   651,   652,   108,   654,   109,   595,  1150,  1151,   659,   660,
   110,   663,   111,   595,   308,   904,   905,   906,   907,   458,
   147,  1074,  1355,   316,   996,   997,   742,  1329,   187,   920,
  1330,   853,   854,   977,  1156,   978,  1061,  1426,  1426,   547,
   548,  1157,  1158,   860,  1066,   330,   248,  1152,  1099,   702,
   703,   704,   705,   861,  1373,   706,   112,  1013,   113,  1159,
  1077,  1017,  1160,  1161,  1425,   754,   755,   550,   551,   979,
   980,   981,   982,   983,   984,   985,  1153,  1115,   552,   553,
   282,   715,   114,   950,   951,   862,   863,   864,   865,   866,
   867,   596,   597,  1043,   115,  1045,   599,   600,   601,   602,
  1162,   332,  1052,   603,   604,   839,   617,   618,   975,   626,
   627,   746,   116,   748,   337,   750,   751,   752,   126,   759,
   760,   761,   762,   763,   764,   765,   766,   767,   338,  1163,
   768,   117,   333,   118,   769,   630,   631,   126,   119,   334,
   758,  1026,  1449,   727,  1450,   120,   339,   770,   547,   666,
   210,   831,  1440,   832,   121,  1451,  1442,  1131,   232,   833,
  1132,  1291,  1292,  1293,  1266,   242,  1452,  1203,  1133,  1134,
  1135,   249,   986,   283,    47,    48,   379,    50,   340,   868,
   290,  1453,   -46,   147,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,  1347,
  1348,  1349,  1350,  1351,  1352,   344,   352,   353,   354,   355,
    76,   295,   319,   343,   897,   935,   936,   335,  1181,   362,
  1504,   356,   823,   363,   824,   825,   826,   827,   828,   373,
   341,  1106,  1184,  1185,   376,  1136,  1108,   941,   942,  1454,
  1331,  1332,   364,   345,   728,   365,   729,   730,   731,  1198,
   732,   733,   734,  1200,   366,  1202,   735,   595,   383,   736,
   771,   384,   737,  1334,  1332,   738,   739,   834,  1455,   388,
  1004,   346,  1006,   347,   740,   741,  1380,  1381,  1369,   126,
  1371,  1421,   389,  1422,  1423,  1221,   657,   658,  1278,   390,
  1223,   391,   392,   348,   128,   138,   139,   140,   141,   142,
   397,  1226,   742,   143,   144,  1230,  1186,  1232,   398,   399,
  1235,   400,  1387,   401,  1192,  1238,   402,   979,   980,   981,
   982,   983,   984,  1424,   403,   411,  1247,   416,   412,   816,
  1375,   349,  1353,   817,   413,   417,   420,   818,   819,   820,
  1257,   418,  1258,   419,   423,  1021,   421,  1023,   829,  1443,
   424,  1304,    77,   425,  1271,  1272,   426,  1274,    78,  1032,
   320,  1034,    79,  1036,  1037,  1038,  1420,    80,    47,    48,
   556,   428,  1429,   977,   429,   978,   430,   727,    51,    52,
    53,    54,    55,   557,   558,   559,   560,   561,   562,   563,
   564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
   574,   575,   576,   577,   578,   579,   580,   581,   432,   979,
   980,   981,   982,   983,   984,   985,    47,    48,    49,    50,
  1428,   433,   434,   435,   437,   450,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,   439,   -43,   821,   979,   980,   981,   982,   983,   984,
   990,   440,    76,  1294,   582,   129,   130,   131,   132,   133,
   441,   134,   135,   136,   137,   452,   460,   138,   139,   140,
   141,   142,  1374,   462,   467,   143,   144,   469,   728,  1376,
   729,   730,   731,   470,   732,   733,   734,   471,   474,   476,
   735,   482,   483,   736,   484,  1383,   737,   489,   490,   738,
   739,   487,   989,   491,   499,   404,   504,   505,   740,   741,
   507,   509,   129,   130,   131,   132,   133,  1188,   134,   135,
   136,   137,   510,   511,   138,   139,   140,   141,   142,   513,
   514,   545,   143,   144,  1468,   520,   742,   538,   539,   583,
   543,   544,   381,   549,   555,   584,   585,   991,   598,   611,
   727,   616,   586,   625,   587,   588,   589,   629,   632,   810,
   634,   590,   154,   811,  1377,   162,   167,   171,   175,   179,
   635,   184,   251,   252,   253,   254,   255,   256,   257,   258,
   259,  1447,   636,   647,  1229,   655,   664,   661,  1233,  1234,
   665,   671,   679,  1236,    77,   673,  1239,  1240,  1241,  1242,
    78,  1549,  1243,  1244,    79,  1246,   688,  1248,   675,    80,
  1249,   676,   683,   707,  1253,  1254,  1477,  1256,   708,   719,
   722,    47,    48,   556,   521,   723,   236,   724,   725,   756,
   747,    51,    52,    53,    54,    55,   557,   558,   559,   560,
   561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
   571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
   581,   728,   589,   729,   730,   731,   783,   732,   733,   734,
   788,   786,   787,   735,   809,   706,   736,   522,   874,   737,
   814,   875,   738,   739,   886,   915,   876,   883,   889,  1479,
   877,   740,   741,   884,   878,  1139,  1484,   885,  1140,   914,
   700,   701,   702,   703,   704,   705,  1141,  1142,   706,   916,
  1143,  1144,   921,   922,   923,   523,   924,   582,   925,   742,
  1337,   927,  1339,  1340,  1341,  1342,   524,   525,   526,   527,
   528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
   929,   931,   932,   940,    47,    48,    49,  1378,   943,   945,
   946,   934,   947,  1525,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   948,
   952,   959,  1419,  1145,   693,   694,   695,   696,   697,   698,
   699,   949,   960,   700,   701,   702,   703,   704,   705,   961,
   962,   706,   583,  1402,  1403,  1404,  1405,  1406,   584,   585,
   963,   966,   967,   971,   972,   586,   973,   587,   588,   589,
   999,   974,   727,  1011,   590,   690,   691,   692,   693,   694,
   695,   696,   697,   698,   699,  1000,  1010,   700,   701,   702,
   703,   704,   705,  1012,  1014,   706,  1015,  1016,  1430,  1431,
  1432,  1433,  1018,  1019,   791,  1028,  1305,  1027,  1029,  1030,
  1031,  1033,  1060,    47,    48,    49,  1039,  1062,  1040,  1041,
  1446,  1042,  1448,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,  1044,  1046,
  1385,  1047,  1048,  1386,  1049,  1476,  1050,  1051,   937,  1053,
  1054,   938,  1055,  1058,  1059,  1070,  1063,  1067,  1486,  1487,
  1488,  1489,  1068,  1071,  1072,  1073,  1075,  1078,  1080,  1496,
  1091,  1081,    77,   728,  1082,   729,   730,   731,    78,   732,
   733,   734,   643,  1083,  1085,   735,  1087,    80,   736,  1088,
  1089,   737,  1090,  1093,   738,   739,  1094,  1095,  1096,  1097,
  1098,  1100,  1101,   740,   741,  1102,  1104,  1105,  1521,  1107,
  1523,  1524,  1109,  1110,  1111,  1124,  1125,  1528,  1113,  1114,
  1117,  1118,  1533,  1119,  1535,  1536,  1120,  1122,  1123,  1126,
  1127,   742,  1128,  1542,  1543,  1544,   134,   135,   136,   137,
  1129,  1130,   138,   139,   140,   141,   142,  1555,  1165,  1557,
   143,   144,  1172,  1560,  1561,  1174,  1179,  1564,  1183,  1379,
  1191,  1193,  1568,  1189,  1570,  1180,  1572,   129,   130,   131,
   132,   133,   147,   134,   135,   136,   137,  1182,  1194,   138,
   139,   140,   141,   142,  1195,  1197,  1196,   143,   144,  1205,
  1206,    77,  1207,  1208,  1210,  1212,  1213,    78,    47,    48,
    49,  1224,  1227,  1225,  1228,  1250,    80,  1231,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    47,    48,    49,   377,  1237,  1245,  1251,
  1273,  1281,  1288,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    47,    48,
    49,  1252,  1255,  1265,  1267,  1268,   727,  1282,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    47,    48,    49,  1269,  1270,  1276,  1283,
  1284,   727,  1285,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    47,    48,
    49,  1279,  1280,  1286,  1295,  1296,  1297,  1301,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,  1298,   696,   697,   698,   699,  1303,  1306,
   700,   701,   702,   703,   704,   705,    77,   728,   706,   729,
   730,   731,    78,   732,   733,   734,  1309,  1318,   286,   735,
  1321,    80,   736,  1328,  1335,   737,  1336,  1358,   738,   739,
  1343,  1344,  1345,  1346,  1356,  1357,  1359,   740,   741,  1360,
  1361,    77,   728,  1364,   729,   730,   731,    78,   732,   733,
   734,  1365,  1366,  1367,   735,  1368,    80,   736,  1372,  1382,
   737,  1384,  1388,   738,   739,   742,  1392,  1397,  1398,  1399,
  1400,  1401,   740,   741,  1407,  1408,    77,  1409,  1410,  1414,
  1411,  1412,    78,  1413,   381,  1310,  1415,  1416,  1417,  1434,
  1441,    80,  1461,  1493,  1444,  1445,  1457,  1458,  1459,  1462,
   742,   464,  1467,  1469,  1475,  1470,  1473,  1478,  1480,  1495,
  1512,    77,   727,  1311,  1513,  1481,  1482,    78,  1483,  1490,
  1491,  1492,   607,  1494,  1497,  1499,    80,  1500,  1518,   129,
   130,   131,   132,   133,  1501,   134,   135,   136,   137,  1312,
  1502,   138,   139,   140,   141,   142,    77,  1503,  1514,   143,
   144,  1515,    78,    47,    48,    49,   643,  1516,   214,  1520,
  1531,    80,  1517,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    47,    48,
    49,  1519,  1541,  1545,  1313,  1522,  1553,  1550,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,   728,  1315,   729,   730,   731,  1551,   732,
   733,   734,  1552,  1554,  1575,   735,  1576,  1556,   736,  1566,
  1567,   737,   965,   710,   738,   739,  1317,  1056,   857,   546,
  1390,  1170,  1261,   740,   741,   633,   129,   130,   131,   132,
   133,   189,   134,   135,   136,   137,   508,   368,   138,   139,
   140,   141,   142,  1319,   512,     0,   143,   144,   261,   284,
     0,   742,     0,     0,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,  1320,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,     0,     0,  1532,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
  1324,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    77,  1325,     0,     0,     0,     0,    78,     0,     0,
     0,   662,     0,     0,     0,     0,    80,     0,     0,     0,
     0,     0,     0,     0,  1327,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,    77,   138,   139,   140,
   141,   142,    78,     0,     0,   143,   144,  1435,     0,     0,
     0,    80,     0,     0,     0,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,  1436,     0,     0,   143,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,  1437,     0,     0,   143,   144,     0,
     0,     0,     0,     0,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,  1438,     0,     0,   143,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,  1439,     0,     0,   143,   144,     0,     0,
     0,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,  1498,     0,
     0,   143,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,   213,     0,   143,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,   288,     0,   143,   144,     0,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,  1065,     0,     0,   143,   144,
     0,     0,     0,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
     0,     0,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,     0,     0,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   690,   691,   692,   693,   694,
   695,   696,   697,   698,   699,     0,     0,   700,   701,   702,
   703,   704,   705,     4,     0,   706,     0,     0,     5,     0,
     6,   690,   691,   692,   693,   694,   695,   696,   697,   698,
   699,     0,     0,   700,   701,   702,   703,   704,   705,     0,
     0,   706,     0,     0,     0,     0,     0,     0,   928,     0,
     0,     7,     0,     0,     0,     0,     0,     0,     8,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     9,     0,    10,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    11,     0,     0,     0,    12,     0,     0,
     0,     0,   129,   130,   131,   132,   133,    13,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,    14,     0,     0,     0,     0,   272,
     0,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,    15,   279,    16,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,     0,   280,     0,     0,
     0,     0,     0,    17,    18,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,   281,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,   516,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,   638,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,   640,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
   641,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,   642,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,   749,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,   894,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,   896,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
   898,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,   899,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,   900,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1138,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1147,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1277,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1300,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1307,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1314,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1393,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1394,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1395,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1396,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1463,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1464,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1465,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1466,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1474,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1527,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1529,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1530,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1538,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1539,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   129,   130,   131,   132,   133,  1540,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,   129,   130,   131,   132,   133,  1558,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   129,   130,   131,   132,   133,
  1559,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,  1562,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,  1569,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,     0,  1571,   690,   691,   692,
   693,   694,   695,   696,   697,   698,   699,     0,     0,   700,
   701,   702,   703,   704,   705,     0,     0,   706,   129,   130,
   131,   132,   133,  1187,   134,   135,   136,   137,     0,     0,
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
     0,   670,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,   841,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,  1472,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
     0,     0,  1511,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,   454,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,   541,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,   716,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,   903,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1035,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1173,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1175,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1176,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1177,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1178,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1391,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1505,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1506,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1507,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1508,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1534,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1546,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1547,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1548,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1563,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,  1565,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,  1573,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,   690,   691,   692,   693,   694,
   695,   696,   697,   698,   699,     0,     0,   700,   701,   702,
   703,   704,   705,   132,   133,   706,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144
};

static const short yycheck[] = {    24,
    83,   425,   389,   556,   325,   249,   858,   488,   252,   253,
   254,     3,   522,   400,     5,     5,     3,   527,     5,     3,
     5,     5,    12,     5,   177,     5,     5,     5,   783,     5,
   417,     5,   787,   420,    12,     5,   423,     5,    12,     5,
     0,     5,    12,     5,    12,   360,    12,     5,    12,     5,
   473,   610,    77,    78,    79,    80,     5,    47,    45,    11,
    51,     5,     5,     5,   385,    45,     7,     5,     7,     7,
     3,    51,     5,   145,   146,   177,   101,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   411,     7,     5,     5,
     5,   203,    51,     7,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,    95,
   673,    11,   675,   643,     5,     5,  1228,    79,    11,  1231,
     7,     7,   291,   177,   203,  1237,    51,    11,     3,    11,
     5,    57,   662,  1245,    51,    51,   201,   230,    63,  1251,
  1252,    64,   201,    66,    67,     5,     6,   201,   717,     9,
    76,   584,   585,   586,   485,   202,    46,   590,   205,   201,
    51,     5,   487,     5,     6,   201,   931,     9,    12,   202,
    85,   201,   205,   202,   117,   201,   205,   212,   213,    79,
    95,   201,   584,   585,   586,   201,    79,   202,   590,   514,
   205,     5,   201,     7,     5,    79,   195,    79,   199,   198,
    44,   203,   202,   204,   201,   201,   202,   201,   203,   199,
   202,   976,   201,   201,   202,   384,   202,   201,   202,   162,
     7,   201,   202,   201,   202,   201,   202,   201,   202,   201,
     5,   202,     7,   201,   205,   201,   201,   272,   203,     5,
   199,   203,   201,   676,   279,   280,   281,   201,   201,   201,
   201,   286,   201,   288,   347,   290,   291,   292,   691,   692,
   693,   694,   695,   696,   697,   698,   699,   700,   701,   702,
   703,   704,   705,   706,   676,   708,   202,   202,     3,   202,
     5,   201,   199,   199,   814,   203,   455,   201,   143,   691,
   692,   693,   694,   695,   696,   697,   698,   699,   700,   701,
   702,   703,   704,   705,   706,   116,   708,   118,   119,   120,
   203,   122,   123,   124,   201,   201,   191,   128,   203,   203,
   131,   203,   201,   134,   203,   185,   137,   138,   363,   189,
    60,    61,   201,  1445,   203,   146,   147,    64,   203,    66,
    95,    96,    97,    98,   864,     7,   381,     5,    64,    76,
   116,   203,   118,   119,   120,   203,   122,   123,   124,   792,
    76,    50,   128,   174,    94,   131,    64,   201,   134,   203,
    68,   137,   138,   202,   202,   105,   205,    66,    76,    66,
   146,   147,    63,  1495,    65,    66,   203,    76,    77,   720,
   792,   202,   204,   205,    83,    76,    85,   202,   205,    66,
   205,    88,   437,   728,   439,   440,   441,  1519,   174,    76,
    91,    92,    93,   201,   202,    63,   451,    65,    66,   192,
   193,   194,   747,    90,   105,   198,   199,    94,   198,   199,
   202,   524,    68,   205,   469,   203,   202,     7,   763,   764,
   765,   766,   204,   205,  1209,   770,  1211,   202,     5,   484,
   203,    99,   100,   101,   102,   103,   104,   105,   116,    66,
   118,   119,   120,   203,   122,   123,   124,   204,   205,    76,
   128,    78,   202,   131,   965,   202,   134,   203,   114,   137,
   138,   516,   204,   205,   202,    68,   202,   205,   146,   147,
   525,   526,   203,   528,   203,   928,   132,   133,   533,   534,
   203,   536,   203,   936,   202,   759,   760,   761,   762,   204,
   205,   945,  1277,   202,   201,   202,   174,   202,     5,   773,
   205,   202,   203,    63,   107,    65,   928,  1389,  1390,   201,
   202,   114,   115,    66,   936,   202,     7,   173,   972,   192,
   193,   194,   195,    76,   202,   198,   203,   872,   203,   132,
   947,   876,   135,   136,   202,   648,   649,   201,   202,    99,
   100,   101,   102,   103,   104,   105,   202,  1001,   201,   202,
   205,   606,   203,   827,   828,   108,   109,   110,   111,   112,
   113,   201,   202,   908,   203,   910,   201,   202,   201,   202,
   173,    76,   917,   201,   202,   202,   201,   202,   852,   201,
   202,   636,   203,   638,    76,   640,   641,   642,   643,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    90,   202,
    62,   203,   107,   203,    66,   201,   202,   662,   203,   114,
   665,   885,    66,     5,    68,   203,   108,    79,   201,   202,
     5,    76,  1407,    78,   203,    79,  1411,   114,     5,    84,
   117,  1214,  1215,  1216,  1174,   203,    90,  1091,   125,   126,
   127,   203,   202,     7,     3,     4,     5,     6,   140,   202,
   177,   105,   204,   205,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    69,
    70,    71,    72,    73,    74,    76,   190,   191,   192,   193,
    49,   203,    51,   201,   749,   204,   205,   202,  1049,   201,
  1485,   205,    76,   201,    78,    79,    80,    81,    82,     5,
   202,   985,   201,   202,   204,   202,   990,   817,   818,   173,
   204,   205,   201,   114,   116,   201,   118,   119,   120,  1080,
   122,   123,   124,  1084,   201,  1086,   128,  1190,   177,   131,
   202,   177,   134,   204,   205,   137,   138,   202,   202,     5,
   863,   142,   865,   144,   146,   147,   201,   202,  1298,   814,
  1300,    63,     5,    65,    66,  1116,   530,   531,  1190,   201,
  1121,     5,   201,   164,     7,   190,   191,   192,   193,   194,
     5,  1126,   174,   198,   199,  1130,  1060,  1132,   201,     5,
  1135,     5,  1332,   201,  1068,  1140,   201,    99,   100,   101,
   102,   103,   104,   105,   201,   177,  1151,     5,   204,    78,
   202,   202,   202,    82,   203,     5,     5,    86,    87,    88,
  1165,   201,  1167,   201,     5,   880,   201,   882,   202,  1412,
   201,     7,   191,     5,  1179,  1180,     5,  1182,   197,   894,
   199,   896,   201,   898,   899,   900,  1386,   206,     3,     4,
     5,     5,  1392,    63,   201,    65,     5,     5,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,    42,     5,    99,
   100,   101,   102,   103,   104,   105,     3,     4,     5,     6,
   202,   204,     5,   158,   201,   204,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,   201,   203,   202,    99,   100,   101,   102,   103,   104,
   105,   201,    49,  1217,    99,   178,   179,   180,   181,   182,
   201,   184,   185,   186,   187,     7,   201,   190,   191,   192,
   193,   194,  1307,     7,     7,   198,   199,   203,   116,  1314,
   118,   119,   120,   203,   122,   123,   124,     7,     7,     7,
   128,   202,     8,   131,   201,  1330,   134,     7,     5,   137,
   138,   177,   202,     7,   201,   201,     7,   202,   146,   147,
     7,     7,   178,   179,   180,   181,   182,  1062,   184,   185,
   186,   187,     7,     7,   190,   191,   192,   193,   194,     5,
   205,     5,   198,   199,  1441,     7,   174,     7,     7,   184,
     7,     7,   199,     7,     5,   190,   191,   202,     7,     7,
     5,     7,   197,     7,   199,   200,   201,     7,     7,   204,
   202,   206,    86,   208,   202,    89,    90,    91,    92,    93,
   205,    95,   149,   150,   151,   152,   153,   154,   155,   156,
   157,  1416,   201,     5,  1129,     5,     7,     5,  1133,  1134,
   201,   204,     5,  1138,   191,   203,  1141,  1142,  1143,  1144,
   197,  1545,  1147,  1148,   201,  1150,     5,  1152,   203,   206,
  1155,   203,     3,   199,  1159,  1160,  1451,  1162,   203,     7,
   201,     3,     4,     5,    57,   201,   150,   201,   201,     6,
   205,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,   116,   201,   118,   119,   120,   203,   122,   123,   124,
   185,   203,   203,   128,     3,   198,   131,   110,   203,   134,
   201,   203,   137,   138,     6,     5,   203,   201,     7,  1453,
   203,   146,   147,   201,   203,   114,  1460,   203,   117,   201,
   190,   191,   192,   193,   194,   195,   125,   126,   198,     5,
   129,   130,     5,   201,     5,   148,     5,    99,   204,   174,
  1265,   204,  1267,  1268,  1269,  1270,   159,   160,   161,   162,
   163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     3,   203,   202,     5,     3,     4,     5,   202,     5,     5,
     5,   204,     5,  1517,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,     5,
     5,     5,  1385,   202,   181,   182,   183,   184,   185,   186,
   187,   201,     5,   190,   191,   192,   193,   194,   195,     5,
     3,   198,   184,  1348,  1349,  1350,  1351,  1352,   190,   191,
   204,     5,     5,     5,     5,   197,     3,   199,   200,   201,
     5,     3,     5,     7,   206,   178,   179,   180,   181,   182,
   183,   184,   185,   186,   187,     5,     5,   190,   191,   192,
   193,   194,   195,     5,     7,   198,     5,     5,  1393,  1394,
  1395,  1396,     5,     5,   207,   203,     7,     7,   203,   201,
     5,   202,   205,     3,     4,     5,     7,   205,     7,     7,
  1415,     7,  1417,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,     7,     7,
   159,     7,     7,   162,     3,  1450,     7,     7,    48,     7,
     7,    51,     7,     7,     7,     7,   204,   203,  1463,  1464,
  1465,  1466,   203,    88,     7,     7,     7,   201,     5,  1474,
     5,     7,   191,   116,     7,   118,   119,   120,   197,   122,
   123,   124,   201,     7,     7,   128,     7,   206,   131,     7,
     7,   134,     7,     7,   137,   138,     7,     7,     7,     7,
     7,     7,     7,   146,   147,     7,     5,     5,  1513,   203,
  1515,  1516,   203,     5,     5,   204,   204,  1522,     7,     7,
     7,     7,  1527,     7,  1529,  1530,     7,     7,     7,   205,
   205,   174,   204,  1538,  1539,  1540,   184,   185,   186,   187,
   205,   205,   190,   191,   192,   193,   194,  1552,   205,  1554,
   198,   199,     7,  1558,  1559,   201,   205,  1562,     7,   202,
     5,     5,  1567,   204,  1569,   205,  1571,   178,   179,   180,
   181,   182,   205,   184,   185,   186,   187,   205,     7,   190,
   191,   192,   193,   194,     7,     7,    90,   198,   199,   204,
     7,   191,     7,     7,     7,     7,     7,   197,     3,     4,
     5,     7,     5,     7,   201,     5,   206,   201,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,     3,     4,     5,     6,   201,   201,   201,
     3,     7,     7,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,     3,     4,
     5,   201,   201,   201,   201,   201,     5,     5,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,     3,     4,     5,   201,   201,   204,     5,
     5,     5,     5,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,     3,     4,
     5,   204,   204,   203,     5,     5,   204,   204,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,   205,   184,   185,   186,   187,     7,     7,
   190,   191,   192,   193,   194,   195,   191,   116,   198,   118,
   119,   120,   197,   122,   123,   124,     7,     7,   203,   128,
     7,   206,   131,   204,   201,   134,   201,     7,   137,   138,
   204,   204,   202,   204,   202,   202,   202,   146,   147,     5,
     7,   191,   116,     7,   118,   119,   120,   197,   122,   123,
   124,     7,     7,     7,   128,     7,   206,   131,     7,     7,
   134,     7,     7,   137,   138,   174,   205,     7,     7,     7,
     7,     5,   146,   147,   205,    89,   191,     7,   204,   121,
   205,   205,   197,   204,   199,     7,   205,   205,   205,     7,
     5,   206,   203,   202,     7,   201,     5,     5,     5,   202,
   174,   201,   204,   204,     5,   204,   204,     5,     5,   201,
   204,   191,     5,     7,   201,     7,     7,   197,     7,     7,
     7,     7,   202,     7,     7,     7,   206,     7,   202,   178,
   179,   180,   181,   182,     7,   184,   185,   186,   187,     7,
     7,   190,   191,   192,   193,   194,   191,     7,   202,   198,
   199,   201,   197,     3,     4,     5,   201,   201,   207,     7,
     7,   206,    43,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,     3,     4,
     5,   201,   106,     5,     7,   201,     7,   202,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,   116,     7,   118,   119,   120,   202,   122,
   123,   124,   201,   201,     0,   128,     0,   202,   131,   202,
   201,   134,   844,   594,   137,   138,     7,   921,   723,   460,
  1336,  1029,  1170,   146,   147,   506,   178,   179,   180,   181,
   182,    99,   184,   185,   186,   187,   429,   261,   190,   191,
   192,   193,   194,     7,   434,    -1,   198,   199,   189,   212,
    -1,   174,    -1,    -1,   178,   179,   180,   181,   182,    -1,
   184,   185,   186,   187,    -1,     7,   190,   191,   192,   193,
   194,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,   202,
   178,   179,   180,   181,   182,    -1,   184,   185,   186,   187,
     7,    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,
   198,   199,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   191,     7,    -1,    -1,    -1,    -1,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,     7,   178,   179,   180,   181,   182,
    -1,   184,   185,   186,   187,    -1,   191,   190,   191,   192,
   193,   194,   197,    -1,    -1,   198,   199,     7,    -1,    -1,
    -1,   206,    -1,    -1,    -1,   178,   179,   180,   181,   182,
    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,     7,    -1,    -1,   198,   199,   178,   179,   180,
   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,     7,    -1,    -1,   198,   199,    -1,
    -1,    -1,    -1,    -1,   178,   179,   180,   181,   182,    -1,
   184,   185,   186,   187,    -1,    -1,   190,   191,   192,   193,
   194,     7,    -1,    -1,   198,   199,   178,   179,   180,   181,
   182,    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,
   192,   193,   194,     7,    -1,    -1,   198,   199,    -1,    -1,
    -1,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,     7,    -1,
    -1,   198,   199,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,     8,    -1,   198,   199,   178,   179,   180,   181,   182,
    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,     8,    -1,   198,   199,    -1,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,     8,    -1,    -1,   198,   199,
    -1,    -1,    -1,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,
    -1,    -1,   178,   179,   180,   181,   182,    -1,   184,   185,
   186,   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,
    -1,    -1,   198,   199,   178,   179,   180,   181,   182,    -1,
   184,   185,   186,   187,    -1,    -1,   190,   191,   192,   193,
   194,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,   178,
   179,   180,   181,   182,    -1,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
   183,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,   195,     5,    -1,   198,    -1,    -1,    10,    -1,
    12,   178,   179,   180,   181,   182,   183,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,   195,    -1,
    -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    75,    -1,    -1,    -1,    79,    -1,    -1,
    -1,    -1,   178,   179,   180,   181,   182,    89,   184,   185,
   186,   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,
    -1,    -1,   198,   199,   106,    -1,    -1,    -1,    -1,   205,
    -1,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,    -1,    -1,    -1,    -1,   139,   205,   141,
   178,   179,   180,   181,   182,    -1,   184,   185,   186,   187,
    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,
   198,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
    -1,    -1,    -1,   175,   176,   178,   179,   180,   181,   182,
    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,   178,   179,   180,
   181,   182,   205,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,   178,
   179,   180,   181,   182,   205,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,   178,   179,   180,   181,   182,   205,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,   178,   179,   180,   181,   182,   205,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
   205,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,   178,   179,   180,
   181,   182,   205,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,   178,
   179,   180,   181,   182,   205,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,   178,   179,   180,   181,   182,   205,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,   178,   179,   180,   181,   182,   205,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
   205,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,   178,   179,   180,
   181,   182,   205,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,   178,
   179,   180,   181,   182,   205,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,   178,   179,   180,   181,   182,   205,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,   178,   179,   180,   181,   182,   205,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
   205,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,   178,   179,   180,
   181,   182,   205,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,   178,
   179,   180,   181,   182,   205,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,   178,   179,   180,   181,   182,   205,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,   178,   179,   180,   181,   182,   205,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
   205,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,   178,   179,   180,
   181,   182,   205,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,   178,
   179,   180,   181,   182,   205,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,   178,   179,   180,   181,   182,   205,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,   178,   179,   180,   181,   182,   205,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
   205,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,   178,   179,   180,
   181,   182,   205,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,   178,
   179,   180,   181,   182,   205,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,   178,   179,   180,   181,   182,   205,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,   178,   179,   180,   181,   182,   205,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
   205,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,   178,   179,   180,
   181,   182,   205,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,   178,
   179,   180,   181,   182,   205,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,   178,   179,   180,   181,   182,   205,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,   178,   179,   180,   181,   182,   205,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
   205,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,   178,   179,   180,
   181,   182,   205,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,   178,
   179,   180,   181,   182,   205,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,    -1,    -1,    -1,    -1,    -1,   205,   178,   179,   180,
   181,   182,   183,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,   195,    -1,    -1,   198,   178,   179,
   180,   181,   182,   204,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,    -1,    -1,   204,   178,   179,   180,   181,   182,
    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,
    -1,   204,   178,   179,   180,   181,   182,    -1,   184,   185,
   186,   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,
    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,   204,   178,
   179,   180,   181,   182,    -1,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,    -1,    -1,    -1,    -1,   204,   178,   179,   180,   181,
   182,    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,
   192,   193,   194,    -1,    -1,    -1,   198,   199,    -1,    -1,
    -1,    -1,   204,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,   204,
   178,   179,   180,   181,   182,    -1,   184,   185,   186,   187,
    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,
   198,   199,    -1,    -1,    -1,    -1,   204,   178,   179,   180,
   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,    -1,
    -1,    -1,    -1,   204,   178,   179,   180,   181,   182,    -1,
   184,   185,   186,   187,    -1,    -1,   190,   191,   192,   193,
   194,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,
   204,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,    -1,    -1,    -1,    -1,   204,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,    -1,    -1,   204,   178,   179,   180,   181,   182,
    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,
    -1,   204,   178,   179,   180,   181,   182,    -1,   184,   185,
   186,   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,
    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,   204,   178,
   179,   180,   181,   182,    -1,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,    -1,    -1,    -1,    -1,   204,   178,   179,   180,   181,
   182,    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,
   192,   193,   194,    -1,    -1,    -1,   198,   199,    -1,    -1,
    -1,    -1,   204,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,   204,
   178,   179,   180,   181,   182,    -1,   184,   185,   186,   187,
    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,
   198,   199,    -1,    -1,    -1,    -1,   204,   178,   179,   180,
   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,   190,
   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,    -1,
    -1,    -1,    -1,   204,   178,   179,   180,   181,   182,    -1,
   184,   185,   186,   187,    -1,    -1,   190,   191,   192,   193,
   194,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,
   204,   178,   179,   180,   181,   182,    -1,   184,   185,   186,
   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,
    -1,   198,   199,    -1,    -1,    -1,    -1,   204,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,    -1,    -1,   204,   178,   179,   180,   181,   182,
    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,    -1,    -1,    -1,   198,   199,    -1,    -1,    -1,
    -1,   204,   178,   179,   180,   181,   182,    -1,   184,   185,
   186,   187,    -1,    -1,   190,   191,   192,   193,   194,    -1,
    -1,    -1,   198,   199,    -1,    -1,    -1,    -1,   204,   178,
   179,   180,   181,   182,    -1,   184,   185,   186,   187,    -1,
    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,
   199,    -1,    -1,    -1,    -1,   204,   178,   179,   180,   181,
   182,    -1,   184,   185,   186,   187,    -1,    -1,   190,   191,
   192,   193,   194,    -1,    -1,    -1,   198,   199,    -1,    -1,
    -1,    -1,   204,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,    -1,    -1,   202,   178,   179,
   180,   181,   182,    -1,   184,   185,   186,   187,    -1,    -1,
   190,   191,   192,   193,   194,    -1,    -1,    -1,   198,   199,
    -1,    -1,   202,   178,   179,   180,   181,   182,    -1,   184,
   185,   186,   187,    -1,    -1,   190,   191,   192,   193,   194,
    -1,    -1,    -1,   198,   199,   178,   179,   180,   181,   182,
   183,   184,   185,   186,   187,    -1,    -1,   190,   191,   192,
   193,   194,   195,   181,   182,   198,   184,   185,   186,   187,
    -1,    -1,   190,   191,   192,   193,   194,    -1,    -1,    -1,
   198,   199
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
#line 2301 "yacc.y"
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
#line 2320 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 223:
#line 2323 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 224:
#line 2328 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 225:
#line 2333 "yacc.y"
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
#line 2345 "yacc.y"
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
#line 2361 "yacc.y"
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
case 228:
#line 2385 "yacc.y"
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
case 230:
#line 2445 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 231:
#line 2448 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 232:
#line 2457 "yacc.y"
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
case 233:
#line 2522 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 234:
#line 2526 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 235:
#line 2533 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 237:
#line 2542 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 238:
#line 2547 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 239:
#line 2550 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 240:
#line 2557 "yacc.y"
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
case 241:
#line 2573 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 242:
#line 2579 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 243:
#line 2582 "yacc.y"
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
case 244:
#line 2601 "yacc.y"
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
case 245:
#line 2613 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 246:
#line 2619 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 247:
#line 2622 "yacc.y"
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
case 248:
#line 2637 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 249:
#line 2641 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 250:
#line 2650 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 252:
#line 2661 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 253:
#line 2666 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 254:
#line 2675 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 255:
#line 2688 "yacc.y"
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
case 256:
#line 2703 "yacc.y"
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
case 257:
#line 2777 "yacc.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 259:
#line 2793 "yacc.y"
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
case 260:
#line 2811 "yacc.y"
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
case 261:
#line 2825 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 262:
#line 2828 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 263:
#line 2831 "yacc.y"
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
case 264:
#line 2877 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 266:
#line 2887 "yacc.y"
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
case 268:
#line 2913 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 270:
#line 2925 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 271:
#line 2931 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 272:
#line 2938 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 274:
#line 2949 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 275:
#line 2955 "yacc.y"
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
case 276:
#line 2969 "yacc.y"
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
case 277:
#line 2987 "yacc.y"
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
case 279:
#line 3008 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 280:
#line 3011 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 281:
#line 3015 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 282:
#line 3018 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 283:
#line 3027 "yacc.y"
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
case 284:
#line 3066 "yacc.y"
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
case 285:
#line 3090 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 286:
#line 3095 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 287:
#line 3101 "yacc.y"
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
case 288:
#line 3251 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 289:
#line 3256 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 290:
#line 3265 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 291:
#line 3274 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 293:
#line 3282 "yacc.y"
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
case 294:
#line 3322 "yacc.y"
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
case 295:
#line 3337 "yacc.y"
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
case 296:
#line 3365 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 297:
#line 3368 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 298:
#line 3371 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 299:
#line 3374 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 300:
#line 3381 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 302:
#line 3392 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 303:
#line 3401 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 304:
#line 3411 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 305:
#line 3425 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 307:
#line 3437 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 308:
#line 3439 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 309:
#line 3441 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 310:
#line 3443 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 311:
#line 3451 "yacc.y"
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
case 313:
#line 3473 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 314:
#line 3481 "yacc.y"
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
case 315:
#line 3543 "yacc.y"
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
case 316:
#line 3589 "yacc.y"
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
case 317:
#line 3613 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 318:
#line 3622 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 319:
#line 3636 "yacc.y"
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
case 321:
#line 3665 "yacc.y"
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
case 322:
#line 3689 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 323:
#line 3697 "yacc.y"
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
case 324:
#line 3752 "yacc.y"
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
case 325:
#line 3769 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 326:
#line 3770 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 327:
#line 3771 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 328:
#line 3772 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 329:
#line 3773 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 330:
#line 3774 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 331:
#line 3775 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 332:
#line 3782 "yacc.y"
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
case 333:
#line 3796 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 334:
#line 3814 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 336:
#line 3824 "yacc.y"
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
case 338:
#line 3849 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 340:
#line 3861 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 341:
#line 3868 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 342:
#line 3875 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 343:
#line 3878 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 344:
#line 3880 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 345:
#line 3886 "yacc.y"
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
case 346:
#line 3901 "yacc.y"
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
case 347:
#line 3920 "yacc.y"
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
case 349:
#line 3939 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 350:
#line 3942 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 351:
#line 3950 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 352:
#line 3953 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 353:
#line 3958 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 354:
#line 3963 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 355:
#line 3968 "yacc.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 356:
#line 3978 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 357:
#line 3987 "yacc.y"
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
case 358:
#line 4024 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 359:
#line 4031 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 360:
#line 4034 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 361:
#line 4046 "yacc.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 362:
#line 4056 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 363:
#line 4062 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 364:
#line 4065 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 365:
#line 4077 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 366:
#line 4085 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 367:
#line 4096 "yacc.y"
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
case 368:
#line 4112 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 369:
#line 4119 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 370:
#line 4125 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 371:
#line 4131 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 372:
#line 4137 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 373:
#line 4145 "yacc.y"
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
case 374:
#line 4161 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 375:
#line 4168 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 376:
#line 4174 "yacc.y"
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
case 377:
#line 4185 "yacc.y"
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
case 378:
#line 4196 "yacc.y"
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
case 379:
#line 4212 "yacc.y"
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
case 380:
#line 4224 "yacc.y"
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
case 381:
#line 4246 "yacc.y"
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
case 382:
#line 4268 "yacc.y"
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
case 383:
#line 4281 "yacc.y"
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
case 384:
#line 4294 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 386:
#line 4303 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 388:
#line 4312 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 389:
#line 4322 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 390:
#line 4333 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 391:
#line 4342 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 392:
#line 4352 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 394:
#line 4362 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 395:
#line 4365 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 396:
#line 4374 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 397:
#line 4387 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 399:
#line 4403 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 400:
#line 4407 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 401:
#line 4411 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 402:
#line 4415 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 403:
#line 4420 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 404:
#line 4431 "yacc.y"
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
case 406:
#line 4448 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 407:
#line 4452 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 408:
#line 4456 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 409:
#line 4460 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 410:
#line 4464 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 411:
#line 4469 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 412:
#line 4480 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 414:
#line 4495 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 415:
#line 4499 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 416:
#line 4503 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 417:
#line 4507 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 418:
#line 4512 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 419:
#line 4523 "yacc.y"
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
case 421:
#line 4541 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 422:
#line 4545 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 423:
#line 4549 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 424:
#line 4553 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 425:
#line 4558 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 426:
#line 4568 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 427:
#line 4574 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 428:
#line 4580 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 429:
#line 4590 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 430:
#line 4593 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 431:
#line 4598 "yacc.y"
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
case 433:
#line 4616 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 434:
#line 4625 "yacc.y"
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
case 435:
#line 4654 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 436:
#line 4657 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 437:
#line 4660 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 438:
#line 4668 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 439:
#line 4683 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 441:
#line 4695 "yacc.y"
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
case 443:
#line 4718 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 445:
#line 4732 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 446:
#line 4739 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 447:
#line 4747 "yacc.y"
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
case 448:
#line 4793 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 449:
#line 4798 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 450:
#line 4804 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 451:
#line 4807 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 452:
#line 4812 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 454:
#line 4823 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 455:
#line 4826 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 456:
#line 4832 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 457:
#line 4837 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 458:
#line 4843 "yacc.y"
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
case 459:
#line 4856 "yacc.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 461:
#line 4870 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 462:
#line 4877 "yacc.y"
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
case 463:
#line 4905 "yacc.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown Type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 464:
#line 4914 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 465:
#line 4915 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 466:
#line 4921 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 467:
#line 4930 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 468:
#line 4947 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 470:
#line 4959 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 472:
#line 4966 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 474:
#line 4978 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 475:
#line 4985 "yacc.y"
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
case 476:
#line 4997 "yacc.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 477:
#line 5007 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 478:
#line 5012 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 479:
#line 5018 "yacc.y"
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
case 480:
#line 5035 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 481:
#line 5045 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 482:
#line 5048 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 483:
#line 5052 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 484:
#line 5063 "yacc.y"
{
      vyyerror("Plot has been superseded by Print "
	       "(Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 485:
#line 5069 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 486:
#line 5078 "yacc.y"
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
case 487:
#line 5090 "yacc.y"
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
case 488:
#line 5113 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 489:
#line 5114 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 490:
#line 5115 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 491:
#line 5116 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 492:
#line 5122 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 493:
#line 5124 "yacc.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 494:
#line 5130 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 495:
#line 5136 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 496:
#line 5143 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 497:
#line 5152 "yacc.y"
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
case 498:
#line 5166 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 499:
#line 5174 "yacc.y"
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
case 500:
#line 5187 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 501:
#line 5197 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 502:
#line 5206 "yacc.y"
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
case 503:
#line 5220 "yacc.y"
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
case 504:
#line 5239 "yacc.y"
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
case 505:
#line 5261 "yacc.y"
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
case 506:
#line 5281 "yacc.y"
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
case 508:
#line 5303 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 509:
#line 5310 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 510:
#line 5317 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 511:
#line 5324 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 512:
#line 5328 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 513:
#line 5332 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 514:
#line 5336 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 515:
#line 5340 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 516:
#line 5349 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 517:
#line 5354 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 518:
#line 5359 "yacc.y"
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
case 519:
#line 5379 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Print") ;  	
    ;
    break;}
case 520:
#line 5386 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 521:
#line 5393 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 522:
#line 5401 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 523:
#line 5409 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 524:
#line 5416 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 525:
#line 5423 "yacc.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 526:
#line 5427 "yacc.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 527:
#line 5435 "yacc.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 528:
#line 5439 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
    ;
    break;}
case 529:
#line 5451 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 530:
#line 5457 "yacc.y"
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
case 531:
#line 5504 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 533:
#line 5515 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 534:
#line 5518 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 535:
#line 5524 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 536:
#line 5525 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 538:
#line 5533 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 539:
#line 5536 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 540:
#line 5545 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 541:
#line 5548 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 542:
#line 5559 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 543:
#line 5565 "yacc.y"
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
case 544:
#line 5584 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 545:
#line 5590 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 546:
#line 5596 "yacc.y"
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
case 547:
#line 5608 "yacc.y"
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
case 550:
#line 5659 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 551:
#line 5665 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 552:
#line 5671 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 553:
#line 5682 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 554:
#line 5683 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 555:
#line 5684 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 556:
#line 5685 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 557:
#line 5686 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 558:
#line 5687 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 559:
#line 5688 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 560:
#line 5689 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 561:
#line 5690 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 562:
#line 5691 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 563:
#line 5692 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 564:
#line 5693 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 565:
#line 5694 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 566:
#line 5695 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 567:
#line 5696 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 568:
#line 5697 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 569:
#line 5698 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 570:
#line 5699 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 571:
#line 5700 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 572:
#line 5701 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 573:
#line 5702 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 574:
#line 5705 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 575:
#line 5706 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 576:
#line 5707 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 577:
#line 5708 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 578:
#line 5709 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 579:
#line 5710 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 580:
#line 5711 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 581:
#line 5712 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 582:
#line 5713 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 583:
#line 5714 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 584:
#line 5715 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 585:
#line 5716 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 586:
#line 5717 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 587:
#line 5718 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 588:
#line 5719 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 589:
#line 5720 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 590:
#line 5721 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 591:
#line 5722 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 592:
#line 5723 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 593:
#line 5724 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 594:
#line 5725 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 595:
#line 5726 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 596:
#line 5727 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 597:
#line 5728 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 598:
#line 5729 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 599:
#line 5730 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 600:
#line 5731 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 601:
#line 5732 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 602:
#line 5733 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 603:
#line 5734 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 604:
#line 5735 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 605:
#line 5736 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 606:
#line 5737 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 607:
#line 5738 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 608:
#line 5739 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 609:
#line 5740 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 610:
#line 5741 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 611:
#line 5742 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 612:
#line 5743 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 613:
#line 5744 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 614:
#line 5749 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 615:
#line 5750 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 616:
#line 5751 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 617:
#line 5752 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 618:
#line 5753 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 619:
#line 5754 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 620:
#line 5755 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 621:
#line 5757 "yacc.y"
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
case 622:
#line 5776 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 623:
#line 5779 "yacc.y"
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
case 624:
#line 5794 "yacc.y"
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
#line 5808 "yacc.y"



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


