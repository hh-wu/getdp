
/*  A Bison parser, made from yacc.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	tINT	257
#define	tFLOAT	258
#define	tSTRING	259
#define	tBIGSTR	260
#define	tEND	261
#define	tDOTS	262
#define	tInclude	263
#define	tConstant	264
#define	tDefineConstant	265
#define	tPi	266
#define	t0D	267
#define	t1D	268
#define	t2D	269
#define	t3D	270
#define	tExp	271
#define	tLog	272
#define	tLog10	273
#define	tSqrt	274
#define	tSin	275
#define	tAsin	276
#define	tCos	277
#define	tAcos	278
#define	tTan	279
#define	tAtan	280
#define	tAtan2	281
#define	tSinh	282
#define	tCosh	283
#define	tTanh	284
#define	tFabs	285
#define	tFloor	286
#define	tCeil	287
#define	tFmod	288
#define	tModulo	289
#define	tHypot	290
#define	tSolidAngle	291
#define	tTrace	292
#define	tOrder	293
#define	tCrossProduct	294
#define	tGroup	295
#define	tDefineGroup	296
#define	tAll	297
#define	tInSupport	298
#define	tDefineFunction	299
#define	tList	300
#define	tListAlt	301
#define	tConstraint	302
#define	tRegion	303
#define	tSubRegion	304
#define	tRegionRef	305
#define	tSubRegionRef	306
#define	tFilter	307
#define	tCoefficient	308
#define	tValue	309
#define	tTimeFunction	310
#define	tBranch	311
#define	tNode	312
#define	tLoop	313
#define	tNameOfResolution	314
#define	tJacobian	315
#define	tCase	316
#define	tIntegration	317
#define	tType	318
#define	tSubType	319
#define	tCriterion	320
#define	tGeoElement	321
#define	tNumberOfPoints	322
#define	tMaxNumberOfPoints	323
#define	tNumberOfDivisions	324
#define	tMaxNumberOfDivisions	325
#define	tStoppingCriterion	326
#define	tFunctionSpace	327
#define	tName	328
#define	tBasisFunction	329
#define	tNameOfCoef	330
#define	tFunction	331
#define	tSupport	332
#define	tEntity	333
#define	tSubSpace	334
#define	tNameOfBasisFunction	335
#define	tGlobalQuantity	336
#define	tEntityType	337
#define	tEntitySubType	338
#define	tNameOfConstraint	339
#define	tFormulation	340
#define	tQuantity	341
#define	tNameOfSpace	342
#define	tIndexOfSystem	343
#define	tSymmetry	344
#define	tEquation	345
#define	tGalerkin	346
#define	tdeRham	347
#define	tGlobalTerm	348
#define	tGlobalEquation	349
#define	tDt	350
#define	tDtDof	351
#define	tDtDt	352
#define	tDtDtDof	353
#define	tJacNL	354
#define	tNeverDt	355
#define	tIn	356
#define	tResolution	357
#define	tDefineSystem	358
#define	tNameOfFormulation	359
#define	tNameOfMesh	360
#define	tFrequency	361
#define	tSolver	362
#define	tOriginSystem	363
#define	tDestinationSystem	364
#define	tOperation	365
#define	tOperationEnd	366
#define	tSetTime	367
#define	tDTime	368
#define	tSetFrequency	369
#define	tFourierTransform	370
#define	tIf	371
#define	tElse	372
#define	tLanczos	373
#define	tUpdate	374
#define	tTimeLoopTheta	375
#define	tTime0	376
#define	tTimeMax	377
#define	tTheta	378
#define	tTimeLoopNewmark	379
#define	tBeta	380
#define	tGamma	381
#define	tIterativeLoop	382
#define	tNbrMaxIteration	383
#define	tRelaxationFactor	384
#define	tIterativeTimeReduction	385
#define	tDivisionCoefficient	386
#define	tChangeOfState	387
#define	tChangeOfCoordinates	388
#define	tSystemCommand	389
#define	tPostProcessing	390
#define	tNameOfSystem	391
#define	tPostOperation	392
#define	tNameOfPostProcessing	393
#define	tUsingPost	394
#define	tAppend	395
#define	tPlot	396
#define	tPrint	397
#define	tWrite	398
#define	tAdapt	399
#define	tOnGlobal	400
#define	tOnRegion	401
#define	tOnElementsOf	402
#define	tOnGrid	403
#define	tOnCut	404
#define	tOnPoint	405
#define	tOnLine	406
#define	tOnPlane	407
#define	tOnBox	408
#define	tWithArgument	409
#define	tFile	410
#define	tDepth	411
#define	tDimension	412
#define	tTimeStep	413
#define	tHarmonicToTime	414
#define	tFormat	415
#define	tHeader	416
#define	tFooter	417
#define	tSkin	418
#define	tSmoothing	419
#define	tTarget	420
#define	tSort	421
#define	tIso	422
#define	tFlag	423
#define	tBreak	424
#define	tHelp	425
#define	tCpu	426
#define	tDEF	427
#define	tAND	428
#define	tOR	429
#define	tNOTEQUAL	430
#define	tEQUAL	431
#define	tAPPROXEQUAL	432
#define	tLESSOREQUAL	433
#define	tGREATEROREQUAL	434
#define	tLESSLESS	435
#define	tGREATERGREATER	436
#define	tCROSSPRODUCT	437
#define	UNARYPREC	438

#line 1 "yacc.y"

/* $Id: yacc.tab.c,v 1.24 2000-10-23 15:53:30 dular Exp $ */

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

#include "ualloc.h"
#include "outil.h"

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


#line 184 "yacc.y"
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



#define	YYFINAL		1540
#define	YYFLAG		-32768
#define	YYNTBASE	205

#define YYTRANSLATE(x) ((unsigned)(x) <= 438 ? yytranslate[x] : 387)

static const short yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   193,     2,   195,   196,   190,     2,     2,   202,
   203,   188,   186,   201,   187,   204,   189,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,   180,
     2,   181,   174,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
   199,     2,   200,   194,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,   197,     2,   198,     2,     2,     2,     2,     2,
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
   167,   168,   169,   170,   171,   172,   173,   175,   176,   177,
   178,   179,   182,   183,   184,   185,   191,   192
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
   385,   388,   390,   393,   394,   400,   405,   410,   411,   419,
   426,   429,   432,   435,   438,   442,   445,   449,   452,   456,
   458,   462,   463,   467,   474,   481,   482,   487,   488,   491,
   495,   500,   501,   506,   507,   510,   514,   518,   523,   524,
   529,   530,   533,   537,   541,   546,   547,   552,   553,   556,
   560,   564,   569,   570,   575,   576,   579,   583,   587,   591,
   595,   599,   603,   604,   607,   611,   613,   614,   617,   621,
   626,   630,   635,   641,   642,   647,   648,   651,   655,   659,
   663,   667,   671,   675,   683,   687,   691,   695,   699,   703,
   711,   719,   727,   728,   731,   735,   737,   738,   741,   745,
   750,   754,   759,   764,   769,   774,   775,   780,   781,   784,
   788,   792,   797,   802,   806,   810,   811,   812,   813,   832,
   833,   838,   839,   842,   846,   850,   852,   856,   857,   861,
   862,   867,   868,   871,   875,   879,   883,   884,   889,   890,
   893,   897,   903,   907,   911,   916,   917,   920,   924,   926,
   927,   930,   934,   939,   943,   948,   953,   954,   959,   960,
   963,   967,   971,   975,   979,   980,   987,   991,   992,   998,
  1002,  1006,  1010,  1014,  1015,  1019,  1020,  1023,  1028,  1033,
  1038,  1043,  1044,  1047,  1051,  1055,  1059,  1060,  1063,  1067,
  1071,  1075,  1079,  1080,  1083,  1084,  1085,  1095,  1099,  1103,
  1107,  1108,  1111,  1115,  1116,  1117,  1127,  1128,  1130,  1132,
  1134,  1136,  1138,  1140,  1145,  1149,  1150,  1153,  1157,  1159,
  1160,  1163,  1167,  1172,  1177,  1178,  1184,  1185,  1190,  1191,
  1194,  1198,  1202,  1206,  1210,  1214,  1218,  1222,  1226,  1229,
  1233,  1234,  1238,  1240,  1244,  1245,  1249,  1250,  1253,  1257,
  1261,  1266,  1271,  1276,  1281,  1287,  1293,  1296,  1304,  1316,
  1324,  1332,  1342,  1354,  1368,  1384,  1385,  1393,  1394,  1402,
  1410,  1414,  1416,  1418,  1419,  1422,  1426,  1430,  1433,  1434,
  1437,  1441,  1445,  1449,  1453,  1458,  1459,  1462,  1466,  1470,
  1474,  1478,  1482,  1487,  1488,  1491,  1495,  1499,  1503,  1507,
  1512,  1513,  1516,  1520,  1524,  1528,  1532,  1536,  1541,  1546,
  1551,  1552,  1557,  1558,  1561,  1565,  1569,  1573,  1577,  1581,
  1585,  1586,  1589,  1593,  1595,  1596,  1599,  1603,  1608,  1613,
  1617,  1622,  1623,  1628,  1629,  1632,  1636,  1641,  1642,  1648,
  1654,  1655,  1658,  1659,  1666,  1670,  1671,  1676,  1680,  1684,
  1685,  1688,  1692,  1694,  1695,  1698,  1702,  1706,  1710,  1714,
  1719,  1720,  1729,  1730,  1731,  1735,  1743,  1751,  1755,  1762,
  1764,  1766,  1768,  1770,  1771,  1775,  1777,  1780,  1783,  1808,
  1811,  1812,  1827,  1836,  1857,  1887,  1926,  1939,  1940,  1943,
  1947,  1952,  1957,  1961,  1964,  1968,  1972,  1976,  1980,  1984,
  1988,  1992,  1996,  2000,  2004,  2008,  2012,  2016,  2022,  2023,
  2026,  2027,  2031,  2033,  2037,  2038,  2040,  2044,  2046,  2048,
  2052,  2056,  2060,  2067,  2072,  2077,  2084,  2094,  2100,  2101,
  2105,  2111,  2117,  2119,  2121,  2123,  2125,  2127,  2129,  2131,
  2133,  2135,  2137,  2139,  2141,  2143,  2145,  2147,  2149,  2151,
  2153,  2155,  2157,  2159,  2161,  2165,  2168,  2171,  2175,  2179,
  2183,  2187,  2191,  2195,  2199,  2203,  2207,  2211,  2215,  2219,
  2223,  2227,  2232,  2237,  2242,  2247,  2252,  2257,  2262,  2267,
  2272,  2277,  2284,  2289,  2294,  2299,  2304,  2309,  2314,  2321,
  2328,  2335,  2341,  2344,  2346,  2348,  2350,  2352,  2354,  2356,
  2358,  2360,  2362
};

