
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

/* $Id: yacc.tab.c,v 1.33 2000-11-24 13:39:03 dular Exp $ */

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



#define	YYFINAL		1569
#define	YYFLAG		-32768
#define	YYNTBASE	208

#define YYTRANSLATE(x) ((unsigned)(x) <= 441 ? yytranslate[x] : 393)

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
   826,   845,   846,   851,   852,   855,   859,   863,   867,   869,
   873,   874,   878,   880,   884,   885,   889,   890,   895,   896,
   899,   903,   907,   911,   912,   917,   918,   921,   925,   931,
   935,   939,   944,   945,   948,   952,   954,   955,   958,   962,
   967,   971,   976,   981,   982,   987,   988,   991,   995,   999,
  1003,  1007,  1008,  1015,  1019,  1020,  1026,  1030,  1034,  1038,
  1042,  1043,  1047,  1048,  1051,  1056,  1061,  1066,  1071,  1072,
  1075,  1079,  1083,  1087,  1088,  1091,  1095,  1099,  1103,  1107,
  1108,  1111,  1112,  1113,  1123,  1127,  1131,  1135,  1136,  1139,
  1143,  1144,  1145,  1155,  1156,  1158,  1160,  1162,  1164,  1166,
  1168,  1173,  1177,  1178,  1181,  1185,  1187,  1188,  1191,  1195,
  1200,  1205,  1206,  1212,  1213,  1218,  1219,  1222,  1226,  1230,
  1234,  1238,  1242,  1246,  1250,  1254,  1257,  1261,  1262,  1266,
  1268,  1272,  1273,  1277,  1278,  1281,  1285,  1289,  1294,  1299,
  1304,  1309,  1315,  1321,  1324,  1332,  1344,  1352,  1360,  1370,
  1382,  1396,  1412,  1413,  1421,  1422,  1430,  1438,  1442,  1444,
  1446,  1447,  1450,  1454,  1458,  1461,  1462,  1465,  1469,  1473,
  1477,  1481,  1486,  1487,  1490,  1494,  1498,  1502,  1506,  1510,
  1515,  1516,  1519,  1523,  1527,  1531,  1535,  1540,  1541,  1544,
  1548,  1552,  1556,  1560,  1564,  1569,  1574,  1579,  1580,  1585,
  1586,  1589,  1593,  1597,  1601,  1605,  1609,  1613,  1614,  1617,
  1621,  1623,  1624,  1627,  1631,  1636,  1641,  1645,  1650,  1651,
  1656,  1657,  1660,  1664,  1669,  1670,  1676,  1682,  1683,  1686,
  1687,  1694,  1698,  1699,  1704,  1708,  1712,  1713,  1716,  1720,
  1722,  1723,  1726,  1730,  1734,  1738,  1742,  1747,  1748,  1757,
  1758,  1759,  1763,  1771,  1779,  1783,  1790,  1792,  1794,  1796,
  1798,  1799,  1803,  1805,  1808,  1811,  1836,  1839,  1840,  1855,
  1864,  1885,  1915,  1954,  1967,  1968,  1971,  1975,  1980,  1985,
  1989,  1992,  1996,  2000,  2004,  2008,  2012,  2016,  2020,  2024,
  2028,  2032,  2036,  2040,  2044,  2050,  2053,  2057,  2058,  2061,
  2062,  2066,  2068,  2072,  2073,  2075,  2079,  2081,  2083,  2087,
  2091,  2095,  2102,  2107,  2112,  2119,  2129,  2135,  2136,  2140,
  2146,  2152,  2154,  2156,  2158,  2160,  2162,  2164,  2166,  2168,
  2170,  2172,  2174,  2176,  2178,  2180,  2182,  2184,  2186,  2188,
  2190,  2192,  2194,  2196,  2200,  2203,  2206,  2210,  2214,  2218,
  2222,  2226,  2230,  2234,  2238,  2242,  2246,  2250,  2254,  2258,
  2262,  2267,  2272,  2277,  2282,  2287,  2292,  2297,  2302,  2307,
  2312,  2319,  2324,  2329,  2334,  2339,  2344,  2349,  2356,  2363,
  2370,  2376,  2379,  2381,  2383,  2385,  2387,  2389,  2391,  2393,
  2395,  2397,  2399
};

