
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
#define	tPrintGroup	403
#define	tWrite	404
#define	tAdapt	405
#define	tOnGlobal	406
#define	tOnRegion	407
#define	tOnElementsOf	408
#define	tOnGrid	409
#define	tOnSection	410
#define	tOnPoint	411
#define	tOnLine	412
#define	tOnPlane	413
#define	tOnBox	414
#define	tWithArgument	415
#define	tFile	416
#define	tDepth	417
#define	tDimension	418
#define	tTimeStep	419
#define	tHarmonicToTime	420
#define	tFormat	421
#define	tHeader	422
#define	tFooter	423
#define	tSkin	424
#define	tSmoothing	425
#define	tTarget	426
#define	tSort	427
#define	tIso	428
#define	tNoNewLine	429
#define	tFlag	430
#define	tBreak	431
#define	tHelp	432
#define	tCpu	433
#define	tDEF	434
#define	tOR	435
#define	tAND	436
#define	tEQUAL	437
#define	tNOTEQUAL	438
#define	tAPPROXEQUAL	439
#define	tLESSOREQUAL	440
#define	tGREATEROREQUAL	441
#define	tLESSLESS	442
#define	tGREATERGREATER	443
#define	tCROSSPRODUCT	444
#define	UNARYPREC	445

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.23 2001-07-17 07:04:19 geuzaine Exp $ */

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



#define	YYFINAL		1607
#define	YYFLAG		-32768
#define	YYNTBASE	212

#define YYTRANSLATE(x) ((unsigned)(x) <= 445 ? yytranslate[x] : 398)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   199,     2,   207,   208,   197,     2,     2,   202,
   203,   195,   193,   211,   194,   206,   196,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   187,
     2,   189,   181,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   204,     2,   205,   201,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   209,     2,   210,     2,     2,     2,     2,     2,
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
   177,   178,   179,   180,   182,   183,   184,   185,   186,   188,
   190,   191,   192,   198,   200
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
  1458,  1466,  1472,  1476,  1478,  1480,  1481,  1484,  1488,  1492,
  1495,  1496,  1499,  1503,  1507,  1511,  1515,  1520,  1521,  1524,
  1528,  1532,  1536,  1540,  1544,  1549,  1550,  1553,  1557,  1561,
  1565,  1569,  1574,  1575,  1578,  1582,  1586,  1590,  1594,  1598,
  1603,  1608,  1613,  1614,  1619,  1620,  1623,  1627,  1631,  1635,
  1639,  1643,  1647,  1648,  1651,  1655,  1657,  1658,  1661,  1665,
  1670,  1675,  1679,  1684,  1685,  1690,  1691,  1694,  1698,  1703,
  1704,  1710,  1716,  1717,  1720,  1721,  1728,  1732,  1733,  1738,
  1742,  1746,  1747,  1750,  1754,  1756,  1757,  1760,  1764,  1768,
  1772,  1776,  1781,  1782,  1791,  1792,  1793,  1797,  1805,  1813,
  1814,  1825,  1829,  1836,  1838,  1840,  1842,  1844,  1845,  1849,
  1851,  1854,  1857,  1882,  1885,  1886,  1901,  1910,  1931,  1961,
  2000,  2013,  2014,  2017,  2021,  2026,  2031,  2035,  2038,  2042,
  2046,  2050,  2054,  2058,  2062,  2066,  2070,  2074,  2078,  2082,
  2086,  2090,  2096,  2099,  2103,  2104,  2107,  2108,  2112,  2114,
  2118,  2119,  2121,  2125,  2127,  2129,  2133,  2137,  2141,  2148,
  2154,  2159,  2164,  2171,  2181,  2187,  2188,  2192,  2198,  2204,
  2206,  2208,  2210,  2212,  2214,  2216,  2218,  2220,  2222,  2224,
  2226,  2228,  2230,  2232,  2234,  2236,  2238,  2240,  2242,  2244,
  2246,  2248,  2252,  2255,  2258,  2262,  2266,  2270,  2274,  2278,
  2282,  2286,  2290,  2294,  2298,  2302,  2306,  2310,  2314,  2319,
  2324,  2329,  2334,  2339,  2344,  2349,  2354,  2359,  2364,  2371,
  2376,  2381,  2386,  2391,  2396,  2401,  2408,  2415,  2422,  2428,
  2431,  2433,  2435,  2437,  2439,  2441,  2443,  2445,  2447,  2449,
  2451
};