static const short yyrhs[] = {    -1,
   206,   207,     0,     0,     0,   207,   208,   209,     0,    41,
   197,   212,   198,     0,    77,   197,   232,   198,     0,    48,
   197,   263,   198,     0,    61,   197,   248,   198,     0,    63,
   197,   254,   198,     0,    73,   197,   270,   198,     0,    86,
   197,   291,   198,     0,   103,   197,   317,   198,     0,   136,
   197,   347,   198,     0,   138,   197,   359,   198,     0,   363,
     0,   381,     0,     9,   386,     0,   210,     0,   171,     7,
     0,   171,     5,     7,     0,   171,     5,     5,     7,     0,
   171,     5,     5,     5,     7,     0,   172,     7,     0,     0,
   211,   367,     0,     0,     0,   212,   213,   214,     0,     5,
   173,   216,     7,     0,     5,   231,   173,   216,     7,     0,
     0,     5,   229,   173,   215,   216,     7,     0,    42,   199,
   227,   200,     7,     0,   381,     0,     0,     0,   220,   199,
   217,   221,   218,   222,   200,     0,   195,   224,     0,   216,
     0,     5,   230,     0,    49,     0,     5,     0,   224,     0,
    43,     0,     0,   228,   223,   224,     0,   228,    44,     5,
   230,     0,     5,     0,   226,     0,   197,   225,   198,     0,
     0,   225,   228,   226,     0,   225,   228,   187,   226,     0,
     3,     0,     3,     8,     3,     0,     3,     8,   199,   384,
   200,     3,     0,     5,     0,     5,   197,   384,   198,     0,
     5,   197,   198,     0,     0,   227,   228,     5,     0,   227,
   228,     5,   197,   384,   198,     0,     0,   201,     0,   197,
   195,   384,   198,     0,     0,   197,   198,     0,   197,   384,
   198,     0,     0,   232,   233,     0,    45,   199,   234,   200,
     7,     0,     5,   199,   200,   173,   235,     7,     0,     5,
   199,   219,   200,   173,   235,     7,     0,   381,     0,     0,
   234,   228,     5,     0,    10,   199,   384,   200,     0,    77,
   199,     5,   200,     0,     0,   236,   237,     0,     0,   238,
   239,     0,   242,     0,     0,     0,   239,   174,   240,   239,
     8,   241,   239,     0,   239,   188,   239,     0,   239,   191,
   239,     0,    40,   199,   239,   201,   239,   200,     0,   239,
   189,   239,     0,   239,   186,   239,     0,   239,   187,   239,
     0,   239,   190,   239,     0,   239,   194,   239,     0,   239,
   180,   239,     0,   239,   181,   239,     0,   239,   182,   239,
     0,   239,   183,   239,     0,   239,   178,   239,     0,   239,
   177,   239,     0,   239,   179,   239,     0,   239,   175,   239,
     0,   239,   176,   239,     0,   187,   239,     0,   186,   239,
     0,   193,   239,     0,   202,   239,   203,     0,   385,     0,
   383,   245,   247,     0,     5,   316,     0,   316,     0,   316,
   245,     0,     0,    96,   243,   199,   237,   200,     0,    37,
   199,   316,   200,     0,    39,   199,   316,   200,     0,     0,
    38,   244,   199,   237,   201,   219,   200,     0,   180,     5,
   181,   199,   237,   200,     0,   196,     5,     0,   196,   159,
     0,   196,   114,     0,   196,     3,     0,   242,   195,     3,
     0,   195,     3,     0,   199,   204,   200,     0,   199,   200,
     0,   199,   246,   200,     0,   239,     0,   246,   201,   239,
     0,     0,   197,   379,   198,     0,   197,    49,   199,   219,
   200,   198,     0,   197,    46,   199,     5,   200,   198,     0,
     0,   248,   197,   249,   198,     0,     0,   249,   250,     0,
    74,     5,     7,     0,    62,   197,   251,   198,     0,     0,
   251,   197,   252,   198,     0,     0,   252,   253,     0,    49,
   219,     7,     0,    49,    43,     7,     0,    61,     5,   247,
     7,     0,     0,   254,   197,   255,   198,     0,     0,   255,
   256,     0,    74,     5,     7,     0,    66,   235,     7,     0,
    62,   197,   257,   198,     0,     0,   257,   197,   258,   198,
     0,     0,   258,   259,     0,    64,     5,     7,     0,    65,
     5,     7,     0,    62,   197,   260,   198,     0,     0,   260,
   197,   261,   198,     0,     0,   261,   262,     0,    67,     5,
     7,     0,    68,   384,     7,     0,    69,   384,     7,     0,
    70,   384,     7,     0,    71,   384,     7,     0,    72,   384,
     7,     0,     0,   263,   264,     0,   197,   265,   198,     0,
   381,     0,     0,   265,   266,     0,    74,     5,     7,     0,
    74,     5,   229,     7,     0,    64,     5,     7,     0,    62,
   197,   267,   198,     0,    62,     5,   197,   267,   198,     0,
     0,   267,   197,   268,   198,     0,     0,   268,   269,     0,
    64,     5,     7,     0,    49,   219,     7,     0,    50,   219,
     7,     0,    56,   235,     7,     0,    55,   235,     7,     0,
    60,     5,     7,     0,    57,   197,     3,   228,     3,   198,
     7,     0,    51,   219,     7,     0,    52,   219,     7,     0,
    77,   235,     7,     0,    54,   235,     7,     0,    53,   235,
     7,     0,    77,   199,   235,   201,   235,   200,     7,     0,
    54,   199,   235,   201,   235,   200,     7,     0,    53,   199,
   235,   201,   235,   200,     7,     0,     0,   270,   271,     0,
   197,   272,   198,     0,   381,     0,     0,   272,   273,     0,
    74,     5,     7,     0,    74,     5,   229,     7,     0,    64,
     5,     7,     0,    75,   197,   274,   198,     0,    80,   197,
   280,   198,     0,    82,   197,   285,   198,     0,    48,   197,
   288,   198,     0,     0,   274,   197,   275,   198,     0,     0,
   275,   276,     0,    74,     5,     7,     0,    76,     5,     7,
     0,    76,     5,   229,     7,     0,    77,     5,   277,     7,
     0,    78,   219,     7,     0,    79,   219,     7,     0,     0,
     0,     0,   197,    87,     5,     7,    86,     5,   229,     7,
   278,    41,   219,     7,   279,   103,     5,   230,     7,   198,
     0,     0,   280,   197,   281,   198,     0,     0,   281,   282,
     0,    74,     5,     7,     0,    81,   283,     7,     0,     5,
     0,   197,   284,   198,     0,     0,   284,   228,     5,     0,
     0,   285,   197,   286,   198,     0,     0,   286,   287,     0,
    74,     5,     7,     0,    64,     5,     7,     0,    76,     5,
     7,     0,     0,   288,   197,   289,   198,     0,     0,   289,
   290,     0,    76,     5,     7,     0,    79,   220,    85,     5,
     7,     0,    83,   220,     7,     0,    84,   223,     7,     0,
    85,     5,   230,     7,     0,     0,   291,   292,     0,   197,
   293,   198,     0,   381,     0,     0,   293,   294,     0,    74,
     5,     7,     0,    74,     5,   229,     7,     0,    64,     5,
     7,     0,    87,   197,   295,   198,     0,    91,   197,   301,
   198,     0,     0,   295,   197,   296,   198,     0,     0,   296,
   297,     0,    74,     5,     7,     0,    64,    82,     7,     0,
    64,    92,     7,     0,    64,     5,     7,     0,     0,    88,
     5,   230,   298,   300,     7,     0,    89,     3,     7,     0,
     0,   199,   299,   237,   200,     7,     0,   102,   219,     7,
     0,    63,     5,     7,     0,    61,     5,     7,     0,    90,
     3,     7,     0,     0,   199,     5,   200,     0,     0,   301,
   302,     0,    92,   197,   307,   198,     0,    93,   197,   307,
   198,     0,    94,   197,   311,   198,     0,    95,   197,   303,
   198,     0,     0,   303,   304,     0,    64,     5,     7,     0,
    85,     5,     7,     0,   197,   305,   198,     0,     0,   305,
   306,     0,    58,   316,     7,     0,    59,   316,     7,     0,
    91,   316,     7,     0,   102,   219,     7,     0,     0,   307,
   308,     0,     0,     0,   315,   199,   309,   237,   310,   201,
   237,   200,     7,     0,   102,   219,     7,     0,    61,     5,
     7,     0,    63,     5,     7,     0,     0,   311,   312,     0,
   102,   219,     7,     0,     0,     0,   315,   199,   313,   237,
   314,   201,   316,   200,     7,     0,     0,    96,     0,    97,
     0,    98,     0,    99,     0,   100,     0,   101,     0,   197,
     5,     5,   198,     0,   197,     5,   198,     0,     0,   317,
   318,     0,   197,   319,   198,     0,   381,     0,     0,   319,
   320,     0,    74,     5,     7,     0,    74,     5,   229,     7,
     0,   104,   197,   322,   198,     0,     0,   111,   321,   197,
   329,   198,     0,     0,   322,   197,   323,   198,     0,     0,
   323,   324,     0,    74,     5,     7,     0,    64,     5,     7,
     0,   105,   325,     7,     0,   106,   386,     7,     0,   109,
   327,     7,     0,   110,     5,     7,     0,   107,   378,     7,
     0,   108,   386,     7,     0,     5,   230,     0,   197,   326,
   198,     0,     0,   326,   228,     5,     0,     5,     0,   197,
   328,   198,     0,     0,   328,   228,     5,     0,     0,   329,
   330,     0,     5,     5,     7,     0,   113,   235,     7,     0,
   121,   197,   336,   198,     0,   125,   197,   338,   198,     0,
   128,   197,   340,   198,     0,   131,   197,   342,   198,     0,
     5,   199,     5,   200,     7,     0,   113,   199,   235,   200,
     7,     0,   170,     7,     0,   117,   199,   235,   200,   197,
   329,   198,     0,   117,   199,   235,   200,   197,   329,   198,
   118,   197,   329,   198,     0,   115,   199,     5,   201,   235,
   200,     7,     0,   120,   199,     5,   201,   235,   200,     7,
     0,   116,   199,     5,   201,     5,   201,   378,   200,     7,
     0,   119,   199,     5,   201,   384,   201,   378,   201,   384,
   200,     7,     0,   121,   199,   384,   201,   384,   201,   235,
   201,   235,   200,   197,   329,   198,     0,   125,   199,   384,
   201,   384,   201,   235,   201,   384,   201,   384,   200,   197,
   329,   198,     0,     0,   143,   331,   199,   333,   334,   200,
     7,     0,     0,   144,   332,   199,   333,   334,   200,     7,
     0,   134,   199,   219,   201,   235,   200,     7,     0,   135,
     6,     7,     0,   376,     0,     5,     0,     0,   334,   335,
     0,   201,   156,   386,     0,   201,   159,   378,     0,   201,
   378,     0,     0,   336,   337,     0,   122,   384,     7,     0,
   123,   384,     7,     0,   114,   235,     7,     0,   124,   235,
     7,     0,   111,   197,   329,   198,     0,     0,   338,   339,
     0,   122,   384,     7,     0,   123,   384,     7,     0,   114,
   235,     7,     0,   126,   384,     7,     0,   127,   384,     7,
     0,   111,   197,   329,   198,     0,     0,   340,   341,     0,
   129,   384,     7,     0,   130,   235,     7,     0,    66,   384,
     7,     0,   169,   384,     7,     0,   111,   197,   329,   198,
     0,     0,   342,   343,     0,   129,   384,     7,     0,   132,
   384,     7,     0,    66,   384,     7,     0,   169,   384,     7,
     0,   104,     5,     7,     0,   133,   197,   344,   198,     0,
   111,   197,   329,   198,     0,   112,   197,   329,   198,     0,
     0,   344,   197,   345,   198,     0,     0,   345,   346,     0,
    64,     5,     7,     0,    87,     5,     7,     0,   102,   219,
     7,     0,    66,   384,     7,     0,    77,   235,     7,     0,
   169,     5,     7,     0,     0,   347,   348,     0,   197,   349,
   198,     0,   381,     0,     0,   349,   350,     0,    74,     5,
     7,     0,    74,     5,   229,     7,     0,   105,     5,   230,
     7,     0,   137,     5,     7,     0,    87,   197,   351,   198,
     0,     0,   351,   197,   352,   198,     0,     0,   352,   353,
     0,    74,     5,     7,     0,    55,   197,   354,   198,     0,
     0,   354,    92,   197,   355,   198,     0,   354,     5,   197,
   355,   198,     0,     0,   355,   356,     0,     0,   315,   199,
   357,   237,   200,     7,     0,    64,     5,     7,     0,     0,
   102,   358,   219,     7,     0,    61,     5,     7,     0,    63,
     5,     7,     0,     0,   359,   360,     0,   197,   361,   198,
     0,   381,     0,     0,   361,   362,     0,    74,     5,     7,
     0,   139,     5,     7,     0,   161,     5,     7,     0,   141,
   386,     7,     0,   111,   197,   365,   198,     0,     0,   138,
     5,   140,     5,   364,   197,   365,   198,     0,     0,     0,
   365,   366,   367,     0,   142,   199,   368,   371,   373,   200,
     7,     0,   143,   199,   368,   371,   373,   200,     7,     0,
     5,   370,   201,     0,     5,   370,   369,     5,   370,   201,
     0,   188,     0,   189,     0,   186,     0,   187,     0,     0,
   199,   219,   200,     0,   146,     0,   147,   219,     0,   148,
   219,     0,   150,   197,   197,   384,   201,   384,   201,   384,
   198,   197,   384,   201,   384,   201,   384,   198,   197,   384,
   201,   384,   201,   384,   198,   198,     0,   149,   219,     0,
     0,   149,   197,   235,   201,   235,   201,   235,   198,   197,
   378,   372,   201,   378,   198,     0,   151,   197,   384,   201,
   384,   201,   384,   198,     0,   152,   197,   197,   384,   201,
   384,   201,   384,   198,   197,   384,   201,   384,   201,   384,
   198,   198,   197,   384,   198,     0,   153,   197,   197,   384,
   201,   384,   201,   384,   198,   197,   384,   201,   384,   201,
   384,   198,   197,   384,   201,   384,   201,   384,   198,   198,
   197,   384,   201,   384,   198,     0,   154,   197,   197,   384,
   201,   384,   201,   384,   198,   197,   384,   201,   384,   201,
   384,   198,   197,   384,   201,   384,   201,   384,   198,   197,
   384,   201,   384,   201,   384,   198,   198,   197,   384,   201,
   384,   201,   384,   198,     0,   147,   219,   155,     5,   197,
   384,   201,   384,   198,   197,   384,   198,     0,     0,   373,
   374,     0,   201,   156,   386,     0,   201,   156,   181,   386,
     0,   201,   156,   185,   386,     0,   201,   157,   384,     0,
   201,   164,     0,   201,   165,   384,     0,   201,   160,   384,
     0,   201,   161,     5,     0,   201,   162,   375,     0,   201,
   163,   375,     0,   201,   161,   375,     0,   201,   158,   384,
     0,   201,   159,   378,     0,   201,   145,     5,     0,   201,
   167,     5,     0,   201,   166,   384,     0,   201,    55,   378,
     0,   201,   168,   384,     0,   201,   168,   197,   379,   198,
     0,     0,   375,     6,     0,     0,   197,   377,   198,     0,
   235,     0,   377,   201,   235,     0,     0,   384,     0,   197,
   379,   198,     0,   384,     0,   380,     0,   379,   201,   384,
     0,   379,   201,   380,     0,   384,     8,   384,     0,   384,
     8,   199,   384,   200,   384,     0,     5,   173,   384,     7,
     0,     5,   173,     6,     7,     0,     5,   173,   197,   379,
   198,     7,     0,     5,   173,    47,   199,     5,   201,     5,
   200,     7,     0,    11,   199,   382,   200,     7,     0,     0,
   382,   228,     5,     0,   382,   228,     5,   173,   384,     0,
   382,   228,     5,   173,     6,     0,    17,     0,    18,     0,
    19,     0,    20,     0,    21,     0,    22,     0,    23,     0,
    24,     0,    25,     0,    26,     0,    27,     0,    28,     0,
    29,     0,    30,     0,    31,     0,    32,     0,    33,     0,
    34,     0,    35,     0,    36,     0,     5,     0,   385,     0,
   202,   384,   203,     0,   187,   384,     0,   193,   384,     0,
   384,   187,   384,     0,   384,   186,   384,     0,   384,   188,
   384,     0,   384,   189,   384,     0,   384,   190,   384,     0,
   384,   194,   384,     0,   384,   180,   384,     0,   384,   181,
   384,     0,   384,   182,   384,     0,   384,   183,   384,     0,
   384,   178,   384,     0,   384,   177,   384,     0,   384,   175,
   384,     0,   384,   176,   384,     0,    17,   199,   384,   200,
     0,    18,   199,   384,   200,     0,    19,   199,   384,   200,
     0,    20,   199,   384,   200,     0,    21,   199,   384,   200,
     0,    22,   199,   384,   200,     0,    23,   199,   384,   200,
     0,    24,   199,   384,   200,     0,    25,   199,   384,   200,
     0,    26,   199,   384,   200,     0,    27,   199,   384,   201,
   384,   200,     0,    28,   199,   384,   200,     0,    29,   199,
   384,   200,     0,    30,   199,   384,   200,     0,    31,   199,
   384,   200,     0,    32,   199,   384,   200,     0,    33,   199,
   384,   200,     0,    34,   199,   384,   201,   384,   200,     0,
    35,   199,   384,   201,   384,   200,     0,    36,   199,   384,
   201,   384,   200,     0,   384,   174,   384,     8,   384,     0,
   384,   195,     0,     4,     0,     3,     0,    12,     0,    13,
     0,    14,     0,    15,     0,    16,     0,     5,     0,     6,
     0,     5,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   315,   352,   390,   393,   396,   399,   402,   403,   404,   405,
   406,   407,   408,   409,   410,   412,   414,   416,   421,   430,
   434,   437,   440,   443,   445,   453,   467,   470,   471,   474,
   479,   482,   484,   487,   489,   493,   501,   512,   521,   530,
   537,   572,   577,   587,   590,   604,   609,   612,   661,   673,
   699,   704,   719,   737,   758,   764,   773,   787,   821,   834,
   854,   858,   868,   885,   885,   888,   894,   897,   900,   910,
   913,   916,   920,   940,   984,   988,   991,  1008,  1017,  1024,
  1027,  1033,  1039,  1046,  1050,  1063,  1078,  1092,  1098,  1104,
  1110,  1116,  1122,  1128,  1134,  1140,  1146,  1152,  1158,  1164,
  1170,  1176,  1182,  1188,  1195,  1201,  1203,  1212,  1216,  1222,
  1300,  1334,  1344,  1357,  1359,  1370,  1376,  1382,  1384,  1413,
  1437,  1448,  1454,  1461,  1467,  1478,  1492,  1495,  1496,  1499,
  1502,  1505,  1510,  1512,  1519,  1544,  1551,  1556,  1561,  1565,
  1572,  1577,  1582,  1587,  1593,  1597,  1602,  1605,  1634,  1642,
  1647,  1656,  1660,  1669,  1672,  1677,  1682,  1687,  1695,  1699,
  1710,  1719,  1724,  1729,  1734,  1746,  1750,  1805,  1808,  1811,
  1814,  1817,  1826,  1833,  1836,  1858,  1861,  1871,  1875,  1883,
  1890,  1898,  1901,  1921,  1938,  1960,  1970,  1974,  1985,  2009,
  2034,  2039,  2047,  2055,  2065,  2081,  2088,  2094,  2100,  2108,
  2116,  2124,  2142,  2150,  2153,  2176,  2180,  2189,  2193,  2201,
  2208,  2216,  2219,  2222,  2225,  2230,  2248,  2283,  2298,  2302,
  2307,  2312,  2317,  2329,  2353,  2408,  2412,  2416,  2425,  2488,
  2494,  2499,  2504,  2508,  2515,  2520,  2538,  2543,  2547,  2564,
  2570,  2577,  2584,  2588,  2595,  2604,  2615,  2632,  2704,  2716,
  2720,  2740,  2754,  2757,  2760,  2804,  2811,  2814,  2836,  2840,
  2848,  2852,  2860,  2867,  2876,  2878,  2883,  2898,  2914,  2931,
  2935,  2940,  2944,  2947,  2956,  2995,  3019,  3024,  3030,  3180,
  3185,  3194,  3203,  3208,  3211,  3249,  3266,  3292,  3297,  3300,
  3303,  3308,  3316,  3319,  3330,  3340,  3352,  3361,  3364,  3368,
  3370,  3372,  3378,  3396,  3400,  3411,  3472,  3518,  3542,  3551,
  3563,  3580,  3584,  3618,  3627,  3681,  3697,  3700,  3701,  3702,
  3703,  3704,  3705,  3709,  3725,  3741,  3748,  3751,  3772,  3776,
  3784,  3788,  3797,  3804,  3807,  3809,  3814,  3830,  3847,  3862,
  3866,  3871,  3879,  3882,  3887,  3892,  3897,  3907,  3914,  3953,
  3958,  3963,  3973,  3985,  3989,  3994,  4005,  4014,  4021,  4041,
  4048,  4054,  4060,  4066,  4074,  4090,  4097,  4103,  4114,  4125,
  4141,  4153,  4175,  4196,  4209,  4223,  4230,  4232,  4239,  4241,
  4251,  4261,  4271,  4281,  4287,  4290,  4294,  4303,  4314,  4326,
  4330,  4336,  4340,  4344,  4349,  4358,  4371,  4375,  4381,  4385,
  4389,  4393,  4398,  4407,  4419,  4422,  4428,  4432,  4436,  4441,
  4450,  4465,  4468,  4474,  4478,  4482,  4487,  4497,  4503,  4509,
  4518,  4522,  4526,  4540,  4543,  4554,  4583,  4586,  4589,  4597,
  4611,  4619,  4622,  4643,  4646,  4657,  4660,  4668,  4676,  4722,
  4727,  4732,  4736,  4740,  4747,  4751,  4755,  4760,  4766,  4772,
  4784,  4795,  4798,  4806,  4834,  4844,  4844,  4850,  4859,  4875,
  4883,  4886,  4891,  4894,  4903,  4906,  4914,  4926,  4936,  4941,
  4946,  4964,  4973,  4977,  4982,  4990,  4998,  5005,  5019,  5041,
  5044,  5045,  5046,  5049,  5053,  5057,  5065,  5072,  5079,  5095,
  5102,  5116,  5126,  5134,  5147,  5165,  5189,  5209,  5226,  5229,
  5237,  5244,  5251,  5255,  5259,  5263,  5267,  5276,  5281,  5286,
  5306,  5313,  5320,  5328,  5336,  5343,  5350,  5354,  5366,  5373,
  5419,  5425,  5429,  5434,  5439,  5442,  5443,  5447,  5452,  5461,
  5464,  5473,  5481,  5498,  5506,  5512,  5524,  5568,  5572,  5575,
  5581,  5587,  5598,  5600,  5601,  5602,  5603,  5604,  5605,  5606,
  5607,  5608,  5609,  5610,  5611,  5612,  5613,  5614,  5615,  5616,
  5617,  5618,  5619,  5621,  5623,  5624,  5625,  5626,  5627,  5628,
  5629,  5630,  5631,  5632,  5633,  5634,  5635,  5636,  5637,  5638,
  5639,  5640,  5641,  5642,  5643,  5644,  5645,  5646,  5647,  5648,
  5649,  5650,  5651,  5652,  5653,  5654,  5655,  5656,  5657,  5658,
  5659,  5660,  5661,  5664,  5667,  5668,  5669,  5670,  5671,  5672,
  5673,  5690,  5695
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","tINT","tFLOAT",
"tSTRING","tBIGSTR","tEND","tDOTS","tInclude","tConstant","tDefineConstant",
"tPi","t0D","t1D","t2D","t3D","tExp","tLog","tLog10","tSqrt","tSin","tAsin",
"tCos","tAcos","tTan","tAtan","tAtan2","tSinh","tCosh","tTanh","tFabs","tFloor",
"tCeil","tFmod","tModulo","tHypot","tSolidAngle","tTrace","tOrder","tCrossProduct",
"tGroup","tDefineGroup","tAll","tInSupport","tDefineFunction","tList","tListAlt",
"tConstraint","tRegion","tSubRegion","tRegionRef","tSubRegionRef","tFilter",
"tCoefficient","tValue","tTimeFunction","tBranch","tNode","tLoop","tNameOfResolution",
"tJacobian","tCase","tIntegration","tType","tSubType","tCriterion","tGeoElement",
"tNumberOfPoints","tMaxNumberOfPoints","tNumberOfDivisions","tMaxNumberOfDivisions",
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
"tFooter","tSkin","tSmoothing","tTarget","tSort","tIso","tFlag","tBreak","tHelp",
"tCpu","tDEF","'?'","tAND","tOR","tNOTEQUAL","tEQUAL","tAPPROXEQUAL","'<'","'>'",
"tLESSOREQUAL","tGREATEROREQUAL","tLESSLESS","tGREATERGREATER","'+'","'-'","'*'",
"'/'","'%'","tCROSSPRODUCT","UNARYPREC","'!'","'^'","'#'","'$'","'{'","'}'",
"'['","']'","','","'('","')'","'.'","Stats","@1","ProblemDefinitions","@2","ProblemDefinition",
"Interactive","@3","Groups","@4","Group","@5","ReducedGroupRHS","@6","@7","GroupRHS",
"FunctionForGroup","ListOfRegionOrAll","SuppListOfRegion","SuppListTypeForGroup",
"ListOfRegion","RecursiveListOfRegion","IRegion","DefineGroups","Comma","DefineDimension",
"MultipleIndex","Index","Functions","Function","DefineFunctions","Expression",
"@8","WholeQuantityExpression","@9","WholeQuantity","@10","@11","WholeQuantity_Single",
"@12","@13","ArgumentsForFunction","RecursiveListOfQuantity","ParametersForFunction",
"JacobianMethods","JacobianMethod","JacobianMethodTerm","JacobianCases","JacobianCase",
"JacobianCaseTerm","IntegrationMethods","IntegrationMethod","IntegrationMethodTerm",
"IntegrationCases","IntegrationCase","IntegrationCaseTerm","QuadratureCases",
"QuadratureCase","QuadratureCaseTerm","Constraints","BracedConstraint","Constraint",
"ConstraintTerm","ConstraintCases","ConstraintCase","ConstraintCaseTerm","FunctionSpaces",
"BracedFunctionSpace","FunctionSpace","FunctionSpaceTerm","BasisFunctions","BasisFunction",
"BasisFunctionTerm","OptionalParametersForBasisFunction","@14","@15","SubSpaces",
"SubSpace","SubSpaceTerm","ListOfBasisFunction","RecursiveListOfBasisFunction",
"GlobalQuantities","GlobalQuantity","GlobalQuantityTerm","ConstraintInFSs","ConstraintInFS",
"ConstraintInFSTerm","Formulations","BracedFormulation","Formulation","FormulationTerm",
"DefineQuantities","DefineQuantity","DefineQuantityTerm","@16","@17","IndexInFunctionSpace",
"Equations","EquationTerm","GlobalEquation","GlobalEquationTerm","GlobalEquationTermTerm",
"GlobalEquationTermTermTerm","LocalTerm","LocalTermTerm","@18","@19","GlobalTerm",
"GlobalTermTerm","@20","@21","TermOperator","Quantity_Def","Resolutions","BracedResolution",
"Resolution","ResolutionTerm","@22","DefineSystems","DefineSystem","DefineSystemTerm",
"ListOfFormulation","RecursiveListOfFormulation","ListOfSystem","RecursiveListOfSystem",
"Operation","OperationTerm","@23","@24","PrintOperation","PrintOperationOptions",
"PrintOperationOption","TimeLoopTheta","TimeLoopThetaTerm","TimeLoopNewmark",
"TimeLoopNewmarkTerm","IterativeLoop","IterativeLoopTerm","IterativeTimeReduction",
"IterativeTimeReductionTerm","ChangeOfStates","ChangeOfState","ChangeOfStateTerm",
"PostProcessings","BracedPostProcessing","PostProcessing","PostProcessingTerm",
"PostQuantities","PostQuantity","PostQuantityTerm","SubPostQuantities","SubPostQuantity",
"SubPostQuantityTerm","@25","@26","PostOperations","BracedPostOperation","PostOperation",
"PostOperationTerm","SeparatePostOperation","@27","PostSubOperations","@28",
"PostSubOperation","PostQuantitiesToPrint","Combination","PostQuantitySupport",
"PrintSubType","@29","PrintOptions","PrintOption","ParsedStrings","ListOfExpression",
"RecursiveListOfExpression","ListOfDouble","RecursiveListOfDouble","DottedFExpr",
"Affectation","DefineConstants","NameForFunction","FExpr","OneFExpr","CharExpr", NULL
};
#endif

static const short yyr1[] = {     0,
   206,   205,   207,   208,   207,   209,   209,   209,   209,   209,
   209,   209,   209,   209,   209,   209,   209,   209,   209,   210,
   210,   210,   210,   210,   211,   210,   212,   213,   212,   214,
   214,   215,   214,   214,   214,   217,   218,   216,   216,   219,
   219,   220,   220,   221,   221,   222,   222,   222,   223,   224,
   224,   225,   225,   225,   226,   226,   226,   226,   226,   226,
   227,   227,   227,   228,   228,   229,   230,   230,   231,   232,
   232,   233,   233,   233,   233,   234,   234,   235,   235,   236,
   235,   238,   237,   239,   240,   241,   239,   239,   239,   239,
   239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
   239,   239,   239,   239,   239,   239,   239,   242,   242,   242,
   242,   242,   242,   243,   242,   242,   242,   244,   242,   242,
   242,   242,   242,   242,   242,   242,   245,   245,   245,   246,
   246,   247,   247,   247,   247,   248,   248,   249,   249,   250,
   250,   251,   251,   252,   252,   253,   253,   253,   254,   254,
   255,   255,   256,   256,   256,   257,   257,   258,   258,   259,
   259,   259,   260,   260,   261,   261,   262,   262,   262,   262,
   262,   262,   263,   263,   264,   264,   265,   265,   266,   266,
   266,   266,   266,   267,   267,   268,   268,   269,   269,   269,
   269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
   269,   269,   270,   270,   271,   271,   272,   272,   273,   273,
   273,   273,   273,   273,   273,   274,   274,   275,   275,   276,
   276,   276,   276,   276,   276,   277,   278,   279,   277,   280,
   280,   281,   281,   282,   282,   283,   283,   284,   284,   285,
   285,   286,   286,   287,   287,   287,   288,   288,   289,   289,
   290,   290,   290,   290,   290,   291,   291,   292,   292,   293,
   293,   294,   294,   294,   294,   294,   295,   295,   296,   296,
   297,   297,   297,   297,   298,   297,   297,   299,   297,   297,
   297,   297,   297,   300,   300,   301,   301,   302,   302,   302,
   302,   303,   303,   304,   304,   304,   305,   305,   306,   306,
   306,   306,   307,   307,   309,   310,   308,   308,   308,   308,
   311,   311,   312,   313,   314,   312,   315,   315,   315,   315,
   315,   315,   315,   316,   316,   317,   317,   318,   318,   319,
   319,   320,   320,   320,   321,   320,   322,   322,   323,   323,
   324,   324,   324,   324,   324,   324,   324,   324,   325,   325,
   326,   326,   327,   327,   328,   328,   329,   329,   330,   330,
   330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
   330,   330,   330,   330,   330,   331,   330,   332,   330,   330,
   330,   333,   333,   334,   334,   335,   335,   335,   336,   336,
   337,   337,   337,   337,   337,   338,   338,   339,   339,   339,
   339,   339,   339,   340,   340,   341,   341,   341,   341,   341,
   342,   342,   343,   343,   343,   343,   343,   343,   343,   343,
   344,   344,   345,   345,   346,   346,   346,   346,   346,   346,
   347,   347,   348,   348,   349,   349,   350,   350,   350,   350,
   350,   351,   351,   352,   352,   353,   353,   354,   354,   354,
   355,   355,   357,   356,   356,   358,   356,   356,   356,   359,
   359,   360,   360,   361,   361,   362,   362,   362,   362,   362,
   364,   363,   365,   366,   365,   367,   367,   368,   368,   369,
   369,   369,   369,   370,   370,   371,   371,   371,   371,   371,
   372,   371,   371,   371,   371,   371,   371,   373,   373,   374,
   374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
   374,   374,   374,   374,   374,   374,   374,   374,   375,   375,
   376,   376,   377,   377,   378,   378,   378,   379,   379,   379,
   379,   380,   380,   381,   381,   381,   381,   381,   382,   382,
   382,   382,   383,   383,   383,   383,   383,   383,   383,   383,
   383,   383,   383,   383,   383,   383,   383,   383,   383,   383,
   383,   383,   383,   384,   384,   384,   384,   384,   384,   384,
   384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
   384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
   384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
   384,   384,   384,   385,   385,   385,   385,   385,   385,   385,
   385,   386,   386
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
     2,     1,     2,     0,     5,     4,     4,     0,     7,     6,
     2,     2,     2,     2,     3,     2,     3,     2,     3,     1,
     3,     0,     3,     6,     6,     0,     4,     0,     2,     3,
     4,     0,     4,     0,     2,     3,     3,     4,     0,     4,
     0,     2,     3,     3,     4,     0,     4,     0,     2,     3,
     3,     4,     0,     4,     0,     2,     3,     3,     3,     3,
     3,     3,     0,     2,     3,     1,     0,     2,     3,     4,
     3,     4,     5,     0,     4,     0,     2,     3,     3,     3,
     3,     3,     3,     7,     3,     3,     3,     3,     3,     7,
     7,     7,     0,     2,     3,     1,     0,     2,     3,     4,
     3,     4,     4,     4,     4,     0,     4,     0,     2,     3,
     3,     4,     4,     3,     3,     0,     0,     0,    18,     0,
     4,     0,     2,     3,     3,     1,     3,     0,     3,     0,
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
     3,     3,     3,     3,     3,     3,     3,     5,     0,     2,
     0,     3,     1,     3,     0,     1,     3,     1,     1,     3,
     3,     3,     6,     4,     4,     6,     9,     5,     0,     3,
     5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     3,     2,     2,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
     3,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     4,     6,     4,     4,     4,     4,     4,     4,     6,     6,
     6,     5,     2,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1
};

