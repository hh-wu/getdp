
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
#define	tEcho	419
#define	tWrite	420
#define	tAdapt	421
#define	tOnGlobal	422
#define	tOnRegion	423
#define	tOnElementsOf	424
#define	tOnGrid	425
#define	tOnSection	426
#define	tOnPoint	427
#define	tOnLine	428
#define	tOnPlane	429
#define	tOnBox	430
#define	tWithArgument	431
#define	tFile	432
#define	tDepth	433
#define	tDimension	434
#define	tTimeStep	435
#define	tHarmonicToTime	436
#define	tFormat	437
#define	tHeader	438
#define	tFooter	439
#define	tSkin	440
#define	tSmoothing	441
#define	tTarget	442
#define	tSort	443
#define	tIso	444
#define	tNoNewLine	445
#define	tChangeOfValues	446
#define	tFlag	447
#define	tHelp	448
#define	tCpu	449
#define	tCheck	450
#define	tDEF	451
#define	tOR	452
#define	tAND	453
#define	tEQUAL	454
#define	tNOTEQUAL	455
#define	tAPPROXEQUAL	456
#define	tLESSOREQUAL	457
#define	tGREATEROREQUAL	458
#define	tLESSLESS	459
#define	tGREATERGREATER	460
#define	tCROSSPRODUCT	461
#define	UNARYPREC	462
#define	tSHOW	463

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.42 2002-03-06 19:34:17 geuzaine Exp $ */

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
#ifndef __APPLE__
#if !defined __cplusplus && !defined MSDOS && !defined _AIX && !defined __CYGWIN_
#include <alloca.h> 
#endif
#endif /* __APPLE__ */

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


#line 184 "GetDP.y"
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



#define	YYFINAL		1758
#define	YYFLAG		-32768
#define	YYNTBASE	231

#define YYTRANSLATE(x) ((unsigned)(x) <= 463 ? yytranslate[x] : 419)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   216,     2,   224,   225,   214,     2,     2,   219,
   220,   212,   210,   229,   211,   223,   213,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   204,
     2,   206,   198,   230,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   221,     2,   222,   218,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   227,     2,   228,     2,     2,     2,     2,     2,
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
   197,   199,   200,   201,   202,   203,   205,   207,   208,   209,
   215,   217,   226
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
  1023,  1024,  1029,  1030,  1033,  1037,  1041,  1045,  1050,  1051,
  1054,  1058,  1060,  1061,  1064,  1068,  1073,  1077,  1082,  1087,
  1088,  1093,  1094,  1097,  1101,  1105,  1109,  1113,  1114,  1121,
  1125,  1126,  1132,  1136,  1140,  1144,  1148,  1149,  1153,  1154,
  1157,  1162,  1167,  1172,  1177,  1178,  1181,  1185,  1189,  1193,
  1194,  1197,  1201,  1205,  1209,  1213,  1214,  1217,  1218,  1219,
  1229,  1233,  1237,  1241,  1242,  1245,  1249,  1250,  1251,  1261,
  1262,  1264,  1266,  1268,  1270,  1272,  1274,  1279,  1283,  1284,
  1287,  1291,  1293,  1294,  1297,  1301,  1306,  1311,  1312,  1318,
  1319,  1324,  1325,  1328,  1332,  1336,  1340,  1344,  1348,  1352,
  1356,  1360,  1363,  1367,  1368,  1372,  1374,  1378,  1379,  1383,
  1384,  1387,  1391,  1395,  1400,  1405,  1410,  1415,  1421,  1427,
  1430,  1438,  1450,  1458,  1466,  1476,  1486,  1496,  1508,  1526,
  1540,  1556,  1568,  1582,  1583,  1591,  1592,  1600,  1608,  1614,
  1620,  1630,  1640,  1646,  1652,  1666,  1676,  1691,  1699,  1707,
  1709,  1711,  1712,  1715,  1719,  1723,  1726,  1727,  1730,  1734,
  1738,  1742,  1746,  1751,  1752,  1755,  1759,  1763,  1767,  1771,
  1775,  1780,  1781,  1784,  1788,  1792,  1796,  1800,  1805,  1806,
  1809,  1813,  1817,  1821,  1825,  1829,  1834,  1839,  1844,  1845,
  1850,  1851,  1854,  1858,  1862,  1866,  1870,  1874,  1878,  1879,
  1882,  1886,  1888,  1889,  1892,  1896,  1901,  1906,  1910,  1915,
  1916,  1921,  1922,  1925,  1929,  1934,  1935,  1941,  1947,  1948,
  1951,  1952,  1959,  1963,  1964,  1969,  1973,  1977,  1978,  1981,
  1985,  1987,  1988,  1991,  1995,  1999,  2003,  2007,  2012,  2013,
  2022,  2023,  2024,  2028,  2036,  2044,  2053,  2054,  2065,  2072,
  2076,  2083,  2085,  2087,  2089,  2091,  2092,  2096,  2098,  2101,
  2104,  2117,  2120,  2136,  2141,  2154,  2172,  2195,  2208,  2209,
  2212,  2216,  2221,  2226,  2230,  2233,  2236,  2240,  2244,  2248,
  2252,  2256,  2260,  2264,  2268,  2272,  2276,  2280,  2284,  2290,
  2293,  2297,  2307,  2311,  2312,  2315,  2320,  2325,  2331,  2332,
  2336,  2342,  2348,  2350,  2352,  2354,  2356,  2358,  2360,  2362,
  2364,  2366,  2368,  2370,  2372,  2374,  2376,  2378,  2380,  2382,
  2384,  2386,  2388,  2390,  2392,  2396,  2399,  2402,  2406,  2410,
  2414,  2418,  2422,  2426,  2430,  2434,  2438,  2442,  2446,  2450,
  2454,  2458,  2463,  2468,  2473,  2478,  2483,  2488,  2493,  2498,
  2503,  2508,  2515,  2520,  2525,  2530,  2535,  2540,  2545,  2552,
  2559,  2566,  2572,  2575,  2577,  2579,  2581,  2583,  2585,  2587,
  2589,  2591,  2592,  2594,  2596,  2600,  2602,  2604,  2608,  2612,
  2616,  2622,  2626,  2631,  2636,  2643,  2652,  2661,  2663,  2665
};

