
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
#define	tLinSpace	268
#define	tLogSpace	269
#define	tDefineConstant	270
#define	tPi	271
#define	t0D	272
#define	t1D	273
#define	t2D	274
#define	t3D	275
#define	tExp	276
#define	tLog	277
#define	tLog10	278
#define	tSqrt	279
#define	tSin	280
#define	tAsin	281
#define	tCos	282
#define	tAcos	283
#define	tTan	284
#define	tAtan	285
#define	tAtan2	286
#define	tSinh	287
#define	tCosh	288
#define	tTanh	289
#define	tFabs	290
#define	tFloor	291
#define	tCeil	292
#define	tFmod	293
#define	tModulo	294
#define	tHypot	295
#define	tSolidAngle	296
#define	tTrace	297
#define	tOrder	298
#define	tCrossProduct	299
#define	tMHTransform	300
#define	tMHJacNL	301
#define	tGroup	302
#define	tDefineGroup	303
#define	tAll	304
#define	tInSupport	305
#define	tMovingBand2D	306
#define	tDefineFunction	307
#define	tConstraint	308
#define	tRegion	309
#define	tSubRegion	310
#define	tRegionRef	311
#define	tSubRegionRef	312
#define	tFilter	313
#define	tCoefficient	314
#define	tValue	315
#define	tTimeFunction	316
#define	tBranch	317
#define	tNode	318
#define	tLoop	319
#define	tNameOfResolution	320
#define	tJacobian	321
#define	tCase	322
#define	tIntegration	323
#define	tType	324
#define	tSubType	325
#define	tCriterion	326
#define	tGeoElement	327
#define	tNumberOfPoints	328
#define	tMaxNumberOfPoints	329
#define	tNumberOfDivisions	330
#define	tMaxNumberOfDivisions	331
#define	tStoppingCriterion	332
#define	tFunctionSpace	333
#define	tName	334
#define	tBasisFunction	335
#define	tNameOfCoef	336
#define	tFunction	337
#define	tdFunction	338
#define	tSubFunction	339
#define	tSupport	340
#define	tEntity	341
#define	tSubSpace	342
#define	tNameOfBasisFunction	343
#define	tGlobalQuantity	344
#define	tEntityType	345
#define	tEntitySubType	346
#define	tNameOfConstraint	347
#define	tFormulation	348
#define	tQuantity	349
#define	tNameOfSpace	350
#define	tIndexOfSystem	351
#define	tSymmetry	352
#define	tEquation	353
#define	tGalerkin	354
#define	tdeRham	355
#define	tGlobalTerm	356
#define	tGlobalEquation	357
#define	tDt	358
#define	tDtDof	359
#define	tDtDt	360
#define	tDtDtDof	361
#define	tJacNL	362
#define	tNeverDt	363
#define	tIn	364
#define	tResolution	365
#define	tDefineSystem	366
#define	tNameOfFormulation	367
#define	tNameOfMesh	368
#define	tFrequency	369
#define	tSolver	370
#define	tOriginSystem	371
#define	tDestinationSystem	372
#define	tOperation	373
#define	tOperationEnd	374
#define	tSetTime	375
#define	tDTime	376
#define	tSetFrequency	377
#define	tFourierTransform	378
#define	tFourierTransformJ	379
#define	tIf	380
#define	tElse	381
#define	tLanczos	382
#define	tPerturbation	383
#define	tUpdate	384
#define	tUpdateConstraint	385
#define	tBreak	386
#define	tTimeLoopTheta	387
#define	tTime0	388
#define	tTimeMax	389
#define	tTheta	390
#define	tTimeLoopNewmark	391
#define	tBeta	392
#define	tGamma	393
#define	tIterativeLoop	394
#define	tNbrMaxIteration	395
#define	tRelaxationFactor	396
#define	tIterativeTimeReduction	397
#define	tDivisionCoefficient	398
#define	tChangeOfState	399
#define	tChangeOfCoordinates	400
#define	tSystemCommand	401
#define	tSolveJac_AdaptRelax	402
#define	tSaveSolutionExtendedMH	403
#define	tInit_MovingBand2D	404
#define	tMesh_MovingBand2D	405
#define	tGenerate_MH_Moving	406
#define	tGenerateGroup	407
#define	tGenerateJacGroup	408
#define	tSaveMesh	409
#define	tPostProcessing	410
#define	tNameOfSystem	411
#define	tPostOperation	412
#define	tNameOfPostProcessing	413
#define	tUsingPost	414
#define	tAppend	415
#define	tPlot	416
#define	tPrint	417
#define	tPrintGroup	418
#define	tWrite	419
#define	tAdapt	420
#define	tOnGlobal	421
#define	tOnRegion	422
#define	tOnElementsOf	423
#define	tOnGrid	424
#define	tOnSection	425
#define	tOnPoint	426
#define	tOnLine	427
#define	tOnPlane	428
#define	tOnBox	429
#define	tWithArgument	430
#define	tFile	431
#define	tDepth	432
#define	tDimension	433
#define	tTimeStep	434
#define	tHarmonicToTime	435
#define	tFormat	436
#define	tHeader	437
#define	tFooter	438
#define	tSkin	439
#define	tSmoothing	440
#define	tTarget	441
#define	tSort	442
#define	tIso	443
#define	tNoNewLine	444
#define	tChangeOfValues	445
#define	tFlag	446
#define	tHelp	447
#define	tCpu	448
#define	tCheck	449
#define	tDEF	450
#define	tOR	451
#define	tAND	452
#define	tEQUAL	453
#define	tNOTEQUAL	454
#define	tAPPROXEQUAL	455
#define	tLESSOREQUAL	456
#define	tGREATEROREQUAL	457
#define	tLESSLESS	458
#define	tGREATERGREATER	459
#define	tCROSSPRODUCT	460
#define	UNARYPREC	461
#define	tSHOW	462

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.37 2002-01-19 00:49:49 geuzaine Exp $ */

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



#define	YYFINAL		1751
#define	YYFLAG		-32768
#define	YYNTBASE	230

#define YYTRANSLATE(x) ((unsigned)(x) <= 462 ? yytranslate[x] : 418)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   215,     2,   223,   224,   213,     2,     2,   218,
   219,   211,   209,   228,   210,   222,   212,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   203,
     2,   205,   197,   229,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   220,     2,   221,   217,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   226,     2,   227,     2,     2,     2,     2,     2,
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
   177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
   198,   199,   200,   201,   202,   204,   206,   207,   208,   214,
   216,   225
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   152,   156,   161,   167,   168,   175,   181,
   183,   185,   186,   187,   206,   207,   208,   216,   219,   221,
   224,   226,   228,   230,   232,   233,   237,   242,   244,   246,
   250,   251,   255,   260,   262,   266,   270,   276,   278,   283,
   287,   288,   292,   299,   300,   302,   307,   308,   311,   315,
   316,   319,   325,   332,   340,   342,   343,   347,   352,   357,
   358,   361,   362,   366,   368,   372,   373,   376,   378,   379,
   380,   388,   392,   396,   403,   407,   411,   415,   419,   423,
   427,   431,   435,   439,   443,   447,   451,   455,   459,   462,
   465,   468,   472,   474,   478,   481,   483,   486,   487,   493,
   494,   506,   516,   521,   526,   527,   535,   542,   545,   548,
   551,   554,   558,   561,   565,   569,   572,   576,   578,   582,
   583,   587,   594,   595,   600,   601,   604,   608,   613,   614,
   619,   620,   623,   627,   631,   636,   637,   642,   643,   646,
   650,   654,   659,   660,   665,   666,   669,   673,   677,   682,
   683,   688,   689,   692,   696,   700,   704,   708,   712,   716,
   717,   720,   724,   726,   727,   730,   734,   739,   743,   748,
   754,   755,   760,   761,   764,   768,   772,   776,   780,   784,
   788,   796,   800,   804,   808,   812,   816,   824,   832,   840,
   841,   844,   848,   850,   851,   854,   858,   863,   867,   872,
   877,   882,   887,   888,   893,   894,   897,   901,   905,   910,
   915,   923,   927,   931,   935,   936,   937,   938,   957,   958,
   963,   964,   967,   971,   975,   979,   981,   985,   986,   990,
   992,   996,   997,  1001,  1002,  1007,  1008,  1011,  1015,  1019,
  1023,  1024,  1029,  1030,  1033,  1037,  1043,  1047,  1051,  1056,
  1057,  1060,  1064,  1066,  1067,  1070,  1074,  1079,  1083,  1088,
  1093,  1094,  1099,  1100,  1103,  1107,  1111,  1115,  1119,  1120,
  1127,  1131,  1132,  1138,  1142,  1146,  1150,  1154,  1155,  1159,
  1160,  1163,  1168,  1173,  1178,  1183,  1184,  1187,  1191,  1195,
  1199,  1200,  1203,  1207,  1211,  1215,  1219,  1220,  1223,  1224,
  1225,  1235,  1239,  1243,  1247,  1248,  1251,  1255,  1256,  1257,
  1267,  1268,  1270,  1272,  1274,  1276,  1278,  1280,  1285,  1289,
  1290,  1293,  1297,  1299,  1300,  1303,  1307,  1312,  1317,  1318,
  1324,  1325,  1330,  1331,  1334,  1338,  1342,  1346,  1350,  1354,
  1358,  1362,  1366,  1369,  1373,  1374,  1378,  1380,  1384,  1385,
  1389,  1390,  1393,  1397,  1401,  1406,  1411,  1416,  1421,  1427,
  1433,  1436,  1444,  1456,  1464,  1472,  1482,  1492,  1502,  1514,
  1532,  1546,  1562,  1574,  1588,  1589,  1597,  1598,  1606,  1614,
  1620,  1626,  1636,  1646,  1652,  1658,  1672,  1682,  1697,  1705,
  1713,  1715,  1717,  1718,  1721,  1725,  1729,  1732,  1733,  1736,
  1740,  1744,  1748,  1752,  1757,  1758,  1761,  1765,  1769,  1773,
  1777,  1781,  1786,  1787,  1790,  1794,  1798,  1802,  1806,  1811,
  1812,  1815,  1819,  1823,  1827,  1831,  1835,  1840,  1845,  1850,
  1851,  1856,  1857,  1860,  1864,  1868,  1872,  1876,  1880,  1884,
  1885,  1888,  1892,  1894,  1895,  1898,  1902,  1907,  1912,  1916,
  1921,  1922,  1927,  1928,  1931,  1935,  1940,  1941,  1947,  1953,
  1954,  1957,  1958,  1965,  1969,  1970,  1975,  1979,  1983,  1984,
  1987,  1991,  1993,  1994,  1997,  2001,  2005,  2009,  2013,  2018,
  2019,  2028,  2029,  2030,  2034,  2042,  2050,  2051,  2062,  2066,
  2073,  2075,  2077,  2079,  2081,  2082,  2086,  2088,  2091,  2094,
  2107,  2110,  2126,  2131,  2144,  2162,  2185,  2198,  2199,  2202,
  2206,  2211,  2216,  2220,  2223,  2226,  2230,  2234,  2238,  2242,
  2246,  2250,  2254,  2258,  2262,  2266,  2270,  2274,  2280,  2283,
  2287,  2297,  2301,  2302,  2305,  2310,  2315,  2321,  2322,  2326,
  2332,  2338,  2340,  2342,  2344,  2346,  2348,  2350,  2352,  2354,
  2356,  2358,  2360,  2362,  2364,  2366,  2368,  2370,  2372,  2374,
  2376,  2378,  2380,  2382,  2386,  2389,  2392,  2396,  2400,  2404,
  2408,  2412,  2416,  2420,  2424,  2428,  2432,  2436,  2440,  2444,
  2448,  2453,  2458,  2463,  2468,  2473,  2478,  2483,  2488,  2493,
  2498,  2505,  2510,  2515,  2520,  2525,  2530,  2535,  2542,  2549,
  2556,  2562,  2565,  2567,  2569,  2571,  2573,  2575,  2577,  2579,
  2581,  2582,  2584,  2586,  2590,  2592,  2594,  2598,  2602,  2606,
  2612,  2616,  2621,  2626,  2633,  2642,  2651,  2653,  2655
};