static const short yydefact[] = {     1,
     3,     4,    25,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     5,    19,
     0,    16,    17,     0,   613,   612,    18,   539,    27,   173,
   136,   149,   203,    70,   256,   326,   431,     0,   460,     0,
    20,    24,     0,     0,    26,   605,   604,   611,     0,   606,
   607,   608,   609,   610,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   564,    64,    28,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,    21,     0,     0,   535,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   566,
   567,     0,   529,   528,     0,   534,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   603,     0,    65,     0,     6,     0,   177,     8,   174,
   176,   138,     9,   151,    10,   207,    11,   204,   206,     0,
     0,     7,    71,    75,   260,    12,   257,   259,   330,    13,
   327,   329,   435,    14,   432,   434,   471,   464,    15,   461,
   463,     0,    22,   484,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   565,     0,   580,   581,   579,   578,   574,   575,   576,   577,
   569,   568,   570,   571,   572,   573,   538,   540,     0,     0,
    29,    35,     0,     0,     0,     0,     0,    76,     0,     0,
     0,     0,     0,    23,     0,     0,   486,     0,     0,     0,
     0,     0,     0,     0,     0,   498,   498,   582,   583,   584,
   585,   586,   587,   588,   589,   590,   591,     0,   593,   594,
   595,   596,   597,   598,     0,     0,     0,     0,   536,   531,
   530,     0,   532,     0,     0,     0,     0,     0,     0,    61,
     0,     0,     0,   175,   178,     0,     0,   137,   139,     0,
    80,     0,   150,   152,     0,     0,     0,     0,     0,     0,
   205,   208,    67,    42,     0,     0,    40,     0,     0,    64,
     0,     0,     0,     0,   258,   261,     0,     0,   335,   328,
   331,     0,     0,     0,     0,   433,   436,   473,     0,     0,
     0,     0,     0,   462,   465,     0,   482,   483,   480,   481,
   478,     0,   487,   488,    80,   490,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,   602,
   542,   541,   611,     0,     0,     0,    32,     0,    64,     0,
   184,     0,     0,   142,     0,   156,     0,     0,     0,    82,
     0,   247,     0,     0,   216,   230,   240,     0,    41,    55,
    58,    52,    39,    50,    80,     0,    36,     0,     0,     0,
     0,   267,   286,     0,   337,     0,     0,   442,    67,     0,
   474,     0,   473,     0,     0,     0,   485,   484,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   499,     0,   592,
   599,   600,   601,     0,     0,    30,     0,    69,     0,    43,
     0,     0,     0,   184,     0,   181,   179,     0,     0,     0,
   140,     0,     0,     0,   154,    81,     0,   153,     0,   211,
   209,     0,     0,     0,     0,    68,     0,     0,    64,     0,
    80,     0,    72,    77,   264,   262,     0,     0,     0,   332,
     0,     0,   357,   437,     0,     0,     0,   440,   472,     0,
   466,   474,   467,   469,   468,     0,     0,    80,     0,     0,
     0,     0,     0,   476,   525,     0,     0,     0,     0,   525,
     0,   519,   519,   519,   504,     0,     0,     0,     0,   477,
   537,   533,    66,     0,    31,    34,    62,     0,   186,   182,
   180,   144,   141,   158,   155,     0,     0,   611,   543,   544,
   545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
   555,   556,   557,   558,   559,   560,   561,   562,     0,   118,
     0,     0,   114,     0,     0,     0,     0,     0,     0,     0,
     0,    83,    84,   112,     0,   109,   249,   215,   210,   218,
   212,   232,   213,   242,   214,    56,     0,    60,     0,    51,
     0,    73,     0,    45,    37,    44,   263,   269,   265,     0,
     0,     0,     0,   266,   287,   333,   339,   334,     0,   438,
   444,   441,   439,   475,   470,   479,     0,     0,     0,     0,
     0,     0,     0,     0,   516,   526,   513,     0,     0,   500,
   503,   511,   512,   506,   507,   510,   508,   509,   505,   515,
   514,     0,   517,    33,     0,   183,     0,     0,     0,    78,
    79,   111,     0,     0,     0,     0,     0,     0,   106,   105,
   107,   126,   124,   121,   123,   122,     0,     0,    85,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   113,   132,     0,
     0,     0,     0,     0,    59,     0,    53,    74,    64,     0,
   303,   303,   311,   292,     0,     0,    80,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   376,   378,
     0,   336,   358,     0,     0,    80,     0,     0,     0,     0,
     0,     0,   501,   502,   520,     0,     0,     0,     0,     0,
     0,    80,    80,    80,    80,     0,     0,     0,    80,   185,
   187,     0,     0,   143,   145,     0,     0,     0,   157,   159,
     0,    82,     0,     0,    82,     0,     0,   325,   108,     0,
   103,   104,   101,   100,   102,    96,    97,    98,    99,    92,
    93,    88,    91,    94,    89,    95,   125,   128,     0,   130,
     0,     0,   110,     0,     0,     0,     0,     0,   248,   250,
     0,     0,     0,     0,     0,   217,   219,     0,     0,   231,
   233,     0,     0,     0,   241,   243,     0,    54,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   268,   278,
   270,   317,   317,   317,     0,     0,     0,     0,     0,   525,
     0,     0,     0,   338,   340,     0,     0,    80,     0,     0,
     0,    80,     0,     0,   389,     0,   396,     0,   404,   411,
     0,     0,     0,     0,   367,     0,     0,   443,   445,     0,
     0,     0,     0,     0,     0,     0,   527,   518,    63,     0,
     0,     0,     0,    80,     0,    80,     0,     0,     0,     0,
     0,     0,    80,     0,     0,     0,   132,   163,     0,     0,
   116,     0,   117,     0,     0,    82,   324,     0,   127,   129,
     0,     0,     0,     0,     0,     0,     0,    49,     0,    67,
     0,     0,   226,     0,     0,     0,   236,   238,     0,     0,
     0,     0,    57,    38,     0,     0,     0,     0,     0,     0,
     0,     0,    67,     0,     0,     0,    82,     0,     0,   318,
   319,   320,   321,   322,   323,     0,   288,   304,     0,   289,
     0,   290,   312,     0,     0,     0,   297,   291,   293,     0,
     0,    67,   351,     0,     0,     0,     0,   353,   355,     0,
     0,   359,     0,     0,   360,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,   381,   521,   521,
   448,     0,     0,     0,     0,   493,     0,     0,     0,   189,
   190,   195,   196,     0,   199,     0,   198,   192,   191,    64,
   193,   188,     0,   197,   147,   146,     0,     0,   160,   161,
     0,     0,   115,     0,    86,   131,     0,     0,   133,   251,
     0,   253,   254,     0,   220,   221,     0,     0,     0,   224,
   225,   234,    64,   235,   245,   244,   246,    67,    47,   282,
   281,   274,   272,   273,   271,   275,   277,   283,   280,     0,
     0,     0,     0,   305,     0,   314,     0,     0,     0,   342,
   341,   349,    64,   343,   344,   347,   348,    64,   345,   346,
     0,     0,    80,     0,     0,     0,    80,     0,    80,     0,
     0,    80,   361,   390,     0,     0,    80,     0,     0,     0,
     0,   362,   397,     0,     0,     0,     0,    80,     0,   363,
   405,     0,     0,     0,     0,     0,     0,     0,     0,   364,
   412,    80,   383,    80,   384,   382,   384,     0,   446,     0,
   525,     0,     0,     0,     0,    80,    80,     0,    80,   148,
   165,   162,     0,    90,   120,     0,     0,     0,     0,   255,
   222,     0,   223,   237,     0,    48,   284,     0,   309,   310,
   308,    82,   313,    82,   294,   295,     0,     0,     0,     0,
   296,   298,   350,     0,   354,     0,   365,   366,     0,     0,
   357,     0,     0,   357,     0,     0,     0,     0,     0,   357,
     0,     0,     0,     0,     0,     0,     0,   357,     0,     0,
     0,     0,     0,   357,   357,     0,     0,   421,     0,     0,
   523,     0,     0,     0,     0,     0,   447,     0,   491,     0,
     0,     0,     0,     0,     0,     0,     0,     0,   119,    87,
     0,     0,   252,     0,   239,     0,     0,   279,   306,   315,
     0,     0,     0,     0,   352,   356,     0,   525,     0,   525,
     0,     0,   393,   391,   392,   394,    80,     0,   400,   398,
   399,   401,   402,    80,   408,     0,   406,   407,   409,   415,
   417,     0,     0,   413,   414,     0,   416,     0,   522,    80,
     0,   525,   385,     0,   451,   451,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,   164,   166,   135,   134,     0,     0,   276,     0,
     0,   299,   300,   301,   302,   370,     0,   368,     0,   371,
   395,     0,   403,     0,   410,   419,   420,   423,   418,   380,
   524,   377,     0,   525,   388,   379,   317,   317,   497,   525,
     0,     0,     0,     0,   202,   201,   194,   200,     0,     0,
     0,     0,     0,     0,     0,   285,    82,     0,     0,     0,
     0,    80,     0,     0,   386,   387,     0,     0,     0,   456,
   450,     0,   452,   449,     0,     0,     0,     0,     0,   167,
   168,   169,   170,   171,   172,     0,     0,     0,   372,   357,
     0,     0,     0,     0,     0,    80,     0,     0,     0,   422,
   424,     0,     0,     0,     0,   453,   492,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   458,   459,   455,     0,    82,     0,
     0,     0,     0,   227,   307,   316,   369,   373,   357,     0,
   425,   428,   429,   426,   427,   430,   457,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   374,   357,   454,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,   228,   375,     0,   494,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    67,     0,
     0,     0,     0,   489,     0,     0,     0,     0,     0,   229,
     0,     0,     0,     0,     0,     0,   495,     0,     0,     0,
     0,     0,     0,     0,     0,     0,   496,     0,     0,     0
};

static const short yydefgoto[] = {  1538,
     1,     2,     3,    19,    20,    21,    83,   147,   231,   449,
   317,   482,   709,   318,   319,   605,   829,   929,   403,   479,
   404,   379,   145,   288,   399,   289,    88,   163,   320,   389,
   390,   466,   467,   582,   780,  1166,   583,   667,   664,   698,
   801,   803,    85,   234,   299,   460,   658,   765,    86,   235,
   304,   462,   659,   770,  1038,  1248,  1324,    84,   150,   233,
   295,   455,   657,   761,    87,   158,   236,   312,   473,   701,
   817,  1059,  1473,  1501,   474,   702,   821,   939,  1063,   475,
   703,   826,   469,   700,   810,    89,   167,   239,   326,   488,
   710,   841,  1177,   957,  1257,   489,   615,   845,   979,  1089,
  1192,   842,   968,  1182,  1330,   844,   973,  1184,  1331,   969,
   584,    90,   171,   240,   331,   416,   492,   715,   855,   984,
  1093,   990,  1098,   619,   733,   873,   874,  1145,  1233,  1303,
  1001,  1114,  1003,  1123,  1005,  1131,  1006,  1141,  1296,  1384,
  1421,    91,   175,   241,   337,   496,   734,   879,  1148,  1357,
  1393,  1449,  1425,    93,   180,   243,   345,    22,   242,   421,
   500,    45,   185,   352,   246,   256,  1308,   362,   438,   646,
  1146,  1232,   635,   122,   123,    23,    82,   585,   636,    81,
    27
};

static const short yypact[] = {-32768,
-32768,    24,  2433,  -109,    94,   -63,   -47,   -41,   -20,    62,
    70,    85,   128,   181,   216,    53,   422,   185,-32768,-32768,
    20,-32768,-32768,   954,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,    81,-32768,   483,
-32768,-32768,    77,   149,-32768,-32768,-32768,-32768,   300,-32768,
-32768,-32768,-32768,-32768,   225,   229,   233,   238,   242,   249,
   257,   276,   286,   316,   321,   327,   335,   339,   344,   379,
   381,   417,   434,   440,   453,  1827,  1827,  1827,  1827,   942,
-32768,    45,   204,    26,   144,   188,    34,    56,    37,    39,
    51,   458,    58,   534,-32768,   550,   550,-32768,  1827,  1827,
  1827,  1827,  1827,  1827,  1827,  1827,  1827,  1827,  1827,  1827,
  1827,  1827,  1827,  1827,  1827,  1827,  1827,  1827,   619,   203,
   203,  -179,-32768,   983,  2399,-32768,  1827,  1827,  1827,  1827,
  1827,  1827,  1827,  1827,  1827,  1827,  1827,  1827,  1827,  1827,
  1827,-32768,   681,-32768,   621,-32768,   377,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -150,
   495,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   693,-32768,   506,  1195,  1195,  3361,  3388,  3415,  3442,
  3469,  3496,  3523,  3550,  3577,  3604,  2454,  3631,  3658,  3685,
  3712,  3739,  3766,  2476,  2498,  2520,   507,   708,  1827,  1288,
-32768,  2224,   816,   816,  1043,  1043,   554,   554,   554,   554,
   528,   528,   203,   203,   203,   203,-32768,   548,   -21,   532,
-32768,-32768,    79,    -3,   264,   356,    25,-32768,    68,   385,
   303,   531,   273,-32768,   123,   359,-32768,   123,   123,    46,
   555,   557,   559,   566,   568,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1827,-32768,-32768,
-32768,-32768,-32768,-32768,  1827,  1827,  1827,   721,-32768,-32768,
   983,  1827,  4586,  1827,  1500,   340,  1534,   560,   564,-32768,
    67,   740,   742,-32768,-32768,   574,   745,-32768,-32768,   582,
   165,   768,-32768,-32768,   589,   785,   795,   609,   611,   613,
-32768,-32768,   352,-32768,    33,   639,-32768,   615,   617,   205,
   812,   819,   624,   635,-32768,-32768,   828,   638,-32768,-32768,
-32768,   836,   656,   849,   850,-32768,-32768,-32768,   852,   662,
   861,    94,   862,-32768,-32768,   668,-32768,-32768,-32768,-32768,
-32768,   864,   715,-32768,   165,-32768,   674,  1827,   704,   705,
   706,   252,   266,  3793,  3820,  3847,  3874,   712,  3901,  4586,
-32768,  4586,   707,   897,  1827,  4036,-32768,   125,   292,   711,
-32768,   909,    36,-32768,   910,-32768,   719,   722,   913,-32768,
   916,-32768,   917,    50,-32768,-32768,-32768,   728,-32768,   919,
   744,-32768,-32768,-32768,   165,   766,-32768,   935,   938,   937,
   120,-32768,-32768,   122,-32768,   748,   124,-32768,   749,   943,
   754,   946,-32768,   947,   948,   955,-32768,   506,   956,   764,
  1827,  2542,  1827,  1827,  1827,   988,  1782,-32768,   993,-32768,
-32768,-32768,-32768,  1000,  1827,-32768,  4061,-32768,   125,-32768,
  1001,  1002,  1007,-32768,   301,-32768,-32768,   827,  1016,   309,
-32768,   394,  1827,  1009,-32768,-32768,   643,-32768,   403,-32768,
-32768,  1019,   416,   425,   432,-32768,    18,  1568,    -5,  1020,
   165,    22,-32768,-32768,-32768,-32768,  1022,   439,   437,-32768,
  1023,   487,-32768,-32768,  1026,   505,  1029,-32768,-32768,    20,
-32768,   840,-32768,-32768,-32768,   841,   844,   165,  2564,  1827,
  2586,  2608,  2630,-32768,  1602,  1044,   142,  1827,  1827,  1602,
  1827,  1045,-32768,-32768,-32768,  1827,  1827,  1046,  1636,-32768,
-32768,  4586,-32768,  1041,-32768,-32768,   855,   515,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,  3928,   854,   370,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   859,-32768,
   866,   867,-32768,  1054,   643,   643,   643,  1058,   267,  1062,
   643,  4608,   868,   869,   869,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1827,-32768,  4086,-32768,
   135,-32768,  1064,-32768,-32768,-32768,-32768,-32768,-32768,   872,
   883,   884,   886,-32768,-32768,-32768,-32768,-32768,   330,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,  1827,   887,  1827,  2652,
  1827,  1827,  1827,  1827,-32768,  4586,-32768,    94,    94,-32768,
  4586,  4586,-32768,  4586,-32768,  1078,  1078,  1078,  4586,  4586,
-32768,  1827,  4586,-32768,  1827,-32768,   427,    76,   104,-32768,
-32768,-32768,   888,   890,   888,   643,   891,   912,   905,   905,
   905,-32768,-32768,-32768,-32768,-32768,    42,  2351,-32768,   643,
   643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
   643,   643,   643,   643,   643,  1099,   860,-32768,   907,   536,
   508,   107,    75,  3955,-32768,   553,-32768,-32768,   529,   500,
-32768,-32768,-32768,-32768,   488,    23,   114,   908,   911,   915,
   922,   927,   371,   380,   914,   930,   934,  1100,-32768,-32768,
  1102,-32768,-32768,    80,  2674,   165,  2696,  1827,  2718,  2740,
  2762,    -1,-32768,-32768,-32768,   108,  4111,   123,   123,   123,
   123,   150,   151,   165,   165,   941,  1129,  1130,   180,-32768,
-32768,   121,  1134,-32768,-32768,   945,  1135,  1138,-32768,-32768,
   944,-32768,   949,  2432,-32768,   951,   950,-32768,-32768,   643,
  1260,  1260,  1628,  1628,  1628,   607,   607,   607,   607,   637,
   637,    74,    74,    74,   905,   905,-32768,-32768,   952,  4608,
   535,  1231,-32768,  1140,   140,   140,  1141,  1148,-32768,-32768,
  1149,  1150,  1157,   123,   123,-32768,-32768,  1162,   113,-32768,
-32768,  1163,  1170,  1171,-32768,-32768,  1180,-32768,   984,   194,
  1182,  1183,   189,  1210,  1215,  1218,  1219,   123,-32768,-32768,
-32768,   976,  2401,   834,    82,  1222,  1234,   115,    94,  1602,
    94,   117,  1235,-32768,-32768,  1178,  1236,   165,  1221,  1263,
  1264,   165,  1266,  1267,-32768,  1827,-32768,  1827,-32768,-32768,
   123,  1268,  1074,  1075,-32768,  1079,  1273,-32768,-32768,  1827,
  1081,  1827,  4136,  1827,  1827,  1827,-32768,-32768,-32768,  1274,
  1275,  1276,  1277,   165,  1278,   165,  1279,  1280,  1281,  1287,
  1292,  1318,   165,  1319,  1321,  1322,   907,-32768,  1323,  1324,
-32768,  1131,-32768,   643,  1151,-32768,-32768,  2246,-32768,-32768,
   643,  1154,  1155,   110,  1343,  1282,  1351,-32768,  1353,   749,
  1354,   127,  1165,  1356,  1358,  1359,-32768,-32768,  1361,  1362,
  1364,  1365,-32768,-32768,  1368,    33,  1369,  1370,  1376,  1380,
  1381,  1382,   749,  1387,  1388,  1390,-32768,  1393,  1396,-32768,
-32768,-32768,-32768,-32768,-32768,   123,-32768,-32768,  1176,-32768,
   123,-32768,-32768,  1203,  1398,  1405,-32768,-32768,-32768,  1404,
  1406,   749,-32768,  1408,  1409,  1410,  1412,-32768,-32768,  1413,
  1415,-32768,  1212,  1225,-32768,  1226,  1227,  1229,  1230,  1233,
   346,  2784,   527,  2806,   442,  1223,  1243,-32768,   118,   118,
-32768,  1416,  4161,  1239,  4186,-32768,  4211,  4236,  4261,-32768,
-32768,-32768,-32768,  1244,-32768,  1251,-32768,-32768,-32768,  1256,
-32768,-32768,  1257,-32768,-32768,-32768,  1419,   570,-32768,-32768,
   123,  3340,-32768,  1232,-32768,  4608,  1425,   123,-32768,-32768,
  1454,-32768,-32768,  1453,-32768,-32768,  1457,  1374,  1458,-32768,
-32768,-32768,   130,-32768,-32768,-32768,-32768,   749,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1271,
  1459,  1461,  1465,-32768,  1466,-32768,  1467,  1469,   342,-32768,
-32768,-32768,   131,-32768,-32768,-32768,-32768,   138,-32768,-32768,
  1470,  1475,   165,  1478,  1289,  1827,   165,  1291,   165,  1827,
  1827,   165,-32768,-32768,  1827,  1294,   165,  1827,  1827,  1827,
  1827,-32768,-32768,  1827,  1827,  1296,  1827,   165,  1827,-32768,
-32768,  1827,  1479,  1298,  1299,  1827,  1827,  1300,  1827,-32768,
-32768,   165,-32768,   165,-32768,-32768,-32768,    41,-32768,  1303,
  1602,  1304,  1311,  1313,  1344,   165,   165,  1482,   165,-32768,
-32768,-32768,  1340,-32768,-32768,   643,  1342,  1345,  1536,-32768,
-32768,  1484,-32768,-32768,  1539,-32768,  1377,  1570,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   888,   888,   888,   123,
-32768,-32768,-32768,  1573,-32768,  1574,-32768,-32768,  1375,  1411,
-32768,  2828,  1443,-32768,  1604,  1783,  1805,  1606,  2850,-32768,
  1638,  1829,  1857,  1879,  1901,  2872,  1924,-32768,  1946,  1639,
  1968,  1990,  1640,-32768,-32768,  2014,  2041,-32768,  2063,  1444,
-32768,   139,   581,   583,  1476,  1477,-32768,  1827,-32768,  1827,
  1827,  1827,  1827,  1480,  1481,  1485,  1491,   324,-32768,  4608,
  1494,  1497,-32768,  1668,-32768,  1605,  1669,-32768,-32768,-32768,
  1670,  1671,  1672,  1689,-32768,-32768,  1691,  1602,   576,  1602,
  1692,   794,-32768,-32768,-32768,-32768,   165,   900,-32768,-32768,
-32768,-32768,-32768,   165,-32768,  1265,-32768,-32768,-32768,-32768,
-32768,  1569,  1603,-32768,-32768,   579,-32768,  1694,-32768,   165,
  1698,  1177,-32768,  1699,-32768,-32768,  4286,  1506,  2894,  2916,
  2938,  2960,  1701,  1702,  1703,  1704,  1709,  1827,  1827,  1827,
  1827,  1827,-32768,-32768,-32768,-32768,  1523,  1515,-32768,  1516,
  1524,-32768,-32768,-32768,-32768,-32768,  1526,  1612,  1531,-32768,
-32768,  1532,-32768,  1540,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    94,  1602,-32768,-32768,   750,  2386,-32768,  1602,
  1827,  1827,  1827,  1827,-32768,-32768,-32768,-32768,  1728,  2085,
  2108,  2130,  2152,  2174,  1735,-32768,-32768,   888,  1736,  1545,
  1827,   165,  1827,   540,-32768,-32768,  1739,  1740,  1743,-32768,
-32768,  1550,-32768,-32768,  1553,  2982,  3004,  3026,  3048,-32768,
-32768,-32768,-32768,-32768,-32768,  1563,  1564,  1575,-32768,-32768,
  3982,  1576,  3070,  1758,  1827,   165,  1764,   123,  1769,-32768,
-32768,  1770,  1771,  1772,   123,-32768,-32768,  1827,  1827,  1827,
  1827,  1775,  1776,  1777,  1637,  1778,  1589,  1827,  1780,  2198,
  1781,  1785,  1787,  1789,-32768,-32768,-32768,  1790,-32768,  4311,
  4336,  4361,  4386,-32768,-32768,-32768,-32768,-32768,-32768,  4009,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1593,  1601,  1607,
  1609,  1616,  1759,  1754,  1623,  1795,  1827,  1624,  1827,  1827,
   123,-32768,-32768,-32768,  3092,  1827,  3114,  3136,  1796,  1786,
  1827,  4411,  1827,  1827,-32768,-32768,  3158,-32768,  3180,  3202,
  1721,  1827,  1827,  1827,  1820,  4436,  4461,  4486,   749,  1629,
  1630,  1675,  1819,-32768,  1679,  1827,  1667,  1827,  3224,-32768,
  3246,  1827,  1827,  3268,  4511,  1827,-32768,  4536,  1680,  1683,
  1827,  3290,  1827,  3312,  1827,  4561,-32768,  1834,  1866,-32768
};

