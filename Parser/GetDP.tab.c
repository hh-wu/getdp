
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
#define	tWrite	403
#define	tAdapt	404
#define	tOnGlobal	405
#define	tOnRegion	406
#define	tOnElementsOf	407
#define	tOnGrid	408
#define	tOnCut	409
#define	tOnPoint	410
#define	tOnLine	411
#define	tOnPlane	412
#define	tOnBox	413
#define	tWithArgument	414
#define	tFile	415
#define	tDepth	416
#define	tDimension	417
#define	tTimeStep	418
#define	tHarmonicToTime	419
#define	tFormat	420
#define	tHeader	421
#define	tFooter	422
#define	tSkin	423
#define	tSmoothing	424
#define	tTarget	425
#define	tSort	426
#define	tIso	427
#define	tNoNewLine	428
#define	tFlag	429
#define	tBreak	430
#define	tHelp	431
#define	tCpu	432
#define	tDEF	433
#define	tOR	434
#define	tAND	435
#define	tEQUAL	436
#define	tNOTEQUAL	437
#define	tAPPROXEQUAL	438
#define	tLESSOREQUAL	439
#define	tGREATEROREQUAL	440
#define	tLESSLESS	441
#define	tGREATERGREATER	442
#define	tCROSSPRODUCT	443
#define	UNARYPREC	444

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.18 2001-05-18 12:26:27 dular Exp $ */

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


#line 180 "GetDP.y"
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



#define	YYFINAL		1592
#define	YYFLAG		-32768
#define	YYNTBASE	211

#define YYTRANSLATE(x) ((unsigned)(x) <= 444 ? yytranslate[x] : 396)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   198,     2,   206,   207,   196,     2,     2,   201,
   202,   194,   192,   210,   193,   205,   195,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   186,
     2,   188,   180,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   203,     2,   204,   200,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   208,     2,   209,     2,     2,     2,     2,     2,
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
   177,   178,   179,   181,   182,   183,   184,   185,   187,   189,
   190,   191,   197,   199
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
  1370,  1378,  1388,  1398,  1410,  1424,  1440,  1441,  1449,  1450,
  1458,  1466,  1470,  1472,  1474,  1475,  1478,  1482,  1486,  1489,
  1490,  1493,  1497,  1501,  1505,  1509,  1514,  1515,  1518,  1522,
  1526,  1530,  1534,  1538,  1543,  1544,  1547,  1551,  1555,  1559,
  1563,  1568,  1569,  1572,  1576,  1580,  1584,  1588,  1592,  1597,
  1602,  1607,  1608,  1613,  1614,  1617,  1621,  1625,  1629,  1633,
  1637,  1641,  1642,  1645,  1649,  1651,  1652,  1655,  1659,  1664,
  1669,  1673,  1678,  1679,  1684,  1685,  1688,  1692,  1697,  1698,
  1704,  1710,  1711,  1714,  1715,  1722,  1726,  1727,  1732,  1736,
  1740,  1741,  1744,  1748,  1750,  1751,  1754,  1758,  1762,  1766,
  1770,  1775,  1776,  1785,  1786,  1787,  1791,  1799,  1807,  1811,
  1818,  1820,  1822,  1824,  1826,  1827,  1831,  1833,  1836,  1839,
  1864,  1867,  1868,  1883,  1892,  1913,  1943,  1982,  1995,  1996,
  1999,  2003,  2008,  2013,  2017,  2020,  2024,  2028,  2032,  2036,
  2040,  2044,  2048,  2052,  2056,  2060,  2064,  2068,  2072,  2078,
  2081,  2085,  2086,  2089,  2090,  2094,  2096,  2100,  2101,  2103,
  2107,  2109,  2111,  2115,  2119,  2123,  2130,  2136,  2141,  2146,
  2153,  2163,  2169,  2170,  2174,  2180,  2186,  2188,  2190,  2192,
  2194,  2196,  2198,  2200,  2202,  2204,  2206,  2208,  2210,  2212,
  2214,  2216,  2218,  2220,  2222,  2224,  2226,  2228,  2230,  2234,
  2237,  2240,  2244,  2248,  2252,  2256,  2260,  2264,  2268,  2272,
  2276,  2280,  2284,  2288,  2292,  2296,  2301,  2306,  2311,  2316,
  2321,  2326,  2331,  2336,  2341,  2346,  2353,  2358,  2363,  2368,
  2373,  2378,  2383,  2390,  2397,  2404,  2410,  2413,  2415,  2417,
  2419,  2421,  2423,  2425,  2427,  2429,  2431,  2433
};

