
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
#define	tDefineConstant	268
#define	tPi	269
#define	t0D	270
#define	t1D	271
#define	t2D	272
#define	t3D	273
#define	tExp	274
#define	tLog	275
#define	tLog10	276
#define	tSqrt	277
#define	tSin	278
#define	tAsin	279
#define	tCos	280
#define	tAcos	281
#define	tTan	282
#define	tAtan	283
#define	tAtan2	284
#define	tSinh	285
#define	tCosh	286
#define	tTanh	287
#define	tFabs	288
#define	tFloor	289
#define	tCeil	290
#define	tFmod	291
#define	tModulo	292
#define	tHypot	293
#define	tSolidAngle	294
#define	tTrace	295
#define	tOrder	296
#define	tCrossProduct	297
#define	tMHTimeIntegration	298
#define	tGroup	299
#define	tDefineGroup	300
#define	tAll	301
#define	tInSupport	302
#define	tDefineFunction	303
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
#define	tBreak	380
#define	tTimeLoopTheta	381
#define	tTime0	382
#define	tTimeMax	383
#define	tTheta	384
#define	tTimeLoopNewmark	385
#define	tBeta	386
#define	tGamma	387
#define	tIterativeLoop	388
#define	tNbrMaxIteration	389
#define	tRelaxationFactor	390
#define	tIterativeTimeReduction	391
#define	tDivisionCoefficient	392
#define	tChangeOfState	393
#define	tChangeOfCoordinates	394
#define	tSystemCommand	395
#define	tPostProcessing	396
#define	tNameOfSystem	397
#define	tPostOperation	398
#define	tNameOfPostProcessing	399
#define	tUsingPost	400
#define	tAppend	401
#define	tPlot	402
#define	tPrint	403
#define	tPrintGroup	404
#define	tWrite	405
#define	tAdapt	406
#define	tOnGlobal	407
#define	tOnRegion	408
#define	tOnElementsOf	409
#define	tOnGrid	410
#define	tOnSection	411
#define	tOnPoint	412
#define	tOnLine	413
#define	tOnPlane	414
#define	tOnBox	415
#define	tWithArgument	416
#define	tFile	417
#define	tDepth	418
#define	tDimension	419
#define	tTimeStep	420
#define	tHarmonicToTime	421
#define	tFormat	422
#define	tHeader	423
#define	tFooter	424
#define	tSkin	425
#define	tSmoothing	426
#define	tTarget	427
#define	tSort	428
#define	tIso	429
#define	tNoNewLine	430
#define	tFlag	431
#define	tHelp	432
#define	tCpu	433
#define	tCheck	434
#define	tDEF	435
#define	tOR	436
#define	tAND	437
#define	tEQUAL	438
#define	tNOTEQUAL	439
#define	tAPPROXEQUAL	440
#define	tLESSOREQUAL	441
#define	tGREATEROREQUAL	442
#define	tLESSLESS	443
#define	tGREATERGREATER	444
#define	tCROSSPRODUCT	445
#define	UNARYPREC	446

#line 1 "GetDP.y"

/* $Id: GetDP.tab.c,v 1.31 2001-08-04 03:33:36 geuzaine Exp $ */

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



#define	YYFINAL		1603
#define	YYFLAG		-32768
#define	YYNTBASE	213

#define YYTRANSLATE(x) ((unsigned)(x) <= 446 ? yytranslate[x] : 398)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   200,     2,   208,   209,   198,     2,     2,   203,
   204,   196,   194,   212,   195,   207,   197,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   188,
     2,   190,   182,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   205,     2,   206,   202,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   210,     2,   211,     2,     2,     2,     2,     2,
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
   177,   178,   179,   180,   181,   183,   184,   185,   186,   187,
   189,   191,   192,   193,   199,   201
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     1,     4,     5,     6,    10,    15,    20,    25,    30,
    35,    40,    45,    50,    55,    60,    62,    64,    67,    69,
    72,    76,    80,    84,    88,    92,    96,    99,   102,   106,
   110,   114,   118,   122,   126,   130,   134,   138,   142,   146,
   147,   150,   151,   152,   156,   161,   167,   168,   175,   181,
   183,   184,   185,   193,   196,   198,   201,   203,   205,   207,
   209,   210,   214,   219,   221,   223,   227,   228,   232,   237,
   239,   243,   249,   251,   256,   260,   261,   265,   272,   273,
   275,   280,   281,   284,   288,   289,   292,   298,   305,   313,
   315,   316,   320,   325,   330,   331,   334,   335,   339,   341,
   345,   346,   349,   351,   352,   353,   361,   365,   369,   376,
   380,   384,   388,   392,   396,   400,   404,   408,   412,   416,
   420,   424,   428,   432,   435,   438,   441,   445,   447,   451,
   454,   456,   459,   460,   466,   467,   479,   484,   489,   490,
   498,   505,   508,   511,   514,   517,   521,   524,   528,   531,
   535,   537,   541,   542,   546,   553,   554,   559,   560,   563,
   567,   572,   573,   578,   579,   582,   586,   590,   595,   596,
   601,   602,   605,   609,   613,   618,   619,   624,   625,   628,
   632,   636,   641,   642,   647,   648,   651,   655,   659,   663,
   667,   671,   675,   676,   679,   683,   685,   686,   689,   693,
   698,   702,   707,   713,   714,   719,   720,   723,   727,   731,
   735,   739,   743,   747,   755,   759,   763,   767,   771,   775,
   783,   791,   799,   800,   803,   807,   809,   810,   813,   817,
   822,   826,   831,   836,   841,   846,   847,   852,   853,   856,
   860,   864,   869,   874,   882,   886,   890,   894,   895,   896,
   897,   916,   917,   922,   923,   926,   930,   934,   938,   940,
   944,   945,   949,   951,   955,   956,   960,   961,   966,   967,
   970,   974,   978,   982,   983,   988,   989,   992,   996,  1002,
  1006,  1010,  1015,  1016,  1019,  1023,  1025,  1026,  1029,  1033,
  1038,  1042,  1047,  1052,  1053,  1058,  1059,  1062,  1066,  1070,
  1074,  1078,  1079,  1086,  1090,  1091,  1097,  1101,  1105,  1109,
  1113,  1114,  1118,  1119,  1122,  1127,  1132,  1137,  1142,  1143,
  1146,  1150,  1154,  1158,  1159,  1162,  1166,  1170,  1174,  1178,
  1179,  1182,  1183,  1184,  1194,  1198,  1202,  1206,  1207,  1210,
  1214,  1215,  1216,  1226,  1227,  1229,  1231,  1233,  1235,  1237,
  1239,  1244,  1248,  1249,  1252,  1256,  1258,  1259,  1262,  1266,
  1271,  1276,  1277,  1283,  1284,  1289,  1290,  1293,  1297,  1301,
  1305,  1309,  1313,  1317,  1321,  1325,  1328,  1332,  1333,  1337,
  1339,  1343,  1344,  1348,  1349,  1352,  1356,  1360,  1365,  1370,
  1375,  1380,  1386,  1392,  1395,  1403,  1415,  1423,  1431,  1441,
  1451,  1463,  1477,  1493,  1505,  1519,  1520,  1528,  1529,  1537,
  1545,  1551,  1557,  1559,  1561,  1562,  1565,  1569,  1573,  1576,
  1577,  1580,  1584,  1588,  1592,  1596,  1601,  1602,  1605,  1609,
  1613,  1617,  1621,  1625,  1630,  1631,  1634,  1638,  1642,  1646,
  1650,  1655,  1656,  1659,  1663,  1667,  1671,  1675,  1679,  1684,
  1689,  1694,  1695,  1700,  1701,  1704,  1708,  1712,  1716,  1720,
  1724,  1728,  1729,  1732,  1736,  1738,  1739,  1742,  1746,  1751,
  1756,  1760,  1765,  1766,  1771,  1772,  1775,  1779,  1784,  1785,
  1791,  1797,  1798,  1801,  1802,  1809,  1813,  1814,  1819,  1823,
  1827,  1828,  1831,  1835,  1837,  1838,  1841,  1845,  1849,  1853,
  1857,  1862,  1863,  1872,  1873,  1874,  1878,  1886,  1894,  1895,
  1906,  1910,  1917,  1919,  1921,  1923,  1925,  1926,  1930,  1932,
  1935,  1938,  1951,  1954,  1970,  1975,  1988,  2006,  2029,  2042,
  2043,  2046,  2050,  2055,  2060,  2064,  2067,  2070,  2074,  2078,
  2082,  2086,  2090,  2094,  2098,  2102,  2106,  2110,  2114,  2118,
  2124,  2127,  2131,  2141,  2142,  2145,  2150,  2155,  2161,  2162,
  2166,  2172,  2178,  2180,  2182,  2184,  2186,  2188,  2190,  2192,
  2194,  2196,  2198,  2200,  2202,  2204,  2206,  2208,  2210,  2212,
  2214,  2216,  2218,  2220,  2222,  2226,  2229,  2232,  2236,  2240,
  2244,  2248,  2252,  2256,  2260,  2264,  2268,  2272,  2276,  2280,
  2284,  2288,  2293,  2298,  2303,  2308,  2313,  2318,  2323,  2328,
  2333,  2338,  2345,  2350,  2355,  2360,  2365,  2370,  2375,  2382,
  2389,  2396,  2402,  2405,  2407,  2409,  2411,  2413,  2415,  2417,
  2419,  2421,  2422,  2424,  2426,  2430,  2432,  2434,  2438,  2442,
  2446,  2452,  2456,  2461,  2466,  2473,  2475,  2477
};