static const short yyrhs[] = {    -1,
   232,   233,     0,     0,     0,   233,   234,   235,     0,    48,
   227,   238,   228,     0,    83,   227,   261,   228,     0,    54,
   227,   295,   228,     0,    67,   227,   280,   228,     0,    69,
   227,   286,   228,     0,    79,   227,   302,   228,     0,    94,
   227,   325,   228,     0,   111,   227,   351,   228,     0,   156,
   227,   381,   228,     0,   158,   227,   393,   228,     0,   397,
     0,   410,     0,    10,   418,     0,   236,     0,   194,     7,
     0,   194,   163,     7,     0,   194,   196,     7,     0,   194,
    23,     7,     0,   194,   195,     7,     0,   194,   194,     7,
     0,   194,     5,     7,     0,   195,     7,     0,   196,     7,
     0,   196,    48,     7,     0,   196,    83,     7,     0,   196,
    54,     7,     0,   196,    67,     7,     0,   196,    69,     7,
     0,   196,    79,     7,     0,   196,    94,     7,     0,   196,
   111,     7,     0,   196,   156,     7,     0,   196,   158,     7,
     0,   196,     3,     7,     0,     0,   237,   401,     0,     0,
     0,   238,   239,   240,     0,     5,   197,   245,     7,     0,
     5,   260,   197,   245,     7,     0,     0,     5,   258,   197,
   241,   245,     7,     0,    49,   221,   256,   222,     7,     0,
   242,     0,   410,     0,     0,     0,     5,   221,     3,   222,
   197,    52,   243,   221,   224,   253,   244,   229,   224,   253,
   229,   413,   222,     7,     0,     0,     0,   249,   221,   246,
   250,   247,   251,   222,     0,   224,   253,     0,   245,     0,
     5,   259,     0,    55,     0,     5,     0,   253,     0,    50,
     0,     0,   257,   252,   253,     0,   257,    51,     5,   259,
     0,     5,     0,   255,     0,   227,   254,   228,     0,     0,
   254,   257,   255,     0,   254,   257,   211,   255,     0,     3,
     0,   230,   416,   230,     0,     3,     8,   413,     0,     3,
     8,     3,     8,   413,     0,     5,     0,     5,   227,   413,
   228,     0,     5,   227,   228,     0,     0,   256,   257,     5,
     0,   256,   257,     5,   227,   413,   228,     0,     0,   229,
     0,   227,   224,   413,   228,     0,     0,   227,   228,     0,
   227,   413,   228,     0,     0,   261,   262,     0,    53,   221,
   263,   222,     7,     0,     5,   221,   222,   197,   264,     7,
     0,     5,   221,   248,   222,   197,   264,     7,     0,   410,
     0,     0,   263,   257,     5,     0,    11,   221,   413,   222,
     0,    83,   221,     5,   222,     0,     0,   265,   268,     0,
     0,   227,   267,   228,     0,   264,     0,   267,   229,   264,
     0,     0,   269,   270,     0,   273,     0,     0,     0,   270,
   198,   271,   270,     8,   272,   270,     0,   270,   212,   270,
     0,   270,   215,   270,     0,    45,   221,   270,   229,   270,
   222,     0,   270,   213,   270,     0,   270,   210,   270,     0,
   270,   211,   270,     0,   270,   214,   270,     0,   270,   218,
   270,     0,   270,   204,   270,     0,   270,   206,   270,     0,
   270,   205,   270,     0,   270,   207,   270,     0,   270,   201,
   270,     0,   270,   202,   270,     0,   270,   203,   270,     0,
   270,   200,   270,     0,   270,   199,   270,     0,   211,   270,
     0,   210,   270,     0,   216,   270,     0,   219,   270,   220,
     0,   414,     0,   412,   277,   279,     0,     5,   350,     0,
   350,     0,   350,   277,     0,     0,   104,   274,   221,   268,
   222,     0,     0,    46,   221,     5,   221,   275,   268,   222,
   222,   227,   413,   228,     0,    47,   221,     5,   222,   227,
   413,   229,   413,   228,     0,    42,   221,   350,   222,     0,
    44,   221,   350,   222,     0,     0,    43,   276,   221,   268,
   229,   248,   222,     0,   204,     5,   206,   221,   268,   222,
     0,   225,     5,     0,   225,   181,     0,   225,   122,     0,
   225,     3,     0,   273,   224,     3,     0,   224,     3,     0,
   273,   226,     3,     0,   221,   223,   222,     0,   221,   222,
     0,   221,   278,   222,     0,   270,     0,   278,   229,   270,
     0,     0,   227,   416,   228,     0,   227,    55,   221,   248,
   222,   228,     0,     0,   280,   227,   281,   228,     0,     0,
   281,   282,     0,    80,     5,     7,     0,    68,   227,   283,
   228,     0,     0,   283,   227,   284,   228,     0,     0,   284,
   285,     0,    55,   248,     7,     0,    55,    50,     7,     0,
    67,     5,   279,     7,     0,     0,   286,   227,   287,   228,
     0,     0,   287,   288,     0,    80,     5,     7,     0,    72,
   264,     7,     0,    68,   227,   289,   228,     0,     0,   289,
   227,   290,   228,     0,     0,   290,   291,     0,    70,     5,
     7,     0,    71,     5,     7,     0,    68,   227,   292,   228,
     0,     0,   292,   227,   293,   228,     0,     0,   293,   294,
     0,    73,     5,     7,     0,    74,   413,     7,     0,    75,
   413,     7,     0,    76,   413,     7,     0,    77,   413,     7,
     0,    78,   413,     7,     0,     0,   295,   296,     0,   227,
   297,   228,     0,   410,     0,     0,   297,   298,     0,    80,
     5,     7,     0,    80,     5,   258,     7,     0,    70,     5,
     7,     0,    68,   227,   299,   228,     0,    68,     5,   227,
   299,   228,     0,     0,   299,   227,   300,   228,     0,     0,
   300,   301,     0,    70,     5,     7,     0,    55,   248,     7,
     0,    56,   248,     7,     0,    62,   264,     7,     0,    61,
   264,     7,     0,    66,     5,     7,     0,    63,   227,     3,
   257,     3,   228,     7,     0,    57,   248,     7,     0,    58,
   248,     7,     0,    83,   264,     7,     0,    60,   264,     7,
     0,    59,   264,     7,     0,    83,   221,   264,   229,   264,
   222,     7,     0,    60,   221,   264,   229,   264,   222,     7,
     0,    59,   221,   264,   229,   264,   222,     7,     0,     0,
   302,   303,     0,   227,   304,   228,     0,   410,     0,     0,
   304,   305,     0,    80,     5,     7,     0,    80,     5,   258,
     7,     0,    70,     5,     7,     0,    81,   227,   306,   228,
     0,    88,   227,   312,   228,     0,    90,   227,   319,   228,
     0,    54,   227,   322,   228,     0,     0,   306,   227,   307,
   228,     0,     0,   307,   308,     0,    80,     5,     7,     0,
    82,     5,     7,     0,    82,     5,   258,     7,     0,    83,
     5,   309,     7,     0,    84,   227,     5,   257,     5,   228,
     7,     0,    85,   266,     7,     0,    86,   248,     7,     0,
    87,   248,     7,     0,     0,     0,     0,   227,    95,     5,
     7,    94,     5,   258,     7,   310,    48,   248,     7,   311,
   111,     5,   259,     7,   228,     0,     0,   312,   227,   313,
   228,     0,     0,   313,   314,     0,    80,     5,     7,     0,
    89,   315,     7,     0,    82,   317,     7,     0,     5,     0,
   227,   316,   228,     0,     0,   316,   257,     5,     0,     5,
     0,   227,   318,   228,     0,     0,   318,   257,     5,     0,
     0,   319,   227,   320,   228,     0,     0,   320,   321,     0,
    80,     5,     7,     0,    70,     5,     7,     0,    82,     5,
     7,     0,     0,   322,   227,   323,   228,     0,     0,   323,
   324,     0,    82,     5,     7,     0,    91,   249,     7,     0,
    92,   252,     7,     0,    93,     5,   259,     7,     0,     0,
   325,   326,     0,   227,   327,   228,     0,   410,     0,     0,
   327,   328,     0,    80,     5,     7,     0,    80,     5,   258,
     7,     0,    70,     5,     7,     0,    95,   227,   329,   228,
     0,    99,   227,   335,   228,     0,     0,   329,   227,   330,
   228,     0,     0,   330,   331,     0,    80,     5,     7,     0,
    70,    90,     7,     0,    70,   100,     7,     0,    70,     5,
     7,     0,     0,    96,     5,   259,   332,   334,     7,     0,
    97,     3,     7,     0,     0,   221,   333,   268,   222,     7,
     0,   110,   248,     7,     0,    69,     5,     7,     0,    67,
     5,     7,     0,    98,     3,     7,     0,     0,   221,     5,
   222,     0,     0,   335,   336,     0,   100,   227,   341,   228,
     0,   101,   227,   341,   228,     0,   102,   227,   345,   228,
     0,   103,   227,   337,   228,     0,     0,   337,   338,     0,
    70,     5,     7,     0,    93,     5,     7,     0,   227,   339,
   228,     0,     0,   339,   340,     0,    64,   350,     7,     0,
    65,   350,     7,     0,    99,   350,     7,     0,   110,   248,
     7,     0,     0,   341,   342,     0,     0,     0,   349,   221,
   343,   268,   344,   229,   268,   222,     7,     0,   110,   248,
     7,     0,    67,     5,     7,     0,    69,     5,     7,     0,
     0,   345,   346,     0,   110,   248,     7,     0,     0,     0,
   349,   221,   347,   268,   348,   229,   350,   222,     7,     0,
     0,   104,     0,   105,     0,   106,     0,   107,     0,   108,
     0,   109,     0,   227,     5,     5,   228,     0,   227,     5,
   228,     0,     0,   351,   352,     0,   227,   353,   228,     0,
   410,     0,     0,   353,   354,     0,    80,     5,     7,     0,
    80,     5,   258,     7,     0,   112,   227,   356,   228,     0,
     0,   119,   355,   227,   363,   228,     0,     0,   356,   227,
   357,   228,     0,     0,   357,   358,     0,    80,     5,     7,
     0,    70,     5,     7,     0,   113,   359,     7,     0,   114,
   418,     7,     0,   117,   361,     7,     0,   118,     5,     7,
     0,   115,   415,     7,     0,   116,   418,     7,     0,     5,
   259,     0,   227,   360,   228,     0,     0,   360,   257,     5,
     0,     5,     0,   227,   362,   228,     0,     0,   362,   257,
     5,     0,     0,   363,   364,     0,     5,     5,     7,     0,
   121,   264,     7,     0,   133,   227,   370,   228,     0,   137,
   227,   372,   228,     0,   140,   227,   374,   228,     0,   143,
   227,   376,   228,     0,     5,   221,     5,   222,     7,     0,
   121,   221,   264,   222,     7,     0,   132,     7,     0,   126,
   221,   264,   222,   227,   363,   228,     0,   126,   221,   264,
   222,   227,   363,   228,   127,   227,   363,   228,     0,   123,
   221,     5,   229,   264,   222,     7,     0,   130,   221,     5,
   229,   264,   222,     7,     0,   131,   221,     5,   229,   248,
   229,     5,   222,     7,     0,   124,   221,     5,   229,     5,
   229,   415,   222,     7,     0,   125,   221,     5,   229,     5,
   229,   413,   222,     7,     0,   128,   221,     5,   229,   413,
   229,   415,   229,   413,   222,     7,     0,   129,   221,     5,
   229,     5,   229,     5,   229,   413,   229,   415,   229,   413,
   229,   413,   222,     7,     0,   133,   221,   413,   229,   413,
   229,   264,   229,   264,   222,   227,   363,   228,     0,   137,
   221,   413,   229,   413,   229,   264,   229,   413,   229,   413,
   222,   227,   363,   228,     0,   140,   221,   413,   229,   413,
   229,   264,   222,   227,   363,   228,     0,   140,   221,   413,
   229,   413,   229,   264,   229,   413,   222,   227,   363,   228,
     0,     0,   163,   365,   221,   367,   368,   222,     7,     0,
     0,   166,   366,   221,   367,   368,   222,     7,     0,   146,
   221,   248,   229,   264,   222,     7,     0,   158,   221,     5,
   222,     7,     0,   147,   221,   418,   222,     7,     0,   148,
   221,     5,   229,   415,   229,   413,   222,     7,     0,   149,
   221,     5,   229,   413,   229,   418,   222,     7,     0,   150,
   227,     5,   228,     7,     0,   151,   227,     5,   228,     7,
     0,   155,   227,     5,   229,   248,   229,   418,   229,   418,
   229,   264,   228,     7,     0,   155,   227,     5,   229,   248,
   229,   418,   228,     7,     0,   152,   221,     5,   229,     5,
   229,   413,   229,   413,   222,   227,   363,   228,     7,     0,
   153,   221,     5,   229,     5,   222,     7,     0,   154,   221,
     5,   229,     5,   222,     7,     0,   266,     0,     5,     0,
     0,   368,   369,     0,   229,   178,   418,     0,   229,   181,
   415,     0,   229,   415,     0,     0,   370,   371,     0,   134,
   413,     7,     0,   135,   413,     7,     0,   122,   264,     7,
     0,   136,   264,     7,     0,   119,   227,   363,   228,     0,
     0,   372,   373,     0,   134,   413,     7,     0,   135,   413,
     7,     0,   122,   264,     7,     0,   138,   413,     7,     0,
   139,   413,     7,     0,   119,   227,   363,   228,     0,     0,
   374,   375,     0,   141,   413,     7,     0,    72,   413,     7,
     0,   142,   264,     7,     0,   193,   413,     7,     0,   119,
   227,   363,   228,     0,     0,   376,   377,     0,   141,   413,
     7,     0,   144,   413,     7,     0,    72,   413,     7,     0,
   193,   413,     7,     0,   112,     5,     7,     0,   145,   227,
   378,   228,     0,   119,   227,   363,   228,     0,   120,   227,
   363,   228,     0,     0,   378,   227,   379,   228,     0,     0,
   379,   380,     0,    70,     5,     7,     0,    95,     5,     7,
     0,   110,   248,     7,     0,    72,   413,     7,     0,    83,
   264,     7,     0,   193,     5,     7,     0,     0,   381,   382,
     0,   227,   383,   228,     0,   410,     0,     0,   383,   384,
     0,    80,     5,     7,     0,    80,     5,   258,     7,     0,
   113,     5,   259,     7,     0,   157,     5,     7,     0,    95,
   227,   385,   228,     0,     0,   385,   227,   386,   228,     0,
     0,   386,   387,     0,    80,     5,     7,     0,    61,   227,
   388,   228,     0,     0,   388,   100,   227,   389,   228,     0,
   388,     5,   227,   389,   228,     0,     0,   389,   390,     0,
     0,   349,   221,   391,   268,   222,     7,     0,    70,     5,
     7,     0,     0,   110,   392,   248,     7,     0,    67,     5,
     7,     0,    69,     5,     7,     0,     0,   393,   394,     0,
   227,   395,   228,     0,   410,     0,     0,   395,   396,     0,
    80,     5,     7,     0,   159,     5,     7,     0,   183,     5,
     7,     0,   161,   418,     7,     0,   119,   227,   399,   228,
     0,     0,   158,     5,   160,     5,   398,   227,   399,   228,
     0,     0,     0,   399,   400,   401,     0,   162,   221,   403,
   406,   407,   222,     7,     0,   163,   221,   403,   406,   407,
   222,     7,     0,   163,   221,     6,   229,   413,   407,   222,
     7,     0,     0,   164,   221,   248,   402,   229,   110,   248,
   407,   222,     7,     0,   165,   221,     6,   407,   222,     7,
     0,     5,   405,   229,     0,     5,   405,   404,     5,   405,
   229,     0,   212,     0,   213,     0,   210,     0,   211,     0,
     0,   221,   248,   222,     0,   168,     0,   169,   248,     0,
   170,   248,     0,   172,   227,   227,   416,   228,   227,   416,
   228,   227,   416,   228,   228,     0,   171,   248,     0,   171,
   227,   264,   229,   264,   229,   264,   228,   227,   415,   229,
   415,   229,   415,   228,     0,   173,   227,   416,   228,     0,
   174,   227,   227,   416,   228,   227,   416,   228,   228,   227,
   413,   228,     0,   175,   227,   227,   416,   228,   227,   416,
   228,   227,   416,   228,   228,   227,   413,   229,   413,   228,
     0,   176,   227,   227,   416,   228,   227,   416,   228,   227,
   416,   228,   227,   416,   228,   228,   227,   413,   229,   413,
   229,   413,   228,     0,   169,   248,   177,     5,   227,   413,
   229,   413,   228,   227,   413,   228,     0,     0,   407,   408,
     0,   229,   178,   418,     0,   229,   178,   206,   418,     0,
   229,   178,   209,   418,     0,   229,   179,   413,     0,   229,
   186,     0,   229,   187,     0,   229,   182,   413,     0,   229,
   183,     5,     0,   229,   184,   409,     0,   229,   185,   409,
     0,   229,   183,   409,     0,   229,   180,   413,     0,   229,
   181,   415,     0,   229,   167,     5,     0,   229,   189,     5,
     0,   229,   188,   413,     0,   229,    61,   415,     0,   229,
   190,   413,     0,   229,   190,   227,   416,   228,     0,   229,
   191,     0,   229,   115,   415,     0,   229,   146,   227,   264,
   229,   264,   229,   264,   228,     0,   229,   192,   266,     0,
     0,   409,     6,     0,     5,   197,   415,     7,     0,     5,
   197,     6,     7,     0,    16,   221,   411,   222,     7,     0,
     0,   411,   257,     5,     0,   411,   257,     5,   197,   413,
     0,   411,   257,     5,   197,     6,     0,    22,     0,    23,
     0,    24,     0,    25,     0,    26,     0,    27,     0,    28,
     0,    29,     0,    30,     0,    31,     0,    32,     0,    33,
     0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
     0,    39,     0,    40,     0,    41,     0,     5,     0,   414,
     0,   219,   413,   220,     0,   211,   413,     0,   216,   413,
     0,   413,   211,   413,     0,   413,   210,   413,     0,   413,
   212,   413,     0,   413,   213,   413,     0,   413,   214,   413,
     0,   413,   218,   413,     0,   413,   204,   413,     0,   413,
   206,   413,     0,   413,   205,   413,     0,   413,   207,   413,
     0,   413,   201,   413,     0,   413,   202,   413,     0,   413,
   200,   413,     0,   413,   199,   413,     0,    22,   221,   413,
   222,     0,    23,   221,   413,   222,     0,    24,   221,   413,
   222,     0,    25,   221,   413,   222,     0,    26,   221,   413,
   222,     0,    27,   221,   413,   222,     0,    28,   221,   413,
   222,     0,    29,   221,   413,   222,     0,    30,   221,   413,
   222,     0,    31,   221,   413,   222,     0,    32,   221,   413,
   229,   413,   222,     0,    33,   221,   413,   222,     0,    34,
   221,   413,   222,     0,    35,   221,   413,   222,     0,    36,
   221,   413,   222,     0,    37,   221,   413,   222,     0,    38,
   221,   413,   222,     0,    39,   221,   413,   229,   413,   222,
     0,    40,   221,   413,   229,   413,   222,     0,    41,   221,
   413,   229,   413,   222,     0,   413,   198,   413,     8,   413,
     0,   413,   224,     0,     4,     0,     3,     0,    17,     0,
    18,     0,    19,     0,    20,     0,    21,     0,     5,     0,
     0,   413,     0,   417,     0,   227,   416,   228,     0,   413,
     0,   417,     0,   416,   229,   413,     0,   416,   229,   417,
     0,   413,     8,   413,     0,   413,     8,   413,     8,   413,
     0,     5,   227,   228,     0,     5,   227,   416,   228,     0,
    12,   221,     5,   222,     0,    13,   221,     5,   229,     5,
   222,     0,    14,   221,   413,   229,   413,   229,   413,   222,
     0,    15,   221,   413,   229,   413,   229,   413,   222,     0,
     6,     0,     5,     0,     9,   221,   418,   229,   418,   222,
     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   329,   364,   401,   404,   407,   410,   413,   414,   415,   416,
   417,   418,   419,   420,   421,   423,   425,   427,   432,   441,
   444,   446,   448,   450,   452,   454,   456,   458,   460,   462,
   464,   466,   468,   470,   472,   474,   476,   478,   480,   483,
   491,   505,   508,   509,   512,   517,   520,   522,   525,   527,
   529,   534,   545,   552,   560,   568,   579,   588,   597,   604,
   639,   644,   655,   658,   672,   677,   680,   729,   742,   768,
   773,   788,   806,   827,   833,   836,   845,   859,   893,   906,
   926,   930,   940,   957,   957,   960,   966,   969,   972,   982,
   985,   988,   992,  1012,  1056,  1060,  1063,  1080,  1089,  1096,
  1099,  1104,  1110,  1114,  1119,  1124,  1130,  1137,  1141,  1154,
  1169,  1183,  1189,  1195,  1201,  1207,  1213,  1219,  1225,  1231,
  1237,  1243,  1249,  1255,  1261,  1267,  1273,  1279,  1286,  1292,
  1294,  1303,  1307,  1313,  1387,  1421,  1430,  1442,  1444,  1455,
  1457,  1471,  1483,  1489,  1495,  1497,  1526,  1550,  1563,  1569,
  1576,  1582,  1589,  1596,  1606,  1609,  1610,  1613,  1616,  1619,
  1624,  1627,  1641,  1648,  1653,  1658,  1662,  1669,  1674,  1679,
  1684,  1690,  1694,  1699,  1702,  1738,  1746,  1751,  1760,  1764,
  1773,  1776,  1781,  1786,  1791,  1799,  1803,  1815,  1825,  1830,
  1835,  1840,  1852,  1856,  1912,  1915,  1918,  1921,  1924,  1933,
  1940,  1943,  1965,  1968,  1978,  1982,  1990,  1997,  2006,  2009,
  2029,  2046,  2068,  2078,  2082,  2094,  2118,  2143,  2148,  2156,
  2164,  2174,  2191,  2199,  2206,  2213,  2222,  2231,  2240,  2259,
  2267,  2270,  2293,  2297,  2306,  2310,  2318,  2325,  2334,  2337,
  2340,  2343,  2348,  2366,  2413,  2429,  2433,  2438,  2443,  2448,
  2462,  2482,  2487,  2511,  2566,  2570,  2574,  2583,  2647,  2653,
  2658,  2663,  2667,  2674,  2677,  2682,  2700,  2705,  2709,  2726,
  2740,  2745,  2749,  2762,  2768,  2775,  2782,  2786,  2793,  2803,
  2814,  2831,  2903,  2915,  2919,  2953,  2956,  2959,  3003,  3010,
  3013,  3035,  3039,  3047,  3051,  3059,  3066,  3076,  3078,  3083,
  3098,  3114,  3131,  3135,  3140,  3144,  3147,  3157,  3196,  3220,
  3225,  3231,  3392,  3397,  3406,  3415,  3420,  3423,  3461,  3478,
  3504,  3509,  3512,  3515,  3520,  3528,  3531,  3543,  3553,  3565,
  3574,  3577,  3581,  3583,  3585,  3591,  3609,  3613,  3624,  3685,
  3731,  3755,  3764,  3776,  3793,  3797,  3831,  3840,  3894,  3910,
  3913,  3914,  3915,  3916,  3917,  3918,  3922,  3945,  3967,  3974,
  3977,  3998,  4002,  4010,  4014,  4023,  4030,  4033,  4035,  4040,
  4056,  4073,  4088,  4092,  4097,  4106,  4109,  4114,  4119,  4124,
  4129,  4136,  4175,  4180,  4185,  4195,  4207,  4211,  4216,  4227,
  4236,  4243,  4267,  4274,  4280,  4286,  4292,  4300,  4321,  4328,
  4334,  4345,  4356,  4368,  4380,  4400,  4417,  4436,  4457,  4491,
  4504,  4518,  4531,  4544,  4551,  4553,  4560,  4562,  4572,  4582,
  4590,  4603,  4616,  4625,  4634,  4648,  4661,  4678,  4692,  4710,
  4716,  4726,  4732,  4735,  4739,  4749,  4763,  4775,  4779,  4785,
  4789,  4793,  4798,  4807,  4820,  4824,  4830,  4834,  4838,  4842,
  4847,  4856,  4868,  4871,  4877,  4881,  4885,  4889,  4898,  4913,
  4916,  4922,  4926,  4930,  4935,  4945,  4951,  4957,  4966,  4970,
  4974,  4988,  4991,  5003,  5032,  5035,  5038,  5046,  5062,  5070,
  5073,  5094,  5097,  5108,  5111,  5119,  5127,  5173,  5178,  5183,
  5187,  5191,  5198,  5202,  5206,  5211,  5217,  5223,  5236,  5247,
  5250,  5258,  5286,  5297,  5297,  5303,  5312,  5328,  5336,  5339,
  5344,  5347,  5356,  5359,  5367,  5379,  5390,  5395,  5400,  5418,
  5427,  5431,  5436,  5444,  5450,  5454,  5460,  5465,  5469,  5476,
  5490,  5512,  5515,  5516,  5517,  5520,  5524,  5528,  5536,  5543,
  5550,  5574,  5581,  5593,  5606,  5626,  5652,  5685,  5705,  5728,
  5731,  5739,  5746,  5753,  5757,  5761,  5765,  5769,  5779,  5784,
  5789,  5809,  5816,  5825,  5834,  5843,  5850,  5858,  5862,  5871,
  5875,  5883,  5889,  5897,  5904,  5950,  5967,  5973,  5977,  5980,
  5986,  5992,  6003,  6005,  6006,  6007,  6008,  6009,  6010,  6011,
  6012,  6013,  6014,  6015,  6016,  6017,  6018,  6019,  6020,  6021,
  6022,  6023,  6024,  6026,  6028,  6029,  6030,  6031,  6032,  6033,
  6034,  6035,  6036,  6037,  6038,  6039,  6040,  6041,  6042,  6043,
  6044,  6045,  6046,  6047,  6048,  6049,  6050,  6051,  6052,  6053,
  6054,  6055,  6056,  6057,  6058,  6059,  6060,  6061,  6062,  6063,
  6064,  6065,  6066,  6069,  6072,  6073,  6074,  6075,  6076,  6077,
  6078,  6094,  6099,  6105,  6108,  6113,  6121,  6124,  6127,  6137,
  6145,  6156,  6172,  6194,  6209,  6247,  6255,  6265,  6270,  6285
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
"tPlot","tPrint","tPrintGroup","tEcho","tWrite","tAdapt","tOnGlobal","tOnRegion",
"tOnElementsOf","tOnGrid","tOnSection","tOnPoint","tOnLine","tOnPlane","tOnBox",
"tWithArgument","tFile","tDepth","tDimension","tTimeStep","tHarmonicToTime",
"tFormat","tHeader","tFooter","tSkin","tSmoothing","tTarget","tSort","tIso",
"tNoNewLine","tChangeOfValues","tFlag","tHelp","tCpu","tCheck","tDEF","'?'",
"tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'","tLESSOREQUAL","'>'",
"tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'","'*'","'/'","'%'",
"tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'","'['","']'","'.'","'#'",
"'$'","tSHOW","'{'","'}'","','","'@'","Stats","@1","ProblemDefinitions","@2",
"ProblemDefinition","Interactive","@3","Groups","@4","Group","@5","MovingBand2DGroup",
"@6","@7","ReducedGroupRHS","@8","@9","GroupRHS","FunctionForGroup","ListOfRegionOrAll",
"SuppListOfRegion","SuppListTypeForGroup","ListOfRegion","RecursiveListOfRegion",
"IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex","Index","Functions",
"Function","DefineFunctions","Expression","@10","ListOfExpression","RecursiveListOfExpression",
"WholeQuantityExpression","@11","WholeQuantity","@12","@13","WholeQuantity_Single",
"@14","@15","@16","ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction",
"JacobianMethods","JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase",
"JacobianCaseTerm","IntegrationMethods","IntegrationMethod","IntegrationMethodTerm",
"IntegrationCases","IntegrationCase","IntegrationCaseTerm","QuadratureCases",
"QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint","Constraint",
"ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm","FunctionSpaces",
"BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction",
"BasisFunctionTerm","OptionalParametersForBasisFunction","@17","@18","SubSpaces",
"SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
"ListOfBasisFunctionCoef","RecursiveListOfBasisFunctionCoef","GlobalQuantities",
"GlobalQuantity","GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm",
"Formulations","BracedFormulation","Formulation","FormulationTerm","DefineQuantities",
"DefineQuantity","DefineQuantityTerm","@19","@20","IndexInFunctionSpace","Equations",
"EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
"GlobalEquationTermTermTerm","LocalTerm","LocalTermTerm","@21","@22","GlobalTerm",
"GlobalTermTerm","@23","@24","TermOperator","Quantity_Def","Resolutions","BracedResolution",
"Resolution","ResolutionTerm","@25","DefineSystems","DefineSystem","DefineSystemTerm",
"ListOfFormulation","RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem",
"Operation","OperationTerm","@26","@27","PrintOperation","PrintOperationOptions",
"PrintOperationOption","TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark",
"TimeLoopNewmarkTerm","IterativeLoop","IterativeLoopTerm","IterativeTimeReduction",
"IterativeTimeReductionTerm","ChangeOfStates","ChangeOfState","ChangeOfStateTerm",
"PostProcessings","BracedPostProcessing","PostProcessing","PostProcessingTerm",
"PostQuantities","PostQuantity","PostQuantityTerm","SubPostQuantities","SubPostQuantity",
"SubPostQuantityTerm","@28","@29","PostOperations","BracedPostOperation","PostOperation",
"PostOperationTerm","SeparatePostOperation","@30","PostSubOperations","@31",
"PostSubOperation","@32","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","PrintOptions","PrintOption","ParsedStrings","Affectation","DefineConstants",
"NameForFunction","FExpr","OneFExpr","ListOfFExpr","RecursiveListOfFExpr","MultiFExpr",
"CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   232,   231,   233,   234,   233,   235,   235,   235,   235,   235,
   235,   235,   235,   235,   235,   235,   235,   235,   235,   236,
   236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
   236,   236,   236,   236,   236,   236,   236,   236,   236,   237,
   236,   238,   239,   238,   240,   240,   241,   240,   240,   240,
   240,   243,   244,   242,   246,   247,   245,   245,   248,   248,
   249,   249,   250,   250,   251,   251,   251,   252,   253,   253,
   254,   254,   254,   255,   255,   255,   255,   255,   255,   255,
   256,   256,   256,   257,   257,   258,   259,   259,   260,   261,
   261,   262,   262,   262,   262,   263,   263,   264,   264,   265,
   264,   266,   266,   267,   267,   269,   268,   270,   271,   272,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
   270,   273,   273,   273,   273,   273,   273,   274,   273,   275,
   273,   273,   273,   273,   276,   273,   273,   273,   273,   273,
   273,   273,   273,   273,   277,   277,   277,   278,   278,   279,
   279,   279,   280,   280,   281,   281,   282,   282,   283,   283,
   284,   284,   285,   285,   285,   286,   286,   287,   287,   288,
   288,   288,   289,   289,   290,   290,   291,   291,   291,   292,
   292,   293,   293,   294,   294,   294,   294,   294,   294,   295,
   295,   296,   296,   297,   297,   298,   298,   298,   298,   298,
   299,   299,   300,   300,   301,   301,   301,   301,   301,   301,
   301,   301,   301,   301,   301,   301,   301,   301,   301,   302,
   302,   303,   303,   304,   304,   305,   305,   305,   305,   305,
   305,   305,   306,   306,   307,   307,   308,   308,   308,   308,
   308,   308,   308,   308,   309,   310,   311,   309,   312,   312,
   313,   313,   314,   314,   314,   315,   315,   316,   316,   317,
   317,   318,   318,   319,   319,   320,   320,   321,   321,   321,
   322,   322,   323,   323,   324,   324,   324,   324,   325,   325,
   326,   326,   327,   327,   328,   328,   328,   328,   328,   329,
   329,   330,   330,   331,   331,   331,   331,   332,   331,   331,
   333,   331,   331,   331,   331,   331,   334,   334,   335,   335,
   336,   336,   336,   336,   337,   337,   338,   338,   338,   339,
   339,   340,   340,   340,   340,   341,   341,   343,   344,   342,
   342,   342,   342,   345,   345,   346,   347,   348,   346,   349,
   349,   349,   349,   349,   349,   349,   350,   350,   351,   351,
   352,   352,   353,   353,   354,   354,   354,   355,   354,   356,
   356,   357,   357,   358,   358,   358,   358,   358,   358,   358,
   358,   359,   359,   360,   360,   361,   361,   362,   362,   363,
   363,   364,   364,   364,   364,   364,   364,   364,   364,   364,
   364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
   364,   364,   364,   365,   364,   366,   364,   364,   364,   364,
   364,   364,   364,   364,   364,   364,   364,   364,   364,   367,
   367,   368,   368,   369,   369,   369,   370,   370,   371,   371,
   371,   371,   371,   372,   372,   373,   373,   373,   373,   373,
   373,   374,   374,   375,   375,   375,   375,   375,   376,   376,
   377,   377,   377,   377,   377,   377,   377,   377,   378,   378,
   379,   379,   380,   380,   380,   380,   380,   380,   381,   381,
   382,   382,   383,   383,   384,   384,   384,   384,   384,   385,
   385,   386,   386,   387,   387,   388,   388,   388,   389,   389,
   391,   390,   390,   392,   390,   390,   390,   393,   393,   394,
   394,   395,   395,   396,   396,   396,   396,   396,   398,   397,
   399,   400,   399,   401,   401,   401,   402,   401,   401,   403,
   403,   404,   404,   404,   404,   405,   405,   406,   406,   406,
   406,   406,   406,   406,   406,   406,   406,   406,   407,   407,
   408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
   408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
   408,   408,   408,   409,   409,   410,   410,   410,   411,   411,
   411,   411,   412,   412,   412,   412,   412,   412,   412,   412,
   412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
   412,   412,   412,   413,   413,   413,   413,   413,   413,   413,
   413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
   413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
   413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
   413,   413,   413,   414,   414,   414,   414,   414,   414,   414,
   414,   415,   415,   415,   415,   416,   416,   416,   416,   417,
   417,   417,   417,   417,   417,   417,   417,   418,   418,   418
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
     0,     4,     0,     2,     3,     3,     3,     4,     0,     2,
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
     7,    11,     7,     7,     9,     9,     9,    11,    17,    13,
    15,    11,    13,     0,     7,     0,     7,     7,     5,     5,
     9,     9,     5,     5,    13,     9,    14,     7,     7,     1,
     1,     0,     2,     3,     3,     2,     0,     2,     3,     3,
     3,     3,     4,     0,     2,     3,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     4,     0,     2,
     3,     3,     3,     3,     3,     4,     4,     4,     0,     4,
     0,     2,     3,     3,     3,     3,     3,     3,     0,     2,
     3,     1,     0,     2,     3,     4,     4,     3,     4,     0,
     4,     0,     2,     3,     4,     0,     5,     5,     0,     2,
     0,     6,     3,     0,     4,     3,     3,     0,     2,     3,
     1,     0,     2,     3,     3,     3,     3,     4,     0,     8,
     0,     0,     3,     7,     7,     8,     0,    10,     6,     3,
     6,     1,     1,     1,     1,     0,     3,     1,     2,     2,
    12,     2,    15,     4,    12,    17,    22,    12,     0,     2,
     3,     4,     4,     3,     2,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     5,     2,
     3,     9,     3,     0,     2,     4,     4,     5,     0,     3,
     5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     3,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     6,     4,     4,     4,     4,     4,     4,     6,     6,
     6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     0,     1,     1,     3,     1,     1,     3,     3,     3,
     5,     3,     4,     4,     6,     8,     8,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,   652,   669,   668,     0,    18,   579,
    42,   200,   163,   176,   230,    90,   289,   359,   479,     0,
   508,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    41,   645,   644,   651,     0,
     0,     0,     0,     0,   646,   647,   648,   649,   650,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   653,   604,     0,   654,     0,    84,    43,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    26,    23,    21,    25,    24,    22,    39,    29,    31,    32,
    33,    34,    30,    35,    36,    37,    38,     0,     0,     0,
     0,     0,   577,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   651,   606,   607,
     0,   656,     0,   657,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   643,   576,     0,     0,    85,     0,     6,     0,   204,     8,
   201,   203,   165,     9,   178,    10,   234,    11,   231,   233,
     0,     0,     7,    91,    95,   293,    12,   290,   292,   363,
    13,   360,   362,   483,    14,   480,   482,   519,   512,    15,
   509,   511,   536,     0,     0,     0,    87,    61,     0,    59,
   527,     0,   549,   662,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   605,
   655,     0,   660,     0,   621,   620,   618,   619,   614,   616,
   615,   617,   609,   608,   610,   611,   612,   613,     0,   578,
   580,     0,     0,    44,    50,    51,     0,     0,     0,     0,
     0,    96,     0,     0,     0,     0,     0,     0,     0,   538,
     0,     0,     0,     0,     0,     0,     0,     0,   549,     0,
   549,     0,    60,    74,    78,    71,     0,    58,    69,     0,
    55,     0,   663,   664,     0,     0,     0,   622,   623,   624,
   625,   626,   627,   628,   629,   630,   631,     0,   633,   634,
   635,   636,   637,   638,     0,     0,     0,   658,   659,     0,
     0,     0,     0,   652,     0,     0,     0,     0,    81,     0,
     0,     0,   202,   205,     0,     0,   164,   166,     0,   100,
     0,   177,   179,     0,     0,     0,     0,     0,     0,   232,
   235,     0,     0,    84,     0,     0,     0,     0,   291,   294,
     0,     0,   368,   361,   364,     0,     0,     0,     0,   481,
   484,   521,     0,     0,     0,     0,     0,   510,   513,     0,
   534,   535,   532,   533,   530,     0,   539,   540,   100,   542,
     0,     0,     0,     0,     0,     0,   549,     0,    88,     0,
     0,    84,     0,     0,     0,     0,     0,   550,     0,     0,
     0,     0,     0,     0,     0,   661,   642,   670,   582,   581,
   651,     0,     0,     0,     0,    47,     0,    84,     0,   211,
     0,     0,   169,     0,   183,     0,     0,     0,   106,     0,
   281,     0,     0,   243,   259,   274,   100,     0,     0,     0,
     0,     0,   300,   319,     0,   370,     0,     0,   490,    87,
     0,   522,     0,   521,     0,     0,     0,   537,   536,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   645,
    76,    80,     0,    70,     0,    75,     0,    64,    56,    63,
   529,   652,   652,     0,     0,     0,     0,     0,   652,     0,
   574,   574,   574,   555,   556,     0,     0,     0,   570,   102,
   665,     0,     0,   632,   639,   640,   641,    45,     0,     0,
    89,     0,    62,     0,     0,     0,   211,     0,   208,   206,
     0,     0,     0,   167,     0,     0,     0,   181,   101,     0,
   180,     0,   238,   236,     0,     0,     0,     0,     0,   100,
    92,    97,   297,   295,     0,     0,     0,   365,     0,     0,
   390,   485,     0,     0,     0,   488,   520,     0,   514,   522,
   515,   517,   516,     0,     0,   100,     0,   544,     0,     0,
     0,   524,     0,   525,     0,    79,     0,    72,   549,    84,
   567,   571,   100,   564,     0,     0,   551,   554,   562,   563,
   557,   558,   561,   559,   560,   566,   565,     0,   568,   100,
   573,     0,     0,     0,    86,     0,    46,    49,    82,     0,
   213,   209,   207,   171,   168,   185,   182,     0,     0,   651,
   583,   584,   585,   586,   587,   588,   589,   590,   591,   592,
   593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     0,   145,     0,     0,     0,     0,   138,     0,     0,     0,
     0,     0,     0,     0,     0,   107,   108,   136,     0,   133,
   283,   242,   237,   245,   239,   261,   240,   276,   241,    93,
     0,   296,   302,   298,     0,     0,     0,     0,   299,   320,
   366,   372,   367,     0,   486,   492,   489,   487,   523,   518,
   531,     0,     0,     0,     0,     0,     0,   526,    77,    73,
     0,     0,     0,     0,   552,   553,   575,     0,   104,     0,
   666,   667,    52,    48,     0,   210,     0,     0,     0,    98,
    99,   135,     0,     0,     0,     0,     0,     0,     0,     0,
   130,   129,   131,     0,   153,   151,   148,   150,   149,     0,
   109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   137,   160,     0,     0,     0,     0,    94,     0,   336,   336,
   344,   325,     0,     0,   100,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   414,
   416,   369,   391,     0,     0,   100,     0,     0,     0,     0,
     0,    57,    68,     0,     0,   100,   569,   103,   100,     0,
     0,     0,     0,     0,     0,   100,   100,   100,   100,     0,
     0,     0,   100,   212,   214,     0,     0,   170,   172,     0,
     0,     0,   184,   186,     0,   106,     0,     0,     0,     0,
   106,     0,   132,     0,   358,     0,   128,   127,   124,   125,
   126,   120,   122,   121,   123,   116,   117,   112,   115,   118,
   113,   119,   152,   154,   156,     0,   158,     0,     0,   134,
     0,     0,     0,     0,   282,   284,     0,     0,     0,     0,
   102,     0,     0,   244,   246,     0,     0,     0,   260,   262,
     0,     0,     0,   275,   277,     0,     0,     0,     0,     0,
     0,     0,     0,   311,   301,   303,   350,   350,   350,     0,
     0,     0,     0,     0,   652,     0,     0,     0,   371,   373,
     0,     0,   100,     0,     0,     0,     0,   100,     0,     0,
     0,     0,   400,     0,   437,     0,   444,     0,   452,   459,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   491,   493,     0,     0,     0,
     0,     0,     0,   528,    87,    66,     0,   105,     0,    83,
     0,     0,     0,     0,   100,     0,   100,     0,     0,     0,
     0,     0,     0,   100,     0,     0,     0,   160,   190,     0,
     0,   143,     0,   144,     0,   140,     0,     0,   106,   357,
     0,   155,   157,     0,     0,     0,     0,     0,     0,    87,
     0,     0,   255,     0,     0,     0,     0,     0,   270,   272,
     0,   266,   268,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,    87,     0,     0,     0,   106,     0,     0,
   351,   352,   353,   354,   355,   356,     0,   321,   337,     0,
   322,     0,   323,   345,     0,     0,     0,   330,   324,   326,
     0,     0,    87,   384,     0,     0,     0,     0,   386,   388,
     0,     0,   392,     0,     0,   393,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   102,   102,   496,     0,     0,     0,     0,     0,
     0,     0,    67,   100,     0,   216,   217,   222,   223,     0,
   226,     0,   225,   219,   218,    84,   220,   215,     0,   224,
   174,   173,     0,     0,   187,   188,     0,     0,   106,     0,
   139,     0,   110,   159,     0,   161,   285,   286,   287,     0,
   247,   248,     0,     0,     0,    84,   252,   253,   254,   263,
    84,   265,    84,   264,   279,   278,   280,   315,   314,   307,
   305,   306,   304,   308,   310,   316,   313,     0,     0,     0,
     0,   338,     0,   347,     0,     0,     0,   375,   374,   382,
    84,   376,   377,   380,   381,    84,   378,   379,     0,     0,
   100,     0,     0,     0,     0,     0,   100,     0,     0,     0,
   100,     0,     0,   100,   394,   438,     0,     0,   100,     0,
     0,     0,     0,   395,   445,     0,     0,     0,     0,   100,
     0,   396,   453,     0,     0,     0,     0,     0,     0,     0,
     0,   397,   460,   100,     0,   652,     0,     0,     0,     0,
     0,     0,     0,     0,   431,   430,   432,   432,     0,   494,
     0,   652,     0,     0,     0,     0,     0,    53,   100,   100,
     0,   100,   175,   192,   189,     0,   114,     0,     0,   147,
     0,     0,   288,   249,     0,   250,     0,   271,     0,   267,
     0,   317,     0,   342,   343,   341,   106,   346,   106,   327,
   328,     0,     0,     0,     0,   329,   331,   383,     0,   387,
     0,   398,   399,     0,     0,     0,   390,     0,     0,     0,
     0,     0,   390,     0,     0,     0,     0,     0,   390,     0,
     0,     0,     0,     0,     0,     0,   390,     0,     0,     0,
     0,     0,   390,   390,     0,     0,   469,     0,     0,   420,
     0,     0,   423,   424,     0,     0,     0,     0,   419,     0,
     0,     0,     0,   495,     0,     0,     0,     0,     0,     0,
   572,     0,     0,     0,     0,     0,     0,   146,     0,     0,
   111,     0,     0,     0,   273,   269,     0,     0,   312,   339,
   348,     0,     0,     0,     0,   385,   389,     0,   652,     0,
     0,   652,     0,     0,     0,   100,     0,   441,   439,   440,
   442,   100,     0,   448,   446,   447,   449,   450,   100,   455,
     0,   454,   456,   457,   463,   465,     0,     0,   461,   462,
     0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
   652,   433,     0,   499,   499,     0,   652,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   191,   193,     0,     0,   162,     0,     0,     0,
   309,     0,     0,   332,   333,   334,   335,   403,     0,     0,
   401,     0,     0,   404,     0,     0,   443,     0,   451,     0,
   458,   467,   468,   471,   466,   418,     0,     0,     0,   428,
   429,     0,   415,     0,   652,   436,   417,   350,   350,   548,
     0,   541,   545,     0,     0,     0,   229,   228,   221,   227,
     0,     0,     0,     0,     0,     0,     0,   142,     0,   251,
   318,   106,     0,     0,     0,     0,     0,     0,     0,   100,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   434,
   435,     0,     0,     0,   504,   498,     0,   500,   497,   652,
     0,     0,     0,   194,   195,   196,   197,   198,   199,     0,
     0,     0,     0,   406,   407,   390,     0,     0,   405,     0,
     0,   390,     0,     0,     0,   100,     0,     0,     0,   470,
   472,   421,   422,     0,   426,     0,     0,     0,     0,     0,
   501,     0,     0,     0,     0,   141,     0,     0,     0,     0,
     0,   652,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   100,   506,   507,   503,     0,   106,   543,
     0,     0,     0,   256,   340,   349,   402,   408,     0,   390,
     0,   412,   390,   473,   476,   477,   474,   475,   478,   390,
     0,   505,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   546,     0,    54,     0,     0,   410,
   390,   413,     0,   425,   502,     0,     0,     0,     0,   427,
     0,   257,     0,   411,     0,     0,     0,     0,     0,   409,
   547,    87,     0,     0,   258,     0,     0,     0
};