static const short yyrhs[] = {    -1,
   212,   213,     0,     0,     0,   213,   214,   215,     0,    43,
   208,   218,   209,     0,    79,   208,   238,   209,     0,    50,
   208,   270,   209,     0,    63,   208,   255,   209,     0,    65,
   208,   261,   209,     0,    75,   208,   277,   209,     0,    90,
   208,   300,   209,     0,   107,   208,   326,   209,     0,   141,
   208,   356,   209,     0,   143,   208,   368,   209,     0,   372,
     0,   390,     0,    10,   395,     0,   216,     0,   177,     7,
     0,   177,     5,     7,     0,   177,     5,     5,     7,     0,
   177,     5,     5,     5,     7,     0,   178,     7,     0,     0,
   217,   376,     0,     0,     0,   218,   219,   220,     0,     5,
   179,   222,     7,     0,     5,   237,   179,   222,     7,     0,
     0,     5,   235,   179,   221,   222,     7,     0,    44,   203,
   233,   204,     7,     0,   390,     0,     0,     0,   226,   203,
   223,   227,   224,   228,   204,     0,   206,   230,     0,   222,
     0,     5,   236,     0,    51,     0,     5,     0,   230,     0,
    45,     0,     0,   234,   229,   230,     0,   234,    46,     5,
   236,     0,     5,     0,   232,     0,   208,   231,   209,     0,
     0,   231,   234,   232,     0,   231,   234,   193,   232,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   203,   393,
   204,     3,     0,     3,     8,     3,     8,   393,     0,     5,
     0,     5,   208,   393,   209,     0,     5,   208,   209,     0,
     0,   233,   234,     5,     0,   233,   234,     5,   208,   393,
   209,     0,     0,   210,     0,   208,   206,   393,   209,     0,
     0,   208,   209,     0,   208,   393,   209,     0,     0,   238,
   239,     0,    47,   203,   240,   204,     7,     0,     5,   203,
   204,   179,   241,     7,     0,     5,   203,   225,   204,   179,
   241,     7,     0,   390,     0,     0,   240,   234,     5,     0,
    11,   203,   393,   204,     0,    79,   203,     5,   204,     0,
     0,   242,   243,     0,     0,   244,   245,     0,   248,     0,
     0,     0,   245,   180,   246,   245,     8,   247,   245,     0,
   245,   194,   245,     0,   245,   197,   245,     0,    41,   203,
   245,   210,   245,   204,     0,   245,   195,   245,     0,   245,
   192,   245,     0,   245,   193,   245,     0,   245,   196,   245,
     0,   245,   200,   245,     0,   245,   186,   245,     0,   245,
   188,   245,     0,   245,   187,   245,     0,   245,   189,   245,
     0,   245,   183,   245,     0,   245,   184,   245,     0,   245,
   185,   245,     0,   245,   182,   245,     0,   245,   181,   245,
     0,   193,   245,     0,   192,   245,     0,   198,   245,     0,
   201,   245,   202,     0,   394,     0,   392,   252,   254,     0,
     5,   325,     0,   325,     0,   325,   252,     0,     0,   100,
   249,   203,   243,   204,     0,     0,    42,   250,   203,     3,
   210,   393,   210,   243,   210,   243,   204,     0,    38,   203,
   325,   204,     0,    40,   203,   325,   204,     0,     0,    39,
   251,   203,   243,   210,   225,   204,     0,   186,     5,   188,
   203,   243,   204,     0,   207,     5,     0,   207,   164,     0,
   207,   118,     0,   207,     3,     0,   248,   206,     3,     0,
   206,     3,     0,   203,   205,   204,     0,   203,   204,     0,
   203,   253,   204,     0,   245,     0,   253,   210,   245,     0,
     0,   208,   388,   209,     0,   208,    51,   203,   225,   204,
   209,     0,   208,    48,   203,     5,   204,   209,     0,     0,
   255,   208,   256,   209,     0,     0,   256,   257,     0,    76,
     5,     7,     0,    64,   208,   258,   209,     0,     0,   258,
   208,   259,   209,     0,     0,   259,   260,     0,    51,   225,
     7,     0,    51,    45,     7,     0,    63,     5,   254,     7,
     0,     0,   261,   208,   262,   209,     0,     0,   262,   263,
     0,    76,     5,     7,     0,    68,   241,     7,     0,    64,
   208,   264,   209,     0,     0,   264,   208,   265,   209,     0,
     0,   265,   266,     0,    66,     5,     7,     0,    67,     5,
     7,     0,    64,   208,   267,   209,     0,     0,   267,   208,
   268,   209,     0,     0,   268,   269,     0,    69,     5,     7,
     0,    70,   393,     7,     0,    71,   393,     7,     0,    72,
   393,     7,     0,    73,   393,     7,     0,    74,   393,     7,
     0,     0,   270,   271,     0,   208,   272,   209,     0,   390,
     0,     0,   272,   273,     0,    76,     5,     7,     0,    76,
     5,   235,     7,     0,    66,     5,     7,     0,    64,   208,
   274,   209,     0,    64,     5,   208,   274,   209,     0,     0,
   274,   208,   275,   209,     0,     0,   275,   276,     0,    66,
     5,     7,     0,    51,   225,     7,     0,    52,   225,     7,
     0,    58,   241,     7,     0,    57,   241,     7,     0,    62,
     5,     7,     0,    59,   208,     3,   234,     3,   209,     7,
     0,    53,   225,     7,     0,    54,   225,     7,     0,    79,
   241,     7,     0,    56,   241,     7,     0,    55,   241,     7,
     0,    79,   203,   241,   210,   241,   204,     7,     0,    56,
   203,   241,   210,   241,   204,     7,     0,    55,   203,   241,
   210,   241,   204,     7,     0,     0,   277,   278,     0,   208,
   279,   209,     0,   390,     0,     0,   279,   280,     0,    76,
     5,     7,     0,    76,     5,   235,     7,     0,    66,     5,
     7,     0,    77,   208,   281,   209,     0,    84,   208,   287,
   209,     0,    86,   208,   294,   209,     0,    50,   208,   297,
   209,     0,     0,   281,   208,   282,   209,     0,     0,   282,
   283,     0,    76,     5,     7,     0,    78,     5,     7,     0,
    78,     5,   235,     7,     0,    79,     5,   284,     7,     0,
    80,   208,     5,   234,     5,   209,     7,     0,    81,   385,
     7,     0,    82,   225,     7,     0,    83,   225,     7,     0,
     0,     0,     0,   208,    91,     5,     7,    90,     5,   235,
     7,   285,    43,   225,     7,   286,   107,     5,   236,     7,
   209,     0,     0,   287,   208,   288,   209,     0,     0,   288,
   289,     0,    76,     5,     7,     0,    85,   290,     7,     0,
    78,   292,     7,     0,     5,     0,   208,   291,   209,     0,
     0,   291,   234,     5,     0,     5,     0,   208,   293,   209,
     0,     0,   293,   234,     5,     0,     0,   294,   208,   295,
   209,     0,     0,   295,   296,     0,    76,     5,     7,     0,
    66,     5,     7,     0,    78,     5,     7,     0,     0,   297,
   208,   298,   209,     0,     0,   298,   299,     0,    78,     5,
     7,     0,    83,   226,    89,     5,     7,     0,    87,   226,
     7,     0,    88,   229,     7,     0,    89,     5,   236,     7,
     0,     0,   300,   301,     0,   208,   302,   209,     0,   390,
     0,     0,   302,   303,     0,    76,     5,     7,     0,    76,
     5,   235,     7,     0,    66,     5,     7,     0,    91,   208,
   304,   209,     0,    95,   208,   310,   209,     0,     0,   304,
   208,   305,   209,     0,     0,   305,   306,     0,    76,     5,
     7,     0,    66,    86,     7,     0,    66,    96,     7,     0,
    66,     5,     7,     0,     0,    92,     5,   236,   307,   309,
     7,     0,    93,     3,     7,     0,     0,   203,   308,   243,
   204,     7,     0,   106,   225,     7,     0,    65,     5,     7,
     0,    63,     5,     7,     0,    94,     3,     7,     0,     0,
   203,     5,   204,     0,     0,   310,   311,     0,    96,   208,
   316,   209,     0,    97,   208,   316,   209,     0,    98,   208,
   320,   209,     0,    99,   208,   312,   209,     0,     0,   312,
   313,     0,    66,     5,     7,     0,    89,     5,     7,     0,
   208,   314,   209,     0,     0,   314,   315,     0,    60,   325,
     7,     0,    61,   325,     7,     0,    95,   325,     7,     0,
   106,   225,     7,     0,     0,   316,   317,     0,     0,     0,
   324,   203,   318,   243,   319,   210,   243,   204,     7,     0,
   106,   225,     7,     0,    63,     5,     7,     0,    65,     5,
     7,     0,     0,   320,   321,     0,   106,   225,     7,     0,
     0,     0,   324,   203,   322,   243,   323,   210,   325,   204,
     7,     0,     0,   100,     0,   101,     0,   102,     0,   103,
     0,   104,     0,   105,     0,   208,     5,     5,   209,     0,
   208,     5,   209,     0,     0,   326,   327,     0,   208,   328,
   209,     0,   390,     0,     0,   328,   329,     0,    76,     5,
     7,     0,    76,     5,   235,     7,     0,   108,   208,   331,
   209,     0,     0,   115,   330,   208,   338,   209,     0,     0,
   331,   208,   332,   209,     0,     0,   332,   333,     0,    76,
     5,     7,     0,    66,     5,     7,     0,   109,   334,     7,
     0,   110,   395,     7,     0,   113,   336,     7,     0,   114,
     5,     7,     0,   111,   387,     7,     0,   112,   395,     7,
     0,     5,   236,     0,   208,   335,   209,     0,     0,   335,
   234,     5,     0,     5,     0,   208,   337,   209,     0,     0,
   337,   234,     5,     0,     0,   338,   339,     0,     5,     5,
     7,     0,   117,   241,     7,     0,   126,   208,   345,   209,
     0,   130,   208,   347,   209,     0,   133,   208,   349,   209,
     0,   136,   208,   351,   209,     0,     5,   203,     5,   204,
     7,     0,   117,   203,   241,   204,     7,     0,   176,     7,
     0,   121,   203,   241,   204,   208,   338,   209,     0,   121,
   203,   241,   204,   208,   338,   209,   122,   208,   338,   209,
     0,   119,   203,     5,   210,   241,   204,     7,     0,   124,
   203,     5,   210,   241,   204,     7,     0,   125,   203,     5,
   210,   225,   210,     5,   204,     7,     0,   120,   203,     5,
   210,     5,   210,   387,   204,     7,     0,   123,   203,     5,
   210,   393,   210,   387,   210,   393,   204,     7,     0,   126,
   203,   393,   210,   393,   210,   241,   210,   241,   204,   208,
   338,   209,     0,   130,   203,   393,   210,   393,   210,   241,
   210,   393,   210,   393,   204,   208,   338,   209,     0,     0,
   148,   340,   203,   342,   343,   204,     7,     0,     0,   149,
   341,   203,   342,   343,   204,     7,     0,   139,   203,   225,
   210,   241,   204,     7,     0,   140,     6,     7,     0,   385,
     0,     5,     0,     0,   343,   344,     0,   210,   161,   395,
     0,   210,   164,   387,     0,   210,   387,     0,     0,   345,
   346,     0,   127,   393,     7,     0,   128,   393,     7,     0,
   118,   241,     7,     0,   129,   241,     7,     0,   115,   208,
   338,   209,     0,     0,   347,   348,     0,   127,   393,     7,
     0,   128,   393,     7,     0,   118,   241,     7,     0,   131,
   393,     7,     0,   132,   393,     7,     0,   115,   208,   338,
   209,     0,     0,   349,   350,     0,   134,   393,     7,     0,
   135,   241,     7,     0,    68,   393,     7,     0,   175,   393,
     7,     0,   115,   208,   338,   209,     0,     0,   351,   352,
     0,   134,   393,     7,     0,   137,   393,     7,     0,    68,
   393,     7,     0,   175,   393,     7,     0,   108,     5,     7,
     0,   138,   208,   353,   209,     0,   115,   208,   338,   209,
     0,   116,   208,   338,   209,     0,     0,   353,   208,   354,
   209,     0,     0,   354,   355,     0,    66,     5,     7,     0,
    91,     5,     7,     0,   106,   225,     7,     0,    68,   393,
     7,     0,    79,   241,     7,     0,   175,     5,     7,     0,
     0,   356,   357,     0,   208,   358,   209,     0,   390,     0,
     0,   358,   359,     0,    76,     5,     7,     0,    76,     5,
   235,     7,     0,   109,     5,   236,     7,     0,   142,     5,
     7,     0,    91,   208,   360,   209,     0,     0,   360,   208,
   361,   209,     0,     0,   361,   362,     0,    76,     5,     7,
     0,    57,   208,   363,   209,     0,     0,   363,    96,   208,
   364,   209,     0,   363,     5,   208,   364,   209,     0,     0,
   364,   365,     0,     0,   324,   203,   366,   243,   204,     7,
     0,    66,     5,     7,     0,     0,   106,   367,   225,     7,
     0,    63,     5,     7,     0,    65,     5,     7,     0,     0,
   368,   369,     0,   208,   370,   209,     0,   390,     0,     0,
   370,   371,     0,    76,     5,     7,     0,   144,     5,     7,
     0,   166,     5,     7,     0,   146,   395,     7,     0,   115,
   208,   374,   209,     0,     0,   143,     5,   145,     5,   373,
   208,   374,   209,     0,     0,     0,   374,   375,   376,     0,
   147,   203,   377,   380,   382,   204,     7,     0,   148,   203,
   377,   380,   382,   204,     7,     0,     5,   379,   210,     0,
     5,   379,   378,     5,   379,   210,     0,   194,     0,   195,
     0,   192,     0,   193,     0,     0,   203,   225,   204,     0,
   151,     0,   152,   225,     0,   153,   225,     0,   155,   208,
   208,   393,   210,   393,   210,   393,   209,   208,   393,   210,
   393,   210,   393,   209,   208,   393,   210,   393,   210,   393,
   209,   209,     0,   154,   225,     0,     0,   154,   208,   241,
   210,   241,   210,   241,   209,   208,   387,   381,   210,   387,
   209,     0,   156,   208,   393,   210,   393,   210,   393,   209,
     0,   157,   208,   208,   393,   210,   393,   210,   393,   209,
   208,   393,   210,   393,   210,   393,   209,   209,   208,   393,
   209,     0,   158,   208,   208,   393,   210,   393,   210,   393,
   209,   208,   393,   210,   393,   210,   393,   209,   208,   393,
   210,   393,   210,   393,   209,   209,   208,   393,   210,   393,
   209,     0,   159,   208,   208,   393,   210,   393,   210,   393,
   209,   208,   393,   210,   393,   210,   393,   209,   208,   393,
   210,   393,   210,   393,   209,   208,   393,   210,   393,   210,
   393,   209,   209,   208,   393,   210,   393,   210,   393,   209,
     0,   152,   225,   160,     5,   208,   393,   210,   393,   209,
   208,   393,   209,     0,     0,   382,   383,     0,   210,   161,
   395,     0,   210,   161,   188,   395,     0,   210,   161,   191,
   395,     0,   210,   162,   393,     0,   210,   169,     0,   210,
   170,   393,     0,   210,   165,   393,     0,   210,   166,     5,
     0,   210,   167,   384,     0,   210,   168,   384,     0,   210,
   166,   384,     0,   210,   163,   393,     0,   210,   164,   387,
     0,   210,   150,     5,     0,   210,   172,     5,     0,   210,
   171,   393,     0,   210,    57,   387,     0,   210,   173,   393,
     0,   210,   173,   208,   388,   209,     0,   210,   174,     0,
   210,   111,   387,     0,     0,   384,     6,     0,     0,   208,
   386,   209,     0,   241,     0,   386,   210,   241,     0,     0,
   393,     0,   208,   388,   209,     0,   393,     0,   389,     0,
   388,   210,   393,     0,   388,   210,   389,     0,   393,     8,
   393,     0,   393,     8,   203,   393,   204,   393,     0,   393,
     8,   393,     8,   393,     0,     5,   179,   393,     7,     0,
     5,   179,     6,     7,     0,     5,   179,   208,   388,   209,
     7,     0,     5,   179,    49,   203,     5,   210,     5,   204,
     7,     0,    12,   203,   391,   204,     7,     0,     0,   391,
   234,     5,     0,   391,   234,     5,   179,   393,     0,   391,
   234,     5,   179,     6,     0,    18,     0,    19,     0,    20,
     0,    21,     0,    22,     0,    23,     0,    24,     0,    25,
     0,    26,     0,    27,     0,    28,     0,    29,     0,    30,
     0,    31,     0,    32,     0,    33,     0,    34,     0,    35,
     0,    36,     0,    37,     0,     5,     0,   394,     0,   201,
   393,   202,     0,   193,   393,     0,   198,   393,     0,   393,
   193,   393,     0,   393,   192,   393,     0,   393,   194,   393,
     0,   393,   195,   393,     0,   393,   196,   393,     0,   393,
   200,   393,     0,   393,   186,   393,     0,   393,   188,   393,
     0,   393,   187,   393,     0,   393,   189,   393,     0,   393,
   183,   393,     0,   393,   184,   393,     0,   393,   182,   393,
     0,   393,   181,   393,     0,    18,   203,   393,   204,     0,
    19,   203,   393,   204,     0,    20,   203,   393,   204,     0,
    21,   203,   393,   204,     0,    22,   203,   393,   204,     0,
    23,   203,   393,   204,     0,    24,   203,   393,   204,     0,
    25,   203,   393,   204,     0,    26,   203,   393,   204,     0,
    27,   203,   393,   204,     0,    28,   203,   393,   210,   393,
   204,     0,    29,   203,   393,   204,     0,    30,   203,   393,
   204,     0,    31,   203,   393,   204,     0,    32,   203,   393,
   204,     0,    33,   203,   393,   204,     0,    34,   203,   393,
   204,     0,    35,   203,   393,   210,   393,   204,     0,    36,
   203,   393,   210,   393,   204,     0,    37,   203,   393,   210,
   393,   204,     0,   393,   180,   393,     8,   393,     0,   393,
   206,     0,     4,     0,     3,     0,    13,     0,    14,     0,
    15,     0,    16,     0,    17,     0,     5,     0,     6,     0,
     5,     0,     9,   203,   395,   210,   395,   204,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   316,   353,   391,   394,   397,   400,   403,   404,   405,   406,
   407,   408,   409,   410,   411,   413,   415,   417,   422,   431,
   435,   438,   441,   444,   446,   454,   468,   471,   472,   475,
   480,   483,   485,   488,   490,   494,   502,   513,   522,   531,
   538,   573,   578,   589,   592,   606,   611,   614,   663,   676,
   702,   707,   722,   740,   761,   767,   776,   790,   804,   838,
   851,   871,   875,   885,   902,   902,   905,   911,   914,   917,
   927,   930,   933,   937,   957,  1001,  1005,  1008,  1025,  1034,
  1041,  1044,  1050,  1056,  1063,  1067,  1080,  1095,  1109,  1115,
  1121,  1127,  1133,  1139,  1145,  1151,  1157,  1163,  1169,  1175,
  1181,  1187,  1193,  1199,  1205,  1212,  1218,  1220,  1229,  1233,
  1239,  1313,  1347,  1356,  1368,  1370,  1381,  1383,  1399,  1405,
  1411,  1413,  1442,  1466,  1479,  1485,  1492,  1498,  1505,  1515,
  1518,  1519,  1522,  1525,  1528,  1533,  1535,  1542,  1567,  1574,
  1579,  1584,  1588,  1595,  1600,  1605,  1610,  1616,  1620,  1625,
  1628,  1663,  1671,  1676,  1685,  1689,  1698,  1701,  1706,  1711,
  1716,  1724,  1728,  1740,  1750,  1755,  1760,  1765,  1777,  1781,
  1837,  1840,  1843,  1846,  1849,  1858,  1865,  1868,  1890,  1893,
  1903,  1907,  1915,  1922,  1931,  1934,  1954,  1971,  1993,  2003,
  2007,  2019,  2043,  2068,  2073,  2081,  2089,  2099,  2116,  2124,
  2131,  2138,  2147,  2156,  2165,  2184,  2192,  2195,  2218,  2222,
  2231,  2235,  2243,  2250,  2259,  2262,  2265,  2268,  2273,  2291,
  2338,  2354,  2358,  2363,  2368,  2373,  2387,  2407,  2416,  2440,
  2495,  2499,  2503,  2512,  2576,  2582,  2587,  2592,  2596,  2603,
  2606,  2611,  2629,  2634,  2638,  2655,  2669,  2674,  2678,  2691,
  2697,  2704,  2711,  2715,  2722,  2732,  2743,  2760,  2832,  2844,
  2848,  2868,  2882,  2885,  2888,  2932,  2939,  2942,  2964,  2968,
  2976,  2980,  2988,  2995,  3005,  3007,  3012,  3027,  3043,  3060,
  3064,  3069,  3073,  3076,  3086,  3125,  3149,  3154,  3160,  3321,
  3326,  3335,  3344,  3349,  3352,  3390,  3407,  3433,  3438,  3441,
  3444,  3449,  3457,  3460,  3472,  3482,  3494,  3503,  3506,  3510,
  3512,  3514,  3520,  3538,  3542,  3553,  3614,  3660,  3684,  3693,
  3705,  3722,  3726,  3760,  3769,  3823,  3839,  3842,  3843,  3844,
  3845,  3846,  3847,  3851,  3874,  3896,  3903,  3906,  3927,  3931,
  3939,  3943,  3952,  3959,  3962,  3964,  3969,  3985,  4002,  4017,
  4021,  4026,  4035,  4038,  4043,  4048,  4053,  4063,  4070,  4109,
  4114,  4119,  4129,  4141,  4145,  4150,  4161,  4170,  4177,  4198,
  4205,  4211,  4217,  4223,  4231,  4248,  4255,  4261,  4272,  4283,
  4299,  4311,  4331,  4353,  4374,  4387,  4401,  4408,  4410,  4417,
  4419,  4429,  4439,  4449,  4459,  4465,  4468,  4472,  4481,  4492,
  4504,  4508,  4514,  4518,  4522,  4527,  4536,  4549,  4553,  4559,
  4563,  4567,  4571,  4576,  4585,  4597,  4600,  4606,  4610,  4614,
  4619,  4628,  4643,  4646,  4652,  4656,  4660,  4665,  4675,  4681,
  4687,  4696,  4700,  4704,  4718,  4721,  4733,  4762,  4765,  4768,
  4776,  4790,  4798,  4801,  4822,  4825,  4836,  4839,  4847,  4855,
  4901,  4906,  4911,  4915,  4919,  4926,  4930,  4934,  4939,  4945,
  4951,  4964,  4975,  4978,  4986,  5014,  5025,  5025,  5031,  5040,
  5056,  5064,  5067,  5072,  5075,  5084,  5087,  5095,  5107,  5118,
  5123,  5128,  5146,  5155,  5159,  5164,  5172,  5179,  5186,  5200,
  5222,  5225,  5226,  5227,  5230,  5234,  5238,  5246,  5253,  5260,
  5276,  5283,  5297,  5307,  5315,  5328,  5346,  5370,  5390,  5409,
  5412,  5420,  5427,  5434,  5438,  5442,  5446,  5450,  5460,  5465,
  5470,  5490,  5497,  5504,  5513,  5522,  5529,  5536,  5540,  5548,
  5552,  5563,  5570,  5616,  5622,  5626,  5631,  5636,  5639,  5640,
  5644,  5649,  5658,  5661,  5670,  5678,  5689,  5706,  5714,  5720,
  5732,  5776,  5780,  5783,  5789,  5795,  5806,  5808,  5809,  5810,
  5811,  5812,  5813,  5814,  5815,  5816,  5817,  5818,  5819,  5820,
  5821,  5822,  5823,  5824,  5825,  5826,  5827,  5829,  5831,  5832,
  5833,  5834,  5835,  5836,  5837,  5838,  5839,  5840,  5841,  5842,
  5843,  5844,  5845,  5846,  5847,  5848,  5849,  5850,  5851,  5852,
  5853,  5854,  5855,  5856,  5857,  5858,  5859,  5860,  5861,  5862,
  5863,  5864,  5865,  5866,  5867,  5868,  5869,  5872,  5875,  5876,
  5877,  5878,  5879,  5880,  5881,  5898,  5903,  5918
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
"tElse","tLanczos","tUpdate","tUpdateConstraint","tTimeLoopTheta","tTime0","tTimeMax",
"tTheta","tTimeLoopNewmark","tBeta","tGamma","tIterativeLoop","tNbrMaxIteration",
"tRelaxationFactor","tIterativeTimeReduction","tDivisionCoefficient","tChangeOfState",
"tChangeOfCoordinates","tSystemCommand","tPostProcessing","tNameOfSystem","tPostOperation",
"tNameOfPostProcessing","tUsingPost","tAppend","tPlot","tPrint","tWrite","tAdapt",
"tOnGlobal","tOnRegion","tOnElementsOf","tOnGrid","tOnCut","tOnPoint","tOnLine",
"tOnPlane","tOnBox","tWithArgument","tFile","tDepth","tDimension","tTimeStep",
"tHarmonicToTime","tFormat","tHeader","tFooter","tSkin","tSmoothing","tTarget",
"tSort","tIso","tNoNewLine","tFlag","tBreak","tHelp","tCpu","tDEF","'?'","tOR",
"tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'","tLESSOREQUAL","'>'","tGREATEROREQUAL",
"tLESSLESS","tGREATERGREATER","'+'","'-'","'*'","'/'","'%'","tCROSSPRODUCT",
"'!'","UNARYPREC","'^'","'('","')'","'['","']'","'.'","'#'","'$'","'{'","'}'",
"','","Stats","@1","ProblemDefinitions","@2","ProblemDefinition","Interactive",
"@3","Groups","@4","Group","@5","ReducedGroupRHS","@6","@7","GroupRHS","FunctionForGroup",
"ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup","ListOfRegion",
"RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension","MultipleIndex",
"Index","Functions","Function","DefineFunctions","Expression","@8","WholeQuantityExpression",
"@9","WholeQuantity","@10","@11","WholeQuantity_Single","@12","@13","@14","ArgumentsForFunction",
"RecursiveListOfQuantity","ParametersForFunction","JacobianMethods","JacobianMethod",
"JacobianMethodTerm","JacobianCases","JacobianCase","JacobianCaseTerm","IntegrationMethods",
"IntegrationMethod","IntegrationMethodTerm","IntegrationCases","IntegrationCase",
"IntegrationCaseTerm","QuadratureCases","QuadratureCase","QuadratureCaseTerm",
"Constraints","BracedConstraint","Constraint","ConstraintTerm","ConstraintCases",
"ConstraintCase","ConstraintCaseTerm","FunctionSpaces","BracedFunctionSpace",
"FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction","BasisFunctionTerm",
"OptionalParametersForBasisFunction","@15","@16","SubSpaces","SubSpace","SubSpaceTerm",
"ListOfBasisFunction","RecursiveListOfBasisFunction","ListOfBasisFunctionCoef",
"RecursiveListOfBasisFunctionCoef","GlobalQuantities","GlobalQuantity","GlobalQuantityTerm",
"ConstraintInFSs","ConstraintInFS","ConstraintInFSTerm","Formulations","BracedFormulation",
"Formulation","FormulationTerm","DefineQuantities","DefineQuantity","DefineQuantityTerm",
"@17","@18","IndexInFunctionSpace","Equations","EquationTerm","GlobalEquation",
"GlobalEquationTerm","GlobalEquationTermTerm","GlobalEquationTermTermTerm","LocalTerm",
"LocalTermTerm","@19","@20","GlobalTerm","GlobalTermTerm","@21","@22","TermOperator",
"Quantity_Def","Resolutions","BracedResolution","Resolution","ResolutionTerm",
"@23","DefineSystems","DefineSystem","DefineSystemTerm","ListOfFormulation",
"RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem","Operation",
"OperationTerm","@24","@25","PrintOperation","PrintOperationOptions","PrintOperationOption",
"TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark","TimeLoopNewmarkTerm",
"IterativeLoop","IterativeLoopTerm","IterativeTimeReduction","IterativeTimeReductionTerm",
"ChangeOfStates","ChangeOfState","ChangeOfStateTerm","PostProcessings","BracedPostProcessing",
"PostProcessing","PostProcessingTerm","PostQuantities","PostQuantity","PostQuantityTerm",
"SubPostQuantities","SubPostQuantity","SubPostQuantityTerm","@26","@27","PostOperations",
"BracedPostOperation","PostOperation","PostOperationTerm","SeparatePostOperation",
"@28","PostSubOperations","@29","PostSubOperation","PostQuantitiesToPrint","Combination",
"PostQuantitySupport","PrintSubType","@30","PrintOptions","PrintOption","ParsedStrings",
"ListOfExpression","RecursiveListOfExpression","ListOfDouble","RecursiveListOfDouble",
"DottedFExpr","Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr",
"CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   212,   211,   213,   214,   213,   215,   215,   215,   215,   215,
   215,   215,   215,   215,   215,   215,   215,   215,   215,   216,
   216,   216,   216,   216,   217,   216,   218,   219,   218,   220,
   220,   221,   220,   220,   220,   223,   224,   222,   222,   225,
   225,   226,   226,   227,   227,   228,   228,   228,   229,   230,
   230,   231,   231,   231,   232,   232,   232,   232,   232,   232,
   232,   233,   233,   233,   234,   234,   235,   236,   236,   237,
   238,   238,   239,   239,   239,   239,   240,   240,   241,   241,
   242,   241,   244,   243,   245,   246,   247,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
   245,   245,   245,   245,   245,   245,   245,   245,   248,   248,
   248,   248,   248,   248,   249,   248,   250,   248,   248,   248,
   251,   248,   248,   248,   248,   248,   248,   248,   248,   252,
   252,   252,   253,   253,   254,   254,   254,   254,   255,   255,
   256,   256,   257,   257,   258,   258,   259,   259,   260,   260,
   260,   261,   261,   262,   262,   263,   263,   263,   264,   264,
   265,   265,   266,   266,   266,   267,   267,   268,   268,   269,
   269,   269,   269,   269,   269,   270,   270,   271,   271,   272,
   272,   273,   273,   273,   273,   273,   274,   274,   275,   275,
   276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
   276,   276,   276,   276,   276,   277,   277,   278,   278,   279,
   279,   280,   280,   280,   280,   280,   280,   280,   281,   281,
   282,   282,   283,   283,   283,   283,   283,   283,   283,   283,
   284,   285,   286,   284,   287,   287,   288,   288,   289,   289,
   289,   290,   290,   291,   291,   292,   292,   293,   293,   294,
   294,   295,   295,   296,   296,   296,   297,   297,   298,   298,
   299,   299,   299,   299,   299,   300,   300,   301,   301,   302,
   302,   303,   303,   303,   303,   303,   304,   304,   305,   305,
   306,   306,   306,   306,   307,   306,   306,   308,   306,   306,
   306,   306,   306,   309,   309,   310,   310,   311,   311,   311,
   311,   312,   312,   313,   313,   313,   314,   314,   315,   315,
   315,   315,   316,   316,   318,   319,   317,   317,   317,   317,
   320,   320,   321,   322,   323,   321,   324,   324,   324,   324,
   324,   324,   324,   325,   325,   326,   326,   327,   327,   328,
   328,   329,   329,   329,   330,   329,   331,   331,   332,   332,
   333,   333,   333,   333,   333,   333,   333,   333,   334,   334,
   335,   335,   336,   336,   337,   337,   338,   338,   339,   339,
   339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
   339,   339,   339,   339,   339,   339,   340,   339,   341,   339,
   339,   339,   342,   342,   343,   343,   344,   344,   344,   345,
   345,   346,   346,   346,   346,   346,   347,   347,   348,   348,
   348,   348,   348,   348,   349,   349,   350,   350,   350,   350,
   350,   351,   351,   352,   352,   352,   352,   352,   352,   352,
   352,   353,   353,   354,   354,   355,   355,   355,   355,   355,
   355,   356,   356,   357,   357,   358,   358,   359,   359,   359,
   359,   359,   360,   360,   361,   361,   362,   362,   363,   363,
   363,   364,   364,   366,   365,   365,   367,   365,   365,   365,
   368,   368,   369,   369,   370,   370,   371,   371,   371,   371,
   371,   373,   372,   374,   375,   374,   376,   376,   377,   377,
   378,   378,   378,   378,   379,   379,   380,   380,   380,   380,
   380,   381,   380,   380,   380,   380,   380,   380,   382,   382,
   383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
   383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
   383,   384,   384,   385,   385,   386,   386,   387,   387,   387,
   388,   388,   388,   388,   389,   389,   389,   390,   390,   390,
   390,   390,   391,   391,   391,   391,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   394,   394,   394,
   394,   394,   394,   394,   394,   395,   395,   395
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
     7,     9,     9,    11,    13,    15,     0,     7,     0,     7,
     7,     3,     1,     1,     0,     2,     3,     3,     2,     0,
     2,     3,     3,     3,     3,     4,     0,     2,     3,     3,
     3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     3,     4,     4,
     4,     0,     4,     0,     2,     3,     3,     3,     3,     3,
     3,     0,     2,     3,     1,     0,     2,     3,     4,     4,
     3,     4,     0,     4,     0,     2,     3,     4,     0,     5,
     5,     0,     2,     0,     6,     3,     0,     4,     3,     3,
     0,     2,     3,     1,     0,     2,     3,     3,     3,     3,
     4,     0,     8,     0,     0,     3,     7,     7,     3,     6,
     1,     1,     1,     1,     0,     3,     1,     2,     2,    24,
     2,     0,    14,     8,    20,    29,    38,    12,     0,     2,
     3,     4,     4,     3,     2,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     5,     2,
     3,     0,     2,     0,     3,     1,     3,     0,     1,     3,
     1,     1,     3,     3,     3,     6,     5,     4,     4,     6,
     9,     5,     0,     3,     5,     5,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
     2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     6,     4,     4,     4,     4,
     4,     4,     6,     6,     6,     5,     2,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   627,   626,     0,    18,   553,    27,
   176,   139,   152,   206,    71,   266,   336,   442,     0,   471,
     0,    20,    24,     0,     0,    26,   619,   618,   625,     0,
   620,   621,   622,   623,   624,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   578,     0,    65,    28,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    21,     0,     0,   549,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   580,   581,     0,     0,   542,   541,   548,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   617,     0,     0,    66,     0,     6,     0,
   180,     8,   177,   179,   141,     9,   154,    10,   210,    11,
   207,   209,     0,     0,     7,    72,    76,   270,    12,   267,
   269,   340,    13,   337,   339,   446,    14,   443,   445,   482,
   475,    15,   472,   474,     0,    22,   495,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   579,     0,     0,     0,     0,   595,   594,   592,   593,   588,
   590,   589,   591,   583,   582,   584,   585,   586,   587,     0,
   552,   554,     0,     0,    29,    35,     0,     0,     0,     0,
     0,    77,     0,     0,     0,     0,     0,    23,     0,     0,
   497,     0,     0,     0,     0,     0,     0,     0,     0,   509,
   509,   596,   597,   598,   599,   600,   601,   602,   603,   604,
   605,     0,   607,   608,   609,   610,   611,   612,     0,     0,
     0,     0,   550,   544,   543,     0,   545,     0,     0,     0,
     0,     0,     0,     0,    62,     0,     0,     0,   178,   181,
     0,     0,   140,   142,     0,    81,     0,   153,   155,     0,
     0,     0,     0,     0,     0,   208,   211,    68,    42,     0,
     0,    40,     0,     0,    65,     0,     0,     0,     0,   268,
   271,     0,     0,   345,   338,   341,     0,     0,     0,     0,
   444,   447,   484,     0,     0,     0,     0,     0,   473,   476,
     0,   493,   494,   491,   492,   489,     0,   498,   499,    81,
   501,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   616,   628,   556,   555,   625,
     0,     0,     0,    32,     0,    65,     0,   187,     0,     0,
   145,     0,   159,     0,     0,     0,    83,     0,   257,     0,
     0,   219,   235,   250,     0,    41,    81,    55,    59,    52,
    39,    50,     0,    36,     0,     0,     0,     0,   277,   296,
     0,   347,     0,     0,   453,    68,     0,   485,     0,   484,
     0,     0,     0,   496,   495,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   510,     0,   606,   613,   614,   615,
     0,     0,   547,    30,     0,    70,     0,    43,     0,     0,
     0,   187,     0,   184,   182,     0,     0,     0,   143,     0,
     0,     0,   157,    82,     0,   156,     0,   214,   212,     0,
     0,     0,     0,    69,     0,     0,     0,    65,    81,     0,
    73,    78,   274,   272,     0,     0,     0,   342,     0,     0,
   367,   448,     0,     0,     0,   451,   483,     0,   477,   485,
   478,   480,   479,     0,     0,    81,     0,     0,     0,     0,
     0,   487,   538,   538,     0,     0,     0,     0,   538,     0,
   532,   532,   532,   515,     0,     0,     0,     0,   530,   488,
   551,   546,    67,     0,    31,    34,    63,     0,   189,   185,
   183,   147,   144,   161,   158,     0,     0,   625,   557,   558,
   559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
   569,   570,   571,   572,   573,   574,   575,   576,     0,   121,
     0,     0,   117,   115,     0,     0,     0,     0,     0,     0,
     0,     0,    84,    85,   113,     0,   110,   259,   218,   213,
   221,   215,   237,   216,   252,   217,    74,    56,     0,    61,
     0,    51,     0,     0,    45,    37,    44,   273,   279,   275,
     0,     0,     0,     0,   276,   297,   343,   349,   344,     0,
   449,   455,   452,   450,   486,   481,   490,     0,     0,     0,
     0,     0,     0,     0,     0,   527,   539,   531,   524,     0,
     0,   511,   514,   522,   523,   517,   518,   521,   519,   520,
   516,   526,   525,     0,   528,    33,     0,   186,     0,     0,
     0,    79,    80,   112,     0,     0,     0,     0,     0,     0,
     0,   107,   106,   108,     0,   129,   127,   124,   126,   125,
     0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   114,   135,     0,     0,     0,     0,     0,     0,    60,     0,
    53,    75,    65,     0,   313,   313,   321,   302,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   387,   389,     0,   346,   368,     0,     0,
    81,     0,     0,     0,     0,     0,     0,   512,   513,   533,
     0,     0,     0,     0,     0,     0,    81,    81,    81,    81,
     0,     0,     0,    81,   188,   190,     0,     0,   146,   148,
     0,     0,     0,   160,   162,     0,    83,     0,     0,     0,
    83,     0,   109,     0,   335,     0,   105,   104,   101,   102,
   103,    97,    99,    98,   100,    93,    94,    89,    92,    95,
    90,    96,   128,   131,     0,   133,     0,     0,   111,     0,
     0,     0,     0,     0,   258,   260,     0,     0,     0,     0,
   534,     0,     0,   220,   222,     0,     0,     0,   236,   238,
     0,     0,     0,   251,   253,    58,     0,    54,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   288,   278,
   280,   327,   327,   327,     0,     0,     0,     0,     0,   538,
     0,     0,     0,   348,   350,     0,     0,    81,     0,     0,
     0,    81,     0,     0,     0,     0,   400,     0,   407,   415,
   422,     0,     0,     0,     0,   377,     0,     0,   454,   456,
     0,     0,     0,     0,     0,     0,     0,   540,   529,    64,
     0,     0,     0,     0,    81,     0,    81,     0,     0,     0,
     0,     0,     0,    81,     0,     0,     0,   135,   166,     0,
     0,   119,     0,   120,     0,     0,     0,    83,   334,     0,
   130,   132,     0,     0,     0,     0,     0,     0,     0,    49,
     0,    68,     0,     0,   231,     0,    81,     0,     0,     0,
     0,   246,   248,     0,   242,   244,     0,     0,     0,     0,
    57,    38,     0,     0,     0,     0,     0,     0,     0,     0,
    68,     0,     0,     0,    83,     0,     0,   328,   329,   330,
   331,   332,   333,     0,   298,   314,     0,   299,     0,   300,
   322,     0,     0,     0,   307,   301,   303,     0,     0,    68,
   361,     0,     0,     0,     0,   363,   365,     0,     0,   369,
     0,     0,   370,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   392,   534,   534,   459,
     0,     0,     0,     0,   504,     0,     0,     0,   192,   193,
   198,   199,     0,   202,     0,   201,   195,   194,    65,   196,
   191,     0,   200,   150,   149,     0,     0,   163,   164,     0,
     0,     0,   116,     0,    87,   134,     0,     0,   136,   261,
     0,   263,   264,     0,   223,   224,     0,     0,     0,    65,
   536,     0,   228,   229,   230,   239,    65,   241,    65,   240,
   255,   254,   256,    68,    47,   292,   291,   284,   282,   283,
   281,   285,   287,   293,   290,     0,     0,     0,     0,   315,
     0,   324,     0,     0,     0,   352,   351,   359,    65,   353,
   354,   357,   358,    65,   355,   356,     0,     0,    81,     0,
     0,     0,    81,     0,     0,     0,    81,     0,     0,    81,
   371,   401,     0,     0,    81,     0,     0,     0,     0,   372,
   408,     0,     0,     0,    81,     0,   373,   416,     0,     0,
     0,     0,     0,     0,     0,     0,   374,   423,    81,   394,
   395,   393,   395,     0,   457,     0,   538,     0,     0,     0,
     0,    81,    81,     0,    81,   151,   168,   165,     0,    91,
     0,   123,     0,     0,     0,     0,   265,   225,     0,   226,
     0,   535,    81,   247,     0,   243,     0,    48,   294,     0,
   319,   320,   318,    83,   323,    83,   304,   305,     0,     0,
     0,     0,   306,   308,   360,     0,   364,     0,   375,   376,
     0,     0,   367,     0,     0,     0,     0,   367,     0,     0,
     0,     0,     0,   367,     0,     0,     0,     0,     0,     0,
   367,     0,     0,     0,     0,     0,   367,   367,     0,     0,
   432,     0,     0,     0,     0,     0,     0,   458,     0,   502,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
    83,    88,     0,     0,   262,     0,     0,   537,   249,   245,
     0,     0,   289,   316,   325,     0,     0,     0,     0,   362,
   366,     0,   538,     0,   538,     0,     0,    81,     0,   404,
   402,   403,   405,    81,     0,   411,   409,   410,   412,   413,
   419,     0,   417,   418,   420,   426,   428,     0,     0,   424,
   425,     0,   427,     0,     0,   538,   396,     0,   462,   462,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   167,   169,     0,   138,
   137,     0,     0,     0,   286,     0,     0,   309,   310,   311,
   312,   380,     0,   378,     0,   381,     0,     0,   406,     0,
   414,   421,   430,   431,   434,   429,   391,   388,     0,   538,
   399,   390,   327,   327,   508,   538,     0,     0,     0,     0,
   205,   204,   197,   203,     0,     0,     0,     0,     0,     0,
    83,     0,   227,   295,    83,     0,     0,     0,     0,     0,
    81,     0,     0,   397,   398,     0,     0,     0,   467,   461,
     0,   463,   460,     0,     0,     0,     0,     0,   170,   171,
   172,   173,   174,   175,     0,     0,     0,     0,   383,   367,
     0,   382,     0,     0,     0,     0,    81,     0,     0,     0,
   433,   435,     0,     0,     0,     0,   464,   503,     0,     0,
     0,     0,   118,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   469,   470,   466,     0,
    83,     0,     0,     0,     0,   232,   317,   326,   379,   384,
   367,     0,   436,   439,   440,   437,   438,   441,   468,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   385,   367,   465,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   233,   386,     0,   505,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    68,     0,     0,     0,     0,   500,     0,     0,     0,     0,
     0,   234,     0,     0,     0,     0,     0,     0,   506,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   507,     0,
     0,     0
};