static const short yyrhs[] = {    -1,
   214,   215,     0,     0,     0,   215,   216,   217,     0,    45,
   210,   220,   211,     0,    79,   210,   240,   211,     0,    50,
   210,   274,   211,     0,    63,   210,   259,   211,     0,    65,
   210,   265,   211,     0,    75,   210,   281,   211,     0,    90,
   210,   304,   211,     0,   107,   210,   330,   211,     0,   142,
   210,   360,   211,     0,   144,   210,   372,   211,     0,   376,
     0,   389,     0,    10,   397,     0,   218,     0,   178,     7,
     0,   178,   149,     7,     0,   178,   180,     7,     0,   178,
    21,     7,     0,   178,   179,     7,     0,   178,   178,     7,
     0,   178,     5,     7,     0,   179,     7,     0,   180,     7,
     0,   180,    45,     7,     0,   180,    79,     7,     0,   180,
    50,     7,     0,   180,    63,     7,     0,   180,    65,     7,
     0,   180,    75,     7,     0,   180,    90,     7,     0,   180,
   107,     7,     0,   180,   142,     7,     0,   180,   144,     7,
     0,   180,     3,     7,     0,     0,   219,   380,     0,     0,
     0,   220,   221,   222,     0,     5,   181,   224,     7,     0,
     5,   239,   181,   224,     7,     0,     0,     5,   237,   181,
   223,   224,     7,     0,    46,   205,   235,   206,     7,     0,
   389,     0,     0,     0,   228,   205,   225,   229,   226,   230,
   206,     0,   208,   232,     0,   224,     0,     5,   238,     0,
    51,     0,     5,     0,   232,     0,    47,     0,     0,   236,
   231,   232,     0,   236,    48,     5,   238,     0,     5,     0,
   234,     0,   210,   233,   211,     0,     0,   233,   236,   234,
     0,   233,   236,   195,   234,     0,     3,     0,     3,     8,
     3,     0,     3,     8,     3,     8,   392,     0,     5,     0,
     5,   210,   392,   211,     0,     5,   210,   211,     0,     0,
   235,   236,     5,     0,   235,   236,     5,   210,   392,   211,
     0,     0,   212,     0,   210,   208,   392,   211,     0,     0,
   210,   211,     0,   210,   392,   211,     0,     0,   240,   241,
     0,    49,   205,   242,   206,     7,     0,     5,   205,   206,
   181,   243,     7,     0,     5,   205,   227,   206,   181,   243,
     7,     0,   389,     0,     0,   242,   236,     5,     0,    11,
   205,   392,   206,     0,    79,   205,     5,   206,     0,     0,
   244,   247,     0,     0,   210,   246,   211,     0,   243,     0,
   246,   212,   243,     0,     0,   248,   249,     0,   252,     0,
     0,     0,   249,   182,   250,   249,     8,   251,   249,     0,
   249,   196,   249,     0,   249,   199,   249,     0,    43,   205,
   249,   212,   249,   206,     0,   249,   197,   249,     0,   249,
   194,   249,     0,   249,   195,   249,     0,   249,   198,   249,
     0,   249,   202,   249,     0,   249,   188,   249,     0,   249,
   190,   249,     0,   249,   189,   249,     0,   249,   191,   249,
     0,   249,   185,   249,     0,   249,   186,   249,     0,   249,
   187,   249,     0,   249,   184,   249,     0,   249,   183,   249,
     0,   195,   249,     0,   194,   249,     0,   200,   249,     0,
   203,   249,   204,     0,   393,     0,   391,   256,   258,     0,
     5,   329,     0,   329,     0,   329,   256,     0,     0,   100,
   253,   205,   247,   206,     0,     0,    44,   254,   205,     3,
   212,   392,   212,   247,   212,   247,   206,     0,    40,   205,
   329,   206,     0,    42,   205,   329,   206,     0,     0,    41,
   255,   205,   247,   212,   227,   206,     0,   188,     5,   190,
   205,   247,   206,     0,   209,     5,     0,   209,   166,     0,
   209,   118,     0,   209,     3,     0,   252,   208,     3,     0,
   208,     3,     0,   205,   207,   206,     0,   205,   206,     0,
   205,   257,   206,     0,   249,     0,   257,   212,   249,     0,
     0,   210,   395,   211,     0,   210,    51,   205,   227,   206,
   211,     0,     0,   259,   210,   260,   211,     0,     0,   260,
   261,     0,    76,     5,     7,     0,    64,   210,   262,   211,
     0,     0,   262,   210,   263,   211,     0,     0,   263,   264,
     0,    51,   227,     7,     0,    51,    47,     7,     0,    63,
     5,   258,     7,     0,     0,   265,   210,   266,   211,     0,
     0,   266,   267,     0,    76,     5,     7,     0,    68,   243,
     7,     0,    64,   210,   268,   211,     0,     0,   268,   210,
   269,   211,     0,     0,   269,   270,     0,    66,     5,     7,
     0,    67,     5,     7,     0,    64,   210,   271,   211,     0,
     0,   271,   210,   272,   211,     0,     0,   272,   273,     0,
    69,     5,     7,     0,    70,   392,     7,     0,    71,   392,
     7,     0,    72,   392,     7,     0,    73,   392,     7,     0,
    74,   392,     7,     0,     0,   274,   275,     0,   210,   276,
   211,     0,   389,     0,     0,   276,   277,     0,    76,     5,
     7,     0,    76,     5,   237,     7,     0,    66,     5,     7,
     0,    64,   210,   278,   211,     0,    64,     5,   210,   278,
   211,     0,     0,   278,   210,   279,   211,     0,     0,   279,
   280,     0,    66,     5,     7,     0,    51,   227,     7,     0,
    52,   227,     7,     0,    58,   243,     7,     0,    57,   243,
     7,     0,    62,     5,     7,     0,    59,   210,     3,   236,
     3,   211,     7,     0,    53,   227,     7,     0,    54,   227,
     7,     0,    79,   243,     7,     0,    56,   243,     7,     0,
    55,   243,     7,     0,    79,   205,   243,   212,   243,   206,
     7,     0,    56,   205,   243,   212,   243,   206,     7,     0,
    55,   205,   243,   212,   243,   206,     7,     0,     0,   281,
   282,     0,   210,   283,   211,     0,   389,     0,     0,   283,
   284,     0,    76,     5,     7,     0,    76,     5,   237,     7,
     0,    66,     5,     7,     0,    77,   210,   285,   211,     0,
    84,   210,   291,   211,     0,    86,   210,   298,   211,     0,
    50,   210,   301,   211,     0,     0,   285,   210,   286,   211,
     0,     0,   286,   287,     0,    76,     5,     7,     0,    78,
     5,     7,     0,    78,     5,   237,     7,     0,    79,     5,
   288,     7,     0,    80,   210,     5,   236,     5,   211,     7,
     0,    81,   245,     7,     0,    82,   227,     7,     0,    83,
   227,     7,     0,     0,     0,     0,   210,    91,     5,     7,
    90,     5,   237,     7,   289,    45,   227,     7,   290,   107,
     5,   238,     7,   211,     0,     0,   291,   210,   292,   211,
     0,     0,   292,   293,     0,    76,     5,     7,     0,    85,
   294,     7,     0,    78,   296,     7,     0,     5,     0,   210,
   295,   211,     0,     0,   295,   236,     5,     0,     5,     0,
   210,   297,   211,     0,     0,   297,   236,     5,     0,     0,
   298,   210,   299,   211,     0,     0,   299,   300,     0,    76,
     5,     7,     0,    66,     5,     7,     0,    78,     5,     7,
     0,     0,   301,   210,   302,   211,     0,     0,   302,   303,
     0,    78,     5,     7,     0,    83,   228,    89,     5,     7,
     0,    87,   228,     7,     0,    88,   231,     7,     0,    89,
     5,   238,     7,     0,     0,   304,   305,     0,   210,   306,
   211,     0,   389,     0,     0,   306,   307,     0,    76,     5,
     7,     0,    76,     5,   237,     7,     0,    66,     5,     7,
     0,    91,   210,   308,   211,     0,    95,   210,   314,   211,
     0,     0,   308,   210,   309,   211,     0,     0,   309,   310,
     0,    76,     5,     7,     0,    66,    86,     7,     0,    66,
    96,     7,     0,    66,     5,     7,     0,     0,    92,     5,
   238,   311,   313,     7,     0,    93,     3,     7,     0,     0,
   205,   312,   247,   206,     7,     0,   106,   227,     7,     0,
    65,     5,     7,     0,    63,     5,     7,     0,    94,     3,
     7,     0,     0,   205,     5,   206,     0,     0,   314,   315,
     0,    96,   210,   320,   211,     0,    97,   210,   320,   211,
     0,    98,   210,   324,   211,     0,    99,   210,   316,   211,
     0,     0,   316,   317,     0,    66,     5,     7,     0,    89,
     5,     7,     0,   210,   318,   211,     0,     0,   318,   319,
     0,    60,   329,     7,     0,    61,   329,     7,     0,    95,
   329,     7,     0,   106,   227,     7,     0,     0,   320,   321,
     0,     0,     0,   328,   205,   322,   247,   323,   212,   247,
   206,     7,     0,   106,   227,     7,     0,    63,     5,     7,
     0,    65,     5,     7,     0,     0,   324,   325,     0,   106,
   227,     7,     0,     0,     0,   328,   205,   326,   247,   327,
   212,   329,   206,     7,     0,     0,   100,     0,   101,     0,
   102,     0,   103,     0,   104,     0,   105,     0,   210,     5,
     5,   211,     0,   210,     5,   211,     0,     0,   330,   331,
     0,   210,   332,   211,     0,   389,     0,     0,   332,   333,
     0,    76,     5,     7,     0,    76,     5,   237,     7,     0,
   108,   210,   335,   211,     0,     0,   115,   334,   210,   342,
   211,     0,     0,   335,   210,   336,   211,     0,     0,   336,
   337,     0,    76,     5,     7,     0,    66,     5,     7,     0,
   109,   338,     7,     0,   110,   397,     7,     0,   113,   340,
     7,     0,   114,     5,     7,     0,   111,   394,     7,     0,
   112,   397,     7,     0,     5,   238,     0,   210,   339,   211,
     0,     0,   339,   236,     5,     0,     5,     0,   210,   341,
   211,     0,     0,   341,   236,     5,     0,     0,   342,   343,
     0,     5,     5,     7,     0,   117,   243,     7,     0,   127,
   210,   349,   211,     0,   131,   210,   351,   211,     0,   134,
   210,   353,   211,     0,   137,   210,   355,   211,     0,     5,
   205,     5,   206,     7,     0,   117,   205,   243,   206,     7,
     0,   126,     7,     0,   121,   205,   243,   206,   210,   342,
   211,     0,   121,   205,   243,   206,   210,   342,   211,   122,
   210,   342,   211,     0,   119,   205,     5,   212,   243,   206,
     7,     0,   124,   205,     5,   212,   243,   206,     7,     0,
   125,   205,     5,   212,   227,   212,     5,   206,     7,     0,
   120,   205,     5,   212,     5,   212,   394,   206,     7,     0,
   123,   205,     5,   212,   392,   212,   394,   212,   392,   206,
     7,     0,   127,   205,   392,   212,   392,   212,   243,   212,
   243,   206,   210,   342,   211,     0,   131,   205,   392,   212,
   392,   212,   243,   212,   392,   212,   392,   206,   210,   342,
   211,     0,   134,   205,   392,   212,   392,   212,   243,   206,
   210,   342,   211,     0,   134,   205,   392,   212,   392,   212,
   243,   212,   392,   206,   210,   342,   211,     0,     0,   149,
   344,   205,   346,   347,   206,     7,     0,     0,   151,   345,
   205,   346,   347,   206,     7,     0,   140,   205,   227,   212,
   243,   206,     7,     0,   144,   205,     5,   206,     7,     0,
   141,   205,   397,   206,     7,     0,   245,     0,     5,     0,
     0,   347,   348,     0,   212,   163,   397,     0,   212,   166,
   394,     0,   212,   394,     0,     0,   349,   350,     0,   128,
   392,     7,     0,   129,   392,     7,     0,   118,   243,     7,
     0,   130,   243,     7,     0,   115,   210,   342,   211,     0,
     0,   351,   352,     0,   128,   392,     7,     0,   129,   392,
     7,     0,   118,   243,     7,     0,   132,   392,     7,     0,
   133,   392,     7,     0,   115,   210,   342,   211,     0,     0,
   353,   354,     0,   135,   392,     7,     0,    68,   392,     7,
     0,   136,   243,     7,     0,   177,   392,     7,     0,   115,
   210,   342,   211,     0,     0,   355,   356,     0,   135,   392,
     7,     0,   138,   392,     7,     0,    68,   392,     7,     0,
   177,   392,     7,     0,   108,     5,     7,     0,   139,   210,
   357,   211,     0,   115,   210,   342,   211,     0,   116,   210,
   342,   211,     0,     0,   357,   210,   358,   211,     0,     0,
   358,   359,     0,    66,     5,     7,     0,    91,     5,     7,
     0,   106,   227,     7,     0,    68,   392,     7,     0,    79,
   243,     7,     0,   177,     5,     7,     0,     0,   360,   361,
     0,   210,   362,   211,     0,   389,     0,     0,   362,   363,
     0,    76,     5,     7,     0,    76,     5,   237,     7,     0,
   109,     5,   238,     7,     0,   143,     5,     7,     0,    91,
   210,   364,   211,     0,     0,   364,   210,   365,   211,     0,
     0,   365,   366,     0,    76,     5,     7,     0,    57,   210,
   367,   211,     0,     0,   367,    96,   210,   368,   211,     0,
   367,     5,   210,   368,   211,     0,     0,   368,   369,     0,
     0,   328,   205,   370,   247,   206,     7,     0,    66,     5,
     7,     0,     0,   106,   371,   227,     7,     0,    63,     5,
     7,     0,    65,     5,     7,     0,     0,   372,   373,     0,
   210,   374,   211,     0,   389,     0,     0,   374,   375,     0,
    76,     5,     7,     0,   145,     5,     7,     0,   168,     5,
     7,     0,   147,   397,     7,     0,   115,   210,   378,   211,
     0,     0,   144,     5,   146,     5,   377,   210,   378,   211,
     0,     0,     0,   378,   379,   380,     0,   148,   205,   382,
   385,   386,   206,     7,     0,   149,   205,   382,   385,   386,
   206,     7,     0,     0,   150,   205,   227,   381,   212,   106,
   227,   386,   206,     7,     0,     5,   384,   212,     0,     5,
   384,   383,     5,   384,   212,     0,   196,     0,   197,     0,
   194,     0,   195,     0,     0,   205,   227,   206,     0,   153,
     0,   154,   227,     0,   155,   227,     0,   157,   210,   210,
   395,   211,   210,   395,   211,   210,   395,   211,   211,     0,
   156,   227,     0,   156,   210,   243,   212,   243,   212,   243,
   211,   210,   394,   212,   394,   212,   394,   211,     0,   158,
   210,   395,   211,     0,   159,   210,   210,   395,   211,   210,
   395,   211,   211,   210,   392,   211,     0,   160,   210,   210,
   395,   211,   210,   395,   211,   210,   395,   211,   211,   210,
   392,   212,   392,   211,     0,   161,   210,   210,   395,   211,
   210,   395,   211,   210,   395,   211,   210,   395,   211,   211,
   210,   392,   212,   392,   212,   392,   211,     0,   154,   227,
   162,     5,   210,   392,   212,   392,   211,   210,   392,   211,
     0,     0,   386,   387,     0,   212,   163,   397,     0,   212,
   163,   190,   397,     0,   212,   163,   193,   397,     0,   212,
   164,   392,     0,   212,   171,     0,   212,   172,     0,   212,
   167,   392,     0,   212,   168,     5,     0,   212,   169,   388,
     0,   212,   170,   388,     0,   212,   168,   388,     0,   212,
   165,   392,     0,   212,   166,   394,     0,   212,   152,     5,
     0,   212,   174,     5,     0,   212,   173,   392,     0,   212,
    57,   394,     0,   212,   175,   392,     0,   212,   175,   210,
   395,   211,     0,   212,   176,     0,   212,   111,   394,     0,
   212,   140,   210,   243,   212,   243,   212,   243,   211,     0,
     0,   388,     6,     0,     5,   181,   394,     7,     0,     5,
   181,     6,     7,     0,    14,   205,   390,   206,     7,     0,
     0,   390,   236,     5,     0,   390,   236,     5,   181,   392,
     0,   390,   236,     5,   181,     6,     0,    20,     0,    21,
     0,    22,     0,    23,     0,    24,     0,    25,     0,    26,
     0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
     0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
     0,    37,     0,    38,     0,    39,     0,     5,     0,   393,
     0,   203,   392,   204,     0,   195,   392,     0,   200,   392,
     0,   392,   195,   392,     0,   392,   194,   392,     0,   392,
   196,   392,     0,   392,   197,   392,     0,   392,   198,   392,
     0,   392,   202,   392,     0,   392,   188,   392,     0,   392,
   190,   392,     0,   392,   189,   392,     0,   392,   191,   392,
     0,   392,   185,   392,     0,   392,   186,   392,     0,   392,
   184,   392,     0,   392,   183,   392,     0,    20,   205,   392,
   206,     0,    21,   205,   392,   206,     0,    22,   205,   392,
   206,     0,    23,   205,   392,   206,     0,    24,   205,   392,
   206,     0,    25,   205,   392,   206,     0,    26,   205,   392,
   206,     0,    27,   205,   392,   206,     0,    28,   205,   392,
   206,     0,    29,   205,   392,   206,     0,    30,   205,   392,
   212,   392,   206,     0,    31,   205,   392,   206,     0,    32,
   205,   392,   206,     0,    33,   205,   392,   206,     0,    34,
   205,   392,   206,     0,    35,   205,   392,   206,     0,    36,
   205,   392,   206,     0,    37,   205,   392,   212,   392,   206,
     0,    38,   205,   392,   212,   392,   206,     0,    39,   205,
   392,   212,   392,   206,     0,   392,   182,   392,     8,   392,
     0,   392,   208,     0,     4,     0,     3,     0,    15,     0,
    16,     0,    17,     0,    18,     0,    19,     0,     5,     0,
     0,   392,     0,   396,     0,   210,   395,   211,     0,   392,
     0,   396,     0,   395,   212,   392,     0,   395,   212,   396,
     0,   392,     8,   392,     0,   392,     8,   392,     8,   392,
     0,     5,   210,   211,     0,     5,   210,   395,   211,     0,
    12,   205,     5,   206,     0,    13,   205,     5,   212,     5,
   206,     0,     6,     0,     5,     0,     9,   205,   397,   212,
   397,   206,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   319,   354,   391,   394,   397,   400,   403,   404,   405,   406,
   407,   408,   409,   410,   411,   413,   415,   417,   422,   431,
   434,   436,   438,   440,   442,   444,   446,   448,   450,   452,
   454,   456,   458,   460,   462,   464,   466,   468,   470,   473,
   481,   495,   498,   499,   502,   507,   510,   512,   515,   517,
   521,   529,   540,   549,   558,   565,   600,   605,   616,   619,
   633,   638,   641,   690,   703,   729,   734,   749,   767,   788,
   794,   803,   817,   851,   864,   884,   888,   898,   915,   915,
   918,   924,   927,   930,   940,   943,   946,   950,   970,  1014,
  1018,  1021,  1038,  1047,  1054,  1057,  1062,  1068,  1072,  1077,
  1082,  1088,  1095,  1099,  1112,  1127,  1141,  1147,  1153,  1159,
  1165,  1171,  1177,  1183,  1189,  1195,  1201,  1207,  1213,  1219,
  1225,  1231,  1237,  1244,  1250,  1252,  1261,  1265,  1271,  1345,
  1379,  1388,  1400,  1402,  1413,  1415,  1431,  1437,  1443,  1445,
  1474,  1498,  1511,  1517,  1524,  1530,  1537,  1547,  1550,  1551,
  1554,  1557,  1560,  1565,  1568,  1582,  1589,  1594,  1599,  1603,
  1610,  1615,  1620,  1625,  1631,  1635,  1640,  1643,  1679,  1687,
  1692,  1701,  1705,  1714,  1717,  1722,  1727,  1732,  1740,  1744,
  1756,  1766,  1771,  1776,  1781,  1793,  1797,  1853,  1856,  1859,
  1862,  1865,  1874,  1881,  1884,  1906,  1909,  1919,  1923,  1931,
  1938,  1947,  1950,  1970,  1987,  2009,  2019,  2023,  2035,  2059,
  2084,  2089,  2097,  2105,  2115,  2132,  2140,  2147,  2154,  2163,
  2172,  2181,  2200,  2208,  2211,  2234,  2238,  2247,  2251,  2259,
  2266,  2275,  2278,  2281,  2284,  2289,  2307,  2354,  2370,  2374,
  2379,  2384,  2389,  2403,  2423,  2432,  2456,  2511,  2515,  2519,
  2528,  2592,  2598,  2603,  2608,  2612,  2619,  2622,  2627,  2645,
  2650,  2654,  2671,  2685,  2690,  2694,  2707,  2713,  2720,  2727,
  2731,  2738,  2748,  2759,  2776,  2848,  2860,  2864,  2884,  2898,
  2901,  2904,  2948,  2955,  2958,  2980,  2984,  2992,  2996,  3004,
  3011,  3021,  3023,  3028,  3043,  3059,  3076,  3080,  3085,  3089,
  3092,  3102,  3141,  3165,  3170,  3176,  3337,  3342,  3351,  3360,
  3365,  3368,  3406,  3423,  3449,  3454,  3457,  3460,  3465,  3473,
  3476,  3488,  3498,  3510,  3519,  3522,  3526,  3528,  3530,  3536,
  3554,  3558,  3569,  3630,  3676,  3700,  3709,  3721,  3738,  3742,
  3776,  3785,  3839,  3855,  3858,  3859,  3860,  3861,  3862,  3863,
  3867,  3890,  3912,  3919,  3922,  3943,  3947,  3955,  3959,  3968,
  3975,  3978,  3980,  3985,  4001,  4018,  4033,  4037,  4042,  4051,
  4054,  4059,  4064,  4069,  4074,  4081,  4120,  4125,  4130,  4140,
  4152,  4156,  4161,  4172,  4181,  4188,  4209,  4216,  4222,  4228,
  4234,  4242,  4259,  4266,  4272,  4283,  4294,  4306,  4318,  4338,
  4355,  4377,  4390,  4404,  4417,  4430,  4437,  4439,  4446,  4448,
  4458,  4468,  4478,  4488,  4498,  4504,  4507,  4511,  4521,  4535,
  4547,  4551,  4557,  4561,  4565,  4570,  4579,  4592,  4596,  4602,
  4606,  4610,  4614,  4619,  4628,  4640,  4643,  4649,  4653,  4657,
  4661,  4670,  4685,  4688,  4694,  4698,  4702,  4707,  4717,  4723,
  4729,  4738,  4742,  4746,  4760,  4763,  4775,  4804,  4807,  4810,
  4818,  4834,  4842,  4845,  4866,  4869,  4880,  4883,  4891,  4899,
  4945,  4950,  4955,  4959,  4963,  4970,  4974,  4978,  4983,  4989,
  4995,  5008,  5019,  5022,  5030,  5058,  5069,  5069,  5075,  5084,
  5100,  5108,  5111,  5116,  5119,  5128,  5131,  5139,  5151,  5162,
  5167,  5172,  5190,  5199,  5203,  5208,  5216,  5222,  5226,  5231,
  5237,  5251,  5273,  5276,  5277,  5278,  5281,  5285,  5289,  5297,
  5304,  5311,  5335,  5342,  5354,  5367,  5387,  5413,  5446,  5466,
  5488,  5491,  5499,  5506,  5513,  5517,  5521,  5525,  5529,  5539,
  5544,  5549,  5569,  5576,  5585,  5594,  5603,  5610,  5618,  5622,
  5631,  5635,  5643,  5653,  5660,  5706,  5723,  5729,  5733,  5736,
  5742,  5748,  5759,  5761,  5762,  5763,  5764,  5765,  5766,  5767,
  5768,  5769,  5770,  5771,  5772,  5773,  5774,  5775,  5776,  5777,
  5778,  5779,  5780,  5782,  5784,  5785,  5786,  5787,  5788,  5789,
  5790,  5791,  5792,  5793,  5794,  5795,  5796,  5797,  5798,  5799,
  5800,  5801,  5802,  5803,  5804,  5805,  5806,  5807,  5808,  5809,
  5810,  5811,  5812,  5813,  5814,  5815,  5816,  5817,  5818,  5819,
  5820,  5821,  5822,  5825,  5828,  5829,  5830,  5831,  5832,  5833,
  5834,  5850,  5855,  5861,  5864,  5869,  5877,  5880,  5883,  5893,
  5901,  5912,  5927,  5949,  5964,  6003,  6008,  6023
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tStrCat","tInclude","tConstant","tList",
"tListAlt","tDefineConstant","tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10",
"tSqrt","tSin","tAsin","tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh",
"tTanh","tFabs","tFloor","tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace",
"tOrder","tCrossProduct","tMHTimeIntegration","tGroup","tDefineGroup","tAll",
"tInSupport","tDefineFunction","tConstraint","tRegion","tSubRegion","tRegionRef",
"tSubRegionRef","tFilter","tCoefficient","tValue","tTimeFunction","tBranch",
"tNode","tLoop","tNameOfResolution","tJacobian","tCase","tIntegration","tType",
"tSubType","tCriterion","tGeoElement","tNumberOfPoints","tMaxNumberOfPoints",
"tNumberOfDivisions","tMaxNumberOfDivisions","tStoppingCriterion","tFunctionSpace",
"tName","tBasisFunction","tNameOfCoef","tFunction","tdFunction","tSubFunction",
"tSupport","tEntity","tSubSpace","tNameOfBasisFunction","tGlobalQuantity","tEntityType",
"tEntitySubType","tNameOfConstraint","tFormulation","tQuantity","tNameOfSpace",
"tIndexOfSystem","tSymmetry","tEquation","tGalerkin","tdeRham","tGlobalTerm",
"tGlobalEquation","tDt","tDtDof","tDtDt","tDtDtDof","tJacNL","tNeverDt","tIn",
"tResolution","tDefineSystem","tNameOfFormulation","tNameOfMesh","tFrequency",
"tSolver","tOriginSystem","tDestinationSystem","tOperation","tOperationEnd",
"tSetTime","tDTime","tSetFrequency","tFourierTransform","tIf","tElse","tLanczos",
"tUpdate","tUpdateConstraint","tBreak","tTimeLoopTheta","tTime0","tTimeMax",
"tTheta","tTimeLoopNewmark","tBeta","tGamma","tIterativeLoop","tNbrMaxIteration",
"tRelaxationFactor","tIterativeTimeReduction","tDivisionCoefficient","tChangeOfState",
"tChangeOfCoordinates","tSystemCommand","tPostProcessing","tNameOfSystem","tPostOperation",
"tNameOfPostProcessing","tUsingPost","tAppend","tPlot","tPrint","tPrintGroup",
"tWrite","tAdapt","tOnGlobal","tOnRegion","tOnElementsOf","tOnGrid","tOnSection",
"tOnPoint","tOnLine","tOnPlane","tOnBox","tWithArgument","tFile","tDepth","tDimension",
"tTimeStep","tHarmonicToTime","tFormat","tHeader","tFooter","tSkin","tSmoothing",
"tTarget","tSort","tIso","tNoNewLine","tFlag","tHelp","tCpu","tCheck","tDEF",
"'?'","tOR","tAND","tEQUAL","tNOTEQUAL","tAPPROXEQUAL","'<'","tLESSOREQUAL",
"'>'","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'","'*'","'/'",
"'%'","tCROSSPRODUCT","'!'","UNARYPREC","'^'","'('","')'","'['","']'","'.'",
"'#'","'$'","'{'","'}'","','","Stats","@1","ProblemDefinitions","@2","ProblemDefinition",
"Interactive","@3","Groups","@4","Group","@5","ReducedGroupRHS","@6","@7","GroupRHS",
"FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup",
"ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension",
"MultipleIndex","Index","Functions","Function","DefineFunctions","Expression",
"@8","ListOfExpression","RecursiveListOfExpression","WholeQuantityExpression",
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
"@28","PostSubOperations","@29","PostSubOperation","@30","PostQuantitiesToPrint",
"Combination","PostQuantitySupport","PrintSubType","PrintOptions","PrintOption",
"ParsedStrings","Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr",
"ListOfFExpr","RecursiveListOfFExpr","MultiFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   214,   213,   215,   216,   215,   217,   217,   217,   217,   217,
   217,   217,   217,   217,   217,   217,   217,   217,   217,   218,
   218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
   218,   218,   218,   218,   218,   218,   218,   218,   218,   219,
   218,   220,   221,   220,   222,   222,   223,   222,   222,   222,
   225,   226,   224,   224,   227,   227,   228,   228,   229,   229,
   230,   230,   230,   231,   232,   232,   233,   233,   233,   234,
   234,   234,   234,   234,   234,   235,   235,   235,   236,   236,
   237,   238,   238,   239,   240,   240,   241,   241,   241,   241,
   242,   242,   243,   243,   244,   243,   245,   245,   246,   246,
   248,   247,   249,   250,   251,   249,   249,   249,   249,   249,
   249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
   249,   249,   249,   249,   249,   249,   252,   252,   252,   252,
   252,   252,   253,   252,   254,   252,   252,   252,   255,   252,
   252,   252,   252,   252,   252,   252,   252,   256,   256,   256,
   257,   257,   258,   258,   258,   259,   259,   260,   260,   261,
   261,   262,   262,   263,   263,   264,   264,   264,   265,   265,
   266,   266,   267,   267,   267,   268,   268,   269,   269,   270,
   270,   270,   271,   271,   272,   272,   273,   273,   273,   273,
   273,   273,   274,   274,   275,   275,   276,   276,   277,   277,
   277,   277,   277,   278,   278,   279,   279,   280,   280,   280,
   280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
   280,   280,   281,   281,   282,   282,   283,   283,   284,   284,
   284,   284,   284,   284,   284,   285,   285,   286,   286,   287,
   287,   287,   287,   287,   287,   287,   287,   288,   289,   290,
   288,   291,   291,   292,   292,   293,   293,   293,   294,   294,
   295,   295,   296,   296,   297,   297,   298,   298,   299,   299,
   300,   300,   300,   301,   301,   302,   302,   303,   303,   303,
   303,   303,   304,   304,   305,   305,   306,   306,   307,   307,
   307,   307,   307,   308,   308,   309,   309,   310,   310,   310,
   310,   311,   310,   310,   312,   310,   310,   310,   310,   310,
   313,   313,   314,   314,   315,   315,   315,   315,   316,   316,
   317,   317,   317,   318,   318,   319,   319,   319,   319,   320,
   320,   322,   323,   321,   321,   321,   321,   324,   324,   325,
   326,   327,   325,   328,   328,   328,   328,   328,   328,   328,
   329,   329,   330,   330,   331,   331,   332,   332,   333,   333,
   333,   334,   333,   335,   335,   336,   336,   337,   337,   337,
   337,   337,   337,   337,   337,   338,   338,   339,   339,   340,
   340,   341,   341,   342,   342,   343,   343,   343,   343,   343,
   343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
   343,   343,   343,   343,   343,   344,   343,   345,   343,   343,
   343,   343,   346,   346,   347,   347,   348,   348,   348,   349,
   349,   350,   350,   350,   350,   350,   351,   351,   352,   352,
   352,   352,   352,   352,   353,   353,   354,   354,   354,   354,
   354,   355,   355,   356,   356,   356,   356,   356,   356,   356,
   356,   357,   357,   358,   358,   359,   359,   359,   359,   359,
   359,   360,   360,   361,   361,   362,   362,   363,   363,   363,
   363,   363,   364,   364,   365,   365,   366,   366,   367,   367,
   367,   368,   368,   370,   369,   369,   371,   369,   369,   369,
   372,   372,   373,   373,   374,   374,   375,   375,   375,   375,
   375,   377,   376,   378,   379,   378,   380,   380,   381,   380,
   382,   382,   383,   383,   383,   383,   384,   384,   385,   385,
   385,   385,   385,   385,   385,   385,   385,   385,   385,   386,
   386,   387,   387,   387,   387,   387,   387,   387,   387,   387,
   387,   387,   387,   387,   387,   387,   387,   387,   387,   387,
   387,   387,   387,   388,   388,   389,   389,   389,   390,   390,
   390,   390,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   391,   391,   391,   391,   391,   391,   391,
   391,   391,   391,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
   392,   392,   392,   393,   393,   393,   393,   393,   393,   393,
   393,   394,   394,   394,   394,   395,   395,   395,   395,   396,
   396,   396,   396,   396,   396,   397,   397,   397
};

