/* A Bison parser, made from GetDP.y
   by GNU bison 1.35.  */

#define YYBISON 1  /* Identify Bison output.  */

# define	tINT	257
# define	tFLOAT	258
# define	tSTRING	259
# define	tBIGSTR	260
# define	tEND	261
# define	tDOTS	262
# define	tStrCat	263
# define	tInclude	264
# define	tConstant	265
# define	tList	266
# define	tListAlt	267
# define	tLinSpace	268
# define	tLogSpace	269
# define	tDefineConstant	270
# define	tPi	271
# define	t0D	272
# define	t1D	273
# define	t2D	274
# define	t3D	275
# define	tExp	276
# define	tLog	277
# define	tLog10	278
# define	tSqrt	279
# define	tSin	280
# define	tAsin	281
# define	tCos	282
# define	tAcos	283
# define	tTan	284
# define	tAtan	285
# define	tAtan2	286
# define	tSinh	287
# define	tCosh	288
# define	tTanh	289
# define	tFabs	290
# define	tFloor	291
# define	tCeil	292
# define	tFmod	293
# define	tModulo	294
# define	tHypot	295
# define	tSolidAngle	296
# define	tTrace	297
# define	tOrder	298
# define	tCrossProduct	299
# define	tMHTransform	300
# define	tMHJacNL	301
# define	tGroup	302
# define	tDefineGroup	303
# define	tAll	304
# define	tInSupport	305
# define	tMovingBand2D	306
# define	tDefineFunction	307
# define	tConstraint	308
# define	tRegion	309
# define	tSubRegion	310
# define	tRegionRef	311
# define	tSubRegionRef	312
# define	tFilter	313
# define	tCoefficient	314
# define	tValue	315
# define	tTimeFunction	316
# define	tBranch	317
# define	tNode	318
# define	tLoop	319
# define	tNameOfResolution	320
# define	tJacobian	321
# define	tCase	322
# define	tIntegration	323
# define	tType	324
# define	tSubType	325
# define	tCriterion	326
# define	tGeoElement	327
# define	tNumberOfPoints	328
# define	tMaxNumberOfPoints	329
# define	tNumberOfDivisions	330
# define	tMaxNumberOfDivisions	331
# define	tStoppingCriterion	332
# define	tFunctionSpace	333
# define	tName	334
# define	tBasisFunction	335
# define	tNameOfCoef	336
# define	tFunction	337
# define	tdFunction	338
# define	tSubFunction	339
# define	tSupport	340
# define	tEntity	341
# define	tSubSpace	342
# define	tNameOfBasisFunction	343
# define	tGlobalQuantity	344
# define	tEntityType	345
# define	tEntitySubType	346
# define	tNameOfConstraint	347
# define	tFormulation	348
# define	tQuantity	349
# define	tNameOfSpace	350
# define	tIndexOfSystem	351
# define	tSymmetry	352
# define	tEquation	353
# define	tGalerkin	354
# define	tdeRham	355
# define	tGlobalTerm	356
# define	tGlobalEquation	357
# define	tDt	358
# define	tDtDof	359
# define	tDtDt	360
# define	tDtDtDof	361
# define	tJacNL	362
# define	tNeverDt	363
# define	tIn	364
# define	tResolution	365
# define	tDefineSystem	366
# define	tNameOfFormulation	367
# define	tNameOfMesh	368
# define	tFrequency	369
# define	tSolver	370
# define	tOriginSystem	371
# define	tDestinationSystem	372
# define	tOperation	373
# define	tOperationEnd	374
# define	tSetTime	375
# define	tDTime	376
# define	tSetFrequency	377
# define	tFourierTransform	378
# define	tFourierTransformJ	379
# define	tIf	380
# define	tElse	381
# define	tLanczos	382
# define	tPerturbation	383
# define	tUpdate	384
# define	tUpdateConstraint	385
# define	tBreak	386
# define	tTimeLoopTheta	387
# define	tTime0	388
# define	tTimeMax	389
# define	tTheta	390
# define	tTimeLoopNewmark	391
# define	tBeta	392
# define	tGamma	393
# define	tIterativeLoop	394
# define	tNbrMaxIteration	395
# define	tRelaxationFactor	396
# define	tIterativeTimeReduction	397
# define	tDivisionCoefficient	398
# define	tChangeOfState	399
# define	tChangeOfCoordinates	400
# define	tSystemCommand	401
# define	tSolveJac_AdaptRelax	402
# define	tSaveSolutionExtendedMH	403
# define	tInit_MovingBand2D	404
# define	tMesh_MovingBand2D	405
# define	tGenerate_MH_Moving	406
# define	tGenerateGroup	407
# define	tGenerateJacGroup	408
# define	tSaveMesh	409
# define	tPostProcessing	410
# define	tNameOfSystem	411
# define	tPostOperation	412
# define	tNameOfPostProcessing	413
# define	tUsingPost	414
# define	tAppend	415
# define	tPlot	416
# define	tPrint	417
# define	tPrintGroup	418
# define	tEcho	419
# define	tWrite	420
# define	tAdapt	421
# define	tOnGlobal	422
# define	tOnRegion	423
# define	tOnElementsOf	424
# define	tOnGrid	425
# define	tOnSection	426
# define	tOnPoint	427
# define	tOnLine	428
# define	tOnPlane	429
# define	tOnBox	430
# define	tWithArgument	431
# define	tFile	432
# define	tDepth	433
# define	tDimension	434
# define	tTimeStep	435
# define	tHarmonicToTime	436
# define	tFormat	437
# define	tHeader	438
# define	tFooter	439
# define	tSkin	440
# define	tSmoothing	441
# define	tTarget	442
# define	tSort	443
# define	tIso	444
# define	tNoNewLine	445
# define	tDecomposeInSimplex	446
# define	tChangeOfValues	447
# define	tFlag	448
# define	tHelp	449
# define	tCpu	450
# define	tCheck	451
# define	tDEF	452
# define	tOR	453
# define	tAND	454
# define	tEQUAL	455
# define	tNOTEQUAL	456
# define	tAPPROXEQUAL	457
# define	tLESSOREQUAL	458
# define	tGREATEROREQUAL	459
# define	tLESSLESS	460
# define	tGREATERGREATER	461
# define	tCROSSPRODUCT	462
# define	UNARYPREC	463
# define	tSHOW	464

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.43 2002-09-01 22:06:49 geuzaine Exp $ */

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
#ifndef YYSTYPE
typedef union {
  char    *c ;
  int     i ;
  double  d ;
  List_T  *l ;
  struct TwoInt t ;
} yystype;
# define YYSTYPE yystype
# define YYSTYPE_IS_TRIVIAL 1
#endif
#ifndef YYDEBUG
# define YYDEBUG 0
#endif



#define	YYFINAL		1759
#define	YYFLAG		-32768
#define	YYNTBASE	232

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 464 ? yytranslate[x] : 420)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   217,     2,   225,   226,   215,     2,     2,
     220,   221,   213,   211,   230,   212,   224,   214,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     205,     2,   207,   199,   231,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   222,     2,   223,   219,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   228,     2,   229,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     3,     4,     5,
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
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   200,   201,   202,   203,   204,   206,   208,
     209,   210,   216,   218,   227
};