static const short yydefgoto[] = {  1590,
     1,     2,     3,    19,    20,    21,    85,   150,   235,   457,
   322,   490,   723,   323,   324,   616,   849,   951,   411,   488,
   412,   386,   148,   293,   406,   294,    90,   166,   325,   396,
   397,   474,   475,   593,   796,  1203,   594,   680,   679,   676,
   711,   817,   819,    87,   238,   304,   468,   670,   780,    88,
   239,   309,   470,   671,   785,  1067,  1289,  1368,    86,   153,
   237,   300,   463,   669,   776,    89,   161,   240,   317,   481,
   714,   835,  1089,  1525,  1553,   482,   715,   840,   967,  1099,
   964,  1097,   483,   716,   845,   477,   713,   826,    91,   170,
   243,   331,   496,   724,   861,  1219,   985,  1302,   497,   626,
   865,  1007,  1125,  1234,   862,   996,  1224,  1376,   864,  1001,
  1226,  1377,   997,   595,    92,   174,   244,   336,   423,   500,
   729,   875,  1012,  1129,  1018,  1134,   630,   748,   894,   895,
  1181,  1274,  1347,  1031,  1152,  1033,  1161,  1034,  1168,  1035,
  1178,  1342,  1433,  1472,    93,   178,   245,   342,   504,   749,
   900,  1184,  1403,  1442,  1501,  1476,    95,   183,   247,   350,
    22,   246,   428,   508,    46,   188,   357,   250,   260,  1352,
   367,   445,   658,  1182,  1092,   646,   125,   126,    23,    84,
   596,   647,    82,    28
};