static const short yyrhs[] = {    -1,
   231,   232,     0,     0,     0,   232,   233,   234,     0,    48,
   226,   237,   227,     0,    83,   226,   260,   227,     0,    54,
   226,   294,   227,     0,    67,   226,   279,   227,     0,    69,
   226,   285,   227,     0,    79,   226,   301,   227,     0,    94,
   226,   324,   227,     0,   111,   226,   350,   227,     0,   156,
   226,   380,   227,     0,   158,   226,   392,   227,     0,   396,
     0,   409,     0,    10,   417,     0,   235,     0,   193,     7,
     0,   193,   163,     7,     0,   193,   195,     7,     0,   193,
    23,     7,     0,   193,   194,     7,     0,   193,   193,     7,
     0,   193,     5,     7,     0,   194,     7,     0,   195,     7,
     0,   195,    48,     7,     0,   195,    83,     7,     0,   195,
    54,     7,     0,   195,    67,     7,     0,   195,    69,     7,
     0,   195,    79,     7,     0,   195,    94,     7,     0,   195,
   111,     7,     0,   195,   156,     7,     0,   195,   158,     7,
     0,   195,     3,     7,     0,     0,   236,   400,     0,     0,
     0,   237,   238,   239,     0,     5,   196,   244,     7,     0,
     5,   259,   196,   244,     7,     0,     0,     5,   257,   196,
   240,   244,     7,     0,    49,   220,   255,   221,     7,     0,
   241,     0,   409,     0,     0,     0,     5,   220,     3,   221,
   196,    52,   242,   220,   223,   252,   243,   228,   223,   252,
   228,   412,   221,     7,     0,     0,     0,   248,   220,   245,
   249,   246,   250,   221,     0,   223,   252,     0,   244,     0,
     5,   258,     0,    55,     0,     5,     0,   252,     0,    50,
     0,     0,   256,   251,   252,     0,   256,    51,     5,   258,
     0,     5,     0,   254,     0,   226,   253,   227,     0,     0,
   253,   256,   254,     0,   253,   256,   210,   254,     0,     3,
     0,   229,   415,   229,     0,     3,     8,   412,     0,     3,
     8,     3,     8,   412,     0,     5,     0,     5,   226,   412,
   227,     0,     5,   226,   227,     0,     0,   255,   256,     5,
     0,   255,   256,     5,   226,   412,   227,     0,     0,   228,
     0,   226,   223,   412,   227,     0,     0,   226,   227,     0,
   226,   412,   227,     0,     0,   260,   261,     0,    53,   220,
   262,   221,     7,     0,     5,   220,   221,   196,   263,     7,
     0,     5,   220,   247,   221,   196,   263,     7,     0,   409,
     0,     0,   262,   256,     5,     0,    11,   220,   412,   221,
     0,    83,   220,     5,   221,     0,     0,   264,   267,     0,
     0,   226,   266,   227,     0,   263,     0,   266,   228,   263,
     0,     0,   268,   269,     0,   272,     0,     0,     0,   269,
   197,   270,   269,     8,   271,   269,     0,   269,   211,   269,
     0,   269,   214,   269,     0,    45,   220,   269,   228,   269,
   221,     0,   269,   212,   269,     0,   269,   209,   269,     0,
   269,   210,   269,     0,   269,   213,   269,     0,   269,   217,
   269,     0,   269,   203,   269,     0,   269,   205,   269,     0,
   269,   204,   269,     0,   269,   206,   269,     0,   269,   200,
   269,     0,   269,   201,   269,     0,   269,   202,   269,     0,
   269,   199,   269,     0,   269,   198,   269,     0,   210,   269,
     0,   209,   269,     0,   215,   269,     0,   218,   269,   219,
     0,   413,     0,   411,   276,   278,     0,     5,   349,     0,
   349,     0,   349,   276,     0,     0,   104,   273,   220,   267,
   221,     0,     0,    46,   220,     5,   220,   274,   267,   221,
   221,   226,   412,   227,     0,    47,   220,     5,   221,   226,
   412,   228,   412,   227,     0,    42,   220,   349,   221,     0,
    44,   220,   349,   221,     0,     0,    43,   275,   220,   267,
   228,   247,   221,     0,   203,     5,   205,   220,   267,   221,
     0,   224,     5,     0,   224,   180,     0,   224,   122,     0,
   224,     3,     0,   272,   223,     3,     0,   223,     3,     0,
   272,   225,     3,     0,   220,   222,   221,     0,   220,   221,
     0,   220,   277,   221,     0,   269,     0,   277,   228,   269,
     0,     0,   226,   415,   227,     0,   226,    55,   220,   247,
   221,   227,     0,     0,   279,   226,   280,   227,     0,     0,
   280,   281,     0,    80,     5,     7,     0,    68,   226,   282,
   227,     0,     0,   282,   226,   283,   227,     0,     0,   283,
   284,     0,    55,   247,     7,     0,    55,    50,     7,     0,
    67,     5,   278,     7,     0,     0,   285,   226,   286,   227,
     0,     0,   286,   287,     0,    80,     5,     7,     0,    72,
   263,     7,     0,    68,   226,   288,   227,     0,     0,   288,
   226,   289,   227,     0,     0,   289,   290,     0,    70,     5,
     7,     0,    71,     5,     7,     0,    68,   226,   291,   227,
     0,     0,   291,   226,   292,   227,     0,     0,   292,   293,
     0,    73,     5,     7,     0,    74,   412,     7,     0,    75,
   412,     7,     0,    76,   412,     7,     0,    77,   412,     7,
     0,    78,   412,     7,     0,     0,   294,   295,     0,   226,
   296,   227,     0,   409,     0,     0,   296,   297,     0,    80,
     5,     7,     0,    80,     5,   257,     7,     0,    70,     5,
     7,     0,    68,   226,   298,   227,     0,    68,     5,   226,
   298,   227,     0,     0,   298,   226,   299,   227,     0,     0,
   299,   300,     0,    70,     5,     7,     0,    55,   247,     7,
     0,    56,   247,     7,     0,    62,   263,     7,     0,    61,
   263,     7,     0,    66,     5,     7,     0,    63,   226,     3,
   256,     3,   227,     7,     0,    57,   247,     7,     0,    58,
   247,     7,     0,    83,   263,     7,     0,    60,   263,     7,
     0,    59,   263,     7,     0,    83,   220,   263,   228,   263,
   221,     7,     0,    60,   220,   263,   228,   263,   221,     7,
     0,    59,   220,   263,   228,   263,   221,     7,     0,     0,
   301,   302,     0,   226,   303,   227,     0,   409,     0,     0,
   303,   304,     0,    80,     5,     7,     0,    80,     5,   257,
     7,     0,    70,     5,     7,     0,    81,   226,   305,   227,
     0,    88,   226,   311,   227,     0,    90,   226,   318,   227,
     0,    54,   226,   321,   227,     0,     0,   305,   226,   306,
   227,     0,     0,   306,   307,     0,    80,     5,     7,     0,
    82,     5,     7,     0,    82,     5,   257,     7,     0,    83,
     5,   308,     7,     0,    84,   226,     5,   256,     5,   227,
     7,     0,    85,   265,     7,     0,    86,   247,     7,     0,
    87,   247,     7,     0,     0,     0,     0,   226,    95,     5,
     7,    94,     5,   257,     7,   309,    48,   247,     7,   310,
   111,     5,   258,     7,   227,     0,     0,   311,   226,   312,
   227,     0,     0,   312,   313,     0,    80,     5,     7,     0,
    89,   314,     7,     0,    82,   316,     7,     0,     5,     0,
   226,   315,   227,     0,     0,   315,   256,     5,     0,     5,
     0,   226,   317,   227,     0,     0,   317,   256,     5,     0,
     0,   318,   226,   319,   227,     0,     0,   319,   320,     0,
    80,     5,     7,     0,    70,     5,     7,     0,    82,     5,
     7,     0,     0,   321,   226,   322,   227,     0,     0,   322,
   323,     0,    82,     5,     7,     0,    87,   248,    93,     5,
     7,     0,    91,   248,     7,     0,    92,   251,     7,     0,
    93,     5,   258,     7,     0,     0,   324,   325,     0,   226,
   326,   227,     0,   409,     0,     0,   326,   327,     0,    80,
     5,     7,     0,    80,     5,   257,     7,     0,    70,     5,
     7,     0,    95,   226,   328,   227,     0,    99,   226,   334,
   227,     0,     0,   328,   226,   329,   227,     0,     0,   329,
   330,     0,    80,     5,     7,     0,    70,    90,     7,     0,
    70,   100,     7,     0,    70,     5,     7,     0,     0,    96,
     5,   258,   331,   333,     7,     0,    97,     3,     7,     0,
     0,   220,   332,   267,   221,     7,     0,   110,   247,     7,
     0,    69,     5,     7,     0,    67,     5,     7,     0,    98,
     3,     7,     0,     0,   220,     5,   221,     0,     0,   334,
   335,     0,   100,   226,   340,   227,     0,   101,   226,   340,
   227,     0,   102,   226,   344,   227,     0,   103,   226,   336,
   227,     0,     0,   336,   337,     0,    70,     5,     7,     0,
    93,     5,     7,     0,   226,   338,   227,     0,     0,   338,
   339,     0,    64,   349,     7,     0,    65,   349,     7,     0,
    99,   349,     7,     0,   110,   247,     7,     0,     0,   340,
   341,     0,     0,     0,   348,   220,   342,   267,   343,   228,
   267,   221,     7,     0,   110,   247,     7,     0,    67,     5,
     7,     0,    69,     5,     7,     0,     0,   344,   345,     0,
   110,   247,     7,     0,     0,     0,   348,   220,   346,   267,
   347,   228,   349,   221,     7,     0,     0,   104,     0,   105,
     0,   106,     0,   107,     0,   108,     0,   109,     0,   226,
     5,     5,   227,     0,   226,     5,   227,     0,     0,   350,
   351,     0,   226,   352,   227,     0,   409,     0,     0,   352,
   353,     0,    80,     5,     7,     0,    80,     5,   257,     7,
     0,   112,   226,   355,   227,     0,     0,   119,   354,   226,
   362,   227,     0,     0,   355,   226,   356,   227,     0,     0,
   356,   357,     0,    80,     5,     7,     0,    70,     5,     7,
     0,   113,   358,     7,     0,   114,   417,     7,     0,   117,
   360,     7,     0,   118,     5,     7,     0,   115,   414,     7,
     0,   116,   417,     7,     0,     5,   258,     0,   226,   359,
   227,     0,     0,   359,   256,     5,     0,     5,     0,   226,
   361,   227,     0,     0,   361,   256,     5,     0,     0,   362,
   363,     0,     5,     5,     7,     0,   121,   263,     7,     0,
   133,   226,   369,   227,     0,   137,   226,   371,   227,     0,
   140,   226,   373,   227,     0,   143,   226,   375,   227,     0,
     5,   220,     5,   221,     7,     0,   121,   220,   263,   221,
     7,     0,   132,     7,     0,   126,   220,   263,   221,   226,
   362,   227,     0,   126,   220,   263,   221,   226,   362,   227,
   127,   226,   362,   227,     0,   123,   220,     5,   228,   263,
   221,     7,     0,   130,   220,     5,   228,   263,   221,     7,
     0,   131,   220,     5,   228,   247,   228,     5,   221,     7,
     0,   124,   220,     5,   228,     5,   228,   414,   221,     7,
     0,   125,   220,     5,   228,     5,   228,   412,   221,     7,
     0,   128,   220,     5,   228,   412,   228,   414,   228,   412,
   221,     7,     0,   129,   220,     5,   228,     5,   228,     5,
   228,   412,   228,   414,   228,   412,   228,   412,   221,     7,
     0,   133,   220,   412,   228,   412,   228,   263,   228,   263,
   221,   226,   362,   227,     0,   137,   220,   412,   228,   412,
   228,   263,   228,   412,   228,   412,   221,   226,   362,   227,
     0,   140,   220,   412,   228,   412,   228,   263,   221,   226,
   362,   227,     0,   140,   220,   412,   228,   412,   228,   263,
   228,   412,   221,   226,   362,   227,     0,     0,   163,   364,
   220,   366,   367,   221,     7,     0,     0,   165,   365,   220,
   366,   367,   221,     7,     0,   146,   220,   247,   228,   263,
   221,     7,     0,   158,   220,     5,   221,     7,     0,   147,
   220,   417,   221,     7,     0,   148,   220,     5,   228,   414,
   228,   412,   221,     7,     0,   149,   220,     5,   228,   412,
   228,   417,   221,     7,     0,   150,   226,     5,   227,     7,
     0,   151,   226,     5,   227,     7,     0,   155,   226,     5,
   228,   247,   228,   417,   228,   417,   228,   263,   227,     7,
     0,   155,   226,     5,   228,   247,   228,   417,   227,     7,
     0,   152,   220,     5,   228,     5,   228,   412,   228,   412,
   221,   226,   362,   227,     7,     0,   153,   220,     5,   228,
     5,   221,     7,     0,   154,   220,     5,   228,     5,   221,
     7,     0,   265,     0,     5,     0,     0,   367,   368,     0,
   228,   177,   417,     0,   228,   180,   414,     0,   228,   414,
     0,     0,   369,   370,     0,   134,   412,     7,     0,   135,
   412,     7,     0,   122,   263,     7,     0,   136,   263,     7,
     0,   119,   226,   362,   227,     0,     0,   371,   372,     0,
   134,   412,     7,     0,   135,   412,     7,     0,   122,   263,
     7,     0,   138,   412,     7,     0,   139,   412,     7,     0,
   119,   226,   362,   227,     0,     0,   373,   374,     0,   141,
   412,     7,     0,    72,   412,     7,     0,   142,   263,     7,
     0,   192,   412,     7,     0,   119,   226,   362,   227,     0,
     0,   375,   376,     0,   141,   412,     7,     0,   144,   412,
     7,     0,    72,   412,     7,     0,   192,   412,     7,     0,
   112,     5,     7,     0,   145,   226,   377,   227,     0,   119,
   226,   362,   227,     0,   120,   226,   362,   227,     0,     0,
   377,   226,   378,   227,     0,     0,   378,   379,     0,    70,
     5,     7,     0,    95,     5,     7,     0,   110,   247,     7,
     0,    72,   412,     7,     0,    83,   263,     7,     0,   192,
     5,     7,     0,     0,   380,   381,     0,   226,   382,   227,
     0,   409,     0,     0,   382,   383,     0,    80,     5,     7,
     0,    80,     5,   257,     7,     0,   113,     5,   258,     7,
     0,   157,     5,     7,     0,    95,   226,   384,   227,     0,
     0,   384,   226,   385,   227,     0,     0,   385,   386,     0,
    80,     5,     7,     0,    61,   226,   387,   227,     0,     0,
   387,   100,   226,   388,   227,     0,   387,     5,   226,   388,
   227,     0,     0,   388,   389,     0,     0,   348,   220,   390,
   267,   221,     7,     0,    70,     5,     7,     0,     0,   110,
   391,   247,     7,     0,    67,     5,     7,     0,    69,     5,
     7,     0,     0,   392,   393,     0,   226,   394,   227,     0,
   409,     0,     0,   394,   395,     0,    80,     5,     7,     0,
   159,     5,     7,     0,   182,     5,     7,     0,   161,   417,
     7,     0,   119,   226,   398,   227,     0,     0,   158,     5,
   160,     5,   397,   226,   398,   227,     0,     0,     0,   398,
   399,   400,     0,   162,   220,   402,   405,   406,   221,     7,
     0,   163,   220,   402,   405,   406,   221,     7,     0,     0,
   164,   220,   247,   401,   228,   110,   247,   406,   221,     7,
     0,     5,   404,   228,     0,     5,   404,   403,     5,   404,
   228,     0,   211,     0,   212,     0,   209,     0,   210,     0,
     0,   220,   247,   221,     0,   167,     0,   168,   247,     0,
   169,   247,     0,   171,   226,   226,   415,   227,   226,   415,
   227,   226,   415,   227,   227,     0,   170,   247,     0,   170,
   226,   263,   228,   263,   228,   263,   227,   226,   414,   228,
   414,   228,   414,   227,     0,   172,   226,   415,   227,     0,
   173,   226,   226,   415,   227,   226,   415,   227,   227,   226,
   412,   227,     0,   174,   226,   226,   415,   227,   226,   415,
   227,   226,   415,   227,   227,   226,   412,   228,   412,   227,
     0,   175,   226,   226,   415,   227,   226,   415,   227,   226,
   415,   227,   226,   415,   227,   227,   226,   412,   228,   412,
   228,   412,   227,     0,   168,   247,   176,     5,   226,   412,
   228,   412,   227,   226,   412,   227,     0,     0,   406,   407,
     0,   228,   177,   417,     0,   228,   177,   205,   417,     0,
   228,   177,   208,   417,     0,   228,   178,   412,     0,   228,
   185,     0,   228,   186,     0,   228,   181,   412,     0,   228,
   182,     5,     0,   228,   183,   408,     0,   228,   184,   408,
     0,   228,   182,   408,     0,   228,   179,   412,     0,   228,
   180,   414,     0,   228,   166,     5,     0,   228,   188,     5,
     0,   228,   187,   412,     0,   228,    61,   414,     0,   228,
   189,   412,     0,   228,   189,   226,   415,   227,     0,   228,
   190,     0,   228,   115,   414,     0,   228,   146,   226,   263,
   228,   263,   228,   263,   227,     0,   228,   191,   265,     0,
     0,   408,     6,     0,     5,   196,   414,     7,     0,     5,
   196,     6,     7,     0,    16,   220,   410,   221,     7,     0,
     0,   410,   256,     5,     0,   410,   256,     5,   196,   412,
     0,   410,   256,     5,   196,     6,     0,    22,     0,    23,
     0,    24,     0,    25,     0,    26,     0,    27,     0,    28,
     0,    29,     0,    30,     0,    31,     0,    32,     0,    33,
     0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
     0,    39,     0,    40,     0,    41,     0,     5,     0,   413,
     0,   218,   412,   219,     0,   210,   412,     0,   215,   412,
     0,   412,   210,   412,     0,   412,   209,   412,     0,   412,
   211,   412,     0,   412,   212,   412,     0,   412,   213,   412,
     0,   412,   217,   412,     0,   412,   203,   412,     0,   412,
   205,   412,     0,   412,   204,   412,     0,   412,   206,   412,
     0,   412,   200,   412,     0,   412,   201,   412,     0,   412,
   199,   412,     0,   412,   198,   412,     0,    22,   220,   412,
   221,     0,    23,   220,   412,   221,     0,    24,   220,   412,
   221,     0,    25,   220,   412,   221,     0,    26,   220,   412,
   221,     0,    27,   220,   412,   221,     0,    28,   220,   412,
   221,     0,    29,   220,   412,   221,     0,    30,   220,   412,
   221,     0,    31,   220,   412,   221,     0,    32,   220,   412,
   228,   412,   221,     0,    33,   220,   412,   221,     0,    34,
   220,   412,   221,     0,    35,   220,   412,   221,     0,    36,
   220,   412,   221,     0,    37,   220,   412,   221,     0,    38,
   220,   412,   221,     0,    39,   220,   412,   228,   412,   221,
     0,    40,   220,   412,   228,   412,   221,     0,    41,   220,
   412,   228,   412,   221,     0,   412,   197,   412,     8,   412,
     0,   412,   223,     0,     4,     0,     3,     0,    17,     0,
    18,     0,    19,     0,    20,     0,    21,     0,     5,     0,
     0,   412,     0,   416,     0,   226,   415,   227,     0,   412,
     0,   416,     0,   415,   228,   412,     0,   415,   228,   416,
     0,   412,     8,   412,     0,   412,     8,   412,     8,   412,
     0,     5,   226,   227,     0,     5,   226,   415,   227,     0,
    12,   220,     5,   221,     0,    13,   220,     5,   228,     5,
   221,     0,    14,   220,   412,   228,   412,   228,   412,   221,
     0,    15,   220,   412,   228,   412,   228,   412,   221,     0,
     6,     0,     5,     0,     9,   220,   417,   228,   417,   221,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   327,   362,   399,   402,   405,   408,   411,   412,   413,   414,
   415,   416,   417,   418,   419,   421,   423,   425,   430,   439,
   442,   444,   446,   448,   450,   452,   454,   456,   458,   460,
   462,   464,   466,   468,   470,   472,   474,   476,   478,   481,
   489,   503,   506,   507,   510,   515,   518,   520,   523,   525,
   527,   532,   543,   550,   558,   566,   577,   586,   595,   602,
   637,   642,   653,   656,   670,   675,   678,   727,   740,   766,
   771,   786,   804,   825,   831,   834,   843,   857,   891,   904,
   924,   928,   938,   955,   955,   958,   964,   967,   970,   980,
   983,   986,   990,  1010,  1054,  1058,  1061,  1078,  1087,  1094,
  1097,  1102,  1108,  1112,  1117,  1122,  1128,  1135,  1139,  1152,
  1167,  1181,  1187,  1193,  1199,  1205,  1211,  1217,  1223,  1229,
  1235,  1241,  1247,  1253,  1259,  1265,  1271,  1277,  1284,  1290,
  1292,  1301,  1305,  1311,  1386,  1420,  1429,  1441,  1443,  1454,
  1456,  1470,  1482,  1488,  1494,  1496,  1525,  1549,  1562,  1568,
  1575,  1581,  1588,  1595,  1605,  1608,  1609,  1612,  1615,  1618,
  1623,  1626,  1640,  1647,  1652,  1657,  1661,  1668,  1673,  1678,
  1683,  1689,  1693,  1698,  1701,  1737,  1745,  1750,  1759,  1763,
  1772,  1775,  1780,  1785,  1790,  1798,  1802,  1814,  1824,  1829,
  1834,  1839,  1851,  1855,  1911,  1914,  1917,  1920,  1923,  1932,
  1939,  1942,  1964,  1967,  1977,  1981,  1989,  1996,  2005,  2008,
  2028,  2045,  2067,  2077,  2081,  2093,  2117,  2142,  2147,  2155,
  2163,  2173,  2190,  2198,  2205,  2212,  2221,  2230,  2239,  2258,
  2266,  2269,  2292,  2296,  2305,  2309,  2317,  2324,  2333,  2336,
  2339,  2342,  2347,  2365,  2412,  2428,  2432,  2437,  2442,  2447,
  2461,  2481,  2486,  2510,  2565,  2569,  2573,  2582,  2646,  2652,
  2657,  2662,  2666,  2673,  2676,  2681,  2699,  2704,  2708,  2725,
  2739,  2744,  2748,  2761,  2767,  2774,  2781,  2785,  2792,  2802,
  2813,  2830,  2902,  2914,  2918,  2938,  2952,  2955,  2958,  3002,
  3009,  3012,  3034,  3038,  3046,  3050,  3058,  3065,  3075,  3077,
  3082,  3097,  3113,  3130,  3134,  3139,  3143,  3146,  3156,  3195,
  3219,  3224,  3230,  3391,  3396,  3405,  3414,  3419,  3422,  3460,
  3477,  3503,  3508,  3511,  3514,  3519,  3527,  3530,  3542,  3552,
  3564,  3573,  3576,  3580,  3582,  3584,  3590,  3608,  3612,  3623,
  3684,  3730,  3754,  3763,  3775,  3792,  3796,  3830,  3839,  3893,
  3909,  3912,  3913,  3914,  3915,  3916,  3917,  3921,  3944,  3966,
  3973,  3976,  3997,  4001,  4009,  4013,  4022,  4029,  4032,  4034,
  4039,  4055,  4072,  4087,  4091,  4096,  4105,  4108,  4113,  4118,
  4123,  4128,  4135,  4174,  4179,  4184,  4194,  4206,  4210,  4215,
  4226,  4235,  4242,  4266,  4273,  4279,  4285,  4291,  4299,  4320,
  4327,  4333,  4344,  4355,  4367,  4379,  4399,  4416,  4435,  4456,
  4490,  4503,  4517,  4530,  4543,  4550,  4552,  4559,  4561,  4571,
  4581,  4589,  4602,  4615,  4624,  4633,  4647,  4660,  4677,  4691,
  4709,  4715,  4725,  4731,  4734,  4738,  4748,  4762,  4774,  4778,
  4784,  4788,  4792,  4797,  4806,  4819,  4823,  4829,  4833,  4837,
  4841,  4846,  4855,  4867,  4870,  4876,  4880,  4884,  4888,  4897,
  4912,  4915,  4921,  4925,  4929,  4934,  4944,  4950,  4956,  4965,
  4969,  4973,  4987,  4990,  5002,  5031,  5034,  5037,  5045,  5061,
  5069,  5072,  5093,  5096,  5107,  5110,  5118,  5126,  5172,  5177,
  5182,  5186,  5190,  5197,  5201,  5205,  5210,  5216,  5222,  5235,
  5246,  5249,  5257,  5285,  5296,  5296,  5302,  5311,  5327,  5335,
  5338,  5343,  5346,  5355,  5358,  5366,  5378,  5389,  5394,  5399,
  5417,  5426,  5430,  5435,  5443,  5449,  5453,  5458,  5464,  5478,
  5500,  5503,  5504,  5505,  5508,  5512,  5516,  5524,  5531,  5538,
  5562,  5569,  5581,  5594,  5614,  5640,  5673,  5693,  5716,  5719,
  5727,  5734,  5741,  5745,  5749,  5753,  5757,  5767,  5772,  5777,
  5797,  5804,  5813,  5822,  5831,  5838,  5846,  5850,  5859,  5863,
  5871,  5877,  5885,  5892,  5938,  5955,  5961,  5965,  5968,  5974,
  5980,  5991,  5993,  5994,  5995,  5996,  5997,  5998,  5999,  6000,
  6001,  6002,  6003,  6004,  6005,  6006,  6007,  6008,  6009,  6010,
  6011,  6012,  6014,  6016,  6017,  6018,  6019,  6020,  6021,  6022,
  6023,  6024,  6025,  6026,  6027,  6028,  6029,  6030,  6031,  6032,
  6033,  6034,  6035,  6036,  6037,  6038,  6039,  6040,  6041,  6042,
  6043,  6044,  6045,  6046,  6047,  6048,  6049,  6050,  6051,  6052,
  6053,  6054,  6057,  6060,  6061,  6062,  6063,  6064,  6065,  6066,
  6082,  6087,  6093,  6096,  6101,  6109,  6112,  6115,  6125,  6133,
  6144,  6160,  6182,  6197,  6235,  6243,  6253,  6258,  6273
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tInclude","tConstant","tList",
"tListAlt","tLinSpace","tLogSpace","tDefineConstant","tPi","t0D","t1D","t2D",
"t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin","tCos","tAcos","tTan","tAtan",
"tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor","tCeil","tFmod","tModulo",
"tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct","tMHTransform","tMHJacNL",
"tGroup","tDefineGroup","tAll","tInSupport","tMovingBand2D","tDefineFunction",
"tConstraint","tRegion","tSubRegion","tRegionRef","tSubRegionRef","tFilter",
"tCoefficient","tValue","tTimeFunction","tBranch","tNode","tLoop","tNameOfResolution",
"tJacobian","tCase","tIntegration","tType","tSubType","tCriterion","tGeoElement",
"tNumberOfPoints","tMaxNumberOfPoints","tNumberOfDivisions","tMaxNumberOfDivisions",
"tStoppingCriterion","tFunctionSpace","tName","tBasisFunction","tNameOfCoef",
"tFunction","tdFunction","tSubFunction","tSupport","tEntity","tSubSpace","tNameOfBasisFunction",
"tGlobalQuantity","tEntityType","tEntitySubType","tNameOfConstraint","tFormulation",
"tQuantity","tNameOfSpace","tIndexOfSystem","tSymmetry","tEquation","tGalerkin",
"tdeRham","tGlobalTerm","tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof",
"tJacNL","tNeverDt","tIn","tResolution","tDefineSystem","tNameOfFormulation",
"tNameOfMesh","tFrequency","tSolver","tOriginSystem","tDestinationSystem","tOperation",
"tOperationEnd","tSetTime","tDTime","tSetFrequency","tFourierTransform","tFourierTransformJ",
"tIf","tElse","tLanczos","tPerturbation","tUpdate","tUpdateConstraint","tBreak",
"tTimeLoopTheta","tTime0","tTimeMax","tTheta","tTimeLoopNewmark","tBeta","tGamma",
"tIterativeLoop","tNbrMaxIteration","tRelaxationFactor","tIterativeTimeReduction",
"tDivisionCoefficient","tChangeOfState","tChangeOfCoordinates","tSystemCommand",
"tSolveJac_AdaptRelax","tSaveSolutionExtendedMH","tInit_MovingBand2D","tMesh_MovingBand2D",
"tGenerate_MH_Moving","tGenerateGroup","tGenerateJacGroup","tSaveMesh","tPostProcessing",
"tNameOfSystem","tPostOperation","tNameOfPostProcessing","tUsingPost","tAppend",
"tPlot","tPrint","tPrintGroup","tWrite","tAdapt","tOnGlobal","tOnRegion","tOnElementsOf",
"tOnGrid","tOnSection","tOnPoint","tOnLine","tOnPlane","tOnBox","tWithArgument",
"tFile","tDepth","tDimension","tTimeStep","tHarmonicToTime","tFormat","tHeader",
"tFooter","tSkin","tSmoothing","tTarget","tSort","tIso","tNoNewLine","tChangeOfValues",
"tFlag","tHelp","tCpu","tCheck","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL",
"tAPPROXEQUAL","'<'","tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER",
"'+'","'-'","'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('",
"')'","'['","']'","'.'","'#'","'$'","tSHOW","'{'","'}'","','","'@'","Stats",
"@1","ProblemDefinitions","@2","ProblemDefinition","Interactive","@3","Groups",
"@4","Group","@5","MovingBand2DGroup","@6","@7","ReducedGroupRHS","@8","@9",
"GroupRHS","FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup",
"ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension",
"MultipleIndex","Index","Functions","Function","DefineFunctions","Expression",
"@10","ListOfExpression","RecursiveListOfExpression","WholeQuantityExpression",
"@11","WholeQuantity","@12","@13","WholeQuantity_Single","@14","@15","@16","ArgumentsForFunction",
"RecursiveListOfQuantity","ParametersForFunction","JacobianMethods","JacobianMethod",
"JacobianMethodTerm","JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods",
"IntegrationMethod","IntegrationMethodTerm","IntegrationCases","IntegrationCase",
"IntegrationCaseTerm","QuadratureCases","QuadratureCase","QuadratureCaseTerm",
"Constraints","BracedConstraint","Constraint","ConstraintTerm","ConstraintCases",
"ConstraintCase","ConstraintCaseTerm","FunctionSpaces","BracedFunctionSpace",
"FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction","BasisFunctionTerm",
"OptionalParametersForBasisFunction","@17","@18","SubSpaces","SubSpace","SubSpaceTerm",
"ListOfBasisFunction","RecursiveListOfBasisFunction","ListOfBasisFunctionCoef",
"RecursiveListOfBasisFunctionCoef","GlobalQuantities","GlobalQuantity","GlobalQuantityTerm",
"ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm","Formulations","BracedFormulation",
"Formulation","FormulationTerm","DefineQuantities","DefineQuantity","DefineQuantityTerm",
"@19","@20","IndexInFunctionSpace","Equations","EquationTerm","GlobalEquation",
"GlobalEquationTerm","GlobalEquationTermTerm","GlobalEquationTermTermTerm","LocalTerm",
"LocalTermTerm","@21","@22","GlobalTerm","GlobalTermTerm","@23","@24","TermOperator",
"Quantity_Def","Resolutions","BracedResolution","Resolution","ResolutionTerm",
"@25","DefineSystems","DefineSystem","DefineSystemTerm","ListOfFormulation",
"RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem","Operation",
"OperationTerm","@26","@27","PrintOperation","PrintOperationOptions","PrintOperationOption",
"TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark","TimeLoopNewmarkTerm",
"IterativeLoop","IterativeLoopTerm","IterativeTimeReduction","IterativeTimeReductionTerm",
"ChangeOfStates","ChangeOfState","ChangeOfStateTerm","PostProcessings","BracedPostProcessing",
"PostProcessing","PostProcessingTerm","PostQuantities","PostQuantity","PostQuantityTerm",
"SubPostQuantities","SubPostQuantity","SubPostQuantityTerm","@28","@29","PostOperations",
"BracedPostOperation","PostOperation","PostOperationTerm","SeparatePostOperation",
"@30","PostSubOperations","@31","PostSubOperation","@32","PostQuantitiesToPrint",
"Combination","PostQuantitySupport","PrintSubType","PrintOptions","PrintOption",
"ParsedStrings","Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr",
"ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   231,   230,   232,   233,   232,   234,   234,   234,   234,   234,
   234,   234,   234,   234,   234,   234,   234,   234,   234,   235,
   235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
   235,   235,   235,   235,   235,   235,   235,   235,   235,   236,
   235,   237,   238,   237,   239,   239,   240,   239,   239,   239,
   239,   242,   243,   241,   245,   246,   244,   244,   247,   247,
   248,   248,   249,   249,   250,   250,   250,   251,   252,   252,
   253,   253,   253,   254,   254,   254,   254,   254,   254,   254,
   255,   255,   255,   256,   256,   257,   258,   258,   259,   260,
   260,   261,   261,   261,   261,   262,   262,   263,   263,   264,
   263,   265,   265,   266,   266,   268,   267,   269,   270,   271,
   269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
   269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
   269,   272,   272,   272,   272,   272,   272,   273,   272,   274,
   272,   272,   272,   272,   275,   272,   272,   272,   272,   272,
   272,   272,   272,   272,   276,   276,   276,   277,   277,   278,
   278,   278,   279,   279,   280,   280,   281,   281,   282,   282,
   283,   283,   284,   284,   284,   285,   285,   286,   286,   287,
   287,   287,   288,   288,   289,   289,   290,   290,   290,   291,
   291,   292,   292,   293,   293,   293,   293,   293,   293,   294,
   294,   295,   295,   296,   296,   297,   297,   297,   297,   297,
   298,   298,   299,   299,   300,   300,   300,   300,   300,   300,
   300,   300,   300,   300,   300,   300,   300,   300,   300,   301,
   301,   302,   302,   303,   303,   304,   304,   304,   304,   304,
   304,   304,   305,   305,   306,   306,   307,   307,   307,   307,
   307,   307,   307,   307,   308,   309,   310,   308,   311,   311,
   312,   312,   313,   313,   313,   314,   314,   315,   315,   316,
   316,   317,   317,   318,   318,   319,   319,   320,   320,   320,
   321,   321,   322,   322,   323,   323,   323,   323,   323,   324,
   324,   325,   325,   326,   326,   327,   327,   327,   327,   327,
   328,   328,   329,   329,   330,   330,   330,   330,   331,   330,
   330,   332,   330,   330,   330,   330,   330,   333,   333,   334,
   334,   335,   335,   335,   335,   336,   336,   337,   337,   337,
   338,   338,   339,   339,   339,   339,   340,   340,   342,   343,
   341,   341,   341,   341,   344,   344,   345,   346,   347,   345,
   348,   348,   348,   348,   348,   348,   348,   349,   349,   350,
   350,   351,   351,   352,   352,   353,   353,   353,   354,   353,
   355,   355,   356,   356,   357,   357,   357,   357,   357,   357,
   357,   357,   358,   358,   359,   359,   360,   360,   361,   361,
   362,   362,   363,   363,   363,   363,   363,   363,   363,   363,
   363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
   363,   363,   363,   363,   364,   363,   365,   363,   363,   363,
   363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
   366,   366,   367,   367,   368,   368,   368,   369,   369,   370,
   370,   370,   370,   370,   371,   371,   372,   372,   372,   372,
   372,   372,   373,   373,   374,   374,   374,   374,   374,   375,
   375,   376,   376,   376,   376,   376,   376,   376,   376,   377,
   377,   378,   378,   379,   379,   379,   379,   379,   379,   380,
   380,   381,   381,   382,   382,   383,   383,   383,   383,   383,
   384,   384,   385,   385,   386,   386,   387,   387,   387,   388,
   388,   390,   389,   389,   391,   389,   389,   389,   392,   392,
   393,   393,   394,   394,   395,   395,   395,   395,   395,   397,
   396,   398,   399,   398,   400,   400,   401,   400,   402,   402,
   403,   403,   403,   403,   404,   404,   405,   405,   405,   405,
   405,   405,   405,   405,   405,   405,   405,   406,   406,   407,
   407,   407,   407,   407,   407,   407,   407,   407,   407,   407,
   407,   407,   407,   407,   407,   407,   407,   407,   407,   407,
   407,   407,   408,   408,   409,   409,   409,   410,   410,   410,
   410,   411,   411,   411,   411,   411,   411,   411,   411,   411,
   411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
   411,   411,   412,   412,   412,   412,   412,   412,   412,   412,
   412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
   412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
   412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
   412,   412,   413,   413,   413,   413,   413,   413,   413,   413,
   414,   414,   414,   414,   415,   415,   415,   415,   416,   416,
   416,   416,   416,   416,   416,   416,   417,   417,   417
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     0,     3,     4,     5,     0,     6,     5,     1,
     1,     0,     0,    18,     0,     0,     7,     2,     1,     2,
     1,     1,     1,     1,     0,     3,     4,     1,     1,     3,
     0,     3,     4,     1,     3,     3,     5,     1,     4,     3,
     0,     3,     6,     0,     1,     4,     0,     2,     3,     0,
     2,     5,     6,     7,     1,     0,     3,     4,     4,     0,
     2,     0,     3,     1,     3,     0,     2,     1,     0,     0,
     7,     3,     3,     6,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
     2,     3,     1,     3,     2,     1,     2,     0,     5,     0,
    11,     9,     4,     4,     0,     7,     6,     2,     2,     2,
     2,     3,     2,     3,     3,     2,     3,     1,     3,     0,
     3,     6,     0,     4,     0,     2,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     4,     0,     4,     0,     2,     3,     3,     4,     0,
     4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
     2,     3,     1,     0,     2,     3,     4,     3,     4,     5,
     0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
     7,     3,     3,     3,     3,     3,     7,     7,     7,     0,
     2,     3,     1,     0,     2,     3,     4,     3,     4,     4,
     4,     4,     0,     4,     0,     2,     3,     3,     4,     4,
     7,     3,     3,     3,     0,     0,     0,    18,     0,     4,
     0,     2,     3,     3,     3,     1,     3,     0,     3,     1,
     3,     0,     3,     0,     4,     0,     2,     3,     3,     3,
     0,     4,     0,     2,     3,     5,     3,     3,     4,     0,
     2,     3,     1,     0,     2,     3,     4,     3,     4,     4,
     0,     4,     0,     2,     3,     3,     3,     3,     0,     6,
     3,     0,     5,     3,     3,     3,     3,     0,     3,     0,
     2,     4,     4,     4,     4,     0,     2,     3,     3,     3,
     0,     2,     3,     3,     3,     3,     0,     2,     0,     0,
     9,     3,     3,     3,     0,     2,     3,     0,     0,     9,
     0,     1,     1,     1,     1,     1,     1,     4,     3,     0,
     2,     3,     1,     0,     2,     3,     4,     4,     0,     5,
     0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
     3,     3,     2,     3,     0,     3,     1,     3,     0,     3,
     0,     2,     3,     3,     4,     4,     4,     4,     5,     5,
     2,     7,    11,     7,     7,     9,     9,     9,    11,    17,
    13,    15,    11,    13,     0,     7,     0,     7,     7,     5,
     5,     9,     9,     5,     5,    13,     9,    14,     7,     7,
     1,     1,     0,     2,     3,     3,     2,     0,     2,     3,
     3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     4,     0,
     2,     3,     3,     3,     3,     3,     4,     4,     4,     0,
     4,     0,     2,     3,     3,     3,     3,     3,     3,     0,
     2,     3,     1,     0,     2,     3,     4,     4,     3,     4,
     0,     4,     0,     2,     3,     4,     0,     5,     5,     0,
     2,     0,     6,     3,     0,     4,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     3,     3,     3,     4,     0,
     8,     0,     0,     3,     7,     7,     0,    10,     3,     6,
     1,     1,     1,     1,     0,     3,     1,     2,     2,    12,
     2,    15,     4,    12,    17,    22,    12,     0,     2,     3,
     4,     4,     3,     2,     2,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     5,     2,     3,
     9,     3,     0,     2,     4,     4,     5,     0,     3,     5,
     5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     3,     2,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     6,     4,     4,     4,     4,     4,     4,     6,     6,     6,
     5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     0,     1,     1,     3,     1,     1,     3,     3,     3,     5,
     3,     4,     4,     6,     8,     8,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,   651,   668,   667,     0,    18,   578,
    42,   200,   163,   176,   230,    90,   290,   360,   480,     0,
   509,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    41,   644,   643,   650,     0,     0,
     0,     0,     0,   645,   646,   647,   648,   649,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   652,   603,     0,   653,     0,    84,    43,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
    23,    21,    25,    24,    22,    39,    29,    31,    32,    33,
    34,    30,    35,    36,    37,    38,     0,     0,     0,     0,
   576,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   650,   605,   606,     0,   655,
     0,   656,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   642,   575,
     0,     0,    85,     0,     6,     0,   204,     8,   201,   203,
   165,     9,   178,    10,   234,    11,   231,   233,     0,     0,
     7,    91,    95,   294,    12,   291,   293,   364,    13,   361,
   363,   484,    14,   481,   483,   520,   513,    15,   510,   512,
   535,     0,     0,    87,    61,     0,    59,   527,     0,   661,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   604,   654,     0,   659,     0,
   620,   619,   617,   618,   613,   615,   614,   616,   608,   607,
   609,   610,   611,   612,     0,   577,   579,     0,     0,    44,
    50,    51,     0,     0,     0,     0,     0,    96,     0,     0,
     0,     0,     0,     0,     0,   537,     0,     0,     0,     0,
     0,     0,     0,     0,   548,   548,     0,    60,    74,    78,
    71,     0,    58,    69,     0,    55,   662,   663,     0,     0,
     0,   621,   622,   623,   624,   625,   626,   627,   628,   629,
   630,     0,   632,   633,   634,   635,   636,   637,     0,     0,
     0,   657,   658,     0,     0,     0,     0,   651,     0,     0,
     0,     0,    81,     0,     0,     0,   202,   205,     0,     0,
   164,   166,     0,   100,     0,   177,   179,     0,     0,     0,
     0,     0,     0,   232,   235,     0,     0,    84,     0,     0,
     0,     0,   292,   295,     0,     0,   369,   362,   365,     0,
     0,     0,     0,   482,   485,   522,     0,     0,     0,     0,
     0,   511,   514,     0,   533,   534,   531,   532,   529,     0,
   538,   539,   100,   541,     0,     0,     0,     0,     0,     0,
     0,    88,     0,     0,    84,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   660,   641,   669,   581,   580,
   650,     0,     0,     0,     0,    47,     0,    84,     0,   211,
     0,     0,   169,     0,   183,     0,     0,     0,   106,     0,
   281,     0,     0,   243,   259,   274,   100,     0,     0,     0,
     0,     0,   301,   320,     0,   371,     0,     0,   491,    87,
     0,   523,     0,   522,     0,     0,     0,   536,   535,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   549,     0,
   644,    76,    80,     0,    70,     0,    75,     0,    64,    56,
    63,   664,     0,     0,   631,   638,   639,   640,    45,     0,
     0,    89,     0,    62,     0,     0,     0,   211,     0,   208,
   206,     0,     0,     0,   167,     0,     0,     0,   181,   101,
     0,   180,     0,   238,   236,     0,     0,     0,     0,     0,
   100,    92,    97,   298,   296,     0,     0,     0,   366,     0,
     0,   391,   486,     0,     0,     0,   489,   521,     0,   515,
   523,   516,   518,   517,     0,     0,   100,     0,   543,     0,
     0,     0,   525,   651,   651,     0,     0,     0,     0,     0,
   651,     0,   573,   573,   573,   554,   555,     0,     0,     0,
   569,   102,   526,     0,    79,     0,    72,   548,    84,     0,
     0,     0,    86,     0,    46,    49,    82,     0,   213,   209,
   207,   171,   168,   185,   182,     0,     0,   650,   582,   583,
   584,   585,   586,   587,   588,   589,   590,   591,   592,   593,
   594,   595,   596,   597,   598,   599,   600,   601,     0,   145,
     0,     0,     0,     0,   138,     0,     0,     0,     0,     0,
     0,     0,     0,   107,   108,   136,     0,   133,   283,   242,
   237,   245,   239,   261,   240,   276,   241,    93,     0,   297,
   303,   299,     0,     0,     0,     0,   300,   321,   367,   373,
   368,     0,   487,   493,   490,   488,   524,   519,   530,     0,
     0,     0,     0,     0,     0,   566,   570,   100,   563,     0,
     0,   550,   553,   561,   562,   556,   557,   560,   558,   559,
   565,   564,     0,   567,   100,   572,    77,    73,     0,     0,
     0,   665,   666,    52,    48,     0,   210,     0,     0,     0,
    98,    99,   135,     0,     0,     0,     0,     0,     0,     0,
     0,   130,   129,   131,     0,   153,   151,   148,   150,   149,
     0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   137,   160,     0,     0,     0,     0,    94,     0,   337,
   337,   345,   326,     0,     0,   100,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   415,   417,   370,   392,     0,     0,   100,     0,     0,     0,
     0,     0,   551,   552,   574,     0,   104,     0,     0,    57,
    68,     0,     0,     0,     0,     0,     0,     0,     0,   100,
   100,   100,   100,     0,     0,     0,   100,   212,   214,     0,
     0,   170,   172,     0,     0,     0,   184,   186,     0,   106,
     0,     0,     0,     0,   106,     0,   132,     0,   359,     0,
   128,   127,   124,   125,   126,   120,   122,   121,   123,   116,
   117,   112,   115,   118,   113,   119,   152,   154,   156,     0,
   158,     0,     0,   134,     0,     0,     0,     0,     0,   282,
   284,     0,     0,     0,     0,   102,     0,     0,   244,   246,
     0,     0,     0,   260,   262,     0,     0,     0,   275,   277,
     0,     0,     0,     0,     0,     0,     0,     0,   312,   302,
   304,   351,   351,   351,     0,     0,     0,     0,     0,   651,
     0,     0,     0,   372,   374,     0,     0,   100,     0,     0,
     0,     0,   100,     0,     0,     0,     0,   401,     0,   438,
     0,   445,     0,   453,   460,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   492,   494,     0,     0,     0,     0,     0,     0,   100,   568,
   103,   100,   528,    87,    66,     0,    83,     0,     0,     0,
     0,   100,     0,   100,     0,     0,     0,     0,     0,     0,
   100,     0,     0,     0,   160,   190,     0,     0,   143,     0,
   144,     0,   140,     0,     0,   106,   358,     0,   155,   157,
     0,     0,     0,     0,     0,     0,     0,    87,     0,     0,
   255,     0,     0,     0,     0,     0,   270,   272,     0,   266,
   268,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    87,     0,     0,     0,   106,     0,     0,   352,   353,
   354,   355,   356,   357,     0,   322,   338,     0,   323,     0,
   324,   346,     0,     0,     0,   331,   325,   327,     0,     0,
    87,   385,     0,     0,     0,     0,   387,   389,     0,     0,
   393,     0,     0,   394,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   102,   102,   497,     0,     0,     0,     0,     0,     0,     0,
     0,   105,    67,     0,   216,   217,   222,   223,     0,   226,
     0,   225,   219,   218,    84,   220,   215,     0,   224,   174,
   173,     0,     0,   187,   188,     0,     0,   106,     0,   139,
     0,   110,   159,     0,   161,   285,     0,   287,   288,     0,
   247,   248,     0,     0,     0,    84,   252,   253,   254,   263,
    84,   265,    84,   264,   279,   278,   280,   316,   315,   308,
   306,   307,   305,   309,   311,   317,   314,     0,     0,     0,
     0,   339,     0,   348,     0,     0,     0,   376,   375,   383,
    84,   377,   378,   381,   382,    84,   379,   380,     0,     0,
   100,     0,     0,     0,     0,     0,   100,     0,     0,     0,
   100,     0,     0,   100,   395,   439,     0,     0,   100,     0,
     0,     0,     0,   396,   446,     0,     0,     0,     0,   100,
     0,   397,   454,     0,     0,     0,     0,     0,     0,     0,
     0,   398,   461,   100,     0,   651,     0,     0,     0,     0,
     0,     0,     0,     0,   432,   431,   433,   433,     0,   495,
     0,   651,     0,     0,     0,     0,   100,    53,   100,   100,
     0,   100,   175,   192,   189,     0,   114,     0,     0,   147,
     0,     0,     0,   289,   249,     0,   250,     0,   271,     0,
   267,     0,   318,     0,   343,   344,   342,   106,   347,   106,
   328,   329,     0,     0,     0,     0,   330,   332,   384,     0,
   388,     0,   399,   400,     0,     0,     0,   391,     0,     0,
     0,     0,     0,   391,     0,     0,     0,     0,     0,   391,
     0,     0,     0,     0,     0,     0,     0,   391,     0,     0,
     0,     0,     0,   391,   391,     0,     0,   470,     0,     0,
   421,     0,     0,   424,   425,     0,     0,     0,     0,   420,
     0,     0,     0,     0,   496,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   146,     0,
     0,   111,     0,   286,     0,     0,   273,   269,     0,     0,
   313,   340,   349,     0,     0,     0,     0,   386,   390,     0,
   651,     0,     0,   651,     0,     0,     0,   100,     0,   442,
   440,   441,   443,   100,     0,   449,   447,   448,   450,   451,
   100,   456,     0,   455,   457,   458,   464,   466,     0,     0,
   462,   463,     0,   465,     0,     0,     0,     0,     0,     0,
     0,     0,   651,   434,     0,   500,   500,     0,   651,     0,
     0,     0,     0,   571,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   191,   193,     0,     0,   162,
     0,     0,     0,   310,     0,     0,   333,   334,   335,   336,
   404,     0,     0,   402,     0,     0,   405,     0,     0,   444,
     0,   452,     0,   459,   468,   469,   472,   467,   419,     0,
     0,     0,   429,   430,     0,   416,     0,   651,   437,   418,
   351,   351,   547,     0,   540,   544,     0,     0,     0,   229,
   228,   221,   227,     0,     0,     0,     0,     0,     0,     0,
   142,     0,   251,   319,   106,     0,     0,     0,     0,     0,
     0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   435,   436,     0,     0,     0,   505,   499,     0,
   501,   498,   651,     0,     0,     0,   194,   195,   196,   197,
   198,   199,     0,     0,     0,     0,   407,   408,   391,     0,
     0,   406,     0,     0,   391,     0,     0,     0,   100,     0,
     0,     0,   471,   473,   422,   423,     0,   427,     0,     0,
     0,     0,     0,   502,     0,     0,     0,     0,   141,     0,
     0,     0,     0,     0,   651,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   100,   507,   508,   504,
     0,   106,   542,     0,     0,     0,   256,   341,   350,   403,
   409,     0,   391,     0,   413,   391,   474,   477,   478,   475,
   476,   479,   391,     0,   506,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   545,     0,    54,
     0,     0,   411,   391,   414,     0,   426,   503,     0,     0,
     0,     0,   428,     0,   257,     0,   412,     0,     0,     0,
     0,     0,   410,   546,    87,     0,     0,   258,     0,     0,
     0
};