static const short yydefgoto[] = {  1756,
     1,     2,     3,    20,    21,    22,   110,   198,   294,   562,
   295,   870,  1432,   240,   445,   630,   241,   242,   529,   752,
   865,   328,   442,   329,   468,   196,   367,   323,   368,   115,
   214,   394,   478,   479,  1316,   760,   579,   580,   706,   906,
  1341,   707,   779,  1199,   774,   811,   928,   930,   112,   298,
   378,   573,   768,   889,   113,   299,   383,   575,   769,   894,
  1194,  1437,  1524,   111,   201,   297,   374,   568,   767,   885,
   114,   209,   300,   391,   586,   814,   945,  1215,  1717,  1746,
   587,   815,   950,  1084,  1223,  1081,  1221,   588,   816,   955,
   582,   813,   936,   116,   218,   303,   400,   596,   818,   966,
  1352,  1098,  1448,   597,   730,   970,  1120,  1247,  1367,   967,
  1109,  1357,  1532,   969,  1114,  1359,  1533,  1110,   708,   117,
   222,   304,   405,   497,   600,   823,   980,  1125,  1251,  1131,
  1256,   734,   853,  1012,  1013,  1317,  1420,  1502,  1146,  1276,
  1148,  1285,  1150,  1293,  1151,  1303,  1491,  1604,  1651,   118,
   226,   305,   411,   604,   854,  1017,  1319,  1568,  1618,  1689,
  1660,   120,   231,   307,   419,    23,   306,   502,   608,    66,
   330,   234,   426,   309,   319,   332,   448,   643,    24,   109,
   709,   172,   105,   106,   173,   174,    29
};

