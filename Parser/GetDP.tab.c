
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
#define	tOR	433
#define	tAND	434
#define	tEQUAL	435
#define	tNOTEQUAL	436
#define	tAPPROXEQUAL	437
#define	tLESSOREQUAL	438
#define	tGREATEROREQUAL	439
#define	tLESSLESS	440
#define	tGREATERGREATER	441
#define	tCROSSPRODUCT	442
#define	UNARYPREC	443

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.15 2001-04-10 15:04:00 geuzaine Exp $ */

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


#line 179 "GetDP.y"
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



#define	YYFINAL		1583
#define	YYFLAG		-32768
#define	YYNTBASE	210

#define YYTRANSLATE(x) ((unsigned)(x) <= 443 ? yytranslate[x] : 395)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   197,     2,   205,   206,   195,     2,     2,   200,
   201,   193,   191,   209,   192,   204,   194,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   185,
     2,   187,   179,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   202,     2,   203,   199,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   207,     2,   208,     2,     2,     2,     2,     2,
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
   177,   178,   180,   181,   182,   183,   184,   186,   188,   189,
   190,   196,   198
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
   281,   282,   285,   286,   289,   291,   292,   293,   301,   305,
   309,   316,   320,   324,   328,   332,   336,   340,   344,   348,
   352,   356,   360,   364,   368,   372,   375,   378,   381,   385,
   387,   391,   394,   396,   399,   400,   406,   407,   419,   424,
   429,   430,   438,   445,   448,   451,   454,   457,   461,   464,
   468,   471,   475,   477,   481,   482,   486,   493,   500,   501,
   506,   507,   510,   514,   519,   520,   525,   526,   529,   533,
   537,   542,   543,   548,   549,   552,   556,   560,   565,   566,
   571,   572,   575,   579,   583,   588,   589,   594,   595,   598,
   602,   606,   610,   614,   618,   622,   623,   626,   630,   632,
   633,   636,   640,   645,   649,   654,   660,   661,   666,   667,
   670,   674,   678,   682,   686,   690,   694,   702,   706,   710,
   714,   718,   722,   730,   738,   746,   747,   750,   754,   756,
   757,   760,   764,   769,   773,   778,   783,   788,   793,   794,
   799,   800,   803,   807,   811,   816,   821,   829,   833,   837,
   841,   842,   843,   844,   863,   864,   869,   870,   873,   877,
   881,   885,   887,   891,   892,   896,   898,   902,   903,   907,
   908,   913,   914,   917,   921,   925,   929,   930,   935,   936,
   939,   943,   949,   953,   957,   962,   963,   966,   970,   972,
   973,   976,   980,   985,   989,   994,   999,  1000,  1005,  1006,
  1009,  1013,  1017,  1021,  1025,  1026,  1033,  1037,  1038,  1044,
  1048,  1052,  1056,  1060,  1061,  1065,  1066,  1069,  1074,  1079,
  1084,  1089,  1090,  1093,  1097,  1101,  1105,  1106,  1109,  1113,
  1117,  1121,  1125,  1126,  1129,  1130,  1131,  1141,  1145,  1149,
  1153,  1154,  1157,  1161,  1162,  1163,  1173,  1174,  1176,  1178,
  1180,  1182,  1184,  1186,  1191,  1195,  1196,  1199,  1203,  1205,
  1206,  1209,  1213,  1218,  1223,  1224,  1230,  1231,  1236,  1237,
  1240,  1244,  1248,  1252,  1256,  1260,  1264,  1268,  1272,  1275,
  1279,  1280,  1284,  1286,  1290,  1291,  1295,  1296,  1299,  1303,
  1307,  1312,  1317,  1322,  1327,  1333,  1339,  1342,  1350,  1362,
  1370,  1378,  1388,  1400,  1414,  1430,  1431,  1439,  1440,  1448,
  1456,  1460,  1462,  1464,  1465,  1468,  1472,  1476,  1479,  1480,
  1483,  1487,  1491,  1495,  1499,  1504,  1505,  1508,  1512,  1516,
  1520,  1524,  1528,  1533,  1534,  1537,  1541,  1545,  1549,  1553,
  1558,  1559,  1562,  1566,  1570,  1574,  1578,  1582,  1587,  1592,
  1597,  1598,  1603,  1604,  1607,  1611,  1615,  1619,  1623,  1627,
  1631,  1632,  1635,  1639,  1641,  1642,  1645,  1649,  1654,  1659,
  1663,  1668,  1669,  1674,  1675,  1678,  1682,  1687,  1688,  1694,
  1700,  1701,  1704,  1705,  1712,  1716,  1717,  1722,  1726,  1730,
  1731,  1734,  1738,  1740,  1741,  1744,  1748,  1752,  1756,  1760,
  1765,  1766,  1775,  1776,  1777,  1781,  1789,  1797,  1801,  1808,
  1810,  1812,  1814,  1816,  1817,  1821,  1823,  1826,  1829,  1854,
  1857,  1858,  1873,  1882,  1903,  1933,  1972,  1985,  1986,  1989,
  1993,  1998,  2003,  2007,  2010,  2014,  2018,  2022,  2026,  2030,
  2034,  2038,  2042,  2046,  2050,  2054,  2058,  2062,  2068,  2071,
  2075,  2076,  2079,  2080,  2084,  2086,  2090,  2091,  2093,  2097,
  2099,  2101,  2105,  2109,  2113,  2120,  2126,  2131,  2136,  2143,
  2153,  2159,  2160,  2164,  2170,  2176,  2178,  2180,  2182,  2184,
  2186,  2188,  2190,  2192,  2194,  2196,  2198,  2200,  2202,  2204,
  2206,  2208,  2210,  2212,  2214,  2216,  2218,  2220,  2224,  2227,
  2230,  2234,  2238,  2242,  2246,  2250,  2254,  2258,  2262,  2266,
  2270,  2274,  2278,  2282,  2286,  2291,  2296,  2301,  2306,  2311,
  2316,  2321,  2326,  2331,  2336,  2343,  2348,  2353,  2358,  2363,
  2368,  2373,  2380,  2387,  2394,  2400,  2403,  2405,  2407,  2409,
  2411,  2413,  2415,  2417,  2419,  2421,  2423
};

