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
# define	tDtNL	364
# define	tIn	365
# define	tResolution	366
# define	tDefineSystem	367
# define	tNameOfFormulation	368
# define	tNameOfMesh	369
# define	tFrequency	370
# define	tSolver	371
# define	tOriginSystem	372
# define	tDestinationSystem	373
# define	tOperation	374
# define	tOperationEnd	375
# define	tSetTime	376
# define	tDTime	377
# define	tSetFrequency	378
# define	tFourierTransform	379
# define	tFourierTransformJ	380
# define	tIf	381
# define	tElse	382
# define	tLanczos	383
# define	tPerturbation	384
# define	tUpdate	385
# define	tUpdateConstraint	386
# define	tBreak	387
# define	tTimeLoopTheta	388
# define	tTime0	389
# define	tTimeMax	390
# define	tTheta	391
# define	tTimeLoopNewmark	392
# define	tBeta	393
# define	tGamma	394
# define	tIterativeLoop	395
# define	tNbrMaxIteration	396
# define	tRelaxationFactor	397
# define	tIterativeTimeReduction	398
# define	tDivisionCoefficient	399
# define	tChangeOfState	400
# define	tChangeOfCoordinates	401
# define	tSystemCommand	402
# define	tSolveJac_AdaptRelax	403
# define	tSaveSolutionExtendedMH	404
# define	tInit_MovingBand2D	405
# define	tMesh_MovingBand2D	406
# define	tGenerate_MH_Moving	407
# define	tGenerateGroup	408
# define	tGenerateJacGroup	409
# define	tSaveMesh	410
# define	tPostProcessing	411
# define	tNameOfSystem	412
# define	tPostOperation	413
# define	tNameOfPostProcessing	414
# define	tUsingPost	415
# define	tAppend	416
# define	tPlot	417
# define	tPrint	418
# define	tPrintGroup	419
# define	tEcho	420
# define	tWrite	421
# define	tAdapt	422
# define	tOnGlobal	423
# define	tOnRegion	424
# define	tOnElementsOf	425
# define	tOnGrid	426
# define	tOnSection	427
# define	tOnPoint	428
# define	tOnLine	429
# define	tOnPlane	430
# define	tOnBox	431
# define	tWithArgument	432
# define	tFile	433
# define	tDepth	434
# define	tDimension	435
# define	tTimeStep	436
# define	tHarmonicToTime	437
# define	tFormat	438
# define	tHeader	439
# define	tFooter	440
# define	tSkin	441
# define	tSmoothing	442
# define	tTarget	443
# define	tSort	444
# define	tIso	445
# define	tNoNewLine	446
# define	tDecomposeInSimplex	447
# define	tChangeOfValues	448
# define	tFlag	449
# define	tHelp	450
# define	tCpu	451
# define	tCheck	452
# define	tDEF	453
# define	tOR	454
# define	tAND	455
# define	tEQUAL	456
# define	tNOTEQUAL	457
# define	tAPPROXEQUAL	458
# define	tLESSOREQUAL	459
# define	tGREATEROREQUAL	460
# define	tLESSLESS	461
# define	tGREATERGREATER	462
# define	tCROSSPRODUCT	463
# define	UNARYPREC	464
# define	tSHOW	465

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.47 2003-02-06 18:23:22 geuzaine Exp $ */

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


#line 177 "GetDP.y"
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



#define	YYFINAL		1760
#define	YYFLAG		-32768
#define	YYNTBASE	233

/* YYTRANSLATE(YYLEX) -- Bison token number corresponding to YYLEX. */
#define YYTRANSLATE(x) ((unsigned)(x) <= 465 ? yytranslate[x] : 421)

/* YYTRANSLATE[YYLEX] -- Bison token number corresponding to YYLEX. */
static const short yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   218,     2,   226,   227,   216,     2,     2,
     221,   222,   214,   212,   231,   213,   225,   215,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     206,     2,   208,   200,   232,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   223,     2,   224,   220,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   229,     2,   230,     2,     2,     2,     2,
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
     196,   197,   198,   199,   201,   202,   203,   204,   205,   207,
     209,   210,   211,   217,   219,   228
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
    1261,  1262,  1264,  1266,  1268,  1270,  1272,  1274,  1276,  1281,
    1285,  1286,  1289,  1293,  1295,  1296,  1299,  1303,  1308,  1313,
    1314,  1320,  1321,  1326,  1327,  1330,  1334,  1338,  1342,  1346,
    1350,  1354,  1358,  1362,  1365,  1369,  1370,  1374,  1376,  1380,
    1381,  1385,  1386,  1389,  1393,  1397,  1402,  1407,  1412,  1417,
    1423,  1429,  1432,  1440,  1452,  1460,  1468,  1478,  1488,  1498,
    1510,  1528,  1542,  1558,  1570,  1584,  1585,  1593,  1594,  1602,
    1610,  1616,  1622,  1632,  1642,  1648,  1654,  1668,  1678,  1693,
    1701,  1709,  1711,  1713,  1714,  1717,  1721,  1725,  1728,  1729,
    1732,  1736,  1740,  1744,  1748,  1753,  1754,  1757,  1761,  1765,
    1769,  1773,  1777,  1782,  1783,  1786,  1790,  1794,  1798,  1802,
    1807,  1808,  1811,  1815,  1819,  1823,  1827,  1831,  1836,  1841,
    1846,  1847,  1852,  1853,  1856,  1860,  1864,  1868,  1872,  1876,
    1880,  1881,  1884,  1888,  1890,  1891,  1894,  1898,  1903,  1908,
    1912,  1917,  1918,  1923,  1924,  1927,  1931,  1936,  1937,  1943,
    1949,  1950,  1953,  1954,  1961,  1965,  1966,  1971,  1975,  1979,
    1980,  1983,  1987,  1989,  1990,  1993,  1997,  2001,  2005,  2009,
    2014,  2015,  2024,  2025,  2026,  2030,  2038,  2046,  2055,  2056,
    2067,  2074,  2078,  2085,  2087,  2089,  2091,  2093,  2094,  2098,
    2100,  2103,  2106,  2119,  2122,  2138,  2143,  2156,  2174,  2197,
    2210,  2211,  2214,  2218,  2223,  2228,  2232,  2235,  2238,  2242,
    2246,  2250,  2254,  2258,  2262,  2266,  2270,  2274,  2278,  2282,
    2286,  2292,  2295,  2298,  2302,  2312,  2316,  2317,  2320,  2325,
    2330,  2336,  2337,  2341,  2347,  2353,  2355,  2357,  2359,  2361,
    2363,  2365,  2367,  2369,  2371,  2373,  2375,  2377,  2379,  2381,
    2383,  2385,  2387,  2389,  2391,  2393,  2395,  2397,  2401,  2404,
    2407,  2411,  2415,  2419,  2423,  2427,  2431,  2435,  2439,  2443,
    2447,  2451,  2455,  2459,  2463,  2468,  2473,  2478,  2483,  2488,
    2493,  2498,  2503,  2508,  2513,  2520,  2525,  2530,  2535,  2540,
    2545,  2550,  2557,  2564,  2571,  2577,  2580,  2582,  2584,  2586,
    2588,  2590,  2592,  2594,  2596,  2597,  2599,  2601,  2605,  2607,
    2609,  2613,  2617,  2621,  2627,  2631,  2636,  2641,  2648,  2657,
    2666,  2668,  2670
};
static const short yyrhs[] =
{
      -1,   234,   235,     0,     0,     0,   235,   236,   237,     0,
      48,   229,   240,   230,     0,    83,   229,   263,   230,     0,
      54,   229,   297,   230,     0,    67,   229,   282,   230,     0,
      69,   229,   288,   230,     0,    79,   229,   304,   230,     0,
      94,   229,   327,   230,     0,   112,   229,   353,   230,     0,
     157,   229,   383,   230,     0,   159,   229,   395,   230,     0,
     399,     0,   412,     0,    10,   420,     0,   238,     0,   196,
       7,     0,   196,   164,     7,     0,   196,   198,     7,     0,
     196,    23,     7,     0,   196,   197,     7,     0,   196,   196,
       7,     0,   196,     5,     7,     0,   197,     7,     0,   198,
       7,     0,   198,    48,     7,     0,   198,    83,     7,     0,
     198,    54,     7,     0,   198,    67,     7,     0,   198,    69,
       7,     0,   198,    79,     7,     0,   198,    94,     7,     0,
     198,   112,     7,     0,   198,   157,     7,     0,   198,   159,
       7,     0,   198,     3,     7,     0,     0,   239,   403,     0,
       0,     0,   240,   241,   242,     0,     5,   199,   247,     7,
       0,     5,   262,   199,   247,     7,     0,     0,     5,   260,
     199,   243,   247,     7,     0,    49,   223,   258,   224,     7,
       0,   244,     0,   412,     0,     0,     0,     5,   223,     3,
     224,   199,    52,   245,   223,   226,   255,   246,   231,   226,
     255,   231,   415,   224,     7,     0,     0,     0,   251,   223,
     248,   252,   249,   253,   224,     0,   226,   255,     0,   247,
       0,     5,   261,     0,    55,     0,     5,     0,   255,     0,
      50,     0,     0,   259,   254,   255,     0,   259,    51,     5,
     261,     0,     5,     0,   257,     0,   229,   256,   230,     0,
       0,   256,   259,   257,     0,   256,   259,   213,   257,     0,
       3,     0,   232,   418,   232,     0,     3,     8,   415,     0,
       3,     8,     3,     8,   415,     0,     5,     0,     5,   229,
     415,   230,     0,     5,   229,   230,     0,     0,   258,   259,
       5,     0,   258,   259,     5,   229,   415,   230,     0,     0,
     231,     0,   229,   226,   415,   230,     0,     0,   229,   230,
       0,   229,   415,   230,     0,     0,   263,   264,     0,    53,
     223,   265,   224,     7,     0,     5,   223,   224,   199,   266,
       7,     0,     5,   223,   250,   224,   199,   266,     7,     0,
     412,     0,     0,   265,   259,     5,     0,    11,   223,   415,
     224,     0,    83,   223,     5,   224,     0,     0,   267,   270,
       0,     0,   229,   269,   230,     0,   266,     0,   269,   231,
     266,     0,     0,   271,   272,     0,   275,     0,     0,     0,
     272,   200,   273,   272,     8,   274,   272,     0,   272,   214,
     272,     0,   272,   217,   272,     0,    45,   223,   272,   231,
     272,   224,     0,   272,   215,   272,     0,   272,   212,   272,
       0,   272,   213,   272,     0,   272,   216,   272,     0,   272,
     220,   272,     0,   272,   206,   272,     0,   272,   208,   272,
       0,   272,   207,   272,     0,   272,   209,   272,     0,   272,
     203,   272,     0,   272,   204,   272,     0,   272,   205,   272,
       0,   272,   202,   272,     0,   272,   201,   272,     0,   213,
     272,     0,   212,   272,     0,   218,   272,     0,   221,   272,
     222,     0,   416,     0,   414,   279,   281,     0,     5,   352,
       0,   352,     0,   352,   279,     0,     0,   104,   276,   223,
     270,   224,     0,     0,    46,   223,     5,   223,   277,   270,
     224,   224,   229,   415,   230,     0,    47,   223,     5,   224,
     229,   415,   231,   415,   230,     0,    42,   223,   352,   224,
       0,    44,   223,   352,   224,     0,     0,    43,   278,   223,
     270,   231,   250,   224,     0,   206,     5,   208,   223,   270,
     224,     0,   227,     5,     0,   227,   182,     0,   227,   123,
       0,   227,     3,     0,   275,   226,     3,     0,   226,     3,
       0,   275,   228,     3,     0,   223,   225,   224,     0,   223,
     224,     0,   223,   280,   224,     0,   272,     0,   280,   231,
     272,     0,     0,   229,   418,   230,     0,   229,    55,   223,
     250,   224,   230,     0,     0,   282,   229,   283,   230,     0,
       0,   283,   284,     0,    80,     5,     7,     0,    68,   229,
     285,   230,     0,     0,   285,   229,   286,   230,     0,     0,
     286,   287,     0,    55,   250,     7,     0,    55,    50,     7,
       0,    67,     5,   281,     7,     0,     0,   288,   229,   289,
     230,     0,     0,   289,   290,     0,    80,     5,     7,     0,
      72,   266,     7,     0,    68,   229,   291,   230,     0,     0,
     291,   229,   292,   230,     0,     0,   292,   293,     0,    70,
       5,     7,     0,    71,     5,     7,     0,    68,   229,   294,
     230,     0,     0,   294,   229,   295,   230,     0,     0,   295,
     296,     0,    73,     5,     7,     0,    74,   415,     7,     0,
      75,   415,     7,     0,    76,   415,     7,     0,    77,   415,
       7,     0,    78,   415,     7,     0,     0,   297,   298,     0,
     229,   299,   230,     0,   412,     0,     0,   299,   300,     0,
      80,     5,     7,     0,    80,     5,   260,     7,     0,    70,
       5,     7,     0,    68,   229,   301,   230,     0,    68,     5,
     229,   301,   230,     0,     0,   301,   229,   302,   230,     0,
       0,   302,   303,     0,    70,     5,     7,     0,    55,   250,
       7,     0,    56,   250,     7,     0,    62,   266,     7,     0,
      61,   266,     7,     0,    66,     5,     7,     0,    63,   229,
       3,   259,     3,   230,     7,     0,    57,   250,     7,     0,
      58,   250,     7,     0,    83,   266,     7,     0,    60,   266,
       7,     0,    59,   266,     7,     0,    83,   223,   266,   231,
     266,   224,     7,     0,    60,   223,   266,   231,   266,   224,
       7,     0,    59,   223,   266,   231,   266,   224,     7,     0,
       0,   304,   305,     0,   229,   306,   230,     0,   412,     0,
       0,   306,   307,     0,    80,     5,     7,     0,    80,     5,
     260,     7,     0,    70,     5,     7,     0,    81,   229,   308,
     230,     0,    88,   229,   314,   230,     0,    90,   229,   321,
     230,     0,    54,   229,   324,   230,     0,     0,   308,   229,
     309,   230,     0,     0,   309,   310,     0,    80,     5,     7,
       0,    82,     5,     7,     0,    82,     5,   260,     7,     0,
      83,     5,   311,     7,     0,    84,   229,     5,   259,     5,
     230,     7,     0,    85,   268,     7,     0,    86,   250,     7,
       0,    87,   250,     7,     0,     0,     0,     0,   229,    95,
       5,     7,    94,     5,   260,     7,   312,    48,   250,     7,
     313,   112,     5,   261,     7,   230,     0,     0,   314,   229,
     315,   230,     0,     0,   315,   316,     0,    80,     5,     7,
       0,    89,   317,     7,     0,    82,   319,     7,     0,     5,
       0,   229,   318,   230,     0,     0,   318,   259,     5,     0,
       5,     0,   229,   320,   230,     0,     0,   320,   259,     5,
       0,     0,   321,   229,   322,   230,     0,     0,   322,   323,
       0,    80,     5,     7,     0,    70,     5,     7,     0,    82,
       5,     7,     0,     0,   324,   229,   325,   230,     0,     0,
     325,   326,     0,    82,     5,     7,     0,    91,   251,     7,
       0,    92,   254,     7,     0,    93,     5,   261,     7,     0,
       0,   327,   328,     0,   229,   329,   230,     0,   412,     0,
       0,   329,   330,     0,    80,     5,     7,     0,    80,     5,
     260,     7,     0,    70,     5,     7,     0,    95,   229,   331,
     230,     0,    99,   229,   337,   230,     0,     0,   331,   229,
     332,   230,     0,     0,   332,   333,     0,    80,     5,     7,
       0,    70,    90,     7,     0,    70,   100,     7,     0,    70,
       5,     7,     0,     0,    96,     5,   261,   334,   336,     7,
       0,    97,     3,     7,     0,     0,   223,   335,   270,   224,
       7,     0,   111,   250,     7,     0,    69,     5,     7,     0,
      67,     5,     7,     0,    98,     3,     7,     0,     0,   223,
       5,   224,     0,     0,   337,   338,     0,   100,   229,   343,
     230,     0,   101,   229,   343,   230,     0,   102,   229,   347,
     230,     0,   103,   229,   339,   230,     0,     0,   339,   340,
       0,    70,     5,     7,     0,    93,     5,     7,     0,   229,
     341,   230,     0,     0,   341,   342,     0,    64,   352,     7,
       0,    65,   352,     7,     0,    99,   352,     7,     0,   111,
     250,     7,     0,     0,   343,   344,     0,     0,     0,   351,
     223,   345,   270,   346,   231,   270,   224,     7,     0,   111,
     250,     7,     0,    67,     5,     7,     0,    69,     5,     7,
       0,     0,   347,   348,     0,   111,   250,     7,     0,     0,
       0,   351,   223,   349,   270,   350,   231,   352,   224,     7,
       0,     0,   104,     0,   105,     0,   106,     0,   107,     0,
     108,     0,   109,     0,   110,     0,   229,     5,     5,   230,
       0,   229,     5,   230,     0,     0,   353,   354,     0,   229,
     355,   230,     0,   412,     0,     0,   355,   356,     0,    80,
       5,     7,     0,    80,     5,   260,     7,     0,   113,   229,
     358,   230,     0,     0,   120,   357,   229,   365,   230,     0,
       0,   358,   229,   359,   230,     0,     0,   359,   360,     0,
      80,     5,     7,     0,    70,     5,     7,     0,   114,   361,
       7,     0,   115,   420,     7,     0,   118,   363,     7,     0,
     119,     5,     7,     0,   116,   417,     7,     0,   117,   420,
       7,     0,     5,   261,     0,   229,   362,   230,     0,     0,
     362,   259,     5,     0,     5,     0,   229,   364,   230,     0,
       0,   364,   259,     5,     0,     0,   365,   366,     0,     5,
       5,     7,     0,   122,   266,     7,     0,   134,   229,   372,
     230,     0,   138,   229,   374,   230,     0,   141,   229,   376,
     230,     0,   144,   229,   378,   230,     0,     5,   223,     5,
     224,     7,     0,   122,   223,   266,   224,     7,     0,   133,
       7,     0,   127,   223,   266,   224,   229,   365,   230,     0,
     127,   223,   266,   224,   229,   365,   230,   128,   229,   365,
     230,     0,   124,   223,     5,   231,   266,   224,     7,     0,
     131,   223,     5,   231,   266,   224,     7,     0,   132,   223,
       5,   231,   250,   231,     5,   224,     7,     0,   125,   223,
       5,   231,     5,   231,   417,   224,     7,     0,   126,   223,
       5,   231,     5,   231,   415,   224,     7,     0,   129,   223,
       5,   231,   415,   231,   417,   231,   415,   224,     7,     0,
     130,   223,     5,   231,     5,   231,     5,   231,   415,   231,
     417,   231,   415,   231,   415,   224,     7,     0,   134,   223,
     415,   231,   415,   231,   266,   231,   266,   224,   229,   365,
     230,     0,   138,   223,   415,   231,   415,   231,   266,   231,
     415,   231,   415,   224,   229,   365,   230,     0,   141,   223,
     415,   231,   415,   231,   266,   224,   229,   365,   230,     0,
     141,   223,   415,   231,   415,   231,   266,   231,   415,   224,
     229,   365,   230,     0,     0,   164,   367,   223,   369,   370,
     224,     7,     0,     0,   167,   368,   223,   369,   370,   224,
       7,     0,   147,   223,   250,   231,   266,   224,     7,     0,
     159,   223,     5,   224,     7,     0,   148,   223,   420,   224,
       7,     0,   149,   223,     5,   231,   417,   231,   415,   224,
       7,     0,   150,   223,     5,   231,   415,   231,   420,   224,
       7,     0,   151,   229,     5,   230,     7,     0,   152,   229,
       5,   230,     7,     0,   156,   229,     5,   231,   250,   231,
     420,   231,   420,   231,   266,   230,     7,     0,   156,   229,
       5,   231,   250,   231,   420,   230,     7,     0,   153,   223,
       5,   231,     5,   231,   415,   231,   415,   224,   229,   365,
     230,     7,     0,   154,   223,     5,   231,     5,   224,     7,
       0,   155,   223,     5,   231,     5,   224,     7,     0,   268,
       0,     5,     0,     0,   370,   371,     0,   231,   179,   420,
       0,   231,   182,   417,     0,   231,   417,     0,     0,   372,
     373,     0,   135,   415,     7,     0,   136,   415,     7,     0,
     123,   266,     7,     0,   137,   266,     7,     0,   120,   229,
     365,   230,     0,     0,   374,   375,     0,   135,   415,     7,
       0,   136,   415,     7,     0,   123,   266,     7,     0,   139,
     415,     7,     0,   140,   415,     7,     0,   120,   229,   365,
     230,     0,     0,   376,   377,     0,   142,   415,     7,     0,
      72,   415,     7,     0,   143,   266,     7,     0,   195,   415,
       7,     0,   120,   229,   365,   230,     0,     0,   378,   379,
       0,   142,   415,     7,     0,   145,   415,     7,     0,    72,
     415,     7,     0,   195,   415,     7,     0,   113,     5,     7,
       0,   146,   229,   380,   230,     0,   120,   229,   365,   230,
       0,   121,   229,   365,   230,     0,     0,   380,   229,   381,
     230,     0,     0,   381,   382,     0,    70,     5,     7,     0,
      95,     5,     7,     0,   111,   250,     7,     0,    72,   415,
       7,     0,    83,   266,     7,     0,   195,     5,     7,     0,
       0,   383,   384,     0,   229,   385,   230,     0,   412,     0,
       0,   385,   386,     0,    80,     5,     7,     0,    80,     5,
     260,     7,     0,   114,     5,   261,     7,     0,   158,     5,
       7,     0,    95,   229,   387,   230,     0,     0,   387,   229,
     388,   230,     0,     0,   388,   389,     0,    80,     5,     7,
       0,    61,   229,   390,   230,     0,     0,   390,   100,   229,
     391,   230,     0,   390,     5,   229,   391,   230,     0,     0,
     391,   392,     0,     0,   351,   223,   393,   270,   224,     7,
       0,    70,     5,     7,     0,     0,   111,   394,   250,     7,
       0,    67,     5,     7,     0,    69,     5,     7,     0,     0,
     395,   396,     0,   229,   397,   230,     0,   412,     0,     0,
     397,   398,     0,    80,     5,     7,     0,   160,     5,     7,
       0,   184,     5,     7,     0,   162,   420,     7,     0,   120,
     229,   401,   230,     0,     0,   159,     5,   161,     5,   400,
     229,   401,   230,     0,     0,     0,   401,   402,   403,     0,
     163,   223,   405,   408,   409,   224,     7,     0,   164,   223,
     405,   408,   409,   224,     7,     0,   164,   223,     6,   231,
     415,   409,   224,     7,     0,     0,   165,   223,   250,   404,
     231,   111,   250,   409,   224,     7,     0,   166,   223,     6,
     409,   224,     7,     0,     5,   407,   231,     0,     5,   407,
     406,     5,   407,   231,     0,   214,     0,   215,     0,   212,
       0,   213,     0,     0,   223,   250,   224,     0,   169,     0,
     170,   250,     0,   171,   250,     0,   173,   229,   229,   418,
     230,   229,   418,   230,   229,   418,   230,   230,     0,   172,
     250,     0,   172,   229,   266,   231,   266,   231,   266,   230,
     229,   417,   231,   417,   231,   417,   230,     0,   174,   229,
     418,   230,     0,   175,   229,   229,   418,   230,   229,   418,
     230,   230,   229,   415,   230,     0,   176,   229,   229,   418,
     230,   229,   418,   230,   229,   418,   230,   230,   229,   415,
     231,   415,   230,     0,   177,   229,   229,   418,   230,   229,
     418,   230,   229,   418,   230,   229,   418,   230,   230,   229,
     415,   231,   415,   231,   415,   230,     0,   170,   250,   178,
       5,   229,   415,   231,   415,   230,   229,   415,   230,     0,
       0,   409,   410,     0,   231,   179,   420,     0,   231,   179,
     208,   420,     0,   231,   179,   211,   420,     0,   231,   180,
     415,     0,   231,   187,     0,   231,   188,     0,   231,   183,
     415,     0,   231,   184,     5,     0,   231,   185,   411,     0,
     231,   186,   411,     0,   231,   184,   411,     0,   231,   181,
     415,     0,   231,   182,   417,     0,   231,   168,     5,     0,
     231,   190,     5,     0,   231,   189,   415,     0,   231,    61,
     417,     0,   231,   191,   415,     0,   231,   191,   229,   418,
     230,     0,   231,   192,     0,   231,   193,     0,   231,   116,
     417,     0,   231,   147,   229,   266,   231,   266,   231,   266,
     230,     0,   231,   194,   268,     0,     0,   411,     6,     0,
       5,   199,   417,     7,     0,     5,   199,     6,     7,     0,
      16,   223,   413,   224,     7,     0,     0,   413,   259,     5,
       0,   413,   259,     5,   199,   415,     0,   413,   259,     5,
     199,     6,     0,    22,     0,    23,     0,    24,     0,    25,
       0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
       0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,     5,     0,   416,     0,   221,   415,   222,
       0,   213,   415,     0,   218,   415,     0,   415,   213,   415,
       0,   415,   212,   415,     0,   415,   214,   415,     0,   415,
     215,   415,     0,   415,   216,   415,     0,   415,   220,   415,
       0,   415,   206,   415,     0,   415,   208,   415,     0,   415,
     207,   415,     0,   415,   209,   415,     0,   415,   203,   415,
       0,   415,   204,   415,     0,   415,   202,   415,     0,   415,
     201,   415,     0,    22,   223,   415,   224,     0,    23,   223,
     415,   224,     0,    24,   223,   415,   224,     0,    25,   223,
     415,   224,     0,    26,   223,   415,   224,     0,    27,   223,
     415,   224,     0,    28,   223,   415,   224,     0,    29,   223,
     415,   224,     0,    30,   223,   415,   224,     0,    31,   223,
     415,   224,     0,    32,   223,   415,   231,   415,   224,     0,
      33,   223,   415,   224,     0,    34,   223,   415,   224,     0,
      35,   223,   415,   224,     0,    36,   223,   415,   224,     0,
      37,   223,   415,   224,     0,    38,   223,   415,   224,     0,
      39,   223,   415,   231,   415,   224,     0,    40,   223,   415,
     231,   415,   224,     0,    41,   223,   415,   231,   415,   224,
       0,   415,   200,   415,     8,   415,     0,   415,   226,     0,
       4,     0,     3,     0,    17,     0,    18,     0,    19,     0,
      20,     0,    21,     0,     5,     0,     0,   415,     0,   419,
       0,   229,   418,   230,     0,   415,     0,   419,     0,   418,
     231,   415,     0,   418,   231,   419,     0,   415,     8,   415,
       0,   415,     8,   415,     8,   415,     0,     5,   229,   230,
       0,     5,   229,   418,   230,     0,    12,   223,     5,   224,
       0,    13,   223,     5,   231,     5,   224,     0,    14,   223,
     415,   231,   415,   231,   415,   224,     0,    15,   223,   415,
     231,   415,   231,   415,   224,     0,     6,     0,     5,     0,
       9,   223,   420,   231,   420,   224,     0
};