static const short yypgoto[] = {-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
  -220,-32768,-32768,  -239,   -17,-32768,-32768,  1038,  -474,-32768,
  -541,-32768,  -306,  -382,  -417,-32768,-32768,-32768,-32768,  -337,
-32768,  -759,-32768,  -479,-32768,-32768,-32768,-32768,-32768,  1302,
-32768,   970,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1427,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,  1172,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  -839,
  -544,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768, -1184,-32768,-32768,-32768,   873,   743,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,   585,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,  1471,
-32768,  1392,  1798,-32768,  1468,  1707,-32768,  1643,-32768,   280,
-32768,-32768,  -517,  -619,  1695,   671,-32768,-32768,   -24,  -397,
  -335
};


#define	YYLAST		4802


static const short yytable[] = {    80,
   459,   497,   643,   662,   974,   346,   425,   606,   353,   354,
   356,   472,   912,   409,   742,   915,  1269,   430,   208,  1272,
   596,   209,    24,    -2,   400,  1278,   401,   856,   487,   313,
     4,   491,   746,  1286,   495,   400,     6,   401,     4,  1292,
  1293,     4,   457,     4,     6,  1235,   777,     6,   237,     6,
   313,   120,   121,   124,   125,     4,   471,    38,   296,   707,
   160,     6,     4,    24,   604,   374,     6,   480,     6,   586,
   297,   380,   453,   314,   187,   188,   189,   190,   191,   192,
   193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
   203,   204,   205,   206,   314,   669,   670,   671,    25,    26,
   161,   678,   212,   213,   214,   215,   216,   217,   218,   219,
   220,   221,   222,   223,   224,   225,   226,   937,   771,   982,
   773,   988,  1143,   387,   762,   313,   486,   313,   490,   450,
   494,   321,  1236,  1056,   876,    28,   763,   400,   822,   401,
   291,   322,   292,   603,   450,   975,    25,    26,   823,    29,
   824,   286,   293,   877,   323,    30,  1044,   451,   324,   387,
   387,    43,    44,   905,   828,   766,   976,   767,   768,   314,
   628,   314,   601,   314,   387,   287,    31,   586,   586,   586,
   818,   640,   924,   586,   281,   283,   774,   819,   314,   387,
   388,    42,   600,   949,   298,   144,   887,  1080,   928,   209,
   781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
   791,   792,   793,   794,   795,   796,   597,   800,   402,   315,
    92,   857,   148,   149,   316,  1435,   388,   388,   534,   402,
   156,   157,   458,   165,   166,   169,   170,   945,  1237,   778,
   315,   388,   355,   364,   143,   144,   458,   173,   174,    39,
   365,   366,   367,   162,   178,   179,   388,   369,    32,   370,
   372,    80,   376,   381,   694,   325,    33,   695,   586,   673,
   950,   674,   825,   764,  1474,    96,   294,   878,   977,   978,
   951,    34,   586,   586,   586,   586,   586,   586,   586,   586,
   586,   586,   586,   586,   586,   586,   586,   586,  1490,   586,
   918,   769,   743,   744,   820,   888,    98,  1049,   209,   938,
   209,   983,   858,   989,  1144,   315,   458,   315,   458,   315,
   458,   706,   638,   458,    35,   300,   639,  1174,  1193,   301,
   144,   144,   986,   432,   716,  1195,  1299,   302,   144,  1300,
   152,   153,    46,    47,   373,    49,   339,    97,   894,   896,
   447,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,   332,    36,   903,   859,
   675,   229,   586,   340,   154,   155,    75,     6,   314,   333,
  1317,  1318,  1319,  1320,  1321,  1322,   141,   142,   881,  1187,
  1188,   146,   830,   305,   408,   144,   509,   334,   511,   512,
   513,   341,    37,   342,   895,   897,   898,   899,   230,   306,
   532,   904,  1259,    99,  1260,   676,    40,   100,    41,   307,
   308,   101,  1189,   343,  1042,   309,   102,   310,   546,   335,
   103,  1046,   717,  1190,   718,   719,   720,   104,   721,   722,
   723,   436,   437,   599,   724,   105,  1108,   725,   327,  1109,
   726,   303,   177,   727,   728,   439,   437,  1110,  1111,  1112,
   344,  1069,   729,   730,   106,   748,   749,   750,   751,   752,
   753,   754,   755,   756,   107,   630,   757,    94,   328,    95,
   758,   452,   144,   641,   642,   329,   644,   539,   540,   731,
   336,   649,   650,   759,   653,   542,   543,  1125,   890,   891,
   892,   893,  1054,   985,   108,   987,   586,  1392,  1392,   109,
   994,  1323,   906,   586,   998,   110,    76,   732,   610,   611,
   612,   613,    77,   111,   315,  1076,    78,   112,   182,  1191,
   183,    79,   113,  1113,   347,   348,   349,   350,   398,  1057,
   -43,   846,  1126,   311,   184,   400,  1024,   401,  1026,   351,
   831,   847,   832,   833,  1092,  1033,   580,   865,  -563,   866,
  1127,  1128,   704,   834,   934,   935,   867,   114,   868,   115,
   716,   811,   330,   812,   813,   814,   815,   835,   836,   837,
   544,   545,   848,   849,   850,   851,   852,   853,   956,   587,
   588,   838,   735,  1414,   737,  1415,   739,   740,   741,   124,
  1129,   804,   590,   591,   805,   116,  1416,  1407,   806,   807,
   808,   592,   593,   207,   760,   228,  1417,   124,   594,   595,
   747,  1007,   117,  1239,   614,   608,   609,  1116,   118,  1130,
  1117,  1418,  1261,  1262,  1263,    46,    47,   548,  1118,  1119,
  1176,   119,  1120,  1121,    50,    51,    52,    53,    54,   549,
   550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
   560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
   570,   571,   572,   617,   618,   854,  1250,   227,   717,  1468,
   718,   719,   720,   238,   721,   722,   723,   839,   840,   244,
   724,   621,   622,   725,   245,   816,   726,   278,  1419,   727,
   728,   539,   656,   883,   279,   138,   139,   140,   729,   730,
   285,   141,   142,  1158,  1122,   368,  1083,   338,   -46,   144,
   290,  1085,   377,   809,   920,   921,   378,  1420,   573,   136,
   137,   138,   139,   140,   382,   731,   383,   141,   142,   385,
  1337,   357,  1339,   358,   151,   359,  1175,   159,   164,   168,
   172,   176,   360,   181,   361,  1199,  1161,  1162,   586,  1203,
   384,  1205,   391,  1338,  1208,  1348,  1349,   124,   386,  1211,
  1301,  1302,  1304,  1302,  1355,   392,  1194,   926,   927,   393,
  1220,  1196,   689,   690,   691,   692,   693,   694,   716,   394,
   695,  1163,   647,   648,  1230,   395,  1231,   396,  1168,   397,
  1387,   405,  1388,  1389,   406,   407,   410,   232,  1244,  1245,
   412,  1247,   574,   411,   691,   692,   693,   694,   575,   576,
   695,   413,   414,  1408,   415,   577,  1386,   578,   579,   580,
   417,  1002,  1395,  1004,   581,   960,   961,   962,   963,   964,
   965,  1390,   418,   419,   420,  1013,   422,  1015,   423,  1017,
  1018,  1019,    46,    47,   548,   424,   426,   427,   428,   429,
   431,    50,    51,    52,    53,    54,   549,   550,   551,   552,
   553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
   563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
   433,   434,   435,   446,   716,   -43,   717,   454,   718,   719,
   720,   444,   721,   722,   723,   456,   461,   463,   724,   465,
   464,   725,   468,   470,   726,   476,   477,   727,   728,   960,
   961,   962,   963,   964,   965,   971,   729,   730,   481,  1342,
   478,   483,   484,   485,   493,   398,  1344,  1391,   126,   498,
  1264,   499,   501,   503,   504,   573,    46,    47,    48,    49,
   507,   505,  1351,   731,   508,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
   210,  1341,   130,   131,   514,   132,   133,   134,   135,   530,
    75,   136,   137,   138,   139,   140,   531,   535,   536,   141,
   142,   537,   717,   547,   718,   719,   720,  1385,   721,   722,
   723,   375,   541,  1432,   724,   589,   602,   725,   607,   616,
   726,   972,   620,   727,   728,   623,   958,   625,   959,   574,
   627,   626,   729,   730,  1412,   575,   576,   654,   637,   645,
   651,   655,   577,   661,   578,   579,   580,   663,   668,   798,
   672,   581,   696,   799,   665,   666,   677,   697,   711,   731,
   708,   960,   961,   962,   963,   964,   965,   966,  1441,   712,
   713,  1202,   714,   745,   580,  1206,  1207,   736,   772,   775,
  1209,  1513,   776,  1212,  1213,  1214,  1215,  1343,   695,  1216,
  1217,   797,  1219,   802,  1221,   872,   860,  1222,   875,   861,
   869,  1226,  1227,   862,  1229,   127,   128,   129,   130,   131,
   863,   132,   133,   134,   135,   864,   870,   136,   137,   138,
   139,   140,   871,   901,   902,   141,   142,   900,   907,   909,
    76,   908,   910,   911,   925,   928,    77,   917,   913,   916,
    78,   919,   930,   931,   932,    79,   127,   128,   129,   130,
   131,   933,   132,   133,   134,   135,   936,   940,   136,   137,
   138,   139,   140,   967,   941,   942,   141,   142,  1443,    46,
    47,    48,   943,   944,   992,  1448,   947,   948,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,  1307,   952,  1309,  1310,  1311,  1312,   953,
   954,   955,   132,   133,   134,   135,   980,   995,   136,   137,
   138,   139,   140,    46,    47,    48,   141,   142,   981,   991,
   993,  1489,    50,    51,    52,    53,    54,    55,    56,    57,
    58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
    68,    69,    70,    71,    72,    73,    74,   996,   997,   716,
   999,  1000,  1009,  1010,  1008,  1011,   922,  1012,  1014,   923,
  1020,  1021,  1022,  1023,  1025,  1027,  1028,  1029,  1132,  1030,
    46,    47,    48,  1370,  1371,  1372,  1373,  1374,  1031,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,  1032,  1034,  1133,  1035,  1036,  1039,
  1040,  1041,  1353,  1134,  1135,  1354,  1396,  1397,  1398,  1399,
   247,   248,   249,   250,   251,   252,   253,   254,   255,  1050,
  1043,  1136,  1047,  1048,  1137,  1138,  1411,  1052,  1413,  1053,
  1055,  1058,  1060,    76,  1061,  1062,  1051,  1064,  1065,    77,
  1066,  1067,  1068,   634,  1084,  1070,  1071,   717,    79,   718,
   719,   720,  1072,   721,   722,   723,  1073,  1074,  1075,   724,
  1440,  1139,   725,  1077,  1078,   726,  1079,  1081,   727,   728,
  1082,  1086,  1087,  1450,  1451,  1452,  1453,   729,   730,  1088,
  1090,  1101,  1091,  1460,  1094,  1095,  1096,    76,  1097,  1099,
  1140,  1100,  1149,    77,  1102,  1160,  1103,  1104,  1105,  1167,
  1106,  1165,    79,  1107,   731,  1151,   682,   683,   684,   685,
   686,   687,   688,  1142,  1156,   689,   690,   691,   692,   693,
   694,  1157,  1485,   695,  1487,  1488,   144,  1159,  1169,  1170,
  1172,  1492,  1345,  1171,  1173,  1179,  1497,  1180,  1499,  1500,
  1178,  1181,  1183,  1185,    76,  1186,  1197,  1506,  1507,  1508,
    77,  1198,  1200,  1223,  1246,  1201,   282,  1204,  1254,    79,
  1210,  1519,  1218,  1521,  1224,  1225,  1228,  1524,  1525,  1238,
  1240,  1528,    46,    47,    48,   371,  1532,  1241,  1534,  1242,
  1536,    50,    51,    52,    53,    54,    55,    56,    57,    58,
    59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
    69,    70,    71,    72,    73,    74,    46,    47,    48,  1249,
  1243,  1251,  1253,  1255,  1252,    50,    51,    52,    53,    54,
    55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
    65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
    46,    47,    48,   716,  1267,  1256,  1258,  1265,  1266,    50,
    51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
    61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    46,    47,    48,   716,  1375,  1328,
  1273,  1268,  1276,    50,    51,    52,    53,    54,    55,    56,
    57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
    67,    68,    69,    70,    71,    72,    73,    74,    46,    47,
    48,   716,  1271,  1298,  1279,  1288,  1291,    50,    51,    52,
    53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
    63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
    73,    74,  1305,  1306,  1327,  1329,  1332,  1333,  1334,  1313,
  1314,   717,  1315,   718,   719,   720,    76,   721,   722,   723,
  1316,  1325,    77,   724,  1326,  1335,   725,  1336,  1340,   726,
  1350,    79,   727,   728,  1352,  1356,  1360,  1365,  1366,  1367,
  1368,   729,   730,  1369,  1376,   717,  1377,   718,   719,   720,
    76,   721,   722,   723,  1378,  1379,    77,   724,   375,  1380,
   725,  1381,  1382,   726,  1400,    79,   727,   728,   731,  1406,
  1383,  1410,  1409,  1422,  1423,   729,   730,  1424,  1426,   717,
  1427,   718,   719,   720,    76,   721,   722,   723,   716,   458,
    77,   724,  1439,  1433,   725,   598,  1346,   726,  1442,    79,
   727,   728,   731,  1444,  1434,  1437,  1445,  1446,  1447,   729,
   730,  1454,  1455,  1456,  1458,  1459,  1461,  1463,    76,  1274,
   716,  1464,  1476,  1465,    77,  1466,  1467,  1477,   634,  1481,
  1347,  1484,  1495,    79,  1478,  1479,   731,   685,   686,   687,
   688,  1275,  1480,   689,   690,   691,   692,   693,   694,  1483,
  1486,   695,    76,  1505,  1509,  1517,  1514,  1515,    77,    46,
    47,    48,   652,  1539,  1457,  1280,   515,    79,    50,    51,
    52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
    62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
    72,    73,    74,  1281,  1520,  1540,   717,   946,   718,   719,
   720,  1516,   721,   722,   723,  1518,  1037,  1530,   724,  1531,
   538,   725,  1147,   843,   726,  1282,   699,   727,   728,  1234,
  1358,   624,   257,   502,   186,   506,   729,   730,   717,   363,
   718,   719,   720,   280,   721,   722,   723,  1283,     0,     0,
   724,     0,     0,   725,     0,     0,   726,     0,     0,   727,
   728,     0,     0,   731,     0,     0,   516,     0,   729,   730,
  1285,     0,     0,     0,     0,     0,     0,   517,   518,   519,
   520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     0,  1482,  1287,     0,     0,   731,   127,   128,   129,   130,
   131,     0,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,  1289,     0,   141,   142,   127,   128,
   129,   130,   131,  1496,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,  1290,     0,   141,   142,
     0,     0,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,     0,    76,   136,   137,   138,   139,   140,    77,
  1294,     0,   141,   142,     0,     0,     0,     0,    79,     0,
   127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,  1295,     0,     0,
   141,   142,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,  1297,
     0,     0,   141,   142,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,  1401,     0,     0,   141,   142,     0,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,  1402,     0,     0,   141,   142,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,  1403,     0,     0,   141,
   142,   127,   128,   129,   130,   131,     0,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,  1404,     0,
     0,   141,   142,   127,   128,   129,   130,   131,     0,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
  1405,     0,     0,   141,   142,     0,     0,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,  1462,     0,     0,   141,   142,     0,
     0,     0,     0,     0,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,   284,     0,     0,   141,   142,   127,   128,   129,   130,
   131,     0,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,  1045,     0,     0,   141,   142,   127,   128,
   129,   130,   131,     0,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
     0,   127,   128,   129,   130,   131,     0,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,   127,   128,   129,   130,   131,     0,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,   127,   128,   129,   130,   131,
     0,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,     0,
     0,   127,   128,   129,   130,   131,     0,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,     0,     0,     0,     0,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   679,
   680,   681,   682,   683,   684,   685,   686,   687,   688,     0,
     0,   689,   690,   691,   692,   693,   694,     4,     0,   695,
     0,     5,     0,     6,     0,     0,  1387,     0,  1388,  1389,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,   958,     0,   959,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
     8,   960,   961,   962,   963,   964,   965,  1390,     0,     0,
     0,     0,     0,     9,     0,    10,   960,   961,   962,   963,
   964,   965,   966,     0,     0,    11,     0,     0,     0,    12,
     0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
     0,     0,     0,     0,   679,   680,   681,   682,   683,   684,
   685,   686,   687,   688,     0,    14,   689,   690,   691,   692,
   693,   694,     0,     0,   695,     0,     0,     0,     0,     0,
     0,     0,     0,   779,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
    16,     0,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,     0,  1394,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,     0,     0,     0,     0,   970,     0,
     0,   211,     0,    17,    18,   679,   680,   681,   682,   683,
   684,   685,   686,   687,   688,     0,     0,   689,   690,   691,
   692,   693,   694,     0,     0,   695,     0,   127,   128,   129,
   130,   131,   914,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   127,
   128,   129,   130,   131,   268,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,   127,   128,   129,   130,   131,   275,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,   127,   128,   129,   130,   131,   276,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,   127,   128,   129,   130,   131,
   277,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,   127,   128,   129,
   130,   131,   510,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   127,
   128,   129,   130,   131,   629,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,   127,   128,   129,   130,   131,   631,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,   127,   128,   129,   130,   131,   632,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,   127,   128,   129,   130,   131,
   633,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,   127,   128,   129,
   130,   131,   738,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   127,
   128,   129,   130,   131,   880,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,   127,   128,   129,   130,   131,   882,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,   127,   128,   129,   130,   131,   884,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,   127,   128,   129,   130,   131,
   885,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,   127,   128,   129,
   130,   131,   886,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   127,
   128,   129,   130,   131,  1115,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,   127,   128,   129,   130,   131,  1124,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,   127,   128,   129,   130,   131,  1270,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,   127,   128,   129,   130,   131,
  1277,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,   127,   128,   129,
   130,   131,  1284,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   127,
   128,   129,   130,   131,  1361,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,   127,   128,   129,   130,   131,  1362,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,   127,   128,   129,   130,   131,  1363,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,   127,   128,   129,   130,   131,
  1364,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,   127,   128,   129,
   130,   131,  1428,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   127,
   128,   129,   130,   131,  1429,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,   127,   128,   129,   130,   131,  1430,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,   127,   128,   129,   130,   131,  1431,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,   127,   128,   129,   130,   131,
  1438,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,   127,   128,   129,
   130,   131,  1491,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   127,
   128,   129,   130,   131,  1493,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,   127,   128,   129,   130,   131,  1494,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,   127,   128,   129,   130,   131,  1502,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,   127,   128,   129,   130,   131,
  1503,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,   127,   128,   129,
   130,   131,  1504,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,   127,
   128,   129,   130,   131,  1522,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,   127,   128,   129,   130,   131,  1523,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,   127,   128,   129,   130,   131,  1526,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,   127,   128,   129,   130,   131,
  1533,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,     0,     0,     0,
     0,     0,  1535,   679,   680,   681,   682,   683,   684,   685,
   686,   687,   688,     0,     0,   689,   690,   691,   692,   693,
   694,     0,     0,   695,   127,   128,   129,   130,   131,  1164,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,     0,     0,
   258,   127,   128,   129,   130,   131,     0,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,     0,     0,     0,     0,   259,   127,   128,
   129,   130,   131,     0,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
     0,     0,     0,     0,   260,   127,   128,   129,   130,   131,
     0,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,     0,     0,     0,
     0,   261,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,     0,     0,     0,     0,   262,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,     0,     0,   263,   127,   128,   129,   130,
   131,     0,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,     0,     0,
     0,     0,   264,   127,   128,   129,   130,   131,     0,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,     0,     0,     0,     0,   265,
   127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,     0,     0,     0,     0,   266,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,     0,
     0,     0,     0,   267,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,     0,     0,
   269,   127,   128,   129,   130,   131,     0,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,     0,     0,     0,     0,   270,   127,   128,
   129,   130,   131,     0,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
     0,     0,     0,     0,   271,   127,   128,   129,   130,   131,
     0,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,     0,     0,     0,
     0,   272,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,     0,     0,     0,     0,   273,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,     0,     0,   274,   127,   128,   129,   130,
   131,     0,   132,   133,   134,   135,     0,     0,   136,   137,
   138,   139,   140,     0,     0,     0,   141,   142,     0,     0,
     0,     0,   440,   127,   128,   129,   130,   131,     0,   132,
   133,   134,   135,     0,     0,   136,   137,   138,   139,   140,
     0,     0,     0,   141,   142,     0,     0,     0,     0,   441,
   127,   128,   129,   130,   131,     0,   132,   133,   134,   135,
     0,     0,   136,   137,   138,   139,   140,     0,     0,     0,
   141,   142,     0,     0,     0,     0,   442,   127,   128,   129,
   130,   131,     0,   132,   133,   134,   135,     0,     0,   136,
   137,   138,   139,   140,     0,     0,     0,   141,   142,     0,
     0,     0,     0,   443,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,     0,     0,
   445,   127,   128,   129,   130,   131,     0,   132,   133,   134,
   135,     0,     0,   136,   137,   138,   139,   140,     0,     0,
     0,   141,   142,     0,     0,     0,     0,   660,   127,   128,
   129,   130,   131,     0,   132,   133,   134,   135,     0,     0,
   136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
     0,     0,     0,     0,   827,   127,   128,   129,   130,   131,
     0,   132,   133,   134,   135,     0,     0,   136,   137,   138,
   139,   140,     0,     0,     0,   141,   142,     0,     0,     0,
     0,  1436,   127,   128,   129,   130,   131,     0,   132,   133,
   134,   135,     0,     0,   136,   137,   138,   139,   140,     0,
     0,     0,   141,   142,     0,     0,     0,     0,  1475,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,   448,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,   533,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,   705,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,   889,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1016,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1150,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1152,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1153,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1154,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1155,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1359,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1469,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1470,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1471,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1472,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1498,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1510,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1511,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1512,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1527,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,     0,     0,  1529,   127,   128,   129,   130,   131,     0,
   132,   133,   134,   135,     0,     0,   136,   137,   138,   139,
   140,     0,     0,     0,   141,   142,     0,     0,  1537,   127,
   128,   129,   130,   131,     0,   132,   133,   134,   135,     0,
     0,   136,   137,   138,   139,   140,     0,     0,     0,   141,
   142,   679,   680,   681,   682,   683,   684,   685,   686,   687,
   688,     0,     0,   689,   690,   691,   692,   693,   694,     0,
     0,   695
};