static const short yyr2[] = {     0,
     0,     2,     0,     0,     3,     4,     4,     4,     4,     4,
     4,     4,     4,     4,     4,     1,     1,     2,     1,     2,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
     2,     0,     0,     3,     4,     5,     0,     6,     5,     1,
     0,     0,     7,     2,     1,     2,     1,     1,     1,     1,
     0,     3,     4,     1,     1,     3,     0,     3,     4,     1,
     3,     5,     1,     4,     3,     0,     3,     6,     0,     1,
     4,     0,     2,     3,     0,     2,     5,     6,     7,     1,
     0,     3,     4,     4,     0,     2,     0,     3,     1,     3,
     0,     2,     1,     0,     0,     7,     3,     3,     6,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     2,     2,     2,     3,     1,     3,     2,
     1,     2,     0,     5,     0,    11,     4,     4,     0,     7,
     6,     2,     2,     2,     2,     3,     2,     3,     2,     3,
     1,     3,     0,     3,     6,     0,     4,     0,     2,     3,
     4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     4,     0,     4,     0,     2,     3,     3,     3,     3,
     3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
     3,     4,     5,     0,     4,     0,     2,     3,     3,     3,
     3,     3,     3,     7,     3,     3,     3,     3,     3,     7,
     7,     7,     0,     2,     3,     1,     0,     2,     3,     4,
     3,     4,     4,     4,     4,     0,     4,     0,     2,     3,
     3,     4,     4,     7,     3,     3,     3,     0,     0,     0,
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
     4,     5,     5,     2,     7,    11,     7,     7,     9,     9,
    11,    13,    15,    11,    13,     0,     7,     0,     7,     7,
     5,     5,     1,     1,     0,     2,     3,     3,     2,     0,
     2,     3,     3,     3,     3,     4,     0,     2,     3,     3,
     3,     3,     3,     4,     0,     2,     3,     3,     3,     3,
     4,     0,     2,     3,     3,     3,     3,     3,     4,     4,
     4,     0,     4,     0,     2,     3,     3,     3,     3,     3,
     3,     0,     2,     3,     1,     0,     2,     3,     4,     4,
     3,     4,     0,     4,     0,     2,     3,     4,     0,     5,
     5,     0,     2,     0,     6,     3,     0,     4,     3,     3,
     0,     2,     3,     1,     0,     2,     3,     3,     3,     3,
     4,     0,     8,     0,     0,     3,     7,     7,     0,    10,
     3,     6,     1,     1,     1,     1,     0,     3,     1,     2,
     2,    12,     2,    15,     4,    12,    17,    22,    12,     0,
     2,     3,     4,     4,     3,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     5,
     2,     3,     9,     0,     2,     4,     4,     5,     0,     3,
     5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     3,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     6,     4,     4,     4,     4,     4,     4,     6,     6,
     6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     0,     1,     1,     3,     1,     1,     3,     3,     3,
     5,     3,     4,     4,     6,     1,     1,     6
};

static const short yydefact[] = {     1,
     3,     4,    40,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
    19,     0,    16,    17,   632,   647,   646,     0,    18,   559,
    42,   193,   156,   169,   223,    85,   283,   353,   462,     0,
   491,     0,    20,     0,     0,     0,     0,     0,    27,     0,
    28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    41,   625,   624,   631,     0,     0,
     0,   626,   627,   628,   629,   630,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   633,   584,     0,   634,     0,    79,    43,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    26,    23,    21,
    25,    24,    22,    39,    29,    31,    32,    33,    34,    30,
    35,    36,    37,    38,     0,     0,     0,     0,   557,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   631,   586,   587,     0,   636,     0,   637,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   623,   556,     0,     0,    80,     0,
     6,     0,   197,     8,   194,   196,   158,     9,   171,    10,
   227,    11,   224,   226,     0,     0,     7,    86,    90,   287,
    12,   284,   286,   357,    13,   354,   356,   466,    14,   463,
   465,   502,   495,    15,   492,   494,   517,     0,     0,    82,
    57,     0,    55,   509,     0,   642,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   585,
   635,     0,   640,     0,   601,   600,   598,   599,   594,   596,
   595,   597,   589,   588,   590,   591,   592,   593,     0,   558,
   560,     0,     0,    44,    50,     0,     0,     0,     0,     0,
    91,     0,     0,     0,     0,     0,     0,     0,   519,     0,
     0,     0,     0,     0,     0,     0,     0,   530,   530,     0,
    56,    70,    73,    67,    54,    65,     0,    51,   643,   644,
     0,   602,   603,   604,   605,   606,   607,   608,   609,   610,
   611,     0,   613,   614,   615,   616,   617,   618,     0,     0,
     0,   638,   639,     0,     0,     0,     0,   632,     0,     0,
     0,    76,     0,     0,     0,   195,   198,     0,     0,   157,
   159,     0,    95,     0,   170,   172,     0,     0,     0,     0,
     0,     0,   225,   228,     0,     0,    79,     0,     0,     0,
     0,   285,   288,     0,     0,   362,   355,   358,     0,     0,
     0,     0,   464,   467,   504,     0,     0,     0,     0,     0,
   493,   496,     0,   515,   516,   513,   514,   511,     0,   520,
   521,    95,   523,     0,     0,     0,     0,     0,     0,     0,
    83,     0,     0,    79,     0,     0,     0,     0,     0,     0,
     0,   641,   622,   648,   562,   561,   631,     0,     0,     0,
    47,     0,    79,     0,   204,     0,     0,   162,     0,   176,
     0,     0,     0,   101,     0,   274,     0,     0,   236,   252,
   267,    95,     0,     0,     0,     0,     0,   294,   313,     0,
   364,     0,     0,   473,    82,     0,   505,     0,   504,     0,
     0,     0,   518,   517,     0,     0,     0,     0,     0,     0,
     0,     0,     0,   531,     0,    71,    75,     0,    66,     0,
     0,    60,    52,    59,   645,   612,   619,   620,   621,    45,
     0,    84,     0,    58,     0,     0,     0,   204,     0,   201,
   199,     0,     0,     0,   160,     0,     0,     0,   174,    96,
     0,   173,     0,   231,   229,     0,     0,     0,     0,     0,
    95,    87,    92,   291,   289,     0,     0,     0,   359,     0,
     0,   384,   468,     0,     0,     0,   471,   503,     0,   497,
   505,   498,   500,   499,     0,     0,    95,     0,   525,     0,
     0,     0,   507,   632,   632,     0,     0,     0,     0,     0,
   632,     0,   554,   554,   554,   536,   537,     0,     0,     0,
   551,   508,     0,    74,     0,    68,   530,    79,    81,     0,
    46,    49,    77,     0,   206,   202,   200,   164,   161,   178,
   175,     0,     0,   631,   563,   564,   565,   566,   567,   568,
   569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
   579,   580,   581,   582,     0,   139,     0,     0,   135,   133,
     0,     0,     0,     0,     0,     0,     0,     0,   102,   103,
   131,     0,   128,   276,   235,   230,   238,   232,   254,   233,
   269,   234,    88,     0,   290,   296,   292,     0,     0,     0,
     0,   293,   314,   360,   366,   361,     0,   469,   475,   472,
   470,   506,   501,   512,     0,     0,     0,     0,     0,     0,
   548,   552,    95,   545,     0,     0,   532,   535,   543,   544,
   538,   539,   542,   540,   541,   547,   546,     0,   549,    72,
    69,     0,     0,     0,    48,     0,   203,     0,     0,     0,
    93,    94,   130,     0,     0,     0,     0,     0,     0,     0,
   125,   124,   126,     0,   147,   145,   142,   144,   143,     0,
   104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
   153,     0,     0,     0,     0,    89,     0,   330,   330,   338,
   319,     0,     0,    95,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   406,   408,
   363,   385,     0,     0,    95,     0,     0,     0,     0,     0,
   533,   534,   555,     0,     0,    53,    64,     0,     0,     0,
     0,     0,     0,     0,    95,    95,    95,    95,     0,     0,
     0,    95,   205,   207,     0,     0,   163,   165,     0,     0,
     0,   177,   179,     0,   101,     0,     0,     0,   101,     0,
   127,     0,   352,     0,   123,   122,   119,   120,   121,   115,
   117,   116,   118,   111,   112,   107,   110,   113,   108,   114,
   146,   149,     0,   151,     0,     0,   129,     0,     0,     0,
     0,     0,   275,   277,     0,     0,     0,     0,    97,     0,
     0,   237,   239,     0,     0,     0,   253,   255,     0,     0,
     0,   268,   270,     0,     0,     0,     0,     0,     0,     0,
     0,   305,   295,   297,   344,   344,   344,     0,     0,     0,
     0,     0,   632,     0,     0,     0,   365,   367,     0,     0,
    95,     0,     0,     0,    95,     0,     0,     0,   394,     0,
   420,     0,   427,     0,   435,   442,     0,     0,     0,     0,
     0,     0,     0,   474,   476,     0,     0,     0,     0,     0,
     0,    95,   550,   510,    82,    62,    78,     0,     0,     0,
     0,    95,     0,    95,     0,     0,     0,     0,     0,     0,
    95,     0,     0,     0,   153,   183,     0,     0,   137,     0,
   138,     0,     0,     0,   101,   351,     0,   148,   150,     0,
     0,     0,     0,     0,     0,     0,    82,     0,     0,   248,
     0,    95,     0,     0,     0,     0,   263,   265,     0,   259,
   261,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    82,     0,     0,     0,   101,     0,     0,   345,   346,
   347,   348,   349,   350,     0,   315,   331,     0,   316,     0,
   317,   339,     0,     0,     0,   324,   318,   320,     0,     0,
    82,   378,     0,     0,     0,     0,   380,   382,     0,     0,
   386,     0,     0,   387,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    97,    97,   479,     0,     0,     0,     0,     0,     0,     0,
     0,    63,   209,   210,   215,   216,     0,   219,     0,   218,
   212,   211,    79,   213,   208,     0,   217,   167,   166,     0,
     0,   180,   181,     0,     0,     0,   134,     0,   105,   152,
     0,   154,   278,     0,   280,   281,     0,   240,   241,     0,
     0,     0,    79,    99,     0,   245,   246,   247,   256,    79,
   258,    79,   257,   272,   271,   273,   309,   308,   301,   299,
   300,   298,   302,   304,   310,   307,     0,     0,     0,     0,
   332,     0,   341,     0,     0,     0,   369,   368,   376,    79,
   370,   371,   374,   375,    79,   372,   373,     0,     0,    95,
     0,     0,     0,    95,     0,     0,     0,    95,     0,     0,
    95,   388,   421,     0,     0,    95,     0,     0,     0,     0,
   389,   428,     0,     0,     0,     0,    95,     0,   390,   436,
     0,     0,     0,     0,     0,     0,     0,     0,   391,   443,
    95,     0,     0,   414,   413,   415,   415,     0,   477,     0,
   632,     0,     0,     0,     0,    95,    95,    95,     0,    95,
   168,   185,   182,     0,   109,     0,   141,     0,     0,     0,
   282,   242,     0,   243,     0,    98,    95,   264,     0,   260,
     0,   311,     0,   336,   337,   335,   101,   340,   101,   321,
   322,     0,     0,     0,     0,   323,   325,   377,     0,   381,
     0,   392,   393,     0,     0,   384,     0,     0,     0,     0,
   384,     0,     0,     0,     0,     0,   384,     0,     0,     0,
     0,     0,     0,     0,   384,     0,     0,     0,     0,     0,
   384,   384,     0,     0,   452,     0,     0,   412,   411,     0,
     0,     0,     0,   478,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   140,   101,   106,     0,
   279,     0,     0,   100,   266,   262,     0,     0,   306,   333,
   342,     0,     0,     0,     0,   379,   383,     0,   632,     0,
   632,     0,     0,    95,     0,   424,   422,   423,   425,    95,
     0,   431,   429,   430,   432,   433,    95,   438,     0,   437,
   439,   440,   446,   448,     0,     0,   444,   445,     0,   447,
     0,     0,   632,   416,     0,   482,   482,     0,   632,     0,
     0,     0,     0,   553,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   184,   186,     0,   155,     0,     0,
     0,   303,     0,     0,   326,   327,   328,   329,   397,     0,
   395,     0,   398,     0,     0,   426,     0,   434,     0,   441,
   450,   451,   454,   449,   410,   407,     0,   632,   419,   409,
   344,   344,   529,     0,   522,   526,     0,     0,   222,   221,
   214,   220,     0,     0,     0,     0,     0,     0,   101,     0,
   244,   312,   101,     0,     0,     0,     0,     0,    95,     0,
     0,     0,     0,   417,   418,     0,     0,     0,   487,   481,
     0,   483,   480,   632,     0,     0,   187,   188,   189,   190,
   191,   192,     0,     0,     0,     0,   400,   384,     0,   399,
     0,     0,   384,     0,     0,     0,    95,     0,     0,     0,
   453,   455,     0,     0,     0,     0,   484,     0,     0,     0,
   136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   489,   490,   486,     0,
   101,   524,     0,     0,   249,   334,   343,   396,   401,   384,
     0,   404,   384,   456,   459,   460,   457,   458,   461,   488,
     0,     0,     0,     0,     0,     0,     0,     0,   527,     0,
     0,   402,   384,   405,   485,     0,     0,     0,     0,   250,
   403,     0,     0,     0,     0,   528,    82,     0,     0,   251,
     0,     0,     0
};

static const short yydefgoto[] = {  1601,
     1,     2,     3,    20,    21,    22,   107,   192,   284,   513,
   233,   426,   598,   234,   235,   503,   713,   809,   315,   424,
   316,   443,   190,   350,   311,   351,   112,   208,   377,   453,
   454,  1225,  1135,   530,   531,   649,   844,  1248,   650,   729,
   728,   725,   760,   865,   867,   109,   287,   361,   524,   719,
   828,   110,   288,   366,   526,   720,   833,  1111,  1336,  1416,
   108,   195,   286,   357,   519,   718,   824,   111,   203,   289,
   374,   537,   763,   883,  1132,  1574,  1593,   538,   764,   888,
  1012,  1142,  1009,  1140,   539,   765,   893,   533,   762,   874,
   113,   212,   292,   383,   547,   767,   904,  1262,  1026,  1348,
   548,   673,   908,  1048,  1166,  1277,   905,  1037,  1267,  1423,
   907,  1042,  1269,  1424,  1038,   651,   114,   216,   293,   388,
   472,   551,   772,   918,  1053,  1170,  1059,  1175,   677,   792,
   940,   941,  1226,  1320,  1394,  1072,  1193,  1074,  1202,  1076,
  1210,  1077,  1220,  1389,  1483,  1522,   115,   220,   294,   394,
   555,   793,   945,  1228,  1451,  1492,  1551,  1526,   117,   225,
   296,   402,    23,   295,   477,   559,    65,   317,   228,   409,
   298,   308,   419,   494,   703,    24,   106,   652,   166,   102,
   103,   167,   168,    29
};