static const short yypact[] = {-32768,
-32768,    35,  3040,  -143,   217,  -153,  -124,  -113,   -52,   -37,
   -32,   -21,   -19,    -3,    11,    59,   207,   196,  1148,-32768,
-32768,   502,-32768,-32768,  1782,-32768,-32768,    25,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   148,
-32768,   326,-32768,   362,   384,   402,   421,   424,-32768,   450,
-32768,   461,   488,   493,   504,   513,   527,   555,   572,   577,
   592,   387,   393,   412,   416,-32768,-32768,-32768,   147,   605,
   441,   482,   489,   495,-32768,-32768,-32768,-32768,-32768,   514,
   545,   547,   549,   575,   589,   611,   614,   619,   621,   638,
   642,   652,   662,   674,   677,   690,   707,   712,   718,  2881,
  2881,  2881,  2803,  1174,-32768,   732,-32768,   217,  -177,   401,
    28,  -138,   -83,    31,    62,    64,    76,    78,   787,    86,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   793,   231,    65,
   887,   656,-32768,   918,   936,  2881,  2881,  2881,  2881,  2881,
  2881,  2881,  2881,  2881,  2881,  2881,  2881,  2881,  2881,  2881,
  2881,  2881,  2881,  2881,  2881,  2881,  2881,-32768,   -75,   -75,
  3859,  1174,   166,-32768,  2881,  2881,  2881,  2881,  2881,  2881,
  2881,  2881,  2881,  2881,  2881,  2881,  2881,  2881,  2881,  2881,
-32768,-32768,   716,   944,-32768,   948,-32768,   417,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -158,   738,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   751,  1526,   746,  1526,    75,-32768,    37,-32768,
-32768,   770,-32768,-32768,   170,   774,   768,  1776,  2786,  3886,
  3913,  3940,  3967,  3994,  4021,  4048,  4075,  4102,  4129,  2825,
  4156,  4183,  4210,  4237,  4264,  4291,  2866,  3077,  3098,-32768,
-32768,  2803,  2954,  2981,  1810,  4769,  1424,  1424,   752,   752,
   752,   752,   743,   743,   -75,   -75,   -75,   -75,   217,-32768,
   801,   125,   778,-32768,-32768,-32768,   114,   106,   153,   117,
   162,-32768,   385,   120,   406,   777,   775,    65,   391,-32768,
    65,    65,    92,   779,   780,   781,   784,   785,-32768,  2881,
-32768,   817,-32768,  1001,   819,-32768,  2803,-32768,-32768,   776,
-32768,  -174,-32768,-32768,  1042,  2881,  2881,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2881,-32768,-32768,
-32768,-32768,-32768,-32768,  2881,  2881,  2881,  1174,-32768,  2881,
  2881,   826,  2842,  1704,  1046,  2450,   853,   854,-32768,    61,
  1048,  1049,-32768,-32768,   828,  1051,-32768,-32768,   830,    89,
  1053,-32768,-32768,   832,  1055,  1061,   841,   842,   843,-32768,
-32768,   874,   850,   -56,  1068,  1070,   877,   878,-32768,-32768,
  1097,   879,-32768,-32768,-32768,  1103,   882,  1105,  1107,-32768,
-32768,-32768,  1112,   897,  1120,   217,  1121,-32768,-32768,   906,
-32768,-32768,-32768,-32768,-32768,  1124,   954,-32768,    89,-32768,
   905,  2803,   907,   919,   920,   -13,  4723,   121,-32768,  2920,
   724,   198,   223,  1039,    24,  1143,  3082,-32768,   932,  3119,
  3140,  4318,  4345,  4372,  4399,  4723,  4723,-32768,-32768,  4723,
   151,  1150,   938,  2881,  3518,-32768,   164,   122,   931,-32768,
  1154,    15,-32768,  1155,-32768,   942,   949,  1169,-32768,  1176,
-32768,  1181,    39,-32768,-32768,-32768,    89,   992,  1183,  1187,
  1186,    98,-32768,-32768,    99,-32768,   970,   100,-32768,   971,
  1192,   966,  1193,-32768,  1196,  1197,  1198,-32768,   751,  1201,
   980,  2803,   310,  2803,  2803,  2803,  1203,   175,  1204,  1215,
  4723,-32768,  3549,-32768,    38,-32768,    65,-32768,-32768,-32768,
-32768,  1821,  1821,   985,  1220,   187,  2881,  2881,  1821,  2881,
  1221,-32768,-32768,-32768,-32768,  2881,  1223,  1059,-32768,  1002,
-32768,  2881,  2881,-32768,-32768,-32768,-32768,-32768,  1033,  3580,
-32768,   164,-32768,  1225,  1226,  1229,-32768,   321,-32768,-32768,
  1011,  1230,   339,-32768,   342,  2881,  1231,-32768,-32768,  1295,
-32768,   367,-32768,-32768,  1232,   370,   383,   396,  1236,    89,
-32768,-32768,-32768,-32768,  1238,   399,   305,-32768,  1239,   408,
-32768,-32768,  1242,   413,  1243,-32768,-32768,   502,-32768,  1010,
-32768,-32768,-32768,  1022,  1026,    89,   422,-32768,   484,   494,
   496,-32768,  1247,-32768,  2881,-32768,    55,-32768,-32768,   188,
-32768,-32768,    89,-32768,   217,   217,-32768,  4723,  4723,-32768,
  4723,-32768,  1254,  1254,  1254,  4723,-32768,  2803,  4723,    89,
-32768,  4426,  4453,  1211,-32768,  1258,-32768,-32768,  1041,   510,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4480,  1050,   202,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1056,-32768,  1062,  1063,  1064,  1066,-32768,  1266,  1295,  1295,
  1295,  1295,  1277,    48,  1283,  3041,   259,  1069,  1069,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1285,-32768,-32768,-32768,  1067,  1074,  1075,  1076,-32768,-32768,
-32768,-32768,-32768,   990,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2881,  1060,  1078,  1081,  1082,  1083,-32768,  4723,-32768,
   189,  1071,    45,  1133,-32768,-32768,-32768,   553,-32768,   560,
-32768,-32768,-32768,-32768,  2881,-32768,   498,     6,   230,-32768,
-32768,-32768,  1084,  1132,  1084,  1295,  1290,  1291,  1156,  1165,
  1164,  1164,  1164,  4796,-32768,-32768,-32768,-32768,-32768,    16,
-32768,  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1295,
  1295,  1295,  1295,  1295,  1295,  1295,  1295,  1380,  1387,   997,
-32768,  1168,   444,   622,   539,   119,-32768,  1411,-32768,-32768,
-32768,-32768,   764,    44,    27,  1170,  1175,  1195,  1208,  1209,
  1212,  1217,  1218,  1390,   304,   344,   355,  1177,  1219,  1222,
  1224,  1228,  1205,  1214,  1240,  1241,  1245,  1233,  1246,-32768,
-32768,-32768,-32768,   -24,  3161,    89,  2803,  2803,  2803,  2803,
  1415,-32768,-32768,  1419,    37,    89,-32768,-32768,    89,  1251,
  3611,    65,    65,    65,    65,   108,   169,    89,    89,  1237,
  1437,  1441,   224,-32768,-32768,   163,  1452,-32768,-32768,  1252,
  1454,  1458,-32768,-32768,  1255,-32768,  1261,  1734,  1253,  1262,
-32768,  1264,-32768,  1259,-32768,  1295,  4817,  4835,  2411,  2411,
  2411,   590,   590,   590,   590,   518,   518,  1164,  1164,  1164,
  1164,  1164,-32768,-32768,-32768,  1267,  3041,   234,  2764,-32768,
  1468,    29,  1483,  1485,-32768,-32768,  1493,  1495,  1496,  1275,
  1002,    65,    65,-32768,-32768,  1499,    67,    82,-32768,-32768,
  1507,  1508,  1510,-32768,-32768,  1511,  1512,   141,  1513,  1518,
  1465,  1521,    65,-32768,-32768,-32768,   483,   875,  1346,   319,
  1520,  1522,    88,   217,  1821,   217,    90,  1527,-32768,-32768,
  1532,  1536,    89,  1537,  1538,  1541,  1542,    89,  1544,  1556,
  1559,  1560,-32768,  2881,-32768,  2881,-32768,  2881,-32768,-32768,
    65,   217,  1561,  1562,  1564,  1565,  1570,  1572,  1574,  1575,
  1582,  1373,  1377,  1372,  1596,-32768,-32768,  2881,  1374,   566,
   595,   602,   609,-32768,   971,-32768,  1375,-32768,  1392,-32768,
  1610,  1612,  1614,  1615,    89,  1617,    89,  1618,  1620,  1634,
  1640,  1637,  1638,    89,  1639,  1643,  1644,  1168,-32768,  1645,
  1646,-32768,  1425,-32768,  1295,-32768,  1428,  1434,-32768,-32768,
  3008,-32768,-32768,  1295,  1438,   618,  1651,  1653,  1664,   971,
  1665,   101,  1451,  1674,  1673,  1675,  1676,  1677,-32768,-32768,
  1678,-32768,-32768,  1679,  1682,  1684,  1685,  1696,  1697,  1698,
  1699,  1705,  1707,   971,  1708,  1745,  1746,-32768,  1749,  1784,
-32768,-32768,-32768,-32768,-32768,-32768,    65,-32768,-32768,  1529,
-32768,    65,-32768,-32768,  1530,  1785,  1786,-32768,-32768,-32768,
  1791,  1820,   971,-32768,  1822,  1823,  1824,  1825,-32768,-32768,
  1830,  1856,-32768,  1571,  1606,-32768,  1563,  1635,  1642,  1656,
  1650,  1654,  1657,  1659,  3182,   -18,  3203,   726,  3224,   403,
  1282,  1660,  1658,  1671,  1672,  1680,  1681,  1683,  1687,  1688,
  1689,  1663,    93,    93,-32768,  1859,  3642,  1655,  1686,  1691,
  1695,  1700,-32768,    89,    37,-32768,-32768,-32768,-32768,  1701,
-32768,  1713,-32768,-32768,-32768,  1714,-32768,-32768,  1721,-32768,
-32768,-32768,  1896,   626,-32768,-32768,    65,  4750,-32768,  2881,
-32768,  1692,-32768,  3041,    65,-32768,-32768,-32768,-32768,  1897,
-32768,-32768,  1898,  1811,  1904,  1714,-32768,-32768,-32768,-32768,
   629,-32768,   672,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1703,  1922,  1944,
  1946,-32768,  1948,-32768,  1949,  1950,   315,-32768,-32768,-32768,
   675,-32768,-32768,-32768,-32768,   688,-32768,-32768,  1951,  1953,
    89,  1956,  1959,  1738,  2881,  1961,    89,    65,  2881,  1740,
    89,  2881,  2881,    89,-32768,-32768,  2881,  1741,    89,  2881,
  2881,  2881,  2881,-32768,-32768,  2881,  2881,  1742,  2881,    89,
  2881,-32768,-32768,  2881,  1966,  1752,  1757,  2881,  2881,  1758,
  2881,-32768,-32768,    89,  1984,  1821,  2881,  1985,  1988,  1991,
  1992,  1994,    65,  1995,-32768,-32768,-32768,-32768,    12,-32768,
  1777,  1821,  2803,  1779,  2803,  2803,  1775,-32768,    89,    89,
  2004,    89,-32768,-32768,-32768,  1796,-32768,  1803,  3245,-32768,
  1295,  1804,-32768,-32768,  2003,-32768,  2008,-32768,  2022,-32768,
  2024,  1809,  2026,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1084,  1084,  1084,    65,-32768,-32768,-32768,  2030,-32768,
  2031,-32768,-32768,  1816,  1802,  1812,-32768,  3266,  1814,  1817,
  1826,  3287,-32768,  2049,   236,   292,  2050,  3308,-32768,  2052,
   573,   615,   708,   967,  3329,  1145,-32768,  1207,  2053,  1463,
  2297,  2055,-32768,-32768,  2326,  2347,-32768,  2375,  1843,-32768,
  1837,  3350,-32768,-32768,  1848,  1858,  1860,  1849,-32768,   247,
   248,  1854,  1861,-32768,  2881,  1857,   702,  2881,   709,   719,
-32768,  1866,  1863,  1868,  1855,  1880,   571,-32768,  1881,  2881,
  3041,  1876,  2099,  1879,-32768,-32768,  2105,  2106,-32768,-32768,
-32768,  2117,  2118,  2120,  2121,-32768,-32768,  2122,  1821,  2881,
  1405,  1821,  2107,  2123,  2127,    89,  1460,-32768,-32768,-32768,
-32768,    89,  1744,-32768,-32768,-32768,-32768,-32768,    89,-32768,
  1921,-32768,-32768,-32768,-32768,-32768,  1968,  2014,-32768,-32768,
   750,-32768,  2126,  2881,   217,  2881,  2129,  2134,   217,  2141,
  1743,-32768,  2143,-32768,-32768,  3673,  1821,  1924,  3704,  1927,
  1929,  1934,  2152,  2163,  2164,  2166,  2169,  2881,  2881,  2881,
  2881,  2881,-32768,-32768,  1958,  3735,-32768,  2081,  2171,  1954,
-32768,  1963,  1964,-32768,-32768,-32768,-32768,-32768,  1972,  4507,
  2070,  1971,  1973,-32768,  1981,  1986,-32768,  1989,-32768,   260,
-32768,-32768,-32768,-32768,-32768,-32768,  4534,  1997,  3371,-32768,
-32768,   758,-32768,   217,  1821,-32768,-32768,   548,   782,-32768,
  1993,-32768,-32768,  1987,  2803,    37,-32768,-32768,-32768,-32768,
  2210,  2396,  2433,  2485,  2506,  2527,  2881,-32768,  2215,-32768,
-32768,-32768,  1084,  2216,  2219,  2011,  2881,  2881,  2224,    89,
  2881,  2012,  2881,   349,  2233,  2239,  2881,  2241,   217,-32768,
-32768,  2240,  2244,  2255,-32768,-32768,  2040,-32768,-32768,  1821,
  2881,   761,  2034,-32768,-32768,-32768,-32768,-32768,-32768,  3766,
  2037,  2043,  2044,-32768,-32768,-32768,  4561,  3392,-32768,  2046,
  3413,-32768,  4588,  2270,  2881,    89,  2277,    65,  2278,-32768,
-32768,-32768,-32768,  4615,-32768,  2061,  2280,  2285,  2286,    65,
-32768,  2056,  3434,  2077,  2881,-32768,  2300,  2301,  2302,  2058,
  2303,  1821,  2085,  2881,  2104,  2086,  2309,  2548,  2314,  2321,
  2322,  2323,  2108,    89,-32768,-32768,-32768,  2329,-32768,-32768,
  2881,  2111,  4642,-32768,-32768,-32768,-32768,-32768,  2110,-32768,
  4669,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  2125,-32768,  2128,  3797,  2881,  2344,  2307,  2881,  2148,  2131,
  2194,  2238,  2349,  2358,-32768,  3455,-32768,    65,  3476,-32768,
-32768,-32768,  2365,-32768,-32768,  2881,  2366,  2881,  2284,-32768,
  3497,-32768,  4696,-32768,  2881,  2263,  2370,  3828,  2374,-32768,
-32768,   971,  2373,  2155,-32768,  2394,  2395,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  -265,-32768,-32768,  -300,  1466,-32768,-32768,
  1464,  -441,-32768,  -412,-32768,  -380,  -467,  -485,-32768,-32768,
-32768,-32768,  -405,-32768,  -541,-32768,  -878,-32768,  -439,-32768,
-32768,-32768,-32768,-32768,-32768,  1690,-32768,  1352,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1835,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1586,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -962,  -664,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768, -1318,-32768,-32768,-32768,  1256,  1093,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   913,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1915,-32768,  1815,
-32768,  2287,-32768,  1916,  2192,  -289,-32768,   -55,  1250,-32768,
-32768,   -25,  -523,  -513,  -139,   -15,  -106
};


