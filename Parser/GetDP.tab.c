
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
#define	tOnSection	409
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

/* $Id: GetDP.tab.c,v 1.20 2001-06-17 21:04:46 geuzaine Exp $ */

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



#define	YYFINAL		1597
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
  1817,  1824,  1826,  1828,  1830,  1832,  1833,  1837,  1839,  1842,
  1845,  1870,  1873,  1874,  1889,  1898,  1919,  1949,  1988,  2001,
  2002,  2005,  2009,  2014,  2019,  2023,  2026,  2030,  2034,  2038,
  2042,  2046,  2050,  2054,  2058,  2062,  2066,  2070,  2074,  2078,
  2084,  2087,  2091,  2092,  2095,  2096,  2100,  2102,  2106,  2107,
  2109,  2113,  2115,  2117,  2121,  2125,  2129,  2136,  2142,  2147,
  2152,  2159,  2169,  2175,  2176,  2180,  2186,  2192,  2194,  2196,
  2198,  2200,  2202,  2204,  2206,  2208,  2210,  2212,  2214,  2216,
  2218,  2220,  2222,  2224,  2226,  2228,  2230,  2232,  2234,  2236,
  2240,  2243,  2246,  2250,  2254,  2258,  2262,  2266,  2270,  2274,
  2278,  2282,  2286,  2290,  2294,  2298,  2302,  2307,  2312,  2317,
  2322,  2327,  2332,  2337,  2342,  2347,  2352,  2359,  2364,  2369,
  2374,  2379,  2384,  2389,  2396,  2403,  2410,  2416,  2419,  2421,
  2423,  2425,  2427,  2429,  2431,  2433,  2435,  2437,  2439
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
   210,   241,   204,     7,     0,   143,   203,     5,   204,     7,
     0,   140,     6,     7,     0,   385,     0,     5,     0,     0,
   343,   344,     0,   210,   161,   395,     0,   210,   164,   387,
     0,   210,   387,     0,     0,   345,   346,     0,   127,   393,
     7,     0,   128,   393,     7,     0,   118,   241,     7,     0,
   129,   241,     7,     0,   115,   208,   338,   209,     0,     0,
   347,   348,     0,   127,   393,     7,     0,   128,   393,     7,
     0,   118,   241,     7,     0,   131,   393,     7,     0,   132,
   393,     7,     0,   115,   208,   338,   209,     0,     0,   349,
   350,     0,   134,   393,     7,     0,   135,   241,     7,     0,
    68,   393,     7,     0,   175,   393,     7,     0,   115,   208,
   338,   209,     0,     0,   351,   352,     0,   134,   393,     7,
     0,   137,   393,     7,     0,    68,   393,     7,     0,   175,
   393,     7,     0,   108,     5,     7,     0,   138,   208,   353,
   209,     0,   115,   208,   338,   209,     0,   116,   208,   338,
   209,     0,     0,   353,   208,   354,   209,     0,     0,   354,
   355,     0,    66,     5,     7,     0,    91,     5,     7,     0,
   106,   225,     7,     0,    68,   393,     7,     0,    79,   241,
     7,     0,   175,     5,     7,     0,     0,   356,   357,     0,
   208,   358,   209,     0,   390,     0,     0,   358,   359,     0,
    76,     5,     7,     0,    76,     5,   235,     7,     0,   109,
     5,   236,     7,     0,   142,     5,     7,     0,    91,   208,
   360,   209,     0,     0,   360,   208,   361,   209,     0,     0,
   361,   362,     0,    76,     5,     7,     0,    57,   208,   363,
   209,     0,     0,   363,    96,   208,   364,   209,     0,   363,
     5,   208,   364,   209,     0,     0,   364,   365,     0,     0,
   324,   203,   366,   243,   204,     7,     0,    66,     5,     7,
     0,     0,   106,   367,   225,     7,     0,    63,     5,     7,
     0,    65,     5,     7,     0,     0,   368,   369,     0,   208,
   370,   209,     0,   390,     0,     0,   370,   371,     0,    76,
     5,     7,     0,   144,     5,     7,     0,   166,     5,     7,
     0,   146,   395,     7,     0,   115,   208,   374,   209,     0,
     0,   143,     5,   145,     5,   373,   208,   374,   209,     0,
     0,     0,   374,   375,   376,     0,   147,   203,   377,   380,
   382,   204,     7,     0,   148,   203,   377,   380,   382,   204,
     7,     0,     5,   379,   210,     0,     5,   379,   378,     5,
   379,   210,     0,   194,     0,   195,     0,   192,     0,   193,
     0,     0,   203,   225,   204,     0,   151,     0,   152,   225,
     0,   153,   225,     0,   155,   208,   208,   393,   210,   393,
   210,   393,   209,   208,   393,   210,   393,   210,   393,   209,
   208,   393,   210,   393,   210,   393,   209,   209,     0,   154,
   225,     0,     0,   154,   208,   241,   210,   241,   210,   241,
   209,   208,   387,   381,   210,   387,   209,     0,   156,   208,
   393,   210,   393,   210,   393,   209,     0,   157,   208,   208,
   393,   210,   393,   210,   393,   209,   208,   393,   210,   393,
   210,   393,   209,   209,   208,   393,   209,     0,   158,   208,
   208,   393,   210,   393,   210,   393,   209,   208,   393,   210,
   393,   210,   393,   209,   208,   393,   210,   393,   210,   393,
   209,   209,   208,   393,   210,   393,   209,     0,   159,   208,
   208,   393,   210,   393,   210,   393,   209,   208,   393,   210,
   393,   210,   393,   209,   208,   393,   210,   393,   210,   393,
   209,   208,   393,   210,   393,   210,   393,   209,   209,   208,
   393,   210,   393,   210,   393,   209,     0,   152,   225,   160,
     5,   208,   393,   210,   393,   209,   208,   393,   209,     0,
     0,   382,   383,     0,   210,   161,   395,     0,   210,   161,
   188,   395,     0,   210,   161,   191,   395,     0,   210,   162,
   393,     0,   210,   169,     0,   210,   170,   393,     0,   210,
   165,   393,     0,   210,   166,     5,     0,   210,   167,   384,
     0,   210,   168,   384,     0,   210,   166,   384,     0,   210,
   163,   393,     0,   210,   164,   387,     0,   210,   150,     5,
     0,   210,   172,     5,     0,   210,   171,   393,     0,   210,
    57,   387,     0,   210,   173,   393,     0,   210,   173,   208,
   388,   209,     0,   210,   174,     0,   210,   111,   387,     0,
     0,   384,     6,     0,     0,   208,   386,   209,     0,   241,
     0,   386,   210,   241,     0,     0,   393,     0,   208,   388,
   209,     0,   393,     0,   389,     0,   388,   210,   393,     0,
   388,   210,   389,     0,   393,     8,   393,     0,   393,     8,
   203,   393,   204,   393,     0,   393,     8,   393,     8,   393,
     0,     5,   179,   393,     7,     0,     5,   179,     6,     7,
     0,     5,   179,   208,   388,   209,     7,     0,     5,   179,
    49,   203,     5,   210,     5,   204,     7,     0,    12,   203,
   391,   204,     7,     0,     0,   391,   234,     5,     0,   391,
   234,     5,   179,   393,     0,   391,   234,     5,   179,     6,
     0,    18,     0,    19,     0,    20,     0,    21,     0,    22,
     0,    23,     0,    24,     0,    25,     0,    26,     0,    27,
     0,    28,     0,    29,     0,    30,     0,    31,     0,    32,
     0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
     0,     5,     0,   394,     0,   201,   393,   202,     0,   193,
   393,     0,   198,   393,     0,   393,   193,   393,     0,   393,
   192,   393,     0,   393,   194,   393,     0,   393,   195,   393,
     0,   393,   196,   393,     0,   393,   200,   393,     0,   393,
   186,   393,     0,   393,   188,   393,     0,   393,   187,   393,
     0,   393,   189,   393,     0,   393,   183,   393,     0,   393,
   184,   393,     0,   393,   182,   393,     0,   393,   181,   393,
     0,    18,   203,   393,   204,     0,    19,   203,   393,   204,
     0,    20,   203,   393,   204,     0,    21,   203,   393,   204,
     0,    22,   203,   393,   204,     0,    23,   203,   393,   204,
     0,    24,   203,   393,   204,     0,    25,   203,   393,   204,
     0,    26,   203,   393,   204,     0,    27,   203,   393,   204,
     0,    28,   203,   393,   210,   393,   204,     0,    29,   203,
   393,   204,     0,    30,   203,   393,   204,     0,    31,   203,
   393,   204,     0,    32,   203,   393,   204,     0,    33,   203,
   393,   204,     0,    34,   203,   393,   204,     0,    35,   203,
   393,   210,   393,   204,     0,    36,   203,   393,   210,   393,
   204,     0,    37,   203,   393,   210,   393,   204,     0,   393,
   180,   393,     8,   393,     0,   393,   206,     0,     4,     0,
     3,     0,    13,     0,    14,     0,    15,     0,    16,     0,
    17,     0,     5,     0,     6,     0,     5,     0,     9,   203,
   395,   210,   395,   204,     0
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
  5128,  5133,  5138,  5156,  5165,  5169,  5174,  5182,  5189,  5196,
  5210,  5232,  5235,  5236,  5237,  5240,  5244,  5248,  5256,  5263,
  5270,  5286,  5293,  5307,  5317,  5325,  5338,  5356,  5380,  5400,
  5419,  5422,  5430,  5437,  5444,  5448,  5452,  5456,  5460,  5470,
  5475,  5480,  5500,  5507,  5514,  5523,  5532,  5539,  5546,  5550,
  5558,  5562,  5573,  5580,  5626,  5632,  5636,  5641,  5646,  5649,
  5650,  5654,  5659,  5668,  5671,  5680,  5688,  5699,  5716,  5724,
  5730,  5742,  5786,  5790,  5793,  5799,  5805,  5816,  5818,  5819,
  5820,  5821,  5822,  5823,  5824,  5825,  5826,  5827,  5828,  5829,
  5830,  5831,  5832,  5833,  5834,  5835,  5836,  5837,  5839,  5841,
  5842,  5843,  5844,  5845,  5846,  5847,  5848,  5849,  5850,  5851,
  5852,  5853,  5854,  5855,  5856,  5857,  5858,  5859,  5860,  5861,
  5862,  5863,  5864,  5865,  5866,  5867,  5868,  5869,  5870,  5871,
  5872,  5873,  5874,  5875,  5876,  5877,  5878,  5879,  5882,  5885,
  5886,  5887,  5888,  5889,  5890,  5891,  5908,  5913,  5928
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
"tOnGlobal","tOnRegion","tOnElementsOf","tOnGrid","tOnSection","tOnPoint","tOnLine",
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
   339,   339,   339,   342,   342,   343,   343,   344,   344,   344,
   345,   345,   346,   346,   346,   346,   346,   347,   347,   348,
   348,   348,   348,   348,   348,   349,   349,   350,   350,   350,
   350,   350,   351,   351,   352,   352,   352,   352,   352,   352,
   352,   352,   353,   353,   354,   354,   355,   355,   355,   355,
   355,   355,   356,   356,   357,   357,   358,   358,   359,   359,
   359,   359,   359,   360,   360,   361,   361,   362,   362,   363,
   363,   363,   364,   364,   366,   365,   365,   367,   365,   365,
   365,   368,   368,   369,   369,   370,   370,   371,   371,   371,
   371,   371,   373,   372,   374,   375,   374,   376,   376,   377,
   377,   378,   378,   378,   378,   379,   379,   380,   380,   380,
   380,   380,   381,   380,   380,   380,   380,   380,   380,   382,
   382,   383,   383,   383,   383,   383,   383,   383,   383,   383,
   383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
   383,   383,   384,   384,   385,   385,   386,   386,   387,   387,
   387,   388,   388,   388,   388,   389,   389,   389,   390,   390,
   390,   390,   390,   391,   391,   391,   391,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
   393,   393,   393,   393,   393,   393,   393,   393,   394,   394,
   394,   394,   394,   394,   394,   394,   395,   395,   395
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
     3,     4,     0,     8,     0,     0,     3,     7,     7,     3,
     6,     1,     1,     1,     1,     0,     3,     1,     2,     2,
    24,     2,     0,    14,     8,    20,    29,    38,    12,     0,
     2,     3,     4,     4,     3,     2,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
     2,     3,     0,     2,     0,     3,     1,     3,     0,     1,
     3,     1,     1,     3,     3,     3,     6,     5,     4,     4,
     6,     9,     5,     0,     3,     5,     5,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
     2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     4,     6,     4,     4,     4,
     4,     4,     4,     6,     6,     6,     5,     2,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   628,   627,     0,    18,   554,    27,
   176,   139,   152,   206,    71,   266,   336,   443,     0,   472,
     0,    20,    24,     0,     0,    26,   620,   619,   626,     0,
   621,   622,   623,   624,   625,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   579,     0,    65,    28,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,    21,     0,     0,   550,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   581,   582,     0,     0,   543,   542,   549,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   618,     0,     0,    66,     0,     6,     0,
   180,     8,   177,   179,   141,     9,   154,    10,   210,    11,
   207,   209,     0,     0,     7,    72,    76,   270,    12,   267,
   269,   340,    13,   337,   339,   447,    14,   444,   446,   483,
   476,    15,   473,   475,     0,    22,   496,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   580,     0,     0,     0,     0,   596,   595,   593,   594,   589,
   591,   590,   592,   584,   583,   585,   586,   587,   588,     0,
   553,   555,     0,     0,    29,    35,     0,     0,     0,     0,
     0,    77,     0,     0,     0,     0,     0,    23,     0,     0,
   498,     0,     0,     0,     0,     0,     0,     0,     0,   510,
   510,   597,   598,   599,   600,   601,   602,   603,   604,   605,
   606,     0,   608,   609,   610,   611,   612,   613,     0,     0,
     0,     0,   551,   545,   544,     0,   546,     0,     0,     0,
     0,     0,     0,     0,    62,     0,     0,     0,   178,   181,
     0,     0,   140,   142,     0,    81,     0,   153,   155,     0,
     0,     0,     0,     0,     0,   208,   211,    68,    42,     0,
     0,    40,     0,     0,    65,     0,     0,     0,     0,   268,
   271,     0,     0,   345,   338,   341,     0,     0,     0,     0,
   445,   448,   485,     0,     0,     0,     0,     0,   474,   477,
     0,   494,   495,   492,   493,   490,     0,   499,   500,    81,
   502,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   617,   629,   557,   556,   626,
     0,     0,     0,    32,     0,    65,     0,   187,     0,     0,
   145,     0,   159,     0,     0,     0,    83,     0,   257,     0,
     0,   219,   235,   250,     0,    41,    81,    55,    59,    52,
    39,    50,     0,    36,     0,     0,     0,     0,   277,   296,
     0,   347,     0,     0,   454,    68,     0,   486,     0,   485,
     0,     0,     0,   497,   496,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   511,     0,   607,   614,   615,   616,
     0,     0,   548,    30,     0,    70,     0,    43,     0,     0,
     0,   187,     0,   184,   182,     0,     0,     0,   143,     0,
     0,     0,   157,    82,     0,   156,     0,   214,   212,     0,
     0,     0,     0,    69,     0,     0,     0,    65,    81,     0,
    73,    78,   274,   272,     0,     0,     0,   342,     0,     0,
   367,   449,     0,     0,     0,   452,   484,     0,   478,   486,
   479,   481,   480,     0,     0,    81,     0,     0,     0,     0,
     0,   488,   539,   539,     0,     0,     0,     0,   539,     0,
   533,   533,   533,   516,     0,     0,     0,     0,   531,   489,
   552,   547,    67,     0,    31,    34,    63,     0,   189,   185,
   183,   147,   144,   161,   158,     0,     0,   626,   558,   559,
   560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
   570,   571,   572,   573,   574,   575,   576,   577,     0,   121,
     0,     0,   117,   115,     0,     0,     0,     0,     0,     0,
     0,     0,    84,    85,   113,     0,   110,   259,   218,   213,
   221,   215,   237,   216,   252,   217,    74,    56,     0,    61,
     0,    51,     0,     0,    45,    37,    44,   273,   279,   275,
     0,     0,     0,     0,   276,   297,   343,   349,   344,     0,
   450,   456,   453,   451,   487,   482,   491,     0,     0,     0,
     0,     0,     0,     0,     0,   528,   540,   532,   525,     0,
     0,   512,   515,   523,   524,   518,   519,   522,   520,   521,
   517,   527,   526,     0,   529,    33,     0,   186,     0,     0,
     0,    79,    80,   112,     0,     0,     0,     0,     0,     0,
     0,   107,   106,   108,     0,   129,   127,   124,   126,   125,
     0,    86,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   114,   135,     0,     0,     0,     0,     0,     0,    60,     0,
    53,    75,    65,     0,   313,   313,   321,   302,     0,     0,
    81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   387,   389,     0,   346,   368,     0,
     0,    81,     0,     0,     0,     0,     0,     0,   513,   514,
   534,     0,     0,     0,     0,     0,     0,    81,    81,    81,
    81,     0,     0,     0,    81,   188,   190,     0,     0,   146,
   148,     0,     0,     0,   160,   162,     0,    83,     0,     0,
     0,    83,     0,   109,     0,   335,     0,   105,   104,   101,
   102,   103,    97,    99,    98,   100,    93,    94,    89,    92,
    95,    90,    96,   128,   131,     0,   133,     0,     0,   111,
     0,     0,     0,     0,     0,   258,   260,     0,     0,     0,
     0,   535,     0,     0,   220,   222,     0,     0,     0,   236,
   238,     0,     0,     0,   251,   253,    58,     0,    54,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   288,
   278,   280,   327,   327,   327,     0,     0,     0,     0,     0,
   539,     0,     0,     0,   348,   350,     0,     0,    81,     0,
     0,     0,    81,     0,     0,     0,     0,   401,     0,   408,
   416,   423,     0,     0,     0,     0,     0,   377,     0,     0,
   455,   457,     0,     0,     0,     0,     0,     0,     0,   541,
   530,    64,     0,     0,     0,     0,    81,     0,    81,     0,
     0,     0,     0,     0,     0,    81,     0,     0,     0,   135,
   166,     0,     0,   119,     0,   120,     0,     0,     0,    83,
   334,     0,   130,   132,     0,     0,     0,     0,     0,     0,
     0,    49,     0,    68,     0,     0,   231,     0,    81,     0,
     0,     0,     0,   246,   248,     0,   242,   244,     0,     0,
     0,     0,    57,    38,     0,     0,     0,     0,     0,     0,
     0,     0,    68,     0,     0,     0,    83,     0,     0,   328,
   329,   330,   331,   332,   333,     0,   298,   314,     0,   299,
     0,   300,   322,     0,     0,     0,   307,   301,   303,     0,
     0,    68,   361,     0,     0,     0,     0,   363,   365,     0,
     0,   369,     0,     0,   370,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   393,     0,
   535,   535,   460,     0,     0,     0,     0,   505,     0,     0,
     0,   192,   193,   198,   199,     0,   202,     0,   201,   195,
   194,    65,   196,   191,     0,   200,   150,   149,     0,     0,
   163,   164,     0,     0,     0,   116,     0,    87,   134,     0,
     0,   136,   261,     0,   263,   264,     0,   223,   224,     0,
     0,     0,    65,   537,     0,   228,   229,   230,   239,    65,
   241,    65,   240,   255,   254,   256,    68,    47,   292,   291,
   284,   282,   283,   281,   285,   287,   293,   290,     0,     0,
     0,     0,   315,     0,   324,     0,     0,     0,   352,   351,
   359,    65,   353,   354,   357,   358,    65,   355,   356,     0,
     0,    81,     0,     0,     0,    81,     0,     0,     0,    81,
     0,     0,    81,   371,   402,     0,     0,    81,     0,     0,
     0,     0,   372,   409,     0,     0,     0,    81,     0,   373,
   417,     0,     0,     0,     0,     0,     0,     0,     0,   374,
   424,    81,     0,   395,   396,   394,   396,     0,   458,     0,
   539,     0,     0,     0,     0,    81,    81,     0,    81,   151,
   168,   165,     0,    91,     0,   123,     0,     0,     0,     0,
   265,   225,     0,   226,     0,   536,    81,   247,     0,   243,
     0,    48,   294,     0,   319,   320,   318,    83,   323,    83,
   304,   305,     0,     0,     0,     0,   306,   308,   360,     0,
   364,     0,   375,   376,     0,     0,   367,     0,     0,     0,
     0,   367,     0,     0,     0,     0,     0,   367,     0,     0,
     0,     0,     0,     0,   367,     0,     0,     0,     0,     0,
   367,   367,     0,     0,   433,     0,     0,   392,     0,     0,
     0,     0,   459,     0,   503,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   122,    83,    88,     0,     0,   262,
     0,     0,   538,   249,   245,     0,     0,   289,   316,   325,
     0,     0,     0,     0,   362,   366,     0,   539,     0,   539,
     0,     0,    81,     0,   405,   403,   404,   406,    81,     0,
   412,   410,   411,   413,   414,   420,     0,   418,   419,   421,
   427,   429,     0,     0,   425,   426,     0,   428,     0,     0,
   539,   397,     0,   463,   463,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   167,   169,     0,   138,   137,     0,     0,     0,   286,
     0,     0,   309,   310,   311,   312,   380,     0,   378,     0,
   381,     0,     0,   407,     0,   415,   422,   431,   432,   435,
   430,   391,   388,     0,   539,   400,   390,   327,   327,   509,
   539,     0,     0,     0,     0,   205,   204,   197,   203,     0,
     0,     0,     0,     0,     0,    83,     0,   227,   295,    83,
     0,     0,     0,     0,     0,    81,     0,     0,   398,   399,
     0,     0,     0,   468,   462,     0,   464,   461,     0,     0,
     0,     0,     0,   170,   171,   172,   173,   174,   175,     0,
     0,     0,     0,   383,   367,     0,   382,     0,     0,     0,
     0,    81,     0,     0,     0,   434,   436,     0,     0,     0,
     0,   465,   504,     0,     0,     0,     0,   118,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   470,   471,   467,     0,    83,     0,     0,     0,     0,
   232,   317,   326,   379,   384,   367,     0,   437,   440,   441,
   438,   439,   442,   469,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   385,   367,
   466,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   233,   386,     0,   506,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
   501,     0,     0,     0,     0,     0,   234,     0,     0,     0,
     0,     0,     0,   507,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   508,     0,     0,     0
};