#if YYDEBUG
static const short yyprhs[] =
{
       0,     0,     1,     4,     5,     6,    10,    15,    20,    25,
      30,    35,    40,    45,    50,    55,    60,    62,    64,    67,
      69,    72,    76,    80,    84,    88,    92,    96,    99,   102,
     106,   110,   114,   118,   122,   126,   130,   134,   138,   142,
     146,   147,   150,   151,   152,   156,   161,   167,   168,   175,
     181,   183,   185,   186,   187,   206,   207,   208,   216,   219,
     221,   224,   226,   228,   230,   232,   233,   237,   242,   244,
     246,   250,   251,   255,   260,   262,   266,   270,   276,   278,
     283,   287,   288,   292,   299,   300,   302,   307,   308,   311,
     315,   316,   319,   325,   332,   340,   342,   343,   347,   352,
     357,   358,   361,   362,   366,   368,   372,   373,   376,   378,
     379,   380,   388,   392,   396,   403,   407,   411,   415,   419,
     423,   427,   431,   435,   439,   443,   447,   451,   455,   459,
     462,   465,   468,   472,   474,   478,   481,   483,   486,   487,
     493,   494,   506,   516,   521,   526,   527,   535,   542,   545,
     548,   551,   554,   558,   561,   565,   569,   572,   576,   578,
     582,   583,   587,   594,   595,   600,   601,   604,   608,   613,
     614,   619,   620,   623,   627,   631,   636,   637,   642,   643,
     646,   650,   654,   659,   660,   665,   666,   669,   673,   677,
     682,   683,   688,   689,   692,   696,   700,   704,   708,   712,
     716,   717,   720,   724,   726,   727,   730,   734,   739,   743,
     748,   754,   755,   760,   761,   764,   768,   772,   776,   780,
     784,   788,   796,   800,   804,   808,   812,   816,   824,   832,
     840,   841,   844,   848,   850,   851,   854,   858,   863,   867,
     872,   877,   882,   887,   888,   893,   894,   897,   901,   905,
     910,   915,   923,   927,   931,   935,   936,   937,   938,   957,
     958,   963,   964,   967,   971,   975,   979,   981,   985,   986,
     990,   992,   996,   997,  1001,  1002,  1007,  1008,  1011,  1015,
    1019,  1023,  1024,  1029,  1030,  1033,  1037,  1041,  1045,  1050,
    1051,  1054,  1058,  1060,  1061,  1064,  1068,  1073,  1077,  1082,
    1087,  1088,  1093,  1094,  1097,  1101,  1105,  1109,  1113,  1114,
    1121,  1125,  1126,  1132,  1136,  1140,  1144,  1148,  1149,  1153,
    1154,  1157,  1162,  1167,  1172,  1177,  1178,  1181,  1185,  1189,
    1193,  1194,  1197,  1201,  1205,  1209,  1213,  1214,  1217,  1218,
    1219,  1229,  1233,  1237,  1241,  1242,  1245,  1249,  1250,  1251,
    1261,  1262,  1264,  1266,  1268,  1270,  1272,  1274,  1279,  1283,
    1284,  1287,  1291,  1293,  1294,  1297,  1301,  1306,  1311,  1312,
    1318,  1319,  1324,  1325,  1328,  1332,  1336,  1340,  1344,  1348,
    1352,  1356,  1360,  1363,  1367,  1368,  1372,  1374,  1378,  1379,
    1383,  1384,  1387,  1391,  1395,  1400,  1405,  1410,  1415,  1421,
    1427,  1430,  1438,  1450,  1458,  1466,  1476,  1486,  1496,  1508,
    1526,  1540,  1556,  1568,  1582,  1583,  1591,  1592,  1600,  1608,
    1614,  1620,  1630,  1640,  1646,  1652,  1666,  1676,  1691,  1699,
    1707,  1709,  1711,  1712,  1715,  1719,  1723,  1726,  1727,  1730,
    1734,  1738,  1742,  1746,  1751,  1752,  1755,  1759,  1763,  1767,
    1771,  1775,  1780,  1781,  1784,  1788,  1792,  1796,  1800,  1805,
    1806,  1809,  1813,  1817,  1821,  1825,  1829,  1834,  1839,  1844,
    1845,  1850,  1851,  1854,  1858,  1862,  1866,  1870,  1874,  1878,
    1879,  1882,  1886,  1888,  1889,  1892,  1896,  1901,  1906,  1910,
    1915,  1916,  1921,  1922,  1925,  1929,  1934,  1935,  1941,  1947,
    1948,  1951,  1952,  1959,  1963,  1964,  1969,  1973,  1977,  1978,
    1981,  1985,  1987,  1988,  1991,  1995,  1999,  2003,  2007,  2012,
    2013,  2022,  2023,  2024,  2028,  2036,  2044,  2053,  2054,  2065,
    2072,  2076,  2083,  2085,  2087,  2089,  2091,  2092,  2096,  2098,
    2101,  2104,  2117,  2120,  2136,  2141,  2154,  2172,  2195,  2208,
    2209,  2212,  2216,  2221,  2226,  2230,  2233,  2236,  2240,  2244,
    2248,  2252,  2256,  2260,  2264,  2268,  2272,  2276,  2280,  2284,
    2290,  2293,  2296,  2300,  2310,  2314,  2315,  2318,  2323,  2328,
    2334,  2335,  2339,  2345,  2351,  2353,  2355,  2357,  2359,  2361,
    2363,  2365,  2367,  2369,  2371,  2373,  2375,  2377,  2379,  2381,
    2383,  2385,  2387,  2389,  2391,  2393,  2395,  2399,  2402,  2405,
    2409,  2413,  2417,  2421,  2425,  2429,  2433,  2437,  2441,  2445,
    2449,  2453,  2457,  2461,  2466,  2471,  2476,  2481,  2486,  2491,
    2496,  2501,  2506,  2511,  2518,  2523,  2528,  2533,  2538,  2543,
    2548,  2555,  2562,  2569,  2575,  2578,  2580,  2582,  2584,  2586,
    2588,  2590,  2592,  2594,  2595,  2597,  2599,  2603,  2605,  2607,
    2611,  2615,  2619,  2625,  2629,  2634,  2639,  2646,  2655,  2664,
    2666,  2668
};
static const short yyrhs[] =
{
      -1,   233,   234,     0,     0,     0,   234,   235,   236,     0,
      48,   228,   239,   229,     0,    83,   228,   262,   229,     0,
      54,   228,   296,   229,     0,    67,   228,   281,   229,     0,
      69,   228,   287,   229,     0,    79,   228,   303,   229,     0,
      94,   228,   326,   229,     0,   111,   228,   352,   229,     0,
     156,   228,   382,   229,     0,   158,   228,   394,   229,     0,
     398,     0,   411,     0,    10,   419,     0,   237,     0,   195,
       7,     0,   195,   163,     7,     0,   195,   197,     7,     0,
     195,    23,     7,     0,   195,   196,     7,     0,   195,   195,
       7,     0,   195,     5,     7,     0,   196,     7,     0,   197,
       7,     0,   197,    48,     7,     0,   197,    83,     7,     0,
     197,    54,     7,     0,   197,    67,     7,     0,   197,    69,
       7,     0,   197,    79,     7,     0,   197,    94,     7,     0,
     197,   111,     7,     0,   197,   156,     7,     0,   197,   158,
       7,     0,   197,     3,     7,     0,     0,   238,   402,     0,
       0,     0,   239,   240,   241,     0,     5,   198,   246,     7,
       0,     5,   261,   198,   246,     7,     0,     0,     5,   259,
     198,   242,   246,     7,     0,    49,   222,   257,   223,     7,
       0,   243,     0,   411,     0,     0,     0,     5,   222,     3,
     223,   198,    52,   244,   222,   225,   254,   245,   230,   225,
     254,   230,   414,   223,     7,     0,     0,     0,   250,   222,
     247,   251,   248,   252,   223,     0,   225,   254,     0,   246,
       0,     5,   260,     0,    55,     0,     5,     0,   254,     0,
      50,     0,     0,   258,   253,   254,     0,   258,    51,     5,
     260,     0,     5,     0,   256,     0,   228,   255,   229,     0,
       0,   255,   258,   256,     0,   255,   258,   212,   256,     0,
       3,     0,   231,   417,   231,     0,     3,     8,   414,     0,
       3,     8,     3,     8,   414,     0,     5,     0,     5,   228,
     414,   229,     0,     5,   228,   229,     0,     0,   257,   258,
       5,     0,   257,   258,     5,   228,   414,   229,     0,     0,
     230,     0,   228,   225,   414,   229,     0,     0,   228,   229,
       0,   228,   414,   229,     0,     0,   262,   263,     0,    53,
     222,   264,   223,     7,     0,     5,   222,   223,   198,   265,
       7,     0,     5,   222,   249,   223,   198,   265,     7,     0,
     411,     0,     0,   264,   258,     5,     0,    11,   222,   414,
     223,     0,    83,   222,     5,   223,     0,     0,   266,   269,
       0,     0,   228,   268,   229,     0,   265,     0,   268,   230,
     265,     0,     0,   270,   271,     0,   274,     0,     0,     0,
     271,   199,   272,   271,     8,   273,   271,     0,   271,   213,
     271,     0,   271,   216,   271,     0,    45,   222,   271,   230,
     271,   223,     0,   271,   214,   271,     0,   271,   211,   271,
       0,   271,   212,   271,     0,   271,   215,   271,     0,   271,
     219,   271,     0,   271,   205,   271,     0,   271,   207,   271,
       0,   271,   206,   271,     0,   271,   208,   271,     0,   271,
     202,   271,     0,   271,   203,   271,     0,   271,   204,   271,
       0,   271,   201,   271,     0,   271,   200,   271,     0,   212,
     271,     0,   211,   271,     0,   217,   271,     0,   220,   271,
     221,     0,   415,     0,   413,   278,   280,     0,     5,   351,
       0,   351,     0,   351,   278,     0,     0,   104,   275,   222,
     269,   223,     0,     0,    46,   222,     5,   222,   276,   269,
     223,   223,   228,   414,   229,     0,    47,   222,     5,   223,
     228,   414,   230,   414,   229,     0,    42,   222,   351,   223,
       0,    44,   222,   351,   223,     0,     0,    43,   277,   222,
     269,   230,   249,   223,     0,   205,     5,   207,   222,   269,
     223,     0,   226,     5,     0,   226,   181,     0,   226,   122,
       0,   226,     3,     0,   274,   225,     3,     0,   225,     3,
       0,   274,   227,     3,     0,   222,   224,   223,     0,   222,
     223,     0,   222,   279,   223,     0,   271,     0,   279,   230,
     271,     0,     0,   228,   417,   229,     0,   228,    55,   222,
     249,   223,   229,     0,     0,   281,   228,   282,   229,     0,
       0,   282,   283,     0,    80,     5,     7,     0,    68,   228,
     284,   229,     0,     0,   284,   228,   285,   229,     0,     0,
     285,   286,     0,    55,   249,     7,     0,    55,    50,     7,
       0,    67,     5,   280,     7,     0,     0,   287,   228,   288,
     229,     0,     0,   288,   289,     0,    80,     5,     7,     0,
      72,   265,     7,     0,    68,   228,   290,   229,     0,     0,
     290,   228,   291,   229,     0,     0,   291,   292,     0,    70,
       5,     7,     0,    71,     5,     7,     0,    68,   228,   293,
     229,     0,     0,   293,   228,   294,   229,     0,     0,   294,
     295,     0,    73,     5,     7,     0,    74,   414,     7,     0,
      75,   414,     7,     0,    76,   414,     7,     0,    77,   414,
       7,     0,    78,   414,     7,     0,     0,   296,   297,     0,
     228,   298,   229,     0,   411,     0,     0,   298,   299,     0,
      80,     5,     7,     0,    80,     5,   259,     7,     0,    70,
       5,     7,     0,    68,   228,   300,   229,     0,    68,     5,
     228,   300,   229,     0,     0,   300,   228,   301,   229,     0,
       0,   301,   302,     0,    70,     5,     7,     0,    55,   249,
       7,     0,    56,   249,     7,     0,    62,   265,     7,     0,
      61,   265,     7,     0,    66,     5,     7,     0,    63,   228,
       3,   258,     3,   229,     7,     0,    57,   249,     7,     0,
      58,   249,     7,     0,    83,   265,     7,     0,    60,   265,
       7,     0,    59,   265,     7,     0,    83,   222,   265,   230,
     265,   223,     7,     0,    60,   222,   265,   230,   265,   223,
       7,     0,    59,   222,   265,   230,   265,   223,     7,     0,
       0,   303,   304,     0,   228,   305,   229,     0,   411,     0,
       0,   305,   306,     0,    80,     5,     7,     0,    80,     5,
     259,     7,     0,    70,     5,     7,     0,    81,   228,   307,
     229,     0,    88,   228,   313,   229,     0,    90,   228,   320,
     229,     0,    54,   228,   323,   229,     0,     0,   307,   228,
     308,   229,     0,     0,   308,   309,     0,    80,     5,     7,
       0,    82,     5,     7,     0,    82,     5,   259,     7,     0,
      83,     5,   310,     7,     0,    84,   228,     5,   258,     5,
     229,     7,     0,    85,   267,     7,     0,    86,   249,     7,
       0,    87,   249,     7,     0,     0,     0,     0,   228,    95,
       5,     7,    94,     5,   259,     7,   311,    48,   249,     7,
     312,   111,     5,   260,     7,   229,     0,     0,   313,   228,
     314,   229,     0,     0,   314,   315,     0,    80,     5,     7,
       0,    89,   316,     7,     0,    82,   318,     7,     0,     5,
       0,   228,   317,   229,     0,     0,   317,   258,     5,     0,
       5,     0,   228,   319,   229,     0,     0,   319,   258,     5,
       0,     0,   320,   228,   321,   229,     0,     0,   321,   322,
       0,    80,     5,     7,     0,    70,     5,     7,     0,    82,
       5,     7,     0,     0,   323,   228,   324,   229,     0,     0,
     324,   325,     0,    82,     5,     7,     0,    91,   250,     7,
       0,    92,   253,     7,     0,    93,     5,   260,     7,     0,
       0,   326,   327,     0,   228,   328,   229,     0,   411,     0,
       0,   328,   329,     0,    80,     5,     7,     0,    80,     5,
     259,     7,     0,    70,     5,     7,     0,    95,   228,   330,
     229,     0,    99,   228,   336,   229,     0,     0,   330,   228,
     331,   229,     0,     0,   331,   332,     0,    80,     5,     7,
       0,    70,    90,     7,     0,    70,   100,     7,     0,    70,
       5,     7,     0,     0,    96,     5,   260,   333,   335,     7,
       0,    97,     3,     7,     0,     0,   222,   334,   269,   223,
       7,     0,   110,   249,     7,     0,    69,     5,     7,     0,
      67,     5,     7,     0,    98,     3,     7,     0,     0,   222,
       5,   223,     0,     0,   336,   337,     0,   100,   228,   342,
     229,     0,   101,   228,   342,   229,     0,   102,   228,   346,
     229,     0,   103,   228,   338,   229,     0,     0,   338,   339,
       0,    70,     5,     7,     0,    93,     5,     7,     0,   228,
     340,   229,     0,     0,   340,   341,     0,    64,   351,     7,
       0,    65,   351,     7,     0,    99,   351,     7,     0,   110,
     249,     7,     0,     0,   342,   343,     0,     0,     0,   350,
     222,   344,   269,   345,   230,   269,   223,     7,     0,   110,
     249,     7,     0,    67,     5,     7,     0,    69,     5,     7,
       0,     0,   346,   347,     0,   110,   249,     7,     0,     0,
       0,   350,   222,   348,   269,   349,   230,   351,   223,     7,
       0,     0,   104,     0,   105,     0,   106,     0,   107,     0,
     108,     0,   109,     0,   228,     5,     5,   229,     0,   228,
       5,   229,     0,     0,   352,   353,     0,   228,   354,   229,
       0,   411,     0,     0,   354,   355,     0,    80,     5,     7,
       0,    80,     5,   259,     7,     0,   112,   228,   357,   229,
       0,     0,   119,   356,   228,   364,   229,     0,     0,   357,
     228,   358,   229,     0,     0,   358,   359,     0,    80,     5,
       7,     0,    70,     5,     7,     0,   113,   360,     7,     0,
     114,   419,     7,     0,   117,   362,     7,     0,   118,     5,
       7,     0,   115,   416,     7,     0,   116,   419,     7,     0,
       5,   260,     0,   228,   361,   229,     0,     0,   361,   258,
       5,     0,     5,     0,   228,   363,   229,     0,     0,   363,
     258,     5,     0,     0,   364,   365,     0,     5,     5,     7,
       0,   121,   265,     7,     0,   133,   228,   371,   229,     0,
     137,   228,   373,   229,     0,   140,   228,   375,   229,     0,
     143,   228,   377,   229,     0,     5,   222,     5,   223,     7,
       0,   121,   222,   265,   223,     7,     0,   132,     7,     0,
     126,   222,   265,   223,   228,   364,   229,     0,   126,   222,
     265,   223,   228,   364,   229,   127,   228,   364,   229,     0,
     123,   222,     5,   230,   265,   223,     7,     0,   130,   222,
       5,   230,   265,   223,     7,     0,   131,   222,     5,   230,
     249,   230,     5,   223,     7,     0,   124,   222,     5,   230,
       5,   230,   416,   223,     7,     0,   125,   222,     5,   230,
       5,   230,   414,   223,     7,     0,   128,   222,     5,   230,
     414,   230,   416,   230,   414,   223,     7,     0,   129,   222,
       5,   230,     5,   230,     5,   230,   414,   230,   416,   230,
     414,   230,   414,   223,     7,     0,   133,   222,   414,   230,
     414,   230,   265,   230,   265,   223,   228,   364,   229,     0,
     137,   222,   414,   230,   414,   230,   265,   230,   414,   230,
     414,   223,   228,   364,   229,     0,   140,   222,   414,   230,
     414,   230,   265,   223,   228,   364,   229,     0,   140,   222,
     414,   230,   414,   230,   265,   230,   414,   223,   228,   364,
     229,     0,     0,   163,   366,   222,   368,   369,   223,     7,
       0,     0,   166,   367,   222,   368,   369,   223,     7,     0,
     146,   222,   249,   230,   265,   223,     7,     0,   158,   222,
       5,   223,     7,     0,   147,   222,   419,   223,     7,     0,
     148,   222,     5,   230,   416,   230,   414,   223,     7,     0,
     149,   222,     5,   230,   414,   230,   419,   223,     7,     0,
     150,   228,     5,   229,     7,     0,   151,   228,     5,   229,
       7,     0,   155,   228,     5,   230,   249,   230,   419,   230,
     419,   230,   265,   229,     7,     0,   155,   228,     5,   230,
     249,   230,   419,   229,     7,     0,   152,   222,     5,   230,
       5,   230,   414,   230,   414,   223,   228,   364,   229,     7,
       0,   153,   222,     5,   230,     5,   223,     7,     0,   154,
     222,     5,   230,     5,   223,     7,     0,   267,     0,     5,
       0,     0,   369,   370,     0,   230,   178,   419,     0,   230,
     181,   416,     0,   230,   416,     0,     0,   371,   372,     0,
     134,   414,     7,     0,   135,   414,     7,     0,   122,   265,
       7,     0,   136,   265,     7,     0,   119,   228,   364,   229,
       0,     0,   373,   374,     0,   134,   414,     7,     0,   135,
     414,     7,     0,   122,   265,     7,     0,   138,   414,     7,
       0,   139,   414,     7,     0,   119,   228,   364,   229,     0,
       0,   375,   376,     0,   141,   414,     7,     0,    72,   414,
       7,     0,   142,   265,     7,     0,   194,   414,     7,     0,
     119,   228,   364,   229,     0,     0,   377,   378,     0,   141,
     414,     7,     0,   144,   414,     7,     0,    72,   414,     7,
       0,   194,   414,     7,     0,   112,     5,     7,     0,   145,
     228,   379,   229,     0,   119,   228,   364,   229,     0,   120,
     228,   364,   229,     0,     0,   379,   228,   380,   229,     0,
       0,   380,   381,     0,    70,     5,     7,     0,    95,     5,
       7,     0,   110,   249,     7,     0,    72,   414,     7,     0,
      83,   265,     7,     0,   194,     5,     7,     0,     0,   382,
     383,     0,   228,   384,   229,     0,   411,     0,     0,   384,
     385,     0,    80,     5,     7,     0,    80,     5,   259,     7,
       0,   113,     5,   260,     7,     0,   157,     5,     7,     0,
      95,   228,   386,   229,     0,     0,   386,   228,   387,   229,
       0,     0,   387,   388,     0,    80,     5,     7,     0,    61,
     228,   389,   229,     0,     0,   389,   100,   228,   390,   229,
       0,   389,     5,   228,   390,   229,     0,     0,   390,   391,
       0,     0,   350,   222,   392,   269,   223,     7,     0,    70,
       5,     7,     0,     0,   110,   393,   249,     7,     0,    67,
       5,     7,     0,    69,     5,     7,     0,     0,   394,   395,
       0,   228,   396,   229,     0,   411,     0,     0,   396,   397,
       0,    80,     5,     7,     0,   159,     5,     7,     0,   183,
       5,     7,     0,   161,   419,     7,     0,   119,   228,   400,
     229,     0,     0,   158,     5,   160,     5,   399,   228,   400,
     229,     0,     0,     0,   400,   401,   402,     0,   162,   222,
     404,   407,   408,   223,     7,     0,   163,   222,   404,   407,
     408,   223,     7,     0,   163,   222,     6,   230,   414,   408,
     223,     7,     0,     0,   164,   222,   249,   403,   230,   110,
     249,   408,   223,     7,     0,   165,   222,     6,   408,   223,
       7,     0,     5,   406,   230,     0,     5,   406,   405,     5,
     406,   230,     0,   213,     0,   214,     0,   211,     0,   212,
       0,     0,   222,   249,   223,     0,   168,     0,   169,   249,
       0,   170,   249,     0,   172,   228,   228,   417,   229,   228,
     417,   229,   228,   417,   229,   229,     0,   171,   249,     0,
     171,   228,   265,   230,   265,   230,   265,   229,   228,   416,
     230,   416,   230,   416,   229,     0,   173,   228,   417,   229,
       0,   174,   228,   228,   417,   229,   228,   417,   229,   229,
     228,   414,   229,     0,   175,   228,   228,   417,   229,   228,
     417,   229,   228,   417,   229,   229,   228,   414,   230,   414,
     229,     0,   176,   228,   228,   417,   229,   228,   417,   229,
     228,   417,   229,   228,   417,   229,   229,   228,   414,   230,
     414,   230,   414,   229,     0,   169,   249,   177,     5,   228,
     414,   230,   414,   229,   228,   414,   229,     0,     0,   408,
     409,     0,   230,   178,   419,     0,   230,   178,   207,   419,
       0,   230,   178,   210,   419,     0,   230,   179,   414,     0,
     230,   186,     0,   230,   187,     0,   230,   182,   414,     0,
     230,   183,     5,     0,   230,   184,   410,     0,   230,   185,
     410,     0,   230,   183,   410,     0,   230,   180,   414,     0,
     230,   181,   416,     0,   230,   167,     5,     0,   230,   189,
       5,     0,   230,   188,   414,     0,   230,    61,   416,     0,
     230,   190,   414,     0,   230,   190,   228,   417,   229,     0,
     230,   191,     0,   230,   192,     0,   230,   115,   416,     0,
     230,   146,   228,   265,   230,   265,   230,   265,   229,     0,
     230,   193,   267,     0,     0,   410,     6,     0,     5,   198,
     416,     7,     0,     5,   198,     6,     7,     0,    16,   222,
     412,   223,     7,     0,     0,   412,   258,     5,     0,   412,
     258,     5,   198,   414,     0,   412,   258,     5,   198,     6,
       0,    22,     0,    23,     0,    24,     0,    25,     0,    26,
       0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
       0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,     5,     0,   415,     0,   220,   414,   221,     0,   212,
     414,     0,   217,   414,     0,   414,   212,   414,     0,   414,
     211,   414,     0,   414,   213,   414,     0,   414,   214,   414,
       0,   414,   215,   414,     0,   414,   219,   414,     0,   414,
     205,   414,     0,   414,   207,   414,     0,   414,   206,   414,
       0,   414,   208,   414,     0,   414,   202,   414,     0,   414,
     203,   414,     0,   414,   201,   414,     0,   414,   200,   414,
       0,    22,   222,   414,   223,     0,    23,   222,   414,   223,
       0,    24,   222,   414,   223,     0,    25,   222,   414,   223,
       0,    26,   222,   414,   223,     0,    27,   222,   414,   223,
       0,    28,   222,   414,   223,     0,    29,   222,   414,   223,
       0,    30,   222,   414,   223,     0,    31,   222,   414,   223,
       0,    32,   222,   414,   230,   414,   223,     0,    33,   222,
     414,   223,     0,    34,   222,   414,   223,     0,    35,   222,
     414,   223,     0,    36,   222,   414,   223,     0,    37,   222,
     414,   223,     0,    38,   222,   414,   223,     0,    39,   222,
     414,   230,   414,   223,     0,    40,   222,   414,   230,   414,
     223,     0,    41,   222,   414,   230,   414,   223,     0,   414,
     199,   414,     8,   414,     0,   414,   225,     0,     4,     0,
       3,     0,    17,     0,    18,     0,    19,     0,    20,     0,
      21,     0,     5,     0,     0,   414,     0,   418,     0,   228,
     417,   229,     0,   414,     0,   418,     0,   417,   230,   414,
       0,   417,   230,   418,     0,   414,     8,   414,     0,   414,
       8,   414,     8,   414,     0,     5,   228,   229,     0,     5,
     228,   417,   229,     0,    12,   222,     5,   223,     0,    13,
     222,     5,   230,     5,   223,     0,    14,   222,   414,   230,
     414,   230,   414,   223,     0,    15,   222,   414,   230,   414,
     230,   414,   223,     0,     6,     0,     5,     0,     9,   222,
     419,   230,   419,   223,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   329,   329,   401,   404,   404,   410,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   423,   425,   427,   432,
     441,   444,   446,   448,   450,   452,   454,   456,   458,   460,
     462,   464,   466,   468,   470,   472,   474,   476,   478,   480,
     483,   483,   505,   508,   508,   512,   517,   520,   520,   525,
     527,   529,   534,   534,   534,   560,   560,   560,   588,   597,
     604,   639,   644,   655,   658,   672,   677,   680,   729,   742,
     768,   773,   788,   806,   827,   833,   836,   845,   859,   893,
     906,   926,   930,   940,   957,   957,   960,   966,   969,   972,
     982,   985,   988,   992,  1012,  1056,  1060,  1063,  1080,  1089,
    1096,  1096,  1104,  1110,  1114,  1119,  1124,  1124,  1137,  1141,
    1141,  1141,  1183,  1189,  1195,  1201,  1207,  1213,  1219,  1225,
    1231,  1237,  1243,  1249,  1255,  1261,  1267,  1273,  1279,  1286,
    1292,  1294,  1303,  1307,  1313,  1387,  1421,  1430,  1442,  1442,
    1455,  1455,  1471,  1483,  1489,  1495,  1495,  1526,  1550,  1563,
    1569,  1576,  1582,  1589,  1596,  1606,  1609,  1610,  1613,  1616,
    1619,  1624,  1627,  1641,  1648,  1653,  1658,  1662,  1669,  1674,
    1679,  1684,  1690,  1694,  1699,  1702,  1738,  1746,  1751,  1760,
    1764,  1773,  1776,  1781,  1786,  1791,  1799,  1803,  1815,  1825,
    1830,  1835,  1840,  1852,  1856,  1912,  1915,  1918,  1921,  1924,
    1933,  1940,  1943,  1965,  1968,  1978,  1982,  1990,  1997,  2006,
    2009,  2029,  2046,  2068,  2078,  2082,  2094,  2118,  2143,  2148,
    2156,  2164,  2174,  2191,  2199,  2206,  2213,  2222,  2231,  2240,
    2259,  2267,  2270,  2293,  2297,  2306,  2310,  2318,  2325,  2334,
    2337,  2340,  2343,  2348,  2366,  2413,  2429,  2433,  2438,  2443,
    2448,  2462,  2482,  2487,  2511,  2566,  2570,  2570,  2570,  2647,
    2653,  2658,  2663,  2667,  2674,  2677,  2682,  2700,  2705,  2709,
    2726,  2740,  2745,  2749,  2762,  2768,  2775,  2782,  2786,  2793,
    2803,  2814,  2831,  2903,  2915,  2919,  2953,  2956,  2959,  3003,
    3010,  3013,  3035,  3039,  3047,  3051,  3059,  3066,  3076,  3078,
    3083,  3098,  3114,  3131,  3135,  3140,  3144,  3147,  3157,  3157,
    3220,  3225,  3225,  3392,  3397,  3406,  3415,  3420,  3423,  3461,
    3478,  3504,  3509,  3512,  3515,  3520,  3528,  3531,  3543,  3553,
    3565,  3574,  3577,  3581,  3583,  3585,  3591,  3609,  3613,  3613,
    3613,  3731,  3755,  3764,  3776,  3793,  3797,  3831,  3831,  3831,
    3910,  3913,  3914,  3915,  3916,  3917,  3918,  3922,  3945,  3967,
    3974,  3977,  3998,  4002,  4010,  4014,  4023,  4030,  4033,  4033,
    4040,  4056,  4073,  4088,  4092,  4097,  4106,  4109,  4114,  4119,
    4124,  4129,  4136,  4175,  4180,  4185,  4195,  4207,  4211,  4216,
    4227,  4236,  4243,  4267,  4274,  4280,  4286,  4292,  4300,  4321,
    4328,  4334,  4345,  4356,  4368,  4380,  4400,  4417,  4436,  4457,
    4491,  4504,  4518,  4531,  4544,  4544,  4553,  4553,  4562,  4572,
    4582,  4590,  4603,  4616,  4625,  4634,  4648,  4661,  4678,  4692,
    4710,  4716,  4726,  4732,  4735,  4739,  4749,  4763,  4775,  4779,
    4785,  4789,  4793,  4798,  4807,  4820,  4824,  4830,  4834,  4838,
    4842,  4847,  4856,  4868,  4871,  4877,  4881,  4885,  4889,  4898,
    4913,  4916,  4922,  4926,  4930,  4935,  4945,  4951,  4957,  4966,
    4970,  4974,  4988,  4991,  5003,  5032,  5035,  5038,  5046,  5062,
    5070,  5073,  5094,  5097,  5108,  5111,  5119,  5127,  5173,  5178,
    5183,  5187,  5191,  5198,  5202,  5206,  5211,  5217,  5223,  5236,
    5247,  5250,  5250,  5286,  5297,  5297,  5303,  5312,  5328,  5336,
    5339,  5344,  5347,  5356,  5359,  5367,  5379,  5390,  5395,  5400,
    5400,  5427,  5431,  5431,  5444,  5450,  5454,  5460,  5460,  5469,
    5476,  5490,  5512,  5515,  5516,  5517,  5520,  5524,  5528,  5536,
    5543,  5550,  5574,  5581,  5593,  5606,  5626,  5652,  5685,  5705,
    5729,  5732,  5740,  5747,  5754,  5758,  5762,  5766,  5770,  5780,
    5785,  5790,  5810,  5817,  5826,  5835,  5844,  5851,  5859,  5863,
    5872,  5876,  5880,  5888,  5894,  5902,  5909,  5955,  5972,  5978,
    5982,  5985,  5991,  5997,  6008,  6010,  6011,  6012,  6013,  6014,
    6015,  6016,  6017,  6018,  6019,  6020,  6021,  6022,  6023,  6024,
    6025,  6026,  6027,  6028,  6029,  6032,  6034,  6035,  6036,  6037,
    6038,  6039,  6040,  6041,  6042,  6043,  6044,  6045,  6046,  6047,
    6048,  6049,  6050,  6051,  6052,  6053,  6054,  6055,  6056,  6057,
    6058,  6059,  6060,  6061,  6062,  6063,  6064,  6065,  6066,  6067,
    6068,  6069,  6070,  6071,  6072,  6075,  6078,  6079,  6080,  6081,
    6082,  6083,  6084,  6100,  6105,  6111,  6114,  6119,  6127,  6130,
    6133,  6143,  6151,  6162,  6178,  6200,  6215,  6253,  6261,  6271,
    6276,  6291
};
#endif