static const short yydefgoto[] = {  1749,
     1,     2,     3,    20,    21,    22,   109,   196,   290,   533,
   291,   854,  1423,   237,   438,   619,   238,   239,   520,   740,
   853,   323,   435,   324,   458,   194,   361,   318,   362,   114,
   212,   388,   468,   469,  1306,   848,   550,   551,   674,   890,
  1331,   675,   760,  1188,   755,   792,   912,   914,   111,   294,
   372,   544,   749,   873,   112,   295,   377,   546,   750,   878,
  1183,  1428,  1517,   110,   199,   293,   368,   539,   748,   869,
   113,   207,   296,   385,   557,   795,   930,  1205,  1710,  1739,
   558,   796,   935,  1072,  1213,  1069,  1211,   559,   797,   940,
   553,   794,   921,   115,   216,   299,   394,   567,   799,   951,
  1343,  1086,  1440,   568,   698,   955,  1108,  1237,  1358,   952,
  1097,  1348,  1525,   954,  1102,  1350,  1526,  1098,   676,   116,
   220,   300,   399,   487,   571,   804,   965,  1113,  1241,  1119,
  1246,   702,   834,   997,   998,  1307,  1411,  1494,  1134,  1266,
  1136,  1275,  1138,  1283,  1139,  1293,  1483,  1597,  1644,   117,
   224,   301,   405,   575,   835,  1002,  1309,  1561,  1611,  1682,
  1653,   119,   229,   303,   413,    23,   302,   492,   579,    65,
   325,   232,   420,   305,   315,   430,   509,   728,    24,   108,
   677,   170,   104,   105,   171,   172,    29
};