static const short yyrhs[] = {    -1,
   211,   212,     0,     0,     0,   212,   213,   214,     0,    43,
   207,   217,   208,     0,    79,   207,   237,   208,     0,    50,
   207,   269,   208,     0,    63,   207,   254,   208,     0,    65,
   207,   260,   208,     0,    75,   207,   276,   208,     0,    90,
   207,   299,   208,     0,   107,   207,   325,   208,     0,   140,
   207,   355,   208,     0,   142,   207,   367,   208,     0,   371,
     0,   389,     0,    10,   394,     0,   215,     0,   176,     7,
     0,   176,     5,     7,     0,   176,     5,     5,     7,     0,
   176,     5,     5,     5,     7,     0,   177,     7,     0,     0,
   216,   375,     0,     0,     0,   217,   218,   219,     0,     5,
   178,   221,     7,     0,     5,   236,   178,   221,     7,     0,
     0,     5,   234,   178,   220,   221,     7,     0,    44,   202,
   232,   203,     7,     0,   389,     0,     0,     0,   225,   202,
   222,   226,   223,   227,   203,     0,   205,   229,     0,   221,
     0,     5,   235,     0,    51,     0,     5,     0,   229,     0,
    45,     0,     0,   233,   228,   229,     0,   233,    46,     5,
   235,     0,     5,     0,   231,     0,   207,   230,   208,     0,
     0,   230,   233,   231,     0,   230,   233,   192,   231,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   202,   392,
   203,     3,     0,     3,     8,     3,     8,   392,     0,     5,
     0,     5,   207,   392,   208,     0,     5,   207,   208,     0,
     0,   232,   233,     5,     0,   232,   233,     5,   207,   392,
   208,     0,     0,   209,     0,   207,   205,   392,   208,     0,
     0,   207,   208,     0,   207,   392,   208,     0,     0,   237,
   238,     0,    47,   202,   239,   203,     7,     0,     5,   202,
   203,   178,   240,     7,     0,     5,   202,   224,   203,   178,
   240,     7,     0,   389,     0,     0,   239,   233,     5,     0,
    11,   202,   392,   203,     0,    79,   202,     5,   203,     0,
     0,   241,   242,     0,     0,   243,   244,     0,   247,     0,
     0,     0,   244,   179,   245,   244,     8,   246,   244,     0,
   244,   193,   244,     0,   244,   196,   244,     0,    41,   202,
   244,   209,   244,   203,     0,   244,   194,   244,     0,   244,
   191,   244,     0,   244,   192,   244,     0,   244,   195,   244,
     0,   244,   199,   244,     0,   244,   185,   244,     0,   244,
   187,   244,     0,   244,   186,   244,     0,   244,   188,   244,
     0,   244,   182,   244,     0,   244,   183,   244,     0,   244,
   184,   244,     0,   244,   181,   244,     0,   244,   180,   244,
     0,   192,   244,     0,   191,   244,     0,   197,   244,     0,
   200,   244,   201,     0,   393,     0,   391,   251,   253,     0,
     5,   324,     0,   324,     0,   324,   251,     0,     0,   100,
   248,   202,   242,   203,     0,     0,    42,   249,   202,     3,
   209,   392,   209,   242,   209,   242,   203,     0,    38,   202,
   324,   203,     0,    40,   202,   324,   203,     0,     0,    39,
   250,   202,   242,   209,   224,   203,     0,   185,     5,   187,
   202,   242,   203,     0,   206,     5,     0,   206,   163,     0,
   206,   118,     0,   206,     3,     0,   247,   205,     3,     0,
   205,     3,     0,   202,   204,   203,     0,   202,   203,     0,
   202,   252,   203,     0,   244,     0,   252,   209,   244,     0,
     0,   207,   387,   208,     0,   207,    51,   202,   224,   203,
   208,     0,   207,    48,   202,     5,   203,   208,     0,     0,
   254,   207,   255,   208,     0,     0,   255,   256,     0,    76,
     5,     7,     0,    64,   207,   257,   208,     0,     0,   257,
   207,   258,   208,     0,     0,   258,   259,     0,    51,   224,
     7,     0,    51,    45,     7,     0,    63,     5,   253,     7,
     0,     0,   260,   207,   261,   208,     0,     0,   261,   262,
     0,    76,     5,     7,     0,    68,   240,     7,     0,    64,
   207,   263,   208,     0,     0,   263,   207,   264,   208,     0,
     0,   264,   265,     0,    66,     5,     7,     0,    67,     5,
     7,     0,    64,   207,   266,   208,     0,     0,   266,   207,
   267,   208,     0,     0,   267,   268,     0,    69,     5,     7,
     0,    70,   392,     7,     0,    71,   392,     7,     0,    72,
   392,     7,     0,    73,   392,     7,     0,    74,   392,     7,
     0,     0,   269,   270,     0,   207,   271,   208,     0,   389,
     0,     0,   271,   272,     0,    76,     5,     7,     0,    76,
     5,   234,     7,     0,    66,     5,     7,     0,    64,   207,
   273,   208,     0,    64,     5,   207,   273,   208,     0,     0,
   273,   207,   274,   208,     0,     0,   274,   275,     0,    66,
     5,     7,     0,    51,   224,     7,     0,    52,   224,     7,
     0,    58,   240,     7,     0,    57,   240,     7,     0,    62,
     5,     7,     0,    59,   207,     3,   233,     3,   208,     7,
     0,    53,   224,     7,     0,    54,   224,     7,     0,    79,
   240,     7,     0,    56,   240,     7,     0,    55,   240,     7,
     0,    79,   202,   240,   209,   240,   203,     7,     0,    56,
   202,   240,   209,   240,   203,     7,     0,    55,   202,   240,
   209,   240,   203,     7,     0,     0,   276,   277,     0,   207,
   278,   208,     0,   389,     0,     0,   278,   279,     0,    76,
     5,     7,     0,    76,     5,   234,     7,     0,    66,     5,
     7,     0,    77,   207,   280,   208,     0,    84,   207,   286,
   208,     0,    86,   207,   293,   208,     0,    50,   207,   296,
   208,     0,     0,   280,   207,   281,   208,     0,     0,   281,
   282,     0,    76,     5,     7,     0,    78,     5,     7,     0,
    78,     5,   234,     7,     0,    79,     5,   283,     7,     0,
    80,   207,     5,   233,     5,   208,     7,     0,    81,   384,
     7,     0,    82,   224,     7,     0,    83,   224,     7,     0,
     0,     0,     0,   207,    91,     5,     7,    90,     5,   234,
     7,   284,    43,   224,     7,   285,   107,     5,   235,     7,
   208,     0,     0,   286,   207,   287,   208,     0,     0,   287,
   288,     0,    76,     5,     7,     0,    85,   289,     7,     0,
    78,   291,     7,     0,     5,     0,   207,   290,   208,     0,
     0,   290,   233,     5,     0,     5,     0,   207,   292,   208,
     0,     0,   292,   233,     5,     0,     0,   293,   207,   294,
   208,     0,     0,   294,   295,     0,    76,     5,     7,     0,
    66,     5,     7,     0,    78,     5,     7,     0,     0,   296,
   207,   297,   208,     0,     0,   297,   298,     0,    78,     5,
     7,     0,    83,   225,    89,     5,     7,     0,    87,   225,
     7,     0,    88,   228,     7,     0,    89,     5,   235,     7,
     0,     0,   299,   300,     0,   207,   301,   208,     0,   389,
     0,     0,   301,   302,     0,    76,     5,     7,     0,    76,
     5,   234,     7,     0,    66,     5,     7,     0,    91,   207,
   303,   208,     0,    95,   207,   309,   208,     0,     0,   303,
   207,   304,   208,     0,     0,   304,   305,     0,    76,     5,
     7,     0,    66,    86,     7,     0,    66,    96,     7,     0,
    66,     5,     7,     0,     0,    92,     5,   235,   306,   308,
     7,     0,    93,     3,     7,     0,     0,   202,   307,   242,
   203,     7,     0,   106,   224,     7,     0,    65,     5,     7,
     0,    63,     5,     7,     0,    94,     3,     7,     0,     0,
   202,     5,   203,     0,     0,   309,   310,     0,    96,   207,
   315,   208,     0,    97,   207,   315,   208,     0,    98,   207,
   319,   208,     0,    99,   207,   311,   208,     0,     0,   311,
   312,     0,    66,     5,     7,     0,    89,     5,     7,     0,
   207,   313,   208,     0,     0,   313,   314,     0,    60,   324,
     7,     0,    61,   324,     7,     0,    95,   324,     7,     0,
   106,   224,     7,     0,     0,   315,   316,     0,     0,     0,
   323,   202,   317,   242,   318,   209,   242,   203,     7,     0,
   106,   224,     7,     0,    63,     5,     7,     0,    65,     5,
     7,     0,     0,   319,   320,     0,   106,   224,     7,     0,
     0,     0,   323,   202,   321,   242,   322,   209,   324,   203,
     7,     0,     0,   100,     0,   101,     0,   102,     0,   103,
     0,   104,     0,   105,     0,   207,     5,     5,   208,     0,
   207,     5,   208,     0,     0,   325,   326,     0,   207,   327,
   208,     0,   389,     0,     0,   327,   328,     0,    76,     5,
     7,     0,    76,     5,   234,     7,     0,   108,   207,   330,
   208,     0,     0,   115,   329,   207,   337,   208,     0,     0,
   330,   207,   331,   208,     0,     0,   331,   332,     0,    76,
     5,     7,     0,    66,     5,     7,     0,   109,   333,     7,
     0,   110,   394,     7,     0,   113,   335,     7,     0,   114,
     5,     7,     0,   111,   386,     7,     0,   112,   394,     7,
     0,     5,   235,     0,   207,   334,   208,     0,     0,   334,
   233,     5,     0,     5,     0,   207,   336,   208,     0,     0,
   336,   233,     5,     0,     0,   337,   338,     0,     5,     5,
     7,     0,   117,   240,     7,     0,   125,   207,   344,   208,
     0,   129,   207,   346,   208,     0,   132,   207,   348,   208,
     0,   135,   207,   350,   208,     0,     5,   202,     5,   203,
     7,     0,   117,   202,   240,   203,     7,     0,   175,     7,
     0,   121,   202,   240,   203,   207,   337,   208,     0,   121,
   202,   240,   203,   207,   337,   208,   122,   207,   337,   208,
     0,   119,   202,     5,   209,   240,   203,     7,     0,   124,
   202,     5,   209,   240,   203,     7,     0,   120,   202,     5,
   209,     5,   209,   386,   203,     7,     0,   123,   202,     5,
   209,   392,   209,   386,   209,   392,   203,     7,     0,   125,
   202,   392,   209,   392,   209,   240,   209,   240,   203,   207,
   337,   208,     0,   129,   202,   392,   209,   392,   209,   240,
   209,   392,   209,   392,   203,   207,   337,   208,     0,     0,
   147,   339,   202,   341,   342,   203,     7,     0,     0,   148,
   340,   202,   341,   342,   203,     7,     0,   138,   202,   224,
   209,   240,   203,     7,     0,   139,     6,     7,     0,   384,
     0,     5,     0,     0,   342,   343,     0,   209,   160,   394,
     0,   209,   163,   386,     0,   209,   386,     0,     0,   344,
   345,     0,   126,   392,     7,     0,   127,   392,     7,     0,
   118,   240,     7,     0,   128,   240,     7,     0,   115,   207,
   337,   208,     0,     0,   346,   347,     0,   126,   392,     7,
     0,   127,   392,     7,     0,   118,   240,     7,     0,   130,
   392,     7,     0,   131,   392,     7,     0,   115,   207,   337,
   208,     0,     0,   348,   349,     0,   133,   392,     7,     0,
   134,   240,     7,     0,    68,   392,     7,     0,   174,   392,
     7,     0,   115,   207,   337,   208,     0,     0,   350,   351,
     0,   133,   392,     7,     0,   136,   392,     7,     0,    68,
   392,     7,     0,   174,   392,     7,     0,   108,     5,     7,
     0,   137,   207,   352,   208,     0,   115,   207,   337,   208,
     0,   116,   207,   337,   208,     0,     0,   352,   207,   353,
   208,     0,     0,   353,   354,     0,    66,     5,     7,     0,
    91,     5,     7,     0,   106,   224,     7,     0,    68,   392,
     7,     0,    79,   240,     7,     0,   174,     5,     7,     0,
     0,   355,   356,     0,   207,   357,   208,     0,   389,     0,
     0,   357,   358,     0,    76,     5,     7,     0,    76,     5,
   234,     7,     0,   109,     5,   235,     7,     0,   141,     5,
     7,     0,    91,   207,   359,   208,     0,     0,   359,   207,
   360,   208,     0,     0,   360,   361,     0,    76,     5,     7,
     0,    57,   207,   362,   208,     0,     0,   362,    96,   207,
   363,   208,     0,   362,     5,   207,   363,   208,     0,     0,
   363,   364,     0,     0,   323,   202,   365,   242,   203,     7,
     0,    66,     5,     7,     0,     0,   106,   366,   224,     7,
     0,    63,     5,     7,     0,    65,     5,     7,     0,     0,
   367,   368,     0,   207,   369,   208,     0,   389,     0,     0,
   369,   370,     0,    76,     5,     7,     0,   143,     5,     7,
     0,   165,     5,     7,     0,   145,   394,     7,     0,   115,
   207,   373,   208,     0,     0,   142,     5,   144,     5,   372,
   207,   373,   208,     0,     0,     0,   373,   374,   375,     0,
   146,   202,   376,   379,   381,   203,     7,     0,   147,   202,
   376,   379,   381,   203,     7,     0,     5,   378,   209,     0,
     5,   378,   377,     5,   378,   209,     0,   193,     0,   194,
     0,   191,     0,   192,     0,     0,   202,   224,   203,     0,
   150,     0,   151,   224,     0,   152,   224,     0,   154,   207,
   207,   392,   209,   392,   209,   392,   208,   207,   392,   209,
   392,   209,   392,   208,   207,   392,   209,   392,   209,   392,
   208,   208,     0,   153,   224,     0,     0,   153,   207,   240,
   209,   240,   209,   240,   208,   207,   386,   380,   209,   386,
   208,     0,   155,   207,   392,   209,   392,   209,   392,   208,
     0,   156,   207,   207,   392,   209,   392,   209,   392,   208,
   207,   392,   209,   392,   209,   392,   208,   208,   207,   392,
   208,     0,   157,   207,   207,   392,   209,   392,   209,   392,
   208,   207,   392,   209,   392,   209,   392,   208,   207,   392,
   209,   392,   209,   392,   208,   208,   207,   392,   209,   392,
   208,     0,   158,   207,   207,   392,   209,   392,   209,   392,
   208,   207,   392,   209,   392,   209,   392,   208,   207,   392,
   209,   392,   209,   392,   208,   207,   392,   209,   392,   209,
   392,   208,   208,   207,   392,   209,   392,   209,   392,   208,
     0,   151,   224,   159,     5,   207,   392,   209,   392,   208,
   207,   392,   208,     0,     0,   381,   382,     0,   209,   160,
   394,     0,   209,   160,   187,   394,     0,   209,   160,   190,
   394,     0,   209,   161,   392,     0,   209,   168,     0,   209,
   169,   392,     0,   209,   164,   392,     0,   209,   165,     5,
     0,   209,   166,   383,     0,   209,   167,   383,     0,   209,
   165,   383,     0,   209,   162,   392,     0,   209,   163,   386,
     0,   209,   149,     5,     0,   209,   171,     5,     0,   209,
   170,   392,     0,   209,    57,   386,     0,   209,   172,   392,
     0,   209,   172,   207,   387,   208,     0,   209,   173,     0,
   209,   111,   386,     0,     0,   383,     6,     0,     0,   207,
   385,   208,     0,   240,     0,   385,   209,   240,     0,     0,
   392,     0,   207,   387,   208,     0,   392,     0,   388,     0,
   387,   209,   392,     0,   387,   209,   388,     0,   392,     8,
   392,     0,   392,     8,   202,   392,   203,   392,     0,   392,
     8,   392,     8,   392,     0,     5,   178,   392,     7,     0,
     5,   178,     6,     7,     0,     5,   178,   207,   387,   208,
     7,     0,     5,   178,    49,   202,     5,   209,     5,   203,
     7,     0,    12,   202,   390,   203,     7,     0,     0,   390,
   233,     5,     0,   390,   233,     5,   178,   392,     0,   390,
   233,     5,   178,     6,     0,    18,     0,    19,     0,    20,
     0,    21,     0,    22,     0,    23,     0,    24,     0,    25,
     0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
     0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
     0,    36,     0,    37,     0,     5,     0,   393,     0,   200,
   392,   201,     0,   192,   392,     0,   197,   392,     0,   392,
   192,   392,     0,   392,   191,   392,     0,   392,   193,   392,
     0,   392,   194,   392,     0,   392,   195,   392,     0,   392,
   199,   392,     0,   392,   185,   392,     0,   392,   187,   392,
     0,   392,   186,   392,     0,   392,   188,   392,     0,   392,
   182,   392,     0,   392,   183,   392,     0,   392,   181,   392,
     0,   392,   180,   392,     0,    18,   202,   392,   203,     0,
    19,   202,   392,   203,     0,    20,   202,   392,   203,     0,
    21,   202,   392,   203,     0,    22,   202,   392,   203,     0,
    23,   202,   392,   203,     0,    24,   202,   392,   203,     0,
    25,   202,   392,   203,     0,    26,   202,   392,   203,     0,
    27,   202,   392,   203,     0,    28,   202,   392,   209,   392,
   203,     0,    29,   202,   392,   203,     0,    30,   202,   392,
   203,     0,    31,   202,   392,   203,     0,    32,   202,   392,
   203,     0,    33,   202,   392,   203,     0,    34,   202,   392,
   203,     0,    35,   202,   392,   209,   392,   203,     0,    36,
   202,   392,   209,   392,   203,     0,    37,   202,   392,   209,
   392,   203,     0,   392,   179,   392,     8,   392,     0,   392,
   205,     0,     4,     0,     3,     0,    13,     0,    14,     0,
    15,     0,    16,     0,    17,     0,     5,     0,     6,     0,
     5,     0,     9,   202,   394,   209,   394,   203,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   315,   352,   390,   393,   396,   399,   402,   403,   404,   405,
   406,   407,   408,   409,   410,   412,   414,   416,   421,   430,
   434,   437,   440,   443,   445,   453,   467,   470,   471,   474,
   479,   482,   484,   487,   489,   493,   501,   512,   521,   530,
   537,   572,   577,   587,   590,   604,   609,   612,   661,   673,
   699,   704,   719,   737,   758,   764,   773,   787,   801,   835,
   848,   868,   872,   882,   899,   899,   902,   908,   911,   914,
   924,   927,   930,   934,   954,   998,  1002,  1005,  1022,  1031,
  1038,  1041,  1047,  1053,  1060,  1064,  1077,  1092,  1106,  1112,
  1118,  1124,  1130,  1136,  1142,  1148,  1154,  1160,  1166,  1172,
  1178,  1184,  1190,  1196,  1202,  1209,  1215,  1217,  1226,  1230,
  1236,  1310,  1343,  1352,  1364,  1366,  1377,  1379,  1395,  1401,
  1407,  1409,  1438,  1462,  1473,  1479,  1486,  1492,  1499,  1509,
  1512,  1513,  1516,  1519,  1522,  1527,  1529,  1536,  1561,  1568,
  1573,  1578,  1582,  1589,  1594,  1599,  1604,  1610,  1614,  1619,
  1622,  1655,  1663,  1668,  1677,  1681,  1690,  1693,  1698,  1703,
  1708,  1716,  1720,  1731,  1740,  1745,  1750,  1755,  1767,  1771,
  1826,  1829,  1832,  1835,  1838,  1847,  1854,  1857,  1879,  1882,
  1892,  1896,  1904,  1911,  1919,  1922,  1942,  1959,  1981,  1991,
  1995,  2006,  2030,  2055,  2060,  2068,  2076,  2086,  2103,  2111,
  2118,  2125,  2134,  2143,  2152,  2171,  2179,  2182,  2205,  2209,
  2218,  2222,  2230,  2237,  2245,  2248,  2251,  2254,  2259,  2277,
  2324,  2340,  2344,  2349,  2354,  2359,  2371,  2387,  2396,  2420,
  2475,  2479,  2483,  2492,  2556,  2562,  2567,  2572,  2576,  2583,
  2586,  2591,  2609,  2614,  2618,  2635,  2649,  2654,  2658,  2671,
  2677,  2684,  2691,  2695,  2702,  2711,  2722,  2739,  2811,  2823,
  2827,  2847,  2861,  2864,  2867,  2911,  2918,  2921,  2943,  2947,
  2955,  2959,  2967,  2974,  2983,  2985,  2990,  3005,  3021,  3038,
  3042,  3047,  3051,  3054,  3063,  3102,  3126,  3131,  3137,  3298,
  3303,  3312,  3321,  3326,  3329,  3367,  3384,  3410,  3415,  3418,
  3421,  3426,  3434,  3437,  3448,  3458,  3470,  3479,  3482,  3486,
  3488,  3490,  3496,  3514,  3518,  3529,  3590,  3636,  3660,  3669,
  3681,  3698,  3702,  3736,  3745,  3799,  3815,  3818,  3819,  3820,
  3821,  3822,  3823,  3827,  3849,  3871,  3878,  3881,  3902,  3906,
  3914,  3918,  3927,  3934,  3937,  3939,  3944,  3960,  3977,  3992,
  3996,  4001,  4009,  4012,  4017,  4022,  4027,  4037,  4044,  4083,
  4088,  4093,  4103,  4115,  4119,  4124,  4135,  4144,  4151,  4171,
  4178,  4184,  4190,  4196,  4204,  4220,  4227,  4233,  4244,  4255,
  4271,  4283,  4305,  4326,  4339,  4353,  4360,  4362,  4369,  4371,
  4381,  4391,  4401,  4411,  4417,  4420,  4424,  4433,  4444,  4456,
  4460,  4466,  4470,  4474,  4479,  4488,  4501,  4505,  4511,  4515,
  4519,  4523,  4528,  4537,  4549,  4552,  4558,  4562,  4566,  4571,
  4580,  4595,  4598,  4604,  4608,  4612,  4617,  4627,  4633,  4639,
  4648,  4652,  4656,  4670,  4673,  4684,  4713,  4716,  4719,  4727,
  4741,  4749,  4752,  4773,  4776,  4787,  4790,  4798,  4806,  4852,
  4857,  4862,  4866,  4870,  4877,  4881,  4885,  4890,  4896,  4902,
  4914,  4925,  4928,  4936,  4964,  4974,  4974,  4980,  4989,  5005,
  5013,  5016,  5021,  5024,  5033,  5036,  5044,  5056,  5066,  5071,
  5076,  5094,  5103,  5107,  5112,  5120,  5127,  5134,  5148,  5170,
  5173,  5174,  5175,  5178,  5182,  5186,  5194,  5201,  5208,  5224,
  5231,  5245,  5255,  5263,  5276,  5294,  5318,  5338,  5357,  5360,
  5368,  5375,  5382,  5386,  5390,  5394,  5398,  5407,  5412,  5417,
  5437,  5444,  5451,  5459,  5467,  5474,  5481,  5485,  5493,  5497,
  5508,  5515,  5561,  5567,  5571,  5576,  5581,  5584,  5585,  5589,
  5594,  5603,  5606,  5615,  5623,  5634,  5651,  5659,  5665,  5677,
  5721,  5725,  5728,  5734,  5740,  5751,  5753,  5754,  5755,  5756,
  5757,  5758,  5759,  5760,  5761,  5762,  5763,  5764,  5765,  5766,
  5767,  5768,  5769,  5770,  5771,  5772,  5774,  5776,  5777,  5778,
  5779,  5780,  5781,  5782,  5783,  5784,  5785,  5786,  5787,  5788,
  5789,  5790,  5791,  5792,  5793,  5794,  5795,  5796,  5797,  5798,
  5799,  5800,  5801,  5802,  5803,  5804,  5805,  5806,  5807,  5808,
  5809,  5810,  5811,  5812,  5813,  5814,  5817,  5820,  5821,  5822,
  5823,  5824,  5825,  5826,  5843,  5848,  5863
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
"tBreak","tHelp","tCpu","tDEF","'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL",
"'<'","tLESSOREQUAL","'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'",
"'-'","'*'","'/'","'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'",
"'['","']'","'.'","'#'","'$'","'{'","'}'","','","Stats","@1","ProblemDefinitions",
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
   231,   232,   232,   232,   233,   233,   234,   235,   235,   236,
   237,   237,   238,   238,   238,   238,   239,   239,   240,   240,
   241,   240,   243,   242,   244,   245,   246,   244,   244,   244,
   244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
   244,   244,   244,   244,   244,   244,   244,   244,   247,   247,
   247,   247,   247,   247,   248,   247,   249,   247,   247,   247,
   250,   247,   247,   247,   247,   247,   247,   247,   247,   251,
   251,   251,   252,   252,   253,   253,   253,   253,   254,   254,
   255,   255,   256,   256,   257,   257,   258,   258,   259,   259,
   259,   260,   260,   261,   261,   262,   262,   262,   263,   263,
   264,   264,   265,   265,   265,   266,   266,   267,   267,   268,
   268,   268,   268,   268,   268,   269,   269,   270,   270,   271,
   271,   272,   272,   272,   272,   272,   273,   273,   274,   274,
   275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
   275,   275,   275,   275,   275,   276,   276,   277,   277,   278,
   278,   279,   279,   279,   279,   279,   279,   279,   280,   280,
   281,   281,   282,   282,   282,   282,   282,   282,   282,   282,
   283,   284,   285,   283,   286,   286,   287,   287,   288,   288,
   288,   289,   289,   290,   290,   291,   291,   292,   292,   293,
   293,   294,   294,   295,   295,   295,   296,   296,   297,   297,
   298,   298,   298,   298,   298,   299,   299,   300,   300,   301,
   301,   302,   302,   302,   302,   302,   303,   303,   304,   304,
   305,   305,   305,   305,   306,   305,   305,   307,   305,   305,
   305,   305,   305,   308,   308,   309,   309,   310,   310,   310,
   310,   311,   311,   312,   312,   312,   313,   313,   314,   314,
   314,   314,   315,   315,   317,   318,   316,   316,   316,   316,
   319,   319,   320,   321,   322,   320,   323,   323,   323,   323,
   323,   323,   323,   324,   324,   325,   325,   326,   326,   327,
   327,   328,   328,   328,   329,   328,   330,   330,   331,   331,
   332,   332,   332,   332,   332,   332,   332,   332,   333,   333,
   334,   334,   335,   335,   336,   336,   337,   337,   338,   338,
   338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
   338,   338,   338,   338,   338,   339,   338,   340,   338,   338,
   338,   341,   341,   342,   342,   343,   343,   343,   344,   344,
   345,   345,   345,   345,   345,   346,   346,   347,   347,   347,
   347,   347,   347,   348,   348,   349,   349,   349,   349,   349,
   350,   350,   351,   351,   351,   351,   351,   351,   351,   351,
   352,   352,   353,   353,   354,   354,   354,   354,   354,   354,
   355,   355,   356,   356,   357,   357,   358,   358,   358,   358,
   358,   359,   359,   360,   360,   361,   361,   362,   362,   362,
   363,   363,   365,   364,   364,   366,   364,   364,   364,   367,
   367,   368,   368,   369,   369,   370,   370,   370,   370,   370,
   372,   371,   373,   374,   373,   375,   375,   376,   376,   377,
   377,   377,   377,   378,   378,   379,   379,   379,   379,   379,
   380,   379,   379,   379,   379,   379,   379,   381,   381,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
   382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
   383,   383,   384,   384,   385,   385,   386,   386,   386,   387,
   387,   387,   387,   388,   388,   388,   389,   389,   389,   389,
   389,   390,   390,   390,   390,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   393,   393,   393,   393,
   393,   393,   393,   393,   394,   394,   394
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
     0,     2,     0,     2,     1,     0,     0,     7,     3,     3,
     6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     2,     2,     2,     3,     1,
     3,     2,     1,     2,     0,     5,     0,    11,     4,     4,
     0,     7,     6,     2,     2,     2,     2,     3,     2,     3,
     2,     3,     1,     3,     0,     3,     6,     6,     0,     4,
     0,     2,     3,     4,     0,     4,     0,     2,     3,     3,
     4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     3,     3,     3,     3,     0,     2,     3,     1,     0,
     2,     3,     4,     3,     4,     5,     0,     4,     0,     2,
     3,     3,     3,     3,     3,     3,     7,     3,     3,     3,
     3,     3,     7,     7,     7,     0,     2,     3,     1,     0,
     2,     3,     4,     3,     4,     4,     4,     4,     0,     4,
     0,     2,     3,     3,     4,     4,     7,     3,     3,     3,
     0,     0,     0,    18,     0,     4,     0,     2,     3,     3,
     3,     1,     3,     0,     3,     1,     3,     0,     3,     0,
     4,     0,     2,     3,     3,     3,     0,     4,     0,     2,
     3,     5,     3,     3,     4,     0,     2,     3,     1,     0,
     2,     3,     4,     3,     4,     4,     0,     4,     0,     2,
     3,     3,     3,     3,     0,     6,     3,     0,     5,     3,
     3,     3,     3,     0,     3,     0,     2,     4,     4,     4,
     4,     0,     2,     3,     3,     3,     0,     2,     3,     3,
     3,     3,     0,     2,     0,     0,     9,     3,     3,     3,
     0,     2,     3,     0,     0,     9,     0,     1,     1,     1,
     1,     1,     1,     4,     3,     0,     2,     3,     1,     0,
     2,     3,     4,     4,     0,     5,     0,     4,     0,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
     0,     3,     1,     3,     0,     3,     0,     2,     3,     3,
     4,     4,     4,     4,     5,     5,     2,     7,    11,     7,
     7,     9,    11,    13,    15,     0,     7,     0,     7,     7,
     3,     1,     1,     0,     2,     3,     3,     2,     0,     2,
     3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
     3,     3,     4,     0,     2,     3,     3,     3,     3,     4,
     0,     2,     3,     3,     3,     3,     3,     4,     4,     4,
     0,     4,     0,     2,     3,     3,     3,     3,     3,     3,
     0,     2,     3,     1,     0,     2,     3,     4,     4,     3,
     4,     0,     4,     0,     2,     3,     4,     0,     5,     5,
     0,     2,     0,     6,     3,     0,     4,     3,     3,     0,
     2,     3,     1,     0,     2,     3,     3,     3,     3,     4,
     0,     8,     0,     0,     3,     7,     7,     3,     6,     1,
     1,     1,     1,     0,     3,     1,     2,     2,    24,     2,
     0,    14,     8,    20,    29,    38,    12,     0,     2,     3,
     4,     4,     3,     2,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     5,     2,     3,
     0,     2,     0,     3,     1,     3,     0,     1,     3,     1,
     1,     3,     3,     3,     6,     5,     4,     4,     6,     9,
     5,     0,     3,     5,     5,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     3,     2,     2,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     6,     4,     4,     4,     4,     4,
     4,     6,     6,     6,     5,     2,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   626,   625,     0,    18,   552,    27,
   176,   139,   152,   206,    71,   266,   336,   441,     0,   470,
     0,    20,    24,     0,     0,    26,   618,   617,   624,     0,
   619,   620,   621,   622,   623,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   577,     0,    65,    28,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    21,     0,     0,   548,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   579,   580,     0,     0,   541,   540,   547,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   616,     0,     0,    66,     0,     6,     0,
   180,     8,   177,   179,   141,     9,   154,    10,   210,    11,
   207,   209,     0,     0,     7,    72,    76,   270,    12,   267,
   269,   340,    13,   337,   339,   445,    14,   442,   444,   481,
   474,    15,   471,   473,     0,    22,   494,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   578,     0,     0,     0,     0,   594,   593,   591,   592,   587,
   589,   588,   590,   582,   581,   583,   584,   585,   586,     0,
   551,   553,     0,     0,    29,    35,     0,     0,     0,     0,
     0,    77,     0,     0,     0,     0,     0,    23,     0,     0,
   496,     0,     0,     0,     0,     0,     0,     0,     0,   508,
   508,   595,   596,   597,   598,   599,   600,   601,   602,   603,
   604,     0,   606,   607,   608,   609,   610,   611,     0,     0,
     0,     0,   549,   543,   542,     0,   544,     0,     0,     0,
     0,     0,     0,     0,    62,     0,     0,     0,   178,   181,
     0,     0,   140,   142,     0,    81,     0,   153,   155,     0,
     0,     0,     0,     0,     0,   208,   211,    68,    42,     0,
     0,    40,     0,     0,    65,     0,     0,     0,     0,   268,
   271,     0,     0,   345,   338,   341,     0,     0,     0,     0,
   443,   446,   483,     0,     0,     0,     0,     0,   472,   475,
     0,   492,   493,   490,   491,   488,     0,   497,   498,    81,
   500,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   615,   627,   555,   554,   624,
     0,     0,     0,    32,     0,    65,     0,   187,     0,     0,
   145,     0,   159,     0,     0,     0,    83,     0,   257,     0,
     0,   219,   235,   250,     0,    41,    81,    55,    59,    52,
    39,    50,     0,    36,     0,     0,     0,     0,   277,   296,
     0,   347,     0,     0,   452,    68,     0,   484,     0,   483,
     0,     0,     0,   495,   494,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   509,     0,   605,   612,   613,   614,
     0,     0,   546,    30,     0,    70,     0,    43,     0,     0,
     0,   187,     0,   184,   182,     0,     0,     0,   143,     0,
     0,     0,   157,    82,     0,   156,     0,   214,   212,     0,
     0,     0,     0,    69,     0,     0,     0,    65,    81,     0,
    73,    78,   274,   272,     0,     0,     0,   342,     0,     0,
   367,   447,     0,     0,     0,   450,   482,     0,   476,   484,
   477,   479,   478,     0,     0,    81,     0,     0,     0,     0,
     0,   486,   537,   537,     0,     0,     0,     0,   537,     0,
   531,   531,   531,   514,     0,     0,     0,     0,   529,   487,
   550,   545,    67,     0,    31,    34,    63,     0,   189,   185,
   183,   147,   144,   161,   158,     0,     0,   624,   556,   557,
   558,   559,   560,   561,   562,   563,   564,   565,   566,   567,
   568,   569,   570,   571,   572,   573,   574,   575,     0,   121,
     0,     0,   117,   115,     0,     0,     0,     0,     0,     0,
     0,     0,    84,    85,   113,     0,   110,   259,   218,   213,
   221,   215,   237,   216,   252,   217,    74,    56,     0,    61,
     0,    51,     0,     0,    45,    37,    44,   273,   279,   275,
     0,     0,     0,     0,   276,   297,   343,   349,   344,     0,
   448,   454,   451,   449,   485,   480,   489,     0,     0,     0,
     0,     0,     0,     0,     0,   526,   538,   530,   523,     0,
     0,   510,   513,   521,   522,   516,   517,   520,   518,   519,
   515,   525,   524,     0,   527,    33,     0,   186,     0,     0,
     0,    79,    80,   112,     0,     0,     0,     0,     0,     0,
     0,   107,   106,   108,     0,   129,   127,   124,   126,   125,
     0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   114,   135,     0,     0,     0,     0,     0,     0,    60,     0,
    53,    75,    65,     0,   313,   313,   321,   302,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   386,   388,     0,   346,   368,     0,     0,    81,
     0,     0,     0,     0,     0,     0,   511,   512,   532,     0,
     0,     0,     0,     0,     0,    81,    81,    81,    81,     0,
     0,     0,    81,   188,   190,     0,     0,   146,   148,     0,
     0,     0,   160,   162,     0,    83,     0,     0,     0,    83,
     0,   109,     0,   335,     0,   105,   104,   101,   102,   103,
    97,    99,    98,   100,    93,    94,    89,    92,    95,    90,
    96,   128,   131,     0,   133,     0,     0,   111,     0,     0,
     0,     0,     0,   258,   260,     0,     0,     0,     0,   533,
     0,     0,   220,   222,     0,     0,     0,   236,   238,     0,
     0,     0,   251,   253,    58,     0,    54,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   288,   278,   280,
   327,   327,   327,     0,     0,     0,     0,     0,   537,     0,
     0,     0,   348,   350,     0,     0,    81,     0,     0,     0,
    81,     0,     0,     0,   399,     0,   406,   414,   421,     0,
     0,     0,     0,   377,     0,     0,   453,   455,     0,     0,
     0,     0,     0,     0,     0,   539,   528,    64,     0,     0,
     0,     0,    81,     0,    81,     0,     0,     0,     0,     0,
     0,    81,     0,     0,     0,   135,   166,     0,     0,   119,
     0,   120,     0,     0,     0,    83,   334,     0,   130,   132,
     0,     0,     0,     0,     0,     0,     0,    49,     0,    68,
     0,     0,   231,     0,    81,     0,     0,     0,     0,   246,
   248,     0,   242,   244,     0,     0,     0,     0,    57,    38,
     0,     0,     0,     0,     0,     0,     0,     0,    68,     0,
     0,     0,    83,     0,     0,   328,   329,   330,   331,   332,
   333,     0,   298,   314,     0,   299,     0,   300,   322,     0,
     0,     0,   307,   301,   303,     0,     0,    68,   361,     0,
     0,     0,     0,   363,   365,     0,     0,   369,     0,     0,
   370,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   391,   533,   533,   458,     0,     0,     0,
     0,   503,     0,     0,     0,   192,   193,   198,   199,     0,
   202,     0,   201,   195,   194,    65,   196,   191,     0,   200,
   150,   149,     0,     0,   163,   164,     0,     0,     0,   116,
     0,    87,   134,     0,     0,   136,   261,     0,   263,   264,
     0,   223,   224,     0,     0,     0,    65,   535,     0,   228,
   229,   230,   239,    65,   241,    65,   240,   255,   254,   256,
    68,    47,   292,   291,   284,   282,   283,   281,   285,   287,
   293,   290,     0,     0,     0,     0,   315,     0,   324,     0,
     0,     0,   352,   351,   359,    65,   353,   354,   357,   358,
    65,   355,   356,     0,     0,    81,     0,     0,     0,    81,
     0,     0,    81,     0,     0,    81,   371,   400,     0,     0,
    81,     0,     0,     0,     0,   372,   407,     0,     0,     0,
    81,     0,   373,   415,     0,     0,     0,     0,     0,     0,
     0,     0,   374,   422,    81,   393,   394,   392,   394,     0,
   456,     0,   537,     0,     0,     0,     0,    81,    81,     0,
    81,   151,   168,   165,     0,    91,     0,   123,     0,     0,
     0,     0,   265,   225,     0,   226,     0,   534,    81,   247,
     0,   243,     0,    48,   294,     0,   319,   320,   318,    83,
   323,    83,   304,   305,     0,     0,     0,     0,   306,   308,
   360,     0,   364,     0,   375,   376,     0,     0,   367,     0,
     0,     0,   367,     0,     0,     0,     0,     0,   367,     0,
     0,     0,     0,     0,     0,   367,     0,     0,     0,     0,
     0,   367,   367,     0,     0,   431,     0,     0,     0,     0,
     0,     0,   457,     0,   501,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   122,    83,    88,     0,     0,   262,
     0,     0,   536,   249,   245,     0,     0,   289,   316,   325,
     0,     0,     0,     0,   362,   366,     0,   537,     0,   537,
     0,    81,     0,   403,   401,   402,   404,    81,     0,   410,
   408,   409,   411,   412,   418,     0,   416,   417,   419,   425,
   427,     0,     0,   423,   424,     0,   426,     0,     0,   537,
   395,     0,   461,   461,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   167,   169,     0,   138,   137,     0,     0,     0,   286,     0,
     0,   309,   310,   311,   312,   380,     0,   378,     0,   381,
     0,   405,     0,   413,   420,   429,   430,   433,   428,   390,
   387,     0,   537,   398,   389,   327,   327,   507,   537,     0,
     0,     0,     0,   205,   204,   197,   203,     0,     0,     0,
     0,     0,     0,    83,     0,   227,   295,    83,     0,     0,
     0,     0,    81,     0,     0,   396,   397,     0,     0,     0,
   466,   460,     0,   462,   459,     0,     0,     0,     0,     0,
   170,   171,   172,   173,   174,   175,     0,     0,     0,     0,
   382,   367,     0,     0,     0,     0,     0,    81,     0,     0,
     0,   432,   434,     0,     0,     0,     0,   463,   502,     0,
     0,     0,     0,   118,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   468,   469,   465,
     0,    83,     0,     0,     0,     0,   232,   317,   326,   379,
   383,   367,     0,   435,   438,   439,   436,   437,   440,   467,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   384,   367,   464,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   233,   385,     0,
   504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    68,     0,     0,     0,     0,   499,     0,     0,     0,
     0,     0,   234,     0,     0,     0,     0,     0,     0,   505,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   506,
     0,     0,     0
};