static const short yydefgoto[] = {  1595,
     1,     2,     3,    19,    20,    21,    85,   150,   235,   457,
   322,   490,   723,   323,   324,   616,   850,   953,   411,   488,
   412,   386,   148,   293,   406,   294,    90,   166,   325,   396,
   397,   474,   475,   593,   797,  1207,   594,   680,   679,   676,
   711,   818,   820,    87,   238,   304,   468,   670,   781,    88,
   239,   309,   470,   671,   786,  1070,  1294,  1373,    86,   153,
   237,   300,   463,   669,   777,    89,   161,   240,   317,   481,
   714,   836,  1092,  1530,  1558,   482,   715,   841,   969,  1102,
   966,  1100,   483,   716,   846,   477,   713,   827,    91,   170,
   243,   331,   496,   724,   862,  1223,   987,  1307,   497,   626,
   866,  1009,  1128,  1238,   863,   998,  1228,  1381,   865,  1003,
  1230,  1382,   999,   595,    92,   174,   244,   336,   423,   500,
   729,   876,  1014,  1132,  1020,  1137,   630,   749,   896,   897,
  1185,  1279,  1352,  1033,  1155,  1035,  1164,  1036,  1171,  1037,
  1181,  1347,  1438,  1477,    93,   178,   245,   342,   504,   750,
   902,  1188,  1408,  1447,  1506,  1481,    95,   183,   247,   350,
    22,   246,   428,   508,    46,   188,   357,   250,   260,  1357,
   367,   445,   658,  1186,  1095,   646,   125,   126,    23,    84,
   596,   647,    82,    28
};