#if (YYDEBUG) || defined YYERROR_VERBOSE

/* YYTNAME[TOKEN_NUM] -- String name of the token TOKEN_NUM. */
static const char *const yytname[] =
{
  "$", "error", "$undefined.", "tINT", "tFLOAT", "tSTRING", "tBIGSTR", 
  "tEND", "tDOTS", "tStrCat", "tInclude", "tConstant", "tList", 
  "tListAlt", "tLinSpace", "tLogSpace", "tDefineConstant", "tPi", "t0D", 
  "t1D", "t2D", "t3D", "tExp", "tLog", "tLog10", "tSqrt", "tSin", "tAsin", 
  "tCos", "tAcos", "tTan", "tAtan", "tAtan2", "tSinh", "tCosh", "tTanh", 
  "tFabs", "tFloor", "tCeil", "tFmod", "tModulo", "tHypot", "tSolidAngle", 
  "tTrace", "tOrder", "tCrossProduct", "tMHTransform", "tMHJacNL", 
  "tGroup", "tDefineGroup", "tAll", "tInSupport", "tMovingBand2D", 
  "tDefineFunction", "tConstraint", "tRegion", "tSubRegion", "tRegionRef", 
  "tSubRegionRef", "tFilter", "tCoefficient", "tValue", "tTimeFunction", 
  "tBranch", "tNode", "tLoop", "tNameOfResolution", "tJacobian", "tCase", 
  "tIntegration", "tType", "tSubType", "tCriterion", "tGeoElement", 
  "tNumberOfPoints", "tMaxNumberOfPoints", "tNumberOfDivisions", 
  "tMaxNumberOfDivisions", "tStoppingCriterion", "tFunctionSpace", 
  "tName", "tBasisFunction", "tNameOfCoef", "tFunction", "tdFunction", 
  "tSubFunction", "tSupport", "tEntity", "tSubSpace", 
  "tNameOfBasisFunction", "tGlobalQuantity", "tEntityType", 
  "tEntitySubType", "tNameOfConstraint", "tFormulation", "tQuantity", 
  "tNameOfSpace", "tIndexOfSystem", "tSymmetry", "tEquation", "tGalerkin", 
  "tdeRham", "tGlobalTerm", "tGlobalEquation", "tDt", "tDtDof", "tDtDt", 
  "tDtDtDof", "tJacNL", "tNeverDt", "tIn", "tResolution", "tDefineSystem", 
  "tNameOfFormulation", "tNameOfMesh", "tFrequency", "tSolver", 
  "tOriginSystem", "tDestinationSystem", "tOperation", "tOperationEnd", 
  "tSetTime", "tDTime", "tSetFrequency", "tFourierTransform", 
  "tFourierTransformJ", "tIf", "tElse", "tLanczos", "tPerturbation", 
  "tUpdate", "tUpdateConstraint", "tBreak", "tTimeLoopTheta", "tTime0", 
  "tTimeMax", "tTheta", "tTimeLoopNewmark", "tBeta", "tGamma", 
  "tIterativeLoop", "tNbrMaxIteration", "tRelaxationFactor", 
  "tIterativeTimeReduction", "tDivisionCoefficient", "tChangeOfState", 
  "tChangeOfCoordinates", "tSystemCommand", "tSolveJac_AdaptRelax", 
  "tSaveSolutionExtendedMH", "tInit_MovingBand2D", "tMesh_MovingBand2D", 
  "tGenerate_MH_Moving", "tGenerateGroup", "tGenerateJacGroup", 
  "tSaveMesh", "tPostProcessing", "tNameOfSystem", "tPostOperation", 
  "tNameOfPostProcessing", "tUsingPost", "tAppend", "tPlot", "tPrint", 
  "tPrintGroup", "tEcho", "tWrite", "tAdapt", "tOnGlobal", "tOnRegion", 
  "tOnElementsOf", "tOnGrid", "tOnSection", "tOnPoint", "tOnLine", 
  "tOnPlane", "tOnBox", "tWithArgument", "tFile", "tDepth", "tDimension", 
  "tTimeStep", "tHarmonicToTime", "tFormat", "tHeader", "tFooter", 
  "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", "tNoNewLine", 
  "tDecomposeInSimplex", "tChangeOfValues", "tFlag", "tHelp", "tCpu", 
  "tCheck", "tDEF", "'?'", "tOR", "tAND", "tEQUAL", "tNOTEQUAL", 
  "tAPPROXEQUAL", "'<'", "tLESSOREQUAL", "'>'", "tGREATEROREQUAL", 
  "tLESSLESS", "tGREATERGREATER", "'+'", "'-'", "'*'", "'/'", "'%'", 
  "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", "'['", "']'", 
  "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", "'@'", "Stats", "@1", 
  "ProblemDefinitions", "@2", "ProblemDefinition", "Interactive", "@3", 
  "Groups", "@4", "Group", "@5", "MovingBand2DGroup", "@6", "@7", 
  "ReducedGroupRHS", "@8", "@9", "GroupRHS", "FunctionForGroup", 
  "ListOfRegionOrAll", "SuppListOfRegion", "SuppListTypeForGroup", 
  "ListOfRegion", "RecursiveListOfRegion", "IRegion", "DefineGroups", 
  "Comma", "DefineDimension", "MultipleIndex", "Index", "Functions", 
  "Function", "DefineFunctions", "Expression", "@10", "ListOfExpression", 
  "RecursiveListOfExpression", "WholeQuantityExpression", "@11", 
  "WholeQuantity", "@12", "@13", "WholeQuantity_Single", "@14", "@15", 
  "@16", "ArgumentsForFunction", "RecursiveListOfQuantity", 
  "ParametersForFunction", "JacobianMethods", "JacobianMethod", 
  "JacobianMethodTerm", "JacobianCases", "JacobianCase", 
  "JacobianCaseTerm", "IntegrationMethods", "IntegrationMethod", 
  "IntegrationMethodTerm", "IntegrationCases", "IntegrationCase", 
  "IntegrationCaseTerm", "QuadratureCases", "QuadratureCase", 
  "QuadratureCaseTerm", "Constraints", "BracedConstraint", "Constraint", 
  "ConstraintTerm", "ConstraintCases", "ConstraintCase", 
  "ConstraintCaseTerm", "FunctionSpaces", "BracedFunctionSpace", 
  "FunctionSpace", "FunctionSpaceTerm", "BasisFunctions", "BasisFunction", 
  "BasisFunctionTerm", "OptionalParametersForBasisFunction", "@17", "@18", 
  "SubSpaces", "SubSpace", "SubSpaceTerm", "ListOfBasisFunction", 
  "RecursiveListOfBasisFunction", "ListOfBasisFunctionCoef", 
  "RecursiveListOfBasisFunctionCoef", "GlobalQuantities", 
  "GlobalQuantity", "GlobalQuantityTerm", "ConstraintInFSs", 
  "ConstraintInFS", "ConstraintInFSTerm", "Formulations", 
  "BracedFormulation", "Formulation", "FormulationTerm", 
  "DefineQuantities", "DefineQuantity", "DefineQuantityTerm", "@19", 
  "@20", "IndexInFunctionSpace", "Equations", "EquationTerm", 
  "GlobalEquation", "GlobalEquationTerm", "GlobalEquationTermTerm", 
  "GlobalEquationTermTermTerm", "LocalTerm", "LocalTermTerm", "@21", 
  "@22", "GlobalTerm", "GlobalTermTerm", "@23", "@24", "TermOperator", 
  "Quantity_Def", "Resolutions", "BracedResolution", "Resolution", 
  "ResolutionTerm", "@25", "DefineSystems", "DefineSystem", 
  "DefineSystemTerm", "ListOfFormulation", "RecursiveListOfFormulation", 
  "ListOfSystem", "RecursiveListOfSystem", "Operation", "OperationTerm", 
  "@26", "@27", "PrintOperation", "PrintOperationOptions", 
  "PrintOperationOption", "TimeLoopTheta", "TimeLoopThetaTerm", 
  "TimeLoopNewmark", "TimeLoopNewmarkTerm", "IterativeLoop", 
  "IterativeLoopTerm", "IterativeTimeReduction", 
  "IterativeTimeReductionTerm", "ChangeOfStates", "ChangeOfState", 
  "ChangeOfStateTerm", "PostProcessings", "BracedPostProcessing", 
  "PostProcessing", "PostProcessingTerm", "PostQuantities", 
  "PostQuantity", "PostQuantityTerm", "SubPostQuantities", 
  "SubPostQuantity", "SubPostQuantityTerm", "@28", "@29", 
  "PostOperations", "BracedPostOperation", "PostOperation", 
  "PostOperationTerm", "SeparatePostOperation", "@30", 
  "PostSubOperations", "@31", "PostSubOperation", "@32", 
  "PostQuantitiesToPrint", "Combination", "PostQuantitySupport", 
  "PrintSubType", "PrintOptions", "PrintOption", "ParsedStrings", 
  "Affectation", "DefineConstants", "NameForFunction", "FExpr", 
  "OneFExpr", "ListOfFExpr", "RecursiveListOfFExpr", "MultiFExpr", 
  "CharExpr", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives. */
static const short yyr1[] =
{
       0,   233,   232,   234,   235,   234,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     238,   237,   239,   240,   239,   241,   241,   242,   241,   241,
     241,   241,   244,   245,   243,   247,   248,   246,   246,   249,
     249,   250,   250,   251,   251,   252,   252,   252,   253,   254,
     254,   255,   255,   255,   256,   256,   256,   256,   256,   256,
     256,   257,   257,   257,   258,   258,   259,   260,   260,   261,
     262,   262,   263,   263,   263,   263,   264,   264,   265,   265,
     266,   265,   267,   267,   268,   268,   270,   269,   271,   272,
     273,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   274,   274,   274,   274,   274,   274,   275,   274,
     276,   274,   274,   274,   274,   277,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   278,   278,   278,   279,   279,
     280,   280,   280,   281,   281,   282,   282,   283,   283,   284,
     284,   285,   285,   286,   286,   286,   287,   287,   288,   288,
     289,   289,   289,   290,   290,   291,   291,   292,   292,   292,
     293,   293,   294,   294,   295,   295,   295,   295,   295,   295,
     296,   296,   297,   297,   298,   298,   299,   299,   299,   299,
     299,   300,   300,   301,   301,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     303,   303,   304,   304,   305,   305,   306,   306,   306,   306,
     306,   306,   306,   307,   307,   308,   308,   309,   309,   309,
     309,   309,   309,   309,   309,   310,   311,   312,   310,   313,
     313,   314,   314,   315,   315,   315,   316,   316,   317,   317,
     318,   318,   319,   319,   320,   320,   321,   321,   322,   322,
     322,   323,   323,   324,   324,   325,   325,   325,   325,   326,
     326,   327,   327,   328,   328,   329,   329,   329,   329,   329,
     330,   330,   331,   331,   332,   332,   332,   332,   333,   332,
     332,   334,   332,   332,   332,   332,   332,   335,   335,   336,
     336,   337,   337,   337,   337,   338,   338,   339,   339,   339,
     340,   340,   341,   341,   341,   341,   342,   342,   344,   345,
     343,   343,   343,   343,   346,   346,   347,   348,   349,   347,
     350,   350,   350,   350,   350,   350,   350,   351,   351,   352,
     352,   353,   353,   354,   354,   355,   355,   355,   356,   355,
     357,   357,   358,   358,   359,   359,   359,   359,   359,   359,
     359,   359,   360,   360,   361,   361,   362,   362,   363,   363,
     364,   364,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   366,   365,   367,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     368,   368,   369,   369,   370,   370,   370,   371,   371,   372,
     372,   372,   372,   372,   373,   373,   374,   374,   374,   374,
     374,   374,   375,   375,   376,   376,   376,   376,   376,   377,
     377,   378,   378,   378,   378,   378,   378,   378,   378,   379,
     379,   380,   380,   381,   381,   381,   381,   381,   381,   382,
     382,   383,   383,   384,   384,   385,   385,   385,   385,   385,
     386,   386,   387,   387,   388,   388,   389,   389,   389,   390,
     390,   392,   391,   391,   393,   391,   391,   391,   394,   394,
     395,   395,   396,   396,   397,   397,   397,   397,   397,   399,
     398,   400,   401,   400,   402,   402,   402,   403,   402,   402,
     404,   404,   405,   405,   405,   405,   406,   406,   407,   407,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   408,
     408,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   410,   410,   411,   411,   411,
     412,   412,   412,   412,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   415,   415,   415,   415,   415,
     415,   415,   415,   416,   416,   416,   416,   417,   417,   417,
     417,   418,   418,   418,   418,   418,   418,   418,   418,   419,
     419,   419
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN. */
static const short yyr2[] =
{
       0,     0,     2,     0,     0,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     1,     1,     2,     1,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     2,     0,     0,     3,     4,     5,     0,     6,     5,
       1,     1,     0,     0,    18,     0,     0,     7,     2,     1,
       2,     1,     1,     1,     1,     0,     3,     4,     1,     1,
       3,     0,     3,     4,     1,     3,     3,     5,     1,     4,
       3,     0,     3,     6,     0,     1,     4,     0,     2,     3,
       0,     2,     5,     6,     7,     1,     0,     3,     4,     4,
       0,     2,     0,     3,     1,     3,     0,     2,     1,     0,
       0,     7,     3,     3,     6,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     3,     1,     3,     2,     1,     2,     0,     5,
       0,    11,     9,     4,     4,     0,     7,     6,     2,     2,
       2,     2,     3,     2,     3,     3,     2,     3,     1,     3,
       0,     3,     6,     0,     4,     0,     2,     3,     4,     0,
       4,     0,     2,     3,     3,     4,     0,     4,     0,     2,
       3,     3,     4,     0,     4,     0,     2,     3,     3,     4,
       0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
       0,     2,     3,     1,     0,     2,     3,     4,     3,     4,
       5,     0,     4,     0,     2,     3,     3,     3,     3,     3,
       3,     7,     3,     3,     3,     3,     3,     7,     7,     7,
       0,     2,     3,     1,     0,     2,     3,     4,     3,     4,
       4,     4,     4,     0,     4,     0,     2,     3,     3,     4,
       4,     7,     3,     3,     3,     0,     0,     0,    18,     0,
       4,     0,     2,     3,     3,     3,     1,     3,     0,     3,
       1,     3,     0,     3,     0,     4,     0,     2,     3,     3,
       3,     0,     4,     0,     2,     3,     3,     3,     4,     0,
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
       8,     0,     0,     3,     7,     7,     8,     0,    10,     6,
       3,     6,     1,     1,     1,     1,     0,     3,     1,     2,
       2,    12,     2,    15,     4,    12,    17,    22,    12,     0,
       2,     3,     4,     4,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       2,     2,     3,     9,     3,     0,     2,     4,     4,     5,
       0,     3,     5,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     6,     4,     4,     4,     4,     4,     4,
       6,     6,     6,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     3,     1,     1,     3,
       3,     3,     5,     3,     4,     4,     6,     8,     8,     1,
       1,     6
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     3,     4,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,    19,     0,    16,    17,   653,   670,   669,     0,    18,
     580,    42,   200,   163,   176,   230,    90,   289,   359,   479,
       0,   508,     0,    20,     0,     0,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,   646,   645,   652,
       0,     0,     0,     0,     0,   647,   648,   649,   650,   651,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   654,   605,     0,   655,     0,    84,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    23,    21,    25,    24,    22,    39,    29,    31,
      32,    33,    34,    30,    35,    36,    37,    38,     0,     0,
       0,     0,     0,   578,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   652,   607,
     608,     0,   657,     0,   658,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   644,   577,     0,     0,    85,     0,     6,     0,   204,
       8,   201,   203,   165,     9,   178,    10,   234,    11,   231,
     233,     0,     0,     7,    91,    95,   293,    12,   290,   292,
     363,    13,   360,   362,   483,    14,   480,   482,   519,   512,
      15,   509,   511,   536,     0,     0,     0,    87,    61,     0,
      59,   527,     0,   549,   663,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     606,   656,     0,   661,     0,   622,   621,   619,   620,   615,
     617,   616,   618,   610,   609,   611,   612,   613,   614,     0,
     579,   581,     0,     0,    44,    50,    51,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
     538,     0,     0,     0,     0,     0,     0,     0,     0,   549,
       0,   549,     0,    60,    74,    78,    71,     0,    58,    69,
       0,    55,     0,   664,   665,     0,     0,     0,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,     0,   634,
     635,   636,   637,   638,   639,     0,     0,     0,   659,   660,
       0,     0,     0,     0,   653,     0,     0,     0,     0,    81,
       0,     0,     0,   202,   205,     0,     0,   164,   166,     0,
     100,     0,   177,   179,     0,     0,     0,     0,     0,     0,
     232,   235,     0,     0,    84,     0,     0,     0,     0,   291,
     294,     0,     0,   368,   361,   364,     0,     0,     0,     0,
     481,   484,   521,     0,     0,     0,     0,     0,   510,   513,
       0,   534,   535,   532,   533,   530,     0,   539,   540,   100,
     542,     0,     0,     0,     0,     0,     0,   549,     0,    88,
       0,     0,    84,     0,     0,     0,     0,     0,   550,     0,
       0,     0,     0,     0,     0,     0,   662,   643,   671,   583,
     582,   652,     0,     0,     0,     0,    47,     0,    84,     0,
     211,     0,     0,   169,     0,   183,     0,     0,     0,   106,
       0,   281,     0,     0,   243,   259,   274,   100,     0,     0,
       0,     0,     0,   300,   319,     0,   370,     0,     0,   490,
      87,     0,   522,     0,   521,     0,     0,     0,   537,   536,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     646,    76,    80,     0,    70,     0,    75,     0,    64,    56,
      63,   529,   653,   653,     0,     0,     0,     0,     0,   653,
       0,   575,   575,   575,   555,   556,     0,     0,     0,   570,
     571,   102,   666,     0,     0,   633,   640,   641,   642,    45,
       0,     0,    89,     0,    62,     0,     0,     0,   211,     0,
     208,   206,     0,     0,     0,   167,     0,     0,     0,   181,
     101,     0,   180,     0,   238,   236,     0,     0,     0,     0,
       0,   100,    92,    97,   297,   295,     0,     0,     0,   365,
       0,     0,   390,   485,     0,     0,     0,   488,   520,     0,
     514,   522,   515,   517,   516,     0,     0,   100,     0,   544,
       0,     0,     0,   524,     0,   525,     0,    79,     0,    72,
     549,    84,   567,   572,   100,   564,     0,     0,   551,   554,
     562,   563,   557,   558,   561,   559,   560,   566,   565,     0,
     568,   100,   574,     0,     0,     0,    86,     0,    46,    49,
      82,     0,   213,   209,   207,   171,   168,   185,   182,     0,
       0,   652,   584,   585,   586,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,     0,   145,     0,     0,     0,     0,   138,     0,
       0,     0,     0,     0,     0,     0,     0,   107,   108,   136,
       0,   133,   283,   242,   237,   245,   239,   261,   240,   276,
     241,    93,     0,   296,   302,   298,     0,     0,     0,     0,
     299,   320,   366,   372,   367,     0,   486,   492,   489,   487,
     523,   518,   531,     0,     0,     0,     0,     0,     0,   526,
      77,    73,     0,     0,     0,     0,   552,   553,   576,     0,
     104,     0,   667,   668,    52,    48,     0,   210,     0,     0,
       0,    98,    99,   135,     0,     0,     0,     0,     0,     0,
       0,     0,   130,   129,   131,     0,   153,   151,   148,   150,
     149,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   137,   160,     0,     0,     0,     0,    94,     0,
     336,   336,   344,   325,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   414,   416,   369,   391,     0,     0,   100,     0,     0,
       0,     0,     0,    57,    68,     0,     0,   100,   569,   103,
     100,     0,     0,     0,     0,     0,     0,   100,   100,   100,
     100,     0,     0,     0,   100,   212,   214,     0,     0,   170,
     172,     0,     0,     0,   184,   186,     0,   106,     0,     0,
       0,     0,   106,     0,   132,     0,   358,     0,   128,   127,
     124,   125,   126,   120,   122,   121,   123,   116,   117,   112,
     115,   118,   113,   119,   152,   154,   156,     0,   158,     0,
       0,   134,     0,     0,     0,     0,   282,   284,     0,     0,
       0,     0,   102,     0,     0,   244,   246,     0,     0,     0,
     260,   262,     0,     0,     0,   275,   277,     0,     0,     0,
       0,     0,     0,     0,     0,   311,   301,   303,   350,   350,
     350,     0,     0,     0,     0,     0,   653,     0,     0,     0,
     371,   373,     0,     0,   100,     0,     0,     0,     0,   100,
       0,     0,     0,     0,   400,     0,   437,     0,   444,     0,
     452,   459,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   491,   493,     0,
       0,     0,     0,     0,     0,   528,    87,    66,     0,   105,
       0,    83,     0,     0,     0,     0,   100,     0,   100,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,   160,
     190,     0,     0,   143,     0,   144,     0,   140,     0,     0,
     106,   357,     0,   155,   157,     0,     0,     0,     0,     0,
       0,    87,     0,     0,   255,     0,     0,     0,     0,     0,
     270,   272,     0,   266,   268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,   106,
       0,     0,   351,   352,   353,   354,   355,   356,     0,   321,
     337,     0,   322,     0,   323,   345,     0,     0,     0,   330,
     324,   326,     0,     0,    87,   384,     0,     0,     0,     0,
     386,   388,     0,     0,   392,     0,     0,   393,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,   102,   496,     0,     0,     0,
       0,     0,     0,     0,    67,   100,     0,   216,   217,   222,
     223,     0,   226,     0,   225,   219,   218,    84,   220,   215,
       0,   224,   174,   173,     0,     0,   187,   188,     0,     0,
     106,     0,   139,     0,   110,   159,     0,   161,   285,   286,
     287,     0,   247,   248,     0,     0,     0,    84,   252,   253,
     254,   263,    84,   265,    84,   264,   279,   278,   280,   315,
     314,   307,   305,   306,   304,   308,   310,   316,   313,     0,
       0,     0,     0,   338,     0,   347,     0,     0,     0,   375,
     374,   382,    84,   376,   377,   380,   381,    84,   378,   379,
       0,     0,   100,     0,     0,     0,     0,     0,   100,     0,
       0,     0,   100,     0,     0,   100,   394,   438,     0,     0,
     100,     0,     0,     0,     0,   395,   445,     0,     0,     0,
       0,   100,     0,   396,   453,     0,     0,     0,     0,     0,
       0,     0,     0,   397,   460,   100,     0,   653,     0,     0,
       0,     0,     0,     0,     0,     0,   431,   430,   432,   432,
       0,   494,     0,   653,     0,     0,     0,     0,     0,    53,
     100,   100,     0,   100,   175,   192,   189,     0,   114,     0,
       0,   147,     0,     0,   288,   249,     0,   250,     0,   271,
       0,   267,     0,   317,     0,   342,   343,   341,   106,   346,
     106,   327,   328,     0,     0,     0,     0,   329,   331,   383,
       0,   387,     0,   398,   399,     0,     0,     0,   390,     0,
       0,     0,     0,     0,   390,     0,     0,     0,     0,     0,
     390,     0,     0,     0,     0,     0,     0,     0,   390,     0,
       0,     0,     0,     0,   390,   390,     0,     0,   469,     0,
       0,   420,     0,     0,   423,   424,     0,     0,     0,     0,
     419,     0,     0,     0,     0,   495,     0,     0,     0,     0,
       0,     0,   573,     0,     0,     0,     0,     0,     0,   146,
       0,     0,   111,     0,     0,     0,   273,   269,     0,     0,
     312,   339,   348,     0,     0,     0,     0,   385,   389,     0,
     653,     0,     0,   653,     0,     0,     0,   100,     0,   441,
     439,   440,   442,   100,     0,   448,   446,   447,   449,   450,
     100,   455,     0,   454,   456,   457,   463,   465,     0,     0,
     461,   462,     0,   464,     0,     0,     0,     0,     0,     0,
       0,     0,   653,   433,     0,   499,   499,     0,   653,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,   193,     0,     0,   162,     0,
       0,     0,   309,     0,     0,   332,   333,   334,   335,   403,
       0,     0,   401,     0,     0,   404,     0,     0,   443,     0,
     451,     0,   458,   467,   468,   471,   466,   418,     0,     0,
       0,   428,   429,     0,   415,     0,   653,   436,   417,   350,
     350,   548,     0,   541,   545,     0,     0,     0,   229,   228,
     221,   227,     0,     0,     0,     0,     0,     0,     0,   142,
       0,   251,   318,   106,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   434,   435,     0,     0,     0,   504,   498,     0,   500,
     497,   653,     0,     0,     0,   194,   195,   196,   197,   198,
     199,     0,     0,     0,     0,   406,   407,   390,     0,     0,
     405,     0,     0,   390,     0,     0,     0,   100,     0,     0,
       0,   470,   472,   421,   422,     0,   426,     0,     0,     0,
       0,     0,   501,     0,     0,     0,     0,   141,     0,     0,
       0,     0,     0,   653,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   100,   506,   507,   503,     0,
     106,   543,     0,     0,     0,   256,   340,   349,   402,   408,
       0,   390,     0,   412,   390,   473,   476,   477,   474,   475,
     478,   390,     0,   505,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   546,     0,    54,     0,
       0,   410,   390,   413,     0,   425,   502,     0,     0,     0,
       0,   427,     0,   257,     0,   411,     0,     0,     0,     0,
       0,   409,   547,    87,     0,     0,   258,     0,     0,     0
};

static const short yydefgoto[] =
{
    1757,     1,     2,     3,    20,    21,    22,   110,   198,   294,
     563,   295,   871,  1433,   240,   445,   631,   241,   242,   529,
     753,   866,   328,   442,   329,   468,   196,   367,   323,   368,
     115,   214,   394,   478,   479,  1317,   761,   580,   581,   707,
     907,  1342,   708,   780,  1200,   775,   812,   929,   931,   112,
     298,   378,   574,   769,   890,   113,   299,   383,   576,   770,
     895,  1195,  1438,  1525,   111,   201,   297,   374,   569,   768,
     886,   114,   209,   300,   391,   587,   815,   946,  1216,  1718,
    1747,   588,   816,   951,  1085,  1224,  1082,  1222,   589,   817,
     956,   583,   814,   937,   116,   218,   303,   400,   597,   819,
     967,  1353,  1099,  1449,   598,   731,   971,  1121,  1248,  1368,
     968,  1110,  1358,  1533,   970,  1115,  1360,  1534,  1111,   709,
     117,   222,   304,   405,   497,   601,   824,   981,  1126,  1252,
    1132,  1257,   735,   854,  1013,  1014,  1318,  1421,  1503,  1147,
    1277,  1149,  1286,  1151,  1294,  1152,  1304,  1492,  1605,  1652,
     118,   226,   305,   411,   605,   855,  1018,  1320,  1569,  1619,
    1690,  1661,   120,   231,   307,   419,    23,   306,   502,   609,
      66,   330,   234,   426,   309,   319,   332,   448,   644,    24,
     109,   710,   172,   105,   106,   173,   174,    29
};

static const short yypact[] =
{
  -32768,-32768,   102,  3086,  -154,   576,  -131,  -109,   -82,   -24,
     -22,   -14,   -11,     6,    25,    70,    17,   374,   194,  3025,
  -32768,-32768,   574,-32768,-32768,  1789,-32768,-32768,     9,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     140,-32768,   296,-32768,   310,   315,   340,   345,   363,-32768,
     367,-32768,   388,   405,   410,   425,   446,   454,   457,   473,
     475,   477,   198,   274,   278,   287,-32768,-32768,-32768,   116,
     512,   300,   313,   322,   333,-32768,-32768,-32768,-32768,-32768,
     350,   361,   383,   385,   397,   399,   402,   415,   428,   445,
     450,   481,   483,   492,   503,   505,   518,   545,   549,   560,
    2981,  2981,  2981,  2903,   235,-32768,   544,-32768,   576,  -120,
     488,    40,   216,   276,    68,    27,    73,    76,    78,   792,
      85,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   801,   557,
      90,   628,   656,-32768,   807,   811,  2981,  2981,  2981,  2981,
    2981,  2981,  2981,  2981,  2981,  2981,  2981,  2981,  2981,  2981,
    2981,  2981,  2981,  2981,  2981,  2981,  2981,  2981,-32768,  -111,
    -111,  3899,   235,   360,-32768,  2981,  2981,  2981,  2981,  2981,
    2981,  2981,  2981,  2981,  2981,  2981,  2981,  2981,  2981,  2981,
    2981,-32768,-32768,   590,   831,-32768,   838,-32768,   179,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,    26,   634,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   644,  1531,   650,  1531,   -47,-32768,    36,
  -32768,-32768,   652,-32768,-32768,   369,   671,   666,  1783,  3085,
    3926,  3953,  3980,  4007,  4034,  4061,  4088,  4115,  4142,  4169,
    3106,  4196,  4223,  4250,  4277,  4304,  4331,  3127,  3148,  3169,
  -32768,-32768,  2903,   785,  3054,  1824,   676,  3014,  3014,   844,
     844,   844,   844,   413,   413,  -111,  -111,  -111,  -111,   576,
  -32768,   707,   229,   677,-32768,-32768,-32768,   -20,   114,   143,
     117,   163,-32768,   407,   314,   688,   690,   375,    90,   751,
  -32768,    90,    90,    61,   696,   704,   710,   713,   716,-32768,
    2981,-32768,   717,-32768,   928,   732,-32768,  2903,-32768,-32768,
     718,-32768,  -117,-32768,-32768,   978,  2981,  2981,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2981,-32768,
  -32768,-32768,-32768,-32768,-32768,  2981,  2981,  2981,   235,-32768,
    2981,  2981,   786,  2942,  1705,  1010,  2503,   856,   863,-32768,
      31,  1062,  1065,-32768,-32768,   848,  1078,-32768,-32768,   871,
     137,  1085,-32768,-32768,   873,  1102,  1122,   900,   902,   913,
  -32768,-32768,   944,   925,   -56,  1144,  1145,   924,   926,-32768,
  -32768,  1148,   927,-32768,-32768,-32768,  1151,   930,  1154,  1156,
  -32768,-32768,-32768,  1157,   935,  1159,   576,  1172,-32768,-32768,
     961,-32768,-32768,-32768,-32768,-32768,  1184,  1013,-32768,   137,
  -32768,   966,  2903,   969,   970,   971,   -54,  4763,   -27,-32768,
    3020,   725,   373,   337,  1090,    24,  1188,  3024,-32768,   979,
    3190,  3211,  4358,  4385,  4412,  4439,  4763,  4763,-32768,-32768,
    4763,    -6,  1194,   981,  2981,  1250,-32768,   144,     3,   977,
  -32768,  1199,    30,-32768,  1200,-32768,   986,   989,  1205,-32768,
    1207,-32768,  1209,    80,-32768,-32768,-32768,   137,  1019,  1212,
    1215,  1218,    92,-32768,-32768,    93,-32768,   999,    97,-32768,
    1007,  1229,  1008,  1231,-32768,  1232,  1233,  1236,-32768,   644,
    1239,  1016,  2903,   382,  2903,  2903,  2903,  1240,    69,  1243,
    1244,  4763,-32768,  3589,-32768,    18,-32768,    90,-32768,-32768,
  -32768,-32768,  1828,  1828,  1023,  1249,   138,  2981,  2981,  1828,
    2981,  1255,-32768,-32768,-32768,-32768,  2981,  1256,  1347,-32768,
  -32768,  1027,-32768,  2981,  2981,-32768,-32768,-32768,-32768,-32768,
    1066,  3620,-32768,   144,-32768,  1259,  1262,  1266,-32768,   434,
  -32768,-32768,  1047,  1269,   437,-32768,   484,  2981,  1268,-32768,
  -32768,  1296,-32768,   495,-32768,-32768,  1271,   561,   567,   571,
    1272,   137,-32768,-32768,-32768,-32768,  1274,   575,   631,-32768,
    1277,   586,-32768,-32768,  1278,   612,  1279,-32768,-32768,   574,
  -32768,  1058,-32768,-32768,-32768,  1059,  1060,   137,   412,-32768,
     625,   629,   632,-32768,  1283,-32768,  2981,-32768,    35,-32768,
  -32768,   157,-32768,-32768,   137,-32768,   576,   576,-32768,  4763,
    4763,-32768,  4763,-32768,  1285,  1285,  1285,  4763,-32768,  2903,
    4763,   137,-32768,  4466,  4493,  1241,-32768,  1287,-32768,-32768,
    1067,   636,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4520,
    1073,   171,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,  1075,-32768,  1080,  1081,  1082,  1083,-32768,  1301,
    1296,  1296,  1296,  1296,  1304,    44,  1305,  4838,   115,  1087,
    1087,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,  1337,-32768,-32768,-32768,  1084,  1117,  1118,  1119,
  -32768,-32768,-32768,-32768,-32768,   963,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,  2981,  1125,  1120,  1126,  1128,  1129,-32768,
    4763,-32768,   166,  1088,   168,  1130,-32768,-32768,-32768,   663,
  -32768,   674,-32768,-32768,-32768,-32768,  2981,-32768,   348,   -21,
     -16,-32768,-32768,-32768,  1131,  1136,  1131,  1296,  1357,  1358,
    1167,  1185,  1174,  1174,  1174,  4815,-32768,-32768,-32768,-32768,
  -32768,    13,-32768,  1296,  1296,  1296,  1296,  1296,  1296,  1296,
    1296,  1296,  1296,  1296,  1296,  1296,  1296,  1296,  1296,  1388,
    1392,   998,-32768,  1168,   309,   624,   540,   -19,-32768,   401,
  -32768,-32768,-32768,-32768,   122,    28,    87,  1175,  1176,  1177,
    1180,  1181,  1193,  1201,  1202,  1403,   200,   331,   338,  1198,
    1208,  1210,  1211,  1219,  1214,  1216,  1221,  1224,  1225,  1226,
    1238,-32768,-32768,-32768,-32768,    -8,  3232,   137,  2903,  2903,
    2903,  2903,  1415,-32768,-32768,  1422,    36,   137,-32768,-32768,
     137,  1245,  3651,    90,    90,    90,    90,   106,   107,   137,
     137,  1246,  1423,  1429,   161,-32768,-32768,    65,  1435,-32768,
  -32768,  1248,  1463,  1466,-32768,-32768,  1258,-32768,  1261,  1331,
    1251,  1263,-32768,  1260,-32768,  1270,-32768,  1296,  4857,  4875,
     866,   866,   866,   620,   620,   620,   620,   432,   432,  1174,
    1174,  1174,  1174,  1174,-32768,-32768,-32768,  1265,  4838,   236,
    2864,-32768,  1480,    52,  1484,  1485,-32768,-32768,  1486,  1487,
    1495,  1275,  1027,    90,    90,-32768,-32768,  1497,    37,    59,
  -32768,-32768,  1500,  1501,  1504,-32768,-32768,  1505,  1506,   329,
    1507,  1509,  1475,  1512,    90,-32768,-32768,-32768,   742,  1124,
     720,   257,  1513,  1514,    63,   576,  1828,   576,    88,  1515,
  -32768,-32768,  1510,  1518,   137,  1519,  1520,  1522,  1523,   137,
    1524,  1535,  1543,  1544,-32768,  2981,-32768,  2981,-32768,  2981,
  -32768,-32768,    90,   576,  1547,  1548,  1549,  1550,  1551,  1552,
    1553,  1555,  1557,  1343,  1344,  1340,  1564,-32768,-32768,  2981,
    1341,   701,   705,   723,   729,-32768,  1007,-32768,  1342,-32768,
    1346,-32768,  1569,  1571,  1573,  1574,   137,  1581,   137,  1588,
    1592,  1593,  1599,  1596,  1598,   137,  1610,  1611,  1613,  1168,
  -32768,  1615,  1616,-32768,  1395,-32768,  1296,-32768,  1398,  1405,
  -32768,-32768,   967,-32768,-32768,  1296,  1407,   737,  1623,  1629,
    1635,  1007,  1642,    98,  1424,  1648,  1647,  1649,  1652,  1653,
  -32768,-32768,  1654,-32768,-32768,  1655,  1656,  1657,  1658,  1659,
    1661,  1662,  1663,  1664,  1670,  1007,  1675,  1676,  1682,-32768,
    1650,  1688,-32768,-32768,-32768,-32768,-32768,-32768,    90,-32768,
  -32768,  1474,-32768,    90,-32768,-32768,  1491,  1690,  1692,-32768,
  -32768,-32768,  1708,  1709,  1007,-32768,  1741,  1742,  1743,  1744,
  -32768,-32768,  1745,  1749,-32768,  1536,  1538,-32768,  1528,  1566,
    1567,  1575,  1570,  1604,  1605,  1606,  3253,   821,  3274,   683,
    3295,   384,   420,  1607,  1576,  1608,  1609,  1537,  1641,  1614,
    1644,  1660,  1666,  1582,    91,    91,-32768,  1864,  3682,  1651,
    1665,  1643,  1669,  1680,-32768,   137,    36,-32768,-32768,-32768,
  -32768,  1679,-32768,  1681,-32768,-32768,-32768,  1683,-32768,-32768,
    1684,-32768,-32768,-32768,  1879,   777,-32768,-32768,    90,  4790,
  -32768,  2981,-32768,  1668,-32768,  4838,    90,-32768,-32768,-32768,
  -32768,  1880,-32768,-32768,  1881,  1799,  1905,  1683,-32768,-32768,
  -32768,-32768,   778,-32768,   782,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1693,
    1912,  1913,  1914,-32768,  1916,-32768,  1917,  1919,   359,-32768,
  -32768,-32768,   817,-32768,-32768,-32768,-32768,   819,-32768,-32768,
    1920,  1922,   137,  1927,  1930,  1710,  2981,  1931,   137,    90,
    2981,  1716,   137,  2981,  2981,   137,-32768,-32768,  2981,  1721,
     137,  2981,  2981,  2981,  2981,-32768,-32768,  2981,  2981,  1722,
    2981,   137,  2981,-32768,-32768,  2981,  1932,  1728,  1729,  2981,
    2981,  1730,  2981,-32768,-32768,   137,  1953,  1828,  2981,  1954,
    1956,  1959,  1961,  1963,    90,  1962,-32768,-32768,-32768,-32768,
      12,-32768,  1746,  1828,  2903,  1747,  2903,  2903,  1748,-32768,
     137,   137,  1968,   137,-32768,-32768,-32768,  1753,-32768,  1756,
    3316,-32768,  1296,  1764,-32768,-32768,  1967,-32768,  1987,-32768,
    1988,-32768,  1994,  1751,  1993,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,  1131,  1131,  1131,    90,-32768,-32768,-32768,
    1998,-32768,  1999,-32768,-32768,  1782,  1777,  1780,-32768,  3337,
    1781,  1791,  1785,  3358,-32768,  2005,   573,   708,  2009,  3379,
  -32768,  2011,   932,  1206,  1432,  1473,  3400,  1740,-32768,  2353,
    2012,  2374,  2395,  2013,-32768,-32768,  2424,  2445,-32768,  2466,
    1798,-32768,  1792,  3421,-32768,-32768,  1793,  1805,  1810,  1804,
  -32768,   260,   265,  1813,  1814,-32768,  2981,  1816,   822,  2981,
     835,   868,-32768,  1817,  1821,  1840,  1822,  1841,   472,-32768,
    1842,  2981,  4838,  1838,  2064,  1844,-32768,-32768,  2065,  2067,
  -32768,-32768,-32768,  2078,  2079,  2081,  2082,-32768,-32768,  2083,
    1828,  2981,  1461,  1828,  2086,  2087,  2088,   137,  1752,-32768,
  -32768,-32768,-32768,   137,  1929,-32768,-32768,-32768,-32768,-32768,
     137,-32768,  1975,-32768,-32768,-32768,-32768,-32768,  2019,  2063,
  -32768,-32768,   876,-32768,  2090,  2981,   576,  2981,  2095,  2102,
     576,  2103,  1750,-32768,  2104,-32768,-32768,  3713,  1828,  1884,
    3744,  1887,  1889,  1894,  2113,  2124,  2125,  2127,  2130,  2981,
    2981,  2981,  2981,  2981,-32768,-32768,  1908,  3775,-32768,  2043,
    2132,  1923,-32768,  1924,  1925,-32768,-32768,-32768,-32768,-32768,
    1934,  4547,  2026,  1933,  1945,-32768,  1937,  1946,-32768,  1948,
  -32768,   297,-32768,-32768,-32768,-32768,-32768,-32768,  4574,  1941,
    3442,-32768,-32768,   890,-32768,   576,  1828,-32768,-32768,   487,
     548,-32768,  1949,-32768,-32768,  1952,  2903,    36,-32768,-32768,
  -32768,-32768,  2174,  2487,  2538,  2576,  2597,  2626,  2981,-32768,
    2178,-32768,-32768,-32768,  1131,  2183,  2190,  1970,  2981,  2981,
    2192,   137,  2981,  1973,  2981,   406,  2195,  2201,  2981,  2212,
     576,-32768,-32768,  2202,  2215,  2217,-32768,-32768,  2001,-32768,
  -32768,  1828,  2981,   893,  1995,-32768,-32768,-32768,-32768,-32768,
  -32768,  3806,  1996,  2004,  2008,-32768,-32768,-32768,  4601,  3463,
  -32768,  2020,  3484,-32768,  4628,  2223,  2981,   137,  2231,    90,
    2239,-32768,-32768,-32768,-32768,  4655,-32768,  2015,  2240,  2243,
    2247,    90,-32768,  2024,  3505,  2036,  2981,-32768,  2259,  2261,
    2262,  2109,  2263,  1828,  2045,  2981,  2156,  2046,  2264,  2647,
    2269,  2271,  2276,  2283,  2066,   137,-32768,-32768,-32768,  2284,
  -32768,-32768,  2981,  2069,  4682,-32768,-32768,-32768,-32768,-32768,
    2068,-32768,  4709,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,  2071,-32768,  2089,  3837,  2981,  2294,  2265,  2981,
    2200,  2092,  2246,  2290,  2308,  2309,-32768,  3526,-32768,    90,
    3547,-32768,-32768,-32768,  2310,-32768,-32768,  2981,  2311,  2981,
    2334,-32768,  3568,-32768,  4736,-32768,  2981,  2216,  2327,  3868,
    2330,-32768,-32768,  1007,  2329,  2112,-32768,  2342,  2344,-32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  -173,-32768,-32768,  -300,  1412,-32768,
  -32768,  1425,  -441,-32768,  -428,-32768,  -380,  -467,  -485,-32768,
  -32768,-32768,-32768,  -405,-32768,  -544,-32768,  -867,-32768,  -440,
  -32768,-32768,-32768,-32768,-32768,-32768,  1646,-32768,  1308,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1794,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1540,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -961,  -665,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768, -1319,-32768,-32768,-32768,  1203,  1045,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   859,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1869,-32768,
    1771,-32768,  2245,-32768,  1873,  2151,  -252,-32768,   582,   862,
  -32768,-32768,   -25,  -523,  -513,  -139,   -15,  -106
};


#define	YYLAST		5094


static const short yytable[] =
{
     104,   393,   193,   245,   530,   573,   773,   652,   420,  1116,
     107,   427,   428,   430,   490,   606,   586,  1423,   905,   632,
     633,   324,    40,   325,   511,   596,   641,   324,   600,   325,
    1054,   604,   211,   982,   887,  1059,   469,   571,   324,   324,
     325,   325,  1080,     6,    25,     4,   888,   787,   370,   788,
     371,   952,   891,  1015,   892,   893,     6,   564,   711,  1462,
     372,   953,   525,   954,  1083,  1468,   237,   436,  1124,   438,
     237,  1474,  1016,     4,   528,   169,   170,   171,     4,  1482,
     212,     4,   590,     4,     6,  1488,  1489,   585,   567,     6,
       4,    30,     6,  1130,     6,   237,  1316,   629,   476,   595,
     599,     6,    -2,   194,   603,  1213,   446,   238,   190,   896,
     195,   898,  1424,   447,   191,  1047,   238,   476,   476,    31,
     238,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,    26,    27,   238,    32,    28,   476,   564,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   789,   489,   237,   517,
     477,   384,   476,   864,   195,   -62,   447,   711,   711,   711,
     711,   322,   375,   362,   292,   518,   722,   385,   443,   477,
     477,   462,   972,  1203,   376,     6,   519,   386,   387,   238,
     751,    49,   973,   447,    33,   388,    34,   389,   889,   373,
     955,   379,   744,   894,    35,   380,   -62,    36,   238,   865,
     477,  1017,   142,   381,    25,   790,   566,   630,   293,   755,
     628,   108,  1239,   195,    37,   974,   975,   976,   977,   978,
     979,  1425,   906,   175,   477,    41,   760,   358,   301,   327,
     983,   754,   326,    38,   711,   327,   213,   359,   572,   470,
     782,   783,   784,   785,   326,  1081,   327,   327,   199,   200,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   711,   239,  1084,   711,   429,
     239,  1125,   624,   513,   565,   437,   207,   208,    39,   447,
     119,   216,   217,   121,   220,   221,   224,   225,   572,   984,
     506,   450,   451,   229,   230,   239,  1131,   122,  1671,   651,
     572,   572,   123,   452,  1676,   572,   572,  1117,  1036,  1038,
     453,   454,   455,  1339,  1091,   456,   457,   899,   460,   104,
     809,   465,   810,   377,   142,   636,   390,   124,   637,   107,
    1118,   980,   125,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   239,
     126,   928,   382,   618,   127,   620,   621,   622,   752,    42,
     -65,    43,  1720,  1045,   711,  1722,   392,   195,   239,   862,
     657,   932,  1723,  -604,   401,   128,   447,    44,  1076,   706,
     933,   934,   935,   873,   874,   875,   876,   877,   878,   879,
     880,   881,   129,  1740,   882,   521,   523,   130,   883,  1092,
     138,   985,   995,  1363,  1364,  1027,   402,   364,   996,  1093,
     638,   884,   131,   403,   176,   177,   178,   179,   180,   561,
     181,   182,   183,   184,   203,   204,   185,   186,   187,   188,
     189,   365,  1020,   132,   190,   413,  1288,   366,  1365,  1064,
     191,   133,  1028,  1128,   134,  1029,  1065,  1062,   957,  1366,
     958,   959,  1037,  1039,  1040,  1041,  1645,   395,  1646,  1046,
     135,   960,   136,  1501,   137,  1119,  1120,   396,  1504,  1647,
    1502,  1451,  1295,  1452,   414,  1502,   139,   961,   962,   963,
     140,  1648,   397,  1289,   205,   206,   398,   104,   104,   141,
     759,   964,   639,   640,   104,   642,  1649,   107,   107,   143,
    1603,   647,   144,   650,   107,  1290,  1291,  1604,   653,   654,
     756,   757,  1296,   711,   415,   145,   416,    45,   936,  1297,
    1298,  1174,   711,   404,   146,  1518,  1519,  1520,  1521,  1522,
    1523,   192,   669,   997,  1613,   147,  1614,  1615,   417,   998,
     999,  1299,   233,   235,  1300,  1301,  1000,   272,   526,    46,
      47,    48,   148,  1032,  1033,  1034,  1035,   885,  1292,  1136,
    1470,    26,    27,   149,  1141,    28,  1211,  1048,  1367,   271,
     272,  1102,  1103,  1104,  1105,  1106,  1107,  1616,   333,   272,
    1650,   750,   524,   195,   418,   150,  1214,   151,  1618,  1618,
    1235,   619,   272,  1293,  1302,  1613,  1199,  1614,  1615,   152,
     947,   153,   948,   965,   154,  1205,   187,   188,   189,   949,
     966,  1181,   190,  1183,   243,  1651,   399,   155,   191,  1251,
    1190,   745,   272,  1077,  1078,   804,   805,   806,   807,  1303,
     156,   808,  1102,  1103,  1104,  1105,  1106,  1107,  1616,    67,
      68,    69,   662,   663,  1098,   665,   666,   157,    71,    72,
      73,    74,   158,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,  1453,  1454,
    1455,  1524,  1153,   159,   938,   160,   939,   940,   941,   942,
     943,   944,   667,   668,   161,  1471,  1617,   197,   856,  1021,
    1022,  1023,  1024,   712,   713,   162,  1633,   163,    67,    68,
     168,   726,   727,   728,   729,  1329,    62,    63,    64,    65,
     164,   872,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   165,   406,   950,
    1328,   166,   176,   177,   178,   179,   180,  1620,   181,   182,
     183,   184,   167,   407,   185,   186,   187,   188,   189,   715,
     716,  1067,   190,   360,  1412,   717,   718,   228,   191,   719,
     720,   408,  1279,   724,   725,  1280,   233,  1332,  1242,  1100,
    1427,  1101,   246,  1244,   733,   734,   247,  1281,  1282,   711,
     289,  1283,  1284,  1714,  1102,  1103,  1104,  1105,  1106,  1107,
    1113,   802,   803,   804,   805,   806,   807,  1348,   290,   808,
     737,   738,  1350,   291,  1352,   409,  1102,  1103,  1104,  1105,
    1106,  1107,  1108,   945,   746,   272,   302,  1375,   747,   272,
     730,   748,   272,  1381,   662,   767,   308,  1385,   100,  1127,
    1388,  1129,  1370,   101,   331,  1391,   102,  1372,   179,   180,
     320,   181,   182,   183,   184,   244,  1400,   185,   186,   187,
     188,   189,   868,   272,   334,   190,   335,  1154,  1337,   369,
    1410,   191,  1442,   869,   870,   363,  1343,   176,   177,   178,
     179,   180,  1285,   181,   182,   183,   184,   410,   412,   185,
     186,   187,   188,   189,   431,  1434,  1435,   190,  1437,  1634,
    1170,   272,   432,   191,  1171,   272,   440,   100,   433,  1476,
    1271,   434,   101,  1272,   435,   102,   439,  1540,   444,  1114,
    1543,   104,  1172,   272,   522,  1273,  1274,  1275,  1173,   272,
     441,   107,   421,   422,   423,   424,  1207,   272,   825,  1382,
    1146,  1109,  1148,   202,  1150,  1204,   210,   215,   219,   223,
     227,   425,   232,   449,   176,   177,   178,   179,   180,  1567,
     181,   182,   183,   184,  1168,  1572,   185,   186,   187,   188,
     189,    67,    68,   671,   190,  1335,  1336,  1349,   195,   458,
     191,  1351,   195,   463,  1419,    75,    76,    77,    78,    79,
     672,   673,   674,   675,   676,   677,   678,   679,   680,   681,
     682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,   697,  1369,   195,  1371,   195,
    1276,  1509,   272,  1612,   466,   185,   186,   187,   188,   189,
     296,   467,  1547,   190,  1511,   272,  1456,   471,  1549,   191,
     472,   798,   799,   800,   801,  1551,   473,   802,   803,   804,
     805,   806,   807,   474,   826,   808,   827,   828,   829,   830,
     480,   831,   832,   833,   834,   835,   836,  1512,   272,   475,
     837,   481,   698,   838,  1555,  1556,   839,   482,  1663,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,  1609,
    1610,   850,  1665,   272,   645,   646,   851,   483,   484,   852,
     485,   176,   177,   178,   179,   180,  1624,   181,   182,   183,
     184,   486,   487,   185,   186,   187,   188,   189,   488,   491,
     492,   190,   493,   495,   494,   496,   498,   191,   499,   500,
    1700,   501,   503,   504,   505,  1668,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,  1340,   507,   802,   803,
     804,   805,   806,   807,   508,  1428,   808,  1430,  1431,   509,
     510,  1100,   853,  1101,   512,   531,  1641,   514,   515,   516,
     527,   559,   552,   699,   560,   568,   570,   575,   577,   700,
     701,   578,   579,  1477,   582,   702,   584,   591,   703,   592,
     593,   926,   927,   704,   705,   594,   706,   602,  1102,  1103,
    1104,  1105,  1106,  1107,  1108,   322,   607,   608,   610,   612,
     613,  1379,  1680,   614,   616,  1383,   617,   623,  1386,  1387,
     625,   634,   626,  1389,   635,   651,  1392,  1393,  1394,  1395,
     643,   648,  1396,  1397,   655,  1399,   658,  1401,  1754,   659,
    1402,   660,   464,   670,  1406,  1407,   664,  1409,   714,   721,
    1712,   723,   104,  1413,   732,   736,   739,   741,   743,   742,
     749,   758,   107,   764,   765,   766,   772,   774,   104,    67,
      68,   671,   776,   777,   778,   779,   781,   786,   107,   811,
     791,   863,   820,    75,    76,    77,    78,    79,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   818,   821,   822,   823,   858,  1682,
      67,    68,   168,  1112,   859,   857,   860,   861,   897,   706,
     867,  1689,   900,   901,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   902,
    1559,   924,   903,   808,  1563,   925,   930,   986,   987,   988,
     698,  1507,   989,   990,  1510,   176,   177,   178,   179,   180,
     994,   181,   182,   183,   184,   991,  1527,   185,   186,   187,
     188,   189,  1025,   992,   993,   190,  1001,  1026,  1043,  1738,
    1002,   191,  1003,  1004,  1044,   104,  1541,  1623,   104,  1478,
    1049,  1005,  1006,  1008,  1007,   107,  1009,  1010,   107,   176,
     177,   178,   179,   180,  1011,   181,   182,   183,   184,  1611,
    1012,   185,   186,   187,   188,   189,   825,  1030,  1051,   190,
    1558,  1052,  1560,  1057,  1042,   191,  1050,   104,  1096,   562,
    1479,  1053,  1060,   104,  1055,  1068,  1058,   107,  1063,   864,
    1071,  1072,  1073,   107,  1583,  1584,  1585,  1586,  1587,  1061,
    1074,   699,  1079,  1075,  1657,  1086,  1087,   700,   701,  1088,
    1089,  1090,  1094,   702,  1095,  1097,   703,  1134,  1122,  1123,
    1133,   704,   705,  1135,   706,  1138,  1137,  1139,  1140,  1142,
     792,   793,   794,   795,   796,   797,   798,   799,   800,   801,
    1143,   104,   802,   803,   804,   805,   806,   807,  1144,  1145,
     808,   107,  1155,  1156,  1157,  1158,  1159,  1160,  1161,   100,
    1162,  1056,  1163,  1631,   101,  1164,  1165,   102,  1166,  1167,
    1169,  1176,  1175,  1638,  1639,   649,  1177,  1642,  1178,  1644,
    1179,  1180,   826,  1655,   827,   828,   829,   830,  1182,   831,
     832,   833,   834,   835,   836,  1184,   104,  1664,   837,  1185,
    1186,   838,  1187,  1188,   839,  1189,   107,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,  1191,  1192,   850,
    1193,  1679,  1196,  1197,   851,  1198,  1201,   852,  1202,  1206,
    1208,   176,   177,   178,   179,   180,  1209,   181,   182,   183,
     184,  1694,  1210,   185,   186,   187,   188,   189,   104,  1212,
    1702,   190,  1215,  1217,  1218,  1240,  1219,   191,   107,  1220,
    1221,  1223,  1225,  1226,  1227,  1228,  1229,  1715,  1230,  1231,
    1232,  1233,   176,   177,   178,   179,   180,  1234,   181,   182,
     183,   184,  1236,  1237,   185,   186,   187,   188,   189,  1238,
    1542,  1727,   190,  1241,  1730,  1246,  1243,  1247,   191,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    67,    68,
     461,    70,  1742,  1245,  1744,  1249,  1250,    71,    72,    73,
      74,  1749,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,  1481,  1253,  1254,
    1255,  1256,  1258,    67,    68,    69,  1259,   825,  1262,  1260,
     238,  1261,    71,    72,    73,    74,  1309,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    67,    68,    69,    70,  1263,  1264,  1265,  1306,
    1266,    71,    72,    73,    74,  1315,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    67,    68,    69,  1267,  1268,  1269,  1305,  1307,  1308,
      71,    72,    73,    74,  1311,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
    1310,  1321,  1325,   826,  1312,   827,   828,   829,   830,  1323,
     831,   832,   833,   834,   835,   836,  1334,  1344,  1345,   837,
    1313,  1341,   838,  1324,  1346,   839,  1314,  1326,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,  1327,  1330,
     850,  1331,  1347,   195,  1333,   851,  1354,   100,   852,  1355,
    1356,  1357,   101,  1359,  1361,   102,  1362,  1373,  1565,  1374,
     239,  1566,  1376,   103,   825,  1377,  1380,  1403,  1378,   176,
     177,   178,   179,   180,  1384,   181,   182,   183,   184,  1390,
    1398,   185,   186,   187,   188,   189,  1404,  1405,  1408,   190,
    1411,  1414,   100,  1415,  1416,   191,  1417,   101,  1418,  1420,
     102,  1436,  1444,  1448,  1426,  1429,  1439,  1432,   103,  1440,
     825,  1548,   176,   177,   178,   179,   180,  1443,   181,   182,
     183,   184,  1445,  1446,   185,   186,   187,   188,   189,  1447,
    1450,   100,   190,  1457,  1458,  1459,   101,  1460,   191,   102,
    1461,  1464,  1469,   336,  1465,  1466,  1472,   103,  1475,  1484,
    1487,  1494,  1495,  1497,   825,   178,   179,   180,  1498,   181,
     182,   183,   184,  1499,  1500,   185,   186,   187,   188,   189,
     100,  1505,  1506,   190,  1514,   101,  1508,  1513,   102,   191,
     826,  1516,   827,   828,   829,   830,   103,   831,   832,   833,
     834,   835,   836,  1515,  1517,  1526,   837,  1528,   825,   838,
    1531,  1529,   839,  1530,  1532,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,  1535,  1536,   850,  1537,  1538,
    1539,  1544,   851,  1546,  1545,   852,   826,  1557,   827,   828,
     829,   830,  1561,   831,   832,   833,   834,   835,   836,  1562,
    1564,  1568,   837,  1573,   825,   838,  1575,  1576,   839,  1577,
    1578,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,  1579,  1580,   850,  1581,  1582,  1588,  1590,   851,  1591,
     826,   852,   827,   828,   829,   830,  1592,   831,   832,   833,
     834,   835,   836,  1597,  1593,  1594,   837,  1595,  1550,   838,
    1600,   825,   839,  1598,  1607,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,  1599,  1601,   850,  1602,  1621,
    1622,  1625,   851,  1632,   826,   852,   827,   828,   829,   830,
    1635,   831,   832,   833,   834,   835,   836,  1636,  1637,  1640,
     837,  1643,  1653,   838,  1552,   825,   839,  1658,  1654,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,  1656,
    1659,   850,  1660,  1662,   572,  1666,   851,  1669,  1678,   852,
     826,  1670,   827,   828,   829,   830,  1681,   831,   832,   833,
     834,   835,   836,  1674,  1683,  1685,   837,  1686,  1553,   838,
    1687,   825,   839,  1691,  1688,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,  1693,  1695,   850,  1696,  1697,
    1699,  1705,   851,  1701,  1704,   852,  1707,   826,  1708,   827,
     828,   829,   830,  1709,   831,   832,   833,   834,   835,   836,
    1710,  1713,  1554,   837,  1711,   825,   838,  1716,  1719,   839,
    1724,  1728,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,  1725,  1729,   850,  1735,  1736,  1741,  1743,   851,
    1732,   826,   852,   827,   828,   829,   830,  1750,   831,   832,
     833,   834,   835,   836,  1751,  1753,  1755,   837,  1698,   825,
     838,  1756,  1758,   839,  1759,  1069,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   813,  1194,   850,  1070,
    1483,   969,   661,   851,  1422,  1570,   852,   826,  1319,   827,
     828,   829,   830,   611,   831,   832,   833,   834,   835,   836,
     740,  1485,   615,   837,   236,  1703,   838,   321,     0,   839,
       0,     0,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,  1486,     0,   850,     0,     0,     0,     0,   851,
       0,   826,   852,   827,   828,   829,   830,     0,   831,   832,
     833,   834,   835,   836,     0,     0,     0,   837,     0,  1731,
     838,  1490,     0,   839,     0,     0,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,     0,     0,   850,     0,
       0,     0,  1491,   851,     0,   826,   852,   827,   828,   829,
     830,     0,   831,   832,   833,   834,   835,   836,     0,     0,
       0,   837,     0,  1493,   838,  1733,     0,   839,     0,     0,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
       0,     0,   850,     0,  1626,     0,     0,   851,     0,     0,
     852,     0,     0,     0,     0,     0,    67,    68,   168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1734,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,  1627,     0,     0,     0,     0,
       0,     0,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,  1745,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,  1628,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,  1629,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,     0,     0,
     191,     0,     0,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,  1630,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,  1706,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
       0,     0,   191,     0,     0,   100,     0,     0,     0,     0,
     101,     0,     0,   102,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
       0,     0,   191,     0,     0,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,    67,    68,    69,
       0,     0,   191,     0,     0,     0,    71,    72,    73,    74,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    67,    68,    69,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,  1066,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    67,    68,   168,   459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    67,    68,   168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   520,    68,   168,     0,     0,    50,     0,
       0,     0,    51,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   361,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,     0,     0,   100,     0,     0,    53,
       0,   101,     0,     0,   102,   532,     0,     0,     0,     0,
       0,     4,    54,     0,    55,     0,     5,     0,     0,     0,
       0,     0,     6,     0,    56,     0,     0,     0,    57,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,    58,
     101,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,    59,     0,     0,   533,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,   100,    10,     0,     0,     0,   101,
       0,     0,   102,     0,     0,    11,     0,     0,     0,    12,
     534,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    60,     0,    61,     0,     0,     0,     0,     0,     0,
       0,   535,     0,   100,     0,     0,     0,    14,   101,     0,
       0,   102,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,   100,   190,     0,     0,     0,   101,     0,   191,
     102,     0,    15,     0,    16,     0,     0,     0,     0,     0,
       0,     0,     0,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
       0,    17,    18,    19,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,   337,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,   348,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
     179,   180,   191,   181,   182,   183,   184,   355,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
     178,   179,   180,   191,   181,   182,   183,   184,   356,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
     177,   178,   179,   180,   191,   181,   182,   183,   184,   357,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
     553,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
     184,   554,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
     183,   184,  1019,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,  1270,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,  1278,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,  1287,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,  1441,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
     179,   180,   191,   181,   182,   183,   184,  1463,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
     178,   179,   180,   191,   181,   182,   183,   184,  1467,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
     177,   178,   179,   180,   191,   181,   182,   183,   184,  1473,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
    1480,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
     184,  1496,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
     183,   184,  1608,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,  1673,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,  1675,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,  1692,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,  1737,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
     179,   180,   191,   181,   182,   183,   184,  1739,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
     178,   179,   180,   191,   181,   182,   183,   184,  1746,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,     0,     0,   191,     0,     0,     0,   627,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,     0,     0,   191,     0,     0,     0,   656,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,     0,     0,   191,     0,     0,     0,
    1031,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,     0,     0,   191,     0,     0,
       0,  1322,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   191,     0,
       0,     0,  1571,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
       0,     0,     0,  1574,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,     0,     0,
     191,     0,     0,     0,  1589,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,     0,
       0,   191,     0,     0,     0,  1667,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
       0,     0,   191,     0,     0,     0,  1726,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,     0,     0,   191,     0,     0,     0,  1752,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
     270,     0,     0,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,   338,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,   339,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,   340,     0,   191,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
     341,     0,   191,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,   342,     0,   191,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,   343,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,   344,     0,   191,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,   345,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,   346,     0,   191,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,   347,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,   349,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,   350,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,   351,     0,   191,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
     352,     0,   191,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,   353,     0,   191,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,   354,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,   555,     0,   191,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,   556,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,   557,     0,   191,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,   558,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,   762,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,   763,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,   771,     0,   191,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
    1596,     0,   191,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,  1606,     0,   191,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,  1672,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,  1677,     0,   191,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,  1684,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,  1717,     0,   191,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,  1721,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,  1748,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   191,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   801,     0,
       0,   802,   803,   804,   805,   806,   807,     0,     0,   808,
       0,     0,     0,  1338,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,     0,     0,   802,   803,   804,   805,
     806,   807,     0,     0,   808,     0,   904,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,     0,     0,   802,
     803,   804,   805,   806,   807,     0,     0,   808,   794,   795,
     796,   797,   798,   799,   800,   801,     0,     0,   802,   803,
     804,   805,   806,   807,     0,     0,   808,   795,   796,   797,
     798,   799,   800,   801,     0,     0,   802,   803,   804,   805,
     806,   807,     0,     0,   808
};

static const short yycheck[] =
{
      25,   301,   108,   142,   445,   472,   671,   551,   308,   970,
      25,   311,   312,   313,   394,   500,   483,     5,     5,   532,
     533,     3,     5,     5,   429,   492,   539,     3,   495,     5,
     897,   498,     5,     5,    55,   902,     5,     7,     3,     3,
       5,     5,     5,    16,   198,     5,    67,     3,    68,     5,
      70,    70,    68,    61,    70,    71,    16,     5,   581,  1378,
      80,    80,   442,    82,     5,  1384,     5,   319,     5,   321,
       5,  1390,    80,     5,    50,   100,   101,   102,     5,  1398,
      53,     5,   487,     5,    16,  1404,  1405,     7,   468,    16,
       5,   222,    16,     5,    16,     5,     5,   525,    11,     7,
       7,    16,     0,   223,     7,     7,   223,    55,   219,   774,
     230,   776,   100,   230,   225,    50,    55,    11,    11,   228,
      55,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,     5,     6,    55,   228,     9,    11,     5,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   122,   223,     5,   223,
      83,    54,    11,     5,   230,   222,   230,   700,   701,   702,
     703,   228,    68,   289,     5,   437,   591,    70,   327,    83,
      83,   364,    70,  1060,    80,    16,   223,    80,    81,    55,
     628,     7,    80,   230,   228,    88,   228,    90,   229,   229,
     229,    68,   617,   229,   228,    72,   222,   228,    55,    51,
      83,   229,   228,    80,   198,   181,   223,   527,    49,   634,
     212,   222,  1099,   230,   228,   113,   114,   115,   116,   117,
     118,   229,   229,     8,    83,   228,   651,   272,   222,   231,
     222,   631,   228,   228,   777,   231,   229,   272,   228,   228,
     700,   701,   702,   703,   228,   228,   231,   231,   228,   229,
     793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
     803,   804,   805,   806,   807,   808,   225,   228,   811,   228,
     225,   228,   223,   432,   467,   320,   228,   229,   228,   230,
     160,   228,   229,     7,   228,   229,   228,   229,   228,   222,
     416,   336,   337,   228,   229,   225,   228,     7,  1637,   228,
     228,   228,     7,   348,  1643,   228,   228,    70,   222,   222,
     355,   356,   357,  1200,     5,   360,   361,   777,   363,   364,
     225,   366,   227,   229,   228,   207,   229,     7,   210,   364,
      93,   229,     7,   793,   794,   795,   796,   797,   798,   799,
     800,   801,   802,   803,   804,   805,   806,   807,   808,   225,
       7,   811,   229,   512,     7,   514,   515,   516,   630,     5,
     223,     7,  1701,   222,   907,  1704,   223,   230,   225,   223,
     563,    82,  1711,   222,    80,     7,   230,    23,   942,   228,
      91,    92,    93,    55,    56,    57,    58,    59,    60,    61,
      62,    63,     7,  1732,    66,   440,   441,     7,    70,    90,
     222,   826,   222,    64,    65,   866,   112,   198,   228,   100,
     536,    83,     7,   119,   199,   200,   201,   202,   203,   464,
     205,   206,   207,   208,   228,   229,   211,   212,   213,   214,
     215,   222,   857,     7,   219,    80,    72,   228,    99,   223,
     225,     7,   867,   976,     7,   870,   230,   907,    67,   110,
      69,    70,   877,   878,   879,   880,    70,    70,    72,   884,
       7,    80,     7,   223,     7,   228,   229,    80,   223,    83,
     230,  1358,    72,  1360,   119,   230,   222,    96,    97,    98,
     222,    95,    95,   119,   228,   229,    99,   532,   533,   222,
     649,   110,   537,   538,   539,   540,   110,   532,   533,     7,
     223,   546,   222,   548,   539,   141,   142,   230,   553,   554,
     636,   637,   112,  1056,   159,   222,   161,   163,   229,   119,
     120,  1026,  1065,   229,   222,    73,    74,    75,    76,    77,
      78,     7,   577,   222,    67,   222,    69,    70,   183,   228,
     222,   141,     5,     6,   144,   145,   228,   230,   231,   195,
     196,   197,   222,   873,   874,   875,   876,   229,   194,   984,
       7,     5,     6,   222,   989,     9,  1071,   887,   229,   229,
     230,   104,   105,   106,   107,   108,   109,   110,   229,   230,
     194,   626,   229,   230,   229,   222,  1073,   222,  1569,  1570,
    1095,   229,   230,   229,   194,    67,  1056,    69,    70,   222,
      80,   222,    82,   222,   222,  1065,   213,   214,   215,    89,
     229,  1036,   219,  1038,     6,   229,   229,   222,   225,  1124,
    1045,   229,   230,   943,   944,   213,   214,   215,   216,   229,
     222,   219,   104,   105,   106,   107,   108,   109,   110,     3,
       4,     5,   228,   229,   964,   228,   229,   222,    12,    13,
      14,    15,   222,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,  1363,  1364,
    1365,   229,  1002,   222,    80,   222,    82,    83,    84,    85,
      86,    87,   228,   229,   222,     7,   229,   229,   743,   858,
     859,   860,   861,   228,   229,   222,  1593,   222,     3,     4,
       5,   100,   101,   102,   103,  1176,   162,   163,   164,   165,
     222,   766,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,   222,    80,   229,
    1175,   222,   199,   200,   201,   202,   203,   229,   205,   206,
     207,   208,   222,    95,   211,   212,   213,   214,   215,   228,
     229,   930,   219,     8,  1307,   228,   229,     5,   225,   228,
     229,   113,   119,   228,   229,   122,     5,  1187,  1108,    67,
    1323,    69,     5,  1113,   228,   229,     5,   134,   135,  1342,
     230,   138,   139,  1690,   104,   105,   106,   107,   108,   109,
     110,   211,   212,   213,   214,   215,   216,  1217,     7,   219,
     228,   229,  1222,     5,  1224,   157,   104,   105,   106,   107,
     108,   109,   110,   229,   229,   230,   222,  1262,   229,   230,
     229,   229,   230,  1268,   228,   229,   222,  1272,   212,   975,
    1275,   977,  1252,   217,   222,  1280,   220,  1257,   202,   203,
     230,   205,   206,   207,   208,   229,  1291,   211,   212,   213,
     214,   215,   229,   230,   223,   219,   230,  1003,  1198,   222,
    1305,   225,  1342,   229,   230,   198,  1206,   199,   200,   201,
     202,   203,   229,   205,   206,   207,   208,   229,   228,   211,
     212,   213,   214,   215,   228,  1330,  1331,   219,  1333,  1594,
     229,   230,   228,   225,   229,   230,     8,   212,   228,     7,
     119,   228,   217,   122,   228,   220,   229,  1460,   230,   229,
    1463,   976,   229,   230,   229,   134,   135,   136,   229,   230,
     228,   976,   211,   212,   213,   214,   229,   230,     5,  1269,
     995,   229,   997,   111,   999,     8,   114,   115,   116,   117,
     118,   230,   120,     5,   199,   200,   201,   202,   203,  1502,
     205,   206,   207,   208,  1019,  1508,   211,   212,   213,   214,
     215,     3,     4,     5,   219,   228,   229,   229,   230,   223,
     225,   229,   230,     3,  1314,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   229,   230,   229,   230,
     229,   229,   230,  1566,   198,   211,   212,   213,   214,   215,
     198,   198,  1467,   219,   229,   230,  1366,     5,  1473,   225,
       5,   205,   206,   207,   208,  1480,   228,   211,   212,   213,
     214,   215,   216,     5,   121,   219,   123,   124,   125,   126,
       5,   128,   129,   130,   131,   132,   133,   229,   230,   228,
     137,   228,   104,   140,   228,   229,   143,     5,  1621,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   229,
     230,   158,   229,   230,   542,   543,   163,     5,   228,   166,
     228,   199,   200,   201,   202,   203,  1577,   205,   206,   207,
     208,   228,   198,   211,   212,   213,   214,   215,   223,     5,
       5,   219,   228,     5,   228,   228,     5,   225,   228,     5,
    1673,     5,     5,   228,     5,  1632,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,  1201,     5,   211,   212,
     213,   214,   215,   216,   223,  1324,   219,  1326,  1327,     5,
     177,    67,   229,    69,   228,     7,  1601,   228,   228,   228,
     110,     7,   223,   205,   223,   228,     7,     7,   222,   211,
     212,   222,     7,     7,     7,   217,     7,   198,   220,     7,
       5,   223,   224,   225,   226,     7,   228,   228,   104,   105,
     106,   107,   108,   109,   110,   228,     7,   229,     7,     7,
       7,  1266,  1647,     7,     5,  1270,   230,     7,  1273,  1274,
       7,   228,     8,  1278,     5,   228,  1281,  1282,  1283,  1284,
       5,     5,  1287,  1288,   198,  1290,     7,  1292,  1753,     7,
    1295,     5,   225,     5,  1299,  1300,     7,  1302,     7,     7,
    1685,     7,  1307,  1308,     7,     7,     7,   229,   228,   230,
       7,     6,  1307,    52,     7,   228,   223,   222,  1323,     3,
       4,     5,   222,   222,   222,   222,     5,     3,  1323,   222,
       5,   223,   228,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     7,   228,   228,   228,   228,  1649,
       3,     4,     5,   229,   228,   230,   228,   228,   222,   228,
     230,  1661,     5,     5,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   222,
    1496,     3,   207,   219,  1500,     3,   228,   222,   222,   222,
     104,  1426,   222,   222,  1429,   199,   200,   201,   202,   203,
       7,   205,   206,   207,   208,   222,  1441,   211,   212,   213,
     214,   215,     7,   222,   222,   219,   228,     5,     5,  1729,
     222,   225,   222,   222,     5,  1460,  1461,  1576,  1463,     7,
       5,   222,   228,   222,   228,  1460,   222,   222,  1463,   199,
     200,   201,   202,   203,   228,   205,   206,   207,   208,  1565,
     222,   211,   212,   213,   214,   215,     5,   222,     5,   219,
    1495,     5,  1497,   222,   228,   225,   228,  1502,     3,   229,
       7,   223,   222,  1508,   223,     5,   223,  1502,   223,     5,
       5,     5,     5,  1508,  1519,  1520,  1521,  1522,  1523,   229,
       5,   205,     5,   228,  1610,     5,     5,   211,   212,     5,
       5,     5,     5,   217,     5,     3,   220,     7,     5,     5,
       5,   225,   226,     5,   228,     5,     7,     5,     5,     5,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
       5,  1566,   211,   212,   213,   214,   215,   216,     5,     5,
     219,  1566,     5,     5,     5,     5,     5,     5,     5,   212,
       5,   230,     5,  1588,   217,   222,   222,   220,   228,     5,
     229,   225,   230,  1598,  1599,   228,     7,  1602,     7,  1604,
       7,     7,   121,  1608,   123,   124,   125,   126,     7,   128,
     129,   130,   131,   132,   133,     7,  1621,  1622,   137,     7,
       7,   140,     3,     7,   143,     7,  1621,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,     7,     7,   158,
       7,  1646,     7,     7,   163,   230,   228,   166,   223,   222,
       7,   199,   200,   201,   202,   203,     7,   205,   206,   207,
     208,  1666,     7,   211,   212,   213,   214,   215,  1673,     7,
    1675,   219,   228,     5,     7,     5,     7,   225,  1673,     7,
       7,     7,     7,     7,     7,     7,     7,  1692,     7,     7,
       7,     7,   199,   200,   201,   202,   203,     7,   205,   206,
     207,   208,     7,     7,   211,   212,   213,   214,   215,     7,
     229,  1716,   219,     5,  1719,     5,   222,     5,   225,   168,
     169,   170,   171,   172,   173,   174,   175,   176,     3,     4,
       5,     6,  1737,   222,  1739,     7,     7,    12,    13,    14,
      15,  1746,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     7,     7,     7,
       7,     7,     7,     3,     4,     5,     7,     5,   230,   223,
      55,   223,    12,    13,    14,    15,   229,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,     3,     4,     5,     6,   230,   230,   223,   223,
     230,    12,    13,    14,    15,   223,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     3,     4,     5,   230,   230,   230,   230,   230,   230,
      12,    13,    14,    15,   230,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     229,     7,   229,   121,   230,   123,   124,   125,   126,   228,
     128,   129,   130,   131,   132,   133,     7,     7,     7,   137,
     230,   223,   140,   228,    95,   143,   230,   228,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   228,   230,
     158,   230,     7,   230,   230,   163,   223,   212,   166,     7,
       7,     7,   217,     7,     7,   220,     7,     7,   178,     7,
     225,   181,     5,   228,     5,     5,     5,     5,   228,   199,
     200,   201,   202,   203,   228,   205,   206,   207,   208,   228,
     228,   211,   212,   213,   214,   215,   228,   228,   228,   219,
       7,     7,   212,     7,     5,   225,     5,   217,     5,     7,
     220,     3,     5,   222,   228,   228,   223,   229,   228,   223,
       5,   229,   199,   200,   201,   202,   203,   223,   205,   206,
     207,   208,     5,     5,   211,   212,   213,   214,   215,     5,
       7,   212,   219,     5,     5,   223,   217,   230,   225,   220,
     230,   230,     7,   230,   223,   230,     7,   228,     7,     7,
       7,   223,   230,   230,     5,   201,   202,   203,   223,   205,
     206,   207,   208,   223,   230,   211,   212,   213,   214,   215,
     212,   228,   228,   219,   223,   217,   230,   230,   220,   225,
     121,   229,   123,   124,   125,   126,   228,   128,   129,   130,
     131,   132,   133,   223,   223,   223,   137,   229,     5,   140,
       5,     7,   143,   229,     7,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     7,     7,   158,     7,     7,
       7,     5,   163,     5,     7,   166,   121,     7,   123,   124,
     125,   126,     7,   128,   129,   130,   131,   132,   133,     7,
       7,     7,   137,   229,     5,   140,   229,   228,   143,   225,
       7,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,     7,     7,   158,     7,     5,   228,    94,   163,     7,
     121,   166,   123,   124,   125,   126,   223,   128,   129,   130,
     131,   132,   133,   127,   230,   230,   137,   223,   229,   140,
     223,     5,   143,   230,   223,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   230,   230,   158,   230,   230,
     228,     7,   163,     5,   121,   166,   123,   124,   125,   126,
       7,   128,   129,   130,   131,   132,   133,     7,   228,     7,
     137,   228,     7,   140,   229,     5,   143,     5,     7,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,     7,
       5,   158,     5,   222,   228,   230,   163,   223,     5,   166,
     121,   223,   123,   124,   125,   126,     5,   128,   129,   130,
     131,   132,   133,   223,     5,   230,   137,     7,   229,   140,
       7,     5,   143,   229,     7,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   229,     7,   158,     7,     7,
       7,     7,   163,   228,   228,   166,     7,   121,     7,   123,
     124,   125,   126,     7,   128,   129,   130,   131,   132,   133,
       7,     7,   229,   137,   228,     5,   140,   228,   230,   143,
     229,     7,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   223,    48,   158,     7,     7,     7,     7,   163,
     228,   121,   166,   123,   124,   125,   126,   111,   128,   129,
     130,   131,   132,   133,     7,     5,     7,   137,   229,     5,
     140,   229,     0,   143,     0,   933,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   710,  1049,   158,   934,
       7,   821,   568,   163,  1319,  1506,   166,   121,  1165,   123,
     124,   125,   126,   504,   128,   129,   130,   131,   132,   133,
     609,     7,   509,   137,   139,   229,   140,   236,    -1,   143,
      -1,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,     7,    -1,   158,    -1,    -1,    -1,    -1,   163,
      -1,   121,   166,   123,   124,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,    -1,    -1,    -1,   137,    -1,   229,
     140,     7,    -1,   143,    -1,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,   158,    -1,
      -1,    -1,     7,   163,    -1,   121,   166,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,    -1,    -1,
      -1,   137,    -1,     7,   140,   229,    -1,   143,    -1,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,   158,    -1,     7,    -1,    -1,   163,    -1,    -1,
     166,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     7,    -1,    -1,    -1,    -1,
      -1,    -1,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,    -1,   229,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   219,   199,   200,   201,   202,   203,   225,   205,
     206,   207,   208,     7,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,   219,   199,   200,   201,   202,   203,   225,
     205,   206,   207,   208,     7,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,     7,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,   219,   199,   200,   201,   202,   203,   225,
     205,   206,   207,   208,     7,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,   219,   199,   200,   201,   202,   203,
     225,   205,   206,   207,   208,    -1,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,   199,   200,   201,   202,
     203,   225,   205,   206,   207,   208,    -1,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,   212,    -1,    -1,    -1,    -1,
     217,    -1,    -1,   220,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,   200,   201,
     202,   203,    -1,   205,   206,   207,   208,    -1,    -1,   211,
     212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,    -1,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,   199,   200,   201,   202,
     203,   225,   205,   206,   207,   208,    -1,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,    -1,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,   199,   200,   201,   202,
     203,   225,   205,   206,   207,   208,    -1,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,     3,     4,     5,
      -1,    -1,   225,    -1,    -1,    -1,    12,    13,    14,    15,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,    55,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     3,     4,     5,    -1,    -1,     3,    -1,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,   212,    -1,    -1,    54,
      -1,   217,    -1,    -1,   220,    61,    -1,    -1,    -1,    -1,
      -1,     5,    67,    -1,    69,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    79,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    94,
     217,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,   111,    -1,    -1,   115,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,   212,    69,    -1,    -1,    -1,   217,
      -1,    -1,   220,    -1,    -1,    79,    -1,    -1,    -1,    83,
     146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,   156,    -1,   158,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   167,    -1,   212,    -1,    -1,    -1,   111,   217,    -1,
      -1,   220,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,    -1,   205,
     206,   207,   208,    -1,    -1,   211,   212,   213,   214,   215,
      -1,    -1,   212,   219,    -1,    -1,    -1,   217,    -1,   225,
     220,    -1,   156,    -1,   158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,    -1,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,   225,
      -1,   195,   196,   197,   199,   200,   201,   202,   203,    -1,
     205,   206,   207,   208,    -1,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,   219,   199,   200,   201,   202,   203,
     225,   205,   206,   207,   208,   230,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,   199,   200,   201,   202,
     203,   225,   205,   206,   207,   208,   230,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,   199,   200,   201,
     202,   203,   225,   205,   206,   207,   208,   230,    -1,   211,
     212,   213,   214,   215,    -1,    -1,    -1,   219,   199,   200,
     201,   202,   203,   225,   205,   206,   207,   208,   230,    -1,
     211,   212,   213,   214,   215,    -1,    -1,    -1,   219,   199,
     200,   201,   202,   203,   225,   205,   206,   207,   208,   230,
      -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,   219,
     199,   200,   201,   202,   203,   225,   205,   206,   207,   208,
     230,    -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,
     219,   199,   200,   201,   202,   203,   225,   205,   206,   207,
     208,   230,    -1,   211,   212,   213,   214,   215,    -1,    -1,
      -1,   219,   199,   200,   201,   202,   203,   225,   205,   206,
     207,   208,   230,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   219,   199,   200,   201,   202,   203,   225,   205,
     206,   207,   208,   230,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,   219,   199,   200,   201,   202,   203,   225,
     205,   206,   207,   208,   230,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,   219,   199,   200,   201,   202,   203,
     225,   205,   206,   207,   208,   230,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,   199,   200,   201,   202,
     203,   225,   205,   206,   207,   208,   230,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,   199,   200,   201,
     202,   203,   225,   205,   206,   207,   208,   230,    -1,   211,
     212,   213,   214,   215,    -1,    -1,    -1,   219,   199,   200,
     201,   202,   203,   225,   205,   206,   207,   208,   230,    -1,
     211,   212,   213,   214,   215,    -1,    -1,    -1,   219,   199,
     200,   201,   202,   203,   225,   205,   206,   207,   208,   230,
      -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,   219,
     199,   200,   201,   202,   203,   225,   205,   206,   207,   208,
     230,    -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,
     219,   199,   200,   201,   202,   203,   225,   205,   206,   207,
     208,   230,    -1,   211,   212,   213,   214,   215,    -1,    -1,
      -1,   219,   199,   200,   201,   202,   203,   225,   205,   206,
     207,   208,   230,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   219,   199,   200,   201,   202,   203,   225,   205,
     206,   207,   208,   230,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,   219,   199,   200,   201,   202,   203,   225,
     205,   206,   207,   208,   230,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,   219,   199,   200,   201,   202,   203,
     225,   205,   206,   207,   208,   230,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,   199,   200,   201,   202,
     203,   225,   205,   206,   207,   208,   230,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,   199,   200,   201,
     202,   203,   225,   205,   206,   207,   208,   230,    -1,   211,
     212,   213,   214,   215,    -1,    -1,    -1,   219,   199,   200,
     201,   202,   203,   225,   205,   206,   207,   208,   230,    -1,
     211,   212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,    -1,
      -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,   229,
     199,   200,   201,   202,   203,    -1,   205,   206,   207,   208,
      -1,    -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
     229,   199,   200,   201,   202,   203,    -1,   205,   206,   207,
     208,    -1,    -1,   211,   212,   213,   214,   215,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,    -1,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,   225,    -1,
      -1,    -1,   229,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,    -1,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,   229,   199,   200,   201,   202,   203,    -1,
     205,   206,   207,   208,    -1,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,   229,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,    -1,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,
      -1,   225,    -1,    -1,    -1,   229,   199,   200,   201,   202,
     203,    -1,   205,   206,   207,   208,    -1,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,   225,    -1,    -1,    -1,   229,   199,   200,   201,
     202,   203,    -1,   205,   206,   207,   208,    -1,    -1,   211,
     212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,   225,    -1,    -1,    -1,   229,   199,   200,
     201,   202,   203,    -1,   205,   206,   207,   208,    -1,    -1,
     211,   212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,
     221,    -1,    -1,    -1,   225,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,    -1,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,   223,
      -1,   225,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,    -1,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   219,    -1,    -1,    -1,   223,    -1,   225,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,    -1,
      -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,   219,
      -1,    -1,    -1,   223,    -1,   225,   199,   200,   201,   202,
     203,    -1,   205,   206,   207,   208,    -1,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,
     223,    -1,   225,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,    -1,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,   219,    -1,    -1,    -1,   223,    -1,   225,
     199,   200,   201,   202,   203,    -1,   205,   206,   207,   208,
      -1,    -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,
     219,    -1,    -1,    -1,   223,    -1,   225,   199,   200,   201,
     202,   203,    -1,   205,   206,   207,   208,    -1,    -1,   211,
     212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,
      -1,   223,    -1,   225,   199,   200,   201,   202,   203,    -1,
     205,   206,   207,   208,    -1,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,   219,    -1,    -1,    -1,   223,    -1,
     225,   199,   200,   201,   202,   203,    -1,   205,   206,   207,
     208,    -1,    -1,   211,   212,   213,   214,   215,    -1,    -1,
      -1,   219,    -1,    -1,    -1,   223,    -1,   225,   199,   200,
     201,   202,   203,    -1,   205,   206,   207,   208,    -1,    -1,
     211,   212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,
      -1,    -1,   223,    -1,   225,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,    -1,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,   223,
      -1,   225,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,    -1,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   219,    -1,    -1,    -1,   223,    -1,   225,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,    -1,
      -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,   219,
      -1,    -1,    -1,   223,    -1,   225,   199,   200,   201,   202,
     203,    -1,   205,   206,   207,   208,    -1,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,
     223,    -1,   225,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,    -1,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,   219,    -1,    -1,    -1,   223,    -1,   225,
     199,   200,   201,   202,   203,    -1,   205,   206,   207,   208,
      -1,    -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,
     219,    -1,    -1,    -1,   223,    -1,   225,   199,   200,   201,
     202,   203,    -1,   205,   206,   207,   208,    -1,    -1,   211,
     212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,
      -1,   223,    -1,   225,   199,   200,   201,   202,   203,    -1,
     205,   206,   207,   208,    -1,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,   219,    -1,    -1,    -1,   223,    -1,
     225,   199,   200,   201,   202,   203,    -1,   205,   206,   207,
     208,    -1,    -1,   211,   212,   213,   214,   215,    -1,    -1,
      -1,   219,    -1,    -1,    -1,   223,    -1,   225,   199,   200,
     201,   202,   203,    -1,   205,   206,   207,   208,    -1,    -1,
     211,   212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,
      -1,    -1,   223,    -1,   225,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,    -1,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,   223,
      -1,   225,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,    -1,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   219,    -1,    -1,    -1,   223,    -1,   225,   199,
     200,   201,   202,   203,    -1,   205,   206,   207,   208,    -1,
      -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,   219,
      -1,    -1,    -1,   223,    -1,   225,   199,   200,   201,   202,
     203,    -1,   205,   206,   207,   208,    -1,    -1,   211,   212,
     213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,
     223,    -1,   225,   199,   200,   201,   202,   203,    -1,   205,
     206,   207,   208,    -1,    -1,   211,   212,   213,   214,   215,
      -1,    -1,    -1,   219,    -1,    -1,    -1,   223,    -1,   225,
     199,   200,   201,   202,   203,    -1,   205,   206,   207,   208,
      -1,    -1,   211,   212,   213,   214,   215,    -1,    -1,    -1,
     219,    -1,    -1,    -1,   223,    -1,   225,   199,   200,   201,
     202,   203,    -1,   205,   206,   207,   208,    -1,    -1,   211,
     212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,    -1,
      -1,   223,    -1,   225,   199,   200,   201,   202,   203,    -1,
     205,   206,   207,   208,    -1,    -1,   211,   212,   213,   214,
     215,    -1,    -1,    -1,   219,    -1,    -1,    -1,   223,    -1,
     225,   199,   200,   201,   202,   203,    -1,   205,   206,   207,
     208,    -1,    -1,   211,   212,   213,   214,   215,    -1,    -1,
      -1,   219,    -1,    -1,    -1,   223,    -1,   225,   199,   200,
     201,   202,   203,    -1,   205,   206,   207,   208,    -1,    -1,
     211,   212,   213,   214,   215,    -1,    -1,    -1,   219,    -1,
      -1,    -1,   223,    -1,   225,   199,   200,   201,   202,   203,
      -1,   205,   206,   207,   208,    -1,    -1,   211,   212,   213,
     214,   215,    -1,    -1,    -1,   219,    -1,    -1,    -1,   223,
      -1,   225,   199,   200,   201,   202,   203,    -1,   205,   206,
     207,   208,    -1,    -1,   211,   212,   213,   214,   215,    -1,
      -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,   225,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,    -1,
      -1,   211,   212,   213,   214,   215,   216,    -1,    -1,   219,
      -1,    -1,    -1,   223,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,    -1,    -1,   211,   212,   213,   214,
     215,   216,    -1,    -1,   219,    -1,   221,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,    -1,    -1,   211,
     212,   213,   214,   215,   216,    -1,    -1,   219,   201,   202,
     203,   204,   205,   206,   207,   208,    -1,    -1,   211,   212,
     213,   214,   215,   216,    -1,    -1,   219,   202,   203,   204,
     205,   206,   207,   208,    -1,    -1,   211,   212,   213,   214,
     215,   216,    -1,    -1,   219
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/share/bison/bison.simple"

/* Skeleton output parser for bison,

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software
   Foundation, Inc.

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

/* This is the parser code that is written into each bison parser when
   the %semantic_parser declaration is not specified in the grammar.
   It was written by Richard Stallman by simplifying the hairy parser
   used when %semantic_parser is specified.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

#if ! defined (yyoverflow) || defined (YYERROR_VERBOSE)

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || defined (YYERROR_VERBOSE) */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
# if YYLSP_NEEDED
  YYLTYPE yyls;
# endif
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAX (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# if YYLSP_NEEDED
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAX)
# else
#  define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAX)
# endif

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAX;	\
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif


#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");			\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).

   When YYLLOC_DEFAULT is run, CURRENT is set the location of the
   first token.  By default, to implement support for ranges, extend
   its range to the last symbol.  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)       	\
   Current.last_line   = Rhs[N].last_line;	\
   Current.last_column = Rhs[N].last_column;
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#if YYPURE
# if YYLSP_NEEDED
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, &yylloc, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval, &yylloc)
#  endif
# else /* !YYLSP_NEEDED */
#  ifdef YYLEX_PARAM
#   define YYLEX		yylex (&yylval, YYLEX_PARAM)
#  else
#   define YYLEX		yylex (&yylval)
#  endif
# endif /* !YYLSP_NEEDED */
#else /* !YYPURE */
# define YYLEX			yylex ()
#endif /* !YYPURE */


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)
/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