static const short yydefgoto[] = {  1581,
     1,     2,     3,    19,    20,    21,    85,   150,   235,   457,
   322,   490,   723,   323,   324,   616,   848,   949,   411,   488,
   412,   386,   148,   293,   406,   294,    90,   166,   325,   396,
   397,   474,   475,   593,   795,  1199,   594,   680,   679,   676,
   711,   816,   818,    87,   238,   304,   468,   670,   779,    88,
   239,   309,   470,   671,   784,  1064,  1284,  1362,    86,   153,
   237,   300,   463,   669,   775,    89,   161,   240,   317,   481,
   714,   834,  1086,  1516,  1544,   482,   715,   839,   965,  1096,
   962,  1094,   483,   716,   844,   477,   713,   825,    91,   170,
   243,   331,   496,   724,   860,  1215,   983,  1297,   497,   626,
   864,  1005,  1122,  1230,   861,   994,  1220,  1370,   863,   999,
  1222,  1371,   995,   595,    92,   174,   244,   336,   423,   500,
   729,   874,  1010,  1126,  1016,  1131,   630,   747,   892,   893,
  1177,  1269,  1341,  1028,  1148,  1030,  1157,  1031,  1164,  1032,
  1174,  1336,  1425,  1463,    93,   178,   245,   342,   504,   748,
   898,  1180,  1396,  1434,  1492,  1467,    95,   183,   247,   350,
    22,   246,   428,   508,    46,   188,   357,   250,   260,  1346,
   367,   445,   658,  1178,  1089,   646,   125,   126,    23,    84,
   596,   647,    82,    28
};