static const short yypact[] = {-32768,
-32768,   172,  3201,   -20,   593,   -39,   -37,   -33,    -2,     7,
    38,    68,    72,    88,   118,    32,   415,   221,  2891,-32768,
-32768,    74,-32768,-32768,  1829,-32768,-32768,    53,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   193,
-32768,   349,-32768,   358,   368,   370,   388,   398,-32768,   411,
-32768,   425,   464,   467,   503,   516,   547,   549,   558,   561,
   577,   331,   374,   376,-32768,-32768,-32768,   377,   600,   380,
   393,   407,   417,-32768,-32768,-32768,-32768,-32768,   424,   436,
   450,   471,   476,   487,   491,   505,   511,   530,   546,   554,
   566,   569,   571,   574,   601,   608,   610,   616,  2849,  2849,
  2849,  2771,  2922,-32768,   627,-32768,   593,  -194,   496,    23,
   -16,   173,    40,   161,    42,    44,    49,   693,    52,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   794,   794,   162,  1026,
-32768,   838,   847,  2849,  2849,  2849,  2849,  2849,  2849,  2849,
  2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,
  2849,  2849,  2849,  2849,  2849,-32768,     2,     2,  3946,  2922,
   186,-32768,  2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,
  2849,  2849,  2849,  2849,  2849,  2849,  2849,  2849,-32768,-32768,
   634,   860,-32768,   864,-32768,   235,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -141,   654,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   675,  1522,  1522,    82,-32768,    30,-32768,-32768,   686,-32768,
   213,   689,   699,  1823,  3015,  3973,  4000,  4027,  4054,  4081,
  4108,  4135,  4162,  4189,  4216,  3088,  4243,  4270,  4297,  4324,
  4351,  4378,  3120,  3141,  3174,-32768,-32768,  2771,  2943,  2964,
  2831,  1426,   957,   957,   688,   688,   688,   688,   274,   274,
     2,     2,     2,     2,   593,-32768,   718,   111,   711,-32768,
-32768,-32768,     3,   268,   155,   322,   160,-32768,   336,   441,
   644,   729,   278,   162,   469,-32768,   162,   162,   137,   731,
   735,   745,   756,   764,-32768,-32768,   740,-32768,   988,   775,
-32768,  2771,-32768,-32768,   777,-32768,-32768,-32768,  1006,  2849,
  2849,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2849,-32768,-32768,-32768,-32768,-32768,-32768,  2849,  2849,
  2849,  2922,-32768,  2849,  2849,   795,  2810,  1742,  1014,  1958,
   827,   828,-32768,    35,  1023,  1028,-32768,-32768,   808,  1031,
-32768,-32768,   848,   179,  1070,-32768,-32768,   852,  1071,  1075,
   855,   856,   858,-32768,-32768,   889,   865,    95,  1082,  1083,
   866,   868,-32768,-32768,  1086,   869,-32768,-32768,-32768,  1092,
   872,  1094,  1095,-32768,-32768,-32768,  1097,   878,  1100,   593,
  1102,-32768,-32768,   888,-32768,-32768,-32768,-32768,-32768,  1106,
   938,-32768,   179,-32768,   893,  2771,   901,   902,   904,   126,
   170,-32768,  2888,  1168,   215,   265,  1021,    13,   912,  3206,
  3227,  4405,  4432,  4459,  4486,  4810,  4810,-32768,-32768,  4810,
    92,  1127,   915,  2849,  3605,-32768,   163,   183,   922,-32768,
  1146,    39,-32768,  1149,-32768,   939,   956,  1151,-32768,  1172,
-32768,  1174,    46,-32768,-32768,-32768,   179,   987,  1177,  1205,
  1204,    60,-32768,-32768,    63,-32768,   995,    70,-32768,   996,
  1216,   998,  1220,-32768,  1221,  1222,  1224,-32768,   675,  1227,
  1005,  2771,   300,  2771,  2771,  2771,  1228,  2892,-32768,  1232,
  1218,  4810,-32768,  3636,-32768,    16,-32768,   162,-32768,-32768,
-32768,-32768,  2849,  2849,-32768,-32768,-32768,-32768,-32768,  1044,
  3667,-32768,   163,-32768,  1236,  1242,  1245,-32768,   379,-32768,
-32768,  1032,  1250,   414,-32768,   446,  2849,  1253,-32768,-32768,
  1697,-32768,   449,-32768,-32768,  1254,   457,   461,   463,  1255,
   179,-32768,-32768,-32768,-32768,  1258,   478,   269,-32768,  1260,
   489,-32768,-32768,  1261,   492,  1262,-32768,-32768,    74,-32768,
  1043,-32768,-32768,-32768,  1045,  1048,   179,   500,-32768,   508,
   510,   537,-32768,  2045,  2045,  1049,  1271,   182,  2849,  2849,
  2045,  2849,  1272,-32768,-32768,-32768,-32768,  2849,  1273,    77,
-32768,  1053,-32768,  2849,-32768,    17,-32768,-32768,   196,  4513,
  4540,  1230,-32768,  1276,-32768,-32768,  1054,   542,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  4567,  1063,   153,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1065,-32768,
  1066,  1068,  1069,  1078,-32768,  1286,  1697,  1697,  1697,  1697,
  1292,   177,  1294,  4885,   -79,  1080,  1080,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1295,-32768,
-32768,-32768,  1079,  1111,  1112,  1113,-32768,-32768,-32768,-32768,
-32768,   630,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2849,
  1073,  1115,  1120,  1128,  1129,-32768,-32768,   179,-32768,   593,
   593,-32768,  4810,  4810,-32768,  4810,-32768,  1298,  1298,  1298,
  4810,-32768,  2771,  4810,   179,-32768,  4810,-32768,   202,  1132,
   178,-32768,-32768,-32768,-32768,  2849,-32768,   881,   119,   251,
-32768,-32768,-32768,  1131,  1138,  1131,  1697,  1355,  1356,  1143,
  1159,  1162,  1162,  1162,  4862,-32768,-32768,-32768,-32768,-32768,
    27,-32768,  1697,  1697,  1697,  1697,  1697,  1697,  1697,  1697,
  1697,  1697,  1697,  1697,  1697,  1697,  1697,  1697,  1373,  1377,
  1289,-32768,  1163,   705,   563,     4,   345,-32768,   883,-32768,
-32768,-32768,-32768,   955,    43,    81,  1170,  1176,  1178,  1179,
  1180,  1181,  1182,  1184,  1381,   305,   317,   362,  1166,  1185,
  1187,  1193,  1198,  1171,  1206,  1199,  1213,  1215,  1212,  1217,
-32768,-32768,-32768,-32768,     5,  3248,   179,  2771,  2771,  2771,
  2771,  1203,-32768,-32768,-32768,   544,-32768,   575,  1433,-32768,
-32768,  1436,    30,  1223,  3698,   162,   162,   162,   162,   158,
   164,   179,   179,  1226,  1437,  1439,   174,-32768,-32768,   166,
  1440,-32768,-32768,  1231,  1442,  1443,-32768,-32768,  1229,-32768,
  1233,  1727,  1239,  1235,-32768,  1240,-32768,  1237,-32768,  1697,
  4904,  4922,  1974,  1974,  1974,  1003,  1003,  1003,  1003,   647,
   647,  1162,  1162,  1162,  1162,  1162,-32768,-32768,-32768,  1241,
  4885,   290,  2732,-32768,  1444,   165,   165,  1448,  1460,-32768,
-32768,  1461,  1462,  1464,  1244,  1053,   162,   162,-32768,-32768,
  1468,    54,    56,-32768,-32768,  1470,  1471,  1472,-32768,-32768,
  1474,  1475,   255,  1476,  1477,  1480,  1482,   162,-32768,-32768,
-32768,   741,  1682,   360,   207,  1486,  1488,    57,   593,  2045,
   593,    64,  1489,-32768,-32768,  1490,  1495,   179,  1494,  1497,
  1498,  1500,   179,  1501,  1503,  1509,  1511,-32768,  2849,-32768,
  2849,-32768,  2849,-32768,-32768,   162,   593,  1512,  1513,  1515,
  1520,  1527,  1529,  1531,  1532,  1534,  1275,  1320,  1316,  1549,
-32768,-32768,  2849,  1330,   579,   605,   611,   645,   179,-32768,
-32768,   179,-32768,   996,-32768,  1335,-32768,  1552,  1553,  1555,
  1557,   179,  1560,   179,  1561,  1563,  1565,  1570,  1573,  1580,
   179,  1584,  1585,  1587,  1163,-32768,  1588,  1590,-32768,  1382,
-32768,  1697,-32768,  1383,  1391,-32768,-32768,  2991,-32768,-32768,
  1697,  1394,   659,  1608,  1524,  1612,  1613,   996,  1614,    71,
  1396,  1618,  1617,  1621,  1627,  1634,-32768,-32768,  1637,-32768,
-32768,  1638,  1639,  1640,  1641,  1644,  1645,  1646,  1647,  1648,
  1649,   996,  1650,  1651,  1653,-32768,  1656,  1662,-32768,-32768,
-32768,-32768,-32768,-32768,   162,-32768,-32768,  1452,-32768,   162,
-32768,-32768,  1459,  1668,  1679,-32768,-32768,-32768,  1678,  1680,
   996,-32768,  1691,  1692,  1696,  1698,-32768,-32768,  1700,  1701,
-32768,  1491,  1537,-32768,  1481,  1483,  1525,  1564,  1556,  1568,
  1571,  1572,  3269,   354,  3290,   595,  3311,   209,   850,  1578,
  1577,  1609,  1610,  1523,  1654,  1611,  1660,  1661,  1664,  1615,
    67,    67,-32768,  1703,  3729,  1526,  1619,  1655,  1667,  1669,
  1666,-32768,-32768,    30,-32768,-32768,-32768,-32768,  1670,-32768,
  1671,-32768,-32768,-32768,  1673,-32768,-32768,  1675,-32768,-32768,
-32768,  1833,   667,-32768,-32768,   162,  4837,-32768,  2849,-32768,
  1681,-32768,  4885,   162,-32768,-32768,  1871,-32768,-32768,  1883,
-32768,-32768,  1889,  1809,  1898,  1673,-32768,-32768,-32768,-32768,
   676,-32768,   681,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1687,  1903,  1904,
  1906,-32768,  1907,-32768,  1909,  1910,   297,-32768,-32768,-32768,
   696,-32768,-32768,-32768,-32768,   698,-32768,-32768,  1911,  1912,
   179,  1917,  1929,  1709,  2849,  1937,   179,   162,  2849,  1717,
   179,  2849,  2849,   179,-32768,-32768,  2849,  1719,   179,  2849,
  2849,  2849,  2849,-32768,-32768,  2849,  2849,  1720,  2849,   179,
  2849,-32768,-32768,  2849,  1942,  1722,  1723,  2849,  2849,  1724,
  2849,-32768,-32768,   179,  1944,  2045,  2849,  1946,  1947,  1951,
  1953,  1954,   162,  1957,-32768,-32768,-32768,-32768,    47,-32768,
  1740,  2045,  2771,  1743,  2771,  2771,   179,-32768,   179,   179,
  1969,   179,-32768,-32768,-32768,  1752,-32768,  1753,  3332,-32768,
  1697,  1780,  1995,-32768,-32768,  1998,-32768,  1999,-32768,  2001,
-32768,  2005,  1787,  2004,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1131,  1131,  1131,   162,-32768,-32768,-32768,  2007,
-32768,  2008,-32768,-32768,  1794,  1789,  1791,-32768,  3353,  1797,
  1810,  1802,  3374,-32768,  2011,   303,   335,  2030,  3395,-32768,
  2031,   419,   454,   614,   679,  3416,   809,-32768,  1211,  2034,
  1465,  1674,  2035,-32768,-32768,  2002,  2341,-32768,  2370,  1822,
-32768,  1817,  3437,-32768,-32768,  1824,  1832,  1835,  1826,-32768,
   334,   338,  1862,  1867,-32768,  2849,  1872,   702,  2849,   706,
   732,  1834,  1873,  1881,  1884,  1877,  1886,   406,-32768,  1887,
  2849,  4885,  1895,-32768,  2103,  1896,-32768,-32768,  2106,  2118,
-32768,-32768,-32768,  2119,  2120,  2121,  2129,-32768,-32768,  2136,
  2045,  2849,   992,  2045,  2139,  2138,  2142,   179,  1219,-32768,
-32768,-32768,-32768,   179,  1398,-32768,-32768,-32768,-32768,-32768,
   179,-32768,  1453,-32768,-32768,-32768,-32768,-32768,  1966,  2009,
-32768,-32768,   739,-32768,  2141,  2849,   593,  2849,  2143,  2144,
   593,  2146,  1790,-32768,  2158,-32768,-32768,  3760,  2045,  1939,
  3791,  1943,  1945,-32768,  1952,  2162,  2175,  2182,  2183,  2187,
  2849,  2849,  2849,  2849,  2849,-32768,-32768,  1968,  3822,-32768,
  2101,  2189,  1977,-32768,  1976,  1981,-32768,-32768,-32768,-32768,
-32768,  1989,  4594,  2089,  1990,  1992,-32768,  1996,  1993,-32768,
  1994,-32768,   343,-32768,-32768,-32768,-32768,-32768,-32768,  4621,
  2003,  3458,-32768,-32768,   747,-32768,   593,  2045,-32768,-32768,
   639,   879,-32768,  2000,-32768,-32768,  1997,  2771,    30,-32768,
-32768,-32768,-32768,  2219,  2398,  2427,  2448,  2475,  2496,  2849,
-32768,  2222,-32768,-32768,-32768,  1131,  2223,  2224,  2006,  2849,
  2849,  2226,   179,  2849,  2012,  2849,   447,  2227,  2228,  2849,
  2230,   593,-32768,-32768,  2234,  2236,  2237,-32768,-32768,  2023,
-32768,-32768,  2045,  2849,   749,  2016,-32768,-32768,-32768,-32768,
-32768,-32768,  3853,  2019,  2025,  2026,-32768,-32768,-32768,  4648,
  3479,-32768,  2027,  3500,-32768,  4675,  2244,  2849,   179,  2245,
   162,  2246,-32768,-32768,-32768,-32768,  4702,-32768,  2024,  2247,
  2249,  2250,   162,-32768,  2032,  3521,  2037,  2849,-32768,  2251,
  2254,  2255,  2149,  2258,  2045,  2040,  2849,  2192,  2041,  2261,
  2517,  2262,  2269,  2277,  2280,  2059,   179,-32768,-32768,-32768,
  2281,-32768,-32768,  2849,  2064,  4729,-32768,-32768,-32768,-32768,
-32768,  2063,-32768,  4756,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  2066,-32768,  2073,  3884,  2849,  2298,  2181,
  2849,  2235,  2080,  2278,  2321,  2301,  2302,-32768,  3542,-32768,
   162,  3563,-32768,-32768,-32768,  2303,-32768,-32768,  2849,  2304,
  2849,  2364,-32768,  3584,-32768,  4783,-32768,  2849,  2208,  2320,
  3915,  2248,-32768,-32768,   996,  2323,  2104,-32768,  2328,  2333,
-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -213,-32768,-32768,  -266,    83,-32768,-32768,
  1416,  -432,-32768,  -282,-32768,  -371,  -459,  -485,-32768,-32768,
-32768,-32768,  -168,-32768,  -599,-32768,  -873,-32768,  -579,-32768,
-32768,-32768,-32768,-32768,-32768,  1659,-32768,  1302,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1811,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1550,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -950,  -613,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768, -1344,-32768,-32768,-32768,  1200,  1046,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   873,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1859,-32768,  1783,
-32768,  2233,-32768,  1874,  2147,  -305,-32768,   399,   802,-32768,
-32768,   -25,  -329,  -586,  -138,   -15,  -106
};


#define	YYLAST		5139