static const short yypact[] = {-32768,
-32768,    37,  2565,  -104,   343,   -56,   -31,   -16,     3,    96,
   152,   160,   171,   175,   189,    42,   202,   177,-32768,-32768,
   -23,-32768,-32768,   932,-32768,-32768,    48,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   259,-32768,
   470,-32768,-32768,   205,   210,-32768,-32768,-32768,-32768,   448,
-32768,-32768,-32768,-32768,-32768,   269,   275,   285,   312,   332,
   335,   359,   372,   376,   381,   405,   421,   423,   434,   439,
   442,   452,   460,   462,   475,   477,  2502,  2502,  2502,  2502,
  1024,-32768,   343,   -76,   321,    10,   252,   357,    13,    54,
    92,   124,   126,   559,   128,   484,-32768,   567,   567,-32768,
  2502,  2502,  2502,  2502,  2502,  2502,  2502,  2502,  2502,  2502,
  2502,  2502,  2502,  2502,  2502,  2502,  2502,  2502,  2502,  2502,
   591,   -18,   -18,  4464,   286,-32768,   411,-32768,  2502,  2502,
  2502,  2502,  2502,  2502,  2502,  2502,  2502,  2502,  2502,  2502,
  2502,  2502,  2502,-32768,   420,   679,-32768,   686,-32768,   461,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,     0,   492,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   692,-32768,   498,  1179,  1179,  4491,
  4518,  4545,  4572,  4599,  4626,  4653,  4680,  4707,  4734,  2529,
  4761,  4788,  4815,  4842,  4869,  4896,  2564,  2595,  2626,   495,
-32768,   705,  2502,  1825,   581,  1311,  1784,  1811,  1811,   674,
   674,   674,   674,  1073,  1073,   -18,   -18,   -18,   -18,   343,
-32768,   535,  -106,   530,-32768,-32768,   301,    -4,   400,   314,
    19,-32768,   316,   333,  1145,   531,  1032,-32768,    52,     4,
-32768,    52,    52,   132,   540,   542,   552,   558,   564,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2502,-32768,-32768,-32768,-32768,-32768,-32768,  2502,  2502,
  2502,   774,-32768,-32768,   411,  2502,  2360,  2502,   582,  2467,
   292,  1790,   610,   618,-32768,    45,   800,   811,-32768,-32768,
   611,   818,-32768,-32768,   617,    47,   822,-32768,-32768,   620,
   824,   826,   627,   629,   630,-32768,-32768,  -175,-32768,   661,
    35,-32768,   637,   639,    -2,   847,   849,   647,   648,-32768,
-32768,   852,   654,-32768,-32768,-32768,   859,   664,   870,   871,
-32768,-32768,-32768,   872,   670,   882,   343,   883,-32768,-32768,
   685,-32768,-32768,-32768,-32768,-32768,   885,   731,-32768,    47,
-32768,   689,  2502,   690,   693,   694,   159,   174,  4923,  4950,
  4977,  5004,   699,  5031,  2502,  5166,-32768,-32768,  5166,   736,
   927,  2502,  3804,-32768,    93,   211,   732,-32768,   934,   139,
-32768,   935,-32768,   740,   768,   965,-32768,   966,-32768,   967,
   142,-32768,-32768,-32768,   766,-32768,    47,   970,   771,-32768,
-32768,-32768,   801,-32768,   975,   982,   983,   164,-32768,-32768,
   165,-32768,   780,   166,-32768,   784,   986,   815,  1033,-32768,
  1034,  1038,  1040,-32768,   498,  1041,   838,  2502,  2657,  2502,
  2502,  2502,  1042,  2512,-32768,  1043,-32768,-32768,-32768,-32768,
  1071,  2502,  5166,-32768,  3834,-32768,    93,-32768,  1075,  1078,
  1081,-32768,   369,-32768,-32768,   874,  1080,   374,-32768,   393,
  2502,  1083,-32768,-32768,   981,-32768,   414,-32768,-32768,  1084,
   427,   441,   444,-32768,  1086,    46,   256,   450,    47,    18,
-32768,-32768,-32768,-32768,  1087,   453,   430,-32768,  1102,   467,
-32768,-32768,  1108,   474,  1110,-32768,-32768,   -23,-32768,   909,
-32768,-32768,-32768,   919,   911,    47,  2688,  2502,  2719,  2750,
  2781,-32768,  1279,  1279,  1126,    25,  2502,  2502,  1279,  2502,
  1129,-32768,-32768,-32768,  2502,  2502,  1134,  1345,-32768,-32768,
-32768,  5166,-32768,  1135,-32768,-32768,   938,   502,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  5058,   945,   -22,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   947,-32768,
   948,   951,-32768,-32768,  1151,   981,   981,   981,   981,  1161,
   352,  1163,  5241,   960,   969,   969,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1162,  2502,-32768,
  3864,-32768,    24,  1168,-32768,-32768,-32768,-32768,-32768,-32768,
   961,   973,   976,   977,-32768,-32768,-32768,-32768,-32768,   508,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  2502,   980,  2502,
  2812,  2502,  2502,  2502,  2502,-32768,  5166,-32768,-32768,   343,
   343,-32768,  5166,  5166,-32768,  5166,-32768,  1171,  1171,  1171,
  5166,  5166,-32768,  2502,  5166,-32768,  2502,-32768,   615,    11,
     1,-32768,-32768,-32768,   978,   988,   978,   981,   991,   992,
  1011,  1001,  1001,  1001,  5218,-32768,-32768,-32768,-32768,-32768,
    36,-32768,   981,   981,   981,   981,   981,   981,   981,   981,
   981,   981,   981,   981,   981,   981,   981,   981,  1199,   891,
-32768,  1006,   609,   956,   327,   361,  2502,  5085,-32768,   496,
-32768,-32768,   216,   767,-32768,-32768,-32768,-32768,   735,    21,
   167,  1012,  1019,  1020,  1022,  1023,  1025,    -8,   178,  1027,
  1030,  1026,  1225,  1036,-32768,-32768,  1226,-32768,-32768,    -5,
  2843,    47,  2874,  2502,  2905,  2936,  2967,   511,-32768,-32768,
-32768,   515,  3894,    52,    52,    52,    52,   283,   331,    47,
    47,  1047,  1241,  1252,   364,-32768,-32768,   140,  1253,-32768,
-32768,  1051,  1256,  1265,-32768,-32768,  1067,-32768,  1068,  2399,
  1272,-32768,  1074,-32768,  1069,-32768,   981,  5260,  5278,  1056,
  1056,  1056,   833,   833,   833,   833,   287,   287,  1001,  1001,
  1001,  1001,  1001,-32768,-32768,  1072,  5241,   236,  2428,-32768,
  1276,   196,   196,  1280,  1284,-32768,-32768,  1285,  1312,  1313,
  1111,  1112,    52,    52,-32768,-32768,  1334,    94,    95,-32768,
-32768,  1335,  1336,  1337,-32768,-32768,  5166,  1348,-32768,  1148,
    30,  1350,  1351,   356,  1352,  1378,  1381,  1382,    52,-32768,
-32768,-32768,  1223,  1679,  1000,   300,  1388,  1392,   122,   343,
  1279,   343,   136,  1397,-32768,-32768,  1346,  1398,    47,  1379,
  1399,  1401,    47,  1402,  1404,  1407,  2502,-32768,  2502,-32768,
-32768,-32768,    52,  1380,  1411,  1214,  1216,-32768,  1212,  1416,
-32768,-32768,  2502,  1213,  2502,  3924,  2502,  2502,  2502,-32768,
-32768,-32768,  1418,  1419,  1420,  1421,    47,  1422,    47,  1423,
  1424,  1427,  1435,  1436,  1437,    47,  1438,  1441,  1443,  1006,
-32768,  1446,  1447,-32768,  1248,-32768,   981,  1257,  1262,-32768,
-32768,   363,-32768,-32768,   981,  1266,  1267,   526,  1461,  1384,
  1467,-32768,  1468,   784,  1469,   168,  1270,  1474,    47,  1475,
  1476,  1478,  1479,-32768,-32768,  1481,-32768,-32768,  1482,  1483,
  1489,  1494,-32768,-32768,  1497,    35,  1501,  1502,  1507,  1508,
  1509,  1511,   784,  1513,  1514,  1515,-32768,  1518,  1523,-32768,
-32768,-32768,-32768,-32768,-32768,    52,-32768,-32768,  1278,-32768,
    52,-32768,-32768,  1327,  1526,  1527,-32768,-32768,-32768,  1532,
  1533,   784,-32768,  1534,  1535,  1537,  1538,-32768,-32768,  1540,
  1541,-32768,  1329,  1330,-32768,  1340,  1342,  1353,  1344,  1355,
  1357,  2998,   600,  3029,  1065,   406,   683,  1360,-32768,  1354,
   137,   137,-32768,  1553,  3954,  1366,  3984,-32768,  4014,  4044,
  4074,-32768,-32768,-32768,-32768,  1369,-32768,  1370,-32768,-32768,
-32768,  1371,-32768,-32768,  1373,-32768,-32768,-32768,  1554,   529,
-32768,-32768,    52,  5193,  2502,-32768,  1358,-32768,  5241,  1579,
    52,-32768,-32768,  1581,-32768,-32768,  1580,-32768,-32768,  1582,
  1499,  1586,  1371,-32768,   543,-32768,-32768,-32768,-32768,   546,
-32768,   548,-32768,-32768,-32768,-32768,   784,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1390,  1589,
  1591,  1595,-32768,  1597,-32768,  1601,  1606,   293,-32768,-32768,
-32768,   573,-32768,-32768,-32768,-32768,   575,-32768,-32768,  1607,
  1608,    47,  1594,  1409,  2502,    47,    52,  2502,  1410,    47,
  2502,  2502,    47,-32768,-32768,  2502,  1412,    47,  2502,  2502,
  2502,  2502,-32768,-32768,  2502,  1413,  2502,    47,  2502,-32768,
-32768,  2502,  1618,  1425,  1428,  2502,  2502,  1429,  2502,-32768,
-32768,    47,  1617,-32768,-32768,-32768,-32768,    43,-32768,  1430,
  1279,  1431,  1432,  1434,  1444,    47,    47,  1624,    47,-32768,
-32768,-32768,  1426,-32768,  3060,-32768,   981,  1442,  1449,  1625,
-32768,-32768,  1646,-32768,  1650,-32768,    47,-32768,  1651,-32768,
  1653,-32768,  1456,  1658,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   978,   978,   978,    52,-32768,-32768,-32768,  1661,
-32768,  1663,-32768,-32768,  1465,  1460,-32768,  3091,  1470,  1466,
  3122,-32768,  1664,  1683,  1712,  1673,  3153,-32768,  1678,  1741,
  1769,  1861,  1890,  1919,-32768,  1947,  1680,  1974,  1995,  1682,
-32768,-32768,  2022,  2051,-32768,  2080,  1488,-32768,   241,   249,
  1485,  1491,-32768,  2502,-32768,  2502,  2502,  2502,  2502,  1492,
  1498,  1477,  1500,   673,-32768,-32768,  5241,  1496,  1505,-32768,
  1696,  1512,-32768,-32768,-32768,  1703,  1713,-32768,-32768,-32768,
  1716,  1717,  1719,  1720,-32768,-32768,  1722,  1279,   583,  1279,
  1723,  1705,    47,  1275,-32768,-32768,-32768,-32768,    47,  1316,
-32768,-32768,-32768,-32768,-32768,-32768,  1452,-32768,-32768,-32768,
-32768,-32768,  1486,  1524,-32768,-32768,   585,-32768,  1729,  1730,
  1039,-32768,  1731,-32768,-32768,  4104,  1529,  3184,  3215,  3246,
  3277,  1746,  1747,  1748,  1750,  1753,  2502,  2502,  2502,  2502,
  2502,-32768,-32768,  1550,-32768,-32768,  1671,  1756,  1560,-32768,
  1561,  1562,-32768,-32768,-32768,-32768,-32768,  1566,  1655,  1563,
-32768,  1574,  1576,-32768,  1577,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   343,  1279,-32768,-32768,   330,  1057,-32768,
  1279,  2502,  2502,  2502,  2502,-32768,-32768,-32768,-32768,  1781,
  2109,  2130,  2157,  2178,  2205,-32768,  1785,-32768,-32768,-32768,
   978,  1782,  1583,  2502,  1789,    47,  2502,   401,-32768,-32768,
  1787,  1792,  1793,-32768,-32768,  1596,-32768,-32768,  1622,  3308,
  3339,  3370,  3401,-32768,-32768,-32768,-32768,-32768,-32768,  1628,
  1629,  1630,  1632,-32768,-32768,  5112,-32768,  1669,  3432,  1795,
  2502,    47,  1828,    52,  1869,-32768,-32768,  1873,  1874,  1875,
    52,-32768,-32768,  2502,  2502,  2502,  2502,-32768,  1877,  1878,
  1879,  1558,  1880,  1694,  2502,  1883,  2234,  1884,  1896,  1902,
  1903,-32768,-32768,-32768,  1904,-32768,  4134,  4164,  4194,  4224,
-32768,-32768,-32768,-32768,-32768,-32768,  5139,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1709,  1706,  1707,  1711,  1724,  1872,
  1592,  1732,  1910,  2502,  1734,  2502,  2502,    52,-32768,-32768,
-32768,  3463,  2502,  3494,  3525,  1913,  1626,  2502,  4254,  2502,
  2502,-32768,-32768,  3556,-32768,  3587,  3618,  1824,  2502,  2502,
  2502,  1933,  4284,  4314,  4344,   784,  1735,  1736,  1738,  1932,
-32768,  1740,  2502,  1751,  2502,  3649,-32768,  3680,  2502,  2502,
  3711,  4374,  2502,-32768,  4404,  1757,  1766,  2502,  3742,  2502,
  3773,  2502,  4434,-32768,  1943,  1959,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
    65,-32768,-32768,  -247,   -20,-32768,-32768,  1131,  -479,-32768,
  -544,-32768,  -322,  -382,  -422,-32768,-32768,-32768,-32768,  -346,
-32768,  -772,-32768,  -543,-32768,-32768,-32768,-32768,-32768,-32768,
  1389,-32768,  1059,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1525,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1260,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  -855,  -545,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768, -1078,-32768,-32768,-32768,
   950,   806,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   640,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,  1564,-32768,  1493,  1909,-32768,  1575,  1820,-32768,
  1752,-32768,   281,  1180,-32768,  -512,  -613,  1801,  1021,-32768,
-32768,   -24,  -466,   -82
};