#endif

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined. */
static const short yyrline[] =
{
       0,   322,   322,   394,   397,   397,   403,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   416,   418,   420,   425,
     434,   437,   439,   441,   443,   445,   447,   449,   451,   453,
     455,   457,   459,   461,   463,   465,   467,   469,   471,   473,
     476,   476,   498,   501,   501,   505,   510,   513,   513,   518,
     520,   522,   527,   527,   527,   553,   553,   553,   581,   590,
     597,   632,   637,   648,   651,   665,   670,   673,   722,   735,
     761,   766,   781,   799,   820,   826,   829,   838,   852,   886,
     899,   919,   923,   933,   950,   950,   953,   959,   962,   965,
     975,   978,   981,   985,  1005,  1049,  1053,  1056,  1073,  1082,
    1089,  1089,  1097,  1103,  1107,  1112,  1117,  1117,  1130,  1134,
    1134,  1134,  1176,  1182,  1188,  1194,  1200,  1206,  1212,  1218,
    1224,  1230,  1236,  1242,  1248,  1254,  1260,  1266,  1272,  1279,
    1285,  1287,  1296,  1300,  1306,  1380,  1414,  1423,  1435,  1435,
    1448,  1448,  1464,  1476,  1482,  1488,  1488,  1519,  1543,  1556,
    1562,  1569,  1575,  1582,  1589,  1599,  1602,  1603,  1606,  1609,
    1612,  1617,  1620,  1634,  1641,  1646,  1651,  1655,  1662,  1667,
    1672,  1677,  1683,  1687,  1692,  1695,  1731,  1739,  1744,  1753,
    1757,  1766,  1769,  1774,  1779,  1784,  1792,  1796,  1808,  1818,
    1823,  1828,  1833,  1845,  1849,  1905,  1908,  1911,  1914,  1917,
    1926,  1933,  1936,  1958,  1961,  1971,  1975,  1983,  1990,  1999,
    2002,  2022,  2039,  2061,  2071,  2075,  2087,  2111,  2136,  2141,
    2149,  2157,  2167,  2184,  2192,  2199,  2206,  2215,  2224,  2233,
    2252,  2260,  2263,  2286,  2290,  2299,  2303,  2311,  2318,  2327,
    2330,  2333,  2336,  2341,  2359,  2406,  2422,  2426,  2431,  2436,
    2441,  2455,  2475,  2480,  2504,  2559,  2563,  2563,  2563,  2640,
    2646,  2651,  2656,  2660,  2667,  2670,  2675,  2693,  2698,  2702,
    2719,  2733,  2738,  2742,  2755,  2761,  2768,  2775,  2779,  2786,
    2796,  2807,  2824,  2896,  2908,  2912,  2946,  2949,  2952,  2996,
    3003,  3006,  3028,  3032,  3040,  3044,  3052,  3059,  3069,  3071,
    3076,  3091,  3107,  3124,  3128,  3133,  3137,  3140,  3150,  3150,
    3213,  3218,  3218,  3385,  3390,  3399,  3408,  3413,  3416,  3454,
    3471,  3497,  3502,  3505,  3508,  3513,  3521,  3524,  3536,  3546,
    3558,  3567,  3570,  3574,  3576,  3578,  3584,  3602,  3606,  3606,
    3606,  3724,  3748,  3757,  3769,  3786,  3790,  3824,  3824,  3824,
    3903,  3906,  3907,  3908,  3909,  3910,  3911,  3912,  3916,  3939,
    3961,  3968,  3971,  3992,  3996,  4004,  4008,  4017,  4024,  4027,
    4027,  4034,  4050,  4067,  4082,  4086,  4091,  4100,  4103,  4108,
    4113,  4118,  4123,  4130,  4169,  4174,  4179,  4189,  4201,  4205,
    4210,  4221,  4230,  4237,  4261,  4268,  4274,  4280,  4286,  4294,
    4315,  4322,  4328,  4339,  4350,  4362,  4374,  4394,  4411,  4430,
    4451,  4485,  4498,  4512,  4525,  4538,  4538,  4547,  4547,  4556,
    4566,  4576,  4584,  4597,  4610,  4619,  4628,  4642,  4655,  4672,
    4686,  4704,  4710,  4720,  4726,  4729,  4733,  4743,  4757,  4769,
    4773,  4779,  4783,  4787,  4792,  4801,  4814,  4818,  4824,  4828,
    4832,  4836,  4841,  4850,  4862,  4865,  4871,  4875,  4879,  4883,
    4892,  4907,  4910,  4916,  4920,  4924,  4929,  4939,  4945,  4951,
    4960,  4964,  4968,  4982,  4985,  4997,  5026,  5029,  5032,  5040,
    5056,  5064,  5067,  5088,  5091,  5102,  5105,  5113,  5121,  5167,
    5172,  5177,  5181,  5185,  5192,  5196,  5200,  5205,  5211,  5217,
    5230,  5241,  5244,  5244,  5280,  5291,  5291,  5297,  5306,  5322,
    5330,  5333,  5338,  5341,  5350,  5353,  5361,  5373,  5384,  5389,
    5394,  5394,  5421,  5425,  5425,  5438,  5444,  5448,  5454,  5454,
    5463,  5470,  5484,  5506,  5509,  5510,  5511,  5514,  5518,  5522,
    5530,  5537,  5544,  5568,  5575,  5587,  5600,  5620,  5646,  5679,
    5699,  5723,  5726,  5734,  5741,  5748,  5752,  5756,  5760,  5764,
    5774,  5779,  5784,  5804,  5811,  5820,  5829,  5838,  5845,  5853,
    5857,  5866,  5870,  5874,  5882,  5888,  5896,  5903,  5949,  5966,
    5972,  5976,  5979,  5985,  5991,  6002,  6004,  6005,  6006,  6007,
    6008,  6009,  6010,  6011,  6012,  6013,  6014,  6015,  6016,  6017,
    6018,  6019,  6020,  6021,  6022,  6023,  6026,  6028,  6029,  6030,
    6031,  6032,  6033,  6034,  6035,  6036,  6037,  6038,  6039,  6040,
    6041,  6042,  6043,  6044,  6045,  6046,  6047,  6048,  6049,  6050,
    6051,  6052,  6053,  6054,  6055,  6056,  6057,  6058,  6059,  6060,
    6061,  6062,  6063,  6064,  6065,  6066,  6069,  6072,  6073,  6074,
    6075,  6076,  6077,  6078,  6094,  6099,  6105,  6108,  6113,  6121,
    6124,  6127,  6137,  6145,  6156,  6172,  6194,  6209,  6247,  6255,
    6265,  6270,  6285
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
  "tDtDtDof", "tJacNL", "tNeverDt", "tDtNL", "tIn", "tResolution", 
  "tDefineSystem", "tNameOfFormulation", "tNameOfMesh", "tFrequency", 
  "tSolver", "tOriginSystem", "tDestinationSystem", "tOperation", 
  "tOperationEnd", "tSetTime", "tDTime", "tSetFrequency", 
  "tFourierTransform", "tFourierTransformJ", "tIf", "tElse", "tLanczos", 
  "tPerturbation", "tUpdate", "tUpdateConstraint", "tBreak", 
  "tTimeLoopTheta", "tTime0", "tTimeMax", "tTheta", "tTimeLoopNewmark", 
  "tBeta", "tGamma", "tIterativeLoop", "tNbrMaxIteration", 
  "tRelaxationFactor", "tIterativeTimeReduction", "tDivisionCoefficient", 
  "tChangeOfState", "tChangeOfCoordinates", "tSystemCommand", 
  "tSolveJac_AdaptRelax", "tSaveSolutionExtendedMH", "tInit_MovingBand2D", 
  "tMesh_MovingBand2D", "tGenerate_MH_Moving", "tGenerateGroup", 
  "tGenerateJacGroup", "tSaveMesh", "tPostProcessing", "tNameOfSystem", 
  "tPostOperation", "tNameOfPostProcessing", "tUsingPost", "tAppend", 
  "tPlot", "tPrint", "tPrintGroup", "tEcho", "tWrite", "tAdapt", 
  "tOnGlobal", "tOnRegion", "tOnElementsOf", "tOnGrid", "tOnSection", 
  "tOnPoint", "tOnLine", "tOnPlane", "tOnBox", "tWithArgument", "tFile", 
  "tDepth", "tDimension", "tTimeStep", "tHarmonicToTime", "tFormat", 
  "tHeader", "tFooter", "tSkin", "tSmoothing", "tTarget", "tSort", "tIso", 
  "tNoNewLine", "tDecomposeInSimplex", "tChangeOfValues", "tFlag", 
  "tHelp", "tCpu", "tCheck", "tDEF", "'?'", "tOR", "tAND", "tEQUAL", 
  "tNOTEQUAL", "tAPPROXEQUAL", "'<'", "tLESSOREQUAL", "'>'", 
  "tGREATEROREQUAL", "tLESSLESS", "tGREATERGREATER", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "tCROSSPRODUCT", "'!'", "UNARYPREC", "'^'", "'('", "')'", 
  "'['", "']'", "'.'", "'#'", "'$'", "tSHOW", "'{'", "'}'", "','", "'@'", 
  "Stats", "@1", "ProblemDefinitions", "@2", "ProblemDefinition", 
  "Interactive", "@3", "Groups", "@4", "Group", "@5", "MovingBand2DGroup", 
  "@6", "@7", "ReducedGroupRHS", "@8", "@9", "GroupRHS", 
  "FunctionForGroup", "ListOfRegionOrAll", "SuppListOfRegion", 
  "SuppListTypeForGroup", "ListOfRegion", "RecursiveListOfRegion", 
  "IRegion", "DefineGroups", "Comma", "DefineDimension", "MultipleIndex", 
  "Index", "Functions", "Function", "DefineFunctions", "Expression", 
  "@10", "ListOfExpression", "RecursiveListOfExpression", 
  "WholeQuantityExpression", "@11", "WholeQuantity", "@12", "@13", 
  "WholeQuantity_Single", "@14", "@15", "@16", "ArgumentsForFunction", 
  "RecursiveListOfQuantity", "ParametersForFunction", "JacobianMethods", 
  "JacobianMethod", "JacobianMethodTerm", "JacobianCases", "JacobianCase", 
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
       0,   234,   233,   235,   236,   235,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     239,   238,   240,   241,   240,   242,   242,   243,   242,   242,
     242,   242,   245,   246,   244,   248,   249,   247,   247,   250,
     250,   251,   251,   252,   252,   253,   253,   253,   254,   255,
     255,   256,   256,   256,   257,   257,   257,   257,   257,   257,
     257,   258,   258,   258,   259,   259,   260,   261,   261,   262,
     263,   263,   264,   264,   264,   264,   265,   265,   266,   266,
     267,   266,   268,   268,   269,   269,   271,   270,   272,   273,
     274,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   275,   275,   275,   275,   275,   275,   276,   275,
     277,   275,   275,   275,   275,   278,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   279,   279,   279,   280,   280,
     281,   281,   281,   282,   282,   283,   283,   284,   284,   285,
     285,   286,   286,   287,   287,   287,   288,   288,   289,   289,
     290,   290,   290,   291,   291,   292,   292,   293,   293,   293,
     294,   294,   295,   295,   296,   296,   296,   296,   296,   296,
     297,   297,   298,   298,   299,   299,   300,   300,   300,   300,
     300,   301,   301,   302,   302,   303,   303,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   303,   303,   303,
     304,   304,   305,   305,   306,   306,   307,   307,   307,   307,
     307,   307,   307,   308,   308,   309,   309,   310,   310,   310,
     310,   310,   310,   310,   310,   311,   312,   313,   311,   314,
     314,   315,   315,   316,   316,   316,   317,   317,   318,   318,
     319,   319,   320,   320,   321,   321,   322,   322,   323,   323,
     323,   324,   324,   325,   325,   326,   326,   326,   326,   327,
     327,   328,   328,   329,   329,   330,   330,   330,   330,   330,
     331,   331,   332,   332,   333,   333,   333,   333,   334,   333,
     333,   335,   333,   333,   333,   333,   333,   336,   336,   337,
     337,   338,   338,   338,   338,   339,   339,   340,   340,   340,
     341,   341,   342,   342,   342,   342,   343,   343,   345,   346,
     344,   344,   344,   344,   347,   347,   348,   349,   350,   348,
     351,   351,   351,   351,   351,   351,   351,   351,   352,   352,
     353,   353,   354,   354,   355,   355,   356,   356,   356,   357,
     356,   358,   358,   359,   359,   360,   360,   360,   360,   360,
     360,   360,   360,   361,   361,   362,   362,   363,   363,   364,
     364,   365,   365,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   367,   366,   368,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   369,   369,   370,   370,   371,   371,   371,   372,   372,
     373,   373,   373,   373,   373,   374,   374,   375,   375,   375,
     375,   375,   375,   376,   376,   377,   377,   377,   377,   377,
     378,   378,   379,   379,   379,   379,   379,   379,   379,   379,
     380,   380,   381,   381,   382,   382,   382,   382,   382,   382,
     383,   383,   384,   384,   385,   385,   386,   386,   386,   386,
     386,   387,   387,   388,   388,   389,   389,   390,   390,   390,
     391,   391,   393,   392,   392,   394,   392,   392,   392,   395,
     395,   396,   396,   397,   397,   398,   398,   398,   398,   398,
     400,   399,   401,   402,   401,   403,   403,   403,   404,   403,
     403,   405,   405,   406,   406,   406,   406,   407,   407,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     409,   409,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   411,   411,   412,   412,
     412,   413,   413,   413,   413,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   416,   416,   416,   416,
     416,   416,   416,   416,   417,   417,   417,   417,   418,   418,
     418,   418,   419,   419,   419,   419,   419,   419,   419,   419,
     420,   420,   420
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
       0,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     2,     3,     1,     0,     2,     3,     4,     4,     0,
       5,     0,     4,     0,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     0,     3,     1,     3,     0,
       3,     0,     2,     3,     3,     4,     4,     4,     4,     5,
       5,     2,     7,    11,     7,     7,     9,     9,     9,    11,
      17,    13,    15,    11,    13,     0,     7,     0,     7,     7,
       5,     5,     9,     9,     5,     5,    13,     9,    14,     7,
       7,     1,     1,     0,     2,     3,     3,     2,     0,     2,
       3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
       3,     3,     4,     0,     2,     3,     3,     3,     3,     4,
       0,     2,     3,     3,     3,     3,     3,     4,     4,     4,
       0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
       0,     2,     3,     1,     0,     2,     3,     4,     4,     3,
       4,     0,     4,     0,     2,     3,     4,     0,     5,     5,
       0,     2,     0,     6,     3,     0,     4,     3,     3,     0,
       2,     3,     1,     0,     2,     3,     3,     3,     3,     4,
       0,     8,     0,     0,     3,     7,     7,     8,     0,    10,
       6,     3,     6,     1,     1,     1,     1,     0,     3,     1,
       2,     2,    12,     2,    15,     4,    12,    17,    22,    12,
       0,     2,     3,     4,     4,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     2,     2,     3,     9,     3,     0,     2,     4,     4,
       5,     0,     3,     5,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     6,     4,     4,     4,     4,     4,
       4,     6,     6,     6,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     3,     1,     1,
       3,     3,     3,     5,     3,     4,     4,     6,     8,     8,
       1,     1,     6
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error. */
static const short yydefact[] =
{
       1,     3,     4,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,    19,     0,    16,    17,   654,   671,   670,     0,    18,
     581,    42,   200,   163,   176,   230,    90,   289,   360,   480,
       0,   509,     0,    20,     0,     0,     0,     0,     0,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,   647,   646,   653,
       0,     0,     0,     0,     0,   648,   649,   650,   651,   652,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   655,   606,     0,   656,     0,    84,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    23,    21,    25,    24,    22,    39,    29,    31,
      32,    33,    34,    30,    35,    36,    37,    38,     0,     0,
       0,     0,     0,   579,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   653,   608,
     609,     0,   658,     0,   659,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   645,   578,     0,     0,    85,     0,     6,     0,   204,
       8,   201,   203,   165,     9,   178,    10,   234,    11,   231,
     233,     0,     0,     7,    91,    95,   293,    12,   290,   292,
     364,    13,   361,   363,   484,    14,   481,   483,   520,   513,
      15,   510,   512,   537,     0,     0,     0,    87,    61,     0,
      59,   528,     0,   550,   664,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     607,   657,     0,   662,     0,   623,   622,   620,   621,   616,
     618,   617,   619,   611,   610,   612,   613,   614,   615,     0,
     580,   582,     0,     0,    44,    50,    51,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,     0,
     539,     0,     0,     0,     0,     0,     0,     0,     0,   550,
       0,   550,     0,    60,    74,    78,    71,     0,    58,    69,
       0,    55,     0,   665,   666,     0,     0,     0,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,     0,   635,
     636,   637,   638,   639,   640,     0,     0,     0,   660,   661,
       0,     0,     0,     0,   654,     0,     0,     0,     0,    81,
       0,     0,     0,   202,   205,     0,     0,   164,   166,     0,
     100,     0,   177,   179,     0,     0,     0,     0,     0,     0,
     232,   235,     0,     0,    84,     0,     0,     0,     0,   291,
     294,     0,     0,   369,   362,   365,     0,     0,     0,     0,
     482,   485,   522,     0,     0,     0,     0,     0,   511,   514,
       0,   535,   536,   533,   534,   531,     0,   540,   541,   100,
     543,     0,     0,     0,     0,     0,     0,   550,     0,    88,
       0,     0,    84,     0,     0,     0,     0,     0,   551,     0,
       0,     0,     0,     0,     0,     0,   663,   644,   672,   584,
     583,   653,     0,     0,     0,     0,    47,     0,    84,     0,
     211,     0,     0,   169,     0,   183,     0,     0,     0,   106,
       0,   281,     0,     0,   243,   259,   274,   100,     0,     0,
       0,     0,     0,   300,   319,     0,   371,     0,     0,   491,
      87,     0,   523,     0,   522,     0,     0,     0,   538,   537,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     647,    76,    80,     0,    70,     0,    75,     0,    64,    56,
      63,   530,   654,   654,     0,     0,     0,     0,     0,   654,
       0,   576,   576,   576,   556,   557,     0,     0,     0,   571,
     572,   102,   667,     0,     0,   634,   641,   642,   643,    45,
       0,     0,    89,     0,    62,     0,     0,     0,   211,     0,
     208,   206,     0,     0,     0,   167,     0,     0,     0,   181,
     101,     0,   180,     0,   238,   236,     0,     0,     0,     0,
       0,   100,    92,    97,   297,   295,     0,     0,     0,   366,
       0,     0,   391,   486,     0,     0,     0,   489,   521,     0,
     515,   523,   516,   518,   517,     0,     0,   100,     0,   545,
       0,     0,     0,   525,     0,   526,     0,    79,     0,    72,
     550,    84,   568,   573,   100,   565,     0,     0,   552,   555,
     563,   564,   558,   559,   562,   560,   561,   567,   566,     0,
     569,   100,   575,     0,     0,     0,    86,     0,    46,    49,
      82,     0,   213,   209,   207,   171,   168,   185,   182,     0,
       0,   653,   585,   586,   587,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   598,   599,   600,   601,   602,
     603,   604,     0,   145,     0,     0,     0,     0,   138,     0,
       0,     0,     0,     0,     0,     0,     0,   107,   108,   136,
       0,   133,   283,   242,   237,   245,   239,   261,   240,   276,
     241,    93,     0,   296,   302,   298,     0,     0,     0,     0,
     299,   320,   367,   373,   368,     0,   487,   493,   490,   488,
     524,   519,   532,     0,     0,     0,     0,     0,     0,   527,
      77,    73,     0,     0,     0,     0,   553,   554,   577,     0,
     104,     0,   668,   669,    52,    48,     0,   210,     0,     0,
       0,    98,    99,   135,     0,     0,     0,     0,     0,     0,
       0,     0,   130,   129,   131,     0,   153,   151,   148,   150,
     149,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   137,   160,     0,     0,     0,     0,    94,     0,
     336,   336,   344,   325,     0,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   415,   417,   370,   392,     0,     0,   100,     0,     0,
       0,     0,     0,    57,    68,     0,     0,   100,   570,   103,
     100,     0,     0,     0,     0,     0,     0,   100,   100,   100,
     100,     0,     0,     0,   100,   212,   214,     0,     0,   170,
     172,     0,     0,     0,   184,   186,     0,   106,     0,     0,
       0,     0,   106,     0,   132,     0,   359,     0,   128,   127,
     124,   125,   126,   120,   122,   121,   123,   116,   117,   112,
     115,   118,   113,   119,   152,   154,   156,     0,   158,     0,
       0,   134,     0,     0,     0,     0,   282,   284,     0,     0,
       0,     0,   102,     0,     0,   244,   246,     0,     0,     0,
     260,   262,     0,     0,     0,   275,   277,     0,     0,     0,
       0,     0,     0,     0,     0,   311,   301,   303,   350,   350,
     350,     0,     0,     0,     0,     0,   654,     0,     0,     0,
     372,   374,     0,     0,   100,     0,     0,     0,     0,   100,
       0,     0,     0,     0,   401,     0,   438,     0,   445,     0,
     453,   460,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   492,   494,     0,
       0,     0,     0,     0,     0,   529,    87,    66,     0,   105,
       0,    83,     0,     0,     0,     0,   100,     0,   100,     0,
       0,     0,     0,     0,     0,   100,     0,     0,     0,   160,
     190,     0,     0,   143,     0,   144,     0,   140,     0,     0,
     106,   358,     0,   155,   157,     0,     0,     0,     0,     0,
       0,    87,     0,     0,   255,     0,     0,     0,     0,     0,
     270,   272,     0,   266,   268,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,   106,
       0,     0,   351,   352,   353,   354,   355,   356,   357,     0,
     321,   337,     0,   322,     0,   323,   345,     0,     0,     0,
     330,   324,   326,     0,     0,    87,   385,     0,     0,     0,
       0,   387,   389,     0,     0,   393,     0,     0,   394,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   102,   497,     0,     0,
       0,     0,     0,     0,     0,    67,   100,     0,   216,   217,
     222,   223,     0,   226,     0,   225,   219,   218,    84,   220,
     215,     0,   224,   174,   173,     0,     0,   187,   188,     0,
       0,   106,     0,   139,     0,   110,   159,     0,   161,   285,
     286,   287,     0,   247,   248,     0,     0,     0,    84,   252,
     253,   254,   263,    84,   265,    84,   264,   279,   278,   280,
     315,   314,   307,   305,   306,   304,   308,   310,   316,   313,
       0,     0,     0,     0,   338,     0,   347,     0,     0,     0,
     376,   375,   383,    84,   377,   378,   381,   382,    84,   379,
     380,     0,     0,   100,     0,     0,     0,     0,     0,   100,
       0,     0,     0,   100,     0,     0,   100,   395,   439,     0,
       0,   100,     0,     0,     0,     0,   396,   446,     0,     0,
       0,     0,   100,     0,   397,   454,     0,     0,     0,     0,
       0,     0,     0,     0,   398,   461,   100,     0,   654,     0,
       0,     0,     0,     0,     0,     0,     0,   432,   431,   433,
     433,     0,   495,     0,   654,     0,     0,     0,     0,     0,
      53,   100,   100,     0,   100,   175,   192,   189,     0,   114,
       0,     0,   147,     0,     0,   288,   249,     0,   250,     0,
     271,     0,   267,     0,   317,     0,   342,   343,   341,   106,
     346,   106,   327,   328,     0,     0,     0,     0,   329,   331,
     384,     0,   388,     0,   399,   400,     0,     0,     0,   391,
       0,     0,     0,     0,     0,   391,     0,     0,     0,     0,
       0,   391,     0,     0,     0,     0,     0,     0,     0,   391,
       0,     0,     0,     0,     0,   391,   391,     0,     0,   470,
       0,     0,   421,     0,     0,   424,   425,     0,     0,     0,
       0,   420,     0,     0,     0,     0,   496,     0,     0,     0,
       0,     0,     0,   574,     0,     0,     0,     0,     0,     0,
     146,     0,     0,   111,     0,     0,     0,   273,   269,     0,
       0,   312,   339,   348,     0,     0,     0,     0,   386,   390,
       0,   654,     0,     0,   654,     0,     0,     0,   100,     0,
     442,   440,   441,   443,   100,     0,   449,   447,   448,   450,
     451,   100,   456,     0,   455,   457,   458,   464,   466,     0,
       0,   462,   463,     0,   465,     0,     0,     0,     0,     0,
       0,     0,     0,   654,   434,     0,   500,   500,     0,   654,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   191,   193,     0,     0,   162,
       0,     0,     0,   309,     0,     0,   332,   333,   334,   335,
     404,     0,     0,   402,     0,     0,   405,     0,     0,   444,
       0,   452,     0,   459,   468,   469,   472,   467,   419,     0,
       0,     0,   429,   430,     0,   416,     0,   654,   437,   418,
     350,   350,   549,     0,   542,   546,     0,     0,     0,   229,
     228,   221,   227,     0,     0,     0,     0,     0,     0,     0,
     142,     0,   251,   318,   106,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   435,   436,     0,     0,     0,   505,   499,     0,
     501,   498,   654,     0,     0,     0,   194,   195,   196,   197,
     198,   199,     0,     0,     0,     0,   407,   408,   391,     0,
       0,   406,     0,     0,   391,     0,     0,     0,   100,     0,
       0,     0,   471,   473,   422,   423,     0,   427,     0,     0,
       0,     0,     0,   502,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,   654,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,   507,   508,   504,
       0,   106,   544,     0,     0,     0,   256,   340,   349,   403,
     409,     0,   391,     0,   413,   391,   474,   477,   478,   475,
     476,   479,   391,     0,   506,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   547,     0,    54,
       0,     0,   411,   391,   414,     0,   426,   503,     0,     0,
       0,     0,   428,     0,   257,     0,   412,     0,     0,     0,
       0,     0,   410,   548,    87,     0,     0,   258,     0,     0,
       0
};

static const short yydefgoto[] =
{
    1758,     1,     2,     3,    20,    21,    22,   110,   198,   294,
     563,   295,   871,  1434,   240,   445,   631,   241,   242,   529,
     753,   866,   328,   442,   329,   468,   196,   367,   323,   368,
     115,   214,   394,   478,   479,  1318,   761,   580,   581,   707,
     907,  1343,   708,   780,  1201,   775,   812,   929,   931,   112,
     298,   378,   574,   769,   890,   113,   299,   383,   576,   770,
     895,  1196,  1439,  1526,   111,   201,   297,   374,   569,   768,
     886,   114,   209,   300,   391,   587,   815,   946,  1217,  1719,
    1748,   588,   816,   951,  1085,  1225,  1082,  1223,   589,   817,
     956,   583,   814,   937,   116,   218,   303,   400,   597,   819,
     967,  1354,  1099,  1450,   598,   731,   971,  1122,  1249,  1369,
     968,  1111,  1359,  1534,   970,  1116,  1361,  1535,  1112,   709,
     117,   222,   304,   405,   497,   601,   824,   981,  1127,  1253,
    1133,  1258,   735,   854,  1013,  1014,  1319,  1422,  1504,  1148,
    1278,  1150,  1287,  1152,  1295,  1153,  1305,  1493,  1606,  1653,
     118,   226,   305,   411,   605,   855,  1018,  1321,  1570,  1620,
    1691,  1662,   120,   231,   307,   419,    23,   306,   502,   609,
      66,   330,   234,   426,   309,   319,   332,   448,   644,    24,
     109,   710,   172,   105,   106,   173,   174,    29
};

static const short yypact[] =
{
  -32768,-32768,   102,   426,  -114,   320,  -119,  -122,   -84,   -58,
     -56,   -54,   -39,   -37,     8,    12,     2,   215,   196,  2995,
  -32768,-32768,   485,-32768,-32768,  1794,-32768,-32768,   105,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
     182,-32768,   254,-32768,   341,   345,   355,   357,   361,-32768,
     373,-32768,   399,   417,   425,   442,   484,   499,   504,   518,
     528,   533,   165,   314,   333,   336,-32768,-32768,-32768,   337,
     579,   366,   368,   375,   377,-32768,-32768,-32768,-32768,-32768,
     382,   402,   404,   420,   429,   443,   445,   471,   503,   506,
     509,   511,   517,   519,   531,   535,   539,   567,   578,   582,
    2952,  2952,  2952,  2874,  1206,-32768,   589,-32768,   320,   -26,
     407,    26,   115,   243,    36,    64,    73,    78,    85,   699,
      87,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   806,   414,
      59,   704,  1002,-32768,   813,   826,  2952,  2952,  2952,  2952,
    2952,  2952,  2952,  2952,  2952,  2952,  2952,  2952,  2952,  2952,
    2952,  2952,  2952,  2952,  2952,  2952,  2952,  2952,-32768,    16,
      16,  3960,  1206,   245,-32768,  2952,  2952,  2952,  2952,  2952,
    2952,  2952,  2952,  2952,  2952,  2952,  2952,  2952,  2952,  2952,
    2952,-32768,-32768,   605,   833,-32768,   840,-32768,   100,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,  -103,   637,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,   643,  1527,   650,  1527,   143,-32768,    20,
  -32768,-32768,   645,-32768,-32768,   258,   666,   661,  3094,  3115,
    1829,  3987,  4014,  4041,  4068,  4095,  4122,  4149,  4176,  4203,
    3136,  4230,  4257,  4284,  4311,  4338,  4365,  3157,  3178,  3199,
  -32768,-32768,  2874,  1746,  3025,   775,  1690,   635,   635,   594,
     594,   594,   594,   481,   481,    16,    16,    16,    16,   320,
  -32768,   710,   138,   651,-32768,-32768,-32768,   121,   -17,   127,
     116,   139,-32768,   155,   500,   338,   669,   306,    59,   427,
  -32768,    59,    59,    92,   684,   687,   694,   708,   714,-32768,
    2952,-32768,   698,-32768,   931,   720,-32768,  2874,-32768,-32768,
     721,-32768,   -12,-32768,-32768,   953,  2952,  2952,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2952,-32768,
  -32768,-32768,-32768,-32768,-32768,  2952,  2952,  2952,  1206,-32768,
    2952,  2952,   736,  2913,  1068,   965,  2412,   770,   772,-32768,
      15,   971,   975,-32768,-32768,   756,   981,-32768,-32768,   767,
      89,   992,-32768,-32768,   771,   994,   997,   774,   779,   780,
  -32768,-32768,   805,   786,    -8,  1006,  1007,   784,   815,-32768,
  -32768,  1040,   817,-32768,-32768,-32768,  1042,   819,  1044,  1045,
  -32768,-32768,-32768,  1047,   824,  1050,   320,  1053,-32768,-32768,
     835,-32768,-32768,-32768,-32768,-32768,  1055,   883,-32768,    89,
  -32768,   834,  2874,   836,   837,   838,     9,  4797,    27,-32768,
    2991,   652,   324,   372,   951,    31,  1061,  2996,-32768,   845,
    3220,  3241,  4392,  4419,  4446,  4473,  4797,  4797,-32768,-32768,
    4797,   200,  1069,   851,  2952,  3619,-32768,   114,   123,   848,
  -32768,  1071,    17,-32768,  1072,-32768,   861,   893,  1117,-32768,
    1118,-32768,  1120,    72,-32768,-32768,-32768,    89,   929,  1123,
    1126,  1138,    77,-32768,-32768,    80,-32768,   904,    84,-32768,
     917,  1141,   919,  1143,-32768,  1144,  1146,  1147,-32768,   643,
    1151,   926,  2874,   381,  2874,  2874,  2874,  1152,   158,  1153,
    1150,  4797,-32768,  3650,-32768,    35,-32768,    59,-32768,-32768,
  -32768,-32768,  1833,  1833,   932,  1157,   176,  2952,  2952,  1833,
    2952,  1159,-32768,-32768,-32768,-32768,  2952,  1160,   746,-32768,
  -32768,   937,-32768,  2952,  2952,-32768,-32768,-32768,-32768,-32768,
     969,  3681,-32768,   114,-32768,  1162,  1163,  1167,-32768,   388,
  -32768,-32768,   958,  1184,   415,-32768,   430,  2952,  1187,-32768,
  -32768,  1706,-32768,   434,-32768,-32768,  1188,   473,   482,   486,
    1199,    89,-32768,-32768,-32768,-32768,  1200,   494,   126,-32768,
    1202,   507,-32768,-32768,  1203,   516,  1204,-32768,-32768,   485,
  -32768,   964,-32768,-32768,-32768,   986,   983,    89,   522,-32768,
     526,   530,   569,-32768,  1212,-32768,  2952,-32768,    56,-32768,
  -32768,   190,-32768,-32768,    89,-32768,   320,   320,-32768,  4797,
    4797,-32768,  4797,-32768,  1215,  1215,  1215,  4797,-32768,  2874,
    4797,    89,-32768,  4500,  4527,  1170,-32768,  1217,-32768,-32768,
     996,   574,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4554,
    1003,   212,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,  1005,-32768,  1010,  1020,  1021,  1022,-32768,  1221,
    1706,  1706,  1706,  1706,  1226,    57,  1242,  4872,  -155,  1025,
    1025,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,  1244,-32768,-32768,-32768,  1023,  1024,  1026,  1027,
  -32768,-32768,-32768,-32768,-32768,   988,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,  2952,  1030,  1033,  1036,  1041,  1043,-32768,
    4797,-32768,   227,  1056,    44,  1046,-32768,-32768,-32768,   585,
  -32768,   591,-32768,-32768,-32768,-32768,  2952,-32768,   487,    -9,
     140,-32768,-32768,-32768,  1058,  1051,  1058,  1706,  1268,  1277,
    1062,  1080,  1070,  1070,  1070,  4849,-32768,-32768,-32768,-32768,
  -32768,    32,-32768,  1706,  1706,  1706,  1706,  1706,  1706,  1706,
    1706,  1706,  1706,  1706,  1706,  1706,  1706,  1706,  1706,  1288,
    1289,  1297,-32768,  1066,   352,   478,   289,    29,-32768,   358,
  -32768,-32768,-32768,-32768,   367,    81,   101,  1073,  1075,  1081,
    1082,  1083,  1084,  1085,  1087,  1296,   293,   346,   364,  1116,
    1088,  1089,  1090,  1125,  1132,  1133,  1145,  1148,  1164,  1135,
    1165,-32768,-32768,-32768,-32768,    -6,  3262,    89,  2874,  2874,
    2874,  2874,  1339,-32768,-32768,  1362,    20,    89,-32768,-32768,
      89,  1171,  3712,    59,    59,    59,    59,   104,   132,    89,
      89,  1154,  1365,  1377,   135,-32768,-32768,    38,  1380,-32768,
  -32768,  1161,  1381,  1388,-32768,-32768,  1172,-32768,  1173,  3073,
    1175,  1176,-32768,  1180,-32768,  1169,-32768,  1706,  2933,  4890,
     671,   671,   671,   613,   613,   613,   613,   679,   679,  1070,
    1070,  1070,  1070,  1070,-32768,-32768,-32768,  1192,  4872,   233,
    2835,-32768,  1399,    63,  1418,  1419,-32768,-32768,  1420,  1422,
    1423,  1201,   937,    59,    59,-32768,-32768,  1424,    39,    60,
  -32768,-32768,  1426,  1429,  1430,-32768,-32768,  1435,  1436,   317,
    1437,  1438,  1441,  1442,    59,-32768,-32768,-32768,  2930,  2992,
    1130,   249,  1443,  1445,    61,   320,  1833,   320,    62,  1446,
  -32768,-32768,  1440,  1447,    89,  1449,  1448,  1452,  1453,    89,
    1454,  1456,  1457,  1458,-32768,  2952,-32768,  2952,-32768,  2952,
  -32768,-32768,    59,   320,  1459,  1460,  1462,  1464,  1467,  1469,
    1470,  1471,  1472,  1231,  1245,  1250,  1475,-32768,-32768,  2952,
    1251,   604,   623,   627,   632,-32768,   917,-32768,  1252,-32768,
    1256,-32768,  1478,  1479,  1480,  1482,    89,  1483,    89,  1484,
    1485,  1486,  1497,  1494,  1495,    89,  1499,  1500,  1501,  1066,
  -32768,  1504,  1505,-32768,  1273,-32768,  1706,-32768,  1284,  1290,
  -32768,-32768,  3052,-32768,-32768,  1706,  1293,   670,  1510,  1512,
    1513,   917,  1518,    91,  1298,  1524,  1534,  1536,  1538,  1539,
  -32768,-32768,  1541,-32768,-32768,  1542,  1544,  1556,  1559,  1560,
    1561,  1562,  1564,  1565,  1569,   917,  1570,  1572,  1574,-32768,
    1529,  1577,-32768,-32768,-32768,-32768,-32768,-32768,-32768,    59,
  -32768,-32768,  1366,-32768,    59,-32768,-32768,  1373,  1595,  1596,
  -32768,-32768,-32768,  1597,  1599,   917,-32768,  1611,  1612,  1614,
    1616,-32768,-32768,  1617,  1619,-32768,  1379,  1403,-32768,  1398,
    1400,  1401,  1409,  1404,  1407,  1408,  1410,  3283,   479,  3304,
     608,  3325,   431,   593,  1412,  1413,  1414,  1415,  1417,  1425,
    1421,  1427,  1431,  1450,  1416,    67,    67,-32768,  1623,  3743,
    1405,  1428,  1444,  1432,  1451,-32768,    89,    20,-32768,-32768,
  -32768,-32768,  1455,-32768,  1474,-32768,-32768,-32768,  1476,-32768,
  -32768,  1477,-32768,-32768,-32768,  1637,   674,-32768,-32768,    59,
    4824,-32768,  2952,-32768,  1466,-32768,  4872,    59,-32768,-32768,
  -32768,-32768,  1641,-32768,-32768,  1643,  1558,  1647,  1476,-32768,
  -32768,-32768,-32768,   675,-32768,   677,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1488,  1649,  1653,  1666,-32768,  1677,-32768,  1678,  1680,   103,
  -32768,-32768,-32768,   681,-32768,-32768,-32768,-32768,   705,-32768,
  -32768,  1681,  1686,    89,  1689,  1701,  1487,  2952,  1709,    89,
      59,  2952,  1489,    89,  2952,  2952,    89,-32768,-32768,  2952,
    1490,    89,  2952,  2952,  2952,  2952,-32768,-32768,  2952,  2952,
    1491,  2952,    89,  2952,-32768,-32768,  2952,  1712,  1492,  1530,
    2952,  2952,  1531,  2952,-32768,-32768,    89,  1751,  1833,  2952,
    1754,  1755,  1758,  1763,  1789,    59,  1795,-32768,-32768,-32768,
  -32768,    13,-32768,  1567,  1833,  2874,  1575,  2874,  2874,  1571,
  -32768,    89,    89,  1800,    89,-32768,-32768,-32768,  1581,-32768,
    1615,  3346,-32768,  1706,  1618,-32768,-32768,  1835,-32768,  1836,
  -32768,  1838,-32768,  1839,  1626,  1873,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  1058,  1058,  1058,    59,-32768,-32768,
  -32768,  1880,-32768,  1881,-32768,-32768,  1668,  1669,  1676,-32768,
    3367,  1682,  1684,  1683,  3388,-32768,  1902,   718,  1463,  1904,
    3409,-32768,  1908,  1675,  1788,  2261,  2282,  3430,  2309,-32768,
    2330,  1910,  2351,  2372,  1913,-32768,-32768,  2393,  2447,-32768,
    2485,  1697,-32768,  1691,  3451,-32768,-32768,  1692,  1702,  1704,
    1694,-32768,   246,   302,  1700,  1707,-32768,  2952,  1699,   711,
    2952,   715,   717,-32768,  1710,  1713,  1714,  1715,  1716,   424,
  -32768,  1718,  2952,  4872,  1721,  1936,  1726,-32768,-32768,  1939,
    1950,-32768,-32768,-32768,  1956,  1957,  1960,  1961,-32768,-32768,
    1962,  1833,  2952,  1049,  1833,  1966,  1967,  1970,    89,  1225,
  -32768,-32768,-32768,-32768,    89,  1406,-32768,-32768,-32768,-32768,
  -32768,    89,-32768,  1461,-32768,-32768,-32768,-32768,-32768,  1934,
    1978,-32768,-32768,   725,-32768,  1969,  2952,   320,  2952,  1971,
    1972,   320,  1973,  1752,-32768,  1975,-32768,-32768,  3774,  1833,
    1747,  3805,  1756,  1764,  1759,  1977,  1980,  1991,  1992,  2000,
    2952,  2952,  2952,  2952,  2952,-32768,-32768,  1777,  3836,-32768,
    1915,  2003,  1787,-32768,  1782,  1785,-32768,-32768,-32768,-32768,
  -32768,  1793,  4581,  1890,  1790,  1791,-32768,  1796,  1797,-32768,
    1803,-32768,   303,-32768,-32768,-32768,-32768,-32768,-32768,  4608,
    1801,  3472,-32768,-32768,   726,-32768,   320,  1833,-32768,-32768,
     525,  2854,-32768,  1808,-32768,-32768,  1811,  2874,    20,-32768,
  -32768,-32768,-32768,  2012,  2512,  2533,  2554,  2575,  2596,  2952,
  -32768,  2019,-32768,-32768,-32768,  1058,  2040,  2041,  1821,  2952,
    2952,  2045,    89,  2952,  1828,  2952,   376,  2062,  2063,  2952,
    2067,   320,-32768,-32768,  2021,  2068,  2071,-32768,-32768,  1854,
  -32768,-32768,  1833,  2952,   732,  1848,-32768,-32768,-32768,-32768,
  -32768,-32768,  3867,  1851,  1867,  1868,-32768,-32768,-32768,  4635,
    3493,-32768,  1870,  3514,-32768,  4662,  2090,  2952,    89,  2091,
      59,  2092,-32768,-32768,-32768,-32768,  4689,-32768,  1875,  2106,
    2107,  2111,    59,-32768,  1869,  3535,  1887,  2952,-32768,  2113,
    2114,  2116,  2022,  2117,  1833,  1906,  2952,  2066,  1907,  2131,
    2617,  2132,  2133,  2134,  2136,  1921,    89,-32768,-32768,-32768,
    2150,-32768,-32768,  2952,  1929,  4716,-32768,-32768,-32768,-32768,
  -32768,  1930,-32768,  4743,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,  1932,-32768,  1941,  3898,  2952,  2160,  2120,
    2952,  2110,  1951,  2154,  2198,  2172,  2175,-32768,  3556,-32768,
      59,  3577,-32768,-32768,-32768,  2176,-32768,-32768,  2952,  2177,
    2952,  2242,-32768,  3598,-32768,  4770,-32768,  2952,  2073,  2180,
    3929,  2189,-32768,-32768,   917,  2194,  1976,-32768,  2202,  2205,
  -32768
};

static const short yypgoto[] =
{
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,  -258,-32768,-32768,  -297,  1276,-32768,
  -32768,  1278,  -444,-32768,  -480,-32768,  -386,  -466,  -487,-32768,
  -32768,-32768,-32768,  -417,-32768,  -532,-32768,  -867,-32768,  -403,
  -32768,-32768,-32768,-32768,-32768,-32768,  1514,-32768,  1174,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1658,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    1390,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -961,  -666,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768, -1352,-32768,-32768,-32768,  1063,   907,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   724,-32768,
  -32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1724,-32768,
    1629,-32768,  2128,-32768,  1736,  2010,  -271,-32768,   423,   678,
  -32768,-32768,   -25,  -524,  -511,  -139,   -15,  -106
};


#define	YYLAST		5110


static const short yytable[] =
{
     104,   530,   193,   245,   393,   773,   573,    40,   490,  1117,
     107,   420,   511,   606,   427,   428,   430,   586,  1424,   652,
     469,   632,   633,   324,   571,   325,   596,  1463,   641,   600,
    1054,     4,   604,  1469,   324,  1059,   325,   905,   324,  1475,
     325,     4,     6,   237,  1080,   629,   887,  1483,   436,   864,
     438,   375,     6,  1489,  1490,  1015,   525,   711,   888,   324,
     787,   325,   788,   376,   237,  1083,  1125,  1131,   564,   211,
     590,   809,  1317,   810,  1016,   169,   170,   171,     4,   585,
       6,   528,   567,     4,   595,    25,   982,   599,  1047,     6,
       4,   603,     4,   238,     6,   865,    25,   237,  1214,   952,
     476,     6,    -2,     6,    30,   292,   462,    31,   896,   953,
     898,   954,   476,  1425,   238,   476,     6,   212,   238,   564,
     301,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   476,   237,    32,   476,   238,   751,   293,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   518,  1364,  1365,   238,
     384,    33,   477,    34,   722,    35,   711,   711,   711,   711,
     789,    26,    27,   362,   477,    28,   385,   477,   443,   370,
      36,   371,    37,  1204,   238,   379,   386,   387,   194,   380,
     744,   372,  1366,    49,   388,   195,   389,   381,   891,   565,
     892,   893,   446,   377,  1367,   477,   489,   755,   477,   447,
      42,   889,    43,   195,  1017,   395,   726,   727,   728,   729,
     630,    41,  1240,   517,   760,   396,   190,    38,    44,   790,
     447,    39,   191,  1426,   470,   754,   572,   358,   628,   326,
     397,   519,   327,   711,   398,   199,   200,   359,   447,   955,
     326,   121,   906,   327,   239,   207,   208,   327,  1081,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   711,   711,   239,  1672,   711,   327,  1084,
    1126,  1132,  1677,   513,   213,   437,   651,   782,   783,   784,
     785,   572,   216,   217,   983,   657,   572,   220,   221,   572,
     506,   450,   451,   572,   224,   225,   229,   230,   239,  1118,
     572,   429,  1091,   452,   984,    26,    27,  1036,   108,    28,
     453,   454,   455,  1368,  1340,   456,   457,   364,   460,   104,
     239,   465,  1119,   119,   203,   204,   390,   566,   122,   107,
    1721,   373,   123,  1723,   195,  1038,   730,   382,  1045,   752,
    1724,   365,   124,   392,   125,   239,   -62,   366,   126,   947,
     894,   948,   322,   618,   899,   620,   621,   622,   949,    45,
     127,  1741,   624,   711,   636,   399,   413,   637,   138,   447,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     918,   919,   920,   921,   922,   923,   128,  1092,   928,   985,
    1076,    46,    47,    48,   -65,   521,   523,  1093,   406,   233,
     235,   195,  1027,   -62,   129,   957,   414,   958,   959,   142,
     638,     4,   130,   407,   932,  -605,     5,   972,   960,   561,
    1020,   706,     6,   933,   934,   935,  1646,   973,  1647,   131,
    1028,   862,   408,  1029,   961,   962,   963,  1064,   447,  1648,
    1037,  1039,  1040,  1041,  1065,  1129,   415,  1046,   416,   964,
    1502,  1649,   205,   206,     7,   271,   272,  1503,  1120,  1121,
       8,   974,   975,   976,   977,   978,   979,  1650,   333,   272,
     417,   132,  1452,     9,  1453,    10,   409,  1519,  1520,  1521,
    1522,  1523,  1524,  1289,  1062,    11,   133,   104,   104,    12,
     759,   134,   639,   640,   104,   642,   995,   107,   107,   950,
      13,   647,   996,   650,   107,   135,  1505,  1604,   653,   654,
     756,   757,   711,  1503,  1605,   136,   418,   139,    14,  1175,
     137,   711,   873,   874,   875,   876,   877,   878,   879,   880,
     881,  1290,   669,   882,   524,   195,   140,   883,   938,   141,
     939,   940,   941,   942,   943,   944,   142,  1137,   410,   997,
     884,  1651,  1142,  1291,  1292,   998,  1032,  1033,  1034,  1035,
     401,   965,   936,    15,  1212,    16,   143,   999,   966,   144,
    1048,   145,  1614,  1000,  1615,  1616,   192,   980,   146,  1272,
     147,   750,  1273,   272,   526,   148,  1652,  1215,  1236,  1619,
    1619,   619,   272,   402,  1274,  1275,  1276,   662,   663,  1182,
     403,  1184,    17,    18,    19,   149,  1293,   150,  1191,  1102,
    1103,  1104,  1105,  1106,  1107,  1108,  1617,   197,  1252,   421,
     422,   423,   424,   151,   665,   666,  1077,  1078,    62,    63,
      64,    65,   152,  1200,  1525,    67,    68,   168,   425,   667,
     668,  1294,  1206,   712,   713,  1296,   153,  1098,   154,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   155,   187,   188,   189,  1454,  1455,
    1456,   190,   715,   716,   228,  1154,  1297,   191,   945,  1277,
     243,   717,   718,  1298,  1299,   719,   720,   885,   856,  1021,
    1022,  1023,  1024,   724,   725,  1471,   156,  1634,  1280,   157,
     404,  1281,   158,  1330,   159,  1300,   733,   734,  1301,  1302,
     160,   872,   161,  1282,  1283,   737,   738,  1284,  1285,    67,
      68,   168,   745,   272,   162,  1618,   746,   272,   163,  1329,
     747,   272,   164,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,  1303,   202,
     165,  1067,   210,   215,   219,   223,   227,  1413,   232,   748,
     272,   166,  1333,   662,   767,   167,   185,   186,   187,   188,
     189,   233,  1243,  1428,   190,   868,   272,  1245,   246,   711,
     191,   869,   870,  1304,  1715,   802,   803,   804,   805,   806,
     807,   247,  1349,   808,  1171,   272,   289,  1351,  1286,  1353,
     290,   181,   182,   183,   184,   291,  1376,   185,   186,   187,
     188,   189,  1382,  1172,   272,   190,  1386,  1173,   272,  1389,
     302,   191,  1174,   272,  1392,   100,   308,  1371,   331,  1128,
     101,  1130,  1373,   102,   369,  1401,   296,   798,   799,   800,
     801,   320,   522,   802,   803,   804,   805,   806,   807,  1411,
     334,   808,   335,   804,   805,   806,   807,  1155,   412,   808,
    1208,   272,  1338,  1336,  1337,  1350,   195,  1352,   195,   363,
    1344,  1370,   195,   431,  1435,  1436,   432,  1438,   176,   177,
     178,   179,   180,   433,   181,   182,   183,   184,   439,  1635,
     185,   186,   187,   188,   189,  1372,   195,   434,   190,   440,
    1443,  1510,   272,   435,   191,  1512,   272,  1513,   272,   441,
    1541,   104,   444,  1544,  1556,  1557,  1610,  1611,   449,   100,
     458,   107,  1666,   272,   101,   645,   646,   102,   463,   466,
    1147,   467,  1149,  1383,  1151,   649,   471,   178,   179,   180,
     472,   181,   182,   183,   184,   473,   474,   185,   186,   187,
     188,   189,  1568,   825,  1169,   190,   475,   480,  1573,   482,
     481,   191,   483,   484,   487,    67,    68,    69,   485,   486,
     488,   491,   492,   493,    71,    72,    73,    74,  1420,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   494,   495,   496,   498,   499,   500,
     501,  1548,   503,   504,   825,   505,  1613,  1550,   507,   508,
     509,   510,   527,   512,  1552,   514,   515,   516,   531,   552,
    1457,    67,    68,   461,    70,   560,   559,   568,   570,   575,
      71,    72,    73,    74,   577,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     826,  1664,   827,   828,   829,   830,   578,   831,   832,   833,
     834,   835,   836,   238,   579,   582,   837,   584,   591,   838,
     592,   593,   839,   602,  1625,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   594,   322,   850,   607,   608,
     610,   612,   851,   613,   614,   852,   616,   617,   626,   623,
     625,   634,   635,  1701,   643,   648,   651,  1669,   655,   658,
     659,   826,   660,   827,   828,   829,   830,  1341,   831,   832,
     833,   834,   835,   836,   464,  1642,  1429,   837,  1431,  1432,
     838,   664,   670,   839,   741,   714,   840,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   721,   723,   850,   732,
     736,   739,   743,   851,   175,   100,   852,   742,   853,   749,
     101,   758,   764,   102,   765,   766,   781,   772,   774,   786,
     825,  1681,   244,   776,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1114,  1380,   777,   778,   779,  1384,   791,   811,  1387,
    1388,   818,   820,   821,  1390,   822,   823,  1393,  1394,  1395,
    1396,   857,   858,  1397,  1398,   859,  1400,  1755,  1402,  1713,
     860,  1403,   861,   900,   897,  1407,  1408,   867,  1410,  1543,
     863,   100,   901,   104,  1414,   902,   101,   706,   903,   102,
     808,   924,   925,   107,   239,   930,   986,   103,   987,   104,
      67,    68,   671,   994,   988,   989,   990,   991,   992,   107,
     993,  1002,  1003,  1004,    75,    76,    77,    78,    79,   672,
     673,   674,   675,   676,   677,   678,   679,   680,   681,   682,
     683,   684,   685,   686,   687,   688,   689,   690,   691,   692,
     693,   694,   695,   696,   697,  1001,  1025,   826,  1005,   827,
     828,   829,   830,  1683,   831,   832,   833,   834,   835,   836,
    1115,  1006,  1007,   837,  1011,  1690,   838,  1026,  1008,   839,
    1043,  1009,   840,   841,   842,   843,   844,   845,   846,   847,
     848,   849,  1044,  1042,   850,  1049,  1051,  1010,  1012,   851,
    1050,  1560,   852,  1052,  1030,  1564,  1053,  1055,  1057,  1061,
    1058,   698,  1508,  1060,  1068,  1511,   176,   177,   178,   179,
     180,   825,   181,   182,   183,   184,  1063,  1528,   185,   186,
     187,   188,   189,   864,  1071,  1072,   190,  1073,  1074,  1079,
    1075,  1086,   191,  1739,  1087,  1088,   104,  1542,  1624,   104,
    1089,  1090,  1094,  1095,  1096,  1097,   107,  1135,  1123,   107,
    1124,  1134,  1136,  1139,  1165,  1549,  1138,  1140,  1141,  1143,
    1612,  1144,  1145,  1146,  1156,  1157,   825,  1158,  1166,  1159,
    1472,  1559,  1160,  1561,  1161,  1162,  1163,  1164,   104,  1167,
    1168,  1170,  1177,  1176,   104,  1178,  1179,  1180,   107,  1181,
    1183,  1185,  1186,  1187,   107,  1584,  1585,  1586,  1587,  1588,
    1188,  1189,  1190,   699,  1199,  1658,  1192,  1193,  1194,   700,
     701,  1197,  1198,  1202,  1203,   702,  1207,  1209,   703,  1210,
    1211,   926,   927,   704,   705,  1213,   706,  1216,   826,  1218,
     827,   828,   829,   830,  1241,   831,   832,   833,   834,   835,
     836,  1219,   104,  1220,   837,  1221,  1222,   838,  1224,  1226,
     839,  1227,   107,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,  1228,  1632,   850,  1229,  1230,  1231,  1232,
     851,  1233,  1234,   852,  1639,  1640,  1235,  1237,  1643,  1238,
    1645,  1239,  1242,   826,  1656,   827,   828,   829,   830,  1244,
     831,   832,   833,   834,   835,   836,  1246,   104,  1665,   837,
    1247,  1248,   838,  1261,  1250,   839,  1251,   107,   840,   841,
     842,   843,   844,   845,   846,   847,   848,   849,  1254,  1255,
     850,  1256,  1680,  1257,  1259,   851,  1260,  1262,   852,  1263,
    1322,  1264,  1265,  1266,  1324,  1267,  1551,  1307,  1268,  1269,
    1316,  1270,  1695,  1306,  1335,  1308,  1309,  1310,  1345,   104,
    1346,  1703,  1312,  1347,  1348,  1311,  1356,  1325,  1313,   107,
    1357,  1327,  1314,   176,   177,   178,   179,   180,  1716,   181,
     182,   183,   184,  1358,  1326,   185,   186,   187,   188,   189,
    1328,  1315,  1477,   190,  1360,  1362,  1331,  1363,  1374,   191,
    1342,  1553,  1728,  1375,  1377,  1731,   310,   311,   312,   313,
     314,   315,   316,   317,   318,  1332,  1378,   195,  1334,    67,
      68,   671,  1355,  1743,  1381,  1745,  1379,  1404,  1385,  1391,
    1399,  1405,  1750,    75,    76,    77,    78,    79,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   360,    67,    68,    69,  1412,  1406,
    1409,  1415,  1416,  1417,    71,    72,    73,    74,  1418,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,  1419,  1478,  1427,    67,    68,    69,
      70,  1433,  1421,  1437,  1430,  1440,    71,    72,    73,    74,
     698,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    67,    68,    69,  1441,
    1445,  1446,  1444,  1447,  1448,    71,    72,    73,    74,  1449,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   176,   177,   178,   179,   180,
    1451,   181,   182,   183,   184,  1458,  1459,   185,   186,   187,
     188,   189,  1460,   179,   180,   190,   181,   182,   183,   184,
    1461,   191,   185,   186,   187,   188,   189,  1462,  1466,  1470,
     190,  1473,   699,  1465,  1467,  1476,   191,  1485,   700,   701,
    1488,  1495,  1496,  1498,   702,  1501,  1499,   703,  1500,  1506,
    1509,  1566,   704,   705,  1567,   706,  1507,  1515,  1516,   825,
    1518,  1514,  1527,  1530,  1532,  1517,   176,   177,   178,   179,
     180,  1529,   181,   182,   183,   184,  1531,  1533,   185,   186,
     187,   188,   189,  1536,  1537,   100,   190,  1538,  1539,  1540,
     101,  1545,   191,   102,  1546,  1547,  1558,  1574,  1562,  1563,
    1565,   103,  1569,   825,  1579,  1578,  1576,  1580,   176,   177,
     178,   179,   180,  1577,   181,   182,   183,   184,  1581,  1582,
     185,   186,   187,   188,   189,  1583,  1589,   100,   190,  1591,
    1592,  1593,   101,  1594,   191,   102,  1595,  1596,  1598,  1626,
    1601,  1599,  1600,   103,  1633,  1608,  1659,   825,  1602,   176,
     177,   178,   179,   180,  1603,   181,   182,   183,   184,  1622,
    1623,   185,   186,   187,   188,   189,   100,  1636,  1637,   190,
    1638,   101,  1641,   338,   102,   191,   826,  1644,   827,   828,
     829,   830,   103,   831,   832,   833,   834,   835,   836,  1654,
    1655,   825,   837,  1660,  1657,   838,  1661,  1663,   839,  1667,
     572,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,  1670,  1671,   850,  1675,  1679,  1682,  1684,   851,  1692,
     826,   852,   827,   828,   829,   830,  1686,   831,   832,   833,
     834,   835,   836,  1687,  1688,   825,   837,  1694,  1689,   838,
    1696,  1697,   839,  1698,  1700,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,  1702,  1705,   850,  1706,  1708,
    1709,  1710,   851,  1711,   826,   852,   827,   828,   829,   830,
    1712,   831,   832,   833,   834,   835,   836,  1714,  1717,   825,
     837,  1720,  1725,   838,  1554,  1726,   839,  1729,  1730,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,  1736,
    1733,   850,  1737,  1742,  1744,  1751,   851,  1752,   826,   852,
     827,   828,   829,   830,  1754,   831,   832,   833,   834,   835,
     836,  1756,  1759,   825,   837,  1760,  1757,   838,  1555,  1069,
     839,   969,  1070,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,  1195,   813,   850,   661,  1423,   611,  1320,
     851,  1571,   826,   852,   827,   828,   829,   830,   740,   831,
     832,   833,   834,   835,   836,   615,   321,   825,   837,     0,
       0,   838,  1699,     0,   839,     0,     0,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   236,  1479,   850,
       0,     0,     0,     0,   851,     0,   826,   852,   827,   828,
     829,   830,     0,   831,   832,   833,   834,   835,   836,  1480,
       0,     0,   837,     0,     0,   838,  1704,     0,   839,     0,
       0,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,     0,     0,   850,     0,     0,  1482,     0,   851,     0,
     826,   852,   827,   828,   829,   830,     0,   831,   832,   833,
     834,   835,   836,     0,     0,     0,   837,  1484,     0,   838,
    1732,     0,   839,     0,     0,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,     0,     0,   850,  1486,     0,
       0,     0,   851,     0,   826,   852,   827,   828,   829,   830,
       0,   831,   832,   833,   834,   835,   836,     0,     0,  1487,
     837,     0,     0,   838,  1734,     0,   839,     0,     0,   840,
     841,   842,   843,   844,   845,   846,   847,   848,   849,     0,
    1491,   850,     0,     0,     0,     0,   851,     0,     0,   852,
       0,     0,     0,     0,     0,    67,    68,   168,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1735,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,  1492,     0,     0,     0,     0,     0,
       0,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,  1746,   185,   186,   187,   188,   189,     0,     0,
       0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
     183,   184,  1494,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,  1627,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
    1628,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
     184,  1629,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
     183,   184,  1630,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,  1631,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
       0,     0,     0,     0,  1707,   100,     0,     0,     0,     0,
     101,     0,     0,   102,     0,     0,     0,     0,   464,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,     0,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
     179,   180,   191,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,    67,    68,
      69,     0,     0,   191,     0,     0,     0,    71,    72,    73,
      74,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    67,    68,    69,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
    1066,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    67,    68,   168,   459,
       0,  1614,     0,  1615,  1616,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    67,    68,   168,  1102,  1103,
    1104,  1105,  1106,  1107,  1108,  1617,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   520,    68,   168,  1100,    50,  1101,
       0,     0,    51,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   361,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1109,     0,    52,     0,     0,     0,     0,   100,    53,
       0,     0,     0,   101,     0,     0,   102,   532,     0,  1100,
    1205,  1101,    54,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,     0,     0,    57,     0,
       0,     0,     0,     0,  1621,     0,     0,   100,     0,    58,
       0,     0,   101,     0,     0,   102,  1102,  1103,  1104,  1105,
    1106,  1107,  1108,  1109,     0,     0,     0,    59,     0,     0,
       0,     0,   533,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,     0,     0,     0,
       0,   101,     0,     0,   102,   794,   795,   796,   797,   798,
     799,   800,   801,   534,     0,   802,   803,   804,   805,   806,
     807,     0,    60,   808,    61,     0,     0,     0,     0,     0,
    1110,     0,     0,     0,   535,   100,     0,     0,     0,     0,
     101,     0,     0,   102,     0,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,   101,
       0,     0,   102,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1113,     0,     0,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,     0,
       0,   191,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,     0,     0,   802,   803,   804,   805,   806,   807,
       0,     0,   808,   792,   793,   794,   795,   796,   797,   798,
     799,   800,   801,     0,     0,   802,   803,   804,   805,   806,
     807,     0,     0,   808,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,  1056,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,   336,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,   337,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
     179,   180,   191,   181,   182,   183,   184,   348,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
     178,   179,   180,   191,   181,   182,   183,   184,   355,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
     177,   178,   179,   180,   191,   181,   182,   183,   184,   356,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
     357,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
     184,   553,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
     183,   184,   554,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,  1019,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,  1271,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,  1279,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,  1288,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
     179,   180,   191,   181,   182,   183,   184,  1442,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
     178,   179,   180,   191,   181,   182,   183,   184,  1464,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
     177,   178,   179,   180,   191,   181,   182,   183,   184,  1468,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
     176,   177,   178,   179,   180,   191,   181,   182,   183,   184,
    1474,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,   176,   177,   178,   179,   180,   191,   181,   182,   183,
     184,  1481,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,   176,   177,   178,   179,   180,   191,   181,   182,
     183,   184,  1497,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,   176,   177,   178,   179,   180,   191,   181,
     182,   183,   184,  1609,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,   176,   177,   178,   179,   180,   191,
     181,   182,   183,   184,  1674,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,   176,   177,   178,   179,   180,
     191,   181,   182,   183,   184,  1676,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,   176,   177,   178,   179,
     180,   191,   181,   182,   183,   184,  1693,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,   176,   177,   178,
     179,   180,   191,   181,   182,   183,   184,  1738,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,   176,   177,
     178,   179,   180,   191,   181,   182,   183,   184,  1740,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,   176,
     177,   178,   179,   180,   191,   181,   182,   183,   184,  1747,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,     0,     0,   191,     0,     0,     0,   562,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     627,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,     0,     0,   191,     0,     0,
       0,   656,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,     0,     0,   191,     0,
       0,     0,  1031,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,     0,     0,   191,
       0,     0,     0,  1323,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,     0,     0,
     191,     0,     0,     0,  1572,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,     0,
       0,   191,     0,     0,     0,  1575,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
       0,     0,   191,     0,     0,     0,  1590,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,     0,     0,   191,     0,     0,     0,  1668,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,     0,     0,   191,     0,     0,     0,  1727,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,     0,     0,   191,     0,     0,     0,  1753,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,   270,     0,     0,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,   339,     0,   191,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,   340,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,   341,     0,   191,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,   342,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,   343,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,   344,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,   345,     0,   191,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
     346,     0,   191,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,   347,     0,   191,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,   349,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,   350,     0,   191,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,   351,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,   352,     0,   191,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,   353,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,   354,
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
       0,     0,     0,   190,     0,     0,     0,   558,     0,   191,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,   762,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,   763,     0,   191,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,     0,     0,   185,   186,   187,   188,
     189,     0,     0,     0,   190,     0,     0,     0,   771,     0,
     191,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,     0,     0,   185,   186,   187,   188,   189,     0,     0,
       0,   190,     0,     0,     0,  1597,     0,   191,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,     0,     0,
     185,   186,   187,   188,   189,     0,     0,     0,   190,     0,
       0,     0,  1607,     0,   191,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,     0,     0,   185,   186,   187,
     188,   189,     0,     0,     0,   190,     0,     0,     0,  1673,
       0,   191,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,     0,     0,   185,   186,   187,   188,   189,     0,
       0,     0,   190,     0,     0,     0,  1678,     0,   191,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,     0,
       0,   185,   186,   187,   188,   189,     0,     0,     0,   190,
       0,     0,     0,  1685,     0,   191,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   185,   186,
     187,   188,   189,     0,     0,     0,   190,     0,     0,     0,
    1718,     0,   191,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,     0,     0,   185,   186,   187,   188,   189,
       0,     0,     0,   190,     0,     0,     0,  1722,     0,   191,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
       0,     0,   185,   186,   187,   188,   189,     0,     0,     0,
     190,     0,     0,     0,  1749,     0,   191,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,     0,     0,   185,
     186,   187,   188,   189,     0,     0,     0,   190,     0,     0,
       0,     0,     0,   191,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,     0,     0,   802,   803,   804,   805,
     806,   807,     0,     0,   808,     0,     0,     0,  1339,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   801,     0,
       0,   802,   803,   804,   805,   806,   807,     0,     0,   808,
       0,   904,   792,   793,   794,   795,   796,   797,   798,   799,
     800,   801,     0,     0,   802,   803,   804,   805,   806,   807,
       0,     0,   808,   795,   796,   797,   798,   799,   800,   801,
       0,     0,   802,   803,   804,   805,   806,   807,     0,     0,
     808
};

static const short yycheck[] =
{
      25,   445,   108,   142,   301,   671,   472,     5,   394,   970,
      25,   308,   429,   500,   311,   312,   313,   483,     5,   551,
       5,   532,   533,     3,     7,     5,   492,  1379,   539,   495,
     897,     5,   498,  1385,     3,   902,     5,     5,     3,  1391,
       5,     5,    16,     5,     5,   525,    55,  1399,   319,     5,
     321,    68,    16,  1405,  1406,    61,   442,   581,    67,     3,
       3,     5,     5,    80,     5,     5,     5,     5,     5,     5,
     487,   226,     5,   228,    80,   100,   101,   102,     5,     7,
      16,    50,   468,     5,     7,   199,     5,     7,    50,    16,
       5,     7,     5,    55,    16,    51,   199,     5,     7,    70,
      11,    16,     0,    16,   223,     5,   364,   229,   774,    80,
     776,    82,    11,   100,    55,    11,    16,    53,    55,     5,
     223,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,    11,     5,   229,    11,    55,   628,    49,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   437,    64,    65,    55,
      54,   229,    83,   229,   591,   229,   700,   701,   702,   703,
     123,     5,     6,   289,    83,     9,    70,    83,   327,    68,
     229,    70,   229,  1060,    55,    68,    80,    81,   224,    72,
     617,    80,    99,     7,    88,   231,    90,    80,    68,   467,
      70,    71,   224,   230,   111,    83,   224,   634,    83,   231,
       5,   230,     7,   231,   230,    70,   100,   101,   102,   103,
     527,   229,  1099,   224,   651,    80,   220,   229,    23,   182,
     231,   229,   226,   230,   229,   631,   229,   272,   213,   229,
      95,   224,   232,   777,    99,   229,   230,   272,   231,   230,
     229,     7,   230,   232,   226,   229,   230,   232,   229,   793,
     794,   795,   796,   797,   798,   799,   800,   801,   802,   803,
     804,   805,   806,   807,   808,   226,  1638,   811,   232,   229,
     229,   229,  1644,   432,   230,   320,   229,   700,   701,   702,
     703,   229,   229,   230,   223,   563,   229,   229,   230,   229,
     416,   336,   337,   229,   229,   230,   229,   230,   226,    70,
     229,   229,     5,   348,   223,     5,     6,   223,   223,     9,
     355,   356,   357,   230,  1201,   360,   361,   199,   363,   364,
     226,   366,    93,   161,   229,   230,   230,   224,     7,   364,
    1702,   230,     7,  1705,   231,   223,   230,   230,   223,   630,
    1712,   223,     7,   224,     7,   226,   223,   229,     7,    80,
     230,    82,   229,   512,   777,   514,   515,   516,    89,   164,
       7,  1733,   224,   907,   208,   230,    80,   211,   223,   231,
     793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
     803,   804,   805,   806,   807,   808,     7,    90,   811,   826,
     942,   196,   197,   198,   224,   440,   441,   100,    80,     5,
       6,   231,   866,   223,     7,    67,   120,    69,    70,   229,
     536,     5,     7,    95,    82,   223,    10,    70,    80,   464,
     857,   229,    16,    91,    92,    93,    70,    80,    72,     7,
     867,   224,   114,   870,    96,    97,    98,   224,   231,    83,
     877,   878,   879,   880,   231,   976,   160,   884,   162,   111,
     224,    95,   229,   230,    48,   230,   231,   231,   229,   230,
      54,   114,   115,   116,   117,   118,   119,   111,   230,   231,
     184,     7,  1359,    67,  1361,    69,   158,    73,    74,    75,
      76,    77,    78,    72,   907,    79,     7,   532,   533,    83,
     649,     7,   537,   538,   539,   540,   223,   532,   533,   230,
      94,   546,   229,   548,   539,     7,   224,   224,   553,   554,
     636,   637,  1056,   231,   231,     7,   230,   223,   112,  1026,
       7,  1065,    55,    56,    57,    58,    59,    60,    61,    62,
      63,   120,   577,    66,   230,   231,   223,    70,    80,   223,
      82,    83,    84,    85,    86,    87,   229,   984,   230,   223,
      83,   195,   989,   142,   143,   229,   873,   874,   875,   876,
      80,   223,   230,   157,  1071,   159,     7,   223,   230,   223,
     887,   223,    67,   229,    69,    70,     7,   230,   223,   120,
     223,   626,   123,   231,   232,   223,   230,  1073,  1095,  1570,
    1571,   230,   231,   113,   135,   136,   137,   229,   230,  1036,
     120,  1038,   196,   197,   198,   223,   195,   223,  1045,   104,
     105,   106,   107,   108,   109,   110,   111,   230,  1125,   212,
     213,   214,   215,   223,   229,   230,   943,   944,   163,   164,
     165,   166,   223,  1056,   230,     3,     4,     5,   231,   229,
     230,   230,  1065,   229,   230,    72,   223,   964,   223,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   223,   214,   215,   216,  1364,  1365,
    1366,   220,   229,   230,     5,  1002,   113,   226,   230,   230,
       6,   229,   230,   120,   121,   229,   230,   230,   743,   858,
     859,   860,   861,   229,   230,     7,   223,  1594,   120,   223,
     230,   123,   223,  1177,   223,   142,   229,   230,   145,   146,
     223,   766,   223,   135,   136,   229,   230,   139,   140,     3,
       4,     5,   230,   231,   223,   230,   230,   231,   223,  1176,
     230,   231,   223,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   195,   111,
     223,   930,   114,   115,   116,   117,   118,  1308,   120,   230,
     231,   223,  1188,   229,   230,   223,   212,   213,   214,   215,
     216,     5,  1109,  1324,   220,   230,   231,  1114,     5,  1343,
     226,   230,   231,   230,  1691,   212,   213,   214,   215,   216,
     217,     5,  1218,   220,   230,   231,   231,  1223,   230,  1225,
       7,   206,   207,   208,   209,     5,  1263,   212,   213,   214,
     215,   216,  1269,   230,   231,   220,  1273,   230,   231,  1276,
     223,   226,   230,   231,  1281,   213,   223,  1253,   223,   975,
     218,   977,  1258,   221,   223,  1292,   198,   206,   207,   208,
     209,   231,   230,   212,   213,   214,   215,   216,   217,  1306,
     224,   220,   231,   214,   215,   216,   217,  1003,   229,   220,
     230,   231,  1199,   229,   230,   230,   231,   230,   231,   199,
    1207,   230,   231,   229,  1331,  1332,   229,  1334,   200,   201,
     202,   203,   204,   229,   206,   207,   208,   209,   230,  1595,
     212,   213,   214,   215,   216,   230,   231,   229,   220,     8,
    1343,   230,   231,   229,   226,   230,   231,   230,   231,   229,
    1461,   976,   231,  1464,   229,   230,   230,   231,     5,   213,
     224,   976,   230,   231,   218,   542,   543,   221,     3,   199,
     995,   199,   997,  1270,   999,   229,     5,   202,   203,   204,
       5,   206,   207,   208,   209,   229,     5,   212,   213,   214,
     215,   216,  1503,     5,  1019,   220,   229,     5,  1509,     5,
     229,   226,     5,   229,   199,     3,     4,     5,   229,   229,
     224,     5,     5,   229,    12,    13,    14,    15,  1315,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   229,     5,   229,     5,   229,     5,
       5,  1468,     5,   229,     5,     5,  1567,  1474,     5,   224,
       5,   178,   111,   229,  1481,   229,   229,   229,     7,   224,
    1367,     3,     4,     5,     6,   224,     7,   229,     7,     7,
      12,    13,    14,    15,   223,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     122,  1622,   124,   125,   126,   127,   223,   129,   130,   131,
     132,   133,   134,    55,     7,     7,   138,     7,   199,   141,
       7,     5,   144,   229,  1578,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     7,   229,   159,     7,   230,
       7,     7,   164,     7,     7,   167,     5,   231,     8,     7,
       7,   229,     5,  1674,     5,     5,   229,  1633,   199,     7,
       7,   122,     5,   124,   125,   126,   127,  1202,   129,   130,
     131,   132,   133,   134,   226,  1602,  1325,   138,  1327,  1328,
     141,     7,     5,   144,   230,     7,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     7,     7,   159,     7,
       7,     7,   229,   164,     8,   213,   167,   231,   230,     7,
     218,     6,    52,   221,     7,   229,     5,   224,   223,     3,
       5,  1648,   230,   223,   104,   105,   106,   107,   108,   109,
     110,   111,  1267,   223,   223,   223,  1271,     5,   223,  1274,
    1275,     7,   229,   229,  1279,   229,   229,  1282,  1283,  1284,
    1285,   231,   229,  1288,  1289,   229,  1291,  1754,  1293,  1686,
     229,  1296,   229,     5,   223,  1300,  1301,   231,  1303,   230,
     224,   213,     5,  1308,  1309,   223,   218,   229,   208,   221,
     220,     3,     3,  1308,   226,   229,   223,   229,   223,  1324,
       3,     4,     5,     7,   223,   223,   223,   223,   223,  1324,
     223,   223,   223,   223,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   229,     7,   122,   223,   124,
     125,   126,   127,  1650,   129,   130,   131,   132,   133,   134,
     230,   229,   229,   138,   229,  1662,   141,     5,   223,   144,
       5,   223,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     5,   229,   159,     5,     5,   223,   223,   164,
     229,  1497,   167,     5,   223,  1501,   224,   224,   223,   230,
     224,   104,  1427,   223,     5,  1430,   200,   201,   202,   203,
     204,     5,   206,   207,   208,   209,   224,  1442,   212,   213,
     214,   215,   216,     5,     5,     5,   220,     5,     5,     5,
     229,     5,   226,  1730,     5,     5,  1461,  1462,  1577,  1464,
       5,     5,     5,     5,     3,     3,  1461,     7,     5,  1464,
       5,     5,     5,     5,   223,   230,     7,     5,     5,     5,
    1566,     5,     5,     5,     5,     5,     5,     5,   223,     5,
       7,  1496,     5,  1498,     5,     5,     5,     5,  1503,   229,
       5,   230,   226,   231,  1509,     7,     7,     7,  1503,     7,
       7,     7,     7,     7,  1509,  1520,  1521,  1522,  1523,  1524,
       3,     7,     7,   206,   231,  1611,     7,     7,     7,   212,
     213,     7,     7,   229,   224,   218,   223,     7,   221,     7,
       7,   224,   225,   226,   227,     7,   229,   229,   122,     5,
     124,   125,   126,   127,     5,   129,   130,   131,   132,   133,
     134,     7,  1567,     7,   138,     7,     7,   141,     7,     7,
     144,     7,  1567,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     7,  1589,   159,     7,     7,     7,     7,
     164,     7,     7,   167,  1599,  1600,     7,     7,  1603,     7,
    1605,     7,     5,   122,  1609,   124,   125,   126,   127,   223,
     129,   130,   131,   132,   133,   134,   223,  1622,  1623,   138,
       5,     5,   141,   224,     7,   144,     7,  1622,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     7,     7,
     159,     7,  1647,     7,     7,   164,     7,   224,   167,   231,
       7,   231,   231,   224,   229,   231,   230,   224,   231,   231,
     224,   231,  1667,   231,     7,   231,   231,   230,     7,  1674,
       7,  1676,   231,    95,     7,   230,     7,   229,   231,  1674,
       7,   229,   231,   200,   201,   202,   203,   204,  1693,   206,
     207,   208,   209,     7,   230,   212,   213,   214,   215,   216,
     229,   231,     7,   220,     7,     7,   231,     7,     7,   226,
     224,   230,  1717,     7,     5,  1720,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   231,     5,   231,   231,     3,
       4,     5,   224,  1738,     5,  1740,   229,     5,   229,   229,
     229,   229,  1747,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     8,     3,     4,     5,     7,   229,
     229,     7,     7,     5,    12,    13,    14,    15,     5,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     5,     7,   229,     3,     4,     5,
       6,   230,     7,     3,   229,   224,    12,    13,    14,    15,
     104,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     3,     4,     5,   224,
       5,     5,   224,     5,     5,    12,    13,    14,    15,   223,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,   200,   201,   202,   203,   204,
       7,   206,   207,   208,   209,     5,     5,   212,   213,   214,
     215,   216,   224,   203,   204,   220,   206,   207,   208,   209,
     231,   226,   212,   213,   214,   215,   216,   231,   224,     7,
     220,     7,   206,   231,   231,     7,   226,     7,   212,   213,
       7,   224,   231,   231,   218,   231,   224,   221,   224,   229,
     231,   179,   226,   227,   182,   229,   229,   224,   224,     5,
     224,   231,   224,     7,     5,   230,   200,   201,   202,   203,
     204,   230,   206,   207,   208,   209,   230,     7,   212,   213,
     214,   215,   216,     7,     7,   213,   220,     7,     7,     7,
     218,     5,   226,   221,     7,     5,     7,   230,     7,     7,
       7,   229,     7,     5,     7,   226,   230,     7,   200,   201,
     202,   203,   204,   229,   206,   207,   208,   209,     7,     7,
     212,   213,   214,   215,   216,     5,   229,   213,   220,    94,
       7,   224,   218,   231,   226,   221,   231,   224,   128,     7,
     224,   231,   231,   229,     5,   224,     5,     5,   231,   200,
     201,   202,   203,   204,   231,   206,   207,   208,   209,   231,
     229,   212,   213,   214,   215,   216,   213,     7,     7,   220,
     229,   218,     7,   224,   221,   226,   122,   229,   124,   125,
     126,   127,   229,   129,   130,   131,   132,   133,   134,     7,
       7,     5,   138,     5,     7,   141,     5,   223,   144,   231,
     229,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   224,   224,   159,   224,     5,     5,     5,   164,   230,
     122,   167,   124,   125,   126,   127,   231,   129,   130,   131,
     132,   133,   134,     7,     7,     5,   138,   230,     7,   141,
       7,     7,   144,     7,     7,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   229,   229,   159,     7,     7,
       7,     7,   164,     7,   122,   167,   124,   125,   126,   127,
     229,   129,   130,   131,   132,   133,   134,     7,   229,     5,
     138,   231,   230,   141,   230,   224,   144,     7,    48,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     7,
     229,   159,     7,     7,     7,   112,   164,     7,   122,   167,
     124,   125,   126,   127,     5,   129,   130,   131,   132,   133,
     134,     7,     0,     5,   138,     0,   230,   141,   230,   933,
     144,   821,   934,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,  1049,   710,   159,   568,  1320,   504,  1166,
     164,  1507,   122,   167,   124,   125,   126,   127,   609,   129,
     130,   131,   132,   133,   134,   509,   236,     5,   138,    -1,
      -1,   141,   230,    -1,   144,    -1,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   139,     7,   159,
      -1,    -1,    -1,    -1,   164,    -1,   122,   167,   124,   125,
     126,   127,    -1,   129,   130,   131,   132,   133,   134,     7,
      -1,    -1,   138,    -1,    -1,   141,   230,    -1,   144,    -1,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,    -1,    -1,   159,    -1,    -1,     7,    -1,   164,    -1,
     122,   167,   124,   125,   126,   127,    -1,   129,   130,   131,
     132,   133,   134,    -1,    -1,    -1,   138,     7,    -1,   141,
     230,    -1,   144,    -1,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    -1,    -1,   159,     7,    -1,
      -1,    -1,   164,    -1,   122,   167,   124,   125,   126,   127,
      -1,   129,   130,   131,   132,   133,   134,    -1,    -1,     7,
     138,    -1,    -1,   141,   230,    -1,   144,    -1,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,    -1,
       7,   159,    -1,    -1,    -1,    -1,   164,    -1,    -1,   167,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     7,    -1,    -1,    -1,    -1,    -1,
      -1,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,    -1,   230,   212,   213,   214,   215,   216,    -1,    -1,
      -1,   220,   200,   201,   202,   203,   204,   226,   206,   207,
     208,   209,     7,    -1,   212,   213,   214,   215,   216,    -1,
      -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,   226,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,     7,
      -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,   220,
     200,   201,   202,   203,   204,   226,   206,   207,   208,   209,
       7,    -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,
     220,   200,   201,   202,   203,   204,   226,   206,   207,   208,
     209,     7,    -1,   212,   213,   214,   215,   216,    -1,    -1,
      -1,   220,   200,   201,   202,   203,   204,   226,   206,   207,
     208,   209,     7,    -1,   212,   213,   214,   215,   216,    -1,
      -1,    -1,   220,   200,   201,   202,   203,   204,   226,   206,
     207,   208,   209,     7,    -1,   212,   213,   214,   215,   216,
      -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,   226,
      -1,    -1,    -1,    -1,     7,   213,    -1,    -1,    -1,    -1,
     218,    -1,    -1,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,   201,   202,
     203,   204,    -1,   206,   207,   208,   209,    -1,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,    -1,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,
      -1,   226,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,   213,   214,   215,   216,    -1,
      -1,    -1,   220,   200,   201,   202,   203,   204,   226,   206,
     207,   208,   209,    -1,    -1,   212,   213,   214,   215,   216,
      -1,    -1,    -1,   220,   200,   201,   202,   203,   204,   226,
     206,   207,   208,   209,    -1,    -1,   212,   213,   214,   215,
     216,    -1,    -1,    -1,   220,   200,   201,   202,   203,   204,
     226,   206,   207,   208,   209,    -1,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,   200,   201,   202,   203,
     204,   226,   206,   207,   208,   209,    -1,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,   220,   200,   201,   202,
     203,   204,   226,   206,   207,   208,   209,    -1,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,     3,     4,
       5,    -1,    -1,   226,    -1,    -1,    -1,    12,    13,    14,
      15,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,    15,
      55,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     3,     4,     5,     6,
      -1,    67,    -1,    69,    70,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     3,     4,     5,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,     3,     4,     5,    67,     3,    69,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     8,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,    48,    -1,    -1,    -1,    -1,   213,    54,
      -1,    -1,    -1,   218,    -1,    -1,   221,    61,    -1,    67,
       8,    69,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,   230,    -1,    -1,   213,    -1,    94,
      -1,    -1,   218,    -1,    -1,   221,   104,   105,   106,   107,
     108,   109,   110,   111,    -1,    -1,    -1,   112,    -1,    -1,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
      -1,   218,    -1,    -1,   221,   202,   203,   204,   205,   206,
     207,   208,   209,   147,    -1,   212,   213,   214,   215,   216,
     217,    -1,   157,   220,   159,    -1,    -1,    -1,    -1,    -1,
     230,    -1,    -1,    -1,   168,   213,    -1,    -1,    -1,    -1,
     218,    -1,    -1,   221,    -1,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,   218,
      -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   230,    -1,    -1,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,    -1,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,
      -1,   226,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,    -1,   212,   213,   214,   215,   216,   217,
      -1,    -1,   220,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,    -1,    -1,   212,   213,   214,   215,   216,
     217,    -1,    -1,   220,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,   231,    -1,   212,   213,   214,   215,
     216,    -1,    -1,    -1,   220,   200,   201,   202,   203,   204,
     226,   206,   207,   208,   209,   231,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,   200,   201,   202,   203,
     204,   226,   206,   207,   208,   209,   231,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,   220,   200,   201,   202,
     203,   204,   226,   206,   207,   208,   209,   231,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,   200,   201,
     202,   203,   204,   226,   206,   207,   208,   209,   231,    -1,
     212,   213,   214,   215,   216,    -1,    -1,    -1,   220,   200,
     201,   202,   203,   204,   226,   206,   207,   208,   209,   231,
      -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,   220,
     200,   201,   202,   203,   204,   226,   206,   207,   208,   209,
     231,    -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,
     220,   200,   201,   202,   203,   204,   226,   206,   207,   208,
     209,   231,    -1,   212,   213,   214,   215,   216,    -1,    -1,
      -1,   220,   200,   201,   202,   203,   204,   226,   206,   207,
     208,   209,   231,    -1,   212,   213,   214,   215,   216,    -1,
      -1,    -1,   220,   200,   201,   202,   203,   204,   226,   206,
     207,   208,   209,   231,    -1,   212,   213,   214,   215,   216,
      -1,    -1,    -1,   220,   200,   201,   202,   203,   204,   226,
     206,   207,   208,   209,   231,    -1,   212,   213,   214,   215,
     216,    -1,    -1,    -1,   220,   200,   201,   202,   203,   204,
     226,   206,   207,   208,   209,   231,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,   200,   201,   202,   203,
     204,   226,   206,   207,   208,   209,   231,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,   220,   200,   201,   202,
     203,   204,   226,   206,   207,   208,   209,   231,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,   200,   201,
     202,   203,   204,   226,   206,   207,   208,   209,   231,    -1,
     212,   213,   214,   215,   216,    -1,    -1,    -1,   220,   200,
     201,   202,   203,   204,   226,   206,   207,   208,   209,   231,
      -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,   220,
     200,   201,   202,   203,   204,   226,   206,   207,   208,   209,
     231,    -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,
     220,   200,   201,   202,   203,   204,   226,   206,   207,   208,
     209,   231,    -1,   212,   213,   214,   215,   216,    -1,    -1,
      -1,   220,   200,   201,   202,   203,   204,   226,   206,   207,
     208,   209,   231,    -1,   212,   213,   214,   215,   216,    -1,
      -1,    -1,   220,   200,   201,   202,   203,   204,   226,   206,
     207,   208,   209,   231,    -1,   212,   213,   214,   215,   216,
      -1,    -1,    -1,   220,   200,   201,   202,   203,   204,   226,
     206,   207,   208,   209,   231,    -1,   212,   213,   214,   215,
     216,    -1,    -1,    -1,   220,   200,   201,   202,   203,   204,
     226,   206,   207,   208,   209,   231,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,   200,   201,   202,   203,
     204,   226,   206,   207,   208,   209,   231,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,   220,   200,   201,   202,
     203,   204,   226,   206,   207,   208,   209,   231,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,   200,   201,
     202,   203,   204,   226,   206,   207,   208,   209,   231,    -1,
     212,   213,   214,   215,   216,    -1,    -1,    -1,   220,   200,
     201,   202,   203,   204,   226,   206,   207,   208,   209,   231,
      -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,   220,
      -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,   230,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,
     220,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
     230,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,    -1,    -1,   212,   213,   214,   215,   216,    -1,    -1,
      -1,   220,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,   230,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,   213,   214,   215,   216,    -1,
      -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,   230,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,    -1,    -1,   212,   213,   214,   215,   216,
      -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,   226,
      -1,    -1,    -1,   230,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,   213,   214,   215,
     216,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,   230,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,    -1,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,   230,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,   226,    -1,    -1,    -1,   230,   200,   201,   202,
     203,   204,    -1,   206,   207,   208,   209,    -1,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,   226,    -1,    -1,    -1,   230,   200,   201,
     202,   203,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,   213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,   230,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,    -1,
      -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,   220,
      -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,   230,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,
     220,    -1,   222,    -1,    -1,    -1,   226,   200,   201,   202,
     203,   204,    -1,   206,   207,   208,   209,    -1,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,
      -1,   224,    -1,   226,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,   213,   214,   215,
     216,    -1,    -1,    -1,   220,    -1,    -1,    -1,   224,    -1,
     226,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,    -1,    -1,   212,   213,   214,   215,   216,    -1,    -1,
      -1,   220,    -1,    -1,    -1,   224,    -1,   226,   200,   201,
     202,   203,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,   213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,
      -1,    -1,   224,    -1,   226,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,    -1,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,   224,
      -1,   226,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,   213,   214,   215,   216,    -1,
      -1,    -1,   220,    -1,    -1,    -1,   224,    -1,   226,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,    -1,
      -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,   220,
      -1,    -1,    -1,   224,    -1,   226,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,
     224,    -1,   226,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,    -1,    -1,   212,   213,   214,   215,   216,
      -1,    -1,    -1,   220,    -1,    -1,    -1,   224,    -1,   226,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,
     220,    -1,    -1,    -1,   224,    -1,   226,   200,   201,   202,
     203,   204,    -1,   206,   207,   208,   209,    -1,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,
      -1,   224,    -1,   226,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,   213,   214,   215,
     216,    -1,    -1,    -1,   220,    -1,    -1,    -1,   224,    -1,
     226,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,    -1,    -1,   212,   213,   214,   215,   216,    -1,    -1,
      -1,   220,    -1,    -1,    -1,   224,    -1,   226,   200,   201,
     202,   203,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,   213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,
      -1,    -1,   224,    -1,   226,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,    -1,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,   224,
      -1,   226,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,   213,   214,   215,   216,    -1,
      -1,    -1,   220,    -1,    -1,    -1,   224,    -1,   226,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,    -1,
      -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,   220,
      -1,    -1,    -1,   224,    -1,   226,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,
     224,    -1,   226,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,    -1,    -1,   212,   213,   214,   215,   216,
      -1,    -1,    -1,   220,    -1,    -1,    -1,   224,    -1,   226,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,
     220,    -1,    -1,    -1,   224,    -1,   226,   200,   201,   202,
     203,   204,    -1,   206,   207,   208,   209,    -1,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,
      -1,   224,    -1,   226,   200,   201,   202,   203,   204,    -1,
     206,   207,   208,   209,    -1,    -1,   212,   213,   214,   215,
     216,    -1,    -1,    -1,   220,    -1,    -1,    -1,   224,    -1,
     226,   200,   201,   202,   203,   204,    -1,   206,   207,   208,
     209,    -1,    -1,   212,   213,   214,   215,   216,    -1,    -1,
      -1,   220,    -1,    -1,    -1,   224,    -1,   226,   200,   201,
     202,   203,   204,    -1,   206,   207,   208,   209,    -1,    -1,
     212,   213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,
      -1,    -1,   224,    -1,   226,   200,   201,   202,   203,   204,
      -1,   206,   207,   208,   209,    -1,    -1,   212,   213,   214,
     215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,   224,
      -1,   226,   200,   201,   202,   203,   204,    -1,   206,   207,
     208,   209,    -1,    -1,   212,   213,   214,   215,   216,    -1,
      -1,    -1,   220,    -1,    -1,    -1,   224,    -1,   226,   200,
     201,   202,   203,   204,    -1,   206,   207,   208,   209,    -1,
      -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,   220,
      -1,    -1,    -1,   224,    -1,   226,   200,   201,   202,   203,
     204,    -1,   206,   207,   208,   209,    -1,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,    -1,
     224,    -1,   226,   200,   201,   202,   203,   204,    -1,   206,
     207,   208,   209,    -1,    -1,   212,   213,   214,   215,   216,
      -1,    -1,    -1,   220,    -1,    -1,    -1,   224,    -1,   226,
     200,   201,   202,   203,   204,    -1,   206,   207,   208,   209,
      -1,    -1,   212,   213,   214,   215,   216,    -1,    -1,    -1,
     220,    -1,    -1,    -1,   224,    -1,   226,   200,   201,   202,
     203,   204,    -1,   206,   207,   208,   209,    -1,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,   226,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,    -1,    -1,   212,   213,   214,   215,
     216,   217,    -1,    -1,   220,    -1,    -1,    -1,   224,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,    -1,
      -1,   212,   213,   214,   215,   216,   217,    -1,    -1,   220,
      -1,   222,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,    -1,    -1,   212,   213,   214,   215,   216,   217,
      -1,    -1,   220,   203,   204,   205,   206,   207,   208,   209,
      -1,    -1,   212,   213,   214,   215,   216,   217,    -1,    -1,
     220
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
#line 323 "GetDP.y"
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
#line 357 "GetDP.y"
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
#line 398 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 421 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 436 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 438 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 440 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 442 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 444 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 446 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 448 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 450 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 452 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 454 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 456 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 458 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 460 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 462 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 464 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 466 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 468 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 470 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 472 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 474 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 476 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 484 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 501 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 508 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 511 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 514 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 516 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 52:
#line 530 "GetDP.y"
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
#line 539 "GetDP.y"
{
      Group_S.MovingBand2D = (struct MovingBand2D *)Malloc(sizeof(struct MovingBand2D)) ;
      Group_S.MovingBand2D->InitialList1 = yyvsp[0].l ; 
      Group_S.MovingBand2D->ExtendedList1 = NULL ; 
      Group_S.MovingBand2D->PhysNum = yyvsp[-7].i ; 
    ;
    break;}
case 54:
#line 546 "GetDP.y"
{
      Group_S.MovingBand2D->InitialList2 = yyvsp[-4].l ; 
      Add_Group(&Group_S, yyvsp[-17].c, 0, 0) ;
      Group_S.MovingBand2D->Period2 = (int)yyvsp[-2].d ; 
    ;
    break;}
case 55:
#line 556 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 56:
#line 561 "GetDP.y"
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
#line 573 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 58:
#line 582 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 59:
#line 593 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 60:
#line 598 "GetDP.y"
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
#line 635 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 62:
#line 638 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 63:
#line 650 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 64:
#line 652 "GetDP.y"
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
#line 668 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 66:
#line 671 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 67:
#line 674 "GetDP.y"
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
#line 725 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 69:
#line 738 "GetDP.y"
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
#line 762 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 71:
#line 769 "GetDP.y"
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
#line 782 "GetDP.y"
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
#line 800 "GetDP.y"
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
#line 823 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 75:
#line 827 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; j = (int)yyvsp[-1].l ; List_Add(yyval.l = ListOfInt_L, &j) ; ;
    break;}
case 76:
#line 830 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].d)?(j<=yyvsp[0].d):(j>=yyvsp[0].d) ; (yyvsp[-2].i<yyvsp[0].d)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 77:
#line 839 "GetDP.y"
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
#line 853 "GetDP.y"
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
#line 887 "GetDP.y"
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
#line 900 "GetDP.y"
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
#line 924 "GetDP.y"
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
#line 934 "GetDP.y"
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
#line 956 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 87:
#line 961 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 88:
#line 962 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 89:
#line 967 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 93:
#line 986 "GetDP.y"
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
#line 1006 "GetDP.y"
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
#line 1057 "GetDP.y"
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
#line 1077 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 99:
#line 1083 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 100:
#line 1089 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 101:
#line 1092 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 102:
#line 1099 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 104:
#line 1110 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 105:
#line 1113 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 106:
#line 1119 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 107:
#line 1123 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 109:
#line 1135 "GetDP.y"
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
#line 1148 "GetDP.y"
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
#line 1162 "GetDP.y"
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
#line 1177 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 113:
#line 1183 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 114:
#line 1189 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1195 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1201 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1207 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1213 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1219 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1225 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1231 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1237 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1243 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1249 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 125:
#line 1255 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 126:
#line 1261 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 127:
#line 1267 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 128:
#line 1273 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 129:
#line 1280 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 131:
#line 1288 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 133:
#line 1301 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 134:
#line 1307 "GetDP.y"
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
#line 1381 "GetDP.y"
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
#line 1415 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 137:
#line 1424 "GetDP.y"
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
#line 1436 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 139:
#line 1438 "GetDP.y"
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
#line 1449 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 141:
#line 1451 "GetDP.y"
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
#line 1465 "GetDP.y"
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
#line 1477 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 144:
#line 1483 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 145:
#line 1489 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 146:
#line 1491 "GetDP.y"
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
#line 1520 "GetDP.y"
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
#line 1544 "GetDP.y"
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
#line 1557 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 150:
#line 1563 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 151:
#line 1570 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 152:
#line 1576 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 153:
#line 1583 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 154:
#line 1590 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SHOWVALUE ;
      WholeQuantity_S.Case.ShowValue.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 155:
#line 1601 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 156:
#line 1602 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 157:
#line 1603 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 158:
#line 1608 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 159:
#line 1609 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 160:
#line 1615 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 161:
#line 1618 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 162:
#line 1621 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 163:
#line 1637 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 164:
#line 1642 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 165:
#line 1649 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 167:
#line 1658 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 168:
#line 1663 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 169:
#line 1670 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 170:
#line 1673 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 171:
#line 1680 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 173:
#line 1690 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 174:
#line 1693 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 175:
#line 1696 "GetDP.y"
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
#line 1734 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 177:
#line 1740 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 178:
#line 1747 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 180:
#line 1760 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 181:
#line 1767 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 182:
#line 1770 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 183:
#line 1777 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 184:
#line 1780 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 185:
#line 1787 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 187:
#line 1799 "GetDP.y"
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
#line 1809 "GetDP.y"
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
#line 1819 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 190:
#line 1826 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 191:
#line 1829 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 192:
#line 1836 "GetDP.y"
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
#line 1852 "GetDP.y"
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
#line 1906 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 196:
#line 1909 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 197:
#line 1912 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 198:
#line 1915 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 199:
#line 1918 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 200:
#line 1929 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 202:
#line 1939 "GetDP.y"
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
#line 1964 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 206:
#line 1978 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 207:
#line 1984 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 208:
#line 1991 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 209:
#line 2000 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 210:
#line 2003 "GetDP.y"
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
#line 2025 "GetDP.y"
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
#line 2040 "GetDP.y"
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
#line 2064 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 215:
#line 2078 "GetDP.y"
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
#line 2088 "GetDP.y"
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
#line 2112 "GetDP.y"
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
#line 2137 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 219:
#line 2142 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 220:
#line 2150 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 221:
#line 2158 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 222:
#line 2168 "GetDP.y"
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
#line 2185 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 224:
#line 2193 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 225:
#line 2200 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 226:
#line 2207 "GetDP.y"
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
#line 2216 "GetDP.y"
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
#line 2225 "GetDP.y"
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
#line 2234 "GetDP.y"
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
#line 2255 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 232:
#line 2266 "GetDP.y"
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
#line 2293 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 236:
#line 2306 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 237:
#line 2312 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 238:
#line 2319 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 239:
#line 2328 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 240:
#line 2331 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 241:
#line 2334 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 242:
#line 2337 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 243:
#line 2344 "GetDP.y"
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
#line 2360 "GetDP.y"
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
#line 2409 "GetDP.y"
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
#line 2429 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 248:
#line 2432 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 249:
#line 2437 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 250:
#line 2442 "GetDP.y"
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
#line 2456 "GetDP.y"
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
#line 2476 "GetDP.y"
{
      BasisFunction_S.SubFunction = List_Copy(ListOfInt_L); 
    ;
    break;}
case 253:
#line 2481 "GetDP.y"
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
#line 2505 "GetDP.y"
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
#line 2565 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 257:
#line 2568 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 258:
#line 2577 "GetDP.y"
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
#line 2643 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 260:
#line 2647 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 261:
#line 2654 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 263:
#line 2663 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 264:
#line 2668 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2671 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 266:
#line 2678 "GetDP.y"
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
#line 2694 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 268:
#line 2700 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 269:
#line 2703 "GetDP.y"
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
#line 2722 "GetDP.y"
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
#line 2734 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 272:
#line 2740 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 273:
#line 2743 "GetDP.y"
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
#line 2758 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 275:
#line 2762 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 276:
#line 2771 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 278:
#line 2782 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 279:
#line 2787 "GetDP.y"
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
#line 2797 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 281:
#line 2810 "GetDP.y"
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
#line 2825 "GetDP.y"
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
#line 2899 "GetDP.y"
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
#line 2915 "GetDP.y"
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
#line 2947 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 287:
#line 2950 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 288:
#line 2953 "GetDP.y"
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
#line 2999 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 291:
#line 3009 "GetDP.y"
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
#line 3035 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 295:
#line 3047 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 296:
#line 3053 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 297:
#line 3060 "GetDP.y"
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
#line 3072 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 300:
#line 3078 "GetDP.y"
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
#line 3092 "GetDP.y"
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
#line 3110 "GetDP.y"
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
#line 3131 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 305:
#line 3134 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 306:
#line 3138 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 307:
#line 3141 "GetDP.y"
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
#line 3151 "GetDP.y"
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
#line 3190 "GetDP.y"
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
#line 3214 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 311:
#line 3219 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 312:
#line 3225 "GetDP.y"
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
#line 3386 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 314:
#line 3391 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 315:
#line 3400 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 316:
#line 3409 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 318:
#line 3417 "GetDP.y"
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
#line 3457 "GetDP.y"
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
#line 3472 "GetDP.y"
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
#line 3500 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 322:
#line 3503 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 323:
#line 3506 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 324:
#line 3509 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 325:
#line 3516 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 327:
#line 3527 "GetDP.y"
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
#line 3537 "GetDP.y"
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
#line 3547 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 330:
#line 3561 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 332:
#line 3573 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 333:
#line 3575 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 334:
#line 3577 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 335:
#line 3579 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 336:
#line 3587 "GetDP.y"
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
#line 3609 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 339:
#line 3617 "GetDP.y"
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
#line 3679 "GetDP.y"
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
#line 3725 "GetDP.y"
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
#line 3749 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 343:
#line 3758 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 344:
#line 3772 "GetDP.y"
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
#line 3801 "GetDP.y"
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
#line 3825 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 348:
#line 3833 "GetDP.y"
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
#line 3888 "GetDP.y"
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
#line 3905 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 351:
#line 3906 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 352:
#line 3907 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 353:
#line 3908 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 354:
#line 3909 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 355:
#line 3910 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 356:
#line 3911 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 357:
#line 3912 "GetDP.y"
{ Type_TermOperator = DTNL_    ; ;
    break;}
case 358:
#line 3919 "GetDP.y"
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
#line 3940 "GetDP.y"
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
#line 3964 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 362:
#line 3974 "GetDP.y"
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
#line 3999 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 366:
#line 4011 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 367:
#line 4018 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 368:
#line 4025 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 369:
#line 4028 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 370:
#line 4030 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 371:
#line 4036 "GetDP.y"
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
#line 4051 "GetDP.y"
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
#line 4070 "GetDP.y"
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
#line 4089 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 376:
#line 4092 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 377:
#line 4101 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 378:
#line 4104 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 379:
#line 4109 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 380:
#line 4114 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 381:
#line 4119 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 382:
#line 4124 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 383:
#line 4133 "GetDP.y"
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
#line 4170 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 385:
#line 4177 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 386:
#line 4180 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 387:
#line 4192 "GetDP.y"
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
#line 4202 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 389:
#line 4208 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 390:
#line 4211 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 391:
#line 4223 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 392:
#line 4231 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 393:
#line 4242 "GetDP.y"
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
#line 4262 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 395:
#line 4269 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 396:
#line 4275 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 397:
#line 4281 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 398:
#line 4287 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 399:
#line 4295 "GetDP.y"
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
#line 4316 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 401:
#line 4323 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 402:
#line 4329 "GetDP.y"
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
#line 4340 "GetDP.y"
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
#line 4351 "GetDP.y"
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
#line 4363 "GetDP.y"
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
#line 4375 "GetDP.y"
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
#line 4395 "GetDP.y"
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
#line 4412 "GetDP.y"
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
#line 4431 "GetDP.y"
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
#line 4453 "GetDP.y"
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
#line 4487 "GetDP.y"
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
#line 4500 "GetDP.y"
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
#line 4514 "GetDP.y"
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
case 414:
#line 4527 "GetDP.y"
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
case 415:
#line 4539 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 417:
#line 4548 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 419:
#line 4557 "GetDP.y"
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
#line 4567 "GetDP.y"
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
#line 4577 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 422:
#line 4585 "GetDP.y"
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
#line 4598 "GetDP.y"
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
case 424:
#line 4611 "GetDP.y"
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
#line 4620 "GetDP.y"
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
#line 4629 "GetDP.y"
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
#line 4643 "GetDP.y"
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
#line 4656 "GetDP.y"
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
#line 4673 "GetDP.y"
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
#line 4687 "GetDP.y"
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
#line 4706 "GetDP.y"
{
      Operation_P->Case.Print.Expression = List_Copy(ListOfInt_L) ; 
    ;
    break;}
case 432:
#line 4711 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 433:
#line 4721 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 435:
#line 4731 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 436:
#line 4734 "GetDP.y"
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
#line 4744 "GetDP.y"
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
#line 4760 "GetDP.y"
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
#line 4776 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 441:
#line 4780 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 442:
#line 4784 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 443:
#line 4788 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 444:
#line 4793 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 445:
#line 4804 "GetDP.y"
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
#line 4821 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 448:
#line 4825 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 449:
#line 4829 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 450:
#line 4833 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 451:
#line 4837 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 452:
#line 4842 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 453:
#line 4853 "GetDP.y"
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
#line 4868 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 456:
#line 4872 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 457:
#line 4876 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 458:
#line 4880 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 459:
#line 4884 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 460:
#line 4895 "GetDP.y"
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
#line 4913 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 463:
#line 4917 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 464:
#line 4921 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 465:
#line 4925 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 466:
#line 4930 "GetDP.y"
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
#line 4940 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 468:
#line 4946 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 469:
#line 4952 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 470:
#line 4962 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 471:
#line 4965 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 472:
#line 4970 "GetDP.y"
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
#line 4988 "GetDP.y"
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
#line 4998 "GetDP.y"
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
#line 5027 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 477:
#line 5030 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 478:
#line 5033 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 479:
#line 5041 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 480:
#line 5058 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 482:
#line 5070 "GetDP.y"
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
#line 5093 "GetDP.y"
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
#line 5107 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 487:
#line 5114 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 488:
#line 5122 "GetDP.y"
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
#line 5168 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 490:
#line 5173 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 491:
#line 5179 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 492:
#line 5182 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 493:
#line 5187 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 495:
#line 5198 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 496:
#line 5201 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 497:
#line 5207 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 498:
#line 5212 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 499:
#line 5218 "GetDP.y"
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
#line 5232 "GetDP.y"
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
#line 5246 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 503:
#line 5253 "GetDP.y"
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
#line 5281 "GetDP.y"
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
#line 5291 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 506:
#line 5292 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 507:
#line 5298 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 508:
#line 5307 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 509:
#line 5324 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 511:
#line 5336 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 513:
#line 5343 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 515:
#line 5355 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 516:
#line 5362 "GetDP.y"
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
#line 5374 "GetDP.y"
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
#line 5385 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 519:
#line 5390 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 520:
#line 5396 "GetDP.y"
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
#line 5413 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 522:
#line 5423 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 523:
#line 5426 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 524:
#line 5430 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 525:
#line 5441 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 526:
#line 5445 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 527:
#line 5449 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINTVAL ;
      PostSubOperation_S.String = yyvsp[-5].c ;
      PostSubOperation_S.Val = yyvsp[-3].d ;
    ;
    break;}