static const short yytable[] = {   103,
   191,   241,   543,  1103,   576,   521,  1040,   716,   717,   106,
   431,  1045,   736,   556,   725,   319,   480,   320,   319,   319,
   320,   320,   566,  1453,   753,   570,   192,     4,   574,  1459,
   387,   888,   319,   193,   320,  1465,    40,   414,     6,   459,
   421,   422,   424,  1473,     4,   541,     4,   966,     4,  1479,
  1480,  1413,   555,     4,    25,     6,     4,     6,  1067,     6,
  1070,  1111,   519,   516,     6,   999,   565,     6,  1117,   569,
   364,  1305,   365,   167,   168,   169,   573,  1202,   297,    66,
    67,   166,   366,   931,  1000,   932,   537,   762,   763,   764,
   765,   466,   933,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,    97,    98,   244,   245,
   246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
   256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
   879,   234,   881,   789,   452,   790,  1414,   269,   270,   271,
   272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
   282,   283,   284,   467,   234,   209,   234,   534,   466,   534,
   234,    -2,  1191,   870,   466,    25,     6,   882,   356,   767,
    30,   768,   851,   436,   466,   871,    26,    27,    31,   466,
    28,   235,    32,   891,   892,   893,   894,   895,   896,   897,
   898,   899,   900,   901,   902,   903,   904,   905,   906,   201,
   202,   911,  1228,   210,   235,  1033,   235,   235,   188,   235,
   235,   678,   373,    33,   189,   616,   374,    49,   852,   367,
   934,  1001,    34,   617,   375,    62,    63,    64,   321,   288,
   467,   322,   352,   535,   322,   322,   467,   741,   197,   198,
     6,   618,   353,   889,   501,   321,   467,    41,   322,  1078,
   460,   467,   967,    35,   542,   205,   206,   214,   215,   218,
   219,   542,   107,  1415,   222,   223,  1104,   227,   228,  1068,
  1277,  1071,  1112,   289,  1663,   542,    99,   503,   542,  1118,
  1668,   100,   735,    36,   101,   542,   542,    37,   769,  1105,
   968,   -62,   733,   496,   440,   441,   358,   317,   560,  1461,
  1048,   -62,   739,    38,  1328,   479,   442,   140,   874,   624,
   875,   876,   193,   443,   444,   445,  1063,  1278,   446,   447,
   359,   450,   103,   738,   455,   369,   360,   678,   678,   678,
   678,  1462,   106,    39,  1079,   872,   507,   370,  1712,  1279,
  1280,  1714,   118,   508,  1080,   120,   770,   407,  1715,   236,
  1353,  1354,   423,   588,   121,   590,   591,   592,   693,   694,
   695,   696,  -602,  1115,   122,   378,   123,  1022,   673,  1732,
   386,   376,   236,  1024,   236,   236,   720,   211,   236,   721,
   510,   379,   689,  1031,   124,  1355,   408,   508,   203,   204,
  1281,   380,   381,   536,   125,   389,  1356,   512,   514,   382,
   193,   383,   267,   268,   936,   390,   -65,   126,   711,    42,
  1015,    43,   849,   193,   937,  1467,   938,   678,   531,   508,
   391,   127,  1106,  1107,   392,  1282,   409,    44,   410,   327,
   268,   515,   193,   678,   678,   678,   678,   678,   678,   678,
   678,   678,   678,   678,   678,   678,   678,   678,   678,   411,
  1468,   678,  1187,  1089,  1090,  1091,  1092,  1093,  1094,  1100,
   128,  1193,  1260,   129,  1442,  1261,  1443,   877,  1510,  1511,
  1512,  1513,  1514,  1515,   185,   186,   187,  1262,  1263,  1264,
   188,   722,   268,   517,   371,   697,   189,   620,   621,   174,
   175,   176,   177,   178,   412,   179,   180,   181,   182,   130,
  1050,   183,   184,   185,   186,   187,  1637,  1051,  1638,   188,
   395,   636,   131,  1357,   979,   189,   589,   268,  1163,  1639,
   980,   174,   175,   176,   177,   178,   981,   179,   180,   181,
   182,  1640,   982,   183,   184,   185,   186,   187,   384,   842,
   137,   188,   396,   132,  1492,   133,  1641,   189,  1495,   397,
   678,  1493,   393,  1595,   134,  1493,   847,   135,   103,   103,
  1596,   939,  1200,   723,   724,   103,   726,    45,   106,   106,
  1265,   983,   731,   136,   734,   106,  1101,   984,   737,  1018,
  1019,  1020,  1021,   138,   846,   139,  1224,    26,    27,   142,
  1203,    28,   140,  1034,   629,   630,   141,    46,    47,    48,
  1610,  1610,   143,   843,   844,   174,   175,   176,   177,   178,
  1469,   179,   180,   181,   182,  1240,   144,   183,   184,   185,
   186,   187,  1516,   190,   805,   188,   145,   969,  1642,   632,
   633,   189,   922,   146,   923,   924,   925,   926,   927,   928,
   174,   175,   176,   177,   178,   147,   179,   180,   181,   182,
  1064,  1065,   183,   184,   185,   186,   187,   398,  1004,   148,
   188,   634,   635,  1643,   679,   680,   189,   415,   416,   417,
   418,  1085,   682,   683,   836,  1470,   684,   685,   686,   687,
   149,  1023,  1025,  1026,  1027,   150,   419,   226,  1032,  1005,
  1006,  1007,  1008,   691,   692,  1605,   151,  1606,  1607,  1402,
   152,  1625,   678,  1268,   700,   701,  1269,   704,   705,  1140,
   855,   678,   195,   400,   153,  1417,   712,   268,  1270,  1271,
   154,  1318,  1272,  1273,   713,   268,   714,   268,   401,  1444,
  1445,  1446,  1089,  1090,  1091,  1092,  1093,  1094,  1608,   155,
   806,  1432,   807,   808,   809,   810,   402,   811,   812,   813,
   814,   815,   816,   715,   268,   156,   817,   629,   747,   818,
  1010,   268,   819,   157,  1053,   820,   821,   822,   823,   824,
   825,   826,   827,   828,   829,   158,   915,   830,   159,   929,
   160,   916,   831,   161,   832,   917,   918,   919,   231,  1123,
   403,  1011,  1012,  1321,  1128,  1157,   268,  1087,  1706,  1088,
   174,   175,   176,   177,   178,  1472,   179,   180,   181,   182,
   162,  1274,   183,   184,   185,   186,   187,   163,  1231,   164,
   188,  1158,   268,  1233,  1338,   165,   189,  1159,   268,  1340,
  1161,  1342,   242,  1162,  1089,  1090,  1091,  1092,  1093,  1094,
  1095,   243,  1114,  1169,  1116,  1171,   833,   784,   785,   786,
   787,   285,  1178,   788,  1532,  1609,   286,  1535,   287,  1360,
   404,  1160,   268,   298,  1362,   174,   175,   176,   177,   178,
  1141,   179,   180,   181,   182,  1195,   268,   183,   184,   185,
   186,   187,  1324,  1325,   304,   188,   183,   184,   185,   186,
   187,   189,  1339,   193,   188,   326,  1559,  1341,   193,   328,
   189,   200,  1564,   357,   208,   213,   217,   221,   225,  1326,
   230,  1284,  1359,   193,  1361,   193,   329,  1332,  1500,   268,
   363,   920,  1502,   268,   103,   856,   857,   858,   859,   860,
   861,   862,   863,   864,   106,  1605,   865,  1606,  1607,   941,
   866,   942,   943,  1133,   406,  1135,   425,  1137,  1503,   268,
   426,  1285,   944,   867,  1547,  1548,   432,  1096,  1286,  1287,
   427,  1604,  1626,  1601,  1602,  1657,   268,  1155,   945,   946,
   947,   428,  1089,  1090,  1091,  1092,  1093,  1094,  1608,   429,
  1288,  1372,   948,  1289,  1290,   433,   805,   292,  1055,  1056,
   434,   678,   729,   730,   437,   174,   175,   176,   177,   178,
   439,   179,   180,   181,   182,   448,   453,   183,   184,   185,
   186,   187,   456,   457,   956,   188,  1655,   461,    66,    67,
    68,   189,   462,   463,   957,   464,  1409,    70,    71,    72,
    73,  1291,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,    97,    98,   958,   959,   960,
   961,   962,   963,   465,   470,   472,  1292,   471,  1692,   473,
   474,   475,  1365,   476,   477,   478,   481,   482,  1371,  1447,
   485,   483,  1375,   484,   486,  1378,   488,   489,   490,   491,
  1381,   493,   949,   494,   495,  1612,   497,   868,   498,   950,
   499,  1390,   806,   500,   807,   808,   809,   810,   502,   811,
   812,   813,   814,   815,   816,  1400,   504,   505,   817,   506,
   518,   818,   522,   529,   819,   530,  1616,   820,   821,   822,
   823,   824,   825,   826,   827,   828,   829,   538,  1422,   830,
  1424,  1425,   540,  1427,   831,   545,   832,   549,   547,   179,
   180,   181,   182,  1329,  1660,   183,   184,   185,   186,   187,
    66,    67,   166,   188,  1418,   548,  1420,  1421,   552,   189,
   554,   964,   561,   562,    74,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,    97,    98,   563,
   564,   782,   783,   784,   785,   786,   787,  1474,  1534,   788,
   572,   317,   577,   805,   578,   614,   580,   582,   583,  1369,
   584,   586,   587,  1373,   593,    99,  1376,  1377,   613,   622,
   100,  1379,   625,   101,  1382,  1383,  1384,  1385,   626,   627,
  1386,  1387,   240,  1389,   454,  1391,   631,   637,  1392,  1746,
   681,   688,  1396,  1397,   690,  1399,   699,   703,   706,   708,
   103,  1403,   709,   710,   718,   719,   727,   732,   735,   746,
   106,   744,   745,   752,   754,   756,   103,   757,   758,  1539,
   761,    66,    67,   638,   766,  1541,   106,   759,   771,   791,
   837,   798,  1543,   845,   800,    74,    75,    76,    77,    78,
   639,   640,   641,   642,   643,   644,   645,   646,   647,   648,
   649,   650,   651,   652,   653,   654,   655,   656,   657,   658,
   659,   660,   661,   662,   663,   664,   801,   802,   803,   806,
   838,   807,   808,   809,   810,   839,   811,   812,   813,   814,
   815,   816,   850,   840,   841,   817,   673,   880,   818,   883,
   884,   819,   885,   886,   820,   821,   822,   823,   824,   825,
   826,   827,   828,   829,  1674,   907,   830,    99,   788,   908,
  1551,   831,   100,   832,  1555,   101,  1681,   978,   913,   970,
  1498,   985,   665,  1501,   513,   971,   990,   972,   973,   974,
   975,   976,   805,   977,   986,  1519,   987,   174,   175,   176,
   177,   178,   988,   179,   180,   181,   182,   989,   992,   183,
   184,   185,   186,   187,  1633,   103,  1533,   188,   103,  1615,
  1009,   991,   993,   189,   994,   106,   996,   995,   106,  1013,
  1014,  1029,  1016,  1030,  1035,  1540,  1037,  1038,  1054,  1039,
  1603,  1028,   851,  1041,  1730,  1044,  1036,   805,  1043,  1046,
  1550,  1049,  1552,  1047,  1058,  1059,  1060,   103,  1061,  1062,
  1672,  1476,  1066,   103,  1073,  1074,  1075,   106,  1076,  1077,
  1081,  1082,  1083,   106,  1084,  1575,  1576,  1577,  1578,  1579,
  1109,   666,  1110,  1120,  1151,  1649,  1121,   667,   668,  1122,
  1124,  1125,  1126,   669,  1127,  1129,   670,  1130,  1704,   909,
   910,   671,   672,  1131,   673,  1132,  1142,  1143,   806,  1144,
   807,   808,   809,   810,  1145,   811,   812,   813,   814,   815,
   816,  1146,   103,  1147,   817,  1148,  1149,   818,  1150,  1152,
   819,  1153,   106,   820,   821,   822,   823,   824,   825,   826,
   827,   828,   829,  1154,  1623,   830,  1156,  1164,  1165,  1166,
   831,  1167,   832,  1168,  1630,  1631,  1170,  1172,  1634,  1173,
  1636,  1174,  1175,   806,  1647,   807,   808,   809,   810,  1176,
   811,   812,   813,   814,   815,   816,  1177,   103,  1656,   817,
  1179,  1180,   818,  1181,  1184,   819,  1185,   106,   820,   821,
   822,   823,   824,   825,   826,   827,   828,   829,  1189,  1186,
   830,  1190,  1671,  1194,  1196,   831,  1197,   832,  1198,  1199,
  1201,  1204,  1206,  1207,  1542,   177,   178,  1208,   179,   180,
   181,   182,  1686,  1209,   183,   184,   185,   186,   187,   103,
  1210,  1694,   188,  1212,  1214,  1215,  1216,  1217,   189,   106,
  1218,  1219,  1220,  1221,  1222,  1223,  1225,  1226,  1707,  1227,
  1229,   174,   175,   176,   177,   178,  1230,   179,   180,   181,
   182,  1232,  1235,   183,   184,   185,   186,   187,  1234,  1544,
  1477,   188,  1719,  1236,  1238,  1722,  1239,   189,   306,   307,
   308,   309,   310,   311,   312,   313,   314,  1242,  1243,    66,
    67,   638,  1244,  1734,  1245,  1736,  1247,  1248,  1251,  1310,
  1252,  1249,  1741,    74,    75,    76,    77,    78,   639,   640,
   641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
   651,   652,   653,   654,   655,   656,   657,   658,   659,   660,
   661,   662,   663,   664,    66,    67,   451,    69,  1087,  1298,
  1088,  1312,  1253,    70,    71,    72,    73,  1250,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,  1255,  1254,  1089,  1090,  1091,  1092,  1093,
  1094,  1095,    66,    67,    68,  1256,   235,  1295,  1257,  1258,
   665,    70,    71,    72,    73,  1294,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    66,    67,    68,    69,  1304,  1296,  1297,  1300,  1323,
    70,    71,    72,    73,  1313,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
   174,   175,   176,   177,   178,  1333,   179,   180,   181,   182,
  1299,  1314,   183,   184,   185,   186,   187,  1301,  1302,  1334,
   188,  1303,  1315,  1317,  1316,  1335,   189,  1319,  1320,   666,
   193,  1330,  1322,  1336,  1337,   667,   668,  1344,  1099,  1345,
  1346,   669,  1347,  1349,   670,  1351,  1352,  1363,  1364,   671,
   672,  1366,   673,   772,   773,   774,   775,   776,   777,   778,
   779,   780,   781,  1367,  1368,   782,   783,   784,   785,   786,
   787,  1370,  1374,   788,  1380,  1388,  1393,  1394,  1395,  1398,
  1401,    99,  1404,  1405,  1042,  1406,   100,  1407,  1408,   101,
    66,    67,   166,  1410,   236,  1416,  1557,   102,  1419,  1558,
   805,  1426,  1429,  1430,    74,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
  1433,  1434,  1435,  1436,   100,  1437,  1439,   101,  1481,  1438,
  1441,  1448,  1449,   805,  1450,   102,  1451,  1460,  1452,   174,
   175,   176,   177,   178,  1455,   179,   180,   181,   182,  1457,
  1456,   183,   184,   185,   186,   187,  1463,  1466,    99,   188,
  1475,  1478,  1485,   100,  1486,   189,   101,    66,    67,    68,
   330,  1488,  1489,  1491,   102,  1490,    70,    71,    72,    73,
  1504,    74,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,    97,    98,   806,  1496,   807,   808,
   809,   810,  1497,   811,   812,   813,   814,   815,   816,  1499,
  1505,  1506,   817,  1508,  1507,   818,  1509,  1518,   819,  1521,
  1523,   820,   821,   822,   823,   824,   825,   826,   827,   828,
   829,  1520,  1522,   830,  1524,  1527,  1528,  1529,   831,   806,
   832,   807,   808,   809,   810,  1530,   811,   812,   813,   814,
   815,   816,  1531,  1536,  1537,   817,  1538,  1549,   818,  1553,
  1554,   819,  1556,   805,   820,   821,   822,   823,   824,   825,
   826,   827,   828,   829,  1560,  1565,   830,    99,  1570,  1567,
  1568,   831,   100,   832,  1569,   101,   778,   779,   780,   781,
   454,  1571,   782,   783,   784,   785,   786,   787,  1572,  1573,
   788,  1574,  1545,  1580,  1582,  1583,   805,  1584,   174,   175,
   176,   177,   178,  1585,   179,   180,   181,   182,  1586,  1587,
   183,   184,   185,   186,   187,  1589,  1592,  1590,   188,  1591,
  1593,  1594,  1614,  1599,   189,  1617,  1624,  1613,  1721,  1627,
  1628,  1629,  1632,  1645,  1646,  1546,  1648,  1635,  1650,   805,
  1651,  1652,  1654,  1658,   542,  1661,  1662,  1666,  1670,  1673,
  1675,  1677,  1745,  1678,    99,  1679,  1680,  1687,  1683,   100,
  1688,  1689,   101,  1685,  1691,  1693,  1696,  1697,  1699,   806,
   102,   807,   808,   809,   810,  1700,   811,   812,   813,   814,
   815,   816,   805,  1701,  1703,   817,  1702,  1705,   818,  1708,
  1711,   819,  1716,  1717,   820,   821,   822,   823,   824,   825,
   826,   827,   828,   829,  1720,  1724,   830,  1727,  1728,  1733,
  1735,   831,   806,   832,   807,   808,   809,   810,  1742,   811,
   812,   813,   814,   815,   816,   805,  1743,  1750,   817,  1747,
  1748,   818,  1751,  1057,   819,   793,  1182,   820,   821,   822,
   823,   824,   825,   826,   827,   828,   829,  1482,   628,   830,
   953,  1308,   581,  1412,   831,   806,   832,   807,   808,   809,
   810,   707,   811,   812,   813,   814,   815,   816,   805,  1562,
   233,   817,   585,     0,   818,  1690,  1484,   819,     0,   316,
   820,   821,   822,   823,   824,   825,   826,   827,   828,   829,
     0,     0,   830,     0,     0,     0,     0,   831,   806,   832,
   807,   808,   809,   810,  1618,   811,   812,   813,   814,   815,
   816,     0,     0,     0,   817,     0,     0,   818,  1695,     0,
   819,     0,     0,   820,   821,   822,   823,   824,   825,   826,
   827,   828,   829,  1619,     0,   830,     0,     0,     0,     0,
   831,   806,   832,   807,   808,   809,   810,     0,   811,   812,
   813,   814,   815,   816,  1620,     0,     0,   817,     0,     0,
   818,  1723,     0,   819,     0,     0,   820,   821,   822,   823,
   824,   825,   826,   827,   828,   829,     0,     0,   830,     0,
     0,  1621,     0,   831,   806,   832,   807,   808,   809,   810,
     0,   811,   812,   813,   814,   815,   816,     0,     0,     0,
   817,     0,  1622,   818,  1725,     0,   819,     0,     0,   820,
   821,   822,   823,   824,   825,   826,   827,   828,   829,     0,
     0,   830,     0,  1698,     0,     0,   831,     0,   832,     0,
     0,     0,     0,     0,     0,     0,     0,   174,   175,   176,
   177,   178,     0,   179,   180,   181,   182,  1726,     0,   183,
   184,   185,   186,   187,     0,     0,     0,   188,     0,     0,
     0,     0,     0,   189,     0,     0,   174,   175,   176,   177,
   178,     0,   179,   180,   181,   182,     0,     0,   183,   184,
   185,   186,   187,     0,     0,     0,   188,     0,     0,     0,
  1737,     0,   189,     0,   174,   175,   176,   177,   178,     0,
   179,   180,   181,   182,     0,     0,   183,   184,   185,   186,
   187,     0,     0,     0,   188,     0,     0,     0,     0,     0,
   189,     0,     0,   174,   175,   176,   177,   178,     0,   179,
   180,   181,   182,     0,     0,   183,   184,   185,   186,   187,
     0,     0,     0,   188,   174,   175,   176,   177,   178,   189,
   179,   180,   181,   182,     0,     0,   183,   184,   185,   186,
   187,     0,     0,     0,   188,     0,     0,     0,     0,     0,
   189,   174,   175,   176,   177,   178,     0,   179,   180,   181,
   182,     0,     0,   183,   184,   185,   186,   187,     0,     0,
     0,   188,   174,   175,   176,   177,   178,   189,   179,   180,
   181,   182,     0,     0,   183,   184,   185,   186,   187,     0,
     0,     0,   188,   174,   175,   176,   177,   178,   189,   179,
   180,   181,   182,     0,     0,   183,   184,   185,   186,   187,
     0,     0,     0,   188,    66,    67,    68,     0,     0,   189,
     0,     0,     0,    70,    71,    72,    73,     0,    74,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    66,    67,    68,     0,     0,     0,     0,
     0,     0,    70,    71,    72,    73,  1052,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    66,    67,   166,   449,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    66,    67,   166,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
   511,    67,   166,    50,     0,     0,     0,    51,     0,     0,
     0,     0,     0,     0,    74,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,    97,    98,   173,
     0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
     0,    99,     0,     0,    53,     0,   100,     0,     0,   101,
   354,     0,   594,     0,     0,     0,     0,    54,     0,    55,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    56,
     0,   355,     0,    57,     0,     0,     0,     0,     0,     0,
    99,     0,     0,     0,    58,   100,     0,     0,   101,     0,
     0,     0,     0,     0,     0,     0,     0,     0,  1192,     0,
     0,    59,     0,     0,     0,     0,   595,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
     0,     0,     0,     0,   100,     0,     0,   101,     0,   176,
   177,   178,     0,   179,   180,   181,   182,   596,     0,   183,
   184,   185,   186,   187,     0,     0,    60,   188,    61,     0,
     0,     0,     0,   189,     0,     0,     0,   597,    99,     0,
     0,     0,     0,   100,     0,     0,   101,     0,   598,   599,
   600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
   610,   611,   612,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    99,     0,     0,
     0,     0,   100,     0,     0,   101,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   174,   175,
   176,   177,   178,     0,   179,   180,   181,   182,     0,     0,
   183,   184,   185,   186,   187,     0,     0,     0,   188,   174,
   175,   176,   177,   178,   189,   179,   180,   181,   182,     0,
     0,   183,   184,   185,   186,   187,     0,     0,     0,   188,
   174,   175,   176,   177,   178,   189,   179,   180,   181,   182,
     0,     0,   183,   184,   185,   186,   187,     0,     0,     0,
   188,     0,     0,     0,     0,     0,   189,   772,   773,   774,
   775,   776,   777,   778,   779,   780,   781,     0,     0,   782,
   783,   784,   785,   786,   787,     4,     0,   788,     0,     0,
     5,   174,   175,   176,   177,   178,     6,   179,   180,   181,
   182,     0,     0,   183,   184,   185,   186,   187,     0,     0,
     0,   188,     0,     0,     0,     0,     0,   189,     0,     0,
     0,     0,   331,     0,     0,     0,     0,     0,     7,     0,
     0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     9,     0,    10,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
     0,     0,     0,    12,   174,   175,   176,   177,   178,     0,
   179,   180,   181,   182,    13,     0,   183,   184,   185,   186,
   187,     0,     0,     0,   188,     0,     0,     0,     0,     0,
   189,    14,     0,     0,     0,   342,   174,   175,   176,   177,
   178,     0,   179,   180,   181,   182,     0,     0,   183,   184,
   185,   186,   187,     0,     0,     0,   188,   174,   175,   176,
   177,   178,   189,   179,   180,   181,   182,   349,     0,   183,
   184,   185,   186,   187,     0,     0,    15,   188,    16,     0,
     0,     0,     0,   189,     0,     0,     0,     0,   350,     0,
   174,   175,   176,   177,   178,     0,   179,   180,   181,   182,
     0,     0,   183,   184,   185,   186,   187,     0,     0,     0,
   188,     0,     0,    17,    18,    19,   189,     0,     0,     0,
     0,   351,   174,   175,   176,   177,   178,     0,   179,   180,
   181,   182,     0,     0,   183,   184,   185,   186,   187,     0,
     0,     0,   188,   174,   175,   176,   177,   178,   189,   179,
   180,   181,   182,   523,     0,   183,   184,   185,   186,   187,
     0,     0,     0,   188,   174,   175,   176,   177,   178,   189,
   179,   180,   181,   182,   524,     0,   183,   184,   185,   186,
   187,     0,     0,     0,   188,   174,   175,   176,   177,   178,
   189,   179,   180,   181,   182,  1003,     0,   183,   184,   185,
   186,   187,     0,     0,     0,   188,   174,   175,   176,   177,
   178,   189,   179,   180,   181,   182,  1259,     0,   183,   184,
   185,   186,   187,     0,     0,     0,   188,   174,   175,   176,
   177,   178,   189,   179,   180,   181,   182,  1267,     0,   183,
   184,   185,   186,   187,     0,     0,     0,   188,   174,   175,
   176,   177,   178,   189,   179,   180,   181,   182,  1276,     0,
   183,   184,   185,   186,   187,     0,     0,     0,   188,   174,
   175,   176,   177,   178,   189,   179,   180,   181,   182,  1431,
     0,   183,   184,   185,   186,   187,     0,     0,     0,   188,
   174,   175,   176,   177,   178,   189,   179,   180,   181,   182,
  1454,     0,   183,   184,   185,   186,   187,     0,     0,     0,
   188,   174,   175,   176,   177,   178,   189,   179,   180,   181,
   182,  1458,     0,   183,   184,   185,   186,   187,     0,     0,
     0,   188,   174,   175,   176,   177,   178,   189,   179,   180,
   181,   182,  1464,     0,   183,   184,   185,   186,   187,     0,
     0,     0,   188,   174,   175,   176,   177,   178,   189,   179,
   180,   181,   182,  1471,     0,   183,   184,   185,   186,   187,
     0,     0,     0,   188,   174,   175,   176,   177,   178,   189,
   179,   180,   181,   182,  1487,     0,   183,   184,   185,   186,
   187,     0,     0,     0,   188,   174,   175,   176,   177,   178,
   189,   179,   180,   181,   182,  1600,     0,   183,   184,   185,
   186,   187,     0,     0,     0,   188,   174,   175,   176,   177,
   178,   189,   179,   180,   181,   182,  1665,     0,   183,   184,
   185,   186,   187,     0,     0,     0,   188,   174,   175,   176,
   177,   178,   189,   179,   180,   181,   182,  1667,     0,   183,
   184,   185,   186,   187,     0,     0,     0,   188,   174,   175,
   176,   177,   178,   189,   179,   180,   181,   182,  1684,     0,
   183,   184,   185,   186,   187,     0,     0,     0,   188,   174,
   175,   176,   177,   178,   189,   179,   180,   181,   182,  1729,
     0,   183,   184,   185,   186,   187,     0,     0,     0,   188,
   174,   175,   176,   177,   178,   189,   179,   180,   181,   182,
  1731,     0,   183,   184,   185,   186,   187,     0,     0,     0,
   188,   174,   175,   176,   177,   178,   189,   179,   180,   181,
   182,  1738,     0,   183,   184,   185,   186,   187,     0,     0,
     0,   188,     0,     0,     0,     0,     0,   189,     0,     0,
     0,   532,   174,   175,   176,   177,   178,     0,   179,   180,
   181,   182,     0,     0,   183,   184,   185,   186,   187,     0,
     0,     0,   188,     0,     0,     0,     0,     0,   189,     0,
     0,     0,   615,   174,   175,   176,   177,   178,     0,   179,
   180,   181,   182,     0,     0,   183,   184,   185,   186,   187,
     0,     0,     0,   188,     0,     0,     0,     0,     0,   189,
     0,     0,     0,   623,   174,   175,   176,   177,   178,     0,
   179,   180,   181,   182,     0,     0,   183,   184,   185,   186,
   187,     0,     0,     0,   188,     0,     0,     0,     0,     0,
   189,     0,     0,     0,  1017,   174,   175,   176,   177,   178,
     0,   179,   180,   181,   182,     0,     0,   183,   184,   185,
   186,   187,     0,     0,     0,   188,     0,     0,     0,     0,
     0,   189,     0,     0,     0,  1311,   174,   175,   176,   177,
   178,     0,   179,   180,   181,   182,     0,     0,   183,   184,
   185,   186,   187,     0,     0,     0,   188,     0,     0,     0,
     0,     0,   189,     0,     0,     0,  1563,   174,   175,   176,
   177,   178,     0,   179,   180,   181,   182,     0,     0,   183,
   184,   185,   186,   187,     0,     0,     0,   188,     0,     0,
     0,     0,     0,   189,     0,     0,     0,  1566,   174,   175,
   176,   177,   178,     0,   179,   180,   181,   182,     0,     0,
   183,   184,   185,   186,   187,     0,     0,     0,   188,     0,
     0,     0,     0,     0,   189,     0,     0,     0,  1581,   174,
   175,   176,   177,   178,     0,   179,   180,   181,   182,     0,
     0,   183,   184,   185,   186,   187,     0,     0,     0,   188,
     0,     0,     0,     0,     0,   189,     0,     0,     0,  1659,
   174,   175,   176,   177,   178,     0,   179,   180,   181,   182,
     0,     0,   183,   184,   185,   186,   187,     0,     0,     0,
   188,     0,     0,     0,     0,     0,   189,     0,     0,     0,
  1718,   174,   175,   176,   177,   178,     0,   179,   180,   181,
   182,     0,     0,   183,   184,   185,   186,   187,     0,     0,
     0,   188,     0,     0,     0,     0,     0,   189,     0,     0,
     0,  1744,   174,   175,   176,   177,   178,     0,   179,   180,
   181,   182,     0,     0,   183,   184,   185,   186,   187,     0,
     0,     0,   188,     0,   266,     0,     0,     0,   189,   174,
   175,   176,   177,   178,     0,   179,   180,   181,   182,     0,
     0,   183,   184,   185,   186,   187,     0,     0,     0,   188,
     0,     0,     0,   332,     0,   189,   174,   175,   176,   177,
   178,     0,   179,   180,   181,   182,     0,     0,   183,   184,
   185,   186,   187,     0,     0,     0,   188,     0,     0,     0,
   333,     0,   189,   174,   175,   176,   177,   178,     0,   179,
   180,   181,   182,     0,     0,   183,   184,   185,   186,   187,
     0,     0,     0,   188,     0,     0,     0,   334,     0,   189,
   174,   175,   176,   177,   178,     0,   179,   180,   181,   182,
     0,     0,   183,   184,   185,   186,   187,     0,     0,     0,
   188,     0,     0,     0,   335,     0,   189,   174,   175,   176,
   177,   178,     0,   179,   180,   181,   182,     0,     0,   183,
   184,   185,   186,   187,     0,     0,     0,   188,     0,     0,
     0,   336,     0,   189,   174,   175,   176,   177,   178,     0,
   179,   180,   181,   182,     0,     0,   183,   184,   185,   186,
   187,     0,     0,     0,   188,     0,     0,     0,   337,     0,
   189,   174,   175,   176,   177,   178,     0,   179,   180,   181,
   182,     0,     0,   183,   184,   185,   186,   187,     0,     0,
     0,   188,     0,     0,     0,   338,     0,   189,   174,   175,
   176,   177,   178,     0,   179,   180,   181,   182,     0,     0,
   183,   184,   185,   186,   187,     0,     0,     0,   188,     0,
     0,     0,   339,     0,   189,   174,   175,   176,   177,   178,
     0,   179,   180,   181,   182,     0,     0,   183,   184,   185,
   186,   187,     0,     0,     0,   188,     0,     0,     0,   340,
     0,   189,   174,   175,   176,   177,   178,     0,   179,   180,
   181,   182,     0,     0,   183,   184,   185,   186,   187,     0,
     0,     0,   188,     0,     0,     0,   341,     0,   189,   174,
   175,   176,   177,   178,     0,   179,   180,   181,   182,     0,
     0,   183,   184,   185,   186,   187,     0,     0,     0,   188,
     0,     0,     0,   343,     0,   189,   174,   175,   176,   177,
   178,     0,   179,   180,   181,   182,     0,     0,   183,   184,
   185,   186,   187,     0,     0,     0,   188,     0,     0,     0,
   344,     0,   189,   174,   175,   176,   177,   178,     0,   179,
   180,   181,   182,     0,     0,   183,   184,   185,   186,   187,
     0,     0,     0,   188,     0,     0,     0,   345,     0,   189,
   174,   175,   176,   177,   178,     0,   179,   180,   181,   182,
     0,     0,   183,   184,   185,   186,   187,     0,     0,     0,
   188,     0,     0,     0,   346,     0,   189,   174,   175,   176,
   177,   178,     0,   179,   180,   181,   182,     0,     0,   183,
   184,   185,   186,   187,     0,     0,     0,   188,     0,     0,
     0,   347,     0,   189,   174,   175,   176,   177,   178,     0,
   179,   180,   181,   182,     0,     0,   183,   184,   185,   186,
   187,     0,     0,     0,   188,     0,     0,     0,   348,     0,
   189,   174,   175,   176,   177,   178,     0,   179,   180,   181,
   182,     0,     0,   183,   184,   185,   186,   187,     0,     0,
     0,   188,     0,     0,     0,   525,     0,   189,   174,   175,
   176,   177,   178,     0,   179,   180,   181,   182,     0,     0,
   183,   184,   185,   186,   187,     0,     0,     0,   188,     0,
     0,     0,   526,     0,   189,   174,   175,   176,   177,   178,
     0,   179,   180,   181,   182,     0,     0,   183,   184,   185,
   186,   187,     0,     0,     0,   188,     0,     0,     0,   527,
     0,   189,   174,   175,   176,   177,   178,     0,   179,   180,
   181,   182,     0,     0,   183,   184,   185,   186,   187,     0,
     0,     0,   188,     0,     0,     0,   528,     0,   189,   174,
   175,   176,   177,   178,     0,   179,   180,   181,   182,     0,
     0,   183,   184,   185,   186,   187,     0,     0,     0,   188,
     0,     0,     0,   742,     0,   189,   174,   175,   176,   177,
   178,     0,   179,   180,   181,   182,     0,     0,   183,   184,
   185,   186,   187,     0,     0,     0,   188,     0,     0,     0,
   743,     0,   189,   174,   175,   176,   177,   178,     0,   179,
   180,   181,   182,     0,     0,   183,   184,   185,   186,   187,
     0,     0,     0,   188,     0,     0,     0,   751,     0,   189,
   174,   175,   176,   177,   178,     0,   179,   180,   181,   182,
     0,     0,   183,   184,   185,   186,   187,     0,     0,     0,
   188,     0,     0,     0,  1588,     0,   189,   174,   175,   176,
   177,   178,     0,   179,   180,   181,   182,     0,     0,   183,
   184,   185,   186,   187,     0,     0,     0,   188,     0,     0,
     0,  1598,     0,   189,   174,   175,   176,   177,   178,     0,
   179,   180,   181,   182,     0,     0,   183,   184,   185,   186,
   187,     0,     0,     0,   188,     0,     0,     0,  1664,     0,
   189,   174,   175,   176,   177,   178,     0,   179,   180,   181,
   182,     0,     0,   183,   184,   185,   186,   187,     0,     0,
     0,   188,     0,     0,     0,  1669,     0,   189,   174,   175,
   176,   177,   178,     0,   179,   180,   181,   182,     0,     0,
   183,   184,   185,   186,   187,     0,     0,     0,   188,     0,
     0,     0,  1676,     0,   189,   174,   175,   176,   177,   178,
     0,   179,   180,   181,   182,     0,     0,   183,   184,   185,
   186,   187,     0,     0,     0,   188,     0,     0,     0,  1709,
     0,   189,   174,   175,   176,   177,   178,     0,   179,   180,
   181,   182,     0,     0,   183,   184,   185,   186,   187,     0,
     0,     0,   188,     0,     0,     0,  1713,     0,   189,   174,
   175,   176,   177,   178,     0,   179,   180,   181,   182,     0,
     0,   183,   184,   185,   186,   187,     0,     0,     0,   188,
     0,     0,     0,  1740,     0,   189,   174,   175,   176,   177,
   178,     0,   179,   180,   181,   182,     0,     0,   183,   184,
   185,   186,   187,     0,     0,     0,   188,     0,     0,     0,
     0,     0,   189,   772,   773,   774,   775,   776,   777,   778,
   779,   780,   781,     0,     0,   782,   783,   784,   785,   786,
   787,     0,     0,   788,     0,     0,     0,  1327,   772,   773,
   774,   775,   776,   777,   778,   779,   780,   781,     0,     0,
   782,   783,   784,   785,   786,   787,     0,     0,   788,     0,
   887,   772,   773,   774,   775,   776,   777,   778,   779,   780,
   781,     0,     0,   782,   783,   784,   785,   786,   787,     0,
     0,   788,   774,   775,   776,   777,   778,   779,   780,   781,
     0,     0,   782,   783,   784,   785,   786,   787,     0,     0,
   788,   775,   776,   777,   778,   779,   780,   781,     0,     0,
   782,   783,   784,   785,   786,   787,     0,     0,   788
};