static const short yypact[] = {-32768,
-32768,   130,  2393,  -126,   343,  -139,  -134,   -73,   -62,   -36,
   175,   188,   195,   199,   245,    12,    30,   429,-32768,-32768,
    41,-32768,-32768,   926,-32768,-32768,   276,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   340,-32768,
   116,-32768,-32768,   293,   322,-32768,-32768,-32768,-32768,   502,
-32768,-32768,-32768,-32768,-32768,   324,   326,   330,   334,   344,
   348,   356,   363,   368,   382,   396,   400,   405,   437,   442,
   455,   467,   483,   487,   493,   501,  2322,  2322,  2322,  2322,
  1132,-32768,   343,   -31,   424,    46,   157,   214,    52,    55,
    63,    92,   128,   533,   164,   270,-32768,   551,   551,-32768,
  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,
  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,
   702,   -20,   -20,  4303,   307,-32768,  1044,-32768,  2322,  2322,
  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,  2322,
  2322,  2322,  2322,-32768,   518,   723,-32768,   728,-32768,   446,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -128,   556,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   759,-32768,   571,  2309,  2309,  4330,
  4357,  4384,  4411,  4438,  4465,  4492,  4519,  4546,  4573,  2372,
  4600,  4627,  4654,  4681,  4708,  4735,  2403,  2434,  2465,   526,
-32768,   770,  2322,  1709,  2181,  1695,  5051,  1475,  1475,   643,
   643,   643,   643,   280,   280,   -20,   -20,   -20,   -20,   343,
-32768,   607,  -166,   595,-32768,-32768,   347,   317,   366,   369,
    98,-32768,   297,   425,   401,   592,   904,-32768,    93,   598,
-32768,    93,    93,   172,   603,   608,   609,   610,   611,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2322,-32768,-32768,-32768,-32768,-32768,-32768,  2322,  2322,
  2322,   800,-32768,-32768,  1044,  2322,  2202,  2322,   618,  2287,
   981,  1674,   645,   646,-32768,    24,   822,   826,-32768,-32768,
   636,   840,-32768,-32768,   644,   336,   845,-32768,-32768,   652,
   856,   858,   658,   659,   661,-32768,-32768,   -70,-32768,   692,
    23,-32768,   668,   670,    79,   868,   871,   671,   680,-32768,
-32768,   883,   682,-32768,-32768,-32768,   885,   715,   918,   920,
-32768,-32768,-32768,   921,   720,   923,   343,   930,-32768,-32768,
   733,-32768,-32768,-32768,-32768,-32768,   932,   779,-32768,   336,
-32768,   757,  2322,   760,   761,   762,    82,    84,  4762,  4789,
  4816,  4843,   769,  4870,  2322,  5005,-32768,-32768,  5005,   764,
   966,  2322,  3643,-32768,   332,   201,   767,-32768,   970,    62,
-32768,   971,-32768,   780,   786,   974,-32768,   982,-32768,   983,
    69,-32768,-32768,-32768,   783,-32768,   336,   984,   813,-32768,
-32768,-32768,   815,-32768,  1014,  1018,  1024,   136,-32768,-32768,
   159,-32768,   827,   173,-32768,   828,  1026,   833,  1039,-32768,
  1043,  1046,  1048,-32768,   571,  1051,   853,  2322,  2496,  2322,
  2322,  2322,  1056,  2377,-32768,  1058,-32768,-32768,-32768,-32768,
  1061,  2322,  5005,-32768,  3673,-32768,   332,-32768,  1065,  1066,
  1069,-32768,   292,-32768,-32768,   872,  1071,   314,-32768,   371,
  2322,  1075,-32768,-32768,   291,-32768,   375,-32768,-32768,  1086,
   398,   403,   415,-32768,  1103,   183,   178,   416,   336,    17,
-32768,-32768,-32768,-32768,  1104,   427,   612,-32768,  1106,   430,
-32768,-32768,  1107,   434,  1112,-32768,-32768,    41,-32768,   914,
-32768,-32768,-32768,   915,   928,   336,  2527,  2322,  2558,  2589,
  2620,-32768,  1336,  1336,  1135,   274,  2322,  2322,  1336,  2322,
  1137,-32768,-32768,-32768,  2322,  2322,  1138,  1388,-32768,-32768,
-32768,  5005,-32768,  1130,-32768,-32768,   937,   452,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  4897,   944,   -32,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   948,-32768,
   956,   957,-32768,-32768,  1155,   291,   291,   291,   291,  1159,
   287,  1158,  5101,   960,   964,   964,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1160,  2322,-32768,
  3703,-32768,    37,  1162,-32768,-32768,-32768,-32768,-32768,-32768,
   965,   967,   968,   969,-32768,-32768,-32768,-32768,-32768,   221,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2322,   973,  2322,
  2651,  2322,  2322,  2322,  2322,-32768,  5005,-32768,-32768,   343,
   343,-32768,  5005,  5005,-32768,  5005,-32768,  1177,  1177,  1177,
  5005,  5005,-32768,  2322,  5005,-32768,  2322,-32768,   538,    73,
   373,-32768,-32768,-32768,   977,   975,   977,   291,   990,   994,
   998,   999,   999,   999,  5078,-32768,-32768,-32768,-32768,-32768,
    19,-32768,   291,   291,   291,   291,   291,   291,   291,   291,
   291,   291,   291,   291,   291,   291,   291,   291,  1194,   879,
-32768,   993,   725,   946,   523,   321,  2322,  4924,-32768,   484,
-32768,-32768,   229,   763,-32768,-32768,-32768,-32768,   650,    56,
    20,  1001,  1004,  1008,  1010,  1011,   160,   279,  1007,  1009,
  1017,  1195,-32768,-32768,  1213,-32768,-32768,   300,  2682,   336,
  2713,  2322,  2744,  2775,  2806,   454,-32768,-32768,-32768,   457,
  3733,    93,    93,    93,    93,   205,   207,   336,   336,  1021,
  1216,  1228,   210,-32768,-32768,   349,  1229,-32768,-32768,  1034,
  1237,  1239,-32768,-32768,  1045,-32768,  1053,  2311,  1243,-32768,
  1049,-32768,  1050,-32768,   291,  5120,  5138,  5153,  5153,  5153,
   896,   896,   896,   896,   555,   555,   999,   999,   999,   999,
   999,-32768,-32768,  1062,  5101,   251,  2248,-32768,  1242,    95,
    95,  1254,  1262,-32768,-32768,  1263,  1264,  1268,  1067,  1068,
    93,    93,-32768,-32768,  1271,    44,    54,-32768,-32768,  1272,
  1301,  1302,-32768,-32768,  5005,  1305,-32768,  1113,    96,  1304,
  1317,    43,  1323,  1325,  1326,  1335,    93,-32768,-32768,-32768,
   996,  1280,  1003,   354,  1337,  1339,    65,   343,  1336,   343,
    66,  1341,-32768,-32768,  1340,  1343,   336,  1367,  1370,  1382,
   336,  1383,  1384,  2322,-32768,  2322,-32768,-32768,-32768,    93,
  1387,  1188,  1193,-32768,  1189,  1392,-32768,-32768,  2322,  1191,
  2322,  3763,  2322,  2322,  2322,-32768,-32768,-32768,  1419,  1421,
  1422,  1424,   336,  1425,   336,  1427,  1428,  1429,  1434,  1431,
  1433,   336,  1437,  1438,  1445,   993,-32768,  1446,  1449,-32768,
  1234,-32768,   291,  1249,  1257,-32768,-32768,  2236,-32768,-32768,
   291,  1259,  1260,   465,  1456,  1376,  1459,-32768,  1461,   828,
  1462,   177,  1265,  1465,   336,  1464,  1466,  1468,  1469,-32768,
-32768,  1480,-32768,-32768,  1487,  1488,  1493,  1494,-32768,-32768,
  1497,    23,  1499,  1500,  1501,  1502,  1504,  1507,   828,  1508,
  1510,  1512,-32768,  1513,  1515,-32768,-32768,-32768,-32768,-32768,
-32768,    93,-32768,-32768,  1322,-32768,    93,-32768,-32768,  1327,
  1520,  1521,-32768,-32768,-32768,  1523,  1524,   828,-32768,  1527,
  1531,  1532,  1533,-32768,-32768,  1537,  1539,-32768,  1344,  1345,
-32768,  1295,  1318,  1346,  1342,  1349,  2837,   726,  2868,  1324,
   579,   333,  1353,-32768,    67,    67,-32768,  1556,  3793,  1357,
  3823,-32768,  3853,  3883,  3913,-32768,-32768,-32768,-32768,  1358,
-32768,  1360,-32768,-32768,-32768,  1361,-32768,-32768,  1363,-32768,
-32768,-32768,  1559,   471,-32768,-32768,    93,  5032,  2322,-32768,
  1374,-32768,  5101,  1568,    93,-32768,-32768,  1573,-32768,-32768,
  1572,-32768,-32768,  1574,  1491,  1579,  1361,-32768,   489,-32768,
-32768,-32768,-32768,   492,-32768,   516,-32768,-32768,-32768,-32768,
   828,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1386,  1580,  1583,  1584,-32768,  1585,-32768,  1586,
  1592,   407,-32768,-32768,-32768,   531,-32768,-32768,-32768,-32768,
   547,-32768,-32768,  1597,  1598,   336,  1602,  1401,  2322,   336,
  2322,  1403,   336,  2322,  2322,   336,-32768,-32768,  2322,  1406,
   336,  2322,  2322,  2322,  2322,-32768,-32768,  2322,  1407,  2322,
   336,  2322,-32768,-32768,  2322,  1612,  1411,  1412,  2322,  2322,
  1413,  2322,-32768,-32768,   336,-32768,-32768,-32768,-32768,    42,
-32768,  1414,  1336,  1415,  1416,  1420,  1430,   336,   336,  1623,
   336,-32768,-32768,-32768,  1426,-32768,  2899,-32768,   291,  1435,
  1439,  1632,-32768,-32768,  1636,-32768,  1640,-32768,   336,-32768,
  1642,-32768,  1643,-32768,  1451,  1644,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   977,   977,   977,    93,-32768,-32768,
-32768,  1650,-32768,  1651,-32768,-32768,  1454,  1455,-32768,  2930,
  1470,  2961,-32768,  1658,  1298,  1569,  1664,  2992,-32768,  1665,
  1596,  1626,  1647,  1668,  1740,-32768,  1773,  1669,  1803,  1830,
  1675,-32768,-32768,  1851,  1878,-32768,  1905,  1478,   253,   262,
  1476,  1509,-32768,  2322,-32768,  2322,  2322,  2322,  2322,  1481,
  1514,  1545,  1517,   557,-32768,-32768,  5101,  1550,  1551,-32768,
  1708,  1557,-32768,-32768,-32768,  1713,  1714,-32768,-32768,-32768,
  1759,  1760,  1762,  1763,-32768,-32768,  1764,  1336,   428,  1336,
  1765,   336,   529,-32768,-32768,-32768,-32768,   336,   567,-32768,
-32768,-32768,-32768,-32768,-32768,   919,-32768,-32768,-32768,-32768,
-32768,  1032,  1070,-32768,-32768,   561,-32768,  1766,  1778,  1267,
-32768,  1779,-32768,-32768,  3943,  1587,  3023,  3054,  3085,  3116,
  1785,  1786,  1787,  1790,  1793,  2322,  2322,  2322,  2322,  2322,
-32768,-32768,  1590,-32768,-32768,  1710,  1795,  1600,-32768,  1595,
  1606,-32768,-32768,-32768,-32768,-32768,  1613,  1700,  1614,-32768,
  1615,-32768,  1627,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   343,  1336,-32768,-32768,   617,   678,-32768,  1336,  2322,
  2322,  2322,  2322,-32768,-32768,-32768,-32768,  1836,  1933,  1962,
  1992,  2013,  2034,-32768,  1839,-32768,-32768,-32768,   977,  1838,
  1657,  2322,   336,  2322,   666,-32768,-32768,  1852,  1860,  1863,
-32768,-32768,  1667,-32768,-32768,  1662,  3147,  3178,  3209,  3240,
-32768,-32768,-32768,-32768,-32768,-32768,  1672,  1677,  1688,  1689,
-32768,-32768,  4951,  1690,  3271,  1867,  2322,   336,  1890,    93,
  1891,-32768,-32768,  1892,  1895,  1896,    93,-32768,-32768,  2322,
  2322,  2322,  2322,-32768,  1897,  1898,  1900,  1436,  1901,  1691,
  2322,  1903,  2055,  1906,  1907,  1908,  1909,-32768,-32768,-32768,
  1910,-32768,  3973,  4003,  4033,  4063,-32768,-32768,-32768,-32768,
-32768,-32768,  4978,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1694,  1711,  1716,  1722,  1723,  1893,  1477,  1730,  1931,  2322,
  1734,  2322,  2322,    93,-32768,-32768,-32768,  3302,  2322,  3333,
  3364,  1935,  1511,  2322,  4093,  2322,  2322,-32768,-32768,  3395,
-32768,  3426,  3457,  1837,  2322,  2322,  2322,  1938,  4123,  4153,
  4183,   828,  1738,  1739,  1741,  1942,-32768,  1743,  2322,  1749,
  2322,  3488,-32768,  3519,  2322,  2322,  3550,  4213,  2322,-32768,
  4243,  1754,  1744,  2322,  3581,  2322,  3612,  2322,  4273,-32768,
  1963,  1970,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -160,-32768,-32768,  -245,   -50,-32768,-32768,  1122,  -479,-32768,
  -579,-32768,  -320,  -388,  -420,-32768,-32768,-32768,-32768,  -342,
-32768,  -763,-32768,  -543,-32768,-32768,-32768,-32768,-32768,-32768,
  1377,-32768,  1054,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1519,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1248,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -853,  -555,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1224,-32768,-32768,-32768,
   939,   797,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   633,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1549,-32768,  1479,  1894,-32768,  1565,  1812,-32768,
  1731,-32768,   263,  1173,-32768,  -508,  -290,  1791,  1171,-32768,
-32768,   -24,  -461,   -82
};