static const short yyrhs[] = {    -1,
   213,   214,     0,     0,     0,   214,   215,   216,     0,    43,
   209,   219,   210,     0,    79,   209,   239,   210,     0,    50,
   209,   271,   210,     0,    63,   209,   256,   210,     0,    65,
   209,   262,   210,     0,    75,   209,   278,   210,     0,    90,
   209,   301,   210,     0,   107,   209,   327,   210,     0,   141,
   209,   357,   210,     0,   143,   209,   369,   210,     0,   373,
     0,   392,     0,    10,   397,     0,   217,     0,   178,     7,
     0,   178,     5,     7,     0,   178,     5,     5,     7,     0,
   178,     5,     5,     5,     7,     0,   179,     7,     0,     0,
   218,   377,     0,     0,     0,   219,   220,   221,     0,     5,
   180,   223,     7,     0,     5,   238,   180,   223,     7,     0,
     0,     5,   236,   180,   222,   223,     7,     0,    44,   204,
   234,   205,     7,     0,   392,     0,     0,     0,   227,   204,
   224,   228,   225,   229,   205,     0,   207,   231,     0,   223,
     0,     5,   237,     0,    51,     0,     5,     0,   231,     0,
    45,     0,     0,   235,   230,   231,     0,   235,    46,     5,
   237,     0,     5,     0,   233,     0,   209,   232,   210,     0,
     0,   232,   235,   233,     0,   232,   235,   194,   233,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   204,   395,
   205,     3,     0,     3,     8,     3,     8,   395,     0,     5,
     0,     5,   209,   395,   210,     0,     5,   209,   210,     0,
     0,   234,   235,     5,     0,   234,   235,     5,   209,   395,
   210,     0,     0,   211,     0,   209,   207,   395,   210,     0,
     0,   209,   210,     0,   209,   395,   210,     0,     0,   239,
   240,     0,    47,   204,   241,   205,     7,     0,     5,   204,
   205,   180,   242,     7,     0,     5,   204,   226,   205,   180,
   242,     7,     0,   392,     0,     0,   241,   235,     5,     0,
    11,   204,   395,   205,     0,    79,   204,     5,   205,     0,
     0,   243,   244,     0,     0,   245,   246,     0,   249,     0,
     0,     0,   246,   181,   247,   246,     8,   248,   246,     0,
   246,   195,   246,     0,   246,   198,   246,     0,    41,   204,
   246,   211,   246,   205,     0,   246,   196,   246,     0,   246,
   193,   246,     0,   246,   194,   246,     0,   246,   197,   246,
     0,   246,   201,   246,     0,   246,   187,   246,     0,   246,
   189,   246,     0,   246,   188,   246,     0,   246,   190,   246,
     0,   246,   184,   246,     0,   246,   185,   246,     0,   246,
   186,   246,     0,   246,   183,   246,     0,   246,   182,   246,
     0,   194,   246,     0,   193,   246,     0,   199,   246,     0,
   202,   246,   203,     0,   396,     0,   394,   253,   255,     0,
     5,   326,     0,   326,     0,   326,   253,     0,     0,   100,
   250,   204,   244,   205,     0,     0,    42,   251,   204,     3,
   211,   395,   211,   244,   211,   244,   205,     0,    38,   204,
   326,   205,     0,    40,   204,   326,   205,     0,     0,    39,
   252,   204,   244,   211,   226,   205,     0,   187,     5,   189,
   204,   244,   205,     0,   208,     5,     0,   208,   165,     0,
   208,   118,     0,   208,     3,     0,   249,   207,     3,     0,
   207,     3,     0,   204,   206,   205,     0,   204,   205,     0,
   204,   254,   205,     0,   246,     0,   254,   211,   246,     0,
     0,   209,   390,   210,     0,   209,    51,   204,   226,   205,
   210,     0,   209,    48,   204,     5,   205,   210,     0,     0,
   256,   209,   257,   210,     0,     0,   257,   258,     0,    76,
     5,     7,     0,    64,   209,   259,   210,     0,     0,   259,
   209,   260,   210,     0,     0,   260,   261,     0,    51,   226,
     7,     0,    51,    45,     7,     0,    63,     5,   255,     7,
     0,     0,   262,   209,   263,   210,     0,     0,   263,   264,
     0,    76,     5,     7,     0,    68,   242,     7,     0,    64,
   209,   265,   210,     0,     0,   265,   209,   266,   210,     0,
     0,   266,   267,     0,    66,     5,     7,     0,    67,     5,
     7,     0,    64,   209,   268,   210,     0,     0,   268,   209,
   269,   210,     0,     0,   269,   270,     0,    69,     5,     7,
     0,    70,   395,     7,     0,    71,   395,     7,     0,    72,
   395,     7,     0,    73,   395,     7,     0,    74,   395,     7,
     0,     0,   271,   272,     0,   209,   273,   210,     0,   392,
     0,     0,   273,   274,     0,    76,     5,     7,     0,    76,
     5,   236,     7,     0,    66,     5,     7,     0,    64,   209,
   275,   210,     0,    64,     5,   209,   275,   210,     0,     0,
   275,   209,   276,   210,     0,     0,   276,   277,     0,    66,
     5,     7,     0,    51,   226,     7,     0,    52,   226,     7,
     0,    58,   242,     7,     0,    57,   242,     7,     0,    62,
     5,     7,     0,    59,   209,     3,   235,     3,   210,     7,
     0,    53,   226,     7,     0,    54,   226,     7,     0,    79,
   242,     7,     0,    56,   242,     7,     0,    55,   242,     7,
     0,    79,   204,   242,   211,   242,   205,     7,     0,    56,
   204,   242,   211,   242,   205,     7,     0,    55,   204,   242,
   211,   242,   205,     7,     0,     0,   278,   279,     0,   209,
   280,   210,     0,   392,     0,     0,   280,   281,     0,    76,
     5,     7,     0,    76,     5,   236,     7,     0,    66,     5,
     7,     0,    77,   209,   282,   210,     0,    84,   209,   288,
   210,     0,    86,   209,   295,   210,     0,    50,   209,   298,
   210,     0,     0,   282,   209,   283,   210,     0,     0,   283,
   284,     0,    76,     5,     7,     0,    78,     5,     7,     0,
    78,     5,   236,     7,     0,    79,     5,   285,     7,     0,
    80,   209,     5,   235,     5,   210,     7,     0,    81,   387,
     7,     0,    82,   226,     7,     0,    83,   226,     7,     0,
     0,     0,     0,   209,    91,     5,     7,    90,     5,   236,
     7,   286,    43,   226,     7,   287,   107,     5,   237,     7,
   210,     0,     0,   288,   209,   289,   210,     0,     0,   289,
   290,     0,    76,     5,     7,     0,    85,   291,     7,     0,
    78,   293,     7,     0,     5,     0,   209,   292,   210,     0,
     0,   292,   235,     5,     0,     5,     0,   209,   294,   210,
     0,     0,   294,   235,     5,     0,     0,   295,   209,   296,
   210,     0,     0,   296,   297,     0,    76,     5,     7,     0,
    66,     5,     7,     0,    78,     5,     7,     0,     0,   298,
   209,   299,   210,     0,     0,   299,   300,     0,    78,     5,
     7,     0,    83,   227,    89,     5,     7,     0,    87,   227,
     7,     0,    88,   230,     7,     0,    89,     5,   237,     7,
     0,     0,   301,   302,     0,   209,   303,   210,     0,   392,
     0,     0,   303,   304,     0,    76,     5,     7,     0,    76,
     5,   236,     7,     0,    66,     5,     7,     0,    91,   209,
   305,   210,     0,    95,   209,   311,   210,     0,     0,   305,
   209,   306,   210,     0,     0,   306,   307,     0,    76,     5,
     7,     0,    66,    86,     7,     0,    66,    96,     7,     0,
    66,     5,     7,     0,     0,    92,     5,   237,   308,   310,
     7,     0,    93,     3,     7,     0,     0,   204,   309,   244,
   205,     7,     0,   106,   226,     7,     0,    65,     5,     7,
     0,    63,     5,     7,     0,    94,     3,     7,     0,     0,
   204,     5,   205,     0,     0,   311,   312,     0,    96,   209,
   317,   210,     0,    97,   209,   317,   210,     0,    98,   209,
   321,   210,     0,    99,   209,   313,   210,     0,     0,   313,
   314,     0,    66,     5,     7,     0,    89,     5,     7,     0,
   209,   315,   210,     0,     0,   315,   316,     0,    60,   326,
     7,     0,    61,   326,     7,     0,    95,   326,     7,     0,
   106,   226,     7,     0,     0,   317,   318,     0,     0,     0,
   325,   204,   319,   244,   320,   211,   244,   205,     7,     0,
   106,   226,     7,     0,    63,     5,     7,     0,    65,     5,
     7,     0,     0,   321,   322,     0,   106,   226,     7,     0,
     0,     0,   325,   204,   323,   244,   324,   211,   326,   205,
     7,     0,     0,   100,     0,   101,     0,   102,     0,   103,
     0,   104,     0,   105,     0,   209,     5,     5,   210,     0,
   209,     5,   210,     0,     0,   327,   328,     0,   209,   329,
   210,     0,   392,     0,     0,   329,   330,     0,    76,     5,
     7,     0,    76,     5,   236,     7,     0,   108,   209,   332,
   210,     0,     0,   115,   331,   209,   339,   210,     0,     0,
   332,   209,   333,   210,     0,     0,   333,   334,     0,    76,
     5,     7,     0,    66,     5,     7,     0,   109,   335,     7,
     0,   110,   397,     7,     0,   113,   337,     7,     0,   114,
     5,     7,     0,   111,   389,     7,     0,   112,   397,     7,
     0,     5,   237,     0,   209,   336,   210,     0,     0,   336,
   235,     5,     0,     5,     0,   209,   338,   210,     0,     0,
   338,   235,     5,     0,     0,   339,   340,     0,     5,     5,
     7,     0,   117,   242,     7,     0,   126,   209,   346,   210,
     0,   130,   209,   348,   210,     0,   133,   209,   350,   210,
     0,   136,   209,   352,   210,     0,     5,   204,     5,   205,
     7,     0,   117,   204,   242,   205,     7,     0,   177,     7,
     0,   121,   204,   242,   205,   209,   339,   210,     0,   121,
   204,   242,   205,   209,   339,   210,   122,   209,   339,   210,
     0,   119,   204,     5,   211,   242,   205,     7,     0,   124,
   204,     5,   211,   242,   205,     7,     0,   125,   204,     5,
   211,   226,   211,     5,   205,     7,     0,   120,   204,     5,
   211,     5,   211,   389,   205,     7,     0,   123,   204,     5,
   211,   395,   211,   389,   211,   395,   205,     7,     0,   126,
   204,   395,   211,   395,   211,   242,   211,   242,   205,   209,
   339,   210,     0,   130,   204,   395,   211,   395,   211,   242,
   211,   395,   211,   395,   205,   209,   339,   210,     0,     0,
   148,   341,   204,   343,   344,   205,     7,     0,     0,   150,
   342,   204,   343,   344,   205,     7,     0,   139,   204,   226,
   211,   242,   205,     7,     0,   143,   204,     5,   205,     7,
     0,   140,     6,     7,     0,   387,     0,     5,     0,     0,
   344,   345,     0,   211,   162,   397,     0,   211,   165,   389,
     0,   211,   389,     0,     0,   346,   347,     0,   127,   395,
     7,     0,   128,   395,     7,     0,   118,   242,     7,     0,
   129,   242,     7,     0,   115,   209,   339,   210,     0,     0,
   348,   349,     0,   127,   395,     7,     0,   128,   395,     7,
     0,   118,   242,     7,     0,   131,   395,     7,     0,   132,
   395,     7,     0,   115,   209,   339,   210,     0,     0,   350,
   351,     0,   134,   395,     7,     0,   135,   242,     7,     0,
    68,   395,     7,     0,   176,   395,     7,     0,   115,   209,
   339,   210,     0,     0,   352,   353,     0,   134,   395,     7,
     0,   137,   395,     7,     0,    68,   395,     7,     0,   176,
   395,     7,     0,   108,     5,     7,     0,   138,   209,   354,
   210,     0,   115,   209,   339,   210,     0,   116,   209,   339,
   210,     0,     0,   354,   209,   355,   210,     0,     0,   355,
   356,     0,    66,     5,     7,     0,    91,     5,     7,     0,
   106,   226,     7,     0,    68,   395,     7,     0,    79,   242,
     7,     0,   176,     5,     7,     0,     0,   357,   358,     0,
   209,   359,   210,     0,   392,     0,     0,   359,   360,     0,
    76,     5,     7,     0,    76,     5,   236,     7,     0,   109,
     5,   237,     7,     0,   142,     5,     7,     0,    91,   209,
   361,   210,     0,     0,   361,   209,   362,   210,     0,     0,
   362,   363,     0,    76,     5,     7,     0,    57,   209,   364,
   210,     0,     0,   364,    96,   209,   365,   210,     0,   364,
     5,   209,   365,   210,     0,     0,   365,   366,     0,     0,
   325,   204,   367,   244,   205,     7,     0,    66,     5,     7,
     0,     0,   106,   368,   226,     7,     0,    63,     5,     7,
     0,    65,     5,     7,     0,     0,   369,   370,     0,   209,
   371,   210,     0,   392,     0,     0,   371,   372,     0,    76,
     5,     7,     0,   144,     5,     7,     0,   167,     5,     7,
     0,   146,   397,     7,     0,   115,   209,   375,   210,     0,
     0,   143,     5,   145,     5,   374,   209,   375,   210,     0,
     0,     0,   375,   376,   377,     0,   147,   204,   379,   382,
   384,   205,     7,     0,   148,   204,   379,   382,   384,   205,
     7,     0,     0,   149,   204,   226,   378,   211,   106,   226,
   384,   205,     7,     0,     5,   381,   211,     0,     5,   381,
   380,     5,   381,   211,     0,   195,     0,   196,     0,   193,
     0,   194,     0,     0,   204,   226,   205,     0,   152,     0,
   153,   226,     0,   154,   226,     0,   156,   209,   209,   395,
   211,   395,   211,   395,   210,   209,   395,   211,   395,   211,
   395,   210,   209,   395,   211,   395,   211,   395,   210,   210,
     0,   155,   226,     0,     0,   155,   209,   242,   211,   242,
   211,   242,   210,   209,   389,   383,   211,   389,   210,     0,
   157,   209,   395,   211,   395,   211,   395,   210,     0,   158,
   209,   209,   395,   211,   395,   211,   395,   210,   209,   395,
   211,   395,   211,   395,   210,   210,   209,   395,   210,     0,
   159,   209,   209,   395,   211,   395,   211,   395,   210,   209,
   395,   211,   395,   211,   395,   210,   209,   395,   211,   395,
   211,   395,   210,   210,   209,   395,   211,   395,   210,     0,
   160,   209,   209,   395,   211,   395,   211,   395,   210,   209,
   395,   211,   395,   211,   395,   210,   209,   395,   211,   395,
   211,   395,   210,   209,   395,   211,   395,   211,   395,   210,
   210,   209,   395,   211,   395,   211,   395,   210,     0,   153,
   226,   161,     5,   209,   395,   211,   395,   210,   209,   395,
   210,     0,     0,   384,   385,     0,   211,   162,   397,     0,
   211,   162,   189,   397,     0,   211,   162,   192,   397,     0,
   211,   163,   395,     0,   211,   170,     0,   211,   171,   395,
     0,   211,   166,   395,     0,   211,   167,     5,     0,   211,
   168,   386,     0,   211,   169,   386,     0,   211,   167,   386,
     0,   211,   164,   395,     0,   211,   165,   389,     0,   211,
   151,     5,     0,   211,   173,     5,     0,   211,   172,   395,
     0,   211,    57,   389,     0,   211,   174,   395,     0,   211,
   174,   209,   390,   210,     0,   211,   175,     0,   211,   111,
   389,     0,     0,   386,     6,     0,     0,   209,   388,   210,
     0,   242,     0,   388,   211,   242,     0,     0,   395,     0,
   209,   390,   210,     0,   395,     0,   391,     0,   390,   211,
   395,     0,   390,   211,   391,     0,   395,     8,   395,     0,
   395,     8,   204,   395,   205,   395,     0,   395,     8,   395,
     8,   395,     0,     5,   180,   395,     7,     0,     5,   180,
     6,     7,     0,     5,   180,   209,   390,   210,     7,     0,
     5,   180,    49,   204,     5,   211,     5,   205,     7,     0,
    12,   204,   393,   205,     7,     0,     0,   393,   235,     5,
     0,   393,   235,     5,   180,   395,     0,   393,   235,     5,
   180,     6,     0,    18,     0,    19,     0,    20,     0,    21,
     0,    22,     0,    23,     0,    24,     0,    25,     0,    26,
     0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
     0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
     0,    37,     0,     5,     0,   396,     0,   202,   395,   203,
     0,   194,   395,     0,   199,   395,     0,   395,   194,   395,
     0,   395,   193,   395,     0,   395,   195,   395,     0,   395,
   196,   395,     0,   395,   197,   395,     0,   395,   201,   395,
     0,   395,   187,   395,     0,   395,   189,   395,     0,   395,
   188,   395,     0,   395,   190,   395,     0,   395,   184,   395,
     0,   395,   185,   395,     0,   395,   183,   395,     0,   395,
   182,   395,     0,    18,   204,   395,   205,     0,    19,   204,
   395,   205,     0,    20,   204,   395,   205,     0,    21,   204,
   395,   205,     0,    22,   204,   395,   205,     0,    23,   204,
   395,   205,     0,    24,   204,   395,   205,     0,    25,   204,
   395,   205,     0,    26,   204,   395,   205,     0,    27,   204,
   395,   205,     0,    28,   204,   395,   211,   395,   205,     0,
    29,   204,   395,   205,     0,    30,   204,   395,   205,     0,
    31,   204,   395,   205,     0,    32,   204,   395,   205,     0,
    33,   204,   395,   205,     0,    34,   204,   395,   205,     0,
    35,   204,   395,   211,   395,   205,     0,    36,   204,   395,
   211,   395,   205,     0,    37,   204,   395,   211,   395,   205,
     0,   395,   181,   395,     8,   395,     0,   395,   207,     0,
     4,     0,     3,     0,    13,     0,    14,     0,    15,     0,
    16,     0,    17,     0,     5,     0,     6,     0,     5,     0,
     9,   204,   397,   211,   397,   205,     0
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
  4419,  4429,  4439,  4449,  4459,  4469,  4475,  4478,  4482,  4491,
  4502,  4514,  4518,  4524,  4528,  4532,  4537,  4546,  4559,  4563,
  4569,  4573,  4577,  4581,  4586,  4595,  4607,  4610,  4616,  4620,
  4624,  4629,  4638,  4653,  4656,  4662,  4666,  4670,  4675,  4685,
  4691,  4697,  4706,  4710,  4714,  4728,  4731,  4743,  4772,  4775,
  4778,  4786,  4800,  4808,  4811,  4832,  4835,  4846,  4849,  4857,
  4865,  4911,  4916,  4921,  4925,  4929,  4936,  4940,  4944,  4949,
  4955,  4961,  4974,  4985,  4988,  4996,  5024,  5035,  5035,  5041,
  5050,  5066,  5074,  5077,  5082,  5085,  5094,  5097,  5105,  5117,
  5128,  5133,  5138,  5156,  5165,  5169,  5174,  5182,  5188,  5192,
  5197,  5203,  5217,  5239,  5242,  5243,  5244,  5247,  5251,  5255,
  5263,  5270,  5277,  5293,  5300,  5314,  5324,  5332,  5345,  5363,
  5387,  5407,  5426,  5429,  5437,  5444,  5451,  5455,  5459,  5463,
  5467,  5477,  5482,  5487,  5507,  5514,  5521,  5530,  5539,  5546,
  5553,  5557,  5565,  5569,  5580,  5587,  5633,  5639,  5643,  5648,
  5653,  5656,  5657,  5661,  5666,  5675,  5678,  5687,  5695,  5706,
  5723,  5731,  5737,  5749,  5793,  5797,  5800,  5806,  5812,  5823,
  5825,  5826,  5827,  5828,  5829,  5830,  5831,  5832,  5833,  5834,
  5835,  5836,  5837,  5838,  5839,  5840,  5841,  5842,  5843,  5844,
  5846,  5848,  5849,  5850,  5851,  5852,  5853,  5854,  5855,  5856,
  5857,  5858,  5859,  5860,  5861,  5862,  5863,  5864,  5865,  5866,
  5867,  5868,  5869,  5870,  5871,  5872,  5873,  5874,  5875,  5876,
  5877,  5878,  5879,  5880,  5881,  5882,  5883,  5884,  5885,  5886,
  5889,  5892,  5893,  5894,  5895,  5896,  5897,  5898,  5915,  5920,
  5935
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
"tNameOfPostProcessing","tUsingPost","tAppend","tPlot","tPrint","tPrintGroup",
"tWrite","tAdapt","tOnGlobal","tOnRegion","tOnElementsOf","tOnGrid","tOnSection",
"tOnPoint","tOnLine","tOnPlane","tOnBox","tWithArgument","tFile","tDepth","tDimension",
"tTimeStep","tHarmonicToTime","tFormat","tHeader","tFooter","tSkin","tSmoothing",
"tTarget","tSort","tIso","tNoNewLine","tFlag","tBreak","tHelp","tCpu","tDEF",
"'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'","tLESSOREQUAL",
"'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'","'*'","'/'",
"'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'","'['","']'","'.'",
"'#'","'$'","'{'","'}'","','","Stats","@1","ProblemDefinitions","@2","ProblemDefinition",
"Interactive","@3","Groups","@4","Group","@5","ReducedGroupRHS","@6","@7","GroupRHS",
"FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup",
"ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension",
"MultipleIndex","Index","Functions","Function","DefineFunctions","Expression",
"@8","WholeQuantityExpression","@9","WholeQuantity","@10","@11","WholeQuantity_Single",
"@12","@13","@14","ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction",
"JacobianMethods","JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase",
"JacobianCaseTerm","IntegrationMethods","IntegrationMethod","IntegrationMethodTerm",
"IntegrationCases","IntegrationCase","IntegrationCaseTerm","QuadratureCases",
"QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint","Constraint",
"ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm","FunctionSpaces",
"BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction",
"BasisFunctionTerm","OptionalParametersForBasisFunction","@15","@16","SubSpaces",
"SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
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
"PostSubOperation","@30","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","@31","PrintOptions","PrintOption","ParsedStrings","ListOfExpression",
"RecursiveListOfExpression","ListOfDouble","RecursiveListOfDouble","DottedFExpr",
"Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   213,   212,   214,   215,   214,   216,   216,   216,   216,   216,
   216,   216,   216,   216,   216,   216,   216,   216,   216,   217,
   217,   217,   217,   217,   218,   217,   219,   220,   219,   221,
   221,   222,   221,   221,   221,   224,   225,   223,   223,   226,
   226,   227,   227,   228,   228,   229,   229,   229,   230,   231,
   231,   232,   232,   232,   233,   233,   233,   233,   233,   233,
   233,   234,   234,   234,   235,   235,   236,   237,   237,   238,
   239,   239,   240,   240,   240,   240,   241,   241,   242,   242,
   243,   242,   245,   244,   246,   247,   248,   246,   246,   246,
   246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
   246,   246,   246,   246,   246,   246,   246,   246,   249,   249,
   249,   249,   249,   249,   250,   249,   251,   249,   249,   249,
   252,   249,   249,   249,   249,   249,   249,   249,   249,   253,
   253,   253,   254,   254,   255,   255,   255,   255,   256,   256,
   257,   257,   258,   258,   259,   259,   260,   260,   261,   261,
   261,   262,   262,   263,   263,   264,   264,   264,   265,   265,
   266,   266,   267,   267,   267,   268,   268,   269,   269,   270,
   270,   270,   270,   270,   270,   271,   271,   272,   272,   273,
   273,   274,   274,   274,   274,   274,   275,   275,   276,   276,
   277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
   277,   277,   277,   277,   277,   278,   278,   279,   279,   280,
   280,   281,   281,   281,   281,   281,   281,   281,   282,   282,
   283,   283,   284,   284,   284,   284,   284,   284,   284,   284,
   285,   286,   287,   285,   288,   288,   289,   289,   290,   290,
   290,   291,   291,   292,   292,   293,   293,   294,   294,   295,
   295,   296,   296,   297,   297,   297,   298,   298,   299,   299,
   300,   300,   300,   300,   300,   301,   301,   302,   302,   303,
   303,   304,   304,   304,   304,   304,   305,   305,   306,   306,
   307,   307,   307,   307,   308,   307,   307,   309,   307,   307,
   307,   307,   307,   310,   310,   311,   311,   312,   312,   312,
   312,   313,   313,   314,   314,   314,   315,   315,   316,   316,
   316,   316,   317,   317,   319,   320,   318,   318,   318,   318,
   321,   321,   322,   323,   324,   322,   325,   325,   325,   325,
   325,   325,   325,   326,   326,   327,   327,   328,   328,   329,
   329,   330,   330,   330,   331,   330,   332,   332,   333,   333,
   334,   334,   334,   334,   334,   334,   334,   334,   335,   335,
   336,   336,   337,   337,   338,   338,   339,   339,   340,   340,
   340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
   340,   340,   340,   340,   340,   340,   341,   340,   342,   340,
   340,   340,   340,   343,   343,   344,   344,   345,   345,   345,
   346,   346,   347,   347,   347,   347,   347,   348,   348,   349,
   349,   349,   349,   349,   349,   350,   350,   351,   351,   351,
   351,   351,   352,   352,   353,   353,   353,   353,   353,   353,
   353,   353,   354,   354,   355,   355,   356,   356,   356,   356,
   356,   356,   357,   357,   358,   358,   359,   359,   360,   360,
   360,   360,   360,   361,   361,   362,   362,   363,   363,   364,
   364,   364,   365,   365,   367,   366,   366,   368,   366,   366,
   366,   369,   369,   370,   370,   371,   371,   372,   372,   372,
   372,   372,   374,   373,   375,   376,   375,   377,   377,   378,
   377,   379,   379,   380,   380,   380,   380,   381,   381,   382,
   382,   382,   382,   382,   383,   382,   382,   382,   382,   382,
   382,   384,   384,   385,   385,   385,   385,   385,   385,   385,
   385,   385,   385,   385,   385,   385,   385,   385,   385,   385,
   385,   385,   385,   385,   386,   386,   387,   387,   388,   388,
   389,   389,   389,   390,   390,   390,   390,   391,   391,   391,
   392,   392,   392,   392,   392,   393,   393,   393,   393,   394,
   394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
   394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
   395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
   395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
   395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
   395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
   396,   396,   396,   396,   396,   396,   396,   396,   397,   397,
   397
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
     7,     5,     3,     1,     1,     0,     2,     3,     3,     2,
     0,     2,     3,     3,     3,     3,     4,     0,     2,     3,
     3,     3,     3,     3,     4,     0,     2,     3,     3,     3,
     3,     4,     0,     2,     3,     3,     3,     3,     3,     4,
     4,     4,     0,     4,     0,     2,     3,     3,     3,     3,
     3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
     4,     3,     4,     0,     4,     0,     2,     3,     4,     0,
     5,     5,     0,     2,     0,     6,     3,     0,     4,     3,
     3,     0,     2,     3,     1,     0,     2,     3,     3,     3,
     3,     4,     0,     8,     0,     0,     3,     7,     7,     0,
    10,     3,     6,     1,     1,     1,     1,     0,     3,     1,
     2,     2,    24,     2,     0,    14,     8,    20,    29,    38,
    12,     0,     2,     3,     4,     4,     3,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     5,     2,     3,     0,     2,     0,     3,     1,     3,
     0,     1,     3,     1,     1,     3,     3,     3,     6,     5,
     4,     4,     6,     9,     5,     0,     3,     5,     5,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     3,     2,     2,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     4,     4,
     4,     4,     4,     4,     4,     4,     4,     4,     6,     4,
     4,     4,     4,     4,     4,     6,     6,     6,     5,     2,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   630,   629,     0,    18,   556,    27,
   176,   139,   152,   206,    71,   266,   336,   443,     0,   472,
     0,    20,    24,     0,     0,     0,    26,   622,   621,   628,
     0,   623,   624,   625,   626,   627,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   581,     0,    65,    28,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
     0,   552,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   583,   584,     0,     0,   545,   544,   551,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   620,     0,     0,    66,     0,
     6,     0,   180,     8,   177,   179,   141,     9,   154,    10,
   210,    11,   207,   209,     0,     0,     7,    72,    76,   270,
    12,   267,   269,   340,    13,   337,   339,   447,    14,   444,
   446,   483,   476,    15,   473,   475,     0,    22,   498,     0,
     0,    68,    42,     0,    40,   490,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   582,     0,
     0,     0,     0,   598,   597,   595,   596,   591,   593,   592,
   594,   586,   585,   587,   588,   589,   590,     0,   555,   557,
     0,     0,    29,    35,     0,     0,     0,     0,     0,    77,
     0,     0,     0,     0,     0,    23,     0,     0,   500,     0,
     0,     0,     0,     0,     0,     0,     0,   512,   512,     0,
    41,    55,    59,    52,    39,    50,     0,    36,   599,   600,
   601,   602,   603,   604,   605,   606,   607,   608,     0,   610,
   611,   612,   613,   614,   615,     0,     0,     0,     0,   553,
   547,   546,     0,   548,     0,     0,     0,     0,     0,     0,
     0,    62,     0,     0,     0,   178,   181,     0,     0,   140,
   142,     0,    81,     0,   153,   155,     0,     0,     0,     0,
     0,     0,   208,   211,     0,     0,    65,     0,     0,     0,
     0,   268,   271,     0,     0,   345,   338,   341,     0,     0,
     0,     0,   445,   448,   485,     0,     0,     0,     0,     0,
   474,   477,     0,   496,   497,   494,   495,   492,     0,   501,
   502,    81,   504,     0,     0,     0,     0,     0,     0,     0,
    69,     0,     0,    65,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   619,   631,   559,   558,   628,     0,     0,
     0,    32,     0,    65,     0,   187,     0,     0,   145,     0,
   159,     0,     0,     0,    83,     0,   257,     0,     0,   219,
   235,   250,    81,     0,     0,     0,     0,     0,   277,   296,
     0,   347,     0,     0,   454,    68,     0,   486,     0,   485,
     0,     0,     0,   499,   498,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   513,     0,    56,     0,    61,     0,
    51,     0,     0,    45,    37,    44,   609,   616,   617,   618,
     0,     0,   550,    30,     0,    70,     0,    43,     0,     0,
     0,   187,     0,   184,   182,     0,     0,     0,   143,     0,
     0,     0,   157,    82,     0,   156,     0,   214,   212,     0,
     0,     0,     0,     0,    81,    73,    78,   274,   272,     0,
     0,     0,   342,     0,     0,   367,   449,     0,     0,     0,
   452,   484,     0,   478,   486,   479,   481,   480,     0,     0,
    81,     0,     0,     0,     0,     0,   488,   541,   541,     0,
     0,     0,     0,   541,     0,   535,   535,   535,   518,     0,
     0,     0,     0,   533,   489,     0,     0,    60,     0,    53,
   512,    65,   554,   549,    67,     0,    31,    34,    63,     0,
   189,   185,   183,   147,   144,   161,   158,     0,     0,   628,
   560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
   570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     0,   121,     0,     0,   117,   115,     0,     0,     0,     0,
     0,     0,     0,     0,    84,    85,   113,     0,   110,   259,
   218,   213,   221,   215,   237,   216,   252,   217,    74,     0,
   273,   279,   275,     0,     0,     0,     0,   276,   297,   343,
   349,   344,     0,   450,   456,   453,   451,   487,   482,   493,
     0,     0,     0,     0,     0,     0,     0,     0,   530,   542,
   534,   527,     0,     0,   514,   517,   525,   526,   520,   521,
   524,   522,   523,   519,   529,   528,     0,   531,    58,     0,
    54,     0,     0,     0,    33,     0,   186,     0,     0,     0,
    79,    80,   112,     0,     0,     0,     0,     0,     0,     0,
   107,   106,   108,     0,   129,   127,   124,   126,   125,     0,
    86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   114,
   135,     0,     0,     0,     0,    75,     0,   313,   313,   321,
   302,     0,     0,    81,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   387,   389,     0,
   346,   368,     0,     0,    81,     0,     0,     0,     0,     0,
     0,   515,   516,   536,     0,    57,     0,    38,    49,     0,
     0,     0,     0,     0,     0,     0,    81,    81,    81,    81,
     0,     0,     0,    81,   188,   190,     0,     0,   146,   148,
     0,     0,     0,   160,   162,     0,    83,     0,     0,     0,
    83,     0,   109,     0,   335,     0,   105,   104,   101,   102,
   103,    97,    99,    98,   100,    93,    94,    89,    92,    95,
    90,    96,   128,   131,     0,   133,     0,     0,   111,     0,
     0,     0,     0,     0,   258,   260,     0,     0,     0,     0,
   537,     0,     0,   220,   222,     0,     0,     0,   236,   238,
     0,     0,     0,   251,   253,     0,     0,     0,     0,     0,
     0,     0,     0,   288,   278,   280,   327,   327,   327,     0,
     0,     0,     0,     0,   541,     0,     0,     0,   348,   350,
     0,     0,    81,     0,     0,     0,    81,     0,     0,     0,
     0,   401,     0,   408,   416,   423,     0,     0,     0,     0,
     0,   377,     0,     0,   455,   457,     0,     0,     0,     0,
     0,     0,     0,   543,   532,   491,    68,    47,    64,     0,
     0,     0,     0,    81,     0,    81,     0,     0,     0,     0,
     0,     0,    81,     0,     0,     0,   135,   166,     0,     0,
   119,     0,   120,     0,     0,     0,    83,   334,     0,   130,
   132,     0,     0,     0,     0,     0,     0,     0,     0,    68,
     0,     0,   231,     0,    81,     0,     0,     0,     0,   246,
   248,     0,   242,   244,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    68,     0,     0,     0,    83,     0,
     0,   328,   329,   330,   331,   332,   333,     0,   298,   314,
     0,   299,     0,   300,   322,     0,     0,     0,   307,   301,
   303,     0,     0,    68,   361,     0,     0,     0,     0,   363,
   365,     0,     0,   369,     0,     0,   370,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   393,     0,   537,   537,   460,     0,     0,     0,     0,   507,
     0,     0,     0,    48,   192,   193,   198,   199,     0,   202,
     0,   201,   195,   194,    65,   196,   191,     0,   200,   150,
   149,     0,     0,   163,   164,     0,     0,     0,   116,     0,
    87,   134,     0,     0,   136,   261,     0,   263,   264,     0,
   223,   224,     0,     0,     0,    65,   539,     0,   228,   229,
   230,   239,    65,   241,    65,   240,   255,   254,   256,   292,
   291,   284,   282,   283,   281,   285,   287,   293,   290,     0,
     0,     0,     0,   315,     0,   324,     0,     0,     0,   352,
   351,   359,    65,   353,   354,   357,   358,    65,   355,   356,
     0,     0,    81,     0,     0,     0,    81,     0,     0,     0,
    81,     0,     0,    81,   371,   402,     0,     0,    81,     0,
     0,     0,     0,   372,   409,     0,     0,     0,    81,     0,
   373,   417,     0,     0,     0,     0,     0,     0,     0,     0,
   374,   424,    81,     0,   395,   396,   394,   396,     0,   458,
     0,   541,     0,     0,     0,     0,    81,    81,     0,    81,
   151,   168,   165,     0,    91,     0,   123,     0,     0,     0,
     0,   265,   225,     0,   226,     0,   538,    81,   247,     0,
   243,     0,   294,     0,   319,   320,   318,    83,   323,    83,
   304,   305,     0,     0,     0,     0,   306,   308,   360,     0,
   364,     0,   375,   376,     0,     0,   367,     0,     0,     0,
     0,   367,     0,     0,     0,     0,     0,   367,     0,     0,
     0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
   367,   367,     0,     0,   433,     0,     0,   392,     0,     0,
     0,     0,   459,     0,   505,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   122,    83,    88,     0,     0,   262,
     0,     0,   540,   249,   245,     0,     0,   289,   316,   325,
     0,     0,     0,     0,   362,   366,     0,   541,     0,   541,
     0,     0,    81,     0,   405,   403,   404,   406,    81,     0,
   412,   410,   411,   413,   414,   420,     0,   418,   419,   421,
   427,   429,     0,     0,   425,   426,     0,   428,     0,     0,
   541,   397,     0,   463,   463,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   167,   169,     0,   138,   137,     0,     0,     0,   286,
     0,     0,   309,   310,   311,   312,   380,     0,   378,     0,
   381,     0,     0,   407,     0,   415,   422,   431,   432,   435,
   430,   391,   388,     0,   541,   400,   390,   327,   327,   511,
   541,     0,     0,     0,     0,   205,   204,   197,   203,     0,
     0,     0,     0,     0,     0,    83,     0,   227,   295,    83,
     0,     0,     0,     0,     0,    81,     0,     0,   398,   399,
     0,     0,     0,   468,   462,     0,   464,   461,     0,     0,
     0,     0,     0,   170,   171,   172,   173,   174,   175,     0,
     0,     0,     0,   383,   367,     0,   382,     0,     0,     0,
     0,    81,     0,     0,     0,   434,   436,     0,     0,     0,
     0,   465,   506,     0,     0,     0,     0,   118,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   470,   471,   467,     0,    83,     0,     0,     0,     0,
   232,   317,   326,   379,   384,   367,     0,   437,   440,   441,
   438,   439,   442,   469,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   385,   367,
   466,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   233,   386,     0,   508,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
   503,     0,     0,     0,     0,     0,   234,     0,     0,     0,
     0,     0,     0,   509,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   510,     0,     0,     0
};