static const short yyrhs[] = {    -1,
   209,   210,     0,     0,     0,   210,   211,   212,     0,    43,
   200,   215,   201,     0,    79,   200,   235,   201,     0,    50,
   200,   267,   201,     0,    63,   200,   252,   201,     0,    65,
   200,   258,   201,     0,    75,   200,   274,   201,     0,    88,
   200,   297,   201,     0,   105,   200,   323,   201,     0,   138,
   200,   353,   201,     0,   140,   200,   365,   201,     0,   369,
     0,   387,     0,    10,   392,     0,   213,     0,   174,     7,
     0,   174,     5,     7,     0,   174,     5,     5,     7,     0,
   174,     5,     5,     5,     7,     0,   175,     7,     0,     0,
   214,   373,     0,     0,     0,   215,   216,   217,     0,     5,
   176,   219,     7,     0,     5,   234,   176,   219,     7,     0,
     0,     5,   232,   176,   218,   219,     7,     0,    44,   202,
   230,   203,     7,     0,   387,     0,     0,     0,   223,   202,
   220,   224,   221,   225,   203,     0,   198,   227,     0,   219,
     0,     5,   233,     0,    51,     0,     5,     0,   227,     0,
    45,     0,     0,   231,   226,   227,     0,   231,    46,     5,
   233,     0,     5,     0,   229,     0,   200,   228,   201,     0,
     0,   228,   231,   229,     0,   228,   231,   190,   229,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   202,   390,
   203,     3,     0,     5,     0,     5,   200,   390,   201,     0,
     5,   200,   201,     0,     0,   230,   231,     5,     0,   230,
   231,     5,   200,   390,   201,     0,     0,   204,     0,   200,
   198,   390,   201,     0,     0,   200,   201,     0,   200,   390,
   201,     0,     0,   235,   236,     0,    47,   202,   237,   203,
     7,     0,     5,   202,   203,   176,   238,     7,     0,     5,
   202,   222,   203,   176,   238,     7,     0,   387,     0,     0,
   237,   231,     5,     0,    11,   202,   390,   203,     0,    79,
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
     0,   196,   242,     0,   205,   242,   206,     0,   391,     0,
   389,   249,   251,     0,     5,   322,     0,   322,     0,   322,
   249,     0,     0,    98,   246,   202,   240,   203,     0,     0,
    42,   247,   202,     3,   204,   390,   204,   240,   204,   240,
   203,     0,    38,   202,   322,   203,     0,    40,   202,   322,
   203,     0,     0,    39,   248,   202,   240,   204,   222,   203,
     0,   183,     5,   184,   202,   240,   203,     0,   199,     5,
     0,   199,   161,     0,   199,   116,     0,   199,     3,     0,
   245,   198,     3,     0,   198,     3,     0,   202,   207,   203,
     0,   202,   203,     0,   202,   250,   203,     0,   242,     0,
   250,   204,   242,     0,     0,   200,   385,   201,     0,   200,
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
     0,    69,     5,     7,     0,    70,   390,     7,     0,    71,
   390,     7,     0,    72,   390,     7,     0,    73,   390,     7,
     0,    74,   390,     7,     0,     0,   267,   268,     0,   200,
   269,   201,     0,   387,     0,     0,   269,   270,     0,    76,
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
   274,   275,     0,   200,   276,   201,     0,   387,     0,     0,
   276,   277,     0,    76,     5,     7,     0,    76,     5,   232,
     7,     0,    66,     5,     7,     0,    77,   200,   278,   201,
     0,    82,   200,   284,   201,     0,    84,   200,   291,   201,
     0,    50,   200,   294,   201,     0,     0,   278,   200,   279,
   201,     0,     0,   279,   280,     0,    76,     5,     7,     0,
    78,     5,     7,     0,    78,     5,   232,     7,     0,    79,
     5,   281,     7,     0,    80,   222,     7,     0,    81,   222,
     7,     0,     0,     0,     0,   200,    89,     5,     7,    88,
     5,   232,     7,   282,    43,   222,     7,   283,   105,     5,
   233,     7,   201,     0,     0,   284,   200,   285,   201,     0,
     0,   285,   286,     0,    76,     5,     7,     0,    83,   287,
     7,     0,    78,   289,     7,     0,     5,     0,   200,   288,
   201,     0,     0,   288,   231,     5,     0,     5,     0,   200,
   290,   201,     0,     0,   290,   231,     5,     0,     0,   291,
   200,   292,   201,     0,     0,   292,   293,     0,    76,     5,
     7,     0,    66,     5,     7,     0,    78,     5,     7,     0,
     0,   294,   200,   295,   201,     0,     0,   295,   296,     0,
    78,     5,     7,     0,    81,   223,    87,     5,     7,     0,
    85,   223,     7,     0,    86,   226,     7,     0,    87,     5,
   233,     7,     0,     0,   297,   298,     0,   200,   299,   201,
     0,   387,     0,     0,   299,   300,     0,    76,     5,     7,
     0,    76,     5,   232,     7,     0,    66,     5,     7,     0,
    89,   200,   301,   201,     0,    93,   200,   307,   201,     0,
     0,   301,   200,   302,   201,     0,     0,   302,   303,     0,
    76,     5,     7,     0,    66,    84,     7,     0,    66,    94,
     7,     0,    66,     5,     7,     0,     0,    90,     5,   233,
   304,   306,     7,     0,    91,     3,     7,     0,     0,   202,
   305,   240,   203,     7,     0,   104,   222,     7,     0,    65,
     5,     7,     0,    63,     5,     7,     0,    92,     3,     7,
     0,     0,   202,     5,   203,     0,     0,   307,   308,     0,
    94,   200,   313,   201,     0,    95,   200,   313,   201,     0,
    96,   200,   317,   201,     0,    97,   200,   309,   201,     0,
     0,   309,   310,     0,    66,     5,     7,     0,    87,     5,
     7,     0,   200,   311,   201,     0,     0,   311,   312,     0,
    60,   322,     7,     0,    61,   322,     7,     0,    93,   322,
     7,     0,   104,   222,     7,     0,     0,   313,   314,     0,
     0,     0,   321,   202,   315,   240,   316,   204,   240,   203,
     7,     0,   104,   222,     7,     0,    63,     5,     7,     0,
    65,     5,     7,     0,     0,   317,   318,     0,   104,   222,
     7,     0,     0,     0,   321,   202,   319,   240,   320,   204,
   322,   203,     7,     0,     0,    98,     0,    99,     0,   100,
     0,   101,     0,   102,     0,   103,     0,   200,     5,     5,
   201,     0,   200,     5,   201,     0,     0,   323,   324,     0,
   200,   325,   201,     0,   387,     0,     0,   325,   326,     0,
    76,     5,     7,     0,    76,     5,   232,     7,     0,   106,
   200,   328,   201,     0,     0,   113,   327,   200,   335,   201,
     0,     0,   328,   200,   329,   201,     0,     0,   329,   330,
     0,    76,     5,     7,     0,    66,     5,     7,     0,   107,
   331,     7,     0,   108,   392,     7,     0,   111,   333,     7,
     0,   112,     5,     7,     0,   109,   384,     7,     0,   110,
   392,     7,     0,     5,   233,     0,   200,   332,   201,     0,
     0,   332,   231,     5,     0,     5,     0,   200,   334,   201,
     0,     0,   334,   231,     5,     0,     0,   335,   336,     0,
     5,     5,     7,     0,   115,   238,     7,     0,   123,   200,
   342,   201,     0,   127,   200,   344,   201,     0,   130,   200,
   346,   201,     0,   133,   200,   348,   201,     0,     5,   202,
     5,   203,     7,     0,   115,   202,   238,   203,     7,     0,
   173,     7,     0,   119,   202,   238,   203,   200,   335,   201,
     0,   119,   202,   238,   203,   200,   335,   201,   120,   200,
   335,   201,     0,   117,   202,     5,   204,   238,   203,     7,
     0,   122,   202,     5,   204,   238,   203,     7,     0,   118,
   202,     5,   204,     5,   204,   384,   203,     7,     0,   121,
   202,     5,   204,   390,   204,   384,   204,   390,   203,     7,
     0,   123,   202,   390,   204,   390,   204,   238,   204,   238,
   203,   200,   335,   201,     0,   127,   202,   390,   204,   390,
   204,   238,   204,   390,   204,   390,   203,   200,   335,   201,
     0,     0,   145,   337,   202,   339,   340,   203,     7,     0,
     0,   146,   338,   202,   339,   340,   203,     7,     0,   136,
   202,   222,   204,   238,   203,     7,     0,   137,     6,     7,
     0,   382,     0,     5,     0,     0,   340,   341,     0,   204,
   158,   392,     0,   204,   161,   384,     0,   204,   384,     0,
     0,   342,   343,     0,   124,   390,     7,     0,   125,   390,
     7,     0,   116,   238,     7,     0,   126,   238,     7,     0,
   113,   200,   335,   201,     0,     0,   344,   345,     0,   124,
   390,     7,     0,   125,   390,     7,     0,   116,   238,     7,
     0,   128,   390,     7,     0,   129,   390,     7,     0,   113,
   200,   335,   201,     0,     0,   346,   347,     0,   131,   390,
     7,     0,   132,   238,     7,     0,    68,   390,     7,     0,
   172,   390,     7,     0,   113,   200,   335,   201,     0,     0,
   348,   349,     0,   131,   390,     7,     0,   134,   390,     7,
     0,    68,   390,     7,     0,   172,   390,     7,     0,   106,
     5,     7,     0,   135,   200,   350,   201,     0,   113,   200,
   335,   201,     0,   114,   200,   335,   201,     0,     0,   350,
   200,   351,   201,     0,     0,   351,   352,     0,    66,     5,
     7,     0,    89,     5,     7,     0,   104,   222,     7,     0,
    68,   390,     7,     0,    79,   238,     7,     0,   172,     5,
     7,     0,     0,   353,   354,     0,   200,   355,   201,     0,
   387,     0,     0,   355,   356,     0,    76,     5,     7,     0,
    76,     5,   232,     7,     0,   107,     5,   233,     7,     0,
   139,     5,     7,     0,    89,   200,   357,   201,     0,     0,
   357,   200,   358,   201,     0,     0,   358,   359,     0,    76,
     5,     7,     0,    57,   200,   360,   201,     0,     0,   360,
    94,   200,   361,   201,     0,   360,     5,   200,   361,   201,
     0,     0,   361,   362,     0,     0,   321,   202,   363,   240,
   203,     7,     0,    66,     5,     7,     0,     0,   104,   364,
   222,     7,     0,    63,     5,     7,     0,    65,     5,     7,
     0,     0,   365,   366,     0,   200,   367,   201,     0,   387,
     0,     0,   367,   368,     0,    76,     5,     7,     0,   141,
     5,     7,     0,   163,     5,     7,     0,   143,   392,     7,
     0,   113,   200,   371,   201,     0,     0,   140,     5,   142,
     5,   370,   200,   371,   201,     0,     0,     0,   371,   372,
   373,     0,   144,   202,   374,   377,   379,   203,     7,     0,
   145,   202,   374,   377,   379,   203,     7,     0,     5,   376,
   204,     0,     5,   376,   375,     5,   376,   204,     0,   191,
     0,   192,     0,   189,     0,   190,     0,     0,   202,   222,
   203,     0,   148,     0,   149,   222,     0,   150,   222,     0,
   152,   200,   200,   390,   204,   390,   204,   390,   201,   200,
   390,   204,   390,   204,   390,   201,   200,   390,   204,   390,
   204,   390,   201,   201,     0,   151,   222,     0,     0,   151,
   200,   238,   204,   238,   204,   238,   201,   200,   384,   378,
   204,   384,   201,     0,   153,   200,   390,   204,   390,   204,
   390,   201,     0,   154,   200,   200,   390,   204,   390,   204,
   390,   201,   200,   390,   204,   390,   204,   390,   201,   201,
   200,   390,   201,     0,   155,   200,   200,   390,   204,   390,
   204,   390,   201,   200,   390,   204,   390,   204,   390,   201,
   200,   390,   204,   390,   204,   390,   201,   201,   200,   390,
   204,   390,   201,     0,   156,   200,   200,   390,   204,   390,
   204,   390,   201,   200,   390,   204,   390,   204,   390,   201,
   200,   390,   204,   390,   204,   390,   201,   200,   390,   204,
   390,   204,   390,   201,   201,   200,   390,   204,   390,   204,
   390,   201,     0,   149,   222,   157,     5,   200,   390,   204,
   390,   201,   200,   390,   201,     0,     0,   379,   380,     0,
   204,   158,   392,     0,   204,   158,   184,   392,     0,   204,
   158,   188,   392,     0,   204,   159,   390,     0,   204,   166,
     0,   204,   167,   390,     0,   204,   162,   390,     0,   204,
   163,     5,     0,   204,   164,   381,     0,   204,   165,   381,
     0,   204,   163,   381,     0,   204,   160,   390,     0,   204,
   161,   384,     0,   204,   147,     5,     0,   204,   169,     5,
     0,   204,   168,   390,     0,   204,    57,   384,     0,   204,
   170,   390,     0,   204,   170,   200,   385,   201,     0,   204,
   171,     0,   204,   109,   384,     0,     0,   381,     6,     0,
     0,   200,   383,   201,     0,   238,     0,   383,   204,   238,
     0,     0,   390,     0,   200,   385,   201,     0,   390,     0,
   386,     0,   385,   204,   390,     0,   385,   204,   386,     0,
   390,     8,   390,     0,   390,     8,   202,   390,   203,   390,
     0,     5,   176,   390,     7,     0,     5,   176,     6,     7,
     0,     5,   176,   200,   385,   201,     7,     0,     5,   176,
    49,   202,     5,   204,     5,   203,     7,     0,    12,   202,
   388,   203,     7,     0,     0,   388,   231,     5,     0,   388,
   231,     5,   176,   390,     0,   388,   231,     5,   176,     6,
     0,    18,     0,    19,     0,    20,     0,    21,     0,    22,
     0,    23,     0,    24,     0,    25,     0,    26,     0,    27,
     0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
     0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
     0,     5,     0,   391,     0,   205,   390,   206,     0,   190,
   390,     0,   196,   390,     0,   390,   190,   390,     0,   390,
   189,   390,     0,   390,   191,   390,     0,   390,   192,   390,
     0,   390,   193,   390,     0,   390,   197,   390,     0,   390,
   183,   390,     0,   390,   184,   390,     0,   390,   185,   390,
     0,   390,   186,   390,     0,   390,   181,   390,     0,   390,
   180,   390,     0,   390,   178,   390,     0,   390,   179,   390,
     0,    18,   202,   390,   203,     0,    19,   202,   390,   203,
     0,    20,   202,   390,   203,     0,    21,   202,   390,   203,
     0,    22,   202,   390,   203,     0,    23,   202,   390,   203,
     0,    24,   202,   390,   203,     0,    25,   202,   390,   203,
     0,    26,   202,   390,   203,     0,    27,   202,   390,   203,
     0,    28,   202,   390,   204,   390,   203,     0,    29,   202,
   390,   203,     0,    30,   202,   390,   203,     0,    31,   202,
   390,   203,     0,    32,   202,   390,   203,     0,    33,   202,
   390,   203,     0,    34,   202,   390,   203,     0,    35,   202,
   390,   204,   390,   203,     0,    36,   202,   390,   204,   390,
   203,     0,    37,   202,   390,   204,   390,   203,     0,   390,
   177,   390,     8,   390,     0,   390,   198,     0,     4,     0,
     3,     0,    13,     0,    14,     0,    15,     0,    16,     0,
    17,     0,     5,     0,     6,     0,     5,     0,     9,   202,
   392,   204,   392,   203,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   311,   348,   386,   389,   392,   395,   398,   399,   400,   401,
   402,   403,   404,   405,   406,   408,   410,   412,   417,   426,
   430,   433,   436,   439,   441,   449,   463,   466,   467,   470,
   475,   478,   480,   483,   485,   489,   497,   508,   517,   526,
   533,   568,   573,   583,   586,   600,   605,   608,   657,   669,
   695,   700,   715,   733,   754,   760,   769,   783,   817,   830,
   850,   854,   864,   881,   881,   884,   890,   893,   896,   906,
   909,   912,   916,   936,   980,   984,   987,  1004,  1013,  1020,
  1023,  1029,  1035,  1042,  1046,  1059,  1074,  1088,  1094,  1100,
  1106,  1112,  1118,  1124,  1130,  1136,  1142,  1148,  1154,  1160,
  1166,  1172,  1178,  1184,  1191,  1197,  1199,  1208,  1212,  1218,
  1296,  1330,  1340,  1353,  1355,  1366,  1368,  1384,  1390,  1396,
  1398,  1427,  1451,  1462,  1468,  1475,  1481,  1492,  1506,  1509,
  1510,  1513,  1516,  1519,  1524,  1526,  1533,  1558,  1565,  1570,
  1575,  1579,  1586,  1591,  1596,  1601,  1607,  1611,  1616,  1619,
  1648,  1656,  1661,  1670,  1674,  1683,  1686,  1691,  1696,  1701,
  1709,  1713,  1724,  1733,  1738,  1743,  1748,  1760,  1764,  1819,
  1822,  1825,  1828,  1831,  1840,  1847,  1850,  1872,  1875,  1885,
  1889,  1897,  1904,  1912,  1915,  1935,  1952,  1974,  1984,  1988,
  1999,  2023,  2048,  2053,  2061,  2069,  2079,  2095,  2102,  2108,
  2114,  2122,  2130,  2138,  2156,  2164,  2167,  2190,  2194,  2203,
  2207,  2215,  2222,  2230,  2233,  2236,  2239,  2244,  2262,  2297,
  2312,  2316,  2321,  2326,  2331,  2343,  2367,  2422,  2426,  2430,
  2439,  2502,  2508,  2513,  2518,  2522,  2529,  2532,  2537,  2555,
  2560,  2564,  2581,  2595,  2600,  2604,  2617,  2623,  2630,  2637,
  2641,  2648,  2657,  2668,  2685,  2757,  2769,  2773,  2793,  2807,
  2810,  2813,  2857,  2864,  2867,  2889,  2893,  2901,  2905,  2913,
  2920,  2929,  2931,  2936,  2951,  2967,  2984,  2988,  2993,  2997,
  3000,  3009,  3048,  3072,  3077,  3083,  3233,  3238,  3247,  3256,
  3261,  3264,  3302,  3319,  3345,  3350,  3353,  3356,  3361,  3369,
  3372,  3383,  3393,  3405,  3414,  3417,  3421,  3423,  3425,  3431,
  3449,  3453,  3464,  3525,  3571,  3595,  3604,  3616,  3633,  3637,
  3671,  3680,  3734,  3750,  3753,  3754,  3755,  3756,  3757,  3758,
  3762,  3778,  3794,  3801,  3804,  3825,  3829,  3837,  3841,  3850,
  3857,  3860,  3862,  3867,  3883,  3900,  3915,  3919,  3924,  3932,
  3935,  3940,  3945,  3950,  3960,  3967,  4006,  4011,  4016,  4026,
  4038,  4042,  4047,  4058,  4067,  4074,  4094,  4101,  4107,  4113,
  4119,  4127,  4143,  4150,  4156,  4167,  4178,  4194,  4206,  4228,
  4249,  4262,  4276,  4283,  4285,  4292,  4294,  4304,  4314,  4324,
  4334,  4340,  4343,  4347,  4356,  4367,  4379,  4383,  4389,  4393,
  4397,  4402,  4411,  4424,  4428,  4434,  4438,  4442,  4446,  4451,
  4460,  4472,  4475,  4481,  4485,  4489,  4494,  4503,  4518,  4521,
  4527,  4531,  4535,  4540,  4550,  4556,  4562,  4571,  4575,  4579,
  4593,  4596,  4607,  4636,  4639,  4642,  4650,  4664,  4672,  4675,
  4696,  4699,  4710,  4713,  4721,  4729,  4775,  4780,  4785,  4789,
  4793,  4800,  4804,  4808,  4813,  4819,  4825,  4837,  4848,  4851,
  4859,  4887,  4897,  4897,  4903,  4912,  4928,  4936,  4939,  4944,
  4947,  4956,  4959,  4967,  4979,  4989,  4994,  4999,  5017,  5026,
  5030,  5035,  5043,  5051,  5058,  5072,  5094,  5097,  5098,  5099,
  5102,  5106,  5110,  5118,  5125,  5132,  5148,  5155,  5169,  5179,
  5187,  5200,  5218,  5242,  5262,  5281,  5284,  5292,  5299,  5306,
  5310,  5314,  5318,  5322,  5331,  5336,  5341,  5361,  5368,  5375,
  5383,  5391,  5398,  5405,  5409,  5417,  5421,  5432,  5439,  5485,
  5491,  5495,  5500,  5505,  5508,  5509,  5513,  5518,  5527,  5530,
  5539,  5547,  5564,  5572,  5578,  5590,  5634,  5638,  5641,  5647,
  5653,  5664,  5666,  5667,  5668,  5669,  5670,  5671,  5672,  5673,
  5674,  5675,  5676,  5677,  5678,  5679,  5680,  5681,  5682,  5683,
  5684,  5685,  5687,  5689,  5690,  5691,  5692,  5693,  5694,  5695,
  5696,  5697,  5698,  5699,  5700,  5701,  5702,  5703,  5704,  5705,
  5706,  5707,  5708,  5709,  5710,  5711,  5712,  5713,  5714,  5715,
  5716,  5717,  5718,  5719,  5720,  5721,  5722,  5723,  5724,  5725,
  5726,  5727,  5730,  5733,  5734,  5735,  5736,  5737,  5738,  5739,
  5756,  5761,  5776
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
   281,   284,   284,   285,   285,   286,   286,   286,   287,   287,
   288,   288,   289,   289,   290,   290,   291,   291,   292,   292,
   293,   293,   293,   294,   294,   295,   295,   296,   296,   296,
   296,   296,   297,   297,   298,   298,   299,   299,   300,   300,
   300,   300,   300,   301,   301,   302,   302,   303,   303,   303,
   303,   304,   303,   303,   305,   303,   303,   303,   303,   303,
   306,   306,   307,   307,   308,   308,   308,   308,   309,   309,
   310,   310,   310,   311,   311,   312,   312,   312,   312,   313,
   313,   315,   316,   314,   314,   314,   314,   317,   317,   318,
   319,   320,   318,   321,   321,   321,   321,   321,   321,   321,
   322,   322,   323,   323,   324,   324,   325,   325,   326,   326,
   326,   327,   326,   328,   328,   329,   329,   330,   330,   330,
   330,   330,   330,   330,   330,   331,   331,   332,   332,   333,
   333,   334,   334,   335,   335,   336,   336,   336,   336,   336,
   336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
   336,   336,   337,   336,   338,   336,   336,   336,   339,   339,
   340,   340,   341,   341,   341,   342,   342,   343,   343,   343,
   343,   343,   344,   344,   345,   345,   345,   345,   345,   345,
   346,   346,   347,   347,   347,   347,   347,   348,   348,   349,
   349,   349,   349,   349,   349,   349,   349,   350,   350,   351,
   351,   352,   352,   352,   352,   352,   352,   353,   353,   354,
   354,   355,   355,   356,   356,   356,   356,   356,   357,   357,
   358,   358,   359,   359,   360,   360,   360,   361,   361,   363,
   362,   362,   364,   362,   362,   362,   365,   365,   366,   366,
   367,   367,   368,   368,   368,   368,   368,   370,   369,   371,
   372,   371,   373,   373,   374,   374,   375,   375,   375,   375,
   376,   376,   377,   377,   377,   377,   377,   378,   377,   377,
   377,   377,   377,   377,   379,   379,   380,   380,   380,   380,
   380,   380,   380,   380,   380,   380,   380,   380,   380,   380,
   380,   380,   380,   380,   380,   380,   380,   381,   381,   382,
   382,   383,   383,   384,   384,   384,   385,   385,   385,   385,
   386,   386,   387,   387,   387,   387,   387,   388,   388,   388,
   388,   389,   389,   389,   389,   389,   389,   389,   389,   389,
   389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
   389,   389,   390,   390,   390,   390,   390,   390,   390,   390,
   390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
   390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
   390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
   390,   390,   391,   391,   391,   391,   391,   391,   391,   391,
   392,   392,   392
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
     4,     5,     5,     2,     7,    11,     7,     7,     9,    11,
    13,    15,     0,     7,     0,     7,     7,     3,     1,     1,
     0,     2,     3,     3,     2,     0,     2,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
     0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
     3,     3,     3,     3,     4,     4,     4,     0,     4,     0,
     2,     3,     3,     3,     3,     3,     3,     0,     2,     3,
     1,     0,     2,     3,     4,     4,     3,     4,     0,     4,
     0,     2,     3,     4,     0,     5,     5,     0,     2,     0,
     6,     3,     0,     4,     3,     3,     0,     2,     3,     1,
     0,     2,     3,     3,     3,     3,     4,     0,     8,     0,
     0,     3,     7,     7,     3,     6,     1,     1,     1,     1,
     0,     3,     1,     2,     2,    24,     2,     0,    14,     8,
    20,    29,    38,    12,     0,     2,     3,     4,     4,     3,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     5,     2,     3,     0,     2,     0,
     3,     1,     3,     0,     1,     3,     1,     1,     3,     3,
     3,     6,     4,     4,     6,     9,     5,     0,     3,     5,
     5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     2,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     6,     4,     4,     4,     4,     4,     4,     6,     6,     6,
     5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   622,   621,     0,    18,   548,    27,
   175,   138,   151,   205,    70,   263,   333,   438,     0,   467,
     0,    20,    24,     0,     0,    26,   614,   613,   620,     0,
   615,   616,   617,   618,   619,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   573,     0,    64,    28,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    21,     0,     0,   544,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   575,   576,     0,   538,   537,     0,   543,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   612,     0,     0,    65,     0,     6,     0,
   179,     8,   176,   178,   140,     9,   153,    10,   209,    11,
   206,   208,     0,     0,     7,    71,    75,   267,    12,   264,
   266,   337,    13,   334,   336,   442,    14,   439,   441,   478,
   471,    15,   468,   470,     0,    22,   491,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   574,     0,   589,   590,   588,   587,   583,
   584,   585,   586,   578,   577,   579,   580,   581,   582,     0,
   547,   549,     0,     0,    29,    35,     0,     0,     0,     0,
     0,    76,     0,     0,     0,     0,     0,    23,     0,     0,
   493,     0,     0,     0,     0,     0,     0,     0,     0,   505,
   505,   591,   592,   593,   594,   595,   596,   597,   598,   599,
   600,     0,   602,   603,   604,   605,   606,   607,     0,     0,
     0,     0,   545,   540,   539,     0,   541,     0,     0,     0,
     0,     0,     0,     0,    61,     0,     0,     0,   177,   180,
     0,     0,   139,   141,     0,    80,     0,   152,   154,     0,
     0,     0,     0,     0,     0,   207,   210,    67,    42,     0,
     0,    40,     0,     0,    64,     0,     0,     0,     0,   265,
   268,     0,     0,   342,   335,   338,     0,     0,     0,     0,
   440,   443,   480,     0,     0,     0,     0,     0,   469,   472,
     0,   489,   490,   487,   488,   485,     0,   494,   495,    80,
   497,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   611,   623,   551,   550,   620,     0,
     0,     0,    32,     0,    64,     0,   186,     0,     0,   144,
     0,   158,     0,     0,     0,    82,     0,   254,     0,     0,
   218,   232,   247,     0,    41,    55,    58,    52,    39,    50,
    80,     0,    36,     0,     0,     0,     0,   274,   293,     0,
   344,     0,     0,   449,    67,     0,   481,     0,   480,     0,
     0,     0,   492,   491,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   506,     0,   601,   608,   609,   610,     0,
     0,    30,     0,    69,     0,    43,     0,     0,     0,   186,
     0,   183,   181,     0,     0,     0,   142,     0,     0,     0,
   156,    81,     0,   155,     0,   213,   211,     0,     0,     0,
     0,    68,     0,     0,    64,     0,    80,     0,    72,    77,
   271,   269,     0,     0,     0,   339,     0,     0,   364,   444,
     0,     0,     0,   447,   479,     0,   473,   481,   474,   476,
   475,     0,     0,    80,     0,     0,     0,     0,     0,   483,
   534,   534,     0,     0,     0,     0,   534,     0,   528,   528,
   528,   511,     0,     0,     0,     0,   526,   484,   546,   542,
    66,     0,    31,    34,    62,     0,   188,   184,   182,   146,
   143,   160,   157,     0,     0,   620,   552,   553,   554,   555,
   556,   557,   558,   559,   560,   561,   562,   563,   564,   565,
   566,   567,   568,   569,   570,   571,     0,   120,     0,     0,
   116,   114,     0,     0,     0,     0,     0,     0,     0,     0,
    83,    84,   112,     0,   109,   256,   217,   212,   220,   214,
   234,   215,   249,   216,    56,     0,    60,     0,    51,     0,
    73,     0,    45,    37,    44,   270,   276,   272,     0,     0,
     0,     0,   273,   294,   340,   346,   341,     0,   445,   451,
   448,   446,   482,   477,   486,     0,     0,     0,     0,     0,
     0,     0,     0,   523,   535,   527,   520,     0,     0,   507,
   510,   518,   519,   513,   514,   517,   515,   516,   512,   522,
   521,     0,   524,    33,     0,   185,     0,     0,     0,    78,
    79,   111,     0,     0,     0,     0,     0,     0,     0,   106,
   105,   107,   128,   126,   123,   125,   124,     0,     0,    85,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   113,   134,
     0,     0,     0,     0,     0,    59,     0,    53,    74,    64,
     0,   310,   310,   318,   299,     0,     0,    80,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   383,
   385,     0,   343,   365,     0,     0,    80,     0,     0,     0,
     0,     0,     0,   508,   509,   529,     0,     0,     0,     0,
     0,     0,    80,    80,    80,    80,     0,     0,     0,    80,
   187,   189,     0,     0,   145,   147,     0,     0,     0,   159,
   161,     0,    82,     0,     0,     0,    82,     0,     0,   332,
   108,     0,   103,   104,   101,   100,   102,    96,    97,    98,
    99,    92,    93,    88,    91,    94,    89,    95,   127,   130,
     0,   132,     0,     0,   110,     0,     0,     0,     0,     0,
   255,   257,     0,     0,     0,     0,     0,   219,   221,     0,
     0,     0,   233,   235,     0,     0,     0,   248,   250,     0,
    54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   275,   285,   277,   324,   324,   324,     0,     0,     0,
     0,     0,   534,     0,     0,     0,   345,   347,     0,     0,
    80,     0,     0,     0,    80,     0,     0,   396,     0,   403,
     0,   411,   418,     0,     0,     0,     0,   374,     0,     0,
   450,   452,     0,     0,     0,     0,     0,     0,     0,   536,
   525,    63,     0,     0,     0,     0,    80,     0,    80,     0,
     0,     0,     0,     0,     0,    80,     0,     0,     0,   134,
   165,     0,     0,   118,     0,   119,     0,     0,     0,    82,
   331,     0,   129,   131,     0,     0,     0,     0,     0,     0,
     0,    49,     0,    67,     0,     0,   228,     0,     0,     0,
   243,   245,     0,   239,   241,     0,     0,     0,     0,    57,
    38,     0,     0,     0,     0,     0,     0,     0,     0,    67,
     0,     0,     0,    82,     0,     0,   325,   326,   327,   328,
   329,   330,     0,   295,   311,     0,   296,     0,   297,   319,
     0,     0,     0,   304,   298,   300,     0,     0,    67,   358,
     0,     0,     0,     0,   360,   362,     0,     0,   366,     0,
     0,   367,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   388,   530,   530,   455,     0,     0,
     0,     0,   500,     0,     0,     0,   191,   192,   197,   198,
     0,   201,     0,   200,   194,   193,    64,   195,   190,     0,
   199,   149,   148,     0,     0,   162,   163,     0,     0,     0,
   115,     0,    86,   133,     0,     0,   135,   258,     0,   260,
   261,     0,   222,   223,     0,     0,     0,   226,   227,   236,
    64,   238,    64,   237,   252,   251,   253,    67,    47,   289,
   288,   281,   279,   280,   278,   282,   284,   290,   287,     0,
     0,     0,     0,   312,     0,   321,     0,     0,     0,   349,
   348,   356,    64,   350,   351,   354,   355,    64,   352,   353,
     0,     0,    80,     0,     0,     0,    80,     0,    80,     0,
     0,    80,   368,   397,     0,     0,    80,     0,     0,     0,
     0,   369,   404,     0,     0,     0,     0,    80,     0,   370,
   412,     0,     0,     0,     0,     0,     0,     0,     0,   371,
   419,    80,   390,    80,   391,   389,   391,     0,   453,     0,
   534,     0,     0,     0,     0,    80,    80,     0,    80,   150,
   167,   164,     0,    90,     0,   122,     0,     0,     0,     0,
   262,   224,     0,   225,   244,     0,   240,     0,    48,   291,
     0,   316,   317,   315,    82,   320,    82,   301,   302,     0,
     0,     0,     0,   303,   305,   357,     0,   361,     0,   372,
   373,     0,     0,   364,     0,     0,   364,     0,     0,     0,
     0,     0,   364,     0,     0,     0,     0,     0,     0,     0,
   364,     0,     0,     0,     0,     0,   364,   364,     0,     0,
   428,     0,     0,   532,     0,     0,     0,     0,     0,   454,
     0,   498,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   121,    82,    87,     0,     0,   259,     0,   246,   242,
     0,     0,   286,   313,   322,     0,     0,     0,     0,   359,
   363,     0,   534,     0,   534,     0,     0,   400,   398,   399,
   401,    80,     0,   407,   405,   406,   408,   409,    80,   415,
     0,   413,   414,   416,   422,   424,     0,     0,   420,   421,
     0,   423,     0,   531,    80,     0,   534,   392,     0,   458,
   458,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   166,   168,     0,
   137,   136,     0,     0,   283,     0,     0,   306,   307,   308,
   309,   377,     0,   375,     0,   378,   402,     0,   410,     0,
   417,   426,   427,   430,   425,   387,   533,   384,     0,   534,
   395,   386,   324,   324,   504,   534,     0,     0,     0,     0,
   204,   203,   196,   202,     0,     0,     0,     0,     0,     0,
    82,     0,   292,    82,     0,     0,     0,     0,    80,     0,
     0,   393,   394,     0,     0,     0,   463,   457,     0,   459,
   456,     0,     0,     0,     0,     0,   169,   170,   171,   172,
   173,   174,     0,     0,     0,     0,   379,   364,     0,     0,
     0,     0,     0,    80,     0,     0,     0,   429,   431,     0,
     0,     0,     0,   460,   499,     0,     0,     0,     0,   117,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   465,   466,   462,     0,    82,     0,     0,
     0,     0,   229,   314,   323,   376,   380,   364,     0,   432,
   435,   436,   433,   434,   437,   464,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   381,   364,   461,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   230,   382,     0,   501,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    67,     0,     0,
     0,     0,   496,     0,     0,     0,     0,     0,   231,     0,
     0,     0,     0,     0,     0,   502,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   503,     0,     0,     0
};