#define	YYLAST		5352


static const short yytable[] = {    81,
   145,   467,   674,   351,   416,   505,   358,   359,   361,  1000,
   617,   291,   480,   597,  1309,   648,    39,   437,  1313,   408,
   655,   409,   931,   793,  1319,   408,   935,   409,   387,   495,
   394,  1326,   499,   721,    41,   503,    42,  1332,  1333,   408,
   292,   409,   682,   683,   684,   685,  1271,   975,   960,    24,
     4,    24,   122,   123,   124,   127,     4,     6,   963,   163,
   875,   615,    29,     6,   485,   461,     6,     4,   465,  1008,
  1014,  1176,    30,   241,     6,   479,   190,   191,   192,   193,
   194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
   204,   205,   206,   207,   208,   209,     4,   318,   395,   458,
   948,   164,   318,     6,   215,   216,   217,   218,   219,   220,
   221,   222,   223,   224,   225,   226,   227,   228,   229,   785,
    96,   787,    97,   776,   597,   597,   597,   597,   976,    -2,
   381,   -43,     4,    31,   788,   777,   405,  1272,   977,     6,
   847,   971,   494,   319,    32,   319,   614,   289,   319,   796,
   797,   798,   799,   800,   801,   802,   803,   804,   805,   806,
   807,   808,   809,   810,   811,   498,   815,   613,     4,  -576,
    33,   146,  1071,   639,   592,     6,   318,   147,   143,   502,
    47,    48,    49,  1083,   144,   608,    44,    45,   285,   287,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,   394,   597,   394,    40,  1113,
   394,   877,   319,   410,   459,   730,   794,  1478,   720,   410,
   388,   597,   597,   597,   597,   597,   597,   597,   597,   597,
   597,   597,   597,   597,   597,   597,   597,   369,   597,  1273,
   961,   938,   151,   152,   370,   371,   372,   876,   159,   160,
   964,   374,   165,   376,   432,   379,    81,   383,   466,   168,
   169,  1009,  1015,   955,   185,   466,   186,  1517,    25,    26,
   778,   415,    27,   395,   443,   395,   446,   147,   395,   687,
   444,   688,   444,    47,    48,   558,   544,   321,   172,   173,
   320,  1533,   321,    51,    52,    53,    54,    55,   559,   560,
   561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
   571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
   581,   582,   583,   597,   176,   177,   458,   731,   439,   732,
   733,   734,   466,   735,   736,   737,   394,    25,    26,   738,
   453,    27,   739,   318,   756,   740,   895,   455,   741,   742,
  1012,   884,   326,   155,   156,   466,   885,   743,   744,    77,
   181,   182,   327,   760,    78,   896,   321,    79,   360,   466,
   301,    34,   319,   466,   609,   610,   840,   328,   878,  1068,
   584,   329,   302,   924,    35,   745,   841,  1073,   842,   319,
  1165,    36,   849,   460,   689,    37,   913,   900,   915,   147,
   296,   922,   297,   517,   395,   519,   520,   521,   310,  1001,
   157,   158,   298,   914,   916,   917,   918,   542,   746,   305,
   923,   -46,   730,   306,   311,    43,   780,   147,   781,   782,
  1166,   307,  1002,   652,   312,   313,   556,  1167,  1168,   690,
   233,    38,   314,   940,   315,  1339,  1299,     6,  1300,   941,
   650,  1340,   611,   651,  1342,  1169,  1225,  1226,  1170,  1171,
  1340,   597,   140,   141,   142,   585,   337,    83,   143,   597,
   886,   586,   587,    94,   144,   887,   408,   588,   409,   234,
   589,   338,  1102,   641,    98,   590,   591,   592,   549,   550,
   332,  1227,   653,   654,   330,   656,  1172,   897,   100,   339,
   661,   662,  1228,   665,   212,   213,   909,   910,   911,   912,
   552,   553,  1363,    99,   303,   101,   944,   102,   843,  1081,
   925,   103,   333,   730,  1020,   104,   321,   180,  1024,   334,
  1173,   340,  1433,  1433,   731,   105,   732,   733,   734,   106,
   735,   736,   737,   321,   299,   187,   738,   107,  1109,   739,
  1003,  1004,   740,  1084,   108,   741,   742,   757,   758,   109,
  1050,   730,  1052,   308,   743,   744,   316,   554,   555,  1059,
   783,   598,   599,   110,   718,   957,   958,  1125,   762,   763,
   764,   765,   766,   767,   768,   769,   770,   111,   835,   771,
   836,   112,   745,   772,   601,   602,   113,   837,   341,   603,
   604,   982,  1088,   749,  1229,   751,   773,   753,   754,   755,
   127,   605,   606,   612,   147,  1355,  1356,  1357,  1358,  1359,
  1360,   149,   335,   619,   620,  1378,   628,   629,   114,   127,
   632,   633,   761,   115,  1033,   731,  1158,   732,   733,   734,
  1447,   735,   736,   737,  1449,  1287,   116,   738,   549,   668,
   739,   906,   213,   740,   907,   213,   741,   742,   117,  1301,
  1302,  1303,  1076,   213,  1275,   743,   744,  1193,  1194,  1428,
  1214,  1429,  1430,   731,   118,   732,   733,   734,   119,   735,
   736,   737,   845,  1159,   120,   738,  1208,  1209,   739,  1210,
   147,   740,   121,   745,   741,   742,   210,   621,   622,   623,
   624,  1160,  1161,   743,   744,   865,   986,   987,   988,   989,
   990,   991,  1431,  1212,   147,   866,   230,   902,  1511,   231,
   838,  1456,   232,  1457,   282,  1190,  1382,   597,  1231,   147,
  1428,   745,  1429,  1430,  1458,   774,  1116,   704,   705,   706,
   707,  1118,  1162,   708,  1233,   147,  1459,   242,   867,   868,
   869,   870,   871,   872,  1361,   248,  1207,  1388,  1389,   946,
   947,  1460,   249,  1211,  1384,  1213,   283,   986,   987,   988,
   989,   990,   991,  1431,   290,  1011,  1163,  1013,   352,   353,
   354,   355,   127,  1237,   659,   660,   295,  1241,   343,  1377,
  1244,  1379,   819,  1247,   373,  1232,   356,   820,  1250,   362,
  1234,   821,   822,   823,   363,   364,   365,   366,  1258,   625,
   377,  1195,   384,   385,  1432,   850,   389,   851,   852,  1201,
   390,  1394,  1268,   138,   139,   140,   141,   142,   853,  1461,
  1142,   143,   391,  1143,   392,  1280,  1281,   144,  1283,   398,
   393,  1144,  1145,  1146,   854,   855,   856,   873,   399,  1027,
   400,  1029,   401,  1450,   402,   403,  1293,   404,   857,   407,
   413,   414,   417,  1462,  1039,   418,  1041,   419,  1043,  1044,
  1045,    47,    48,   558,  1427,  1435,   420,   421,   422,   424,
  1436,    51,    52,    53,    54,    55,   559,   560,   561,   562,
   563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
   573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
   583,   425,   426,   730,   427,   429,   430,   431,    47,    48,
    49,    50,   824,  1147,   433,   434,   435,   436,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,   438,   858,   -43,   440,   441,   442,  1381,
   859,   451,   454,   462,    76,  1383,   464,   469,   584,   344,
   473,   471,  1304,    47,    48,   380,    50,   472,   476,   478,
   484,   486,   489,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,   345,   487,
   491,   826,   492,   827,   828,   829,   830,   831,   832,    76,
   493,   319,   506,   501,   405,   731,   730,   732,   733,   734,
   507,   735,   736,   737,  1197,   509,   346,   738,   347,   511,
   739,   214,   512,   740,   513,   515,   741,   742,   984,  1475,
   985,   516,   522,   585,   540,   743,   744,   541,   348,   586,
   587,   545,   546,   547,   730,   588,   382,   551,   589,   557,
  1454,   813,   814,   590,   591,   592,   702,   703,   704,   705,
   706,   707,   600,   745,   708,   986,   987,   988,   989,   990,
   991,   992,   986,   987,   988,   989,   990,   991,   997,   607,
   618,   349,   627,   631,  1240,  1484,  1242,    77,   634,  1245,
  1246,   636,    78,   637,  1248,    79,  1385,  1251,  1252,  1253,
  1254,  1556,    80,  1255,   638,  1257,   666,  1259,   128,   649,
  1260,   657,   663,   667,  1264,  1265,   673,  1267,   731,   675,
   732,   733,   734,   833,   735,   736,   737,   677,   678,   681,
   738,   686,   691,   739,   709,   710,   740,   717,   722,   741,
   742,   725,    77,   726,   727,   728,   786,    78,   743,   744,
    79,   750,   759,   592,   791,   321,   731,    80,   732,   733,
   734,   789,   735,   736,   737,   790,   812,   708,   738,   817,
   891,   739,   879,   993,   740,   880,   745,   741,   742,   881,
   998,   882,   883,   888,  1486,   889,   743,   744,   890,   894,
   920,  1491,   129,   130,   131,   132,   133,   919,   134,   135,
   136,   137,   921,   926,   138,   139,   140,   141,   142,  1386,
   927,   928,   143,   929,   745,   934,   945,   930,   144,  1345,
   936,  1347,  1348,  1349,  1350,   932,   154,   937,   948,   162,
   167,   171,   175,   179,   939,   184,   950,   951,   952,    47,
    48,    49,   953,   954,   955,   959,   966,  1387,  1532,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,  1315,   967,   968,   969,   973,  1426,
   129,   130,   131,   132,   133,   970,   134,   135,   136,   137,
   236,   974,   138,   139,   140,   141,   142,   978,   980,   979,
   143,  1409,  1410,  1411,  1412,  1413,   144,   981,    47,    48,
    49,  1006,   984,  1007,   985,  1017,  1018,  1019,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,  1021,  1022,  1437,  1438,  1439,  1440,   986,
   987,   988,   989,   990,   991,   992,  1023,  1025,  1026,  1035,
    47,    48,    49,  1034,  1036,  1037,  1038,  1453,  1040,  1455,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,  1046,  1392,  1047,  1048,  1393,
  1049,  1051,  1483,  1053,  1054,  1055,  1056,  1057,  1150,  1058,
   730,  1151,  1067,  1060,  1061,  1493,  1494,  1495,  1496,  1152,
  1153,  1062,  1065,  1154,  1155,  1066,  1503,  1069,    77,  1070,
  1074,  1075,  1077,    78,  1078,  1079,    79,  1080,  1082,  1087,
  1090,  1085,  1091,   645,  1092,  1093,   129,   130,   131,   132,
   133,   730,   134,   135,   136,   137,  1095,   996,   138,   139,
   140,   141,   142,  1097,  1098,  1528,   143,  1530,  1531,  1099,
  1100,  1101,   144,  1136,  1535,  1103,  1104,  1105,  1106,  1540,
  1107,  1542,  1543,  1108,  1110,   730,  1111,  1114,  1112,  1115,
  1549,  1550,  1551,  1117,  1120,  1121,  1137,    77,  1119,  1123,
  1124,  1156,    78,  1127,  1562,    79,  1564,  1128,  1129,  1130,
  1567,  1568,   645,  1132,  1571,  1133,  1134,  1135,  1138,  1575,
  1139,  1577,   731,  1579,   732,   733,   734,  1140,   735,   736,
   737,  1175,  1181,  1183,   738,  1192,  1188,   739,  1189,   147,
   740,  1191,  1200,   741,   742,  1316,  1198,  1202,  1203,    77,
  1204,  1205,   743,   744,    78,  1206,  1217,    79,  1216,  1218,
  1219,  1221,  1223,   731,   664,   732,   733,   734,  1224,   735,
   736,   737,  1321,  1235,  1236,   738,  1238,  1239,   739,  1243,
   745,   740,  1249,  1256,   741,   742,  1261,  1262,  1263,  1266,
  1274,  1276,  1277,   743,   744,  1282,  1278,   731,  1285,   732,
   733,   734,  1322,   735,   736,   737,  1279,  1288,  1290,   738,
  1291,  1289,   739,  1500,  1292,   740,  1294,  1295,   741,   742,
  1298,   745,  1296,  1323,  1305,  1306,  1307,   743,   744,   134,
   135,   136,   137,  1308,  1314,   138,   139,   140,   141,   142,
  1317,  1320,  1311,   143,  1324,  1328,    47,    48,    49,   144,
  1338,  1331,  1343,  1351,  1525,   745,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    75,    47,    48,    49,  1366,  1344,  1352,  1368,  1539,  1354,
  1369,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,  1325,   129,   130,   131,
   132,   133,  1353,   134,   135,   136,   137,  1364,  1365,   138,
   139,   140,   141,   142,  1367,  1372,  1373,   143,  1374,  1375,
  1376,  1380,  1390,   144,   129,   130,   131,   132,   133,  1327,
   134,   135,   136,   137,  1391,  1395,   138,   139,   140,   141,
   142,  1404,  1405,  1406,   143,  1399,  1407,  1408,  1414,  1415,
   144,  1416,  1417,  1418,   129,   130,   131,   132,   133,  1329,
   134,   135,   136,   137,  1419,  1420,   138,   139,   140,   141,
   142,  1421,  1422,  1423,   143,   129,   130,   131,   132,   133,
   144,   134,   135,   136,   137,  1424,  1330,   138,   139,   140,
   141,   142,  1441,  1448,  1451,   143,   129,   130,   131,   132,
   133,   144,   134,   135,   136,   137,  1464,  1334,   138,   139,
   140,   141,   142,  1452,  1465,    77,   143,  1466,  1468,  1469,
    78,  1482,   144,    79,  1474,   131,   132,   133,   382,   134,
   135,   136,   137,   466,  1335,   138,   139,   140,   141,   142,
  1476,  1477,  1480,   143,  1485,  1487,  1519,  1502,  1488,   144,
    77,  1489,  1490,  1497,  1498,    78,  1499,  1501,    79,  1504,
   286,  1337,  1506,  1507,  1508,  1509,  1510,  1520,   129,   130,
   131,   132,   133,  1521,   134,   135,   136,   137,  1522,  1523,
   138,   139,   140,   141,   142,  1524,  1526,  1527,   143,  1442,
  1529,  1538,  1552,  1548,   144,  1557,  1558,  1559,  1560,  1561,
  1574,   129,   130,   131,   132,   133,  1563,   134,   135,   136,
   137,  1573,  1582,   138,   139,   140,   141,   142,  1443,  1583,
   972,   143,   712,   862,  1179,  1270,  1397,   144,   510,  1063,
   548,   129,   130,   131,   132,   133,   635,   134,   135,   136,
   137,   368,   189,   138,   139,   140,   141,   142,  1444,   514,
   261,   143,   956,   284,     0,     0,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,  1445,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   129,
   130,   131,   132,   133,   144,   134,   135,   136,   137,     0,
  1446,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,   129,   130,   131,   132,
   133,  1505,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,   288,     0,
   143,   129,   130,   131,   132,   133,   144,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,   375,
     0,   143,   129,   130,   131,   132,   133,   144,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,   129,   130,   131,   132,   133,   144,   134,
   135,   136,   137,  1072,     0,   138,   139,   140,   141,   142,
    47,    48,    49,   143,     0,     0,     0,     0,     0,   144,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,     0,     0,     0,     0,    47,
    48,    49,   378,     0,     0,   942,     0,     0,   943,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    47,    48,    49,     0,     0,     0,
     0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   129,   130,   131,   132,   133,   144,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     4,     0,     0,
   143,     0,     5,     0,     6,     0,   144,     0,     0,     0,
     0,     0,     0,     0,   692,   693,   694,   695,   696,   697,
   698,   699,   700,   701,     0,     0,   702,   703,   704,   705,
   706,   707,     0,   523,   708,     7,     0,     0,     0,    77,
     0,     0,     8,     0,    78,     0,     0,    79,     0,     0,
     0,     0,     0,     0,     0,     9,     0,    10,   251,   252,
   253,   254,   255,   256,   257,   258,   259,    11,     0,     0,
     0,    12,     0,     0,     0,     0,     0,     0,    77,     0,
     0,     0,    13,    78,     0,     0,    79,   524,     0,   692,
   693,   694,   695,   696,   697,   698,   699,   700,   701,    14,
     0,   702,   703,   704,   705,   706,   707,     0,     0,   708,
     0,     0,     0,    77,     0,     0,     0,     0,    78,   933,
     0,    79,     0,     0,     0,   525,     0,     0,     0,     0,
     0,     0,    15,     0,    16,     0,   526,   527,   528,   529,
   530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,    17,    18,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
   272,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,   279,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,   280,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,   281,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,   518,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,   640,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,   642,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,   643,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,   644,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,   752,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
   899,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,   901,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,   903,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,   904,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,   905,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,  1141,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,  1149,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,  1286,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,  1310,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,  1312,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
  1318,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,  1400,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,  1401,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,  1402,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,  1403,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,  1470,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,  1471,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,  1472,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,  1473,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,  1481,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
  1534,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,  1536,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,  1537,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,  1545,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,  1546,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,  1547,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,  1565,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,  1566,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,  1569,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,  1576,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
  1578,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
   456,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
   543,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
   719,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
   908,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1042,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1182,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1184,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1185,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1186,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1187,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1398,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1512,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1513,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1514,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1515,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1541,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1553,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1554,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1555,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1570,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1572,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
  1580,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,   211,     0,     0,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,   262,     0,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,   263,
     0,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,   264,     0,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,   265,     0,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
   266,     0,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,   267,     0,   144,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,   268,     0,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,   269,     0,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,   270,     0,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,   271,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,   273,     0,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,   274,
     0,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,   275,     0,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,   276,     0,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
   277,     0,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,   278,     0,   144,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,   447,     0,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,   448,     0,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,   449,     0,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,   450,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,   452,     0,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,   672,
     0,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,   846,     0,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,  1479,     0,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
  1518,     0,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
   692,   693,   694,   695,   696,   697,   698,   699,   700,   701,
     0,     0,   702,   703,   704,   705,   706,   707,     0,     0,
   708,     0,   132,   133,  1196,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,   692,   693,   694,   695,
   696,   697,   698,   699,   700,   701,     0,     0,   702,   703,
   704,   705,   706,   707,     0,     0,   708,     0,   792,   692,
   693,   694,   695,   696,   697,   698,   699,   700,   701,     0,
     0,   702,   703,   704,   705,   706,   707,     0,     0,   708,
   694,   695,   696,   697,   698,   699,   700,   701,     0,     0,
   702,   703,   704,   705,   706,   707,     0,     0,   708,   695,
   696,   697,   698,   699,   700,   701,     0,     0,   702,   703,
   704,   705,   706,   707,     0,     0,   708,   698,   699,   700,
   701,     0,     0,   702,   703,   704,   705,   706,   707,     0,
     0,   708
};