static const short yydefgoto[] = {  1605,
     1,     2,     3,    19,    20,    21,    86,   152,   243,   477,
   195,   386,   562,   196,   197,   465,   683,   781,   275,   384,
   276,   404,   150,   310,   271,   311,    91,   168,   337,   414,
   415,   494,   495,   615,   816,  1218,   616,   699,   698,   695,
   730,   837,   839,    88,   246,   321,   488,   689,   800,    89,
   247,   326,   490,   690,   805,  1083,  1304,  1383,    87,   155,
   245,   317,   483,   688,   796,    90,   163,   248,   334,   501,
   733,   855,  1105,  1540,  1568,   502,   734,   860,   985,  1115,
   982,  1113,   503,   735,   865,   497,   732,   846,    92,   172,
   251,   343,   511,   737,   876,  1233,   999,  1317,   512,   639,
   880,  1021,  1139,  1248,   877,  1010,  1238,  1391,   879,  1015,
  1240,  1392,  1011,   617,    93,   176,   252,   348,   433,   515,
   742,   890,  1026,  1143,  1032,  1148,   643,   762,   910,   911,
  1196,  1289,  1362,  1045,  1166,  1047,  1175,  1048,  1182,  1049,
  1192,  1357,  1448,  1487,    94,   180,   253,   354,   519,   763,
   916,  1199,  1418,  1457,  1516,  1491,    96,   185,   255,   362,
    22,   254,   438,   523,    47,   277,   190,   369,   258,   268,
  1367,   379,   455,   671,  1197,  1108,   659,   127,   128,    23,
    85,   618,   660,    83,    28
};