#define	YYLAST		5478


static const short yytable[] = {    81,
   145,   351,   416,   505,   358,   359,   361,   467,   597,  1004,
   617,   648,   674,   437,     4,   935,   655,     4,   480,   939,
   408,     6,   409,   318,     6,   877,   408,   -43,   409,    25,
    26,   758,   405,    27,   952,   495,    -2,   408,   499,   409,
   795,   503,   682,   683,   684,   685,    39,  1281,   608,   387,
   762,   899,   122,   123,   124,   127,   318,   394,   163,   301,
   485,   778,   615,   461,   782,     6,   783,   784,   721,   319,
   900,   302,   291,   779,    24,   975,   190,   191,   192,   193,
   194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
   204,   205,   206,   207,   208,   209,     4,   458,   964,   967,
   164,   292,   319,     6,   215,   216,   217,   218,   219,   220,
   221,   222,   223,   224,   225,   226,   227,   228,   229,   597,
   597,   597,   597,    44,    45,   395,  1012,   146,     4,   787,
     4,   789,     4,   147,   790,     6,   318,     6,  1282,     6,
  1018,  1184,   614,   319,   318,   465,    29,   289,   479,   798,
   799,   800,   801,   802,   803,   804,   805,   806,   807,   808,
   809,   810,   811,   812,   813,   613,   817,  1077,  1319,   639,
   494,   498,   502,  1324,  1089,   849,    30,   394,    24,  1330,
  -578,   143,   319,    43,   928,   592,  1337,   144,   285,   287,
   319,    31,  1343,  1344,   887,   352,   353,   354,   355,   888,
   458,   415,   241,   901,   303,   948,    41,   147,    42,   785,
    32,   597,   650,   356,  1119,   651,   720,   151,   152,   780,
   159,   160,   320,   878,   321,   410,   597,   597,   597,   597,
   597,   597,   597,   597,   597,   597,   597,   597,   597,   597,
   597,   597,   410,   597,   796,   395,   319,   369,   609,    40,
    83,  1283,   388,   942,   370,   371,   372,   321,    47,    48,
    49,   374,   165,   376,   432,   379,    81,   383,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,    75,   394,    47,    48,   380,    50,   321,   168,
   169,   965,   968,    33,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,  1013,
   597,   172,   173,   176,   177,   181,   182,   321,   439,   360,
    76,   394,   319,  1019,   959,   321,   466,    25,    26,   466,
   453,    27,  1233,  1234,   687,   381,   688,   455,  1016,    34,
   979,   395,   443,   310,   296,  1005,   297,    35,   444,   879,
  1078,   466,   466,   466,   394,   466,   298,   446,    36,   311,
   889,   326,    37,   444,   880,   890,  1492,  1235,  1006,   312,
   313,   327,  1441,  1074,  1442,  1443,    38,   314,  1236,   315,
   851,  1079,   837,    94,   838,   904,   328,    98,   332,   395,
   329,   839,    99,   517,   460,   519,   520,   521,   214,   -46,
   147,   918,   920,   921,   922,   147,   842,   542,   927,   990,
   991,   992,   993,   994,   995,  1444,   843,  1531,   844,   944,
   333,   980,   395,   652,  1350,   945,   556,   334,    77,   459,
  1351,   981,  1353,    78,   100,  1309,    79,  1310,  1351,   155,
   156,  1547,   611,   305,   610,   233,  1470,   306,  1471,   689,
   597,   101,     6,  1165,    96,   307,    97,   102,   597,  1472,
   704,   705,   706,   707,    77,   917,   708,   103,   185,    78,
   186,  1473,    79,   641,   212,   213,  1108,   321,   408,    80,
   409,  1237,   653,   654,   234,   656,  1474,  1007,  1008,   299,
   661,   662,   730,   665,   104,   690,   913,   914,   915,   916,
  1166,   544,   316,  1374,   330,   621,   622,   623,   624,   149,
   929,  1087,  1024,   919,   105,   840,  1028,   106,  1445,  1167,
  1168,   335,   692,   693,   694,   695,   696,   697,   698,   699,
   700,   701,  1446,  1446,   702,   703,   704,   705,   706,   707,
  1115,   107,   708,   180,   157,   158,   926,   759,   760,   845,
  1056,   187,  1058,  1090,   108,  1475,   549,   550,   109,  1065,
  1169,   552,   553,   110,   718,   961,   962,   730,   288,  1131,
   129,   130,   131,   132,   133,   210,   134,   135,   136,   137,
   554,   555,   138,   139,   140,   141,   142,   111,   308,  1476,
   143,   986,  1094,   751,  1170,   753,   144,   755,   756,   757,
   127,   598,   599,   112,   731,   113,   732,   733,   734,   230,
   735,   736,   737,   738,   601,   602,   114,   739,   625,   127,
   740,   115,   763,   741,   116,  1038,   742,   743,   603,   604,
   744,   605,   606,  1460,   117,   745,   746,  1462,   612,   147,
   619,   620,   118,  1297,   119,   764,   765,   766,   767,   768,
   769,   770,   771,   772,   628,   629,   773,   120,  1285,   121,
   774,   632,   633,   747,  1222,   231,   821,  1311,  1312,  1313,
   232,   822,   847,   775,   242,   823,   824,   825,   248,   731,
   249,   732,   733,   734,   282,   735,   736,   737,   738,   549,
   668,   283,   739,   290,  1149,   740,   748,  1150,   741,   910,
   213,   742,   743,   911,   213,   744,  1151,  1152,  1153,   906,
   745,   746,   295,  1525,  1082,   213,  1201,  1202,   343,  1198,
   597,  1366,  1367,  1368,  1369,  1370,  1371,   362,  1122,   363,
  1172,  1216,  1217,  1124,  1218,   147,  1220,   147,   747,   364,
   129,   130,   131,   132,   133,   365,   134,   135,   136,   137,
  1215,   366,   138,   139,   140,   141,   142,  1219,   373,  1221,
   143,  1239,   147,  1241,   147,   377,   144,  1015,   384,  1017,
  1173,  1389,  1400,  1401,   127,  1245,   385,  1174,  1175,  1249,
   867,   950,   951,  1253,   389,  1388,  1256,  1390,  1154,  1240,
   868,  1259,   659,   660,  1242,   390,  1176,   826,   391,  1177,
  1178,  1267,   392,   776,   393,  1203,   398,   399,   400,   852,
   401,   853,   854,  1209,   402,  1277,   403,   404,  1406,   407,
   413,   414,   855,   869,   870,   871,   872,   873,   874,  1290,
  1291,   417,  1293,   418,   419,   420,   421,  1179,   856,   857,
   858,   422,  1032,   424,  1034,   138,   139,   140,   141,   142,
  1303,   425,   859,   143,   426,   427,   429,   430,  1045,   144,
  1047,  1372,  1049,  1050,  1051,  1463,   431,   433,   434,   435,
   436,  1180,  1440,    47,    48,   558,   438,   440,  1449,  1250,
   441,   442,   451,    51,    52,    53,    54,    55,   559,   560,
   561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
   571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
   581,   582,   583,   454,    47,    48,    49,    50,   -43,   462,
   464,   469,   471,   875,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   860,
   472,   473,   476,   478,   484,   861,  1393,   486,   487,   489,
    76,   491,  1395,    47,    48,   558,   492,   501,  1314,   493,
   584,   405,   506,    51,    52,    53,    54,    55,   559,   560,
   561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
   571,   572,   573,   574,   575,   576,   577,   578,   579,   580,
   581,   582,   583,   507,   702,   703,   704,   705,   706,   707,
   128,   828,   708,   829,   830,   831,   832,   833,   834,   509,
   511,    47,    48,    49,   512,   515,   513,   516,   522,   540,
  1205,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,   585,   541,  1489,   382,
   584,   545,   586,   587,   546,   547,   551,   557,   588,  1468,
   600,   589,   607,   618,   815,   816,   590,   591,   592,   990,
   991,   992,   993,   994,   995,  1001,   154,   344,   627,   162,
   167,   171,   175,   179,   631,   184,   634,   636,   638,  1441,
  1248,  1442,  1443,  1251,    77,  1498,  1254,  1255,   637,    78,
   649,  1257,    79,   657,  1260,  1261,  1262,  1263,   663,    80,
  1264,   666,  1266,  1570,  1268,   667,   345,  1269,   673,   675,
   677,  1273,  1274,   678,  1276,   681,   990,   991,   992,   993,
   994,   995,  1444,   686,   835,   709,   585,   691,   725,   717,
   236,   710,   586,   587,   722,   346,   761,   347,   588,  1157,
   726,   589,  1158,   727,   728,   592,   590,   591,   592,   752,
   788,  1159,  1160,   791,   792,  1161,  1162,   348,   793,  1404,
   708,   814,  1405,   129,   130,   131,   132,   133,  1002,   134,
   135,   136,   137,   819,   881,   138,   139,   140,   141,   142,
   337,   882,   883,   143,   884,   885,  1500,   886,   893,   144,
   894,    77,   898,  1505,   891,   338,    78,   892,   895,    79,
   349,   698,   699,   700,   701,   924,   645,   702,   703,   704,
   705,   706,   707,   339,   923,   708,   925,   930,   931,  1356,
   932,  1358,  1359,  1360,  1361,  1448,   140,   141,   142,   933,
   934,   936,   143,  1163,   938,   943,   940,   941,   144,   730,
   949,    47,    48,    49,   952,   988,   340,   989,   954,   955,
  1546,    51,    52,    53,    54,    55,    56,    57,    58,    59,
    60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
    70,    71,    72,    73,    74,    75,   956,   957,   958,   959,
   730,  1439,   990,   991,   992,   993,   994,   995,   996,   251,
   252,   253,   254,   255,   256,   257,   258,   259,   963,   970,
   971,   972,  1421,  1422,  1423,  1424,  1425,    47,    48,    49,
   973,   974,  1022,   341,   977,   978,   982,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,   983,   984,   985,  1025,  1039,  1450,  1451,  1452,
  1453,   731,  1010,   732,   733,   734,  1011,   735,   736,   737,
   738,  1021,  1023,  1026,   739,  1027,  1029,   740,  1030,  1466,
   741,  1031,  1469,   742,   743,  1040,  1041,   744,  1042,  1043,
  1044,  1046,   745,   746,  1052,  1053,  1054,  1055,  1057,  1059,
  1060,   997,   731,  1061,   732,   733,   734,  1062,   735,   736,
   737,   738,  1063,  1064,  1066,   739,  1497,  1067,   740,  1068,
   747,   741,  1071,  1072,   742,   743,   730,  1073,   744,  1507,
  1508,  1509,  1510,   745,   746,  1076,  1075,  1083,  1080,  1081,
  1517,    77,  1084,  1085,  1086,  1088,    78,  1091,  1093,    79,
  1123,  1096,  1097,  1394,  1098,  1099,   645,  1101,  1103,  1104,
   730,   747,   131,   132,   133,  1105,   134,   135,   136,   137,
  1106,  1107,   138,   139,   140,   141,   142,  1109,  1110,  1542,
   143,  1544,  1545,  1111,  1112,  1113,   144,  1114,  1549,  1116,
  1117,  1118,  1120,  1554,  1396,  1556,  1557,  1121,   730,  1125,
  1126,  1127,  1140,  1141,  1563,  1564,  1565,    77,  1129,  1130,
  1133,  1134,    78,  1135,  1136,    79,  1138,  1139,  1576,  1142,
  1578,  1143,   664,  1145,  1581,  1582,  1144,  1183,  1585,  1189,
  1200,  1206,   730,  1589,  1146,  1591,  1147,  1593,   731,  1182,
   732,   733,   734,  1191,   735,   736,   737,   738,  1196,  1197,
   147,   739,  1199,  1208,   740,  1210,  1211,   741,  1212,  1213,
   742,   743,  1214,  1224,   744,  1225,   730,  1226,  1246,   745,
   746,  1227,   731,  1229,   732,   733,   734,  1231,   735,   736,
   737,   738,  1232,  1243,  1244,   739,  1247,  1252,   740,  1258,
  1265,   741,  1270,  1278,   742,   743,  1292,   747,   744,  1295,
   730,  1300,  1271,   745,   746,  1272,  1275,  1284,  1286,  1287,
   731,  1288,   732,   733,   734,  1298,   735,   736,   737,   738,
  1301,  1289,  1299,   739,  1302,  1304,   740,  1305,  1306,   741,
  1397,   747,   742,   743,  1308,  1315,   744,  1316,  1317,  1318,
  1325,   745,   746,  1321,   731,  1322,   732,   733,   734,  1328,
   735,   736,   737,   738,  1331,  1364,  1339,   739,  1342,  1326,
   740,  1349,  1354,   741,  1398,  1362,   742,   743,  1355,   747,
   744,  1363,  1377,  1365,  1375,   745,   746,  1379,   731,  1392,
   732,   733,   734,  1376,   735,   736,   737,   738,  1327,  1380,
  1378,   739,  1383,  1384,   740,  1385,  1386,   741,  1387,  1391,
   742,   743,  1399,   747,   744,  1402,  1403,  1407,  1411,   745,
   746,   988,   731,   989,   732,   733,   734,  1332,   735,   736,
   737,   738,  1416,  1417,  1418,   739,  1419,  1420,   740,  1426,
  1427,   741,  1428,  1429,   742,   743,  1514,   747,   744,  1432,
  1430,  1431,  1434,   745,   746,  1333,  1433,  1435,   990,   991,
   992,   993,   994,   995,   996,  1436,  1437,  1454,  1464,  1461,
  1465,  1478,    47,    48,    49,  1467,  1479,  1480,  1482,  1496,
  1539,   747,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    75,    47,    48,    49,
  1483,  1488,  1499,  1490,  1553,  1491,   466,    51,    52,    53,
    54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
    64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
    74,    75,   129,   130,   131,   132,   133,  1334,   134,   135,
   136,   137,  1494,  1501,   138,   139,   140,   141,   142,  1502,
  1503,  1504,   143,  1511,  1512,  1513,  1515,  1000,   144,  1518,
  1520,   129,   130,   131,   132,   133,  1335,   134,   135,   136,
   137,  1516,  1521,   138,   139,   140,   141,   142,  1522,  1523,
  1524,   143,  1533,  1534,  1538,  1535,  1541,   144,  1536,  1552,
   129,   130,   131,   132,   133,  1336,   134,   135,   136,   137,
  1562,  1537,   138,   139,   140,   141,   142,  1566,  1574,  1540,
   143,  1543,  1596,  1571,  1572,  1573,   144,  1575,   129,   130,
   131,   132,   133,  1338,   134,   135,   136,   137,  1597,  1577,
   138,   139,   140,   141,   142,  1587,   132,   133,   143,   134,
   135,   136,   137,  1588,   144,   138,   139,   140,   141,   142,
  1340,   976,    77,   143,   712,   864,   548,    78,  1069,   144,
    79,  1187,  1280,   510,  1409,   382,   134,   135,   136,   137,
   635,  1341,   138,   139,   140,   141,   142,   189,   261,   514,
   143,   960,   368,   284,     0,     0,   144,    77,     0,     0,
     0,     0,    78,     0,     0,    79,     0,   286,  1345,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,  1346,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,  1348,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,  1455,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,  1456,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,  1457,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,   129,   130,   131,   132,   133,   144,
   134,   135,   136,   137,  1458,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,  1459,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
  1519,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,   129,
   130,   131,   132,   133,   144,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,   129,   130,   131,
   132,   133,   144,   134,   135,   136,   137,   375,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
    47,    48,    49,   143,     0,     0,     0,     0,     0,   144,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,     0,     0,     0,     0,    47,
    48,    49,   378,     0,     0,   946,     0,     0,   947,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,    75,    47,    48,    49,     0,     0,     0,
     0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    75,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,   523,     4,
     0,     0,     0,     0,     5,     0,     6,     0,   692,   693,
   694,   695,   696,   697,   698,   699,   700,   701,     0,     0,
   702,   703,   704,   705,   706,   707,     0,     0,   708,     0,
     0,     0,     0,     0,     0,     0,     0,     7,   937,     0,
     0,     0,     0,     0,     8,     0,     0,     0,     0,     0,
    77,     0,   524,     0,     0,    78,     0,     9,    79,    10,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
     0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    13,     0,     0,     0,     0,    77,
     0,   525,     0,     0,    78,     0,     0,    79,     0,     0,
     0,    14,   526,   527,   528,   529,   530,   531,   532,   533,
   534,   535,   536,   537,   538,   539,     0,     0,     0,     0,
     0,     0,     0,     0,    77,     0,     0,     0,     0,    78,
     0,     0,    79,     0,     0,    15,     0,    16,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,   272,     0,
     0,    17,    18,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,   279,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,   280,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,   281,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,   518,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,   640,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,   642,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,   643,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
   644,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,   754,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,   903,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,   905,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,   907,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,   908,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,   909,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,  1148,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,  1156,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,  1296,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
  1320,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,  1323,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,  1329,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,  1412,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,  1413,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,  1414,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,  1415,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,  1484,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,  1485,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,  1486,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
  1487,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,  1495,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,  1548,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,     0,  1550,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,     0,     0,
   144,     0,     0,     0,  1551,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,     0,     0,     0,  1559,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
     0,     0,   144,     0,     0,     0,  1560,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,     0,     0,   144,     0,     0,     0,  1561,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,     0,     0,   144,     0,     0,     0,  1579,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,     0,     0,   144,     0,     0,     0,  1580,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,     0,     0,   144,     0,     0,     0,
  1583,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,     0,     0,   144,     0,     0,
     0,  1590,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,     0,     0,   144,     0,
     0,     0,  1592,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,   456,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,   543,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,   719,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,   912,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1048,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1190,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1192,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1193,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1194,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1195,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1410,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1526,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1527,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1528,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1529,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1555,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1567,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1568,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1569,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1584,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1586,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,     0,     0,   144,
     0,     0,  1594,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,   211,     0,     0,     0,   144,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,   262,     0,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,   263,     0,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,   264,     0,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,   265,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,   266,     0,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,   267,
     0,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,   268,     0,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,   269,     0,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
   270,     0,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,   271,     0,   144,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,   273,     0,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,   274,     0,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,   275,     0,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,   276,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,   277,     0,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,   278,
     0,   144,   129,   130,   131,   132,   133,     0,   134,   135,
   136,   137,     0,     0,   138,   139,   140,   141,   142,     0,
     0,     0,   143,     0,     0,     0,   447,     0,   144,   129,
   130,   131,   132,   133,     0,   134,   135,   136,   137,     0,
     0,   138,   139,   140,   141,   142,     0,     0,     0,   143,
     0,     0,     0,   448,     0,   144,   129,   130,   131,   132,
   133,     0,   134,   135,   136,   137,     0,     0,   138,   139,
   140,   141,   142,     0,     0,     0,   143,     0,     0,     0,
   449,     0,   144,   129,   130,   131,   132,   133,     0,   134,
   135,   136,   137,     0,     0,   138,   139,   140,   141,   142,
     0,     0,     0,   143,     0,     0,     0,   450,     0,   144,
   129,   130,   131,   132,   133,     0,   134,   135,   136,   137,
     0,     0,   138,   139,   140,   141,   142,     0,     0,     0,
   143,     0,     0,     0,   452,     0,   144,   129,   130,   131,
   132,   133,     0,   134,   135,   136,   137,     0,     0,   138,
   139,   140,   141,   142,     0,     0,     0,   143,     0,     0,
     0,   672,     0,   144,   129,   130,   131,   132,   133,     0,
   134,   135,   136,   137,     0,     0,   138,   139,   140,   141,
   142,     0,     0,     0,   143,     0,     0,     0,   848,     0,
   144,   129,   130,   131,   132,   133,     0,   134,   135,   136,
   137,     0,     0,   138,   139,   140,   141,   142,     0,     0,
     0,   143,     0,     0,     0,  1493,     0,   144,   129,   130,
   131,   132,   133,     0,   134,   135,   136,   137,     0,     0,
   138,   139,   140,   141,   142,     0,     0,     0,   143,     0,
     0,     0,  1532,     0,   144,   129,   130,   131,   132,   133,
     0,   134,   135,   136,   137,     0,     0,   138,   139,   140,
   141,   142,     0,     0,     0,   143,     0,     0,     0,     0,
     0,   144,   692,   693,   694,   695,   696,   697,   698,   699,
   700,   701,     0,     0,   702,   703,   704,   705,   706,   707,
     0,     0,   708,     0,     0,     0,  1204,   692,   693,   694,
   695,   696,   697,   698,   699,   700,   701,     0,     0,   702,
   703,   704,   705,   706,   707,     0,     0,   708,     0,   794,
   692,   693,   694,   695,   696,   697,   698,   699,   700,   701,
     0,     0,   702,   703,   704,   705,   706,   707,     0,     0,
   708,   694,   695,   696,   697,   698,   699,   700,   701,     0,
     0,   702,   703,   704,   705,   706,   707,     0,     0,   708,
   695,   696,   697,   698,   699,   700,   701,     0,     0,   702,
   703,   704,   705,   706,   707,     0,     0,   708
};