static const short yydefgoto[] = {  1567,
     1,     2,     3,    19,    20,    21,    85,   150,   235,   455,
   322,   488,   720,   323,   324,   614,   842,   943,   409,   485,
   410,   385,   148,   293,   405,   294,    90,   166,   325,   395,
   396,   472,   473,   591,   792,  1187,   592,   678,   677,   674,
   709,   813,   815,    87,   238,   304,   466,   668,   776,    88,
   239,   309,   468,   669,   781,  1055,  1271,  1349,    86,   153,
   237,   300,   461,   667,   772,    89,   161,   240,   317,   479,
   712,   829,  1077,  1502,  1530,   480,   713,   834,   956,  1083,
   953,  1081,   481,   714,   839,   475,   711,   822,    91,   170,
   243,   331,   494,   721,   854,  1200,   974,  1282,   495,   624,
   858,   996,  1109,  1215,   855,   985,  1205,  1356,   857,   990,
  1207,  1357,   986,   593,    92,   174,   244,   336,   422,   498,
   726,   868,  1001,  1113,  1007,  1118,   628,   744,   886,   887,
  1165,  1256,  1328,  1018,  1134,  1020,  1143,  1022,  1151,  1023,
  1161,  1321,  1411,  1449,    93,   178,   245,   342,   502,   745,
   892,  1168,  1383,  1420,  1478,  1453,    95,   183,   247,   350,
    22,   246,   427,   506,    46,   188,   357,   250,   260,  1333,
   367,   444,   656,  1166,  1255,   644,   124,   125,    23,    84,
   594,   645,    82,    28
};