static const short yypact[] = {-32768,
-32768,    62,  2699,   -93,   479,  -158,  -118,   -69,   -14,   -12,
    26,    76,    78,   102,   121,    33,   194,   327,  2692,-32768,
-32768,   -34,-32768,-32768,  1681,-32768,-32768,   139,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   214,
-32768,   425,-32768,   435,   453,   464,   466,   480,-32768,   482,
-32768,   494,   500,   502,   531,   538,   541,   557,   564,   566,
   568,   185,   244,   362,-32768,-32768,-32768,   380,   590,   394,
   396,-32768,-32768,-32768,-32768,-32768,   398,   412,   418,   440,
   449,   471,   473,   515,   533,   535,   540,   549,   551,   575,
   589,   594,   599,   601,   604,   609,  2637,  2637,  2637,  2563,
   891,-32768,   633,-32768,   479,  -152,   450,    21,   167,   287,
    28,    36,    31,    39,    41,   642,    47,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   646,   646,    92,   923,-32768,   676,
   680,  2637,  2637,  2637,  2637,  2637,  2637,  2637,  2637,  2637,
  2637,  2637,  2637,  2637,  2637,  2637,  2637,  2637,  2637,  2637,
  2637,-32768,   -36,   -36,  3468,   891,   294,-32768,  2637,  2637,
  2637,  2637,  2637,  2637,  2637,  2637,  2637,  2637,  2637,  2637,
  2637,  2637,  2637,  2637,-32768,-32768,   457,   717,-32768,   766,
-32768,   413,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -141,   614,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   625,  1237,  1237,   -98,
-32768,    24,-32768,-32768,   628,-32768,   320,   580,   623,  3495,
  3522,  3549,  3576,  3603,  3630,  3657,  3684,  3711,  3738,  2701,
  3765,  3792,  3819,  3846,  3873,  3900,  2732,  2763,  2794,-32768,
-32768,  2563,  2495,  2674,  4189,  4204,  1739,  1739,   651,   651,
   651,   651,   619,   619,   -36,   -36,   -36,   -36,   479,-32768,
   656,  -142,   634,-32768,-32768,   299,   254,   257,   251,    86,
-32768,   372,    -9,   361,   632,   658,    92,   573,-32768,    92,
    92,    18,   650,   662,   673,   696,   698,-32768,-32768,   701,
-32768,   854,   706,-32768,-32768,-32768,   708,-32768,-32768,-32768,
   920,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  2637,-32768,-32768,-32768,-32768,-32768,-32768,  2637,  2637,
  2637,   891,-32768,  2637,  2637,   724,  2600,  1595,  2087,   750,
   751,-32768,    43,   960,   964,-32768,-32768,   765,   971,-32768,
-32768,   767,    59,   974,-32768,-32768,   770,   977,   978,   775,
   776,   779,-32768,-32768,   814,   791,     5,   994,   995,   792,
   793,-32768,-32768,   996,   825,-32768,-32768,-32768,  1043,   839,
  1046,  1047,-32768,-32768,-32768,  1050,   851,  1052,   479,  1057,
-32768,-32768,   858,-32768,-32768,-32768,-32768,-32768,  1061,   909,
-32768,    59,-32768,   862,  2563,   868,   873,   874,   126,   191,
-32768,  1087,   989,   332,   988,    19,   889,  3927,  3954,  3981,
  4008,  4143,  4143,-32768,-32768,  4143,    15,  1089,  2637,  2083,
-32768,   163,   201,   887,-32768,  1096,    69,-32768,  1104,-32768,
   907,   908,  1107,-32768,  1108,-32768,  1109,    70,-32768,-32768,
-32768,    59,   936,  1112,  1115,  1114,    83,-32768,-32768,    87,
-32768,   912,    89,-32768,   914,  1118,   916,  1121,-32768,  1124,
  1125,  1138,-32768,   625,  1141,   917,  2563,   350,  2563,  2563,
  2563,  1146,  2645,-32768,  1147,  1149,-32768,  3228,-32768,    60,
    92,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  3258,-32768,   163,-32768,  1152,  1153,  1157,-32768,   359,-32768,
-32768,   958,  1160,   375,-32768,   378,  2637,  1163,-32768,-32768,
  1553,-32768,   383,-32768,-32768,  1169,   404,   426,   432,  1170,
    59,-32768,-32768,-32768,-32768,  1173,   439,   243,-32768,  1175,
   446,-32768,-32768,  1181,   456,  1188,-32768,-32768,   -34,-32768,
   959,-32768,-32768,-32768,   985,   991,    59,   481,-32768,   519,
   537,   548,-32768,  1796,  1796,   992,  1193,   168,  2637,  2637,
  1796,  2637,  1194,-32768,-32768,-32768,-32768,  2637,  1198,   679,
-32768,-32768,  2637,-32768,   164,-32768,-32768,   209,-32768,  1197,
-32768,-32768,   997,   553,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  4035,   999,    17,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1003,-32768,  1005,  1006,-32768,-32768,
  1207,  1553,  1553,  1553,  1553,  1210,    90,  1209,  4254,  1008,
  1012,  1012,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,  1211,-32768,-32768,-32768,  1009,  1010,  1011,
  1019,-32768,-32768,-32768,-32768,-32768,   285,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  2637,  1021,  1025,  1028,  1029,  1030,
-32768,-32768,    59,-32768,   479,   479,-32768,  4143,  4143,-32768,
  4143,-32768,  1230,  1230,  1230,  4143,-32768,  2563,  4143,  4143,
-32768,   211,  1066,   198,-32768,  2637,-32768,   424,   158,    37,
-32768,-32768,-32768,  1063,  1069,  1063,  1553,  1071,  1075,  1097,
  1084,  1084,  1084,  4231,-32768,-32768,-32768,-32768,-32768,    13,
-32768,  1553,  1553,  1553,  1553,  1553,  1553,  1553,  1553,  1553,
  1553,  1553,  1553,  1553,  1553,  1553,  1553,  1285,  1227,-32768,
  1080,   447,   530,   355,   157,-32768,  1348,-32768,-32768,-32768,
-32768,  1026,    82,    91,  1086,  1088,  1092,  1099,  1101,  1116,
  1287,   154,   256,   259,  1091,  1133,  1136,  1139,-32768,-32768,
-32768,-32768,   143,  2825,    59,  2563,  2563,  2563,  2563,  1111,
-32768,-32768,-32768,   581,  1306,-32768,-32768,  1314,    24,  3288,
    92,    92,    92,    92,    97,    99,    59,    59,  1110,  1321,
  1324,   100,-32768,-32768,   159,  1325,-32768,-32768,  1135,  1346,
  1351,-32768,-32768,  1151,-32768,  1159,  1585,  1360,-32768,  1162,
-32768,  1165,-32768,  1553,  4273,  4291,   953,   953,   953,   835,
   835,   835,   835,   626,   626,  1084,  1084,  1084,  1084,  1084,
-32768,-32768,  1167,  4254,   218,  2526,-32768,  1359,    54,    54,
  1365,  1370,-32768,-32768,  1373,  1374,  1375,  1171,  1172,    92,
    92,-32768,-32768,  1378,    66,    73,-32768,-32768,  1379,  1394,
  1396,-32768,-32768,  1398,  1399,   280,  1400,  1401,  1404,  1405,
    92,-32768,-32768,-32768,  1004,  1122,   417,   247,  1407,  1411,
    74,   479,  1796,   479,    79,  1412,-32768,-32768,  1402,  1413,
    59,  1403,  1414,  1415,    59,  1420,  1423,  1424,-32768,  2637,
-32768,  2637,-32768,  2637,-32768,-32768,    92,   479,  1426,  1233,
  1234,  1222,  1438,-32768,-32768,  2637,  1235,   585,   600,   639,
   652,    59,-32768,-32768,   914,-32768,-32768,  1437,  1440,  1441,
  1442,    59,  1443,    59,  1444,  1446,  1449,  1455,  1452,  1453,
    59,  1454,  1456,  1457,  1080,-32768,  1458,  1459,-32768,  1250,
-32768,  1553,  1255,  1239,-32768,-32768,   197,-32768,-32768,  1553,
  1263,   655,  1464,  1384,  1467,  1468,   914,  1469,    93,  1267,
  1473,    59,  1472,  1478,  1483,  1490,-32768,-32768,  1491,-32768,
-32768,  1492,  1494,  1495,  1496,  1497,  1498,  1500,  1501,  1502,
  1503,   914,  1504,  1510,  1516,-32768,  1519,  1520,-32768,-32768,
-32768,-32768,-32768,-32768,    92,-32768,-32768,  1322,-32768,    92,
-32768,-32768,  1326,  1525,  1528,-32768,-32768,-32768,  1527,  1530,
   914,-32768,  1531,  1533,  1534,  1535,-32768,-32768,  1536,  1538,
-32768,  1341,  1344,-32768,  1339,  1340,  1349,  1342,  1350,  1352,
  2856,   726,  2887,   629,  2918,   469,  1920,  1353,  1354,  1357,
    81,    81,-32768,  1559,  3318,  1392,  1393,  1425,  1427,  1428,
  1397,-32768,-32768,-32768,-32768,-32768,  1429,-32768,  1430,-32768,
-32768,-32768,  1431,-32768,-32768,  1432,-32768,-32768,-32768,  1597,
   660,-32768,-32768,    92,  4170,  2637,-32768,  1433,-32768,  4254,
    92,-32768,-32768,  1600,-32768,-32768,  1628,-32768,-32768,  1633,
  1554,  1643,  1431,-32768,   664,-32768,-32768,-32768,-32768,   666,
-32768,   669,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1445,  1645,  1647,  1648,
-32768,  1651,-32768,  1682,  1683,   340,-32768,-32768,-32768,   674,
-32768,-32768,-32768,-32768,   681,-32768,-32768,  1684,  1685,    59,
  1690,  1511,  2637,    59,    92,  2637,  1512,    59,  2637,  2637,
    59,-32768,-32768,  2637,  1513,    59,  2637,  2637,  2637,  2637,
-32768,-32768,  2637,  2637,  1524,  2637,    59,  2637,-32768,-32768,
  2637,  1724,  1532,  1539,  2637,  2637,  1541,  2637,-32768,-32768,
    59,  1728,  1745,-32768,-32768,-32768,-32768,     2,-32768,  1544,
  1796,  2563,  1545,  2563,  2563,    59,    59,    59,  1742,    59,
-32768,-32768,-32768,  1482,-32768,  2949,-32768,  1553,  1540,  1750,
-32768,-32768,  1753,-32768,  1754,-32768,    59,-32768,  1755,-32768,
  1759,  1560,  1770,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1063,  1063,  1063,    92,-32768,-32768,-32768,  1761,-32768,
  1780,-32768,-32768,  1580,  1576,-32768,  2980,  1583,  1579,  3011,
-32768,  1785,   436,   593,  1786,  3042,-32768,  1787,  1164,  1298,
  1542,  1956,  3073,  1983,-32768,  2011,  1789,  2041,  2062,  1795,
-32768,-32768,  2120,  2141,-32768,  2168,  1598,-32768,-32768,   233,
   235,  1596,  1627,-32768,  2637,  1626,   683,  2637,   685,   690,
  1629,  1635,  1636,  1632,  1639,   442,-32768,-32768,  4254,  1637,
-32768,  1839,  1638,-32768,-32768,-32768,  1845,  1844,-32768,-32768,
-32768,  1846,  1849,  1853,  1859,-32768,-32768,  1860,  1796,   602,
  1796,  1861,  1847,    59,   847,-32768,-32768,-32768,-32768,    59,
   919,-32768,-32768,-32768,-32768,-32768,    59,-32768,  1158,-32768,
-32768,-32768,-32768,-32768,  1191,  1395,-32768,-32768,   693,-32768,
  1863,  1864,  1644,-32768,  1866,-32768,-32768,  3348,  1796,  1663,
  3378,  1666,  1670,-32768,  1876,  1878,  1879,  1881,  1896,  2637,
  2637,  2637,  2637,  2637,-32768,-32768,  1691,-32768,  1812,  1898,
  1700,-32768,  1696,  1697,-32768,-32768,-32768,-32768,-32768,  1705,
  1790,  1703,-32768,  1710,  1706,-32768,  1707,-32768,   238,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   479,  1796,-32768,-32768,
   245,   476,-32768,  1708,-32768,-32768,  1711,  2563,-32768,-32768,
-32768,-32768,  1916,  2196,  2226,  2247,  2268,  2289,-32768,  1921,
-32768,-32768,-32768,  1063,  1918,  1722,  2637,  1931,    59,  2637,
  1729,  2637,   752,-32768,-32768,  1935,  1937,  1938,-32768,-32768,
  1740,-32768,-32768,  1796,  2637,   699,-32768,-32768,-32768,-32768,
-32768,-32768,  1747,  1734,  1758,  1760,-32768,-32768,  4062,-32768,
  1763,  3104,-32768,  4089,  1941,  2637,    59,  1954,    92,  1955,
-32768,-32768,  1960,  1963,  1966,    92,-32768,  1765,  3135,  1766,
-32768,  1967,  1971,  1972,  1738,  1974,  1751,  2637,  1773,  1775,
  1976,  2326,  1979,  1980,  1982,  1985,-32768,-32768,-32768,  1986,
-32768,-32768,  2637,  1784,-32768,-32768,-32768,-32768,-32768,-32768,
  4116,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  1791,  3408,  2637,  1950,  1831,  1788,  1890,  1993,-32768,  3166,
    92,-32768,-32768,-32768,-32768,  2637,  1994,  1926,  3197,-32768,
-32768,  2637,  1895,  3438,  1998,-32768,   914,  1997,  1794,-32768,
  2008,  2012,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -235,-32768,-32768,  -285,    49,-32768,-32768,  1148,  -420,-32768,
  -391,-32768,  -368,  -439,  -464,-32768,-32768,-32768,-32768,  -323,
-32768,  1143,-32768,  -814,-32768,  -562,-32768,-32768,-32768,-32768,
-32768,-32768,  1368,-32768,  1048,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1507,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1257,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  -905,  -584,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768, -1254,-32768,
-32768,-32768,   947,   805,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,   636,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,  1558,-32768,  1479,-32768,  1904,-32768,
  1570,  1815,  -299,-32768,   338,   560,-32768,-32768,   -25,  -482,
  -561,  -134,   -22,  -104
};


#define	YYLAST		4493