static const short yycheck[] = {    24,
    83,   249,   325,   426,   252,   253,   254,   390,   475,   865,
   490,   524,   558,   360,     5,   788,   529,     5,   401,   792,
     3,    12,     5,     5,    12,     5,     3,   203,     5,     5,
     6,   645,   208,     9,     5,   418,     0,     3,   421,     5,
     5,   424,   586,   587,   588,   589,     5,     5,     3,     5,
   664,    57,    77,    78,    79,    80,     5,    11,     5,    64,
   407,    51,    45,   386,    64,    12,    66,    67,   613,    51,
    76,    76,   179,    63,   179,    46,   101,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,   119,   120,     5,     5,     5,     5,
    47,   208,    51,    12,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,   142,   143,   586,
   587,   588,   589,   147,   148,    79,     5,   204,     5,   675,
     5,   677,     5,   210,   678,    12,     5,    12,    96,    12,
     5,     5,   489,    51,     5,     7,   203,   230,     7,   693,
   694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
   704,   705,   706,   707,   708,   488,   710,   940,  1247,   516,
     7,     7,     7,  1252,     7,   720,   208,    11,   179,  1258,
   203,   200,    51,     7,    45,   208,  1265,   206,   213,   214,
    51,   208,  1271,  1272,   203,   192,   193,   194,   195,   208,
     5,   204,   203,   209,   209,   819,     5,   210,     7,   209,
   208,   678,   188,   210,   987,   191,   193,   208,   209,   209,
   208,   209,   204,   203,   206,   208,   693,   694,   695,   696,
   697,   698,   699,   700,   701,   702,   703,   704,   705,   706,
   707,   708,   208,   710,   209,    79,    51,   272,   203,   208,
   203,   209,   208,   797,   279,   280,   281,   206,     3,     4,
     5,   286,   209,   288,   347,   290,   291,   292,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    11,     3,     4,     5,     6,   206,   208,
   209,   208,   208,   208,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,   208,
   797,   208,   209,   208,   209,   208,   209,   206,   363,   208,
    49,    11,    51,   208,   208,   206,   208,     5,     6,   208,
   375,     9,    60,    61,     3,   291,     5,   382,   871,   208,
     5,    79,   204,    50,    64,    66,    66,   208,   210,   203,
     8,   208,   208,   208,    11,   208,    76,   204,   208,    66,
   203,    66,   208,   210,   731,   208,  1465,    95,    89,    76,
    77,    76,    63,   937,    65,    66,   208,    84,   106,    86,
   723,   945,    76,   145,    78,   752,    91,   203,    76,    79,
    95,    85,   203,   438,   204,   440,   441,   442,     8,   204,
   210,   768,   769,   770,   771,   210,    66,   452,   775,   100,
   101,   102,   103,   104,   105,   106,    76,  1516,    78,   204,
   108,    86,    79,   526,   204,   210,   471,   115,   193,   385,
   210,    96,   204,   198,     7,  1228,   201,  1230,   210,   208,
   209,  1540,   487,    64,   209,     5,    66,    68,    68,   118,
   937,   203,    12,    68,     5,    76,     7,   203,   945,    79,
   194,   195,   196,   197,   193,   203,   200,   203,     5,   198,
     7,    91,   201,   518,   209,   210,   976,   206,     3,   208,
     5,   209,   527,   528,    44,   530,   106,   208,   209,   209,
   535,   536,     5,   538,   203,   164,   764,   765,   766,   767,
   115,   457,   209,  1296,   209,    96,    97,    98,    99,   209,
   778,   954,   879,   203,   203,   209,   883,   203,   209,   134,
   135,   209,   180,   181,   182,   183,   184,   185,   186,   187,
   188,   189,  1408,  1409,   192,   193,   194,   195,   196,   197,
   983,   203,   200,     5,   208,   209,   203,   650,   651,   209,
   917,     5,   919,   956,   203,   175,   208,   209,   203,   926,
   175,   208,   209,   203,   609,   833,   834,     5,     8,  1012,
   180,   181,   182,   183,   184,     5,   186,   187,   188,   189,
   208,   209,   192,   193,   194,   195,   196,   203,   209,   209,
   200,   859,   959,   638,   209,   640,   206,   642,   643,   644,
   645,   208,   209,   203,   117,   203,   119,   120,   121,   210,
   123,   124,   125,   126,   208,   209,   203,   130,   209,   664,
   133,   203,   667,   136,   203,   893,   139,   140,   208,   209,
   143,   208,   209,  1426,   203,   148,   149,  1430,   209,   210,
   208,   209,   203,  1207,   203,    51,    52,    53,    54,    55,
    56,    57,    58,    59,   208,   209,    62,   203,  1191,   203,
    66,   208,   209,   176,  1107,     7,    78,  1233,  1234,  1235,
     5,    83,   717,    79,   203,    87,    88,    89,     7,   117,
   203,   119,   120,   121,   210,   123,   124,   125,   126,   208,
   209,     7,   130,   179,   115,   133,   209,   118,   136,   209,
   210,   139,   140,   209,   210,   143,   127,   128,   129,   754,
   148,   149,   203,  1506,   209,   210,   208,   209,   208,  1062,
  1207,    69,    70,    71,    72,    73,    74,   208,   996,   208,
    68,   209,   210,  1001,   209,   210,   209,   210,   176,   208,
   180,   181,   182,   183,   184,   208,   186,   187,   188,   189,
  1093,   208,   192,   193,   194,   195,   196,  1100,     5,  1102,
   200,   209,   210,   209,   210,   204,   206,   870,   179,   872,
   108,   209,   208,   209,   819,  1142,   179,   115,   116,  1146,
    66,   822,   823,  1150,     5,  1318,  1153,  1320,   209,  1132,
    76,  1158,   532,   533,  1137,     5,   134,   209,   208,   137,
   138,  1168,     5,   209,   208,  1073,     5,   208,     5,    63,
     5,    65,    66,  1081,   208,  1182,   208,   208,  1351,   179,
   204,   203,    76,   109,   110,   111,   112,   113,   114,  1196,
  1197,     5,  1199,     5,   208,   208,     5,   175,    92,    93,
    94,   208,   887,     5,   889,   192,   193,   194,   195,   196,
  1217,   208,   106,   200,     5,     5,     5,   208,   903,   206,
   905,   209,   907,   908,   909,  1431,     5,     5,   204,     5,
   160,   209,  1405,     3,     4,     5,   208,   208,  1411,  1147,
   208,   208,   204,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,     7,     3,     4,     5,     6,   203,   208,
     7,     7,   203,   209,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,   203,
   203,     7,     7,     7,   209,   209,  1323,     8,   208,   179,
    49,     7,  1329,     3,     4,     5,     5,   208,  1236,     7,
   100,   208,     7,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
    40,    41,    42,   209,   192,   193,   194,   195,   196,   197,
     7,    76,   200,    78,    79,    80,    81,    82,    83,     7,
     7,     3,     4,     5,     7,     5,     7,   210,     7,     7,
  1075,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,   186,     7,  1461,   206,
   100,     7,   192,   193,     7,     5,     7,     5,   198,  1436,
     7,   201,     7,     7,   204,   205,   206,   207,   208,   100,
   101,   102,   103,   104,   105,   106,    86,    76,     7,    89,
    90,    91,    92,    93,     7,    95,     7,   209,   208,    63,
  1145,    65,    66,  1148,   193,  1472,  1151,  1152,   210,   198,
     5,  1156,   201,     5,  1159,  1160,  1161,  1162,     5,   208,
  1165,     7,  1167,  1566,  1169,   208,   115,  1172,   204,   203,
   203,  1176,  1177,   203,  1179,     5,   100,   101,   102,   103,
   104,   105,   106,     3,   209,   206,   186,     5,   208,     8,
   150,   203,   192,   193,     7,   144,     6,   146,   198,   115,
   208,   201,   118,   208,   208,   208,   206,   207,   208,   210,
   203,   127,   128,   203,   203,   131,   132,   166,   188,   161,
   200,     3,   164,   180,   181,   182,   183,   184,   209,   186,
   187,   188,   189,   208,   203,   192,   193,   194,   195,   196,
    76,   203,   203,   200,   203,   203,  1474,   203,   203,   206,
     6,   193,     7,  1481,   208,    91,   198,   208,   203,   201,
   209,   186,   187,   188,   189,     5,   208,   192,   193,   194,
   195,   196,   197,   109,   208,   200,     5,     5,   208,  1284,
     5,  1286,  1287,  1288,  1289,   209,   194,   195,   196,     5,
   204,   204,   200,   209,     3,   204,   203,   209,   206,     5,
     5,     3,     4,     5,     5,    63,   142,    65,     5,     5,
  1538,    13,    14,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,     5,     5,   208,   208,
     5,  1404,   100,   101,   102,   103,   104,   105,   106,   151,
   152,   153,   154,   155,   156,   157,   158,   159,     5,     5,
     5,     5,  1367,  1368,  1369,  1370,  1371,     3,     4,     5,
     3,   204,     7,   209,     5,     5,     5,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,     5,     3,     3,     7,     7,  1412,  1413,  1414,
  1415,   117,     5,   119,   120,   121,     5,   123,   124,   125,
   126,     5,     5,     5,   130,     5,     5,   133,     5,  1434,
   136,     5,  1437,   139,   140,     5,   203,   143,   203,   208,
     5,   209,   148,   149,     7,     7,     7,     7,     7,     7,
     7,   209,   117,     7,   119,   120,   121,     3,   123,   124,
   125,   126,     7,     7,     7,   130,  1471,     7,   133,     7,
   176,   136,     7,     7,   139,   140,     5,   210,   143,  1484,
  1485,  1486,  1487,   148,   149,   204,   210,     7,   203,   203,
  1495,   193,    89,     7,     7,     7,   198,   208,     5,   201,
   203,     7,     7,   209,     7,     7,   208,     7,     7,     7,
     5,   176,   182,   183,   184,     7,   186,   187,   188,   189,
     7,     5,   192,   193,   194,   195,   196,     7,     7,  1534,
   200,  1536,  1537,     7,     7,     7,   206,     7,  1543,     7,
     7,     7,     5,  1548,   209,  1550,  1551,     5,     5,   203,
     5,     5,   204,   204,  1559,  1560,  1561,   193,     7,     7,
     7,     7,   198,     7,     7,   201,     7,     7,  1573,   210,
  1575,   210,   208,   210,  1579,  1580,   204,   204,  1583,     7,
     7,   204,     5,  1588,   210,  1590,   210,  1592,   117,   210,
   119,   120,   121,   208,   123,   124,   125,   126,   210,   210,
   210,   130,   210,     5,   133,     5,     7,   136,     7,    91,
   139,   140,     7,   204,   143,     7,     5,     7,     5,   148,
   149,     7,   117,     7,   119,   120,   121,     7,   123,   124,
   125,   126,     7,     7,     7,   130,   208,   208,   133,   208,
   208,   136,     5,     7,   139,   140,     3,   176,   143,   204,
     5,     7,   208,   148,   149,   208,   208,   208,   208,   208,
   117,   208,   119,   120,   121,   204,   123,   124,   125,   126,
     5,   208,   204,   130,     5,     5,   133,     5,   203,   136,
   209,   176,   139,   140,     7,     5,   143,     5,   204,   210,
     7,   148,   149,   204,   117,   210,   119,   120,   121,     7,
   123,   124,   125,   126,     7,   209,     7,   130,     7,     7,
   133,   204,   208,   136,   209,   204,   139,   140,   208,   176,
   143,   204,     7,   204,   209,   148,   149,     5,   117,     5,
   119,   120,   121,   209,   123,   124,   125,   126,     7,     7,
   209,   130,     7,     7,   133,     7,     7,   136,     7,     7,
   139,   140,   209,   176,   143,     7,     7,     7,   210,   148,
   149,    63,   117,    65,   119,   120,   121,     7,   123,   124,
   125,   126,     7,     7,     7,   130,     7,     5,   133,   210,
    90,   136,     7,   204,   139,   140,   209,   176,   143,   204,
   210,   210,   210,   148,   149,     7,   122,   204,   100,   101,
   102,   103,   104,   105,   106,   210,   210,     7,     7,     5,
   208,     5,     3,     4,     5,     7,     5,     5,   203,     5,
   209,   176,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,     3,     4,     5,
   209,   204,     5,   204,   209,   204,   208,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,   180,   181,   182,   183,   184,     7,   186,   187,
   188,   189,   204,     5,   192,   193,   194,   195,   196,     7,
     7,     7,   200,     7,     7,     7,     7,   209,   206,     7,
     7,   180,   181,   182,   183,   184,     7,   186,   187,   188,
   189,   208,     7,   192,   193,   194,   195,   196,     7,     7,
     7,   200,   204,   208,    43,   209,     7,   206,   208,     7,
   180,   181,   182,   183,   184,     7,   186,   187,   188,   189,
   107,   208,   192,   193,   194,   195,   196,     5,     7,   208,
   200,   208,     0,   209,   209,   208,   206,   208,   180,   181,
   182,   183,   184,     7,   186,   187,   188,   189,     0,   209,
   192,   193,   194,   195,   196,   209,   183,   184,   200,   186,
   187,   188,   189,   208,   206,   192,   193,   194,   195,   196,
     7,   851,   193,   200,   596,   726,   462,   198,   930,   206,
   201,  1042,  1187,   430,  1355,   206,   186,   187,   188,   189,
   508,     7,   192,   193,   194,   195,   196,    99,   189,   435,
   200,   832,   261,   213,    -1,    -1,   206,   193,    -1,    -1,
    -1,    -1,   198,    -1,    -1,   201,    -1,   203,     7,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,     7,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,     7,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,     7,    -1,    -1,   200,    -1,
    -1,    -1,    -1,    -1,   206,    -1,   180,   181,   182,   183,
   184,    -1,   186,   187,   188,   189,     7,    -1,   192,   193,
   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,
    -1,    -1,   206,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,     7,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,   180,   181,   182,   183,   184,   206,
   186,   187,   188,   189,     7,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
   206,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
   189,     7,    -1,   192,   193,   194,   195,   196,    -1,    -1,
    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
   180,   181,   182,   183,   184,    -1,   186,   187,   188,   189,
     7,    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,
   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,   180,
   181,   182,   183,   184,   206,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,   180,   181,   182,   183,
   184,    -1,   186,   187,   188,   189,    -1,    -1,   192,   193,
   194,   195,   196,    -1,    -1,    -1,   200,   180,   181,   182,
   183,   184,   206,   186,   187,   188,   189,     8,    -1,   192,
   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,    -1,
    -1,    -1,    -1,   206,   180,   181,   182,   183,   184,    -1,
   186,   187,   188,   189,    -1,    -1,   192,   193,   194,   195,
   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,
   206,    -1,    -1,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
     3,     4,     5,   200,    -1,    -1,    -1,    -1,    -1,   206,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,     3,
     4,     5,     6,    -1,    -1,    48,    -1,    -1,    51,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,     3,     4,     5,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,    37,   180,
   181,   182,   183,   184,    -1,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,
    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    57,     5,
    -1,    -1,    -1,    -1,    10,    -1,    12,    -1,   180,   181,
   182,   183,   184,   185,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,   197,    -1,    -1,   200,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,   210,    -1,
    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,
   193,    -1,   111,    -1,    -1,   198,    -1,    63,   201,    65,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,   193,
    -1,   150,    -1,    -1,   198,    -1,    -1,   201,    -1,    -1,
    -1,   107,   161,   162,   163,   164,   165,   166,   167,   168,
   169,   170,   171,   172,   173,   174,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,   198,
    -1,    -1,   201,    -1,    -1,   141,    -1,   143,   180,   181,
   182,   183,   184,    -1,   186,   187,   188,   189,    -1,    -1,
   192,   193,   194,   195,   196,    -1,    -1,    -1,   200,    -1,
    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,   210,    -1,
    -1,   177,   178,   180,   181,   182,   183,   184,    -1,   186,
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
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,
    -1,    -1,   209,   180,   181,   182,   183,   184,    -1,   186,
   187,   188,   189,    -1,    -1,   192,   193,   194,   195,   196,
    -1,    -1,    -1,   200,    -1,   202,    -1,    -1,    -1,   206,
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
   195,   196,    -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,
    -1,   206,   180,   181,   182,   183,   184,   185,   186,   187,
   188,   189,    -1,    -1,   192,   193,   194,   195,   196,   197,
    -1,    -1,   200,    -1,    -1,    -1,   204,   180,   181,   182,
   183,   184,   185,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,   197,    -1,    -1,   200,    -1,   202,
   180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
    -1,    -1,   192,   193,   194,   195,   196,   197,    -1,    -1,
   200,   182,   183,   184,   185,   186,   187,   188,   189,    -1,
    -1,   192,   193,   194,   195,   196,   197,    -1,    -1,   200,
   183,   184,   185,   186,   187,   188,   189,    -1,    -1,   192,
   193,   194,   195,   196,   197,    -1,    -1,   200
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
#line 5190 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 490:
#line 5199 "GetDP.y"
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
case 491:
#line 5211 "GetDP.y"
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
case 492:
#line 5234 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 493:
#line 5235 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 494:
#line 5236 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 495:
#line 5237 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 496:
#line 5243 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 497:
#line 5245 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 498:
#line 5251 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 499:
#line 5257 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 500:
#line 5264 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 501:
#line 5273 "GetDP.y"
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
case 502:
#line 5287 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 503:
#line 5295 "GetDP.y"
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
case 504:
#line 5308 "GetDP.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 505:
#line 5318 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 506:
#line 5327 "GetDP.y"
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
case 507:
#line 5341 "GetDP.y"
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
case 508:
#line 5360 "GetDP.y"
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
case 509:
#line 5382 "GetDP.y"
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
case 510:
#line 5402 "GetDP.y"
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
case 512:
#line 5424 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 513:
#line 5431 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 514:
#line 5438 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 515:
#line 5445 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 516:
#line 5449 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 517:
#line 5453 "GetDP.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 518:
#line 5457 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 519:
#line 5461 "GetDP.y"
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
case 520:
#line 5471 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 521:
#line 5476 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 522:
#line 5481 "GetDP.y"
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
case 523:
#line 5501 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 524:
#line 5508 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 525:
#line 5515 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(Adaption_Type);
      }
    ;
    break;}