#define	YYLAST		5053


static const short yytable[] = {   104,
   393,   193,   245,   530,   572,   772,  1115,   420,   651,   107,
   427,   428,   430,   490,   605,   585,  1422,  1053,   631,   632,
   904,   570,  1058,   511,   595,   640,   324,   599,   325,   436,
   603,   438,     4,   563,    -2,     4,  1014,   476,    25,   324,
   324,   325,   325,     6,   194,   584,     6,   446,   981,   863,
   786,   195,   787,    25,   447,  1015,   710,   324,  1461,   325,
   886,   525,   301,    40,  1467,   469,   211,    30,     4,   237,
  1473,  1079,   887,   528,   169,   170,   171,     6,  1481,     6,
     4,   589,     4,   238,  1487,  1488,  1082,   566,   203,   204,
     4,     6,  1123,     6,  1129,   864,   237,  1315,   462,   476,
  1270,     6,    31,  1271,   594,   598,   602,  1212,   895,   477,
   897,  1423,   628,    32,   212,  1272,  1273,  1274,   476,   238,
   248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
   258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
   268,   269,   190,   205,   206,  1090,   238,   518,   191,   273,
   274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
   284,   285,   286,   287,   288,   489,   237,   237,   563,   788,
   384,   477,   195,   375,    33,   710,   710,   710,   710,   476,
  1202,   370,   362,   371,   721,   376,   385,   443,   951,    34,
   477,    26,    27,   372,    35,    28,   386,   387,   952,   401,
   953,   564,    49,  1016,   388,    36,   389,    37,   517,  1275,
   743,    42,  1046,    43,   750,   447,   238,   238,   238,  1238,
   379,    26,    27,    38,   380,    28,   629,   754,   789,    44,
  1091,   402,   381,   888,   476,   233,   235,    39,   403,  1424,
  1092,   571,  1469,   905,   759,   108,   358,   983,   627,   753,
   326,   477,   710,   327,   199,   200,   359,   207,   208,   781,
   782,   783,   784,   326,   982,   571,   327,   327,   710,   710,
   710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
   710,   710,   710,   710,   327,    41,   710,   470,   239,   213,
   216,   217,   513,  1080,   437,   -62,   656,   890,  1470,   891,
   892,   322,   220,   221,   224,   225,   477,   119,  1083,   506,
   450,   451,   229,   230,  1124,   239,  1130,  1670,   429,   650,
  1338,   364,   452,  1675,   571,   571,   571,   571,  1035,   453,
   454,   455,   121,   377,   456,   457,   898,   460,   104,   751,
   465,   373,   519,   565,   390,   365,   954,   404,   107,   447,
   195,   366,   907,   908,   909,   910,   911,   912,   913,   914,
   915,   916,   917,   918,   919,   920,   921,   922,   122,    45,
   927,   -62,   617,   142,   619,   620,   621,   142,  1362,  1363,
   382,  1719,   710,   392,  1721,   239,   239,   239,  1116,  1037,
   123,  1722,   635,   271,   272,   636,   623,   333,   272,  1075,
    46,    47,    48,   447,   725,   726,   727,   728,   124,   -65,
   861,  1117,  1739,  1364,   521,   523,   195,   447,  1644,   984,
  1645,   292,  -603,  1026,  1365,   524,   195,   125,   705,   637,
   126,  1646,     6,   176,   177,   178,   179,   180,   560,   181,
   182,   183,   184,  1647,  1044,   185,   186,   187,   188,   189,
  1019,   272,   526,   190,   395,  1063,   127,   893,  1648,   191,
  1027,  1127,  1064,  1028,   396,   293,  1061,   128,  1500,  1503,
  1036,  1038,  1039,  1040,  1287,  1501,  1501,  1045,  1450,   397,
  1451,  1602,   808,   398,   809,   406,   644,   645,  1603,   176,
   177,   178,   179,   180,   129,   181,   182,   183,   184,   130,
   407,   185,   186,   187,   188,   189,   104,   104,   758,   190,
   131,   638,   639,   104,   641,   191,   107,   107,   408,   132,
   646,  1288,   649,   107,   994,   931,   652,   653,   755,   756,
   995,   710,   729,   133,   932,   933,   934,   618,   272,  1173,
   710,  1649,  1366,  1289,  1290,  1118,  1119,   661,   662,  1099,
   668,  1100,   872,   873,   874,   875,   876,   877,   878,   879,
   880,   134,   409,   881,   996,   664,   665,   882,   666,   667,
   997,  1031,  1032,  1033,  1034,   998,  1650,  1135,   135,  1475,
   883,   999,  1140,   136,  1210,  1047,  1101,  1102,  1103,  1104,
  1105,  1106,  1107,   711,   712,  1291,   714,   715,   137,   749,
   421,   422,   423,   424,  1213,  1617,  1617,   138,  1234,   716,
   717,   143,   399,   139,  1612,  1198,  1613,  1614,   946,   425,
   947,  1476,   718,   719,  1204,   723,   724,   948,   197,  1180,
  1292,  1182,   140,   410,   732,   733,   141,  1250,  1189,   736,
   737,  1076,  1077,  1517,  1518,  1519,  1520,  1521,  1522,   744,
   272,  1101,  1102,  1103,  1104,  1105,  1106,  1615,    67,    68,
    69,   144,  1097,    62,    63,    64,    65,    71,    72,    73,
    74,   935,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,    97,    98,    99,  1452,  1453,  1454,
  1152,   937,   145,   938,   939,   940,   941,   942,   943,   146,
  1108,   745,   272,  1632,  1477,   147,   855,  1020,  1021,  1022,
  1023,   746,   272,   747,   272,   884,    67,    68,   168,   803,
   804,   805,   806,  1328,   148,   807,   661,   766,   192,   871,
    75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,    97,    98,    99,   149,   949,   150,  1327,   151,
   176,   177,   178,   179,   180,  1616,   181,   182,   183,   184,
   867,   272,   185,   186,   187,   188,   189,   868,   869,  1066,
   190,   228,  1411,  1169,   272,   152,   191,   233,  1523,   801,
   802,   803,   804,   805,   806,  1331,  1241,   807,  1426,   153,
  1713,  1243,   176,   177,   178,   179,   180,   710,   181,   182,
   183,   184,  1170,   272,   185,   186,   187,   188,   189,  1171,
   272,   154,   190,   971,   155,  1347,  1172,   272,   191,   156,
  1349,   157,  1351,   972,  1278,  1206,   272,  1279,  1612,   944,
  1613,  1614,  1334,  1335,   413,  1374,  1348,   195,   158,  1280,
  1281,  1380,   159,  1282,  1283,  1384,   100,  1126,  1387,  1128,
  1369,   101,   160,  1390,   102,  1371,   973,   974,   975,   976,
   977,   978,   161,   244,  1399,  1101,  1102,  1103,  1104,  1105,
  1106,  1615,   243,   414,   162,  1153,  1336,   163,  1409,  1350,
   195,  1441,  1368,   195,  1342,   176,   177,   178,   179,   180,
   164,   181,   182,   183,   184,  1370,   195,   185,   186,   187,
   188,   189,   246,  1433,  1434,   190,  1436,   165,  1633,  1508,
   272,   191,   166,   415,   100,   416,  1510,   272,   167,   101,
   247,  1099,   102,  1100,   289,  1539,  1511,   272,  1542,   104,
   290,   522,   291,  1284,   187,   188,   189,   417,   302,   107,
   190,   185,   186,   187,   188,   189,   191,  1381,  1145,   190,
  1147,   308,  1149,  1478,   320,   191,  1554,  1555,  1101,  1102,
  1103,  1104,  1105,  1106,  1107,  1608,  1609,  1566,  1664,   272,
   331,   979,  1167,  1571,   824,   334,   335,   363,   369,    67,
    68,   670,   418,   412,   444,   431,   432,   433,   440,  1619,
   434,   435,  1418,    75,    76,    77,    78,    79,   671,   672,
   673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
   683,   684,   685,   686,   687,   688,   689,   690,   691,   692,
   693,   694,   695,   696,   439,   441,   449,   458,   463,   466,
   467,  1611,   471,   472,   473,   474,   475,   480,   481,   482,
  1546,    67,    68,   168,  1455,   483,  1548,   484,   485,   486,
   487,   488,   491,  1550,   492,    75,    76,    77,    78,    79,
    80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
    90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
   697,   495,  1111,   493,   494,   496,  1662,   498,   499,   500,
   825,   501,   826,   827,   828,   829,   503,   830,   831,   832,
   833,   834,   835,   504,   505,   507,   836,   508,   509,   837,
   510,   512,   838,   514,  1623,   839,   840,   841,   842,   843,
   844,   845,   846,   847,   848,   515,   516,   849,   527,   531,
    50,  1480,   850,   551,    51,   851,   558,   567,  1699,   559,
   569,   574,   576,  1667,   176,   177,   178,   179,   180,   577,
   181,   182,   183,   184,  1339,   578,   185,   186,   187,   188,
   189,   175,   581,  1427,   190,  1429,  1430,   583,   590,   591,
   191,   592,   593,   607,  1640,    52,   601,   322,   606,   609,
   698,    53,   611,   612,   613,   615,   699,   700,   616,   622,
   624,   633,   701,  1482,    54,   702,    55,   852,   925,   926,
   703,   704,   625,   705,   634,   642,    56,   647,   650,   654,
    57,   657,   658,   659,   464,   669,   663,   740,   713,  1378,
  1679,    58,   720,  1382,   722,   731,  1385,  1386,   735,   738,
   741,  1388,   742,   748,  1391,  1392,  1393,  1394,    59,   757,
  1395,  1396,   763,  1398,   764,  1400,  1753,   765,  1401,   100,
   780,   771,  1405,  1406,   101,  1408,   773,   102,  1711,   785,
   104,  1412,   775,   776,   777,   648,   778,   790,   856,   810,
   107,   817,   862,   819,   899,   900,   104,    67,    68,   670,
   820,   821,   822,    60,   857,    61,   107,   858,   859,   860,
   705,    75,    76,    77,    78,    79,   671,   672,   673,   674,
   675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
   685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
   695,   696,   176,   177,   178,   179,   180,  1681,   181,   182,
   183,   184,   896,  1294,   185,   186,   187,   188,   189,  1688,
   202,   866,   190,   210,   215,   219,   223,   227,   191,   232,
   902,   176,   177,   178,   179,   180,   901,   181,   182,   183,
   184,   807,   923,   185,   186,   187,   188,   189,  1558,   924,
   985,   190,  1562,  1295,   929,   986,   993,   191,   697,  1506,
  1296,  1297,  1509,  1000,   176,   177,   178,   179,   180,   824,
   181,   182,   183,   184,  1526,   987,   185,   186,   187,   188,
   189,  1024,  1298,  1025,   190,  1299,  1300,  1737,   988,   989,
   191,  1005,   990,   104,  1540,  1622,   104,   991,   992,  1001,
  1006,  1042,  1002,   107,  1003,  1043,   107,   296,  1004,  1101,
  1102,  1103,  1104,  1105,  1106,  1112,  1048,  1610,  1050,  1010,
  1007,  1008,  1051,  1041,   824,  1009,  1011,  1095,  1557,  1484,
  1559,  1029,  1067,  1056,  1301,   104,  1052,   956,  1049,   957,
   958,   104,  1054,  1057,  1059,   107,  1060,   863,  1062,  1070,
   959,   107,  1582,  1583,  1584,  1585,  1586,  1071,   698,  1072,
  1073,  1074,  1656,  1078,   699,   700,   960,   961,   962,  1302,
   701,  1085,  1086,   702,  1087,  1088,  1089,  1093,   703,   704,
   963,   705,  1094,  1096,  1121,   825,  1122,   826,   827,   828,
   829,  1132,   830,   831,   832,   833,   834,   835,  1133,   104,
  1134,   836,  1137,  1136,   837,  1138,  1139,   838,  1141,   107,
   839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
  1142,  1630,   849,  1143,  1144,  1154,  1155,   850,  1156,  1157,
   851,  1637,  1638,  1113,  1158,  1641,  1159,  1643,  1160,  1161,
   825,  1654,   826,   827,   828,   829,  1162,   830,   831,   832,
   833,   834,   835,  1163,   104,  1663,   836,  1164,  1165,   837,
  1166,  1168,   838,  1174,   107,   839,   840,   841,   842,   843,
   844,   845,   846,   847,   848,  1175,  1176,   849,  1177,  1678,
  1178,  1179,   850,  1181,  1183,   851,  1184,   181,   182,   183,
   184,   964,  1541,   185,   186,   187,   188,   189,   965,  1693,
  1185,   190,  1186,  1187,  1188,  1190,   104,   191,  1701,  1191,
  1192,  1195,  1196,  1197,  1200,  1201,   107,  1207,  1205,  1208,
   176,   177,   178,   179,   180,  1714,   181,   182,   183,   184,
  1209,  1211,   185,   186,   187,   188,   189,  1214,  1216,  1217,
   190,  1218,  1219,  1220,  1222,  1224,   191,  1547,  1225,  1726,
  1226,  1227,  1729,   310,   311,   312,   313,   314,   315,   316,
   317,   318,  1228,  1229,  1230,  1231,    67,    68,   461,    70,
  1741,  1232,  1743,  1233,  1235,    71,    72,    73,    74,  1748,
    75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,    97,    98,    99,    67,    68,    69,   824,  1242,
  1244,  1236,  1237,  1239,    71,    72,    73,    74,   238,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,    67,    68,    69,    70,  1240,  1245,
  1246,  1261,  1259,    71,    72,    73,    74,  1248,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,    67,    68,    69,  1249,  1260,  1252,  1253,
  1254,  1255,    71,    72,    73,    74,  1257,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,  1258,  1262,   825,  1320,   826,   827,   828,   829,
  1263,   830,   831,   832,   833,   834,   835,  1264,  1265,  1305,
   836,  1322,  1266,   837,  1314,  1267,   838,  1268,  1304,   839,
   840,   841,   842,   843,   844,   845,   846,   847,   848,  1306,
  1307,   849,  1333,  1343,  1344,  1345,   850,  1308,  1309,   851,
  1346,  1310,  1323,  1340,   100,  1311,  1312,  1313,  1324,   101,
  1564,  1325,   102,  1565,  1353,   824,  1326,   239,  1354,  1329,
   103,   791,   792,   793,   794,   795,   796,   797,   798,   799,
   800,  1330,   195,   801,   802,   803,   804,   805,   806,  1332,
  1355,   807,  1356,   100,  1358,  1360,  1361,  1372,   101,  1373,
  1375,   102,  1055,  1376,  1377,  1379,  1383,  1389,  1397,   103,
  1402,  1549,   824,   176,   177,   178,   179,   180,  1403,   181,
   182,   183,   184,  1404,  1407,   185,   186,   187,   188,   189,
  1410,  1413,   100,   190,  1414,  1415,  1416,   101,  1417,   191,
   102,  1419,  1431,  1425,   336,  1428,  1435,  1443,   103,   178,
   179,   180,  1444,   181,   182,   183,   184,  1438,   824,   185,
   186,   187,   188,   189,  1439,  1442,  1445,   190,  1446,  1447,
  1459,   100,  1449,   191,  1456,  1457,   101,  1458,  1464,   102,
  1460,   825,  1463,   826,   827,   828,   829,   103,   830,   831,
   832,   833,   834,   835,  1465,  1468,  1471,   836,  1474,  1483,
   837,  1486,   824,   838,  1493,  1494,   839,   840,   841,   842,
   843,   844,   845,   846,   847,   848,  1496,  1499,   849,  1497,
  1504,  1498,  1515,   850,  1513,  1507,   851,  1505,   825,  1514,
   826,   827,   828,   829,  1512,   830,   831,   832,   833,   834,
   835,  1516,  1525,  1527,   836,  1528,  1529,   837,   824,  1530,
   838,  1543,  1531,   839,   840,   841,   842,   843,   844,   845,
   846,   847,   848,  1534,  1535,   849,  1536,  1537,  1538,  1544,
   850,  1545,  1556,   851,   825,  1560,   826,   827,   828,   829,
  1561,   830,   831,   832,   833,   834,   835,  1563,  1551,  1567,
   836,  1572,   824,   837,  1574,  1575,   838,  1576,  1577,   839,
   840,   841,   842,   843,   844,   845,   846,   847,   848,  1578,
  1579,   849,  1580,  1581,  1589,  1591,   850,  1590,   825,   851,
   826,   827,   828,   829,  1587,   830,   831,   832,   833,   834,
   835,  1592,  1593,  1594,   836,  1552,  1596,   837,   824,  1597,
   838,  1598,  1599,   839,   840,   841,   842,   843,   844,   845,
   846,   847,   848,  1621,  1600,   849,  1624,  1601,  1606,  1631,
   850,  1620,  1634,   851,   825,  1635,   826,   827,   828,   829,
  1639,   830,   831,   832,   833,   834,   835,  1636,  1642,  1652,
   836,  1553,   824,   837,  1657,  1653,   838,  1655,  1658,   839,
   840,   841,   842,   843,   844,   845,   846,   847,   848,  1659,
  1661,   849,  1665,   571,  1668,  1669,   850,  1673,   825,   851,
   826,   827,   828,   829,  1677,   830,   831,   832,   833,   834,
   835,  1680,  1682,  1690,   836,  1697,  1685,   837,   824,  1684,
   838,  1686,  1687,   839,   840,   841,   842,   843,   844,   845,
   846,   847,   848,  1485,  1692,   849,  1694,  1695,  1696,  1698,
   850,  1700,  1703,   851,   825,  1704,   826,   827,   828,   829,
  1706,   830,   831,   832,   833,   834,   835,  1707,  1708,  1709,
   836,  1702,  1489,   837,  1710,  1712,   838,  1715,  1718,   839,
   840,   841,   842,   843,   844,   845,   846,   847,   848,  1724,
  1727,   849,  1723,  1490,  1728,  1734,   850,  1731,   825,   851,
   826,   827,   828,   829,  1735,   830,   831,   832,   833,   834,
   835,  1740,  1742,  1749,   836,  1730,  1750,   837,  1752,  1754,
   838,  1492,  1755,   839,   840,   841,   842,   843,   844,   845,
   846,   847,   848,  1757,  1758,   849,  1069,  1068,   812,  1193,
   850,   660,  1625,   851,   825,   968,   826,   827,   828,   829,
  1421,   830,   831,   832,   833,   834,   835,  1569,   610,  1318,
   836,  1732,   739,   837,   614,   236,   838,   321,     0,   839,
   840,   841,   842,   843,   844,   845,   846,   847,   848,  1626,
     0,   849,     0,     0,     0,     0,   850,     0,     0,   851,
     0,     0,    67,    68,   168,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,  1733,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
    99,  1627,     0,     0,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,  1744,  1628,     0,   190,     0,     0,     0,     0,     0,
   191,     0,     0,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,  1629,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
   181,   182,   183,   184,  1705,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,     0,     0,
   191,     0,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,   797,   798,   799,   800,     0,   191,
   801,   802,   803,   804,   805,   806,     0,     0,   807,     0,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,     0,     0,   191,     0,     0,     0,
   100,     0,     0,     0,     0,   101,     0,     0,   102,     0,
     0,     0,     0,   464,     0,     0,     0,     0,     0,     0,
     0,     0,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
   191,   181,   182,   183,   184,     0,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,    67,    68,    69,     0,
     0,   191,     0,     0,     0,    71,    72,    73,    74,     0,
    75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,    97,    98,    99,    67,    68,    69,     0,     0,
     0,     0,     0,     0,    71,    72,    73,    74,  1065,    75,
    76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
    86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
    96,    97,    98,    99,    67,    68,   168,   459,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
    97,    98,    99,    67,    68,   168,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
    98,    99,   520,    68,   168,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
    99,   360,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   100,     0,     0,     0,     0,   101,
     0,     0,   102,   176,   177,   178,   179,   180,   361,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
     0,     0,     0,   100,   337,  1203,     0,     0,   101,     0,
     0,   102,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     4,     0,     0,     0,   191,     5,
     0,     0,   100,   348,     0,     6,     0,   101,     0,     0,
   102,     0,     0,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,     7,     0,   191,
     0,   100,     0,     8,   355,     0,   101,     0,     0,   102,
     0,     0,     0,     0,     0,     0,     9,     0,    10,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
     0,     0,    12,     0,     0,     0,     0,     0,     0,     0,
   100,     0,     0,    13,     0,   101,     0,     0,   102,     0,
     0,     0,   532,     0,     0,     0,     0,     0,     0,     0,
    14,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,     0,     0,   191,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,    15,   533,    16,   190,     0,
     0,     0,     0,     0,   191,   791,   792,   793,   794,   795,
   796,   797,   798,   799,   800,     0,     0,   801,   802,   803,
   804,   805,   806,     0,     0,   807,     0,   534,     0,     0,
     0,     0,     0,    17,    18,    19,     0,     0,   791,   792,
   793,   794,   795,   796,   797,   798,   799,   800,   535,     0,
   801,   802,   803,   804,   805,   806,     0,     0,   807,   536,
   537,   538,   539,   540,   541,   542,   543,   544,   545,   546,
   547,   548,   549,   550,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
   191,   181,   182,   183,   184,   356,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
   180,   191,   181,   182,   183,   184,   357,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
   179,   180,   191,   181,   182,   183,   184,   552,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
   178,   179,   180,   191,   181,   182,   183,   184,   553,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
   177,   178,   179,   180,   191,   181,   182,   183,   184,  1018,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
   176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
  1269,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
   184,  1277,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
   183,   184,  1286,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
   182,   183,   184,  1440,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
   181,   182,   183,   184,  1462,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
   191,   181,   182,   183,   184,  1466,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
   180,   191,   181,   182,   183,   184,  1472,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
   179,   180,   191,   181,   182,   183,   184,  1479,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
   178,   179,   180,   191,   181,   182,   183,   184,  1495,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
   177,   178,   179,   180,   191,   181,   182,   183,   184,  1607,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
   176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
  1672,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
   184,  1674,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
   183,   184,  1691,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
   182,   183,   184,  1736,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
   181,   182,   183,   184,  1738,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
   191,   181,   182,   183,   184,  1745,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,     0,
     0,   191,     0,     0,     0,   561,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
     0,     0,   191,     0,     0,     0,   626,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,     0,     0,   191,     0,     0,     0,   655,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     0,     0,     0,     0,   191,     0,     0,     0,  1030,   176,
   177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     0,     0,     0,     0,     0,   191,     0,     0,     0,  1321,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,     0,     0,   191,     0,     0,     0,
  1570,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,     0,     0,   191,     0,     0,
     0,  1573,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,     0,     0,   191,     0,
     0,     0,  1588,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
     0,     0,     0,  1666,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,     0,     0,
   191,     0,     0,     0,  1725,   176,   177,   178,   179,   180,
     0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,     0,
     0,   191,     0,     0,     0,  1751,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,   270,     0,
     0,     0,   191,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,   338,     0,   191,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,   339,     0,   191,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,   340,     0,   191,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,   341,     0,
   191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,   342,     0,   191,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     0,     0,   343,     0,   191,   176,   177,   178,   179,   180,
     0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,   344,
     0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,   345,     0,   191,   176,
   177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     0,     0,     0,   346,     0,   191,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
   347,     0,   191,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,   349,     0,   191,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,   350,     0,   191,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,   351,     0,   191,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,   352,     0,
   191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,   353,     0,   191,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     0,     0,   354,     0,   191,   176,   177,   178,   179,   180,
     0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,   554,
     0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,   555,     0,   191,   176,
   177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     0,     0,     0,   556,     0,   191,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
   557,     0,   191,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,   761,     0,   191,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,   762,     0,   191,   176,   177,   178,
   179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
   186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
     0,   770,     0,   191,   176,   177,   178,   179,   180,     0,
   181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
   189,     0,     0,     0,   190,     0,     0,     0,  1595,     0,
   191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
   184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
     0,   190,     0,     0,     0,  1605,     0,   191,   176,   177,
   178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
   185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     0,     0,  1671,     0,   191,   176,   177,   178,   179,   180,
     0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
   188,   189,     0,     0,     0,   190,     0,     0,     0,  1676,
     0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
   183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
     0,     0,   190,     0,     0,     0,  1683,     0,   191,   176,
   177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
     0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     0,     0,     0,  1716,     0,   191,   176,   177,   178,   179,
   180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
  1720,     0,   191,   176,   177,   178,   179,   180,     0,   181,
   182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
     0,     0,     0,   190,     0,     0,     0,  1747,     0,   191,
   176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
   190,     0,     0,     0,     0,     0,   191,   791,   792,   793,
   794,   795,   796,   797,   798,   799,   800,     0,     0,   801,
   802,   803,   804,   805,   806,     0,     0,   807,     0,   179,
   180,  1337,   181,   182,   183,   184,     0,     0,   185,   186,
   187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
     0,     0,   191,   791,   792,   793,   794,   795,   796,   797,
   798,   799,   800,     0,     0,   801,   802,   803,   804,   805,
   806,     0,     0,   807,     0,   903,   793,   794,   795,   796,
   797,   798,   799,   800,     0,     0,   801,   802,   803,   804,
   805,   806,     0,     0,   807,   794,   795,   796,   797,   798,
   799,   800,     0,     0,   801,   802,   803,   804,   805,   806,
     0,     0,   807
};