static const short yycheck[] = {    25,
   107,   140,   462,   954,   490,   438,   880,   594,   595,    25,
   316,   885,   612,   473,   601,     3,   388,     5,     3,     3,
     5,     5,   482,  1368,   638,   485,   221,     5,   488,  1374,
   297,     5,     3,   228,     5,  1380,     5,   304,    16,     5,
   307,   308,   309,  1388,     5,     7,     5,     5,     5,  1394,
  1395,     5,     7,     5,   196,    16,     5,    16,     5,    16,
     5,     5,    50,   435,    16,    61,     7,    16,     5,     7,
    68,     5,    70,    99,   100,   101,     7,     7,   220,     3,
     4,     5,    80,    80,    80,    82,   458,   667,   668,   669,
   670,    11,    89,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   754,     5,   756,   223,   358,   225,   100,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,   187,   188,    83,     5,     5,     5,     5,    11,     5,
     5,     0,  1046,    55,    11,   196,    16,   757,   285,     3,
   220,     5,     5,   322,    11,    67,     5,     6,   226,    11,
     9,    55,   226,   773,   774,   775,   776,   777,   778,   779,
   780,   781,   782,   783,   784,   785,   786,   787,   788,   226,
   227,   791,  1086,    53,    55,    50,    55,    55,   217,    55,
    55,   551,    68,   226,   223,   210,    72,     7,    51,   227,
   227,   227,   226,   516,    80,   162,   163,   164,   226,     5,
    83,   229,   268,   457,   229,   229,    83,   619,   226,   227,
    16,   518,   268,   227,   423,   226,    83,   226,   229,     5,
   226,    83,   220,   226,   226,   226,   227,   226,   227,   226,
   227,   226,   220,   227,   226,   227,    70,   226,   227,   226,
    72,   226,   226,    49,  1629,   226,   210,   426,   226,   226,
  1635,   215,   226,   226,   218,   226,   226,   226,   122,    93,
   220,   220,   226,   410,   330,   331,   196,   226,   477,     7,
   890,   220,   618,   226,  1188,   221,   342,   226,    68,   533,
    70,    71,   228,   349,   350,   351,   926,   119,   354,   355,
   220,   357,   358,   616,   360,    68,   226,   667,   668,   669,
   670,     7,   358,   226,    90,   227,   221,    80,  1693,   141,
   142,  1696,   160,   228,   100,     7,   180,    80,  1703,   223,
    64,    65,   226,   502,     7,   504,   505,   506,   100,   101,
   102,   103,   220,   960,     7,    54,     7,   220,   226,  1724,
   221,   227,   223,   220,   223,   223,   205,   227,   223,   208,
   221,    70,   561,   220,     7,    99,   119,   228,   226,   227,
   192,    80,    81,   221,     7,    70,   110,   433,   434,    88,
   228,    90,   227,   228,    70,    80,   221,     7,   587,     5,
   853,     7,   221,   228,    80,     7,    82,   757,   454,   228,
    95,     7,   226,   227,    99,   227,   159,    23,   161,   227,
   228,   227,   228,   773,   774,   775,   776,   777,   778,   779,
   780,   781,   782,   783,   784,   785,   786,   787,   788,   182,
     7,   791,  1042,   104,   105,   106,   107,   108,   109,   110,
     7,  1051,   119,     7,  1348,   122,  1350,   227,    73,    74,
    75,    76,    77,    78,   211,   212,   213,   134,   135,   136,
   217,   598,   228,   229,   227,   227,   223,   523,   524,   197,
   198,   199,   200,   201,   227,   203,   204,   205,   206,     7,
   221,   209,   210,   211,   212,   213,    70,   228,    72,   217,
    80,   547,     7,   227,   220,   223,   227,   228,  1014,    83,
   226,   197,   198,   199,   200,   201,   220,   203,   204,   205,
   206,    95,   226,   209,   210,   211,   212,   213,   227,   718,
   220,   217,   112,     7,   221,     7,   110,   223,   221,   119,
   890,   228,   227,   221,     7,   228,   735,     7,   594,   595,
   228,   227,  1058,   599,   600,   601,   602,   163,   594,   595,
   227,   220,   608,     7,   610,   601,   227,   226,   614,   856,
   857,   858,   859,   220,   733,   220,  1082,     5,     6,   220,
  1060,     9,   226,   870,   226,   227,     7,   193,   194,   195,
  1561,  1562,   220,   720,   721,   197,   198,   199,   200,   201,
     7,   203,   204,   205,   206,  1111,   220,   209,   210,   211,
   212,   213,   227,     7,     5,   217,   220,   806,   192,   226,
   227,   223,    80,   220,    82,    83,    84,    85,    86,    87,
   197,   198,   199,   200,   201,   220,   203,   204,   205,   206,
   927,   928,   209,   210,   211,   212,   213,   227,   837,   220,
   217,   226,   227,   227,   226,   227,   223,   209,   210,   211,
   212,   948,   226,   227,   710,     7,   226,   227,   226,   227,
   220,   860,   861,   862,   863,   220,   228,     5,   867,   838,
   839,   840,   841,   226,   227,    67,   220,    69,    70,  1296,
   220,  1585,  1042,   119,   226,   227,   122,   226,   227,   986,
   746,  1051,   227,    80,   220,  1312,   227,   228,   134,   135,
   220,  1164,   138,   139,   227,   228,   227,   228,    95,  1353,
  1354,  1355,   104,   105,   106,   107,   108,   109,   110,   220,
   121,  1331,   123,   124,   125,   126,   113,   128,   129,   130,
   131,   132,   133,   227,   228,   220,   137,   226,   227,   140,
   227,   228,   143,   220,   913,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   220,    82,   158,   220,   227,
   220,    87,   163,   220,   165,    91,    92,    93,     5,   968,
   157,   227,   228,  1175,   973,   227,   228,    67,  1682,    69,
   197,   198,   199,   200,   201,     7,   203,   204,   205,   206,
   220,   227,   209,   210,   211,   212,   213,   220,  1095,   220,
   217,   227,   228,  1100,  1206,   220,   223,   227,   228,  1211,
  1009,  1213,     5,  1012,   104,   105,   106,   107,   108,   109,
   110,     5,   959,  1022,   961,  1024,   227,   211,   212,   213,
   214,   228,  1031,   217,  1451,   227,     7,  1454,     5,  1241,
   227,   227,   228,   220,  1246,   197,   198,   199,   200,   201,
   987,   203,   204,   205,   206,   227,   228,   209,   210,   211,
   212,   213,   226,   227,   220,   217,   209,   210,   211,   212,
   213,   223,   227,   228,   217,   220,  1493,   227,   228,   221,
   223,   110,  1499,   196,   113,   114,   115,   116,   117,  1186,
   119,    72,   227,   228,   227,   228,   228,  1194,   227,   228,
   220,   227,   227,   228,   960,    55,    56,    57,    58,    59,
    60,    61,    62,    63,   960,    67,    66,    69,    70,    67,
    70,    69,    70,   979,   226,   981,   226,   983,   227,   228,
   226,   112,    80,    83,   226,   227,   227,   227,   119,   120,
   226,  1558,  1586,   227,   228,   227,   228,  1003,    96,    97,
    98,   226,   104,   105,   106,   107,   108,   109,   110,   226,
   141,  1258,   110,   144,   145,     8,     5,   196,   916,   917,
   226,  1331,   604,   605,   228,   197,   198,   199,   200,   201,
     5,   203,   204,   205,   206,   221,     3,   209,   210,   211,
   212,   213,   196,   196,    70,   217,  1613,     5,     3,     4,
     5,   223,     5,   226,    80,     5,  1303,    12,    13,    14,
    15,   192,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,   113,   114,   115,
   116,   117,   118,   226,     5,     5,   227,   226,  1665,     5,
   226,   226,  1251,   226,   196,   221,     5,     5,  1257,  1356,
     5,   226,  1261,   226,   226,  1264,     5,   226,     5,     5,
  1269,     5,   220,   226,     5,   227,     5,   227,   221,   227,
     5,  1280,   121,   176,   123,   124,   125,   126,   226,   128,
   129,   130,   131,   132,   133,  1294,   226,   226,   137,   226,
   110,   140,   221,     7,   143,   221,  1569,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,   226,  1317,   158,
  1319,  1320,     7,  1322,   163,     7,   165,     7,   220,   203,
   204,   205,   206,  1189,  1624,   209,   210,   211,   212,   213,
     3,     4,     5,   217,  1313,   220,  1315,  1316,     7,   223,
     7,   227,   196,     7,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,     5,
     7,   209,   210,   211,   212,   213,   214,     7,   227,   217,
   226,   226,     7,     5,   227,     8,     7,     7,     7,  1255,
     7,     5,   228,  1259,     7,   210,  1262,  1263,     7,   196,
   215,  1267,     7,   218,  1270,  1271,  1272,  1273,     7,     5,
  1276,  1277,   227,  1279,   223,  1281,     7,     5,  1284,  1745,
     7,     7,  1288,  1289,     7,  1291,     7,     7,     7,   227,
  1296,  1297,   228,   226,   226,     5,     5,     5,   226,   226,
  1296,    52,     7,   221,   220,   220,  1312,   220,   220,  1458,
     5,     3,     4,     5,     3,  1464,  1312,   220,     5,   220,
   228,     7,  1471,     6,   226,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    47,   226,   226,   226,   121,
   226,   123,   124,   125,   126,   226,   128,   129,   130,   131,
   132,   133,   221,   226,   226,   137,   226,   220,   140,     5,
     5,   143,   220,   205,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,  1641,     3,   158,   210,   217,     3,
  1487,   163,   215,   165,  1491,   218,  1653,     7,   226,   220,
  1416,   226,   104,  1419,   227,   220,   226,   220,   220,   220,
   220,   220,     5,   220,   220,  1431,   220,   197,   198,   199,
   200,   201,   220,   203,   204,   205,   206,   220,   220,   209,
   210,   211,   212,   213,  1593,  1451,  1452,   217,  1454,  1568,
   228,   226,   220,   223,   220,  1451,   220,   226,  1454,     7,
     5,     5,   220,     5,     5,   227,     5,     5,     5,   221,
  1557,   226,     5,   221,  1721,   221,   226,     5,   220,   220,
  1486,   221,  1488,   227,     5,     5,     5,  1493,     5,   226,
  1639,     7,     5,  1499,     5,     5,     5,  1493,     5,     5,
     5,     5,     3,  1499,     3,  1511,  1512,  1513,  1514,  1515,
     5,   203,     5,     5,   220,  1602,     7,   209,   210,     5,
     7,     5,     5,   215,     5,     5,   218,     5,  1677,   221,
   222,   223,   224,     5,   226,     5,     5,     5,   121,     5,
   123,   124,   125,   126,     5,   128,   129,   130,   131,   132,
   133,     5,  1558,     5,   137,     5,     5,   140,     5,   220,
   143,   226,  1558,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,     5,  1580,   158,   227,   223,     7,     7,
   163,     7,   165,     7,  1590,  1591,     7,     7,  1594,     7,
  1596,     7,     3,   121,  1600,   123,   124,   125,   126,     7,
   128,   129,   130,   131,   132,   133,     7,  1613,  1614,   137,
     7,     7,   140,     7,     7,   143,     7,  1613,   146,   147,
   148,   149,   150,   151,   152,   153,   154,   155,   226,   228,
   158,   221,  1638,   220,     7,   163,    93,   165,     7,     7,
     7,   226,     5,     7,   227,   200,   201,     7,   203,   204,
   205,   206,  1658,     7,   209,   210,   211,   212,   213,  1665,
     7,  1667,   217,     7,     7,     7,     7,     7,   223,  1665,
     7,     7,     7,     7,     7,     7,     7,     7,  1684,     7,
     5,   197,   198,   199,   200,   201,     5,   203,   204,   205,
   206,   220,     5,   209,   210,   211,   212,   213,   220,   227,
     7,   217,  1708,     5,     7,  1711,     7,   223,   167,   168,
   169,   170,   171,   172,   173,   174,   175,     7,     7,     3,
     4,     5,     7,  1729,     7,  1731,     7,     7,   228,     7,
   228,   221,  1738,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,     3,     4,     5,     6,    67,   227,
    69,   226,   228,    12,    13,    14,    15,   221,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,   228,   221,   104,   105,   106,   107,   108,
   109,   110,     3,     4,     5,   228,    55,   221,   228,   228,
   104,    12,    13,    14,    15,   228,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,     3,     4,     5,     6,   221,   228,   228,   228,     7,
    12,    13,    14,    15,   226,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
   197,   198,   199,   200,   201,     5,   203,   204,   205,   206,
   227,   227,   209,   210,   211,   212,   213,   228,   228,     7,
   217,   228,   226,   228,   226,     7,   223,   228,   228,   203,
   228,   221,   228,    95,     7,   209,   210,   221,   227,     7,
     7,   215,     7,     7,   218,     7,     7,     7,     7,   223,
   224,     5,   226,   197,   198,   199,   200,   201,   202,   203,
   204,   205,   206,     5,   226,   209,   210,   211,   212,   213,
   214,     5,   226,   217,   226,   226,     5,   226,   226,   226,
     7,   210,     7,     7,   228,     5,   215,     5,     5,   218,
     3,     4,     5,     7,   223,   226,   177,   226,   226,   180,
     5,     3,   221,   221,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,   210,
   221,     7,     5,     5,   215,     5,   220,   218,     7,     5,
     7,     5,     5,     5,   221,   226,   228,     7,   228,   197,
   198,   199,   200,   201,   228,   203,   204,   205,   206,   228,
   221,   209,   210,   211,   212,   213,     7,     7,   210,   217,
     7,     7,   221,   215,   228,   223,   218,     3,     4,     5,
   228,   228,   221,   228,   226,   221,    12,    13,    14,    15,
   227,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,   121,   226,   123,   124,
   125,   126,   226,   128,   129,   130,   131,   132,   133,   228,
   228,   221,   137,   227,   221,   140,   221,   221,   143,     7,
     5,   146,   147,   148,   149,   150,   151,   152,   153,   154,
   155,   227,   227,   158,     7,     7,     7,     7,   163,   121,
   165,   123,   124,   125,   126,     7,   128,   129,   130,   131,
   132,   133,     7,     5,     7,   137,     5,     7,   140,     7,
     7,   143,     7,     5,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,     7,   227,   158,   210,     7,   227,
   226,   163,   215,   165,   223,   218,   203,   204,   205,   206,
   223,     7,   209,   210,   211,   212,   213,   214,     7,     7,
   217,     5,   227,   226,    94,     7,     5,   221,   197,   198,
   199,   200,   201,   228,   203,   204,   205,   206,   228,   221,
   209,   210,   211,   212,   213,   127,   221,   228,   217,   228,
   228,   228,   226,   221,   223,     7,     5,   228,    48,     7,
     7,   226,     7,     7,     7,   227,     7,   226,     5,     5,
     5,     5,   220,   228,   226,   221,   221,   221,     5,     5,
     5,   228,     5,     7,   210,     7,     7,     7,   227,   215,
     7,     7,   218,   227,     7,   226,   226,     7,     7,   121,
   226,   123,   124,   125,   126,     7,   128,   129,   130,   131,
   132,   133,     5,     7,   226,   137,     7,     7,   140,   226,
   228,   143,   227,   221,   146,   147,   148,   149,   150,   151,
   152,   153,   154,   155,     7,   226,   158,     7,     7,     7,
     7,   163,   121,   165,   123,   124,   125,   126,   111,   128,
   129,   130,   131,   132,   133,     5,     7,     0,   137,     7,
   227,   140,     0,   918,   143,   677,  1035,   146,   147,   148,
   149,   150,   151,   152,   153,   154,   155,     7,   538,   158,
   801,  1152,   494,  1308,   163,   121,   165,   123,   124,   125,
   126,   579,   128,   129,   130,   131,   132,   133,     5,  1497,
   138,   137,   499,    -1,   140,   227,     7,   143,    -1,   233,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
    -1,    -1,   158,    -1,    -1,    -1,    -1,   163,   121,   165,
   123,   124,   125,   126,     7,   128,   129,   130,   131,   132,
   133,    -1,    -1,    -1,   137,    -1,    -1,   140,   227,    -1,
   143,    -1,    -1,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,     7,    -1,   158,    -1,    -1,    -1,    -1,
   163,   121,   165,   123,   124,   125,   126,    -1,   128,   129,
   130,   131,   132,   133,     7,    -1,    -1,   137,    -1,    -1,
   140,   227,    -1,   143,    -1,    -1,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,    -1,    -1,   158,    -1,
    -1,     7,    -1,   163,   121,   165,   123,   124,   125,   126,
    -1,   128,   129,   130,   131,   132,   133,    -1,    -1,    -1,
   137,    -1,     7,   140,   227,    -1,   143,    -1,    -1,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
    -1,   158,    -1,     7,    -1,    -1,   163,    -1,   165,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   198,   199,
   200,   201,    -1,   203,   204,   205,   206,   227,    -1,   209,
   210,   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,
    -1,    -1,    -1,   223,    -1,    -1,   197,   198,   199,   200,
   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,
   227,    -1,   223,    -1,   197,   198,   199,   200,   201,    -1,
   203,   204,   205,   206,    -1,    -1,   209,   210,   211,   212,
   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
   223,    -1,    -1,   197,   198,   199,   200,   201,    -1,   203,
   204,   205,   206,    -1,    -1,   209,   210,   211,   212,   213,
    -1,    -1,    -1,   217,   197,   198,   199,   200,   201,   223,
   203,   204,   205,   206,    -1,    -1,   209,   210,   211,   212,
   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
   223,   197,   198,   199,   200,   201,    -1,   203,   204,   205,
   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,
    -1,   217,   197,   198,   199,   200,   201,   223,   203,   204,
   205,   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,
    -1,    -1,   217,   197,   198,   199,   200,   201,   223,   203,
   204,   205,   206,    -1,    -1,   209,   210,   211,   212,   213,
    -1,    -1,    -1,   217,     3,     4,     5,    -1,    -1,   223,
    -1,    -1,    -1,    12,    13,    14,    15,    -1,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,     3,     4,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    12,    13,    14,    15,    55,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     3,     4,     5,     3,    -1,    -1,    -1,     7,    -1,    -1,
    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,     8,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
    -1,   210,    -1,    -1,    54,    -1,   215,    -1,    -1,   218,
     8,    -1,    61,    -1,    -1,    -1,    -1,    67,    -1,    69,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
    -1,     8,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
   210,    -1,    -1,    -1,    94,   215,    -1,    -1,   218,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,    -1,
    -1,   111,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,
    -1,    -1,    -1,    -1,   215,    -1,    -1,   218,    -1,   199,
   200,   201,    -1,   203,   204,   205,   206,   146,    -1,   209,
   210,   211,   212,   213,    -1,    -1,   156,   217,   158,    -1,
    -1,    -1,    -1,   223,    -1,    -1,    -1,   166,   210,    -1,
    -1,    -1,    -1,   215,    -1,    -1,   218,    -1,   177,   178,
   179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
   189,   190,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,    -1,    -1,
    -1,    -1,   215,    -1,    -1,   218,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,   198,
   199,   200,   201,    -1,   203,   204,   205,   206,    -1,    -1,
   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,   197,
   198,   199,   200,   201,   223,   203,   204,   205,   206,    -1,
    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,
   197,   198,   199,   200,   201,   223,   203,   204,   205,   206,
    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,
   217,    -1,    -1,    -1,    -1,    -1,   223,   197,   198,   199,
   200,   201,   202,   203,   204,   205,   206,    -1,    -1,   209,
   210,   211,   212,   213,   214,     5,    -1,   217,    -1,    -1,
    10,   197,   198,   199,   200,   201,    16,   203,   204,   205,
   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,
    -1,   217,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,
    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    48,    -1,
    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
    -1,    -1,    -1,    83,   197,   198,   199,   200,   201,    -1,
   203,   204,   205,   206,    94,    -1,   209,   210,   211,   212,
   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
   223,   111,    -1,    -1,    -1,   228,   197,   198,   199,   200,
   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
   211,   212,   213,    -1,    -1,    -1,   217,   197,   198,   199,
   200,   201,   223,   203,   204,   205,   206,   228,    -1,   209,
   210,   211,   212,   213,    -1,    -1,   156,   217,   158,    -1,
    -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,   228,    -1,
   197,   198,   199,   200,   201,    -1,   203,   204,   205,   206,
    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,
   217,    -1,    -1,   193,   194,   195,   223,    -1,    -1,    -1,
    -1,   228,   197,   198,   199,   200,   201,    -1,   203,   204,
   205,   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,
    -1,    -1,   217,   197,   198,   199,   200,   201,   223,   203,
   204,   205,   206,   228,    -1,   209,   210,   211,   212,   213,
    -1,    -1,    -1,   217,   197,   198,   199,   200,   201,   223,
   203,   204,   205,   206,   228,    -1,   209,   210,   211,   212,
   213,    -1,    -1,    -1,   217,   197,   198,   199,   200,   201,
   223,   203,   204,   205,   206,   228,    -1,   209,   210,   211,
   212,   213,    -1,    -1,    -1,   217,   197,   198,   199,   200,
   201,   223,   203,   204,   205,   206,   228,    -1,   209,   210,
   211,   212,   213,    -1,    -1,    -1,   217,   197,   198,   199,
   200,   201,   223,   203,   204,   205,   206,   228,    -1,   209,
   210,   211,   212,   213,    -1,    -1,    -1,   217,   197,   198,
   199,   200,   201,   223,   203,   204,   205,   206,   228,    -1,
   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,   197,
   198,   199,   200,   201,   223,   203,   204,   205,   206,   228,
    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,
   197,   198,   199,   200,   201,   223,   203,   204,   205,   206,
   228,    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,
   217,   197,   198,   199,   200,   201,   223,   203,   204,   205,
   206,   228,    -1,   209,   210,   211,   212,   213,    -1,    -1,
    -1,   217,   197,   198,   199,   200,   201,   223,   203,   204,
   205,   206,   228,    -1,   209,   210,   211,   212,   213,    -1,
    -1,    -1,   217,   197,   198,   199,   200,   201,   223,   203,
   204,   205,   206,   228,    -1,   209,   210,   211,   212,   213,
    -1,    -1,    -1,   217,   197,   198,   199,   200,   201,   223,
   203,   204,   205,   206,   228,    -1,   209,   210,   211,   212,
   213,    -1,    -1,    -1,   217,   197,   198,   199,   200,   201,
   223,   203,   204,   205,   206,   228,    -1,   209,   210,   211,
   212,   213,    -1,    -1,    -1,   217,   197,   198,   199,   200,
   201,   223,   203,   204,   205,   206,   228,    -1,   209,   210,
   211,   212,   213,    -1,    -1,    -1,   217,   197,   198,   199,
   200,   201,   223,   203,   204,   205,   206,   228,    -1,   209,
   210,   211,   212,   213,    -1,    -1,    -1,   217,   197,   198,
   199,   200,   201,   223,   203,   204,   205,   206,   228,    -1,
   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,   197,
   198,   199,   200,   201,   223,   203,   204,   205,   206,   228,
    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,
   197,   198,   199,   200,   201,   223,   203,   204,   205,   206,
   228,    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,
   217,   197,   198,   199,   200,   201,   223,   203,   204,   205,
   206,   228,    -1,   209,   210,   211,   212,   213,    -1,    -1,
    -1,   217,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,
    -1,   227,   197,   198,   199,   200,   201,    -1,   203,   204,
   205,   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,
    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,   223,    -1,
    -1,    -1,   227,   197,   198,   199,   200,   201,    -1,   203,
   204,   205,   206,    -1,    -1,   209,   210,   211,   212,   213,
    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,   223,
    -1,    -1,    -1,   227,   197,   198,   199,   200,   201,    -1,
   203,   204,   205,   206,    -1,    -1,   209,   210,   211,   212,
   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
   223,    -1,    -1,    -1,   227,   197,   198,   199,   200,   201,
    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,   211,
   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,
    -1,   223,    -1,    -1,    -1,   227,   197,   198,   199,   200,
   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,
    -1,    -1,   223,    -1,    -1,    -1,   227,   197,   198,   199,
   200,   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,
   210,   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,
    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,   197,   198,
   199,   200,   201,    -1,   203,   204,   205,   206,    -1,    -1,
   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,    -1,
    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,   197,
   198,   199,   200,   201,    -1,   203,   204,   205,   206,    -1,
    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,
    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,   227,
   197,   198,   199,   200,   201,    -1,   203,   204,   205,   206,
    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,
   217,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
   227,   197,   198,   199,   200,   201,    -1,   203,   204,   205,
   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,
    -1,   217,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,
    -1,   227,   197,   198,   199,   200,   201,    -1,   203,   204,
   205,   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,
    -1,    -1,   217,    -1,   219,    -1,    -1,    -1,   223,   197,
   198,   199,   200,   201,    -1,   203,   204,   205,   206,    -1,
    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,
    -1,    -1,    -1,   221,    -1,   223,   197,   198,   199,   200,
   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,
   221,    -1,   223,   197,   198,   199,   200,   201,    -1,   203,
   204,   205,   206,    -1,    -1,   209,   210,   211,   212,   213,
    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,   223,
   197,   198,   199,   200,   201,    -1,   203,   204,   205,   206,
    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,
   217,    -1,    -1,    -1,   221,    -1,   223,   197,   198,   199,
   200,   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,
   210,   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,
    -1,   221,    -1,   223,   197,   198,   199,   200,   201,    -1,
   203,   204,   205,   206,    -1,    -1,   209,   210,   211,   212,
   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,
   223,   197,   198,   199,   200,   201,    -1,   203,   204,   205,
   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,
    -1,   217,    -1,    -1,    -1,   221,    -1,   223,   197,   198,
   199,   200,   201,    -1,   203,   204,   205,   206,    -1,    -1,
   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,    -1,
    -1,    -1,   221,    -1,   223,   197,   198,   199,   200,   201,
    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,   211,
   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,
    -1,   223,   197,   198,   199,   200,   201,    -1,   203,   204,
   205,   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,
    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,   223,   197,
   198,   199,   200,   201,    -1,   203,   204,   205,   206,    -1,
    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,
    -1,    -1,    -1,   221,    -1,   223,   197,   198,   199,   200,
   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,
   221,    -1,   223,   197,   198,   199,   200,   201,    -1,   203,
   204,   205,   206,    -1,    -1,   209,   210,   211,   212,   213,
    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,   223,
   197,   198,   199,   200,   201,    -1,   203,   204,   205,   206,
    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,
   217,    -1,    -1,    -1,   221,    -1,   223,   197,   198,   199,
   200,   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,
   210,   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,
    -1,   221,    -1,   223,   197,   198,   199,   200,   201,    -1,
   203,   204,   205,   206,    -1,    -1,   209,   210,   211,   212,
   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,
   223,   197,   198,   199,   200,   201,    -1,   203,   204,   205,
   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,
    -1,   217,    -1,    -1,    -1,   221,    -1,   223,   197,   198,
   199,   200,   201,    -1,   203,   204,   205,   206,    -1,    -1,
   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,    -1,
    -1,    -1,   221,    -1,   223,   197,   198,   199,   200,   201,
    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,   211,
   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,
    -1,   223,   197,   198,   199,   200,   201,    -1,   203,   204,
   205,   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,
    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,   223,   197,
   198,   199,   200,   201,    -1,   203,   204,   205,   206,    -1,
    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,
    -1,    -1,    -1,   221,    -1,   223,   197,   198,   199,   200,
   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,
   221,    -1,   223,   197,   198,   199,   200,   201,    -1,   203,
   204,   205,   206,    -1,    -1,   209,   210,   211,   212,   213,
    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,   223,
   197,   198,   199,   200,   201,    -1,   203,   204,   205,   206,
    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,
   217,    -1,    -1,    -1,   221,    -1,   223,   197,   198,   199,
   200,   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,
   210,   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,
    -1,   221,    -1,   223,   197,   198,   199,   200,   201,    -1,
   203,   204,   205,   206,    -1,    -1,   209,   210,   211,   212,
   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,
   223,   197,   198,   199,   200,   201,    -1,   203,   204,   205,
   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,    -1,
    -1,   217,    -1,    -1,    -1,   221,    -1,   223,   197,   198,
   199,   200,   201,    -1,   203,   204,   205,   206,    -1,    -1,
   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,    -1,
    -1,    -1,   221,    -1,   223,   197,   198,   199,   200,   201,
    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,   211,
   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,   221,
    -1,   223,   197,   198,   199,   200,   201,    -1,   203,   204,
   205,   206,    -1,    -1,   209,   210,   211,   212,   213,    -1,
    -1,    -1,   217,    -1,    -1,    -1,   221,    -1,   223,   197,
   198,   199,   200,   201,    -1,   203,   204,   205,   206,    -1,
    -1,   209,   210,   211,   212,   213,    -1,    -1,    -1,   217,
    -1,    -1,    -1,   221,    -1,   223,   197,   198,   199,   200,
   201,    -1,   203,   204,   205,   206,    -1,    -1,   209,   210,
   211,   212,   213,    -1,    -1,    -1,   217,    -1,    -1,    -1,
    -1,    -1,   223,   197,   198,   199,   200,   201,   202,   203,
   204,   205,   206,    -1,    -1,   209,   210,   211,   212,   213,
   214,    -1,    -1,   217,    -1,    -1,    -1,   221,   197,   198,
   199,   200,   201,   202,   203,   204,   205,   206,    -1,    -1,
   209,   210,   211,   212,   213,   214,    -1,    -1,   217,    -1,
   219,   197,   198,   199,   200,   201,   202,   203,   204,   205,
   206,    -1,    -1,   209,   210,   211,   212,   213,   214,    -1,
    -1,   217,   199,   200,   201,   202,   203,   204,   205,   206,
    -1,    -1,   209,   210,   211,   212,   213,   214,    -1,    -1,
   217,   200,   201,   202,   203,   204,   205,   206,    -1,    -1,
   209,   210,   211,   212,   213,   214,    -1,    -1,   217
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
#line 328 "GetDP.y"
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
#line 362 "GetDP.y"
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
#line 403 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 426 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 441 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 443 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 445 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 447 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 449 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 451 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 453 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 455 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 457 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 459 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 461 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 463 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 465 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 467 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 469 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 471 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 473 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 475 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 477 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 479 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 481 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 489 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 506 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 513 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 516 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 519 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 521 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 52:
#line 535 "GetDP.y"
{ 
      Group_S.InitialList = List_Create( 1, 1, sizeof(int)) ;
      List_Add(Group_S.InitialList, &(yyvsp[-3].i)) ;
      Group_S.Type         = MOVINGBAND2D ;  
      Group_S.FunctionType = REGION ;
      Group_S.InitialSuppList = NULL ;
      Group_S.SuppListType = SUPPLIST_NONE ;
    ;
    break;}
case 53:
#line 544 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = yyvsp[-7].i ; 
    ;
    break;}