static const short yycheck[] = {    24,
   383,   419,   520,   548,   844,   245,   342,   482,   248,   249,
   250,   394,   772,   320,   634,   775,  1201,   355,   198,  1204,
     3,   201,   173,     0,     3,  1210,     5,     5,   411,     5,
     5,   414,   652,  1218,   417,     3,    11,     5,     5,  1224,
  1225,     5,     7,     5,    11,     5,     5,    11,   199,    11,
     5,    76,    77,    78,    79,     5,     7,     5,    62,   601,
     5,    11,     5,   173,    43,   286,    11,   405,    11,   467,
    74,     5,   379,    49,    99,   100,   101,   102,   103,   104,
   105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
   115,   116,   117,   118,    49,   575,   576,   577,     5,     6,
    45,   581,   127,   128,   129,   130,   131,   132,   133,   134,
   135,   136,   137,   138,   139,   140,   141,     5,   663,     5,
   665,     5,     5,    10,    49,     5,     7,     5,     7,     5,
     7,    64,    92,     7,    55,   199,    61,     3,    64,     5,
    62,    74,    64,   481,     5,    64,     5,     6,    74,   197,
    76,   173,    74,    74,    87,   197,   916,   378,    91,    10,
    10,   142,   143,    43,   706,    62,    85,    64,    65,    49,
   508,    49,   479,    49,    10,   197,   197,   575,   576,   577,
    74,   517,   802,   581,   209,   210,   666,    81,    49,    10,
    77,     7,   198,     5,   198,   201,   198,   957,     5,   201,
   680,   681,   682,   683,   684,   685,   686,   687,   688,   689,
   690,   691,   692,   693,   694,   695,   199,   697,   197,   195,
   140,   199,   197,   198,   200,  1410,    77,    77,   449,   197,
   197,   198,   197,   197,   198,   197,   198,    44,   198,   198,
   195,    77,   197,   268,   200,   201,   197,   197,   198,   197,
   275,   276,   277,   198,   197,   198,    77,   282,   197,   284,
   285,   286,   287,   197,   191,   198,   197,   194,   666,     3,
    82,     5,   198,   198,  1459,   199,   198,   198,   197,   198,
    92,   197,   680,   681,   682,   683,   684,   685,   686,   687,
   688,   689,   690,   691,   692,   693,   694,   695,  1483,   697,
   780,   198,   638,   639,   198,   198,     7,   198,   201,   197,
   201,   197,   199,   197,   197,   195,   197,   195,   197,   195,
   197,   187,   181,   197,   197,    62,   185,   198,   198,    66,
   201,   201,   850,   358,     5,   198,   198,    74,   201,   201,
   197,   198,     3,     4,     5,     6,    74,   199,   199,   199,
   375,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    74,   197,   199,   717,
   114,     5,   780,   111,   197,   198,    47,    11,    49,    87,
    67,    68,    69,    70,    71,    72,   194,   195,   736,    58,
    59,   198,   709,    48,   200,   201,   431,   105,   433,   434,
   435,   139,   197,   141,   752,   753,   754,   755,    42,    64,
   445,   759,  1182,   199,  1184,   159,     5,   199,     7,    74,
    75,   199,    91,   161,   914,    80,   199,    82,   463,   137,
   199,   921,   113,   102,   115,   116,   117,   199,   119,   120,
   121,   200,   201,   478,   125,   199,   111,   128,    74,   114,
   131,   198,     5,   134,   135,   200,   201,   122,   123,   124,
   198,   946,   143,   144,   199,    49,    50,    51,    52,    53,
    54,    55,    56,    57,   199,   510,    60,     5,   104,     7,
    64,   200,   201,   518,   519,   111,   521,   197,   198,   170,
   198,   526,   527,    77,   529,   197,   198,    66,   748,   749,
   750,   751,   930,   849,   199,   851,   914,  1357,  1358,   199,
   858,   198,   762,   921,   862,   199,   187,   198,    92,    93,
    94,    95,   193,   199,   195,   953,   197,   199,     5,   198,
     7,   202,   199,   198,   186,   187,   188,   189,   197,   932,
   199,    64,   111,   198,     5,     3,   894,     5,   896,   201,
    61,    74,    63,    64,   982,   903,   197,   197,   199,   199,
   129,   130,   597,    74,   814,   815,   197,   199,   199,   199,
     5,    74,   198,    76,    77,    78,    79,    88,    89,    90,
   197,   198,   105,   106,   107,   108,   109,   110,   838,   197,
   198,   102,   627,    64,   629,    66,   631,   632,   633,   634,
   169,    76,   197,   198,    79,   199,    77,  1377,    83,    84,
    85,   197,   198,     5,   198,     5,    87,   652,   197,   198,
   655,   871,   199,  1151,   198,   197,   198,   111,   199,   198,
   114,   102,  1187,  1188,  1189,     3,     4,     5,   122,   123,
  1068,   199,   126,   127,    12,    13,    14,    15,    16,    17,
    18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
    28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
    38,    39,    40,   197,   198,   198,  1166,     7,   113,  1449,
   115,   116,   117,   199,   119,   120,   121,   198,   199,     7,
   125,   197,   198,   128,   199,   198,   131,   201,   169,   134,
   135,   197,   198,   738,     7,   188,   189,   190,   143,   144,
   173,   194,   195,  1030,   198,     5,   966,   197,   200,   201,
   199,   971,   173,   198,   200,   201,   173,   198,    96,   186,
   187,   188,   189,   190,     5,   170,     5,   194,   195,     5,
  1268,   197,  1270,   197,    84,   197,  1063,    87,    88,    89,
    90,    91,   197,    93,   197,  1103,   197,   198,  1166,  1107,
   197,  1109,     5,   198,  1112,   197,   198,   802,   197,  1117,
   200,   201,   200,   201,  1302,   197,  1093,   805,   806,     5,
  1128,  1098,   186,   187,   188,   189,   190,   191,     5,     5,
   194,  1041,   523,   524,  1142,   197,  1144,   197,  1048,   197,
    61,   173,    63,    64,   200,   199,     5,   147,  1156,  1157,
   197,  1159,   180,     5,   188,   189,   190,   191,   186,   187,
   194,   197,     5,  1378,   197,   193,  1354,   195,   196,   197,
     5,   866,  1360,   868,   202,    96,    97,    98,    99,   100,
   101,   102,   197,     5,     5,   880,     5,   882,   197,   884,
   885,   886,     3,     4,     5,     5,     5,   200,     5,   155,
   197,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
   197,   197,   197,     7,     5,   199,   113,   197,   115,   116,
   117,   200,   119,   120,   121,     7,     7,   199,   125,     7,
   199,   128,     7,     7,   131,   198,     8,   134,   135,    96,
    97,    98,    99,   100,   101,   102,   143,   144,   173,  1277,
   197,     7,     5,     7,   197,   197,  1284,   198,     7,     7,
  1190,   198,     7,     7,     7,    96,     3,     4,     5,     6,
     5,     7,  1300,   170,   201,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     8,   198,   177,   178,     7,   180,   181,   182,   183,     7,
    47,   186,   187,   188,   189,   190,     7,     7,     7,   194,
   195,     5,   113,     5,   115,   116,   117,  1353,   119,   120,
   121,   195,     7,  1406,   125,     7,     7,   128,     7,     7,
   131,   198,     7,   134,   135,     7,    61,   198,    63,   180,
   197,   201,   143,   144,  1382,   186,   187,     7,     5,     5,
     5,   197,   193,   200,   195,   196,   197,   199,     5,   200,
     3,   202,   195,   204,   199,   199,     5,   199,   197,   170,
     7,    96,    97,    98,    99,   100,   101,   102,  1416,   197,
   197,  1106,   197,     6,   197,  1110,  1111,   201,   199,   199,
  1115,  1509,   181,  1118,  1119,  1120,  1121,   198,   194,  1124,
  1125,     3,  1127,   197,  1129,     6,   199,  1132,     7,   199,
   197,  1136,  1137,   199,  1139,   174,   175,   176,   177,   178,
   199,   180,   181,   182,   183,   199,   197,   186,   187,   188,
   189,   190,   199,     5,     5,   194,   195,   197,     5,     5,
   187,   197,     5,   200,     5,     5,   193,   198,   200,   199,
   197,   200,     5,     5,     5,   202,   174,   175,   176,   177,
   178,     5,   180,   181,   182,   183,     5,     5,   186,   187,
   188,   189,   190,   198,     5,     5,   194,   195,  1418,     3,
     4,     5,     3,   200,     7,  1425,     5,     5,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,  1238,     5,  1240,  1241,  1242,  1243,     5,
     3,     3,   180,   181,   182,   183,     5,     7,   186,   187,
   188,   189,   190,     3,     4,     5,   194,   195,     5,     5,
     5,  1481,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
    30,    31,    32,    33,    34,    35,    36,     5,     5,     5,
     5,     5,   199,   199,     7,   197,    46,     5,   198,    49,
     7,     7,     7,     7,     7,     7,     7,     7,    66,     3,
     3,     4,     5,  1318,  1319,  1320,  1321,  1322,     7,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,     7,     7,   104,     7,     7,     7,
     7,   201,   156,   111,   112,   159,  1361,  1362,  1363,  1364,
   146,   147,   148,   149,   150,   151,   152,   153,   154,     7,
   200,   129,   199,   199,   132,   133,  1381,     7,  1383,     7,
     7,   197,     7,   187,     7,     7,    85,     7,     7,   193,
     7,     7,     5,   197,   199,     7,     7,   113,   202,   115,
   116,   117,     7,   119,   120,   121,     7,     7,     7,   125,
  1415,   169,   128,     7,     7,   131,     7,     5,   134,   135,
     5,   199,     5,  1428,  1429,  1430,  1431,   143,   144,     5,
     7,   200,     7,  1438,     7,     7,     7,   187,     7,     7,
   198,     7,     7,   193,   200,     7,   201,   201,   200,     5,
   201,   200,   202,   201,   170,   197,   177,   178,   179,   180,
   181,   182,   183,   201,   201,   186,   187,   188,   189,   190,
   191,   201,  1477,   194,  1479,  1480,   201,   201,     5,     7,
    87,  1486,   198,     7,     7,     7,  1491,     7,  1493,  1494,
   200,     7,     7,     7,   187,     7,     7,  1502,  1503,  1504,
   193,     7,     5,     5,     3,   197,   199,   197,     5,   202,
   197,  1516,   197,  1518,   197,   197,   197,  1522,  1523,   197,
   197,  1526,     3,     4,     5,     6,  1531,   197,  1533,   197,
  1535,    12,    13,    14,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
    31,    32,    33,    34,    35,    36,     3,     4,     5,   200,
   197,   200,     7,     5,   200,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     3,     4,     5,     5,   200,   199,     7,     5,     5,    12,
    13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
    23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
    33,    34,    35,    36,     3,     4,     5,     5,    86,     5,
     7,   201,     7,    12,    13,    14,    15,    16,    17,    18,
    19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
    29,    30,    31,    32,    33,    34,    35,    36,     3,     4,
     5,     5,   200,   200,     7,     7,     7,    12,    13,    14,
    15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
    35,    36,   197,   197,     7,     7,     7,     7,     7,   200,
   200,   113,   198,   115,   116,   117,   187,   119,   120,   121,
   200,   198,   193,   125,   198,     7,   128,     7,     7,   131,
     7,   202,   134,   135,     7,     7,   201,     7,     7,     7,
     7,   143,   144,     5,   200,   113,   201,   115,   116,   117,
   187,   119,   120,   121,   201,   200,   193,   125,   195,   118,
   128,   201,   201,   131,     7,   202,   134,   135,   170,     5,
   201,   197,     7,     5,     5,   143,   144,     5,   199,   113,
   198,   115,   116,   117,   187,   119,   120,   121,     5,   197,
   193,   125,     5,   200,   128,   198,   198,   131,     5,   202,
   134,   135,   170,     5,   200,   200,     7,     7,     7,   143,
   144,     7,     7,     7,     7,   197,     7,     7,   187,     7,
     5,     7,   200,     7,   193,     7,     7,   197,   197,    41,
   198,     7,     7,   202,   198,   197,   170,   180,   181,   182,
   183,     7,   197,   186,   187,   188,   189,   190,   191,   197,
   197,   194,   187,   103,     5,     7,   198,   198,   193,     3,
     4,     5,   197,     0,   198,     7,    55,   202,    12,    13,
    14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
    34,    35,    36,     7,   198,     0,   113,   830,   115,   116,
   117,   197,   119,   120,   121,   197,   907,   198,   125,   197,
   454,   128,  1010,   712,   131,     7,   585,   134,   135,  1147,
  1306,   500,   186,   423,    97,   428,   143,   144,   113,   257,
   115,   116,   117,   209,   119,   120,   121,     7,    -1,    -1,
   125,    -1,    -1,   128,    -1,    -1,   131,    -1,    -1,   134,
   135,    -1,    -1,   170,    -1,    -1,   145,    -1,   143,   144,
     7,    -1,    -1,    -1,    -1,    -1,    -1,   156,   157,   158,
   159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
    -1,   198,     7,    -1,    -1,   170,   174,   175,   176,   177,
   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,   187,
   188,   189,   190,    -1,     7,    -1,   194,   195,   174,   175,
   176,   177,   178,   198,   180,   181,   182,   183,    -1,    -1,
   186,   187,   188,   189,   190,    -1,     7,    -1,   194,   195,
    -1,    -1,   174,   175,   176,   177,   178,    -1,   180,   181,
   182,   183,    -1,   187,   186,   187,   188,   189,   190,   193,
     7,    -1,   194,   195,    -1,    -1,    -1,    -1,   202,    -1,
   174,   175,   176,   177,   178,    -1,   180,   181,   182,   183,
    -1,    -1,   186,   187,   188,   189,   190,     7,    -1,    -1,
   194,   195,   174,   175,   176,   177,   178,    -1,   180,   181,
   182,   183,    -1,    -1,   186,   187,   188,   189,   190,     7,
    -1,    -1,   194,   195,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,     7,    -1,    -1,   194,   195,    -1,   174,   175,   176,
   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,     7,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,     7,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,    -1,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,     7,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,    -1,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
     7,    -1,    -1,   194,   195,    -1,    -1,   174,   175,   176,
   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,     7,    -1,    -1,   194,   195,    -1,
    -1,    -1,    -1,    -1,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,     8,    -1,    -1,   194,   195,   174,   175,   176,   177,
   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,   187,
   188,   189,   190,     8,    -1,    -1,   194,   195,   174,   175,
   176,   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,
   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,
    -1,   174,   175,   176,   177,   178,    -1,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,    -1,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,   174,   175,   176,   177,   178,
    -1,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,   174,   175,   176,
   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,    -1,
    -1,   174,   175,   176,   177,   178,    -1,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,    -1,    -1,    -1,    -1,   174,   175,   176,
   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,   179,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,   191,     5,    -1,   194,
    -1,     9,    -1,    11,    -1,    -1,    61,    -1,    63,    64,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
    48,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
    -1,    -1,    -1,    61,    -1,    63,    96,    97,    98,    99,
   100,   101,   102,    -1,    -1,    73,    -1,    -1,    -1,    77,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
    -1,    -1,    -1,    -1,   174,   175,   176,   177,   178,   179,
   180,   181,   182,   183,    -1,   103,   186,   187,   188,   189,
   190,   191,    -1,    -1,   194,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
   138,    -1,   174,   175,   176,   177,   178,    -1,   180,   181,
   182,   183,    -1,   198,   186,   187,   188,   189,   190,    -1,
    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   198,    -1,
    -1,   203,    -1,   171,   172,   174,   175,   176,   177,   178,
   179,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,   191,    -1,    -1,   194,    -1,   174,   175,   176,
   177,   178,   201,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,   201,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,   201,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,   201,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,   174,   175,   176,   177,   178,
   201,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,   174,   175,   176,
   177,   178,   201,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,   201,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,   201,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,   201,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,   174,   175,   176,   177,   178,
   201,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,   174,   175,   176,
   177,   178,   201,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,   201,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,   201,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,   201,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,   174,   175,   176,   177,   178,
   201,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,   174,   175,   176,
   177,   178,   201,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,   201,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,   201,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,   201,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,   174,   175,   176,   177,   178,
   201,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,   174,   175,   176,
   177,   178,   201,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,   201,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,   201,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,   201,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,   174,   175,   176,   177,   178,
   201,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,   174,   175,   176,
   177,   178,   201,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,   201,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,   201,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,   201,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,   174,   175,   176,   177,   178,
   201,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,   174,   175,   176,
   177,   178,   201,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,   201,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,   201,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,   201,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,   174,   175,   176,   177,   178,
   201,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,   174,   175,   176,
   177,   178,   201,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,   174,
   175,   176,   177,   178,   201,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,   201,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,   174,   175,   176,   177,   178,   201,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,   174,   175,   176,   177,   178,
   201,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
    -1,    -1,   201,   174,   175,   176,   177,   178,   179,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
   191,    -1,    -1,   194,   174,   175,   176,   177,   178,   200,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,
   200,   174,   175,   176,   177,   178,    -1,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,    -1,    -1,    -1,    -1,   200,   174,   175,
   176,   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,
   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,
    -1,    -1,    -1,    -1,   200,   174,   175,   176,   177,   178,
    -1,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
    -1,   200,   174,   175,   176,   177,   178,    -1,   180,   181,
   182,   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,
    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,    -1,    -1,   200,   174,   175,   176,   177,
   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,   187,
   188,   189,   190,    -1,    -1,    -1,   194,   195,    -1,    -1,
    -1,    -1,   200,   174,   175,   176,   177,   178,    -1,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,
   174,   175,   176,   177,   178,    -1,   180,   181,   182,   183,
    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,
   194,   195,    -1,    -1,    -1,    -1,   200,   174,   175,   176,
   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,    -1,
    -1,    -1,    -1,   200,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,
   200,   174,   175,   176,   177,   178,    -1,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,    -1,    -1,    -1,    -1,   200,   174,   175,
   176,   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,
   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,
    -1,    -1,    -1,    -1,   200,   174,   175,   176,   177,   178,
    -1,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
    -1,   200,   174,   175,   176,   177,   178,    -1,   180,   181,
   182,   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,
    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,    -1,    -1,   200,   174,   175,   176,   177,
   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,   187,
   188,   189,   190,    -1,    -1,    -1,   194,   195,    -1,    -1,
    -1,    -1,   200,   174,   175,   176,   177,   178,    -1,   180,
   181,   182,   183,    -1,    -1,   186,   187,   188,   189,   190,
    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,
   174,   175,   176,   177,   178,    -1,   180,   181,   182,   183,
    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,
   194,   195,    -1,    -1,    -1,    -1,   200,   174,   175,   176,
   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,   186,
   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,    -1,
    -1,    -1,    -1,   200,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,
   200,   174,   175,   176,   177,   178,    -1,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,    -1,
    -1,   194,   195,    -1,    -1,    -1,    -1,   200,   174,   175,
   176,   177,   178,    -1,   180,   181,   182,   183,    -1,    -1,
   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,   195,
    -1,    -1,    -1,    -1,   200,   174,   175,   176,   177,   178,
    -1,   180,   181,   182,   183,    -1,    -1,   186,   187,   188,
   189,   190,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
    -1,   200,   174,   175,   176,   177,   178,    -1,   180,   181,
   182,   183,    -1,    -1,   186,   187,   188,   189,   190,    -1,
    -1,    -1,   194,   195,    -1,    -1,    -1,    -1,   200,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,    -1,    -1,   198,   174,   175,   176,   177,   178,    -1,
   180,   181,   182,   183,    -1,    -1,   186,   187,   188,   189,
   190,    -1,    -1,    -1,   194,   195,    -1,    -1,   198,   174,
   175,   176,   177,   178,    -1,   180,   181,   182,   183,    -1,
    -1,   186,   187,   188,   189,   190,    -1,    -1,    -1,   194,
   195,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,    -1,    -1,   186,   187,   188,   189,   190,   191,    -1,
    -1,   194
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
#line 316 "yacc.y"
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
#line 352 "yacc.y"
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
#line 394 "yacc.y"
{ Formulation_S.DefineQuantity = NULL ; Nbr_Index = 0 ; ;
    break;}
case 18:
#line 417 "yacc.y"
{            
      strcpy(yyincludename, yyvsp[0].c); yyincludenum++ ; return(0);
    ;
    break;}
case 20:
#line 432 "yacc.y"
{ Help(NULL); ;
    break;}
case 21:
#line 435 "yacc.y"
{ Help(yyvsp[-1].c); ;
    break;}
case 22:
#line 438 "yacc.y"
{ Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 23:
#line 441 "yacc.y"
{ Free(yyvsp[-3].c); Free(yyvsp[-2].c); Help(yyvsp[-1].c); ;
    break;}
case 25:
#line 445 "yacc.y"
{
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 26:
#line 453 "yacc.y"
{
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      InteractivePostSubOperation_S = PostSubOperation_S ;
      InteractiveCompute = 1;
    ;
    break;}
case 28:
#line 470 "yacc.y"
{ Nbr_Index = 0 ; ;
    break;}
case 30:
#line 477 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-3].c, 0, 0) ; ;
    break;}
case 31:
#line 480 "yacc.y"
{ Add_Group(&Group_S, yyvsp[-4].c, 2, yyvsp[-3].i) ; ;
    break;}
case 32:
#line 483 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 33:
#line 485 "yacc.y"
{ Add_Group_Index(&Group_S, yyvsp[-5].c, 2) ; ;
    break;}
case 36:
#line 496 "yacc.y"
{
      Flag_MultipleIndex = 0 ;  /* Init ... */
      ListOfInitialList2_L = ListOfInitialList_L ;  /* Init pour ListOfRegion */
    ;
    break;}
case 37:
#line 501 "yacc.y"
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
#line 513 "yacc.y"
{
      Group_S.SuppListType = Type_SuppList ;
      if (!Nbr_Index)  Group_S.InitialSuppList = yyvsp[-1].l ;
      else             Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 39:
#line 522 "yacc.y"
{
      Group_S.FunctionType = REGION ;  Group_S.Type = REGIONLIST  ;
      Group_S.InitialList = yyvsp[0].l ;
      Group_S.SuppListType = SUPPLIST_NONE ;  Group_S.InitialSuppList = NULL ;
      yyval.i = -1 ;
    ;
    break;}
case 40:
#line 533 "yacc.y"
{
      yyval.i = yyvsp[0].i ;
    ;
    break;}
case 41:
#line 538 "yacc.y"
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
#line 575 "yacc.y"
{ yyval.i = REGION ; ;
    break;}
case 43:
#line 578 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_Type, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Function for Group: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_Type));
      Free(yyvsp[0].c) ;
    ;
    break;}
case 44:
#line 589 "yacc.y"
{ yyval.l = yyvsp[0].l ; ;
    break;}
case 45:
#line 591 "yacc.y"
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
#line 607 "yacc.y"
{ Type_SuppList = SUPPLIST_NONE ;  yyval.l = NULL ; ;
    break;}
case 47:
#line 610 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; yyval.l = yyvsp[0].l ; ;
    break;}
case 48:
#line 613 "yacc.y"
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
#line 664 "yacc.y"
{ yyval.i = Get_DefineForString(FunctionForGroup_SuppList, yyvsp[0].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Supplementary Region: %s %s", 
		 yyvsp[0].c, Get_Valid_SXD(FunctionForGroup_SuppList)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 50:
#line 676 "yacc.y"
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
#line 700 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 52:
#line 707 "yacc.y"
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
#line 720 "yacc.y"
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
#line 738 "yacc.y"
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
#line 761 "yacc.y"
{ Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; List_Add(yyval.l = ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 56:
#line 765 "yacc.y"
{ 
      Flag_MultipleIndex = 0 ;
      List_Reset(ListOfInt_L) ; 
      for(j=yyvsp[-2].i ; (yyvsp[-2].i<yyvsp[0].i)?(j<=yyvsp[0].i):(j>=yyvsp[0].i) ; (yyvsp[-2].i<yyvsp[0].i)?j++:j--) 
	List_Add(ListOfInt_L, &j) ;
      yyval.l = ListOfInt_L ;
    ;
    break;}
case 57:
#line 774 "yacc.y"
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
#line 788 "yacc.y"
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
#line 822 "yacc.y"
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
#line 835 "yacc.y"
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
#line 859 "yacc.y"
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
#line 869 "yacc.y"
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
#line 891 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 67:
#line 896 "yacc.y"
{ Flag_MultipleIndex = 0 ; ;
    break;}
case 68:
#line 897 "yacc.y"
{ Flag_MultipleIndex = 1 ; ;
    break;}
case 69:
#line 902 "yacc.y"
{ yyval.i = (int)yyvsp[-1].d ; ;
    break;}
case 73:
#line 921 "yacc.y"
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
#line 941 "yacc.y"
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
#line 992 "yacc.y"
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
#line 1012 "yacc.y"
{ Expression_S.Type = CONSTANT ;  Expression_S.Case.Constant = yyvsp[-1].d ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Cst", 1) ;
    ;
    break;}
case 79:
#line 1018 "yacc.y"
{ if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;  yyval.i = i ;
    ;
    break;}
case 80:
#line 1024 "yacc.y"
{ Current_DofIndexInWholeQuantity = -2 ;  
      List_Reset(ListOfPointer_L) ; List_Reset(ListOfPointer2_L) ; ;
    break;}
case 81:
#line 1027 "yacc.y"
{ Expression_S.Type = WHOLEQUANTITY ;  Expression_S.Case.WholeQuantity = yyvsp[0].l ;
      yyval.i = Add_Expression(&Expression_S, "Exp_Fct", 1) ; ;
    break;}
case 82:
#line 1035 "yacc.y"
{ Current_WholeQuantity_L = List_Create( 5, 5, sizeof(struct WholeQuantity)) ;
      List_Add(ListOfPointer_L, &Current_WholeQuantity_L) ;
    ;
    break;}
case 83:
#line 1039 "yacc.y"
{ yyval.l = *((List_T **)List_Pointer(ListOfPointer_L, List_Nbr(ListOfPointer_L)-1)) ;
      List_Pop(ListOfPointer_L) ;
    ;
    break;}
case 85:
#line 1051 "yacc.y"
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
#line 1064 "yacc.y"
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
#line 1078 "yacc.y"
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
#line 1093 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_TIME ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 89:
#line 1099 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 90:
#line 1105 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_CROSSPRODUCT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_CrossProductValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 91:
#line 1111 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_DIVIDE ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_DivideValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 92:
#line 1117 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_PLUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AddValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 93:
#line 1123 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MINUS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_SubstractValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 94:
#line 1129 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_MODULO ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ModuloValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 95:
#line 1135 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_POWER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_PowerValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 96:
#line 1141 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESS ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 97:
#line 1147 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATER ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 98:
#line 1153 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_LESSOREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_LessOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 99:
#line 1159 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_GREATEROREQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_GreaterOrEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 100:
#line 1165 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_EQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_EqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 101:
#line 1171 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOTEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 102:
#line 1177 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_APPROXEQUAL ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_ApproxEqualValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 103:
#line 1183 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_AND ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_AndValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 104:
#line 1189 "yacc.y"
{ WholeQuantity_S.Type = WQ_BINARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_OR ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_OrValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; 
    ;
    break;}
case 105:
#line 1196 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NEG ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NegValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 107:
#line 1204 "yacc.y"
{ WholeQuantity_S.Type = WQ_UNARYOPERATOR ;
      WholeQuantity_S.Case.Operator.TypeOperator = OP_NOT ;
      WholeQuantity_S.Case.Operator.Function = (void (*)())Cal_NotValue ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ; ;
    break;}
case 109:
#line 1217 "yacc.y"
{ WholeQuantity_S.Type = WQ_CONSTANT ;
      WholeQuantity_S.Case.Constant = yyvsp[0].d ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 110:
#line 1223 "yacc.y"
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
#line 1301 "yacc.y"
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
#line 1335 "yacc.y"
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
#line 1345 "yacc.y"
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
#line 1358 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 115:
#line 1360 "yacc.y"
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
#line 1371 "yacc.y"
{ WholeQuantity_S.Type = WQ_SOLIDANGLE ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 117:
#line 1377 "yacc.y"
{ WholeQuantity_S.Type = WQ_ORDER ;
      WholeQuantity_S.Case.OperatorAndQuantity.Index = Quantity_Index ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 118:
#line 1383 "yacc.y"
{ Last_DofIndexInWholeQuantity = Current_DofIndexInWholeQuantity ; ;
    break;}
case 119:
#line 1385 "yacc.y"
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
case 120:
#line 1414 "yacc.y"
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
case 121:
#line 1438 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, yyvsp[0].c, &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      if (FlagError) 
	vyyerror("Unknown Current Value: $%s %s", yyvsp[0].c, Get_Valid_SXP(Current_Value)) ;
      Free(yyvsp[0].c) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 122:
#line 1449 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "TimeStep", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 123:
#line 1455 "yacc.y"
{ WholeQuantity_S.Type = WQ_CURRENTVALUE ;
      Get_PointerForString(Current_Value, "DTime", &FlagError,
			   (void **)&WholeQuantity_S.Case.CurrentValue.Value) ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 124:
#line 1462 "yacc.y"
{ WholeQuantity_S.Type = WQ_ARGUMENT ;
      WholeQuantity_S.Case.Argument.Index = yyvsp[0].i ;
      List_Add(Current_WholeQuantity_L, &WholeQuantity_S) ;
    ;
    break;}
case 125:
#line 1468 "yacc.y"
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
case 126:
#line 1479 "yacc.y"
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
case 127:
#line 1494 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 128:
#line 1495 "yacc.y"
{ yyval.i = 0 ; ;
    break;}
case 129:
#line 1496 "yacc.y"
{ yyval.i = yyvsp[-1].i ; ;
    break;}
case 130:
#line 1501 "yacc.y"
{ yyval.i = 1 ; ;
    break;}
case 131:
#line 1502 "yacc.y"
{ yyval.i = yyvsp[-2].i + 1 ; ;
    break;}
case 132:
#line 1508 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 134:
#line 1513 "yacc.y"
{ /* Attention: provisoire */
      List_Reset(ListOfDouble_L) ;
      Value = (double)Num_Group(&Group_S, "PA_Region", yyvsp[-2].i) ;
      List_Add(ListOfDouble_L, &Value) ;
    ;
    break;}
case 135:
#line 1520 "yacc.y"
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
case 136:
#line 1547 "yacc.y"
{ if (!Problem_S.JacobianMethod)
	Problem_S.JacobianMethod = 
	  List_Create(5, 5, sizeof (struct JacobianMethod) ) ;
    ;
    break;}
case 137:
#line 1552 "yacc.y"
{ List_Add(Problem_S.JacobianMethod, &JacobianMethod_S) ; ;
    break;}
case 138:
#line 1559 "yacc.y"
{ JacobianMethod_S.Name = NULL ; JacobianMethod_S.JacobianCase = NULL ; ;
    break;}
case 140:
#line 1568 "yacc.y"
{ Check_NameOfStructNotExist("JacobianMethod", Problem_S.JacobianMethod,
				 yyvsp[-1].c, fcmp_JacobianMethod_Name) ;
      JacobianMethod_S.Name = yyvsp[-1].c ; ;
    break;}
case 141:
#line 1573 "yacc.y"
{ JacobianMethod_S.JacobianCase = yyvsp[-1].l ; ;
    break;}
case 142:
#line 1580 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct JacobianCase)) ; ;
    break;}
case 143:
#line 1583 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &JacobianCase_S) ; ;
    break;}
case 144:
#line 1590 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ;
      JacobianCase_S.TypeJacobian = JACOBIAN_VOL ; ;
    break;}
case 146:
#line 1600 "yacc.y"
{ JacobianCase_S.RegionIndex = Num_Group(&Group_S, "JA_Region", yyvsp[-1].i) ; ;
    break;}
case 147:
#line 1603 "yacc.y"
{ JacobianCase_S.RegionIndex = -1 ; ;
    break;}
case 148:
#line 1606 "yacc.y"
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
case 149:
#line 1637 "yacc.y"
{ if (!Problem_S.IntegrationMethod)
	Problem_S.IntegrationMethod = 
	  List_Create(5, 5, sizeof(struct IntegrationMethod)) ;
    ;
    break;}
case 150:
#line 1643 "yacc.y"
{ List_Add(Problem_S.IntegrationMethod, &IntegrationMethod_S) ; ;
    break;}
case 151:
#line 1650 "yacc.y"
{ 
      IntegrationMethod_S.Name = NULL ; 
      IntegrationMethod_S.IntegrationCase = NULL ; 
      IntegrationMethod_S.CriterionIndex = -1 ;
    ;
    break;}
case 153:
#line 1663 "yacc.y"
{ 
      Check_NameOfStructNotExist("IntegrationMethod", Problem_S.IntegrationMethod,
				 yyvsp[-1].c, fcmp_IntegrationMethod_Name) ;
      IntegrationMethod_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 154:
#line 1670 "yacc.y"
{ IntegrationMethod_S.CriterionIndex = yyvsp[-1].i ;  ;
    break;}
case 155:
#line 1673 "yacc.y"
{ IntegrationMethod_S.IntegrationCase = yyvsp[-1].l ; ;
    break;}
case 156:
#line 1680 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct IntegrationCase)) ; ;
    break;}
case 157:
#line 1683 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &IntegrationCase_S) ; ;
    break;}
case 158:
#line 1690 "yacc.y"
{ 
      IntegrationCase_S.Type = GAUSS ; 
      IntegrationCase_S.SubType = STANDARD ; 
    ;
    break;}
case 160:
#line 1702 "yacc.y"
{ IntegrationCase_S.Type =
	Get_DefineForString(Integration_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 161:
#line 1711 "yacc.y"
{ IntegrationCase_S.SubType =
	Get_DefineForString(Integration_SubType, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown SubType for IntegrationMethod: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Integration_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 162:
#line 1720 "yacc.y"
{ IntegrationCase_S.Case = yyvsp[-1].l ; ;
    break;}
case 163:
#line 1727 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct Quadrature)) ; ;
    break;}
case 164:
#line 1730 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &QuadratureCase_S) ; ;
    break;}
case 165:
#line 1737 "yacc.y"
{ QuadratureCase_S.ElementType = TRIANGLE ; 
      QuadratureCase_S.NumberOfPoints = 4 ;
      QuadratureCase_S.MaxNumberOfPoints = 4 ;
      QuadratureCase_S.NumberOfDivisions = 1 ;
      QuadratureCase_S.MaxNumberOfDivisions = 1 ;
      QuadratureCase_S.StoppingCriterion = 1.E-4 ;
      QuadratureCase_S.Function = (void (*)())Gauss_Triangle ;
    ;
    break;}
case 167:
#line 1753 "yacc.y"
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
case 168:
#line 1806 "yacc.y"
{ QuadratureCase_S.NumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 169:
#line 1809 "yacc.y"
{ QuadratureCase_S.MaxNumberOfPoints = (int)yyvsp[-1].d ; ;
    break;}
case 170:
#line 1812 "yacc.y"
{ QuadratureCase_S.NumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 171:
#line 1815 "yacc.y"
{ QuadratureCase_S.MaxNumberOfDivisions = (int)yyvsp[-1].d ; ;
    break;}
case 172:
#line 1818 "yacc.y"
{ QuadratureCase_S.StoppingCriterion = yyvsp[-1].d ; ;
    break;}
case 173:
#line 1829 "yacc.y"
{ if (!Problem_S.Constraint)
	Problem_S.Constraint = List_Create(20, 20, sizeof (struct Constraint) ) ;
    ;
    break;}
case 175:
#line 1839 "yacc.y"
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
case 177:
#line 1864 "yacc.y"
{ Constraint_S.Name = NULL ;  
      Constraint_S.Type = ASSIGN ;
      Constraint_S.ConstraintPerRegion = NULL ;
      Constraint_S.MultiConstraintPerRegion = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 179:
#line 1878 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint, yyvsp[-1].c,
				 fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-1].c ; ;
    break;}
case 180:
#line 1884 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Constraint", Problem_S.Constraint,
				 StringAux1, fcmp_Constraint_Name) ;
      Constraint_S.Name = yyvsp[-2].c ; ;
    break;}
case 181:
#line 1891 "yacc.y"
{ Constraint_S.Type = Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 182:
#line 1899 "yacc.y"
{ Constraint_S.ConstraintPerRegion = yyvsp[-1].l ; ;
    break;}
case 183:
#line 1902 "yacc.y"
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
case 184:
#line 1924 "yacc.y"
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
case 185:
#line 1939 "yacc.y"
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
case 186:
#line 1963 "yacc.y"
{ 
      ConstraintPerRegion_S.Type = Constraint_S.Type ;
      ConstraintPerRegion_S.RegionIndex = -1 ;
      ConstraintPerRegion_S.SubRegionIndex = -1 ;
      ConstraintPerRegion_S.TimeFunctionIndex = -1 ;
    ;
    break;}
case 188:
#line 1977 "yacc.y"
{ ConstraintPerRegion_S.Type = 
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)
	vyyerror("Unknown Type of Constraint: %s %s",
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 189:
#line 1986 "yacc.y"
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
case 190:
#line 2010 "yacc.y"
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
case 191:
#line 2035 "yacc.y"
{
      ConstraintPerRegion_S.TimeFunctionIndex = yyvsp[-1].i ;
    ;
    break;}
case 192:
#line 2040 "yacc.y"
{ 
      if (ConstraintPerRegion_S.Type == ASSIGN ||
	  ConstraintPerRegion_S.Type == INIT)
	ConstraintPerRegion_S.Case.Fixed.ExpressionIndex = yyvsp[-1].i ;
      else  vyyerror("Value incompatible with Type") ;
    ;
    break;}
case 193:
#line 2048 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == ASSIGNFROMRESOLUTION ||
	  ConstraintPerRegion_S.Type == INITFROMRESOLUTION)
	ConstraintPerRegion_S.Case.Solve.ResolutionName = yyvsp[-1].c ;
      else  vyyerror("NameOfResolution incompatible with Type") ;
    ;
    break;}
case 194:
#line 2056 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == NETWORK) {
	ConstraintPerRegion_S.Case.Network.Node1 = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Network.Node2 = yyvsp[-2].i ;
      }
      else  vyyerror("Branch incompatible with Type") ;
    ;
    break;}
case 195:
#line 2066 "yacc.y"
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
case 196:
#line 2082 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.SubRegionRefIndex =
	  Num_Group(&Group_S, "CO_RegionRef", yyvsp[-1].i) ;
      else  vyyerror("SubRegionRef incompatible with Type") ;
    ;
    break;}
case 197:
#line 2089 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.FunctionIndex = yyvsp[-1].i ;
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 198:
#line 2095 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK)
	ConstraintPerRegion_S.Case.Link.CoefIndex = yyvsp[-1].i ;
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 199:
#line 2101 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-1].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = -1 ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 200:
#line 2109 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FunctionIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FunctionIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Function incompatible with Type") ;
    ;
    break;}
case 201:
#line 2117 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.CoefIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.CoefIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Coefficient incompatible with Type") ;
    ;
    break;}
case 202:
#line 2125 "yacc.y"
{
      if (ConstraintPerRegion_S.Type == CST_LINK) {
	ConstraintPerRegion_S.Case.Link.FilterIndex  = yyvsp[-4].i ;
	ConstraintPerRegion_S.Case.Link.FilterIndex2 = yyvsp[-2].i ;
      }
      else  vyyerror("Filter incompatible with Type") ;
    ;
    break;}
case 203:
#line 2145 "yacc.y"
{ if (!Problem_S.FunctionSpace)
	Problem_S.FunctionSpace = 
	  List_Create(10, 5, sizeof (struct FunctionSpace) ) ;
    ;
    break;}
case 205:
#line 2156 "yacc.y"
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
case 207:
#line 2183 "yacc.y"
{ FunctionSpace_S.Name = NULL ; FunctionSpace_S.Type = FORM0 ;
      FunctionSpace_S.BasisFunction = FunctionSpace_S.SubSpace =
	FunctionSpace_S.GlobalQuantity = FunctionSpace_S.Constraint = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 209:
#line 2196 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 yyvsp[-1].c, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 210:
#line 2202 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("FunctionSpace", Problem_S.FunctionSpace,
				 StringAux1, fcmp_FunctionSpace_Name) ;
      FunctionSpace_S.Name = yyvsp[-2].c ; ;
    break;}