static const short yypact[] = {-32768,
-32768,    29,  2466,  -111,   548,  -100,   -75,   -68,   -57,   -50,
   -47,   -28,    14,    73,    82,    19,   448,   246,-32768,-32768,
   113,-32768,-32768,  1193,-32768,-32768,   150,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   212,-32768,
   463,-32768,-32768,   162,   167,   171,-32768,-32768,-32768,-32768,
   372,-32768,-32768,-32768,-32768,-32768,   197,   232,   274,   278,
   281,   285,   319,   321,   329,   337,   374,   379,   388,   393,
   400,   403,   415,   438,   444,   450,   460,  2412,  2412,  2412,
  2412,   462,-32768,   548,    -6,   199,    38,    -2,   182,    46,
    56,    48,    58,   118,   417,   128,   489,-32768,   493,   493,
   145,-32768,  2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,
  2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,
  2412,  2412,   538,   107,   107,  4336,   303,-32768,   378,-32768,
  2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,  2412,
  2412,  2412,  2412,  2412,  2412,-32768,   455,   661,-32768,   665,
-32768,   358,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,    83,   477,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   678,-32768,   513,   963,
   963,  -165,-32768,    18,-32768,-32768,   525,  4363,  4390,  4417,
  4444,  4471,  4498,  4525,  4552,  4579,  4606,  2401,  4633,  4660,
  4687,  4714,  4741,  4768,  2435,  2467,  2498,   523,-32768,   716,
  2412,  1867,   543,  1857,  1529,  5128,  5128,   764,   764,   764,
   764,   706,   706,   107,   107,   107,   107,   548,-32768,   562,
  -104,   556,-32768,-32768,   298,   301,   -34,   380,   142,-32768,
   385,   339,   386,   585,   306,-32768,   145,   407,-32768,   145,
   145,    13,   602,   604,   616,   624,   642,-32768,-32768,   635,
-32768,   853,   655,-32768,-32768,-32768,   663,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2412,-32768,
-32768,-32768,-32768,-32768,-32768,  2412,  2412,  2412,   871,-32768,
-32768,   378,  2412,  2273,  2412,   680,  2377,  1289,  1832,   707,
   708,-32768,    40,   887,   895,-32768,-32768,   685,   900,-32768,
-32768,   697,   125,   909,-32768,-32768,   740,   910,   911,   741,
   742,   743,-32768,-32768,   774,   750,   156,   959,   971,   768,
   775,-32768,-32768,   978,   776,-32768,-32768,-32768,   982,   780,
   985,   986,-32768,-32768,-32768,   988,   786,   995,   548,   996,
-32768,-32768,   797,-32768,-32768,-32768,-32768,-32768,   998,   843,
-32768,   125,-32768,   827,  2412,   828,   829,   830,   205,   218,
-32768,   126,   679,   345,   939,    17,  4795,  4822,  4849,  4876,
   845,  4903,  2412,  5038,-32768,-32768,  5038,   847,  1050,  2412,
  3676,-32768,   149,   220,   849,-32768,  1052,    10,-32768,  1054,
-32768,   858,   861,  1056,-32768,  1060,-32768,  1062,   131,-32768,
-32768,-32768,   125,   901,  1073,  1070,  1081,   136,-32768,-32768,
   139,-32768,   882,   144,-32768,   885,  1088,   890,  1090,-32768,
  1095,  1096,  1098,-32768,   513,  1101,   897,  2412,  2529,  2412,
  2412,  2412,  1102,  2395,-32768,  1129,  1132,  2412,-32768,  3706,
-32768,    70,   145,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1134,  2412,  5038,-32768,  3736,-32768,   149,-32768,  1135,  1137,
  1140,-32768,   469,-32768,-32768,   943,  1146,   510,-32768,   512,
  2412,  1152,-32768,-32768,   993,-32768,   537,-32768,-32768,  1148,
   539,   546,   587,  1151,   125,-32768,-32768,-32768,-32768,  1153,
   590,     3,-32768,  1154,   595,-32768,-32768,  1155,   597,  1158,
-32768,-32768,   113,-32768,   957,-32768,-32768,-32768,   964,   967,
   125,  2560,  2412,  2591,  2622,  2653,-32768,   754,   754,  1172,
   166,  2412,  2412,   754,  2412,  1173,-32768,-32768,-32768,  2412,
  2412,  1174,  1411,-32768,-32768,  2412,  4930,-32768,   519,-32768,
-32768,   270,-32768,  5038,-32768,  1175,-32768,-32768,   972,   611,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  4957,   979,  -132,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
   981,-32768,   984,   987,-32768,-32768,  1178,   993,   993,   993,
   993,  1187,    30,  1184,  5113,   997,   989,   989,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1196,
-32768,-32768,-32768,  1022,  1023,  1026,  1027,-32768,-32768,-32768,
-32768,-32768,    44,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  2412,   983,  2412,  2684,  2412,  2412,  2412,  2412,-32768,  5038,
-32768,-32768,   548,   548,-32768,  5038,  5038,-32768,  5038,-32768,
  1199,  1199,  1199,  5038,  5038,-32768,  2412,  5038,  5038,  1230,
-32768,   294,  1033,   204,-32768,  2412,-32768,  1197,   115,    78,
-32768,-32768,-32768,  1030,  1036,  1030,   993,  1037,  1043,  1069,
  1059,  1059,  1059,  5090,-32768,-32768,-32768,-32768,-32768,     1,
-32768,   993,   993,   993,   993,   993,   993,   993,   993,   993,
   993,   993,   993,   993,   993,   993,   993,  1254,   905,-32768,
  1078,   330,  1186,   508,   302,-32768,  1276,-32768,-32768,-32768,
-32768,  1398,    21,   138,  1057,  1067,  1075,  1084,  1085,  1086,
     6,   114,  1082,  1087,  1093,  1271,  1094,-32768,-32768,  1292,
-32768,-32768,    80,  2715,   125,  2746,  2412,  2777,  2808,  2839,
   542,-32768,-32768,-32768,   612,-32768,  1293,-32768,-32768,  1322,
    18,  3766,   145,   145,   145,   145,   191,   201,   125,   125,
  1119,  1324,  1325,   207,-32768,-32768,   134,  1327,-32768,-32768,
  1124,  1329,  1330,-32768,-32768,  1131,-32768,  1144,  2300,  1334,
-32768,  1159,-32768,  1149,-32768,   993,  5153,  5171,  1630,  1630,
  1630,  1150,  1150,  1150,  1150,   479,   479,  1059,  1059,  1059,
  1059,  1059,-32768,-32768,  1145,  5113,   353,  2338,-32768,  1367,
   152,   152,  1368,  1370,-32768,-32768,  1371,  1373,  1374,  1176,
  1177,   145,   145,-32768,-32768,  1378,    42,    43,-32768,-32768,
  1383,  1388,  1389,-32768,-32768,  1392,  1400,   434,  1401,  1403,
  1406,  1407,   145,-32768,-32768,-32768,  1024,  1180,   535,   223,
  1408,  1412,    62,   548,   754,   548,    66,  1414,-32768,-32768,
  1396,  1416,   125,  1397,  1417,  1445,   125,  1454,  1455,  1456,
  2412,-32768,  2412,-32768,-32768,-32768,   145,  1404,  1457,  1208,
  1259,-32768,  1257,  1463,-32768,-32768,  2412,  1265,  2412,  3796,
  2412,  2412,  2412,-32768,-32768,-32768,   885,-32768,-32768,  1462,
  1469,  1470,  1472,   125,  1475,   125,  1477,  1478,  1480,  1486,
  1485,  1487,   125,  1488,  1490,  1492,  1078,-32768,  1493,  1494,
-32768,  1282,-32768,   993,  1291,  1299,-32768,-32768,   427,-32768,
-32768,   993,  1302,  1309,   619,  1508,  1427,  1510,  1511,   885,
  1512,   151,  1312,  1519,   125,  1518,  1520,  1521,  1523,-32768,
-32768,  1524,-32768,-32768,  1525,  1526,  1532,  1533,  1535,  1536,
  1537,  1541,  1542,  1545,   885,  1546,  1549,  1550,-32768,  1553,
  1555,-32768,-32768,-32768,-32768,-32768,-32768,   145,-32768,-32768,
  1358,-32768,   145,-32768,-32768,  1359,  1559,  1563,-32768,-32768,
-32768,  1566,  1570,   885,-32768,  1572,  1599,  1600,  1604,-32768,
-32768,  1605,  1607,-32768,  1321,  1420,-32768,  1405,  1415,  1422,
  1418,  1419,  1421,  2870,   636,  2901,  1423,   325,   694,  1424,
-32768,  1431,    69,    69,-32768,  1633,  3826,  1433,  3856,-32768,
  3886,  3916,  3946,-32768,-32768,-32768,-32768,-32768,  1432,-32768,
  1434,-32768,-32768,-32768,  1441,-32768,-32768,  1446,-32768,-32768,
-32768,  1637,   626,-32768,-32768,   145,  5065,  2412,-32768,  1453,
-32768,  5113,  1654,   145,-32768,-32768,  1656,-32768,-32768,  1655,
-32768,-32768,  1657,  1574,  1660,  1441,-32768,   627,-32768,-32768,
-32768,-32768,   630,-32768,   632,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1467,
  1661,  1667,  1669,-32768,  1670,-32768,  1677,  1682,   377,-32768,
-32768,-32768,   639,-32768,-32768,-32768,-32768,   649,-32768,-32768,
  1683,  1684,   125,  1688,  1491,  2412,   125,   145,  2412,  1495,
   125,  2412,  2412,   125,-32768,-32768,  2412,  1497,   125,  2412,
  2412,  2412,  2412,-32768,-32768,  2412,  1500,  2412,   125,  2412,
-32768,-32768,  2412,  1689,  1502,  1506,  2412,  2412,  1528,  2412,
-32768,-32768,   125,  1690,-32768,-32768,-32768,-32768,    35,-32768,
  1534,   754,  1538,  1539,  1540,  1547,   125,   125,  1693,   125,
-32768,-32768,-32768,  1515,-32768,  2932,-32768,   993,  1516,  1522,
  1692,-32768,-32768,  1698,-32768,  1723,-32768,   125,-32768,  1728,
-32768,  1729,  1531,  1731,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1030,  1030,  1030,   145,-32768,-32768,-32768,  1736,
-32768,  1737,-32768,-32768,  1557,  1552,-32768,  2963,  1560,  1564,
  2994,-32768,  1738,   785,   859,  1739,  3025,-32768,  1743,   889,
  1724,  1745,  1772,  1793,-32768,  1814,  1761,  1903,  1930,  1764,
-32768,-32768,  1951,  1978,-32768,  1999,  1573,-32768,   371,   383,
  1571,  1579,-32768,  2412,-32768,  2412,  2412,  2412,  2412,  1576,
  1588,  1584,  1590,   617,-32768,-32768,  5113,  1587,  1591,-32768,
  1791,  1593,-32768,-32768,-32768,  1799,  1800,-32768,-32768,-32768,
  1801,  1803,  1805,  1806,-32768,-32768,  1808,   754,   196,   754,
  1815,  1824,   125,   264,-32768,-32768,-32768,-32768,   125,   367,
-32768,-32768,-32768,-32768,-32768,-32768,  1241,-32768,-32768,-32768,
-32768,-32768,  1498,  1530,-32768,-32768,   658,-32768,  1823,  1825,
  1567,-32768,  1826,-32768,-32768,  3976,  1623,  3056,  3087,  3118,
  3149,  1831,  1833,  1834,  1835,  1868,  2412,  2412,  2412,  2412,
  2412,-32768,-32768,  1628,-32768,-32768,  1784,  1870,  1673,-32768,
  1664,  1668,-32768,-32768,-32768,-32768,-32768,  1710,  1622,  1705,
-32768,  1717,  1712,-32768,  1713,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   548,   754,-32768,-32768,   752,  1068,-32768,
   754,  2412,  2412,  2412,  2412,-32768,-32768,-32768,-32768,  1929,
  2020,  2041,  2068,  2095,  2122,-32768,  1938,-32768,-32768,-32768,
  1030,  1937,  1740,  2412,  1940,   125,  2412,  1399,-32768,-32768,
  1943,  1945,  1946,-32768,-32768,  1741,-32768,-32768,  1753,  3180,
  3211,  3242,  3273,-32768,-32768,-32768,-32768,-32768,-32768,  1759,
  1762,  1765,  1767,-32768,-32768,  4984,-32768,  1779,  3304,  1986,
  2412,   125,  1987,   145,  1988,-32768,-32768,  1998,  2005,  2006,
   145,-32768,-32768,  2412,  2412,  2412,  2412,-32768,  2007,  2009,
  2010,  1562,  2011,  1810,  2412,  2013,  2143,  2015,  2016,  2017,
  2018,-32768,-32768,-32768,  2021,-32768,  4006,  4036,  4066,  4096,
-32768,-32768,-32768,-32768,-32768,-32768,  5011,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1827,  1820,  1828,  1821,  1840,  1990,
  1634,  1846,  2028,  2412,  1847,  2412,  2412,   145,-32768,-32768,
-32768,  3335,  2412,  3366,  3397,  2029,  1666,  2412,  4126,  2412,
  2412,-32768,-32768,  3428,-32768,  3459,  3490,  1936,  2412,  2412,
  2412,  2032,  4156,  4186,  4216,   885,  1849,  1850,  1848,  2055,
-32768,  1854,  2412,  1855,  2412,  3521,-32768,  3552,  2412,  2412,
  3583,  4246,  2412,-32768,  4276,  1858,  1861,  2412,  3614,  2412,
  3645,  2412,  4306,-32768,  2067,  2072,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -271,-32768,-32768,  -247,    49,-32768,-32768,  1231,  -383,-32768,
  -424,-32768,  -231,  -403,  -425,-32768,-32768,-32768,-32768,  -345,
-32768,  -775,-32768,  -420,-32768,-32768,-32768,-32768,-32768,-32768,
  1458,-32768,  1126,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1595,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1339,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -872,  -572,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1216,-32768,-32768,-32768,
  1025,   883,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   715,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1642,-32768,  1578,-32768,  1983,-32768,  1644,  1904,
-32768,  -250,-32768,   324,  1243,-32768,  -535,  -334,  1882,  1362,
-32768,-32768,   -24,  -483,   -83
};