static const short yytable[] = {   101,
   187,  1043,   104,   237,   376,   504,  1322,   523,   465,   420,
   556,   403,   691,   692,   410,   411,   413,   842,   536,   700,
   980,   312,   230,   313,   984,     4,   312,   546,   313,   723,
   550,  1360,     4,   554,     6,     4,  1365,    40,   348,    25,
   205,     6,  1371,     4,     6,     4,    30,   444,   653,     6,
  1379,     4,     6,   188,     6,   500,  1385,  1386,   514,   189,
     6,    -2,   312,   290,   313,   502,   384,   349,   231,   451,
  1007,   163,   164,   165,   517,   521,   535,  1010,  1051,   731,
   732,   733,   734,  1057,   206,  1224,   919,    25,   486,   545,
   230,    31,   736,   549,   737,   553,   230,  1323,   385,  1129,
   829,   451,   830,   831,   231,   386,   -58,   451,   596,   451,
   451,   310,   438,    62,    63,    64,   240,   241,   242,   243,
   244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
   254,   255,   256,   257,   258,   259,   231,   452,   540,   834,
    32,   836,   231,   263,   264,   265,   266,   267,   268,   269,
   270,   271,   272,   273,   274,   275,   276,   277,   278,   653,
   653,   653,   653,   230,   837,   184,   312,   514,   313,   452,
  1118,   185,    26,    27,   346,   452,    28,   452,   452,   845,
   846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
   856,   857,   858,   859,   860,    33,   864,    34,    42,   942,
    43,   387,   807,   711,  1119,   973,   515,   738,   825,   231,
   464,  1157,  1324,   231,    44,   597,   189,   664,   943,   -58,
   826,  -583,   889,   843,   138,   232,   648,   412,   314,   714,
   193,   194,   890,   314,   891,    35,   342,   201,   202,   343,
   210,   211,    41,   686,   653,   808,   207,   832,   214,   215,
   218,   219,   445,  1535,   595,   739,   223,   224,  1539,   653,
   653,   653,   653,   653,   653,   653,   653,   653,   653,   653,
   653,   653,   653,   653,   653,  1008,   653,   600,   522,   522,
   488,   987,  1011,  1052,  1018,    36,   920,    37,  1058,   773,
  1002,   375,   522,   232,   481,   921,   522,   712,   522,   232,
   367,   962,   522,   964,   971,  1575,   428,  1486,  1577,  1487,
  1488,    38,  1044,   429,   430,   431,   368,   358,   432,   433,
   362,   436,   101,   440,   363,   104,   369,   370,  1588,   359,
    39,   492,   364,    49,   371,  1045,   372,   493,   668,   669,
   670,   671,    45,   105,  1029,  1030,  1031,  1032,  1033,  1034,
  1489,  1055,   568,   944,   570,   571,   572,   695,   930,   116,
   696,   653,   353,   931,   354,  1019,   232,   892,   827,   800,
   232,    46,    47,    48,   355,  1020,   197,   198,   741,   742,
   743,   744,   745,   746,   747,   748,   749,   750,   956,   135,
   751,   752,   753,   754,   755,   756,   495,   498,   757,  1272,
  1273,   774,   493,   775,   776,   777,   516,   778,   779,   780,
   781,   782,   189,   511,   -61,   783,   805,   282,   784,  1115,
   189,   785,   493,   989,   786,   787,     6,  1120,   788,   990,
   884,   118,   885,   789,  1274,   790,   389,   378,  1392,   886,
  1395,   119,  1367,  1481,  1393,  1275,  1393,   379,   136,  1482,
   922,   390,  1350,   672,  1351,  1490,  1046,  1047,   283,   120,
   932,   373,   380,   934,   360,   933,   381,   365,   935,   391,
   121,   947,   122,   697,   811,   812,   813,   814,   815,   816,
   817,   818,   819,    26,    27,   820,   123,    28,   124,   821,
  1092,   963,   965,   966,   967,   791,   199,   200,   972,   653,
   125,   612,   822,   392,   261,   262,   126,   653,   127,   356,
  1409,  1410,  1411,  1412,  1413,  1414,  1029,  1030,  1031,  1032,
  1033,  1034,  1040,  1417,   868,   958,   959,   960,   961,   869,
   319,   262,  1127,   870,   871,   872,  1204,   128,  1486,   974,
  1487,  1488,   499,   189,   129,  1491,  1491,   130,   101,   101,
  1276,   104,   104,   698,   699,   101,   701,  1153,   104,  1130,
   569,   262,   706,   131,   709,   887,   137,   710,   605,   606,
   132,   393,   133,   804,   134,  1029,  1030,  1031,  1032,  1033,
  1034,  1489,   382,  1205,   608,   609,  1169,   610,   611,   138,
   801,   802,   654,   655,  1004,  1005,   139,  1063,   140,  1368,
   141,  1067,   142,  1206,  1207,   875,   773,   876,   877,   878,
   879,   880,   881,   657,   658,  1025,   143,   170,   171,   172,
   173,   174,   144,   175,   176,   177,   178,  1041,  1091,   179,
   180,   181,   182,   183,   823,   659,   660,   184,  1097,   186,
  1099,   661,   662,   185,   145,  1208,   222,  1106,   666,   667,
   227,  1078,  1415,   146,  1503,   675,   676,   873,  1505,   794,
   191,   948,   949,   950,   951,   679,   680,   196,   279,  1326,
   204,   209,   213,   217,   221,   147,   226,   148,  1134,  1209,
   238,    66,    67,   162,   239,  1339,  1493,  1352,  1353,  1354,
   810,   687,   262,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,   774,   149,
   775,   776,   777,   280,   778,   779,   780,   781,   782,   688,
   262,   992,   783,   396,  1239,   784,  1571,   150,   785,   151,
   882,   786,   787,  1195,   152,   788,  1196,   689,   262,  1160,
   789,   285,   790,   153,  1162,   154,  1197,  1198,   690,   262,
  1199,  1200,   605,   717,  1255,   653,   404,   405,   406,   407,
   281,  1259,   397,  1261,   170,   171,   172,   173,   174,   155,
   175,   176,   177,   178,   408,   320,   179,   180,   181,   182,
   183,   953,   262,   156,   184,  1087,   262,  1430,   157,  1432,
   185,  1279,   398,   158,   399,   159,  1281,  1054,   160,  1056,
  1088,   262,  1431,   161,   181,   182,   183,  1515,   291,  1516,
   184,   753,   754,   755,   756,   400,   185,   757,  1244,   297,
  1517,  1449,   318,  1079,   321,  1249,   347,  1454,   352,  1201,
  1187,   395,  1518,  1188,   179,   180,   181,   182,   183,  1089,
   262,   773,   184,  1189,  1190,  1191,  1284,  1519,   185,   414,
  1288,   422,  1090,   262,  1292,  1122,   262,  1295,   401,  1242,
  1243,   415,  1298,    97,  1256,  1257,  1258,   189,    98,  1260,
   189,    99,   416,  1307,  1278,   189,  1485,   101,   708,  1506,
   104,  1280,   189,  1400,   262,  1402,   262,  1317,   169,  1289,
  1403,   262,  1443,  1444,  1071,   417,  1073,   418,  1075,  1530,
   262,   421,  1331,  1332,  1333,   423,  1335,   994,   995,   425,
  1085,   704,   705,   773,   427,    66,    67,    68,  1520,   434,
   441,   442,  1528,  1344,    70,    71,  1192,    72,    73,    74,
    75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,  1521,   774,   446,   775,   776,   777,   447,   778,
   779,   780,   781,   782,   448,   449,   450,   783,   455,   456,
   784,   457,   458,   785,   459,   460,   786,   787,   461,  1355,
   788,    66,    67,   162,   462,   789,   463,   790,   466,   467,
   470,   468,   469,    72,    73,    74,    75,    76,    77,    78,
    79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
    89,    90,    91,    92,    93,    94,    95,    96,   751,   752,
   753,   754,   755,   756,   471,   774,   757,   775,   776,   777,
  1435,   778,   779,   780,   781,   782,  1437,   473,   474,   783,
   475,   476,   784,  1439,   478,   785,   480,  1436,   786,   787,
   479,   482,   788,   483,  1532,   484,  1027,   789,  1028,   790,
   485,   487,   170,   171,   172,   173,   174,   489,   175,   176,
   177,   178,   490,   491,   179,   180,   181,   182,   183,   496,
  1246,   909,   184,   501,   505,   510,   518,  1327,   185,  1329,
  1330,   910,   520,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
   525,   527,   528,   529,   532,   534,   541,    97,   542,   543,
   544,   552,    98,   310,   557,    99,   558,   560,   567,  1438,
   562,   563,  1598,   236,   911,   912,   913,   914,   915,   916,
   747,   748,   749,   750,   564,   566,   751,   752,   753,   754,
   755,   756,   573,   592,   757,  1511,   593,  1287,   601,   602,
  1290,   603,   773,  1293,  1294,   439,   607,   613,  1296,   683,
  1373,  1299,  1300,  1301,  1302,   656,   663,  1303,  1304,   665,
  1306,   674,  1308,    97,  1027,  1309,  1028,   678,    98,  1313,
  1314,    99,  1316,  1543,   681,   773,   684,   694,   702,   497,
   685,   693,   707,   715,   722,   101,   716,   724,   104,   726,
   727,   730,   735,   740,  1036,   758,   759,   766,   768,   769,
   770,  1029,  1030,  1031,  1032,  1033,  1034,  1035,   771,    66,
    67,   614,   795,  1545,   796,   803,   917,   797,   798,   799,
  1550,    72,    73,    74,    75,    76,   615,   616,   617,   618,
   619,   620,   621,   622,   623,   624,   625,   626,   627,   628,
   629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
   639,   806,   648,   835,   774,   838,   775,   776,   777,   839,
   778,   779,   780,   781,   782,   757,   840,   861,   783,   866,
   923,   784,   924,   929,   785,  1587,   925,   786,   787,  1398,
   936,   788,  1401,   926,  1374,   927,   789,   774,   790,   775,
   776,   777,   954,   778,   779,   780,   781,   782,   955,   968,
   928,   783,   952,  1496,   784,   969,   640,   785,   970,   975,
   786,   787,  1039,   101,   788,   101,   104,   937,   104,   789,
   938,   790,  1484,   939,   976,   170,   171,   172,   173,   174,
   977,   175,   176,   177,   178,   978,   979,   179,   180,   181,
   182,   183,   983,   993,   981,   184,   985,   101,  1440,   807,
   104,   185,   988,   101,   997,   986,   104,   998,   999,  1000,
  1001,  1002,  1006,  1013,  1464,  1465,  1466,  1467,  1468,   299,
   300,   301,   302,   303,   304,   305,   306,   307,  1014,   773,
  1015,  1441,  1016,  1017,  1021,  1022,  1023,  1024,  1061,  1064,
   894,  1049,   895,   896,   641,  1050,  1060,  1062,  1065,  1066,
   642,   643,   101,   897,  1068,   104,   644,  1069,  1070,   645,
  1080,  1083,   862,   863,   646,   647,   648,  1081,  1082,   898,
   899,   900,  1084,  1093,  1117,  1086,  1094,  1095,  1096,  1098,
  1100,  1509,  1101,   901,  1512,  1102,  1514,  1103,  1104,  1105,
  1107,  1114,  1108,  1109,  1112,  1113,  1116,  1121,   101,  1529,
  1123,   104,  1124,  1125,  1126,  1128,  1131,  1133,  1136,   170,
   171,   172,   173,   174,  1137,   175,   176,   177,   178,  1138,
  1542,   179,   180,   181,   182,   183,  1139,  1141,  1143,   184,
  1144,  1145,  1146,  1147,  1148,   185,  1149,  1150,  1151,  1152,
  1154,   774,  1561,   775,   776,   777,  1155,   778,   779,   780,
   781,   782,  1156,  1158,  1159,   783,  1161,  1572,   784,  1164,
  1163,   785,  1165,  1167,   786,   787,  1168,  1171,   788,  1172,
  1173,  1174,  1176,   789,  1177,   790,  1178,  1580,  1375,  1179,
  1180,  1181,   902,  1183,  1182,    66,    67,   614,   903,  1222,
  1589,  1184,  1223,  1185,  1221,  1229,  1594,    72,    73,    74,
    75,    76,   615,   616,   617,   618,   619,   620,   621,   622,
   623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
   633,   634,   635,   636,   637,   638,   639,    66,    67,   437,
    69,  1231,  1232,  1241,  1250,  1442,    70,    71,  1236,    72,
    73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
    83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
    93,    94,    95,    96,  1251,  1233,  1234,  1235,  1247,  1252,
  1237,  1238,   189,  1240,  1253,   231,    66,    67,    68,  1254,
  1263,  1264,   640,  1265,  1266,    70,    71,  1268,    72,    73,
    74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
    84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
    94,    95,    96,    66,    67,    68,    69,  1337,  1270,  1271,
  1282,  1283,    70,    71,  1285,    72,    73,    74,    75,    76,
    77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
  1286,  1291,  1297,   170,   171,   172,   173,   174,  1310,   175,
   176,   177,   178,  1305,  1318,   179,   180,   181,   182,   183,
   641,  1311,   773,   184,  1334,  1340,   642,   643,  1312,   185,
  1315,  1319,   644,  1325,  1328,   645,  1341,  1342,  1343,  1345,
   646,   647,   648,  1346,  1347,  1356,   741,   742,   743,   744,
   745,   746,   747,   748,   749,   750,  1349,   773,   751,   752,
   753,   754,   755,   756,  1357,  1358,   757,  1359,  1362,    97,
  1363,  1366,  1369,  1372,    98,  1381,   982,    99,    66,    67,
    68,  1384,   232,  1391,   100,  1396,  1447,    70,    71,  1448,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,   773,  1397,  1399,    97,  1404,
  1405,  1406,  1407,    98,  1408,  1419,    99,  1418,  1420,  1421,
  1422,  1434,  1425,   100,   774,  1426,   775,   776,   777,  1427,
   778,   779,   780,   781,   782,  1428,  1429,  1433,   783,  1445,
  1446,   784,  1450,  1455,   785,    97,  1457,   786,   787,  1458,
    98,   788,  1459,    99,  1460,  1461,   789,  1462,   790,   774,
   100,   775,   776,   777,   773,   778,   779,   780,   781,   782,
  1463,  1470,  1469,   783,  1471,  1472,   784,  1473,  1474,   785,
  1475,  1476,   786,   787,  1477,  1478,   788,  1479,  1480,  1494,
  1495,   789,  1497,   790,  1507,  1504,   175,   176,   177,   178,
   773,  1508,   179,   180,   181,   182,   183,  1510,  1513,  1523,
   184,  1524,  1525,   522,  1527,  1541,   185,   774,  1558,   775,
   776,   777,  1531,   778,   779,   780,   781,   782,  1544,  1546,
  1560,   783,  1376,  1533,   784,  1534,  1547,   785,  1537,  1548,
   786,   787,  1549,  1555,   788,  1552,  1554,  1556,  1557,   789,
  1559,   790,  1564,  1562,  1563,  1566,  1567,  1211,  1568,  1378,
    97,  1569,  1570,  1573,  1581,    98,  1578,  1583,    99,  1585,
  1590,  1595,  1597,  1599,  1600,   100,   774,  1602,   775,   776,
   777,  1603,   778,   779,   780,   781,   782,  1380,   996,   761,
   783,  1003,  1110,   784,   604,   906,   785,  1212,  1227,   786,
   787,  1321,  1452,   788,  1213,  1214,   561,   682,   789,   229,
   790,  1582,   774,   309,   775,   776,   777,  1382,   778,   779,
   780,   781,   782,   565,  1215,     0,   783,  1216,  1217,   784,
     0,     0,   785,     0,     0,   786,   787,     0,  1383,   788,
     0,     0,     0,     0,   789,     0,   790,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
    67,   162,     0,     0,     0,     0,  1218,     0,     0,     0,
  1584,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,  1387,     0,     0,     0,
  1219,     0,     0,     0,     0,     0,  1591,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,  1388,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,     0,     0,   185,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,  1390,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,     0,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,  1498,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,     0,     0,   185,     0,
     0,     0,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,  1499,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,   170,   171,   172,   173,   174,   185,   175,
   176,   177,   178,  1500,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,   170,   171,   172,   173,   174,   185,
   175,   176,   177,   178,  1501,     0,   179,   180,   181,   182,
   183,    97,     0,     0,   184,     0,    98,     0,     0,    99,
   185,     0,     0,   512,   439,  1502,     0,     0,     0,     0,
     0,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,   170,   171,   172,   173,   174,   185,   175,   176,
   177,   178,  1565,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,     0,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,     0,     0,   185,     0,     0,     0,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,   170,   171,
   172,   173,   174,   185,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,   170,
   171,   172,   173,   174,   185,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
   170,   171,   172,   173,   174,   185,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,     0,
     0,     0,   344,     0,     0,     0,     0,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,    66,    67,
    68,     0,     0,   185,     0,     0,     0,    70,    71,     0,
    72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
    92,    93,    94,    95,    96,    66,    67,    68,     0,     0,
     0,     0,     0,     0,    70,    71,   991,    72,    73,    74,
    75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
    85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
    95,    96,    66,    67,   162,   435,     0,     0,     0,     0,
     0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
    78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
    88,    89,    90,    91,    92,    93,    94,    95,    96,    66,
    67,   162,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
    81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,   170,   171,   172,   173,
   174,   345,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,    50,     0,   184,     0,    51,     0,
     0,   574,   185,     4,     0,     0,     0,     0,     5,     0,
     0,     0,     6,     0,     0,     0,     0,     0,     0,     0,
    97,     0,     0,     0,     0,    98,     0,     0,    99,     0,
     0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
     0,    53,     0,     7,     0,     0,     0,     0,     8,     0,
     0,     0,     0,     0,    54,   575,    55,    97,     0,     0,
     0,     9,    98,    10,     0,    99,    56,     0,     0,     0,
    57,     0,     0,    11,     0,     0,     0,    12,     0,     0,
     0,    58,     0,     0,   576,     0,     0,     0,    13,     0,
     0,     0,     0,     0,    97,     0,   577,     0,    59,    98,
     0,     0,    99,     0,     0,    14,     0,   578,   579,   580,
   581,   582,   583,   584,   585,   586,   587,   588,   589,   590,
   591,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,    97,     0,    60,     0,    61,    98,     0,     0,    99,
    15,     0,    16,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,    17,    18,    19,     0,
     0,   185,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,     0,     0,   185,     0,
     0,     0,   332,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,     0,     0,   185,
     0,     0,     0,   339,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,     0,     0,     0,   340,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,     0,   341,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
     0,     0,   185,     0,     0,     0,   946,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,     0,     0,   185,     0,     0,     0,  1186,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,     0,     0,   185,     0,     0,     0,  1194,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,     0,  1203,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,     0,     0,   185,     0,     0,     0,
  1338,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,     0,     0,   185,     0,     0,
     0,  1361,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,     0,     0,   185,     0,
     0,     0,  1364,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,     0,     0,   185,
     0,     0,     0,  1370,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,     0,     0,     0,  1377,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,     0,     0,     0,  1538,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
     0,     0,   185,     0,     0,     0,  1553,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,     0,     0,   185,     0,     0,     0,  1586,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,     0,     0,   185,     0,     0,     0,  1592,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,   594,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,   599,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,   957,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,  1230,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,  1453,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,  1456,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,  1579,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,     0,     0,   185,     0,     0,  1596,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,   260,     0,     0,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
   322,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,   323,     0,   185,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,   324,     0,   185,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,   325,     0,   185,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,   326,     0,
   185,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,   327,     0,   185,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,   328,     0,   185,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,   329,
     0,   185,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,   330,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,   331,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
   333,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,   334,     0,   185,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,   335,     0,   185,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,   336,     0,   185,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,   337,     0,
   185,   170,   171,   172,   173,   174,     0,   175,   176,   177,
   178,     0,     0,   179,   180,   181,   182,   183,     0,     0,
     0,   184,     0,     0,     0,   338,     0,   185,   170,   171,
   172,   173,   174,     0,   175,   176,   177,   178,     0,     0,
   179,   180,   181,   182,   183,     0,     0,     0,   184,     0,
     0,     0,   506,     0,   185,   170,   171,   172,   173,   174,
     0,   175,   176,   177,   178,     0,     0,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,   507,
     0,   185,   170,   171,   172,   173,   174,     0,   175,   176,
   177,   178,     0,     0,   179,   180,   181,   182,   183,     0,
     0,     0,   184,     0,     0,     0,   508,     0,   185,   170,
   171,   172,   173,   174,     0,   175,   176,   177,   178,     0,
     0,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     0,     0,     0,   509,     0,   185,   170,   171,   172,   173,
   174,     0,   175,   176,   177,   178,     0,     0,   179,   180,
   181,   182,   183,     0,     0,     0,   184,     0,     0,     0,
   721,     0,   185,   170,   171,   172,   173,   174,     0,   175,
   176,   177,   178,     0,     0,   179,   180,   181,   182,   183,
     0,     0,     0,   184,     0,     0,     0,  1536,     0,   185,
   170,   171,   172,   173,   174,     0,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,     0,     0,
   184,     0,     0,     0,  1540,     0,   185,   170,   171,   172,
   173,   174,     0,   175,   176,   177,   178,     0,     0,   179,
   180,   181,   182,   183,     0,     0,     0,   184,     0,     0,
     0,  1576,     0,   185,   170,   171,   172,   173,   174,     0,
   175,   176,   177,   178,     0,     0,   179,   180,   181,   182,
   183,     0,     0,     0,   184,     0,     0,     0,     0,     0,
   185,   741,   742,   743,   744,   745,   746,   747,   748,   749,
   750,     0,     0,   751,   752,   753,   754,   755,   756,     0,
     0,   757,   172,   173,   174,  1245,   175,   176,   177,   178,
     0,     0,   179,   180,   181,   182,   183,     0,   173,   174,
   184,   175,   176,   177,   178,     0,   185,   179,   180,   181,
   182,   183,     0,     0,     0,   184,     0,     0,     0,     0,
     0,   185,   741,   742,   743,   744,   745,   746,   747,   748,
   749,   750,     0,     0,   751,   752,   753,   754,   755,   756,
     0,     0,   757,     0,   841,   741,   742,   743,   744,   745,
   746,   747,   748,   749,   750,     0,     0,   751,   752,   753,
   754,   755,   756,     0,     0,   757,   743,   744,   745,   746,
   747,   748,   749,   750,     0,     0,   751,   752,   753,   754,
   755,   756,     0,     0,   757,   744,   745,   746,   747,   748,
   749,   750,     0,     0,   751,   752,   753,   754,   755,   756,
     0,     0,   757
};