case 211:
#line 2209 "yacc.y"
{ FunctionSpace_S.Type = Get_DefineForString(Field_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of FunctionSpace: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Field_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 212:
#line 2217 "yacc.y"
{ FunctionSpace_S.BasisFunction  = yyvsp[-1].l ; ;
    break;}
case 213:
#line 2220 "yacc.y"
{ FunctionSpace_S.SubSpace       = yyvsp[-1].l ; ;
    break;}
case 214:
#line 2223 "yacc.y"
{ FunctionSpace_S.GlobalQuantity = yyvsp[-1].l ; ;
    break;}
case 215:
#line 2226 "yacc.y"
{ FunctionSpace_S.Constraint     = yyvsp[-1].l ; ;
    break;}
case 216:
#line 2233 "yacc.y"
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
case 217:
#line 2249 "yacc.y"
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
case 218:
#line 2286 "yacc.y"
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
case 220:
#line 2305 "yacc.y"
{ BasisFunction_S.Name = yyvsp[-1].c ; ;
    break;}
case 221:
#line 2308 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-1].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-1].c ; BasisFunction_S.Dimension = 1 ; ;
    break;}
case 222:
#line 2313 "yacc.y"
{ Check_NameOfStructNotExist("NameOfCoef", Current_BasisFunction_L,
				 yyvsp[-2].c, fcmp_BasisFunction_NameOfCoef) ;
      BasisFunction_S.NameOfCoef = yyvsp[-2].c ; BasisFunction_S.Dimension = yyvsp[-1].i ; ;
    break;}
case 223:
#line 2318 "yacc.y"
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
case 224:
#line 2330 "yacc.y"
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
case 225:
#line 2354 "yacc.y"
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
case 227:
#line 2414 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = yyvsp[-1].i ; ;
    break;}
case 228:
#line 2417 "yacc.y"
{
      Nbr_Index = Save_Nbr_Index ;
      BasisFunction_S.GlobalBasisFunction =
	List_Create(yyvsp[-5].i, 1, sizeof(struct GlobalBasisFunction)) ;
      if (!Flag_MultipleIndex)
	vyyerror("Multiple Group needed for Multiple Formulation: %s {}", yyvsp[-6].c) ;
    ;
    break;}
case 229:
#line 2426 "yacc.y"
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
case 230:
#line 2491 "yacc.y"
{ yyval.l = Current_SubSpace_L =
	List_Create(6, 6, sizeof (struct SubSpace)) ; ;
    break;}
case 231:
#line 2495 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &SubSpace_S) ; ;
    break;}
case 232:
#line 2502 "yacc.y"
{ SubSpace_S.Name = NULL ; SubSpace_S.BasisFunction  = NULL ; ;
    break;}
case 234:
#line 2511 "yacc.y"
{ Check_NameOfStructNotExist("SubSpace", Current_SubSpace_L,
				 yyvsp[-1].c, fcmp_SubSpace_Name) ;
      SubSpace_S.Name = yyvsp[-1].c ; ;
    break;}
case 235:
#line 2516 "yacc.y"
{ SubSpace_S.BasisFunction = yyvsp[-1].l ; ;
    break;}
case 236:
#line 2523 "yacc.y"
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
case 237:
#line 2539 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 238:
#line 2545 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof(int)) ; ;
    break;}
case 239:
#line 2548 "yacc.y"
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
case 240:
#line 2567 "yacc.y"
{ yyval.l = Current_GlobalQuantity_L =
	List_Create(6, 6, sizeof (struct GlobalQuantity)) ; ;
    break;}
case 241:
#line 2571 "yacc.y"
{ GlobalQuantity_S.Num = Num_BasisFunction++ ;
      List_Add(yyval.l = yyvsp[-3].l, &GlobalQuantity_S) ;
    ;
    break;}
case 242:
#line 2580 "yacc.y"
{ GlobalQuantity_S.Name = NULL ; GlobalQuantity_S.Num  = 0 ;
      GlobalQuantity_S.Type = ALIASOF ; GlobalQuantity_S.ReferenceIndex = -1 ;
    ;
    break;}