#define	YYLAST		5372


static const short yytable[] = {    82,
   147,   336,   466,   661,   487,   814,  1016,   693,   668,   363,
   520,   619,   370,   371,   373,   500,   485,   192,   380,   272,
   272,   273,   273,    39,   510,   891,   447,   514,    -2,   322,
   518,   952,   706,   323,   707,   956,   399,   560,   -43,  1291,
  1329,   324,     4,   270,   405,  1334,   980,   983,   743,     6,
     4,  1340,     4,   124,   125,   126,   129,     6,  1347,     6,
   165,   464,     4,   193,  1353,  1354,  1024,     6,    24,     6,
  1030,  -580,   272,  1195,   273,   308,   614,   504,   198,   199,
   200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
   210,   211,   212,   213,   214,   215,   216,   217,   634,   635,
   636,   637,   166,    29,   309,   426,   223,   224,   225,   226,
   227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
   237,   806,     4,   808,   619,   619,   619,   619,   457,     6,
  1292,   479,     4,    30,   681,   412,   913,   499,   192,     6,
    31,   801,   509,   802,   803,   513,   192,   708,   412,   192,
   517,    32,   462,   478,   306,   914,   478,  1102,    33,   630,
   744,    34,   745,   746,   747,   797,   748,   749,   750,   751,
    25,    26,   481,   752,    27,   325,   753,   798,   945,   754,
    35,  1090,   755,   756,   193,   652,   757,   701,   702,   703,
   704,   758,   193,   759,   709,   193,   302,   304,   148,   193,
   743,   412,   193,   413,   149,   566,   157,   158,   779,   901,
   815,   412,   638,   619,   902,   561,   413,   412,   486,   194,
   760,   372,    36,  1130,   892,   274,   274,    40,   619,   619,
   619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
   619,   619,   619,   619,  1293,   619,   153,   154,   406,   780,
   981,   984,    43,   761,   161,   162,   170,   171,  1502,    44,
    45,    46,    24,   559,   387,   167,   174,   175,   743,   413,
  1025,   388,   389,   390,  1031,   442,   809,   975,   392,   413,
   394,    37,   397,    82,   401,   413,   249,   804,  1017,   915,
    38,   817,   818,   819,   820,   821,   822,   823,   824,   825,
   826,   827,   828,   829,   830,   831,   832,   145,   836,  1541,
   682,  1018,   744,   146,   745,   746,   747,   903,   748,   749,
   750,   751,   904,   771,   799,   752,   178,   179,   753,   458,
   684,   754,   619,  1557,   755,   756,   183,   184,   757,   486,
   194,   893,   775,   758,   486,   759,   335,   486,   194,  1028,
   449,   194,   486,    84,   663,   194,    95,   664,   460,   486,
   425,   313,   241,   314,   318,    99,   149,   861,   473,     6,
   100,   743,   760,   315,   101,   475,   319,   862,   102,   863,
   744,   356,   745,   746,   747,   222,   748,   749,   750,   751,
   159,   160,  1176,   752,   934,   959,   753,   928,   894,   754,
   103,   242,   755,   756,   936,  1399,   757,   840,   151,   453,
   943,   758,   841,   759,   344,   454,   842,   843,   844,   918,
   357,   182,   456,   532,   480,   534,   535,   536,   454,   327,
   149,  1019,  1020,   557,  1091,   104,  1243,  1244,   991,  1177,
   760,   935,   937,   938,   939,   328,   345,   564,   944,   358,
   338,   359,    41,   346,    42,   329,   330,   665,  1178,  1179,
   339,   349,  1319,   331,  1320,   332,   578,    97,   130,    98,
   619,  1245,   360,  1404,   -46,   340,   350,   105,   619,   341,
   149,   106,  1246,   744,   107,   745,   746,   747,   108,   748,
   749,   750,   751,   187,   351,   188,   752,   189,   777,   753,
  1180,  1064,   754,   965,   454,   755,   756,   316,   654,   757,
   320,   864,   220,   221,   758,   361,   759,   666,   667,   992,
   669,   272,   109,   273,   110,   674,   675,   352,   678,   993,
  1384,   679,   111,  1087,  1181,   930,   931,   932,   933,   845,
   112,  1092,   218,   760,  1100,  1456,  1456,  1036,   347,   946,
   305,  1040,    25,    26,   461,   149,    27,   961,   131,   132,
   133,   134,   135,   962,   136,   137,   138,   139,  1103,  1126,
   140,   141,   142,   143,   144,  1360,  1406,   113,   145,   772,
   773,  1361,   114,   856,   146,   857,  1247,  1363,  1069,   333,
  1071,   115,   858,  1361,   342,   353,   116,  1078,  1142,   364,
   365,   366,   367,   117,   977,   978,   118,   711,   712,   713,
   714,   715,   716,   717,   718,   719,   720,   368,   119,   721,
   722,   723,   724,   725,   726,   998,   764,   727,   766,  1107,
   768,   769,   770,   129,  1002,  1003,  1004,  1005,  1006,  1007,
  1013,   120,   131,   132,   133,   134,   135,   121,   136,   137,
   138,   139,   129,   122,   140,   141,   142,   143,   144,  1050,
  1470,   782,   145,   123,  1472,   238,  1295,   239,   146,   240,
  1321,  1322,  1323,   723,   724,   725,   726,   571,   572,   727,
   250,    48,    49,    50,   256,  1376,  1377,  1378,  1379,  1380,
  1381,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,   257,   859,   574,   575,
   576,   577,   300,   131,   132,   133,   134,   135,   278,   136,
   137,   138,   139,   299,   619,   140,   141,   142,   143,   144,
  1535,   307,   920,   145,  1014,   620,   621,   623,   624,   146,
  1160,   924,   221,  1161,   625,   626,    48,    49,    50,   312,
  1133,  1183,  1162,  1163,  1164,  1135,    52,    53,    54,    55,
    56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
    66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
    76,  1336,  1398,   355,  1400,   627,   628,  1307,   632,   633,
  1027,  1184,  1029,   641,   642,   645,   646,  1255,  1185,  1186,
   374,  1259,   375,   129,  1451,  1263,  1452,  1453,  1266,   571,
   687,   925,   221,  1269,   376,  1416,  1382,  1187,  1095,   221,
  1188,  1189,   377,  1277,  1212,  1213,  1227,  1228,  1214,  1229,
   149,  1231,   149,  1209,   381,  1165,  1220,  1287,  1249,   149,
   378,  1002,  1003,  1004,  1005,  1006,  1007,  1454,  1251,   149,
   382,  1300,  1301,   383,  1303,  1337,  1410,  1411,  1473,  1190,
   672,   673,    78,   385,  1226,   391,  1044,    79,  1046,  1450,
    80,  1230,  1313,  1232,   395,  1459,   402,   403,   459,   967,
   968,   407,  1057,   409,  1059,  1342,  1061,  1062,  1063,   408,
   142,   143,   144,  1191,   410,   411,   145,    48,    49,   580,
  1260,  1250,   146,   416,   418,   419,  1252,    52,    53,    54,
    55,    56,   581,   582,   583,   584,   585,   586,   587,   588,
   589,   590,   591,   592,   593,   594,   595,   596,   597,   598,
   599,   600,   601,   602,   603,   604,   605,    78,   417,   420,
   421,   422,    79,   423,   424,    80,   140,   141,   142,   143,
   144,  1455,   658,   427,   145,   131,   132,   133,   134,   135,
   146,   136,   137,   138,   139,   428,   429,   140,   141,   142,
   143,   144,   431,   430,   432,   145,   434,  1403,   435,   436,
   437,   146,   439,  1405,   440,    48,    49,   580,  1324,   441,
   443,   444,   445,   446,   606,    52,    53,    54,    55,    56,
   581,   582,   583,   584,   585,   586,   587,   588,   589,   590,
   591,   592,   593,   594,   595,   596,   597,   598,   599,   600,
   601,   602,   603,   604,   605,   448,   450,   451,   452,   131,
   132,   133,   134,   135,   463,   136,   137,   138,   139,   471,
   -43,   140,   141,   142,   143,   144,   474,   482,   484,   145,
   489,   491,   493,  1216,   492,   146,   496,  1499,   498,   131,
   132,   133,   134,   135,   507,   136,   137,   138,   139,   506,
   505,   140,   141,   142,   143,   144,  1000,   508,  1001,   145,
   516,   607,   606,   270,   521,   146,   524,   608,   609,   522,
  1478,   526,   527,   610,   528,   530,   611,   531,   537,   834,
   835,   612,   613,   614,   259,   260,   261,   262,   263,   264,
   265,   266,   267,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
  1451,  1258,  1452,  1453,  1261,   555,  1508,  1264,  1265,   556,
   563,   567,  1267,   568,   569,  1270,  1271,  1272,  1273,   400,
  1580,  1274,   573,  1276,   622,  1278,   579,   629,  1279,   631,
   640,   644,  1283,  1284,   647,  1286,   649,  1002,  1003,  1004,
  1005,  1006,  1007,  1454,   650,   651,   662,   670,   676,   607,
   686,   685,   700,   692,   694,   608,   609,   696,   710,   705,
   697,   610,   729,   765,   611,    48,    49,    50,    51,   612,
   613,   614,   736,   728,   774,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
   738,   739,   776,  1009,   740,   741,  1510,   778,   614,   807,
   810,    77,  1000,  1515,  1001,   743,   811,   783,   784,   785,
   786,   787,   788,   789,   790,   791,   833,   812,   792,   727,
   895,   847,   793,   848,   849,   850,   851,   852,   853,  1366,
   896,  1368,  1369,  1370,  1371,   794,   908,  1458,   897,  1002,
  1003,  1004,  1005,  1006,  1007,  1008,   838,   898,   899,   900,
   905,    48,    49,   398,    51,   906,   907,   909,   912,   926,
  1556,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,   927,   940,   941,   942,
  1449,   947,   948,   949,   950,   951,   955,    77,   866,   193,
   867,   868,   721,   722,   723,   724,   725,   726,   953,   960,
   727,   869,  1431,  1432,  1433,  1434,  1435,   744,   958,   745,
   746,   747,   957,   748,   749,   750,   751,   870,   871,   872,
   752,   966,   779,   753,   970,   971,   754,   972,   973,   755,
   756,   873,   979,   757,   974,   975,    78,   986,   758,  1012,
   759,    79,   987,   988,    80,   854,   989,  1460,  1461,  1462,
  1463,    81,  1034,  1037,   990,   994,   795,   995,   996,   997,
  1051,  1053,  1022,    48,    49,    50,  1023,   760,  1033,  1476,
  1035,  1038,  1479,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    76,   156,  1039,
  1407,   164,   169,   173,   177,   181,  1507,   186,  1041,  1042,
  1043,  1052,  1054,   881,  1480,  1055,  1481,  1056,  1065,  1517,
  1518,  1519,  1520,   882,  1058,  1066,  1067,  1482,  1068,   874,
  1527,  1070,    78,  1072,  1073,   875,  1074,    79,  1075,  1483,
    80,  1076,  1086,  1077,  1079,   194,  1080,    81,  1081,  1084,
  1085,  1088,   743,  1089,  1484,  1093,   883,   884,   885,   886,
   887,   888,  1094,   244,  1096,  1097,  1098,  1099,  1101,  1552,
  1104,  1554,  1555,  1106,  1109,  1151,  1110,  1111,  1559,  1112,
  1114,  1116,  1117,  1564,   743,  1566,  1567,  1168,  1118,  1119,
  1169,  1120,  1121,  1122,  1573,  1574,  1575,  1123,  1124,  1170,
  1171,  1125,  1127,  1172,  1173,  1128,  1129,  1131,  1586,  1132,
  1588,  1134,  1136,  1137,  1591,  1592,   743,  1138,  1595,    48,
    49,    50,  1140,  1599,  1485,  1601,  1141,  1603,  1144,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,    78,  1145,  1146,   889,  1486,    79,
  1147,  1149,    80,  1150,   744,  1153,   745,   746,   747,   677,
   748,   749,   750,   751,  1152,  1154,  1155,   752,  1156,  1157,
   753,  1158,  1174,   754,  1193,  1194,   755,   756,   743,  1200,
   757,  1202,  1207,  1211,  1208,   758,   744,   759,   745,   746,
   747,   149,   748,   749,   750,   751,  1210,  1217,  1219,   752,
  1221,  1222,   753,  1223,  1224,   754,  1225,  1235,   755,   756,
   743,  1234,   757,  1236,   760,  1237,  1239,   758,   744,   759,
   745,   746,   747,  1241,   748,   749,   750,   751,  1242,  1253,
  1254,   752,  1256,  1280,   753,  1302,  1288,   754,  1310,  1257,
   755,   756,  1311,  1262,   757,  1268,   760,  1408,  1275,   758,
  1281,   759,   134,   135,  1282,   136,   137,   138,   139,  1305,
  1308,   140,   141,   142,   143,   144,  1309,  1312,  1414,   145,
  1343,  1415,  1314,  1315,  1316,   146,  1285,  1318,   760,  1409,
  1325,  1326,  1294,  1443,  1335,  1338,  1296,  1297,  1298,  1341,
   744,  1344,   745,   746,   747,  1299,   748,   749,   750,   751,
    78,  1327,  1328,   752,  1331,    79,   753,  1349,    80,   754,
  1352,  1524,   755,   756,  1332,   658,   757,  1359,  1345,  1364,
  1372,   758,   744,   759,   745,   746,   747,  1365,   748,   749,
   750,   751,  1373,  1374,  1375,   752,  1385,  1387,   753,  1346,
  1386,   754,  1388,  1389,   755,   756,  1390,  1393,   757,  1394,
   760,  1395,  1396,   758,  1397,   759,   717,   718,   719,   720,
  1348,  1401,   721,   722,   723,   724,   725,   726,  1402,  1412,
   727,  1413,  1417,  1421,    48,    49,    50,  1426,  1436,  1427,
  1428,  1429,   760,  1549,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,    48,
    49,    50,  1430,  1437,  1440,  1563,  1438,  1439,  1441,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,   131,   132,   133,   134,   135,  1350,
   136,   137,   138,   139,  1442,  1444,   140,   141,   142,   143,
   144,  1445,  1446,  1447,   145,   131,   132,   133,   134,   135,
   146,   136,   137,   138,   139,  1464,  1351,   140,   141,   142,
   143,   144,  1471,  1474,  1492,   145,  1477,  1488,  1475,  1489,
  1490,   146,   131,   132,   133,   134,   135,  1355,   136,   137,
   138,   139,  1493,  1498,   140,   141,   142,   143,   144,  1500,
   486,  1501,   145,   131,   132,   133,   134,   135,   146,   136,
   137,   138,   139,  1504,  1356,   140,   141,   142,   143,   144,
  1506,  1509,  1511,   145,   131,   132,   133,   134,   135,   146,
   136,   137,   138,   139,  1512,  1358,   140,   141,   142,   143,
   144,  1513,  1514,  1521,   145,  1522,  1523,  1525,  1526,  1528,
   146,  1530,  1531,  1532,  1533,    78,  1465,  1534,  1544,  1546,
    79,  1543,  1548,    80,  1551,  1562,  1576,  1545,   400,   133,
   134,   135,  1572,   136,   137,   138,   139,  1466,  1547,   140,
   141,   142,   143,   144,  1550,  1553,  1583,   145,  1581,  1582,
    78,  1584,  1585,   146,  1587,    79,  1606,  1597,    80,  1598,
   303,  1607,  1082,   969,  1467,   731,   570,   878,  1198,  1419,
  1290,   525,   191,   131,   132,   133,   134,   135,   529,   136,
   137,   138,   139,   976,   269,   140,   141,   142,   143,   144,
   648,  1468,   301,   145,     0,     0,     0,     0,     0,   146,
   131,   132,   133,   134,   135,     0,   136,   137,   138,   139,
     0,     0,   140,   141,   142,   143,   144,     0,  1469,     0,
   145,   131,   132,   133,   134,   135,   146,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,  1529,
     0,   145,     0,     0,     0,     0,     0,   146,   131,   132,
   133,   134,   135,     0,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,   131,
   132,   133,   134,   135,   146,   136,   137,   138,   139,     0,
     0,   140,   141,   142,   143,   144,     0,     0,     0,   145,
   131,   132,   133,   134,   135,   146,   136,   137,   138,   139,
     0,     0,   140,   141,   142,   143,   144,     0,     0,     0,
   145,   131,   132,   133,   134,   135,   146,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,     0,
     0,   145,     0,     0,     0,     0,     0,   146,   131,   132,
   133,   134,   135,     0,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,     0,
     0,     0,     0,     0,   146,   131,   132,   133,   134,   135,
   393,   136,   137,   138,   139,     0,     0,   140,   141,   142,
   143,   144,     0,     0,     0,   145,     0,     0,     0,     0,
     0,   146,   131,   132,   133,   134,   135,     0,   136,   137,
   138,   139,     0,     0,   140,   141,   142,   143,   144,     0,
     0,     0,   145,   131,   132,   133,   134,   135,   146,   136,
   137,   138,   139,     0,     0,   140,   141,   142,   143,   144,
    48,    49,    50,   145,     0,     0,     0,     0,     0,   146,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    76,     0,     0,     0,     0,    48,
    49,    50,   396,     0,     0,   963,     0,     0,   964,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,    76,    48,    49,    50,     0,     0,     0,
     0,     0,     0,     0,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,    75,    76,     0,
     0,   538,     0,   131,   132,   133,   134,   135,     0,   136,
   137,   138,   139,     0,     0,   140,   141,   142,   143,   144,
     4,     0,     0,   145,     0,     5,     0,     6,     0,   146,
   711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     0,     0,   721,   722,   723,   724,   725,   726,     0,     0,
   727,     0,     0,     0,     0,   539,     0,     0,     7,     0,
   954,     0,     0,     0,     0,     8,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
    10,    78,     0,     0,     0,     0,    79,     0,     0,    80,
    11,     0,     0,     0,    12,   540,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    13,   541,   542,   543,   544,
   545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
    78,     0,    14,     0,     0,    79,     0,     0,    80,     0,
     0,   131,   132,   133,   134,   135,     0,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,     0,
     0,   145,     0,     0,     0,    78,    15,   146,    16,     0,
    79,   289,     0,    80,     0,   131,   132,   133,   134,   135,
     0,   136,   137,   138,   139,     0,     0,   140,   141,   142,
   143,   144,     0,     0,     0,   145,     0,     0,     0,     0,
     0,   146,     0,    17,    18,   296,     0,   131,   132,   133,
   134,   135,     0,   136,   137,   138,   139,     0,     0,   140,
   141,   142,   143,   144,     0,     0,     0,   145,     0,     0,
     0,     0,     0,   146,     0,     0,     0,   297,   131,   132,
   133,   134,   135,     0,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,     0,
     0,     0,     0,     0,   146,     0,     0,     0,   298,   131,
   132,   133,   134,   135,     0,   136,   137,   138,   139,     0,
     0,   140,   141,   142,   143,   144,     0,     0,     0,   145,
     0,     0,     0,     0,     0,   146,     0,     0,     0,   533,
   131,   132,   133,   134,   135,     0,   136,   137,   138,   139,
     0,     0,   140,   141,   142,   143,   144,     0,     0,     0,
   145,     0,     0,     0,     0,     0,   146,     0,     0,     0,
   653,   131,   132,   133,   134,   135,     0,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,     0,
     0,   145,     0,     0,     0,     0,     0,   146,     0,     0,
     0,   655,   131,   132,   133,   134,   135,     0,   136,   137,
   138,   139,     0,     0,   140,   141,   142,   143,   144,     0,
     0,     0,   145,     0,     0,     0,     0,     0,   146,     0,
     0,     0,   656,   131,   132,   133,   134,   135,     0,   136,
   137,   138,   139,     0,     0,   140,   141,   142,   143,   144,
     0,     0,     0,   145,     0,     0,     0,     0,     0,   146,
     0,     0,     0,   657,   131,   132,   133,   134,   135,     0,
   136,   137,   138,   139,     0,     0,   140,   141,   142,   143,
   144,     0,     0,     0,   145,     0,     0,     0,     0,     0,
   146,     0,     0,     0,   767,   131,   132,   133,   134,   135,
     0,   136,   137,   138,   139,     0,     0,   140,   141,   142,
   143,   144,     0,     0,     0,   145,     0,     0,     0,     0,
     0,   146,     0,     0,     0,   917,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,     0,   919,   131,   132,   133,
   134,   135,     0,   136,   137,   138,   139,     0,     0,   140,
   141,   142,   143,   144,     0,     0,     0,   145,     0,     0,
     0,     0,     0,   146,     0,     0,     0,   921,   131,   132,
   133,   134,   135,     0,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,     0,
     0,     0,     0,     0,   146,     0,     0,     0,   922,   131,
   132,   133,   134,   135,     0,   136,   137,   138,   139,     0,
     0,   140,   141,   142,   143,   144,     0,     0,     0,   145,
     0,     0,     0,     0,     0,   146,     0,     0,     0,   923,
   131,   132,   133,   134,   135,     0,   136,   137,   138,   139,
     0,     0,   140,   141,   142,   143,   144,     0,     0,     0,
   145,     0,     0,     0,     0,     0,   146,     0,     0,     0,
  1159,   131,   132,   133,   134,   135,     0,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,     0,
     0,   145,     0,     0,     0,     0,     0,   146,     0,     0,
     0,  1167,   131,   132,   133,   134,   135,     0,   136,   137,
   138,   139,     0,     0,   140,   141,   142,   143,   144,     0,
     0,     0,   145,     0,     0,     0,     0,     0,   146,     0,
     0,     0,  1306,   131,   132,   133,   134,   135,     0,   136,
   137,   138,   139,     0,     0,   140,   141,   142,   143,   144,
     0,     0,     0,   145,     0,     0,     0,     0,     0,   146,
     0,     0,     0,  1330,   131,   132,   133,   134,   135,     0,
   136,   137,   138,   139,     0,     0,   140,   141,   142,   143,
   144,     0,     0,     0,   145,     0,     0,     0,     0,     0,
   146,     0,     0,     0,  1333,   131,   132,   133,   134,   135,
     0,   136,   137,   138,   139,     0,     0,   140,   141,   142,
   143,   144,     0,     0,     0,   145,     0,     0,     0,     0,
     0,   146,     0,     0,     0,  1339,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,     0,  1422,   131,   132,   133,
   134,   135,     0,   136,   137,   138,   139,     0,     0,   140,
   141,   142,   143,   144,     0,     0,     0,   145,     0,     0,
     0,     0,     0,   146,     0,     0,     0,  1423,   131,   132,
   133,   134,   135,     0,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,     0,
     0,     0,     0,     0,   146,     0,     0,     0,  1424,   131,
   132,   133,   134,   135,     0,   136,   137,   138,   139,     0,
     0,   140,   141,   142,   143,   144,     0,     0,     0,   145,
     0,     0,     0,     0,     0,   146,     0,     0,     0,  1425,
   131,   132,   133,   134,   135,     0,   136,   137,   138,   139,
     0,     0,   140,   141,   142,   143,   144,     0,     0,     0,
   145,     0,     0,     0,     0,     0,   146,     0,     0,     0,
  1494,   131,   132,   133,   134,   135,     0,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,     0,
     0,   145,     0,     0,     0,     0,     0,   146,     0,     0,
     0,  1495,   131,   132,   133,   134,   135,     0,   136,   137,
   138,   139,     0,     0,   140,   141,   142,   143,   144,     0,
     0,     0,   145,     0,     0,     0,     0,     0,   146,     0,
     0,     0,  1496,   131,   132,   133,   134,   135,     0,   136,
   137,   138,   139,     0,     0,   140,   141,   142,   143,   144,
     0,     0,     0,   145,     0,     0,     0,     0,     0,   146,
     0,     0,     0,  1497,   131,   132,   133,   134,   135,     0,
   136,   137,   138,   139,     0,     0,   140,   141,   142,   143,
   144,     0,     0,     0,   145,     0,     0,     0,     0,     0,
   146,     0,     0,     0,  1505,   131,   132,   133,   134,   135,
     0,   136,   137,   138,   139,     0,     0,   140,   141,   142,
   143,   144,     0,     0,     0,   145,     0,     0,     0,     0,
     0,   146,     0,     0,     0,  1558,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,     0,  1560,   131,   132,   133,
   134,   135,     0,   136,   137,   138,   139,     0,     0,   140,
   141,   142,   143,   144,     0,     0,     0,   145,     0,     0,
     0,     0,     0,   146,     0,     0,     0,  1561,   131,   132,
   133,   134,   135,     0,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,     0,
     0,     0,     0,     0,   146,     0,     0,     0,  1569,   131,
   132,   133,   134,   135,     0,   136,   137,   138,   139,     0,
     0,   140,   141,   142,   143,   144,     0,     0,     0,   145,
     0,     0,     0,     0,     0,   146,     0,     0,     0,  1570,
   131,   132,   133,   134,   135,     0,   136,   137,   138,   139,
     0,     0,   140,   141,   142,   143,   144,     0,     0,     0,
   145,     0,     0,     0,     0,     0,   146,     0,     0,     0,
  1571,   131,   132,   133,   134,   135,     0,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,     0,
     0,   145,     0,     0,     0,     0,     0,   146,     0,     0,
     0,  1589,   131,   132,   133,   134,   135,     0,   136,   137,
   138,   139,     0,     0,   140,   141,   142,   143,   144,     0,
     0,     0,   145,     0,     0,     0,     0,     0,   146,     0,
     0,     0,  1590,   131,   132,   133,   134,   135,     0,   136,
   137,   138,   139,     0,     0,   140,   141,   142,   143,   144,
     0,     0,     0,   145,     0,     0,     0,     0,     0,   146,
     0,     0,     0,  1593,   131,   132,   133,   134,   135,     0,
   136,   137,   138,   139,     0,     0,   140,   141,   142,   143,
   144,     0,     0,     0,   145,     0,     0,     0,     0,     0,
   146,     0,     0,     0,  1600,   131,   132,   133,   134,   135,
     0,   136,   137,   138,   139,     0,     0,   140,   141,   142,
   143,   144,     0,     0,     0,   145,     0,     0,     0,     0,
     0,   146,     0,     0,     0,  1602,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,   476,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,   558,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,   565,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,   929,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1060,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1201,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1203,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1204,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1205,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1206,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1420,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1536,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1537,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1538,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1539,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1565,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1577,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1578,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1579,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1594,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1596,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
     0,     0,   146,     0,     0,  1604,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,   219,     0,
     0,     0,   146,   131,   132,   133,   134,   135,     0,   136,
   137,   138,   139,     0,     0,   140,   141,   142,   143,   144,
     0,     0,     0,   145,     0,     0,     0,   279,     0,   146,
   131,   132,   133,   134,   135,     0,   136,   137,   138,   139,
     0,     0,   140,   141,   142,   143,   144,     0,     0,     0,
   145,     0,     0,     0,   280,     0,   146,   131,   132,   133,
   134,   135,     0,   136,   137,   138,   139,     0,     0,   140,
   141,   142,   143,   144,     0,     0,     0,   145,     0,     0,
     0,   281,     0,   146,   131,   132,   133,   134,   135,     0,
   136,   137,   138,   139,     0,     0,   140,   141,   142,   143,
   144,     0,     0,     0,   145,     0,     0,     0,   282,     0,
   146,   131,   132,   133,   134,   135,     0,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,     0,
     0,   145,     0,     0,     0,   283,     0,   146,   131,   132,
   133,   134,   135,     0,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,     0,
     0,     0,   284,     0,   146,   131,   132,   133,   134,   135,
     0,   136,   137,   138,   139,     0,     0,   140,   141,   142,
   143,   144,     0,     0,     0,   145,     0,     0,     0,   285,
     0,   146,   131,   132,   133,   134,   135,     0,   136,   137,
   138,   139,     0,     0,   140,   141,   142,   143,   144,     0,
     0,     0,   145,     0,     0,     0,   286,     0,   146,   131,
   132,   133,   134,   135,     0,   136,   137,   138,   139,     0,
     0,   140,   141,   142,   143,   144,     0,     0,     0,   145,
     0,     0,     0,   287,     0,   146,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
   288,     0,   146,   131,   132,   133,   134,   135,     0,   136,
   137,   138,   139,     0,     0,   140,   141,   142,   143,   144,
     0,     0,     0,   145,     0,     0,     0,   290,     0,   146,
   131,   132,   133,   134,   135,     0,   136,   137,   138,   139,
     0,     0,   140,   141,   142,   143,   144,     0,     0,     0,
   145,     0,     0,     0,   291,     0,   146,   131,   132,   133,
   134,   135,     0,   136,   137,   138,   139,     0,     0,   140,
   141,   142,   143,   144,     0,     0,     0,   145,     0,     0,
     0,   292,     0,   146,   131,   132,   133,   134,   135,     0,
   136,   137,   138,   139,     0,     0,   140,   141,   142,   143,
   144,     0,     0,     0,   145,     0,     0,     0,   293,     0,
   146,   131,   132,   133,   134,   135,     0,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,     0,
     0,   145,     0,     0,     0,   294,     0,   146,   131,   132,
   133,   134,   135,     0,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,     0,
     0,     0,   295,     0,   146,   131,   132,   133,   134,   135,
     0,   136,   137,   138,   139,     0,     0,   140,   141,   142,
   143,   144,     0,     0,     0,   145,     0,     0,     0,   467,
     0,   146,   131,   132,   133,   134,   135,     0,   136,   137,
   138,   139,     0,     0,   140,   141,   142,   143,   144,     0,
     0,     0,   145,     0,     0,     0,   468,     0,   146,   131,
   132,   133,   134,   135,     0,   136,   137,   138,   139,     0,
     0,   140,   141,   142,   143,   144,     0,     0,     0,   145,
     0,     0,     0,   469,     0,   146,   131,   132,   133,   134,
   135,     0,   136,   137,   138,   139,     0,     0,   140,   141,
   142,   143,   144,     0,     0,     0,   145,     0,     0,     0,
   470,     0,   146,   131,   132,   133,   134,   135,     0,   136,
   137,   138,   139,     0,     0,   140,   141,   142,   143,   144,
     0,     0,     0,   145,     0,     0,     0,   472,     0,   146,
   131,   132,   133,   134,   135,     0,   136,   137,   138,   139,
     0,     0,   140,   141,   142,   143,   144,     0,     0,     0,
   145,     0,     0,     0,   680,     0,   146,   131,   132,   133,
   134,   135,     0,   136,   137,   138,   139,     0,     0,   140,
   141,   142,   143,   144,     0,     0,     0,   145,     0,     0,
     0,   691,     0,   146,   131,   132,   133,   134,   135,     0,
   136,   137,   138,   139,     0,     0,   140,   141,   142,   143,
   144,     0,     0,     0,   145,     0,     0,     0,  1503,     0,
   146,   131,   132,   133,   134,   135,     0,   136,   137,   138,
   139,     0,     0,   140,   141,   142,   143,   144,     0,     0,
     0,   145,     0,     0,     0,  1542,     0,   146,   131,   132,
   133,   134,   135,     0,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,     0,
     0,     0,     0,     0,   146,   711,   712,   713,   714,   715,
   716,   717,   718,   719,   720,     0,     0,   721,   722,   723,
   724,   725,   726,     0,     0,   727,     0,     0,     0,  1215,
   711,   712,   713,   714,   715,   716,   717,   718,   719,   720,
     0,     0,   721,   722,   723,   724,   725,   726,     0,     0,
   727,     0,   813,   711,   712,   713,   714,   715,   716,   717,
   718,   719,   720,     0,     0,   721,   722,   723,   724,   725,
   726,     0,     0,   727,   136,   137,   138,   139,     0,     0,
   140,   141,   142,   143,   144,     0,     0,     0,   145,     0,
     0,     0,     0,     0,   146,   713,   714,   715,   716,   717,
   718,   719,   720,     0,     0,   721,   722,   723,   724,   725,
   726,     0,     0,   727,   714,   715,   716,   717,   718,   719,
   720,     0,     0,   721,   722,   723,   724,   725,   726,     0,
     0,   727
};