static const short yycheck[] = {    25,
   301,   108,   142,   445,   472,   670,   969,   308,   550,    25,
   311,   312,   313,   394,   500,   483,     5,   896,   532,   533,
     5,     7,   901,   429,   492,   539,     3,   495,     5,   319,
   498,   321,     5,     5,     0,     5,    61,    11,   197,     3,
     3,     5,     5,    16,   222,     7,    16,   222,     5,     5,
     3,   229,     5,   197,   229,    80,   580,     3,  1377,     5,
    55,   442,   221,     5,  1383,     5,     5,   221,     5,     5,
  1389,     5,    67,    50,   100,   101,   102,    16,  1397,    16,
     5,   487,     5,    55,  1403,  1404,     5,   468,   227,   228,
     5,    16,     5,    16,     5,    51,     5,     5,   364,    11,
   119,    16,   227,   122,     7,     7,     7,     7,   773,    83,
   775,   100,   525,   227,    53,   134,   135,   136,    11,    55,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
   166,   167,   218,   227,   228,     5,    55,   437,   224,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   222,     5,     5,     5,   122,
    54,    83,   229,    68,   227,   699,   700,   701,   702,    11,
  1059,    68,   289,    70,   590,    80,    70,   327,    70,   227,
    83,     5,     6,    80,   227,     9,    80,    81,    80,    80,
    82,   467,     7,   228,    88,   227,    90,   227,   222,   228,
   616,     5,    50,     7,   627,   229,    55,    55,    55,  1098,
    68,     5,     6,   227,    72,     9,   527,   633,   181,    23,
    90,   112,    80,   228,    11,     5,     6,   227,   119,   228,
   100,   227,     7,   228,   650,   221,   272,   221,   211,   630,
   227,    83,   776,   230,   227,   228,   272,   227,   228,   699,
   700,   701,   702,   227,   221,   227,   230,   230,   792,   793,
   794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
   804,   805,   806,   807,   230,   227,   810,   227,   224,   228,
   227,   228,   432,   227,   320,   221,   562,    68,     7,    70,
    71,   227,   227,   228,   227,   228,    83,   160,   227,   416,
   336,   337,   227,   228,   227,   224,   227,  1636,   227,   227,
  1199,   197,   348,  1642,   227,   227,   227,   227,   221,   355,
   356,   357,     7,   228,   360,   361,   776,   363,   364,   629,
   366,   228,   222,   222,   228,   221,   228,   228,   364,   229,
   229,   227,   792,   793,   794,   795,   796,   797,   798,   799,
   800,   801,   802,   803,   804,   805,   806,   807,     7,   163,
   810,   221,   512,   227,   514,   515,   516,   227,    64,    65,
   228,  1700,   906,   222,  1703,   224,   224,   224,    70,   221,
     7,  1710,   206,   228,   229,   209,   222,   228,   229,   941,
   194,   195,   196,   229,   100,   101,   102,   103,     7,   222,
   222,    93,  1731,    99,   440,   441,   229,   229,    70,   825,
    72,     5,   221,   865,   110,   228,   229,     7,   227,   536,
     7,    83,    16,   198,   199,   200,   201,   202,   464,   204,
   205,   206,   207,    95,   221,   210,   211,   212,   213,   214,
   856,   229,   230,   218,    70,   222,     7,   228,   110,   224,
   866,   975,   229,   869,    80,    49,   906,     7,   222,   222,
   876,   877,   878,   879,    72,   229,   229,   883,  1357,    95,
  1359,   222,   224,    99,   226,    80,   542,   543,   229,   198,
   199,   200,   201,   202,     7,   204,   205,   206,   207,     7,
    95,   210,   211,   212,   213,   214,   532,   533,   648,   218,
     7,   537,   538,   539,   540,   224,   532,   533,   113,     7,
   546,   119,   548,   539,   221,    82,   552,   553,   635,   636,
   227,  1055,   228,     7,    91,    92,    93,   228,   229,  1025,
  1064,   193,   228,   141,   142,   227,   228,   227,   228,    67,
   576,    69,    55,    56,    57,    58,    59,    60,    61,    62,
    63,     7,   157,    66,   221,   227,   228,    70,   227,   228,
   227,   872,   873,   874,   875,   221,   228,   983,     7,     7,
    83,   227,   988,     7,  1070,   886,   104,   105,   106,   107,
   108,   109,   110,   227,   228,   193,   227,   228,     7,   625,
   210,   211,   212,   213,  1072,  1568,  1569,   221,  1094,   227,
   228,     7,   228,   221,    67,  1055,    69,    70,    80,   229,
    82,     7,   227,   228,  1064,   227,   228,    89,   228,  1035,
   228,  1037,   221,   228,   227,   228,   221,  1123,  1044,   227,
   228,   942,   943,    73,    74,    75,    76,    77,    78,   228,
   229,   104,   105,   106,   107,   108,   109,   110,     3,     4,
     5,   221,   963,   162,   163,   164,   165,    12,    13,    14,
    15,   228,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,    40,    41,  1362,  1363,  1364,
  1001,    80,   221,    82,    83,    84,    85,    86,    87,   221,
   228,   228,   229,  1592,     7,   221,   742,   857,   858,   859,
   860,   228,   229,   228,   229,   228,     3,     4,     5,   212,
   213,   214,   215,  1175,   221,   218,   227,   228,     7,   765,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,   221,   228,   221,  1174,   221,
   198,   199,   200,   201,   202,   228,   204,   205,   206,   207,
   228,   229,   210,   211,   212,   213,   214,   228,   229,   929,
   218,     5,  1306,   228,   229,   221,   224,     5,   228,   210,
   211,   212,   213,   214,   215,  1186,  1107,   218,  1322,   221,
  1689,  1112,   198,   199,   200,   201,   202,  1341,   204,   205,
   206,   207,   228,   229,   210,   211,   212,   213,   214,   228,
   229,   221,   218,    70,   221,  1216,   228,   229,   224,   221,
  1221,   221,  1223,    80,   119,   228,   229,   122,    67,   228,
    69,    70,   227,   228,    80,  1261,   228,   229,   221,   134,
   135,  1267,   221,   138,   139,  1271,   211,   974,  1274,   976,
  1251,   216,   221,  1279,   219,  1256,   113,   114,   115,   116,
   117,   118,   221,   228,  1290,   104,   105,   106,   107,   108,
   109,   110,     6,   119,   221,  1002,  1197,   221,  1304,   228,
   229,  1341,   228,   229,  1205,   198,   199,   200,   201,   202,
   221,   204,   205,   206,   207,   228,   229,   210,   211,   212,
   213,   214,     5,  1329,  1330,   218,  1332,   221,  1593,   228,
   229,   224,   221,   159,   211,   161,   228,   229,   221,   216,
     5,    67,   219,    69,   229,  1459,   228,   229,  1462,   975,
     7,   228,     5,   228,   212,   213,   214,   183,   221,   975,
   218,   210,   211,   212,   213,   214,   224,  1268,   994,   218,
   996,   221,   998,     7,   229,   224,   227,   228,   104,   105,
   106,   107,   108,   109,   110,   228,   229,  1501,   228,   229,
   221,   228,  1018,  1507,     5,   222,   229,   197,   221,     3,
     4,     5,   228,   227,   229,   227,   227,   227,     8,   228,
   227,   227,  1313,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    47,   228,   227,     5,   222,     3,   197,
   197,  1565,     5,     5,   227,     5,   227,     5,   227,     5,
  1466,     3,     4,     5,  1365,     5,  1472,   227,   227,   227,
   197,   222,     5,  1479,     5,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
   104,     5,   228,   227,   227,   227,  1620,     5,   227,     5,
   121,     5,   123,   124,   125,   126,     5,   128,   129,   130,
   131,   132,   133,   227,     5,     5,   137,   222,     5,   140,
   177,   227,   143,   227,  1576,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   227,   227,   158,   110,     7,
     3,     7,   163,   222,     7,   166,     7,   227,  1672,   222,
     7,     7,   221,  1631,   198,   199,   200,   201,   202,   221,
   204,   205,   206,   207,  1200,     7,   210,   211,   212,   213,
   214,     8,     7,  1323,   218,  1325,  1326,     7,   197,     7,
   224,     5,     7,   228,  1600,    48,   227,   227,     7,     7,
   204,    54,     7,     7,     7,     5,   210,   211,   229,     7,
     7,   227,   216,     7,    67,   219,    69,   228,   222,   223,
   224,   225,     8,   227,     5,     5,    79,     5,   227,   197,
    83,     7,     7,     5,   224,     5,     7,   228,     7,  1265,
  1646,    94,     7,  1269,     7,     7,  1272,  1273,     7,     7,
   229,  1277,   227,     7,  1280,  1281,  1282,  1283,   111,     6,
  1286,  1287,    52,  1289,     7,  1291,  1752,   227,  1294,   211,
     5,   222,  1298,  1299,   216,  1301,   221,   219,  1684,     3,
  1306,  1307,   221,   221,   221,   227,   221,     5,   229,   221,
  1306,     7,   222,   227,     5,     5,  1322,     3,     4,     5,
   227,   227,   227,   156,   227,   158,  1322,   227,   227,   227,
   227,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,   198,   199,   200,   201,   202,  1648,   204,   205,
   206,   207,   221,    72,   210,   211,   212,   213,   214,  1660,
   111,   229,   218,   114,   115,   116,   117,   118,   224,   120,
   206,   198,   199,   200,   201,   202,   221,   204,   205,   206,
   207,   218,     3,   210,   211,   212,   213,   214,  1495,     3,
   221,   218,  1499,   112,   227,   221,     7,   224,   104,  1425,
   119,   120,  1428,   227,   198,   199,   200,   201,   202,     5,
   204,   205,   206,   207,  1440,   221,   210,   211,   212,   213,
   214,     7,   141,     5,   218,   144,   145,  1728,   221,   221,
   224,   227,   221,  1459,  1460,  1575,  1462,   221,   221,   221,
   227,     5,   221,  1459,   221,     5,  1462,   198,   221,   104,
   105,   106,   107,   108,   109,   110,     5,  1564,     5,   227,
   221,   221,     5,   227,     5,   221,   221,     3,  1494,     7,
  1496,   221,     5,   221,   193,  1501,   222,    67,   227,    69,
    70,  1507,   222,   222,   221,  1501,   228,     5,   222,     5,
    80,  1507,  1518,  1519,  1520,  1521,  1522,     5,   204,     5,
     5,   227,  1609,     5,   210,   211,    96,    97,    98,   228,
   216,     5,     5,   219,     5,     5,     5,     5,   224,   225,
   110,   227,     5,     3,     5,   121,     5,   123,   124,   125,
   126,     5,   128,   129,   130,   131,   132,   133,     7,  1565,
     5,   137,     5,     7,   140,     5,     5,   143,     5,  1565,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     5,  1587,   158,     5,     5,     5,     5,   163,     5,     5,
   166,  1597,  1598,   228,     5,  1601,     5,  1603,     5,     5,
   121,  1607,   123,   124,   125,   126,     5,   128,   129,   130,
   131,   132,   133,   221,  1620,  1621,   137,   221,   227,   140,
     5,   228,   143,   229,  1620,   146,   147,   148,   149,   150,
   151,   152,   153,   154,   155,   224,     7,   158,     7,  1645,
     7,     7,   163,     7,     7,   166,     7,   204,   205,   206,
   207,   221,   228,   210,   211,   212,   213,   214,   228,  1665,
     7,   218,     3,     7,     7,     7,  1672,   224,  1674,     7,
     7,     7,     7,   229,   227,   222,  1672,     7,   221,     7,
   198,   199,   200,   201,   202,  1691,   204,   205,   206,   207,
     7,     7,   210,   211,   212,   213,   214,   227,     5,     7,
   218,     7,     7,     7,     7,     7,   224,   228,     7,  1715,
     7,     7,  1718,   168,   169,   170,   171,   172,   173,   174,
   175,   176,     7,     7,     7,     7,     3,     4,     5,     6,
  1736,     7,  1738,     7,     7,    12,    13,    14,    15,  1745,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,     3,     4,     5,     5,   221,
   221,     7,     7,     5,    12,    13,    14,    15,    55,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,     3,     4,     5,     6,     5,     5,
     5,   229,   222,    12,    13,    14,    15,     7,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,     3,     4,     5,     7,   222,     7,     7,
     7,     7,    12,    13,    14,    15,     7,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,     7,   229,   121,     7,   123,   124,   125,   126,
   229,   128,   129,   130,   131,   132,   133,   222,   229,   222,
   137,   227,   229,   140,   222,   229,   143,   229,   229,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   229,
   229,   158,     7,     7,     7,    95,   163,   228,   228,   166,
     7,   229,   227,   222,   211,   229,   229,   229,   228,   216,
   178,   227,   219,   181,   222,     5,   227,   224,     7,   229,
   227,   198,   199,   200,   201,   202,   203,   204,   205,   206,
   207,   229,   229,   210,   211,   212,   213,   214,   215,   229,
     7,   218,     7,   211,     7,     7,     7,     7,   216,     7,
     5,   219,   229,     5,   227,     5,   227,   227,   227,   227,
     5,   228,     5,   198,   199,   200,   201,   202,   227,   204,
   205,   206,   207,   227,   227,   210,   211,   212,   213,   214,
     7,     7,   211,   218,     7,     5,     5,   216,     5,   224,
   219,     7,   228,   227,   229,   227,     3,     5,   227,   200,
   201,   202,     5,   204,   205,   206,   207,   222,     5,   210,
   211,   212,   213,   214,   222,   222,     5,   218,     5,   221,
   229,   211,     7,   224,     5,     5,   216,   222,   222,   219,
   229,   121,   229,   123,   124,   125,   126,   227,   128,   129,
   130,   131,   132,   133,   229,     7,     7,   137,     7,     7,
   140,     7,     5,   143,   222,   229,   146,   147,   148,   149,
   150,   151,   152,   153,   154,   155,   229,   229,   158,   222,
   227,   222,   228,   163,   222,   229,   166,   227,   121,   222,
   123,   124,   125,   126,   229,   128,   129,   130,   131,   132,
   133,   222,   222,   228,   137,     7,   228,   140,     5,     5,
   143,     5,     7,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,     7,     7,   158,     7,     7,     7,     7,
   163,     5,     7,   166,   121,     7,   123,   124,   125,   126,
     7,   128,   129,   130,   131,   132,   133,     7,   228,     7,
   137,   228,     5,   140,   228,   227,   143,   224,     7,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,     7,
     7,   158,     7,     5,    94,   222,   163,     7,   121,   166,
   123,   124,   125,   126,   227,   128,   129,   130,   131,   132,
   133,   229,   229,   222,   137,   228,   127,   140,     5,   229,
   143,   229,   222,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,   227,   229,   158,     7,   229,   222,     5,
   163,   229,     7,   166,   121,     7,   123,   124,   125,   126,
     7,   128,   129,   130,   131,   132,   133,   227,   227,     7,
   137,   228,     5,   140,     5,     7,   143,     7,     5,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,     5,
   221,   158,   229,   227,   222,   222,   163,   222,   121,   166,
   123,   124,   125,   126,     5,   128,   129,   130,   131,   132,
   133,     5,     5,   228,   137,   228,     7,   140,     5,   229,
   143,     7,     7,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,     7,   228,   158,     7,     7,     7,     7,
   163,   227,   227,   166,   121,     7,   123,   124,   125,   126,
     7,   128,   129,   130,   131,   132,   133,     7,     7,     7,
   137,   228,     7,   140,   227,     7,   143,   227,   229,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,   222,
     7,   158,   228,     7,    48,     7,   163,   227,   121,   166,
   123,   124,   125,   126,     7,   128,   129,   130,   131,   132,
   133,     7,     7,   111,   137,   228,     7,   140,     5,     7,
   143,     7,   228,   146,   147,   148,   149,   150,   151,   152,
   153,   154,   155,     0,     0,   158,   933,   932,   709,  1048,
   163,   567,     7,   166,   121,   820,   123,   124,   125,   126,
  1318,   128,   129,   130,   131,   132,   133,  1505,   504,  1164,
   137,   228,   608,   140,   509,   139,   143,   236,    -1,   146,
   147,   148,   149,   150,   151,   152,   153,   154,   155,     7,
    -1,   158,    -1,    -1,    -1,    -1,   163,    -1,    -1,   166,
    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   228,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,     7,    -1,    -1,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,   228,     7,    -1,   218,    -1,    -1,    -1,    -1,    -1,
   224,    -1,    -1,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,     7,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,   224,
   204,   205,   206,   207,     7,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,
   224,    -1,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,   198,   199,   200,   201,   202,   224,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,   204,   205,   206,   207,    -1,   224,
   210,   211,   212,   213,   214,   215,    -1,    -1,   218,    -1,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
   211,    -1,    -1,    -1,    -1,   216,    -1,    -1,   219,    -1,
    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,   198,   199,   200,   201,   202,   224,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,   224,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,
   224,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,     3,     4,     5,    -1,
    -1,   224,    -1,    -1,    -1,    12,    13,    14,    15,    -1,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,     3,     4,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    12,    13,    14,    15,    55,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,     3,     4,     5,     6,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
    39,    40,    41,     3,     4,     5,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,   216,
    -1,    -1,   219,   198,   199,   200,   201,   202,     8,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,
    -1,    -1,    -1,   211,   229,     8,    -1,    -1,   216,    -1,
    -1,   219,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,     5,    -1,    -1,    -1,   224,    10,
    -1,    -1,   211,   229,    -1,    16,    -1,   216,    -1,    -1,
   219,    -1,    -1,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,    48,    -1,   224,
    -1,   211,    -1,    54,   229,    -1,   216,    -1,    -1,   219,
    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   211,    -1,    -1,    94,    -1,   216,    -1,    -1,   219,    -1,
    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   111,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,   156,   115,   158,   218,    -1,
    -1,    -1,    -1,    -1,   224,   198,   199,   200,   201,   202,
   203,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,   215,    -1,    -1,   218,    -1,   146,    -1,    -1,
    -1,    -1,    -1,   194,   195,   196,    -1,    -1,   198,   199,
   200,   201,   202,   203,   204,   205,   206,   207,   167,    -1,
   210,   211,   212,   213,   214,   215,    -1,    -1,   218,   178,
   179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
   189,   190,   191,   192,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,
   224,   204,   205,   206,   207,   229,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,
   202,   224,   204,   205,   206,   207,   229,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,
   201,   202,   224,   204,   205,   206,   207,   229,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,
   200,   201,   202,   224,   204,   205,   206,   207,   229,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,   198,
   199,   200,   201,   202,   224,   204,   205,   206,   207,   229,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
   198,   199,   200,   201,   202,   224,   204,   205,   206,   207,
   229,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,   198,   199,   200,   201,   202,   224,   204,   205,   206,
   207,   229,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,   198,   199,   200,   201,   202,   224,   204,   205,
   206,   207,   229,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,   198,   199,   200,   201,   202,   224,   204,
   205,   206,   207,   229,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,   224,
   204,   205,   206,   207,   229,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,
   224,   204,   205,   206,   207,   229,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,
   202,   224,   204,   205,   206,   207,   229,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,   200,
   201,   202,   224,   204,   205,   206,   207,   229,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,   198,   199,
   200,   201,   202,   224,   204,   205,   206,   207,   229,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,   198,
   199,   200,   201,   202,   224,   204,   205,   206,   207,   229,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
   198,   199,   200,   201,   202,   224,   204,   205,   206,   207,
   229,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,   198,   199,   200,   201,   202,   224,   204,   205,   206,
   207,   229,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,   198,   199,   200,   201,   202,   224,   204,   205,
   206,   207,   229,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,   198,   199,   200,   201,   202,   224,   204,
   205,   206,   207,   229,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,   224,
   204,   205,   206,   207,   229,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,   198,   199,   200,   201,   202,
   224,   204,   205,   206,   207,   229,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
    -1,   224,    -1,    -1,    -1,   228,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
    -1,    -1,   224,    -1,    -1,    -1,   228,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,    -1,    -1,   224,    -1,    -1,    -1,   228,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,
    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,   228,   198,
   199,   200,   201,   202,    -1,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,   228,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
   228,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
    -1,   228,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,    -1,
    -1,    -1,   228,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,   224,
    -1,    -1,    -1,   228,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,
   224,    -1,    -1,    -1,   228,   198,   199,   200,   201,   202,
    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
    -1,   224,    -1,    -1,    -1,   228,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,   220,    -1,
    -1,    -1,   224,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,   222,    -1,   224,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,
   224,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,
    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,   202,
    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,
    -1,   224,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,
   199,   200,   201,   202,    -1,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
   222,    -1,   224,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,   222,    -1,   224,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,
   224,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,
    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,   202,
    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,
    -1,   224,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,
   199,   200,   201,   202,    -1,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
   222,    -1,   224,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,
   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,
    -1,   222,    -1,   224,   198,   199,   200,   201,   202,    -1,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,
   224,   198,   199,   200,   201,   202,    -1,   204,   205,   206,
   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,
    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,   199,
   200,   201,   202,    -1,   204,   205,   206,   207,    -1,    -1,
   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,    -1,
    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,   202,
    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,   212,
   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,
    -1,   224,   198,   199,   200,   201,   202,    -1,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,    -1,
    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,   198,
   199,   200,   201,   202,    -1,   204,   205,   206,   207,    -1,
    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,   218,
    -1,    -1,    -1,   222,    -1,   224,   198,   199,   200,   201,
   202,    -1,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
   222,    -1,   224,   198,   199,   200,   201,   202,    -1,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
    -1,    -1,    -1,   218,    -1,    -1,    -1,   222,    -1,   224,
   198,   199,   200,   201,   202,    -1,   204,   205,   206,   207,
    -1,    -1,   210,   211,   212,   213,   214,    -1,    -1,    -1,
   218,    -1,    -1,    -1,    -1,    -1,   224,   198,   199,   200,
   201,   202,   203,   204,   205,   206,   207,    -1,    -1,   210,
   211,   212,   213,   214,   215,    -1,    -1,   218,    -1,   201,
   202,   222,   204,   205,   206,   207,    -1,    -1,   210,   211,
   212,   213,   214,    -1,    -1,    -1,   218,    -1,    -1,    -1,
    -1,    -1,   224,   198,   199,   200,   201,   202,   203,   204,
   205,   206,   207,    -1,    -1,   210,   211,   212,   213,   214,
   215,    -1,    -1,   218,    -1,   220,   200,   201,   202,   203,
   204,   205,   206,   207,    -1,    -1,   210,   211,   212,   213,
   214,   215,    -1,    -1,   218,   201,   202,   203,   204,   205,
   206,   207,    -1,    -1,   210,   211,   212,   213,   214,   215,
    -1,    -1,   218
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
#line 330 "GetDP.y"
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
#line 364 "GetDP.y"
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
#line 405 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 428 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 443 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 445 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 447 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 449 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 451 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 453 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 455 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 457 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 459 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 461 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 463 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 465 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 467 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 469 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 471 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 473 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 475 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 477 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 479 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 481 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 483 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 491 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 508 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 515 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 518 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 521 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 523 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 52:
#line 537 "GetDP.y"
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
#line 546 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = yyvsp[-7].i ; 
    ;
    break;}