static const short yypact[] = {-32768,
-32768,    40,  2507,  -125,   186,  -141,  -129,   -99,   -61,   -19,
    -4,     0,    22,    50,    61,    54,   402,   267,-32768,-32768,
  -100,-32768,-32768,   978,-32768,-32768,    76,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   141,-32768,
   441,-32768,-32768,    86,   108,-32768,-32768,-32768,-32768,   313,
-32768,-32768,-32768,-32768,-32768,   130,   134,   183,   217,   252,
   257,   276,   285,   297,   301,   309,   327,   332,   340,   342,
   344,   358,   363,   366,   371,   378,  1902,  1902,  1902,  1902,
   272,-32768,   186,   -44,   144,    12,   -36,     9,    26,    27,
    29,    52,    58,   319,   117,   466,-32768,   385,   385,-32768,
  1902,  1902,  1902,  1902,  1902,  1902,  1902,  1902,  1902,  1902,
  1902,  1902,  1902,  1902,  1902,  1902,  1902,  1902,  1902,  1902,
   390,   161,   161,    -3,-32768,  2318,  1703,-32768,  1902,  1902,
  1902,  1902,  1902,  1902,  1902,  1902,  1902,  1902,  1902,  1902,
  1902,  1902,  1902,-32768,   207,   516,-32768,   544,-32768,   302,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -154,   381,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   606,-32768,   432,   945,   945,  3435,
  3462,  3489,  3516,  3543,  3570,  3597,  3624,  3651,  3678,  2506,
  3705,  3732,  3759,  3786,  3813,  3840,  2528,  2550,  2572,   350,
   608,  1902,  1374,-32768,  2343,  2362,  2362,  1024,  1024,   464,
   464,   464,   464,   452,   452,   161,   161,   161,   161,   186,
-32768,   461,   -20,   449,-32768,-32768,   205,    79,   209,   431,
    16,-32768,   325,   235,   399,   447,   676,-32768,   132,   397,
-32768,   132,   132,   123,   472,   506,   519,   524,   532,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1902,-32768,-32768,-32768,-32768,-32768,-32768,  1902,  1902,
  1902,   729,-32768,-32768,  2318,  1902,  4660,  1902,   548,  1568,
   347,  1603,   581,   586,-32768,    60,   761,   770,-32768,-32768,
   577,   778,-32768,-32768,   584,    93,   780,-32768,-32768,   598,
   781,   796,   607,   610,   611,-32768,-32768,   291,-32768,    24,
   636,-32768,   615,   613,   230,   809,   816,   623,   626,-32768,
-32768,   823,   631,-32768,-32768,-32768,   827,   633,   829,   830,
-32768,-32768,-32768,   831,   638,   835,   186,   840,-32768,-32768,
   643,-32768,-32768,-32768,-32768,-32768,   842,   691,-32768,    93,
-32768,   652,  1902,   654,   662,   663,   263,   360,  3867,  3894,
  3921,  3948,   661,  3975,  4660,-32768,-32768,  4660,   666,   863,
  1902,  4110,-32768,   136,   372,   683,-32768,   869,    11,-32768,
   879,-32768,   682,   687,   920,-32768,   921,-32768,   922,   135,
-32768,-32768,-32768,   730,-32768,   927,   739,-32768,-32768,-32768,
    93,   764,-32768,   934,   938,   937,   138,-32768,-32768,   140,
-32768,   746,   142,-32768,   747,   942,   749,   946,-32768,   956,
   957,   958,-32768,   432,   961,   766,  1902,  2594,  1902,  1902,
  1902,   962,  1689,-32768,   965,-32768,-32768,-32768,-32768,   966,
  1902,-32768,  4135,-32768,   136,-32768,   969,   971,   963,-32768,
   294,-32768,-32768,   782,   972,   377,-32768,   407,  1902,   980,
-32768,-32768,   660,-32768,   429,-32768,-32768,   979,   439,   469,
   503,-32768,    13,  1638,     1,   982,    93,    23,-32768,-32768,
-32768,-32768,  1010,   514,    74,-32768,  1011,   521,-32768,-32768,
  1012,   530,  1013,-32768,-32768,  -100,-32768,   786,-32768,-32768,
-32768,   817,   825,    93,  2616,  1902,  2638,  2660,  2682,-32768,
  1673,  1673,  1021,    37,  1902,  1902,  1673,  1902,  1030,-32768,
-32768,-32768,  1902,  1902,  1032,  1708,-32768,-32768,-32768,  4660,
-32768,  1031,-32768,-32768,   839,   537,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  4002,   849,   298,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   851,-32768,   859,   862,
-32768,-32768,  1063,   660,   660,   660,  1062,    57,  1064,   660,
  4682,   872,   870,   870,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1902,-32768,  4160,-32768,    97,
-32768,  1071,-32768,-32768,-32768,-32768,-32768,-32768,   871,   885,
   891,   903,-32768,-32768,-32768,-32768,-32768,   590,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1902,   875,  1902,  2704,  1902,
  1902,  1902,  1902,-32768,  4660,-32768,-32768,   186,   186,-32768,
  4660,  4660,-32768,  4660,-32768,  1098,  1098,  1098,  4660,  4660,
-32768,  1902,  4660,-32768,  1902,-32768,   569,    83,   111,-32768,
-32768,-32768,   905,   906,   905,   660,   910,   911,   935,   925,
   925,   925,-32768,-32768,-32768,-32768,-32768,    15,  2424,-32768,
   660,   660,   660,   660,   660,   660,   660,   660,   660,   660,
   660,   660,   660,   660,   660,   660,  1123,   877,-32768,   924,
   470,   324,   271,    85,  4029,-32768,   511,-32768,-32768,   463,
   677,-32768,-32768,-32768,-32768,  1702,    18,    87,   928,   941,
   943,   948,   949,   328,   339,   939,   944,   951,  1142,-32768,
-32768,  1120,-32768,-32768,    -7,  2726,    93,  2748,  1902,  2770,
  2792,  2814,     3,-32768,-32768,-32768,   185,  4185,   132,   132,
   132,   132,    88,   124,    93,    93,   954,  1152,  1153,   129,
-32768,-32768,   131,  1154,-32768,-32768,   960,  1156,  1157,-32768,
-32768,   964,-32768,   967,  2471,  1160,-32768,   977,   981,-32768,
-32768,   660,  1920,  1920,  1060,  1060,  1060,   765,   765,   765,
   765,   612,   612,   122,   122,   122,   925,   925,-32768,-32768,
   983,  4682,   541,  1321,-32768,  1161,   148,   148,  1175,  1180,
-32768,-32768,  1183,  1184,  1189,   132,   132,-32768,-32768,  1192,
    70,   115,-32768,-32768,  1193,  1196,  1197,-32768,-32768,  1200,
-32768,  1002,    98,  1201,  1207,   188,  1213,  1214,  1220,  1221,
   132,-32768,-32768,-32768,  1364,  1581,   930,   321,  1230,  1231,
   125,   186,  1673,   186,   127,  1233,-32768,-32768,  1218,  1242,
    93,  1219,  1243,  1251,    93,  1253,  1257,-32768,  1902,-32768,
  1902,-32768,-32768,   132,  1258,  1061,  1065,-32768,  1066,  1259,
-32768,-32768,  1902,  1093,  1902,  4210,  1902,  1902,  1902,-32768,
-32768,-32768,  1288,  1289,  1301,  1302,    93,  1309,    93,  1310,
  1320,  1322,  1325,  1323,  1326,    93,  1352,  1353,  1355,   924,
-32768,  1360,  1361,-32768,  1128,-32768,   660,  1166,  1168,-32768,
-32768,  1121,-32768,-32768,   660,  1171,  1172,   193,  1368,  1293,
  1375,-32768,  1376,   747,  1378,   143,  1181,  1405,  1406,  1408,
-32768,-32768,  1409,-32768,-32768,  1411,  1413,  1414,  1415,-32768,
-32768,  1418,    24,  1417,  1419,  1421,  1423,  1424,  1429,   747,
  1430,  1431,  1432,-32768,  1420,  1435,-32768,-32768,-32768,-32768,
-32768,-32768,   132,-32768,-32768,  1239,-32768,   132,-32768,-32768,
  1240,  1439,  1440,-32768,-32768,-32768,  1441,  1442,   747,-32768,
  1443,  1444,  1446,  1447,-32768,-32768,  1448,  1450,-32768,  1244,
  1255,-32768,  1265,  1266,  1269,  1272,  1276,   445,  2836,   361,
  2858,   909,   665,  1277,-32768,   128,   128,-32768,  1452,  4235,
  1260,  4260,-32768,  4285,  4310,  4335,-32768,-32768,-32768,-32768,
  1283,-32768,  1284,-32768,-32768,-32768,  1286,-32768,-32768,  1290,
-32768,-32768,-32768,  1488,   547,-32768,-32768,   132,  3414,  1902,
-32768,  1294,-32768,  4682,  1495,   132,-32768,-32768,  1498,-32768,
-32768,  1497,-32768,-32768,  1499,  1416,  1503,-32768,-32768,-32768,
   237,-32768,   239,-32768,-32768,-32768,-32768,   747,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1311,
  1505,  1506,  1508,-32768,  1509,-32768,  1511,  1512,   295,-32768,
-32768,-32768,   243,-32768,-32768,-32768,-32768,   278,-32768,-32768,
  1513,  1515,    93,  1519,  1330,  1902,    93,  1332,    93,  1902,
  1902,    93,-32768,-32768,  1902,  1333,    93,  1902,  1902,  1902,
  1902,-32768,-32768,  1902,  1902,  1334,  1902,    93,  1902,-32768,
-32768,  1902,  1520,  1335,  1337,  1902,  1902,  1339,  1902,-32768,
-32768,    93,-32768,    93,-32768,-32768,-32768,    30,-32768,  1341,
  1673,  1342,  1343,  1344,  1345,    93,    93,  1548,    93,-32768,
-32768,-32768,  1365,-32768,  2880,-32768,   660,  1366,  1372,  1549,
-32768,-32768,  1558,-32768,-32768,  1572,-32768,  1573,-32768,  1407,
  1604,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   905,
   905,   905,   132,-32768,-32768,-32768,  1575,-32768,  1605,-32768,
-32768,  1410,  1510,-32768,  2902,  1412,-32768,  1607,   413,   865,
  1640,  2924,-32768,  1641,  1369,  1942,  1970,  1992,  2946,  2014,
-32768,  2036,  1643,  2062,  2087,  1709,-32768,-32768,  2109,  2131,
-32768,  2157,  1514,-32768,   279,   546,   552,  1445,  1518,-32768,
  1902,-32768,  1902,  1902,  1902,  1902,  1516,  1517,  1546,  1545,
   352,-32768,-32768,  4682,  1550,  1551,-32768,  1742,-32768,-32768,
  1710,  1743,-32768,-32768,-32768,  1746,  1747,  1748,  1749,-32768,
-32768,  1750,  1673,   815,  1673,  1753,  1019,-32768,-32768,-32768,
-32768,    93,  1054,-32768,-32768,-32768,-32768,-32768,    93,-32768,
  1356,-32768,-32768,-32768,-32768,-32768,  1644,  1825,-32768,-32768,
   560,-32768,  1762,-32768,    93,  1763,  1256,-32768,  1765,-32768,
-32768,  4360,  1571,  2968,  2990,  3012,  3034,  1769,  1772,  1776,
  1777,  1780,  1902,  1902,  1902,  1902,  1902,-32768,-32768,  1582,
-32768,-32768,  1524,  1584,-32768,  1587,  1588,-32768,-32768,-32768,
-32768,-32768,  1585,  1674,  1591,-32768,-32768,  1592,-32768,  1593,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   186,  1673,
-32768,-32768,   822,  1130,-32768,  1673,  1902,  1902,  1902,  1902,
-32768,-32768,-32768,-32768,  1793,  2179,  2201,  2223,  2249,  2274,
-32768,  1797,-32768,-32768,   905,  1796,  1606,  1902,    93,  1902,
   650,-32768,-32768,  1799,  1800,  1802,-32768,-32768,  1613,-32768,
-32768,  1615,  3056,  3078,  3100,  3122,-32768,-32768,-32768,-32768,
-32768,-32768,  1616,  1618,  1617,  1619,-32768,-32768,  4056,  1620,
  3144,  1816,  1902,    93,  1819,   132,  1820,-32768,-32768,  1822,
  1824,  1826,   132,-32768,-32768,  1902,  1902,  1902,  1902,-32768,
  1828,  1830,  1831,  1857,  1833,  1626,  1902,  1834,  2296,  1835,
  1837,  1839,  1854,-32768,-32768,-32768,  1858,-32768,  4385,  4410,
  4435,  4460,-32768,-32768,-32768,-32768,-32768,-32768,  4083,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1624,  1632,  1663,  1666,
  1667,  1827,  1892,  1668,  1864,  1902,  1672,  1902,  1902,   132,
-32768,-32768,-32768,  3166,  1902,  3188,  3210,  1867,  1945,  1902,
  4485,  1902,  1902,-32768,-32768,  3232,-32768,  3254,  3276,  1770,
  1902,  1902,  1902,  1871,  4510,  4535,  4560,   747,  1676,  1678,
  1685,  1883,-32768,  1691,  1902,  1698,  1902,  3298,-32768,  3320,
  1902,  1902,  3342,  4585,  1902,-32768,  4610,  1701,  1711,  1902,
  3364,  1902,  3386,  1902,  4635,-32768,  1910,  1912,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -133,-32768,-32768,  -242,   -53,-32768,-32768,  1102,  -479,-32768,
  -563,-32768,  -288,  -387,  -420,-32768,-32768,-32768,-32768,  -335,
-32768,  -768,-32768,  -400,-32768,-32768,-32768,-32768,-32768,-32768,
  1347,-32768,   994,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1491,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1234,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -851,  -552,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1175,-32768,-32768,-32768,
   926,   787,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   625,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1530,-32768,  1454,  1865,-32768,  1529,  1778,-32768,
  1704,-32768,   242,-32768,-32768,  -519,  -505,  1754,   997,-32768,
-32768,   -24,  -459,   -82
};