static const short yycheck[] = {    24,
    83,   390,   558,   249,   325,   426,   252,   253,   254,   863,
   490,   178,   401,   475,  1239,   524,     5,   360,  1243,     3,
   529,     5,   786,     5,  1249,     3,   790,     5,     5,   418,
    11,  1256,   421,   613,     5,   424,     7,  1262,  1263,     3,
   207,     5,   586,   587,   588,   589,     5,     5,     5,   178,
     5,   178,    77,    78,    79,    80,     5,    12,     5,     5,
     5,    45,   202,    12,   407,   386,    12,     5,     7,     5,
     5,     5,   207,   202,    12,     7,   101,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,     5,     5,    79,     5,
     5,    47,     5,    12,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   675,
     5,   677,     7,    51,   586,   587,   588,   589,    86,     0,
   291,   202,     5,   207,   678,    63,   207,    96,    96,    12,
   720,    46,     7,    51,   207,    51,   489,   230,    51,   693,
   694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
   704,   705,   706,   707,   708,     7,   710,   488,     5,   202,
   207,   203,   936,   516,   207,    12,     5,   209,   199,     7,
     3,     4,     5,     7,   205,     3,   146,   147,   213,   214,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    11,   678,    11,   207,   983,
    11,   202,    51,   207,   385,     5,   208,  1452,   192,   207,
   207,   693,   694,   695,   696,   697,   698,   699,   700,   701,
   702,   703,   704,   705,   706,   707,   708,   272,   710,   208,
   207,   795,   207,   208,   279,   280,   281,   202,   207,   208,
   207,   286,   208,   288,   347,   290,   291,   292,   207,   207,
   208,   207,   207,   207,     5,   207,     7,  1502,     5,     6,
   208,   203,     9,    79,   203,    79,   203,   209,    79,     3,
   209,     5,   209,     3,     4,     5,   457,   205,   207,   208,
   203,  1526,   205,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,   795,   207,   208,     5,   117,   363,   119,
   120,   121,   207,   123,   124,   125,    11,     5,     6,   129,
   375,     9,   132,     5,   645,   135,    57,   382,   138,   139,
   869,   202,    66,   207,   208,   207,   207,   147,   148,   192,
   207,   208,    76,   664,   197,    76,   205,   200,   207,   207,
    64,   207,    51,   207,   202,   208,    66,    91,   731,   933,
   100,    95,    76,    45,   207,   175,    76,   941,    78,    51,
    68,   207,   723,   203,   118,   207,   202,   750,   202,   209,
    64,   202,    66,   438,    79,   440,   441,   442,    50,    66,
   207,   208,    76,   766,   767,   768,   769,   452,   208,    64,
   773,   203,     5,    68,    66,     7,    64,   209,    66,    67,
   108,    76,    89,   526,    76,    77,   471,   115,   116,   163,
     5,   207,    84,   203,    86,   203,  1220,    12,  1222,   209,
   187,   209,   487,   190,   203,   133,    60,    61,   136,   137,
   209,   933,   193,   194,   195,   185,    76,   202,   199,   941,
   202,   191,   192,   144,   205,   207,     3,   197,     5,    44,
   200,    91,   972,   518,   202,   205,   206,   207,   207,   208,
    76,    95,   527,   528,   208,   530,   174,   208,     7,   109,
   535,   536,   106,   538,   208,   209,   762,   763,   764,   765,
   207,   208,  1286,   202,   208,   202,   817,   202,   208,   950,
   776,   202,   108,     5,   877,   202,   205,     5,   881,   115,
   208,   141,  1396,  1397,   117,   202,   119,   120,   121,   202,
   123,   124,   125,   205,   208,     5,   129,   202,   979,   132,
   207,   208,   135,   952,   202,   138,   139,   650,   651,   202,
   913,     5,   915,   208,   147,   148,   208,   207,   208,   922,
   208,   207,   208,   202,   609,   831,   832,  1008,    51,    52,
    53,    54,    55,    56,    57,    58,    59,   202,    76,    62,
    78,   202,   175,    66,   207,   208,   202,    85,   208,   207,
   208,   857,   955,   638,   208,   640,    79,   642,   643,   644,
   645,   207,   208,   208,   209,    69,    70,    71,    72,    73,
    74,   208,   208,   207,   208,   208,   207,   208,   202,   664,
   207,   208,   667,   202,   890,   117,    68,   119,   120,   121,
  1414,   123,   124,   125,  1418,  1199,   202,   129,   207,   208,
   132,   208,   209,   135,   208,   209,   138,   139,   202,  1225,
  1226,  1227,   208,   209,  1183,   147,   148,   207,   208,    63,
  1101,    65,    66,   117,   202,   119,   120,   121,   202,   123,
   124,   125,   717,   115,   202,   129,   208,   209,   132,   208,
   209,   135,   202,   175,   138,   139,     5,    96,    97,    98,
    99,   133,   134,   147,   148,    66,   100,   101,   102,   103,
   104,   105,   106,   208,   209,    76,   209,   752,  1492,     7,
   208,    66,     5,    68,   209,  1056,   208,  1199,   208,   209,
    63,   175,    65,    66,    79,   208,   992,   193,   194,   195,
   196,   997,   174,   199,   208,   209,    91,   202,   109,   110,
   111,   112,   113,   114,   208,     7,  1087,   207,   208,   820,
   821,   106,   202,  1094,   208,  1096,     7,   100,   101,   102,
   103,   104,   105,   106,   178,   868,   208,   870,   191,   192,
   193,   194,   817,  1136,   532,   533,   202,  1140,   207,  1308,
  1143,  1310,    78,  1146,     5,  1126,   209,    83,  1151,   207,
  1131,    87,    88,    89,   207,   207,   207,   207,  1161,   208,
   203,  1067,   178,   178,   208,    63,     5,    65,    66,  1075,
     5,  1340,  1175,   191,   192,   193,   194,   195,    76,   174,
   115,   199,   207,   118,     5,  1188,  1189,   205,  1191,     5,
   207,   126,   127,   128,    92,    93,    94,   208,   207,   884,
     5,   886,     5,  1419,   207,   207,  1209,   207,   106,   178,
   203,   202,     5,   208,   899,     5,   901,   207,   903,   904,
   905,     3,     4,     5,  1393,   208,   207,     5,   207,     5,
  1399,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
    42,   207,     5,     5,     5,     5,   207,     5,     3,     4,
     5,     6,   208,   208,     5,   203,     5,   159,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,   207,   202,   202,   207,   207,   207,  1312,
   208,   203,     7,   207,    49,  1318,     7,     7,   100,    76,
     7,   202,  1228,     3,     4,     5,     6,   202,     7,     7,
   208,     8,   178,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,   115,   207,
     7,    76,     5,    78,    79,    80,    81,    82,    83,    49,
     7,    51,     7,   207,   207,   117,     5,   119,   120,   121,
   208,   123,   124,   125,  1069,     7,   143,   129,   145,     7,
   132,     8,     7,   135,     7,     5,   138,   139,    63,  1448,
    65,   209,     7,   185,     7,   147,   148,     7,   165,   191,
   192,     7,     7,     5,     5,   197,   205,     7,   200,     5,
  1423,   203,   204,   205,   206,   207,   191,   192,   193,   194,
   195,   196,     7,   175,   199,   100,   101,   102,   103,   104,
   105,   106,   100,   101,   102,   103,   104,   105,   106,     7,
     7,   208,     7,     7,  1139,  1458,  1141,   192,     7,  1144,
  1145,   208,   197,   209,  1149,   200,   208,  1152,  1153,  1154,
  1155,  1552,   207,  1158,   207,  1160,     7,  1162,     7,     5,
  1165,     5,     5,   207,  1169,  1170,   203,  1172,   117,   202,
   119,   120,   121,   208,   123,   124,   125,   202,   202,     5,
   129,     3,     5,   132,   205,   202,   135,     8,     7,   138,
   139,   207,   192,   207,   207,   207,   202,   197,   147,   148,
   200,   209,     6,   207,   187,   205,   117,   207,   119,   120,
   121,   202,   123,   124,   125,   202,     3,   199,   129,   207,
     6,   132,   202,   208,   135,   202,   175,   138,   139,   202,
   208,   202,   202,   207,  1460,   207,   147,   148,   202,     7,
     5,  1467,   179,   180,   181,   182,   183,   207,   185,   186,
   187,   188,     5,     5,   191,   192,   193,   194,   195,   208,
   207,     5,   199,     5,   175,     3,     5,   203,   205,  1274,
   202,  1276,  1277,  1278,  1279,   203,    86,   208,     5,    89,
    90,    91,    92,    93,   203,    95,     5,     5,     5,     3,
     4,     5,     5,   207,   207,     5,     5,   208,  1524,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,     7,     5,     5,     3,     5,  1392,
   179,   180,   181,   182,   183,   203,   185,   186,   187,   188,
   150,     5,   191,   192,   193,   194,   195,     5,     3,     5,
   199,  1356,  1357,  1358,  1359,  1360,   205,     3,     3,     4,
     5,     5,    63,     5,    65,     5,     7,     5,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,     7,     5,  1400,  1401,  1402,  1403,   100,
   101,   102,   103,   104,   105,   106,     5,     5,     5,   202,
     3,     4,     5,     7,   202,   207,     5,  1422,   208,  1424,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,     7,   160,     7,     7,   163,
     7,     7,  1457,     7,     7,     7,     3,     7,   115,     7,
     5,   118,   209,     7,     7,  1470,  1471,  1472,  1473,   126,
   127,     7,     7,   130,   131,     7,  1481,   209,   192,   203,
   202,   202,     7,   197,    89,     7,   200,     7,     7,     5,
     7,   207,     7,   207,     7,     7,   179,   180,   181,   182,
   183,     5,   185,   186,   187,   188,     7,   208,   191,   192,
   193,   194,   195,     7,     7,  1520,   199,  1522,  1523,     7,
     7,     5,   205,   209,  1529,     7,     7,     7,     7,  1534,
     7,  1536,  1537,     7,     7,     5,     7,     5,     7,     5,
  1545,  1546,  1547,   202,     5,     5,   209,   192,   202,     7,
     7,   208,   197,     7,  1559,   200,  1561,     7,     7,     7,
  1565,  1566,   207,     7,  1569,     7,   203,   203,   203,  1574,
   209,  1576,   117,  1578,   119,   120,   121,   209,   123,   124,
   125,   209,     7,   207,   129,     7,   209,   132,   209,   209,
   135,   209,     5,   138,   139,     7,   203,     5,     7,   192,
     7,    91,   147,   148,   197,     7,     7,   200,   203,     7,
     7,     7,     7,   117,   207,   119,   120,   121,     7,   123,
   124,   125,     7,     7,     7,   129,     5,   207,   132,   207,
   175,   135,   207,   207,   138,   139,     5,   207,   207,   207,
   207,   207,   207,   147,   148,     3,   207,   117,   203,   119,
   120,   121,     7,   123,   124,   125,   207,   203,     7,   129,
     5,   203,   132,   208,     5,   135,     5,     5,   138,   139,
     7,   175,   202,     7,     5,     5,   203,   147,   148,   185,
   186,   187,   188,   209,     7,   191,   192,   193,   194,   195,
     7,     7,   203,   199,     7,     7,     3,     4,     5,   205,
   203,     7,   207,   203,   208,   175,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,     3,     4,     5,     7,   207,   203,     5,   208,   203,
     7,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,     7,   179,   180,   181,
   182,   183,   208,   185,   186,   187,   188,   208,   208,   191,
   192,   193,   194,   195,   208,     7,     7,   199,     7,     7,
     7,     7,     7,   205,   179,   180,   181,   182,   183,     7,
   185,   186,   187,   188,     7,     7,   191,   192,   193,   194,
   195,     7,     7,     7,   199,   209,     7,     5,   209,    90,
   205,     7,   203,   209,   179,   180,   181,   182,   183,     7,
   185,   186,   187,   188,   209,   203,   191,   192,   193,   194,
   195,   122,   209,   209,   199,   179,   180,   181,   182,   183,
   205,   185,   186,   187,   188,   209,     7,   191,   192,   193,
   194,   195,     7,     5,     7,   199,   179,   180,   181,   182,
   183,   205,   185,   186,   187,   188,     5,     7,   191,   192,
   193,   194,   195,   207,     5,   192,   199,     5,   202,   208,
   197,     5,   205,   200,   203,   181,   182,   183,   205,   185,
   186,   187,   188,   207,     7,   191,   192,   193,   194,   195,
   203,   203,   203,   199,     5,     5,   203,   207,     7,   205,
   192,     7,     7,     7,     7,   197,     7,     7,   200,     7,
   202,     7,     7,     7,     7,     7,     7,   207,   179,   180,
   181,   182,   183,   208,   185,   186,   187,   188,   207,   207,
   191,   192,   193,   194,   195,    43,   207,     7,   199,     7,
   207,     7,     5,   107,   205,   208,   208,   207,     7,   207,
   207,   179,   180,   181,   182,   183,   208,   185,   186,   187,
   188,   208,     0,   191,   192,   193,   194,   195,     7,     0,
   849,   199,   596,   726,  1036,  1179,  1344,   205,   430,   926,
   462,   179,   180,   181,   182,   183,   508,   185,   186,   187,
   188,   261,    99,   191,   192,   193,   194,   195,     7,   435,
   189,   199,   830,   213,    -1,    -1,    -1,   205,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,     7,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,   179,
   180,   181,   182,   183,   205,   185,   186,   187,   188,    -1,
     7,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
    -1,    -1,    -1,    -1,    -1,   205,   179,   180,   181,   182,
   183,     7,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,
    -1,    -1,   205,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,
    -1,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,     8,    -1,
   199,   179,   180,   181,   182,   183,   205,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,     8,
    -1,   199,   179,   180,   181,   182,   183,   205,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,   179,   180,   181,   182,   183,   205,   185,
   186,   187,   188,     8,    -1,   191,   192,   193,   194,   195,
     3,     4,     5,   199,    -1,    -1,    -1,    -1,    -1,   205,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,     3,
     4,     5,     6,    -1,    -1,    48,    -1,    -1,    51,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,     3,     4,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
   179,   180,   181,   182,   183,   205,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,     5,    -1,    -1,
   199,    -1,    10,    -1,    12,    -1,   205,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   179,   180,   181,   182,   183,   184,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,   196,    -1,    57,   199,    43,    -1,    -1,    -1,   192,
    -1,    -1,    50,    -1,   197,    -1,    -1,   200,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    63,    -1,    65,   150,   151,
   152,   153,   154,   155,   156,   157,   158,    75,    -1,    -1,
    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
    -1,    -1,    90,   197,    -1,    -1,   200,   111,    -1,   179,
   180,   181,   182,   183,   184,   185,   186,   187,   188,   107,
    -1,   191,   192,   193,   194,   195,   196,    -1,    -1,   199,
    -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,   197,   209,
    -1,   200,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
    -1,    -1,   140,    -1,   142,    -1,   160,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,   176,   177,
   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,
   209,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
    -1,   209,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,
    -1,    -1,   209,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,
    -1,    -1,    -1,   209,   179,   180,   181,   182,   183,    -1,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,
   205,    -1,    -1,    -1,   209,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,
    -1,   205,    -1,    -1,    -1,   209,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,
    -1,    -1,   205,    -1,    -1,    -1,   209,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,
    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,
    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,
   209,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
    -1,   209,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,
    -1,    -1,   209,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,
    -1,    -1,    -1,   209,   179,   180,   181,   182,   183,    -1,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,
   205,    -1,    -1,    -1,   209,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,
    -1,   205,    -1,    -1,    -1,   209,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,
    -1,    -1,   205,    -1,    -1,    -1,   209,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,
    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,
    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,
   209,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
    -1,   209,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,
    -1,    -1,   209,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,
    -1,    -1,    -1,   209,   179,   180,   181,   182,   183,    -1,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,
   205,    -1,    -1,    -1,   209,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,
    -1,   205,    -1,    -1,    -1,   209,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,
    -1,    -1,   205,    -1,    -1,    -1,   209,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,
    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,
    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,
   209,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
    -1,   209,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,
    -1,    -1,   209,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,
    -1,    -1,    -1,   209,   179,   180,   181,   182,   183,    -1,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,
   205,    -1,    -1,    -1,   209,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,
    -1,   205,    -1,    -1,    -1,   209,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,
    -1,    -1,   205,    -1,    -1,    -1,   209,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,
    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,
    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,   209,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,
   209,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,    -1,
   208,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,   201,    -1,    -1,    -1,   205,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,
    -1,    -1,   203,    -1,   205,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,
    -1,   205,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,    -1,    -1,    -1,   203,    -1,   205,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
    -1,    -1,    -1,   203,    -1,   205,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,
   203,    -1,   205,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,    -1,   205,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,    -1,    -1,    -1,   203,    -1,   205,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,
    -1,   203,    -1,   205,   179,   180,   181,   182,   183,    -1,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,    -1,
   205,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,   203,    -1,   205,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,
    -1,    -1,   203,    -1,   205,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,
    -1,   205,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,    -1,    -1,    -1,   203,    -1,   205,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
    -1,    -1,    -1,   203,    -1,   205,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,
   203,    -1,   205,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,    -1,   205,
   179,   180,   181,   182,   183,    -1,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,
   199,    -1,    -1,    -1,   203,    -1,   205,   179,   180,   181,
   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,
   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,
    -1,   203,    -1,   205,   179,   180,   181,   182,   183,    -1,
   185,   186,   187,   188,    -1,    -1,   191,   192,   193,   194,
   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,    -1,
   205,   179,   180,   181,   182,   183,    -1,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,    -1,
    -1,   199,    -1,    -1,    -1,   203,    -1,   205,   179,   180,
   181,   182,   183,    -1,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,    -1,
    -1,    -1,   203,    -1,   205,   179,   180,   181,   182,   183,
    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,   193,
   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,   203,
    -1,   205,   179,   180,   181,   182,   183,    -1,   185,   186,
   187,   188,    -1,    -1,   191,   192,   193,   194,   195,    -1,
    -1,    -1,   199,    -1,    -1,    -1,   203,    -1,   205,   179,
   180,   181,   182,   183,    -1,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
    -1,    -1,    -1,   203,    -1,   205,   179,   180,   181,   182,
   183,    -1,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,    -1,    -1,    -1,   199,    -1,    -1,    -1,
   203,    -1,   205,   179,   180,   181,   182,   183,    -1,   185,
   186,   187,   188,    -1,    -1,   191,   192,   193,   194,   195,
    -1,    -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,
   179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
    -1,    -1,   191,   192,   193,   194,   195,   196,    -1,    -1,
   199,    -1,   182,   183,   203,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,    -1,    -1,    -1,   199,
    -1,    -1,    -1,    -1,    -1,   205,   179,   180,   181,   182,
   183,   184,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,   196,    -1,    -1,   199,    -1,   201,   179,
   180,   181,   182,   183,   184,   185,   186,   187,   188,    -1,
    -1,   191,   192,   193,   194,   195,   196,    -1,    -1,   199,
   181,   182,   183,   184,   185,   186,   187,   188,    -1,    -1,
   191,   192,   193,   194,   195,   196,    -1,    -1,   199,   182,
   183,   184,   185,   186,   187,   188,    -1,    -1,   191,   192,
   193,   194,   195,   196,    -1,    -1,   199,   185,   186,   187,
   188,    -1,    -1,   191,   192,   193,   194,   195,   196,    -1,
    -1,   199
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
#line 316 "GetDP.y"
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
#line 352 "GetDP.y"
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
      if (FlagError)  
	vyyerror("Unknown type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 44:
#line 589 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 45:
#line 591 "GetDP.y"
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
#line 607 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 47:
#line 610 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 48:
#line 613 "GetDP.y"
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
#line 664 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 50:
#line 676 "GetDP.y"
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
#line 700 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 52:
#line 707 "GetDP.y"
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
#line 720 "GetDP.y"
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
#line 738 "GetDP.y"
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
#line 761 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 56:
#line 765 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 57:
#line 774 "GetDP.y"
{ 
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
#line 788 "GetDP.y"
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
#line 802 "GetDP.y"
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
#line 836 "GetDP.y"
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
#line 849 "GetDP.y"
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
#line 873 "GetDP.y"
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
#line 883 "GetDP.y"
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
#line 905 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 68:
#line 910 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 69:
#line 911 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 70:
#line 916 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 74:
#line 935 "GetDP.y"
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
#line 955 "GetDP.y"
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
#line 1006 "GetDP.y"
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
#line 1026 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 80:
#line 1032 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 81:
#line 1038 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 82:
#line 1041 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 83:
#line 1049 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 84:
#line 1053 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 86:
#line 1065 "GetDP.y"
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
case 87:
#line 1078 "GetDP.y"
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
case 88:
#line 1092 "GetDP.y"
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
case 89:
#line 1107 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1113 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1119 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1125 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1131 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1137 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1143 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1149 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1155 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1161 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1167 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1173 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1179 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1185 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1191 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1197 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 105:
#line 1203 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 106:
#line 1210 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 108:
#line 1218 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 110:
#line 1231 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 111:
#line 1237 "GetDP.y"
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
case 112:
#line 1311 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity =
	Get_DefineForString(QuantityFromFS_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown type of discrete Quantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(QuantityFromFS_Type)) ;
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
case 113:
#line 1344 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 114:
#line 1353 "GetDP.y"
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
case 115:
#line 1365 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 116:
#line 1367 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 117:
#line 1378 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 118:
#line 1380 "GetDP.y"
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
case 119:
#line 1396 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 120:
#line 1402 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 121:
#line 1408 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 122:
#line 1410 "GetDP.y"
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
case 123:
#line 1439 "GetDP.y"
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
case 124:
#line 1463 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError) 
	vyyerror("Unknown current value: $%s %s", yyvsp[0].c, Get_Valid_SXP(Current_Value)) ;
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 125:
#line 1474 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 126:
#line 1480 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 127:
#line 1487 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 128:
#line 1493 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 129:
#line 1500 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 130:
#line 1511 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 131:
#line 1512 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 132:
#line 1513 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 133:
#line 1518 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 134:
#line 1519 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 135:
#line 1525 "GetDP.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 137:
#line 1530 "GetDP.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 138:
#line 1537 "GetDP.y"
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
case 139:
#line 1564 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 140:
#line 1569 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 141:
#line 1576 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 143:
#line 1585 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 144:
#line 1590 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 145:
#line 1597 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 146:
#line 1600 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 147:
#line 1607 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 149:
#line 1617 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 150:
#line 1620 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 151:
#line 1623 "GetDP.y"
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
      else  vyyerror("Unknown type of Jacobian: %s %s", 
		     yyvsp[-2].c, Get_Valid_SXD1N(Jacobian_Type)) ;
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 152:
#line 1658 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 153:
#line 1664 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 154:
#line 1671 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 156:
#line 1684 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 157:
#line 1691 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 158:
#line 1694 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 159:
#line 1701 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 160:
#line 1704 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 161:
#line 1711 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 163:
#line 1723 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of Integration method: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 164:
#line 1732 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown subtype of Integration method: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 165:
#line 1741 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 166:
#line 1748 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 167:
#line 1751 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 168:
#line 1758 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 170:
#line 1774 "GetDP.y"
{ QuadratureCase_S.ElementType = Get_DefineForString(Element_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of Element: %s %s", 
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
case 171:
#line 1827 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 172:
#line 1830 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 173:
#line 1833 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 174:
#line 1836 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 175:
#line 1839 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 176:
#line 1850 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 178:
#line 1860 "GetDP.y"
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
case 180:
#line 1885 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 182:
#line 1899 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 183:
#line 1905 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 184:
#line 1912 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 185:
#line 1920 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 186:
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
case 187:
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
case 188:
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
case 189:
#line 1984 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 191:
#line 1998 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 192:
#line 2007 "GetDP.y"
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
case 193:
#line 2031 "GetDP.y"
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
case 194:
#line 2056 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 195:
#line 2061 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 196:
#line 2069 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 197:
#line 2077 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 198:
#line 2087 "GetDP.y"
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
case 199:
#line 2104 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 200:
#line 2112 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 201:
#line 2119 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 202:
#line 2126 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 203:
#line 2135 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 204:
#line 2144 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 205:
#line 2153 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 206:
#line 2174 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 208:
#line 2185 "GetDP.y"
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
case 210:
#line 2212 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 212:
#line 2225 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 213:
#line 2231 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 214:
#line 2238 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 215:
#line 2246 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 216:
#line 2249 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 217:
#line 2252 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 218:
#line 2255 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 219:
#line 2262 "GetDP.y"
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
case 220:
#line 2278 "GetDP.y"
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
case 221:
#line 2327 "GetDP.y"
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
case 223:
#line 2347 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 224:
#line 2350 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 225:
#line 2355 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 226:
#line 2360 "GetDP.y"
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
case 227:
#line 2372 "GetDP.y"
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
case 228:
#line 2388 "GetDP.y"
{ BasisFunction_S.SubFunction =
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(BasisFunction_S.SubFunction, &j) ;
      }
    ;
    break;}
case 229:
#line 2397 "GetDP.y"
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
case 230:
#line 2421 "GetDP.y"
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
case 232:
#line 2481 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 233:
#line 2484 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 234:
#line 2493 "GetDP.y"
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
case 235:
#line 2559 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 236:
#line 2563 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 237:
#line 2570 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 239:
#line 2579 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 240:
#line 2584 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 241:
#line 2587 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 242:
#line 2594 "GetDP.y"
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
case 243:
#line 2610 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 244:
#line 2616 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 245:
#line 2619 "GetDP.y"
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
case 246:
#line 2638 "GetDP.y"
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
case 247:
#line 2650 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2656 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 249:
#line 2659 "GetDP.y"
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
case 250:
#line 2674 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 251:
#line 2678 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 252:
#line 2687 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 254:
#line 2698 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 255:
#line 2703 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 256:
#line 2712 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 257:
#line 2725 "GetDP.y"
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
case 258:
#line 2740 "GetDP.y"
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
case 259:
#line 2814 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 261:
#line 2830 "GetDP.y"
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
case 262:
#line 2848 "GetDP.y"
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
case 263:
#line 2862 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 264:
#line 2865 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 265:
#line 2868 "GetDP.y"
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
case 266:
#line 2914 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 268:
#line 2924 "GetDP.y"
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
case 270:
#line 2950 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 272:
#line 2962 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 273:
#line 2968 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 274:
#line 2975 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 276:
#line 2986 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 277:
#line 2992 "GetDP.y"
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
case 278:
#line 3006 "GetDP.y"
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
case 279:
#line 3024 "GetDP.y"
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
case 281:
#line 3045 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 282:
#line 3048 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 283:
#line 3052 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 284:
#line 3055 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of Quantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 285:
#line 3064 "GetDP.y"
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
case 286:
#line 3103 "GetDP.y"
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
case 287:
#line 3127 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 288:
#line 3132 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 289:
#line 3138 "GetDP.y"
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
case 290:
#line 3299 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 291:
#line 3304 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 292:
#line 3313 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 293:
#line 3322 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 295:
#line 3330 "GetDP.y"
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
case 296:
#line 3370 "GetDP.y"
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
case 297:
#line 3385 "GetDP.y"
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
case 298:
#line 3413 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 299:
#line 3416 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 300:
#line 3419 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 301:
#line 3422 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 302:
#line 3429 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 304:
#line 3440 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 305:
#line 3449 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 306:
#line 3459 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 307:
#line 3473 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 309:
#line 3485 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 310:
#line 3487 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 311:
#line 3489 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 312:
#line 3491 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 313:
#line 3499 "GetDP.y"
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
case 315:
#line 3521 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 316:
#line 3529 "GetDP.y"
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
case 317:
#line 3591 "GetDP.y"
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
case 318:
#line 3637 "GetDP.y"
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
case 319:
#line 3661 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 320:
#line 3670 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 321:
#line 3684 "GetDP.y"
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
case 323:
#line 3713 "GetDP.y"
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
case 324:
#line 3737 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 325:
#line 3745 "GetDP.y"
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
case 326:
#line 3800 "GetDP.y"
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
case 327:
#line 3817 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 328:
#line 3818 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 329:
#line 3819 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 330:
#line 3820 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 331:
#line 3821 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 332:
#line 3822 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 333:
#line 3823 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 334:
#line 3830 "GetDP.y"
{ yyval.t.Int1 = Get_DefineForString(Operator_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Operator for discrete Quantity: %s %s", 
		 yyvsp[-2].c, Get_Valid_SXD(Operator_Type)) ;
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
case 335:
#line 3850 "GetDP.y"
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
case 336:
#line 3874 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 338:
#line 3884 "GetDP.y"
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
case 340:
#line 3909 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 342:
#line 3921 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 343:
#line 3928 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 344:
#line 3935 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 345:
#line 3938 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 346:
#line 3940 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 347:
#line 3946 "GetDP.y"
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
case 348:
#line 3961 "GetDP.y"
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
case 349:
#line 3980 "GetDP.y"
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
case 351:
#line 3999 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 352:
#line 4002 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of System: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 353:
#line 4010 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 354:
#line 4013 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 355:
#line 4018 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 356:
#line 4023 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 357:
#line 4028 "GetDP.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 358:
#line 4038 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 359:
#line 4047 "GetDP.y"
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
case 360:
#line 4084 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 361:
#line 4091 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 362:
#line 4094 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 363:
#line 4106 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 364:
#line 4116 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 365:
#line 4122 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 366:
#line 4125 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 367:
#line 4137 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 368:
#line 4145 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 369:
#line 4156 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-2].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown type of Operation: %s %s", 
		 yyvsp[-2].c, Get_Valid_SXD(Operation_Type)) ;
      Free(yyvsp[-2].c) ;

      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 370:
#line 4172 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 371:
#line 4179 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 372:
#line 4185 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 373:
#line 4191 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 374:
#line 4197 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 375:
#line 4205 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = Get_DefineForString(Operation_Type, yyvsp[-4].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown type of Operation: %s %s", 
		 yyvsp[-4].c, Get_Valid_SXD(Operation_Type)) ;
      Free(yyvsp[-4].c) ;
      
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-2].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-2].c) ;
      Free(yyvsp[-2].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 376:
#line 4221 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 377:
#line 4228 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 378:
#line 4234 "GetDP.y"
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
case 379:
#line 4245 "GetDP.y"
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
case 380:
#line 4256 "GetDP.y"
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
case 381:
#line 4272 "GetDP.y"
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
case 382:
#line 4284 "GetDP.y"
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
case 383:
#line 4306 "GetDP.y"
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
case 384:
#line 4328 "GetDP.y"
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
case 385:
#line 4341 "GetDP.y"
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
case 386:
#line 4354 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 388:
#line 4363 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 390:
#line 4372 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 391:
#line 4382 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 392:
#line 4393 "GetDP.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 393:
#line 4402 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 394:
#line 4412 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 396:
#line 4422 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 397:
#line 4425 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 398:
#line 4434 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 399:
#line 4447 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 401:
#line 4463 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 402:
#line 4467 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 403:
#line 4471 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 404:
#line 4475 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 405:
#line 4480 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 406:
#line 4491 "GetDP.y"
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
case 408:
#line 4508 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 409:
#line 4512 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 410:
#line 4516 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 411:
#line 4520 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 412:
#line 4524 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 413:
#line 4529 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 414:
#line 4540 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 416:
#line 4555 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 417:
#line 4559 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 418:
#line 4563 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 419:
#line 4567 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 420:
#line 4572 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 421:
#line 4583 "GetDP.y"
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
case 423:
#line 4601 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 424:
#line 4605 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 425:
#line 4609 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 426:
#line 4613 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 427:
#line 4618 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 428:
#line 4628 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 429:
#line 4634 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 430:
#line 4640 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 431:
#line 4650 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 432:
#line 4653 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 433:
#line 4658 "GetDP.y"
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
case 435:
#line 4676 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 436:
#line 4685 "GetDP.y"
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
case 437:
#line 4714 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 438:
#line 4717 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 439:
#line 4720 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 440:
#line 4728 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 441:
#line 4743 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 443:
#line 4755 "GetDP.y"
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
case 445:
#line 4778 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 447:
#line 4792 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 448:
#line 4799 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 449:
#line 4807 "GetDP.y"
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
case 450:
#line 4853 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 451:
#line 4858 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 452:
#line 4864 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 453:
#line 4867 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 454:
#line 4872 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 456:
#line 4883 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 457:
#line 4886 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 458:
#line 4892 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 459:
#line 4897 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 460:
#line 4903 "GetDP.y"
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
case 461:
#line 4916 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 463:
#line 4930 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 464:
#line 4937 "GetDP.y"
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
case 465:
#line 4965 "GetDP.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 466:
#line 4974 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 467:
#line 4975 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 468:
#line 4981 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 469:
#line 4990 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 470:
#line 5007 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 472:
#line 5019 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 474:
#line 5026 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 476:
#line 5038 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 477:
#line 5045 "GetDP.y"
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
case 478:
#line 5057 "GetDP.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown PostProcessing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 479:
#line 5067 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 480:
#line 5072 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 481:
#line 5078 "GetDP.y"
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
case 482:
#line 5095 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 483:
#line 5105 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 484:
#line 5108 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 485:
#line 5112 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 486:
#line 5123 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 487:
#line 5128 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 488:
#line 5137 "GetDP.y"
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
case 489:
#line 5149 "GetDP.y"
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
case 490:
#line 5172 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 491:
#line 5173 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 492:
#line 5174 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 493:
#line 5175 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 494:
#line 5181 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 495:
#line 5183 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 496:
#line 5189 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 497:
#line 5195 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 498:
#line 5202 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 499:
#line 5211 "GetDP.y"
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
case 500:
#line 5225 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 501:
#line 5233 "GetDP.y"
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
case 502:
#line 5246 "GetDP.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 503:
#line 5256 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 504:
#line 5265 "GetDP.y"
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
case 505:
#line 5279 "GetDP.y"
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
case 506:
#line 5298 "GetDP.y"
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
case 507:
#line 5320 "GetDP.y"
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
case 508:
#line 5340 "GetDP.y"
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
case 510:
#line 5362 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 511:
#line 5369 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 512:
#line 5376 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 513:
#line 5383 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 514:
#line 5387 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 515:
#line 5391 "GetDP.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 516:
#line 5395 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 517:
#line 5399 "GetDP.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown PostProcessing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 518:
#line 5408 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 519:
#line 5413 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 520:
#line 5418 "GetDP.y"
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
case 521:
#line 5438 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 522:
#line 5445 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 523:
#line 5452 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaptation method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 524:
#line 5460 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 525:
#line 5468 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 526:
#line 5475 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 527:
#line 5482 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 528:
#line 5486 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 529:
#line 5494 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 530:
#line 5498 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
    ;
    break;}