static const short yycheck[] = {    25,
   105,   907,    25,   138,   290,   426,     5,   447,   377,   309,
   475,   297,   574,   575,   300,   301,   302,     5,   458,   581,
   835,     3,     5,     5,   839,     5,     3,   467,     5,   614,
   470,  1286,     5,   473,    14,     5,  1291,     5,   181,   181,
     5,    14,  1297,     5,    14,     5,   205,     5,   531,    14,
  1305,     5,    14,   206,    14,   424,  1311,  1312,     5,   212,
    14,     0,     3,   205,     5,    47,    76,   210,    51,    11,
     5,    97,    98,    99,   443,     7,     7,     5,     5,   642,
   643,   644,   645,     5,    49,     5,     5,   181,   412,     7,
     5,   210,     3,     7,     5,     7,     5,    96,   108,     7,
    64,    11,    66,    67,    51,   115,   205,    11,   500,    11,
    11,   210,   348,   148,   149,   150,   142,   143,   144,   145,
   146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
   156,   157,   158,   159,   160,   161,    51,    79,   462,   724,
   210,   726,    51,   169,   170,   171,   172,   173,   174,   175,
   176,   177,   178,   179,   180,   181,   182,   183,   184,   642,
   643,   644,   645,     5,   727,   202,     3,     5,     5,    79,
   985,   208,     5,     6,   279,    79,     9,    79,    79,   742,
   743,   744,   745,   746,   747,   748,   749,   750,   751,   752,
   753,   754,   755,   756,   757,   210,   759,   210,     5,    57,
     7,   211,     5,   595,     8,    47,   442,   118,    51,    51,
   206,  1026,   211,    51,    21,   501,   212,   541,    76,   205,
    63,   205,    66,   211,   210,   208,   210,   210,   210,   598,
   210,   211,    76,   210,    78,   210,   262,   210,   211,   262,
   210,   211,   210,   567,   727,    48,   211,   211,   210,   211,
   210,   211,   210,  1508,   195,   166,   210,   211,  1513,   742,
   743,   744,   745,   746,   747,   748,   749,   750,   751,   752,
   753,   754,   755,   756,   757,   210,   759,   513,   210,   210,
   415,   844,   210,   210,     5,   210,   205,   210,   210,     5,
   210,   206,   210,   208,   399,   205,   210,   597,   210,   208,
    50,   205,   210,   205,   205,  1560,   332,    63,  1563,    65,
    66,   210,    66,   339,   340,   341,    66,    64,   344,   345,
    64,   347,   348,   349,    68,   348,    76,    77,  1583,    76,
   210,   206,    76,     7,    84,    89,    86,   212,    96,    97,
    98,    99,   149,   205,   100,   101,   102,   103,   104,   105,
   106,   913,   487,   211,   489,   490,   491,   190,   205,   146,
   193,   844,    64,   210,    66,    86,   208,   211,   211,   693,
   208,   178,   179,   180,    76,    96,   210,   211,   182,   183,
   184,   185,   186,   187,   188,   189,   190,   191,   809,   205,
   194,   195,   196,   197,   198,   199,   206,   423,   202,    60,
    61,   117,   212,   119,   120,   121,   206,   123,   124,   125,
   126,   127,   212,   439,   206,   131,   206,     5,   134,   982,
   212,   137,   212,   206,   140,   141,    14,   990,   144,   212,
    76,     7,    78,   149,    95,   151,    76,    66,   206,    85,
   206,     7,     7,   206,   212,   106,   212,    76,   205,   212,
   774,    91,  1267,   211,  1269,   211,   210,   211,    46,     7,
   205,   211,    91,   205,   211,   210,    95,   211,   210,   109,
     7,   795,     7,   578,    51,    52,    53,    54,    55,    56,
    57,    58,    59,     5,     6,    62,     7,     9,     7,    66,
   955,   815,   816,   817,   818,   211,   210,   211,   822,   982,
     7,   527,    79,   143,   211,   212,     7,   990,     7,   211,
    69,    70,    71,    72,    73,    74,   100,   101,   102,   103,
   104,   105,   106,  1338,    78,   811,   812,   813,   814,    83,
   211,   212,   997,    87,    88,    89,    68,     7,    63,   825,
    65,    66,   211,   212,     7,  1451,  1452,     7,   574,   575,
   211,   574,   575,   579,   580,   581,   582,  1022,   581,   999,
   211,   212,   588,     7,   590,   211,   205,   593,   210,   211,
     7,   211,     7,   708,     7,   100,   101,   102,   103,   104,
   105,   106,   211,   115,   210,   211,  1051,   210,   211,   210,
   695,   696,   210,   211,   880,   881,     7,   921,   205,     7,
   205,   925,   205,   135,   136,    76,     5,    78,    79,    80,
    81,    82,    83,   210,   211,   901,   205,   182,   183,   184,
   185,   186,   205,   188,   189,   190,   191,   211,   952,   194,
   195,   196,   197,   198,   211,   210,   211,   202,   962,     7,
   964,   210,   211,   208,   205,   177,     5,   971,   210,   211,
     5,   937,   211,   205,  1469,   210,   211,   211,  1473,   685,
   211,   796,   797,   798,   799,   210,   211,   108,   212,  1231,
   111,   112,   113,   114,   115,   205,   117,   205,  1002,   211,
     5,     3,     4,     5,     5,  1248,   211,  1272,  1273,  1274,
   716,   211,   212,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,   117,   205,
   119,   120,   121,     7,   123,   124,   125,   126,   127,   211,
   212,   866,   131,    76,  1103,   134,  1551,   205,   137,   205,
   211,   140,   141,   115,   205,   144,   118,   211,   212,  1035,
   149,   192,   151,   205,  1040,   205,   128,   129,   211,   212,
   132,   133,   210,   211,  1133,  1248,   194,   195,   196,   197,
     5,  1140,   115,  1142,   182,   183,   184,   185,   186,   205,
   188,   189,   190,   191,   212,   206,   194,   195,   196,   197,
   198,   211,   212,   205,   202,   211,   212,  1359,   205,  1361,
   208,  1170,   145,   205,   147,   205,  1175,   912,   205,   914,
   211,   212,   211,   205,   196,   197,   198,    66,   205,    68,
   202,   196,   197,   198,   199,   168,   208,   202,  1114,   205,
    79,  1393,   205,   938,   212,  1121,   181,  1399,   205,   211,
   115,   210,    91,   118,   194,   195,   196,   197,   198,   211,
   212,     5,   202,   128,   129,   130,  1180,   106,   208,   210,
  1184,     8,   211,   212,  1188,   211,   212,  1191,   211,   210,
   211,   210,  1196,   195,   211,   212,   211,   212,   200,   211,
   212,   203,   210,  1207,   211,   212,  1448,   913,   210,  1474,
   913,   211,   212,   211,   212,   211,   212,  1221,     8,  1185,
   211,   212,   210,   211,   930,   210,   932,   210,   934,   211,
   212,   211,  1236,  1237,  1238,   210,  1240,   869,   870,   212,
   946,   584,   585,     5,     5,     3,     4,     5,   177,   206,
   181,   181,  1494,  1257,    12,    13,   211,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,   211,   117,     5,   119,   120,   121,     5,   123,
   124,   125,   126,   127,   210,     5,   210,   131,     5,   210,
   134,     5,     5,   137,   210,   210,   140,   141,   210,  1275,
   144,     3,     4,     5,   181,   149,   206,   151,     5,     5,
     5,   210,   210,    15,    16,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
    32,    33,    34,    35,    36,    37,    38,    39,   194,   195,
   196,   197,   198,   199,   210,   117,   202,   119,   120,   121,
  1364,   123,   124,   125,   126,   127,  1370,     5,   210,   131,
     5,     5,   134,  1377,     5,   137,     5,   211,   140,   141,
   210,     5,   144,   206,  1504,     5,    63,   149,    65,   151,
   162,   210,   182,   183,   184,   185,   186,   210,   188,   189,
   190,   191,   210,   210,   194,   195,   196,   197,   198,     3,
  1116,    66,   202,   106,   206,     7,   210,  1232,   208,  1234,
  1235,    76,     7,   100,   101,   102,   103,   104,   105,   106,
     7,   205,   205,     7,     7,     7,   181,   195,     7,     5,
     7,   210,   200,   210,     7,   203,   211,     7,   212,   211,
     7,     7,  1597,   211,   109,   110,   111,   112,   113,   114,
   188,   189,   190,   191,     7,     5,   194,   195,   196,   197,
   198,   199,     7,     7,   202,  1479,     8,  1183,     7,     7,
  1186,     5,     5,  1189,  1190,   208,     7,     5,  1194,   211,
     7,  1197,  1198,  1199,  1200,     7,     7,  1203,  1204,     7,
  1206,     7,  1208,   195,    63,  1211,    65,     7,   200,  1215,
  1216,   203,  1218,  1517,     7,     5,   212,     5,     5,   211,
   210,   210,     5,     7,   206,  1231,   210,   205,  1231,   205,
   205,     5,     3,     5,   211,   208,   205,     7,   210,   210,
   210,   100,   101,   102,   103,   104,   105,   106,   210,     3,
     4,     5,   212,  1519,   210,     6,   211,   210,   210,   210,
  1526,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,   206,   210,   205,   117,   205,   119,   120,   121,   205,
   123,   124,   125,   126,   127,   202,   190,     3,   131,   210,
   205,   134,   205,     7,   137,  1581,   205,   140,   141,  1325,
   210,   144,  1328,   205,     7,   205,   149,   117,   151,   119,
   120,   121,     7,   123,   124,   125,   126,   127,     5,   210,
   205,   131,   212,  1458,   134,     5,   100,   137,     5,     5,
   140,   141,   211,  1359,   144,  1361,  1359,   205,  1361,   149,
   205,   151,  1447,   205,   210,   182,   183,   184,   185,   186,
     5,   188,   189,   190,   191,     5,   206,   194,   195,   196,
   197,   198,     3,     5,   206,   202,   205,  1393,   211,     5,
  1393,   208,   206,  1399,     5,   211,  1399,     5,     5,     5,
   210,   210,     5,     5,  1410,  1411,  1412,  1413,  1414,   153,
   154,   155,   156,   157,   158,   159,   160,   161,     5,     5,
     5,   211,     5,     5,     5,     5,     3,     3,     7,     7,
    63,     5,    65,    66,   188,     5,     5,     5,     5,     5,
   194,   195,  1448,    76,     5,  1448,   200,     5,     5,   203,
     5,   210,   206,   207,   208,   209,   210,   205,   205,    92,
    93,    94,     5,     7,   206,   211,     7,     7,     7,     7,
     7,  1477,     7,   106,  1480,     7,  1482,     3,     7,     7,
     7,   212,     7,     7,     7,     7,   212,   205,  1494,  1495,
     7,  1494,    89,     7,     7,     7,   210,     5,     7,   182,
   183,   184,   185,   186,     7,   188,   189,   190,   191,     7,
  1516,   194,   195,   196,   197,   198,     7,     7,     7,   202,
     7,     7,     7,     7,     7,   208,     7,     7,     7,     7,
     7,   117,  1538,   119,   120,   121,     7,   123,   124,   125,
   126,   127,     7,     5,     5,   131,   205,  1553,   134,     5,
   205,   137,     5,     7,   140,   141,     7,     7,   144,     7,
     7,     7,     7,   149,     7,   151,   206,  1573,     7,   206,
   212,   212,   205,   212,   206,     3,     4,     5,   211,   206,
  1586,   212,   206,   212,   212,     7,  1592,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,    41,    42,    43,    44,     3,     4,     5,
     6,   210,   210,     7,     5,   211,    12,    13,   212,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,     7,   211,   210,   210,   206,     7,
   212,   212,   212,   212,    91,    51,     3,     4,     5,     7,
   206,     7,   100,     7,     7,    12,    13,     7,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,     3,     4,     5,     6,   206,     7,     7,
     7,     7,    12,    13,     5,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   210,   210,   210,   182,   183,   184,   185,   186,     5,   188,
   189,   190,   191,   210,     7,   194,   195,   196,   197,   198,
   188,   210,     5,   202,     3,   206,   194,   195,   210,   208,
   210,     7,   200,   210,   210,   203,     7,     5,     5,     5,
   208,   209,   210,     5,   205,     5,   182,   183,   184,   185,
   186,   187,   188,   189,   190,   191,     7,     5,   194,   195,
   196,   197,   198,   199,     5,   206,   202,   212,   206,   195,
   212,     7,     7,     7,   200,     7,   212,   203,     3,     4,
     5,     7,   208,   206,   210,   210,   163,    12,    13,   166,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,     5,   210,   212,   195,   211,
   206,   206,   211,   200,   206,     7,   203,   211,   211,     5,
     7,     5,     7,   210,   117,     7,   119,   120,   121,     7,
   123,   124,   125,   126,   127,     7,     7,     7,   131,     7,
     7,   134,     7,   211,   137,   195,   211,   140,   141,   210,
   200,   144,     7,   203,     7,     7,   149,     7,   151,   117,
   210,   119,   120,   121,     5,   123,   124,   125,   126,   127,
     5,    90,   212,   131,     7,   206,   134,   212,   212,   137,
   206,   122,   140,   141,   212,   206,   144,   212,   212,   212,
   210,   149,     7,   151,     7,     5,   188,   189,   190,   191,
     5,   210,   194,   195,   196,   197,   198,     7,   210,     5,
   202,     5,     5,   210,   205,     5,   208,   117,   211,   119,
   120,   121,   206,   123,   124,   125,   126,   127,     5,     5,
   210,   131,     7,   206,   134,   206,     7,   137,   206,     7,
   140,   141,     7,     7,   144,   211,   211,     7,     7,   149,
     7,   151,     7,   211,   210,     7,     7,    68,     7,     7,
   195,     7,     7,   210,    45,   200,   206,   210,   203,     7,
     7,   107,     5,     7,   211,   210,   117,     0,   119,   120,
   121,     0,   123,   124,   125,   126,   127,     7,   871,   652,
   131,   879,   975,   134,   518,   769,   137,   108,  1082,   140,
   141,  1227,  1397,   144,   115,   116,   479,   559,   149,   136,
   151,   211,   117,   229,   119,   120,   121,     7,   123,   124,
   125,   126,   127,   484,   135,    -1,   131,   138,   139,   134,
    -1,    -1,   137,    -1,    -1,   140,   141,    -1,     7,   144,
    -1,    -1,    -1,    -1,   149,    -1,   151,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
     4,     5,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
   211,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,     7,    -1,    -1,    -1,
   211,    -1,    -1,    -1,    -1,    -1,   211,   182,   183,   184,
   185,   186,    -1,   188,   189,   190,   191,     7,    -1,   194,
   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,
    -1,    -1,    -1,   208,   182,   183,   184,   185,   186,    -1,
   188,   189,   190,   191,     7,    -1,   194,   195,   196,   197,
   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,
   208,    -1,   182,   183,   184,   185,   186,    -1,   188,   189,
   190,   191,     7,    -1,   194,   195,   196,   197,   198,    -1,
    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,   208,    -1,
    -1,    -1,   182,   183,   184,   185,   186,    -1,   188,   189,
   190,   191,     7,    -1,   194,   195,   196,   197,   198,    -1,
    -1,    -1,   202,   182,   183,   184,   185,   186,   208,   188,
   189,   190,   191,     7,    -1,   194,   195,   196,   197,   198,
    -1,    -1,    -1,   202,   182,   183,   184,   185,   186,   208,
   188,   189,   190,   191,     7,    -1,   194,   195,   196,   197,
   198,   195,    -1,    -1,   202,    -1,   200,    -1,    -1,   203,
   208,    -1,    -1,   211,   208,     7,    -1,    -1,    -1,    -1,
    -1,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
   191,    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,
    -1,   202,   182,   183,   184,   185,   186,   208,   188,   189,
   190,   191,     7,    -1,   194,   195,   196,   197,   198,    -1,
    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,   208,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,   182,   183,   184,
   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,
   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,
    -1,    -1,    -1,   208,    -1,    -1,    -1,   182,   183,   184,
   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,
   195,   196,   197,   198,    -1,    -1,    -1,   202,   182,   183,
   184,   185,   186,   208,   188,   189,   190,   191,    -1,    -1,
   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,   182,
   183,   184,   185,   186,   208,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
   182,   183,   184,   185,   186,   208,   188,   189,   190,   191,
    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,
   202,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,
    -1,    -1,     8,    -1,    -1,    -1,    -1,   182,   183,   184,
   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,
   195,   196,   197,   198,    -1,    -1,    -1,   202,     3,     4,
     5,    -1,    -1,   208,    -1,    -1,    -1,    12,    13,    -1,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,    37,    38,    39,     3,     4,     5,    -1,    -1,
    -1,    -1,    -1,    -1,    12,    13,    51,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,     3,
     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,    37,    38,    39,   182,   183,   184,   185,
   186,     8,   188,   189,   190,   191,    -1,    -1,   194,   195,
   196,   197,   198,    -1,     3,    -1,   202,    -1,     7,    -1,
    -1,    57,   208,     5,    -1,    -1,    -1,    -1,    10,    -1,
    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
   195,    -1,    -1,    -1,    -1,   200,    -1,    -1,   203,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
    -1,    50,    -1,    45,    -1,    -1,    -1,    -1,    50,    -1,
    -1,    -1,    -1,    -1,    63,   111,    65,   195,    -1,    -1,
    -1,    63,   200,    65,    -1,   203,    75,    -1,    -1,    -1,
    79,    -1,    -1,    75,    -1,    -1,    -1,    79,    -1,    -1,
    -1,    90,    -1,    -1,   140,    -1,    -1,    -1,    90,    -1,
    -1,    -1,    -1,    -1,   195,    -1,   152,    -1,   107,   200,
    -1,    -1,   203,    -1,    -1,   107,    -1,   163,   164,   165,
   166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,   195,    -1,   142,    -1,   144,   200,    -1,    -1,   203,
   142,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,   182,   183,   184,   185,   186,
    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,   196,
   197,   198,    -1,    -1,    -1,   202,   178,   179,   180,    -1,
    -1,   208,   182,   183,   184,   185,   186,    -1,   188,   189,
   190,   191,    -1,    -1,   194,   195,   196,   197,   198,    -1,
    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,   208,    -1,
    -1,    -1,   212,   182,   183,   184,   185,   186,    -1,   188,
   189,   190,   191,    -1,    -1,   194,   195,   196,   197,   198,
    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,   208,
    -1,    -1,    -1,   212,   182,   183,   184,   185,   186,    -1,
   188,   189,   190,   191,    -1,    -1,   194,   195,   196,   197,
   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,
   208,    -1,    -1,    -1,   212,   182,   183,   184,   185,   186,
    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,   196,
   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,
    -1,   208,    -1,    -1,    -1,   212,   182,   183,   184,   185,
   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,
   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,
    -1,    -1,   208,    -1,    -1,    -1,   212,   182,   183,   184,
   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,
   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,
    -1,    -1,    -1,   208,    -1,    -1,    -1,   212,   182,   183,
   184,   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,
   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,
    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,   212,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,   212,
   182,   183,   184,   185,   186,    -1,   188,   189,   190,   191,
    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,
   202,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,
   212,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
   191,    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,
    -1,   202,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,
    -1,   212,   182,   183,   184,   185,   186,    -1,   188,   189,
   190,   191,    -1,    -1,   194,   195,   196,   197,   198,    -1,
    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,   208,    -1,
    -1,    -1,   212,   182,   183,   184,   185,   186,    -1,   188,
   189,   190,   191,    -1,    -1,   194,   195,   196,   197,   198,
    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,   208,
    -1,    -1,    -1,   212,   182,   183,   184,   185,   186,    -1,
   188,   189,   190,   191,    -1,    -1,   194,   195,   196,   197,
   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,
   208,    -1,    -1,    -1,   212,   182,   183,   184,   185,   186,
    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,   196,
   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,
    -1,   208,    -1,    -1,    -1,   212,   182,   183,   184,   185,
   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,
   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,
    -1,    -1,   208,    -1,    -1,    -1,   212,   182,   183,   184,
   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,
   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,
    -1,    -1,    -1,   208,    -1,    -1,    -1,   212,   182,   183,
   184,   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,
   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,
    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,   212,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,   211,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,   211,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,   211,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,   211,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,   211,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,   211,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,   211,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,   211,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,   204,    -1,    -1,    -1,   208,   182,   183,   184,   185,
   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,
   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,
   206,    -1,   208,   182,   183,   184,   185,   186,    -1,   188,
   189,   190,   191,    -1,    -1,   194,   195,   196,   197,   198,
    -1,    -1,    -1,   202,    -1,    -1,    -1,   206,    -1,   208,
   182,   183,   184,   185,   186,    -1,   188,   189,   190,   191,
    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,
   202,    -1,    -1,    -1,   206,    -1,   208,   182,   183,   184,
   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,
   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,
    -1,   206,    -1,   208,   182,   183,   184,   185,   186,    -1,
   188,   189,   190,   191,    -1,    -1,   194,   195,   196,   197,
   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,   206,    -1,
   208,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
   191,    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,
    -1,   202,    -1,    -1,    -1,   206,    -1,   208,   182,   183,
   184,   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,
   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,
    -1,    -1,   206,    -1,   208,   182,   183,   184,   185,   186,
    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,   196,
   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,   206,
    -1,   208,   182,   183,   184,   185,   186,    -1,   188,   189,
   190,   191,    -1,    -1,   194,   195,   196,   197,   198,    -1,
    -1,    -1,   202,    -1,    -1,    -1,   206,    -1,   208,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,   206,    -1,   208,   182,   183,   184,   185,
   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,
   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,
   206,    -1,   208,   182,   183,   184,   185,   186,    -1,   188,
   189,   190,   191,    -1,    -1,   194,   195,   196,   197,   198,
    -1,    -1,    -1,   202,    -1,    -1,    -1,   206,    -1,   208,
   182,   183,   184,   185,   186,    -1,   188,   189,   190,   191,
    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,
   202,    -1,    -1,    -1,   206,    -1,   208,   182,   183,   184,
   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,
   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,
    -1,   206,    -1,   208,   182,   183,   184,   185,   186,    -1,
   188,   189,   190,   191,    -1,    -1,   194,   195,   196,   197,
   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,   206,    -1,
   208,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
   191,    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,
    -1,   202,    -1,    -1,    -1,   206,    -1,   208,   182,   183,
   184,   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,
   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,
    -1,    -1,   206,    -1,   208,   182,   183,   184,   185,   186,
    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,   196,
   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,   206,
    -1,   208,   182,   183,   184,   185,   186,    -1,   188,   189,
   190,   191,    -1,    -1,   194,   195,   196,   197,   198,    -1,
    -1,    -1,   202,    -1,    -1,    -1,   206,    -1,   208,   182,
   183,   184,   185,   186,    -1,   188,   189,   190,   191,    -1,
    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,   202,
    -1,    -1,    -1,   206,    -1,   208,   182,   183,   184,   185,
   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,   195,
   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,
   206,    -1,   208,   182,   183,   184,   185,   186,    -1,   188,
   189,   190,   191,    -1,    -1,   194,   195,   196,   197,   198,
    -1,    -1,    -1,   202,    -1,    -1,    -1,   206,    -1,   208,
   182,   183,   184,   185,   186,    -1,   188,   189,   190,   191,
    -1,    -1,   194,   195,   196,   197,   198,    -1,    -1,    -1,
   202,    -1,    -1,    -1,   206,    -1,   208,   182,   183,   184,
   185,   186,    -1,   188,   189,   190,   191,    -1,    -1,   194,
   195,   196,   197,   198,    -1,    -1,    -1,   202,    -1,    -1,
    -1,   206,    -1,   208,   182,   183,   184,   185,   186,    -1,
   188,   189,   190,   191,    -1,    -1,   194,   195,   196,   197,
   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,
   208,   182,   183,   184,   185,   186,   187,   188,   189,   190,
   191,    -1,    -1,   194,   195,   196,   197,   198,   199,    -1,
    -1,   202,   184,   185,   186,   206,   188,   189,   190,   191,
    -1,    -1,   194,   195,   196,   197,   198,    -1,   185,   186,
   202,   188,   189,   190,   191,    -1,   208,   194,   195,   196,
   197,   198,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,
    -1,   208,   182,   183,   184,   185,   186,   187,   188,   189,
   190,   191,    -1,    -1,   194,   195,   196,   197,   198,   199,
    -1,    -1,   202,    -1,   204,   182,   183,   184,   185,   186,
   187,   188,   189,   190,   191,    -1,    -1,   194,   195,   196,
   197,   198,   199,    -1,    -1,   202,   184,   185,   186,   187,
   188,   189,   190,   191,    -1,    -1,   194,   195,   196,   197,
   198,   199,    -1,    -1,   202,   185,   186,   187,   188,   189,
   190,   191,    -1,    -1,   194,   195,   196,   197,   198,   199,
    -1,    -1,   202
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
#line 320 "GetDP.y"
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
#line 354 "GetDP.y"
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
#line 435 "GetDP.y"
{ Help("Print"); ;
    break;}
case 22:
#line 437 "GetDP.y"
{ Help("Check"); ;
    break;}
case 23:
#line 439 "GetDP.y"
{ Help("Log"); ;
    break;}
case 24:
#line 441 "GetDP.y"
{ Help("Log"); ;
    break;}
case 25:
#line 443 "GetDP.y"
{ Help("Help"); ;
    break;}
case 26:
#line 445 "GetDP.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 27:
#line 447 "GetDP.y"
{ Msg(RESOURCES, ""); ;
    break;}
case 28:
#line 449 "GetDP.y"
{ Print_ProblemStructure(&Problem_S); ;
    break;}
case 29:
#line 451 "GetDP.y"
{ Print_Group(&Problem_S); ;
    break;}
case 30:
#line 453 "GetDP.y"
{ Print_Expression(&Problem_S); ;
    break;}
case 31:
#line 455 "GetDP.y"
{ Print_Constraint(&Problem_S); ;
    break;}
case 32:
#line 457 "GetDP.y"
{ Print_Jacobian(&Problem_S); ;
    break;}
case 33:
#line 459 "GetDP.y"
{ Print_Integration(&Problem_S); ;
    break;}
case 34:
#line 461 "GetDP.y"
{ Print_FunctionSpace(&Problem_S); ;
    break;}
case 35:
#line 463 "GetDP.y"
{ Print_Formulation(&Problem_S); ;
    break;}
case 36:
#line 465 "GetDP.y"
{ Print_Resolution(&Problem_S); ;
    break;}
case 37:
#line 467 "GetDP.y"
{ Print_PostProcessing(&Problem_S); ;
    break;}
case 38:
#line 469 "GetDP.y"
{ Print_PostOperation(&Problem_S); ;
    break;}
case 39:
#line 471 "GetDP.y"
{ Print_Object(yyvsp[-1].i, &Problem_S); ;
    break;}
case 40:
#line 473 "GetDP.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 41:
#line 481 "GetDP.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 43:
#line 498 "GetDP.y"
{ Nbr_Index = 0 ; ;
    break;}
case 45:
#line 505 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 46:
#line 508 "GetDP.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 47:
#line 511 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 48:
#line 513 "GetDP.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 51:
#line 524 "GetDP.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 52:
#line 529 "GetDP.y"
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
case 53:
#line 541 "GetDP.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 54:
#line 550 "GetDP.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 55:
#line 561 "GetDP.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 56:
#line 566 "GetDP.y"
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
case 57:
#line 603 "GetDP.y"
{ yyval.i = REGION ; ;
    break;}
case 58:
#line 606 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Function for Group: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_Type);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 59:
#line 618 "GetDP.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 60:
#line 620 "GetDP.y"
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
case 61:
#line 636 "GetDP.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 62:
#line 639 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 63:
#line 642 "GetDP.y"
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
case 64:
#line 693 "GetDP.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Supplementary Region: %s", yyvsp[0].c);
	Get_Valid_SXD(FunctionForGroup_SuppList);
      }
      Free(yyvsp[0].c) ;
    ;
    break;}