static const short yypact[] = {-32768,
-32768,    51,  2461,   -81,   517,   -39,   -31,    -7,    10,    52,
   108,   121,   133,   149,   152,    23,   276,   177,-32768,-32768,
  -104,-32768,-32768,  1340,-32768,-32768,   129,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   204,-32768,
   454,-32768,-32768,   191,   207,-32768,-32768,-32768,-32768,   391,
-32768,-32768,-32768,-32768,-32768,   210,   235,   240,   250,   259,
   263,   304,   307,   321,   334,   346,   350,   357,   364,   369,
   371,   379,   381,   387,   412,   421,  2383,  2383,  2383,  2383,
   757,-32768,   517,  -162,   320,    19,    71,   324,    45,    20,
    61,    64,   134,   552,   139,   468,-32768,   591,   591,-32768,
  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2383,
  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2383,
   621,   -14,   -14,  4361,   330,-32768,   411,-32768,  2383,  2383,
  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2383,  2383,
  2383,  2383,  2383,-32768,   420,   632,-32768,   662,-32768,    60,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -139,   471,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   664,-32768,   480,   948,   948,  4388,
  4415,  4442,  4469,  4496,  4523,  4550,  4577,  4604,  4631,  2460,
  4658,  4685,  4712,  4739,  4766,  4793,  2491,  2522,  2553,   475,
-32768,   680,  2383,  1829,  2242,  2303,  5078,  1127,  1127,   545,
   545,   545,   545,   383,   383,   -14,   -14,   -14,   -14,   517,
-32768,   510,   -11,   513,-32768,-32768,   119,   251,   249,   345,
   116,-32768,   242,   401,   627,   492,   339,-32768,   124,   458,
-32768,   124,   124,    69,   494,   518,   535,   538,   544,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2383,-32768,-32768,-32768,-32768,-32768,-32768,  2383,  2383,
  2383,   750,-32768,-32768,   411,  2383,  2269,  2383,   555,  2348,
  1275,  1749,   589,   595,-32768,    42,   776,   778,-32768,-32768,
   580,   792,-32768,-32768,   604,   180,   815,-32768,-32768,   626,
   832,   833,   639,   651,   655,-32768,-32768,    -5,-32768,   681,
    16,-32768,   661,   663,   -16,   862,   863,   666,   667,-32768,
-32768,   866,   668,-32768,-32768,-32768,   867,   672,   881,   883,
-32768,-32768,-32768,   884,   682,   887,   517,   894,-32768,-32768,
   698,-32768,-32768,-32768,-32768,-32768,   928,   710,-32768,   180,
-32768,   726,  2383,   727,   728,   734,    -8,     9,  4820,  4847,
  4874,  4901,   743,  4928,  2383,  5063,-32768,-32768,  5063,   751,
   949,  2383,  1618,-32768,   125,   195,   747,-32768,   951,    55,
-32768,   952,-32768,   759,   761,   953,-32768,   965,-32768,   966,
   126,-32768,-32768,-32768,   766,-32768,   180,   968,   771,-32768,
-32768,-32768,   798,-32768,   977,   980,   981,   128,-32768,-32768,
   142,-32768,   779,   148,-32768,   781,  1014,   813,  1021,-32768,
  1026,  1027,  1033,-32768,   480,  1036,   834,  2383,  2584,  2383,
  2383,  2383,  1035,  2427,-32768,  1038,-32768,-32768,-32768,-32768,
  1039,  2383,  5063,-32768,  3731,-32768,   125,-32768,  1043,  1049,
  1057,-32768,   335,-32768,-32768,   864,  1062,   337,-32768,   347,
  2383,  1067,-32768,-32768,   978,-32768,   354,-32768,-32768,  1072,
   356,   393,   400,-32768,  1073,    58,   349,   413,   180,    15,
-32768,-32768,-32768,-32768,  1077,   428,   372,-32768,  1078,   446,
-32768,-32768,  1079,   490,  1082,-32768,-32768,  -104,-32768,   899,
-32768,-32768,-32768,   880,   885,   180,  2615,  2383,  2646,  2677,
  2708,-32768,  1595,  1595,  1087,   205,  2383,  2383,  1595,  2383,
  1104,-32768,-32768,-32768,  2383,  2383,  1112,  1630,-32768,-32768,
-32768,  5063,-32768,  1113,-32768,-32768,   911,   497,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  4955,   918,   104,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   923,-32768,
   924,   925,-32768,-32768,  1125,   978,   978,   978,   978,  1128,
    94,  1131,  5128,   931,   938,   938,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1135,  2383,-32768,
  3761,-32768,    32,  1137,-32768,-32768,-32768,-32768,-32768,-32768,
   939,   940,   943,   945,-32768,-32768,-32768,-32768,-32768,    17,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2383,   936,  2383,
  2739,  2383,  2383,  2383,  2383,-32768,  5063,-32768,-32768,   517,
   517,-32768,  5063,  5063,-32768,  5063,-32768,  1148,  1148,  1148,
  5063,  5063,-32768,  2383,  5063,-32768,  2383,-32768,   607,   -22,
   218,-32768,-32768,-32768,   947,   954,   947,   978,   955,   957,
   985,   956,   956,   956,  5105,-32768,-32768,-32768,-32768,-32768,
    21,-32768,   978,   978,   978,   978,   978,   978,   978,   978,
   978,   978,   978,   978,   978,   978,   978,   978,  1166,   890,
-32768,   969,   592,   652,   312,   326,  2383,  4982,-32768,   488,
-32768,-32768,   199,  1398,-32768,-32768,-32768,-32768,  1326,    18,
   120,   971,   984,   986,   989,   991,   995,   106,   137,   972,
   975,  1000,  1182,-32768,-32768,  1197,-32768,-32768,   102,  2770,
   180,  2801,  2383,  2832,  2863,  2894,   499,-32768,-32768,-32768,
   503,  3791,   124,   124,   124,   124,   141,   143,   180,   180,
   997,  1202,  1203,   197,-32768,-32768,   118,  1205,-32768,-32768,
  1003,  1208,  1209,-32768,-32768,  1013,-32768,  1016,  2425,  1218,
-32768,  1019,-32768,  1017,-32768,   978,  5147,  5165,  1543,  1543,
  1543,   633,   633,   633,   633,   527,   527,   956,   956,   956,
   956,   956,-32768,-32768,  1023,  5128,   202,  2309,-32768,  1223,
   155,   155,  1224,  1226,-32768,-32768,  1227,  1238,  1239,  1046,
  1048,   124,   124,-32768,-32768,  1257,    44,    70,-32768,-32768,
  1258,  1264,  1266,-32768,-32768,  5063,  1269,-32768,  1069,   169,
  1270,  1271,   305,  1272,  1277,  1280,  1281,   124,-32768,-32768,
-32768,  1010,  2376,   865,   272,  1313,  1323,    96,   517,  1595,
   517,    97,  1324,-32768,-32768,  1267,  1325,   180,  1279,  1327,
  1329,   180,  1330,  1331,  1332,  2383,-32768,  2383,-32768,-32768,
-32768,   124,  1341,  1144,  1146,-32768,  1123,  1345,-32768,-32768,
  2383,  1142,  2383,  3821,  2383,  2383,  2383,-32768,-32768,-32768,
  1371,  1372,  1373,  1375,   180,  1380,   180,  1381,  1383,  1384,
  1349,  1387,  1388,   180,  1389,  1390,  1391,   969,-32768,  1397,
  1399,-32768,  1193,-32768,   978,  1231,  1230,-32768,-32768,  1053,
-32768,-32768,   978,  1204,  1240,   505,  1437,  1356,  1439,-32768,
  1440,   781,  1441,   151,  1241,  1445,   180,  1444,  1446,  1447,
  1452,-32768,-32768,  1453,-32768,-32768,  1455,  1458,  1460,  1462,
-32768,-32768,  1465,    16,  1464,  1468,  1470,  1471,  1472,  1473,
   781,  1475,  1477,  1478,-32768,  1467,  1481,-32768,-32768,-32768,
-32768,-32768,-32768,   124,-32768,-32768,  1249,-32768,   124,-32768,
-32768,  1284,  1483,  1484,-32768,-32768,-32768,  1487,  1491,   781,
-32768,  1496,  1503,  1504,  1506,-32768,-32768,  1510,  1511,-32768,
  1316,  1319,-32768,  1317,  1318,  1322,  1333,  1335,  1337,  2925,
   361,  2956,   769,   352,  1897,  1339,-32768,    98,    98,-32768,
  1522,  3851,  1328,  3881,-32768,  3911,  3941,  3971,-32768,-32768,
-32768,-32768,  1343,-32768,  1348,-32768,-32768,-32768,  1352,-32768,
-32768,  1354,-32768,-32768,-32768,  1527,   541,-32768,-32768,   124,
  2378,  2383,-32768,  1336,-32768,  5128,  1532,   124,-32768,-32768,
  1534,-32768,-32768,  1535,-32768,-32768,  1548,  1474,  1564,  1352,
-32768,   556,-32768,-32768,-32768,-32768,   562,-32768,   569,-32768,
-32768,-32768,-32768,   781,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  1379,  1569,  1570,  1577,-32768,
  1580,-32768,  1581,  1584,   110,-32768,-32768,-32768,   581,-32768,
-32768,-32768,-32768,   583,-32768,-32768,  1586,  1588,   180,  1591,
  1394,  2383,   180,   124,  2383,  1395,   180,  2383,  2383,   180,
-32768,-32768,  2383,  1428,   180,  2383,  2383,  2383,  2383,-32768,
-32768,  2383,  1429,  2383,   180,  2383,-32768,-32768,  2383,  1600,
  1430,  1431,  2383,  2383,  1432,  2383,-32768,-32768,   180,-32768,
-32768,-32768,-32768,    65,-32768,  1433,  1595,  1434,  1461,  1480,
  1485,   180,   180,  1603,   180,-32768,-32768,-32768,  1469,-32768,
  2987,-32768,   978,  1476,  1479,  1671,-32768,-32768,  1674,-32768,
  1677,-32768,   180,-32768,  1680,-32768,  1681,-32768,  1486,  1685,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   947,   947,
   947,   124,-32768,-32768,-32768,  1690,-32768,  1691,-32768,-32768,
  1493,  1488,-32768,  3018,  1497,  1502,  3049,-32768,  1696,   843,
   871,  1700,  3080,-32768,  1706,  1386,  1687,  1715,  1743,  1780,
-32768,  1801,  1707,  1865,  1893,  1709,-32768,-32768,  1921,  1949,
-32768,  1970,  1513,   274,   298,  1512,  1515,-32768,  2383,-32768,
  2383,  2383,  2383,  2383,  1524,  1537,  1517,  1538,   426,-32768,
-32768,  5128,  1536,  1539,-32768,  1712,  1540,-32768,-32768,-32768,
  1739,  1740,-32768,-32768,-32768,  1744,  1748,  1750,  1751,-32768,
-32768,  1752,  1595,   316,  1595,  1782,  1741,   180,   508,-32768,
-32768,-32768,-32768,   180,   571,-32768,-32768,-32768,-32768,-32768,
-32768,   637,-32768,-32768,-32768,-32768,-32768,  1042,  1076,-32768,
-32768,   599,-32768,  1783,  1784,  1396,-32768,  1785,-32768,-32768,
  4001,  1546,  3111,  3142,  3173,  3204,  1788,  1790,  1802,  1808,
  1811,  2383,  2383,  2383,  2383,  2383,-32768,-32768,  1607,-32768,
-32768,  1729,  1813,  1617,-32768,  1612,  1615,-32768,-32768,-32768,
-32768,-32768,  1622,  1708,  1619,-32768,  1631,  1626,-32768,  1627,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   517,  1595,
-32768,-32768,   739,   752,-32768,  1595,  2383,  2383,  2383,  2383,
-32768,-32768,-32768,-32768,  1832,  1991,  2012,  2033,  2060,  2087,
-32768,  1835,-32768,-32768,-32768,   947,  1834,  1669,  2383,  1871,
   180,  2383,   366,-32768,-32768,  1879,  1880,  1881,-32768,-32768,
  1686,-32768,-32768,  1679,  3235,  3266,  3297,  3328,-32768,-32768,
-32768,-32768,-32768,-32768,  1688,  1682,  1701,  1702,-32768,-32768,
  5009,-32768,  1710,  3359,  1886,  2383,   180,  1889,   124,  1907,
-32768,-32768,  1906,  1909,  1910,   124,-32768,-32768,  2383,  2383,
  2383,  2383,-32768,  1911,  1912,  1913,  1376,  1915,  1725,  2383,
  1927,  2115,  1933,  1934,  1937,  1938,-32768,-32768,-32768,  1939,
-32768,  4031,  4061,  4091,  4121,-32768,-32768,-32768,-32768,-32768,
-32768,  5036,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1747,
  1745,  1761,  1746,  1763,  1905,  1551,  1770,  1945,  2383,  1771,
  2383,  2383,   124,-32768,-32768,-32768,  3390,  2383,  3421,  3452,
  1950,  1585,  2383,  4151,  2383,  2383,-32768,-32768,  3483,-32768,
  3514,  3545,  1851,  2383,  2383,  2383,  1954,  4181,  4211,  4241,
   781,  1791,  1793,  1795,  1984,-32768,  1796,  2383,  1797,  2383,
  3576,-32768,  3607,  2383,  2383,  3638,  4271,  2383,-32768,  4301,
  1799,  1803,  2383,  3669,  2383,  3700,  2383,  4331,-32768,  1992,
  1999,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -253,-32768,-32768,  -246,   -12,-32768,-32768,  1159,  -473,-32768,
  -513,-32768,  -315,  -388,  -422,-32768,-32768,-32768,-32768,  -344,
-32768,  -776,-32768,  -461,-32768,-32768,-32768,-32768,-32768,-32768,
  1414,-32768,  1086,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1553,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1290,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -852,  -553,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1209,-32768,-32768,-32768,
   979,   837,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   671,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1587,-32768,  1516,  1924,-32768,  1590,  1837,-32768,
  1767,-32768,   290,  1198,-32768,  -515,  -618,  1820,  1175,-32768,
-32768,   -24,  -407,   -82
};