case 54:
#line 551 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ;
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 55:
#line 561 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 56:
#line 566 "GetDP.y"
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
case 57:
#line 578 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 58:
#line 587 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 59:
#line 598 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 60:
#line 603 "GetDP.y"
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
case 61:
#line 640 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 62:
#line 643 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 63:
#line 655 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 64:
#line 657 "GetDP.y"
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
case 65:
#line 673 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 66:
#line 676 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 67:
#line 679 "GetDP.y"
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
case 68:
#line 730 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 69:
#line 743 "GetDP.y"
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
case 70:
#line 767 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 71:
#line 774 "GetDP.y"
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
case 72:
#line 787 "GetDP.y"
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
case 73:
#line 805 "GetDP.y"
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
case 74:
#line 828 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 75:
#line 832 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; j = (int)yyvsp[-1].l ; List_Add(yyval.l = ListOfInt_L, &j) ; ;
    break;}
case 76:
#line 835 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 77:
#line 844 "GetDP.y"
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
case 78:
#line 858 "GetDP.y"
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
case 79:
#line 892 "GetDP.y"
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
case 80:
#line 905 "GetDP.y"
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
case 82:
#line 929 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 83:
#line 939 "GetDP.y"
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
case 86:
#line 961 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 87:
#line 966 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 88:
#line 967 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 89:
#line 972 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 93:
#line 991 "GetDP.y"
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
case 94:
#line 1011 "GetDP.y"
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
case 97:
#line 1062 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 98:
#line 1082 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 99:
#line 1088 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 100:
#line 1094 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 101:
#line 1097 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 102:
#line 1104 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 104:
#line 1115 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 105:
#line 1118 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 106:
#line 1124 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 107:
#line 1128 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 109:
#line 1140 "GetDP.y"
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
case 110:
#line 1153 "GetDP.y"
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
case 111:
#line 1167 "GetDP.y"
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
case 112:
#line 1182 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 113:
#line 1188 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 114:
#line 1194 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1200 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1206 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1212 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1218 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1224 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1230 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1236 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1242 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1248 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1254 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1260 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1266 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1272 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1278 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1285 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 131:
#line 1293 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1306 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 134:
#line 1312 "GetDP.y"
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
		     (WholeQuantity_S.Case.Function.NbrArguments == -2 )) { 
		      // &&
		      //   ($2)%2 == 0)) {
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
case 135:
#line 1387 "GetDP.y"
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
case 136:
#line 1421 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1430 "GetDP.y"
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
case 138:
#line 1442 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 139:
#line 1444 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 140:
#line 1455 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1457 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-8].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHTransform", yyvsp[-8].c) ;
      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition cannot be used in MHTransform") ;
      WholeQuantity_S.Type = WQ_MHTRANSFORM ; 
      WholeQuantity_S.Case.MHTransform.Index = i ;
      WholeQuantity_S.Case.MHTransform.WholeQuantity = yyvsp[-5].l ;
      WholeQuantity_S.Case.MHTransform.NbrPoints = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 142:
#line 1471 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-6].c,fcmp_Expression_Name)) < 0) 
	vyyerror("Undefined function '%s' used in MHJacNL", yyvsp[-6].c) ;
      WholeQuantity_S.Type = WQ_MHJACNL ; 
      WholeQuantity_S.Case.MHJacNL.Index = i ;
      WholeQuantity_S.Case.MHJacNL.NbrPoints = (int)yyvsp[-3].d ;
      WholeQuantity_S.Case.MHJacNL.FreqOffSet = (int)yyvsp[-1].d ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1, &Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 143:
#line 1483 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 144:
#line 1489 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 145:
#line 1495 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 146:
#line 1497 "GetDP.y"
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
case 147:
#line 1526 "GetDP.y"
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
case 148:
#line 1550 "GetDP.y"
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
case 149:
#line 1563 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 150:
#line 1569 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 151:
#line 1576 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 152:
#line 1582 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1589 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1596 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1607 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 156:
#line 1608 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 157:
#line 1609 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 158:
#line 1614 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 159:
#line 1615 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 160:
#line 1621 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 161:
#line 1624 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 162:
#line 1627 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 163:
#line 1643 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 164:
#line 1648 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 165:
#line 1655 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 167:
#line 1664 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 168:
#line 1669 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 169:
#line 1676 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 170:
#line 1679 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 171:
#line 1686 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 173:
#line 1696 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 174:
#line 1699 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 175:
#line 1702 "GetDP.y"
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
case 176:
#line 1740 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 177:
#line 1746 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 178:
#line 1753 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 180:
#line 1766 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 181:
#line 1773 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 182:
#line 1776 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 183:
#line 1783 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 184:
#line 1786 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 185:
#line 1793 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 187:
#line 1805 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 188:
#line 1815 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 189:
#line 1825 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 190:
#line 1832 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 191:
#line 1835 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 192:
#line 1842 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 194:
#line 1858 "GetDP.y"
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
case 195:
#line 1912 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 196:
#line 1915 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 197:
#line 1918 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 198:
#line 1921 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 199:
#line 1924 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 200:
#line 1935 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 202:
#line 1945 "GetDP.y"
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
case 204:
#line 1970 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 206:
#line 1984 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 207:
#line 1990 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 208:
#line 1997 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 209:
#line 2006 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 210:
#line 2009 "GetDP.y"
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
case 211:
#line 2031 "GetDP.y"
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
case 212:
#line 2046 "GetDP.y"
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
case 213:
#line 2070 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 215:
#line 2084 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 216:
#line 2094 "GetDP.y"
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
case 217:
#line 2118 "GetDP.y"
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
case 218:
#line 2143 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 219:
#line 2148 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 220:
#line 2156 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 221:
#line 2164 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 222:
#line 2174 "GetDP.y"
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
case 223:
#line 2191 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 224:
#line 2199 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 225:
#line 2206 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 226:
#line 2213 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 227:
#line 2222 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 228:
#line 2231 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 229:
#line 2240 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 230:
#line 2261 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 232:
#line 2272 "GetDP.y"
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
case 234:
#line 2299 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 236:
#line 2312 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 237:
#line 2318 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 238:
#line 2325 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 239:
#line 2334 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 240:
#line 2337 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 241:
#line 2340 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 242:
#line 2343 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 243:
#line 2350 "GetDP.y"
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
case 244:
#line 2366 "GetDP.y"
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
case 245:
#line 2415 "GetDP.y"
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
case 247:
#line 2435 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 248:
#line 2438 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 249:
#line 2443 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 250:
#line 2448 "GetDP.y"
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
case 251:
#line 2462 "GetDP.y"
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
case 252:
#line 2482 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 253:
#line 2487 "GetDP.y"
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
case 254:
#line 2511 "GetDP.y"
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
case 256:
#line 2571 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2574 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 258:
#line 2583 "GetDP.y"
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
case 259:
#line 2649 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 260:
#line 2653 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 261:
#line 2660 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 263:
#line 2669 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 264:
#line 2674 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2677 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 266:
#line 2684 "GetDP.y"
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
case 267:
#line 2700 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 268:
#line 2706 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 269:
#line 2709 "GetDP.y"
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
case 270:
#line 2728 "GetDP.y"
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
case 271:
#line 2740 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 272:
#line 2746 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 273:
#line 2749 "GetDP.y"
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
case 274:
#line 2764 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 275:
#line 2768 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 276:
#line 2777 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 278:
#line 2788 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 279:
#line 2793 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 280:
#line 2803 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 281:
#line 2816 "GetDP.y"
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
case 282:
#line 2831 "GetDP.y"
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
case 283:
#line 2905 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 285:
#line 2921 "GetDP.y"
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
case 286:
#line 2939 "GetDP.y"
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
case 287:
#line 2953 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 288:
#line 2956 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 289:
#line 2959 "GetDP.y"
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
case 290:
#line 3005 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 292:
#line 3015 "GetDP.y"
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
case 294:
#line 3041 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 296:
#line 3053 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 297:
#line 3059 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 298:
#line 3066 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 300:
#line 3078 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 301:
#line 3084 "GetDP.y"
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
case 302:
#line 3098 "GetDP.y"
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
case 303:
#line 3116 "GetDP.y"
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
case 305:
#line 3137 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 306:
#line 3140 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 307:
#line 3144 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 308:
#line 3147 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3157 "GetDP.y"
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
case 310:
#line 3196 "GetDP.y"
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
case 311:
#line 3220 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 312:
#line 3225 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 313:
#line 3231 "GetDP.y"
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
case 314:
#line 3392 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 315:
#line 3397 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 316:
#line 3406 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 317:
#line 3415 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 319:
#line 3423 "GetDP.y"
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
case 320:
#line 3463 "GetDP.y"
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
case 321:
#line 3478 "GetDP.y"
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
case 322:
#line 3506 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 323:
#line 3509 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 324:
#line 3512 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 325:
#line 3515 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 326:
#line 3522 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 328:
#line 3533 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3543 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 330:
#line 3553 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 331:
#line 3567 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 333:
#line 3579 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 334:
#line 3581 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 335:
#line 3583 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 336:
#line 3585 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 337:
#line 3593 "GetDP.y"
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
case 339:
#line 3615 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 340:
#line 3623 "GetDP.y"
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
case 341:
#line 3685 "GetDP.y"
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
case 342:
#line 3731 "GetDP.y"
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
case 343:
#line 3755 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 344:
#line 3764 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 345:
#line 3778 "GetDP.y"
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
case 347:
#line 3807 "GetDP.y"
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
case 348:
#line 3831 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 349:
#line 3839 "GetDP.y"
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
case 350:
#line 3894 "GetDP.y"
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
case 351:
#line 3911 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 352:
#line 3912 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 353:
#line 3913 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 354:
#line 3914 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 355:
#line 3915 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 356:
#line 3916 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 357:
#line 3917 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 358:
#line 3924 "GetDP.y"
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
case 359:
#line 3945 "GetDP.y"
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
case 360:
#line 3969 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 362:
#line 3979 "GetDP.y"
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
case 364:
#line 4004 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 366:
#line 4016 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 367:
#line 4023 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 368:
#line 4030 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 369:
#line 4033 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 370:
#line 4035 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 371:
#line 4041 "GetDP.y"
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
case 372:
#line 4056 "GetDP.y"
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
case 373:
#line 4075 "GetDP.y"
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
case 375:
#line 4094 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 376:
#line 4097 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 377:
#line 4106 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 378:
#line 4109 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 379:
#line 4114 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 380:
#line 4119 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 381:
#line 4124 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 382:
#line 4129 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 383:
#line 4138 "GetDP.y"
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
case 384:
#line 4175 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 385:
#line 4182 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 386:
#line 4185 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 387:
#line 4197 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 388:
#line 4207 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 389:
#line 4213 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 390:
#line 4216 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 391:
#line 4228 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 392:
#line 4236 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 393:
#line 4247 "GetDP.y"
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

      if (Operation_P->Type == OPERATION_GENERATE || Operation_P->Type == OPERATION_GENERATEJAC)
	Operation_P->Case.Generate.GroupIndex = -1 ;      
    ;
    break;}