case 65:
#line 706 "GetDP.y"
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
case 66:
#line 730 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 67:
#line 737 "GetDP.y"
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
case 68:
#line 750 "GetDP.y"
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
case 69:
#line 768 "GetDP.y"
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
case 70:
#line 791 "GetDP.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 71:
#line 795 "GetDP.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 72:
#line 804 "GetDP.y"
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
case 73:
#line 818 "GetDP.y"
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
case 74:
#line 852 "GetDP.y"
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
case 75:
#line 865 "GetDP.y"
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
case 77:
#line 889 "GetDP.y"
{ if ( (i = List_ISearchSeq(Problem_S.Group, yyvsp[0].c, fcmp_Group_Name)) < 0 ) {
	Group_S.Type = REGIONLIST ; Group_S.FunctionType = REGION ;
	Group_S.InitialList = ListDummy_L ;
	Group_S.SuppListType = SUPPLIST_NONE ; Group_S.InitialSuppList = NULL ;
	i = Add_Group(&Group_S, yyvsp[0].c, 0, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 78:
#line 899 "GetDP.y"
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
case 81:
#line 921 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 82:
#line 926 "GetDP.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 83:
#line 927 "GetDP.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 84:
#line 932 "GetDP.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 88:
#line 951 "GetDP.y"
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
case 89:
#line 971 "GetDP.y"
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
case 92:
#line 1022 "GetDP.y"
{
      if ( (i = List_ISearchSeq
	    (Problem_S.Expression, yyvsp[0].c, fcmp_Expression_Name)) < 0 ) {
	Expression_S.Type = UNDEFINED_EXP ;
	Add_Expression(&Expression_S, yyvsp[0].c, 0) ;
      }
      else  Free(yyvsp[0].c) ;
    ;
    break;}
case 93:
#line 1042 "GetDP.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 94:
#line 1048 "GetDP.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 95:
#line 1054 "GetDP.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 96:
#line 1057 "GetDP.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 97:
#line 1064 "GetDP.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 99:
#line 1075 "GetDP.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 100:
#line 1078 "GetDP.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 101:
#line 1084 "GetDP.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 102:
#line 1088 "GetDP.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 104:
#line 1100 "GetDP.y"
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
case 105:
#line 1113 "GetDP.y"
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
case 106:
#line 1127 "GetDP.y"
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
case 107:
#line 1142 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 108:
#line 1148 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 109:
#line 1154 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 110:
#line 1160 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 111:
#line 1166 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 112:
#line 1172 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 113:
#line 1178 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 114:
#line 1184 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 115:
#line 1190 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 116:
#line 1196 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 117:
#line 1202 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 118:
#line 1208 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 119:
#line 1214 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 120:
#line 1220 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 121:
#line 1226 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 122:
#line 1232 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 123:
#line 1238 "GetDP.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 124:
#line 1245 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 126:
#line 1253 "GetDP.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 128:
#line 1266 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 129:
#line 1272 "GetDP.y"
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
case 130:
#line 1346 "GetDP.y"
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
case 131:
#line 1380 "GetDP.y"
{ WholeQuantity_S.Type = WQ_OPERATORANDQUANTITY ;
      WholeQuantity_S.Case.OperatorAndQuantity.NbrArguments = 0 ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeQuantity = QUANTITY_SIMPLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.TypeOperator = yyvsp[0].t.Int1 ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[0].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 132:
#line 1389 "GetDP.y"
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
case 133:
#line 1401 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 134:
#line 1403 "GetDP.y"
{ WholeQuantity_S.Type = WQ_TIMEDERIVATIVE ;
      WholeQuantity_S.Case.TimeDerivative.WholeQuantity = yyvsp[-1].l ;
      List_Read(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1,
		&Current_WholeQuantity_L) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;

      if (Current_DofIndexInWholeQuantity != Last_DofIndexInWholeQuantity)
	vyyerror("Dof{} definition out of context") ;
    ;
    break;}
case 135:
#line 1414 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 136:
#line 1416 "GetDP.y"
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
case 137:
#line 1432 "GetDP.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 138:
#line 1438 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = yyvsp[-1].t.Int2 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 139:
#line 1444 "GetDP.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 140:
#line 1446 "GetDP.y"
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
case 141:
#line 1475 "GetDP.y"
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
case 142:
#line 1499 "GetDP.y"
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
case 143:
#line 1512 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 144:
#line 1518 "GetDP.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 145:
#line 1525 "GetDP.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 146:
#line 1531 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_SAVEVALUE ;
      WholeQuantity_S.Case.SaveValue.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 147:
#line 1538 "GetDP.y"
{
      WholeQuantity_S.Type = WQ_VALUESAVED ;
      WholeQuantity_S.Case.ValueSaved.Index = yyvsp[0].i - 1 ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 148:
#line 1549 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 149:
#line 1550 "GetDP.y"
{ yyval.i = 0 ; ;
    break;}
case 150:
#line 1551 "GetDP.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 151:
#line 1556 "GetDP.y"
{ yyval.i = 1 ; ;
    break;}
case 152:
#line 1557 "GetDP.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 153:
#line 1563 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 154:
#line 1566 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 155:
#line 1569 "GetDP.y"
{ /* Attention: provisoire. Note: Impossible a mettre dans MultiFExpr
         car conflit avec Affectation dans Group */
      yyval.l = List_Create(2, 1, sizeof(double)) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(yyval.l, &Value) ;
    ;
    break;}
case 156:
#line 1585 "GetDP.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 157:
#line 1590 "GetDP.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 158:
#line 1597 "GetDP.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 160:
#line 1606 "GetDP.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 161:
#line 1611 "GetDP.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 162:
#line 1618 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 163:
#line 1621 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 164:
#line 1628 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 166:
#line 1638 "GetDP.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 167:
#line 1641 "GetDP.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 168:
#line 1644 "GetDP.y"
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
case 169:
#line 1682 "GetDP.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 170:
#line 1688 "GetDP.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 171:
#line 1695 "GetDP.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 173:
#line 1708 "GetDP.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 174:
#line 1715 "GetDP.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 175:
#line 1718 "GetDP.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 176:
#line 1725 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 177:
#line 1728 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 178:
#line 1735 "GetDP.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 180:
#line 1747 "GetDP.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 181:
#line 1757 "GetDP.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown subtype of Integration method: %s", yyvsp[-1].c);
	Get_Valid_SXD(Integration_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 182:
#line 1767 "GetDP.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 183:
#line 1774 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 184:
#line 1777 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 185:
#line 1784 "GetDP.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 187:
#line 1800 "GetDP.y"
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
case 188:
#line 1854 "GetDP.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 189:
#line 1857 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 190:
#line 1860 "GetDP.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 191:
#line 1863 "GetDP.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 192:
#line 1866 "GetDP.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 193:
#line 1877 "GetDP.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 195:
#line 1887 "GetDP.y"
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
case 197:
#line 1912 "GetDP.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 199:
#line 1926 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 200:
#line 1932 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 201:
#line 1939 "GetDP.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 202:
#line 1948 "GetDP.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 203:
#line 1951 "GetDP.y"
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
case 204:
#line 1973 "GetDP.y"
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
case 205:
#line 1988 "GetDP.y"
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
case 206:
#line 2012 "GetDP.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 208:
#line 2026 "GetDP.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Constraint: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 209:
#line 2036 "GetDP.y"
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
case 210:
#line 2060 "GetDP.y"
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
case 211:
#line 2085 "GetDP.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 212:
#line 2090 "GetDP.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 213:
#line 2098 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 214:
#line 2106 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 215:
#line 2116 "GetDP.y"
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
case 216:
#line 2133 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 217:
#line 2141 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 218:
#line 2148 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 219:
#line 2155 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 220:
#line 2164 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 221:
#line 2173 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 222:
#line 2182 "GetDP.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK ||
	  ConstraintPerRegion_S.Type == CST_LINKCPLX) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 223:
#line 2203 "GetDP.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 225:
#line 2214 "GetDP.y"
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
case 227:
#line 2241 "GetDP.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 229:
#line 2254 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 230:
#line 2260 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 231:
#line 2267 "GetDP.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of FunctionSpace: %s", yyvsp[-1].c);
	Get_Valid_SXD(Field_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 232:
#line 2276 "GetDP.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 233:
#line 2279 "GetDP.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 234:
#line 2282 "GetDP.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 235:
#line 2285 "GetDP.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 236:
#line 2292 "GetDP.y"
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
case 237:
#line 2308 "GetDP.y"
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
case 238:
#line 2357 "GetDP.y"
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
case 240:
#line 2377 "GetDP.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 241:
#line 2380 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 242:
#line 2385 "GetDP.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 243:
#line 2390 "GetDP.y"
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
case 244:
#line 2404 "GetDP.y"
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
case 245:
#line 2424 "GetDP.y"
{ BasisFunction_S.SubFunction =
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(BasisFunction_S.SubFunction, &j) ;
      }
    ;
    break;}
case 246:
#line 2433 "GetDP.y"
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
case 247:
#line 2457 "GetDP.y"
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
case 249:
#line 2517 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 250:
#line 2520 "GetDP.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 251:
#line 2529 "GetDP.y"
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
case 252:
#line 2595 "GetDP.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 253:
#line 2599 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 254:
#line 2606 "GetDP.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 256:
#line 2615 "GetDP.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 257:
#line 2620 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 258:
#line 2623 "GetDP.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 259:
#line 2630 "GetDP.y"
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
case 260:
#line 2646 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 261:
#line 2652 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 262:
#line 2655 "GetDP.y"
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
case 263:
#line 2674 "GetDP.y"
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
case 264:
#line 2686 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 265:
#line 2692 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 266:
#line 2695 "GetDP.y"
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
case 267:
#line 2710 "GetDP.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 268:
#line 2714 "GetDP.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 269:
#line 2723 "GetDP.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 271:
#line 2734 "GetDP.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 272:
#line 2739 "GetDP.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalQuantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(GlobalQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 273:
#line 2749 "GetDP.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 274:
#line 2762 "GetDP.y"
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
case 275:
#line 2777 "GetDP.y"
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
case 276:
#line 2851 "GetDP.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 278:
#line 2867 "GetDP.y"
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
case 279:
#line 2885 "GetDP.y"
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
case 280:
#line 2899 "GetDP.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 281:
#line 2902 "GetDP.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 282:
#line 2905 "GetDP.y"
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
case 283:
#line 2951 "GetDP.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 285:
#line 2961 "GetDP.y"
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
case 287:
#line 2987 "GetDP.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 289:
#line 2999 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 290:
#line 3005 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 291:
#line 3012 "GetDP.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Formulation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Formulation_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 293:
#line 3024 "GetDP.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 294:
#line 3030 "GetDP.y"
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
case 295:
#line 3044 "GetDP.y"
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
case 296:
#line 3062 "GetDP.y"
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
case 298:
#line 3083 "GetDP.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 299:
#line 3086 "GetDP.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 300:
#line 3090 "GetDP.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 301:
#line 3093 "GetDP.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of Quantity: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineQuantity_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 302:
#line 3103 "GetDP.y"
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
case 303:
#line 3142 "GetDP.y"
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
case 304:
#line 3166 "GetDP.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 305:
#line 3171 "GetDP.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 306:
#line 3177 "GetDP.y"
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
case 307:
#line 3338 "GetDP.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 308:
#line 3343 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 309:
#line 3352 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 310:
#line 3361 "GetDP.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 312:
#line 3369 "GetDP.y"
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
case 313:
#line 3409 "GetDP.y"
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
case 314:
#line 3424 "GetDP.y"
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
case 315:
#line 3452 "GetDP.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 316:
#line 3455 "GetDP.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 317:
#line 3458 "GetDP.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 318:
#line 3461 "GetDP.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 319:
#line 3468 "GetDP.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 321:
#line 3479 "GetDP.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of GlobalEquation: %s", yyvsp[-1].c);
	Get_Valid_SXD(Constraint_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 322:
#line 3489 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 323:
#line 3499 "GetDP.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 324:
#line 3513 "GetDP.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 326:
#line 3525 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = yyvsp[-1].t.Int2 ; ;
    break;}
case 327:
#line 3527 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = yyvsp[-1].t.Int2 ; ;
    break;}
case 328:
#line 3529 "GetDP.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = yyvsp[-1].t.Int2 ; ;
    break;}
case 329:
#line 3531 "GetDP.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 330:
#line 3539 "GetDP.y"
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
case 332:
#line 3561 "GetDP.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 333:
#line 3569 "GetDP.y"
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
case 334:
#line 3631 "GetDP.y"
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
case 335:
#line 3677 "GetDP.y"
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
case 336:
#line 3701 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 337:
#line 3710 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 338:
#line 3724 "GetDP.y"
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
case 340:
#line 3753 "GetDP.y"
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
case 341:
#line 3777 "GetDP.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 342:
#line 3785 "GetDP.y"
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
case 343:
#line 3840 "GetDP.y"
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
case 344:
#line 3857 "GetDP.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 345:
#line 3858 "GetDP.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 346:
#line 3859 "GetDP.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 347:
#line 3860 "GetDP.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 348:
#line 3861 "GetDP.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 349:
#line 3862 "GetDP.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 350:
#line 3863 "GetDP.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 351:
#line 3870 "GetDP.y"
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
case 352:
#line 3891 "GetDP.y"
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
case 353:
#line 3915 "GetDP.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 355:
#line 3925 "GetDP.y"
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
case 357:
#line 3950 "GetDP.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 359:
#line 3962 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 360:
#line 3969 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 361:
#line 3976 "GetDP.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 362:
#line 3979 "GetDP.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 363:
#line 3981 "GetDP.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 364:
#line 3987 "GetDP.y"
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
case 365:
#line 4002 "GetDP.y"
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
case 366:
#line 4021 "GetDP.y"
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
case 368:
#line 4040 "GetDP.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 369:
#line 4043 "GetDP.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of System: %s", yyvsp[-1].c);
	Get_Valid_SXD(DefineSystem_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 370:
#line 4052 "GetDP.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 371:
#line 4055 "GetDP.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 372:
#line 4060 "GetDP.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 373:
#line 4065 "GetDP.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 374:
#line 4070 "GetDP.y"
{ DefineSystem_S.FrequencyValue = yyvsp[-1].l;
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 375:
#line 4075 "GetDP.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 376:
#line 4084 "GetDP.y"
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
case 377:
#line 4121 "GetDP.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 378:
#line 4128 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 379:
#line 4131 "GetDP.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 380:
#line 4143 "GetDP.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 381:
#line 4153 "GetDP.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 382:
#line 4159 "GetDP.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 383:
#line 4162 "GetDP.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 384:
#line 4174 "GetDP.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 385:
#line 4182 "GetDP.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 386:
#line 4193 "GetDP.y"
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
case 387:
#line 4210 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 388:
#line 4217 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 389:
#line 4223 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 390:
#line 4229 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 391:
#line 4235 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 392:
#line 4243 "GetDP.y"
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
case 393:
#line 4260 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 394:
#line 4267 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 395:
#line 4273 "GetDP.y"
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
case 396:
#line 4284 "GetDP.y"
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
case 397:
#line 4295 "GetDP.y"
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
case 398:
#line 4307 "GetDP.y"
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
case 399:
#line 4319 "GetDP.y"
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
case 400:
#line 4339 "GetDP.y"
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
case 401:
#line 4356 "GetDP.y"
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
case 402:
#line 4379 "GetDP.y"
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
case 403:
#line 4392 "GetDP.y"
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
case 404:
#line 4406 "GetDP.y"
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
case 405:
#line 4419 "GetDP.y"
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
case 406:
#line 4431 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 408:
#line 4440 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 410:
#line 4449 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 411:
#line 4459 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_POSTOPERATION ;
      Operation_P->Case.PostOperation.PostOperations =
	List_Create(1,1,sizeof(char*));
      List_Add(Operation_P->Case.PostOperation.PostOperations, &yyvsp[-2].c);
    ;
    break;}
case 412:
#line 4469 "GetDP.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-2].c ; 
    ;
    break;}
case 413:
#line 4480 "GetDP.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 414:
#line 4489 "GetDP.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 415:
#line 4499 "GetDP.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 417:
#line 4509 "GetDP.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 418:
#line 4512 "GetDP.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 419:
#line 4522 "GetDP.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(yyvsp[0].l), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(yyvsp[0].l) ; i++) {
	List_Read(yyvsp[0].l, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 420:
#line 4538 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 422:
#line 4554 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 423:
#line 4558 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 424:
#line 4562 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 425:
#line 4566 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 426:
#line 4571 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 427:
#line 4582 "GetDP.y"
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
case 429:
#line 4599 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 430:
#line 4603 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 431:
#line 4607 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 432:
#line 4611 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 433:
#line 4615 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 434:
#line 4620 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 435:
#line 4631 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.Criterion = 1.e-3 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 437:
#line 4646 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 438:
#line 4650 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 439:
#line 4654 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 440:
#line 4658 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 441:
#line 4662 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 442:
#line 4673 "GetDP.y"
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
case 444:
#line 4691 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 445:
#line 4695 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 446:
#line 4699 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 447:
#line 4703 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 448:
#line 4708 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown System: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 449:
#line 4718 "GetDP.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 450:
#line 4724 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 451:
#line 4730 "GetDP.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 452:
#line 4740 "GetDP.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 453:
#line 4743 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 454:
#line 4748 "GetDP.y"
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
case 456:
#line 4766 "GetDP.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError){
	vyyerror("Unknown type of ChangeOfState: %s", yyvsp[-1].c);
	Get_Valid_SXD(ChangeOfState_Type);
      }
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 457:
#line 4776 "GetDP.y"
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
case 458:
#line 4805 "GetDP.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 459:
#line 4808 "GetDP.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 460:
#line 4811 "GetDP.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 461:
#line 4819 "GetDP.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown name of expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 462:
#line 4836 "GetDP.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 464:
#line 4848 "GetDP.y"
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
case 466:
#line 4871 "GetDP.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 468:
#line 4885 "GetDP.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 469:
#line 4892 "GetDP.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 470:
#line 4900 "GetDP.y"
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
case 471:
#line 4946 "GetDP.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 472:
#line 4951 "GetDP.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 473:
#line 4957 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 474:
#line 4960 "GetDP.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 475:
#line 4965 "GetDP.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 477:
#line 4976 "GetDP.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 478:
#line 4979 "GetDP.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 479:
#line 4985 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 480:
#line 4990 "GetDP.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 481:
#line 4996 "GetDP.y"
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
case 482:
#line 5010 "GetDP.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 484:
#line 5024 "GetDP.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 485:
#line 5031 "GetDP.y"
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
case 486:
#line 5059 "GetDP.y"
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
case 487:
#line 5069 "GetDP.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 488:
#line 5070 "GetDP.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 489:
#line 5076 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown Jacobian method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 490:
#line 5085 "GetDP.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown Integration method: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 491:
#line 5102 "GetDP.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 493:
#line 5114 "GetDP.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 495:
#line 5121 "GetDP.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 497:
#line 5133 "GetDP.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 498:
#line 5140 "GetDP.y"
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
case 499:
#line 5152 "GetDP.y"
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
case 500:
#line 5163 "GetDP.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 501:
#line 5168 "GetDP.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 502:
#line 5174 "GetDP.y"
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
case 503:
#line 5191 "GetDP.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 504:
#line 5201 "GetDP.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 505:
#line 5204 "GetDP.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 506:
#line 5208 "GetDP.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 507:
#line 5219 "GetDP.y"
{
      vyyerror("Plot has been superseded by Print (Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 508:
#line 5223 "GetDP.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 509:
#line 5227 "GetDP.y"
{
      PostSubOperation_S.Type = POP_GROUP ;
      PostSubOperation_S.Case.Group.ExtendedGroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[0].i) ;
    ;
    break;}
case 510:
#line 5232 "GetDP.y"
{
      PostSubOperation_S.Case.Group.GroupIndex = Num_Group(&Group_S, "PO_Group", yyvsp[-3].i) ;
    ;
    break;}
case 511:
#line 5240 "GetDP.y"
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
case 512:
#line 5252 "GetDP.y"
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
case 513:
#line 5275 "GetDP.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 514:
#line 5276 "GetDP.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 515:
#line 5277 "GetDP.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 516:
#line 5278 "GetDP.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 517:
#line 5284 "GetDP.y"
{ yyval.i = -1 ; ;
    break;}
case 518:
#line 5286 "GetDP.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 519:
#line 5292 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 520:
#line 5298 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 521:
#line 5305 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 522:
#line 5314 "GetDP.y"
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
case 523:
#line 5336 "GetDP.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 524:
#line 5344 "GetDP.y"
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
case 525:
#line 5355 "GetDP.y"
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
case 526:
#line 5369 "GetDP.y"
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
case 527:
#line 5390 "GetDP.y"
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
case 528:
#line 5417 "GetDP.y"
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
case 529:
#line 5448 "GetDP.y"
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
case 530:
#line 5468 "GetDP.y"
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
    ;
    break;}
case 532:
#line 5493 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 533:
#line 5500 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 534:
#line 5507 "GetDP.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 535:
#line 5514 "GetDP.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 536:
#line 5518 "GetDP.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 537:
#line 5522 "GetDP.y"
{
      PostSubOperation_S.Smoothing = 1 ; 
    ;
    break;}
case 538:
#line 5526 "GetDP.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 539:
#line 5530 "GetDP.y"
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
case 540:
#line 5540 "GetDP.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 541:
#line 5545 "GetDP.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 542:
#line 5550 "GetDP.y"
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
case 543:
#line 5570 "GetDP.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Wrong Dimension in Print") ;  	
    ;
    break;}
case 544:
#line 5577 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);
	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 545:
#line 5586 "GetDP.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(PostSubOperation_AdaptationType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Adaptation method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_AdaptationType);
      }
    ;
    break;}