#ifdef YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif
#endif

#line 315 "/usr/share/bison/bison.simple"


/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
#  define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL
# else
#  define YYPARSE_PARAM_ARG YYPARSE_PARAM
#  define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
# endif
#else /* !YYPARSE_PARAM */
# define YYPARSE_PARAM_ARG
# define YYPARSE_PARAM_DECL
#endif /* !YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
# ifdef YYPARSE_PARAM
int yyparse (void *);
# else
int yyparse (void);
# endif
#endif

/* YY_DECL_VARIABLES -- depending whether we use a pure parser,
   variables are global, or local to YYPARSE.  */

#define YY_DECL_NON_LSP_VARIABLES			\
/* The lookahead symbol.  */				\
int yychar;						\
							\
/* The semantic value of the lookahead symbol. */	\
YYSTYPE yylval;						\
							\
/* Number of parse errors so far.  */			\
int yynerrs;

#if YYLSP_NEEDED
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES			\
						\
/* Location data for the lookahead symbol.  */	\
YYLTYPE yylloc;
#else
# define YY_DECL_VARIABLES			\
YY_DECL_NON_LSP_VARIABLES
#endif


/* If nonreentrant, generate the variables here. */

#if !YYPURE
YY_DECL_VARIABLES
#endif  /* !YYPURE */