#define	YYLAST		5365


static const short yytable[] = {    81,
   145,   467,   351,   505,   674,   358,   359,   361,   648,   416,
   933,  1002,   480,   655,   937,   437,   617,   408,   408,   409,
   409,   730,   876,     4,   163,   794,   757,    39,   777,   495,
     6,     6,   499,  1314,   408,   503,   409,   381,  1319,    24,
   778,   146,    44,    45,  1325,   761,   387,   147,   962,     4,
    -2,  1332,   122,   123,   124,   127,     6,  1338,  1339,   615,
   608,   465,   485,   241,   233,     4,   164,   597,     4,  1276,
   461,     6,     6,   318,   965,     6,   190,   191,   192,   193,
   194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
   204,   205,   206,   207,   208,   209,   687,    24,   688,   721,
  1010,  1016,  1180,   234,   215,   216,   217,   218,   219,   220,
   221,   222,   223,   224,   225,   226,   227,   228,   229,   319,
   318,   786,   318,   788,   682,   683,   684,   685,   318,   458,
   394,   459,   479,   731,   494,   732,   733,   734,     4,   735,
   736,   737,   738,     4,   614,     6,   739,   289,   498,   740,
     6,   394,   741,   394,   502,   742,   743,  1086,   897,   458,
  1277,  1074,   926,    29,   744,   745,   319,   291,   319,  1229,
  1230,   639,   613,   950,   319,   319,    30,   898,   597,   597,
   597,   597,   296,    43,   297,   143,   779,   415,   285,   287,
   394,   144,   746,   147,   298,   443,   292,   -43,   395,   946,
    31,   444,   405,   544,  1231,   319,   848,   394,  1116,    25,
    26,   689,   446,    27,   973,  1232,   789,    32,   444,   395,
   877,   395,   410,   410,   720,   747,   151,   152,   165,   795,
    40,   797,   798,   799,   800,   801,   802,   803,   804,   805,
   806,   807,   808,   809,   810,   811,   812,   369,   816,   388,
  1487,   963,   159,   160,   370,   371,   372,   690,   395,    33,
   609,   374,   466,   376,   432,   379,    81,   383,   168,   169,
   597,   172,   173,  1278,   321,   395,   360,   966,   155,   156,
    41,   781,    42,   782,   783,   597,   597,   597,   597,   597,
   597,   597,   597,   597,   597,   597,   597,   597,   597,   597,
   597,  1526,   597,  1011,  1017,   957,  -577,   326,   886,   977,
   899,   592,   305,   887,   301,    34,   306,   327,  1233,   320,
   730,   321,   878,   321,   307,  1542,   302,   299,    35,   321,
   321,    83,   328,   466,   940,   466,   329,  1003,   439,   888,
    36,   176,   177,   915,   889,   917,   181,   182,    94,   466,
   453,    47,    48,    49,  1014,   466,    37,   455,   466,    38,
  1004,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,   879,   836,   597,   837,
   978,   841,   650,    98,   310,   651,   838,   100,   460,   924,
   979,   842,   -46,   843,   147,   942,   902,   850,   147,    99,
   311,   943,   101,   517,   344,   519,   520,   521,   214,  1162,
   312,   313,   916,   918,   919,   920,   784,   542,   314,   925,
   315,  1465,   731,  1466,   732,   733,   734,   102,   735,   736,
   737,   738,   103,   652,  1467,   739,   556,  1304,   740,  1305,
   330,   741,   104,   345,   742,   743,  1468,   308,    96,   303,
    97,   105,   611,   744,   745,   106,  1163,   621,   622,   623,
   624,  1469,   185,  1071,   186,  1146,   332,  1345,  1147,  1005,
  1006,  1076,   346,  1346,   347,  1164,  1165,  1148,  1149,  1150,
   408,   746,   409,   641,  1361,  1362,  1363,  1364,  1365,  1366,
  1105,  1348,   653,   654,   348,   656,   107,  1346,   333,   108,
   661,   662,   730,   665,  1369,   334,   911,   912,   913,   914,
   839,    25,    26,   109,  1384,    27,  1166,   597,   149,  1084,
   927,   157,   158,  1022,   844,   597,   110,  1026,   212,   213,
  1470,    77,   549,   550,   552,   553,    78,   349,   111,    79,
  1441,  1441,   112,   316,   554,   555,   180,   610,  1112,   113,
  1167,   598,   599,   601,   602,  1087,   114,   758,   759,  1151,
  1053,   115,  1055,   116,  1471,   730,   140,   141,   142,  1062,
   625,   117,   143,   118,   718,   959,   960,  1128,   144,   119,
   129,   130,   131,   132,   133,   187,   134,   135,   136,   137,
   603,   604,   138,   139,   140,   141,   142,   605,   606,   335,
   143,   984,  1091,   750,   120,   752,   144,   754,   755,   756,
   127,   612,   147,   121,   731,   210,   732,   733,   734,   230,
   735,   736,   737,   738,  1367,   619,   620,   739,   231,   127,
   740,   730,   762,   741,  1455,  1036,   742,   743,  1457,   352,
   353,   354,   355,   628,   629,   744,   745,   763,   764,   765,
   766,   767,   768,   769,   770,   771,   232,   356,   772,   820,
   248,  1280,   773,   242,   821,  1306,  1307,  1308,   822,   823,
   824,  1218,   249,   746,   282,   774,   283,   731,   290,   732,
   733,   734,   846,   735,   736,   737,   738,   632,   633,   343,
   739,   362,   337,   740,   549,   668,   741,   908,   213,   742,
   743,   909,   213,  1079,   213,   295,  1389,   338,   744,   745,
   704,   705,   706,   707,  1520,   363,   708,   827,   904,   828,
   829,   830,   831,   832,   833,   339,   138,   139,   140,   141,
   142,  1292,   364,  1194,   143,   365,   746,  1119,  1197,  1198,
   144,   366,  1121,   731,   373,   732,   733,   734,   377,   735,
   736,   737,   738,   128,  1212,  1213,   739,   384,   340,   740,
  1214,   147,   741,   385,  1211,   742,   743,  1216,   147,  1391,
   389,  1215,   390,  1217,   744,   745,  1013,   391,  1015,  1235,
   147,  1237,   147,   127,  1241,   597,   392,  1383,  1245,  1385,
   825,  1436,  1249,  1437,  1438,  1252,  1395,  1396,   948,   949,
  1255,   393,   746,  1236,  1436,   775,  1437,  1438,  1238,   398,
  1263,   659,   660,  1199,   702,   703,   704,   705,   706,   707,
  1401,  1205,   708,   399,  1273,   341,   400,   401,   988,   989,
   990,   991,   992,   993,  1439,  1392,   402,  1285,  1286,  1321,
  1288,   988,   989,   990,   991,   992,   993,  1439,   403,   407,
   834,  1030,   404,  1032,   413,   414,   417,   418,  1298,   436,
   421,   424,  1458,   419,   420,   422,  1042,  1322,  1044,   425,
  1046,  1047,  1048,  1154,  1435,   426,  1155,   427,   429,   430,
  1444,   431,    47,    48,   558,  1156,  1157,  1246,   433,  1158,
  1159,   434,    51,    52,    53,    54,    55,   559,   560,   561,
   562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
   572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
   582,   583,   435,   438,   440,   441,   129,   130,   131,   132,
   133,   442,   134,   135,   136,   137,   451,  1440,   138,   139,
   140,   141,   142,   -43,   462,   454,   143,   464,   469,   473,
  1443,   471,   144,   472,   988,   989,   990,   991,   992,   993,
   999,   476,   478,  1388,   484,   486,   489,  1160,   487,  1390,
    47,    48,   558,   491,   492,  1309,   501,   493,   405,   584,
    51,    52,    53,    54,    55,   559,   560,   561,   562,   563,
   564,   565,   566,   567,   568,   569,   570,   571,   572,   573,
   574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
   506,   507,   129,   130,   131,   132,   133,   509,   134,   135,
   136,   137,   511,   512,   138,   139,   140,   141,   142,   513,
   515,   522,   143,   516,   540,   541,   730,  1201,   144,   545,
   129,   130,   131,   132,   133,   546,   134,   135,   136,   137,
  1075,   547,   138,   139,   140,   141,   142,  1484,   551,   382,
   143,   557,   986,  1000,   987,   585,   144,   584,   600,   607,
   730,   586,   587,   618,   627,   631,  1463,   588,   634,   637,
   589,   649,   638,   814,   815,   590,   591,   592,   251,   252,
   253,   254,   255,   256,   257,   258,   259,   636,   657,   988,
   989,   990,   991,   992,   993,   994,   663,  1244,   667,   666,
  1247,   673,  1493,  1250,  1251,   675,   677,   678,  1253,   681,
   686,  1256,  1257,  1258,  1259,   691,   709,  1260,  1565,  1262,
   710,  1264,   717,   722,  1265,   751,   725,   726,  1269,  1270,
   727,  1272,   728,   760,   592,   708,   787,   790,   731,   791,
   732,   733,   734,   585,   735,   736,   737,   738,   813,   586,
   587,   739,   792,   880,   740,   588,   818,   741,   589,   890,
   742,   743,   891,   590,   591,   592,   881,   893,   882,   744,
   745,   883,   731,   884,   732,   733,   734,   885,   735,   736,
   737,   738,   892,   896,   921,   739,   922,   923,   740,   928,
   929,   741,   930,   931,   742,   743,   932,   746,   995,   934,
   936,   938,  1495,   744,   745,   939,   941,   947,   950,  1500,
   952,   953,   692,   693,   694,   695,   696,   697,   698,   699,
   700,   701,   954,   955,   702,   703,   704,   705,   706,   707,
  1393,   746,   708,   956,  1351,   957,  1353,  1354,  1355,  1356,
   154,   961,   968,   162,   167,   171,   175,   179,   969,   184,
   970,   971,   972,  1020,   975,   976,   980,    47,    48,   380,
    50,   981,   982,   983,  1394,  1023,  1541,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,   134,   135,   136,   137,  1434,  1008,   138,   139,
   140,   141,   142,    76,   236,   319,   143,  1009,  1019,  1021,
  1040,  1024,   144,  1025,  1027,  1028,  1029,  1416,  1417,  1418,
  1419,  1420,    47,    48,    49,    50,  1038,  1037,  1039,  1041,
  1043,  1059,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,  1049,  1050,  1051,
   730,  1052,  1445,  1446,  1447,  1448,  1054,  1056,    76,  1057,
  1058,   866,  1327,  1060,  1061,  1063,  1064,  1065,    47,    48,
    49,   867,  1070,  1068,  1461,  1069,  1077,  1464,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,  1073,   868,   869,   870,   871,   872,   873,
  1072,  1492,  1078,  1080,  1081,  1082,  1083,  1085,  1088,  1090,
  1093,  1120,  1094,  1095,  1502,  1503,  1504,  1505,  1096,  1098,
   851,  1100,   852,   853,  1101,  1512,  1102,    77,  1103,  1104,
  1106,  1117,    78,   854,  1107,    79,  1108,  1109,  1110,  1111,
   321,  1113,    80,  1114,  1115,  1118,  1122,  1123,  1124,   855,
   856,   857,   731,  1126,   732,   733,   734,  1127,   735,   736,
   737,   738,  1130,   858,  1537,   739,  1539,  1540,   740,  1131,
  1132,   741,  1133,  1544,   742,   743,  1135,  1136,  1549,  1137,
  1551,  1552,  1138,   744,   745,  1141,  1139,  1140,  1185,  1558,
  1559,  1560,    77,  1196,   874,  1187,  1204,    78,  1206,  1202,
    79,  1207,  1142,  1571,  1143,  1573,  1144,    80,  1179,  1576,
  1577,   746,  1192,  1580,  1208,   730,  1399,  1193,  1584,  1400,
  1586,   147,  1588,  1195,  1209,   129,   130,   131,   132,   133,
  1210,   134,   135,   136,   137,  1221,  1222,   138,   139,   140,
   141,   142,  1220,  1223,  1509,   143,  1225,  1227,    77,   730,
  1228,   144,  1239,    78,  1240,  1242,    79,    47,    48,    49,
   859,  1243,  1248,   645,  1266,  1287,   860,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,    47,    48,    49,  1254,  1261,  1267,  1268,  1271,
  1279,  1281,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,   731,  1282,   732,
   733,   734,  1290,   735,   736,   737,   738,  1295,  1296,  1293,
   739,  1297,  1294,   740,  1299,  1300,   741,  1283,  1301,   742,
   743,  1303,  1284,  1328,  1310,  1311,  1312,  1313,   744,   745,
  1316,   731,  1320,   732,   733,   734,  1323,   735,   736,   737,
   738,  1317,  1326,  1334,   739,  1337,  1344,   740,  1372,  1349,
   741,  1329,  1350,   742,   743,  1359,   746,  1357,   698,   699,
   700,   701,   744,   745,   702,   703,   704,   705,   706,   707,
  1358,  1360,   708,  1374,  1370,  1387,  1375,  1371,  1373,  1330,
  1378,    47,    48,    49,  1379,  1406,  1380,  1381,  1382,  1534,
   746,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,  1331,    77,  1386,  1397,
  1398,  1402,    78,  1548,  1411,    79,  1412,   129,   130,   131,
   132,   133,   645,   134,   135,   136,   137,  1333,  1413,   138,
   139,   140,   141,   142,  1414,  1415,  1421,   143,  1422,  1423,
  1424,  1425,    77,   144,  1426,  1427,   456,    78,  1429,  1428,
    79,    47,    48,    49,  1430,  1431,  1432,   664,  1449,  1456,
  1459,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,   129,   130,   131,   132,
   133,  1335,   134,   135,   136,   137,  1460,  1462,   138,   139,
   140,   141,   142,  1473,  1474,  1475,   143,  1478,  1477,   466,
  1491,  1483,   144,  1494,   129,   130,   131,   132,   133,  1336,
   134,   135,   136,   137,  1485,  1486,   138,   139,   140,   141,
   142,  1496,  1497,  1489,   143,  1498,  1499,  1506,  1507,  1508,
   144,  1510,   129,   130,   131,   132,   133,  1340,   134,   135,
   136,   137,  1511,  1513,   138,   139,   140,   141,   142,  1515,
  1516,    77,   143,  1517,  1518,  1519,    78,  1533,   144,    79,
  1528,  1536,  1529,  1531,   382,  1341,  1547,  1557,  1561,   129,
   130,   131,   132,   133,  1169,   134,   135,   136,   137,  1530,
  1532,   138,   139,   140,   141,   142,  1343,  1535,  1538,   143,
   129,   130,   131,   132,   133,   144,   134,   135,   136,   137,
  1569,  1591,   138,   139,   140,   141,   142,  1450,  1592,  1566,
   143,  1567,  1568,  1570,  1170,  1572,   144,  1582,   974,   712,
  1583,  1171,  1172,  1066,   548,   863,   510,  1183,  1451,  1275,
  1404,    77,   189,   635,   514,   261,    78,   368,   958,    79,
  1173,   286,   284,  1174,  1175,     0,     0,     0,     0,  1452,
     0,     0,     0,     0,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,  1453,     0,     0,     0,
   144,  1176,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,  1454,     0,     0,     0,     0,   144,     0,
   129,   130,   131,   132,   133,  1177,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,  1514,     0,     0,     0,     0,   144,     0,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   129,
   130,   131,   132,   133,   144,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
   129,   130,   131,   132,   133,   144,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,   129,   130,   131,   132,   133,   144,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,   129,   130,   131,   132,   133,   144,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,   288,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,   375,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,    47,    48,    49,   143,     0,     0,     0,     0,     0,
   144,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,     0,     0,     0,     0,
    47,    48,    49,   378,     0,     0,   944,     0,     0,   945,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    47,    48,    49,     0,     0,
     0,     0,     0,     0,     0,    51,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
     0,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,   986,     0,
   987,   143,     0,     0,     0,     0,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     4,     0,     0,   143,     0,
     5,     0,     6,     0,   144,   988,   989,   990,   991,   992,
   993,   994,     0,   523,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,    77,   143,     7,     0,     0,    78,     0,   144,    79,
     8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     9,     0,    10,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    11,     0,   524,     0,    12,
    77,     0,     0,     0,     0,    78,     0,     0,    79,     0,
    13,     0,     0,     0,     0,     0,     0,   692,   693,   694,
   695,   696,   697,   698,   699,   700,   701,    14,     0,   702,
   703,   704,   705,   706,   707,    77,   525,   708,     0,     0,
    78,  1200,     0,    79,   998,     0,     0,   526,   527,   528,
   529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
   539,    15,     0,    16,   692,   693,   694,   695,   696,   697,
   698,   699,   700,   701,     0,     0,   702,   703,   704,   705,
   706,   707,     0,     0,   708,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   935,     0,     0,    17,    18,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,   272,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
   279,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,   280,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,   281,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,   518,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,   640,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,   642,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,   643,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,   644,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,   753,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,   901,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
   903,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,   905,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,   906,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,   907,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,  1145,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,  1153,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,  1291,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,  1315,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,  1318,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,  1324,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
  1407,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,  1408,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,  1409,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,  1410,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,  1479,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,  1480,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,  1481,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,  1482,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,  1490,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,  1543,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
  1545,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,  1546,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,  1554,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,  1555,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,  1556,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,  1574,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,  1575,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,  1578,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,  1585,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,  1587,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,   543,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,   719,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,   910,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1045,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1186,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1188,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1189,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1190,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1191,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1405,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1521,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1522,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1523,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1524,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1550,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1562,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1563,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1564,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1579,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1581,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,  1589,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,   211,     0,     0,     0,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,   262,     0,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,   263,     0,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,   264,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,   265,     0,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,   266,
     0,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,   267,     0,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,   268,     0,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
   269,     0,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,   270,     0,   144,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,   271,     0,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,   273,     0,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,   274,     0,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,   275,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,   276,     0,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,   277,
     0,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,   278,     0,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,   447,     0,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
   448,     0,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,   449,     0,   144,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,   450,     0,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,   452,     0,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,   672,     0,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,   847,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,  1488,     0,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,  1527,
     0,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
   132,   133,   143,   134,   135,   136,   137,     0,   144,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,   692,   693,   694,   695,   696,   697,
   698,   699,   700,   701,     0,     0,   702,   703,   704,   705,
   706,   707,     0,     0,   708,     0,   793,   692,   693,   694,
   695,   696,   697,   698,   699,   700,   701,     0,     0,   702,
   703,   704,   705,   706,   707,     0,     0,   708,   694,   695,
   696,   697,   698,   699,   700,   701,     0,     0,   702,   703,
   704,   705,   706,   707,     0,     0,   708,   695,   696,   697,
   698,   699,   700,   701,     0,     0,   702,   703,   704,   705,
   706,   707,     0,     0,   708
};