case 54:
#line 553 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ;
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 55:
#line 563 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 56:
#line 568 "GetDP.y"
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
#line 580 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 58:
#line 589 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 59:
#line 600 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 60:
#line 605 "GetDP.y"
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
#line 642 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 62:
#line 645 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 63:
#line 657 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 64:
#line 659 "GetDP.y"
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
#line 675 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 66:
#line 678 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 67:
#line 681 "GetDP.y"
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
#line 732 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 69:
#line 745 "GetDP.y"
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
#line 769 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 71:
#line 776 "GetDP.y"
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
#line 789 "GetDP.y"
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
#line 807 "GetDP.y"
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
#line 830 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 75:
#line 834 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; j = (int)yyvsp[-1].l ; List_Add(yyval.l = ListOfInt_L, &j) ; ;
    break;}
case 76:
#line 837 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 77:
#line 846 "GetDP.y"
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
#line 860 "GetDP.y"
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
#line 894 "GetDP.y"
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
#line 907 "GetDP.y"
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
#line 931 "GetDP.y"
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
#line 941 "GetDP.y"
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
#line 963 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 87:
#line 968 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 88:
#line 969 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 89:
#line 974 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 93:
#line 993 "GetDP.y"
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
#line 1013 "GetDP.y"
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
#line 1064 "GetDP.y"
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
#line 1084 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 99:
#line 1090 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 100:
#line 1096 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 101:
#line 1099 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 102:
#line 1106 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 104:
#line 1117 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 105:
#line 1120 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 106:
#line 1126 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 107:
#line 1130 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 109:
#line 1142 "GetDP.y"
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
#line 1155 "GetDP.y"
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
#line 1169 "GetDP.y"
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
#line 1184 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 113:
#line 1190 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 114:
#line 1196 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1202 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1208 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1214 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1220 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1226 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1232 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1238 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1244 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1250 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1256 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1262 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1268 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1274 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1280 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1287 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 131:
#line 1295 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1308 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 134:
#line 1314 "GetDP.y"
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
	      /* && ($2)%2 == 0)) { */
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
#line 1388 "GetDP.y"
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
#line 1422 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1431 "GetDP.y"
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
#line 1443 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 139:
#line 1445 "GetDP.y"
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
#line 1456 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1458 "GetDP.y"
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
#line 1472 "GetDP.y"
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
#line 1484 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 144:
#line 1490 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 145:
#line 1496 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 146:
#line 1498 "GetDP.y"
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
#line 1527 "GetDP.y"
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
#line 1551 "GetDP.y"
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
#line 1564 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 150:
#line 1570 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 151:
#line 1577 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 152:
#line 1583 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1590 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1597 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1608 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 156:
#line 1609 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 157:
#line 1610 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 158:
#line 1615 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 159:
#line 1616 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 160:
#line 1622 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 161:
#line 1625 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 162:
#line 1628 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 163:
#line 1644 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 164:
#line 1649 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 165:
#line 1656 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 167:
#line 1665 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 168:
#line 1670 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 169:
#line 1677 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 170:
#line 1680 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 171:
#line 1687 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 173:
#line 1697 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 174:
#line 1700 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 175:
#line 1703 "GetDP.y"
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
#line 1741 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 177:
#line 1747 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 178:
#line 1754 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 180:
#line 1767 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 181:
#line 1774 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 182:
#line 1777 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 183:
#line 1784 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 184:
#line 1787 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 185:
#line 1794 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 187:
#line 1806 "GetDP.y"
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
#line 1816 "GetDP.y"
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
#line 1826 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 190:
#line 1833 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 191:
#line 1836 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 192:
#line 1843 "GetDP.y"
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
#line 1859 "GetDP.y"
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
#line 1913 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 196:
#line 1916 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 197:
#line 1919 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 198:
#line 1922 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 199:
#line 1925 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 200:
#line 1936 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 202:
#line 1946 "GetDP.y"
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
#line 1971 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 206:
#line 1985 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 207:
#line 1991 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 208:
#line 1998 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 209:
#line 2007 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 210:
#line 2010 "GetDP.y"
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
#line 2032 "GetDP.y"
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
#line 2047 "GetDP.y"
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
#line 2071 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 215:
#line 2085 "GetDP.y"
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
#line 2095 "GetDP.y"
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
#line 2119 "GetDP.y"
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
#line 2144 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 219:
#line 2149 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 220:
#line 2157 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 221:
#line 2165 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 222:
#line 2175 "GetDP.y"
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
#line 2192 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 224:
#line 2200 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 225:
#line 2207 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 226:
#line 2214 "GetDP.y"
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
#line 2223 "GetDP.y"
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
#line 2232 "GetDP.y"
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
#line 2241 "GetDP.y"
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
#line 2262 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 232:
#line 2273 "GetDP.y"
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
#line 2300 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 236:
#line 2313 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 237:
#line 2319 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 238:
#line 2326 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 239:
#line 2335 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 240:
#line 2338 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 241:
#line 2341 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 242:
#line 2344 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 243:
#line 2351 "GetDP.y"
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
#line 2367 "GetDP.y"
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
#line 2416 "GetDP.y"
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
#line 2436 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 248:
#line 2439 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 249:
#line 2444 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 250:
#line 2449 "GetDP.y"
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
#line 2463 "GetDP.y"
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
#line 2483 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 253:
#line 2488 "GetDP.y"
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
#line 2512 "GetDP.y"
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
#line 2572 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2575 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 258:
#line 2584 "GetDP.y"
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
#line 2650 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 260:
#line 2654 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 261:
#line 2661 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 263:
#line 2670 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 264:
#line 2675 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2678 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 266:
#line 2685 "GetDP.y"
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
#line 2701 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 268:
#line 2707 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 269:
#line 2710 "GetDP.y"
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
#line 2729 "GetDP.y"
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
#line 2741 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 272:
#line 2747 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 273:
#line 2750 "GetDP.y"
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
#line 2765 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 275:
#line 2769 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 276:
#line 2778 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 278:
#line 2789 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 279:
#line 2794 "GetDP.y"
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
#line 2804 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 281:
#line 2817 "GetDP.y"
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
#line 2832 "GetDP.y"
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
#line 2906 "GetDP.y"
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
#line 2922 "GetDP.y"
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
#line 2954 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 287:
#line 2957 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 288:
#line 2960 "GetDP.y"
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
case 289:
#line 3006 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 291:
#line 3016 "GetDP.y"
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
case 293:
#line 3042 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 295:
#line 3054 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 296:
#line 3060 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 297:
#line 3067 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 299:
#line 3079 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 300:
#line 3085 "GetDP.y"
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
case 301:
#line 3099 "GetDP.y"
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
case 302:
#line 3117 "GetDP.y"
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
case 304:
#line 3138 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 305:
#line 3141 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 306:
#line 3145 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 307:
#line 3148 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 308:
#line 3158 "GetDP.y"
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
case 309:
#line 3197 "GetDP.y"
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
case 310:
#line 3221 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 311:
#line 3226 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 312:
#line 3232 "GetDP.y"
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
case 313:
#line 3393 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 314:
#line 3398 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 315:
#line 3407 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 316:
#line 3416 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 318:
#line 3424 "GetDP.y"
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
case 319:
#line 3464 "GetDP.y"
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
case 320:
#line 3479 "GetDP.y"
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
case 321:
#line 3507 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 322:
#line 3510 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 323:
#line 3513 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 324:
#line 3516 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 325:
#line 3523 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 327:
#line 3534 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 328:
#line 3544 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 329:
#line 3554 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 330:
#line 3568 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 332:
#line 3580 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 333:
#line 3582 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 334:
#line 3584 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 335:
#line 3586 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 336:
#line 3594 "GetDP.y"
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
case 338:
#line 3616 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 339:
#line 3624 "GetDP.y"
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
case 340:
#line 3686 "GetDP.y"
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
case 341:
#line 3732 "GetDP.y"
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
case 342:
#line 3756 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 343:
#line 3765 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 344:
#line 3779 "GetDP.y"
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
case 346:
#line 3808 "GetDP.y"
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
case 347:
#line 3832 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 348:
#line 3840 "GetDP.y"
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
case 349:
#line 3895 "GetDP.y"
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
case 350:
#line 3912 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 351:
#line 3913 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 352:
#line 3914 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 353:
#line 3915 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 354:
#line 3916 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 355:
#line 3917 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 356:
#line 3918 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 357:
#line 3925 "GetDP.y"
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
case 358:
#line 3946 "GetDP.y"
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
case 359:
#line 3970 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 361:
#line 3980 "GetDP.y"
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
case 363:
#line 4005 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 365:
#line 4017 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 366:
#line 4024 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 367:
#line 4031 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 368:
#line 4034 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 369:
#line 4036 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 370:
#line 4042 "GetDP.y"
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
case 371:
#line 4057 "GetDP.y"
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
case 372:
#line 4076 "GetDP.y"
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
case 374:
#line 4095 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 375:
#line 4098 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 376:
#line 4107 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 377:
#line 4110 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 378:
#line 4115 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 379:
#line 4120 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 380:
#line 4125 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 381:
#line 4130 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 382:
#line 4139 "GetDP.y"
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
case 383:
#line 4176 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 384:
#line 4183 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 385:
#line 4186 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 386:
#line 4198 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 387:
#line 4208 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 388:
#line 4214 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 389:
#line 4217 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 390:
#line 4229 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 391:
#line 4237 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 392:
#line 4248 "GetDP.y"
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
case 393:
#line 4268 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 394:
#line 4275 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 395:
#line 4281 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 396:
#line 4287 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 397:
#line 4293 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 398:
#line 4301 "GetDP.y"
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
case 399:
#line 4322 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 400:
#line 4329 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 401:
#line 4335 "GetDP.y"
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
case 402:
#line 4346 "GetDP.y"
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
case 403:
#line 4357 "GetDP.y"
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
case 404:
#line 4369 "GetDP.y"
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
case 405:
#line 4381 "GetDP.y"
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
case 406:
#line 4401 "GetDP.y"
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
case 407:
#line 4418 "GetDP.y"
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
case 408:
#line 4437 "GetDP.y"
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
case 409:
#line 4459 "GetDP.y"
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
case 410:
#line 4493 "GetDP.y"
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
case 411:
#line 4506 "GetDP.y"
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
case 412:
#line 4520 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-6].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-4].i ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 413:
#line 4533 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-10].d ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-8].d ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-6].i ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-4].d ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 414:
#line 4545 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 416:
#line 4554 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 418:
#line 4563 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 419:
#line 4573 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 420:
#line 4583 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 421:
#line 4591 "GetDP.y"
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
case 422:
#line 4604 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SAVESOLUTIONEXTENDEDMH ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-6].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-6].c) ;
      Free(yyvsp[-6].c) ;
      Operation_P->DefineSystemIndex = i ;
      Operation_P->Case.SaveSolutionExtendedMH.NbrFreq = (int)yyvsp[-4].d ;
      Operation_P->Case.SaveSolutionExtendedMH.ResFile = yyvsp[-2].c ;
    ;
    break;}