case 244:
#line 2591 "yacc.y"
{ Check_NameOfStructNotExist("GlobalQuantity", Current_GlobalQuantity_L,
				 yyvsp[-1].c, fcmp_GlobalQuantity_Name) ;
      GlobalQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 245:
#line 2596 "yacc.y"
{ GlobalQuantity_S.Type =
	Get_DefineForString(GlobalQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(GlobalQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 246:
#line 2605 "yacc.y"
{ if ((i = List_ISearchSeq(FunctionSpace_S.BasisFunction, yyvsp[-1].c, 
			       fcmp_BasisFunction_NameOfCoef)) < 0) 
	vyyerror("Unknown NameOfCoef: %s", yyvsp[-1].c) ;
      else
	GlobalQuantity_S.ReferenceIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 247:
#line 2618 "yacc.y"
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
case 248:
#line 2633 "yacc.y"
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
case 249:
#line 2707 "yacc.y"
{ 
      ConstraintInFS_S.QuantityType = LOCALQUANTITY ;
      ConstraintInFS_S.ReferenceIndex = -1 ; ConstraintInFS_S.EntityIndex = -1 ;
      ConstraintInFS_S.ConstraintPerRegion = NULL ;
      ConstraintInFS_S.Active.ResolutionIndex = -1 ;
      ConstraintInFS_S.Active.Active = NULL ;
      Constraint_Index = -1 ;
    ;
    break;}
case 251:
#line 2723 "yacc.y"
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
case 252:
#line 2741 "yacc.y"
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
case 253:
#line 2755 "yacc.y"
{ Type_Function = yyvsp[-1].i ; ;
    break;}
case 254:
#line 2758 "yacc.y"
{ Type_SuppList = yyvsp[-1].i ; ;
    break;}
case 255:
#line 2761 "yacc.y"
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
case 256:
#line 2807 "yacc.y"
{ if (!Problem_S.Formulation)
	Problem_S.Formulation = List_Create(10, 5, sizeof (struct Formulation)) ;
    ;
    break;}
case 258:
#line 2817 "yacc.y"
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
case 260:
#line 2843 "yacc.y"
{ Formulation_S.Name = NULL ; Formulation_S.Type = FEMEQUATION ;
      Formulation_S.DefineQuantity = NULL ; Formulation_S.Equation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 262:
#line 2855 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 yyvsp[-1].c, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-1].c ; ;
    break;}
case 263:
#line 2861 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Formulation", Problem_S.Formulation,
				 StringAux1, fcmp_Formulation_Name) ;
      Formulation_S.Name = yyvsp[-2].c ; ;
    break;}
case 264:
#line 2868 "yacc.y"
{ Formulation_S.Type =
	Get_DefineForString(Formulation_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of Formulation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Formulation_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 266:
#line 2879 "yacc.y"
{ Formulation_S.Equation = yyvsp[-1].l ; ;
    break;}
case 267:
#line 2885 "yacc.y"
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
case 268:
#line 2899 "yacc.y"
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
case 269:
#line 2917 "yacc.y"
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
case 271:
#line 2938 "yacc.y"
{ DefineQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 272:
#line 2941 "yacc.y"
{ DefineQuantity_S.Type = GLOBALQUANTITY ; ;
    break;}
case 273:
#line 2945 "yacc.y"
{ DefineQuantity_S.Type = INTEGRALQUANTITY ; ;
    break;}
case 274:
#line 2948 "yacc.y"
{ DefineQuantity_S.Type =
	Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineQuantity: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 275:
#line 2957 "yacc.y"
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
case 276:
#line 2996 "yacc.y"
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
case 277:
#line 3020 "yacc.y"
{ 
      DefineQuantity_S.DofDataIndex = yyvsp[-1].i ; 
    ;
    break;}
case 278:
#line 3025 "yacc.y"
{ 
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 279:
#line 3031 "yacc.y"
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
case 280:
#line 3181 "yacc.y"
{
      DefineQuantity_S.IntegralQuantity.InIndex = Num_Group(&Group_S, "IQ_In", yyvsp[-1].i) ;
    ;
    break;}
case 281:
#line 3186 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 282:
#line 3195 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s", yyvsp[-1].c) ;
      else
	DefineQuantity_S.IntegralQuantity.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 283:
#line 3204 "yacc.y"
{ DefineQuantity_S.IntegralQuantity.Symmetry = yyvsp[-1].i ; ;
    break;}
case 285:
#line 3212 "yacc.y"
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
case 286:
#line 3252 "yacc.y"
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
case 287:
#line 3267 "yacc.y"
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
case 288:
#line 3295 "yacc.y"
{ EquationTerm_S.Type = GALERKIN ; ;
    break;}
case 289:
#line 3298 "yacc.y"
{ EquationTerm_S.Type = DERHAM ; ;
    break;}
case 290:
#line 3301 "yacc.y"
{ EquationTerm_S.Type = GLOBALTERM ; ;
    break;}
case 291:
#line 3304 "yacc.y"
{ EquationTerm_S.Type = GLOBALEQUATION ; ;
    break;}
case 292:
#line 3311 "yacc.y"
{
      EquationTerm_S.Case.GlobalEquation.Type = NETWORK ;
      EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm = NULL ;
    ;
    break;}
case 294:
#line 3322 "yacc.y"
{ EquationTerm_S.Case.GlobalEquation.Type =
	Get_DefineForString(Constraint_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of GlobalEquation: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(Constraint_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 295:
#line 3331 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Constraint, yyvsp[-1].c,
			       fcmp_Constraint_Name)) >= 0)
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = i ;
      else
	EquationTerm_S.Case.GlobalEquation.ConstraintIndex = -1 ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 296:
#line 3341 "yacc.y"
{
      if (!EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm)
	EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm =
	  List_Create( 3, 3, sizeof(struct GlobalEquationTerm)) ;
      List_Add(EquationTerm_S.Case.GlobalEquation.GlobalEquationTerm,
	       &GlobalEquationTerm_S) ;
    ;
    break;}
case 297:
#line 3355 "yacc.y"
{
      GlobalEquationTerm_S.DefineQuantityIndexNode = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexLoop = -1 ;
      GlobalEquationTerm_S.DefineQuantityIndexEqu  = -1 ;
      GlobalEquationTerm_S.InIndex = -1 ;
    ;
    break;}
case 299:
#line 3367 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexNode = Quantity_Index ; ;
    break;}
case 300:
#line 3369 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexLoop = Quantity_Index ; ;
    break;}
case 301:
#line 3371 "yacc.y"
{ GlobalEquationTerm_S.DefineQuantityIndexEqu  = Quantity_Index ; ;
    break;}
case 302:
#line 3373 "yacc.y"
{ GlobalEquationTerm_S.InIndex = Num_Group(&Group_S, "FO_In", yyvsp[-1].i) ; ;
    break;}
case 303:
#line 3381 "yacc.y"
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
case 305:
#line 3403 "yacc.y"
{
      EquationTerm_S.Case.LocalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 306:
#line 3411 "yacc.y"
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
case 307:
#line 3473 "yacc.y"
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
case 308:
#line 3519 "yacc.y"
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
case 309:
#line 3543 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 310:
#line 3552 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s", yyvsp[-1].c) ;
      else
	EquationTerm_S.Case.LocalTerm.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 311:
#line 3566 "yacc.y"
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
case 313:
#line 3595 "yacc.y"
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
case 314:
#line 3619 "yacc.y"
{ 
      EquationTerm_S.Case.GlobalTerm.Term.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -1 ;
      Current_NoDofIndexInWholeQuantity = -1 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 315:
#line 3627 "yacc.y"
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
case 316:
#line 3682 "yacc.y"
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
case 317:
#line 3699 "yacc.y"
{ Type_TermOperator = NODT_    ; ;
    break;}
case 318:
#line 3700 "yacc.y"
{ Type_TermOperator = DT_      ; ;
    break;}
case 319:
#line 3701 "yacc.y"
{ Type_TermOperator = DTDOF_   ; ;
    break;}
case 320:
#line 3702 "yacc.y"
{ Type_TermOperator = DTDT_    ; ;
    break;}
case 321:
#line 3703 "yacc.y"
{ Type_TermOperator = DTDTDOF_ ; ;
    break;}
case 322:
#line 3704 "yacc.y"
{ Type_TermOperator = JACNL_   ; ;
    break;}
case 323:
#line 3705 "yacc.y"
{ Type_TermOperator = NEVERDT_ ; ;
    break;}
case 324:
#line 3712 "yacc.y"
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
case 325:
#line 3726 "yacc.y"
{ Quantity_TypeOperator = NOOP ;

      if ((i = List_ISearchSeq(Formulation_S.DefineQuantity, yyvsp[-1].c,
			       fcmp_DefineQuantity_Name)) < 0)
	vyyerror("Unknown DefineQuantity: %s", yyvsp[-1].c) ;
      Quantity_Index = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 326:
#line 3744 "yacc.y"
{ if (!Problem_S.Resolution)
	Problem_S.Resolution = List_Create(10, 5, sizeof (struct Resolution)) ;
    ;
    break;}
case 328:
#line 3754 "yacc.y"
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
case 330:
#line 3779 "yacc.y"
{ Resolution_S.Name = NULL ; Resolution_S.DefineSystem = NULL ;
      Resolution_S.Operation = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 332:
#line 3791 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 yyvsp[-1].c, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-1].c ;
    ;
    break;}
case 333:
#line 3798 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("Resolution", Problem_S.Resolution,
				 StringAux1, fcmp_Resolution_Name) ;
      Resolution_S.Name = yyvsp[-2].c ; ;
    break;}
case 334:
#line 3805 "yacc.y"
{ Resolution_S.DefineSystem = yyvsp[-1].l ; ;
    break;}
case 335:
#line 3808 "yacc.y"
{ Operation_L = List_Create( 5, 5, sizeof(struct Operation)) ; ;
    break;}
case 336:
#line 3810 "yacc.y"
{ Resolution_S.Operation = yyvsp[-1].l ;  List_Delete(Operation_L) ; ;
    break;}
case 337:
#line 3816 "yacc.y"
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
case 338:
#line 3831 "yacc.y"
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
case 339:
#line 3850 "yacc.y"
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
case 341:
#line 3869 "yacc.y"
{ DefineSystem_S.Name = yyvsp[-1].c ; ;
    break;}
case 342:
#line 3872 "yacc.y"
{ DefineSystem_S.Type = Get_DefineForString(DefineSystem_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of DefineSystem: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(DefineSystem_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 343:
#line 3880 "yacc.y"
{ DefineSystem_S.FormulationIndex = yyvsp[-1].l ; ;
    break;}
case 344:
#line 3883 "yacc.y"
{
      DefineSystem_S.MeshName = yyvsp[-1].c ;
    ;
    break;}
case 345:
#line 3888 "yacc.y"
{ 
      DefineSystem_S.OriginSystemIndex = yyvsp[-1].l ;
    ;
    break;}
case 346:
#line 3893 "yacc.y"
{ 
      DefineSystem_S.DestinationSystemName = yyvsp[-1].c ; 
    ;
    break;}
case 347:
#line 3898 "yacc.y"
{ DefineSystem_S.FrequencyValue =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(DefineSystem_S.FrequencyValue, &Value) ;
      }
      DefineSystem_S.Type = VAL_COMPLEX ;
    ;
    break;}
case 348:
#line 3908 "yacc.y"
{
      DefineSystem_S.SolverDataFileName = yyvsp[-1].c ;
    ;
    break;}
case 349:
#line 3917 "yacc.y"
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
case 350:
#line 3954 "yacc.y"
{ yyval.l = yyvsp[-1].l ; ;
    break;}
case 351:
#line 3961 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 352:
#line 3964 "yacc.y"
{
      if ((i = List_ISearchSeq(Problem_S.Formulation, yyvsp[0].c, fcmp_Formulation_Name)) < 0)
	vyyerror("Unknown Formulation: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 353:
#line 3976 "yacc.y"
{
      yyval.l = List_Create(1, 1, sizeof(int)) ;
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyval.l, &i) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 354:
#line 3986 "yacc.y"
{ yyval.l = yyvsp[-1].l ;  ;
    break;}
case 355:
#line 3992 "yacc.y"
{ yyval.l = List_Create(2, 2, sizeof(int)) ; ;
    break;}
case 356:
#line 3995 "yacc.y"
{
      if ((i = List_ISearchSeq(Current_System_L, yyvsp[0].c, fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      else  
	List_Add(yyvsp[-2].l, &i) ;
      yyval.l = yyvsp[-2].l ; Free(yyvsp[0].c) ;
    ;
    break;}
case 357:
#line 4007 "yacc.y"
{ 
      yyval.l = List_Create(6, 6, sizeof (struct Operation)) ;
      Operation_S.Type = OPERATION_NONE ; 
      Operation_S.DefineSystemIndex = -1 ;
      List_Add(Operation_L, &Operation_S) ;
    ;
    break;}
case 358:
#line 4015 "yacc.y"
{ 
      List_Add(yyval.l = yyvsp[-1].l, (struct Operation*)
	       List_Pointer(Operation_L, List_Nbr(Operation_L)-1)) ; 
    ;
    break;}
case 359:
#line 4026 "yacc.y"
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
case 360:
#line 4042 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-1].i ;
    ;
    break;}
case 361:
#line 4049 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPTHETA ;
    ;
    break;}
case 362:
#line 4055 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_TIMELOOPNEWMARK ;
    ;
    break;}
case 363:
#line 4061 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVELOOP ;
    ;
    break;}
case 364:
#line 4067 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_ITERATIVETIMEREDUCTION ;
    ;
    break;}
case 365:
#line 4075 "yacc.y"
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
case 366:
#line 4091 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SETTIME ;
      Operation_P->Case.SetTimeIndex = yyvsp[-2].i ;
    ;
    break;}
case 367:
#line 4098 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_BREAK ;
    ;
    break;}
case 368:
#line 4104 "yacc.y"
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
case 369:
#line 4115 "yacc.y"
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
case 370:
#line 4126 "yacc.y"
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
case 371:
#line 4142 "yacc.y"
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
case 372:
#line 4154 "yacc.y"
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
case 373:
#line 4176 "yacc.y"
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
case 374:
#line 4198 "yacc.y"
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
case 375:
#line 4211 "yacc.y"
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
case 376:
#line 4224 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_PRINT ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 378:
#line 4233 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_WRITE ;
      Operation_P->Case.Print.Expression = NULL ; 
      Operation_P->DefineSystemIndex = -1 ;
    ;
    break;}
case 380:
#line 4242 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_CHANGEOFCOORDINATES ;
      Operation_P->Case.ChangeOfCoordinates.GroupIndex =
	Num_Group(&Group_S, "OP_ChgCoord", yyvsp[-4].i) ;
      Operation_P->Case.ChangeOfCoordinates.ExpressionIndex = yyvsp[-2].i ; 
    ;
    break;}
case 381:
#line 4252 "yacc.y"
{
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Type = OPERATION_SYSTEMCOMMAND ;
      Operation_P->Case.SystemCommand = yyvsp[-1].c ; 
    ;
    break;}
case 382:
#line 4263 "yacc.y"
{ Operation_P->Case.Print.Expression = 
	List_Create(List_Nbr(ListOfInt_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfInt_L) ; i++) {
	List_Read(ListOfInt_L, i, &j) ; 
	List_Add(Operation_P->Case.Print.Expression, &j) ;
      }
    ;
    break;}
case 383:
#line 4272 "yacc.y"
{ if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[0].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[0].c) ;
      Free(yyvsp[0].c) ;
      Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 384:
#line 4282 "yacc.y"
{
      Operation_P->Case.Print.FileOut = NULL ; 
      Operation_P->Case.Print.TimeStep = NULL ; 
      Operation_P->Case.Print.DofNumber = NULL ; 
    ;
    break;}
case 386:
#line 4292 "yacc.y"
{ Operation_P->Case.Print.FileOut = yyvsp[0].c ; ;
    break;}
case 387:
#line 4295 "yacc.y"
{ Operation_P->Case.Print.TimeStep = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(Operation_P->Case.Print.TimeStep, &j);
      }
    ;
    break;}
case 388:
#line 4304 "yacc.y"
{ Operation_P->Case.Print.DofNumber = 
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(int)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ; j = (int)Value ;
	List_Add(Operation_P->Case.Print.DofNumber, &j) ;     
      }
    ;
    break;}
case 389:
#line 4317 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = 0. ;
      Operation_P->Case.TimeLoopTheta.TimeMax = 1. ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = -1 ;
      Operation_P->Case.TimeLoopTheta.Operation = NULL ;
    ;
    break;}
case 391:
#line 4333 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Time0   = yyvsp[-1].d ; ;
    break;}
case 392:
#line 4337 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.TimeMax = yyvsp[-1].d ; ;
    break;}
case 393:
#line 4341 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 394:
#line 4345 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.ThetaIndex = yyvsp[-1].i ; ;
    break;}
case 395:
#line 4350 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopTheta.Operation = yyvsp[-1].l ;
    ;
    break;}
case 396:
#line 4361 "yacc.y"
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
case 398:
#line 4378 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Time0   = yyvsp[-1].d ; ;
    break;}
case 399:
#line 4382 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.TimeMax = yyvsp[-1].d ; ;
    break;}
case 400:
#line 4386 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.DTimeIndex = yyvsp[-1].i ; ;
    break;}
case 401:
#line 4390 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Beta   = yyvsp[-1].d ; ;
    break;}
case 402:
#line 4394 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Gamma   = yyvsp[-1].d ; ;
    break;}
case 403:
#line 4399 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.TimeLoopNewmark.Operation = yyvsp[-1].l ;
    ;
    break;}
case 404:
#line 4410 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration  = 20 ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = -1 ;
      Operation_P->Case.IterativeLoop.Criterion        = 1.e-3 ;
      Operation_P->Case.IterativeLoop.Flag = 0 ;
      Operation_P->Case.IterativeLoop.Operation = NULL ;
    ;
    break;}
case 406:
#line 4425 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 407:
#line 4429 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.RelaxationFactorIndex = yyvsp[-1].i ; ;
    break;}
case 408:
#line 4433 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Criterion = yyvsp[-1].d ; ;
    break;}
case 409:
#line 4437 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 410:
#line 4442 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeLoop.Operation = yyvsp[-1].l ;
    ;
    break;}
case 411:
#line 4453 "yacc.y"
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
case 413:
#line 4471 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.NbrMaxIteration = (int)yyvsp[-1].d ; ;
    break;}
case 414:
#line 4475 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.DivisionCoefficient = yyvsp[-1].d ; ;
    break;}
case 415:
#line 4479 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Criterion = yyvsp[-1].d ; ;
    break;}
case 416:
#line 4483 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Flag = (int)yyvsp[-1].d ; ;
    break;}
case 417:
#line 4488 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      if ((i = List_ISearchSeq(Resolution_S.DefineSystem, yyvsp[-1].c,
			       fcmp_DefineSystem_Name)) < 0)
	vyyerror("Unknown DefineSystem: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      Current_System = Operation_P->DefineSystemIndex = i ;
    ;
    break;}
case 418:
#line 4498 "yacc.y"
{ Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.ChangeOfState = yyvsp[-1].l ;
    ;
    break;}
case 419:
#line 4504 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.Operation = yyvsp[-1].l ;
    ;
    break;}
case 420:
#line 4510 "yacc.y"
{ List_Pop(Operation_L) ;
      Operation_P = (struct Operation*)
	List_Pointer(Operation_L, List_Nbr(Operation_L)-1) ;
      Operation_P->Case.IterativeTimeReduction.OperationEnd = yyvsp[-1].l ;
    ;
    break;}
case 421:
#line 4520 "yacc.y"
{ yyval.l = List_Create(3, 3, sizeof (struct ChangeOfState)) ; ;
    break;}
case 422:
#line 4523 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &ChangeOfState_S) ; ;
    break;}