case 526:
#line 5524 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(Sort_Type);
      }
    ;
    break;}
case 527:
#line 5533 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 528:
#line 5540 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 529:
#line 5547 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 530:
#line 5551 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 531:
#line 5559 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 532:
#line 5563 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
    ;
    break;}
case 533:
#line 5575 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 534:
#line 5581 "GetDP.y"
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
case 535:
#line 5628 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 537:
#line 5639 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 538:
#line 5642 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 539:
#line 5648 "GetDP.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 540:
#line 5649 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 542:
#line 5657 "GetDP.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 543:
#line 5660 "GetDP.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 544:
#line 5669 "GetDP.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 545:
#line 5672 "GetDP.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 546:
#line 5683 "GetDP.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 547:
#line 5689 "GetDP.y"
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
case 548:
#line 5700 "GetDP.y"
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
case 549:
#line 5719 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 550:
#line 5725 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 551:
#line 5731 "GetDP.y"
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
case 552:
#line 5743 "GetDP.y"
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
case 555:
#line 5794 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 556:
#line 5800 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 557:
#line 5806 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 558:
#line 5817 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 559:
#line 5818 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 560:
#line 5819 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 561:
#line 5820 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 562:
#line 5821 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 563:
#line 5822 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 564:
#line 5823 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 565:
#line 5824 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 566:
#line 5825 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 567:
#line 5826 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 568:
#line 5827 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 569:
#line 5828 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 570:
#line 5829 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 571:
#line 5830 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 572:
#line 5831 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 573:
#line 5832 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 574:
#line 5833 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 575:
#line 5834 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 576:
#line 5835 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 577:
#line 5836 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 578:
#line 5837 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 579:
#line 5840 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 580:
#line 5841 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 581:
#line 5842 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 582:
#line 5843 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 583:
#line 5844 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 584:
#line 5845 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 585:
#line 5846 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 586:
#line 5847 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 587:
#line 5848 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 588:
#line 5849 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 589:
#line 5850 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 590:
#line 5851 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 591:
#line 5852 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 592:
#line 5853 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 593:
#line 5854 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 594:
#line 5855 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 595:
#line 5856 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 596:
#line 5857 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 597:
#line 5858 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 598:
#line 5859 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 599:
#line 5860 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 600:
#line 5861 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 601:
#line 5862 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 602:
#line 5863 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 603:
#line 5864 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 604:
#line 5865 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 605:
#line 5866 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 606:
#line 5867 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 607:
#line 5868 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 608:
#line 5869 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 609:
#line 5870 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 610:
#line 5871 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 611:
#line 5872 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 612:
#line 5873 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 613:
#line 5874 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 614:
#line 5875 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 615:
#line 5876 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 616:
#line 5877 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 617:
#line 5878 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 618:
#line 5879 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 619:
#line 5884 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 620:
#line 5885 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 621:
#line 5886 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 622:
#line 5887 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 623:
#line 5888 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 624:
#line 5889 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 625:
#line 5890 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 626:
#line 5892 "GetDP.y"
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
case 627:
#line 5911 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 628:
#line 5914 "GetDP.y"
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
case 629:
#line 5929 "GetDP.y"
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
#line 5943 "GetDP.y"



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