case 394:
#line 4267 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 395:
#line 4274 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 396:
#line 4280 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 397:
#line 4286 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 398:
#line 4292 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 399:
#line 4300 "GetDP.y"
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

      if (Operation_P->Type == OPERATION_GENERATE || Operation_P->Type == OPERATION_GENERATEJAC)
	Operation_P->Case.Generate.GroupIndex = -1 ;      

    ;
    break;}
case 400:
#line 4321 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 401:
#line 4328 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 402:
#line 4334 "GetDP.y"
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
case 403:
#line 4345 "GetDP.y"
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
case 404:
#line 4356 "GetDP.y"
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
case 405:
#line 4368 "GetDP.y"
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
case 406:
#line 4380 "GetDP.y"
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
case 407:
#line 4400 "GetDP.y"
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
case 408:
#line 4417 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_FOURIERTRANSFORM2 ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[0] = i ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->Case.FourierTransform2.DefineSystemIndex[1] = i ;
      Operation_P->Case.FourierTransform2.Period = yyvsp[-2].d;
      Operation_P->Case.FourierTransform2.Period_sofar = 0.;
      Operation_P->Case.FourierTransform2.Scales = NULL;
    ;
    break;}
case 409:
#line 4436 "GetDP.y"
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
case 410:
#line 4458 "GetDP.y"
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
case 411:
#line 4492 "GetDP.y"
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
case 412:
#line 4505 "GetDP.y"
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
case 413:
#line 4519 "GetDP.y"
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
case 414:
#line 4532 "GetDP.y"
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
case 415:
#line 4544 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 417:
#line 4553 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 419:
#line 4562 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 420:
#line 4572 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 421:
#line 4582 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 422:
#line 4590 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SOLVEJACADAPTRELAX ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SolveJac_AdaptRelax.CheckAll = (int)yyvsp[-2].d ;
      Operation_P->Case.SolveJac_AdaptRelax.Factor_L = yyvsp[-4].l ; 
    ;
    break;}
case 423:
#line 4603 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = yyvsp[-4].d ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = yyvsp[-2].c ;
    ;
    break;}
case 424:
#line 4616 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
      Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 425:
#line 4625 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 426:
#line 4634 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-10].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-10].c) ;
      Free(yyvsp[-10].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-8].i) ;
      Operation_P->Case.SaveMesh.MeshFileBase = yyvsp[-6].c ;
      Operation_P->Case.SaveMesh.Format = yyvsp[-4].c ;
      Operation_P->Case.SaveMesh.ExprIndex = yyvsp[-2].i ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 427:
#line 4648 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveMesh.GroupIndex = Num_Group(&Group_S, "OP_SaveMesh", yyvsp[-4].i) ;
      Operation_P->Case.SaveMesh.MeshFileBase = yyvsp[-2].c ;
      Operation_P->Case.SaveMesh.Format = NULL ;
      Operation_P->Type = OPERATION_SAVEMESH ;
    ;
    break;}
case 428:
#line 4661 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-11].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-11].c) ;
      Free(yyvsp[-11].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-9].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-9].c) ;
      Free(yyvsp[-9].c) ;
      Operation_P->Type = OPERATION_GENERATE_MH_MOVING ;
      Operation_P->Case.Generate_MH_Moving.GroupIndex = i ;
      Operation_P->Case.Generate_MH_Moving.Period  = yyvsp[-7].d ;
      Operation_P->Case.Generate_MH_Moving.NbrStep = (int)yyvsp[-5].d ;
      Operation_P->Case.Generate_MH_Moving.Operation = yyvsp[-2].l ;
    ;
    break;}
case 429:
#line 4678 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATE ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;
    break;}
case 430:
#line 4692 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-4].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-4].c) ;
      Free(yyvsp[-4].c) ;
      Operation_P->DefineSystemIndex = i ;
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_GENERATEJAC ;
      Operation_P->Case.Generate.GroupIndex = i ;
    ;
    break;}
case 431:
#line 4711 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 432:
#line 4716 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 433:
#line 4726 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 435:
#line 4736 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 436:
#line 4739 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 437:
#line 4749 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 438:
#line 4765 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 440:
#line 4781 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 441:
#line 4785 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 442:
#line 4789 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 443:
#line 4793 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 444:
#line 4798 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 445:
#line 4809 "GetDP.y"
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
case 447:
#line 4826 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 448:
#line 4830 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 449:
#line 4834 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 450:
#line 4838 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 451:
#line 4842 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 452:
#line 4847 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 453:
#line 4858 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 455:
#line 4873 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 456:
#line 4877 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 457:
#line 4881 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 458:
#line 4885 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 459:
#line 4889 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 460:
#line 4900 "GetDP.y"
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
case 462:
#line 4918 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 463:
#line 4922 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 464:
#line 4926 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 465:
#line 4930 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 466:
#line 4935 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 467:
#line 4945 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 468:
#line 4951 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 469:
#line 4957 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 470:
#line 4967 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 471:
#line 4970 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 472:
#line 4975 "GetDP.y"
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
case 474:
#line 4993 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 475:
#line 5003 "GetDP.y"
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
case 476:
#line 5032 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 477:
#line 5035 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 478:
#line 5038 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 479:
#line 5046 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 480:
#line 5063 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 482:
#line 5075 "GetDP.y"
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
case 484:
#line 5098 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 486:
#line 5112 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 487:
#line 5119 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 488:
#line 5127 "GetDP.y"
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
case 489:
#line 5173 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 490:
#line 5178 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 491:
#line 5184 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 492:
#line 5187 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 493:
#line 5192 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 495:
#line 5203 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 496:
#line 5206 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 497:
#line 5212 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 498:
#line 5217 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 499:
#line 5223 "GetDP.y"
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
case 500:
#line 5237 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 502:
#line 5251 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 503:
#line 5258 "GetDP.y"
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
case 504:
#line 5286 "GetDP.y"
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
case 505:
#line 5296 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 506:
#line 5297 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 507:
#line 5303 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 508:
#line 5312 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 509:
#line 5329 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 511:
#line 5341 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 513:
#line 5348 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 515:
#line 5360 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 516:
#line 5367 "GetDP.y"
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
case 517:
#line 5379 "GetDP.y"
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
case 518:
#line 5390 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 519:
#line 5395 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 520:
#line 5401 "GetDP.y"
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
case 521:
#line 5418 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 522:
#line 5428 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 523:
#line 5431 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 524:
#line 5435 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 525:
#line 5446 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 526:
#line 5450 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 527:
#line 5454 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 528:
#line 5459 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 529:
#line 5467 "GetDP.y"
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
case 530:
#line 5479 "GetDP.y"
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
case 531:
#line 5502 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 532:
#line 5503 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 533:
#line 5504 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 534:
#line 5505 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 535:
#line 5511 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 536:
#line 5513 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 537:
#line 5519 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 538:
#line 5525 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 539:
#line 5532 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 540:
#line 5541 "GetDP.y"
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
case 541:
#line 5563 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 542:
#line 5571 "GetDP.y"
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
case 543:
#line 5582 "GetDP.y"
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
case 544:
#line 5596 "GetDP.y"
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
case 545:
#line 5617 "GetDP.y"
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
case 546:
#line 5644 "GetDP.y"
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
case 547:
#line 5675 "GetDP.y"
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
case 548:
#line 5695 "GetDP.y"
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
case 550:
#line 5721 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 551:
#line 5728 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 552:
#line 5735 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 553:
#line 5742 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 554:
#line 5746 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 555:
#line 5750 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 556:
#line 5754 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 557:
#line 5758 "GetDP.y"
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
case 558:
#line 5768 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 559:
#line 5773 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 560:
#line 5778 "GetDP.y"
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
case 561:
#line 5798 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 562:
#line 5805 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 563:
#line 5814 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 564:
#line 5823 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 565:
#line 5832 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 566:
#line 5839 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 567:
#line 5847 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 568:
#line 5851 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 569:
#line 5860 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 570:
#line 5864 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 571:
#line 5872 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 572:
#line 5878 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 573:
#line 5887 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 574:
#line 5893 "GetDP.y"
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
case 575:
#line 5941 "GetDP.y"
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
case 576:
#line 5956 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 579:
#line 5969 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 580:
#line 5975 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 581:
#line 5981 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 582:
#line 5992 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 583:
#line 5993 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 584:
#line 5994 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 585:
#line 5995 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 586:
#line 5996 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 587:
#line 5997 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 588:
#line 5998 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 589:
#line 5999 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 590:
#line 6000 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 591:
#line 6001 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 592:
#line 6002 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 593:
#line 6003 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 594:
#line 6004 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 595:
#line 6005 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 596:
#line 6006 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 597:
#line 6007 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 598:
#line 6008 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 599:
#line 6009 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 600:
#line 6010 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 601:
#line 6011 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 602:
#line 6012 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 603:
#line 6015 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 604:
#line 6016 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 605:
#line 6017 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 606:
#line 6018 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 607:
#line 6019 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 608:
#line 6020 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 609:
#line 6021 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 610:
#line 6022 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 611:
#line 6023 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 612:
#line 6024 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 613:
#line 6025 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 614:
#line 6026 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 615:
#line 6027 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 616:
#line 6028 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 617:
#line 6029 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 618:
#line 6030 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 619:
#line 6031 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 620:
#line 6032 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 621:
#line 6033 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 622:
#line 6034 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 623:
#line 6035 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 624:
#line 6036 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 625:
#line 6037 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 626:
#line 6038 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 627:
#line 6039 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 628:
#line 6040 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 629:
#line 6041 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 630:
#line 6042 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 631:
#line 6043 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 632:
#line 6044 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 633:
#line 6045 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 634:
#line 6046 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 635:
#line 6047 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 636:
#line 6048 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 637:
#line 6049 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 638:
#line 6050 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 639:
#line 6051 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 640:
#line 6052 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 641:
#line 6053 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 642:
#line 6054 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 643:
#line 6059 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 644:
#line 6060 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 645:
#line 6061 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 646:
#line 6062 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 647:
#line 6063 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 648:
#line 6064 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 649:
#line 6065 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 650:
#line 6067 "GetDP.y"
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
case 651:
#line 6085 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 652:
#line 6088 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 653:
#line 6094 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 654:
#line 6097 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 655:
#line 6104 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 656:
#line 6110 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 657:
#line 6113 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 658:
#line 6116 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 659:
#line 6128 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 660:
#line 6134 "GetDP.y"
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
case 661:
#line 6145 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  //	  vyyerror("Multi value Constant needed: %s", $1) ;
	  List_Add(yyval.l, &Constant_S.Value.Float) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;
    break;}
case 662:
#line 6161 "GetDP.y"
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
case 663:
#line 6183 "GetDP.y"
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
case 664:
#line 6198 "GetDP.y"
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
case 665:
#line 6236 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 666:
#line 6244 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 667:
#line 6256 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 668:
#line 6259 "GetDP.y"
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
case 669:
#line 6274 "GetDP.y"
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
#line 6288 "GetDP.y"



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
    case WQ_MHTRANSFORM  :
      Pro_DefineQuantityIndex_1
	((WholeQuantity_P+i)->Case.MHTransform.WholeQuantity, TraceGroupIndex) ;
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