case 531:
#line 5510 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 532:
#line 5516 "GetDP.y"
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
case 533:
#line 5563 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 535:
#line 5574 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 536:
#line 5577 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 537:
#line 5583 "GetDP.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 538:
#line 5584 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 540:
#line 5592 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 541:
#line 5595 "GetDP.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 542:
#line 5604 "GetDP.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 543:
#line 5607 "GetDP.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 544:
#line 5618 "GetDP.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 545:
#line 5624 "GetDP.y"
{ List_Reset(ListOfDouble2_L) ; 
      if(!yyvsp[-2].d || (yyvsp[-5].d<yyvsp[0].d && yyvsp[-2].d<0) || (yyvsp[-5].d>yyvsp[0].d && yyvsp[-2].d>0)){
        vyyerror("Wrong increment in '%g :[%g] %g'", yyvsp[-5].d, yyvsp[-2].d, yyvsp[0].d) ;
	List_Add(ListOfDouble2_L, &(yyvsp[-5].d)) ;
      }
      else 
	for(d=yyvsp[-5].d ; (yyvsp[-2].d>0)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; d+=yyvsp[-2].d)
	  List_Add(ListOfDouble2_L, &d) ;
   ;
    break;}
case 546:
#line 5635 "GetDP.y"
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
case 547:
#line 5654 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 548:
#line 5660 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 549:
#line 5666 "GetDP.y"
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
case 550:
#line 5678 "GetDP.y"
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
case 553:
#line 5729 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 554:
#line 5735 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 555:
#line 5741 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 556:
#line 5752 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 557:
#line 5753 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 558:
#line 5754 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 559:
#line 5755 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 560:
#line 5756 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 561:
#line 5757 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 562:
#line 5758 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 563:
#line 5759 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 564:
#line 5760 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 565:
#line 5761 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 566:
#line 5762 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 567:
#line 5763 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 568:
#line 5764 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 569:
#line 5765 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 570:
#line 5766 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 571:
#line 5767 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 572:
#line 5768 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 573:
#line 5769 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 574:
#line 5770 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 575:
#line 5771 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 576:
#line 5772 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 577:
#line 5775 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 578:
#line 5776 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 579:
#line 5777 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 580:
#line 5778 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 581:
#line 5779 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 582:
#line 5780 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 583:
#line 5781 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 584:
#line 5782 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 585:
#line 5783 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 586:
#line 5784 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 587:
#line 5785 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 588:
#line 5786 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 589:
#line 5787 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 590:
#line 5788 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 591:
#line 5789 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 592:
#line 5790 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 593:
#line 5791 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 594:
#line 5792 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 595:
#line 5793 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 596:
#line 5794 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 597:
#line 5795 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 598:
#line 5796 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 599:
#line 5797 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 600:
#line 5798 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 601:
#line 5799 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 602:
#line 5800 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 603:
#line 5801 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 604:
#line 5802 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 605:
#line 5803 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 606:
#line 5804 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 607:
#line 5805 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 608:
#line 5806 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 609:
#line 5807 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 610:
#line 5808 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 611:
#line 5809 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 612:
#line 5810 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 613:
#line 5811 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 614:
#line 5812 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 615:
#line 5813 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 616:
#line 5814 "GetDP.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 617:
#line 5819 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 618:
#line 5820 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 619:
#line 5821 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 620:
#line 5822 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 621:
#line 5823 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 622:
#line 5824 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 623:
#line 5825 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 624:
#line 5827 "GetDP.y"
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
case 625:
#line 5846 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 626:
#line 5849 "GetDP.y"
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
case 627:
#line 5864 "GetDP.y"
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
#line 5878 "GetDP.y"



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