case 528:
#line 5455 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 529:
#line 5460 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 530:
#line 5464 "GetDP.y"
{
      PostSubOperation_S.Type = POP_ECHO ;
      PostSubOperation_S.Case.EchoString = yyvsp[-3].c ;
    ;
    break;}
case 531:
#line 5473 "GetDP.y"
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
case 532:
#line 5485 "GetDP.y"
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
case 533:
#line 5508 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 534:
#line 5509 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 535:
#line 5510 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 536:
#line 5511 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 537:
#line 5517 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 538:
#line 5519 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 539:
#line 5525 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 540:
#line 5531 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 541:
#line 5538 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 542:
#line 5547 "GetDP.y"
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
case 543:
#line 5569 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 544:
#line 5577 "GetDP.y"
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
case 545:
#line 5588 "GetDP.y"
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
case 546:
#line 5602 "GetDP.y"
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
case 547:
#line 5623 "GetDP.y"
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
case 548:
#line 5650 "GetDP.y"
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
case 549:
#line 5681 "GetDP.y"
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
case 550:
#line 5701 "GetDP.y"
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
case 552:
#line 5728 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 553:
#line 5735 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 554:
#line 5742 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 555:
#line 5749 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 556:
#line 5753 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 557:
#line 5757 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 558:
#line 5761 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 559:
#line 5765 "GetDP.y"
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
case 560:
#line 5775 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 561:
#line 5780 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 562:
#line 5785 "GetDP.y"
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
case 563:
#line 5805 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 564:
#line 5812 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 565:
#line 5821 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 566:
#line 5830 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 567:
#line 5839 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 568:
#line 5846 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 569:
#line 5854 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 570:
#line 5858 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 571:
#line 5867 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 572:
#line 5871 "GetDP.y"
{ 
      PostSubOperation_S.DecomposeInSimplex = 1 ;
    ;
    break;}