case 423:
#line 4617 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_INIT_MOVINGBAND2D ;
      Operation_P->Case.Init_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 424:
#line 4626 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;    
      if (( i = List_ISearchSeq(Problem_S.Group, yyvsp[-2].c, fcmp_Group_Name)) < 0) 
	vyyerror("Unknown Group: %s", yyvsp[-2].c) ;
      Operation_P->Type = OPERATION_MESH_MOVINGBAND2D ;
      Operation_P->Case.Mesh_MovingBand2D.GroupIndex = i ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 425:
#line 4635 "GetDP.y"
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
case 426:
#line 4649 "GetDP.y"
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
case 427:
#line 4662 "GetDP.y"
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
case 428:
#line 4679 "GetDP.y"
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
case 429:
#line 4693 "GetDP.y"
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
case 430:
#line 4712 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 431:
#line 4717 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 432:
#line 4727 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 434:
#line 4737 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 435:
#line 4740 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 436:
#line 4750 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 437:
#line 4766 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 439:
#line 4782 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 440:
#line 4786 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 441:
#line 4790 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 442:
#line 4794 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 443:
#line 4799 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 444:
#line 4810 "GetDP.y"
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
case 446:
#line 4827 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 447:
#line 4831 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 448:
#line 4835 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 449:
#line 4839 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 450:
#line 4843 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 451:
#line 4848 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 452:
#line 4859 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 454:
#line 4874 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 455:
#line 4878 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 456:
#line 4882 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 457:
#line 4886 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 458:
#line 4890 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 459:
#line 4901 "GetDP.y"
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
case 461:
#line 4919 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 462:
#line 4923 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 463:
#line 4927 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 464:
#line 4931 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 465:
#line 4936 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 466:
#line 4946 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 467:
#line 4952 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 468:
#line 4958 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 469:
#line 4968 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 470:
#line 4971 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 471:
#line 4976 "GetDP.y"
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
case 473:
#line 4994 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 474:
#line 5004 "GetDP.y"
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
case 475:
#line 5033 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 476:
#line 5036 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 477:
#line 5039 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 478:
#line 5047 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 479:
#line 5064 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 481:
#line 5076 "GetDP.y"
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
case 483:
#line 5099 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 485:
#line 5113 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 486:
#line 5120 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 487:
#line 5128 "GetDP.y"
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
case 488:
#line 5174 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 489:
#line 5179 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 490:
#line 5185 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 491:
#line 5188 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 492:
#line 5193 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 494:
#line 5204 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 495:
#line 5207 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 496:
#line 5213 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 497:
#line 5218 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 498:
#line 5224 "GetDP.y"
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
case 499:
#line 5238 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 501:
#line 5252 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 502:
#line 5259 "GetDP.y"
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
case 503:
#line 5287 "GetDP.y"
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
case 504:
#line 5297 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 505:
#line 5298 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 506:
#line 5304 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 507:
#line 5313 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 508:
#line 5330 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 510:
#line 5342 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 512:
#line 5349 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 514:
#line 5361 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 515:
#line 5368 "GetDP.y"
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
case 516:
#line 5380 "GetDP.y"
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
case 517:
#line 5391 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 518:
#line 5396 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 519:
#line 5402 "GetDP.y"
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
case 520:
#line 5419 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 521:
#line 5429 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 522:
#line 5432 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 523:
#line 5436 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 524:
#line 5447 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 525:
#line 5451 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 526:
#line 5455 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 527:
#line 5461 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 528:
#line 5466 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 529:
#line 5470 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 530:
#line 5479 "GetDP.y"
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
case 531:
#line 5491 "GetDP.y"
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
case 532:
#line 5514 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 533:
#line 5515 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 534:
#line 5516 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 535:
#line 5517 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 536:
#line 5523 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 537:
#line 5525 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 538:
#line 5531 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 539:
#line 5537 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 540:
#line 5544 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 541:
#line 5553 "GetDP.y"
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
case 542:
#line 5575 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 543:
#line 5583 "GetDP.y"
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
case 544:
#line 5594 "GetDP.y"
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
case 545:
#line 5608 "GetDP.y"
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
case 546:
#line 5629 "GetDP.y"
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
case 547:
#line 5656 "GetDP.y"
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
case 548:
#line 5687 "GetDP.y"
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
case 549:
#line 5707 "GetDP.y"
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
case 551:
#line 5733 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 552:
#line 5740 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 553:
#line 5747 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 554:
#line 5754 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 555:
#line 5758 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 556:
#line 5762 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 557:
#line 5766 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 558:
#line 5770 "GetDP.y"
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
case 559:
#line 5780 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 560:
#line 5785 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 561:
#line 5790 "GetDP.y"
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
case 562:
#line 5810 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 563:
#line 5817 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 564:
#line 5826 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 565:
#line 5835 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 566:
#line 5844 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 567:
#line 5851 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 568:
#line 5859 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 569:
#line 5863 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 570:
#line 5872 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 571:
#line 5876 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 572:
#line 5884 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 573:
#line 5890 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 574:
#line 5899 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 575:
#line 5905 "GetDP.y"
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
case 576:
#line 5953 "GetDP.y"
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
case 577:
#line 5968 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 580:
#line 5981 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 581:
#line 5987 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 582:
#line 5993 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 583:
#line 6004 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 584:
#line 6005 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 585:
#line 6006 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 586:
#line 6007 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 587:
#line 6008 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 588:
#line 6009 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 589:
#line 6010 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 590:
#line 6011 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 591:
#line 6012 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 592:
#line 6013 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 593:
#line 6014 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 594:
#line 6015 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 595:
#line 6016 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 596:
#line 6017 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 597:
#line 6018 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 598:
#line 6019 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 599:
#line 6020 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 600:
#line 6021 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 601:
#line 6022 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 602:
#line 6023 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 603:
#line 6024 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 604:
#line 6027 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 605:
#line 6028 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 606:
#line 6029 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 607:
#line 6030 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 608:
#line 6031 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 609:
#line 6032 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 610:
#line 6033 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 611:
#line 6034 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 612:
#line 6035 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 613:
#line 6036 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 614:
#line 6037 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 615:
#line 6038 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 616:
#line 6039 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 617:
#line 6040 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 618:
#line 6041 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 619:
#line 6042 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 620:
#line 6043 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 621:
#line 6044 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 622:
#line 6045 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 623:
#line 6046 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 624:
#line 6047 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 625:
#line 6048 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 626:
#line 6049 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 627:
#line 6050 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 628:
#line 6051 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 629:
#line 6052 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 630:
#line 6053 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 631:
#line 6054 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 632:
#line 6055 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 633:
#line 6056 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 634:
#line 6057 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 635:
#line 6058 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 636:
#line 6059 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 637:
#line 6060 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 638:
#line 6061 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 639:
#line 6062 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 640:
#line 6063 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 641:
#line 6064 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 642:
#line 6065 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 643:
#line 6066 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 644:
#line 6071 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 645:
#line 6072 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 646:
#line 6073 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 647:
#line 6074 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 648:
#line 6075 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 649:
#line 6076 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 650:
#line 6077 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 651:
#line 6079 "GetDP.y"
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
case 652:
#line 6097 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 653:
#line 6100 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 654:
#line 6106 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 655:
#line 6109 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 656:
#line 6116 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 657:
#line 6122 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 658:
#line 6125 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 659:
#line 6128 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 660:
#line 6140 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 661:
#line 6146 "GetDP.y"
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
case 662:
#line 6157 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  /* vyyerror("Multi value Constant needed: %s", $1) ; */
	  List_Add(yyval.l, &Constant_S.Value.Float) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;
    break;}
case 663:
#line 6173 "GetDP.y"
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
case 664:
#line 6195 "GetDP.y"
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
case 665:
#line 6210 "GetDP.y"
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
case 666:
#line 6248 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 667:
#line 6256 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 668:
#line 6268 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 669:
#line 6271 "GetDP.y"
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
case 670:
#line 6286 "GetDP.y"
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
#line 6300 "GetDP.y"



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