int
yyparse (YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  /* If reentrant, generate the variables here. */
#if YYPURE
  YY_DECL_VARIABLES
#endif  /* !YYPURE */

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yychar1 = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack. */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

#if YYLSP_NEEDED
  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
#endif

#if YYLSP_NEEDED
# define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
# define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  YYSIZE_T yystacksize = YYINITDEPTH;


  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
#if YYLSP_NEEDED
  YYLTYPE yyloc;
#endif

  /* When reducing, the number of symbols on the RHS of the reduced
     rule. */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
#if YYLSP_NEEDED
  yylsp = yyls;
#endif
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  */
# if YYLSP_NEEDED
	YYLTYPE *yyls1 = yyls;
	/* This used to be a conditional around just the two extra args,
	   but that might be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
# else
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);
# endif
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
# if YYLSP_NEEDED
	YYSTACK_RELOCATE (yyls);
# endif
# undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
#if YYLSP_NEEDED
      yylsp = yyls + yysize - 1;
#endif

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
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
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yychar1 = YYTRANSLATE (yychar);

#if YYDEBUG
     /* We have to keep this `#if YYDEBUG', since we use variables
	which are defined only if `YYDEBUG' is set.  */
      if (yydebug)
	{
	  YYFPRINTF (stderr, "Next token is %d (%s",
		     yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise
	     meaning of a token, for further debugging info.  */
# ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
# endif
	  YYFPRINTF (stderr, ")\n");
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
  YYDPRINTF ((stderr, "Shifting token %d (%s), ",
	      yychar, yytname[yychar1]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to the semantic value of
     the lookahead token.  This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

#if YYLSP_NEEDED
  /* Similarly for the default location.  Let the user run additional
     commands if for instance locations are ranges.  */
  yyloc = yylsp[1-yylen];
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
#endif

#if YYDEBUG
  /* We have to keep this `#if YYDEBUG', since we use variables which
     are defined only if `YYDEBUG' is set.  */
  if (yydebug)
    {
      int yyi;

      YYFPRINTF (stderr, "Reducing via rule %d (line %d), ",
		 yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (yyi = yyprhs[yyn]; yyrhs[yyi] > 0; yyi++)
	YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
      YYFPRINTF (stderr, " -> %s\n", yytname[yyr1[yyn]]);
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
      PostSubOperation_S.DecomposeInSimplex = 0 ;
      PostSubOperation_S.ChangeOfCoordinates[0] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[1] = -1 ;
      PostSubOperation_S.ChangeOfCoordinates[2] = -1 ;
      PostSubOperation_S.ChangeOfValues = NULL ;
    ;
    break;}
case 551:
#line 5734 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 552:
#line 5741 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 553:
#line 5748 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 554:
#line 5755 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 555:
#line 5759 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 556:
#line 5763 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 557:
#line 5767 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 558:
#line 5771 "GetDP.y"
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
#line 5781 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 560:
#line 5786 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 561:
#line 5791 "GetDP.y"
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
#line 5811 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 563:
#line 5818 "GetDP.y"
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
#line 5827 "GetDP.y"
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
#line 5836 "GetDP.y"
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
#line 5845 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 567:
#line 5852 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 568:
#line 5860 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 569:
#line 5864 "GetDP.y"
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
#line 5873 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 571:
#line 5877 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 572:
#line 5881 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 573:
#line 5889 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 574:
#line 5895 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 575:
#line 5904 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 576:
#line 5910 "GetDP.y"
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
case 577:
#line 5958 "GetDP.y"
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
case 578:
#line 5973 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 581:
#line 5986 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 582:
#line 5992 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 583:
#line 5998 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 584:
#line 6009 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 585:
#line 6010 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 586:
#line 6011 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 587:
#line 6012 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 588:
#line 6013 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 589:
#line 6014 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 590:
#line 6015 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 591:
#line 6016 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 592:
#line 6017 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 593:
#line 6018 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 594:
#line 6019 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 595:
#line 6020 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 596:
#line 6021 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 597:
#line 6022 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 598:
#line 6023 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 599:
#line 6024 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 600:
#line 6025 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 601:
#line 6026 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 602:
#line 6027 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 603:
#line 6028 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 604:
#line 6029 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 605:
#line 6033 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 606:
#line 6034 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 607:
#line 6035 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 608:
#line 6036 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 609:
#line 6037 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 610:
#line 6038 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 611:
#line 6039 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 612:
#line 6040 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 613:
#line 6041 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 614:
#line 6042 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 615:
#line 6043 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 616:
#line 6044 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 617:
#line 6045 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 618:
#line 6046 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 619:
#line 6047 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 620:
#line 6048 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 621:
#line 6049 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 622:
#line 6050 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 623:
#line 6051 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 624:
#line 6052 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 625:
#line 6053 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 626:
#line 6054 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 627:
#line 6055 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 628:
#line 6056 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 629:
#line 6057 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 630:
#line 6058 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 631:
#line 6059 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 632:
#line 6060 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 633:
#line 6061 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 634:
#line 6062 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 635:
#line 6063 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 636:
#line 6064 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 637:
#line 6065 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 638:
#line 6066 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 639:
#line 6067 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 640:
#line 6068 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 641:
#line 6069 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 642:
#line 6070 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 643:
#line 6071 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 644:
#line 6072 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 645:
#line 6077 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 646:
#line 6078 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 647:
#line 6079 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 648:
#line 6080 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 649:
#line 6081 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 650:
#line 6082 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 651:
#line 6083 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 652:
#line 6085 "GetDP.y"
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
case 653:
#line 6103 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 654:
#line 6106 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 655:
#line 6112 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 656:
#line 6115 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 657:
#line 6122 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 658:
#line 6128 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 659:
#line 6131 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 660:
#line 6134 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 661:
#line 6146 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 662:
#line 6152 "GetDP.y"
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
case 663:
#line 6163 "GetDP.y"
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
case 664:
#line 6179 "GetDP.y"
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
case 665:
#line 6201 "GetDP.y"
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
case 666:
#line 6216 "GetDP.y"
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
case 667:
#line 6254 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 668:
#line 6262 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 669:
#line 6274 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 670:
#line 6277 "GetDP.y"
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
case 671:
#line 6292 "GetDP.y"
{
      yyval.c = (char *)Malloc((strlen(yyvsp[-3].c)+strlen(yyvsp[-1].c)+1)*sizeof(char)) ;
      strcpy(yyval.c, yyvsp[-3].c) ;  strcat(yyval.c, yyvsp[-1].c) ;
    ;
    break;}
}

#line 705 "/usr/share/bison/bison.simple"


  yyvsp -= yylen;
  yyssp -= yylen;
#if YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;
#if YYLSP_NEEDED
  *++yylsp = yyloc;
#endif

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("parse error, unexpected ") + 1;
	  yysize += yystrlen (yytname[YYTRANSLATE (yychar)]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "parse error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[YYTRANSLATE (yychar)]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exhausted");
	}
      else
#endif /* defined (YYERROR_VERBOSE) */
	yyerror ("parse error");
    }
  goto yyerrlab1;


/*--------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action |
`--------------------------------------------------*/
yyerrlab1:
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;
      YYDPRINTF ((stderr, "Discarding token %d (%s).\n",
		  yychar, yytname[yychar1]));
      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;


/*-------------------------------------------------------------------.
| yyerrdefault -- current state does not do anything special for the |
| error token.                                                       |
`-------------------------------------------------------------------*/
yyerrdefault:
#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */

  /* If its default is to accept any token, ok.  Otherwise pop it.  */
  yyn = yydefact[yystate];
  if (yyn)
    goto yydefault;
#endif


/*---------------------------------------------------------------.
| yyerrpop -- pop the current state because it cannot handle the |
| error token                                                    |
`---------------------------------------------------------------*/
yyerrpop:
  if (yyssp == yyss)
    YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#if YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG
  if (yydebug)
    {
      short *yyssp1 = yyss - 1;
      YYFPRINTF (stderr, "Error: state stack now");
      while (yyssp1 != yyssp)
	YYFPRINTF (stderr, " %d", *++yyssp1);
      YYFPRINTF (stderr, "\n");
    }
#endif

/*--------------.
| yyerrhandle.  |
`--------------*/
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

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
#if YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

/*---------------------------------------------.
| yyoverflowab -- parser overflow comes here.  |
`---------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}
#line 6306 "GetDP.y"



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