case 573:
#line 5875 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 574:
#line 5883 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 575:
#line 5889 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfValues = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 576:
#line 5898 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 577:
#line 5904 "GetDP.y"
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
case 578:
#line 5952 "GetDP.y"
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
case 579:
#line 5967 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 582:
#line 5980 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 583:
#line 5986 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 584:
#line 5992 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 585:
#line 6003 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 586:
#line 6004 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 587:
#line 6005 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 588:
#line 6006 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 589:
#line 6007 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 590:
#line 6008 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 591:
#line 6009 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 592:
#line 6010 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 593:
#line 6011 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 594:
#line 6012 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 595:
#line 6013 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 596:
#line 6014 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 597:
#line 6015 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 598:
#line 6016 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 599:
#line 6017 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 600:
#line 6018 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 601:
#line 6019 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 602:
#line 6020 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 603:
#line 6021 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 604:
#line 6022 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 605:
#line 6023 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 606:
#line 6027 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 607:
#line 6028 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 608:
#line 6029 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 609:
#line 6030 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 610:
#line 6031 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 611:
#line 6032 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 612:
#line 6033 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 613:
#line 6034 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 614:
#line 6035 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 615:
#line 6036 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 616:
#line 6037 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 617:
#line 6038 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 618:
#line 6039 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 619:
#line 6040 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 620:
#line 6041 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 621:
#line 6042 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 622:
#line 6043 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 623:
#line 6044 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 624:
#line 6045 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 625:
#line 6046 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 626:
#line 6047 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 627:
#line 6048 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 628:
#line 6049 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 629:
#line 6050 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 630:
#line 6051 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 631:
#line 6052 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 632:
#line 6053 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 633:
#line 6054 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 634:
#line 6055 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 635:
#line 6056 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 636:
#line 6057 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 637:
#line 6058 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 638:
#line 6059 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 639:
#line 6060 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 640:
#line 6061 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 641:
#line 6062 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 642:
#line 6063 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 643:
#line 6064 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 644:
#line 6065 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 645:
#line 6066 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 646:
#line 6071 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 647:
#line 6072 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 648:
#line 6073 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 649:
#line 6074 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 650:
#line 6075 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 651:
#line 6076 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 652:
#line 6077 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 653:
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
case 654:
#line 6097 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 655:
#line 6100 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 656:
#line 6106 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 657:
#line 6109 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 658:
#line 6116 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 659:
#line 6122 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 660:
#line 6125 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 661:
#line 6128 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 662:
#line 6140 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 663:
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
case 664:
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
case 665:
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
case 666:
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
case 667:
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
case 668:
#line 6248 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 669:
#line 6256 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ;
      for(i=0 ; i<(int)yyvsp[-1].d ; i++) {
	d = pow(10,yyvsp[-5].d + (yyvsp[-3].d-yyvsp[-5].d)*(double)i/(yyvsp[-1].d-1)) ;
	List_Add(yyval.l, &d) ;
      }
    ;
    break;}
case 670:
#line 6268 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 671:
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
case 672:
#line 6286 "GetDP.y"
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