case 546:
#line 5595 "GetDP.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(PostSubOperation_SortType, yyvsp[0].c, &FlagError) ;
      if(FlagError){
	vyyerror("Unknown Sort method: %s", yyvsp[0].c);
	Get_Valid_SXD(PostSubOperation_SortType);
      }
    ;
    break;}
case 547:
#line 5604 "GetDP.y"
{ 
      if(yyvsp[0].d >= 0.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target value") ;
    ;
    break;}
case 548:
#line 5611 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 549:
#line 5619 "GetDP.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 550:
#line 5623 "GetDP.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(yyvsp[-1].l) ; i++){
	List_Read(yyvsp[-1].l,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
      List_Delete(yyvsp[-1].l);
    ;
    break;}
case 551:
#line 5632 "GetDP.y"
{ 
      PostSubOperation_S.NoNewLine = 1 ;
    ;
    break;}
case 552:
#line 5636 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l,i,&d);	
	List_Add(PostSubOperation_S.Frequency_L, &d);
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 553:
#line 5644 "GetDP.y"
{ 
      PostSubOperation_S.ChangeOfCoordinates[0] = yyvsp[-5].i ;
      PostSubOperation_S.ChangeOfCoordinates[1] = yyvsp[-3].i ;
      PostSubOperation_S.ChangeOfCoordinates[2] = yyvsp[-1].i ;
    ;
    break;}
case 554:
#line 5655 "GetDP.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 555:
#line 5661 "GetDP.y"
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
case 556:
#line 5709 "GetDP.y"
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
case 557:
#line 5724 "GetDP.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 560:
#line 5737 "GetDP.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 561:
#line 5743 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 562:
#line 5749 "GetDP.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 563:
#line 5760 "GetDP.y"
{ yyval.c = "Exp";    ;
    break;}
case 564:
#line 5761 "GetDP.y"
{ yyval.c = "Log";    ;
    break;}
case 565:
#line 5762 "GetDP.y"
{ yyval.c = "Log10";  ;
    break;}
case 566:
#line 5763 "GetDP.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 567:
#line 5764 "GetDP.y"
{ yyval.c = "Sin";    ;
    break;}
case 568:
#line 5765 "GetDP.y"
{ yyval.c = "Asin";   ;
    break;}
case 569:
#line 5766 "GetDP.y"
{ yyval.c = "Cos";    ;
    break;}
case 570:
#line 5767 "GetDP.y"
{ yyval.c = "Acos";   ;
    break;}
case 571:
#line 5768 "GetDP.y"
{ yyval.c = "Tan";    ;
    break;}
case 572:
#line 5769 "GetDP.y"
{ yyval.c = "Atan";   ;
    break;}
case 573:
#line 5770 "GetDP.y"
{ yyval.c = "Atan2";  ;
    break;}
case 574:
#line 5771 "GetDP.y"
{ yyval.c = "Sinh";   ;
    break;}
case 575:
#line 5772 "GetDP.y"
{ yyval.c = "Cosh";   ;
    break;}
case 576:
#line 5773 "GetDP.y"
{ yyval.c = "Tanh";   ;
    break;}
case 577:
#line 5774 "GetDP.y"
{ yyval.c = "Fabs";   ;
    break;}
case 578:
#line 5775 "GetDP.y"
{ yyval.c = "Floor";  ;
    break;}
case 579:
#line 5776 "GetDP.y"
{ yyval.c = "Ceil";   ;
    break;}
case 580:
#line 5777 "GetDP.y"
{ yyval.c = "Fmod";   ;
    break;}
case 581:
#line 5778 "GetDP.y"
{ yyval.c = "Modulo"; ;
    break;}
case 582:
#line 5779 "GetDP.y"
{ yyval.c = "Hypot";  ;
    break;}
case 583:
#line 5780 "GetDP.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 584:
#line 5783 "GetDP.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 585:
#line 5784 "GetDP.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 586:
#line 5785 "GetDP.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 587:
#line 5786 "GetDP.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 588:
#line 5787 "GetDP.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 589:
#line 5788 "GetDP.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 590:
#line 5789 "GetDP.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 591:
#line 5790 "GetDP.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 592:
#line 5791 "GetDP.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 593:
#line 5792 "GetDP.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 594:
#line 5793 "GetDP.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 595:
#line 5794 "GetDP.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 596:
#line 5795 "GetDP.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 597:
#line 5796 "GetDP.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 598:
#line 5797 "GetDP.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 599:
#line 5798 "GetDP.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 600:
#line 5799 "GetDP.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 601:
#line 5800 "GetDP.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 602:
#line 5801 "GetDP.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 603:
#line 5802 "GetDP.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 604:
#line 5803 "GetDP.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 605:
#line 5804 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 606:
#line 5805 "GetDP.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 607:
#line 5806 "GetDP.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 608:
#line 5807 "GetDP.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 609:
#line 5808 "GetDP.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 610:
#line 5809 "GetDP.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 611:
#line 5810 "GetDP.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 612:
#line 5811 "GetDP.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 613:
#line 5812 "GetDP.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 614:
#line 5813 "GetDP.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 615:
#line 5814 "GetDP.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 616:
#line 5815 "GetDP.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 617:
#line 5816 "GetDP.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 618:
#line 5817 "GetDP.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 619:
#line 5818 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 620:
#line 5819 "GetDP.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 621:
#line 5820 "GetDP.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 622:
#line 5821 "GetDP.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 623:
#line 5822 "GetDP.y"
{ Msg(DIRECT, "Value (line %ld) --> %.16g", yylinenum, yyvsp[-1].d); ;
    break;}
case 624:
#line 5827 "GetDP.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 625:
#line 5828 "GetDP.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 626:
#line 5829 "GetDP.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 627:
#line 5830 "GetDP.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 628:
#line 5831 "GetDP.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 629:
#line 5832 "GetDP.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 630:
#line 5833 "GetDP.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 631:
#line 5835 "GetDP.y"
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
case 632:
#line 5853 "GetDP.y"
{ yyval.l = NULL; ;
    break;}
case 633:
#line 5856 "GetDP.y"
{ 
      yyval.l = List_Create(1,1,sizeof(double)) ;  
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 634:
#line 5862 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 635:
#line 5865 "GetDP.y"
{ yyval.l = yyvsp[-1].l; ;
    break;}
case 636:
#line 5872 "GetDP.y"
{ 
      yyval.l = List_Create(20,20,sizeof(double));
      List_Add(yyval.l, &(yyvsp[0].d)) ; 
    ;
    break;}
case 637:
#line 5878 "GetDP.y"
{ yyval.l = yyvsp[0].l; ;
    break;}
case 638:
#line 5881 "GetDP.y"
{ List_Add(yyval.l, &(yyvsp[0].d)) ; ;
    break;}
case 639:
#line 5884 "GetDP.y"
{ 
      for(i=0 ; i<List_Nbr(yyvsp[0].l) ; i++){
	List_Read(yyvsp[0].l, i, &Value) ;
	List_Add(yyval.l, &Value) ;
      }
      List_Delete(yyvsp[0].l);
    ;
    break;}
case 640:
#line 5896 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(yyval.l, &d) ;
    ;
    break;}
case 641:
#line 5902 "GetDP.y"
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
case 642:
#line 5913 "GetDP.y"
{ yyval.l = List_Create(20,20,sizeof(double)) ; 
      Constant_S.Name = yyvsp[-2].c ;
      if (!List_Query(ConstantTable_L, &Constant_S, fcmp_Constant))
	vyyerror("Unknown Constant: %s", yyvsp[-2].c) ;
      else
	if (Constant_S.Type != VAR_LISTOFFLOAT)
	  vyyerror("Multi value Constant needed: %s", yyvsp[-2].c) ;
	else
	  for(i=0 ; i<List_Nbr(Constant_S.Value.ListOfFloat) ; i++) {
	    List_Read(Constant_S.Value.ListOfFloat, i, &d) ;
	    List_Add(yyval.l, &d) ;
	  }
    ;
    break;}
case 643:
#line 5928 "GetDP.y"
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
case 644:
#line 5950 "GetDP.y"
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
case 645:
#line 5965 "GetDP.y"
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
case 646:
#line 6006 "GetDP.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 647:
#line 6009 "GetDP.y"
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
case 648:
#line 6024 "GetDP.y"
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
#line 6038 "GetDP.y"



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