static const short yycheck[] = {    24,
    83,   390,   249,   426,   558,   252,   253,   254,   524,   325,
   787,   864,   401,   529,   791,   360,   490,     3,     3,     5,
     5,     5,     5,     5,     5,     5,   645,     5,    51,   418,
    12,    12,   421,  1243,     3,   424,     5,   291,  1248,   179,
    63,   204,   147,   148,  1254,   664,     5,   210,     5,     5,
     0,  1261,    77,    78,    79,    80,    12,  1267,  1268,    45,
     3,     7,   407,   203,     5,     5,    47,   475,     5,     5,
   386,    12,    12,     5,     5,    12,   101,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,     3,   179,     5,   613,
     5,     5,     5,    44,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,    51,
     5,   675,     5,   677,   586,   587,   588,   589,     5,     5,
    11,   385,     7,   117,     7,   119,   120,   121,     5,   123,
   124,   125,   126,     5,   489,    12,   130,   230,     7,   133,
    12,    11,   136,    11,     7,   139,   140,     7,    57,     5,
    96,   938,    45,   203,   148,   149,    51,   179,    51,    60,
    61,   516,   488,     5,    51,    51,   208,    76,   586,   587,
   588,   589,    64,     7,    66,   200,   209,   204,   213,   214,
    11,   206,   176,   210,    76,   204,   208,   203,    79,   818,
   208,   210,   208,   457,    95,    51,   720,    11,   985,     5,
     6,   118,   204,     9,    46,   106,   678,   208,   210,    79,
   203,    79,   208,   208,   193,   209,   208,   209,   209,   209,
   208,   693,   694,   695,   696,   697,   698,   699,   700,   701,
   702,   703,   704,   705,   706,   707,   708,   272,   710,   208,
  1460,   208,   208,   209,   279,   280,   281,   164,    79,   208,
   203,   286,   208,   288,   347,   290,   291,   292,   208,   209,
   678,   208,   209,   209,   206,    79,   208,   208,   208,   209,
     5,    64,     7,    66,    67,   693,   694,   695,   696,   697,
   698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
   708,  1511,   710,   208,   208,   208,   203,    66,   203,     5,
   209,   208,    64,   208,    64,   208,    68,    76,   209,   204,
     5,   206,   203,   206,    76,  1535,    76,   209,   208,   206,
   206,   203,    91,   208,   796,   208,    95,    66,   363,   203,
   208,   208,   209,   203,   208,   203,   208,   209,   145,   208,
   375,     3,     4,     5,   870,   208,   208,   382,   208,   208,
    89,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,   731,    76,   796,    78,
    86,    66,   188,   203,    50,   191,    85,     7,   204,   203,
    96,    76,   204,    78,   210,   204,   751,   723,   210,   203,
    66,   210,   203,   438,    76,   440,   441,   442,     8,    68,
    76,    77,   767,   768,   769,   770,   209,   452,    84,   774,
    86,    66,   117,    68,   119,   120,   121,   203,   123,   124,
   125,   126,   203,   526,    79,   130,   471,  1224,   133,  1226,
   209,   136,   203,   115,   139,   140,    91,   209,     5,   209,
     7,   203,   487,   148,   149,   203,   115,    96,    97,    98,
    99,   106,     5,   935,     7,   115,    76,   204,   118,   208,
   209,   943,   144,   210,   146,   134,   135,   127,   128,   129,
     3,   176,     5,   518,    69,    70,    71,    72,    73,    74,
   974,   204,   527,   528,   166,   530,   203,   210,   108,   203,
   535,   536,     5,   538,  1291,   115,   763,   764,   765,   766,
   209,     5,     6,   203,   209,     9,   175,   935,   209,   952,
   777,   208,   209,   878,   209,   943,   203,   882,   209,   210,
   175,   193,   208,   209,   208,   209,   198,   209,   203,   201,
  1403,  1404,   203,   209,   208,   209,     5,   209,   981,   203,
   209,   208,   209,   208,   209,   954,   203,   650,   651,   209,
   915,   203,   917,   203,   209,     5,   194,   195,   196,   924,
   209,   203,   200,   203,   609,   832,   833,  1010,   206,   203,
   180,   181,   182,   183,   184,     5,   186,   187,   188,   189,
   208,   209,   192,   193,   194,   195,   196,   208,   209,   209,
   200,   858,   957,   638,   203,   640,   206,   642,   643,   644,
   645,   209,   210,   203,   117,     5,   119,   120,   121,   210,
   123,   124,   125,   126,   209,   208,   209,   130,     7,   664,
   133,     5,   667,   136,  1421,   892,   139,   140,  1425,   192,
   193,   194,   195,   208,   209,   148,   149,    51,    52,    53,
    54,    55,    56,    57,    58,    59,     5,   210,    62,    78,
     7,  1187,    66,   203,    83,  1229,  1230,  1231,    87,    88,
    89,  1104,   203,   176,   210,    79,     7,   117,   179,   119,
   120,   121,   717,   123,   124,   125,   126,   208,   209,   208,
   130,   208,    76,   133,   208,   209,   136,   209,   210,   139,
   140,   209,   210,   209,   210,   203,   209,    91,   148,   149,
   194,   195,   196,   197,  1501,   208,   200,    76,   753,    78,
    79,    80,    81,    82,    83,   109,   192,   193,   194,   195,
   196,  1203,   208,  1059,   200,   208,   176,   994,   208,   209,
   206,   208,   999,   117,     5,   119,   120,   121,   204,   123,
   124,   125,   126,     7,   209,   210,   130,   179,   142,   133,
   209,   210,   136,   179,  1090,   139,   140,   209,   210,   209,
     5,  1097,     5,  1099,   148,   149,   869,   208,   871,   209,
   210,   209,   210,   818,  1139,  1203,     5,  1313,  1143,  1315,
   209,    63,  1147,    65,    66,  1150,   208,   209,   821,   822,
  1155,   208,   176,  1129,    63,   209,    65,    66,  1134,     5,
  1165,   532,   533,  1070,   192,   193,   194,   195,   196,   197,
  1346,  1078,   200,   208,  1179,   209,     5,     5,   100,   101,
   102,   103,   104,   105,   106,   209,   208,  1192,  1193,     7,
  1195,   100,   101,   102,   103,   104,   105,   106,   208,   179,
   209,   886,   208,   888,   204,   203,     5,     5,  1213,   160,
     5,     5,  1426,   208,   208,   208,   901,     7,   903,   208,
   905,   906,   907,   115,  1400,     5,   118,     5,     5,   208,
  1406,     5,     3,     4,     5,   127,   128,  1144,     5,   131,
   132,   204,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
    41,    42,     5,   208,   208,   208,   180,   181,   182,   183,
   184,   208,   186,   187,   188,   189,   204,   209,   192,   193,
   194,   195,   196,   203,   208,     7,   200,     7,     7,     7,
   209,   203,   206,   203,   100,   101,   102,   103,   104,   105,
   106,     7,     7,  1318,   209,     8,   179,   209,   208,  1324,
     3,     4,     5,     7,     5,  1232,   208,     7,   208,   100,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
     7,   209,   180,   181,   182,   183,   184,     7,   186,   187,
   188,   189,     7,     7,   192,   193,   194,   195,   196,     7,
     5,     7,   200,   210,     7,     7,     5,  1072,   206,     7,
   180,   181,   182,   183,   184,     7,   186,   187,   188,   189,
     8,     5,   192,   193,   194,   195,   196,  1456,     7,   206,
   200,     5,    63,   209,    65,   186,   206,   100,     7,     7,
     5,   192,   193,     7,     7,     7,  1431,   198,     7,   210,
   201,     5,   208,   204,   205,   206,   207,   208,   151,   152,
   153,   154,   155,   156,   157,   158,   159,   209,     5,   100,
   101,   102,   103,   104,   105,   106,     5,  1142,   208,     7,
  1145,   204,  1467,  1148,  1149,   203,   203,   203,  1153,     5,
     3,  1156,  1157,  1158,  1159,     5,   206,  1162,  1561,  1164,
   203,  1166,     8,     7,  1169,   210,   208,   208,  1173,  1174,
   208,  1176,   208,     6,   208,   200,   203,   203,   117,   203,
   119,   120,   121,   186,   123,   124,   125,   126,     3,   192,
   193,   130,   188,   203,   133,   198,   208,   136,   201,   208,
   139,   140,   208,   206,   207,   208,   203,     6,   203,   148,
   149,   203,   117,   203,   119,   120,   121,   203,   123,   124,
   125,   126,   203,     7,   208,   130,     5,     5,   133,     5,
   208,   136,     5,     5,   139,   140,   204,   176,   209,   204,
     3,   203,  1469,   148,   149,   209,   204,     5,     5,  1476,
     5,     5,   180,   181,   182,   183,   184,   185,   186,   187,
   188,   189,     5,     5,   192,   193,   194,   195,   196,   197,
   209,   176,   200,   208,  1279,   208,  1281,  1282,  1283,  1284,
    86,     5,     5,    89,    90,    91,    92,    93,     5,    95,
     5,     3,   204,     7,     5,     5,     5,     3,     4,     5,
     6,     5,     3,     3,   209,     7,  1533,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,   186,   187,   188,   189,  1399,     5,   192,   193,
   194,   195,   196,    49,   150,    51,   200,     5,     5,     5,
   208,     5,   206,     5,     5,     5,     5,  1362,  1363,  1364,
  1365,  1366,     3,     4,     5,     6,   203,     7,   203,     5,
   209,     3,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,     7,     7,     7,
     5,     7,  1407,  1408,  1409,  1410,     7,     7,    49,     7,
     7,    66,     7,     7,     7,     7,     7,     7,     3,     4,
     5,    76,   210,     7,  1429,     7,   203,  1432,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,   204,   109,   110,   111,   112,   113,   114,
   210,  1466,   203,     7,    89,     7,     7,     7,   208,     5,
     7,   203,     7,     7,  1479,  1480,  1481,  1482,     7,     7,
    63,     7,    65,    66,     7,  1490,     7,   193,     7,     5,
     7,     5,   198,    76,     7,   201,     7,     7,     7,     7,
   206,     7,   208,     7,     7,     5,   203,     5,     5,    92,
    93,    94,   117,     7,   119,   120,   121,     7,   123,   124,
   125,   126,     7,   106,  1529,   130,  1531,  1532,   133,     7,
     7,   136,     7,  1538,   139,   140,     7,     7,  1543,   204,
  1545,  1546,   204,   148,   149,   204,   210,   210,     7,  1554,
  1555,  1556,   193,     7,   209,   208,     5,   198,     5,   204,
   201,     7,   210,  1568,   210,  1570,   210,   208,   210,  1574,
  1575,   176,   210,  1578,     7,     5,   161,   210,  1583,   164,
  1585,   210,  1587,   210,    91,   180,   181,   182,   183,   184,
     7,   186,   187,   188,   189,     7,     7,   192,   193,   194,
   195,   196,   204,     7,   209,   200,     7,     7,   193,     5,
     7,   206,     7,   198,     7,     5,   201,     3,     4,     5,
   203,   208,   208,   208,     5,     3,   209,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,     3,     4,     5,   208,   208,   208,   208,   208,
   208,   208,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,   117,   208,   119,
   120,   121,   204,   123,   124,   125,   126,     7,     5,   204,
   130,     5,   204,   133,     5,     5,   136,   208,   203,   139,
   140,     7,   208,     7,     5,     5,   204,   210,   148,   149,
   204,   117,     7,   119,   120,   121,     7,   123,   124,   125,
   126,   210,     7,     7,   130,     7,   204,   133,     7,   208,
   136,     7,   208,   139,   140,   209,   176,   204,   186,   187,
   188,   189,   148,   149,   192,   193,   194,   195,   196,   197,
   204,   204,   200,     5,   209,     5,     7,   209,   209,     7,
     7,     3,     4,     5,     7,   210,     7,     7,     7,   209,
   176,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,     7,   193,     7,     7,
     7,     7,   198,   209,     7,   201,     7,   180,   181,   182,
   183,   184,   208,   186,   187,   188,   189,     7,     7,   192,
   193,   194,   195,   196,     7,     5,   210,   200,    90,     7,
   204,   210,   193,   206,   210,   204,   209,   198,   210,   122,
   201,     3,     4,     5,   204,   210,   210,   208,     7,     5,
     7,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,   180,   181,   182,   183,
   184,     7,   186,   187,   188,   189,   208,     7,   192,   193,
   194,   195,   196,     5,     5,     5,   200,   209,   203,   208,
     5,   204,   206,     5,   180,   181,   182,   183,   184,     7,
   186,   187,   188,   189,   204,   204,   192,   193,   194,   195,
   196,     5,     7,   204,   200,     7,     7,     7,     7,     7,
   206,     7,   180,   181,   182,   183,   184,     7,   186,   187,
   188,   189,   208,     7,   192,   193,   194,   195,   196,     7,
     7,   193,   200,     7,     7,     7,   198,    43,   206,   201,
   204,     7,   208,   208,   206,     7,     7,   107,     5,   180,
   181,   182,   183,   184,    68,   186,   187,   188,   189,   209,
   208,   192,   193,   194,   195,   196,     7,   208,   208,   200,
   180,   181,   182,   183,   184,   206,   186,   187,   188,   189,
     7,     0,   192,   193,   194,   195,   196,     7,     0,   209,
   200,   209,   208,   208,   108,   209,   206,   209,   850,   596,
   208,   115,   116,   928,   462,   726,   430,  1039,     7,  1183,
  1350,   193,    99,   508,   435,   189,   198,   261,   831,   201,
   134,   203,   213,   137,   138,    -1,    -1,    -1,    -1,     7,
    -1,    -1,    -1,    -1,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,     7,    -1,    -1,    -1,
   206,   175,   180,   181,   182,   183,   184,    -1,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
    -1,    -1,   200,     7,    -1,    -1,    -1,    -1,   206,    -1,
   180,   181,   182,   183,   184,   209,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,     7,    -1,    -1,    -1,    -1,   206,    -1,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,   180,
   181,   182,   183,   184,   206,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
   180,   181,   182,   183,   184,   206,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,   180,   181,   182,   183,   184,   206,   186,   187,   188,
   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    -1,   200,   180,   181,   182,   183,   184,   206,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,     8,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,   180,   181,   182,   183,
   184,    -1,   186,   187,   188,   189,     8,    -1,   192,   193,
   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,
    -1,    -1,   206,    -1,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,     3,     4,     5,   200,    -1,    -1,    -1,    -1,    -1,
   206,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
     3,     4,     5,     6,    -1,    -1,    48,    -1,    -1,    51,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,     3,     4,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    -1,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
   189,    -1,    -1,   192,   193,   194,   195,   196,    63,    -1,
    65,   200,    -1,    -1,    -1,    -1,    -1,   206,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,     5,    -1,    -1,   200,    -1,
    10,    -1,    12,    -1,   206,   100,   101,   102,   103,   104,
   105,   106,    -1,    57,   182,   183,   184,    -1,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
    -1,   193,   200,    43,    -1,    -1,   198,    -1,   206,   201,
    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    75,    -1,   111,    -1,    79,
   193,    -1,    -1,    -1,    -1,   198,    -1,    -1,   201,    -1,
    90,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,
   183,   184,   185,   186,   187,   188,   189,   107,    -1,   192,
   193,   194,   195,   196,   197,   193,   150,   200,    -1,    -1,
   198,   204,    -1,   201,   209,    -1,    -1,   161,   162,   163,
   164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
   174,   141,    -1,   143,   180,   181,   182,   183,   184,   185,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,   197,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   210,    -1,    -1,   177,   178,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
   210,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
    -1,   210,   180,   181,   182,   183,   184,    -1,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,
    -1,    -1,   210,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,    -1,   210,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
   206,    -1,    -1,    -1,   210,   180,   181,   182,   183,   184,
    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,   194,
   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,
    -1,   206,    -1,    -1,    -1,   210,   180,   181,   182,   183,
   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,
   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,
    -1,    -1,   206,    -1,    -1,    -1,   210,   180,   181,   182,
   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,
    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
   210,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
    -1,   210,   180,   181,   182,   183,   184,    -1,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,
    -1,    -1,   210,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,    -1,   210,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
   206,    -1,    -1,    -1,   210,   180,   181,   182,   183,   184,
    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,   194,
   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,
    -1,   206,    -1,    -1,    -1,   210,   180,   181,   182,   183,
   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,
   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,
    -1,    -1,   206,    -1,    -1,    -1,   210,   180,   181,   182,
   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,
    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
   210,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
    -1,   210,   180,   181,   182,   183,   184,    -1,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,
    -1,    -1,   210,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,    -1,   210,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
   206,    -1,    -1,    -1,   210,   180,   181,   182,   183,   184,
    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,   194,
   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,
    -1,   206,    -1,    -1,    -1,   210,   180,   181,   182,   183,
   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,
   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,
    -1,    -1,   206,    -1,    -1,    -1,   210,   180,   181,   182,
   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,
    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,
   210,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
    -1,   210,   180,   181,   182,   183,   184,    -1,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,
    -1,    -1,   210,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,    -1,   210,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
   206,    -1,    -1,    -1,   210,   180,   181,   182,   183,   184,
    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,   194,
   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,
    -1,   206,    -1,    -1,    -1,   210,   180,   181,   182,   183,
   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,
   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,
    -1,    -1,   206,    -1,    -1,    -1,   210,   180,   181,   182,
   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,
    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   209,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,   202,    -1,    -1,    -1,   206,   180,   181,   182,
   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
    -1,   204,    -1,   206,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,   204,    -1,
   206,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    -1,   200,    -1,    -1,    -1,   204,    -1,   206,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,
    -1,    -1,   204,    -1,   206,   180,   181,   182,   183,   184,
    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,   194,
   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,   204,
    -1,   206,   180,   181,   182,   183,   184,    -1,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
    -1,    -1,   200,    -1,    -1,    -1,   204,    -1,   206,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,   204,    -1,   206,   180,   181,   182,   183,
   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,
   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,
   204,    -1,   206,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,   204,    -1,   206,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,   204,    -1,   206,   180,   181,   182,
   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
    -1,   204,    -1,   206,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,   204,    -1,
   206,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    -1,   200,    -1,    -1,    -1,   204,    -1,   206,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,
    -1,    -1,   204,    -1,   206,   180,   181,   182,   183,   184,
    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,   194,
   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,   204,
    -1,   206,   180,   181,   182,   183,   184,    -1,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
    -1,    -1,   200,    -1,    -1,    -1,   204,    -1,   206,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,   204,    -1,   206,   180,   181,   182,   183,
   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,
   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,
   204,    -1,   206,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,   204,    -1,   206,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,   204,    -1,   206,   180,   181,   182,
   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
    -1,   204,    -1,   206,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,   204,    -1,
   206,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    -1,   200,    -1,    -1,    -1,   204,    -1,   206,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,
    -1,    -1,   204,    -1,   206,   180,   181,   182,   183,   184,
    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,   194,
   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,   204,
    -1,   206,   180,   181,   182,   183,   184,    -1,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,    -1,
   183,   184,   200,   186,   187,   188,   189,    -1,   206,   192,
   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
    -1,    -1,    -1,   206,   180,   181,   182,   183,   184,   185,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,   197,    -1,    -1,   200,    -1,   202,   180,   181,   182,
   183,   184,   185,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,   197,    -1,    -1,   200,   182,   183,
   184,   185,   186,   187,   188,   189,    -1,    -1,   192,   193,
   194,   195,   196,   197,    -1,    -1,   200,   183,   184,   185,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,   197,    -1,    -1,   200
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
#line 317 "GetDP.y"
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
#line 353 "GetDP.y"
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
#line 395 "GetDP.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 418 "GetDP.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 433 "GetDP.y"
{ Help(NULL); ;
    break;}
case 21:
#line 436 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 22:
#line 439 "GetDP.y"
{ Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 23:
#line 442 "GetDP.y"
{ Free(yyvsp[-3].c); Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 25:
#line 446 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 26:
#line 454 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 28:
#line 471 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 30:
#line 478 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 31:
#line 481 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 32:
#line 484 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 33:
#line 486 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 36:
#line 497 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 37:
#line 502 "GetDP.y"
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
#line 514 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 523 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 40:
#line 534 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 41:
#line 539 "GetDP.y"
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
#line 576 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 43:
#line 579 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 44:
#line 591 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 45:
#line 593 "GetDP.y"
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
#line 609 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 47:
#line 612 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 48:
#line 615 "GetDP.y"
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
#line 666 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 50:
#line 679 "GetDP.y"
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
#line 703 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 52:
#line 710 "GetDP.y"
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
#line 723 "GetDP.y"
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
#line 741 "GetDP.y"
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
#line 764 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 56:
#line 768 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 57:
#line 777 "GetDP.y"
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
#line 791 "GetDP.y"
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
#line 805 "GetDP.y"
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
#line 839 "GetDP.y"
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
#line 852 "GetDP.y"
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
#line 876 "GetDP.y"
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
#line 886 "GetDP.y"
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
#line 908 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 68:
#line 913 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 69:
#line 914 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 70:
#line 919 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 74:
#line 938 "GetDP.y"
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
#line 958 "GetDP.y"
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
#line 1009 "GetDP.y"
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
#line 1029 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 80:
#line 1035 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 81:
#line 1041 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 82:
#line 1044 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 83:
#line 1052 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 84:
#line 1056 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 86:
#line 1068 "GetDP.y"
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
#line 1081 "GetDP.y"
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
#line 1095 "GetDP.y"
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
#line 1110 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1116 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1122 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1128 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1134 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1140 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1146 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1152 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1158 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1164 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1170 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1176 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1182 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1188 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1194 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1200 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 105:
#line 1206 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 106:
#line 1213 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 108:
#line 1221 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 110:
#line 1234 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 111:
#line 1240 "GetDP.y"
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
#line 1314 "GetDP.y"
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
case 113:
#line 1348 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 114:
#line 1357 "GetDP.y"
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
#line 1369 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 116:
#line 1371 "GetDP.y"
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
#line 1382 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 118:
#line 1384 "GetDP.y"
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
#line 1400 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 120:
#line 1406 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 121:
#line 1412 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 122:
#line 1414 "GetDP.y"
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
#line 1443 "GetDP.y"
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
#line 1467 "GetDP.y"
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
case 125:
#line 1480 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 126:
#line 1486 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 127:
#line 1493 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 128:
#line 1499 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 129:
#line 1506 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 130:
#line 1517 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 131:
#line 1518 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 132:
#line 1519 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 133:
#line 1524 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 134:
#line 1525 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 135:
#line 1531 "GetDP.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 137:
#line 1536 "GetDP.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 138:
#line 1543 "GetDP.y"
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
#line 1570 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 140:
#line 1575 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 141:
#line 1582 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 143:
#line 1591 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 144:
#line 1596 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 145:
#line 1603 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 146:
#line 1606 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 147:
#line 1613 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 149:
#line 1623 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 150:
#line 1626 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 151:
#line 1629 "GetDP.y"
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
      else{
	vyyerror("Unknown type of Jacobian: %s", yyvsp[-2].c);
	Get_Valid_SXD1N(Jacobian_Type);
      }
      Free(yyvsp[-2].c) ;
    ;
    break;}
case 152:
#line 1666 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 153:
#line 1672 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 154:
#line 1679 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 156:
#line 1692 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 157:
#line 1699 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 158:
#line 1702 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 159:
#line 1709 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 160:
#line 1712 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 161:
#line 1719 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 163:
#line 1731 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 164:
#line 1741 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 165:
#line 1751 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 166:
#line 1758 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 167:
#line 1761 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 168:
#line 1768 "GetDP.y"
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
#line 1784 "GetDP.y"
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
case 171:
#line 1838 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 172:
#line 1841 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 173:
#line 1844 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 174:
#line 1847 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 175:
#line 1850 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 176:
#line 1861 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 178:
#line 1871 "GetDP.y"
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
#line 1896 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 182:
#line 1910 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 183:
#line 1916 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 184:
#line 1923 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 185:
#line 1932 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 186:
#line 1935 "GetDP.y"
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
#line 1957 "GetDP.y"
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
#line 1972 "GetDP.y"
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
#line 1996 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 191:
#line 2010 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 192:
#line 2020 "GetDP.y"
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
#line 2044 "GetDP.y"
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
#line 2069 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 195:
#line 2074 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 196:
#line 2082 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 197:
#line 2090 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 198:
#line 2100 "GetDP.y"
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
#line 2117 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 200:
#line 2125 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 201:
#line 2132 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 202:
#line 2139 "GetDP.y"
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
#line 2148 "GetDP.y"
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
#line 2157 "GetDP.y"
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
#line 2166 "GetDP.y"
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
#line 2187 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 208:
#line 2198 "GetDP.y"
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
#line 2225 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 212:
#line 2238 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 213:
#line 2244 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 214:
#line 2251 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 215:
#line 2260 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 216:
#line 2263 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 217:
#line 2266 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 218:
#line 2269 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 219:
#line 2276 "GetDP.y"
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
#line 2292 "GetDP.y"
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
#line 2341 "GetDP.y"
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
#line 2361 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 224:
#line 2364 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 225:
#line 2369 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 226:
#line 2374 "GetDP.y"
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
case 227:
#line 2388 "GetDP.y"
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
case 228:
#line 2408 "GetDP.y"
{ BasisFunction_S.SubFunction =
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(BasisFunction_S.SubFunction, &j) ;
      }
    ;
    break;}
case 229:
#line 2417 "GetDP.y"
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
#line 2441 "GetDP.y"
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
#line 2501 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 233:
#line 2504 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 234:
#line 2513 "GetDP.y"
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
#line 2579 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 236:
#line 2583 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 237:
#line 2590 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 239:
#line 2599 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 240:
#line 2604 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 241:
#line 2607 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 242:
#line 2614 "GetDP.y"
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
#line 2630 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 244:
#line 2636 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 245:
#line 2639 "GetDP.y"
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
#line 2658 "GetDP.y"
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
#line 2670 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 248:
#line 2676 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 249:
#line 2679 "GetDP.y"
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
#line 2694 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 251:
#line 2698 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 252:
#line 2707 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 254:
#line 2718 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 255:
#line 2723 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 256:
#line 2733 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 257:
#line 2746 "GetDP.y"
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
#line 2761 "GetDP.y"
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
#line 2835 "GetDP.y"
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
#line 2851 "GetDP.y"
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
#line 2869 "GetDP.y"
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
#line 2883 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 264:
#line 2886 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 265:
#line 2889 "GetDP.y"
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
#line 2935 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 268:
#line 2945 "GetDP.y"
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
#line 2971 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 272:
#line 2983 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 273:
#line 2989 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 274:
#line 2996 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 276:
#line 3008 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 277:
#line 3014 "GetDP.y"
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
#line 3028 "GetDP.y"
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
#line 3046 "GetDP.y"
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
#line 3067 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 282:
#line 3070 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 283:
#line 3074 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 284:
#line 3077 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 285:
#line 3087 "GetDP.y"
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
#line 3126 "GetDP.y"
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
#line 3150 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 288:
#line 3155 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 289:
#line 3161 "GetDP.y"
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
#line 3322 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 291:
#line 3327 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 292:
#line 3336 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 293:
#line 3345 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 295:
#line 3353 "GetDP.y"
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
#line 3393 "GetDP.y"
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
#line 3408 "GetDP.y"
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
#line 3436 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 299:
#line 3439 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 300:
#line 3442 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 301:
#line 3445 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 302:
#line 3452 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 304:
#line 3463 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 305:
#line 3473 "GetDP.y"
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
#line 3483 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 307:
#line 3497 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 309:
#line 3509 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 310:
#line 3511 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 311:
#line 3513 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 312:
#line 3515 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 313:
#line 3523 "GetDP.y"
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
#line 3545 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 316:
#line 3553 "GetDP.y"
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
#line 3615 "GetDP.y"
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
#line 3661 "GetDP.y"
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
#line 3685 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 320:
#line 3694 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 321:
#line 3708 "GetDP.y"
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
#line 3737 "GetDP.y"
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
#line 3761 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 325:
#line 3769 "GetDP.y"
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
#line 3824 "GetDP.y"
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
#line 3841 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 328:
#line 3842 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 329:
#line 3843 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 330:
#line 3844 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 331:
#line 3845 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 332:
#line 3846 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 333:
#line 3847 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 334:
#line 3854 "GetDP.y"
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
case 335:
#line 3875 "GetDP.y"
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
#line 3899 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 338:
#line 3909 "GetDP.y"
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
#line 3934 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 342:
#line 3946 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 343:
#line 3953 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 344:
#line 3960 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 345:
#line 3963 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 346:
#line 3965 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 347:
#line 3971 "GetDP.y"
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
#line 3986 "GetDP.y"
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
#line 4005 "GetDP.y"
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
#line 4024 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 352:
#line 4027 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 353:
#line 4036 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 354:
#line 4039 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 355:
#line 4044 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 356:
#line 4049 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 357:
#line 4054 "GetDP.y"
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
#line 4064 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 359:
#line 4073 "GetDP.y"
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
#line 4110 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 361:
#line 4117 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 362:
#line 4120 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 363:
#line 4132 "GetDP.y"
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
#line 4142 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 365:
#line 4148 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 366:
#line 4151 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 367:
#line 4163 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 368:
#line 4171 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 369:
#line 4182 "GetDP.y"
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
case 370:
#line 4199 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 371:
#line 4206 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 372:
#line 4212 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 373:
#line 4218 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 374:
#line 4224 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 375:
#line 4232 "GetDP.y"
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
case 376:
#line 4249 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 377:
#line 4256 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 378:
#line 4262 "GetDP.y"
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
#line 4273 "GetDP.y"
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
#line 4284 "GetDP.y"
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
#line 4300 "GetDP.y"
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
#line 4312 "GetDP.y"
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
case 383:
#line 4332 "GetDP.y"
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
case 384:
#line 4354 "GetDP.y"
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
case 385:
#line 4376 "GetDP.y"
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
case 386:
#line 4389 "GetDP.y"
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
case 387:
#line 4402 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 389:
#line 4411 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 391:
#line 4420 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 392:
#line 4430 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 393:
#line 4441 "GetDP.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 394:
#line 4450 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 395:
#line 4460 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 397:
#line 4470 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 398:
#line 4473 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 399:
#line 4482 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 400:
#line 4495 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 402:
#line 4511 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 403:
#line 4515 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 404:
#line 4519 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 405:
#line 4523 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 406:
#line 4528 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 407:
#line 4539 "GetDP.y"
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
case 409:
#line 4556 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 410:
#line 4560 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 411:
#line 4564 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 412:
#line 4568 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 413:
#line 4572 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 414:
#line 4577 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 415:
#line 4588 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 417:
#line 4603 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 418:
#line 4607 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 419:
#line 4611 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 420:
#line 4615 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 421:
#line 4620 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 422:
#line 4631 "GetDP.y"
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
case 424:
#line 4649 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 425:
#line 4653 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 426:
#line 4657 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 427:
#line 4661 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 428:
#line 4666 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 429:
#line 4676 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 430:
#line 4682 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 431:
#line 4688 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 432:
#line 4698 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 433:
#line 4701 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 434:
#line 4706 "GetDP.y"
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
case 436:
#line 4724 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 437:
#line 4734 "GetDP.y"
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
case 438:
#line 4763 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 439:
#line 4766 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 440:
#line 4769 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 441:
#line 4777 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 442:
#line 4792 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 444:
#line 4804 "GetDP.y"
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
case 446:
#line 4827 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 448:
#line 4841 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 449:
#line 4848 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 450:
#line 4856 "GetDP.y"
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
case 451:
#line 4902 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 452:
#line 4907 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 453:
#line 4913 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 454:
#line 4916 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 455:
#line 4921 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 457:
#line 4932 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 458:
#line 4935 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 459:
#line 4941 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 460:
#line 4946 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 461:
#line 4952 "GetDP.y"
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
case 462:
#line 4966 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 464:
#line 4980 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 465:
#line 4987 "GetDP.y"
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
case 466:
#line 5015 "GetDP.y"
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
case 467:
#line 5025 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 468:
#line 5026 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 469:
#line 5032 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 470:
#line 5041 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 471:
#line 5058 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 473:
#line 5070 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 475:
#line 5077 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 477:
#line 5089 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 478:
#line 5096 "GetDP.y"
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
case 479:
#line 5108 "GetDP.y"
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
case 480:
#line 5119 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 481:
#line 5124 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 482:
#line 5130 "GetDP.y"
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
case 483:
#line 5147 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 484:
#line 5157 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 485:
#line 5160 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 486:
#line 5164 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 487:
#line 5175 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 488:
#line 5180 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 489:
#line 5189 "GetDP.y"
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
case 490:
#line 5201 "GetDP.y"
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
case 491:
#line 5224 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 492:
#line 5225 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 493:
#line 5226 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 494:
#line 5227 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 495:
#line 5233 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 496:
#line 5235 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 497:
#line 5241 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 498:
#line 5247 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 499:
#line 5254 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 500:
#line 5263 "GetDP.y"
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
case 501:
#line 5277 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 502:
#line 5285 "GetDP.y"
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
case 503:
#line 5298 "GetDP.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 504:
#line 5308 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 505:
#line 5317 "GetDP.y"
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
case 506:
#line 5331 "GetDP.y"
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
case 507:
#line 5350 "GetDP.y"
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
case 508:
#line 5372 "GetDP.y"
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
case 509:
#line 5392 "GetDP.y"
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
case 511:
#line 5414 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 512:
#line 5421 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 513:
#line 5428 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 514:
#line 5435 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 515:
#line 5439 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 516:
#line 5443 "GetDP.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 517:
#line 5447 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 518:
#line 5451 "GetDP.y"
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
case 519:
#line 5461 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 520:
#line 5466 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 521:
#line 5471 "GetDP.y"
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
case 522:
#line 5491 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 523:
#line 5498 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 524:
#line 5505 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(Adaption_Type);
      }
    ;
    break;}