static const short yycheck[] = {    24,
    84,   249,   386,   539,   408,     5,   879,   580,   544,   257,
   436,   495,   260,   261,   262,   419,     7,     5,   269,     3,
     3,     5,     5,     5,   428,     5,   372,   431,     0,    64,
   434,   807,     3,    68,     5,   811,   308,   462,   204,     5,
  1257,    76,     5,   209,     5,  1262,     5,     5,     5,    12,
     5,  1268,     5,    78,    79,    80,    81,    12,  1275,    12,
     5,    45,     5,    51,  1281,  1282,     5,    12,   180,    12,
     5,   204,     3,     5,     5,   180,   209,   423,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,   121,   122,    96,    97,
    98,    99,    47,   204,   209,   337,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
   145,   694,     5,   696,   608,   609,   610,   611,     3,    12,
    96,   403,     5,   209,   559,    11,    57,     7,     5,    12,
   209,    64,     7,    66,    67,     7,     5,   118,    11,     5,
     7,   209,   384,     5,   238,    76,     5,     7,   209,   505,
   117,   209,   119,   120,   121,    51,   123,   124,   125,   126,
     5,     6,   404,   130,     9,   210,   133,    63,    45,   136,
   209,   957,   139,   140,    51,   531,   143,   608,   609,   610,
   611,   148,    51,   150,   165,    51,   221,   222,   205,    51,
     5,    11,    51,    79,   211,   477,   209,   210,     5,   204,
   210,    11,   210,   697,   209,   463,    79,    11,   209,   207,
   177,   209,   209,   999,   204,   209,   209,   209,   712,   713,
   714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
   724,   725,   726,   727,   210,   729,   209,   210,   209,    46,
   209,   209,     7,   210,   209,   210,   209,   210,  1475,   147,
   148,   149,   180,   194,   289,   210,   209,   210,     5,    79,
   209,   296,   297,   298,   209,   359,   697,   209,   303,    79,
   305,   209,   307,   308,   309,    79,   204,   210,    66,   210,
   209,   712,   713,   714,   715,   716,   717,   718,   719,   720,
   721,   722,   723,   724,   725,   726,   727,   201,   729,  1526,
   561,    89,   117,   207,   119,   120,   121,   204,   123,   124,
   125,   126,   209,   658,   210,   130,   209,   210,   133,   204,
   562,   136,   816,  1550,   139,   140,   209,   210,   143,   209,
   207,   204,   677,   148,   209,   150,   205,   209,   207,   885,
   375,   207,   209,   204,   189,   207,   145,   192,   383,   209,
   205,    64,     5,    66,    64,   204,   211,    66,   393,    12,
   204,     5,   177,    76,   204,   400,    76,    76,     7,    78,
   117,    76,   119,   120,   121,     8,   123,   124,   125,   126,
   209,   210,    68,   130,   204,   816,   133,   781,   744,   136,
   204,    44,   139,   140,   204,   210,   143,    78,   210,   205,
   204,   148,    83,   150,    76,   211,    87,    88,    89,   765,
   115,     5,   205,   448,   205,   450,   451,   452,   211,    50,
   211,   209,   210,   458,     8,   204,    60,    61,     5,   115,
   177,   787,   788,   789,   790,    66,   108,   472,   794,   144,
    66,   146,     5,   115,     7,    76,    77,   541,   134,   135,
    76,    76,  1238,    84,  1240,    86,   491,     5,     7,     7,
   954,    95,   167,   210,   205,    91,    91,   204,   962,    95,
   211,   204,   106,   117,   204,   119,   120,   121,   204,   123,
   124,   125,   126,     5,   109,     7,   130,     5,   205,   133,
   176,   927,   136,   838,   211,   139,   140,   210,   533,   143,
   210,   210,   210,   211,   148,   210,   150,   542,   543,    86,
   545,     3,   204,     5,   204,   550,   551,   142,   553,    96,
  1306,   556,   204,   954,   210,   783,   784,   785,   786,   210,
   204,   962,     5,   177,   970,  1418,  1419,   893,   210,   797,
     8,   897,     5,     6,   210,   211,     9,   205,   181,   182,
   183,   184,   185,   211,   187,   188,   189,   190,   972,   995,
   193,   194,   195,   196,   197,   205,   210,   204,   201,   663,
   664,   211,   204,    76,   207,    78,   210,   205,   934,   210,
   936,   204,    85,   211,   210,   210,   204,   943,  1024,   193,
   194,   195,   196,   204,   852,   853,   204,   181,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   211,   204,   193,
   194,   195,   196,   197,   198,   873,   651,   201,   653,   975,
   655,   656,   657,   658,   100,   101,   102,   103,   104,   105,
   106,   204,   181,   182,   183,   184,   185,   204,   187,   188,
   189,   190,   677,   204,   193,   194,   195,   196,   197,   907,
  1436,   686,   201,   204,  1440,   211,  1202,     7,   207,     5,
  1243,  1244,  1245,   195,   196,   197,   198,   209,   210,   201,
   204,     3,     4,     5,     7,    69,    70,    71,    72,    73,
    74,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,   204,   210,   209,   210,
   209,   210,     7,   181,   182,   183,   184,   185,   204,   187,
   188,   189,   190,   211,  1218,   193,   194,   195,   196,   197,
  1516,   180,   767,   201,   210,   209,   210,   209,   210,   207,
   115,   210,   211,   118,   209,   210,     3,     4,     5,   204,
  1008,    68,   127,   128,   129,  1013,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,     7,  1328,   209,  1330,   209,   210,  1218,   209,   210,
   884,   108,   886,   209,   210,   209,   210,  1153,   115,   116,
   209,  1157,   209,   838,    63,  1161,    65,    66,  1164,   209,
   210,   210,   211,  1169,   209,  1361,   210,   134,   210,   211,
   137,   138,   209,  1179,   209,   210,   210,   211,  1086,   210,
   211,   210,   211,  1075,   210,   210,  1094,  1193,   210,   211,
   209,   100,   101,   102,   103,   104,   105,   106,   210,   211,
     8,  1207,  1208,   209,  1210,     7,   209,   210,  1441,   176,
   547,   548,   194,   211,  1106,     5,   901,   199,   903,  1415,
   202,  1113,  1228,  1115,   205,  1421,   180,   180,   210,   841,
   842,     5,   917,   209,   919,     7,   921,   922,   923,     5,
   195,   196,   197,   210,     5,   209,   201,     3,     4,     5,
  1158,  1143,   207,     5,     5,     5,  1148,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,   194,   209,   209,
   209,   209,   199,   180,   205,   202,   193,   194,   195,   196,
   197,   210,   209,     5,   201,   181,   182,   183,   184,   185,
   207,   187,   188,   189,   190,     5,   209,   193,   194,   195,
   196,   197,     5,   209,   209,   201,     5,  1333,   209,     5,
     5,   207,     5,  1339,   209,     3,     4,     5,  1246,     5,
     5,   205,     5,   161,   100,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,   209,   209,   209,   209,   181,
   182,   183,   184,   185,   106,   187,   188,   189,   190,   205,
   204,   193,   194,   195,   196,   197,     7,   209,     7,   201,
     7,   204,     7,  1088,   204,   207,     7,  1471,     7,   181,
   182,   183,   184,   185,     5,   187,   188,   189,   190,     7,
   180,   193,   194,   195,   196,   197,    63,     7,    65,   201,
   209,   187,   100,   209,     7,   207,     7,   193,   194,   210,
  1446,     7,     7,   199,     7,     5,   202,   211,     7,   205,
   206,   207,   208,   209,   152,   153,   154,   155,   156,   157,
   158,   159,   160,   100,   101,   102,   103,   104,   105,   106,
    63,  1156,    65,    66,  1159,     7,  1482,  1162,  1163,     8,
     7,     7,  1167,     7,     5,  1170,  1171,  1172,  1173,   207,
  1576,  1176,     7,  1178,     7,  1180,     5,     7,  1183,     7,
     7,     7,  1187,  1188,     7,  1190,   210,   100,   101,   102,
   103,   104,   105,   106,   211,   209,     5,     5,     5,   187,
   209,     7,     5,   205,   204,   193,   194,   204,     5,     3,
   204,   199,   204,   211,   202,     3,     4,     5,     6,   207,
   208,   209,     7,   207,     6,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
   209,   209,     3,   210,   209,   209,  1484,   205,   209,   204,
   204,    49,    63,  1491,    65,     5,   204,    51,    52,    53,
    54,    55,    56,    57,    58,    59,     3,   189,    62,   201,
   204,    76,    66,    78,    79,    80,    81,    82,    83,  1294,
   204,  1296,  1297,  1298,  1299,    79,     6,   210,   204,   100,
   101,   102,   103,   104,   105,   106,   209,   204,   204,   204,
   209,     3,     4,     5,     6,   209,   204,   204,     7,     7,
  1548,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,     5,   209,     5,     5,
  1414,     5,   209,     5,     5,   205,     3,    49,    63,    51,
    65,    66,   193,   194,   195,   196,   197,   198,   205,   205,
   201,    76,  1377,  1378,  1379,  1380,  1381,   117,   210,   119,
   120,   121,   204,   123,   124,   125,   126,    92,    93,    94,
   130,     5,     5,   133,     5,     5,   136,     5,     5,   139,
   140,   106,     5,   143,   209,   209,   194,     5,   148,   210,
   150,   199,     5,     5,   202,   210,     5,  1422,  1423,  1424,
  1425,   209,     7,     7,     5,     5,   210,     5,     3,     3,
     7,   204,     5,     3,     4,     5,     5,   177,     5,  1444,
     5,     5,  1447,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    87,     5,
   210,    90,    91,    92,    93,    94,  1481,    96,     5,     5,
     5,     5,   204,    66,    66,   209,    68,     5,     7,  1494,
  1495,  1496,  1497,    76,   210,     7,     7,    79,     7,   204,
  1505,     7,   194,     7,     7,   210,     7,   199,     3,    91,
   202,     7,   211,     7,     7,   207,     7,   209,     7,     7,
     7,   211,     5,   205,   106,   204,   109,   110,   111,   112,
   113,   114,   204,   152,     7,    89,     7,     7,     7,  1544,
   209,  1546,  1547,     5,     7,   205,     7,     7,  1553,     7,
     7,     7,     7,  1558,     5,  1560,  1561,   115,     7,     7,
   118,     7,     7,     7,  1569,  1570,  1571,     7,     7,   127,
   128,     7,     7,   131,   132,     7,     7,     5,  1583,     5,
  1585,   204,   204,     5,  1589,  1590,     5,     5,  1593,     3,
     4,     5,     7,  1598,   176,  1600,     7,  1602,     7,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,   194,     7,     7,   210,   210,   199,
     7,     7,   202,     7,   117,   211,   119,   120,   121,   209,
   123,   124,   125,   126,   205,   211,   205,   130,   211,   211,
   133,   211,   210,   136,   211,   205,   139,   140,     5,     7,
   143,   209,   211,     7,   211,   148,   117,   150,   119,   120,
   121,   211,   123,   124,   125,   126,   211,   205,     5,   130,
     5,     7,   133,     7,    91,   136,     7,     7,   139,   140,
     5,   205,   143,     7,   177,     7,     7,   148,   117,   150,
   119,   120,   121,     7,   123,   124,   125,   126,     7,     7,
     7,   130,     5,     5,   133,     3,     7,   136,     7,   209,
   139,   140,     5,   209,   143,   209,   177,   210,   209,   148,
   209,   150,   184,   185,   209,   187,   188,   189,   190,   205,
   205,   193,   194,   195,   196,   197,   205,     5,   162,   201,
     7,   165,     5,     5,   204,   207,   209,     7,   177,   210,
     5,     5,   209,   122,     7,     7,   209,   209,   209,     7,
   117,     7,   119,   120,   121,   209,   123,   124,   125,   126,
   194,   205,   211,   130,   205,   199,   133,     7,   202,   136,
     7,   210,   139,   140,   211,   209,   143,   205,     7,   209,
   205,   148,   117,   150,   119,   120,   121,   209,   123,   124,
   125,   126,   205,   210,   205,   130,   210,     7,   133,     7,
   210,   136,   210,     5,   139,   140,     7,     7,   143,     7,
   177,     7,     7,   148,     7,   150,   187,   188,   189,   190,
     7,     7,   193,   194,   195,   196,   197,   198,     5,     7,
   201,     7,     7,   211,     3,     4,     5,     7,   211,     7,
     7,     7,   177,   210,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,     3,
     4,     5,     5,    90,   211,   210,     7,   205,   211,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,   181,   182,   183,   184,   185,     7,
   187,   188,   189,   190,   205,   211,   193,   194,   195,   196,
   197,   205,   211,   211,   201,   181,   182,   183,   184,   185,
   207,   187,   188,   189,   190,     7,     7,   193,   194,   195,
   196,   197,     5,     7,   204,   201,     7,     5,   209,     5,
     5,   207,   181,   182,   183,   184,   185,     7,   187,   188,
   189,   190,   210,   205,   193,   194,   195,   196,   197,   205,
   209,   205,   201,   181,   182,   183,   184,   185,   207,   187,
   188,   189,   190,   205,     7,   193,   194,   195,   196,   197,
     5,     5,     5,   201,   181,   182,   183,   184,   185,   207,
   187,   188,   189,   190,     7,     7,   193,   194,   195,   196,
   197,     7,     7,     7,   201,     7,     7,     7,   209,     7,
   207,     7,     7,     7,     7,   194,     7,     7,   209,   209,
   199,   205,    43,   202,     7,     7,     5,   210,   207,   183,
   184,   185,   107,   187,   188,   189,   190,     7,   209,   193,
   194,   195,   196,   197,   209,   209,   209,   201,   210,   210,
   194,     7,   209,   207,   210,   199,     0,   210,   202,   209,
   204,     0,   947,   843,     7,   618,   482,   739,  1054,  1365,
  1198,   440,   100,   181,   182,   183,   184,   185,   445,   187,
   188,   189,   190,   851,   191,   193,   194,   195,   196,   197,
   523,     7,   221,   201,    -1,    -1,    -1,    -1,    -1,   207,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,     7,    -1,
   201,   181,   182,   183,   184,   185,   207,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,     7,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,   181,
   182,   183,   184,   185,   207,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
   181,   182,   183,   184,   185,   207,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,   181,   182,   183,   184,   185,   207,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,    -1,    -1,   207,   181,   182,   183,   184,   185,
     8,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,   181,   182,   183,   184,   185,   207,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
     3,     4,     5,   201,    -1,    -1,    -1,    -1,    -1,   207,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,     3,
     4,     5,     6,    -1,    -1,    48,    -1,    -1,    51,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,     3,     4,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
    -1,    57,    -1,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
     5,    -1,    -1,   201,    -1,    10,    -1,    12,    -1,   207,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,   198,    -1,    -1,
   201,    -1,    -1,    -1,    -1,   111,    -1,    -1,    43,    -1,
   211,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
    65,   194,    -1,    -1,    -1,    -1,   199,    -1,    -1,   202,
    75,    -1,    -1,    -1,    79,   151,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    90,   162,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   194,    -1,   107,    -1,    -1,   199,    -1,    -1,   202,    -1,
    -1,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,   194,   141,   207,   143,    -1,
   199,   211,    -1,   202,    -1,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,   178,   179,   211,    -1,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
   211,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
    -1,   211,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,
    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,
    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,    -1,   211,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
   211,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
    -1,   211,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,
    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,
    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,    -1,   211,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
   211,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
    -1,   211,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,
    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,
    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,    -1,   211,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,   211,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,
   211,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,
    -1,   211,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,    -1,
    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,
    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,
    -1,   207,    -1,    -1,    -1,   211,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    -1,    -1,   207,    -1,    -1,   210,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,   203,    -1,
    -1,    -1,   207,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,   205,    -1,   207,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,
   207,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,   205,    -1,   207,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,
    -1,   207,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
   205,    -1,   207,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,   205,    -1,   207,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,
   207,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,   205,    -1,   207,   181,   182,   183,   184,   185,
    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,
    -1,   207,   181,   182,   183,   184,   185,    -1,   187,   188,
   189,   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,
    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,
   182,   183,   184,   185,    -1,   187,   188,   189,   190,    -1,
    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,
    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,   184,
   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,   194,
   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,
   205,    -1,   207,   181,   182,   183,   184,   185,    -1,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,   207,
   181,   182,   183,   184,   185,    -1,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,    -1,
   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,   183,
   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,   193,
   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,    -1,
    -1,   205,    -1,   207,   181,   182,   183,   184,   185,    -1,
   187,   188,   189,   190,    -1,    -1,   193,   194,   195,   196,
   197,    -1,    -1,    -1,   201,    -1,    -1,    -1,   205,    -1,
   207,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,    -1,    -1,
    -1,   201,    -1,    -1,    -1,   205,    -1,   207,   181,   182,
   183,   184,   185,    -1,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,    -1,    -1,   207,   181,   182,   183,   184,   185,
   186,   187,   188,   189,   190,    -1,    -1,   193,   194,   195,
   196,   197,   198,    -1,    -1,   201,    -1,    -1,    -1,   205,
   181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
    -1,    -1,   193,   194,   195,   196,   197,   198,    -1,    -1,
   201,    -1,   203,   181,   182,   183,   184,   185,   186,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
   198,    -1,    -1,   201,   187,   188,   189,   190,    -1,    -1,
   193,   194,   195,   196,   197,    -1,    -1,    -1,   201,    -1,
    -1,    -1,    -1,    -1,   207,   183,   184,   185,   186,   187,
   188,   189,   190,    -1,    -1,   193,   194,   195,   196,   197,
   198,    -1,    -1,   201,   184,   185,   186,   187,   188,   189,
   190,    -1,    -1,   193,   194,   195,   196,   197,   198,    -1,
    -1,   201
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
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 393:
#line 4440 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 394:
#line 4451 "GetDP.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 395:
#line 4460 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 396:
#line 4470 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 398:
#line 4480 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 399:
#line 4483 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 400:
#line 4492 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 401:
#line 4505 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 403:
#line 4521 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 404:
#line 4525 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 405:
#line 4529 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 406:
#line 4533 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 407:
#line 4538 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 408:
#line 4549 "GetDP.y"
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
case 410:
#line 4566 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 411:
#line 4570 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 412:
#line 4574 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 413:
#line 4578 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 414:
#line 4582 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 415:
#line 4587 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 416:
#line 4598 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 418:
#line 4613 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 419:
#line 4617 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 420:
#line 4621 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 421:
#line 4625 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 422:
#line 4630 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 423:
#line 4641 "GetDP.y"
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
case 425:
#line 4659 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 426:
#line 4663 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 427:
#line 4667 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 428:
#line 4671 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 429:
#line 4676 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 430:
#line 4686 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 431:
#line 4692 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 432:
#line 4698 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 433:
#line 4708 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 434:
#line 4711 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 435:
#line 4716 "GetDP.y"
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
case 437:
#line 4734 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 438:
#line 4744 "GetDP.y"
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
case 439:
#line 4773 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 440:
#line 4776 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 441:
#line 4779 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 442:
#line 4787 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 443:
#line 4802 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 445:
#line 4814 "GetDP.y"
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
case 447:
#line 4837 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 449:
#line 4851 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 450:
#line 4858 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 451:
#line 4866 "GetDP.y"
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
case 452:
#line 4912 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 453:
#line 4917 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 454:
#line 4923 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 455:
#line 4926 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 456:
#line 4931 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 458:
#line 4942 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 459:
#line 4945 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 460:
#line 4951 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 461:
#line 4956 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 462:
#line 4962 "GetDP.y"
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
case 463:
#line 4976 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 465:
#line 4990 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 466:
#line 4997 "GetDP.y"
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
case 467:
#line 5025 "GetDP.y"
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
case 468:
#line 5035 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 469:
#line 5036 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 470:
#line 5042 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 471:
#line 5051 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 472:
#line 5068 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 474:
#line 5080 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 476:
#line 5087 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 478:
#line 5099 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 479:
#line 5106 "GetDP.y"
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
case 480:
#line 5118 "GetDP.y"
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
case 481:
#line 5129 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 482:
#line 5134 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 483:
#line 5140 "GetDP.y"
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
case 484:
#line 5157 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 485:
#line 5167 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 486:
#line 5170 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 487:
#line 5174 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 488:
#line 5185 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 489:
#line 5189 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 490:
#line 5193 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 491:
#line 5198 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 492:
#line 5206 "GetDP.y"
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
case 493:
#line 5218 "GetDP.y"
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
case 494:
#line 5241 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 495:
#line 5242 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 496:
#line 5243 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 497:
#line 5244 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 498:
#line 5250 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 499:
#line 5252 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 500:
#line 5258 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 501:
#line 5264 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 502:
#line 5271 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 503:
#line 5280 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONSECTION_2D ;
      PostSubOperation_S.Case.OnSection.x[0] = yyvsp[-20].d ;
      PostSubOperation_S.Case.OnSection.y[0] = yyvsp[-18].d ;
      PostSubOperation_S.Case.OnSection.z[0] = yyvsp[-16].d ;
      PostSubOperation_S.Case.OnSection.x[1] = yyvsp[-13].d ;
      PostSubOperation_S.Case.OnSection.y[1] = yyvsp[-11].d ;
      PostSubOperation_S.Case.OnSection.z[1] = yyvsp[-9].d ;
      PostSubOperation_S.Case.OnSection.x[2] = yyvsp[-6].d ;
      PostSubOperation_S.Case.OnSection.y[2] = yyvsp[-4].d ;
      PostSubOperation_S.Case.OnSection.z[2] = yyvsp[-2].d ;
    ;
    break;}