case 423:
#line 4528 "yacc.y"
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
case 425:
#line 4546 "yacc.y"
{ ChangeOfState_S.Type =
	Get_DefineForString(ChangeOfState_Type, yyvsp[-1].c, &FlagError) ;
      if (FlagError)  
	vyyerror("Unknown Type of ChangeOfState: %s %s", 
		 yyvsp[-1].c, Get_Valid_SXD(ChangeOfState_Type)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 426:
#line 4555 "yacc.y"
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
case 427:
#line 4584 "yacc.y"
{ ChangeOfState_S.InIndex = Num_Group(&Group_S, "OP_In", yyvsp[-1].i) ; ;
    break;}
case 428:
#line 4587 "yacc.y"
{ ChangeOfState_S.Criterion = yyvsp[-1].d ; ;
    break;}
case 429:
#line 4590 "yacc.y"
{ 
      if (ChangeOfState_S.ExpressionIndex < 0)
	ChangeOfState_S.ExpressionIndex = yyvsp[-1].i ;
      else
	ChangeOfState_S.ExpressionIndex2 = yyvsp[-1].i ;
    ;
    break;}
case 430:
#line 4598 "yacc.y"
{
      if((i = List_ISearchSeq(Problem_S.Expression, yyvsp[-1].c, fcmp_Expression_Name)) < 0)
	vyyerror("Unknown Name of Expression for Flag: %s", yyvsp[-1].c) ;
      Free(yyvsp[-1].c) ;
      ChangeOfState_S.FlagIndex = i ;
    ;
    break;}
case 431:
#line 4613 "yacc.y"
{ 
      if (!Problem_S.PostProcessing)
	Problem_S.PostProcessing = 
	  List_Create(10, 5, sizeof (struct PostProcessing)) ;
    ;
    break;}
case 433:
#line 4625 "yacc.y"
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
case 435:
#line 4648 "yacc.y"
{ 
      PostProcessing_S.Name = NULL ;  
      PostProcessing_S.FormulationIndex = -1 ; 
      PostProcessing_S.OriginSystemIndex = NULL ;
      PostProcessing_S.NameOfSystem = NULL ;
      PostProcessing_S.PostQuantity = NULL ;
      Nbr_Index = 0 ;
    ;
    break;}
case 437:
#line 4662 "yacc.y"
{ Nbr_Index = 0 ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 yyvsp[-1].c, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 438:
#line 4669 "yacc.y"
{ Nbr_Index = yyvsp[-1].i ;
      sprintf(StringAux1, "%s_%d_", yyvsp[-2].c, 1) ;
      Check_NameOfStructNotExist("PostProcessing", Problem_S.PostProcessing,
				 StringAux1, fcmp_PostProcessing_Name) ;
      PostProcessing_S.Name = yyvsp[-2].c ; 
    ;
    break;}
case 439:
#line 4677 "yacc.y"
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
case 440:
#line 4723 "yacc.y"
{ 
      PostProcessing_S.NameOfSystem = yyvsp[-1].c ;
    ;
    break;}
case 441:
#line 4728 "yacc.y"
{ PostProcessing_S.PostQuantity = yyvsp[-1].l ; ;
    break;}
case 442:
#line 4734 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantity)) ; ;
    break;}
case 443:
#line 4737 "yacc.y"
{ List_Add(yyval.l = yyvsp[-3].l, &PostQuantity_S) ; ;
    break;}
case 444:
#line 4742 "yacc.y"
{ 
      PostQuantity_S.Name = NULL ;  
      PostQuantity_S.PostQuantityTerm = NULL ; 
    ;
    break;}
case 446:
#line 4753 "yacc.y"
{ PostQuantity_S.Name = yyvsp[-1].c ; ;
    break;}
case 447:
#line 4756 "yacc.y"
{ PostQuantity_S.PostQuantityTerm = yyvsp[-1].l ; ;
    break;}
case 448:
#line 4762 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostQuantityTerm)) ; ;
    break;}
case 449:
#line 4767 "yacc.y"
{ 
      PostQuantityTerm_S.EvaluationType = INTEGRAL ;
      List_Add(yyval.l = yyvsp[-4].l, &PostQuantityTerm_S) ; 
    ;
    break;}
case 450:
#line 4773 "yacc.y"
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
case 451:
#line 4786 "yacc.y"
{ 
      PostQuantityTerm_S.Type = 0 ;
      PostQuantityTerm_S.TypeTimeDerivative = NODT_ ;
      PostQuantityTerm_S.WholeQuantity = NULL ;
      PostQuantityTerm_S.InIndex = -1 ;
      PostQuantityTerm_S.JacobianMethodIndex = -1 ;
      PostQuantityTerm_S.IntegrationMethodIndex = -1 ;
    ;
    break;}
case 453:
#line 4800 "yacc.y"
{ 
      PostQuantityTerm_S.TypeTimeDerivative = Type_TermOperator ;
      Current_DofIndexInWholeQuantity = -2 ;
      List_Reset(ListOfPointer_L) ;
    ;
    break;}
case 454:
#line 4807 "yacc.y"
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
case 455:
#line 4835 "yacc.y"
{ /* force the Type */
     PostQuantityTerm_S.Type =
       Get_DefineForString(DefineQuantity_Type, yyvsp[-1].c, &FlagError) ;
     if (FlagError) 
       vyyerror("Unknown Type of Operation: %s %s", 
		yyvsp[-1].c, Get_Valid_SXD(DefineQuantity_Type)) ;
     Free(yyvsp[-1].c) ;
   ;
    break;}
case 456:
#line 4844 "yacc.y"
{ Save_Nbr_Index = Nbr_Index ; Nbr_Index = 0 ; ;
    break;}
case 457:
#line 4845 "yacc.y"
{ 
      Nbr_Index = Save_Nbr_Index ;
      PostQuantityTerm_S.InIndex = Num_Group(&Group_S, "PQ_In", yyvsp[-1].i) ;
   ;
    break;}
case 458:
#line 4851 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.JacobianMethod, yyvsp[-1].c,
			       fcmp_JacobianMethod_Name)) < 0)
	vyyerror("Unknown JacobianMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.JacobianMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 459:
#line 4860 "yacc.y"
{ if ((i = List_ISearchSeq(Problem_S.IntegrationMethod, yyvsp[-1].c,
			       fcmp_IntegrationMethod_Name)) < 0)
	vyyerror("Unknown IntegrationMethod: %s",yyvsp[-1].c) ;
      else
	PostQuantityTerm_S.IntegrationMethodIndex = i ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 460:
#line 4877 "yacc.y"
{ 
      if (!Problem_S.PostOperation)
	Problem_S.PostOperation = 
	  List_Create(10, 5, sizeof (struct PostOperation)) ;
    ;
    break;}
case 462:
#line 4889 "yacc.y"
{ List_Add(Problem_S.PostOperation, &PostOperation_S) ; ;
    break;}
case 464:
#line 4896 "yacc.y"
{ 
      PostOperation_S.Name = NULL ;  
      PostOperation_S.AppendString = NULL ;  
      PostOperation_S.Format = FORMAT_GMSH ;  
      PostOperation_S.PostProcessingIndex = -1 ; 
    ;
    break;}
case 466:
#line 4908 "yacc.y"
{ 
      Check_NameOfStructNotExist("PostOperation", Problem_S.PostOperation,
				 yyvsp[-1].c, fcmp_PostOperation_Name) ;
      PostOperation_S.Name = yyvsp[-1].c ; 
    ;
    break;}
case 467:
#line 4915 "yacc.y"
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
case 468:
#line 4927 "yacc.y"
{ 
      PostOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[-1].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[-1].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[-1].c) ;
    ;
    break;}
case 469:
#line 4937 "yacc.y"
{ 
      PostOperation_S.AppendString = yyvsp[-1].c ;
    ;
    break;}
case 470:
#line 4942 "yacc.y"
{ PostOperation_S.PostSubOperation = yyvsp[-1].l ; ;
    break;}
case 471:
#line 4948 "yacc.y"
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
case 472:
#line 4965 "yacc.y"
{
      PostOperation_S.PostSubOperation = yyvsp[-1].l ;
      if (PostOperation_S.PostProcessingIndex >= 0)
	List_Add(Problem_S.PostOperation, &PostOperation_S) ;
    ;
    break;}
case 473:
#line 4975 "yacc.y"
{ yyval.l = List_Create(5, 5, sizeof (struct PostSubOperation)) ; ;
    break;}
case 474:
#line 4978 "yacc.y"
{
      PostSubOperation_S.Format = -1 ;
    ;
    break;}
case 475:
#line 4982 "yacc.y"
{ 
      if(PostSubOperation_S.Format<0)
	PostSubOperation_S.Format = PostOperation_S.Format ;
      List_Add(yyval.l = yyvsp[-2].l, &PostSubOperation_S) ; 
    ;
    break;}
case 476:
#line 4993 "yacc.y"
{
      vyyerror("Plot has been superseded by Print "
	       "(Plot OnRegion becomes Print OnElementsOf)") ;
    ;
    break;}
case 477:
#line 4999 "yacc.y"
{
      PostSubOperation_S.Type = POP_PRINT ;
    ;
    break;}
case 478:
#line 5008 "yacc.y"
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
case 479:
#line 5020 "yacc.y"
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
case 480:
#line 5043 "yacc.y"
{ PostSubOperation_S.CombinationType = MULTIPLICATION ; ;
    break;}
case 481:
#line 5044 "yacc.y"
{ PostSubOperation_S.CombinationType = DIVISION ; ;
    break;}
case 482:
#line 5045 "yacc.y"
{ PostSubOperation_S.CombinationType = ADDITION ; ;
    break;}
case 483:
#line 5046 "yacc.y"
{ PostSubOperation_S.CombinationType = SOUSTRACTION ; ;
    break;}
case 484:
#line 5052 "yacc.y"
{ yyval.i = -1 ; ;
    break;}
case 485:
#line 5054 "yacc.y"
{ yyval.i = Num_Group(&Group_S, "PO_Support", yyvsp[-1].i) ; ;
    break;}
case 486:
#line 5060 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = -1 ;
    ;
    break;}
case 487:
#line 5066 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONREGION ;
      PostSubOperation_S.Case.OnRegion.RegionIndex = 
	Num_Group(&Group_S, "PO_OnRegion", yyvsp[0].i) ;
    ;
    break;}
case 488:
#line 5073 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONELEMENTSOF ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnElementsOf", yyvsp[0].i) ;
    ;
    break;}
case 489:
#line 5082 "yacc.y"
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
case 490:
#line 5096 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID ;
      PostSubOperation_S.Case.OnRegion.RegionIndex =
	Num_Group(&Group_S, "PO_OnGrid", yyvsp[0].i) ;
    ;
    break;}
case 491:
#line 5104 "yacc.y"
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
case 492:
#line 5117 "yacc.y"
{
      PostSubOperation_S.Case.OnParamGrid.ParameterValue[1] =
	List_Create(List_Nbr(ListOfDouble_L), 1, sizeof(double)) ;
      for (i = 0 ; i < List_Nbr(ListOfDouble_L) ; i++) {
	List_Read(ListOfDouble_L, i, &Value) ;
	List_Add(PostSubOperation_S.Case.OnParamGrid.ParameterValue[1], &Value) ;
      }
    ;
    break;}
case 493:
#line 5127 "yacc.y"
{
      PostSubOperation_S.SubType = PRINT_ONGRID_0D ;
      PostSubOperation_S.Case.OnGrid.x[0] = yyvsp[-5].d ;
      PostSubOperation_S.Case.OnGrid.y[0] = yyvsp[-3].d ;
      PostSubOperation_S.Case.OnGrid.z[0] = yyvsp[-1].d ;
    ;
    break;}
case 494:
#line 5136 "yacc.y"
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
case 495:
#line 5150 "yacc.y"
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
case 496:
#line 5169 "yacc.y"
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
case 497:
#line 5191 "yacc.y"
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
case 498:
#line 5211 "yacc.y"
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
      PostSubOperation_S.Value_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Iso = 0 ;
      PostSubOperation_S.Iso_L = List_Create(10,10,sizeof(double)); ;
      PostSubOperation_S.Sort = 0 ;
    ;
    break;}
case 500:
#line 5231 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 0 ; 
    ;
    break;}
case 501:
#line 5238 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 1 ; 
    ;
    break;}
case 502:
#line 5245 "yacc.y"
{ 
      PostSubOperation_S.FileOut = yyvsp[0].c ; 
      if(PostOperation_S.AppendString) 
	strcat(PostSubOperation_S.FileOut, PostOperation_S.AppendString) ;
      PostSubOperation_S.CatFile = 2 ; 
    ;
    break;}
case 503:
#line 5252 "yacc.y"
{ 
      PostSubOperation_S.Depth = (int)yyvsp[0].d ; 
    ;
    break;}
case 504:
#line 5256 "yacc.y"
{ 
      PostSubOperation_S.Skin = 1 ; 
    ;
    break;}
case 505:
#line 5260 "yacc.y"
{
      PostSubOperation_S.Smoothing = (int)yyvsp[0].d ; 
    ;
    break;}
case 506:
#line 5264 "yacc.y"
{
      PostSubOperation_S.HarmonicToTime = (int)yyvsp[0].d ; 
    ;
    break;}
case 507:
#line 5268 "yacc.y"
{ 
      PostSubOperation_S.Format =
	Get_DefineForString(PostSubOperation_Format, yyvsp[0].c, &FlagError) ;
      if (FlagError) 
	vyyerror("Unknown Post-Processing Format: %s %s", yyvsp[0].c, 
		 Get_Valid_SXD(PostSubOperation_Format)) ;
      Free(yyvsp[0].c) ;
    ;
    break;}
case 508:
#line 5277 "yacc.y"
{
      PostSubOperation_S.HeaderChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.HeaderTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 509:
#line 5282 "yacc.y"
{
      PostSubOperation_S.FooterChar_L = List_Copy(ListOfChar_L) ;
      PostSubOperation_S.FooterTag_L  = List_Copy(ListOfInt_L) ;
    ;
    break;}
case 510:
#line 5287 "yacc.y"
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
case 511:
#line 5307 "yacc.y"
{ 
      if((int)yyvsp[0].d >= 1 && (int)yyvsp[0].d <= 3)
	PostSubOperation_S.Dimension = (int)yyvsp[0].d ;
      else
	vyyerror("Bad Dimension in Print") ;  	
    ;
    break;}
case 512:
#line 5314 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	j = (int)d ;
	List_Add(PostSubOperation_S.TimeStep_L, &j);
      }
    ;
    break;}
case 513:
#line 5321 "yacc.y"
{ 
      PostSubOperation_S.Adapt = 
	Get_DefineForString(Adaption_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Adaption Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Adaption_Type)) ;
    ;
    break;}
case 514:
#line 5329 "yacc.y"
{ 
      PostSubOperation_S.Sort = 
	Get_DefineForString(Sort_Type, yyvsp[0].c, &FlagError) ;
      if(FlagError)
	vyyerror("Unknown Sort Method: %s %s", yyvsp[0].c,
		 Get_Valid_SXD(Sort_Type)) ;
    ;
    break;}
case 515:
#line 5337 "yacc.y"
{ 
      if(yyvsp[0].d >= 0. && yyvsp[0].d < 3.)
	PostSubOperation_S.Target = yyvsp[0].d ;
      else
	vyyerror("Bad Target") ;
    ;
    break;}
case 516:
#line 5344 "yacc.y"
{ 
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Value_L, &d);
      }
    ;
    break;}
case 517:
#line 5351 "yacc.y"
{ 
      PostSubOperation_S.Iso = (int)yyvsp[0].d;
    ;
    break;}
case 518:
#line 5355 "yacc.y"
{ 
      PostSubOperation_S.Iso = -1 ;
      for(i=0 ; i<List_Nbr(ListOfDouble_L) ; i++){
	List_Read(ListOfDouble_L,i,&d);	
	List_Add(PostSubOperation_S.Iso_L, &d);
      }
    ;
    break;}
case 519:
#line 5368 "yacc.y"
{
      List_Reset(ListOfChar_L);
      List_Reset(ListOfInt_L);
    ;
    break;}
case 520:
#line 5374 "yacc.y"
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
case 521:
#line 5421 "yacc.y"
{ List_Reset(ListOfInt_L) ; ;
    break;}
case 523:
#line 5432 "yacc.y"
{ List_Reset(ListOfInt_L) ;  List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 524:
#line 5435 "yacc.y"
{ List_Add(ListOfInt_L, &(yyvsp[0].i)) ; ;
    break;}
case 525:
#line 5441 "yacc.y"
{ List_Reset(ListOfDouble_L) ; ;
    break;}
case 526:
#line 5442 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 528:
#line 5450 "yacc.y"
{ List_Reset(ListOfDouble_L) ;  List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 529:
#line 5453 "yacc.y"
{ 
      List_Reset(ListOfDouble_L) ; 
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 530:
#line 5462 "yacc.y"
{ List_Add(ListOfDouble_L, &(yyvsp[0].d)) ; ;
    break;}
case 531:
#line 5465 "yacc.y"
{
      for(i=0 ; i<List_Nbr(ListOfDouble2_L) ; i++){
	List_Read(ListOfDouble2_L, i, &Value) ;
	List_Add(ListOfDouble_L, &Value) ;
      }
    ;
    break;}
case 532:
#line 5476 "yacc.y"
{ List_Reset(ListOfDouble2_L) ; 
      for(d=yyvsp[-2].d ; (yyvsp[-2].d<yyvsp[0].d)?(d<=yyvsp[0].d):(d>=yyvsp[0].d) ; (yyvsp[-2].d<yyvsp[0].d)?(d+=1.):(d-=1.)) 
	List_Add(ListOfDouble2_L, &d) ;
    ;
    break;}
case 533:
#line 5482 "yacc.y"
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
case 534:
#line 5501 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[-1].d ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 535:
#line 5507 "yacc.y"
{ Constant_S.Name = yyvsp[-3].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[-1].c ;
      List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 536:
#line 5513 "yacc.y"
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
case 537:
#line 5525 "yacc.y"
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
case 540:
#line 5576 "yacc.y"
{ Constant_S.Name = yyvsp[0].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = 0. ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 541:
#line 5582 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_FLOAT ;
      Constant_S.Value.Float = yyvsp[0].d ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 542:
#line 5588 "yacc.y"
{ Constant_S.Name = yyvsp[-2].c ; Constant_S.Type = VAR_CHAR ;
      Constant_S.Value.Char = yyvsp[0].c ;
      if (!List_Search(ConstantTable_L, &Constant_S, fcmp_Constant))
	List_Replace(ConstantTable_L, &Constant_S, fcmp_Constant) ;
    ;
    break;}
case 543:
#line 5599 "yacc.y"
{ yyval.c = "Exp";    ;
    break;}
case 544:
#line 5600 "yacc.y"
{ yyval.c = "Log";    ;
    break;}
case 545:
#line 5601 "yacc.y"
{ yyval.c = "Log10";  ;
    break;}
case 546:
#line 5602 "yacc.y"
{ yyval.c = "Sqrt";   ;
    break;}
case 547:
#line 5603 "yacc.y"
{ yyval.c = "Sin";    ;
    break;}
case 548:
#line 5604 "yacc.y"
{ yyval.c = "Asin";   ;
    break;}
case 549:
#line 5605 "yacc.y"
{ yyval.c = "Cos";    ;
    break;}
case 550:
#line 5606 "yacc.y"
{ yyval.c = "Acos";   ;
    break;}
case 551:
#line 5607 "yacc.y"
{ yyval.c = "Tan";    ;
    break;}
case 552:
#line 5608 "yacc.y"
{ yyval.c = "Atan";   ;
    break;}
case 553:
#line 5609 "yacc.y"
{ yyval.c = "Atan2";  ;
    break;}
case 554:
#line 5610 "yacc.y"
{ yyval.c = "Sinh";   ;
    break;}
case 555:
#line 5611 "yacc.y"
{ yyval.c = "Cosh";   ;
    break;}
case 556:
#line 5612 "yacc.y"
{ yyval.c = "Tanh";   ;
    break;}
case 557:
#line 5613 "yacc.y"
{ yyval.c = "Fabs";   ;
    break;}
case 558:
#line 5614 "yacc.y"
{ yyval.c = "Floor";  ;
    break;}
case 559:
#line 5615 "yacc.y"
{ yyval.c = "Ceil";   ;
    break;}
case 560:
#line 5616 "yacc.y"
{ yyval.c = "Fmod";   ;
    break;}
case 561:
#line 5617 "yacc.y"
{ yyval.c = "Modulo"; ;
    break;}
case 562:
#line 5618 "yacc.y"
{ yyval.c = "Hypot";  ;
    break;}
case 563:
#line 5619 "yacc.y"
{ yyval.c = yyvsp[0].c;       ;
    break;}
case 564:
#line 5622 "yacc.y"
{ yyval.d = yyvsp[0].d ;          ;
    break;}
case 565:
#line 5623 "yacc.y"
{ yyval.d = yyvsp[-1].d ;          ;
    break;}
case 566:
#line 5624 "yacc.y"
{ yyval.d = -yyvsp[0].d ;         ;
    break;}
case 567:
#line 5625 "yacc.y"
{ yyval.d = !yyvsp[0].d ;         ;
    break;}
case 568:
#line 5626 "yacc.y"
{ yyval.d = yyvsp[-2].d - yyvsp[0].d ;     ;
    break;}
case 569:
#line 5627 "yacc.y"
{ yyval.d = yyvsp[-2].d + yyvsp[0].d ;     ;
    break;}
case 570:
#line 5628 "yacc.y"
{ yyval.d = yyvsp[-2].d * yyvsp[0].d ;     ;
    break;}
case 571:
#line 5629 "yacc.y"
{ yyval.d = yyvsp[-2].d / yyvsp[0].d ;     ;
    break;}
case 572:
#line 5630 "yacc.y"
{ yyval.d = (int)yyvsp[-2].d % (int)yyvsp[0].d ;  ;
    break;}
case 573:
#line 5631 "yacc.y"
{ yyval.d = pow(yyvsp[-2].d,yyvsp[0].d) ;  ;
    break;}
case 574:
#line 5632 "yacc.y"
{ yyval.d = yyvsp[-2].d < yyvsp[0].d ;     ;
    break;}
case 575:
#line 5633 "yacc.y"
{ yyval.d = yyvsp[-2].d > yyvsp[0].d ;     ;
    break;}
case 576:
#line 5634 "yacc.y"
{ yyval.d = yyvsp[-2].d <= yyvsp[0].d ;    ;
    break;}
case 577:
#line 5635 "yacc.y"
{ yyval.d = yyvsp[-2].d >= yyvsp[0].d ;    ;
    break;}
case 578:
#line 5636 "yacc.y"
{ yyval.d = yyvsp[-2].d == yyvsp[0].d ;    ;
    break;}
case 579:
#line 5637 "yacc.y"
{ yyval.d = yyvsp[-2].d != yyvsp[0].d ;    ;
    break;}
case 580:
#line 5638 "yacc.y"
{ yyval.d = yyvsp[-2].d && yyvsp[0].d ;    ;
    break;}
case 581:
#line 5639 "yacc.y"
{ yyval.d = yyvsp[-2].d || yyvsp[0].d ;    ;
    break;}
case 582:
#line 5640 "yacc.y"
{ yyval.d = exp(yyvsp[-1].d);      ;
    break;}
case 583:
#line 5641 "yacc.y"
{ yyval.d = log(yyvsp[-1].d);      ;
    break;}
case 584:
#line 5642 "yacc.y"
{ yyval.d = log10(yyvsp[-1].d);    ;
    break;}
case 585:
#line 5643 "yacc.y"
{ yyval.d = sqrt(yyvsp[-1].d);     ;
    break;}
case 586:
#line 5644 "yacc.y"
{ yyval.d = sin(yyvsp[-1].d);      ;
    break;}
case 587:
#line 5645 "yacc.y"
{ yyval.d = asin(yyvsp[-1].d);     ;
    break;}
case 588:
#line 5646 "yacc.y"
{ yyval.d = cos(yyvsp[-1].d);      ;
    break;}
case 589:
#line 5647 "yacc.y"
{ yyval.d = acos(yyvsp[-1].d);     ;
    break;}
case 590:
#line 5648 "yacc.y"
{ yyval.d = tan(yyvsp[-1].d);      ;
    break;}
case 591:
#line 5649 "yacc.y"
{ yyval.d = atan(yyvsp[-1].d);     ;
    break;}
case 592:
#line 5650 "yacc.y"
{ yyval.d = atan2(yyvsp[-3].d,yyvsp[-1].d); ;
    break;}
case 593:
#line 5651 "yacc.y"
{ yyval.d = sinh(yyvsp[-1].d);     ;
    break;}
case 594:
#line 5652 "yacc.y"
{ yyval.d = cosh(yyvsp[-1].d);     ;
    break;}
case 595:
#line 5653 "yacc.y"
{ yyval.d = tanh(yyvsp[-1].d);     ;
    break;}
case 596:
#line 5654 "yacc.y"
{ yyval.d = fabs(yyvsp[-1].d);     ;
    break;}
case 597:
#line 5655 "yacc.y"
{ yyval.d = floor(yyvsp[-1].d);    ;
    break;}
case 598:
#line 5656 "yacc.y"
{ yyval.d = ceil(yyvsp[-1].d);     ;
    break;}
case 599:
#line 5657 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 600:
#line 5658 "yacc.y"
{ yyval.d = fmod(yyvsp[-3].d,yyvsp[-1].d);  ;
    break;}
case 601:
#line 5659 "yacc.y"
{ yyval.d = sqrt(yyvsp[-3].d*yyvsp[-3].d+yyvsp[-1].d*yyvsp[-1].d);  ;
    break;}
case 602:
#line 5660 "yacc.y"
{ yyval.d = yyvsp[-4].d? yyvsp[-2].d : yyvsp[0].d ; ;
    break;}
case 603:
#line 5661 "yacc.y"
{ fprintf(stderr, "Value (line %ld) --> %.16g\n", yylinenum, yyvsp[-1].d); ;
    break;}
case 604:
#line 5666 "yacc.y"
{ yyval.d = yyvsp[0].d ; ;
    break;}
case 605:
#line 5667 "yacc.y"
{ yyval.d = (double)yyvsp[0].i ; ;
    break;}
case 606:
#line 5668 "yacc.y"
{ yyval.d = 3.1415926535897932 ; ;
    break;}
case 607:
#line 5669 "yacc.y"
{ yyval.d = (double)_0D ; ;
    break;}
case 608:
#line 5670 "yacc.y"
{ yyval.d = (double)_1D ; ;
    break;}
case 609:
#line 5671 "yacc.y"
{ yyval.d = (double)_2D ; ;
    break;}
case 610:
#line 5672 "yacc.y"
{ yyval.d = (double)_3D ; ;
    break;}
case 611:
#line 5674 "yacc.y"
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
case 612:
#line 5693 "yacc.y"
{ yyval.c = yyvsp[0].c ; ;
    break;}
case 613:
#line 5696 "yacc.y"
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
#line 5712 "yacc.y"



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