case 525:
#line 5514 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(Sort_Type);
      }
    ;
    break;}
case 526:
#line 5523 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 527:
#line 5530 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 528:
#line 5537 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 529:
#line 5541 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 530:
#line 5549 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 531:
#line 5553 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
    ;
    break;}
case 532:
#line 5565 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 533:
#line 5571 "GetDP.y"
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
case 534:
#line 5618 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 536:
#line 5629 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 537:
#line 5632 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 538:
#line 5638 "GetDP.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 539:
#line 5639 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 541:
#line 5647 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 542:
#line 5650 "GetDP.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 543:
#line 5659 "GetDP.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 544:
#line 5662 "GetDP.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 545:
#line 5673 "GetDP.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 546:
#line 5679 "GetDP.y"
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
case 547:
#line 5690 "GetDP.y"
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
case 548:
#line 5709 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 549:
#line 5715 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 550:
#line 5721 "GetDP.y"
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
case 551:
#line 5733 "GetDP.y"
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
case 554:
#line 5784 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 555:
#line 5790 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 556:
#line 5796 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 557:
#line 5807 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 558:
#line 5808 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 559:
#line 5809 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 560:
#line 5810 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 561:
#line 5811 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 562:
#line 5812 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 563:
#line 5813 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 564:
#line 5814 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 565:
#line 5815 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 566:
#line 5816 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 567:
#line 5817 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 568:
#line 5818 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 569:
#line 5819 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 570:
#line 5820 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 571:
#line 5821 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 572:
#line 5822 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 573:
#line 5823 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 574:
#line 5824 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 575:
#line 5825 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 576:
#line 5826 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 577:
#line 5827 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 578:
#line 5830 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 579:
#line 5831 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 580:
#line 5832 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 581:
#line 5833 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 582:
#line 5834 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 583:
#line 5835 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 584:
#line 5836 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 585:
#line 5837 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 586:
#line 5838 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 587:
#line 5839 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 588:
#line 5840 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 589:
#line 5841 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 590:
#line 5842 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 591:
#line 5843 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 592:
#line 5844 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 593:
#line 5845 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 594:
#line 5846 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 595:
#line 5847 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 596:
#line 5848 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 597:
#line 5849 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 598:
#line 5850 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 599:
#line 5851 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 600:
#line 5852 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 601:
#line 5853 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 602:
#line 5854 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 603:
#line 5855 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 604:
#line 5856 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 605:
#line 5857 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 606:
#line 5858 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 607:
#line 5859 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 608:
#line 5860 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 609:
#line 5861 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 610:
#line 5862 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 611:
#line 5863 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 612:
#line 5864 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 613:
#line 5865 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 614:
#line 5866 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 615:
#line 5867 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 616:
#line 5868 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 617:
#line 5869 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 618:
#line 5874 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 619:
#line 5875 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 620:
#line 5876 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 621:
#line 5877 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 622:
#line 5878 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 623:
#line 5879 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 624:
#line 5880 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 625:
#line 5882 "GetDP.y"
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
case 626:
#line 5901 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 627:
#line 5904 "GetDP.y"
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
case 628:
#line 5919 "GetDP.y"
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
#line 5933 "GetDP.y"



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