#define	YYLAST		4879


static const short yytable[] = {    81,
   145,   465,   646,   672,   503,   991,   351,   653,   615,   358,
   359,   361,   478,   595,   925,   605,     4,   463,   929,   789,
   318,    24,   869,     6,   436,   406,   406,   407,   407,   493,
     4,   163,   497,     4,  1258,   501,   415,     6,     6,    -2,
     6,    25,    26,    44,    45,    27,   718,   241,  1294,   889,
    24,  1297,   122,   123,   126,   127,     4,  1303,    39,   684,
    29,   685,     4,     6,   386,  1311,   319,   613,   890,     6,
    30,  1317,  1318,   164,   951,   486,   190,   191,   192,   193,
   194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
   204,   205,   206,   207,   208,   209,   459,   393,   393,   406,
    31,   407,   942,   393,   215,   216,   217,   218,   219,   220,
   221,   222,   223,   224,   225,   226,   227,   228,   229,   954,
   782,     4,   784,  1259,   595,   595,   595,   318,     6,   999,
   595,  1005,  1163,   773,   393,   318,   318,   753,    32,   393,
   456,   477,   301,   962,   492,   774,   496,   289,   500,  1074,
   835,   612,   456,   841,   302,   291,   757,   380,   146,   147,
   836,  1062,   837,   155,   156,   394,   394,   619,   620,   621,
   622,   394,   686,   319,   777,   918,   778,   779,   637,   292,
    33,   319,   319,   680,   681,   682,   319,   285,   287,   689,
    25,    26,   966,   891,    27,    34,   610,   211,   319,    35,
   212,   609,   394,   900,   147,  1100,   212,   394,   157,   158,
   464,   151,   152,   320,   606,   790,   595,   687,   321,   870,
   648,    36,   408,   408,   649,   159,   160,   165,   168,   169,
  1260,   595,   595,   595,   595,   595,   595,   595,   595,   595,
   595,   595,   595,   595,   595,   595,   595,   369,   595,    37,
   457,   172,   173,    40,   370,   371,   372,   176,   177,   387,
    38,   374,  1464,   375,   431,   378,    81,   382,   296,   952,
   297,   967,   305,    43,   623,   785,   306,    83,   128,   303,
   298,   968,    94,   775,   307,   838,   717,    98,   871,   907,
   793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
   803,   804,   805,   806,   807,   808,   233,   812,   938,    99,
   332,   780,  1503,     6,   955,   705,   181,   182,   706,   100,
   320,   542,   360,   180,  1000,   909,  1006,  1164,   320,   320,
   916,   101,   595,   320,   464,   102,  1519,   464,   438,   464,
   333,   464,   464,  1003,   149,   234,   830,   334,   831,    47,
    48,   379,    50,   832,  1210,  1211,   453,   143,   144,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,   103,   901,   992,  1212,   212,   187,
   326,   932,   872,  1067,   210,    76,   212,   319,  1213,   823,
   327,   824,   825,   826,   827,   299,    41,   993,    42,   308,
   230,   894,   515,   328,   517,   518,   519,   329,   104,  1299,
  1342,  1343,  1344,  1345,  1346,  1347,   540,   908,   910,   911,
   912,   843,   414,   147,   917,   335,  1284,  1195,  1285,  1197,
   147,   650,   147,  1216,   554,    96,   147,    97,   129,   130,
   131,   132,   133,   105,   134,   135,   136,   137,   106,   608,
   138,   139,   140,   141,   142,   442,   443,   595,   143,   144,
   185,   833,   186,  1136,   337,   595,  1137,   107,  1218,  1324,
   310,   147,  1325,  1089,  1138,  1139,   108,   338,  1140,  1141,
   404,   639,   -43,   547,   548,  1214,   311,   589,   109,  -572,
   651,   652,   110,   654,  1350,   339,   312,   313,   659,   660,
   111,   663,   314,   406,   315,   407,   903,   904,   905,   906,
   994,   995,   231,  1072,   828,   330,  1059,   878,   112,   879,
   919,  1419,  1419,   113,  1064,  1011,    77,   340,   880,  1015,
   881,   114,    78,   115,   320,   116,    79,   816,   232,  1096,
   817,    80,  1348,   282,   818,   819,   820,  1128,  1075,   117,
  1129,  1142,   445,   443,   118,   754,   755,   119,  1130,  1131,
  1132,  1041,   120,  1043,   458,   147,   550,   551,  1112,   121,
  1050,   715,   242,   948,   949,   352,   353,   354,   355,   129,
   130,   131,   132,   133,   727,   134,   135,   136,   137,   341,
   356,   138,   139,   140,   141,   142,   552,   553,   973,   143,
   144,   746,   248,   748,   283,   750,   751,   752,   126,   759,
   760,   761,   762,   763,   764,   765,   766,   767,   596,   597,
   768,   316,  1433,   249,   769,  1435,   290,   126,   599,   600,
   758,  1024,   140,   141,   142,  1133,   343,   770,   143,   144,
   295,  1262,   138,   139,   140,   141,   142,  1286,  1287,  1288,
   143,   144,    47,    48,   556,   -46,   147,  1199,   601,   602,
   821,   362,    51,    52,    53,    54,    55,   557,   558,   559,
   560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
   570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
   580,   581,   603,   604,   728,   363,   729,   730,   731,  1497,
   732,   733,   734,   617,   618,  1442,   735,  1443,   364,   736,
   626,   627,   737,   365,   896,   738,   739,   595,  1444,   630,
   631,   366,  1152,   373,   740,   741,   547,   666,  1445,   844,
  1103,   845,   846,   934,   935,  1105,  1181,  1182,  1326,  1327,
   376,   344,   847,  1446,  1329,  1327,   383,   582,  1178,  1374,
  1375,   384,   742,   940,   941,   388,   848,   849,   850,   771,
  1153,   657,   658,  1363,   389,  1365,   390,  1154,  1155,  1002,
   851,  1004,   391,   392,   397,   399,  1274,  1222,   345,   126,
   743,  1226,  1196,  1228,  1198,  1156,  1231,   398,  1157,  1158,
   400,  1234,   702,   703,   704,   705,   401,  1381,   706,   402,
   403,   411,  1243,   416,   413,  1183,   346,   412,   347,   727,
   417,  1447,   418,  1189,  1217,   419,  1253,   420,  1254,  1219,
   421,   423,   424,   425,   426,   428,  1159,   429,   348,   430,
  1267,  1268,   583,  1270,   432,   433,   434,   435,   584,   585,
  1448,   437,  1436,   439,  1019,   586,  1021,   587,   588,   589,
  1413,   440,   441,   450,   590,  1160,  1422,   -43,  1030,   452,
  1032,  1300,  1034,  1035,  1036,   462,   349,   852,   853,    47,
    48,   556,   460,   469,  1414,   467,  1415,  1416,   470,    51,
    52,    53,    54,    55,   557,   558,   559,   560,   561,   562,
   563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
   573,   574,   575,   576,   577,   578,   579,   580,   581,   977,
   978,   979,   980,   981,   982,  1417,   471,   474,   476,   728,
   482,   729,   730,   731,   483,   732,   733,   734,   484,   487,
   489,   735,   490,   491,   736,   499,   404,   737,   504,   505,
   738,   739,   507,   700,   701,   702,   703,   704,   705,   740,
   741,   706,   509,   510,   511,   513,  1368,   545,   520,   514,
  1289,   538,   539,  1370,   582,   543,  1145,   544,   549,   381,
    47,    48,    49,    50,   555,   598,   634,   742,   611,  1377,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,  1364,   616,   625,   629,   632,
   635,  1146,  1418,   727,   636,   647,    76,   977,   978,   979,
   980,   981,   982,   988,   655,  1185,   661,   664,   665,  1147,
  1148,   129,   130,   131,   132,   133,  1461,   134,   135,   136,
   137,   671,   673,   138,   139,   140,   141,   142,   727,   583,
   675,   143,   144,   676,   683,   584,   585,   679,   688,   707,
   722,   708,   586,  1440,   587,   588,   589,   719,   747,   810,
  1149,   590,   154,   811,   723,   162,   167,   171,   175,   179,
   724,   184,   251,   252,   253,   254,   255,   256,   257,   258,
   259,  1225,   725,   756,   589,  1229,  1230,   783,  1470,  1150,
  1232,   786,   787,  1235,  1236,  1237,  1238,  1542,   788,  1239,
  1240,   706,  1242,   814,  1244,   809,   888,  1245,  1063,   873,
   989,  1249,  1250,   728,  1252,   729,   730,   731,   882,   732,
   733,   734,   874,   883,   875,   735,   236,   885,   736,   876,
   877,   737,   884,   913,   738,   739,   914,   915,   920,   921,
   922,   923,   928,   740,   741,   939,   924,    77,   728,   926,
   729,   730,   731,    78,   732,   733,   734,    79,   930,   942,
   735,   931,    80,   736,   944,   933,   737,   945,   946,   738,
   739,   742,  1414,   947,  1415,  1416,   950,   957,   740,   741,
   958,   959,   960,  1472,   961,   964,   134,   135,   136,   137,
  1477,   965,   138,   139,   140,   141,   142,   969,   970,  1367,
   143,   144,   971,   972,  1009,  1012,   742,   977,   978,   979,
   980,   981,   982,  1417,   997,   998,  1332,  1008,  1334,  1335,
  1336,  1337,   696,   697,   698,   699,  1010,  1013,   700,   701,
   702,   703,   704,   705,  1369,  1014,   706,  1016,    47,    48,
    49,  1017,  1026,  1029,  1025,  1028,  1027,  1518,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,  1031,  1037,  1038,  1412,   690,   691,   692,
   693,   694,   695,   696,   697,   698,   699,  1039,  1040,   700,
   701,   702,   703,   704,   705,  1042,  1044,   706,  1396,  1397,
  1398,  1399,  1400,    47,    48,    49,  1045,  1047,  1046,  1048,
  1421,  1058,  1049,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,  1051,  1052,
   727,  1053,  1423,  1424,  1425,  1426,  1056,  1057,   936,  1060,
  1061,   937,  1065,  1066,  1068,  1305,    47,    48,    49,  1069,
  1076,  1070,  1071,  1439,  1073,  1441,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,  1078,  1079,  1379,  1080,  1082,  1380,  1084,  1469,  1085,
  1086,  1087,  1088,  1090,  1101,  1091,   975,  1092,   976,  1093,
  1094,  1479,  1480,  1481,  1482,  1095,  1097,  1098,  1099,  1102,
  1104,  1106,  1489,  1107,  1108,    77,  1121,  1110,  1111,  1114,
  1115,    78,  1116,  1117,  1119,   643,  1120,  1122,  1169,  1171,
    80,   977,   978,   979,   980,   981,   982,   983,  1123,  1124,
   728,  1125,   729,   730,   731,  1126,   732,   733,   734,  1127,
  1162,  1514,   735,  1516,  1517,   736,  1176,  1177,   737,   147,
  1521,   738,   739,  1179,  1180,  1526,  1186,  1528,  1529,  1188,
   740,   741,  1190,  1191,  1193,  1192,  1535,  1536,  1537,  1194,
    77,  1202,  1203,  1201,  1204,  1206,    78,  1208,  1209,  1220,
  1548,  1221,  1550,  1223,  1246,    80,  1553,  1554,   742,  1224,
  1557,  1227,  1233,  1241,  1247,  1561,  1248,  1563,  1251,  1565,
  1261,  1263,  1264,  1265,  1266,   129,   130,   131,   132,   133,
  1269,   134,   135,   136,   137,  1277,  1371,   138,   139,   140,
   141,   142,  1278,    77,   984,   143,   144,  1272,  1275,    78,
    47,    48,    49,   377,  1276,   286,  1279,  1280,    80,  1290,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    47,    48,    49,  1281,  1291,
  1283,  1402,  1292,  1298,  1296,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    47,    48,    49,   975,  1330,   976,  1301,  1304,   727,  1313,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    47,    48,    49,   977,   978,
   979,   980,   981,   982,   983,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    47,    48,    49,  1293,  1354,  1316,  1323,  1331,  1338,  1339,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,   521,  1340,  1341,  1353,  1355,
  1351,  1352,  1358,  1359,  1360,  1361,  1362,    77,   728,  1366,
   729,   730,   731,    78,   732,   733,   734,   859,  1376,  1378,
   735,  1382,    80,   736,  1386,  1391,   737,   860,  1392,   738,
   739,   987,  1393,  1394,  1395,  1401,  1403,  1406,   740,   741,
  1404,  1405,    77,  1407,  1408,  1409,  1410,   522,    78,  1427,
   381,  1434,  1437,  1450,  1451,  1438,  1452,    80,   861,   862,
   863,   864,   865,   866,  1454,  1455,   742,   464,  1460,  1462,
  1468,  1463,  1466,  1471,  1473,  1488,  1505,    77,  1474,   727,
  1475,  1506,  1476,    78,  1483,   523,  1484,  1485,   607,  1487,
  1490,  1492,    80,  1493,  1372,  1494,   524,   525,   526,   527,
   528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
  1495,   727,    77,  1507,  1496,  1508,  1509,  1512,    78,  1510,
  1513,  1515,   643,  1524,  1534,  1538,  1543,    80,  1544,   129,
   130,   131,   132,   133,  1545,   134,   135,   136,   137,  1546,
  1547,   138,   139,   140,   141,   142,   727,    77,  1549,   143,
   144,  1559,   867,    78,    47,    48,    49,   662,   214,  1568,
  1560,  1569,    80,  1054,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   728,
   710,   729,   730,   731,   963,   732,   733,   734,  1306,   727,
   546,   735,  1167,  1257,   736,  1384,   856,   737,   508,   633,
   738,   739,   512,   189,   368,   284,   261,     0,     0,   740,
   741,   728,     0,   729,   730,   731,  1307,   732,   733,   734,
     0,     0,     0,   735,     0,     0,   736,     0,     0,   737,
     0,     0,   738,   739,     0,     0,     0,   742,  1308,     0,
     0,   740,   741,     0,     0,     0,   728,     0,   729,   730,
   731,     0,   732,   733,   734,     0,     0,     0,   735,     0,
  1310,   736,     0,     0,   737,  1373,     0,   738,   739,   742,
     0,     0,     0,     0,     0,     0,   740,   741,     0,     0,
     0,     0,  1312,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,  1486,     0,   728,
     0,   729,   730,   731,   742,   732,   733,   734,  1314,     0,
     0,   735,     0,     0,   736,     0,     0,   737,     0,     0,
   738,   739,     0,     0,     0,     0,     0,     0,     0,   740,
   741,    77,  1511,  1315,     0,     0,     0,    78,     0,   693,
   694,   695,   696,   697,   698,   699,    80,     0,   700,   701,
   702,   703,   704,   705,     0,  1319,   706,   742,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,  1320,   143,   144,
     0,     0,     0,     0,     0,  1525,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,  1322,     0,     0,   143,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,  1428,     0,     0,   143,   144,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,  1429,     0,     0,
   143,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,  1430,
     0,     0,   143,   144,     0,     0,     0,     0,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,  1431,     0,     0,   143,   144,
     0,     0,     0,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
  1432,     0,     0,   143,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,  1491,     0,     0,   143,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,   213,     0,   143,   144,     0,
     0,     0,     0,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
   288,     0,     0,   143,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     4,     0,     0,   143,   144,     5,     0,     6,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,   132,   133,     0,   134,   135,   136,   137,     0,     7,
   138,   139,   140,   141,   142,     0,     8,     0,   143,   144,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
     0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    11,     0,     0,     0,    12,     0,     0,     0,     0,
     0,     0,     0,     0,    13,     0,     0,     0,     0,     0,
   690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     0,    14,   700,   701,   702,   703,   704,   705,     0,     0,
   706,     0,     0,     0,     0,     0,     0,     0,     0,   791,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    15,     0,    16,   690,   691,   692,
   693,   694,   695,   696,   697,   698,   699,     0,     0,   700,
   701,   702,   703,   704,   705,     0,     0,   706,     0,     0,
     0,     0,     0,     0,   927,     0,     0,     0,     0,     0,
    17,    18,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,   272,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,   129,   130,   131,   132,
   133,   279,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,   280,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
   129,   130,   131,   132,   133,   281,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,   516,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,   638,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,   129,   130,   131,   132,
   133,   640,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,   641,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
   129,   130,   131,   132,   133,   642,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,   749,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,   893,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,   129,   130,   131,   132,
   133,   895,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,   897,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
   129,   130,   131,   132,   133,   898,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,   899,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,  1135,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,   129,   130,   131,   132,
   133,  1144,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,  1273,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
   129,   130,   131,   132,   133,  1295,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,  1302,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,  1309,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,   129,   130,   131,   132,
   133,  1387,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,  1388,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
   129,   130,   131,   132,   133,  1389,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,  1390,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,  1456,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,   129,   130,   131,   132,
   133,  1457,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,  1458,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
   129,   130,   131,   132,   133,  1459,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,  1467,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,  1520,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,   129,   130,   131,   132,
   133,  1522,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,  1523,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
   129,   130,   131,   132,   133,  1531,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,  1532,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,   129,   130,   131,   132,   133,  1533,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,   129,   130,   131,   132,
   133,  1551,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   129,   130,
   131,   132,   133,  1552,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
   129,   130,   131,   132,   133,  1555,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,   129,   130,   131,   132,   133,  1562,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,     0,  1564,
   690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     0,     0,   700,   701,   702,   703,   704,   705,     0,     0,
   706,   129,   130,   131,   132,   133,  1184,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,   262,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,     0,     0,   263,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
     0,   264,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,   265,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,   266,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
     0,     0,   267,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,     0,     0,   268,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,   269,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,     0,
     0,     0,     0,   270,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
   271,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,   273,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,     0,     0,   274,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
     0,   275,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,   276,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,   277,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
     0,     0,   278,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   144,     0,     0,     0,     0,   446,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   144,     0,     0,     0,     0,   447,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,   144,     0,
     0,     0,     0,   448,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,   144,     0,     0,     0,     0,
   449,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,     0,     0,   451,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   144,
     0,     0,     0,     0,   670,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,   144,     0,     0,     0,
     0,   840,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   144,     0,     0,     0,     0,  1465,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   144,     0,     0,     0,     0,  1504,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
   454,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,   541,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
   716,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,   902,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
  1033,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,  1170,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
  1172,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,  1173,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
  1174,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,  1175,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
  1385,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,  1498,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
  1499,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,  1500,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
  1501,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,  1527,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
  1539,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,  1540,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
  1541,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,  1556,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,     0,     0,
  1558,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   144,     0,     0,  1566,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   144,   690,   691,
   692,   693,   694,   695,   696,   697,   698,   699,     0,     0,
   700,   701,   702,   703,   704,   705,     0,     0,   706
};