case 504:
#line 5294 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 505:
#line 5302 "GetDP.y"
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
case 506:
#line 5315 "GetDP.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 507:
#line 5325 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 508:
#line 5334 "GetDP.y"
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
case 509:
#line 5348 "GetDP.y"
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
case 510:
#line 5367 "GetDP.y"
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
case 511:
#line 5389 "GetDP.y"
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
case 512:
#line 5409 "GetDP.y"
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
case 514:
#line 5431 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 515:
#line 5438 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 516:
#line 5445 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 517:
#line 5452 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 518:
#line 5456 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 519:
#line 5460 "GetDP.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 520:
#line 5464 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 521:
#line 5468 "GetDP.y"
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
case 522:
#line 5478 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 523:
#line 5483 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 524:
#line 5488 "GetDP.y"
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
case 525:
#line 5508 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 526:
#line 5515 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 527:
#line 5522 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(Adaption_Type);
      }
    ;
    break;}
case 528:
#line 5531 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(Sort_Type);
      }
    ;
    break;}
case 529:
#line 5540 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 530:
#line 5547 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 531:
#line 5554 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 532:
#line 5558 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 533:
#line 5566 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 534:
#line 5570 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
    ;
    break;}
case 535:
#line 5582 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 536:
#line 5588 "GetDP.y"
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
case 537:
#line 5635 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 539:
#line 5646 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 540:
#line 5649 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 541:
#line 5655 "GetDP.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 542:
#line 5656 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 544:
#line 5664 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 545:
#line 5667 "GetDP.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 546:
#line 5676 "GetDP.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 547:
#line 5679 "GetDP.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 548:
#line 5690 "GetDP.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 549:
#line 5696 "GetDP.y"
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
case 550:
#line 5707 "GetDP.y"
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
case 551:
#line 5726 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 552:
#line 5732 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 553:
#line 5738 "GetDP.y"
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
case 554:
#line 5750 "GetDP.y"
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
case 557:
#line 5801 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 558:
#line 5807 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 559:
#line 5813 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 560:
#line 5824 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 561:
#line 5825 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 562:
#line 5826 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 563:
#line 5827 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 564:
#line 5828 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 565:
#line 5829 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 566:
#line 5830 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 567:
#line 5831 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 568:
#line 5832 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 569:
#line 5833 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 570:
#line 5834 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 571:
#line 5835 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 572:
#line 5836 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 573:
#line 5837 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 574:
#line 5838 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 575:
#line 5839 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 576:
#line 5840 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 577:
#line 5841 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 578:
#line 5842 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 579:
#line 5843 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 580:
#line 5844 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 581:
#line 5847 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 582:
#line 5848 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 583:
#line 5849 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 584:
#line 5850 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 585:
#line 5851 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 586:
#line 5852 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 587:
#line 5853 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 588:
#line 5854 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 589:
#line 5855 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 590:
#line 5856 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 591:
#line 5857 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 592:
#line 5858 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 593:
#line 5859 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 594:
#line 5860 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 595:
#line 5861 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 596:
#line 5862 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 597:
#line 5863 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 598:
#line 5864 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 599:
#line 5865 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 600:
#line 5866 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 601:
#line 5867 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 602:
#line 5868 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 603:
#line 5869 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 604:
#line 5870 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 605:
#line 5871 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 606:
#line 5872 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 607:
#line 5873 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 608:
#line 5874 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 609:
#line 5875 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 610:
#line 5876 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 611:
#line 5877 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 612:
#line 5878 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 613:
#line 5879 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 614:
#line 5880 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 615:
#line 5881 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 616:
#line 5882 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 617:
#line 5883 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 618:
#line 5884 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 619:
#line 5885 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 620:
#line 5886 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 621:
#line 5891 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 622:
#line 5892 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 623:
#line 5893 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 624:
#line 5894 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 625:
#line 5895 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 626:
#line 5896 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 627:
#line 5897 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 628:
#line 5899 "GetDP.y"
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
case 629:
#line 5918 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 630:
#line 5921 "GetDP.y"
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
case 631:
#line 5936 "GetDP.y"
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
#line 5950 "GetDP.y"



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