static const short yycheck[] = {    24,
    83,   389,   522,   556,   425,   857,   249,   527,   488,   252,
   253,   254,   400,   473,   783,     3,     5,     7,   787,     5,
     5,   176,     5,    12,   360,     3,     3,     5,     5,   417,
     5,     5,   420,     5,     5,   423,   325,    12,    12,     0,
    12,     5,     6,   144,   145,     9,   610,   202,  1224,    57,
   176,  1227,    77,    78,    79,    80,     5,  1233,     5,     3,
   202,     5,     5,    12,     5,  1241,    51,    45,    76,    12,
   200,  1247,  1248,    47,     5,   411,   101,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   385,    11,    11,     3,
   200,     5,     5,    11,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,     5,
   673,     5,   675,    94,   584,   585,   586,     5,    12,     5,
   590,     5,     5,    51,    11,     5,     5,   643,   200,    11,
     5,     7,    64,    46,     7,    63,     7,   230,     7,     7,
    66,   487,     5,   717,    76,   176,   662,   291,   203,   204,
    76,   930,    78,   200,   201,    79,    79,    94,    95,    96,
    97,    79,   116,    51,    64,    45,    66,    67,   514,   200,
   200,    51,    51,   584,   585,   586,    51,   212,   213,   590,
     5,     6,     5,   201,     9,   200,   485,   201,    51,   200,
   204,   201,    79,   201,   204,   974,   204,    79,   200,   201,
   200,   200,   201,   198,   202,   201,   676,   161,   203,   202,
   184,   200,   200,   200,   188,   200,   201,   201,   200,   201,
   201,   691,   692,   693,   694,   695,   696,   697,   698,   699,
   700,   701,   702,   703,   704,   705,   706,   272,   708,   200,
   384,   200,   201,   200,   279,   280,   281,   200,   201,   200,
   200,   286,  1438,   288,   347,   290,   291,   292,    64,   200,
    66,    84,    64,     7,   201,   676,    68,   202,     7,   201,
    76,    94,   142,   201,    76,   201,   190,   202,   202,   202,
   691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
   701,   702,   703,   704,   705,   706,     5,   708,   814,   202,
    76,   201,  1488,    12,   200,   194,   200,   201,   197,     7,
   198,   455,   200,     5,   200,   202,   200,   200,   198,   198,
   202,   202,   792,   198,   200,   202,  1512,   200,   363,   200,
   106,   200,   200,   863,   201,    44,    76,   113,    78,     3,
     4,     5,     6,    83,    60,    61,   381,   197,   198,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,   202,   201,    66,    93,   204,     5,
    66,   792,   728,   201,     5,    49,   204,    51,   104,    76,
    76,    78,    79,    80,    81,   201,     5,    87,     7,   201,
   204,   747,   437,    89,   439,   440,   441,    93,   202,     7,
    69,    70,    71,    72,    73,    74,   451,   763,   764,   765,
   766,   720,   203,   204,   770,   201,  1205,   201,  1207,   201,
   204,   524,   204,   201,   469,     5,   204,     7,   177,   178,
   179,   180,   181,   202,   183,   184,   185,   186,   202,   484,
   189,   190,   191,   192,   193,   203,   204,   927,   197,   198,
     5,   201,     7,   113,    76,   935,   116,   202,   201,   201,
    50,   204,   204,   963,   124,   125,   202,    89,   128,   129,
   200,   516,   202,   200,   201,   201,    66,   200,   202,   202,
   525,   526,   202,   528,  1273,   107,    76,    77,   533,   534,
   202,   536,    82,     3,    84,     5,   759,   760,   761,   762,
   200,   201,     7,   944,   201,   201,   927,   200,   202,   202,
   773,  1383,  1384,   202,   935,   871,   190,   139,   200,   875,
   202,   202,   196,   202,   198,   202,   200,    78,     5,   970,
    81,   205,   201,   204,    85,    86,    87,   113,   946,   202,
   116,   201,   203,   204,   202,   648,   649,   202,   124,   125,
   126,   907,   202,   909,   203,   204,   200,   201,   999,   202,
   916,   606,   202,   826,   827,   189,   190,   191,   192,   177,
   178,   179,   180,   181,     5,   183,   184,   185,   186,   201,
   204,   189,   190,   191,   192,   193,   200,   201,   851,   197,
   198,   636,     7,   638,     7,   640,   641,   642,   643,    51,
    52,    53,    54,    55,    56,    57,    58,    59,   200,   201,
    62,   201,  1401,   202,    66,  1404,   176,   662,   200,   201,
   665,   884,   191,   192,   193,   201,   200,    79,   197,   198,
   202,  1171,   189,   190,   191,   192,   193,  1210,  1211,  1212,
   197,   198,     3,     4,     5,   203,   204,  1088,   200,   201,
   201,   200,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,   200,   201,   115,   200,   117,   118,   119,  1478,
   121,   122,   123,   200,   201,    66,   127,    68,   200,   130,
   200,   201,   133,   200,   749,   136,   137,  1187,    79,   200,
   201,   200,    68,     5,   145,   146,   200,   201,    89,    63,
   983,    65,    66,   203,   204,   988,   200,   201,   203,   204,
   203,    76,    76,   104,   203,   204,   176,    98,  1047,   200,
   201,   176,   173,   817,   818,     5,    90,    91,    92,   201,
   106,   530,   531,  1293,     5,  1295,   200,   113,   114,   862,
   104,   864,     5,   200,     5,     5,  1187,  1123,   113,   814,
   201,  1127,  1081,  1129,  1083,   131,  1132,   200,   134,   135,
     5,  1137,   191,   192,   193,   194,   200,  1327,   197,   200,
   200,   176,  1148,     5,   202,  1058,   141,   203,   143,     5,
     5,   172,   200,  1066,  1113,   200,  1162,     5,  1164,  1118,
   200,     5,   200,     5,     5,     5,   172,   200,   163,     5,
  1176,  1177,   183,  1179,     5,   203,     5,   157,   189,   190,
   201,   200,  1405,   200,   879,   196,   881,   198,   199,   200,
  1380,   200,   200,   203,   205,   201,  1386,   202,   893,     7,
   895,     7,   897,   898,   899,     7,   201,   201,   202,     3,
     4,     5,   200,   202,    63,     7,    65,    66,   202,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    98,
    99,   100,   101,   102,   103,   104,     7,     7,     7,   115,
   201,   117,   118,   119,     8,   121,   122,   123,   200,   176,
     7,   127,     5,     7,   130,   200,   200,   133,     7,   201,
   136,   137,     7,   189,   190,   191,   192,   193,   194,   145,
   146,   197,     7,     7,     7,     5,  1302,     5,     7,   204,
  1213,     7,     7,  1309,    98,     7,    68,     7,     7,   198,
     3,     4,     5,     6,     5,     7,   201,   173,     7,  1325,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,   201,     7,     7,     7,     7,
   204,   113,   201,     5,   200,     5,    49,    98,    99,   100,
   101,   102,   103,   104,     5,  1060,     5,     7,   200,   131,
   132,   177,   178,   179,   180,   181,  1434,   183,   184,   185,
   186,   203,   202,   189,   190,   191,   192,   193,     5,   183,
   202,   197,   198,   202,     3,   189,   190,     5,     5,   198,
   200,   202,   196,  1409,   198,   199,   200,     7,   204,   203,
   172,   205,    86,   207,   200,    89,    90,    91,    92,    93,
   200,    95,   148,   149,   150,   151,   152,   153,   154,   155,
   156,  1126,   200,     6,   200,  1130,  1131,   202,  1444,   201,
  1135,   202,   202,  1138,  1139,  1140,  1141,  1538,   184,  1144,
  1145,   197,  1147,   200,  1149,     3,     7,  1152,     8,   202,
   201,  1156,  1157,   115,  1159,   117,   118,   119,   200,   121,
   122,   123,   202,   200,   202,   127,   150,     6,   130,   202,
   202,   133,   202,   200,   136,   137,     5,     5,     5,   200,
     5,     5,     3,   145,   146,     5,   203,   190,   115,   203,
   117,   118,   119,   196,   121,   122,   123,   200,   202,     5,
   127,   201,   205,   130,     5,   203,   133,     5,     5,   136,
   137,   173,    63,     5,    65,    66,     5,     5,   145,   146,
     5,     5,     3,  1446,   203,     5,   183,   184,   185,   186,
  1453,     5,   189,   190,   191,   192,   193,     5,     5,   201,
   197,   198,     3,     3,     7,     7,   173,    98,    99,   100,
   101,   102,   103,   104,     5,     5,  1261,     5,  1263,  1264,
  1265,  1266,   183,   184,   185,   186,     5,     5,   189,   190,
   191,   192,   193,   194,   201,     5,   197,     5,     3,     4,
     5,     5,   202,     5,     7,   200,   202,  1510,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,   201,     7,     7,  1379,   177,   178,   179,
   180,   181,   182,   183,   184,   185,   186,     7,     7,   189,
   190,   191,   192,   193,   194,     7,     7,   197,  1343,  1344,
  1345,  1346,  1347,     3,     4,     5,     7,     3,     7,     7,
   201,   204,     7,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,     7,     7,
     5,     7,  1387,  1388,  1389,  1390,     7,     7,    48,   204,
   203,    51,   202,   202,     7,     7,     3,     4,     5,    87,
   200,     7,     7,  1408,     7,  1410,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,     7,     7,   158,     7,     7,   161,     7,  1443,     7,
     7,     7,     5,     7,     5,     7,    63,     7,    65,     7,
     7,  1456,  1457,  1458,  1459,     7,     7,     7,     7,     5,
   202,   202,  1467,     5,     5,   190,   203,     7,     7,     7,
     7,   196,     7,     7,     7,   200,     7,   203,     7,   200,
   205,    98,    99,   100,   101,   102,   103,   104,   204,   204,
   115,   203,   117,   118,   119,   204,   121,   122,   123,   204,
   204,  1506,   127,  1508,  1509,   130,   204,   204,   133,   204,
  1515,   136,   137,   204,     7,  1520,   203,  1522,  1523,     5,
   145,   146,     5,     7,    89,     7,  1531,  1532,  1533,     7,
   190,     7,     7,   203,     7,     7,   196,     7,     7,     7,
  1545,     7,  1547,     5,     5,   205,  1551,  1552,   173,   200,
  1555,   200,   200,   200,   200,  1560,   200,  1562,   200,  1564,
   200,   200,   200,   200,   200,   177,   178,   179,   180,   181,
     3,   183,   184,   185,   186,     7,   201,   189,   190,   191,
   192,   193,     5,   190,   201,   197,   198,   203,   203,   196,
     3,     4,     5,     6,   203,   202,     5,     5,   205,     5,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,     3,     4,     5,   202,     5,
     7,    88,   203,     7,   203,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     3,     4,     5,    63,   200,    65,     7,     7,     5,     7,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,     3,     4,     5,    98,    99,
   100,   101,   102,   103,   104,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
     3,     4,     5,   204,     5,     7,   203,   200,   203,   203,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    57,   201,   203,     7,     7,
   201,   201,     7,     7,     7,     7,     7,   190,   115,     7,
   117,   118,   119,   196,   121,   122,   123,    66,     7,     7,
   127,     7,   205,   130,   204,     7,   133,    76,     7,   136,
   137,   201,     7,     7,     5,   204,   203,   203,   145,   146,
   204,   204,   190,   120,   204,   204,   204,   109,   196,     7,
   198,     5,     7,     5,     5,   200,     5,   205,   107,   108,
   109,   110,   111,   112,   202,   201,   173,   200,   203,   203,
     5,   203,   203,     5,     5,   200,   203,   190,     7,     5,
     7,   200,     7,   196,     7,   147,     7,     7,   201,     7,
     7,     7,   205,     7,   201,     7,   158,   159,   160,   161,
   162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     7,     5,   190,   201,     7,   200,   200,   200,   196,    43,
     7,   200,   200,     7,   105,     5,   201,   205,   201,   177,
   178,   179,   180,   181,   200,   183,   184,   185,   186,     7,
   200,   189,   190,   191,   192,   193,     5,   190,   201,   197,
   198,   201,   201,   196,     3,     4,     5,   200,   206,     0,
   200,     0,   205,   920,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,   115,
   594,   117,   118,   119,   843,   121,   122,   123,     7,     5,
   460,   127,  1027,  1167,   130,  1331,   723,   133,   429,   506,
   136,   137,   434,    99,   261,   212,   189,    -1,    -1,   145,
   146,   115,    -1,   117,   118,   119,     7,   121,   122,   123,
    -1,    -1,    -1,   127,    -1,    -1,   130,    -1,    -1,   133,
    -1,    -1,   136,   137,    -1,    -1,    -1,   173,     7,    -1,
    -1,   145,   146,    -1,    -1,    -1,   115,    -1,   117,   118,
   119,    -1,   121,   122,   123,    -1,    -1,    -1,   127,    -1,
     7,   130,    -1,    -1,   133,   201,    -1,   136,   137,   173,
    -1,    -1,    -1,    -1,    -1,    -1,   145,   146,    -1,    -1,
    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,   115,
    -1,   117,   118,   119,   173,   121,   122,   123,     7,    -1,
    -1,   127,    -1,    -1,   130,    -1,    -1,   133,    -1,    -1,
   136,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
   146,   190,   201,     7,    -1,    -1,    -1,   196,    -1,   180,
   181,   182,   183,   184,   185,   186,   205,    -1,   189,   190,
   191,   192,   193,   194,    -1,     7,   197,   173,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,     7,   197,   198,
    -1,    -1,    -1,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,     7,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,     7,    -1,    -1,   197,   198,
   177,   178,   179,   180,   181,    -1,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,     7,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,    -1,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,     7,
    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,   177,   178,
   179,   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,     7,    -1,    -1,   197,   198,
    -1,    -1,    -1,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
     7,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,     7,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,     8,    -1,   197,   198,    -1,
    -1,    -1,    -1,   177,   178,   179,   180,   181,    -1,   183,
   184,   185,   186,    -1,    -1,   189,   190,   191,   192,   193,
     8,    -1,    -1,   197,   198,   177,   178,   179,   180,   181,
    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,
   180,   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,
   178,   179,   180,   181,    -1,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,    -1,    -1,    -1,    -1,   177,   178,   179,   180,   181,
    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,   191,
   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,    -1,
   177,   178,   179,   180,   181,    -1,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,    -1,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,   177,   178,   179,   180,   181,    -1,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,     5,    -1,    -1,   197,   198,    10,    -1,    12,   177,
   178,   179,   180,   181,    -1,   183,   184,   185,   186,    -1,
    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,
   198,   180,   181,    -1,   183,   184,   185,   186,    -1,    43,
   189,   190,   191,   192,   193,    -1,    50,    -1,   197,   198,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    75,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
    -1,   105,   189,   190,   191,   192,   193,   194,    -1,    -1,
   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   138,    -1,   140,   177,   178,   179,
   180,   181,   182,   183,   184,   185,   186,    -1,    -1,   189,
   190,   191,   192,   193,   194,    -1,    -1,   197,    -1,    -1,
    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,
   174,   175,   177,   178,   179,   180,   181,    -1,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,   177,   178,   179,   180,   181,   204,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,
   181,   204,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,   204,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
   177,   178,   179,   180,   181,   204,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,   204,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,   177,   178,   179,   180,   181,   204,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,
   181,   204,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,   204,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
   177,   178,   179,   180,   181,   204,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,   204,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,   177,   178,   179,   180,   181,   204,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,
   181,   204,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,   204,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
   177,   178,   179,   180,   181,   204,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,   204,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,   177,   178,   179,   180,   181,   204,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,
   181,   204,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,   204,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
   177,   178,   179,   180,   181,   204,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,   204,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,   177,   178,   179,   180,   181,   204,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,
   181,   204,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,   204,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
   177,   178,   179,   180,   181,   204,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,   204,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,   177,   178,   179,   180,   181,   204,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,
   181,   204,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,   204,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
   177,   178,   179,   180,   181,   204,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,   204,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,   177,   178,   179,   180,   181,   204,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,
   181,   204,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,   204,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
   177,   178,   179,   180,   181,   204,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,   204,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,   177,   178,   179,   180,   181,   204,
   183,   184,   185,   186,    -1,    -1,   189,   190,   191,   192,
   193,    -1,    -1,    -1,   197,   198,   177,   178,   179,   180,
   181,   204,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,   204,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,    -1,    -1,    -1,   197,   198,
   177,   178,   179,   180,   181,   204,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,    -1,
   197,   198,   177,   178,   179,   180,   181,   204,   183,   184,
   185,   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,
    -1,    -1,   197,   198,    -1,    -1,    -1,    -1,    -1,   204,
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
    -1,    -1,   189,   190,   191,   192,   193,   194,    -1,    -1,
   197,   177,   178,   179,   180,   181,   203,   183,   184,   185,
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
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,    -1,    -1,
   201,   177,   178,   179,   180,   181,    -1,   183,   184,   185,
   186,    -1,    -1,   189,   190,   191,   192,   193,    -1,    -1,
    -1,   197,   198,    -1,    -1,   201,   177,   178,   179,   180,
   181,    -1,   183,   184,   185,   186,    -1,    -1,   189,   190,
   191,   192,   193,    -1,    -1,    -1,   197,   198,   177,   178,
   179,   180,   181,   182,   183,   184,   185,   186,    -1,    -1,
   189,   190,   191,   192,   193,   194,    -1,    -1,   197
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
#line 312 "yacc.y"
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
#line 348 "yacc.y"
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
#line 390 "yacc.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 413 "yacc.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 428 "yacc.y"
{ Help(NULL); ;
    break;}
case 21:
#line 431 "yacc.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 22:
#line 434 "yacc.y"
{ Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 23:
#line 437 "yacc.y"
{ Free(yyvsp[-3].c); Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 25:
#line 441 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 26:
#line 449 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 28:
#line 466 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 30:
#line 473 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 31:
#line 476 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 32:
#line 479 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 33:
#line 481 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 36:
#line 492 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 37:
#line 497 "yacc.y"
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
#line 509 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 518 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 40:
#line 529 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 41:
#line 534 "yacc.y"
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
#line 571 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 43:
#line 574 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 44:
#line 585 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 45:
#line 587 "yacc.y"
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
#line 603 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 47:
#line 606 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 48:
#line 609 "yacc.y"
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
#line 660 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 50:
#line 672 "yacc.y"
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
#line 696 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 52:
#line 703 "yacc.y"
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
#line 716 "yacc.y"
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
#line 734 "yacc.y"
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
#line 757 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 56:
#line 761 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 57:
#line 770 "yacc.y"
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
#line 784 "yacc.y"
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
#line 818 "yacc.y"
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
#line 831 "yacc.y"
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
#line 855 "yacc.y"
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
#line 865 "yacc.y"
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
#line 887 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 67:
#line 892 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 68:
#line 893 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 69:
#line 898 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 73:
#line 917 "yacc.y"
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
#line 937 "yacc.y"
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
#line 988 "yacc.y"
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
#line 1008 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 79:
#line 1014 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 80:
#line 1020 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 81:
#line 1023 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 82:
#line 1031 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 83:
#line 1035 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 85:
#line 1047 "yacc.y"
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
#line 1060 "yacc.y"
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
#line 1074 "yacc.y"
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
#line 1089 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1095 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1101 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1107 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1113 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1119 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1125 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1131 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1137 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1143 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1149 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1155 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1161 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1167 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1173 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1179 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1185 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 105:
#line 1192 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 107:
#line 1200 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 109:
#line 1213 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 110:
#line 1219 "yacc.y"
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
#line 1297 "yacc.y"
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
#line 1331 "yacc.y"
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
#line 1341 "yacc.y"
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
#line 1354 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 115:
#line 1356 "yacc.y"
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
#line 1367 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 117:
#line 1369 "yacc.y"
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
#line 1385 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 119:
#line 1391 "yacc.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 120:
#line 1397 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 121:
#line 1399 "yacc.y"
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
#line 1428 "yacc.y"
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
#line 1452 "yacc.y"
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
#line 1463 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 125:
#line 1469 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 126:
#line 1476 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 127:
#line 1482 "yacc.y"
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
#line 1493 "yacc.y"
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
#line 1508 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 130:
#line 1509 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 131:
#line 1510 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 132:
#line 1515 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 133:
#line 1516 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 134:
#line 1522 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 136:
#line 1527 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 137:
#line 1534 "yacc.y"
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
#line 1561 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 139:
#line 1566 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 140:
#line 1573 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 142:
#line 1582 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 143:
#line 1587 "yacc.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 144:
#line 1594 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 145:
#line 1597 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 146:
#line 1604 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 148:
#line 1614 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 149:
#line 1617 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 150:
#line 1620 "yacc.y"
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
#line 1651 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 152:
#line 1657 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 153:
#line 1664 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 155:
#line 1677 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 156:
#line 1684 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 157:
#line 1687 "yacc.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 158:
#line 1694 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 159:
#line 1697 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 160:
#line 1704 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 162:
#line 1716 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 163:
#line 1725 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 164:
#line 1734 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 165:
#line 1741 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 166:
#line 1744 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 167:
#line 1751 "yacc.y"
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
#line 1767 "yacc.y"
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
#line 1820 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 171:
#line 1823 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 172:
#line 1826 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 173:
#line 1829 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 174:
#line 1832 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 175:
#line 1843 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 177:
#line 1853 "yacc.y"
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
#line 1878 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 181:
#line 1892 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 182:
#line 1898 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 183:
#line 1905 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 184:
#line 1913 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 185:
#line 1916 "yacc.y"
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
#line 1938 "yacc.y"
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
#line 1953 "yacc.y"
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
#line 1977 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 190:
#line 1991 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 191:
#line 2000 "yacc.y"
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
#line 2024 "yacc.y"
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
#line 2049 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 194:
#line 2054 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 195:
#line 2062 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 196:
#line 2070 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 197:
#line 2080 "yacc.y"
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
#line 2096 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 199:
#line 2103 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 200:
#line 2109 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 201:
#line 2115 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 202:
#line 2123 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 203:
#line 2131 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 204:
#line 2139 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 205:
#line 2159 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 207:
#line 2170 "yacc.y"
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
#line 2197 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 211:
#line 2210 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 212:
#line 2216 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 213:
#line 2223 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 214:
#line 2231 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2234 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 216:
#line 2237 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 217:
#line 2240 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 218:
#line 2247 "yacc.y"
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
#line 2263 "yacc.y"
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
#line 2300 "yacc.y"
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
#line 2319 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 223:
#line 2322 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 224:
#line 2327 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 225:
#line 2332 "yacc.y"
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
#line 2344 "yacc.y"
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
#line 2368 "yacc.y"
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
#line 2428 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 230:
#line 2431 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 231:
#line 2440 "yacc.y"
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
#line 2505 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 233:
#line 2509 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 234:
#line 2516 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 236:
#line 2525 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 237:
#line 2530 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 238:
#line 2533 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 239:
#line 2540 "yacc.y"
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
case 240:
#line 2556 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 241:
#line 2562 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 242:
#line 2565 "yacc.y"
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
case 243:
#line 2584 "yacc.y"
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
case 244:
#line 2596 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 245:
#line 2602 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 246:
#line 2605 "yacc.y"
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
case 247:
#line 2620 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 248:
#line 2624 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 249:
#line 2633 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 251:
#line 2644 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 252:
#line 2649 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 253:
#line 2658 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 254:
#line 2671 "yacc.y"
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
case 255:
#line 2686 "yacc.y"
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
case 256:
#line 2760 "yacc.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 258:
#line 2776 "yacc.y"
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
case 259:
#line 2794 "yacc.y"
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
case 260:
#line 2808 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 261:
#line 2811 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 262:
#line 2814 "yacc.y"
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
case 263:
#line 2860 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 265:
#line 2870 "yacc.y"
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
case 267:
#line 2896 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 269:
#line 2908 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 270:
#line 2914 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 271:
#line 2921 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 273:
#line 2932 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 274:
#line 2938 "yacc.y"
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
case 275:
#line 2952 "yacc.y"
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
case 276:
#line 2970 "yacc.y"
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
case 278:
#line 2991 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 279:
#line 2994 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 280:
#line 2998 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 281:
#line 3001 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 282:
#line 3010 "yacc.y"
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
case 283:
#line 3049 "yacc.y"
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
case 284:
#line 3073 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 285:
#line 3078 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 286:
#line 3084 "yacc.y"
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
case 287:
#line 3234 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 288:
#line 3239 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 289:
#line 3248 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 290:
#line 3257 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 292:
#line 3265 "yacc.y"
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
case 293:
#line 3305 "yacc.y"
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
case 294:
#line 3320 "yacc.y"
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
case 295:
#line 3348 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 296:
#line 3351 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 297:
#line 3354 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 298:
#line 3357 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 299:
#line 3364 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 301:
#line 3375 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 302:
#line 3384 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 303:
#line 3394 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 304:
#line 3408 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 306:
#line 3420 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 307:
#line 3422 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 308:
#line 3424 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 309:
#line 3426 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 310:
#line 3434 "yacc.y"
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
case 312:
#line 3456 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 313:
#line 3464 "yacc.y"
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
case 314:
#line 3526 "yacc.y"
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
case 315:
#line 3572 "yacc.y"
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
case 316:
#line 3596 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 317:
#line 3605 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 318:
#line 3619 "yacc.y"
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
case 320:
#line 3648 "yacc.y"
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
case 321:
#line 3672 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 322:
#line 3680 "yacc.y"
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
case 323:
#line 3735 "yacc.y"
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
case 324:
#line 3752 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 325:
#line 3753 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 326:
#line 3754 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 327:
#line 3755 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 328:
#line 3756 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 329:
#line 3757 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 330:
#line 3758 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 331:
#line 3765 "yacc.y"
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
case 332:
#line 3779 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 333:
#line 3797 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 335:
#line 3807 "yacc.y"
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
case 337:
#line 3832 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 339:
#line 3844 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 340:
#line 3851 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 341:
#line 3858 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 342:
#line 3861 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 343:
#line 3863 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 344:
#line 3869 "yacc.y"
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
case 345:
#line 3884 "yacc.y"
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
case 346:
#line 3903 "yacc.y"
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
case 348:
#line 3922 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 349:
#line 3925 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 350:
#line 3933 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 351:
#line 3936 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 352:
#line 3941 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 353:
#line 3946 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 354:
#line 3951 "yacc.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 355:
#line 3961 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 356:
#line 3970 "yacc.y"
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
case 357:
#line 4007 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 358:
#line 4014 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 359:
#line 4017 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 360:
#line 4029 "yacc.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 361:
#line 4039 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 362:
#line 4045 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 363:
#line 4048 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 364:
#line 4060 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 365:
#line 4068 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 366:
#line 4079 "yacc.y"
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
case 367:
#line 4095 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 368:
#line 4102 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 369:
#line 4108 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 370:
#line 4114 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 371:
#line 4120 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 372:
#line 4128 "yacc.y"
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
case 373:
#line 4144 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 374:
#line 4151 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 375:
#line 4157 "yacc.y"
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
case 376:
#line 4168 "yacc.y"
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
case 377:
#line 4179 "yacc.y"
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
case 378:
#line 4195 "yacc.y"
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
case 379:
#line 4207 "yacc.y"
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
case 380:
#line 4229 "yacc.y"
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
case 381:
#line 4251 "yacc.y"
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
case 382:
#line 4264 "yacc.y"
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
case 383:
#line 4277 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 385:
#line 4286 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 387:
#line 4295 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 388:
#line 4305 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 389:
#line 4316 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 390:
#line 4325 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 391:
#line 4335 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 393:
#line 4345 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 394:
#line 4348 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 395:
#line 4357 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 396:
#line 4370 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 398:
#line 4386 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 399:
#line 4390 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 400:
#line 4394 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 401:
#line 4398 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 402:
#line 4403 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 403:
#line 4414 "yacc.y"
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
case 405:
#line 4431 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 406:
#line 4435 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 407:
#line 4439 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 408:
#line 4443 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 409:
#line 4447 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 410:
#line 4452 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 411:
#line 4463 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 413:
#line 4478 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 414:
#line 4482 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 415:
#line 4486 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 416:
#line 4490 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 417:
#line 4495 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 418:
#line 4506 "yacc.y"
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
case 420:
#line 4524 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 421:
#line 4528 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 422:
#line 4532 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 423:
#line 4536 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 424:
#line 4541 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 425:
#line 4551 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 426:
#line 4557 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 427:
#line 4563 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 428:
#line 4573 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 429:
#line 4576 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 430:
#line 4581 "yacc.y"
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
case 432:
#line 4599 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 433:
#line 4608 "yacc.y"
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
case 434:
#line 4637 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 435:
#line 4640 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 436:
#line 4643 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 437:
#line 4651 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 438:
#line 4666 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 440:
#line 4678 "yacc.y"
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
case 442:
#line 4701 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 444:
#line 4715 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 445:
#line 4722 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 446:
#line 4730 "yacc.y"
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
case 447:
#line 4776 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 448:
#line 4781 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 449:
#line 4787 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 450:
#line 4790 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 451:
#line 4795 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 453:
#line 4806 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 454:
#line 4809 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 455:
#line 4815 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 456:
#line 4820 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 457:
#line 4826 "yacc.y"
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
case 458:
#line 4839 "yacc.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 460:
#line 4853 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 461:
#line 4860 "yacc.y"
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
case 462:
#line 4888 "yacc.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown Type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 463:
#line 4897 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 464:
#line 4898 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 465:
#line 4904 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 466:
#line 4913 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 467:
#line 4930 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 469:
#line 4942 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 471:
#line 4949 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 473:
#line 4961 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 474:
#line 4968 "yacc.y"
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
case 475:
#line 4980 "yacc.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 476:
#line 4990 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 477:
#line 4995 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 478:
#line 5001 "yacc.y"
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
case 479:
#line 5018 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 480:
#line 5028 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 481:
#line 5031 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 482:
#line 5035 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 483:
#line 5046 "yacc.y"
{
      vyyerror("Plot has been superseded by Print "
	       "(Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 484:
#line 5052 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 485:
#line 5061 "yacc.y"
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
case 486:
#line 5073 "yacc.y"
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
case 487:
#line 5096 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 488:
#line 5097 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 489:
#line 5098 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 490:
#line 5099 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 491:
#line 5105 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 492:
#line 5107 "yacc.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 493:
#line 5113 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 494:
#line 5119 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 495:
#line 5126 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 496:
#line 5135 "yacc.y"
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
case 497:
#line 5149 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 498:
#line 5157 "yacc.y"
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
case 499:
#line 5170 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 500:
#line 5180 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 501:
#line 5189 "yacc.y"
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
case 502:
#line 5203 "yacc.y"
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
case 503:
#line 5222 "yacc.y"
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
case 504:
#line 5244 "yacc.y"
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
case 505:
#line 5264 "yacc.y"
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
case 507:
#line 5286 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 508:
#line 5293 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 509:
#line 5300 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 510:
#line 5307 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 511:
#line 5311 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 512:
#line 5315 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 513:
#line 5319 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 514:
#line 5323 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 515:
#line 5332 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 516:
#line 5337 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 517:
#line 5342 "yacc.y"
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
case 518:
#line 5362 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Print") ;  	
    ;
    break;}
case 519:
#line 5369 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 520:
#line 5376 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 521:
#line 5384 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 522:
#line 5392 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 523:
#line 5399 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 524:
#line 5406 "yacc.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 525:
#line 5410 "yacc.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 526:
#line 5418 "yacc.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 527:
#line 5422 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
    ;
    break;}
case 528:
#line 5434 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 529:
#line 5440 "yacc.y"
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
case 530:
#line 5487 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 532:
#line 5498 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 533:
#line 5501 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 534:
#line 5507 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 535:
#line 5508 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 537:
#line 5516 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 538:
#line 5519 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 539:
#line 5528 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 540:
#line 5531 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 541:
#line 5542 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 542:
#line 5548 "yacc.y"
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
case 543:
#line 5567 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 544:
#line 5573 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 545:
#line 5579 "yacc.y"
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
case 546:
#line 5591 "yacc.y"
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
case 549:
#line 5642 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 550:
#line 5648 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 551:
#line 5654 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 552:
#line 5665 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 553:
#line 5666 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 554:
#line 5667 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 555:
#line 5668 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 556:
#line 5669 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 557:
#line 5670 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 558:
#line 5671 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 559:
#line 5672 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 560:
#line 5673 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 561:
#line 5674 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 562:
#line 5675 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 563:
#line 5676 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 564:
#line 5677 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 565:
#line 5678 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 566:
#line 5679 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 567:
#line 5680 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 568:
#line 5681 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 569:
#line 5682 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 570:
#line 5683 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 571:
#line 5684 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 572:
#line 5685 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 573:
#line 5688 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 574:
#line 5689 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 575:
#line 5690 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 576:
#line 5691 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 577:
#line 5692 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 578:
#line 5693 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 579:
#line 5694 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 580:
#line 5695 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 581:
#line 5696 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 582:
#line 5697 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 583:
#line 5698 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 584:
#line 5699 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 585:
#line 5700 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 586:
#line 5701 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 587:
#line 5702 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 588:
#line 5703 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 589:
#line 5704 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 590:
#line 5705 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 591:
#line 5706 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 592:
#line 5707 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 593:
#line 5708 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 594:
#line 5709 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 595:
#line 5710 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 596:
#line 5711 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 597:
#line 5712 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 598:
#line 5713 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 599:
#line 5714 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 600:
#line 5715 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 601:
#line 5716 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 602:
#line 5717 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 603:
#line 5718 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 604:
#line 5719 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 605:
#line 5720 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 606:
#line 5721 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 607:
#line 5722 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 608:
#line 5723 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 609:
#line 5724 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 610:
#line 5725 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 611:
#line 5726 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 612:
#line 5727 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 613:
#line 5732 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 614:
#line 5733 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 615:
#line 5734 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 616:
#line 5735 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 617:
#line 5736 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 618:
#line 5737 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 619:
#line 5738 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 620:
#line 5740 "yacc.y"
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
case 621:
#line 5759 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 622:
#line 5762 "yacc.y"
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
case 623:
#line 5777 "yacc.y"
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
#line 5791 "yacc.y"



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


